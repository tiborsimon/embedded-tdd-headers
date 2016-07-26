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

#ifndef _PIC16LF1764_H_
#define _PIC16LF1764_H_


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


/*---------------------------------------------#
| STATUS                                   0x3 |
#----------------------------------------------#
| - | - | - | nTO | nPD | ZERO | STATUS_DC | C |
#----------------------------------------------#
| 7 | 6 | 5 | 4   | 3   | 2    | 1         | 0 |
#---------------------------------------------*/

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

#define STATUS_DC                                0x1
#define STATUS_DC_address                        0x003
#define STATUS_DC_position                       0x1
#define STATUS_DC_size                           0x1
#define STATUS_DC_value_mask                     0x2
#define STATUS_DC_clear_mask                     0xFD

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


/*------------------------------------------#
| PORTC                                 0xE |
#-------------------------------------------#
| - | - | RC5 | RC4 | RC3 | RC2 | RC1 | RC0 |
#-------------------------------------------#
| 7 | 6 | 5   | 4   | 3   | 2   | 1   | 0   |
#------------------------------------------*/

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

#define RC                                       0x0
#define RC_address                               0x00E
#define RC_position                              0x0
#define RC_size                                  0x6
#define RC_value_mask                            0x3F
#define RC_clear_mask                            0xC0

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

#define CCPIF                                    0x2
#define CCPIF_address                            0x011
#define CCPIF_position                           0x2
#define CCPIF_size                               0x1
#define CCPIF_value_mask                         0x4
#define CCPIF_clear_mask                         0xFB

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


/*---------------------------------------------#
| PIR2                                    0x12 |
#----------------------------------------------#
| OSFIF | C2IF | C1IF | - | BCL1IF | - | - | - |
#----------------------------------------------#
| 7     | 6    | 5    | 4 | 3      | 2 | 1 | 0 |
#---------------------------------------------*/

#define PIR2                                     0x0
#define PIR2_address                             0x012
#define PIR2_position                            0x0
#define PIR2_size                                0x8
#define PIR2_value_mask                          0xFF
#define PIR2_clear_mask                          0x0

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


/*-----------------------------------------------------------#
| PIR3                                                  0x13 |
#------------------------------------------------------------#
| - | PWM5IF | COG1IF | ZCDIF | - | CLC3IF | CLC2IF | CLC1IF |
#------------------------------------------------------------#
| 7 | 6      | 5      | 4     | 3 | 2      | 1      | 0      |
#-----------------------------------------------------------*/

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

#define ZCDIF                                    0x4
#define ZCDIF_address                            0x013
#define ZCDIF_position                           0x4
#define ZCDIF_size                               0x1
#define ZCDIF_value_mask                         0x10
#define ZCDIF_clear_mask                         0xEF

#define COG1IF                                   0x5
#define COG1IF_address                           0x013
#define COG1IF_position                          0x5
#define COG1IF_size                              0x1
#define COG1IF_value_mask                        0x20
#define COG1IF_clear_mask                        0xDF

#define PWM5IF                                   0x6
#define PWM5IF_address                           0x013
#define PWM5IF_position                          0x6
#define PWM5IF_size                              0x1
#define PWM5IF_value_mask                        0x40
#define PWM5IF_clear_mask                        0xBF


/*--------------------------------------------------------------#
| PIR4                                                     0x14 |
#---------------------------------------------------------------#
| - | - | TMR5GIF | TMR5IF | TMR3GIF | TMR3IF | TMR6IF | TMR4IF |
#---------------------------------------------------------------#
| 7 | 6 | 5       | 4      | 3       | 2      | 1      | 0      |
#--------------------------------------------------------------*/

#define PIR4                                     0x0
#define PIR4_address                             0x014
#define PIR4_position                            0x0
#define PIR4_size                                0x8
#define PIR4_value_mask                          0xFF
#define PIR4_clear_mask                          0x0

#define TMR4IF                                   0x0
#define TMR4IF_address                           0x014
#define TMR4IF_position                          0x0
#define TMR4IF_size                              0x1
#define TMR4IF_value_mask                        0x1
#define TMR4IF_clear_mask                        0xFE

#define TMR6IF                                   0x1
#define TMR6IF_address                           0x014
#define TMR6IF_position                          0x1
#define TMR6IF_size                              0x1
#define TMR6IF_value_mask                        0x2
#define TMR6IF_clear_mask                        0xFD

#define TMR3IF                                   0x2
#define TMR3IF_address                           0x014
#define TMR3IF_position                          0x2
#define TMR3IF_size                              0x1
#define TMR3IF_value_mask                        0x4
#define TMR3IF_clear_mask                        0xFB

#define TMR3GIF                                  0x3
#define TMR3GIF_address                          0x014
#define TMR3GIF_position                         0x3
#define TMR3GIF_size                             0x1
#define TMR3GIF_value_mask                       0x8
#define TMR3GIF_clear_mask                       0xF7

#define TMR5IF                                   0x4
#define TMR5IF_address                           0x014
#define TMR5IF_position                          0x4
#define TMR5IF_size                              0x1
#define TMR5IF_value_mask                        0x10
#define TMR5IF_clear_mask                        0xEF

#define TMR5GIF                                  0x5
#define TMR5GIF_address                          0x014
#define TMR5GIF_position                         0x5
#define TMR5GIF_size                             0x1
#define TMR5GIF_value_mask                       0x20
#define TMR5GIF_clear_mask                       0xDF


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
| TMR1L_TMR                     |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define TMR1L                                    0x0
#define TMR1L_address                            0x016
#define TMR1L_position                           0x0
#define TMR1L_size                               0x8
#define TMR1L_value_mask                         0xFF
#define TMR1L_clear_mask                         0x0

#define TMR1L_TMR                                0x0
#define TMR1L_TMR_address                        0x016
#define TMR1L_TMR_position                       0x0
#define TMR1L_TMR_size                           0x8
#define TMR1L_TMR_value_mask                     0xFF
#define TMR1L_TMR_clear_mask                     0x0


/*------------------------------#
| TMR1H                    0x17 |
#-------------------------------#
| TMR1H_TMR                     |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define TMR1H                                    0x0
#define TMR1H_address                            0x017
#define TMR1H_position                           0x0
#define TMR1H_size                               0x8
#define TMR1H_value_mask                         0xFF
#define TMR1H_clear_mask                         0x0

#define TMR1H_TMR                                0x0
#define TMR1H_TMR_address                        0x017
#define TMR1H_TMR_position                       0x0
#define TMR1H_TMR_size                           0x8
#define TMR1H_TMR_value_mask                     0xFF
#define TMR1H_TMR_clear_mask                     0x0


/*------------------------------------------------------------------------#
| T1CON                                                              0x18 |
#-------------------------------------------------------------------------#
| T1CS1 | T1CS0 | T1CKPS1 | T1CKPS0 | T1OSCEN | nT1SYNC | - | T1CON_TMRON |
#-------------------------------------------------------------------------#
| 7     | 6     | 5       | 4       | 3       | 2       | 1 | 0           |
#------------------------------------------------------------------------*/

#define T1CON                                    0x0
#define T1CON_address                            0x018
#define T1CON_position                           0x0
#define T1CON_size                               0x8
#define T1CON_value_mask                         0xFF
#define T1CON_clear_mask                         0x0

#define T1CON_TMRON                              0x0
#define T1CON_TMRON_address                      0x018
#define T1CON_TMRON_position                     0x0
#define T1CON_TMRON_size                         0x1
#define T1CON_TMRON_value_mask                   0x1
#define T1CON_TMRON_clear_mask                   0xFE

#define TMR1ON                                   0x0
#define TMR1ON_address                           0x018
#define TMR1ON_position                          0x0
#define TMR1ON_size                              0x1
#define TMR1ON_value_mask                        0x1
#define TMR1ON_clear_mask                        0xFE

#define T1CON_ON                                 0x0
#define T1CON_ON_address                         0x018
#define T1CON_ON_position                        0x0
#define T1CON_ON_size                            0x1
#define T1CON_ON_value_mask                      0x1
#define T1CON_ON_clear_mask                      0xFE

#define T1ON                                     0x0
#define T1ON_address                             0x018
#define T1ON_position                            0x0
#define T1ON_size                                0x1
#define T1ON_value_mask                          0x1
#define T1ON_clear_mask                          0xFE

#define T1CON_nSYNC                              0x2
#define T1CON_nSYNC_address                      0x018
#define T1CON_nSYNC_position                     0x2
#define T1CON_nSYNC_size                         0x1
#define T1CON_nSYNC_value_mask                   0x4
#define T1CON_nSYNC_clear_mask                   0xFB

#define T1CON_SYNC                               0x2
#define T1CON_SYNC_address                       0x018
#define T1CON_SYNC_position                      0x2
#define T1CON_SYNC_size                          0x1
#define T1CON_SYNC_value_mask                    0x4
#define T1CON_SYNC_clear_mask                    0xFB

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

#define OSCEN                                    0x3
#define OSCEN_address                            0x018
#define OSCEN_position                           0x3
#define OSCEN_size                               0x1
#define OSCEN_value_mask                         0x8
#define OSCEN_clear_mask                         0xF7

#define SOSCEN                                   0x3
#define SOSCEN_address                           0x018
#define SOSCEN_position                          0x3
#define SOSCEN_size                              0x1
#define SOSCEN_value_mask                        0x8
#define SOSCEN_clear_mask                        0xF7

#define T1CKPS0                                  0x4
#define T1CKPS0_address                          0x018
#define T1CKPS0_position                         0x4
#define T1CKPS0_size                             0x1
#define T1CKPS0_value_mask                       0x10
#define T1CKPS0_clear_mask                       0xEF

#define T1CON_CKPS0                              0x4
#define T1CON_CKPS0_address                      0x018
#define T1CON_CKPS0_position                     0x4
#define T1CON_CKPS0_size                         0x1
#define T1CON_CKPS0_value_mask                   0x10
#define T1CON_CKPS0_clear_mask                   0xEF

#define T1CON_CKPS                               0x4
#define T1CON_CKPS_address                       0x018
#define T1CON_CKPS_position                      0x4
#define T1CON_CKPS_size                          0x2
#define T1CON_CKPS_value_mask                    0x30
#define T1CON_CKPS_clear_mask                    0xCF

#define T1CON_CKPS1                              0x5
#define T1CON_CKPS1_address                      0x018
#define T1CON_CKPS1_position                     0x5
#define T1CON_CKPS1_size                         0x1
#define T1CON_CKPS1_value_mask                   0x20
#define T1CON_CKPS1_clear_mask                   0xDF

#define T1CKPS1                                  0x5
#define T1CKPS1_address                          0x018
#define T1CKPS1_position                         0x5
#define T1CKPS1_size                             0x1
#define T1CKPS1_value_mask                       0x20
#define T1CKPS1_clear_mask                       0xDF

#define T1CS0                                    0x6
#define T1CS0_address                            0x018
#define T1CS0_position                           0x6
#define T1CS0_size                               0x1
#define T1CS0_value_mask                         0x40
#define T1CS0_clear_mask                         0xBF

#define T1CON_CS0                                0x6
#define T1CON_CS0_address                        0x018
#define T1CON_CS0_position                       0x6
#define T1CON_CS0_size                           0x1
#define T1CON_CS0_value_mask                     0x40
#define T1CON_CS0_clear_mask                     0xBF

#define TMR1CS0                                  0x6
#define TMR1CS0_address                          0x018
#define TMR1CS0_position                         0x6
#define TMR1CS0_size                             0x1
#define TMR1CS0_value_mask                       0x40
#define TMR1CS0_clear_mask                       0xBF

#define T1CON_CS                                 0x6
#define T1CON_CS_address                         0x018
#define T1CON_CS_position                        0x6
#define T1CON_CS_size                            0x2
#define T1CON_CS_value_mask                      0xC0
#define T1CON_CS_clear_mask                      0x3F

#define T1CS1                                    0x7
#define T1CS1_address                            0x018
#define T1CS1_position                           0x7
#define T1CS1_size                               0x1
#define T1CS1_value_mask                         0x80
#define T1CS1_clear_mask                         0x7F

#define T1CON_CS1                                0x7
#define T1CON_CS1_address                        0x018
#define T1CON_CS1_position                       0x7
#define T1CON_CS1_size                           0x1
#define T1CON_CS1_value_mask                     0x80
#define T1CON_CS1_clear_mask                     0x7F

#define TMR1CS1                                  0x7
#define TMR1CS1_address                          0x018
#define TMR1CS1_position                         0x7
#define TMR1CS1_size                             0x1
#define TMR1CS1_value_mask                       0x80
#define TMR1CS1_clear_mask                       0x7F


/*----------------------------------------------------------------------------------#
| T1GCON                                                                       0x19 |
#-----------------------------------------------------------------------------------#
| T1GE | T1GPOL | T1GTM | T1GSPM | T1GCON_GGO_nDONE | T1GCON_GVAL | T1GSS1 | T1GSS0 |
#-----------------------------------------------------------------------------------#
| 7    | 6      | 5     | 4      | 3                | 2           | 1      | 0      |
#----------------------------------------------------------------------------------*/

#define T1GCON                                   0x0
#define T1GCON_address                           0x019
#define T1GCON_position                          0x0
#define T1GCON_size                              0x8
#define T1GCON_value_mask                        0xFF
#define T1GCON_clear_mask                        0x0

#define T1GCON_GSS0                              0x0
#define T1GCON_GSS0_address                      0x019
#define T1GCON_GSS0_position                     0x0
#define T1GCON_GSS0_size                         0x1
#define T1GCON_GSS0_value_mask                   0x1
#define T1GCON_GSS0_clear_mask                   0xFE

#define T1GCON_GSS                               0x0
#define T1GCON_GSS_address                       0x019
#define T1GCON_GSS_position                      0x0
#define T1GCON_GSS_size                          0x2
#define T1GCON_GSS_value_mask                    0x3
#define T1GCON_GSS_clear_mask                    0xFC

#define T1GSS0                                   0x0
#define T1GSS0_address                           0x019
#define T1GSS0_position                          0x0
#define T1GSS0_size                              0x1
#define T1GSS0_value_mask                        0x1
#define T1GSS0_clear_mask                        0xFE

#define T1GCON_GSS1                              0x1
#define T1GCON_GSS1_address                      0x019
#define T1GCON_GSS1_position                     0x1
#define T1GCON_GSS1_size                         0x1
#define T1GCON_GSS1_value_mask                   0x2
#define T1GCON_GSS1_clear_mask                   0xFD

#define T1GSS1                                   0x1
#define T1GSS1_address                           0x019
#define T1GSS1_position                          0x1
#define T1GSS1_size                              0x1
#define T1GSS1_value_mask                        0x2
#define T1GSS1_clear_mask                        0xFD

#define T1GCON_GVAL                              0x2
#define T1GCON_GVAL_address                      0x019
#define T1GCON_GVAL_position                     0x2
#define T1GCON_GVAL_size                         0x1
#define T1GCON_GVAL_value_mask                   0x4
#define T1GCON_GVAL_clear_mask                   0xFB

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

#define T1GCON_GGO_nDONE                         0x3
#define T1GCON_GGO_nDONE_address                 0x019
#define T1GCON_GGO_nDONE_position                0x3
#define T1GCON_GGO_nDONE_size                    0x1
#define T1GCON_GGO_nDONE_value_mask              0x8
#define T1GCON_GGO_nDONE_clear_mask              0xF7

#define T1GCON_GSPM                              0x4
#define T1GCON_GSPM_address                      0x019
#define T1GCON_GSPM_position                     0x4
#define T1GCON_GSPM_size                         0x1
#define T1GCON_GSPM_value_mask                   0x10
#define T1GCON_GSPM_clear_mask                   0xEF

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

#define T1GCON_GTM                               0x5
#define T1GCON_GTM_address                       0x019
#define T1GCON_GTM_position                      0x5
#define T1GCON_GTM_size                          0x1
#define T1GCON_GTM_value_mask                    0x20
#define T1GCON_GTM_clear_mask                    0xDF

#define T1GPOL                                   0x6
#define T1GPOL_address                           0x019
#define T1GPOL_position                          0x6
#define T1GPOL_size                              0x1
#define T1GPOL_value_mask                        0x40
#define T1GPOL_clear_mask                        0xBF

#define T1GCON_GPOL                              0x6
#define T1GCON_GPOL_address                      0x019
#define T1GCON_GPOL_position                     0x6
#define T1GCON_GPOL_size                         0x1
#define T1GCON_GPOL_value_mask                   0x40
#define T1GCON_GPOL_clear_mask                   0xBF

#define T1GCON_GE                                0x7
#define T1GCON_GE_address                        0x019
#define T1GCON_GE_position                       0x7
#define T1GCON_GE_size                           0x1
#define T1GCON_GE_value_mask                     0x80
#define T1GCON_GE_clear_mask                     0x7F

#define TMR1GE                                   0x7
#define TMR1GE_address                           0x019
#define TMR1GE_position                          0x7
#define TMR1GE_size                              0x1
#define TMR1GE_value_mask                        0x80
#define TMR1GE_clear_mask                        0x7F

#define T1GE                                     0x7
#define T1GE_address                             0x019
#define T1GE_position                            0x7
#define T1GE_size                                0x1
#define T1GE_value_mask                          0x80
#define T1GE_clear_mask                          0x7F


/*------------------------------#
| T2TMR                    0x1A |
#-------------------------------#
| T2TMR_TMR                     |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define T2TMR                                    0x0
#define T2TMR_address                            0x01A
#define T2TMR_position                           0x0
#define T2TMR_size                               0x8
#define T2TMR_value_mask                         0xFF
#define T2TMR_clear_mask                         0x0

#define TMR2                                     0x0
#define TMR2_address                             0x01A
#define TMR2_position                            0x0
#define TMR2_size                                0x8
#define TMR2_value_mask                          0xFF
#define TMR2_clear_mask                          0x0

#define T2TMR_TMR                                0x0
#define T2TMR_TMR_address                        0x01A
#define T2TMR_TMR_position                       0x0
#define T2TMR_TMR_size                           0x8
#define T2TMR_TMR_value_mask                     0xFF
#define T2TMR_TMR_clear_mask                     0x0


/*------------------------------#
| T2PR                     0x1B |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define T2PR                                     0x0
#define T2PR_address                             0x01B
#define T2PR_position                            0x0
#define T2PR_size                                0x8
#define T2PR_value_mask                          0xFF
#define T2PR_clear_mask                          0x0

#define T2PR_PR                                  0x0
#define T2PR_PR_address                          0x01B
#define T2PR_PR_position                         0x0
#define T2PR_PR_size                             0x8
#define T2PR_PR_value_mask                       0xFF
#define T2PR_PR_clear_mask                       0x0


/*-----------------------------------------------------------------------------------#
| T2CON                                                                         0x1C |
#------------------------------------------------------------------------------------#
| T2ON | T2CON_CKPS2 | T2CKPS1 | T2CKPS0 | T2OUTPS3 | T2OUTPS2 | T2OUTPS1 | T2OUTPS0 |
#------------------------------------------------------------------------------------#
| 7    | 6           | 5       | 4       | 3        | 2        | 1        | 0        |
#-----------------------------------------------------------------------------------*/

#define T2CON                                    0x0
#define T2CON_address                            0x01C
#define T2CON_position                           0x0
#define T2CON_size                               0x8
#define T2CON_value_mask                         0xFF
#define T2CON_clear_mask                         0x0

#define T2OUTPS0                                 0x0
#define T2OUTPS0_address                         0x01C
#define T2OUTPS0_position                        0x0
#define T2OUTPS0_size                            0x1
#define T2OUTPS0_value_mask                      0x1
#define T2OUTPS0_clear_mask                      0xFE

#define T2CON_OUTPS0                             0x0
#define T2CON_OUTPS0_address                     0x01C
#define T2CON_OUTPS0_position                    0x0
#define T2CON_OUTPS0_size                        0x1
#define T2CON_OUTPS0_value_mask                  0x1
#define T2CON_OUTPS0_clear_mask                  0xFE

#define T2OUTPS                                  0x0
#define T2OUTPS_address                          0x01C
#define T2OUTPS_position                         0x0
#define T2OUTPS_size                             0x4
#define T2OUTPS_value_mask                       0xF
#define T2OUTPS_clear_mask                       0xF0

#define T2CON_OUTPS                              0x0
#define T2CON_OUTPS_address                      0x01C
#define T2CON_OUTPS_position                     0x0
#define T2CON_OUTPS_size                         0x4
#define T2CON_OUTPS_value_mask                   0xF
#define T2CON_OUTPS_clear_mask                   0xF0

#define T2OUTPS1                                 0x1
#define T2OUTPS1_address                         0x01C
#define T2OUTPS1_position                        0x1
#define T2OUTPS1_size                            0x1
#define T2OUTPS1_value_mask                      0x2
#define T2OUTPS1_clear_mask                      0xFD

#define T2CON_OUTPS1                             0x1
#define T2CON_OUTPS1_address                     0x01C
#define T2CON_OUTPS1_position                    0x1
#define T2CON_OUTPS1_size                        0x1
#define T2CON_OUTPS1_value_mask                  0x2
#define T2CON_OUTPS1_clear_mask                  0xFD

#define T2OUTPS2                                 0x2
#define T2OUTPS2_address                         0x01C
#define T2OUTPS2_position                        0x2
#define T2OUTPS2_size                            0x1
#define T2OUTPS2_value_mask                      0x4
#define T2OUTPS2_clear_mask                      0xFB

#define T2CON_OUTPS2                             0x2
#define T2CON_OUTPS2_address                     0x01C
#define T2CON_OUTPS2_position                    0x2
#define T2CON_OUTPS2_size                        0x1
#define T2CON_OUTPS2_value_mask                  0x4
#define T2CON_OUTPS2_clear_mask                  0xFB

#define T2OUTPS3                                 0x3
#define T2OUTPS3_address                         0x01C
#define T2OUTPS3_position                        0x3
#define T2OUTPS3_size                            0x1
#define T2OUTPS3_value_mask                      0x8
#define T2OUTPS3_clear_mask                      0xF7

#define T2CON_OUTPS3                             0x3
#define T2CON_OUTPS3_address                     0x01C
#define T2CON_OUTPS3_position                    0x3
#define T2CON_OUTPS3_size                        0x1
#define T2CON_OUTPS3_value_mask                  0x8
#define T2CON_OUTPS3_clear_mask                  0xF7

#define T2CKPS0                                  0x4
#define T2CKPS0_address                          0x01C
#define T2CKPS0_position                         0x4
#define T2CKPS0_size                             0x1
#define T2CKPS0_value_mask                       0x10
#define T2CKPS0_clear_mask                       0xEF

#define T2CON_CKPS0                              0x4
#define T2CON_CKPS0_address                      0x01C
#define T2CON_CKPS0_position                     0x4
#define T2CON_CKPS0_size                         0x1
#define T2CON_CKPS0_value_mask                   0x10
#define T2CON_CKPS0_clear_mask                   0xEF

#define T2CON_CKPS                               0x4
#define T2CON_CKPS_address                       0x01C
#define T2CON_CKPS_position                      0x4
#define T2CON_CKPS_size                          0x3
#define T2CON_CKPS_value_mask                    0x70
#define T2CON_CKPS_clear_mask                    0x8F

#define T2CKPS                                   0x4
#define T2CKPS_address                           0x01C
#define T2CKPS_position                          0x4
#define T2CKPS_size                              0x3
#define T2CKPS_value_mask                        0x70
#define T2CKPS_clear_mask                        0x8F

#define T2CKPS1                                  0x5
#define T2CKPS1_address                          0x01C
#define T2CKPS1_position                         0x5
#define T2CKPS1_size                             0x1
#define T2CKPS1_value_mask                       0x20
#define T2CKPS1_clear_mask                       0xDF

#define T2CON_CKPS1                              0x5
#define T2CON_CKPS1_address                      0x01C
#define T2CON_CKPS1_position                     0x5
#define T2CON_CKPS1_size                         0x1
#define T2CON_CKPS1_value_mask                   0x20
#define T2CON_CKPS1_clear_mask                   0xDF

#define T2CKPS2                                  0x6
#define T2CKPS2_address                          0x01C
#define T2CKPS2_position                         0x6
#define T2CKPS2_size                             0x1
#define T2CKPS2_value_mask                       0x40
#define T2CKPS2_clear_mask                       0xBF

#define T2CON_CKPS2                              0x6
#define T2CON_CKPS2_address                      0x01C
#define T2CON_CKPS2_position                     0x6
#define T2CON_CKPS2_size                         0x1
#define T2CON_CKPS2_value_mask                   0x40
#define T2CON_CKPS2_clear_mask                   0xBF

#define T2CON_ON                                 0x7
#define T2CON_ON_address                         0x01C
#define T2CON_ON_position                        0x7
#define T2CON_ON_size                            0x1
#define T2CON_ON_value_mask                      0x80
#define T2CON_ON_clear_mask                      0x7F

#define TMR2ON                                   0x7
#define TMR2ON_address                           0x01C
#define TMR2ON_position                          0x7
#define TMR2ON_size                              0x1
#define TMR2ON_value_mask                        0x80
#define TMR2ON_clear_mask                        0x7F

#define T2ON                                     0x7
#define T2ON_address                             0x01C
#define T2ON_position                            0x7
#define T2ON_size                                0x1
#define T2ON_value_mask                          0x80
#define T2ON_clear_mask                          0x7F


/*---------------------------------------------------------------------------------------#
| T2HLT                                                                             0x1D |
#----------------------------------------------------------------------------------------#
| T2PSYNC | T2HLT_CKPOL | T2HLT_CKSYNC | T2MODE4 | T2MODE3 | T2MODE2 | T2MODE1 | T2MODE0 |
#----------------------------------------------------------------------------------------#
| 7       | 6           | 5            | 4       | 3       | 2       | 1       | 0       |
#---------------------------------------------------------------------------------------*/

#define T2HLT                                    0x0
#define T2HLT_address                            0x01D
#define T2HLT_position                           0x0
#define T2HLT_size                               0x8
#define T2HLT_value_mask                         0xFF
#define T2HLT_clear_mask                         0x0

#define T2HLT_MODE                               0x0
#define T2HLT_MODE_address                       0x01D
#define T2HLT_MODE_position                      0x0
#define T2HLT_MODE_size                          0x5
#define T2HLT_MODE_value_mask                    0x1F
#define T2HLT_MODE_clear_mask                    0xE0

#define T2MODE                                   0x0
#define T2MODE_address                           0x01D
#define T2MODE_position                          0x0
#define T2MODE_size                              0x5
#define T2MODE_value_mask                        0x1F
#define T2MODE_clear_mask                        0xE0

#define T2MODE0                                  0x0
#define T2MODE0_address                          0x01D
#define T2MODE0_position                         0x0
#define T2MODE0_size                             0x1
#define T2MODE0_value_mask                       0x1
#define T2MODE0_clear_mask                       0xFE

#define T2HLT_MODE0                              0x0
#define T2HLT_MODE0_address                      0x01D
#define T2HLT_MODE0_position                     0x0
#define T2HLT_MODE0_size                         0x1
#define T2HLT_MODE0_value_mask                   0x1
#define T2HLT_MODE0_clear_mask                   0xFE

#define T2MODE1                                  0x1
#define T2MODE1_address                          0x01D
#define T2MODE1_position                         0x1
#define T2MODE1_size                             0x1
#define T2MODE1_value_mask                       0x2
#define T2MODE1_clear_mask                       0xFD

#define T2HLT_MODE1                              0x1
#define T2HLT_MODE1_address                      0x01D
#define T2HLT_MODE1_position                     0x1
#define T2HLT_MODE1_size                         0x1
#define T2HLT_MODE1_value_mask                   0x2
#define T2HLT_MODE1_clear_mask                   0xFD

#define T2MODE2                                  0x2
#define T2MODE2_address                          0x01D
#define T2MODE2_position                         0x2
#define T2MODE2_size                             0x1
#define T2MODE2_value_mask                       0x4
#define T2MODE2_clear_mask                       0xFB

#define T2HLT_MODE2                              0x2
#define T2HLT_MODE2_address                      0x01D
#define T2HLT_MODE2_position                     0x2
#define T2HLT_MODE2_size                         0x1
#define T2HLT_MODE2_value_mask                   0x4
#define T2HLT_MODE2_clear_mask                   0xFB

#define T2MODE3                                  0x3
#define T2MODE3_address                          0x01D
#define T2MODE3_position                         0x3
#define T2MODE3_size                             0x1
#define T2MODE3_value_mask                       0x8
#define T2MODE3_clear_mask                       0xF7

#define T2HLT_MODE3                              0x3
#define T2HLT_MODE3_address                      0x01D
#define T2HLT_MODE3_position                     0x3
#define T2HLT_MODE3_size                         0x1
#define T2HLT_MODE3_value_mask                   0x8
#define T2HLT_MODE3_clear_mask                   0xF7

#define T2MODE4                                  0x4
#define T2MODE4_address                          0x01D
#define T2MODE4_position                         0x4
#define T2MODE4_size                             0x1
#define T2MODE4_value_mask                       0x10
#define T2MODE4_clear_mask                       0xEF

#define T2HLT_MODE4                              0x4
#define T2HLT_MODE4_address                      0x01D
#define T2HLT_MODE4_position                     0x4
#define T2HLT_MODE4_size                         0x1
#define T2HLT_MODE4_value_mask                   0x10
#define T2HLT_MODE4_clear_mask                   0xEF

#define T2HLT_CKSYNC                             0x5
#define T2HLT_CKSYNC_address                     0x01D
#define T2HLT_CKSYNC_position                    0x5
#define T2HLT_CKSYNC_size                        0x1
#define T2HLT_CKSYNC_value_mask                  0x20
#define T2HLT_CKSYNC_clear_mask                  0xDF

#define T2CKSYNC                                 0x5
#define T2CKSYNC_address                         0x01D
#define T2CKSYNC_position                        0x5
#define T2CKSYNC_size                            0x1
#define T2CKSYNC_value_mask                      0x20
#define T2CKSYNC_clear_mask                      0xDF

#define T2HLT_CKPOL                              0x6
#define T2HLT_CKPOL_address                      0x01D
#define T2HLT_CKPOL_position                     0x6
#define T2HLT_CKPOL_size                         0x1
#define T2HLT_CKPOL_value_mask                   0x40
#define T2HLT_CKPOL_clear_mask                   0xBF

#define T2CKPOL                                  0x6
#define T2CKPOL_address                          0x01D
#define T2CKPOL_position                         0x6
#define T2CKPOL_size                             0x1
#define T2CKPOL_value_mask                       0x40
#define T2CKPOL_clear_mask                       0xBF

#define T2PSYNC                                  0x7
#define T2PSYNC_address                          0x01D
#define T2PSYNC_position                         0x7
#define T2PSYNC_size                             0x1
#define T2PSYNC_value_mask                       0x80
#define T2PSYNC_clear_mask                       0x7F

#define T2HLT_PSYNC                              0x7
#define T2HLT_PSYNC_address                      0x01D
#define T2HLT_PSYNC_position                     0x7
#define T2HLT_PSYNC_size                         0x1
#define T2HLT_PSYNC_value_mask                   0x80
#define T2HLT_PSYNC_clear_mask                   0x7F


/*----------------------------------------------#
| T2CLKCON                                 0x1E |
#-----------------------------------------------#
| - | - | - | - | T2CS3 | T2CS2 | T2CS1 | T2CS0 |
#-----------------------------------------------#
| 7 | 6 | 5 | 4 | 3     | 2     | 1     | 0     |
#----------------------------------------------*/

#define T2CLKCON                                 0x0
#define T2CLKCON_address                         0x01E
#define T2CLKCON_position                        0x0
#define T2CLKCON_size                            0x8
#define T2CLKCON_value_mask                      0xFF
#define T2CLKCON_clear_mask                      0x0

#define T2CS                                     0x0
#define T2CS_address                             0x01E
#define T2CS_position                            0x0
#define T2CS_size                                0x4
#define T2CS_value_mask                          0xF
#define T2CS_clear_mask                          0xF0

#define T2CS0                                    0x0
#define T2CS0_address                            0x01E
#define T2CS0_position                           0x0
#define T2CS0_size                               0x1
#define T2CS0_value_mask                         0x1
#define T2CS0_clear_mask                         0xFE

#define T2CLKCON_CS                              0x0
#define T2CLKCON_CS_address                      0x01E
#define T2CLKCON_CS_position                     0x0
#define T2CLKCON_CS_size                         0x4
#define T2CLKCON_CS_value_mask                   0xF
#define T2CLKCON_CS_clear_mask                   0xF0

#define T2CLKCON_CS0                             0x0
#define T2CLKCON_CS0_address                     0x01E
#define T2CLKCON_CS0_position                    0x0
#define T2CLKCON_CS0_size                        0x1
#define T2CLKCON_CS0_value_mask                  0x1
#define T2CLKCON_CS0_clear_mask                  0xFE

#define T2CS1                                    0x1
#define T2CS1_address                            0x01E
#define T2CS1_position                           0x1
#define T2CS1_size                               0x1
#define T2CS1_value_mask                         0x2
#define T2CS1_clear_mask                         0xFD

#define T2CLKCON_CS1                             0x1
#define T2CLKCON_CS1_address                     0x01E
#define T2CLKCON_CS1_position                    0x1
#define T2CLKCON_CS1_size                        0x1
#define T2CLKCON_CS1_value_mask                  0x2
#define T2CLKCON_CS1_clear_mask                  0xFD

#define T2CS2                                    0x2
#define T2CS2_address                            0x01E
#define T2CS2_position                           0x2
#define T2CS2_size                               0x1
#define T2CS2_value_mask                         0x4
#define T2CS2_clear_mask                         0xFB

#define T2CLKCON_CS2                             0x2
#define T2CLKCON_CS2_address                     0x01E
#define T2CLKCON_CS2_position                    0x2
#define T2CLKCON_CS2_size                        0x1
#define T2CLKCON_CS2_value_mask                  0x4
#define T2CLKCON_CS2_clear_mask                  0xFB

#define T2CS3                                    0x3
#define T2CS3_address                            0x01E
#define T2CS3_position                           0x3
#define T2CS3_size                               0x1
#define T2CS3_value_mask                         0x8
#define T2CS3_clear_mask                         0xF7

#define T2CLKCON_CS3                             0x3
#define T2CLKCON_CS3_address                     0x01E
#define T2CLKCON_CS3_position                    0x3
#define T2CLKCON_CS3_size                        0x1
#define T2CLKCON_CS3_value_mask                  0x8
#define T2CLKCON_CS3_clear_mask                  0xF7


/*------------------------------------------------------#
| T2RST                                            0x1F |
#-------------------------------------------------------#
| - | - | - | - | T2RSEL3 | T2RSEL2 | T2RSEL1 | T2RSEL0 |
#-------------------------------------------------------#
| 7 | 6 | 5 | 4 | 3       | 2       | 1       | 0       |
#------------------------------------------------------*/

#define T2RST                                    0x0
#define T2RST_address                            0x01F
#define T2RST_position                           0x0
#define T2RST_size                               0x8
#define T2RST_value_mask                         0xFF
#define T2RST_clear_mask                         0x0

#define T2RSEL0                                  0x0
#define T2RSEL0_address                          0x01F
#define T2RSEL0_position                         0x0
#define T2RSEL0_size                             0x1
#define T2RSEL0_value_mask                       0x1
#define T2RSEL0_clear_mask                       0xFE

#define T2RST_RSEL                               0x0
#define T2RST_RSEL_address                       0x01F
#define T2RST_RSEL_position                      0x0
#define T2RST_RSEL_size                          0x4
#define T2RST_RSEL_value_mask                    0xF
#define T2RST_RSEL_clear_mask                    0xF0

#define T2RSEL                                   0x0
#define T2RSEL_address                           0x01F
#define T2RSEL_position                          0x0
#define T2RSEL_size                              0x4
#define T2RSEL_value_mask                        0xF
#define T2RSEL_clear_mask                        0xF0

#define T2RST_RSEL0                              0x0
#define T2RST_RSEL0_address                      0x01F
#define T2RST_RSEL0_position                     0x0
#define T2RST_RSEL0_size                         0x1
#define T2RST_RSEL0_value_mask                   0x1
#define T2RST_RSEL0_clear_mask                   0xFE

#define T2RSEL1                                  0x1
#define T2RSEL1_address                          0x01F
#define T2RSEL1_position                         0x1
#define T2RSEL1_size                             0x1
#define T2RSEL1_value_mask                       0x2
#define T2RSEL1_clear_mask                       0xFD

#define T2RST_RSEL1                              0x1
#define T2RST_RSEL1_address                      0x01F
#define T2RST_RSEL1_position                     0x1
#define T2RST_RSEL1_size                         0x1
#define T2RST_RSEL1_value_mask                   0x2
#define T2RST_RSEL1_clear_mask                   0xFD

#define T2RST_RSEL2                              0x2
#define T2RST_RSEL2_address                      0x01F
#define T2RST_RSEL2_position                     0x2
#define T2RST_RSEL2_size                         0x1
#define T2RST_RSEL2_value_mask                   0x4
#define T2RST_RSEL2_clear_mask                   0xFB

#define T2RSEL2                                  0x2
#define T2RSEL2_address                          0x01F
#define T2RSEL2_position                         0x2
#define T2RSEL2_size                             0x1
#define T2RSEL2_value_mask                       0x4
#define T2RSEL2_clear_mask                       0xFB

#define T2RSEL3                                  0x3
#define T2RSEL3_address                          0x01F
#define T2RSEL3_position                         0x3
#define T2RSEL3_size                             0x1
#define T2RSEL3_value_mask                       0x8
#define T2RSEL3_clear_mask                       0xF7

#define T2RST_RSEL3                              0x3
#define T2RST_RSEL3_address                      0x01F
#define T2RST_RSEL3_position                     0x3
#define T2RST_RSEL3_size                         0x1
#define T2RST_RSEL3_value_mask                   0x8
#define T2RST_RSEL3_clear_mask                   0xF7


/*-------------------------------------------------------#
| TRISA                                             0x8C |
#--------------------------------------------------------#
| - | - | TRISA5 | TRISA4 | - | TRISA2 | TRISA1 | TRISA0 |
#--------------------------------------------------------#
| 7 | 6 | 5      | 4      | 3 | 2      | 1      | 0      |
#-------------------------------------------------------*/

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


/*------------------------------------------------------------#
| TRISC                                                  0x8E |
#-------------------------------------------------------------#
| - | - | TRISC5 | TRISC4 | TRISC3 | TRISC2 | TRISC1 | TRISC0 |
#-------------------------------------------------------------#
| 7 | 6 | 5      | 4      | 3      | 2      | 1      | 0      |
#------------------------------------------------------------*/

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

#define CCPIE                                    0x2
#define CCPIE_address                            0x091
#define CCPIE_position                           0x2
#define CCPIE_size                               0x1
#define CCPIE_value_mask                         0x4
#define CCPIE_clear_mask                         0xFB

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


/*---------------------------------------------#
| PIE2                                    0x92 |
#----------------------------------------------#
| OSFIE | C2IE | C1IE | - | BCL1IE | - | - | - |
#----------------------------------------------#
| 7     | 6    | 5    | 4 | 3      | 2 | 1 | 0 |
#---------------------------------------------*/

#define PIE2                                     0x0
#define PIE2_address                             0x092
#define PIE2_position                            0x0
#define PIE2_size                                0x8
#define PIE2_value_mask                          0xFF
#define PIE2_clear_mask                          0x0

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


/*----------------------------------------------------------#
| PIE3                                                 0x93 |
#-----------------------------------------------------------#
| - | PWM5IE | COGIE | ZCDIE | - | CLC3IE | CLC2IE | CLC1IE |
#-----------------------------------------------------------#
| 7 | 6      | 5     | 4     | 3 | 2      | 1      | 0      |
#----------------------------------------------------------*/

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

#define PWM5IE                                   0x6
#define PWM5IE_address                           0x093
#define PWM5IE_position                          0x6
#define PWM5IE_size                              0x1
#define PWM5IE_value_mask                        0x40
#define PWM5IE_clear_mask                        0xBF


/*--------------------------------------------------------------#
| PIE4                                                     0x94 |
#---------------------------------------------------------------#
| - | - | TMR5GIE | TMR5IE | TMR3GIE | TMR3IE | TMR6IE | TMR4IE |
#---------------------------------------------------------------#
| 7 | 6 | 5       | 4      | 3       | 2      | 1      | 0      |
#--------------------------------------------------------------*/

#define PIE4                                     0x0
#define PIE4_address                             0x094
#define PIE4_position                            0x0
#define PIE4_size                                0x8
#define PIE4_value_mask                          0xFF
#define PIE4_clear_mask                          0x0

#define TMR4IE                                   0x0
#define TMR4IE_address                           0x094
#define TMR4IE_position                          0x0
#define TMR4IE_size                              0x1
#define TMR4IE_value_mask                        0x1
#define TMR4IE_clear_mask                        0xFE

#define TMR6IE                                   0x1
#define TMR6IE_address                           0x094
#define TMR6IE_position                          0x1
#define TMR6IE_size                              0x1
#define TMR6IE_value_mask                        0x2
#define TMR6IE_clear_mask                        0xFD

#define TMR3IE                                   0x2
#define TMR3IE_address                           0x094
#define TMR3IE_position                          0x2
#define TMR3IE_size                              0x1
#define TMR3IE_value_mask                        0x4
#define TMR3IE_clear_mask                        0xFB

#define TMR3GIE                                  0x3
#define TMR3GIE_address                          0x094
#define TMR3GIE_position                         0x3
#define TMR3GIE_size                             0x1
#define TMR3GIE_value_mask                       0x8
#define TMR3GIE_clear_mask                       0xF7

#define TMR5IE                                   0x4
#define TMR5IE_address                           0x094
#define TMR5IE_position                          0x4
#define TMR5IE_size                              0x1
#define TMR5IE_value_mask                        0x10
#define TMR5IE_clear_mask                        0xEF

#define TMR5GIE                                  0x5
#define TMR5GIE_address                          0x094
#define TMR5GIE_position                         0x5
#define TMR5GIE_size                             0x1
#define TMR5GIE_value_mask                       0x20
#define TMR5GIE_clear_mask                       0xDF


/*---------------------------------------------------------------------------------------#
| OPTION_REG                                                                        0x95 |
#----------------------------------------------------------------------------------------#
| nWPUEN | INTEDG | T0CS | T0SE | PSA | OPTION_REG_PS2 | OPTION_REG_PS1 | OPTION_REG_PS0 |
#----------------------------------------------------------------------------------------#
| 7      | 6      | 5    | 4    | 3   | 2              | 1              | 0              |
#---------------------------------------------------------------------------------------*/

#define OPTION_REG                               0x0
#define OPTION_REG_address                       0x095
#define OPTION_REG_position                      0x0
#define OPTION_REG_size                          0x8
#define OPTION_REG_value_mask                    0xFF
#define OPTION_REG_clear_mask                    0x0

#define OPTION_REG_PS                            0x0
#define OPTION_REG_PS_address                    0x095
#define OPTION_REG_PS_position                   0x0
#define OPTION_REG_PS_size                       0x3
#define OPTION_REG_PS_value_mask                 0x7
#define OPTION_REG_PS_clear_mask                 0xF8

#define OPTION_REG_PS0                           0x0
#define OPTION_REG_PS0_address                   0x095
#define OPTION_REG_PS0_position                  0x0
#define OPTION_REG_PS0_size                      0x1
#define OPTION_REG_PS0_value_mask                0x1
#define OPTION_REG_PS0_clear_mask                0xFE

#define OPTION_REG_PS1                           0x1
#define OPTION_REG_PS1_address                   0x095
#define OPTION_REG_PS1_position                  0x1
#define OPTION_REG_PS1_size                      0x1
#define OPTION_REG_PS1_value_mask                0x2
#define OPTION_REG_PS1_clear_mask                0xFD

#define OPTION_REG_PS2                           0x2
#define OPTION_REG_PS2_address                   0x095
#define OPTION_REG_PS2_position                  0x2
#define OPTION_REG_PS2_size                      0x1
#define OPTION_REG_PS2_value_mask                0x4
#define OPTION_REG_PS2_clear_mask                0xFB

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


/*-----------------------------------------------------------------#
| ADCON2                                                      0x9F |
#------------------------------------------------------------------#
| TRIGSEL4 | TRIGSEL3 | TRIGSEL2 | TRIGSEL1 | TRIGSEL0 | - | - | - |
#------------------------------------------------------------------#
| 7        | 6        | 5        | 4        | 3        | 2 | 1 | 0 |
#-----------------------------------------------------------------*/

#define ADCON2                                   0x0
#define ADCON2_address                           0x09F
#define ADCON2_position                          0x0
#define ADCON2_size                              0x8
#define ADCON2_value_mask                        0xFF
#define ADCON2_clear_mask                        0x0

#define TRIGSEL                                  0x3
#define TRIGSEL_address                          0x09F
#define TRIGSEL_position                         0x3
#define TRIGSEL_size                             0x5
#define TRIGSEL_value_mask                       0xF8
#define TRIGSEL_clear_mask                       0x7

#define TRIGSEL0                                 0x3
#define TRIGSEL0_address                         0x09F
#define TRIGSEL0_position                        0x3
#define TRIGSEL0_size                            0x1
#define TRIGSEL0_value_mask                      0x8
#define TRIGSEL0_clear_mask                      0xF7

#define TRIGSEL1                                 0x4
#define TRIGSEL1_address                         0x09F
#define TRIGSEL1_position                        0x4
#define TRIGSEL1_size                            0x1
#define TRIGSEL1_value_mask                      0x10
#define TRIGSEL1_clear_mask                      0xEF

#define TRIGSEL2                                 0x5
#define TRIGSEL2_address                         0x09F
#define TRIGSEL2_position                        0x5
#define TRIGSEL2_size                            0x1
#define TRIGSEL2_value_mask                      0x20
#define TRIGSEL2_clear_mask                      0xDF

#define TRIGSEL3                                 0x6
#define TRIGSEL3_address                         0x09F
#define TRIGSEL3_position                        0x6
#define TRIGSEL3_size                            0x1
#define TRIGSEL3_value_mask                      0x40
#define TRIGSEL3_clear_mask                      0xBF

#define TRIGSEL4                                 0x7
#define TRIGSEL4_address                         0x09F
#define TRIGSEL4_position                        0x7
#define TRIGSEL4_size                            0x1
#define TRIGSEL4_value_mask                      0x80
#define TRIGSEL4_clear_mask                      0x7F


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


/*------------------------------------------------------#
| LATC                                            0x10E |
#-------------------------------------------------------#
| - | - | LATC5 | LATC4 | LATC3 | LATC2 | LATC1 | LATC0 |
#-------------------------------------------------------#
| 7 | 6 | 5     | 4     | 3     | 2     | 1     | 0     |
#------------------------------------------------------*/

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


/*----------------------------------------#
| CMOUT                             0x10F |
#-----------------------------------------#
| - | - | - | - | - | - | MC2OUT | MC1OUT |
#-----------------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1      | 0      |
#----------------------------------------*/

#define CMOUT                                    0x0
#define CMOUT_address                            0x10F
#define CMOUT_position                           0x0
#define CMOUT_size                               0x8
#define CMOUT_value_mask                         0xFF
#define CMOUT_clear_mask                         0x0

#define MC1OUT                                   0x0
#define MC1OUT_address                           0x10F
#define MC1OUT_position                          0x0
#define MC1OUT_size                              0x1
#define MC1OUT_value_mask                        0x1
#define MC1OUT_clear_mask                        0xFE

#define MC2OUT                                   0x1
#define MC2OUT_address                           0x10F
#define MC2OUT_position                          0x1
#define MC2OUT_size                              0x1
#define MC2OUT_value_mask                        0x2
#define MC2OUT_clear_mask                        0xFD


/*---------------------------------------------------------------------------#
| CM1CON0                                                              0x110 |
#----------------------------------------------------------------------------#
| C1ON | C1OUT | - | CM1CON0_POL | CM1CON0_ZLF | C1SP | CM1CON0_HYS | C1SYNC |
#----------------------------------------------------------------------------#
| 7    | 6     | 5 | 4           | 3           | 2    | 1           | 0      |
#---------------------------------------------------------------------------*/

#define CM1CON0                                  0x0
#define CM1CON0_address                          0x110
#define CM1CON0_position                         0x0
#define CM1CON0_size                             0x8
#define CM1CON0_value_mask                       0xFF
#define CM1CON0_clear_mask                       0x0

#define C1SYNC                                   0x0
#define C1SYNC_address                           0x110
#define C1SYNC_position                          0x0
#define C1SYNC_size                              0x1
#define C1SYNC_value_mask                        0x1
#define C1SYNC_clear_mask                        0xFE

#define CM1CON0_SYNC                             0x0
#define CM1CON0_SYNC_address                     0x110
#define CM1CON0_SYNC_position                    0x0
#define CM1CON0_SYNC_size                        0x1
#define CM1CON0_SYNC_value_mask                  0x1
#define CM1CON0_SYNC_clear_mask                  0xFE

#define CM1CON0_HYS                              0x1
#define CM1CON0_HYS_address                      0x110
#define CM1CON0_HYS_position                     0x1
#define CM1CON0_HYS_size                         0x1
#define CM1CON0_HYS_value_mask                   0x2
#define CM1CON0_HYS_clear_mask                   0xFD

#define C1HYS                                    0x1
#define C1HYS_address                            0x110
#define C1HYS_position                           0x1
#define C1HYS_size                               0x1
#define C1HYS_value_mask                         0x2
#define C1HYS_clear_mask                         0xFD

#define C1SP                                     0x2
#define C1SP_address                             0x110
#define C1SP_position                            0x2
#define C1SP_size                                0x1
#define C1SP_value_mask                          0x4
#define C1SP_clear_mask                          0xFB

#define CM1CON0_ZLF                              0x3
#define CM1CON0_ZLF_address                      0x110
#define CM1CON0_ZLF_position                     0x3
#define CM1CON0_ZLF_size                         0x1
#define CM1CON0_ZLF_value_mask                   0x8
#define CM1CON0_ZLF_clear_mask                   0xF7

#define C1ZLF                                    0x3
#define C1ZLF_address                            0x110
#define C1ZLF_position                           0x3
#define C1ZLF_size                               0x1
#define C1ZLF_value_mask                         0x8
#define C1ZLF_clear_mask                         0xF7

#define CM1CON0_POL                              0x4
#define CM1CON0_POL_address                      0x110
#define CM1CON0_POL_position                     0x4
#define CM1CON0_POL_size                         0x1
#define CM1CON0_POL_value_mask                   0x10
#define CM1CON0_POL_clear_mask                   0xEF

#define C1POL                                    0x4
#define C1POL_address                            0x110
#define C1POL_position                           0x4
#define C1POL_size                               0x1
#define C1POL_value_mask                         0x10
#define C1POL_clear_mask                         0xEF

#define C1OUT                                    0x6
#define C1OUT_address                            0x110
#define C1OUT_position                           0x6
#define C1OUT_size                               0x1
#define C1OUT_value_mask                         0x40
#define C1OUT_clear_mask                         0xBF

#define CM1CON0_OUT                              0x6
#define CM1CON0_OUT_address                      0x110
#define CM1CON0_OUT_position                     0x6
#define CM1CON0_OUT_size                         0x1
#define CM1CON0_OUT_value_mask                   0x40
#define CM1CON0_OUT_clear_mask                   0xBF

#define CM1CON0_ON                               0x7
#define CM1CON0_ON_address                       0x110
#define CM1CON0_ON_position                      0x7
#define CM1CON0_ON_size                          0x1
#define CM1CON0_ON_value_mask                    0x80
#define CM1CON0_ON_clear_mask                    0x7F

#define C1ON                                     0x7
#define C1ON_address                             0x110
#define C1ON_position                            0x7
#define C1ON_size                                0x1
#define C1ON_value_mask                          0x80
#define C1ON_clear_mask                          0x7F


/*----------------------------------------------------#
| CM1CON1                                       0x111 |
#-----------------------------------------------------#
| - | - | - | - | - | - | CM1CON1_INTP | CM1CON1_INTN |
#-----------------------------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1            | 0            |
#----------------------------------------------------*/

#define CM1CON1                                  0x0
#define CM1CON1_address                          0x111
#define CM1CON1_position                         0x0
#define CM1CON1_size                             0x8
#define CM1CON1_value_mask                       0xFF
#define CM1CON1_clear_mask                       0x0

#define C1INTN                                   0x0
#define C1INTN_address                           0x111
#define C1INTN_position                          0x0
#define C1INTN_size                              0x1
#define C1INTN_value_mask                        0x1
#define C1INTN_clear_mask                        0xFE

#define CM1CON1_INTN                             0x0
#define CM1CON1_INTN_address                     0x111
#define CM1CON1_INTN_position                    0x0
#define CM1CON1_INTN_size                        0x1
#define CM1CON1_INTN_value_mask                  0x1
#define CM1CON1_INTN_clear_mask                  0xFE

#define CM1CON1_INTP                             0x1
#define CM1CON1_INTP_address                     0x111
#define CM1CON1_INTP_position                    0x1
#define CM1CON1_INTP_size                        0x1
#define CM1CON1_INTP_value_mask                  0x2
#define CM1CON1_INTP_clear_mask                  0xFD

#define C1INTP                                   0x1
#define C1INTP_address                           0x111
#define C1INTP_position                          0x1
#define C1INTP_size                              0x1
#define C1INTP_value_mask                        0x2
#define C1INTP_clear_mask                        0xFD


/*---------------------------------------------------------------#
| CM1NSEL                                                  0x112 |
#----------------------------------------------------------------#
| - | - | - | - | - | CM1NSEL_NCH2 | CM1NSEL_NCH1 | CM1NSEL_NCH0 |
#----------------------------------------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2            | 1            | 0            |
#---------------------------------------------------------------*/

#define CM1NSEL                                  0x0
#define CM1NSEL_address                          0x112
#define CM1NSEL_position                         0x0
#define CM1NSEL_size                             0x8
#define CM1NSEL_value_mask                       0xFF
#define CM1NSEL_clear_mask                       0x0

#define CM1NSEL_NCH0                             0x0
#define CM1NSEL_NCH0_address                     0x112
#define CM1NSEL_NCH0_position                    0x0
#define CM1NSEL_NCH0_size                        0x1
#define CM1NSEL_NCH0_value_mask                  0x1
#define CM1NSEL_NCH0_clear_mask                  0xFE

#define C1NCH0                                   0x0
#define C1NCH0_address                           0x112
#define C1NCH0_position                          0x0
#define C1NCH0_size                              0x1
#define C1NCH0_value_mask                        0x1
#define C1NCH0_clear_mask                        0xFE

#define CM1NSEL_NCH                              0x0
#define CM1NSEL_NCH_address                      0x112
#define CM1NSEL_NCH_position                     0x0
#define CM1NSEL_NCH_size                         0x3
#define CM1NSEL_NCH_value_mask                   0x7
#define CM1NSEL_NCH_clear_mask                   0xF8

#define C1NCH                                    0x0
#define C1NCH_address                            0x112
#define C1NCH_position                           0x0
#define C1NCH_size                               0x3
#define C1NCH_value_mask                         0x7
#define C1NCH_clear_mask                         0xF8

#define CM1NSEL_NCH1                             0x1
#define CM1NSEL_NCH1_address                     0x112
#define CM1NSEL_NCH1_position                    0x1
#define CM1NSEL_NCH1_size                        0x1
#define CM1NSEL_NCH1_value_mask                  0x2
#define CM1NSEL_NCH1_clear_mask                  0xFD

#define C1NCH1                                   0x1
#define C1NCH1_address                           0x112
#define C1NCH1_position                          0x1
#define C1NCH1_size                              0x1
#define C1NCH1_value_mask                        0x2
#define C1NCH1_clear_mask                        0xFD

#define CM1NSEL_NCH2                             0x2
#define CM1NSEL_NCH2_address                     0x112
#define CM1NSEL_NCH2_position                    0x2
#define CM1NSEL_NCH2_size                        0x1
#define CM1NSEL_NCH2_value_mask                  0x4
#define CM1NSEL_NCH2_clear_mask                  0xFB

#define C1NCH2                                   0x2
#define C1NCH2_address                           0x112
#define C1NCH2_position                          0x2
#define C1NCH2_size                              0x1
#define C1NCH2_value_mask                        0x4
#define C1NCH2_clear_mask                        0xFB


/*--------------------------------------------------#
| CM1PSEL                                     0x113 |
#---------------------------------------------------#
| - | - | - | - | C1PCH3 | C1PCH2 | C1PCH1 | C1PCH0 |
#---------------------------------------------------#
| 7 | 6 | 5 | 4 | 3      | 2      | 1      | 0      |
#--------------------------------------------------*/

#define CM1PSEL                                  0x0
#define CM1PSEL_address                          0x113
#define CM1PSEL_position                         0x0
#define CM1PSEL_size                             0x8
#define CM1PSEL_value_mask                       0xFF
#define CM1PSEL_clear_mask                       0x0

#define CM1PSEL_PCH                              0x0
#define CM1PSEL_PCH_address                      0x113
#define CM1PSEL_PCH_position                     0x0
#define CM1PSEL_PCH_size                         0x4
#define CM1PSEL_PCH_value_mask                   0xF
#define CM1PSEL_PCH_clear_mask                   0xF0

#define C1PCH                                    0x0
#define C1PCH_address                            0x113
#define C1PCH_position                           0x0
#define C1PCH_size                               0x4
#define C1PCH_value_mask                         0xF
#define C1PCH_clear_mask                         0xF0

#define C1PCH0                                   0x0
#define C1PCH0_address                           0x113
#define C1PCH0_position                          0x0
#define C1PCH0_size                              0x1
#define C1PCH0_value_mask                        0x1
#define C1PCH0_clear_mask                        0xFE

#define CM1PSEL_PCH0                             0x0
#define CM1PSEL_PCH0_address                     0x113
#define CM1PSEL_PCH0_position                    0x0
#define CM1PSEL_PCH0_size                        0x1
#define CM1PSEL_PCH0_value_mask                  0x1
#define CM1PSEL_PCH0_clear_mask                  0xFE

#define C1PCH1                                   0x1
#define C1PCH1_address                           0x113
#define C1PCH1_position                          0x1
#define C1PCH1_size                              0x1
#define C1PCH1_value_mask                        0x2
#define C1PCH1_clear_mask                        0xFD

#define CM1PSEL_PCH1                             0x1
#define CM1PSEL_PCH1_address                     0x113
#define CM1PSEL_PCH1_position                    0x1
#define CM1PSEL_PCH1_size                        0x1
#define CM1PSEL_PCH1_value_mask                  0x2
#define CM1PSEL_PCH1_clear_mask                  0xFD

#define C1PCH2                                   0x2
#define C1PCH2_address                           0x113
#define C1PCH2_position                          0x2
#define C1PCH2_size                              0x1
#define C1PCH2_value_mask                        0x4
#define C1PCH2_clear_mask                        0xFB

#define CM1PSEL_PCH2                             0x2
#define CM1PSEL_PCH2_address                     0x113
#define CM1PSEL_PCH2_position                    0x2
#define CM1PSEL_PCH2_size                        0x1
#define CM1PSEL_PCH2_value_mask                  0x4
#define CM1PSEL_PCH2_clear_mask                  0xFB

#define C1PCH3                                   0x3
#define C1PCH3_address                           0x113
#define C1PCH3_position                          0x3
#define C1PCH3_size                              0x1
#define C1PCH3_value_mask                        0x8
#define C1PCH3_clear_mask                        0xF7

#define CM1PSEL_PCH3                             0x3
#define CM1PSEL_PCH3_address                     0x113
#define CM1PSEL_PCH3_position                    0x3
#define CM1PSEL_PCH3_size                        0x1
#define CM1PSEL_PCH3_value_mask                  0x8
#define CM1PSEL_PCH3_clear_mask                  0xF7


/*---------------------------------------------------------------#
| CM2CON0                                                  0x114 |
#----------------------------------------------------------------#
| CM2CON0_ON | C2OUT | - | C2POL | C2ZLF | C2SP | C2HYS | C2SYNC |
#----------------------------------------------------------------#
| 7          | 6     | 5 | 4     | 3     | 2    | 1     | 0      |
#---------------------------------------------------------------*/

#define CM2CON0                                  0x0
#define CM2CON0_address                          0x114
#define CM2CON0_position                         0x0
#define CM2CON0_size                             0x8
#define CM2CON0_value_mask                       0xFF
#define CM2CON0_clear_mask                       0x0

#define CM2CON0_SYNC                             0x0
#define CM2CON0_SYNC_address                     0x114
#define CM2CON0_SYNC_position                    0x0
#define CM2CON0_SYNC_size                        0x1
#define CM2CON0_SYNC_value_mask                  0x1
#define CM2CON0_SYNC_clear_mask                  0xFE

#define C2SYNC                                   0x0
#define C2SYNC_address                           0x114
#define C2SYNC_position                          0x0
#define C2SYNC_size                              0x1
#define C2SYNC_value_mask                        0x1
#define C2SYNC_clear_mask                        0xFE

#define C2HYS                                    0x1
#define C2HYS_address                            0x114
#define C2HYS_position                           0x1
#define C2HYS_size                               0x1
#define C2HYS_value_mask                         0x2
#define C2HYS_clear_mask                         0xFD

#define CM2CON0_HYS                              0x1
#define CM2CON0_HYS_address                      0x114
#define CM2CON0_HYS_position                     0x1
#define CM2CON0_HYS_size                         0x1
#define CM2CON0_HYS_value_mask                   0x2
#define CM2CON0_HYS_clear_mask                   0xFD

#define C2SP                                     0x2
#define C2SP_address                             0x114
#define C2SP_position                            0x2
#define C2SP_size                                0x1
#define C2SP_value_mask                          0x4
#define C2SP_clear_mask                          0xFB

#define C2ZLF                                    0x3
#define C2ZLF_address                            0x114
#define C2ZLF_position                           0x3
#define C2ZLF_size                               0x1
#define C2ZLF_value_mask                         0x8
#define C2ZLF_clear_mask                         0xF7

#define CM2CON0_ZLF                              0x3
#define CM2CON0_ZLF_address                      0x114
#define CM2CON0_ZLF_position                     0x3
#define CM2CON0_ZLF_size                         0x1
#define CM2CON0_ZLF_value_mask                   0x8
#define CM2CON0_ZLF_clear_mask                   0xF7

#define C2POL                                    0x4
#define C2POL_address                            0x114
#define C2POL_position                           0x4
#define C2POL_size                               0x1
#define C2POL_value_mask                         0x10
#define C2POL_clear_mask                         0xEF

#define CM2CON0_POL                              0x4
#define CM2CON0_POL_address                      0x114
#define CM2CON0_POL_position                     0x4
#define CM2CON0_POL_size                         0x1
#define CM2CON0_POL_value_mask                   0x10
#define CM2CON0_POL_clear_mask                   0xEF

#define C2OUT                                    0x6
#define C2OUT_address                            0x114
#define C2OUT_position                           0x6
#define C2OUT_size                               0x1
#define C2OUT_value_mask                         0x40
#define C2OUT_clear_mask                         0xBF

#define CM2CON0_OUT                              0x6
#define CM2CON0_OUT_address                      0x114
#define CM2CON0_OUT_position                     0x6
#define CM2CON0_OUT_size                         0x1
#define CM2CON0_OUT_value_mask                   0x40
#define CM2CON0_OUT_clear_mask                   0xBF

#define CM2CON0_ON                               0x7
#define CM2CON0_ON_address                       0x114
#define CM2CON0_ON_position                      0x7
#define CM2CON0_ON_size                          0x1
#define CM2CON0_ON_value_mask                    0x80
#define CM2CON0_ON_clear_mask                    0x7F

#define C2ON                                     0x7
#define C2ON_address                             0x114
#define C2ON_position                            0x7
#define C2ON_size                                0x1
#define C2ON_value_mask                          0x80
#define C2ON_clear_mask                          0x7F


/*----------------------------------------------#
| CM2CON1                                 0x115 |
#-----------------------------------------------#
| - | - | - | - | - | - | CM2CON1_INTP | C2INTN |
#-----------------------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1            | 0      |
#----------------------------------------------*/

#define CM2CON1                                  0x0
#define CM2CON1_address                          0x115
#define CM2CON1_position                         0x0
#define CM2CON1_size                             0x8
#define CM2CON1_value_mask                       0xFF
#define CM2CON1_clear_mask                       0x0

#define C2INTN                                   0x0
#define C2INTN_address                           0x115
#define C2INTN_position                          0x0
#define C2INTN_size                              0x1
#define C2INTN_value_mask                        0x1
#define C2INTN_clear_mask                        0xFE

#define CM2CON1_INTN                             0x0
#define CM2CON1_INTN_address                     0x115
#define CM2CON1_INTN_position                    0x0
#define CM2CON1_INTN_size                        0x1
#define CM2CON1_INTN_value_mask                  0x1
#define CM2CON1_INTN_clear_mask                  0xFE

#define CM2CON1_INTP                             0x1
#define CM2CON1_INTP_address                     0x115
#define CM2CON1_INTP_position                    0x1
#define CM2CON1_INTP_size                        0x1
#define CM2CON1_INTP_value_mask                  0x2
#define CM2CON1_INTP_clear_mask                  0xFD

#define C2INTP                                   0x1
#define C2INTP_address                           0x115
#define C2INTP_position                          0x1
#define C2INTP_size                              0x1
#define C2INTP_value_mask                        0x2
#define C2INTP_clear_mask                        0xFD


/*---------------------------------------------#
| CM2NSEL                                0x116 |
#----------------------------------------------#
| - | - | - | - | - | C2NCH2 | C2NCH1 | C2NCH0 |
#----------------------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2      | 1      | 0      |
#---------------------------------------------*/

#define CM2NSEL                                  0x0
#define CM2NSEL_address                          0x116
#define CM2NSEL_position                         0x0
#define CM2NSEL_size                             0x8
#define CM2NSEL_value_mask                       0xFF
#define CM2NSEL_clear_mask                       0x0

#define C2NCH0                                   0x0
#define C2NCH0_address                           0x116
#define C2NCH0_position                          0x0
#define C2NCH0_size                              0x1
#define C2NCH0_value_mask                        0x1
#define C2NCH0_clear_mask                        0xFE

#define CM2NSEL_NCH0                             0x0
#define CM2NSEL_NCH0_address                     0x116
#define CM2NSEL_NCH0_position                    0x0
#define CM2NSEL_NCH0_size                        0x1
#define CM2NSEL_NCH0_value_mask                  0x1
#define CM2NSEL_NCH0_clear_mask                  0xFE

#define C2NCH                                    0x0
#define C2NCH_address                            0x116
#define C2NCH_position                           0x0
#define C2NCH_size                               0x3
#define C2NCH_value_mask                         0x7
#define C2NCH_clear_mask                         0xF8

#define CM2NSEL_NCH                              0x0
#define CM2NSEL_NCH_address                      0x116
#define CM2NSEL_NCH_position                     0x0
#define CM2NSEL_NCH_size                         0x3
#define CM2NSEL_NCH_value_mask                   0x7
#define CM2NSEL_NCH_clear_mask                   0xF8

#define C2NCH1                                   0x1
#define C2NCH1_address                           0x116
#define C2NCH1_position                          0x1
#define C2NCH1_size                              0x1
#define C2NCH1_value_mask                        0x2
#define C2NCH1_clear_mask                        0xFD

#define CM2NSEL_NCH1                             0x1
#define CM2NSEL_NCH1_address                     0x116
#define CM2NSEL_NCH1_position                    0x1
#define CM2NSEL_NCH1_size                        0x1
#define CM2NSEL_NCH1_value_mask                  0x2
#define CM2NSEL_NCH1_clear_mask                  0xFD

#define C2NCH2                                   0x2
#define C2NCH2_address                           0x116
#define C2NCH2_position                          0x2
#define C2NCH2_size                              0x1
#define C2NCH2_value_mask                        0x4
#define C2NCH2_clear_mask                        0xFB

#define CM2NSEL_NCH2                             0x2
#define CM2NSEL_NCH2_address                     0x116
#define CM2NSEL_NCH2_position                    0x2
#define CM2NSEL_NCH2_size                        0x1
#define CM2NSEL_NCH2_value_mask                  0x4
#define CM2NSEL_NCH2_clear_mask                  0xFB


/*--------------------------------------------------------------------#
| CM2PSEL                                                       0x117 |
#---------------------------------------------------------------------#
| - | - | - | - | CM2PSEL_PCH3 | CM2PSEL_PCH2 | CM2PSEL_PCH1 | C2PCH0 |
#---------------------------------------------------------------------#
| 7 | 6 | 5 | 4 | 3            | 2            | 1            | 0      |
#--------------------------------------------------------------------*/

#define CM2PSEL                                  0x0
#define CM2PSEL_address                          0x117
#define CM2PSEL_position                         0x0
#define CM2PSEL_size                             0x8
#define CM2PSEL_value_mask                       0xFF
#define CM2PSEL_clear_mask                       0x0

#define CM2PSEL_PCH                              0x0
#define CM2PSEL_PCH_address                      0x117
#define CM2PSEL_PCH_position                     0x0
#define CM2PSEL_PCH_size                         0x4
#define CM2PSEL_PCH_value_mask                   0xF
#define CM2PSEL_PCH_clear_mask                   0xF0

#define C2PCH                                    0x0
#define C2PCH_address                            0x117
#define C2PCH_position                           0x0
#define C2PCH_size                               0x4
#define C2PCH_value_mask                         0xF
#define C2PCH_clear_mask                         0xF0

#define C2PCH0                                   0x0
#define C2PCH0_address                           0x117
#define C2PCH0_position                          0x0
#define C2PCH0_size                              0x1
#define C2PCH0_value_mask                        0x1
#define C2PCH0_clear_mask                        0xFE

#define CM2PSEL_PCH0                             0x0
#define CM2PSEL_PCH0_address                     0x117
#define CM2PSEL_PCH0_position                    0x0
#define CM2PSEL_PCH0_size                        0x1
#define CM2PSEL_PCH0_value_mask                  0x1
#define CM2PSEL_PCH0_clear_mask                  0xFE

#define C2PCH1                                   0x1
#define C2PCH1_address                           0x117
#define C2PCH1_position                          0x1
#define C2PCH1_size                              0x1
#define C2PCH1_value_mask                        0x2
#define C2PCH1_clear_mask                        0xFD

#define CM2PSEL_PCH1                             0x1
#define CM2PSEL_PCH1_address                     0x117
#define CM2PSEL_PCH1_position                    0x1
#define CM2PSEL_PCH1_size                        0x1
#define CM2PSEL_PCH1_value_mask                  0x2
#define CM2PSEL_PCH1_clear_mask                  0xFD

#define CM2PSEL_PCH2                             0x2
#define CM2PSEL_PCH2_address                     0x117
#define CM2PSEL_PCH2_position                    0x2
#define CM2PSEL_PCH2_size                        0x1
#define CM2PSEL_PCH2_value_mask                  0x4
#define CM2PSEL_PCH2_clear_mask                  0xFB

#define C2PCH2                                   0x2
#define C2PCH2_address                           0x117
#define C2PCH2_position                          0x2
#define C2PCH2_size                              0x1
#define C2PCH2_value_mask                        0x4
#define C2PCH2_clear_mask                        0xFB

#define CM2PSEL_PCH3                             0x3
#define CM2PSEL_PCH3_address                     0x117
#define CM2PSEL_PCH3_position                    0x3
#define CM2PSEL_PCH3_size                        0x1
#define CM2PSEL_PCH3_value_mask                  0x8
#define CM2PSEL_PCH3_clear_mask                  0xF7

#define C2PCH3                                   0x3
#define C2PCH3_address                           0x117
#define C2PCH3_position                          0x3
#define C2PCH3_size                              0x1
#define C2PCH3_value_mask                        0x8
#define C2PCH3_clear_mask                        0xF7


/*----------------------------------------------#
| ANSELA                                  0x18C |
#-----------------------------------------------#
| - | - | - | ANSA4 | - | ANSA2 | ANSA1 | ANSA0 |
#-----------------------------------------------#
| 7 | 6 | 5 | 4     | 3 | 2     | 1     | 0     |
#----------------------------------------------*/

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

#define ANSA4                                    0x4
#define ANSA4_address                            0x18C
#define ANSA4_position                           0x4
#define ANSA4_size                               0x1
#define ANSA4_value_mask                         0x10
#define ANSA4_clear_mask                         0xEF


/*----------------------------------------------#
| ANSELC                                  0x18E |
#-----------------------------------------------#
| - | - | - | - | ANSC3 | ANSC2 | ANSC1 | ANSC0 |
#-----------------------------------------------#
| 7 | 6 | 5 | 4 | 3     | 2     | 1     | 0     |
#----------------------------------------------*/

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


/*-------------------------------------------------------------#
| TX1STA                                                 0x19E |
#--------------------------------------------------------------#
| CSRC | TX9 | TXEN | TX1STA_SYNC | SENDB | BRGH | TRMT | TX9D |
#--------------------------------------------------------------#
| 7    | 6   | 5    | 4           | 3     | 2    | 1    | 0    |
#-------------------------------------------------------------*/

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

#define TX1STA_SYNC                              0x4
#define TX1STA_SYNC_address                      0x19E
#define TX1STA_SYNC_position                     0x4
#define TX1STA_SYNC_size                         0x1
#define TX1STA_SYNC_value_mask                   0x10
#define TX1STA_SYNC_clear_mask                   0xEF

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


/*------------------------------------------------------#
| WPUA                                            0x20C |
#-------------------------------------------------------#
| - | - | WPUA5 | WPUA4 | WPUA3 | WPUA2 | WPUA1 | WPUA0 |
#-------------------------------------------------------#
| 7 | 6 | 5     | 4     | 3     | 2     | 1     | 0     |
#------------------------------------------------------*/

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


/*------------------------------------------------------#
| WPUC                                            0x20E |
#-------------------------------------------------------#
| - | - | WPUC5 | WPUC4 | WPUC3 | WPUC2 | WPUC1 | WPUC0 |
#-------------------------------------------------------#
| 7 | 6 | 5     | 4     | 3     | 2     | 1     | 0     |
#------------------------------------------------------*/

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


/*--------------------------------------------#
| BORCON                                0x21D |
#---------------------------------------------#
| SBOREN | BORFS | - | - | - | - | - | BORRDY |
#---------------------------------------------#
| 7      | 6     | 5 | 4 | 3 | 2 | 1 | 0      |
#--------------------------------------------*/

#define BORCON                                   0x0
#define BORCON_address                           0x21D
#define BORCON_position                          0x0
#define BORCON_size                              0x8
#define BORCON_value_mask                        0xFF
#define BORCON_clear_mask                        0x0

#define BORRDY                                   0x0
#define BORRDY_address                           0x21D
#define BORRDY_position                          0x0
#define BORRDY_size                              0x1
#define BORRDY_value_mask                        0x1
#define BORRDY_clear_mask                        0xFE

#define BORFS                                    0x6
#define BORFS_address                            0x21D
#define BORFS_position                           0x6
#define BORFS_size                               0x1
#define BORFS_value_mask                         0x40
#define BORFS_clear_mask                         0xBF

#define SBOREN                                   0x7
#define SBOREN_address                           0x21D
#define SBOREN_position                          0x7
#define SBOREN_size                              0x1
#define SBOREN_value_mask                        0x80
#define SBOREN_clear_mask                        0x7F


/*-----------------------------------------------#
| FVRCON                                   0x21E |
#------------------------------------------------#
| FVREN | FVRRDY | TSEN | TSRNG | CDAFVR | ADFVR |
#------------------------------------------------#
| 7     | 6      | 5    | 4     | 3 | 2  | 1 | 0 |
#-----------------------------------------------*/

#define FVRCON                                   0x0
#define FVRCON_address                           0x21E
#define FVRCON_position                          0x0
#define FVRCON_size                              0x8
#define FVRCON_value_mask                        0xFF
#define FVRCON_clear_mask                        0x0

#define ADFVR                                    0x0
#define ADFVR_address                            0x21E
#define ADFVR_position                           0x0
#define ADFVR_size                               0x2
#define ADFVR_value_mask                         0x3
#define ADFVR_clear_mask                         0xFC

#define CDAFVR                                   0x2
#define CDAFVR_address                           0x21E
#define CDAFVR_position                          0x2
#define CDAFVR_size                              0x2
#define CDAFVR_value_mask                        0xC
#define CDAFVR_clear_mask                        0xF3

#define TSRNG                                    0x4
#define TSRNG_address                            0x21E
#define TSRNG_position                           0x4
#define TSRNG_size                               0x1
#define TSRNG_value_mask                         0x10
#define TSRNG_clear_mask                         0xEF

#define TSEN                                     0x5
#define TSEN_address                             0x21E
#define TSEN_position                            0x5
#define TSEN_size                                0x1
#define TSEN_value_mask                          0x20
#define TSEN_clear_mask                          0xDF

#define FVRRDY                                   0x6
#define FVRRDY_address                           0x21E
#define FVRRDY_position                          0x6
#define FVRRDY_size                              0x1
#define FVRRDY_value_mask                        0x40
#define FVRRDY_clear_mask                        0xBF

#define FVREN                                    0x7
#define FVREN_address                            0x21E
#define FVREN_position                           0x7
#define FVREN_size                               0x1
#define FVREN_value_mask                         0x80
#define FVREN_clear_mask                         0x7F


/*-------------------------------------------------------------#
| ZCD1CON                                                0x21F |
#--------------------------------------------------------------#
| ZCD1EN | - | ZCD1OUT | ZCD1POL | - | - | ZCD1INTP | ZCD1INTN |
#--------------------------------------------------------------#
| 7      | 6 | 5       | 4       | 3 | 2 | 1        | 0        |
#-------------------------------------------------------------*/

#define ZCD1CON                                  0x0
#define ZCD1CON_address                          0x21F
#define ZCD1CON_position                         0x0
#define ZCD1CON_size                             0x8
#define ZCD1CON_value_mask                       0xFF
#define ZCD1CON_clear_mask                       0x0

#define ZCD1INTN                                 0x0
#define ZCD1INTN_address                         0x21F
#define ZCD1INTN_position                        0x0
#define ZCD1INTN_size                            0x1
#define ZCD1INTN_value_mask                      0x1
#define ZCD1INTN_clear_mask                      0xFE

#define ZCD1INTP                                 0x1
#define ZCD1INTP_address                         0x21F
#define ZCD1INTP_position                        0x1
#define ZCD1INTP_size                            0x1
#define ZCD1INTP_value_mask                      0x2
#define ZCD1INTP_clear_mask                      0xFD

#define ZCD1POL                                  0x4
#define ZCD1POL_address                          0x21F
#define ZCD1POL_position                         0x4
#define ZCD1POL_size                             0x1
#define ZCD1POL_value_mask                       0x10
#define ZCD1POL_clear_mask                       0xEF

#define ZCD1OUT                                  0x5
#define ZCD1OUT_address                          0x21F
#define ZCD1OUT_position                         0x5
#define ZCD1OUT_size                             0x1
#define ZCD1OUT_value_mask                       0x20
#define ZCD1OUT_clear_mask                       0xDF

#define ZCD1EN                                   0x7
#define ZCD1EN_address                           0x21F
#define ZCD1EN_position                          0x7
#define ZCD1EN_size                              0x1
#define ZCD1EN_value_mask                        0x80
#define ZCD1EN_clear_mask                        0x7F


/*---------------------------------------------#
| ODCONA                                 0x28C |
#----------------------------------------------#
| - | - | ODA5 | ODA4 | - | ODA2 | ODA1 | ODA0 |
#----------------------------------------------#
| 7 | 6 | 5    | 4    | 3 | 2    | 1    | 0    |
#---------------------------------------------*/

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


/*------------------------------------------------#
| ODCONC                                    0x28E |
#-------------------------------------------------#
| - | - | ODC5 | ODC4 | ODC3 | ODC2 | ODC1 | ODC0 |
#-------------------------------------------------#
| 7 | 6 | 5    | 4    | 3    | 2    | 1    | 0    |
#------------------------------------------------*/

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


/*------------------------------#
| CCPR1L                  0x291 |
#-------------------------------#
| RL                            |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define CCPR1L                                   0x0
#define CCPR1L_address                           0x291
#define CCPR1L_position                          0x0
#define CCPR1L_size                              0x8
#define CCPR1L_value_mask                        0xFF
#define CCPR1L_clear_mask                        0x0

#define RL                                       0x0
#define RL_address                               0x291
#define RL_position                              0x0
#define RL_size                                  0x8
#define RL_value_mask                            0xFF
#define RL_clear_mask                            0x0


/*------------------------------#
| CCPR1H                  0x292 |
#-------------------------------#
| RH                            |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define CCPR1H                                   0x0
#define CCPR1H_address                           0x292
#define CCPR1H_position                          0x0
#define CCPR1H_size                              0x8
#define CCPR1H_value_mask                        0xFF
#define CCPR1H_clear_mask                        0x0

#define RH                                       0x0
#define RH_address                               0x292
#define RH_position                              0x0
#define RH_size                                  0x8
#define RH_value_mask                            0xFF
#define RH_clear_mask                            0x0


/*-------------------------------------------------------------------------------#
| CCP1CON                                                                  0x293 |
#--------------------------------------------------------------------------------#
| CCP1EN | - | CCP1CON_OUT | FMT | CCP1MODE3 | CCP1MODE2 | CCP1MODE1 | CCP1MODE0 |
#--------------------------------------------------------------------------------#
| 7      | 6 | 5           | 4   | 3         | 2         | 1         | 0         |
#-------------------------------------------------------------------------------*/

#define CCP1CON                                  0x0
#define CCP1CON_address                          0x293
#define CCP1CON_position                         0x0
#define CCP1CON_size                             0x8
#define CCP1CON_value_mask                       0xFF
#define CCP1CON_clear_mask                       0x0

#define CCP1CON_MODE                             0x0
#define CCP1CON_MODE_address                     0x293
#define CCP1CON_MODE_position                    0x0
#define CCP1CON_MODE_size                        0x4
#define CCP1CON_MODE_value_mask                  0xF
#define CCP1CON_MODE_clear_mask                  0xF0

#define CCP1CON_MODE0                            0x0
#define CCP1CON_MODE0_address                    0x293
#define CCP1CON_MODE0_position                   0x0
#define CCP1CON_MODE0_size                       0x1
#define CCP1CON_MODE0_value_mask                 0x1
#define CCP1CON_MODE0_clear_mask                 0xFE

#define CCP1MODE                                 0x0
#define CCP1MODE_address                         0x293
#define CCP1MODE_position                        0x0
#define CCP1MODE_size                            0x4
#define CCP1MODE_value_mask                      0xF
#define CCP1MODE_clear_mask                      0xF0

#define CCP1MODE0                                0x0
#define CCP1MODE0_address                        0x293
#define CCP1MODE0_position                       0x0
#define CCP1MODE0_size                           0x1
#define CCP1MODE0_value_mask                     0x1
#define CCP1MODE0_clear_mask                     0xFE

#define CCP1MODE1                                0x1
#define CCP1MODE1_address                        0x293
#define CCP1MODE1_position                       0x1
#define CCP1MODE1_size                           0x1
#define CCP1MODE1_value_mask                     0x2
#define CCP1MODE1_clear_mask                     0xFD

#define CCP1CON_MODE1                            0x1
#define CCP1CON_MODE1_address                    0x293
#define CCP1CON_MODE1_position                   0x1
#define CCP1CON_MODE1_size                       0x1
#define CCP1CON_MODE1_value_mask                 0x2
#define CCP1CON_MODE1_clear_mask                 0xFD

#define CCP1MODE2                                0x2
#define CCP1MODE2_address                        0x293
#define CCP1MODE2_position                       0x2
#define CCP1MODE2_size                           0x1
#define CCP1MODE2_value_mask                     0x4
#define CCP1MODE2_clear_mask                     0xFB

#define CCP1CON_MODE2                            0x2
#define CCP1CON_MODE2_address                    0x293
#define CCP1CON_MODE2_position                   0x2
#define CCP1CON_MODE2_size                       0x1
#define CCP1CON_MODE2_value_mask                 0x4
#define CCP1CON_MODE2_clear_mask                 0xFB

#define CCP1MODE3                                0x3
#define CCP1MODE3_address                        0x293
#define CCP1MODE3_position                       0x3
#define CCP1MODE3_size                           0x1
#define CCP1MODE3_value_mask                     0x8
#define CCP1MODE3_clear_mask                     0xF7

#define CCP1CON_MODE3                            0x3
#define CCP1CON_MODE3_address                    0x293
#define CCP1CON_MODE3_position                   0x3
#define CCP1CON_MODE3_size                       0x1
#define CCP1CON_MODE3_value_mask                 0x8
#define CCP1CON_MODE3_clear_mask                 0xF7

#define FMT                                      0x4
#define FMT_address                              0x293
#define FMT_position                             0x4
#define FMT_size                                 0x1
#define FMT_value_mask                           0x10
#define FMT_clear_mask                           0xEF

#define CCP1FMT                                  0x4
#define CCP1FMT_address                          0x293
#define CCP1FMT_position                         0x4
#define CCP1FMT_size                             0x1
#define CCP1FMT_value_mask                       0x10
#define CCP1FMT_clear_mask                       0xEF

#define CCP1CON_OUT                              0x5
#define CCP1CON_OUT_address                      0x293
#define CCP1CON_OUT_position                     0x5
#define CCP1CON_OUT_size                         0x1
#define CCP1CON_OUT_value_mask                   0x20
#define CCP1CON_OUT_clear_mask                   0xDF

#define CCP1OUT                                  0x5
#define CCP1OUT_address                          0x293
#define CCP1OUT_position                         0x5
#define CCP1OUT_size                             0x1
#define CCP1OUT_value_mask                       0x20
#define CCP1OUT_clear_mask                       0xDF

#define CCP1EN                                   0x7
#define CCP1EN_address                           0x293
#define CCP1EN_position                          0x7
#define CCP1EN_size                              0x1
#define CCP1EN_value_mask                        0x80
#define CCP1EN_clear_mask                        0x7F

#define CCP1CON_EN                               0x7
#define CCP1CON_EN_address                       0x293
#define CCP1CON_EN_position                      0x7
#define CCP1CON_EN_size                          0x1
#define CCP1CON_EN_value_mask                    0x80
#define CCP1CON_EN_clear_mask                    0x7F


/*---------------------------------------------------#
| CCP1CAP                                      0x294 |
#----------------------------------------------------#
| - | - | - | - | - | CCP1CTS2 | CCP1CTS1 | CCP1CTS0 |
#----------------------------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2        | 1        | 0        |
#---------------------------------------------------*/

#define CCP1CAP                                  0x0
#define CCP1CAP_address                          0x294
#define CCP1CAP_position                         0x0
#define CCP1CAP_size                             0x8
#define CCP1CAP_value_mask                       0xFF
#define CCP1CAP_clear_mask                       0x0

#define CCP1CTS0                                 0x0
#define CCP1CTS0_address                         0x294
#define CCP1CTS0_position                        0x0
#define CCP1CTS0_size                            0x1
#define CCP1CTS0_value_mask                      0x1
#define CCP1CTS0_clear_mask                      0xFE

#define CTS                                      0x0
#define CTS_address                              0x294
#define CTS_position                             0x0
#define CTS_size                                 0x8
#define CTS_value_mask                           0xFF
#define CTS_clear_mask                           0x0

#define CCP1CTS                                  0x0
#define CCP1CTS_address                          0x294
#define CCP1CTS_position                         0x0
#define CCP1CTS_size                             0x8
#define CCP1CTS_value_mask                       0xFF
#define CCP1CTS_clear_mask                       0x0

#define CTS0                                     0x0
#define CTS0_address                             0x294
#define CTS0_position                            0x0
#define CTS0_size                                0x1
#define CTS0_value_mask                          0x1
#define CTS0_clear_mask                          0xFE

#define CCP1CTS1                                 0x1
#define CCP1CTS1_address                         0x294
#define CCP1CTS1_position                        0x1
#define CCP1CTS1_size                            0x1
#define CCP1CTS1_value_mask                      0x2
#define CCP1CTS1_clear_mask                      0xFD

#define CTS1                                     0x1
#define CTS1_address                             0x294
#define CTS1_position                            0x1
#define CTS1_size                                0x1
#define CTS1_value_mask                          0x2
#define CTS1_clear_mask                          0xFD

#define CCP1CTS2                                 0x2
#define CCP1CTS2_address                         0x294
#define CCP1CTS2_position                        0x2
#define CCP1CTS2_size                            0x1
#define CCP1CTS2_value_mask                      0x4
#define CCP1CTS2_clear_mask                      0xFB

#define CTS2                                     0x2
#define CTS2_address                             0x294
#define CTS2_position                            0x2
#define CTS2_size                                0x1
#define CTS2_value_mask                          0x4
#define CTS2_clear_mask                          0xFB


/*------------------------------------------------------#
| CCPTMRS                                         0x29E |
#-------------------------------------------------------#
| - | - | P3TSEL1 | P3TSEL0 | - | - | C1TSEL1 | C1TSEL0 |
#-------------------------------------------------------#
| 7 | 6 | 5       | 4       | 3 | 2 | 1       | 0       |
#------------------------------------------------------*/

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


/*--------------------------------------------------#
| SLRCONA                                     0x30C |
#---------------------------------------------------#
| - | - | SLRA5 | SLRA4 | - | SLRA2 | SLRA1 | SLRA0 |
#---------------------------------------------------#
| 7 | 6 | 5     | 4     | 3 | 2     | 1     | 0     |
#--------------------------------------------------*/

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


/*------------------------------------------------------#
| SLRCONC                                         0x30E |
#-------------------------------------------------------#
| - | - | SLRC5 | SLRC4 | SLRC3 | SLRC2 | SLRC1 | SLRC0 |
#-------------------------------------------------------#
| 7 | 6 | 5     | 4     | 3     | 2     | 1     | 0     |
#------------------------------------------------------*/

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


/*------------------------------------------------------------------#
| INLVLA                                                      0x38C |
#-------------------------------------------------------------------#
| - | - | INLVLA5 | INLVLA4 | INLVLA3 | INLVLA2 | INLVLA1 | INLVLA0 |
#-------------------------------------------------------------------#
| 7 | 6 | 5       | 4       | 3       | 2       | 1       | 0       |
#------------------------------------------------------------------*/

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


/*------------------------------------------------------------------#
| INLVLC                                                      0x38E |
#-------------------------------------------------------------------#
| - | - | INLVLC5 | INLVLC4 | INLVLC3 | INLVLC2 | INLVLC1 | INLVLC0 |
#-------------------------------------------------------------------#
| 7 | 6 | 5       | 4       | 3       | 2       | 1       | 0       |
#------------------------------------------------------------------*/

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


/*------------------------------------------------------------#
| IOCAN                                                 0x392 |
#-------------------------------------------------------------#
| - | - | IOCAN5 | IOCAN4 | IOCAN3 | IOCAN2 | IOCAN1 | IOCAN0 |
#-------------------------------------------------------------#
| 7 | 6 | 5      | 4      | 3      | 2      | 1      | 0      |
#------------------------------------------------------------*/

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


/*------------------------------------------------------------#
| IOCAF                                                 0x393 |
#-------------------------------------------------------------#
| - | - | IOCAF5 | IOCAF4 | IOCAF3 | IOCAF2 | IOCAF1 | IOCAF0 |
#-------------------------------------------------------------#
| 7 | 6 | 5      | 4      | 3      | 2      | 1      | 0      |
#------------------------------------------------------------*/

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


/*------------------------------------------------------------#
| IOCCP                                                 0x397 |
#-------------------------------------------------------------#
| - | - | IOCCP5 | IOCCP4 | IOCCP3 | IOCCP2 | IOCCP1 | IOCCP0 |
#-------------------------------------------------------------#
| 7 | 6 | 5      | 4      | 3      | 2      | 1      | 0      |
#------------------------------------------------------------*/

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


/*------------------------------------------------------------#
| IOCCN                                                 0x398 |
#-------------------------------------------------------------#
| - | - | IOCCN5 | IOCCN4 | IOCCN3 | IOCCN2 | IOCCN1 | IOCCN0 |
#-------------------------------------------------------------#
| 7 | 6 | 5      | 4      | 3      | 2      | 1      | 0      |
#------------------------------------------------------------*/

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


/*------------------------------------------------------------#
| IOCCF                                                 0x399 |
#-------------------------------------------------------------#
| - | - | IOCCF5 | IOCCF4 | IOCCF3 | IOCCF2 | IOCCF1 | IOCCF0 |
#-------------------------------------------------------------#
| 7 | 6 | 5      | 4      | 3      | 2      | 1      | 0      |
#------------------------------------------------------------*/

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


/*---------------------------------------------------------#
| MD1CON0                                            0x39B |
#----------------------------------------------------------#
| MD1CON0_EN | - | MD1CON0_OUT | OPOL | - | - | - | MD1BIT |
#----------------------------------------------------------#
| 7          | 6 | 5           | 4    | 3 | 2 | 1 | 0      |
#---------------------------------------------------------*/

#define MD1CON0                                  0x0
#define MD1CON0_address                          0x39B
#define MD1CON0_position                         0x0
#define MD1CON0_size                             0x8
#define MD1CON0_value_mask                       0xFF
#define MD1CON0_clear_mask                       0x0

#define MD1BIT                                   0x0
#define MD1BIT_address                           0x39B
#define MD1BIT_position                          0x0
#define MD1BIT_size                              0x1
#define MD1BIT_value_mask                        0x1
#define MD1BIT_clear_mask                        0xFE

#define BIT                                      0x0
#define BIT_address                              0x39B
#define BIT_position                             0x0
#define BIT_size                                 0x1
#define BIT_value_mask                           0x1
#define BIT_clear_mask                           0xFE

#define OPOL                                     0x4
#define OPOL_address                             0x39B
#define OPOL_position                            0x4
#define OPOL_size                                0x1
#define OPOL_value_mask                          0x10
#define OPOL_clear_mask                          0xEF

#define MD1OPOL                                  0x4
#define MD1OPOL_address                          0x39B
#define MD1OPOL_position                         0x4
#define MD1OPOL_size                             0x1
#define MD1OPOL_value_mask                       0x10
#define MD1OPOL_clear_mask                       0xEF

#define MD1CON0_OUT                              0x5
#define MD1CON0_OUT_address                      0x39B
#define MD1CON0_OUT_position                     0x5
#define MD1CON0_OUT_size                         0x1
#define MD1CON0_OUT_value_mask                   0x20
#define MD1CON0_OUT_clear_mask                   0xDF

#define MD1OUT                                   0x5
#define MD1OUT_address                           0x39B
#define MD1OUT_position                          0x5
#define MD1OUT_size                              0x1
#define MD1OUT_value_mask                        0x20
#define MD1OUT_clear_mask                        0xDF

#define MD1CON0_EN                               0x7
#define MD1CON0_EN_address                       0x39B
#define MD1CON0_EN_position                      0x7
#define MD1CON0_EN_size                          0x1
#define MD1CON0_EN_value_mask                    0x80
#define MD1CON0_EN_clear_mask                    0x7F

#define MD1EN                                    0x7
#define MD1EN_address                            0x39B
#define MD1EN_position                           0x7
#define MD1EN_size                               0x1
#define MD1EN_value_mask                         0x80
#define MD1EN_clear_mask                         0x7F


/*---------------------------------------------------------#
| MD1CON1                                            0x39C |
#----------------------------------------------------------#
| - | - | CHPOL | MD1CHSYNC | - | - | MD1CLPOL | MD1CLSYNC |
#----------------------------------------------------------#
| 7 | 6 | 5     | 4         | 3 | 2 | 1        | 0         |
#---------------------------------------------------------*/

#define MD1CON1                                  0x0
#define MD1CON1_address                          0x39C
#define MD1CON1_position                         0x0
#define MD1CON1_size                             0x8
#define MD1CON1_value_mask                       0xFF
#define MD1CON1_clear_mask                       0x0

#define MD1CLSYNC                                0x0
#define MD1CLSYNC_address                        0x39C
#define MD1CLSYNC_position                       0x0
#define MD1CLSYNC_size                           0x1
#define MD1CLSYNC_value_mask                     0x1
#define MD1CLSYNC_clear_mask                     0xFE

#define CLSYNC                                   0x0
#define CLSYNC_address                           0x39C
#define CLSYNC_position                          0x0
#define CLSYNC_size                              0x1
#define CLSYNC_value_mask                        0x1
#define CLSYNC_clear_mask                        0xFE

#define MD1CLPOL                                 0x1
#define MD1CLPOL_address                         0x39C
#define MD1CLPOL_position                        0x1
#define MD1CLPOL_size                            0x1
#define MD1CLPOL_value_mask                      0x2
#define MD1CLPOL_clear_mask                      0xFD

#define CLPOL                                    0x1
#define CLPOL_address                            0x39C
#define CLPOL_position                           0x1
#define CLPOL_size                               0x1
#define CLPOL_value_mask                         0x2
#define CLPOL_clear_mask                         0xFD

#define MD1CHSYNC                                0x4
#define MD1CHSYNC_address                        0x39C
#define MD1CHSYNC_position                       0x4
#define MD1CHSYNC_size                           0x1
#define MD1CHSYNC_value_mask                     0x10
#define MD1CHSYNC_clear_mask                     0xEF

#define CHSYNC                                   0x4
#define CHSYNC_address                           0x39C
#define CHSYNC_position                          0x4
#define CHSYNC_size                              0x1
#define CHSYNC_value_mask                        0x10
#define CHSYNC_clear_mask                        0xEF

#define CHPOL                                    0x5
#define CHPOL_address                            0x39C
#define CHPOL_position                           0x5
#define CHPOL_size                               0x1
#define CHPOL_value_mask                         0x20
#define CHPOL_clear_mask                         0xDF

#define MD1CHPOL                                 0x5
#define MD1CHPOL_address                         0x39C
#define MD1CHPOL_position                        0x5
#define MD1CHPOL_size                            0x1
#define MD1CHPOL_value_mask                      0x20
#define MD1CHPOL_clear_mask                      0xDF


/*-------------------------------------------------------#
| MD1SRC                                           0x39D |
#--------------------------------------------------------#
| - | - | - | MD1MS4 | MD1MS3 | MD1MS2 | MD1MS1 | MD1MS0 |
#--------------------------------------------------------#
| 7 | 6 | 5 | 4      | 3      | 2      | 1      | 0      |
#-------------------------------------------------------*/

#define MD1SRC                                   0x0
#define MD1SRC_address                           0x39D
#define MD1SRC_position                          0x0
#define MD1SRC_size                              0x8
#define MD1SRC_value_mask                        0xFF
#define MD1SRC_clear_mask                        0x0

#define MD1MS0                                   0x0
#define MD1MS0_address                           0x39D
#define MD1MS0_position                          0x0
#define MD1MS0_size                              0x1
#define MD1MS0_value_mask                        0x1
#define MD1MS0_clear_mask                        0xFE

#define MS0                                      0x0
#define MS0_address                              0x39D
#define MS0_position                             0x0
#define MS0_size                                 0x1
#define MS0_value_mask                           0x1
#define MS0_clear_mask                           0xFE

#define MS                                       0x0
#define MS_address                               0x39D
#define MS_position                              0x0
#define MS_size                                  0x5
#define MS_value_mask                            0x1F
#define MS_clear_mask                            0xE0

#define MD1MS                                    0x0
#define MD1MS_address                            0x39D
#define MD1MS_position                           0x0
#define MD1MS_size                               0x5
#define MD1MS_value_mask                         0x1F
#define MD1MS_clear_mask                         0xE0

#define MD1MS1                                   0x1
#define MD1MS1_address                           0x39D
#define MD1MS1_position                          0x1
#define MD1MS1_size                              0x1
#define MD1MS1_value_mask                        0x2
#define MD1MS1_clear_mask                        0xFD

#define MS1                                      0x1
#define MS1_address                              0x39D
#define MS1_position                             0x1
#define MS1_size                                 0x1
#define MS1_value_mask                           0x2
#define MS1_clear_mask                           0xFD

#define MD1MS2                                   0x2
#define MD1MS2_address                           0x39D
#define MD1MS2_position                          0x2
#define MD1MS2_size                              0x1
#define MD1MS2_value_mask                        0x4
#define MD1MS2_clear_mask                        0xFB

#define MS2                                      0x2
#define MS2_address                              0x39D
#define MS2_position                             0x2
#define MS2_size                                 0x1
#define MS2_value_mask                           0x4
#define MS2_clear_mask                           0xFB

#define MD1MS3                                   0x3
#define MD1MS3_address                           0x39D
#define MD1MS3_position                          0x3
#define MD1MS3_size                              0x1
#define MD1MS3_value_mask                        0x8
#define MD1MS3_clear_mask                        0xF7

#define MS3                                      0x3
#define MS3_address                              0x39D
#define MS3_position                             0x3
#define MS3_size                                 0x1
#define MS3_value_mask                           0x8
#define MS3_clear_mask                           0xF7

#define MD1MS4                                   0x4
#define MD1MS4_address                           0x39D
#define MD1MS4_position                          0x4
#define MD1MS4_size                              0x1
#define MD1MS4_value_mask                        0x10
#define MD1MS4_clear_mask                        0xEF

#define MS4                                      0x4
#define MS4_address                              0x39D
#define MS4_position                             0x4
#define MS4_size                                 0x1
#define MS4_value_mask                           0x10
#define MS4_clear_mask                           0xEF


/*--------------------------------------------------#
| MD1CARL                                     0x39E |
#---------------------------------------------------#
| - | - | - | - | MD1CL3 | MD1CL2 | MD1CL1 | MD1CL0 |
#---------------------------------------------------#
| 7 | 6 | 5 | 4 | 3      | 2      | 1      | 0      |
#--------------------------------------------------*/

#define MD1CARL                                  0x0
#define MD1CARL_address                          0x39E
#define MD1CARL_position                         0x0
#define MD1CARL_size                             0x8
#define MD1CARL_value_mask                       0xFF
#define MD1CARL_clear_mask                       0x0

#define CL                                       0x0
#define CL_address                               0x39E
#define CL_position                              0x0
#define CL_size                                  0x4
#define CL_value_mask                            0xF
#define CL_clear_mask                            0xF0

#define MD1CL                                    0x0
#define MD1CL_address                            0x39E
#define MD1CL_position                           0x0
#define MD1CL_size                               0x4
#define MD1CL_value_mask                         0xF
#define MD1CL_clear_mask                         0xF0

#define MD1CL0                                   0x0
#define MD1CL0_address                           0x39E
#define MD1CL0_position                          0x0
#define MD1CL0_size                              0x1
#define MD1CL0_value_mask                        0x1
#define MD1CL0_clear_mask                        0xFE

#define CL0                                      0x0
#define CL0_address                              0x39E
#define CL0_position                             0x0
#define CL0_size                                 0x1
#define CL0_value_mask                           0x1
#define CL0_clear_mask                           0xFE

#define MD1CL1                                   0x1
#define MD1CL1_address                           0x39E
#define MD1CL1_position                          0x1
#define MD1CL1_size                              0x1
#define MD1CL1_value_mask                        0x2
#define MD1CL1_clear_mask                        0xFD

#define CL1                                      0x1
#define CL1_address                              0x39E
#define CL1_position                             0x1
#define CL1_size                                 0x1
#define CL1_value_mask                           0x2
#define CL1_clear_mask                           0xFD

#define MD1CL2                                   0x2
#define MD1CL2_address                           0x39E
#define MD1CL2_position                          0x2
#define MD1CL2_size                              0x1
#define MD1CL2_value_mask                        0x4
#define MD1CL2_clear_mask                        0xFB

#define CL2                                      0x2
#define CL2_address                              0x39E
#define CL2_position                             0x2
#define CL2_size                                 0x1
#define CL2_value_mask                           0x4
#define CL2_clear_mask                           0xFB

#define MD1CL3                                   0x3
#define MD1CL3_address                           0x39E
#define MD1CL3_position                          0x3
#define MD1CL3_size                              0x1
#define MD1CL3_value_mask                        0x8
#define MD1CL3_clear_mask                        0xF7

#define CL3                                      0x3
#define CL3_address                              0x39E
#define CL3_position                             0x3
#define CL3_size                                 0x1
#define CL3_value_mask                           0x8
#define CL3_clear_mask                           0xF7


/*--------------------------------------------------#
| MD1CARH                                     0x39F |
#---------------------------------------------------#
| - | - | - | - | MD1CH3 | MD1CH2 | MD1CH1 | MD1CH0 |
#---------------------------------------------------#
| 7 | 6 | 5 | 4 | 3      | 2      | 1      | 0      |
#--------------------------------------------------*/

#define MD1CARH                                  0x0
#define MD1CARH_address                          0x39F
#define MD1CARH_position                         0x0
#define MD1CARH_size                             0x8
#define MD1CARH_value_mask                       0xFF
#define MD1CARH_clear_mask                       0x0

#define CH                                       0x0
#define CH_address                               0x39F
#define CH_position                              0x0
#define CH_size                                  0x4
#define CH_value_mask                            0xF
#define CH_clear_mask                            0xF0

#define MD1CH                                    0x0
#define MD1CH_address                            0x39F
#define MD1CH_position                           0x0
#define MD1CH_size                               0x4
#define MD1CH_value_mask                         0xF
#define MD1CH_clear_mask                         0xF0

#define MD1CH0                                   0x0
#define MD1CH0_address                           0x39F
#define MD1CH0_position                          0x0
#define MD1CH0_size                              0x1
#define MD1CH0_value_mask                        0x1
#define MD1CH0_clear_mask                        0xFE

#define CH0                                      0x0
#define CH0_address                              0x39F
#define CH0_position                             0x0
#define CH0_size                                 0x1
#define CH0_value_mask                           0x1
#define CH0_clear_mask                           0xFE

#define MD1CH1                                   0x1
#define MD1CH1_address                           0x39F
#define MD1CH1_position                          0x1
#define MD1CH1_size                              0x1
#define MD1CH1_value_mask                        0x2
#define MD1CH1_clear_mask                        0xFD

#define CH1                                      0x1
#define CH1_address                              0x39F
#define CH1_position                             0x1
#define CH1_size                                 0x1
#define CH1_value_mask                           0x2
#define CH1_clear_mask                           0xFD

#define MD1CH2                                   0x2
#define MD1CH2_address                           0x39F
#define MD1CH2_position                          0x2
#define MD1CH2_size                              0x1
#define MD1CH2_value_mask                        0x4
#define MD1CH2_clear_mask                        0xFB

#define CH2                                      0x2
#define CH2_address                              0x39F
#define CH2_position                             0x2
#define CH2_size                                 0x1
#define CH2_value_mask                           0x4
#define CH2_clear_mask                           0xFB

#define MD1CH3                                   0x3
#define MD1CH3_address                           0x39F
#define MD1CH3_position                          0x3
#define MD1CH3_size                              0x1
#define MD1CH3_value_mask                        0x8
#define MD1CH3_clear_mask                        0xF7

#define CH3                                      0x3
#define CH3_address                              0x39F
#define CH3_position                             0x3
#define CH3_size                                 0x1
#define CH3_value_mask                           0x8
#define CH3_clear_mask                           0xF7


/*--------------------------------------#
| HIDRVC                          0x40E |
#---------------------------------------#
| - | - | HIDC5 | HIDC4 | - | - | - | - |
#---------------------------------------#
| 7 | 6 | 5     | 4     | 3 | 2 | 1 | 0 |
#--------------------------------------*/

#define HIDRVC                                   0x0
#define HIDRVC_address                           0x40E
#define HIDRVC_position                          0x0
#define HIDRVC_size                              0x8
#define HIDRVC_value_mask                        0xFF
#define HIDRVC_clear_mask                        0x0

#define HIDC4                                    0x4
#define HIDC4_address                            0x40E
#define HIDC4_position                           0x4
#define HIDC4_size                               0x1
#define HIDC4_value_mask                         0x10
#define HIDC4_clear_mask                         0xEF

#define HIDC5                                    0x5
#define HIDC5_address                            0x40E
#define HIDC5_position                           0x5
#define HIDC5_size                               0x1
#define HIDC5_value_mask                         0x20
#define HIDC5_clear_mask                         0xDF


/*------------------------------#
| T4TMR                   0x413 |
#-------------------------------#
| TMR4                          |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define T4TMR                                    0x0
#define T4TMR_address                            0x413
#define T4TMR_position                           0x0
#define T4TMR_size                               0x8
#define T4TMR_value_mask                         0xFF
#define T4TMR_clear_mask                         0x0

#define TMR4                                     0x0
#define TMR4_address                             0x413
#define TMR4_position                            0x0
#define TMR4_size                                0x8
#define TMR4_value_mask                          0xFF
#define TMR4_clear_mask                          0x0

#define T4TMR_TMR                                0x0
#define T4TMR_TMR_address                        0x413
#define T4TMR_TMR_position                       0x0
#define T4TMR_TMR_size                           0x8
#define T4TMR_TMR_value_mask                     0xFF
#define T4TMR_TMR_clear_mask                     0x0


/*------------------------------#
| T4PR                    0x414 |
#-------------------------------#
| T4PR_PR                       |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define T4PR_PR                                  0x0
#define T4PR_PR_address                          0x414
#define T4PR_PR_position                         0x0
#define T4PR_PR_size                             0x8
#define T4PR_PR_value_mask                       0xFF
#define T4PR_PR_clear_mask                       0x0

#define T4PR                                     0x0
#define T4PR_address                             0x414
#define T4PR_position                            0x0
#define T4PR_size                                0x8
#define T4PR_value_mask                          0xFF
#define T4PR_clear_mask                          0x0


/*-----------------------------------------------------------------------------------------------#
| T4CON                                                                                    0x415 |
#------------------------------------------------------------------------------------------------#
| T4ON | T4CKPS2 | T4CON_CKPS1 | T4CON_CKPS0 | T4OUTPS3 | T4CON_OUTPS2 | T4OUTPS1 | T4CON_OUTPS0 |
#------------------------------------------------------------------------------------------------#
| 7    | 6       | 5           | 4           | 3        | 2            | 1        | 0            |
#-----------------------------------------------------------------------------------------------*/

#define T4CON                                    0x0
#define T4CON_address                            0x415
#define T4CON_position                           0x0
#define T4CON_size                               0x8
#define T4CON_value_mask                         0xFF
#define T4CON_clear_mask                         0x0

#define T4CON_OUTPS                              0x0
#define T4CON_OUTPS_address                      0x415
#define T4CON_OUTPS_position                     0x0
#define T4CON_OUTPS_size                         0x4
#define T4CON_OUTPS_value_mask                   0xF
#define T4CON_OUTPS_clear_mask                   0xF0

#define T4OUTPS0                                 0x0
#define T4OUTPS0_address                         0x415
#define T4OUTPS0_position                        0x0
#define T4OUTPS0_size                            0x1
#define T4OUTPS0_value_mask                      0x1
#define T4OUTPS0_clear_mask                      0xFE

#define T4OUTPS                                  0x0
#define T4OUTPS_address                          0x415
#define T4OUTPS_position                         0x0
#define T4OUTPS_size                             0x4
#define T4OUTPS_value_mask                       0xF
#define T4OUTPS_clear_mask                       0xF0

#define T4CON_OUTPS0                             0x0
#define T4CON_OUTPS0_address                     0x415
#define T4CON_OUTPS0_position                    0x0
#define T4CON_OUTPS0_size                        0x1
#define T4CON_OUTPS0_value_mask                  0x1
#define T4CON_OUTPS0_clear_mask                  0xFE

#define T4OUTPS1                                 0x1
#define T4OUTPS1_address                         0x415
#define T4OUTPS1_position                        0x1
#define T4OUTPS1_size                            0x1
#define T4OUTPS1_value_mask                      0x2
#define T4OUTPS1_clear_mask                      0xFD

#define T4CON_OUTPS1                             0x1
#define T4CON_OUTPS1_address                     0x415
#define T4CON_OUTPS1_position                    0x1
#define T4CON_OUTPS1_size                        0x1
#define T4CON_OUTPS1_value_mask                  0x2
#define T4CON_OUTPS1_clear_mask                  0xFD

#define T4CON_OUTPS2                             0x2
#define T4CON_OUTPS2_address                     0x415
#define T4CON_OUTPS2_position                    0x2
#define T4CON_OUTPS2_size                        0x1
#define T4CON_OUTPS2_value_mask                  0x4
#define T4CON_OUTPS2_clear_mask                  0xFB

#define T4OUTPS2                                 0x2
#define T4OUTPS2_address                         0x415
#define T4OUTPS2_position                        0x2
#define T4OUTPS2_size                            0x1
#define T4OUTPS2_value_mask                      0x4
#define T4OUTPS2_clear_mask                      0xFB

#define T4OUTPS3                                 0x3
#define T4OUTPS3_address                         0x415
#define T4OUTPS3_position                        0x3
#define T4OUTPS3_size                            0x1
#define T4OUTPS3_value_mask                      0x8
#define T4OUTPS3_clear_mask                      0xF7

#define T4CON_OUTPS3                             0x3
#define T4CON_OUTPS3_address                     0x415
#define T4CON_OUTPS3_position                    0x3
#define T4CON_OUTPS3_size                        0x1
#define T4CON_OUTPS3_value_mask                  0x8
#define T4CON_OUTPS3_clear_mask                  0xF7

#define T4CKPS0                                  0x4
#define T4CKPS0_address                          0x415
#define T4CKPS0_position                         0x4
#define T4CKPS0_size                             0x1
#define T4CKPS0_value_mask                       0x10
#define T4CKPS0_clear_mask                       0xEF

#define T4CON_CKPS0                              0x4
#define T4CON_CKPS0_address                      0x415
#define T4CON_CKPS0_position                     0x4
#define T4CON_CKPS0_size                         0x1
#define T4CON_CKPS0_value_mask                   0x10
#define T4CON_CKPS0_clear_mask                   0xEF

#define T4CKPS                                   0x4
#define T4CKPS_address                           0x415
#define T4CKPS_position                          0x4
#define T4CKPS_size                              0x3
#define T4CKPS_value_mask                        0x70
#define T4CKPS_clear_mask                        0x8F

#define T4CON_CKPS                               0x4
#define T4CON_CKPS_address                       0x415
#define T4CON_CKPS_position                      0x4
#define T4CON_CKPS_size                          0x3
#define T4CON_CKPS_value_mask                    0x70
#define T4CON_CKPS_clear_mask                    0x8F

#define T4CKPS1                                  0x5
#define T4CKPS1_address                          0x415
#define T4CKPS1_position                         0x5
#define T4CKPS1_size                             0x1
#define T4CKPS1_value_mask                       0x20
#define T4CKPS1_clear_mask                       0xDF

#define T4CON_CKPS1                              0x5
#define T4CON_CKPS1_address                      0x415
#define T4CON_CKPS1_position                     0x5
#define T4CON_CKPS1_size                         0x1
#define T4CON_CKPS1_value_mask                   0x20
#define T4CON_CKPS1_clear_mask                   0xDF

#define T4CKPS2                                  0x6
#define T4CKPS2_address                          0x415
#define T4CKPS2_position                         0x6
#define T4CKPS2_size                             0x1
#define T4CKPS2_value_mask                       0x40
#define T4CKPS2_clear_mask                       0xBF

#define T4CON_CKPS2                              0x6
#define T4CON_CKPS2_address                      0x415
#define T4CON_CKPS2_position                     0x6
#define T4CON_CKPS2_size                         0x1
#define T4CON_CKPS2_value_mask                   0x40
#define T4CON_CKPS2_clear_mask                   0xBF

#define T4CON_ON                                 0x7
#define T4CON_ON_address                         0x415
#define T4CON_ON_position                        0x7
#define T4CON_ON_size                            0x1
#define T4CON_ON_value_mask                      0x80
#define T4CON_ON_clear_mask                      0x7F

#define T4ON                                     0x7
#define T4ON_address                             0x415
#define T4ON_position                            0x7
#define T4ON_size                                0x1
#define T4ON_value_mask                          0x80
#define T4ON_clear_mask                          0x7F

#define TMR4ON                                   0x7
#define TMR4ON_address                           0x415
#define TMR4ON_position                          0x7
#define TMR4ON_size                              0x1
#define TMR4ON_value_mask                        0x80
#define TMR4ON_clear_mask                        0x7F


/*-----------------------------------------------------------------------------------------------------------#
| T4HLT                                                                                                0x416 |
#------------------------------------------------------------------------------------------------------------#
| T4HLT_PSYNC | T4CKPOL | T4HLT_CKSYNC | T4HLT_MODE4 | T4HLT_MODE3 | T4HLT_MODE2 | T4HLT_MODE1 | T4HLT_MODE0 |
#------------------------------------------------------------------------------------------------------------#
| 7           | 6       | 5            | 4           | 3           | 2           | 1           | 0           |
#-----------------------------------------------------------------------------------------------------------*/

#define T4HLT                                    0x0
#define T4HLT_address                            0x416
#define T4HLT_position                           0x0
#define T4HLT_size                               0x8
#define T4HLT_value_mask                         0xFF
#define T4HLT_clear_mask                         0x0

#define T4MODE                                   0x0
#define T4MODE_address                           0x416
#define T4MODE_position                          0x0
#define T4MODE_size                              0x5
#define T4MODE_value_mask                        0x1F
#define T4MODE_clear_mask                        0xE0

#define T4HLT_MODE                               0x0
#define T4HLT_MODE_address                       0x416
#define T4HLT_MODE_position                      0x0
#define T4HLT_MODE_size                          0x5
#define T4HLT_MODE_value_mask                    0x1F
#define T4HLT_MODE_clear_mask                    0xE0

#define T4HLT_MODE0                              0x0
#define T4HLT_MODE0_address                      0x416
#define T4HLT_MODE0_position                     0x0
#define T4HLT_MODE0_size                         0x1
#define T4HLT_MODE0_value_mask                   0x1
#define T4HLT_MODE0_clear_mask                   0xFE

#define T4MODE0                                  0x0
#define T4MODE0_address                          0x416
#define T4MODE0_position                         0x0
#define T4MODE0_size                             0x1
#define T4MODE0_value_mask                       0x1
#define T4MODE0_clear_mask                       0xFE

#define T4HLT_MODE1                              0x1
#define T4HLT_MODE1_address                      0x416
#define T4HLT_MODE1_position                     0x1
#define T4HLT_MODE1_size                         0x1
#define T4HLT_MODE1_value_mask                   0x2
#define T4HLT_MODE1_clear_mask                   0xFD

#define T4MODE1                                  0x1
#define T4MODE1_address                          0x416
#define T4MODE1_position                         0x1
#define T4MODE1_size                             0x1
#define T4MODE1_value_mask                       0x2
#define T4MODE1_clear_mask                       0xFD

#define T4HLT_MODE2                              0x2
#define T4HLT_MODE2_address                      0x416
#define T4HLT_MODE2_position                     0x2
#define T4HLT_MODE2_size                         0x1
#define T4HLT_MODE2_value_mask                   0x4
#define T4HLT_MODE2_clear_mask                   0xFB

#define T4MODE2                                  0x2
#define T4MODE2_address                          0x416
#define T4MODE2_position                         0x2
#define T4MODE2_size                             0x1
#define T4MODE2_value_mask                       0x4
#define T4MODE2_clear_mask                       0xFB

#define T4HLT_MODE3                              0x3
#define T4HLT_MODE3_address                      0x416
#define T4HLT_MODE3_position                     0x3
#define T4HLT_MODE3_size                         0x1
#define T4HLT_MODE3_value_mask                   0x8
#define T4HLT_MODE3_clear_mask                   0xF7

#define T4MODE3                                  0x3
#define T4MODE3_address                          0x416
#define T4MODE3_position                         0x3
#define T4MODE3_size                             0x1
#define T4MODE3_value_mask                       0x8
#define T4MODE3_clear_mask                       0xF7

#define T4HLT_MODE4                              0x4
#define T4HLT_MODE4_address                      0x416
#define T4HLT_MODE4_position                     0x4
#define T4HLT_MODE4_size                         0x1
#define T4HLT_MODE4_value_mask                   0x10
#define T4HLT_MODE4_clear_mask                   0xEF

#define T4MODE4                                  0x4
#define T4MODE4_address                          0x416
#define T4MODE4_position                         0x4
#define T4MODE4_size                             0x1
#define T4MODE4_value_mask                       0x10
#define T4MODE4_clear_mask                       0xEF

#define T4CKSYNC                                 0x5
#define T4CKSYNC_address                         0x416
#define T4CKSYNC_position                        0x5
#define T4CKSYNC_size                            0x1
#define T4CKSYNC_value_mask                      0x20
#define T4CKSYNC_clear_mask                      0xDF

#define T4HLT_CKSYNC                             0x5
#define T4HLT_CKSYNC_address                     0x416
#define T4HLT_CKSYNC_position                    0x5
#define T4HLT_CKSYNC_size                        0x1
#define T4HLT_CKSYNC_value_mask                  0x20
#define T4HLT_CKSYNC_clear_mask                  0xDF

#define T4HLT_CKPOL                              0x6
#define T4HLT_CKPOL_address                      0x416
#define T4HLT_CKPOL_position                     0x6
#define T4HLT_CKPOL_size                         0x1
#define T4HLT_CKPOL_value_mask                   0x40
#define T4HLT_CKPOL_clear_mask                   0xBF

#define T4CKPOL                                  0x6
#define T4CKPOL_address                          0x416
#define T4CKPOL_position                         0x6
#define T4CKPOL_size                             0x1
#define T4CKPOL_value_mask                       0x40
#define T4CKPOL_clear_mask                       0xBF

#define T4PSYNC                                  0x7
#define T4PSYNC_address                          0x416
#define T4PSYNC_position                         0x7
#define T4PSYNC_size                             0x1
#define T4PSYNC_value_mask                       0x80
#define T4PSYNC_clear_mask                       0x7F

#define T4HLT_PSYNC                              0x7
#define T4HLT_PSYNC_address                      0x416
#define T4HLT_PSYNC_position                     0x7
#define T4HLT_PSYNC_size                         0x1
#define T4HLT_PSYNC_value_mask                   0x80
#define T4HLT_PSYNC_clear_mask                   0x7F


/*----------------------------------------------#
| T4CLKCON                                0x417 |
#-----------------------------------------------#
| - | - | - | - | T4CS3 | T4CS2 | T4CS1 | T4CS0 |
#-----------------------------------------------#
| 7 | 6 | 5 | 4 | 3     | 2     | 1     | 0     |
#----------------------------------------------*/

#define T4CLKCON                                 0x0
#define T4CLKCON_address                         0x417
#define T4CLKCON_position                        0x0
#define T4CLKCON_size                            0x8
#define T4CLKCON_value_mask                      0xFF
#define T4CLKCON_clear_mask                      0x0

#define T4CS                                     0x0
#define T4CS_address                             0x417
#define T4CS_position                            0x0
#define T4CS_size                                0x4
#define T4CS_value_mask                          0xF
#define T4CS_clear_mask                          0xF0

#define T4CLKCON_CS                              0x0
#define T4CLKCON_CS_address                      0x417
#define T4CLKCON_CS_position                     0x0
#define T4CLKCON_CS_size                         0x4
#define T4CLKCON_CS_value_mask                   0xF
#define T4CLKCON_CS_clear_mask                   0xF0

#define T4CS0                                    0x0
#define T4CS0_address                            0x417
#define T4CS0_position                           0x0
#define T4CS0_size                               0x1
#define T4CS0_value_mask                         0x1
#define T4CS0_clear_mask                         0xFE

#define T4CLKCON_CS0                             0x0
#define T4CLKCON_CS0_address                     0x417
#define T4CLKCON_CS0_position                    0x0
#define T4CLKCON_CS0_size                        0x1
#define T4CLKCON_CS0_value_mask                  0x1
#define T4CLKCON_CS0_clear_mask                  0xFE

#define T4CS1                                    0x1
#define T4CS1_address                            0x417
#define T4CS1_position                           0x1
#define T4CS1_size                               0x1
#define T4CS1_value_mask                         0x2
#define T4CS1_clear_mask                         0xFD

#define T4CLKCON_CS1                             0x1
#define T4CLKCON_CS1_address                     0x417
#define T4CLKCON_CS1_position                    0x1
#define T4CLKCON_CS1_size                        0x1
#define T4CLKCON_CS1_value_mask                  0x2
#define T4CLKCON_CS1_clear_mask                  0xFD

#define T4CS2                                    0x2
#define T4CS2_address                            0x417
#define T4CS2_position                           0x2
#define T4CS2_size                               0x1
#define T4CS2_value_mask                         0x4
#define T4CS2_clear_mask                         0xFB

#define T4CLKCON_CS2                             0x2
#define T4CLKCON_CS2_address                     0x417
#define T4CLKCON_CS2_position                    0x2
#define T4CLKCON_CS2_size                        0x1
#define T4CLKCON_CS2_value_mask                  0x4
#define T4CLKCON_CS2_clear_mask                  0xFB

#define T4CS3                                    0x3
#define T4CS3_address                            0x417
#define T4CS3_position                           0x3
#define T4CS3_size                               0x1
#define T4CS3_value_mask                         0x8
#define T4CS3_clear_mask                         0xF7

#define T4CLKCON_CS3                             0x3
#define T4CLKCON_CS3_address                     0x417
#define T4CLKCON_CS3_position                    0x3
#define T4CLKCON_CS3_size                        0x1
#define T4CLKCON_CS3_value_mask                  0x8
#define T4CLKCON_CS3_clear_mask                  0xF7


/*------------------------------------------------------#
| T4RST                                           0x418 |
#-------------------------------------------------------#
| - | - | - | - | T4RSEL3 | T4RSEL2 | T4RSEL1 | T4RSEL0 |
#-------------------------------------------------------#
| 7 | 6 | 5 | 4 | 3       | 2       | 1       | 0       |
#------------------------------------------------------*/

#define T4RST                                    0x0
#define T4RST_address                            0x418
#define T4RST_position                           0x0
#define T4RST_size                               0x8
#define T4RST_value_mask                         0xFF
#define T4RST_clear_mask                         0x0

#define T4RSEL0                                  0x0
#define T4RSEL0_address                          0x418
#define T4RSEL0_position                         0x0
#define T4RSEL0_size                             0x1
#define T4RSEL0_value_mask                       0x1
#define T4RSEL0_clear_mask                       0xFE

#define T4RSEL                                   0x0
#define T4RSEL_address                           0x418
#define T4RSEL_position                          0x0
#define T4RSEL_size                              0x4
#define T4RSEL_value_mask                        0xF
#define T4RSEL_clear_mask                        0xF0

#define T4RST_RSEL                               0x0
#define T4RST_RSEL_address                       0x418
#define T4RST_RSEL_position                      0x0
#define T4RST_RSEL_size                          0x4
#define T4RST_RSEL_value_mask                    0xF
#define T4RST_RSEL_clear_mask                    0xF0

#define T4RST_RSEL0                              0x0
#define T4RST_RSEL0_address                      0x418
#define T4RST_RSEL0_position                     0x0
#define T4RST_RSEL0_size                         0x1
#define T4RST_RSEL0_value_mask                   0x1
#define T4RST_RSEL0_clear_mask                   0xFE

#define T4RSEL1                                  0x1
#define T4RSEL1_address                          0x418
#define T4RSEL1_position                         0x1
#define T4RSEL1_size                             0x1
#define T4RSEL1_value_mask                       0x2
#define T4RSEL1_clear_mask                       0xFD

#define T4RST_RSEL1                              0x1
#define T4RST_RSEL1_address                      0x418
#define T4RST_RSEL1_position                     0x1
#define T4RST_RSEL1_size                         0x1
#define T4RST_RSEL1_value_mask                   0x2
#define T4RST_RSEL1_clear_mask                   0xFD

#define T4RSEL2                                  0x2
#define T4RSEL2_address                          0x418
#define T4RSEL2_position                         0x2
#define T4RSEL2_size                             0x1
#define T4RSEL2_value_mask                       0x4
#define T4RSEL2_clear_mask                       0xFB

#define T4RST_RSEL2                              0x2
#define T4RST_RSEL2_address                      0x418
#define T4RST_RSEL2_position                     0x2
#define T4RST_RSEL2_size                         0x1
#define T4RST_RSEL2_value_mask                   0x4
#define T4RST_RSEL2_clear_mask                   0xFB

#define T4RSEL3                                  0x3
#define T4RSEL3_address                          0x418
#define T4RSEL3_position                         0x3
#define T4RSEL3_size                             0x1
#define T4RSEL3_value_mask                       0x8
#define T4RSEL3_clear_mask                       0xF7

#define T4RST_RSEL3                              0x3
#define T4RST_RSEL3_address                      0x418
#define T4RST_RSEL3_position                     0x3
#define T4RST_RSEL3_size                         0x1
#define T4RST_RSEL3_value_mask                   0x8
#define T4RST_RSEL3_clear_mask                   0xF7


/*------------------------------#
| T6TMR                   0x41A |
#-------------------------------#
| TMR6                          |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define T6TMR                                    0x0
#define T6TMR_address                            0x41A
#define T6TMR_position                           0x0
#define T6TMR_size                               0x8
#define T6TMR_value_mask                         0xFF
#define T6TMR_clear_mask                         0x0

#define TMR6                                     0x0
#define TMR6_address                             0x41A
#define TMR6_position                            0x0
#define TMR6_size                                0x8
#define TMR6_value_mask                          0xFF
#define TMR6_clear_mask                          0x0

#define T6TMR_TMR                                0x0
#define T6TMR_TMR_address                        0x41A
#define T6TMR_TMR_position                       0x0
#define T6TMR_TMR_size                           0x8
#define T6TMR_TMR_value_mask                     0xFF
#define T6TMR_TMR_clear_mask                     0x0


/*------------------------------#
| T6PR                    0x41B |
#-------------------------------#
| T6PR_PR                       |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define T6PR_PR                                  0x0
#define T6PR_PR_address                          0x41B
#define T6PR_PR_position                         0x0
#define T6PR_PR_size                             0x8
#define T6PR_PR_value_mask                       0xFF
#define T6PR_PR_clear_mask                       0x0

#define T6PR                                     0x0
#define T6PR_address                             0x41B
#define T6PR_position                            0x0
#define T6PR_size                                0x8
#define T6PR_value_mask                          0xFF
#define T6PR_clear_mask                          0x0


/*---------------------------------------------------------------------------------------#
| T6CON                                                                            0x41C |
#----------------------------------------------------------------------------------------#
| T6ON | T6CKPS2 | T6CKPS1 | T6CKPS0 | T6OUTPS3 | T6CON_OUTPS2 | T6CON_OUTPS1 | T6OUTPS0 |
#----------------------------------------------------------------------------------------#
| 7    | 6       | 5       | 4       | 3        | 2            | 1            | 0        |
#---------------------------------------------------------------------------------------*/

#define T6CON                                    0x0
#define T6CON_address                            0x41C
#define T6CON_position                           0x0
#define T6CON_size                               0x8
#define T6CON_value_mask                         0xFF
#define T6CON_clear_mask                         0x0

#define T6CON_OUTPS0                             0x0
#define T6CON_OUTPS0_address                     0x41C
#define T6CON_OUTPS0_position                    0x0
#define T6CON_OUTPS0_size                        0x1
#define T6CON_OUTPS0_value_mask                  0x1
#define T6CON_OUTPS0_clear_mask                  0xFE

#define T6OUTPS                                  0x0
#define T6OUTPS_address                          0x41C
#define T6OUTPS_position                         0x0
#define T6OUTPS_size                             0x4
#define T6OUTPS_value_mask                       0xF
#define T6OUTPS_clear_mask                       0xF0

#define T6CON_OUTPS                              0x0
#define T6CON_OUTPS_address                      0x41C
#define T6CON_OUTPS_position                     0x0
#define T6CON_OUTPS_size                         0x4
#define T6CON_OUTPS_value_mask                   0xF
#define T6CON_OUTPS_clear_mask                   0xF0

#define T6OUTPS0                                 0x0
#define T6OUTPS0_address                         0x41C
#define T6OUTPS0_position                        0x0
#define T6OUTPS0_size                            0x1
#define T6OUTPS0_value_mask                      0x1
#define T6OUTPS0_clear_mask                      0xFE

#define T6CON_OUTPS1                             0x1
#define T6CON_OUTPS1_address                     0x41C
#define T6CON_OUTPS1_position                    0x1
#define T6CON_OUTPS1_size                        0x1
#define T6CON_OUTPS1_value_mask                  0x2
#define T6CON_OUTPS1_clear_mask                  0xFD

#define T6OUTPS1                                 0x1
#define T6OUTPS1_address                         0x41C
#define T6OUTPS1_position                        0x1
#define T6OUTPS1_size                            0x1
#define T6OUTPS1_value_mask                      0x2
#define T6OUTPS1_clear_mask                      0xFD

#define T6CON_OUTPS2                             0x2
#define T6CON_OUTPS2_address                     0x41C
#define T6CON_OUTPS2_position                    0x2
#define T6CON_OUTPS2_size                        0x1
#define T6CON_OUTPS2_value_mask                  0x4
#define T6CON_OUTPS2_clear_mask                  0xFB

#define T6OUTPS2                                 0x2
#define T6OUTPS2_address                         0x41C
#define T6OUTPS2_position                        0x2
#define T6OUTPS2_size                            0x1
#define T6OUTPS2_value_mask                      0x4
#define T6OUTPS2_clear_mask                      0xFB

#define T6CON_OUTPS3                             0x3
#define T6CON_OUTPS3_address                     0x41C
#define T6CON_OUTPS3_position                    0x3
#define T6CON_OUTPS3_size                        0x1
#define T6CON_OUTPS3_value_mask                  0x8
#define T6CON_OUTPS3_clear_mask                  0xF7

#define T6OUTPS3                                 0x3
#define T6OUTPS3_address                         0x41C
#define T6OUTPS3_position                        0x3
#define T6OUTPS3_size                            0x1
#define T6OUTPS3_value_mask                      0x8
#define T6OUTPS3_clear_mask                      0xF7

#define T6CON_CKPS0                              0x4
#define T6CON_CKPS0_address                      0x41C
#define T6CON_CKPS0_position                     0x4
#define T6CON_CKPS0_size                         0x1
#define T6CON_CKPS0_value_mask                   0x10
#define T6CON_CKPS0_clear_mask                   0xEF

#define T6CKPS                                   0x4
#define T6CKPS_address                           0x41C
#define T6CKPS_position                          0x4
#define T6CKPS_size                              0x3
#define T6CKPS_value_mask                        0x70
#define T6CKPS_clear_mask                        0x8F

#define T6CKPS0                                  0x4
#define T6CKPS0_address                          0x41C
#define T6CKPS0_position                         0x4
#define T6CKPS0_size                             0x1
#define T6CKPS0_value_mask                       0x10
#define T6CKPS0_clear_mask                       0xEF

#define T6CON_CKPS                               0x4
#define T6CON_CKPS_address                       0x41C
#define T6CON_CKPS_position                      0x4
#define T6CON_CKPS_size                          0x3
#define T6CON_CKPS_value_mask                    0x70
#define T6CON_CKPS_clear_mask                    0x8F

#define T6CON_CKPS1                              0x5
#define T6CON_CKPS1_address                      0x41C
#define T6CON_CKPS1_position                     0x5
#define T6CON_CKPS1_size                         0x1
#define T6CON_CKPS1_value_mask                   0x20
#define T6CON_CKPS1_clear_mask                   0xDF

#define T6CKPS1                                  0x5
#define T6CKPS1_address                          0x41C
#define T6CKPS1_position                         0x5
#define T6CKPS1_size                             0x1
#define T6CKPS1_value_mask                       0x20
#define T6CKPS1_clear_mask                       0xDF

#define T6CON_CKPS2                              0x6
#define T6CON_CKPS2_address                      0x41C
#define T6CON_CKPS2_position                     0x6
#define T6CON_CKPS2_size                         0x1
#define T6CON_CKPS2_value_mask                   0x40
#define T6CON_CKPS2_clear_mask                   0xBF

#define T6CKPS2                                  0x6
#define T6CKPS2_address                          0x41C
#define T6CKPS2_position                         0x6
#define T6CKPS2_size                             0x1
#define T6CKPS2_value_mask                       0x40
#define T6CKPS2_clear_mask                       0xBF

#define TMR6ON                                   0x7
#define TMR6ON_address                           0x41C
#define TMR6ON_position                          0x7
#define TMR6ON_size                              0x1
#define TMR6ON_value_mask                        0x80
#define TMR6ON_clear_mask                        0x7F

#define T6ON                                     0x7
#define T6ON_address                             0x41C
#define T6ON_position                            0x7
#define T6ON_size                                0x1
#define T6ON_value_mask                          0x80
#define T6ON_clear_mask                          0x7F

#define T6CON_ON                                 0x7
#define T6CON_ON_address                         0x41C
#define T6CON_ON_position                        0x7
#define T6CON_ON_size                            0x1
#define T6CON_ON_value_mask                      0x80
#define T6CON_ON_clear_mask                      0x7F


/*---------------------------------------------------------------------------------------#
| T6HLT                                                                            0x41D |
#----------------------------------------------------------------------------------------#
| T6PSYNC | T6CKPOL | T6CKSYNC | T6MODE4 | T6HLT_MODE3 | T6MODE2 | T6HLT_MODE1 | T6MODE0 |
#----------------------------------------------------------------------------------------#
| 7       | 6       | 5        | 4       | 3           | 2       | 1           | 0       |
#---------------------------------------------------------------------------------------*/

#define T6HLT                                    0x0
#define T6HLT_address                            0x41D
#define T6HLT_position                           0x0
#define T6HLT_size                               0x8
#define T6HLT_value_mask                         0xFF
#define T6HLT_clear_mask                         0x0

#define T6MODE0                                  0x0
#define T6MODE0_address                          0x41D
#define T6MODE0_position                         0x0
#define T6MODE0_size                             0x1
#define T6MODE0_value_mask                       0x1
#define T6MODE0_clear_mask                       0xFE

#define T6HLT_MODE0                              0x0
#define T6HLT_MODE0_address                      0x41D
#define T6HLT_MODE0_position                     0x0
#define T6HLT_MODE0_size                         0x1
#define T6HLT_MODE0_value_mask                   0x1
#define T6HLT_MODE0_clear_mask                   0xFE

#define T6HLT_MODE                               0x0
#define T6HLT_MODE_address                       0x41D
#define T6HLT_MODE_position                      0x0
#define T6HLT_MODE_size                          0x5
#define T6HLT_MODE_value_mask                    0x1F
#define T6HLT_MODE_clear_mask                    0xE0

#define T6MODE                                   0x0
#define T6MODE_address                           0x41D
#define T6MODE_position                          0x0
#define T6MODE_size                              0x5
#define T6MODE_value_mask                        0x1F
#define T6MODE_clear_mask                        0xE0

#define T6HLT_MODE1                              0x1
#define T6HLT_MODE1_address                      0x41D
#define T6HLT_MODE1_position                     0x1
#define T6HLT_MODE1_size                         0x1
#define T6HLT_MODE1_value_mask                   0x2
#define T6HLT_MODE1_clear_mask                   0xFD

#define T6MODE1                                  0x1
#define T6MODE1_address                          0x41D
#define T6MODE1_position                         0x1
#define T6MODE1_size                             0x1
#define T6MODE1_value_mask                       0x2
#define T6MODE1_clear_mask                       0xFD

#define T6HLT_MODE2                              0x2
#define T6HLT_MODE2_address                      0x41D
#define T6HLT_MODE2_position                     0x2
#define T6HLT_MODE2_size                         0x1
#define T6HLT_MODE2_value_mask                   0x4
#define T6HLT_MODE2_clear_mask                   0xFB

#define T6MODE2                                  0x2
#define T6MODE2_address                          0x41D
#define T6MODE2_position                         0x2
#define T6MODE2_size                             0x1
#define T6MODE2_value_mask                       0x4
#define T6MODE2_clear_mask                       0xFB

#define T6HLT_MODE3                              0x3
#define T6HLT_MODE3_address                      0x41D
#define T6HLT_MODE3_position                     0x3
#define T6HLT_MODE3_size                         0x1
#define T6HLT_MODE3_value_mask                   0x8
#define T6HLT_MODE3_clear_mask                   0xF7

#define T6MODE3                                  0x3
#define T6MODE3_address                          0x41D
#define T6MODE3_position                         0x3
#define T6MODE3_size                             0x1
#define T6MODE3_value_mask                       0x8
#define T6MODE3_clear_mask                       0xF7

#define T6MODE4                                  0x4
#define T6MODE4_address                          0x41D
#define T6MODE4_position                         0x4
#define T6MODE4_size                             0x1
#define T6MODE4_value_mask                       0x10
#define T6MODE4_clear_mask                       0xEF

#define T6HLT_MODE4                              0x4
#define T6HLT_MODE4_address                      0x41D
#define T6HLT_MODE4_position                     0x4
#define T6HLT_MODE4_size                         0x1
#define T6HLT_MODE4_value_mask                   0x10
#define T6HLT_MODE4_clear_mask                   0xEF

#define T6CKSYNC                                 0x5
#define T6CKSYNC_address                         0x41D
#define T6CKSYNC_position                        0x5
#define T6CKSYNC_size                            0x1
#define T6CKSYNC_value_mask                      0x20
#define T6CKSYNC_clear_mask                      0xDF

#define T6HLT_CKSYNC                             0x5
#define T6HLT_CKSYNC_address                     0x41D
#define T6HLT_CKSYNC_position                    0x5
#define T6HLT_CKSYNC_size                        0x1
#define T6HLT_CKSYNC_value_mask                  0x20
#define T6HLT_CKSYNC_clear_mask                  0xDF

#define T6CKPOL                                  0x6
#define T6CKPOL_address                          0x41D
#define T6CKPOL_position                         0x6
#define T6CKPOL_size                             0x1
#define T6CKPOL_value_mask                       0x40
#define T6CKPOL_clear_mask                       0xBF

#define T6HLT_CKPOL                              0x6
#define T6HLT_CKPOL_address                      0x41D
#define T6HLT_CKPOL_position                     0x6
#define T6HLT_CKPOL_size                         0x1
#define T6HLT_CKPOL_value_mask                   0x40
#define T6HLT_CKPOL_clear_mask                   0xBF

#define T6PSYNC                                  0x7
#define T6PSYNC_address                          0x41D
#define T6PSYNC_position                         0x7
#define T6PSYNC_size                             0x1
#define T6PSYNC_value_mask                       0x80
#define T6PSYNC_clear_mask                       0x7F

#define T6HLT_PSYNC                              0x7
#define T6HLT_PSYNC_address                      0x41D
#define T6HLT_PSYNC_position                     0x7
#define T6HLT_PSYNC_size                         0x1
#define T6HLT_PSYNC_value_mask                   0x80
#define T6HLT_PSYNC_clear_mask                   0x7F


/*--------------------------------------------------------------------------#
| T6CLKCON                                                            0x41E |
#---------------------------------------------------------------------------#
| - | - | - | - | T6CLKCON_CS3 | T6CLKCON_CS2 | T6CLKCON_CS1 | T6CLKCON_CS0 |
#---------------------------------------------------------------------------#
| 7 | 6 | 5 | 4 | 3            | 2            | 1            | 0            |
#--------------------------------------------------------------------------*/

#define T6CLKCON                                 0x0
#define T6CLKCON_address                         0x41E
#define T6CLKCON_position                        0x0
#define T6CLKCON_size                            0x8
#define T6CLKCON_value_mask                      0xFF
#define T6CLKCON_clear_mask                      0x0

#define T6CS                                     0x0
#define T6CS_address                             0x41E
#define T6CS_position                            0x0
#define T6CS_size                                0x4
#define T6CS_value_mask                          0xF
#define T6CS_clear_mask                          0xF0

#define T6CLKCON_CS                              0x0
#define T6CLKCON_CS_address                      0x41E
#define T6CLKCON_CS_position                     0x0
#define T6CLKCON_CS_size                         0x4
#define T6CLKCON_CS_value_mask                   0xF
#define T6CLKCON_CS_clear_mask                   0xF0

#define T6CLKCON_CS0                             0x0
#define T6CLKCON_CS0_address                     0x41E
#define T6CLKCON_CS0_position                    0x0
#define T6CLKCON_CS0_size                        0x1
#define T6CLKCON_CS0_value_mask                  0x1
#define T6CLKCON_CS0_clear_mask                  0xFE

#define T6CS0                                    0x0
#define T6CS0_address                            0x41E
#define T6CS0_position                           0x0
#define T6CS0_size                               0x1
#define T6CS0_value_mask                         0x1
#define T6CS0_clear_mask                         0xFE

#define T6CLKCON_CS1                             0x1
#define T6CLKCON_CS1_address                     0x41E
#define T6CLKCON_CS1_position                    0x1
#define T6CLKCON_CS1_size                        0x1
#define T6CLKCON_CS1_value_mask                  0x2
#define T6CLKCON_CS1_clear_mask                  0xFD

#define T6CS1                                    0x1
#define T6CS1_address                            0x41E
#define T6CS1_position                           0x1
#define T6CS1_size                               0x1
#define T6CS1_value_mask                         0x2
#define T6CS1_clear_mask                         0xFD

#define T6CLKCON_CS2                             0x2
#define T6CLKCON_CS2_address                     0x41E
#define T6CLKCON_CS2_position                    0x2
#define T6CLKCON_CS2_size                        0x1
#define T6CLKCON_CS2_value_mask                  0x4
#define T6CLKCON_CS2_clear_mask                  0xFB

#define T6CS2                                    0x2
#define T6CS2_address                            0x41E
#define T6CS2_position                           0x2
#define T6CS2_size                               0x1
#define T6CS2_value_mask                         0x4
#define T6CS2_clear_mask                         0xFB

#define T6CLKCON_CS3                             0x3
#define T6CLKCON_CS3_address                     0x41E
#define T6CLKCON_CS3_position                    0x3
#define T6CLKCON_CS3_size                        0x1
#define T6CLKCON_CS3_value_mask                  0x8
#define T6CLKCON_CS3_clear_mask                  0xF7

#define T6CS3                                    0x3
#define T6CS3_address                            0x41E
#define T6CS3_position                           0x3
#define T6CS3_size                               0x1
#define T6CS3_value_mask                         0x8
#define T6CS3_clear_mask                         0xF7


/*----------------------------------------------------------#
| T6RST                                               0x41F |
#-----------------------------------------------------------#
| - | - | - | - | T6RSEL3 | T6RSEL2 | T6RSEL1 | T6RST_RSEL0 |
#-----------------------------------------------------------#
| 7 | 6 | 5 | 4 | 3       | 2       | 1       | 0           |
#----------------------------------------------------------*/

#define T6RST                                    0x0
#define T6RST_address                            0x41F
#define T6RST_position                           0x0
#define T6RST_size                               0x8
#define T6RST_value_mask                         0xFF
#define T6RST_clear_mask                         0x0

#define T6RST_RSEL                               0x0
#define T6RST_RSEL_address                       0x41F
#define T6RST_RSEL_position                      0x0
#define T6RST_RSEL_size                          0x4
#define T6RST_RSEL_value_mask                    0xF
#define T6RST_RSEL_clear_mask                    0xF0

#define T6RST_RSEL0                              0x0
#define T6RST_RSEL0_address                      0x41F
#define T6RST_RSEL0_position                     0x0
#define T6RST_RSEL0_size                         0x1
#define T6RST_RSEL0_value_mask                   0x1
#define T6RST_RSEL0_clear_mask                   0xFE

#define T6RSEL                                   0x0
#define T6RSEL_address                           0x41F
#define T6RSEL_position                          0x0
#define T6RSEL_size                              0x4
#define T6RSEL_value_mask                        0xF
#define T6RSEL_clear_mask                        0xF0

#define T6RSEL0                                  0x0
#define T6RSEL0_address                          0x41F
#define T6RSEL0_position                         0x0
#define T6RSEL0_size                             0x1
#define T6RSEL0_value_mask                       0x1
#define T6RSEL0_clear_mask                       0xFE

#define T6RST_RSEL1                              0x1
#define T6RST_RSEL1_address                      0x41F
#define T6RST_RSEL1_position                     0x1
#define T6RST_RSEL1_size                         0x1
#define T6RST_RSEL1_value_mask                   0x2
#define T6RST_RSEL1_clear_mask                   0xFD

#define T6RSEL1                                  0x1
#define T6RSEL1_address                          0x41F
#define T6RSEL1_position                         0x1
#define T6RSEL1_size                             0x1
#define T6RSEL1_value_mask                       0x2
#define T6RSEL1_clear_mask                       0xFD

#define T6RSEL2                                  0x2
#define T6RSEL2_address                          0x41F
#define T6RSEL2_position                         0x2
#define T6RSEL2_size                             0x1
#define T6RSEL2_value_mask                       0x4
#define T6RSEL2_clear_mask                       0xFB

#define T6RST_RSEL2                              0x2
#define T6RST_RSEL2_address                      0x41F
#define T6RST_RSEL2_position                     0x2
#define T6RST_RSEL2_size                         0x1
#define T6RST_RSEL2_value_mask                   0x4
#define T6RST_RSEL2_clear_mask                   0xFB

#define T6RST_RSEL3                              0x3
#define T6RST_RSEL3_address                      0x41F
#define T6RST_RSEL3_position                     0x3
#define T6RST_RSEL3_size                         0x1
#define T6RST_RSEL3_value_mask                   0x8
#define T6RST_RSEL3_clear_mask                   0xF7

#define T6RSEL3                                  0x3
#define T6RSEL3_address                          0x41F
#define T6RSEL3_position                         0x3
#define T6RSEL3_size                             0x1
#define T6RSEL3_value_mask                       0x8
#define T6RSEL3_clear_mask                       0xF7


/*------------------------------#
| TMR3L                   0x493 |
#-------------------------------#
| TMR3L_TMR                     |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define TMR3L                                    0x0
#define TMR3L_address                            0x493
#define TMR3L_position                           0x0
#define TMR3L_size                               0x8
#define TMR3L_value_mask                         0xFF
#define TMR3L_clear_mask                         0x0

#define TMR3L_TMR                                0x0
#define TMR3L_TMR_address                        0x493
#define TMR3L_TMR_position                       0x0
#define TMR3L_TMR_size                           0x8
#define TMR3L_TMR_value_mask                     0xFF
#define TMR3L_TMR_clear_mask                     0x0


/*------------------------------#
| TMR3H                   0x494 |
#-------------------------------#
| TMR3H_TMR                     |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define TMR3H                                    0x0
#define TMR3H_address                            0x494
#define TMR3H_position                           0x0
#define TMR3H_size                               0x8
#define TMR3H_value_mask                         0xFF
#define TMR3H_clear_mask                         0x0

#define TMR3H_TMR                                0x0
#define TMR3H_TMR_address                        0x494
#define TMR3H_TMR_position                       0x0
#define TMR3H_TMR_size                           0x8
#define TMR3H_TMR_value_mask                     0xFF
#define TMR3H_TMR_clear_mask                     0x0


/*---------------------------------------------------------------------------#
| T3CON                                                                0x495 |
#----------------------------------------------------------------------------#
| TMR3CS1 | TMR3CS0 | T3CON_CKPS1 | T3CON_CKPS0 | - | nT3SYNC | - | T3CON_ON |
#----------------------------------------------------------------------------#
| 7       | 6       | 5           | 4           | 3 | 2       | 1 | 0        |
#---------------------------------------------------------------------------*/

#define T3CON                                    0x0
#define T3CON_address                            0x495
#define T3CON_position                           0x0
#define T3CON_size                               0x8
#define T3CON_value_mask                         0xFF
#define T3CON_clear_mask                         0x0

#define T3CON_TMRON                              0x0
#define T3CON_TMRON_address                      0x495
#define T3CON_TMRON_position                     0x0
#define T3CON_TMRON_size                         0x1
#define T3CON_TMRON_value_mask                   0x1
#define T3CON_TMRON_clear_mask                   0xFE

#define TMR3ON                                   0x0
#define TMR3ON_address                           0x495
#define TMR3ON_position                          0x0
#define TMR3ON_size                              0x1
#define TMR3ON_value_mask                        0x1
#define TMR3ON_clear_mask                        0xFE

#define T3CON_ON                                 0x0
#define T3CON_ON_address                         0x495
#define T3CON_ON_position                        0x0
#define T3CON_ON_size                            0x1
#define T3CON_ON_value_mask                      0x1
#define T3CON_ON_clear_mask                      0xFE

#define T3ON                                     0x0
#define T3ON_address                             0x495
#define T3ON_position                            0x0
#define T3ON_size                                0x1
#define T3ON_value_mask                          0x1
#define T3ON_clear_mask                          0xFE

#define nT3SYNC                                  0x2
#define nT3SYNC_address                          0x495
#define nT3SYNC_position                         0x2
#define nT3SYNC_size                             0x1
#define nT3SYNC_value_mask                       0x4
#define nT3SYNC_clear_mask                       0xFB

#define T3CON_nSYNC                              0x2
#define T3CON_nSYNC_address                      0x495
#define T3CON_nSYNC_position                     0x2
#define T3CON_nSYNC_size                         0x1
#define T3CON_nSYNC_value_mask                   0x4
#define T3CON_nSYNC_clear_mask                   0xFB

#define T3CON_SYNC                               0x2
#define T3CON_SYNC_address                       0x495
#define T3CON_SYNC_position                      0x2
#define T3CON_SYNC_size                          0x1
#define T3CON_SYNC_value_mask                    0x4
#define T3CON_SYNC_clear_mask                    0xFB

#define T3CON_CKPS0                              0x4
#define T3CON_CKPS0_address                      0x495
#define T3CON_CKPS0_position                     0x4
#define T3CON_CKPS0_size                         0x1
#define T3CON_CKPS0_value_mask                   0x10
#define T3CON_CKPS0_clear_mask                   0xEF

#define T3CKPS0                                  0x4
#define T3CKPS0_address                          0x495
#define T3CKPS0_position                         0x4
#define T3CKPS0_size                             0x1
#define T3CKPS0_value_mask                       0x10
#define T3CKPS0_clear_mask                       0xEF

#define T3CON_CKPS                               0x4
#define T3CON_CKPS_address                       0x495
#define T3CON_CKPS_position                      0x4
#define T3CON_CKPS_size                          0x2
#define T3CON_CKPS_value_mask                    0x30
#define T3CON_CKPS_clear_mask                    0xCF

#define T3CON_CKPS1                              0x5
#define T3CON_CKPS1_address                      0x495
#define T3CON_CKPS1_position                     0x5
#define T3CON_CKPS1_size                         0x1
#define T3CON_CKPS1_value_mask                   0x20
#define T3CON_CKPS1_clear_mask                   0xDF

#define T3CKPS1                                  0x5
#define T3CKPS1_address                          0x495
#define T3CKPS1_position                         0x5
#define T3CKPS1_size                             0x1
#define T3CKPS1_value_mask                       0x20
#define T3CKPS1_clear_mask                       0xDF

#define TMR3CS0                                  0x6
#define TMR3CS0_address                          0x495
#define TMR3CS0_position                         0x6
#define TMR3CS0_size                             0x1
#define TMR3CS0_value_mask                       0x40
#define TMR3CS0_clear_mask                       0xBF

#define T3CON_CS0                                0x6
#define T3CON_CS0_address                        0x495
#define T3CON_CS0_position                       0x6
#define T3CON_CS0_size                           0x1
#define T3CON_CS0_value_mask                     0x40
#define T3CON_CS0_clear_mask                     0xBF

#define T3CS0                                    0x6
#define T3CS0_address                            0x495
#define T3CS0_position                           0x6
#define T3CS0_size                               0x1
#define T3CS0_value_mask                         0x40
#define T3CS0_clear_mask                         0xBF

#define T3CON_CS                                 0x6
#define T3CON_CS_address                         0x495
#define T3CON_CS_position                        0x6
#define T3CON_CS_size                            0x2
#define T3CON_CS_value_mask                      0xC0
#define T3CON_CS_clear_mask                      0x3F

#define TMR3CS1                                  0x7
#define TMR3CS1_address                          0x495
#define TMR3CS1_position                         0x7
#define TMR3CS1_size                             0x1
#define TMR3CS1_value_mask                       0x80
#define TMR3CS1_clear_mask                       0x7F

#define T3CON_CS1                                0x7
#define T3CON_CS1_address                        0x495
#define T3CON_CS1_position                       0x7
#define T3CON_CS1_size                           0x1
#define T3CON_CS1_value_mask                     0x80
#define T3CON_CS1_clear_mask                     0x7F

#define T3CS1                                    0x7
#define T3CS1_address                            0x495
#define T3CS1_position                           0x7
#define T3CS1_size                               0x1
#define T3CS1_value_mask                         0x80
#define T3CS1_clear_mask                         0x7F


/*-----------------------------------------------------------------------------#
| T3GCON                                                                 0x496 |
#------------------------------------------------------------------------------#
| T3GE | T3GPOL | T3GTM | T3GSPM | T3GGO_nDONE | T3GVAL | T3GCON_GSS1 | T3GSS0 |
#------------------------------------------------------------------------------#
| 7    | 6      | 5     | 4      | 3           | 2      | 1           | 0      |
#-----------------------------------------------------------------------------*/

#define T3GCON                                   0x0
#define T3GCON_address                           0x496
#define T3GCON_position                          0x0
#define T3GCON_size                              0x8
#define T3GCON_value_mask                        0xFF
#define T3GCON_clear_mask                        0x0

#define T3GCON_GSS0                              0x0
#define T3GCON_GSS0_address                      0x496
#define T3GCON_GSS0_position                     0x0
#define T3GCON_GSS0_size                         0x1
#define T3GCON_GSS0_value_mask                   0x1
#define T3GCON_GSS0_clear_mask                   0xFE

#define T3GSS0                                   0x0
#define T3GSS0_address                           0x496
#define T3GSS0_position                          0x0
#define T3GSS0_size                              0x1
#define T3GSS0_value_mask                        0x1
#define T3GSS0_clear_mask                        0xFE

#define T3GCON_GSS                               0x0
#define T3GCON_GSS_address                       0x496
#define T3GCON_GSS_position                      0x0
#define T3GCON_GSS_size                          0x2
#define T3GCON_GSS_value_mask                    0x3
#define T3GCON_GSS_clear_mask                    0xFC

#define T3GCON_GSS1                              0x1
#define T3GCON_GSS1_address                      0x496
#define T3GCON_GSS1_position                     0x1
#define T3GCON_GSS1_size                         0x1
#define T3GCON_GSS1_value_mask                   0x2
#define T3GCON_GSS1_clear_mask                   0xFD

#define T3GSS1                                   0x1
#define T3GSS1_address                           0x496
#define T3GSS1_position                          0x1
#define T3GSS1_size                              0x1
#define T3GSS1_value_mask                        0x2
#define T3GSS1_clear_mask                        0xFD

#define T3GCON_GVAL                              0x2
#define T3GCON_GVAL_address                      0x496
#define T3GCON_GVAL_position                     0x2
#define T3GCON_GVAL_size                         0x1
#define T3GCON_GVAL_value_mask                   0x4
#define T3GCON_GVAL_clear_mask                   0xFB

#define T3GVAL                                   0x2
#define T3GVAL_address                           0x496
#define T3GVAL_position                          0x2
#define T3GVAL_size                              0x1
#define T3GVAL_value_mask                        0x4
#define T3GVAL_clear_mask                        0xFB

#define T3GCON_GGO_nDONE                         0x3
#define T3GCON_GGO_nDONE_address                 0x496
#define T3GCON_GGO_nDONE_position                0x3
#define T3GCON_GGO_nDONE_size                    0x1
#define T3GCON_GGO_nDONE_value_mask              0x8
#define T3GCON_GGO_nDONE_clear_mask              0xF7

#define T3GGO_nDONE                              0x3
#define T3GGO_nDONE_address                      0x496
#define T3GGO_nDONE_position                     0x3
#define T3GGO_nDONE_size                         0x1
#define T3GGO_nDONE_value_mask                   0x8
#define T3GGO_nDONE_clear_mask                   0xF7

#define T3GSPM                                   0x4
#define T3GSPM_address                           0x496
#define T3GSPM_position                          0x4
#define T3GSPM_size                              0x1
#define T3GSPM_value_mask                        0x10
#define T3GSPM_clear_mask                        0xEF

#define T3GCON_GSPM                              0x4
#define T3GCON_GSPM_address                      0x496
#define T3GCON_GSPM_position                     0x4
#define T3GCON_GSPM_size                         0x1
#define T3GCON_GSPM_value_mask                   0x10
#define T3GCON_GSPM_clear_mask                   0xEF

#define T3GCON_GTM                               0x5
#define T3GCON_GTM_address                       0x496
#define T3GCON_GTM_position                      0x5
#define T3GCON_GTM_size                          0x1
#define T3GCON_GTM_value_mask                    0x20
#define T3GCON_GTM_clear_mask                    0xDF

#define T3GTM                                    0x5
#define T3GTM_address                            0x496
#define T3GTM_position                           0x5
#define T3GTM_size                               0x1
#define T3GTM_value_mask                         0x20
#define T3GTM_clear_mask                         0xDF

#define T3GPOL                                   0x6
#define T3GPOL_address                           0x496
#define T3GPOL_position                          0x6
#define T3GPOL_size                              0x1
#define T3GPOL_value_mask                        0x40
#define T3GPOL_clear_mask                        0xBF

#define T3GCON_GPOL                              0x6
#define T3GCON_GPOL_address                      0x496
#define T3GCON_GPOL_position                     0x6
#define T3GCON_GPOL_size                         0x1
#define T3GCON_GPOL_value_mask                   0x40
#define T3GCON_GPOL_clear_mask                   0xBF

#define TMR3GE                                   0x7
#define TMR3GE_address                           0x496
#define TMR3GE_position                          0x7
#define TMR3GE_size                              0x1
#define TMR3GE_value_mask                        0x80
#define TMR3GE_clear_mask                        0x7F

#define T3GCON_GE                                0x7
#define T3GCON_GE_address                        0x496
#define T3GCON_GE_position                       0x7
#define T3GCON_GE_size                           0x1
#define T3GCON_GE_value_mask                     0x80
#define T3GCON_GE_clear_mask                     0x7F

#define T3GE                                     0x7
#define T3GE_address                             0x496
#define T3GE_position                            0x7
#define T3GE_size                                0x1
#define T3GE_value_mask                          0x80
#define T3GE_clear_mask                          0x7F


/*------------------------------#
| TMR5L                   0x49A |
#-------------------------------#
| TMR5L_TMR                     |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define TMR5L                                    0x0
#define TMR5L_address                            0x49A
#define TMR5L_position                           0x0
#define TMR5L_size                               0x8
#define TMR5L_value_mask                         0xFF
#define TMR5L_clear_mask                         0x0

#define TMR5L_TMR                                0x0
#define TMR5L_TMR_address                        0x49A
#define TMR5L_TMR_position                       0x0
#define TMR5L_TMR_size                           0x8
#define TMR5L_TMR_value_mask                     0xFF
#define TMR5L_TMR_clear_mask                     0x0


/*------------------------------#
| TMR5H                   0x49B |
#-------------------------------#
| TMR5H_TMR                     |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define TMR5H                                    0x0
#define TMR5H_address                            0x49B
#define TMR5H_position                           0x0
#define TMR5H_size                               0x8
#define TMR5H_value_mask                         0xFF
#define TMR5H_clear_mask                         0x0

#define TMR5H_TMR                                0x0
#define TMR5H_TMR_address                        0x49B
#define TMR5H_TMR_position                       0x0
#define TMR5H_TMR_size                           0x8
#define TMR5H_TMR_value_mask                     0xFF
#define TMR5H_TMR_clear_mask                     0x0


/*--------------------------------------------------------------------------#
| T5CON                                                               0x49C |
#---------------------------------------------------------------------------#
| T5CS1 | T5CS0 | T5CON_CKPS1 | T5CON_CKPS0 | - | T5CON_SYNC | - | T5CON_ON |
#---------------------------------------------------------------------------#
| 7     | 6     | 5           | 4           | 3 | 2          | 1 | 0        |
#--------------------------------------------------------------------------*/

#define T5CON                                    0x0
#define T5CON_address                            0x49C
#define T5CON_position                           0x0
#define T5CON_size                               0x8
#define T5CON_value_mask                         0xFF
#define T5CON_clear_mask                         0x0

#define TMR5ON                                   0x0
#define TMR5ON_address                           0x49C
#define TMR5ON_position                          0x0
#define TMR5ON_size                              0x1
#define TMR5ON_value_mask                        0x1
#define TMR5ON_clear_mask                        0xFE

#define T5CON_ON                                 0x0
#define T5CON_ON_address                         0x49C
#define T5CON_ON_position                        0x0
#define T5CON_ON_size                            0x1
#define T5CON_ON_value_mask                      0x1
#define T5CON_ON_clear_mask                      0xFE

#define T5ON                                     0x0
#define T5ON_address                             0x49C
#define T5ON_position                            0x0
#define T5ON_size                                0x1
#define T5ON_value_mask                          0x1
#define T5ON_clear_mask                          0xFE

#define T5CON_TMRON                              0x0
#define T5CON_TMRON_address                      0x49C
#define T5CON_TMRON_position                     0x0
#define T5CON_TMRON_size                         0x1
#define T5CON_TMRON_value_mask                   0x1
#define T5CON_TMRON_clear_mask                   0xFE

#define T5CON_SYNC                               0x2
#define T5CON_SYNC_address                       0x49C
#define T5CON_SYNC_position                      0x2
#define T5CON_SYNC_size                          0x1
#define T5CON_SYNC_value_mask                    0x4
#define T5CON_SYNC_clear_mask                    0xFB

#define T5CON_nSYNC                              0x2
#define T5CON_nSYNC_address                      0x49C
#define T5CON_nSYNC_position                     0x2
#define T5CON_nSYNC_size                         0x1
#define T5CON_nSYNC_value_mask                   0x4
#define T5CON_nSYNC_clear_mask                   0xFB

#define nT5SYNC                                  0x2
#define nT5SYNC_address                          0x49C
#define nT5SYNC_position                         0x2
#define nT5SYNC_size                             0x1
#define nT5SYNC_value_mask                       0x4
#define nT5SYNC_clear_mask                       0xFB

#define T5CON_CKPS                               0x4
#define T5CON_CKPS_address                       0x49C
#define T5CON_CKPS_position                      0x4
#define T5CON_CKPS_size                          0x2
#define T5CON_CKPS_value_mask                    0x30
#define T5CON_CKPS_clear_mask                    0xCF

#define T5CON_CKPS0                              0x4
#define T5CON_CKPS0_address                      0x49C
#define T5CON_CKPS0_position                     0x4
#define T5CON_CKPS0_size                         0x1
#define T5CON_CKPS0_value_mask                   0x10
#define T5CON_CKPS0_clear_mask                   0xEF

#define T5CKPS0                                  0x4
#define T5CKPS0_address                          0x49C
#define T5CKPS0_position                         0x4
#define T5CKPS0_size                             0x1
#define T5CKPS0_value_mask                       0x10
#define T5CKPS0_clear_mask                       0xEF

#define T5CON_CKPS1                              0x5
#define T5CON_CKPS1_address                      0x49C
#define T5CON_CKPS1_position                     0x5
#define T5CON_CKPS1_size                         0x1
#define T5CON_CKPS1_value_mask                   0x20
#define T5CON_CKPS1_clear_mask                   0xDF

#define T5CKPS1                                  0x5
#define T5CKPS1_address                          0x49C
#define T5CKPS1_position                         0x5
#define T5CKPS1_size                             0x1
#define T5CKPS1_value_mask                       0x20
#define T5CKPS1_clear_mask                       0xDF

#define T5CON_CS                                 0x6
#define T5CON_CS_address                         0x49C
#define T5CON_CS_position                        0x6
#define T5CON_CS_size                            0x2
#define T5CON_CS_value_mask                      0xC0
#define T5CON_CS_clear_mask                      0x3F

#define T5CON_CS0                                0x6
#define T5CON_CS0_address                        0x49C
#define T5CON_CS0_position                       0x6
#define T5CON_CS0_size                           0x1
#define T5CON_CS0_value_mask                     0x40
#define T5CON_CS0_clear_mask                     0xBF

#define T5CS0                                    0x6
#define T5CS0_address                            0x49C
#define T5CS0_position                           0x6
#define T5CS0_size                               0x1
#define T5CS0_value_mask                         0x40
#define T5CS0_clear_mask                         0xBF

#define TMR5CS0                                  0x6
#define TMR5CS0_address                          0x49C
#define TMR5CS0_position                         0x6
#define TMR5CS0_size                             0x1
#define TMR5CS0_value_mask                       0x40
#define TMR5CS0_clear_mask                       0xBF

#define T5CON_CS1                                0x7
#define T5CON_CS1_address                        0x49C
#define T5CON_CS1_position                       0x7
#define T5CON_CS1_size                           0x1
#define T5CON_CS1_value_mask                     0x80
#define T5CON_CS1_clear_mask                     0x7F

#define T5CS1                                    0x7
#define T5CS1_address                            0x49C
#define T5CS1_position                           0x7
#define T5CS1_size                               0x1
#define T5CS1_value_mask                         0x80
#define T5CS1_clear_mask                         0x7F

#define TMR5CS1                                  0x7
#define TMR5CS1_address                          0x49C
#define TMR5CS1_position                         0x7
#define TMR5CS1_size                             0x1
#define TMR5CS1_value_mask                       0x80
#define TMR5CS1_clear_mask                       0x7F


/*-----------------------------------------------------------------------------------------#
| T5GCON                                                                             0x49D |
#------------------------------------------------------------------------------------------#
| TMR5GE | T5GPOL | T5GTM | T5GSPM | T5GCON_GGO_nDONE | T5GCON_GVAL | T5GSS1 | T5GCON_GSS0 |
#------------------------------------------------------------------------------------------#
| 7      | 6      | 5     | 4      | 3                | 2           | 1      | 0           |
#-----------------------------------------------------------------------------------------*/

#define T5GCON                                   0x0
#define T5GCON_address                           0x49D
#define T5GCON_position                          0x0
#define T5GCON_size                              0x8
#define T5GCON_value_mask                        0xFF
#define T5GCON_clear_mask                        0x0

#define T5GSS0                                   0x0
#define T5GSS0_address                           0x49D
#define T5GSS0_position                          0x0
#define T5GSS0_size                              0x1
#define T5GSS0_value_mask                        0x1
#define T5GSS0_clear_mask                        0xFE

#define T5GCON_GSS0                              0x0
#define T5GCON_GSS0_address                      0x49D
#define T5GCON_GSS0_position                     0x0
#define T5GCON_GSS0_size                         0x1
#define T5GCON_GSS0_value_mask                   0x1
#define T5GCON_GSS0_clear_mask                   0xFE

#define T5GCON_GSS                               0x0
#define T5GCON_GSS_address                       0x49D
#define T5GCON_GSS_position                      0x0
#define T5GCON_GSS_size                          0x2
#define T5GCON_GSS_value_mask                    0x3
#define T5GCON_GSS_clear_mask                    0xFC

#define T5GSS1                                   0x1
#define T5GSS1_address                           0x49D
#define T5GSS1_position                          0x1
#define T5GSS1_size                              0x1
#define T5GSS1_value_mask                        0x2
#define T5GSS1_clear_mask                        0xFD

#define T5GCON_GSS1                              0x1
#define T5GCON_GSS1_address                      0x49D
#define T5GCON_GSS1_position                     0x1
#define T5GCON_GSS1_size                         0x1
#define T5GCON_GSS1_value_mask                   0x2
#define T5GCON_GSS1_clear_mask                   0xFD

#define T5GVAL                                   0x2
#define T5GVAL_address                           0x49D
#define T5GVAL_position                          0x2
#define T5GVAL_size                              0x1
#define T5GVAL_value_mask                        0x4
#define T5GVAL_clear_mask                        0xFB

#define T5GCON_GVAL                              0x2
#define T5GCON_GVAL_address                      0x49D
#define T5GCON_GVAL_position                     0x2
#define T5GCON_GVAL_size                         0x1
#define T5GCON_GVAL_value_mask                   0x4
#define T5GCON_GVAL_clear_mask                   0xFB

#define T5GCON_GGO_nDONE                         0x3
#define T5GCON_GGO_nDONE_address                 0x49D
#define T5GCON_GGO_nDONE_position                0x3
#define T5GCON_GGO_nDONE_size                    0x1
#define T5GCON_GGO_nDONE_value_mask              0x8
#define T5GCON_GGO_nDONE_clear_mask              0xF7

#define T5GGO_nDONE                              0x3
#define T5GGO_nDONE_address                      0x49D
#define T5GGO_nDONE_position                     0x3
#define T5GGO_nDONE_size                         0x1
#define T5GGO_nDONE_value_mask                   0x8
#define T5GGO_nDONE_clear_mask                   0xF7

#define T5GSPM                                   0x4
#define T5GSPM_address                           0x49D
#define T5GSPM_position                          0x4
#define T5GSPM_size                              0x1
#define T5GSPM_value_mask                        0x10
#define T5GSPM_clear_mask                        0xEF

#define T5GCON_GSPM                              0x4
#define T5GCON_GSPM_address                      0x49D
#define T5GCON_GSPM_position                     0x4
#define T5GCON_GSPM_size                         0x1
#define T5GCON_GSPM_value_mask                   0x10
#define T5GCON_GSPM_clear_mask                   0xEF

#define T5GTM                                    0x5
#define T5GTM_address                            0x49D
#define T5GTM_position                           0x5
#define T5GTM_size                               0x1
#define T5GTM_value_mask                         0x20
#define T5GTM_clear_mask                         0xDF

#define T5GCON_GTM                               0x5
#define T5GCON_GTM_address                       0x49D
#define T5GCON_GTM_position                      0x5
#define T5GCON_GTM_size                          0x1
#define T5GCON_GTM_value_mask                    0x20
#define T5GCON_GTM_clear_mask                    0xDF

#define T5GPOL                                   0x6
#define T5GPOL_address                           0x49D
#define T5GPOL_position                          0x6
#define T5GPOL_size                              0x1
#define T5GPOL_value_mask                        0x40
#define T5GPOL_clear_mask                        0xBF

#define T5GCON_GPOL                              0x6
#define T5GCON_GPOL_address                      0x49D
#define T5GCON_GPOL_position                     0x6
#define T5GCON_GPOL_size                         0x1
#define T5GCON_GPOL_value_mask                   0x40
#define T5GCON_GPOL_clear_mask                   0xBF

#define T5GE                                     0x7
#define T5GE_address                             0x49D
#define T5GE_position                            0x7
#define T5GE_size                                0x1
#define T5GE_value_mask                          0x80
#define T5GE_clear_mask                          0x7F

#define TMR5GE                                   0x7
#define TMR5GE_address                           0x49D
#define TMR5GE_position                          0x7
#define TMR5GE_size                              0x1
#define TMR5GE_value_mask                        0x80
#define TMR5GE_clear_mask                        0x7F

#define T5GCON_GE                                0x7
#define T5GCON_GE_address                        0x49D
#define T5GCON_GE_position                       0x7
#define T5GCON_GE_size                           0x1
#define T5GCON_GE_value_mask                     0x80
#define T5GCON_GE_clear_mask                     0x7F


/*------------------------------#
| OPA1NCHS                0x50F |
#-------------------------------#
| OPA1NCH                       |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define OPA1NCHS                                 0x0
#define OPA1NCHS_address                         0x50F
#define OPA1NCHS_position                        0x0
#define OPA1NCHS_size                            0x8
#define OPA1NCHS_value_mask                      0xFF
#define OPA1NCHS_clear_mask                      0x0

#define OPA1NCH                                  0x0
#define OPA1NCH_address                          0x50F
#define OPA1NCH_position                         0x0
#define OPA1NCH_size                             0x8
#define OPA1NCH_value_mask                       0xFF
#define OPA1NCH_clear_mask                       0x0

#define OPA1NCHS_NCH                             0x0
#define OPA1NCHS_NCH_address                     0x50F
#define OPA1NCHS_NCH_position                    0x0
#define OPA1NCHS_NCH_size                        0x8
#define OPA1NCHS_NCH_value_mask                  0xFF
#define OPA1NCHS_NCH_clear_mask                  0x0


/*------------------------------#
| OPA1PCHS                0x510 |
#-------------------------------#
| OPA1PCHS_PCH                  |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define OPA1PCHS                                 0x0
#define OPA1PCHS_address                         0x510
#define OPA1PCHS_position                        0x0
#define OPA1PCHS_size                            0x8
#define OPA1PCHS_value_mask                      0xFF
#define OPA1PCHS_clear_mask                      0x0

#define OPA1PCHS_PCH                             0x0
#define OPA1PCHS_PCH_address                     0x510
#define OPA1PCHS_PCH_position                    0x0
#define OPA1PCHS_PCH_size                        0x8
#define OPA1PCHS_PCH_value_mask                  0xFF
#define OPA1PCHS_PCH_clear_mask                  0x0

#define OPA1PCH                                  0x0
#define OPA1PCH_address                          0x510
#define OPA1PCH_position                         0x0
#define OPA1PCH_size                             0x8
#define OPA1PCH_value_mask                       0xFF
#define OPA1PCH_clear_mask                       0x0


/*------------------------------------------------------#
| OPA1CON                                         0x511 |
#-------------------------------------------------------#
| OPA1CON_EN | - | - | UG | - | OPA1ORPOL | ORM1 | ORM0 |
#-------------------------------------------------------#
| 7          | 6 | 5 | 4  | 3 | 2         | 1    | 0    |
#------------------------------------------------------*/

#define OPA1CON                                  0x0
#define OPA1CON_address                          0x511
#define OPA1CON_position                         0x0
#define OPA1CON_size                             0x8
#define OPA1CON_value_mask                       0xFF
#define OPA1CON_clear_mask                       0x0

#define ORM0                                     0x0
#define ORM0_address                             0x511
#define ORM0_position                            0x0
#define ORM0_size                                0x1
#define ORM0_value_mask                          0x1
#define ORM0_clear_mask                          0xFE

#define OPA1ORM0                                 0x0
#define OPA1ORM0_address                         0x511
#define OPA1ORM0_position                        0x0
#define OPA1ORM0_size                            0x1
#define OPA1ORM0_value_mask                      0x1
#define OPA1ORM0_clear_mask                      0xFE

#define ORM                                      0x0
#define ORM_address                              0x511
#define ORM_position                             0x0
#define ORM_size                                 0x2
#define ORM_value_mask                           0x3
#define ORM_clear_mask                           0xFC

#define OPA1ORM                                  0x0
#define OPA1ORM_address                          0x511
#define OPA1ORM_position                         0x0
#define OPA1ORM_size                             0x2
#define OPA1ORM_value_mask                       0x3
#define OPA1ORM_clear_mask                       0xFC

#define ORM1                                     0x1
#define ORM1_address                             0x511
#define ORM1_position                            0x1
#define ORM1_size                                0x1
#define ORM1_value_mask                          0x2
#define ORM1_clear_mask                          0xFD

#define OPA1ORM1                                 0x1
#define OPA1ORM1_address                         0x511
#define OPA1ORM1_position                        0x1
#define OPA1ORM1_size                            0x1
#define OPA1ORM1_value_mask                      0x2
#define OPA1ORM1_clear_mask                      0xFD

#define OPA1ORPOL                                0x2
#define OPA1ORPOL_address                        0x511
#define OPA1ORPOL_position                       0x2
#define OPA1ORPOL_size                           0x1
#define OPA1ORPOL_value_mask                     0x4
#define OPA1ORPOL_clear_mask                     0xFB

#define ORPOL                                    0x2
#define ORPOL_address                            0x511
#define ORPOL_position                           0x2
#define ORPOL_size                               0x1
#define ORPOL_value_mask                         0x4
#define ORPOL_clear_mask                         0xFB

#define UG                                       0x4
#define UG_address                               0x511
#define UG_position                              0x4
#define UG_size                                  0x1
#define UG_value_mask                            0x10
#define UG_clear_mask                            0xEF

#define OPA1UG                                   0x4
#define OPA1UG_address                           0x511
#define OPA1UG_position                          0x4
#define OPA1UG_size                              0x1
#define OPA1UG_value_mask                        0x10
#define OPA1UG_clear_mask                        0xEF

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


/*------------------------------#
| OPA1ORS                 0x512 |
#-------------------------------#
| ORS                           |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define OPA1ORS                                  0x0
#define OPA1ORS_address                          0x512
#define OPA1ORS_position                         0x0
#define OPA1ORS_size                             0x8
#define OPA1ORS_value_mask                       0xFF
#define OPA1ORS_clear_mask                       0x0

#define ORS                                      0x0
#define ORS_address                              0x512
#define ORS_position                             0x0
#define ORS_size                                 0x8
#define ORS_value_mask                           0xFF
#define ORS_clear_mask                           0x0


/*-----------------------------------#
| DACLD                        0x590 |
#------------------------------------#
| - | - | - | - | - | - | - | DAC1LD |
#------------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0      |
#-----------------------------------*/

#define DACLD                                    0x0
#define DACLD_address                            0x590
#define DACLD_position                           0x0
#define DACLD_size                               0x8
#define DACLD_value_mask                         0xFF
#define DACLD_clear_mask                         0x0

#define DAC1LD                                   0x0
#define DAC1LD_address                           0x590
#define DAC1LD_position                          0x0
#define DAC1LD_size                              0x1
#define DAC1LD_value_mask                        0x1
#define DAC1LD_clear_mask                        0xFE


/*--------------------------------------------------------------------------------------------#
| DAC1CON0                                                                              0x591 |
#---------------------------------------------------------------------------------------------#
| DAC1CON0_EN | FM | DAC1CON0_DACOE1 | - | DAC1CON0_DACPSS1 | DAC1CON0_DACPSS0 | - | DAC1NSS0 |
#---------------------------------------------------------------------------------------------#
| 7           | 6  | 5               | 4 | 3                | 2                | 1 | 0        |
#--------------------------------------------------------------------------------------------*/

#define DAC1CON0                                 0x0
#define DAC1CON0_address                         0x591
#define DAC1CON0_position                        0x0
#define DAC1CON0_size                            0x8
#define DAC1CON0_value_mask                      0xFF
#define DAC1CON0_clear_mask                      0x0

#define DACNSS0                                  0x0
#define DACNSS0_address                          0x591
#define DACNSS0_position                         0x0
#define DACNSS0_size                             0x1
#define DACNSS0_value_mask                       0x1
#define DACNSS0_clear_mask                       0xFE

#define NSS0                                     0x0
#define NSS0_address                             0x591
#define NSS0_position                            0x0
#define NSS0_size                                0x1
#define NSS0_value_mask                          0x1
#define NSS0_clear_mask                          0xFE

#define DAC1CON0_DACNSS                          0x0
#define DAC1CON0_DACNSS_address                  0x591
#define DAC1CON0_DACNSS_position                 0x0
#define DAC1CON0_DACNSS_size                     0x2
#define DAC1CON0_DACNSS_value_mask               0x3
#define DAC1CON0_DACNSS_clear_mask               0xFC

#define DAC1NSS                                  0x0
#define DAC1NSS_address                          0x591
#define DAC1NSS_position                         0x0
#define DAC1NSS_size                             0x2
#define DAC1NSS_value_mask                       0x3
#define DAC1NSS_clear_mask                       0xFC

#define DAC1CON0_NSS                             0x0
#define DAC1CON0_NSS_address                     0x591
#define DAC1CON0_NSS_position                    0x0
#define DAC1CON0_NSS_size                        0x2
#define DAC1CON0_NSS_value_mask                  0x3
#define DAC1CON0_NSS_clear_mask                  0xFC

#define DAC1NSS0                                 0x0
#define DAC1NSS0_address                         0x591
#define DAC1NSS0_position                        0x0
#define DAC1NSS0_size                            0x1
#define DAC1NSS0_value_mask                      0x1
#define DAC1NSS0_clear_mask                      0xFE

#define DAC1CON0_DACPSS0                         0x2
#define DAC1CON0_DACPSS0_address                 0x591
#define DAC1CON0_DACPSS0_position                0x2
#define DAC1CON0_DACPSS0_size                    0x1
#define DAC1CON0_DACPSS0_value_mask              0x4
#define DAC1CON0_DACPSS0_clear_mask              0xFB

#define DAC1CON0_PSS0                            0x2
#define DAC1CON0_PSS0_address                    0x591
#define DAC1CON0_PSS0_position                   0x2
#define DAC1CON0_PSS0_size                       0x1
#define DAC1CON0_PSS0_value_mask                 0x4
#define DAC1CON0_PSS0_clear_mask                 0xFB

#define DAC1CON0_DACPSS                          0x2
#define DAC1CON0_DACPSS_address                  0x591
#define DAC1CON0_DACPSS_position                 0x2
#define DAC1CON0_DACPSS_size                     0x2
#define DAC1CON0_DACPSS_value_mask               0xC
#define DAC1CON0_DACPSS_clear_mask               0xF3

#define DAC1CON0_PSS                             0x2
#define DAC1CON0_PSS_address                     0x591
#define DAC1CON0_PSS_position                    0x2
#define DAC1CON0_PSS_size                        0x2
#define DAC1CON0_PSS_value_mask                  0xC
#define DAC1CON0_PSS_clear_mask                  0xF3

#define DAC1PSS                                  0x2
#define DAC1PSS_address                          0x591
#define DAC1PSS_position                         0x2
#define DAC1PSS_size                             0x2
#define DAC1PSS_value_mask                       0xC
#define DAC1PSS_clear_mask                       0xF3

#define DAC1PSS0                                 0x2
#define DAC1PSS0_address                         0x591
#define DAC1PSS0_position                        0x2
#define DAC1PSS0_size                            0x1
#define DAC1PSS0_value_mask                      0x4
#define DAC1PSS0_clear_mask                      0xFB

#define DAC1PSS1                                 0x3
#define DAC1PSS1_address                         0x591
#define DAC1PSS1_position                        0x3
#define DAC1PSS1_size                            0x1
#define DAC1PSS1_value_mask                      0x8
#define DAC1PSS1_clear_mask                      0xF7

#define DAC1CON0_DACPSS1                         0x3
#define DAC1CON0_DACPSS1_address                 0x591
#define DAC1CON0_DACPSS1_position                0x3
#define DAC1CON0_DACPSS1_size                    0x1
#define DAC1CON0_DACPSS1_value_mask              0x8
#define DAC1CON0_DACPSS1_clear_mask              0xF7

#define DAC1CON0_PSS1                            0x3
#define DAC1CON0_PSS1_address                    0x591
#define DAC1CON0_PSS1_position                   0x3
#define DAC1CON0_PSS1_size                       0x1
#define DAC1CON0_PSS1_value_mask                 0x8
#define DAC1CON0_PSS1_clear_mask                 0xF7

#define DAC1CON0_OE1                             0x5
#define DAC1CON0_OE1_address                     0x591
#define DAC1CON0_OE1_position                    0x5
#define DAC1CON0_OE1_size                        0x1
#define DAC1CON0_OE1_value_mask                  0x20
#define DAC1CON0_OE1_clear_mask                  0xDF

#define DAC1OE1                                  0x5
#define DAC1OE1_address                          0x591
#define DAC1OE1_position                         0x5
#define DAC1OE1_size                             0x1
#define DAC1OE1_value_mask                       0x20
#define DAC1OE1_clear_mask                       0xDF

#define DAC1CON0_DACOE1                          0x5
#define DAC1CON0_DACOE1_address                  0x591
#define DAC1CON0_DACOE1_position                 0x5
#define DAC1CON0_DACOE1_size                     0x1
#define DAC1CON0_DACOE1_value_mask               0x20
#define DAC1CON0_DACOE1_clear_mask               0xDF

#define DACOE                                    0x5
#define DACOE_address                            0x591
#define DACOE_position                           0x5
#define DACOE_size                               0x1
#define DACOE_value_mask                         0x20
#define DACOE_clear_mask                         0xDF

#define OE                                       0x5
#define OE_address                               0x591
#define OE_position                              0x5
#define OE_size                                  0x1
#define OE_value_mask                            0x20
#define OE_clear_mask                            0xDF

#define FM                                       0x6
#define FM_address                               0x591
#define FM_position                              0x6
#define FM_size                                  0x1
#define FM_value_mask                            0x40
#define FM_clear_mask                            0xBF

#define DACFM                                    0x6
#define DACFM_address                            0x591
#define DACFM_position                           0x6
#define DACFM_size                               0x1
#define DACFM_value_mask                         0x40
#define DACFM_clear_mask                         0xBF

#define DAC1FM                                   0x6
#define DAC1FM_address                           0x591
#define DAC1FM_position                          0x6
#define DAC1FM_size                              0x1
#define DAC1FM_value_mask                        0x40
#define DAC1FM_clear_mask                        0xBF

#define DAC1CON0_EN                              0x7
#define DAC1CON0_EN_address                      0x591
#define DAC1CON0_EN_position                     0x7
#define DAC1CON0_EN_size                         0x1
#define DAC1CON0_EN_value_mask                   0x80
#define DAC1CON0_EN_clear_mask                   0x7F

#define DAC1CON0_DACEN                           0x7
#define DAC1CON0_DACEN_address                   0x591
#define DAC1CON0_DACEN_position                  0x7
#define DAC1CON0_DACEN_size                      0x1
#define DAC1CON0_DACEN_value_mask                0x80
#define DAC1CON0_DACEN_clear_mask                0x7F

#define DAC1EN                                   0x7
#define DAC1EN_address                           0x591
#define DAC1EN_position                          0x7
#define DAC1EN_size                              0x1
#define DAC1EN_value_mask                        0x80
#define DAC1EN_clear_mask                        0x7F


/*----------------------------------------------------------------------------#
| DAC1REFL                                                              0x592 |
#-----------------------------------------------------------------------------#
| REF7 | REF6 | DAC1REF5 | DAC1REF4 | DAC1REF3 | DAC1R2 | DAC1REF1 | DAC1REF0 |
#-----------------------------------------------------------------------------#
| 7    | 6    | 5        | 4        | 3        | 2      | 1        | 0        |
#----------------------------------------------------------------------------*/

#define DAC1REFL                                 0x0
#define DAC1REFL_address                         0x592
#define DAC1REFL_position                        0x0
#define DAC1REFL_size                            0x8
#define DAC1REFL_value_mask                      0xFF
#define DAC1REFL_clear_mask                      0x0

#define DAC1REF0                                 0x0
#define DAC1REF0_address                         0x592
#define DAC1REF0_position                        0x0
#define DAC1REF0_size                            0x1
#define DAC1REF0_value_mask                      0x1
#define DAC1REF0_clear_mask                      0xFE

#define DAC1REFL_R0                              0x0
#define DAC1REFL_R0_address                      0x592
#define DAC1REFL_R0_position                     0x0
#define DAC1REFL_R0_size                         0x1
#define DAC1REFL_R0_value_mask                   0x1
#define DAC1REFL_R0_clear_mask                   0xFE

#define DAC1REFL_REF0                            0x0
#define DAC1REFL_REF0_address                    0x592
#define DAC1REFL_REF0_position                   0x0
#define DAC1REFL_REF0_size                       0x1
#define DAC1REFL_REF0_value_mask                 0x1
#define DAC1REFL_REF0_clear_mask                 0xFE

#define DAC1R0                                   0x0
#define DAC1R0_address                           0x592
#define DAC1R0_position                          0x0
#define DAC1R0_size                              0x1
#define DAC1R0_value_mask                        0x1
#define DAC1R0_clear_mask                        0xFE

#define DAC1REF1                                 0x1
#define DAC1REF1_address                         0x592
#define DAC1REF1_position                        0x1
#define DAC1REF1_size                            0x1
#define DAC1REF1_value_mask                      0x2
#define DAC1REF1_clear_mask                      0xFD

#define DAC1REFL_REF1                            0x1
#define DAC1REFL_REF1_address                    0x592
#define DAC1REFL_REF1_position                   0x1
#define DAC1REFL_REF1_size                       0x1
#define DAC1REFL_REF1_value_mask                 0x2
#define DAC1REFL_REF1_clear_mask                 0xFD

#define DAC1REFL_R1                              0x1
#define DAC1REFL_R1_address                      0x592
#define DAC1REFL_R1_position                     0x1
#define DAC1REFL_R1_size                         0x1
#define DAC1REFL_R1_value_mask                   0x2
#define DAC1REFL_R1_clear_mask                   0xFD

#define DAC1R1                                   0x1
#define DAC1R1_address                           0x592
#define DAC1R1_position                          0x1
#define DAC1R1_size                              0x1
#define DAC1R1_value_mask                        0x2
#define DAC1R1_clear_mask                        0xFD

#define DAC1REF2                                 0x2
#define DAC1REF2_address                         0x592
#define DAC1REF2_position                        0x2
#define DAC1REF2_size                            0x1
#define DAC1REF2_value_mask                      0x4
#define DAC1REF2_clear_mask                      0xFB

#define DAC1REFL_R2                              0x2
#define DAC1REFL_R2_address                      0x592
#define DAC1REFL_R2_position                     0x2
#define DAC1REFL_R2_size                         0x1
#define DAC1REFL_R2_value_mask                   0x4
#define DAC1REFL_R2_clear_mask                   0xFB

#define DAC1REFL_REF2                            0x2
#define DAC1REFL_REF2_address                    0x592
#define DAC1REFL_REF2_position                   0x2
#define DAC1REFL_REF2_size                       0x1
#define DAC1REFL_REF2_value_mask                 0x4
#define DAC1REFL_REF2_clear_mask                 0xFB

#define DAC1R2                                   0x2
#define DAC1R2_address                           0x592
#define DAC1R2_position                          0x2
#define DAC1R2_size                              0x1
#define DAC1R2_value_mask                        0x4
#define DAC1R2_clear_mask                        0xFB

#define DAC1REF3                                 0x3
#define DAC1REF3_address                         0x592
#define DAC1REF3_position                        0x3
#define DAC1REF3_size                            0x1
#define DAC1REF3_value_mask                      0x8
#define DAC1REF3_clear_mask                      0xF7

#define DAC1REFL_R3                              0x3
#define DAC1REFL_R3_address                      0x592
#define DAC1REFL_R3_position                     0x3
#define DAC1REFL_R3_size                         0x1
#define DAC1REFL_R3_value_mask                   0x8
#define DAC1REFL_R3_clear_mask                   0xF7

#define DAC1REFL_REF3                            0x3
#define DAC1REFL_REF3_address                    0x592
#define DAC1REFL_REF3_position                   0x3
#define DAC1REFL_REF3_size                       0x1
#define DAC1REFL_REF3_value_mask                 0x8
#define DAC1REFL_REF3_clear_mask                 0xF7

#define DAC1R3                                   0x3
#define DAC1R3_address                           0x592
#define DAC1R3_position                          0x3
#define DAC1R3_size                              0x1
#define DAC1R3_value_mask                        0x8
#define DAC1R3_clear_mask                        0xF7

#define DAC1REF4                                 0x4
#define DAC1REF4_address                         0x592
#define DAC1REF4_position                        0x4
#define DAC1REF4_size                            0x1
#define DAC1REF4_value_mask                      0x10
#define DAC1REF4_clear_mask                      0xEF

#define DAC1REFL_REF4                            0x4
#define DAC1REFL_REF4_address                    0x592
#define DAC1REFL_REF4_position                   0x4
#define DAC1REFL_REF4_size                       0x1
#define DAC1REFL_REF4_value_mask                 0x10
#define DAC1REFL_REF4_clear_mask                 0xEF

#define DAC1REFL_R4                              0x4
#define DAC1REFL_R4_address                      0x592
#define DAC1REFL_R4_position                     0x4
#define DAC1REFL_R4_size                         0x1
#define DAC1REFL_R4_value_mask                   0x10
#define DAC1REFL_R4_clear_mask                   0xEF

#define DAC1R4                                   0x4
#define DAC1R4_address                           0x592
#define DAC1R4_position                          0x4
#define DAC1R4_size                              0x1
#define DAC1R4_value_mask                        0x10
#define DAC1R4_clear_mask                        0xEF

#define DAC1REF5                                 0x5
#define DAC1REF5_address                         0x592
#define DAC1REF5_position                        0x5
#define DAC1REF5_size                            0x1
#define DAC1REF5_value_mask                      0x20
#define DAC1REF5_clear_mask                      0xDF

#define R5                                       0x5
#define R5_address                               0x592
#define R5_position                              0x5
#define R5_size                                  0x1
#define R5_value_mask                            0x20
#define R5_clear_mask                            0xDF

#define DAC1REFL_REF5                            0x5
#define DAC1REFL_REF5_address                    0x592
#define DAC1REFL_REF5_position                   0x5
#define DAC1REFL_REF5_size                       0x1
#define DAC1REFL_REF5_value_mask                 0x20
#define DAC1REFL_REF5_clear_mask                 0xDF

#define DAC1R5                                   0x5
#define DAC1R5_address                           0x592
#define DAC1R5_position                          0x5
#define DAC1R5_size                              0x1
#define DAC1R5_value_mask                        0x20
#define DAC1R5_clear_mask                        0xDF

#define REF6                                     0x6
#define REF6_address                             0x592
#define REF6_position                            0x6
#define REF6_size                                0x1
#define REF6_value_mask                          0x40
#define REF6_clear_mask                          0xBF

#define DAC1REF6                                 0x6
#define DAC1REF6_address                         0x592
#define DAC1REF6_position                        0x6
#define DAC1REF6_size                            0x1
#define DAC1REF6_value_mask                      0x40
#define DAC1REF6_clear_mask                      0xBF

#define R6                                       0x6
#define R6_address                               0x592
#define R6_position                              0x6
#define R6_size                                  0x1
#define R6_value_mask                            0x40
#define R6_clear_mask                            0xBF

#define DAC1R6                                   0x6
#define DAC1R6_address                           0x592
#define DAC1R6_position                          0x6
#define DAC1R6_size                              0x1
#define DAC1R6_value_mask                        0x40
#define DAC1R6_clear_mask                        0xBF

#define REF7                                     0x7
#define REF7_address                             0x592
#define REF7_position                            0x7
#define REF7_size                                0x1
#define REF7_value_mask                          0x80
#define REF7_clear_mask                          0x7F

#define DAC1REF7                                 0x7
#define DAC1REF7_address                         0x592
#define DAC1REF7_position                        0x7
#define DAC1REF7_size                            0x1
#define DAC1REF7_value_mask                      0x80
#define DAC1REF7_clear_mask                      0x7F

#define R7                                       0x7
#define R7_address                               0x592
#define R7_position                              0x7
#define R7_size                                  0x1
#define R7_value_mask                            0x80
#define R7_clear_mask                            0x7F

#define DAC1R7                                   0x7
#define DAC1R7_address                           0x592
#define DAC1R7_position                          0x7
#define DAC1R7_size                              0x1
#define DAC1R7_value_mask                        0x80
#define DAC1R7_clear_mask                        0x7F


/*----------------------------------------------------#
| DAC1REFH                                      0x593 |
#-----------------------------------------------------#
| R15 | R14 | R13 | R12 | DAC1R11 | R10 | REF9 | REF8 |
#-----------------------------------------------------#
| 7   | 6   | 5   | 4   | 3       | 2   | 1    | 0    |
#----------------------------------------------------*/

#define DAC1REFH                                 0x0
#define DAC1REFH_address                         0x593
#define DAC1REFH_position                        0x0
#define DAC1REFH_size                            0x8
#define DAC1REFH_value_mask                      0xFF
#define DAC1REFH_clear_mask                      0x0

#define REF8                                     0x0
#define REF8_address                             0x593
#define REF8_position                            0x0
#define REF8_size                                0x1
#define REF8_value_mask                          0x1
#define REF8_clear_mask                          0xFE

#define DAC1REF8                                 0x0
#define DAC1REF8_address                         0x593
#define DAC1REF8_position                        0x0
#define DAC1REF8_size                            0x1
#define DAC1REF8_value_mask                      0x1
#define DAC1REF8_clear_mask                      0xFE

#define R8                                       0x0
#define R8_address                               0x593
#define R8_position                              0x0
#define R8_size                                  0x1
#define R8_value_mask                            0x1
#define R8_clear_mask                            0xFE

#define DAC1R8                                   0x0
#define DAC1R8_address                           0x593
#define DAC1R8_position                          0x0
#define DAC1R8_size                              0x1
#define DAC1R8_value_mask                        0x1
#define DAC1R8_clear_mask                        0xFE

#define REF9                                     0x1
#define REF9_address                             0x593
#define REF9_position                            0x1
#define REF9_size                                0x1
#define REF9_value_mask                          0x2
#define REF9_clear_mask                          0xFD

#define DAC1REF9                                 0x1
#define DAC1REF9_address                         0x593
#define DAC1REF9_position                        0x1
#define DAC1REF9_size                            0x1
#define DAC1REF9_value_mask                      0x2
#define DAC1REF9_clear_mask                      0xFD

#define R9                                       0x1
#define R9_address                               0x593
#define R9_position                              0x1
#define R9_size                                  0x1
#define R9_value_mask                            0x2
#define R9_clear_mask                            0xFD

#define DAC1R9                                   0x1
#define DAC1R9_address                           0x593
#define DAC1R9_position                          0x1
#define DAC1R9_size                              0x1
#define DAC1R9_value_mask                        0x2
#define DAC1R9_clear_mask                        0xFD

#define R10                                      0x2
#define R10_address                              0x593
#define R10_position                             0x2
#define R10_size                                 0x1
#define R10_value_mask                           0x4
#define R10_clear_mask                           0xFB

#define REF10                                    0x2
#define REF10_address                            0x593
#define REF10_position                           0x2
#define REF10_size                               0x1
#define REF10_value_mask                         0x4
#define REF10_clear_mask                         0xFB

#define DAC1R10                                  0x2
#define DAC1R10_address                          0x593
#define DAC1R10_position                         0x2
#define DAC1R10_size                             0x1
#define DAC1R10_value_mask                       0x4
#define DAC1R10_clear_mask                       0xFB

#define DAC1REF10                                0x2
#define DAC1REF10_address                        0x593
#define DAC1REF10_position                       0x2
#define DAC1REF10_size                           0x1
#define DAC1REF10_value_mask                     0x4
#define DAC1REF10_clear_mask                     0xFB

#define R11                                      0x3
#define R11_address                              0x593
#define R11_position                             0x3
#define R11_size                                 0x1
#define R11_value_mask                           0x8
#define R11_clear_mask                           0xF7

#define REF11                                    0x3
#define REF11_address                            0x593
#define REF11_position                           0x3
#define REF11_size                               0x1
#define REF11_value_mask                         0x8
#define REF11_clear_mask                         0xF7

#define DAC1R11                                  0x3
#define DAC1R11_address                          0x593
#define DAC1R11_position                         0x3
#define DAC1R11_size                             0x1
#define DAC1R11_value_mask                       0x8
#define DAC1R11_clear_mask                       0xF7

#define DAC1REF11                                0x3
#define DAC1REF11_address                        0x593
#define DAC1REF11_position                       0x3
#define DAC1REF11_size                           0x1
#define DAC1REF11_value_mask                     0x8
#define DAC1REF11_clear_mask                     0xF7

#define R12                                      0x4
#define R12_address                              0x593
#define R12_position                             0x4
#define R12_size                                 0x1
#define R12_value_mask                           0x10
#define R12_clear_mask                           0xEF

#define REF12                                    0x4
#define REF12_address                            0x593
#define REF12_position                           0x4
#define REF12_size                               0x1
#define REF12_value_mask                         0x10
#define REF12_clear_mask                         0xEF

#define DAC1REF12                                0x4
#define DAC1REF12_address                        0x593
#define DAC1REF12_position                       0x4
#define DAC1REF12_size                           0x1
#define DAC1REF12_value_mask                     0x10
#define DAC1REF12_clear_mask                     0xEF

#define DAC1R12                                  0x4
#define DAC1R12_address                          0x593
#define DAC1R12_position                         0x4
#define DAC1R12_size                             0x1
#define DAC1R12_value_mask                       0x10
#define DAC1R12_clear_mask                       0xEF

#define R13                                      0x5
#define R13_address                              0x593
#define R13_position                             0x5
#define R13_size                                 0x1
#define R13_value_mask                           0x20
#define R13_clear_mask                           0xDF

#define REF13                                    0x5
#define REF13_address                            0x593
#define REF13_position                           0x5
#define REF13_size                               0x1
#define REF13_value_mask                         0x20
#define REF13_clear_mask                         0xDF

#define DAC1R13                                  0x5
#define DAC1R13_address                          0x593
#define DAC1R13_position                         0x5
#define DAC1R13_size                             0x1
#define DAC1R13_value_mask                       0x20
#define DAC1R13_clear_mask                       0xDF

#define DAC1REF13                                0x5
#define DAC1REF13_address                        0x593
#define DAC1REF13_position                       0x5
#define DAC1REF13_size                           0x1
#define DAC1REF13_value_mask                     0x20
#define DAC1REF13_clear_mask                     0xDF

#define R14                                      0x6
#define R14_address                              0x593
#define R14_position                             0x6
#define R14_size                                 0x1
#define R14_value_mask                           0x40
#define R14_clear_mask                           0xBF

#define REF14                                    0x6
#define REF14_address                            0x593
#define REF14_position                           0x6
#define REF14_size                               0x1
#define REF14_value_mask                         0x40
#define REF14_clear_mask                         0xBF

#define DAC1R14                                  0x6
#define DAC1R14_address                          0x593
#define DAC1R14_position                         0x6
#define DAC1R14_size                             0x1
#define DAC1R14_value_mask                       0x40
#define DAC1R14_clear_mask                       0xBF

#define DAC1REF14                                0x6
#define DAC1REF14_address                        0x593
#define DAC1REF14_position                       0x6
#define DAC1REF14_size                           0x1
#define DAC1REF14_value_mask                     0x40
#define DAC1REF14_clear_mask                     0xBF

#define R15                                      0x7
#define R15_address                              0x593
#define R15_position                             0x7
#define R15_size                                 0x1
#define R15_value_mask                           0x80
#define R15_clear_mask                           0x7F

#define REF15                                    0x7
#define REF15_address                            0x593
#define REF15_position                           0x7
#define REF15_size                               0x1
#define REF15_value_mask                         0x80
#define REF15_clear_mask                         0x7F

#define DAC1R15                                  0x7
#define DAC1R15_address                          0x593
#define DAC1R15_position                         0x7
#define DAC1R15_size                             0x1
#define DAC1R15_value_mask                       0x80
#define DAC1R15_clear_mask                       0x7F

#define DAC1REF15                                0x7
#define DAC1REF15_address                        0x593
#define DAC1REF15_position                       0x7
#define DAC1REF15_size                           0x1
#define DAC1REF15_value_mask                     0x80
#define DAC1REF15_clear_mask                     0x7F


/*---------------------------------------------------------------------------------------#
| DAC3CON0                                                                         0x597 |
#----------------------------------------------------------------------------------------#
| DAC3EN | - | DAC3CON0_DACOE1 | - | DAC3CON0_PSS1 | DAC3CON0_PSS0 | - | DAC3CON0_DACNSS |
#----------------------------------------------------------------------------------------#
| 7      | 6 | 5               | 4 | 3             | 2             | 1 | 0               |
#---------------------------------------------------------------------------------------*/

#define DAC3CON0                                 0x0
#define DAC3CON0_address                         0x597
#define DAC3CON0_position                        0x0
#define DAC3CON0_size                            0x8
#define DAC3CON0_value_mask                      0xFF
#define DAC3CON0_clear_mask                      0x0

#define DAC3CON0_DACNSS                          0x0
#define DAC3CON0_DACNSS_address                  0x597
#define DAC3CON0_DACNSS_position                 0x0
#define DAC3CON0_DACNSS_size                     0x1
#define DAC3CON0_DACNSS_value_mask               0x1
#define DAC3CON0_DACNSS_clear_mask               0xFE

#define DAC3NSS                                  0x0
#define DAC3NSS_address                          0x597
#define DAC3NSS_position                         0x0
#define DAC3NSS_size                             0x1
#define DAC3NSS_value_mask                       0x1
#define DAC3NSS_clear_mask                       0xFE

#define DAC3CON0_NSS                             0x0
#define DAC3CON0_NSS_address                     0x597
#define DAC3CON0_NSS_position                    0x0
#define DAC3CON0_NSS_size                        0x1
#define DAC3CON0_NSS_value_mask                  0x1
#define DAC3CON0_NSS_clear_mask                  0xFE

#define DAC3CON0_PSS                             0x2
#define DAC3CON0_PSS_address                     0x597
#define DAC3CON0_PSS_position                    0x2
#define DAC3CON0_PSS_size                        0x2
#define DAC3CON0_PSS_value_mask                  0xC
#define DAC3CON0_PSS_clear_mask                  0xF3

#define DAC3PSS0                                 0x2
#define DAC3PSS0_address                         0x597
#define DAC3PSS0_position                        0x2
#define DAC3PSS0_size                            0x1
#define DAC3PSS0_value_mask                      0x4
#define DAC3PSS0_clear_mask                      0xFB

#define DAC3CON0_DACPSS                          0x2
#define DAC3CON0_DACPSS_address                  0x597
#define DAC3CON0_DACPSS_position                 0x2
#define DAC3CON0_DACPSS_size                     0x2
#define DAC3CON0_DACPSS_value_mask               0xC
#define DAC3CON0_DACPSS_clear_mask               0xF3

#define DAC3PSS                                  0x2
#define DAC3PSS_address                          0x597
#define DAC3PSS_position                         0x2
#define DAC3PSS_size                             0x2
#define DAC3PSS_value_mask                       0xC
#define DAC3PSS_clear_mask                       0xF3

#define DAC3CON0_PSS0                            0x2
#define DAC3CON0_PSS0_address                    0x597
#define DAC3CON0_PSS0_position                   0x2
#define DAC3CON0_PSS0_size                       0x1
#define DAC3CON0_PSS0_value_mask                 0x4
#define DAC3CON0_PSS0_clear_mask                 0xFB

#define DAC3CON0_DACPSS0                         0x2
#define DAC3CON0_DACPSS0_address                 0x597
#define DAC3CON0_DACPSS0_position                0x2
#define DAC3CON0_DACPSS0_size                    0x1
#define DAC3CON0_DACPSS0_value_mask              0x4
#define DAC3CON0_DACPSS0_clear_mask              0xFB

#define DAC3PSS1                                 0x3
#define DAC3PSS1_address                         0x597
#define DAC3PSS1_position                        0x3
#define DAC3PSS1_size                            0x1
#define DAC3PSS1_value_mask                      0x8
#define DAC3PSS1_clear_mask                      0xF7

#define DAC3CON0_PSS1                            0x3
#define DAC3CON0_PSS1_address                    0x597
#define DAC3CON0_PSS1_position                   0x3
#define DAC3CON0_PSS1_size                       0x1
#define DAC3CON0_PSS1_value_mask                 0x8
#define DAC3CON0_PSS1_clear_mask                 0xF7

#define DAC3CON0_DACPSS1                         0x3
#define DAC3CON0_DACPSS1_address                 0x597
#define DAC3CON0_DACPSS1_position                0x3
#define DAC3CON0_DACPSS1_size                    0x1
#define DAC3CON0_DACPSS1_value_mask              0x8
#define DAC3CON0_DACPSS1_clear_mask              0xF7

#define DAC3OE1                                  0x5
#define DAC3OE1_address                          0x597
#define DAC3OE1_position                         0x5
#define DAC3OE1_size                             0x1
#define DAC3OE1_value_mask                       0x20
#define DAC3OE1_clear_mask                       0xDF

#define DAC3CON0_DACOE1                          0x5
#define DAC3CON0_DACOE1_address                  0x597
#define DAC3CON0_DACOE1_position                 0x5
#define DAC3CON0_DACOE1_size                     0x1
#define DAC3CON0_DACOE1_value_mask               0x20
#define DAC3CON0_DACOE1_clear_mask               0xDF

#define DAC3CON0_OE1                             0x5
#define DAC3CON0_OE1_address                     0x597
#define DAC3CON0_OE1_position                    0x5
#define DAC3CON0_OE1_size                        0x1
#define DAC3CON0_OE1_value_mask                  0x20
#define DAC3CON0_OE1_clear_mask                  0xDF

#define DAC3EN                                   0x7
#define DAC3EN_address                           0x597
#define DAC3EN_position                          0x7
#define DAC3EN_size                              0x1
#define DAC3EN_value_mask                        0x80
#define DAC3EN_clear_mask                        0x7F

#define DAC3CON0_EN                              0x7
#define DAC3CON0_EN_address                      0x597
#define DAC3CON0_EN_position                     0x7
#define DAC3CON0_EN_size                         0x1
#define DAC3CON0_EN_value_mask                   0x80
#define DAC3CON0_EN_clear_mask                   0x7F

#define DAC3CON0_DACEN                           0x7
#define DAC3CON0_DACEN_address                   0x597
#define DAC3CON0_DACEN_position                  0x7
#define DAC3CON0_DACEN_size                      0x1
#define DAC3CON0_DACEN_value_mask                0x80
#define DAC3CON0_DACEN_clear_mask                0x7F


/*------------------------------------------------------------------------#
| DAC3REF                                                           0x598 |
#-------------------------------------------------------------------------#
| - | - | DAC3REF5 | DAC3REF4 | DAC3REF3 | DAC3REF2 | DAC3REF1 | DAC3REF0 |
#-------------------------------------------------------------------------#
| 7 | 6 | 5        | 4        | 3        | 2        | 1        | 0        |
#------------------------------------------------------------------------*/

#define DAC3REF                                  0x0
#define DAC3REF_address                          0x598
#define DAC3REF_position                         0x0
#define DAC3REF_size                             0x8
#define DAC3REF_value_mask                       0xFF
#define DAC3REF_clear_mask                       0x0

#define DAC3REF0                                 0x0
#define DAC3REF0_address                         0x598
#define DAC3REF0_position                        0x0
#define DAC3REF0_size                            0x1
#define DAC3REF0_value_mask                      0x1
#define DAC3REF0_clear_mask                      0xFE

#define DAC3R                                    0x0
#define DAC3R_address                            0x598
#define DAC3R_position                           0x0
#define DAC3R_size                               0x5
#define DAC3R_value_mask                         0x1F
#define DAC3R_clear_mask                         0xE0

#define DACR0                                    0x0
#define DACR0_address                            0x598
#define DACR0_position                           0x0
#define DACR0_size                               0x1
#define DACR0_value_mask                         0x1
#define DACR0_clear_mask                         0xFE

#define DAC3REF_R0                               0x0
#define DAC3REF_R0_address                       0x598
#define DAC3REF_R0_position                      0x0
#define DAC3REF_R0_size                          0x1
#define DAC3REF_R0_value_mask                    0x1
#define DAC3REF_R0_clear_mask                    0xFE

#define DACR                                     0x0
#define DACR_address                             0x598
#define DACR_position                            0x0
#define DACR_size                                0x5
#define DACR_value_mask                          0x1F
#define DACR_clear_mask                          0xE0

#define DAC3REF_REF0                             0x0
#define DAC3REF_REF0_address                     0x598
#define DAC3REF_REF0_position                    0x0
#define DAC3REF_REF0_size                        0x1
#define DAC3REF_REF0_value_mask                  0x1
#define DAC3REF_REF0_clear_mask                  0xFE

#define DAC3R0                                   0x0
#define DAC3R0_address                           0x598
#define DAC3R0_position                          0x0
#define DAC3R0_size                              0x1
#define DAC3R0_value_mask                        0x1
#define DAC3R0_clear_mask                        0xFE

#define DAC3REF1                                 0x1
#define DAC3REF1_address                         0x598
#define DAC3REF1_position                        0x1
#define DAC3REF1_size                            0x1
#define DAC3REF1_value_mask                      0x2
#define DAC3REF1_clear_mask                      0xFD

#define DACR1                                    0x1
#define DACR1_address                            0x598
#define DACR1_position                           0x1
#define DACR1_size                               0x1
#define DACR1_value_mask                         0x2
#define DACR1_clear_mask                         0xFD

#define DAC3REF_R1                               0x1
#define DAC3REF_R1_address                       0x598
#define DAC3REF_R1_position                      0x1
#define DAC3REF_R1_size                          0x1
#define DAC3REF_R1_value_mask                    0x2
#define DAC3REF_R1_clear_mask                    0xFD

#define DAC3REF_REF1                             0x1
#define DAC3REF_REF1_address                     0x598
#define DAC3REF_REF1_position                    0x1
#define DAC3REF_REF1_size                        0x1
#define DAC3REF_REF1_value_mask                  0x2
#define DAC3REF_REF1_clear_mask                  0xFD

#define DAC3R1                                   0x1
#define DAC3R1_address                           0x598
#define DAC3R1_position                          0x1
#define DAC3R1_size                              0x1
#define DAC3R1_value_mask                        0x2
#define DAC3R1_clear_mask                        0xFD

#define DAC3REF2                                 0x2
#define DAC3REF2_address                         0x598
#define DAC3REF2_position                        0x2
#define DAC3REF2_size                            0x1
#define DAC3REF2_value_mask                      0x4
#define DAC3REF2_clear_mask                      0xFB

#define DACR2                                    0x2
#define DACR2_address                            0x598
#define DACR2_position                           0x2
#define DACR2_size                               0x1
#define DACR2_value_mask                         0x4
#define DACR2_clear_mask                         0xFB

#define DAC3REF_R2                               0x2
#define DAC3REF_R2_address                       0x598
#define DAC3REF_R2_position                      0x2
#define DAC3REF_R2_size                          0x1
#define DAC3REF_R2_value_mask                    0x4
#define DAC3REF_R2_clear_mask                    0xFB

#define DAC3REF_REF2                             0x2
#define DAC3REF_REF2_address                     0x598
#define DAC3REF_REF2_position                    0x2
#define DAC3REF_REF2_size                        0x1
#define DAC3REF_REF2_value_mask                  0x4
#define DAC3REF_REF2_clear_mask                  0xFB

#define DAC3R2                                   0x2
#define DAC3R2_address                           0x598
#define DAC3R2_position                          0x2
#define DAC3R2_size                              0x1
#define DAC3R2_value_mask                        0x4
#define DAC3R2_clear_mask                        0xFB

#define DAC3REF3                                 0x3
#define DAC3REF3_address                         0x598
#define DAC3REF3_position                        0x3
#define DAC3REF3_size                            0x1
#define DAC3REF3_value_mask                      0x8
#define DAC3REF3_clear_mask                      0xF7

#define DACR3                                    0x3
#define DACR3_address                            0x598
#define DACR3_position                           0x3
#define DACR3_size                               0x1
#define DACR3_value_mask                         0x8
#define DACR3_clear_mask                         0xF7

#define DAC3REF_REF3                             0x3
#define DAC3REF_REF3_address                     0x598
#define DAC3REF_REF3_position                    0x3
#define DAC3REF_REF3_size                        0x1
#define DAC3REF_REF3_value_mask                  0x8
#define DAC3REF_REF3_clear_mask                  0xF7

#define DAC3REF_R3                               0x3
#define DAC3REF_R3_address                       0x598
#define DAC3REF_R3_position                      0x3
#define DAC3REF_R3_size                          0x1
#define DAC3REF_R3_value_mask                    0x8
#define DAC3REF_R3_clear_mask                    0xF7

#define DAC3R3                                   0x3
#define DAC3R3_address                           0x598
#define DAC3R3_position                          0x3
#define DAC3R3_size                              0x1
#define DAC3R3_value_mask                        0x8
#define DAC3R3_clear_mask                        0xF7

#define DAC3REF4                                 0x4
#define DAC3REF4_address                         0x598
#define DAC3REF4_position                        0x4
#define DAC3REF4_size                            0x1
#define DAC3REF4_value_mask                      0x10
#define DAC3REF4_clear_mask                      0xEF

#define DACR4                                    0x4
#define DACR4_address                            0x598
#define DACR4_position                           0x4
#define DACR4_size                               0x1
#define DACR4_value_mask                         0x10
#define DACR4_clear_mask                         0xEF

#define DAC3REF_R4                               0x4
#define DAC3REF_R4_address                       0x598
#define DAC3REF_R4_position                      0x4
#define DAC3REF_R4_size                          0x1
#define DAC3REF_R4_value_mask                    0x10
#define DAC3REF_R4_clear_mask                    0xEF

#define DAC3REF_REF4                             0x4
#define DAC3REF_REF4_address                     0x598
#define DAC3REF_REF4_position                    0x4
#define DAC3REF_REF4_size                        0x1
#define DAC3REF_REF4_value_mask                  0x10
#define DAC3REF_REF4_clear_mask                  0xEF

#define DAC3R4                                   0x4
#define DAC3R4_address                           0x598
#define DAC3R4_position                          0x4
#define DAC3R4_size                              0x1
#define DAC3R4_value_mask                        0x10
#define DAC3R4_clear_mask                        0xEF

#define DAC3REF5                                 0x5
#define DAC3REF5_address                         0x598
#define DAC3REF5_position                        0x5
#define DAC3REF5_size                            0x1
#define DAC3REF5_value_mask                      0x20
#define DAC3REF5_clear_mask                      0xDF

#define DAC3REF_REF5                             0x5
#define DAC3REF_REF5_address                     0x598
#define DAC3REF_REF5_position                    0x5
#define DAC3REF_REF5_size                        0x1
#define DAC3REF_REF5_value_mask                  0x20
#define DAC3REF_REF5_clear_mask                  0xDF


/*------------------------------------------#
| PWM3DCL                             0x617 |
#-------------------------------------------#
| PWM3DC1 | PWM3DC0 | - | - | - | - | - | - |
#-------------------------------------------#
| 7       | 6       | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------------------*/

#define PWM3DCL                                  0x0
#define PWM3DCL_address                          0x617
#define PWM3DCL_position                         0x0
#define PWM3DCL_size                             0x8
#define PWM3DCL_value_mask                       0xFF
#define PWM3DCL_clear_mask                       0x0

#define PWM3DC0                                  0x6
#define PWM3DC0_address                          0x617
#define PWM3DC0_position                         0x6
#define PWM3DC0_size                             0x1
#define PWM3DC0_value_mask                       0x40
#define PWM3DC0_clear_mask                       0xBF

#define PWMPW0                                   0x6
#define PWMPW0_address                           0x617
#define PWMPW0_position                          0x6
#define PWMPW0_size                              0x1
#define PWMPW0_value_mask                        0x40
#define PWMPW0_clear_mask                        0xBF

#define PWM3DCL_DC                               0x6
#define PWM3DCL_DC_address                       0x617
#define PWM3DCL_DC_position                      0x6
#define PWM3DCL_DC_size                          0x2
#define PWM3DCL_DC_value_mask                    0xC0
#define PWM3DCL_DC_clear_mask                    0x3F

#define DC0                                      0x6
#define DC0_address                              0x617
#define DC0_position                             0x6
#define DC0_size                                 0x1
#define DC0_value_mask                           0x40
#define DC0_clear_mask                           0xBF

#define PWM3DC1                                  0x7
#define PWM3DC1_address                          0x617
#define PWM3DC1_position                         0x7
#define PWM3DC1_size                             0x1
#define PWM3DC1_value_mask                       0x80
#define PWM3DC1_clear_mask                       0x7F

#define PWMPW1                                   0x7
#define PWMPW1_address                           0x617
#define PWMPW1_position                          0x7
#define PWMPW1_size                              0x1
#define PWMPW1_value_mask                        0x80
#define PWMPW1_clear_mask                        0x7F

#define DC1                                      0x7
#define DC1_address                              0x617
#define DC1_position                             0x7
#define DC1_size                                 0x1
#define DC1_value_mask                           0x80
#define DC1_clear_mask                           0x7F


/*----------------------------------------------------------------------------#
| PWM3DCH                                                               0x618 |
#-----------------------------------------------------------------------------#
| PWMPW9 | PWMPW8 | PWM3DC7 | PWM3DC6 | PWM3DC5 | PWM3DC4 | PWM3DC3 | PWM3DC2 |
#-----------------------------------------------------------------------------#
| 7      | 6      | 5       | 4       | 3       | 2       | 1       | 0       |
#----------------------------------------------------------------------------*/

#define PWM3DCH                                  0x0
#define PWM3DCH_address                          0x618
#define PWM3DCH_position                         0x0
#define PWM3DCH_size                             0x8
#define PWM3DCH_value_mask                       0xFF
#define PWM3DCH_clear_mask                       0x0

#define PWM3DC2                                  0x0
#define PWM3DC2_address                          0x618
#define PWM3DC2_position                         0x0
#define PWM3DC2_size                             0x1
#define PWM3DC2_value_mask                       0x1
#define PWM3DC2_clear_mask                       0xFE

#define PWMPW2                                   0x0
#define PWMPW2_address                           0x618
#define PWMPW2_position                          0x0
#define PWMPW2_size                              0x1
#define PWMPW2_value_mask                        0x1
#define PWMPW2_clear_mask                        0xFE

#define PWM3DCH_DC                               0x0
#define PWM3DCH_DC_address                       0x618
#define PWM3DCH_DC_position                      0x0
#define PWM3DCH_DC_size                          0x8
#define PWM3DCH_DC_value_mask                    0xFF
#define PWM3DCH_DC_clear_mask                    0x0

#define DC2                                      0x0
#define DC2_address                              0x618
#define DC2_position                             0x0
#define DC2_size                                 0x1
#define DC2_value_mask                           0x1
#define DC2_clear_mask                           0xFE

#define PWM3DC3                                  0x1
#define PWM3DC3_address                          0x618
#define PWM3DC3_position                         0x1
#define PWM3DC3_size                             0x1
#define PWM3DC3_value_mask                       0x2
#define PWM3DC3_clear_mask                       0xFD

#define PWMPW3                                   0x1
#define PWMPW3_address                           0x618
#define PWMPW3_position                          0x1
#define PWMPW3_size                              0x1
#define PWMPW3_value_mask                        0x2
#define PWMPW3_clear_mask                        0xFD

#define DC3                                      0x1
#define DC3_address                              0x618
#define DC3_position                             0x1
#define DC3_size                                 0x1
#define DC3_value_mask                           0x2
#define DC3_clear_mask                           0xFD

#define PWM3DC4                                  0x2
#define PWM3DC4_address                          0x618
#define PWM3DC4_position                         0x2
#define PWM3DC4_size                             0x1
#define PWM3DC4_value_mask                       0x4
#define PWM3DC4_clear_mask                       0xFB

#define PWMPW4                                   0x2
#define PWMPW4_address                           0x618
#define PWMPW4_position                          0x2
#define PWMPW4_size                              0x1
#define PWMPW4_value_mask                        0x4
#define PWMPW4_clear_mask                        0xFB

#define DC4                                      0x2
#define DC4_address                              0x618
#define DC4_position                             0x2
#define DC4_size                                 0x1
#define DC4_value_mask                           0x4
#define DC4_clear_mask                           0xFB

#define PWM3DC5                                  0x3
#define PWM3DC5_address                          0x618
#define PWM3DC5_position                         0x3
#define PWM3DC5_size                             0x1
#define PWM3DC5_value_mask                       0x8
#define PWM3DC5_clear_mask                       0xF7

#define PWMPW5                                   0x3
#define PWMPW5_address                           0x618
#define PWMPW5_position                          0x3
#define PWMPW5_size                              0x1
#define PWMPW5_value_mask                        0x8
#define PWMPW5_clear_mask                        0xF7

#define DC5                                      0x3
#define DC5_address                              0x618
#define DC5_position                             0x3
#define DC5_size                                 0x1
#define DC5_value_mask                           0x8
#define DC5_clear_mask                           0xF7

#define PWM3DC6                                  0x4
#define PWM3DC6_address                          0x618
#define PWM3DC6_position                         0x4
#define PWM3DC6_size                             0x1
#define PWM3DC6_value_mask                       0x10
#define PWM3DC6_clear_mask                       0xEF

#define PWMPW6                                   0x4
#define PWMPW6_address                           0x618
#define PWMPW6_position                          0x4
#define PWMPW6_size                              0x1
#define PWMPW6_value_mask                        0x10
#define PWMPW6_clear_mask                        0xEF

#define DC6                                      0x4
#define DC6_address                              0x618
#define DC6_position                             0x4
#define DC6_size                                 0x1
#define DC6_value_mask                           0x10
#define DC6_clear_mask                           0xEF

#define PWM3DC7                                  0x5
#define PWM3DC7_address                          0x618
#define PWM3DC7_position                         0x5
#define PWM3DC7_size                             0x1
#define PWM3DC7_value_mask                       0x20
#define PWM3DC7_clear_mask                       0xDF

#define PWMPW7                                   0x5
#define PWMPW7_address                           0x618
#define PWMPW7_position                          0x5
#define PWMPW7_size                              0x1
#define PWMPW7_value_mask                        0x20
#define PWMPW7_clear_mask                        0xDF

#define DC7                                      0x5
#define DC7_address                              0x618
#define DC7_position                             0x5
#define DC7_size                                 0x1
#define DC7_value_mask                           0x20
#define DC7_clear_mask                           0xDF

#define PWMPW8                                   0x6
#define PWMPW8_address                           0x618
#define PWMPW8_position                          0x6
#define PWMPW8_size                              0x1
#define PWMPW8_value_mask                        0x40
#define PWMPW8_clear_mask                        0xBF

#define PWM3DC8                                  0x6
#define PWM3DC8_address                          0x618
#define PWM3DC8_position                         0x6
#define PWM3DC8_size                             0x1
#define PWM3DC8_value_mask                       0x40
#define PWM3DC8_clear_mask                       0xBF

#define DC8                                      0x6
#define DC8_address                              0x618
#define DC8_position                             0x6
#define DC8_size                                 0x1
#define DC8_value_mask                           0x40
#define DC8_clear_mask                           0xBF

#define PWMPW9                                   0x7
#define PWMPW9_address                           0x618
#define PWMPW9_position                          0x7
#define PWMPW9_size                              0x1
#define PWMPW9_value_mask                        0x80
#define PWMPW9_clear_mask                        0x7F

#define PWM3DC9                                  0x7
#define PWM3DC9_address                          0x618
#define PWM3DC9_position                         0x7
#define PWM3DC9_size                             0x1
#define PWM3DC9_value_mask                       0x80
#define PWM3DC9_clear_mask                       0x7F

#define DC9                                      0x7
#define DC9_address                              0x618
#define DC9_position                             0x7
#define DC9_size                                 0x1
#define DC9_value_mask                           0x80
#define DC9_clear_mask                           0x7F


/*-------------------------------------------------------#
| PWM3CON                                          0x619 |
#--------------------------------------------------------#
| PWM3EN | - | PWM3CON_OUT | PWM3CON_POL | - | - | - | - |
#--------------------------------------------------------#
| 7      | 6 | 5           | 4           | 3 | 2 | 1 | 0 |
#-------------------------------------------------------*/

#define PWM3CON                                  0x0
#define PWM3CON_address                          0x619
#define PWM3CON_position                         0x0
#define PWM3CON_size                             0x8
#define PWM3CON_value_mask                       0xFF
#define PWM3CON_clear_mask                       0x0

#define PWM3CON_POL                              0x4
#define PWM3CON_POL_address                      0x619
#define PWM3CON_POL_position                     0x4
#define PWM3CON_POL_size                         0x1
#define PWM3CON_POL_value_mask                   0x10
#define PWM3CON_POL_clear_mask                   0xEF

#define PWM3POL                                  0x4
#define PWM3POL_address                          0x619
#define PWM3POL_position                         0x4
#define PWM3POL_size                             0x1
#define PWM3POL_value_mask                       0x10
#define PWM3POL_clear_mask                       0xEF

#define PWM3CON_OUT                              0x5
#define PWM3CON_OUT_address                      0x619
#define PWM3CON_OUT_position                     0x5
#define PWM3CON_OUT_size                         0x1
#define PWM3CON_OUT_value_mask                   0x20
#define PWM3CON_OUT_clear_mask                   0xDF

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

#define PWM3CON_EN                               0x7
#define PWM3CON_EN_address                       0x619
#define PWM3CON_EN_position                      0x7
#define PWM3CON_EN_size                          0x1
#define PWM3CON_EN_value_mask                    0x80
#define PWM3CON_EN_clear_mask                    0x7F


/*------------------------------------------------------------#
| COG1PHR                                               0x68D |
#-------------------------------------------------------------#
| - | - | G1PHR5 | G1PHR4 | G1PHR3 | G1PHR2 | G1PHR1 | G1PHR0 |
#-------------------------------------------------------------#
| 7 | 6 | 5      | 4      | 3      | 2      | 1      | 0      |
#------------------------------------------------------------*/

#define COG1PHR                                  0x0
#define COG1PHR_address                          0x68D
#define COG1PHR_position                         0x0
#define COG1PHR_size                             0x8
#define COG1PHR_value_mask                       0xFF
#define COG1PHR_clear_mask                       0x0

#define G1PHR0                                   0x0
#define G1PHR0_address                           0x68D
#define G1PHR0_position                          0x0
#define G1PHR0_size                              0x1
#define G1PHR0_value_mask                        0x1
#define G1PHR0_clear_mask                        0xFE

#define PHR                                      0x0
#define PHR_address                              0x68D
#define PHR_position                             0x0
#define PHR_size                                 0x6
#define PHR_value_mask                           0x3F
#define PHR_clear_mask                           0xC0

#define PHR0                                     0x0
#define PHR0_address                             0x68D
#define PHR0_position                            0x0
#define PHR0_size                                0x1
#define PHR0_value_mask                          0x1
#define PHR0_clear_mask                          0xFE

#define G1PHR1                                   0x1
#define G1PHR1_address                           0x68D
#define G1PHR1_position                          0x1
#define G1PHR1_size                              0x1
#define G1PHR1_value_mask                        0x2
#define G1PHR1_clear_mask                        0xFD

#define PHR1                                     0x1
#define PHR1_address                             0x68D
#define PHR1_position                            0x1
#define PHR1_size                                0x1
#define PHR1_value_mask                          0x2
#define PHR1_clear_mask                          0xFD

#define G1PHR2                                   0x2
#define G1PHR2_address                           0x68D
#define G1PHR2_position                          0x2
#define G1PHR2_size                              0x1
#define G1PHR2_value_mask                        0x4
#define G1PHR2_clear_mask                        0xFB

#define PHR2                                     0x2
#define PHR2_address                             0x68D
#define PHR2_position                            0x2
#define PHR2_size                                0x1
#define PHR2_value_mask                          0x4
#define PHR2_clear_mask                          0xFB

#define G1PHR3                                   0x3
#define G1PHR3_address                           0x68D
#define G1PHR3_position                          0x3
#define G1PHR3_size                              0x1
#define G1PHR3_value_mask                        0x8
#define G1PHR3_clear_mask                        0xF7

#define PHR3                                     0x3
#define PHR3_address                             0x68D
#define PHR3_position                            0x3
#define PHR3_size                                0x1
#define PHR3_value_mask                          0x8
#define PHR3_clear_mask                          0xF7

#define G1PHR4                                   0x4
#define G1PHR4_address                           0x68D
#define G1PHR4_position                          0x4
#define G1PHR4_size                              0x1
#define G1PHR4_value_mask                        0x10
#define G1PHR4_clear_mask                        0xEF

#define PHR4                                     0x4
#define PHR4_address                             0x68D
#define PHR4_position                            0x4
#define PHR4_size                                0x1
#define PHR4_value_mask                          0x10
#define PHR4_clear_mask                          0xEF

#define G1PHR5                                   0x5
#define G1PHR5_address                           0x68D
#define G1PHR5_position                          0x5
#define G1PHR5_size                              0x1
#define G1PHR5_value_mask                        0x20
#define G1PHR5_clear_mask                        0xDF

#define PHR5                                     0x5
#define PHR5_address                             0x68D
#define PHR5_position                            0x5
#define PHR5_size                                0x1
#define PHR5_value_mask                          0x20
#define PHR5_clear_mask                          0xDF


/*------------------------------------------------------------#
| COG1PHF                                               0x68E |
#-------------------------------------------------------------#
| - | - | G1PHF5 | G1PHF4 | G1PHF3 | G1PHF2 | G1PHF1 | G1PHF0 |
#-------------------------------------------------------------#
| 7 | 6 | 5      | 4      | 3      | 2      | 1      | 0      |
#------------------------------------------------------------*/

#define COG1PHF                                  0x0
#define COG1PHF_address                          0x68E
#define COG1PHF_position                         0x0
#define COG1PHF_size                             0x8
#define COG1PHF_value_mask                       0xFF
#define COG1PHF_clear_mask                       0x0

#define G1PHF0                                   0x0
#define G1PHF0_address                           0x68E
#define G1PHF0_position                          0x0
#define G1PHF0_size                              0x1
#define G1PHF0_value_mask                        0x1
#define G1PHF0_clear_mask                        0xFE

#define PHF                                      0x0
#define PHF_address                              0x68E
#define PHF_position                             0x0
#define PHF_size                                 0x6
#define PHF_value_mask                           0x3F
#define PHF_clear_mask                           0xC0

#define PHF0                                     0x0
#define PHF0_address                             0x68E
#define PHF0_position                            0x0
#define PHF0_size                                0x1
#define PHF0_value_mask                          0x1
#define PHF0_clear_mask                          0xFE

#define G1PHF1                                   0x1
#define G1PHF1_address                           0x68E
#define G1PHF1_position                          0x1
#define G1PHF1_size                              0x1
#define G1PHF1_value_mask                        0x2
#define G1PHF1_clear_mask                        0xFD

#define PHF1                                     0x1
#define PHF1_address                             0x68E
#define PHF1_position                            0x1
#define PHF1_size                                0x1
#define PHF1_value_mask                          0x2
#define PHF1_clear_mask                          0xFD

#define G1PHF2                                   0x2
#define G1PHF2_address                           0x68E
#define G1PHF2_position                          0x2
#define G1PHF2_size                              0x1
#define G1PHF2_value_mask                        0x4
#define G1PHF2_clear_mask                        0xFB

#define PHF2                                     0x2
#define PHF2_address                             0x68E
#define PHF2_position                            0x2
#define PHF2_size                                0x1
#define PHF2_value_mask                          0x4
#define PHF2_clear_mask                          0xFB

#define G1PHF3                                   0x3
#define G1PHF3_address                           0x68E
#define G1PHF3_position                          0x3
#define G1PHF3_size                              0x1
#define G1PHF3_value_mask                        0x8
#define G1PHF3_clear_mask                        0xF7

#define PHF3                                     0x3
#define PHF3_address                             0x68E
#define PHF3_position                            0x3
#define PHF3_size                                0x1
#define PHF3_value_mask                          0x8
#define PHF3_clear_mask                          0xF7

#define G1PHF4                                   0x4
#define G1PHF4_address                           0x68E
#define G1PHF4_position                          0x4
#define G1PHF4_size                              0x1
#define G1PHF4_value_mask                        0x10
#define G1PHF4_clear_mask                        0xEF

#define PHF4                                     0x4
#define PHF4_address                             0x68E
#define PHF4_position                            0x4
#define PHF4_size                                0x1
#define PHF4_value_mask                          0x10
#define PHF4_clear_mask                          0xEF

#define G1PHF5                                   0x5
#define G1PHF5_address                           0x68E
#define G1PHF5_position                          0x5
#define G1PHF5_size                              0x1
#define G1PHF5_value_mask                        0x20
#define G1PHF5_clear_mask                        0xDF

#define PHF5                                     0x5
#define PHF5_address                             0x68E
#define PHF5_position                            0x5
#define PHF5_size                                0x1
#define PHF5_value_mask                          0x20
#define PHF5_clear_mask                          0xDF


/*------------------------------------------------------#
| COG1BLKR                                        0x68F |
#-------------------------------------------------------#
| - | - | BLKR5 | BLKR4 | BLKR3 | BLKR2 | BLKR1 | BLKR0 |
#-------------------------------------------------------#
| 7 | 6 | 5     | 4     | 3     | 2     | 1     | 0     |
#------------------------------------------------------*/

#define COG1BLKR                                 0x0
#define COG1BLKR_address                         0x68F
#define COG1BLKR_position                        0x0
#define COG1BLKR_size                            0x8
#define COG1BLKR_value_mask                      0xFF
#define COG1BLKR_clear_mask                      0x0

#define BLKR                                     0x0
#define BLKR_address                             0x68F
#define BLKR_position                            0x0
#define BLKR_size                                0x6
#define BLKR_value_mask                          0x3F
#define BLKR_clear_mask                          0xC0

#define BLKR0                                    0x0
#define BLKR0_address                            0x68F
#define BLKR0_position                           0x0
#define BLKR0_size                               0x1
#define BLKR0_value_mask                         0x1
#define BLKR0_clear_mask                         0xFE

#define G1BLKR0                                  0x0
#define G1BLKR0_address                          0x68F
#define G1BLKR0_position                         0x0
#define G1BLKR0_size                             0x1
#define G1BLKR0_value_mask                       0x1
#define G1BLKR0_clear_mask                       0xFE

#define BLKR1                                    0x1
#define BLKR1_address                            0x68F
#define BLKR1_position                           0x1
#define BLKR1_size                               0x1
#define BLKR1_value_mask                         0x2
#define BLKR1_clear_mask                         0xFD

#define G1BLKR1                                  0x1
#define G1BLKR1_address                          0x68F
#define G1BLKR1_position                         0x1
#define G1BLKR1_size                             0x1
#define G1BLKR1_value_mask                       0x2
#define G1BLKR1_clear_mask                       0xFD

#define BLKR2                                    0x2
#define BLKR2_address                            0x68F
#define BLKR2_position                           0x2
#define BLKR2_size                               0x1
#define BLKR2_value_mask                         0x4
#define BLKR2_clear_mask                         0xFB

#define G1BLKR2                                  0x2
#define G1BLKR2_address                          0x68F
#define G1BLKR2_position                         0x2
#define G1BLKR2_size                             0x1
#define G1BLKR2_value_mask                       0x4
#define G1BLKR2_clear_mask                       0xFB

#define BLKR3                                    0x3
#define BLKR3_address                            0x68F
#define BLKR3_position                           0x3
#define BLKR3_size                               0x1
#define BLKR3_value_mask                         0x8
#define BLKR3_clear_mask                         0xF7

#define G1BLKR3                                  0x3
#define G1BLKR3_address                          0x68F
#define G1BLKR3_position                         0x3
#define G1BLKR3_size                             0x1
#define G1BLKR3_value_mask                       0x8
#define G1BLKR3_clear_mask                       0xF7

#define BLKR4                                    0x4
#define BLKR4_address                            0x68F
#define BLKR4_position                           0x4
#define BLKR4_size                               0x1
#define BLKR4_value_mask                         0x10
#define BLKR4_clear_mask                         0xEF

#define G1BLKR4                                  0x4
#define G1BLKR4_address                          0x68F
#define G1BLKR4_position                         0x4
#define G1BLKR4_size                             0x1
#define G1BLKR4_value_mask                       0x10
#define G1BLKR4_clear_mask                       0xEF

#define BLKR5                                    0x5
#define BLKR5_address                            0x68F
#define BLKR5_position                           0x5
#define BLKR5_size                               0x1
#define BLKR5_value_mask                         0x20
#define BLKR5_clear_mask                         0xDF

#define G1BLKR5                                  0x5
#define G1BLKR5_address                          0x68F
#define G1BLKR5_position                         0x5
#define G1BLKR5_size                             0x1
#define G1BLKR5_value_mask                       0x20
#define G1BLKR5_clear_mask                       0xDF


/*----------------------------------------------------------------#
| COG1BLKF                                                  0x690 |
#-----------------------------------------------------------------#
| - | - | G1BLKF5 | G1BLKF4 | BLKF3 | G1BLKF2 | G1BLKF1 | G1BLKF0 |
#-----------------------------------------------------------------#
| 7 | 6 | 5       | 4       | 3     | 2       | 1       | 0       |
#----------------------------------------------------------------*/

#define COG1BLKF                                 0x0
#define COG1BLKF_address                         0x690
#define COG1BLKF_position                        0x0
#define COG1BLKF_size                            0x8
#define COG1BLKF_value_mask                      0xFF
#define COG1BLKF_clear_mask                      0x0

#define BLKF                                     0x0
#define BLKF_address                             0x690
#define BLKF_position                            0x0
#define BLKF_size                                0x6
#define BLKF_value_mask                          0x3F
#define BLKF_clear_mask                          0xC0

#define G1BLKF0                                  0x0
#define G1BLKF0_address                          0x690
#define G1BLKF0_position                         0x0
#define G1BLKF0_size                             0x1
#define G1BLKF0_value_mask                       0x1
#define G1BLKF0_clear_mask                       0xFE

#define BLKF0                                    0x0
#define BLKF0_address                            0x690
#define BLKF0_position                           0x0
#define BLKF0_size                               0x1
#define BLKF0_value_mask                         0x1
#define BLKF0_clear_mask                         0xFE

#define G1BLKF1                                  0x1
#define G1BLKF1_address                          0x690
#define G1BLKF1_position                         0x1
#define G1BLKF1_size                             0x1
#define G1BLKF1_value_mask                       0x2
#define G1BLKF1_clear_mask                       0xFD

#define BLKF1                                    0x1
#define BLKF1_address                            0x690
#define BLKF1_position                           0x1
#define BLKF1_size                               0x1
#define BLKF1_value_mask                         0x2
#define BLKF1_clear_mask                         0xFD

#define G1BLKF2                                  0x2
#define G1BLKF2_address                          0x690
#define G1BLKF2_position                         0x2
#define G1BLKF2_size                             0x1
#define G1BLKF2_value_mask                       0x4
#define G1BLKF2_clear_mask                       0xFB

#define BLKF2                                    0x2
#define BLKF2_address                            0x690
#define BLKF2_position                           0x2
#define BLKF2_size                               0x1
#define BLKF2_value_mask                         0x4
#define BLKF2_clear_mask                         0xFB

#define G1BLKF3                                  0x3
#define G1BLKF3_address                          0x690
#define G1BLKF3_position                         0x3
#define G1BLKF3_size                             0x1
#define G1BLKF3_value_mask                       0x8
#define G1BLKF3_clear_mask                       0xF7

#define BLKF3                                    0x3
#define BLKF3_address                            0x690
#define BLKF3_position                           0x3
#define BLKF3_size                               0x1
#define BLKF3_value_mask                         0x8
#define BLKF3_clear_mask                         0xF7

#define G1BLKF4                                  0x4
#define G1BLKF4_address                          0x690
#define G1BLKF4_position                         0x4
#define G1BLKF4_size                             0x1
#define G1BLKF4_value_mask                       0x10
#define G1BLKF4_clear_mask                       0xEF

#define BLKF4                                    0x4
#define BLKF4_address                            0x690
#define BLKF4_position                           0x4
#define BLKF4_size                               0x1
#define BLKF4_value_mask                         0x10
#define BLKF4_clear_mask                         0xEF

#define G1BLKF5                                  0x5
#define G1BLKF5_address                          0x690
#define G1BLKF5_position                         0x5
#define G1BLKF5_size                             0x1
#define G1BLKF5_value_mask                       0x20
#define G1BLKF5_clear_mask                       0xDF

#define BLKF5                                    0x5
#define BLKF5_address                            0x690
#define BLKF5_position                           0x5
#define BLKF5_size                               0x1
#define BLKF5_value_mask                         0x20
#define BLKF5_clear_mask                         0xDF


/*------------------------------------------------------------#
| COG1DBR                                               0x691 |
#-------------------------------------------------------------#
| - | - | G1DBR5 | G1DBR4 | G1DBR3 | G1DBR2 | G1DBR1 | G1DBR0 |
#-------------------------------------------------------------#
| 7 | 6 | 5      | 4      | 3      | 2      | 1      | 0      |
#------------------------------------------------------------*/

#define COG1DBR                                  0x0
#define COG1DBR_address                          0x691
#define COG1DBR_position                         0x0
#define COG1DBR_size                             0x8
#define COG1DBR_value_mask                       0xFF
#define COG1DBR_clear_mask                       0x0

#define G1DBR0                                   0x0
#define G1DBR0_address                           0x691
#define G1DBR0_position                          0x0
#define G1DBR0_size                              0x1
#define G1DBR0_value_mask                        0x1
#define G1DBR0_clear_mask                        0xFE

#define DBR                                      0x0
#define DBR_address                              0x691
#define DBR_position                             0x0
#define DBR_size                                 0x6
#define DBR_value_mask                           0x3F
#define DBR_clear_mask                           0xC0

#define DBR0                                     0x0
#define DBR0_address                             0x691
#define DBR0_position                            0x0
#define DBR0_size                                0x1
#define DBR0_value_mask                          0x1
#define DBR0_clear_mask                          0xFE

#define G1DBR1                                   0x1
#define G1DBR1_address                           0x691
#define G1DBR1_position                          0x1
#define G1DBR1_size                              0x1
#define G1DBR1_value_mask                        0x2
#define G1DBR1_clear_mask                        0xFD

#define DBR1                                     0x1
#define DBR1_address                             0x691
#define DBR1_position                            0x1
#define DBR1_size                                0x1
#define DBR1_value_mask                          0x2
#define DBR1_clear_mask                          0xFD

#define G1DBR2                                   0x2
#define G1DBR2_address                           0x691
#define G1DBR2_position                          0x2
#define G1DBR2_size                              0x1
#define G1DBR2_value_mask                        0x4
#define G1DBR2_clear_mask                        0xFB

#define DBR2                                     0x2
#define DBR2_address                             0x691
#define DBR2_position                            0x2
#define DBR2_size                                0x1
#define DBR2_value_mask                          0x4
#define DBR2_clear_mask                          0xFB

#define G1DBR3                                   0x3
#define G1DBR3_address                           0x691
#define G1DBR3_position                          0x3
#define G1DBR3_size                              0x1
#define G1DBR3_value_mask                        0x8
#define G1DBR3_clear_mask                        0xF7

#define DBR3                                     0x3
#define DBR3_address                             0x691
#define DBR3_position                            0x3
#define DBR3_size                                0x1
#define DBR3_value_mask                          0x8
#define DBR3_clear_mask                          0xF7

#define G1DBR4                                   0x4
#define G1DBR4_address                           0x691
#define G1DBR4_position                          0x4
#define G1DBR4_size                              0x1
#define G1DBR4_value_mask                        0x10
#define G1DBR4_clear_mask                        0xEF

#define DBR4                                     0x4
#define DBR4_address                             0x691
#define DBR4_position                            0x4
#define DBR4_size                                0x1
#define DBR4_value_mask                          0x10
#define DBR4_clear_mask                          0xEF

#define G1DBR5                                   0x5
#define G1DBR5_address                           0x691
#define G1DBR5_position                          0x5
#define G1DBR5_size                              0x1
#define G1DBR5_value_mask                        0x20
#define G1DBR5_clear_mask                        0xDF

#define DBR5                                     0x5
#define DBR5_address                             0x691
#define DBR5_position                            0x5
#define DBR5_size                                0x1
#define DBR5_value_mask                          0x20
#define DBR5_clear_mask                          0xDF


/*------------------------------------------------------------#
| COG1DBF                                               0x692 |
#-------------------------------------------------------------#
| - | - | G1DBF5 | G1DBF4 | G1DBF3 | G1DBF2 | G1DBF1 | G1DBF0 |
#-------------------------------------------------------------#
| 7 | 6 | 5      | 4      | 3      | 2      | 1      | 0      |
#------------------------------------------------------------*/

#define COG1DBF                                  0x0
#define COG1DBF_address                          0x692
#define COG1DBF_position                         0x0
#define COG1DBF_size                             0x8
#define COG1DBF_value_mask                       0xFF
#define COG1DBF_clear_mask                       0x0

#define G1DBF0                                   0x0
#define G1DBF0_address                           0x692
#define G1DBF0_position                          0x0
#define G1DBF0_size                              0x1
#define G1DBF0_value_mask                        0x1
#define G1DBF0_clear_mask                        0xFE

#define DBF0                                     0x0
#define DBF0_address                             0x692
#define DBF0_position                            0x0
#define DBF0_size                                0x1
#define DBF0_value_mask                          0x1
#define DBF0_clear_mask                          0xFE

#define G1DBF                                    0x0
#define G1DBF_address                            0x692
#define G1DBF_position                           0x0
#define G1DBF_size                               0x6
#define G1DBF_value_mask                         0x3F
#define G1DBF_clear_mask                         0xC0

#define G1DBF1                                   0x1
#define G1DBF1_address                           0x692
#define G1DBF1_position                          0x1
#define G1DBF1_size                              0x1
#define G1DBF1_value_mask                        0x2
#define G1DBF1_clear_mask                        0xFD

#define DBF1                                     0x1
#define DBF1_address                             0x692
#define DBF1_position                            0x1
#define DBF1_size                                0x1
#define DBF1_value_mask                          0x2
#define DBF1_clear_mask                          0xFD

#define G1DBF2                                   0x2
#define G1DBF2_address                           0x692
#define G1DBF2_position                          0x2
#define G1DBF2_size                              0x1
#define G1DBF2_value_mask                        0x4
#define G1DBF2_clear_mask                        0xFB

#define DBF2                                     0x2
#define DBF2_address                             0x692
#define DBF2_position                            0x2
#define DBF2_size                                0x1
#define DBF2_value_mask                          0x4
#define DBF2_clear_mask                          0xFB

#define G1DBF3                                   0x3
#define G1DBF3_address                           0x692
#define G1DBF3_position                          0x3
#define G1DBF3_size                              0x1
#define G1DBF3_value_mask                        0x8
#define G1DBF3_clear_mask                        0xF7

#define DBF3                                     0x3
#define DBF3_address                             0x692
#define DBF3_position                            0x3
#define DBF3_size                                0x1
#define DBF3_value_mask                          0x8
#define DBF3_clear_mask                          0xF7

#define G1DBF4                                   0x4
#define G1DBF4_address                           0x692
#define G1DBF4_position                          0x4
#define G1DBF4_size                              0x1
#define G1DBF4_value_mask                        0x10
#define G1DBF4_clear_mask                        0xEF

#define DBF4                                     0x4
#define DBF4_address                             0x692
#define DBF4_position                            0x4
#define DBF4_size                                0x1
#define DBF4_value_mask                          0x10
#define DBF4_clear_mask                          0xEF

#define G1DBF5                                   0x5
#define G1DBF5_address                           0x692
#define G1DBF5_position                          0x5
#define G1DBF5_size                              0x1
#define G1DBF5_value_mask                        0x20
#define G1DBF5_clear_mask                        0xDF

#define DBF5                                     0x5
#define DBF5_address                             0x692
#define DBF5_position                            0x5
#define DBF5_size                                0x1
#define DBF5_value_mask                          0x20
#define DBF5_clear_mask                          0xDF


/*---------------------------------------------------------------------------#
| COG1CON0                                                             0x693 |
#----------------------------------------------------------------------------#
| COG1CON0_EN | LD | - | COG1CON0_CS1 | COG1CON0_CS0 | G1MD2 | G1MD1 | G1MD0 |
#----------------------------------------------------------------------------#
| 7           | 6  | 5 | 4            | 3            | 2     | 1     | 0     |
#---------------------------------------------------------------------------*/

#define COG1CON0                                 0x0
#define COG1CON0_address                         0x693
#define COG1CON0_position                        0x0
#define COG1CON0_size                            0x8
#define COG1CON0_value_mask                      0xFF
#define COG1CON0_clear_mask                      0x0

#define G1MD0                                    0x0
#define G1MD0_address                            0x693
#define G1MD0_position                           0x0
#define G1MD0_size                               0x1
#define G1MD0_value_mask                         0x1
#define G1MD0_clear_mask                         0xFE

#define MD0                                      0x0
#define MD0_address                              0x693
#define MD0_position                             0x0
#define MD0_size                                 0x1
#define MD0_value_mask                           0x1
#define MD0_clear_mask                           0xFE

#define MD                                       0x0
#define MD_address                               0x693
#define MD_position                              0x0
#define MD_size                                  0x3
#define MD_value_mask                            0x7
#define MD_clear_mask                            0xF8

#define G1MD                                     0x0
#define G1MD_address                             0x693
#define G1MD_position                            0x0
#define G1MD_size                                0x3
#define G1MD_value_mask                          0x7
#define G1MD_clear_mask                          0xF8

#define G1MD1                                    0x1
#define G1MD1_address                            0x693
#define G1MD1_position                           0x1
#define G1MD1_size                               0x1
#define G1MD1_value_mask                         0x2
#define G1MD1_clear_mask                         0xFD

#define MD1                                      0x1
#define MD1_address                              0x693
#define MD1_position                             0x1
#define MD1_size                                 0x1
#define MD1_value_mask                           0x2
#define MD1_clear_mask                           0xFD

#define G1MD2                                    0x2
#define G1MD2_address                            0x693
#define G1MD2_position                           0x2
#define G1MD2_size                               0x1
#define G1MD2_value_mask                         0x4
#define G1MD2_clear_mask                         0xFB

#define MD2                                      0x2
#define MD2_address                              0x693
#define MD2_position                             0x2
#define MD2_size                                 0x1
#define MD2_value_mask                           0x4
#define MD2_clear_mask                           0xFB

#define COG1CON0_CS0                             0x3
#define COG1CON0_CS0_address                     0x693
#define COG1CON0_CS0_position                    0x3
#define COG1CON0_CS0_size                        0x1
#define COG1CON0_CS0_value_mask                  0x8
#define COG1CON0_CS0_clear_mask                  0xF7

#define G1CS                                     0x3
#define G1CS_address                             0x693
#define G1CS_position                            0x3
#define G1CS_size                                0x2
#define G1CS_value_mask                          0x18
#define G1CS_clear_mask                          0xE7

#define G1CS0                                    0x3
#define G1CS0_address                            0x693
#define G1CS0_position                           0x3
#define G1CS0_size                               0x1
#define G1CS0_value_mask                         0x8
#define G1CS0_clear_mask                         0xF7

#define COG1CON0_CS                              0x3
#define COG1CON0_CS_address                      0x693
#define COG1CON0_CS_position                     0x3
#define COG1CON0_CS_size                         0x2
#define COG1CON0_CS_value_mask                   0x18
#define COG1CON0_CS_clear_mask                   0xE7

#define COG1CON0_CS1                             0x4
#define COG1CON0_CS1_address                     0x693
#define COG1CON0_CS1_position                    0x4
#define COG1CON0_CS1_size                        0x1
#define COG1CON0_CS1_value_mask                  0x10
#define COG1CON0_CS1_clear_mask                  0xEF

#define G1CS1                                    0x4
#define G1CS1_address                            0x693
#define G1CS1_position                           0x4
#define G1CS1_size                               0x1
#define G1CS1_value_mask                         0x10
#define G1CS1_clear_mask                         0xEF

#define G1LD                                     0x6
#define G1LD_address                             0x693
#define G1LD_position                            0x6
#define G1LD_size                                0x1
#define G1LD_value_mask                          0x40
#define G1LD_clear_mask                          0xBF

#define LD                                       0x6
#define LD_address                               0x693
#define LD_position                              0x6
#define LD_size                                  0x1
#define LD_value_mask                            0x40
#define LD_clear_mask                            0xBF

#define COG1CON0_EN                              0x7
#define COG1CON0_EN_address                      0x693
#define COG1CON0_EN_position                     0x7
#define COG1CON0_EN_size                         0x1
#define COG1CON0_EN_value_mask                   0x80
#define COG1CON0_EN_clear_mask                   0x7F

#define G1EN                                     0x7
#define G1EN_address                             0x693
#define G1EN_position                            0x7
#define G1EN_size                                0x1
#define G1EN_value_mask                          0x80
#define G1EN_clear_mask                          0x7F


/*------------------------------------------------------#
| COG1CON1                                        0x694 |
#-------------------------------------------------------#
| RDBS | G1FDBS | - | - | POLD | G1POLC | POLB | G1POLA |
#-------------------------------------------------------#
| 7    | 6      | 5 | 4 | 3    | 2      | 1    | 0      |
#------------------------------------------------------*/

#define COG1CON1                                 0x0
#define COG1CON1_address                         0x694
#define COG1CON1_position                        0x0
#define COG1CON1_size                            0x8
#define COG1CON1_value_mask                      0xFF
#define COG1CON1_clear_mask                      0x0

#define G1POLA                                   0x0
#define G1POLA_address                           0x694
#define G1POLA_position                          0x0
#define G1POLA_size                              0x1
#define G1POLA_value_mask                        0x1
#define G1POLA_clear_mask                        0xFE

#define POLA                                     0x0
#define POLA_address                             0x694
#define POLA_position                            0x0
#define POLA_size                                0x1
#define POLA_value_mask                          0x1
#define POLA_clear_mask                          0xFE

#define POLB                                     0x1
#define POLB_address                             0x694
#define POLB_position                            0x1
#define POLB_size                                0x1
#define POLB_value_mask                          0x2
#define POLB_clear_mask                          0xFD

#define G1POLB                                   0x1
#define G1POLB_address                           0x694
#define G1POLB_position                          0x1
#define G1POLB_size                              0x1
#define G1POLB_value_mask                        0x2
#define G1POLB_clear_mask                        0xFD

#define G1POLC                                   0x2
#define G1POLC_address                           0x694
#define G1POLC_position                          0x2
#define G1POLC_size                              0x1
#define G1POLC_value_mask                        0x4
#define G1POLC_clear_mask                        0xFB

#define POLC                                     0x2
#define POLC_address                             0x694
#define POLC_position                            0x2
#define POLC_size                                0x1
#define POLC_value_mask                          0x4
#define POLC_clear_mask                          0xFB

#define POLD                                     0x3
#define POLD_address                             0x694
#define POLD_position                            0x3
#define POLD_size                                0x1
#define POLD_value_mask                          0x8
#define POLD_clear_mask                          0xF7

#define G1POLD                                   0x3
#define G1POLD_address                           0x694
#define G1POLD_position                          0x3
#define G1POLD_size                              0x1
#define G1POLD_value_mask                        0x8
#define G1POLD_clear_mask                        0xF7

#define G1FDBS                                   0x6
#define G1FDBS_address                           0x694
#define G1FDBS_position                          0x6
#define G1FDBS_size                              0x1
#define G1FDBS_value_mask                        0x40
#define G1FDBS_clear_mask                        0xBF

#define FDBS                                     0x6
#define FDBS_address                             0x694
#define FDBS_position                            0x6
#define FDBS_size                                0x1
#define FDBS_value_mask                          0x40
#define FDBS_clear_mask                          0xBF

#define RDBS                                     0x7
#define RDBS_address                             0x694
#define RDBS_position                            0x7
#define RDBS_size                                0x1
#define RDBS_value_mask                          0x80
#define RDBS_clear_mask                          0x7F

#define G1RDBS                                   0x7
#define G1RDBS_address                           0x694
#define G1RDBS_position                          0x7
#define G1RDBS_size                              0x1
#define G1RDBS_value_mask                        0x80
#define G1RDBS_clear_mask                        0x7F


/*----------------------------------------------------------------------#
| COG1RIS0                                                        0x695 |
#-----------------------------------------------------------------------#
| G1RIS7 | G1RIS6 | G1RIS5 | G1RIS4 | G1RIS3 | G1RIS2 | G1RIS1 | G1RIS0 |
#-----------------------------------------------------------------------#
| 7      | 6      | 5      | 4      | 3      | 2      | 1      | 0      |
#----------------------------------------------------------------------*/

#define COG1RIS0                                 0x0
#define COG1RIS0_address                         0x695
#define COG1RIS0_position                        0x0
#define COG1RIS0_size                            0x8
#define COG1RIS0_value_mask                      0xFF
#define COG1RIS0_clear_mask                      0x0

#define G1RIS0                                   0x0
#define G1RIS0_address                           0x695
#define G1RIS0_position                          0x0
#define G1RIS0_size                              0x1
#define G1RIS0_value_mask                        0x1
#define G1RIS0_clear_mask                        0xFE

#define RIS0                                     0x0
#define RIS0_address                             0x695
#define RIS0_position                            0x0
#define RIS0_size                                0x1
#define RIS0_value_mask                          0x1
#define RIS0_clear_mask                          0xFE

#define G1RIS1                                   0x1
#define G1RIS1_address                           0x695
#define G1RIS1_position                          0x1
#define G1RIS1_size                              0x1
#define G1RIS1_value_mask                        0x2
#define G1RIS1_clear_mask                        0xFD

#define RIS1                                     0x1
#define RIS1_address                             0x695
#define RIS1_position                            0x1
#define RIS1_size                                0x1
#define RIS1_value_mask                          0x2
#define RIS1_clear_mask                          0xFD

#define G1RIS2                                   0x2
#define G1RIS2_address                           0x695
#define G1RIS2_position                          0x2
#define G1RIS2_size                              0x1
#define G1RIS2_value_mask                        0x4
#define G1RIS2_clear_mask                        0xFB

#define RIS2                                     0x2
#define RIS2_address                             0x695
#define RIS2_position                            0x2
#define RIS2_size                                0x1
#define RIS2_value_mask                          0x4
#define RIS2_clear_mask                          0xFB

#define G1RIS3                                   0x3
#define G1RIS3_address                           0x695
#define G1RIS3_position                          0x3
#define G1RIS3_size                              0x1
#define G1RIS3_value_mask                        0x8
#define G1RIS3_clear_mask                        0xF7

#define RIS3                                     0x3
#define RIS3_address                             0x695
#define RIS3_position                            0x3
#define RIS3_size                                0x1
#define RIS3_value_mask                          0x8
#define RIS3_clear_mask                          0xF7

#define G1RIS4                                   0x4
#define G1RIS4_address                           0x695
#define G1RIS4_position                          0x4
#define G1RIS4_size                              0x1
#define G1RIS4_value_mask                        0x10
#define G1RIS4_clear_mask                        0xEF

#define RIS4                                     0x4
#define RIS4_address                             0x695
#define RIS4_position                            0x4
#define RIS4_size                                0x1
#define RIS4_value_mask                          0x10
#define RIS4_clear_mask                          0xEF

#define G1RIS5                                   0x5
#define G1RIS5_address                           0x695
#define G1RIS5_position                          0x5
#define G1RIS5_size                              0x1
#define G1RIS5_value_mask                        0x20
#define G1RIS5_clear_mask                        0xDF

#define RIS5                                     0x5
#define RIS5_address                             0x695
#define RIS5_position                            0x5
#define RIS5_size                                0x1
#define RIS5_value_mask                          0x20
#define RIS5_clear_mask                          0xDF

#define G1RIS6                                   0x6
#define G1RIS6_address                           0x695
#define G1RIS6_position                          0x6
#define G1RIS6_size                              0x1
#define G1RIS6_value_mask                        0x40
#define G1RIS6_clear_mask                        0xBF

#define RIS6                                     0x6
#define RIS6_address                             0x695
#define RIS6_position                            0x6
#define RIS6_size                                0x1
#define RIS6_value_mask                          0x40
#define RIS6_clear_mask                          0xBF

#define G1RIS7                                   0x7
#define G1RIS7_address                           0x695
#define G1RIS7_position                          0x7
#define G1RIS7_size                              0x1
#define G1RIS7_value_mask                        0x80
#define G1RIS7_clear_mask                        0x7F

#define RIS7                                     0x7
#define RIS7_address                             0x695
#define RIS7_position                            0x7
#define RIS7_size                                0x1
#define RIS7_value_mask                          0x80
#define RIS7_clear_mask                          0x7F


/*----------------------------------------------------------#
| COG1RIS1                                            0x696 |
#-----------------------------------------------------------#
| - | RIS14 | RIS13 | RIS12 | RIS11 | RIS10 | RIS9 | G1RIS8 |
#-----------------------------------------------------------#
| 7 | 6     | 5     | 4     | 3     | 2     | 1    | 0      |
#----------------------------------------------------------*/

#define COG1RIS1                                 0x0
#define COG1RIS1_address                         0x696
#define COG1RIS1_position                        0x0
#define COG1RIS1_size                            0x8
#define COG1RIS1_value_mask                      0xFF
#define COG1RIS1_clear_mask                      0x0

#define G1RIS8                                   0x0
#define G1RIS8_address                           0x696
#define G1RIS8_position                          0x0
#define G1RIS8_size                              0x1
#define G1RIS8_value_mask                        0x1
#define G1RIS8_clear_mask                        0xFE

#define RIS8                                     0x0
#define RIS8_address                             0x696
#define RIS8_position                            0x0
#define RIS8_size                                0x1
#define RIS8_value_mask                          0x1
#define RIS8_clear_mask                          0xFE

#define G1RIS9                                   0x1
#define G1RIS9_address                           0x696
#define G1RIS9_position                          0x1
#define G1RIS9_size                              0x1
#define G1RIS9_value_mask                        0x2
#define G1RIS9_clear_mask                        0xFD

#define RIS9                                     0x1
#define RIS9_address                             0x696
#define RIS9_position                            0x1
#define RIS9_size                                0x1
#define RIS9_value_mask                          0x2
#define RIS9_clear_mask                          0xFD

#define RIS10                                    0x2
#define RIS10_address                            0x696
#define RIS10_position                           0x2
#define RIS10_size                               0x1
#define RIS10_value_mask                         0x4
#define RIS10_clear_mask                         0xFB

#define G1RIS10                                  0x2
#define G1RIS10_address                          0x696
#define G1RIS10_position                         0x2
#define G1RIS10_size                             0x1
#define G1RIS10_value_mask                       0x4
#define G1RIS10_clear_mask                       0xFB

#define RIS11                                    0x3
#define RIS11_address                            0x696
#define RIS11_position                           0x3
#define RIS11_size                               0x1
#define RIS11_value_mask                         0x8
#define RIS11_clear_mask                         0xF7

#define G1RIS11                                  0x3
#define G1RIS11_address                          0x696
#define G1RIS11_position                         0x3
#define G1RIS11_size                             0x1
#define G1RIS11_value_mask                       0x8
#define G1RIS11_clear_mask                       0xF7

#define RIS12                                    0x4
#define RIS12_address                            0x696
#define RIS12_position                           0x4
#define RIS12_size                               0x1
#define RIS12_value_mask                         0x10
#define RIS12_clear_mask                         0xEF

#define G1RIS12                                  0x4
#define G1RIS12_address                          0x696
#define G1RIS12_position                         0x4
#define G1RIS12_size                             0x1
#define G1RIS12_value_mask                       0x10
#define G1RIS12_clear_mask                       0xEF

#define RIS13                                    0x5
#define RIS13_address                            0x696
#define RIS13_position                           0x5
#define RIS13_size                               0x1
#define RIS13_value_mask                         0x20
#define RIS13_clear_mask                         0xDF

#define G1RIS13                                  0x5
#define G1RIS13_address                          0x696
#define G1RIS13_position                         0x5
#define G1RIS13_size                             0x1
#define G1RIS13_value_mask                       0x20
#define G1RIS13_clear_mask                       0xDF

#define RIS14                                    0x6
#define RIS14_address                            0x696
#define RIS14_position                           0x6
#define RIS14_size                               0x1
#define RIS14_value_mask                         0x40
#define RIS14_clear_mask                         0xBF

#define G1RIS14                                  0x6
#define G1RIS14_address                          0x696
#define G1RIS14_position                         0x6
#define G1RIS14_size                             0x1
#define G1RIS14_value_mask                       0x40
#define G1RIS14_clear_mask                       0xBF


/*------------------------------------------------------------------------------#
| COG1RSIM0                                                               0x697 |
#-------------------------------------------------------------------------------#
| G1RSIM7 | G1RSIM6 | G1RSIM5 | G1RSIM4 | G1RSIM3 | G1RSIM2 | G1RSIM1 | G1RSIM0 |
#-------------------------------------------------------------------------------#
| 7       | 6       | 5       | 4       | 3       | 2       | 1       | 0       |
#------------------------------------------------------------------------------*/

#define COG1RSIM0                                0x0
#define COG1RSIM0_address                        0x697
#define COG1RSIM0_position                       0x0
#define COG1RSIM0_size                           0x8
#define COG1RSIM0_value_mask                     0xFF
#define COG1RSIM0_clear_mask                     0x0

#define G1RSIM0                                  0x0
#define G1RSIM0_address                          0x697
#define G1RSIM0_position                         0x0
#define G1RSIM0_size                             0x1
#define G1RSIM0_value_mask                       0x1
#define G1RSIM0_clear_mask                       0xFE

#define RSIM0                                    0x0
#define RSIM0_address                            0x697
#define RSIM0_position                           0x0
#define RSIM0_size                               0x1
#define RSIM0_value_mask                         0x1
#define RSIM0_clear_mask                         0xFE

#define G1RSIM1                                  0x1
#define G1RSIM1_address                          0x697
#define G1RSIM1_position                         0x1
#define G1RSIM1_size                             0x1
#define G1RSIM1_value_mask                       0x2
#define G1RSIM1_clear_mask                       0xFD

#define RSIM1                                    0x1
#define RSIM1_address                            0x697
#define RSIM1_position                           0x1
#define RSIM1_size                               0x1
#define RSIM1_value_mask                         0x2
#define RSIM1_clear_mask                         0xFD

#define G1RSIM2                                  0x2
#define G1RSIM2_address                          0x697
#define G1RSIM2_position                         0x2
#define G1RSIM2_size                             0x1
#define G1RSIM2_value_mask                       0x4
#define G1RSIM2_clear_mask                       0xFB

#define RSIM2                                    0x2
#define RSIM2_address                            0x697
#define RSIM2_position                           0x2
#define RSIM2_size                               0x1
#define RSIM2_value_mask                         0x4
#define RSIM2_clear_mask                         0xFB

#define G1RSIM3                                  0x3
#define G1RSIM3_address                          0x697
#define G1RSIM3_position                         0x3
#define G1RSIM3_size                             0x1
#define G1RSIM3_value_mask                       0x8
#define G1RSIM3_clear_mask                       0xF7

#define RSIM3                                    0x3
#define RSIM3_address                            0x697
#define RSIM3_position                           0x3
#define RSIM3_size                               0x1
#define RSIM3_value_mask                         0x8
#define RSIM3_clear_mask                         0xF7

#define G1RSIM4                                  0x4
#define G1RSIM4_address                          0x697
#define G1RSIM4_position                         0x4
#define G1RSIM4_size                             0x1
#define G1RSIM4_value_mask                       0x10
#define G1RSIM4_clear_mask                       0xEF

#define RSIM4                                    0x4
#define RSIM4_address                            0x697
#define RSIM4_position                           0x4
#define RSIM4_size                               0x1
#define RSIM4_value_mask                         0x10
#define RSIM4_clear_mask                         0xEF

#define G1RSIM5                                  0x5
#define G1RSIM5_address                          0x697
#define G1RSIM5_position                         0x5
#define G1RSIM5_size                             0x1
#define G1RSIM5_value_mask                       0x20
#define G1RSIM5_clear_mask                       0xDF

#define RSIM5                                    0x5
#define RSIM5_address                            0x697
#define RSIM5_position                           0x5
#define RSIM5_size                               0x1
#define RSIM5_value_mask                         0x20
#define RSIM5_clear_mask                         0xDF

#define G1RSIM6                                  0x6
#define G1RSIM6_address                          0x697
#define G1RSIM6_position                         0x6
#define G1RSIM6_size                             0x1
#define G1RSIM6_value_mask                       0x40
#define G1RSIM6_clear_mask                       0xBF

#define RSIM6                                    0x6
#define RSIM6_address                            0x697
#define RSIM6_position                           0x6
#define RSIM6_size                               0x1
#define RSIM6_value_mask                         0x40
#define RSIM6_clear_mask                         0xBF

#define G1RSIM7                                  0x7
#define G1RSIM7_address                          0x697
#define G1RSIM7_position                         0x7
#define G1RSIM7_size                             0x1
#define G1RSIM7_value_mask                       0x80
#define G1RSIM7_clear_mask                       0x7F

#define RSIM7                                    0x7
#define RSIM7_address                            0x697
#define RSIM7_position                           0x7
#define RSIM7_size                               0x1
#define RSIM7_value_mask                         0x80
#define RSIM7_clear_mask                         0x7F


/*---------------------------------------------------------------#
| COG1RSIM1                                                0x698 |
#----------------------------------------------------------------#
| - | RSIM14 | RSIM13 | RSIM12 | RSIM11 | RSIM10 | RSIM9 | RSIM8 |
#----------------------------------------------------------------#
| 7 | 6      | 5      | 4      | 3      | 2      | 1     | 0     |
#---------------------------------------------------------------*/

#define COG1RSIM1                                0x0
#define COG1RSIM1_address                        0x698
#define COG1RSIM1_position                       0x0
#define COG1RSIM1_size                           0x8
#define COG1RSIM1_value_mask                     0xFF
#define COG1RSIM1_clear_mask                     0x0

#define RSIM8                                    0x0
#define RSIM8_address                            0x698
#define RSIM8_position                           0x0
#define RSIM8_size                               0x1
#define RSIM8_value_mask                         0x1
#define RSIM8_clear_mask                         0xFE

#define G1RSIM8                                  0x0
#define G1RSIM8_address                          0x698
#define G1RSIM8_position                         0x0
#define G1RSIM8_size                             0x1
#define G1RSIM8_value_mask                       0x1
#define G1RSIM8_clear_mask                       0xFE

#define RSIM9                                    0x1
#define RSIM9_address                            0x698
#define RSIM9_position                           0x1
#define RSIM9_size                               0x1
#define RSIM9_value_mask                         0x2
#define RSIM9_clear_mask                         0xFD

#define G1RSIM9                                  0x1
#define G1RSIM9_address                          0x698
#define G1RSIM9_position                         0x1
#define G1RSIM9_size                             0x1
#define G1RSIM9_value_mask                       0x2
#define G1RSIM9_clear_mask                       0xFD

#define RSIM10                                   0x2
#define RSIM10_address                           0x698
#define RSIM10_position                          0x2
#define RSIM10_size                              0x1
#define RSIM10_value_mask                        0x4
#define RSIM10_clear_mask                        0xFB

#define G1RSIM10                                 0x2
#define G1RSIM10_address                         0x698
#define G1RSIM10_position                        0x2
#define G1RSIM10_size                            0x1
#define G1RSIM10_value_mask                      0x4
#define G1RSIM10_clear_mask                      0xFB

#define RSIM11                                   0x3
#define RSIM11_address                           0x698
#define RSIM11_position                          0x3
#define RSIM11_size                              0x1
#define RSIM11_value_mask                        0x8
#define RSIM11_clear_mask                        0xF7

#define G1RSIM11                                 0x3
#define G1RSIM11_address                         0x698
#define G1RSIM11_position                        0x3
#define G1RSIM11_size                            0x1
#define G1RSIM11_value_mask                      0x8
#define G1RSIM11_clear_mask                      0xF7

#define RSIM12                                   0x4
#define RSIM12_address                           0x698
#define RSIM12_position                          0x4
#define RSIM12_size                              0x1
#define RSIM12_value_mask                        0x10
#define RSIM12_clear_mask                        0xEF

#define G1RSIM12                                 0x4
#define G1RSIM12_address                         0x698
#define G1RSIM12_position                        0x4
#define G1RSIM12_size                            0x1
#define G1RSIM12_value_mask                      0x10
#define G1RSIM12_clear_mask                      0xEF

#define RSIM13                                   0x5
#define RSIM13_address                           0x698
#define RSIM13_position                          0x5
#define RSIM13_size                              0x1
#define RSIM13_value_mask                        0x20
#define RSIM13_clear_mask                        0xDF

#define G1RSIM13                                 0x5
#define G1RSIM13_address                         0x698
#define G1RSIM13_position                        0x5
#define G1RSIM13_size                            0x1
#define G1RSIM13_value_mask                      0x20
#define G1RSIM13_clear_mask                      0xDF

#define RSIM14                                   0x6
#define RSIM14_address                           0x698
#define RSIM14_position                          0x6
#define RSIM14_size                              0x1
#define RSIM14_value_mask                        0x40
#define RSIM14_clear_mask                        0xBF

#define G1RSIM14                                 0x6
#define G1RSIM14_address                         0x698
#define G1RSIM14_position                        0x6
#define G1RSIM14_size                            0x1
#define G1RSIM14_value_mask                      0x40
#define G1RSIM14_clear_mask                      0xBF


/*--------------------------------------------------------#
| COG1FIS0                                          0x699 |
#---------------------------------------------------------#
| FIS7 | G1FIS6 | FIS5 | FIS4 | FIS3 | FIS2 | FIS1 | FIS0 |
#---------------------------------------------------------#
| 7    | 6      | 5    | 4    | 3    | 2    | 1    | 0    |
#--------------------------------------------------------*/

#define COG1FIS0                                 0x0
#define COG1FIS0_address                         0x699
#define COG1FIS0_position                        0x0
#define COG1FIS0_size                            0x8
#define COG1FIS0_value_mask                      0xFF
#define COG1FIS0_clear_mask                      0x0

#define FIS0                                     0x0
#define FIS0_address                             0x699
#define FIS0_position                            0x0
#define FIS0_size                                0x1
#define FIS0_value_mask                          0x1
#define FIS0_clear_mask                          0xFE

#define G1FIS0                                   0x0
#define G1FIS0_address                           0x699
#define G1FIS0_position                          0x0
#define G1FIS0_size                              0x1
#define G1FIS0_value_mask                        0x1
#define G1FIS0_clear_mask                        0xFE

#define FIS1                                     0x1
#define FIS1_address                             0x699
#define FIS1_position                            0x1
#define FIS1_size                                0x1
#define FIS1_value_mask                          0x2
#define FIS1_clear_mask                          0xFD

#define G1FIS1                                   0x1
#define G1FIS1_address                           0x699
#define G1FIS1_position                          0x1
#define G1FIS1_size                              0x1
#define G1FIS1_value_mask                        0x2
#define G1FIS1_clear_mask                        0xFD

#define G1FIS2                                   0x2
#define G1FIS2_address                           0x699
#define G1FIS2_position                          0x2
#define G1FIS2_size                              0x1
#define G1FIS2_value_mask                        0x4
#define G1FIS2_clear_mask                        0xFB

#define FIS2                                     0x2
#define FIS2_address                             0x699
#define FIS2_position                            0x2
#define FIS2_size                                0x1
#define FIS2_value_mask                          0x4
#define FIS2_clear_mask                          0xFB

#define G1FIS3                                   0x3
#define G1FIS3_address                           0x699
#define G1FIS3_position                          0x3
#define G1FIS3_size                              0x1
#define G1FIS3_value_mask                        0x8
#define G1FIS3_clear_mask                        0xF7

#define FIS3                                     0x3
#define FIS3_address                             0x699
#define FIS3_position                            0x3
#define FIS3_size                                0x1
#define FIS3_value_mask                          0x8
#define FIS3_clear_mask                          0xF7

#define G1FIS4                                   0x4
#define G1FIS4_address                           0x699
#define G1FIS4_position                          0x4
#define G1FIS4_size                              0x1
#define G1FIS4_value_mask                        0x10
#define G1FIS4_clear_mask                        0xEF

#define FIS4                                     0x4
#define FIS4_address                             0x699
#define FIS4_position                            0x4
#define FIS4_size                                0x1
#define FIS4_value_mask                          0x10
#define FIS4_clear_mask                          0xEF

#define G1FIS5                                   0x5
#define G1FIS5_address                           0x699
#define G1FIS5_position                          0x5
#define G1FIS5_size                              0x1
#define G1FIS5_value_mask                        0x20
#define G1FIS5_clear_mask                        0xDF

#define FIS5                                     0x5
#define FIS5_address                             0x699
#define FIS5_position                            0x5
#define FIS5_size                                0x1
#define FIS5_value_mask                          0x20
#define FIS5_clear_mask                          0xDF

#define G1FIS6                                   0x6
#define G1FIS6_address                           0x699
#define G1FIS6_position                          0x6
#define G1FIS6_size                              0x1
#define G1FIS6_value_mask                        0x40
#define G1FIS6_clear_mask                        0xBF

#define FIS6                                     0x6
#define FIS6_address                             0x699
#define FIS6_position                            0x6
#define FIS6_size                                0x1
#define FIS6_value_mask                          0x40
#define FIS6_clear_mask                          0xBF

#define FIS7                                     0x7
#define FIS7_address                             0x699
#define FIS7_position                            0x7
#define FIS7_size                                0x1
#define FIS7_value_mask                          0x80
#define FIS7_clear_mask                          0x7F

#define G1FIS7                                   0x7
#define G1FIS7_address                           0x699
#define G1FIS7_position                          0x7
#define G1FIS7_size                              0x1
#define G1FIS7_value_mask                        0x80
#define G1FIS7_clear_mask                        0x7F


/*------------------------------------------------------------------#
| COG1FIS1                                                    0x69A |
#-------------------------------------------------------------------#
| - | G1FIS14 | G1FIS13 | G1FIS12 | G1FIS11 | G1FIS10 | FIS9 | FIS8 |
#-------------------------------------------------------------------#
| 7 | 6       | 5       | 4       | 3       | 2       | 1    | 0    |
#------------------------------------------------------------------*/

#define COG1FIS1                                 0x0
#define COG1FIS1_address                         0x69A
#define COG1FIS1_position                        0x0
#define COG1FIS1_size                            0x8
#define COG1FIS1_value_mask                      0xFF
#define COG1FIS1_clear_mask                      0x0

#define FIS8                                     0x0
#define FIS8_address                             0x69A
#define FIS8_position                            0x0
#define FIS8_size                                0x1
#define FIS8_value_mask                          0x1
#define FIS8_clear_mask                          0xFE

#define G1FIS8                                   0x0
#define G1FIS8_address                           0x69A
#define G1FIS8_position                          0x0
#define G1FIS8_size                              0x1
#define G1FIS8_value_mask                        0x1
#define G1FIS8_clear_mask                        0xFE

#define FIS9                                     0x1
#define FIS9_address                             0x69A
#define FIS9_position                            0x1
#define FIS9_size                                0x1
#define FIS9_value_mask                          0x2
#define FIS9_clear_mask                          0xFD

#define G1FIS9                                   0x1
#define G1FIS9_address                           0x69A
#define G1FIS9_position                          0x1
#define G1FIS9_size                              0x1
#define G1FIS9_value_mask                        0x2
#define G1FIS9_clear_mask                        0xFD

#define G1FIS10                                  0x2
#define G1FIS10_address                          0x69A
#define G1FIS10_position                         0x2
#define G1FIS10_size                             0x1
#define G1FIS10_value_mask                       0x4
#define G1FIS10_clear_mask                       0xFB

#define FIS10                                    0x2
#define FIS10_address                            0x69A
#define FIS10_position                           0x2
#define FIS10_size                               0x1
#define FIS10_value_mask                         0x4
#define FIS10_clear_mask                         0xFB

#define G1FIS11                                  0x3
#define G1FIS11_address                          0x69A
#define G1FIS11_position                         0x3
#define G1FIS11_size                             0x1
#define G1FIS11_value_mask                       0x8
#define G1FIS11_clear_mask                       0xF7

#define FIS11                                    0x3
#define FIS11_address                            0x69A
#define FIS11_position                           0x3
#define FIS11_size                               0x1
#define FIS11_value_mask                         0x8
#define FIS11_clear_mask                         0xF7

#define G1FIS12                                  0x4
#define G1FIS12_address                          0x69A
#define G1FIS12_position                         0x4
#define G1FIS12_size                             0x1
#define G1FIS12_value_mask                       0x10
#define G1FIS12_clear_mask                       0xEF

#define FIS12                                    0x4
#define FIS12_address                            0x69A
#define FIS12_position                           0x4
#define FIS12_size                               0x1
#define FIS12_value_mask                         0x10
#define FIS12_clear_mask                         0xEF

#define G1FIS13                                  0x5
#define G1FIS13_address                          0x69A
#define G1FIS13_position                         0x5
#define G1FIS13_size                             0x1
#define G1FIS13_value_mask                       0x20
#define G1FIS13_clear_mask                       0xDF

#define FIS13                                    0x5
#define FIS13_address                            0x69A
#define FIS13_position                           0x5
#define FIS13_size                               0x1
#define FIS13_value_mask                         0x20
#define FIS13_clear_mask                         0xDF

#define G1FIS14                                  0x6
#define G1FIS14_address                          0x69A
#define G1FIS14_position                         0x6
#define G1FIS14_size                             0x1
#define G1FIS14_value_mask                       0x40
#define G1FIS14_clear_mask                       0xBF

#define FIS14                                    0x6
#define FIS14_address                            0x69A
#define FIS14_position                           0x6
#define FIS14_size                               0x1
#define FIS14_value_mask                         0x40
#define FIS14_clear_mask                         0xBF


/*------------------------------------------------------------------------------#
| COG1FSIM0                                                               0x69B |
#-------------------------------------------------------------------------------#
| G1FSIM7 | G1FSIM6 | G1FSIM5 | G1FSIM4 | G1FSIM3 | G1FSIM2 | G1FSIM1 | G1FSIM0 |
#-------------------------------------------------------------------------------#
| 7       | 6       | 5       | 4       | 3       | 2       | 1       | 0       |
#------------------------------------------------------------------------------*/

#define COG1FSIM0                                0x0
#define COG1FSIM0_address                        0x69B
#define COG1FSIM0_position                       0x0
#define COG1FSIM0_size                           0x8
#define COG1FSIM0_value_mask                     0xFF
#define COG1FSIM0_clear_mask                     0x0

#define G1FSIM0                                  0x0
#define G1FSIM0_address                          0x69B
#define G1FSIM0_position                         0x0
#define G1FSIM0_size                             0x1
#define G1FSIM0_value_mask                       0x1
#define G1FSIM0_clear_mask                       0xFE

#define FSIM0                                    0x0
#define FSIM0_address                            0x69B
#define FSIM0_position                           0x0
#define FSIM0_size                               0x1
#define FSIM0_value_mask                         0x1
#define FSIM0_clear_mask                         0xFE

#define G1FSIM1                                  0x1
#define G1FSIM1_address                          0x69B
#define G1FSIM1_position                         0x1
#define G1FSIM1_size                             0x1
#define G1FSIM1_value_mask                       0x2
#define G1FSIM1_clear_mask                       0xFD

#define FSIM1                                    0x1
#define FSIM1_address                            0x69B
#define FSIM1_position                           0x1
#define FSIM1_size                               0x1
#define FSIM1_value_mask                         0x2
#define FSIM1_clear_mask                         0xFD

#define G1FSIM2                                  0x2
#define G1FSIM2_address                          0x69B
#define G1FSIM2_position                         0x2
#define G1FSIM2_size                             0x1
#define G1FSIM2_value_mask                       0x4
#define G1FSIM2_clear_mask                       0xFB

#define FSIM2                                    0x2
#define FSIM2_address                            0x69B
#define FSIM2_position                           0x2
#define FSIM2_size                               0x1
#define FSIM2_value_mask                         0x4
#define FSIM2_clear_mask                         0xFB

#define G1FSIM3                                  0x3
#define G1FSIM3_address                          0x69B
#define G1FSIM3_position                         0x3
#define G1FSIM3_size                             0x1
#define G1FSIM3_value_mask                       0x8
#define G1FSIM3_clear_mask                       0xF7

#define FSIM3                                    0x3
#define FSIM3_address                            0x69B
#define FSIM3_position                           0x3
#define FSIM3_size                               0x1
#define FSIM3_value_mask                         0x8
#define FSIM3_clear_mask                         0xF7

#define G1FSIM4                                  0x4
#define G1FSIM4_address                          0x69B
#define G1FSIM4_position                         0x4
#define G1FSIM4_size                             0x1
#define G1FSIM4_value_mask                       0x10
#define G1FSIM4_clear_mask                       0xEF

#define FSIM4                                    0x4
#define FSIM4_address                            0x69B
#define FSIM4_position                           0x4
#define FSIM4_size                               0x1
#define FSIM4_value_mask                         0x10
#define FSIM4_clear_mask                         0xEF

#define G1FSIM5                                  0x5
#define G1FSIM5_address                          0x69B
#define G1FSIM5_position                         0x5
#define G1FSIM5_size                             0x1
#define G1FSIM5_value_mask                       0x20
#define G1FSIM5_clear_mask                       0xDF

#define FSIM5                                    0x5
#define FSIM5_address                            0x69B
#define FSIM5_position                           0x5
#define FSIM5_size                               0x1
#define FSIM5_value_mask                         0x20
#define FSIM5_clear_mask                         0xDF

#define G1FSIM6                                  0x6
#define G1FSIM6_address                          0x69B
#define G1FSIM6_position                         0x6
#define G1FSIM6_size                             0x1
#define G1FSIM6_value_mask                       0x40
#define G1FSIM6_clear_mask                       0xBF

#define FSIM6                                    0x6
#define FSIM6_address                            0x69B
#define FSIM6_position                           0x6
#define FSIM6_size                               0x1
#define FSIM6_value_mask                         0x40
#define FSIM6_clear_mask                         0xBF

#define G1FSIM7                                  0x7
#define G1FSIM7_address                          0x69B
#define G1FSIM7_position                         0x7
#define G1FSIM7_size                             0x1
#define G1FSIM7_value_mask                       0x80
#define G1FSIM7_clear_mask                       0x7F

#define FSIM7                                    0x7
#define FSIM7_address                            0x69B
#define FSIM7_position                           0x7
#define FSIM7_size                               0x1
#define FSIM7_value_mask                         0x80
#define FSIM7_clear_mask                         0x7F


/*---------------------------------------------------------------#
| COG1FSIM1                                                0x69C |
#----------------------------------------------------------------#
| - | FSIM14 | FSIM13 | FSIM12 | FSIM11 | FSIM10 | FSIM9 | FSIM8 |
#----------------------------------------------------------------#
| 7 | 6      | 5      | 4      | 3      | 2      | 1     | 0     |
#---------------------------------------------------------------*/

#define COG1FSIM1                                0x0
#define COG1FSIM1_address                        0x69C
#define COG1FSIM1_position                       0x0
#define COG1FSIM1_size                           0x8
#define COG1FSIM1_value_mask                     0xFF
#define COG1FSIM1_clear_mask                     0x0

#define FSIM8                                    0x0
#define FSIM8_address                            0x69C
#define FSIM8_position                           0x0
#define FSIM8_size                               0x1
#define FSIM8_value_mask                         0x1
#define FSIM8_clear_mask                         0xFE

#define G1FSIM8                                  0x0
#define G1FSIM8_address                          0x69C
#define G1FSIM8_position                         0x0
#define G1FSIM8_size                             0x1
#define G1FSIM8_value_mask                       0x1
#define G1FSIM8_clear_mask                       0xFE

#define FSIM9                                    0x1
#define FSIM9_address                            0x69C
#define FSIM9_position                           0x1
#define FSIM9_size                               0x1
#define FSIM9_value_mask                         0x2
#define FSIM9_clear_mask                         0xFD

#define G1FSIM9                                  0x1
#define G1FSIM9_address                          0x69C
#define G1FSIM9_position                         0x1
#define G1FSIM9_size                             0x1
#define G1FSIM9_value_mask                       0x2
#define G1FSIM9_clear_mask                       0xFD

#define FSIM10                                   0x2
#define FSIM10_address                           0x69C
#define FSIM10_position                          0x2
#define FSIM10_size                              0x1
#define FSIM10_value_mask                        0x4
#define FSIM10_clear_mask                        0xFB

#define G1FSIM10                                 0x2
#define G1FSIM10_address                         0x69C
#define G1FSIM10_position                        0x2
#define G1FSIM10_size                            0x1
#define G1FSIM10_value_mask                      0x4
#define G1FSIM10_clear_mask                      0xFB

#define FSIM11                                   0x3
#define FSIM11_address                           0x69C
#define FSIM11_position                          0x3
#define FSIM11_size                              0x1
#define FSIM11_value_mask                        0x8
#define FSIM11_clear_mask                        0xF7

#define G1FSIM11                                 0x3
#define G1FSIM11_address                         0x69C
#define G1FSIM11_position                        0x3
#define G1FSIM11_size                            0x1
#define G1FSIM11_value_mask                      0x8
#define G1FSIM11_clear_mask                      0xF7

#define FSIM12                                   0x4
#define FSIM12_address                           0x69C
#define FSIM12_position                          0x4
#define FSIM12_size                              0x1
#define FSIM12_value_mask                        0x10
#define FSIM12_clear_mask                        0xEF

#define G1FSIM12                                 0x4
#define G1FSIM12_address                         0x69C
#define G1FSIM12_position                        0x4
#define G1FSIM12_size                            0x1
#define G1FSIM12_value_mask                      0x10
#define G1FSIM12_clear_mask                      0xEF

#define FSIM13                                   0x5
#define FSIM13_address                           0x69C
#define FSIM13_position                          0x5
#define FSIM13_size                              0x1
#define FSIM13_value_mask                        0x20
#define FSIM13_clear_mask                        0xDF

#define G1FSIM13                                 0x5
#define G1FSIM13_address                         0x69C
#define G1FSIM13_position                        0x5
#define G1FSIM13_size                            0x1
#define G1FSIM13_value_mask                      0x20
#define G1FSIM13_clear_mask                      0xDF

#define FSIM14                                   0x6
#define FSIM14_address                           0x69C
#define FSIM14_position                          0x6
#define FSIM14_size                              0x1
#define FSIM14_value_mask                        0x40
#define FSIM14_clear_mask                        0xBF

#define G1FSIM14                                 0x6
#define G1FSIM14_address                         0x69C
#define G1FSIM14_position                        0x6
#define G1FSIM14_size                            0x1
#define G1FSIM14_value_mask                      0x40
#define G1FSIM14_clear_mask                      0xBF


/*--------------------------------------------------------#
| COG1ASD0                                          0x69D |
#---------------------------------------------------------#
| ASE | ASREN | ASDBD1 | ASDBD0 | ASDAC1 | ASDAC0 | - | - |
#---------------------------------------------------------#
| 7   | 6     | 5      | 4      | 3      | 2      | 1 | 0 |
#--------------------------------------------------------*/

#define COG1ASD0                                 0x0
#define COG1ASD0_address                         0x69D
#define COG1ASD0_position                        0x0
#define COG1ASD0_size                            0x8
#define COG1ASD0_value_mask                      0xFF
#define COG1ASD0_clear_mask                      0x0

#define ASDAC0                                   0x2
#define ASDAC0_address                           0x69D
#define ASDAC0_position                          0x2
#define ASDAC0_size                              0x1
#define ASDAC0_value_mask                        0x4
#define ASDAC0_clear_mask                        0xFB

#define G1ASDAC0                                 0x2
#define G1ASDAC0_address                         0x69D
#define G1ASDAC0_position                        0x2
#define G1ASDAC0_size                            0x1
#define G1ASDAC0_value_mask                      0x4
#define G1ASDAC0_clear_mask                      0xFB

#define ASDAC                                    0x2
#define ASDAC_address                            0x69D
#define ASDAC_position                           0x2
#define ASDAC_size                               0x2
#define ASDAC_value_mask                         0xC
#define ASDAC_clear_mask                         0xF3

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

#define ASDAC1                                   0x3
#define ASDAC1_address                           0x69D
#define ASDAC1_position                          0x3
#define ASDAC1_size                              0x1
#define ASDAC1_value_mask                        0x8
#define ASDAC1_clear_mask                        0xF7

#define G1ASDBD0                                 0x4
#define G1ASDBD0_address                         0x69D
#define G1ASDBD0_position                        0x4
#define G1ASDBD0_size                            0x1
#define G1ASDBD0_value_mask                      0x10
#define G1ASDBD0_clear_mask                      0xEF

#define ASDBD0                                   0x4
#define ASDBD0_address                           0x69D
#define ASDBD0_position                          0x4
#define ASDBD0_size                              0x1
#define ASDBD0_value_mask                        0x10
#define ASDBD0_clear_mask                        0xEF

#define ASDBD                                    0x4
#define ASDBD_address                            0x69D
#define ASDBD_position                           0x4
#define ASDBD_size                               0x2
#define ASDBD_value_mask                         0x30
#define ASDBD_clear_mask                         0xCF

#define G1ASDBD                                  0x4
#define G1ASDBD_address                          0x69D
#define G1ASDBD_position                         0x4
#define G1ASDBD_size                             0x2
#define G1ASDBD_value_mask                       0x30
#define G1ASDBD_clear_mask                       0xCF

#define ASDBD1                                   0x5
#define ASDBD1_address                           0x69D
#define ASDBD1_position                          0x5
#define ASDBD1_size                              0x1
#define ASDBD1_value_mask                        0x20
#define ASDBD1_clear_mask                        0xDF

#define G1ASDBD1                                 0x5
#define G1ASDBD1_address                         0x69D
#define G1ASDBD1_position                        0x5
#define G1ASDBD1_size                            0x1
#define G1ASDBD1_value_mask                      0x20
#define G1ASDBD1_clear_mask                      0xDF

#define ASREN                                    0x6
#define ASREN_address                            0x69D
#define ASREN_position                           0x6
#define ASREN_size                               0x1
#define ASREN_value_mask                         0x40
#define ASREN_clear_mask                         0xBF

#define ARSEN                                    0x6
#define ARSEN_address                            0x69D
#define ARSEN_position                           0x6
#define ARSEN_size                               0x1
#define ARSEN_value_mask                         0x40
#define ARSEN_clear_mask                         0xBF

#define G1ARSEN                                  0x6
#define G1ARSEN_address                          0x69D
#define G1ARSEN_position                         0x6
#define G1ARSEN_size                             0x1
#define G1ARSEN_value_mask                       0x40
#define G1ARSEN_clear_mask                       0xBF

#define G1ASREN                                  0x6
#define G1ASREN_address                          0x69D
#define G1ASREN_position                         0x6
#define G1ASREN_size                             0x1
#define G1ASREN_value_mask                       0x40
#define G1ASREN_clear_mask                       0xBF

#define ASE                                      0x7
#define ASE_address                              0x69D
#define ASE_position                             0x7
#define ASE_size                                 0x1
#define ASE_value_mask                           0x80
#define ASE_clear_mask                           0x7F

#define G1ASE                                    0x7
#define G1ASE_address                            0x69D
#define G1ASE_position                           0x7
#define G1ASE_size                               0x1
#define G1ASE_value_mask                         0x80
#define G1ASE_clear_mask                         0x7F


/*--------------------------------------------------------#
| COG1ASD1                                          0x69E |
#---------------------------------------------------------#
| G1AS7E | AS6E | AS5E | AS4E | AS3E | AS2E | AS1E | AS0E |
#---------------------------------------------------------#
| 7      | 6    | 5    | 4    | 3    | 2    | 1    | 0    |
#--------------------------------------------------------*/

#define COG1ASD1                                 0x0
#define COG1ASD1_address                         0x69E
#define COG1ASD1_position                        0x0
#define COG1ASD1_size                            0x8
#define COG1ASD1_value_mask                      0xFF
#define COG1ASD1_clear_mask                      0x0

#define AS0E                                     0x0
#define AS0E_address                             0x69E
#define AS0E_position                            0x0
#define AS0E_size                                0x1
#define AS0E_value_mask                          0x1
#define AS0E_clear_mask                          0xFE

#define G1AS0E                                   0x0
#define G1AS0E_address                           0x69E
#define G1AS0E_position                          0x0
#define G1AS0E_size                              0x1
#define G1AS0E_value_mask                        0x1
#define G1AS0E_clear_mask                        0xFE

#define AS1E                                     0x1
#define AS1E_address                             0x69E
#define AS1E_position                            0x1
#define AS1E_size                                0x1
#define AS1E_value_mask                          0x2
#define AS1E_clear_mask                          0xFD

#define G1AS1E                                   0x1
#define G1AS1E_address                           0x69E
#define G1AS1E_position                          0x1
#define G1AS1E_size                              0x1
#define G1AS1E_value_mask                        0x2
#define G1AS1E_clear_mask                        0xFD

#define AS2E                                     0x2
#define AS2E_address                             0x69E
#define AS2E_position                            0x2
#define AS2E_size                                0x1
#define AS2E_value_mask                          0x4
#define AS2E_clear_mask                          0xFB

#define G1AS2E                                   0x2
#define G1AS2E_address                           0x69E
#define G1AS2E_position                          0x2
#define G1AS2E_size                              0x1
#define G1AS2E_value_mask                        0x4
#define G1AS2E_clear_mask                        0xFB

#define AS3E                                     0x3
#define AS3E_address                             0x69E
#define AS3E_position                            0x3
#define AS3E_size                                0x1
#define AS3E_value_mask                          0x8
#define AS3E_clear_mask                          0xF7

#define G1AS3E                                   0x3
#define G1AS3E_address                           0x69E
#define G1AS3E_position                          0x3
#define G1AS3E_size                              0x1
#define G1AS3E_value_mask                        0x8
#define G1AS3E_clear_mask                        0xF7

#define AS4E                                     0x4
#define AS4E_address                             0x69E
#define AS4E_position                            0x4
#define AS4E_size                                0x1
#define AS4E_value_mask                          0x10
#define AS4E_clear_mask                          0xEF

#define G1AS4E                                   0x4
#define G1AS4E_address                           0x69E
#define G1AS4E_position                          0x4
#define G1AS4E_size                              0x1
#define G1AS4E_value_mask                        0x10
#define G1AS4E_clear_mask                        0xEF

#define AS5E                                     0x5
#define AS5E_address                             0x69E
#define AS5E_position                            0x5
#define AS5E_size                                0x1
#define AS5E_value_mask                          0x20
#define AS5E_clear_mask                          0xDF

#define G1AS5E                                   0x5
#define G1AS5E_address                           0x69E
#define G1AS5E_position                          0x5
#define G1AS5E_size                              0x1
#define G1AS5E_value_mask                        0x20
#define G1AS5E_clear_mask                        0xDF

#define AS6E                                     0x6
#define AS6E_address                             0x69E
#define AS6E_position                            0x6
#define AS6E_size                                0x1
#define AS6E_value_mask                          0x40
#define AS6E_clear_mask                          0xBF

#define G1AS6E                                   0x6
#define G1AS6E_address                           0x69E
#define G1AS6E_position                          0x6
#define G1AS6E_size                              0x1
#define G1AS6E_value_mask                        0x40
#define G1AS6E_clear_mask                        0xBF

#define G1AS7E                                   0x7
#define G1AS7E_address                           0x69E
#define G1AS7E_position                          0x7
#define G1AS7E_size                              0x1
#define G1AS7E_value_mask                        0x80
#define G1AS7E_clear_mask                        0x7F

#define AS7E                                     0x7
#define AS7E_address                             0x69E
#define AS7E_position                            0x7
#define AS7E_size                                0x1
#define AS7E_value_mask                          0x80
#define AS7E_clear_mask                          0x7F


/*----------------------------------------------------------#
| COG1STR                                             0x69F |
#-----------------------------------------------------------#
| SDATD | SDATC | SDATB | SDATA | STRD | STRC | STRB | STRA |
#-----------------------------------------------------------#
| 7     | 6     | 5     | 4     | 3    | 2    | 1    | 0    |
#----------------------------------------------------------*/

#define COG1STR                                  0x0
#define COG1STR_address                          0x69F
#define COG1STR_position                         0x0
#define COG1STR_size                             0x8
#define COG1STR_value_mask                       0xFF
#define COG1STR_clear_mask                       0x0

#define STRA                                     0x0
#define STRA_address                             0x69F
#define STRA_position                            0x0
#define STRA_size                                0x1
#define STRA_value_mask                          0x1
#define STRA_clear_mask                          0xFE

#define G1STRA                                   0x0
#define G1STRA_address                           0x69F
#define G1STRA_position                          0x0
#define G1STRA_size                              0x1
#define G1STRA_value_mask                        0x1
#define G1STRA_clear_mask                        0xFE

#define STRB                                     0x1
#define STRB_address                             0x69F
#define STRB_position                            0x1
#define STRB_size                                0x1
#define STRB_value_mask                          0x2
#define STRB_clear_mask                          0xFD

#define G1STRB                                   0x1
#define G1STRB_address                           0x69F
#define G1STRB_position                          0x1
#define G1STRB_size                              0x1
#define G1STRB_value_mask                        0x2
#define G1STRB_clear_mask                        0xFD

#define STRC                                     0x2
#define STRC_address                             0x69F
#define STRC_position                            0x2
#define STRC_size                                0x1
#define STRC_value_mask                          0x4
#define STRC_clear_mask                          0xFB

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

#define STRD                                     0x3
#define STRD_address                             0x69F
#define STRD_position                            0x3
#define STRD_size                                0x1
#define STRD_value_mask                          0x8
#define STRD_clear_mask                          0xF7

#define SDATA                                    0x4
#define SDATA_address                            0x69F
#define SDATA_position                           0x4
#define SDATA_size                               0x1
#define SDATA_value_mask                         0x10
#define SDATA_clear_mask                         0xEF

#define G1SDATA                                  0x4
#define G1SDATA_address                          0x69F
#define G1SDATA_position                         0x4
#define G1SDATA_size                             0x1
#define G1SDATA_value_mask                       0x10
#define G1SDATA_clear_mask                       0xEF

#define SDATB                                    0x5
#define SDATB_address                            0x69F
#define SDATB_position                           0x5
#define SDATB_size                               0x1
#define SDATB_value_mask                         0x20
#define SDATB_clear_mask                         0xDF

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

#define SDATC                                    0x6
#define SDATC_address                            0x69F
#define SDATC_position                           0x6
#define SDATC_size                               0x1
#define SDATC_value_mask                         0x40
#define SDATC_clear_mask                         0xBF

#define SDATD                                    0x7
#define SDATD_address                            0x69F
#define SDATD_position                           0x7
#define SDATD_size                               0x1
#define SDATD_value_mask                         0x80
#define SDATD_clear_mask                         0x7F

#define G1SDATD                                  0x7
#define G1SDATD_address                          0x69F
#define G1SDATD_position                         0x7
#define G1SDATD_size                             0x1
#define G1SDATD_value_mask                       0x80
#define G1SDATD_clear_mask                       0x7F


/*----------------------------------------------------------#
| PRG1RTSS                                            0x794 |
#-----------------------------------------------------------#
| - | - | - | - | RG1RTSS3 | RG1RTSS2 | RG1RTSS1 | RG1RTSS0 |
#-----------------------------------------------------------#
| 7 | 6 | 5 | 4 | 3        | 2        | 1        | 0        |
#----------------------------------------------------------*/

#define PRG1RTSS                                 0x0
#define PRG1RTSS_address                         0x794
#define PRG1RTSS_position                        0x0
#define PRG1RTSS_size                            0x8
#define PRG1RTSS_value_mask                      0xFF
#define PRG1RTSS_clear_mask                      0x0

#define RTSS                                     0x0
#define RTSS_address                             0x794
#define RTSS_position                            0x0
#define RTSS_size                                0x8
#define RTSS_value_mask                          0xFF
#define RTSS_clear_mask                          0x0

#define RG1RTSS0                                 0x0
#define RG1RTSS0_address                         0x794
#define RG1RTSS0_position                        0x0
#define RG1RTSS0_size                            0x1
#define RG1RTSS0_value_mask                      0x1
#define RG1RTSS0_clear_mask                      0xFE

#define RTSS0                                    0x0
#define RTSS0_address                            0x794
#define RTSS0_position                           0x0
#define RTSS0_size                               0x1
#define RTSS0_value_mask                         0x1
#define RTSS0_clear_mask                         0xFE

#define RG1RTSS1                                 0x1
#define RG1RTSS1_address                         0x794
#define RG1RTSS1_position                        0x1
#define RG1RTSS1_size                            0x1
#define RG1RTSS1_value_mask                      0x2
#define RG1RTSS1_clear_mask                      0xFD

#define RTSS1                                    0x1
#define RTSS1_address                            0x794
#define RTSS1_position                           0x1
#define RTSS1_size                               0x1
#define RTSS1_value_mask                         0x2
#define RTSS1_clear_mask                         0xFD

#define RG1RTSS2                                 0x2
#define RG1RTSS2_address                         0x794
#define RG1RTSS2_position                        0x2
#define RG1RTSS2_size                            0x1
#define RG1RTSS2_value_mask                      0x4
#define RG1RTSS2_clear_mask                      0xFB

#define RTSS2                                    0x2
#define RTSS2_address                            0x794
#define RTSS2_position                           0x2
#define RTSS2_size                               0x1
#define RTSS2_value_mask                         0x4
#define RTSS2_clear_mask                         0xFB

#define RG1RTSS3                                 0x3
#define RG1RTSS3_address                         0x794
#define RG1RTSS3_position                        0x3
#define RG1RTSS3_size                            0x1
#define RG1RTSS3_value_mask                      0x8
#define RG1RTSS3_clear_mask                      0xF7

#define RTSS3                                    0x3
#define RTSS3_address                            0x794
#define RTSS3_position                           0x3
#define RTSS3_size                               0x1
#define RTSS3_value_mask                         0x8
#define RTSS3_clear_mask                         0xF7


/*----------------------------------------------------------#
| PRG1FTSS                                            0x795 |
#-----------------------------------------------------------#
| - | - | - | - | RG1FTSS3 | RG1FTSS2 | RG1FTSS1 | RG1FTSS0 |
#-----------------------------------------------------------#
| 7 | 6 | 5 | 4 | 3        | 2        | 1        | 0        |
#----------------------------------------------------------*/

#define PRG1FTSS                                 0x0
#define PRG1FTSS_address                         0x795
#define PRG1FTSS_position                        0x0
#define PRG1FTSS_size                            0x8
#define PRG1FTSS_value_mask                      0xFF
#define PRG1FTSS_clear_mask                      0x0

#define RG1FTSS0                                 0x0
#define RG1FTSS0_address                         0x795
#define RG1FTSS0_position                        0x0
#define RG1FTSS0_size                            0x1
#define RG1FTSS0_value_mask                      0x1
#define RG1FTSS0_clear_mask                      0xFE

#define FTSS0                                    0x0
#define FTSS0_address                            0x795
#define FTSS0_position                           0x0
#define FTSS0_size                               0x1
#define FTSS0_value_mask                         0x1
#define FTSS0_clear_mask                         0xFE

#define FTSS                                     0x0
#define FTSS_address                             0x795
#define FTSS_position                            0x0
#define FTSS_size                                0x8
#define FTSS_value_mask                          0xFF
#define FTSS_clear_mask                          0x0

#define RG1FTSS1                                 0x1
#define RG1FTSS1_address                         0x795
#define RG1FTSS1_position                        0x1
#define RG1FTSS1_size                            0x1
#define RG1FTSS1_value_mask                      0x2
#define RG1FTSS1_clear_mask                      0xFD

#define FTSS1                                    0x1
#define FTSS1_address                            0x795
#define FTSS1_position                           0x1
#define FTSS1_size                               0x1
#define FTSS1_value_mask                         0x2
#define FTSS1_clear_mask                         0xFD

#define RG1FTSS2                                 0x2
#define RG1FTSS2_address                         0x795
#define RG1FTSS2_position                        0x2
#define RG1FTSS2_size                            0x1
#define RG1FTSS2_value_mask                      0x4
#define RG1FTSS2_clear_mask                      0xFB

#define FTSS2                                    0x2
#define FTSS2_address                            0x795
#define FTSS2_position                           0x2
#define FTSS2_size                               0x1
#define FTSS2_value_mask                         0x4
#define FTSS2_clear_mask                         0xFB

#define RG1FTSS3                                 0x3
#define RG1FTSS3_address                         0x795
#define RG1FTSS3_position                        0x3
#define RG1FTSS3_size                            0x1
#define RG1FTSS3_value_mask                      0x8
#define RG1FTSS3_clear_mask                      0xF7

#define FTSS3                                    0x3
#define FTSS3_address                            0x795
#define FTSS3_position                           0x3
#define FTSS3_size                               0x1
#define FTSS3_value_mask                         0x8
#define FTSS3_clear_mask                         0xF7


/*------------------------------------------#
| PRG1INS                             0x796 |
#-------------------------------------------#
| - | - | - | - | INS3 | INS2 | INS1 | INS0 |
#-------------------------------------------#
| 7 | 6 | 5 | 4 | 3    | 2    | 1    | 0    |
#------------------------------------------*/

#define PRG1INS                                  0x0
#define PRG1INS_address                          0x796
#define PRG1INS_position                         0x0
#define PRG1INS_size                             0x8
#define PRG1INS_value_mask                       0xFF
#define PRG1INS_clear_mask                       0x0

#define INS                                      0x0
#define INS_address                              0x796
#define INS_position                             0x0
#define INS_size                                 0x8
#define INS_value_mask                           0xFF
#define INS_clear_mask                           0x0

#define INS0                                     0x0
#define INS0_address                             0x796
#define INS0_position                            0x0
#define INS0_size                                0x1
#define INS0_value_mask                          0x1
#define INS0_clear_mask                          0xFE

#define RG1INS0                                  0x0
#define RG1INS0_address                          0x796
#define RG1INS0_position                         0x0
#define RG1INS0_size                             0x1
#define RG1INS0_value_mask                       0x1
#define RG1INS0_clear_mask                       0xFE

#define INS1                                     0x1
#define INS1_address                             0x796
#define INS1_position                            0x1
#define INS1_size                                0x1
#define INS1_value_mask                          0x2
#define INS1_clear_mask                          0xFD

#define RG1INS1                                  0x1
#define RG1INS1_address                          0x796
#define RG1INS1_position                         0x1
#define RG1INS1_size                             0x1
#define RG1INS1_value_mask                       0x2
#define RG1INS1_clear_mask                       0xFD

#define INS2                                     0x2
#define INS2_address                             0x796
#define INS2_position                            0x2
#define INS2_size                                0x1
#define INS2_value_mask                          0x4
#define INS2_clear_mask                          0xFB

#define RG1INS2                                  0x2
#define RG1INS2_address                          0x796
#define RG1INS2_position                         0x2
#define RG1INS2_size                             0x1
#define RG1INS2_value_mask                       0x4
#define RG1INS2_clear_mask                       0xFB

#define INS3                                     0x3
#define INS3_address                             0x796
#define INS3_position                            0x3
#define INS3_size                                0x1
#define INS3_value_mask                          0x8
#define INS3_clear_mask                          0xF7

#define RG1INS3                                  0x3
#define RG1INS3_address                          0x796
#define RG1INS3_position                         0x3
#define RG1INS3_size                             0x1
#define RG1INS3_value_mask                       0x8
#define RG1INS3_clear_mask                       0xF7


/*-----------------------------------------------------------------------------#
| PRG1CON0                                                               0x797 |
#------------------------------------------------------------------------------#
| RG1EN | - | FEDG | RG1REDG | PRG1CON0_MODE1 | PRG1CON0_MODE0 | RG1OS | RG1GO |
#------------------------------------------------------------------------------#
| 7     | 6 | 5    | 4       | 3              | 2              | 1     | 0     |
#-----------------------------------------------------------------------------*/

#define PRG1CON0                                 0x0
#define PRG1CON0_address                         0x797
#define PRG1CON0_position                        0x0
#define PRG1CON0_size                            0x8
#define PRG1CON0_value_mask                      0xFF
#define PRG1CON0_clear_mask                      0x0

#define RG1GO                                    0x0
#define RG1GO_address                            0x797
#define RG1GO_position                           0x0
#define RG1GO_size                               0x1
#define RG1GO_value_mask                         0x1
#define RG1GO_clear_mask                         0xFE

#define PRG1CON0_GO                              0x0
#define PRG1CON0_GO_address                      0x797
#define PRG1CON0_GO_position                     0x0
#define PRG1CON0_GO_size                         0x1
#define PRG1CON0_GO_value_mask                   0x1
#define PRG1CON0_GO_clear_mask                   0xFE

#define RG1OS                                    0x1
#define RG1OS_address                            0x797
#define RG1OS_position                           0x1
#define RG1OS_size                               0x1
#define RG1OS_value_mask                         0x2
#define RG1OS_clear_mask                         0xFD

#define OS                                       0x1
#define OS_address                               0x797
#define OS_position                              0x1
#define OS_size                                  0x1
#define OS_value_mask                            0x2
#define OS_clear_mask                            0xFD

#define RG1MODE                                  0x2
#define RG1MODE_address                          0x797
#define RG1MODE_position                         0x2
#define RG1MODE_size                             0x2
#define RG1MODE_value_mask                       0xC
#define RG1MODE_clear_mask                       0xF3

#define PRG1CON0_MODE0                           0x2
#define PRG1CON0_MODE0_address                   0x797
#define PRG1CON0_MODE0_position                  0x2
#define PRG1CON0_MODE0_size                      0x1
#define PRG1CON0_MODE0_value_mask                0x4
#define PRG1CON0_MODE0_clear_mask                0xFB

#define PRG1CON0_MODE                            0x2
#define PRG1CON0_MODE_address                    0x797
#define PRG1CON0_MODE_position                   0x2
#define PRG1CON0_MODE_size                       0x2
#define PRG1CON0_MODE_value_mask                 0xC
#define PRG1CON0_MODE_clear_mask                 0xF3

#define RG1MODE0                                 0x2
#define RG1MODE0_address                         0x797
#define RG1MODE0_position                        0x2
#define RG1MODE0_size                            0x1
#define RG1MODE0_value_mask                      0x4
#define RG1MODE0_clear_mask                      0xFB

#define PRG1CON0_MODE1                           0x3
#define PRG1CON0_MODE1_address                   0x797
#define PRG1CON0_MODE1_position                  0x3
#define PRG1CON0_MODE1_size                      0x1
#define PRG1CON0_MODE1_value_mask                0x8
#define PRG1CON0_MODE1_clear_mask                0xF7

#define RG1MODE1                                 0x3
#define RG1MODE1_address                         0x797
#define RG1MODE1_position                        0x3
#define RG1MODE1_size                            0x1
#define RG1MODE1_value_mask                      0x8
#define RG1MODE1_clear_mask                      0xF7

#define RG1REDG                                  0x4
#define RG1REDG_address                          0x797
#define RG1REDG_position                         0x4
#define RG1REDG_size                             0x1
#define RG1REDG_value_mask                       0x10
#define RG1REDG_clear_mask                       0xEF

#define REDG                                     0x4
#define REDG_address                             0x797
#define REDG_position                            0x4
#define REDG_size                                0x1
#define REDG_value_mask                          0x10
#define REDG_clear_mask                          0xEF

#define FEDG                                     0x5
#define FEDG_address                             0x797
#define FEDG_position                            0x5
#define FEDG_size                                0x1
#define FEDG_value_mask                          0x20
#define FEDG_clear_mask                          0xDF

#define RG1FEDG                                  0x5
#define RG1FEDG_address                          0x797
#define RG1FEDG_position                         0x5
#define RG1FEDG_size                             0x1
#define RG1FEDG_value_mask                       0x20
#define RG1FEDG_clear_mask                       0xDF

#define RG1EN                                    0x7
#define RG1EN_address                            0x797
#define RG1EN_position                           0x7
#define RG1EN_size                               0x1
#define RG1EN_value_mask                         0x80
#define RG1EN_clear_mask                         0x7F

#define PRG1CON0_EN                              0x7
#define PRG1CON0_EN_address                      0x797
#define PRG1CON0_EN_position                     0x7
#define PRG1CON0_EN_size                         0x1
#define PRG1CON0_EN_value_mask                   0x80
#define PRG1CON0_EN_clear_mask                   0x7F


/*-----------------------------------------#
| PRG1CON1                           0x798 |
#------------------------------------------#
| - | - | - | - | - | RDY | FPOL | RG1RPOL |
#------------------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2   | 1    | 0       |
#-----------------------------------------*/

#define PRG1CON1                                 0x0
#define PRG1CON1_address                         0x798
#define PRG1CON1_position                        0x0
#define PRG1CON1_size                            0x8
#define PRG1CON1_value_mask                      0xFF
#define PRG1CON1_clear_mask                      0x0

#define RG1RPOL                                  0x0
#define RG1RPOL_address                          0x798
#define RG1RPOL_position                         0x0
#define RG1RPOL_size                             0x1
#define RG1RPOL_value_mask                       0x1
#define RG1RPOL_clear_mask                       0xFE

#define RPOL                                     0x0
#define RPOL_address                             0x798
#define RPOL_position                            0x0
#define RPOL_size                                0x1
#define RPOL_value_mask                          0x1
#define RPOL_clear_mask                          0xFE

#define FPOL                                     0x1
#define FPOL_address                             0x798
#define FPOL_position                            0x1
#define FPOL_size                                0x1
#define FPOL_value_mask                          0x2
#define FPOL_clear_mask                          0xFD

#define RG1FPOL                                  0x1
#define RG1FPOL_address                          0x798
#define RG1FPOL_position                         0x1
#define RG1FPOL_size                             0x1
#define RG1FPOL_value_mask                       0x2
#define RG1FPOL_clear_mask                       0xFD

#define RDY                                      0x2
#define RDY_address                              0x798
#define RDY_position                             0x2
#define RDY_size                                 0x1
#define RDY_value_mask                           0x4
#define RDY_clear_mask                           0xFB

#define RG1RDY                                   0x2
#define RG1RDY_address                           0x798
#define RG1RDY_position                          0x2
#define RG1RDY_size                              0x1
#define RG1RDY_value_mask                        0x4
#define RG1RDY_clear_mask                        0xFB


/*-----------------------------------------------------------------#
| PRG1CON2                                                   0x799 |
#------------------------------------------------------------------#
| - | - | - | RG1ISET4 | RG1ISET3 | RG1ISET2 | RG1ISET1 | RG1ISET0 |
#------------------------------------------------------------------#
| 7 | 6 | 5 | 4        | 3        | 2        | 1        | 0        |
#-----------------------------------------------------------------*/

#define PRG1CON2                                 0x0
#define PRG1CON2_address                         0x799
#define PRG1CON2_position                        0x0
#define PRG1CON2_size                            0x8
#define PRG1CON2_value_mask                      0xFF
#define PRG1CON2_clear_mask                      0x0

#define RG1ISET0                                 0x0
#define RG1ISET0_address                         0x799
#define RG1ISET0_position                        0x0
#define RG1ISET0_size                            0x1
#define RG1ISET0_value_mask                      0x1
#define RG1ISET0_clear_mask                      0xFE

#define ISET                                     0x0
#define ISET_address                             0x799
#define ISET_position                            0x0
#define ISET_size                                0x5
#define ISET_value_mask                          0x1F
#define ISET_clear_mask                          0xE0

#define RG1ISET                                  0x0
#define RG1ISET_address                          0x799
#define RG1ISET_position                         0x0
#define RG1ISET_size                             0x5
#define RG1ISET_value_mask                       0x1F
#define RG1ISET_clear_mask                       0xE0

#define ISET0                                    0x0
#define ISET0_address                            0x799
#define ISET0_position                           0x0
#define ISET0_size                               0x1
#define ISET0_value_mask                         0x1
#define ISET0_clear_mask                         0xFE

#define RG1ISET1                                 0x1
#define RG1ISET1_address                         0x799
#define RG1ISET1_position                        0x1
#define RG1ISET1_size                            0x1
#define RG1ISET1_value_mask                      0x2
#define RG1ISET1_clear_mask                      0xFD

#define ISET1                                    0x1
#define ISET1_address                            0x799
#define ISET1_position                           0x1
#define ISET1_size                               0x1
#define ISET1_value_mask                         0x2
#define ISET1_clear_mask                         0xFD

#define RG1ISET2                                 0x2
#define RG1ISET2_address                         0x799
#define RG1ISET2_position                        0x2
#define RG1ISET2_size                            0x1
#define RG1ISET2_value_mask                      0x4
#define RG1ISET2_clear_mask                      0xFB

#define ISET2                                    0x2
#define ISET2_address                            0x799
#define ISET2_position                           0x2
#define ISET2_size                               0x1
#define ISET2_value_mask                         0x4
#define ISET2_clear_mask                         0xFB

#define RG1ISET3                                 0x3
#define RG1ISET3_address                         0x799
#define RG1ISET3_position                        0x3
#define RG1ISET3_size                            0x1
#define RG1ISET3_value_mask                      0x8
#define RG1ISET3_clear_mask                      0xF7

#define ISET3                                    0x3
#define ISET3_address                            0x799
#define ISET3_position                           0x3
#define ISET3_size                               0x1
#define ISET3_value_mask                         0x8
#define ISET3_clear_mask                         0xF7

#define RG1ISET4                                 0x4
#define RG1ISET4_address                         0x799
#define RG1ISET4_position                        0x4
#define RG1ISET4_size                            0x1
#define RG1ISET4_value_mask                      0x10
#define RG1ISET4_clear_mask                      0xEF

#define ISET4                                    0x4
#define ISET4_address                            0x799
#define ISET4_position                           0x4
#define ISET4_size                               0x1
#define ISET4_value_mask                         0x10
#define ISET4_clear_mask                         0xEF


/*------------------------------------#
| PWMEN                         0xD8E |
#-------------------------------------#
| - | - | - | MPWM5EN | - | - | - | - |
#-------------------------------------#
| 7 | 6 | 5 | 4       | 3 | 2 | 1 | 0 |
#------------------------------------*/

#define PWMEN                                    0x0
#define PWMEN_address                            0xD8E
#define PWMEN_position                           0x0
#define PWMEN_size                               0x8
#define PWMEN_value_mask                         0xFF
#define PWMEN_clear_mask                         0x0

#define MPWM5EN                                  0x4
#define MPWM5EN_address                          0xD8E
#define MPWM5EN_position                         0x4
#define MPWM5EN_size                             0x1
#define MPWM5EN_value_mask                       0x10
#define MPWM5EN_clear_mask                       0xEF


/*------------------------------------#
| PWMLD                         0xD8F |
#-------------------------------------#
| - | - | - | MPWM5LD | - | - | - | - |
#-------------------------------------#
| 7 | 6 | 5 | 4       | 3 | 2 | 1 | 0 |
#------------------------------------*/

#define PWMLD                                    0x0
#define PWMLD_address                            0xD8F
#define PWMLD_position                           0x0
#define PWMLD_size                               0x8
#define PWMLD_value_mask                         0xFF
#define PWMLD_clear_mask                         0x0

#define MPWM5LD                                  0x4
#define MPWM5LD_address                          0xD8F
#define MPWM5LD_position                         0x4
#define MPWM5LD_size                             0x1
#define MPWM5LD_value_mask                       0x10
#define MPWM5LD_clear_mask                       0xEF


/*-------------------------------------#
| PWMOUT                         0xD90 |
#--------------------------------------#
| - | - | - | MPWM5OUT | - | - | - | - |
#--------------------------------------#
| 7 | 6 | 5 | 4        | 3 | 2 | 1 | 0 |
#-------------------------------------*/

#define PWMOUT                                   0x0
#define PWMOUT_address                           0xD90
#define PWMOUT_position                          0x0
#define PWMOUT_size                              0x8
#define PWMOUT_value_mask                        0xFF
#define PWMOUT_clear_mask                        0x0

#define MPWM5OUT                                 0x4
#define MPWM5OUT_address                         0xD90
#define MPWM5OUT_position                        0x4
#define MPWM5OUT_size                            0x1
#define MPWM5OUT_value_mask                      0x10
#define MPWM5OUT_clear_mask                      0xEF


/*--------------------------------------------------------------------------------------#
| PWM5PHL                                                                         0xD91 |
#---------------------------------------------------------------------------------------#
| PWM5PHL7 | PWM5PHL6 | PWM5PHL5 | PWM5PHL4 | PWM5PHL3 | PWM5PHL2 | PWM5PHL1 | PWM5PHL0 |
#---------------------------------------------------------------------------------------#
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
#--------------------------------------------------------------------------------------*/

#define PWM5PHL0                                 0x0
#define PWM5PHL0_address                         0xD91
#define PWM5PHL0_position                        0x0
#define PWM5PHL0_size                            0x1
#define PWM5PHL0_value_mask                      0x1
#define PWM5PHL0_clear_mask                      0xFE

#define PWM5PHL_PH                               0x0
#define PWM5PHL_PH_address                       0xD91
#define PWM5PHL_PH_position                      0x0
#define PWM5PHL_PH_size                          0x8
#define PWM5PHL_PH_value_mask                    0xFF
#define PWM5PHL_PH_clear_mask                    0x0

#define PWM5PHL                                  0x0
#define PWM5PHL_address                          0xD91
#define PWM5PHL_position                         0x0
#define PWM5PHL_size                             0x8
#define PWM5PHL_value_mask                       0xFF
#define PWM5PHL_clear_mask                       0x0

#define PWM5PHL1                                 0x1
#define PWM5PHL1_address                         0xD91
#define PWM5PHL1_position                        0x1
#define PWM5PHL1_size                            0x1
#define PWM5PHL1_value_mask                      0x2
#define PWM5PHL1_clear_mask                      0xFD

#define PWM5PHL2                                 0x2
#define PWM5PHL2_address                         0xD91
#define PWM5PHL2_position                        0x2
#define PWM5PHL2_size                            0x1
#define PWM5PHL2_value_mask                      0x4
#define PWM5PHL2_clear_mask                      0xFB

#define PWM5PHL3                                 0x3
#define PWM5PHL3_address                         0xD91
#define PWM5PHL3_position                        0x3
#define PWM5PHL3_size                            0x1
#define PWM5PHL3_value_mask                      0x8
#define PWM5PHL3_clear_mask                      0xF7

#define PWM5PHL4                                 0x4
#define PWM5PHL4_address                         0xD91
#define PWM5PHL4_position                        0x4
#define PWM5PHL4_size                            0x1
#define PWM5PHL4_value_mask                      0x10
#define PWM5PHL4_clear_mask                      0xEF

#define PWM5PHL5                                 0x5
#define PWM5PHL5_address                         0xD91
#define PWM5PHL5_position                        0x5
#define PWM5PHL5_size                            0x1
#define PWM5PHL5_value_mask                      0x20
#define PWM5PHL5_clear_mask                      0xDF

#define PWM5PHL6                                 0x6
#define PWM5PHL6_address                         0xD91
#define PWM5PHL6_position                        0x6
#define PWM5PHL6_size                            0x1
#define PWM5PHL6_value_mask                      0x40
#define PWM5PHL6_clear_mask                      0xBF

#define PWM5PHL7                                 0x7
#define PWM5PHL7_address                         0xD91
#define PWM5PHL7_position                        0x7
#define PWM5PHL7_size                            0x1
#define PWM5PHL7_value_mask                      0x80
#define PWM5PHL7_clear_mask                      0x7F


/*--------------------------------------------------------------------------------------#
| PWM5PHH                                                                         0xD92 |
#---------------------------------------------------------------------------------------#
| PWM5PHH7 | PWM5PHH6 | PWM5PHH5 | PWM5PHH4 | PWM5PHH3 | PWM5PHH2 | PWM5PHH1 | PWM5PHH0 |
#---------------------------------------------------------------------------------------#
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
#--------------------------------------------------------------------------------------*/

#define PWM5PHH0                                 0x0
#define PWM5PHH0_address                         0xD92
#define PWM5PHH0_position                        0x0
#define PWM5PHH0_size                            0x1
#define PWM5PHH0_value_mask                      0x1
#define PWM5PHH0_clear_mask                      0xFE

#define PWM5PHH_PH                               0x0
#define PWM5PHH_PH_address                       0xD92
#define PWM5PHH_PH_position                      0x0
#define PWM5PHH_PH_size                          0x8
#define PWM5PHH_PH_value_mask                    0xFF
#define PWM5PHH_PH_clear_mask                    0x0

#define PWM5PHH                                  0x0
#define PWM5PHH_address                          0xD92
#define PWM5PHH_position                         0x0
#define PWM5PHH_size                             0x8
#define PWM5PHH_value_mask                       0xFF
#define PWM5PHH_clear_mask                       0x0

#define PWM5PHH1                                 0x1
#define PWM5PHH1_address                         0xD92
#define PWM5PHH1_position                        0x1
#define PWM5PHH1_size                            0x1
#define PWM5PHH1_value_mask                      0x2
#define PWM5PHH1_clear_mask                      0xFD

#define PWM5PHH2                                 0x2
#define PWM5PHH2_address                         0xD92
#define PWM5PHH2_position                        0x2
#define PWM5PHH2_size                            0x1
#define PWM5PHH2_value_mask                      0x4
#define PWM5PHH2_clear_mask                      0xFB

#define PWM5PHH3                                 0x3
#define PWM5PHH3_address                         0xD92
#define PWM5PHH3_position                        0x3
#define PWM5PHH3_size                            0x1
#define PWM5PHH3_value_mask                      0x8
#define PWM5PHH3_clear_mask                      0xF7

#define PWM5PHH4                                 0x4
#define PWM5PHH4_address                         0xD92
#define PWM5PHH4_position                        0x4
#define PWM5PHH4_size                            0x1
#define PWM5PHH4_value_mask                      0x10
#define PWM5PHH4_clear_mask                      0xEF

#define PWM5PHH5                                 0x5
#define PWM5PHH5_address                         0xD92
#define PWM5PHH5_position                        0x5
#define PWM5PHH5_size                            0x1
#define PWM5PHH5_value_mask                      0x20
#define PWM5PHH5_clear_mask                      0xDF

#define PWM5PHH6                                 0x6
#define PWM5PHH6_address                         0xD92
#define PWM5PHH6_position                        0x6
#define PWM5PHH6_size                            0x1
#define PWM5PHH6_value_mask                      0x40
#define PWM5PHH6_clear_mask                      0xBF

#define PWM5PHH7                                 0x7
#define PWM5PHH7_address                         0xD92
#define PWM5PHH7_position                        0x7
#define PWM5PHH7_size                            0x1
#define PWM5PHH7_value_mask                      0x80
#define PWM5PHH7_clear_mask                      0x7F


/*--------------------------------------------------------------------------------------#
| PWM5DCL                                                                         0xD93 |
#---------------------------------------------------------------------------------------#
| PWM5DCL7 | PWM5DCL6 | PWM5DCL5 | PWM5DCL4 | PWM5DCL3 | PWM5DCL2 | PWM5DCL1 | PWM5DCL0 |
#---------------------------------------------------------------------------------------#
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
#--------------------------------------------------------------------------------------*/

#define PWM5DCL_DC                               0x0
#define PWM5DCL_DC_address                       0xD93
#define PWM5DCL_DC_position                      0x0
#define PWM5DCL_DC_size                          0x8
#define PWM5DCL_DC_value_mask                    0xFF
#define PWM5DCL_DC_clear_mask                    0x0

#define PWM5DCL                                  0x0
#define PWM5DCL_address                          0xD93
#define PWM5DCL_position                         0x0
#define PWM5DCL_size                             0x8
#define PWM5DCL_value_mask                       0xFF
#define PWM5DCL_clear_mask                       0x0

#define PWM5DCL0                                 0x0
#define PWM5DCL0_address                         0xD93
#define PWM5DCL0_position                        0x0
#define PWM5DCL0_size                            0x1
#define PWM5DCL0_value_mask                      0x1
#define PWM5DCL0_clear_mask                      0xFE

#define PWM5DCL1                                 0x1
#define PWM5DCL1_address                         0xD93
#define PWM5DCL1_position                        0x1
#define PWM5DCL1_size                            0x1
#define PWM5DCL1_value_mask                      0x2
#define PWM5DCL1_clear_mask                      0xFD

#define PWM5DCL2                                 0x2
#define PWM5DCL2_address                         0xD93
#define PWM5DCL2_position                        0x2
#define PWM5DCL2_size                            0x1
#define PWM5DCL2_value_mask                      0x4
#define PWM5DCL2_clear_mask                      0xFB

#define PWM5DCL3                                 0x3
#define PWM5DCL3_address                         0xD93
#define PWM5DCL3_position                        0x3
#define PWM5DCL3_size                            0x1
#define PWM5DCL3_value_mask                      0x8
#define PWM5DCL3_clear_mask                      0xF7

#define PWM5DCL4                                 0x4
#define PWM5DCL4_address                         0xD93
#define PWM5DCL4_position                        0x4
#define PWM5DCL4_size                            0x1
#define PWM5DCL4_value_mask                      0x10
#define PWM5DCL4_clear_mask                      0xEF

#define PWM5DCL5                                 0x5
#define PWM5DCL5_address                         0xD93
#define PWM5DCL5_position                        0x5
#define PWM5DCL5_size                            0x1
#define PWM5DCL5_value_mask                      0x20
#define PWM5DCL5_clear_mask                      0xDF

#define PWM5DCL6                                 0x6
#define PWM5DCL6_address                         0xD93
#define PWM5DCL6_position                        0x6
#define PWM5DCL6_size                            0x1
#define PWM5DCL6_value_mask                      0x40
#define PWM5DCL6_clear_mask                      0xBF

#define PWM5DCL7                                 0x7
#define PWM5DCL7_address                         0xD93
#define PWM5DCL7_position                        0x7
#define PWM5DCL7_size                            0x1
#define PWM5DCL7_value_mask                      0x80
#define PWM5DCL7_clear_mask                      0x7F


/*--------------------------------------------------------------------------------------#
| PWM5DCH                                                                         0xD94 |
#---------------------------------------------------------------------------------------#
| PWM5DCH7 | PWM5DCH6 | PWM5DCH5 | PWM5DCH4 | PWM5DCH3 | PWM5DCH2 | PWM5DCH1 | PWM5DCH0 |
#---------------------------------------------------------------------------------------#
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
#--------------------------------------------------------------------------------------*/

#define PWM5DCH_DC                               0x0
#define PWM5DCH_DC_address                       0xD94
#define PWM5DCH_DC_position                      0x0
#define PWM5DCH_DC_size                          0x8
#define PWM5DCH_DC_value_mask                    0xFF
#define PWM5DCH_DC_clear_mask                    0x0

#define PWM5DCH                                  0x0
#define PWM5DCH_address                          0xD94
#define PWM5DCH_position                         0x0
#define PWM5DCH_size                             0x8
#define PWM5DCH_value_mask                       0xFF
#define PWM5DCH_clear_mask                       0x0

#define PWM5DCH0                                 0x0
#define PWM5DCH0_address                         0xD94
#define PWM5DCH0_position                        0x0
#define PWM5DCH0_size                            0x1
#define PWM5DCH0_value_mask                      0x1
#define PWM5DCH0_clear_mask                      0xFE

#define PWM5DCH1                                 0x1
#define PWM5DCH1_address                         0xD94
#define PWM5DCH1_position                        0x1
#define PWM5DCH1_size                            0x1
#define PWM5DCH1_value_mask                      0x2
#define PWM5DCH1_clear_mask                      0xFD

#define PWM5DCH2                                 0x2
#define PWM5DCH2_address                         0xD94
#define PWM5DCH2_position                        0x2
#define PWM5DCH2_size                            0x1
#define PWM5DCH2_value_mask                      0x4
#define PWM5DCH2_clear_mask                      0xFB

#define PWM5DCH3                                 0x3
#define PWM5DCH3_address                         0xD94
#define PWM5DCH3_position                        0x3
#define PWM5DCH3_size                            0x1
#define PWM5DCH3_value_mask                      0x8
#define PWM5DCH3_clear_mask                      0xF7

#define PWM5DCH4                                 0x4
#define PWM5DCH4_address                         0xD94
#define PWM5DCH4_position                        0x4
#define PWM5DCH4_size                            0x1
#define PWM5DCH4_value_mask                      0x10
#define PWM5DCH4_clear_mask                      0xEF

#define PWM5DCH5                                 0x5
#define PWM5DCH5_address                         0xD94
#define PWM5DCH5_position                        0x5
#define PWM5DCH5_size                            0x1
#define PWM5DCH5_value_mask                      0x20
#define PWM5DCH5_clear_mask                      0xDF

#define PWM5DCH6                                 0x6
#define PWM5DCH6_address                         0xD94
#define PWM5DCH6_position                        0x6
#define PWM5DCH6_size                            0x1
#define PWM5DCH6_value_mask                      0x40
#define PWM5DCH6_clear_mask                      0xBF

#define PWM5DCH7                                 0x7
#define PWM5DCH7_address                         0xD94
#define PWM5DCH7_position                        0x7
#define PWM5DCH7_size                            0x1
#define PWM5DCH7_value_mask                      0x80
#define PWM5DCH7_clear_mask                      0x7F


/*--------------------------------------------------------------------------------------#
| PWM5PRL                                                                         0xD95 |
#---------------------------------------------------------------------------------------#
| PWM5PRL7 | PWM5PRL6 | PWM5PRL5 | PWM5PRL4 | PWM5PRL3 | PWM5PRL2 | PWM5PRL1 | PWM5PRL0 |
#---------------------------------------------------------------------------------------#
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
#--------------------------------------------------------------------------------------*/

#define PWM5PRL0                                 0x0
#define PWM5PRL0_address                         0xD95
#define PWM5PRL0_position                        0x0
#define PWM5PRL0_size                            0x1
#define PWM5PRL0_value_mask                      0x1
#define PWM5PRL0_clear_mask                      0xFE

#define PWM5PRL_PR                               0x0
#define PWM5PRL_PR_address                       0xD95
#define PWM5PRL_PR_position                      0x0
#define PWM5PRL_PR_size                          0x8
#define PWM5PRL_PR_value_mask                    0xFF
#define PWM5PRL_PR_clear_mask                    0x0

#define PWM5PRL                                  0x0
#define PWM5PRL_address                          0xD95
#define PWM5PRL_position                         0x0
#define PWM5PRL_size                             0x8
#define PWM5PRL_value_mask                       0xFF
#define PWM5PRL_clear_mask                       0x0

#define PWM5PRL1                                 0x1
#define PWM5PRL1_address                         0xD95
#define PWM5PRL1_position                        0x1
#define PWM5PRL1_size                            0x1
#define PWM5PRL1_value_mask                      0x2
#define PWM5PRL1_clear_mask                      0xFD

#define PWM5PRL2                                 0x2
#define PWM5PRL2_address                         0xD95
#define PWM5PRL2_position                        0x2
#define PWM5PRL2_size                            0x1
#define PWM5PRL2_value_mask                      0x4
#define PWM5PRL2_clear_mask                      0xFB

#define PWM5PRL3                                 0x3
#define PWM5PRL3_address                         0xD95
#define PWM5PRL3_position                        0x3
#define PWM5PRL3_size                            0x1
#define PWM5PRL3_value_mask                      0x8
#define PWM5PRL3_clear_mask                      0xF7

#define PWM5PRL4                                 0x4
#define PWM5PRL4_address                         0xD95
#define PWM5PRL4_position                        0x4
#define PWM5PRL4_size                            0x1
#define PWM5PRL4_value_mask                      0x10
#define PWM5PRL4_clear_mask                      0xEF

#define PWM5PRL5                                 0x5
#define PWM5PRL5_address                         0xD95
#define PWM5PRL5_position                        0x5
#define PWM5PRL5_size                            0x1
#define PWM5PRL5_value_mask                      0x20
#define PWM5PRL5_clear_mask                      0xDF

#define PWM5PRL6                                 0x6
#define PWM5PRL6_address                         0xD95
#define PWM5PRL6_position                        0x6
#define PWM5PRL6_size                            0x1
#define PWM5PRL6_value_mask                      0x40
#define PWM5PRL6_clear_mask                      0xBF

#define PWM5PRL7                                 0x7
#define PWM5PRL7_address                         0xD95
#define PWM5PRL7_position                        0x7
#define PWM5PRL7_size                            0x1
#define PWM5PRL7_value_mask                      0x80
#define PWM5PRL7_clear_mask                      0x7F


/*--------------------------------------------------------------------------------------#
| PWM5PRH                                                                         0xD96 |
#---------------------------------------------------------------------------------------#
| PWM5PRH7 | PWM5PRH6 | PWM5PRH5 | PWM5PRH4 | PWM5PRH3 | PWM5PRH2 | PWM5PRH1 | PWM5PRH0 |
#---------------------------------------------------------------------------------------#
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
#--------------------------------------------------------------------------------------*/

#define PWM5PRH_PR                               0x0
#define PWM5PRH_PR_address                       0xD96
#define PWM5PRH_PR_position                      0x0
#define PWM5PRH_PR_size                          0x8
#define PWM5PRH_PR_value_mask                    0xFF
#define PWM5PRH_PR_clear_mask                    0x0

#define PWM5PRH0                                 0x0
#define PWM5PRH0_address                         0xD96
#define PWM5PRH0_position                        0x0
#define PWM5PRH0_size                            0x1
#define PWM5PRH0_value_mask                      0x1
#define PWM5PRH0_clear_mask                      0xFE

#define PWM5PRH                                  0x0
#define PWM5PRH_address                          0xD96
#define PWM5PRH_position                         0x0
#define PWM5PRH_size                             0x8
#define PWM5PRH_value_mask                       0xFF
#define PWM5PRH_clear_mask                       0x0

#define PWM5PRH1                                 0x1
#define PWM5PRH1_address                         0xD96
#define PWM5PRH1_position                        0x1
#define PWM5PRH1_size                            0x1
#define PWM5PRH1_value_mask                      0x2
#define PWM5PRH1_clear_mask                      0xFD

#define PWM5PRH2                                 0x2
#define PWM5PRH2_address                         0xD96
#define PWM5PRH2_position                        0x2
#define PWM5PRH2_size                            0x1
#define PWM5PRH2_value_mask                      0x4
#define PWM5PRH2_clear_mask                      0xFB

#define PWM5PRH3                                 0x3
#define PWM5PRH3_address                         0xD96
#define PWM5PRH3_position                        0x3
#define PWM5PRH3_size                            0x1
#define PWM5PRH3_value_mask                      0x8
#define PWM5PRH3_clear_mask                      0xF7

#define PWM5PRH4                                 0x4
#define PWM5PRH4_address                         0xD96
#define PWM5PRH4_position                        0x4
#define PWM5PRH4_size                            0x1
#define PWM5PRH4_value_mask                      0x10
#define PWM5PRH4_clear_mask                      0xEF

#define PWM5PRH5                                 0x5
#define PWM5PRH5_address                         0xD96
#define PWM5PRH5_position                        0x5
#define PWM5PRH5_size                            0x1
#define PWM5PRH5_value_mask                      0x20
#define PWM5PRH5_clear_mask                      0xDF

#define PWM5PRH6                                 0x6
#define PWM5PRH6_address                         0xD96
#define PWM5PRH6_position                        0x6
#define PWM5PRH6_size                            0x1
#define PWM5PRH6_value_mask                      0x40
#define PWM5PRH6_clear_mask                      0xBF

#define PWM5PRH7                                 0x7
#define PWM5PRH7_address                         0xD96
#define PWM5PRH7_position                        0x7
#define PWM5PRH7_size                            0x1
#define PWM5PRH7_value_mask                      0x80
#define PWM5PRH7_clear_mask                      0x7F


/*--------------------------------------------------------------------------------------#
| PWM5OFL                                                                         0xD97 |
#---------------------------------------------------------------------------------------#
| PWM5OFL7 | PWM5OFL6 | PWM5OFL5 | PWM5OFL4 | PWM5OFL3 | PWM5OFL2 | PWM5OFL1 | PWM5OFL0 |
#---------------------------------------------------------------------------------------#
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
#--------------------------------------------------------------------------------------*/

#define PWM5OFL                                  0x0
#define PWM5OFL_address                          0xD97
#define PWM5OFL_position                         0x0
#define PWM5OFL_size                             0x8
#define PWM5OFL_value_mask                       0xFF
#define PWM5OFL_clear_mask                       0x0

#define PWM5OFL0                                 0x0
#define PWM5OFL0_address                         0xD97
#define PWM5OFL0_position                        0x0
#define PWM5OFL0_size                            0x1
#define PWM5OFL0_value_mask                      0x1
#define PWM5OFL0_clear_mask                      0xFE

#define PWM5OFL_OF                               0x0
#define PWM5OFL_OF_address                       0xD97
#define PWM5OFL_OF_position                      0x0
#define PWM5OFL_OF_size                          0x8
#define PWM5OFL_OF_value_mask                    0xFF
#define PWM5OFL_OF_clear_mask                    0x0

#define PWM5OFL1                                 0x1
#define PWM5OFL1_address                         0xD97
#define PWM5OFL1_position                        0x1
#define PWM5OFL1_size                            0x1
#define PWM5OFL1_value_mask                      0x2
#define PWM5OFL1_clear_mask                      0xFD

#define PWM5OFL2                                 0x2
#define PWM5OFL2_address                         0xD97
#define PWM5OFL2_position                        0x2
#define PWM5OFL2_size                            0x1
#define PWM5OFL2_value_mask                      0x4
#define PWM5OFL2_clear_mask                      0xFB

#define PWM5OFL3                                 0x3
#define PWM5OFL3_address                         0xD97
#define PWM5OFL3_position                        0x3
#define PWM5OFL3_size                            0x1
#define PWM5OFL3_value_mask                      0x8
#define PWM5OFL3_clear_mask                      0xF7

#define PWM5OFL4                                 0x4
#define PWM5OFL4_address                         0xD97
#define PWM5OFL4_position                        0x4
#define PWM5OFL4_size                            0x1
#define PWM5OFL4_value_mask                      0x10
#define PWM5OFL4_clear_mask                      0xEF

#define PWM5OFL5                                 0x5
#define PWM5OFL5_address                         0xD97
#define PWM5OFL5_position                        0x5
#define PWM5OFL5_size                            0x1
#define PWM5OFL5_value_mask                      0x20
#define PWM5OFL5_clear_mask                      0xDF

#define PWM5OFL6                                 0x6
#define PWM5OFL6_address                         0xD97
#define PWM5OFL6_position                        0x6
#define PWM5OFL6_size                            0x1
#define PWM5OFL6_value_mask                      0x40
#define PWM5OFL6_clear_mask                      0xBF

#define PWM5OFL7                                 0x7
#define PWM5OFL7_address                         0xD97
#define PWM5OFL7_position                        0x7
#define PWM5OFL7_size                            0x1
#define PWM5OFL7_value_mask                      0x80
#define PWM5OFL7_clear_mask                      0x7F


/*--------------------------------------------------------------------------------------#
| PWM5OFH                                                                         0xD98 |
#---------------------------------------------------------------------------------------#
| PWM5OFH7 | PWM5OFH6 | PWM5OFH5 | PWM5OFH4 | PWM5OFH3 | PWM5OFH2 | PWM5OFH1 | PWM5OFH0 |
#---------------------------------------------------------------------------------------#
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
#--------------------------------------------------------------------------------------*/

#define PWM5OFH_OF                               0x0
#define PWM5OFH_OF_address                       0xD98
#define PWM5OFH_OF_position                      0x0
#define PWM5OFH_OF_size                          0x8
#define PWM5OFH_OF_value_mask                    0xFF
#define PWM5OFH_OF_clear_mask                    0x0

#define PWM5OFH                                  0x0
#define PWM5OFH_address                          0xD98
#define PWM5OFH_position                         0x0
#define PWM5OFH_size                             0x8
#define PWM5OFH_value_mask                       0xFF
#define PWM5OFH_clear_mask                       0x0

#define PWM5OFH0                                 0x0
#define PWM5OFH0_address                         0xD98
#define PWM5OFH0_position                        0x0
#define PWM5OFH0_size                            0x1
#define PWM5OFH0_value_mask                      0x1
#define PWM5OFH0_clear_mask                      0xFE

#define PWM5OFH1                                 0x1
#define PWM5OFH1_address                         0xD98
#define PWM5OFH1_position                        0x1
#define PWM5OFH1_size                            0x1
#define PWM5OFH1_value_mask                      0x2
#define PWM5OFH1_clear_mask                      0xFD

#define PWM5OFH2                                 0x2
#define PWM5OFH2_address                         0xD98
#define PWM5OFH2_position                        0x2
#define PWM5OFH2_size                            0x1
#define PWM5OFH2_value_mask                      0x4
#define PWM5OFH2_clear_mask                      0xFB

#define PWM5OFH3                                 0x3
#define PWM5OFH3_address                         0xD98
#define PWM5OFH3_position                        0x3
#define PWM5OFH3_size                            0x1
#define PWM5OFH3_value_mask                      0x8
#define PWM5OFH3_clear_mask                      0xF7

#define PWM5OFH4                                 0x4
#define PWM5OFH4_address                         0xD98
#define PWM5OFH4_position                        0x4
#define PWM5OFH4_size                            0x1
#define PWM5OFH4_value_mask                      0x10
#define PWM5OFH4_clear_mask                      0xEF

#define PWM5OFH5                                 0x5
#define PWM5OFH5_address                         0xD98
#define PWM5OFH5_position                        0x5
#define PWM5OFH5_size                            0x1
#define PWM5OFH5_value_mask                      0x20
#define PWM5OFH5_clear_mask                      0xDF

#define PWM5OFH6                                 0x6
#define PWM5OFH6_address                         0xD98
#define PWM5OFH6_position                        0x6
#define PWM5OFH6_size                            0x1
#define PWM5OFH6_value_mask                      0x40
#define PWM5OFH6_clear_mask                      0xBF

#define PWM5OFH7                                 0x7
#define PWM5OFH7_address                         0xD98
#define PWM5OFH7_position                        0x7
#define PWM5OFH7_size                            0x1
#define PWM5OFH7_value_mask                      0x80
#define PWM5OFH7_clear_mask                      0x7F


/*----------------------------------------------------------------------------------------------#
| PWM5TMRL                                                                                0xD99 |
#-----------------------------------------------------------------------------------------------#
| PWM5TMRL7 | PWM5TMRL6 | PWM5TMRL5 | PWM5TMRL4 | PWM5TMRL3 | PWM5TMRL2 | PWM5TMRL1 | PWM5TMRL0 |
#-----------------------------------------------------------------------------------------------#
| 7         | 6         | 5         | 4         | 3         | 2         | 1         | 0         |
#----------------------------------------------------------------------------------------------*/

#define PWM5TMRL_TMR                             0x0
#define PWM5TMRL_TMR_address                     0xD99
#define PWM5TMRL_TMR_position                    0x0
#define PWM5TMRL_TMR_size                        0x8
#define PWM5TMRL_TMR_value_mask                  0xFF
#define PWM5TMRL_TMR_clear_mask                  0x0

#define PWM5TMRL                                 0x0
#define PWM5TMRL_address                         0xD99
#define PWM5TMRL_position                        0x0
#define PWM5TMRL_size                            0x8
#define PWM5TMRL_value_mask                      0xFF
#define PWM5TMRL_clear_mask                      0x0

#define PWM5TMRL0                                0x0
#define PWM5TMRL0_address                        0xD99
#define PWM5TMRL0_position                       0x0
#define PWM5TMRL0_size                           0x1
#define PWM5TMRL0_value_mask                     0x1
#define PWM5TMRL0_clear_mask                     0xFE

#define PWM5TMRL1                                0x1
#define PWM5TMRL1_address                        0xD99
#define PWM5TMRL1_position                       0x1
#define PWM5TMRL1_size                           0x1
#define PWM5TMRL1_value_mask                     0x2
#define PWM5TMRL1_clear_mask                     0xFD

#define PWM5TMRL2                                0x2
#define PWM5TMRL2_address                        0xD99
#define PWM5TMRL2_position                       0x2
#define PWM5TMRL2_size                           0x1
#define PWM5TMRL2_value_mask                     0x4
#define PWM5TMRL2_clear_mask                     0xFB

#define PWM5TMRL3                                0x3
#define PWM5TMRL3_address                        0xD99
#define PWM5TMRL3_position                       0x3
#define PWM5TMRL3_size                           0x1
#define PWM5TMRL3_value_mask                     0x8
#define PWM5TMRL3_clear_mask                     0xF7

#define PWM5TMRL4                                0x4
#define PWM5TMRL4_address                        0xD99
#define PWM5TMRL4_position                       0x4
#define PWM5TMRL4_size                           0x1
#define PWM5TMRL4_value_mask                     0x10
#define PWM5TMRL4_clear_mask                     0xEF

#define PWM5TMRL5                                0x5
#define PWM5TMRL5_address                        0xD99
#define PWM5TMRL5_position                       0x5
#define PWM5TMRL5_size                           0x1
#define PWM5TMRL5_value_mask                     0x20
#define PWM5TMRL5_clear_mask                     0xDF

#define PWM5TMRL6                                0x6
#define PWM5TMRL6_address                        0xD99
#define PWM5TMRL6_position                       0x6
#define PWM5TMRL6_size                           0x1
#define PWM5TMRL6_value_mask                     0x40
#define PWM5TMRL6_clear_mask                     0xBF

#define PWM5TMRL7                                0x7
#define PWM5TMRL7_address                        0xD99
#define PWM5TMRL7_position                       0x7
#define PWM5TMRL7_size                           0x1
#define PWM5TMRL7_value_mask                     0x80
#define PWM5TMRL7_clear_mask                     0x7F


/*----------------------------------------------------------------------------------------------#
| PWM5TMRH                                                                                0xD9A |
#-----------------------------------------------------------------------------------------------#
| PWM5TMRH7 | PWM5TMRH6 | PWM5TMRH5 | PWM5TMRH4 | PWM5TMRH3 | PWM5TMRH2 | PWM5TMRH1 | PWM5TMRH0 |
#-----------------------------------------------------------------------------------------------#
| 7         | 6         | 5         | 4         | 3         | 2         | 1         | 0         |
#----------------------------------------------------------------------------------------------*/

#define PWM5TMRH0                                0x0
#define PWM5TMRH0_address                        0xD9A
#define PWM5TMRH0_position                       0x0
#define PWM5TMRH0_size                           0x1
#define PWM5TMRH0_value_mask                     0x1
#define PWM5TMRH0_clear_mask                     0xFE

#define PWM5TMRH                                 0x0
#define PWM5TMRH_address                         0xD9A
#define PWM5TMRH_position                        0x0
#define PWM5TMRH_size                            0x8
#define PWM5TMRH_value_mask                      0xFF
#define PWM5TMRH_clear_mask                      0x0

#define PWM5TMRH_TMR                             0x0
#define PWM5TMRH_TMR_address                     0xD9A
#define PWM5TMRH_TMR_position                    0x0
#define PWM5TMRH_TMR_size                        0x8
#define PWM5TMRH_TMR_value_mask                  0xFF
#define PWM5TMRH_TMR_clear_mask                  0x0

#define PWM5TMRH1                                0x1
#define PWM5TMRH1_address                        0xD9A
#define PWM5TMRH1_position                       0x1
#define PWM5TMRH1_size                           0x1
#define PWM5TMRH1_value_mask                     0x2
#define PWM5TMRH1_clear_mask                     0xFD

#define PWM5TMRH2                                0x2
#define PWM5TMRH2_address                        0xD9A
#define PWM5TMRH2_position                       0x2
#define PWM5TMRH2_size                           0x1
#define PWM5TMRH2_value_mask                     0x4
#define PWM5TMRH2_clear_mask                     0xFB

#define PWM5TMRH3                                0x3
#define PWM5TMRH3_address                        0xD9A
#define PWM5TMRH3_position                       0x3
#define PWM5TMRH3_size                           0x1
#define PWM5TMRH3_value_mask                     0x8
#define PWM5TMRH3_clear_mask                     0xF7

#define PWM5TMRH4                                0x4
#define PWM5TMRH4_address                        0xD9A
#define PWM5TMRH4_position                       0x4
#define PWM5TMRH4_size                           0x1
#define PWM5TMRH4_value_mask                     0x10
#define PWM5TMRH4_clear_mask                     0xEF

#define PWM5TMRH5                                0x5
#define PWM5TMRH5_address                        0xD9A
#define PWM5TMRH5_position                       0x5
#define PWM5TMRH5_size                           0x1
#define PWM5TMRH5_value_mask                     0x20
#define PWM5TMRH5_clear_mask                     0xDF

#define PWM5TMRH6                                0x6
#define PWM5TMRH6_address                        0xD9A
#define PWM5TMRH6_position                       0x6
#define PWM5TMRH6_size                           0x1
#define PWM5TMRH6_value_mask                     0x40
#define PWM5TMRH6_clear_mask                     0xBF

#define PWM5TMRH7                                0x7
#define PWM5TMRH7_address                        0xD9A
#define PWM5TMRH7_position                       0x7
#define PWM5TMRH7_size                           0x1
#define PWM5TMRH7_value_mask                     0x80
#define PWM5TMRH7_clear_mask                     0x7F


/*---------------------------------------------------------------#
| PWM5CON                                                  0xD9B |
#----------------------------------------------------------------#
| PWM5EN | - | PWM5OUT | PWM5POL | PWM5MODE1 | PWM5MODE0 | - | - |
#----------------------------------------------------------------#
| 7      | 6 | 5       | 4       | 3         | 2         | 1 | 0 |
#---------------------------------------------------------------*/

#define PWM5CON                                  0x0
#define PWM5CON_address                          0xD9B
#define PWM5CON_position                         0x0
#define PWM5CON_size                             0x8
#define PWM5CON_value_mask                       0xFF
#define PWM5CON_clear_mask                       0x0

#define PWM5MODE0                                0x2
#define PWM5MODE0_address                        0xD9B
#define PWM5MODE0_position                       0x2
#define PWM5MODE0_size                           0x1
#define PWM5MODE0_value_mask                     0x4
#define PWM5MODE0_clear_mask                     0xFB

#define PWM5CON_MODE                             0x2
#define PWM5CON_MODE_address                     0xD9B
#define PWM5CON_MODE_position                    0x2
#define PWM5CON_MODE_size                        0x2
#define PWM5CON_MODE_value_mask                  0xC
#define PWM5CON_MODE_clear_mask                  0xF3

#define PWM5CON_MODE0                            0x2
#define PWM5CON_MODE0_address                    0xD9B
#define PWM5CON_MODE0_position                   0x2
#define PWM5CON_MODE0_size                       0x1
#define PWM5CON_MODE0_value_mask                 0x4
#define PWM5CON_MODE0_clear_mask                 0xFB

#define PWM5MODE                                 0x2
#define PWM5MODE_address                         0xD9B
#define PWM5MODE_position                        0x2
#define PWM5MODE_size                            0x2
#define PWM5MODE_value_mask                      0xC
#define PWM5MODE_clear_mask                      0xF3

#define PWM5MODE1                                0x3
#define PWM5MODE1_address                        0xD9B
#define PWM5MODE1_position                       0x3
#define PWM5MODE1_size                           0x1
#define PWM5MODE1_value_mask                     0x8
#define PWM5MODE1_clear_mask                     0xF7

#define PWM5CON_MODE1                            0x3
#define PWM5CON_MODE1_address                    0xD9B
#define PWM5CON_MODE1_position                   0x3
#define PWM5CON_MODE1_size                       0x1
#define PWM5CON_MODE1_value_mask                 0x8
#define PWM5CON_MODE1_clear_mask                 0xF7

#define PWM5POL                                  0x4
#define PWM5POL_address                          0xD9B
#define PWM5POL_position                         0x4
#define PWM5POL_size                             0x1
#define PWM5POL_value_mask                       0x10
#define PWM5POL_clear_mask                       0xEF

#define PWM5CON_POL                              0x4
#define PWM5CON_POL_address                      0xD9B
#define PWM5CON_POL_position                     0x4
#define PWM5CON_POL_size                         0x1
#define PWM5CON_POL_value_mask                   0x10
#define PWM5CON_POL_clear_mask                   0xEF

#define PWM5OUT                                  0x5
#define PWM5OUT_address                          0xD9B
#define PWM5OUT_position                         0x5
#define PWM5OUT_size                             0x1
#define PWM5OUT_value_mask                       0x20
#define PWM5OUT_clear_mask                       0xDF

#define PWM5CON_OUT                              0x5
#define PWM5CON_OUT_address                      0xD9B
#define PWM5CON_OUT_position                     0x5
#define PWM5CON_OUT_size                         0x1
#define PWM5CON_OUT_value_mask                   0x20
#define PWM5CON_OUT_clear_mask                   0xDF

#define PWM5EN                                   0x7
#define PWM5EN_address                           0xD9B
#define PWM5EN_position                          0x7
#define PWM5EN_size                              0x1
#define PWM5EN_value_mask                        0x80
#define PWM5EN_clear_mask                        0x7F

#define PWM5CON_EN                               0x7
#define PWM5CON_EN_address                       0xD9B
#define PWM5CON_EN_position                      0x7
#define PWM5CON_EN_size                          0x1
#define PWM5CON_EN_value_mask                    0x80
#define PWM5CON_EN_clear_mask                    0x7F


/*----------------------------------------------#
| PWM5INTE                                0xD9C |
#-----------------------------------------------#
| - | - | - | - | PWM5OFIE | PHIE | DCIE | PRIE |
#-----------------------------------------------#
| 7 | 6 | 5 | 4 | 3        | 2    | 1    | 0    |
#----------------------------------------------*/

#define PWM5INTE                                 0x0
#define PWM5INTE_address                         0xD9C
#define PWM5INTE_position                        0x0
#define PWM5INTE_size                            0x8
#define PWM5INTE_value_mask                      0xFF
#define PWM5INTE_clear_mask                      0x0

#define PRIE                                     0x0
#define PRIE_address                             0xD9C
#define PRIE_position                            0x0
#define PRIE_size                                0x1
#define PRIE_value_mask                          0x1
#define PRIE_clear_mask                          0xFE

#define PWM5PRIE                                 0x0
#define PWM5PRIE_address                         0xD9C
#define PWM5PRIE_position                        0x0
#define PWM5PRIE_size                            0x1
#define PWM5PRIE_value_mask                      0x1
#define PWM5PRIE_clear_mask                      0xFE

#define DCIE                                     0x1
#define DCIE_address                             0xD9C
#define DCIE_position                            0x1
#define DCIE_size                                0x1
#define DCIE_value_mask                          0x2
#define DCIE_clear_mask                          0xFD

#define PWM5DCIE                                 0x1
#define PWM5DCIE_address                         0xD9C
#define PWM5DCIE_position                        0x1
#define PWM5DCIE_size                            0x1
#define PWM5DCIE_value_mask                      0x2
#define PWM5DCIE_clear_mask                      0xFD

#define PHIE                                     0x2
#define PHIE_address                             0xD9C
#define PHIE_position                            0x2
#define PHIE_size                                0x1
#define PHIE_value_mask                          0x4
#define PHIE_clear_mask                          0xFB

#define PWM5PHIE                                 0x2
#define PWM5PHIE_address                         0xD9C
#define PWM5PHIE_position                        0x2
#define PWM5PHIE_size                            0x1
#define PWM5PHIE_value_mask                      0x4
#define PWM5PHIE_clear_mask                      0xFB

#define PWM5OFIE                                 0x3
#define PWM5OFIE_address                         0xD9C
#define PWM5OFIE_position                        0x3
#define PWM5OFIE_size                            0x1
#define PWM5OFIE_value_mask                      0x8
#define PWM5OFIE_clear_mask                      0xF7

#define OFIE                                     0x3
#define OFIE_address                             0xD9C
#define OFIE_position                            0x3
#define OFIE_size                                0x1
#define OFIE_value_mask                          0x8
#define OFIE_clear_mask                          0xF7


/*----------------------------------------------#
| PWM5INTF                                0xD9D |
#-----------------------------------------------#
| - | - | - | - | PWM5OFIF | PHIF | DCIF | PRIF |
#-----------------------------------------------#
| 7 | 6 | 5 | 4 | 3        | 2    | 1    | 0    |
#----------------------------------------------*/

#define PWM5INTF                                 0x0
#define PWM5INTF_address                         0xD9D
#define PWM5INTF_position                        0x0
#define PWM5INTF_size                            0x8
#define PWM5INTF_value_mask                      0xFF
#define PWM5INTF_clear_mask                      0x0

#define PRIF                                     0x0
#define PRIF_address                             0xD9D
#define PRIF_position                            0x0
#define PRIF_size                                0x1
#define PRIF_value_mask                          0x1
#define PRIF_clear_mask                          0xFE

#define PWM5PRIF                                 0x0
#define PWM5PRIF_address                         0xD9D
#define PWM5PRIF_position                        0x0
#define PWM5PRIF_size                            0x1
#define PWM5PRIF_value_mask                      0x1
#define PWM5PRIF_clear_mask                      0xFE

#define DCIF                                     0x1
#define DCIF_address                             0xD9D
#define DCIF_position                            0x1
#define DCIF_size                                0x1
#define DCIF_value_mask                          0x2
#define DCIF_clear_mask                          0xFD

#define PWM5DCIF                                 0x1
#define PWM5DCIF_address                         0xD9D
#define PWM5DCIF_position                        0x1
#define PWM5DCIF_size                            0x1
#define PWM5DCIF_value_mask                      0x2
#define PWM5DCIF_clear_mask                      0xFD

#define PHIF                                     0x2
#define PHIF_address                             0xD9D
#define PHIF_position                            0x2
#define PHIF_size                                0x1
#define PHIF_value_mask                          0x4
#define PHIF_clear_mask                          0xFB

#define PWM5PHIF                                 0x2
#define PWM5PHIF_address                         0xD9D
#define PWM5PHIF_position                        0x2
#define PWM5PHIF_size                            0x1
#define PWM5PHIF_value_mask                      0x4
#define PWM5PHIF_clear_mask                      0xFB

#define PWM5OFIF                                 0x3
#define PWM5OFIF_address                         0xD9D
#define PWM5OFIF_position                        0x3
#define PWM5OFIF_size                            0x1
#define PWM5OFIF_value_mask                      0x8
#define PWM5OFIF_clear_mask                      0xF7

#define OFIF                                     0x3
#define OFIF_address                             0xD9D
#define OFIF_position                            0x3
#define OFIF_size                                0x1
#define OFIF_value_mask                          0x8
#define OFIF_clear_mask                          0xF7


/*---------------------------------------------------------------------------------------#
| PWM5CLKCON                                                                       0xD9E |
#----------------------------------------------------------------------------------------#
| - | PWM5PS2 | PWM5PS1 | PWM5PS0 | - | PWM5CLKCON_CS2 | PWM5CLKCON_CS1 | PWM5CLKCON_CS0 |
#----------------------------------------------------------------------------------------#
| 7 | 6       | 5       | 4       | 3 | 2              | 1              | 0              |
#---------------------------------------------------------------------------------------*/

#define PWM5CLKCON                               0x0
#define PWM5CLKCON_address                       0xD9E
#define PWM5CLKCON_position                      0x0
#define PWM5CLKCON_size                          0x8
#define PWM5CLKCON_value_mask                    0xFF
#define PWM5CLKCON_clear_mask                    0x0

#define PWM5CS0                                  0x0
#define PWM5CS0_address                          0xD9E
#define PWM5CS0_position                         0x0
#define PWM5CS0_size                             0x1
#define PWM5CS0_value_mask                       0x1
#define PWM5CS0_clear_mask                       0xFE

#define PWM5CLKCON_CS0                           0x0
#define PWM5CLKCON_CS0_address                   0xD9E
#define PWM5CLKCON_CS0_position                  0x0
#define PWM5CLKCON_CS0_size                      0x1
#define PWM5CLKCON_CS0_value_mask                0x1
#define PWM5CLKCON_CS0_clear_mask                0xFE

#define PWM5CS                                   0x0
#define PWM5CS_address                           0xD9E
#define PWM5CS_position                          0x0
#define PWM5CS_size                              0x3
#define PWM5CS_value_mask                        0x7
#define PWM5CS_clear_mask                        0xF8

#define PWM5CLKCON_CS                            0x0
#define PWM5CLKCON_CS_address                    0xD9E
#define PWM5CLKCON_CS_position                   0x0
#define PWM5CLKCON_CS_size                       0x2
#define PWM5CLKCON_CS_value_mask                 0x3
#define PWM5CLKCON_CS_clear_mask                 0xFC

#define PWM5CS1                                  0x1
#define PWM5CS1_address                          0xD9E
#define PWM5CS1_position                         0x1
#define PWM5CS1_size                             0x1
#define PWM5CS1_value_mask                       0x2
#define PWM5CS1_clear_mask                       0xFD

#define PWM5CLKCON_CS1                           0x1
#define PWM5CLKCON_CS1_address                   0xD9E
#define PWM5CLKCON_CS1_position                  0x1
#define PWM5CLKCON_CS1_size                      0x1
#define PWM5CLKCON_CS1_value_mask                0x2
#define PWM5CLKCON_CS1_clear_mask                0xFD

#define PWM5CS2                                  0x2
#define PWM5CS2_address                          0xD9E
#define PWM5CS2_position                         0x2
#define PWM5CS2_size                             0x1
#define PWM5CS2_value_mask                       0x4
#define PWM5CS2_clear_mask                       0xFB

#define PWM5CLKCON_CS2                           0x2
#define PWM5CLKCON_CS2_address                   0xD9E
#define PWM5CLKCON_CS2_position                  0x2
#define PWM5CLKCON_CS2_size                      0x1
#define PWM5CLKCON_CS2_value_mask                0x4
#define PWM5CLKCON_CS2_clear_mask                0xFB

#define PWM5PS                                   0x4
#define PWM5PS_address                           0xD9E
#define PWM5PS_position                          0x4
#define PWM5PS_size                              0x3
#define PWM5PS_value_mask                        0x70
#define PWM5PS_clear_mask                        0x8F

#define PWM5CLKCON_PS0                           0x4
#define PWM5CLKCON_PS0_address                   0xD9E
#define PWM5CLKCON_PS0_position                  0x4
#define PWM5CLKCON_PS0_size                      0x1
#define PWM5CLKCON_PS0_value_mask                0x10
#define PWM5CLKCON_PS0_clear_mask                0xEF

#define PWM5PS0                                  0x4
#define PWM5PS0_address                          0xD9E
#define PWM5PS0_position                         0x4
#define PWM5PS0_size                             0x1
#define PWM5PS0_value_mask                       0x10
#define PWM5PS0_clear_mask                       0xEF

#define PWM5CLKCON_PS                            0x4
#define PWM5CLKCON_PS_address                    0xD9E
#define PWM5CLKCON_PS_position                   0x4
#define PWM5CLKCON_PS_size                       0x3
#define PWM5CLKCON_PS_value_mask                 0x70
#define PWM5CLKCON_PS_clear_mask                 0x8F

#define PWM5CLKCON_PS1                           0x5
#define PWM5CLKCON_PS1_address                   0xD9E
#define PWM5CLKCON_PS1_position                  0x5
#define PWM5CLKCON_PS1_size                      0x1
#define PWM5CLKCON_PS1_value_mask                0x20
#define PWM5CLKCON_PS1_clear_mask                0xDF

#define PWM5PS1                                  0x5
#define PWM5PS1_address                          0xD9E
#define PWM5PS1_position                         0x5
#define PWM5PS1_size                             0x1
#define PWM5PS1_value_mask                       0x20
#define PWM5PS1_clear_mask                       0xDF

#define PWM5CLKCON_PS2                           0x6
#define PWM5CLKCON_PS2_address                   0xD9E
#define PWM5CLKCON_PS2_position                  0x6
#define PWM5CLKCON_PS2_size                      0x1
#define PWM5CLKCON_PS2_value_mask                0x40
#define PWM5CLKCON_PS2_clear_mask                0xBF

#define PWM5PS2                                  0x6
#define PWM5PS2_address                          0xD9E
#define PWM5PS2_position                         0x6
#define PWM5PS2_size                             0x1
#define PWM5PS2_value_mask                       0x40
#define PWM5PS2_clear_mask                       0xBF


/*--------------------------------#
| PWM5LDCON                 0xD9F |
#---------------------------------#
| LDA | - | - | - | - | - | - | - |
#---------------------------------#
| 7   | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#--------------------------------*/

#define PWM5LDCON                                0x0
#define PWM5LDCON_address                        0xD9F
#define PWM5LDCON_position                       0x0
#define PWM5LDCON_size                           0x8
#define PWM5LDCON_value_mask                     0xFF
#define PWM5LDCON_clear_mask                     0x0

#define LDA                                      0x7
#define LDA_address                              0xD9F
#define LDA_position                             0x7
#define LDA_size                                 0x1
#define LDA_value_mask                           0x80
#define LDA_clear_mask                           0x7F

#define PWM5LD                                   0x7
#define PWM5LD_address                           0xD9F
#define PWM5LD_position                          0x7
#define PWM5LD_size                              0x1
#define PWM5LD_value_mask                        0x80
#define PWM5LD_clear_mask                        0x7F


/*--------------------------------#
| PWM5OFCON                 0xDA0 |
#---------------------------------#
| - | - | - | OFO | - | - | - | - |
#---------------------------------#
| 7 | 6 | 5 | 4   | 3 | 2 | 1 | 0 |
#--------------------------------*/

#define PWM5OFCON                                0x0
#define PWM5OFCON_address                        0xDA0
#define PWM5OFCON_position                       0x0
#define PWM5OFCON_size                           0x8
#define PWM5OFCON_value_mask                     0xFF
#define PWM5OFCON_clear_mask                     0x0

#define OFO                                      0x4
#define OFO_address                              0xDA0
#define OFO_position                             0x4
#define OFO_size                                 0x1
#define OFO_value_mask                           0x10
#define OFO_clear_mask                           0xEF

#define PWM5OFMC                                 0x4
#define PWM5OFMC_address                         0xDA0
#define PWM5OFMC_position                        0x4
#define PWM5OFMC_size                            0x1
#define PWM5OFMC_value_mask                      0x10
#define PWM5OFMC_clear_mask                      0xEF


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
| COG1INPPS               0xE16 |
#-------------------------------#
| - | - | - | COG1INPPS         |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define COG1INPPS                                0x0
#define COG1INPPS_address                        0xE16
#define COG1INPPS_position                       0x0
#define COG1INPPS_size                           0x5
#define COG1INPPS_value_mask                     0x1F
#define COG1INPPS_clear_mask                     0xE0


/*------------------------------#
| T2INPPS                 0xE19 |
#-------------------------------#
| - | - | - | T2INPPS           |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define T2INPPS                                  0x0
#define T2INPPS_address                          0xE19
#define T2INPPS_position                         0x0
#define T2INPPS_size                             0x5
#define T2INPPS_value_mask                       0x1F
#define T2INPPS_clear_mask                       0xE0


/*------------------------------#
| T3CKIPPS                0xE1A |
#-------------------------------#
| - | - | - | T3CKIPPS          |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define T3CKIPPS                                 0x0
#define T3CKIPPS_address                         0xE1A
#define T3CKIPPS_position                        0x0
#define T3CKIPPS_size                            0x5
#define T3CKIPPS_value_mask                      0x1F
#define T3CKIPPS_clear_mask                      0xE0


/*------------------------------#
| T3GPPS                  0xE1B |
#-------------------------------#
| - | - | - | T3GPPS            |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define T3GPPS                                   0x0
#define T3GPPS_address                           0xE1B
#define T3GPPS_position                          0x0
#define T3GPPS_size                              0x5
#define T3GPPS_value_mask                        0x1F
#define T3GPPS_clear_mask                        0xE0


/*------------------------------#
| T4INPPS                 0xE1C |
#-------------------------------#
| - | - | - | T4INPPS           |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define T4INPPS                                  0x0
#define T4INPPS_address                          0xE1C
#define T4INPPS_position                         0x0
#define T4INPPS_size                             0x5
#define T4INPPS_value_mask                       0x1F
#define T4INPPS_clear_mask                       0xE0


/*------------------------------#
| T5CKIPPS                0xE1D |
#-------------------------------#
| - | - | - | T5CKIPPS          |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define T5CKIPPS                                 0x0
#define T5CKIPPS_address                         0xE1D
#define T5CKIPPS_position                        0x0
#define T5CKIPPS_size                            0x5
#define T5CKIPPS_value_mask                      0x1F
#define T5CKIPPS_clear_mask                      0xE0


/*------------------------------#
| T5GPPS                  0xE1E |
#-------------------------------#
| - | - | - | T5GPPS            |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define T5GPPS                                   0x0
#define T5GPPS_address                           0xE1E
#define T5GPPS_position                          0x0
#define T5GPPS_size                              0x5
#define T5GPPS_value_mask                        0x1F
#define T5GPPS_clear_mask                        0xE0


/*------------------------------#
| T6INPPS                 0xE1F |
#-------------------------------#
| - | - | - | T6INPPS           |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define T6INPPS                                  0x0
#define T6INPPS_address                          0xE1F
#define T6INPPS_position                         0x0
#define T6INPPS_size                             0x5
#define T6INPPS_value_mask                       0x1F
#define T6INPPS_clear_mask                       0xE0


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
| PRG1RPPS                0xE2C |
#-------------------------------#
| - | - | - | PRG1RPPS          |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define PRG1RPPS                                 0x0
#define PRG1RPPS_address                         0xE2C
#define PRG1RPPS_position                        0x0
#define PRG1RPPS_size                            0x5
#define PRG1RPPS_value_mask                      0x1F
#define PRG1RPPS_clear_mask                      0xE0


/*------------------------------#
| PRG1FPPS                0xE2D |
#-------------------------------#
| - | - | - | PRG1FPPS          |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define PRG1FPPS                                 0x0
#define PRG1FPPS_address                         0xE2D
#define PRG1FPPS_position                        0x0
#define PRG1FPPS_size                            0x5
#define PRG1FPPS_value_mask                      0x1F
#define PRG1FPPS_clear_mask                      0xE0


/*------------------------------#
| MD1CHPPS                0xE30 |
#-------------------------------#
| - | - | - | MD1CHPPS          |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define MD1CHPPS                                 0x0
#define MD1CHPPS_address                         0xE30
#define MD1CHPPS_position                        0x0
#define MD1CHPPS_size                            0x5
#define MD1CHPPS_value_mask                      0x1F
#define MD1CHPPS_clear_mask                      0xE0


/*------------------------------#
| MD1CLPPS                0xE31 |
#-------------------------------#
| - | - | - | MD1CLPPS          |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define MD1CLPPS                                 0x0
#define MD1CLPPS_address                         0xE31
#define MD1CLPPS_position                        0x0
#define MD1CLPPS_size                            0x5
#define MD1CLPPS_value_mask                      0x1F
#define MD1CLPPS_clear_mask                      0xE0


/*------------------------------#
| MD1MODPPS               0xE32 |
#-------------------------------#
| - | - | - | MD1MODPPS         |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define MD1MODPPS                                0x0
#define MD1MODPPS_address                        0xE32
#define MD1MODPPS_position                       0x0
#define MD1MODPPS_size                           0x5
#define MD1MODPPS_value_mask                     0x1F
#define MD1MODPPS_clear_mask                     0xE0


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


/*---------------------------------------------------#
| CLCDATA                                      0xF0F |
#----------------------------------------------------#
| - | - | - | - | - | MCLC3OUT | MCLC2OUT | MCLC1OUT |
#----------------------------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2        | 1        | 0        |
#---------------------------------------------------*/

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


/*--------------------------------------------------------------------------------------------#
| CLC1CON                                                                               0xF10 |
#---------------------------------------------------------------------------------------------#
| LC1EN | - | LC1OUT | CLC1CON_INTP | LC1INTN | CLC1CON_MODE2 | CLC1CON_MODE1 | CLC1CON_MODE0 |
#---------------------------------------------------------------------------------------------#
| 7     | 6 | 5      | 4            | 3       | 2             | 1             | 0             |
#--------------------------------------------------------------------------------------------*/

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

#define LC1MODE2                                 0x2
#define LC1MODE2_address                         0xF10
#define LC1MODE2_position                        0x2
#define LC1MODE2_size                            0x1
#define LC1MODE2_value_mask                      0x4
#define LC1MODE2_clear_mask                      0xFB

#define CLC1CON_MODE2                            0x2
#define CLC1CON_MODE2_address                    0xF10
#define CLC1CON_MODE2_position                   0x2
#define CLC1CON_MODE2_size                       0x1
#define CLC1CON_MODE2_value_mask                 0x4
#define CLC1CON_MODE2_clear_mask                 0xFB

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

#define LC1OUT                                   0x5
#define LC1OUT_address                           0xF10
#define LC1OUT_position                          0x5
#define LC1OUT_size                              0x1
#define LC1OUT_value_mask                        0x20
#define LC1OUT_clear_mask                        0xDF

#define CLC1CON_OUT                              0x5
#define CLC1CON_OUT_address                      0xF10
#define CLC1CON_OUT_position                     0x5
#define CLC1CON_OUT_size                         0x1
#define CLC1CON_OUT_value_mask                   0x20
#define CLC1CON_OUT_clear_mask                   0xDF

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


/*---------------------------------------------------------------------------------------#
| CLC3CON                                                                          0xF24 |
#----------------------------------------------------------------------------------------#
| LC3EN | - | LC3OUT | CLC3CON_INTP | LC3INTN | CLC3CON_MODE2 | LC3MODE1 | CLC3CON_MODE0 |
#----------------------------------------------------------------------------------------#
| 7     | 6 | 5      | 4            | 3       | 2             | 1        | 0             |
#---------------------------------------------------------------------------------------*/

#define CLC3CON                                  0x0
#define CLC3CON_address                          0xF24
#define CLC3CON_position                         0x0
#define CLC3CON_size                             0x8
#define CLC3CON_value_mask                       0xFF
#define CLC3CON_clear_mask                       0x0

#define LC3MODE                                  0x0
#define LC3MODE_address                          0xF24
#define LC3MODE_position                         0x0
#define LC3MODE_size                             0x3
#define LC3MODE_value_mask                       0x7
#define LC3MODE_clear_mask                       0xF8

#define CLC3CON_MODE0                            0x0
#define CLC3CON_MODE0_address                    0xF24
#define CLC3CON_MODE0_position                   0x0
#define CLC3CON_MODE0_size                       0x1
#define CLC3CON_MODE0_value_mask                 0x1
#define CLC3CON_MODE0_clear_mask                 0xFE

#define LC3MODE0                                 0x0
#define LC3MODE0_address                         0xF24
#define LC3MODE0_position                        0x0
#define LC3MODE0_size                            0x1
#define LC3MODE0_value_mask                      0x1
#define LC3MODE0_clear_mask                      0xFE

#define CLC3CON_MODE                             0x0
#define CLC3CON_MODE_address                     0xF24
#define CLC3CON_MODE_position                    0x0
#define CLC3CON_MODE_size                        0x3
#define CLC3CON_MODE_value_mask                  0x7
#define CLC3CON_MODE_clear_mask                  0xF8

#define CLC3CON_MODE1                            0x1
#define CLC3CON_MODE1_address                    0xF24
#define CLC3CON_MODE1_position                   0x1
#define CLC3CON_MODE1_size                       0x1
#define CLC3CON_MODE1_value_mask                 0x2
#define CLC3CON_MODE1_clear_mask                 0xFD

#define LC3MODE1                                 0x1
#define LC3MODE1_address                         0xF24
#define LC3MODE1_position                        0x1
#define LC3MODE1_size                            0x1
#define LC3MODE1_value_mask                      0x2
#define LC3MODE1_clear_mask                      0xFD

#define CLC3CON_MODE2                            0x2
#define CLC3CON_MODE2_address                    0xF24
#define CLC3CON_MODE2_position                   0x2
#define CLC3CON_MODE2_size                       0x1
#define CLC3CON_MODE2_value_mask                 0x4
#define CLC3CON_MODE2_clear_mask                 0xFB

#define LC3MODE2                                 0x2
#define LC3MODE2_address                         0xF24
#define LC3MODE2_position                        0x2
#define LC3MODE2_size                            0x1
#define LC3MODE2_value_mask                      0x4
#define LC3MODE2_clear_mask                      0xFB

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

#define LC3INTP                                  0x4
#define LC3INTP_address                          0xF24
#define LC3INTP_position                         0x4
#define LC3INTP_size                             0x1
#define LC3INTP_value_mask                       0x10
#define LC3INTP_clear_mask                       0xEF

#define CLC3CON_INTP                             0x4
#define CLC3CON_INTP_address                     0xF24
#define CLC3CON_INTP_position                    0x4
#define CLC3CON_INTP_size                        0x1
#define CLC3CON_INTP_value_mask                  0x10
#define CLC3CON_INTP_clear_mask                  0xEF

#define LC3OUT                                   0x5
#define LC3OUT_address                           0xF24
#define LC3OUT_position                          0x5
#define LC3OUT_size                              0x1
#define LC3OUT_value_mask                        0x20
#define LC3OUT_clear_mask                        0xDF

#define CLC3CON_OUT                              0x5
#define CLC3CON_OUT_address                      0xF24
#define CLC3CON_OUT_position                     0x5
#define CLC3CON_OUT_size                         0x1
#define CLC3CON_OUT_value_mask                   0x20
#define CLC3CON_OUT_clear_mask                   0xDF

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

#endif // _PIC16LF1764_H_
