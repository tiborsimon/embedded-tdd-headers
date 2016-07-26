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

#ifndef _PIC16F1575_H_
#define _PIC16F1575_H_


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


/*-------------------------------------------------------#
| PIR1                                              0x11 |
#--------------------------------------------------------#
| TMR1GIF | ADIF | RCIF | TXIF | - | - | TMR2IF | TMR1IF |
#--------------------------------------------------------#
| 7       | 6    | 5    | 4    | 3 | 2 | 1      | 0      |
#-------------------------------------------------------*/

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


/*------------------------------------#
| PIR2                           0x12 |
#-------------------------------------#
| - | C2IF | C1IF | - | - | - | - | - |
#-------------------------------------#
| 7 | 6    | 5    | 4 | 3 | 2 | 1 | 0 |
#------------------------------------*/

#define PIR2                                     0x0
#define PIR2_address                             0x012
#define PIR2_position                            0x0
#define PIR2_size                                0x8
#define PIR2_value_mask                          0xFF
#define PIR2_clear_mask                          0x0

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


/*--------------------------------------------------#
| PIR3                                         0x13 |
#---------------------------------------------------#
| PWM4IF | PWM3IF | PWM2IF | PWM1IF | - | - | - | - |
#---------------------------------------------------#
| 7      | 6      | 5      | 4      | 3 | 2 | 1 | 0 |
#--------------------------------------------------*/

#define PIR3                                     0x0
#define PIR3_address                             0x013
#define PIR3_position                            0x0
#define PIR3_size                                0x8
#define PIR3_value_mask                          0xFF
#define PIR3_clear_mask                          0x0

#define PWM1IF                                   0x4
#define PWM1IF_address                           0x013
#define PWM1IF_position                          0x4
#define PWM1IF_size                              0x1
#define PWM1IF_value_mask                        0x10
#define PWM1IF_clear_mask                        0xEF

#define PWM2IF                                   0x5
#define PWM2IF_address                           0x013
#define PWM2IF_position                          0x5
#define PWM2IF_size                              0x1
#define PWM2IF_value_mask                        0x20
#define PWM2IF_clear_mask                        0xDF

#define PWM3IF                                   0x6
#define PWM3IF_address                           0x013
#define PWM3IF_position                          0x6
#define PWM3IF_size                              0x1
#define PWM3IF_value_mask                        0x40
#define PWM3IF_clear_mask                        0xBF

#define PWM4IF                                   0x7
#define PWM4IF_address                           0x013
#define PWM4IF_position                          0x7
#define PWM4IF_size                              0x1
#define PWM4IF_value_mask                        0x80
#define PWM4IF_clear_mask                        0x7F


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


/*-------------------------------------------------------#
| PIE1                                              0x91 |
#--------------------------------------------------------#
| TMR1GIE | ADIE | RCIE | TXIE | - | - | TMR2IE | TMR1IE |
#--------------------------------------------------------#
| 7       | 6    | 5    | 4    | 3 | 2 | 1      | 0      |
#-------------------------------------------------------*/

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


/*------------------------------------#
| PIE2                           0x92 |
#-------------------------------------#
| - | C2IE | C1IE | - | - | - | - | - |
#-------------------------------------#
| 7 | 6    | 5    | 4 | 3 | 2 | 1 | 0 |
#------------------------------------*/

#define PIE2                                     0x0
#define PIE2_address                             0x092
#define PIE2_position                            0x0
#define PIE2_size                                0x8
#define PIE2_value_mask                          0xFF
#define PIE2_clear_mask                          0x0

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


/*--------------------------------------------------#
| PIE3                                         0x93 |
#---------------------------------------------------#
| PWM4IE | PWM3IE | PWM2IE | PWM1IE | - | - | - | - |
#---------------------------------------------------#
| 7      | 6      | 5      | 4      | 3 | 2 | 1 | 0 |
#--------------------------------------------------*/

#define PIE3                                     0x0
#define PIE3_address                             0x093
#define PIE3_position                            0x0
#define PIE3_size                                0x8
#define PIE3_value_mask                          0xFF
#define PIE3_clear_mask                          0x0

#define PWM1IE                                   0x4
#define PWM1IE_address                           0x093
#define PWM1IE_position                          0x4
#define PWM1IE_size                              0x1
#define PWM1IE_value_mask                        0x10
#define PWM1IE_clear_mask                        0xEF

#define PWM2IE                                   0x5
#define PWM2IE_address                           0x093
#define PWM2IE_position                          0x5
#define PWM2IE_size                              0x1
#define PWM2IE_value_mask                        0x20
#define PWM2IE_clear_mask                        0xDF

#define PWM3IE                                   0x6
#define PWM3IE_address                           0x093
#define PWM3IE_position                          0x6
#define PWM3IE_size                              0x1
#define PWM3IE_value_mask                        0x40
#define PWM3IE_clear_mask                        0xBF

#define PWM4IE                                   0x7
#define PWM4IE_address                           0x093
#define PWM4IE_position                          0x7
#define PWM4IE_size                              0x1
#define PWM4IE_value_mask                        0x80
#define PWM4IE_clear_mask                        0x7F


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


/*-------------------------------------------------------------#
| OSCSTAT                                                 0x9A |
#--------------------------------------------------------------#
| - | PLLR | OSTS | HFIOFR | HFIOFL | MFIOFR | LFIOFR | HFIOFS |
#--------------------------------------------------------------#
| 7 | 6    | 5    | 4      | 3      | 2      | 1      | 0      |
#-------------------------------------------------------------*/

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


/*----------------------------------------------------#
| ADCON0                                         0x9D |
#-----------------------------------------------------#
| - | CHS4 | CHS3 | CHS2 | CHS1 | CHS0 | nDONE | ADON |
#-----------------------------------------------------#
| 7 | 6    | 5    | 4    | 3    | 2    | 1     | 0    |
#----------------------------------------------------*/

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

#define nDONE                                    0x1
#define nDONE_address                            0x09D
#define nDONE_position                           0x1
#define nDONE_size                               0x1
#define nDONE_value_mask                         0x2
#define nDONE_clear_mask                         0xFD

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

#define TRIGSEL0                                 0x4
#define TRIGSEL0_address                         0x09F
#define TRIGSEL0_position                        0x4
#define TRIGSEL0_size                            0x1
#define TRIGSEL0_value_mask                      0x10
#define TRIGSEL0_clear_mask                      0xEF

#define TRIGSEL                                  0x4
#define TRIGSEL_address                          0x09F
#define TRIGSEL_position                         0x4
#define TRIGSEL_size                             0x4
#define TRIGSEL_value_mask                       0xF0
#define TRIGSEL_clear_mask                       0xF

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


/*-------------------------------------------------------#
| DACCON0                                          0x118 |
#--------------------------------------------------------#
| DACEN | DACLPS | DACOE | - | DACPSS1 | DACPSS0 | - | - |
#--------------------------------------------------------#
| 7     | 6      | 5     | 4 | 3       | 2       | 1 | 0 |
#-------------------------------------------------------*/

#define DACCON0                                  0x0
#define DACCON0_address                          0x118
#define DACCON0_position                         0x0
#define DACCON0_size                             0x8
#define DACCON0_value_mask                       0xFF
#define DACCON0_clear_mask                       0x0

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

#define DACPSS1                                  0x3
#define DACPSS1_address                          0x118
#define DACPSS1_position                         0x3
#define DACPSS1_size                             0x1
#define DACPSS1_value_mask                       0x8
#define DACPSS1_clear_mask                       0xF7

#define DACOE                                    0x5
#define DACOE_address                            0x118
#define DACOE_position                           0x5
#define DACOE_size                               0x1
#define DACOE_value_mask                         0x20
#define DACOE_clear_mask                         0xDF

#define DACLPS                                   0x6
#define DACLPS_address                           0x118
#define DACLPS_position                          0x6
#define DACLPS_size                              0x1
#define DACLPS_value_mask                        0x40
#define DACLPS_clear_mask                        0xBF

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

#define ANSA                                     0x0
#define ANSA_address                             0x18C
#define ANSA_position                            0x0
#define ANSA_size                                0x5
#define ANSA_value_mask                          0x1F
#define ANSA_clear_mask                          0xE0

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

#define ANSC                                     0x0
#define ANSC_address                             0x18E
#define ANSC_position                            0x0
#define ANSC_size                                0x5
#define ANSC_value_mask                          0x1F
#define ANSC_clear_mask                          0xE0

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


/*------------------------------------------------------#
| WPUC                                            0x20E |
#-------------------------------------------------------#
| - | - | WPUC5 | WPUC4 | WPUC3 | WPUC2 | WPUC1 | WPUC0 |
#-------------------------------------------------------#
| 7 | 6 | 5     | 4     | 3     | 2     | 1     | 0     |
#------------------------------------------------------*/

#define WPUC0                                    0x0
#define WPUC0_address                            0x20E
#define WPUC0_position                           0x0
#define WPUC0_size                               0x1
#define WPUC0_value_mask                         0x1
#define WPUC0_clear_mask                         0xFE

#define WPUC                                     0x0
#define WPUC_address                             0x20E
#define WPUC_position                            0x0
#define WPUC_size                                0x6
#define WPUC_value_mask                          0x3F
#define WPUC_clear_mask                          0xC0

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

#define ODA                                      0x0
#define ODA_address                              0x28C
#define ODA_position                             0x0
#define ODA_size                                 0x6
#define ODA_value_mask                           0x3F
#define ODA_clear_mask                           0xC0

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

#define ODC                                      0x0
#define ODC_address                              0x28E
#define ODC_position                             0x0
#define ODC_size                                 0x6
#define ODC_value_mask                           0x3F
#define ODC_clear_mask                           0xC0

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

#define SLRA                                     0x0
#define SLRA_address                             0x30C
#define SLRA_position                            0x0
#define SLRA_size                                0x6
#define SLRA_value_mask                          0x3F
#define SLRA_clear_mask                          0xC0

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

#define SLRC                                     0x0
#define SLRC_address                             0x30E
#define SLRC_position                            0x0
#define SLRC_size                                0x6
#define SLRC_value_mask                          0x3F
#define SLRC_clear_mask                          0xC0

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
#define INLVLA_size                              0x6
#define INLVLA_value_mask                        0x3F
#define INLVLA_clear_mask                        0xC0

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
#define INLVLC_size                              0x6
#define INLVLC_value_mask                        0x3F
#define INLVLC_clear_mask                        0xC0

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


/*------------------------------------------------------------#
| IOCCP                                                 0x397 |
#-------------------------------------------------------------#
| - | - | IOCCP5 | IOCCP4 | IOCCP3 | IOCCP2 | IOCCP1 | IOCCP0 |
#-------------------------------------------------------------#
| 7 | 6 | 5      | 4      | 3      | 2      | 1      | 0      |
#------------------------------------------------------------*/

#define IOCCP0                                   0x0
#define IOCCP0_address                           0x397
#define IOCCP0_position                          0x0
#define IOCCP0_size                              0x1
#define IOCCP0_value_mask                        0x1
#define IOCCP0_clear_mask                        0xFE

#define IOCCP                                    0x0
#define IOCCP_address                            0x397
#define IOCCP_position                           0x0
#define IOCCP_size                               0x6
#define IOCCP_value_mask                         0x3F
#define IOCCP_clear_mask                         0xC0

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

#define IOCCN0                                   0x0
#define IOCCN0_address                           0x398
#define IOCCN0_position                          0x0
#define IOCCN0_size                              0x1
#define IOCCN0_value_mask                        0x1
#define IOCCN0_clear_mask                        0xFE

#define IOCCN                                    0x0
#define IOCCN_address                            0x398
#define IOCCN_position                           0x0
#define IOCCN_size                               0x6
#define IOCCN_value_mask                         0x3F
#define IOCCN_clear_mask                         0xC0

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

#define IOCCF0                                   0x0
#define IOCCF0_address                           0x399
#define IOCCF0_position                          0x0
#define IOCCF0_size                              0x1
#define IOCCF0_value_mask                        0x1
#define IOCCF0_clear_mask                        0xFE

#define IOCCF                                    0x0
#define IOCCF_address                            0x399
#define IOCCF_position                           0x0
#define IOCCF_size                               0x6
#define IOCCF_value_mask                         0x3F
#define IOCCF_clear_mask                         0xC0

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


/*--------------------------------------------------------------#
| CWG1CON2                                                0x695 |
#---------------------------------------------------------------#
| G1ASE | G1ARSEN | - | - | G1ASDSC2 | G1ASDSC1 | G1ASDSPPS | - |
#---------------------------------------------------------------#
| 7     | 6       | 5 | 4 | 3        | 2        | 1         | 0 |
#--------------------------------------------------------------*/

#define CWG1CON2                                 0x0
#define CWG1CON2_address                         0x695
#define CWG1CON2_position                        0x0
#define CWG1CON2_size                            0x8
#define CWG1CON2_value_mask                      0xFF
#define CWG1CON2_clear_mask                      0x0

#define G1ASDSPPS                                0x1
#define G1ASDSPPS_address                        0x695
#define G1ASDSPPS_position                       0x1
#define G1ASDSPPS_size                           0x1
#define G1ASDSPPS_value_mask                     0x2
#define G1ASDSPPS_clear_mask                     0xFD

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


/*-------------------------------------------------------#
| PWMEN                                            0xD8E |
#--------------------------------------------------------#
| - | - | - | - | PWM4EN_A | MPWM3EN | MPWM2EN | MPWM1EN |
#--------------------------------------------------------#
| 7 | 6 | 5 | 4 | 3        | 2       | 1       | 0       |
#-------------------------------------------------------*/

#define PWMEN                                    0x0
#define PWMEN_address                            0xD8E
#define PWMEN_position                           0x0
#define PWMEN_size                               0x8
#define PWMEN_value_mask                         0xFF
#define PWMEN_clear_mask                         0x0

#define MPWM1EN                                  0x0
#define MPWM1EN_address                          0xD8E
#define MPWM1EN_position                         0x0
#define MPWM1EN_size                             0x1
#define MPWM1EN_value_mask                       0x1
#define MPWM1EN_clear_mask                       0xFE

#define PWM1EN_A                                 0x0
#define PWM1EN_A_address                         0xD8E
#define PWM1EN_A_position                        0x0
#define PWM1EN_A_size                            0x1
#define PWM1EN_A_value_mask                      0x1
#define PWM1EN_A_clear_mask                      0xFE

#define MPWM2EN                                  0x1
#define MPWM2EN_address                          0xD8E
#define MPWM2EN_position                         0x1
#define MPWM2EN_size                             0x1
#define MPWM2EN_value_mask                       0x2
#define MPWM2EN_clear_mask                       0xFD

#define PWM2EN_A                                 0x1
#define PWM2EN_A_address                         0xD8E
#define PWM2EN_A_position                        0x1
#define PWM2EN_A_size                            0x1
#define PWM2EN_A_value_mask                      0x2
#define PWM2EN_A_clear_mask                      0xFD

#define MPWM3EN                                  0x2
#define MPWM3EN_address                          0xD8E
#define MPWM3EN_position                         0x2
#define MPWM3EN_size                             0x1
#define MPWM3EN_value_mask                       0x4
#define MPWM3EN_clear_mask                       0xFB

#define PWM3EN_A                                 0x2
#define PWM3EN_A_address                         0xD8E
#define PWM3EN_A_position                        0x2
#define PWM3EN_A_size                            0x1
#define PWM3EN_A_value_mask                      0x4
#define PWM3EN_A_clear_mask                      0xFB

#define PWM4EN_A                                 0x3
#define PWM4EN_A_address                         0xD8E
#define PWM4EN_A_position                        0x3
#define PWM4EN_A_size                            0x1
#define PWM4EN_A_value_mask                      0x8
#define PWM4EN_A_clear_mask                      0xF7


/*----------------------------------------------------------#
| PWMLD                                               0xD8F |
#-----------------------------------------------------------#
| - | - | - | - | PWM4LDA_A | PWM3LDA_A | MPWM2LD | MPWM1LD |
#-----------------------------------------------------------#
| 7 | 6 | 5 | 4 | 3         | 2         | 1       | 0       |
#----------------------------------------------------------*/

#define PWMLD                                    0x0
#define PWMLD_address                            0xD8F
#define PWMLD_position                           0x0
#define PWMLD_size                               0x8
#define PWMLD_value_mask                         0xFF
#define PWMLD_clear_mask                         0x0

#define MPWM1LD                                  0x0
#define MPWM1LD_address                          0xD8F
#define MPWM1LD_position                         0x0
#define MPWM1LD_size                             0x1
#define MPWM1LD_value_mask                       0x1
#define MPWM1LD_clear_mask                       0xFE

#define PWM1LDA_A                                0x0
#define PWM1LDA_A_address                        0xD8F
#define PWM1LDA_A_position                       0x0
#define PWM1LDA_A_size                           0x1
#define PWM1LDA_A_value_mask                     0x1
#define PWM1LDA_A_clear_mask                     0xFE

#define MPWM2LD                                  0x1
#define MPWM2LD_address                          0xD8F
#define MPWM2LD_position                         0x1
#define MPWM2LD_size                             0x1
#define MPWM2LD_value_mask                       0x2
#define MPWM2LD_clear_mask                       0xFD

#define PWM2LDA_A                                0x1
#define PWM2LDA_A_address                        0xD8F
#define PWM2LDA_A_position                       0x1
#define PWM2LDA_A_size                           0x1
#define PWM2LDA_A_value_mask                     0x2
#define PWM2LDA_A_clear_mask                     0xFD

#define PWM3LDA_A                                0x2
#define PWM3LDA_A_address                        0xD8F
#define PWM3LDA_A_position                       0x2
#define PWM3LDA_A_size                           0x1
#define PWM3LDA_A_value_mask                     0x4
#define PWM3LDA_A_clear_mask                     0xFB

#define MPWM3LD                                  0x2
#define MPWM3LD_address                          0xD8F
#define MPWM3LD_position                         0x2
#define MPWM3LD_size                             0x1
#define MPWM3LD_value_mask                       0x4
#define MPWM3LD_clear_mask                       0xFB

#define PWM4LDA_A                                0x3
#define PWM4LDA_A_address                        0xD8F
#define PWM4LDA_A_position                       0x3
#define PWM4LDA_A_size                           0x1
#define PWM4LDA_A_value_mask                     0x8
#define PWM4LDA_A_clear_mask                     0xF7


/*-------------------------------------------------------------#
| PWMOUT                                                 0xD90 |
#--------------------------------------------------------------#
| - | - | - | - | PWM4OUT_A | PWM3OUT_A | MPWM2OUT | PWM1OUT_A |
#--------------------------------------------------------------#
| 7 | 6 | 5 | 4 | 3         | 2         | 1        | 0         |
#-------------------------------------------------------------*/

#define PWMOUT                                   0x0
#define PWMOUT_address                           0xD90
#define PWMOUT_position                          0x0
#define PWMOUT_size                              0x8
#define PWMOUT_value_mask                        0xFF
#define PWMOUT_clear_mask                        0x0

#define PWM1OUT_A                                0x0
#define PWM1OUT_A_address                        0xD90
#define PWM1OUT_A_position                       0x0
#define PWM1OUT_A_size                           0x1
#define PWM1OUT_A_value_mask                     0x1
#define PWM1OUT_A_clear_mask                     0xFE

#define MPWM1OUT                                 0x0
#define MPWM1OUT_address                         0xD90
#define MPWM1OUT_position                        0x0
#define MPWM1OUT_size                            0x1
#define MPWM1OUT_value_mask                      0x1
#define MPWM1OUT_clear_mask                      0xFE

#define MPWM2OUT                                 0x1
#define MPWM2OUT_address                         0xD90
#define MPWM2OUT_position                        0x1
#define MPWM2OUT_size                            0x1
#define MPWM2OUT_value_mask                      0x2
#define MPWM2OUT_clear_mask                      0xFD

#define PWM2OUT_A                                0x1
#define PWM2OUT_A_address                        0xD90
#define PWM2OUT_A_position                       0x1
#define PWM2OUT_A_size                           0x1
#define PWM2OUT_A_value_mask                     0x2
#define PWM2OUT_A_clear_mask                     0xFD

#define MPWM3OUT                                 0x2
#define MPWM3OUT_address                         0xD90
#define MPWM3OUT_position                        0x2
#define MPWM3OUT_size                            0x1
#define MPWM3OUT_value_mask                      0x4
#define MPWM3OUT_clear_mask                      0xFB

#define PWM3OUT_A                                0x2
#define PWM3OUT_A_address                        0xD90
#define PWM3OUT_A_position                       0x2
#define PWM3OUT_A_size                           0x1
#define PWM3OUT_A_value_mask                     0x4
#define PWM3OUT_A_clear_mask                     0xFB

#define PWM4OUT_A                                0x3
#define PWM4OUT_A_address                        0xD90
#define PWM4OUT_A_position                       0x3
#define PWM4OUT_A_size                           0x1
#define PWM4OUT_A_value_mask                     0x8
#define PWM4OUT_A_clear_mask                     0xF7


/*--------------------------------------------------------------------------------------#
| PWM1PHL                                                                         0xD91 |
#---------------------------------------------------------------------------------------#
| PWM1PHL7 | PWM1PHL6 | PWM1PHL5 | PWM1PHL4 | PWM1PHL3 | PWM1PHL2 | PWM1PHL1 | PWM1PHL0 |
#---------------------------------------------------------------------------------------#
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
#--------------------------------------------------------------------------------------*/

#define PWM1PHL                                  0x0
#define PWM1PHL_address                          0xD91
#define PWM1PHL_position                         0x0
#define PWM1PHL_size                             0x8
#define PWM1PHL_value_mask                       0xFF
#define PWM1PHL_clear_mask                       0x0

#define PWM1PHL0                                 0x0
#define PWM1PHL0_address                         0xD91
#define PWM1PHL0_position                        0x0
#define PWM1PHL0_size                            0x1
#define PWM1PHL0_value_mask                      0x1
#define PWM1PHL0_clear_mask                      0xFE

#define PWM1PHL_PH                               0x0
#define PWM1PHL_PH_address                       0xD91
#define PWM1PHL_PH_position                      0x0
#define PWM1PHL_PH_size                          0x8
#define PWM1PHL_PH_value_mask                    0xFF
#define PWM1PHL_PH_clear_mask                    0x0

#define PWM1PHL1                                 0x1
#define PWM1PHL1_address                         0xD91
#define PWM1PHL1_position                        0x1
#define PWM1PHL1_size                            0x1
#define PWM1PHL1_value_mask                      0x2
#define PWM1PHL1_clear_mask                      0xFD

#define PWM1PHL2                                 0x2
#define PWM1PHL2_address                         0xD91
#define PWM1PHL2_position                        0x2
#define PWM1PHL2_size                            0x1
#define PWM1PHL2_value_mask                      0x4
#define PWM1PHL2_clear_mask                      0xFB

#define PWM1PHL3                                 0x3
#define PWM1PHL3_address                         0xD91
#define PWM1PHL3_position                        0x3
#define PWM1PHL3_size                            0x1
#define PWM1PHL3_value_mask                      0x8
#define PWM1PHL3_clear_mask                      0xF7

#define PWM1PHL4                                 0x4
#define PWM1PHL4_address                         0xD91
#define PWM1PHL4_position                        0x4
#define PWM1PHL4_size                            0x1
#define PWM1PHL4_value_mask                      0x10
#define PWM1PHL4_clear_mask                      0xEF

#define PWM1PHL5                                 0x5
#define PWM1PHL5_address                         0xD91
#define PWM1PHL5_position                        0x5
#define PWM1PHL5_size                            0x1
#define PWM1PHL5_value_mask                      0x20
#define PWM1PHL5_clear_mask                      0xDF

#define PWM1PHL6                                 0x6
#define PWM1PHL6_address                         0xD91
#define PWM1PHL6_position                        0x6
#define PWM1PHL6_size                            0x1
#define PWM1PHL6_value_mask                      0x40
#define PWM1PHL6_clear_mask                      0xBF

#define PWM1PHL7                                 0x7
#define PWM1PHL7_address                         0xD91
#define PWM1PHL7_position                        0x7
#define PWM1PHL7_size                            0x1
#define PWM1PHL7_value_mask                      0x80
#define PWM1PHL7_clear_mask                      0x7F


/*--------------------------------------------------------------------------------------#
| PWM1PHH                                                                         0xD92 |
#---------------------------------------------------------------------------------------#
| PWM1PHH7 | PWM1PHH6 | PWM1PHH5 | PWM1PHH4 | PWM1PHH3 | PWM1PHH2 | PWM1PHH1 | PWM1PHH0 |
#---------------------------------------------------------------------------------------#
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
#--------------------------------------------------------------------------------------*/

#define PWM1PHH                                  0x0
#define PWM1PHH_address                          0xD92
#define PWM1PHH_position                         0x0
#define PWM1PHH_size                             0x8
#define PWM1PHH_value_mask                       0xFF
#define PWM1PHH_clear_mask                       0x0

#define PWM1PHH0                                 0x0
#define PWM1PHH0_address                         0xD92
#define PWM1PHH0_position                        0x0
#define PWM1PHH0_size                            0x1
#define PWM1PHH0_value_mask                      0x1
#define PWM1PHH0_clear_mask                      0xFE

#define PWM1PHH_PH                               0x0
#define PWM1PHH_PH_address                       0xD92
#define PWM1PHH_PH_position                      0x0
#define PWM1PHH_PH_size                          0x8
#define PWM1PHH_PH_value_mask                    0xFF
#define PWM1PHH_PH_clear_mask                    0x0

#define PWM1PHH1                                 0x1
#define PWM1PHH1_address                         0xD92
#define PWM1PHH1_position                        0x1
#define PWM1PHH1_size                            0x1
#define PWM1PHH1_value_mask                      0x2
#define PWM1PHH1_clear_mask                      0xFD

#define PWM1PHH2                                 0x2
#define PWM1PHH2_address                         0xD92
#define PWM1PHH2_position                        0x2
#define PWM1PHH2_size                            0x1
#define PWM1PHH2_value_mask                      0x4
#define PWM1PHH2_clear_mask                      0xFB

#define PWM1PHH3                                 0x3
#define PWM1PHH3_address                         0xD92
#define PWM1PHH3_position                        0x3
#define PWM1PHH3_size                            0x1
#define PWM1PHH3_value_mask                      0x8
#define PWM1PHH3_clear_mask                      0xF7

#define PWM1PHH4                                 0x4
#define PWM1PHH4_address                         0xD92
#define PWM1PHH4_position                        0x4
#define PWM1PHH4_size                            0x1
#define PWM1PHH4_value_mask                      0x10
#define PWM1PHH4_clear_mask                      0xEF

#define PWM1PHH5                                 0x5
#define PWM1PHH5_address                         0xD92
#define PWM1PHH5_position                        0x5
#define PWM1PHH5_size                            0x1
#define PWM1PHH5_value_mask                      0x20
#define PWM1PHH5_clear_mask                      0xDF

#define PWM1PHH6                                 0x6
#define PWM1PHH6_address                         0xD92
#define PWM1PHH6_position                        0x6
#define PWM1PHH6_size                            0x1
#define PWM1PHH6_value_mask                      0x40
#define PWM1PHH6_clear_mask                      0xBF

#define PWM1PHH7                                 0x7
#define PWM1PHH7_address                         0xD92
#define PWM1PHH7_position                        0x7
#define PWM1PHH7_size                            0x1
#define PWM1PHH7_value_mask                      0x80
#define PWM1PHH7_clear_mask                      0x7F


/*--------------------------------------------------------------------------------------#
| PWM1DCL                                                                         0xD93 |
#---------------------------------------------------------------------------------------#
| PWM1DCL7 | PWM1DCL6 | PWM1DCL5 | PWM1DCL4 | PWM1DCL3 | PWM1DCL2 | PWM1DCL1 | PWM1DCL0 |
#---------------------------------------------------------------------------------------#
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
#--------------------------------------------------------------------------------------*/

#define PWM1DCL_DC                               0x0
#define PWM1DCL_DC_address                       0xD93
#define PWM1DCL_DC_position                      0x0
#define PWM1DCL_DC_size                          0x8
#define PWM1DCL_DC_value_mask                    0xFF
#define PWM1DCL_DC_clear_mask                    0x0

#define PWM1DCL                                  0x0
#define PWM1DCL_address                          0xD93
#define PWM1DCL_position                         0x0
#define PWM1DCL_size                             0x8
#define PWM1DCL_value_mask                       0xFF
#define PWM1DCL_clear_mask                       0x0

#define PWM1DCL0                                 0x0
#define PWM1DCL0_address                         0xD93
#define PWM1DCL0_position                        0x0
#define PWM1DCL0_size                            0x1
#define PWM1DCL0_value_mask                      0x1
#define PWM1DCL0_clear_mask                      0xFE

#define PWM1DCL1                                 0x1
#define PWM1DCL1_address                         0xD93
#define PWM1DCL1_position                        0x1
#define PWM1DCL1_size                            0x1
#define PWM1DCL1_value_mask                      0x2
#define PWM1DCL1_clear_mask                      0xFD

#define PWM1DCL2                                 0x2
#define PWM1DCL2_address                         0xD93
#define PWM1DCL2_position                        0x2
#define PWM1DCL2_size                            0x1
#define PWM1DCL2_value_mask                      0x4
#define PWM1DCL2_clear_mask                      0xFB

#define PWM1DCL3                                 0x3
#define PWM1DCL3_address                         0xD93
#define PWM1DCL3_position                        0x3
#define PWM1DCL3_size                            0x1
#define PWM1DCL3_value_mask                      0x8
#define PWM1DCL3_clear_mask                      0xF7

#define PWM1DCL4                                 0x4
#define PWM1DCL4_address                         0xD93
#define PWM1DCL4_position                        0x4
#define PWM1DCL4_size                            0x1
#define PWM1DCL4_value_mask                      0x10
#define PWM1DCL4_clear_mask                      0xEF

#define PWM1DCL5                                 0x5
#define PWM1DCL5_address                         0xD93
#define PWM1DCL5_position                        0x5
#define PWM1DCL5_size                            0x1
#define PWM1DCL5_value_mask                      0x20
#define PWM1DCL5_clear_mask                      0xDF

#define PWM1DCL6                                 0x6
#define PWM1DCL6_address                         0xD93
#define PWM1DCL6_position                        0x6
#define PWM1DCL6_size                            0x1
#define PWM1DCL6_value_mask                      0x40
#define PWM1DCL6_clear_mask                      0xBF

#define PWM1DCL7                                 0x7
#define PWM1DCL7_address                         0xD93
#define PWM1DCL7_position                        0x7
#define PWM1DCL7_size                            0x1
#define PWM1DCL7_value_mask                      0x80
#define PWM1DCL7_clear_mask                      0x7F


/*--------------------------------------------------------------------------------------#
| PWM1DCH                                                                         0xD94 |
#---------------------------------------------------------------------------------------#
| PWM1DCH7 | PWM1DCH6 | PWM1DCH5 | PWM1DCH4 | PWM1DCH3 | PWM1DCH2 | PWM1DCH1 | PWM1DCH0 |
#---------------------------------------------------------------------------------------#
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
#--------------------------------------------------------------------------------------*/

#define PWM1DCH_DC                               0x0
#define PWM1DCH_DC_address                       0xD94
#define PWM1DCH_DC_position                      0x0
#define PWM1DCH_DC_size                          0x8
#define PWM1DCH_DC_value_mask                    0xFF
#define PWM1DCH_DC_clear_mask                    0x0

#define PWM1DCH                                  0x0
#define PWM1DCH_address                          0xD94
#define PWM1DCH_position                         0x0
#define PWM1DCH_size                             0x8
#define PWM1DCH_value_mask                       0xFF
#define PWM1DCH_clear_mask                       0x0

#define PWM1DCH0                                 0x0
#define PWM1DCH0_address                         0xD94
#define PWM1DCH0_position                        0x0
#define PWM1DCH0_size                            0x1
#define PWM1DCH0_value_mask                      0x1
#define PWM1DCH0_clear_mask                      0xFE

#define PWM1DCH1                                 0x1
#define PWM1DCH1_address                         0xD94
#define PWM1DCH1_position                        0x1
#define PWM1DCH1_size                            0x1
#define PWM1DCH1_value_mask                      0x2
#define PWM1DCH1_clear_mask                      0xFD

#define PWM1DCH2                                 0x2
#define PWM1DCH2_address                         0xD94
#define PWM1DCH2_position                        0x2
#define PWM1DCH2_size                            0x1
#define PWM1DCH2_value_mask                      0x4
#define PWM1DCH2_clear_mask                      0xFB

#define PWM1DCH3                                 0x3
#define PWM1DCH3_address                         0xD94
#define PWM1DCH3_position                        0x3
#define PWM1DCH3_size                            0x1
#define PWM1DCH3_value_mask                      0x8
#define PWM1DCH3_clear_mask                      0xF7

#define PWM1DCH4                                 0x4
#define PWM1DCH4_address                         0xD94
#define PWM1DCH4_position                        0x4
#define PWM1DCH4_size                            0x1
#define PWM1DCH4_value_mask                      0x10
#define PWM1DCH4_clear_mask                      0xEF

#define PWM1DCH5                                 0x5
#define PWM1DCH5_address                         0xD94
#define PWM1DCH5_position                        0x5
#define PWM1DCH5_size                            0x1
#define PWM1DCH5_value_mask                      0x20
#define PWM1DCH5_clear_mask                      0xDF

#define PWM1DCH6                                 0x6
#define PWM1DCH6_address                         0xD94
#define PWM1DCH6_position                        0x6
#define PWM1DCH6_size                            0x1
#define PWM1DCH6_value_mask                      0x40
#define PWM1DCH6_clear_mask                      0xBF

#define PWM1DCH7                                 0x7
#define PWM1DCH7_address                         0xD94
#define PWM1DCH7_position                        0x7
#define PWM1DCH7_size                            0x1
#define PWM1DCH7_value_mask                      0x80
#define PWM1DCH7_clear_mask                      0x7F


/*--------------------------------------------------------------------------------------#
| PWM1PRL                                                                         0xD95 |
#---------------------------------------------------------------------------------------#
| PWM1PRL7 | PWM1PRL6 | PWM1PRL5 | PWM1PRL4 | PWM1PRL3 | PWM1PRL2 | PWM1PRL1 | PWM1PRL0 |
#---------------------------------------------------------------------------------------#
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
#--------------------------------------------------------------------------------------*/

#define PWM1PRL                                  0x0
#define PWM1PRL_address                          0xD95
#define PWM1PRL_position                         0x0
#define PWM1PRL_size                             0x8
#define PWM1PRL_value_mask                       0xFF
#define PWM1PRL_clear_mask                       0x0

#define PWM1PRL0                                 0x0
#define PWM1PRL0_address                         0xD95
#define PWM1PRL0_position                        0x0
#define PWM1PRL0_size                            0x1
#define PWM1PRL0_value_mask                      0x1
#define PWM1PRL0_clear_mask                      0xFE

#define PWM1PRL_PR                               0x0
#define PWM1PRL_PR_address                       0xD95
#define PWM1PRL_PR_position                      0x0
#define PWM1PRL_PR_size                          0x8
#define PWM1PRL_PR_value_mask                    0xFF
#define PWM1PRL_PR_clear_mask                    0x0

#define PWM1PRL1                                 0x1
#define PWM1PRL1_address                         0xD95
#define PWM1PRL1_position                        0x1
#define PWM1PRL1_size                            0x1
#define PWM1PRL1_value_mask                      0x2
#define PWM1PRL1_clear_mask                      0xFD

#define PWM1PRL2                                 0x2
#define PWM1PRL2_address                         0xD95
#define PWM1PRL2_position                        0x2
#define PWM1PRL2_size                            0x1
#define PWM1PRL2_value_mask                      0x4
#define PWM1PRL2_clear_mask                      0xFB

#define PWM1PRL3                                 0x3
#define PWM1PRL3_address                         0xD95
#define PWM1PRL3_position                        0x3
#define PWM1PRL3_size                            0x1
#define PWM1PRL3_value_mask                      0x8
#define PWM1PRL3_clear_mask                      0xF7

#define PWM1PRL4                                 0x4
#define PWM1PRL4_address                         0xD95
#define PWM1PRL4_position                        0x4
#define PWM1PRL4_size                            0x1
#define PWM1PRL4_value_mask                      0x10
#define PWM1PRL4_clear_mask                      0xEF

