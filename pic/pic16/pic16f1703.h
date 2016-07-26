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

#ifndef _PIC16F1703_H_
#define _PIC16F1703_H_


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


/*-----------------------------------------------------------#
| PIR1                                                  0x11 |
#------------------------------------------------------------#
| TMR1GIF | ADIF | - | - | SSP1IF | CCP1IF | TMR2IF | TMR1IF |
#------------------------------------------------------------#
| 7       | 6    | 5 | 4 | 3      | 2      | 1      | 0      |
#-----------------------------------------------------------*/

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


/*----------------------------------------#
| PIR2                               0x12 |
#-----------------------------------------#
| - | - | - | - | BCL1IF | - | - | CCP2IF |
#-----------------------------------------#
| 7 | 6 | 5 | 4 | 3      | 2 | 1 | 0      |
#----------------------------------------*/

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

#define BCL1IF                                   0x3
#define BCL1IF_address                           0x012
#define BCL1IF_position                          0x3
#define BCL1IF_size                              0x1
#define BCL1IF_value_mask                        0x8
#define BCL1IF_clear_mask                        0xF7


/*----------------------------------#
| PIR3                         0x13 |
#-----------------------------------#
| - | - | - | ZCDIF | - | - | - | - |
#-----------------------------------#
| 7 | 6 | 5 | 4     | 3 | 2 | 1 | 0 |
#----------------------------------*/

#define PIR3                                     0x0
#define PIR3_address                             0x013
#define PIR3_position                            0x0
#define PIR3_size                                0x8
#define PIR3_value_mask                          0xFF
#define PIR3_clear_mask                          0x0

#define ZCDIF                                    0x4
#define ZCDIF_address                            0x013
#define ZCDIF_position                           0x4
#define ZCDIF_size                               0x1
#define ZCDIF_value_mask                         0x10
#define ZCDIF_clear_mask                         0xEF


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


/*-----------------------------------------------------------#
| PIE1                                                  0x91 |
#------------------------------------------------------------#
| TMR1GIE | ADIE | - | - | SSP1IE | CCP1IE | TMR2IE | TMR1IE |
#------------------------------------------------------------#
| 7       | 6    | 5 | 4 | 3      | 2      | 1      | 0      |
#-----------------------------------------------------------*/

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


/*----------------------------------------#
| PIE2                               0x92 |
#-----------------------------------------#
| - | - | - | - | BCL1IE | - | - | CCP2IE |
#-----------------------------------------#
| 7 | 6 | 5 | 4 | 3      | 2 | 1 | 0      |
#----------------------------------------*/

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

#define BCL1IE                                   0x3
#define BCL1IE_address                           0x092
#define BCL1IE_position                          0x3
#define BCL1IE_size                              0x1
#define BCL1IE_value_mask                        0x8
#define BCL1IE_clear_mask                        0xF7


/*----------------------------------#
| PIE3                         0x93 |
#-----------------------------------#
| - | - | - | ZCDIE | - | - | - | - |
#-----------------------------------#
| 7 | 6 | 5 | 4     | 3 | 2 | 1 | 0 |
#----------------------------------*/

#define PIE3                                     0x0
#define PIE3_address                             0x093
#define PIE3_position                            0x0
#define PIE3_size                                0x8
#define PIE3_value_mask                          0xFF
#define PIE3_clear_mask                          0x0

#define ZCDIE                                    0x4
#define ZCDIE_address                            0x093
#define ZCDIE_position                           0x4
#define ZCDIE_size                               0x1
#define ZCDIE_value_mask                         0x10
#define ZCDIE_clear_mask                         0xEF


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


/*------------------------------------------------------#
| ANSELC                                          0x18E |
#-------------------------------------------------------#
| - | - | ANSC5 | ANSC4 | ANSC3 | ANSC2 | ANSC1 | ANSC0 |
#-------------------------------------------------------#
| 7 | 6 | 5     | 4     | 3     | 2     | 1     | 0     |
#------------------------------------------------------*/

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

#endif // _PIC16F1703_H_
