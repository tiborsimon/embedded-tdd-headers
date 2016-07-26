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

#ifndef _PIC16LF1613_H_
#define _PIC16LF1613_H_


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


/*------------------------------------------------------#
| PIR1                                             0x11 |
#-------------------------------------------------------#
| TMR1GIF | ADIF | - | - | - | CCP1IF | TMR2IF | TMR1IF |
#-------------------------------------------------------#
| 7       | 6    | 5 | 4 | 3 | 2      | 1      | 0      |
#------------------------------------------------------*/

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


/*---------------------------------------------------#
| PIR2                                          0x12 |
#----------------------------------------------------#
| - | C2IF | C1IF | - | - | TMR6IF | TMR4IF | CCP2IF |
#----------------------------------------------------#
| 7 | 6    | 5    | 4 | 3 | 2      | 1      | 0      |
#---------------------------------------------------*/

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


/*--------------------------------------#
| PIR3                             0x13 |
#---------------------------------------#
| - | - | CWGIF | ZCDIF | - | - | - | - |
#---------------------------------------#
| 7 | 6 | 5     | 4     | 3 | 2 | 1 | 0 |
#--------------------------------------*/

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

#define CWGIF                                    0x5
#define CWGIF_address                            0x013
#define CWGIF_position                           0x5
#define CWGIF_size                               0x1
#define CWGIF_value_mask                         0x20
#define CWGIF_clear_mask                         0xDF


/*---------------------------------------------------------------------------------#
| PIR4                                                                        0x14 |
#----------------------------------------------------------------------------------#
| SCANIF | CRCIF | SMT2PWAIF | SMT2PRAIF | SMT2IF | SMT1PWAIF | SMT1PRAIF | SMT1IF |
#----------------------------------------------------------------------------------#
| 7      | 6     | 5         | 4         | 3      | 2         | 1         | 0      |
#---------------------------------------------------------------------------------*/

#define PIR4                                     0x0
#define PIR4_address                             0x014
#define PIR4_position                            0x0
#define PIR4_size                                0x8
#define PIR4_value_mask                          0xFF
#define PIR4_clear_mask                          0x0

#define SMT1IF                                   0x0
#define SMT1IF_address                           0x014
#define SMT1IF_position                          0x0
#define SMT1IF_size                              0x1
#define SMT1IF_value_mask                        0x1
#define SMT1IF_clear_mask                        0xFE

#define SMT1PRAIF                                0x1
#define SMT1PRAIF_address                        0x014
#define SMT1PRAIF_position                       0x1
#define SMT1PRAIF_size                           0x1
#define SMT1PRAIF_value_mask                     0x2
#define SMT1PRAIF_clear_mask                     0xFD

#define SMT1PWAIF                                0x2
#define SMT1PWAIF_address                        0x014
#define SMT1PWAIF_position                       0x2
#define SMT1PWAIF_size                           0x1
#define SMT1PWAIF_value_mask                     0x4
#define SMT1PWAIF_clear_mask                     0xFB

#define SMT2IF                                   0x3
#define SMT2IF_address                           0x014
#define SMT2IF_position                          0x3
#define SMT2IF_size                              0x1
#define SMT2IF_value_mask                        0x8
#define SMT2IF_clear_mask                        0xF7

#define SMT2PRAIF                                0x4
#define SMT2PRAIF_address                        0x014
#define SMT2PRAIF_position                       0x4
#define SMT2PRAIF_size                           0x1
#define SMT2PRAIF_value_mask                     0x10
#define SMT2PRAIF_clear_mask                     0xEF

#define SMT2PWAIF                                0x5
#define SMT2PWAIF_address                        0x014
#define SMT2PWAIF_position                       0x5
#define SMT2PWAIF_size                           0x1
#define SMT2PWAIF_value_mask                     0x20
#define SMT2PWAIF_clear_mask                     0xDF

#define CRCIF                                    0x6
#define CRCIF_address                            0x014
#define CRCIF_position                           0x6
#define CRCIF_size                               0x1
#define CRCIF_value_mask                         0x40
#define CRCIF_clear_mask                         0xBF

#define SCANIF                                   0x7
#define SCANIF_address                           0x014
#define SCANIF_position                          0x7
#define SCANIF_size                              0x1
#define SCANIF_value_mask                        0x80
#define SCANIF_clear_mask                        0x7F


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
| T2TMR                    0x1A |
#-------------------------------#
| TMR2                          |
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


/*------------------------------#
| T2PR                     0x1B |
#-------------------------------#
| PR2                           |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define T2PR                                     0x0
#define T2PR_address                             0x01B
#define T2PR_position                            0x0
#define T2PR_size                                0x8
#define T2PR_value_mask                          0xFF
#define T2PR_clear_mask                          0x0

#define PR2                                      0x0
#define PR2_address                              0x01B
#define PR2_position                             0x0
#define PR2_size                                 0x8
#define PR2_value_mask                           0xFF
#define PR2_clear_mask                           0x0


/*---------------------------------------------------------------------------------------#
| T2CON                                                                             0x1C |
#----------------------------------------------------------------------------------------#
| T2ON | T2CON_CKPS2 | T2CKPS1 | T2CON_CKPS0 | T2OUTPS3 | T2OUTPS2 | T2OUTPS1 | T2OUTPS0 |
#----------------------------------------------------------------------------------------#
| 7    | 6           | 5       | 4           | 3        | 2        | 1        | 0        |
#---------------------------------------------------------------------------------------*/

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

#define T2CON_CKPS0                              0x4
#define T2CON_CKPS0_address                      0x01C
#define T2CON_CKPS0_position                     0x4
#define T2CON_CKPS0_size                         0x1
#define T2CON_CKPS0_value_mask                   0x10
#define T2CON_CKPS0_clear_mask                   0xEF

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


/*-------------------------------------------------------------------------------------#
| T2HLT                                                                           0x1D |
#--------------------------------------------------------------------------------------#
| T2PSYNC | T2HLT_CKPOL | T2HLT_CKSYNC | - | T2HLT_MODE3 | T2MODE2 | T2MODE1 | T2MODE0 |
#--------------------------------------------------------------------------------------#
| 7       | 6           | 5            | 4 | 3           | 2       | 1       | 0       |
#-------------------------------------------------------------------------------------*/

#define T2HLT                                    0x0
#define T2HLT_address                            0x01D
#define T2HLT_position                           0x0
#define T2HLT_size                               0x8
#define T2HLT_value_mask                         0xFF
#define T2HLT_clear_mask                         0x0

#define T2HLT_MODE                               0x0
#define T2HLT_MODE_address                       0x01D
#define T2HLT_MODE_position                      0x0
#define T2HLT_MODE_size                          0x4
#define T2HLT_MODE_value_mask                    0xF
#define T2HLT_MODE_clear_mask                    0xF0

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

#define T2MODE                                   0x0
#define T2MODE_address                           0x01D
#define T2MODE_position                          0x0
#define T2MODE_size                              0x4
#define T2MODE_value_mask                        0xF
#define T2MODE_clear_mask                        0xF0

#define T2HLT_MODE1                              0x1
#define T2HLT_MODE1_address                      0x01D
#define T2HLT_MODE1_position                     0x1
#define T2HLT_MODE1_size                         0x1
#define T2HLT_MODE1_value_mask                   0x2
#define T2HLT_MODE1_clear_mask                   0xFD

#define T2MODE1                                  0x1
#define T2MODE1_address                          0x01D
#define T2MODE1_position                         0x1
#define T2MODE1_size                             0x1
#define T2MODE1_value_mask                       0x2
#define T2MODE1_clear_mask                       0xFD

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

#define T2HLT_MODE3                              0x3
#define T2HLT_MODE3_address                      0x01D
#define T2HLT_MODE3_position                     0x3
#define T2HLT_MODE3_size                         0x1
#define T2HLT_MODE3_value_mask                   0x8
#define T2HLT_MODE3_clear_mask                   0xF7

#define T2MODE3                                  0x3
#define T2MODE3_address                          0x01D
#define T2MODE3_position                         0x3
#define T2MODE3_size                             0x1
#define T2MODE3_value_mask                       0x8
#define T2MODE3_clear_mask                       0xF7

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


/*------------------------------------------#
| T2CLKCON                             0x1E |
#-------------------------------------------#
| - | - | - | - | - | T2CS2 | T2CS1 | T2CS0 |
#-------------------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2     | 1     | 0     |
#------------------------------------------*/

#define T2CLKCON                                 0x0
#define T2CLKCON_address                         0x01E
#define T2CLKCON_position                        0x0
#define T2CLKCON_size                            0x8
#define T2CLKCON_value_mask                      0xFF
#define T2CLKCON_clear_mask                      0x0

#define T2CS                                     0x0
#define T2CS_address                             0x01E
#define T2CS_position                            0x0
#define T2CS_size                                0x3
#define T2CS_value_mask                          0x7
#define T2CS_clear_mask                          0xF8

#define T2CS0                                    0x0
#define T2CS0_address                            0x01E
#define T2CS0_position                           0x0
#define T2CS0_size                               0x1
#define T2CS0_value_mask                         0x1
#define T2CS0_clear_mask                         0xFE

#define T2CS1                                    0x1
#define T2CS1_address                            0x01E
#define T2CS1_position                           0x1
#define T2CS1_size                               0x1
#define T2CS1_value_mask                         0x2
#define T2CS1_clear_mask                         0xFD

#define T2CS2                                    0x2
#define T2CS2_address                            0x01E
#define T2CS2_position                           0x2
#define T2CS2_size                               0x1
#define T2CS2_value_mask                         0x4
#define T2CS2_clear_mask                         0xFB


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


/*------------------------------------------------------#
| PIE1                                             0x91 |
#-------------------------------------------------------#
| TMR1GIE | ADIE | - | - | - | CCP1IE | TMR2IE | TMR1IE |
#-------------------------------------------------------#
| 7       | 6    | 5 | 4 | 3 | 2      | 1      | 0      |
#------------------------------------------------------*/

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


/*---------------------------------------------------#
| PIE2                                          0x92 |
#----------------------------------------------------#
| - | C2IE | C1IE | - | - | TMR6IE | TMR4IE | CCP2IE |
#----------------------------------------------------#
| 7 | 6    | 5    | 4 | 3 | 2      | 1      | 0      |
#---------------------------------------------------*/

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


/*--------------------------------------#
| PIE3                             0x93 |
#---------------------------------------#
| - | - | CWGIE | ZCDIE | - | - | - | - |
#---------------------------------------#
| 7 | 6 | 5     | 4     | 3 | 2 | 1 | 0 |
#--------------------------------------*/

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

#define CWGIE                                    0x5
#define CWGIE_address                            0x093
#define CWGIE_position                           0x5
#define CWGIE_size                               0x1
#define CWGIE_value_mask                         0x20
#define CWGIE_clear_mask                         0xDF


/*---------------------------------------------------------------------------------#
| PIE4                                                                        0x94 |
#----------------------------------------------------------------------------------#
| SCANIE | CRCIE | SMT2PWAIE | SMT2PRAIE | SMT2IE | SMT1PWAIE | SMT1PRAIE | SMT1IE |
#----------------------------------------------------------------------------------#
| 7      | 6     | 5         | 4         | 3      | 2         | 1         | 0      |
#---------------------------------------------------------------------------------*/

#define PIE4                                     0x0
#define PIE4_address                             0x094
#define PIE4_position                            0x0
#define PIE4_size                                0x8
#define PIE4_value_mask                          0xFF
#define PIE4_clear_mask                          0x0

#define SMT1IE                                   0x0
#define SMT1IE_address                           0x094
#define SMT1IE_position                          0x0
#define SMT1IE_size                              0x1
#define SMT1IE_value_mask                        0x1
#define SMT1IE_clear_mask                        0xFE

#define SMT1PRAIE                                0x1
#define SMT1PRAIE_address                        0x094
#define SMT1PRAIE_position                       0x1
#define SMT1PRAIE_size                           0x1
#define SMT1PRAIE_value_mask                     0x2
#define SMT1PRAIE_clear_mask                     0xFD

#define SMT1PWAIE                                0x2
#define SMT1PWAIE_address                        0x094
#define SMT1PWAIE_position                       0x2
#define SMT1PWAIE_size                           0x1
#define SMT1PWAIE_value_mask                     0x4
#define SMT1PWAIE_clear_mask                     0xFB

#define SMT2IE                                   0x3
#define SMT2IE_address                           0x094
#define SMT2IE_position                          0x3
#define SMT2IE_size                              0x1
#define SMT2IE_value_mask                        0x8
#define SMT2IE_clear_mask                        0xF7

#define SMT2PRAIE                                0x4
#define SMT2PRAIE_address                        0x094
#define SMT2PRAIE_position                       0x4
#define SMT2PRAIE_size                           0x1
#define SMT2PRAIE_value_mask                     0x10
#define SMT2PRAIE_clear_mask                     0xEF

#define SMT2PWAIE                                0x5
#define SMT2PWAIE_address                        0x094
#define SMT2PWAIE_position                       0x5
#define SMT2PWAIE_size                           0x1
#define SMT2PWAIE_value_mask                     0x20
#define SMT2PWAIE_clear_mask                     0xDF

#define CRCIE                                    0x6
#define CRCIE_address                            0x094
#define CRCIE_position                           0x6
#define CRCIE_size                               0x1
#define CRCIE_value_mask                         0x40
#define CRCIE_clear_mask                         0xBF

#define SCANIE                                   0x7
#define SCANIE_address                           0x094
#define SCANIE_position                          0x7
#define SCANIE_size                              0x1
#define SCANIE_value_mask                        0x80
#define SCANIE_clear_mask                        0x7F


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


/*--------------------------------------------------------------#
| PCON                                                     0x96 |
#---------------------------------------------------------------#
| STKOVF | STKUNF | nWDTWV | nRWDT | nRMCLR | nRI | nPOR | nBOR |
#---------------------------------------------------------------#
| 7      | 6      | 5      | 4     | 3      | 2   | 1    | 0    |
#--------------------------------------------------------------*/

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

#define nWDTWV                                   0x5
#define nWDTWV_address                           0x096
#define nWDTWV_position                          0x5
#define nWDTWV_size                              0x1
#define nWDTWV_value_mask                        0x20
#define nWDTWV_clear_mask                        0xDF

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


/*----------------------------------------------------------#
| OSCSTAT                                              0x9A |
#-----------------------------------------------------------#
| - | PLLR | - | HFIOFR | HFIOFL | MFIOFR | LFIOFR | HFIOFS |
#-----------------------------------------------------------#
| 7 | 6    | 5 | 4      | 3      | 2      | 1      | 0      |
#----------------------------------------------------------*/

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


/*------------------------------------------------------#
| LATA                                            0x10C |
#-------------------------------------------------------#
| - | - | LATA5 | LATA4 | LATA3 | LATA2 | LATA1 | LATA0 |
#-------------------------------------------------------#
| 7 | 6 | 5     | 4     | 3     | 2     | 1     | 0     |
#------------------------------------------------------*/

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


/*--------------------------------------------------#
| DAC1CON0                                    0x118 |
#---------------------------------------------------#
| DAC1EN | - | DAC1OE | - | D1PSS1 | D1PSS0 | - | - |
#---------------------------------------------------#
| 7      | 6 | 5      | 4 | 3      | 2      | 1 | 0 |
#--------------------------------------------------*/

#define DAC1CON0                                 0x0
#define DAC1CON0_address                         0x118
#define DAC1CON0_position                        0x0
#define DAC1CON0_size                            0x8
#define DAC1CON0_value_mask                      0xFF
#define DAC1CON0_clear_mask                      0x0

#define DAC1PSS                                  0x2
#define DAC1PSS_address                          0x118
#define DAC1PSS_position                         0x2
#define DAC1PSS_size                             0x2
#define DAC1PSS_value_mask                       0xC
#define DAC1PSS_clear_mask                       0xF3

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

#define DAC1OE                                   0x5
#define DAC1OE_address                           0x118
#define DAC1OE_position                          0x5
#define DAC1OE_size                              0x1
#define DAC1OE_value_mask                        0x20
#define DAC1OE_clear_mask                        0xDF

#define DAC1EN                                   0x7
#define DAC1EN_address                           0x118
#define DAC1EN_position                          0x7
#define DAC1EN_size                              0x1
#define DAC1EN_value_mask                        0x80
#define DAC1EN_clear_mask                        0x7F


/*----------------------------------------------------------------------#
| DAC1CON1                                                        0x119 |
#-----------------------------------------------------------------------#
| DAC1R7 | DAC1R6 | DAC1R5 | DAC1R4 | DAC1R3 | DAC1R2 | DAC1R1 | DAC1R0 |
#-----------------------------------------------------------------------#
| 7      | 6      | 5      | 4      | 3      | 2      | 1      | 0      |
#----------------------------------------------------------------------*/

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

#define DAC1R1                                   0x1
#define DAC1R1_address                           0x119
#define DAC1R1_position                          0x1
#define DAC1R1_size                              0x1
#define DAC1R1_value_mask                        0x2
#define DAC1R1_clear_mask                        0xFD

#define DAC1R2                                   0x2
#define DAC1R2_address                           0x119
#define DAC1R2_position                          0x2
#define DAC1R2_size                              0x1
#define DAC1R2_value_mask                        0x4
#define DAC1R2_clear_mask                        0xFB

#define DAC1R3                                   0x3
#define DAC1R3_address                           0x119
#define DAC1R3_position                          0x3
#define DAC1R3_size                              0x1
#define DAC1R3_value_mask                        0x8
#define DAC1R3_clear_mask                        0xF7

#define DAC1R4                                   0x4
#define DAC1R4_address                           0x119
#define DAC1R4_position                          0x4
#define DAC1R4_size                              0x1
#define DAC1R4_value_mask                        0x10
#define DAC1R4_clear_mask                        0xEF

#define DAC1R5                                   0x5
#define DAC1R5_address                           0x119
#define DAC1R5_position                          0x5
#define DAC1R5_size                              0x1
#define DAC1R5_value_mask                        0x20
#define DAC1R5_clear_mask                        0xDF

#define DAC1R6                                   0x6
#define DAC1R6_address                           0x119
#define DAC1R6_position                          0x6
#define DAC1R6_size                              0x1
#define DAC1R6_value_mask                        0x40
#define DAC1R6_clear_mask                        0xBF

#define DAC1R7                                   0x7
#define DAC1R7_address                           0x119
#define DAC1R7_position                          0x7
#define DAC1R7_size                              0x1
#define DAC1R7_value_mask                        0x80
#define DAC1R7_clear_mask                        0x7F


/*------------------------------------------------------------------#
| ZCD1CON                                                     0x11C |
#-------------------------------------------------------------------#
| ZCD1EN | ZCD1OE | ZCD1OUT | ZCD1POL | - | - | ZCD1INTP | ZCD1INTN |
#-------------------------------------------------------------------#
| 7      | 6      | 5       | 4       | 3 | 2 | 1        | 0        |
#------------------------------------------------------------------*/

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

#define ZCD1OE                                   0x6
#define ZCD1OE_address                           0x11C
#define ZCD1OE_position                          0x6
#define ZCD1OE_size                              0x1
#define ZCD1OE_value_mask                        0x40
#define ZCD1OE_clear_mask                        0xBF

#define ZCD1EN                                   0x7
#define ZCD1EN_address                           0x11C
#define ZCD1EN_position                          0x7
#define ZCD1EN_size                              0x1
#define ZCD1EN_value_mask                        0x80
#define ZCD1EN_clear_mask                        0x7F


/*-----------------------------------------#
| APFCON                             0x11D |
#------------------------------------------#
| - | - | - | - | T1GSEL | - | CCP2SEL | - |
#------------------------------------------#
| 7 | 6 | 5 | 4 | 3      | 2 | 1       | 0 |
#-----------------------------------------*/

#define APFCON                                   0x0
#define APFCON_address                           0x11D
#define APFCON_position                          0x0
#define APFCON_size                              0x8
#define APFCON_value_mask                        0xFF
#define APFCON_clear_mask                        0x0

#define CCP2SEL                                  0x1
#define CCP2SEL_address                          0x11D
#define CCP2SEL_position                         0x1
#define CCP2SEL_size                             0x1
#define CCP2SEL_value_mask                       0x2
#define CCP2SEL_clear_mask                       0xFD

#define T1GSEL                                   0x3
#define T1GSEL_address                           0x11D
#define T1GSEL_position                          0x3
#define T1GSEL_size                              0x1
#define T1GSEL_value_mask                        0x8
#define T1GSEL_clear_mask                        0xF7


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

#define WPUA_WPUA                                0x0
#define WPUA_WPUA_address                        0x20C
#define WPUA_WPUA_position                       0x0
#define WPUA_WPUA_size                           0x6
#define WPUA_WPUA_value_mask                     0x3F
#define WPUA_WPUA_clear_mask                     0xC0

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

#define WPUC_WPUA                                0x0
#define WPUC_WPUA_address                        0x20E
#define WPUC_WPUA_position                       0x0
#define WPUC_WPUA_size                           0x6
#define WPUC_WPUA_value_mask                     0x3F
#define WPUC_WPUA_clear_mask                     0xC0

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
| CCPR1L_RL                     |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define CCPR1L                                   0x0
#define CCPR1L_address                           0x291
#define CCPR1L_position                          0x0
#define CCPR1L_size                              0x8
#define CCPR1L_value_mask                        0xFF
#define CCPR1L_clear_mask                        0x0

#define CCPR1L_RL                                0x0
#define CCPR1L_RL_address                        0x291
#define CCPR1L_RL_position                       0x0
#define CCPR1L_RL_size                           0x8
#define CCPR1L_RL_value_mask                     0xFF
#define CCPR1L_RL_clear_mask                     0x0


/*------------------------------#
| CCPR1H                  0x292 |
#-------------------------------#
| CCPR1H_RH                     |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define CCPR1H                                   0x0
#define CCPR1H_address                           0x292
#define CCPR1H_position                          0x0
#define CCPR1H_size                              0x8
#define CCPR1H_value_mask                        0xFF
#define CCPR1H_clear_mask                        0x0

#define CCPR1H_RH                                0x0
#define CCPR1H_RH_address                        0x292
#define CCPR1H_RH_position                       0x0
#define CCPR1H_RH_size                           0x8
#define CCPR1H_RH_value_mask                     0xFF
#define CCPR1H_RH_clear_mask                     0x0


/*------------------------------------------------------------------------------------------------#
| CCP1CON                                                                                   0x293 |
#-------------------------------------------------------------------------------------------------#
| CCP1EN | CCP1CON_OE | CCP1CON_OUT | CCP1CON_FMT | CCP1MODE3 | CCP1MODE2 | CCP1MODE1 | CCP1MODE0 |
#-------------------------------------------------------------------------------------------------#
| 7      | 6          | 5           | 4           | 3         | 2         | 1         | 0         |
#------------------------------------------------------------------------------------------------*/

#define CCP1CON                                  0x0
#define CCP1CON_address                          0x293
#define CCP1CON_position                         0x0
#define CCP1CON_size                             0x8
#define CCP1CON_value_mask                       0xFF
#define CCP1CON_clear_mask                       0x0

#define CCP1MODE0                                0x0
#define CCP1MODE0_address                        0x293
#define CCP1MODE0_position                       0x0
#define CCP1MODE0_size                           0x1
#define CCP1MODE0_value_mask                     0x1
#define CCP1MODE0_clear_mask                     0xFE

#define CCP1CON_MODE0                            0x0
#define CCP1CON_MODE0_address                    0x293
#define CCP1CON_MODE0_position                   0x0
#define CCP1CON_MODE0_size                       0x1
#define CCP1CON_MODE0_value_mask                 0x1
#define CCP1CON_MODE0_clear_mask                 0xFE

#define CCP1CON_MODE                             0x0
#define CCP1CON_MODE_address                     0x293
#define CCP1CON_MODE_position                    0x0
#define CCP1CON_MODE_size                        0x4
#define CCP1CON_MODE_value_mask                  0xF
#define CCP1CON_MODE_clear_mask                  0xF0

#define CCP1MODE                                 0x0
#define CCP1MODE_address                         0x293
#define CCP1MODE_position                        0x0
#define CCP1MODE_size                            0x4
#define CCP1MODE_value_mask                      0xF
#define CCP1MODE_clear_mask                      0xF0

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

#define CCP1FMT                                  0x4
#define CCP1FMT_address                          0x293
#define CCP1FMT_position                         0x4
#define CCP1FMT_size                             0x1
#define CCP1FMT_value_mask                       0x10
#define CCP1FMT_clear_mask                       0xEF

#define CCP1CON_FMT                              0x4
#define CCP1CON_FMT_address                      0x293
#define CCP1CON_FMT_position                     0x4
#define CCP1CON_FMT_size                         0x1
#define CCP1CON_FMT_value_mask                   0x10
#define CCP1CON_FMT_clear_mask                   0xEF

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

#define CCP1CON_OE                               0x6
#define CCP1CON_OE_address                       0x293
#define CCP1CON_OE_position                      0x6
#define CCP1CON_OE_size                          0x1
#define CCP1CON_OE_value_mask                    0x40
#define CCP1CON_OE_clear_mask                    0xBF

#define CCP1OE                                   0x6
#define CCP1OE_address                           0x293
#define CCP1OE_position                          0x6
#define CCP1OE_size                              0x1
#define CCP1OE_value_mask                        0x40
#define CCP1OE_clear_mask                        0xBF

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


/*--------------------------------------------#
| CCP1CAP                               0x294 |
#---------------------------------------------#
| - | - | - | - | - | - | CCP1CTS1 | CCP1CTS0 |
#---------------------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1        | 0        |
#--------------------------------------------*/

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

#define CCP1CAP_CTS                              0x0
#define CCP1CAP_CTS_address                      0x294
#define CCP1CAP_CTS_position                     0x0
#define CCP1CAP_CTS_size                         0x8
#define CCP1CAP_CTS_value_mask                   0xFF
#define CCP1CAP_CTS_clear_mask                   0x0

#define CCP1CAP_CTS0                             0x0
#define CCP1CAP_CTS0_address                     0x294
#define CCP1CAP_CTS0_position                    0x0
#define CCP1CAP_CTS0_size                        0x1
#define CCP1CAP_CTS0_value_mask                  0x1
#define CCP1CAP_CTS0_clear_mask                  0xFE

#define CCP1CTS                                  0x0
#define CCP1CTS_address                          0x294
#define CCP1CTS_position                         0x0
#define CCP1CTS_size                             0x8
#define CCP1CTS_value_mask                       0xFF
#define CCP1CTS_clear_mask                       0x0

#define CCP1CTS1                                 0x1
#define CCP1CTS1_address                         0x294
#define CCP1CTS1_position                        0x1
#define CCP1CTS1_size                            0x1
#define CCP1CTS1_value_mask                      0x2
#define CCP1CTS1_clear_mask                      0xFD

#define CCP1CAP_CTS1                             0x1
#define CCP1CAP_CTS1_address                     0x294
#define CCP1CAP_CTS1_position                    0x1
#define CCP1CAP_CTS1_size                        0x1
#define CCP1CAP_CTS1_value_mask                  0x2
#define CCP1CAP_CTS1_clear_mask                  0xFD


/*------------------------------#
| CCPR2L                  0x298 |
#-------------------------------#
| CCPR2L_RL                     |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define CCPR2L                                   0x0
#define CCPR2L_address                           0x298
#define CCPR2L_position                          0x0
#define CCPR2L_size                              0x8
#define CCPR2L_value_mask                        0xFF
#define CCPR2L_clear_mask                        0x0

#define CCPR2L_RL                                0x0
#define CCPR2L_RL_address                        0x298
#define CCPR2L_RL_position                       0x0
#define CCPR2L_RL_size                           0x8
#define CCPR2L_RL_value_mask                     0xFF
#define CCPR2L_RL_clear_mask                     0x0


/*------------------------------#
| CCPR2H                  0x299 |
#-------------------------------#
| CCPR2H_RH                     |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define CCPR2H                                   0x0
#define CCPR2H_address                           0x299
#define CCPR2H_position                          0x0
#define CCPR2H_size                              0x8
#define CCPR2H_value_mask                        0xFF
#define CCPR2H_clear_mask                        0x0

#define CCPR2H_RH                                0x0
#define CCPR2H_RH_address                        0x299
#define CCPR2H_RH_position                       0x0
#define CCPR2H_RH_size                           0x8
#define CCPR2H_RH_value_mask                     0xFF
#define CCPR2H_RH_clear_mask                     0x0


/*--------------------------------------------------------------------------------------------#
| CCP2CON                                                                               0x29A |
#---------------------------------------------------------------------------------------------#
| CCP2CON_EN | CCP2CON_OE | CCP2OUT | CCP2FMT | CCP2MODE3 | CCP2MODE2 | CCP2MODE1 | CCP2MODE0 |
#---------------------------------------------------------------------------------------------#
| 7          | 6          | 5       | 4       | 3         | 2         | 1         | 0         |
#--------------------------------------------------------------------------------------------*/

#define CCP2CON                                  0x0
#define CCP2CON_address                          0x29A
#define CCP2CON_position                         0x0
#define CCP2CON_size                             0x8
#define CCP2CON_value_mask                       0xFF
#define CCP2CON_clear_mask                       0x0

#define CCP2MODE                                 0x0
#define CCP2MODE_address                         0x29A
#define CCP2MODE_position                        0x0
#define CCP2MODE_size                            0x4
#define CCP2MODE_value_mask                      0xF
#define CCP2MODE_clear_mask                      0xF0

#define CCP2MODE0                                0x0
#define CCP2MODE0_address                        0x29A
#define CCP2MODE0_position                       0x0
#define CCP2MODE0_size                           0x1
#define CCP2MODE0_value_mask                     0x1
#define CCP2MODE0_clear_mask                     0xFE

#define CCP2CON_MODE0                            0x0
#define CCP2CON_MODE0_address                    0x29A
#define CCP2CON_MODE0_position                   0x0
#define CCP2CON_MODE0_size                       0x1
#define CCP2CON_MODE0_value_mask                 0x1
#define CCP2CON_MODE0_clear_mask                 0xFE

#define CCP2CON_MODE                             0x0
#define CCP2CON_MODE_address                     0x29A
#define CCP2CON_MODE_position                    0x0
#define CCP2CON_MODE_size                        0x4
#define CCP2CON_MODE_value_mask                  0xF
#define CCP2CON_MODE_clear_mask                  0xF0

#define CCP2MODE1                                0x1
#define CCP2MODE1_address                        0x29A
#define CCP2MODE1_position                       0x1
#define CCP2MODE1_size                           0x1
#define CCP2MODE1_value_mask                     0x2
#define CCP2MODE1_clear_mask                     0xFD

#define CCP2CON_MODE1                            0x1
#define CCP2CON_MODE1_address                    0x29A
#define CCP2CON_MODE1_position                   0x1
#define CCP2CON_MODE1_size                       0x1
#define CCP2CON_MODE1_value_mask                 0x2
#define CCP2CON_MODE1_clear_mask                 0xFD

#define CCP2MODE2                                0x2
#define CCP2MODE2_address                        0x29A
#define CCP2MODE2_position                       0x2
#define CCP2MODE2_size                           0x1
#define CCP2MODE2_value_mask                     0x4
#define CCP2MODE2_clear_mask                     0xFB

#define CCP2CON_MODE2                            0x2
#define CCP2CON_MODE2_address                    0x29A
#define CCP2CON_MODE2_position                   0x2
#define CCP2CON_MODE2_size                       0x1
#define CCP2CON_MODE2_value_mask                 0x4
#define CCP2CON_MODE2_clear_mask                 0xFB

#define CCP2MODE3                                0x3
#define CCP2MODE3_address                        0x29A
#define CCP2MODE3_position                       0x3
#define CCP2MODE3_size                           0x1
#define CCP2MODE3_value_mask                     0x8
#define CCP2MODE3_clear_mask                     0xF7

#define CCP2CON_MODE3                            0x3
#define CCP2CON_MODE3_address                    0x29A
#define CCP2CON_MODE3_position                   0x3
#define CCP2CON_MODE3_size                       0x1
#define CCP2CON_MODE3_value_mask                 0x8
#define CCP2CON_MODE3_clear_mask                 0xF7

#define CCP2FMT                                  0x4
#define CCP2FMT_address                          0x29A
#define CCP2FMT_position                         0x4
#define CCP2FMT_size                             0x1
#define CCP2FMT_value_mask                       0x10
#define CCP2FMT_clear_mask                       0xEF

#define CCP2CON_FMT                              0x4
#define CCP2CON_FMT_address                      0x29A
#define CCP2CON_FMT_position                     0x4
#define CCP2CON_FMT_size                         0x1
#define CCP2CON_FMT_value_mask                   0x10
#define CCP2CON_FMT_clear_mask                   0xEF

#define CCP2OUT                                  0x5
#define CCP2OUT_address                          0x29A
#define CCP2OUT_position                         0x5
#define CCP2OUT_size                             0x1
#define CCP2OUT_value_mask                       0x20
#define CCP2OUT_clear_mask                       0xDF

#define CCP2CON_OUT                              0x5
#define CCP2CON_OUT_address                      0x29A
#define CCP2CON_OUT_position                     0x5
#define CCP2CON_OUT_size                         0x1
#define CCP2CON_OUT_value_mask                   0x20
#define CCP2CON_OUT_clear_mask                   0xDF

#define CCP2OE                                   0x6
#define CCP2OE_address                           0x29A
#define CCP2OE_position                          0x6
#define CCP2OE_size                              0x1
#define CCP2OE_value_mask                        0x40
#define CCP2OE_clear_mask                        0xBF

#define CCP2CON_OE                               0x6
#define CCP2CON_OE_address                       0x29A
#define CCP2CON_OE_position                      0x6
#define CCP2CON_OE_size                          0x1
#define CCP2CON_OE_value_mask                    0x40
#define CCP2CON_OE_clear_mask                    0xBF

#define CCP2EN                                   0x7
#define CCP2EN_address                           0x29A
#define CCP2EN_position                          0x7
#define CCP2EN_size                              0x1
#define CCP2EN_value_mask                        0x80
#define CCP2EN_clear_mask                        0x7F

#define CCP2CON_EN                               0x7
#define CCP2CON_EN_address                       0x29A
#define CCP2CON_EN_position                      0x7
#define CCP2CON_EN_size                          0x1
#define CCP2CON_EN_value_mask                    0x80
#define CCP2CON_EN_clear_mask                    0x7F


/*----------------------------------------------------#
| CCP2CAP                                       0x29B |
#-----------------------------------------------------#
| - | - | - | - | - | - | CCP2CAP_CTS1 | CCP2CAP_CTS0 |
#-----------------------------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1            | 0            |
#----------------------------------------------------*/

#define CCP2CAP                                  0x0
#define CCP2CAP_address                          0x29B
#define CCP2CAP_position                         0x0
#define CCP2CAP_size                             0x8
#define CCP2CAP_value_mask                       0xFF
#define CCP2CAP_clear_mask                       0x0

#define CCP2CAP_CTS                              0x0
#define CCP2CAP_CTS_address                      0x29B
#define CCP2CAP_CTS_position                     0x0
#define CCP2CAP_CTS_size                         0x8
#define CCP2CAP_CTS_value_mask                   0xFF
#define CCP2CAP_CTS_clear_mask                   0x0

#define CCP2CAP_CTS0                             0x0
#define CCP2CAP_CTS0_address                     0x29B
#define CCP2CAP_CTS0_position                    0x0
#define CCP2CAP_CTS0_size                        0x1
#define CCP2CAP_CTS0_value_mask                  0x1
#define CCP2CAP_CTS0_clear_mask                  0xFE

#define CCP2CTS                                  0x0
#define CCP2CTS_address                          0x29B
#define CCP2CTS_position                         0x0
#define CCP2CTS_size                             0x8
#define CCP2CTS_value_mask                       0xFF
#define CCP2CTS_clear_mask                       0x0

#define CCP2CTS0                                 0x0
#define CCP2CTS0_address                         0x29B
#define CCP2CTS0_position                        0x0
#define CCP2CTS0_size                            0x1
#define CCP2CTS0_value_mask                      0x1
#define CCP2CTS0_clear_mask                      0xFE

#define CCP2CAP_CTS1                             0x1
#define CCP2CAP_CTS1_address                     0x29B
#define CCP2CAP_CTS1_position                    0x1
#define CCP2CAP_CTS1_size                        0x1
#define CCP2CAP_CTS1_value_mask                  0x2
#define CCP2CAP_CTS1_clear_mask                  0xFD

#define CCP2CTS1                                 0x1
#define CCP2CTS1_address                         0x29B
#define CCP2CTS1_position                        0x1
#define CCP2CTS1_size                            0x1
#define CCP2CTS1_value_mask                      0x2
#define CCP2CTS1_clear_mask                      0xFD


/*--------------------------------------------------------------#
| CCPTMRS                                                 0x29E |
#---------------------------------------------------------------#
| - | - | - | - | CCP2TSEL1 | CCP2TSEL0 | CCP1TSEL1 | CCP1TSEL0 |
#---------------------------------------------------------------#
| 7 | 6 | 5 | 4 | 3         | 2         | 1         | 0         |
#--------------------------------------------------------------*/

#define CCPTMRS                                  0x0
#define CCPTMRS_address                          0x29E
#define CCPTMRS_position                         0x0
#define CCPTMRS_size                             0x8
#define CCPTMRS_value_mask                       0xFF
#define CCPTMRS_clear_mask                       0x0

#define CCP1TSEL0                                0x0
#define CCP1TSEL0_address                        0x29E
#define CCP1TSEL0_position                       0x0
#define CCP1TSEL0_size                           0x1
#define CCP1TSEL0_value_mask                     0x1
#define CCP1TSEL0_clear_mask                     0xFE

#define CCP1TSEL                                 0x0
#define CCP1TSEL_address                         0x29E
#define CCP1TSEL_position                        0x0
#define CCP1TSEL_size                            0x2
#define CCP1TSEL_value_mask                      0x3
#define CCP1TSEL_clear_mask                      0xFC

#define CCP1TSEL1                                0x1
#define CCP1TSEL1_address                        0x29E
#define CCP1TSEL1_position                       0x1
#define CCP1TSEL1_size                           0x1
#define CCP1TSEL1_value_mask                     0x2
#define CCP1TSEL1_clear_mask                     0xFD

#define CCP2TSEL0                                0x2
#define CCP2TSEL0_address                        0x29E
#define CCP2TSEL0_position                       0x2
#define CCP2TSEL0_size                           0x1
#define CCP2TSEL0_value_mask                     0x4
#define CCP2TSEL0_clear_mask                     0xFB