#define PWM1PRL5                                 0x5
#define PWM1PRL5_address                         0xD95
#define PWM1PRL5_position                        0x5
#define PWM1PRL5_size                            0x1
#define PWM1PRL5_value_mask                      0x20
#define PWM1PRL5_clear_mask                      0xDF

#define PWM1PRL6                                 0x6
#define PWM1PRL6_address                         0xD95
#define PWM1PRL6_position                        0x6
#define PWM1PRL6_size                            0x1
#define PWM1PRL6_value_mask                      0x40
#define PWM1PRL6_clear_mask                      0xBF

#define PWM1PRL7                                 0x7
#define PWM1PRL7_address                         0xD95
#define PWM1PRL7_position                        0x7
#define PWM1PRL7_size                            0x1
#define PWM1PRL7_value_mask                      0x80
#define PWM1PRL7_clear_mask                      0x7F


/*--------------------------------------------------------------------------------------#
| PWM1PRH                                                                         0xD96 |
#---------------------------------------------------------------------------------------#
| PWM1PRH7 | PWM1PRH6 | PWM1PRH5 | PWM1PRH4 | PWM1PRH3 | PWM1PRH2 | PWM1PRH1 | PWM1PRH0 |
#---------------------------------------------------------------------------------------#
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
#--------------------------------------------------------------------------------------*/

#define PWM1PRH                                  0x0
#define PWM1PRH_address                          0xD96
#define PWM1PRH_position                         0x0
#define PWM1PRH_size                             0x8
#define PWM1PRH_value_mask                       0xFF
#define PWM1PRH_clear_mask                       0x0

#define PWM1PRH_PR                               0x0
#define PWM1PRH_PR_address                       0xD96
#define PWM1PRH_PR_position                      0x0
#define PWM1PRH_PR_size                          0x8
#define PWM1PRH_PR_value_mask                    0xFF
#define PWM1PRH_PR_clear_mask                    0x0

#define PWM1PRH0                                 0x0
#define PWM1PRH0_address                         0xD96
#define PWM1PRH0_position                        0x0
#define PWM1PRH0_size                            0x1
#define PWM1PRH0_value_mask                      0x1
#define PWM1PRH0_clear_mask                      0xFE

#define PWM1PRH1                                 0x1
#define PWM1PRH1_address                         0xD96
#define PWM1PRH1_position                        0x1
#define PWM1PRH1_size                            0x1
#define PWM1PRH1_value_mask                      0x2
#define PWM1PRH1_clear_mask                      0xFD

#define PWM1PRH2                                 0x2
#define PWM1PRH2_address                         0xD96
#define PWM1PRH2_position                        0x2
#define PWM1PRH2_size                            0x1
#define PWM1PRH2_value_mask                      0x4
#define PWM1PRH2_clear_mask                      0xFB

#define PWM1PRH3                                 0x3
#define PWM1PRH3_address                         0xD96
#define PWM1PRH3_position                        0x3
#define PWM1PRH3_size                            0x1
#define PWM1PRH3_value_mask                      0x8
#define PWM1PRH3_clear_mask                      0xF7

#define PWM1PRH4                                 0x4
#define PWM1PRH4_address                         0xD96
#define PWM1PRH4_position                        0x4
#define PWM1PRH4_size                            0x1
#define PWM1PRH4_value_mask                      0x10
#define PWM1PRH4_clear_mask                      0xEF

#define PWM1PRH5                                 0x5
#define PWM1PRH5_address                         0xD96
#define PWM1PRH5_position                        0x5
#define PWM1PRH5_size                            0x1
#define PWM1PRH5_value_mask                      0x20
#define PWM1PRH5_clear_mask                      0xDF

#define PWM1PRH6                                 0x6
#define PWM1PRH6_address                         0xD96
#define PWM1PRH6_position                        0x6
#define PWM1PRH6_size                            0x1
#define PWM1PRH6_value_mask                      0x40
#define PWM1PRH6_clear_mask                      0xBF

#define PWM1PRH7                                 0x7
#define PWM1PRH7_address                         0xD96
#define PWM1PRH7_position                        0x7
#define PWM1PRH7_size                            0x1
#define PWM1PRH7_value_mask                      0x80
#define PWM1PRH7_clear_mask                      0x7F


/*--------------------------------------------------------------------------------------#
| PWM1OFL                                                                         0xD97 |
#---------------------------------------------------------------------------------------#
| PWM1OFL7 | PWM1OFL6 | PWM1OFL5 | PWM1OFL4 | PWM1OFL3 | PWM1OFL2 | PWM1OFL1 | PWM1OFL0 |
#---------------------------------------------------------------------------------------#
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
#--------------------------------------------------------------------------------------*/

#define PWM1OFL0                                 0x0
#define PWM1OFL0_address                         0xD97
#define PWM1OFL0_position                        0x0
#define PWM1OFL0_size                            0x1
#define PWM1OFL0_value_mask                      0x1
#define PWM1OFL0_clear_mask                      0xFE

#define PWM1OFL_OF                               0x0
#define PWM1OFL_OF_address                       0xD97
#define PWM1OFL_OF_position                      0x0
#define PWM1OFL_OF_size                          0x8
#define PWM1OFL_OF_value_mask                    0xFF
#define PWM1OFL_OF_clear_mask                    0x0

#define PWM1OFL                                  0x0
#define PWM1OFL_address                          0xD97
#define PWM1OFL_position                         0x0
#define PWM1OFL_size                             0x8
#define PWM1OFL_value_mask                       0xFF
#define PWM1OFL_clear_mask                       0x0

#define PWM1OFL1                                 0x1
#define PWM1OFL1_address                         0xD97
#define PWM1OFL1_position                        0x1
#define PWM1OFL1_size                            0x1
#define PWM1OFL1_value_mask                      0x2
#define PWM1OFL1_clear_mask                      0xFD

#define PWM1OFL2                                 0x2
#define PWM1OFL2_address                         0xD97
#define PWM1OFL2_position                        0x2
#define PWM1OFL2_size                            0x1
#define PWM1OFL2_value_mask                      0x4
#define PWM1OFL2_clear_mask                      0xFB

#define PWM1OFL3                                 0x3
#define PWM1OFL3_address                         0xD97
#define PWM1OFL3_position                        0x3
#define PWM1OFL3_size                            0x1
#define PWM1OFL3_value_mask                      0x8
#define PWM1OFL3_clear_mask                      0xF7

#define PWM1OFL4                                 0x4
#define PWM1OFL4_address                         0xD97
#define PWM1OFL4_position                        0x4
#define PWM1OFL4_size                            0x1
#define PWM1OFL4_value_mask                      0x10
#define PWM1OFL4_clear_mask                      0xEF

#define PWM1OFL5                                 0x5
#define PWM1OFL5_address                         0xD97
#define PWM1OFL5_position                        0x5
#define PWM1OFL5_size                            0x1
#define PWM1OFL5_value_mask                      0x20
#define PWM1OFL5_clear_mask                      0xDF

#define PWM1OFL6                                 0x6
#define PWM1OFL6_address                         0xD97
#define PWM1OFL6_position                        0x6
#define PWM1OFL6_size                            0x1
#define PWM1OFL6_value_mask                      0x40
#define PWM1OFL6_clear_mask                      0xBF

#define PWM1OFL7                                 0x7
#define PWM1OFL7_address                         0xD97
#define PWM1OFL7_position                        0x7
#define PWM1OFL7_size                            0x1
#define PWM1OFL7_value_mask                      0x80
#define PWM1OFL7_clear_mask                      0x7F


/*--------------------------------------------------------------------------------------#
| PWM1OFH                                                                         0xD98 |
#---------------------------------------------------------------------------------------#
| PWM1OFH7 | PWM1OFH6 | PWM1OFH5 | PWM1OFH4 | PWM1OFH3 | PWM1OFH2 | PWM1OFH1 | PWM1OFH0 |
#---------------------------------------------------------------------------------------#
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
#--------------------------------------------------------------------------------------*/

#define PWM1OFH_OF                               0x0
#define PWM1OFH_OF_address                       0xD98
#define PWM1OFH_OF_position                      0x0
#define PWM1OFH_OF_size                          0x8
#define PWM1OFH_OF_value_mask                    0xFF
#define PWM1OFH_OF_clear_mask                    0x0

#define PWM1OFH                                  0x0
#define PWM1OFH_address                          0xD98
#define PWM1OFH_position                         0x0
#define PWM1OFH_size                             0x8
#define PWM1OFH_value_mask                       0xFF
#define PWM1OFH_clear_mask                       0x0

#define PWM1OFH0                                 0x0
#define PWM1OFH0_address                         0xD98
#define PWM1OFH0_position                        0x0
#define PWM1OFH0_size                            0x1
#define PWM1OFH0_value_mask                      0x1
#define PWM1OFH0_clear_mask                      0xFE

#define PWM1OFH1                                 0x1
#define PWM1OFH1_address                         0xD98
#define PWM1OFH1_position                        0x1
#define PWM1OFH1_size                            0x1
#define PWM1OFH1_value_mask                      0x2
#define PWM1OFH1_clear_mask                      0xFD

#define PWM1OFH2                                 0x2
#define PWM1OFH2_address                         0xD98
#define PWM1OFH2_position                        0x2
#define PWM1OFH2_size                            0x1
#define PWM1OFH2_value_mask                      0x4
#define PWM1OFH2_clear_mask                      0xFB

#define PWM1OFH3                                 0x3
#define PWM1OFH3_address                         0xD98
#define PWM1OFH3_position                        0x3
#define PWM1OFH3_size                            0x1
#define PWM1OFH3_value_mask                      0x8
#define PWM1OFH3_clear_mask                      0xF7

#define PWM1OFH4                                 0x4
#define PWM1OFH4_address                         0xD98
#define PWM1OFH4_position                        0x4
#define PWM1OFH4_size                            0x1
#define PWM1OFH4_value_mask                      0x10
#define PWM1OFH4_clear_mask                      0xEF

#define PWM1OFH5                                 0x5
#define PWM1OFH5_address                         0xD98
#define PWM1OFH5_position                        0x5
#define PWM1OFH5_size                            0x1
#define PWM1OFH5_value_mask                      0x20
#define PWM1OFH5_clear_mask                      0xDF

#define PWM1OFH6                                 0x6
#define PWM1OFH6_address                         0xD98
#define PWM1OFH6_position                        0x6
#define PWM1OFH6_size                            0x1
#define PWM1OFH6_value_mask                      0x40
#define PWM1OFH6_clear_mask                      0xBF

#define PWM1OFH7                                 0x7
#define PWM1OFH7_address                         0xD98
#define PWM1OFH7_position                        0x7
#define PWM1OFH7_size                            0x1
#define PWM1OFH7_value_mask                      0x80
#define PWM1OFH7_clear_mask                      0x7F


/*----------------------------------------------------------------------------------------------#
| PWM1TMRL                                                                                0xD99 |
#-----------------------------------------------------------------------------------------------#
| PWM1TMRL7 | PWM1TMRL6 | PWM1TMRL5 | PWM1TMRL4 | PWM1TMRL3 | PWM1TMRL2 | PWM1TMRL1 | PWM1TMRL0 |
#-----------------------------------------------------------------------------------------------#
| 7         | 6         | 5         | 4         | 3         | 2         | 1         | 0         |
#----------------------------------------------------------------------------------------------*/

#define PWM1TMRL0                                0x0
#define PWM1TMRL0_address                        0xD99
#define PWM1TMRL0_position                       0x0
#define PWM1TMRL0_size                           0x1
#define PWM1TMRL0_value_mask                     0x1
#define PWM1TMRL0_clear_mask                     0xFE

#define PWM1TMRL_TMR                             0x0
#define PWM1TMRL_TMR_address                     0xD99
#define PWM1TMRL_TMR_position                    0x0
#define PWM1TMRL_TMR_size                        0x8
#define PWM1TMRL_TMR_value_mask                  0xFF
#define PWM1TMRL_TMR_clear_mask                  0x0

#define PWM1TMRL                                 0x0
#define PWM1TMRL_address                         0xD99
#define PWM1TMRL_position                        0x0
#define PWM1TMRL_size                            0x8
#define PWM1TMRL_value_mask                      0xFF
#define PWM1TMRL_clear_mask                      0x0

#define PWM1TMRL1                                0x1
#define PWM1TMRL1_address                        0xD99
#define PWM1TMRL1_position                       0x1
#define PWM1TMRL1_size                           0x1
#define PWM1TMRL1_value_mask                     0x2
#define PWM1TMRL1_clear_mask                     0xFD

#define PWM1TMRL2                                0x2
#define PWM1TMRL2_address                        0xD99
#define PWM1TMRL2_position                       0x2
#define PWM1TMRL2_size                           0x1
#define PWM1TMRL2_value_mask                     0x4
#define PWM1TMRL2_clear_mask                     0xFB

#define PWM1TMRL3                                0x3
#define PWM1TMRL3_address                        0xD99
#define PWM1TMRL3_position                       0x3
#define PWM1TMRL3_size                           0x1
#define PWM1TMRL3_value_mask                     0x8
#define PWM1TMRL3_clear_mask                     0xF7

#define PWM1TMRL4                                0x4
#define PWM1TMRL4_address                        0xD99
#define PWM1TMRL4_position                       0x4
#define PWM1TMRL4_size                           0x1
#define PWM1TMRL4_value_mask                     0x10
#define PWM1TMRL4_clear_mask                     0xEF

#define PWM1TMRL5                                0x5
#define PWM1TMRL5_address                        0xD99
#define PWM1TMRL5_position                       0x5
#define PWM1TMRL5_size                           0x1
#define PWM1TMRL5_value_mask                     0x20
#define PWM1TMRL5_clear_mask                     0xDF

#define PWM1TMRL6                                0x6
#define PWM1TMRL6_address                        0xD99
#define PWM1TMRL6_position                       0x6
#define PWM1TMRL6_size                           0x1
#define PWM1TMRL6_value_mask                     0x40
#define PWM1TMRL6_clear_mask                     0xBF

#define PWM1TMRL7                                0x7
#define PWM1TMRL7_address                        0xD99
#define PWM1TMRL7_position                       0x7
#define PWM1TMRL7_size                           0x1
#define PWM1TMRL7_value_mask                     0x80
#define PWM1TMRL7_clear_mask                     0x7F


/*----------------------------------------------------------------------------------------------#
| PWM1TMRH                                                                                0xD9A |
#-----------------------------------------------------------------------------------------------#
| PWM1TMRH7 | PWM1TMRH6 | PWM1TMRH5 | PWM1TMRH4 | PWM1TMRH3 | PWM1TMRH2 | PWM1TMRH1 | PWM1TMRH0 |
#-----------------------------------------------------------------------------------------------#
| 7         | 6         | 5         | 4         | 3         | 2         | 1         | 0         |
#----------------------------------------------------------------------------------------------*/

#define PWM1TMRH                                 0x0
#define PWM1TMRH_address                         0xD9A
#define PWM1TMRH_position                        0x0
#define PWM1TMRH_size                            0x8
#define PWM1TMRH_value_mask                      0xFF
#define PWM1TMRH_clear_mask                      0x0

#define PWM1TMRH0                                0x0
#define PWM1TMRH0_address                        0xD9A
#define PWM1TMRH0_position                       0x0
#define PWM1TMRH0_size                           0x1
#define PWM1TMRH0_value_mask                     0x1
#define PWM1TMRH0_clear_mask                     0xFE

#define PWM1TMRH_TMR                             0x0
#define PWM1TMRH_TMR_address                     0xD9A
#define PWM1TMRH_TMR_position                    0x0
#define PWM1TMRH_TMR_size                        0x8
#define PWM1TMRH_TMR_value_mask                  0xFF
#define PWM1TMRH_TMR_clear_mask                  0x0

#define PWM1TMRH1                                0x1
#define PWM1TMRH1_address                        0xD9A
#define PWM1TMRH1_position                       0x1
#define PWM1TMRH1_size                           0x1
#define PWM1TMRH1_value_mask                     0x2
#define PWM1TMRH1_clear_mask                     0xFD

#define PWM1TMRH2                                0x2
#define PWM1TMRH2_address                        0xD9A
#define PWM1TMRH2_position                       0x2
#define PWM1TMRH2_size                           0x1
#define PWM1TMRH2_value_mask                     0x4
#define PWM1TMRH2_clear_mask                     0xFB

#define PWM1TMRH3                                0x3
#define PWM1TMRH3_address                        0xD9A
#define PWM1TMRH3_position                       0x3
#define PWM1TMRH3_size                           0x1
#define PWM1TMRH3_value_mask                     0x8
#define PWM1TMRH3_clear_mask                     0xF7

#define PWM1TMRH4                                0x4
#define PWM1TMRH4_address                        0xD9A
#define PWM1TMRH4_position                       0x4
#define PWM1TMRH4_size                           0x1
#define PWM1TMRH4_value_mask                     0x10
#define PWM1TMRH4_clear_mask                     0xEF

#define PWM1TMRH5                                0x5
#define PWM1TMRH5_address                        0xD9A
#define PWM1TMRH5_position                       0x5
#define PWM1TMRH5_size                           0x1
#define PWM1TMRH5_value_mask                     0x20
#define PWM1TMRH5_clear_mask                     0xDF

#define PWM1TMRH6                                0x6
#define PWM1TMRH6_address                        0xD9A
#define PWM1TMRH6_position                       0x6
#define PWM1TMRH6_size                           0x1
#define PWM1TMRH6_value_mask                     0x40
#define PWM1TMRH6_clear_mask                     0xBF

#define PWM1TMRH7                                0x7
#define PWM1TMRH7_address                        0xD9A
#define PWM1TMRH7_position                       0x7
#define PWM1TMRH7_size                           0x1
#define PWM1TMRH7_value_mask                     0x80
#define PWM1TMRH7_clear_mask                     0x7F


/*------------------------------------------------------------------------#
| PWM1CON                                                           0xD9B |
#-------------------------------------------------------------------------#
| PWM1EN | PWM1OE | PWM1CON_OUT | PWM1POL | PWM1MODE1 | PWM1MODE0 | - | - |
#-------------------------------------------------------------------------#
| 7      | 6      | 5           | 4       | 3         | 2         | 1 | 0 |
#------------------------------------------------------------------------*/

#define PWM1CON                                  0x0
#define PWM1CON_address                          0xD9B
#define PWM1CON_position                         0x0
#define PWM1CON_size                             0x8
#define PWM1CON_value_mask                       0xFF
#define PWM1CON_clear_mask                       0x0

#define PWM1CON_MODE                             0x2
#define PWM1CON_MODE_address                     0xD9B
#define PWM1CON_MODE_position                    0x2
#define PWM1CON_MODE_size                        0x2
#define PWM1CON_MODE_value_mask                  0xC
#define PWM1CON_MODE_clear_mask                  0xF3

#define PWM1MODE0                                0x2
#define PWM1MODE0_address                        0xD9B
#define PWM1MODE0_position                       0x2
#define PWM1MODE0_size                           0x1
#define PWM1MODE0_value_mask                     0x4
#define PWM1MODE0_clear_mask                     0xFB

#define PWM1MODE                                 0x2
#define PWM1MODE_address                         0xD9B
#define PWM1MODE_position                        0x2
#define PWM1MODE_size                            0x2
#define PWM1MODE_value_mask                      0xC
#define PWM1MODE_clear_mask                      0xF3

#define PWM1CON_MODE0                            0x2
#define PWM1CON_MODE0_address                    0xD9B
#define PWM1CON_MODE0_position                   0x2
#define PWM1CON_MODE0_size                       0x1
#define PWM1CON_MODE0_value_mask                 0x4
#define PWM1CON_MODE0_clear_mask                 0xFB

#define PWM1MODE1                                0x3
#define PWM1MODE1_address                        0xD9B
#define PWM1MODE1_position                       0x3
#define PWM1MODE1_size                           0x1
#define PWM1MODE1_value_mask                     0x8
#define PWM1MODE1_clear_mask                     0xF7

#define PWM1CON_MODE1                            0x3
#define PWM1CON_MODE1_address                    0xD9B
#define PWM1CON_MODE1_position                   0x3
#define PWM1CON_MODE1_size                       0x1
#define PWM1CON_MODE1_value_mask                 0x8
#define PWM1CON_MODE1_clear_mask                 0xF7

#define PWM1CON_POL                              0x4
#define PWM1CON_POL_address                      0xD9B
#define PWM1CON_POL_position                     0x4
#define PWM1CON_POL_size                         0x1
#define PWM1CON_POL_value_mask                   0x10
#define PWM1CON_POL_clear_mask                   0xEF

#define PWM1POL                                  0x4
#define PWM1POL_address                          0xD9B
#define PWM1POL_position                         0x4
#define PWM1POL_size                             0x1
#define PWM1POL_value_mask                       0x10
#define PWM1POL_clear_mask                       0xEF

#define PWM1CON_OUT                              0x5
#define PWM1CON_OUT_address                      0xD9B
#define PWM1CON_OUT_position                     0x5
#define PWM1CON_OUT_size                         0x1
#define PWM1CON_OUT_value_mask                   0x20
#define PWM1CON_OUT_clear_mask                   0xDF

#define PWM1OUT                                  0x5
#define PWM1OUT_address                          0xD9B
#define PWM1OUT_position                         0x5
#define PWM1OUT_size                             0x1
#define PWM1OUT_value_mask                       0x20
#define PWM1OUT_clear_mask                       0xDF

#define PWM1OE                                   0x6
#define PWM1OE_address                           0xD9B
#define PWM1OE_position                          0x6
#define PWM1OE_size                              0x1
#define PWM1OE_value_mask                        0x40
#define PWM1OE_clear_mask                        0xBF

#define PWM1CON_OE                               0x6
#define PWM1CON_OE_address                       0xD9B
#define PWM1CON_OE_position                      0x6
#define PWM1CON_OE_size                          0x1
#define PWM1CON_OE_value_mask                    0x40
#define PWM1CON_OE_clear_mask                    0xBF

#define PWM1EN                                   0x7
#define PWM1EN_address                           0xD9B
#define PWM1EN_position                          0x7
#define PWM1EN_size                              0x1
#define PWM1EN_value_mask                        0x80
#define PWM1EN_clear_mask                        0x7F

#define PWM1CON_EN                               0x7
#define PWM1CON_EN_address                       0xD9B
#define PWM1CON_EN_position                      0x7
#define PWM1CON_EN_size                          0x1
#define PWM1CON_EN_value_mask                    0x80
#define PWM1CON_EN_clear_mask                    0x7F


/*---------------------------------------------------------------#
| PWM1INTE                                                 0xD9C |
#----------------------------------------------------------------#
| - | - | - | - | PWM1OFIE | PWM1INTE_PHIE | PWM1DCIE | PWM1PRIE |
#----------------------------------------------------------------#
| 7 | 6 | 5 | 4 | 3        | 2             | 1        | 0        |
#---------------------------------------------------------------*/

#define PWM1INTE                                 0x0
#define PWM1INTE_address                         0xD9C
#define PWM1INTE_position                        0x0
#define PWM1INTE_size                            0x8
#define PWM1INTE_value_mask                      0xFF
#define PWM1INTE_clear_mask                      0x0

#define PWM1PRIE                                 0x0
#define PWM1PRIE_address                         0xD9C
#define PWM1PRIE_position                        0x0
#define PWM1PRIE_size                            0x1
#define PWM1PRIE_value_mask                      0x1
#define PWM1PRIE_clear_mask                      0xFE

#define PWM1INTE_PRIE                            0x0
#define PWM1INTE_PRIE_address                    0xD9C
#define PWM1INTE_PRIE_position                   0x0
#define PWM1INTE_PRIE_size                       0x1
#define PWM1INTE_PRIE_value_mask                 0x1
#define PWM1INTE_PRIE_clear_mask                 0xFE

#define PWM1DCIE                                 0x1
#define PWM1DCIE_address                         0xD9C
#define PWM1DCIE_position                        0x1
#define PWM1DCIE_size                            0x1
#define PWM1DCIE_value_mask                      0x2
#define PWM1DCIE_clear_mask                      0xFD

#define PWM1INTE_DCIE                            0x1
#define PWM1INTE_DCIE_address                    0xD9C
#define PWM1INTE_DCIE_position                   0x1
#define PWM1INTE_DCIE_size                       0x1
#define PWM1INTE_DCIE_value_mask                 0x2
#define PWM1INTE_DCIE_clear_mask                 0xFD

#define PWM1INTE_PHIE                            0x2
#define PWM1INTE_PHIE_address                    0xD9C
#define PWM1INTE_PHIE_position                   0x2
#define PWM1INTE_PHIE_size                       0x1
#define PWM1INTE_PHIE_value_mask                 0x4
#define PWM1INTE_PHIE_clear_mask                 0xFB

#define PWM1PHIE                                 0x2
#define PWM1PHIE_address                         0xD9C
#define PWM1PHIE_position                        0x2
#define PWM1PHIE_size                            0x1
#define PWM1PHIE_value_mask                      0x4
#define PWM1PHIE_clear_mask                      0xFB

#define PWM1OFIE                                 0x3
#define PWM1OFIE_address                         0xD9C
#define PWM1OFIE_position                        0x3
#define PWM1OFIE_size                            0x1
#define PWM1OFIE_value_mask                      0x8
#define PWM1OFIE_clear_mask                      0xF7

#define PWM1INTE_OFIE                            0x3
#define PWM1INTE_OFIE_address                    0xD9C
#define PWM1INTE_OFIE_position                   0x3
#define PWM1INTE_OFIE_size                       0x1
#define PWM1INTE_OFIE_value_mask                 0x8
#define PWM1INTE_OFIE_clear_mask                 0xF7


/*--------------------------------------------------------------------#
| PWM1INTF                                                      0xD9D |
#---------------------------------------------------------------------#
| - | - | - | - | PWM1OFIF | PWM1PHIF | PWM1INTF_DCIF | PWM1INTF_PRIF |
#---------------------------------------------------------------------#
| 7 | 6 | 5 | 4 | 3        | 2        | 1             | 0             |
#--------------------------------------------------------------------*/

#define PWM1INTF                                 0x0
#define PWM1INTF_address                         0xD9D
#define PWM1INTF_position                        0x0
#define PWM1INTF_size                            0x8
#define PWM1INTF_value_mask                      0xFF
#define PWM1INTF_clear_mask                      0x0

#define PWM1INTF_PRIF                            0x0
#define PWM1INTF_PRIF_address                    0xD9D
#define PWM1INTF_PRIF_position                   0x0
#define PWM1INTF_PRIF_size                       0x1
#define PWM1INTF_PRIF_value_mask                 0x1
#define PWM1INTF_PRIF_clear_mask                 0xFE

#define PWM1PRIF                                 0x0
#define PWM1PRIF_address                         0xD9D
#define PWM1PRIF_position                        0x0
#define PWM1PRIF_size                            0x1
#define PWM1PRIF_value_mask                      0x1
#define PWM1PRIF_clear_mask                      0xFE

#define PWM1INTF_DCIF                            0x1
#define PWM1INTF_DCIF_address                    0xD9D
#define PWM1INTF_DCIF_position                   0x1
#define PWM1INTF_DCIF_size                       0x1
#define PWM1INTF_DCIF_value_mask                 0x2
#define PWM1INTF_DCIF_clear_mask                 0xFD

#define PWM1DCIF                                 0x1
#define PWM1DCIF_address                         0xD9D
#define PWM1DCIF_position                        0x1
#define PWM1DCIF_size                            0x1
#define PWM1DCIF_value_mask                      0x2
#define PWM1DCIF_clear_mask                      0xFD

#define PWM1PHIF                                 0x2
#define PWM1PHIF_address                         0xD9D
#define PWM1PHIF_position                        0x2
#define PWM1PHIF_size                            0x1
#define PWM1PHIF_value_mask                      0x4
#define PWM1PHIF_clear_mask                      0xFB

#define PWM1INTF_PHIF                            0x2
#define PWM1INTF_PHIF_address                    0xD9D
#define PWM1INTF_PHIF_position                   0x2
#define PWM1INTF_PHIF_size                       0x1
#define PWM1INTF_PHIF_value_mask                 0x4
#define PWM1INTF_PHIF_clear_mask                 0xFB

#define PWM1OFIF                                 0x3
#define PWM1OFIF_address                         0xD9D
#define PWM1OFIF_position                        0x3
#define PWM1OFIF_size                            0x1
#define PWM1OFIF_value_mask                      0x8
#define PWM1OFIF_clear_mask                      0xF7

#define PWM1INTF_OFIF                            0x3
#define PWM1INTF_OFIF_address                    0xD9D
#define PWM1INTF_OFIF_position                   0x3
#define PWM1INTF_OFIF_size                       0x1
#define PWM1INTF_OFIF_value_mask                 0x8
#define PWM1INTF_OFIF_clear_mask                 0xF7


/*--------------------------------------------------------------------------#
| PWM1CLKCON                                                          0xD9E |
#---------------------------------------------------------------------------#
| - | PWM1PS2 | PWM1PS1 | PWM1PS0 | - | - | PWM1CLKCON_CS1 | PWM1CLKCON_CS0 |
#---------------------------------------------------------------------------#
| 7 | 6       | 5       | 4       | 3 | 2 | 1              | 0              |
#--------------------------------------------------------------------------*/

#define PWM1CLKCON                               0x0
#define PWM1CLKCON_address                       0xD9E
#define PWM1CLKCON_position                      0x0
#define PWM1CLKCON_size                          0x8
#define PWM1CLKCON_value_mask                    0xFF
#define PWM1CLKCON_clear_mask                    0x0

#define PWM1CLKCON_CS                            0x0
#define PWM1CLKCON_CS_address                    0xD9E
#define PWM1CLKCON_CS_position                   0x0
#define PWM1CLKCON_CS_size                       0x2
#define PWM1CLKCON_CS_value_mask                 0x3
#define PWM1CLKCON_CS_clear_mask                 0xFC

#define PWM1CS                                   0x0
#define PWM1CS_address                           0xD9E
#define PWM1CS_position                          0x0
#define PWM1CS_size                              0x3
#define PWM1CS_value_mask                        0x7
#define PWM1CS_clear_mask                        0xF8

#define PWM1CLKCON_CS0                           0x0
#define PWM1CLKCON_CS0_address                   0xD9E
#define PWM1CLKCON_CS0_position                  0x0
#define PWM1CLKCON_CS0_size                      0x1
#define PWM1CLKCON_CS0_value_mask                0x1
#define PWM1CLKCON_CS0_clear_mask                0xFE

#define PWM1CS0                                  0x0
#define PWM1CS0_address                          0xD9E
#define PWM1CS0_position                         0x0
#define PWM1CS0_size                             0x1
#define PWM1CS0_value_mask                       0x1
#define PWM1CS0_clear_mask                       0xFE

#define PWM1CLKCON_CS1                           0x1
#define PWM1CLKCON_CS1_address                   0xD9E
#define PWM1CLKCON_CS1_position                  0x1
#define PWM1CLKCON_CS1_size                      0x1
#define PWM1CLKCON_CS1_value_mask                0x2
#define PWM1CLKCON_CS1_clear_mask                0xFD

#define PWM1CS1                                  0x1
#define PWM1CS1_address                          0xD9E
#define PWM1CS1_position                         0x1
#define PWM1CS1_size                             0x1
#define PWM1CS1_value_mask                       0x2
#define PWM1CS1_clear_mask                       0xFD

#define PWM1CLKCON_PS0                           0x4
#define PWM1CLKCON_PS0_address                   0xD9E
#define PWM1CLKCON_PS0_position                  0x4
#define PWM1CLKCON_PS0_size                      0x1
#define PWM1CLKCON_PS0_value_mask                0x10
#define PWM1CLKCON_PS0_clear_mask                0xEF

#define PWM1PS                                   0x4
#define PWM1PS_address                           0xD9E
#define PWM1PS_position                          0x4
#define PWM1PS_size                              0x3
#define PWM1PS_value_mask                        0x70
#define PWM1PS_clear_mask                        0x8F

#define PWM1PS0                                  0x4
#define PWM1PS0_address                          0xD9E
#define PWM1PS0_position                         0x4
#define PWM1PS0_size                             0x1
#define PWM1PS0_value_mask                       0x10
#define PWM1PS0_clear_mask                       0xEF

#define PWM1CLKCON_PS                            0x4
#define PWM1CLKCON_PS_address                    0xD9E
#define PWM1CLKCON_PS_position                   0x4
#define PWM1CLKCON_PS_size                       0x3
#define PWM1CLKCON_PS_value_mask                 0x70
#define PWM1CLKCON_PS_clear_mask                 0x8F

#define PWM1PS1                                  0x5
#define PWM1PS1_address                          0xD9E
#define PWM1PS1_position                         0x5
#define PWM1PS1_size                             0x1
#define PWM1PS1_value_mask                       0x20
#define PWM1PS1_clear_mask                       0xDF

#define PWM1CLKCON_PS1                           0x5
#define PWM1CLKCON_PS1_address                   0xD9E
#define PWM1CLKCON_PS1_position                  0x5
#define PWM1CLKCON_PS1_size                      0x1
#define PWM1CLKCON_PS1_value_mask                0x20
#define PWM1CLKCON_PS1_clear_mask                0xDF

#define PWM1PS2                                  0x6
#define PWM1PS2_address                          0xD9E
#define PWM1PS2_position                         0x6
#define PWM1PS2_size                             0x1
#define PWM1PS2_value_mask                       0x40
#define PWM1PS2_clear_mask                       0xBF

#define PWM1CLKCON_PS2                           0x6
#define PWM1CLKCON_PS2_address                   0xD9E
#define PWM1CLKCON_PS2_position                  0x6
#define PWM1CLKCON_PS2_size                      0x1
#define PWM1CLKCON_PS2_value_mask                0x40
#define PWM1CLKCON_PS2_clear_mask                0xBF


/*--------------------------------------------------------------------------#
| PWM1LDCON                                                           0xD9F |
#---------------------------------------------------------------------------#
| PWM1LDCON_LDA | PWM1LDCON_LDT | - | - | - | - | PWM1LDS1 | PWM1LDCON_LDS0 |
#---------------------------------------------------------------------------#
| 7             | 6             | 5 | 4 | 3 | 2 | 1        | 0              |
#--------------------------------------------------------------------------*/

#define PWM1LDCON                                0x0
#define PWM1LDCON_address                        0xD9F
#define PWM1LDCON_position                       0x0
#define PWM1LDCON_size                           0x8
#define PWM1LDCON_value_mask                     0xFF
#define PWM1LDCON_clear_mask                     0x0

#define PWM1LDCON_LDS0                           0x0
#define PWM1LDCON_LDS0_address                   0xD9F
#define PWM1LDCON_LDS0_position                  0x0
#define PWM1LDCON_LDS0_size                      0x1
#define PWM1LDCON_LDS0_value_mask                0x1
#define PWM1LDCON_LDS0_clear_mask                0xFE

#define PWM1LDS                                  0x0
#define PWM1LDS_address                          0xD9F
#define PWM1LDS_position                         0x0
#define PWM1LDS_size                             0x2
#define PWM1LDS_value_mask                       0x3
#define PWM1LDS_clear_mask                       0xFC

#define PWM1LDCON_LDS                            0x0
#define PWM1LDCON_LDS_address                    0xD9F
#define PWM1LDCON_LDS_position                   0x0
#define PWM1LDCON_LDS_size                       0x2
#define PWM1LDCON_LDS_value_mask                 0x3
#define PWM1LDCON_LDS_clear_mask                 0xFC

#define PWM1LDS0                                 0x0
#define PWM1LDS0_address                         0xD9F
#define PWM1LDS0_position                        0x0
#define PWM1LDS0_size                            0x1
#define PWM1LDS0_value_mask                      0x1
#define PWM1LDS0_clear_mask                      0xFE

#define PWM1LDCON_LDS1                           0x1
#define PWM1LDCON_LDS1_address                   0xD9F
#define PWM1LDCON_LDS1_position                  0x1
#define PWM1LDCON_LDS1_size                      0x1
#define PWM1LDCON_LDS1_value_mask                0x2
#define PWM1LDCON_LDS1_clear_mask                0xFD

