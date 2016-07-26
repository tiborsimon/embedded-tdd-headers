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

#ifndef _PIC16LF1554_H_
#define _PIC16LF1554_H_


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


/*-------------------------------------------------------------#
| PIR1                                                    0x11 |
#--------------------------------------------------------------#
| TMR1GIF | AD1IF | RCIF | TXIF | SSP1IF | - | TMR2IF | TMR1IF |
#--------------------------------------------------------------#
| 7       | 6     | 5    | 4    | 3      | 2 | 1      | 0      |
#-------------------------------------------------------------*/

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


/*---------------------------------------#
| PIR2                              0x12 |
#----------------------------------------#
| - | AD2IF | - | - | BCL1IF | - | - | - |
#----------------------------------------#
| 7 | 6     | 5 | 4 | 3      | 2 | 1 | 0 |
#---------------------------------------*/

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


/*-------------------------------------------------------------#
| PIE1                                                    0x91 |
#--------------------------------------------------------------#
| TMR1GIE | AD1IE | RCIE | TXIE | SSP1IE | - | TMR2IE | TMR1IE |
#--------------------------------------------------------------#
| 7       | 6     | 5    | 4    | 3      | 2 | 1      | 0      |
#-------------------------------------------------------------*/

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


/*---------------------------------------#
| PIE2                              0x92 |
#----------------------------------------#
| - | AD2IE | - | - | BCL1IE | - | - | - |
#----------------------------------------#
| 7 | 6     | 5 | 4 | 3      | 2 | 1 | 0 |
#---------------------------------------*/

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


/*--------------------------------------------------------------------------------------------------#
| ADCON0                                                                                       0x9D |
#---------------------------------------------------------------------------------------------------#
| - | ADCON0_CHS4 | ADCON0_CHS3 | ADCON0_CHS2 | ADCON0_CHS1 | ADCON0_CHS0 | ADCON0_GO_nDONE | AD1ON |
#---------------------------------------------------------------------------------------------------#
| 7 | 6           | 5           | 4           | 3           | 2           | 1               | 0     |
#--------------------------------------------------------------------------------------------------*/

#define ADCON0                                   0x0
#define ADCON0_address                           0x09D
#define ADCON0_position                          0x0
#define ADCON0_size                              0x8
#define ADCON0_value_mask                        0xFF
#define ADCON0_clear_mask                        0x0

#define AD1ON                                    0x0
#define AD1ON_address                            0x09D
#define AD1ON_position                           0x0
#define AD1ON_size                               0x1
#define AD1ON_value_mask                         0x1
#define AD1ON_clear_mask                         0xFE

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


/*--------------------------------------------------------------------------------------#
| ADCON1                                                                           0x9E |
#---------------------------------------------------------------------------------------#
| ADCON1_ADFM | ADCON1_ADCS | - | ADCON1_GO_nDONE_ALL | ADCON1_ADPREF1 | ADCON1_ADPREF0 |
#---------------------------------------------------------------------------------------#
| 7           | 6 | 5 | 4   | 3 | 2                   | 1              | 0              |
#--------------------------------------------------------------------------------------*/

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


/*-------------------------------------------------------------------#
| APFCON                                                       0x11D |
#--------------------------------------------------------------------#
| RXDTSEL | SDOSEL | SSSEL | SDSEL | - | TXCKSEL | GRDBSEL | GRDASEL |
#--------------------------------------------------------------------#
| 7       | 6      | 5     | 4     | 3 | 2       | 1       | 0       |
#-------------------------------------------------------------------*/

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

#define TXCKSEL                                  0x2
#define TXCKSEL_address                          0x11D
#define TXCKSEL_position                         0x2
#define TXCKSEL_size                             0x1
#define TXCKSEL_value_mask                       0x4
#define TXCKSEL_clear_mask                       0xFB

#define SDSEL                                    0x4
#define SDSEL_address                            0x11D
#define SDSEL_position                           0x4
#define SDSEL_size                               0x1
#define SDSEL_value_mask                         0x10
#define SDSEL_clear_mask                         0xEF

