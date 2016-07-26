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

#ifndef _PIC16F1455_H_
#define _PIC16F1455_H_


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


/*----------------------------------------------------#
| STATUS                                          0x3 |
#-----------------------------------------------------#
| - | - | - | nTO | nPD | ZERO | STATUS_DC | STATUS_C |
#-----------------------------------------------------#
| 7 | 6 | 5 | 4   | 3   | 2    | 1         | 0        |
#----------------------------------------------------*/

#define STATUS                                   0x0
#define STATUS_address                           0x003
#define STATUS_position                          0x0
#define STATUS_size                              0x8
#define STATUS_value_mask                        0xFF
#define STATUS_clear_mask                        0x0

#define STATUS_C                                 0x0
#define STATUS_C_address                         0x003
#define STATUS_C_position                        0x0
#define STATUS_C_size                            0x1
#define STATUS_C_value_mask                      0x1
#define STATUS_C_clear_mask                      0xFE

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

#define STATUS_Z                                 0x2
#define STATUS_Z_address                         0x003
#define STATUS_Z_position                        0x2
#define STATUS_Z_size                            0x1
#define STATUS_Z_value_mask                      0x4
#define STATUS_Z_clear_mask                      0xFB

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


/*----------------------------------------#
| PORTA                               0xC |
#-----------------------------------------#
| - | - | RA5 | RA4 | RA3 | - | RA1 | RA0 |
#-----------------------------------------#
| 7 | 6 | 5   | 4   | 3   | 2 | 1   | 0   |
#----------------------------------------*/

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


/*-----------------------------------------------------#
| PIR2                                            0x12 |
#------------------------------------------------------#
| OSFIF | C2IF | C1IF | - | BCL1IF | USBIF | ACTIF | - |
#------------------------------------------------------#
| 7     | 6    | 5    | 4 | 3      | 2     | 1     | 0 |
#-----------------------------------------------------*/

#define PIR2                                     0x0
#define PIR2_address                             0x012
#define PIR2_position                            0x0
#define PIR2_size                                0x8
#define PIR2_value_mask                          0xFF
#define PIR2_clear_mask                          0x0

#define ACTIF                                    0x1
#define ACTIF_address                            0x012
#define ACTIF_position                           0x1
#define ACTIF_size                               0x1
#define ACTIF_value_mask                         0x2
#define ACTIF_clear_mask                         0xFD

#define USBIF                                    0x2
#define USBIF_address                            0x012
#define USBIF_position                           0x2
#define USBIF_size                               0x1
#define USBIF_value_mask                         0x4
#define USBIF_clear_mask                         0xFB

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


/*----------------------------------------#
| TRISA                              0x8C |
#-----------------------------------------#
| - | - | TRISA5 | TRISA4 | - | - | - | - |
#-----------------------------------------#
| 7 | 6 | 5      | 4      | 3 | 2 | 1 | 0 |
#----------------------------------------*/

#define TRISA                                    0x0
#define TRISA_address                            0x08C
#define TRISA_position                           0x0
#define TRISA_size                               0x8
#define TRISA_value_mask                         0xFF
#define TRISA_clear_mask                         0x0

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


/*-----------------------------------------------------#
| PIE2                                            0x92 |
#------------------------------------------------------#
| OSFIE | C2IE | C1IE | - | BCL1IE | USBIE | ACTIE | - |
#------------------------------------------------------#
| 7     | 6    | 5    | 4 | 3      | 2     | 1     | 0 |
#-----------------------------------------------------*/

#define PIE2                                     0x0
#define PIE2_address                             0x092
#define PIE2_position                            0x0
#define PIE2_size                                0x8
#define PIE2_value_mask                          0xFF
#define PIE2_clear_mask                          0x0

#define ACTIE                                    0x1
#define ACTIE_address                            0x092
#define ACTIE_position                           0x1
#define ACTIE_size                               0x1
#define ACTIE_value_mask                         0x2
#define ACTIE_clear_mask                         0xFD

#define USBIE                                    0x2
#define USBIE_address                            0x092
#define USBIE_position                           0x2
#define USBIE_size                               0x1
#define USBIE_value_mask                         0x4
#define USBIE_clear_mask                         0xFB

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


/*---------------------------------------------------#
| OSCTUNE                                       0x98 |
#----------------------------------------------------#
| - | TUN6 | TUN5 | TUN4 | TUN3 | TUN2 | TUN1 | TUN0 |
#----------------------------------------------------#
| 7 | 6    | 5    | 4    | 3    | 2    | 1    | 0    |
#---------------------------------------------------*/

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
#define TUN_size                                 0x7
#define TUN_value_mask                           0x7F
#define TUN_clear_mask                           0x80

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

#define TUN6                                     0x6
#define TUN6_address                             0x098
#define TUN6_position                            0x6
#define TUN6_size                                0x1
#define TUN6_value_mask                          0x40
#define TUN6_clear_mask                          0xBF


/*----------------------------------------------------------------#
| OSCCON                                                     0x99 |
#-----------------------------------------------------------------#
| SPLLEN | SPLLMULT | IRCF3 | IRCF2 | IRCF1 | IRCF0 | SCS1 | SCS0 |
#-----------------------------------------------------------------#
| 7      | 6        | 5     | 4     | 3     | 2     | 1    | 0    |
#----------------------------------------------------------------*/

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

#define IRCF                                     0x2
#define IRCF_address                             0x099
#define IRCF_position                            0x2
#define IRCF_size                                0x4
#define IRCF_value_mask                          0x3C
#define IRCF_clear_mask                          0xC3

#define IRCF0                                    0x2
#define IRCF0_address                            0x099
#define IRCF0_position                           0x2
#define IRCF0_size                               0x1
#define IRCF0_value_mask                         0x4
#define IRCF0_clear_mask                         0xFB

#define IRCF1                                    0x3
#define IRCF1_address                            0x099
#define IRCF1_position                           0x3
#define IRCF1_size                               0x1
#define IRCF1_value_mask                         0x8
#define IRCF1_clear_mask                         0xF7

#define IRCF2                                    0x4
#define IRCF2_address                            0x099
#define IRCF2_position                           0x4
#define IRCF2_size                               0x1
#define IRCF2_value_mask                         0x10
#define IRCF2_clear_mask                         0xEF

#define IRCF3                                    0x5
#define IRCF3_address                            0x099
#define IRCF3_position                           0x5
#define IRCF3_size                               0x1
#define IRCF3_value_mask                         0x20
#define IRCF3_clear_mask                         0xDF

#define SPLLMULT                                 0x6
#define SPLLMULT_address                         0x099
#define SPLLMULT_position                        0x6
#define SPLLMULT_size                            0x1
#define SPLLMULT_value_mask                      0x40
#define SPLLMULT_clear_mask                      0xBF

#define SPLLEN                                   0x7
#define SPLLEN_address                           0x099
#define SPLLEN_position                          0x7
#define SPLLEN_size                              0x1
#define SPLLEN_value_mask                        0x80
#define SPLLEN_clear_mask                        0x7F


/*---------------------------------------------------------#
| OSCSTAT                                             0x9A |
#----------------------------------------------------------#
| SOSCR | PLLRDY | OSTS | HFIOFR | - | - | LFIOFR | HFIOFS |
#----------------------------------------------------------#
| 7     | 6      | 5    | 4      | 3 | 2 | 1      | 0      |
#---------------------------------------------------------*/

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

#define PLLRDY                                   0x6
#define PLLRDY_address                           0x09A
#define PLLRDY_position                          0x6
#define PLLRDY_size                              0x1
#define PLLRDY_value_mask                        0x40
#define PLLRDY_clear_mask                        0xBF

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


/*---------------------------------------------------#
| ADCON2                                        0x9F |
#----------------------------------------------------#
| - | TRIGSEL2 | TRIGSEL1 | TRIGSEL0 | - | - | - | - |
#----------------------------------------------------#
| 7 | 6        | 5        | 4        | 3 | 2 | 1 | 0 |
#---------------------------------------------------*/

#define ADCON2                                   0x0
#define ADCON2_address                           0x09F
#define ADCON2_position                          0x0
#define ADCON2_size                              0x8
#define ADCON2_value_mask                        0xFF
#define ADCON2_clear_mask                        0x0