#define PWM1LDS1                                 0x1
#define PWM1LDS1_address                         0xD9F
#define PWM1LDS1_position                        0x1
#define PWM1LDS1_size                            0x1
#define PWM1LDS1_value_mask                      0x2
#define PWM1LDS1_clear_mask                      0xFD

#define PWM1LDCON_LDT                            0x6
#define PWM1LDCON_LDT_address                    0xD9F
#define PWM1LDCON_LDT_position                   0x6
#define PWM1LDCON_LDT_size                       0x1
#define PWM1LDCON_LDT_value_mask                 0x40
#define PWM1LDCON_LDT_clear_mask                 0xBF

#define PWM1LDM                                  0x6
#define PWM1LDM_address                          0xD9F
#define PWM1LDM_position                         0x6
#define PWM1LDM_size                             0x1
#define PWM1LDM_value_mask                       0x40
#define PWM1LDM_clear_mask                       0xBF

#define PWM1LD                                   0x7
#define PWM1LD_address                           0xD9F
#define PWM1LD_position                          0x7
#define PWM1LD_size                              0x1
#define PWM1LD_value_mask                        0x80
#define PWM1LD_clear_mask                        0x7F

#define PWM1LDCON_LDA                            0x7
#define PWM1LDCON_LDA_address                    0xD9F
#define PWM1LDCON_LDA_position                   0x7
#define PWM1LDCON_LDA_size                       0x1
#define PWM1LDCON_LDA_value_mask                 0x80
#define PWM1LDCON_LDA_clear_mask                 0x7F


/*-----------------------------------------------------------------------------#
| PWM1OFCON                                                              0xDA0 |
#------------------------------------------------------------------------------#
| - | PWM1OFM1 | PWM1OFM0 | PWM1OFMC | - | - | PWM1OFCON_OFS1 | PWM1OFCON_OFS0 |
#------------------------------------------------------------------------------#
| 7 | 6        | 5        | 4        | 3 | 2 | 1              | 0              |
#-----------------------------------------------------------------------------*/

#define PWM1OFCON                                0x0
#define PWM1OFCON_address                        0xDA0
#define PWM1OFCON_position                       0x0
#define PWM1OFCON_size                           0x8
#define PWM1OFCON_value_mask                     0xFF
#define PWM1OFCON_clear_mask                     0x0

#define PWM1OFCON_OFS0                           0x0
#define PWM1OFCON_OFS0_address                   0xDA0
#define PWM1OFCON_OFS0_position                  0x0
#define PWM1OFCON_OFS0_size                      0x1
#define PWM1OFCON_OFS0_value_mask                0x1
#define PWM1OFCON_OFS0_clear_mask                0xFE

#define PWM1OFS                                  0x0
#define PWM1OFS_address                          0xDA0
#define PWM1OFS_position                         0x0
#define PWM1OFS_size                             0x2
#define PWM1OFS_value_mask                       0x3
#define PWM1OFS_clear_mask                       0xFC

#define PWM1OFCON_OFS                            0x0
#define PWM1OFCON_OFS_address                    0xDA0
#define PWM1OFCON_OFS_position                   0x0
#define PWM1OFCON_OFS_size                       0x2
#define PWM1OFCON_OFS_value_mask                 0x3
#define PWM1OFCON_OFS_clear_mask                 0xFC

#define PWM1OFS0                                 0x0
#define PWM1OFS0_address                         0xDA0
#define PWM1OFS0_position                        0x0
#define PWM1OFS0_size                            0x1
#define PWM1OFS0_value_mask                      0x1
#define PWM1OFS0_clear_mask                      0xFE

#define PWM1OFCON_OFS1                           0x1
#define PWM1OFCON_OFS1_address                   0xDA0
#define PWM1OFCON_OFS1_position                  0x1
#define PWM1OFCON_OFS1_size                      0x1
#define PWM1OFCON_OFS1_value_mask                0x2
#define PWM1OFCON_OFS1_clear_mask                0xFD

#define PWM1OFS1                                 0x1
#define PWM1OFS1_address                         0xDA0
#define PWM1OFS1_position                        0x1
#define PWM1OFS1_size                            0x1
#define PWM1OFS1_value_mask                      0x2
#define PWM1OFS1_clear_mask                      0xFD

#define PWM1OFMC                                 0x4
#define PWM1OFMC_address                         0xDA0
#define PWM1OFMC_position                        0x4
#define PWM1OFMC_size                            0x1
#define PWM1OFMC_value_mask                      0x10
#define PWM1OFMC_clear_mask                      0xEF

#define PWM1OFCON_OFO                            0x4
#define PWM1OFCON_OFO_address                    0xDA0
#define PWM1OFCON_OFO_position                   0x4
#define PWM1OFCON_OFO_size                       0x1
#define PWM1OFCON_OFO_value_mask                 0x10
#define PWM1OFCON_OFO_clear_mask                 0xEF

#define PWM1OFM0                                 0x5
#define PWM1OFM0_address                         0xDA0
#define PWM1OFM0_position                        0x5
#define PWM1OFM0_size                            0x1
#define PWM1OFM0_value_mask                      0x20
#define PWM1OFM0_clear_mask                      0xDF

#define PWM1OFM                                  0x5
#define PWM1OFM_address                          0xDA0
#define PWM1OFM_position                         0x5
#define PWM1OFM_size                             0x2
#define PWM1OFM_value_mask                       0x60
#define PWM1OFM_clear_mask                       0x9F

#define PWM1OFCON_OFM0                           0x5
#define PWM1OFCON_OFM0_address                   0xDA0
#define PWM1OFCON_OFM0_position                  0x5
#define PWM1OFCON_OFM0_size                      0x1
#define PWM1OFCON_OFM0_value_mask                0x20
#define PWM1OFCON_OFM0_clear_mask                0xDF

#define PWM1OFCON_OFM                            0x5
#define PWM1OFCON_OFM_address                    0xDA0
#define PWM1OFCON_OFM_position                   0x5
#define PWM1OFCON_OFM_size                       0x2
#define PWM1OFCON_OFM_value_mask                 0x60
#define PWM1OFCON_OFM_clear_mask                 0x9F

#define PWM1OFM1                                 0x6
#define PWM1OFM1_address                         0xDA0
#define PWM1OFM1_position                        0x6
#define PWM1OFM1_size                            0x1
#define PWM1OFM1_value_mask                      0x40
#define PWM1OFM1_clear_mask                      0xBF

#define PWM1OFCON_OFM1                           0x6
#define PWM1OFCON_OFM1_address                   0xDA0
#define PWM1OFCON_OFM1_position                  0x6
#define PWM1OFCON_OFM1_size                      0x1
#define PWM1OFCON_OFM1_value_mask                0x40
#define PWM1OFCON_OFM1_clear_mask                0xBF


/*--------------------------------------------------------------------------------------#
| PWM2PHL                                                                         0xDA1 |
#---------------------------------------------------------------------------------------#
| PWM2PHL7 | PWM2PHL6 | PWM2PHL5 | PWM2PHL4 | PWM2PHL3 | PWM2PHL2 | PWM2PHL1 | PWM2PHL0 |
#---------------------------------------------------------------------------------------#
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
#--------------------------------------------------------------------------------------*/

#define PWM2PHL_PH                               0x0
#define PWM2PHL_PH_address                       0xDA1
#define PWM2PHL_PH_position                      0x0
#define PWM2PHL_PH_size                          0x8
#define PWM2PHL_PH_value_mask                    0xFF
#define PWM2PHL_PH_clear_mask                    0x0

#define PWM2PHL0                                 0x0
#define PWM2PHL0_address                         0xDA1
#define PWM2PHL0_position                        0x0
#define PWM2PHL0_size                            0x1
#define PWM2PHL0_value_mask                      0x1
#define PWM2PHL0_clear_mask                      0xFE

#define PWM2PHL                                  0x0
#define PWM2PHL_address                          0xDA1
#define PWM2PHL_position                         0x0
#define PWM2PHL_size                             0x8
#define PWM2PHL_value_mask                       0xFF
#define PWM2PHL_clear_mask                       0x0

#define PWM2PHL1                                 0x1
#define PWM2PHL1_address                         0xDA1
#define PWM2PHL1_position                        0x1
#define PWM2PHL1_size                            0x1
#define PWM2PHL1_value_mask                      0x2
#define PWM2PHL1_clear_mask                      0xFD

#define PWM2PHL2                                 0x2
#define PWM2PHL2_address                         0xDA1
#define PWM2PHL2_position                        0x2
#define PWM2PHL2_size                            0x1
#define PWM2PHL2_value_mask                      0x4
#define PWM2PHL2_clear_mask                      0xFB

#define PWM2PHL3                                 0x3
#define PWM2PHL3_address                         0xDA1
#define PWM2PHL3_position                        0x3
#define PWM2PHL3_size                            0x1
#define PWM2PHL3_value_mask                      0x8
#define PWM2PHL3_clear_mask                      0xF7

#define PWM2PHL4                                 0x4
#define PWM2PHL4_address                         0xDA1
#define PWM2PHL4_position                        0x4
#define PWM2PHL4_size                            0x1
#define PWM2PHL4_value_mask                      0x10
#define PWM2PHL4_clear_mask                      0xEF

#define PWM2PHL5                                 0x5
#define PWM2PHL5_address                         0xDA1
#define PWM2PHL5_position                        0x5
#define PWM2PHL5_size                            0x1
#define PWM2PHL5_value_mask                      0x20
#define PWM2PHL5_clear_mask                      0xDF

#define PWM2PHL6                                 0x6
#define PWM2PHL6_address                         0xDA1
#define PWM2PHL6_position                        0x6
#define PWM2PHL6_size                            0x1
#define PWM2PHL6_value_mask                      0x40
#define PWM2PHL6_clear_mask                      0xBF

#define PWM2PHL7                                 0x7
#define PWM2PHL7_address                         0xDA1
#define PWM2PHL7_position                        0x7
#define PWM2PHL7_size                            0x1
#define PWM2PHL7_value_mask                      0x80
#define PWM2PHL7_clear_mask                      0x7F


/*--------------------------------------------------------------------------------------#
| PWM2PHH                                                                         0xDA2 |
#---------------------------------------------------------------------------------------#
| PWM2PHH7 | PWM2PHH6 | PWM2PHH5 | PWM2PHH4 | PWM2PHH3 | PWM2PHH2 | PWM2PHH1 | PWM2PHH0 |
#---------------------------------------------------------------------------------------#
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
#--------------------------------------------------------------------------------------*/

#define PWM2PHH0                                 0x0
#define PWM2PHH0_address                         0xDA2
#define PWM2PHH0_position                        0x0
#define PWM2PHH0_size                            0x1
#define PWM2PHH0_value_mask                      0x1
#define PWM2PHH0_clear_mask                      0xFE

#define PWM2PHH                                  0x0
#define PWM2PHH_address                          0xDA2
#define PWM2PHH_position                         0x0
#define PWM2PHH_size                             0x8
#define PWM2PHH_value_mask                       0xFF
#define PWM2PHH_clear_mask                       0x0

#define PWM2PHH_PH                               0x0
#define PWM2PHH_PH_address                       0xDA2
#define PWM2PHH_PH_position                      0x0
#define PWM2PHH_PH_size                          0x8
#define PWM2PHH_PH_value_mask                    0xFF
#define PWM2PHH_PH_clear_mask                    0x0

#define PWM2PHH1                                 0x1
#define PWM2PHH1_address                         0xDA2
#define PWM2PHH1_position                        0x1
#define PWM2PHH1_size                            0x1
#define PWM2PHH1_value_mask                      0x2
#define PWM2PHH1_clear_mask                      0xFD

#define PWM2PHH2                                 0x2
#define PWM2PHH2_address                         0xDA2
#define PWM2PHH2_position                        0x2
#define PWM2PHH2_size                            0x1
#define PWM2PHH2_value_mask                      0x4
#define PWM2PHH2_clear_mask                      0xFB

#define PWM2PHH3                                 0x3
#define PWM2PHH3_address                         0xDA2
#define PWM2PHH3_position                        0x3
#define PWM2PHH3_size                            0x1
#define PWM2PHH3_value_mask                      0x8
#define PWM2PHH3_clear_mask                      0xF7

#define PWM2PHH4                                 0x4
#define PWM2PHH4_address                         0xDA2
#define PWM2PHH4_position                        0x4
#define PWM2PHH4_size                            0x1
#define PWM2PHH4_value_mask                      0x10
#define PWM2PHH4_clear_mask                      0xEF

#define PWM2PHH5                                 0x5
#define PWM2PHH5_address                         0xDA2
#define PWM2PHH5_position                        0x5
#define PWM2PHH5_size                            0x1
#define PWM2PHH5_value_mask                      0x20
#define PWM2PHH5_clear_mask                      0xDF

#define PWM2PHH6                                 0x6
#define PWM2PHH6_address                         0xDA2
#define PWM2PHH6_position                        0x6
#define PWM2PHH6_size                            0x1
#define PWM2PHH6_value_mask                      0x40
#define PWM2PHH6_clear_mask                      0xBF

#define PWM2PHH7                                 0x7
#define PWM2PHH7_address                         0xDA2
#define PWM2PHH7_position                        0x7
#define PWM2PHH7_size                            0x1
#define PWM2PHH7_value_mask                      0x80
#define PWM2PHH7_clear_mask                      0x7F


/*--------------------------------------------------------------------------------------#
| PWM2DCL                                                                         0xDA3 |
#---------------------------------------------------------------------------------------#
| PWM2DCL7 | PWM2DCL6 | PWM2DCL5 | PWM2DCL4 | PWM2DCL3 | PWM2DCL2 | PWM2DCL1 | PWM2DCL0 |
#---------------------------------------------------------------------------------------#
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
#--------------------------------------------------------------------------------------*/

#define PWM2DCL_DC                               0x0
#define PWM2DCL_DC_address                       0xDA3
#define PWM2DCL_DC_position                      0x0
#define PWM2DCL_DC_size                          0x8
#define PWM2DCL_DC_value_mask                    0xFF
#define PWM2DCL_DC_clear_mask                    0x0

#define PWM2DCL0                                 0x0
#define PWM2DCL0_address                         0xDA3
#define PWM2DCL0_position                        0x0
#define PWM2DCL0_size                            0x1
#define PWM2DCL0_value_mask                      0x1
#define PWM2DCL0_clear_mask                      0xFE

#define PWM2DCL                                  0x0
#define PWM2DCL_address                          0xDA3
#define PWM2DCL_position                         0x0
#define PWM2DCL_size                             0x8
#define PWM2DCL_value_mask                       0xFF
#define PWM2DCL_clear_mask                       0x0

#define PWM2DCL1                                 0x1
#define PWM2DCL1_address                         0xDA3
#define PWM2DCL1_position                        0x1
#define PWM2DCL1_size                            0x1
#define PWM2DCL1_value_mask                      0x2
#define PWM2DCL1_clear_mask                      0xFD

#define PWM2DCL2                                 0x2
#define PWM2DCL2_address                         0xDA3
#define PWM2DCL2_position                        0x2
#define PWM2DCL2_size                            0x1
#define PWM2DCL2_value_mask                      0x4
#define PWM2DCL2_clear_mask                      0xFB

#define PWM2DCL3                                 0x3
#define PWM2DCL3_address                         0xDA3
#define PWM2DCL3_position                        0x3
#define PWM2DCL3_size                            0x1
#define PWM2DCL3_value_mask                      0x8
#define PWM2DCL3_clear_mask                      0xF7

#define PWM2DCL4                                 0x4
#define PWM2DCL4_address                         0xDA3
#define PWM2DCL4_position                        0x4
#define PWM2DCL4_size                            0x1
#define PWM2DCL4_value_mask                      0x10
#define PWM2DCL4_clear_mask                      0xEF

#define PWM2DCL5                                 0x5
#define PWM2DCL5_address                         0xDA3
#define PWM2DCL5_position                        0x5
#define PWM2DCL5_size                            0x1
#define PWM2DCL5_value_mask                      0x20
#define PWM2DCL5_clear_mask                      0xDF

#define PWM2DCL6                                 0x6
#define PWM2DCL6_address                         0xDA3
#define PWM2DCL6_position                        0x6
#define PWM2DCL6_size                            0x1
#define PWM2DCL6_value_mask                      0x40
#define PWM2DCL6_clear_mask                      0xBF

#define PWM2DCL7                                 0x7
#define PWM2DCL7_address                         0xDA3
#define PWM2DCL7_position                        0x7
#define PWM2DCL7_size                            0x1
#define PWM2DCL7_value_mask                      0x80
#define PWM2DCL7_clear_mask                      0x7F


/*--------------------------------------------------------------------------------------#
| PWM2DCH                                                                         0xDA4 |
#---------------------------------------------------------------------------------------#
| PWM2DCH7 | PWM2DCH6 | PWM2DCH5 | PWM2DCH4 | PWM2DCH3 | PWM2DCH2 | PWM2DCH1 | PWM2DCH0 |
#---------------------------------------------------------------------------------------#
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
#--------------------------------------------------------------------------------------*/

#define PWM2DCH0                                 0x0
#define PWM2DCH0_address                         0xDA4
#define PWM2DCH0_position                        0x0
#define PWM2DCH0_size                            0x1
#define PWM2DCH0_value_mask                      0x1
#define PWM2DCH0_clear_mask                      0xFE

#define PWM2DCH_DC                               0x0
#define PWM2DCH_DC_address                       0xDA4
#define PWM2DCH_DC_position                      0x0
#define PWM2DCH_DC_size                          0x8
#define PWM2DCH_DC_value_mask                    0xFF
#define PWM2DCH_DC_clear_mask                    0x0

#define PWM2DCH                                  0x0
#define PWM2DCH_address                          0xDA4
#define PWM2DCH_position                         0x0
#define PWM2DCH_size                             0x8
#define PWM2DCH_value_mask                       0xFF
#define PWM2DCH_clear_mask                       0x0

#define PWM2DCH1                                 0x1
#define PWM2DCH1_address                         0xDA4
#define PWM2DCH1_position                        0x1
#define PWM2DCH1_size                            0x1
#define PWM2DCH1_value_mask                      0x2
#define PWM2DCH1_clear_mask                      0xFD

#define PWM2DCH2                                 0x2
#define PWM2DCH2_address                         0xDA4
#define PWM2DCH2_position                        0x2
#define PWM2DCH2_size                            0x1
#define PWM2DCH2_value_mask                      0x4
#define PWM2DCH2_clear_mask                      0xFB

#define PWM2DCH3                                 0x3
#define PWM2DCH3_address                         0xDA4
#define PWM2DCH3_position                        0x3
#define PWM2DCH3_size                            0x1
#define PWM2DCH3_value_mask                      0x8
#define PWM2DCH3_clear_mask                      0xF7

#define PWM2DCH4                                 0x4
#define PWM2DCH4_address                         0xDA4
#define PWM2DCH4_position                        0x4
#define PWM2DCH4_size                            0x1
#define PWM2DCH4_value_mask                      0x10
#define PWM2DCH4_clear_mask                      0xEF

#define PWM2DCH5                                 0x5
#define PWM2DCH5_address                         0xDA4
#define PWM2DCH5_position                        0x5
#define PWM2DCH5_size                            0x1
#define PWM2DCH5_value_mask                      0x20
#define PWM2DCH5_clear_mask                      0xDF

#define PWM2DCH6                                 0x6
#define PWM2DCH6_address                         0xDA4
#define PWM2DCH6_position                        0x6
#define PWM2DCH6_size                            0x1
#define PWM2DCH6_value_mask                      0x40
#define PWM2DCH6_clear_mask                      0xBF

#define PWM2DCH7                                 0x7
#define PWM2DCH7_address                         0xDA4
#define PWM2DCH7_position                        0x7
#define PWM2DCH7_size                            0x1
#define PWM2DCH7_value_mask                      0x80
#define PWM2DCH7_clear_mask                      0x7F


/*--------------------------------------------------------------------------------------#
| PWM2PRL                                                                         0xDA5 |
#---------------------------------------------------------------------------------------#
| PWM2PRL7 | PWM2PRL6 | PWM2PRL5 | PWM2PRL4 | PWM2PRL3 | PWM2PRL2 | PWM2PRL1 | PWM2PRL0 |
#---------------------------------------------------------------------------------------#
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
#--------------------------------------------------------------------------------------*/

#define PWM2PRL0                                 0x0
#define PWM2PRL0_address                         0xDA5
#define PWM2PRL0_position                        0x0
#define PWM2PRL0_size                            0x1
#define PWM2PRL0_value_mask                      0x1
#define PWM2PRL0_clear_mask                      0xFE

#define PWM2PRL_PR                               0x0
#define PWM2PRL_PR_address                       0xDA5
#define PWM2PRL_PR_position                      0x0
#define PWM2PRL_PR_size                          0x8
#define PWM2PRL_PR_value_mask                    0xFF
#define PWM2PRL_PR_clear_mask                    0x0

#define PWM2PRL                                  0x0
#define PWM2PRL_address                          0xDA5
#define PWM2PRL_position                         0x0
#define PWM2PRL_size                             0x8
#define PWM2PRL_value_mask                       0xFF
#define PWM2PRL_clear_mask                       0x0

#define PWM2PRL1                                 0x1
#define PWM2PRL1_address                         0xDA5
#define PWM2PRL1_position                        0x1
#define PWM2PRL1_size                            0x1
#define PWM2PRL1_value_mask                      0x2
#define PWM2PRL1_clear_mask                      0xFD

#define PWM2PRL2                                 0x2
#define PWM2PRL2_address                         0xDA5
#define PWM2PRL2_position                        0x2
#define PWM2PRL2_size                            0x1
#define PWM2PRL2_value_mask                      0x4
#define PWM2PRL2_clear_mask                      0xFB

#define PWM2PRL3                                 0x3
#define PWM2PRL3_address                         0xDA5
#define PWM2PRL3_position                        0x3
#define PWM2PRL3_size                            0x1
#define PWM2PRL3_value_mask                      0x8
#define PWM2PRL3_clear_mask                      0xF7

#define PWM2PRL4                                 0x4
#define PWM2PRL4_address                         0xDA5
#define PWM2PRL4_position                        0x4
#define PWM2PRL4_size                            0x1
#define PWM2PRL4_value_mask                      0x10
#define PWM2PRL4_clear_mask                      0xEF

#define PWM2PRL5                                 0x5
#define PWM2PRL5_address                         0xDA5
#define PWM2PRL5_position                        0x5
#define PWM2PRL5_size                            0x1
#define PWM2PRL5_value_mask                      0x20
#define PWM2PRL5_clear_mask                      0xDF

#define PWM2PRL6                                 0x6
#define PWM2PRL6_address                         0xDA5
#define PWM2PRL6_position                        0x6
#define PWM2PRL6_size                            0x1
#define PWM2PRL6_value_mask                      0x40
#define PWM2PRL6_clear_mask                      0xBF

#define PWM2PRL7                                 0x7
#define PWM2PRL7_address                         0xDA5
#define PWM2PRL7_position                        0x7
#define PWM2PRL7_size                            0x1
#define PWM2PRL7_value_mask                      0x80
#define PWM2PRL7_clear_mask                      0x7F


/*--------------------------------------------------------------------------------------#
| PWM2PRH                                                                         0xDA6 |
#---------------------------------------------------------------------------------------#
| PWM2PRH7 | PWM2PRH6 | PWM2PRH5 | PWM2PRH4 | PWM2PRH3 | PWM2PRH2 | PWM2PRH1 | PWM2PRH0 |
#---------------------------------------------------------------------------------------#
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
#--------------------------------------------------------------------------------------*/

#define PWM2PRH0                                 0x0
#define PWM2PRH0_address                         0xDA6
#define PWM2PRH0_position                        0x0
#define PWM2PRH0_size                            0x1
#define PWM2PRH0_value_mask                      0x1
#define PWM2PRH0_clear_mask                      0xFE

#define PWM2PRH                                  0x0
#define PWM2PRH_address                          0xDA6
#define PWM2PRH_position                         0x0
#define PWM2PRH_size                             0x8
#define PWM2PRH_value_mask                       0xFF
#define PWM2PRH_clear_mask                       0x0

#define PWM2PRH_PR                               0x0
#define PWM2PRH_PR_address                       0xDA6
#define PWM2PRH_PR_position                      0x0
#define PWM2PRH_PR_size                          0x8
#define PWM2PRH_PR_value_mask                    0xFF
#define PWM2PRH_PR_clear_mask                    0x0

#define PWM2PRH1                                 0x1
#define PWM2PRH1_address                         0xDA6
#define PWM2PRH1_position                        0x1
#define PWM2PRH1_size                            0x1
#define PWM2PRH1_value_mask                      0x2
#define PWM2PRH1_clear_mask                      0xFD

#define PWM2PRH2                                 0x2
#define PWM2PRH2_address                         0xDA6
#define PWM2PRH2_position                        0x2
#define PWM2PRH2_size                            0x1
#define PWM2PRH2_value_mask                      0x4
#define PWM2PRH2_clear_mask                      0xFB

#define PWM2PRH3                                 0x3
#define PWM2PRH3_address                         0xDA6
#define PWM2PRH3_position                        0x3
#define PWM2PRH3_size                            0x1
#define PWM2PRH3_value_mask                      0x8
#define PWM2PRH3_clear_mask                      0xF7

#define PWM2PRH4                                 0x4
#define PWM2PRH4_address                         0xDA6
#define PWM2PRH4_position                        0x4
#define PWM2PRH4_size                            0x1
#define PWM2PRH4_value_mask                      0x10
#define PWM2PRH4_clear_mask                      0xEF

#define PWM2PRH5                                 0x5
#define PWM2PRH5_address                         0xDA6
#define PWM2PRH5_position                        0x5
#define PWM2PRH5_size                            0x1
#define PWM2PRH5_value_mask                      0x20
#define PWM2PRH5_clear_mask                      0xDF

#define PWM2PRH6                                 0x6
#define PWM2PRH6_address                         0xDA6
#define PWM2PRH6_position                        0x6
#define PWM2PRH6_size                            0x1
#define PWM2PRH6_value_mask                      0x40
#define PWM2PRH6_clear_mask                      0xBF

#define PWM2PRH7                                 0x7
#define PWM2PRH7_address                         0xDA6
#define PWM2PRH7_position                        0x7
#define PWM2PRH7_size                            0x1
#define PWM2PRH7_value_mask                      0x80
#define PWM2PRH7_clear_mask                      0x7F


/*--------------------------------------------------------------------------------------#
| PWM2OFL                                                                         0xDA7 |
#---------------------------------------------------------------------------------------#
| PWM2OFL7 | PWM2OFL6 | PWM2OFL5 | PWM2OFL4 | PWM2OFL3 | PWM2OFL2 | PWM2OFL1 | PWM2OFL0 |
#---------------------------------------------------------------------------------------#
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
#--------------------------------------------------------------------------------------*/

#define PWM2OFL                                  0x0
#define PWM2OFL_address                          0xDA7
#define PWM2OFL_position                         0x0
#define PWM2OFL_size                             0x8
#define PWM2OFL_value_mask                       0xFF
#define PWM2OFL_clear_mask                       0x0

#define PWM2OFL_OF                               0x0
#define PWM2OFL_OF_address                       0xDA7
#define PWM2OFL_OF_position                      0x0
#define PWM2OFL_OF_size                          0x8
#define PWM2OFL_OF_value_mask                    0xFF
#define PWM2OFL_OF_clear_mask                    0x0

#define PWM2OFL0                                 0x0
#define PWM2OFL0_address                         0xDA7
#define PWM2OFL0_position                        0x0
#define PWM2OFL0_size                            0x1
#define PWM2OFL0_value_mask                      0x1
#define PWM2OFL0_clear_mask                      0xFE

#define PWM2OFL1                                 0x1
#define PWM2OFL1_address                         0xDA7
#define PWM2OFL1_position                        0x1
#define PWM2OFL1_size                            0x1
#define PWM2OFL1_value_mask                      0x2
#define PWM2OFL1_clear_mask                      0xFD

#define PWM2OFL2                                 0x2
#define PWM2OFL2_address                         0xDA7
#define PWM2OFL2_position                        0x2
#define PWM2OFL2_size                            0x1
#define PWM2OFL2_value_mask                      0x4
#define PWM2OFL2_clear_mask                      0xFB

#define PWM2OFL3                                 0x3
#define PWM2OFL3_address                         0xDA7
#define PWM2OFL3_position                        0x3
#define PWM2OFL3_size                            0x1
#define PWM2OFL3_value_mask                      0x8
#define PWM2OFL3_clear_mask                      0xF7

#define PWM2OFL4                                 0x4
#define PWM2OFL4_address                         0xDA7
#define PWM2OFL4_position                        0x4
#define PWM2OFL4_size                            0x1
#define PWM2OFL4_value_mask                      0x10
#define PWM2OFL4_clear_mask                      0xEF

#define PWM2OFL5                                 0x5
#define PWM2OFL5_address                         0xDA7
#define PWM2OFL5_position                        0x5
#define PWM2OFL5_size                            0x1
#define PWM2OFL5_value_mask                      0x20
#define PWM2OFL5_clear_mask                      0xDF

#define PWM2OFL6                                 0x6
#define PWM2OFL6_address                         0xDA7
#define PWM2OFL6_position                        0x6
#define PWM2OFL6_size                            0x1
#define PWM2OFL6_value_mask                      0x40
#define PWM2OFL6_clear_mask                      0xBF

#define PWM2OFL7                                 0x7
#define PWM2OFL7_address                         0xDA7
#define PWM2OFL7_position                        0x7
#define PWM2OFL7_size                            0x1
#define PWM2OFL7_value_mask                      0x80
#define PWM2OFL7_clear_mask                      0x7F


/*--------------------------------------------------------------------------------------#
| PWM2OFH                                                                         0xDA8 |
#---------------------------------------------------------------------------------------#
| PWM2OFH7 | PWM2OFH6 | PWM2OFH5 | PWM2OFH4 | PWM2OFH3 | PWM2OFH2 | PWM2OFH1 | PWM2OFH0 |
#---------------------------------------------------------------------------------------#
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
#--------------------------------------------------------------------------------------*/

#define PWM2OFH                                  0x0
#define PWM2OFH_address                          0xDA8
#define PWM2OFH_position                         0x0
#define PWM2OFH_size                             0x8
#define PWM2OFH_value_mask                       0xFF
#define PWM2OFH_clear_mask                       0x0

#define PWM2OFH0                                 0x0
#define PWM2OFH0_address                         0xDA8
#define PWM2OFH0_position                        0x0
#define PWM2OFH0_size                            0x1
#define PWM2OFH0_value_mask                      0x1
#define PWM2OFH0_clear_mask                      0xFE

#define PWM2OFH_OF                               0x0
#define PWM2OFH_OF_address                       0xDA8
#define PWM2OFH_OF_position                      0x0
#define PWM2OFH_OF_size                          0x8
#define PWM2OFH_OF_value_mask                    0xFF
#define PWM2OFH_OF_clear_mask                    0x0

#define PWM2OFH1                                 0x1
#define PWM2OFH1_address                         0xDA8
#define PWM2OFH1_position                        0x1
#define PWM2OFH1_size                            0x1
#define PWM2OFH1_value_mask                      0x2
#define PWM2OFH1_clear_mask                      0xFD

#define PWM2OFH2                                 0x2
#define PWM2OFH2_address                         0xDA8
#define PWM2OFH2_position                        0x2
#define PWM2OFH2_size                            0x1
#define PWM2OFH2_value_mask                      0x4
#define PWM2OFH2_clear_mask                      0xFB

#define PWM2OFH3                                 0x3
#define PWM2OFH3_address                         0xDA8
#define PWM2OFH3_position                        0x3
#define PWM2OFH3_size                            0x1
#define PWM2OFH3_value_mask                      0x8
#define PWM2OFH3_clear_mask                      0xF7

#define PWM2OFH4                                 0x4
#define PWM2OFH4_address                         0xDA8
#define PWM2OFH4_position                        0x4
#define PWM2OFH4_size                            0x1
#define PWM2OFH4_value_mask                      0x10
#define PWM2OFH4_clear_mask                      0xEF

#define PWM2OFH5                                 0x5
#define PWM2OFH5_address                         0xDA8
#define PWM2OFH5_position                        0x5
#define PWM2OFH5_size                            0x1
#define PWM2OFH5_value_mask                      0x20
#define PWM2OFH5_clear_mask                      0xDF

#define PWM2OFH6                                 0x6
#define PWM2OFH6_address                         0xDA8
#define PWM2OFH6_position                        0x6
#define PWM2OFH6_size                            0x1
#define PWM2OFH6_value_mask                      0x40
#define PWM2OFH6_clear_mask                      0xBF

#define PWM2OFH7                                 0x7
#define PWM2OFH7_address                         0xDA8
#define PWM2OFH7_position                        0x7
#define PWM2OFH7_size                            0x1
#define PWM2OFH7_value_mask                      0x80
#define PWM2OFH7_clear_mask                      0x7F


/*----------------------------------------------------------------------------------------------#
| PWM2TMRL                                                                                0xDA9 |
#-----------------------------------------------------------------------------------------------#
| PWM2TMRL7 | PWM2TMRL6 | PWM2TMRL5 | PWM2TMRL4 | PWM2TMRL3 | PWM2TMRL2 | PWM2TMRL1 | PWM2TMRL0 |
#-----------------------------------------------------------------------------------------------#
| 7         | 6         | 5         | 4         | 3         | 2         | 1         | 0         |
#----------------------------------------------------------------------------------------------*/

#define PWM2TMRL_TMR                             0x0
#define PWM2TMRL_TMR_address                     0xDA9
#define PWM2TMRL_TMR_position                    0x0
#define PWM2TMRL_TMR_size                        0x8
#define PWM2TMRL_TMR_value_mask                  0xFF
#define PWM2TMRL_TMR_clear_mask                  0x0

#define PWM2TMRL0                                0x0
#define PWM2TMRL0_address                        0xDA9
#define PWM2TMRL0_position                       0x0
#define PWM2TMRL0_size                           0x1
#define PWM2TMRL0_value_mask                     0x1
#define PWM2TMRL0_clear_mask                     0xFE

#define PWM2TMRL                                 0x0
#define PWM2TMRL_address                         0xDA9
#define PWM2TMRL_position                        0x0
#define PWM2TMRL_size                            0x8
#define PWM2TMRL_value_mask                      0xFF
#define PWM2TMRL_clear_mask                      0x0

#define PWM2TMRL1                                0x1
#define PWM2TMRL1_address                        0xDA9
#define PWM2TMRL1_position                       0x1
#define PWM2TMRL1_size                           0x1
#define PWM2TMRL1_value_mask                     0x2
#define PWM2TMRL1_clear_mask                     0xFD

#define PWM2TMRL2                                0x2
#define PWM2TMRL2_address                        0xDA9
#define PWM2TMRL2_position                       0x2
#define PWM2TMRL2_size                           0x1
#define PWM2TMRL2_value_mask                     0x4
#define PWM2TMRL2_clear_mask                     0xFB

#define PWM2TMRL3                                0x3
#define PWM2TMRL3_address                        0xDA9
#define PWM2TMRL3_position                       0x3
#define PWM2TMRL3_size                           0x1
#define PWM2TMRL3_value_mask                     0x8
#define PWM2TMRL3_clear_mask                     0xF7

#define PWM2TMRL4                                0x4
#define PWM2TMRL4_address                        0xDA9
#define PWM2TMRL4_position                       0x4
#define PWM2TMRL4_size                           0x1
#define PWM2TMRL4_value_mask                     0x10
#define PWM2TMRL4_clear_mask                     0xEF

#define PWM2TMRL5                                0x5
#define PWM2TMRL5_address                        0xDA9
#define PWM2TMRL5_position                       0x5
#define PWM2TMRL5_size                           0x1
#define PWM2TMRL5_value_mask                     0x20
#define PWM2TMRL5_clear_mask                     0xDF

#define PWM2TMRL6                                0x6
#define PWM2TMRL6_address                        0xDA9
#define PWM2TMRL6_position                       0x6
#define PWM2TMRL6_size                           0x1
#define PWM2TMRL6_value_mask                     0x40
#define PWM2TMRL6_clear_mask                     0xBF

#define PWM2TMRL7                                0x7
#define PWM2TMRL7_address                        0xDA9
#define PWM2TMRL7_position                       0x7
#define PWM2TMRL7_size                           0x1
#define PWM2TMRL7_value_mask                     0x80
#define PWM2TMRL7_clear_mask                     0x7F


