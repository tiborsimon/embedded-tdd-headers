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

#ifndef _PIC16F18324_H_
#define _PIC16F18324_H_


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


/*----------------------------------------#
| INTCON                              0xB |
#-----------------------------------------#
| GIE | PEIE | - | - | - | - | - | INTEDG |
#-----------------------------------------#
| 7   | 6    | 5 | 4 | 3 | 2 | 1 | 0      |
#----------------------------------------*/

#define INTCON                                   0x0
#define INTCON_address                           0x00B
#define INTCON_position                          0x0
#define INTCON_size                              0x8
#define INTCON_value_mask                        0xFF
#define INTCON_clear_mask                        0x0

#define INTEDG                                   0x0
#define INTEDG_address                           0x00B
#define INTEDG_position                          0x0
#define INTEDG_size                              0x1
#define INTEDG_value_mask                        0x1
#define INTEDG_clear_mask                        0xFE

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


/*------------------------------------------#
| PIR0                                 0x10 |
#-------------------------------------------#
| - | - | TMR0IF | IOCIF | - | - | - | INTF |
#-------------------------------------------#
| 7 | 6 | 5      | 4     | 3 | 2 | 1 | 0    |
#------------------------------------------*/

#define PIR0                                     0x0
#define PIR0_address                             0x010
#define PIR0_position                            0x0
#define PIR0_size                                0x8
#define PIR0_value_mask                          0xFF
#define PIR0_clear_mask                          0x0

#define INTF                                     0x0
#define INTF_address                             0x010
#define INTF_position                            0x0
#define INTF_size                                0x1
#define INTF_value_mask                          0x1
#define INTF_clear_mask                          0xFE

#define IOCIF                                    0x4
#define IOCIF_address                            0x010
#define IOCIF_position                           0x4
#define IOCIF_size                               0x1
#define IOCIF_value_mask                         0x10
#define IOCIF_clear_mask                         0xEF

#define TMR0IF                                   0x5
#define TMR0IF_address                           0x010
#define TMR0IF_position                          0x5
#define TMR0IF_size                              0x1
#define TMR0IF_value_mask                        0x20
#define TMR0IF_clear_mask                        0xDF


/*-----------------------------------------------------------------#
| PIR1                                                        0x11 |
#------------------------------------------------------------------#
| TMR1GIF | ADIF | RCIF | TXIF | SSP1IF | BCL1IF | TMR2IF | TMR1IF |
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

#define BCL1IF                                   0x2
#define BCL1IF_address                           0x011
#define BCL1IF_position                          0x2
#define BCL1IF_size                              0x1
#define BCL1IF_value_mask                        0x4
#define BCL1IF_clear_mask                        0xFB

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


/*-------------------------------------------------------#
| PIR2                                              0x12 |
#--------------------------------------------------------#
| TMR6IF | C2IF | C1IF | NVMIF | - | - | TMR4IF | NCO1IF |
#--------------------------------------------------------#
| 7      | 6    | 5    | 4     | 3 | 2 | 1      | 0      |
#-------------------------------------------------------*/

#define PIR2                                     0x0
#define PIR2_address                             0x012
#define PIR2_position                            0x0
#define PIR2_size                                0x8
#define PIR2_value_mask                          0xFF
#define PIR2_clear_mask                          0x0

#define NCO1IF                                   0x0
#define NCO1IF_address                           0x012
#define NCO1IF_position                          0x0
#define NCO1IF_size                              0x1
#define NCO1IF_value_mask                        0x1
#define NCO1IF_clear_mask                        0xFE

#define TMR4IF                                   0x1
#define TMR4IF_address                           0x012
#define TMR4IF_position                          0x1
#define TMR4IF_size                              0x1
#define TMR4IF_value_mask                        0x2
#define TMR4IF_clear_mask                        0xFD

#define NVMIF                                    0x4
#define NVMIF_address                            0x012
#define NVMIF_position                           0x4
#define NVMIF_size                               0x1
#define NVMIF_value_mask                         0x10
#define NVMIF_clear_mask                         0xEF

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

#define TMR6IF                                   0x7
#define TMR6IF_address                           0x012
#define TMR6IF_position                          0x7
#define TMR6IF_size                              0x1
#define TMR6IF_value_mask                        0x80
#define TMR6IF_clear_mask                        0x7F


/*---------------------------------------------------------------------#
| PIR3                                                            0x13 |
#----------------------------------------------------------------------#
| OSFIF | CSWIF | TMR3GIF | TMR3IF | CLC4IF | CLC3IF | CLC2IF | CLC1IF |
#----------------------------------------------------------------------#
| 7     | 6     | 5       | 4      | 3      | 2      | 1      | 0      |
#---------------------------------------------------------------------*/

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

#define TMR3IF                                   0x4
#define TMR3IF_address                           0x013
#define TMR3IF_position                          0x4
#define TMR3IF_size                              0x1
#define TMR3IF_value_mask                        0x10
#define TMR3IF_clear_mask                        0xEF

#define TMR3GIF                                  0x5
#define TMR3GIF_address                          0x013
#define TMR3GIF_position                         0x5
#define TMR3GIF_size                             0x1
#define TMR3GIF_value_mask                       0x20
#define TMR3GIF_clear_mask                       0xDF

#define CSWIF                                    0x6
#define CSWIF_address                            0x013
#define CSWIF_position                           0x6
#define CSWIF_size                               0x1
#define CSWIF_value_mask                         0x40
#define CSWIF_clear_mask                         0xBF

#define OSFIF                                    0x7
#define OSFIF_address                            0x013
#define OSFIF_position                           0x7
#define OSFIF_size                               0x1
#define OSFIF_value_mask                         0x80
#define OSFIF_clear_mask                         0x7F


/*-----------------------------------------------------------------------#
| PIR4                                                              0x14 |
#------------------------------------------------------------------------#
| CWG2IF | CWG1IF | TMR5GIF | TMR5IF | CCP4IF | CCP3IF | CCP2IF | CCP1IF |
#------------------------------------------------------------------------#
| 7      | 6      | 5       | 4      | 3      | 2      | 1      | 0      |
#-----------------------------------------------------------------------*/

#define PIR4                                     0x0
#define PIR4_address                             0x014
#define PIR4_position                            0x0
#define PIR4_size                                0x8
#define PIR4_value_mask                          0xFF
#define PIR4_clear_mask                          0x0

#define CCP1IF                                   0x0
#define CCP1IF_address                           0x014
#define CCP1IF_position                          0x0
#define CCP1IF_size                              0x1
#define CCP1IF_value_mask                        0x1
#define CCP1IF_clear_mask                        0xFE

#define CCP2IF                                   0x1
#define CCP2IF_address                           0x014
#define CCP2IF_position                          0x1
#define CCP2IF_size                              0x1
#define CCP2IF_value_mask                        0x2
#define CCP2IF_clear_mask                        0xFD

#define CCP3IF                                   0x2
#define CCP3IF_address                           0x014
#define CCP3IF_position                          0x2
#define CCP3IF_size                              0x1
#define CCP3IF_value_mask                        0x4
#define CCP3IF_clear_mask                        0xFB

#define CCP4IF                                   0x3
#define CCP4IF_address                           0x014
#define CCP4IF_position                          0x3
#define CCP4IF_size                              0x1
#define CCP4IF_value_mask                        0x8
#define CCP4IF_clear_mask                        0xF7

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

#define CWG1IF                                   0x6
#define CWG1IF_address                           0x014
#define CWG1IF_position                          0x6
#define CWG1IF_size                              0x1
#define CWG1IF_value_mask                        0x40
#define CWG1IF_clear_mask                        0xBF

#define CWG2IF                                   0x7
#define CWG2IF_address                           0x014
#define CWG2IF_position                          0x7
#define CWG2IF_size                              0x1
#define CWG2IF_value_mask                        0x80
#define CWG2IF_clear_mask                        0x7F


/*--------------------------------------------------------------#
| TMR0L                                                    0x15 |
#---------------------------------------------------------------#
| TMR07 | TMR06 | TMR05 | TMR04 | TMR03 | TMR02 | TMR01 | TMR00 |
#---------------------------------------------------------------#
| 7     | 6     | 5     | 4     | 3     | 2     | 1     | 0     |
#--------------------------------------------------------------*/

#define TMR00                                    0x0
#define TMR00_address                            0x015
#define TMR00_position                           0x0
#define TMR00_size                               0x1
#define TMR00_value_mask                         0x1
#define TMR00_clear_mask                         0xFE

#define TMR0L                                    0x0
#define TMR0L_address                            0x015
#define TMR0L_position                           0x0
#define TMR0L_size                               0x8
#define TMR0L_value_mask                         0xFF
#define TMR0L_clear_mask                         0x0

#define TMR01                                    0x1
#define TMR01_address                            0x015
#define TMR01_position                           0x1
#define TMR01_size                               0x1
#define TMR01_value_mask                         0x2
#define TMR01_clear_mask                         0xFD

#define TMR02                                    0x2
#define TMR02_address                            0x015
#define TMR02_position                           0x2
#define TMR02_size                               0x1
#define TMR02_value_mask                         0x4
#define TMR02_clear_mask                         0xFB

#define TMR03                                    0x3
#define TMR03_address                            0x015
#define TMR03_position                           0x3
#define TMR03_size                               0x1
#define TMR03_value_mask                         0x8
#define TMR03_clear_mask                         0xF7

#define TMR04                                    0x4
#define TMR04_address                            0x015
#define TMR04_position                           0x4
#define TMR04_size                               0x1
#define TMR04_value_mask                         0x10
#define TMR04_clear_mask                         0xEF

#define TMR05                                    0x5
#define TMR05_address                            0x015
#define TMR05_position                           0x5
#define TMR05_size                               0x1
#define TMR05_value_mask                         0x20
#define TMR05_clear_mask                         0xDF

#define TMR06                                    0x6
#define TMR06_address                            0x015
#define TMR06_position                           0x6
#define TMR06_size                               0x1
#define TMR06_value_mask                         0x40
#define TMR06_clear_mask                         0xBF

#define TMR07                                    0x7
#define TMR07_address                            0x015
#define TMR07_position                           0x7
#define TMR07_size                               0x1
#define TMR07_value_mask                         0x80
#define TMR07_clear_mask                         0x7F


/*--------------------------------------------------------------------#
| TMR0H                                                          0x16 |
#---------------------------------------------------------------------#
| TMR015 | TMR014 | TMR013 | TMR012 | TMR011 | TMR010 | TMR09 | TMR08 |
#---------------------------------------------------------------------#
| 7      | 6      | 5      | 4      | 3      | 2      | 1     | 0     |
#--------------------------------------------------------------------*/

#define TMR08                                    0x0
#define TMR08_address                            0x016
#define TMR08_position                           0x0
#define TMR08_size                               0x1
#define TMR08_value_mask                         0x1
#define TMR08_clear_mask                         0xFE

#define TMR0H                                    0x0
#define TMR0H_address                            0x016
#define TMR0H_position                           0x0
#define TMR0H_size                               0x8
#define TMR0H_value_mask                         0xFF
#define TMR0H_clear_mask                         0x0

#define TMR09                                    0x1
#define TMR09_address                            0x016
#define TMR09_position                           0x1
#define TMR09_size                               0x1
#define TMR09_value_mask                         0x2
#define TMR09_clear_mask                         0xFD

#define TMR010                                   0x2
#define TMR010_address                           0x016
#define TMR010_position                          0x2
#define TMR010_size                              0x1
#define TMR010_value_mask                        0x4
#define TMR010_clear_mask                        0xFB

#define TMR011                                   0x3
#define TMR011_address                           0x016
#define TMR011_position                          0x3
#define TMR011_size                              0x1
#define TMR011_value_mask                        0x8
#define TMR011_clear_mask                        0xF7

#define TMR012                                   0x4
#define TMR012_address                           0x016
#define TMR012_position                          0x4
#define TMR012_size                              0x1
#define TMR012_value_mask                        0x10
#define TMR012_clear_mask                        0xEF

#define TMR013                                   0x5
#define TMR013_address                           0x016
#define TMR013_position                          0x5
#define TMR013_size                              0x1
#define TMR013_value_mask                        0x20
#define TMR013_clear_mask                        0xDF

#define TMR014                                   0x6
#define TMR014_address                           0x016
#define TMR014_position                          0x6
#define TMR014_size                              0x1
#define TMR014_value_mask                        0x40
#define TMR014_clear_mask                        0xBF

#define TMR015                                   0x7
#define TMR015_address                           0x016
#define TMR015_position                          0x7
#define TMR015_size                              0x1
#define TMR015_value_mask                        0x80
#define TMR015_clear_mask                        0x7F


/*-----------------------------------------------------------------------#
| T0CON0                                                            0x17 |
#------------------------------------------------------------------------#
| T0EN | - | T0OUT | T016BIT | T0OUTPS3 | T0OUTPS2 | T0OUTPS1 | T0OUTPS0 |
#------------------------------------------------------------------------#
| 7    | 6 | 5     | 4       | 3        | 2        | 1        | 0        |
#-----------------------------------------------------------------------*/

#define T0CON0                                   0x0
#define T0CON0_address                           0x017
#define T0CON0_position                          0x0
#define T0CON0_size                              0x8
#define T0CON0_value_mask                        0xFF
#define T0CON0_clear_mask                        0x0

#define T0OUTPS                                  0x0
#define T0OUTPS_address                          0x017
#define T0OUTPS_position                         0x0
#define T0OUTPS_size                             0x4
#define T0OUTPS_value_mask                       0xF
#define T0OUTPS_clear_mask                       0xF0

#define T0OUTPS0                                 0x0
#define T0OUTPS0_address                         0x017
#define T0OUTPS0_position                        0x0
#define T0OUTPS0_size                            0x1
#define T0OUTPS0_value_mask                      0x1
#define T0OUTPS0_clear_mask                      0xFE

#define T0OUTPS1                                 0x1
#define T0OUTPS1_address                         0x017
#define T0OUTPS1_position                        0x1
#define T0OUTPS1_size                            0x1
#define T0OUTPS1_value_mask                      0x2
#define T0OUTPS1_clear_mask                      0xFD

#define T0OUTPS2                                 0x2
#define T0OUTPS2_address                         0x017
#define T0OUTPS2_position                        0x2
#define T0OUTPS2_size                            0x1
#define T0OUTPS2_value_mask                      0x4
#define T0OUTPS2_clear_mask                      0xFB

#define T0OUTPS3                                 0x3
#define T0OUTPS3_address                         0x017
#define T0OUTPS3_position                        0x3
#define T0OUTPS3_size                            0x1
#define T0OUTPS3_value_mask                      0x8
#define T0OUTPS3_clear_mask                      0xF7

#define T016BIT                                  0x4
#define T016BIT_address                          0x017
#define T016BIT_position                         0x4
#define T016BIT_size                             0x1
#define T016BIT_value_mask                       0x10
#define T016BIT_clear_mask                       0xEF

#define T0OUT                                    0x5
#define T0OUT_address                            0x017
#define T0OUT_position                           0x5
#define T0OUT_size                               0x1
#define T0OUT_value_mask                         0x20
#define T0OUT_clear_mask                         0xDF

#define T0EN                                     0x7
#define T0EN_address                             0x017
#define T0EN_position                            0x7
#define T0EN_size                                0x1
#define T0EN_value_mask                          0x80
#define T0EN_clear_mask                          0x7F


/*------------------------------------------------------------------------#
| T0CON1                                                             0x18 |
#-------------------------------------------------------------------------#
| T0CS2 | T0CS1 | T0CS0 | T0ASYNC | T0CKPS3 | T0CKPS2 | T0CKPS1 | T0CKPS0 |
#-------------------------------------------------------------------------#
| 7     | 6     | 5     | 4       | 3       | 2       | 1       | 0       |
#------------------------------------------------------------------------*/

#define T0CON1                                   0x0
#define T0CON1_address                           0x018
#define T0CON1_position                          0x0
#define T0CON1_size                              0x8
#define T0CON1_value_mask                        0xFF
#define T0CON1_clear_mask                        0x0

#define T0CKPS                                   0x0
#define T0CKPS_address                           0x018
#define T0CKPS_position                          0x0
#define T0CKPS_size                              0x4
#define T0CKPS_value_mask                        0xF
#define T0CKPS_clear_mask                        0xF0

#define T0CKPS0                                  0x0
#define T0CKPS0_address                          0x018
#define T0CKPS0_position                         0x0
#define T0CKPS0_size                             0x1
#define T0CKPS0_value_mask                       0x1
#define T0CKPS0_clear_mask                       0xFE

#define T0CKPS1                                  0x1
#define T0CKPS1_address                          0x018
#define T0CKPS1_position                         0x1
#define T0CKPS1_size                             0x1
#define T0CKPS1_value_mask                       0x2
#define T0CKPS1_clear_mask                       0xFD

#define T0CKPS2                                  0x2
#define T0CKPS2_address                          0x018
#define T0CKPS2_position                         0x2
#define T0CKPS2_size                             0x1
#define T0CKPS2_value_mask                       0x4
#define T0CKPS2_clear_mask                       0xFB

#define T0CKPS3                                  0x3
#define T0CKPS3_address                          0x018
#define T0CKPS3_position                         0x3
#define T0CKPS3_size                             0x1
#define T0CKPS3_value_mask                       0x8
#define T0CKPS3_clear_mask                       0xF7

#define T0ASYNC                                  0x4
#define T0ASYNC_address                          0x018
#define T0ASYNC_position                         0x4
#define T0ASYNC_size                             0x1
#define T0ASYNC_value_mask                       0x10
#define T0ASYNC_clear_mask                       0xEF

#define T0CS                                     0x5
#define T0CS_address                             0x018
#define T0CS_position                            0x5
#define T0CS_size                                0x3
#define T0CS_value_mask                          0xE0
#define T0CS_clear_mask                          0x1F

#define T0CS0                                    0x5
#define T0CS0_address                            0x018
#define T0CS0_position                           0x5
#define T0CS0_size                               0x1
#define T0CS0_value_mask                         0x20
#define T0CS0_clear_mask                         0xDF

#define T0CS1                                    0x6
#define T0CS1_address                            0x018
#define T0CS1_position                           0x6
#define T0CS1_size                               0x1
#define T0CS1_value_mask                         0x40
#define T0CS1_clear_mask                         0xBF

#define T0CS2                                    0x7
#define T0CS2_address                            0x018
#define T0CS2_position                           0x7
#define T0CS2_size                               0x1
#define T0CS2_value_mask                         0x80
#define T0CS2_clear_mask                         0x7F


/*------------------------------#
| TMR1L                    0x19 |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define TMR1L                                    0x0
#define TMR1L_address                            0x019
#define TMR1L_position                           0x0
#define TMR1L_size                               0x8
#define TMR1L_value_mask                         0xFF
#define TMR1L_clear_mask                         0x0


/*------------------------------#
| TMR1H                    0x1A |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define TMR1H                                    0x0
#define TMR1H_address                            0x01A
#define TMR1H_position                           0x0
#define TMR1H_size                               0x8
#define TMR1H_value_mask                         0xFF
#define TMR1H_clear_mask                         0x0


/*---------------------------------------------------------------------#
| T1CON                                                           0x1B |
#----------------------------------------------------------------------#
| TMR1CS1 | TMR1CS0 | T1CKPS1 | T1CKPS0 | T1SOSC | T1SYNC | - | TMR1ON |
#----------------------------------------------------------------------#
| 7       | 6       | 5       | 4       | 3      | 2      | 1 | 0      |
#---------------------------------------------------------------------*/

#define T1CON                                    0x0
#define T1CON_address                            0x01B
#define T1CON_position                           0x0
#define T1CON_size                               0x8
#define T1CON_value_mask                         0xFF
#define T1CON_clear_mask                         0x0

#define TMR1ON                                   0x0
#define TMR1ON_address                           0x01B
#define TMR1ON_position                          0x0
#define TMR1ON_size                              0x1
#define TMR1ON_value_mask                        0x1
#define TMR1ON_clear_mask                        0xFE

#define T1SYNC                                   0x2
#define T1SYNC_address                           0x01B
#define T1SYNC_position                          0x2
#define T1SYNC_size                              0x1
#define T1SYNC_value_mask                        0x4
#define T1SYNC_clear_mask                        0xFB

#define T1SOSC                                   0x3
#define T1SOSC_address                           0x01B
#define T1SOSC_position                          0x3
#define T1SOSC_size                              0x1
#define T1SOSC_value_mask                        0x8
#define T1SOSC_clear_mask                        0xF7

#define T1CKPS0                                  0x4
#define T1CKPS0_address                          0x01B
#define T1CKPS0_position                         0x4
#define T1CKPS0_size                             0x1
#define T1CKPS0_value_mask                       0x10
#define T1CKPS0_clear_mask                       0xEF

#define T1CKPS                                   0x4
#define T1CKPS_address                           0x01B
#define T1CKPS_position                          0x4
#define T1CKPS_size                              0x2
#define T1CKPS_value_mask                        0x30
#define T1CKPS_clear_mask                        0xCF

#define T1CKPS1                                  0x5
#define T1CKPS1_address                          0x01B
#define T1CKPS1_position                         0x5
#define T1CKPS1_size                             0x1
#define T1CKPS1_value_mask                       0x20
#define T1CKPS1_clear_mask                       0xDF

#define TMR1CS0                                  0x6
#define TMR1CS0_address                          0x01B
#define TMR1CS0_position                         0x6
#define TMR1CS0_size                             0x1
#define TMR1CS0_value_mask                       0x40
#define TMR1CS0_clear_mask                       0xBF

#define TMR1CS                                   0x6
#define TMR1CS_address                           0x01B
#define TMR1CS_position                          0x6
#define TMR1CS_size                              0x2
#define TMR1CS_value_mask                        0xC0
#define TMR1CS_clear_mask                        0x3F

#define TMR1CS1                                  0x7
#define TMR1CS1_address                          0x01B
#define TMR1CS1_position                         0x7
#define TMR1CS1_size                             0x1
#define TMR1CS1_value_mask                       0x80
#define TMR1CS1_clear_mask                       0x7F


/*--------------------------------------------------------------------------#
| T1GCON                                                               0x1C |
#---------------------------------------------------------------------------#
| TMR1GE | T1GPOL | T1GTM | T1GSPM | T1GGO_nDONE | T1GVAL | T1GSS1 | T1GSS0 |
#---------------------------------------------------------------------------#
| 7      | 6      | 5     | 4      | 3           | 2      | 1      | 0      |
#--------------------------------------------------------------------------*/

#define T1GCON                                   0x0
#define T1GCON_address                           0x01C
#define T1GCON_position                          0x0
#define T1GCON_size                              0x8
#define T1GCON_value_mask                        0xFF
#define T1GCON_clear_mask                        0x0

#define T1GSS0                                   0x0
#define T1GSS0_address                           0x01C
#define T1GSS0_position                          0x0
#define T1GSS0_size                              0x1
#define T1GSS0_value_mask                        0x1
#define T1GSS0_clear_mask                        0xFE

#define T1GSS                                    0x0
#define T1GSS_address                            0x01C
#define T1GSS_position                           0x0
#define T1GSS_size                               0x2
#define T1GSS_value_mask                         0x3
#define T1GSS_clear_mask                         0xFC

#define T1GSS1                                   0x1
#define T1GSS1_address                           0x01C
#define T1GSS1_position                          0x1
#define T1GSS1_size                              0x1
#define T1GSS1_value_mask                        0x2
#define T1GSS1_clear_mask                        0xFD

#define T1GVAL                                   0x2
#define T1GVAL_address                           0x01C
#define T1GVAL_position                          0x2
#define T1GVAL_size                              0x1
#define T1GVAL_value_mask                        0x4
#define T1GVAL_clear_mask                        0xFB

#define T1GGO_nDONE                              0x3
#define T1GGO_nDONE_address                      0x01C
#define T1GGO_nDONE_position                     0x3
#define T1GGO_nDONE_size                         0x1
#define T1GGO_nDONE_value_mask                   0x8
#define T1GGO_nDONE_clear_mask                   0xF7

#define T1GSPM                                   0x4
#define T1GSPM_address                           0x01C
#define T1GSPM_position                          0x4
#define T1GSPM_size                              0x1
#define T1GSPM_value_mask                        0x10
#define T1GSPM_clear_mask                        0xEF

#define T1GTM                                    0x5
#define T1GTM_address                            0x01C
#define T1GTM_position                           0x5
#define T1GTM_size                               0x1
#define T1GTM_value_mask                         0x20
#define T1GTM_clear_mask                         0xDF

#define T1GPOL                                   0x6
#define T1GPOL_address                           0x01C
#define T1GPOL_position                          0x6
#define T1GPOL_size                              0x1
#define T1GPOL_value_mask                        0x40
#define T1GPOL_clear_mask                        0xBF

#define TMR1GE                                   0x7
#define TMR1GE_address                           0x01C
#define TMR1GE_position                          0x7
#define TMR1GE_size                              0x1
#define TMR1GE_value_mask                        0x80
#define TMR1GE_clear_mask                        0x7F


/*------------------------------#
| TMR2                     0x1D |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define TMR2                                     0x0
#define TMR2_address                             0x01D
#define TMR2_position                            0x0
#define TMR2_size                                0x8
#define TMR2_value_mask                          0xFF
#define TMR2_clear_mask                          0x0


/*------------------------------#
| PR2                      0x1E |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define PR2                                      0x0
#define PR2_address                              0x01E
#define PR2_position                             0x0
#define PR2_size                                 0x8
#define PR2_value_mask                           0xFF
#define PR2_clear_mask                           0x0


/*---------------------------------------------------------------------------#
| T2CON                                                                 0x1F |
#----------------------------------------------------------------------------#
| - | T2OUTPS3 | T2OUTPS2 | T2OUTPS1 | T2OUTPS0 | TMR2ON | T2CKPS1 | T2CKPS0 |
#----------------------------------------------------------------------------#
| 7 | 6        | 5        | 4        | 3        | 2      | 1       | 0       |
#---------------------------------------------------------------------------*/

#define T2CON                                    0x0
#define T2CON_address                            0x01F
#define T2CON_position                           0x0
#define T2CON_size                               0x8
#define T2CON_value_mask                         0xFF
#define T2CON_clear_mask                         0x0

#define T2CKPS0                                  0x0
#define T2CKPS0_address                          0x01F
#define T2CKPS0_position                         0x0
#define T2CKPS0_size                             0x1
#define T2CKPS0_value_mask                       0x1
#define T2CKPS0_clear_mask                       0xFE

#define T2CKPS                                   0x0
#define T2CKPS_address                           0x01F
#define T2CKPS_position                          0x0
#define T2CKPS_size                              0x2
#define T2CKPS_value_mask                        0x3
#define T2CKPS_clear_mask                        0xFC

#define T2CKPS1                                  0x1
#define T2CKPS1_address                          0x01F
#define T2CKPS1_position                         0x1
#define T2CKPS1_size                             0x1
#define T2CKPS1_value_mask                       0x2
#define T2CKPS1_clear_mask                       0xFD

#define TMR2ON                                   0x2
#define TMR2ON_address                           0x01F
#define TMR2ON_position                          0x2
#define TMR2ON_size                              0x1
#define TMR2ON_value_mask                        0x4
#define TMR2ON_clear_mask                        0xFB

#define T2OUTPS0                                 0x3
#define T2OUTPS0_address                         0x01F
#define T2OUTPS0_position                        0x3
#define T2OUTPS0_size                            0x1
#define T2OUTPS0_value_mask                      0x8
#define T2OUTPS0_clear_mask                      0xF7

#define T2OUTPS                                  0x3
#define T2OUTPS_address                          0x01F
#define T2OUTPS_position                         0x3
#define T2OUTPS_size                             0x4
#define T2OUTPS_value_mask                       0x78
#define T2OUTPS_clear_mask                       0x87

#define T2OUTPS1                                 0x4
#define T2OUTPS1_address                         0x01F
#define T2OUTPS1_position                        0x4
#define T2OUTPS1_size                            0x1
#define T2OUTPS1_value_mask                      0x10
#define T2OUTPS1_clear_mask                      0xEF

#define T2OUTPS2                                 0x5
#define T2OUTPS2_address                         0x01F
#define T2OUTPS2_position                        0x5
#define T2OUTPS2_size                            0x1
#define T2OUTPS2_value_mask                      0x20
#define T2OUTPS2_clear_mask                      0xDF

#define T2OUTPS3                                 0x6
#define T2OUTPS3_address                         0x01F
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


/*------------------------------------------#
| PIE0                                 0x90 |
#-------------------------------------------#
| - | - | TMR0IE | IOCIE | - | - | - | INTE |
#-------------------------------------------#
| 7 | 6 | 5      | 4     | 3 | 2 | 1 | 0    |
#------------------------------------------*/

#define PIE0                                     0x0
#define PIE0_address                             0x090
#define PIE0_position                            0x0
#define PIE0_size                                0x8
#define PIE0_value_mask                          0xFF
#define PIE0_clear_mask                          0x0

#define INTE                                     0x0
#define INTE_address                             0x090
#define INTE_position                            0x0
#define INTE_size                                0x1
#define INTE_value_mask                          0x1
#define INTE_clear_mask                          0xFE

#define IOCIE                                    0x4
#define IOCIE_address                            0x090
#define IOCIE_position                           0x4
#define IOCIE_size                               0x1
#define IOCIE_value_mask                         0x10
#define IOCIE_clear_mask                         0xEF

#define TMR0IE                                   0x5
#define TMR0IE_address                           0x090
#define TMR0IE_position                          0x5
#define TMR0IE_size                              0x1
#define TMR0IE_value_mask                        0x20
#define TMR0IE_clear_mask                        0xDF


/*-----------------------------------------------------------------#
| PIE1                                                        0x91 |
#------------------------------------------------------------------#
| TMR1GIE | ADIE | RCIE | TXIE | SSP1IE | BCL1IE | TMR2IE | TMR1IE |
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

#define BCL1IE                                   0x2
#define BCL1IE_address                           0x091
#define BCL1IE_position                          0x2
#define BCL1IE_size                              0x1
#define BCL1IE_value_mask                        0x4
#define BCL1IE_clear_mask                        0xFB

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


/*-------------------------------------------------------#
| PIE2                                              0x92 |
#--------------------------------------------------------#
| TMR6IE | C2IE | C1IE | NVMIE | - | - | TMR4IE | NCO1IE |
#--------------------------------------------------------#
| 7      | 6    | 5    | 4     | 3 | 2 | 1      | 0      |
#-------------------------------------------------------*/

#define PIE2                                     0x0
#define PIE2_address                             0x092
#define PIE2_position                            0x0
#define PIE2_size                                0x8
#define PIE2_value_mask                          0xFF
#define PIE2_clear_mask                          0x0

#define NCO1IE                                   0x0
#define NCO1IE_address                           0x092
#define NCO1IE_position                          0x0
#define NCO1IE_size                              0x1
#define NCO1IE_value_mask                        0x1
#define NCO1IE_clear_mask                        0xFE

#define TMR4IE                                   0x1
#define TMR4IE_address                           0x092
#define TMR4IE_position                          0x1
#define TMR4IE_size                              0x1
#define TMR4IE_value_mask                        0x2
#define TMR4IE_clear_mask                        0xFD

#define NVMIE                                    0x4
#define NVMIE_address                            0x092
#define NVMIE_position                           0x4
#define NVMIE_size                               0x1
#define NVMIE_value_mask                         0x10
#define NVMIE_clear_mask                         0xEF

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

#define TMR6IE                                   0x7
#define TMR6IE_address                           0x092
#define TMR6IE_position                          0x7
#define TMR6IE_size                              0x1
#define TMR6IE_value_mask                        0x80
#define TMR6IE_clear_mask                        0x7F


/*---------------------------------------------------------------------#
| PIE3                                                            0x93 |
#----------------------------------------------------------------------#
| OSFIE | CSWIE | TMR3GIE | TMR3IE | CLC4IE | CLC3IE | CLC2IE | CLC1IE |
#----------------------------------------------------------------------#
| 7     | 6     | 5       | 4      | 3      | 2      | 1      | 0      |
#---------------------------------------------------------------------*/

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

#define TMR3IE                                   0x4
#define TMR3IE_address                           0x093
#define TMR3IE_position                          0x4
#define TMR3IE_size                              0x1
#define TMR3IE_value_mask                        0x10
#define TMR3IE_clear_mask                        0xEF

#define TMR3GIE                                  0x5
#define TMR3GIE_address                          0x093
#define TMR3GIE_position                         0x5
#define TMR3GIE_size                             0x1
#define TMR3GIE_value_mask                       0x20
#define TMR3GIE_clear_mask                       0xDF

#define CSWIE                                    0x6
#define CSWIE_address                            0x093
#define CSWIE_position                           0x6
#define CSWIE_size                               0x1
#define CSWIE_value_mask                         0x40
#define CSWIE_clear_mask                         0xBF

#define OSFIE                                    0x7
#define OSFIE_address                            0x093
#define OSFIE_position                           0x7
#define OSFIE_size                               0x1
#define OSFIE_value_mask                         0x80
#define OSFIE_clear_mask                         0x7F


/*-----------------------------------------------------------------------#
| PIE4                                                              0x94 |
#------------------------------------------------------------------------#
| CWG2IE | CWG1IE | TMR5GIE | TMR5IE | CCP4IE | CCP3IE | CCP2IE | CCP1IE |
#------------------------------------------------------------------------#
| 7      | 6      | 5       | 4      | 3      | 2      | 1      | 0      |
#-----------------------------------------------------------------------*/

#define PIE4                                     0x0
#define PIE4_address                             0x094
#define PIE4_position                            0x0
#define PIE4_size                                0x8
#define PIE4_value_mask                          0xFF
#define PIE4_clear_mask                          0x0

#define CCP1IE                                   0x0
#define CCP1IE_address                           0x094
#define CCP1IE_position                          0x0
#define CCP1IE_size                              0x1
#define CCP1IE_value_mask                        0x1
#define CCP1IE_clear_mask                        0xFE

#define CCP2IE                                   0x1
#define CCP2IE_address                           0x094
#define CCP2IE_position                          0x1
#define CCP2IE_size                              0x1
#define CCP2IE_value_mask                        0x2
#define CCP2IE_clear_mask                        0xFD

#define CCP3IE                                   0x2
#define CCP3IE_address                           0x094
#define CCP3IE_position                          0x2
#define CCP3IE_size                              0x1
#define CCP3IE_value_mask                        0x4
#define CCP3IE_clear_mask                        0xFB

#define CCP4IE                                   0x3
#define CCP4IE_address                           0x094
#define CCP4IE_position                          0x3
#define CCP4IE_size                              0x1
#define CCP4IE_value_mask                        0x8
#define CCP4IE_clear_mask                        0xF7

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

#define CWG1IE                                   0x6
#define CWG1IE_address                           0x094
#define CWG1IE_position                          0x6
#define CWG1IE_size                              0x1
#define CWG1IE_value_mask                        0x40
#define CWG1IE_clear_mask                        0xBF

#define CWG2IE                                   0x7
#define CWG2IE_address                           0x094
#define CWG2IE_position                          0x7
#define CWG2IE_size                              0x1
#define CWG2IE_value_mask                        0x80
#define CWG2IE_clear_mask                        0x7F


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


/*----------------------------------------------------------#
| ADCON0                                               0x9D |
#-----------------------------------------------------------#
| CHS5 | CHS4 | CHS3 | CHS2 | CHS1 | CHS0 | GO_nDONE | ADON |
#-----------------------------------------------------------#
| 7    | 6    | 5    | 4    | 3    | 2    | 1        | 0    |
#----------------------------------------------------------*/

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
#define CHS_size                                 0x6
#define CHS_value_mask                           0xFC
#define CHS_clear_mask                           0x3

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

#define CHS5                                     0x7
#define CHS5_address                             0x09D
#define CHS5_position                            0x7
#define CHS5_size                                0x1
#define CHS5_value_mask                          0x80
#define CHS5_clear_mask                          0x7F


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


/*-------------------------------------------------------#
| ADACT                                             0x9F |
#--------------------------------------------------------#
| - | - | - | ADACT4 | ADACT3 | ADACT2 | ADACT1 | ADACT0 |
#--------------------------------------------------------#
| 7 | 6 | 5 | 4      | 3      | 2      | 1      | 0      |
#-------------------------------------------------------*/

#define ADACT0                                   0x0
#define ADACT0_address                           0x09F
#define ADACT0_position                          0x0
#define ADACT0_size                              0x1
#define ADACT0_value_mask                        0x1
#define ADACT0_clear_mask                        0xFE

#define ADACT                                    0x0
#define ADACT_address                            0x09F
#define ADACT_position                           0x0
#define ADACT_size                               0x5
#define ADACT_value_mask                         0x1F
#define ADACT_clear_mask                         0xE0

#define ADACT1                                   0x1
#define ADACT1_address                           0x09F
#define ADACT1_position                          0x1
#define ADACT1_size                              0x1
#define ADACT1_value_mask                        0x2
#define ADACT1_clear_mask                        0xFD

#define ADACT2                                   0x2
#define ADACT2_address                           0x09F
#define ADACT2_position                          0x2
#define ADACT2_size                              0x1
#define ADACT2_value_mask                        0x4
#define ADACT2_clear_mask                        0xFB

#define ADACT3                                   0x3
#define ADACT3_address                           0x09F
#define ADACT3_position                          0x3
#define ADACT3_size                              0x1
#define ADACT3_value_mask                        0x8
#define ADACT3_clear_mask                        0xF7

#define ADACT4                                   0x4
#define ADACT4_address                           0x09F
#define ADACT4_position                          0x4
#define ADACT4_size                              0x1
#define ADACT4_value_mask                        0x10
#define ADACT4_clear_mask                        0xEF


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


/*-----------------------------------------------------#
| CM1CON0                                        0x111 |
#------------------------------------------------------#
| C1ON | C1OUT | - | C1POL | - | C1SP | C1HYS | C1SYNC |
#------------------------------------------------------#
| 7    | 6     | 5 | 4     | 3 | 2    | 1     | 0      |
#-----------------------------------------------------*/

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


/*-----------------------------------------------------#
| CM2CON0                                        0x113 |
#------------------------------------------------------#
| C2ON | C2OUT | - | C2POL | - | C2SP | C2HYS | C2SYNC |
#------------------------------------------------------#
| 7    | 6     | 5 | 4     | 3 | 2    | 1     | 0      |
#-----------------------------------------------------*/

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


/*----------------------------------------#
| BORCON                            0x116 |
#-----------------------------------------#
| SBOREN | - | - | - | - | - | - | BORRDY |
#-----------------------------------------#
| 7      | 6 | 5 | 4 | 3 | 2 | 1 | 0      |
#----------------------------------------*/

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


/*------------------------------------------------------------#
| DACCON0                                               0x118 |
#-------------------------------------------------------------#
| DAC1EN | - | DAC1OE | - | DAC1PSS1 | DAC1PSS0 | - | DAC1NSS |
#-------------------------------------------------------------#
| 7      | 6 | 5      | 4 | 3        | 2        | 1 | 0       |
#------------------------------------------------------------*/