#define TRIGSEL                                  0x4
#define TRIGSEL_address                          0x09F
#define TRIGSEL_position                         0x4
#define TRIGSEL_size                             0x3
#define TRIGSEL_value_mask                       0x70
#define TRIGSEL_clear_mask                       0x8F

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


/*--------------------------------------#
| LATA                            0x10C |
#---------------------------------------#
| - | - | LATA5 | LATA4 | - | - | - | - |
#---------------------------------------#
| 7 | 6 | 5     | 4     | 3 | 2 | 1 | 0 |
#--------------------------------------*/

#define LATA                                     0x0
#define LATA_address                             0x10C
#define LATA_position                            0x0
#define LATA_size                                0x8
#define LATA_value_mask                          0xFF
#define LATA_clear_mask                          0x0

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


/*------------------------------------------------------#
| DACCON0                                         0x118 |
#-------------------------------------------------------#
| DACEN | - | DACOE1 | DACOE2 | D1PSS1 | D1PSS0 | - | - |
#-------------------------------------------------------#
| 7     | 6 | 5      | 4      | 3      | 2      | 1 | 0 |
#------------------------------------------------------*/

#define DACCON0                                  0x0
#define DACCON0_address                          0x118
#define DACCON0_position                         0x0
#define DACCON0_size                             0x8
#define DACCON0_value_mask                       0xFF
#define DACCON0_clear_mask                       0x0

#define D1PSS                                    0x2
#define D1PSS_address                            0x118
#define D1PSS_position                           0x2
#define D1PSS_size                               0x2
#define D1PSS_value_mask                         0xC
#define D1PSS_clear_mask                         0xF3

#define D1PSS0                                   0x2
#define D1PSS0_address                           0x118
#define D1PSS0_position                          0x2
#define D1PSS0_size                              0x1
#define D1PSS0_value_mask                        0x4
#define D1PSS0_clear_mask                        0xFB

#define D1PSS1                                   0x3
#define D1PSS1_address                           0x118
#define D1PSS1_position                          0x3
#define D1PSS1_size                              0x1
#define D1PSS1_value_mask                        0x8
#define D1PSS1_clear_mask                        0xF7

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


/*------------------------------------------------------#
| APFCON                                          0x11D |
#-------------------------------------------------------#
| CLKRSEL | SDOSEL | SSSEL | - | T1GSEL | P2SEL | - | - |
#-------------------------------------------------------#
| 7       | 6      | 5     | 4 | 3      | 2     | 1 | 0 |
#------------------------------------------------------*/

#define APFCON                                   0x0
#define APFCON_address                           0x11D
#define APFCON_position                          0x0
#define APFCON_size                              0x8
#define APFCON_value_mask                        0xFF
#define APFCON_clear_mask                        0x0

#define P2SEL                                    0x2
#define P2SEL_address                            0x11D
#define P2SEL_position                           0x2
#define P2SEL_size                               0x1
#define P2SEL_value_mask                         0x4
#define P2SEL_clear_mask                         0xFB

#define T1GSEL                                   0x3
#define T1GSEL_address                           0x11D
#define T1GSEL_position                          0x3
#define T1GSEL_size                              0x1
#define T1GSEL_value_mask                        0x8
#define T1GSEL_clear_mask                        0xF7

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

#define CLKRSEL                                  0x7
#define CLKRSEL_address                          0x11D
#define CLKRSEL_position                         0x7
#define CLKRSEL_size                             0x1
#define CLKRSEL_value_mask                       0x80
#define CLKRSEL_clear_mask                       0x7F


/*----------------------------------#
| ANSELA                      0x18C |
#-----------------------------------#
| - | - | ANSA4 | ANSELA                |
#-----------------------------------#
| 7 | 6 | 5 | 4     | 3 | 2 | 1 | 0 |
#----------------------------------*/

#define ANSELA                                   0x0
#define ANSELA_address                           0x18C
#define ANSELA_position                          0x0
#define ANSELA_size                              0x6
#define ANSELA_value_mask                        0x3F
#define ANSELA_clear_mask                        0xC0

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


/*------------------------------------------#
| VREGCON                             0x197 |
#-------------------------------------------#
| - | - | - | - | - | - | VREGPM1 | VREGPM0 |
#-------------------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1       | 0       |
#------------------------------------------*/

#define VREGCON                                  0x0
#define VREGCON_address                          0x197
#define VREGCON_position                         0x0
#define VREGCON_size                             0x8
#define VREGCON_value_mask                       0xFF
#define VREGCON_clear_mask                       0x0

#define VREGPM0                                  0x0
#define VREGPM0_address                          0x197
#define VREGPM0_position                         0x0
#define VREGPM0_size                             0x1
#define VREGPM0_value_mask                       0x1
#define VREGPM0_clear_mask                       0xFE

#define VREGPM                                   0x0
#define VREGPM_address                           0x197
#define VREGPM_position                          0x0
#define VREGPM_size                              0x2
#define VREGPM_value_mask                        0x3
#define VREGPM_clear_mask                        0xFC

#define VREGPM1                                  0x1
#define VREGPM1_address                          0x197
#define VREGPM1_position                         0x1
#define VREGPM1_size                             0x1
#define VREGPM1_value_mask                       0x2
#define VREGPM1_clear_mask                       0xFD


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


/*------------------------------------------#
| WPUA                                0x20C |
#-------------------------------------------#
| - | - | WPUA5 | WPUA4 | WPUA3 | WPUA                  |
#-------------------------------------------#
| 7 | 6 | 5     | 4     | 3     | 2 | 1 | 0 |
#------------------------------------------*/

#define WPUA                                     0x0
#define WPUA_address                             0x20C
#define WPUA_position                            0x0
#define WPUA_size                                0x6
#define WPUA_value_mask                          0x3F
#define WPUA_clear_mask                          0xC0

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
| SSPADD                        |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define SSP1ADD                                  0x0
#define SSP1ADD_address                          0x212
#define SSP1ADD_position                         0x0
#define SSP1ADD_size                             0x8
#define SSP1ADD_value_mask                       0xFF
#define SSP1ADD_clear_mask                       0x0

#define SSPADD                                   0x0
#define SSPADD_address                           0x212
#define SSPADD_position                          0x0
#define SSPADD_size                              0x8
#define SSPADD_value_mask                        0xFF
#define SSPADD_clear_mask                        0x0


/*------------------------------#
| SSP1MSK                 0x213 |
#-------------------------------#
| SSPMSK                        |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define SSP1MSK                                  0x0
#define SSP1MSK_address                          0x213
#define SSP1MSK_position                         0x0
#define SSP1MSK_size                             0x8
#define SSP1MSK_value_mask                       0xFF
#define SSP1MSK_clear_mask                       0x0

#define SSPMSK                                   0x0
#define SSPMSK_address                           0x213
#define SSPMSK_position                          0x0
#define SSPMSK_size                              0x8
#define SSPMSK_value_mask                        0xFF
#define SSPMSK_clear_mask                        0x0


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


/*----------------------------------------------------------------#
| SSP1CON1                                                  0x215 |
#-----------------------------------------------------------------#
| WCOL | SSP1OV | SSPEN | CKP | SSP1M3 | SSP1M2 | SSP1M1 | SSP1M0 |
#-----------------------------------------------------------------#
| 7    | 6      | 5     | 4   | 3      | 2      | 1      | 0      |
#----------------------------------------------------------------*/

#define SSP1CON1                                 0x0
#define SSP1CON1_address                         0x215
#define SSP1CON1_position                        0x0
#define SSP1CON1_size                            0x8
#define SSP1CON1_value_mask                      0xFF
#define SSP1CON1_clear_mask                      0x0

#define SSP1M0                                   0x0
#define SSP1M0_address                           0x215
#define SSP1M0_position                          0x0
#define SSP1M0_size                              0x1
#define SSP1M0_value_mask                        0x1
#define SSP1M0_clear_mask                        0xFE

#define SSPM                                     0x0
#define SSPM_address                             0x215
#define SSPM_position                            0x0
#define SSPM_size                                0x4
#define SSPM_value_mask                          0xF
#define SSPM_clear_mask                          0xF0

#define SSP1M1                                   0x1
#define SSP1M1_address                           0x215
#define SSP1M1_position                          0x1
#define SSP1M1_size                              0x1
#define SSP1M1_value_mask                        0x2
#define SSP1M1_clear_mask                        0xFD