/*----------------------------------------------------------------------------------------------#
| PWM2TMRH                                                                                0xDAA |
#-----------------------------------------------------------------------------------------------#
| PWM2TMRH7 | PWM2TMRH6 | PWM2TMRH5 | PWM2TMRH4 | PWM2TMRH3 | PWM2TMRH2 | PWM2TMRH1 | PWM2TMRH0 |
#-----------------------------------------------------------------------------------------------#
| 7         | 6         | 5         | 4         | 3         | 2         | 1         | 0         |
#----------------------------------------------------------------------------------------------*/

#define PWM2TMRH_TMR                             0x0
#define PWM2TMRH_TMR_address                     0xDAA
#define PWM2TMRH_TMR_position                    0x0
#define PWM2TMRH_TMR_size                        0x8
#define PWM2TMRH_TMR_value_mask                  0xFF
#define PWM2TMRH_TMR_clear_mask                  0x0

#define PWM2TMRH                                 0x0
#define PWM2TMRH_address                         0xDAA
#define PWM2TMRH_position                        0x0
#define PWM2TMRH_size                            0x8
#define PWM2TMRH_value_mask                      0xFF
#define PWM2TMRH_clear_mask                      0x0

#define PWM2TMRH0                                0x0
#define PWM2TMRH0_address                        0xDAA
#define PWM2TMRH0_position                       0x0
#define PWM2TMRH0_size                           0x1
#define PWM2TMRH0_value_mask                     0x1
#define PWM2TMRH0_clear_mask                     0xFE

#define PWM2TMRH1                                0x1
#define PWM2TMRH1_address                        0xDAA
#define PWM2TMRH1_position                       0x1
#define PWM2TMRH1_size                           0x1
#define PWM2TMRH1_value_mask                     0x2
#define PWM2TMRH1_clear_mask                     0xFD

#define PWM2TMRH2                                0x2
#define PWM2TMRH2_address                        0xDAA
#define PWM2TMRH2_position                       0x2
#define PWM2TMRH2_size                           0x1
#define PWM2TMRH2_value_mask                     0x4
#define PWM2TMRH2_clear_mask                     0xFB

#define PWM2TMRH3                                0x3
#define PWM2TMRH3_address                        0xDAA
#define PWM2TMRH3_position                       0x3
#define PWM2TMRH3_size                           0x1
#define PWM2TMRH3_value_mask                     0x8
#define PWM2TMRH3_clear_mask                     0xF7

#define PWM2TMRH4                                0x4
#define PWM2TMRH4_address                        0xDAA
#define PWM2TMRH4_position                       0x4
#define PWM2TMRH4_size                           0x1
#define PWM2TMRH4_value_mask                     0x10
#define PWM2TMRH4_clear_mask                     0xEF

#define PWM2TMRH5                                0x5
#define PWM2TMRH5_address                        0xDAA
#define PWM2TMRH5_position                       0x5
#define PWM2TMRH5_size                           0x1
#define PWM2TMRH5_value_mask                     0x20
#define PWM2TMRH5_clear_mask                     0xDF

#define PWM2TMRH6                                0x6
#define PWM2TMRH6_address                        0xDAA
#define PWM2TMRH6_position                       0x6
#define PWM2TMRH6_size                           0x1
#define PWM2TMRH6_value_mask                     0x40
#define PWM2TMRH6_clear_mask                     0xBF

#define PWM2TMRH7                                0x7
#define PWM2TMRH7_address                        0xDAA
#define PWM2TMRH7_position                       0x7
#define PWM2TMRH7_size                           0x1
#define PWM2TMRH7_value_mask                     0x80
#define PWM2TMRH7_clear_mask                     0x7F


/*------------------------------------------------------------------------#
| PWM2CON                                                           0xDAB |
#-------------------------------------------------------------------------#
| PWM2EN | PWM2OE | PWM2CON_OUT | PWM2POL | PWM2MODE1 | PWM2MODE0 | - | - |
#-------------------------------------------------------------------------#
| 7      | 6      | 5           | 4       | 3         | 2         | 1 | 0 |
#------------------------------------------------------------------------*/

#define PWM2CON                                  0x0
#define PWM2CON_address                          0xDAB
#define PWM2CON_position                         0x0
#define PWM2CON_size                             0x8
#define PWM2CON_value_mask                       0xFF
#define PWM2CON_clear_mask                       0x0

#define PWM2MODE0                                0x2
#define PWM2MODE0_address                        0xDAB
#define PWM2MODE0_position                       0x2
#define PWM2MODE0_size                           0x1
#define PWM2MODE0_value_mask                     0x4
#define PWM2MODE0_clear_mask                     0xFB

#define PWM2MODE                                 0x2
#define PWM2MODE_address                         0xDAB
#define PWM2MODE_position                        0x2
#define PWM2MODE_size                            0x2
#define PWM2MODE_value_mask                      0xC
#define PWM2MODE_clear_mask                      0xF3

#define PWM2CON_MODE0                            0x2
#define PWM2CON_MODE0_address                    0xDAB
#define PWM2CON_MODE0_position                   0x2
#define PWM2CON_MODE0_size                       0x1
#define PWM2CON_MODE0_value_mask                 0x4
#define PWM2CON_MODE0_clear_mask                 0xFB

#define PWM2CON_MODE                             0x2
#define PWM2CON_MODE_address                     0xDAB
#define PWM2CON_MODE_position                    0x2
#define PWM2CON_MODE_size                        0x2
#define PWM2CON_MODE_value_mask                  0xC
#define PWM2CON_MODE_clear_mask                  0xF3

#define PWM2MODE1                                0x3
#define PWM2MODE1_address                        0xDAB
#define PWM2MODE1_position                       0x3
#define PWM2MODE1_size                           0x1
#define PWM2MODE1_value_mask                     0x8
#define PWM2MODE1_clear_mask                     0xF7

#define PWM2CON_MODE1                            0x3
#define PWM2CON_MODE1_address                    0xDAB
#define PWM2CON_MODE1_position                   0x3
#define PWM2CON_MODE1_size                       0x1
#define PWM2CON_MODE1_value_mask                 0x8
#define PWM2CON_MODE1_clear_mask                 0xF7

#define PWM2POL                                  0x4
#define PWM2POL_address                          0xDAB
#define PWM2POL_position                         0x4
#define PWM2POL_size                             0x1
#define PWM2POL_value_mask                       0x10
#define PWM2POL_clear_mask                       0xEF

#define PWM2CON_POL                              0x4
#define PWM2CON_POL_address                      0xDAB
#define PWM2CON_POL_position                     0x4
#define PWM2CON_POL_size                         0x1
#define PWM2CON_POL_value_mask                   0x10
#define PWM2CON_POL_clear_mask                   0xEF

#define PWM2CON_OUT                              0x5
#define PWM2CON_OUT_address                      0xDAB
#define PWM2CON_OUT_position                     0x5
#define PWM2CON_OUT_size                         0x1
#define PWM2CON_OUT_value_mask                   0x20
#define PWM2CON_OUT_clear_mask                   0xDF

#define PWM2OUT                                  0x5
#define PWM2OUT_address                          0xDAB
#define PWM2OUT_position                         0x5
#define PWM2OUT_size                             0x1
#define PWM2OUT_value_mask                       0x20
#define PWM2OUT_clear_mask                       0xDF

#define PWM2OE                                   0x6
#define PWM2OE_address                           0xDAB
#define PWM2OE_position                          0x6
#define PWM2OE_size                              0x1
#define PWM2OE_value_mask                        0x40
#define PWM2OE_clear_mask                        0xBF

#define PWM2CON_OE                               0x6
#define PWM2CON_OE_address                       0xDAB
#define PWM2CON_OE_position                      0x6
#define PWM2CON_OE_size                          0x1
#define PWM2CON_OE_value_mask                    0x40
#define PWM2CON_OE_clear_mask                    0xBF

#define PWM2EN                                   0x7
#define PWM2EN_address                           0xDAB
#define PWM2EN_position                          0x7
#define PWM2EN_size                              0x1
#define PWM2EN_value_mask                        0x80
#define PWM2EN_clear_mask                        0x7F

#define PWM2CON_EN                               0x7
#define PWM2CON_EN_address                       0xDAB
#define PWM2CON_EN_position                      0x7
#define PWM2CON_EN_size                          0x1
#define PWM2CON_EN_value_mask                    0x80
#define PWM2CON_EN_clear_mask                    0x7F


/*-------------------------------------------------------------------------#
| PWM2INTE                                                           0xDAC |
#--------------------------------------------------------------------------#
| - | - | - | - | PWM2INTE_OFIE | PWM2PHIE | PWM2INTE_DCIE | PWM2INTE_PRIE |
#--------------------------------------------------------------------------#
| 7 | 6 | 5 | 4 | 3             | 2        | 1             | 0             |
#-------------------------------------------------------------------------*/

#define PWM2INTE                                 0x0
#define PWM2INTE_address                         0xDAC
#define PWM2INTE_position                        0x0
#define PWM2INTE_size                            0x8
#define PWM2INTE_value_mask                      0xFF
#define PWM2INTE_clear_mask                      0x0

#define PWM2INTE_PRIE                            0x0
#define PWM2INTE_PRIE_address                    0xDAC
#define PWM2INTE_PRIE_position                   0x0
#define PWM2INTE_PRIE_size                       0x1
#define PWM2INTE_PRIE_value_mask                 0x1
#define PWM2INTE_PRIE_clear_mask                 0xFE

#define PWM2PRIE                                 0x0
#define PWM2PRIE_address                         0xDAC
#define PWM2PRIE_position                        0x0
#define PWM2PRIE_size                            0x1
#define PWM2PRIE_value_mask                      0x1
#define PWM2PRIE_clear_mask                      0xFE

#define PWM2INTE_DCIE                            0x1
#define PWM2INTE_DCIE_address                    0xDAC
#define PWM2INTE_DCIE_position                   0x1
#define PWM2INTE_DCIE_size                       0x1
#define PWM2INTE_DCIE_value_mask                 0x2
#define PWM2INTE_DCIE_clear_mask                 0xFD

#define PWM2DCIE                                 0x1
#define PWM2DCIE_address                         0xDAC
#define PWM2DCIE_position                        0x1
#define PWM2DCIE_size                            0x1
#define PWM2DCIE_value_mask                      0x2
#define PWM2DCIE_clear_mask                      0xFD

#define PWM2INTE_PHIE                            0x2
#define PWM2INTE_PHIE_address                    0xDAC
#define PWM2INTE_PHIE_position                   0x2
#define PWM2INTE_PHIE_size                       0x1
#define PWM2INTE_PHIE_value_mask                 0x4
#define PWM2INTE_PHIE_clear_mask                 0xFB

#define PWM2PHIE                                 0x2
#define PWM2PHIE_address                         0xDAC
#define PWM2PHIE_position                        0x2
#define PWM2PHIE_size                            0x1
#define PWM2PHIE_value_mask                      0x4
#define PWM2PHIE_clear_mask                      0xFB

#define PWM2INTE_OFIE                            0x3
#define PWM2INTE_OFIE_address                    0xDAC
#define PWM2INTE_OFIE_position                   0x3
#define PWM2INTE_OFIE_size                       0x1
#define PWM2INTE_OFIE_value_mask                 0x8
#define PWM2INTE_OFIE_clear_mask                 0xF7

#define PWM2OFIE                                 0x3
#define PWM2OFIE_address                         0xDAC
#define PWM2OFIE_position                        0x3
#define PWM2OFIE_size                            0x1
#define PWM2OFIE_value_mask                      0x8
#define PWM2OFIE_clear_mask                      0xF7


/*-------------------------------------------------------------------------#
| PWM2INTF                                                           0xDAD |
#--------------------------------------------------------------------------#
| - | - | - | - | PWM2INTF_OFIF | PWM2PHIF | PWM2INTF_DCIF | PWM2INTF_PRIF |
#--------------------------------------------------------------------------#
| 7 | 6 | 5 | 4 | 3             | 2        | 1             | 0             |
#-------------------------------------------------------------------------*/

#define PWM2INTF                                 0x0
#define PWM2INTF_address                         0xDAD
#define PWM2INTF_position                        0x0
#define PWM2INTF_size                            0x8
#define PWM2INTF_value_mask                      0xFF
#define PWM2INTF_clear_mask                      0x0

#define PWM2INTF_PRIF                            0x0
#define PWM2INTF_PRIF_address                    0xDAD
#define PWM2INTF_PRIF_position                   0x0
#define PWM2INTF_PRIF_size                       0x1
#define PWM2INTF_PRIF_value_mask                 0x1
#define PWM2INTF_PRIF_clear_mask                 0xFE

#define PWM2PRIF                                 0x0
#define PWM2PRIF_address                         0xDAD
#define PWM2PRIF_position                        0x0
#define PWM2PRIF_size                            0x1
#define PWM2PRIF_value_mask                      0x1
#define PWM2PRIF_clear_mask                      0xFE

#define PWM2INTF_DCIF                            0x1
#define PWM2INTF_DCIF_address                    0xDAD
#define PWM2INTF_DCIF_position                   0x1
#define PWM2INTF_DCIF_size                       0x1
#define PWM2INTF_DCIF_value_mask                 0x2
#define PWM2INTF_DCIF_clear_mask                 0xFD

#define PWM2DCIF                                 0x1
#define PWM2DCIF_address                         0xDAD
#define PWM2DCIF_position                        0x1
#define PWM2DCIF_size                            0x1
#define PWM2DCIF_value_mask                      0x2
#define PWM2DCIF_clear_mask                      0xFD

#define PWM2INTF_PHIF                            0x2
#define PWM2INTF_PHIF_address                    0xDAD
#define PWM2INTF_PHIF_position                   0x2
#define PWM2INTF_PHIF_size                       0x1
#define PWM2INTF_PHIF_value_mask                 0x4
#define PWM2INTF_PHIF_clear_mask                 0xFB

#define PWM2PHIF                                 0x2
#define PWM2PHIF_address                         0xDAD
#define PWM2PHIF_position                        0x2
#define PWM2PHIF_size                            0x1
#define PWM2PHIF_value_mask                      0x4
#define PWM2PHIF_clear_mask                      0xFB

#define PWM2INTF_OFIF                            0x3
#define PWM2INTF_OFIF_address                    0xDAD
#define PWM2INTF_OFIF_position                   0x3
#define PWM2INTF_OFIF_size                       0x1
#define PWM2INTF_OFIF_value_mask                 0x8
#define PWM2INTF_OFIF_clear_mask                 0xF7

#define PWM2OFIF                                 0x3
#define PWM2OFIF_address                         0xDAD
#define PWM2OFIF_position                        0x3
#define PWM2OFIF_size                            0x1
#define PWM2OFIF_value_mask                      0x8
#define PWM2OFIF_clear_mask                      0xF7


/*--------------------------------------------------------------------------#
| PWM2CLKCON                                                          0xDAE |
#---------------------------------------------------------------------------#
| - | PWM2PS2 | PWM2PS1 | PWM2PS0 | - | - | PWM2CLKCON_CS1 | PWM2CLKCON_CS0 |
#---------------------------------------------------------------------------#
| 7 | 6       | 5       | 4       | 3 | 2 | 1              | 0              |
#--------------------------------------------------------------------------*/

#define PWM2CLKCON                               0x0
#define PWM2CLKCON_address                       0xDAE
#define PWM2CLKCON_position                      0x0
#define PWM2CLKCON_size                          0x8
#define PWM2CLKCON_value_mask                    0xFF
#define PWM2CLKCON_clear_mask                    0x0

#define PWM2CS0                                  0x0
#define PWM2CS0_address                          0xDAE
#define PWM2CS0_position                         0x0
#define PWM2CS0_size                             0x1
#define PWM2CS0_value_mask                       0x1
#define PWM2CS0_clear_mask                       0xFE

#define PWM2CS                                   0x0
#define PWM2CS_address                           0xDAE
#define PWM2CS_position                          0x0
#define PWM2CS_size                              0x3
#define PWM2CS_value_mask                        0x7
#define PWM2CS_clear_mask                        0xF8

#define PWM2CLKCON_CS0                           0x0
#define PWM2CLKCON_CS0_address                   0xDAE
#define PWM2CLKCON_CS0_position                  0x0
#define PWM2CLKCON_CS0_size                      0x1
#define PWM2CLKCON_CS0_value_mask                0x1
#define PWM2CLKCON_CS0_clear_mask                0xFE

#define PWM2CLKCON_CS                            0x0
#define PWM2CLKCON_CS_address                    0xDAE
#define PWM2CLKCON_CS_position                   0x0
#define PWM2CLKCON_CS_size                       0x2
#define PWM2CLKCON_CS_value_mask                 0x3
#define PWM2CLKCON_CS_clear_mask                 0xFC

#define PWM2CLKCON_CS1                           0x1
#define PWM2CLKCON_CS1_address                   0xDAE
#define PWM2CLKCON_CS1_position                  0x1
#define PWM2CLKCON_CS1_size                      0x1
#define PWM2CLKCON_CS1_value_mask                0x2
#define PWM2CLKCON_CS1_clear_mask                0xFD

#define PWM2CS1                                  0x1
#define PWM2CS1_address                          0xDAE
#define PWM2CS1_position                         0x1
#define PWM2CS1_size                             0x1
#define PWM2CS1_value_mask                       0x2
#define PWM2CS1_clear_mask                       0xFD

#define PWM2CLKCON_PS                            0x4
#define PWM2CLKCON_PS_address                    0xDAE
#define PWM2CLKCON_PS_position                   0x4
#define PWM2CLKCON_PS_size                       0x3
#define PWM2CLKCON_PS_value_mask                 0x70
#define PWM2CLKCON_PS_clear_mask                 0x8F

#define PWM2CLKCON_PS0                           0x4
#define PWM2CLKCON_PS0_address                   0xDAE
#define PWM2CLKCON_PS0_position                  0x4
#define PWM2CLKCON_PS0_size                      0x1
#define PWM2CLKCON_PS0_value_mask                0x10
#define PWM2CLKCON_PS0_clear_mask                0xEF

#define PWM2PS0                                  0x4
#define PWM2PS0_address                          0xDAE
#define PWM2PS0_position                         0x4
#define PWM2PS0_size                             0x1
#define PWM2PS0_value_mask                       0x10
#define PWM2PS0_clear_mask                       0xEF

#define PWM2PS                                   0x4
#define PWM2PS_address                           0xDAE
#define PWM2PS_position                          0x4
#define PWM2PS_size                              0x3
#define PWM2PS_value_mask                        0x70
#define PWM2PS_clear_mask                        0x8F

#define PWM2PS1                                  0x5
#define PWM2PS1_address                          0xDAE
#define PWM2PS1_position                         0x5
#define PWM2PS1_size                             0x1
#define PWM2PS1_value_mask                       0x20
#define PWM2PS1_clear_mask                       0xDF

#define PWM2CLKCON_PS1                           0x5
#define PWM2CLKCON_PS1_address                   0xDAE
#define PWM2CLKCON_PS1_position                  0x5
#define PWM2CLKCON_PS1_size                      0x1
#define PWM2CLKCON_PS1_value_mask                0x20
#define PWM2CLKCON_PS1_clear_mask                0xDF

#define PWM2PS2                                  0x6
#define PWM2PS2_address                          0xDAE
#define PWM2PS2_position                         0x6
#define PWM2PS2_size                             0x1
#define PWM2PS2_value_mask                       0x40
#define PWM2PS2_clear_mask                       0xBF

#define PWM2CLKCON_PS2                           0x6
#define PWM2CLKCON_PS2_address                   0xDAE
#define PWM2CLKCON_PS2_position                  0x6
#define PWM2CLKCON_PS2_size                      0x1
#define PWM2CLKCON_PS2_value_mask                0x40
#define PWM2CLKCON_PS2_clear_mask                0xBF


/*-------------------------------------------------------#
| PWM2LDCON                                        0xDAF |
#--------------------------------------------------------#
| PWM2LD | PWM2LDM | - | - | - | - | PWM2LDS1 | PWM2LDS0 |
#--------------------------------------------------------#
| 7      | 6       | 5 | 4 | 3 | 2 | 1        | 0        |
#-------------------------------------------------------*/

#define PWM2LDCON                                0x0
#define PWM2LDCON_address                        0xDAF
#define PWM2LDCON_position                       0x0
#define PWM2LDCON_size                           0x8
#define PWM2LDCON_value_mask                     0xFF
#define PWM2LDCON_clear_mask                     0x0

#define PWM2LDCON_LDS0                           0x0
#define PWM2LDCON_LDS0_address                   0xDAF
#define PWM2LDCON_LDS0_position                  0x0
#define PWM2LDCON_LDS0_size                      0x1
#define PWM2LDCON_LDS0_value_mask                0x1
#define PWM2LDCON_LDS0_clear_mask                0xFE

#define PWM2LDS0                                 0x0
#define PWM2LDS0_address                         0xDAF
#define PWM2LDS0_position                        0x0
#define PWM2LDS0_size                            0x1
#define PWM2LDS0_value_mask                      0x1
#define PWM2LDS0_clear_mask                      0xFE

#define PWM2LDCON_LDS                            0x0
#define PWM2LDCON_LDS_address                    0xDAF
#define PWM2LDCON_LDS_position                   0x0
#define PWM2LDCON_LDS_size                       0x2
#define PWM2LDCON_LDS_value_mask                 0x3
#define PWM2LDCON_LDS_clear_mask                 0xFC

#define PWM2LDS                                  0x0
#define PWM2LDS_address                          0xDAF
#define PWM2LDS_position                         0x0
#define PWM2LDS_size                             0x2
#define PWM2LDS_value_mask                       0x3
#define PWM2LDS_clear_mask                       0xFC

#define PWM2LDS1                                 0x1
#define PWM2LDS1_address                         0xDAF
#define PWM2LDS1_position                        0x1
#define PWM2LDS1_size                            0x1
#define PWM2LDS1_value_mask                      0x2
#define PWM2LDS1_clear_mask                      0xFD

#define PWM2LDCON_LDS1                           0x1
#define PWM2LDCON_LDS1_address                   0xDAF
#define PWM2LDCON_LDS1_position                  0x1
#define PWM2LDCON_LDS1_size                      0x1
#define PWM2LDCON_LDS1_value_mask                0x2
#define PWM2LDCON_LDS1_clear_mask                0xFD

#define PWM2LDM                                  0x6
#define PWM2LDM_address                          0xDAF
#define PWM2LDM_position                         0x6
#define PWM2LDM_size                             0x1
#define PWM2LDM_value_mask                       0x40
#define PWM2LDM_clear_mask                       0xBF

#define PWM2LDCON_LDT                            0x6
#define PWM2LDCON_LDT_address                    0xDAF
#define PWM2LDCON_LDT_position                   0x6
#define PWM2LDCON_LDT_size                       0x1
#define PWM2LDCON_LDT_value_mask                 0x40
#define PWM2LDCON_LDT_clear_mask                 0xBF

#define PWM2LD                                   0x7
#define PWM2LD_address                           0xDAF
#define PWM2LD_position                          0x7
#define PWM2LD_size                              0x1
#define PWM2LD_value_mask                        0x80
#define PWM2LD_clear_mask                        0x7F

#define PWM2LDCON_LDA                            0x7
#define PWM2LDCON_LDA_address                    0xDAF
#define PWM2LDCON_LDA_position                   0x7
#define PWM2LDCON_LDA_size                       0x1
#define PWM2LDCON_LDA_value_mask                 0x80
#define PWM2LDCON_LDA_clear_mask                 0x7F


/*-----------------------------------------------------------------------------------------#
| PWM2OFCON                                                                          0xDB0 |
#------------------------------------------------------------------------------------------#
| - | PWM2OFCON_OFM1 | PWM2OFCON_OFM0 | PWM2OFMC | - | - | PWM2OFCON_OFS1 | PWM2OFCON_OFS0 |
#------------------------------------------------------------------------------------------#
| 7 | 6              | 5              | 4        | 3 | 2 | 1              | 0              |
#-----------------------------------------------------------------------------------------*/

#define PWM2OFCON                                0x0
#define PWM2OFCON_address                        0xDB0
#define PWM2OFCON_position                       0x0
#define PWM2OFCON_size                           0x8
#define PWM2OFCON_value_mask                     0xFF
#define PWM2OFCON_clear_mask                     0x0

#define PWM2OFS                                  0x0
#define PWM2OFS_address                          0xDB0
#define PWM2OFS_position                         0x0
#define PWM2OFS_size                             0x2
#define PWM2OFS_value_mask                       0x3
#define PWM2OFS_clear_mask                       0xFC

#define PWM2OFS0                                 0x0
#define PWM2OFS0_address                         0xDB0
#define PWM2OFS0_position                        0x0
#define PWM2OFS0_size                            0x1
#define PWM2OFS0_value_mask                      0x1
#define PWM2OFS0_clear_mask                      0xFE

#define PWM2OFCON_OFS0                           0x0
#define PWM2OFCON_OFS0_address                   0xDB0
#define PWM2OFCON_OFS0_position                  0x0
#define PWM2OFCON_OFS0_size                      0x1
#define PWM2OFCON_OFS0_value_mask                0x1
#define PWM2OFCON_OFS0_clear_mask                0xFE

#define PWM2OFCON_OFS                            0x0
#define PWM2OFCON_OFS_address                    0xDB0
#define PWM2OFCON_OFS_position                   0x0
#define PWM2OFCON_OFS_size                       0x2
#define PWM2OFCON_OFS_value_mask                 0x3
#define PWM2OFCON_OFS_clear_mask                 0xFC

#define PWM2OFCON_OFS1                           0x1
#define PWM2OFCON_OFS1_address                   0xDB0
#define PWM2OFCON_OFS1_position                  0x1
#define PWM2OFCON_OFS1_size                      0x1
#define PWM2OFCON_OFS1_value_mask                0x2
#define PWM2OFCON_OFS1_clear_mask                0xFD

#define PWM2OFS1                                 0x1
#define PWM2OFS1_address                         0xDB0
#define PWM2OFS1_position                        0x1
#define PWM2OFS1_size                            0x1
#define PWM2OFS1_value_mask                      0x2
#define PWM2OFS1_clear_mask                      0xFD

#define PWM2OFMC                                 0x4
#define PWM2OFMC_address                         0xDB0
#define PWM2OFMC_position                        0x4
#define PWM2OFMC_size                            0x1
#define PWM2OFMC_value_mask                      0x10
#define PWM2OFMC_clear_mask                      0xEF

#define PWM2OFCON_OFO                            0x4
#define PWM2OFCON_OFO_address                    0xDB0
#define PWM2OFCON_OFO_position                   0x4
#define PWM2OFCON_OFO_size                       0x1
#define PWM2OFCON_OFO_value_mask                 0x10
#define PWM2OFCON_OFO_clear_mask                 0xEF

#define PWM2OFCON_OFM0                           0x5
#define PWM2OFCON_OFM0_address                   0xDB0
#define PWM2OFCON_OFM0_position                  0x5
#define PWM2OFCON_OFM0_size                      0x1
#define PWM2OFCON_OFM0_value_mask                0x20
#define PWM2OFCON_OFM0_clear_mask                0xDF

#define PWM2OFM                                  0x5
#define PWM2OFM_address                          0xDB0
#define PWM2OFM_position                         0x5
#define PWM2OFM_size                             0x2
#define PWM2OFM_value_mask                       0x60
#define PWM2OFM_clear_mask                       0x9F

#define PWM2OFCON_OFM                            0x5
#define PWM2OFCON_OFM_address                    0xDB0
#define PWM2OFCON_OFM_position                   0x5
#define PWM2OFCON_OFM_size                       0x2
#define PWM2OFCON_OFM_value_mask                 0x60
#define PWM2OFCON_OFM_clear_mask                 0x9F

#define PWM2OFM0                                 0x5
#define PWM2OFM0_address                         0xDB0
#define PWM2OFM0_position                        0x5
#define PWM2OFM0_size                            0x1
#define PWM2OFM0_value_mask                      0x20
#define PWM2OFM0_clear_mask                      0xDF

#define PWM2OFCON_OFM1                           0x6
#define PWM2OFCON_OFM1_address                   0xDB0
#define PWM2OFCON_OFM1_position                  0x6
#define PWM2OFCON_OFM1_size                      0x1
#define PWM2OFCON_OFM1_value_mask                0x40
#define PWM2OFCON_OFM1_clear_mask                0xBF

#define PWM2OFM1                                 0x6
#define PWM2OFM1_address                         0xDB0
#define PWM2OFM1_position                        0x6
#define PWM2OFM1_size                            0x1
#define PWM2OFM1_value_mask                      0x40
#define PWM2OFM1_clear_mask                      0xBF


/*--------------------------------------------------------------------------------------#
| PWM3PHL                                                                         0xDB1 |
#---------------------------------------------------------------------------------------#
| PWM3PHL7 | PWM3PHL6 | PWM3PHL5 | PWM3PHL4 | PWM3PHL3 | PWM3PHL2 | PWM3PHL1 | PWM3PHL0 |
#---------------------------------------------------------------------------------------#
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
#--------------------------------------------------------------------------------------*/

#define PWM3PHL                                  0x0
#define PWM3PHL_address                          0xDB1
#define PWM3PHL_position                         0x0
#define PWM3PHL_size                             0x8
#define PWM3PHL_value_mask                       0xFF
#define PWM3PHL_clear_mask                       0x0

#define PWM3PHL_PH                               0x0
#define PWM3PHL_PH_address                       0xDB1
#define PWM3PHL_PH_position                      0x0
#define PWM3PHL_PH_size                          0x8
#define PWM3PHL_PH_value_mask                    0xFF
#define PWM3PHL_PH_clear_mask                    0x0

#define PWM3PHL0                                 0x0
#define PWM3PHL0_address                         0xDB1
#define PWM3PHL0_position                        0x0
#define PWM3PHL0_size                            0x1
#define PWM3PHL0_value_mask                      0x1
#define PWM3PHL0_clear_mask                      0xFE

#define PWM3PHL1                                 0x1
#define PWM3PHL1_address                         0xDB1
#define PWM3PHL1_position                        0x1
#define PWM3PHL1_size                            0x1
#define PWM3PHL1_value_mask                      0x2
#define PWM3PHL1_clear_mask                      0xFD

#define PWM3PHL2                                 0x2
#define PWM3PHL2_address                         0xDB1
#define PWM3PHL2_position                        0x2
#define PWM3PHL2_size                            0x1
#define PWM3PHL2_value_mask                      0x4
#define PWM3PHL2_clear_mask                      0xFB

#define PWM3PHL3                                 0x3
#define PWM3PHL3_address                         0xDB1
#define PWM3PHL3_position                        0x3
#define PWM3PHL3_size                            0x1
#define PWM3PHL3_value_mask                      0x8
#define PWM3PHL3_clear_mask                      0xF7

#define PWM3PHL4                                 0x4
#define PWM3PHL4_address                         0xDB1
#define PWM3PHL4_position                        0x4
#define PWM3PHL4_size                            0x1
#define PWM3PHL4_value_mask                      0x10
#define PWM3PHL4_clear_mask                      0xEF

#define PWM3PHL5                                 0x5
#define PWM3PHL5_address                         0xDB1
#define PWM3PHL5_position                        0x5
#define PWM3PHL5_size                            0x1
#define PWM3PHL5_value_mask                      0x20
#define PWM3PHL5_clear_mask                      0xDF

#define PWM3PHL6                                 0x6
#define PWM3PHL6_address                         0xDB1
#define PWM3PHL6_position                        0x6
#define PWM3PHL6_size                            0x1
#define PWM3PHL6_value_mask                      0x40
#define PWM3PHL6_clear_mask                      0xBF

#define PWM3PHL7                                 0x7
#define PWM3PHL7_address                         0xDB1
#define PWM3PHL7_position                        0x7
#define PWM3PHL7_size                            0x1
#define PWM3PHL7_value_mask                      0x80
#define PWM3PHL7_clear_mask                      0x7F


/*--------------------------------------------------------------------------------------#
| PWM3PHH                                                                         0xDB2 |
#---------------------------------------------------------------------------------------#
| PWM3PHH7 | PWM3PHH6 | PWM3PHH5 | PWM3PHH4 | PWM3PHH3 | PWM3PHH2 | PWM3PHH1 | PWM3PHH0 |
#---------------------------------------------------------------------------------------#
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
#--------------------------------------------------------------------------------------*/

#define PWM3PHH0                                 0x0
#define PWM3PHH0_address                         0xDB2
#define PWM3PHH0_position                        0x0
#define PWM3PHH0_size                            0x1
#define PWM3PHH0_value_mask                      0x1
#define PWM3PHH0_clear_mask                      0xFE

#define PWM3PHH                                  0x0
#define PWM3PHH_address                          0xDB2
#define PWM3PHH_position                         0x0
#define PWM3PHH_size                             0x8
#define PWM3PHH_value_mask                       0xFF
#define PWM3PHH_clear_mask                       0x0

#define PWM3PHH_PH                               0x0
#define PWM3PHH_PH_address                       0xDB2
#define PWM3PHH_PH_position                      0x0
#define PWM3PHH_PH_size                          0x8
#define PWM3PHH_PH_value_mask                    0xFF
#define PWM3PHH_PH_clear_mask                    0x0

#define PWM3PHH1                                 0x1
#define PWM3PHH1_address                         0xDB2
#define PWM3PHH1_position                        0x1
#define PWM3PHH1_size                            0x1
#define PWM3PHH1_value_mask                      0x2
#define PWM3PHH1_clear_mask                      0xFD

#define PWM3PHH2                                 0x2
#define PWM3PHH2_address                         0xDB2
#define PWM3PHH2_position                        0x2
#define PWM3PHH2_size                            0x1
#define PWM3PHH2_value_mask                      0x4
#define PWM3PHH2_clear_mask                      0xFB

#define PWM3PHH3                                 0x3
#define PWM3PHH3_address                         0xDB2
#define PWM3PHH3_position                        0x3
#define PWM3PHH3_size                            0x1
#define PWM3PHH3_value_mask                      0x8
#define PWM3PHH3_clear_mask                      0xF7

#define PWM3PHH4                                 0x4
#define PWM3PHH4_address                         0xDB2
#define PWM3PHH4_position                        0x4
#define PWM3PHH4_size                            0x1
#define PWM3PHH4_value_mask                      0x10
#define PWM3PHH4_clear_mask                      0xEF

#define PWM3PHH5                                 0x5
#define PWM3PHH5_address                         0xDB2
#define PWM3PHH5_position                        0x5
#define PWM3PHH5_size                            0x1
#define PWM3PHH5_value_mask                      0x20
#define PWM3PHH5_clear_mask                      0xDF

#define PWM3PHH6                                 0x6
#define PWM3PHH6_address                         0xDB2
#define PWM3PHH6_position                        0x6
#define PWM3PHH6_size                            0x1
#define PWM3PHH6_value_mask                      0x40
#define PWM3PHH6_clear_mask                      0xBF

#define PWM3PHH7                                 0x7
#define PWM3PHH7_address                         0xDB2
#define PWM3PHH7_position                        0x7
#define PWM3PHH7_size                            0x1
#define PWM3PHH7_value_mask                      0x80
#define PWM3PHH7_clear_mask                      0x7F


/*--------------------------------------------------------------------------------------#
| PWM3DCL                                                                         0xDB3 |
#---------------------------------------------------------------------------------------#
| PWM3DCL7 | PWM3DCL6 | PWM3DCL5 | PWM3DCL4 | PWM3DCL3 | PWM3DCL2 | PWM3DCL1 | PWM3DCL0 |
#---------------------------------------------------------------------------------------#
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
#--------------------------------------------------------------------------------------*/

#define PWM3DCL_DC                               0x0
#define PWM3DCL_DC_address                       0xDB3
#define PWM3DCL_DC_position                      0x0
#define PWM3DCL_DC_size                          0x8
#define PWM3DCL_DC_value_mask                    0xFF
#define PWM3DCL_DC_clear_mask                    0x0

#define PWM3DCL0                                 0x0
#define PWM3DCL0_address                         0xDB3
#define PWM3DCL0_position                        0x0
#define PWM3DCL0_size                            0x1
#define PWM3DCL0_value_mask                      0x1
#define PWM3DCL0_clear_mask                      0xFE