#define DACCON0                                  0x0
#define DACCON0_address                          0x118
#define DACCON0_position                         0x0
#define DACCON0_size                             0x8
#define DACCON0_value_mask                       0xFF
#define DACCON0_clear_mask                       0x0

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

#define DAC1PSS0                                 0x2
#define DAC1PSS0_address                         0x118
#define DAC1PSS0_position                        0x2
#define DAC1PSS0_size                            0x1
#define DAC1PSS0_value_mask                      0x4
#define DAC1PSS0_clear_mask                      0xFB

#define DAC1PSS1                                 0x3
#define DAC1PSS1_address                         0x118
#define DAC1PSS1_position                        0x3
#define DAC1PSS1_size                            0x1
#define DAC1PSS1_value_mask                      0x8
#define DAC1PSS1_clear_mask                      0xF7

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


/*-------------------------------------------------------#
| DACCON1                                          0x119 |
#--------------------------------------------------------#
| - | - | - | DAC1R4 | DAC1R3 | DAC1R2 | DAC1R1 | DAC1R0 |
#--------------------------------------------------------#
| 7 | 6 | 5 | 4      | 3      | 2      | 1      | 0      |
#-------------------------------------------------------*/

#define DACCON1                                  0x0
#define DACCON1_address                          0x119
#define DACCON1_position                         0x0
#define DACCON1_size                             0x8
#define DACCON1_value_mask                       0xFF
#define DACCON1_clear_mask                       0x0

#define DAC1R                                    0x0
#define DAC1R_address                            0x119
#define DAC1R_position                           0x0
#define DAC1R_size                               0x5
#define DAC1R_value_mask                         0x1F
#define DAC1R_clear_mask                         0xE0

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


/*--------------------------------------------------#
| ANSELA                                      0x18C |
#---------------------------------------------------#
| - | - | ANSA5 | ANSA4 | - | ANSA2 | ANSA1 | ANSA0 |
#---------------------------------------------------#
| 7 | 6 | 5     | 4     | 3 | 2     | 1     | 0     |
#--------------------------------------------------*/

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


/*--------------------------------------------------#
| ODCONA                                      0x28C |
#---------------------------------------------------#
| - | - | ODCA5 | ODCA4 | - | ODCA2 | ODCA1 | ODCA0 |
#---------------------------------------------------#
| 7 | 6 | 5     | 4     | 3 | 2     | 1     | 0     |
#--------------------------------------------------*/

#define ODCONA                                   0x0
#define ODCONA_address                           0x28C
#define ODCONA_position                          0x0
#define ODCONA_size                              0x8
#define ODCONA_value_mask                        0xFF
#define ODCONA_clear_mask                        0x0

#define ODCA0                                    0x0
#define ODCA0_address                            0x28C
#define ODCA0_position                           0x0
#define ODCA0_size                               0x1
#define ODCA0_value_mask                         0x1
#define ODCA0_clear_mask                         0xFE

#define ODCA1                                    0x1
#define ODCA1_address                            0x28C
#define ODCA1_position                           0x1
#define ODCA1_size                               0x1
#define ODCA1_value_mask                         0x2
#define ODCA1_clear_mask                         0xFD

#define ODCA2                                    0x2
#define ODCA2_address                            0x28C
#define ODCA2_position                           0x2
#define ODCA2_size                               0x1
#define ODCA2_value_mask                         0x4
#define ODCA2_clear_mask                         0xFB

#define ODCA4                                    0x4
#define ODCA4_address                            0x28C
#define ODCA4_position                           0x4
#define ODCA4_size                               0x1
#define ODCA4_value_mask                         0x10
#define ODCA4_clear_mask                         0xEF

#define ODCA5                                    0x5
#define ODCA5_address                            0x28C
#define ODCA5_position                           0x5
#define ODCA5_size                               0x1
#define ODCA5_value_mask                         0x20
#define ODCA5_clear_mask                         0xDF


/*------------------------------------------------------#
| ODCONC                                          0x28E |
#-------------------------------------------------------#
| - | - | ODCC5 | ODCC4 | ODCC3 | ODCC2 | ODCC1 | ODCC0 |
#-------------------------------------------------------#
| 7 | 6 | 5     | 4     | 3     | 2     | 1     | 0     |
#------------------------------------------------------*/

#define ODCONC                                   0x0
#define ODCONC_address                           0x28E
#define ODCONC_position                          0x0
#define ODCONC_size                              0x8
#define ODCONC_value_mask                        0xFF
#define ODCONC_clear_mask                        0x0

#define ODCC0                                    0x0
#define ODCC0_address                            0x28E
#define ODCC0_position                           0x0
#define ODCC0_size                               0x1
#define ODCC0_value_mask                         0x1
#define ODCC0_clear_mask                         0xFE

#define ODCC1                                    0x1
#define ODCC1_address                            0x28E
#define ODCC1_position                           0x1
#define ODCC1_size                               0x1
#define ODCC1_value_mask                         0x2
#define ODCC1_clear_mask                         0xFD

#define ODCC2                                    0x2
#define ODCC2_address                            0x28E
#define ODCC2_position                           0x2
#define ODCC2_size                               0x1
#define ODCC2_value_mask                         0x4
#define ODCC2_clear_mask                         0xFB

#define ODCC3                                    0x3
#define ODCC3_address                            0x28E
#define ODCC3_position                           0x3
#define ODCC3_size                               0x1
#define ODCC3_value_mask                         0x8
#define ODCC3_clear_mask                         0xF7

#define ODCC4                                    0x4
#define ODCC4_address                            0x28E
#define ODCC4_position                           0x4
#define ODCC4_size                               0x1
#define ODCC4_value_mask                         0x10
#define ODCC4_clear_mask                         0xEF

#define ODCC5                                    0x5
#define ODCC5_address                            0x28E
#define ODCC5_position                           0x5
#define ODCC5_size                               0x1
#define ODCC5_value_mask                         0x20
#define ODCC5_clear_mask                         0xDF


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


/*-------------------------------------------------------------------------------#
| CCP1CON                                                                  0x293 |
#--------------------------------------------------------------------------------#
| CCP1EN | - | CCP1OUT | CCP1FMT | CCP1MODE3 | CCP1MODE2 | CCP1MODE1 | CCP1MODE0 |
#--------------------------------------------------------------------------------#
| 7      | 6 | 5       | 4       | 3         | 2         | 1         | 0         |
#-------------------------------------------------------------------------------*/

#define CCP1CON                                  0x0
#define CCP1CON_address                          0x293
#define CCP1CON_position                         0x0
#define CCP1CON_size                             0x8
#define CCP1CON_value_mask                       0xFF
#define CCP1CON_clear_mask                       0x0

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

#define CCP1MODE2                                0x2
#define CCP1MODE2_address                        0x293
#define CCP1MODE2_position                       0x2
#define CCP1MODE2_size                           0x1
#define CCP1MODE2_value_mask                     0x4
#define CCP1MODE2_clear_mask                     0xFB

#define CCP1MODE3                                0x3
#define CCP1MODE3_address                        0x293
#define CCP1MODE3_position                       0x3
#define CCP1MODE3_size                           0x1
#define CCP1MODE3_value_mask                     0x8
#define CCP1MODE3_clear_mask                     0xF7

#define CCP1FMT                                  0x4
#define CCP1FMT_address                          0x293
#define CCP1FMT_position                         0x4
#define CCP1FMT_size                             0x1
#define CCP1FMT_value_mask                       0x10
#define CCP1FMT_clear_mask                       0xEF

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


/*----------------------------------------------------------#
| CCP1CAP                                             0x294 |
#-----------------------------------------------------------#
| - | - | - | - | CCP1CTS3 | CCP1CTS2 | CCP1CTS1 | CCP1CTS0 |
#-----------------------------------------------------------#
| 7 | 6 | 5 | 4 | 3        | 2        | 1        | 0        |
#----------------------------------------------------------*/

#define CCP1CAP                                  0x0
#define CCP1CAP_address                          0x294
#define CCP1CAP_position                         0x0
#define CCP1CAP_size                             0x8
#define CCP1CAP_value_mask                       0xFF
#define CCP1CAP_clear_mask                       0x0

#define CCP1CTS                                  0x0
#define CCP1CTS_address                          0x294
#define CCP1CTS_position                         0x0
#define CCP1CTS_size                             0x4
#define CCP1CTS_value_mask                       0xF
#define CCP1CTS_clear_mask                       0xF0

#define CCP1CTS0                                 0x0
#define CCP1CTS0_address                         0x294
#define CCP1CTS0_position                        0x0
#define CCP1CTS0_size                            0x1
#define CCP1CTS0_value_mask                      0x1
#define CCP1CTS0_clear_mask                      0xFE

#define CCP1CTS1                                 0x1
#define CCP1CTS1_address                         0x294
#define CCP1CTS1_position                        0x1
#define CCP1CTS1_size                            0x1
#define CCP1CTS1_value_mask                      0x2
#define CCP1CTS1_clear_mask                      0xFD

#define CCP1CTS2                                 0x2
#define CCP1CTS2_address                         0x294
#define CCP1CTS2_position                        0x2
#define CCP1CTS2_size                            0x1
#define CCP1CTS2_value_mask                      0x4
#define CCP1CTS2_clear_mask                      0xFB

#define CCP1CTS3                                 0x3
#define CCP1CTS3_address                         0x294
#define CCP1CTS3_position                        0x3
#define CCP1CTS3_size                            0x1
#define CCP1CTS3_value_mask                      0x8
#define CCP1CTS3_clear_mask                      0xF7


/*------------------------------#
| CCPR2L                  0x295 |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define CCPR2L                                   0x0
#define CCPR2L_address                           0x295
#define CCPR2L_position                          0x0
#define CCPR2L_size                              0x8
#define CCPR2L_value_mask                        0xFF
#define CCPR2L_clear_mask                        0x0


/*------------------------------#
| CCPR2H                  0x296 |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define CCPR2H                                   0x0
#define CCPR2H_address                           0x296
#define CCPR2H_position                          0x0
#define CCPR2H_size                              0x8
#define CCPR2H_value_mask                        0xFF
#define CCPR2H_clear_mask                        0x0


/*-------------------------------------------------------------------------------#
| CCP2CON                                                                  0x297 |
#--------------------------------------------------------------------------------#
| CCP2EN | - | CCP2OUT | CCP2FMT | CCP2MODE3 | CCP2MODE2 | CCP2MODE1 | CCP2MODE0 |
#--------------------------------------------------------------------------------#
| 7      | 6 | 5       | 4       | 3         | 2         | 1         | 0         |
#-------------------------------------------------------------------------------*/

#define CCP2CON                                  0x0
#define CCP2CON_address                          0x297
#define CCP2CON_position                         0x0
#define CCP2CON_size                             0x8
#define CCP2CON_value_mask                       0xFF
#define CCP2CON_clear_mask                       0x0

#define CCP2MODE                                 0x0
#define CCP2MODE_address                         0x297
#define CCP2MODE_position                        0x0
#define CCP2MODE_size                            0x4
#define CCP2MODE_value_mask                      0xF
#define CCP2MODE_clear_mask                      0xF0

#define CCP2MODE0                                0x0
#define CCP2MODE0_address                        0x297
#define CCP2MODE0_position                       0x0
#define CCP2MODE0_size                           0x1
#define CCP2MODE0_value_mask                     0x1
#define CCP2MODE0_clear_mask                     0xFE

#define CCP2MODE1                                0x1
#define CCP2MODE1_address                        0x297
#define CCP2MODE1_position                       0x1
#define CCP2MODE1_size                           0x1
#define CCP2MODE1_value_mask                     0x2
#define CCP2MODE1_clear_mask                     0xFD

#define CCP2MODE2                                0x2
#define CCP2MODE2_address                        0x297
#define CCP2MODE2_position                       0x2
#define CCP2MODE2_size                           0x1
#define CCP2MODE2_value_mask                     0x4
#define CCP2MODE2_clear_mask                     0xFB

#define CCP2MODE3                                0x3
#define CCP2MODE3_address                        0x297
#define CCP2MODE3_position                       0x3
#define CCP2MODE3_size                           0x1
#define CCP2MODE3_value_mask                     0x8
#define CCP2MODE3_clear_mask                     0xF7

#define CCP2FMT                                  0x4
#define CCP2FMT_address                          0x297
#define CCP2FMT_position                         0x4
#define CCP2FMT_size                             0x1
#define CCP2FMT_value_mask                       0x10
#define CCP2FMT_clear_mask                       0xEF

#define CCP2OUT                                  0x5
#define CCP2OUT_address                          0x297
#define CCP2OUT_position                         0x5
#define CCP2OUT_size                             0x1
#define CCP2OUT_value_mask                       0x20
#define CCP2OUT_clear_mask                       0xDF

#define CCP2EN                                   0x7
#define CCP2EN_address                           0x297
#define CCP2EN_position                          0x7
#define CCP2EN_size                              0x1
#define CCP2EN_value_mask                        0x80
#define CCP2EN_clear_mask                        0x7F


/*----------------------------------------------------------#
| CCP2CAP                                             0x298 |
#-----------------------------------------------------------#
| - | - | - | - | CCP2CTS3 | CCP2CTS2 | CCP2CTS1 | CCP2CTS0 |
#-----------------------------------------------------------#
| 7 | 6 | 5 | 4 | 3        | 2        | 1        | 0        |
#----------------------------------------------------------*/

#define CCP2CAP                                  0x0
#define CCP2CAP_address                          0x298
#define CCP2CAP_position                         0x0
#define CCP2CAP_size                             0x8
#define CCP2CAP_value_mask                       0xFF
#define CCP2CAP_clear_mask                       0x0

#define CCP2CTS                                  0x0
#define CCP2CTS_address                          0x298
#define CCP2CTS_position                         0x0
#define CCP2CTS_size                             0x4
#define CCP2CTS_value_mask                       0xF
#define CCP2CTS_clear_mask                       0xF0

#define CCP2CTS0                                 0x0
#define CCP2CTS0_address                         0x298
#define CCP2CTS0_position                        0x0
#define CCP2CTS0_size                            0x1
#define CCP2CTS0_value_mask                      0x1
#define CCP2CTS0_clear_mask                      0xFE

#define CCP2CTS1                                 0x1
#define CCP2CTS1_address                         0x298
#define CCP2CTS1_position                        0x1
#define CCP2CTS1_size                            0x1
#define CCP2CTS1_value_mask                      0x2
#define CCP2CTS1_clear_mask                      0xFD

#define CCP2CTS2                                 0x2
#define CCP2CTS2_address                         0x298
#define CCP2CTS2_position                        0x2
#define CCP2CTS2_size                            0x1
#define CCP2CTS2_value_mask                      0x4
#define CCP2CTS2_clear_mask                      0xFB

#define CCP2CTS3                                 0x3
#define CCP2CTS3_address                         0x298
#define CCP2CTS3_position                        0x3
#define CCP2CTS3_size                            0x1
#define CCP2CTS3_value_mask                      0x8
#define CCP2CTS3_clear_mask                      0xF7


/*------------------------------------------------------------------------------#
| CCPTMRS                                                                 0x29F |
#-------------------------------------------------------------------------------#
| C4TSEL1 | C4TSEL0 | C3TSEL1 | C3TSEL0 | C2TSEL1 | C2TSEL0 | C1TSEL1 | C1TSEL0 |
#-------------------------------------------------------------------------------#
| 7       | 6       | 5       | 4       | 3       | 2       | 1       | 0       |
#------------------------------------------------------------------------------*/

#define CCPTMRS                                  0x0
#define CCPTMRS_address                          0x29F
#define CCPTMRS_position                         0x0
#define CCPTMRS_size                             0x8
#define CCPTMRS_value_mask                       0xFF
#define CCPTMRS_clear_mask                       0x0

#define C1TSEL0                                  0x0
#define C1TSEL0_address                          0x29F
#define C1TSEL0_position                         0x0
#define C1TSEL0_size                             0x1
#define C1TSEL0_value_mask                       0x1
#define C1TSEL0_clear_mask                       0xFE

#define C1TSEL                                   0x0
#define C1TSEL_address                           0x29F
#define C1TSEL_position                          0x0
#define C1TSEL_size                              0x2
#define C1TSEL_value_mask                        0x3
#define C1TSEL_clear_mask                        0xFC

#define C1TSEL1                                  0x1
#define C1TSEL1_address                          0x29F
#define C1TSEL1_position                         0x1
#define C1TSEL1_size                             0x1
#define C1TSEL1_value_mask                       0x2
#define C1TSEL1_clear_mask                       0xFD

#define C2TSEL0                                  0x2
#define C2TSEL0_address                          0x29F
#define C2TSEL0_position                         0x2
#define C2TSEL0_size                             0x1
#define C2TSEL0_value_mask                       0x4
#define C2TSEL0_clear_mask                       0xFB

#define C2TSEL                                   0x2
#define C2TSEL_address                           0x29F
#define C2TSEL_position                          0x2
#define C2TSEL_size                              0x2
#define C2TSEL_value_mask                        0xC
#define C2TSEL_clear_mask                        0xF3

#define C2TSEL1                                  0x3
#define C2TSEL1_address                          0x29F
#define C2TSEL1_position                         0x3
#define C2TSEL1_size                             0x1
#define C2TSEL1_value_mask                       0x8
#define C2TSEL1_clear_mask                       0xF7

#define C3TSEL0                                  0x4
#define C3TSEL0_address                          0x29F
#define C3TSEL0_position                         0x4
#define C3TSEL0_size                             0x1
#define C3TSEL0_value_mask                       0x10
#define C3TSEL0_clear_mask                       0xEF

#define C3TSEL                                   0x4
#define C3TSEL_address                           0x29F
#define C3TSEL_position                          0x4
#define C3TSEL_size                              0x2
#define C3TSEL_value_mask                        0x30
#define C3TSEL_clear_mask                        0xCF

#define C3TSEL1                                  0x5
#define C3TSEL1_address                          0x29F
#define C3TSEL1_position                         0x5
#define C3TSEL1_size                             0x1
#define C3TSEL1_value_mask                       0x20
#define C3TSEL1_clear_mask                       0xDF

#define C4TSEL                                   0x6
#define C4TSEL_address                           0x29F
#define C4TSEL_position                          0x6
#define C4TSEL_size                              0x2
#define C4TSEL_value_mask                        0xC0
#define C4TSEL_clear_mask                        0x3F

#define C4TSEL0                                  0x6
#define C4TSEL0_address                          0x29F
#define C4TSEL0_position                         0x6
#define C4TSEL0_size                             0x1
#define C4TSEL0_value_mask                       0x40
#define C4TSEL0_clear_mask                       0xBF

#define C4TSEL1                                  0x7
#define C4TSEL1_address                          0x29F
#define C4TSEL1_position                         0x7
#define C4TSEL1_size                             0x1
#define C4TSEL1_value_mask                       0x80
#define C4TSEL1_clear_mask                       0x7F


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


/*-------------------------------------------------------------------------------#
| CCP3CON                                                                  0x313 |
#--------------------------------------------------------------------------------#
| CCP3EN | - | CCP3OUT | CCP3FMT | CCP3MODE3 | CCP3MODE2 | CCP3MODE1 | CCP3MODE0 |
#--------------------------------------------------------------------------------#
| 7      | 6 | 5       | 4       | 3         | 2         | 1         | 0         |
#-------------------------------------------------------------------------------*/

#define CCP3CON                                  0x0
#define CCP3CON_address                          0x313
#define CCP3CON_position                         0x0
#define CCP3CON_size                             0x8
#define CCP3CON_value_mask                       0xFF
#define CCP3CON_clear_mask                       0x0

#define CCP3MODE0                                0x0
#define CCP3MODE0_address                        0x313
#define CCP3MODE0_position                       0x0
#define CCP3MODE0_size                           0x1
#define CCP3MODE0_value_mask                     0x1
#define CCP3MODE0_clear_mask                     0xFE

#define CCP3MODE                                 0x0
#define CCP3MODE_address                         0x313
#define CCP3MODE_position                        0x0
#define CCP3MODE_size                            0x4
#define CCP3MODE_value_mask                      0xF
#define CCP3MODE_clear_mask                      0xF0

#define CCP3MODE1                                0x1
#define CCP3MODE1_address                        0x313
#define CCP3MODE1_position                       0x1
#define CCP3MODE1_size                           0x1
#define CCP3MODE1_value_mask                     0x2
#define CCP3MODE1_clear_mask                     0xFD

#define CCP3MODE2                                0x2
#define CCP3MODE2_address                        0x313
#define CCP3MODE2_position                       0x2
#define CCP3MODE2_size                           0x1
#define CCP3MODE2_value_mask                     0x4
#define CCP3MODE2_clear_mask                     0xFB

#define CCP3MODE3                                0x3
#define CCP3MODE3_address                        0x313
#define CCP3MODE3_position                       0x3
#define CCP3MODE3_size                           0x1
#define CCP3MODE3_value_mask                     0x8
#define CCP3MODE3_clear_mask                     0xF7

#define CCP3FMT                                  0x4
#define CCP3FMT_address                          0x313
#define CCP3FMT_position                         0x4
#define CCP3FMT_size                             0x1
#define CCP3FMT_value_mask                       0x10
#define CCP3FMT_clear_mask                       0xEF

#define CCP3OUT                                  0x5
#define CCP3OUT_address                          0x313
#define CCP3OUT_position                         0x5
#define CCP3OUT_size                             0x1
#define CCP3OUT_value_mask                       0x20
#define CCP3OUT_clear_mask                       0xDF

#define CCP3EN                                   0x7
#define CCP3EN_address                           0x313
#define CCP3EN_position                          0x7
#define CCP3EN_size                              0x1
#define CCP3EN_value_mask                        0x80
#define CCP3EN_clear_mask                        0x7F


/*----------------------------------------------------------#
| CCP3CAP                                             0x314 |
#-----------------------------------------------------------#
| - | - | - | - | CCP3CTS3 | CCP3CTS2 | CCP3CTS1 | CCP3CTS0 |
#-----------------------------------------------------------#
| 7 | 6 | 5 | 4 | 3        | 2        | 1        | 0        |
#----------------------------------------------------------*/

#define CCP3CAP                                  0x0
#define CCP3CAP_address                          0x314
#define CCP3CAP_position                         0x0
#define CCP3CAP_size                             0x8
#define CCP3CAP_value_mask                       0xFF
#define CCP3CAP_clear_mask                       0x0

#define CCP3CTS                                  0x0
#define CCP3CTS_address                          0x314
#define CCP3CTS_position                         0x0
#define CCP3CTS_size                             0x4
#define CCP3CTS_value_mask                       0xF
#define CCP3CTS_clear_mask                       0xF0

#define CCP3CTS0                                 0x0
#define CCP3CTS0_address                         0x314
#define CCP3CTS0_position                        0x0
#define CCP3CTS0_size                            0x1
#define CCP3CTS0_value_mask                      0x1
#define CCP3CTS0_clear_mask                      0xFE

#define CCP3CTS1                                 0x1
#define CCP3CTS1_address                         0x314
#define CCP3CTS1_position                        0x1
#define CCP3CTS1_size                            0x1
#define CCP3CTS1_value_mask                      0x2
#define CCP3CTS1_clear_mask                      0xFD

#define CCP3CTS2                                 0x2
#define CCP3CTS2_address                         0x314
#define CCP3CTS2_position                        0x2
#define CCP3CTS2_size                            0x1
#define CCP3CTS2_value_mask                      0x4
#define CCP3CTS2_clear_mask                      0xFB

#define CCP3CTS3                                 0x3
#define CCP3CTS3_address                         0x314
#define CCP3CTS3_position                        0x3
#define CCP3CTS3_size                            0x1
#define CCP3CTS3_value_mask                      0x8
#define CCP3CTS3_clear_mask                      0xF7


/*------------------------------#
| CCPR4L                  0x315 |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define CCPR4L                                   0x0
#define CCPR4L_address                           0x315
#define CCPR4L_position                          0x0
#define CCPR4L_size                              0x8
#define CCPR4L_value_mask                        0xFF
#define CCPR4L_clear_mask                        0x0


/*------------------------------#
| CCPR4H                  0x316 |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define CCPR4H                                   0x0
#define CCPR4H_address                           0x316
#define CCPR4H_position                          0x0
#define CCPR4H_size                              0x8
#define CCPR4H_value_mask                        0xFF
#define CCPR4H_clear_mask                        0x0


/*-------------------------------------------------------------------------------#
| CCP4CON                                                                  0x317 |
#--------------------------------------------------------------------------------#
| CCP4EN | - | CCP4OUT | CCP4FMT | CCP4MODE3 | CCP4MODE2 | CCP4MODE1 | CCP4MODE0 |
#--------------------------------------------------------------------------------#
| 7      | 6 | 5       | 4       | 3         | 2         | 1         | 0         |
#-------------------------------------------------------------------------------*/

#define CCP4CON                                  0x0
#define CCP4CON_address                          0x317
#define CCP4CON_position                         0x0
#define CCP4CON_size                             0x8
#define CCP4CON_value_mask                       0xFF
#define CCP4CON_clear_mask                       0x0

#define CCP4MODE                                 0x0
#define CCP4MODE_address                         0x317
#define CCP4MODE_position                        0x0
#define CCP4MODE_size                            0x4
#define CCP4MODE_value_mask                      0xF
#define CCP4MODE_clear_mask                      0xF0

#define CCP4MODE0                                0x0
#define CCP4MODE0_address                        0x317
#define CCP4MODE0_position                       0x0
#define CCP4MODE0_size                           0x1
#define CCP4MODE0_value_mask                     0x1
#define CCP4MODE0_clear_mask                     0xFE

#define CCP4MODE1                                0x1
#define CCP4MODE1_address                        0x317
#define CCP4MODE1_position                       0x1
#define CCP4MODE1_size                           0x1
#define CCP4MODE1_value_mask                     0x2
#define CCP4MODE1_clear_mask                     0xFD

#define CCP4MODE2                                0x2
#define CCP4MODE2_address                        0x317
#define CCP4MODE2_position                       0x2
#define CCP4MODE2_size                           0x1
#define CCP4MODE2_value_mask                     0x4
#define CCP4MODE2_clear_mask                     0xFB

#define CCP4MODE3                                0x3
#define CCP4MODE3_address                        0x317
#define CCP4MODE3_position                       0x3
#define CCP4MODE3_size                           0x1
#define CCP4MODE3_value_mask                     0x8
#define CCP4MODE3_clear_mask                     0xF7

#define CCP4FMT                                  0x4
#define CCP4FMT_address                          0x317
#define CCP4FMT_position                         0x4
#define CCP4FMT_size                             0x1
#define CCP4FMT_value_mask                       0x10
#define CCP4FMT_clear_mask                       0xEF

#define CCP4OUT                                  0x5
#define CCP4OUT_address                          0x317
#define CCP4OUT_position                         0x5
#define CCP4OUT_size                             0x1
#define CCP4OUT_value_mask                       0x20
#define CCP4OUT_clear_mask                       0xDF

#define CCP4EN                                   0x7
#define CCP4EN_address                           0x317
#define CCP4EN_position                          0x7
#define CCP4EN_size                              0x1
#define CCP4EN_value_mask                        0x80
#define CCP4EN_clear_mask                        0x7F


/*----------------------------------------------------------#
| CCP4CAP                                             0x318 |
#-----------------------------------------------------------#
| - | - | - | - | CCP4CTS3 | CCP4CTS2 | CCP4CTS1 | CCP4CTS0 |
#-----------------------------------------------------------#
| 7 | 6 | 5 | 4 | 3        | 2        | 1        | 0        |
#----------------------------------------------------------*/

#define CCP4CAP                                  0x0
#define CCP4CAP_address                          0x318
#define CCP4CAP_position                         0x0
#define CCP4CAP_size                             0x8
#define CCP4CAP_value_mask                       0xFF
#define CCP4CAP_clear_mask                       0x0

#define CCP4CTS                                  0x0
#define CCP4CTS_address                          0x318
#define CCP4CTS_position                         0x0
#define CCP4CTS_size                             0x4
#define CCP4CTS_value_mask                       0xF
#define CCP4CTS_clear_mask                       0xF0

#define CCP4CTS0                                 0x0
#define CCP4CTS0_address                         0x318
#define CCP4CTS0_position                        0x0
#define CCP4CTS0_size                            0x1
#define CCP4CTS0_value_mask                      0x1
#define CCP4CTS0_clear_mask                      0xFE

#define CCP4CTS1                                 0x1
#define CCP4CTS1_address                         0x318
#define CCP4CTS1_position                        0x1
#define CCP4CTS1_size                            0x1
#define CCP4CTS1_value_mask                      0x2
#define CCP4CTS1_clear_mask                      0xFD

#define CCP4CTS2                                 0x2
#define CCP4CTS2_address                         0x318
#define CCP4CTS2_position                        0x2
#define CCP4CTS2_size                            0x1
#define CCP4CTS2_value_mask                      0x4
#define CCP4CTS2_clear_mask                      0xFB

#define CCP4CTS3                                 0x3
#define CCP4CTS3_address                         0x318
#define CCP4CTS3_position                        0x3
#define CCP4CTS3_size                            0x1
#define CCP4CTS3_value_mask                      0x8
#define CCP4CTS3_clear_mask                      0xF7


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


/*--------------------------------------------------------------------#
| CLKRCON                                                       0x39A |
#---------------------------------------------------------------------#
| CLKREN | - | - | CLKRDC1 | CLKRDC0 | CLKRDIV2 | CLKRDIV1 | CLKRDIV0 |
#---------------------------------------------------------------------#
| 7      | 6 | 5 | 4       | 3       | 2        | 1        | 0        |
#--------------------------------------------------------------------*/

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

#define CLKRDC                                   0x3
#define CLKRDC_address                           0x39A
#define CLKRDC_position                          0x3
#define CLKRDC_size                              0x2
#define CLKRDC_value_mask                        0x18
#define CLKRDC_clear_mask                        0xE7

#define CLKRDC0                                  0x3
#define CLKRDC0_address                          0x39A
#define CLKRDC0_position                         0x3
#define CLKRDC0_size                             0x1
#define CLKRDC0_value_mask                       0x8
#define CLKRDC0_clear_mask                       0xF7

#define CLKRDC1                                  0x4
#define CLKRDC1_address                          0x39A
#define CLKRDC1_position                         0x4
#define CLKRDC1_size                             0x1
#define CLKRDC1_value_mask                       0x10
#define CLKRDC1_clear_mask                       0xEF

#define CLKREN                                   0x7
#define CLKREN_address                           0x39A
#define CLKREN_position                          0x7
#define CLKREN_size                              0x1
#define CLKREN_value_mask                        0x80
#define CLKREN_clear_mask                        0x7F


/*----------------------------------------------#
| MDCON                                   0x39C |
#-----------------------------------------------#
| MDEN | - | - | MDOPOL | MDOUT | - | - | MDBIT |
#-----------------------------------------------#
| 7    | 6 | 5 | 4      | 3     | 2 | 1 | 0     |
#----------------------------------------------*/

#define MDCON                                    0x0
#define MDCON_address                            0x39C
#define MDCON_position                           0x0
#define MDCON_size                               0x8
#define MDCON_value_mask                         0xFF
#define MDCON_clear_mask                         0x0

#define MDBIT                                    0x0
#define MDBIT_address                            0x39C
#define MDBIT_position                           0x0
#define MDBIT_size                               0x1
#define MDBIT_value_mask                         0x1
#define MDBIT_clear_mask                         0xFE

#define MDOUT                                    0x3
#define MDOUT_address                            0x39C
#define MDOUT_position                           0x3
#define MDOUT_size                               0x1
#define MDOUT_value_mask                         0x8
#define MDOUT_clear_mask                         0xF7

#define MDOPOL                                   0x4
#define MDOPOL_address                           0x39C
#define MDOPOL_position                          0x4
#define MDOPOL_size                              0x1
#define MDOPOL_value_mask                        0x10
#define MDOPOL_clear_mask                        0xEF

#define MDEN                                     0x7
#define MDEN_address                             0x39C
#define MDEN_position                            0x7
#define MDEN_size                                0x1
#define MDEN_value_mask                          0x80
#define MDEN_clear_mask                          0x7F


/*----------------------------------------------#
| MDSRC                                   0x39D |
#-----------------------------------------------#
| - | - | - | - | MDMS3 | MDMS2 | MDMS1 | MDMS0 |
#-----------------------------------------------#
| 7 | 6 | 5 | 4 | 3     | 2     | 1     | 0     |
#----------------------------------------------*/

#define MDSRC                                    0x0
#define MDSRC_address                            0x39D
#define MDSRC_position                           0x0
#define MDSRC_size                               0x8
#define MDSRC_value_mask                         0xFF
#define MDSRC_clear_mask                         0x0

#define MDMS0                                    0x0
#define MDMS0_address                            0x39D
#define MDMS0_position                           0x0
#define MDMS0_size                               0x1
#define MDMS0_value_mask                         0x1
#define MDMS0_clear_mask                         0xFE

#define MDMS                                     0x0
#define MDMS_address                             0x39D
#define MDMS_position                            0x0
#define MDMS_size                                0x4
#define MDMS_value_mask                          0xF
#define MDMS_clear_mask                          0xF0

#define MDMS1                                    0x1
#define MDMS1_address                            0x39D
#define MDMS1_position                           0x1
#define MDMS1_size                               0x1
#define MDMS1_value_mask                         0x2
#define MDMS1_clear_mask                         0xFD

#define MDMS2                                    0x2
#define MDMS2_address                            0x39D
#define MDMS2_position                           0x2
#define MDMS2_size                               0x1
#define MDMS2_value_mask                         0x4
#define MDMS2_clear_mask                         0xFB

#define MDMS3                                    0x3
#define MDMS3_address                            0x39D
#define MDMS3_position                           0x3
#define MDMS3_size                               0x1
#define MDMS3_value_mask                         0x8
#define MDMS3_clear_mask                         0xF7


/*-----------------------------------------------------------#
| MDCARH                                               0x39E |
#------------------------------------------------------------#
| - | MDCHPOL | MDCHSYNC | - | MDCH3 | MDCH2 | MDCH1 | MDCH0 |
#------------------------------------------------------------#
| 7 | 6       | 5        | 4 | 3     | 2     | 1     | 0     |
#-----------------------------------------------------------*/

#define MDCARH                                   0x0
#define MDCARH_address                           0x39E
#define MDCARH_position                          0x0
#define MDCARH_size                              0x8
#define MDCARH_value_mask                        0xFF
#define MDCARH_clear_mask                        0x0

#define MDCH                                     0x0
#define MDCH_address                             0x39E
#define MDCH_position                            0x0
#define MDCH_size                                0x4
#define MDCH_value_mask                          0xF
#define MDCH_clear_mask                          0xF0

#define MDCH0                                    0x0
#define MDCH0_address                            0x39E
#define MDCH0_position                           0x0
#define MDCH0_size                               0x1
#define MDCH0_value_mask                         0x1
#define MDCH0_clear_mask                         0xFE

#define MDCH1                                    0x1
#define MDCH1_address                            0x39E
#define MDCH1_position                           0x1
#define MDCH1_size                               0x1
#define MDCH1_value_mask                         0x2
#define MDCH1_clear_mask                         0xFD

#define MDCH2                                    0x2
#define MDCH2_address                            0x39E
#define MDCH2_position                           0x2
#define MDCH2_size                               0x1
#define MDCH2_value_mask                         0x4
#define MDCH2_clear_mask                         0xFB

#define MDCH3                                    0x3
#define MDCH3_address                            0x39E
#define MDCH3_position                           0x3
#define MDCH3_size                               0x1
#define MDCH3_value_mask                         0x8
#define MDCH3_clear_mask                         0xF7

#define MDCHSYNC                                 0x5
#define MDCHSYNC_address                         0x39E
#define MDCHSYNC_position                        0x5
#define MDCHSYNC_size                            0x1
#define MDCHSYNC_value_mask                      0x20
#define MDCHSYNC_clear_mask                      0xDF

#define MDCHPOL                                  0x6
#define MDCHPOL_address                          0x39E
#define MDCHPOL_position                         0x6
#define MDCHPOL_size                             0x1
#define MDCHPOL_value_mask                       0x40
#define MDCHPOL_clear_mask                       0xBF


/*-----------------------------------------------------------#
| MDCARL                                               0x39F |
#------------------------------------------------------------#
| - | MDCLPOL | MDCLSYNC | - | MDCL3 | MDCL2 | MDCL1 | MDCL0 |
#------------------------------------------------------------#
| 7 | 6       | 5        | 4 | 3     | 2     | 1     | 0     |
#-----------------------------------------------------------*/

#define MDCARL                                   0x0
#define MDCARL_address                           0x39F
#define MDCARL_position                          0x0
#define MDCARL_size                              0x8
#define MDCARL_value_mask                        0xFF
#define MDCARL_clear_mask                        0x0

#define MDCL0                                    0x0
#define MDCL0_address                            0x39F
#define MDCL0_position                           0x0
#define MDCL0_size                               0x1
#define MDCL0_value_mask                         0x1
#define MDCL0_clear_mask                         0xFE

#define MDCL                                     0x0
#define MDCL_address                             0x39F
#define MDCL_position                            0x0
#define MDCL_size                                0x4
#define MDCL_value_mask                          0xF
#define MDCL_clear_mask                          0xF0

#define MDCL1                                    0x1
#define MDCL1_address                            0x39F
#define MDCL1_position                           0x1
#define MDCL1_size                               0x1
#define MDCL1_value_mask                         0x2
#define MDCL1_clear_mask                         0xFD

#define MDCL2                                    0x2
#define MDCL2_address                            0x39F
#define MDCL2_position                           0x2
#define MDCL2_size                               0x1
#define MDCL2_value_mask                         0x4
#define MDCL2_clear_mask                         0xFB

#define MDCL3                                    0x3
#define MDCL3_address                            0x39F
#define MDCL3_position                           0x3
#define MDCL3_size                               0x1
#define MDCL3_value_mask                         0x8
#define MDCL3_clear_mask                         0xF7

#define MDCLSYNC                                 0x5
#define MDCLSYNC_address                         0x39F
#define MDCLSYNC_position                        0x5
#define MDCLSYNC_size                            0x1
#define MDCLSYNC_value_mask                      0x20
#define MDCLSYNC_clear_mask                      0xDF

#define MDCLPOL                                  0x6
#define MDCLPOL_address                          0x39F
#define MDCLPOL_position                         0x6
#define MDCLPOL_size                             0x1
#define MDCLPOL_value_mask                       0x40
#define MDCLPOL_clear_mask                       0xBF


/*-------------------------------------------------------#
| CCDNA                                            0x40C |
#--------------------------------------------------------#
| - | - | CCDNA5 | CCDNA4 | - | CCDNA2 | CCDNA1 | CCDNA0 |
#--------------------------------------------------------#
| 7 | 6 | 5      | 4      | 3 | 2      | 1      | 0      |
#-------------------------------------------------------*/