#define CCP2TSEL                                 0x2
#define CCP2TSEL_address                         0x29E
#define CCP2TSEL_position                        0x2
#define CCP2TSEL_size                            0x2
#define CCP2TSEL_value_mask                      0xC
#define CCP2TSEL_clear_mask                      0xF3

#define CCP2TSEL1                                0x3
#define CCP2TSEL1_address                        0x29E
#define CCP2TSEL1_position                       0x3
#define CCP2TSEL1_size                           0x1
#define CCP2TSEL1_value_mask                     0x8
#define CCP2TSEL1_clear_mask                     0xF7


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


/*------------------------------#
| T4PR                    0x414 |
#-------------------------------#
| PR4                           |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define T4PR                                     0x0
#define T4PR_address                             0x414
#define T4PR_position                            0x0
#define T4PR_size                                0x8
#define T4PR_value_mask                          0xFF
#define T4PR_clear_mask                          0x0

#define PR4                                      0x0
#define PR4_address                              0x414
#define PR4_position                             0x0
#define PR4_size                                 0x8
#define PR4_value_mask                           0xFF
#define PR4_clear_mask                           0x0


/*---------------------------------------------------------------------------------------------------#
| T4CON                                                                                        0x415 |
#----------------------------------------------------------------------------------------------------#
| T4ON | T4CON_CKPS2 | T4CON_CKPS1 | T4CON_CKPS0 | T4OUTPS3 | T4CON_OUTPS2 | T4OUTPS1 | T4CON_OUTPS0 |
#----------------------------------------------------------------------------------------------------#
| 7    | 6           | 5           | 4           | 3        | 2            | 1        | 0            |
#---------------------------------------------------------------------------------------------------*/

#define T4CON                                    0x0
#define T4CON_address                            0x415
#define T4CON_position                           0x0
#define T4CON_size                               0x8
#define T4CON_value_mask                         0xFF
#define T4CON_clear_mask                         0x0

#define T4OUTPS0                                 0x0
#define T4OUTPS0_address                         0x415
#define T4OUTPS0_position                        0x0
#define T4OUTPS0_size                            0x1
#define T4OUTPS0_value_mask                      0x1
#define T4OUTPS0_clear_mask                      0xFE

#define T4CON_OUTPS                              0x0
#define T4CON_OUTPS_address                      0x415
#define T4CON_OUTPS_position                     0x0
#define T4CON_OUTPS_size                         0x4
#define T4CON_OUTPS_value_mask                   0xF
#define T4CON_OUTPS_clear_mask                   0xF0

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

#define T4CON_CKPS0                              0x4
#define T4CON_CKPS0_address                      0x415
#define T4CON_CKPS0_position                     0x4
#define T4CON_CKPS0_size                         0x1
#define T4CON_CKPS0_value_mask                   0x10
#define T4CON_CKPS0_clear_mask                   0xEF

#define T4CKPS0                                  0x4
#define T4CKPS0_address                          0x415
#define T4CKPS0_position                         0x4
#define T4CKPS0_size                             0x1
#define T4CKPS0_value_mask                       0x10
#define T4CKPS0_clear_mask                       0xEF

#define T4CON_CKPS                               0x4
#define T4CON_CKPS_address                       0x415
#define T4CON_CKPS_position                      0x4
#define T4CON_CKPS_size                          0x3
#define T4CON_CKPS_value_mask                    0x70
#define T4CON_CKPS_clear_mask                    0x8F

#define T4CKPS                                   0x4
#define T4CKPS_address                           0x415
#define T4CKPS_position                          0x4
#define T4CKPS_size                              0x3
#define T4CKPS_value_mask                        0x70
#define T4CKPS_clear_mask                        0x8F

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

#define T4ON                                     0x7
#define T4ON_address                             0x415
#define T4ON_position                            0x7
#define T4ON_size                                0x1
#define T4ON_value_mask                          0x80
#define T4ON_clear_mask                          0x7F

#define T4CON_ON                                 0x7
#define T4CON_ON_address                         0x415
#define T4CON_ON_position                        0x7
#define T4CON_ON_size                            0x1
#define T4CON_ON_value_mask                      0x80
#define T4CON_ON_clear_mask                      0x7F

#define TMR4ON                                   0x7
#define TMR4ON_address                           0x415
#define TMR4ON_position                          0x7
#define TMR4ON_size                              0x1
#define TMR4ON_value_mask                        0x80
#define TMR4ON_clear_mask                        0x7F


/*-------------------------------------------------------------------------------------------------#
| T4HLT                                                                                      0x416 |
#--------------------------------------------------------------------------------------------------#
| T4HLT_PSYNC | T4CKPOL | T4HLT_CKSYNC | - | T4HLT_MODE3 | T4HLT_MODE2 | T4HLT_MODE1 | T4HLT_MODE0 |
#--------------------------------------------------------------------------------------------------#
| 7           | 6       | 5            | 4 | 3           | 2           | 1           | 0           |
#-------------------------------------------------------------------------------------------------*/

#define T4HLT                                    0x0
#define T4HLT_address                            0x416
#define T4HLT_position                           0x0
#define T4HLT_size                               0x8
#define T4HLT_value_mask                         0xFF
#define T4HLT_clear_mask                         0x0

#define T4MODE                                   0x0
#define T4MODE_address                           0x416
#define T4MODE_position                          0x0
#define T4MODE_size                              0x4
#define T4MODE_value_mask                        0xF
#define T4MODE_clear_mask                        0xF0

#define T4HLT_MODE                               0x0
#define T4HLT_MODE_address                       0x416
#define T4HLT_MODE_position                      0x0
#define T4HLT_MODE_size                          0x4
#define T4HLT_MODE_value_mask                    0xF
#define T4HLT_MODE_clear_mask                    0xF0

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

#define T4HLT_CKSYNC                             0x5
#define T4HLT_CKSYNC_address                     0x416
#define T4HLT_CKSYNC_position                    0x5
#define T4HLT_CKSYNC_size                        0x1
#define T4HLT_CKSYNC_value_mask                  0x20
#define T4HLT_CKSYNC_clear_mask                  0xDF

#define T4CKSYNC                                 0x5
#define T4CKSYNC_address                         0x416
#define T4CKSYNC_position                        0x5
#define T4CKSYNC_size                            0x1
#define T4CKSYNC_value_mask                      0x20
#define T4CKSYNC_clear_mask                      0xDF

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


/*------------------------------------------#
| T4CLKCON                            0x417 |
#-------------------------------------------#
| - | - | - | - | - | T4CS2 | T4CS1 | T4CS0 |
#-------------------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2     | 1     | 0     |
#------------------------------------------*/

#define T4CLKCON                                 0x0
#define T4CLKCON_address                         0x417
#define T4CLKCON_position                        0x0
#define T4CLKCON_size                            0x8
#define T4CLKCON_value_mask                      0xFF
#define T4CLKCON_clear_mask                      0x0

#define T4CS0                                    0x0
#define T4CS0_address                            0x417
#define T4CS0_position                           0x0
#define T4CS0_size                               0x1
#define T4CS0_value_mask                         0x1
#define T4CS0_clear_mask                         0xFE

#define T4CS                                     0x0
#define T4CS_address                             0x417
#define T4CS_position                            0x0
#define T4CS_size                                0x3
#define T4CS_value_mask                          0x7
#define T4CS_clear_mask                          0xF8

#define T4CS1                                    0x1
#define T4CS1_address                            0x417
#define T4CS1_position                           0x1
#define T4CS1_size                               0x1
#define T4CS1_value_mask                         0x2
#define T4CS1_clear_mask                         0xFD

#define T4CS2                                    0x2
#define T4CS2_address                            0x417
#define T4CS2_position                           0x2
#define T4CS2_size                               0x1
#define T4CS2_value_mask                         0x4
#define T4CS2_clear_mask                         0xFB


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


/*------------------------------#
| T6PR                    0x41B |
#-------------------------------#
| PR6                           |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define T6PR                                     0x0
#define T6PR_address                             0x41B
#define T6PR_position                            0x0
#define T6PR_size                                0x8
#define T6PR_value_mask                          0xFF
#define T6PR_clear_mask                          0x0

#define PR6                                      0x0
#define PR6_address                              0x41B
#define PR6_position                             0x0
#define PR6_size                                 0x8
#define PR6_value_mask                           0xFF
#define PR6_clear_mask                           0x0


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


/*-------------------------------------------------------------------------------------#
| T6HLT                                                                          0x41D |
#--------------------------------------------------------------------------------------#
| T6PSYNC | T6CKPOL | T6CKSYNC | - | T6HLT_MODE3 | T6MODE2 | T6HLT_MODE1 | T6HLT_MODE0 |
#--------------------------------------------------------------------------------------#
| 7       | 6       | 5        | 4 | 3           | 2       | 1           | 0           |
#-------------------------------------------------------------------------------------*/

#define T6HLT                                    0x0
#define T6HLT_address                            0x41D
#define T6HLT_position                           0x0
#define T6HLT_size                               0x8
#define T6HLT_value_mask                         0xFF
#define T6HLT_clear_mask                         0x0

#define T6HLT_MODE0                              0x0
#define T6HLT_MODE0_address                      0x41D
#define T6HLT_MODE0_position                     0x0
#define T6HLT_MODE0_size                         0x1
#define T6HLT_MODE0_value_mask                   0x1
#define T6HLT_MODE0_clear_mask                   0xFE

#define T6HLT_MODE                               0x0
#define T6HLT_MODE_address                       0x41D
#define T6HLT_MODE_position                      0x0
#define T6HLT_MODE_size                          0x4
#define T6HLT_MODE_value_mask                    0xF
#define T6HLT_MODE_clear_mask                    0xF0

#define T6MODE0                                  0x0
#define T6MODE0_address                          0x41D
#define T6MODE0_position                         0x0
#define T6MODE0_size                             0x1
#define T6MODE0_value_mask                       0x1
#define T6MODE0_clear_mask                       0xFE

#define T6MODE                                   0x0
#define T6MODE_address                           0x41D
#define T6MODE_position                          0x0
#define T6MODE_size                              0x4
#define T6MODE_value_mask                        0xF
#define T6MODE_clear_mask                        0xF0

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

#define T6MODE2                                  0x2
#define T6MODE2_address                          0x41D
#define T6MODE2_position                         0x2
#define T6MODE2_size                             0x1
#define T6MODE2_value_mask                       0x4
#define T6MODE2_clear_mask                       0xFB

#define T6HLT_MODE2                              0x2
#define T6HLT_MODE2_address                      0x41D
#define T6HLT_MODE2_position                     0x2
#define T6HLT_MODE2_size                         0x1
#define T6HLT_MODE2_value_mask                   0x4
#define T6HLT_MODE2_clear_mask                   0xFB

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


/*------------------------------------------#
| T6CLKCON                            0x41E |
#-------------------------------------------#
| - | - | - | - | - | T6CS2 | T6CS1 | T6CS0 |
#-------------------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2     | 1     | 0     |
#------------------------------------------*/

#define T6CLKCON                                 0x0
#define T6CLKCON_address                         0x41E
#define T6CLKCON_position                        0x0
#define T6CLKCON_size                            0x8
#define T6CLKCON_value_mask                      0xFF
#define T6CLKCON_clear_mask                      0x0

#define T6CS                                     0x0
#define T6CS_address                             0x41E
#define T6CS_position                            0x0
#define T6CS_size                                0x3
#define T6CS_value_mask                          0x7
#define T6CS_clear_mask                          0xF8

#define T6CS0                                    0x0
#define T6CS0_address                            0x41E
#define T6CS0_position                           0x0
#define T6CS0_size                               0x1
#define T6CS0_value_mask                         0x1
#define T6CS0_clear_mask                         0xFE

#define T6CS1                                    0x1
#define T6CS1_address                            0x41E
#define T6CS1_position                           0x1
#define T6CS1_size                               0x1
#define T6CS1_value_mask                         0x2
#define T6CS1_clear_mask                         0xFD

#define T6CS2                                    0x2
#define T6CS2_address                            0x41E
#define T6CS2_position                           0x2
#define T6CS2_size                               0x1
#define T6CS2_value_mask                         0x4
#define T6CS2_clear_mask                         0xFB


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

#define CWG1DBR1                                 0x1
#define CWG1DBR1_address                         0x691
#define CWG1DBR1_position                        0x1
#define CWG1DBR1_size                            0x1
#define CWG1DBR1_value_mask                      0x2
#define CWG1DBR1_clear_mask                      0xFD

#define DBR1                                     0x1
#define DBR1_address                             0x691
#define DBR1_position                            0x1
#define DBR1_size                                0x1
#define DBR1_value_mask                          0x2
#define DBR1_clear_mask                          0xFD

#define CWG1DBR2                                 0x2
#define CWG1DBR2_address                         0x691
#define CWG1DBR2_position                        0x2
#define CWG1DBR2_size                            0x1
#define CWG1DBR2_value_mask                      0x4
#define CWG1DBR2_clear_mask                      0xFB

#define DBR2                                     0x2
#define DBR2_address                             0x691
#define DBR2_position                            0x2
#define DBR2_size                                0x1
#define DBR2_value_mask                          0x4
#define DBR2_clear_mask                          0xFB

#define CWG1DBR3                                 0x3
#define CWG1DBR3_address                         0x691
#define CWG1DBR3_position                        0x3
#define CWG1DBR3_size                            0x1
#define CWG1DBR3_value_mask                      0x8
#define CWG1DBR3_clear_mask                      0xF7

#define DBR3                                     0x3
#define DBR3_address                             0x691
#define DBR3_position                            0x3
#define DBR3_size                                0x1
#define DBR3_value_mask                          0x8
#define DBR3_clear_mask                          0xF7

#define CWG1DBR4                                 0x4
#define CWG1DBR4_address                         0x691
#define CWG1DBR4_position                        0x4
#define CWG1DBR4_size                            0x1
#define CWG1DBR4_value_mask                      0x10
#define CWG1DBR4_clear_mask                      0xEF

#define DBR4                                     0x4
#define DBR4_address                             0x691
#define DBR4_position                            0x4
#define DBR4_size                                0x1
#define DBR4_value_mask                          0x10
#define DBR4_clear_mask                          0xEF

#define CWG1DBR5                                 0x5
#define CWG1DBR5_address                         0x691
#define CWG1DBR5_position                        0x5
#define CWG1DBR5_size                            0x1
#define CWG1DBR5_value_mask                      0x20
#define CWG1DBR5_clear_mask                      0xDF

#define DBR5                                     0x5
#define DBR5_address                             0x691
#define DBR5_position                            0x5
#define DBR5_size                                0x1
#define DBR5_value_mask                          0x20
#define DBR5_clear_mask                          0xDF


/*--------------------------------------------------------------------#
| CWG1DBF                                                       0x692 |
#---------------------------------------------------------------------#
| - | - | DBF5 | CWG1DBF4 | CWG1DBF3 | CWG1DBF2 | CWG1DBF1 | CWG1DBF0 |
#---------------------------------------------------------------------#
| 7 | 6 | 5    | 4        | 3        | 2        | 1        | 0        |
#--------------------------------------------------------------------*/

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

#define DBF                                      0x0
#define DBF_address                              0x692
#define DBF_position                             0x0
#define DBF_size                                 0x6
#define DBF_value_mask                           0x3F
#define DBF_clear_mask                           0xC0

#define DBF0                                     0x0
#define DBF0_address                             0x692
#define DBF0_position                            0x0
#define DBF0_size                                0x1
#define DBF0_value_mask                          0x1
#define DBF0_clear_mask                          0xFE

#define CWG1DBF1                                 0x1
#define CWG1DBF1_address                         0x692
#define CWG1DBF1_position                        0x1
#define CWG1DBF1_size                            0x1
#define CWG1DBF1_value_mask                      0x2
#define CWG1DBF1_clear_mask                      0xFD

#define DBF1                                     0x1
#define DBF1_address                             0x692
#define DBF1_position                            0x1
#define DBF1_size                                0x1
#define DBF1_value_mask                          0x2
#define DBF1_clear_mask                          0xFD

#define CWG1DBF2                                 0x2
#define CWG1DBF2_address                         0x692
#define CWG1DBF2_position                        0x2
#define CWG1DBF2_size                            0x1
#define CWG1DBF2_value_mask                      0x4
#define CWG1DBF2_clear_mask                      0xFB

#define DBF2                                     0x2
#define DBF2_address                             0x692
#define DBF2_position                            0x2
#define DBF2_size                                0x1
#define DBF2_value_mask                          0x4
#define DBF2_clear_mask                          0xFB

#define CWG1DBF3                                 0x3
#define CWG1DBF3_address                         0x692
#define CWG1DBF3_position                        0x3
#define CWG1DBF3_size                            0x1
#define CWG1DBF3_value_mask                      0x8
#define CWG1DBF3_clear_mask                      0xF7

#define DBF3                                     0x3
#define DBF3_address                             0x692
#define DBF3_position                            0x3
#define DBF3_size                                0x1
#define DBF3_value_mask                          0x8
#define DBF3_clear_mask                          0xF7

#define CWG1DBF4                                 0x4
#define CWG1DBF4_address                         0x692
#define CWG1DBF4_position                        0x4
#define CWG1DBF4_size                            0x1
#define CWG1DBF4_value_mask                      0x10
#define CWG1DBF4_clear_mask                      0xEF

#define DBF4                                     0x4
#define DBF4_address                             0x692
#define DBF4_position                            0x4
#define DBF4_size                                0x1
#define DBF4_value_mask                          0x10
#define DBF4_clear_mask                          0xEF

#define DBF5                                     0x5
#define DBF5_address                             0x692
#define DBF5_position                            0x5
#define DBF5_size                                0x1
#define DBF5_value_mask                          0x20
#define DBF5_clear_mask                          0xDF

#define CWG1DBF5                                 0x5
#define CWG1DBF5_address                         0x692
#define CWG1DBF5_position                        0x5
#define CWG1DBF5_size                            0x1
#define CWG1DBF5_value_mask                      0x20
#define CWG1DBF5_clear_mask                      0xDF


/*---------------------------------------------------------------#
| CWG1AS0                                                  0x693 |
#----------------------------------------------------------------#
| CWG1SHUTDOWN | CWG1REN | LSBD1 | LSBD0 | LSAC1 | LSAC0 | - | - |
#----------------------------------------------------------------#
| 7            | 6       | 5     | 4     | 3     | 2     | 1 | 0 |
#---------------------------------------------------------------*/

#define CWG1AS0                                  0x0
#define CWG1AS0_address                          0x693
#define CWG1AS0_position                         0x0
#define CWG1AS0_size                             0x8
#define CWG1AS0_value_mask                       0xFF
#define CWG1AS0_clear_mask                       0x0

#define CWG1LSAC                                 0x2
#define CWG1LSAC_address                         0x693
#define CWG1LSAC_position                        0x2
#define CWG1LSAC_size                            0x2
#define CWG1LSAC_value_mask                      0xC
#define CWG1LSAC_clear_mask                      0xF3

#define LSAC                                     0x2
#define LSAC_address                             0x693
#define LSAC_position                            0x2
#define LSAC_size                                0x2
#define LSAC_value_mask                          0xC
#define LSAC_clear_mask                          0xF3

#define LSAC0                                    0x2
#define LSAC0_address                            0x693
#define LSAC0_position                           0x2
#define LSAC0_size                               0x1
#define LSAC0_value_mask                         0x4
#define LSAC0_clear_mask                         0xFB

#define CWG1LSAC0                                0x2
#define CWG1LSAC0_address                        0x693
#define CWG1LSAC0_position                       0x2
#define CWG1LSAC0_size                           0x1
#define CWG1LSAC0_value_mask                     0x4
#define CWG1LSAC0_clear_mask                     0xFB

#define LSAC1                                    0x3
#define LSAC1_address                            0x693
#define LSAC1_position                           0x3
#define LSAC1_size                               0x1
#define LSAC1_value_mask                         0x8
#define LSAC1_clear_mask                         0xF7

#define CWG1LSAC1                                0x3
#define CWG1LSAC1_address                        0x693
#define CWG1LSAC1_position                       0x3
#define CWG1LSAC1_size                           0x1
#define CWG1LSAC1_value_mask                     0x8
#define CWG1LSAC1_clear_mask                     0xF7

#define LSBD0                                    0x4
#define LSBD0_address                            0x693
#define LSBD0_position                           0x4
#define LSBD0_size                               0x1
#define LSBD0_value_mask                         0x10
#define LSBD0_clear_mask                         0xEF

#define CWG1LSBD0                                0x4
#define CWG1LSBD0_address                        0x693
#define CWG1LSBD0_position                       0x4
#define CWG1LSBD0_size                           0x1
#define CWG1LSBD0_value_mask                     0x10
#define CWG1LSBD0_clear_mask                     0xEF

#define LSBD                                     0x4
#define LSBD_address                             0x693
#define LSBD_position                            0x4
#define LSBD_size                                0x2
#define LSBD_value_mask                          0x30
#define LSBD_clear_mask                          0xCF

#define CWG1LSBD                                 0x4
#define CWG1LSBD_address                         0x693
#define CWG1LSBD_position                        0x4
#define CWG1LSBD_size                            0x2
#define CWG1LSBD_value_mask                      0x30
#define CWG1LSBD_clear_mask                      0xCF

#define LSBD1                                    0x5
#define LSBD1_address                            0x693
#define LSBD1_position                           0x5
#define LSBD1_size                               0x1
#define LSBD1_value_mask                         0x20
#define LSBD1_clear_mask                         0xDF

#define CWG1LSBD1                                0x5
#define CWG1LSBD1_address                        0x693
#define CWG1LSBD1_position                       0x5
#define CWG1LSBD1_size                           0x1
#define CWG1LSBD1_value_mask                     0x20
#define CWG1LSBD1_clear_mask                     0xDF

#define CWG1REN                                  0x6
#define CWG1REN_address                          0x693
#define CWG1REN_position                         0x6
#define CWG1REN_size                             0x1
#define CWG1REN_value_mask                       0x40
#define CWG1REN_clear_mask                       0xBF

#define REN                                      0x6
#define REN_address                              0x693
#define REN_position                             0x6
#define REN_size                                 0x1
#define REN_value_mask                           0x40
#define REN_clear_mask                           0xBF

#define CWG1SHUTDOWN                             0x7
#define CWG1SHUTDOWN_address                     0x693
#define CWG1SHUTDOWN_position                    0x7
#define CWG1SHUTDOWN_size                        0x1
#define CWG1SHUTDOWN_value_mask                  0x80
#define CWG1SHUTDOWN_clear_mask                  0x7F

#define SHUTDOWN                                 0x7
#define SHUTDOWN_address                         0x693
#define SHUTDOWN_position                        0x7
#define SHUTDOWN_size                            0x1
#define SHUTDOWN_value_mask                      0x80
#define SHUTDOWN_clear_mask                      0x7F


/*------------------------------------------------------------------#
| CWG1AS1                                                     0x694 |
#-------------------------------------------------------------------#
| - | CWG1TMR6AS | CWG1TMR4AS | TMR2AS | - | C2AS | C1AS | CWG1INAS |
#-------------------------------------------------------------------#
| 7 | 6          | 5          | 4      | 3 | 2    | 1    | 0        |
#------------------------------------------------------------------*/

#define CWG1AS1                                  0x0
#define CWG1AS1_address                          0x694
#define CWG1AS1_position                         0x0
#define CWG1AS1_size                             0x8
#define CWG1AS1_value_mask                       0xFF
#define CWG1AS1_clear_mask                       0x0

#define INAS                                     0x0
#define INAS_address                             0x694
#define INAS_position                            0x0
#define INAS_size                                0x1
#define INAS_value_mask                          0x1
#define INAS_clear_mask                          0xFE

#define CWG1INAS                                 0x0
#define CWG1INAS_address                         0x694
#define CWG1INAS_position                        0x0
#define CWG1INAS_size                            0x1
#define CWG1INAS_value_mask                      0x1
#define CWG1INAS_clear_mask                      0xFE

#define C1AS                                     0x1
#define C1AS_address                             0x694
#define C1AS_position                            0x1
#define C1AS_size                                0x1
#define C1AS_value_mask                          0x2
#define C1AS_clear_mask                          0xFD

#define CWG1C1AS                                 0x1
#define CWG1C1AS_address                         0x694
#define CWG1C1AS_position                        0x1
#define CWG1C1AS_size                            0x1
#define CWG1C1AS_value_mask                      0x2
#define CWG1C1AS_clear_mask                      0xFD

#define C2AS                                     0x2
#define C2AS_address                             0x694
#define C2AS_position                            0x2
#define C2AS_size                                0x1
#define C2AS_value_mask                          0x4
#define C2AS_clear_mask                          0xFB

#define CWG1C2AS                                 0x2
#define CWG1C2AS_address                         0x694
#define CWG1C2AS_position                        0x2
#define CWG1C2AS_size                            0x1
#define CWG1C2AS_value_mask                      0x4
#define CWG1C2AS_clear_mask                      0xFB

#define TMR2AS                                   0x4
#define TMR2AS_address                           0x694
#define TMR2AS_position                          0x4
#define TMR2AS_size                              0x1
#define TMR2AS_value_mask                        0x10
#define TMR2AS_clear_mask                        0xEF

#define CWG1TMR2AS                               0x4
#define CWG1TMR2AS_address                       0x694
#define CWG1TMR2AS_position                      0x4
#define CWG1TMR2AS_size                          0x1
#define CWG1TMR2AS_value_mask                    0x10
#define CWG1TMR2AS_clear_mask                    0xEF

#define CWG1TMR4AS                               0x5
#define CWG1TMR4AS_address                       0x694
#define CWG1TMR4AS_position                      0x5
#define CWG1TMR4AS_size                          0x1
#define CWG1TMR4AS_value_mask                    0x20
#define CWG1TMR4AS_clear_mask                    0xDF

#define TMR4AS                                   0x5
#define TMR4AS_address                           0x694
#define TMR4AS_position                          0x5
#define TMR4AS_size                              0x1
#define TMR4AS_value_mask                        0x20
#define TMR4AS_clear_mask                        0xDF

#define CWG1TMR6AS                               0x6
#define CWG1TMR6AS_address                       0x694
#define CWG1TMR6AS_position                      0x6
#define CWG1TMR6AS_size                          0x1
#define CWG1TMR6AS_value_mask                    0x40
#define CWG1TMR6AS_clear_mask                    0xBF

#define TMR6AS                                   0x6
#define TMR6AS_address                           0x694
#define TMR6AS_position                          0x6
#define TMR6AS_size                              0x1
#define TMR6AS_value_mask                        0x40
#define TMR6AS_clear_mask                        0xBF


/*--------------------------------------------------------------#
| CWG1OCON0                                               0x695 |
#---------------------------------------------------------------#
| OVRD | OVRC | OVRB | OVRA | STRD | STRC | CWG1STRB | CWG1STRA |
#---------------------------------------------------------------#
| 7    | 6    | 5    | 4    | 3    | 2    | 1        | 0        |
#--------------------------------------------------------------*/

#define CWG1OCON0                                0x0
#define CWG1OCON0_address                        0x695
#define CWG1OCON0_position                       0x0
#define CWG1OCON0_size                           0x8
#define CWG1OCON0_value_mask                     0xFF
#define CWG1OCON0_clear_mask                     0x0

#define CWG1STRA                                 0x0
#define CWG1STRA_address                         0x695
#define CWG1STRA_position                        0x0
#define CWG1STRA_size                            0x1
#define CWG1STRA_value_mask                      0x1
#define CWG1STRA_clear_mask                      0xFE

#define STRA                                     0x0
#define STRA_address                             0x695
#define STRA_position                            0x0
#define STRA_size                                0x1
#define STRA_value_mask                          0x1
#define STRA_clear_mask                          0xFE

#define STRB                                     0x1
#define STRB_address                             0x695
#define STRB_position                            0x1
#define STRB_size                                0x1
#define STRB_value_mask                          0x2
#define STRB_clear_mask                          0xFD

#define CWG1STRB                                 0x1
#define CWG1STRB_address                         0x695
#define CWG1STRB_position                        0x1
#define CWG1STRB_size                            0x1
#define CWG1STRB_value_mask                      0x2
#define CWG1STRB_clear_mask                      0xFD

#define CWG1STRC                                 0x2
#define CWG1STRC_address                         0x695
#define CWG1STRC_position                        0x2
#define CWG1STRC_size                            0x1
#define CWG1STRC_value_mask                      0x4
#define CWG1STRC_clear_mask                      0xFB

#define STRC                                     0x2
#define STRC_address                             0x695
#define STRC_position                            0x2
#define STRC_size                                0x1
#define STRC_value_mask                          0x4
#define STRC_clear_mask                          0xFB

#define CWG1STRD                                 0x3
#define CWG1STRD_address                         0x695
#define CWG1STRD_position                        0x3
#define CWG1STRD_size                            0x1
#define CWG1STRD_value_mask                      0x8
#define CWG1STRD_clear_mask                      0xF7

#define STRD                                     0x3
#define STRD_address                             0x695
#define STRD_position                            0x3
#define STRD_size                                0x1
#define STRD_value_mask                          0x8
#define STRD_clear_mask                          0xF7

#define OVRA                                     0x4
#define OVRA_address                             0x695
#define OVRA_position                            0x4
#define OVRA_size                                0x1
#define OVRA_value_mask                          0x10
#define OVRA_clear_mask                          0xEF

#define CWG1OVRA                                 0x4
#define CWG1OVRA_address                         0x695
#define CWG1OVRA_position                        0x4
#define CWG1OVRA_size                            0x1
#define CWG1OVRA_value_mask                      0x10
#define CWG1OVRA_clear_mask                      0xEF

#define CWG1OVRB                                 0x5
#define CWG1OVRB_address                         0x695
#define CWG1OVRB_position                        0x5
#define CWG1OVRB_size                            0x1
#define CWG1OVRB_value_mask                      0x20
#define CWG1OVRB_clear_mask                      0xDF

#define OVRB                                     0x5
#define OVRB_address                             0x695
#define OVRB_position                            0x5
#define OVRB_size                                0x1
#define OVRB_value_mask                          0x20
#define OVRB_clear_mask                          0xDF

#define OVRC                                     0x6
#define OVRC_address                             0x695
#define OVRC_position                            0x6
#define OVRC_size                                0x1
#define OVRC_value_mask                          0x40
#define OVRC_clear_mask                          0xBF

#define CWG1OVRC                                 0x6
#define CWG1OVRC_address                         0x695
#define CWG1OVRC_position                        0x6
#define CWG1OVRC_size                            0x1
#define CWG1OVRC_value_mask                      0x40
#define CWG1OVRC_clear_mask                      0xBF

#define OVRD                                     0x7
#define OVRD_address                             0x695
#define OVRD_position                            0x7
#define OVRD_size                                0x1
#define OVRD_value_mask                          0x80
#define OVRD_clear_mask                          0x7F

#define CWG1OVRD                                 0x7
#define CWG1OVRD_address                         0x695
#define CWG1OVRD_position                        0x7
#define CWG1OVRD_size                            0x1
#define CWG1OVRD_value_mask                      0x80
#define CWG1OVRD_clear_mask                      0x7F


/*------------------------------------------------------------#
| CWG1CON0                                              0x696 |
#-------------------------------------------------------------#
| CWG1EN | LD | - | - | - | CWG1MODE2 | CWG1MODE1 | CWG1MODE0 |
#-------------------------------------------------------------#
| 7      | 6  | 5 | 4 | 3 | 2         | 1         | 0         |
#------------------------------------------------------------*/

#define CWG1CON0                                 0x0
#define CWG1CON0_address                         0x696
#define CWG1CON0_position                        0x0
#define CWG1CON0_size                            0x8
#define CWG1CON0_value_mask                      0xFF
#define CWG1CON0_clear_mask                      0x0

#define CWG1MODE0                                0x0
#define CWG1MODE0_address                        0x696
#define CWG1MODE0_position                       0x0
#define CWG1MODE0_size                           0x1
#define CWG1MODE0_value_mask                     0x1
#define CWG1MODE0_clear_mask                     0xFE

#define CWG1CON0_MODE0                           0x0
#define CWG1CON0_MODE0_address                   0x696
#define CWG1CON0_MODE0_position                  0x0
#define CWG1CON0_MODE0_size                      0x1
#define CWG1CON0_MODE0_value_mask                0x1
#define CWG1CON0_MODE0_clear_mask                0xFE

#define CWG1MODE                                 0x0
#define CWG1MODE_address                         0x696
#define CWG1MODE_position                        0x0
#define CWG1MODE_size                            0x3
#define CWG1MODE_value_mask                      0x7
#define CWG1MODE_clear_mask                      0xF8

#define CWG1CON0_MODE                            0x0
#define CWG1CON0_MODE_address                    0x696
#define CWG1CON0_MODE_position                   0x0
#define CWG1CON0_MODE_size                       0x3
#define CWG1CON0_MODE_value_mask                 0x7
#define CWG1CON0_MODE_clear_mask                 0xF8

#define CWG1MODE1                                0x1
#define CWG1MODE1_address                        0x696
#define CWG1MODE1_position                       0x1
#define CWG1MODE1_size                           0x1
#define CWG1MODE1_value_mask                     0x2
#define CWG1MODE1_clear_mask                     0xFD

#define CWG1CON0_MODE1                           0x1
#define CWG1CON0_MODE1_address                   0x696
#define CWG1CON0_MODE1_position                  0x1
#define CWG1CON0_MODE1_size                      0x1
#define CWG1CON0_MODE1_value_mask                0x2
#define CWG1CON0_MODE1_clear_mask                0xFD

#define CWG1MODE2                                0x2
#define CWG1MODE2_address                        0x696
#define CWG1MODE2_position                       0x2
#define CWG1MODE2_size                           0x1
#define CWG1MODE2_value_mask                     0x4
#define CWG1MODE2_clear_mask                     0xFB

#define CWG1CON0_MODE2                           0x2
#define CWG1CON0_MODE2_address                   0x696
#define CWG1CON0_MODE2_position                  0x2
#define CWG1CON0_MODE2_size                      0x1
#define CWG1CON0_MODE2_value_mask                0x4
#define CWG1CON0_MODE2_clear_mask                0xFB

#define LD                                       0x6
#define LD_address                               0x696
#define LD_position                              0x6
#define LD_size                                  0x1
#define LD_value_mask                            0x40
#define LD_clear_mask                            0xBF

#define CWG1LD                                   0x6
#define CWG1LD_address                           0x696
#define CWG1LD_position                          0x6
#define CWG1LD_size                              0x1
#define CWG1LD_value_mask                        0x40
#define CWG1LD_clear_mask                        0xBF

#define CWG1CON0_EN                              0x7
#define CWG1CON0_EN_address                      0x696
#define CWG1CON0_EN_position                     0x7
#define CWG1CON0_EN_size                         0x1
#define CWG1CON0_EN_value_mask                   0x80
#define CWG1CON0_EN_clear_mask                   0x7F

#define CWG1EN                                   0x7
#define CWG1EN_address                           0x696
#define CWG1EN_position                          0x7
#define CWG1EN_size                              0x1
#define CWG1EN_value_mask                        0x80
#define CWG1EN_clear_mask                        0x7F

#define G1EN                                     0x7
#define G1EN_address                             0x696
#define G1EN_position                            0x7
#define G1EN_size                                0x1
#define G1EN_value_mask                          0x80
#define G1EN_clear_mask                          0x7F


/*-----------------------------------------------------------#
| CWG1CON1                                             0x697 |
#------------------------------------------------------------#
| - | - | IN | - | CWG1POLD | CWG1POLC | CWG1POLB | CWG1POLA |
#------------------------------------------------------------#
| 7 | 6 | 5  | 4 | 3        | 2        | 1        | 0        |
#-----------------------------------------------------------*/

#define CWG1CON1                                 0x0
#define CWG1CON1_address                         0x697
#define CWG1CON1_position                        0x0
#define CWG1CON1_size                            0x8
#define CWG1CON1_value_mask                      0xFF
#define CWG1CON1_clear_mask                      0x0

#define CWG1POLA                                 0x0
#define CWG1POLA_address                         0x697
#define CWG1POLA_position                        0x0
#define CWG1POLA_size                            0x1
#define CWG1POLA_value_mask                      0x1
#define CWG1POLA_clear_mask                      0xFE

#define POLA                                     0x0
#define POLA_address                             0x697
#define POLA_position                            0x0
#define POLA_size                                0x1
#define POLA_value_mask                          0x1
#define POLA_clear_mask                          0xFE

#define CWG1POLB                                 0x1
#define CWG1POLB_address                         0x697
#define CWG1POLB_position                        0x1
#define CWG1POLB_size                            0x1
#define CWG1POLB_value_mask                      0x2
#define CWG1POLB_clear_mask                      0xFD

#define POLB                                     0x1
#define POLB_address                             0x697
#define POLB_position                            0x1
#define POLB_size                                0x1
#define POLB_value_mask                          0x2
#define POLB_clear_mask                          0xFD

#define CWG1POLC                                 0x2
#define CWG1POLC_address                         0x697
#define CWG1POLC_position                        0x2
#define CWG1POLC_size                            0x1
#define CWG1POLC_value_mask                      0x4
#define CWG1POLC_clear_mask                      0xFB

#define POLC                                     0x2
#define POLC_address                             0x697
#define POLC_position                            0x2
#define POLC_size                                0x1
#define POLC_value_mask                          0x4
#define POLC_clear_mask                          0xFB

#define CWG1POLD                                 0x3
#define CWG1POLD_address                         0x697
#define CWG1POLD_position                        0x3
#define CWG1POLD_size                            0x1
#define CWG1POLD_value_mask                      0x8
#define CWG1POLD_clear_mask                      0xF7

#define POLD                                     0x3
#define POLD_address                             0x697
#define POLD_position                            0x3
#define POLD_size                                0x1
#define POLD_value_mask                          0x8
#define POLD_clear_mask                          0xF7

#define IN                                       0x5
#define IN_address                               0x697
#define IN_position                              0x5
#define IN_size                                  0x1
#define IN_value_mask                            0x20
#define IN_clear_mask                            0xDF

#define CWG1IN                                   0x5
#define CWG1IN_address                           0x697
#define CWG1IN_position                          0x5
#define CWG1IN_size                              0x1
#define CWG1IN_value_mask                        0x20
#define CWG1IN_clear_mask                        0xDF


/*------------------------------------------------------#
| CWG1OCON1                                       0x698 |
#-------------------------------------------------------#
| - | - | - | - | CWG1OED | CWG1OEC | CWG1OEB | CWG1OEA |
#-------------------------------------------------------#
| 7 | 6 | 5 | 4 | 3       | 2       | 1       | 0       |
#------------------------------------------------------*/