#define PWM3DCL                                  0x0
#define PWM3DCL_address                          0xDB3
#define PWM3DCL_position                         0x0
#define PWM3DCL_size                             0x8
#define PWM3DCL_value_mask                       0xFF
#define PWM3DCL_clear_mask                       0x0

#define PWM3DCL1                                 0x1
#define PWM3DCL1_address                         0xDB3
#define PWM3DCL1_position                        0x1
#define PWM3DCL1_size                            0x1
#define PWM3DCL1_value_mask                      0x2
#define PWM3DCL1_clear_mask                      0xFD

#define PWM3DCL2                                 0x2
#define PWM3DCL2_address                         0xDB3
#define PWM3DCL2_position                        0x2
#define PWM3DCL2_size                            0x1
#define PWM3DCL2_value_mask                      0x4
#define PWM3DCL2_clear_mask                      0xFB

#define PWM3DCL3                                 0x3
#define PWM3DCL3_address                         0xDB3
#define PWM3DCL3_position                        0x3
#define PWM3DCL3_size                            0x1
#define PWM3DCL3_value_mask                      0x8
#define PWM3DCL3_clear_mask                      0xF7

#define PWM3DCL4                                 0x4
#define PWM3DCL4_address                         0xDB3
#define PWM3DCL4_position                        0x4
#define PWM3DCL4_size                            0x1
#define PWM3DCL4_value_mask                      0x10
#define PWM3DCL4_clear_mask                      0xEF

#define PWM3DCL5                                 0x5
#define PWM3DCL5_address                         0xDB3
#define PWM3DCL5_position                        0x5
#define PWM3DCL5_size                            0x1
#define PWM3DCL5_value_mask                      0x20
#define PWM3DCL5_clear_mask                      0xDF

#define PWM3DCL6                                 0x6
#define PWM3DCL6_address                         0xDB3
#define PWM3DCL6_position                        0x6
#define PWM3DCL6_size                            0x1
#define PWM3DCL6_value_mask                      0x40
#define PWM3DCL6_clear_mask                      0xBF

#define PWM3DCL7                                 0x7
#define PWM3DCL7_address                         0xDB3
#define PWM3DCL7_position                        0x7
#define PWM3DCL7_size                            0x1
#define PWM3DCL7_value_mask                      0x80
#define PWM3DCL7_clear_mask                      0x7F


/*--------------------------------------------------------------------------------------#
| PWM3DCH                                                                         0xDB4 |
#---------------------------------------------------------------------------------------#
| PWM3DCH7 | PWM3DCH6 | PWM3DCH5 | PWM3DCH4 | PWM3DCH3 | PWM3DCH2 | PWM3DCH1 | PWM3DCH0 |
#---------------------------------------------------------------------------------------#
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
#--------------------------------------------------------------------------------------*/

#define PWM3DCH_DC                               0x0
#define PWM3DCH_DC_address                       0xDB4
#define PWM3DCH_DC_position                      0x0
#define PWM3DCH_DC_size                          0x8
#define PWM3DCH_DC_value_mask                    0xFF
#define PWM3DCH_DC_clear_mask                    0x0

#define PWM3DCH0                                 0x0
#define PWM3DCH0_address                         0xDB4
#define PWM3DCH0_position                        0x0
#define PWM3DCH0_size                            0x1
#define PWM3DCH0_value_mask                      0x1
#define PWM3DCH0_clear_mask                      0xFE

#define PWM3DCH                                  0x0
#define PWM3DCH_address                          0xDB4
#define PWM3DCH_position                         0x0
#define PWM3DCH_size                             0x8
#define PWM3DCH_value_mask                       0xFF
#define PWM3DCH_clear_mask                       0x0

#define PWM3DCH1                                 0x1
#define PWM3DCH1_address                         0xDB4
#define PWM3DCH1_position                        0x1
#define PWM3DCH1_size                            0x1
#define PWM3DCH1_value_mask                      0x2
#define PWM3DCH1_clear_mask                      0xFD

#define PWM3DCH2                                 0x2
#define PWM3DCH2_address                         0xDB4
#define PWM3DCH2_position                        0x2
#define PWM3DCH2_size                            0x1
#define PWM3DCH2_value_mask                      0x4
#define PWM3DCH2_clear_mask                      0xFB

#define PWM3DCH3                                 0x3
#define PWM3DCH3_address                         0xDB4
#define PWM3DCH3_position                        0x3
#define PWM3DCH3_size                            0x1
#define PWM3DCH3_value_mask                      0x8
#define PWM3DCH3_clear_mask                      0xF7

#define PWM3DCH4                                 0x4
#define PWM3DCH4_address                         0xDB4
#define PWM3DCH4_position                        0x4
#define PWM3DCH4_size                            0x1
#define PWM3DCH4_value_mask                      0x10
#define PWM3DCH4_clear_mask                      0xEF

#define PWM3DCH5                                 0x5
#define PWM3DCH5_address                         0xDB4
#define PWM3DCH5_position                        0x5
#define PWM3DCH5_size                            0x1
#define PWM3DCH5_value_mask                      0x20
#define PWM3DCH5_clear_mask                      0xDF

#define PWM3DCH6                                 0x6
#define PWM3DCH6_address                         0xDB4
#define PWM3DCH6_position                        0x6
#define PWM3DCH6_size                            0x1
#define PWM3DCH6_value_mask                      0x40
#define PWM3DCH6_clear_mask                      0xBF

#define PWM3DCH7                                 0x7
#define PWM3DCH7_address                         0xDB4
#define PWM3DCH7_position                        0x7
#define PWM3DCH7_size                            0x1
#define PWM3DCH7_value_mask                      0x80
#define PWM3DCH7_clear_mask                      0x7F


/*--------------------------------------------------------------------------------------#
| PWM3PRL                                                                         0xDB5 |
#---------------------------------------------------------------------------------------#
| PWM3PRL7 | PWM3PRL6 | PWM3PRL5 | PWM3PRL4 | PWM3PRL3 | PWM3PRL2 | PWM3PRL1 | PWM3PRL0 |
#---------------------------------------------------------------------------------------#
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
#--------------------------------------------------------------------------------------*/

#define PWM3PRL0                                 0x0
#define PWM3PRL0_address                         0xDB5
#define PWM3PRL0_position                        0x0
#define PWM3PRL0_size                            0x1
#define PWM3PRL0_value_mask                      0x1
#define PWM3PRL0_clear_mask                      0xFE

#define PWM3PRL                                  0x0
#define PWM3PRL_address                          0xDB5
#define PWM3PRL_position                         0x0
#define PWM3PRL_size                             0x8
#define PWM3PRL_value_mask                       0xFF
#define PWM3PRL_clear_mask                       0x0

#define PWM3PRL_PR                               0x0
#define PWM3PRL_PR_address                       0xDB5
#define PWM3PRL_PR_position                      0x0
#define PWM3PRL_PR_size                          0x8
#define PWM3PRL_PR_value_mask                    0xFF
#define PWM3PRL_PR_clear_mask                    0x0

#define PWM3PRL1                                 0x1
#define PWM3PRL1_address                         0xDB5
#define PWM3PRL1_position                        0x1
#define PWM3PRL1_size                            0x1
#define PWM3PRL1_value_mask                      0x2
#define PWM3PRL1_clear_mask                      0xFD

#define PWM3PRL2                                 0x2
#define PWM3PRL2_address                         0xDB5
#define PWM3PRL2_position                        0x2
#define PWM3PRL2_size                            0x1
#define PWM3PRL2_value_mask                      0x4
#define PWM3PRL2_clear_mask                      0xFB

#define PWM3PRL3                                 0x3
#define PWM3PRL3_address                         0xDB5
#define PWM3PRL3_position                        0x3
#define PWM3PRL3_size                            0x1
#define PWM3PRL3_value_mask                      0x8
#define PWM3PRL3_clear_mask                      0xF7

#define PWM3PRL4                                 0x4
#define PWM3PRL4_address                         0xDB5
#define PWM3PRL4_position                        0x4
#define PWM3PRL4_size                            0x1
#define PWM3PRL4_value_mask                      0x10
#define PWM3PRL4_clear_mask                      0xEF

#define PWM3PRL5                                 0x5
#define PWM3PRL5_address                         0xDB5
#define PWM3PRL5_position                        0x5
#define PWM3PRL5_size                            0x1
#define PWM3PRL5_value_mask                      0x20
#define PWM3PRL5_clear_mask                      0xDF

#define PWM3PRL6                                 0x6
#define PWM3PRL6_address                         0xDB5
#define PWM3PRL6_position                        0x6
#define PWM3PRL6_size                            0x1
#define PWM3PRL6_value_mask                      0x40
#define PWM3PRL6_clear_mask                      0xBF

#define PWM3PRL7                                 0x7
#define PWM3PRL7_address                         0xDB5
#define PWM3PRL7_position                        0x7
#define PWM3PRL7_size                            0x1
#define PWM3PRL7_value_mask                      0x80
#define PWM3PRL7_clear_mask                      0x7F


/*--------------------------------------------------------------------------------------#
| PWM3PRH                                                                         0xDB6 |
#---------------------------------------------------------------------------------------#
| PWM3PRH7 | PWM3PRH6 | PWM3PRH5 | PWM3PRH4 | PWM3PRH3 | PWM3PRH2 | PWM3PRH1 | PWM3PRH0 |
#---------------------------------------------------------------------------------------#
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
#--------------------------------------------------------------------------------------*/

#define PWM3PRH0                                 0x0
#define PWM3PRH0_address                         0xDB6
#define PWM3PRH0_position                        0x0
#define PWM3PRH0_size                            0x1
#define PWM3PRH0_value_mask                      0x1
#define PWM3PRH0_clear_mask                      0xFE

#define PWM3PRH_PR                               0x0
#define PWM3PRH_PR_address                       0xDB6
#define PWM3PRH_PR_position                      0x0
#define PWM3PRH_PR_size                          0x8
#define PWM3PRH_PR_value_mask                    0xFF
#define PWM3PRH_PR_clear_mask                    0x0

#define PWM3PRH                                  0x0
#define PWM3PRH_address                          0xDB6
#define PWM3PRH_position                         0x0
#define PWM3PRH_size                             0x8
#define PWM3PRH_value_mask                       0xFF
#define PWM3PRH_clear_mask                       0x0

#define PWM3PRH1                                 0x1
#define PWM3PRH1_address                         0xDB6
#define PWM3PRH1_position                        0x1
#define PWM3PRH1_size                            0x1
#define PWM3PRH1_value_mask                      0x2
#define PWM3PRH1_clear_mask                      0xFD

#define PWM3PRH2                                 0x2
#define PWM3PRH2_address                         0xDB6
#define PWM3PRH2_position                        0x2
#define PWM3PRH2_size                            0x1
#define PWM3PRH2_value_mask                      0x4
#define PWM3PRH2_clear_mask                      0xFB

#define PWM3PRH3                                 0x3
#define PWM3PRH3_address                         0xDB6
#define PWM3PRH3_position                        0x3
#define PWM3PRH3_size                            0x1
#define PWM3PRH3_value_mask                      0x8
#define PWM3PRH3_clear_mask                      0xF7

#define PWM3PRH4                                 0x4
#define PWM3PRH4_address                         0xDB6
#define PWM3PRH4_position                        0x4
#define PWM3PRH4_size                            0x1
#define PWM3PRH4_value_mask                      0x10
#define PWM3PRH4_clear_mask                      0xEF

#define PWM3PRH5                                 0x5
#define PWM3PRH5_address                         0xDB6
#define PWM3PRH5_position                        0x5
#define PWM3PRH5_size                            0x1
#define PWM3PRH5_value_mask                      0x20
#define PWM3PRH5_clear_mask                      0xDF

#define PWM3PRH6                                 0x6
#define PWM3PRH6_address                         0xDB6
#define PWM3PRH6_position                        0x6
#define PWM3PRH6_size                            0x1
#define PWM3PRH6_value_mask                      0x40
#define PWM3PRH6_clear_mask                      0xBF

#define PWM3PRH7                                 0x7
#define PWM3PRH7_address                         0xDB6
#define PWM3PRH7_position                        0x7
#define PWM3PRH7_size                            0x1
#define PWM3PRH7_value_mask                      0x80
#define PWM3PRH7_clear_mask                      0x7F


/*--------------------------------------------------------------------------------------#
| PWM3OFL                                                                         0xDB7 |
#---------------------------------------------------------------------------------------#
| PWM3OFL7 | PWM3OFL6 | PWM3OFL5 | PWM3OFL4 | PWM3OFL3 | PWM3OFL2 | PWM3OFL1 | PWM3OFL0 |
#---------------------------------------------------------------------------------------#
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
#--------------------------------------------------------------------------------------*/

#define PWM3OFL_OF                               0x0
#define PWM3OFL_OF_address                       0xDB7
#define PWM3OFL_OF_position                      0x0
#define PWM3OFL_OF_size                          0x8
#define PWM3OFL_OF_value_mask                    0xFF
#define PWM3OFL_OF_clear_mask                    0x0

#define PWM3OFL0                                 0x0
#define PWM3OFL0_address                         0xDB7
#define PWM3OFL0_position                        0x0
#define PWM3OFL0_size                            0x1
#define PWM3OFL0_value_mask                      0x1
#define PWM3OFL0_clear_mask                      0xFE

#define PWM3OFL                                  0x0
#define PWM3OFL_address                          0xDB7
#define PWM3OFL_position                         0x0
#define PWM3OFL_size                             0x8
#define PWM3OFL_value_mask                       0xFF
#define PWM3OFL_clear_mask                       0x0

#define PWM3OFL1                                 0x1
#define PWM3OFL1_address                         0xDB7
#define PWM3OFL1_position                        0x1
#define PWM3OFL1_size                            0x1
#define PWM3OFL1_value_mask                      0x2
#define PWM3OFL1_clear_mask                      0xFD

#define PWM3OFL2                                 0x2
#define PWM3OFL2_address                         0xDB7
#define PWM3OFL2_position                        0x2
#define PWM3OFL2_size                            0x1
#define PWM3OFL2_value_mask                      0x4
#define PWM3OFL2_clear_mask                      0xFB

#define PWM3OFL3                                 0x3
#define PWM3OFL3_address                         0xDB7
#define PWM3OFL3_position                        0x3
#define PWM3OFL3_size                            0x1
#define PWM3OFL3_value_mask                      0x8
#define PWM3OFL3_clear_mask                      0xF7

#define PWM3OFL4                                 0x4
#define PWM3OFL4_address                         0xDB7
#define PWM3OFL4_position                        0x4
#define PWM3OFL4_size                            0x1
#define PWM3OFL4_value_mask                      0x10
#define PWM3OFL4_clear_mask                      0xEF

#define PWM3OFL5                                 0x5
#define PWM3OFL5_address                         0xDB7
#define PWM3OFL5_position                        0x5
#define PWM3OFL5_size                            0x1
#define PWM3OFL5_value_mask                      0x20
#define PWM3OFL5_clear_mask                      0xDF

#define PWM3OFL6                                 0x6
#define PWM3OFL6_address                         0xDB7
#define PWM3OFL6_position                        0x6
#define PWM3OFL6_size                            0x1
#define PWM3OFL6_value_mask                      0x40
#define PWM3OFL6_clear_mask                      0xBF

#define PWM3OFL7                                 0x7
#define PWM3OFL7_address                         0xDB7
#define PWM3OFL7_position                        0x7
#define PWM3OFL7_size                            0x1
#define PWM3OFL7_value_mask                      0x80
#define PWM3OFL7_clear_mask                      0x7F


/*--------------------------------------------------------------------------------------#
| PWM3OFH                                                                         0xDB8 |
#---------------------------------------------------------------------------------------#
| PWM3OFH7 | PWM3OFH6 | PWM3OFH5 | PWM3OFH4 | PWM3OFH3 | PWM3OFH2 | PWM3OFH1 | PWM3OFH0 |
#---------------------------------------------------------------------------------------#
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
#--------------------------------------------------------------------------------------*/

#define PWM3OFH_OF                               0x0
#define PWM3OFH_OF_address                       0xDB8
#define PWM3OFH_OF_position                      0x0
#define PWM3OFH_OF_size                          0x8
#define PWM3OFH_OF_value_mask                    0xFF
#define PWM3OFH_OF_clear_mask                    0x0

#define PWM3OFH0                                 0x0
#define PWM3OFH0_address                         0xDB8
#define PWM3OFH0_position                        0x0
#define PWM3OFH0_size                            0x1
#define PWM3OFH0_value_mask                      0x1
#define PWM3OFH0_clear_mask                      0xFE

#define PWM3OFH                                  0x0
#define PWM3OFH_address                          0xDB8
#define PWM3OFH_position                         0x0
#define PWM3OFH_size                             0x8
#define PWM3OFH_value_mask                       0xFF
#define PWM3OFH_clear_mask                       0x0

#define PWM3OFH1                                 0x1
#define PWM3OFH1_address                         0xDB8
#define PWM3OFH1_position                        0x1
#define PWM3OFH1_size                            0x1
#define PWM3OFH1_value_mask                      0x2
#define PWM3OFH1_clear_mask                      0xFD

#define PWM3OFH2                                 0x2
#define PWM3OFH2_address                         0xDB8
#define PWM3OFH2_position                        0x2
#define PWM3OFH2_size                            0x1
#define PWM3OFH2_value_mask                      0x4
#define PWM3OFH2_clear_mask                      0xFB

#define PWM3OFH3                                 0x3
#define PWM3OFH3_address                         0xDB8
#define PWM3OFH3_position                        0x3
#define PWM3OFH3_size                            0x1
#define PWM3OFH3_value_mask                      0x8
#define PWM3OFH3_clear_mask                      0xF7

#define PWM3OFH4                                 0x4
#define PWM3OFH4_address                         0xDB8
#define PWM3OFH4_position                        0x4
#define PWM3OFH4_size                            0x1
#define PWM3OFH4_value_mask                      0x10
#define PWM3OFH4_clear_mask                      0xEF

#define PWM3OFH5                                 0x5
#define PWM3OFH5_address                         0xDB8
#define PWM3OFH5_position                        0x5
#define PWM3OFH5_size                            0x1
#define PWM3OFH5_value_mask                      0x20
#define PWM3OFH5_clear_mask                      0xDF

#define PWM3OFH6                                 0x6
#define PWM3OFH6_address                         0xDB8
#define PWM3OFH6_position                        0x6
#define PWM3OFH6_size                            0x1
#define PWM3OFH6_value_mask                      0x40
#define PWM3OFH6_clear_mask                      0xBF

#define PWM3OFH7                                 0x7
#define PWM3OFH7_address                         0xDB8
#define PWM3OFH7_position                        0x7
#define PWM3OFH7_size                            0x1
#define PWM3OFH7_value_mask                      0x80
#define PWM3OFH7_clear_mask                      0x7F


/*----------------------------------------------------------------------------------------------#
| PWM3TMRL                                                                                0xDB9 |
#-----------------------------------------------------------------------------------------------#
| PWM3TMRL7 | PWM3TMRL6 | PWM3TMRL5 | PWM3TMRL4 | PWM3TMRL3 | PWM3TMRL2 | PWM3TMRL1 | PWM3TMRL0 |
#-----------------------------------------------------------------------------------------------#
| 7         | 6         | 5         | 4         | 3         | 2         | 1         | 0         |
#----------------------------------------------------------------------------------------------*/

#define PWM3TMRL0                                0x0
#define PWM3TMRL0_address                        0xDB9
#define PWM3TMRL0_position                       0x0
#define PWM3TMRL0_size                           0x1
#define PWM3TMRL0_value_mask                     0x1
#define PWM3TMRL0_clear_mask                     0xFE

#define PWM3TMRL                                 0x0
#define PWM3TMRL_address                         0xDB9
#define PWM3TMRL_position                        0x0
#define PWM3TMRL_size                            0x8
#define PWM3TMRL_value_mask                      0xFF
#define PWM3TMRL_clear_mask                      0x0

#define PWM3TMRL_TMR                             0x0
#define PWM3TMRL_TMR_address                     0xDB9
#define PWM3TMRL_TMR_position                    0x0
#define PWM3TMRL_TMR_size                        0x8
#define PWM3TMRL_TMR_value_mask                  0xFF
#define PWM3TMRL_TMR_clear_mask                  0x0

#define PWM3TMRL1                                0x1
#define PWM3TMRL1_address                        0xDB9
#define PWM3TMRL1_position                       0x1
#define PWM3TMRL1_size                           0x1
#define PWM3TMRL1_value_mask                     0x2
#define PWM3TMRL1_clear_mask                     0xFD

#define PWM3TMRL2                                0x2
#define PWM3TMRL2_address                        0xDB9
#define PWM3TMRL2_position                       0x2
#define PWM3TMRL2_size                           0x1
#define PWM3TMRL2_value_mask                     0x4
#define PWM3TMRL2_clear_mask                     0xFB

#define PWM3TMRL3                                0x3
#define PWM3TMRL3_address                        0xDB9
#define PWM3TMRL3_position                       0x3
#define PWM3TMRL3_size                           0x1
#define PWM3TMRL3_value_mask                     0x8
#define PWM3TMRL3_clear_mask                     0xF7

#define PWM3TMRL4                                0x4
#define PWM3TMRL4_address                        0xDB9
#define PWM3TMRL4_position                       0x4
#define PWM3TMRL4_size                           0x1
#define PWM3TMRL4_value_mask                     0x10
#define PWM3TMRL4_clear_mask                     0xEF

#define PWM3TMRL5                                0x5
#define PWM3TMRL5_address                        0xDB9
#define PWM3TMRL5_position                       0x5
#define PWM3TMRL5_size                           0x1
#define PWM3TMRL5_value_mask                     0x20
#define PWM3TMRL5_clear_mask                     0xDF

#define PWM3TMRL6                                0x6
#define PWM3TMRL6_address                        0xDB9
#define PWM3TMRL6_position                       0x6
#define PWM3TMRL6_size                           0x1
#define PWM3TMRL6_value_mask                     0x40
#define PWM3TMRL6_clear_mask                     0xBF

#define PWM3TMRL7                                0x7
#define PWM3TMRL7_address                        0xDB9
#define PWM3TMRL7_position                       0x7
#define PWM3TMRL7_size                           0x1
#define PWM3TMRL7_value_mask                     0x80
#define PWM3TMRL7_clear_mask                     0x7F


/*----------------------------------------------------------------------------------------------#
| PWM3TMRH                                                                                0xDBA |
#-----------------------------------------------------------------------------------------------#
| PWM3TMRH7 | PWM3TMRH6 | PWM3TMRH5 | PWM3TMRH4 | PWM3TMRH3 | PWM3TMRH2 | PWM3TMRH1 | PWM3TMRH0 |
#-----------------------------------------------------------------------------------------------#
| 7         | 6         | 5         | 4         | 3         | 2         | 1         | 0         |
#----------------------------------------------------------------------------------------------*/

#define PWM3TMRH0                                0x0
#define PWM3TMRH0_address                        0xDBA
#define PWM3TMRH0_position                       0x0
#define PWM3TMRH0_size                           0x1
#define PWM3TMRH0_value_mask                     0x1
#define PWM3TMRH0_clear_mask                     0xFE

#define PWM3TMRH_TMR                             0x0
#define PWM3TMRH_TMR_address                     0xDBA
#define PWM3TMRH_TMR_position                    0x0
#define PWM3TMRH_TMR_size                        0x8
#define PWM3TMRH_TMR_value_mask                  0xFF
#define PWM3TMRH_TMR_clear_mask                  0x0

#define PWM3TMRH                                 0x0
#define PWM3TMRH_address                         0xDBA
#define PWM3TMRH_position                        0x0
#define PWM3TMRH_size                            0x8
#define PWM3TMRH_value_mask                      0xFF
#define PWM3TMRH_clear_mask                      0x0

#define PWM3TMRH1                                0x1
#define PWM3TMRH1_address                        0xDBA
#define PWM3TMRH1_position                       0x1
#define PWM3TMRH1_size                           0x1
#define PWM3TMRH1_value_mask                     0x2
#define PWM3TMRH1_clear_mask                     0xFD

#define PWM3TMRH2                                0x2
#define PWM3TMRH2_address                        0xDBA
#define PWM3TMRH2_position                       0x2
#define PWM3TMRH2_size                           0x1
#define PWM3TMRH2_value_mask                     0x4
#define PWM3TMRH2_clear_mask                     0xFB

#define PWM3TMRH3                                0x3
#define PWM3TMRH3_address                        0xDBA
#define PWM3TMRH3_position                       0x3
#define PWM3TMRH3_size                           0x1
#define PWM3TMRH3_value_mask                     0x8
#define PWM3TMRH3_clear_mask                     0xF7

#define PWM3TMRH4                                0x4
#define PWM3TMRH4_address                        0xDBA
#define PWM3TMRH4_position                       0x4
#define PWM3TMRH4_size                           0x1
#define PWM3TMRH4_value_mask                     0x10
#define PWM3TMRH4_clear_mask                     0xEF

#define PWM3TMRH5                                0x5
#define PWM3TMRH5_address                        0xDBA
#define PWM3TMRH5_position                       0x5
#define PWM3TMRH5_size                           0x1
#define PWM3TMRH5_value_mask                     0x20
#define PWM3TMRH5_clear_mask                     0xDF

#define PWM3TMRH6                                0x6
#define PWM3TMRH6_address                        0xDBA
#define PWM3TMRH6_position                       0x6
#define PWM3TMRH6_size                           0x1
#define PWM3TMRH6_value_mask                     0x40
#define PWM3TMRH6_clear_mask                     0xBF

#define PWM3TMRH7                                0x7
#define PWM3TMRH7_address                        0xDBA
#define PWM3TMRH7_position                       0x7
#define PWM3TMRH7_size                           0x1
#define PWM3TMRH7_value_mask                     0x80
#define PWM3TMRH7_clear_mask                     0x7F


/*----------------------------------------------------------------------------#
| PWM3CON                                                               0xDBB |
#-----------------------------------------------------------------------------#
| PWM3EN | PWM3OE | PWM3CON_OUT | PWM3CON_POL | PWM3MODE1 | PWM3MODE0 | - | - |
#-----------------------------------------------------------------------------#
| 7      | 6      | 5           | 4           | 3         | 2         | 1 | 0 |
#----------------------------------------------------------------------------*/

#define PWM3CON                                  0x0
#define PWM3CON_address                          0xDBB
#define PWM3CON_position                         0x0
#define PWM3CON_size                             0x8
#define PWM3CON_value_mask                       0xFF
#define PWM3CON_clear_mask                       0x0

#define PWM3CON_MODE0                            0x2
#define PWM3CON_MODE0_address                    0xDBB
#define PWM3CON_MODE0_position                   0x2
#define PWM3CON_MODE0_size                       0x1
#define PWM3CON_MODE0_value_mask                 0x4
#define PWM3CON_MODE0_clear_mask                 0xFB

#define PWM3MODE                                 0x2
#define PWM3MODE_address                         0xDBB
#define PWM3MODE_position                        0x2
#define PWM3MODE_size                            0x2
#define PWM3MODE_value_mask                      0xC
#define PWM3MODE_clear_mask                      0xF3

#define PWM3CON_MODE                             0x2
#define PWM3CON_MODE_address                     0xDBB
#define PWM3CON_MODE_position                    0x2
#define PWM3CON_MODE_size                        0x2
#define PWM3CON_MODE_value_mask                  0xC
#define PWM3CON_MODE_clear_mask                  0xF3

#define PWM3MODE0                                0x2
#define PWM3MODE0_address                        0xDBB
#define PWM3MODE0_position                       0x2
#define PWM3MODE0_size                           0x1
#define PWM3MODE0_value_mask                     0x4
#define PWM3MODE0_clear_mask                     0xFB

#define PWM3CON_MODE1                            0x3
#define PWM3CON_MODE1_address                    0xDBB
#define PWM3CON_MODE1_position                   0x3
#define PWM3CON_MODE1_size                       0x1
#define PWM3CON_MODE1_value_mask                 0x8
#define PWM3CON_MODE1_clear_mask                 0xF7

#define PWM3MODE1                                0x3
#define PWM3MODE1_address                        0xDBB
#define PWM3MODE1_position                       0x3
#define PWM3MODE1_size                           0x1
#define PWM3MODE1_value_mask                     0x8
#define PWM3MODE1_clear_mask                     0xF7

#define PWM3CON_POL                              0x4
#define PWM3CON_POL_address                      0xDBB
#define PWM3CON_POL_position                     0x4
#define PWM3CON_POL_size                         0x1
#define PWM3CON_POL_value_mask                   0x10
#define PWM3CON_POL_clear_mask                   0xEF

#define PWM3POL                                  0x4
#define PWM3POL_address                          0xDBB
#define PWM3POL_position                         0x4
#define PWM3POL_size                             0x1
#define PWM3POL_value_mask                       0x10
#define PWM3POL_clear_mask                       0xEF

#define PWM3CON_OUT                              0x5
#define PWM3CON_OUT_address                      0xDBB
#define PWM3CON_OUT_position                     0x5
#define PWM3CON_OUT_size                         0x1
#define PWM3CON_OUT_value_mask                   0x20
#define PWM3CON_OUT_clear_mask                   0xDF

#define PWM3OUT                                  0x5
#define PWM3OUT_address                          0xDBB
#define PWM3OUT_position                         0x5
#define PWM3OUT_size                             0x1
#define PWM3OUT_value_mask                       0x20
#define PWM3OUT_clear_mask                       0xDF

#define PWM3OE                                   0x6
#define PWM3OE_address                           0xDBB
#define PWM3OE_position                          0x6
#define PWM3OE_size                              0x1
#define PWM3OE_value_mask                        0x40
#define PWM3OE_clear_mask                        0xBF

#define PWM3CON_OE                               0x6
#define PWM3CON_OE_address                       0xDBB
#define PWM3CON_OE_position                      0x6
#define PWM3CON_OE_size                          0x1
#define PWM3CON_OE_value_mask                    0x40
#define PWM3CON_OE_clear_mask                    0xBF

#define PWM3EN                                   0x7
#define PWM3EN_address                           0xDBB
#define PWM3EN_position                          0x7
#define PWM3EN_size                              0x1
#define PWM3EN_value_mask                        0x80
#define PWM3EN_clear_mask                        0x7F

#define PWM3CON_EN                               0x7
#define PWM3CON_EN_address                       0xDBB
#define PWM3CON_EN_position                      0x7
#define PWM3CON_EN_size                          0x1
#define PWM3CON_EN_value_mask                    0x80
#define PWM3CON_EN_clear_mask                    0x7F


/*---------------------------------------------------------------#
| PWM3INTE                                                 0xDBC |
#----------------------------------------------------------------#
| - | - | - | - | PWM3OFIE | PWM3PHIE | PWM3INTE_DCIE | PWM3PRIE |
#----------------------------------------------------------------#
| 7 | 6 | 5 | 4 | 3        | 2        | 1             | 0        |
#---------------------------------------------------------------*/

#define PWM3INTE                                 0x0
#define PWM3INTE_address                         0xDBC
#define PWM3INTE_position                        0x0
#define PWM3INTE_size                            0x8
#define PWM3INTE_value_mask                      0xFF
#define PWM3INTE_clear_mask                      0x0

#define PWM3PRIE                                 0x0
#define PWM3PRIE_address                         0xDBC
#define PWM3PRIE_position                        0x0
#define PWM3PRIE_size                            0x1
#define PWM3PRIE_value_mask                      0x1
#define PWM3PRIE_clear_mask                      0xFE

#define PWM3INTE_PRIE                            0x0
#define PWM3INTE_PRIE_address                    0xDBC
#define PWM3INTE_PRIE_position                   0x0
#define PWM3INTE_PRIE_size                       0x1
#define PWM3INTE_PRIE_value_mask                 0x1
#define PWM3INTE_PRIE_clear_mask                 0xFE

#define PWM3INTE_DCIE                            0x1
#define PWM3INTE_DCIE_address                    0xDBC
#define PWM3INTE_DCIE_position                   0x1
#define PWM3INTE_DCIE_size                       0x1
#define PWM3INTE_DCIE_value_mask                 0x2
#define PWM3INTE_DCIE_clear_mask                 0xFD

#define PWM3DCIE                                 0x1
#define PWM3DCIE_address                         0xDBC
#define PWM3DCIE_position                        0x1
#define PWM3DCIE_size                            0x1
#define PWM3DCIE_value_mask                      0x2
#define PWM3DCIE_clear_mask                      0xFD

#define PWM3PHIE                                 0x2
#define PWM3PHIE_address                         0xDBC
#define PWM3PHIE_position                        0x2
#define PWM3PHIE_size                            0x1
#define PWM3PHIE_value_mask                      0x4
#define PWM3PHIE_clear_mask                      0xFB

#define PWM3INTE_PHIE                            0x2
#define PWM3INTE_PHIE_address                    0xDBC
#define PWM3INTE_PHIE_position                   0x2
#define PWM3INTE_PHIE_size                       0x1
#define PWM3INTE_PHIE_value_mask                 0x4
#define PWM3INTE_PHIE_clear_mask                 0xFB

#define PWM3INTE_OFIE                            0x3
#define PWM3INTE_OFIE_address                    0xDBC
#define PWM3INTE_OFIE_position                   0x3
#define PWM3INTE_OFIE_size                       0x1
#define PWM3INTE_OFIE_value_mask                 0x8
#define PWM3INTE_OFIE_clear_mask                 0xF7

#define PWM3OFIE                                 0x3
#define PWM3OFIE_address                         0xDBC
#define PWM3OFIE_position                        0x3
#define PWM3OFIE_size                            0x1
#define PWM3OFIE_value_mask                      0x8
#define PWM3OFIE_clear_mask                      0xF7


/*-------------------------------------------------------------------------#
| PWM3INTF                                                           0xDBD |
#--------------------------------------------------------------------------#
| - | - | - | - | PWM3INTF_OFIF | PWM3INTF_PHIF | PWM3INTF_DCIF | PWM3PRIF |
#--------------------------------------------------------------------------#
| 7 | 6 | 5 | 4 | 3             | 2             | 1             | 0        |
#-------------------------------------------------------------------------*/

#define PWM3INTF                                 0x0
#define PWM3INTF_address                         0xDBD
#define PWM3INTF_position                        0x0
#define PWM3INTF_size                            0x8
#define PWM3INTF_value_mask                      0xFF
#define PWM3INTF_clear_mask                      0x0

#define PWM3PRIF                                 0x0
#define PWM3PRIF_address                         0xDBD
#define PWM3PRIF_position                        0x0
#define PWM3PRIF_size                            0x1
#define PWM3PRIF_value_mask                      0x1
#define PWM3PRIF_clear_mask                      0xFE

#define PWM3INTF_PRIF                            0x0
#define PWM3INTF_PRIF_address                    0xDBD
#define PWM3INTF_PRIF_position                   0x0
#define PWM3INTF_PRIF_size                       0x1
#define PWM3INTF_PRIF_value_mask                 0x1
#define PWM3INTF_PRIF_clear_mask                 0xFE

#define PWM3INTF_DCIF                            0x1
#define PWM3INTF_DCIF_address                    0xDBD
#define PWM3INTF_DCIF_position                   0x1
#define PWM3INTF_DCIF_size                       0x1
#define PWM3INTF_DCIF_value_mask                 0x2
#define PWM3INTF_DCIF_clear_mask                 0xFD

#define PWM3DCIF                                 0x1
#define PWM3DCIF_address                         0xDBD
#define PWM3DCIF_position                        0x1
#define PWM3DCIF_size                            0x1
#define PWM3DCIF_value_mask                      0x2
#define PWM3DCIF_clear_mask                      0xFD

#define PWM3INTF_PHIF                            0x2
#define PWM3INTF_PHIF_address                    0xDBD
#define PWM3INTF_PHIF_position                   0x2
#define PWM3INTF_PHIF_size                       0x1
#define PWM3INTF_PHIF_value_mask                 0x4
#define PWM3INTF_PHIF_clear_mask                 0xFB

#define PWM3PHIF                                 0x2
#define PWM3PHIF_address                         0xDBD
#define PWM3PHIF_position                        0x2
#define PWM3PHIF_size                            0x1
#define PWM3PHIF_value_mask                      0x4
#define PWM3PHIF_clear_mask                      0xFB