#define CCDNA                                    0x0
#define CCDNA_address                            0x40C
#define CCDNA_position                           0x0
#define CCDNA_size                               0x8
#define CCDNA_value_mask                         0xFF
#define CCDNA_clear_mask                         0x0

#define CCDNA0                                   0x0
#define CCDNA0_address                           0x40C
#define CCDNA0_position                          0x0
#define CCDNA0_size                              0x1
#define CCDNA0_value_mask                        0x1
#define CCDNA0_clear_mask                        0xFE

#define CCDNA1                                   0x1
#define CCDNA1_address                           0x40C
#define CCDNA1_position                          0x1
#define CCDNA1_size                              0x1
#define CCDNA1_value_mask                        0x2
#define CCDNA1_clear_mask                        0xFD

#define CCDNA2                                   0x2
#define CCDNA2_address                           0x40C
#define CCDNA2_position                          0x2
#define CCDNA2_size                              0x1
#define CCDNA2_value_mask                        0x4
#define CCDNA2_clear_mask                        0xFB

#define CCDNA4                                   0x4
#define CCDNA4_address                           0x40C
#define CCDNA4_position                          0x4
#define CCDNA4_size                              0x1
#define CCDNA4_value_mask                        0x10
#define CCDNA4_clear_mask                        0xEF

#define CCDNA5                                   0x5
#define CCDNA5_address                           0x40C
#define CCDNA5_position                          0x5
#define CCDNA5_size                              0x1
#define CCDNA5_value_mask                        0x20
#define CCDNA5_clear_mask                        0xDF


/*------------------------------------------------------------#
| CCDNC                                                 0x40E |
#-------------------------------------------------------------#
| - | - | CCDNC5 | CCDNC4 | CCDNC3 | CCDNC2 | CCDNC1 | CCDNC0 |
#-------------------------------------------------------------#
| 7 | 6 | 5      | 4      | 3      | 2      | 1      | 0      |
#------------------------------------------------------------*/

#define CCDNC                                    0x0
#define CCDNC_address                            0x40E
#define CCDNC_position                           0x0
#define CCDNC_size                               0x8
#define CCDNC_value_mask                         0xFF
#define CCDNC_clear_mask                         0x0

#define CCDNC0                                   0x0
#define CCDNC0_address                           0x40E
#define CCDNC0_position                          0x0
#define CCDNC0_size                              0x1
#define CCDNC0_value_mask                        0x1
#define CCDNC0_clear_mask                        0xFE

#define CCDNC1                                   0x1
#define CCDNC1_address                           0x40E
#define CCDNC1_position                          0x1
#define CCDNC1_size                              0x1
#define CCDNC1_value_mask                        0x2
#define CCDNC1_clear_mask                        0xFD

#define CCDNC2                                   0x2
#define CCDNC2_address                           0x40E
#define CCDNC2_position                          0x2
#define CCDNC2_size                              0x1
#define CCDNC2_value_mask                        0x4
#define CCDNC2_clear_mask                        0xFB

#define CCDNC3                                   0x3
#define CCDNC3_address                           0x40E
#define CCDNC3_position                          0x3
#define CCDNC3_size                              0x1
#define CCDNC3_value_mask                        0x8
#define CCDNC3_clear_mask                        0xF7

#define CCDNC4                                   0x4
#define CCDNC4_address                           0x40E
#define CCDNC4_position                          0x4
#define CCDNC4_size                              0x1
#define CCDNC4_value_mask                        0x10
#define CCDNC4_clear_mask                        0xEF

#define CCDNC5                                   0x5
#define CCDNC5_address                           0x40E
#define CCDNC5_position                          0x5
#define CCDNC5_size                              0x1
#define CCDNC5_value_mask                        0x20
#define CCDNC5_clear_mask                        0xDF


/*------------------------------#
| TMR3L                   0x411 |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define TMR3L                                    0x0
#define TMR3L_address                            0x411
#define TMR3L_position                           0x0
#define TMR3L_size                               0x8
#define TMR3L_value_mask                         0xFF
#define TMR3L_clear_mask                         0x0


/*------------------------------#
| TMR3H                   0x412 |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define TMR3H                                    0x0
#define TMR3H_address                            0x412
#define TMR3H_position                           0x0
#define TMR3H_size                               0x8
#define TMR3H_value_mask                         0xFF
#define TMR3H_clear_mask                         0x0


/*---------------------------------------------------------------------#
| T3CON                                                          0x413 |
#----------------------------------------------------------------------#
| TMR3CS1 | TMR3CS0 | T3CKPS1 | T3CKPS0 | T3SOSC | T3SYNC | - | TMR3ON |
#----------------------------------------------------------------------#
| 7       | 6       | 5       | 4       | 3      | 2      | 1 | 0      |
#---------------------------------------------------------------------*/

#define T3CON                                    0x0
#define T3CON_address                            0x413
#define T3CON_position                           0x0
#define T3CON_size                               0x8
#define T3CON_value_mask                         0xFF
#define T3CON_clear_mask                         0x0

#define TMR3ON                                   0x0
#define TMR3ON_address                           0x413
#define TMR3ON_position                          0x0
#define TMR3ON_size                              0x1
#define TMR3ON_value_mask                        0x1
#define TMR3ON_clear_mask                        0xFE

#define T3SYNC                                   0x2
#define T3SYNC_address                           0x413
#define T3SYNC_position                          0x2
#define T3SYNC_size                              0x1
#define T3SYNC_value_mask                        0x4
#define T3SYNC_clear_mask                        0xFB

#define T3SOSC                                   0x3
#define T3SOSC_address                           0x413
#define T3SOSC_position                          0x3
#define T3SOSC_size                              0x1
#define T3SOSC_value_mask                        0x8
#define T3SOSC_clear_mask                        0xF7

#define T3CKPS                                   0x4
#define T3CKPS_address                           0x413
#define T3CKPS_position                          0x4
#define T3CKPS_size                              0x2
#define T3CKPS_value_mask                        0x30
#define T3CKPS_clear_mask                        0xCF

#define T3CKPS0                                  0x4
#define T3CKPS0_address                          0x413
#define T3CKPS0_position                         0x4
#define T3CKPS0_size                             0x1
#define T3CKPS0_value_mask                       0x10
#define T3CKPS0_clear_mask                       0xEF

#define T3CKPS1                                  0x5
#define T3CKPS1_address                          0x413
#define T3CKPS1_position                         0x5
#define T3CKPS1_size                             0x1
#define T3CKPS1_value_mask                       0x20
#define T3CKPS1_clear_mask                       0xDF

#define TMR3CS0                                  0x6
#define TMR3CS0_address                          0x413
#define TMR3CS0_position                         0x6
#define TMR3CS0_size                             0x1
#define TMR3CS0_value_mask                       0x40
#define TMR3CS0_clear_mask                       0xBF

#define TMR3CS                                   0x6
#define TMR3CS_address                           0x413
#define TMR3CS_position                          0x6
#define TMR3CS_size                              0x2
#define TMR3CS_value_mask                        0xC0
#define TMR3CS_clear_mask                        0x3F

#define TMR3CS1                                  0x7
#define TMR3CS1_address                          0x413
#define TMR3CS1_position                         0x7
#define TMR3CS1_size                             0x1
#define TMR3CS1_value_mask                       0x80
#define TMR3CS1_clear_mask                       0x7F


/*--------------------------------------------------------------------------#
| T3GCON                                                              0x414 |
#---------------------------------------------------------------------------#
| TMR3GE | T3GPOL | T3GTM | T3GSPM | T3GGO_nDONE | T3GVAL | T3GSS1 | T3GSS0 |
#---------------------------------------------------------------------------#
| 7      | 6      | 5     | 4      | 3           | 2      | 1      | 0      |
#--------------------------------------------------------------------------*/

#define T3GCON                                   0x0
#define T3GCON_address                           0x414
#define T3GCON_position                          0x0
#define T3GCON_size                              0x8
#define T3GCON_value_mask                        0xFF
#define T3GCON_clear_mask                        0x0

#define T3GSS0                                   0x0
#define T3GSS0_address                           0x414
#define T3GSS0_position                          0x0
#define T3GSS0_size                              0x1
#define T3GSS0_value_mask                        0x1
#define T3GSS0_clear_mask                        0xFE

#define T3GSS                                    0x0
#define T3GSS_address                            0x414
#define T3GSS_position                           0x0
#define T3GSS_size                               0x2
#define T3GSS_value_mask                         0x3
#define T3GSS_clear_mask                         0xFC

#define T3GSS1                                   0x1
#define T3GSS1_address                           0x414
#define T3GSS1_position                          0x1
#define T3GSS1_size                              0x1
#define T3GSS1_value_mask                        0x2
#define T3GSS1_clear_mask                        0xFD

#define T3GVAL                                   0x2
#define T3GVAL_address                           0x414
#define T3GVAL_position                          0x2
#define T3GVAL_size                              0x1
#define T3GVAL_value_mask                        0x4
#define T3GVAL_clear_mask                        0xFB

#define T3GGO_nDONE                              0x3
#define T3GGO_nDONE_address                      0x414
#define T3GGO_nDONE_position                     0x3
#define T3GGO_nDONE_size                         0x1
#define T3GGO_nDONE_value_mask                   0x8
#define T3GGO_nDONE_clear_mask                   0xF7

#define T3GSPM                                   0x4
#define T3GSPM_address                           0x414
#define T3GSPM_position                          0x4
#define T3GSPM_size                              0x1
#define T3GSPM_value_mask                        0x10
#define T3GSPM_clear_mask                        0xEF

#define T3GTM                                    0x5
#define T3GTM_address                            0x414
#define T3GTM_position                           0x5
#define T3GTM_size                               0x1
#define T3GTM_value_mask                         0x20
#define T3GTM_clear_mask                         0xDF

#define T3GPOL                                   0x6
#define T3GPOL_address                           0x414
#define T3GPOL_position                          0x6
#define T3GPOL_size                              0x1
#define T3GPOL_value_mask                        0x40
#define T3GPOL_clear_mask                        0xBF

#define TMR3GE                                   0x7
#define TMR3GE_address                           0x414
#define TMR3GE_position                          0x7
#define TMR3GE_size                              0x1
#define TMR3GE_value_mask                        0x80
#define TMR3GE_clear_mask                        0x7F


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
| TMR5L                   0x418 |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define TMR5L                                    0x0
#define TMR5L_address                            0x418
#define TMR5L_position                           0x0
#define TMR5L_size                               0x8
#define TMR5L_value_mask                         0xFF
#define TMR5L_clear_mask                         0x0


/*------------------------------#
| TMR5H                   0x419 |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define TMR5H                                    0x0
#define TMR5H_address                            0x419
#define TMR5H_position                           0x0
#define TMR5H_size                               0x8
#define TMR5H_value_mask                         0xFF
#define TMR5H_clear_mask                         0x0


/*---------------------------------------------------------------------#
| T5CON                                                          0x41A |
#----------------------------------------------------------------------#
| TMR5CS1 | TMR5CS0 | T5CKPS1 | T5CKPS0 | T5SOSC | T5SYNC | - | TMR5ON |
#----------------------------------------------------------------------#
| 7       | 6       | 5       | 4       | 3      | 2      | 1 | 0      |
#---------------------------------------------------------------------*/

#define T5CON                                    0x0
#define T5CON_address                            0x41A
#define T5CON_position                           0x0
#define T5CON_size                               0x8
#define T5CON_value_mask                         0xFF
#define T5CON_clear_mask                         0x0

#define TMR5ON                                   0x0
#define TMR5ON_address                           0x41A
#define TMR5ON_position                          0x0
#define TMR5ON_size                              0x1
#define TMR5ON_value_mask                        0x1
#define TMR5ON_clear_mask                        0xFE

#define T5SYNC                                   0x2
#define T5SYNC_address                           0x41A
#define T5SYNC_position                          0x2
#define T5SYNC_size                              0x1
#define T5SYNC_value_mask                        0x4
#define T5SYNC_clear_mask                        0xFB

#define T5SOSC                                   0x3
#define T5SOSC_address                           0x41A
#define T5SOSC_position                          0x3
#define T5SOSC_size                              0x1
#define T5SOSC_value_mask                        0x8
#define T5SOSC_clear_mask                        0xF7

#define T5CKPS                                   0x4
#define T5CKPS_address                           0x41A
#define T5CKPS_position                          0x4
#define T5CKPS_size                              0x2
#define T5CKPS_value_mask                        0x30
#define T5CKPS_clear_mask                        0xCF

#define T5CKPS0                                  0x4
#define T5CKPS0_address                          0x41A
#define T5CKPS0_position                         0x4
#define T5CKPS0_size                             0x1
#define T5CKPS0_value_mask                       0x10
#define T5CKPS0_clear_mask                       0xEF

#define T5CKPS1                                  0x5
#define T5CKPS1_address                          0x41A
#define T5CKPS1_position                         0x5
#define T5CKPS1_size                             0x1
#define T5CKPS1_value_mask                       0x20
#define T5CKPS1_clear_mask                       0xDF

#define TMR5CS0                                  0x6
#define TMR5CS0_address                          0x41A
#define TMR5CS0_position                         0x6
#define TMR5CS0_size                             0x1
#define TMR5CS0_value_mask                       0x40
#define TMR5CS0_clear_mask                       0xBF

#define TMR5CS                                   0x6
#define TMR5CS_address                           0x41A
#define TMR5CS_position                          0x6
#define TMR5CS_size                              0x2
#define TMR5CS_value_mask                        0xC0
#define TMR5CS_clear_mask                        0x3F

#define TMR5CS1                                  0x7
#define TMR5CS1_address                          0x41A
#define TMR5CS1_position                         0x7
#define TMR5CS1_size                             0x1
#define TMR5CS1_value_mask                       0x80
#define TMR5CS1_clear_mask                       0x7F


/*--------------------------------------------------------------------------#
| T5GCON                                                              0x41B |
#---------------------------------------------------------------------------#
| TMR5GE | T5GPOL | T5GTM | T5GSPM | T5GGO_nDONE | T5GVAL | T5GSS1 | T5GSS0 |
#---------------------------------------------------------------------------#
| 7      | 6      | 5     | 4      | 3           | 2      | 1      | 0      |
#--------------------------------------------------------------------------*/

#define T5GCON                                   0x0
#define T5GCON_address                           0x41B
#define T5GCON_position                          0x0
#define T5GCON_size                              0x8
#define T5GCON_value_mask                        0xFF
#define T5GCON_clear_mask                        0x0

#define T5GSS                                    0x0
#define T5GSS_address                            0x41B
#define T5GSS_position                           0x0
#define T5GSS_size                               0x2
#define T5GSS_value_mask                         0x3
#define T5GSS_clear_mask                         0xFC

#define T5GSS0                                   0x0
#define T5GSS0_address                           0x41B
#define T5GSS0_position                          0x0
#define T5GSS0_size                              0x1
#define T5GSS0_value_mask                        0x1
#define T5GSS0_clear_mask                        0xFE

#define T5GSS1                                   0x1
#define T5GSS1_address                           0x41B
#define T5GSS1_position                          0x1
#define T5GSS1_size                              0x1
#define T5GSS1_value_mask                        0x2
#define T5GSS1_clear_mask                        0xFD

#define T5GVAL                                   0x2
#define T5GVAL_address                           0x41B
#define T5GVAL_position                          0x2
#define T5GVAL_size                              0x1
#define T5GVAL_value_mask                        0x4
#define T5GVAL_clear_mask                        0xFB

#define T5GGO_nDONE                              0x3
#define T5GGO_nDONE_address                      0x41B
#define T5GGO_nDONE_position                     0x3
#define T5GGO_nDONE_size                         0x1
#define T5GGO_nDONE_value_mask                   0x8
#define T5GGO_nDONE_clear_mask                   0xF7

#define T5GSPM                                   0x4
#define T5GSPM_address                           0x41B
#define T5GSPM_position                          0x4
#define T5GSPM_size                              0x1
#define T5GSPM_value_mask                        0x10
#define T5GSPM_clear_mask                        0xEF

#define T5GTM                                    0x5
#define T5GTM_address                            0x41B
#define T5GTM_position                           0x5
#define T5GTM_size                               0x1
#define T5GTM_value_mask                         0x20
#define T5GTM_clear_mask                         0xDF

#define T5GPOL                                   0x6
#define T5GPOL_address                           0x41B
#define T5GPOL_position                          0x6
#define T5GPOL_size                              0x1
#define T5GPOL_value_mask                        0x40
#define T5GPOL_clear_mask                        0xBF

#define TMR5GE                                   0x7
#define TMR5GE_address                           0x41B
#define TMR5GE_position                          0x7
#define TMR5GE_size                              0x1
#define TMR5GE_value_mask                        0x80
#define TMR5GE_clear_mask                        0x7F


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


/*------------------------------------------#
| CCDCON                              0x41F |
#-------------------------------------------#
| CCDEN | - | - | - | - | - | CCDS1 | CCDS0 |
#-------------------------------------------#
| 7     | 6 | 5 | 4 | 3 | 2 | 1     | 0     |
#------------------------------------------*/

#define CCDCON                                   0x0
#define CCDCON_address                           0x41F
#define CCDCON_position                          0x0
#define CCDCON_size                              0x8
#define CCDCON_value_mask                        0xFF
#define CCDCON_clear_mask                        0x0

#define CCDS                                     0x0
#define CCDS_address                             0x41F
#define CCDS_position                            0x0
#define CCDS_size                                0x2
#define CCDS_value_mask                          0x3
#define CCDS_clear_mask                          0xFC

#define CCDS0                                    0x0
#define CCDS0_address                            0x41F
#define CCDS0_position                           0x0
#define CCDS0_size                               0x1
#define CCDS0_value_mask                         0x1
#define CCDS0_clear_mask                         0xFE

#define CCDS1                                    0x1
#define CCDS1_address                            0x41F
#define CCDS1_position                           0x1
#define CCDS1_size                               0x1
#define CCDS1_value_mask                         0x2
#define CCDS1_clear_mask                         0xFD

#define CCDEN                                    0x7
#define CCDEN_address                            0x41F
#define CCDEN_position                           0x7
#define CCDEN_size                               0x1
#define CCDEN_value_mask                         0x80
#define CCDEN_clear_mask                         0x7F


/*-------------------------------------------------------#
| CCDPA                                            0x48C |
#--------------------------------------------------------#
| - | - | CCDPA5 | CCDPA4 | - | CCDPA2 | CCDPA1 | CCDPA0 |
#--------------------------------------------------------#
| 7 | 6 | 5      | 4      | 3 | 2      | 1      | 0      |
#-------------------------------------------------------*/

#define CCDPA                                    0x0
#define CCDPA_address                            0x48C
#define CCDPA_position                           0x0
#define CCDPA_size                               0x8
#define CCDPA_value_mask                         0xFF
#define CCDPA_clear_mask                         0x0

#define CCDPA0                                   0x0
#define CCDPA0_address                           0x48C
#define CCDPA0_position                          0x0
#define CCDPA0_size                              0x1
#define CCDPA0_value_mask                        0x1
#define CCDPA0_clear_mask                        0xFE

#define CCDPA1                                   0x1
#define CCDPA1_address                           0x48C
#define CCDPA1_position                          0x1
#define CCDPA1_size                              0x1
#define CCDPA1_value_mask                        0x2
#define CCDPA1_clear_mask                        0xFD

#define CCDPA2                                   0x2
#define CCDPA2_address                           0x48C
#define CCDPA2_position                          0x2
#define CCDPA2_size                              0x1
#define CCDPA2_value_mask                        0x4
#define CCDPA2_clear_mask                        0xFB

#define CCDPA4                                   0x4
#define CCDPA4_address                           0x48C
#define CCDPA4_position                          0x4
#define CCDPA4_size                              0x1
#define CCDPA4_value_mask                        0x10
#define CCDPA4_clear_mask                        0xEF

#define CCDPA5                                   0x5
#define CCDPA5_address                           0x48C
#define CCDPA5_position                          0x5
#define CCDPA5_size                              0x1
#define CCDPA5_value_mask                        0x20
#define CCDPA5_clear_mask                        0xDF


/*------------------------------------------------------------#
| CCDPC                                                 0x48E |
#-------------------------------------------------------------#
| - | - | CCDPC5 | CCDPC4 | CCDPC3 | CCDPC2 | CCDPC1 | CCDPC0 |
#-------------------------------------------------------------#
| 7 | 6 | 5      | 4      | 3      | 2      | 1      | 0      |
#------------------------------------------------------------*/

#define CCDPC                                    0x0
#define CCDPC_address                            0x48E
#define CCDPC_position                           0x0
#define CCDPC_size                               0x8
#define CCDPC_value_mask                         0xFF
#define CCDPC_clear_mask                         0x0

#define CCDPC0                                   0x0
#define CCDPC0_address                           0x48E
#define CCDPC0_position                          0x0
#define CCDPC0_size                              0x1
#define CCDPC0_value_mask                        0x1
#define CCDPC0_clear_mask                        0xFE

#define CCDPC1                                   0x1
#define CCDPC1_address                           0x48E
#define CCDPC1_position                          0x1
#define CCDPC1_size                              0x1
#define CCDPC1_value_mask                        0x2
#define CCDPC1_clear_mask                        0xFD

#define CCDPC2                                   0x2
#define CCDPC2_address                           0x48E
#define CCDPC2_position                          0x2
#define CCDPC2_size                              0x1
#define CCDPC2_value_mask                        0x4
#define CCDPC2_clear_mask                        0xFB

#define CCDPC3                                   0x3
#define CCDPC3_address                           0x48E
#define CCDPC3_position                          0x3
#define CCDPC3_size                              0x1
#define CCDPC3_value_mask                        0x8
#define CCDPC3_clear_mask                        0xF7

#define CCDPC4                                   0x4
#define CCDPC4_address                           0x48E
#define CCDPC4_position                          0x4
#define CCDPC4_size                              0x1
#define CCDPC4_value_mask                        0x10
#define CCDPC4_clear_mask                        0xEF

#define CCDPC5                                   0x5
#define CCDPC5_address                           0x48E
#define CCDPC5_position                          0x5
#define CCDPC5_size                              0x1
#define CCDPC5_value_mask                        0x20
#define CCDPC5_clear_mask                        0xDF


/*------------------------------#
| NCO1ACCL                0x498 |
#-------------------------------#
| NCO1ACCL_NCO1ACC              |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

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


/*------------------------------#
| NCO1ACCH                0x499 |
#-------------------------------#
| NCO1ACCH_NCO1ACC              |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define NCO1ACCH                                 0x0
#define NCO1ACCH_address                         0x499
#define NCO1ACCH_position                        0x0
#define NCO1ACCH_size                            0x8
#define NCO1ACCH_value_mask                      0xFF
#define NCO1ACCH_clear_mask                      0x0

#define NCO1ACCH_NCO1ACC                         0x0
#define NCO1ACCH_NCO1ACC_address                 0x499
#define NCO1ACCH_NCO1ACC_position                0x0
#define NCO1ACCH_NCO1ACC_size                    0x8
#define NCO1ACCH_NCO1ACC_value_mask              0xFF
#define NCO1ACCH_NCO1ACC_clear_mask              0x0


/*---------------------------------#
| NCO1ACCU                   0x49A |
#----------------------------------#
| - | - | - | - | NCO1ACCU_NCO1ACC |
#----------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0    |
#---------------------------------*/

#define NCO1ACCU                                 0x0
#define NCO1ACCU_address                         0x49A
#define NCO1ACCU_position                        0x0
#define NCO1ACCU_size                            0x8
#define NCO1ACCU_value_mask                      0xFF
#define NCO1ACCU_clear_mask                      0x0

#define NCO1ACCU_NCO1ACC                         0x0
#define NCO1ACCU_NCO1ACC_address                 0x49A
#define NCO1ACCU_NCO1ACC_position                0x0
#define NCO1ACCU_NCO1ACC_size                    0x4
#define NCO1ACCU_NCO1ACC_value_mask              0xF
#define NCO1ACCU_NCO1ACC_clear_mask              0xF0


/*------------------------------#
| NCO1INCL                0x49B |
#-------------------------------#
| NCO1INCL_NCO1INC              |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define NCO1INCL                                 0x0
#define NCO1INCL_address                         0x49B
#define NCO1INCL_position                        0x0
#define NCO1INCL_size                            0x8
#define NCO1INCL_value_mask                      0xFF
#define NCO1INCL_clear_mask                      0x0

#define NCO1INCL_NCO1INC                         0x0
#define NCO1INCL_NCO1INC_address                 0x49B
#define NCO1INCL_NCO1INC_position                0x0
#define NCO1INCL_NCO1INC_size                    0x8
#define NCO1INCL_NCO1INC_value_mask              0xFF
#define NCO1INCL_NCO1INC_clear_mask              0x0


/*------------------------------#
| NCO1INCH                0x49C |
#-------------------------------#
| NCO1INCH_NCO1INC              |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

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


/*---------------------------------#
| NCO1INCU                   0x49D |
#----------------------------------#
| - | - | - | - | NCO1INCU_NCO1INC |
#----------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0    |
#---------------------------------*/

#define NCO1INCU                                 0x0
#define NCO1INCU_address                         0x49D
#define NCO1INCU_position                        0x0
#define NCO1INCU_size                            0x8
#define NCO1INCU_value_mask                      0xFF
#define NCO1INCU_clear_mask                      0x0

#define NCO1INCU_NCO1INC                         0x0
#define NCO1INCU_NCO1INC_address                 0x49D
#define NCO1INCU_NCO1INC_position                0x0
#define NCO1INCU_NCO1INC_size                    0x4
#define NCO1INCU_NCO1INC_value_mask              0xF
#define NCO1INCU_NCO1INC_clear_mask              0xF0


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


/*------------------------------#
| NCO1CLK                 0x49F |
#-------------------------------#
| N1PWS     | - | - | - | N1CKS |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define NCO1CLK                                  0x0
#define NCO1CLK_address                          0x49F
#define NCO1CLK_position                         0x0
#define NCO1CLK_size                             0x8
#define NCO1CLK_value_mask                       0xFF
#define NCO1CLK_clear_mask                       0x0

#define N1CKS                                    0x0
#define N1CKS_address                            0x49F
#define N1CKS_position                           0x0
#define N1CKS_size                               0x2
#define N1CKS_value_mask                         0x3
#define N1CKS_clear_mask                         0xFC

#define N1PWS                                    0x5
#define N1PWS_address                            0x49F
#define N1PWS_position                           0x5
#define N1PWS_size                               0x3
#define N1PWS_value_mask                         0xE0
#define N1PWS_clear_mask                         0x1F


/*--------------------------------------------#
| PWM5DCL                               0x617 |
#---------------------------------------------#
| PWM5DCL1 | PWM5DCL0 | - | - | - | - | - | - |
#---------------------------------------------#
| 7        | 6        | 5 | 4 | 3 | 2 | 1 | 0 |
#--------------------------------------------*/

#define PWM5DCL                                  0x6
#define PWM5DCL_address                          0x617
#define PWM5DCL_position                         0x6
#define PWM5DCL_size                             0x2
#define PWM5DCL_value_mask                       0xC0
#define PWM5DCL_clear_mask                       0x3F

#define PWM5DCL0                                 0x6
#define PWM5DCL0_address                         0x617
#define PWM5DCL0_position                        0x6
#define PWM5DCL0_size                            0x1
#define PWM5DCL0_value_mask                      0x40
#define PWM5DCL0_clear_mask                      0xBF

#define PWM5DCL1                                 0x7
#define PWM5DCL1_address                         0x617
#define PWM5DCL1_position                        0x7
#define PWM5DCL1_size                            0x1
#define PWM5DCL1_value_mask                      0x80
#define PWM5DCL1_clear_mask                      0x7F


/*--------------------------------------------------------------------------------------#
| PWM5DCH                                                                         0x618 |
#---------------------------------------------------------------------------------------#
| PWM5DCH7 | PWM5DCH6 | PWM5DCH5 | PWM5DCH4 | PWM5DCH3 | PWM5DCH2 | PWM5DCH1 | PWM5DCH0 |
#---------------------------------------------------------------------------------------#
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
#--------------------------------------------------------------------------------------*/

#define PWM5DCH                                  0x0
#define PWM5DCH_address                          0x618
#define PWM5DCH_position                         0x0
#define PWM5DCH_size                             0x8
#define PWM5DCH_value_mask                       0xFF
#define PWM5DCH_clear_mask                       0x0

#define PWM5DCH0                                 0x0
#define PWM5DCH0_address                         0x618
#define PWM5DCH0_position                        0x0
#define PWM5DCH0_size                            0x1
#define PWM5DCH0_value_mask                      0x1
#define PWM5DCH0_clear_mask                      0xFE

#define PWM5DCH1                                 0x1
#define PWM5DCH1_address                         0x618
#define PWM5DCH1_position                        0x1
#define PWM5DCH1_size                            0x1
#define PWM5DCH1_value_mask                      0x2
#define PWM5DCH1_clear_mask                      0xFD

#define PWM5DCH2                                 0x2
#define PWM5DCH2_address                         0x618
#define PWM5DCH2_position                        0x2
#define PWM5DCH2_size                            0x1
#define PWM5DCH2_value_mask                      0x4
#define PWM5DCH2_clear_mask                      0xFB

#define PWM5DCH3                                 0x3
#define PWM5DCH3_address                         0x618
#define PWM5DCH3_position                        0x3
#define PWM5DCH3_size                            0x1
#define PWM5DCH3_value_mask                      0x8
#define PWM5DCH3_clear_mask                      0xF7

#define PWM5DCH4                                 0x4
#define PWM5DCH4_address                         0x618
#define PWM5DCH4_position                        0x4
#define PWM5DCH4_size                            0x1
#define PWM5DCH4_value_mask                      0x10
#define PWM5DCH4_clear_mask                      0xEF

#define PWM5DCH5                                 0x5
#define PWM5DCH5_address                         0x618
#define PWM5DCH5_position                        0x5
#define PWM5DCH5_size                            0x1
#define PWM5DCH5_value_mask                      0x20
#define PWM5DCH5_clear_mask                      0xDF

#define PWM5DCH6                                 0x6
#define PWM5DCH6_address                         0x618
#define PWM5DCH6_position                        0x6
#define PWM5DCH6_size                            0x1
#define PWM5DCH6_value_mask                      0x40
#define PWM5DCH6_clear_mask                      0xBF

#define PWM5DCH7                                 0x7
#define PWM5DCH7_address                         0x618
#define PWM5DCH7_position                        0x7
#define PWM5DCH7_size                            0x1
#define PWM5DCH7_value_mask                      0x80
#define PWM5DCH7_clear_mask                      0x7F


/*-----------------------------------------------#
| PWM5CON                                  0x619 |
#------------------------------------------------#
| PWM5EN | - | PWM5OUT | PWM5POL | - | - | - | - |
#------------------------------------------------#
| 7      | 6 | 5       | 4       | 3 | 2 | 1 | 0 |
#-----------------------------------------------*/

#define PWM5CON                                  0x0
#define PWM5CON_address                          0x619
#define PWM5CON_position                         0x0
#define PWM5CON_size                             0x8
#define PWM5CON_value_mask                       0xFF
#define PWM5CON_clear_mask                       0x0

#define PWM5POL                                  0x4
#define PWM5POL_address                          0x619
#define PWM5POL_position                         0x4
#define PWM5POL_size                             0x1
#define PWM5POL_value_mask                       0x10
#define PWM5POL_clear_mask                       0xEF

#define PWM5OUT                                  0x5
#define PWM5OUT_address                          0x619
#define PWM5OUT_position                         0x5
#define PWM5OUT_size                             0x1
#define PWM5OUT_value_mask                       0x20
#define PWM5OUT_clear_mask                       0xDF

#define PWM5EN                                   0x7
#define PWM5EN_address                           0x619
#define PWM5EN_position                          0x7
#define PWM5EN_size                              0x1
#define PWM5EN_value_mask                        0x80
#define PWM5EN_clear_mask                        0x7F


/*--------------------------------------------#
| PWM6DCL                               0x61A |
#---------------------------------------------#
| PWM6DCL1 | PWM6DCL0 | - | - | - | - | - | - |
#---------------------------------------------#
| 7        | 6        | 5 | 4 | 3 | 2 | 1 | 0 |
#--------------------------------------------*/

#define PWM6DCL                                  0x6
#define PWM6DCL_address                          0x61A
#define PWM6DCL_position                         0x6
#define PWM6DCL_size                             0x2
#define PWM6DCL_value_mask                       0xC0
#define PWM6DCL_clear_mask                       0x3F

#define PWM6DCL0                                 0x6
#define PWM6DCL0_address                         0x61A
#define PWM6DCL0_position                        0x6
#define PWM6DCL0_size                            0x1
#define PWM6DCL0_value_mask                      0x40
#define PWM6DCL0_clear_mask                      0xBF

#define PWM6DCL1                                 0x7
#define PWM6DCL1_address                         0x61A
#define PWM6DCL1_position                        0x7
#define PWM6DCL1_size                            0x1
#define PWM6DCL1_value_mask                      0x80
#define PWM6DCL1_clear_mask                      0x7F


/*--------------------------------------------------------------------------------------#
| PWM6DCH                                                                         0x61B |
#---------------------------------------------------------------------------------------#
| PWM6DCH7 | PWM6DCH6 | PWM6DCH5 | PWM6DCH4 | PWM6DCH3 | PWM6DCH2 | PWM6DCH1 | PWM6DCH0 |
#---------------------------------------------------------------------------------------#
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
#--------------------------------------------------------------------------------------*/

#define PWM6DCH                                  0x0
#define PWM6DCH_address                          0x61B
#define PWM6DCH_position                         0x0
#define PWM6DCH_size                             0x8
#define PWM6DCH_value_mask                       0xFF
#define PWM6DCH_clear_mask                       0x0

#define PWM6DCH0                                 0x0
#define PWM6DCH0_address                         0x61B
#define PWM6DCH0_position                        0x0
#define PWM6DCH0_size                            0x1
#define PWM6DCH0_value_mask                      0x1
#define PWM6DCH0_clear_mask                      0xFE

#define PWM6DCH1                                 0x1
#define PWM6DCH1_address                         0x61B
#define PWM6DCH1_position                        0x1
#define PWM6DCH1_size                            0x1
#define PWM6DCH1_value_mask                      0x2
#define PWM6DCH1_clear_mask                      0xFD

#define PWM6DCH2                                 0x2
#define PWM6DCH2_address                         0x61B
#define PWM6DCH2_position                        0x2
#define PWM6DCH2_size                            0x1
#define PWM6DCH2_value_mask                      0x4
#define PWM6DCH2_clear_mask                      0xFB

#define PWM6DCH3                                 0x3
#define PWM6DCH3_address                         0x61B
#define PWM6DCH3_position                        0x3
#define PWM6DCH3_size                            0x1
#define PWM6DCH3_value_mask                      0x8
#define PWM6DCH3_clear_mask                      0xF7

#define PWM6DCH4                                 0x4
#define PWM6DCH4_address                         0x61B
#define PWM6DCH4_position                        0x4
#define PWM6DCH4_size                            0x1
#define PWM6DCH4_value_mask                      0x10
#define PWM6DCH4_clear_mask                      0xEF

#define PWM6DCH5                                 0x5
#define PWM6DCH5_address                         0x61B
#define PWM6DCH5_position                        0x5
#define PWM6DCH5_size                            0x1
#define PWM6DCH5_value_mask                      0x20
#define PWM6DCH5_clear_mask                      0xDF

#define PWM6DCH6                                 0x6
#define PWM6DCH6_address                         0x61B
#define PWM6DCH6_position                        0x6
#define PWM6DCH6_size                            0x1
#define PWM6DCH6_value_mask                      0x40
#define PWM6DCH6_clear_mask                      0xBF

#define PWM6DCH7                                 0x7
#define PWM6DCH7_address                         0x61B
#define PWM6DCH7_position                        0x7
#define PWM6DCH7_size                            0x1
#define PWM6DCH7_value_mask                      0x80
#define PWM6DCH7_clear_mask                      0x7F


/*-----------------------------------------------#
| PWM6CON                                  0x61C |
#------------------------------------------------#
| PWM6EN | - | PWM6OUT | PWM6POL | - | - | - | - |
#------------------------------------------------#
| 7      | 6 | 5       | 4       | 3 | 2 | 1 | 0 |
#-----------------------------------------------*/

#define PWM6CON                                  0x0
#define PWM6CON_address                          0x61C
#define PWM6CON_position                         0x0
#define PWM6CON_size                             0x8
#define PWM6CON_value_mask                       0xFF
#define PWM6CON_clear_mask                       0x0

#define PWM6POL                                  0x4
#define PWM6POL_address                          0x61C
#define PWM6POL_position                         0x4
#define PWM6POL_size                             0x1
#define PWM6POL_value_mask                       0x10
#define PWM6POL_clear_mask                       0xEF

#define PWM6OUT                                  0x5
#define PWM6OUT_address                          0x61C
#define PWM6OUT_position                         0x5
#define PWM6OUT_size                             0x1
#define PWM6OUT_value_mask                       0x20
#define PWM6OUT_clear_mask                       0xDF

#define PWM6EN                                   0x7
#define PWM6EN_address                           0x61C
#define PWM6EN_position                          0x7
#define PWM6EN_size                              0x1
#define PWM6EN_value_mask                        0x80
#define PWM6EN_clear_mask                        0x7F


/*------------------------------------------------------#
| PWMTMRS                                         0x61F |
#-------------------------------------------------------#
| - | - | - | - | P6TSEL1 | P6TSEL0 | P5TSEL1 | P5TSEL0 |
#-------------------------------------------------------#
| 7 | 6 | 5 | 4 | 3       | 2       | 1       | 0       |
#------------------------------------------------------*/

#define PWMTMRS                                  0x0
#define PWMTMRS_address                          0x61F
#define PWMTMRS_position                         0x0
#define PWMTMRS_size                             0x8
#define PWMTMRS_value_mask                       0xFF
#define PWMTMRS_clear_mask                       0x0

#define P5TSEL                                   0x0
#define P5TSEL_address                           0x61F
#define P5TSEL_position                          0x0
#define P5TSEL_size                              0x2
#define P5TSEL_value_mask                        0x3
#define P5TSEL_clear_mask                        0xFC

#define P5TSEL0                                  0x0
#define P5TSEL0_address                          0x61F
#define P5TSEL0_position                         0x0
#define P5TSEL0_size                             0x1
#define P5TSEL0_value_mask                       0x1
#define P5TSEL0_clear_mask                       0xFE

#define P5TSEL1                                  0x1
#define P5TSEL1_address                          0x61F
#define P5TSEL1_position                         0x1
#define P5TSEL1_size                             0x1
#define P5TSEL1_value_mask                       0x2
#define P5TSEL1_clear_mask                       0xFD

#define P6TSEL0                                  0x2
#define P6TSEL0_address                          0x61F
#define P6TSEL0_position                         0x2
#define P6TSEL0_size                             0x1
#define P6TSEL0_value_mask                       0x4
#define P6TSEL0_clear_mask                       0xFB