#define CWG1OCON1                                0x0
#define CWG1OCON1_address                        0x698
#define CWG1OCON1_position                       0x0
#define CWG1OCON1_size                           0x8
#define CWG1OCON1_value_mask                     0xFF
#define CWG1OCON1_clear_mask                     0x0

#define CWG1OEA                                  0x0
#define CWG1OEA_address                          0x698
#define CWG1OEA_position                         0x0
#define CWG1OEA_size                             0x1
#define CWG1OEA_value_mask                       0x1
#define CWG1OEA_clear_mask                       0xFE

#define OEA                                      0x0
#define OEA_address                              0x698
#define OEA_position                             0x0
#define OEA_size                                 0x1
#define OEA_value_mask                           0x1
#define OEA_clear_mask                           0xFE

#define CWG1OEB                                  0x1
#define CWG1OEB_address                          0x698
#define CWG1OEB_position                         0x1
#define CWG1OEB_size                             0x1
#define CWG1OEB_value_mask                       0x2
#define CWG1OEB_clear_mask                       0xFD

#define OEB                                      0x1
#define OEB_address                              0x698
#define OEB_position                             0x1
#define OEB_size                                 0x1
#define OEB_value_mask                           0x2
#define OEB_clear_mask                           0xFD

#define CWG1OEC                                  0x2
#define CWG1OEC_address                          0x698
#define CWG1OEC_position                         0x2
#define CWG1OEC_size                             0x1
#define CWG1OEC_value_mask                       0x4
#define CWG1OEC_clear_mask                       0xFB

#define OEC                                      0x2
#define OEC_address                              0x698
#define OEC_position                             0x2
#define OEC_size                                 0x1
#define OEC_value_mask                           0x4
#define OEC_clear_mask                           0xFB

#define CWG1OED                                  0x3
#define CWG1OED_address                          0x698
#define CWG1OED_position                         0x3
#define CWG1OED_size                             0x1
#define CWG1OED_value_mask                       0x8
#define CWG1OED_clear_mask                       0xF7

#define OED                                      0x3
#define OED_address                              0x698
#define OED_position                             0x3
#define OED_size                                 0x1
#define OED_value_mask                           0x8
#define OED_clear_mask                           0xF7


/*-------------------------------#
| CWG1CLKCON               0x699 |
#--------------------------------#
| - | - | - | - | - | - | - | CS |
#--------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0  |
#-------------------------------*/

#define CWG1CLKCON                               0x0
#define CWG1CLKCON_address                       0x699
#define CWG1CLKCON_position                      0x0
#define CWG1CLKCON_size                          0x8
#define CWG1CLKCON_value_mask                    0xFF
#define CWG1CLKCON_clear_mask                    0x0

#define CS                                       0x0
#define CS_address                               0x699
#define CS_position                              0x0
#define CS_size                                  0x1
#define CS_value_mask                            0x1
#define CS_clear_mask                            0xFE

#define CWG1CS                                   0x0
#define CWG1CS_address                           0x699
#define CWG1CS_position                          0x0
#define CWG1CS_size                              0x1
#define CWG1CS_value_mask                        0x1
#define CWG1CS_clear_mask                        0xFE


/*----------------------------------------#
| CWG1ISM                           0x69A |
#-----------------------------------------#
| - | - | - | - | - | IS2 | CWG1IS1 | IS0 |
#-----------------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2   | 1       | 0   |
#----------------------------------------*/

#define CWG1ISM                                  0x0
#define CWG1ISM_address                          0x69A
#define CWG1ISM_position                         0x0
#define CWG1ISM_size                             0x8
#define CWG1ISM_value_mask                       0xFF
#define CWG1ISM_clear_mask                       0x0

#define CWG1IS                                   0x0
#define CWG1IS_address                           0x69A
#define CWG1IS_position                          0x0
#define CWG1IS_size                              0x8
#define CWG1IS_value_mask                        0xFF
#define CWG1IS_clear_mask                        0x0

#define IS                                       0x0
#define IS_address                               0x69A
#define IS_position                              0x0
#define IS_size                                  0x8
#define IS_value_mask                            0xFF
#define IS_clear_mask                            0x0

#define IS0                                      0x0
#define IS0_address                              0x69A
#define IS0_position                             0x0
#define IS0_size                                 0x1
#define IS0_value_mask                           0x1
#define IS0_clear_mask                           0xFE

#define CWG1IS0                                  0x0
#define CWG1IS0_address                          0x69A
#define CWG1IS0_position                         0x0
#define CWG1IS0_size                             0x1
#define CWG1IS0_value_mask                       0x1
#define CWG1IS0_clear_mask                       0xFE

#define CWG1IS1                                  0x1
#define CWG1IS1_address                          0x69A
#define CWG1IS1_position                         0x1
#define CWG1IS1_size                             0x1
#define CWG1IS1_value_mask                       0x2
#define CWG1IS1_clear_mask                       0xFD

#define IS1                                      0x1
#define IS1_address                              0x69A
#define IS1_position                             0x1
#define IS1_size                                 0x1
#define IS1_value_mask                           0x2
#define IS1_clear_mask                           0xFD

#define IS2                                      0x2
#define IS2_address                              0x69A
#define IS2_position                             0x2
#define IS2_size                                 0x1
#define IS2_value_mask                           0x4
#define IS2_clear_mask                           0xFB

#define CWG1IS2                                  0x2
#define CWG1IS2_address                          0x69A
#define CWG1IS2_position                         0x2
#define CWG1IS2_size                             0x1
#define CWG1IS2_value_mask                       0x4
#define CWG1IS2_clear_mask                       0xFB


/*------------------------------------------------------------#
| WDTCON0                                               0x711 |
#-------------------------------------------------------------#
| - | - | WDTPS4 | WDTPS3 | WDTPS2 | WDTPS1 | WDTPS0 | SWDTEN |
#-------------------------------------------------------------#
| 7 | 6 | 5      | 4      | 3      | 2      | 1      | 0      |
#------------------------------------------------------------*/

#define WDTCON0                                  0x0
#define WDTCON0_address                          0x711
#define WDTCON0_position                         0x0
#define WDTCON0_size                             0x8
#define WDTCON0_value_mask                       0xFF
#define WDTCON0_clear_mask                       0x0

#define SWDTEN                                   0x0
#define SWDTEN_address                           0x711
#define SWDTEN_position                          0x0
#define SWDTEN_size                              0x1
#define SWDTEN_value_mask                        0x1
#define SWDTEN_clear_mask                        0xFE

#define SEN                                      0x0
#define SEN_address                              0x711
#define SEN_position                             0x0
#define SEN_size                                 0x1
#define SEN_value_mask                           0x1
#define SEN_clear_mask                           0xFE

#define WDTSEN                                   0x0
#define WDTSEN_address                           0x711
#define WDTSEN_position                          0x0
#define WDTSEN_size                              0x1
#define WDTSEN_value_mask                        0x1
#define WDTSEN_clear_mask                        0xFE

#define WDTPS                                    0x1
#define WDTPS_address                            0x711
#define WDTPS_position                           0x1
#define WDTPS_size                               0x5
#define WDTPS_value_mask                         0x3E
#define WDTPS_clear_mask                         0xC1

#define WDTPS0                                   0x1
#define WDTPS0_address                           0x711
#define WDTPS0_position                          0x1
#define WDTPS0_size                              0x1
#define WDTPS0_value_mask                        0x2
#define WDTPS0_clear_mask                        0xFD

#define WDTPS1                                   0x2
#define WDTPS1_address                           0x711
#define WDTPS1_position                          0x2
#define WDTPS1_size                              0x1
#define WDTPS1_value_mask                        0x4
#define WDTPS1_clear_mask                        0xFB

#define WDTPS2                                   0x3
#define WDTPS2_address                           0x711
#define WDTPS2_position                          0x3
#define WDTPS2_size                              0x1
#define WDTPS2_value_mask                        0x8
#define WDTPS2_clear_mask                        0xF7

#define WDTPS3                                   0x4
#define WDTPS3_address                           0x711
#define WDTPS3_position                          0x4
#define WDTPS3_size                              0x1
#define WDTPS3_value_mask                        0x10
#define WDTPS3_clear_mask                        0xEF

#define WDTPS4                                   0x5
#define WDTPS4_address                           0x711
#define WDTPS4_position                          0x5
#define WDTPS4_size                              0x1
#define WDTPS4_value_mask                        0x20
#define WDTPS4_clear_mask                        0xDF


/*------------------------------------------------------------------------#
| WDTCON1                                                           0x712 |
#-------------------------------------------------------------------------#
| - | WDTCS2 | WDTCS1 | WDTCS0 | - | WDTWINDOW2 | WDTWINDOW1 | WDTWINDOW0 |
#-------------------------------------------------------------------------#
| 7 | 6      | 5      | 4      | 3 | 2          | 1          | 0          |
#------------------------------------------------------------------------*/

#define WDTCON1                                  0x0
#define WDTCON1_address                          0x712
#define WDTCON1_position                         0x0
#define WDTCON1_size                             0x8
#define WDTCON1_value_mask                       0xFF
#define WDTCON1_clear_mask                       0x0

#define WDTWINDOW0                               0x0
#define WDTWINDOW0_address                       0x712
#define WDTWINDOW0_position                      0x0
#define WDTWINDOW0_size                          0x1
#define WDTWINDOW0_value_mask                    0x1
#define WDTWINDOW0_clear_mask                    0xFE

#define WINDOW0                                  0x0
#define WINDOW0_address                          0x712
#define WINDOW0_position                         0x0
#define WINDOW0_size                             0x1
#define WINDOW0_value_mask                       0x1
#define WINDOW0_clear_mask                       0xFE

#define WINDOW                                   0x0
#define WINDOW_address                           0x712
#define WINDOW_position                          0x0
#define WINDOW_size                              0x3
#define WINDOW_value_mask                        0x7
#define WINDOW_clear_mask                        0xF8

#define WDTWINDOW                                0x0
#define WDTWINDOW_address                        0x712
#define WDTWINDOW_position                       0x0
#define WDTWINDOW_size                           0x3
#define WDTWINDOW_value_mask                     0x7
#define WDTWINDOW_clear_mask                     0xF8

#define WDTWINDOW1                               0x1
#define WDTWINDOW1_address                       0x712
#define WDTWINDOW1_position                      0x1
#define WDTWINDOW1_size                          0x1
#define WDTWINDOW1_value_mask                    0x2
#define WDTWINDOW1_clear_mask                    0xFD

#define WINDOW1                                  0x1
#define WINDOW1_address                          0x712
#define WINDOW1_position                         0x1
#define WINDOW1_size                             0x1
#define WINDOW1_value_mask                       0x2
#define WINDOW1_clear_mask                       0xFD

#define WDTWINDOW2                               0x2
#define WDTWINDOW2_address                       0x712
#define WDTWINDOW2_position                      0x2
#define WDTWINDOW2_size                          0x1
#define WDTWINDOW2_value_mask                    0x4
#define WDTWINDOW2_clear_mask                    0xFB

#define WINDOW2                                  0x2
#define WINDOW2_address                          0x712
#define WINDOW2_position                         0x2
#define WINDOW2_size                             0x1
#define WINDOW2_value_mask                       0x4
#define WINDOW2_clear_mask                       0xFB

#define WDTCS                                    0x4
#define WDTCS_address                            0x712
#define WDTCS_position                           0x4
#define WDTCS_size                               0x3
#define WDTCS_value_mask                         0x70
#define WDTCS_clear_mask                         0x8F

#define WDTCS0                                   0x4
#define WDTCS0_address                           0x712
#define WDTCS0_position                          0x4
#define WDTCS0_size                              0x1
#define WDTCS0_value_mask                        0x10
#define WDTCS0_clear_mask                        0xEF

#define WDTCS1                                   0x5
#define WDTCS1_address                           0x712
#define WDTCS1_position                          0x5
#define WDTCS1_size                              0x1
#define WDTCS1_value_mask                        0x20
#define WDTCS1_clear_mask                        0xDF

#define WDTCS2                                   0x6
#define WDTCS2_address                           0x712
#define WDTCS2_position                          0x6
#define WDTCS2_size                              0x1
#define WDTCS2_value_mask                        0x40
#define WDTCS2_clear_mask                        0xBF


/*----------------------------------------------------------------------------------------------#
| WDTPSL                                                                                  0x713 |
#-----------------------------------------------------------------------------------------------#
| WDTPSCNT7 | WDTPSCNT6 | WDTPSCNT5 | WDTPSCNT4 | WDTPSCNT3 | WDTPSCNT2 | WDTPSCNT1 | WDTPSCNT0 |
#-----------------------------------------------------------------------------------------------#
| 7         | 6         | 5         | 4         | 3         | 2         | 1         | 0         |
#----------------------------------------------------------------------------------------------*/

#define WDTPSL                                   0x0
#define WDTPSL_address                           0x713
#define WDTPSL_position                          0x0
#define WDTPSL_size                              0x8
#define WDTPSL_value_mask                        0xFF
#define WDTPSL_clear_mask                        0x0

#define WDTPSL_WDTPSCNT                          0x0
#define WDTPSL_WDTPSCNT_address                  0x713
#define WDTPSL_WDTPSCNT_position                 0x0
#define WDTPSL_WDTPSCNT_size                     0x8
#define WDTPSL_WDTPSCNT_value_mask               0xFF
#define WDTPSL_WDTPSCNT_clear_mask               0x0

#define WDTPSL_PSCNT                             0x0
#define WDTPSL_PSCNT_address                     0x713
#define WDTPSL_PSCNT_position                    0x0
#define WDTPSL_PSCNT_size                        0x8
#define WDTPSL_PSCNT_value_mask                  0xFF
#define WDTPSL_PSCNT_clear_mask                  0x0

#define WDTPSCNT0                                0x0
#define WDTPSCNT0_address                        0x713
#define WDTPSCNT0_position                       0x0
#define WDTPSCNT0_size                           0x1
#define WDTPSCNT0_value_mask                     0x1
#define WDTPSCNT0_clear_mask                     0xFE

#define PSCNT0                                   0x0
#define PSCNT0_address                           0x713
#define PSCNT0_position                          0x0
#define PSCNT0_size                              0x1
#define PSCNT0_value_mask                        0x1
#define PSCNT0_clear_mask                        0xFE

#define WDTPSCNT1                                0x1
#define WDTPSCNT1_address                        0x713
#define WDTPSCNT1_position                       0x1
#define WDTPSCNT1_size                           0x1
#define WDTPSCNT1_value_mask                     0x2
#define WDTPSCNT1_clear_mask                     0xFD

#define PSCNT1                                   0x1
#define PSCNT1_address                           0x713
#define PSCNT1_position                          0x1
#define PSCNT1_size                              0x1
#define PSCNT1_value_mask                        0x2
#define PSCNT1_clear_mask                        0xFD

#define WDTPSCNT2                                0x2
#define WDTPSCNT2_address                        0x713
#define WDTPSCNT2_position                       0x2
#define WDTPSCNT2_size                           0x1
#define WDTPSCNT2_value_mask                     0x4
#define WDTPSCNT2_clear_mask                     0xFB

#define PSCNT2                                   0x2
#define PSCNT2_address                           0x713
#define PSCNT2_position                          0x2
#define PSCNT2_size                              0x1
#define PSCNT2_value_mask                        0x4
#define PSCNT2_clear_mask                        0xFB

#define WDTPSCNT3                                0x3
#define WDTPSCNT3_address                        0x713
#define WDTPSCNT3_position                       0x3
#define WDTPSCNT3_size                           0x1
#define WDTPSCNT3_value_mask                     0x8
#define WDTPSCNT3_clear_mask                     0xF7

#define PSCNT3                                   0x3
#define PSCNT3_address                           0x713
#define PSCNT3_position                          0x3
#define PSCNT3_size                              0x1
#define PSCNT3_value_mask                        0x8
#define PSCNT3_clear_mask                        0xF7

#define WDTPSCNT4                                0x4
#define WDTPSCNT4_address                        0x713
#define WDTPSCNT4_position                       0x4
#define WDTPSCNT4_size                           0x1
#define WDTPSCNT4_value_mask                     0x10
#define WDTPSCNT4_clear_mask                     0xEF

#define PSCNT4                                   0x4
#define PSCNT4_address                           0x713
#define PSCNT4_position                          0x4
#define PSCNT4_size                              0x1
#define PSCNT4_value_mask                        0x10
#define PSCNT4_clear_mask                        0xEF

#define WDTPSCNT5                                0x5
#define WDTPSCNT5_address                        0x713
#define WDTPSCNT5_position                       0x5
#define WDTPSCNT5_size                           0x1
#define WDTPSCNT5_value_mask                     0x20
#define WDTPSCNT5_clear_mask                     0xDF

#define PSCNT5                                   0x5
#define PSCNT5_address                           0x713
#define PSCNT5_position                          0x5
#define PSCNT5_size                              0x1
#define PSCNT5_value_mask                        0x20
#define PSCNT5_clear_mask                        0xDF

#define WDTPSCNT6                                0x6
#define WDTPSCNT6_address                        0x713
#define WDTPSCNT6_position                       0x6
#define WDTPSCNT6_size                           0x1
#define WDTPSCNT6_value_mask                     0x40
#define WDTPSCNT6_clear_mask                     0xBF

#define PSCNT6                                   0x6
#define PSCNT6_address                           0x713
#define PSCNT6_position                          0x6
#define PSCNT6_size                              0x1
#define PSCNT6_value_mask                        0x40
#define PSCNT6_clear_mask                        0xBF

#define WDTPSCNT7                                0x7
#define WDTPSCNT7_address                        0x713
#define WDTPSCNT7_position                       0x7
#define WDTPSCNT7_size                           0x1
#define WDTPSCNT7_value_mask                     0x80
#define WDTPSCNT7_clear_mask                     0x7F

#define PSCNT7                                   0x7
#define PSCNT7_address                           0x713
#define PSCNT7_position                          0x7
#define PSCNT7_size                              0x1
#define PSCNT7_value_mask                        0x80
#define PSCNT7_clear_mask                        0x7F


/*----------------------------------------------------------------------------#
| WDTPSH                                                                0x714 |
#-----------------------------------------------------------------------------#
| PSCNT15 | PSCNT14 | PSCNT13 | PSCNT12 | PSCNT11 | PSCNT10 | PSCNT9 | PSCNT8 |
#-----------------------------------------------------------------------------#
| 7       | 6       | 5       | 4       | 3       | 2       | 1      | 0      |
#----------------------------------------------------------------------------*/

#define WDTPSH                                   0x0
#define WDTPSH_address                           0x714
#define WDTPSH_position                          0x0
#define WDTPSH_size                              0x8
#define WDTPSH_value_mask                        0xFF
#define WDTPSH_clear_mask                        0x0

#define PSCNT8                                   0x0
#define PSCNT8_address                           0x714
#define PSCNT8_position                          0x0
#define PSCNT8_size                              0x1
#define PSCNT8_value_mask                        0x1
#define PSCNT8_clear_mask                        0xFE

#define WDTPSH_WDTPSCNT                          0x0
#define WDTPSH_WDTPSCNT_address                  0x714
#define WDTPSH_WDTPSCNT_position                 0x0
#define WDTPSH_WDTPSCNT_size                     0x8
#define WDTPSH_WDTPSCNT_value_mask               0xFF
#define WDTPSH_WDTPSCNT_clear_mask               0x0

#define WDTPSH_PSCNT                             0x0
#define WDTPSH_PSCNT_address                     0x714
#define WDTPSH_PSCNT_position                    0x0
#define WDTPSH_PSCNT_size                        0x8
#define WDTPSH_PSCNT_value_mask                  0xFF
#define WDTPSH_PSCNT_clear_mask                  0x0

#define WDTPSCNT8                                0x0
#define WDTPSCNT8_address                        0x714
#define WDTPSCNT8_position                       0x0
#define WDTPSCNT8_size                           0x1
#define WDTPSCNT8_value_mask                     0x1
#define WDTPSCNT8_clear_mask                     0xFE

#define PSCNT9                                   0x1
#define PSCNT9_address                           0x714
#define PSCNT9_position                          0x1
#define PSCNT9_size                              0x1
#define PSCNT9_value_mask                        0x2
#define PSCNT9_clear_mask                        0xFD

#define WDTPSCNT9                                0x1
#define WDTPSCNT9_address                        0x714
#define WDTPSCNT9_position                       0x1
#define WDTPSCNT9_size                           0x1
#define WDTPSCNT9_value_mask                     0x2
#define WDTPSCNT9_clear_mask                     0xFD

#define PSCNT10                                  0x2
#define PSCNT10_address                          0x714
#define PSCNT10_position                         0x2
#define PSCNT10_size                             0x1
#define PSCNT10_value_mask                       0x4
#define PSCNT10_clear_mask                       0xFB

#define WDTPSCNT10                               0x2
#define WDTPSCNT10_address                       0x714
#define WDTPSCNT10_position                      0x2
#define WDTPSCNT10_size                          0x1
#define WDTPSCNT10_value_mask                    0x4
#define WDTPSCNT10_clear_mask                    0xFB

#define PSCNT11                                  0x3
#define PSCNT11_address                          0x714
#define PSCNT11_position                         0x3
#define PSCNT11_size                             0x1
#define PSCNT11_value_mask                       0x8
#define PSCNT11_clear_mask                       0xF7

#define WDTPSCNT11                               0x3
#define WDTPSCNT11_address                       0x714
#define WDTPSCNT11_position                      0x3
#define WDTPSCNT11_size                          0x1
#define WDTPSCNT11_value_mask                    0x8
#define WDTPSCNT11_clear_mask                    0xF7

#define PSCNT12                                  0x4
#define PSCNT12_address                          0x714
#define PSCNT12_position                         0x4
#define PSCNT12_size                             0x1
#define PSCNT12_value_mask                       0x10
#define PSCNT12_clear_mask                       0xEF

#define WDTPSCNT12                               0x4
#define WDTPSCNT12_address                       0x714
#define WDTPSCNT12_position                      0x4
#define WDTPSCNT12_size                          0x1
#define WDTPSCNT12_value_mask                    0x10
#define WDTPSCNT12_clear_mask                    0xEF

#define PSCNT13                                  0x5
#define PSCNT13_address                          0x714
#define PSCNT13_position                         0x5
#define PSCNT13_size                             0x1
#define PSCNT13_value_mask                       0x20
#define PSCNT13_clear_mask                       0xDF

#define WDTPSCNT13                               0x5
#define WDTPSCNT13_address                       0x714
#define WDTPSCNT13_position                      0x5
#define WDTPSCNT13_size                          0x1
#define WDTPSCNT13_value_mask                    0x20
#define WDTPSCNT13_clear_mask                    0xDF

#define PSCNT14                                  0x6
#define PSCNT14_address                          0x714
#define PSCNT14_position                         0x6
#define PSCNT14_size                             0x1
#define PSCNT14_value_mask                       0x40
#define PSCNT14_clear_mask                       0xBF

#define WDTPSCNT14                               0x6
#define WDTPSCNT14_address                       0x714
#define WDTPSCNT14_position                      0x6
#define WDTPSCNT14_size                          0x1
#define WDTPSCNT14_value_mask                    0x40
#define WDTPSCNT14_clear_mask                    0xBF

#define PSCNT15                                  0x7
#define PSCNT15_address                          0x714
#define PSCNT15_position                         0x7
#define PSCNT15_size                             0x1
#define PSCNT15_value_mask                       0x80
#define PSCNT15_clear_mask                       0x7F

#define WDTPSCNT15                               0x7
#define WDTPSCNT15_address                       0x714
#define WDTPSCNT15_position                      0x7
#define WDTPSCNT15_size                          0x1
#define WDTPSCNT15_value_mask                    0x80
#define WDTPSCNT15_clear_mask                    0x7F


/*-------------------------------------------------------------------------------#
| WDTTMR                                                                   0x715 |
#--------------------------------------------------------------------------------#
| WDTTMR4 | WDTTMR3 | WDTTMR2 | WDTTMR1 | WDTTMR0 | STATE | WDTPSCNT17 | PSCNT16 |
#--------------------------------------------------------------------------------#
| 7       | 6       | 5       | 4       | 3       | 2     | 1          | 0       |
#-------------------------------------------------------------------------------*/

#define PSCNT16                                  0x0
#define PSCNT16_address                          0x715
#define PSCNT16_position                         0x0
#define PSCNT16_size                             0x1
#define PSCNT16_value_mask                       0x1
#define PSCNT16_clear_mask                       0xFE

#define WDTPSCNT16                               0x0
#define WDTPSCNT16_address                       0x715
#define WDTPSCNT16_position                      0x0
#define WDTPSCNT16_size                          0x1
#define WDTPSCNT16_value_mask                    0x1
#define WDTPSCNT16_clear_mask                    0xFE

#define WDTPSCNT17                               0x1
#define WDTPSCNT17_address                       0x715
#define WDTPSCNT17_position                      0x1
#define WDTPSCNT17_size                          0x1
#define WDTPSCNT17_value_mask                    0x2
#define WDTPSCNT17_clear_mask                    0xFD

#define PSCNT17                                  0x1
#define PSCNT17_address                          0x715
#define PSCNT17_position                         0x1
#define PSCNT17_size                             0x1
#define PSCNT17_value_mask                       0x2
#define PSCNT17_clear_mask                       0xFD

#define STATE                                    0x2
#define STATE_address                            0x715
#define STATE_position                           0x2
#define STATE_size                               0x1
#define STATE_value_mask                         0x4
#define STATE_clear_mask                         0xFB

#define WDTSTATE                                 0x2
#define WDTSTATE_address                         0x715
#define WDTSTATE_position                        0x2
#define WDTSTATE_size                            0x1
#define WDTSTATE_value_mask                      0x4
#define WDTSTATE_clear_mask                      0xFB

#define WDTTMR                                   0x3
#define WDTTMR_address                           0x715
#define WDTTMR_position                          0x3
#define WDTTMR_size                              0x5
#define WDTTMR_value_mask                        0xF8
#define WDTTMR_clear_mask                        0x7

#define WDTTMR0                                  0x3
#define WDTTMR0_address                          0x715
#define WDTTMR0_position                         0x3
#define WDTTMR0_size                             0x1
#define WDTTMR0_value_mask                       0x8
#define WDTTMR0_clear_mask                       0xF7

#define WDTTMR1                                  0x4
#define WDTTMR1_address                          0x715
#define WDTTMR1_position                         0x4
#define WDTTMR1_size                             0x1
#define WDTTMR1_value_mask                       0x10
#define WDTTMR1_clear_mask                       0xEF

#define WDTTMR2                                  0x5
#define WDTTMR2_address                          0x715
#define WDTTMR2_position                         0x5
#define WDTTMR2_size                             0x1
#define WDTTMR2_value_mask                       0x20
#define WDTTMR2_clear_mask                       0xDF

#define WDTTMR3                                  0x6
#define WDTTMR3_address                          0x715
#define WDTTMR3_position                         0x6
#define WDTTMR3_size                             0x1
#define WDTTMR3_value_mask                       0x40
#define WDTTMR3_clear_mask                       0xBF

#define WDTTMR4                                  0x7
#define WDTTMR4_address                          0x715
#define WDTTMR4_position                         0x7
#define WDTTMR4_size                             0x1
#define WDTTMR4_value_mask                       0x80
#define WDTTMR4_clear_mask                       0x7F


/*--------------------------------------------------------------#
| SCANLADRL                                               0x718 |
#---------------------------------------------------------------#
| LADR7 | LADR6 | LADR5 | LADR4 | LADR3 | LADR2 | LDAR1 | LDAR0 |
#---------------------------------------------------------------#
| 7     | 6     | 5     | 4     | 3     | 2     | 1     | 0     |
#--------------------------------------------------------------*/

#define SCANLADRL                                0x0
#define SCANLADRL_address                        0x718
#define SCANLADRL_position                       0x0
#define SCANLADRL_size                           0x8
#define SCANLADRL_value_mask                     0xFF
#define SCANLADRL_clear_mask                     0x0

#define SCANLADRL_LADR                           0x0
#define SCANLADRL_LADR_address                   0x718
#define SCANLADRL_LADR_position                  0x0
#define SCANLADRL_LADR_size                      0x8
#define SCANLADRL_LADR_value_mask                0xFF
#define SCANLADRL_LADR_clear_mask                0x0

#define LDAR0                                    0x0
#define LDAR0_address                            0x718
#define LDAR0_position                           0x0
#define LDAR0_size                               0x1
#define LDAR0_value_mask                         0x1
#define LDAR0_clear_mask                         0xFE

#define SCANLADRL_SCANLADR                       0x0
#define SCANLADRL_SCANLADR_address               0x718
#define SCANLADRL_SCANLADR_position              0x0
#define SCANLADRL_SCANLADR_size                  0x8
#define SCANLADRL_SCANLADR_value_mask            0xFF
#define SCANLADRL_SCANLADR_clear_mask            0x0

#define SCANLADR0                                0x0
#define SCANLADR0_address                        0x718
#define SCANLADR0_position                       0x0
#define SCANLADR0_size                           0x1
#define SCANLADR0_value_mask                     0x1
#define SCANLADR0_clear_mask                     0xFE

#define SCANLADR1                                0x1
#define SCANLADR1_address                        0x718
#define SCANLADR1_position                       0x1
#define SCANLADR1_size                           0x1
#define SCANLADR1_value_mask                     0x2
#define SCANLADR1_clear_mask                     0xFD

#define LDAR1                                    0x1
#define LDAR1_address                            0x718
#define LDAR1_position                           0x1
#define LDAR1_size                               0x1
#define LDAR1_value_mask                         0x2
#define LDAR1_clear_mask                         0xFD

#define LADR2                                    0x2
#define LADR2_address                            0x718
#define LADR2_position                           0x2
#define LADR2_size                               0x1
#define LADR2_value_mask                         0x4
#define LADR2_clear_mask                         0xFB

#define SCANLADR2                                0x2
#define SCANLADR2_address                        0x718
#define SCANLADR2_position                       0x2
#define SCANLADR2_size                           0x1
#define SCANLADR2_value_mask                     0x4
#define SCANLADR2_clear_mask                     0xFB

#define LADR3                                    0x3
#define LADR3_address                            0x718
#define LADR3_position                           0x3
#define LADR3_size                               0x1
#define LADR3_value_mask                         0x8
#define LADR3_clear_mask                         0xF7

#define SCANLADR3                                0x3
#define SCANLADR3_address                        0x718
#define SCANLADR3_position                       0x3
#define SCANLADR3_size                           0x1
#define SCANLADR3_value_mask                     0x8
#define SCANLADR3_clear_mask                     0xF7

#define LADR4                                    0x4
#define LADR4_address                            0x718
#define LADR4_position                           0x4
#define LADR4_size                               0x1
#define LADR4_value_mask                         0x10
#define LADR4_clear_mask                         0xEF

#define SCANLADR4                                0x4
#define SCANLADR4_address                        0x718
#define SCANLADR4_position                       0x4
#define SCANLADR4_size                           0x1
#define SCANLADR4_value_mask                     0x10
#define SCANLADR4_clear_mask                     0xEF

#define LADR5                                    0x5
#define LADR5_address                            0x718
#define LADR5_position                           0x5
#define LADR5_size                               0x1
#define LADR5_value_mask                         0x20
#define LADR5_clear_mask                         0xDF

#define SCANLADR5                                0x5
#define SCANLADR5_address                        0x718
#define SCANLADR5_position                       0x5
#define SCANLADR5_size                           0x1
#define SCANLADR5_value_mask                     0x20
#define SCANLADR5_clear_mask                     0xDF

#define SCANLADR6                                0x6
#define SCANLADR6_address                        0x718
#define SCANLADR6_position                       0x6
#define SCANLADR6_size                           0x1
#define SCANLADR6_value_mask                     0x40
#define SCANLADR6_clear_mask                     0xBF

#define LADR6                                    0x6
#define LADR6_address                            0x718
#define LADR6_position                           0x6
#define LADR6_size                               0x1
#define LADR6_value_mask                         0x40
#define LADR6_clear_mask                         0xBF

#define LADR7                                    0x7
#define LADR7_address                            0x718
#define LADR7_position                           0x7
#define LADR7_size                               0x1
#define LADR7_value_mask                         0x80
#define LADR7_clear_mask                         0x7F

#define SCANLADR7                                0x7
#define SCANLADR7_address                        0x718
#define SCANLADR7_position                       0x7
#define SCANLADR7_size                           0x1
#define SCANLADR7_value_mask                     0x80
#define SCANLADR7_clear_mask                     0x7F


/*--------------------------------------------------------------------#
| SCANLADRH                                                     0x719 |
#---------------------------------------------------------------------#
| LADR15 | LADR14 | LADR13 | LADR12 | LADR11 | LADR10 | LADR9 | LADR8 |
#---------------------------------------------------------------------#
| 7      | 6      | 5      | 4      | 3      | 2      | 1     | 0     |
#--------------------------------------------------------------------*/

#define SCANLADRH                                0x0
#define SCANLADRH_address                        0x719
#define SCANLADRH_position                       0x0
#define SCANLADRH_size                           0x8
#define SCANLADRH_value_mask                     0xFF
#define SCANLADRH_clear_mask                     0x0

#define LADR8                                    0x0
#define LADR8_address                            0x719
#define LADR8_position                           0x0
#define LADR8_size                               0x1
#define LADR8_value_mask                         0x1
#define LADR8_clear_mask                         0xFE

#define SCANLADRH_SCANLADR                       0x0
#define SCANLADRH_SCANLADR_address               0x719
#define SCANLADRH_SCANLADR_position              0x0
#define SCANLADRH_SCANLADR_size                  0x8
#define SCANLADRH_SCANLADR_value_mask            0xFF
#define SCANLADRH_SCANLADR_clear_mask            0x0

#define SCANLADR8                                0x0
#define SCANLADR8_address                        0x719
#define SCANLADR8_position                       0x0
#define SCANLADR8_size                           0x1
#define SCANLADR8_value_mask                     0x1
#define SCANLADR8_clear_mask                     0xFE

#define SCANLADRH_LADR                           0x0
#define SCANLADRH_LADR_address                   0x719
#define SCANLADRH_LADR_position                  0x0
#define SCANLADRH_LADR_size                      0x8
#define SCANLADRH_LADR_value_mask                0xFF
#define SCANLADRH_LADR_clear_mask                0x0

#define LADR9                                    0x1
#define LADR9_address                            0x719
#define LADR9_position                           0x1
#define LADR9_size                               0x1
#define LADR9_value_mask                         0x2
#define LADR9_clear_mask                         0xFD

#define SCANLADR9                                0x1
#define SCANLADR9_address                        0x719
#define SCANLADR9_position                       0x1
#define SCANLADR9_size                           0x1
#define SCANLADR9_value_mask                     0x2
#define SCANLADR9_clear_mask                     0xFD

#define LADR10                                   0x2
#define LADR10_address                           0x719
#define LADR10_position                          0x2
#define LADR10_size                              0x1
#define LADR10_value_mask                        0x4
#define LADR10_clear_mask                        0xFB

#define SCANLADR10                               0x2
#define SCANLADR10_address                       0x719
#define SCANLADR10_position                      0x2
#define SCANLADR10_size                          0x1
#define SCANLADR10_value_mask                    0x4
#define SCANLADR10_clear_mask                    0xFB

#define SCANLADR11                               0x3
#define SCANLADR11_address                       0x719
#define SCANLADR11_position                      0x3
#define SCANLADR11_size                          0x1
#define SCANLADR11_value_mask                    0x8
#define SCANLADR11_clear_mask                    0xF7

#define LADR11                                   0x3
#define LADR11_address                           0x719
#define LADR11_position                          0x3
#define LADR11_size                              0x1
#define LADR11_value_mask                        0x8
#define LADR11_clear_mask                        0xF7

#define LADR12                                   0x4
#define LADR12_address                           0x719
#define LADR12_position                          0x4
#define LADR12_size                              0x1
#define LADR12_value_mask                        0x10
#define LADR12_clear_mask                        0xEF

#define SCANLADR12                               0x4
#define SCANLADR12_address                       0x719
#define SCANLADR12_position                      0x4
#define SCANLADR12_size                          0x1
#define SCANLADR12_value_mask                    0x10
#define SCANLADR12_clear_mask                    0xEF

#define LADR13                                   0x5
#define LADR13_address                           0x719
#define LADR13_position                          0x5
#define LADR13_size                              0x1
#define LADR13_value_mask                        0x20
#define LADR13_clear_mask                        0xDF

#define SCANLADR13                               0x5
#define SCANLADR13_address                       0x719
#define SCANLADR13_position                      0x5
#define SCANLADR13_size                          0x1
#define SCANLADR13_value_mask                    0x20
#define SCANLADR13_clear_mask                    0xDF

#define LADR14                                   0x6
#define LADR14_address                           0x719
#define LADR14_position                          0x6
#define LADR14_size                              0x1
#define LADR14_value_mask                        0x40
#define LADR14_clear_mask                        0xBF

#define SCANLADR14                               0x6
#define SCANLADR14_address                       0x719
#define SCANLADR14_position                      0x6
#define SCANLADR14_size                          0x1
#define SCANLADR14_value_mask                    0x40
#define SCANLADR14_clear_mask                    0xBF

#define LADR15                                   0x7
#define LADR15_address                           0x719
#define LADR15_position                          0x7
#define LADR15_size                              0x1
#define LADR15_value_mask                        0x80
#define LADR15_clear_mask                        0x7F

#define SCANLADR15                               0x7
#define SCANLADR15_address                       0x719
#define SCANLADR15_position                      0x7
#define SCANLADR15_size                          0x1
#define SCANLADR15_value_mask                    0x80
#define SCANLADR15_clear_mask                    0x7F


/*----------------------------------------------------------------------------------------------#
| SCANHADRL                                                                               0x71A |
#-----------------------------------------------------------------------------------------------#
| SCANHADR7 | SCANHADR6 | SCANHADR5 | SCANHADR4 | SCANHADR3 | SCANHADR2 | SCANHADR1 | SCANHADR0 |
#-----------------------------------------------------------------------------------------------#
| 7         | 6         | 5         | 4         | 3         | 2         | 1         | 0         |
#----------------------------------------------------------------------------------------------*/

#define SCANHADRL                                0x0
#define SCANHADRL_address                        0x71A
#define SCANHADRL_position                       0x0
#define SCANHADRL_size                           0x8
#define SCANHADRL_value_mask                     0xFF
#define SCANHADRL_clear_mask                     0x0