#define SSP1M2                                   0x2
#define SSP1M2_address                           0x215
#define SSP1M2_position                          0x2
#define SSP1M2_size                              0x1
#define SSP1M2_value_mask                        0x4
#define SSP1M2_clear_mask                        0xFB

#define SSP1M3                                   0x3
#define SSP1M3_address                           0x215
#define SSP1M3_position                          0x3
#define SSP1M3_size                              0x1
#define SSP1M3_value_mask                        0x8
#define SSP1M3_clear_mask                        0xF7

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

#define SSP1EN                                   0x5
#define SSP1EN_address                           0x215
#define SSP1EN_position                          0x5
#define SSP1EN_size                              0x1
#define SSP1EN_value_mask                        0x20
#define SSP1EN_clear_mask                        0xDF

#define SSP1OV                                   0x6
#define SSP1OV_address                           0x215
#define SSP1OV_position                          0x6
#define SSP1OV_size                              0x1
#define SSP1OV_value_mask                        0x40
#define SSP1OV_clear_mask                        0xBF

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


/*-------------------------------------------------------#
| IOCAP                                            0x391 |
#--------------------------------------------------------#
| - | - | IOCAP5 | IOCAP4 | IOCAP3 | - | IOCAP1 | IOCAP0 |
#--------------------------------------------------------#
| 7 | 6 | 5      | 4      | 3      | 2 | 1      | 0      |
#-------------------------------------------------------*/

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


/*-------------------------------------------------------#
| IOCAN                                            0x392 |
#--------------------------------------------------------#
| - | - | IOCAN5 | IOCAN4 | IOCAN3 | - | IOCAN1 | IOCAN0 |
#--------------------------------------------------------#
| 7 | 6 | 5      | 4      | 3      | 2 | 1      | 0      |
#-------------------------------------------------------*/

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


/*-------------------------------------------------------#
| IOCAF                                            0x393 |
#--------------------------------------------------------#
| - | - | IOCAF5 | IOCAF4 | IOCAF3 | - | IOCAF1 | IOCAF0 |
#--------------------------------------------------------#
| 7 | 6 | 5      | 4      | 3      | 2 | 1      | 0      |
#-------------------------------------------------------*/

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


/*-------------------------------------------------------------------------------#
| CLKRCON                                                                  0x39A |
#--------------------------------------------------------------------------------#
| CLKREN | CLKROE | CLKRSLR | CLKRCD1 | CLKRCD0 | CLKRDIV2 | CLKRDIV1 | CLKRDIV0 |
#--------------------------------------------------------------------------------#
| 7      | 6      | 5       | 4       | 3       | 2        | 1        | 0        |
#-------------------------------------------------------------------------------*/

#define CLKRCON                                  0x0
#define CLKRCON_address                          0x39A
#define CLKRCON_position                         0x0
#define CLKRCON_size                             0x8
#define CLKRCON_value_mask                       0xFF
#define CLKRCON_clear_mask                       0x0

#define CLKRDIV                                  0x0
#define CLKRDIV_address                          0x39A
#define CLKRDIV_position                         0x0
#define CLKRDIV_size                             0x3
#define CLKRDIV_value_mask                       0x7
#define CLKRDIV_clear_mask                       0xF8

#define CLKRDIV0                                 0x0
#define CLKRDIV0_address                         0x39A
#define CLKRDIV0_position                        0x0
#define CLKRDIV0_size                            0x1
#define CLKRDIV0_value_mask                      0x1
#define CLKRDIV0_clear_mask                      0xFE

#define CLKRDIV1                                 0x1
#define CLKRDIV1_address                         0x39A
#define CLKRDIV1_position                        0x1
#define CLKRDIV1_size                            0x1
#define CLKRDIV1_value_mask                      0x2
#define CLKRDIV1_clear_mask                      0xFD

#define CLKRDIV2                                 0x2
#define CLKRDIV2_address                         0x39A
#define CLKRDIV2_position                        0x2
#define CLKRDIV2_size                            0x1
#define CLKRDIV2_value_mask                      0x4
#define CLKRDIV2_clear_mask                      0xFB

#define CLKRCD                                   0x3
#define CLKRCD_address                           0x39A
#define CLKRCD_position                          0x3
#define CLKRCD_size                              0x2
#define CLKRCD_value_mask                        0x18
#define CLKRCD_clear_mask                        0xE7

#define CLKRCD0                                  0x3
#define CLKRCD0_address                          0x39A
#define CLKRCD0_position                         0x3
#define CLKRCD0_size                             0x1
#define CLKRCD0_value_mask                       0x8
#define CLKRCD0_clear_mask                       0xF7

#define CLKRCD1                                  0x4
#define CLKRCD1_address                          0x39A
#define CLKRCD1_position                         0x4
#define CLKRCD1_size                             0x1
#define CLKRCD1_value_mask                       0x10
#define CLKRCD1_clear_mask                       0xEF

#define CLKRSLR                                  0x5
#define CLKRSLR_address                          0x39A
#define CLKRSLR_position                         0x5
#define CLKRSLR_size                             0x1
#define CLKRSLR_value_mask                       0x20
#define CLKRSLR_clear_mask                       0xDF

#define CLKROE                                   0x6
#define CLKROE_address                           0x39A
#define CLKROE_position                          0x6
#define CLKROE_size                              0x1
#define CLKROE_value_mask                        0x40
#define CLKROE_clear_mask                        0xBF

#define CLKREN                                   0x7
#define CLKREN_address                           0x39A
#define CLKREN_position                          0x7
#define CLKREN_size                              0x1
#define CLKREN_value_mask                        0x80
#define CLKREN_clear_mask                        0x7F


/*------------------------------------------------------#
| ACTCON                                          0x39B |
#-------------------------------------------------------#
| ACTEN | ACTUD | - | ACTSRC | ACTLOCK | - | ACTORS | - |
#-------------------------------------------------------#
| 7     | 6     | 5 | 4      | 3       | 2 | 1      | 0 |
#------------------------------------------------------*/

#define ACTCON                                   0x0
#define ACTCON_address                           0x39B
#define ACTCON_position                          0x0
#define ACTCON_size                              0x8
#define ACTCON_value_mask                        0xFF
#define ACTCON_clear_mask                        0x0

#define ACTORS                                   0x1
#define ACTORS_address                           0x39B
#define ACTORS_position                          0x1
#define ACTORS_size                              0x1
#define ACTORS_value_mask                        0x2
#define ACTORS_clear_mask                        0xFD

#define ACTLOCK                                  0x3
#define ACTLOCK_address                          0x39B
#define ACTLOCK_position                         0x3
#define ACTLOCK_size                             0x1
#define ACTLOCK_value_mask                       0x8
#define ACTLOCK_clear_mask                       0xF7

#define ACTSRC                                   0x4
#define ACTSRC_address                           0x39B
#define ACTSRC_position                          0x4
#define ACTSRC_size                              0x1
#define ACTSRC_value_mask                        0x10
#define ACTSRC_clear_mask                        0xEF

#define ACTUD                                    0x6
#define ACTUD_address                            0x39B
#define ACTUD_position                           0x6
#define ACTUD_size                               0x1
#define ACTUD_value_mask                         0x40
#define ACTUD_clear_mask                         0xBF

#define ACTEN                                    0x7
#define ACTEN_address                            0x39B
#define ACTEN_position                           0x7
#define ACTEN_size                               0x1
#define ACTEN_value_mask                         0x80
#define ACTEN_clear_mask                         0x7F


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


/*------------------------------------------------------------------#
| CWG1CON1                                                    0x694 |
#-------------------------------------------------------------------#
| G1ASDLB1 | G1ASDLB0 | G1ASDLA1 | G1ASDLA0 | - | - | G1IS1 | G1IS0 |
#-------------------------------------------------------------------#
| 7        | 6        | 5        | 4        | 3 | 2 | 1     | 0     |
#------------------------------------------------------------------*/

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
| G1ASE | G1ARSEN | - | - | G1ASDSC2 | G1ASDSC1 | G1ASDSFLT | - |
#---------------------------------------------------------------#
| 7     | 6       | 5 | 4 | 3        | 2        | 1         | 0 |
#--------------------------------------------------------------*/

#define CWG1CON2                                 0x0
#define CWG1CON2_address                         0x695
#define CWG1CON2_position                        0x0
#define CWG1CON2_size                            0x8
#define CWG1CON2_value_mask                      0xFF
#define CWG1CON2_clear_mask                      0x0

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