#define P6TSEL                                   0x2
#define P6TSEL_address                           0x61F
#define P6TSEL_position                          0x2
#define P6TSEL_size                              0x2
#define P6TSEL_value_mask                        0xC
#define P6TSEL_clear_mask                        0xF3

#define P6TSEL1                                  0x3
#define P6TSEL1_address                          0x61F
#define P6TSEL1_position                         0x3
#define P6TSEL1_size                             0x1
#define P6TSEL1_value_mask                       0x8
#define P6TSEL1_clear_mask                       0xF7


/*-----------------------------------#
| CWG1CLKCON                   0x691 |
#------------------------------------#
| - | - | - | - | - | - | - | CWG1CS |
#------------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0      |
#-----------------------------------*/

#define CWG1CLKCON                               0x0
#define CWG1CLKCON_address                       0x691
#define CWG1CLKCON_position                      0x0
#define CWG1CLKCON_size                          0x8
#define CWG1CLKCON_value_mask                    0xFF
#define CWG1CLKCON_clear_mask                    0x0

#define CWG1CLKCON_CS                            0x0
#define CWG1CLKCON_CS_address                    0x691
#define CWG1CLKCON_CS_position                   0x0
#define CWG1CLKCON_CS_size                       0x1
#define CWG1CLKCON_CS_value_mask                 0x1
#define CWG1CLKCON_CS_clear_mask                 0xFE

#define CWG1CS                                   0x0
#define CWG1CS_address                           0x691
#define CWG1CS_position                          0x0
#define CWG1CS_size                              0x1
#define CWG1CS_value_mask                        0x1
#define CWG1CS_clear_mask                        0xFE


/*----------------------------------------------------------#
| CWG1DAT                                             0x692 |
#-----------------------------------------------------------#
| - | - | - | - | CWG1DAT3 | CWG1DAT2 | CWG1DAT1 | CWG1DAT0 |
#-----------------------------------------------------------#
| 7 | 6 | 5 | 4 | 3        | 2        | 1        | 0        |
#----------------------------------------------------------*/

#define CWG1DAT                                  0x0
#define CWG1DAT_address                          0x692
#define CWG1DAT_position                         0x0
#define CWG1DAT_size                             0x8
#define CWG1DAT_value_mask                       0xFF
#define CWG1DAT_clear_mask                       0x0

#define CWG1DAT_DAT                              0x0
#define CWG1DAT_DAT_address                      0x692
#define CWG1DAT_DAT_position                     0x0
#define CWG1DAT_DAT_size                         0x4
#define CWG1DAT_DAT_value_mask                   0xF
#define CWG1DAT_DAT_clear_mask                   0xF0

#define CWG1DAT0                                 0x0
#define CWG1DAT0_address                         0x692
#define CWG1DAT0_position                        0x0
#define CWG1DAT0_size                            0x1
#define CWG1DAT0_value_mask                      0x1
#define CWG1DAT0_clear_mask                      0xFE

#define CWG1DAT1                                 0x1
#define CWG1DAT1_address                         0x692
#define CWG1DAT1_position                        0x1
#define CWG1DAT1_size                            0x1
#define CWG1DAT1_value_mask                      0x2
#define CWG1DAT1_clear_mask                      0xFD

#define CWG1DAT2                                 0x2
#define CWG1DAT2_address                         0x692
#define CWG1DAT2_position                        0x2
#define CWG1DAT2_size                            0x1
#define CWG1DAT2_value_mask                      0x4
#define CWG1DAT2_clear_mask                      0xFB

#define CWG1DAT3                                 0x3
#define CWG1DAT3_address                         0x692
#define CWG1DAT3_position                        0x3
#define CWG1DAT3_size                            0x1
#define CWG1DAT3_value_mask                      0x8
#define CWG1DAT3_clear_mask                      0xF7


/*------------------------------------------------------------------------#
| CWG1DBR                                                           0x693 |
#-------------------------------------------------------------------------#
| - | - | CWG1DBR5 | CWG1DBR4 | CWG1DBR3 | CWG1DBR2 | CWG1DBR1 | CWG1DBR0 |
#-------------------------------------------------------------------------#
| 7 | 6 | 5        | 4        | 3        | 2        | 1        | 0        |
#------------------------------------------------------------------------*/

#define CWG1DBR_DBR                              0x0
#define CWG1DBR_DBR_address                      0x693
#define CWG1DBR_DBR_position                     0x0
#define CWG1DBR_DBR_size                         0x6
#define CWG1DBR_DBR_value_mask                   0x3F
#define CWG1DBR_DBR_clear_mask                   0xC0

#define CWG1DBR0                                 0x0
#define CWG1DBR0_address                         0x693
#define CWG1DBR0_position                        0x0
#define CWG1DBR0_size                            0x1
#define CWG1DBR0_value_mask                      0x1
#define CWG1DBR0_clear_mask                      0xFE

#define CWG1DBR_DBR0                             0x0
#define CWG1DBR_DBR0_address                     0x693
#define CWG1DBR_DBR0_position                    0x0
#define CWG1DBR_DBR0_size                        0x1
#define CWG1DBR_DBR0_value_mask                  0x1
#define CWG1DBR_DBR0_clear_mask                  0xFE

#define CWG1DBR                                  0x0
#define CWG1DBR_address                          0x693
#define CWG1DBR_position                         0x0
#define CWG1DBR_size                             0x6
#define CWG1DBR_value_mask                       0x3F
#define CWG1DBR_clear_mask                       0xC0

#define CWG1DBR1                                 0x1
#define CWG1DBR1_address                         0x693
#define CWG1DBR1_position                        0x1
#define CWG1DBR1_size                            0x1
#define CWG1DBR1_value_mask                      0x2
#define CWG1DBR1_clear_mask                      0xFD

#define CWG1DBR_DBR1                             0x1
#define CWG1DBR_DBR1_address                     0x693
#define CWG1DBR_DBR1_position                    0x1
#define CWG1DBR_DBR1_size                        0x1
#define CWG1DBR_DBR1_value_mask                  0x2
#define CWG1DBR_DBR1_clear_mask                  0xFD

#define CWG1DBR2                                 0x2
#define CWG1DBR2_address                         0x693
#define CWG1DBR2_position                        0x2
#define CWG1DBR2_size                            0x1
#define CWG1DBR2_value_mask                      0x4
#define CWG1DBR2_clear_mask                      0xFB

#define CWG1DBR_DBR2                             0x2
#define CWG1DBR_DBR2_address                     0x693
#define CWG1DBR_DBR2_position                    0x2
#define CWG1DBR_DBR2_size                        0x1
#define CWG1DBR_DBR2_value_mask                  0x4
#define CWG1DBR_DBR2_clear_mask                  0xFB

#define CWG1DBR3                                 0x3
#define CWG1DBR3_address                         0x693
#define CWG1DBR3_position                        0x3
#define CWG1DBR3_size                            0x1
#define CWG1DBR3_value_mask                      0x8
#define CWG1DBR3_clear_mask                      0xF7

#define CWG1DBR_DBR3                             0x3
#define CWG1DBR_DBR3_address                     0x693
#define CWG1DBR_DBR3_position                    0x3
#define CWG1DBR_DBR3_size                        0x1
#define CWG1DBR_DBR3_value_mask                  0x8
#define CWG1DBR_DBR3_clear_mask                  0xF7

#define CWG1DBR_DBR4                             0x4
#define CWG1DBR_DBR4_address                     0x693
#define CWG1DBR_DBR4_position                    0x4
#define CWG1DBR_DBR4_size                        0x1
#define CWG1DBR_DBR4_value_mask                  0x10
#define CWG1DBR_DBR4_clear_mask                  0xEF

#define CWG1DBR4                                 0x4
#define CWG1DBR4_address                         0x693
#define CWG1DBR4_position                        0x4
#define CWG1DBR4_size                            0x1
#define CWG1DBR4_value_mask                      0x10
#define CWG1DBR4_clear_mask                      0xEF

#define CWG1DBR5                                 0x5
#define CWG1DBR5_address                         0x693
#define CWG1DBR5_position                        0x5
#define CWG1DBR5_size                            0x1
#define CWG1DBR5_value_mask                      0x20
#define CWG1DBR5_clear_mask                      0xDF

#define CWG1DBR_DBR5                             0x5
#define CWG1DBR_DBR5_address                     0x693
#define CWG1DBR_DBR5_position                    0x5
#define CWG1DBR_DBR5_size                        0x1
#define CWG1DBR_DBR5_value_mask                  0x20
#define CWG1DBR_DBR5_clear_mask                  0xDF


/*----------------------------------------------------------------------------#
| CWG1DBF                                                               0x694 |
#-----------------------------------------------------------------------------#
| - | - | CWG1DBF5 | CWG1DBF_DBF4 | CWG1DBF3 | CWG1DBF2 | CWG1DBF1 | CWG1DBF0 |
#-----------------------------------------------------------------------------#
| 7 | 6 | 5        | 4            | 3        | 2        | 1        | 0        |
#----------------------------------------------------------------------------*/

#define CWG1DBF                                  0x0
#define CWG1DBF_address                          0x694
#define CWG1DBF_position                         0x0
#define CWG1DBF_size                             0x6
#define CWG1DBF_value_mask                       0x3F
#define CWG1DBF_clear_mask                       0xC0

#define CWG1DBF0                                 0x0
#define CWG1DBF0_address                         0x694
#define CWG1DBF0_position                        0x0
#define CWG1DBF0_size                            0x1
#define CWG1DBF0_value_mask                      0x1
#define CWG1DBF0_clear_mask                      0xFE

#define CWG1DBF_DBF                              0x0
#define CWG1DBF_DBF_address                      0x694
#define CWG1DBF_DBF_position                     0x0
#define CWG1DBF_DBF_size                         0x6
#define CWG1DBF_DBF_value_mask                   0x3F
#define CWG1DBF_DBF_clear_mask                   0xC0

#define CWG1DBF_DBF0                             0x0
#define CWG1DBF_DBF0_address                     0x694
#define CWG1DBF_DBF0_position                    0x0
#define CWG1DBF_DBF0_size                        0x1
#define CWG1DBF_DBF0_value_mask                  0x1
#define CWG1DBF_DBF0_clear_mask                  0xFE

#define CWG1DBF1                                 0x1
#define CWG1DBF1_address                         0x694
#define CWG1DBF1_position                        0x1
#define CWG1DBF1_size                            0x1
#define CWG1DBF1_value_mask                      0x2
#define CWG1DBF1_clear_mask                      0xFD

#define CWG1DBF_DBF1                             0x1
#define CWG1DBF_DBF1_address                     0x694
#define CWG1DBF_DBF1_position                    0x1
#define CWG1DBF_DBF1_size                        0x1
#define CWG1DBF_DBF1_value_mask                  0x2
#define CWG1DBF_DBF1_clear_mask                  0xFD

#define CWG1DBF_DBF2                             0x2
#define CWG1DBF_DBF2_address                     0x694
#define CWG1DBF_DBF2_position                    0x2
#define CWG1DBF_DBF2_size                        0x1
#define CWG1DBF_DBF2_value_mask                  0x4
#define CWG1DBF_DBF2_clear_mask                  0xFB

#define CWG1DBF2                                 0x2
#define CWG1DBF2_address                         0x694
#define CWG1DBF2_position                        0x2
#define CWG1DBF2_size                            0x1
#define CWG1DBF2_value_mask                      0x4
#define CWG1DBF2_clear_mask                      0xFB

#define CWG1DBF3                                 0x3
#define CWG1DBF3_address                         0x694
#define CWG1DBF3_position                        0x3
#define CWG1DBF3_size                            0x1
#define CWG1DBF3_value_mask                      0x8
#define CWG1DBF3_clear_mask                      0xF7

#define CWG1DBF_DBF3                             0x3
#define CWG1DBF_DBF3_address                     0x694
#define CWG1DBF_DBF3_position                    0x3
#define CWG1DBF_DBF3_size                        0x1
#define CWG1DBF_DBF3_value_mask                  0x8
#define CWG1DBF_DBF3_clear_mask                  0xF7

#define CWG1DBF_DBF4                             0x4
#define CWG1DBF_DBF4_address                     0x694
#define CWG1DBF_DBF4_position                    0x4
#define CWG1DBF_DBF4_size                        0x1
#define CWG1DBF_DBF4_value_mask                  0x10
#define CWG1DBF_DBF4_clear_mask                  0xEF

#define CWG1DBF4                                 0x4
#define CWG1DBF4_address                         0x694
#define CWG1DBF4_position                        0x4
#define CWG1DBF4_size                            0x1
#define CWG1DBF4_value_mask                      0x10
#define CWG1DBF4_clear_mask                      0xEF

#define CWG1DBF_DBF5                             0x5
#define CWG1DBF_DBF5_address                     0x694
#define CWG1DBF_DBF5_position                    0x5
#define CWG1DBF_DBF5_size                        0x1
#define CWG1DBF_DBF5_value_mask                  0x20
#define CWG1DBF_DBF5_clear_mask                  0xDF

#define CWG1DBF5                                 0x5
#define CWG1DBF5_address                         0x694
#define CWG1DBF5_position                        0x5
#define CWG1DBF5_size                            0x1
#define CWG1DBF5_value_mask                      0x20
#define CWG1DBF5_clear_mask                      0xDF


/*--------------------------------------------------------------------------#
| CWG1CON0                                                            0x695 |
#---------------------------------------------------------------------------#
| CWG1CON0_EN | CWG1CON0_LD | - | - | - | CWG1MODE2 | CWG1MODE1 | CWG1MODE0 |
#---------------------------------------------------------------------------#
| 7           | 6           | 5 | 4 | 3 | 2         | 1         | 0         |
#--------------------------------------------------------------------------*/

#define CWG1CON0                                 0x0
#define CWG1CON0_address                         0x695
#define CWG1CON0_position                        0x0
#define CWG1CON0_size                            0x8
#define CWG1CON0_value_mask                      0xFF
#define CWG1CON0_clear_mask                      0x0

#define CWG1MODE0                                0x0
#define CWG1MODE0_address                        0x695
#define CWG1MODE0_position                       0x0
#define CWG1MODE0_size                           0x1
#define CWG1MODE0_value_mask                     0x1
#define CWG1MODE0_clear_mask                     0xFE

#define CWG1CON0_MODE                            0x0
#define CWG1CON0_MODE_address                    0x695
#define CWG1CON0_MODE_position                   0x0
#define CWG1CON0_MODE_size                       0x3
#define CWG1CON0_MODE_value_mask                 0x7
#define CWG1CON0_MODE_clear_mask                 0xF8

#define CWG1CON0_MODE0                           0x0
#define CWG1CON0_MODE0_address                   0x695
#define CWG1CON0_MODE0_position                  0x0
#define CWG1CON0_MODE0_size                      0x1
#define CWG1CON0_MODE0_value_mask                0x1
#define CWG1CON0_MODE0_clear_mask                0xFE

#define CWG1MODE                                 0x0
#define CWG1MODE_address                         0x695
#define CWG1MODE_position                        0x0
#define CWG1MODE_size                            0x3
#define CWG1MODE_value_mask                      0x7
#define CWG1MODE_clear_mask                      0xF8

#define CWG1MODE1                                0x1
#define CWG1MODE1_address                        0x695
#define CWG1MODE1_position                       0x1
#define CWG1MODE1_size                           0x1
#define CWG1MODE1_value_mask                     0x2
#define CWG1MODE1_clear_mask                     0xFD

#define CWG1CON0_MODE1                           0x1
#define CWG1CON0_MODE1_address                   0x695
#define CWG1CON0_MODE1_position                  0x1
#define CWG1CON0_MODE1_size                      0x1
#define CWG1CON0_MODE1_value_mask                0x2
#define CWG1CON0_MODE1_clear_mask                0xFD

#define CWG1MODE2                                0x2
#define CWG1MODE2_address                        0x695
#define CWG1MODE2_position                       0x2
#define CWG1MODE2_size                           0x1
#define CWG1MODE2_value_mask                     0x4
#define CWG1MODE2_clear_mask                     0xFB

#define CWG1CON0_MODE2                           0x2
#define CWG1CON0_MODE2_address                   0x695
#define CWG1CON0_MODE2_position                  0x2
#define CWG1CON0_MODE2_size                      0x1
#define CWG1CON0_MODE2_value_mask                0x4
#define CWG1CON0_MODE2_clear_mask                0xFB

#define CWG1CON0_LD                              0x6
#define CWG1CON0_LD_address                      0x695
#define CWG1CON0_LD_position                     0x6
#define CWG1CON0_LD_size                         0x1
#define CWG1CON0_LD_value_mask                   0x40
#define CWG1CON0_LD_clear_mask                   0xBF

#define CWG1LD                                   0x6
#define CWG1LD_address                           0x695
#define CWG1LD_position                          0x6
#define CWG1LD_size                              0x1
#define CWG1LD_value_mask                        0x40
#define CWG1LD_clear_mask                        0xBF

#define CWG1EN                                   0x7
#define CWG1EN_address                           0x695
#define CWG1EN_position                          0x7
#define CWG1EN_size                              0x1
#define CWG1EN_value_mask                        0x80
#define CWG1EN_clear_mask                        0x7F

#define G1EN                                     0x7
#define G1EN_address                             0x695
#define G1EN_position                            0x7
#define G1EN_size                                0x1
#define G1EN_value_mask                          0x80
#define G1EN_clear_mask                          0x7F

#define CWG1CON0_EN                              0x7
#define CWG1CON0_EN_address                      0x695
#define CWG1CON0_EN_position                     0x7
#define CWG1CON0_EN_size                         0x1
#define CWG1CON0_EN_value_mask                   0x80
#define CWG1CON0_EN_clear_mask                   0x7F


/*------------------------------------------------------------------------------#
| CWG1CON1                                                                0x696 |
#-------------------------------------------------------------------------------#
| - | - | CWG1CON1_IN | - | CWG1CON1_POLD | CWG1POLC | CWG1CON1_POLB | CWG1POLA |
#-------------------------------------------------------------------------------#
| 7 | 6 | 5           | 4 | 3             | 2        | 1             | 0        |
#------------------------------------------------------------------------------*/

#define CWG1CON1                                 0x0
#define CWG1CON1_address                         0x696
#define CWG1CON1_position                        0x0
#define CWG1CON1_size                            0x8
#define CWG1CON1_value_mask                      0xFF
#define CWG1CON1_clear_mask                      0x0

#define CWG1POLA                                 0x0
#define CWG1POLA_address                         0x696
#define CWG1POLA_position                        0x0
#define CWG1POLA_size                            0x1
#define CWG1POLA_value_mask                      0x1
#define CWG1POLA_clear_mask                      0xFE

#define CWG1CON1_POLA                            0x0
#define CWG1CON1_POLA_address                    0x696
#define CWG1CON1_POLA_position                   0x0
#define CWG1CON1_POLA_size                       0x1
#define CWG1CON1_POLA_value_mask                 0x1
#define CWG1CON1_POLA_clear_mask                 0xFE

#define CWG1CON1_POLB                            0x1
#define CWG1CON1_POLB_address                    0x696
#define CWG1CON1_POLB_position                   0x1
#define CWG1CON1_POLB_size                       0x1
#define CWG1CON1_POLB_value_mask                 0x2
#define CWG1CON1_POLB_clear_mask                 0xFD

#define CWG1POLB                                 0x1
#define CWG1POLB_address                         0x696
#define CWG1POLB_position                        0x1
#define CWG1POLB_size                            0x1
#define CWG1POLB_value_mask                      0x2
#define CWG1POLB_clear_mask                      0xFD

#define CWG1POLC                                 0x2
#define CWG1POLC_address                         0x696
#define CWG1POLC_position                        0x2
#define CWG1POLC_size                            0x1
#define CWG1POLC_value_mask                      0x4
#define CWG1POLC_clear_mask                      0xFB

#define CWG1CON1_POLC                            0x2
#define CWG1CON1_POLC_address                    0x696
#define CWG1CON1_POLC_position                   0x2
#define CWG1CON1_POLC_size                       0x1
#define CWG1CON1_POLC_value_mask                 0x4
#define CWG1CON1_POLC_clear_mask                 0xFB

#define CWG1CON1_POLD                            0x3
#define CWG1CON1_POLD_address                    0x696
#define CWG1CON1_POLD_position                   0x3
#define CWG1CON1_POLD_size                       0x1
#define CWG1CON1_POLD_value_mask                 0x8
#define CWG1CON1_POLD_clear_mask                 0xF7

#define CWG1POLD                                 0x3
#define CWG1POLD_address                         0x696
#define CWG1POLD_position                        0x3
#define CWG1POLD_size                            0x1
#define CWG1POLD_value_mask                      0x8
#define CWG1POLD_clear_mask                      0xF7

#define CWG1CON1_IN                              0x5
#define CWG1CON1_IN_address                      0x696
#define CWG1CON1_IN_position                     0x5
#define CWG1CON1_IN_size                         0x1
#define CWG1CON1_IN_value_mask                   0x20
#define CWG1CON1_IN_clear_mask                   0xDF

#define CWG1IN                                   0x5
#define CWG1IN_address                           0x696
#define CWG1IN_position                          0x5
#define CWG1IN_size                              0x1
#define CWG1IN_value_mask                        0x20
#define CWG1IN_clear_mask                        0xDF


/*---------------------------------------------------------------------------------------------------#
| CWG1AS0                                                                                      0x697 |
#----------------------------------------------------------------------------------------------------#
| CWG1SHUTDOWN | CWG1AS0_REN | CWG1AS0_LSBD1 | CWG1AS0_LSBD0 | CWG1AS0_LSAC1 | CWG1AS0_LSAC0 | - | - |
#----------------------------------------------------------------------------------------------------#
| 7            | 6           | 5             | 4             | 3             | 2             | 1 | 0 |
#---------------------------------------------------------------------------------------------------*/

#define CWG1AS0                                  0x0
#define CWG1AS0_address                          0x697
#define CWG1AS0_position                         0x0
#define CWG1AS0_size                             0x8
#define CWG1AS0_value_mask                       0xFF
#define CWG1AS0_clear_mask                       0x0

#define CWG1LSAC                                 0x2
#define CWG1LSAC_address                         0x697
#define CWG1LSAC_position                        0x2
#define CWG1LSAC_size                            0x2
#define CWG1LSAC_value_mask                      0xC
#define CWG1LSAC_clear_mask                      0xF3

#define CWG1AS0_LSAC0                            0x2
#define CWG1AS0_LSAC0_address                    0x697
#define CWG1AS0_LSAC0_position                   0x2
#define CWG1AS0_LSAC0_size                       0x1
#define CWG1AS0_LSAC0_value_mask                 0x4
#define CWG1AS0_LSAC0_clear_mask                 0xFB

#define CWG1AS0_LSAC                             0x2
#define CWG1AS0_LSAC_address                     0x697
#define CWG1AS0_LSAC_position                    0x2
#define CWG1AS0_LSAC_size                        0x2
#define CWG1AS0_LSAC_value_mask                  0xC
#define CWG1AS0_LSAC_clear_mask                  0xF3

#define CWG1LSAC0                                0x2
#define CWG1LSAC0_address                        0x697
#define CWG1LSAC0_position                       0x2
#define CWG1LSAC0_size                           0x1
#define CWG1LSAC0_value_mask                     0x4
#define CWG1LSAC0_clear_mask                     0xFB

#define CWG1AS0_LSAC1                            0x3
#define CWG1AS0_LSAC1_address                    0x697
#define CWG1AS0_LSAC1_position                   0x3
#define CWG1AS0_LSAC1_size                       0x1
#define CWG1AS0_LSAC1_value_mask                 0x8
#define CWG1AS0_LSAC1_clear_mask                 0xF7

#define CWG1LSAC1                                0x3
#define CWG1LSAC1_address                        0x697
#define CWG1LSAC1_position                       0x3
#define CWG1LSAC1_size                           0x1
#define CWG1LSAC1_value_mask                     0x8
#define CWG1LSAC1_clear_mask                     0xF7

#define CWG1AS0_LSBD0                            0x4
#define CWG1AS0_LSBD0_address                    0x697
#define CWG1AS0_LSBD0_position                   0x4
#define CWG1AS0_LSBD0_size                       0x1
#define CWG1AS0_LSBD0_value_mask                 0x10
#define CWG1AS0_LSBD0_clear_mask                 0xEF

#define CWG1LSBD0                                0x4
#define CWG1LSBD0_address                        0x697
#define CWG1LSBD0_position                       0x4
#define CWG1LSBD0_size                           0x1
#define CWG1LSBD0_value_mask                     0x10
#define CWG1LSBD0_clear_mask                     0xEF

#define CWG1LSBD                                 0x4
#define CWG1LSBD_address                         0x697
#define CWG1LSBD_position                        0x4
#define CWG1LSBD_size                            0x2
#define CWG1LSBD_value_mask                      0x30
#define CWG1LSBD_clear_mask                      0xCF

#define CWG1AS0_LSBD                             0x4
#define CWG1AS0_LSBD_address                     0x697
#define CWG1AS0_LSBD_position                    0x4
#define CWG1AS0_LSBD_size                        0x2
#define CWG1AS0_LSBD_value_mask                  0x30
#define CWG1AS0_LSBD_clear_mask                  0xCF

#define CWG1LSBD1                                0x5
#define CWG1LSBD1_address                        0x697
#define CWG1LSBD1_position                       0x5
#define CWG1LSBD1_size                           0x1
#define CWG1LSBD1_value_mask                     0x20
#define CWG1LSBD1_clear_mask                     0xDF

#define CWG1AS0_LSBD1                            0x5
#define CWG1AS0_LSBD1_address                    0x697
#define CWG1AS0_LSBD1_position                   0x5
#define CWG1AS0_LSBD1_size                       0x1
#define CWG1AS0_LSBD1_value_mask                 0x20
#define CWG1AS0_LSBD1_clear_mask                 0xDF

#define CWG1AS0_REN                              0x6
#define CWG1AS0_REN_address                      0x697
#define CWG1AS0_REN_position                     0x6
#define CWG1AS0_REN_size                         0x1
#define CWG1AS0_REN_value_mask                   0x40
#define CWG1AS0_REN_clear_mask                   0xBF

#define CWG1REN                                  0x6
#define CWG1REN_address                          0x697
#define CWG1REN_position                         0x6
#define CWG1REN_size                             0x1
#define CWG1REN_value_mask                       0x40
#define CWG1REN_clear_mask                       0xBF

#define CWG1AS0_SHUTDOWN                         0x7
#define CWG1AS0_SHUTDOWN_address                 0x697
#define CWG1AS0_SHUTDOWN_position                0x7
#define CWG1AS0_SHUTDOWN_size                    0x1
#define CWG1AS0_SHUTDOWN_value_mask              0x80
#define CWG1AS0_SHUTDOWN_clear_mask              0x7F

#define CWG1SHUTDOWN                             0x7
#define CWG1SHUTDOWN_address                     0x697
#define CWG1SHUTDOWN_position                    0x7
#define CWG1SHUTDOWN_size                        0x1
#define CWG1SHUTDOWN_value_mask                  0x80
#define CWG1SHUTDOWN_clear_mask                  0x7F


/*-------------------------------------------------------------------------------------#
| CWG1AS1                                                                        0x698 |
#--------------------------------------------------------------------------------------#
| - | - | - | CWG1AS1_AS4E | CWG1AS1_AS3E | CWG1AS1_AS2E | CWG1AS1_AS1E | CWG1AS1_AS0E |
#--------------------------------------------------------------------------------------#
| 7 | 6 | 5 | 4            | 3            | 2            | 1            | 0            |
#-------------------------------------------------------------------------------------*/

#define CWG1AS1                                  0x0
#define CWG1AS1_address                          0x698
#define CWG1AS1_position                         0x0
#define CWG1AS1_size                             0x8
#define CWG1AS1_value_mask                       0xFF
#define CWG1AS1_clear_mask                       0x0

#define CWG1AS1_AS0E                             0x0
#define CWG1AS1_AS0E_address                     0x698
#define CWG1AS1_AS0E_position                    0x0
#define CWG1AS1_AS0E_size                        0x1
#define CWG1AS1_AS0E_value_mask                  0x1
#define CWG1AS1_AS0E_clear_mask                  0xFE

#define CWG1AS1_AS1E                             0x1
#define CWG1AS1_AS1E_address                     0x698
#define CWG1AS1_AS1E_position                    0x1
#define CWG1AS1_AS1E_size                        0x1
#define CWG1AS1_AS1E_value_mask                  0x2
#define CWG1AS1_AS1E_clear_mask                  0xFD

#define CWG1AS1_AS2E                             0x2
#define CWG1AS1_AS2E_address                     0x698
#define CWG1AS1_AS2E_position                    0x2
#define CWG1AS1_AS2E_size                        0x1
#define CWG1AS1_AS2E_value_mask                  0x4
#define CWG1AS1_AS2E_clear_mask                  0xFB

#define CWG1AS1_AS3E                             0x3
#define CWG1AS1_AS3E_address                     0x698
#define CWG1AS1_AS3E_position                    0x3
#define CWG1AS1_AS3E_size                        0x1
#define CWG1AS1_AS3E_value_mask                  0x8
#define CWG1AS1_AS3E_clear_mask                  0xF7

#define CWG1AS1_AS4E                             0x4
#define CWG1AS1_AS4E_address                     0x698
#define CWG1AS1_AS4E_position                    0x4
#define CWG1AS1_AS4E_size                        0x1
#define CWG1AS1_AS4E_value_mask                  0x10
#define CWG1AS1_AS4E_clear_mask                  0xEF


/*------------------------------------------------------------------------------------------------------#
| CWG1STR                                                                                         0x699 |
#-------------------------------------------------------------------------------------------------------#
| CWG1STR_OVRD | CWG1STR_OVRC | CWG1STR_OVRB | CWG1STR_OVRA | CWG1STRD | CWG1STRC | CWG1STRB | CWG1STRA |
#-------------------------------------------------------------------------------------------------------#
| 7            | 6            | 5            | 4            | 3        | 2        | 1        | 0        |
#------------------------------------------------------------------------------------------------------*/

#define CWG1STR                                  0x0
#define CWG1STR_address                          0x699
#define CWG1STR_position                         0x0
#define CWG1STR_size                             0x8
#define CWG1STR_value_mask                       0xFF
#define CWG1STR_clear_mask                       0x0

#define CWG1STRA                                 0x0
#define CWG1STRA_address                         0x699
#define CWG1STRA_position                        0x0
#define CWG1STRA_size                            0x1
#define CWG1STRA_value_mask                      0x1
#define CWG1STRA_clear_mask                      0xFE

#define CWG1STR_STRA                             0x0
#define CWG1STR_STRA_address                     0x699
#define CWG1STR_STRA_position                    0x0
#define CWG1STR_STRA_size                        0x1
#define CWG1STR_STRA_value_mask                  0x1
#define CWG1STR_STRA_clear_mask                  0xFE

#define CWG1STRB                                 0x1
#define CWG1STRB_address                         0x699
#define CWG1STRB_position                        0x1
#define CWG1STRB_size                            0x1
#define CWG1STRB_value_mask                      0x2
#define CWG1STRB_clear_mask                      0xFD

#define CWG1STR_STRB                             0x1
#define CWG1STR_STRB_address                     0x699
#define CWG1STR_STRB_position                    0x1
#define CWG1STR_STRB_size                        0x1
#define CWG1STR_STRB_value_mask                  0x2
#define CWG1STR_STRB_clear_mask                  0xFD

#define CWG1STRC                                 0x2
#define CWG1STRC_address                         0x699
#define CWG1STRC_position                        0x2
#define CWG1STRC_size                            0x1
#define CWG1STRC_value_mask                      0x4
#define CWG1STRC_clear_mask                      0xFB

#define CWG1STR_STRC                             0x2
#define CWG1STR_STRC_address                     0x699
#define CWG1STR_STRC_position                    0x2
#define CWG1STR_STRC_size                        0x1
#define CWG1STR_STRC_value_mask                  0x4
#define CWG1STR_STRC_clear_mask                  0xFB

#define CWG1STR_STRD                             0x3
#define CWG1STR_STRD_address                     0x699
#define CWG1STR_STRD_position                    0x3
#define CWG1STR_STRD_size                        0x1
#define CWG1STR_STRD_value_mask                  0x8
#define CWG1STR_STRD_clear_mask                  0xF7

#define CWG1STRD                                 0x3
#define CWG1STRD_address                         0x699
#define CWG1STRD_position                        0x3
#define CWG1STRD_size                            0x1
#define CWG1STRD_value_mask                      0x8
#define CWG1STRD_clear_mask                      0xF7

#define CWG1OVRA                                 0x4
#define CWG1OVRA_address                         0x699
#define CWG1OVRA_position                        0x4
#define CWG1OVRA_size                            0x1
#define CWG1OVRA_value_mask                      0x10
#define CWG1OVRA_clear_mask                      0xEF

#define CWG1STR_OVRA                             0x4
#define CWG1STR_OVRA_address                     0x699
#define CWG1STR_OVRA_position                    0x4
#define CWG1STR_OVRA_size                        0x1
#define CWG1STR_OVRA_value_mask                  0x10
#define CWG1STR_OVRA_clear_mask                  0xEF

#define CWG1OVRB                                 0x5
#define CWG1OVRB_address                         0x699
#define CWG1OVRB_position                        0x5
#define CWG1OVRB_size                            0x1
#define CWG1OVRB_value_mask                      0x20
#define CWG1OVRB_clear_mask                      0xDF

#define CWG1STR_OVRB                             0x5
#define CWG1STR_OVRB_address                     0x699
#define CWG1STR_OVRB_position                    0x5
#define CWG1STR_OVRB_size                        0x1
#define CWG1STR_OVRB_value_mask                  0x20
#define CWG1STR_OVRB_clear_mask                  0xDF

#define CWG1OVRC                                 0x6
#define CWG1OVRC_address                         0x699
#define CWG1OVRC_position                        0x6
#define CWG1OVRC_size                            0x1
#define CWG1OVRC_value_mask                      0x40
#define CWG1OVRC_clear_mask                      0xBF

#define CWG1STR_OVRC                             0x6
#define CWG1STR_OVRC_address                     0x699
#define CWG1STR_OVRC_position                    0x6
#define CWG1STR_OVRC_size                        0x1
#define CWG1STR_OVRC_value_mask                  0x40
#define CWG1STR_OVRC_clear_mask                  0xBF

#define CWG1OVRD                                 0x7
#define CWG1OVRD_address                         0x699
#define CWG1OVRD_position                        0x7
#define CWG1OVRD_size                            0x1
#define CWG1OVRD_value_mask                      0x80
#define CWG1OVRD_clear_mask                      0x7F

#define CWG1STR_OVRD                             0x7
#define CWG1STR_OVRD_address                     0x699
#define CWG1STR_OVRD_position                    0x7
#define CWG1STR_OVRD_size                        0x1
#define CWG1STR_OVRD_value_mask                  0x80
#define CWG1STR_OVRD_clear_mask                  0x7F


/*-----------------------------------#
| CWG2CLKCON                   0x711 |
#------------------------------------#
| - | - | - | - | - | - | - | CWG2CS |
#------------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0      |
#-----------------------------------*/

#define CWG2CLKCON                               0x0
#define CWG2CLKCON_address                       0x711
#define CWG2CLKCON_position                      0x0
#define CWG2CLKCON_size                          0x8
#define CWG2CLKCON_value_mask                    0xFF
#define CWG2CLKCON_clear_mask                    0x0

#define CWG2CS                                   0x0
#define CWG2CS_address                           0x711
#define CWG2CS_position                          0x0
#define CWG2CS_size                              0x1
#define CWG2CS_value_mask                        0x1
#define CWG2CS_clear_mask                        0xFE

#define CWG2CLKCON_CS                            0x0
#define CWG2CLKCON_CS_address                    0x711
#define CWG2CLKCON_CS_position                   0x0
#define CWG2CLKCON_CS_size                       0x1
#define CWG2CLKCON_CS_value_mask                 0x1
#define CWG2CLKCON_CS_clear_mask                 0xFE


/*----------------------------------------------------------#
| CWG2DAT                                             0x712 |
#-----------------------------------------------------------#
| - | - | - | - | CWG2DAT3 | CWG2DAT2 | CWG2DAT1 | CWG2DAT0 |
#-----------------------------------------------------------#
| 7 | 6 | 5 | 4 | 3        | 2        | 1        | 0        |
#----------------------------------------------------------*/

#define CWG2DAT                                  0x0
#define CWG2DAT_address                          0x712
#define CWG2DAT_position                         0x0
#define CWG2DAT_size                             0x8
#define CWG2DAT_value_mask                       0xFF
#define CWG2DAT_clear_mask                       0x0

#define CWG2DAT0                                 0x0
#define CWG2DAT0_address                         0x712
#define CWG2DAT0_position                        0x0
#define CWG2DAT0_size                            0x1
#define CWG2DAT0_value_mask                      0x1
#define CWG2DAT0_clear_mask                      0xFE

#define CWG2DAT_DAT                              0x0
#define CWG2DAT_DAT_address                      0x712
#define CWG2DAT_DAT_position                     0x0
#define CWG2DAT_DAT_size                         0x4
#define CWG2DAT_DAT_value_mask                   0xF
#define CWG2DAT_DAT_clear_mask                   0xF0

#define CWG2DAT1                                 0x1
#define CWG2DAT1_address                         0x712
#define CWG2DAT1_position                        0x1
#define CWG2DAT1_size                            0x1
#define CWG2DAT1_value_mask                      0x2
#define CWG2DAT1_clear_mask                      0xFD

#define CWG2DAT2                                 0x2
#define CWG2DAT2_address                         0x712
#define CWG2DAT2_position                        0x2
#define CWG2DAT2_size                            0x1
#define CWG2DAT2_value_mask                      0x4
#define CWG2DAT2_clear_mask                      0xFB

#define CWG2DAT3                                 0x3
#define CWG2DAT3_address                         0x712
#define CWG2DAT3_position                        0x3
#define CWG2DAT3_size                            0x1
#define CWG2DAT3_value_mask                      0x8
#define CWG2DAT3_clear_mask                      0xF7


/*------------------------------------------------------------------------------------------------#
| CWG2DBR                                                                                   0x713 |
#-------------------------------------------------------------------------------------------------#
| - | - | CWG2DBR_DBR5 | CWG2DBR_DBR4 | CWG2DBR_DBR3 | CWG2DBR_DBR2 | CWG2DBR_DBR1 | CWG2DBR_DBR0 |
#-------------------------------------------------------------------------------------------------#
| 7 | 6 | 5            | 4            | 3            | 2            | 1            | 0            |
#------------------------------------------------------------------------------------------------*/

#define CWG2DBR_DBR                              0x0
#define CWG2DBR_DBR_address                      0x713
#define CWG2DBR_DBR_position                     0x0
#define CWG2DBR_DBR_size                         0x6
#define CWG2DBR_DBR_value_mask                   0x3F
#define CWG2DBR_DBR_clear_mask                   0xC0

#define CWG2DBR_DBR0                             0x0
#define CWG2DBR_DBR0_address                     0x713
#define CWG2DBR_DBR0_position                    0x0
#define CWG2DBR_DBR0_size                        0x1
#define CWG2DBR_DBR0_value_mask                  0x1
#define CWG2DBR_DBR0_clear_mask                  0xFE