#define SCANHADR0                                0x0
#define SCANHADR0_address                        0x71A
#define SCANHADR0_position                       0x0
#define SCANHADR0_size                           0x1
#define SCANHADR0_value_mask                     0x1
#define SCANHADR0_clear_mask                     0xFE

#define HADR0                                    0x0
#define HADR0_address                            0x71A
#define HADR0_position                           0x0
#define HADR0_size                               0x1
#define HADR0_value_mask                         0x1
#define HADR0_clear_mask                         0xFE

#define SCANHADRL_HADR                           0x0
#define SCANHADRL_HADR_address                   0x71A
#define SCANHADRL_HADR_position                  0x0
#define SCANHADRL_HADR_size                      0x8
#define SCANHADRL_HADR_value_mask                0xFF
#define SCANHADRL_HADR_clear_mask                0x0

#define SCANHADRL_SCANHADR                       0x0
#define SCANHADRL_SCANHADR_address               0x71A
#define SCANHADRL_SCANHADR_position              0x0
#define SCANHADRL_SCANHADR_size                  0x8
#define SCANHADRL_SCANHADR_value_mask            0xFF
#define SCANHADRL_SCANHADR_clear_mask            0x0

#define SCANHADR1                                0x1
#define SCANHADR1_address                        0x71A
#define SCANHADR1_position                       0x1
#define SCANHADR1_size                           0x1
#define SCANHADR1_value_mask                     0x2
#define SCANHADR1_clear_mask                     0xFD

#define HADR1                                    0x1
#define HADR1_address                            0x71A
#define HADR1_position                           0x1
#define HADR1_size                               0x1
#define HADR1_value_mask                         0x2
#define HADR1_clear_mask                         0xFD

#define SCANHADR2                                0x2
#define SCANHADR2_address                        0x71A
#define SCANHADR2_position                       0x2
#define SCANHADR2_size                           0x1
#define SCANHADR2_value_mask                     0x4
#define SCANHADR2_clear_mask                     0xFB

#define HARD2                                    0x2
#define HARD2_address                            0x71A
#define HARD2_position                           0x2
#define HARD2_size                               0x1
#define HARD2_value_mask                         0x4
#define HARD2_clear_mask                         0xFB

#define SCANHADR3                                0x3
#define SCANHADR3_address                        0x71A
#define SCANHADR3_position                       0x3
#define SCANHADR3_size                           0x1
#define SCANHADR3_value_mask                     0x8
#define SCANHADR3_clear_mask                     0xF7

#define HADR3                                    0x3
#define HADR3_address                            0x71A
#define HADR3_position                           0x3
#define HADR3_size                               0x1
#define HADR3_value_mask                         0x8
#define HADR3_clear_mask                         0xF7

#define SCANHADR4                                0x4
#define SCANHADR4_address                        0x71A
#define SCANHADR4_position                       0x4
#define SCANHADR4_size                           0x1
#define SCANHADR4_value_mask                     0x10
#define SCANHADR4_clear_mask                     0xEF

#define HADR4                                    0x4
#define HADR4_address                            0x71A
#define HADR4_position                           0x4
#define HADR4_size                               0x1
#define HADR4_value_mask                         0x10
#define HADR4_clear_mask                         0xEF

#define SCANHADR5                                0x5
#define SCANHADR5_address                        0x71A
#define SCANHADR5_position                       0x5
#define SCANHADR5_size                           0x1
#define SCANHADR5_value_mask                     0x20
#define SCANHADR5_clear_mask                     0xDF

#define HADR5                                    0x5
#define HADR5_address                            0x71A
#define HADR5_position                           0x5
#define HADR5_size                               0x1
#define HADR5_value_mask                         0x20
#define HADR5_clear_mask                         0xDF

#define SCANHADR6                                0x6
#define SCANHADR6_address                        0x71A
#define SCANHADR6_position                       0x6
#define SCANHADR6_size                           0x1
#define SCANHADR6_value_mask                     0x40
#define SCANHADR6_clear_mask                     0xBF

#define HADR6                                    0x6
#define HADR6_address                            0x71A
#define HADR6_position                           0x6
#define HADR6_size                               0x1
#define HADR6_value_mask                         0x40
#define HADR6_clear_mask                         0xBF

#define SCANHADR7                                0x7
#define SCANHADR7_address                        0x71A
#define SCANHADR7_position                       0x7
#define SCANHADR7_size                           0x1
#define SCANHADR7_value_mask                     0x80
#define SCANHADR7_clear_mask                     0x7F

#define HADR7                                    0x7
#define HADR7_address                            0x71A
#define HADR7_position                           0x7
#define HADR7_size                               0x1
#define HADR7_value_mask                         0x80
#define HADR7_clear_mask                         0x7F


/*--------------------------------------------------------------------#
| SCANHADRH                                                     0x71B |
#---------------------------------------------------------------------#
| HADR15 | HADR14 | HADR13 | HADR12 | HADR11 | HADR10 | HADR9 | HADR8 |
#---------------------------------------------------------------------#
| 7      | 6      | 5      | 4      | 3      | 2      | 1     | 0     |
#--------------------------------------------------------------------*/

#define SCANHADRH                                0x0
#define SCANHADRH_address                        0x71B
#define SCANHADRH_position                       0x0
#define SCANHADRH_size                           0x8
#define SCANHADRH_value_mask                     0xFF
#define SCANHADRH_clear_mask                     0x0

#define HADR8                                    0x0
#define HADR8_address                            0x71B
#define HADR8_position                           0x0
#define HADR8_size                               0x1
#define HADR8_value_mask                         0x1
#define HADR8_clear_mask                         0xFE

#define SCANHADRH_SCANHADR                       0x0
#define SCANHADRH_SCANHADR_address               0x71B
#define SCANHADRH_SCANHADR_position              0x0
#define SCANHADRH_SCANHADR_size                  0x8
#define SCANHADRH_SCANHADR_value_mask            0xFF
#define SCANHADRH_SCANHADR_clear_mask            0x0

#define SCANHADR8                                0x0
#define SCANHADR8_address                        0x71B
#define SCANHADR8_position                       0x0
#define SCANHADR8_size                           0x1
#define SCANHADR8_value_mask                     0x1
#define SCANHADR8_clear_mask                     0xFE

#define SCANHADRH_HADR                           0x0
#define SCANHADRH_HADR_address                   0x71B
#define SCANHADRH_HADR_position                  0x0
#define SCANHADRH_HADR_size                      0x8
#define SCANHADRH_HADR_value_mask                0xFF
#define SCANHADRH_HADR_clear_mask                0x0

#define HADR9                                    0x1
#define HADR9_address                            0x71B
#define HADR9_position                           0x1
#define HADR9_size                               0x1
#define HADR9_value_mask                         0x2
#define HADR9_clear_mask                         0xFD

#define SCANHADR9                                0x1
#define SCANHADR9_address                        0x71B
#define SCANHADR9_position                       0x1
#define SCANHADR9_size                           0x1
#define SCANHADR9_value_mask                     0x2
#define SCANHADR9_clear_mask                     0xFD

#define HADR10                                   0x2
#define HADR10_address                           0x71B
#define HADR10_position                          0x2
#define HADR10_size                              0x1
#define HADR10_value_mask                        0x4
#define HADR10_clear_mask                        0xFB

#define SCANHADR10                               0x2
#define SCANHADR10_address                       0x71B
#define SCANHADR10_position                      0x2
#define SCANHADR10_size                          0x1
#define SCANHADR10_value_mask                    0x4
#define SCANHADR10_clear_mask                    0xFB

#define SCANHADR11                               0x3
#define SCANHADR11_address                       0x71B
#define SCANHADR11_position                      0x3
#define SCANHADR11_size                          0x1
#define SCANHADR11_value_mask                    0x8
#define SCANHADR11_clear_mask                    0xF7

#define HADR11                                   0x3
#define HADR11_address                           0x71B
#define HADR11_position                          0x3
#define HADR11_size                              0x1
#define HADR11_value_mask                        0x8
#define HADR11_clear_mask                        0xF7

#define HADR12                                   0x4
#define HADR12_address                           0x71B
#define HADR12_position                          0x4
#define HADR12_size                              0x1
#define HADR12_value_mask                        0x10
#define HADR12_clear_mask                        0xEF

#define SCANHADR12                               0x4
#define SCANHADR12_address                       0x71B
#define SCANHADR12_position                      0x4
#define SCANHADR12_size                          0x1
#define SCANHADR12_value_mask                    0x10
#define SCANHADR12_clear_mask                    0xEF

#define HADR13                                   0x5
#define HADR13_address                           0x71B
#define HADR13_position                          0x5
#define HADR13_size                              0x1
#define HADR13_value_mask                        0x20
#define HADR13_clear_mask                        0xDF

#define SCANHADR13                               0x5
#define SCANHADR13_address                       0x71B
#define SCANHADR13_position                      0x5
#define SCANHADR13_size                          0x1
#define SCANHADR13_value_mask                    0x20
#define SCANHADR13_clear_mask                    0xDF

#define HADR14                                   0x6
#define HADR14_address                           0x71B
#define HADR14_position                          0x6
#define HADR14_size                              0x1
#define HADR14_value_mask                        0x40
#define HADR14_clear_mask                        0xBF

#define SCANHADR14                               0x6
#define SCANHADR14_address                       0x71B
#define SCANHADR14_position                      0x6
#define SCANHADR14_size                          0x1
#define SCANHADR14_value_mask                    0x40
#define SCANHADR14_clear_mask                    0xBF

#define HADR15                                   0x7
#define HADR15_address                           0x71B
#define HADR15_position                          0x7
#define HADR15_size                              0x1
#define HADR15_value_mask                        0x80
#define HADR15_clear_mask                        0x7F

#define SCANHADR15                               0x7
#define SCANHADR15_address                       0x71B
#define SCANHADR15_position                      0x7
#define SCANHADR15_size                          0x1
#define SCANHADR15_value_mask                    0x80
#define SCANHADR15_clear_mask                    0x7F


/*-------------------------------------------------------------------------------------------#
| SCANCON0                                                                             0x71C |
#--------------------------------------------------------------------------------------------#
| SCANEN | SCANGO | SCANCON0_BUSY | SCANINVALID | INTM | - | SCANCON0_MODE1 | SCANCON0_MODE0 |
#--------------------------------------------------------------------------------------------#
| 7      | 6      | 5             | 4           | 3    | 2 | 1              | 0              |
#-------------------------------------------------------------------------------------------*/

#define SCANCON0                                 0x0
#define SCANCON0_address                         0x71C
#define SCANCON0_position                        0x0
#define SCANCON0_size                            0x8
#define SCANCON0_value_mask                      0xFF
#define SCANCON0_clear_mask                      0x0

#define SCANMODE                                 0x0
#define SCANMODE_address                         0x71C
#define SCANMODE_position                        0x0
#define SCANMODE_size                            0x2
#define SCANMODE_value_mask                      0x3
#define SCANMODE_clear_mask                      0xFC

#define SCANMODE0                                0x0
#define SCANMODE0_address                        0x71C
#define SCANMODE0_position                       0x0
#define SCANMODE0_size                           0x1
#define SCANMODE0_value_mask                     0x1
#define SCANMODE0_clear_mask                     0xFE

#define SCANCON0_MODE                            0x0
#define SCANCON0_MODE_address                    0x71C
#define SCANCON0_MODE_position                   0x0
#define SCANCON0_MODE_size                       0x2
#define SCANCON0_MODE_value_mask                 0x3
#define SCANCON0_MODE_clear_mask                 0xFC

#define SCANCON0_MODE0                           0x0
#define SCANCON0_MODE0_address                   0x71C
#define SCANCON0_MODE0_position                  0x0
#define SCANCON0_MODE0_size                      0x1
#define SCANCON0_MODE0_value_mask                0x1
#define SCANCON0_MODE0_clear_mask                0xFE

#define SCANCON0_MODE1                           0x1
#define SCANCON0_MODE1_address                   0x71C
#define SCANCON0_MODE1_position                  0x1
#define SCANCON0_MODE1_size                      0x1
#define SCANCON0_MODE1_value_mask                0x2
#define SCANCON0_MODE1_clear_mask                0xFD

#define SCANMODE1                                0x1
#define SCANMODE1_address                        0x71C
#define SCANMODE1_position                       0x1
#define SCANMODE1_size                           0x1
#define SCANMODE1_value_mask                     0x2
#define SCANMODE1_clear_mask                     0xFD

#define INTM                                     0x3
#define INTM_address                             0x71C
#define INTM_position                            0x3
#define INTM_size                                0x1
#define INTM_value_mask                          0x8
#define INTM_clear_mask                          0xF7

#define SCANINTM                                 0x3
#define SCANINTM_address                         0x71C
#define SCANINTM_position                        0x3
#define SCANINTM_size                            0x1
#define SCANINTM_value_mask                      0x8
#define SCANINTM_clear_mask                      0xF7

#define INVALID                                  0x4
#define INVALID_address                          0x71C
#define INVALID_position                         0x4
#define INVALID_size                             0x1
#define INVALID_value_mask                       0x10
#define INVALID_clear_mask                       0xEF

#define SCANINVALID                              0x4
#define SCANINVALID_address                      0x71C
#define SCANINVALID_position                     0x4
#define SCANINVALID_size                         0x1
#define SCANINVALID_value_mask                   0x10
#define SCANINVALID_clear_mask                   0xEF

#define SCANCON0_BUSY                            0x5
#define SCANCON0_BUSY_address                    0x71C
#define SCANCON0_BUSY_position                   0x5
#define SCANCON0_BUSY_size                       0x1
#define SCANCON0_BUSY_value_mask                 0x20
#define SCANCON0_BUSY_clear_mask                 0xDF

#define SCANBUSY                                 0x5
#define SCANBUSY_address                         0x71C
#define SCANBUSY_position                        0x5
#define SCANBUSY_size                            0x1
#define SCANBUSY_value_mask                      0x20
#define SCANBUSY_clear_mask                      0xDF

#define SCANGO                                   0x6
#define SCANGO_address                           0x71C
#define SCANGO_position                          0x6
#define SCANGO_size                              0x1
#define SCANGO_value_mask                        0x40
#define SCANGO_clear_mask                        0xBF

#define SCANEN                                   0x7
#define SCANEN_address                           0x71C
#define SCANEN_position                          0x7
#define SCANEN_size                              0x1
#define SCANEN_value_mask                        0x80
#define SCANEN_clear_mask                        0x7F

#define SCANCON0_EN                              0x7
#define SCANCON0_EN_address                      0x71C
#define SCANCON0_EN_position                     0x7
#define SCANCON0_EN_size                         0x1
#define SCANCON0_EN_value_mask                   0x80
#define SCANCON0_EN_clear_mask                   0x7F


/*--------------------------------------#
| SCANTRIG                        0x71D |
#---------------------------------------#
| - | - | - | - | - | - | TSEL1 | TSEL0 |
#---------------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1     | 0     |
#--------------------------------------*/

#define SCANTRIG                                 0x0
#define SCANTRIG_address                         0x71D
#define SCANTRIG_position                        0x0
#define SCANTRIG_size                            0x8
#define SCANTRIG_value_mask                      0xFF
#define SCANTRIG_clear_mask                      0x0

#define TSEL0                                    0x0
#define TSEL0_address                            0x71D
#define TSEL0_position                           0x0
#define TSEL0_size                               0x1
#define TSEL0_value_mask                         0x1
#define TSEL0_clear_mask                         0xFE

#define TSEL                                     0x0
#define TSEL_address                             0x71D
#define TSEL_position                            0x0
#define TSEL_size                                0x8
#define TSEL_value_mask                          0xFF
#define TSEL_clear_mask                          0x0

#define SCANTSEL0                                0x0
#define SCANTSEL0_address                        0x71D
#define SCANTSEL0_position                       0x0
#define SCANTSEL0_size                           0x1
#define SCANTSEL0_value_mask                     0x1
#define SCANTSEL0_clear_mask                     0xFE

#define SCANTSEL                                 0x0
#define SCANTSEL_address                         0x71D
#define SCANTSEL_position                        0x0
#define SCANTSEL_size                            0x8
#define SCANTSEL_value_mask                      0xFF
#define SCANTSEL_clear_mask                      0x0

#define TSEL1                                    0x1
#define TSEL1_address                            0x71D
#define TSEL1_position                           0x1
#define TSEL1_size                               0x1
#define TSEL1_value_mask                         0x2
#define TSEL1_clear_mask                         0xFD

#define SCANTSEL1                                0x1
#define SCANTSEL1_address                        0x71D
#define SCANTSEL1_position                       0x1
#define SCANTSEL1_size                           0x1
#define SCANTSEL1_value_mask                     0x2
#define SCANTSEL1_clear_mask                     0xFD


/*-------------------------------------------------------------------------------#
| CRCDATL                                                                  0x791 |
#--------------------------------------------------------------------------------#
| CRDCDAT7 | CRCDAT6 | CRCDAT5 | CRCDAT4 | CRCDAT3 | CRCDAT2 | CRCDAT1 | CRCDAT0 |
#--------------------------------------------------------------------------------#
| 7        | 6       | 5       | 4       | 3       | 2       | 1       | 0       |
#-------------------------------------------------------------------------------*/

#define CRCDATL                                  0x0
#define CRCDATL_address                          0x791
#define CRCDATL_position                         0x0
#define CRCDATL_size                             0x8
#define CRCDATL_value_mask                       0xFF
#define CRCDATL_clear_mask                       0x0

#define CRCDATL_DAT                              0x0
#define CRCDATL_DAT_address                      0x791
#define CRCDATL_DAT_position                     0x0
#define CRCDATL_DAT_size                         0x8
#define CRCDATL_DAT_value_mask                   0xFF
#define CRCDATL_DAT_clear_mask                   0x0

#define CRCDAT0                                  0x0
#define CRCDAT0_address                          0x791
#define CRCDAT0_position                         0x0
#define CRCDAT0_size                             0x1
#define CRCDAT0_value_mask                       0x1
#define CRCDAT0_clear_mask                       0xFE

#define DAT0                                     0x0
#define DAT0_address                             0x791
#define DAT0_position                            0x0
#define DAT0_size                                0x1
#define DAT0_value_mask                          0x1
#define DAT0_clear_mask                          0xFE

#define CRCDATL_CRCDAT                           0x0
#define CRCDATL_CRCDAT_address                   0x791
#define CRCDATL_CRCDAT_position                  0x0
#define CRCDATL_CRCDAT_size                      0x8
#define CRCDATL_CRCDAT_value_mask                0xFF
#define CRCDATL_CRCDAT_clear_mask                0x0

#define CRCDAT1                                  0x1
#define CRCDAT1_address                          0x791
#define CRCDAT1_position                         0x1
#define CRCDAT1_size                             0x1
#define CRCDAT1_value_mask                       0x2
#define CRCDAT1_clear_mask                       0xFD

#define DAT1                                     0x1
#define DAT1_address                             0x791
#define DAT1_position                            0x1
#define DAT1_size                                0x1
#define DAT1_value_mask                          0x2
#define DAT1_clear_mask                          0xFD

#define CRCDAT2                                  0x2
#define CRCDAT2_address                          0x791
#define CRCDAT2_position                         0x2
#define CRCDAT2_size                             0x1
#define CRCDAT2_value_mask                       0x4
#define CRCDAT2_clear_mask                       0xFB

#define DAT2                                     0x2
#define DAT2_address                             0x791
#define DAT2_position                            0x2
#define DAT2_size                                0x1
#define DAT2_value_mask                          0x4
#define DAT2_clear_mask                          0xFB

#define CRCDAT3                                  0x3
#define CRCDAT3_address                          0x791
#define CRCDAT3_position                         0x3
#define CRCDAT3_size                             0x1
#define CRCDAT3_value_mask                       0x8
#define CRCDAT3_clear_mask                       0xF7

#define DAT3                                     0x3
#define DAT3_address                             0x791
#define DAT3_position                            0x3
#define DAT3_size                                0x1
#define DAT3_value_mask                          0x8
#define DAT3_clear_mask                          0xF7

#define CRCDAT4                                  0x4
#define CRCDAT4_address                          0x791
#define CRCDAT4_position                         0x4
#define CRCDAT4_size                             0x1
#define CRCDAT4_value_mask                       0x10
#define CRCDAT4_clear_mask                       0xEF

#define DAT4                                     0x4
#define DAT4_address                             0x791
#define DAT4_position                            0x4
#define DAT4_size                                0x1
#define DAT4_value_mask                          0x10
#define DAT4_clear_mask                          0xEF

#define CRCDAT5                                  0x5
#define CRCDAT5_address                          0x791
#define CRCDAT5_position                         0x5
#define CRCDAT5_size                             0x1
#define CRCDAT5_value_mask                       0x20
#define CRCDAT5_clear_mask                       0xDF

#define DAT5                                     0x5
#define DAT5_address                             0x791
#define DAT5_position                            0x5
#define DAT5_size                                0x1
#define DAT5_value_mask                          0x20
#define DAT5_clear_mask                          0xDF

#define CRCDAT6                                  0x6
#define CRCDAT6_address                          0x791
#define CRCDAT6_position                         0x6
#define CRCDAT6_size                             0x1
#define CRCDAT6_value_mask                       0x40
#define CRCDAT6_clear_mask                       0xBF

#define DAT6                                     0x6
#define DAT6_address                             0x791
#define DAT6_position                            0x6
#define DAT6_size                                0x1
#define DAT6_value_mask                          0x40
#define DAT6_clear_mask                          0xBF

#define DAT7                                     0x7
#define DAT7_address                             0x791
#define DAT7_position                            0x7
#define DAT7_size                                0x1
#define DAT7_value_mask                          0x80
#define DAT7_clear_mask                          0x7F

#define CRDCDAT7                                 0x7
#define CRDCDAT7_address                         0x791
#define CRDCDAT7_position                        0x7
#define CRDCDAT7_size                            0x1
#define CRDCDAT7_value_mask                      0x80
#define CRDCDAT7_clear_mask                      0x7F


/*------------------------------------------------------------------#
| CRCDATH                                                     0x792 |
#-------------------------------------------------------------------#
| CRCDAT15 | DAT14 | DAT13 | DAT12 | DAT11 | CRCDAT10 | DAT9 | DAT8 |
#-------------------------------------------------------------------#
| 7        | 6     | 5     | 4     | 3     | 2        | 1    | 0    |
#------------------------------------------------------------------*/

#define CRCDATH                                  0x0
#define CRCDATH_address                          0x792
#define CRCDATH_position                         0x0
#define CRCDATH_size                             0x8
#define CRCDATH_value_mask                       0xFF
#define CRCDATH_clear_mask                       0x0

#define CRCDAT8                                  0x0
#define CRCDAT8_address                          0x792
#define CRCDAT8_position                         0x0
#define CRCDAT8_size                             0x1
#define CRCDAT8_value_mask                       0x1
#define CRCDAT8_clear_mask                       0xFE

#define DAT8                                     0x0
#define DAT8_address                             0x792
#define DAT8_position                            0x0
#define DAT8_size                                0x1
#define DAT8_value_mask                          0x1
#define DAT8_clear_mask                          0xFE

#define CRCDATH_CRCDAT                           0x0
#define CRCDATH_CRCDAT_address                   0x792
#define CRCDATH_CRCDAT_position                  0x0
#define CRCDATH_CRCDAT_size                      0x8
#define CRCDATH_CRCDAT_value_mask                0xFF
#define CRCDATH_CRCDAT_clear_mask                0x0

#define CRCDATH_DAT                              0x0
#define CRCDATH_DAT_address                      0x792
#define CRCDATH_DAT_position                     0x0
#define CRCDATH_DAT_size                         0x8
#define CRCDATH_DAT_value_mask                   0xFF
#define CRCDATH_DAT_clear_mask                   0x0

#define CRCDAT9                                  0x1
#define CRCDAT9_address                          0x792
#define CRCDAT9_position                         0x1
#define CRCDAT9_size                             0x1
#define CRCDAT9_value_mask                       0x2
#define CRCDAT9_clear_mask                       0xFD

#define DAT9                                     0x1
#define DAT9_address                             0x792
#define DAT9_position                            0x1
#define DAT9_size                                0x1
#define DAT9_value_mask                          0x2
#define DAT9_clear_mask                          0xFD

#define DAT10                                    0x2
#define DAT10_address                            0x792
#define DAT10_position                           0x2
#define DAT10_size                               0x1
#define DAT10_value_mask                         0x4
#define DAT10_clear_mask                         0xFB

#define CRCDAT10                                 0x2
#define CRCDAT10_address                         0x792
#define CRCDAT10_position                        0x2
#define CRCDAT10_size                            0x1
#define CRCDAT10_value_mask                      0x4
#define CRCDAT10_clear_mask                      0xFB

#define DAT11                                    0x3
#define DAT11_address                            0x792
#define DAT11_position                           0x3
#define DAT11_size                               0x1
#define DAT11_value_mask                         0x8
#define DAT11_clear_mask                         0xF7

#define CRCDAT11                                 0x3
#define CRCDAT11_address                         0x792
#define CRCDAT11_position                        0x3
#define CRCDAT11_size                            0x1
#define CRCDAT11_value_mask                      0x8
#define CRCDAT11_clear_mask                      0xF7

#define DAT12                                    0x4
#define DAT12_address                            0x792
#define DAT12_position                           0x4
#define DAT12_size                               0x1
#define DAT12_value_mask                         0x10
#define DAT12_clear_mask                         0xEF

#define CRCDAT12                                 0x4
#define CRCDAT12_address                         0x792
#define CRCDAT12_position                        0x4
#define CRCDAT12_size                            0x1
#define CRCDAT12_value_mask                      0x10
#define CRCDAT12_clear_mask                      0xEF

#define DAT13                                    0x5
#define DAT13_address                            0x792
#define DAT13_position                           0x5
#define DAT13_size                               0x1
#define DAT13_value_mask                         0x20
#define DAT13_clear_mask                         0xDF

#define CRCDAT13                                 0x5
#define CRCDAT13_address                         0x792
#define CRCDAT13_position                        0x5
#define CRCDAT13_size                            0x1
#define CRCDAT13_value_mask                      0x20
#define CRCDAT13_clear_mask                      0xDF

#define DAT14                                    0x6
#define DAT14_address                            0x792
#define DAT14_position                           0x6
#define DAT14_size                               0x1
#define DAT14_value_mask                         0x40
#define DAT14_clear_mask                         0xBF

#define CRCDAT14                                 0x6
#define CRCDAT14_address                         0x792
#define CRCDAT14_position                        0x6
#define CRCDAT14_size                            0x1
#define CRCDAT14_value_mask                      0x40
#define CRCDAT14_clear_mask                      0xBF

#define DAT15                                    0x7
#define DAT15_address                            0x792
#define DAT15_position                           0x7
#define DAT15_size                               0x1
#define DAT15_value_mask                         0x80
#define DAT15_clear_mask                         0x7F

#define CRCDAT15                                 0x7
#define CRCDAT15_address                         0x792
#define CRCDAT15_position                        0x7
#define CRCDAT15_size                            0x1
#define CRCDAT15_value_mask                      0x80
#define CRCDAT15_clear_mask                      0x7F


/*------------------------------------------------------------------------------#
| CRCACCL                                                                 0x793 |
#-------------------------------------------------------------------------------#
| CRCACC7 | CRCACC6 | CRCACC5 | CRCACC4 | CRCACC3 | CRCACC2 | CRCACC1 | CRCACC0 |
#-------------------------------------------------------------------------------#
| 7       | 6       | 5       | 4       | 3       | 2       | 1       | 0       |
#------------------------------------------------------------------------------*/

#define CRCACCL                                  0x0
#define CRCACCL_address                          0x793
#define CRCACCL_position                         0x0
#define CRCACCL_size                             0x8
#define CRCACCL_value_mask                       0xFF
#define CRCACCL_clear_mask                       0x0

#define CRCACC0                                  0x0
#define CRCACC0_address                          0x793
#define CRCACC0_position                         0x0
#define CRCACC0_size                             0x1
#define CRCACC0_value_mask                       0x1
#define CRCACC0_clear_mask                       0xFE

#define CRCACCL_ACC                              0x0
#define CRCACCL_ACC_address                      0x793
#define CRCACCL_ACC_position                     0x0
#define CRCACCL_ACC_size                         0x8
#define CRCACCL_ACC_value_mask                   0xFF
#define CRCACCL_ACC_clear_mask                   0x0

#define CRCACCL_CRCACC                           0x0
#define CRCACCL_CRCACC_address                   0x793
#define CRCACCL_CRCACC_position                  0x0
#define CRCACCL_CRCACC_size                      0x8
#define CRCACCL_CRCACC_value_mask                0xFF
#define CRCACCL_CRCACC_clear_mask                0x0

#define ACC0                                     0x0
#define ACC0_address                             0x793
#define ACC0_position                            0x0
#define ACC0_size                                0x1
#define ACC0_value_mask                          0x1
#define ACC0_clear_mask                          0xFE

#define CRCACC1                                  0x1
#define CRCACC1_address                          0x793
#define CRCACC1_position                         0x1
#define CRCACC1_size                             0x1
#define CRCACC1_value_mask                       0x2
#define CRCACC1_clear_mask                       0xFD

#define ACC1                                     0x1
#define ACC1_address                             0x793
#define ACC1_position                            0x1
#define ACC1_size                                0x1
#define ACC1_value_mask                          0x2
#define ACC1_clear_mask                          0xFD

#define CRCACC2                                  0x2
#define CRCACC2_address                          0x793
#define CRCACC2_position                         0x2
#define CRCACC2_size                             0x1
#define CRCACC2_value_mask                       0x4
#define CRCACC2_clear_mask                       0xFB

#define ACC2                                     0x2
#define ACC2_address                             0x793
#define ACC2_position                            0x2
#define ACC2_size                                0x1
#define ACC2_value_mask                          0x4
#define ACC2_clear_mask                          0xFB

#define CRCACC3                                  0x3
#define CRCACC3_address                          0x793
#define CRCACC3_position                         0x3
#define CRCACC3_size                             0x1
#define CRCACC3_value_mask                       0x8
#define CRCACC3_clear_mask                       0xF7

#define ACC3                                     0x3
#define ACC3_address                             0x793
#define ACC3_position                            0x3
#define ACC3_size                                0x1
#define ACC3_value_mask                          0x8
#define ACC3_clear_mask                          0xF7

#define CRCACC4                                  0x4
#define CRCACC4_address                          0x793
#define CRCACC4_position                         0x4
#define CRCACC4_size                             0x1
#define CRCACC4_value_mask                       0x10
#define CRCACC4_clear_mask                       0xEF

#define ACC4                                     0x4
#define ACC4_address                             0x793
#define ACC4_position                            0x4
#define ACC4_size                                0x1
#define ACC4_value_mask                          0x10
#define ACC4_clear_mask                          0xEF

#define CRCACC5                                  0x5
#define CRCACC5_address                          0x793
#define CRCACC5_position                         0x5
#define CRCACC5_size                             0x1
#define CRCACC5_value_mask                       0x20
#define CRCACC5_clear_mask                       0xDF

#define ACC5                                     0x5
#define ACC5_address                             0x793
#define ACC5_position                            0x5
#define ACC5_size                                0x1
#define ACC5_value_mask                          0x20
#define ACC5_clear_mask                          0xDF

#define CRCACC6                                  0x6
#define CRCACC6_address                          0x793
#define CRCACC6_position                         0x6
#define CRCACC6_size                             0x1
#define CRCACC6_value_mask                       0x40
#define CRCACC6_clear_mask                       0xBF

#define ACC6                                     0x6
#define ACC6_address                             0x793
#define ACC6_position                            0x6
#define ACC6_size                                0x1
#define ACC6_value_mask                          0x40
#define ACC6_clear_mask                          0xBF

#define CRCACC7                                  0x7
#define CRCACC7_address                          0x793
#define CRCACC7_position                         0x7
#define CRCACC7_size                             0x1
#define CRCACC7_value_mask                       0x80
#define CRCACC7_clear_mask                       0x7F

#define ACC7                                     0x7
#define ACC7_address                             0x793
#define ACC7_position                            0x7
#define ACC7_size                                0x1
#define ACC7_value_mask                          0x80
#define ACC7_clear_mask                          0x7F


/*------------------------------------------------------------------#
| CRCACCH                                                     0x794 |
#-------------------------------------------------------------------#
| ACC15 | ACC14 | ACC13 | ACC12 | ACC11 | ACC10 | CRCACC9 | CRCACC8 |
#-------------------------------------------------------------------#
| 7     | 6     | 5     | 4     | 3     | 2     | 1       | 0       |
#------------------------------------------------------------------*/

#define CRCACCH                                  0x0
#define CRCACCH_address                          0x794
#define CRCACCH_position                         0x0
#define CRCACCH_size                             0x8
#define CRCACCH_value_mask                       0xFF
#define CRCACCH_clear_mask                       0x0

#define CRCACCH_CRCACC                           0x0
#define CRCACCH_CRCACC_address                   0x794
#define CRCACCH_CRCACC_position                  0x0
#define CRCACCH_CRCACC_size                      0x8
#define CRCACCH_CRCACC_value_mask                0xFF
#define CRCACCH_CRCACC_clear_mask                0x0

#define CRCACC8                                  0x0
#define CRCACC8_address                          0x794
#define CRCACC8_position                         0x0
#define CRCACC8_size                             0x1
#define CRCACC8_value_mask                       0x1
#define CRCACC8_clear_mask                       0xFE

#define CRCACCH_ACC                              0x0
#define CRCACCH_ACC_address                      0x794
#define CRCACCH_ACC_position                     0x0
#define CRCACCH_ACC_size                         0x8
#define CRCACCH_ACC_value_mask                   0xFF
#define CRCACCH_ACC_clear_mask                   0x0

#define ACC8                                     0x0
#define ACC8_address                             0x794
#define ACC8_position                            0x0
#define ACC8_size                                0x1
#define ACC8_value_mask                          0x1
#define ACC8_clear_mask                          0xFE

#define CRCACC9                                  0x1
#define CRCACC9_address                          0x794
#define CRCACC9_position                         0x1
#define CRCACC9_size                             0x1
#define CRCACC9_value_mask                       0x2
#define CRCACC9_clear_mask                       0xFD

#define ACC9                                     0x1
#define ACC9_address                             0x794
#define ACC9_position                            0x1
#define ACC9_size                                0x1
#define ACC9_value_mask                          0x2
#define ACC9_clear_mask                          0xFD

#define CRCACC10                                 0x2
#define CRCACC10_address                         0x794
#define CRCACC10_position                        0x2
#define CRCACC10_size                            0x1
#define CRCACC10_value_mask                      0x4
#define CRCACC10_clear_mask                      0xFB

#define ACC10                                    0x2
#define ACC10_address                            0x794
#define ACC10_position                           0x2
#define ACC10_size                               0x1
#define ACC10_value_mask                         0x4
#define ACC10_clear_mask                         0xFB

#define CRCACC11                                 0x3
#define CRCACC11_address                         0x794
#define CRCACC11_position                        0x3
#define CRCACC11_size                            0x1
#define CRCACC11_value_mask                      0x8
#define CRCACC11_clear_mask                      0xF7

#define ACC11                                    0x3
#define ACC11_address                            0x794
#define ACC11_position                           0x3
#define ACC11_size                               0x1
#define ACC11_value_mask                         0x8
#define ACC11_clear_mask                         0xF7

#define CRCACC12                                 0x4
#define CRCACC12_address                         0x794
#define CRCACC12_position                        0x4
#define CRCACC12_size                            0x1
#define CRCACC12_value_mask                      0x10
#define CRCACC12_clear_mask                      0xEF

#define ACC12                                    0x4
#define ACC12_address                            0x794
#define ACC12_position                           0x4
#define ACC12_size                               0x1
#define ACC12_value_mask                         0x10
#define ACC12_clear_mask                         0xEF

#define CRCACC13                                 0x5
#define CRCACC13_address                         0x794
#define CRCACC13_position                        0x5
#define CRCACC13_size                            0x1
#define CRCACC13_value_mask                      0x20
#define CRCACC13_clear_mask                      0xDF

#define ACC13                                    0x5
#define ACC13_address                            0x794
#define ACC13_position                           0x5
#define ACC13_size                               0x1
#define ACC13_value_mask                         0x20
#define ACC13_clear_mask                         0xDF

#define ACC14                                    0x6
#define ACC14_address                            0x794
#define ACC14_position                           0x6
#define ACC14_size                               0x1
#define ACC14_value_mask                         0x40
#define ACC14_clear_mask                         0xBF

#define CRCACC14                                 0x6
#define CRCACC14_address                         0x794
#define CRCACC14_position                        0x6
#define CRCACC14_size                            0x1
#define CRCACC14_value_mask                      0x40
#define CRCACC14_clear_mask                      0xBF

#define CRCACC15                                 0x7
#define CRCACC15_address                         0x794
#define CRCACC15_position                        0x7
#define CRCACC15_size                            0x1
#define CRCACC15_value_mask                      0x80
#define CRCACC15_clear_mask                      0x7F

#define ACC15                                    0x7
#define ACC15_address                            0x794
#define ACC15_position                           0x7
#define ACC15_size                               0x1
#define ACC15_value_mask                         0x80
#define ACC15_clear_mask                         0x7F


/*-------------------------------------------------------------------------#
| CRCSHIFTL                                                          0x795 |
#--------------------------------------------------------------------------#
| SHIFT7 | CRCSHIFT6 | SHIFT5 | SHIFT4 | SHIFT3 | SHIFT2 | SHIFT1 | SHIFT0 |
#--------------------------------------------------------------------------#
| 7      | 6         | 5      | 4      | 3      | 2      | 1      | 0      |
#-------------------------------------------------------------------------*/

#define CRCSHIFTL                                0x0
#define CRCSHIFTL_address                        0x795
#define CRCSHIFTL_position                       0x0
#define CRCSHIFTL_size                           0x8
#define CRCSHIFTL_value_mask                     0xFF
#define CRCSHIFTL_clear_mask                     0x0

#define CRCSHIFTL_CRCSHIFT                       0x0
#define CRCSHIFTL_CRCSHIFT_address               0x795
#define CRCSHIFTL_CRCSHIFT_position              0x0
#define CRCSHIFTL_CRCSHIFT_size                  0x8
#define CRCSHIFTL_CRCSHIFT_value_mask            0xFF
#define CRCSHIFTL_CRCSHIFT_clear_mask            0x0

#define CRCSHIFTL_SHIFT                          0x0
#define CRCSHIFTL_SHIFT_address                  0x795
#define CRCSHIFTL_SHIFT_position                 0x0
#define CRCSHIFTL_SHIFT_size                     0x8
#define CRCSHIFTL_SHIFT_value_mask               0xFF
#define CRCSHIFTL_SHIFT_clear_mask               0x0