/*--------------------------------------------------------#
| UCON                                              0xE8E |
#---------------------------------------------------------#
| - | PPBRST | SE0 | PKTDIS | USBEN | RESUME | SUSPND | - |
#---------------------------------------------------------#
| 7 | 6      | 5   | 4      | 3     | 2      | 1      | 0 |
#--------------------------------------------------------*/

#define UCON                                     0x0
#define UCON_address                             0xE8E
#define UCON_position                            0x0
#define UCON_size                                0x8
#define UCON_value_mask                          0xFF
#define UCON_clear_mask                          0x0

#define SUSPND                                   0x1
#define SUSPND_address                           0xE8E
#define SUSPND_position                          0x1
#define SUSPND_size                              0x1
#define SUSPND_value_mask                        0x2
#define SUSPND_clear_mask                        0xFD

#define RESUME                                   0x2
#define RESUME_address                           0xE8E
#define RESUME_position                          0x2
#define RESUME_size                              0x1
#define RESUME_value_mask                        0x4
#define RESUME_clear_mask                        0xFB

#define USBEN                                    0x3
#define USBEN_address                            0xE8E
#define USBEN_position                           0x3
#define USBEN_size                               0x1
#define USBEN_value_mask                         0x8
#define USBEN_clear_mask                         0xF7

#define PKTDIS                                   0x4
#define PKTDIS_address                           0xE8E
#define PKTDIS_position                          0x4
#define PKTDIS_size                              0x1
#define PKTDIS_value_mask                        0x10
#define PKTDIS_clear_mask                        0xEF

#define SE0                                      0x5
#define SE0_address                              0xE8E
#define SE0_position                             0x5
#define SE0_size                                 0x1
#define SE0_value_mask                           0x20
#define SE0_clear_mask                           0xDF

#define PPBRST                                   0x6
#define PPBRST_address                           0xE8E
#define PPBRST_position                          0x6
#define PPBRST_size                              0x1
#define PPBRST_value_mask                        0x40
#define PPBRST_clear_mask                        0xBF


/*---------------------------------------------------#
| USTAT                                        0xE8F |
#----------------------------------------------------#
| - | ENDP3 | ENDP2 | ENDP1 | ENDP0 | DIR | PPBI | - |
#----------------------------------------------------#
| 7 | 6     | 5     | 4     | 3     | 2   | 1    | 0 |
#---------------------------------------------------*/

#define USTAT                                    0x0
#define USTAT_address                            0xE8F
#define USTAT_position                           0x0
#define USTAT_size                               0x8
#define USTAT_value_mask                         0xFF
#define USTAT_clear_mask                         0x0

#define PPBI                                     0x1
#define PPBI_address                             0xE8F
#define PPBI_position                            0x1
#define PPBI_size                                0x1
#define PPBI_value_mask                          0x2
#define PPBI_clear_mask                          0xFD

#define DIR                                      0x2
#define DIR_address                              0xE8F
#define DIR_position                             0x2
#define DIR_size                                 0x1
#define DIR_value_mask                           0x4
#define DIR_clear_mask                           0xFB

#define ENDP                                     0x3
#define ENDP_address                             0xE8F
#define ENDP_position                            0x3
#define ENDP_size                                0x4
#define ENDP_value_mask                          0x78
#define ENDP_clear_mask                          0x87

#define ENDP0                                    0x3
#define ENDP0_address                            0xE8F
#define ENDP0_position                           0x3
#define ENDP0_size                               0x1
#define ENDP0_value_mask                         0x8
#define ENDP0_clear_mask                         0xF7

#define ENDP1                                    0x4
#define ENDP1_address                            0xE8F
#define ENDP1_position                           0x4
#define ENDP1_size                               0x1
#define ENDP1_value_mask                         0x10
#define ENDP1_clear_mask                         0xEF

#define ENDP2                                    0x5
#define ENDP2_address                            0xE8F
#define ENDP2_position                           0x5
#define ENDP2_size                               0x1
#define ENDP2_value_mask                         0x20
#define ENDP2_clear_mask                         0xDF

#define ENDP3                                    0x6
#define ENDP3_address                            0xE8F
#define ENDP3_position                           0x6
#define ENDP3_size                               0x1
#define ENDP3_value_mask                         0x40
#define ENDP3_clear_mask                         0xBF


/*----------------------------------------------------------------#
| UIR                                                       0xE90 |
#-----------------------------------------------------------------#
| - | SOFIF | STALLIF | IDLEIF | TRNIF | ACTVIF | UERRIF | URSTIF |
#-----------------------------------------------------------------#
| 7 | 6     | 5       | 4      | 3     | 2      | 1      | 0      |
#----------------------------------------------------------------*/

#define UIR                                      0x0
#define UIR_address                              0xE90
#define UIR_position                             0x0
#define UIR_size                                 0x8
#define UIR_value_mask                           0xFF
#define UIR_clear_mask                           0x0

#define URSTIF                                   0x0
#define URSTIF_address                           0xE90
#define URSTIF_position                          0x0
#define URSTIF_size                              0x1
#define URSTIF_value_mask                        0x1
#define URSTIF_clear_mask                        0xFE

#define UERRIF                                   0x1
#define UERRIF_address                           0xE90
#define UERRIF_position                          0x1
#define UERRIF_size                              0x1
#define UERRIF_value_mask                        0x2
#define UERRIF_clear_mask                        0xFD

#define ACTVIF                                   0x2
#define ACTVIF_address                           0xE90
#define ACTVIF_position                          0x2
#define ACTVIF_size                              0x1
#define ACTVIF_value_mask                        0x4
#define ACTVIF_clear_mask                        0xFB

#define TRNIF                                    0x3
#define TRNIF_address                            0xE90
#define TRNIF_position                           0x3
#define TRNIF_size                               0x1
#define TRNIF_value_mask                         0x8
#define TRNIF_clear_mask                         0xF7

#define IDLEIF                                   0x4
#define IDLEIF_address                           0xE90
#define IDLEIF_position                          0x4
#define IDLEIF_size                              0x1
#define IDLEIF_value_mask                        0x10
#define IDLEIF_clear_mask                        0xEF

#define STALLIF                                  0x5
#define STALLIF_address                          0xE90
#define STALLIF_position                         0x5
#define STALLIF_size                             0x1
#define STALLIF_value_mask                       0x20
#define STALLIF_clear_mask                       0xDF

#define SOFIF                                    0x6
#define SOFIF_address                            0xE90
#define SOFIF_position                           0x6
#define SOFIF_size                               0x1
#define SOFIF_value_mask                         0x40
#define SOFIF_clear_mask                         0xBF


/*-----------------------------------------------#
| UCFG                                     0xE91 |
#------------------------------------------------#
| UTEYE | - | - | UPUEN | - | FSEN | PPB1 | PPB0 |
#------------------------------------------------#
| 7     | 6 | 5 | 4     | 3 | 2    | 1    | 0    |
#-----------------------------------------------*/

#define UCFG                                     0x0
#define UCFG_address                             0xE91
#define UCFG_position                            0x0
#define UCFG_size                                0x8
#define UCFG_value_mask                          0xFF
#define UCFG_clear_mask                          0x0

#define PPB                                      0x0
#define PPB_address                              0xE91
#define PPB_position                             0x0
#define PPB_size                                 0x2
#define PPB_value_mask                           0x3
#define PPB_clear_mask                           0xFC

#define PPB0                                     0x0
#define PPB0_address                             0xE91
#define PPB0_position                            0x0
#define PPB0_size                                0x1
#define PPB0_value_mask                          0x1
#define PPB0_clear_mask                          0xFE

#define PPB1                                     0x1
#define PPB1_address                             0xE91
#define PPB1_position                            0x1
#define PPB1_size                                0x1
#define PPB1_value_mask                          0x2
#define PPB1_clear_mask                          0xFD

#define FSEN                                     0x2
#define FSEN_address                             0xE91
#define FSEN_position                            0x2
#define FSEN_size                                0x1
#define FSEN_value_mask                          0x4
#define FSEN_clear_mask                          0xFB

#define UPUEN                                    0x4
#define UPUEN_address                            0xE91
#define UPUEN_position                           0x4
#define UPUEN_size                               0x1
#define UPUEN_value_mask                         0x10
#define UPUEN_clear_mask                         0xEF