#define PWM3INTF_OFIF                            0x3
#define PWM3INTF_OFIF_address                    0xDBD
#define PWM3INTF_OFIF_position                   0x3
#define PWM3INTF_OFIF_size                       0x1
#define PWM3INTF_OFIF_value_mask                 0x8
#define PWM3INTF_OFIF_clear_mask                 0xF7

#define PWM3OFIF                                 0x3
#define PWM3OFIF_address                         0xDBD
#define PWM3OFIF_position                        0x3
#define PWM3OFIF_size                            0x1
#define PWM3OFIF_value_mask                      0x8
#define PWM3OFIF_clear_mask                      0xF7


/*------------------------------------------------------------#
| PWM3CLKCON                                            0xDBE |
#-------------------------------------------------------------#
| - | PWM3PS2 | PWM3PS1 | PWM3PS0 | - | - | PWM3CS1 | PWM3CS0 |
#-------------------------------------------------------------#
| 7 | 6       | 5       | 4       | 3 | 2 | 1       | 0       |
#------------------------------------------------------------*/

#define PWM3CLKCON                               0x0
#define PWM3CLKCON_address                       0xDBE
#define PWM3CLKCON_position                      0x0
#define PWM3CLKCON_size                          0x8
#define PWM3CLKCON_value_mask                    0xFF
#define PWM3CLKCON_clear_mask                    0x0

#define PWM3CLKCON_CS                            0x0
#define PWM3CLKCON_CS_address                    0xDBE
#define PWM3CLKCON_CS_position                   0x0
#define PWM3CLKCON_CS_size                       0x2
#define PWM3CLKCON_CS_value_mask                 0x3
#define PWM3CLKCON_CS_clear_mask                 0xFC

#define PWM3CS                                   0x0
#define PWM3CS_address                           0xDBE
#define PWM3CS_position                          0x0
#define PWM3CS_size                              0x3
#define PWM3CS_value_mask                        0x7
#define PWM3CS_clear_mask                        0xF8

#define PWM3CS0                                  0x0
#define PWM3CS0_address                          0xDBE
#define PWM3CS0_position                         0x0
#define PWM3CS0_size                             0x1
#define PWM3CS0_value_mask                       0x1
#define PWM3CS0_clear_mask                       0xFE

#define PWM3CLKCON_CS0                           0x0
#define PWM3CLKCON_CS0_address                   0xDBE
#define PWM3CLKCON_CS0_position                  0x0
#define PWM3CLKCON_CS0_size                      0x1
#define PWM3CLKCON_CS0_value_mask                0x1
#define PWM3CLKCON_CS0_clear_mask                0xFE

#define PWM3CS1                                  0x1
#define PWM3CS1_address                          0xDBE
#define PWM3CS1_position                         0x1
#define PWM3CS1_size                             0x1
#define PWM3CS1_value_mask                       0x2
#define PWM3CS1_clear_mask                       0xFD

#define PWM3CLKCON_CS1                           0x1
#define PWM3CLKCON_CS1_address                   0xDBE
#define PWM3CLKCON_CS1_position                  0x1
#define PWM3CLKCON_CS1_size                      0x1
#define PWM3CLKCON_CS1_value_mask                0x2
#define PWM3CLKCON_CS1_clear_mask                0xFD

#define PWM3PS0                                  0x4
#define PWM3PS0_address                          0xDBE
#define PWM3PS0_position                         0x4
#define PWM3PS0_size                             0x1
#define PWM3PS0_value_mask                       0x10
#define PWM3PS0_clear_mask                       0xEF

#define PWM3CLKCON_PS                            0x4
#define PWM3CLKCON_PS_address                    0xDBE
#define PWM3CLKCON_PS_position                   0x4
#define PWM3CLKCON_PS_size                       0x3
#define PWM3CLKCON_PS_value_mask                 0x70
#define PWM3CLKCON_PS_clear_mask                 0x8F

#define PWM3CLKCON_PS0                           0x4
#define PWM3CLKCON_PS0_address                   0xDBE
#define PWM3CLKCON_PS0_position                  0x4
#define PWM3CLKCON_PS0_size                      0x1
#define PWM3CLKCON_PS0_value_mask                0x10
#define PWM3CLKCON_PS0_clear_mask                0xEF

#define PWM3PS                                   0x4
#define PWM3PS_address                           0xDBE
#define PWM3PS_position                          0x4
#define PWM3PS_size                              0x3
#define PWM3PS_value_mask                        0x70
#define PWM3PS_clear_mask                        0x8F

#define PWM3PS1                                  0x5
#define PWM3PS1_address                          0xDBE
#define PWM3PS1_position                         0x5
#define PWM3PS1_size                             0x1
#define PWM3PS1_value_mask                       0x20
#define PWM3PS1_clear_mask                       0xDF

#define PWM3CLKCON_PS1                           0x5
#define PWM3CLKCON_PS1_address                   0xDBE
#define PWM3CLKCON_PS1_position                  0x5
#define PWM3CLKCON_PS1_size                      0x1
#define PWM3CLKCON_PS1_value_mask                0x20
#define PWM3CLKCON_PS1_clear_mask                0xDF

#define PWM3PS2                                  0x6
#define PWM3PS2_address                          0xDBE
#define PWM3PS2_position                         0x6
#define PWM3PS2_size                             0x1
#define PWM3PS2_value_mask                       0x40
#define PWM3PS2_clear_mask                       0xBF

#define PWM3CLKCON_PS2                           0x6
#define PWM3CLKCON_PS2_address                   0xDBE
#define PWM3CLKCON_PS2_position                  0x6
#define PWM3CLKCON_PS2_size                      0x1
#define PWM3CLKCON_PS2_value_mask                0x40
#define PWM3CLKCON_PS2_clear_mask                0xBF


/*--------------------------------------------------------------------#
| PWM3LDCON                                                     0xDBF |
#---------------------------------------------------------------------#
| PWM3LDCON_LDA | PWM3LDCON_LDT | - | - | - | - | PWM3LDS1 | PWM3LDS0 |
#---------------------------------------------------------------------#
| 7             | 6             | 5 | 4 | 3 | 2 | 1        | 0        |
#--------------------------------------------------------------------*/

#define PWM3LDCON                                0x0
#define PWM3LDCON_address                        0xDBF
#define PWM3LDCON_position                       0x0
#define PWM3LDCON_size                           0x8
#define PWM3LDCON_value_mask                     0xFF
#define PWM3LDCON_clear_mask                     0x0

#define PWM3LDCON_LDS                            0x0
#define PWM3LDCON_LDS_address                    0xDBF
#define PWM3LDCON_LDS_position                   0x0
#define PWM3LDCON_LDS_size                       0x2
#define PWM3LDCON_LDS_value_mask                 0x3
#define PWM3LDCON_LDS_clear_mask                 0xFC

#define PWM3LDS0                                 0x0
#define PWM3LDS0_address                         0xDBF
#define PWM3LDS0_position                        0x0
#define PWM3LDS0_size                            0x1
#define PWM3LDS0_value_mask                      0x1
#define PWM3LDS0_clear_mask                      0xFE

#define PWM3LDS                                  0x0
#define PWM3LDS_address                          0xDBF
#define PWM3LDS_position                         0x0
#define PWM3LDS_size                             0x2
#define PWM3LDS_value_mask                       0x3
#define PWM3LDS_clear_mask                       0xFC

#define PWM3LDCON_LDS0                           0x0
#define PWM3LDCON_LDS0_address                   0xDBF
#define PWM3LDCON_LDS0_position                  0x0
#define PWM3LDCON_LDS0_size                      0x1
#define PWM3LDCON_LDS0_value_mask                0x1
#define PWM3LDCON_LDS0_clear_mask                0xFE

#define PWM3LDS1                                 0x1
#define PWM3LDS1_address                         0xDBF
#define PWM3LDS1_position                        0x1
#define PWM3LDS1_size                            0x1
#define PWM3LDS1_value_mask                      0x2
#define PWM3LDS1_clear_mask                      0xFD

#define PWM3LDCON_LDS1                           0x1
#define PWM3LDCON_LDS1_address                   0xDBF
#define PWM3LDCON_LDS1_position                  0x1
#define PWM3LDCON_LDS1_size                      0x1
#define PWM3LDCON_LDS1_value_mask                0x2
#define PWM3LDCON_LDS1_clear_mask                0xFD

#define PWM3LDCON_LDT                            0x6
#define PWM3LDCON_LDT_address                    0xDBF
#define PWM3LDCON_LDT_position                   0x6
#define PWM3LDCON_LDT_size                       0x1
#define PWM3LDCON_LDT_value_mask                 0x40
#define PWM3LDCON_LDT_clear_mask                 0xBF

#define PWM3LDM                                  0x6
#define PWM3LDM_address                          0xDBF
#define PWM3LDM_position                         0x6
#define PWM3LDM_size                             0x1
#define PWM3LDM_value_mask                       0x40
#define PWM3LDM_clear_mask                       0xBF

#define PWM3LDCON_LDA                            0x7
#define PWM3LDCON_LDA_address                    0xDBF
#define PWM3LDCON_LDA_position                   0x7
#define PWM3LDCON_LDA_size                       0x1
#define PWM3LDCON_LDA_value_mask                 0x80
#define PWM3LDCON_LDA_clear_mask                 0x7F

#define PWM3LD                                   0x7
#define PWM3LD_address                           0xDBF
#define PWM3LD_position                          0x7
#define PWM3LD_size                              0x1
#define PWM3LD_value_mask                        0x80
#define PWM3LD_clear_mask                        0x7F


/*-----------------------------------------------------------------------------#
| PWM3OFCON                                                              0xDC0 |
#------------------------------------------------------------------------------#
| - | PWM3OFM1 | PWM3OFM0 | PWM3OFMC | - | - | PWM3OFCON_OFS1 | PWM3OFCON_OFS0 |
#------------------------------------------------------------------------------#
| 7 | 6        | 5        | 4        | 3 | 2 | 1              | 0              |
#-----------------------------------------------------------------------------*/

#define PWM3OFCON                                0x0
#define PWM3OFCON_address                        0xDC0
#define PWM3OFCON_position                       0x0
#define PWM3OFCON_size                           0x8
#define PWM3OFCON_value_mask                     0xFF
#define PWM3OFCON_clear_mask                     0x0

#define PWM3OFS                                  0x0
#define PWM3OFS_address                          0xDC0
#define PWM3OFS_position                         0x0
#define PWM3OFS_size                             0x2
#define PWM3OFS_value_mask                       0x3
#define PWM3OFS_clear_mask                       0xFC

#define PWM3OFCON_OFS0                           0x0
#define PWM3OFCON_OFS0_address                   0xDC0
#define PWM3OFCON_OFS0_position                  0x0
#define PWM3OFCON_OFS0_size                      0x1
#define PWM3OFCON_OFS0_value_mask                0x1
#define PWM3OFCON_OFS0_clear_mask                0xFE

#define PWM3OFS0                                 0x0
#define PWM3OFS0_address                         0xDC0
#define PWM3OFS0_position                        0x0
#define PWM3OFS0_size                            0x1
#define PWM3OFS0_value_mask                      0x1
#define PWM3OFS0_clear_mask                      0xFE

#define PWM3OFCON_OFS                            0x0
#define PWM3OFCON_OFS_address                    0xDC0
#define PWM3OFCON_OFS_position                   0x0
#define PWM3OFCON_OFS_size                       0x2
#define PWM3OFCON_OFS_value_mask                 0x3
#define PWM3OFCON_OFS_clear_mask                 0xFC

#define PWM3OFCON_OFS1                           0x1
#define PWM3OFCON_OFS1_address                   0xDC0
#define PWM3OFCON_OFS1_position                  0x1
#define PWM3OFCON_OFS1_size                      0x1
#define PWM3OFCON_OFS1_value_mask                0x2
#define PWM3OFCON_OFS1_clear_mask                0xFD

#define PWM3OFS1                                 0x1
#define PWM3OFS1_address                         0xDC0
#define PWM3OFS1_position                        0x1
#define PWM3OFS1_size                            0x1
#define PWM3OFS1_value_mask                      0x2
#define PWM3OFS1_clear_mask                      0xFD

#define PWM3OFMC                                 0x4
#define PWM3OFMC_address                         0xDC0
#define PWM3OFMC_position                        0x4
#define PWM3OFMC_size                            0x1
#define PWM3OFMC_value_mask                      0x10
#define PWM3OFMC_clear_mask                      0xEF

#define PWM3OFCON_OFO                            0x4
#define PWM3OFCON_OFO_address                    0xDC0
#define PWM3OFCON_OFO_position                   0x4
#define PWM3OFCON_OFO_size                       0x1
#define PWM3OFCON_OFO_value_mask                 0x10
#define PWM3OFCON_OFO_clear_mask                 0xEF

#define PWM3OFM0                                 0x5
#define PWM3OFM0_address                         0xDC0
#define PWM3OFM0_position                        0x5
#define PWM3OFM0_size                            0x1
#define PWM3OFM0_value_mask                      0x20
#define PWM3OFM0_clear_mask                      0xDF

#define PWM3OFCON_OFM0                           0x5
#define PWM3OFCON_OFM0_address                   0xDC0
#define PWM3OFCON_OFM0_position                  0x5
#define PWM3OFCON_OFM0_size                      0x1
#define PWM3OFCON_OFM0_value_mask                0x20
#define PWM3OFCON_OFM0_clear_mask                0xDF

#define PWM3OFCON_OFM                            0x5
#define PWM3OFCON_OFM_address                    0xDC0
#define PWM3OFCON_OFM_position                   0x5
#define PWM3OFCON_OFM_size                       0x2
#define PWM3OFCON_OFM_value_mask                 0x60
#define PWM3OFCON_OFM_clear_mask                 0x9F

#define PWM3OFM                                  0x5
#define PWM3OFM_address                          0xDC0
#define PWM3OFM_position                         0x5
#define PWM3OFM_size                             0x2
#define PWM3OFM_value_mask                       0x60
#define PWM3OFM_clear_mask                       0x9F

#define PWM3OFM1                                 0x6
#define PWM3OFM1_address                         0xDC0
#define PWM3OFM1_position                        0x6
#define PWM3OFM1_size                            0x1
#define PWM3OFM1_value_mask                      0x40
#define PWM3OFM1_clear_mask                      0xBF

#define PWM3OFCON_OFM1                           0x6
#define PWM3OFCON_OFM1_address                   0xDC0
#define PWM3OFCON_OFM1_position                  0x6
#define PWM3OFCON_OFM1_size                      0x1
#define PWM3OFCON_OFM1_value_mask                0x40
#define PWM3OFCON_OFM1_clear_mask                0xBF


/*--------------------------------------------------------------------------------------#
| PWM4PHL                                                                         0xDC1 |
#---------------------------------------------------------------------------------------#
| PWM4PHL7 | PWM4PHL6 | PWM4PHL5 | PWM4PHL4 | PWM4PHL3 | PWM4PHL2 | PWM4PHL1 | PWM4PHL0 |
#---------------------------------------------------------------------------------------#
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
#--------------------------------------------------------------------------------------*/

#define PWM4PHL_PH                               0x0
#define PWM4PHL_PH_address                       0xDC1
#define PWM4PHL_PH_position                      0x0
#define PWM4PHL_PH_size                          0x8
#define PWM4PHL_PH_value_mask                    0xFF
#define PWM4PHL_PH_clear_mask                    0x0

#define PWM4PHL                                  0x0
#define PWM4PHL_address                          0xDC1
#define PWM4PHL_position                         0x0
#define PWM4PHL_size                             0x8
#define PWM4PHL_value_mask                       0xFF
#define PWM4PHL_clear_mask                       0x0

#define PWM4PHL0                                 0x0
#define PWM4PHL0_address                         0xDC1
#define PWM4PHL0_position                        0x0
#define PWM4PHL0_size                            0x1
#define PWM4PHL0_value_mask                      0x1
#define PWM4PHL0_clear_mask                      0xFE

#define PWM4PHL1                                 0x1
#define PWM4PHL1_address                         0xDC1
#define PWM4PHL1_position                        0x1
#define PWM4PHL1_size                            0x1
#define PWM4PHL1_value_mask                      0x2
#define PWM4PHL1_clear_mask                      0xFD

#define PWM4PHL2                                 0x2
#define PWM4PHL2_address                         0xDC1
#define PWM4PHL2_position                        0x2
#define PWM4PHL2_size                            0x1
#define PWM4PHL2_value_mask                      0x4
#define PWM4PHL2_clear_mask                      0xFB

#define PWM4PHL3                                 0x3
#define PWM4PHL3_address                         0xDC1
#define PWM4PHL3_position                        0x3
#define PWM4PHL3_size                            0x1
#define PWM4PHL3_value_mask                      0x8
#define PWM4PHL3_clear_mask                      0xF7

#define PWM4PHL4                                 0x4
#define PWM4PHL4_address                         0xDC1
#define PWM4PHL4_position                        0x4
#define PWM4PHL4_size                            0x1
#define PWM4PHL4_value_mask                      0x10
#define PWM4PHL4_clear_mask                      0xEF

#define PWM4PHL5                                 0x5
#define PWM4PHL5_address                         0xDC1
#define PWM4PHL5_position                        0x5
#define PWM4PHL5_size                            0x1
#define PWM4PHL5_value_mask                      0x20
#define PWM4PHL5_clear_mask                      0xDF

#define PWM4PHL6                                 0x6
#define PWM4PHL6_address                         0xDC1
#define PWM4PHL6_position                        0x6
#define PWM4PHL6_size                            0x1
#define PWM4PHL6_value_mask                      0x40
#define PWM4PHL6_clear_mask                      0xBF

#define PWM4PHL7                                 0x7
#define PWM4PHL7_address                         0xDC1
#define PWM4PHL7_position                        0x7
#define PWM4PHL7_size                            0x1
#define PWM4PHL7_value_mask                      0x80
#define PWM4PHL7_clear_mask                      0x7F


/*--------------------------------------------------------------------------------------#
| PWM4PHH                                                                         0xDC2 |
#---------------------------------------------------------------------------------------#
| PWM4PHH7 | PWM4PHH6 | PWM4PHH5 | PWM4PHH4 | PWM4PHH3 | PWM4PHH2 | PWM4PHH1 | PWM4PHH0 |
#---------------------------------------------------------------------------------------#
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
#--------------------------------------------------------------------------------------*/

#define PWM4PHH                                  0x0
#define PWM4PHH_address                          0xDC2
#define PWM4PHH_position                         0x0
#define PWM4PHH_size                             0x8
#define PWM4PHH_value_mask                       0xFF
#define PWM4PHH_clear_mask                       0x0

#define PWM4PHH0                                 0x0
#define PWM4PHH0_address                         0xDC2
#define PWM4PHH0_position                        0x0
#define PWM4PHH0_size                            0x1
#define PWM4PHH0_value_mask                      0x1
#define PWM4PHH0_clear_mask                      0xFE

#define PWM4PHH_PH                               0x0
#define PWM4PHH_PH_address                       0xDC2
#define PWM4PHH_PH_position                      0x0
#define PWM4PHH_PH_size                          0x8
#define PWM4PHH_PH_value_mask                    0xFF
#define PWM4PHH_PH_clear_mask                    0x0

#define PWM4PHH1                                 0x1
#define PWM4PHH1_address                         0xDC2
#define PWM4PHH1_position                        0x1
#define PWM4PHH1_size                            0x1
#define PWM4PHH1_value_mask                      0x2
#define PWM4PHH1_clear_mask                      0xFD

#define PWM4PHH2                                 0x2
#define PWM4PHH2_address                         0xDC2
#define PWM4PHH2_position                        0x2
#define PWM4PHH2_size                            0x1
#define PWM4PHH2_value_mask                      0x4
#define PWM4PHH2_clear_mask                      0xFB

#define PWM4PHH3                                 0x3
#define PWM4PHH3_address                         0xDC2
#define PWM4PHH3_position                        0x3
#define PWM4PHH3_size                            0x1
#define PWM4PHH3_value_mask                      0x8
#define PWM4PHH3_clear_mask                      0xF7

#define PWM4PHH4                                 0x4
#define PWM4PHH4_address                         0xDC2
#define PWM4PHH4_position                        0x4
#define PWM4PHH4_size                            0x1
#define PWM4PHH4_value_mask                      0x10
#define PWM4PHH4_clear_mask                      0xEF

#define PWM4PHH5                                 0x5
#define PWM4PHH5_address                         0xDC2
#define PWM4PHH5_position                        0x5
#define PWM4PHH5_size                            0x1
#define PWM4PHH5_value_mask                      0x20
#define PWM4PHH5_clear_mask                      0xDF

#define PWM4PHH6                                 0x6
#define PWM4PHH6_address                         0xDC2
#define PWM4PHH6_position                        0x6
#define PWM4PHH6_size                            0x1
#define PWM4PHH6_value_mask                      0x40
#define PWM4PHH6_clear_mask                      0xBF

#define PWM4PHH7                                 0x7
#define PWM4PHH7_address                         0xDC2
#define PWM4PHH7_position                        0x7
#define PWM4PHH7_size                            0x1
#define PWM4PHH7_value_mask                      0x80
#define PWM4PHH7_clear_mask                      0x7F


/*--------------------------------------------------------------------------------------#
| PWM4DCL                                                                         0xDC3 |
#---------------------------------------------------------------------------------------#
| PWM4DCL7 | PWM4DCL6 | PWM4DCL5 | PWM4DCL4 | PWM4DCL3 | PWM4DCL2 | PWM4DCL1 | PWM4DCL0 |
#---------------------------------------------------------------------------------------#
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
#--------------------------------------------------------------------------------------*/

#define PWM4DCL0                                 0x0
#define PWM4DCL0_address                         0xDC3
#define PWM4DCL0_position                        0x0
#define PWM4DCL0_size                            0x1
#define PWM4DCL0_value_mask                      0x1
#define PWM4DCL0_clear_mask                      0xFE

#define PWM4DCL                                  0x0
#define PWM4DCL_address                          0xDC3
#define PWM4DCL_position                         0x0
#define PWM4DCL_size                             0x8
#define PWM4DCL_value_mask                       0xFF
#define PWM4DCL_clear_mask                       0x0

#define PWM4DCL_DC                               0x0
#define PWM4DCL_DC_address                       0xDC3
#define PWM4DCL_DC_position                      0x0
#define PWM4DCL_DC_size                          0x8
#define PWM4DCL_DC_value_mask                    0xFF
#define PWM4DCL_DC_clear_mask                    0x0

#define PWM4DCL1                                 0x1
#define PWM4DCL1_address                         0xDC3
#define PWM4DCL1_position                        0x1
#define PWM4DCL1_size                            0x1
#define PWM4DCL1_value_mask                      0x2
#define PWM4DCL1_clear_mask                      0xFD

#define PWM4DCL2                                 0x2
#define PWM4DCL2_address                         0xDC3
#define PWM4DCL2_position                        0x2
#define PWM4DCL2_size                            0x1
#define PWM4DCL2_value_mask                      0x4
#define PWM4DCL2_clear_mask                      0xFB

#define PWM4DCL3                                 0x3
#define PWM4DCL3_address                         0xDC3
#define PWM4DCL3_position                        0x3
#define PWM4DCL3_size                            0x1
#define PWM4DCL3_value_mask                      0x8
#define PWM4DCL3_clear_mask                      0xF7

#define PWM4DCL4                                 0x4
#define PWM4DCL4_address                         0xDC3
#define PWM4DCL4_position                        0x4
#define PWM4DCL4_size                            0x1
#define PWM4DCL4_value_mask                      0x10
#define PWM4DCL4_clear_mask                      0xEF

#define PWM4DCL5                                 0x5
#define PWM4DCL5_address                         0xDC3
#define PWM4DCL5_position                        0x5
#define PWM4DCL5_size                            0x1
#define PWM4DCL5_value_mask                      0x20
#define PWM4DCL5_clear_mask                      0xDF

#define PWM4DCL6                                 0x6
#define PWM4DCL6_address                         0xDC3
#define PWM4DCL6_position                        0x6
#define PWM4DCL6_size                            0x1
#define PWM4DCL6_value_mask                      0x40
#define PWM4DCL6_clear_mask                      0xBF

#define PWM4DCL7                                 0x7
#define PWM4DCL7_address                         0xDC3
#define PWM4DCL7_position                        0x7
#define PWM4DCL7_size                            0x1
#define PWM4DCL7_value_mask                      0x80
#define PWM4DCL7_clear_mask                      0x7F


/*--------------------------------------------------------------------------------------#
| PWM4DCH                                                                         0xDC4 |
#---------------------------------------------------------------------------------------#
| PWM4DCH7 | PWM4DCH6 | PWM4DCH5 | PWM4DCH4 | PWM4DCH3 | PWM4DCH2 | PWM4DCH1 | PWM4DCH0 |
#---------------------------------------------------------------------------------------#
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
#--------------------------------------------------------------------------------------*/

#define PWM4DCH0                                 0x0
#define PWM4DCH0_address                         0xDC4
#define PWM4DCH0_position                        0x0
#define PWM4DCH0_size                            0x1
#define PWM4DCH0_value_mask                      0x1
#define PWM4DCH0_clear_mask                      0xFE

#define PWM4DCH                                  0x0
#define PWM4DCH_address                          0xDC4
#define PWM4DCH_position                         0x0
#define PWM4DCH_size                             0x8
#define PWM4DCH_value_mask                       0xFF
#define PWM4DCH_clear_mask                       0x0

#define PWM4DCH_DC                               0x0
#define PWM4DCH_DC_address                       0xDC4
#define PWM4DCH_DC_position                      0x0
#define PWM4DCH_DC_size                          0x8
#define PWM4DCH_DC_value_mask                    0xFF
#define PWM4DCH_DC_clear_mask                    0x0

#define PWM4DCH1                                 0x1
#define PWM4DCH1_address                         0xDC4
#define PWM4DCH1_position                        0x1
#define PWM4DCH1_size                            0x1
#define PWM4DCH1_value_mask                      0x2
#define PWM4DCH1_clear_mask                      0xFD

#define PWM4DCH2                                 0x2
#define PWM4DCH2_address                         0xDC4
#define PWM4DCH2_position                        0x2
#define PWM4DCH2_size                            0x1
#define PWM4DCH2_value_mask                      0x4
#define PWM4DCH2_clear_mask                      0xFB

#define PWM4DCH3                                 0x3
#define PWM4DCH3_address                         0xDC4
#define PWM4DCH3_position                        0x3
#define PWM4DCH3_size                            0x1
#define PWM4DCH3_value_mask                      0x8
#define PWM4DCH3_clear_mask                      0xF7

#define PWM4DCH4                                 0x4
#define PWM4DCH4_address                         0xDC4
#define PWM4DCH4_position                        0x4
#define PWM4DCH4_size                            0x1
#define PWM4DCH4_value_mask                      0x10
#define PWM4DCH4_clear_mask                      0xEF

#define PWM4DCH5                                 0x5
#define PWM4DCH5_address                         0xDC4
#define PWM4DCH5_position                        0x5
#define PWM4DCH5_size                            0x1
#define PWM4DCH5_value_mask                      0x20
#define PWM4DCH5_clear_mask                      0xDF

#define PWM4DCH6                                 0x6
#define PWM4DCH6_address                         0xDC4
#define PWM4DCH6_position                        0x6
#define PWM4DCH6_size                            0x1
#define PWM4DCH6_value_mask                      0x40
#define PWM4DCH6_clear_mask                      0xBF

#define PWM4DCH7                                 0x7
#define PWM4DCH7_address                         0xDC4
#define PWM4DCH7_position                        0x7
#define PWM4DCH7_size                            0x1
#define PWM4DCH7_value_mask                      0x80
#define PWM4DCH7_clear_mask                      0x7F


/*--------------------------------------------------------------------------------------#
| PWM4PRL                                                                         0xDC5 |
#---------------------------------------------------------------------------------------#
| PWM4PRL7 | PWM4PRL6 | PWM4PRL5 | PWM4PRL4 | PWM4PRL3 | PWM4PRL2 | PWM4PRL1 | PWM4PRL0 |
#---------------------------------------------------------------------------------------#
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
#--------------------------------------------------------------------------------------*/

#define PWM4PRL_PR                               0x0
#define PWM4PRL_PR_address                       0xDC5
#define PWM4PRL_PR_position                      0x0
#define PWM4PRL_PR_size                          0x8
#define PWM4PRL_PR_value_mask                    0xFF
#define PWM4PRL_PR_clear_mask                    0x0

#define PWM4PRL                                  0x0
#define PWM4PRL_address                          0xDC5
#define PWM4PRL_position                         0x0
#define PWM4PRL_size                             0x8
#define PWM4PRL_value_mask                       0xFF
#define PWM4PRL_clear_mask                       0x0

#define PWM4PRL0                                 0x0
#define PWM4PRL0_address                         0xDC5
#define PWM4PRL0_position                        0x0
#define PWM4PRL0_size                            0x1
#define PWM4PRL0_value_mask                      0x1
#define PWM4PRL0_clear_mask                      0xFE

#define PWM4PRL1                                 0x1
#define PWM4PRL1_address                         0xDC5
#define PWM4PRL1_position                        0x1
#define PWM4PRL1_size                            0x1
#define PWM4PRL1_value_mask                      0x2
#define PWM4PRL1_clear_mask                      0xFD

#define PWM4PRL2                                 0x2
#define PWM4PRL2_address                         0xDC5
#define PWM4PRL2_position                        0x2
#define PWM4PRL2_size                            0x1
#define PWM4PRL2_value_mask                      0x4
#define PWM4PRL2_clear_mask                      0xFB

#define PWM4PRL3                                 0x3
#define PWM4PRL3_address                         0xDC5
#define PWM4PRL3_position                        0x3
#define PWM4PRL3_size                            0x1
#define PWM4PRL3_value_mask                      0x8
#define PWM4PRL3_clear_mask                      0xF7

#define PWM4PRL4                                 0x4
#define PWM4PRL4_address                         0xDC5
#define PWM4PRL4_position                        0x4
#define PWM4PRL4_size                            0x1
#define PWM4PRL4_value_mask                      0x10
#define PWM4PRL4_clear_mask                      0xEF

#define PWM4PRL5                                 0x5
#define PWM4PRL5_address                         0xDC5
#define PWM4PRL5_position                        0x5
#define PWM4PRL5_size                            0x1
#define PWM4PRL5_value_mask                      0x20
#define PWM4PRL5_clear_mask                      0xDF

#define PWM4PRL6                                 0x6
#define PWM4PRL6_address                         0xDC5
#define PWM4PRL6_position                        0x6
#define PWM4PRL6_size                            0x1
#define PWM4PRL6_value_mask                      0x40
#define PWM4PRL6_clear_mask                      0xBF

#define PWM4PRL7                                 0x7
#define PWM4PRL7_address                         0xDC5
#define PWM4PRL7_position                        0x7
#define PWM4PRL7_size                            0x1
#define PWM4PRL7_value_mask                      0x80
#define PWM4PRL7_clear_mask                      0x7F


/*--------------------------------------------------------------------------------------#
| PWM4PRH                                                                         0xDC6 |
#---------------------------------------------------------------------------------------#
| PWM4PRH7 | PWM4PRH6 | PWM4PRH5 | PWM4PRH4 | PWM4PRH3 | PWM4PRH2 | PWM4PRH1 | PWM4PRH0 |
#---------------------------------------------------------------------------------------#
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
#--------------------------------------------------------------------------------------*/

#define PWM4PRH0                                 0x0
#define PWM4PRH0_address                         0xDC6
#define PWM4PRH0_position                        0x0
#define PWM4PRH0_size                            0x1
#define PWM4PRH0_value_mask                      0x1
#define PWM4PRH0_clear_mask                      0xFE

#define PWM4PRH                                  0x0
#define PWM4PRH_address                          0xDC6
#define PWM4PRH_position                         0x0
#define PWM4PRH_size                             0x8
#define PWM4PRH_value_mask                       0xFF
#define PWM4PRH_clear_mask                       0x0

#define PWM4PRH_PR                               0x0
#define PWM4PRH_PR_address                       0xDC6
#define PWM4PRH_PR_position                      0x0
#define PWM4PRH_PR_size                          0x8
#define PWM4PRH_PR_value_mask                    0xFF
#define PWM4PRH_PR_clear_mask                    0x0

#define PWM4PRH1                                 0x1
#define PWM4PRH1_address                         0xDC6
#define PWM4PRH1_position                        0x1
#define PWM4PRH1_size                            0x1
#define PWM4PRH1_value_mask                      0x2
#define PWM4PRH1_clear_mask                      0xFD

#define PWM4PRH2                                 0x2
#define PWM4PRH2_address                         0xDC6
#define PWM4PRH2_position                        0x2
#define PWM4PRH2_size                            0x1
#define PWM4PRH2_value_mask                      0x4
#define PWM4PRH2_clear_mask                      0xFB

#define PWM4PRH3                                 0x3
#define PWM4PRH3_address                         0xDC6
#define PWM4PRH3_position                        0x3
#define PWM4PRH3_size                            0x1
#define PWM4PRH3_value_mask                      0x8
#define PWM4PRH3_clear_mask                      0xF7

#define PWM4PRH4                                 0x4
#define PWM4PRH4_address                         0xDC6
#define PWM4PRH4_position                        0x4
#define PWM4PRH4_size                            0x1
#define PWM4PRH4_value_mask                      0x10
#define PWM4PRH4_clear_mask                      0xEF

#define PWM4PRH5                                 0x5
#define PWM4PRH5_address                         0xDC6
#define PWM4PRH5_position                        0x5
#define PWM4PRH5_size                            0x1
#define PWM4PRH5_value_mask                      0x20
#define PWM4PRH5_clear_mask                      0xDF

#define PWM4PRH6                                 0x6
#define PWM4PRH6_address                         0xDC6
#define PWM4PRH6_position                        0x6
#define PWM4PRH6_size                            0x1
#define PWM4PRH6_value_mask                      0x40
#define PWM4PRH6_clear_mask                      0xBF

#define PWM4PRH7                                 0x7
#define PWM4PRH7_address                         0xDC6
#define PWM4PRH7_position                        0x7
#define PWM4PRH7_size                            0x1
#define PWM4PRH7_value_mask                      0x80
#define PWM4PRH7_clear_mask                      0x7F


/*--------------------------------------------------------------------------------------#
| PWM4OFL                                                                         0xDC7 |
#---------------------------------------------------------------------------------------#
| PWM4OFL7 | PWM4OFL6 | PWM4OFL5 | PWM4OFL4 | PWM4OFL3 | PWM4OFL2 | PWM4OFL1 | PWM4OFL0 |
#---------------------------------------------------------------------------------------#
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
#--------------------------------------------------------------------------------------*/

#define PWM4OFL0                                 0x0
#define PWM4OFL0_address                         0xDC7
#define PWM4OFL0_position                        0x0
#define PWM4OFL0_size                            0x1
#define PWM4OFL0_value_mask                      0x1
#define PWM4OFL0_clear_mask                      0xFE

#define PWM4OFL                                  0x0
#define PWM4OFL_address                          0xDC7
#define PWM4OFL_position                         0x0
#define PWM4OFL_size                             0x8
#define PWM4OFL_value_mask                       0xFF
#define PWM4OFL_clear_mask                       0x0

#define PWM4OFL_OF                               0x0
#define PWM4OFL_OF_address                       0xDC7
#define PWM4OFL_OF_position                      0x0
#define PWM4OFL_OF_size                          0x8
#define PWM4OFL_OF_value_mask                    0xFF
#define PWM4OFL_OF_clear_mask                    0x0

#define PWM4OFL1                                 0x1
#define PWM4OFL1_address                         0xDC7
#define PWM4OFL1_position                        0x1
#define PWM4OFL1_size                            0x1
#define PWM4OFL1_value_mask                      0x2
#define PWM4OFL1_clear_mask                      0xFD

#define PWM4OFL2                                 0x2
#define PWM4OFL2_address                         0xDC7
#define PWM4OFL2_position                        0x2
#define PWM4OFL2_size                            0x1
#define PWM4OFL2_value_mask                      0x4
#define PWM4OFL2_clear_mask                      0xFB

#define PWM4OFL3                                 0x3
#define PWM4OFL3_address                         0xDC7
#define PWM4OFL3_position                        0x3
#define PWM4OFL3_size                            0x1
#define PWM4OFL3_value_mask                      0x8
#define PWM4OFL3_clear_mask                      0xF7