#define SHIFT0                                   0x0
#define SHIFT0_address                           0x795
#define SHIFT0_position                          0x0
#define SHIFT0_size                              0x1
#define SHIFT0_value_mask                        0x1
#define SHIFT0_clear_mask                        0xFE

#define CRCSHIFT0                                0x0
#define CRCSHIFT0_address                        0x795
#define CRCSHIFT0_position                       0x0
#define CRCSHIFT0_size                           0x1
#define CRCSHIFT0_value_mask                     0x1
#define CRCSHIFT0_clear_mask                     0xFE

#define SHIFT1                                   0x1
#define SHIFT1_address                           0x795
#define SHIFT1_position                          0x1
#define SHIFT1_size                              0x1
#define SHIFT1_value_mask                        0x2
#define SHIFT1_clear_mask                        0xFD

#define CRCSHIFT1                                0x1
#define CRCSHIFT1_address                        0x795
#define CRCSHIFT1_position                       0x1
#define CRCSHIFT1_size                           0x1
#define CRCSHIFT1_value_mask                     0x2
#define CRCSHIFT1_clear_mask                     0xFD

#define SHIFT2                                   0x2
#define SHIFT2_address                           0x795
#define SHIFT2_position                          0x2
#define SHIFT2_size                              0x1
#define SHIFT2_value_mask                        0x4
#define SHIFT2_clear_mask                        0xFB

#define CRCSHIFT2                                0x2
#define CRCSHIFT2_address                        0x795
#define CRCSHIFT2_position                       0x2
#define CRCSHIFT2_size                           0x1
#define CRCSHIFT2_value_mask                     0x4
#define CRCSHIFT2_clear_mask                     0xFB

#define SHIFT3                                   0x3
#define SHIFT3_address                           0x795
#define SHIFT3_position                          0x3
#define SHIFT3_size                              0x1
#define SHIFT3_value_mask                        0x8
#define SHIFT3_clear_mask                        0xF7

#define CRCSHIFT3                                0x3
#define CRCSHIFT3_address                        0x795
#define CRCSHIFT3_position                       0x3
#define CRCSHIFT3_size                           0x1
#define CRCSHIFT3_value_mask                     0x8
#define CRCSHIFT3_clear_mask                     0xF7

#define SHIFT4                                   0x4
#define SHIFT4_address                           0x795
#define SHIFT4_position                          0x4
#define SHIFT4_size                              0x1
#define SHIFT4_value_mask                        0x10
#define SHIFT4_clear_mask                        0xEF

#define CRCSHIFT4                                0x4
#define CRCSHIFT4_address                        0x795
#define CRCSHIFT4_position                       0x4
#define CRCSHIFT4_size                           0x1
#define CRCSHIFT4_value_mask                     0x10
#define CRCSHIFT4_clear_mask                     0xEF

#define SHIFT5                                   0x5
#define SHIFT5_address                           0x795
#define SHIFT5_position                          0x5
#define SHIFT5_size                              0x1
#define SHIFT5_value_mask                        0x20
#define SHIFT5_clear_mask                        0xDF

#define CRCSHIFT5                                0x5
#define CRCSHIFT5_address                        0x795
#define CRCSHIFT5_position                       0x5
#define CRCSHIFT5_size                           0x1
#define CRCSHIFT5_value_mask                     0x20
#define CRCSHIFT5_clear_mask                     0xDF

#define SHIFT6                                   0x6
#define SHIFT6_address                           0x795
#define SHIFT6_position                          0x6
#define SHIFT6_size                              0x1
#define SHIFT6_value_mask                        0x40
#define SHIFT6_clear_mask                        0xBF

#define CRCSHIFT6                                0x6
#define CRCSHIFT6_address                        0x795
#define CRCSHIFT6_position                       0x6
#define CRCSHIFT6_size                           0x1
#define CRCSHIFT6_value_mask                     0x40
#define CRCSHIFT6_clear_mask                     0xBF

#define SHIFT7                                   0x7
#define SHIFT7_address                           0x795
#define SHIFT7_position                          0x7
#define SHIFT7_size                              0x1
#define SHIFT7_value_mask                        0x80
#define SHIFT7_clear_mask                        0x7F

#define CRCSHIFT7                                0x7
#define CRCSHIFT7_address                        0x795
#define CRCSHIFT7_position                       0x7
#define CRCSHIFT7_size                           0x1
#define CRCSHIFT7_value_mask                     0x80
#define CRCSHIFT7_clear_mask                     0x7F


/*-------------------------------------------------------------------------------#
| CRCSHIFTH                                                                0x796 |
#--------------------------------------------------------------------------------#
| SHIFT15 | SHIFT14 | SHIFT13 | SHIFT12 | SHIFT11 | SHIFT10 | SHIFT9 | CRCSHIFT8 |
#--------------------------------------------------------------------------------#
| 7       | 6       | 5       | 4       | 3       | 2       | 1      | 0         |
#-------------------------------------------------------------------------------*/

#define CRCSHIFTH                                0x0
#define CRCSHIFTH_address                        0x796
#define CRCSHIFTH_position                       0x0
#define CRCSHIFTH_size                           0x8
#define CRCSHIFTH_value_mask                     0xFF
#define CRCSHIFTH_clear_mask                     0x0

#define CRCSHIFT8                                0x0
#define CRCSHIFT8_address                        0x796
#define CRCSHIFT8_position                       0x0
#define CRCSHIFT8_size                           0x1
#define CRCSHIFT8_value_mask                     0x1
#define CRCSHIFT8_clear_mask                     0xFE

#define CRCSHIFTH_SHIFT                          0x0
#define CRCSHIFTH_SHIFT_address                  0x796
#define CRCSHIFTH_SHIFT_position                 0x0
#define CRCSHIFTH_SHIFT_size                     0x8
#define CRCSHIFTH_SHIFT_value_mask               0xFF
#define CRCSHIFTH_SHIFT_clear_mask               0x0

#define CRCSHIFTH_CRCSHIFT                       0x0
#define CRCSHIFTH_CRCSHIFT_address               0x796
#define CRCSHIFTH_CRCSHIFT_position              0x0
#define CRCSHIFTH_CRCSHIFT_size                  0x8
#define CRCSHIFTH_CRCSHIFT_value_mask            0xFF
#define CRCSHIFTH_CRCSHIFT_clear_mask            0x0

#define SHIFT8                                   0x0
#define SHIFT8_address                           0x796
#define SHIFT8_position                          0x0
#define SHIFT8_size                              0x1
#define SHIFT8_value_mask                        0x1
#define SHIFT8_clear_mask                        0xFE

#define CRCSHIFT9                                0x1
#define CRCSHIFT9_address                        0x796
#define CRCSHIFT9_position                       0x1
#define CRCSHIFT9_size                           0x1
#define CRCSHIFT9_value_mask                     0x2
#define CRCSHIFT9_clear_mask                     0xFD

#define SHIFT9                                   0x1
#define SHIFT9_address                           0x796
#define SHIFT9_position                          0x1
#define SHIFT9_size                              0x1
#define SHIFT9_value_mask                        0x2
#define SHIFT9_clear_mask                        0xFD

#define SHIFT10                                  0x2
#define SHIFT10_address                          0x796
#define SHIFT10_position                         0x2
#define SHIFT10_size                             0x1
#define SHIFT10_value_mask                       0x4
#define SHIFT10_clear_mask                       0xFB

#define CRCSHIFT10                               0x2
#define CRCSHIFT10_address                       0x796
#define CRCSHIFT10_position                      0x2
#define CRCSHIFT10_size                          0x1
#define CRCSHIFT10_value_mask                    0x4
#define CRCSHIFT10_clear_mask                    0xFB

#define SHIFT11                                  0x3
#define SHIFT11_address                          0x796
#define SHIFT11_position                         0x3
#define SHIFT11_size                             0x1
#define SHIFT11_value_mask                       0x8
#define SHIFT11_clear_mask                       0xF7

#define CRCSHIFT11                               0x3
#define CRCSHIFT11_address                       0x796
#define CRCSHIFT11_position                      0x3
#define CRCSHIFT11_size                          0x1
#define CRCSHIFT11_value_mask                    0x8
#define CRCSHIFT11_clear_mask                    0xF7

#define SHIFT12                                  0x4
#define SHIFT12_address                          0x796
#define SHIFT12_position                         0x4
#define SHIFT12_size                             0x1
#define SHIFT12_value_mask                       0x10
#define SHIFT12_clear_mask                       0xEF

#define CRCSHIFT12                               0x4
#define CRCSHIFT12_address                       0x796
#define CRCSHIFT12_position                      0x4
#define CRCSHIFT12_size                          0x1
#define CRCSHIFT12_value_mask                    0x10
#define CRCSHIFT12_clear_mask                    0xEF

#define SHIFT13                                  0x5
#define SHIFT13_address                          0x796
#define SHIFT13_position                         0x5
#define SHIFT13_size                             0x1
#define SHIFT13_value_mask                       0x20
#define SHIFT13_clear_mask                       0xDF

#define CRCSHIFT13                               0x5
#define CRCSHIFT13_address                       0x796
#define CRCSHIFT13_position                      0x5
#define CRCSHIFT13_size                          0x1
#define CRCSHIFT13_value_mask                    0x20
#define CRCSHIFT13_clear_mask                    0xDF

#define CRCSHIFT14                               0x6
#define CRCSHIFT14_address                       0x796
#define CRCSHIFT14_position                      0x6
#define CRCSHIFT14_size                          0x1
#define CRCSHIFT14_value_mask                    0x40
#define CRCSHIFT14_clear_mask                    0xBF

#define SHIFT14                                  0x6
#define SHIFT14_address                          0x796
#define SHIFT14_position                         0x6
#define SHIFT14_size                             0x1
#define SHIFT14_value_mask                       0x40
#define SHIFT14_clear_mask                       0xBF

#define SHIFT15                                  0x7
#define SHIFT15_address                          0x796
#define SHIFT15_position                         0x7
#define SHIFT15_size                             0x1
#define SHIFT15_value_mask                       0x80
#define SHIFT15_clear_mask                       0x7F

#define CRCSHIFT15                               0x7
#define CRCSHIFT15_address                       0x796
#define CRCSHIFT15_position                      0x7
#define CRCSHIFT15_size                          0x1
#define CRCSHIFT15_value_mask                    0x80
#define CRCSHIFT15_clear_mask                    0x7F


/*---------------------------------------------------#
| CRCXORL                                      0x797 |
#----------------------------------------------------#
| XOR7 | XOR6 | XOR5 | XOR4 | XOR3 | XOR2 | XOR1 | - |
#----------------------------------------------------#
| 7    | 6    | 5    | 4    | 3    | 2    | 1    | 0 |
#---------------------------------------------------*/

#define CRCXORL                                  0x0
#define CRCXORL_address                          0x797
#define CRCXORL_position                         0x0
#define CRCXORL_size                             0x8
#define CRCXORL_value_mask                       0xFF
#define CRCXORL_clear_mask                       0x0

#define XOR1                                     0x1
#define XOR1_address                             0x797
#define XOR1_position                            0x1
#define XOR1_size                                0x1
#define XOR1_value_mask                          0x2
#define XOR1_clear_mask                          0xFD

#define CRCXOR1                                  0x1
#define CRCXOR1_address                          0x797
#define CRCXOR1_position                         0x1
#define CRCXOR1_size                             0x1
#define CRCXOR1_value_mask                       0x2
#define CRCXOR1_clear_mask                       0xFD

#define XOR2                                     0x2
#define XOR2_address                             0x797
#define XOR2_position                            0x2
#define XOR2_size                                0x1
#define XOR2_value_mask                          0x4
#define XOR2_clear_mask                          0xFB

#define CRCXOR2                                  0x2
#define CRCXOR2_address                          0x797
#define CRCXOR2_position                         0x2
#define CRCXOR2_size                             0x1
#define CRCXOR2_value_mask                       0x4
#define CRCXOR2_clear_mask                       0xFB

#define XOR3                                     0x3
#define XOR3_address                             0x797
#define XOR3_position                            0x3
#define XOR3_size                                0x1
#define XOR3_value_mask                          0x8
#define XOR3_clear_mask                          0xF7

#define CRCXOR3                                  0x3
#define CRCXOR3_address                          0x797
#define CRCXOR3_position                         0x3
#define CRCXOR3_size                             0x1
#define CRCXOR3_value_mask                       0x8
#define CRCXOR3_clear_mask                       0xF7

#define XOR4                                     0x4
#define XOR4_address                             0x797
#define XOR4_position                            0x4
#define XOR4_size                                0x1
#define XOR4_value_mask                          0x10
#define XOR4_clear_mask                          0xEF

#define CRCXOR4                                  0x4
#define CRCXOR4_address                          0x797
#define CRCXOR4_position                         0x4
#define CRCXOR4_size                             0x1
#define CRCXOR4_value_mask                       0x10
#define CRCXOR4_clear_mask                       0xEF

#define XOR5                                     0x5
#define XOR5_address                             0x797
#define XOR5_position                            0x5
#define XOR5_size                                0x1
#define XOR5_value_mask                          0x20
#define XOR5_clear_mask                          0xDF

#define CRCXOR5                                  0x5
#define CRCXOR5_address                          0x797
#define CRCXOR5_position                         0x5
#define CRCXOR5_size                             0x1
#define CRCXOR5_value_mask                       0x20
#define CRCXOR5_clear_mask                       0xDF

#define XOR6                                     0x6
#define XOR6_address                             0x797
#define XOR6_position                            0x6
#define XOR6_size                                0x1
#define XOR6_value_mask                          0x40
#define XOR6_clear_mask                          0xBF

#define CRCXOR6                                  0x6
#define CRCXOR6_address                          0x797
#define CRCXOR6_position                         0x6
#define CRCXOR6_size                             0x1
#define CRCXOR6_value_mask                       0x40
#define CRCXOR6_clear_mask                       0xBF

#define XOR7                                     0x7
#define XOR7_address                             0x797
#define XOR7_position                            0x7
#define XOR7_size                                0x1
#define XOR7_value_mask                          0x80
#define XOR7_clear_mask                          0x7F

#define CRCXOR7                                  0x7
#define CRCXOR7_address                          0x797
#define CRCXOR7_position                         0x7
#define CRCXOR7_size                             0x1
#define CRCXOR7_value_mask                       0x80
#define CRCXOR7_clear_mask                       0x7F


/*------------------------------------------------------------------------#
| CRCXORH                                                           0x798 |
#-------------------------------------------------------------------------#
| CRCXOR15 | CRCXOR14 | XOR13 | XOR12 | CRCXOR11 | CRCXOR10 | XOR9 | XOR8 |
#-------------------------------------------------------------------------#
| 7        | 6        | 5     | 4     | 3        | 2        | 1    | 0    |
#------------------------------------------------------------------------*/

#define CRCXORH                                  0x0
#define CRCXORH_address                          0x798
#define CRCXORH_position                         0x0
#define CRCXORH_size                             0x8
#define CRCXORH_value_mask                       0xFF
#define CRCXORH_clear_mask                       0x0

#define XOR8                                     0x0
#define XOR8_address                             0x798
#define XOR8_position                            0x0
#define XOR8_size                                0x1
#define XOR8_value_mask                          0x1
#define XOR8_clear_mask                          0xFE

#define CRCXOR8                                  0x0
#define CRCXOR8_address                          0x798
#define CRCXOR8_position                         0x0
#define CRCXOR8_size                             0x1
#define CRCXOR8_value_mask                       0x1
#define CRCXOR8_clear_mask                       0xFE

#define XOR9                                     0x1
#define XOR9_address                             0x798
#define XOR9_position                            0x1
#define XOR9_size                                0x1
#define XOR9_value_mask                          0x2
#define XOR9_clear_mask                          0xFD

#define CRCXOR9                                  0x1
#define CRCXOR9_address                          0x798
#define CRCXOR9_position                         0x1
#define CRCXOR9_size                             0x1
#define CRCXOR9_value_mask                       0x2
#define CRCXOR9_clear_mask                       0xFD

#define CRCXOR10                                 0x2
#define CRCXOR10_address                         0x798
#define CRCXOR10_position                        0x2
#define CRCXOR10_size                            0x1
#define CRCXOR10_value_mask                      0x4
#define CRCXOR10_clear_mask                      0xFB

#define XOR10                                    0x2
#define XOR10_address                            0x798
#define XOR10_position                           0x2
#define XOR10_size                               0x1
#define XOR10_value_mask                         0x4
#define XOR10_clear_mask                         0xFB

#define CRCXOR11                                 0x3
#define CRCXOR11_address                         0x798
#define CRCXOR11_position                        0x3
#define CRCXOR11_size                            0x1
#define CRCXOR11_value_mask                      0x8
#define CRCXOR11_clear_mask                      0xF7

#define XOR11                                    0x3
#define XOR11_address                            0x798
#define XOR11_position                           0x3
#define XOR11_size                               0x1
#define XOR11_value_mask                         0x8
#define XOR11_clear_mask                         0xF7

#define XOR12                                    0x4
#define XOR12_address                            0x798
#define XOR12_position                           0x4
#define XOR12_size                               0x1
#define XOR12_value_mask                         0x10
#define XOR12_clear_mask                         0xEF

#define CRCXOR12                                 0x4
#define CRCXOR12_address                         0x798
#define CRCXOR12_position                        0x4
#define CRCXOR12_size                            0x1
#define CRCXOR12_value_mask                      0x10
#define CRCXOR12_clear_mask                      0xEF

#define XOR13                                    0x5
#define XOR13_address                            0x798
#define XOR13_position                           0x5
#define XOR13_size                               0x1
#define XOR13_value_mask                         0x20
#define XOR13_clear_mask                         0xDF

#define CRCXOR13                                 0x5
#define CRCXOR13_address                         0x798
#define CRCXOR13_position                        0x5
#define CRCXOR13_size                            0x1
#define CRCXOR13_value_mask                      0x20
#define CRCXOR13_clear_mask                      0xDF

#define CRCXOR14                                 0x6
#define CRCXOR14_address                         0x798
#define CRCXOR14_position                        0x6
#define CRCXOR14_size                            0x1
#define CRCXOR14_value_mask                      0x40
#define CRCXOR14_clear_mask                      0xBF

#define XOR14                                    0x6
#define XOR14_address                            0x798
#define XOR14_position                           0x6
#define XOR14_size                               0x1
#define XOR14_value_mask                         0x40
#define XOR14_clear_mask                         0xBF

#define CRCXOR15                                 0x7
#define CRCXOR15_address                         0x798
#define CRCXOR15_position                        0x7
#define CRCXOR15_size                            0x1
#define CRCXOR15_value_mask                      0x80
#define CRCXOR15_clear_mask                      0x7F

#define XOR15                                    0x7
#define XOR15_address                            0x798
#define XOR15_position                           0x7
#define XOR15_size                               0x1
#define XOR15_value_mask                         0x80
#define XOR15_clear_mask                         0x7F


/*------------------------------------------------------------------#
| CRCCON0                                                     0x799 |
#-------------------------------------------------------------------#
| CRCEN | CRCGO | CRCCON0_BUSY | ACCM | - | - | CRCSHIFTM | CRCFULL |
#-------------------------------------------------------------------#
| 7     | 6     | 5            | 4    | 3 | 2 | 1         | 0       |
#------------------------------------------------------------------*/

#define CRCCON0                                  0x0
#define CRCCON0_address                          0x799
#define CRCCON0_position                         0x0
#define CRCCON0_size                             0x8
#define CRCCON0_value_mask                       0xFF
#define CRCCON0_clear_mask                       0x0

#define CRCFULL                                  0x0
#define CRCFULL_address                          0x799
#define CRCFULL_position                         0x0
#define CRCFULL_size                             0x1
#define CRCFULL_value_mask                       0x1
#define CRCFULL_clear_mask                       0xFE

#define FULL                                     0x0
#define FULL_address                             0x799
#define FULL_position                            0x0
#define FULL_size                                0x1
#define FULL_value_mask                          0x1
#define FULL_clear_mask                          0xFE

#define CRCSHIFTM                                0x1
#define CRCSHIFTM_address                        0x799
#define CRCSHIFTM_position                       0x1
#define CRCSHIFTM_size                           0x1
#define CRCSHIFTM_value_mask                     0x2
#define CRCSHIFTM_clear_mask                     0xFD

#define SHIFTM                                   0x1
#define SHIFTM_address                           0x799
#define SHIFTM_position                          0x1
#define SHIFTM_size                              0x1
#define SHIFTM_value_mask                        0x2
#define SHIFTM_clear_mask                        0xFD

#define ACCM                                     0x4
#define ACCM_address                             0x799
#define ACCM_position                            0x4
#define ACCM_size                                0x1
#define ACCM_value_mask                          0x10
#define ACCM_clear_mask                          0xEF

#define CRCACCM                                  0x4
#define CRCACCM_address                          0x799
#define CRCACCM_position                         0x4
#define CRCACCM_size                             0x1
#define CRCACCM_value_mask                       0x10
#define CRCACCM_clear_mask                       0xEF

#define CRCCON0_BUSY                             0x5
#define CRCCON0_BUSY_address                     0x799
#define CRCCON0_BUSY_position                    0x5
#define CRCCON0_BUSY_size                        0x1
#define CRCCON0_BUSY_value_mask                  0x20
#define CRCCON0_BUSY_clear_mask                  0xDF

#define CRCBUSY                                  0x5
#define CRCBUSY_address                          0x799
#define CRCBUSY_position                         0x5
#define CRCBUSY_size                             0x1
#define CRCBUSY_value_mask                       0x20
#define CRCBUSY_clear_mask                       0xDF

#define CRCGO                                    0x6
#define CRCGO_address                            0x799
#define CRCGO_position                           0x6
#define CRCGO_size                               0x1
#define CRCGO_value_mask                         0x40
#define CRCGO_clear_mask                         0xBF

#define CRCCON0_EN                               0x7
#define CRCCON0_EN_address                       0x799
#define CRCCON0_EN_position                      0x7
#define CRCCON0_EN_size                          0x1
#define CRCCON0_EN_value_mask                    0x80
#define CRCCON0_EN_clear_mask                    0x7F

#define CRCEN                                    0x7
#define CRCEN_address                            0x799
#define CRCEN_position                           0x7
#define CRCEN_size                               0x1
#define CRCEN_value_mask                         0x80
#define CRCEN_clear_mask                         0x7F


/*-----------------------------------------------------------------------#
| CRCCON1                                                          0x79A |
#------------------------------------------------------------------------#
| CRCDLEN3 | DLEN2 | CRCDLEN1 | CRCDLEN0 | PLEN3 | PLEN2 | PLEN1 | PLEN0 |
#------------------------------------------------------------------------#
| 7        | 6     | 5        | 4        | 3     | 2     | 1     | 0     |
#-----------------------------------------------------------------------*/

#define CRCCON1                                  0x0
#define CRCCON1_address                          0x79A
#define CRCCON1_position                         0x0
#define CRCCON1_size                             0x8
#define CRCCON1_value_mask                       0xFF
#define CRCCON1_clear_mask                       0x0

#define PLEN0                                    0x0
#define PLEN0_address                            0x79A
#define PLEN0_position                           0x0
#define PLEN0_size                               0x1
#define PLEN0_value_mask                         0x1
#define PLEN0_clear_mask                         0xFE

#define CRCPLEN0                                 0x0
#define CRCPLEN0_address                         0x79A
#define CRCPLEN0_position                        0x0
#define CRCPLEN0_size                            0x1
#define CRCPLEN0_value_mask                      0x1
#define CRCPLEN0_clear_mask                      0xFE

#define PLEN                                     0x0
#define PLEN_address                             0x79A
#define PLEN_position                            0x0
#define PLEN_size                                0x4
#define PLEN_value_mask                          0xF
#define PLEN_clear_mask                          0xF0

#define CRCPLEN                                  0x0
#define CRCPLEN_address                          0x79A
#define CRCPLEN_position                         0x0
#define CRCPLEN_size                             0x4
#define CRCPLEN_value_mask                       0xF
#define CRCPLEN_clear_mask                       0xF0

#define PLEN1                                    0x1
#define PLEN1_address                            0x79A
#define PLEN1_position                           0x1
#define PLEN1_size                               0x1
#define PLEN1_value_mask                         0x2
#define PLEN1_clear_mask                         0xFD

#define CRCPLEN1                                 0x1
#define CRCPLEN1_address                         0x79A
#define CRCPLEN1_position                        0x1
#define CRCPLEN1_size                            0x1
#define CRCPLEN1_value_mask                      0x2
#define CRCPLEN1_clear_mask                      0xFD

#define PLEN2                                    0x2
#define PLEN2_address                            0x79A
#define PLEN2_position                           0x2
#define PLEN2_size                               0x1
#define PLEN2_value_mask                         0x4
#define PLEN2_clear_mask                         0xFB

#define CRCPLEN2                                 0x2
#define CRCPLEN2_address                         0x79A
#define CRCPLEN2_position                        0x2
#define CRCPLEN2_size                            0x1
#define CRCPLEN2_value_mask                      0x4
#define CRCPLEN2_clear_mask                      0xFB

#define PLEN3                                    0x3
#define PLEN3_address                            0x79A
#define PLEN3_position                           0x3
#define PLEN3_size                               0x1
#define PLEN3_value_mask                         0x8
#define PLEN3_clear_mask                         0xF7

#define CRCPLEN3                                 0x3
#define CRCPLEN3_address                         0x79A
#define CRCPLEN3_position                        0x3
#define CRCPLEN3_size                            0x1
#define CRCPLEN3_value_mask                      0x8
#define CRCPLEN3_clear_mask                      0xF7

#define DLEN                                     0x4
#define DLEN_address                             0x79A
#define DLEN_position                            0x4
#define DLEN_size                                0x4
#define DLEN_value_mask                          0xF0
#define DLEN_clear_mask                          0xF

#define CRCDLEN                                  0x4
#define CRCDLEN_address                          0x79A
#define CRCDLEN_position                         0x4
#define CRCDLEN_size                             0x4
#define CRCDLEN_value_mask                       0xF0
#define CRCDLEN_clear_mask                       0xF

#define CRCDLEN0                                 0x4
#define CRCDLEN0_address                         0x79A
#define CRCDLEN0_position                        0x4
#define CRCDLEN0_size                            0x1
#define CRCDLEN0_value_mask                      0x10
#define CRCDLEN0_clear_mask                      0xEF

#define DLEN0                                    0x4
#define DLEN0_address                            0x79A
#define DLEN0_position                           0x4
#define DLEN0_size                               0x1
#define DLEN0_value_mask                         0x10
#define DLEN0_clear_mask                         0xEF

#define DLEN1                                    0x5
#define DLEN1_address                            0x79A
#define DLEN1_position                           0x5
#define DLEN1_size                               0x1
#define DLEN1_value_mask                         0x20
#define DLEN1_clear_mask                         0xDF

#define CRCDLEN1                                 0x5
#define CRCDLEN1_address                         0x79A
#define CRCDLEN1_position                        0x5
#define CRCDLEN1_size                            0x1
#define CRCDLEN1_value_mask                      0x20
#define CRCDLEN1_clear_mask                      0xDF

#define CRCDLEN2                                 0x6
#define CRCDLEN2_address                         0x79A
#define CRCDLEN2_position                        0x6
#define CRCDLEN2_size                            0x1
#define CRCDLEN2_value_mask                      0x40
#define CRCDLEN2_clear_mask                      0xBF

#define DLEN2                                    0x6
#define DLEN2_address                            0x79A
#define DLEN2_position                           0x6
#define DLEN2_size                               0x1
#define DLEN2_value_mask                         0x40
#define DLEN2_clear_mask                         0xBF

#define DLEN3                                    0x7
#define DLEN3_address                            0x79A
#define DLEN3_position                           0x7
#define DLEN3_size                               0x1
#define DLEN3_value_mask                         0x80
#define DLEN3_clear_mask                         0x7F

#define CRCDLEN3                                 0x7
#define CRCDLEN3_address                         0x79A
#define CRCDLEN3_position                        0x7
#define CRCDLEN3_size                            0x1
#define CRCDLEN3_value_mask                      0x80
#define CRCDLEN3_clear_mask                      0x7F


/*--------------------------------------------------------------------------------------#
| SMT1TMRL                                                                        0xD8C |
#---------------------------------------------------------------------------------------#
| SMT1TMR7 | SMT1TMR6 | SMT1TMR5 | SMT1TMR4 | SMT1TMR3 | SMT1TMR2 | SMT1TMR1 | SMT1TMR0 |
#---------------------------------------------------------------------------------------#
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
#--------------------------------------------------------------------------------------*/

#define SMT1TMRL                                 0x0
#define SMT1TMRL_address                         0xD8C
#define SMT1TMRL_position                        0x0
#define SMT1TMRL_size                            0x8
#define SMT1TMRL_value_mask                      0xFF
#define SMT1TMRL_clear_mask                      0x0

#define SMT1TMR0                                 0x0
#define SMT1TMR0_address                         0xD8C
#define SMT1TMR0_position                        0x0
#define SMT1TMR0_size                            0x1
#define SMT1TMR0_value_mask                      0x1
#define SMT1TMR0_clear_mask                      0xFE

#define SMT1TMRL_SMT1TMR                         0x0
#define SMT1TMRL_SMT1TMR_address                 0xD8C
#define SMT1TMRL_SMT1TMR_position                0x0
#define SMT1TMRL_SMT1TMR_size                    0x8
#define SMT1TMRL_SMT1TMR_value_mask              0xFF
#define SMT1TMRL_SMT1TMR_clear_mask              0x0

#define SMT1TMR1                                 0x1
#define SMT1TMR1_address                         0xD8C
#define SMT1TMR1_position                        0x1
#define SMT1TMR1_size                            0x1
#define SMT1TMR1_value_mask                      0x2
#define SMT1TMR1_clear_mask                      0xFD

#define SMT1TMR2                                 0x2
#define SMT1TMR2_address                         0xD8C
#define SMT1TMR2_position                        0x2
#define SMT1TMR2_size                            0x1
#define SMT1TMR2_value_mask                      0x4
#define SMT1TMR2_clear_mask                      0xFB

#define SMT1TMR3                                 0x3
#define SMT1TMR3_address                         0xD8C
#define SMT1TMR3_position                        0x3
#define SMT1TMR3_size                            0x1
#define SMT1TMR3_value_mask                      0x8
#define SMT1TMR3_clear_mask                      0xF7

#define SMT1TMR4                                 0x4
#define SMT1TMR4_address                         0xD8C
#define SMT1TMR4_position                        0x4
#define SMT1TMR4_size                            0x1
#define SMT1TMR4_value_mask                      0x10
#define SMT1TMR4_clear_mask                      0xEF

#define SMT1TMR5                                 0x5
#define SMT1TMR5_address                         0xD8C
#define SMT1TMR5_position                        0x5
#define SMT1TMR5_size                            0x1
#define SMT1TMR5_value_mask                      0x20
#define SMT1TMR5_clear_mask                      0xDF

#define SMT1TMR6                                 0x6
#define SMT1TMR6_address                         0xD8C
#define SMT1TMR6_position                        0x6
#define SMT1TMR6_size                            0x1
#define SMT1TMR6_value_mask                      0x40
#define SMT1TMR6_clear_mask                      0xBF

#define SMT1TMR7                                 0x7
#define SMT1TMR7_address                         0xD8C
#define SMT1TMR7_position                        0x7
#define SMT1TMR7_size                            0x1
#define SMT1TMR7_value_mask                      0x80
#define SMT1TMR7_clear_mask                      0x7F


/*--------------------------------------------------------------------------------------------#
| SMT1TMRH                                                                              0xD8D |
#---------------------------------------------------------------------------------------------#
| SMT1TMR15 | SMT1TMR14 | SMT1TMR13 | SMT1TMR12 | SMT1TMR11 | SMT1TMR10 | SMT1TMR9 | SMT1TMR8 |
#---------------------------------------------------------------------------------------------#
| 7         | 6         | 5         | 4         | 3         | 2         | 1        | 0        |
#--------------------------------------------------------------------------------------------*/

#define SMT1TMRH                                 0x0
#define SMT1TMRH_address                         0xD8D
#define SMT1TMRH_position                        0x0
#define SMT1TMRH_size                            0x8
#define SMT1TMRH_value_mask                      0xFF
#define SMT1TMRH_clear_mask                      0x0

#define SMT1TMR8                                 0x0
#define SMT1TMR8_address                         0xD8D
#define SMT1TMR8_position                        0x0
#define SMT1TMR8_size                            0x1
#define SMT1TMR8_value_mask                      0x1
#define SMT1TMR8_clear_mask                      0xFE

#define SMT1TMRH_SMT1TMR                         0x0
#define SMT1TMRH_SMT1TMR_address                 0xD8D
#define SMT1TMRH_SMT1TMR_position                0x0
#define SMT1TMRH_SMT1TMR_size                    0x8
#define SMT1TMRH_SMT1TMR_value_mask              0xFF
#define SMT1TMRH_SMT1TMR_clear_mask              0x0

#define SMT1TMR9                                 0x1
#define SMT1TMR9_address                         0xD8D
#define SMT1TMR9_position                        0x1
#define SMT1TMR9_size                            0x1
#define SMT1TMR9_value_mask                      0x2
#define SMT1TMR9_clear_mask                      0xFD

#define SMT1TMR10                                0x2
#define SMT1TMR10_address                        0xD8D
#define SMT1TMR10_position                       0x2
#define SMT1TMR10_size                           0x1
#define SMT1TMR10_value_mask                     0x4
#define SMT1TMR10_clear_mask                     0xFB

#define SMT1TMR11                                0x3
#define SMT1TMR11_address                        0xD8D
#define SMT1TMR11_position                       0x3
#define SMT1TMR11_size                           0x1
#define SMT1TMR11_value_mask                     0x8
#define SMT1TMR11_clear_mask                     0xF7

#define SMT1TMR12                                0x4
#define SMT1TMR12_address                        0xD8D
#define SMT1TMR12_position                       0x4
#define SMT1TMR12_size                           0x1
#define SMT1TMR12_value_mask                     0x10
#define SMT1TMR12_clear_mask                     0xEF

#define SMT1TMR13                                0x5
#define SMT1TMR13_address                        0xD8D
#define SMT1TMR13_position                       0x5
#define SMT1TMR13_size                           0x1
#define SMT1TMR13_value_mask                     0x20
#define SMT1TMR13_clear_mask                     0xDF

#define SMT1TMR14                                0x6
#define SMT1TMR14_address                        0xD8D
#define SMT1TMR14_position                       0x6
#define SMT1TMR14_size                           0x1
#define SMT1TMR14_value_mask                     0x40
#define SMT1TMR14_clear_mask                     0xBF

#define SMT1TMR15                                0x7
#define SMT1TMR15_address                        0xD8D
#define SMT1TMR15_position                       0x7
#define SMT1TMR15_size                           0x1
#define SMT1TMR15_value_mask                     0x80
#define SMT1TMR15_clear_mask                     0x7F


/*----------------------------------------------------------------------------------------------#
| SMT1TMRU                                                                                0xD8E |
#-----------------------------------------------------------------------------------------------#
| SMT1TMR23 | SMT1TMR22 | SMT1TMR21 | SMT1TMR20 | SMT1TMR19 | SMT1TMR18 | SMT1TMR17 | SMT1TMR16 |
#-----------------------------------------------------------------------------------------------#
| 7         | 6         | 5         | 4         | 3         | 2         | 1         | 0         |
#----------------------------------------------------------------------------------------------*/

#define SMT1TMRU                                 0x0
#define SMT1TMRU_address                         0xD8E
#define SMT1TMRU_position                        0x0
#define SMT1TMRU_size                            0x8
#define SMT1TMRU_value_mask                      0xFF
#define SMT1TMRU_clear_mask                      0x0

#define SMT1TMR16                                0x0
#define SMT1TMR16_address                        0xD8E
#define SMT1TMR16_position                       0x0
#define SMT1TMR16_size                           0x1
#define SMT1TMR16_value_mask                     0x1
#define SMT1TMR16_clear_mask                     0xFE

#define SMT1TMRU_SMT1TMR                         0x0
#define SMT1TMRU_SMT1TMR_address                 0xD8E
#define SMT1TMRU_SMT1TMR_position                0x0
#define SMT1TMRU_SMT1TMR_size                    0x8
#define SMT1TMRU_SMT1TMR_value_mask              0xFF
#define SMT1TMRU_SMT1TMR_clear_mask              0x0

#define SMT1TMR17                                0x1
#define SMT1TMR17_address                        0xD8E
#define SMT1TMR17_position                       0x1
#define SMT1TMR17_size                           0x1
#define SMT1TMR17_value_mask                     0x2
#define SMT1TMR17_clear_mask                     0xFD

#define SMT1TMR18                                0x2
#define SMT1TMR18_address                        0xD8E
#define SMT1TMR18_position                       0x2
#define SMT1TMR18_size                           0x1
#define SMT1TMR18_value_mask                     0x4
#define SMT1TMR18_clear_mask                     0xFB

#define SMT1TMR19                                0x3
#define SMT1TMR19_address                        0xD8E
#define SMT1TMR19_position                       0x3
#define SMT1TMR19_size                           0x1
#define SMT1TMR19_value_mask                     0x8
#define SMT1TMR19_clear_mask                     0xF7

#define SMT1TMR20                                0x4
#define SMT1TMR20_address                        0xD8E
#define SMT1TMR20_position                       0x4
#define SMT1TMR20_size                           0x1
#define SMT1TMR20_value_mask                     0x10
#define SMT1TMR20_clear_mask                     0xEF

#define SMT1TMR21                                0x5
#define SMT1TMR21_address                        0xD8E
#define SMT1TMR21_position                       0x5
#define SMT1TMR21_size                           0x1
#define SMT1TMR21_value_mask                     0x20
#define SMT1TMR21_clear_mask                     0xDF

#define SMT1TMR22                                0x6
#define SMT1TMR22_address                        0xD8E
#define SMT1TMR22_position                       0x6
#define SMT1TMR22_size                           0x1
#define SMT1TMR22_value_mask                     0x40
#define SMT1TMR22_clear_mask                     0xBF

#define SMT1TMR23                                0x7
#define SMT1TMR23_address                        0xD8E
#define SMT1TMR23_position                       0x7
#define SMT1TMR23_size                           0x1
#define SMT1TMR23_value_mask                     0x80
#define SMT1TMR23_clear_mask                     0x7F