#define UTEYE                                    0x7
#define UTEYE_address                            0xE91
#define UTEYE_position                           0x7
#define UTEYE_size                               0x1
#define UTEYE_value_mask                         0x80
#define UTEYE_clear_mask                         0x7F


/*----------------------------------------------------------------#
| UIE                                                       0xE92 |
#-----------------------------------------------------------------#
| - | SOFIE | STALLIE | IDLEIE | TRNIE | ACTVIE | UERRIE | URSTIE |
#-----------------------------------------------------------------#
| 7 | 6     | 5       | 4      | 3     | 2      | 1      | 0      |
#----------------------------------------------------------------*/

#define UIE                                      0x0
#define UIE_address                              0xE92
#define UIE_position                             0x0
#define UIE_size                                 0x8
#define UIE_value_mask                           0xFF
#define UIE_clear_mask                           0x0

#define URSTIE                                   0x0
#define URSTIE_address                           0xE92
#define URSTIE_position                          0x0
#define URSTIE_size                              0x1
#define URSTIE_value_mask                        0x1
#define URSTIE_clear_mask                        0xFE

#define UERRIE                                   0x1
#define UERRIE_address                           0xE92
#define UERRIE_position                          0x1
#define UERRIE_size                              0x1
#define UERRIE_value_mask                        0x2
#define UERRIE_clear_mask                        0xFD

#define ACTVIE                                   0x2
#define ACTVIE_address                           0xE92
#define ACTVIE_position                          0x2
#define ACTVIE_size                              0x1
#define ACTVIE_value_mask                        0x4
#define ACTVIE_clear_mask                        0xFB

#define TRNIE                                    0x3
#define TRNIE_address                            0xE92
#define TRNIE_position                           0x3
#define TRNIE_size                               0x1
#define TRNIE_value_mask                         0x8
#define TRNIE_clear_mask                         0xF7

#define IDLEIE                                   0x4
#define IDLEIE_address                           0xE92
#define IDLEIE_position                          0x4
#define IDLEIE_size                              0x1
#define IDLEIE_value_mask                        0x10
#define IDLEIE_clear_mask                        0xEF

#define STALLIE                                  0x5
#define STALLIE_address                          0xE92
#define STALLIE_position                         0x5
#define STALLIE_size                             0x1
#define STALLIE_value_mask                       0x20
#define STALLIE_clear_mask                       0xDF

#define SOFIE                                    0x6
#define SOFIE_address                            0xE92
#define SOFIE_position                           0x6
#define SOFIE_size                               0x1
#define SOFIE_value_mask                         0x40
#define SOFIE_clear_mask                         0xBF


/*----------------------------------------------------------#
| UEIR                                                0xE93 |
#-----------------------------------------------------------#
| BTSEF | - | - | BTOEF | DFN8EF | CRC16EF | CRC5EF | PIDEF |
#-----------------------------------------------------------#
| 7     | 6 | 5 | 4     | 3      | 2       | 1      | 0     |
#----------------------------------------------------------*/

#define UEIR                                     0x0
#define UEIR_address                             0xE93
#define UEIR_position                            0x0
#define UEIR_size                                0x8
#define UEIR_value_mask                          0xFF
#define UEIR_clear_mask                          0x0

#define PIDEF                                    0x0
#define PIDEF_address                            0xE93
#define PIDEF_position                           0x0
#define PIDEF_size                               0x1
#define PIDEF_value_mask                         0x1
#define PIDEF_clear_mask                         0xFE

#define CRC5EF                                   0x1
#define CRC5EF_address                           0xE93
#define CRC5EF_position                          0x1
#define CRC5EF_size                              0x1
#define CRC5EF_value_mask                        0x2
#define CRC5EF_clear_mask                        0xFD

#define CRC16EF                                  0x2
#define CRC16EF_address                          0xE93
#define CRC16EF_position                         0x2
#define CRC16EF_size                             0x1
#define CRC16EF_value_mask                       0x4
#define CRC16EF_clear_mask                       0xFB

#define DFN8EF                                   0x3
#define DFN8EF_address                           0xE93
#define DFN8EF_position                          0x3
#define DFN8EF_size                              0x1
#define DFN8EF_value_mask                        0x8
#define DFN8EF_clear_mask                        0xF7

#define BTOEF                                    0x4
#define BTOEF_address                            0xE93
#define BTOEF_position                           0x4
#define BTOEF_size                               0x1
#define BTOEF_value_mask                         0x10
#define BTOEF_clear_mask                         0xEF

#define BTSEF                                    0x7
#define BTSEF_address                            0xE93
#define BTSEF_position                           0x7
#define BTSEF_size                               0x1
#define BTSEF_value_mask                         0x80
#define BTSEF_clear_mask                         0x7F


/*----------------------------------------#
| UFRMH                             0xE94 |
#-----------------------------------------#
| - | - | - | - | - | FRM10 | FRM9 | FRM8 |
#-----------------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2     | 1    | 0    |
#----------------------------------------*/

#define UFRMH                                    0x0
#define UFRMH_address                            0xE94
#define UFRMH_position                           0x0
#define UFRMH_size                               0x8
#define UFRMH_value_mask                         0xFF
#define UFRMH_clear_mask                         0x0

#define FRM8                                     0x0
#define FRM8_address                             0xE94
#define FRM8_position                            0x0
#define FRM8_size                                0x1
#define FRM8_value_mask                          0x1
#define FRM8_clear_mask                          0xFE

#define FRM9                                     0x1
#define FRM9_address                             0xE94
#define FRM9_position                            0x1
#define FRM9_size                                0x1
#define FRM9_value_mask                          0x2
#define FRM9_clear_mask                          0xFD

#define FRM10                                    0x2
#define FRM10_address                            0xE94
#define FRM10_position                           0x2
#define FRM10_size                               0x1
#define FRM10_value_mask                         0x4
#define FRM10_clear_mask                         0xFB


/*------------------------------------------------------#
| UFRML                                           0xE95 |
#-------------------------------------------------------#
| FRM7 | FRM6 | FRM5 | FRM4 | FRM3 | FRM2 | FRM1 | FRM0 |
#-------------------------------------------------------#
| 7    | 6    | 5    | 4    | 3    | 2    | 1    | 0    |
#------------------------------------------------------*/

#define UFRML                                    0x0
#define UFRML_address                            0xE95
#define UFRML_position                           0x0
#define UFRML_size                               0x8
#define UFRML_value_mask                         0xFF
#define UFRML_clear_mask                         0x0

#define FRM0                                     0x0
#define FRM0_address                             0xE95
#define FRM0_position                            0x0
#define FRM0_size                                0x1
#define FRM0_value_mask                          0x1
#define FRM0_clear_mask                          0xFE

#define FRM1                                     0x1
#define FRM1_address                             0xE95
#define FRM1_position                            0x1
#define FRM1_size                                0x1
#define FRM1_value_mask                          0x2
#define FRM1_clear_mask                          0xFD

#define FRM2                                     0x2
#define FRM2_address                             0xE95
#define FRM2_position                            0x2
#define FRM2_size                                0x1
#define FRM2_value_mask                          0x4
#define FRM2_clear_mask                          0xFB

#define FRM3                                     0x3
#define FRM3_address                             0xE95
#define FRM3_position                            0x3
#define FRM3_size                                0x1
#define FRM3_value_mask                          0x8
#define FRM3_clear_mask                          0xF7

#define FRM4                                     0x4
#define FRM4_address                             0xE95
#define FRM4_position                            0x4
#define FRM4_size                                0x1
#define FRM4_value_mask                          0x10
#define FRM4_clear_mask                          0xEF

#define FRM5                                     0x5
#define FRM5_address                             0xE95
#define FRM5_position                            0x5
#define FRM5_size                                0x1
#define FRM5_value_mask                          0x20
#define FRM5_clear_mask                          0xDF

#define FRM6                                     0x6
#define FRM6_address                             0xE95
#define FRM6_position                            0x6
#define FRM6_size                                0x1
#define FRM6_value_mask                          0x40
#define FRM6_clear_mask                          0xBF

#define FRM7                                     0x7
#define FRM7_address                             0xE95
#define FRM7_position                            0x7
#define FRM7_size                                0x1
#define FRM7_value_mask                          0x80
#define FRM7_clear_mask                          0x7F