#define CWG2DBR                                  0x0
#define CWG2DBR_address                          0x713
#define CWG2DBR_position                         0x0
#define CWG2DBR_size                             0x6
#define CWG2DBR_value_mask                       0x3F
#define CWG2DBR_clear_mask                       0xC0

#define CWG2DBR0                                 0x0
#define CWG2DBR0_address                         0x713
#define CWG2DBR0_position                        0x0
#define CWG2DBR0_size                            0x1
#define CWG2DBR0_value_mask                      0x1
#define CWG2DBR0_clear_mask                      0xFE

#define CWG2DBR_DBR1                             0x1
#define CWG2DBR_DBR1_address                     0x713
#define CWG2DBR_DBR1_position                    0x1
#define CWG2DBR_DBR1_size                        0x1
#define CWG2DBR_DBR1_value_mask                  0x2
#define CWG2DBR_DBR1_clear_mask                  0xFD

#define CWG2DBR1                                 0x1
#define CWG2DBR1_address                         0x713
#define CWG2DBR1_position                        0x1
#define CWG2DBR1_size                            0x1
#define CWG2DBR1_value_mask                      0x2
#define CWG2DBR1_clear_mask                      0xFD

#define CWG2DBR_DBR2                             0x2
#define CWG2DBR_DBR2_address                     0x713
#define CWG2DBR_DBR2_position                    0x2
#define CWG2DBR_DBR2_size                        0x1
#define CWG2DBR_DBR2_value_mask                  0x4
#define CWG2DBR_DBR2_clear_mask                  0xFB

#define CWG2DBR2                                 0x2
#define CWG2DBR2_address                         0x713
#define CWG2DBR2_position                        0x2
#define CWG2DBR2_size                            0x1
#define CWG2DBR2_value_mask                      0x4
#define CWG2DBR2_clear_mask                      0xFB

#define CWG2DBR_DBR3                             0x3
#define CWG2DBR_DBR3_address                     0x713
#define CWG2DBR_DBR3_position                    0x3
#define CWG2DBR_DBR3_size                        0x1
#define CWG2DBR_DBR3_value_mask                  0x8
#define CWG2DBR_DBR3_clear_mask                  0xF7

#define CWG2DBR3                                 0x3
#define CWG2DBR3_address                         0x713
#define CWG2DBR3_position                        0x3
#define CWG2DBR3_size                            0x1
#define CWG2DBR3_value_mask                      0x8
#define CWG2DBR3_clear_mask                      0xF7

#define CWG2DBR_DBR4                             0x4
#define CWG2DBR_DBR4_address                     0x713
#define CWG2DBR_DBR4_position                    0x4
#define CWG2DBR_DBR4_size                        0x1
#define CWG2DBR_DBR4_value_mask                  0x10
#define CWG2DBR_DBR4_clear_mask                  0xEF

#define CWG2DBR4                                 0x4
#define CWG2DBR4_address                         0x713
#define CWG2DBR4_position                        0x4
#define CWG2DBR4_size                            0x1
#define CWG2DBR4_value_mask                      0x10
#define CWG2DBR4_clear_mask                      0xEF

#define CWG2DBR_DBR5                             0x5
#define CWG2DBR_DBR5_address                     0x713
#define CWG2DBR_DBR5_position                    0x5
#define CWG2DBR_DBR5_size                        0x1
#define CWG2DBR_DBR5_value_mask                  0x20
#define CWG2DBR_DBR5_clear_mask                  0xDF

#define CWG2DBR5                                 0x5
#define CWG2DBR5_address                         0x713
#define CWG2DBR5_position                        0x5
#define CWG2DBR5_size                            0x1
#define CWG2DBR5_value_mask                      0x20
#define CWG2DBR5_clear_mask                      0xDF


/*------------------------------------------------------------------------------------#
| CWG2DBF                                                                       0x714 |
#-------------------------------------------------------------------------------------#
| - | - | CWG2DBF5 | CWG2DBF4 | CWG2DBF3 | CWG2DBF_DBF2 | CWG2DBF_DBF1 | CWG2DBF_DBF0 |
#-------------------------------------------------------------------------------------#
| 7 | 6 | 5        | 4        | 3        | 2            | 1            | 0            |
#------------------------------------------------------------------------------------*/

#define CWG2DBF                                  0x0
#define CWG2DBF_address                          0x714
#define CWG2DBF_position                         0x0
#define CWG2DBF_size                             0x6
#define CWG2DBF_value_mask                       0x3F
#define CWG2DBF_clear_mask                       0xC0

#define CWG2DBF_DBF0                             0x0
#define CWG2DBF_DBF0_address                     0x714
#define CWG2DBF_DBF0_position                    0x0
#define CWG2DBF_DBF0_size                        0x1
#define CWG2DBF_DBF0_value_mask                  0x1
#define CWG2DBF_DBF0_clear_mask                  0xFE

#define CWG2DBF_DBF                              0x0
#define CWG2DBF_DBF_address                      0x714
#define CWG2DBF_DBF_position                     0x0
#define CWG2DBF_DBF_size                         0x6
#define CWG2DBF_DBF_value_mask                   0x3F
#define CWG2DBF_DBF_clear_mask                   0xC0

#define CWG2DBF0                                 0x0
#define CWG2DBF0_address                         0x714
#define CWG2DBF0_position                        0x0
#define CWG2DBF0_size                            0x1
#define CWG2DBF0_value_mask                      0x1
#define CWG2DBF0_clear_mask                      0xFE

#define CWG2DBF_DBF1                             0x1
#define CWG2DBF_DBF1_address                     0x714
#define CWG2DBF_DBF1_position                    0x1
#define CWG2DBF_DBF1_size                        0x1
#define CWG2DBF_DBF1_value_mask                  0x2
#define CWG2DBF_DBF1_clear_mask                  0xFD

#define CWG2DBF1                                 0x1
#define CWG2DBF1_address                         0x714
#define CWG2DBF1_position                        0x1
#define CWG2DBF1_size                            0x1
#define CWG2DBF1_value_mask                      0x2
#define CWG2DBF1_clear_mask                      0xFD

#define CWG2DBF_DBF2                             0x2
#define CWG2DBF_DBF2_address                     0x714
#define CWG2DBF_DBF2_position                    0x2
#define CWG2DBF_DBF2_size                        0x1
#define CWG2DBF_DBF2_value_mask                  0x4
#define CWG2DBF_DBF2_clear_mask                  0xFB

#define CWG2DBF2                                 0x2
#define CWG2DBF2_address                         0x714
#define CWG2DBF2_position                        0x2
#define CWG2DBF2_size                            0x1
#define CWG2DBF2_value_mask                      0x4
#define CWG2DBF2_clear_mask                      0xFB

#define CWG2DBF_DBF3                             0x3
#define CWG2DBF_DBF3_address                     0x714
#define CWG2DBF_DBF3_position                    0x3
#define CWG2DBF_DBF3_size                        0x1
#define CWG2DBF_DBF3_value_mask                  0x8
#define CWG2DBF_DBF3_clear_mask                  0xF7

#define CWG2DBF3                                 0x3
#define CWG2DBF3_address                         0x714
#define CWG2DBF3_position                        0x3
#define CWG2DBF3_size                            0x1
#define CWG2DBF3_value_mask                      0x8
#define CWG2DBF3_clear_mask                      0xF7

#define CWG2DBF_DBF4                             0x4
#define CWG2DBF_DBF4_address                     0x714
#define CWG2DBF_DBF4_position                    0x4
#define CWG2DBF_DBF4_size                        0x1
#define CWG2DBF_DBF4_value_mask                  0x10
#define CWG2DBF_DBF4_clear_mask                  0xEF

#define CWG2DBF4                                 0x4
#define CWG2DBF4_address                         0x714
#define CWG2DBF4_position                        0x4
#define CWG2DBF4_size                            0x1
#define CWG2DBF4_value_mask                      0x10
#define CWG2DBF4_clear_mask                      0xEF

#define CWG2DBF5                                 0x5
#define CWG2DBF5_address                         0x714
#define CWG2DBF5_position                        0x5
#define CWG2DBF5_size                            0x1
#define CWG2DBF5_value_mask                      0x20
#define CWG2DBF5_clear_mask                      0xDF

#define CWG2DBF_DBF5                             0x5
#define CWG2DBF_DBF5_address                     0x714
#define CWG2DBF_DBF5_position                    0x5
#define CWG2DBF_DBF5_size                        0x1
#define CWG2DBF_DBF5_value_mask                  0x20
#define CWG2DBF_DBF5_clear_mask                  0xDF


/*---------------------------------------------------------------------#
| CWG2CON0                                                       0x715 |
#----------------------------------------------------------------------#
| CWG2CON0_EN | CWG2LD | - | - | - | CWG2MODE2 | CWG2MODE1 | CWG2MODE0 |
#----------------------------------------------------------------------#
| 7           | 6      | 5 | 4 | 3 | 2         | 1         | 0         |
#---------------------------------------------------------------------*/

#define CWG2CON0                                 0x0
#define CWG2CON0_address                         0x715
#define CWG2CON0_position                        0x0
#define CWG2CON0_size                            0x8
#define CWG2CON0_value_mask                      0xFF
#define CWG2CON0_clear_mask                      0x0

#define CWG2MODE                                 0x0
#define CWG2MODE_address                         0x715
#define CWG2MODE_position                        0x0
#define CWG2MODE_size                            0x3
#define CWG2MODE_value_mask                      0x7
#define CWG2MODE_clear_mask                      0xF8

#define CWG2MODE0                                0x0
#define CWG2MODE0_address                        0x715
#define CWG2MODE0_position                       0x0
#define CWG2MODE0_size                           0x1
#define CWG2MODE0_value_mask                     0x1
#define CWG2MODE0_clear_mask                     0xFE

#define CWG2CON0_MODE                            0x0
#define CWG2CON0_MODE_address                    0x715
#define CWG2CON0_MODE_position                   0x0
#define CWG2CON0_MODE_size                       0x3
#define CWG2CON0_MODE_value_mask                 0x7
#define CWG2CON0_MODE_clear_mask                 0xF8

#define CWG2CON0_MODE0                           0x0
#define CWG2CON0_MODE0_address                   0x715
#define CWG2CON0_MODE0_position                  0x0
#define CWG2CON0_MODE0_size                      0x1
#define CWG2CON0_MODE0_value_mask                0x1
#define CWG2CON0_MODE0_clear_mask                0xFE

#define CWG2MODE1                                0x1
#define CWG2MODE1_address                        0x715
#define CWG2MODE1_position                       0x1
#define CWG2MODE1_size                           0x1
#define CWG2MODE1_value_mask                     0x2
#define CWG2MODE1_clear_mask                     0xFD

#define CWG2CON0_MODE1                           0x1
#define CWG2CON0_MODE1_address                   0x715
#define CWG2CON0_MODE1_position                  0x1
#define CWG2CON0_MODE1_size                      0x1
#define CWG2CON0_MODE1_value_mask                0x2
#define CWG2CON0_MODE1_clear_mask                0xFD

#define CWG2MODE2                                0x2
#define CWG2MODE2_address                        0x715
#define CWG2MODE2_position                       0x2
#define CWG2MODE2_size                           0x1
#define CWG2MODE2_value_mask                     0x4
#define CWG2MODE2_clear_mask                     0xFB

#define CWG2CON0_MODE2                           0x2
#define CWG2CON0_MODE2_address                   0x715
#define CWG2CON0_MODE2_position                  0x2
#define CWG2CON0_MODE2_size                      0x1
#define CWG2CON0_MODE2_value_mask                0x4
#define CWG2CON0_MODE2_clear_mask                0xFB

#define CWG2LD                                   0x6
#define CWG2LD_address                           0x715
#define CWG2LD_position                          0x6
#define CWG2LD_size                              0x1
#define CWG2LD_value_mask                        0x40
#define CWG2LD_clear_mask                        0xBF

#define CWG2CON0_LD                              0x6
#define CWG2CON0_LD_address                      0x715
#define CWG2CON0_LD_position                     0x6
#define CWG2CON0_LD_size                         0x1
#define CWG2CON0_LD_value_mask                   0x40
#define CWG2CON0_LD_clear_mask                   0xBF

#define CWG2CON0_EN                              0x7
#define CWG2CON0_EN_address                      0x715
#define CWG2CON0_EN_position                     0x7
#define CWG2CON0_EN_size                         0x1
#define CWG2CON0_EN_value_mask                   0x80
#define CWG2CON0_EN_clear_mask                   0x7F

#define CWG2EN                                   0x7
#define CWG2EN_address                           0x715
#define CWG2EN_position                          0x7
#define CWG2EN_size                              0x1
#define CWG2EN_value_mask                        0x80
#define CWG2EN_clear_mask                        0x7F

#define G2EN                                     0x7
#define G2EN_address                             0x715
#define G2EN_position                            0x7
#define G2EN_size                                0x1
#define G2EN_value_mask                          0x80
#define G2EN_clear_mask                          0x7F


/*--------------------------------------------------------------------#
| CWG2CON1                                                      0x716 |
#---------------------------------------------------------------------#
| - | - | CWG2IN | - | CWG2CON1_POLD | CWG2POLC | CWG2POLB | CWG2POLA |
#---------------------------------------------------------------------#
| 7 | 6 | 5      | 4 | 3             | 2        | 1        | 0        |
#--------------------------------------------------------------------*/

#define CWG2CON1                                 0x0
#define CWG2CON1_address                         0x716
#define CWG2CON1_position                        0x0
#define CWG2CON1_size                            0x8
#define CWG2CON1_value_mask                      0xFF
#define CWG2CON1_clear_mask                      0x0

#define CWG2POLA                                 0x0
#define CWG2POLA_address                         0x716
#define CWG2POLA_position                        0x0
#define CWG2POLA_size                            0x1
#define CWG2POLA_value_mask                      0x1
#define CWG2POLA_clear_mask                      0xFE

#define CWG2CON1_POLA                            0x0
#define CWG2CON1_POLA_address                    0x716
#define CWG2CON1_POLA_position                   0x0
#define CWG2CON1_POLA_size                       0x1
#define CWG2CON1_POLA_value_mask                 0x1
#define CWG2CON1_POLA_clear_mask                 0xFE

#define CWG2POLB                                 0x1
#define CWG2POLB_address                         0x716
#define CWG2POLB_position                        0x1
#define CWG2POLB_size                            0x1
#define CWG2POLB_value_mask                      0x2
#define CWG2POLB_clear_mask                      0xFD

#define CWG2CON1_POLB                            0x1
#define CWG2CON1_POLB_address                    0x716
#define CWG2CON1_POLB_position                   0x1
#define CWG2CON1_POLB_size                       0x1
#define CWG2CON1_POLB_value_mask                 0x2
#define CWG2CON1_POLB_clear_mask                 0xFD

#define CWG2POLC                                 0x2
#define CWG2POLC_address                         0x716
#define CWG2POLC_position                        0x2
#define CWG2POLC_size                            0x1
#define CWG2POLC_value_mask                      0x4
#define CWG2POLC_clear_mask                      0xFB

#define CWG2CON1_POLC                            0x2
#define CWG2CON1_POLC_address                    0x716
#define CWG2CON1_POLC_position                   0x2
#define CWG2CON1_POLC_size                       0x1
#define CWG2CON1_POLC_value_mask                 0x4
#define CWG2CON1_POLC_clear_mask                 0xFB

#define CWG2CON1_POLD                            0x3
#define CWG2CON1_POLD_address                    0x716
#define CWG2CON1_POLD_position                   0x3
#define CWG2CON1_POLD_size                       0x1
#define CWG2CON1_POLD_value_mask                 0x8
#define CWG2CON1_POLD_clear_mask                 0xF7

#define CWG2POLD                                 0x3
#define CWG2POLD_address                         0x716
#define CWG2POLD_position                        0x3
#define CWG2POLD_size                            0x1
#define CWG2POLD_value_mask                      0x8
#define CWG2POLD_clear_mask                      0xF7

#define CWG2IN                                   0x5
#define CWG2IN_address                           0x716
#define CWG2IN_position                          0x5
#define CWG2IN_size                              0x1
#define CWG2IN_value_mask                        0x20
#define CWG2IN_clear_mask                        0xDF

#define CWG2CON1_IN                              0x5
#define CWG2CON1_IN_address                      0x716
#define CWG2CON1_IN_position                     0x5
#define CWG2CON1_IN_size                         0x1
#define CWG2CON1_IN_value_mask                   0x20
#define CWG2CON1_IN_clear_mask                   0xDF


/*---------------------------------------------------------------------------------------------------#
| CWG2AS0                                                                                      0x717 |
#----------------------------------------------------------------------------------------------------#
| CWG2AS0_SHUTDOWN | CWG2AS0_REN | CWG2AS0_LSBD1 | CWG2AS0_LSBD0 | CWG2LSAC1 | CWG2AS0_LSAC0 | - | - |
#----------------------------------------------------------------------------------------------------#
| 7                | 6           | 5             | 4             | 3         | 2             | 1 | 0 |
#---------------------------------------------------------------------------------------------------*/

#define CWG2AS0                                  0x0
#define CWG2AS0_address                          0x717
#define CWG2AS0_position                         0x0
#define CWG2AS0_size                             0x8
#define CWG2AS0_value_mask                       0xFF
#define CWG2AS0_clear_mask                       0x0

#define CWG2LSAC                                 0x2
#define CWG2LSAC_address                         0x717
#define CWG2LSAC_position                        0x2
#define CWG2LSAC_size                            0x2
#define CWG2LSAC_value_mask                      0xC
#define CWG2LSAC_clear_mask                      0xF3

#define CWG2AS0_LSAC                             0x2
#define CWG2AS0_LSAC_address                     0x717
#define CWG2AS0_LSAC_position                    0x2
#define CWG2AS0_LSAC_size                        0x2
#define CWG2AS0_LSAC_value_mask                  0xC
#define CWG2AS0_LSAC_clear_mask                  0xF3

#define CWG2LSAC0                                0x2
#define CWG2LSAC0_address                        0x717
#define CWG2LSAC0_position                       0x2
#define CWG2LSAC0_size                           0x1
#define CWG2LSAC0_value_mask                     0x4
#define CWG2LSAC0_clear_mask                     0xFB

#define CWG2AS0_LSAC0                            0x2
#define CWG2AS0_LSAC0_address                    0x717
#define CWG2AS0_LSAC0_position                   0x2
#define CWG2AS0_LSAC0_size                       0x1
#define CWG2AS0_LSAC0_value_mask                 0x4
#define CWG2AS0_LSAC0_clear_mask                 0xFB

#define CWG2LSAC1                                0x3
#define CWG2LSAC1_address                        0x717
#define CWG2LSAC1_position                       0x3
#define CWG2LSAC1_size                           0x1
#define CWG2LSAC1_value_mask                     0x8
#define CWG2LSAC1_clear_mask                     0xF7

#define CWG2AS0_LSAC1                            0x3
#define CWG2AS0_LSAC1_address                    0x717
#define CWG2AS0_LSAC1_position                   0x3
#define CWG2AS0_LSAC1_size                       0x1
#define CWG2AS0_LSAC1_value_mask                 0x8
#define CWG2AS0_LSAC1_clear_mask                 0xF7

#define CWG2AS0_LSBD0                            0x4
#define CWG2AS0_LSBD0_address                    0x717
#define CWG2AS0_LSBD0_position                   0x4
#define CWG2AS0_LSBD0_size                       0x1
#define CWG2AS0_LSBD0_value_mask                 0x10
#define CWG2AS0_LSBD0_clear_mask                 0xEF

#define CWG2LSBD                                 0x4
#define CWG2LSBD_address                         0x717
#define CWG2LSBD_position                        0x4
#define CWG2LSBD_size                            0x2
#define CWG2LSBD_value_mask                      0x30
#define CWG2LSBD_clear_mask                      0xCF

#define CWG2AS0_LSBD                             0x4
#define CWG2AS0_LSBD_address                     0x717
#define CWG2AS0_LSBD_position                    0x4
#define CWG2AS0_LSBD_size                        0x2
#define CWG2AS0_LSBD_value_mask                  0x30
#define CWG2AS0_LSBD_clear_mask                  0xCF

#define CWG2LSBD0                                0x4
#define CWG2LSBD0_address                        0x717
#define CWG2LSBD0_position                       0x4
#define CWG2LSBD0_size                           0x1
#define CWG2LSBD0_value_mask                     0x10
#define CWG2LSBD0_clear_mask                     0xEF

#define CWG2AS0_LSBD1                            0x5
#define CWG2AS0_LSBD1_address                    0x717
#define CWG2AS0_LSBD1_position                   0x5
#define CWG2AS0_LSBD1_size                       0x1
#define CWG2AS0_LSBD1_value_mask                 0x20
#define CWG2AS0_LSBD1_clear_mask                 0xDF

#define CWG2LSBD1                                0x5
#define CWG2LSBD1_address                        0x717
#define CWG2LSBD1_position                       0x5
#define CWG2LSBD1_size                           0x1
#define CWG2LSBD1_value_mask                     0x20
#define CWG2LSBD1_clear_mask                     0xDF

#define CWG2AS0_REN                              0x6
#define CWG2AS0_REN_address                      0x717
#define CWG2AS0_REN_position                     0x6
#define CWG2AS0_REN_size                         0x1
#define CWG2AS0_REN_value_mask                   0x40
#define CWG2AS0_REN_clear_mask                   0xBF

#define CWG2REN                                  0x6
#define CWG2REN_address                          0x717
#define CWG2REN_position                         0x6
#define CWG2REN_size                             0x1
#define CWG2REN_value_mask                       0x40
#define CWG2REN_clear_mask                       0xBF

#define CWG2AS0_SHUTDOWN                         0x7
#define CWG2AS0_SHUTDOWN_address                 0x717
#define CWG2AS0_SHUTDOWN_position                0x7
#define CWG2AS0_SHUTDOWN_size                    0x1
#define CWG2AS0_SHUTDOWN_value_mask              0x80
#define CWG2AS0_SHUTDOWN_clear_mask              0x7F

#define CWG2SHUTDOWN                             0x7
#define CWG2SHUTDOWN_address                     0x717
#define CWG2SHUTDOWN_position                    0x7
#define CWG2SHUTDOWN_size                        0x1
#define CWG2SHUTDOWN_value_mask                  0x80
#define CWG2SHUTDOWN_clear_mask                  0x7F


/*-------------------------------------------------------------------------------------#
| CWG2AS1                                                                        0x718 |
#--------------------------------------------------------------------------------------#
| - | - | - | CWG2AS1_AS4E | CWG2AS1_AS3E | CWG2AS1_AS2E | CWG2AS1_AS1E | CWG2AS1_AS0E |
#--------------------------------------------------------------------------------------#
| 7 | 6 | 5 | 4            | 3            | 2            | 1            | 0            |
#-------------------------------------------------------------------------------------*/

#define CWG2AS1                                  0x0
#define CWG2AS1_address                          0x718
#define CWG2AS1_position                         0x0
#define CWG2AS1_size                             0x8
#define CWG2AS1_value_mask                       0xFF
#define CWG2AS1_clear_mask                       0x0

#define CWG2AS1_AS0E                             0x0
#define CWG2AS1_AS0E_address                     0x718
#define CWG2AS1_AS0E_position                    0x0
#define CWG2AS1_AS0E_size                        0x1
#define CWG2AS1_AS0E_value_mask                  0x1
#define CWG2AS1_AS0E_clear_mask                  0xFE

#define CWG2AS1_AS1E                             0x1
#define CWG2AS1_AS1E_address                     0x718
#define CWG2AS1_AS1E_position                    0x1
#define CWG2AS1_AS1E_size                        0x1
#define CWG2AS1_AS1E_value_mask                  0x2
#define CWG2AS1_AS1E_clear_mask                  0xFD

#define CWG2AS1_AS2E                             0x2
#define CWG2AS1_AS2E_address                     0x718
#define CWG2AS1_AS2E_position                    0x2
#define CWG2AS1_AS2E_size                        0x1
#define CWG2AS1_AS2E_value_mask                  0x4
#define CWG2AS1_AS2E_clear_mask                  0xFB

#define CWG2AS1_AS3E                             0x3
#define CWG2AS1_AS3E_address                     0x718
#define CWG2AS1_AS3E_position                    0x3
#define CWG2AS1_AS3E_size                        0x1
#define CWG2AS1_AS3E_value_mask                  0x8
#define CWG2AS1_AS3E_clear_mask                  0xF7

#define CWG2AS1_AS4E                             0x4
#define CWG2AS1_AS4E_address                     0x718
#define CWG2AS1_AS4E_position                    0x4
#define CWG2AS1_AS4E_size                        0x1
#define CWG2AS1_AS4E_value_mask                  0x10
#define CWG2AS1_AS4E_clear_mask                  0xEF


/*------------------------------------------------------------------------------------------------------------------#
| CWG2STR                                                                                                     0x719 |
#-------------------------------------------------------------------------------------------------------------------#
| CWG2STR_OVRD | CWG2STR_OVRC | CWG2OVRB | CWG2STR_OVRA | CWG2STR_STRD | CWG2STR_STRC | CWG2STR_STRB | CWG2STR_STRA |
#-------------------------------------------------------------------------------------------------------------------#
| 7            | 6            | 5        | 4            | 3            | 2            | 1            | 0            |
#------------------------------------------------------------------------------------------------------------------*/

#define CWG2STR                                  0x0
#define CWG2STR_address                          0x719
#define CWG2STR_position                         0x0
#define CWG2STR_size                             0x8
#define CWG2STR_value_mask                       0xFF
#define CWG2STR_clear_mask                       0x0

#define CWG2STR_STRA                             0x0
#define CWG2STR_STRA_address                     0x719
#define CWG2STR_STRA_position                    0x0
#define CWG2STR_STRA_size                        0x1
#define CWG2STR_STRA_value_mask                  0x1
#define CWG2STR_STRA_clear_mask                  0xFE

#define CWG2STRA                                 0x0
#define CWG2STRA_address                         0x719
#define CWG2STRA_position                        0x0
#define CWG2STRA_size                            0x1
#define CWG2STRA_value_mask                      0x1
#define CWG2STRA_clear_mask                      0xFE

#define CWG2STR_STRB                             0x1
#define CWG2STR_STRB_address                     0x719
#define CWG2STR_STRB_position                    0x1
#define CWG2STR_STRB_size                        0x1
#define CWG2STR_STRB_value_mask                  0x2
#define CWG2STR_STRB_clear_mask                  0xFD

#define CWG2STRB                                 0x1
#define CWG2STRB_address                         0x719
#define CWG2STRB_position                        0x1
#define CWG2STRB_size                            0x1
#define CWG2STRB_value_mask                      0x2
#define CWG2STRB_clear_mask                      0xFD

#define CWG2STR_STRC                             0x2
#define CWG2STR_STRC_address                     0x719
#define CWG2STR_STRC_position                    0x2
#define CWG2STR_STRC_size                        0x1
#define CWG2STR_STRC_value_mask                  0x4
#define CWG2STR_STRC_clear_mask                  0xFB

#define CWG2STRC                                 0x2
#define CWG2STRC_address                         0x719
#define CWG2STRC_position                        0x2
#define CWG2STRC_size                            0x1
#define CWG2STRC_value_mask                      0x4
#define CWG2STRC_clear_mask                      0xFB

#define CWG2STR_STRD                             0x3
#define CWG2STR_STRD_address                     0x719
#define CWG2STR_STRD_position                    0x3
#define CWG2STR_STRD_size                        0x1
#define CWG2STR_STRD_value_mask                  0x8
#define CWG2STR_STRD_clear_mask                  0xF7

#define CWG2STRD                                 0x3
#define CWG2STRD_address                         0x719
#define CWG2STRD_position                        0x3
#define CWG2STRD_size                            0x1
#define CWG2STRD_value_mask                      0x8
#define CWG2STRD_clear_mask                      0xF7

#define CWG2STR_OVRA                             0x4
#define CWG2STR_OVRA_address                     0x719
#define CWG2STR_OVRA_position                    0x4
#define CWG2STR_OVRA_size                        0x1
#define CWG2STR_OVRA_value_mask                  0x10
#define CWG2STR_OVRA_clear_mask                  0xEF

#define CWG2OVRA                                 0x4
#define CWG2OVRA_address                         0x719
#define CWG2OVRA_position                        0x4
#define CWG2OVRA_size                            0x1
#define CWG2OVRA_value_mask                      0x10
#define CWG2OVRA_clear_mask                      0xEF

#define CWG2OVRB                                 0x5
#define CWG2OVRB_address                         0x719
#define CWG2OVRB_position                        0x5
#define CWG2OVRB_size                            0x1
#define CWG2OVRB_value_mask                      0x20
#define CWG2OVRB_clear_mask                      0xDF

#define CWG2STR_OVRB                             0x5
#define CWG2STR_OVRB_address                     0x719
#define CWG2STR_OVRB_position                    0x5
#define CWG2STR_OVRB_size                        0x1
#define CWG2STR_OVRB_value_mask                  0x20
#define CWG2STR_OVRB_clear_mask                  0xDF

#define CWG2STR_OVRC                             0x6
#define CWG2STR_OVRC_address                     0x719
#define CWG2STR_OVRC_position                    0x6
#define CWG2STR_OVRC_size                        0x1
#define CWG2STR_OVRC_value_mask                  0x40
#define CWG2STR_OVRC_clear_mask                  0xBF

#define CWG2OVRC                                 0x6
#define CWG2OVRC_address                         0x719
#define CWG2OVRC_position                        0x6
#define CWG2OVRC_size                            0x1
#define CWG2OVRC_value_mask                      0x40
#define CWG2OVRC_clear_mask                      0xBF

#define CWG2OVRD                                 0x7
#define CWG2OVRD_address                         0x719
#define CWG2OVRD_position                        0x7
#define CWG2OVRD_size                            0x1
#define CWG2OVRD_value_mask                      0x80
#define CWG2OVRD_clear_mask                      0x7F

#define CWG2STR_OVRD                             0x7
#define CWG2STR_OVRD_address                     0x719
#define CWG2STR_OVRD_position                    0x7
#define CWG2STR_OVRD_size                        0x1
#define CWG2STR_OVRD_value_mask                  0x80
#define CWG2STR_OVRD_clear_mask                  0x7F


/*------------------------------------------------------------------------------#
| NVMADRL                                                                 0x891 |
#-------------------------------------------------------------------------------#
| NVMADR7 | NVMADR6 | NVMADR5 | NVMADR4 | NVMADR3 | NVMADR2 | NVMADR1 | NVMADR0 |
#-------------------------------------------------------------------------------#
| 7       | 6       | 5       | 4       | 3       | 2       | 1       | 0       |
#------------------------------------------------------------------------------*/

#define NVMADR0                                  0x0
#define NVMADR0_address                          0x891
#define NVMADR0_position                         0x0
#define NVMADR0_size                             0x1
#define NVMADR0_value_mask                       0x1
#define NVMADR0_clear_mask                       0xFE

#define NVMADRL                                  0x0
#define NVMADRL_address                          0x891
#define NVMADRL_position                         0x0
#define NVMADRL_size                             0x8
#define NVMADRL_value_mask                       0xFF
#define NVMADRL_clear_mask                       0x0

#define NVMADR1                                  0x1
#define NVMADR1_address                          0x891
#define NVMADR1_position                         0x1
#define NVMADR1_size                             0x1
#define NVMADR1_value_mask                       0x2
#define NVMADR1_clear_mask                       0xFD

#define NVMADR2                                  0x2
#define NVMADR2_address                          0x891
#define NVMADR2_position                         0x2
#define NVMADR2_size                             0x1
#define NVMADR2_value_mask                       0x4
#define NVMADR2_clear_mask                       0xFB

#define NVMADR3                                  0x3
#define NVMADR3_address                          0x891
#define NVMADR3_position                         0x3
#define NVMADR3_size                             0x1
#define NVMADR3_value_mask                       0x8
#define NVMADR3_clear_mask                       0xF7

#define NVMADR4                                  0x4
#define NVMADR4_address                          0x891
#define NVMADR4_position                         0x4
#define NVMADR4_size                             0x1
#define NVMADR4_value_mask                       0x10
#define NVMADR4_clear_mask                       0xEF

#define NVMADR5                                  0x5
#define NVMADR5_address                          0x891
#define NVMADR5_position                         0x5
#define NVMADR5_size                             0x1
#define NVMADR5_value_mask                       0x20
#define NVMADR5_clear_mask                       0xDF

#define NVMADR6                                  0x6
#define NVMADR6_address                          0x891
#define NVMADR6_position                         0x6
#define NVMADR6_size                             0x1
#define NVMADR6_value_mask                       0x40
#define NVMADR6_clear_mask                       0xBF

#define NVMADR7                                  0x7
#define NVMADR7_address                          0x891
#define NVMADR7_position                         0x7
#define NVMADR7_size                             0x1
#define NVMADR7_value_mask                       0x80
#define NVMADR7_clear_mask                       0x7F


/*-----------------------------------------------------------------------------#
| NVMADRH                                                                0x892 |
#------------------------------------------------------------------------------#
| - | NVMADR14 | NVMADR13 | NVMADR12 | NVMADR11 | NVMADR10 | NVMADR9 | NVMADR8 |
#------------------------------------------------------------------------------#
| 7 | 6        | 5        | 4        | 3        | 2        | 1       | 0       |
#-----------------------------------------------------------------------------*/

#define NVMADR8                                  0x0
#define NVMADR8_address                          0x892
#define NVMADR8_position                         0x0
#define NVMADR8_size                             0x1
#define NVMADR8_value_mask                       0x1
#define NVMADR8_clear_mask                       0xFE

#define NVMADRH                                  0x0
#define NVMADRH_address                          0x892
#define NVMADRH_position                         0x0
#define NVMADRH_size                             0x7
#define NVMADRH_value_mask                       0x7F
#define NVMADRH_clear_mask                       0x80

#define NVMADR9                                  0x1
#define NVMADR9_address                          0x892
#define NVMADR9_position                         0x1
#define NVMADR9_size                             0x1
#define NVMADR9_value_mask                       0x2
#define NVMADR9_clear_mask                       0xFD

#define NVMADR10                                 0x2
#define NVMADR10_address                         0x892
#define NVMADR10_position                        0x2
#define NVMADR10_size                            0x1
#define NVMADR10_value_mask                      0x4
#define NVMADR10_clear_mask                      0xFB

#define NVMADR11                                 0x3
#define NVMADR11_address                         0x892
#define NVMADR11_position                        0x3
#define NVMADR11_size                            0x1
#define NVMADR11_value_mask                      0x8
#define NVMADR11_clear_mask                      0xF7

#define NVMADR12                                 0x4
#define NVMADR12_address                         0x892
#define NVMADR12_position                        0x4
#define NVMADR12_size                            0x1
#define NVMADR12_value_mask                      0x10
#define NVMADR12_clear_mask                      0xEF

#define NVMADR13                                 0x5
#define NVMADR13_address                         0x892
#define NVMADR13_position                        0x5
#define NVMADR13_size                            0x1
#define NVMADR13_value_mask                      0x20
#define NVMADR13_clear_mask                      0xDF

#define NVMADR14                                 0x6
#define NVMADR14_address                         0x892
#define NVMADR14_position                        0x6
#define NVMADR14_size                            0x1
#define NVMADR14_value_mask                      0x40
#define NVMADR14_clear_mask                      0xBF


/*------------------------------------------------------------------------------#
| NVMDATL                                                                 0x893 |
#-------------------------------------------------------------------------------#
| NVMDAT7 | NVMDAT6 | NVMDAT5 | NVMDAT4 | NVMDAT3 | NVMDAT2 | NVMDAT1 | NVMDAT0 |
#-------------------------------------------------------------------------------#
| 7       | 6       | 5       | 4       | 3       | 2       | 1       | 0       |
#------------------------------------------------------------------------------*/

#define NVMDAT0                                  0x0
#define NVMDAT0_address                          0x893
#define NVMDAT0_position                         0x0
#define NVMDAT0_size                             0x1
#define NVMDAT0_value_mask                       0x1
#define NVMDAT0_clear_mask                       0xFE

#define NVMDATL                                  0x0
#define NVMDATL_address                          0x893
#define NVMDATL_position                         0x0
#define NVMDATL_size                             0x8
#define NVMDATL_value_mask                       0xFF
#define NVMDATL_clear_mask                       0x0

#define NVMDAT1                                  0x1
#define NVMDAT1_address                          0x893
#define NVMDAT1_position                         0x1
#define NVMDAT1_size                             0x1
#define NVMDAT1_value_mask                       0x2
#define NVMDAT1_clear_mask                       0xFD

#define NVMDAT2                                  0x2
#define NVMDAT2_address                          0x893
#define NVMDAT2_position                         0x2
#define NVMDAT2_size                             0x1
#define NVMDAT2_value_mask                       0x4
#define NVMDAT2_clear_mask                       0xFB

#define NVMDAT3                                  0x3
#define NVMDAT3_address                          0x893
#define NVMDAT3_position                         0x3
#define NVMDAT3_size                             0x1
#define NVMDAT3_value_mask                       0x8
#define NVMDAT3_clear_mask                       0xF7

#define NVMDAT4                                  0x4
#define NVMDAT4_address                          0x893
#define NVMDAT4_position                         0x4
#define NVMDAT4_size                             0x1
#define NVMDAT4_value_mask                       0x10
#define NVMDAT4_clear_mask                       0xEF

#define NVMDAT5                                  0x5
#define NVMDAT5_address                          0x893
#define NVMDAT5_position                         0x5
#define NVMDAT5_size                             0x1
#define NVMDAT5_value_mask                       0x20
#define NVMDAT5_clear_mask                       0xDF

#define NVMDAT6                                  0x6
#define NVMDAT6_address                          0x893
#define NVMDAT6_position                         0x6
#define NVMDAT6_size                             0x1
#define NVMDAT6_value_mask                       0x40
#define NVMDAT6_clear_mask                       0xBF

#define NVMDAT7                                  0x7
#define NVMDAT7_address                          0x893
#define NVMDAT7_position                         0x7
#define NVMDAT7_size                             0x1
#define NVMDAT7_value_mask                       0x80
#define NVMDAT7_clear_mask                       0x7F


/*----------------------------------------------------------------------#
| NVMDATH                                                         0x894 |
#-----------------------------------------------------------------------#
| - | - | NVMDAT13 | NVMDAT12 | NVMDAT11 | NVMDAT10 | NVMDAT9 | NVMDAT8 |
#-----------------------------------------------------------------------#
| 7 | 6 | 5        | 4        | 3        | 2        | 1       | 0       |
#----------------------------------------------------------------------*/

#define NVMDAT8                                  0x0
#define NVMDAT8_address                          0x894
#define NVMDAT8_position                         0x0
#define NVMDAT8_size                             0x1
#define NVMDAT8_value_mask                       0x1
#define NVMDAT8_clear_mask                       0xFE