/*--------------------------------------------------------------------------------------#
| SMT1CPRL                                                                        0xD8F |
#---------------------------------------------------------------------------------------#
| SMT1CPR7 | SMT1CPR6 | SMT1CPR5 | SMT1CPR4 | SMT1CPR3 | SMT1CPR2 | SMT1CPR1 | SMT1CPR0 |
#---------------------------------------------------------------------------------------#
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
#--------------------------------------------------------------------------------------*/

#define SMT1CPRL                                 0x0
#define SMT1CPRL_address                         0xD8F
#define SMT1CPRL_position                        0x0
#define SMT1CPRL_size                            0x8
#define SMT1CPRL_value_mask                      0xFF
#define SMT1CPRL_clear_mask                      0x0

#define SMT1CPRL_SMT1CPR                         0x0
#define SMT1CPRL_SMT1CPR_address                 0xD8F
#define SMT1CPRL_SMT1CPR_position                0x0
#define SMT1CPRL_SMT1CPR_size                    0x8
#define SMT1CPRL_SMT1CPR_value_mask              0xFF
#define SMT1CPRL_SMT1CPR_clear_mask              0x0

#define SMT1CPR0                                 0x0
#define SMT1CPR0_address                         0xD8F
#define SMT1CPR0_position                        0x0
#define SMT1CPR0_size                            0x1
#define SMT1CPR0_value_mask                      0x1
#define SMT1CPR0_clear_mask                      0xFE

#define SMT1CPR1                                 0x1
#define SMT1CPR1_address                         0xD8F
#define SMT1CPR1_position                        0x1
#define SMT1CPR1_size                            0x1
#define SMT1CPR1_value_mask                      0x2
#define SMT1CPR1_clear_mask                      0xFD

#define SMT1CPR2                                 0x2
#define SMT1CPR2_address                         0xD8F
#define SMT1CPR2_position                        0x2
#define SMT1CPR2_size                            0x1
#define SMT1CPR2_value_mask                      0x4
#define SMT1CPR2_clear_mask                      0xFB

#define SMT1CPR3                                 0x3
#define SMT1CPR3_address                         0xD8F
#define SMT1CPR3_position                        0x3
#define SMT1CPR3_size                            0x1
#define SMT1CPR3_value_mask                      0x8
#define SMT1CPR3_clear_mask                      0xF7

#define SMT1CPR4                                 0x4
#define SMT1CPR4_address                         0xD8F
#define SMT1CPR4_position                        0x4
#define SMT1CPR4_size                            0x1
#define SMT1CPR4_value_mask                      0x10
#define SMT1CPR4_clear_mask                      0xEF

#define SMT1CPR5                                 0x5
#define SMT1CPR5_address                         0xD8F
#define SMT1CPR5_position                        0x5
#define SMT1CPR5_size                            0x1
#define SMT1CPR5_value_mask                      0x20
#define SMT1CPR5_clear_mask                      0xDF

#define SMT1CPR6                                 0x6
#define SMT1CPR6_address                         0xD8F
#define SMT1CPR6_position                        0x6
#define SMT1CPR6_size                            0x1
#define SMT1CPR6_value_mask                      0x40
#define SMT1CPR6_clear_mask                      0xBF

#define SMT1CPR7                                 0x7
#define SMT1CPR7_address                         0xD8F
#define SMT1CPR7_position                        0x7
#define SMT1CPR7_size                            0x1
#define SMT1CPR7_value_mask                      0x80
#define SMT1CPR7_clear_mask                      0x7F


/*--------------------------------------------------------------------------------------------#
| SMT1CPRH                                                                              0xD90 |
#---------------------------------------------------------------------------------------------#
| SMT1CPR15 | SMT1CPR14 | SMT1CPR13 | SMT1CPR12 | SMT1CPR11 | SMT1CPR10 | SMT1CPR9 | SMT1CPR8 |
#---------------------------------------------------------------------------------------------#
| 7         | 6         | 5         | 4         | 3         | 2         | 1        | 0        |
#--------------------------------------------------------------------------------------------*/

#define SMT1CPRH                                 0x0
#define SMT1CPRH_address                         0xD90
#define SMT1CPRH_position                        0x0
#define SMT1CPRH_size                            0x8
#define SMT1CPRH_value_mask                      0xFF
#define SMT1CPRH_clear_mask                      0x0

#define SMT1CPRH_SMT1CPR                         0x0
#define SMT1CPRH_SMT1CPR_address                 0xD90
#define SMT1CPRH_SMT1CPR_position                0x0
#define SMT1CPRH_SMT1CPR_size                    0x8
#define SMT1CPRH_SMT1CPR_value_mask              0xFF
#define SMT1CPRH_SMT1CPR_clear_mask              0x0

#define SMT1CPR8                                 0x0
#define SMT1CPR8_address                         0xD90
#define SMT1CPR8_position                        0x0
#define SMT1CPR8_size                            0x1
#define SMT1CPR8_value_mask                      0x1
#define SMT1CPR8_clear_mask                      0xFE

#define SMT1CPR9                                 0x1
#define SMT1CPR9_address                         0xD90
#define SMT1CPR9_position                        0x1
#define SMT1CPR9_size                            0x1
#define SMT1CPR9_value_mask                      0x2
#define SMT1CPR9_clear_mask                      0xFD

#define SMT1CPR10                                0x2
#define SMT1CPR10_address                        0xD90
#define SMT1CPR10_position                       0x2
#define SMT1CPR10_size                           0x1
#define SMT1CPR10_value_mask                     0x4
#define SMT1CPR10_clear_mask                     0xFB

#define SMT1CPR11                                0x3
#define SMT1CPR11_address                        0xD90
#define SMT1CPR11_position                       0x3
#define SMT1CPR11_size                           0x1
#define SMT1CPR11_value_mask                     0x8
#define SMT1CPR11_clear_mask                     0xF7

#define SMT1CPR12                                0x4
#define SMT1CPR12_address                        0xD90
#define SMT1CPR12_position                       0x4
#define SMT1CPR12_size                           0x1
#define SMT1CPR12_value_mask                     0x10
#define SMT1CPR12_clear_mask                     0xEF

#define SMT1CPR13                                0x5
#define SMT1CPR13_address                        0xD90
#define SMT1CPR13_position                       0x5
#define SMT1CPR13_size                           0x1
#define SMT1CPR13_value_mask                     0x20
#define SMT1CPR13_clear_mask                     0xDF

#define SMT1CPR14                                0x6
#define SMT1CPR14_address                        0xD90
#define SMT1CPR14_position                       0x6
#define SMT1CPR14_size                           0x1
#define SMT1CPR14_value_mask                     0x40
#define SMT1CPR14_clear_mask                     0xBF

#define SMT1CPR15                                0x7
#define SMT1CPR15_address                        0xD90
#define SMT1CPR15_position                       0x7
#define SMT1CPR15_size                           0x1
#define SMT1CPR15_value_mask                     0x80
#define SMT1CPR15_clear_mask                     0x7F


/*----------------------------------------------------------------------------------------------#
| SMT1CPRU                                                                                0xD91 |
#-----------------------------------------------------------------------------------------------#
| SMT1CPR23 | SMT1CPR22 | SMT1CPR21 | SMT1CPR20 | SMT1CPR19 | SMT1CPR18 | SMT1CPR17 | SMT1CPR16 |
#-----------------------------------------------------------------------------------------------#
| 7         | 6         | 5         | 4         | 3         | 2         | 1         | 0         |
#----------------------------------------------------------------------------------------------*/

#define SMT1CPRU                                 0x0
#define SMT1CPRU_address                         0xD91
#define SMT1CPRU_position                        0x0
#define SMT1CPRU_size                            0x8
#define SMT1CPRU_value_mask                      0xFF
#define SMT1CPRU_clear_mask                      0x0

#define SMT1CPR16                                0x0
#define SMT1CPR16_address                        0xD91
#define SMT1CPR16_position                       0x0
#define SMT1CPR16_size                           0x1
#define SMT1CPR16_value_mask                     0x1
#define SMT1CPR16_clear_mask                     0xFE

#define SMT1CPRU_SMT1CPR                         0x0
#define SMT1CPRU_SMT1CPR_address                 0xD91
#define SMT1CPRU_SMT1CPR_position                0x0
#define SMT1CPRU_SMT1CPR_size                    0x8
#define SMT1CPRU_SMT1CPR_value_mask              0xFF
#define SMT1CPRU_SMT1CPR_clear_mask              0x0

#define SMT1CPR17                                0x1
#define SMT1CPR17_address                        0xD91
#define SMT1CPR17_position                       0x1
#define SMT1CPR17_size                           0x1
#define SMT1CPR17_value_mask                     0x2
#define SMT1CPR17_clear_mask                     0xFD

#define SMT1CPR18                                0x2
#define SMT1CPR18_address                        0xD91
#define SMT1CPR18_position                       0x2
#define SMT1CPR18_size                           0x1
#define SMT1CPR18_value_mask                     0x4
#define SMT1CPR18_clear_mask                     0xFB

#define SMT1CPR19                                0x3
#define SMT1CPR19_address                        0xD91
#define SMT1CPR19_position                       0x3
#define SMT1CPR19_size                           0x1
#define SMT1CPR19_value_mask                     0x8
#define SMT1CPR19_clear_mask                     0xF7

#define SMT1CPR20                                0x4
#define SMT1CPR20_address                        0xD91
#define SMT1CPR20_position                       0x4
#define SMT1CPR20_size                           0x1
#define SMT1CPR20_value_mask                     0x10
#define SMT1CPR20_clear_mask                     0xEF

#define SMT1CPR21                                0x5
#define SMT1CPR21_address                        0xD91
#define SMT1CPR21_position                       0x5
#define SMT1CPR21_size                           0x1
#define SMT1CPR21_value_mask                     0x20
#define SMT1CPR21_clear_mask                     0xDF

#define SMT1CPR22                                0x6
#define SMT1CPR22_address                        0xD91
#define SMT1CPR22_position                       0x6
#define SMT1CPR22_size                           0x1
#define SMT1CPR22_value_mask                     0x40
#define SMT1CPR22_clear_mask                     0xBF

#define SMT1CPR23                                0x7
#define SMT1CPR23_address                        0xD91
#define SMT1CPR23_position                       0x7
#define SMT1CPR23_size                           0x1
#define SMT1CPR23_value_mask                     0x80
#define SMT1CPR23_clear_mask                     0x7F


/*--------------------------------------------------------------------------------------#
| SMT1CPWL                                                                        0xD92 |
#---------------------------------------------------------------------------------------#
| SMT1CPW7 | SMT1CPW6 | SMT1CPW5 | SMT1CPW4 | SMT1CPW3 | SMT1CPW2 | SMT1CPW1 | SMT1CPW0 |
#---------------------------------------------------------------------------------------#
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
#--------------------------------------------------------------------------------------*/

#define SMT1CPWL                                 0x0
#define SMT1CPWL_address                         0xD92
#define SMT1CPWL_position                        0x0
#define SMT1CPWL_size                            0x8
#define SMT1CPWL_value_mask                      0xFF
#define SMT1CPWL_clear_mask                      0x0

#define SMT1CPW0                                 0x0
#define SMT1CPW0_address                         0xD92
#define SMT1CPW0_position                        0x0
#define SMT1CPW0_size                            0x1
#define SMT1CPW0_value_mask                      0x1
#define SMT1CPW0_clear_mask                      0xFE

#define SMT1CPWL_SMT1CPW                         0x0
#define SMT1CPWL_SMT1CPW_address                 0xD92
#define SMT1CPWL_SMT1CPW_position                0x0
#define SMT1CPWL_SMT1CPW_size                    0x8
#define SMT1CPWL_SMT1CPW_value_mask              0xFF
#define SMT1CPWL_SMT1CPW_clear_mask              0x0

#define SMT1CPW1                                 0x1
#define SMT1CPW1_address                         0xD92
#define SMT1CPW1_position                        0x1
#define SMT1CPW1_size                            0x1
#define SMT1CPW1_value_mask                      0x2
#define SMT1CPW1_clear_mask                      0xFD

#define SMT1CPW2                                 0x2
#define SMT1CPW2_address                         0xD92
#define SMT1CPW2_position                        0x2
#define SMT1CPW2_size                            0x1
#define SMT1CPW2_value_mask                      0x4
#define SMT1CPW2_clear_mask                      0xFB

#define SMT1CPW3                                 0x3
#define SMT1CPW3_address                         0xD92
#define SMT1CPW3_position                        0x3
#define SMT1CPW3_size                            0x1
#define SMT1CPW3_value_mask                      0x8
#define SMT1CPW3_clear_mask                      0xF7

#define SMT1CPW4                                 0x4
#define SMT1CPW4_address                         0xD92
#define SMT1CPW4_position                        0x4
#define SMT1CPW4_size                            0x1
#define SMT1CPW4_value_mask                      0x10
#define SMT1CPW4_clear_mask                      0xEF

#define SMT1CPW5                                 0x5
#define SMT1CPW5_address                         0xD92
#define SMT1CPW5_position                        0x5
#define SMT1CPW5_size                            0x1
#define SMT1CPW5_value_mask                      0x20
#define SMT1CPW5_clear_mask                      0xDF

#define SMT1CPW6                                 0x6
#define SMT1CPW6_address                         0xD92
#define SMT1CPW6_position                        0x6
#define SMT1CPW6_size                            0x1
#define SMT1CPW6_value_mask                      0x40
#define SMT1CPW6_clear_mask                      0xBF

#define SMT1CPW7                                 0x7
#define SMT1CPW7_address                         0xD92
#define SMT1CPW7_position                        0x7
#define SMT1CPW7_size                            0x1
#define SMT1CPW7_value_mask                      0x80
#define SMT1CPW7_clear_mask                      0x7F


/*--------------------------------------------------------------------------------------------#
| SMT1CPWH                                                                              0xD93 |
#---------------------------------------------------------------------------------------------#
| SMT1CPW15 | SMT1CPW14 | SMT1CPW13 | SMT1CPW12 | SMT1CPW11 | SMT1CPW10 | SMT1CPW9 | SMT1CPW8 |
#---------------------------------------------------------------------------------------------#
| 7         | 6         | 5         | 4         | 3         | 2         | 1        | 0        |
#--------------------------------------------------------------------------------------------*/

#define SMT1CPWH                                 0x0
#define SMT1CPWH_address                         0xD93
#define SMT1CPWH_position                        0x0
#define SMT1CPWH_size                            0x8
#define SMT1CPWH_value_mask                      0xFF
#define SMT1CPWH_clear_mask                      0x0

#define SMT1CPW8                                 0x0
#define SMT1CPW8_address                         0xD93
#define SMT1CPW8_position                        0x0
#define SMT1CPW8_size                            0x1
#define SMT1CPW8_value_mask                      0x1
#define SMT1CPW8_clear_mask                      0xFE

#define SMT1CPWH_SMT1CPW                         0x0
#define SMT1CPWH_SMT1CPW_address                 0xD93
#define SMT1CPWH_SMT1CPW_position                0x0
#define SMT1CPWH_SMT1CPW_size                    0x8
#define SMT1CPWH_SMT1CPW_value_mask              0xFF
#define SMT1CPWH_SMT1CPW_clear_mask              0x0

#define SMT1CPW9                                 0x1
#define SMT1CPW9_address                         0xD93
#define SMT1CPW9_position                        0x1
#define SMT1CPW9_size                            0x1
#define SMT1CPW9_value_mask                      0x2
#define SMT1CPW9_clear_mask                      0xFD

#define SMT1CPW10                                0x2
#define SMT1CPW10_address                        0xD93
#define SMT1CPW10_position                       0x2
#define SMT1CPW10_size                           0x1
#define SMT1CPW10_value_mask                     0x4
#define SMT1CPW10_clear_mask                     0xFB

#define SMT1CPW11                                0x3
#define SMT1CPW11_address                        0xD93
#define SMT1CPW11_position                       0x3
#define SMT1CPW11_size                           0x1
#define SMT1CPW11_value_mask                     0x8
#define SMT1CPW11_clear_mask                     0xF7

#define SMT1CPW12                                0x4
#define SMT1CPW12_address                        0xD93
#define SMT1CPW12_position                       0x4
#define SMT1CPW12_size                           0x1
#define SMT1CPW12_value_mask                     0x10
#define SMT1CPW12_clear_mask                     0xEF

#define SMT1CPW13                                0x5
#define SMT1CPW13_address                        0xD93
#define SMT1CPW13_position                       0x5
#define SMT1CPW13_size                           0x1
#define SMT1CPW13_value_mask                     0x20
#define SMT1CPW13_clear_mask                     0xDF

#define SMT1CPW14                                0x6
#define SMT1CPW14_address                        0xD93
#define SMT1CPW14_position                       0x6
#define SMT1CPW14_size                           0x1
#define SMT1CPW14_value_mask                     0x40
#define SMT1CPW14_clear_mask                     0xBF

#define SMT1CPW15                                0x7
#define SMT1CPW15_address                        0xD93
#define SMT1CPW15_position                       0x7
#define SMT1CPW15_size                           0x1
#define SMT1CPW15_value_mask                     0x80
#define SMT1CPW15_clear_mask                     0x7F


/*----------------------------------------------------------------------------------------------#
| SMT1CPWU                                                                                0xD94 |
#-----------------------------------------------------------------------------------------------#
| SMT1CPW23 | SMT1CPW22 | SMT1CPW21 | SMT1CPW20 | SMT1CPW19 | SMT1CPW18 | SMT1CPW17 | SMT1CPW16 |
#-----------------------------------------------------------------------------------------------#
| 7         | 6         | 5         | 4         | 3         | 2         | 1         | 0         |
#----------------------------------------------------------------------------------------------*/

#define SMT1CPWU                                 0x0
#define SMT1CPWU_address                         0xD94
#define SMT1CPWU_position                        0x0
#define SMT1CPWU_size                            0x8
#define SMT1CPWU_value_mask                      0xFF
#define SMT1CPWU_clear_mask                      0x0

#define SMT1CPWU_SMT1CPW                         0x0
#define SMT1CPWU_SMT1CPW_address                 0xD94
#define SMT1CPWU_SMT1CPW_position                0x0
#define SMT1CPWU_SMT1CPW_size                    0x8
#define SMT1CPWU_SMT1CPW_value_mask              0xFF
#define SMT1CPWU_SMT1CPW_clear_mask              0x0

#define SMT1CPW16                                0x0
#define SMT1CPW16_address                        0xD94
#define SMT1CPW16_position                       0x0
#define SMT1CPW16_size                           0x1
#define SMT1CPW16_value_mask                     0x1
#define SMT1CPW16_clear_mask                     0xFE

#define SMT1CPW17                                0x1
#define SMT1CPW17_address                        0xD94
#define SMT1CPW17_position                       0x1
#define SMT1CPW17_size                           0x1
#define SMT1CPW17_value_mask                     0x2
#define SMT1CPW17_clear_mask                     0xFD

#define SMT1CPW18                                0x2
#define SMT1CPW18_address                        0xD94
#define SMT1CPW18_position                       0x2
#define SMT1CPW18_size                           0x1
#define SMT1CPW18_value_mask                     0x4
#define SMT1CPW18_clear_mask                     0xFB

#define SMT1CPW19                                0x3
#define SMT1CPW19_address                        0xD94
#define SMT1CPW19_position                       0x3
#define SMT1CPW19_size                           0x1
#define SMT1CPW19_value_mask                     0x8
#define SMT1CPW19_clear_mask                     0xF7

#define SMT1CPW20                                0x4
#define SMT1CPW20_address                        0xD94
#define SMT1CPW20_position                       0x4
#define SMT1CPW20_size                           0x1
#define SMT1CPW20_value_mask                     0x10
#define SMT1CPW20_clear_mask                     0xEF

#define SMT1CPW21                                0x5
#define SMT1CPW21_address                        0xD94
#define SMT1CPW21_position                       0x5
#define SMT1CPW21_size                           0x1
#define SMT1CPW21_value_mask                     0x20
#define SMT1CPW21_clear_mask                     0xDF

#define SMT1CPW22                                0x6
#define SMT1CPW22_address                        0xD94
#define SMT1CPW22_position                       0x6
#define SMT1CPW22_size                           0x1
#define SMT1CPW22_value_mask                     0x40
#define SMT1CPW22_clear_mask                     0xBF

#define SMT1CPW23                                0x7
#define SMT1CPW23_address                        0xD94
#define SMT1CPW23_position                       0x7
#define SMT1CPW23_size                           0x1
#define SMT1CPW23_value_mask                     0x80
#define SMT1CPW23_clear_mask                     0x7F


/*------------------------------------------------------------------------------#
| SMT1PRL                                                                 0xD95 |
#-------------------------------------------------------------------------------#
| SMT1PR7 | SMT1PR6 | SMT1PR5 | SMT1PR4 | SMT1PR3 | SMT1PR2 | SMT1PR1 | SMT1PR0 |
#-------------------------------------------------------------------------------#
| 7       | 6       | 5       | 4       | 3       | 2       | 1       | 0       |
#------------------------------------------------------------------------------*/

#define SMT1PRL                                  0x0
#define SMT1PRL_address                          0xD95
#define SMT1PRL_position                         0x0
#define SMT1PRL_size                             0x8
#define SMT1PRL_value_mask                       0xFF
#define SMT1PRL_clear_mask                       0x0

#define SMT1PR0                                  0x0
#define SMT1PR0_address                          0xD95
#define SMT1PR0_position                         0x0
#define SMT1PR0_size                             0x1
#define SMT1PR0_value_mask                       0x1
#define SMT1PR0_clear_mask                       0xFE

#define SMT1PRL_SMT1PR                           0x0
#define SMT1PRL_SMT1PR_address                   0xD95
#define SMT1PRL_SMT1PR_position                  0x0
#define SMT1PRL_SMT1PR_size                      0x8
#define SMT1PRL_SMT1PR_value_mask                0xFF
#define SMT1PRL_SMT1PR_clear_mask                0x0

#define SMT1PR1                                  0x1
#define SMT1PR1_address                          0xD95
#define SMT1PR1_position                         0x1
#define SMT1PR1_size                             0x1
#define SMT1PR1_value_mask                       0x2
#define SMT1PR1_clear_mask                       0xFD

#define SMT1PR2                                  0x2
#define SMT1PR2_address                          0xD95
#define SMT1PR2_position                         0x2
#define SMT1PR2_size                             0x1
#define SMT1PR2_value_mask                       0x4
#define SMT1PR2_clear_mask                       0xFB

#define SMT1PR3                                  0x3
#define SMT1PR3_address                          0xD95
#define SMT1PR3_position                         0x3
#define SMT1PR3_size                             0x1
#define SMT1PR3_value_mask                       0x8
#define SMT1PR3_clear_mask                       0xF7

#define SMT1PR4                                  0x4
#define SMT1PR4_address                          0xD95
#define SMT1PR4_position                         0x4
#define SMT1PR4_size                             0x1
#define SMT1PR4_value_mask                       0x10
#define SMT1PR4_clear_mask                       0xEF

#define SMT1PR5                                  0x5
#define SMT1PR5_address                          0xD95
#define SMT1PR5_position                         0x5
#define SMT1PR5_size                             0x1
#define SMT1PR5_value_mask                       0x20
#define SMT1PR5_clear_mask                       0xDF

#define SMT1PR6                                  0x6
#define SMT1PR6_address                          0xD95
#define SMT1PR6_position                         0x6
#define SMT1PR6_size                             0x1
#define SMT1PR6_value_mask                       0x40
#define SMT1PR6_clear_mask                       0xBF

#define SMT1PR7                                  0x7
#define SMT1PR7_address                          0xD95
#define SMT1PR7_position                         0x7
#define SMT1PR7_size                             0x1
#define SMT1PR7_value_mask                       0x80
#define SMT1PR7_clear_mask                       0x7F


/*------------------------------------------------------------------------------------#
| SMT1PRH                                                                       0xD96 |
#-------------------------------------------------------------------------------------#
| SMT1PR15 | SMT1PR14 | SMT1PR13 | SMT1PR12 | SMT1PR11 | SMT1PR10 | SMT1PR9 | SMT1PR8 |
#-------------------------------------------------------------------------------------#
| 7        | 6        | 5        | 4        | 3        | 2        | 1       | 0       |
#------------------------------------------------------------------------------------*/

#define SMT1PRH                                  0x0
#define SMT1PRH_address                          0xD96
#define SMT1PRH_position                         0x0
#define SMT1PRH_size                             0x8
#define SMT1PRH_value_mask                       0xFF
#define SMT1PRH_clear_mask                       0x0

#define SMT1PR8                                  0x0
#define SMT1PR8_address                          0xD96
#define SMT1PR8_position                         0x0
#define SMT1PR8_size                             0x1
#define SMT1PR8_value_mask                       0x1
#define SMT1PR8_clear_mask                       0xFE

#define SMT1PRH_SMT1PR                           0x0
#define SMT1PRH_SMT1PR_address                   0xD96
#define SMT1PRH_SMT1PR_position                  0x0
#define SMT1PRH_SMT1PR_size                      0x8
#define SMT1PRH_SMT1PR_value_mask                0xFF
#define SMT1PRH_SMT1PR_clear_mask                0x0

#define SMT1PR9                                  0x1
#define SMT1PR9_address                          0xD96
#define SMT1PR9_position                         0x1
#define SMT1PR9_size                             0x1
#define SMT1PR9_value_mask                       0x2
#define SMT1PR9_clear_mask                       0xFD

#define SMT1PR10                                 0x2
#define SMT1PR10_address                         0xD96
#define SMT1PR10_position                        0x2
#define SMT1PR10_size                            0x1
#define SMT1PR10_value_mask                      0x4
#define SMT1PR10_clear_mask                      0xFB

#define SMT1PR11                                 0x3
#define SMT1PR11_address                         0xD96
#define SMT1PR11_position                        0x3
#define SMT1PR11_size                            0x1
#define SMT1PR11_value_mask                      0x8
#define SMT1PR11_clear_mask                      0xF7

#define SMT1PR12                                 0x4
#define SMT1PR12_address                         0xD96
#define SMT1PR12_position                        0x4
#define SMT1PR12_size                            0x1
#define SMT1PR12_value_mask                      0x10
#define SMT1PR12_clear_mask                      0xEF

#define SMT1PR13                                 0x5
#define SMT1PR13_address                         0xD96
#define SMT1PR13_position                        0x5
#define SMT1PR13_size                            0x1
#define SMT1PR13_value_mask                      0x20
#define SMT1PR13_clear_mask                      0xDF

#define SMT1PR14                                 0x6
#define SMT1PR14_address                         0xD96
#define SMT1PR14_position                        0x6
#define SMT1PR14_size                            0x1
#define SMT1PR14_value_mask                      0x40
#define SMT1PR14_clear_mask                      0xBF

#define SMT1PR15                                 0x7
#define SMT1PR15_address                         0xD96
#define SMT1PR15_position                        0x7
#define SMT1PR15_size                            0x1
#define SMT1PR15_value_mask                      0x80
#define SMT1PR15_clear_mask                      0x7F


/*--------------------------------------------------------------------------------------#
| SMT1PRU                                                                         0xD97 |
#---------------------------------------------------------------------------------------#
| SMT1PR23 | SMT1PR22 | SMT1PR21 | SMT1PR20 | SMT1PR19 | SMT1PR18 | SMT1PR17 | SMT1PR16 |
#---------------------------------------------------------------------------------------#
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
#--------------------------------------------------------------------------------------*/

#define SMT1PRU                                  0x0
#define SMT1PRU_address                          0xD97
#define SMT1PRU_position                         0x0
#define SMT1PRU_size                             0x8
#define SMT1PRU_value_mask                       0xFF
#define SMT1PRU_clear_mask                       0x0

#define SMT1PR16                                 0x0
#define SMT1PR16_address                         0xD97
#define SMT1PR16_position                        0x0
#define SMT1PR16_size                            0x1
#define SMT1PR16_value_mask                      0x1
#define SMT1PR16_clear_mask                      0xFE

#define SMT1PRU_SMT1PR                           0x0
#define SMT1PRU_SMT1PR_address                   0xD97
#define SMT1PRU_SMT1PR_position                  0x0
#define SMT1PRU_SMT1PR_size                      0x8
#define SMT1PRU_SMT1PR_value_mask                0xFF
#define SMT1PRU_SMT1PR_clear_mask                0x0

#define SMT1PR17                                 0x1
#define SMT1PR17_address                         0xD97
#define SMT1PR17_position                        0x1
#define SMT1PR17_size                            0x1
#define SMT1PR17_value_mask                      0x2
#define SMT1PR17_clear_mask                      0xFD

#define SMT1PR18                                 0x2
#define SMT1PR18_address                         0xD97
#define SMT1PR18_position                        0x2
#define SMT1PR18_size                            0x1
#define SMT1PR18_value_mask                      0x4
#define SMT1PR18_clear_mask                      0xFB

#define SMT1PR19                                 0x3
#define SMT1PR19_address                         0xD97
#define SMT1PR19_position                        0x3
#define SMT1PR19_size                            0x1
#define SMT1PR19_value_mask                      0x8
#define SMT1PR19_clear_mask                      0xF7

#define SMT1PR20                                 0x4
#define SMT1PR20_address                         0xD97
#define SMT1PR20_position                        0x4
#define SMT1PR20_size                            0x1
#define SMT1PR20_value_mask                      0x10
#define SMT1PR20_clear_mask                      0xEF

#define SMT1PR21                                 0x5
#define SMT1PR21_address                         0xD97
#define SMT1PR21_position                        0x5
#define SMT1PR21_size                            0x1
#define SMT1PR21_value_mask                      0x20
#define SMT1PR21_clear_mask                      0xDF

#define SMT1PR22                                 0x6
#define SMT1PR22_address                         0xD97
#define SMT1PR22_position                        0x6
#define SMT1PR22_size                            0x1
#define SMT1PR22_value_mask                      0x40
#define SMT1PR22_clear_mask                      0xBF

#define SMT1PR23                                 0x7
#define SMT1PR23_address                         0xD97
#define SMT1PR23_position                        0x7
#define SMT1PR23_size                            0x1
#define SMT1PR23_value_mask                      0x80
#define SMT1PR23_clear_mask                      0x7F


/*---------------------------------------------------------------------------------------------------#
| SMT1CON0                                                                                     0xD98 |
#----------------------------------------------------------------------------------------------------#
| SMT1CON0_EN | - | SMT1CON0_STP | SMT1CON0_WPOL | SMT1CON0_SPOL | SMT1CON0_CPOL | SMT1PS1 | SMT1PS0 |
#----------------------------------------------------------------------------------------------------#
| 7           | 6 | 5            | 4             | 3             | 2             | 1       | 0       |
#---------------------------------------------------------------------------------------------------*/

#define SMT1CON0                                 0x0
#define SMT1CON0_address                         0xD98
#define SMT1CON0_position                        0x0
#define SMT1CON0_size                            0x8
#define SMT1CON0_value_mask                      0xFF
#define SMT1CON0_clear_mask                      0x0

#define SMT1PS0                                  0x0
#define SMT1PS0_address                          0xD98
#define SMT1PS0_position                         0x0
#define SMT1PS0_size                             0x1
#define SMT1PS0_value_mask                       0x1
#define SMT1PS0_clear_mask                       0xFE

#define SMT1PS                                   0x0
#define SMT1PS_address                           0xD98
#define SMT1PS_position                          0x0
#define SMT1PS_size                              0x2
#define SMT1PS_value_mask                        0x3
#define SMT1PS_clear_mask                        0xFC

#define SMT1PS1                                  0x1
#define SMT1PS1_address                          0xD98
#define SMT1PS1_position                         0x1
#define SMT1PS1_size                             0x1
#define SMT1PS1_value_mask                       0x2
#define SMT1PS1_clear_mask                       0xFD

#define SMT1CON0_CPOL                            0x2
#define SMT1CON0_CPOL_address                    0xD98
#define SMT1CON0_CPOL_position                   0x2
#define SMT1CON0_CPOL_size                       0x1
#define SMT1CON0_CPOL_value_mask                 0x4
#define SMT1CON0_CPOL_clear_mask                 0xFB

#define SMT1CON0_SPOL                            0x3
#define SMT1CON0_SPOL_address                    0xD98
#define SMT1CON0_SPOL_position                   0x3
#define SMT1CON0_SPOL_size                       0x1
#define SMT1CON0_SPOL_value_mask                 0x8
#define SMT1CON0_SPOL_clear_mask                 0xF7

#define SMT1CON0_WPOL                            0x4
#define SMT1CON0_WPOL_address                    0xD98
#define SMT1CON0_WPOL_position                   0x4
#define SMT1CON0_WPOL_size                       0x1
#define SMT1CON0_WPOL_value_mask                 0x10
#define SMT1CON0_WPOL_clear_mask                 0xEF

#define SMT1CON0_STP                             0x5
#define SMT1CON0_STP_address                     0xD98
#define SMT1CON0_STP_position                    0x5
#define SMT1CON0_STP_size                        0x1
#define SMT1CON0_STP_value_mask                  0x20
#define SMT1CON0_STP_clear_mask                  0xDF

#define SMT1CON0_EN                              0x7
#define SMT1CON0_EN_address                      0xD98
#define SMT1CON0_EN_position                     0x7
#define SMT1CON0_EN_size                         0x1
#define SMT1CON0_EN_value_mask                   0x80
#define SMT1CON0_EN_clear_mask                   0x7F


/*------------------------------------------------------------------------------------------------#
| SMT1CON1                                                                                  0xD99 |
#-------------------------------------------------------------------------------------------------#
| SMT1GO | SMT1REPEAT | - | - | SMT1CON1_MODE3 | SMT1CON1_MODE2 | SMT1CON1_MODE1 | SMT1CON1_MODE0 |
#-------------------------------------------------------------------------------------------------#
| 7      | 6          | 5 | 4 | 3              | 2              | 1              | 0              |
#------------------------------------------------------------------------------------------------*/

#define SMT1CON1                                 0x0
#define SMT1CON1_address                         0xD99
#define SMT1CON1_position                        0x0
#define SMT1CON1_size                            0x8
#define SMT1CON1_value_mask                      0xFF
#define SMT1CON1_clear_mask                      0x0

#define SMT1MODE0                                0x0
#define SMT1MODE0_address                        0xD99
#define SMT1MODE0_position                       0x0
#define SMT1MODE0_size                           0x1
#define SMT1MODE0_value_mask                     0x1
#define SMT1MODE0_clear_mask                     0xFE

#define SMT1CON1_MODE                            0x0
#define SMT1CON1_MODE_address                    0xD99
#define SMT1CON1_MODE_position                   0x0
#define SMT1CON1_MODE_size                       0x4
#define SMT1CON1_MODE_value_mask                 0xF
#define SMT1CON1_MODE_clear_mask                 0xF0

#define SMT1CON1_MODE0                           0x0
#define SMT1CON1_MODE0_address                   0xD99
#define SMT1CON1_MODE0_position                  0x0
#define SMT1CON1_MODE0_size                      0x1
#define SMT1CON1_MODE0_value_mask                0x1
#define SMT1CON1_MODE0_clear_mask                0xFE

#define SMT1MODE                                 0x0
#define SMT1MODE_address                         0xD99
#define SMT1MODE_position                        0x0
#define SMT1MODE_size                            0x4
#define SMT1MODE_value_mask                      0xF
#define SMT1MODE_clear_mask                      0xF0

#define SMT1CON1_MODE1                           0x1
#define SMT1CON1_MODE1_address                   0xD99
#define SMT1CON1_MODE1_position                  0x1
#define SMT1CON1_MODE1_size                      0x1
#define SMT1CON1_MODE1_value_mask                0x2
#define SMT1CON1_MODE1_clear_mask                0xFD

#define SMT1MODE1                                0x1
#define SMT1MODE1_address                        0xD99
#define SMT1MODE1_position                       0x1
#define SMT1MODE1_size                           0x1
#define SMT1MODE1_value_mask                     0x2
#define SMT1MODE1_clear_mask                     0xFD

#define SMT1CON1_MODE2                           0x2
#define SMT1CON1_MODE2_address                   0xD99
#define SMT1CON1_MODE2_position                  0x2
#define SMT1CON1_MODE2_size                      0x1
#define SMT1CON1_MODE2_value_mask                0x4
#define SMT1CON1_MODE2_clear_mask                0xFB

#define SMT1MODE2                                0x2
#define SMT1MODE2_address                        0xD99
#define SMT1MODE2_position                       0x2
#define SMT1MODE2_size                           0x1
#define SMT1MODE2_value_mask                     0x4
#define SMT1MODE2_clear_mask                     0xFB

#define SMT1CON1_MODE3                           0x3
#define SMT1CON1_MODE3_address                   0xD99
#define SMT1CON1_MODE3_position                  0x3
#define SMT1CON1_MODE3_size                      0x1
#define SMT1CON1_MODE3_value_mask                0x8
#define SMT1CON1_MODE3_clear_mask                0xF7

#define SMT1MODE3                                0x3
#define SMT1MODE3_address                        0xD99
#define SMT1MODE3_position                       0x3
#define SMT1MODE3_size                           0x1
#define SMT1MODE3_value_mask                     0x8
#define SMT1MODE3_clear_mask                     0xF7

#define SMT1CON1_REPEAT                          0x6
#define SMT1CON1_REPEAT_address                  0xD99
#define SMT1CON1_REPEAT_position                 0x6
#define SMT1CON1_REPEAT_size                     0x1
#define SMT1CON1_REPEAT_value_mask               0x40
#define SMT1CON1_REPEAT_clear_mask               0xBF

#define SMT1REPEAT                               0x6
#define SMT1REPEAT_address                       0xD99
#define SMT1REPEAT_position                      0x6
#define SMT1REPEAT_size                          0x1
#define SMT1REPEAT_value_mask                    0x40
#define SMT1REPEAT_clear_mask                    0xBF

#define SMT1GO                                   0x7
#define SMT1GO_address                           0xD99
#define SMT1GO_position                          0x7
#define SMT1GO_size                              0x1
#define SMT1GO_value_mask                        0x80
#define SMT1GO_clear_mask                        0x7F


/*-------------------------------------------------------------------------------#
| SMT1STAT                                                                 0xD9A |
#--------------------------------------------------------------------------------#
| SMT1CPRUP | SMT1CPWUP | SMT1RESET | - | - | SMT1STAT_TS | SMT1STAT_WS | SMT1AS |
#--------------------------------------------------------------------------------#
| 7         | 6         | 5         | 4 | 3 | 2           | 1           | 0      |
#-------------------------------------------------------------------------------*/

#define SMT1STAT                                 0x0
#define SMT1STAT_address                         0xD9A
#define SMT1STAT_position                        0x0
#define SMT1STAT_size                            0x8
#define SMT1STAT_value_mask                      0xFF
#define SMT1STAT_clear_mask                      0x0