/*----------------------------------------------------------#
| UADDR                                               0xE96 |
#-----------------------------------------------------------#
| - | ADDR6 | ADDR5 | ADDR4 | ADDR3 | ADDR2 | ADDR1 | ADDR0 |
#-----------------------------------------------------------#
| 7 | 6     | 5     | 4     | 3     | 2     | 1     | 0     |
#----------------------------------------------------------*/

#define UADDR                                    0x0
#define UADDR_address                            0xE96
#define UADDR_position                           0x0
#define UADDR_size                               0x8
#define UADDR_value_mask                         0xFF
#define UADDR_clear_mask                         0x0

#define ADDR0                                    0x0
#define ADDR0_address                            0xE96
#define ADDR0_position                           0x0
#define ADDR0_size                               0x1
#define ADDR0_value_mask                         0x1
#define ADDR0_clear_mask                         0xFE

#define ADDR1                                    0x1
#define ADDR1_address                            0xE96
#define ADDR1_position                           0x1
#define ADDR1_size                               0x1
#define ADDR1_value_mask                         0x2
#define ADDR1_clear_mask                         0xFD

#define ADDR2                                    0x2
#define ADDR2_address                            0xE96
#define ADDR2_position                           0x2
#define ADDR2_size                               0x1
#define ADDR2_value_mask                         0x4
#define ADDR2_clear_mask                         0xFB

#define ADDR3                                    0x3
#define ADDR3_address                            0xE96
#define ADDR3_position                           0x3
#define ADDR3_size                               0x1
#define ADDR3_value_mask                         0x8
#define ADDR3_clear_mask                         0xF7

#define ADDR4                                    0x4
#define ADDR4_address                            0xE96
#define ADDR4_position                           0x4
#define ADDR4_size                               0x1
#define ADDR4_value_mask                         0x10
#define ADDR4_clear_mask                         0xEF

#define ADDR5                                    0x5
#define ADDR5_address                            0xE96
#define ADDR5_position                           0x5
#define ADDR5_size                               0x1
#define ADDR5_value_mask                         0x20
#define ADDR5_clear_mask                         0xDF

#define ADDR6                                    0x6
#define ADDR6_address                            0xE96
#define ADDR6_position                           0x6
#define ADDR6_size                               0x1
#define ADDR6_value_mask                         0x40
#define ADDR6_clear_mask                         0xBF


/*----------------------------------------------------------#
| UEIE                                                0xE97 |
#-----------------------------------------------------------#
| BTSEE | - | - | BTOEE | DFN8EE | CRC16EE | CRC5EE | PIDEE |
#-----------------------------------------------------------#
| 7     | 6 | 5 | 4     | 3      | 2       | 1      | 0     |
#----------------------------------------------------------*/

#define UEIE                                     0x0
#define UEIE_address                             0xE97
#define UEIE_position                            0x0
#define UEIE_size                                0x8
#define UEIE_value_mask                          0xFF
#define UEIE_clear_mask                          0x0

#define PIDEE                                    0x0
#define PIDEE_address                            0xE97
#define PIDEE_position                           0x0
#define PIDEE_size                               0x1
#define PIDEE_value_mask                         0x1
#define PIDEE_clear_mask                         0xFE

#define CRC5EE                                   0x1
#define CRC5EE_address                           0xE97
#define CRC5EE_position                          0x1
#define CRC5EE_size                              0x1
#define CRC5EE_value_mask                        0x2
#define CRC5EE_clear_mask                        0xFD

#define CRC16EE                                  0x2
#define CRC16EE_address                          0xE97
#define CRC16EE_position                         0x2
#define CRC16EE_size                             0x1
#define CRC16EE_value_mask                       0x4
#define CRC16EE_clear_mask                       0xFB

#define DFN8EE                                   0x3
#define DFN8EE_address                           0xE97
#define DFN8EE_position                          0x3
#define DFN8EE_size                              0x1
#define DFN8EE_value_mask                        0x8
#define DFN8EE_clear_mask                        0xF7

#define BTOEE                                    0x4
#define BTOEE_address                            0xE97
#define BTOEE_position                           0x4
#define BTOEE_size                               0x1
#define BTOEE_value_mask                         0x10
#define BTOEE_clear_mask                         0xEF

#define BTSEE                                    0x7
#define BTSEE_address                            0xE97
#define BTSEE_position                           0x7
#define BTSEE_size                               0x1
#define BTSEE_value_mask                         0x80
#define BTSEE_clear_mask                         0x7F


/*------------------------------------------------------------------------------------#
| UEP0                                                                          0xE98 |
#-------------------------------------------------------------------------------------#
| - | - | - | UEP0_EPHSHK | UEP0_EPCONDIS | UEP0_EPOUTEN | UEP0_EPINEN | UEP0_EPSTALL |
#-------------------------------------------------------------------------------------#
| 7 | 6 | 5 | 4           | 3             | 2            | 1           | 0            |
#------------------------------------------------------------------------------------*/

#define UEP0                                     0x0
#define UEP0_address                             0xE98
#define UEP0_position                            0x0
#define UEP0_size                                0x8
#define UEP0_value_mask                          0xFF
#define UEP0_clear_mask                          0x0

#define UEP0_EPSTALL                             0x0
#define UEP0_EPSTALL_address                     0xE98
#define UEP0_EPSTALL_position                    0x0
#define UEP0_EPSTALL_size                        0x1
#define UEP0_EPSTALL_value_mask                  0x1
#define UEP0_EPSTALL_clear_mask                  0xFE

#define UEP0_EPINEN                              0x1
#define UEP0_EPINEN_address                      0xE98
#define UEP0_EPINEN_position                     0x1
#define UEP0_EPINEN_size                         0x1
#define UEP0_EPINEN_value_mask                   0x2
#define UEP0_EPINEN_clear_mask                   0xFD

#define UEP0_EPOUTEN                             0x2
#define UEP0_EPOUTEN_address                     0xE98
#define UEP0_EPOUTEN_position                    0x2
#define UEP0_EPOUTEN_size                        0x1
#define UEP0_EPOUTEN_value_mask                  0x4
#define UEP0_EPOUTEN_clear_mask                  0xFB

#define UEP0_EPCONDIS                            0x3
#define UEP0_EPCONDIS_address                    0xE98
#define UEP0_EPCONDIS_position                   0x3
#define UEP0_EPCONDIS_size                       0x1
#define UEP0_EPCONDIS_value_mask                 0x8
#define UEP0_EPCONDIS_clear_mask                 0xF7

#define UEP0_EPHSHK                              0x4
#define UEP0_EPHSHK_address                      0xE98
#define UEP0_EPHSHK_position                     0x4
#define UEP0_EPHSHK_size                         0x1
#define UEP0_EPHSHK_value_mask                   0x10
#define UEP0_EPHSHK_clear_mask                   0xEF


/*------------------------------------------------------------------------------------#
| UEP1                                                                          0xE99 |
#-------------------------------------------------------------------------------------#
| - | - | - | UEP1_EPHSHK | UEP1_EPCONDIS | UEP1_EPOUTEN | UEP1_EPINEN | UEP1_EPSTALL |
#-------------------------------------------------------------------------------------#
| 7 | 6 | 5 | 4           | 3             | 2            | 1           | 0            |
#------------------------------------------------------------------------------------*/

#define UEP1                                     0x0
#define UEP1_address                             0xE99
#define UEP1_position                            0x0
#define UEP1_size                                0x8
#define UEP1_value_mask                          0xFF
#define UEP1_clear_mask                          0x0

#define UEP1_EPSTALL                             0x0
#define UEP1_EPSTALL_address                     0xE99
#define UEP1_EPSTALL_position                    0x0
#define UEP1_EPSTALL_size                        0x1
#define UEP1_EPSTALL_value_mask                  0x1
#define UEP1_EPSTALL_clear_mask                  0xFE

#define UEP1_EPINEN                              0x1
#define UEP1_EPINEN_address                      0xE99
#define UEP1_EPINEN_position                     0x1
#define UEP1_EPINEN_size                         0x1
#define UEP1_EPINEN_value_mask                   0x2
#define UEP1_EPINEN_clear_mask                   0xFD

#define UEP1_EPOUTEN                             0x2
#define UEP1_EPOUTEN_address                     0xE99
#define UEP1_EPOUTEN_position                    0x2
#define UEP1_EPOUTEN_size                        0x1
#define UEP1_EPOUTEN_value_mask                  0x4
#define UEP1_EPOUTEN_clear_mask                  0xFB