#define SSSEL                                    0x5
#define SSSEL_address                            0x11D
#define SSSEL_position                           0x5
#define SSSEL_size                               0x1
#define SSSEL_value_mask                         0x20
#define SSSEL_clear_mask                         0xDF

#define SDOSEL                                   0x6
#define SDOSEL_address                           0x11D
#define SDOSEL_position                          0x6
#define SDOSEL_size                              0x1
#define SDOSEL_value_mask                        0x40
#define SDOSEL_clear_mask                        0xBF

#define RXDTSEL                                  0x7
#define RXDTSEL_address                          0x11D
#define RXDTSEL_position                         0x7
#define RXDTSEL_size                             0x1
#define RXDTSEL_value_mask                       0x80
#define RXDTSEL_clear_mask                       0x7F


/*--------------------------------------------------#
| ANSELA                                      0x18C |
#---------------------------------------------------#
| - | - | ANSA5 | ANSA4 | - | ANSA2 | ANSA1 | ANSA0 |
#---------------------------------------------------#
| 7 | 6 | 5     | 4     | 3 | 2     | 1     | 0     |
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
| ANSELC                                          0x18E |
#-------------------------------------------------------#
| - | - | ANSC5 | ANSC4 | ANSC3 | ANSC2 | ANSC1 | ANSC0 |
#-------------------------------------------------------#
| 7 | 6 | 5     | 4     | 3     | 2     | 1     | 0     |
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


/*--------------------------------------------------------------------------------------------------------#
| AD1CON0                                                                                           0x711 |
#---------------------------------------------------------------------------------------------------------#
| - | AD1CON0_CHS4 | AD1CON0_CHS3 | AD1CON0_CHS2 | AD1CON0_CHS1 | AD1CON0_CHS0 | GO_nDONE1 | AD1CON0_ADON |
#---------------------------------------------------------------------------------------------------------#
| 7 | 6            | 5            | 4            | 3            | 2            | 1         | 0            |
#--------------------------------------------------------------------------------------------------------*/

#define AD1CON0                                  0x0
#define AD1CON0_address                          0x711
#define AD1CON0_position                         0x0
#define AD1CON0_size                             0x8
#define AD1CON0_value_mask                       0xFF
#define AD1CON0_clear_mask                       0x0

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
#define AD1CON0_CHS_size                         0x5
#define AD1CON0_CHS_value_mask                   0x7C
#define AD1CON0_CHS_clear_mask                   0x83

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


/*--------------------------------------------------------------------------------------------------------#
| ADCOMCON                                                                                          0x712 |
#---------------------------------------------------------------------------------------------------------#
| ADCOMCON_ADFM | ADCS2 | ADCS1 | ADCS0 | - | ADCOMCON_GO_nDONE_ALL | ADCOMCON_ADPREF1 | ADCOMCON_ADPREF0 |
#---------------------------------------------------------------------------------------------------------#
| 7             | 6     | 5     | 4     | 3 | 2                     | 1                | 0                |
#--------------------------------------------------------------------------------------------------------*/

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


/*------------------------------------------------------------#
| AD1GRD                                                0x718 |
#-------------------------------------------------------------#
| AD1GRD_GRDBOE | AD1GRD_GRDAOE | GRD1POL | - | - | - | - | - |
#-------------------------------------------------------------#
| 7             | 6             | 5       | 4 | 3 | 2 | 1 | 0 |
#------------------------------------------------------------*/

#define AD1GRD                                   0x0
#define AD1GRD_address                           0x718
#define AD1GRD_position                          0x0
#define AD1GRD_size                              0x8
#define AD1GRD_value_mask                        0xFF
#define AD1GRD_clear_mask                        0x0

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