#define SMT1STAT_AS                              0x0
#define SMT1STAT_AS_address                      0xD9A
#define SMT1STAT_AS_position                     0x0
#define SMT1STAT_AS_size                         0x1
#define SMT1STAT_AS_value_mask                   0x1
#define SMT1STAT_AS_clear_mask                   0xFE

#define SMT1AS                                   0x0
#define SMT1AS_address                           0xD9A
#define SMT1AS_position                          0x0
#define SMT1AS_size                              0x1
#define SMT1AS_value_mask                        0x1
#define SMT1AS_clear_mask                        0xFE

#define SMT1STAT_WS                              0x1
#define SMT1STAT_WS_address                      0xD9A
#define SMT1STAT_WS_position                     0x1
#define SMT1STAT_WS_size                         0x1
#define SMT1STAT_WS_value_mask                   0x2
#define SMT1STAT_WS_clear_mask                   0xFD

#define SMT1WS                                   0x1
#define SMT1WS_address                           0xD9A
#define SMT1WS_position                          0x1
#define SMT1WS_size                              0x1
#define SMT1WS_value_mask                        0x2
#define SMT1WS_clear_mask                        0xFD

#define SMT1STAT_TS                              0x2
#define SMT1STAT_TS_address                      0xD9A
#define SMT1STAT_TS_position                     0x2
#define SMT1STAT_TS_size                         0x1
#define SMT1STAT_TS_value_mask                   0x4
#define SMT1STAT_TS_clear_mask                   0xFB

#define SMT1TS                                   0x2
#define SMT1TS_address                           0xD9A
#define SMT1TS_position                          0x2
#define SMT1TS_size                              0x1
#define SMT1TS_value_mask                        0x4
#define SMT1TS_clear_mask                        0xFB

#define SMT1RESET                                0x5
#define SMT1RESET_address                        0xD9A
#define SMT1RESET_position                       0x5
#define SMT1RESET_size                           0x1
#define SMT1RESET_value_mask                     0x20
#define SMT1RESET_clear_mask                     0xDF

#define SMT1STAT_RST                             0x5
#define SMT1STAT_RST_address                     0xD9A
#define SMT1STAT_RST_position                    0x5
#define SMT1STAT_RST_size                        0x1
#define SMT1STAT_RST_value_mask                  0x20
#define SMT1STAT_RST_clear_mask                  0xDF

#define SMT1CPWUP                                0x6
#define SMT1CPWUP_address                        0xD9A
#define SMT1CPWUP_position                       0x6
#define SMT1CPWUP_size                           0x1
#define SMT1CPWUP_value_mask                     0x40
#define SMT1CPWUP_clear_mask                     0xBF

#define SMT1STAT_CPWUP                           0x6
#define SMT1STAT_CPWUP_address                   0xD9A
#define SMT1STAT_CPWUP_position                  0x6
#define SMT1STAT_CPWUP_size                      0x1
#define SMT1STAT_CPWUP_value_mask                0x40
#define SMT1STAT_CPWUP_clear_mask                0xBF

#define SMT1CPRUP                                0x7
#define SMT1CPRUP_address                        0xD9A
#define SMT1CPRUP_position                       0x7
#define SMT1CPRUP_size                           0x1
#define SMT1CPRUP_value_mask                     0x80
#define SMT1CPRUP_clear_mask                     0x7F

#define SMT1STAT_CPRUP                           0x7
#define SMT1STAT_CPRUP_address                   0xD9A
#define SMT1STAT_CPRUP_position                  0x7
#define SMT1STAT_CPRUP_size                      0x1
#define SMT1STAT_CPRUP_value_mask                0x80
#define SMT1STAT_CPRUP_clear_mask                0x7F


/*------------------------------------------------------#
| SMT1CLK                                         0xD9B |
#-------------------------------------------------------#
| - | - | - | - | - | SMT1CSEL2 | SMT1CSEL1 | SMT1CSEL0 |
#-------------------------------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2         | 1         | 0         |
#------------------------------------------------------*/

#define SMT1CLK                                  0x0
#define SMT1CLK_address                          0xD9B
#define SMT1CLK_position                         0x0
#define SMT1CLK_size                             0x8
#define SMT1CLK_value_mask                       0xFF
#define SMT1CLK_clear_mask                       0x0

#define SMT1CLK_CSEL0                            0x0
#define SMT1CLK_CSEL0_address                    0xD9B
#define SMT1CLK_CSEL0_position                   0x0
#define SMT1CLK_CSEL0_size                       0x1
#define SMT1CLK_CSEL0_value_mask                 0x1
#define SMT1CLK_CSEL0_clear_mask                 0xFE

#define SMT1CSEL0                                0x0
#define SMT1CSEL0_address                        0xD9B
#define SMT1CSEL0_position                       0x0
#define SMT1CSEL0_size                           0x1
#define SMT1CSEL0_value_mask                     0x1
#define SMT1CSEL0_clear_mask                     0xFE

#define SMT1CSEL                                 0x0
#define SMT1CSEL_address                         0xD9B
#define SMT1CSEL_position                        0x0
#define SMT1CSEL_size                            0x8
#define SMT1CSEL_value_mask                      0xFF
#define SMT1CSEL_clear_mask                      0x0

#define SMT1CLK_CSEL                             0x0
#define SMT1CLK_CSEL_address                     0xD9B
#define SMT1CLK_CSEL_position                    0x0
#define SMT1CLK_CSEL_size                        0x8
#define SMT1CLK_CSEL_value_mask                  0xFF
#define SMT1CLK_CSEL_clear_mask                  0x0

#define SMT1CSEL1                                0x1
#define SMT1CSEL1_address                        0xD9B
#define SMT1CSEL1_position                       0x1
#define SMT1CSEL1_size                           0x1
#define SMT1CSEL1_value_mask                     0x2
#define SMT1CSEL1_clear_mask                     0xFD

#define SMT1CLK_CSEL1                            0x1
#define SMT1CLK_CSEL1_address                    0xD9B
#define SMT1CLK_CSEL1_position                   0x1
#define SMT1CLK_CSEL1_size                       0x1
#define SMT1CLK_CSEL1_value_mask                 0x2
#define SMT1CLK_CSEL1_clear_mask                 0xFD

#define SMT1CSEL2                                0x2
#define SMT1CSEL2_address                        0xD9B
#define SMT1CSEL2_position                       0x2
#define SMT1CSEL2_size                           0x1
#define SMT1CSEL2_value_mask                     0x4
#define SMT1CSEL2_clear_mask                     0xFB

#define SMT1CLK_CSEL2                            0x2
#define SMT1CLK_CSEL2_address                    0xD9B
#define SMT1CLK_CSEL2_position                   0x2
#define SMT1CLK_CSEL2_size                       0x1
#define SMT1CLK_CSEL2_value_mask                 0x4
#define SMT1CLK_CSEL2_clear_mask                 0xFB


/*------------------------------------------------------------------#
| SMT1SIG                                                     0xD9C |
#-------------------------------------------------------------------#
| - | - | - | - | - | SMT1SIG_SSEL2 | SMT1SIG_SSEL1 | SMT1SIG_SSEL0 |
#-------------------------------------------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2             | 1             | 0             |
#------------------------------------------------------------------*/

#define SMT1SIG                                  0x0
#define SMT1SIG_address                          0xD9C
#define SMT1SIG_position                         0x0
#define SMT1SIG_size                             0x8
#define SMT1SIG_value_mask                       0xFF
#define SMT1SIG_clear_mask                       0x0

#define SMT1SSEL                                 0x0
#define SMT1SSEL_address                         0xD9C
#define SMT1SSEL_position                        0x0
#define SMT1SSEL_size                            0x8
#define SMT1SSEL_value_mask                      0xFF
#define SMT1SSEL_clear_mask                      0x0

#define SMT1SIG_SSEL0                            0x0
#define SMT1SIG_SSEL0_address                    0xD9C
#define SMT1SIG_SSEL0_position                   0x0
#define SMT1SIG_SSEL0_size                       0x1
#define SMT1SIG_SSEL0_value_mask                 0x1
#define SMT1SIG_SSEL0_clear_mask                 0xFE

#define SMT1SIG_SSEL                             0x0
#define SMT1SIG_SSEL_address                     0xD9C
#define SMT1SIG_SSEL_position                    0x0
#define SMT1SIG_SSEL_size                        0x8
#define SMT1SIG_SSEL_value_mask                  0xFF
#define SMT1SIG_SSEL_clear_mask                  0x0

#define SMT1SSEL0                                0x0
#define SMT1SSEL0_address                        0xD9C
#define SMT1SSEL0_position                       0x0
#define SMT1SSEL0_size                           0x1
#define SMT1SSEL0_value_mask                     0x1
#define SMT1SSEL0_clear_mask                     0xFE

#define SMT1SIG_SSEL1                            0x1
#define SMT1SIG_SSEL1_address                    0xD9C
#define SMT1SIG_SSEL1_position                   0x1
#define SMT1SIG_SSEL1_size                       0x1
#define SMT1SIG_SSEL1_value_mask                 0x2
#define SMT1SIG_SSEL1_clear_mask                 0xFD

#define SMT1SSEL1                                0x1
#define SMT1SSEL1_address                        0xD9C
#define SMT1SSEL1_position                       0x1
#define SMT1SSEL1_size                           0x1
#define SMT1SSEL1_value_mask                     0x2
#define SMT1SSEL1_clear_mask                     0xFD

#define SMT1SIG_SSEL2                            0x2
#define SMT1SIG_SSEL2_address                    0xD9C
#define SMT1SIG_SSEL2_position                   0x2
#define SMT1SIG_SSEL2_size                       0x1
#define SMT1SIG_SSEL2_value_mask                 0x4
#define SMT1SIG_SSEL2_clear_mask                 0xFB

#define SMT1SSEL2                                0x2
#define SMT1SSEL2_address                        0xD9C
#define SMT1SSEL2_position                       0x2
#define SMT1SSEL2_size                           0x1
#define SMT1SSEL2_value_mask                     0x4
#define SMT1SSEL2_clear_mask                     0xFB


/*------------------------------------------------------------------------------#
| SMT1WIN                                                                 0xD9D |
#-------------------------------------------------------------------------------#
| - | - | - | - | SMT1WIN_WSEL3 | SMT1WIN_WSEL2 | SMT1WIN_WSEL1 | SMT1WIN_WSEL0 |
#-------------------------------------------------------------------------------#
| 7 | 6 | 5 | 4 | 3             | 2             | 1             | 0             |
#------------------------------------------------------------------------------*/

#define SMT1WIN                                  0x0
#define SMT1WIN_address                          0xD9D
#define SMT1WIN_position                         0x0
#define SMT1WIN_size                             0x8
#define SMT1WIN_value_mask                       0xFF
#define SMT1WIN_clear_mask                       0x0

#define SMT1WSEL                                 0x0
#define SMT1WSEL_address                         0xD9D
#define SMT1WSEL_position                        0x0
#define SMT1WSEL_size                            0x8
#define SMT1WSEL_value_mask                      0xFF
#define SMT1WSEL_clear_mask                      0x0

#define SMT1WSEL0                                0x0
#define SMT1WSEL0_address                        0xD9D
#define SMT1WSEL0_position                       0x0
#define SMT1WSEL0_size                           0x1
#define SMT1WSEL0_value_mask                     0x1
#define SMT1WSEL0_clear_mask                     0xFE

#define SMT1WIN_WSEL0                            0x0
#define SMT1WIN_WSEL0_address                    0xD9D
#define SMT1WIN_WSEL0_position                   0x0
#define SMT1WIN_WSEL0_size                       0x1
#define SMT1WIN_WSEL0_value_mask                 0x1
#define SMT1WIN_WSEL0_clear_mask                 0xFE

#define SMT1WIN_WSEL                             0x0
#define SMT1WIN_WSEL_address                     0xD9D
#define SMT1WIN_WSEL_position                    0x0
#define SMT1WIN_WSEL_size                        0x8
#define SMT1WIN_WSEL_value_mask                  0xFF
#define SMT1WIN_WSEL_clear_mask                  0x0

#define SMT1WSEL1                                0x1
#define SMT1WSEL1_address                        0xD9D
#define SMT1WSEL1_position                       0x1
#define SMT1WSEL1_size                           0x1
#define SMT1WSEL1_value_mask                     0x2
#define SMT1WSEL1_clear_mask                     0xFD

#define SMT1WIN_WSEL1                            0x1
#define SMT1WIN_WSEL1_address                    0xD9D
#define SMT1WIN_WSEL1_position                   0x1
#define SMT1WIN_WSEL1_size                       0x1
#define SMT1WIN_WSEL1_value_mask                 0x2
#define SMT1WIN_WSEL1_clear_mask                 0xFD

#define SMT1WIN_WSEL2                            0x2
#define SMT1WIN_WSEL2_address                    0xD9D
#define SMT1WIN_WSEL2_position                   0x2
#define SMT1WIN_WSEL2_size                       0x1
#define SMT1WIN_WSEL2_value_mask                 0x4
#define SMT1WIN_WSEL2_clear_mask                 0xFB

#define SMT1WSEL2                                0x2
#define SMT1WSEL2_address                        0xD9D
#define SMT1WSEL2_position                       0x2
#define SMT1WSEL2_size                           0x1
#define SMT1WSEL2_value_mask                     0x4
#define SMT1WSEL2_clear_mask                     0xFB

#define SMT1WIN_WSEL3                            0x3
#define SMT1WIN_WSEL3_address                    0xD9D
#define SMT1WIN_WSEL3_position                   0x3
#define SMT1WIN_WSEL3_size                       0x1
#define SMT1WIN_WSEL3_value_mask                 0x8
#define SMT1WIN_WSEL3_clear_mask                 0xF7

#define SMT1WSEL3                                0x3
#define SMT1WSEL3_address                        0xD9D
#define SMT1WSEL3_position                       0x3
#define SMT1WSEL3_size                           0x1
#define SMT1WSEL3_value_mask                     0x8
#define SMT1WSEL3_clear_mask                     0xF7


/*--------------------------------------------------------------------------------------#
| SMT2TMRL                                                                        0xD9E |
#---------------------------------------------------------------------------------------#
| SMT2TMR7 | SMT2TMR6 | SMT2TMR5 | SMT2TMR4 | SMT2TMR3 | SMT2TMR2 | SMT2TMR1 | SMT2TMR0 |
#---------------------------------------------------------------------------------------#
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
#--------------------------------------------------------------------------------------*/

#define SMT2TMRL                                 0x0
#define SMT2TMRL_address                         0xD9E
#define SMT2TMRL_position                        0x0
#define SMT2TMRL_size                            0x8
#define SMT2TMRL_value_mask                      0xFF
#define SMT2TMRL_clear_mask                      0x0

#define SMT2TMRL_SMT2TMR                         0x0
#define SMT2TMRL_SMT2TMR_address                 0xD9E
#define SMT2TMRL_SMT2TMR_position                0x0
#define SMT2TMRL_SMT2TMR_size                    0x8
#define SMT2TMRL_SMT2TMR_value_mask              0xFF
#define SMT2TMRL_SMT2TMR_clear_mask              0x0

#define SMT2TMR0                                 0x0
#define SMT2TMR0_address                         0xD9E
#define SMT2TMR0_position                        0x0
#define SMT2TMR0_size                            0x1
#define SMT2TMR0_value_mask                      0x1
#define SMT2TMR0_clear_mask                      0xFE

#define SMT2TMR1                                 0x1
#define SMT2TMR1_address                         0xD9E
#define SMT2TMR1_position                        0x1
#define SMT2TMR1_size                            0x1
#define SMT2TMR1_value_mask                      0x2
#define SMT2TMR1_clear_mask                      0xFD

#define SMT2TMR2                                 0x2
#define SMT2TMR2_address                         0xD9E
#define SMT2TMR2_position                        0x2
#define SMT2TMR2_size                            0x1
#define SMT2TMR2_value_mask                      0x4
#define SMT2TMR2_clear_mask                      0xFB

#define SMT2TMR3                                 0x3
#define SMT2TMR3_address                         0xD9E
#define SMT2TMR3_position                        0x3
#define SMT2TMR3_size                            0x1
#define SMT2TMR3_value_mask                      0x8
#define SMT2TMR3_clear_mask                      0xF7

#define SMT2TMR4                                 0x4
#define SMT2TMR4_address                         0xD9E
#define SMT2TMR4_position                        0x4
#define SMT2TMR4_size                            0x1
#define SMT2TMR4_value_mask                      0x10
#define SMT2TMR4_clear_mask                      0xEF

#define SMT2TMR5                                 0x5
#define SMT2TMR5_address                         0xD9E
#define SMT2TMR5_position                        0x5
#define SMT2TMR5_size                            0x1
#define SMT2TMR5_value_mask                      0x20
#define SMT2TMR5_clear_mask                      0xDF

#define SMT2TMR6                                 0x6
#define SMT2TMR6_address                         0xD9E
#define SMT2TMR6_position                        0x6
#define SMT2TMR6_size                            0x1
#define SMT2TMR6_value_mask                      0x40
#define SMT2TMR6_clear_mask                      0xBF

#define SMT2TMR7                                 0x7
#define SMT2TMR7_address                         0xD9E
#define SMT2TMR7_position                        0x7
#define SMT2TMR7_size                            0x1
#define SMT2TMR7_value_mask                      0x80
#define SMT2TMR7_clear_mask                      0x7F


/*--------------------------------------------------------------------------------------------#
| SMT2TMRH                                                                              0xD9F |
#---------------------------------------------------------------------------------------------#
| SMT2TMR15 | SMT2TMR14 | SMT2TMR13 | SMT2TMR12 | SMT2TMR11 | SMT2TMR10 | SMT2TMR9 | SMT2TMR8 |
#---------------------------------------------------------------------------------------------#
| 7         | 6         | 5         | 4         | 3         | 2         | 1        | 0        |
#--------------------------------------------------------------------------------------------*/

#define SMT2TMRH                                 0x0
#define SMT2TMRH_address                         0xD9F
#define SMT2TMRH_position                        0x0
#define SMT2TMRH_size                            0x8
#define SMT2TMRH_value_mask                      0xFF
#define SMT2TMRH_clear_mask                      0x0

#define SMT2TMR8                                 0x0
#define SMT2TMR8_address                         0xD9F
#define SMT2TMR8_position                        0x0
#define SMT2TMR8_size                            0x1
#define SMT2TMR8_value_mask                      0x1
#define SMT2TMR8_clear_mask                      0xFE

#define SMT2TMRH_SMT2TMR                         0x0
#define SMT2TMRH_SMT2TMR_address                 0xD9F
#define SMT2TMRH_SMT2TMR_position                0x0
#define SMT2TMRH_SMT2TMR_size                    0x8
#define SMT2TMRH_SMT2TMR_value_mask              0xFF
#define SMT2TMRH_SMT2TMR_clear_mask              0x0

#define SMT2TMR9                                 0x1
#define SMT2TMR9_address                         0xD9F
#define SMT2TMR9_position                        0x1
#define SMT2TMR9_size                            0x1
#define SMT2TMR9_value_mask                      0x2
#define SMT2TMR9_clear_mask                      0xFD

#define SMT2TMR10                                0x2
#define SMT2TMR10_address                        0xD9F
#define SMT2TMR10_position                       0x2
#define SMT2TMR10_size                           0x1
#define SMT2TMR10_value_mask                     0x4
#define SMT2TMR10_clear_mask                     0xFB

#define SMT2TMR11                                0x3
#define SMT2TMR11_address                        0xD9F
#define SMT2TMR11_position                       0x3
#define SMT2TMR11_size                           0x1
#define SMT2TMR11_value_mask                     0x8
#define SMT2TMR11_clear_mask                     0xF7

#define SMT2TMR12                                0x4
#define SMT2TMR12_address                        0xD9F
#define SMT2TMR12_position                       0x4
#define SMT2TMR12_size                           0x1
#define SMT2TMR12_value_mask                     0x10
#define SMT2TMR12_clear_mask                     0xEF

#define SMT2TMR13                                0x5
#define SMT2TMR13_address                        0xD9F
#define SMT2TMR13_position                       0x5
#define SMT2TMR13_size                           0x1
#define SMT2TMR13_value_mask                     0x20
#define SMT2TMR13_clear_mask                     0xDF

#define SMT2TMR14                                0x6
#define SMT2TMR14_address                        0xD9F
#define SMT2TMR14_position                       0x6
#define SMT2TMR14_size                           0x1
#define SMT2TMR14_value_mask                     0x40
#define SMT2TMR14_clear_mask                     0xBF

#define SMT2TMR15                                0x7
#define SMT2TMR15_address                        0xD9F
#define SMT2TMR15_position                       0x7
#define SMT2TMR15_size                           0x1
#define SMT2TMR15_value_mask                     0x80
#define SMT2TMR15_clear_mask                     0x7F


/*----------------------------------------------------------------------------------------------#
| SMT2TMRU                                                                                0xDA0 |
#-----------------------------------------------------------------------------------------------#
| SMT2TMR23 | SMT2TMR22 | SMT2TMR21 | SMT2TMR20 | SMT2TMR19 | SMT2TMR18 | SMT2TMR17 | SMT2TMR16 |
#-----------------------------------------------------------------------------------------------#
| 7         | 6         | 5         | 4         | 3         | 2         | 1         | 0         |
#----------------------------------------------------------------------------------------------*/

#define SMT2TMRU                                 0x0
#define SMT2TMRU_address                         0xDA0
#define SMT2TMRU_position                        0x0
#define SMT2TMRU_size                            0x8
#define SMT2TMRU_value_mask                      0xFF
#define SMT2TMRU_clear_mask                      0x0

#define SMT2TMR16                                0x0
#define SMT2TMR16_address                        0xDA0
#define SMT2TMR16_position                       0x0
#define SMT2TMR16_size                           0x1
#define SMT2TMR16_value_mask                     0x1
#define SMT2TMR16_clear_mask                     0xFE

#define SMT2TMRU_SMT2TMR                         0x0
#define SMT2TMRU_SMT2TMR_address                 0xDA0
#define SMT2TMRU_SMT2TMR_position                0x0
#define SMT2TMRU_SMT2TMR_size                    0x8
#define SMT2TMRU_SMT2TMR_value_mask              0xFF
#define SMT2TMRU_SMT2TMR_clear_mask              0x0

#define SMT2TMR17                                0x1
#define SMT2TMR17_address                        0xDA0
#define SMT2TMR17_position                       0x1
#define SMT2TMR17_size                           0x1
#define SMT2TMR17_value_mask                     0x2
#define SMT2TMR17_clear_mask                     0xFD

#define SMT2TMR18                                0x2
#define SMT2TMR18_address                        0xDA0
#define SMT2TMR18_position                       0x2
#define SMT2TMR18_size                           0x1
#define SMT2TMR18_value_mask                     0x4
#define SMT2TMR18_clear_mask                     0xFB

#define SMT2TMR19                                0x3
#define SMT2TMR19_address                        0xDA0
#define SMT2TMR19_position                       0x3
#define SMT2TMR19_size                           0x1
#define SMT2TMR19_value_mask                     0x8
#define SMT2TMR19_clear_mask                     0xF7

#define SMT2TMR20                                0x4
#define SMT2TMR20_address                        0xDA0
#define SMT2TMR20_position                       0x4
#define SMT2TMR20_size                           0x1
#define SMT2TMR20_value_mask                     0x10
#define SMT2TMR20_clear_mask                     0xEF

#define SMT2TMR21                                0x5
#define SMT2TMR21_address                        0xDA0
#define SMT2TMR21_position                       0x5
#define SMT2TMR21_size                           0x1
#define SMT2TMR21_value_mask                     0x20
#define SMT2TMR21_clear_mask                     0xDF

#define SMT2TMR22                                0x6
#define SMT2TMR22_address                        0xDA0
#define SMT2TMR22_position                       0x6
#define SMT2TMR22_size                           0x1
#define SMT2TMR22_value_mask                     0x40
#define SMT2TMR22_clear_mask                     0xBF

#define SMT2TMR23                                0x7
#define SMT2TMR23_address                        0xDA0
#define SMT2TMR23_position                       0x7
#define SMT2TMR23_size                           0x1
#define SMT2TMR23_value_mask                     0x80
#define SMT2TMR23_clear_mask                     0x7F


/*--------------------------------------------------------------------------------------#
| SMT2CPRL                                                                        0xDA1 |
#---------------------------------------------------------------------------------------#
| SMT2CPR7 | SMT2CPR6 | SMT2CPR5 | SMT2CPR4 | SMT2CPR3 | SMT2CPR2 | SMT2CPR1 | SMT2CPR0 |
#---------------------------------------------------------------------------------------#
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
#--------------------------------------------------------------------------------------*/

#define SMT2CPRL                                 0x0
#define SMT2CPRL_address                         0xDA1
#define SMT2CPRL_position                        0x0
#define SMT2CPRL_size                            0x8
#define SMT2CPRL_value_mask                      0xFF
#define SMT2CPRL_clear_mask                      0x0

#define SMT2CPRL_SMT2CPR                         0x0
#define SMT2CPRL_SMT2CPR_address                 0xDA1
#define SMT2CPRL_SMT2CPR_position                0x0
#define SMT2CPRL_SMT2CPR_size                    0x8
#define SMT2CPRL_SMT2CPR_value_mask              0xFF
#define SMT2CPRL_SMT2CPR_clear_mask              0x0

#define SMT2CPR0                                 0x0
#define SMT2CPR0_address                         0xDA1
#define SMT2CPR0_position                        0x0
#define SMT2CPR0_size                            0x1
#define SMT2CPR0_value_mask                      0x1
#define SMT2CPR0_clear_mask                      0xFE

#define SMT2CPR1                                 0x1
#define SMT2CPR1_address                         0xDA1
#define SMT2CPR1_position                        0x1
#define SMT2CPR1_size                            0x1
#define SMT2CPR1_value_mask                      0x2
#define SMT2CPR1_clear_mask                      0xFD

#define SMT2CPR2                                 0x2
#define SMT2CPR2_address                         0xDA1
#define SMT2CPR2_position                        0x2
#define SMT2CPR2_size                            0x1
#define SMT2CPR2_value_mask                      0x4
#define SMT2CPR2_clear_mask                      0xFB

#define SMT2CPR3                                 0x3
#define SMT2CPR3_address                         0xDA1
#define SMT2CPR3_position                        0x3
#define SMT2CPR3_size                            0x1
#define SMT2CPR3_value_mask                      0x8
#define SMT2CPR3_clear_mask                      0xF7

#define SMT2CPR4                                 0x4
#define SMT2CPR4_address                         0xDA1
#define SMT2CPR4_position                        0x4
#define SMT2CPR4_size                            0x1
#define SMT2CPR4_value_mask                      0x10
#define SMT2CPR4_clear_mask                      0xEF

#define SMT2CPR5                                 0x5
#define SMT2CPR5_address                         0xDA1
#define SMT2CPR5_position                        0x5
#define SMT2CPR5_size                            0x1
#define SMT2CPR5_value_mask                      0x20
#define SMT2CPR5_clear_mask                      0xDF

#define SMT2CPR6                                 0x6
#define SMT2CPR6_address                         0xDA1
#define SMT2CPR6_position                        0x6
#define SMT2CPR6_size                            0x1
#define SMT2CPR6_value_mask                      0x40
#define SMT2CPR6_clear_mask                      0xBF

#define SMT2CPR7                                 0x7
#define SMT2CPR7_address                         0xDA1
#define SMT2CPR7_position                        0x7
#define SMT2CPR7_size                            0x1
#define SMT2CPR7_value_mask                      0x80
#define SMT2CPR7_clear_mask                      0x7F


/*--------------------------------------------------------------------------------------------#
| SMT2CPRH                                                                              0xDA2 |
#---------------------------------------------------------------------------------------------#
| SMT2CPR15 | SMT2CPR14 | SMT2CPR13 | SMT2CPR12 | SMT2CPR11 | SMT2CPR10 | SMT2CPR9 | SMT2CPR8 |
#---------------------------------------------------------------------------------------------#
| 7         | 6         | 5         | 4         | 3         | 2         | 1        | 0        |
#--------------------------------------------------------------------------------------------*/

#define SMT2CPRH                                 0x0
#define SMT2CPRH_address                         0xDA2
#define SMT2CPRH_position                        0x0
#define SMT2CPRH_size                            0x8
#define SMT2CPRH_value_mask                      0xFF
#define SMT2CPRH_clear_mask                      0x0

#define SMT2CPR8                                 0x0
#define SMT2CPR8_address                         0xDA2
#define SMT2CPR8_position                        0x0
#define SMT2CPR8_size                            0x1
#define SMT2CPR8_value_mask                      0x1
#define SMT2CPR8_clear_mask                      0xFE

#define SMT2CPRH_SMT2CPR                         0x0
#define SMT2CPRH_SMT2CPR_address                 0xDA2
#define SMT2CPRH_SMT2CPR_position                0x0
#define SMT2CPRH_SMT2CPR_size                    0x8
#define SMT2CPRH_SMT2CPR_value_mask              0xFF
#define SMT2CPRH_SMT2CPR_clear_mask              0x0

#define SMT2CPR9                                 0x1
#define SMT2CPR9_address                         0xDA2
#define SMT2CPR9_position                        0x1
#define SMT2CPR9_size                            0x1
#define SMT2CPR9_value_mask                      0x2
#define SMT2CPR9_clear_mask                      0xFD

#define SMT2CPR10                                0x2
#define SMT2CPR10_address                        0xDA2
#define SMT2CPR10_position                       0x2
#define SMT2CPR10_size                           0x1
#define SMT2CPR10_value_mask                     0x4
#define SMT2CPR10_clear_mask                     0xFB

#define SMT2CPR11                                0x3
#define SMT2CPR11_address                        0xDA2
#define SMT2CPR11_position                       0x3
#define SMT2CPR11_size                           0x1
#define SMT2CPR11_value_mask                     0x8
#define SMT2CPR11_clear_mask                     0xF7

#define SMT2CPR12                                0x4
#define SMT2CPR12_address                        0xDA2
#define SMT2CPR12_position                       0x4
#define SMT2CPR12_size                           0x1
#define SMT2CPR12_value_mask                     0x10
#define SMT2CPR12_clear_mask                     0xEF

#define SMT2CPR13                                0x5
#define SMT2CPR13_address                        0xDA2
#define SMT2CPR13_position                       0x5
#define SMT2CPR13_size                           0x1
#define SMT2CPR13_value_mask                     0x20
#define SMT2CPR13_clear_mask                     0xDF

#define SMT2CPR14                                0x6
#define SMT2CPR14_address                        0xDA2
#define SMT2CPR14_position                       0x6
#define SMT2CPR14_size                           0x1
#define SMT2CPR14_value_mask                     0x40
#define SMT2CPR14_clear_mask                     0xBF

#define SMT2CPR15                                0x7
#define SMT2CPR15_address                        0xDA2
#define SMT2CPR15_position                       0x7
#define SMT2CPR15_size                           0x1
#define SMT2CPR15_value_mask                     0x80
#define SMT2CPR15_clear_mask                     0x7F


/*----------------------------------------------------------------------------------------------#
| SMT2CPRU                                                                                0xDA3 |
#-----------------------------------------------------------------------------------------------#
| SMT2CPR23 | SMT2CPR22 | SMT2CPR21 | SMT2CPR20 | SMT2CPR19 | SMT2CPR18 | SMT2CPR17 | SMT2CPR16 |
#-----------------------------------------------------------------------------------------------#
| 7         | 6         | 5         | 4         | 3         | 2         | 1         | 0         |
#----------------------------------------------------------------------------------------------*/

#define SMT2CPRU                                 0x0
#define SMT2CPRU_address                         0xDA3
#define SMT2CPRU_position                        0x0
#define SMT2CPRU_size                            0x8
#define SMT2CPRU_value_mask                      0xFF
#define SMT2CPRU_clear_mask                      0x0

#define SMT2CPRU_SMT2CPR                         0x0
#define SMT2CPRU_SMT2CPR_address                 0xDA3
#define SMT2CPRU_SMT2CPR_position                0x0
#define SMT2CPRU_SMT2CPR_size                    0x8
#define SMT2CPRU_SMT2CPR_value_mask              0xFF
#define SMT2CPRU_SMT2CPR_clear_mask              0x0

#define SMT2CPR16                                0x0
#define SMT2CPR16_address                        0xDA3
#define SMT2CPR16_position                       0x0
#define SMT2CPR16_size                           0x1
#define SMT2CPR16_value_mask                     0x1
#define SMT2CPR16_clear_mask                     0xFE

#define SMT2CPR17                                0x1
#define SMT2CPR17_address                        0xDA3
#define SMT2CPR17_position                       0x1
#define SMT2CPR17_size                           0x1
#define SMT2CPR17_value_mask                     0x2
#define SMT2CPR17_clear_mask                     0xFD

#define SMT2CPR18                                0x2
#define SMT2CPR18_address                        0xDA3
#define SMT2CPR18_position                       0x2
#define SMT2CPR18_size                           0x1
#define SMT2CPR18_value_mask                     0x4
#define SMT2CPR18_clear_mask                     0xFB

#define SMT2CPR19                                0x3
#define SMT2CPR19_address                        0xDA3
#define SMT2CPR19_position                       0x3
#define SMT2CPR19_size                           0x1
#define SMT2CPR19_value_mask                     0x8
#define SMT2CPR19_clear_mask                     0xF7

#define SMT2CPR20                                0x4
#define SMT2CPR20_address                        0xDA3
#define SMT2CPR20_position                       0x4
#define SMT2CPR20_size                           0x1
#define SMT2CPR20_value_mask                     0x10
#define SMT2CPR20_clear_mask                     0xEF

#define SMT2CPR21                                0x5
#define SMT2CPR21_address                        0xDA3
#define SMT2CPR21_position                       0x5
#define SMT2CPR21_size                           0x1
#define SMT2CPR21_value_mask                     0x20
#define SMT2CPR21_clear_mask                     0xDF

#define SMT2CPR22                                0x6
#define SMT2CPR22_address                        0xDA3
#define SMT2CPR22_position                       0x6
#define SMT2CPR22_size                           0x1
#define SMT2CPR22_value_mask                     0x40
#define SMT2CPR22_clear_mask                     0xBF

#define SMT2CPR23                                0x7
#define SMT2CPR23_address                        0xDA3
#define SMT2CPR23_position                       0x7
#define SMT2CPR23_size                           0x1
#define SMT2CPR23_value_mask                     0x80
#define SMT2CPR23_clear_mask                     0x7F


/*--------------------------------------------------------------------------------------#
| SMT2CPWL                                                                        0xDA4 |
#---------------------------------------------------------------------------------------#
| SMT2CPW7 | SMT2CPW6 | SMT2CPW5 | SMT2CPW4 | SMT2CPW3 | SMT2CPW2 | SMT2CPW1 | SMT2CPW0 |
#---------------------------------------------------------------------------------------#
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
#--------------------------------------------------------------------------------------*/

#define SMT2CPWL                                 0x0
#define SMT2CPWL_address                         0xDA4
#define SMT2CPWL_position                        0x0
#define SMT2CPWL_size                            0x8
#define SMT2CPWL_value_mask                      0xFF
#define SMT2CPWL_clear_mask                      0x0

#define SMT2CPWL_SMT2CPW                         0x0
#define SMT2CPWL_SMT2CPW_address                 0xDA4
#define SMT2CPWL_SMT2CPW_position                0x0
#define SMT2CPWL_SMT2CPW_size                    0x8
#define SMT2CPWL_SMT2CPW_value_mask              0xFF
#define SMT2CPWL_SMT2CPW_clear_mask              0x0

#define SMT2CPW0                                 0x0
#define SMT2CPW0_address                         0xDA4
#define SMT2CPW0_position                        0x0
#define SMT2CPW0_size                            0x1
#define SMT2CPW0_value_mask                      0x1
#define SMT2CPW0_clear_mask                      0xFE

#define SMT2CPW1                                 0x1
#define SMT2CPW1_address                         0xDA4
#define SMT2CPW1_position                        0x1
#define SMT2CPW1_size                            0x1
#define SMT2CPW1_value_mask                      0x2
#define SMT2CPW1_clear_mask                      0xFD

#define SMT2CPW2                                 0x2
#define SMT2CPW2_address                         0xDA4
#define SMT2CPW2_position                        0x2
#define SMT2CPW2_size                            0x1
#define SMT2CPW2_value_mask                      0x4
#define SMT2CPW2_clear_mask                      0xFB

#define SMT2CPW3                                 0x3
#define SMT2CPW3_address                         0xDA4
#define SMT2CPW3_position                        0x3
#define SMT2CPW3_size                            0x1
#define SMT2CPW3_value_mask                      0x8
#define SMT2CPW3_clear_mask                      0xF7

#define SMT2CPW4                                 0x4
#define SMT2CPW4_address                         0xDA4
#define SMT2CPW4_position                        0x4
#define SMT2CPW4_size                            0x1
#define SMT2CPW4_value_mask                      0x10
#define SMT2CPW4_clear_mask                      0xEF

#define SMT2CPW5                                 0x5
#define SMT2CPW5_address                         0xDA4
#define SMT2CPW5_position                        0x5
#define SMT2CPW5_size                            0x1
#define SMT2CPW5_value_mask                      0x20
#define SMT2CPW5_clear_mask                      0xDF

#define SMT2CPW6                                 0x6
#define SMT2CPW6_address                         0xDA4
#define SMT2CPW6_position                        0x6
#define SMT2CPW6_size                            0x1
#define SMT2CPW6_value_mask                      0x40
#define SMT2CPW6_clear_mask                      0xBF

#define SMT2CPW7                                 0x7
#define SMT2CPW7_address                         0xDA4
#define SMT2CPW7_position                        0x7
#define SMT2CPW7_size                            0x1
#define SMT2CPW7_value_mask                      0x80
#define SMT2CPW7_clear_mask                      0x7F


/*--------------------------------------------------------------------------------------------#
| SMT2CPWH                                                                              0xDA5 |
#---------------------------------------------------------------------------------------------#
| SMT2CPW15 | SMT2CPW14 | SMT2CPW13 | SMT2CPW12 | SMT2CPW11 | SMT2CPW10 | SMT2CPW9 | SMT2CPW8 |
#---------------------------------------------------------------------------------------------#
| 7         | 6         | 5         | 4         | 3         | 2         | 1        | 0        |
#--------------------------------------------------------------------------------------------*/

