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

#ifndef _PIC12F1501_H_
#define _PIC12F1501_H_


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


/*-------------------------------------------------#
| PIR1                                        0x11 |
#--------------------------------------------------#
| TMR1GIF | ADIF | - | - | - | - | TMR2IF | TMR1IF |
#--------------------------------------------------#
| 7       | 6    | 5 | 4 | 3 | 2 | 1      | 0      |
#-------------------------------------------------*/

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


/*--------------------------------------#
| PIR2                             0x12 |
#---------------------------------------#
| - | - | C1IF | - | - | NCO1IF | - | - |
#---------------------------------------#
| 7 | 6 | 5    | 4 | 3 | 2      | 1 | 0 |
#--------------------------------------*/

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

#define C1IF                                     0x5
#define C1IF_address                             0x012
#define C1IF_position                            0x5
#define C1IF_size                                0x1
#define C1IF_value_mask                          0x20
#define C1IF_clear_mask                          0xDF


/*----------------------------------------#
| PIR3                               0x13 |
#-----------------------------------------#
| - | - | - | - | - | - | CLC2IF | CLC1IF |
#-----------------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1      | 0      |
#----------------------------------------*/

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


/*-----------------------------------------------------------------------#
| T2CON                                                             0x1C |
#------------------------------------------------------------------------#
| - | TOUTPS3 | TOUTPS2 | TOUTPS1 | TOUTPS0 | TMR2ON | T2CKPS1 | T2CKPS0 |
#------------------------------------------------------------------------#
| 7 | 6       | 5       | 4       | 3       | 2      | 1       | 0       |
#-----------------------------------------------------------------------*/

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

#define TOUTPS0                                  0x3
#define TOUTPS0_address                          0x01C
#define TOUTPS0_position                         0x3
#define TOUTPS0_size                             0x1
#define TOUTPS0_value_mask                       0x8
#define TOUTPS0_clear_mask                       0xF7

#define T2OUTPS                                  0x3
#define T2OUTPS_address                          0x01C
#define T2OUTPS_position                         0x3
#define T2OUTPS_size                             0x4
#define T2OUTPS_value_mask                       0x78
#define T2OUTPS_clear_mask                       0x87

#define TOUTPS1                                  0x4
#define TOUTPS1_address                          0x01C
#define TOUTPS1_position                         0x4
#define TOUTPS1_size                             0x1
#define TOUTPS1_value_mask                       0x10
#define TOUTPS1_clear_mask                       0xEF

#define TOUTPS2                                  0x5
#define TOUTPS2_address                          0x01C
#define TOUTPS2_position                         0x5
#define TOUTPS2_size                             0x1
#define TOUTPS2_value_mask                       0x20
#define TOUTPS2_clear_mask                       0xDF

#define TOUTPS3                                  0x6
#define TOUTPS3_address                          0x01C
#define TOUTPS3_position                         0x6
#define TOUTPS3_size                             0x1
#define TOUTPS3_value_mask                       0x40
#define TOUTPS3_clear_mask                       0xBF


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


/*-------------------------------------------------#
| PIE1                                        0x91 |
#--------------------------------------------------#
| TMR1GIE | ADIE | - | - | - | - | TMR2IE | TMR1IE |
#--------------------------------------------------#
| 7       | 6    | 5 | 4 | 3 | 2 | 1      | 0      |
#-------------------------------------------------*/

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


/*--------------------------------------#
| PIE2                             0x92 |
#---------------------------------------#
| - | - | C1IE | - | - | NCO1IE | - | - |
#---------------------------------------#
| 7 | 6 | 5    | 4 | 3 | 2      | 1 | 0 |
#--------------------------------------*/

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

#define C1IE                                     0x5
#define C1IE_address                             0x092
#define C1IE_position                            0x5
#define C1IE_size                                0x1
#define C1IE_value_mask                          0x20
#define C1IE_clear_mask                          0xDF


/*----------------------------------------#
| PIE3                               0x93 |
#-----------------------------------------#
| - | - | - | - | - | - | CLC2IE | CLC1IE |
#-----------------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1      | 0      |
#----------------------------------------*/

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


/*---------------------------------------------#
| OSCSTAT                                 0x9A |
#----------------------------------------------#
| - | - | - | HFIOFR | - | - | LFIOFR | HFIOFS |
#----------------------------------------------#
| 7 | 6 | 5 | 4      | 3 | 2 | 1      | 0      |
#---------------------------------------------*/

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


/*-----------------------------------#
| CMOUT                        0x115 |
#------------------------------------#
| - | - | - | - | - | - | - | MC1OUT |
#------------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0      |
#-----------------------------------*/

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


/*-------------------------------------------------------------#
| APFCON                                                 0x11D |
#--------------------------------------------------------------#
| CWG1BSEL | CWG1ASEL | - | - | T1GSEL | - | CLC1SEL | NCO1SEL |
#--------------------------------------------------------------#
| 7        | 6        | 5 | 4 | 3      | 2 | 1       | 0       |
#-------------------------------------------------------------*/

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

#define CWG1ASEL                                 0x6
#define CWG1ASEL_address                         0x11D
#define CWG1ASEL_position                        0x6
#define CWG1ASEL_size                            0x1
#define CWG1ASEL_value_mask                      0x40
#define CWG1ASEL_clear_mask                      0xBF

#define CWG1BSEL                                 0x7
#define CWG1BSEL_address                         0x11D
#define CWG1BSEL_position                        0x7
#define CWG1BSEL_size                            0x1
#define CWG1BSEL_value_mask                      0x80
#define CWG1BSEL_clear_mask                      0x7F


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


/*----------------------------------------------------------------#
| CWG1CON2                                                  0x695 |
#-----------------------------------------------------------------#
| G1ASE | G1ARSEN | - | - | - | G1ASDSC1 | G1ASDSFLT | G1ASDSCLC2 |
#-----------------------------------------------------------------#
| 7     | 6       | 5 | 4 | 3 | 2        | 1         | 0          |
#----------------------------------------------------------------*/

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


/*--------------------------------------------#
| CLCDATA                               0xF0F |
#---------------------------------------------#
| - | - | - | - | - | - | MCLC2OUT | MCLC1OUT |
#---------------------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1        | 0        |
#--------------------------------------------*/

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


/*------------------------------#
| BSR_ICDSHAD             0xFE3 |
#-------------------------------#
| - | - | - | BSR_ICDSHAD       |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

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

#endif // _PIC12F1501_H_