#define NVMDATH                                  0x0
#define NVMDATH_address                          0x894
#define NVMDATH_position                         0x0
#define NVMDATH_size                             0x6
#define NVMDATH_value_mask                       0x3F
#define NVMDATH_clear_mask                       0xC0

#define NVMDAT9                                  0x1
#define NVMDAT9_address                          0x894
#define NVMDAT9_position                         0x1
#define NVMDAT9_size                             0x1
#define NVMDAT9_value_mask                       0x2
#define NVMDAT9_clear_mask                       0xFD

#define NVMDAT10                                 0x2
#define NVMDAT10_address                         0x894
#define NVMDAT10_position                        0x2
#define NVMDAT10_size                            0x1
#define NVMDAT10_value_mask                      0x4
#define NVMDAT10_clear_mask                      0xFB

#define NVMDAT11                                 0x3
#define NVMDAT11_address                         0x894
#define NVMDAT11_position                        0x3
#define NVMDAT11_size                            0x1
#define NVMDAT11_value_mask                      0x8
#define NVMDAT11_clear_mask                      0xF7

#define NVMDAT12                                 0x4
#define NVMDAT12_address                         0x894
#define NVMDAT12_position                        0x4
#define NVMDAT12_size                            0x1
#define NVMDAT12_value_mask                      0x10
#define NVMDAT12_clear_mask                      0xEF

#define NVMDAT13                                 0x5
#define NVMDAT13_address                         0x894
#define NVMDAT13_position                        0x5
#define NVMDAT13_size                            0x1
#define NVMDAT13_value_mask                      0x20
#define NVMDAT13_clear_mask                      0xDF


/*---------------------------------------------------#
| NVMCON1                                      0x895 |
#----------------------------------------------------#
| - | NVMREGS | LWLO | FREE | WRERR | WREN | WR | RD |
#----------------------------------------------------#
| 7 | 6       | 5    | 4    | 3     | 2    | 1  | 0  |
#---------------------------------------------------*/

#define NVMCON1                                  0x0
#define NVMCON1_address                          0x895
#define NVMCON1_position                         0x0
#define NVMCON1_size                             0x8
#define NVMCON1_value_mask                       0xFF
#define NVMCON1_clear_mask                       0x0

#define RD                                       0x0
#define RD_address                               0x895
#define RD_position                              0x0
#define RD_size                                  0x1
#define RD_value_mask                            0x1
#define RD_clear_mask                            0xFE

#define WR                                       0x1
#define WR_address                               0x895
#define WR_position                              0x1
#define WR_size                                  0x1
#define WR_value_mask                            0x2
#define WR_clear_mask                            0xFD

#define WREN                                     0x2
#define WREN_address                             0x895
#define WREN_position                            0x2
#define WREN_size                                0x1
#define WREN_value_mask                          0x4
#define WREN_clear_mask                          0xFB

#define WRERR                                    0x3
#define WRERR_address                            0x895
#define WRERR_position                           0x3
#define WRERR_size                               0x1
#define WRERR_value_mask                         0x8
#define WRERR_clear_mask                         0xF7

#define FREE                                     0x4
#define FREE_address                             0x895
#define FREE_position                            0x4
#define FREE_size                                0x1
#define FREE_value_mask                          0x10
#define FREE_clear_mask                          0xEF

#define LWLO                                     0x5
#define LWLO_address                             0x895
#define LWLO_position                            0x5
#define LWLO_size                                0x1
#define LWLO_value_mask                          0x20
#define LWLO_clear_mask                          0xDF

#define NVMREGS                                  0x6
#define NVMREGS_address                          0x895
#define NVMREGS_position                         0x6
#define NVMREGS_size                             0x1
#define NVMREGS_value_mask                       0x40
#define NVMREGS_clear_mask                       0xBF


/*------------------------------#
| NVMCON2                 0x896 |
#-------------------------------#
| NMVCON2                       |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define NVMCON2                                  0x0
#define NVMCON2_address                          0x896
#define NVMCON2_position                         0x0
#define NVMCON2_size                             0x8
#define NVMCON2_value_mask                       0xFF
#define NVMCON2_clear_mask                       0x0

#define NMVCON2                                  0x0
#define NMVCON2_address                          0x896
#define NMVCON2_position                         0x0
#define NMVCON2_size                             0x8
#define NMVCON2_value_mask                       0xFF
#define NMVCON2_clear_mask                       0x0


/*---------------------------------------------------------#
| PCON0                                              0x89B |
#----------------------------------------------------------#
| STKOVF | STKUNF | - | nRWDT | nRMCLR | nRI | nPOR | nBOR |
#----------------------------------------------------------#
| 7      | 6      | 5 | 4     | 3      | 2   | 1    | 0    |
#---------------------------------------------------------*/

#define PCON0                                    0x0
#define PCON0_address                            0x89B
#define PCON0_position                           0x0
#define PCON0_size                               0x8
#define PCON0_value_mask                         0xFF
#define PCON0_clear_mask                         0x0

#define nBOR                                     0x0
#define nBOR_address                             0x89B
#define nBOR_position                            0x0
#define nBOR_size                                0x1
#define nBOR_value_mask                          0x1
#define nBOR_clear_mask                          0xFE

#define nPOR                                     0x1
#define nPOR_address                             0x89B
#define nPOR_position                            0x1
#define nPOR_size                                0x1
#define nPOR_value_mask                          0x2
#define nPOR_clear_mask                          0xFD

#define nRI                                      0x2
#define nRI_address                              0x89B
#define nRI_position                             0x2
#define nRI_size                                 0x1
#define nRI_value_mask                           0x4
#define nRI_clear_mask                           0xFB

#define nRMCLR                                   0x3
#define nRMCLR_address                           0x89B
#define nRMCLR_position                          0x3
#define nRMCLR_size                              0x1
#define nRMCLR_value_mask                        0x8
#define nRMCLR_clear_mask                        0xF7

#define nRWDT                                    0x4
#define nRWDT_address                            0x89B
#define nRWDT_position                           0x4
#define nRWDT_size                               0x1
#define nRWDT_value_mask                         0x10
#define nRWDT_clear_mask                         0xEF

#define STKUNF                                   0x6
#define STKUNF_address                           0x89B
#define STKUNF_position                          0x6
#define STKUNF_size                              0x1
#define STKUNF_value_mask                        0x40
#define STKUNF_clear_mask                        0xBF

#define STKOVF                                   0x7
#define STKOVF_address                           0x89B
#define STKOVF_position                          0x7
#define STKOVF_size                              0x1
#define STKOVF_value_mask                        0x80
#define STKOVF_clear_mask                        0x7F


/*----------------------------------------------------#
| PMD0                                          0x911 |
#-----------------------------------------------------#
| SYSCMD | FVRMD | - | - | - | NVMMD | CLKRMD | IOCMD |
#-----------------------------------------------------#
| 7      | 6     | 5 | 4 | 3 | 2     | 1      | 0     |
#----------------------------------------------------*/

#define PMD0                                     0x0
#define PMD0_address                             0x911
#define PMD0_position                            0x0
#define PMD0_size                                0x8
#define PMD0_value_mask                          0xFF
#define PMD0_clear_mask                          0x0

#define IOCMD                                    0x0
#define IOCMD_address                            0x911
#define IOCMD_position                           0x0
#define IOCMD_size                               0x1
#define IOCMD_value_mask                         0x1
#define IOCMD_clear_mask                         0xFE

#define CLKRMD                                   0x1
#define CLKRMD_address                           0x911
#define CLKRMD_position                          0x1
#define CLKRMD_size                              0x1
#define CLKRMD_value_mask                        0x2
#define CLKRMD_clear_mask                        0xFD

#define NVMMD                                    0x2
#define NVMMD_address                            0x911
#define NVMMD_position                           0x2
#define NVMMD_size                               0x1
#define NVMMD_value_mask                         0x4
#define NVMMD_clear_mask                         0xFB

#define FVRMD                                    0x6
#define FVRMD_address                            0x911
#define FVRMD_position                           0x6
#define FVRMD_size                               0x1
#define FVRMD_value_mask                         0x40
#define FVRMD_clear_mask                         0xBF

#define SYSCMD                                   0x7
#define SYSCMD_address                           0x911
#define SYSCMD_position                          0x7
#define SYSCMD_size                              0x1
#define SYSCMD_value_mask                        0x80
#define SYSCMD_clear_mask                        0x7F


/*---------------------------------------------------------------------#
| PMD1                                                           0x912 |
#----------------------------------------------------------------------#
| NCOMD | TMR6MD | TMR5MD | TMR4MD | TMR3MD | TMR2MD | TMR1MD | TMR0MD |
#----------------------------------------------------------------------#
| 7     | 6      | 5      | 4      | 3      | 2      | 1      | 0      |
#---------------------------------------------------------------------*/

#define PMD1                                     0x0
#define PMD1_address                             0x912
#define PMD1_position                            0x0
#define PMD1_size                                0x8
#define PMD1_value_mask                          0xFF
#define PMD1_clear_mask                          0x0

#define TMR0MD                                   0x0
#define TMR0MD_address                           0x912
#define TMR0MD_position                          0x0
#define TMR0MD_size                              0x1
#define TMR0MD_value_mask                        0x1
#define TMR0MD_clear_mask                        0xFE

#define TMR1MD                                   0x1
#define TMR1MD_address                           0x912
#define TMR1MD_position                          0x1
#define TMR1MD_size                              0x1
#define TMR1MD_value_mask                        0x2
#define TMR1MD_clear_mask                        0xFD

#define TMR2MD                                   0x2
#define TMR2MD_address                           0x912
#define TMR2MD_position                          0x2
#define TMR2MD_size                              0x1
#define TMR2MD_value_mask                        0x4
#define TMR2MD_clear_mask                        0xFB

#define TMR3MD                                   0x3
#define TMR3MD_address                           0x912
#define TMR3MD_position                          0x3
#define TMR3MD_size                              0x1
#define TMR3MD_value_mask                        0x8
#define TMR3MD_clear_mask                        0xF7

#define TMR4MD                                   0x4
#define TMR4MD_address                           0x912
#define TMR4MD_position                          0x4
#define TMR4MD_size                              0x1
#define TMR4MD_value_mask                        0x10
#define TMR4MD_clear_mask                        0xEF

#define TMR5MD                                   0x5
#define TMR5MD_address                           0x912
#define TMR5MD_position                          0x5
#define TMR5MD_size                              0x1
#define TMR5MD_value_mask                        0x20
#define TMR5MD_clear_mask                        0xDF

#define TMR6MD                                   0x6
#define TMR6MD_address                           0x912
#define TMR6MD_position                          0x6
#define TMR6MD_size                              0x1
#define TMR6MD_value_mask                        0x40
#define TMR6MD_clear_mask                        0xBF

#define NCOMD                                    0x7
#define NCOMD_address                            0x912
#define NCOMD_position                           0x7
#define NCOMD_size                               0x1
#define NCOMD_value_mask                         0x80
#define NCOMD_clear_mask                         0x7F


/*------------------------------------------------#
| PMD2                                      0x913 |
#-------------------------------------------------#
| - | DACMD | ADCMD | - | - | CMP2MD | CMP1MD | - |
#-------------------------------------------------#
| 7 | 6     | 5     | 4 | 3 | 2      | 1      | 0 |
#------------------------------------------------*/

#define PMD2                                     0x0
#define PMD2_address                             0x913
#define PMD2_position                            0x0
#define PMD2_size                                0x8
#define PMD2_value_mask                          0xFF
#define PMD2_clear_mask                          0x0

#define CMP1MD                                   0x1
#define CMP1MD_address                           0x913
#define CMP1MD_position                          0x1
#define CMP1MD_size                              0x1
#define CMP1MD_value_mask                        0x2
#define CMP1MD_clear_mask                        0xFD

#define CMP2MD                                   0x2
#define CMP2MD_address                           0x913
#define CMP2MD_position                          0x2
#define CMP2MD_size                              0x1
#define CMP2MD_value_mask                        0x4
#define CMP2MD_clear_mask                        0xFB

#define ADCMD                                    0x5
#define ADCMD_address                            0x913
#define ADCMD_position                           0x5
#define ADCMD_size                               0x1
#define ADCMD_value_mask                         0x20
#define ADCMD_clear_mask                         0xDF

#define DACMD                                    0x6
#define DACMD_address                            0x913
#define DACMD_position                           0x6
#define DACMD_size                               0x1
#define DACMD_value_mask                         0x40
#define DACMD_clear_mask                         0xBF


/*----------------------------------------------------------------------#
| PMD3                                                            0x914 |
#-----------------------------------------------------------------------#
| CWG2MD | CWG1MD | PWM6MD | PWM5MD | CCP4MD | CCP3MD | CCP2MD | CCP1MD |
#-----------------------------------------------------------------------#
| 7      | 6      | 5      | 4      | 3      | 2      | 1      | 0      |
#----------------------------------------------------------------------*/

#define PMD3                                     0x0
#define PMD3_address                             0x914
#define PMD3_position                            0x0
#define PMD3_size                                0x8
#define PMD3_value_mask                          0xFF
#define PMD3_clear_mask                          0x0

#define CCP1MD                                   0x0
#define CCP1MD_address                           0x914
#define CCP1MD_position                          0x0
#define CCP1MD_size                              0x1
#define CCP1MD_value_mask                        0x1
#define CCP1MD_clear_mask                        0xFE

#define CCP2MD                                   0x1
#define CCP2MD_address                           0x914
#define CCP2MD_position                          0x1
#define CCP2MD_size                              0x1
#define CCP2MD_value_mask                        0x2
#define CCP2MD_clear_mask                        0xFD

#define CCP3MD                                   0x2
#define CCP3MD_address                           0x914
#define CCP3MD_position                          0x2
#define CCP3MD_size                              0x1
#define CCP3MD_value_mask                        0x4
#define CCP3MD_clear_mask                        0xFB

#define CCP4MD                                   0x3
#define CCP4MD_address                           0x914
#define CCP4MD_position                          0x3
#define CCP4MD_size                              0x1
#define CCP4MD_value_mask                        0x8
#define CCP4MD_clear_mask                        0xF7

#define PWM5MD                                   0x4
#define PWM5MD_address                           0x914
#define PWM5MD_position                          0x4
#define PWM5MD_size                              0x1
#define PWM5MD_value_mask                        0x10
#define PWM5MD_clear_mask                        0xEF

#define PWM6MD                                   0x5
#define PWM6MD_address                           0x914
#define PWM6MD_position                          0x5
#define PWM6MD_size                              0x1
#define PWM6MD_value_mask                        0x20
#define PWM6MD_clear_mask                        0xDF

#define CWG1MD                                   0x6
#define CWG1MD_address                           0x914
#define CWG1MD_position                          0x6
#define CWG1MD_size                              0x1
#define CWG1MD_value_mask                        0x40
#define CWG1MD_clear_mask                        0xBF

#define CWG2MD                                   0x7
#define CWG2MD_address                           0x914
#define CWG2MD_position                          0x7
#define CWG2MD_size                              0x1
#define CWG2MD_value_mask                        0x80
#define CWG2MD_clear_mask                        0x7F


/*------------------------------------------#
| PMD4                                0x915 |
#-------------------------------------------#
| - | - | UART1MD | - | - | - | MSSP1MD | - |
#-------------------------------------------#
| 7 | 6 | 5       | 4 | 3 | 2 | 1       | 0 |
#------------------------------------------*/

#define PMD4                                     0x0
#define PMD4_address                             0x915
#define PMD4_position                            0x0
#define PMD4_size                                0x8
#define PMD4_value_mask                          0xFF
#define PMD4_clear_mask                          0x0

#define MSSP1MD                                  0x1
#define MSSP1MD_address                          0x915
#define MSSP1MD_position                         0x1
#define MSSP1MD_size                             0x1
#define MSSP1MD_value_mask                       0x2
#define MSSP1MD_clear_mask                       0xFD

#define UART1MD                                  0x5
#define UART1MD_address                          0x915
#define UART1MD_position                         0x5
#define UART1MD_size                             0x1
#define UART1MD_value_mask                       0x20
#define UART1MD_clear_mask                       0xDF


/*------------------------------------------------------#
| PMD5                                            0x916 |
#-------------------------------------------------------#
| - | - | - | CLC4MD | CLC3MD | CLC2MD | CLC1MD | DSMMD |
#-------------------------------------------------------#
| 7 | 6 | 5 | 4      | 3      | 2      | 1      | 0     |
#------------------------------------------------------*/

#define PMD5                                     0x0
#define PMD5_address                             0x916
#define PMD5_position                            0x0
#define PMD5_size                                0x8
#define PMD5_value_mask                          0xFF
#define PMD5_clear_mask                          0x0

#define DSMMD                                    0x0
#define DSMMD_address                            0x916
#define DSMMD_position                           0x0
#define DSMMD_size                               0x1
#define DSMMD_value_mask                         0x1
#define DSMMD_clear_mask                         0xFE

#define CLC1MD                                   0x1
#define CLC1MD_address                           0x916
#define CLC1MD_position                          0x1
#define CLC1MD_size                              0x1
#define CLC1MD_value_mask                        0x2
#define CLC1MD_clear_mask                        0xFD

#define CLC2MD                                   0x2
#define CLC2MD_address                           0x916
#define CLC2MD_position                          0x2
#define CLC2MD_size                              0x1
#define CLC2MD_value_mask                        0x4
#define CLC2MD_clear_mask                        0xFB

#define CLC3MD                                   0x3
#define CLC3MD_address                           0x916
#define CLC3MD_position                          0x3
#define CLC3MD_size                              0x1
#define CLC3MD_value_mask                        0x8
#define CLC3MD_clear_mask                        0xF7

#define CLC4MD                                   0x4
#define CLC4MD_address                           0x916
#define CLC4MD_position                          0x4
#define CLC4MD_size                              0x1
#define CLC4MD_value_mask                        0x10
#define CLC4MD_clear_mask                        0xEF


/*------------------------------------------------------#
| CPUDOZE                                         0x918 |
#-------------------------------------------------------#
| IDLEN | DOZEN | ROI | DOE | - | DOZE2 | DOZE1 | DOZE0 |
#-------------------------------------------------------#
| 7     | 6     | 5   | 4   | 3 | 2     | 1     | 0     |
#------------------------------------------------------*/

#define CPUDOZE                                  0x0
#define CPUDOZE_address                          0x918
#define CPUDOZE_position                         0x0
#define CPUDOZE_size                             0x8
#define CPUDOZE_value_mask                       0xFF
#define CPUDOZE_clear_mask                       0x0

#define DOZE0                                    0x0
#define DOZE0_address                            0x918
#define DOZE0_position                           0x0
#define DOZE0_size                               0x1
#define DOZE0_value_mask                         0x1
#define DOZE0_clear_mask                         0xFE

#define DOZE                                     0x0
#define DOZE_address                             0x918
#define DOZE_position                            0x0
#define DOZE_size                                0x3
#define DOZE_value_mask                          0x7
#define DOZE_clear_mask                          0xF8

#define DOZE1                                    0x1
#define DOZE1_address                            0x918
#define DOZE1_position                           0x1
#define DOZE1_size                               0x1
#define DOZE1_value_mask                         0x2
#define DOZE1_clear_mask                         0xFD

#define DOZE2                                    0x2
#define DOZE2_address                            0x918
#define DOZE2_position                           0x2
#define DOZE2_size                               0x1
#define DOZE2_value_mask                         0x4
#define DOZE2_clear_mask                         0xFB

#define DOE                                      0x4
#define DOE_address                              0x918
#define DOE_position                             0x4
#define DOE_size                                 0x1
#define DOE_value_mask                           0x10
#define DOE_clear_mask                           0xEF

#define ROI                                      0x5
#define ROI_address                              0x918
#define ROI_position                             0x5
#define ROI_size                                 0x1
#define ROI_value_mask                           0x20
#define ROI_clear_mask                           0xDF

#define DOZEN                                    0x6
#define DOZEN_address                            0x918
#define DOZEN_position                           0x6
#define DOZEN_size                               0x1
#define DOZEN_value_mask                         0x40
#define DOZEN_clear_mask                         0xBF

#define IDLEN                                    0x7
#define IDLEN_address                            0x918
#define IDLEN_position                           0x7
#define IDLEN_size                               0x1
#define IDLEN_value_mask                         0x80
#define IDLEN_clear_mask                         0x7F


/*----------------------------------------------------------#
| OSCCON1                                             0x919 |
#-----------------------------------------------------------#
| - | NOSC2 | NOSC1 | NOSC0 | NDIV3 | NDIV2 | NDIV1 | NDIV0 |
#-----------------------------------------------------------#
| 7 | 6     | 5     | 4     | 3     | 2     | 1     | 0     |
#----------------------------------------------------------*/

#define OSCCON1                                  0x0
#define OSCCON1_address                          0x919
#define OSCCON1_position                         0x0
#define OSCCON1_size                             0x8
#define OSCCON1_value_mask                       0xFF
#define OSCCON1_clear_mask                       0x0

#define NDIV0                                    0x0
#define NDIV0_address                            0x919
#define NDIV0_position                           0x0
#define NDIV0_size                               0x1
#define NDIV0_value_mask                         0x1
#define NDIV0_clear_mask                         0xFE

#define NDIV                                     0x0
#define NDIV_address                             0x919
#define NDIV_position                            0x0
#define NDIV_size                                0x4
#define NDIV_value_mask                          0xF
#define NDIV_clear_mask                          0xF0

#define NDIV1                                    0x1
#define NDIV1_address                            0x919
#define NDIV1_position                           0x1
#define NDIV1_size                               0x1
#define NDIV1_value_mask                         0x2
#define NDIV1_clear_mask                         0xFD

#define NDIV2                                    0x2
#define NDIV2_address                            0x919
#define NDIV2_position                           0x2
#define NDIV2_size                               0x1
#define NDIV2_value_mask                         0x4
#define NDIV2_clear_mask                         0xFB

#define NDIV3                                    0x3
#define NDIV3_address                            0x919
#define NDIV3_position                           0x3
#define NDIV3_size                               0x1
#define NDIV3_value_mask                         0x8
#define NDIV3_clear_mask                         0xF7

#define NOSC0                                    0x4
#define NOSC0_address                            0x919
#define NOSC0_position                           0x4
#define NOSC0_size                               0x1
#define NOSC0_value_mask                         0x10
#define NOSC0_clear_mask                         0xEF

#define NOSC                                     0x4
#define NOSC_address                             0x919
#define NOSC_position                            0x4
#define NOSC_size                                0x3
#define NOSC_value_mask                          0x70
#define NOSC_clear_mask                          0x8F

#define NOSC1                                    0x5
#define NOSC1_address                            0x919
#define NOSC1_position                           0x5
#define NOSC1_size                               0x1
#define NOSC1_value_mask                         0x20
#define NOSC1_clear_mask                         0xDF

#define NOSC2                                    0x6
#define NOSC2_address                            0x919
#define NOSC2_position                           0x6
#define NOSC2_size                               0x1
#define NOSC2_value_mask                         0x40
#define NOSC2_clear_mask                         0xBF


/*----------------------------------------------------------#
| OSCCON2                                             0x91A |
#-----------------------------------------------------------#
| - | COSC2 | COSC1 | COSC0 | CDIV3 | CDIV2 | CDIV1 | CDIV0 |
#-----------------------------------------------------------#
| 7 | 6     | 5     | 4     | 3     | 2     | 1     | 0     |
#----------------------------------------------------------*/

#define OSCCON2                                  0x0
#define OSCCON2_address                          0x91A
#define OSCCON2_position                         0x0
#define OSCCON2_size                             0x8
#define OSCCON2_value_mask                       0xFF
#define OSCCON2_clear_mask                       0x0

#define CDIV0                                    0x0
#define CDIV0_address                            0x91A
#define CDIV0_position                           0x0
#define CDIV0_size                               0x1
#define CDIV0_value_mask                         0x1
#define CDIV0_clear_mask                         0xFE

#define CDIV                                     0x0
#define CDIV_address                             0x91A
#define CDIV_position                            0x0
#define CDIV_size                                0x4
#define CDIV_value_mask                          0xF
#define CDIV_clear_mask                          0xF0

#define CDIV1                                    0x1
#define CDIV1_address                            0x91A
#define CDIV1_position                           0x1
#define CDIV1_size                               0x1
#define CDIV1_value_mask                         0x2
#define CDIV1_clear_mask                         0xFD

#define CDIV2                                    0x2
#define CDIV2_address                            0x91A
#define CDIV2_position                           0x2
#define CDIV2_size                               0x1
#define CDIV2_value_mask                         0x4
#define CDIV2_clear_mask                         0xFB

#define CDIV3                                    0x3
#define CDIV3_address                            0x91A
#define CDIV3_position                           0x3
#define CDIV3_size                               0x1
#define CDIV3_value_mask                         0x8
#define CDIV3_clear_mask                         0xF7

#define COSC                                     0x4
#define COSC_address                             0x91A
#define COSC_position                            0x4
#define COSC_size                                0x3
#define COSC_value_mask                          0x70
#define COSC_clear_mask                          0x8F

#define COSC0                                    0x4
#define COSC0_address                            0x91A
#define COSC0_position                           0x4
#define COSC0_size                               0x1
#define COSC0_value_mask                         0x10
#define COSC0_clear_mask                         0xEF

#define COSC1                                    0x5
#define COSC1_address                            0x91A
#define COSC1_position                           0x5
#define COSC1_size                               0x1
#define COSC1_value_mask                         0x20
#define COSC1_clear_mask                         0xDF

#define COSC2                                    0x6
#define COSC2_address                            0x91A
#define COSC2_position                           0x6
#define COSC2_size                               0x1
#define COSC2_value_mask                         0x40
#define COSC2_clear_mask                         0xBF


/*------------------------------------------------------#
| OSCCON3                                         0x91B |
#-------------------------------------------------------#
| CSWHOLD | SOSCPWR | SOSCBE | ORDY | NOSCR | - | - | - |
#-------------------------------------------------------#
| 7       | 6       | 5      | 4    | 3     | 2 | 1 | 0 |
#------------------------------------------------------*/

#define OSCCON3                                  0x0
#define OSCCON3_address                          0x91B
#define OSCCON3_position                         0x0
#define OSCCON3_size                             0x8
#define OSCCON3_value_mask                       0xFF
#define OSCCON3_clear_mask                       0x0

#define NOSCR                                    0x3
#define NOSCR_address                            0x91B
#define NOSCR_position                           0x3
#define NOSCR_size                               0x1
#define NOSCR_value_mask                         0x8
#define NOSCR_clear_mask                         0xF7

#define ORDY                                     0x4
#define ORDY_address                             0x91B
#define ORDY_position                            0x4
#define ORDY_size                                0x1
#define ORDY_value_mask                          0x10
#define ORDY_clear_mask                          0xEF

#define SOSCBE                                   0x5
#define SOSCBE_address                           0x91B
#define SOSCBE_position                          0x5
#define SOSCBE_size                              0x1
#define SOSCBE_value_mask                        0x20
#define SOSCBE_clear_mask                        0xDF

#define SOSCPWR                                  0x6
#define SOSCPWR_address                          0x91B
#define SOSCPWR_position                         0x6
#define SOSCPWR_size                             0x1
#define SOSCPWR_value_mask                       0x40
#define SOSCPWR_clear_mask                       0xBF

#define CSWHOLD                                  0x7
#define CSWHOLD_address                          0x91B
#define CSWHOLD_position                         0x7
#define CSWHOLD_size                             0x1
#define CSWHOLD_value_mask                       0x80
#define CSWHOLD_clear_mask                       0x7F


/*------------------------------------------------#
| OSCSTAT1                                  0x91C |
#-------------------------------------------------#
| EXTOR | HFOR | - | LFOR | SOR | ADOR | - | PLLR |
#-------------------------------------------------#
| 7     | 6    | 5 | 4    | 3   | 2    | 1 | 0    |
#------------------------------------------------*/

#define OSCSTAT1                                 0x0
#define OSCSTAT1_address                         0x91C
#define OSCSTAT1_position                        0x0
#define OSCSTAT1_size                            0x8
#define OSCSTAT1_value_mask                      0xFF
#define OSCSTAT1_clear_mask                      0x0

#define PLLR                                     0x0
#define PLLR_address                             0x91C
#define PLLR_position                            0x0
#define PLLR_size                                0x1
#define PLLR_value_mask                          0x1
#define PLLR_clear_mask                          0xFE

#define ADOR                                     0x2
#define ADOR_address                             0x91C
#define ADOR_position                            0x2
#define ADOR_size                                0x1
#define ADOR_value_mask                          0x4
#define ADOR_clear_mask                          0xFB

#define SOR                                      0x3
#define SOR_address                              0x91C
#define SOR_position                             0x3
#define SOR_size                                 0x1
#define SOR_value_mask                           0x8
#define SOR_clear_mask                           0xF7

#define LFOR                                     0x4
#define LFOR_address                             0x91C
#define LFOR_position                            0x4
#define LFOR_size                                0x1
#define LFOR_value_mask                          0x10
#define LFOR_clear_mask                          0xEF

#define HFOR                                     0x6
#define HFOR_address                             0x91C
#define HFOR_position                            0x6
#define HFOR_size                                0x1
#define HFOR_value_mask                          0x40
#define HFOR_clear_mask                          0xBF

#define EXTOR                                    0x7
#define EXTOR_address                            0x91C
#define EXTOR_position                           0x7
#define EXTOR_size                               0x1
#define EXTOR_value_mask                         0x80
#define EXTOR_clear_mask                         0x7F


/*----------------------------------------------------#
| OSCEN                                         0x91D |
#-----------------------------------------------------#
| EXTOEN | HFOEN | - | LFOEN | SOSCEN | ADOEN | - | - |
#-----------------------------------------------------#
| 7      | 6     | 5 | 4     | 3      | 2     | 1 | 0 |
#----------------------------------------------------*/

#define OSCEN                                    0x0
#define OSCEN_address                            0x91D
#define OSCEN_position                           0x0
#define OSCEN_size                               0x8
#define OSCEN_value_mask                         0xFF
#define OSCEN_clear_mask                         0x0

#define ADOEN                                    0x2
#define ADOEN_address                            0x91D
#define ADOEN_position                           0x2
#define ADOEN_size                               0x1
#define ADOEN_value_mask                         0x4
#define ADOEN_clear_mask                         0xFB

#define SOSCEN                                   0x3
#define SOSCEN_address                           0x91D
#define SOSCEN_position                          0x3
#define SOSCEN_size                              0x1
#define SOSCEN_value_mask                        0x8
#define SOSCEN_clear_mask                        0xF7

#define LFOEN                                    0x4
#define LFOEN_address                            0x91D
#define LFOEN_position                           0x4
#define LFOEN_size                               0x1
#define LFOEN_value_mask                         0x10
#define LFOEN_clear_mask                         0xEF

#define HFOEN                                    0x6
#define HFOEN_address                            0x91D
#define HFOEN_position                           0x6
#define HFOEN_size                               0x1
#define HFOEN_value_mask                         0x40
#define HFOEN_clear_mask                         0xBF

#define EXTOEN                                   0x7
#define EXTOEN_address                           0x91D
#define EXTOEN_position                          0x7
#define EXTOEN_size                              0x1
#define EXTOEN_value_mask                        0x80
#define EXTOEN_clear_mask                        0x7F


/*------------------------------------------------------------#
| OSCTUNE                                               0x91E |
#-------------------------------------------------------------#
| - | - | HFTUN5 | HFTUN4 | HFTUN3 | HFTUN2 | HFTUN1 | HFTUN0 |
#-------------------------------------------------------------#
| 7 | 6 | 5      | 4      | 3      | 2      | 1      | 0      |
#------------------------------------------------------------*/

#define OSCTUNE                                  0x0
#define OSCTUNE_address                          0x91E
#define OSCTUNE_position                         0x0
#define OSCTUNE_size                             0x8
#define OSCTUNE_value_mask                       0xFF
#define OSCTUNE_clear_mask                       0x0

#define HFTUN0                                   0x0
#define HFTUN0_address                           0x91E
#define HFTUN0_position                          0x0
#define HFTUN0_size                              0x1
#define HFTUN0_value_mask                        0x1
#define HFTUN0_clear_mask                        0xFE

#define HFTUN                                    0x0
#define HFTUN_address                            0x91E
#define HFTUN_position                           0x0
#define HFTUN_size                               0x6
#define HFTUN_value_mask                         0x3F
#define HFTUN_clear_mask                         0xC0

#define HFTUN1                                   0x1
#define HFTUN1_address                           0x91E
#define HFTUN1_position                          0x1
#define HFTUN1_size                              0x1
#define HFTUN1_value_mask                        0x2
#define HFTUN1_clear_mask                        0xFD

#define HFTUN2                                   0x2
#define HFTUN2_address                           0x91E
#define HFTUN2_position                          0x2
#define HFTUN2_size                              0x1
#define HFTUN2_value_mask                        0x4
#define HFTUN2_clear_mask                        0xFB

#define HFTUN3                                   0x3
#define HFTUN3_address                           0x91E
#define HFTUN3_position                          0x3
#define HFTUN3_size                              0x1
#define HFTUN3_value_mask                        0x8
#define HFTUN3_clear_mask                        0xF7

#define HFTUN4                                   0x4
#define HFTUN4_address                           0x91E
#define HFTUN4_position                          0x4
#define HFTUN4_size                              0x1
#define HFTUN4_value_mask                        0x10
#define HFTUN4_clear_mask                        0xEF

#define HFTUN5                                   0x5
#define HFTUN5_address                           0x91E
#define HFTUN5_position                          0x5
#define HFTUN5_size                              0x1
#define HFTUN5_value_mask                        0x20
#define HFTUN5_clear_mask                        0xDF


/*--------------------------------------------------#
| OSCFRQ                                      0x91F |
#---------------------------------------------------#
| - | - | - | - | HFFRQ3 | HFFRQ2 | HFFRQ1 | HFFRQ0 |
#---------------------------------------------------#
| 7 | 6 | 5 | 4 | 3      | 2      | 1      | 0      |
#--------------------------------------------------*/

#define OSCFRQ                                   0x0
#define OSCFRQ_address                           0x91F
#define OSCFRQ_position                          0x0
#define OSCFRQ_size                              0x8
#define OSCFRQ_value_mask                        0xFF
#define OSCFRQ_clear_mask                        0x0

#define HFFRQ                                    0x0
#define HFFRQ_address                            0x91F
#define HFFRQ_position                           0x0
#define HFFRQ_size                               0x4
#define HFFRQ_value_mask                         0xF
#define HFFRQ_clear_mask                         0xF0

#define HFFRQ0                                   0x0
#define HFFRQ0_address                           0x91F
#define HFFRQ0_position                          0x0
#define HFFRQ0_size                              0x1
#define HFFRQ0_value_mask                        0x1
#define HFFRQ0_clear_mask                        0xFE

#define HFFRQ1                                   0x1
#define HFFRQ1_address                           0x91F
#define HFFRQ1_position                          0x1
#define HFFRQ1_size                              0x1
#define HFFRQ1_value_mask                        0x2
#define HFFRQ1_clear_mask                        0xFD

#define HFFRQ2                                   0x2
#define HFFRQ2_address                           0x91F
#define HFFRQ2_position                          0x2
#define HFFRQ2_size                              0x1
#define HFFRQ2_value_mask                        0x4
#define HFFRQ2_clear_mask                        0xFB

#define HFFRQ3                                   0x3
#define HFFRQ3_address                           0x91F
#define HFFRQ3_position                          0x3
#define HFFRQ3_size                              0x1
#define HFFRQ3_value_mask                        0x8
#define HFFRQ3_clear_mask                        0xF7


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


/*-----------------------------------------------------------------#
| CCP1PPS                                                    0xE14 |
#------------------------------------------------------------------#
| - | - | - | CCP1PPS4 | CCP1PPS3 | CCP1PPS2 | CCP1PPS1 | CCP1PPS0 |
#------------------------------------------------------------------#
| 7 | 6 | 5 | 4        | 3        | 2        | 1        | 0        |
#-----------------------------------------------------------------*/

#define CCP1PPS0                                 0x0
#define CCP1PPS0_address                         0xE14
#define CCP1PPS0_position                        0x0
#define CCP1PPS0_size                            0x1
#define CCP1PPS0_value_mask                      0x1
#define CCP1PPS0_clear_mask                      0xFE

#define CCP1PPS                                  0x0
#define CCP1PPS_address                          0xE14
#define CCP1PPS_position                         0x0
#define CCP1PPS_size                             0x5
#define CCP1PPS_value_mask                       0x1F
#define CCP1PPS_clear_mask                       0xE0

#define CCP1PPS1                                 0x1
#define CCP1PPS1_address                         0xE14
#define CCP1PPS1_position                        0x1
#define CCP1PPS1_size                            0x1
#define CCP1PPS1_value_mask                      0x2
#define CCP1PPS1_clear_mask                      0xFD

#define CCP1PPS2                                 0x2
#define CCP1PPS2_address                         0xE14
#define CCP1PPS2_position                        0x2
#define CCP1PPS2_size                            0x1
#define CCP1PPS2_value_mask                      0x4
#define CCP1PPS2_clear_mask                      0xFB

#define CCP1PPS3                                 0x3
#define CCP1PPS3_address                         0xE14
#define CCP1PPS3_position                        0x3
#define CCP1PPS3_size                            0x1
#define CCP1PPS3_value_mask                      0x8
#define CCP1PPS3_clear_mask                      0xF7

#define CCP1PPS4                                 0x4
#define CCP1PPS4_address                         0xE14
#define CCP1PPS4_position                        0x4
#define CCP1PPS4_size                            0x1
#define CCP1PPS4_value_mask                      0x10
#define CCP1PPS4_clear_mask                      0xEF


/*-----------------------------------------------------------------#
| CCP2PPS                                                    0xE15 |
#------------------------------------------------------------------#
| - | - | - | CCP2PPS4 | CCP2PPS3 | CCP2PPS2 | CCP2PPS1 | CCP2PPS0 |
#------------------------------------------------------------------#
| 7 | 6 | 5 | 4        | 3        | 2        | 1        | 0        |
#-----------------------------------------------------------------*/

#define CCP2PPS0                                 0x0
#define CCP2PPS0_address                         0xE15
#define CCP2PPS0_position                        0x0
#define CCP2PPS0_size                            0x1
#define CCP2PPS0_value_mask                      0x1
#define CCP2PPS0_clear_mask                      0xFE

#define CCP2PPS                                  0x0
#define CCP2PPS_address                          0xE15
#define CCP2PPS_position                         0x0
#define CCP2PPS_size                             0x5
#define CCP2PPS_value_mask                       0x1F
#define CCP2PPS_clear_mask                       0xE0

#define CCP2PPS1                                 0x1
#define CCP2PPS1_address                         0xE15
#define CCP2PPS1_position                        0x1
#define CCP2PPS1_size                            0x1
#define CCP2PPS1_value_mask                      0x2
#define CCP2PPS1_clear_mask                      0xFD