#define SMT2CPWH                                 0x0
#define SMT2CPWH_address                         0xDA5
#define SMT2CPWH_position                        0x0
#define SMT2CPWH_size                            0x8
#define SMT2CPWH_value_mask                      0xFF
#define SMT2CPWH_clear_mask                      0x0

#define SMT2CPWH_SMT2CPW                         0x0
#define SMT2CPWH_SMT2CPW_address                 0xDA5
#define SMT2CPWH_SMT2CPW_position                0x0
#define SMT2CPWH_SMT2CPW_size                    0x8
#define SMT2CPWH_SMT2CPW_value_mask              0xFF
#define SMT2CPWH_SMT2CPW_clear_mask              0x0

#define SMT2CPW8                                 0x0
#define SMT2CPW8_address                         0xDA5
#define SMT2CPW8_position                        0x0
#define SMT2CPW8_size                            0x1
#define SMT2CPW8_value_mask                      0x1
#define SMT2CPW8_clear_mask                      0xFE

#define SMT2CPW9                                 0x1
#define SMT2CPW9_address                         0xDA5
#define SMT2CPW9_position                        0x1
#define SMT2CPW9_size                            0x1
#define SMT2CPW9_value_mask                      0x2
#define SMT2CPW9_clear_mask                      0xFD

#define SMT2CPW10                                0x2
#define SMT2CPW10_address                        0xDA5
#define SMT2CPW10_position                       0x2
#define SMT2CPW10_size                           0x1
#define SMT2CPW10_value_mask                     0x4
#define SMT2CPW10_clear_mask                     0xFB

#define SMT2CPW11                                0x3
#define SMT2CPW11_address                        0xDA5
#define SMT2CPW11_position                       0x3
#define SMT2CPW11_size                           0x1
#define SMT2CPW11_value_mask                     0x8
#define SMT2CPW11_clear_mask                     0xF7

#define SMT2CPW12                                0x4
#define SMT2CPW12_address                        0xDA5
#define SMT2CPW12_position                       0x4
#define SMT2CPW12_size                           0x1
#define SMT2CPW12_value_mask                     0x10
#define SMT2CPW12_clear_mask                     0xEF

#define SMT2CPW13                                0x5
#define SMT2CPW13_address                        0xDA5
#define SMT2CPW13_position                       0x5
#define SMT2CPW13_size                           0x1
#define SMT2CPW13_value_mask                     0x20
#define SMT2CPW13_clear_mask                     0xDF

#define SMT2CPW14                                0x6
#define SMT2CPW14_address                        0xDA5
#define SMT2CPW14_position                       0x6
#define SMT2CPW14_size                           0x1
#define SMT2CPW14_value_mask                     0x40
#define SMT2CPW14_clear_mask                     0xBF

#define SMT2CPW15                                0x7
#define SMT2CPW15_address                        0xDA5
#define SMT2CPW15_position                       0x7
#define SMT2CPW15_size                           0x1
#define SMT2CPW15_value_mask                     0x80
#define SMT2CPW15_clear_mask                     0x7F


/*----------------------------------------------------------------------------------------------#
| SMT2CPWU                                                                                0xDA6 |
#-----------------------------------------------------------------------------------------------#
| SMT2CPW23 | SMT2CPW22 | SMT2CPW21 | SMT2CPW20 | SMT2CPW19 | SMT2CPW18 | SMT2CPW17 | SMT2CPW16 |
#-----------------------------------------------------------------------------------------------#
| 7         | 6         | 5         | 4         | 3         | 2         | 1         | 0         |
#----------------------------------------------------------------------------------------------*/

#define SMT2CPWU                                 0x0
#define SMT2CPWU_address                         0xDA6
#define SMT2CPWU_position                        0x0
#define SMT2CPWU_size                            0x8
#define SMT2CPWU_value_mask                      0xFF
#define SMT2CPWU_clear_mask                      0x0

#define SMT2CPWU_SMT2CPW                         0x0
#define SMT2CPWU_SMT2CPW_address                 0xDA6
#define SMT2CPWU_SMT2CPW_position                0x0
#define SMT2CPWU_SMT2CPW_size                    0x8
#define SMT2CPWU_SMT2CPW_value_mask              0xFF
#define SMT2CPWU_SMT2CPW_clear_mask              0x0

#define SMT2CPW16                                0x0
#define SMT2CPW16_address                        0xDA6
#define SMT2CPW16_position                       0x0
#define SMT2CPW16_size                           0x1
#define SMT2CPW16_value_mask                     0x1
#define SMT2CPW16_clear_mask                     0xFE

#define SMT2CPW17                                0x1
#define SMT2CPW17_address                        0xDA6
#define SMT2CPW17_position                       0x1
#define SMT2CPW17_size                           0x1
#define SMT2CPW17_value_mask                     0x2
#define SMT2CPW17_clear_mask                     0xFD

#define SMT2CPW18                                0x2
#define SMT2CPW18_address                        0xDA6
#define SMT2CPW18_position                       0x2
#define SMT2CPW18_size                           0x1
#define SMT2CPW18_value_mask                     0x4
#define SMT2CPW18_clear_mask                     0xFB

#define SMT2CPW19                                0x3
#define SMT2CPW19_address                        0xDA6
#define SMT2CPW19_position                       0x3
#define SMT2CPW19_size                           0x1
#define SMT2CPW19_value_mask                     0x8
#define SMT2CPW19_clear_mask                     0xF7

#define SMT2CPW20                                0x4
#define SMT2CPW20_address                        0xDA6
#define SMT2CPW20_position                       0x4
#define SMT2CPW20_size                           0x1
#define SMT2CPW20_value_mask                     0x10
#define SMT2CPW20_clear_mask                     0xEF

#define SMT2CPW21                                0x5
#define SMT2CPW21_address                        0xDA6
#define SMT2CPW21_position                       0x5
#define SMT2CPW21_size                           0x1
#define SMT2CPW21_value_mask                     0x20
#define SMT2CPW21_clear_mask                     0xDF

#define SMT2CPW22                                0x6
#define SMT2CPW22_address                        0xDA6
#define SMT2CPW22_position                       0x6
#define SMT2CPW22_size                           0x1
#define SMT2CPW22_value_mask                     0x40
#define SMT2CPW22_clear_mask                     0xBF

#define SMT2CPW23                                0x7
#define SMT2CPW23_address                        0xDA6
#define SMT2CPW23_position                       0x7
#define SMT2CPW23_size                           0x1
#define SMT2CPW23_value_mask                     0x80
#define SMT2CPW23_clear_mask                     0x7F


/*------------------------------------------------------------------------------#
| SMT2PRL                                                                 0xDA7 |
#-------------------------------------------------------------------------------#
| SMT2PR7 | SMT2PR6 | SMT2PR5 | SMT2PR4 | SMT2PR3 | SMT2PR2 | SMT2PR1 | SMT2PR0 |
#-------------------------------------------------------------------------------#
| 7       | 6       | 5       | 4       | 3       | 2       | 1       | 0       |
#------------------------------------------------------------------------------*/

#define SMT2PRL                                  0x0
#define SMT2PRL_address                          0xDA7
#define SMT2PRL_position                         0x0
#define SMT2PRL_size                             0x8
#define SMT2PRL_value_mask                       0xFF
#define SMT2PRL_clear_mask                       0x0

#define SMT2PRL_SMT2PR                           0x0
#define SMT2PRL_SMT2PR_address                   0xDA7
#define SMT2PRL_SMT2PR_position                  0x0
#define SMT2PRL_SMT2PR_size                      0x8
#define SMT2PRL_SMT2PR_value_mask                0xFF
#define SMT2PRL_SMT2PR_clear_mask                0x0

#define SMT2PR0                                  0x0
#define SMT2PR0_address                          0xDA7
#define SMT2PR0_position                         0x0
#define SMT2PR0_size                             0x1
#define SMT2PR0_value_mask                       0x1
#define SMT2PR0_clear_mask                       0xFE

#define SMT2PR1                                  0x1
#define SMT2PR1_address                          0xDA7
#define SMT2PR1_position                         0x1
#define SMT2PR1_size                             0x1
#define SMT2PR1_value_mask                       0x2
#define SMT2PR1_clear_mask                       0xFD

#define SMT2PR2                                  0x2
#define SMT2PR2_address                          0xDA7
#define SMT2PR2_position                         0x2
#define SMT2PR2_size                             0x1
#define SMT2PR2_value_mask                       0x4
#define SMT2PR2_clear_mask                       0xFB

#define SMT2PR3                                  0x3
#define SMT2PR3_address                          0xDA7
#define SMT2PR3_position                         0x3
#define SMT2PR3_size                             0x1
#define SMT2PR3_value_mask                       0x8
#define SMT2PR3_clear_mask                       0xF7

#define SMT2PR4                                  0x4
#define SMT2PR4_address                          0xDA7
#define SMT2PR4_position                         0x4
#define SMT2PR4_size                             0x1
#define SMT2PR4_value_mask                       0x10
#define SMT2PR4_clear_mask                       0xEF

#define SMT2PR5                                  0x5
#define SMT2PR5_address                          0xDA7
#define SMT2PR5_position                         0x5
#define SMT2PR5_size                             0x1
#define SMT2PR5_value_mask                       0x20
#define SMT2PR5_clear_mask                       0xDF

#define SMT2PR6                                  0x6
#define SMT2PR6_address                          0xDA7
#define SMT2PR6_position                         0x6
#define SMT2PR6_size                             0x1
#define SMT2PR6_value_mask                       0x40
#define SMT2PR6_clear_mask                       0xBF

#define SMT2PR7                                  0x7
#define SMT2PR7_address                          0xDA7
#define SMT2PR7_position                         0x7
#define SMT2PR7_size                             0x1
#define SMT2PR7_value_mask                       0x80
#define SMT2PR7_clear_mask                       0x7F


/*------------------------------------------------------------------------------------#
| SMT2PRH                                                                       0xDA8 |
#-------------------------------------------------------------------------------------#
| SMT2PR15 | SMT2PR14 | SMT2PR13 | SMT2PR12 | SMT2PR11 | SMT2PR10 | SMT2PR9 | SMT2PR8 |
#-------------------------------------------------------------------------------------#
| 7        | 6        | 5        | 4        | 3        | 2        | 1       | 0       |
#------------------------------------------------------------------------------------*/

#define SMT2PRH                                  0x0
#define SMT2PRH_address                          0xDA8
#define SMT2PRH_position                         0x0
#define SMT2PRH_size                             0x8
#define SMT2PRH_value_mask                       0xFF
#define SMT2PRH_clear_mask                       0x0

#define SMT2PRH_SMT2PR                           0x0
#define SMT2PRH_SMT2PR_address                   0xDA8
#define SMT2PRH_SMT2PR_position                  0x0
#define SMT2PRH_SMT2PR_size                      0x8
#define SMT2PRH_SMT2PR_value_mask                0xFF
#define SMT2PRH_SMT2PR_clear_mask                0x0

#define SMT2PR8                                  0x0
#define SMT2PR8_address                          0xDA8
#define SMT2PR8_position                         0x0
#define SMT2PR8_size                             0x1
#define SMT2PR8_value_mask                       0x1
#define SMT2PR8_clear_mask                       0xFE

#define SMT2PR9                                  0x1
#define SMT2PR9_address                          0xDA8
#define SMT2PR9_position                         0x1
#define SMT2PR9_size                             0x1
#define SMT2PR9_value_mask                       0x2
#define SMT2PR9_clear_mask                       0xFD

#define SMT2PR10                                 0x2
#define SMT2PR10_address                         0xDA8
#define SMT2PR10_position                        0x2
#define SMT2PR10_size                            0x1
#define SMT2PR10_value_mask                      0x4
#define SMT2PR10_clear_mask                      0xFB

#define SMT2PR11                                 0x3
#define SMT2PR11_address                         0xDA8
#define SMT2PR11_position                        0x3
#define SMT2PR11_size                            0x1
#define SMT2PR11_value_mask                      0x8
#define SMT2PR11_clear_mask                      0xF7

#define SMT2PR12                                 0x4
#define SMT2PR12_address                         0xDA8
#define SMT2PR12_position                        0x4
#define SMT2PR12_size                            0x1
#define SMT2PR12_value_mask                      0x10
#define SMT2PR12_clear_mask                      0xEF

#define SMT2PR13                                 0x5
#define SMT2PR13_address                         0xDA8
#define SMT2PR13_position                        0x5
#define SMT2PR13_size                            0x1
#define SMT2PR13_value_mask                      0x20
#define SMT2PR13_clear_mask                      0xDF

#define SMT2PR14                                 0x6
#define SMT2PR14_address                         0xDA8
#define SMT2PR14_position                        0x6
#define SMT2PR14_size                            0x1
#define SMT2PR14_value_mask                      0x40
#define SMT2PR14_clear_mask                      0xBF

#define SMT2PR15                                 0x7
#define SMT2PR15_address                         0xDA8
#define SMT2PR15_position                        0x7
#define SMT2PR15_size                            0x1
#define SMT2PR15_value_mask                      0x80
#define SMT2PR15_clear_mask                      0x7F


/*--------------------------------------------------------------------------------------#
| SMT2PRU                                                                         0xDA9 |
#---------------------------------------------------------------------------------------#
| SMT2PR23 | SMT2PR22 | SMT2PR21 | SMT2PR20 | SMT2PR19 | SMT2PR18 | SMT2PR17 | SMT2PR16 |
#---------------------------------------------------------------------------------------#
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
#--------------------------------------------------------------------------------------*/

#define SMT2PRU                                  0x0
#define SMT2PRU_address                          0xDA9
#define SMT2PRU_position                         0x0
#define SMT2PRU_size                             0x8
#define SMT2PRU_value_mask                       0xFF
#define SMT2PRU_clear_mask                       0x0

#define SMT2PRU_SMT2PR                           0x0
#define SMT2PRU_SMT2PR_address                   0xDA9
#define SMT2PRU_SMT2PR_position                  0x0
#define SMT2PRU_SMT2PR_size                      0x8
#define SMT2PRU_SMT2PR_value_mask                0xFF
#define SMT2PRU_SMT2PR_clear_mask                0x0

#define SMT2PR16                                 0x0
#define SMT2PR16_address                         0xDA9
#define SMT2PR16_position                        0x0
#define SMT2PR16_size                            0x1
#define SMT2PR16_value_mask                      0x1
#define SMT2PR16_clear_mask                      0xFE

#define SMT2PR17                                 0x1
#define SMT2PR17_address                         0xDA9
#define SMT2PR17_position                        0x1
#define SMT2PR17_size                            0x1
#define SMT2PR17_value_mask                      0x2
#define SMT2PR17_clear_mask                      0xFD

#define SMT2PR18                                 0x2
#define SMT2PR18_address                         0xDA9
#define SMT2PR18_position                        0x2
#define SMT2PR18_size                            0x1
#define SMT2PR18_value_mask                      0x4
#define SMT2PR18_clear_mask                      0xFB

#define SMT2PR19                                 0x3
#define SMT2PR19_address                         0xDA9
#define SMT2PR19_position                        0x3
#define SMT2PR19_size                            0x1
#define SMT2PR19_value_mask                      0x8
#define SMT2PR19_clear_mask                      0xF7

#define SMT2PR20                                 0x4
#define SMT2PR20_address                         0xDA9
#define SMT2PR20_position                        0x4
#define SMT2PR20_size                            0x1
#define SMT2PR20_value_mask                      0x10
#define SMT2PR20_clear_mask                      0xEF

#define SMT2PR21                                 0x5
#define SMT2PR21_address                         0xDA9
#define SMT2PR21_position                        0x5
#define SMT2PR21_size                            0x1
#define SMT2PR21_value_mask                      0x20
#define SMT2PR21_clear_mask                      0xDF

#define SMT2PR22                                 0x6
#define SMT2PR22_address                         0xDA9
#define SMT2PR22_position                        0x6
#define SMT2PR22_size                            0x1
#define SMT2PR22_value_mask                      0x40
#define SMT2PR22_clear_mask                      0xBF

#define SMT2PR23                                 0x7
#define SMT2PR23_address                         0xDA9
#define SMT2PR23_position                        0x7
#define SMT2PR23_size                            0x1
#define SMT2PR23_value_mask                      0x80
#define SMT2PR23_clear_mask                      0x7F


/*---------------------------------------------------------------------------------------------------#
| SMT2CON0                                                                                     0xDAA |
#----------------------------------------------------------------------------------------------------#
| SMT2CON0_EN | - | SMT2CON0_STP | SMT2CON0_WPOL | SMT2CON0_SPOL | SMT2CON0_CPOL | SMT2PS1 | SMT2PS0 |
#----------------------------------------------------------------------------------------------------#
| 7           | 6 | 5            | 4             | 3             | 2             | 1       | 0       |
#---------------------------------------------------------------------------------------------------*/

#define SMT2CON0                                 0x0
#define SMT2CON0_address                         0xDAA
#define SMT2CON0_position                        0x0
#define SMT2CON0_size                            0x8
#define SMT2CON0_value_mask                      0xFF
#define SMT2CON0_clear_mask                      0x0

#define SMT2PS0                                  0x0
#define SMT2PS0_address                          0xDAA
#define SMT2PS0_position                         0x0
#define SMT2PS0_size                             0x1
#define SMT2PS0_value_mask                       0x1
#define SMT2PS0_clear_mask                       0xFE

#define SMT2PS                                   0x0
#define SMT2PS_address                           0xDAA
#define SMT2PS_position                          0x0
#define SMT2PS_size                              0x2
#define SMT2PS_value_mask                        0x3
#define SMT2PS_clear_mask                        0xFC

#define SMT2PS1                                  0x1
#define SMT2PS1_address                          0xDAA
#define SMT2PS1_position                         0x1
#define SMT2PS1_size                             0x1
#define SMT2PS1_value_mask                       0x2
#define SMT2PS1_clear_mask                       0xFD

#define SMT2CON0_CPOL                            0x2
#define SMT2CON0_CPOL_address                    0xDAA
#define SMT2CON0_CPOL_position                   0x2
#define SMT2CON0_CPOL_size                       0x1
#define SMT2CON0_CPOL_value_mask                 0x4
#define SMT2CON0_CPOL_clear_mask                 0xFB

#define SMT2CON0_SPOL                            0x3
#define SMT2CON0_SPOL_address                    0xDAA
#define SMT2CON0_SPOL_position                   0x3
#define SMT2CON0_SPOL_size                       0x1
#define SMT2CON0_SPOL_value_mask                 0x8
#define SMT2CON0_SPOL_clear_mask                 0xF7

#define SMT2CON0_WPOL                            0x4
#define SMT2CON0_WPOL_address                    0xDAA
#define SMT2CON0_WPOL_position                   0x4
#define SMT2CON0_WPOL_size                       0x1
#define SMT2CON0_WPOL_value_mask                 0x10
#define SMT2CON0_WPOL_clear_mask                 0xEF

#define SMT2CON0_STP                             0x5
#define SMT2CON0_STP_address                     0xDAA
#define SMT2CON0_STP_position                    0x5
#define SMT2CON0_STP_size                        0x1
#define SMT2CON0_STP_value_mask                  0x20
#define SMT2CON0_STP_clear_mask                  0xDF

#define SMT2CON0_EN                              0x7
#define SMT2CON0_EN_address                      0xDAA
#define SMT2CON0_EN_position                     0x7
#define SMT2CON0_EN_size                         0x1
#define SMT2CON0_EN_value_mask                   0x80
#define SMT2CON0_EN_clear_mask                   0x7F


/*------------------------------------------------------------------------------------------------#
| SMT2CON1                                                                                  0xDAB |
#-------------------------------------------------------------------------------------------------#
| SMT2GO | SMT2REPEAT | - | - | SMT2CON1_MODE3 | SMT2CON1_MODE2 | SMT2CON1_MODE1 | SMT2CON1_MODE0 |
#-------------------------------------------------------------------------------------------------#
| 7      | 6          | 5 | 4 | 3              | 2              | 1              | 0              |
#------------------------------------------------------------------------------------------------*/

#define SMT2CON1                                 0x0
#define SMT2CON1_address                         0xDAB
#define SMT2CON1_position                        0x0
#define SMT2CON1_size                            0x8
#define SMT2CON1_value_mask                      0xFF
#define SMT2CON1_clear_mask                      0x0

#define SMT2CON1_MODE                            0x0
#define SMT2CON1_MODE_address                    0xDAB
#define SMT2CON1_MODE_position                   0x0
#define SMT2CON1_MODE_size                       0x4
#define SMT2CON1_MODE_value_mask                 0xF
#define SMT2CON1_MODE_clear_mask                 0xF0

#define SMT2CON1_MODE0                           0x0
#define SMT2CON1_MODE0_address                   0xDAB
#define SMT2CON1_MODE0_position                  0x0
#define SMT2CON1_MODE0_size                      0x1
#define SMT2CON1_MODE0_value_mask                0x1
#define SMT2CON1_MODE0_clear_mask                0xFE

#define SMT2MODE0                                0x0
#define SMT2MODE0_address                        0xDAB
#define SMT2MODE0_position                       0x0
#define SMT2MODE0_size                           0x1
#define SMT2MODE0_value_mask                     0x1
#define SMT2MODE0_clear_mask                     0xFE

#define SMT2MODE                                 0x0
#define SMT2MODE_address                         0xDAB
#define SMT2MODE_position                        0x0
#define SMT2MODE_size                            0x4
#define SMT2MODE_value_mask                      0xF
#define SMT2MODE_clear_mask                      0xF0

#define SMT2CON1_MODE1                           0x1
#define SMT2CON1_MODE1_address                   0xDAB
#define SMT2CON1_MODE1_position                  0x1
#define SMT2CON1_MODE1_size                      0x1
#define SMT2CON1_MODE1_value_mask                0x2
#define SMT2CON1_MODE1_clear_mask                0xFD

#define SMT2MODE1                                0x1
#define SMT2MODE1_address                        0xDAB
#define SMT2MODE1_position                       0x1
#define SMT2MODE1_size                           0x1
#define SMT2MODE1_value_mask                     0x2
#define SMT2MODE1_clear_mask                     0xFD

#define SMT2CON1_MODE2                           0x2
#define SMT2CON1_MODE2_address                   0xDAB
#define SMT2CON1_MODE2_position                  0x2
#define SMT2CON1_MODE2_size                      0x1
#define SMT2CON1_MODE2_value_mask                0x4
#define SMT2CON1_MODE2_clear_mask                0xFB

#define SMT2MODE2                                0x2
#define SMT2MODE2_address                        0xDAB
#define SMT2MODE2_position                       0x2
#define SMT2MODE2_size                           0x1
#define SMT2MODE2_value_mask                     0x4
#define SMT2MODE2_clear_mask                     0xFB

#define SMT2CON1_MODE3                           0x3
#define SMT2CON1_MODE3_address                   0xDAB
#define SMT2CON1_MODE3_position                  0x3
#define SMT2CON1_MODE3_size                      0x1
#define SMT2CON1_MODE3_value_mask                0x8
#define SMT2CON1_MODE3_clear_mask                0xF7

#define SMT2MODE3                                0x3
#define SMT2MODE3_address                        0xDAB
#define SMT2MODE3_position                       0x3
#define SMT2MODE3_size                           0x1
#define SMT2MODE3_value_mask                     0x8
#define SMT2MODE3_clear_mask                     0xF7

#define SMT2REPEAT                               0x6
#define SMT2REPEAT_address                       0xDAB
#define SMT2REPEAT_position                      0x6
#define SMT2REPEAT_size                          0x1
#define SMT2REPEAT_value_mask                    0x40
#define SMT2REPEAT_clear_mask                    0xBF

#define SMT2CON1_REPEAT                          0x6
#define SMT2CON1_REPEAT_address                  0xDAB
#define SMT2CON1_REPEAT_position                 0x6
#define SMT2CON1_REPEAT_size                     0x1
#define SMT2CON1_REPEAT_value_mask               0x40
#define SMT2CON1_REPEAT_clear_mask               0xBF

#define SMT2GO                                   0x7
#define SMT2GO_address                           0xDAB
#define SMT2GO_position                          0x7
#define SMT2GO_size                              0x1
#define SMT2GO_value_mask                        0x80
#define SMT2GO_clear_mask                        0x7F


/*-------------------------------------------------------------------------------#
| SMT2STAT                                                                 0xDAC |
#--------------------------------------------------------------------------------#
| SMT2STAT_CPRUP | SMT2CPWUP | SMT2RESET | - | - | SMT2STAT_TS | SMT2WS | SMT2AS |
#--------------------------------------------------------------------------------#
| 7              | 6         | 5         | 4 | 3 | 2           | 1      | 0      |
#-------------------------------------------------------------------------------*/

#define SMT2STAT                                 0x0
#define SMT2STAT_address                         0xDAC
#define SMT2STAT_position                        0x0
#define SMT2STAT_size                            0x8
#define SMT2STAT_value_mask                      0xFF
#define SMT2STAT_clear_mask                      0x0

#define SMT2AS                                   0x0
#define SMT2AS_address                           0xDAC
#define SMT2AS_position                          0x0
#define SMT2AS_size                              0x1
#define SMT2AS_value_mask                        0x1
#define SMT2AS_clear_mask                        0xFE

#define SMT2STAT_AS                              0x0
#define SMT2STAT_AS_address                      0xDAC
#define SMT2STAT_AS_position                     0x0
#define SMT2STAT_AS_size                         0x1
#define SMT2STAT_AS_value_mask                   0x1
#define SMT2STAT_AS_clear_mask                   0xFE

#define SMT2WS                                   0x1
#define SMT2WS_address                           0xDAC
#define SMT2WS_position                          0x1
#define SMT2WS_size                              0x1
#define SMT2WS_value_mask                        0x2
#define SMT2WS_clear_mask                        0xFD

#define SMT2STAT_WS                              0x1
#define SMT2STAT_WS_address                      0xDAC
#define SMT2STAT_WS_position                     0x1
#define SMT2STAT_WS_size                         0x1
#define SMT2STAT_WS_value_mask                   0x2
#define SMT2STAT_WS_clear_mask                   0xFD

#define SMT2STAT_TS                              0x2
#define SMT2STAT_TS_address                      0xDAC
#define SMT2STAT_TS_position                     0x2
#define SMT2STAT_TS_size                         0x1
#define SMT2STAT_TS_value_mask                   0x4
#define SMT2STAT_TS_clear_mask                   0xFB

#define SMT2TS                                   0x2
#define SMT2TS_address                           0xDAC
#define SMT2TS_position                          0x2
#define SMT2TS_size                              0x1
#define SMT2TS_value_mask                        0x4
#define SMT2TS_clear_mask                        0xFB

#define SMT2RESET                                0x5
#define SMT2RESET_address                        0xDAC
#define SMT2RESET_position                       0x5
#define SMT2RESET_size                           0x1
#define SMT2RESET_value_mask                     0x20
#define SMT2RESET_clear_mask                     0xDF

#define SMT2STAT_RST                             0x5
#define SMT2STAT_RST_address                     0xDAC
#define SMT2STAT_RST_position                    0x5
#define SMT2STAT_RST_size                        0x1
#define SMT2STAT_RST_value_mask                  0x20
#define SMT2STAT_RST_clear_mask                  0xDF

#define SMT2CPWUP                                0x6
#define SMT2CPWUP_address                        0xDAC
#define SMT2CPWUP_position                       0x6
#define SMT2CPWUP_size                           0x1
#define SMT2CPWUP_value_mask                     0x40
#define SMT2CPWUP_clear_mask                     0xBF

#define SMT2STAT_CPWUP                           0x6
#define SMT2STAT_CPWUP_address                   0xDAC
#define SMT2STAT_CPWUP_position                  0x6
#define SMT2STAT_CPWUP_size                      0x1
#define SMT2STAT_CPWUP_value_mask                0x40
#define SMT2STAT_CPWUP_clear_mask                0xBF

#define SMT2STAT_CPRUP                           0x7
#define SMT2STAT_CPRUP_address                   0xDAC
#define SMT2STAT_CPRUP_position                  0x7
#define SMT2STAT_CPRUP_size                      0x1
#define SMT2STAT_CPRUP_value_mask                0x80
#define SMT2STAT_CPRUP_clear_mask                0x7F

#define SMT2CPRUP                                0x7
#define SMT2CPRUP_address                        0xDAC
#define SMT2CPRUP_position                       0x7
#define SMT2CPRUP_size                           0x1
#define SMT2CPRUP_value_mask                     0x80
#define SMT2CPRUP_clear_mask                     0x7F


/*------------------------------------------------------------------#
| SMT2CLK                                                     0xDAD |
#-------------------------------------------------------------------#
| - | - | - | - | - | SMT2CLK_CSEL2 | SMT2CLK_CSEL1 | SMT2CLK_CSEL0 |
#-------------------------------------------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2             | 1             | 0             |
#------------------------------------------------------------------*/

#define SMT2CLK                                  0x0
#define SMT2CLK_address                          0xDAD
#define SMT2CLK_position                         0x0
#define SMT2CLK_size                             0x8
#define SMT2CLK_value_mask                       0xFF
#define SMT2CLK_clear_mask                       0x0

#define SMT2CLK_CSEL                             0x0
#define SMT2CLK_CSEL_address                     0xDAD
#define SMT2CLK_CSEL_position                    0x0
#define SMT2CLK_CSEL_size                        0x8
#define SMT2CLK_CSEL_value_mask                  0xFF
#define SMT2CLK_CSEL_clear_mask                  0x0

#define SMT2CLK_CSEL0                            0x0
#define SMT2CLK_CSEL0_address                    0xDAD
#define SMT2CLK_CSEL0_position                   0x0
#define SMT2CLK_CSEL0_size                       0x1
#define SMT2CLK_CSEL0_value_mask                 0x1
#define SMT2CLK_CSEL0_clear_mask                 0xFE

#define SMT2CSEL0                                0x0
#define SMT2CSEL0_address                        0xDAD
#define SMT2CSEL0_position                       0x0
#define SMT2CSEL0_size                           0x1
#define SMT2CSEL0_value_mask                     0x1
#define SMT2CSEL0_clear_mask                     0xFE

#define SMT2CSEL                                 0x0
#define SMT2CSEL_address                         0xDAD
#define SMT2CSEL_position                        0x0
#define SMT2CSEL_size                            0x8
#define SMT2CSEL_value_mask                      0xFF
#define SMT2CSEL_clear_mask                      0x0

#define SMT2CLK_CSEL1                            0x1
#define SMT2CLK_CSEL1_address                    0xDAD
#define SMT2CLK_CSEL1_position                   0x1
#define SMT2CLK_CSEL1_size                       0x1
#define SMT2CLK_CSEL1_value_mask                 0x2
#define SMT2CLK_CSEL1_clear_mask                 0xFD

#define SMT2CSEL1                                0x1
#define SMT2CSEL1_address                        0xDAD
#define SMT2CSEL1_position                       0x1
#define SMT2CSEL1_size                           0x1
#define SMT2CSEL1_value_mask                     0x2
#define SMT2CSEL1_clear_mask                     0xFD

#define SMT2CLK_CSEL2                            0x2
#define SMT2CLK_CSEL2_address                    0xDAD
#define SMT2CLK_CSEL2_position                   0x2
#define SMT2CLK_CSEL2_size                       0x1
#define SMT2CLK_CSEL2_value_mask                 0x4
#define SMT2CLK_CSEL2_clear_mask                 0xFB

#define SMT2CSEL2                                0x2
#define SMT2CSEL2_address                        0xDAD
#define SMT2CSEL2_position                       0x2
#define SMT2CSEL2_size                           0x1
#define SMT2CSEL2_value_mask                     0x4
#define SMT2CSEL2_clear_mask                     0xFB


/*------------------------------------------------------#
| SMT2SIG                                         0xDAE |
#-------------------------------------------------------#
| - | - | - | - | - | SMT2SSEL2 | SMT2SSEL1 | SMT2SSEL0 |
#-------------------------------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2         | 1         | 0         |
#------------------------------------------------------*/

#define SMT2SIG                                  0x0
#define SMT2SIG_address                          0xDAE
#define SMT2SIG_position                         0x0
#define SMT2SIG_size                             0x8
#define SMT2SIG_value_mask                       0xFF
#define SMT2SIG_clear_mask                       0x0

#define SMT2SIG_SSEL                             0x0
#define SMT2SIG_SSEL_address                     0xDAE
#define SMT2SIG_SSEL_position                    0x0
#define SMT2SIG_SSEL_size                        0x8
#define SMT2SIG_SSEL_value_mask                  0xFF
#define SMT2SIG_SSEL_clear_mask                  0x0

#define SMT2SSEL0                                0x0
#define SMT2SSEL0_address                        0xDAE
#define SMT2SSEL0_position                       0x0
#define SMT2SSEL0_size                           0x1
#define SMT2SSEL0_value_mask                     0x1
#define SMT2SSEL0_clear_mask                     0xFE

#define SMT2SSEL                                 0x0
#define SMT2SSEL_address                         0xDAE
#define SMT2SSEL_position                        0x0
#define SMT2SSEL_size                            0x8
#define SMT2SSEL_value_mask                      0xFF
#define SMT2SSEL_clear_mask                      0x0

#define SMT2SIG_SSEL0                            0x0
#define SMT2SIG_SSEL0_address                    0xDAE
#define SMT2SIG_SSEL0_position                   0x0
#define SMT2SIG_SSEL0_size                       0x1
#define SMT2SIG_SSEL0_value_mask                 0x1
#define SMT2SIG_SSEL0_clear_mask                 0xFE

#define SMT2SSEL1                                0x1
#define SMT2SSEL1_address                        0xDAE
#define SMT2SSEL1_position                       0x1
#define SMT2SSEL1_size                           0x1
#define SMT2SSEL1_value_mask                     0x2
#define SMT2SSEL1_clear_mask                     0xFD

#define SMT2SIG_SSEL1                            0x1
#define SMT2SIG_SSEL1_address                    0xDAE
#define SMT2SIG_SSEL1_position                   0x1
#define SMT2SIG_SSEL1_size                       0x1
#define SMT2SIG_SSEL1_value_mask                 0x2
#define SMT2SIG_SSEL1_clear_mask                 0xFD

#define SMT2SSEL2                                0x2
#define SMT2SSEL2_address                        0xDAE
#define SMT2SSEL2_position                       0x2
#define SMT2SSEL2_size                           0x1
#define SMT2SSEL2_value_mask                     0x4
#define SMT2SSEL2_clear_mask                     0xFB

#define SMT2SIG_SSEL2                            0x2
#define SMT2SIG_SSEL2_address                    0xDAE
#define SMT2SIG_SSEL2_position                   0x2
#define SMT2SIG_SSEL2_size                       0x1
#define SMT2SIG_SSEL2_value_mask                 0x4
#define SMT2SIG_SSEL2_clear_mask                 0xFB


/*--------------------------------------------------------------#
| SMT2WIN                                                 0xDAF |
#---------------------------------------------------------------#
| - | - | - | - | SMT2WSEL3 | SMT2WSEL2 | SMT2WSEL1 | SMT2WSEL0 |
#---------------------------------------------------------------#
| 7 | 6 | 5 | 4 | 3         | 2         | 1         | 0         |
#--------------------------------------------------------------*/

#define SMT2WIN                                  0x0
#define SMT2WIN_address                          0xDAF
#define SMT2WIN_position                         0x0
#define SMT2WIN_size                             0x8
#define SMT2WIN_value_mask                       0xFF
#define SMT2WIN_clear_mask                       0x0

#define SMT2WIN_WSEL0                            0x0
#define SMT2WIN_WSEL0_address                    0xDAF
#define SMT2WIN_WSEL0_position                   0x0
#define SMT2WIN_WSEL0_size                       0x1
#define SMT2WIN_WSEL0_value_mask                 0x1
#define SMT2WIN_WSEL0_clear_mask                 0xFE

#define SMT2WSEL0                                0x0
#define SMT2WSEL0_address                        0xDAF
#define SMT2WSEL0_position                       0x0
#define SMT2WSEL0_size                           0x1
#define SMT2WSEL0_value_mask                     0x1
#define SMT2WSEL0_clear_mask                     0xFE

#define SMT2WSEL                                 0x0
#define SMT2WSEL_address                         0xDAF
#define SMT2WSEL_position                        0x0
#define SMT2WSEL_size                            0x8
#define SMT2WSEL_value_mask                      0xFF
#define SMT2WSEL_clear_mask                      0x0

#define SMT2WIN_WSEL                             0x0
#define SMT2WIN_WSEL_address                     0xDAF
#define SMT2WIN_WSEL_position                    0x0
#define SMT2WIN_WSEL_size                        0x8
#define SMT2WIN_WSEL_value_mask                  0xFF
#define SMT2WIN_WSEL_clear_mask                  0x0

#define SMT2WSEL1                                0x1
#define SMT2WSEL1_address                        0xDAF
#define SMT2WSEL1_position                       0x1
#define SMT2WSEL1_size                           0x1
#define SMT2WSEL1_value_mask                     0x2
#define SMT2WSEL1_clear_mask                     0xFD

#define SMT2WIN_WSEL1                            0x1
#define SMT2WIN_WSEL1_address                    0xDAF
#define SMT2WIN_WSEL1_position                   0x1
#define SMT2WIN_WSEL1_size                       0x1
#define SMT2WIN_WSEL1_value_mask                 0x2
#define SMT2WIN_WSEL1_clear_mask                 0xFD

#define SMT2WSEL2                                0x2
#define SMT2WSEL2_address                        0xDAF
#define SMT2WSEL2_position                       0x2
#define SMT2WSEL2_size                           0x1
#define SMT2WSEL2_value_mask                     0x4
#define SMT2WSEL2_clear_mask                     0xFB

#define SMT2WIN_WSEL2                            0x2
#define SMT2WIN_WSEL2_address                    0xDAF
#define SMT2WIN_WSEL2_position                   0x2
#define SMT2WIN_WSEL2_size                       0x1
#define SMT2WIN_WSEL2_value_mask                 0x4
#define SMT2WIN_WSEL2_clear_mask                 0xFB

#define SMT2WSEL3                                0x3
#define SMT2WSEL3_address                        0xDAF
#define SMT2WSEL3_position                       0x3
#define SMT2WSEL3_size                           0x1
#define SMT2WSEL3_value_mask                     0x8
#define SMT2WSEL3_clear_mask                     0xF7

#define SMT2WIN_WSEL3                            0x3
#define SMT2WIN_WSEL3_address                    0xDAF
#define SMT2WIN_WSEL3_position                   0x3
#define SMT2WIN_WSEL3_size                       0x1
#define SMT2WIN_WSEL3_value_mask                 0x8
#define SMT2WIN_WSEL3_clear_mask                 0xF7


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

#endif // _PIC16LF1613_H_