#define PWM4OFL4                                 0x4
#define PWM4OFL4_address                         0xDC7
#define PWM4OFL4_position                        0x4
#define PWM4OFL4_size                            0x1
#define PWM4OFL4_value_mask                      0x10
#define PWM4OFL4_clear_mask                      0xEF

#define PWM4OFL5                                 0x5
#define PWM4OFL5_address                         0xDC7
#define PWM4OFL5_position                        0x5
#define PWM4OFL5_size                            0x1
#define PWM4OFL5_value_mask                      0x20
#define PWM4OFL5_clear_mask                      0xDF

#define PWM4OFL6                                 0x6
#define PWM4OFL6_address                         0xDC7
#define PWM4OFL6_position                        0x6
#define PWM4OFL6_size                            0x1
#define PWM4OFL6_value_mask                      0x40
#define PWM4OFL6_clear_mask                      0xBF

#define PWM4OFL7                                 0x7
#define PWM4OFL7_address                         0xDC7
#define PWM4OFL7_position                        0x7
#define PWM4OFL7_size                            0x1
#define PWM4OFL7_value_mask                      0x80
#define PWM4OFL7_clear_mask                      0x7F


/*--------------------------------------------------------------------------------------#
| PWM4OFH                                                                         0xDC8 |
#---------------------------------------------------------------------------------------#
| PWM4OFH7 | PWM4OFH6 | PWM4OFH5 | PWM4OFH4 | PWM4OFH3 | PWM4OFH2 | PWM4OFH1 | PWM4OFH0 |
#---------------------------------------------------------------------------------------#
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
#--------------------------------------------------------------------------------------*/

#define PWM4OFH                                  0x0
#define PWM4OFH_address                          0xDC8
#define PWM4OFH_position                         0x0
#define PWM4OFH_size                             0x8
#define PWM4OFH_value_mask                       0xFF
#define PWM4OFH_clear_mask                       0x0

#define PWM4OFH_OF                               0x0
#define PWM4OFH_OF_address                       0xDC8
#define PWM4OFH_OF_position                      0x0
#define PWM4OFH_OF_size                          0x8
#define PWM4OFH_OF_value_mask                    0xFF
#define PWM4OFH_OF_clear_mask                    0x0

#define PWM4OFH0                                 0x0
#define PWM4OFH0_address                         0xDC8
#define PWM4OFH0_position                        0x0
#define PWM4OFH0_size                            0x1
#define PWM4OFH0_value_mask                      0x1
#define PWM4OFH0_clear_mask                      0xFE

#define PWM4OFH1                                 0x1
#define PWM4OFH1_address                         0xDC8
#define PWM4OFH1_position                        0x1
#define PWM4OFH1_size                            0x1
#define PWM4OFH1_value_mask                      0x2
#define PWM4OFH1_clear_mask                      0xFD

#define PWM4OFH2                                 0x2
#define PWM4OFH2_address                         0xDC8
#define PWM4OFH2_position                        0x2
#define PWM4OFH2_size                            0x1
#define PWM4OFH2_value_mask                      0x4
#define PWM4OFH2_clear_mask                      0xFB

#define PWM4OFH3                                 0x3
#define PWM4OFH3_address                         0xDC8
#define PWM4OFH3_position                        0x3
#define PWM4OFH3_size                            0x1
#define PWM4OFH3_value_mask                      0x8
#define PWM4OFH3_clear_mask                      0xF7

#define PWM4OFH4                                 0x4
#define PWM4OFH4_address                         0xDC8
#define PWM4OFH4_position                        0x4
#define PWM4OFH4_size                            0x1
#define PWM4OFH4_value_mask                      0x10
#define PWM4OFH4_clear_mask                      0xEF

#define PWM4OFH5                                 0x5
#define PWM4OFH5_address                         0xDC8
#define PWM4OFH5_position                        0x5
#define PWM4OFH5_size                            0x1
#define PWM4OFH5_value_mask                      0x20
#define PWM4OFH5_clear_mask                      0xDF

#define PWM4OFH6                                 0x6
#define PWM4OFH6_address                         0xDC8
#define PWM4OFH6_position                        0x6
#define PWM4OFH6_size                            0x1
#define PWM4OFH6_value_mask                      0x40
#define PWM4OFH6_clear_mask                      0xBF

#define PWM4OFH7                                 0x7
#define PWM4OFH7_address                         0xDC8
#define PWM4OFH7_position                        0x7
#define PWM4OFH7_size                            0x1
#define PWM4OFH7_value_mask                      0x80
#define PWM4OFH7_clear_mask                      0x7F


/*----------------------------------------------------------------------------------------------#
| PWM4TMRL                                                                                0xDC9 |
#-----------------------------------------------------------------------------------------------#
| PWM4TMRL7 | PWM4TMRL6 | PWM4TMRL5 | PWM4TMRL4 | PWM4TMRL3 | PWM4TMRL2 | PWM4TMRL1 | PWM4TMRL0 |
#-----------------------------------------------------------------------------------------------#
| 7         | 6         | 5         | 4         | 3         | 2         | 1         | 0         |
#----------------------------------------------------------------------------------------------*/

#define PWM4TMRL0                                0x0
#define PWM4TMRL0_address                        0xDC9
#define PWM4TMRL0_position                       0x0
#define PWM4TMRL0_size                           0x1
#define PWM4TMRL0_value_mask                     0x1
#define PWM4TMRL0_clear_mask                     0xFE

#define PWM4TMRL_TMR                             0x0
#define PWM4TMRL_TMR_address                     0xDC9
#define PWM4TMRL_TMR_position                    0x0
#define PWM4TMRL_TMR_size                        0x8
#define PWM4TMRL_TMR_value_mask                  0xFF
#define PWM4TMRL_TMR_clear_mask                  0x0

#define PWM4TMRL                                 0x0
#define PWM4TMRL_address                         0xDC9
#define PWM4TMRL_position                        0x0
#define PWM4TMRL_size                            0x8
#define PWM4TMRL_value_mask                      0xFF
#define PWM4TMRL_clear_mask                      0x0

#define PWM4TMRL1                                0x1
#define PWM4TMRL1_address                        0xDC9
#define PWM4TMRL1_position                       0x1
#define PWM4TMRL1_size                           0x1
#define PWM4TMRL1_value_mask                     0x2
#define PWM4TMRL1_clear_mask                     0xFD

#define PWM4TMRL2                                0x2
#define PWM4TMRL2_address                        0xDC9
#define PWM4TMRL2_position                       0x2
#define PWM4TMRL2_size                           0x1
#define PWM4TMRL2_value_mask                     0x4
#define PWM4TMRL2_clear_mask                     0xFB

#define PWM4TMRL3                                0x3
#define PWM4TMRL3_address                        0xDC9
#define PWM4TMRL3_position                       0x3
#define PWM4TMRL3_size                           0x1
#define PWM4TMRL3_value_mask                     0x8
#define PWM4TMRL3_clear_mask                     0xF7

#define PWM4TMRL4                                0x4
#define PWM4TMRL4_address                        0xDC9
#define PWM4TMRL4_position                       0x4
#define PWM4TMRL4_size                           0x1
#define PWM4TMRL4_value_mask                     0x10
#define PWM4TMRL4_clear_mask                     0xEF

#define PWM4TMRL5                                0x5
#define PWM4TMRL5_address                        0xDC9
#define PWM4TMRL5_position                       0x5
#define PWM4TMRL5_size                           0x1
#define PWM4TMRL5_value_mask                     0x20
#define PWM4TMRL5_clear_mask                     0xDF

#define PWM4TMRL6                                0x6
#define PWM4TMRL6_address                        0xDC9
#define PWM4TMRL6_position                       0x6
#define PWM4TMRL6_size                           0x1
#define PWM4TMRL6_value_mask                     0x40
#define PWM4TMRL6_clear_mask                     0xBF

#define PWM4TMRL7                                0x7
#define PWM4TMRL7_address                        0xDC9
#define PWM4TMRL7_position                       0x7
#define PWM4TMRL7_size                           0x1
#define PWM4TMRL7_value_mask                     0x80
#define PWM4TMRL7_clear_mask                     0x7F


/*----------------------------------------------------------------------------------------------#
| PWM4TMRH                                                                                0xDCA |
#-----------------------------------------------------------------------------------------------#
| PWM4TMRH7 | PWM4TMRH6 | PWM4TMRH5 | PWM4TMRH4 | PWM4TMRH3 | PWM4TMRH2 | PWM4TMRH1 | PWM4TMRH0 |
#-----------------------------------------------------------------------------------------------#
| 7         | 6         | 5         | 4         | 3         | 2         | 1         | 0         |
#----------------------------------------------------------------------------------------------*/

#define PWM4TMRH                                 0x0
#define PWM4TMRH_address                         0xDCA
#define PWM4TMRH_position                        0x0
#define PWM4TMRH_size                            0x8
#define PWM4TMRH_value_mask                      0xFF
#define PWM4TMRH_clear_mask                      0x0

#define PWM4TMRH_TMR                             0x0
#define PWM4TMRH_TMR_address                     0xDCA
#define PWM4TMRH_TMR_position                    0x0
#define PWM4TMRH_TMR_size                        0x8
#define PWM4TMRH_TMR_value_mask                  0xFF
#define PWM4TMRH_TMR_clear_mask                  0x0

#define PWM4TMRH0                                0x0
#define PWM4TMRH0_address                        0xDCA
#define PWM4TMRH0_position                       0x0
#define PWM4TMRH0_size                           0x1
#define PWM4TMRH0_value_mask                     0x1
#define PWM4TMRH0_clear_mask                     0xFE

#define PWM4TMRH1                                0x1
#define PWM4TMRH1_address                        0xDCA
#define PWM4TMRH1_position                       0x1
#define PWM4TMRH1_size                           0x1
#define PWM4TMRH1_value_mask                     0x2
#define PWM4TMRH1_clear_mask                     0xFD

#define PWM4TMRH2                                0x2
#define PWM4TMRH2_address                        0xDCA
#define PWM4TMRH2_position                       0x2
#define PWM4TMRH2_size                           0x1
#define PWM4TMRH2_value_mask                     0x4
#define PWM4TMRH2_clear_mask                     0xFB

#define PWM4TMRH3                                0x3
#define PWM4TMRH3_address                        0xDCA
#define PWM4TMRH3_position                       0x3
#define PWM4TMRH3_size                           0x1
#define PWM4TMRH3_value_mask                     0x8
#define PWM4TMRH3_clear_mask                     0xF7

#define PWM4TMRH4                                0x4
#define PWM4TMRH4_address                        0xDCA
#define PWM4TMRH4_position                       0x4
#define PWM4TMRH4_size                           0x1
#define PWM4TMRH4_value_mask                     0x10
#define PWM4TMRH4_clear_mask                     0xEF

#define PWM4TMRH5                                0x5
#define PWM4TMRH5_address                        0xDCA
#define PWM4TMRH5_position                       0x5
#define PWM4TMRH5_size                           0x1
#define PWM4TMRH5_value_mask                     0x20
#define PWM4TMRH5_clear_mask                     0xDF

#define PWM4TMRH6                                0x6
#define PWM4TMRH6_address                        0xDCA
#define PWM4TMRH6_position                       0x6
#define PWM4TMRH6_size                           0x1
#define PWM4TMRH6_value_mask                     0x40
#define PWM4TMRH6_clear_mask                     0xBF

#define PWM4TMRH7                                0x7
#define PWM4TMRH7_address                        0xDCA
#define PWM4TMRH7_position                       0x7
#define PWM4TMRH7_size                           0x1
#define PWM4TMRH7_value_mask                     0x80
#define PWM4TMRH7_clear_mask                     0x7F


/*------------------------------------------------------------------------------------#
| PWM4CON                                                                       0xDCB |
#-------------------------------------------------------------------------------------#
| PWM4EN | PWM4CON_OE | PWM4CON_OUT | PWM4POL | PWM4CON_MODE1 | PWM4CON_MODE0 | - | - |
#-------------------------------------------------------------------------------------#
| 7      | 6          | 5           | 4       | 3             | 2             | 1 | 0 |
#------------------------------------------------------------------------------------*/

#define PWM4CON                                  0x0
#define PWM4CON_address                          0xDCB
#define PWM4CON_position                         0x0
#define PWM4CON_size                             0x8
#define PWM4CON_value_mask                       0xFF
#define PWM4CON_clear_mask                       0x0

#define PWM4MODE                                 0x2
#define PWM4MODE_address                         0xDCB
#define PWM4MODE_position                        0x2
#define PWM4MODE_size                            0x2
#define PWM4MODE_value_mask                      0xC
#define PWM4MODE_clear_mask                      0xF3

#define PWM4MODE0                                0x2
#define PWM4MODE0_address                        0xDCB
#define PWM4MODE0_position                       0x2
#define PWM4MODE0_size                           0x1
#define PWM4MODE0_value_mask                     0x4
#define PWM4MODE0_clear_mask                     0xFB

#define PWM4CON_MODE                             0x2
#define PWM4CON_MODE_address                     0xDCB
#define PWM4CON_MODE_position                    0x2
#define PWM4CON_MODE_size                        0x2
#define PWM4CON_MODE_value_mask                  0xC
#define PWM4CON_MODE_clear_mask                  0xF3

#define PWM4CON_MODE0                            0x2
#define PWM4CON_MODE0_address                    0xDCB
#define PWM4CON_MODE0_position                   0x2
#define PWM4CON_MODE0_size                       0x1
#define PWM4CON_MODE0_value_mask                 0x4
#define PWM4CON_MODE0_clear_mask                 0xFB

#define PWM4CON_MODE1                            0x3
#define PWM4CON_MODE1_address                    0xDCB
#define PWM4CON_MODE1_position                   0x3
#define PWM4CON_MODE1_size                       0x1
#define PWM4CON_MODE1_value_mask                 0x8
#define PWM4CON_MODE1_clear_mask                 0xF7

#define PWM4MODE1                                0x3
#define PWM4MODE1_address                        0xDCB
#define PWM4MODE1_position                       0x3
#define PWM4MODE1_size                           0x1
#define PWM4MODE1_value_mask                     0x8
#define PWM4MODE1_clear_mask                     0xF7

#define PWM4POL                                  0x4
#define PWM4POL_address                          0xDCB
#define PWM4POL_position                         0x4
#define PWM4POL_size                             0x1
#define PWM4POL_value_mask                       0x10
#define PWM4POL_clear_mask                       0xEF

#define PWM4CON_POL                              0x4
#define PWM4CON_POL_address                      0xDCB
#define PWM4CON_POL_position                     0x4
#define PWM4CON_POL_size                         0x1
#define PWM4CON_POL_value_mask                   0x10
#define PWM4CON_POL_clear_mask                   0xEF

#define PWM4CON_OUT                              0x5
#define PWM4CON_OUT_address                      0xDCB
#define PWM4CON_OUT_position                     0x5
#define PWM4CON_OUT_size                         0x1
#define PWM4CON_OUT_value_mask                   0x20
#define PWM4CON_OUT_clear_mask                   0xDF

#define PWM4OUT                                  0x5
#define PWM4OUT_address                          0xDCB
#define PWM4OUT_position                         0x5
#define PWM4OUT_size                             0x1
#define PWM4OUT_value_mask                       0x20
#define PWM4OUT_clear_mask                       0xDF

#define PWM4CON_OE                               0x6
#define PWM4CON_OE_address                       0xDCB
#define PWM4CON_OE_position                      0x6
#define PWM4CON_OE_size                          0x1
#define PWM4CON_OE_value_mask                    0x40
#define PWM4CON_OE_clear_mask                    0xBF

#define PWM4OE                                   0x6
#define PWM4OE_address                           0xDCB
#define PWM4OE_position                          0x6
#define PWM4OE_size                              0x1
#define PWM4OE_value_mask                        0x40
#define PWM4OE_clear_mask                        0xBF

#define PWM4EN                                   0x7
#define PWM4EN_address                           0xDCB
#define PWM4EN_position                          0x7
#define PWM4EN_size                              0x1
#define PWM4EN_value_mask                        0x80
#define PWM4EN_clear_mask                        0x7F

#define PWM4CON_EN                               0x7
#define PWM4CON_EN_address                       0xDCB
#define PWM4CON_EN_position                      0x7
#define PWM4CON_EN_size                          0x1
#define PWM4CON_EN_value_mask                    0x80
#define PWM4CON_EN_clear_mask                    0x7F


/*-------------------------------------------------------------------------#
| PWM4INTE                                                           0xDCC |
#--------------------------------------------------------------------------#
| - | - | - | - | PWM4OFIE | PWM4INTE_PHIE | PWM4INTE_DCIE | PWM4INTE_PRIE |
#--------------------------------------------------------------------------#
| 7 | 6 | 5 | 4 | 3        | 2             | 1             | 0             |
#-------------------------------------------------------------------------*/

#define PWM4INTE                                 0x0
#define PWM4INTE_address                         0xDCC
#define PWM4INTE_position                        0x0
#define PWM4INTE_size                            0x8
#define PWM4INTE_value_mask                      0xFF
#define PWM4INTE_clear_mask                      0x0

#define PWM4INTE_PRIE                            0x0
#define PWM4INTE_PRIE_address                    0xDCC
#define PWM4INTE_PRIE_position                   0x0
#define PWM4INTE_PRIE_size                       0x1
#define PWM4INTE_PRIE_value_mask                 0x1
#define PWM4INTE_PRIE_clear_mask                 0xFE

#define PWM4PRIE                                 0x0
#define PWM4PRIE_address                         0xDCC
#define PWM4PRIE_position                        0x0
#define PWM4PRIE_size                            0x1
#define PWM4PRIE_value_mask                      0x1
#define PWM4PRIE_clear_mask                      0xFE

#define PWM4INTE_DCIE                            0x1
#define PWM4INTE_DCIE_address                    0xDCC
#define PWM4INTE_DCIE_position                   0x1
#define PWM4INTE_DCIE_size                       0x1
#define PWM4INTE_DCIE_value_mask                 0x2
#define PWM4INTE_DCIE_clear_mask                 0xFD

#define PWM4DCIE                                 0x1
#define PWM4DCIE_address                         0xDCC
#define PWM4DCIE_position                        0x1
#define PWM4DCIE_size                            0x1
#define PWM4DCIE_value_mask                      0x2
#define PWM4DCIE_clear_mask                      0xFD

#define PWM4PHIE                                 0x2
#define PWM4PHIE_address                         0xDCC
#define PWM4PHIE_position                        0x2
#define PWM4PHIE_size                            0x1
#define PWM4PHIE_value_mask                      0x4
#define PWM4PHIE_clear_mask                      0xFB

#define PWM4INTE_PHIE                            0x2
#define PWM4INTE_PHIE_address                    0xDCC
#define PWM4INTE_PHIE_position                   0x2
#define PWM4INTE_PHIE_size                       0x1
#define PWM4INTE_PHIE_value_mask                 0x4
#define PWM4INTE_PHIE_clear_mask                 0xFB

#define PWM4OFIE                                 0x3
#define PWM4OFIE_address                         0xDCC
#define PWM4OFIE_position                        0x3
#define PWM4OFIE_size                            0x1
#define PWM4OFIE_value_mask                      0x8
#define PWM4OFIE_clear_mask                      0xF7

#define PWM4INTE_OFIE                            0x3
#define PWM4INTE_OFIE_address                    0xDCC
#define PWM4INTE_OFIE_position                   0x3
#define PWM4INTE_OFIE_size                       0x1
#define PWM4INTE_OFIE_value_mask                 0x8
#define PWM4INTE_OFIE_clear_mask                 0xF7


/*---------------------------------------------------------------#
| PWM4INTF                                                 0xDCD |
#----------------------------------------------------------------#
| - | - | - | - | PWM4OFIF | PWM4PHIF | PWM4INTF_DCIF | PWM4PRIF |
#----------------------------------------------------------------#
| 7 | 6 | 5 | 4 | 3        | 2        | 1             | 0        |
#---------------------------------------------------------------*/

#define PWM4INTF                                 0x0
#define PWM4INTF_address                         0xDCD
#define PWM4INTF_position                        0x0
#define PWM4INTF_size                            0x8
#define PWM4INTF_value_mask                      0xFF
#define PWM4INTF_clear_mask                      0x0

#define PWM4PRIF                                 0x0
#define PWM4PRIF_address                         0xDCD
#define PWM4PRIF_position                        0x0
#define PWM4PRIF_size                            0x1
#define PWM4PRIF_value_mask                      0x1
#define PWM4PRIF_clear_mask                      0xFE

#define PWM4INTF_PRIF                            0x0
#define PWM4INTF_PRIF_address                    0xDCD
#define PWM4INTF_PRIF_position                   0x0
#define PWM4INTF_PRIF_size                       0x1
#define PWM4INTF_PRIF_value_mask                 0x1
#define PWM4INTF_PRIF_clear_mask                 0xFE

#define PWM4INTF_DCIF                            0x1
#define PWM4INTF_DCIF_address                    0xDCD
#define PWM4INTF_DCIF_position                   0x1
#define PWM4INTF_DCIF_size                       0x1
#define PWM4INTF_DCIF_value_mask                 0x2
#define PWM4INTF_DCIF_clear_mask                 0xFD

#define PWM4DCIF                                 0x1
#define PWM4DCIF_address                         0xDCD
#define PWM4DCIF_position                        0x1
#define PWM4DCIF_size                            0x1
#define PWM4DCIF_value_mask                      0x2
#define PWM4DCIF_clear_mask                      0xFD

#define PWM4PHIF                                 0x2
#define PWM4PHIF_address                         0xDCD
#define PWM4PHIF_position                        0x2
#define PWM4PHIF_size                            0x1
#define PWM4PHIF_value_mask                      0x4
#define PWM4PHIF_clear_mask                      0xFB

#define PWM4INTF_PHIF                            0x2
#define PWM4INTF_PHIF_address                    0xDCD
#define PWM4INTF_PHIF_position                   0x2
#define PWM4INTF_PHIF_size                       0x1
#define PWM4INTF_PHIF_value_mask                 0x4
#define PWM4INTF_PHIF_clear_mask                 0xFB

#define PWM4OFIF                                 0x3
#define PWM4OFIF_address                         0xDCD
#define PWM4OFIF_position                        0x3
#define PWM4OFIF_size                            0x1
#define PWM4OFIF_value_mask                      0x8
#define PWM4OFIF_clear_mask                      0xF7

#define PWM4INTF_OFIF                            0x3
#define PWM4INTF_OFIF_address                    0xDCD
#define PWM4INTF_OFIF_position                   0x3
#define PWM4INTF_OFIF_size                       0x1
#define PWM4INTF_OFIF_value_mask                 0x8
#define PWM4INTF_OFIF_clear_mask                 0xF7


/*--------------------------------------------------------------------------#
| PWM4CLKCON                                                          0xDCE |
#---------------------------------------------------------------------------#
| - | PWM4PS2 | PWM4PS1 | PWM4PS0 | - | - | PWM4CLKCON_CS1 | PWM4CLKCON_CS0 |
#---------------------------------------------------------------------------#
| 7 | 6       | 5       | 4       | 3 | 2 | 1              | 0              |
#--------------------------------------------------------------------------*/

#define PWM4CLKCON                               0x0
#define PWM4CLKCON_address                       0xDCE
#define PWM4CLKCON_position                      0x0
#define PWM4CLKCON_size                          0x8
#define PWM4CLKCON_value_mask                    0xFF
#define PWM4CLKCON_clear_mask                    0x0

#define PWM4CLKCON_CS0                           0x0
#define PWM4CLKCON_CS0_address                   0xDCE
#define PWM4CLKCON_CS0_position                  0x0
#define PWM4CLKCON_CS0_size                      0x1
#define PWM4CLKCON_CS0_value_mask                0x1
#define PWM4CLKCON_CS0_clear_mask                0xFE

#define PWM4CS                                   0x0
#define PWM4CS_address                           0xDCE
#define PWM4CS_position                          0x0
#define PWM4CS_size                              0x3
#define PWM4CS_value_mask                        0x7
#define PWM4CS_clear_mask                        0xF8

#define PWM4CLKCON_CS                            0x0
#define PWM4CLKCON_CS_address                    0xDCE
#define PWM4CLKCON_CS_position                   0x0
#define PWM4CLKCON_CS_size                       0x2
#define PWM4CLKCON_CS_value_mask                 0x3
#define PWM4CLKCON_CS_clear_mask                 0xFC

#define PWM4CS0                                  0x0
#define PWM4CS0_address                          0xDCE
#define PWM4CS0_position                         0x0
#define PWM4CS0_size                             0x1
#define PWM4CS0_value_mask                       0x1
#define PWM4CS0_clear_mask                       0xFE

#define PWM4CLKCON_CS1                           0x1
#define PWM4CLKCON_CS1_address                   0xDCE
#define PWM4CLKCON_CS1_position                  0x1
#define PWM4CLKCON_CS1_size                      0x1
#define PWM4CLKCON_CS1_value_mask                0x2
#define PWM4CLKCON_CS1_clear_mask                0xFD

#define PWM4CS1                                  0x1
#define PWM4CS1_address                          0xDCE
#define PWM4CS1_position                         0x1
#define PWM4CS1_size                             0x1
#define PWM4CS1_value_mask                       0x2
#define PWM4CS1_clear_mask                       0xFD

#define PWM4PS0                                  0x4
#define PWM4PS0_address                          0xDCE
#define PWM4PS0_position                         0x4
#define PWM4PS0_size                             0x1
#define PWM4PS0_value_mask                       0x10
#define PWM4PS0_clear_mask                       0xEF

#define PWM4CLKCON_PS0                           0x4
#define PWM4CLKCON_PS0_address                   0xDCE
#define PWM4CLKCON_PS0_position                  0x4
#define PWM4CLKCON_PS0_size                      0x1
#define PWM4CLKCON_PS0_value_mask                0x10
#define PWM4CLKCON_PS0_clear_mask                0xEF

#define PWM4CLKCON_PS                            0x4
#define PWM4CLKCON_PS_address                    0xDCE
#define PWM4CLKCON_PS_position                   0x4
#define PWM4CLKCON_PS_size                       0x3
#define PWM4CLKCON_PS_value_mask                 0x70
#define PWM4CLKCON_PS_clear_mask                 0x8F

#define PWM4PS                                   0x4
#define PWM4PS_address                           0xDCE
#define PWM4PS_position                          0x4
#define PWM4PS_size                              0x3
#define PWM4PS_value_mask                        0x70
#define PWM4PS_clear_mask                        0x8F

#define PWM4PS1                                  0x5
#define PWM4PS1_address                          0xDCE
#define PWM4PS1_position                         0x5
#define PWM4PS1_size                             0x1
#define PWM4PS1_value_mask                       0x20
#define PWM4PS1_clear_mask                       0xDF

#define PWM4CLKCON_PS1                           0x5
#define PWM4CLKCON_PS1_address                   0xDCE
#define PWM4CLKCON_PS1_position                  0x5
#define PWM4CLKCON_PS1_size                      0x1
#define PWM4CLKCON_PS1_value_mask                0x20
#define PWM4CLKCON_PS1_clear_mask                0xDF

#define PWM4PS2                                  0x6
#define PWM4PS2_address                          0xDCE
#define PWM4PS2_position                         0x6
#define PWM4PS2_size                             0x1
#define PWM4PS2_value_mask                       0x40
#define PWM4PS2_clear_mask                       0xBF

#define PWM4CLKCON_PS2                           0x6
#define PWM4CLKCON_PS2_address                   0xDCE
#define PWM4CLKCON_PS2_position                  0x6
#define PWM4CLKCON_PS2_size                      0x1
#define PWM4CLKCON_PS2_value_mask                0x40
#define PWM4CLKCON_PS2_clear_mask                0xBF


/*--------------------------------------------------------------------#
| PWM4LDCON                                                     0xDCF |
#---------------------------------------------------------------------#
| PWM4LDCON_LDA | PWM4LDCON_LDT | - | - | - | - | PWM4LDS1 | PWM4LDS0 |
#---------------------------------------------------------------------#
| 7             | 6             | 5 | 4 | 3 | 2 | 1        | 0        |
#--------------------------------------------------------------------*/

#define PWM4LDCON                                0x0
#define PWM4LDCON_address                        0xDCF
#define PWM4LDCON_position                       0x0
#define PWM4LDCON_size                           0x8
#define PWM4LDCON_value_mask                     0xFF
#define PWM4LDCON_clear_mask                     0x0

#define PWM4LDS                                  0x0
#define PWM4LDS_address                          0xDCF
#define PWM4LDS_position                         0x0
#define PWM4LDS_size                             0x2
#define PWM4LDS_value_mask                       0x3
#define PWM4LDS_clear_mask                       0xFC

#define PWM4LDCON_LDS0                           0x0
#define PWM4LDCON_LDS0_address                   0xDCF
#define PWM4LDCON_LDS0_position                  0x0
#define PWM4LDCON_LDS0_size                      0x1
#define PWM4LDCON_LDS0_value_mask                0x1
#define PWM4LDCON_LDS0_clear_mask                0xFE

#define PWM4LDCON_LDS                            0x0
#define PWM4LDCON_LDS_address                    0xDCF
#define PWM4LDCON_LDS_position                   0x0
#define PWM4LDCON_LDS_size                       0x2
#define PWM4LDCON_LDS_value_mask                 0x3
#define PWM4LDCON_LDS_clear_mask                 0xFC

#define PWM4LDS0                                 0x0
#define PWM4LDS0_address                         0xDCF
#define PWM4LDS0_position                        0x0
#define PWM4LDS0_size                            0x1
#define PWM4LDS0_value_mask                      0x1
#define PWM4LDS0_clear_mask                      0xFE

#define PWM4LDCON_LDS1                           0x1
#define PWM4LDCON_LDS1_address                   0xDCF
#define PWM4LDCON_LDS1_position                  0x1
#define PWM4LDCON_LDS1_size                      0x1
#define PWM4LDCON_LDS1_value_mask                0x2
#define PWM4LDCON_LDS1_clear_mask                0xFD

#define PWM4LDS1                                 0x1
#define PWM4LDS1_address                         0xDCF
#define PWM4LDS1_position                        0x1
#define PWM4LDS1_size                            0x1
#define PWM4LDS1_value_mask                      0x2
#define PWM4LDS1_clear_mask                      0xFD

#define PWM4LDM                                  0x6
#define PWM4LDM_address                          0xDCF
#define PWM4LDM_position                         0x6
#define PWM4LDM_size                             0x1
#define PWM4LDM_value_mask                       0x40
#define PWM4LDM_clear_mask                       0xBF

#define PWM4LDCON_LDT                            0x6
#define PWM4LDCON_LDT_address                    0xDCF
#define PWM4LDCON_LDT_position                   0x6
#define PWM4LDCON_LDT_size                       0x1
#define PWM4LDCON_LDT_value_mask                 0x40
#define PWM4LDCON_LDT_clear_mask                 0xBF

#define PWM4LDCON_LDA                            0x7
#define PWM4LDCON_LDA_address                    0xDCF
#define PWM4LDCON_LDA_position                   0x7
#define PWM4LDCON_LDA_size                       0x1
#define PWM4LDCON_LDA_value_mask                 0x80
#define PWM4LDCON_LDA_clear_mask                 0x7F

#define PWM4LD                                   0x7
#define PWM4LD_address                           0xDCF
#define PWM4LD_position                          0x7
#define PWM4LD_size                              0x1
#define PWM4LD_value_mask                        0x80
#define PWM4LD_clear_mask                        0x7F


/*-----------------------------------------------------------------------#
| PWM4OFCON                                                        0xDD0 |
#------------------------------------------------------------------------#
| - | PWM4OFM1 | PWM4OFM0 | PWM4OFMC | - | - | PWM4OFS1 | PWM4OFCON_OFS0 |
#------------------------------------------------------------------------#
| 7 | 6        | 5        | 4        | 3 | 2 | 1        | 0              |
#-----------------------------------------------------------------------*/

#define PWM4OFCON                                0x0
#define PWM4OFCON_address                        0xDD0
#define PWM4OFCON_position                       0x0
#define PWM4OFCON_size                           0x8
#define PWM4OFCON_value_mask                     0xFF
#define PWM4OFCON_clear_mask                     0x0

#define PWM4OFCON_OFS                            0x0
#define PWM4OFCON_OFS_address                    0xDD0
#define PWM4OFCON_OFS_position                   0x0
#define PWM4OFCON_OFS_size                       0x2
#define PWM4OFCON_OFS_value_mask                 0x3
#define PWM4OFCON_OFS_clear_mask                 0xFC

#define PWM4OFS                                  0x0
#define PWM4OFS_address                          0xDD0
#define PWM4OFS_position                         0x0
#define PWM4OFS_size                             0x2
#define PWM4OFS_value_mask                       0x3
#define PWM4OFS_clear_mask                       0xFC

#define PWM4OFCON_OFS0                           0x0
#define PWM4OFCON_OFS0_address                   0xDD0
#define PWM4OFCON_OFS0_position                  0x0
#define PWM4OFCON_OFS0_size                      0x1
#define PWM4OFCON_OFS0_value_mask                0x1
#define PWM4OFCON_OFS0_clear_mask                0xFE

#define PWM4OFS0                                 0x0
#define PWM4OFS0_address                         0xDD0
#define PWM4OFS0_position                        0x0
#define PWM4OFS0_size                            0x1
#define PWM4OFS0_value_mask                      0x1
#define PWM4OFS0_clear_mask                      0xFE

#define PWM4OFCON_OFS1                           0x1
#define PWM4OFCON_OFS1_address                   0xDD0
#define PWM4OFCON_OFS1_position                  0x1
#define PWM4OFCON_OFS1_size                      0x1
#define PWM4OFCON_OFS1_value_mask                0x2
#define PWM4OFCON_OFS1_clear_mask                0xFD

#define PWM4OFS1                                 0x1
#define PWM4OFS1_address                         0xDD0
#define PWM4OFS1_position                        0x1
#define PWM4OFS1_size                            0x1
#define PWM4OFS1_value_mask                      0x2
#define PWM4OFS1_clear_mask                      0xFD

#define PWM4OFMC                                 0x4
#define PWM4OFMC_address                         0xDD0
#define PWM4OFMC_position                        0x4
#define PWM4OFMC_size                            0x1
#define PWM4OFMC_value_mask                      0x10
#define PWM4OFMC_clear_mask                      0xEF

#define PWM4OFCON_OFO                            0x4
#define PWM4OFCON_OFO_address                    0xDD0
#define PWM4OFCON_OFO_position                   0x4
#define PWM4OFCON_OFO_size                       0x1
#define PWM4OFCON_OFO_value_mask                 0x10
#define PWM4OFCON_OFO_clear_mask                 0xEF

#define PWM4OFM0                                 0x5
#define PWM4OFM0_address                         0xDD0
#define PWM4OFM0_position                        0x5
#define PWM4OFM0_size                            0x1
#define PWM4OFM0_value_mask                      0x20
#define PWM4OFM0_clear_mask                      0xDF

#define PWM4OFM                                  0x5
#define PWM4OFM_address                          0xDD0
#define PWM4OFM_position                         0x5
#define PWM4OFM_size                             0x2
#define PWM4OFM_value_mask                       0x60
#define PWM4OFM_clear_mask                       0x9F

#define PWM4OFCON_OFM0                           0x5
#define PWM4OFCON_OFM0_address                   0xDD0
#define PWM4OFCON_OFM0_position                  0x5
#define PWM4OFCON_OFM0_size                      0x1
#define PWM4OFCON_OFM0_value_mask                0x20
#define PWM4OFCON_OFM0_clear_mask                0xDF

#define PWM4OFCON_OFM                            0x5
#define PWM4OFCON_OFM_address                    0xDD0
#define PWM4OFCON_OFM_position                   0x5
#define PWM4OFCON_OFM_size                       0x2
#define PWM4OFCON_OFM_value_mask                 0x60
#define PWM4OFCON_OFM_clear_mask                 0x9F

#define PWM4OFM1                                 0x6
#define PWM4OFM1_address                         0xDD0
#define PWM4OFM1_position                        0x6
#define PWM4OFM1_size                            0x1
#define PWM4OFM1_value_mask                      0x40
#define PWM4OFM1_clear_mask                      0xBF