#define UEP1_EPCONDIS                            0x3
#define UEP1_EPCONDIS_address                    0xE99
#define UEP1_EPCONDIS_position                   0x3
#define UEP1_EPCONDIS_size                       0x1
#define UEP1_EPCONDIS_value_mask                 0x8
#define UEP1_EPCONDIS_clear_mask                 0xF7

#define UEP1_EPHSHK                              0x4
#define UEP1_EPHSHK_address                      0xE99
#define UEP1_EPHSHK_position                     0x4
#define UEP1_EPHSHK_size                         0x1
#define UEP1_EPHSHK_value_mask                   0x10
#define UEP1_EPHSHK_clear_mask                   0xEF


/*------------------------------------------------------------------------------------#
| UEP2                                                                          0xE9A |
#-------------------------------------------------------------------------------------#
| - | - | - | UEP2_EPHSHK | UEP2_EPCONDIS | UEP2_EPOUTEN | UEP2_EPINEN | UEP2_EPSTALL |
#-------------------------------------------------------------------------------------#
| 7 | 6 | 5 | 4           | 3             | 2            | 1           | 0            |
#------------------------------------------------------------------------------------*/

#define UEP2                                     0x0
#define UEP2_address                             0xE9A
#define UEP2_position                            0x0
#define UEP2_size                                0x8
#define UEP2_value_mask                          0xFF
#define UEP2_clear_mask                          0x0

#define UEP2_EPSTALL                             0x0
#define UEP2_EPSTALL_address                     0xE9A
#define UEP2_EPSTALL_position                    0x0
#define UEP2_EPSTALL_size                        0x1
#define UEP2_EPSTALL_value_mask                  0x1
#define UEP2_EPSTALL_clear_mask                  0xFE

#define UEP2_EPINEN                              0x1
#define UEP2_EPINEN_address                      0xE9A
#define UEP2_EPINEN_position                     0x1
#define UEP2_EPINEN_size                         0x1
#define UEP2_EPINEN_value_mask                   0x2
#define UEP2_EPINEN_clear_mask                   0xFD

#define UEP2_EPOUTEN                             0x2
#define UEP2_EPOUTEN_address                     0xE9A
#define UEP2_EPOUTEN_position                    0x2
#define UEP2_EPOUTEN_size                        0x1
#define UEP2_EPOUTEN_value_mask                  0x4
#define UEP2_EPOUTEN_clear_mask                  0xFB

#define UEP2_EPCONDIS                            0x3
#define UEP2_EPCONDIS_address                    0xE9A
#define UEP2_EPCONDIS_position                   0x3
#define UEP2_EPCONDIS_size                       0x1
#define UEP2_EPCONDIS_value_mask                 0x8
#define UEP2_EPCONDIS_clear_mask                 0xF7

#define UEP2_EPHSHK                              0x4
#define UEP2_EPHSHK_address                      0xE9A
#define UEP2_EPHSHK_position                     0x4
#define UEP2_EPHSHK_size                         0x1
#define UEP2_EPHSHK_value_mask                   0x10
#define UEP2_EPHSHK_clear_mask                   0xEF


/*------------------------------------------------------------------------------------#
| UEP3                                                                          0xE9B |
#-------------------------------------------------------------------------------------#
| - | - | - | UEP3_EPHSHK | UEP3_EPCONDIS | UEP3_EPOUTEN | UEP3_EPINEN | UEP3_EPSTALL |
#-------------------------------------------------------------------------------------#
| 7 | 6 | 5 | 4           | 3             | 2            | 1           | 0            |
#------------------------------------------------------------------------------------*/

#define UEP3                                     0x0
#define UEP3_address                             0xE9B
#define UEP3_position                            0x0
#define UEP3_size                                0x8
#define UEP3_value_mask                          0xFF
#define UEP3_clear_mask                          0x0

#define UEP3_EPSTALL                             0x0
#define UEP3_EPSTALL_address                     0xE9B
#define UEP3_EPSTALL_position                    0x0
#define UEP3_EPSTALL_size                        0x1
#define UEP3_EPSTALL_value_mask                  0x1
#define UEP3_EPSTALL_clear_mask                  0xFE

#define UEP3_EPINEN                              0x1
#define UEP3_EPINEN_address                      0xE9B
#define UEP3_EPINEN_position                     0x1
#define UEP3_EPINEN_size                         0x1
#define UEP3_EPINEN_value_mask                   0x2
#define UEP3_EPINEN_clear_mask                   0xFD

#define UEP3_EPOUTEN                             0x2
#define UEP3_EPOUTEN_address                     0xE9B
#define UEP3_EPOUTEN_position                    0x2
#define UEP3_EPOUTEN_size                        0x1
#define UEP3_EPOUTEN_value_mask                  0x4
#define UEP3_EPOUTEN_clear_mask                  0xFB

#define UEP3_EPCONDIS                            0x3
#define UEP3_EPCONDIS_address                    0xE9B
#define UEP3_EPCONDIS_position                   0x3
#define UEP3_EPCONDIS_size                       0x1
#define UEP3_EPCONDIS_value_mask                 0x8
#define UEP3_EPCONDIS_clear_mask                 0xF7

#define UEP3_EPHSHK                              0x4
#define UEP3_EPHSHK_address                      0xE9B
#define UEP3_EPHSHK_position                     0x4
#define UEP3_EPHSHK_size                         0x1
#define UEP3_EPHSHK_value_mask                   0x10
#define UEP3_EPHSHK_clear_mask                   0xEF


/*------------------------------------------------------------------------------------#
| UEP4                                                                          0xE9C |
#-------------------------------------------------------------------------------------#
| - | - | - | UEP4_EPHSHK | UEP4_EPCONDIS | UEP4_EPOUTEN | UEP4_EPINEN | UEP4_EPSTALL |
#-------------------------------------------------------------------------------------#
| 7 | 6 | 5 | 4           | 3             | 2            | 1           | 0            |
#------------------------------------------------------------------------------------*/

#define UEP4                                     0x0
#define UEP4_address                             0xE9C
#define UEP4_position                            0x0
#define UEP4_size                                0x8
#define UEP4_value_mask                          0xFF
#define UEP4_clear_mask                          0x0

#define UEP4_EPSTALL                             0x0
#define UEP4_EPSTALL_address                     0xE9C
#define UEP4_EPSTALL_position                    0x0
#define UEP4_EPSTALL_size                        0x1
#define UEP4_EPSTALL_value_mask                  0x1
#define UEP4_EPSTALL_clear_mask                  0xFE

#define UEP4_EPINEN                              0x1
#define UEP4_EPINEN_address                      0xE9C
#define UEP4_EPINEN_position                     0x1
#define UEP4_EPINEN_size                         0x1
#define UEP4_EPINEN_value_mask                   0x2
#define UEP4_EPINEN_clear_mask                   0xFD

#define UEP4_EPOUTEN                             0x2
#define UEP4_EPOUTEN_address                     0xE9C
#define UEP4_EPOUTEN_position                    0x2
#define UEP4_EPOUTEN_size                        0x1
#define UEP4_EPOUTEN_value_mask                  0x4
#define UEP4_EPOUTEN_clear_mask                  0xFB

#define UEP4_EPCONDIS                            0x3
#define UEP4_EPCONDIS_address                    0xE9C
#define UEP4_EPCONDIS_position                   0x3
#define UEP4_EPCONDIS_size                       0x1
#define UEP4_EPCONDIS_value_mask                 0x8
#define UEP4_EPCONDIS_clear_mask                 0xF7

#define UEP4_EPHSHK                              0x4
#define UEP4_EPHSHK_address                      0xE9C
#define UEP4_EPHSHK_position                     0x4
#define UEP4_EPHSHK_size                         0x1
#define UEP4_EPHSHK_value_mask                   0x10
#define UEP4_EPHSHK_clear_mask                   0xEF


/*------------------------------------------------------------------------------------#
| UEP5                                                                          0xE9D |
#-------------------------------------------------------------------------------------#
| - | - | - | UEP5_EPHSHK | UEP5_EPCONDIS | UEP5_EPOUTEN | UEP5_EPINEN | UEP5_EPSTALL |
#-------------------------------------------------------------------------------------#
| 7 | 6 | 5 | 4           | 3             | 2            | 1           | 0            |
#------------------------------------------------------------------------------------*/