#define AD1GRD_GRDBOE                            0x7
#define AD1GRD_GRDBOE_address                    0x718
#define AD1GRD_GRDBOE_position                   0x7
#define AD1GRD_GRDBOE_size                       0x1
#define AD1GRD_GRDBOE_value_mask                 0x80
#define AD1GRD_GRDBOE_clear_mask                 0x7F

#define GRD1BOE                                  0x7
#define GRD1BOE_address                          0x718
#define GRD1BOE_position                         0x7
#define GRD1BOE_size                             0x1
#define GRD1BOE_value_mask                       0x80
#define GRD1BOE_clear_mask                       0x7F


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


/*------------------------------------------#
| AD1CH                               0x71E |
#-------------------------------------------#
| - | - | - | - | CH13 | CH12 | CH11 | CH10 |
#-------------------------------------------#
| 7 | 6 | 5 | 4 | 3    | 2    | 1    | 0    |
#------------------------------------------*/

#define AD1CH                                    0x0
#define AD1CH_address                            0x71E
#define AD1CH_position                           0x0
#define AD1CH_size                               0x8
#define AD1CH_value_mask                         0xFF
#define AD1CH_clear_mask                         0x0

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


/*--------------------------------------------------------------------------------------------------------#
| AD2CON0                                                                                           0x791 |
#---------------------------------------------------------------------------------------------------------#
| - | AD2CON0_CHS4 | AD2CON0_CHS3 | AD2CON0_CHS2 | AD2CON0_CHS1 | AD2CON0_CHS0 | GO_nDONE2 | AD2CON0_ADON |
#---------------------------------------------------------------------------------------------------------#
| 7 | 6            | 5            | 4            | 3            | 2            | 1         | 0            |
#--------------------------------------------------------------------------------------------------------*/

#define AD2CON0                                  0x0
#define AD2CON0_address                          0x791
#define AD2CON0_position                         0x0
#define AD2CON0_size                             0x8
#define AD2CON0_value_mask                       0xFF
#define AD2CON0_clear_mask                       0x0

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
#define AD2CON0_CHS_size                         0x5
#define AD2CON0_CHS_value_mask                   0x7C
#define AD2CON0_CHS_clear_mask                   0x83

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


/*------------------------------------------------------#
| AD2GRD                                          0x798 |
#-------------------------------------------------------#
| GRD2BOE | AD2GRD_GRDAOE | GRD2POL | - | - | - | - | - |
#-------------------------------------------------------#
| 7       | 6             | 5       | 4 | 3 | 2 | 1 | 0 |
#------------------------------------------------------*/

#define AD2GRD                                   0x0
#define AD2GRD_address                           0x798
#define AD2GRD_position                          0x0
#define AD2GRD_size                              0x8
#define AD2GRD_value_mask                        0xFF
#define AD2GRD_clear_mask                        0x0

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

#define GRD2BOE                                  0x7
#define GRD2BOE_address                          0x798
#define GRD2BOE_position                         0x7
#define GRD2BOE_size                             0x1
#define GRD2BOE_value_mask                       0x80
#define GRD2BOE_clear_mask                       0x7F

#define AD2GRD_GRDBOE                            0x7
#define AD2GRD_GRDBOE_address                    0x798
#define AD2GRD_GRDBOE_position                   0x7
#define AD2GRD_GRDBOE_size                       0x1
#define AD2GRD_GRDBOE_value_mask                 0x80
#define AD2GRD_GRDBOE_clear_mask                 0x7F


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


/*------------------------------------------#
| AD2CH                               0x79E |
#-------------------------------------------#
| - | - | - | - | CH23 | CH22 | CH21 | CH20 |
#-------------------------------------------#
| 7 | 6 | 5 | 4 | 3    | 2    | 1    | 0    |
#------------------------------------------*/

#define AD2CH                                    0x0
#define AD2CH_address                            0x79E
#define AD2CH_position                           0x0
#define AD2CH_size                               0x8
#define AD2CH_value_mask                         0xFF
#define AD2CH_clear_mask                         0x0

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

#endif // _PIC16LF1554_H_