#define PWM4OFCON_OFM1                           0x6
#define PWM4OFCON_OFM1_address                   0xDD0
#define PWM4OFCON_OFM1_position                  0x6
#define PWM4OFCON_OFM1_size                      0x1
#define PWM4OFCON_OFM1_value_mask                0x40
#define PWM4OFCON_OFM1_clear_mask                0xBF


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


/*------------------------------------------------------------#
| INTPPS                                                0xE10 |
#-------------------------------------------------------------#
| - | - | - | INTPPS4 | INTPPS3 | INTPPS2 | INTPPS1 | INTPPS0 |
#-------------------------------------------------------------#
| 7 | 6 | 5 | 4       | 3       | 2       | 1       | 0       |
#------------------------------------------------------------*/

#define INTPPS0                                  0x0
#define INTPPS0_address                          0xE10
#define INTPPS0_position                         0x0
#define INTPPS0_size                             0x1
#define INTPPS0_value_mask                       0x1
#define INTPPS0_clear_mask                       0xFE

#define INTPPS                                   0x0
#define INTPPS_address                           0xE10
#define INTPPS_position                          0x0
#define INTPPS_size                              0x5
#define INTPPS_value_mask                        0x1F
#define INTPPS_clear_mask                        0xE0

#define INTPPS1                                  0x1
#define INTPPS1_address                          0xE10
#define INTPPS1_position                         0x1
#define INTPPS1_size                             0x1
#define INTPPS1_value_mask                       0x2
#define INTPPS1_clear_mask                       0xFD

#define INTPPS2                                  0x2
#define INTPPS2_address                          0xE10
#define INTPPS2_position                         0x2
#define INTPPS2_size                             0x1
#define INTPPS2_value_mask                       0x4
#define INTPPS2_clear_mask                       0xFB

#define INTPPS3                                  0x3
#define INTPPS3_address                          0xE10
#define INTPPS3_position                         0x3
#define INTPPS3_size                             0x1
#define INTPPS3_value_mask                       0x8
#define INTPPS3_clear_mask                       0xF7

#define INTPPS4                                  0x4
#define INTPPS4_address                          0xE10
#define INTPPS4_position                         0x4
#define INTPPS4_size                             0x1
#define INTPPS4_value_mask                       0x10
#define INTPPS4_clear_mask                       0xEF


/*----------------------------------------------------------------------#
| T0CKIPPS                                                        0xE11 |
#-----------------------------------------------------------------------#
| - | - | - | T0CKIPPS4 | T0CKIPPS3 | T0CKIPPS2 | T0CKIPPS1 | T0CKIPPS0 |
#-----------------------------------------------------------------------#
| 7 | 6 | 5 | 4         | 3         | 2         | 1         | 0         |
#----------------------------------------------------------------------*/

#define T0CKIPPS0                                0x0
#define T0CKIPPS0_address                        0xE11
#define T0CKIPPS0_position                       0x0
#define T0CKIPPS0_size                           0x1
#define T0CKIPPS0_value_mask                     0x1
#define T0CKIPPS0_clear_mask                     0xFE

#define T0CKIPPS                                 0x0
#define T0CKIPPS_address                         0xE11
#define T0CKIPPS_position                        0x0
#define T0CKIPPS_size                            0x5
#define T0CKIPPS_value_mask                      0x1F
#define T0CKIPPS_clear_mask                      0xE0

#define T0CKIPPS1                                0x1
#define T0CKIPPS1_address                        0xE11
#define T0CKIPPS1_position                       0x1
#define T0CKIPPS1_size                           0x1
#define T0CKIPPS1_value_mask                     0x2
#define T0CKIPPS1_clear_mask                     0xFD

#define T0CKIPPS2                                0x2
#define T0CKIPPS2_address                        0xE11
#define T0CKIPPS2_position                       0x2
#define T0CKIPPS2_size                           0x1
#define T0CKIPPS2_value_mask                     0x4
#define T0CKIPPS2_clear_mask                     0xFB

#define T0CKIPPS3                                0x3
#define T0CKIPPS3_address                        0xE11
#define T0CKIPPS3_position                       0x3
#define T0CKIPPS3_size                           0x1
#define T0CKIPPS3_value_mask                     0x8
#define T0CKIPPS3_clear_mask                     0xF7

#define T0CKIPPS4                                0x4
#define T0CKIPPS4_address                        0xE11
#define T0CKIPPS4_position                       0x4
#define T0CKIPPS4_size                           0x1
#define T0CKIPPS4_value_mask                     0x10
#define T0CKIPPS4_clear_mask                     0xEF


/*----------------------------------------------------------------------#
| T1CKIPPS                                                        0xE12 |
#-----------------------------------------------------------------------#
| - | - | - | T1CKIPPS4 | T1CKIPPS3 | T1CKIPPS2 | T1CKIPPS1 | T1CKIPPS0 |
#-----------------------------------------------------------------------#
| 7 | 6 | 5 | 4         | 3         | 2         | 1         | 0         |
#----------------------------------------------------------------------*/

#define T1CKIPPS0                                0x0
#define T1CKIPPS0_address                        0xE12
#define T1CKIPPS0_position                       0x0
#define T1CKIPPS0_size                           0x1
#define T1CKIPPS0_value_mask                     0x1
#define T1CKIPPS0_clear_mask                     0xFE

#define T1CKIPPS                                 0x0
#define T1CKIPPS_address                         0xE12
#define T1CKIPPS_position                        0x0
#define T1CKIPPS_size                            0x5
#define T1CKIPPS_value_mask                      0x1F
#define T1CKIPPS_clear_mask                      0xE0

#define T1CKIPPS1                                0x1
#define T1CKIPPS1_address                        0xE12
#define T1CKIPPS1_position                       0x1
#define T1CKIPPS1_size                           0x1
#define T1CKIPPS1_value_mask                     0x2
#define T1CKIPPS1_clear_mask                     0xFD

#define T1CKIPPS2                                0x2
#define T1CKIPPS2_address                        0xE12
#define T1CKIPPS2_position                       0x2
#define T1CKIPPS2_size                           0x1
#define T1CKIPPS2_value_mask                     0x4
#define T1CKIPPS2_clear_mask                     0xFB

#define T1CKIPPS3                                0x3
#define T1CKIPPS3_address                        0xE12
#define T1CKIPPS3_position                       0x3
#define T1CKIPPS3_size                           0x1
#define T1CKIPPS3_value_mask                     0x8
#define T1CKIPPS3_clear_mask                     0xF7

#define T1CKIPPS4                                0x4
#define T1CKIPPS4_address                        0xE12
#define T1CKIPPS4_position                       0x4
#define T1CKIPPS4_size                           0x1
#define T1CKIPPS4_value_mask                     0x10
#define T1CKIPPS4_clear_mask                     0xEF


/*------------------------------------------------------------#
| T1GPPS                                                0xE13 |
#-------------------------------------------------------------#
| - | - | - | T1GPPS4 | T1GPPS3 | T1GPPS2 | T1GPPS1 | T1GPPS0 |
#-------------------------------------------------------------#
| 7 | 6 | 5 | 4       | 3       | 2       | 1       | 0       |
#------------------------------------------------------------*/

#define T1GPPS0                                  0x0
#define T1GPPS0_address                          0xE13
#define T1GPPS0_position                         0x0
#define T1GPPS0_size                             0x1
#define T1GPPS0_value_mask                       0x1
#define T1GPPS0_clear_mask                       0xFE

#define T1GPPS                                   0x0
#define T1GPPS_address                           0xE13
#define T1GPPS_position                          0x0
#define T1GPPS_size                              0x5
#define T1GPPS_value_mask                        0x1F
#define T1GPPS_clear_mask                        0xE0

#define T1GPPS1                                  0x1
#define T1GPPS1_address                          0xE13
#define T1GPPS1_position                         0x1
#define T1GPPS1_size                             0x1
#define T1GPPS1_value_mask                       0x2
#define T1GPPS1_clear_mask                       0xFD

#define T1GPPS2                                  0x2
#define T1GPPS2_address                          0xE13
#define T1GPPS2_position                         0x2
#define T1GPPS2_size                             0x1
#define T1GPPS2_value_mask                       0x4
#define T1GPPS2_clear_mask                       0xFB

#define T1GPPS3                                  0x3
#define T1GPPS3_address                          0xE13
#define T1GPPS3_position                         0x3
#define T1GPPS3_size                             0x1
#define T1GPPS3_value_mask                       0x8
#define T1GPPS3_clear_mask                       0xF7

#define T1GPPS4                                  0x4
#define T1GPPS4_address                          0xE13
#define T1GPPS4_position                         0x4
#define T1GPPS4_size                             0x1
#define T1GPPS4_value_mask                       0x10
#define T1GPPS4_clear_mask                       0xEF


/*---------------------------------------------------------------------------#
| CWG1INPPS                                                            0xE14 |
#----------------------------------------------------------------------------#
| - | - | - | CWG1INPPS4 | CWG1INPPS3 | CWG1INPPS2 | CWG1INPPS1 | CWG1INPPS0 |
#----------------------------------------------------------------------------#
| 7 | 6 | 5 | 4          | 3          | 2          | 1          | 0          |
#---------------------------------------------------------------------------*/

#define CWG1INPPS0                               0x0
#define CWG1INPPS0_address                       0xE14
#define CWG1INPPS0_position                      0x0
#define CWG1INPPS0_size                          0x1
#define CWG1INPPS0_value_mask                    0x1
#define CWG1INPPS0_clear_mask                    0xFE

#define CWG1INPPS                                0x0
#define CWG1INPPS_address                        0xE14
#define CWG1INPPS_position                       0x0
#define CWG1INPPS_size                           0x5
#define CWG1INPPS_value_mask                     0x1F
#define CWG1INPPS_clear_mask                     0xE0

#define CWG1INPPS1                               0x1
#define CWG1INPPS1_address                       0xE14
#define CWG1INPPS1_position                      0x1
#define CWG1INPPS1_size                          0x1
#define CWG1INPPS1_value_mask                    0x2
#define CWG1INPPS1_clear_mask                    0xFD

#define CWG1INPPS2                               0x2
#define CWG1INPPS2_address                       0xE14
#define CWG1INPPS2_position                      0x2
#define CWG1INPPS2_size                          0x1
#define CWG1INPPS2_value_mask                    0x4
#define CWG1INPPS2_clear_mask                    0xFB

#define CWG1INPPS3                               0x3
#define CWG1INPPS3_address                       0xE14
#define CWG1INPPS3_position                      0x3
#define CWG1INPPS3_size                          0x1
#define CWG1INPPS3_value_mask                    0x8
#define CWG1INPPS3_clear_mask                    0xF7

#define CWG1INPPS4                               0x4
#define CWG1INPPS4_address                       0xE14
#define CWG1INPPS4_position                      0x4
#define CWG1INPPS4_size                          0x1
#define CWG1INPPS4_value_mask                    0x10
#define CWG1INPPS4_clear_mask                    0xEF


/*-------------------------------------------------------#
| RXPPS                                            0xE15 |
#--------------------------------------------------------#
| - | - | - | RXPPS4 | RXPPS3 | RXPPS2 | RXPPS1 | RXPPS0 |
#--------------------------------------------------------#
| 7 | 6 | 5 | 4      | 3      | 2      | 1      | 0      |
#-------------------------------------------------------*/

#define RXPPS0                                   0x0
#define RXPPS0_address                           0xE15
#define RXPPS0_position                          0x0
#define RXPPS0_size                              0x1
#define RXPPS0_value_mask                        0x1
#define RXPPS0_clear_mask                        0xFE

#define RXPPS                                    0x0
#define RXPPS_address                            0xE15
#define RXPPS_position                           0x0
#define RXPPS_size                               0x5
#define RXPPS_value_mask                         0x1F
#define RXPPS_clear_mask                         0xE0

#define RXPPS1                                   0x1
#define RXPPS1_address                           0xE15
#define RXPPS1_position                          0x1
#define RXPPS1_size                              0x1
#define RXPPS1_value_mask                        0x2
#define RXPPS1_clear_mask                        0xFD

#define RXPPS2                                   0x2
#define RXPPS2_address                           0xE15
#define RXPPS2_position                          0x2
#define RXPPS2_size                              0x1
#define RXPPS2_value_mask                        0x4
#define RXPPS2_clear_mask                        0xFB

#define RXPPS3                                   0x3
#define RXPPS3_address                           0xE15
#define RXPPS3_position                          0x3
#define RXPPS3_size                              0x1
#define RXPPS3_value_mask                        0x8
#define RXPPS3_clear_mask                        0xF7

#define RXPPS4                                   0x4
#define RXPPS4_address                           0xE15
#define RXPPS4_position                          0x4
#define RXPPS4_size                              0x1
#define RXPPS4_value_mask                        0x10
#define RXPPS4_clear_mask                        0xEF


/*-------------------------------------------------------#
| CKPPS                                            0xE16 |
#--------------------------------------------------------#
| - | - | - | CKPPS4 | CKPPS3 | CKPPS2 | CKPPS1 | CKPPS0 |
#--------------------------------------------------------#
| 7 | 6 | 5 | 4      | 3      | 2      | 1      | 0      |
#-------------------------------------------------------*/

#define CKPPS                                    0x0
#define CKPPS_address                            0xE16
#define CKPPS_position                           0x0
#define CKPPS_size                               0x5
#define CKPPS_value_mask                         0x1F
#define CKPPS_clear_mask                         0xE0

#define CKPPS0                                   0x0
#define CKPPS0_address                           0xE16
#define CKPPS0_position                          0x0
#define CKPPS0_size                              0x1
#define CKPPS0_value_mask                        0x1
#define CKPPS0_clear_mask                        0xFE

#define CKPPS1                                   0x1
#define CKPPS1_address                           0xE16
#define CKPPS1_position                          0x1
#define CKPPS1_size                              0x1
#define CKPPS1_value_mask                        0x2
#define CKPPS1_clear_mask                        0xFD

#define CKPPS2                                   0x2
#define CKPPS2_address                           0xE16
#define CKPPS2_position                          0x2
#define CKPPS2_size                              0x1
#define CKPPS2_value_mask                        0x4
#define CKPPS2_clear_mask                        0xFB

#define CKPPS3                                   0x3
#define CKPPS3_address                           0xE16
#define CKPPS3_position                          0x3
#define CKPPS3_size                              0x1
#define CKPPS3_value_mask                        0x8
#define CKPPS3_clear_mask                        0xF7

#define CKPPS4                                   0x4
#define CKPPS4_address                           0xE16
#define CKPPS4_position                          0x4
#define CKPPS4_size                              0x1
#define CKPPS4_value_mask                        0x10
#define CKPPS4_clear_mask                        0xEF


/*---------------------------------------------------------------------------#
| ADCACTPPS                                                            0xE17 |
#----------------------------------------------------------------------------#
| - | - | - | ADCACTPPS4 | ADCACTPPS3 | ADCACTPPS2 | ADCACTPPS1 | ADCACTPPS0 |
#----------------------------------------------------------------------------#
| 7 | 6 | 5 | 4          | 3          | 2          | 1          | 0          |
#---------------------------------------------------------------------------*/

#define ADCACTPPS0                               0x0
#define ADCACTPPS0_address                       0xE17
#define ADCACTPPS0_position                      0x0
#define ADCACTPPS0_size                          0x1
#define ADCACTPPS0_value_mask                    0x1
#define ADCACTPPS0_clear_mask                    0xFE

#define ADCACTPPS                                0x0
#define ADCACTPPS_address                        0xE17
#define ADCACTPPS_position                       0x0
#define ADCACTPPS_size                           0x5
#define ADCACTPPS_value_mask                     0x1F
#define ADCACTPPS_clear_mask                     0xE0

#define ADCACTPPS1                               0x1
#define ADCACTPPS1_address                       0xE17
#define ADCACTPPS1_position                      0x1
#define ADCACTPPS1_size                          0x1
#define ADCACTPPS1_value_mask                    0x2
#define ADCACTPPS1_clear_mask                    0xFD

#define ADCACTPPS2                               0x2
#define ADCACTPPS2_address                       0xE17
#define ADCACTPPS2_position                      0x2
#define ADCACTPPS2_size                          0x1
#define ADCACTPPS2_value_mask                    0x4
#define ADCACTPPS2_clear_mask                    0xFB

#define ADCACTPPS3                               0x3
#define ADCACTPPS3_address                       0xE17
#define ADCACTPPS3_position                      0x3
#define ADCACTPPS3_size                          0x1
#define ADCACTPPS3_value_mask                    0x8
#define ADCACTPPS3_clear_mask                    0xF7

#define ADCACTPPS4                               0x4
#define ADCACTPPS4_address                       0xE17
#define ADCACTPPS4_position                      0x4
#define ADCACTPPS4_size                          0x1
#define ADCACTPPS4_value_mask                    0x10
#define ADCACTPPS4_clear_mask                    0xEF


/*------------------------------------------------------#
| RA0PPS                                          0xE90 |
#-------------------------------------------------------#
| - | - | - | - | RA0PPS3 | RA0PPS2 | RA0PPS1 | RA0PPS0 |
#-------------------------------------------------------#
| 7 | 6 | 5 | 4 | 3       | 2       | 1       | 0       |
#------------------------------------------------------*/

#define RA0PPS                                   0x0
#define RA0PPS_address                           0xE90
#define RA0PPS_position                          0x0
#define RA0PPS_size                              0x4
#define RA0PPS_value_mask                        0xF
#define RA0PPS_clear_mask                        0xF0

#define RA0PPS0                                  0x0
#define RA0PPS0_address                          0xE90
#define RA0PPS0_position                         0x0
#define RA0PPS0_size                             0x1
#define RA0PPS0_value_mask                       0x1
#define RA0PPS0_clear_mask                       0xFE

#define RA0PPS1                                  0x1
#define RA0PPS1_address                          0xE90
#define RA0PPS1_position                         0x1
#define RA0PPS1_size                             0x1
#define RA0PPS1_value_mask                       0x2
#define RA0PPS1_clear_mask                       0xFD

#define RA0PPS2                                  0x2
#define RA0PPS2_address                          0xE90
#define RA0PPS2_position                         0x2
#define RA0PPS2_size                             0x1
#define RA0PPS2_value_mask                       0x4
#define RA0PPS2_clear_mask                       0xFB

#define RA0PPS3                                  0x3
#define RA0PPS3_address                          0xE90
#define RA0PPS3_position                         0x3
#define RA0PPS3_size                             0x1
#define RA0PPS3_value_mask                       0x8
#define RA0PPS3_clear_mask                       0xF7


/*------------------------------------------------------#
| RA1PPS                                          0xE91 |
#-------------------------------------------------------#
| - | - | - | - | RA1PPS3 | RA1PPS2 | RA1PPS1 | RA1PPS0 |
#-------------------------------------------------------#
| 7 | 6 | 5 | 4 | 3       | 2       | 1       | 0       |
#------------------------------------------------------*/

#define RA1PPS                                   0x0
#define RA1PPS_address                           0xE91
#define RA1PPS_position                          0x0
#define RA1PPS_size                              0x4
#define RA1PPS_value_mask                        0xF
#define RA1PPS_clear_mask                        0xF0

#define RA1PPS0                                  0x0
#define RA1PPS0_address                          0xE91
#define RA1PPS0_position                         0x0
#define RA1PPS0_size                             0x1
#define RA1PPS0_value_mask                       0x1
#define RA1PPS0_clear_mask                       0xFE

#define RA1PPS1                                  0x1
#define RA1PPS1_address                          0xE91
#define RA1PPS1_position                         0x1
#define RA1PPS1_size                             0x1
#define RA1PPS1_value_mask                       0x2
#define RA1PPS1_clear_mask                       0xFD

#define RA1PPS2                                  0x2
#define RA1PPS2_address                          0xE91
#define RA1PPS2_position                         0x2
#define RA1PPS2_size                             0x1
#define RA1PPS2_value_mask                       0x4
#define RA1PPS2_clear_mask                       0xFB

#define RA1PPS3                                  0x3
#define RA1PPS3_address                          0xE91
#define RA1PPS3_position                         0x3
#define RA1PPS3_size                             0x1
#define RA1PPS3_value_mask                       0x8
#define RA1PPS3_clear_mask                       0xF7


/*------------------------------------------------------#
| RA2PPS                                          0xE92 |
#-------------------------------------------------------#
| - | - | - | - | RA2PPS3 | RA2PPS2 | RA2PPS1 | RA2PPS0 |
#-------------------------------------------------------#
| 7 | 6 | 5 | 4 | 3       | 2       | 1       | 0       |
#------------------------------------------------------*/

#define RA2PPS                                   0x0
#define RA2PPS_address                           0xE92
#define RA2PPS_position                          0x0
#define RA2PPS_size                              0x4
#define RA2PPS_value_mask                        0xF
#define RA2PPS_clear_mask                        0xF0

#define RA2PPS0                                  0x0
#define RA2PPS0_address                          0xE92
#define RA2PPS0_position                         0x0
#define RA2PPS0_size                             0x1
#define RA2PPS0_value_mask                       0x1
#define RA2PPS0_clear_mask                       0xFE

#define RA2PPS1                                  0x1
#define RA2PPS1_address                          0xE92
#define RA2PPS1_position                         0x1
#define RA2PPS1_size                             0x1
#define RA2PPS1_value_mask                       0x2
#define RA2PPS1_clear_mask                       0xFD

#define RA2PPS2                                  0x2
#define RA2PPS2_address                          0xE92
#define RA2PPS2_position                         0x2
#define RA2PPS2_size                             0x1
#define RA2PPS2_value_mask                       0x4
#define RA2PPS2_clear_mask                       0xFB

#define RA2PPS3                                  0x3
#define RA2PPS3_address                          0xE92
#define RA2PPS3_position                         0x3
#define RA2PPS3_size                             0x1
#define RA2PPS3_value_mask                       0x8
#define RA2PPS3_clear_mask                       0xF7


/*------------------------------------------------------#
| RA4PPS                                          0xE94 |
#-------------------------------------------------------#
| - | - | - | - | RA4PPS3 | RA4PPS2 | RA4PPS1 | RA4PPS0 |
#-------------------------------------------------------#
| 7 | 6 | 5 | 4 | 3       | 2       | 1       | 0       |
#------------------------------------------------------*/

#define RA4PPS                                   0x0
#define RA4PPS_address                           0xE94
#define RA4PPS_position                          0x0
#define RA4PPS_size                              0x4
#define RA4PPS_value_mask                        0xF
#define RA4PPS_clear_mask                        0xF0

#define RA4PPS0                                  0x0
#define RA4PPS0_address                          0xE94
#define RA4PPS0_position                         0x0
#define RA4PPS0_size                             0x1
#define RA4PPS0_value_mask                       0x1
#define RA4PPS0_clear_mask                       0xFE

#define RA4PPS1                                  0x1
#define RA4PPS1_address                          0xE94
#define RA4PPS1_position                         0x1
#define RA4PPS1_size                             0x1
#define RA4PPS1_value_mask                       0x2
#define RA4PPS1_clear_mask                       0xFD

#define RA4PPS2                                  0x2
#define RA4PPS2_address                          0xE94
#define RA4PPS2_position                         0x2
#define RA4PPS2_size                             0x1
#define RA4PPS2_value_mask                       0x4
#define RA4PPS2_clear_mask                       0xFB

#define RA4PPS3                                  0x3
#define RA4PPS3_address                          0xE94
#define RA4PPS3_position                         0x3
#define RA4PPS3_size                             0x1
#define RA4PPS3_value_mask                       0x8
#define RA4PPS3_clear_mask                       0xF7


/*------------------------------------------------------#
| RA5PPS                                          0xE95 |
#-------------------------------------------------------#
| - | - | - | - | RA5PPS3 | RA5PPS2 | RA5PPS1 | RA5PPS0 |
#-------------------------------------------------------#
| 7 | 6 | 5 | 4 | 3       | 2       | 1       | 0       |
#------------------------------------------------------*/

#define RA5PPS                                   0x0
#define RA5PPS_address                           0xE95
#define RA5PPS_position                          0x0
#define RA5PPS_size                              0x4
#define RA5PPS_value_mask                        0xF
#define RA5PPS_clear_mask                        0xF0

#define RA5PPS0                                  0x0
#define RA5PPS0_address                          0xE95
#define RA5PPS0_position                         0x0
#define RA5PPS0_size                             0x1
#define RA5PPS0_value_mask                       0x1
#define RA5PPS0_clear_mask                       0xFE

#define RA5PPS1                                  0x1
#define RA5PPS1_address                          0xE95
#define RA5PPS1_position                         0x1
#define RA5PPS1_size                             0x1
#define RA5PPS1_value_mask                       0x2
#define RA5PPS1_clear_mask                       0xFD

#define RA5PPS2                                  0x2
#define RA5PPS2_address                          0xE95
#define RA5PPS2_position                         0x2
#define RA5PPS2_size                             0x1
#define RA5PPS2_value_mask                       0x4
#define RA5PPS2_clear_mask                       0xFB

#define RA5PPS3                                  0x3
#define RA5PPS3_address                          0xE95
#define RA5PPS3_position                         0x3
#define RA5PPS3_size                             0x1
#define RA5PPS3_value_mask                       0x8
#define RA5PPS3_clear_mask                       0xF7


/*------------------------------------------------------#
| RC0PPS                                          0xEA0 |
#-------------------------------------------------------#
| - | - | - | - | RC0PPS3 | RC0PPS2 | RC0PPS1 | RC0PPS0 |
#-------------------------------------------------------#
| 7 | 6 | 5 | 4 | 3       | 2       | 1       | 0       |
#------------------------------------------------------*/

#define RC0PPS                                   0x0
#define RC0PPS_address                           0xEA0
#define RC0PPS_position                          0x0
#define RC0PPS_size                              0x4
#define RC0PPS_value_mask                        0xF
#define RC0PPS_clear_mask                        0xF0

#define RC0PPS0                                  0x0
#define RC0PPS0_address                          0xEA0
#define RC0PPS0_position                         0x0
#define RC0PPS0_size                             0x1
#define RC0PPS0_value_mask                       0x1
#define RC0PPS0_clear_mask                       0xFE

#define RC0PPS1                                  0x1
#define RC0PPS1_address                          0xEA0
#define RC0PPS1_position                         0x1
#define RC0PPS1_size                             0x1
#define RC0PPS1_value_mask                       0x2
#define RC0PPS1_clear_mask                       0xFD

#define RC0PPS2                                  0x2
#define RC0PPS2_address                          0xEA0
#define RC0PPS2_position                         0x2
#define RC0PPS2_size                             0x1
#define RC0PPS2_value_mask                       0x4
#define RC0PPS2_clear_mask                       0xFB

#define RC0PPS3                                  0x3
#define RC0PPS3_address                          0xEA0
#define RC0PPS3_position                         0x3
#define RC0PPS3_size                             0x1
#define RC0PPS3_value_mask                       0x8
#define RC0PPS3_clear_mask                       0xF7


/*----------------------------------------------------------------------------------#
| RC1PPS                                                                      0xEA1 |
#-----------------------------------------------------------------------------------#
| - | - | - | - | RC1PPS_RC1PPS3 | RC1PPS_RC1PPS2 | RC1PPS_RC1PPS1 | RC1PPS_RC1PPS0 |
#-----------------------------------------------------------------------------------#
| 7 | 6 | 5 | 4 | 3              | 2              | 1              | 0              |
#----------------------------------------------------------------------------------*/

#define RC1PPS_RC1PPS0                           0x0
#define RC1PPS_RC1PPS0_address                   0xEA1
#define RC1PPS_RC1PPS0_position                  0x0
#define RC1PPS_RC1PPS0_size                      0x1
#define RC1PPS_RC1PPS0_value_mask                0x1
#define RC1PPS_RC1PPS0_clear_mask                0xFE

#define RC1PPS                                   0x0
#define RC1PPS_address                           0xEA1
#define RC1PPS_position                          0x0
#define RC1PPS_size                              0x4
#define RC1PPS_value_mask                        0xF
#define RC1PPS_clear_mask                        0xF0

#define RC1PPS_RC1PPS1                           0x1
#define RC1PPS_RC1PPS1_address                   0xEA1
#define RC1PPS_RC1PPS1_position                  0x1
#define RC1PPS_RC1PPS1_size                      0x1
#define RC1PPS_RC1PPS1_value_mask                0x2
#define RC1PPS_RC1PPS1_clear_mask                0xFD

#define RC1PPS_RC1PPS2                           0x2
#define RC1PPS_RC1PPS2_address                   0xEA1
#define RC1PPS_RC1PPS2_position                  0x2
#define RC1PPS_RC1PPS2_size                      0x1
#define RC1PPS_RC1PPS2_value_mask                0x4
#define RC1PPS_RC1PPS2_clear_mask                0xFB

#define RC1PPS_RC1PPS3                           0x3
#define RC1PPS_RC1PPS3_address                   0xEA1
#define RC1PPS_RC1PPS3_position                  0x3
#define RC1PPS_RC1PPS3_size                      0x1
#define RC1PPS_RC1PPS3_value_mask                0x8
#define RC1PPS_RC1PPS3_clear_mask                0xF7


/*----------------------------------------------------------------------------------#
| RC2PPS                                                                      0xEA2 |
#-----------------------------------------------------------------------------------#
| - | - | - | - | RC2PPS_RC1PPS3 | RC2PPS_RC1PPS2 | RC2PPS_RC1PPS1 | RC2PPS_RC1PPS0 |
#-----------------------------------------------------------------------------------#
| 7 | 6 | 5 | 4 | 3              | 2              | 1              | 0              |
#----------------------------------------------------------------------------------*/

#define RC2PPS_RC1PPS0                           0x0
#define RC2PPS_RC1PPS0_address                   0xEA2
#define RC2PPS_RC1PPS0_position                  0x0
#define RC2PPS_RC1PPS0_size                      0x1
#define RC2PPS_RC1PPS0_value_mask                0x1
#define RC2PPS_RC1PPS0_clear_mask                0xFE

#define RC2PPS                                   0x0
#define RC2PPS_address                           0xEA2
#define RC2PPS_position                          0x0
#define RC2PPS_size                              0x4
#define RC2PPS_value_mask                        0xF
#define RC2PPS_clear_mask                        0xF0

#define RC2PPS_RC1PPS1                           0x1
#define RC2PPS_RC1PPS1_address                   0xEA2
#define RC2PPS_RC1PPS1_position                  0x1
#define RC2PPS_RC1PPS1_size                      0x1
#define RC2PPS_RC1PPS1_value_mask                0x2
#define RC2PPS_RC1PPS1_clear_mask                0xFD

#define RC2PPS_RC1PPS2                           0x2
#define RC2PPS_RC1PPS2_address                   0xEA2
#define RC2PPS_RC1PPS2_position                  0x2
#define RC2PPS_RC1PPS2_size                      0x1
#define RC2PPS_RC1PPS2_value_mask                0x4
#define RC2PPS_RC1PPS2_clear_mask                0xFB

#define RC2PPS_RC1PPS3                           0x3
#define RC2PPS_RC1PPS3_address                   0xEA2
#define RC2PPS_RC1PPS3_position                  0x3
#define RC2PPS_RC1PPS3_size                      0x1
#define RC2PPS_RC1PPS3_value_mask                0x8
#define RC2PPS_RC1PPS3_clear_mask                0xF7


/*------------------------------------------------------#
| RC3PPS                                          0xEA3 |
#-------------------------------------------------------#
| - | - | - | - | RC3PPS3 | RC3PPS2 | RC3PPS1 | RC3PPS0 |
#-------------------------------------------------------#
| 7 | 6 | 5 | 4 | 3       | 2       | 1       | 0       |
#------------------------------------------------------*/

#define RC3PPS                                   0x0
#define RC3PPS_address                           0xEA3
#define RC3PPS_position                          0x0
#define RC3PPS_size                              0x4
#define RC3PPS_value_mask                        0xF
#define RC3PPS_clear_mask                        0xF0

#define RC3PPS0                                  0x0
#define RC3PPS0_address                          0xEA3
#define RC3PPS0_position                         0x0
#define RC3PPS0_size                             0x1
#define RC3PPS0_value_mask                       0x1
#define RC3PPS0_clear_mask                       0xFE

#define RC3PPS1                                  0x1
#define RC3PPS1_address                          0xEA3
#define RC3PPS1_position                         0x1
#define RC3PPS1_size                             0x1
#define RC3PPS1_value_mask                       0x2
#define RC3PPS1_clear_mask                       0xFD

#define RC3PPS2                                  0x2
#define RC3PPS2_address                          0xEA3
#define RC3PPS2_position                         0x2
#define RC3PPS2_size                             0x1
#define RC3PPS2_value_mask                       0x4
#define RC3PPS2_clear_mask                       0xFB

#define RC3PPS3                                  0x3
#define RC3PPS3_address                          0xEA3
#define RC3PPS3_position                         0x3
#define RC3PPS3_size                             0x1
#define RC3PPS3_value_mask                       0x8
#define RC3PPS3_clear_mask                       0xF7


/*------------------------------------------------------#
| RC4PPS                                          0xEA4 |
#-------------------------------------------------------#
| - | - | - | - | RC4PPS3 | RC4PPS2 | RC4PPS1 | RC4PPS0 |
#-------------------------------------------------------#
| 7 | 6 | 5 | 4 | 3       | 2       | 1       | 0       |
#------------------------------------------------------*/

#define RC4PPS0                                  0x0
#define RC4PPS0_address                          0xEA4
#define RC4PPS0_position                         0x0
#define RC4PPS0_size                             0x1
#define RC4PPS0_value_mask                       0x1
#define RC4PPS0_clear_mask                       0xFE

#define RC4PPS                                   0x0
#define RC4PPS_address                           0xEA4
#define RC4PPS_position                          0x0
#define RC4PPS_size                              0x4
#define RC4PPS_value_mask                        0xF
#define RC4PPS_clear_mask                        0xF0

#define RC4PPS1                                  0x1
#define RC4PPS1_address                          0xEA4
#define RC4PPS1_position                         0x1
#define RC4PPS1_size                             0x1
#define RC4PPS1_value_mask                       0x2
#define RC4PPS1_clear_mask                       0xFD

#define RC4PPS2                                  0x2
#define RC4PPS2_address                          0xEA4
#define RC4PPS2_position                         0x2
#define RC4PPS2_size                             0x1
#define RC4PPS2_value_mask                       0x4
#define RC4PPS2_clear_mask                       0xFB

#define RC4PPS3                                  0x3
#define RC4PPS3_address                          0xEA4
#define RC4PPS3_position                         0x3
#define RC4PPS3_size                             0x1
#define RC4PPS3_value_mask                       0x8
#define RC4PPS3_clear_mask                       0xF7


/*------------------------------------------------------#
| RC5PPS                                          0xEA5 |
#-------------------------------------------------------#
| - | - | - | - | RC5PPS3 | RC5PPS2 | RC5PPS1 | RC5PPS0 |
#-------------------------------------------------------#
| 7 | 6 | 5 | 4 | 3       | 2       | 1       | 0       |
#------------------------------------------------------*/

#define RC5PPS0                                  0x0
#define RC5PPS0_address                          0xEA5
#define RC5PPS0_position                         0x0
#define RC5PPS0_size                             0x1
#define RC5PPS0_value_mask                       0x1
#define RC5PPS0_clear_mask                       0xFE

#define RC5PPS                                   0x0
#define RC5PPS_address                           0xEA5
#define RC5PPS_position                          0x0
#define RC5PPS_size                              0x4
#define RC5PPS_value_mask                        0xF
#define RC5PPS_clear_mask                        0xF0

#define RC5PPS1                                  0x1
#define RC5PPS1_address                          0xEA5
#define RC5PPS1_position                         0x1
#define RC5PPS1_size                             0x1
#define RC5PPS1_value_mask                       0x2
#define RC5PPS1_clear_mask                       0xFD

#define RC5PPS2                                  0x2
#define RC5PPS2_address                          0xEA5
#define RC5PPS2_position                         0x2
#define RC5PPS2_size                             0x1
#define RC5PPS2_value_mask                       0x4
#define RC5PPS2_clear_mask                       0xFB

#define RC5PPS3                                  0x3
#define RC5PPS3_address                          0xEA5
#define RC5PPS3_position                         0x3
#define RC5PPS3_size                             0x1
#define RC5PPS3_value_mask                       0x8
#define RC5PPS3_clear_mask                       0xF7


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

#endif // _PIC16F1575_H_