#define CCP2PPS2                                 0x2
#define CCP2PPS2_address                         0xE15
#define CCP2PPS2_position                        0x2
#define CCP2PPS2_size                            0x1
#define CCP2PPS2_value_mask                      0x4
#define CCP2PPS2_clear_mask                      0xFB

#define CCP2PPS3                                 0x3
#define CCP2PPS3_address                         0xE15
#define CCP2PPS3_position                        0x3
#define CCP2PPS3_size                            0x1
#define CCP2PPS3_value_mask                      0x8
#define CCP2PPS3_clear_mask                      0xF7

#define CCP2PPS4                                 0x4
#define CCP2PPS4_address                         0xE15
#define CCP2PPS4_position                        0x4
#define CCP2PPS4_size                            0x1
#define CCP2PPS4_value_mask                      0x10
#define CCP2PPS4_clear_mask                      0xEF


/*-----------------------------------------------------------------#
| CCP3PPS                                                    0xE16 |
#------------------------------------------------------------------#
| - | - | - | CCP3PPS4 | CCP3PPS3 | CCP3PPS2 | CCP3PPS1 | CCP3PPS0 |
#------------------------------------------------------------------#
| 7 | 6 | 5 | 4        | 3        | 2        | 1        | 0        |
#-----------------------------------------------------------------*/

#define CCP3PPS0                                 0x0
#define CCP3PPS0_address                         0xE16
#define CCP3PPS0_position                        0x0
#define CCP3PPS0_size                            0x1
#define CCP3PPS0_value_mask                      0x1
#define CCP3PPS0_clear_mask                      0xFE

#define CCP3PPS                                  0x0
#define CCP3PPS_address                          0xE16
#define CCP3PPS_position                         0x0
#define CCP3PPS_size                             0x5
#define CCP3PPS_value_mask                       0x1F
#define CCP3PPS_clear_mask                       0xE0

#define CCP3PPS1                                 0x1
#define CCP3PPS1_address                         0xE16
#define CCP3PPS1_position                        0x1
#define CCP3PPS1_size                            0x1
#define CCP3PPS1_value_mask                      0x2
#define CCP3PPS1_clear_mask                      0xFD

#define CCP3PPS2                                 0x2
#define CCP3PPS2_address                         0xE16
#define CCP3PPS2_position                        0x2
#define CCP3PPS2_size                            0x1
#define CCP3PPS2_value_mask                      0x4
#define CCP3PPS2_clear_mask                      0xFB

#define CCP3PPS3                                 0x3
#define CCP3PPS3_address                         0xE16
#define CCP3PPS3_position                        0x3
#define CCP3PPS3_size                            0x1
#define CCP3PPS3_value_mask                      0x8
#define CCP3PPS3_clear_mask                      0xF7

#define CCP3PPS4                                 0x4
#define CCP3PPS4_address                         0xE16
#define CCP3PPS4_position                        0x4
#define CCP3PPS4_size                            0x1
#define CCP3PPS4_value_mask                      0x10
#define CCP3PPS4_clear_mask                      0xEF


/*-----------------------------------------------------------------#
| CCP4PPS                                                    0xE17 |
#------------------------------------------------------------------#
| - | - | - | CCP4PPS4 | CCP4PPS3 | CCP4PPS2 | CCP4PPS1 | CCP4PPS0 |
#------------------------------------------------------------------#
| 7 | 6 | 5 | 4        | 3        | 2        | 1        | 0        |
#-----------------------------------------------------------------*/

#define CCP4PPS0                                 0x0
#define CCP4PPS0_address                         0xE17
#define CCP4PPS0_position                        0x0
#define CCP4PPS0_size                            0x1
#define CCP4PPS0_value_mask                      0x1
#define CCP4PPS0_clear_mask                      0xFE

#define CCP4PPS                                  0x0
#define CCP4PPS_address                          0xE17
#define CCP4PPS_position                         0x0
#define CCP4PPS_size                             0x5
#define CCP4PPS_value_mask                       0x1F
#define CCP4PPS_clear_mask                       0xE0

#define CCP4PPS1                                 0x1
#define CCP4PPS1_address                         0xE17
#define CCP4PPS1_position                        0x1
#define CCP4PPS1_size                            0x1
#define CCP4PPS1_value_mask                      0x2
#define CCP4PPS1_clear_mask                      0xFD

#define CCP4PPS2                                 0x2
#define CCP4PPS2_address                         0xE17
#define CCP4PPS2_position                        0x2
#define CCP4PPS2_size                            0x1
#define CCP4PPS2_value_mask                      0x4
#define CCP4PPS2_clear_mask                      0xFB

#define CCP4PPS3                                 0x3
#define CCP4PPS3_address                         0xE17
#define CCP4PPS3_position                        0x3
#define CCP4PPS3_size                            0x1
#define CCP4PPS3_value_mask                      0x8
#define CCP4PPS3_clear_mask                      0xF7

#define CCP4PPS4                                 0x4
#define CCP4PPS4_address                         0xE17
#define CCP4PPS4_position                        0x4
#define CCP4PPS4_size                            0x1
#define CCP4PPS4_value_mask                      0x10
#define CCP4PPS4_clear_mask                      0xEF


/*-----------------------------------------------------------------#
| CWG1PPS                                                    0xE18 |
#------------------------------------------------------------------#
| - | - | - | CWG1PPS4 | CWG1PPS3 | CWG1PPS2 | CWG1PPS1 | CWG1PPS0 |
#------------------------------------------------------------------#
| 7 | 6 | 5 | 4        | 3        | 2        | 1        | 0        |
#-----------------------------------------------------------------*/

#define CWG1PPS0                                 0x0
#define CWG1PPS0_address                         0xE18
#define CWG1PPS0_position                        0x0
#define CWG1PPS0_size                            0x1
#define CWG1PPS0_value_mask                      0x1
#define CWG1PPS0_clear_mask                      0xFE

#define CWG1PPS                                  0x0
#define CWG1PPS_address                          0xE18
#define CWG1PPS_position                         0x0
#define CWG1PPS_size                             0x5
#define CWG1PPS_value_mask                       0x1F
#define CWG1PPS_clear_mask                       0xE0

#define CWG1PPS1                                 0x1
#define CWG1PPS1_address                         0xE18
#define CWG1PPS1_position                        0x1
#define CWG1PPS1_size                            0x1
#define CWG1PPS1_value_mask                      0x2
#define CWG1PPS1_clear_mask                      0xFD

#define CWG1PPS2                                 0x2
#define CWG1PPS2_address                         0xE18
#define CWG1PPS2_position                        0x2
#define CWG1PPS2_size                            0x1
#define CWG1PPS2_value_mask                      0x4
#define CWG1PPS2_clear_mask                      0xFB

#define CWG1PPS3                                 0x3
#define CWG1PPS3_address                         0xE18
#define CWG1PPS3_position                        0x3
#define CWG1PPS3_size                            0x1
#define CWG1PPS3_value_mask                      0x8
#define CWG1PPS3_clear_mask                      0xF7

#define CWG1PPS4                                 0x4
#define CWG1PPS4_address                         0xE18
#define CWG1PPS4_position                        0x4
#define CWG1PPS4_size                            0x1
#define CWG1PPS4_value_mask                      0x10
#define CWG1PPS4_clear_mask                      0xEF


/*-----------------------------------------------------------------#
| CWG2PPS                                                    0xE19 |
#------------------------------------------------------------------#
| - | - | - | CWG2PPS4 | CWG2PPS3 | CWG2PPS2 | CWG2PPS1 | CWG2PPS0 |
#------------------------------------------------------------------#
| 7 | 6 | 5 | 4        | 3        | 2        | 1        | 0        |
#-----------------------------------------------------------------*/

#define CWG2PPS0                                 0x0
#define CWG2PPS0_address                         0xE19
#define CWG2PPS0_position                        0x0
#define CWG2PPS0_size                            0x1
#define CWG2PPS0_value_mask                      0x1
#define CWG2PPS0_clear_mask                      0xFE

#define CWG2PPS                                  0x0
#define CWG2PPS_address                          0xE19
#define CWG2PPS_position                         0x0
#define CWG2PPS_size                             0x5
#define CWG2PPS_value_mask                       0x1F
#define CWG2PPS_clear_mask                       0xE0

#define CWG2PPS1                                 0x1
#define CWG2PPS1_address                         0xE19
#define CWG2PPS1_position                        0x1
#define CWG2PPS1_size                            0x1
#define CWG2PPS1_value_mask                      0x2
#define CWG2PPS1_clear_mask                      0xFD

#define CWG2PPS2                                 0x2
#define CWG2PPS2_address                         0xE19
#define CWG2PPS2_position                        0x2
#define CWG2PPS2_size                            0x1
#define CWG2PPS2_value_mask                      0x4
#define CWG2PPS2_clear_mask                      0xFB

#define CWG2PPS3                                 0x3
#define CWG2PPS3_address                         0xE19
#define CWG2PPS3_position                        0x3
#define CWG2PPS3_size                            0x1
#define CWG2PPS3_value_mask                      0x8
#define CWG2PPS3_clear_mask                      0xF7

#define CWG2PPS4                                 0x4
#define CWG2PPS4_address                         0xE19
#define CWG2PPS4_position                        0x4
#define CWG2PPS4_size                            0x1
#define CWG2PPS4_value_mask                      0x10
#define CWG2PPS4_clear_mask                      0xEF


/*---------------------------------------------------------------------------#
| MDCIN1PPS                                                            0xE1A |
#----------------------------------------------------------------------------#
| - | - | - | MDCIN1PPS4 | MDCIN1PPS3 | MDCIN1PPS2 | MDCIN1PPS1 | MDCIN1PPS0 |
#----------------------------------------------------------------------------#
| 7 | 6 | 5 | 4          | 3          | 2          | 1          | 0          |
#---------------------------------------------------------------------------*/

#define MDCIN1PPS                                0x0
#define MDCIN1PPS_address                        0xE1A
#define MDCIN1PPS_position                       0x0
#define MDCIN1PPS_size                           0x5
#define MDCIN1PPS_value_mask                     0x1F
#define MDCIN1PPS_clear_mask                     0xE0

#define MDCIN1PPS0                               0x0
#define MDCIN1PPS0_address                       0xE1A
#define MDCIN1PPS0_position                      0x0
#define MDCIN1PPS0_size                          0x1
#define MDCIN1PPS0_value_mask                    0x1
#define MDCIN1PPS0_clear_mask                    0xFE

#define MDCIN1PPS1                               0x1
#define MDCIN1PPS1_address                       0xE1A
#define MDCIN1PPS1_position                      0x1
#define MDCIN1PPS1_size                          0x1
#define MDCIN1PPS1_value_mask                    0x2
#define MDCIN1PPS1_clear_mask                    0xFD

#define MDCIN1PPS2                               0x2
#define MDCIN1PPS2_address                       0xE1A
#define MDCIN1PPS2_position                      0x2
#define MDCIN1PPS2_size                          0x1
#define MDCIN1PPS2_value_mask                    0x4
#define MDCIN1PPS2_clear_mask                    0xFB

#define MDCIN1PPS3                               0x3
#define MDCIN1PPS3_address                       0xE1A
#define MDCIN1PPS3_position                      0x3
#define MDCIN1PPS3_size                          0x1
#define MDCIN1PPS3_value_mask                    0x8
#define MDCIN1PPS3_clear_mask                    0xF7

#define MDCIN1PPS4                               0x4
#define MDCIN1PPS4_address                       0xE1A
#define MDCIN1PPS4_position                      0x4
#define MDCIN1PPS4_size                          0x1
#define MDCIN1PPS4_value_mask                    0x10
#define MDCIN1PPS4_clear_mask                    0xEF


/*---------------------------------------------------------------------------#
| MDCIN2PPS                                                            0xE1B |
#----------------------------------------------------------------------------#
| - | - | - | MDCIN2PPS4 | MDCIN2PPS3 | MDCIN2PPS2 | MDCIN2PPS1 | MDCIN2PPS0 |
#----------------------------------------------------------------------------#
| 7 | 6 | 5 | 4          | 3          | 2          | 1          | 0          |
#---------------------------------------------------------------------------*/

#define MDCIN2PPS0                               0x0
#define MDCIN2PPS0_address                       0xE1B
#define MDCIN2PPS0_position                      0x0
#define MDCIN2PPS0_size                          0x1
#define MDCIN2PPS0_value_mask                    0x1
#define MDCIN2PPS0_clear_mask                    0xFE

#define MDCIN2PPS                                0x0
#define MDCIN2PPS_address                        0xE1B
#define MDCIN2PPS_position                       0x0
#define MDCIN2PPS_size                           0x5
#define MDCIN2PPS_value_mask                     0x1F
#define MDCIN2PPS_clear_mask                     0xE0

#define MDCIN2PPS1                               0x1
#define MDCIN2PPS1_address                       0xE1B
#define MDCIN2PPS1_position                      0x1
#define MDCIN2PPS1_size                          0x1
#define MDCIN2PPS1_value_mask                    0x2
#define MDCIN2PPS1_clear_mask                    0xFD

#define MDCIN2PPS2                               0x2
#define MDCIN2PPS2_address                       0xE1B
#define MDCIN2PPS2_position                      0x2
#define MDCIN2PPS2_size                          0x1
#define MDCIN2PPS2_value_mask                    0x4
#define MDCIN2PPS2_clear_mask                    0xFB

#define MDCIN2PPS3                               0x3
#define MDCIN2PPS3_address                       0xE1B
#define MDCIN2PPS3_position                      0x3
#define MDCIN2PPS3_size                          0x1
#define MDCIN2PPS3_value_mask                    0x8
#define MDCIN2PPS3_clear_mask                    0xF7

#define MDCIN2PPS4                               0x4
#define MDCIN2PPS4_address                       0xE1B
#define MDCIN2PPS4_position                      0x4
#define MDCIN2PPS4_size                          0x1
#define MDCIN2PPS4_value_mask                    0x10
#define MDCIN2PPS4_clear_mask                    0xEF


/*----------------------------------------------------------------------#
| MDMINPPS                                                        0xE1C |
#-----------------------------------------------------------------------#
| - | - | - | MDMINPPS4 | MDMINPPS3 | MDMINPPS2 | MDMINPPS1 | MDMINPPS0 |
#-----------------------------------------------------------------------#
| 7 | 6 | 5 | 4         | 3         | 2         | 1         | 0         |
#----------------------------------------------------------------------*/

#define MDMINPPS                                 0x0
#define MDMINPPS_address                         0xE1C
#define MDMINPPS_position                        0x0
#define MDMINPPS_size                            0x5
#define MDMINPPS_value_mask                      0x1F
#define MDMINPPS_clear_mask                      0xE0

#define MDMINPPS0                                0x0
#define MDMINPPS0_address                        0xE1C
#define MDMINPPS0_position                       0x0
#define MDMINPPS0_size                           0x1
#define MDMINPPS0_value_mask                     0x1
#define MDMINPPS0_clear_mask                     0xFE

#define MDMINPPS1                                0x1
#define MDMINPPS1_address                        0xE1C
#define MDMINPPS1_position                       0x1
#define MDMINPPS1_size                           0x1
#define MDMINPPS1_value_mask                     0x2
#define MDMINPPS1_clear_mask                     0xFD

#define MDMINPPS2                                0x2
#define MDMINPPS2_address                        0xE1C
#define MDMINPPS2_position                       0x2
#define MDMINPPS2_size                           0x1
#define MDMINPPS2_value_mask                     0x4
#define MDMINPPS2_clear_mask                     0xFB

#define MDMINPPS3                                0x3
#define MDMINPPS3_address                        0xE1C
#define MDMINPPS3_position                       0x3
#define MDMINPPS3_size                           0x1
#define MDMINPPS3_value_mask                     0x8
#define MDMINPPS3_clear_mask                     0xF7

#define MDMINPPS4                                0x4
#define MDMINPPS4_address                        0xE1C
#define MDMINPPS4_position                       0x4
#define MDMINPPS4_size                           0x1
#define MDMINPPS4_value_mask                     0x10
#define MDMINPPS4_clear_mask                     0xEF


/*--------------------------------------------------------------------------------#
| SSP1CLKPPS                                                                0xE20 |
#---------------------------------------------------------------------------------#
| - | - | - | SSP1CLKPPS4 | SSP1CLKPPS3 | SSP1CLKPPS2 | SSP1CLKPPS1 | SSP1CLKPPS0 |
#---------------------------------------------------------------------------------#
| 7 | 6 | 5 | 4           | 3           | 2           | 1           | 0           |
#--------------------------------------------------------------------------------*/

#define SSP1CLKPPS0                              0x0
#define SSP1CLKPPS0_address                      0xE20
#define SSP1CLKPPS0_position                     0x0
#define SSP1CLKPPS0_size                         0x1
#define SSP1CLKPPS0_value_mask                   0x1
#define SSP1CLKPPS0_clear_mask                   0xFE

#define SSP1CLKPPS                               0x0
#define SSP1CLKPPS_address                       0xE20
#define SSP1CLKPPS_position                      0x0
#define SSP1CLKPPS_size                          0x5
#define SSP1CLKPPS_value_mask                    0x1F
#define SSP1CLKPPS_clear_mask                    0xE0

#define SSP1CLKPPS1                              0x1
#define SSP1CLKPPS1_address                      0xE20
#define SSP1CLKPPS1_position                     0x1
#define SSP1CLKPPS1_size                         0x1
#define SSP1CLKPPS1_value_mask                   0x2
#define SSP1CLKPPS1_clear_mask                   0xFD

#define SSP1CLKPPS2                              0x2
#define SSP1CLKPPS2_address                      0xE20
#define SSP1CLKPPS2_position                     0x2
#define SSP1CLKPPS2_size                         0x1
#define SSP1CLKPPS2_value_mask                   0x4
#define SSP1CLKPPS2_clear_mask                   0xFB

#define SSP1CLKPPS3                              0x3
#define SSP1CLKPPS3_address                      0xE20
#define SSP1CLKPPS3_position                     0x3
#define SSP1CLKPPS3_size                         0x1
#define SSP1CLKPPS3_value_mask                   0x8
#define SSP1CLKPPS3_clear_mask                   0xF7

#define SSP1CLKPPS4                              0x4
#define SSP1CLKPPS4_address                      0xE20
#define SSP1CLKPPS4_position                     0x4
#define SSP1CLKPPS4_size                         0x1
#define SSP1CLKPPS4_value_mask                   0x10
#define SSP1CLKPPS4_clear_mask                   0xEF


/*--------------------------------------------------------------------------------#
| SSP1DATPPS                                                                0xE21 |
#---------------------------------------------------------------------------------#
| - | - | - | SSP1DATPPS4 | SSP1DATPPS3 | SSP1DATPPS2 | SSP1DATPPS1 | SSP1DATPPS0 |
#---------------------------------------------------------------------------------#
| 7 | 6 | 5 | 4           | 3           | 2           | 1           | 0           |
#--------------------------------------------------------------------------------*/

#define SSP1DATPPS0                              0x0
#define SSP1DATPPS0_address                      0xE21
#define SSP1DATPPS0_position                     0x0
#define SSP1DATPPS0_size                         0x1
#define SSP1DATPPS0_value_mask                   0x1
#define SSP1DATPPS0_clear_mask                   0xFE

#define SSP1DATPPS                               0x0
#define SSP1DATPPS_address                       0xE21
#define SSP1DATPPS_position                      0x0
#define SSP1DATPPS_size                          0x5
#define SSP1DATPPS_value_mask                    0x1F
#define SSP1DATPPS_clear_mask                    0xE0

#define SSP1DATPPS1                              0x1
#define SSP1DATPPS1_address                      0xE21
#define SSP1DATPPS1_position                     0x1
#define SSP1DATPPS1_size                         0x1
#define SSP1DATPPS1_value_mask                   0x2
#define SSP1DATPPS1_clear_mask                   0xFD

#define SSP1DATPPS2                              0x2
#define SSP1DATPPS2_address                      0xE21
#define SSP1DATPPS2_position                     0x2
#define SSP1DATPPS2_size                         0x1
#define SSP1DATPPS2_value_mask                   0x4
#define SSP1DATPPS2_clear_mask                   0xFB

#define SSP1DATPPS3                              0x3
#define SSP1DATPPS3_address                      0xE21
#define SSP1DATPPS3_position                     0x3
#define SSP1DATPPS3_size                         0x1
#define SSP1DATPPS3_value_mask                   0x8
#define SSP1DATPPS3_clear_mask                   0xF7

#define SSP1DATPPS4                              0x4
#define SSP1DATPPS4_address                      0xE21
#define SSP1DATPPS4_position                     0x4
#define SSP1DATPPS4_size                         0x1
#define SSP1DATPPS4_value_mask                   0x10
#define SSP1DATPPS4_clear_mask                   0xEF


/*---------------------------------------------------------------------------#
| SSP1SSPPS                                                            0xE22 |
#----------------------------------------------------------------------------#
| - | - | - | SSP1SSPPS4 | SSP1SSPPS3 | SSP1SSPPS2 | SSP1SSPPS1 | SSP1SSPPS0 |
#----------------------------------------------------------------------------#
| 7 | 6 | 5 | 4          | 3          | 2          | 1          | 0          |
#---------------------------------------------------------------------------*/

#define SSP1SSPPS                                0x0
#define SSP1SSPPS_address                        0xE22
#define SSP1SSPPS_position                       0x0
#define SSP1SSPPS_size                           0x5
#define SSP1SSPPS_value_mask                     0x1F
#define SSP1SSPPS_clear_mask                     0xE0

#define SSP1SSPPS0                               0x0
#define SSP1SSPPS0_address                       0xE22
#define SSP1SSPPS0_position                      0x0
#define SSP1SSPPS0_size                          0x1
#define SSP1SSPPS0_value_mask                    0x1
#define SSP1SSPPS0_clear_mask                    0xFE

#define SSP1SSPPS1                               0x1
#define SSP1SSPPS1_address                       0xE22
#define SSP1SSPPS1_position                      0x1
#define SSP1SSPPS1_size                          0x1
#define SSP1SSPPS1_value_mask                    0x2
#define SSP1SSPPS1_clear_mask                    0xFD

#define SSP1SSPPS2                               0x2
#define SSP1SSPPS2_address                       0xE22
#define SSP1SSPPS2_position                      0x2
#define SSP1SSPPS2_size                          0x1
#define SSP1SSPPS2_value_mask                    0x4
#define SSP1SSPPS2_clear_mask                    0xFB

#define SSP1SSPPS3                               0x3
#define SSP1SSPPS3_address                       0xE22
#define SSP1SSPPS3_position                      0x3
#define SSP1SSPPS3_size                          0x1
#define SSP1SSPPS3_value_mask                    0x8
#define SSP1SSPPS3_clear_mask                    0xF7

#define SSP1SSPPS4                               0x4
#define SSP1SSPPS4_address                       0xE22
#define SSP1SSPPS4_position                      0x4
#define SSP1SSPPS4_size                          0x1
#define SSP1SSPPS4_value_mask                    0x10
#define SSP1SSPPS4_clear_mask                    0xEF


/*-----------------------------------------------------------------#
| RXPPS                                                      0xE24 |
#------------------------------------------------------------------#
| - | - | - | RXDTPPS4 | RXDTPPS3 | RXDTPPS2 | RXDTPPS1 | RXDTPPS0 |
#------------------------------------------------------------------#
| 7 | 6 | 5 | 4        | 3        | 2        | 1        | 0        |
#-----------------------------------------------------------------*/

#define RXPPS                                    0x0
#define RXPPS_address                            0xE24
#define RXPPS_position                           0x0
#define RXPPS_size                               0x5
#define RXPPS_value_mask                         0x1F
#define RXPPS_clear_mask                         0xE0

#define RXDTPPS0                                 0x0
#define RXDTPPS0_address                         0xE24
#define RXDTPPS0_position                        0x0
#define RXDTPPS0_size                            0x1
#define RXDTPPS0_value_mask                      0x1
#define RXDTPPS0_clear_mask                      0xFE

#define RXDTPPS1                                 0x1
#define RXDTPPS1_address                         0xE24
#define RXDTPPS1_position                        0x1
#define RXDTPPS1_size                            0x1
#define RXDTPPS1_value_mask                      0x2
#define RXDTPPS1_clear_mask                      0xFD

#define RXDTPPS2                                 0x2
#define RXDTPPS2_address                         0xE24
#define RXDTPPS2_position                        0x2
#define RXDTPPS2_size                            0x1
#define RXDTPPS2_value_mask                      0x4
#define RXDTPPS2_clear_mask                      0xFB

#define RXDTPPS3                                 0x3
#define RXDTPPS3_address                         0xE24
#define RXDTPPS3_position                        0x3
#define RXDTPPS3_size                            0x1
#define RXDTPPS3_value_mask                      0x8
#define RXDTPPS3_clear_mask                      0xF7

#define RXDTPPS4                                 0x4
#define RXDTPPS4_address                         0xE24
#define RXDTPPS4_position                        0x4
#define RXDTPPS4_size                            0x1
#define RXDTPPS4_value_mask                      0x10
#define RXDTPPS4_clear_mask                      0xEF


/*-----------------------------------------------------------------#
| TXPPS                                                      0xE25 |
#------------------------------------------------------------------#
| - | - | - | TXCKPPS4 | TXCKPPS3 | TXCKPPS2 | TXCKPPS1 | TXCKPPS0 |
#------------------------------------------------------------------#
| 7 | 6 | 5 | 4        | 3        | 2        | 1        | 0        |
#-----------------------------------------------------------------*/

#define TXCKPPS0                                 0x0
#define TXCKPPS0_address                         0xE25
#define TXCKPPS0_position                        0x0
#define TXCKPPS0_size                            0x1
#define TXCKPPS0_value_mask                      0x1
#define TXCKPPS0_clear_mask                      0xFE

#define TXPPS                                    0x0
#define TXPPS_address                            0xE25
#define TXPPS_position                           0x0
#define TXPPS_size                               0x5
#define TXPPS_value_mask                         0x1F
#define TXPPS_clear_mask                         0xE0

#define TXCKPPS1                                 0x1
#define TXCKPPS1_address                         0xE25
#define TXCKPPS1_position                        0x1
#define TXCKPPS1_size                            0x1
#define TXCKPPS1_value_mask                      0x2
#define TXCKPPS1_clear_mask                      0xFD

#define TXCKPPS2                                 0x2
#define TXCKPPS2_address                         0xE25
#define TXCKPPS2_position                        0x2
#define TXCKPPS2_size                            0x1
#define TXCKPPS2_value_mask                      0x4
#define TXCKPPS2_clear_mask                      0xFB

#define TXCKPPS3                                 0x3
#define TXCKPPS3_address                         0xE25
#define TXCKPPS3_position                        0x3
#define TXCKPPS3_size                            0x1
#define TXCKPPS3_value_mask                      0x8
#define TXCKPPS3_clear_mask                      0xF7

#define TXCKPPS4                                 0x4
#define TXCKPPS4_address                         0xE25
#define TXCKPPS4_position                        0x4
#define TXCKPPS4_size                            0x1
#define TXCKPPS4_value_mask                      0x10
#define TXCKPPS4_clear_mask                      0xEF


/*---------------------------------------------------------------------------#
| CLCIN0PPS                                                            0xE28 |
#----------------------------------------------------------------------------#
| - | - | - | CLCIN0PPS4 | CLCIN0PPS3 | CLCIN0PPS2 | CLCIN0PPS1 | CLCIN0PPS0 |
#----------------------------------------------------------------------------#
| 7 | 6 | 5 | 4          | 3          | 2          | 1          | 0          |
#---------------------------------------------------------------------------*/

#define CLCIN0PPS                                0x0
#define CLCIN0PPS_address                        0xE28
#define CLCIN0PPS_position                       0x0
#define CLCIN0PPS_size                           0x5
#define CLCIN0PPS_value_mask                     0x1F
#define CLCIN0PPS_clear_mask                     0xE0

#define CLCIN0PPS0                               0x0
#define CLCIN0PPS0_address                       0xE28
#define CLCIN0PPS0_position                      0x0
#define CLCIN0PPS0_size                          0x1
#define CLCIN0PPS0_value_mask                    0x1
#define CLCIN0PPS0_clear_mask                    0xFE

#define CLCIN0PPS1                               0x1
#define CLCIN0PPS1_address                       0xE28
#define CLCIN0PPS1_position                      0x1
#define CLCIN0PPS1_size                          0x1
#define CLCIN0PPS1_value_mask                    0x2
#define CLCIN0PPS1_clear_mask                    0xFD

#define CLCIN0PPS2                               0x2
#define CLCIN0PPS2_address                       0xE28
#define CLCIN0PPS2_position                      0x2
#define CLCIN0PPS2_size                          0x1
#define CLCIN0PPS2_value_mask                    0x4
#define CLCIN0PPS2_clear_mask                    0xFB

#define CLCIN0PPS3                               0x3
#define CLCIN0PPS3_address                       0xE28
#define CLCIN0PPS3_position                      0x3
#define CLCIN0PPS3_size                          0x1
#define CLCIN0PPS3_value_mask                    0x8
#define CLCIN0PPS3_clear_mask                    0xF7

#define CLCIN0PPS4                               0x4
#define CLCIN0PPS4_address                       0xE28
#define CLCIN0PPS4_position                      0x4
#define CLCIN0PPS4_size                          0x1
#define CLCIN0PPS4_value_mask                    0x10
#define CLCIN0PPS4_clear_mask                    0xEF


/*---------------------------------------------------------------------------#
| CLCIN1PPS                                                            0xE29 |
#----------------------------------------------------------------------------#
| - | - | - | CLCIN1PPS4 | CLCIN1PPS3 | CLCIN1PPS2 | CLCIN1PPS1 | CLCIN1PPS0 |
#----------------------------------------------------------------------------#
| 7 | 6 | 5 | 4          | 3          | 2          | 1          | 0          |
#---------------------------------------------------------------------------*/

#define CLCIN1PPS0                               0x0
#define CLCIN1PPS0_address                       0xE29
#define CLCIN1PPS0_position                      0x0
#define CLCIN1PPS0_size                          0x1
#define CLCIN1PPS0_value_mask                    0x1
#define CLCIN1PPS0_clear_mask                    0xFE

#define CLCIN1PPS                                0x0
#define CLCIN1PPS_address                        0xE29
#define CLCIN1PPS_position                       0x0
#define CLCIN1PPS_size                           0x5
#define CLCIN1PPS_value_mask                     0x1F
#define CLCIN1PPS_clear_mask                     0xE0

#define CLCIN1PPS1                               0x1
#define CLCIN1PPS1_address                       0xE29
#define CLCIN1PPS1_position                      0x1
#define CLCIN1PPS1_size                          0x1
#define CLCIN1PPS1_value_mask                    0x2
#define CLCIN1PPS1_clear_mask                    0xFD

#define CLCIN1PPS2                               0x2
#define CLCIN1PPS2_address                       0xE29
#define CLCIN1PPS2_position                      0x2
#define CLCIN1PPS2_size                          0x1
#define CLCIN1PPS2_value_mask                    0x4
#define CLCIN1PPS2_clear_mask                    0xFB

#define CLCIN1PPS3                               0x3
#define CLCIN1PPS3_address                       0xE29
#define CLCIN1PPS3_position                      0x3
#define CLCIN1PPS3_size                          0x1
#define CLCIN1PPS3_value_mask                    0x8
#define CLCIN1PPS3_clear_mask                    0xF7

#define CLCIN1PPS4                               0x4
#define CLCIN1PPS4_address                       0xE29
#define CLCIN1PPS4_position                      0x4
#define CLCIN1PPS4_size                          0x1
#define CLCIN1PPS4_value_mask                    0x10
#define CLCIN1PPS4_clear_mask                    0xEF


/*---------------------------------------------------------------------------#
| CLCIN2PPS                                                            0xE2A |
#----------------------------------------------------------------------------#
| - | - | - | CLCIN2PPS4 | CLCIN2PPS3 | CLCIN2PPS2 | CLCIN2PPS1 | CLCIN2PPS0 |
#----------------------------------------------------------------------------#
| 7 | 6 | 5 | 4          | 3          | 2          | 1          | 0          |
#---------------------------------------------------------------------------*/

#define CLCIN2PPS                                0x0
#define CLCIN2PPS_address                        0xE2A
#define CLCIN2PPS_position                       0x0
#define CLCIN2PPS_size                           0x5
#define CLCIN2PPS_value_mask                     0x1F
#define CLCIN2PPS_clear_mask                     0xE0

#define CLCIN2PPS0                               0x0
#define CLCIN2PPS0_address                       0xE2A
#define CLCIN2PPS0_position                      0x0
#define CLCIN2PPS0_size                          0x1
#define CLCIN2PPS0_value_mask                    0x1
#define CLCIN2PPS0_clear_mask                    0xFE

#define CLCIN2PPS1                               0x1
#define CLCIN2PPS1_address                       0xE2A
#define CLCIN2PPS1_position                      0x1
#define CLCIN2PPS1_size                          0x1
#define CLCIN2PPS1_value_mask                    0x2
#define CLCIN2PPS1_clear_mask                    0xFD

#define CLCIN2PPS2                               0x2
#define CLCIN2PPS2_address                       0xE2A
#define CLCIN2PPS2_position                      0x2
#define CLCIN2PPS2_size                          0x1
#define CLCIN2PPS2_value_mask                    0x4
#define CLCIN2PPS2_clear_mask                    0xFB

#define CLCIN2PPS3                               0x3
#define CLCIN2PPS3_address                       0xE2A
#define CLCIN2PPS3_position                      0x3
#define CLCIN2PPS3_size                          0x1
#define CLCIN2PPS3_value_mask                    0x8
#define CLCIN2PPS3_clear_mask                    0xF7

#define CLCIN2PPS4                               0x4
#define CLCIN2PPS4_address                       0xE2A
#define CLCIN2PPS4_position                      0x4
#define CLCIN2PPS4_size                          0x1
#define CLCIN2PPS4_value_mask                    0x10
#define CLCIN2PPS4_clear_mask                    0xEF


/*---------------------------------------------------------------------------#
| CLCIN3PPS                                                            0xE2B |
#----------------------------------------------------------------------------#
| - | - | - | CLCIN3PPS4 | CLCIN3PPS3 | CLCIN3PPS2 | CLCIN3PPS1 | CLCIN3PPS0 |
#----------------------------------------------------------------------------#
| 7 | 6 | 5 | 4          | 3          | 2          | 1          | 0          |
#---------------------------------------------------------------------------*/

#define CLCIN3PPS                                0x0
#define CLCIN3PPS_address                        0xE2B
#define CLCIN3PPS_position                       0x0
#define CLCIN3PPS_size                           0x5
#define CLCIN3PPS_value_mask                     0x1F
#define CLCIN3PPS_clear_mask                     0xE0

#define CLCIN3PPS0                               0x0
#define CLCIN3PPS0_address                       0xE2B
#define CLCIN3PPS0_position                      0x0
#define CLCIN3PPS0_size                          0x1
#define CLCIN3PPS0_value_mask                    0x1
#define CLCIN3PPS0_clear_mask                    0xFE

#define CLCIN3PPS1                               0x1
#define CLCIN3PPS1_address                       0xE2B
#define CLCIN3PPS1_position                      0x1
#define CLCIN3PPS1_size                          0x1
#define CLCIN3PPS1_value_mask                    0x2
#define CLCIN3PPS1_clear_mask                    0xFD

#define CLCIN3PPS2                               0x2
#define CLCIN3PPS2_address                       0xE2B
#define CLCIN3PPS2_position                      0x2
#define CLCIN3PPS2_size                          0x1
#define CLCIN3PPS2_value_mask                    0x4
#define CLCIN3PPS2_clear_mask                    0xFB

#define CLCIN3PPS3                               0x3
#define CLCIN3PPS3_address                       0xE2B
#define CLCIN3PPS3_position                      0x3
#define CLCIN3PPS3_size                          0x1
#define CLCIN3PPS3_value_mask                    0x8
#define CLCIN3PPS3_clear_mask                    0xF7

#define CLCIN3PPS4                               0x4
#define CLCIN3PPS4_address                       0xE2B
#define CLCIN3PPS4_position                      0x4
#define CLCIN3PPS4_size                          0x1
#define CLCIN3PPS4_value_mask                    0x10
#define CLCIN3PPS4_clear_mask                    0xEF


/*------------------------------#
| T3CKIPPS                0xE2C |
#-------------------------------#
| - | - | - | T3CKIPPS          |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define T3CKIPPS                                 0x0
#define T3CKIPPS_address                         0xE2C
#define T3CKIPPS_position                        0x0
#define T3CKIPPS_size                            0x5
#define T3CKIPPS_value_mask                      0x1F
#define T3CKIPPS_clear_mask                      0xE0


/*------------------------------#
| T3GPPS                  0xE2D |
#-------------------------------#
| - | - | - | T3GPPS            |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define T3GPPS                                   0x0
#define T3GPPS_address                           0xE2D
#define T3GPPS_position                          0x0
#define T3GPPS_size                              0x5
#define T3GPPS_value_mask                        0x1F
#define T3GPPS_clear_mask                        0xE0


/*------------------------------#
| T5CKIPPS                0xE2E |
#-------------------------------#
| - | - | - | T5CKIPPS          |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define T5CKIPPS                                 0x0
#define T5CKIPPS_address                         0xE2E
#define T5CKIPPS_position                        0x0
#define T5CKIPPS_size                            0x5
#define T5CKIPPS_value_mask                      0x1F
#define T5CKIPPS_clear_mask                      0xE0


/*------------------------------#
| T5GPPS                  0xE2F |
#-------------------------------#
| - | - | - | T5GPPS            |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define T5GPPS                                   0x0
#define T5GPPS_address                           0xE2F
#define T5GPPS_position                          0x0
#define T5GPPS_size                              0x5
#define T5GPPS_value_mask                        0x1F
#define T5GPPS_clear_mask                        0xE0


/*------------------------------------------------------------#
| RA0PPS                                                0xE90 |
#-------------------------------------------------------------#
| - | - | - | RA0PPS4 | RA0PPS3 | RA0PPS2 | RA0PPS1 | RA0PPS0 |
#-------------------------------------------------------------#
| 7 | 6 | 5 | 4       | 3       | 2       | 1       | 0       |
#------------------------------------------------------------*/

#define RA0PPS                                   0x0
#define RA0PPS_address                           0xE90
#define RA0PPS_position                          0x0
#define RA0PPS_size                              0x5
#define RA0PPS_value_mask                        0x1F
#define RA0PPS_clear_mask                        0xE0

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

#define RA0PPS4                                  0x4
#define RA0PPS4_address                          0xE90
#define RA0PPS4_position                         0x4
#define RA0PPS4_size                             0x1
#define RA0PPS4_value_mask                       0x10
#define RA0PPS4_clear_mask                       0xEF


/*------------------------------------------------------------#
| RA1PPS                                                0xE91 |
#-------------------------------------------------------------#
| - | - | - | RA1PPS4 | RA1PPS3 | RA1PPS2 | RA1PPS1 | RA1PPS0 |
#-------------------------------------------------------------#
| 7 | 6 | 5 | 4       | 3       | 2       | 1       | 0       |
#------------------------------------------------------------*/