#define UEP5                                     0x0
#define UEP5_address                             0xE9D
#define UEP5_position                            0x0
#define UEP5_size                                0x8
#define UEP5_value_mask                          0xFF
#define UEP5_clear_mask                          0x0

#define UEP5_EPSTALL                             0x0
#define UEP5_EPSTALL_address                     0xE9D
#define UEP5_EPSTALL_position                    0x0
#define UEP5_EPSTALL_size                        0x1
#define UEP5_EPSTALL_value_mask                  0x1
#define UEP5_EPSTALL_clear_mask                  0xFE

#define UEP5_EPINEN                              0x1
#define UEP5_EPINEN_address                      0xE9D
#define UEP5_EPINEN_position                     0x1
#define UEP5_EPINEN_size                         0x1
#define UEP5_EPINEN_value_mask                   0x2
#define UEP5_EPINEN_clear_mask                   0xFD

#define UEP5_EPOUTEN                             0x2
#define UEP5_EPOUTEN_address                     0xE9D
#define UEP5_EPOUTEN_position                    0x2
#define UEP5_EPOUTEN_size                        0x1
#define UEP5_EPOUTEN_value_mask                  0x4
#define UEP5_EPOUTEN_clear_mask                  0xFB

#define UEP5_EPCONDIS                            0x3
#define UEP5_EPCONDIS_address                    0xE9D
#define UEP5_EPCONDIS_position                   0x3
#define UEP5_EPCONDIS_size                       0x1
#define UEP5_EPCONDIS_value_mask                 0x8
#define UEP5_EPCONDIS_clear_mask                 0xF7

#define UEP5_EPHSHK                              0x4
#define UEP5_EPHSHK_address                      0xE9D
#define UEP5_EPHSHK_position                     0x4
#define UEP5_EPHSHK_size                         0x1
#define UEP5_EPHSHK_value_mask                   0x10
#define UEP5_EPHSHK_clear_mask                   0xEF


/*------------------------------------------------------------------------------------#
| UEP6                                                                          0xE9E |
#-------------------------------------------------------------------------------------#
| - | - | - | UEP6_EPHSHK | UEP6_EPCONDIS | UEP6_EPOUTEN | UEP6_EPINEN | UEP6_EPSTALL |
#-------------------------------------------------------------------------------------#
| 7 | 6 | 5 | 4           | 3             | 2            | 1           | 0            |
#------------------------------------------------------------------------------------*/

#define UEP6                                     0x0
#define UEP6_address                             0xE9E
#define UEP6_position                            0x0
#define UEP6_size                                0x8
#define UEP6_value_mask                          0xFF
#define UEP6_clear_mask                          0x0

#define UEP6_EPSTALL                             0x0
#define UEP6_EPSTALL_address                     0xE9E
#define UEP6_EPSTALL_position                    0x0
#define UEP6_EPSTALL_size                        0x1
#define UEP6_EPSTALL_value_mask                  0x1
#define UEP6_EPSTALL_clear_mask                  0xFE

#define UEP6_EPINEN                              0x1
#define UEP6_EPINEN_address                      0xE9E
#define UEP6_EPINEN_position                     0x1
#define UEP6_EPINEN_size                         0x1
#define UEP6_EPINEN_value_mask                   0x2
#define UEP6_EPINEN_clear_mask                   0xFD

#define UEP6_EPOUTEN                             0x2
#define UEP6_EPOUTEN_address                     0xE9E
#define UEP6_EPOUTEN_position                    0x2
#define UEP6_EPOUTEN_size                        0x1
#define UEP6_EPOUTEN_value_mask                  0x4
#define UEP6_EPOUTEN_clear_mask                  0xFB

#define UEP6_EPCONDIS                            0x3
#define UEP6_EPCONDIS_address                    0xE9E
#define UEP6_EPCONDIS_position                   0x3
#define UEP6_EPCONDIS_size                       0x1
#define UEP6_EPCONDIS_value_mask                 0x8
#define UEP6_EPCONDIS_clear_mask                 0xF7

#define UEP6_EPHSHK                              0x4
#define UEP6_EPHSHK_address                      0xE9E
#define UEP6_EPHSHK_position                     0x4
#define UEP6_EPHSHK_size                         0x1
#define UEP6_EPHSHK_value_mask                   0x10
#define UEP6_EPHSHK_clear_mask                   0xEF


/*------------------------------------------------------------------------------------#
| UEP7                                                                          0xE9F |
#-------------------------------------------------------------------------------------#
| - | - | - | UEP7_EPHSHK | UEP7_EPCONDIS | UEP7_EPOUTEN | UEP7_EPINEN | UEP7_EPSTALL |
#-------------------------------------------------------------------------------------#
| 7 | 6 | 5 | 4           | 3             | 2            | 1           | 0            |
#------------------------------------------------------------------------------------*/

#define UEP7                                     0x0
#define UEP7_address                             0xE9F
#define UEP7_position                            0x0
#define UEP7_size                                0x8
#define UEP7_value_mask                          0xFF
#define UEP7_clear_mask                          0x0

#define UEP7_EPSTALL                             0x0
#define UEP7_EPSTALL_address                     0xE9F
#define UEP7_EPSTALL_position                    0x0
#define UEP7_EPSTALL_size                        0x1
#define UEP7_EPSTALL_value_mask                  0x1
#define UEP7_EPSTALL_clear_mask                  0xFE

#define UEP7_EPINEN                              0x1
#define UEP7_EPINEN_address                      0xE9F
#define UEP7_EPINEN_position                     0x1
#define UEP7_EPINEN_size                         0x1
#define UEP7_EPINEN_value_mask                   0x2
#define UEP7_EPINEN_clear_mask                   0xFD

#define UEP7_EPOUTEN                             0x2
#define UEP7_EPOUTEN_address                     0xE9F
#define UEP7_EPOUTEN_position                    0x2
#define UEP7_EPOUTEN_size                        0x1
#define UEP7_EPOUTEN_value_mask                  0x4
#define UEP7_EPOUTEN_clear_mask                  0xFB

#define UEP7_EPCONDIS                            0x3
#define UEP7_EPCONDIS_address                    0xE9F
#define UEP7_EPCONDIS_position                   0x3
#define UEP7_EPCONDIS_size                       0x1
#define UEP7_EPCONDIS_value_mask                 0x8
#define UEP7_EPCONDIS_clear_mask                 0xF7

#define UEP7_EPHSHK                              0x4
#define UEP7_EPHSHK_address                      0xE9F
#define UEP7_EPHSHK_position                     0x4
#define UEP7_EPHSHK_size                         0x1
#define UEP7_EPHSHK_value_mask                   0x10
#define UEP7_EPHSHK_clear_mask                   0xEF


/*-------------------------------------------------------------------#
| STATUS_SHAD                                                  0xFE4 |
#--------------------------------------------------------------------#
| - | - | - | - | - | STATUS_SHAD_Z | STATUS_SHAD_DC | STATUS_SHAD_C |
#--------------------------------------------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2             | 1              | 0             |
#-------------------------------------------------------------------*/

#define STATUS_SHAD                              0x0
#define STATUS_SHAD_address                      0xFE4
#define STATUS_SHAD_position                     0x0
#define STATUS_SHAD_size                         0x8
#define STATUS_SHAD_value_mask                   0xFF
#define STATUS_SHAD_clear_mask                   0x0

#define STATUS_SHAD_C                            0x0
#define STATUS_SHAD_C_address                    0xFE4
#define STATUS_SHAD_C_position                   0x0
#define STATUS_SHAD_C_size                       0x1
#define STATUS_SHAD_C_value_mask                 0x1
#define STATUS_SHAD_C_clear_mask                 0xFE

#define STATUS_SHAD_DC                           0x1
#define STATUS_SHAD_DC_address                   0xFE4
#define STATUS_SHAD_DC_position                  0x1
#define STATUS_SHAD_DC_size                      0x1
#define STATUS_SHAD_DC_value_mask                0x2
#define STATUS_SHAD_DC_clear_mask                0xFD

#define STATUS_SHAD_Z                            0x2
#define STATUS_SHAD_Z_address                    0xFE4
#define STATUS_SHAD_Z_position                   0x2
#define STATUS_SHAD_Z_size                       0x1
#define STATUS_SHAD_Z_value_mask                 0x4
#define STATUS_SHAD_Z_clear_mask                 0xFB


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

#endif // _PIC16F1455_H_