#define RA1PPS                                   0x0
#define RA1PPS_address                           0xE91
#define RA1PPS_position                          0x0
#define RA1PPS_size                              0x5
#define RA1PPS_value_mask                        0x1F
#define RA1PPS_clear_mask                        0xE0

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

#define RA1PPS4                                  0x4
#define RA1PPS4_address                          0xE91
#define RA1PPS4_position                         0x4
#define RA1PPS4_size                             0x1
#define RA1PPS4_value_mask                       0x10
#define RA1PPS4_clear_mask                       0xEF


/*------------------------------------------------------------#
| RA2PPS                                                0xE92 |
#-------------------------------------------------------------#
| - | - | - | RA2PPS4 | RA2PPS3 | RA2PPS2 | RA2PPS1 | RA2PPS0 |
#-------------------------------------------------------------#
| 7 | 6 | 5 | 4       | 3       | 2       | 1       | 0       |
#------------------------------------------------------------*/

#define RA2PPS0                                  0x0
#define RA2PPS0_address                          0xE92
#define RA2PPS0_position                         0x0
#define RA2PPS0_size                             0x1
#define RA2PPS0_value_mask                       0x1
#define RA2PPS0_clear_mask                       0xFE

#define RA2PPS                                   0x0
#define RA2PPS_address                           0xE92
#define RA2PPS_position                          0x0
#define RA2PPS_size                              0x5
#define RA2PPS_value_mask                        0x1F
#define RA2PPS_clear_mask                        0xE0

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

#define RA2PPS4                                  0x4
#define RA2PPS4_address                          0xE92
#define RA2PPS4_position                         0x4
#define RA2PPS4_size                             0x1
#define RA2PPS4_value_mask                       0x10
#define RA2PPS4_clear_mask                       0xEF


/*------------------------------------------------------------#
| RA4PPS                                                0xE94 |
#-------------------------------------------------------------#
| - | - | - | RA4PPS4 | RA4PPS3 | RA4PPS2 | RA4PPS1 | RA4PPS0 |
#-------------------------------------------------------------#
| 7 | 6 | 5 | 4       | 3       | 2       | 1       | 0       |
#------------------------------------------------------------*/

#define RA4PPS                                   0x0
#define RA4PPS_address                           0xE94
#define RA4PPS_position                          0x0
#define RA4PPS_size                              0x5
#define RA4PPS_value_mask                        0x1F
#define RA4PPS_clear_mask                        0xE0

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

#define RA4PPS4                                  0x4
#define RA4PPS4_address                          0xE94
#define RA4PPS4_position                         0x4
#define RA4PPS4_size                             0x1
#define RA4PPS4_value_mask                       0x10
#define RA4PPS4_clear_mask                       0xEF


/*------------------------------------------------------------#
| RA5PPS                                                0xE95 |
#-------------------------------------------------------------#
| - | - | - | RA5PPS4 | RA5PPS3 | RA5PPS2 | RA5PPS1 | RA5PPS0 |
#-------------------------------------------------------------#
| 7 | 6 | 5 | 4       | 3       | 2       | 1       | 0       |
#------------------------------------------------------------*/

#define RA5PPS                                   0x0
#define RA5PPS_address                           0xE95
#define RA5PPS_position                          0x0
#define RA5PPS_size                              0x5
#define RA5PPS_value_mask                        0x1F
#define RA5PPS_clear_mask                        0xE0

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

#define RA5PPS4                                  0x4
#define RA5PPS4_address                          0xE95
#define RA5PPS4_position                         0x4
#define RA5PPS4_size                             0x1
#define RA5PPS4_value_mask                       0x10
#define RA5PPS4_clear_mask                       0xEF


/*------------------------------------------------------------#
| RC0PPS                                                0xEA0 |
#-------------------------------------------------------------#
| - | - | - | RC0PPS4 | RC0PPS3 | RC0PPS2 | RC0PPS1 | RC0PPS0 |
#-------------------------------------------------------------#
| 7 | 6 | 5 | 4       | 3       | 2       | 1       | 0       |
#------------------------------------------------------------*/

#define RC0PPS                                   0x0
#define RC0PPS_address                           0xEA0
#define RC0PPS_position                          0x0
#define RC0PPS_size                              0x5
#define RC0PPS_value_mask                        0x1F
#define RC0PPS_clear_mask                        0xE0

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

#define RC0PPS4                                  0x4
#define RC0PPS4_address                          0xEA0
#define RC0PPS4_position                         0x4
#define RC0PPS4_size                             0x1
#define RC0PPS4_value_mask                       0x10
#define RC0PPS4_clear_mask                       0xEF


/*------------------------------------------------------------#
| RC1PPS                                                0xEA1 |
#-------------------------------------------------------------#
| - | - | - | RC1PPS4 | RC1PPS3 | RC1PPS2 | RC1PPS1 | RC1PPS0 |
#-------------------------------------------------------------#
| 7 | 6 | 5 | 4       | 3       | 2       | 1       | 0       |
#------------------------------------------------------------*/

#define RC1PPS0                                  0x0
#define RC1PPS0_address                          0xEA1
#define RC1PPS0_position                         0x0
#define RC1PPS0_size                             0x1
#define RC1PPS0_value_mask                       0x1
#define RC1PPS0_clear_mask                       0xFE

#define RC1PPS                                   0x0
#define RC1PPS_address                           0xEA1
#define RC1PPS_position                          0x0
#define RC1PPS_size                              0x5
#define RC1PPS_value_mask                        0x1F
#define RC1PPS_clear_mask                        0xE0

#define RC1PPS1                                  0x1
#define RC1PPS1_address                          0xEA1
#define RC1PPS1_position                         0x1
#define RC1PPS1_size                             0x1
#define RC1PPS1_value_mask                       0x2
#define RC1PPS1_clear_mask                       0xFD

#define RC1PPS2                                  0x2
#define RC1PPS2_address                          0xEA1
#define RC1PPS2_position                         0x2
#define RC1PPS2_size                             0x1
#define RC1PPS2_value_mask                       0x4
#define RC1PPS2_clear_mask                       0xFB

#define RC1PPS3                                  0x3
#define RC1PPS3_address                          0xEA1
#define RC1PPS3_position                         0x3
#define RC1PPS3_size                             0x1
#define RC1PPS3_value_mask                       0x8
#define RC1PPS3_clear_mask                       0xF7

#define RC1PPS4                                  0x4
#define RC1PPS4_address                          0xEA1
#define RC1PPS4_position                         0x4
#define RC1PPS4_size                             0x1
#define RC1PPS4_value_mask                       0x10
#define RC1PPS4_clear_mask                       0xEF


/*------------------------------------------------------------#
| RC2PPS                                                0xEA2 |
#-------------------------------------------------------------#
| - | - | - | RC2PPS4 | RC2PPS3 | RC2PPS2 | RC2PPS1 | RC2PPS0 |
#-------------------------------------------------------------#
| 7 | 6 | 5 | 4       | 3       | 2       | 1       | 0       |
#------------------------------------------------------------*/

#define RC2PPS                                   0x0
#define RC2PPS_address                           0xEA2
#define RC2PPS_position                          0x0
#define RC2PPS_size                              0x5
#define RC2PPS_value_mask                        0x1F
#define RC2PPS_clear_mask                        0xE0

#define RC2PPS0                                  0x0
#define RC2PPS0_address                          0xEA2
#define RC2PPS0_position                         0x0
#define RC2PPS0_size                             0x1
#define RC2PPS0_value_mask                       0x1
#define RC2PPS0_clear_mask                       0xFE

#define RC2PPS1                                  0x1
#define RC2PPS1_address                          0xEA2
#define RC2PPS1_position                         0x1
#define RC2PPS1_size                             0x1
#define RC2PPS1_value_mask                       0x2
#define RC2PPS1_clear_mask                       0xFD

#define RC2PPS2                                  0x2
#define RC2PPS2_address                          0xEA2
#define RC2PPS2_position                         0x2
#define RC2PPS2_size                             0x1
#define RC2PPS2_value_mask                       0x4
#define RC2PPS2_clear_mask                       0xFB

#define RC2PPS3                                  0x3
#define RC2PPS3_address                          0xEA2
#define RC2PPS3_position                         0x3
#define RC2PPS3_size                             0x1
#define RC2PPS3_value_mask                       0x8
#define RC2PPS3_clear_mask                       0xF7

#define RC2PPS4                                  0x4
#define RC2PPS4_address                          0xEA2
#define RC2PPS4_position                         0x4
#define RC2PPS4_size                             0x1
#define RC2PPS4_value_mask                       0x10
#define RC2PPS4_clear_mask                       0xEF


/*------------------------------------------------------------#
| RC3PPS                                                0xEA3 |
#-------------------------------------------------------------#
| - | - | - | RC3PPS4 | RC3PPS3 | RC3PPS2 | RC3PPS1 | RC3PPS0 |
#-------------------------------------------------------------#
| 7 | 6 | 5 | 4       | 3       | 2       | 1       | 0       |
#------------------------------------------------------------*/

#define RC3PPS                                   0x0
#define RC3PPS_address                           0xEA3
#define RC3PPS_position                          0x0
#define RC3PPS_size                              0x5
#define RC3PPS_value_mask                        0x1F
#define RC3PPS_clear_mask                        0xE0

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

#define RC3PPS4                                  0x4
#define RC3PPS4_address                          0xEA3
#define RC3PPS4_position                         0x4
#define RC3PPS4_size                             0x1
#define RC3PPS4_value_mask                       0x10
#define RC3PPS4_clear_mask                       0xEF


/*------------------------------------------------------------#
| RC4PPS                                                0xEA4 |
#-------------------------------------------------------------#
| - | - | - | RC4PPS4 | RC4PPS3 | RC4PPS2 | RC4PPS1 | RC4PPS0 |
#-------------------------------------------------------------#
| 7 | 6 | 5 | 4       | 3       | 2       | 1       | 0       |
#------------------------------------------------------------*/

#define RC4PPS0                                  0x0
#define RC4PPS0_address                          0xEA4
#define RC4PPS0_position                         0x0
#define RC4PPS0_size                             0x1
#define RC4PPS0_value_mask                       0x1
#define RC4PPS0_clear_mask                       0xFE

#define RC4PPS                                   0x0
#define RC4PPS_address                           0xEA4
#define RC4PPS_position                          0x0
#define RC4PPS_size                              0x5
#define RC4PPS_value_mask                        0x1F
#define RC4PPS_clear_mask                        0xE0

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

#define RC4PPS4                                  0x4
#define RC4PPS4_address                          0xEA4
#define RC4PPS4_position                         0x4
#define RC4PPS4_size                             0x1
#define RC4PPS4_value_mask                       0x10
#define RC4PPS4_clear_mask                       0xEF


/*------------------------------------------------------------#
| RC5PPS                                                0xEA5 |
#-------------------------------------------------------------#
| - | - | - | RC5PPS4 | RC5PPS3 | RC5PPS2 | RC5PPS1 | RC5PPS0 |
#-------------------------------------------------------------#
| 7 | 6 | 5 | 4       | 3       | 2       | 1       | 0       |
#------------------------------------------------------------*/

#define RC5PPS0                                  0x0
#define RC5PPS0_address                          0xEA5
#define RC5PPS0_position                         0x0
#define RC5PPS0_size                             0x1
#define RC5PPS0_value_mask                       0x1
#define RC5PPS0_clear_mask                       0xFE

#define RC5PPS                                   0x0
#define RC5PPS_address                           0xEA5
#define RC5PPS_position                          0x0
#define RC5PPS_size                              0x5
#define RC5PPS_value_mask                        0x1F
#define RC5PPS_clear_mask                        0xE0

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

#define RC5PPS4                                  0x4
#define RC5PPS4_address                          0xEA5
#define RC5PPS4_position                         0x4
#define RC5PPS4_size                             0x1
#define RC5PPS4_value_mask                       0x10
#define RC5PPS4_clear_mask                       0xEF


/*------------------------------------------------------#
| CLCDATA                                         0xF0F |
#-------------------------------------------------------#
| - | - | - | - | MLC4OUT | MLC3OUT | MLC2OUT | MLC1OUT |
#-------------------------------------------------------#
| 7 | 6 | 5 | 4 | 3       | 2       | 1       | 0       |
#------------------------------------------------------*/

#define CLCDATA                                  0x0
#define CLCDATA_address                          0xF0F
#define CLCDATA_position                         0x0
#define CLCDATA_size                             0x8
#define CLCDATA_value_mask                       0xFF
#define CLCDATA_clear_mask                       0x0

#define MLC1OUT                                  0x0
#define MLC1OUT_address                          0xF0F
#define MLC1OUT_position                         0x0
#define MLC1OUT_size                             0x1
#define MLC1OUT_value_mask                       0x1
#define MLC1OUT_clear_mask                       0xFE

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

#define MLC4OUT                                  0x3
#define MLC4OUT_address                          0xF0F
#define MLC4OUT_position                         0x3
#define MLC4OUT_size                             0x1
#define MLC4OUT_value_mask                       0x8
#define MLC4OUT_clear_mask                       0xF7


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

#define CLC1CON_MODE0                            0x0
#define CLC1CON_MODE0_address                    0xF10
#define CLC1CON_MODE0_position                   0x0
#define CLC1CON_MODE0_size                       0x1
#define CLC1CON_MODE0_value_mask                 0x1
#define CLC1CON_MODE0_clear_mask                 0xFE

#define LC1MODE                                  0x0
#define LC1MODE_address                          0xF10
#define LC1MODE_position                         0x0
#define LC1MODE_size                             0x3
#define LC1MODE_value_mask                       0x7
#define LC1MODE_clear_mask                       0xF8

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

#define CLC1CON_MODE1                            0x1
#define CLC1CON_MODE1_address                    0xF10
#define CLC1CON_MODE1_position                   0x1
#define CLC1CON_MODE1_size                       0x1
#define CLC1CON_MODE1_value_mask                 0x2
#define CLC1CON_MODE1_clear_mask                 0xFD

#define LC1MODE1                                 0x1
#define LC1MODE1_address                         0xF10
#define LC1MODE1_position                        0x1
#define LC1MODE1_size                            0x1
#define LC1MODE1_value_mask                      0x2
#define LC1MODE1_clear_mask                      0xFD

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

#define CLC1CON_INTP                             0x4
#define CLC1CON_INTP_address                     0xF10
#define CLC1CON_INTP_position                    0x4
#define CLC1CON_INTP_size                        0x1
#define CLC1CON_INTP_value_mask                  0x10
#define CLC1CON_INTP_clear_mask                  0xEF

#define LC1INTP                                  0x4
#define LC1INTP_address                          0xF10
#define LC1INTP_position                         0x4
#define LC1INTP_size                             0x1
#define LC1INTP_value_mask                       0x10
#define LC1INTP_clear_mask                       0xEF

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

#define CLC1CON_EN                               0x7
#define CLC1CON_EN_address                       0xF10
#define CLC1CON_EN_position                      0x7
#define CLC1CON_EN_size                          0x1
#define CLC1CON_EN_value_mask                    0x80
#define CLC1CON_EN_clear_mask                    0x7F

#define LC1EN                                    0x7
#define LC1EN_address                            0xF10
#define LC1EN_position                           0x7
#define LC1EN_size                               0x1
#define LC1EN_value_mask                         0x80
#define LC1EN_clear_mask                         0x7F


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
| - | - | LC1D1S5 | LC1D1S4 | LC1D1S3 | CLC1SEL0_D1S2 | CLC1SEL0_D1S1 | CLC1SEL0_D1S0 |
#-------------------------------------------------------------------------------------#
| 7 | 6 | 5       | 4       | 3       | 2             | 1             | 0             |
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

#define LC1D1S                                   0x0
#define LC1D1S_address                           0xF12
#define LC1D1S_position                          0x0
#define LC1D1S_size                              0x8
#define LC1D1S_value_mask                        0xFF
#define LC1D1S_clear_mask                        0x0

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

#define LC1D1S3                                  0x3
#define LC1D1S3_address                          0xF12
#define LC1D1S3_position                         0x3
#define LC1D1S3_size                             0x1
#define LC1D1S3_value_mask                       0x8
#define LC1D1S3_clear_mask                       0xF7

#define CLC1SEL0_D1S3                            0x3
#define CLC1SEL0_D1S3_address                    0xF12
#define CLC1SEL0_D1S3_position                   0x3
#define CLC1SEL0_D1S3_size                       0x1
#define CLC1SEL0_D1S3_value_mask                 0x8
#define CLC1SEL0_D1S3_clear_mask                 0xF7

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

#define CLC1SEL0_D1S5                            0x5
#define CLC1SEL0_D1S5_address                    0xF12
#define CLC1SEL0_D1S5_position                   0x5
#define CLC1SEL0_D1S5_size                       0x1
#define CLC1SEL0_D1S5_value_mask                 0x20
#define CLC1SEL0_D1S5_clear_mask                 0xDF

#define LC1D1S5                                  0x5
#define LC1D1S5_address                          0xF12
#define LC1D1S5_position                         0x5
#define LC1D1S5_size                             0x1
#define LC1D1S5_value_mask                       0x20
#define LC1D1S5_clear_mask                       0xDF


/*------------------------------------------------------------------------#
| CLC1SEL1                                                          0xF13 |
#-------------------------------------------------------------------------#
| - | - | LC1D2S5 | LC1D2S4 | CLC1SEL1_D2S3 | LC1D2S2 | LC1D2S1 | LC1D2S0 |
#-------------------------------------------------------------------------#
| 7 | 6 | 5       | 4       | 3             | 2       | 1       | 0       |
#------------------------------------------------------------------------*/

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

#define CLC1SEL1_D2S2                            0x2
#define CLC1SEL1_D2S2_address                    0xF13
#define CLC1SEL1_D2S2_position                   0x2
#define CLC1SEL1_D2S2_size                       0x1
#define CLC1SEL1_D2S2_value_mask                 0x4
#define CLC1SEL1_D2S2_clear_mask                 0xFB

#define LC1D2S2                                  0x2
#define LC1D2S2_address                          0xF13
#define LC1D2S2_position                         0x2
#define LC1D2S2_size                             0x1
#define LC1D2S2_value_mask                       0x4
#define LC1D2S2_clear_mask                       0xFB

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

#define LC1D2S5                                  0x5
#define LC1D2S5_address                          0xF13
#define LC1D2S5_position                         0x5
#define LC1D2S5_size                             0x1
#define LC1D2S5_value_mask                       0x20
#define LC1D2S5_clear_mask                       0xDF

#define CLC1SEL1_D2S5                            0x5
#define CLC1SEL1_D2S5_address                    0xF13
#define CLC1SEL1_D2S5_position                   0x5
#define CLC1SEL1_D2S5_size                       0x1
#define CLC1SEL1_D2S5_value_mask                 0x20
#define CLC1SEL1_D2S5_clear_mask                 0xDF


/*------------------------------------------------------------------#
| CLC1SEL2                                                    0xF14 |
#-------------------------------------------------------------------#
| - | - | LC1D3S5 | LC1D3S4 | LC1D3S3 | LC1D3S2 | LC1D3S1 | LC1D3S0 |
#-------------------------------------------------------------------#
| 7 | 6 | 5       | 4       | 3       | 2       | 1       | 0       |
#------------------------------------------------------------------*/

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

#define LC1D3S5                                  0x5
#define LC1D3S5_address                          0xF14
#define LC1D3S5_position                         0x5
#define LC1D3S5_size                             0x1
#define LC1D3S5_value_mask                       0x20
#define LC1D3S5_clear_mask                       0xDF

#define CLC1SEL2_D3S5                            0x5
#define CLC1SEL2_D3S5_address                    0xF14
#define CLC1SEL2_D3S5_position                   0x5
#define CLC1SEL2_D3S5_size                       0x1
#define CLC1SEL2_D3S5_value_mask                 0x20
#define CLC1SEL2_D3S5_clear_mask                 0xDF


/*------------------------------------------------------------------#
| CLC1SEL3                                                    0xF15 |
#-------------------------------------------------------------------#
| - | - | LC1D4S5 | LC1D4S4 | LC1D4S3 | LC1D4S2 | LC1D4S1 | LC1D4S0 |
#-------------------------------------------------------------------#
| 7 | 6 | 5       | 4       | 3       | 2       | 1       | 0       |
#------------------------------------------------------------------*/

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

#define LC1D4S5                                  0x5
#define LC1D4S5_address                          0xF15
#define LC1D4S5_position                         0x5
#define LC1D4S5_size                             0x1
#define LC1D4S5_value_mask                       0x20
#define LC1D4S5_clear_mask                       0xDF

#define CLC1SEL3_D4S5                            0x5
#define CLC1SEL3_D4S5_address                    0xF15
#define CLC1SEL3_D4S5_position                   0x5
#define CLC1SEL3_D4S5_size                       0x1
#define CLC1SEL3_D4S5_value_mask                 0x20
#define CLC1SEL3_D4S5_clear_mask                 0xDF


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


/*------------------------------------------------------------------#
| CLC2SEL0                                                    0xF1C |
#-------------------------------------------------------------------#
| - | - | LC2D1S5 | LC2D1S4 | LC2D1S3 | LC2D1S2 | LC2D1S1 | LC2D1S0 |
#-------------------------------------------------------------------#
| 7 | 6 | 5       | 4       | 3       | 2       | 1       | 0       |
#------------------------------------------------------------------*/

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

#define LC2D1S5                                  0x5
#define LC2D1S5_address                          0xF1C
#define LC2D1S5_position                         0x5
#define LC2D1S5_size                             0x1
#define LC2D1S5_value_mask                       0x20
#define LC2D1S5_clear_mask                       0xDF

#define CLC2SEL0_D1S5                            0x5
#define CLC2SEL0_D1S5_address                    0xF1C
#define CLC2SEL0_D1S5_position                   0x5
#define CLC2SEL0_D1S5_size                       0x1
#define CLC2SEL0_D1S5_value_mask                 0x20
#define CLC2SEL0_D1S5_clear_mask                 0xDF


/*------------------------------------------------------------------#
| CLC2SEL1                                                    0xF1D |
#-------------------------------------------------------------------#
| - | - | LC2D2S5 | LC2D2S4 | LC2D2S3 | LC2D2S2 | LC2D2S1 | LC2D2S0 |
#-------------------------------------------------------------------#
| 7 | 6 | 5       | 4       | 3       | 2       | 1       | 0       |
#------------------------------------------------------------------*/

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

#define LC2D2S5                                  0x5
#define LC2D2S5_address                          0xF1D
#define LC2D2S5_position                         0x5
#define LC2D2S5_size                             0x1
#define LC2D2S5_value_mask                       0x20
#define LC2D2S5_clear_mask                       0xDF

#define CLC2SEL1_D2S5                            0x5
#define CLC2SEL1_D2S5_address                    0xF1D
#define CLC2SEL1_D2S5_position                   0x5
#define CLC2SEL1_D2S5_size                       0x1
#define CLC2SEL1_D2S5_value_mask                 0x20
#define CLC2SEL1_D2S5_clear_mask                 0xDF


/*------------------------------------------------------------------------#
| CLC2SEL2                                                          0xF1E |
#-------------------------------------------------------------------------#
| - | - | LC2D3S5 | LC2D3S4 | LC2D3S3 | LC2D3S2 | CLC2SEL2_D3S1 | LC2D3S0 |
#-------------------------------------------------------------------------#
| 7 | 6 | 5       | 4       | 3       | 2       | 1             | 0       |
#------------------------------------------------------------------------*/

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

#define LC2D3S5                                  0x5
#define LC2D3S5_address                          0xF1E
#define LC2D3S5_position                         0x5
#define LC2D3S5_size                             0x1
#define LC2D3S5_value_mask                       0x20
#define LC2D3S5_clear_mask                       0xDF

#define CLC2SEL2_D3S5                            0x5
#define CLC2SEL2_D3S5_address                    0xF1E
#define CLC2SEL2_D3S5_position                   0x5
#define CLC2SEL2_D3S5_size                       0x1
#define CLC2SEL2_D3S5_value_mask                 0x20
#define CLC2SEL2_D3S5_clear_mask                 0xDF


/*------------------------------------------------------------------#
| CLC2SEL3                                                    0xF1F |
#-------------------------------------------------------------------#
| - | - | LC2D4S5 | LC2D4S4 | LC2D4S3 | LC2D4S2 | LC2D4S1 | LC2D4S0 |
#-------------------------------------------------------------------#
| 7 | 6 | 5       | 4       | 3       | 2       | 1       | 0       |
#------------------------------------------------------------------*/

#define CLC2SEL3                                 0x0
#define CLC2SEL3_address                         0xF1F
#define CLC2SEL3_position                        0x0
#define CLC2SEL3_size                            0x8
#define CLC2SEL3_value_mask                      0xFF
#define CLC2SEL3_clear_mask                      0x0

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

#define LC2D4S                                   0x0
#define LC2D4S_address                           0xF1F
#define LC2D4S_position                          0x0
#define LC2D4S_size                              0x8
#define LC2D4S_value_mask                        0xFF
#define LC2D4S_clear_mask                        0x0

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

#define LC2D4S5                                  0x5
#define LC2D4S5_address                          0xF1F
#define LC2D4S5_position                         0x5
#define LC2D4S5_size                             0x1
#define LC2D4S5_value_mask                       0x20
#define LC2D4S5_clear_mask                       0xDF

#define CLC2SEL3_D4S5                            0x5
#define CLC2SEL3_D4S5_address                    0xF1F
#define CLC2SEL3_D4S5_position                   0x5
#define CLC2SEL3_D4S5_size                       0x1
#define CLC2SEL3_D4S5_value_mask                 0x20
#define CLC2SEL3_D4S5_clear_mask                 0xDF


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


/*------------------------------------------------------------------#
| CLC3SEL0                                                    0xF26 |
#-------------------------------------------------------------------#
| - | - | LC3D1S5 | LC3D1S4 | LC3D1S3 | LC3D1S2 | LC3D1S1 | LC3D1S0 |
#-------------------------------------------------------------------#
| 7 | 6 | 5       | 4       | 3       | 2       | 1       | 0       |
#------------------------------------------------------------------*/

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

#define CLC3SEL0_D1S                             0x0
#define CLC3SEL0_D1S_address                     0xF26
#define CLC3SEL0_D1S_position                    0x0
#define CLC3SEL0_D1S_size                        0x8
#define CLC3SEL0_D1S_value_mask                  0xFF
#define CLC3SEL0_D1S_clear_mask                  0x0

#define LC3D1S                                   0x0
#define LC3D1S_address                           0xF26
#define LC3D1S_position                          0x0
#define LC3D1S_size                              0x8
#define LC3D1S_value_mask                        0xFF
#define LC3D1S_clear_mask                        0x0

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

#define LC3D1S5                                  0x5
#define LC3D1S5_address                          0xF26
#define LC3D1S5_position                         0x5
#define LC3D1S5_size                             0x1
#define LC3D1S5_value_mask                       0x20
#define LC3D1S5_clear_mask                       0xDF

#define CLC3SEL0_D1S5                            0x5
#define CLC3SEL0_D1S5_address                    0xF26
#define CLC3SEL0_D1S5_position                   0x5
#define CLC3SEL0_D1S5_size                       0x1
#define CLC3SEL0_D1S5_value_mask                 0x20
#define CLC3SEL0_D1S5_clear_mask                 0xDF


/*------------------------------------------------------------------#
| CLC3SEL1                                                    0xF27 |
#-------------------------------------------------------------------#
| - | - | LC3D2S5 | LC3D2S4 | LC3D2S3 | LC3D2S2 | LC3D2S1 | LC3D2S0 |
#-------------------------------------------------------------------#
| 7 | 6 | 5       | 4       | 3       | 2       | 1       | 0       |
#------------------------------------------------------------------*/

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

#define CLC3SEL1_D2S4                            0x4
#define CLC3SEL1_D2S4_address                    0xF27
#define CLC3SEL1_D2S4_position                   0x4
#define CLC3SEL1_D2S4_size                       0x1
#define CLC3SEL1_D2S4_value_mask                 0x10
#define CLC3SEL1_D2S4_clear_mask                 0xEF

#define LC3D2S4                                  0x4
#define LC3D2S4_address                          0xF27
#define LC3D2S4_position                         0x4
#define LC3D2S4_size                             0x1
#define LC3D2S4_value_mask                       0x10
#define LC3D2S4_clear_mask                       0xEF

#define CLC3SEL1_D2S5                            0x5
#define CLC3SEL1_D2S5_address                    0xF27
#define CLC3SEL1_D2S5_position                   0x5
#define CLC3SEL1_D2S5_size                       0x1
#define CLC3SEL1_D2S5_value_mask                 0x20
#define CLC3SEL1_D2S5_clear_mask                 0xDF

#define LC3D2S5                                  0x5
#define LC3D2S5_address                          0xF27
#define LC3D2S5_position                         0x5
#define LC3D2S5_size                             0x1
#define LC3D2S5_value_mask                       0x20
#define LC3D2S5_clear_mask                       0xDF


/*------------------------------------------------------------------#
| CLC3SEL2                                                    0xF28 |
#-------------------------------------------------------------------#
| - | - | LC3D3S5 | LC3D3S4 | LC3D3S3 | LC3D3S2 | LC3D3S1 | LC3D3S0 |
#-------------------------------------------------------------------#
| 7 | 6 | 5       | 4       | 3       | 2       | 1       | 0       |
#------------------------------------------------------------------*/

#define CLC3SEL2                                 0x0
#define CLC3SEL2_address                         0xF28
#define CLC3SEL2_position                        0x0
#define CLC3SEL2_size                            0x8
#define CLC3SEL2_value_mask                      0xFF
#define CLC3SEL2_clear_mask                      0x0

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

#define CLC3SEL2_D3S0                            0x0
#define CLC3SEL2_D3S0_address                    0xF28
#define CLC3SEL2_D3S0_position                   0x0
#define CLC3SEL2_D3S0_size                       0x1
#define CLC3SEL2_D3S0_value_mask                 0x1
#define CLC3SEL2_D3S0_clear_mask                 0xFE

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

#define CLC3SEL2_D3S4                            0x4
#define CLC3SEL2_D3S4_address                    0xF28
#define CLC3SEL2_D3S4_position                   0x4
#define CLC3SEL2_D3S4_size                       0x1
#define CLC3SEL2_D3S4_value_mask                 0x10
#define CLC3SEL2_D3S4_clear_mask                 0xEF

#define LC3D3S4                                  0x4
#define LC3D3S4_address                          0xF28
#define LC3D3S4_position                         0x4
#define LC3D3S4_size                             0x1
#define LC3D3S4_value_mask                       0x10
#define LC3D3S4_clear_mask                       0xEF

#define CLC3SEL2_D3S5                            0x5
#define CLC3SEL2_D3S5_address                    0xF28
#define CLC3SEL2_D3S5_position                   0x5
#define CLC3SEL2_D3S5_size                       0x1
#define CLC3SEL2_D3S5_value_mask                 0x20
#define CLC3SEL2_D3S5_clear_mask                 0xDF

#define LC3D3S5                                  0x5
#define LC3D3S5_address                          0xF28
#define LC3D3S5_position                         0x5
#define LC3D3S5_size                             0x1
#define LC3D3S5_value_mask                       0x20
#define LC3D3S5_clear_mask                       0xDF


/*------------------------------------------------------------------#
| CLC3SEL3                                                    0xF29 |
#-------------------------------------------------------------------#
| - | - | LC3D4S5 | LC3D4S4 | LC3D4S3 | LC3D4S2 | LC3D4S1 | LC3D4S0 |
#-------------------------------------------------------------------#
| 7 | 6 | 5       | 4       | 3       | 2       | 1       | 0       |
#------------------------------------------------------------------*/

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

#define CLC3SEL3_D4S                             0x0
#define CLC3SEL3_D4S_address                     0xF29
#define CLC3SEL3_D4S_position                    0x0
#define CLC3SEL3_D4S_size                        0x8
#define CLC3SEL3_D4S_value_mask                  0xFF
#define CLC3SEL3_D4S_clear_mask                  0x0

#define LC3D4S                                   0x0
#define LC3D4S_address                           0xF29
#define LC3D4S_position                          0x0
#define LC3D4S_size                              0x8
#define LC3D4S_value_mask                        0xFF
#define LC3D4S_clear_mask                        0x0

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

#define LC3D4S5                                  0x5
#define LC3D4S5_address                          0xF29
#define LC3D4S5_position                         0x5
#define LC3D4S5_size                             0x1
#define LC3D4S5_value_mask                       0x20
#define LC3D4S5_clear_mask                       0xDF

#define CLC3SEL3_D4S5                            0x5
#define CLC3SEL3_D4S5_address                    0xF29
#define CLC3SEL3_D4S5_position                   0x5
#define CLC3SEL3_D4S5_size                       0x1
#define CLC3SEL3_D4S5_value_mask                 0x20
#define CLC3SEL3_D4S5_clear_mask                 0xDF


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


/*------------------------------------------------------------------------------------------------------#
| CLC4SEL0                                                                                        0xF30 |
#-------------------------------------------------------------------------------------------------------#
| - | - | CLC4SEL0_D1S5 | CLC4SEL0_D1S4 | CLC4SEL0_D1S3 | CLC4SEL0_D1S2 | CLC4SEL0_D1S1 | CLC4SEL0_D1S0 |
#-------------------------------------------------------------------------------------------------------#
| 7 | 6 | 5             | 4             | 3             | 2             | 1             | 0             |
#------------------------------------------------------------------------------------------------------*/

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

#define CLC4SEL0_D1S5                            0x5
#define CLC4SEL0_D1S5_address                    0xF30
#define CLC4SEL0_D1S5_position                   0x5
#define CLC4SEL0_D1S5_size                       0x1
#define CLC4SEL0_D1S5_value_mask                 0x20
#define CLC4SEL0_D1S5_clear_mask                 0xDF

#define LC4D1S5                                  0x5
#define LC4D1S5_address                          0xF30
#define LC4D1S5_position                         0x5
#define LC4D1S5_size                             0x1
#define LC4D1S5_value_mask                       0x20
#define LC4D1S5_clear_mask                       0xDF


/*------------------------------------------------------------------#
| CLC4SEL1                                                    0xF31 |
#-------------------------------------------------------------------#
| - | - | LC4D2S5 | LC4D2S4 | LC4D2S3 | LC4D2S2 | LC4D2S1 | LC4D2S0 |
#-------------------------------------------------------------------#
| 7 | 6 | 5       | 4       | 3       | 2       | 1       | 0       |
#------------------------------------------------------------------*/

#define CLC4SEL1                                 0x0
#define CLC4SEL1_address                         0xF31
#define CLC4SEL1_position                        0x0
#define CLC4SEL1_size                            0x8
#define CLC4SEL1_value_mask                      0xFF
#define CLC4SEL1_clear_mask                      0x0

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

#define LC4D2S                                   0x0
#define LC4D2S_address                           0xF31
#define LC4D2S_position                          0x0
#define LC4D2S_size                              0x8
#define LC4D2S_value_mask                        0xFF
#define LC4D2S_clear_mask                        0x0

#define CLC4SEL1_D2S1                            0x1
#define CLC4SEL1_D2S1_address                    0xF31
#define CLC4SEL1_D2S1_position                   0x1
#define CLC4SEL1_D2S1_size                       0x1
#define CLC4SEL1_D2S1_value_mask                 0x2
#define CLC4SEL1_D2S1_clear_mask                 0xFD

#define LC4D2S1                                  0x1
#define LC4D2S1_address                          0xF31
#define LC4D2S1_position                         0x1
#define LC4D2S1_size                             0x1
#define LC4D2S1_value_mask                       0x2
#define LC4D2S1_clear_mask                       0xFD

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

#define LC4D2S5                                  0x5
#define LC4D2S5_address                          0xF31
#define LC4D2S5_position                         0x5
#define LC4D2S5_size                             0x1
#define LC4D2S5_value_mask                       0x20
#define LC4D2S5_clear_mask                       0xDF

#define CLC4SEL1_D2S5                            0x5
#define CLC4SEL1_D2S5_address                    0xF31
#define CLC4SEL1_D2S5_position                   0x5
#define CLC4SEL1_D2S5_size                       0x1
#define CLC4SEL1_D2S5_value_mask                 0x20
#define CLC4SEL1_D2S5_clear_mask                 0xDF


/*------------------------------------------------------------------#
| CLC4SEL2                                                    0xF32 |
#-------------------------------------------------------------------#
| - | - | LC4D3S5 | LC4D3S4 | LC4D3S3 | LC4D3S2 | LC4D3S1 | LC4D3S0 |
#-------------------------------------------------------------------#
| 7 | 6 | 5       | 4       | 3       | 2       | 1       | 0       |
#------------------------------------------------------------------*/

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

#define CLC4SEL2_D3S4                            0x4
#define CLC4SEL2_D3S4_address                    0xF32
#define CLC4SEL2_D3S4_position                   0x4
#define CLC4SEL2_D3S4_size                       0x1
#define CLC4SEL2_D3S4_value_mask                 0x10
#define CLC4SEL2_D3S4_clear_mask                 0xEF

#define LC4D3S4                                  0x4
#define LC4D3S4_address                          0xF32
#define LC4D3S4_position                         0x4
#define LC4D3S4_size                             0x1
#define LC4D3S4_value_mask                       0x10
#define LC4D3S4_clear_mask                       0xEF

#define CLC4SEL2_D3S5                            0x5
#define CLC4SEL2_D3S5_address                    0xF32
#define CLC4SEL2_D3S5_position                   0x5
#define CLC4SEL2_D3S5_size                       0x1
#define CLC4SEL2_D3S5_value_mask                 0x20
#define CLC4SEL2_D3S5_clear_mask                 0xDF

#define LC4D3S5                                  0x5
#define LC4D3S5_address                          0xF32
#define LC4D3S5_position                         0x5
#define LC4D3S5_size                             0x1
#define LC4D3S5_value_mask                       0x20
#define LC4D3S5_clear_mask                       0xDF


/*------------------------------------------------------------------#
| CLC4SEL3                                                    0xF33 |
#-------------------------------------------------------------------#
| - | - | LC4D4S5 | LC4D4S4 | LC4D4S3 | LC4D4S2 | LC4D4S1 | LC4D4S0 |
#-------------------------------------------------------------------#
| 7 | 6 | 5       | 4       | 3       | 2       | 1       | 0       |
#------------------------------------------------------------------*/

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

#define LC4D4S5                                  0x5
#define LC4D4S5_address                          0xF33
#define LC4D4S5_position                         0x5
#define LC4D4S5_size                             0x1
#define LC4D4S5_value_mask                       0x20
#define LC4D4S5_clear_mask                       0xDF

#define CLC4SEL3_D4S5                            0x5
#define CLC4SEL3_D4S5_address                    0xF33
#define CLC4SEL3_D4S5_position                   0x5
#define CLC4SEL3_D4S5_size                       0x1
#define CLC4SEL3_D4S5_value_mask                 0x20
#define CLC4SEL3_D4S5_clear_mask                 0xDF


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

#endif // _PIC16F18324_H_
