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

#ifndef _PIC16F1947_H_
#define _PIC16F1947_H_


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


/*-------------------------------------------------------------#
| PORTA                                                    0xC |
#--------------------------------------------------------------#
| CLKIN | CLKOUT | AN4 | SEG14 | SEG35 | SEG34 | SEG18 | SEG33 |
#--------------------------------------------------------------#
| 7     | 6      | 5   | 4     | 3     | 2     | 1     | 0     |
#-------------------------------------------------------------*/

#define PORTA                                    0x0
#define PORTA_address                            0x00C
#define PORTA_position                           0x0
#define PORTA_size                               0x8
#define PORTA_value_mask                         0xFF
#define PORTA_clear_mask                         0x0

#define SEG33                                    0x0
#define SEG33_address                            0x00C
#define SEG33_position                           0x0
#define SEG33_size                               0x1
#define SEG33_value_mask                         0x1
#define SEG33_clear_mask                         0xFE

#define AN0                                      0x0
#define AN0_address                              0x00C
#define AN0_position                             0x0
#define AN0_size                                 0x1
#define AN0_value_mask                           0x1
#define AN0_clear_mask                           0xFE

#define RA0                                      0x0
#define RA0_address                              0x00C
#define RA0_position                             0x0
#define RA0_size                                 0x1
#define RA0_value_mask                           0x1
#define RA0_clear_mask                           0xFE

#define CPS0                                     0x0
#define CPS0_address                             0x00C
#define CPS0_position                            0x0
#define CPS0_size                                0x1
#define CPS0_value_mask                          0x1
#define CPS0_clear_mask                          0xFE

#define SEG18                                    0x1
#define SEG18_address                            0x00C
#define SEG18_position                           0x1
#define SEG18_size                               0x1
#define SEG18_value_mask                         0x2
#define SEG18_clear_mask                         0xFD

#define AN1                                      0x1
#define AN1_address                              0x00C
#define AN1_position                             0x1
#define AN1_size                                 0x1
#define AN1_value_mask                           0x2
#define AN1_clear_mask                           0xFD

#define RA1                                      0x1
#define RA1_address                              0x00C
#define RA1_position                             0x1
#define RA1_size                                 0x1
#define RA1_value_mask                           0x2
#define RA1_clear_mask                           0xFD

#define CPS1                                     0x1
#define CPS1_address                             0x00C
#define CPS1_position                            0x1
#define CPS1_size                                0x1
#define CPS1_value_mask                          0x2
#define CPS1_clear_mask                          0xFD

#define SEG34                                    0x2
#define SEG34_address                            0x00C
#define SEG34_position                           0x2
#define SEG34_size                               0x1
#define SEG34_value_mask                         0x4
#define SEG34_clear_mask                         0xFB

#define AN2                                      0x2
#define AN2_address                              0x00C
#define AN2_position                             0x2
#define AN2_size                                 0x1
#define AN2_value_mask                           0x4
#define AN2_clear_mask                           0xFB

#define VREFM                                    0x2
#define VREFM_address                            0x00C
#define VREFM_position                           0x2
#define VREFM_size                               0x1
#define VREFM_value_mask                         0x4
#define VREFM_clear_mask                         0xFB

#define RA2                                      0x2
#define RA2_address                              0x00C
#define RA2_position                             0x2
#define RA2_size                                 0x1
#define RA2_value_mask                           0x4
#define RA2_clear_mask                           0xFB

#define CPS2                                     0x2
#define CPS2_address                             0x00C
#define CPS2_position                            0x2
#define CPS2_size                                0x1
#define CPS2_value_mask                          0x4
#define CPS2_clear_mask                          0xFB

#define SEG35                                    0x3
#define SEG35_address                            0x00C
#define SEG35_position                           0x3
#define SEG35_size                               0x1
#define SEG35_value_mask                         0x8
#define SEG35_clear_mask                         0xF7

#define AN3                                      0x3
#define AN3_address                              0x00C
#define AN3_position                             0x3
#define AN3_size                                 0x1
#define AN3_value_mask                           0x8
#define AN3_clear_mask                           0xF7

#define RA3                                      0x3
#define RA3_address                              0x00C
#define RA3_position                             0x3
#define RA3_size                                 0x1
#define RA3_value_mask                           0x8
#define RA3_clear_mask                           0xF7

#define VREFP                                    0x3
#define VREFP_address                            0x00C
#define VREFP_position                           0x3
#define VREFP_size                               0x1
#define VREFP_value_mask                         0x8
#define VREFP_clear_mask                         0xF7

#define CPS3                                     0x3
#define CPS3_address                             0x00C
#define CPS3_position                            0x3
#define CPS3_size                                0x1
#define CPS3_value_mask                          0x8
#define CPS3_clear_mask                          0xF7

#define SEG14                                    0x4
#define SEG14_address                            0x00C
#define SEG14_position                           0x4
#define SEG14_size                               0x1
#define SEG14_value_mask                         0x10
#define SEG14_clear_mask                         0xEF

#define T0CKI                                    0x4
#define T0CKI_address                            0x00C
#define T0CKI_position                           0x4
#define T0CKI_size                               0x1
#define T0CKI_value_mask                         0x10
#define T0CKI_clear_mask                         0xEF

#define RA4                                      0x4
#define RA4_address                              0x00C
#define RA4_position                             0x4
#define RA4_size                                 0x1
#define RA4_value_mask                           0x10
#define RA4_clear_mask                           0xEF

#define AN4                                      0x5
#define AN4_address                              0x00C
#define AN4_position                             0x5
#define AN4_size                                 0x1
#define AN4_value_mask                           0x20
#define AN4_clear_mask                           0xDF

#define SEG15                                    0x5
#define SEG15_address                            0x00C
#define SEG15_position                           0x5
#define SEG15_size                               0x1
#define SEG15_value_mask                         0x20
#define SEG15_clear_mask                         0xDF

#define RA5                                      0x5
#define RA5_address                              0x00C
#define RA5_position                             0x5
#define RA5_size                                 0x1
#define RA5_value_mask                           0x20
#define RA5_clear_mask                           0xDF

#define CPS4                                     0x5
#define CPS4_address                             0x00C
#define CPS4_position                            0x5
#define CPS4_size                                0x1
#define CPS4_value_mask                          0x20
#define CPS4_clear_mask                          0xDF

#define CLKOUT                                   0x6
#define CLKOUT_address                           0x00C
#define CLKOUT_position                          0x6
#define CLKOUT_size                              0x1
#define CLKOUT_value_mask                        0x40
#define CLKOUT_clear_mask                        0xBF

#define SEG36                                    0x6
#define SEG36_address                            0x00C
#define SEG36_position                           0x6
#define SEG36_size                               0x1
#define SEG36_value_mask                         0x40
#define SEG36_clear_mask                         0xBF

#define RA6                                      0x6
#define RA6_address                              0x00C
#define RA6_position                             0x6
#define RA6_size                                 0x1
#define RA6_value_mask                           0x40
#define RA6_clear_mask                           0xBF

#define OSC2                                     0x6
#define OSC2_address                             0x00C
#define OSC2_position                            0x6
#define OSC2_size                                0x1
#define OSC2_value_mask                          0x40
#define OSC2_clear_mask                          0xBF

#define CLKIN                                    0x7
#define CLKIN_address                            0x00C
#define CLKIN_position                           0x7
#define CLKIN_size                               0x1
#define CLKIN_value_mask                         0x80
#define CLKIN_clear_mask                         0x7F

#define SEG37                                    0x7
#define SEG37_address                            0x00C
#define SEG37_position                           0x7
#define SEG37_size                               0x1
#define SEG37_value_mask                         0x80
#define SEG37_clear_mask                         0x7F

#define OSC1                                     0x7
#define OSC1_address                             0x00C
#define OSC1_position                            0x7
#define OSC1_size                                0x1
#define OSC1_value_mask                          0x80
#define OSC1_clear_mask                          0x7F

#define RA7                                      0x7
#define RA7_address                              0x00C
#define RA7_position                             0x7
#define RA7_size                                 0x1
#define RA7_value_mask                           0x80
#define RA7_clear_mask                           0x7F


/*------------------------------------------------------#
| PORTB                                             0xD |
#-------------------------------------------------------#
| SEG39 | RB6 | T1G | SEG11 | RB3 | SEG9 | SEG8 | SEG30 |
#-------------------------------------------------------#
| 7     | 6   | 5   | 4     | 3   | 2    | 1    | 0     |
#------------------------------------------------------*/

#define PORTB                                    0x0
#define PORTB_address                            0x00D
#define PORTB_position                           0x0
#define PORTB_size                               0x8
#define PORTB_value_mask                         0xFF
#define PORTB_clear_mask                         0x0

#define SEG30                                    0x0
#define SEG30_address                            0x00D
#define SEG30_position                           0x0
#define SEG30_size                               0x1
#define SEG30_value_mask                         0x1
#define SEG30_clear_mask                         0xFE

#define RB0                                      0x0
#define RB0_address                              0x00D
#define RB0_position                             0x0
#define RB0_size                                 0x1
#define RB0_value_mask                           0x1
#define RB0_clear_mask                           0xFE

#define SRI                                      0x0
#define SRI_address                              0x00D
#define SRI_position                             0x0
#define SRI_size                                 0x1
#define SRI_value_mask                           0x1
#define SRI_clear_mask                           0xFE

#define FLT0                                     0x0
#define FLT0_address                             0x00D
#define FLT0_position                            0x0
#define FLT0_size                                0x1
#define FLT0_value_mask                          0x1
#define FLT0_clear_mask                          0xFE

#define SEG8                                     0x1
#define SEG8_address                             0x00D
#define SEG8_position                            0x1
#define SEG8_size                                0x1
#define SEG8_value_mask                          0x2
#define SEG8_clear_mask                          0xFD

#define RB1                                      0x1
#define RB1_address                              0x00D
#define RB1_position                             0x1
#define RB1_size                                 0x1
#define RB1_value_mask                           0x2
#define RB1_clear_mask                           0xFD

#define SEG9                                     0x2
#define SEG9_address                             0x00D
#define SEG9_position                            0x2
#define SEG9_size                                0x1
#define SEG9_value_mask                          0x4
#define SEG9_clear_mask                          0xFB

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

#define SEG10                                    0x3
#define SEG10_address                            0x00D
#define SEG10_position                           0x3
#define SEG10_size                               0x1
#define SEG10_value_mask                         0x8
#define SEG10_clear_mask                         0xF7

#define SEG11                                    0x4
#define SEG11_address                            0x00D
#define SEG11_position                           0x4
#define SEG11_size                               0x1
#define SEG11_value_mask                         0x10
#define SEG11_clear_mask                         0xEF

#define RB4                                      0x4
#define RB4_address                              0x00D
#define RB4_position                             0x4
#define RB4_size                                 0x1
#define RB4_value_mask                           0x10
#define RB4_clear_mask                           0xEF

#define T1G                                      0x5
#define T1G_address                              0x00D
#define T1G_position                             0x5
#define T1G_size                                 0x1
#define T1G_value_mask                           0x20
#define T1G_clear_mask                           0xDF

#define RB5                                      0x5
#define RB5_address                              0x00D
#define RB5_position                             0x5
#define RB5_size                                 0x1
#define RB5_value_mask                           0x20
#define RB5_clear_mask                           0xDF

#define SEG29                                    0x5
#define SEG29_address                            0x00D
#define SEG29_position                           0x5
#define SEG29_size                               0x1
#define SEG29_value_mask                         0x20
#define SEG29_clear_mask                         0xDF

#define RB6                                      0x6
#define RB6_address                              0x00D
#define RB6_position                             0x6
#define RB6_size                                 0x1
#define RB6_value_mask                           0x40
#define RB6_clear_mask                           0xBF

#define SEG38                                    0x6
#define SEG38_address                            0x00D
#define SEG38_position                           0x6
#define SEG38_size                               0x1
#define SEG38_value_mask                         0x40
#define SEG38_clear_mask                         0xBF

#define SEG39                                    0x7
#define SEG39_address                            0x00D
#define SEG39_position                           0x7
#define SEG39_size                               0x1
#define SEG39_value_mask                         0x80
#define SEG39_clear_mask                         0x7F

#define RB7                                      0x7
#define RB7_address                              0x00D
#define RB7_position                             0x7
#define RB7_size                                 0x1
#define RB7_value_mask                           0x80
#define RB7_clear_mask                           0x7F


/*----------------------------------------------------------#
| PORTC                                                 0xE |
#-----------------------------------------------------------#
| RX1 | SEG27 | SEG12 | SEG16 | SEG17 | P1A | SEG32 | SEG40 |
#-----------------------------------------------------------#
| 7   | 6     | 5     | 4     | 3     | 2   | 1     | 0     |
#----------------------------------------------------------*/

#define PORTC                                    0x0
#define PORTC_address                            0x00E
#define PORTC_position                           0x0
#define PORTC_size                               0x8
#define PORTC_value_mask                         0xFF
#define PORTC_clear_mask                         0x0

#define SEG40                                    0x0
#define SEG40_address                            0x00E
#define SEG40_position                           0x0
#define SEG40_size                               0x1
#define SEG40_value_mask                         0x1
#define SEG40_clear_mask                         0xFE

#define T1CKI                                    0x0
#define T1CKI_address                            0x00E
#define T1CKI_position                           0x0
#define T1CKI_size                               0x1
#define T1CKI_value_mask                         0x1
#define T1CKI_clear_mask                         0xFE

#define T1OSO                                    0x0
#define T1OSO_address                            0x00E
#define T1OSO_position                           0x0
#define T1OSO_size                               0x1
#define T1OSO_value_mask                         0x1
#define T1OSO_clear_mask                         0xFE

#define RC0                                      0x0
#define RC0_address                              0x00E
#define RC0_position                             0x0
#define RC0_size                                 0x1
#define RC0_value_mask                           0x1
#define RC0_clear_mask                           0xFE

#define PORTC_CCP2                               0x1
#define PORTC_CCP2_address                       0x00E
#define PORTC_CCP2_position                      0x1
#define PORTC_CCP2_size                          0x1
#define PORTC_CCP2_value_mask                    0x2
#define PORTC_CCP2_clear_mask                    0xFD

#define SEG32                                    0x1
#define SEG32_address                            0x00E
#define SEG32_position                           0x1
#define SEG32_size                               0x1
#define SEG32_value_mask                         0x2
#define SEG32_clear_mask                         0xFD

#define T1OSI                                    0x1
#define T1OSI_address                            0x00E
#define T1OSI_position                           0x1
#define T1OSI_size                               0x1
#define T1OSI_value_mask                         0x2
#define T1OSI_clear_mask                         0xFD

#define RC1                                      0x1
#define RC1_address                              0x00E
#define RC1_position                             0x1
#define RC1_size                                 0x1
#define RC1_value_mask                           0x2
#define RC1_clear_mask                           0xFD

#define PORTC_P2A                                0x1
#define PORTC_P2A_address                        0x00E
#define PORTC_P2A_position                       0x1
#define PORTC_P2A_size                           0x1
#define PORTC_P2A_value_mask                     0x2
#define PORTC_P2A_clear_mask                     0xFD

#define SEG13                                    0x2
#define SEG13_address                            0x00E
#define SEG13_position                           0x2
#define SEG13_size                               0x1
#define SEG13_value_mask                         0x4
#define SEG13_clear_mask                         0xFB

#define CCP1                                     0x2
#define CCP1_address                             0x00E
#define CCP1_position                            0x2
#define CCP1_size                                0x1
#define CCP1_value_mask                          0x4
#define CCP1_clear_mask                          0xFB

#define P1A                                      0x2
#define P1A_address                              0x00E
#define P1A_position                             0x2
#define P1A_size                                 0x1
#define P1A_value_mask                           0x4
#define P1A_clear_mask                           0xFB

#define RC2                                      0x2
#define RC2_address                              0x00E
#define RC2_position                             0x2
#define RC2_size                                 0x1
#define RC2_value_mask                           0x4
#define RC2_clear_mask                           0xFB

#define SEG17                                    0x3
#define SEG17_address                            0x00E
#define SEG17_position                           0x3
#define SEG17_size                               0x1
#define SEG17_value_mask                         0x8
#define SEG17_clear_mask                         0xF7

#define SCK1                                     0x3
#define SCK1_address                             0x00E
#define SCK1_position                            0x3
#define SCK1_size                                0x1
#define SCK1_value_mask                          0x8
#define SCK1_clear_mask                          0xF7

#define SCL1                                     0x3
#define SCL1_address                             0x00E
#define SCL1_position                            0x3
#define SCL1_size                                0x1
#define SCL1_value_mask                          0x8
#define SCL1_clear_mask                          0xF7

#define RC3                                      0x3
#define RC3_address                              0x00E
#define RC3_position                             0x3
#define RC3_size                                 0x1
#define RC3_value_mask                           0x8
#define RC3_clear_mask                           0xF7

#define SEG16                                    0x4
#define SEG16_address                            0x00E
#define SEG16_position                           0x4
#define SEG16_size                               0x1
#define SEG16_value_mask                         0x10
#define SEG16_clear_mask                         0xEF

#define SDI1                                     0x4
#define SDI1_address                             0x00E
#define SDI1_position                            0x4
#define SDI1_size                                0x1
#define SDI1_value_mask                          0x10
#define SDI1_clear_mask                          0xEF

#define SDA1                                     0x4
#define SDA1_address                             0x00E
#define SDA1_position                            0x4
#define SDA1_size                                0x1
#define SDA1_value_mask                          0x10
#define SDA1_clear_mask                          0xEF

#define RC4                                      0x4
#define RC4_address                              0x00E
#define RC4_position                             0x4
#define RC4_size                                 0x1
#define RC4_value_mask                           0x10
#define RC4_clear_mask                           0xEF

#define SEG12                                    0x5
#define SEG12_address                            0x00E
#define SEG12_position                           0x5
#define SEG12_size                               0x1
#define SEG12_value_mask                         0x20
#define SEG12_clear_mask                         0xDF

#define SDO1                                     0x5
#define SDO1_address                             0x00E
#define SDO1_position                            0x5
#define SDO1_size                                0x1
#define SDO1_value_mask                          0x20
#define SDO1_clear_mask                          0xDF

#define RC5                                      0x5
#define RC5_address                              0x00E
#define RC5_position                             0x5
#define RC5_size                                 0x1
#define RC5_value_mask                           0x20
#define RC5_clear_mask                           0xDF

#define SEG27                                    0x6
#define SEG27_address                            0x00E
#define SEG27_position                           0x6
#define SEG27_size                               0x1
#define SEG27_value_mask                         0x40
#define SEG27_clear_mask                         0xBF

#define TX1                                      0x6
#define TX1_address                              0x00E
#define TX1_position                             0x6
#define TX1_size                                 0x1
#define TX1_value_mask                           0x40
#define TX1_clear_mask                           0xBF

#define RC6                                      0x6
#define RC6_address                              0x00E
#define RC6_position                             0x6
#define RC6_size                                 0x1
#define RC6_value_mask                           0x40
#define RC6_clear_mask                           0xBF

#define CK1                                      0x6
#define CK1_address                              0x00E
#define CK1_position                             0x6
#define CK1_size                                 0x1
#define CK1_value_mask                           0x40
#define CK1_clear_mask                           0xBF

#define RX1                                      0x7
#define RX1_address                              0x00E
#define RX1_position                             0x7
#define RX1_size                                 0x1
#define RX1_value_mask                           0x80
#define RX1_clear_mask                           0x7F

#define SEG28                                    0x7
#define SEG28_address                            0x00E
#define SEG28_position                           0x7
#define SEG28_size                               0x1
#define SEG28_value_mask                         0x80
#define SEG28_clear_mask                         0x7F

#define RC7                                      0x7
#define RC7_address                              0x00E
#define RC7_position                             0x7
#define RC7_size                                 0x1
#define RC7_value_mask                           0x80
#define RC7_clear_mask                           0x7F

#define DT1                                      0x7
#define DT1_address                              0x00E
#define DT1_position                             0x7
#define DT1_size                                 0x1
#define DT1_value_mask                           0x80
#define DT1_clear_mask                           0x7F


/*-----------------------------------------------#
| PORTD                                      0xF |
#------------------------------------------------#
| RD7 | SCK2 | RD5 | RD4 | RD3 | RD2 | RD1 | RD0 |
#------------------------------------------------#
| 7   | 6    | 5   | 4   | 3   | 2   | 1   | 0   |
#-----------------------------------------------*/

#define PORTD                                    0x0
#define PORTD_address                            0x00F
#define PORTD_position                           0x0
#define PORTD_size                               0x8
#define PORTD_value_mask                         0xFF
#define PORTD_clear_mask                         0x0

#define RD0                                      0x0
#define RD0_address                              0x00F
#define RD0_position                             0x0
#define RD0_size                                 0x1
#define RD0_value_mask                           0x1
#define RD0_clear_mask                           0xFE

#define PORTD_P2D                                0x0
#define PORTD_P2D_address                        0x00F
#define PORTD_P2D_position                       0x0
#define PORTD_P2D_size                           0x1
#define PORTD_P2D_value_mask                     0x1
#define PORTD_P2D_clear_mask                     0xFE

#define SEG0                                     0x0
#define SEG0_address                             0x00F
#define SEG0_position                            0x0
#define SEG0_size                                0x1
#define SEG0_value_mask                          0x1
#define SEG0_clear_mask                          0xFE

#define RD1                                      0x1
#define RD1_address                              0x00F
#define RD1_position                             0x1
#define RD1_size                                 0x1
#define RD1_value_mask                           0x2
#define RD1_clear_mask                           0xFD

#define PORTD_P2C                                0x1
#define PORTD_P2C_address                        0x00F
#define PORTD_P2C_position                       0x1
#define PORTD_P2C_size                           0x1
#define PORTD_P2C_value_mask                     0x2
#define PORTD_P2C_clear_mask                     0xFD

#define SEG1                                     0x1
#define SEG1_address                             0x00F
#define SEG1_position                            0x1
#define SEG1_size                                0x1
#define SEG1_value_mask                          0x2
#define SEG1_clear_mask                          0xFD

#define RD2                                      0x2
#define RD2_address                              0x00F
#define RD2_position                             0x2
#define RD2_size                                 0x1
#define RD2_value_mask                           0x4
#define RD2_clear_mask                           0xFB

#define PORTD_P2B                                0x2
#define PORTD_P2B_address                        0x00F
#define PORTD_P2B_position                       0x2
#define PORTD_P2B_size                           0x1
#define PORTD_P2B_value_mask                     0x4
#define PORTD_P2B_clear_mask                     0xFB

#define SEG2                                     0x2
#define SEG2_address                             0x00F
#define SEG2_position                            0x2
#define SEG2_size                                0x1
#define SEG2_value_mask                          0x4
#define SEG2_clear_mask                          0xFB

#define RD3                                      0x3
#define RD3_address                              0x00F
#define RD3_position                             0x3
#define RD3_size                                 0x1
#define RD3_value_mask                           0x8
#define RD3_clear_mask                           0xF7

#define SEG3                                     0x3
#define SEG3_address                             0x00F
#define SEG3_position                            0x3
#define SEG3_size                                0x1
#define SEG3_value_mask                          0x8
#define SEG3_clear_mask                          0xF7

#define PORTD_P3C                                0x3
#define PORTD_P3C_address                        0x00F
#define PORTD_P3C_position                       0x3
#define PORTD_P3C_size                           0x1
#define PORTD_P3C_value_mask                     0x8
#define PORTD_P3C_clear_mask                     0xF7

#define RD4                                      0x4
#define RD4_address                              0x00F
#define RD4_position                             0x4
#define RD4_size                                 0x1
#define RD4_value_mask                           0x10
#define RD4_clear_mask                           0xEF

#define SDO2                                     0x4
#define SDO2_address                             0x00F
#define SDO2_position                            0x4
#define SDO2_size                                0x1
#define SDO2_value_mask                          0x10
#define SDO2_clear_mask                          0xEF

#define SEG4                                     0x4
#define SEG4_address                             0x00F
#define SEG4_position                            0x4
#define SEG4_size                                0x1
#define SEG4_value_mask                          0x10
#define SEG4_clear_mask                          0xEF

#define PORTD_P3B                                0x4
#define PORTD_P3B_address                        0x00F
#define PORTD_P3B_position                       0x4
#define PORTD_P3B_size                           0x1
#define PORTD_P3B_value_mask                     0x10
#define PORTD_P3B_clear_mask                     0xEF

#define RD5                                      0x5
#define RD5_address                              0x00F
#define RD5_position                             0x5
#define RD5_size                                 0x1
#define RD5_value_mask                           0x20
#define RD5_clear_mask                           0xDF

#define SDI2                                     0x5
#define SDI2_address                             0x00F
#define SDI2_position                            0x5
#define SDI2_size                                0x1
#define SDI2_value_mask                          0x20
#define SDI2_clear_mask                          0xDF

#define SDA2                                     0x5
#define SDA2_address                             0x00F
#define SDA2_position                            0x5
#define SDA2_size                                0x1
#define SDA2_value_mask                          0x20
#define SDA2_clear_mask                          0xDF

#define PORTD_P1C                                0x5
#define PORTD_P1C_address                        0x00F
#define PORTD_P1C_position                       0x5
#define PORTD_P1C_size                           0x1
#define PORTD_P1C_value_mask                     0x20
#define PORTD_P1C_clear_mask                     0xDF

#define SEG5                                     0x5
#define SEG5_address                             0x00F
#define SEG5_position                            0x5
#define SEG5_size                                0x1
#define SEG5_value_mask                          0x20
#define SEG5_clear_mask                          0xDF

#define SCK2                                     0x6
#define SCK2_address                             0x00F
#define SCK2_position                            0x6
#define SCK2_size                                0x1
#define SCK2_value_mask                          0x40
#define SCK2_clear_mask                          0xBF

#define RD6                                      0x6
#define RD6_address                              0x00F
#define RD6_position                             0x6
#define RD6_size                                 0x1
#define RD6_value_mask                           0x40
#define RD6_clear_mask                           0xBF

#define SCL2                                     0x6
#define SCL2_address                             0x00F
#define SCL2_position                            0x6
#define SCL2_size                                0x1
#define SCL2_value_mask                          0x40
#define SCL2_clear_mask                          0xBF

#define PORTD_P1B                                0x6
#define PORTD_P1B_address                        0x00F
#define PORTD_P1B_position                       0x6
#define PORTD_P1B_size                           0x1
#define PORTD_P1B_value_mask                     0x40
#define PORTD_P1B_clear_mask                     0xBF

#define SEG6                                     0x6
#define SEG6_address                             0x00F
#define SEG6_position                            0x6
#define SEG6_size                                0x1
#define SEG6_value_mask                          0x40
#define SEG6_clear_mask                          0xBF

#define RD7                                      0x7
#define RD7_address                              0x00F
#define RD7_position                             0x7
#define RD7_size                                 0x1
#define RD7_value_mask                           0x80
#define RD7_clear_mask                           0x7F

#define nSS2                                     0x7
#define nSS2_address                             0x00F
#define nSS2_position                            0x7
#define nSS2_size                                0x1
#define nSS2_value_mask                          0x80
#define nSS2_clear_mask                          0x7F

#define SEG7                                     0x7
#define SEG7_address                             0x00F
#define SEG7_position                            0x7
#define SEG7_size                                0x1
#define SEG7_value_mask                          0x80
#define SEG7_clear_mask                          0x7F


/*-------------------------------------------------------------------#
| PORTE                                                         0x10 |
#--------------------------------------------------------------------#
| PORTE_CCP2 | COM3 | COM2 | COM1 | COM0 | VLCD3 | PORTE_P2C | VLCD1 |
#--------------------------------------------------------------------#
| 7          | 6    | 5    | 4    | 3    | 2     | 1         | 0     |
#-------------------------------------------------------------------*/

#define PORTE                                    0x0
#define PORTE_address                            0x010
#define PORTE_position                           0x0
#define PORTE_size                               0x8
#define PORTE_value_mask                         0xFF
#define PORTE_clear_mask                         0x0

#define VLCD1                                    0x0
#define VLCD1_address                            0x010
#define VLCD1_position                           0x0
#define VLCD1_size                               0x1
#define VLCD1_value_mask                         0x1
#define VLCD1_clear_mask                         0xFE

#define PORTE_P2D                                0x0
#define PORTE_P2D_address                        0x010
#define PORTE_P2D_position                       0x0
#define PORTE_P2D_size                           0x1
#define PORTE_P2D_value_mask                     0x1
#define PORTE_P2D_clear_mask                     0xFE

#define RE0                                      0x0
#define RE0_address                              0x010
#define RE0_position                             0x0
#define RE0_size                                 0x1
#define RE0_value_mask                           0x1
#define RE0_clear_mask                           0xFE

#define PORTE_P2C                                0x1
#define PORTE_P2C_address                        0x010
#define PORTE_P2C_position                       0x1
#define PORTE_P2C_size                           0x1
#define PORTE_P2C_value_mask                     0x2
#define PORTE_P2C_clear_mask                     0xFD

#define VLCD2                                    0x1
#define VLCD2_address                            0x010
#define VLCD2_position                           0x1
#define VLCD2_size                               0x1
#define VLCD2_value_mask                         0x2
#define VLCD2_clear_mask                         0xFD

#define RE1                                      0x1
#define RE1_address                              0x010
#define RE1_position                             0x1
#define RE1_size                                 0x1
#define RE1_value_mask                           0x2
#define RE1_clear_mask                           0xFD

#define VLCD3                                    0x2
#define VLCD3_address                            0x010
#define VLCD3_position                           0x2
#define VLCD3_size                               0x1
#define VLCD3_value_mask                         0x4
#define VLCD3_clear_mask                         0xFB

#define PORTE_P2B                                0x2
#define PORTE_P2B_address                        0x010
#define PORTE_P2B_position                       0x2
#define PORTE_P2B_size                           0x1
#define PORTE_P2B_value_mask                     0x4
#define PORTE_P2B_clear_mask                     0xFB

#define RE2                                      0x2
#define RE2_address                              0x010
#define RE2_position                             0x2
#define RE2_size                                 0x1
#define RE2_value_mask                           0x4
#define RE2_clear_mask                           0xFB

#define COM0                                     0x3
#define COM0_address                             0x010
#define COM0_position                            0x3
#define COM0_size                                0x1
#define COM0_value_mask                          0x8
#define COM0_clear_mask                          0xF7

#define PORTE_P3C                                0x3
#define PORTE_P3C_address                        0x010
#define PORTE_P3C_position                       0x3
#define PORTE_P3C_size                           0x1
#define PORTE_P3C_value_mask                     0x8
#define PORTE_P3C_clear_mask                     0xF7

#define RE3                                      0x3
#define RE3_address                              0x010
#define RE3_position                             0x3
#define RE3_size                                 0x1
#define RE3_value_mask                           0x8
#define RE3_clear_mask                           0xF7

#define COM1                                     0x4
#define COM1_address                             0x010
#define COM1_position                            0x4
#define COM1_size                                0x1
#define COM1_value_mask                          0x10
#define COM1_clear_mask                          0xEF

#define PORTE_P3B                                0x4
#define PORTE_P3B_address                        0x010
#define PORTE_P3B_position                       0x4
#define PORTE_P3B_size                           0x1
#define PORTE_P3B_value_mask                     0x10
#define PORTE_P3B_clear_mask                     0xEF

#define RE4                                      0x4
#define RE4_address                              0x010
#define RE4_position                             0x4
#define RE4_size                                 0x1
#define RE4_value_mask                           0x10
#define RE4_clear_mask                           0xEF

#define COM2                                     0x5
#define COM2_address                             0x010
#define COM2_position                            0x5
#define COM2_size                                0x1
#define COM2_value_mask                          0x20
#define COM2_clear_mask                          0xDF

#define PORTE_P1C                                0x5
#define PORTE_P1C_address                        0x010
#define PORTE_P1C_position                       0x5
#define PORTE_P1C_size                           0x1
#define PORTE_P1C_value_mask                     0x20
#define PORTE_P1C_clear_mask                     0xDF

#define RE5                                      0x5
#define RE5_address                              0x010
#define RE5_position                             0x5
#define RE5_size                                 0x1
#define RE5_value_mask                           0x20
#define RE5_clear_mask                           0xDF

#define COM3                                     0x6
#define COM3_address                             0x010
#define COM3_position                            0x6
#define COM3_size                                0x1
#define COM3_value_mask                          0x40
#define COM3_clear_mask                          0xBF

#define PORTE_P1B                                0x6
#define PORTE_P1B_address                        0x010
#define PORTE_P1B_position                       0x6
#define PORTE_P1B_size                           0x1
#define PORTE_P1B_value_mask                     0x40
#define PORTE_P1B_clear_mask                     0xBF

#define RE6                                      0x6
#define RE6_address                              0x010
#define RE6_position                             0x6
#define RE6_size                                 0x1
#define RE6_value_mask                           0x40
#define RE6_clear_mask                           0xBF

#define SEG31                                    0x7
#define SEG31_address                            0x010
#define SEG31_position                           0x7
#define SEG31_size                               0x1
#define SEG31_value_mask                         0x80
#define SEG31_clear_mask                         0x7F

#define PORTE_P2A                                0x7
#define PORTE_P2A_address                        0x010
#define PORTE_P2A_position                       0x7
#define PORTE_P2A_size                           0x1
#define PORTE_P2A_value_mask                     0x80
#define PORTE_P2A_clear_mask                     0x7F

#define PORTE_CCP2                               0x7
#define PORTE_CCP2_address                       0x010
#define PORTE_CCP2_position                      0x7
#define PORTE_CCP2_size                          0x1
#define PORTE_CCP2_value_mask                    0x80
#define PORTE_CCP2_clear_mask                    0x7F

#define RE7                                      0x7
#define RE7_address                              0x010
#define RE7_position                             0x7
#define RE7_size                                 0x1
#define RE7_value_mask                           0x80
#define RE7_clear_mask                           0x7F


/*----------------------------------------------------------------#
| PIR1                                                       0x11 |
#-----------------------------------------------------------------#
| TMR1GIF | ADIF | RCIF | TXIF | SSPIF | CCP1IF | TMR2IF | TMR1IF |
#-----------------------------------------------------------------#
| 7       | 6    | 5    | 4    | 3     | 2      | 1      | 0      |
#----------------------------------------------------------------*/

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

#define SSPIF                                    0x3
#define SSPIF_address                            0x011
#define SSPIF_position                           0x3
#define SSPIF_size                               0x1
#define SSPIF_value_mask                         0x8
#define SSPIF_clear_mask                         0xF7

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

#define TX1IF                                    0x4
#define TX1IF_address                            0x011
#define TX1IF_position                           0x4
#define TX1IF_size                               0x1
#define TX1IF_value_mask                         0x10
#define TX1IF_clear_mask                         0xEF

#define RCIF                                     0x5
#define RCIF_address                             0x011
#define RCIF_position                            0x5
#define RCIF_size                                0x1
#define RCIF_value_mask                          0x20
#define RCIF_clear_mask                          0xDF

#define RC1IF                                    0x5
#define RC1IF_address                            0x011
#define RC1IF_position                           0x5
#define RC1IF_size                               0x1
#define RC1IF_value_mask                         0x20
#define RC1IF_clear_mask                         0xDF

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


/*-----------------------------------------------------------#
| PIR2                                                  0x12 |
#------------------------------------------------------------#
| OSFIF | C2IF | C1IF | EEIF | BCLIF | LCDIF | C3IF | CCP2IF |
#------------------------------------------------------------#
| 7     | 6    | 5    | 4    | 3     | 2     | 1    | 0      |
#-----------------------------------------------------------*/

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

#define C3IF                                     0x1
#define C3IF_address                             0x012
#define C3IF_position                            0x1
#define C3IF_size                                0x1
#define C3IF_value_mask                          0x2
#define C3IF_clear_mask                          0xFD

#define LCDIF                                    0x2
#define LCDIF_address                            0x012
#define LCDIF_position                           0x2
#define LCDIF_size                               0x1
#define LCDIF_value_mask                         0x4
#define LCDIF_clear_mask                         0xFB

#define BCLIF                                    0x3
#define BCLIF_address                            0x012
#define BCLIF_position                           0x3
#define BCLIF_size                               0x1
#define BCLIF_value_mask                         0x8
#define BCLIF_clear_mask                         0xF7

#define EEIF                                     0x4
#define EEIF_address                             0x012
#define EEIF_position                            0x4
#define EEIF_size                                0x1
#define EEIF_value_mask                          0x10
#define EEIF_clear_mask                          0xEF

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


/*-------------------------------------------------------#
| PIR3                                              0x13 |
#--------------------------------------------------------#
| - | CCP5IF | CCP4IF | CCP3IF | TMR6IF | - | TMR4IF | - |
#--------------------------------------------------------#
| 7 | 6      | 5      | 4      | 3      | 2 | 1      | 0 |
#-------------------------------------------------------*/

#define PIR3                                     0x0
#define PIR3_address                             0x013
#define PIR3_position                            0x0
#define PIR3_size                                0x8
#define PIR3_value_mask                          0xFF
#define PIR3_clear_mask                          0x0

#define TMR4IF                                   0x1
#define TMR4IF_address                           0x013
#define TMR4IF_position                          0x1
#define TMR4IF_size                              0x1
#define TMR4IF_value_mask                        0x2
#define TMR4IF_clear_mask                        0xFD

#define TMR6IF                                   0x3
#define TMR6IF_address                           0x013
#define TMR6IF_position                          0x3
#define TMR6IF_size                              0x1
#define TMR6IF_value_mask                        0x8
#define TMR6IF_clear_mask                        0xF7

#define CCP3IF                                   0x4
#define CCP3IF_address                           0x013
#define CCP3IF_position                          0x4
#define CCP3IF_size                              0x1
#define CCP3IF_value_mask                        0x10
#define CCP3IF_clear_mask                        0xEF

#define CCP4IF                                   0x5
#define CCP4IF_address                           0x013
#define CCP4IF_position                          0x5
#define CCP4IF_size                              0x1
#define CCP4IF_value_mask                        0x20
#define CCP4IF_clear_mask                        0xDF

#define CCP5IF                                   0x6
#define CCP5IF_address                           0x013
#define CCP5IF_position                          0x6
#define CCP5IF_size                              0x1
#define CCP5IF_value_mask                        0x40
#define CCP5IF_clear_mask                        0xBF


/*------------------------------------------------#
| PIR4                                       0x14 |
#-------------------------------------------------#
| - | - | RC2IF | TX2IF | - | - | BCL2IF | SSP2IF |
#-------------------------------------------------#
| 7 | 6 | 5     | 4     | 3 | 2 | 1      | 0      |
#------------------------------------------------*/

#define PIR4                                     0x0
#define PIR4_address                             0x014
#define PIR4_position                            0x0
#define PIR4_size                                0x8
#define PIR4_value_mask                          0xFF
#define PIR4_clear_mask                          0x0

#define SSP2IF                                   0x0
#define SSP2IF_address                           0x014
#define SSP2IF_position                          0x0
#define SSP2IF_size                              0x1
#define SSP2IF_value_mask                        0x1
#define SSP2IF_clear_mask                        0xFE

#define BCL2IF                                   0x1
#define BCL2IF_address                           0x014
#define BCL2IF_position                          0x1
#define BCL2IF_size                              0x1
#define BCL2IF_value_mask                        0x2
#define BCL2IF_clear_mask                        0xFD

#define TX2IF                                    0x4
#define TX2IF_address                            0x014
#define TX2IF_position                           0x4
#define TX2IF_size                               0x1
#define TX2IF_value_mask                         0x10
#define TX2IF_clear_mask                         0xEF

#define RC2IF                                    0x5
#define RC2IF_address                            0x014
#define RC2IF_position                           0x5
#define RC2IF_size                               0x1
#define RC2IF_value_mask                         0x20
#define RC2IF_clear_mask                         0xDF


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


/*-----------------------------------------------------------#
| CPSCON0                                               0x1E |
#------------------------------------------------------------#
| CPSON | CPSRM | - | - | CPSRNG1 | CPSRNG0 | CPSOUT | T0XCS |
#------------------------------------------------------------#
| 7     | 6     | 5 | 4 | 3       | 2       | 1      | 0     |
#-----------------------------------------------------------*/

#define CPSCON0                                  0x0
#define CPSCON0_address                          0x01E
#define CPSCON0_position                         0x0
#define CPSCON0_size                             0x8
#define CPSCON0_value_mask                       0xFF
#define CPSCON0_clear_mask                       0x0

#define T0XCS                                    0x0
#define T0XCS_address                            0x01E
#define T0XCS_position                           0x0
#define T0XCS_size                               0x1
#define T0XCS_value_mask                         0x1
#define T0XCS_clear_mask                         0xFE

#define CPSOUT                                   0x1
#define CPSOUT_address                           0x01E
#define CPSOUT_position                          0x1
#define CPSOUT_size                              0x1
#define CPSOUT_value_mask                        0x2
#define CPSOUT_clear_mask                        0xFD

#define CPSRNG                                   0x2
#define CPSRNG_address                           0x01E
#define CPSRNG_position                          0x2
#define CPSRNG_size                              0x2
#define CPSRNG_value_mask                        0xC
#define CPSRNG_clear_mask                        0xF3

#define CPSRNG0                                  0x2
#define CPSRNG0_address                          0x01E
#define CPSRNG0_position                         0x2
#define CPSRNG0_size                             0x1
#define CPSRNG0_value_mask                       0x4
#define CPSRNG0_clear_mask                       0xFB

#define CPSRNG1                                  0x3
#define CPSRNG1_address                          0x01E
#define CPSRNG1_position                         0x3
#define CPSRNG1_size                             0x1
#define CPSRNG1_value_mask                       0x8
#define CPSRNG1_clear_mask                       0xF7

#define CPSRM                                    0x6
#define CPSRM_address                            0x01E
#define CPSRM_position                           0x6
#define CPSRM_size                               0x1
#define CPSRM_value_mask                         0x40
#define CPSRM_clear_mask                         0xBF

#define CPSON                                    0x7
#define CPSON_address                            0x01E
#define CPSON_position                           0x7
#define CPSON_size                               0x1
#define CPSON_value_mask                         0x80
#define CPSON_clear_mask                         0x7F


/*-------------------------------------------------------#
| CPSCON1                                           0x1F |
#--------------------------------------------------------#
| - | - | - | CPSCH4 | CPSCH3 | CPSCH2 | CPSCH1 | CPSCH0 |
#--------------------------------------------------------#
| 7 | 6 | 5 | 4      | 3      | 2      | 1      | 0      |
#-------------------------------------------------------*/

#define CPSCON1                                  0x0
#define CPSCON1_address                          0x01F
#define CPSCON1_position                         0x0
#define CPSCON1_size                             0x8
#define CPSCON1_value_mask                       0xFF
#define CPSCON1_clear_mask                       0x0

#define CPSCH                                    0x0
#define CPSCH_address                            0x01F
#define CPSCH_position                           0x0
#define CPSCH_size                               0x5
#define CPSCH_value_mask                         0x1F
#define CPSCH_clear_mask                         0xE0

#define CPSCH0                                   0x0
#define CPSCH0_address                           0x01F
#define CPSCH0_position                          0x0
#define CPSCH0_size                              0x1
#define CPSCH0_value_mask                        0x1
#define CPSCH0_clear_mask                        0xFE

#define CPSCH1                                   0x1
#define CPSCH1_address                           0x01F
#define CPSCH1_position                          0x1
#define CPSCH1_size                              0x1
#define CPSCH1_value_mask                        0x2
#define CPSCH1_clear_mask                        0xFD

#define CPSCH2                                   0x2
#define CPSCH2_address                           0x01F
#define CPSCH2_position                          0x2
#define CPSCH2_size                              0x1
#define CPSCH2_value_mask                        0x4
#define CPSCH2_clear_mask                        0xFB

#define CPSCH3                                   0x3
#define CPSCH3_address                           0x01F
#define CPSCH3_position                          0x3
#define CPSCH3_size                              0x1
#define CPSCH3_value_mask                        0x8
#define CPSCH3_clear_mask                        0xF7

#define CPSCH4                                   0x4
#define CPSCH4_address                           0x01F
#define CPSCH4_position                          0x4
#define CPSCH4_size                              0x1
#define CPSCH4_value_mask                        0x10
#define CPSCH4_clear_mask                        0xEF


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


/*----------------------------------------------------------------------#
| TRISD                                                            0x8F |
#-----------------------------------------------------------------------#
| TRISD7 | TRISD6 | TRISD5 | TRISD4 | TRISD3 | TRISD2 | TRISD1 | TRISD0 |
#-----------------------------------------------------------------------#
| 7      | 6      | 5      | 4      | 3      | 2      | 1      | 0      |
#----------------------------------------------------------------------*/

#define TRISD                                    0x0
#define TRISD_address                            0x08F
#define TRISD_position                           0x0
#define TRISD_size                               0x8
#define TRISD_value_mask                         0xFF
#define TRISD_clear_mask                         0x0

#define TRISD0                                   0x0
#define TRISD0_address                           0x08F
#define TRISD0_position                          0x0
#define TRISD0_size                              0x1
#define TRISD0_value_mask                        0x1
#define TRISD0_clear_mask                        0xFE

#define TRISD1                                   0x1
#define TRISD1_address                           0x08F
#define TRISD1_position                          0x1
#define TRISD1_size                              0x1
#define TRISD1_value_mask                        0x2
#define TRISD1_clear_mask                        0xFD

#define TRISD2                                   0x2
#define TRISD2_address                           0x08F
#define TRISD2_position                          0x2
#define TRISD2_size                              0x1
#define TRISD2_value_mask                        0x4
#define TRISD2_clear_mask                        0xFB

#define TRISD3                                   0x3
#define TRISD3_address                           0x08F
#define TRISD3_position                          0x3
#define TRISD3_size                              0x1
#define TRISD3_value_mask                        0x8
#define TRISD3_clear_mask                        0xF7

#define TRISD4                                   0x4
#define TRISD4_address                           0x08F
#define TRISD4_position                          0x4
#define TRISD4_size                              0x1
#define TRISD4_value_mask                        0x10
#define TRISD4_clear_mask                        0xEF

#define TRISD5                                   0x5
#define TRISD5_address                           0x08F
#define TRISD5_position                          0x5
#define TRISD5_size                              0x1
#define TRISD5_value_mask                        0x20
#define TRISD5_clear_mask                        0xDF

#define TRISD6                                   0x6
#define TRISD6_address                           0x08F
#define TRISD6_position                          0x6
#define TRISD6_size                              0x1
#define TRISD6_value_mask                        0x40
#define TRISD6_clear_mask                        0xBF

#define TRISD7                                   0x7
#define TRISD7_address                           0x08F
#define TRISD7_position                          0x7
#define TRISD7_size                              0x1
#define TRISD7_value_mask                        0x80
#define TRISD7_clear_mask                        0x7F


/*----------------------------------------------------------------------#
| TRISE                                                            0x90 |
#-----------------------------------------------------------------------#
| TRISE7 | TRISE6 | TRISE5 | TRISE4 | TRISE3 | TRISE2 | TRISE1 | TRISE0 |
#-----------------------------------------------------------------------#
| 7      | 6      | 5      | 4      | 3      | 2      | 1      | 0      |
#----------------------------------------------------------------------*/

#define TRISE                                    0x0
#define TRISE_address                            0x090
#define TRISE_position                           0x0
#define TRISE_size                               0x8
#define TRISE_value_mask                         0xFF
#define TRISE_clear_mask                         0x0

#define TRISE0                                   0x0
#define TRISE0_address                           0x090
#define TRISE0_position                          0x0
#define TRISE0_size                              0x1
#define TRISE0_value_mask                        0x1
#define TRISE0_clear_mask                        0xFE

#define TRISE1                                   0x1
#define TRISE1_address                           0x090
#define TRISE1_position                          0x1
#define TRISE1_size                              0x1
#define TRISE1_value_mask                        0x2
#define TRISE1_clear_mask                        0xFD

#define TRISE2                                   0x2
#define TRISE2_address                           0x090
#define TRISE2_position                          0x2
#define TRISE2_size                              0x1
#define TRISE2_value_mask                        0x4
#define TRISE2_clear_mask                        0xFB

#define TRISE3                                   0x3
#define TRISE3_address                           0x090
#define TRISE3_position                          0x3
#define TRISE3_size                              0x1
#define TRISE3_value_mask                        0x8
#define TRISE3_clear_mask                        0xF7

#define TRISE4                                   0x4
#define TRISE4_address                           0x090
#define TRISE4_position                          0x4
#define TRISE4_size                              0x1
#define TRISE4_value_mask                        0x10
#define TRISE4_clear_mask                        0xEF

#define TRISE5                                   0x5
#define TRISE5_address                           0x090
#define TRISE5_position                          0x5
#define TRISE5_size                              0x1
#define TRISE5_value_mask                        0x20
#define TRISE5_clear_mask                        0xDF

#define TRISE6                                   0x6
#define TRISE6_address                           0x090
#define TRISE6_position                          0x6
#define TRISE6_size                              0x1
#define TRISE6_value_mask                        0x40
#define TRISE6_clear_mask                        0xBF

#define TRISE7                                   0x7
#define TRISE7_address                           0x090
#define TRISE7_position                          0x7
#define TRISE7_size                              0x1
#define TRISE7_value_mask                        0x80
#define TRISE7_clear_mask                        0x7F


/*------------------------------------------------------------------#
| PIE1                                                         0x91 |
#-------------------------------------------------------------------#
| TMR1GIE | ADIE | RC1IE | TXIE | SSP1IE | CCP1IE | TMR2IE | TMR1IE |
#-------------------------------------------------------------------#
| 7       | 6    | 5     | 4    | 3      | 2      | 1      | 0      |
#------------------------------------------------------------------*/

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

#define SSPIE                                    0x3
#define SSPIE_address                            0x091
#define SSPIE_position                           0x3
#define SSPIE_size                               0x1
#define SSPIE_value_mask                         0x8
#define SSPIE_clear_mask                         0xF7

#define TXIE                                     0x4
#define TXIE_address                             0x091
#define TXIE_position                            0x4
#define TXIE_size                                0x1
#define TXIE_value_mask                          0x10
#define TXIE_clear_mask                          0xEF

#define TX1IE                                    0x4
#define TX1IE_address                            0x091
#define TX1IE_position                           0x4
#define TX1IE_size                               0x1
#define TX1IE_value_mask                         0x10
#define TX1IE_clear_mask                         0xEF

#define RC1IE                                    0x5
#define RC1IE_address                            0x091
#define RC1IE_position                           0x5
#define RC1IE_size                               0x1
#define RC1IE_value_mask                         0x20
#define RC1IE_clear_mask                         0xDF

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


/*-----------------------------------------------------------#
| PIE2                                                  0x92 |
#------------------------------------------------------------#
| OSFIE | C2IE | C1IE | EEIE | BCLIE | LCDIE | C3IE | CCP2IE |
#------------------------------------------------------------#
| 7     | 6    | 5    | 4    | 3     | 2     | 1    | 0      |
#-----------------------------------------------------------*/

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

#define C3IE                                     0x1
#define C3IE_address                             0x092
#define C3IE_position                            0x1
#define C3IE_size                                0x1
#define C3IE_value_mask                          0x2
#define C3IE_clear_mask                          0xFD

#define LCDIE                                    0x2
#define LCDIE_address                            0x092
#define LCDIE_position                           0x2
#define LCDIE_size                               0x1
#define LCDIE_value_mask                         0x4
#define LCDIE_clear_mask                         0xFB

#define BCLIE                                    0x3
#define BCLIE_address                            0x092
#define BCLIE_position                           0x3
#define BCLIE_size                               0x1
#define BCLIE_value_mask                         0x8
#define BCLIE_clear_mask                         0xF7

#define EEIE                                     0x4
#define EEIE_address                             0x092
#define EEIE_position                            0x4
#define EEIE_size                                0x1
#define EEIE_value_mask                          0x10
#define EEIE_clear_mask                          0xEF

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


/*-------------------------------------------------------#
| PIE3                                              0x93 |
#--------------------------------------------------------#
| - | CCP5IE | CCP4IE | CCP3IE | TMR6IE | - | TMR4IE | - |
#--------------------------------------------------------#
| 7 | 6      | 5      | 4      | 3      | 2 | 1      | 0 |
#-------------------------------------------------------*/

#define PIE3                                     0x0
#define PIE3_address                             0x093
#define PIE3_position                            0x0
#define PIE3_size                                0x8
#define PIE3_value_mask                          0xFF
#define PIE3_clear_mask                          0x0

#define TMR4IE                                   0x1
#define TMR4IE_address                           0x093
#define TMR4IE_position                          0x1
#define TMR4IE_size                              0x1
#define TMR4IE_value_mask                        0x2
#define TMR4IE_clear_mask                        0xFD

#define TMR6IE                                   0x3
#define TMR6IE_address                           0x093
#define TMR6IE_position                          0x3
#define TMR6IE_size                              0x1
#define TMR6IE_value_mask                        0x8
#define TMR6IE_clear_mask                        0xF7

#define CCP3IE                                   0x4
#define CCP3IE_address                           0x093
#define CCP3IE_position                          0x4
#define CCP3IE_size                              0x1
#define CCP3IE_value_mask                        0x10
#define CCP3IE_clear_mask                        0xEF

#define CCP4IE                                   0x5
#define CCP4IE_address                           0x093
#define CCP4IE_position                          0x5
#define CCP4IE_size                              0x1
#define CCP4IE_value_mask                        0x20
#define CCP4IE_clear_mask                        0xDF

#define CCP5IE                                   0x6
#define CCP5IE_address                           0x093
#define CCP5IE_position                          0x6
#define CCP5IE_size                              0x1
#define CCP5IE_value_mask                        0x40
#define CCP5IE_clear_mask                        0xBF


/*------------------------------------------------#
| PIE4                                       0x94 |
#-------------------------------------------------#
| - | - | RC2IE | TX2IE | - | - | BCL2IE | SSP2IE |
#-------------------------------------------------#
| 7 | 6 | 5     | 4     | 3 | 2 | 1      | 0      |
#------------------------------------------------*/

#define PIE4                                     0x0
#define PIE4_address                             0x094
#define PIE4_position                            0x0
#define PIE4_size                                0x8
#define PIE4_value_mask                          0xFF
#define PIE4_clear_mask                          0x0

#define SSP2IE                                   0x0
#define SSP2IE_address                           0x094
#define SSP2IE_position                          0x0
#define SSP2IE_size                              0x1
#define SSP2IE_value_mask                        0x1
#define SSP2IE_clear_mask                        0xFE

#define BCL2IE                                   0x1
#define BCL2IE_address                           0x094
#define BCL2IE_position                          0x1
#define BCL2IE_size                              0x1
#define BCL2IE_value_mask                        0x2
#define BCL2IE_clear_mask                        0xFD

#define TX2IE                                    0x4
#define TX2IE_address                            0x094
#define TX2IE_position                           0x4
#define TX2IE_size                               0x1
#define TX2IE_value_mask                         0x10
#define TX2IE_clear_mask                         0xEF

#define RC2IE                                    0x5
#define RC2IE_address                            0x094
#define RC2IE_position                           0x5
#define RC2IE_size                               0x1
#define RC2IE_value_mask                         0x20
#define RC2IE_clear_mask                         0xDF


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


/*-----------------------------------------------------#
| PCON                                            0x96 |
#------------------------------------------------------#
| STKOVF | STKUNF | - | - | nRMCLR | nRI | nPOR | nBOR |
#------------------------------------------------------#
| 7      | 6      | 5 | 4 | 3      | 2   | 1    | 0    |
#-----------------------------------------------------*/

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


/*------------------------------------------------------------------#
| OSCSTAT                                                      0x9A |
#-------------------------------------------------------------------#
| T1OSCR | PLLR | OSTS | HFIOFR | HFIOFL | MFIOFR | LFIOFR | HFIOFS |
#-------------------------------------------------------------------#
| 7      | 6    | 5    | 4      | 3      | 2      | 1      | 0      |
#------------------------------------------------------------------*/

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

#define T1OSCR                                   0x7
#define T1OSCR_address                           0x09A
#define T1OSCR_position                          0x7
#define T1OSCR_size                              0x1
#define T1OSCR_value_mask                        0x80
#define T1OSCR_clear_mask                        0x7F


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


/*--------------------------------------------------------------#
| LATD                                                    0x10F |
#---------------------------------------------------------------#
| LATD7 | LATD6 | LATD5 | LATD4 | LATD3 | LATD2 | LATD1 | LATD0 |
#---------------------------------------------------------------#
| 7     | 6     | 5     | 4     | 3     | 2     | 1     | 0     |
#--------------------------------------------------------------*/

#define LATD0                                    0x0
#define LATD0_address                            0x10F
#define LATD0_position                           0x0
#define LATD0_size                               0x1
#define LATD0_value_mask                         0x1
#define LATD0_clear_mask                         0xFE

#define LATD                                     0x0
#define LATD_address                             0x10F
#define LATD_position                            0x0
#define LATD_size                                0x8
#define LATD_value_mask                          0xFF
#define LATD_clear_mask                          0x0

#define LATD1                                    0x1
#define LATD1_address                            0x10F
#define LATD1_position                           0x1
#define LATD1_size                               0x1
#define LATD1_value_mask                         0x2
#define LATD1_clear_mask                         0xFD

#define LATD2                                    0x2
#define LATD2_address                            0x10F
#define LATD2_position                           0x2
#define LATD2_size                               0x1
#define LATD2_value_mask                         0x4
#define LATD2_clear_mask                         0xFB

#define LATD3                                    0x3
#define LATD3_address                            0x10F
#define LATD3_position                           0x3
#define LATD3_size                               0x1
#define LATD3_value_mask                         0x8
#define LATD3_clear_mask                         0xF7

#define LATD4                                    0x4
#define LATD4_address                            0x10F
#define LATD4_position                           0x4
#define LATD4_size                               0x1
#define LATD4_value_mask                         0x10
#define LATD4_clear_mask                         0xEF

#define LATD5                                    0x5
#define LATD5_address                            0x10F
#define LATD5_position                           0x5
#define LATD5_size                               0x1
#define LATD5_value_mask                         0x20
#define LATD5_clear_mask                         0xDF

#define LATD6                                    0x6
#define LATD6_address                            0x10F
#define LATD6_position                           0x6
#define LATD6_size                               0x1
#define LATD6_value_mask                         0x40
#define LATD6_clear_mask                         0xBF

#define LATD7                                    0x7
#define LATD7_address                            0x10F
#define LATD7_position                           0x7
#define LATD7_size                               0x1
#define LATD7_value_mask                         0x80
#define LATD7_clear_mask                         0x7F


/*--------------------------------------------------------------#
| LATE                                                    0x110 |
#---------------------------------------------------------------#
| LATE7 | LATE6 | LATE5 | LATE4 | LATE3 | LATE2 | LATE1 | LATE0 |
#---------------------------------------------------------------#
| 7     | 6     | 5     | 4     | 3     | 2     | 1     | 0     |
#--------------------------------------------------------------*/

#define LATE                                     0x0
#define LATE_address                             0x110
#define LATE_position                            0x0
#define LATE_size                                0x8
#define LATE_value_mask                          0xFF
#define LATE_clear_mask                          0x0

#define LATE0                                    0x0
#define LATE0_address                            0x110
#define LATE0_position                           0x0
#define LATE0_size                               0x1
#define LATE0_value_mask                         0x1
#define LATE0_clear_mask                         0xFE

#define LATE1                                    0x1
#define LATE1_address                            0x110
#define LATE1_position                           0x1
#define LATE1_size                               0x1
#define LATE1_value_mask                         0x2
#define LATE1_clear_mask                         0xFD

#define LATE2                                    0x2
#define LATE2_address                            0x110
#define LATE2_position                           0x2
#define LATE2_size                               0x1
#define LATE2_value_mask                         0x4
#define LATE2_clear_mask                         0xFB

#define LATE3                                    0x3
#define LATE3_address                            0x110
#define LATE3_position                           0x3
#define LATE3_size                               0x1
#define LATE3_value_mask                         0x8
#define LATE3_clear_mask                         0xF7

#define LATE4                                    0x4
#define LATE4_address                            0x110
#define LATE4_position                           0x4
#define LATE4_size                               0x1
#define LATE4_value_mask                         0x10
#define LATE4_clear_mask                         0xEF

#define LATE5                                    0x5
#define LATE5_address                            0x110
#define LATE5_position                           0x5
#define LATE5_size                               0x1
#define LATE5_value_mask                         0x20
#define LATE5_clear_mask                         0xDF

#define LATE6                                    0x6
#define LATE6_address                            0x110
#define LATE6_position                           0x6
#define LATE6_size                               0x1
#define LATE6_value_mask                         0x40
#define LATE6_clear_mask                         0xBF

#define LATE7                                    0x7
#define LATE7_address                            0x110
#define LATE7_position                           0x7
#define LATE7_size                               0x1
#define LATE7_value_mask                         0x80
#define LATE7_clear_mask                         0x7F


/*----------------------------------------------------------------#
| CM1CON0                                                   0x111 |
#-----------------------------------------------------------------#
| C1ON | CM1CON0_C1OUT | C1OE | C1POL | - | C1SP | C1HYS | C1SYNC |
#-----------------------------------------------------------------#
| 7    | 6             | 5    | 4     | 3 | 2    | 1     | 0      |
#----------------------------------------------------------------*/

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

#define CM1CON0_C1OUT                            0x6
#define CM1CON0_C1OUT_address                    0x111
#define CM1CON0_C1OUT_position                   0x6
#define CM1CON0_C1OUT_size                       0x1
#define CM1CON0_C1OUT_value_mask                 0x40
#define CM1CON0_C1OUT_clear_mask                 0xBF

#define C1ON                                     0x7
#define C1ON_address                             0x111
#define C1ON_position                            0x7
#define C1ON_size                                0x1
#define C1ON_value_mask                          0x80
#define C1ON_clear_mask                          0x7F


/*------------------------------------------------------------#
| CM1CON1                                               0x112 |
#-------------------------------------------------------------#
| C1INTP | C1INTN | C1PCH1 | C1PCH0 | - | - | C1NCH1 | C1NCH0 |
#-------------------------------------------------------------#
| 7      | 6      | 5      | 4      | 3 | 2 | 1      | 0      |
#------------------------------------------------------------*/

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
#define C1NCH_size                               0x2
#define C1NCH_value_mask                         0x3
#define C1NCH_clear_mask                         0xFC

#define C1NCH1                                   0x1
#define C1NCH1_address                           0x112
#define C1NCH1_position                          0x1
#define C1NCH1_size                              0x1
#define C1NCH1_value_mask                        0x2
#define C1NCH1_clear_mask                        0xFD

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


/*----------------------------------------------------------------#
| CM2CON0                                                   0x113 |
#-----------------------------------------------------------------#
| C2ON | CM2CON0_C2OUT | C2OE | C2POL | - | C2SP | C2HYS | C2SYNC |
#-----------------------------------------------------------------#
| 7    | 6             | 5    | 4     | 3 | 2    | 1     | 0      |
#----------------------------------------------------------------*/

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

#define CM2CON0_C2OUT                            0x6
#define CM2CON0_C2OUT_address                    0x113
#define CM2CON0_C2OUT_position                   0x6
#define CM2CON0_C2OUT_size                       0x1
#define CM2CON0_C2OUT_value_mask                 0x40
#define CM2CON0_C2OUT_clear_mask                 0xBF

#define C2ON                                     0x7
#define C2ON_address                             0x113
#define C2ON_position                            0x7
#define C2ON_size                                0x1
#define C2ON_value_mask                          0x80
#define C2ON_clear_mask                          0x7F


/*------------------------------------------------------------#
| CM2CON1                                               0x114 |
#-------------------------------------------------------------#
| C2INTP | C2INTN | C2PCH1 | C2PCH0 | - | - | C2NCH1 | C2NCH0 |
#-------------------------------------------------------------#
| 7      | 6      | 5      | 4      | 3 | 2 | 1      | 0      |
#------------------------------------------------------------*/

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
#define C2NCH_size                               0x2
#define C2NCH_value_mask                         0x3
#define C2NCH_clear_mask                         0xFC

#define C2NCH1                                   0x1
#define C2NCH1_address                           0x114
#define C2NCH1_position                          0x1
#define C2NCH1_size                              0x1
#define C2NCH1_value_mask                        0x2
#define C2NCH1_clear_mask                        0xFD

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


/*---------------------------------------------#
| CMOUT                                  0x115 |
#----------------------------------------------#
| - | - | - | - | - | MC3OUT | MC2OUT | MC1OUT |
#----------------------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2      | 1      | 0      |
#---------------------------------------------*/

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

#define MC3OUT                                   0x2
#define MC3OUT_address                           0x115
#define MC3OUT_position                          0x2
#define MC3OUT_size                              0x1
#define MC3OUT_value_mask                        0x4
#define MC3OUT_clear_mask                        0xFB


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


/*------------------------------------------------------------#
| DACCON0                                               0x118 |
#-------------------------------------------------------------#
| DACEN | DACLPS | DACOE | - | DACPSS1 | DACPSS0 | - | DACNSS |
#-------------------------------------------------------------#
| 7     | 6      | 5     | 4 | 3       | 2       | 1 | 0      |
#------------------------------------------------------------*/

#define DACCON0                                  0x0
#define DACCON0_address                          0x118
#define DACCON0_position                         0x0
#define DACCON0_size                             0x8
#define DACCON0_value_mask                       0xFF
#define DACCON0_clear_mask                       0x0

#define DACNSS                                   0x0
#define DACNSS_address                           0x118
#define DACNSS_position                          0x0
#define DACNSS_size                              0x1
#define DACNSS_value_mask                        0x1
#define DACNSS_clear_mask                        0xFE

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


/*----------------------------------------------------------------#
| SRCON0                                                    0x11A |
#-----------------------------------------------------------------#
| SRLEN | SRCLK2 | SRCLK1 | SRCLK0 | SRQEN | SRNQEN | SRPS | SRPR |
#-----------------------------------------------------------------#
| 7     | 6      | 5      | 4      | 3     | 2      | 1    | 0    |
#----------------------------------------------------------------*/

#define SRCON0                                   0x0
#define SRCON0_address                           0x11A
#define SRCON0_position                          0x0
#define SRCON0_size                              0x8
#define SRCON0_value_mask                        0xFF
#define SRCON0_clear_mask                        0x0

#define SRPR                                     0x0
#define SRPR_address                             0x11A
#define SRPR_position                            0x0
#define SRPR_size                                0x1
#define SRPR_value_mask                          0x1
#define SRPR_clear_mask                          0xFE

#define SRPS                                     0x1
#define SRPS_address                             0x11A
#define SRPS_position                            0x1
#define SRPS_size                                0x1
#define SRPS_value_mask                          0x2
#define SRPS_clear_mask                          0xFD

#define SRNQEN                                   0x2
#define SRNQEN_address                           0x11A
#define SRNQEN_position                          0x2
#define SRNQEN_size                              0x1
#define SRNQEN_value_mask                        0x4
#define SRNQEN_clear_mask                        0xFB

#define SRQEN                                    0x3
#define SRQEN_address                            0x11A
#define SRQEN_position                           0x3
#define SRQEN_size                               0x1
#define SRQEN_value_mask                         0x8
#define SRQEN_clear_mask                         0xF7

#define SRCLK0                                   0x4
#define SRCLK0_address                           0x11A
#define SRCLK0_position                          0x4
#define SRCLK0_size                              0x1
#define SRCLK0_value_mask                        0x10
#define SRCLK0_clear_mask                        0xEF

#define SRCLK                                    0x4
#define SRCLK_address                            0x11A
#define SRCLK_position                           0x4
#define SRCLK_size                               0x3
#define SRCLK_value_mask                         0x70
#define SRCLK_clear_mask                         0x8F

#define SRCLK1                                   0x5
#define SRCLK1_address                           0x11A
#define SRCLK1_position                          0x5
#define SRCLK1_size                              0x1
#define SRCLK1_value_mask                        0x20
#define SRCLK1_clear_mask                        0xDF

#define SRCLK2                                   0x6
#define SRCLK2_address                           0x11A
#define SRCLK2_position                          0x6
#define SRCLK2_size                              0x1
#define SRCLK2_value_mask                        0x40
#define SRCLK2_clear_mask                        0xBF

#define SRLEN                                    0x7
#define SRLEN_address                            0x11A
#define SRLEN_position                           0x7
#define SRLEN_size                               0x1
#define SRLEN_value_mask                         0x80
#define SRLEN_clear_mask                         0x7F


/*--------------------------------------------------------------------#
| SRCON1                                                        0x11B |
#---------------------------------------------------------------------#
| SRSPE | SRSCKE | SRSC2E | SRSC1E | SRRPE | SRRCKE | SRRC2E | SRRC1E |
#---------------------------------------------------------------------#
| 7     | 6      | 5      | 4      | 3     | 2      | 1      | 0      |
#--------------------------------------------------------------------*/

#define SRCON1                                   0x0
#define SRCON1_address                           0x11B
#define SRCON1_position                          0x0
#define SRCON1_size                              0x8
#define SRCON1_value_mask                        0xFF
#define SRCON1_clear_mask                        0x0

#define SRRC1E                                   0x0
#define SRRC1E_address                           0x11B
#define SRRC1E_position                          0x0
#define SRRC1E_size                              0x1
#define SRRC1E_value_mask                        0x1
#define SRRC1E_clear_mask                        0xFE

#define SRRC2E                                   0x1
#define SRRC2E_address                           0x11B
#define SRRC2E_position                          0x1
#define SRRC2E_size                              0x1
#define SRRC2E_value_mask                        0x2
#define SRRC2E_clear_mask                        0xFD

#define SRRCKE                                   0x2
#define SRRCKE_address                           0x11B
#define SRRCKE_position                          0x2
#define SRRCKE_size                              0x1
#define SRRCKE_value_mask                        0x4
#define SRRCKE_clear_mask                        0xFB

#define SRRPE                                    0x3
#define SRRPE_address                            0x11B
#define SRRPE_position                           0x3
#define SRRPE_size                               0x1
#define SRRPE_value_mask                         0x8
#define SRRPE_clear_mask                         0xF7

#define SRSC1E                                   0x4
#define SRSC1E_address                           0x11B
#define SRSC1E_position                          0x4
#define SRSC1E_size                              0x1
#define SRSC1E_value_mask                        0x10
#define SRSC1E_clear_mask                        0xEF

#define SRSC2E                                   0x5
#define SRSC2E_address                           0x11B
#define SRSC2E_position                          0x5
#define SRSC2E_size                              0x1
#define SRSC2E_value_mask                        0x20
#define SRSC2E_clear_mask                        0xDF

#define SRSCKE                                   0x6
#define SRSCKE_address                           0x11B
#define SRSCKE_position                          0x6
#define SRSCKE_size                              0x1
#define SRSCKE_value_mask                        0x40
#define SRSCKE_clear_mask                        0xBF

#define SRSPE                                    0x7
#define SRSPE_address                            0x11B
#define SRSPE_position                           0x7
#define SRSPE_size                               0x1
#define SRSPE_value_mask                         0x80
#define SRSPE_clear_mask                         0x7F


/*-----------------------------------------------------------------------#
| APFCON                                                           0x11D |
#------------------------------------------------------------------------#
| P3CSEL | P3BSEL | P2DSEL | P2CSEL | P2BSEL | CCP2SEL | P1CSEL | P1BSEL |
#------------------------------------------------------------------------#
| 7      | 6      | 5      | 4      | 3      | 2       | 1      | 0      |
#-----------------------------------------------------------------------*/

#define APFCON                                   0x0
#define APFCON_address                           0x11D
#define APFCON_position                          0x0
#define APFCON_size                              0x8
#define APFCON_value_mask                        0xFF
#define APFCON_clear_mask                        0x0

#define P1BSEL                                   0x0
#define P1BSEL_address                           0x11D
#define P1BSEL_position                          0x0
#define P1BSEL_size                              0x1
#define P1BSEL_value_mask                        0x1
#define P1BSEL_clear_mask                        0xFE

#define P1CSEL                                   0x1
#define P1CSEL_address                           0x11D
#define P1CSEL_position                          0x1
#define P1CSEL_size                              0x1
#define P1CSEL_value_mask                        0x2
#define P1CSEL_clear_mask                        0xFD

#define CCP2SEL                                  0x2
#define CCP2SEL_address                          0x11D
#define CCP2SEL_position                         0x2
#define CCP2SEL_size                             0x1
#define CCP2SEL_value_mask                       0x4
#define CCP2SEL_clear_mask                       0xFB

#define P2BSEL                                   0x3
#define P2BSEL_address                           0x11D
#define P2BSEL_position                          0x3
#define P2BSEL_size                              0x1
#define P2BSEL_value_mask                        0x8
#define P2BSEL_clear_mask                        0xF7

#define P2CSEL                                   0x4
#define P2CSEL_address                           0x11D
#define P2CSEL_position                          0x4
#define P2CSEL_size                              0x1
#define P2CSEL_value_mask                        0x10
#define P2CSEL_clear_mask                        0xEF

#define P2DSEL                                   0x5
#define P2DSEL_address                           0x11D
#define P2DSEL_position                          0x5
#define P2DSEL_size                              0x1
#define P2DSEL_value_mask                        0x20
#define P2DSEL_clear_mask                        0xDF

#define P3BSEL                                   0x6
#define P3BSEL_address                           0x11D
#define P3BSEL_position                          0x6
#define P3BSEL_size                              0x1
#define P3BSEL_value_mask                        0x40
#define P3BSEL_clear_mask                        0xBF

#define P3CSEL                                   0x7
#define P3CSEL_address                           0x11D
#define P3CSEL_position                          0x7
#define P3CSEL_size                              0x1
#define P3CSEL_value_mask                        0x80
#define P3CSEL_clear_mask                        0x7F


/*----------------------------------------------------------------#
| CM3CON0                                                   0x11E |
#-----------------------------------------------------------------#
| C3ON | CM3CON0_C3OUT | C3OE | C3POL | - | C3SP | C3HYS | C3SYNC |
#-----------------------------------------------------------------#
| 7    | 6             | 5    | 4     | 3 | 2    | 1     | 0      |
#----------------------------------------------------------------*/

#define CM3CON0                                  0x0
#define CM3CON0_address                          0x11E
#define CM3CON0_position                         0x0
#define CM3CON0_size                             0x8
#define CM3CON0_value_mask                       0xFF
#define CM3CON0_clear_mask                       0x0

#define C3SYNC                                   0x0
#define C3SYNC_address                           0x11E
#define C3SYNC_position                          0x0
#define C3SYNC_size                              0x1
#define C3SYNC_value_mask                        0x1
#define C3SYNC_clear_mask                        0xFE

#define C3HYS                                    0x1
#define C3HYS_address                            0x11E
#define C3HYS_position                           0x1
#define C3HYS_size                               0x1
#define C3HYS_value_mask                         0x2
#define C3HYS_clear_mask                         0xFD

#define C3SP                                     0x2
#define C3SP_address                             0x11E
#define C3SP_position                            0x2
#define C3SP_size                                0x1
#define C3SP_value_mask                          0x4
#define C3SP_clear_mask                          0xFB

#define C3POL                                    0x4
#define C3POL_address                            0x11E
#define C3POL_position                           0x4
#define C3POL_size                               0x1
#define C3POL_value_mask                         0x10
#define C3POL_clear_mask                         0xEF

#define C3OE                                     0x5
#define C3OE_address                             0x11E
#define C3OE_position                            0x5
#define C3OE_size                                0x1
#define C3OE_value_mask                          0x20
#define C3OE_clear_mask                          0xDF

#define CM3CON0_C3OUT                            0x6
#define CM3CON0_C3OUT_address                    0x11E
#define CM3CON0_C3OUT_position                   0x6
#define CM3CON0_C3OUT_size                       0x1
#define CM3CON0_C3OUT_value_mask                 0x40
#define CM3CON0_C3OUT_clear_mask                 0xBF

#define C3ON                                     0x7
#define C3ON_address                             0x11E
#define C3ON_position                            0x7
#define C3ON_size                                0x1
#define C3ON_value_mask                          0x80
#define C3ON_clear_mask                          0x7F


/*------------------------------------------------------------#
| CM3CON1                                               0x11F |
#-------------------------------------------------------------#
| C3INTP | C3INTN | C3PCH1 | C3PCH0 | - | - | C3NCH1 | C3NCH0 |
#-------------------------------------------------------------#
| 7      | 6      | 5      | 4      | 3 | 2 | 1      | 0      |
#------------------------------------------------------------*/

#define CM3CON1                                  0x0
#define CM3CON1_address                          0x11F
#define CM3CON1_position                         0x0
#define CM3CON1_size                             0x8
#define CM3CON1_value_mask                       0xFF
#define CM3CON1_clear_mask                       0x0

#define C3NCH                                    0x0
#define C3NCH_address                            0x11F
#define C3NCH_position                           0x0
#define C3NCH_size                               0x2
#define C3NCH_value_mask                         0x3
#define C3NCH_clear_mask                         0xFC

#define C3NCH0                                   0x0
#define C3NCH0_address                           0x11F
#define C3NCH0_position                          0x0
#define C3NCH0_size                              0x1
#define C3NCH0_value_mask                        0x1
#define C3NCH0_clear_mask                        0xFE

#define C3NCH1                                   0x1
#define C3NCH1_address                           0x11F
#define C3NCH1_position                          0x1
#define C3NCH1_size                              0x1
#define C3NCH1_value_mask                        0x2
#define C3NCH1_clear_mask                        0xFD

#define C3PCH                                    0x4
#define C3PCH_address                            0x11F
#define C3PCH_position                           0x4
#define C3PCH_size                               0x2
#define C3PCH_value_mask                         0x30
#define C3PCH_clear_mask                         0xCF

#define C3PCH0                                   0x4
#define C3PCH0_address                           0x11F
#define C3PCH0_position                          0x4
#define C3PCH0_size                              0x1
#define C3PCH0_value_mask                        0x10
#define C3PCH0_clear_mask                        0xEF

#define C3PCH1                                   0x5
#define C3PCH1_address                           0x11F
#define C3PCH1_position                          0x5
#define C3PCH1_size                              0x1
#define C3PCH1_value_mask                        0x20
#define C3PCH1_clear_mask                        0xDF

#define C3INTN                                   0x6
#define C3INTN_address                           0x11F
#define C3INTN_position                          0x6
#define C3INTN_size                              0x1
#define C3INTN_value_mask                        0x40
#define C3INTN_clear_mask                        0xBF

#define C3INTP                                   0x7
#define C3INTP_address                           0x11F
#define C3INTP_position                          0x7
#define C3INTP_size                              0x1
#define C3INTP_value_mask                        0x80
#define C3INTP_clear_mask                        0x7F


/*--------------------------------------------------#
| ANSELA                                      0x18C |
#---------------------------------------------------#
| - | - | ANSA5 | - | ANSA3 | ANSA2 | ANSA1 | ANSA0 |
#---------------------------------------------------#
| 7 | 6 | 5     | 4 | 3     | 2     | 1     | 0     |
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

#define ANSA3                                    0x3
#define ANSA3_address                            0x18C
#define ANSA3_position                           0x3
#define ANSA3_size                               0x1
#define ANSA3_value_mask                         0x8
#define ANSA3_clear_mask                         0xF7

#define ANSA5                                    0x5
#define ANSA5_address                            0x18C
#define ANSA5_position                           0x5
#define ANSA5_size                               0x1
#define ANSA5_value_mask                         0x20
#define ANSA5_clear_mask                         0xDF


/*------------------------------------------#
| ANSELE                              0x190 |
#-------------------------------------------#
| - | - | - | - | - | ANSE2 | ANSE1 | ANSE0 |
#-------------------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2     | 1     | 0     |
#------------------------------------------*/

#define ANSELE                                   0x0
#define ANSELE_address                           0x190
#define ANSELE_position                          0x0
#define ANSELE_size                              0x3
#define ANSELE_value_mask                        0x7
#define ANSELE_clear_mask                        0xF8

#define ANSE0                                    0x0
#define ANSE0_address                            0x190
#define ANSE0_position                           0x0
#define ANSE0_size                               0x1
#define ANSE0_value_mask                         0x1
#define ANSE0_clear_mask                         0xFE

#define ANSE1                                    0x1
#define ANSE1_address                            0x190
#define ANSE1_position                           0x1
#define ANSE1_size                               0x1
#define ANSE1_value_mask                         0x2
#define ANSE1_clear_mask                         0xFD

#define ANSE2                                    0x2
#define ANSE2_address                            0x190
#define ANSE2_position                           0x2
#define ANSE2_size                               0x1
#define ANSE2_value_mask                         0x4
#define ANSE2_clear_mask                         0xFB


/*------------------------------#
| EEADRL                  0x191 |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define EEADRL                                   0x0
#define EEADRL_address                           0x191
#define EEADRL_position                          0x0
#define EEADRL_size                              0x8
#define EEADRL_value_mask                        0xFF
#define EEADRL_clear_mask                        0x0


/*------------------------------#
| EEADRH                  0x192 |
#-------------------------------#
| - | EEADRH                    |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define EEADRH                                   0x0
#define EEADRH_address                           0x192
#define EEADRH_position                          0x0
#define EEADRH_size                              0x7
#define EEADRH_value_mask                        0x7F
#define EEADRH_clear_mask                        0x80


/*------------------------------#
| EEDATL                  0x193 |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define EEDATL                                   0x0
#define EEDATL_address                           0x193
#define EEDATL_position                          0x0
#define EEDATL_size                              0x8
#define EEDATL_value_mask                        0xFF
#define EEDATL_clear_mask                        0x0


/*------------------------------#
| EEDATH                  0x194 |
#-------------------------------#
| - | - | EEDATH                |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define EEDATH                                   0x0
#define EEDATH_address                           0x194
#define EEDATH_position                          0x0
#define EEDATH_size                              0x6
#define EEDATH_value_mask                        0x3F
#define EEDATH_clear_mask                        0xC0


/*----------------------------------------------------#
| EECON1                                        0x195 |
#-----------------------------------------------------#
| EEPGD | CFGS | LWLO | FREE | WRERR | WREN | WR | RD |
#-----------------------------------------------------#
| 7     | 6    | 5    | 4    | 3     | 2    | 1  | 0  |
#----------------------------------------------------*/

#define EECON1                                   0x0
#define EECON1_address                           0x195
#define EECON1_position                          0x0
#define EECON1_size                              0x8
#define EECON1_value_mask                        0xFF
#define EECON1_clear_mask                        0x0

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

#define EEPGD                                    0x7
#define EEPGD_address                            0x195
#define EEPGD_position                           0x7
#define EEPGD_size                               0x1
#define EEPGD_value_mask                         0x80
#define EEPGD_clear_mask                         0x7F


/*------------------------------#
| EECON2                  0x196 |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define EECON2                                   0x0
#define EECON2_address                           0x196
#define EECON2_position                          0x0
#define EECON2_size                              0x8
#define EECON2_value_mask                        0xFF
#define EECON2_clear_mask                        0x0


/*------------------------------#
| RC1REG                  0x199 |
#-------------------------------#
| RC1REG_RCREG                  |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define RC1REG                                   0x0
#define RC1REG_address                           0x199
#define RC1REG_position                          0x0
#define RC1REG_size                              0x8
#define RC1REG_value_mask                        0xFF
#define RC1REG_clear_mask                        0x0

#define RC1REG_RCREG                             0x0
#define RC1REG_RCREG_address                     0x199
#define RC1REG_RCREG_position                    0x0
#define RC1REG_RCREG_size                        0x8
#define RC1REG_RCREG_value_mask                  0xFF
#define RC1REG_RCREG_clear_mask                  0x0


/*------------------------------#
| TX1REG                  0x19A |
#-------------------------------#
| TX1REG_TXREG                  |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define TX1REG                                   0x0
#define TX1REG_address                           0x19A
#define TX1REG_position                          0x0
#define TX1REG_size                              0x8
#define TX1REG_value_mask                        0xFF
#define TX1REG_clear_mask                        0x0

#define TX1REG_TXREG                             0x0
#define TX1REG_TXREG_address                     0x19A
#define TX1REG_TXREG_position                    0x0
#define TX1REG_TXREG_size                        0x8
#define TX1REG_TXREG_value_mask                  0xFF
#define TX1REG_TXREG_clear_mask                  0x0


/*------------------------------#
| SP1BRGL                 0x19B |
#-------------------------------#
| SP1BRGL_SPBRGL                |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define SP1BRGL                                  0x0
#define SP1BRGL_address                          0x19B
#define SP1BRGL_position                         0x0
#define SP1BRGL_size                             0x8
#define SP1BRGL_value_mask                       0xFF
#define SP1BRGL_clear_mask                       0x0

#define SP1BRGL_SPBRGL                           0x0
#define SP1BRGL_SPBRGL_address                   0x19B
#define SP1BRGL_SPBRGL_position                  0x0
#define SP1BRGL_SPBRGL_size                      0x8
#define SP1BRGL_SPBRGL_value_mask                0xFF
#define SP1BRGL_SPBRGL_clear_mask                0x0


/*------------------------------#
| SP1BRGH                 0x19C |
#-------------------------------#
| SP1BRGH_SPBRGH                |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define SP1BRGH                                  0x0
#define SP1BRGH_address                          0x19C
#define SP1BRGH_position                         0x0
#define SP1BRGH_size                             0x8
#define SP1BRGH_value_mask                       0xFF
#define SP1BRGH_clear_mask                       0x0

#define SP1BRGH_SPBRGH                           0x0
#define SP1BRGH_SPBRGH_address                   0x19C
#define SP1BRGH_SPBRGH_position                  0x0
#define SP1BRGH_SPBRGH_size                      0x8
#define SP1BRGH_SPBRGH_value_mask                0xFF
#define SP1BRGH_SPBRGH_clear_mask                0x0


/*--------------------------------------------------------------------------------------------------------------#
| RC1STA                                                                                                  0x19D |
#---------------------------------------------------------------------------------------------------------------#
| RC1STA_SPEN | RC1STA_RX9 | RC1STA_SREN | RC1STA_CREN | RC1STA_ADDEN | RC1STA_FERR | RC1STA_OERR | RC1STA_RX9D |
#---------------------------------------------------------------------------------------------------------------#
| 7           | 6          | 5           | 4           | 3            | 2           | 1           | 0           |
#--------------------------------------------------------------------------------------------------------------*/

#define RC1STA                                   0x0
#define RC1STA_address                           0x19D
#define RC1STA_position                          0x0
#define RC1STA_size                              0x8
#define RC1STA_value_mask                        0xFF
#define RC1STA_clear_mask                        0x0

#define RC1STA_RX9D                              0x0
#define RC1STA_RX9D_address                      0x19D
#define RC1STA_RX9D_position                     0x0
#define RC1STA_RX9D_size                         0x1
#define RC1STA_RX9D_value_mask                   0x1
#define RC1STA_RX9D_clear_mask                   0xFE

#define RC1STA_OERR                              0x1
#define RC1STA_OERR_address                      0x19D
#define RC1STA_OERR_position                     0x1
#define RC1STA_OERR_size                         0x1
#define RC1STA_OERR_value_mask                   0x2
#define RC1STA_OERR_clear_mask                   0xFD

#define RC1STA_FERR                              0x2
#define RC1STA_FERR_address                      0x19D
#define RC1STA_FERR_position                     0x2
#define RC1STA_FERR_size                         0x1
#define RC1STA_FERR_value_mask                   0x4
#define RC1STA_FERR_clear_mask                   0xFB

#define RC1STA_ADDEN                             0x3
#define RC1STA_ADDEN_address                     0x19D
#define RC1STA_ADDEN_position                    0x3
#define RC1STA_ADDEN_size                        0x1
#define RC1STA_ADDEN_value_mask                  0x8
#define RC1STA_ADDEN_clear_mask                  0xF7

#define RC1STA_CREN                              0x4
#define RC1STA_CREN_address                      0x19D
#define RC1STA_CREN_position                     0x4
#define RC1STA_CREN_size                         0x1
#define RC1STA_CREN_value_mask                   0x10
#define RC1STA_CREN_clear_mask                   0xEF

#define RC1STA_SREN                              0x5
#define RC1STA_SREN_address                      0x19D
#define RC1STA_SREN_position                     0x5
#define RC1STA_SREN_size                         0x1
#define RC1STA_SREN_value_mask                   0x20
#define RC1STA_SREN_clear_mask                   0xDF

#define RC1STA_RX9                               0x6
#define RC1STA_RX9_address                       0x19D
#define RC1STA_RX9_position                      0x6
#define RC1STA_RX9_size                          0x1
#define RC1STA_RX9_value_mask                    0x40
#define RC1STA_RX9_clear_mask                    0xBF

#define RC1STA_SPEN                              0x7
#define RC1STA_SPEN_address                      0x19D
#define RC1STA_SPEN_position                     0x7
#define RC1STA_SPEN_size                         0x1
#define RC1STA_SPEN_value_mask                   0x80
#define RC1STA_SPEN_clear_mask                   0x7F


/*--------------------------------------------------------------------------------------------------------------#
| TX1STA                                                                                                  0x19E |
#---------------------------------------------------------------------------------------------------------------#
| TX1STA_CSRC | TX1STA_TX9 | TX1STA_TXEN | TX1STA_SYNC | TX1STA_SENDB | TX1STA_BRGH | TX1STA_TRMT | TX1STA_TX9D |
#---------------------------------------------------------------------------------------------------------------#
| 7           | 6          | 5           | 4           | 3            | 2           | 1           | 0           |
#--------------------------------------------------------------------------------------------------------------*/

#define TX1STA                                   0x0
#define TX1STA_address                           0x19E
#define TX1STA_position                          0x0
#define TX1STA_size                              0x8
#define TX1STA_value_mask                        0xFF
#define TX1STA_clear_mask                        0x0

#define TX1STA_TX9D                              0x0
#define TX1STA_TX9D_address                      0x19E
#define TX1STA_TX9D_position                     0x0
#define TX1STA_TX9D_size                         0x1
#define TX1STA_TX9D_value_mask                   0x1
#define TX1STA_TX9D_clear_mask                   0xFE

#define TX1STA_TRMT                              0x1
#define TX1STA_TRMT_address                      0x19E
#define TX1STA_TRMT_position                     0x1
#define TX1STA_TRMT_size                         0x1
#define TX1STA_TRMT_value_mask                   0x2
#define TX1STA_TRMT_clear_mask                   0xFD

#define TX1STA_BRGH                              0x2
#define TX1STA_BRGH_address                      0x19E
#define TX1STA_BRGH_position                     0x2
#define TX1STA_BRGH_size                         0x1
#define TX1STA_BRGH_value_mask                   0x4
#define TX1STA_BRGH_clear_mask                   0xFB

#define TX1STA_SENDB                             0x3
#define TX1STA_SENDB_address                     0x19E
#define TX1STA_SENDB_position                    0x3
#define TX1STA_SENDB_size                        0x1
#define TX1STA_SENDB_value_mask                  0x8
#define TX1STA_SENDB_clear_mask                  0xF7

#define TX1STA_SYNC                              0x4
#define TX1STA_SYNC_address                      0x19E
#define TX1STA_SYNC_position                     0x4
#define TX1STA_SYNC_size                         0x1
#define TX1STA_SYNC_value_mask                   0x10
#define TX1STA_SYNC_clear_mask                   0xEF

#define TX1STA_TXEN                              0x5
#define TX1STA_TXEN_address                      0x19E
#define TX1STA_TXEN_position                     0x5
#define TX1STA_TXEN_size                         0x1
#define TX1STA_TXEN_value_mask                   0x20
#define TX1STA_TXEN_clear_mask                   0xDF

#define TX1STA_TX9                               0x6
#define TX1STA_TX9_address                       0x19E
#define TX1STA_TX9_position                      0x6
#define TX1STA_TX9_size                          0x1
#define TX1STA_TX9_value_mask                    0x40
#define TX1STA_TX9_clear_mask                    0xBF

#define TX1STA_CSRC                              0x7
#define TX1STA_CSRC_address                      0x19E
#define TX1STA_CSRC_position                     0x7
#define TX1STA_CSRC_size                         0x1
#define TX1STA_CSRC_value_mask                   0x80
#define TX1STA_CSRC_clear_mask                   0x7F


/*----------------------------------------------------------------------------------------------------------#
| BAUD1CON                                                                                            0x19F |
#-----------------------------------------------------------------------------------------------------------#
| BAUD1CON_ABDOVF | BAUD1CON_RCIDL | - | BAUD1CON_SCKP | BAUD1CON_BRG16 | - | BAUD1CON_WUE | BAUD1CON_ABDEN |
#-----------------------------------------------------------------------------------------------------------#
| 7               | 6              | 5 | 4             | 3              | 2 | 1            | 0              |
#----------------------------------------------------------------------------------------------------------*/

#define BAUD1CON                                 0x0
#define BAUD1CON_address                         0x19F
#define BAUD1CON_position                        0x0
#define BAUD1CON_size                            0x8
#define BAUD1CON_value_mask                      0xFF
#define BAUD1CON_clear_mask                      0x0

#define BAUD1CON_ABDEN                           0x0
#define BAUD1CON_ABDEN_address                   0x19F
#define BAUD1CON_ABDEN_position                  0x0
#define BAUD1CON_ABDEN_size                      0x1
#define BAUD1CON_ABDEN_value_mask                0x1
#define BAUD1CON_ABDEN_clear_mask                0xFE

#define BAUD1CON_WUE                             0x1
#define BAUD1CON_WUE_address                     0x19F
#define BAUD1CON_WUE_position                    0x1
#define BAUD1CON_WUE_size                        0x1
#define BAUD1CON_WUE_value_mask                  0x2
#define BAUD1CON_WUE_clear_mask                  0xFD

#define BAUD1CON_BRG16                           0x3
#define BAUD1CON_BRG16_address                   0x19F
#define BAUD1CON_BRG16_position                  0x3
#define BAUD1CON_BRG16_size                      0x1
#define BAUD1CON_BRG16_value_mask                0x8
#define BAUD1CON_BRG16_clear_mask                0xF7

#define BAUD1CON_SCKP                            0x4
#define BAUD1CON_SCKP_address                    0x19F
#define BAUD1CON_SCKP_position                   0x4
#define BAUD1CON_SCKP_size                       0x1
#define BAUD1CON_SCKP_value_mask                 0x10
#define BAUD1CON_SCKP_clear_mask                 0xEF

#define BAUD1CON_RCIDL                           0x6
#define BAUD1CON_RCIDL_address                   0x19F
#define BAUD1CON_RCIDL_position                  0x6
#define BAUD1CON_RCIDL_size                      0x1
#define BAUD1CON_RCIDL_value_mask                0x40
#define BAUD1CON_RCIDL_clear_mask                0xBF

#define BAUD1CON_ABDOVF                          0x7
#define BAUD1CON_ABDOVF_address                  0x19F
#define BAUD1CON_ABDOVF_position                 0x7
#define BAUD1CON_ABDOVF_size                     0x1
#define BAUD1CON_ABDOVF_value_mask               0x80
#define BAUD1CON_ABDOVF_clear_mask               0x7F


/*--------------------------------------------------------------#
| WPUB                                                    0x20D |
#---------------------------------------------------------------#
| WPUB7 | WPUB6 | WPUB5 | WPUB4 | WPUB3 | WPUB2 | WPUB1 | WPUB0 |
#---------------------------------------------------------------#
| 7     | 6     | 5     | 4     | 3     | 2     | 1     | 0     |
#--------------------------------------------------------------*/

#define WPUB0                                    0x0
#define WPUB0_address                            0x20D
#define WPUB0_position                           0x0
#define WPUB0_size                               0x1
#define WPUB0_value_mask                         0x1
#define WPUB0_clear_mask                         0xFE

#define WPUB                                     0x0
#define WPUB_address                             0x20D
#define WPUB_position                            0x0
#define WPUB_size                                0x8
#define WPUB_value_mask                          0xFF
#define WPUB_clear_mask                          0x0

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


/*------------------------------#
| SSP1BUF                 0x211 |
#-------------------------------#
| SSP1BUF_SSPBUF                |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define SSP1BUF                                  0x0
#define SSP1BUF_address                          0x211
#define SSP1BUF_position                         0x0
#define SSP1BUF_size                             0x8
#define SSP1BUF_value_mask                       0xFF
#define SSP1BUF_clear_mask                       0x0

#define SSP1BUF_SSPBUF                           0x0
#define SSP1BUF_SSPBUF_address                   0x211
#define SSP1BUF_SSPBUF_position                  0x0
#define SSP1BUF_SSPBUF_size                      0x8
#define SSP1BUF_SSPBUF_value_mask                0xFF
#define SSP1BUF_SSPBUF_clear_mask                0x0


/*------------------------------#
| SSP1ADD                 0x212 |
#-------------------------------#
| SSP1ADD_SSPADD                |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define SSP1ADD                                  0x0
#define SSP1ADD_address                          0x212
#define SSP1ADD_position                         0x0
#define SSP1ADD_size                             0x8
#define SSP1ADD_value_mask                       0xFF
#define SSP1ADD_clear_mask                       0x0

#define SSP1ADD_SSPADD                           0x0
#define SSP1ADD_SSPADD_address                   0x212
#define SSP1ADD_SSPADD_position                  0x0
#define SSP1ADD_SSPADD_size                      0x8
#define SSP1ADD_SSPADD_value_mask                0xFF
#define SSP1ADD_SSPADD_clear_mask                0x0


/*------------------------------#
| SSP1MSK                 0x213 |
#-------------------------------#
| SSP1MSK_SSPMSK                |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define SSP1MSK                                  0x0
#define SSP1MSK_address                          0x213
#define SSP1MSK_position                         0x0
#define SSP1MSK_size                             0x8
#define SSP1MSK_value_mask                       0xFF
#define SSP1MSK_clear_mask                       0x0

#define SSP1MSK_SSPMSK                           0x0
#define SSP1MSK_SSPMSK_address                   0x213
#define SSP1MSK_SSPMSK_position                  0x0
#define SSP1MSK_SSPMSK_size                      0x8
#define SSP1MSK_SSPMSK_value_mask                0xFF
#define SSP1MSK_SSPMSK_clear_mask                0x0


/*------------------------------------------------------------------------------------------------------------------#
| SSP1STAT                                                                                                    0x214 |
#-------------------------------------------------------------------------------------------------------------------#
| SSP1STAT_SMP | SSP1STAT_CKE | SSP1STAT_D_nA | SSP1STAT_P | SSP1STAT_S | SSP1STAT_R_nW | SSP1STAT_UA | SSP1STAT_BF |
#-------------------------------------------------------------------------------------------------------------------#
| 7            | 6            | 5             | 4          | 3          | 2             | 1           | 0           |
#------------------------------------------------------------------------------------------------------------------*/

#define SSP1STAT                                 0x0
#define SSP1STAT_address                         0x214
#define SSP1STAT_position                        0x0
#define SSP1STAT_size                            0x8
#define SSP1STAT_value_mask                      0xFF
#define SSP1STAT_clear_mask                      0x0

#define SSP1STAT_BF                              0x0
#define SSP1STAT_BF_address                      0x214
#define SSP1STAT_BF_position                     0x0
#define SSP1STAT_BF_size                         0x1
#define SSP1STAT_BF_value_mask                   0x1
#define SSP1STAT_BF_clear_mask                   0xFE

#define SSP1STAT_UA                              0x1
#define SSP1STAT_UA_address                      0x214
#define SSP1STAT_UA_position                     0x1
#define SSP1STAT_UA_size                         0x1
#define SSP1STAT_UA_value_mask                   0x2
#define SSP1STAT_UA_clear_mask                   0xFD

#define SSP1STAT_R_nW                            0x2
#define SSP1STAT_R_nW_address                    0x214
#define SSP1STAT_R_nW_position                   0x2
#define SSP1STAT_R_nW_size                       0x1
#define SSP1STAT_R_nW_value_mask                 0x4
#define SSP1STAT_R_nW_clear_mask                 0xFB

#define SSP1STAT_S                               0x3
#define SSP1STAT_S_address                       0x214
#define SSP1STAT_S_position                      0x3
#define SSP1STAT_S_size                          0x1
#define SSP1STAT_S_value_mask                    0x8
#define SSP1STAT_S_clear_mask                    0xF7

#define SSP1STAT_P                               0x4
#define SSP1STAT_P_address                       0x214
#define SSP1STAT_P_position                      0x4
#define SSP1STAT_P_size                          0x1
#define SSP1STAT_P_value_mask                    0x10
#define SSP1STAT_P_clear_mask                    0xEF

#define SSP1STAT_D_nA                            0x5
#define SSP1STAT_D_nA_address                    0x214
#define SSP1STAT_D_nA_position                   0x5
#define SSP1STAT_D_nA_size                       0x1
#define SSP1STAT_D_nA_value_mask                 0x20
#define SSP1STAT_D_nA_clear_mask                 0xDF

#define SSP1STAT_CKE                             0x6
#define SSP1STAT_CKE_address                     0x214
#define SSP1STAT_CKE_position                    0x6
#define SSP1STAT_CKE_size                        0x1
#define SSP1STAT_CKE_value_mask                  0x40
#define SSP1STAT_CKE_clear_mask                  0xBF

#define SSP1STAT_SMP                             0x7
#define SSP1STAT_SMP_address                     0x214
#define SSP1STAT_SMP_position                    0x7
#define SSP1STAT_SMP_size                        0x1
#define SSP1STAT_SMP_value_mask                  0x80
#define SSP1STAT_SMP_clear_mask                  0x7F


/*-----------------------------------------------------------------------------------------------------------------------------------#
| SSP1CON1                                                                                                                     0x215 |
#------------------------------------------------------------------------------------------------------------------------------------#
| SSP1CON1_WCOL | SSP1CON1_SSPOV | SSP1CON1_SSPEN | SSP1CON1_CKP | SSP1CON1_SSPM3 | SSP1CON1_SSPM2 | SSP1CON1_SSPM1 | SSP1CON1_SSPM0 |
#------------------------------------------------------------------------------------------------------------------------------------#
| 7             | 6              | 5              | 4            | 3              | 2              | 1              | 0              |
#-----------------------------------------------------------------------------------------------------------------------------------*/

#define SSP1CON1                                 0x0
#define SSP1CON1_address                         0x215
#define SSP1CON1_position                        0x0
#define SSP1CON1_size                            0x8
#define SSP1CON1_value_mask                      0xFF
#define SSP1CON1_clear_mask                      0x0

#define SSP1CON1_SSPM0                           0x0
#define SSP1CON1_SSPM0_address                   0x215
#define SSP1CON1_SSPM0_position                  0x0
#define SSP1CON1_SSPM0_size                      0x1
#define SSP1CON1_SSPM0_value_mask                0x1
#define SSP1CON1_SSPM0_clear_mask                0xFE

#define SSP1CON1_SSPM1                           0x1
#define SSP1CON1_SSPM1_address                   0x215
#define SSP1CON1_SSPM1_position                  0x1
#define SSP1CON1_SSPM1_size                      0x1
#define SSP1CON1_SSPM1_value_mask                0x2
#define SSP1CON1_SSPM1_clear_mask                0xFD

#define SSP1CON1_SSPM2                           0x2
#define SSP1CON1_SSPM2_address                   0x215
#define SSP1CON1_SSPM2_position                  0x2
#define SSP1CON1_SSPM2_size                      0x1
#define SSP1CON1_SSPM2_value_mask                0x4
#define SSP1CON1_SSPM2_clear_mask                0xFB

#define SSP1CON1_SSPM3                           0x3
#define SSP1CON1_SSPM3_address                   0x215
#define SSP1CON1_SSPM3_position                  0x3
#define SSP1CON1_SSPM3_size                      0x1
#define SSP1CON1_SSPM3_value_mask                0x8
#define SSP1CON1_SSPM3_clear_mask                0xF7

#define SSP1CON1_CKP                             0x4
#define SSP1CON1_CKP_address                     0x215
#define SSP1CON1_CKP_position                    0x4
#define SSP1CON1_CKP_size                        0x1
#define SSP1CON1_CKP_value_mask                  0x10
#define SSP1CON1_CKP_clear_mask                  0xEF

#define SSP1CON1_SSPEN                           0x5
#define SSP1CON1_SSPEN_address                   0x215
#define SSP1CON1_SSPEN_position                  0x5
#define SSP1CON1_SSPEN_size                      0x1
#define SSP1CON1_SSPEN_value_mask                0x20
#define SSP1CON1_SSPEN_clear_mask                0xDF

#define SSP1CON1_SSPOV                           0x6
#define SSP1CON1_SSPOV_address                   0x215
#define SSP1CON1_SSPOV_position                  0x6
#define SSP1CON1_SSPOV_size                      0x1
#define SSP1CON1_SSPOV_value_mask                0x40
#define SSP1CON1_SSPOV_clear_mask                0xBF

#define SSP1CON1_WCOL                            0x7
#define SSP1CON1_WCOL_address                    0x215
#define SSP1CON1_WCOL_position                   0x7
#define SSP1CON1_WCOL_size                       0x1
#define SSP1CON1_WCOL_value_mask                 0x80
#define SSP1CON1_WCOL_clear_mask                 0x7F


/*---------------------------------------------------------------------------------------------------------------------------------#
| SSP1CON2                                                                                                                   0x216 |
#----------------------------------------------------------------------------------------------------------------------------------#
| SSP1CON2_GCEN | SSP1CON2_ACKSTAT | SSP1CON2_ACKDT | SSP1CON2_ACKEN | SSP1CON2_RCEN | SSP1CON2_PEN | SSP1CON2_RSEN | SSP1CON2_SEN |
#----------------------------------------------------------------------------------------------------------------------------------#
| 7             | 6                | 5              | 4              | 3             | 2            | 1             | 0            |
#---------------------------------------------------------------------------------------------------------------------------------*/

#define SSP1CON2                                 0x0
#define SSP1CON2_address                         0x216
#define SSP1CON2_position                        0x0
#define SSP1CON2_size                            0x8
#define SSP1CON2_value_mask                      0xFF
#define SSP1CON2_clear_mask                      0x0

#define SSP1CON2_SEN                             0x0
#define SSP1CON2_SEN_address                     0x216
#define SSP1CON2_SEN_position                    0x0
#define SSP1CON2_SEN_size                        0x1
#define SSP1CON2_SEN_value_mask                  0x1
#define SSP1CON2_SEN_clear_mask                  0xFE

#define SSP1CON2_RSEN                            0x1
#define SSP1CON2_RSEN_address                    0x216
#define SSP1CON2_RSEN_position                   0x1
#define SSP1CON2_RSEN_size                       0x1
#define SSP1CON2_RSEN_value_mask                 0x2
#define SSP1CON2_RSEN_clear_mask                 0xFD

#define SSP1CON2_PEN                             0x2
#define SSP1CON2_PEN_address                     0x216
#define SSP1CON2_PEN_position                    0x2
#define SSP1CON2_PEN_size                        0x1
#define SSP1CON2_PEN_value_mask                  0x4
#define SSP1CON2_PEN_clear_mask                  0xFB

#define SSP1CON2_RCEN                            0x3
#define SSP1CON2_RCEN_address                    0x216
#define SSP1CON2_RCEN_position                   0x3
#define SSP1CON2_RCEN_size                       0x1
#define SSP1CON2_RCEN_value_mask                 0x8
#define SSP1CON2_RCEN_clear_mask                 0xF7

#define SSP1CON2_ACKEN                           0x4
#define SSP1CON2_ACKEN_address                   0x216
#define SSP1CON2_ACKEN_position                  0x4
#define SSP1CON2_ACKEN_size                      0x1
#define SSP1CON2_ACKEN_value_mask                0x10
#define SSP1CON2_ACKEN_clear_mask                0xEF

#define SSP1CON2_ACKDT                           0x5
#define SSP1CON2_ACKDT_address                   0x216
#define SSP1CON2_ACKDT_position                  0x5
#define SSP1CON2_ACKDT_size                      0x1
#define SSP1CON2_ACKDT_value_mask                0x20
#define SSP1CON2_ACKDT_clear_mask                0xDF

#define SSP1CON2_ACKSTAT                         0x6
#define SSP1CON2_ACKSTAT_address                 0x216
#define SSP1CON2_ACKSTAT_position                0x6
#define SSP1CON2_ACKSTAT_size                    0x1
#define SSP1CON2_ACKSTAT_value_mask              0x40
#define SSP1CON2_ACKSTAT_clear_mask              0xBF

#define SSP1CON2_GCEN                            0x7
#define SSP1CON2_GCEN_address                    0x216
#define SSP1CON2_GCEN_position                   0x7
#define SSP1CON2_GCEN_size                       0x1
#define SSP1CON2_GCEN_value_mask                 0x80
#define SSP1CON2_GCEN_clear_mask                 0x7F


/*----------------------------------------------------------------------------------------------------------------------------------#
| SSP1CON3                                                                                                                    0x217 |
#-----------------------------------------------------------------------------------------------------------------------------------#
| SSP1CON3_ACKTIM | SSP1CON3_PCIE | SSP1CON3_SCIE | SSP1CON3_BOEN | SSP1CON3_SDAHT | SSP1CON3_SBCDE | SSP1CON3_AHEN | SSP1CON3_DHEN |
#-----------------------------------------------------------------------------------------------------------------------------------#
| 7               | 6             | 5             | 4             | 3              | 2              | 1             | 0             |
#----------------------------------------------------------------------------------------------------------------------------------*/

#define SSP1CON3                                 0x0
#define SSP1CON3_address                         0x217
#define SSP1CON3_position                        0x0
#define SSP1CON3_size                            0x8
#define SSP1CON3_value_mask                      0xFF
#define SSP1CON3_clear_mask                      0x0

#define SSP1CON3_DHEN                            0x0
#define SSP1CON3_DHEN_address                    0x217
#define SSP1CON3_DHEN_position                   0x0
#define SSP1CON3_DHEN_size                       0x1
#define SSP1CON3_DHEN_value_mask                 0x1
#define SSP1CON3_DHEN_clear_mask                 0xFE

#define SSP1CON3_AHEN                            0x1
#define SSP1CON3_AHEN_address                    0x217
#define SSP1CON3_AHEN_position                   0x1
#define SSP1CON3_AHEN_size                       0x1
#define SSP1CON3_AHEN_value_mask                 0x2
#define SSP1CON3_AHEN_clear_mask                 0xFD

#define SSP1CON3_SBCDE                           0x2
#define SSP1CON3_SBCDE_address                   0x217
#define SSP1CON3_SBCDE_position                  0x2
#define SSP1CON3_SBCDE_size                      0x1
#define SSP1CON3_SBCDE_value_mask                0x4
#define SSP1CON3_SBCDE_clear_mask                0xFB

#define SSP1CON3_SDAHT                           0x3
#define SSP1CON3_SDAHT_address                   0x217
#define SSP1CON3_SDAHT_position                  0x3
#define SSP1CON3_SDAHT_size                      0x1
#define SSP1CON3_SDAHT_value_mask                0x8
#define SSP1CON3_SDAHT_clear_mask                0xF7

#define SSP1CON3_BOEN                            0x4
#define SSP1CON3_BOEN_address                    0x217
#define SSP1CON3_BOEN_position                   0x4
#define SSP1CON3_BOEN_size                       0x1
#define SSP1CON3_BOEN_value_mask                 0x10
#define SSP1CON3_BOEN_clear_mask                 0xEF

#define SSP1CON3_SCIE                            0x5
#define SSP1CON3_SCIE_address                    0x217
#define SSP1CON3_SCIE_position                   0x5
#define SSP1CON3_SCIE_size                       0x1
#define SSP1CON3_SCIE_value_mask                 0x20
#define SSP1CON3_SCIE_clear_mask                 0xDF

#define SSP1CON3_PCIE                            0x6
#define SSP1CON3_PCIE_address                    0x217
#define SSP1CON3_PCIE_position                   0x6
#define SSP1CON3_PCIE_size                       0x1
#define SSP1CON3_PCIE_value_mask                 0x40
#define SSP1CON3_PCIE_clear_mask                 0xBF

#define SSP1CON3_ACKTIM                          0x7
#define SSP1CON3_ACKTIM_address                  0x217
#define SSP1CON3_ACKTIM_position                 0x7
#define SSP1CON3_ACKTIM_size                     0x1
#define SSP1CON3_ACKTIM_value_mask               0x80
#define SSP1CON3_ACKTIM_clear_mask               0x7F


/*------------------------------#
| SSP2BUF                 0x219 |
#-------------------------------#
| SSP2BUF_SSPBUF                |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define SSP2BUF                                  0x0
#define SSP2BUF_address                          0x219
#define SSP2BUF_position                         0x0
#define SSP2BUF_size                             0x8
#define SSP2BUF_value_mask                       0xFF
#define SSP2BUF_clear_mask                       0x0

#define SSP2BUF_SSPBUF                           0x0
#define SSP2BUF_SSPBUF_address                   0x219
#define SSP2BUF_SSPBUF_position                  0x0
#define SSP2BUF_SSPBUF_size                      0x8
#define SSP2BUF_SSPBUF_value_mask                0xFF
#define SSP2BUF_SSPBUF_clear_mask                0x0


/*------------------------------#
| SSP2ADD                 0x21A |
#-------------------------------#
| SSP2ADD_SSPADD                |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define SSP2ADD                                  0x0
#define SSP2ADD_address                          0x21A
#define SSP2ADD_position                         0x0
#define SSP2ADD_size                             0x8
#define SSP2ADD_value_mask                       0xFF
#define SSP2ADD_clear_mask                       0x0

#define SSP2ADD_SSPADD                           0x0
#define SSP2ADD_SSPADD_address                   0x21A
#define SSP2ADD_SSPADD_position                  0x0
#define SSP2ADD_SSPADD_size                      0x8
#define SSP2ADD_SSPADD_value_mask                0xFF
#define SSP2ADD_SSPADD_clear_mask                0x0


/*------------------------------#
| SSP2MSK                 0x21B |
#-------------------------------#
| SSP2MSK_SSPMSK                |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define SSP2MSK                                  0x0
#define SSP2MSK_address                          0x21B
#define SSP2MSK_position                         0x0
#define SSP2MSK_size                             0x8
#define SSP2MSK_value_mask                       0xFF
#define SSP2MSK_clear_mask                       0x0

#define SSP2MSK_SSPMSK                           0x0
#define SSP2MSK_SSPMSK_address                   0x21B
#define SSP2MSK_SSPMSK_position                  0x0
#define SSP2MSK_SSPMSK_size                      0x8
#define SSP2MSK_SSPMSK_value_mask                0xFF
#define SSP2MSK_SSPMSK_clear_mask                0x0


/*------------------------------------------------------------------------------------------------------------------#
| SSP2STAT                                                                                                    0x21C |
#-------------------------------------------------------------------------------------------------------------------#
| SSP2STAT_SMP | SSP2STAT_CKE | SSP2STAT_D_nA | SSP2STAT_P | SSP2STAT_S | SSP2STAT_R_nW | SSP2STAT_UA | SSP2STAT_BF |
#-------------------------------------------------------------------------------------------------------------------#
| 7            | 6            | 5             | 4          | 3          | 2             | 1           | 0           |
#------------------------------------------------------------------------------------------------------------------*/

#define SSP2STAT                                 0x0
#define SSP2STAT_address                         0x21C
#define SSP2STAT_position                        0x0
#define SSP2STAT_size                            0x8
#define SSP2STAT_value_mask                      0xFF
#define SSP2STAT_clear_mask                      0x0

#define SSP2STAT_BF                              0x0
#define SSP2STAT_BF_address                      0x21C
#define SSP2STAT_BF_position                     0x0
#define SSP2STAT_BF_size                         0x1
#define SSP2STAT_BF_value_mask                   0x1
#define SSP2STAT_BF_clear_mask                   0xFE

#define SSP2STAT_UA                              0x1
#define SSP2STAT_UA_address                      0x21C
#define SSP2STAT_UA_position                     0x1
#define SSP2STAT_UA_size                         0x1
#define SSP2STAT_UA_value_mask                   0x2
#define SSP2STAT_UA_clear_mask                   0xFD

#define SSP2STAT_R_nW                            0x2
#define SSP2STAT_R_nW_address                    0x21C
#define SSP2STAT_R_nW_position                   0x2
#define SSP2STAT_R_nW_size                       0x1
#define SSP2STAT_R_nW_value_mask                 0x4
#define SSP2STAT_R_nW_clear_mask                 0xFB

#define SSP2STAT_S                               0x3
#define SSP2STAT_S_address                       0x21C
#define SSP2STAT_S_position                      0x3
#define SSP2STAT_S_size                          0x1
#define SSP2STAT_S_value_mask                    0x8
#define SSP2STAT_S_clear_mask                    0xF7

#define SSP2STAT_P                               0x4
#define SSP2STAT_P_address                       0x21C
#define SSP2STAT_P_position                      0x4
#define SSP2STAT_P_size                          0x1
#define SSP2STAT_P_value_mask                    0x10
#define SSP2STAT_P_clear_mask                    0xEF

#define SSP2STAT_D_nA                            0x5
#define SSP2STAT_D_nA_address                    0x21C
#define SSP2STAT_D_nA_position                   0x5
#define SSP2STAT_D_nA_size                       0x1
#define SSP2STAT_D_nA_value_mask                 0x20
#define SSP2STAT_D_nA_clear_mask                 0xDF

#define SSP2STAT_CKE                             0x6
#define SSP2STAT_CKE_address                     0x21C
#define SSP2STAT_CKE_position                    0x6
#define SSP2STAT_CKE_size                        0x1
#define SSP2STAT_CKE_value_mask                  0x40
#define SSP2STAT_CKE_clear_mask                  0xBF

#define SSP2STAT_SMP                             0x7
#define SSP2STAT_SMP_address                     0x21C
#define SSP2STAT_SMP_position                    0x7
#define SSP2STAT_SMP_size                        0x1
#define SSP2STAT_SMP_value_mask                  0x80
#define SSP2STAT_SMP_clear_mask                  0x7F


/*-----------------------------------------------------------------------------------------------------------------------------------#
| SSP2CON1                                                                                                                     0x21D |
#------------------------------------------------------------------------------------------------------------------------------------#
| SSP2CON1_WCOL | SSP2CON1_SSPOV | SSP2CON1_SSPEN | SSP2CON1_CKP | SSP2CON1_SSPM3 | SSP2CON1_SSPM2 | SSP2CON1_SSPM1 | SSP2CON1_SSPM0 |
#------------------------------------------------------------------------------------------------------------------------------------#
| 7             | 6              | 5              | 4            | 3              | 2              | 1              | 0              |
#-----------------------------------------------------------------------------------------------------------------------------------*/

#define SSP2CON1                                 0x0
#define SSP2CON1_address                         0x21D
#define SSP2CON1_position                        0x0
#define SSP2CON1_size                            0x8
#define SSP2CON1_value_mask                      0xFF
#define SSP2CON1_clear_mask                      0x0

#define SSP2CON1_SSPM0                           0x0
#define SSP2CON1_SSPM0_address                   0x21D
#define SSP2CON1_SSPM0_position                  0x0
#define SSP2CON1_SSPM0_size                      0x1
#define SSP2CON1_SSPM0_value_mask                0x1
#define SSP2CON1_SSPM0_clear_mask                0xFE

#define SSP2CON1_SSPM1                           0x1
#define SSP2CON1_SSPM1_address                   0x21D
#define SSP2CON1_SSPM1_position                  0x1
#define SSP2CON1_SSPM1_size                      0x1
#define SSP2CON1_SSPM1_value_mask                0x2
#define SSP2CON1_SSPM1_clear_mask                0xFD

#define SSP2CON1_SSPM2                           0x2
#define SSP2CON1_SSPM2_address                   0x21D
#define SSP2CON1_SSPM2_position                  0x2
#define SSP2CON1_SSPM2_size                      0x1
#define SSP2CON1_SSPM2_value_mask                0x4
#define SSP2CON1_SSPM2_clear_mask                0xFB

#define SSP2CON1_SSPM3                           0x3
#define SSP2CON1_SSPM3_address                   0x21D
#define SSP2CON1_SSPM3_position                  0x3
#define SSP2CON1_SSPM3_size                      0x1
#define SSP2CON1_SSPM3_value_mask                0x8
#define SSP2CON1_SSPM3_clear_mask                0xF7

#define SSP2CON1_CKP                             0x4
#define SSP2CON1_CKP_address                     0x21D
#define SSP2CON1_CKP_position                    0x4
#define SSP2CON1_CKP_size                        0x1
#define SSP2CON1_CKP_value_mask                  0x10
#define SSP2CON1_CKP_clear_mask                  0xEF

#define SSP2CON1_SSPEN                           0x5
#define SSP2CON1_SSPEN_address                   0x21D
#define SSP2CON1_SSPEN_position                  0x5
#define SSP2CON1_SSPEN_size                      0x1
#define SSP2CON1_SSPEN_value_mask                0x20
#define SSP2CON1_SSPEN_clear_mask                0xDF

#define SSP2CON1_SSPOV                           0x6
#define SSP2CON1_SSPOV_address                   0x21D
#define SSP2CON1_SSPOV_position                  0x6
#define SSP2CON1_SSPOV_size                      0x1
#define SSP2CON1_SSPOV_value_mask                0x40
#define SSP2CON1_SSPOV_clear_mask                0xBF

#define SSP2CON1_WCOL                            0x7
#define SSP2CON1_WCOL_address                    0x21D
#define SSP2CON1_WCOL_position                   0x7
#define SSP2CON1_WCOL_size                       0x1
#define SSP2CON1_WCOL_value_mask                 0x80
#define SSP2CON1_WCOL_clear_mask                 0x7F


/*---------------------------------------------------------------------------------------------------------------------------------#
| SSP2CON2                                                                                                                   0x21E |
#----------------------------------------------------------------------------------------------------------------------------------#
| SSP2CON2_GCEN | SSP2CON2_ACKSTAT | SSP2CON2_ACKDT | SSP2CON2_ACKEN | SSP2CON2_RCEN | SSP2CON2_PEN | SSP2CON2_RSEN | SSP2CON2_SEN |
#----------------------------------------------------------------------------------------------------------------------------------#
| 7             | 6                | 5              | 4              | 3             | 2            | 1             | 0            |
#---------------------------------------------------------------------------------------------------------------------------------*/

#define SSP2CON2                                 0x0
#define SSP2CON2_address                         0x21E
#define SSP2CON2_position                        0x0
#define SSP2CON2_size                            0x8
#define SSP2CON2_value_mask                      0xFF
#define SSP2CON2_clear_mask                      0x0

#define SSP2CON2_SEN                             0x0
#define SSP2CON2_SEN_address                     0x21E
#define SSP2CON2_SEN_position                    0x0
#define SSP2CON2_SEN_size                        0x1
#define SSP2CON2_SEN_value_mask                  0x1
#define SSP2CON2_SEN_clear_mask                  0xFE

#define SSP2CON2_RSEN                            0x1
#define SSP2CON2_RSEN_address                    0x21E
#define SSP2CON2_RSEN_position                   0x1
#define SSP2CON2_RSEN_size                       0x1
#define SSP2CON2_RSEN_value_mask                 0x2
#define SSP2CON2_RSEN_clear_mask                 0xFD

#define SSP2CON2_PEN                             0x2
#define SSP2CON2_PEN_address                     0x21E
#define SSP2CON2_PEN_position                    0x2
#define SSP2CON2_PEN_size                        0x1
#define SSP2CON2_PEN_value_mask                  0x4
#define SSP2CON2_PEN_clear_mask                  0xFB

#define SSP2CON2_RCEN                            0x3
#define SSP2CON2_RCEN_address                    0x21E
#define SSP2CON2_RCEN_position                   0x3
#define SSP2CON2_RCEN_size                       0x1
#define SSP2CON2_RCEN_value_mask                 0x8
#define SSP2CON2_RCEN_clear_mask                 0xF7

#define SSP2CON2_ACKEN                           0x4
#define SSP2CON2_ACKEN_address                   0x21E
#define SSP2CON2_ACKEN_position                  0x4
#define SSP2CON2_ACKEN_size                      0x1
#define SSP2CON2_ACKEN_value_mask                0x10
#define SSP2CON2_ACKEN_clear_mask                0xEF

#define SSP2CON2_ACKDT                           0x5
#define SSP2CON2_ACKDT_address                   0x21E
#define SSP2CON2_ACKDT_position                  0x5
#define SSP2CON2_ACKDT_size                      0x1
#define SSP2CON2_ACKDT_value_mask                0x20
#define SSP2CON2_ACKDT_clear_mask                0xDF

#define SSP2CON2_ACKSTAT                         0x6
#define SSP2CON2_ACKSTAT_address                 0x21E
#define SSP2CON2_ACKSTAT_position                0x6
#define SSP2CON2_ACKSTAT_size                    0x1
#define SSP2CON2_ACKSTAT_value_mask              0x40
#define SSP2CON2_ACKSTAT_clear_mask              0xBF

#define SSP2CON2_GCEN                            0x7
#define SSP2CON2_GCEN_address                    0x21E
#define SSP2CON2_GCEN_position                   0x7
#define SSP2CON2_GCEN_size                       0x1
#define SSP2CON2_GCEN_value_mask                 0x80
#define SSP2CON2_GCEN_clear_mask                 0x7F


/*----------------------------------------------------------------------------------------------------------------------------------#
| SSP2CON3                                                                                                                    0x21F |
#-----------------------------------------------------------------------------------------------------------------------------------#
| SSP2CON3_ACKTIM | SSP2CON3_PCIE | SSP2CON3_SCIE | SSP2CON3_BOEN | SSP2CON3_SDAHT | SSP2CON3_SBCDE | SSP2CON3_AHEN | SSP2CON3_DHEN |
#-----------------------------------------------------------------------------------------------------------------------------------#
| 7               | 6             | 5             | 4             | 3              | 2              | 1             | 0             |
#----------------------------------------------------------------------------------------------------------------------------------*/

#define SSP2CON3                                 0x0
#define SSP2CON3_address                         0x21F
#define SSP2CON3_position                        0x0
#define SSP2CON3_size                            0x8
#define SSP2CON3_value_mask                      0xFF
#define SSP2CON3_clear_mask                      0x0

#define SSP2CON3_DHEN                            0x0
#define SSP2CON3_DHEN_address                    0x21F
#define SSP2CON3_DHEN_position                   0x0
#define SSP2CON3_DHEN_size                       0x1
#define SSP2CON3_DHEN_value_mask                 0x1
#define SSP2CON3_DHEN_clear_mask                 0xFE

#define SSP2CON3_AHEN                            0x1
#define SSP2CON3_AHEN_address                    0x21F
#define SSP2CON3_AHEN_position                   0x1
#define SSP2CON3_AHEN_size                       0x1
#define SSP2CON3_AHEN_value_mask                 0x2
#define SSP2CON3_AHEN_clear_mask                 0xFD

#define SSP2CON3_SBCDE                           0x2
#define SSP2CON3_SBCDE_address                   0x21F
#define SSP2CON3_SBCDE_position                  0x2
#define SSP2CON3_SBCDE_size                      0x1
#define SSP2CON3_SBCDE_value_mask                0x4
#define SSP2CON3_SBCDE_clear_mask                0xFB

#define SSP2CON3_SDAHT                           0x3
#define SSP2CON3_SDAHT_address                   0x21F
#define SSP2CON3_SDAHT_position                  0x3
#define SSP2CON3_SDAHT_size                      0x1
#define SSP2CON3_SDAHT_value_mask                0x8
#define SSP2CON3_SDAHT_clear_mask                0xF7

#define SSP2CON3_BOEN                            0x4
#define SSP2CON3_BOEN_address                    0x21F
#define SSP2CON3_BOEN_position                   0x4
#define SSP2CON3_BOEN_size                       0x1
#define SSP2CON3_BOEN_value_mask                 0x10
#define SSP2CON3_BOEN_clear_mask                 0xEF

#define SSP2CON3_SCIE                            0x5
#define SSP2CON3_SCIE_address                    0x21F
#define SSP2CON3_SCIE_position                   0x5
#define SSP2CON3_SCIE_size                       0x1
#define SSP2CON3_SCIE_value_mask                 0x20
#define SSP2CON3_SCIE_clear_mask                 0xDF

#define SSP2CON3_PCIE                            0x6
#define SSP2CON3_PCIE_address                    0x21F
#define SSP2CON3_PCIE_position                   0x6
#define SSP2CON3_PCIE_size                       0x1
#define SSP2CON3_PCIE_value_mask                 0x40
#define SSP2CON3_PCIE_clear_mask                 0xBF

#define SSP2CON3_ACKTIM                          0x7
#define SSP2CON3_ACKTIM_address                  0x21F
#define SSP2CON3_ACKTIM_position                 0x7
#define SSP2CON3_ACKTIM_size                     0x1
#define SSP2CON3_ACKTIM_value_mask               0x80
#define SSP2CON3_ACKTIM_clear_mask               0x7F


/*-------------------------------------------------------------------#
| PORTF                                                        0x28C |
#--------------------------------------------------------------------#
| C2IN3N | CPS11 | C2IN1N | AN9 | AN8 | PORTF_C1OUT | SEG19 | C1IN0N |
#--------------------------------------------------------------------#
| 7      | 6     | 5      | 4   | 3   | 2           | 1     | 0      |
#-------------------------------------------------------------------*/

#define PORTF                                    0x0
#define PORTF_address                            0x28C
#define PORTF_position                           0x0
#define PORTF_size                               0x8
#define PORTF_value_mask                         0xFF
#define PORTF_clear_mask                         0x0

#define CPS16                                    0x0
#define CPS16_address                            0x28C
#define CPS16_position                           0x0
#define CPS16_size                               0x1
#define CPS16_value_mask                         0x1
#define CPS16_clear_mask                         0xFE

#define RF0                                      0x0
#define RF0_address                              0x28C
#define RF0_position                             0x0
#define RF0_size                                 0x1
#define RF0_value_mask                           0x1
#define RF0_clear_mask                           0xFE

#define SEG41                                    0x0
#define SEG41_address                            0x28C
#define SEG41_position                           0x0
#define SEG41_size                               0x1
#define SEG41_value_mask                         0x1
#define SEG41_clear_mask                         0xFE

#define C2IN0N                                   0x0
#define C2IN0N_address                           0x28C
#define C2IN0N_position                          0x0
#define C2IN0N_size                              0x1
#define C2IN0N_value_mask                        0x1
#define C2IN0N_clear_mask                        0xFE

#define C1IN0N                                   0x0
#define C1IN0N_address                           0x28C
#define C1IN0N_position                          0x0
#define C1IN0N_size                              0x1
#define C1IN0N_value_mask                        0x1
#define C1IN0N_clear_mask                        0xFE

#define AN16                                     0x0
#define AN16_address                             0x28C
#define AN16_position                            0x0
#define AN16_size                                0x1
#define AN16_value_mask                          0x1
#define AN16_clear_mask                          0xFE

#define SEG19                                    0x1
#define SEG19_address                            0x28C
#define SEG19_position                           0x1
#define SEG19_size                               0x1
#define SEG19_value_mask                         0x2
#define SEG19_clear_mask                         0xFD

#define AN6                                      0x1
#define AN6_address                              0x28C
#define AN6_position                             0x1
#define AN6_size                                 0x1
#define AN6_value_mask                           0x2
#define AN6_clear_mask                           0xFD

#define PORTF_C2OUT                              0x1
#define PORTF_C2OUT_address                      0x28C
#define PORTF_C2OUT_position                     0x1
#define PORTF_C2OUT_size                         0x1
#define PORTF_C2OUT_value_mask                   0x2
#define PORTF_C2OUT_clear_mask                   0xFD

#define RF1                                      0x1
#define RF1_address                              0x28C
#define RF1_position                             0x1
#define RF1_size                                 0x1
#define RF1_value_mask                           0x2
#define RF1_clear_mask                           0xFD

#define SRNQ                                     0x1
#define SRNQ_address                             0x28C
#define SRNQ_position                            0x1
#define SRNQ_size                                0x1
#define SRNQ_value_mask                          0x2
#define SRNQ_clear_mask                          0xFD

#define CPS6                                     0x1
#define CPS6_address                             0x28C
#define CPS6_position                            0x1
#define CPS6_size                                0x1
#define CPS6_value_mask                          0x2
#define CPS6_clear_mask                          0xFD

#define AN7                                      0x2
#define AN7_address                              0x28C
#define AN7_position                             0x2
#define AN7_size                                 0x1
#define AN7_value_mask                           0x4
#define AN7_clear_mask                           0xFB

#define RF2                                      0x2
#define RF2_address                              0x28C
#define RF2_position                             0x2
#define RF2_size                                 0x1
#define RF2_value_mask                           0x4
#define RF2_clear_mask                           0xFB

#define PORTF_C1OUT                              0x2
#define PORTF_C1OUT_address                      0x28C
#define PORTF_C1OUT_position                     0x2
#define PORTF_C1OUT_size                         0x1
#define PORTF_C1OUT_value_mask                   0x4
#define PORTF_C1OUT_clear_mask                   0xFB

#define SEG20                                    0x2
#define SEG20_address                            0x28C
#define SEG20_position                           0x2
#define SEG20_size                               0x1
#define SEG20_value_mask                         0x4
#define SEG20_clear_mask                         0xFB

#define SRQ                                      0x2
#define SRQ_address                              0x28C
#define SRQ_position                             0x2
#define SRQ_size                                 0x1
#define SRQ_value_mask                           0x4
#define SRQ_clear_mask                           0xFB

#define CPS7                                     0x2
#define CPS7_address                             0x28C
#define CPS7_position                            0x2
#define CPS7_size                                0x1
#define CPS7_value_mask                          0x4
#define CPS7_clear_mask                          0xFB

#define AN8                                      0x3
#define AN8_address                              0x28C
#define AN8_position                             0x3
#define AN8_size                                 0x1
#define AN8_value_mask                           0x8
#define AN8_clear_mask                           0xF7

#define RF3                                      0x3
#define RF3_address                              0x28C
#define RF3_position                             0x3
#define RF3_size                                 0x1
#define RF3_value_mask                           0x8
#define RF3_clear_mask                           0xF7

#define SEG21                                    0x3
#define SEG21_address                            0x28C
#define SEG21_position                           0x3
#define SEG21_size                               0x1
#define SEG21_value_mask                         0x8
#define SEG21_clear_mask                         0xF7

#define C3IN2N                                   0x3
#define C3IN2N_address                           0x28C
#define C3IN2N_position                          0x3
#define C3IN2N_size                              0x1
#define C3IN2N_value_mask                        0x8
#define C3IN2N_clear_mask                        0xF7

#define C2IN2N                                   0x3
#define C2IN2N_address                           0x28C
#define C2IN2N_position                          0x3
#define C2IN2N_size                              0x1
#define C2IN2N_value_mask                        0x8
#define C2IN2N_clear_mask                        0xF7

#define C1IN2N                                   0x3
#define C1IN2N_address                           0x28C
#define C1IN2N_position                          0x3
#define C1IN2N_size                              0x1
#define C1IN2N_value_mask                        0x8
#define C1IN2N_clear_mask                        0xF7

#define CPS8                                     0x3
#define CPS8_address                             0x28C
#define CPS8_position                            0x3
#define CPS8_size                                0x1
#define CPS8_value_mask                          0x8
#define CPS8_clear_mask                          0xF7

#define AN9                                      0x4
#define AN9_address                              0x28C
#define AN9_position                             0x4
#define AN9_size                                 0x1
#define AN9_value_mask                           0x10
#define AN9_clear_mask                           0xEF

#define RF4                                      0x4
#define RF4_address                              0x28C
#define RF4_position                             0x4
#define RF4_size                                 0x1
#define RF4_value_mask                           0x10
#define RF4_clear_mask                           0xEF

#define SEG22                                    0x4
#define SEG22_address                            0x28C
#define SEG22_position                           0x4
#define SEG22_size                               0x1
#define SEG22_value_mask                         0x10
#define SEG22_clear_mask                         0xEF

#define C2INP                                    0x4
#define C2INP_address                            0x28C
#define C2INP_position                           0x4
#define C2INP_size                               0x1
#define C2INP_value_mask                         0x10
#define C2INP_clear_mask                         0xEF

#define CPS9                                     0x4
#define CPS9_address                             0x28C
#define CPS9_position                            0x4
#define CPS9_size                                0x1
#define CPS9_value_mask                          0x10
#define CPS9_clear_mask                          0xEF

#define C2IN1N                                   0x5
#define C2IN1N_address                           0x28C
#define C2IN1N_position                          0x5
#define C2IN1N_size                              0x1
#define C2IN1N_value_mask                        0x20
#define C2IN1N_clear_mask                        0xDF

#define CPS10                                    0x5
#define CPS10_address                            0x28C
#define CPS10_position                           0x5
#define CPS10_size                               0x1
#define CPS10_value_mask                         0x20
#define CPS10_clear_mask                         0xDF

#define RF5                                      0x5
#define RF5_address                              0x28C
#define RF5_position                             0x5
#define RF5_size                                 0x1
#define RF5_value_mask                           0x20
#define RF5_clear_mask                           0xDF

#define C1IN1N                                   0x5
#define C1IN1N_address                           0x28C
#define C1IN1N_position                          0x5
#define C1IN1N_size                              0x1
#define C1IN1N_value_mask                        0x20
#define C1IN1N_clear_mask                        0xDF

#define SEG23                                    0x5
#define SEG23_address                            0x28C
#define SEG23_position                           0x5
#define SEG23_size                               0x1
#define SEG23_value_mask                         0x20
#define SEG23_clear_mask                         0xDF

#define DACOUT                                   0x5
#define DACOUT_address                           0x28C
#define DACOUT_position                          0x5
#define DACOUT_size                              0x1
#define DACOUT_value_mask                        0x20
#define DACOUT_clear_mask                        0xDF

#define AN10                                     0x5
#define AN10_address                             0x28C
#define AN10_position                            0x5
#define AN10_size                                0x1
#define AN10_value_mask                          0x20
#define AN10_clear_mask                          0xDF

#define C1INP                                    0x6
#define C1INP_address                            0x28C
#define C1INP_position                           0x6
#define C1INP_size                               0x1
#define C1INP_value_mask                         0x40
#define C1INP_clear_mask                         0xBF

#define CPS11                                    0x6
#define CPS11_address                            0x28C
#define CPS11_position                           0x6
#define CPS11_size                               0x1
#define CPS11_value_mask                         0x40
#define CPS11_clear_mask                         0xBF

#define RF6                                      0x6
#define RF6_address                              0x28C
#define RF6_position                             0x6
#define RF6_size                                 0x1
#define RF6_value_mask                           0x40
#define RF6_clear_mask                           0xBF

#define SEG24                                    0x6
#define SEG24_address                            0x28C
#define SEG24_position                           0x6
#define SEG24_size                               0x1
#define SEG24_value_mask                         0x40
#define SEG24_clear_mask                         0xBF

#define AN11                                     0x6
#define AN11_address                             0x28C
#define AN11_position                            0x6
#define AN11_size                                0x1
#define AN11_value_mask                          0x40
#define AN11_clear_mask                          0xBF

#define C2IN3N                                   0x7
#define C2IN3N_address                           0x28C
#define C2IN3N_position                          0x7
#define C2IN3N_size                              0x1
#define C2IN3N_value_mask                        0x80
#define C2IN3N_clear_mask                        0x7F

#define C3IN3N                                   0x7
#define C3IN3N_address                           0x28C
#define C3IN3N_position                          0x7
#define C3IN3N_size                              0x1
#define C3IN3N_value_mask                        0x80
#define C3IN3N_clear_mask                        0x7F

#define AN5                                      0x7
#define AN5_address                              0x28C
#define AN5_position                             0x7
#define AN5_size                                 0x1
#define AN5_value_mask                           0x80
#define AN5_clear_mask                           0x7F

#define C1IN3N                                   0x7
#define C1IN3N_address                           0x28C
#define C1IN3N_position                          0x7
#define C1IN3N_size                              0x1
#define C1IN3N_value_mask                        0x80
#define C1IN3N_clear_mask                        0x7F

#define RF7                                      0x7
#define RF7_address                              0x28C
#define RF7_position                             0x7
#define RF7_size                                 0x1
#define RF7_value_mask                           0x80
#define RF7_clear_mask                           0x7F

#define SEG25                                    0x7
#define SEG25_address                            0x28C
#define SEG25_position                           0x7
#define SEG25_size                               0x1
#define SEG25_value_mask                         0x80
#define SEG25_clear_mask                         0x7F

#define CPS5                                     0x7
#define CPS5_address                             0x28C
#define CPS5_position                            0x7
#define CPS5_size                                0x1
#define CPS5_value_mask                          0x80
#define CPS5_clear_mask                          0x7F


/*---------------------------------------------------#
| PORTG                                        0x28D |
#----------------------------------------------------#
| - | - | RG5 | C3IN1N | CCP4 | CPS14 | CPS15 | CCP3 |
#----------------------------------------------------#
| 7 | 6 | 5   | 4      | 3    | 2     | 1     | 0    |
#---------------------------------------------------*/

#define PORTG                                    0x0
#define PORTG_address                            0x28D
#define PORTG_position                           0x0
#define PORTG_size                               0x8
#define PORTG_value_mask                         0xFF
#define PORTG_clear_mask                         0x0

#define CCP3                                     0x0
#define CCP3_address                             0x28D
#define CCP3_position                            0x0
#define CCP3_size                                0x1
#define CCP3_value_mask                          0x1
#define CCP3_clear_mask                          0xFE

#define SEG42                                    0x0
#define SEG42_address                            0x28D
#define SEG42_position                           0x0
#define SEG42_size                               0x1
#define SEG42_value_mask                         0x1
#define SEG42_clear_mask                         0xFE

#define P3A                                      0x0
#define P3A_address                              0x28D
#define P3A_position                             0x0
#define P3A_size                                 0x1
#define P3A_value_mask                           0x1
#define P3A_clear_mask                           0xFE

#define RG0                                      0x0
#define RG0_address                              0x28D
#define RG0_position                             0x0
#define RG0_size                                 0x1
#define RG0_value_mask                           0x1
#define RG0_clear_mask                           0xFE

#define CPS15                                    0x1
#define CPS15_address                            0x28D
#define CPS15_position                           0x1
#define CPS15_size                               0x1
#define CPS15_value_mask                         0x2
#define CPS15_clear_mask                         0xFD

#define SEG43                                    0x1
#define SEG43_address                            0x28D
#define SEG43_position                           0x1
#define SEG43_size                               0x1
#define SEG43_value_mask                         0x2
#define SEG43_clear_mask                         0xFD

#define AN15                                     0x1
#define AN15_address                             0x28D
#define AN15_position                            0x1
#define AN15_size                                0x1
#define AN15_value_mask                          0x2
#define AN15_clear_mask                          0xFD

#define PORTG_C3OUT                              0x1
#define PORTG_C3OUT_address                      0x28D
#define PORTG_C3OUT_position                     0x1
#define PORTG_C3OUT_size                         0x1
#define PORTG_C3OUT_value_mask                   0x2
#define PORTG_C3OUT_clear_mask                   0xFD

#define TX2                                      0x1
#define TX2_address                              0x28D
#define TX2_position                             0x1
#define TX2_size                                 0x1
#define TX2_value_mask                           0x2
#define TX2_clear_mask                           0xFD

#define RG1                                      0x1
#define RG1_address                              0x28D
#define RG1_position                             0x1
#define RG1_size                                 0x1
#define RG1_value_mask                           0x2
#define RG1_clear_mask                           0xFD

#define CK2                                      0x1
#define CK2_address                              0x28D
#define CK2_position                             0x1
#define CK2_size                                 0x1
#define CK2_value_mask                           0x2
#define CK2_clear_mask                           0xFD

#define CPS14                                    0x2
#define CPS14_address                            0x28D
#define CPS14_position                           0x2
#define CPS14_size                               0x1
#define CPS14_value_mask                         0x4
#define CPS14_clear_mask                         0xFB

#define C3INP                                    0x2
#define C3INP_address                            0x28D
#define C3INP_position                           0x2
#define C3INP_size                               0x1
#define C3INP_value_mask                         0x4
#define C3INP_clear_mask                         0xFB

#define SEG44                                    0x2
#define SEG44_address                            0x28D
#define SEG44_position                           0x2
#define SEG44_size                               0x1
#define SEG44_value_mask                         0x4
#define SEG44_clear_mask                         0xFB

#define RX2                                      0x2
#define RX2_address                              0x28D
#define RX2_position                             0x2
#define RX2_size                                 0x1
#define RX2_value_mask                           0x4
#define RX2_clear_mask                           0xFB

#define RG2                                      0x2
#define RG2_address                              0x28D
#define RG2_position                             0x2
#define RG2_size                                 0x1
#define RG2_value_mask                           0x4
#define RG2_clear_mask                           0xFB

#define AN14                                     0x2
#define AN14_address                             0x28D
#define AN14_position                            0x2
#define AN14_size                                0x1
#define AN14_value_mask                          0x4
#define AN14_clear_mask                          0xFB

#define DT2                                      0x2
#define DT2_address                              0x28D
#define DT2_position                             0x2
#define DT2_size                                 0x1
#define DT2_value_mask                           0x4
#define DT2_clear_mask                           0xFB

#define CPS13                                    0x3
#define CPS13_address                            0x28D
#define CPS13_position                           0x3
#define CPS13_size                               0x1
#define CPS13_value_mask                         0x8
#define CPS13_clear_mask                         0xF7

#define CCP4                                     0x3
#define CCP4_address                             0x28D
#define CCP4_position                            0x3
#define CCP4_size                                0x1
#define CCP4_value_mask                          0x8
#define CCP4_clear_mask                          0xF7

#define SEG45                                    0x3
#define SEG45_address                            0x28D
#define SEG45_position                           0x3
#define SEG45_size                               0x1
#define SEG45_value_mask                         0x8
#define SEG45_clear_mask                         0xF7

#define C3IN0N                                   0x3
#define C3IN0N_address                           0x28D
#define C3IN0N_position                          0x3
#define C3IN0N_size                              0x1
#define C3IN0N_value_mask                        0x8
#define C3IN0N_clear_mask                        0xF7

#define P3D                                      0x3
#define P3D_address                              0x28D
#define P3D_position                             0x3
#define P3D_size                                 0x1
#define P3D_value_mask                           0x8
#define P3D_clear_mask                           0xF7

#define RG3                                      0x3
#define RG3_address                              0x28D
#define RG3_position                             0x3
#define RG3_size                                 0x1
#define RG3_value_mask                           0x8
#define RG3_clear_mask                           0xF7

#define AN13                                     0x3
#define AN13_address                             0x28D
#define AN13_position                            0x3
#define AN13_size                                0x1
#define AN13_value_mask                          0x8
#define AN13_clear_mask                          0xF7

#define C3IN1N                                   0x4
#define C3IN1N_address                           0x28D
#define C3IN1N_position                          0x4
#define C3IN1N_size                              0x1
#define C3IN1N_value_mask                        0x10
#define C3IN1N_clear_mask                        0xEF

#define CPS12                                    0x4
#define CPS12_address                            0x28D
#define CPS12_position                           0x4
#define CPS12_size                               0x1
#define CPS12_value_mask                         0x10
#define CPS12_clear_mask                         0xEF

#define CCP5                                     0x4
#define CCP5_address                             0x28D
#define CCP5_position                            0x4
#define CCP5_size                                0x1
#define CCP5_value_mask                          0x10
#define CCP5_clear_mask                          0xEF

#define SEG26                                    0x4
#define SEG26_address                            0x28D
#define SEG26_position                           0x4
#define SEG26_size                               0x1
#define SEG26_value_mask                         0x10
#define SEG26_clear_mask                         0xEF

#define P1D                                      0x4
#define P1D_address                              0x28D
#define P1D_position                             0x4
#define P1D_size                                 0x1
#define P1D_value_mask                           0x10
#define P1D_clear_mask                           0xEF

#define RG4                                      0x4
#define RG4_address                              0x28D
#define RG4_position                             0x4
#define RG4_size                                 0x1
#define RG4_value_mask                           0x10
#define RG4_clear_mask                           0xEF

#define AN12                                     0x4
#define AN12_address                             0x28D
#define AN12_position                            0x4
#define AN12_size                                0x1
#define AN12_value_mask                          0x10
#define AN12_clear_mask                          0xEF

#define RG5                                      0x5
#define RG5_address                              0x28D
#define RG5_position                             0x5
#define RG5_size                                 0x1
#define RG5_value_mask                           0x20
#define RG5_clear_mask                           0xDF

#define nMCLR                                    0x5
#define nMCLR_address                            0x28D
#define nMCLR_position                           0x5
#define nMCLR_size                               0x1
#define nMCLR_value_mask                         0x20
#define nMCLR_clear_mask                         0xDF


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


/*----------------------------------------------------------------#
| CCP1CON                                                   0x293 |
#-----------------------------------------------------------------#
| P1M1 | P1M0 | DC1B1 | DC1B0 | CCP1M3 | CCP1M2 | CCP1M1 | CCP1M0 |
#-----------------------------------------------------------------#
| 7    | 6    | 5     | 4     | 3      | 2      | 1      | 0      |
#----------------------------------------------------------------*/

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

#define DC1B1                                    0x5
#define DC1B1_address                            0x293
#define DC1B1_position                           0x5
#define DC1B1_size                               0x1
#define DC1B1_value_mask                         0x20
#define DC1B1_clear_mask                         0xDF

#define P1M                                      0x6
#define P1M_address                              0x293
#define P1M_position                             0x6
#define P1M_size                                 0x2
#define P1M_value_mask                           0xC0
#define P1M_clear_mask                           0x3F

#define P1M0                                     0x6
#define P1M0_address                             0x293
#define P1M0_position                            0x6
#define P1M0_size                                0x1
#define P1M0_value_mask                          0x40
#define P1M0_clear_mask                          0xBF

#define P1M1                                     0x7
#define P1M1_address                             0x293
#define P1M1_position                            0x7
#define P1M1_size                                0x1
#define P1M1_value_mask                          0x80
#define P1M1_clear_mask                          0x7F


/*---------------------------------------------------------------#
| PWM1CON                                                  0x294 |
#----------------------------------------------------------------#
| P1RSEN | P1DC6 | P1DC5 | P1DC4 | P1DC3 | P1DC2 | P1DC1 | P1DC0 |
#----------------------------------------------------------------#
| 7      | 6     | 5     | 4     | 3     | 2     | 1     | 0     |
#---------------------------------------------------------------*/

#define PWM1CON                                  0x0
#define PWM1CON_address                          0x294
#define PWM1CON_position                         0x0
#define PWM1CON_size                             0x8
#define PWM1CON_value_mask                       0xFF
#define PWM1CON_clear_mask                       0x0

#define P1DC0                                    0x0
#define P1DC0_address                            0x294
#define P1DC0_position                           0x0
#define P1DC0_size                               0x1
#define P1DC0_value_mask                         0x1
#define P1DC0_clear_mask                         0xFE

#define P1DC1                                    0x1
#define P1DC1_address                            0x294
#define P1DC1_position                           0x1
#define P1DC1_size                               0x1
#define P1DC1_value_mask                         0x2
#define P1DC1_clear_mask                         0xFD

#define P1DC2                                    0x2
#define P1DC2_address                            0x294
#define P1DC2_position                           0x2
#define P1DC2_size                               0x1
#define P1DC2_value_mask                         0x4
#define P1DC2_clear_mask                         0xFB

#define P1DC3                                    0x3
#define P1DC3_address                            0x294
#define P1DC3_position                           0x3
#define P1DC3_size                               0x1
#define P1DC3_value_mask                         0x8
#define P1DC3_clear_mask                         0xF7

#define P1DC4                                    0x4
#define P1DC4_address                            0x294
#define P1DC4_position                           0x4
#define P1DC4_size                               0x1
#define P1DC4_value_mask                         0x10
#define P1DC4_clear_mask                         0xEF

#define P1DC5                                    0x5
#define P1DC5_address                            0x294
#define P1DC5_position                           0x5
#define P1DC5_size                               0x1
#define P1DC5_value_mask                         0x20
#define P1DC5_clear_mask                         0xDF

#define P1DC6                                    0x6
#define P1DC6_address                            0x294
#define P1DC6_position                           0x6
#define P1DC6_size                               0x1
#define P1DC6_value_mask                         0x40
#define P1DC6_clear_mask                         0xBF

#define P1RSEN                                   0x7
#define P1RSEN_address                           0x294
#define P1RSEN_position                          0x7
#define P1RSEN_size                              0x1
#define P1RSEN_value_mask                        0x80
#define P1RSEN_clear_mask                        0x7F


/*------------------------------------------------------------------------------#
| CCP1AS                                                                  0x295 |
#-------------------------------------------------------------------------------#
| CCP1ASE | CCP1AS2 | CCP1AS1 | CCP1AS0 | PSS1AC1 | PSS1AC0 | PSS1BD1 | PSS1BD0 |
#-------------------------------------------------------------------------------#
| 7       | 6       | 5       | 4       | 3       | 2       | 1       | 0       |
#------------------------------------------------------------------------------*/

#define CCP1AS                                   0x0
#define CCP1AS_address                           0x295
#define CCP1AS_position                          0x0
#define CCP1AS_size                              0x8
#define CCP1AS_value_mask                        0xFF
#define CCP1AS_clear_mask                        0x0

#define PSS1BD0                                  0x0
#define PSS1BD0_address                          0x295
#define PSS1BD0_position                         0x0
#define PSS1BD0_size                             0x1
#define PSS1BD0_value_mask                       0x1
#define PSS1BD0_clear_mask                       0xFE

#define PSS1BD1                                  0x1
#define PSS1BD1_address                          0x295
#define PSS1BD1_position                         0x1
#define PSS1BD1_size                             0x1
#define PSS1BD1_value_mask                       0x2
#define PSS1BD1_clear_mask                       0xFD

#define PSS1AC0                                  0x2
#define PSS1AC0_address                          0x295
#define PSS1AC0_position                         0x2
#define PSS1AC0_size                             0x1
#define PSS1AC0_value_mask                       0x4
#define PSS1AC0_clear_mask                       0xFB

#define PSS1AC1                                  0x3
#define PSS1AC1_address                          0x295
#define PSS1AC1_position                         0x3
#define PSS1AC1_size                             0x1
#define PSS1AC1_value_mask                       0x8
#define PSS1AC1_clear_mask                       0xF7

#define CCP1AS0                                  0x4
#define CCP1AS0_address                          0x295
#define CCP1AS0_position                         0x4
#define CCP1AS0_size                             0x1
#define CCP1AS0_value_mask                       0x10
#define CCP1AS0_clear_mask                       0xEF

#define CCP1AS1                                  0x5
#define CCP1AS1_address                          0x295
#define CCP1AS1_position                         0x5
#define CCP1AS1_size                             0x1
#define CCP1AS1_value_mask                       0x20
#define CCP1AS1_clear_mask                       0xDF

#define CCP1AS2                                  0x6
#define CCP1AS2_address                          0x295
#define CCP1AS2_position                         0x6
#define CCP1AS2_size                             0x1
#define CCP1AS2_value_mask                       0x40
#define CCP1AS2_clear_mask                       0xBF

#define CCP1ASE                                  0x7
#define CCP1ASE_address                          0x295
#define CCP1ASE_position                         0x7
#define CCP1ASE_size                             0x1
#define CCP1ASE_value_mask                       0x80
#define CCP1ASE_clear_mask                       0x7F


/*-----------------------------------------------------#
| PSTR1CON                                       0x296 |
#------------------------------------------------------#
| - | - | - | STR1SYNC | STR1D | STR1C | STR1B | STR1A |
#------------------------------------------------------#
| 7 | 6 | 5 | 4        | 3     | 2     | 1     | 0     |
#-----------------------------------------------------*/

#define PSTR1CON                                 0x0
#define PSTR1CON_address                         0x296
#define PSTR1CON_position                        0x0
#define PSTR1CON_size                            0x8
#define PSTR1CON_value_mask                      0xFF
#define PSTR1CON_clear_mask                      0x0

#define STR1A                                    0x0
#define STR1A_address                            0x296
#define STR1A_position                           0x0
#define STR1A_size                               0x1
#define STR1A_value_mask                         0x1
#define STR1A_clear_mask                         0xFE

#define STR1B                                    0x1
#define STR1B_address                            0x296
#define STR1B_position                           0x1
#define STR1B_size                               0x1
#define STR1B_value_mask                         0x2
#define STR1B_clear_mask                         0xFD

#define STR1C                                    0x2
#define STR1C_address                            0x296
#define STR1C_position                           0x2
#define STR1C_size                               0x1
#define STR1C_value_mask                         0x4
#define STR1C_clear_mask                         0xFB

#define STR1D                                    0x3
#define STR1D_address                            0x296
#define STR1D_position                           0x3
#define STR1D_size                               0x1
#define STR1D_value_mask                         0x8
#define STR1D_clear_mask                         0xF7

#define STR1SYNC                                 0x4
#define STR1SYNC_address                         0x296
#define STR1SYNC_position                        0x4
#define STR1SYNC_size                            0x1
#define STR1SYNC_value_mask                      0x10
#define STR1SYNC_clear_mask                      0xEF


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


/*----------------------------------------------------------------#
| CCP2CON                                                   0x29A |
#-----------------------------------------------------------------#
| P2M1 | P2M0 | DC2B1 | DC2B0 | CCP2M3 | CCP2M2 | CCP2M1 | CCP2M0 |
#-----------------------------------------------------------------#
| 7    | 6    | 5     | 4     | 3      | 2      | 1      | 0      |
#----------------------------------------------------------------*/

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

#define DC2B                                     0x4
#define DC2B_address                             0x29A
#define DC2B_position                            0x4
#define DC2B_size                                0x2
#define DC2B_value_mask                          0x30
#define DC2B_clear_mask                          0xCF

#define DC2B0                                    0x4
#define DC2B0_address                            0x29A
#define DC2B0_position                           0x4
#define DC2B0_size                               0x1
#define DC2B0_value_mask                         0x10
#define DC2B0_clear_mask                         0xEF

#define DC2B1                                    0x5
#define DC2B1_address                            0x29A
#define DC2B1_position                           0x5
#define DC2B1_size                               0x1
#define DC2B1_value_mask                         0x20
#define DC2B1_clear_mask                         0xDF

#define P2M                                      0x6
#define P2M_address                              0x29A
#define P2M_position                             0x6
#define P2M_size                                 0x2
#define P2M_value_mask                           0xC0
#define P2M_clear_mask                           0x3F

#define P2M0                                     0x6
#define P2M0_address                             0x29A
#define P2M0_position                            0x6
#define P2M0_size                                0x1
#define P2M0_value_mask                          0x40
#define P2M0_clear_mask                          0xBF

#define P2M1                                     0x7
#define P2M1_address                             0x29A
#define P2M1_position                            0x7
#define P2M1_size                                0x1
#define P2M1_value_mask                          0x80
#define P2M1_clear_mask                          0x7F


/*---------------------------------------------------------------#
| PWM2CON                                                  0x29B |
#----------------------------------------------------------------#
| P2RSEN | P2DC6 | P2DC5 | P2DC4 | P2DC3 | P2DC2 | P2DC1 | P2DC0 |
#----------------------------------------------------------------#
| 7      | 6     | 5     | 4     | 3     | 2     | 1     | 0     |
#---------------------------------------------------------------*/

#define PWM2CON                                  0x0
#define PWM2CON_address                          0x29B
#define PWM2CON_position                         0x0
#define PWM2CON_size                             0x8
#define PWM2CON_value_mask                       0xFF
#define PWM2CON_clear_mask                       0x0

#define P2DC0                                    0x0
#define P2DC0_address                            0x29B
#define P2DC0_position                           0x0
#define P2DC0_size                               0x1
#define P2DC0_value_mask                         0x1
#define P2DC0_clear_mask                         0xFE

#define P2DC1                                    0x1
#define P2DC1_address                            0x29B
#define P2DC1_position                           0x1
#define P2DC1_size                               0x1
#define P2DC1_value_mask                         0x2
#define P2DC1_clear_mask                         0xFD

#define P2DC2                                    0x2
#define P2DC2_address                            0x29B
#define P2DC2_position                           0x2
#define P2DC2_size                               0x1
#define P2DC2_value_mask                         0x4
#define P2DC2_clear_mask                         0xFB

#define P2DC3                                    0x3
#define P2DC3_address                            0x29B
#define P2DC3_position                           0x3
#define P2DC3_size                               0x1
#define P2DC3_value_mask                         0x8
#define P2DC3_clear_mask                         0xF7

#define P2DC4                                    0x4
#define P2DC4_address                            0x29B
#define P2DC4_position                           0x4
#define P2DC4_size                               0x1
#define P2DC4_value_mask                         0x10
#define P2DC4_clear_mask                         0xEF

#define P2DC5                                    0x5
#define P2DC5_address                            0x29B
#define P2DC5_position                           0x5
#define P2DC5_size                               0x1
#define P2DC5_value_mask                         0x20
#define P2DC5_clear_mask                         0xDF

#define P2DC6                                    0x6
#define P2DC6_address                            0x29B
#define P2DC6_position                           0x6
#define P2DC6_size                               0x1
#define P2DC6_value_mask                         0x40
#define P2DC6_clear_mask                         0xBF

#define P2RSEN                                   0x7
#define P2RSEN_address                           0x29B
#define P2RSEN_position                          0x7
#define P2RSEN_size                              0x1
#define P2RSEN_value_mask                        0x80
#define P2RSEN_clear_mask                        0x7F


/*------------------------------------------------------------------------------#
| CCP2AS                                                                  0x29C |
#-------------------------------------------------------------------------------#
| CCP2ASE | CCP2AS2 | CCP2AS1 | CCP2AS0 | PSS2AC1 | PSS2AC0 | PSS2BD1 | PSS2BD0 |
#-------------------------------------------------------------------------------#
| 7       | 6       | 5       | 4       | 3       | 2       | 1       | 0       |
#------------------------------------------------------------------------------*/

#define CCP2AS                                   0x0
#define CCP2AS_address                           0x29C
#define CCP2AS_position                          0x0
#define CCP2AS_size                              0x8
#define CCP2AS_value_mask                        0xFF
#define CCP2AS_clear_mask                        0x0

#define PSS2BD0                                  0x0
#define PSS2BD0_address                          0x29C
#define PSS2BD0_position                         0x0
#define PSS2BD0_size                             0x1
#define PSS2BD0_value_mask                       0x1
#define PSS2BD0_clear_mask                       0xFE

#define PSS2BD1                                  0x1
#define PSS2BD1_address                          0x29C
#define PSS2BD1_position                         0x1
#define PSS2BD1_size                             0x1
#define PSS2BD1_value_mask                       0x2
#define PSS2BD1_clear_mask                       0xFD

#define PSS2AC0                                  0x2
#define PSS2AC0_address                          0x29C
#define PSS2AC0_position                         0x2
#define PSS2AC0_size                             0x1
#define PSS2AC0_value_mask                       0x4
#define PSS2AC0_clear_mask                       0xFB

#define PSS2AC1                                  0x3
#define PSS2AC1_address                          0x29C
#define PSS2AC1_position                         0x3
#define PSS2AC1_size                             0x1
#define PSS2AC1_value_mask                       0x8
#define PSS2AC1_clear_mask                       0xF7

#define CCP2AS0                                  0x4
#define CCP2AS0_address                          0x29C
#define CCP2AS0_position                         0x4
#define CCP2AS0_size                             0x1
#define CCP2AS0_value_mask                       0x10
#define CCP2AS0_clear_mask                       0xEF

#define CCP2AS1                                  0x5
#define CCP2AS1_address                          0x29C
#define CCP2AS1_position                         0x5
#define CCP2AS1_size                             0x1
#define CCP2AS1_value_mask                       0x20
#define CCP2AS1_clear_mask                       0xDF

#define CCP2AS2                                  0x6
#define CCP2AS2_address                          0x29C
#define CCP2AS2_position                         0x6
#define CCP2AS2_size                             0x1
#define CCP2AS2_value_mask                       0x40
#define CCP2AS2_clear_mask                       0xBF

#define CCP2ASE                                  0x7
#define CCP2ASE_address                          0x29C
#define CCP2ASE_position                         0x7
#define CCP2ASE_size                             0x1
#define CCP2ASE_value_mask                       0x80
#define CCP2ASE_clear_mask                       0x7F


/*-----------------------------------------------------#
| PSTR2CON                                       0x29D |
#------------------------------------------------------#
| - | - | - | STR2SYNC | STR2D | STR2C | STR2B | STR2A |
#------------------------------------------------------#
| 7 | 6 | 5 | 4        | 3     | 2     | 1     | 0     |
#-----------------------------------------------------*/

#define PSTR2CON                                 0x0
#define PSTR2CON_address                         0x29D
#define PSTR2CON_position                        0x0
#define PSTR2CON_size                            0x8
#define PSTR2CON_value_mask                      0xFF
#define PSTR2CON_clear_mask                      0x0

#define STR2A                                    0x0
#define STR2A_address                            0x29D
#define STR2A_position                           0x0
#define STR2A_size                               0x1
#define STR2A_value_mask                         0x1
#define STR2A_clear_mask                         0xFE

#define STR2B                                    0x1
#define STR2B_address                            0x29D
#define STR2B_position                           0x1
#define STR2B_size                               0x1
#define STR2B_value_mask                         0x2
#define STR2B_clear_mask                         0xFD

#define STR2C                                    0x2
#define STR2C_address                            0x29D
#define STR2C_position                           0x2
#define STR2C_size                               0x1
#define STR2C_value_mask                         0x4
#define STR2C_clear_mask                         0xFB

#define STR2D                                    0x3
#define STR2D_address                            0x29D
#define STR2D_position                           0x3
#define STR2D_size                               0x1
#define STR2D_value_mask                         0x8
#define STR2D_clear_mask                         0xF7

#define STR2SYNC                                 0x4
#define STR2SYNC_address                         0x29D
#define STR2SYNC_position                        0x4
#define STR2SYNC_size                            0x1
#define STR2SYNC_value_mask                      0x10
#define STR2SYNC_clear_mask                      0xEF


/*------------------------------------------------------------------------------#
| CCPTMRS0                                                                0x29E |
#-------------------------------------------------------------------------------#
| C4TSEL1 | C4TSEL0 | C3TSEL1 | C3TSEL0 | C2TSEL1 | C2TSEL0 | C1TSEL1 | C1TSEL0 |
#-------------------------------------------------------------------------------#
| 7       | 6       | 5       | 4       | 3       | 2       | 1       | 0       |
#------------------------------------------------------------------------------*/

#define CCPTMRS0                                 0x0
#define CCPTMRS0_address                         0x29E
#define CCPTMRS0_position                        0x0
#define CCPTMRS0_size                            0x8
#define CCPTMRS0_value_mask                      0xFF
#define CCPTMRS0_clear_mask                      0x0

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

#define C3TSEL0                                  0x4
#define C3TSEL0_address                          0x29E
#define C3TSEL0_position                         0x4
#define C3TSEL0_size                             0x1
#define C3TSEL0_value_mask                       0x10
#define C3TSEL0_clear_mask                       0xEF

#define C3TSEL                                   0x4
#define C3TSEL_address                           0x29E
#define C3TSEL_position                          0x4
#define C3TSEL_size                              0x2
#define C3TSEL_value_mask                        0x30
#define C3TSEL_clear_mask                        0xCF

#define C3TSEL1                                  0x5
#define C3TSEL1_address                          0x29E
#define C3TSEL1_position                         0x5
#define C3TSEL1_size                             0x1
#define C3TSEL1_value_mask                       0x20
#define C3TSEL1_clear_mask                       0xDF

#define C4TSEL                                   0x6
#define C4TSEL_address                           0x29E
#define C4TSEL_position                          0x6
#define C4TSEL_size                              0x2
#define C4TSEL_value_mask                        0xC0
#define C4TSEL_clear_mask                        0x3F

#define C4TSEL0                                  0x6
#define C4TSEL0_address                          0x29E
#define C4TSEL0_position                         0x6
#define C4TSEL0_size                             0x1
#define C4TSEL0_value_mask                       0x40
#define C4TSEL0_clear_mask                       0xBF

#define C4TSEL1                                  0x7
#define C4TSEL1_address                          0x29E
#define C4TSEL1_position                         0x7
#define C4TSEL1_size                             0x1
#define C4TSEL1_value_mask                       0x80
#define C4TSEL1_clear_mask                       0x7F


/*------------------------------------------#
| CCPTMRS1                            0x29F |
#-------------------------------------------#
| - | - | - | - | - | - | C5TSEL1 | C5TSEL0 |
#-------------------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1       | 0       |
#------------------------------------------*/

#define CCPTMRS1                                 0x0
#define CCPTMRS1_address                         0x29F
#define CCPTMRS1_position                        0x0
#define CCPTMRS1_size                            0x8
#define CCPTMRS1_value_mask                      0xFF
#define CCPTMRS1_clear_mask                      0x0

#define C5TSEL                                   0x0
#define C5TSEL_address                           0x29F
#define C5TSEL_position                          0x0
#define C5TSEL_size                              0x2
#define C5TSEL_value_mask                        0x3
#define C5TSEL_clear_mask                        0xFC

#define C5TSEL0                                  0x0
#define C5TSEL0_address                          0x29F
#define C5TSEL0_position                         0x0
#define C5TSEL0_size                             0x1
#define C5TSEL0_value_mask                       0x1
#define C5TSEL0_clear_mask                       0xFE

#define C5TSEL1                                  0x1
#define C5TSEL1_address                          0x29F
#define C5TSEL1_position                         0x1
#define C5TSEL1_size                             0x1
#define C5TSEL1_value_mask                       0x2
#define C5TSEL1_clear_mask                       0xFD


/*----------------------------------------------------------------------#
| TRISF                                                           0x30C |
#-----------------------------------------------------------------------#
| TRISF7 | TRISF6 | TRISF5 | TRISF4 | TRISF3 | TRISF2 | TRISF1 | TRISF0 |
#-----------------------------------------------------------------------#
| 7      | 6      | 5      | 4      | 3      | 2      | 1      | 0      |
#----------------------------------------------------------------------*/

#define TRISF                                    0x0
#define TRISF_address                            0x30C
#define TRISF_position                           0x0
#define TRISF_size                               0x8
#define TRISF_value_mask                         0xFF
#define TRISF_clear_mask                         0x0

#define TRISF0                                   0x0
#define TRISF0_address                           0x30C
#define TRISF0_position                          0x0
#define TRISF0_size                              0x1
#define TRISF0_value_mask                        0x1
#define TRISF0_clear_mask                        0xFE

#define TRISF1                                   0x1
#define TRISF1_address                           0x30C
#define TRISF1_position                          0x1
#define TRISF1_size                              0x1
#define TRISF1_value_mask                        0x2
#define TRISF1_clear_mask                        0xFD

#define TRISF2                                   0x2
#define TRISF2_address                           0x30C
#define TRISF2_position                          0x2
#define TRISF2_size                              0x1
#define TRISF2_value_mask                        0x4
#define TRISF2_clear_mask                        0xFB

#define TRISF3                                   0x3
#define TRISF3_address                           0x30C
#define TRISF3_position                          0x3
#define TRISF3_size                              0x1
#define TRISF3_value_mask                        0x8
#define TRISF3_clear_mask                        0xF7

#define TRISF4                                   0x4
#define TRISF4_address                           0x30C
#define TRISF4_position                          0x4
#define TRISF4_size                              0x1
#define TRISF4_value_mask                        0x10
#define TRISF4_clear_mask                        0xEF

#define TRISF5                                   0x5
#define TRISF5_address                           0x30C
#define TRISF5_position                          0x5
#define TRISF5_size                              0x1
#define TRISF5_value_mask                        0x20
#define TRISF5_clear_mask                        0xDF

#define TRISF6                                   0x6
#define TRISF6_address                           0x30C
#define TRISF6_position                          0x6
#define TRISF6_size                              0x1
#define TRISF6_value_mask                        0x40
#define TRISF6_clear_mask                        0xBF

#define TRISF7                                   0x7
#define TRISF7_address                           0x30C
#define TRISF7_position                          0x7
#define TRISF7_size                              0x1
#define TRISF7_value_mask                        0x80
#define TRISF7_clear_mask                        0x7F


/*------------------------------------------------------------#
| TRISG                                                 0x30D |
#-------------------------------------------------------------#
| - | - | TRISG5 | TRISG4 | TRISG3 | TRISG2 | TRISG1 | TRISG0 |
#-------------------------------------------------------------#
| 7 | 6 | 5      | 4      | 3      | 2      | 1      | 0      |
#------------------------------------------------------------*/

#define TRISG                                    0x0
#define TRISG_address                            0x30D
#define TRISG_position                           0x0
#define TRISG_size                               0x8
#define TRISG_value_mask                         0xFF
#define TRISG_clear_mask                         0x0

#define TRISG0                                   0x0
#define TRISG0_address                           0x30D
#define TRISG0_position                          0x0
#define TRISG0_size                              0x1
#define TRISG0_value_mask                        0x1
#define TRISG0_clear_mask                        0xFE

#define TRISG1                                   0x1
#define TRISG1_address                           0x30D
#define TRISG1_position                          0x1
#define TRISG1_size                              0x1
#define TRISG1_value_mask                        0x2
#define TRISG1_clear_mask                        0xFD

#define TRISG2                                   0x2
#define TRISG2_address                           0x30D
#define TRISG2_position                          0x2
#define TRISG2_size                              0x1
#define TRISG2_value_mask                        0x4
#define TRISG2_clear_mask                        0xFB

#define TRISG3                                   0x3
#define TRISG3_address                           0x30D
#define TRISG3_position                          0x3
#define TRISG3_size                              0x1
#define TRISG3_value_mask                        0x8
#define TRISG3_clear_mask                        0xF7

#define TRISG4                                   0x4
#define TRISG4_address                           0x30D
#define TRISG4_position                          0x4
#define TRISG4_size                              0x1
#define TRISG4_value_mask                        0x10
#define TRISG4_clear_mask                        0xEF

#define TRISG5                                   0x5
#define TRISG5_address                           0x30D
#define TRISG5_position                          0x5
#define TRISG5_size                              0x1
#define TRISG5_value_mask                        0x20
#define TRISG5_clear_mask                        0xDF


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


/*----------------------------------------------------------------#
| CCP3CON                                                   0x313 |
#-----------------------------------------------------------------#
| P3M1 | P3M0 | DC3B1 | DC3B0 | CCP3M3 | CCP3M2 | CCP3M1 | CCP3M0 |
#-----------------------------------------------------------------#
| 7    | 6    | 5     | 4     | 3      | 2      | 1      | 0      |
#----------------------------------------------------------------*/

#define CCP3CON                                  0x0
#define CCP3CON_address                          0x313
#define CCP3CON_position                         0x0
#define CCP3CON_size                             0x8
#define CCP3CON_value_mask                       0xFF
#define CCP3CON_clear_mask                       0x0

#define CCP3M0                                   0x0
#define CCP3M0_address                           0x313
#define CCP3M0_position                          0x0
#define CCP3M0_size                              0x1
#define CCP3M0_value_mask                        0x1
#define CCP3M0_clear_mask                        0xFE

#define CCP3M1                                   0x1
#define CCP3M1_address                           0x313
#define CCP3M1_position                          0x1
#define CCP3M1_size                              0x1
#define CCP3M1_value_mask                        0x2
#define CCP3M1_clear_mask                        0xFD

#define CCP3M2                                   0x2
#define CCP3M2_address                           0x313
#define CCP3M2_position                          0x2
#define CCP3M2_size                              0x1
#define CCP3M2_value_mask                        0x4
#define CCP3M2_clear_mask                        0xFB

#define CCP3M3                                   0x3
#define CCP3M3_address                           0x313
#define CCP3M3_position                          0x3
#define CCP3M3_size                              0x1
#define CCP3M3_value_mask                        0x8
#define CCP3M3_clear_mask                        0xF7

#define DC3B0                                    0x4
#define DC3B0_address                            0x313
#define DC3B0_position                           0x4
#define DC3B0_size                               0x1
#define DC3B0_value_mask                         0x10
#define DC3B0_clear_mask                         0xEF

#define DC3B1                                    0x5
#define DC3B1_address                            0x313
#define DC3B1_position                           0x5
#define DC3B1_size                               0x1
#define DC3B1_value_mask                         0x20
#define DC3B1_clear_mask                         0xDF

#define P3M0                                     0x6
#define P3M0_address                             0x313
#define P3M0_position                            0x6
#define P3M0_size                                0x1
#define P3M0_value_mask                          0x40
#define P3M0_clear_mask                          0xBF

#define P3M1                                     0x7
#define P3M1_address                             0x313
#define P3M1_position                            0x7
#define P3M1_size                                0x1
#define P3M1_value_mask                          0x80
#define P3M1_clear_mask                          0x7F


/*---------------------------------------------------------------#
| PWM3CON                                                  0x314 |
#----------------------------------------------------------------#
| P3RSEN | P3DC6 | P3DC5 | P3DC4 | P3DC3 | P3DC2 | P3DC1 | P3DC0 |
#----------------------------------------------------------------#
| 7      | 6     | 5     | 4     | 3     | 2     | 1     | 0     |
#---------------------------------------------------------------*/

#define PWM3CON                                  0x0
#define PWM3CON_address                          0x314
#define PWM3CON_position                         0x0
#define PWM3CON_size                             0x8
#define PWM3CON_value_mask                       0xFF
#define PWM3CON_clear_mask                       0x0

#define P3DC0                                    0x0
#define P3DC0_address                            0x314
#define P3DC0_position                           0x0
#define P3DC0_size                               0x1
#define P3DC0_value_mask                         0x1
#define P3DC0_clear_mask                         0xFE

#define P3DC1                                    0x1
#define P3DC1_address                            0x314
#define P3DC1_position                           0x1
#define P3DC1_size                               0x1
#define P3DC1_value_mask                         0x2
#define P3DC1_clear_mask                         0xFD

#define P3DC2                                    0x2
#define P3DC2_address                            0x314
#define P3DC2_position                           0x2
#define P3DC2_size                               0x1
#define P3DC2_value_mask                         0x4
#define P3DC2_clear_mask                         0xFB

#define P3DC3                                    0x3
#define P3DC3_address                            0x314
#define P3DC3_position                           0x3
#define P3DC3_size                               0x1
#define P3DC3_value_mask                         0x8
#define P3DC3_clear_mask                         0xF7

#define P3DC4                                    0x4
#define P3DC4_address                            0x314
#define P3DC4_position                           0x4
#define P3DC4_size                               0x1
#define P3DC4_value_mask                         0x10
#define P3DC4_clear_mask                         0xEF

#define P3DC5                                    0x5
#define P3DC5_address                            0x314
#define P3DC5_position                           0x5
#define P3DC5_size                               0x1
#define P3DC5_value_mask                         0x20
#define P3DC5_clear_mask                         0xDF

#define P3DC6                                    0x6
#define P3DC6_address                            0x314
#define P3DC6_position                           0x6
#define P3DC6_size                               0x1
#define P3DC6_value_mask                         0x40
#define P3DC6_clear_mask                         0xBF

#define P3RSEN                                   0x7
#define P3RSEN_address                           0x314
#define P3RSEN_position                          0x7
#define P3RSEN_size                              0x1
#define P3RSEN_value_mask                        0x80
#define P3RSEN_clear_mask                        0x7F


/*------------------------------------------------------------------------------#
| CCP3AS                                                                  0x315 |
#-------------------------------------------------------------------------------#
| CCP3ASE | CCP3AS2 | CCP3AS1 | CCP3AS0 | PSS3AC1 | PSS3AC0 | PSS3BD1 | PSS3BD0 |
#-------------------------------------------------------------------------------#
| 7       | 6       | 5       | 4       | 3       | 2       | 1       | 0       |
#------------------------------------------------------------------------------*/

#define CCP3AS                                   0x0
#define CCP3AS_address                           0x315
#define CCP3AS_position                          0x0
#define CCP3AS_size                              0x8
#define CCP3AS_value_mask                        0xFF
#define CCP3AS_clear_mask                        0x0

#define PSS3BD0                                  0x0
#define PSS3BD0_address                          0x315
#define PSS3BD0_position                         0x0
#define PSS3BD0_size                             0x1
#define PSS3BD0_value_mask                       0x1
#define PSS3BD0_clear_mask                       0xFE

#define PSS3BD1                                  0x1
#define PSS3BD1_address                          0x315
#define PSS3BD1_position                         0x1
#define PSS3BD1_size                             0x1
#define PSS3BD1_value_mask                       0x2
#define PSS3BD1_clear_mask                       0xFD

#define PSS3AC0                                  0x2
#define PSS3AC0_address                          0x315
#define PSS3AC0_position                         0x2
#define PSS3AC0_size                             0x1
#define PSS3AC0_value_mask                       0x4
#define PSS3AC0_clear_mask                       0xFB

#define PSS3AC1                                  0x3
#define PSS3AC1_address                          0x315
#define PSS3AC1_position                         0x3
#define PSS3AC1_size                             0x1
#define PSS3AC1_value_mask                       0x8
#define PSS3AC1_clear_mask                       0xF7

#define CCP3AS0                                  0x4
#define CCP3AS0_address                          0x315
#define CCP3AS0_position                         0x4
#define CCP3AS0_size                             0x1
#define CCP3AS0_value_mask                       0x10
#define CCP3AS0_clear_mask                       0xEF

#define CCP3AS1                                  0x5
#define CCP3AS1_address                          0x315
#define CCP3AS1_position                         0x5
#define CCP3AS1_size                             0x1
#define CCP3AS1_value_mask                       0x20
#define CCP3AS1_clear_mask                       0xDF

#define CCP3AS2                                  0x6
#define CCP3AS2_address                          0x315
#define CCP3AS2_position                         0x6
#define CCP3AS2_size                             0x1
#define CCP3AS2_value_mask                       0x40
#define CCP3AS2_clear_mask                       0xBF

#define CCP3ASE                                  0x7
#define CCP3ASE_address                          0x315
#define CCP3ASE_position                         0x7
#define CCP3ASE_size                             0x1
#define CCP3ASE_value_mask                       0x80
#define CCP3ASE_clear_mask                       0x7F


/*-----------------------------------------------------#
| PSTR3CON                                       0x316 |
#------------------------------------------------------#
| - | - | - | STR3SYNC | STR3D | STR3C | STR3B | STR3A |
#------------------------------------------------------#
| 7 | 6 | 5 | 4        | 3     | 2     | 1     | 0     |
#-----------------------------------------------------*/

#define PSTR3CON                                 0x0
#define PSTR3CON_address                         0x316
#define PSTR3CON_position                        0x0
#define PSTR3CON_size                            0x8
#define PSTR3CON_value_mask                      0xFF
#define PSTR3CON_clear_mask                      0x0

#define STR3A                                    0x0
#define STR3A_address                            0x316
#define STR3A_position                           0x0
#define STR3A_size                               0x1
#define STR3A_value_mask                         0x1
#define STR3A_clear_mask                         0xFE

#define STR3B                                    0x1
#define STR3B_address                            0x316
#define STR3B_position                           0x1
#define STR3B_size                               0x1
#define STR3B_value_mask                         0x2
#define STR3B_clear_mask                         0xFD

#define STR3C                                    0x2
#define STR3C_address                            0x316
#define STR3C_position                           0x2
#define STR3C_size                               0x1
#define STR3C_value_mask                         0x4
#define STR3C_clear_mask                         0xFB

#define STR3D                                    0x3
#define STR3D_address                            0x316
#define STR3D_position                           0x3
#define STR3D_size                               0x1
#define STR3D_value_mask                         0x8
#define STR3D_clear_mask                         0xF7

#define STR3SYNC                                 0x4
#define STR3SYNC_address                         0x316
#define STR3SYNC_position                        0x4
#define STR3SYNC_size                            0x1
#define STR3SYNC_value_mask                      0x10
#define STR3SYNC_clear_mask                      0xEF


/*------------------------------#
| CCPR4L                  0x318 |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define CCPR4L                                   0x0
#define CCPR4L_address                           0x318
#define CCPR4L_position                          0x0
#define CCPR4L_size                              0x8
#define CCPR4L_value_mask                        0xFF
#define CCPR4L_clear_mask                        0x0


/*------------------------------#
| CCPR4H                  0x319 |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define CCPR4H                                   0x0
#define CCPR4H_address                           0x319
#define CCPR4H_position                          0x0
#define CCPR4H_size                              0x8
#define CCPR4H_value_mask                        0xFF
#define CCPR4H_clear_mask                        0x0


/*----------------------------------------------------------#
| CCP4CON                                             0x31A |
#-----------------------------------------------------------#
| - | - | DC4B1 | DC4B0 | CCP4M3 | CCP4M2 | CCP4M1 | CCP4M0 |
#-----------------------------------------------------------#
| 7 | 6 | 5     | 4     | 3      | 2      | 1      | 0      |
#----------------------------------------------------------*/

#define CCP4CON                                  0x0
#define CCP4CON_address                          0x31A
#define CCP4CON_position                         0x0
#define CCP4CON_size                             0x8
#define CCP4CON_value_mask                       0xFF
#define CCP4CON_clear_mask                       0x0

#define CCP4M0                                   0x0
#define CCP4M0_address                           0x31A
#define CCP4M0_position                          0x0
#define CCP4M0_size                              0x1
#define CCP4M0_value_mask                        0x1
#define CCP4M0_clear_mask                        0xFE

#define CCP4M1                                   0x1
#define CCP4M1_address                           0x31A
#define CCP4M1_position                          0x1
#define CCP4M1_size                              0x1
#define CCP4M1_value_mask                        0x2
#define CCP4M1_clear_mask                        0xFD

#define CCP4M2                                   0x2
#define CCP4M2_address                           0x31A
#define CCP4M2_position                          0x2
#define CCP4M2_size                              0x1
#define CCP4M2_value_mask                        0x4
#define CCP4M2_clear_mask                        0xFB

#define CCP4M3                                   0x3
#define CCP4M3_address                           0x31A
#define CCP4M3_position                          0x3
#define CCP4M3_size                              0x1
#define CCP4M3_value_mask                        0x8
#define CCP4M3_clear_mask                        0xF7

#define DC4B0                                    0x4
#define DC4B0_address                            0x31A
#define DC4B0_position                           0x4
#define DC4B0_size                               0x1
#define DC4B0_value_mask                         0x10
#define DC4B0_clear_mask                         0xEF

#define DC4B1                                    0x5
#define DC4B1_address                            0x31A
#define DC4B1_position                           0x5
#define DC4B1_size                               0x1
#define DC4B1_value_mask                         0x20
#define DC4B1_clear_mask                         0xDF


/*------------------------------#
| CCPR5L                  0x31C |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define CCPR5L                                   0x0
#define CCPR5L_address                           0x31C
#define CCPR5L_position                          0x0
#define CCPR5L_size                              0x8
#define CCPR5L_value_mask                        0xFF
#define CCPR5L_clear_mask                        0x0


/*------------------------------#
| CCPR5H                  0x31D |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define CCPR5H                                   0x0
#define CCPR5H_address                           0x31D
#define CCPR5H_position                          0x0
#define CCPR5H_size                              0x8
#define CCPR5H_value_mask                        0xFF
#define CCPR5H_clear_mask                        0x0


/*----------------------------------------------------------#
| CCP5CON                                             0x31E |
#-----------------------------------------------------------#
| - | - | DC5B1 | DC5B0 | CCP5M3 | CCP5M2 | CCP5M1 | CCP5M0 |
#-----------------------------------------------------------#
| 7 | 6 | 5     | 4     | 3      | 2      | 1      | 0      |
#----------------------------------------------------------*/

#define CCP5CON                                  0x0
#define CCP5CON_address                          0x31E
#define CCP5CON_position                         0x0
#define CCP5CON_size                             0x8
#define CCP5CON_value_mask                       0xFF
#define CCP5CON_clear_mask                       0x0

#define CCP5M0                                   0x0
#define CCP5M0_address                           0x31E
#define CCP5M0_position                          0x0
#define CCP5M0_size                              0x1
#define CCP5M0_value_mask                        0x1
#define CCP5M0_clear_mask                        0xFE

#define CCP5M1                                   0x1
#define CCP5M1_address                           0x31E
#define CCP5M1_position                          0x1
#define CCP5M1_size                              0x1
#define CCP5M1_value_mask                        0x2
#define CCP5M1_clear_mask                        0xFD

#define CCP5M2                                   0x2
#define CCP5M2_address                           0x31E
#define CCP5M2_position                          0x2
#define CCP5M2_size                              0x1
#define CCP5M2_value_mask                        0x4
#define CCP5M2_clear_mask                        0xFB

#define CCP5M3                                   0x3
#define CCP5M3_address                           0x31E
#define CCP5M3_position                          0x3
#define CCP5M3_size                              0x1
#define CCP5M3_value_mask                        0x8
#define CCP5M3_clear_mask                        0xF7

#define DC5B0                                    0x4
#define DC5B0_address                            0x31E
#define DC5B0_position                           0x4
#define DC5B0_size                               0x1
#define DC5B0_value_mask                         0x10
#define DC5B0_clear_mask                         0xEF

#define DC5B1                                    0x5
#define DC5B1_address                            0x31E
#define DC5B1_position                           0x5
#define DC5B1_size                               0x1
#define DC5B1_value_mask                         0x20
#define DC5B1_clear_mask                         0xDF


/*--------------------------------------------------------------#
| LATF                                                    0x38C |
#---------------------------------------------------------------#
| LATF7 | LATF6 | LATF5 | LATF4 | LATF3 | LATF2 | LATF1 | LATF0 |
#---------------------------------------------------------------#
| 7     | 6     | 5     | 4     | 3     | 2     | 1     | 0     |
#--------------------------------------------------------------*/

#define LATF                                     0x0
#define LATF_address                             0x38C
#define LATF_position                            0x0
#define LATF_size                                0x8
#define LATF_value_mask                          0xFF
#define LATF_clear_mask                          0x0

#define LATF0                                    0x0
#define LATF0_address                            0x38C
#define LATF0_position                           0x0
#define LATF0_size                               0x1
#define LATF0_value_mask                         0x1
#define LATF0_clear_mask                         0xFE

#define LATF1                                    0x1
#define LATF1_address                            0x38C
#define LATF1_position                           0x1
#define LATF1_size                               0x1
#define LATF1_value_mask                         0x2
#define LATF1_clear_mask                         0xFD

#define LATF2                                    0x2
#define LATF2_address                            0x38C
#define LATF2_position                           0x2
#define LATF2_size                               0x1
#define LATF2_value_mask                         0x4
#define LATF2_clear_mask                         0xFB

#define LATF3                                    0x3
#define LATF3_address                            0x38C
#define LATF3_position                           0x3
#define LATF3_size                               0x1
#define LATF3_value_mask                         0x8
#define LATF3_clear_mask                         0xF7

#define LATF4                                    0x4
#define LATF4_address                            0x38C
#define LATF4_position                           0x4
#define LATF4_size                               0x1
#define LATF4_value_mask                         0x10
#define LATF4_clear_mask                         0xEF

#define LATF5                                    0x5
#define LATF5_address                            0x38C
#define LATF5_position                           0x5
#define LATF5_size                               0x1
#define LATF5_value_mask                         0x20
#define LATF5_clear_mask                         0xDF

#define LATF6                                    0x6
#define LATF6_address                            0x38C
#define LATF6_position                           0x6
#define LATF6_size                               0x1
#define LATF6_value_mask                         0x40
#define LATF6_clear_mask                         0xBF

#define LATF7                                    0x7
#define LATF7_address                            0x38C
#define LATF7_position                           0x7
#define LATF7_size                               0x1
#define LATF7_value_mask                         0x80
#define LATF7_clear_mask                         0x7F


/*------------------------------------------------------#
| LATG                                            0x38D |
#-------------------------------------------------------#
| - | - | LATG5 | LATG4 | LATG3 | LATG2 | LATG1 | LATG0 |
#-------------------------------------------------------#
| 7 | 6 | 5     | 4     | 3     | 2     | 1     | 0     |
#------------------------------------------------------*/

#define LATG                                     0x0
#define LATG_address                             0x38D
#define LATG_position                            0x0
#define LATG_size                                0x8
#define LATG_value_mask                          0xFF
#define LATG_clear_mask                          0x0

#define LATG0                                    0x0
#define LATG0_address                            0x38D
#define LATG0_position                           0x0
#define LATG0_size                               0x1
#define LATG0_value_mask                         0x1
#define LATG0_clear_mask                         0xFE

#define LATG1                                    0x1
#define LATG1_address                            0x38D
#define LATG1_position                           0x1
#define LATG1_size                               0x1
#define LATG1_value_mask                         0x2
#define LATG1_clear_mask                         0xFD

#define LATG2                                    0x2
#define LATG2_address                            0x38D
#define LATG2_position                           0x2
#define LATG2_size                               0x1
#define LATG2_value_mask                         0x4
#define LATG2_clear_mask                         0xFB

#define LATG3                                    0x3
#define LATG3_address                            0x38D
#define LATG3_position                           0x3
#define LATG3_size                               0x1
#define LATG3_value_mask                         0x8
#define LATG3_clear_mask                         0xF7

#define LATG4                                    0x4
#define LATG4_address                            0x38D
#define LATG4_position                           0x4
#define LATG4_size                               0x1
#define LATG4_value_mask                         0x10
#define LATG4_clear_mask                         0xEF

#define LATG5                                    0x5
#define LATG5_address                            0x38D
#define LATG5_position                           0x5
#define LATG5_size                               0x1
#define LATG5_value_mask                         0x20
#define LATG5_clear_mask                         0xDF


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

#define IOCBN0                                   0x0
#define IOCBN0_address                           0x395
#define IOCBN0_position                          0x0
#define IOCBN0_size                              0x1
#define IOCBN0_value_mask                        0x1
#define IOCBN0_clear_mask                        0xFE

#define IOCBN                                    0x0
#define IOCBN_address                            0x395
#define IOCBN_position                           0x0
#define IOCBN_size                               0x8
#define IOCBN_value_mask                         0xFF
#define IOCBN_clear_mask                         0x0

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

#define IOCBF0                                   0x0
#define IOCBF0_address                           0x396
#define IOCBF0_position                          0x0
#define IOCBF0_size                              0x1
#define IOCBF0_value_mask                        0x1
#define IOCBF0_clear_mask                        0xFE

#define IOCBF                                    0x0
#define IOCBF_address                            0x396
#define IOCBF_position                           0x0
#define IOCBF_size                               0x8
#define IOCBF_value_mask                         0xFF
#define IOCBF_clear_mask                         0x0

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


/*--------------------------------------------------------------#
| ANSELF                                                  0x40C |
#---------------------------------------------------------------#
| ANSF7 | ANSF6 | ANSF5 | ANSF4 | ANSF3 | ANSF2 | ANSF1 | ANSF0 |
#---------------------------------------------------------------#
| 7     | 6     | 5     | 4     | 3     | 2     | 1     | 0     |
#--------------------------------------------------------------*/

#define ANSELF                                   0x0
#define ANSELF_address                           0x40C
#define ANSELF_position                          0x0
#define ANSELF_size                              0x8
#define ANSELF_value_mask                        0xFF
#define ANSELF_clear_mask                        0x0

#define ANSF0                                    0x0
#define ANSF0_address                            0x40C
#define ANSF0_position                           0x0
#define ANSF0_size                               0x1
#define ANSF0_value_mask                         0x1
#define ANSF0_clear_mask                         0xFE

#define ANSF1                                    0x1
#define ANSF1_address                            0x40C
#define ANSF1_position                           0x1
#define ANSF1_size                               0x1
#define ANSF1_value_mask                         0x2
#define ANSF1_clear_mask                         0xFD

#define ANSF2                                    0x2
#define ANSF2_address                            0x40C
#define ANSF2_position                           0x2
#define ANSF2_size                               0x1
#define ANSF2_value_mask                         0x4
#define ANSF2_clear_mask                         0xFB

#define ANSF3                                    0x3
#define ANSF3_address                            0x40C
#define ANSF3_position                           0x3
#define ANSF3_size                               0x1
#define ANSF3_value_mask                         0x8
#define ANSF3_clear_mask                         0xF7

#define ANSF4                                    0x4
#define ANSF4_address                            0x40C
#define ANSF4_position                           0x4
#define ANSF4_size                               0x1
#define ANSF4_value_mask                         0x10
#define ANSF4_clear_mask                         0xEF

#define ANSF5                                    0x5
#define ANSF5_address                            0x40C
#define ANSF5_position                           0x5
#define ANSF5_size                               0x1
#define ANSF5_value_mask                         0x20
#define ANSF5_clear_mask                         0xDF

#define ANSF6                                    0x6
#define ANSF6_address                            0x40C
#define ANSF6_position                           0x6
#define ANSF6_size                               0x1
#define ANSF6_value_mask                         0x40
#define ANSF6_clear_mask                         0xBF

#define ANSF7                                    0x7
#define ANSF7_address                            0x40C
#define ANSF7_position                           0x7
#define ANSF7_size                               0x1
#define ANSF7_value_mask                         0x80
#define ANSF7_clear_mask                         0x7F


/*----------------------------------------------#
| ANSELG                                  0x40D |
#-----------------------------------------------#
| - | - | - | ANSG4 | ANSG3 | ANSG2 | ANSG1 | - |
#-----------------------------------------------#
| 7 | 6 | 5 | 4     | 3     | 2     | 1     | 0 |
#----------------------------------------------*/

#define ANSELG                                   0x1
#define ANSELG_address                           0x40D
#define ANSELG_position                          0x1
#define ANSELG_size                              0x4
#define ANSELG_value_mask                        0x1E
#define ANSELG_clear_mask                        0xE1

#define ANSG1                                    0x1
#define ANSG1_address                            0x40D
#define ANSG1_position                           0x1
#define ANSG1_size                               0x1
#define ANSG1_value_mask                         0x2
#define ANSG1_clear_mask                         0xFD

#define ANSG2                                    0x2
#define ANSG2_address                            0x40D
#define ANSG2_position                           0x2
#define ANSG2_size                               0x1
#define ANSG2_value_mask                         0x4
#define ANSG2_clear_mask                         0xFB

#define ANSG3                                    0x3
#define ANSG3_address                            0x40D
#define ANSG3_position                           0x3
#define ANSG3_size                               0x1
#define ANSG3_value_mask                         0x8
#define ANSG3_clear_mask                         0xF7

#define ANSG4                                    0x4
#define ANSG4_address                            0x40D
#define ANSG4_position                           0x4
#define ANSG4_size                               0x1
#define ANSG4_value_mask                         0x10
#define ANSG4_clear_mask                         0xEF


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


/*----------------------------------#
| WPUG                        0x48D |
#-----------------------------------#
| - | - | WPUG5 | - | - | - | - | - |
#-----------------------------------#
| 7 | 6 | 5     | 4 | 3 | 2 | 1 | 0 |
#----------------------------------*/

#define WPUG                                     0x0
#define WPUG_address                             0x48D
#define WPUG_position                            0x0
#define WPUG_size                                0x8
#define WPUG_value_mask                          0xFF
#define WPUG_clear_mask                          0x0

#define WPUG5                                    0x5
#define WPUG5_address                            0x48D
#define WPUG5_position                           0x5
#define WPUG5_size                               0x1
#define WPUG5_value_mask                         0x20
#define WPUG5_clear_mask                         0xDF


/*------------------------------#
| RC2REG                  0x491 |
#-------------------------------#
| RC2REG_RCREG                  |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define RC2REG                                   0x0
#define RC2REG_address                           0x491
#define RC2REG_position                          0x0
#define RC2REG_size                              0x8
#define RC2REG_value_mask                        0xFF
#define RC2REG_clear_mask                        0x0

#define RC2REG_RCREG                             0x0
#define RC2REG_RCREG_address                     0x491
#define RC2REG_RCREG_position                    0x0
#define RC2REG_RCREG_size                        0x8
#define RC2REG_RCREG_value_mask                  0xFF
#define RC2REG_RCREG_clear_mask                  0x0


/*------------------------------#
| TX2REG                  0x492 |
#-------------------------------#
| TX2REG_TXREG                  |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define TX2REG                                   0x0
#define TX2REG_address                           0x492
#define TX2REG_position                          0x0
#define TX2REG_size                              0x8
#define TX2REG_value_mask                        0xFF
#define TX2REG_clear_mask                        0x0

#define TX2REG_TXREG                             0x0
#define TX2REG_TXREG_address                     0x492
#define TX2REG_TXREG_position                    0x0
#define TX2REG_TXREG_size                        0x8
#define TX2REG_TXREG_value_mask                  0xFF
#define TX2REG_TXREG_clear_mask                  0x0


/*------------------------------#
| SP2BRGL                 0x493 |
#-------------------------------#
| SP2BRGL_SPBRGL                |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define SP2BRGL                                  0x0
#define SP2BRGL_address                          0x493
#define SP2BRGL_position                         0x0
#define SP2BRGL_size                             0x8
#define SP2BRGL_value_mask                       0xFF
#define SP2BRGL_clear_mask                       0x0

#define SP2BRGL_SPBRGL                           0x0
#define SP2BRGL_SPBRGL_address                   0x493
#define SP2BRGL_SPBRGL_position                  0x0
#define SP2BRGL_SPBRGL_size                      0x8
#define SP2BRGL_SPBRGL_value_mask                0xFF
#define SP2BRGL_SPBRGL_clear_mask                0x0


/*------------------------------#
| SP2BRGH                 0x494 |
#-------------------------------#
| SP2BRGH_SPBRGH                |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define SP2BRGH                                  0x0
#define SP2BRGH_address                          0x494
#define SP2BRGH_position                         0x0
#define SP2BRGH_size                             0x8
#define SP2BRGH_value_mask                       0xFF
#define SP2BRGH_clear_mask                       0x0

#define SP2BRGH_SPBRGH                           0x0
#define SP2BRGH_SPBRGH_address                   0x494
#define SP2BRGH_SPBRGH_position                  0x0
#define SP2BRGH_SPBRGH_size                      0x8
#define SP2BRGH_SPBRGH_value_mask                0xFF
#define SP2BRGH_SPBRGH_clear_mask                0x0


/*--------------------------------------------------------------------------------------------------------------#
| RC2STA                                                                                                  0x495 |
#---------------------------------------------------------------------------------------------------------------#
| RC2STA_SPEN | RC2STA_RX9 | RC2STA_SREN | RC2STA_CREN | RC2STA_ADDEN | RC2STA_FERR | RC2STA_OERR | RC2STA_RX9D |
#---------------------------------------------------------------------------------------------------------------#
| 7           | 6          | 5           | 4           | 3            | 2           | 1           | 0           |
#--------------------------------------------------------------------------------------------------------------*/

#define RC2STA                                   0x0
#define RC2STA_address                           0x495
#define RC2STA_position                          0x0
#define RC2STA_size                              0x8
#define RC2STA_value_mask                        0xFF
#define RC2STA_clear_mask                        0x0

#define RC2STA_RX9D                              0x0
#define RC2STA_RX9D_address                      0x495
#define RC2STA_RX9D_position                     0x0
#define RC2STA_RX9D_size                         0x1
#define RC2STA_RX9D_value_mask                   0x1
#define RC2STA_RX9D_clear_mask                   0xFE

#define RC2STA_OERR                              0x1
#define RC2STA_OERR_address                      0x495
#define RC2STA_OERR_position                     0x1
#define RC2STA_OERR_size                         0x1
#define RC2STA_OERR_value_mask                   0x2
#define RC2STA_OERR_clear_mask                   0xFD

#define RC2STA_FERR                              0x2
#define RC2STA_FERR_address                      0x495
#define RC2STA_FERR_position                     0x2
#define RC2STA_FERR_size                         0x1
#define RC2STA_FERR_value_mask                   0x4
#define RC2STA_FERR_clear_mask                   0xFB

#define RC2STA_ADDEN                             0x3
#define RC2STA_ADDEN_address                     0x495
#define RC2STA_ADDEN_position                    0x3
#define RC2STA_ADDEN_size                        0x1
#define RC2STA_ADDEN_value_mask                  0x8
#define RC2STA_ADDEN_clear_mask                  0xF7

#define RC2STA_CREN                              0x4
#define RC2STA_CREN_address                      0x495
#define RC2STA_CREN_position                     0x4
#define RC2STA_CREN_size                         0x1
#define RC2STA_CREN_value_mask                   0x10
#define RC2STA_CREN_clear_mask                   0xEF

#define RC2STA_SREN                              0x5
#define RC2STA_SREN_address                      0x495
#define RC2STA_SREN_position                     0x5
#define RC2STA_SREN_size                         0x1
#define RC2STA_SREN_value_mask                   0x20
#define RC2STA_SREN_clear_mask                   0xDF

#define RC2STA_RX9                               0x6
#define RC2STA_RX9_address                       0x495
#define RC2STA_RX9_position                      0x6
#define RC2STA_RX9_size                          0x1
#define RC2STA_RX9_value_mask                    0x40
#define RC2STA_RX9_clear_mask                    0xBF

#define RC2STA_SPEN                              0x7
#define RC2STA_SPEN_address                      0x495
#define RC2STA_SPEN_position                     0x7
#define RC2STA_SPEN_size                         0x1
#define RC2STA_SPEN_value_mask                   0x80
#define RC2STA_SPEN_clear_mask                   0x7F


/*--------------------------------------------------------------------------------------------------------------#
| TX2STA                                                                                                  0x496 |
#---------------------------------------------------------------------------------------------------------------#
| TX2STA_CSRC | TX2STA_TX9 | TX2STA_TXEN | TX2STA_SYNC | TX2STA_SENDB | TX2STA_BRGH | TX2STA_TRMT | TX2STA_TX9D |
#---------------------------------------------------------------------------------------------------------------#
| 7           | 6          | 5           | 4           | 3            | 2           | 1           | 0           |
#--------------------------------------------------------------------------------------------------------------*/

#define TX2STA                                   0x0
#define TX2STA_address                           0x496
#define TX2STA_position                          0x0
#define TX2STA_size                              0x8
#define TX2STA_value_mask                        0xFF
#define TX2STA_clear_mask                        0x0

#define TX2STA_TX9D                              0x0
#define TX2STA_TX9D_address                      0x496
#define TX2STA_TX9D_position                     0x0
#define TX2STA_TX9D_size                         0x1
#define TX2STA_TX9D_value_mask                   0x1
#define TX2STA_TX9D_clear_mask                   0xFE

#define TX2STA_TRMT                              0x1
#define TX2STA_TRMT_address                      0x496
#define TX2STA_TRMT_position                     0x1
#define TX2STA_TRMT_size                         0x1
#define TX2STA_TRMT_value_mask                   0x2
#define TX2STA_TRMT_clear_mask                   0xFD

#define TX2STA_BRGH                              0x2
#define TX2STA_BRGH_address                      0x496
#define TX2STA_BRGH_position                     0x2
#define TX2STA_BRGH_size                         0x1
#define TX2STA_BRGH_value_mask                   0x4
#define TX2STA_BRGH_clear_mask                   0xFB

#define TX2STA_SENDB                             0x3
#define TX2STA_SENDB_address                     0x496
#define TX2STA_SENDB_position                    0x3
#define TX2STA_SENDB_size                        0x1
#define TX2STA_SENDB_value_mask                  0x8
#define TX2STA_SENDB_clear_mask                  0xF7

#define TX2STA_SYNC                              0x4
#define TX2STA_SYNC_address                      0x496
#define TX2STA_SYNC_position                     0x4
#define TX2STA_SYNC_size                         0x1
#define TX2STA_SYNC_value_mask                   0x10
#define TX2STA_SYNC_clear_mask                   0xEF

#define TX2STA_TXEN                              0x5
#define TX2STA_TXEN_address                      0x496
#define TX2STA_TXEN_position                     0x5
#define TX2STA_TXEN_size                         0x1
#define TX2STA_TXEN_value_mask                   0x20
#define TX2STA_TXEN_clear_mask                   0xDF

#define TX2STA_TX9                               0x6
#define TX2STA_TX9_address                       0x496
#define TX2STA_TX9_position                      0x6
#define TX2STA_TX9_size                          0x1
#define TX2STA_TX9_value_mask                    0x40
#define TX2STA_TX9_clear_mask                    0xBF

#define TX2STA_CSRC                              0x7
#define TX2STA_CSRC_address                      0x496
#define TX2STA_CSRC_position                     0x7
#define TX2STA_CSRC_size                         0x1
#define TX2STA_CSRC_value_mask                   0x80
#define TX2STA_CSRC_clear_mask                   0x7F


/*----------------------------------------------------------------------------------------------------------#
| BAUD2CON                                                                                            0x497 |
#-----------------------------------------------------------------------------------------------------------#
| BAUD2CON_ABDOVF | BAUD2CON_RCIDL | - | BAUD2CON_SCKP | BAUD2CON_BRG16 | - | BAUD2CON_WUE | BAUD2CON_ABDEN |
#-----------------------------------------------------------------------------------------------------------#
| 7               | 6              | 5 | 4             | 3              | 2 | 1            | 0              |
#----------------------------------------------------------------------------------------------------------*/

#define BAUD2CON                                 0x0
#define BAUD2CON_address                         0x497
#define BAUD2CON_position                        0x0
#define BAUD2CON_size                            0x8
#define BAUD2CON_value_mask                      0xFF
#define BAUD2CON_clear_mask                      0x0

#define BAUD2CON_ABDEN                           0x0
#define BAUD2CON_ABDEN_address                   0x497
#define BAUD2CON_ABDEN_position                  0x0
#define BAUD2CON_ABDEN_size                      0x1
#define BAUD2CON_ABDEN_value_mask                0x1
#define BAUD2CON_ABDEN_clear_mask                0xFE

#define BAUD2CON_WUE                             0x1
#define BAUD2CON_WUE_address                     0x497
#define BAUD2CON_WUE_position                    0x1
#define BAUD2CON_WUE_size                        0x1
#define BAUD2CON_WUE_value_mask                  0x2
#define BAUD2CON_WUE_clear_mask                  0xFD

#define BAUD2CON_BRG16                           0x3
#define BAUD2CON_BRG16_address                   0x497
#define BAUD2CON_BRG16_position                  0x3
#define BAUD2CON_BRG16_size                      0x1
#define BAUD2CON_BRG16_value_mask                0x8
#define BAUD2CON_BRG16_clear_mask                0xF7

#define BAUD2CON_SCKP                            0x4
#define BAUD2CON_SCKP_address                    0x497
#define BAUD2CON_SCKP_position                   0x4
#define BAUD2CON_SCKP_size                       0x1
#define BAUD2CON_SCKP_value_mask                 0x10
#define BAUD2CON_SCKP_clear_mask                 0xEF

#define BAUD2CON_RCIDL                           0x6
#define BAUD2CON_RCIDL_address                   0x497
#define BAUD2CON_RCIDL_position                  0x6
#define BAUD2CON_RCIDL_size                      0x1
#define BAUD2CON_RCIDL_value_mask                0x40
#define BAUD2CON_RCIDL_clear_mask                0xBF

#define BAUD2CON_ABDOVF                          0x7
#define BAUD2CON_ABDOVF_address                  0x497
#define BAUD2CON_ABDOVF_position                 0x7
#define BAUD2CON_ABDOVF_size                     0x1
#define BAUD2CON_ABDOVF_value_mask               0x80
#define BAUD2CON_ABDOVF_clear_mask               0x7F


/*-----------------------------------------------------#
| LCDCON                                         0x791 |
#------------------------------------------------------#
| LCDEN | SLPEN | WERR | - | CS1 | CS0 | LMUX1 | LMUX0 |
#------------------------------------------------------#
| 7     | 6     | 5    | 4 | 3   | 2   | 1     | 0     |
#-----------------------------------------------------*/

#define LCDCON                                   0x0
#define LCDCON_address                           0x791
#define LCDCON_position                          0x0
#define LCDCON_size                              0x8
#define LCDCON_value_mask                        0xFF
#define LCDCON_clear_mask                        0x0

#define LMUX0                                    0x0
#define LMUX0_address                            0x791
#define LMUX0_position                           0x0
#define LMUX0_size                               0x1
#define LMUX0_value_mask                         0x1
#define LMUX0_clear_mask                         0xFE

#define LMUX                                     0x0
#define LMUX_address                             0x791
#define LMUX_position                            0x0
#define LMUX_size                                0x2
#define LMUX_value_mask                          0x3
#define LMUX_clear_mask                          0xFC

#define LMUX1                                    0x1
#define LMUX1_address                            0x791
#define LMUX1_position                           0x1
#define LMUX1_size                               0x1
#define LMUX1_value_mask                         0x2
#define LMUX1_clear_mask                         0xFD

#define CS                                       0x2
#define CS_address                               0x791
#define CS_position                              0x2
#define CS_size                                  0x2
#define CS_value_mask                            0xC
#define CS_clear_mask                            0xF3

#define CS0                                      0x2
#define CS0_address                              0x791
#define CS0_position                             0x2
#define CS0_size                                 0x1
#define CS0_value_mask                           0x4
#define CS0_clear_mask                           0xFB

#define CS1                                      0x3
#define CS1_address                              0x791
#define CS1_position                             0x3
#define CS1_size                                 0x1
#define CS1_value_mask                           0x8
#define CS1_clear_mask                           0xF7

#define WERR                                     0x5
#define WERR_address                             0x791
#define WERR_position                            0x5
#define WERR_size                                0x1
#define WERR_value_mask                          0x20
#define WERR_clear_mask                          0xDF

#define SLPEN                                    0x6
#define SLPEN_address                            0x791
#define SLPEN_position                           0x6
#define SLPEN_size                               0x1
#define SLPEN_value_mask                         0x40
#define SLPEN_clear_mask                         0xBF

#define LCDEN                                    0x7
#define LCDEN_address                            0x791
#define LCDEN_position                           0x7
#define LCDEN_size                               0x1
#define LCDEN_value_mask                         0x80
#define LCDEN_clear_mask                         0x7F


/*-------------------------------------------------#
| LCDPS                                      0x792 |
#--------------------------------------------------#
| WFT | BIASMD | LCDA | WA | LP3 | LP2 | LP1 | LP0 |
#--------------------------------------------------#
| 7   | 6      | 5    | 4  | 3   | 2   | 1   | 0   |
#-------------------------------------------------*/

#define LCDPS                                    0x0
#define LCDPS_address                            0x792
#define LCDPS_position                           0x0
#define LCDPS_size                               0x8
#define LCDPS_value_mask                         0xFF
#define LCDPS_clear_mask                         0x0

#define LP                                       0x0
#define LP_address                               0x792
#define LP_position                              0x0
#define LP_size                                  0x4
#define LP_value_mask                            0xF
#define LP_clear_mask                            0xF0

#define LP0                                      0x0
#define LP0_address                              0x792
#define LP0_position                             0x0
#define LP0_size                                 0x1
#define LP0_value_mask                           0x1
#define LP0_clear_mask                           0xFE

#define LP1                                      0x1
#define LP1_address                              0x792
#define LP1_position                             0x1
#define LP1_size                                 0x1
#define LP1_value_mask                           0x2
#define LP1_clear_mask                           0xFD

#define LP2                                      0x2
#define LP2_address                              0x792
#define LP2_position                             0x2
#define LP2_size                                 0x1
#define LP2_value_mask                           0x4
#define LP2_clear_mask                           0xFB

#define LP3                                      0x3
#define LP3_address                              0x792
#define LP3_position                             0x3
#define LP3_size                                 0x1
#define LP3_value_mask                           0x8
#define LP3_clear_mask                           0xF7

#define WA                                       0x4
#define WA_address                               0x792
#define WA_position                              0x4
#define WA_size                                  0x1
#define WA_value_mask                            0x10
#define WA_clear_mask                            0xEF

#define LCDA                                     0x5
#define LCDA_address                             0x792
#define LCDA_position                            0x5
#define LCDA_size                                0x1
#define LCDA_value_mask                          0x20
#define LCDA_clear_mask                          0xDF

#define BIASMD                                   0x6
#define BIASMD_address                           0x792
#define BIASMD_position                          0x6
#define BIASMD_size                              0x1
#define BIASMD_value_mask                        0x40
#define BIASMD_clear_mask                        0xBF

#define WFT                                      0x7
#define WFT_address                              0x792
#define WFT_position                             0x7
#define WFT_size                                 0x1
#define WFT_value_mask                           0x80
#define WFT_clear_mask                           0x7F


/*---------------------------------------------------------------#
| LCDREF                                                   0x793 |
#----------------------------------------------------------------#
| LCDIRE | LCDIRS | LCDIRI | - | VLCD3PE | VLCD2PE | VLCD1PE | - |
#----------------------------------------------------------------#
| 7      | 6      | 5      | 4 | 3       | 2       | 1       | 0 |
#---------------------------------------------------------------*/

#define LCDREF                                   0x0
#define LCDREF_address                           0x793
#define LCDREF_position                          0x0
#define LCDREF_size                              0x8
#define LCDREF_value_mask                        0xFF
#define LCDREF_clear_mask                        0x0

#define VLCD1PE                                  0x1
#define VLCD1PE_address                          0x793
#define VLCD1PE_position                         0x1
#define VLCD1PE_size                             0x1
#define VLCD1PE_value_mask                       0x2
#define VLCD1PE_clear_mask                       0xFD

#define VLCD2PE                                  0x2
#define VLCD2PE_address                          0x793
#define VLCD2PE_position                         0x2
#define VLCD2PE_size                             0x1
#define VLCD2PE_value_mask                       0x4
#define VLCD2PE_clear_mask                       0xFB

#define VLCD3PE                                  0x3
#define VLCD3PE_address                          0x793
#define VLCD3PE_position                         0x3
#define VLCD3PE_size                             0x1
#define VLCD3PE_value_mask                       0x8
#define VLCD3PE_clear_mask                       0xF7

#define LCDIRI                                   0x5
#define LCDIRI_address                           0x793
#define LCDIRI_position                          0x5
#define LCDIRI_size                              0x1
#define LCDIRI_value_mask                        0x20
#define LCDIRI_clear_mask                        0xDF

#define LCDIRS                                   0x6
#define LCDIRS_address                           0x793
#define LCDIRS_position                          0x6
#define LCDIRS_size                              0x1
#define LCDIRS_value_mask                        0x40
#define LCDIRS_clear_mask                        0xBF

#define LCDIRE                                   0x7
#define LCDIRE_address                           0x793
#define LCDIRE_position                          0x7
#define LCDIRE_size                              0x1
#define LCDIRE_value_mask                        0x80
#define LCDIRE_clear_mask                        0x7F


/*------------------------------------------------#
| LCDCST                                    0x794 |
#-------------------------------------------------#
| - | - | - | - | - | LCDCST2 | LCDCST1 | LCDCST0 |
#-------------------------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2       | 1       | 0       |
#------------------------------------------------*/

#define LCDCST0                                  0x0
#define LCDCST0_address                          0x794
#define LCDCST0_position                         0x0
#define LCDCST0_size                             0x1
#define LCDCST0_value_mask                       0x1
#define LCDCST0_clear_mask                       0xFE

#define LCDCST                                   0x0
#define LCDCST_address                           0x794
#define LCDCST_position                          0x0
#define LCDCST_size                              0x3
#define LCDCST_value_mask                        0x7
#define LCDCST_clear_mask                        0xF8

#define LCDCST1                                  0x1
#define LCDCST1_address                          0x794
#define LCDCST1_position                         0x1
#define LCDCST1_size                             0x1
#define LCDCST1_value_mask                       0x2
#define LCDCST1_clear_mask                       0xFD

#define LCDCST2                                  0x2
#define LCDCST2_address                          0x794
#define LCDCST2_position                         0x2
#define LCDCST2_size                             0x1
#define LCDCST2_value_mask                       0x4
#define LCDCST2_clear_mask                       0xFB


/*-----------------------------------------------------------------#
| LCDRL                                                      0x795 |
#------------------------------------------------------------------#
| LRLAP1 | LRLAP0 | LRLBP1 | LRLBP0 | - | LRLAT2 | LRLAT1 | LRLAT0 |
#------------------------------------------------------------------#
| 7      | 6      | 5      | 4      | 3 | 2      | 1      | 0      |
#-----------------------------------------------------------------*/

#define LCDRL                                    0x0
#define LCDRL_address                            0x795
#define LCDRL_position                           0x0
#define LCDRL_size                               0x8
#define LCDRL_value_mask                         0xFF
#define LCDRL_clear_mask                         0x0

#define LRLAT0                                   0x0
#define LRLAT0_address                           0x795
#define LRLAT0_position                          0x0
#define LRLAT0_size                              0x1
#define LRLAT0_value_mask                        0x1
#define LRLAT0_clear_mask                        0xFE

#define LRLAT                                    0x0
#define LRLAT_address                            0x795
#define LRLAT_position                           0x0
#define LRLAT_size                               0x3
#define LRLAT_value_mask                         0x7
#define LRLAT_clear_mask                         0xF8

#define LRLAT1                                   0x1
#define LRLAT1_address                           0x795
#define LRLAT1_position                          0x1
#define LRLAT1_size                              0x1
#define LRLAT1_value_mask                        0x2
#define LRLAT1_clear_mask                        0xFD

#define LRLAT2                                   0x2
#define LRLAT2_address                           0x795
#define LRLAT2_position                          0x2
#define LRLAT2_size                              0x1
#define LRLAT2_value_mask                        0x4
#define LRLAT2_clear_mask                        0xFB

#define LRLBP                                    0x4
#define LRLBP_address                            0x795
#define LRLBP_position                           0x4
#define LRLBP_size                               0x2
#define LRLBP_value_mask                         0x30
#define LRLBP_clear_mask                         0xCF

#define LRLBP0                                   0x4
#define LRLBP0_address                           0x795
#define LRLBP0_position                          0x4
#define LRLBP0_size                              0x1
#define LRLBP0_value_mask                        0x10
#define LRLBP0_clear_mask                        0xEF

#define LRLBP1                                   0x5
#define LRLBP1_address                           0x795
#define LRLBP1_position                          0x5
#define LRLBP1_size                              0x1
#define LRLBP1_value_mask                        0x20
#define LRLBP1_clear_mask                        0xDF

#define LRLAP0                                   0x6
#define LRLAP0_address                           0x795
#define LRLAP0_position                          0x6
#define LRLAP0_size                              0x1
#define LRLAP0_value_mask                        0x40
#define LRLAP0_clear_mask                        0xBF

#define LRLAP                                    0x6
#define LRLAP_address                            0x795
#define LRLAP_position                           0x6
#define LRLAP_size                               0x2
#define LRLAP_value_mask                         0xC0
#define LRLAP_clear_mask                         0x3F

#define LRLAP1                                   0x7
#define LRLAP1_address                           0x795
#define LRLAP1_position                          0x7
#define LRLAP1_size                              0x1
#define LRLAP1_value_mask                        0x80
#define LRLAP1_clear_mask                        0x7F


/*----------------------------------------------#
| LCDSE0                                  0x798 |
#-----------------------------------------------#
| SE7 | SE6 | SE5 | SE4 | SE3 | SE2 | SE1 | SE0 |
#-----------------------------------------------#
| 7   | 6   | 5   | 4   | 3   | 2   | 1   | 0   |
#----------------------------------------------*/

#define LCDSE0                                   0x0
#define LCDSE0_address                           0x798
#define LCDSE0_position                          0x0
#define LCDSE0_size                              0x8
#define LCDSE0_value_mask                        0xFF
#define LCDSE0_clear_mask                        0x0

#define SE0                                      0x0
#define SE0_address                              0x798
#define SE0_position                             0x0
#define SE0_size                                 0x1
#define SE0_value_mask                           0x1
#define SE0_clear_mask                           0xFE

#define SE1                                      0x1
#define SE1_address                              0x798
#define SE1_position                             0x1
#define SE1_size                                 0x1
#define SE1_value_mask                           0x2
#define SE1_clear_mask                           0xFD

#define SE2                                      0x2
#define SE2_address                              0x798
#define SE2_position                             0x2
#define SE2_size                                 0x1
#define SE2_value_mask                           0x4
#define SE2_clear_mask                           0xFB

#define SE3                                      0x3
#define SE3_address                              0x798
#define SE3_position                             0x3
#define SE3_size                                 0x1
#define SE3_value_mask                           0x8
#define SE3_clear_mask                           0xF7

#define SE4                                      0x4
#define SE4_address                              0x798
#define SE4_position                             0x4
#define SE4_size                                 0x1
#define SE4_value_mask                           0x10
#define SE4_clear_mask                           0xEF

#define SE5                                      0x5
#define SE5_address                              0x798
#define SE5_position                             0x5
#define SE5_size                                 0x1
#define SE5_value_mask                           0x20
#define SE5_clear_mask                           0xDF

#define SE6                                      0x6
#define SE6_address                              0x798
#define SE6_position                             0x6
#define SE6_size                                 0x1
#define SE6_value_mask                           0x40
#define SE6_clear_mask                           0xBF

#define SE7                                      0x7
#define SE7_address                              0x798
#define SE7_position                             0x7
#define SE7_size                                 0x1
#define SE7_value_mask                           0x80
#define SE7_clear_mask                           0x7F


/*----------------------------------------------------#
| LCDSE1                                        0x799 |
#-----------------------------------------------------#
| SE15 | SE14 | SE13 | SE12 | SE11 | SE10 | SE9 | SE8 |
#-----------------------------------------------------#
| 7    | 6    | 5    | 4    | 3    | 2    | 1   | 0   |
#----------------------------------------------------*/

#define LCDSE1                                   0x0
#define LCDSE1_address                           0x799
#define LCDSE1_position                          0x0
#define LCDSE1_size                              0x8
#define LCDSE1_value_mask                        0xFF
#define LCDSE1_clear_mask                        0x0

#define SE8                                      0x0
#define SE8_address                              0x799
#define SE8_position                             0x0
#define SE8_size                                 0x1
#define SE8_value_mask                           0x1
#define SE8_clear_mask                           0xFE

#define SE9                                      0x1
#define SE9_address                              0x799
#define SE9_position                             0x1
#define SE9_size                                 0x1
#define SE9_value_mask                           0x2
#define SE9_clear_mask                           0xFD

#define SE10                                     0x2
#define SE10_address                             0x799
#define SE10_position                            0x2
#define SE10_size                                0x1
#define SE10_value_mask                          0x4
#define SE10_clear_mask                          0xFB

#define SE11                                     0x3
#define SE11_address                             0x799
#define SE11_position                            0x3
#define SE11_size                                0x1
#define SE11_value_mask                          0x8
#define SE11_clear_mask                          0xF7

#define SE12                                     0x4
#define SE12_address                             0x799
#define SE12_position                            0x4
#define SE12_size                                0x1
#define SE12_value_mask                          0x10
#define SE12_clear_mask                          0xEF

#define SE13                                     0x5
#define SE13_address                             0x799
#define SE13_position                            0x5
#define SE13_size                                0x1
#define SE13_value_mask                          0x20
#define SE13_clear_mask                          0xDF

#define SE14                                     0x6
#define SE14_address                             0x799
#define SE14_position                            0x6
#define SE14_size                                0x1
#define SE14_value_mask                          0x40
#define SE14_clear_mask                          0xBF

#define SE15                                     0x7
#define SE15_address                             0x799
#define SE15_position                            0x7
#define SE15_size                                0x1
#define SE15_value_mask                          0x80
#define SE15_clear_mask                          0x7F


/*------------------------------------------------------#
| LCDSE2                                          0x79A |
#-------------------------------------------------------#
| SE23 | SE22 | SE21 | SE20 | SE19 | SE18 | SE17 | SE16 |
#-------------------------------------------------------#
| 7    | 6    | 5    | 4    | 3    | 2    | 1    | 0    |
#------------------------------------------------------*/

#define LCDSE2                                   0x0
#define LCDSE2_address                           0x79A
#define LCDSE2_position                          0x0
#define LCDSE2_size                              0x8
#define LCDSE2_value_mask                        0xFF
#define LCDSE2_clear_mask                        0x0

#define SE16                                     0x0
#define SE16_address                             0x79A
#define SE16_position                            0x0
#define SE16_size                                0x1
#define SE16_value_mask                          0x1
#define SE16_clear_mask                          0xFE

#define SE17                                     0x1
#define SE17_address                             0x79A
#define SE17_position                            0x1
#define SE17_size                                0x1
#define SE17_value_mask                          0x2
#define SE17_clear_mask                          0xFD

#define SE18                                     0x2
#define SE18_address                             0x79A
#define SE18_position                            0x2
#define SE18_size                                0x1
#define SE18_value_mask                          0x4
#define SE18_clear_mask                          0xFB

#define SE19                                     0x3
#define SE19_address                             0x79A
#define SE19_position                            0x3
#define SE19_size                                0x1
#define SE19_value_mask                          0x8
#define SE19_clear_mask                          0xF7

#define SE20                                     0x4
#define SE20_address                             0x79A
#define SE20_position                            0x4
#define SE20_size                                0x1
#define SE20_value_mask                          0x10
#define SE20_clear_mask                          0xEF

#define SE21                                     0x5
#define SE21_address                             0x79A
#define SE21_position                            0x5
#define SE21_size                                0x1
#define SE21_value_mask                          0x20
#define SE21_clear_mask                          0xDF

#define SE22                                     0x6
#define SE22_address                             0x79A
#define SE22_position                            0x6
#define SE22_size                                0x1
#define SE22_value_mask                          0x40
#define SE22_clear_mask                          0xBF

#define SE23                                     0x7
#define SE23_address                             0x79A
#define SE23_position                            0x7
#define SE23_size                                0x1
#define SE23_value_mask                          0x80
#define SE23_clear_mask                          0x7F


/*------------------------------------------------------#
| LCDSE3                                          0x79B |
#-------------------------------------------------------#
| SE31 | SE30 | SE29 | SE28 | SE27 | SE26 | SE25 | SE24 |
#-------------------------------------------------------#
| 7    | 6    | 5    | 4    | 3    | 2    | 1    | 0    |
#------------------------------------------------------*/

#define LCDSE3                                   0x0
#define LCDSE3_address                           0x79B
#define LCDSE3_position                          0x0
#define LCDSE3_size                              0x8
#define LCDSE3_value_mask                        0xFF
#define LCDSE3_clear_mask                        0x0

#define SE24                                     0x0
#define SE24_address                             0x79B
#define SE24_position                            0x0
#define SE24_size                                0x1
#define SE24_value_mask                          0x1
#define SE24_clear_mask                          0xFE

#define SE25                                     0x1
#define SE25_address                             0x79B
#define SE25_position                            0x1
#define SE25_size                                0x1
#define SE25_value_mask                          0x2
#define SE25_clear_mask                          0xFD

#define SE26                                     0x2
#define SE26_address                             0x79B
#define SE26_position                            0x2
#define SE26_size                                0x1
#define SE26_value_mask                          0x4
#define SE26_clear_mask                          0xFB

#define SE27                                     0x3
#define SE27_address                             0x79B
#define SE27_position                            0x3
#define SE27_size                                0x1
#define SE27_value_mask                          0x8
#define SE27_clear_mask                          0xF7

#define SE28                                     0x4
#define SE28_address                             0x79B
#define SE28_position                            0x4
#define SE28_size                                0x1
#define SE28_value_mask                          0x10
#define SE28_clear_mask                          0xEF

#define SE29                                     0x5
#define SE29_address                             0x79B
#define SE29_position                            0x5
#define SE29_size                                0x1
#define SE29_value_mask                          0x20
#define SE29_clear_mask                          0xDF

#define SE30                                     0x6
#define SE30_address                             0x79B
#define SE30_position                            0x6
#define SE30_size                                0x1
#define SE30_value_mask                          0x40
#define SE30_clear_mask                          0xBF

#define SE31                                     0x7
#define SE31_address                             0x79B
#define SE31_position                            0x7
#define SE31_size                                0x1
#define SE31_value_mask                          0x80
#define SE31_clear_mask                          0x7F


/*------------------------------------------------------#
| LCDSE4                                          0x79C |
#-------------------------------------------------------#
| SE39 | SE38 | SE37 | SE36 | SE35 | SE34 | SE33 | SE32 |
#-------------------------------------------------------#
| 7    | 6    | 5    | 4    | 3    | 2    | 1    | 0    |
#------------------------------------------------------*/

#define LCDSE4                                   0x0
#define LCDSE4_address                           0x79C
#define LCDSE4_position                          0x0
#define LCDSE4_size                              0x8
#define LCDSE4_value_mask                        0xFF
#define LCDSE4_clear_mask                        0x0

#define SE32                                     0x0
#define SE32_address                             0x79C
#define SE32_position                            0x0
#define SE32_size                                0x1
#define SE32_value_mask                          0x1
#define SE32_clear_mask                          0xFE

#define SE33                                     0x1
#define SE33_address                             0x79C
#define SE33_position                            0x1
#define SE33_size                                0x1
#define SE33_value_mask                          0x2
#define SE33_clear_mask                          0xFD

#define SE34                                     0x2
#define SE34_address                             0x79C
#define SE34_position                            0x2
#define SE34_size                                0x1
#define SE34_value_mask                          0x4
#define SE34_clear_mask                          0xFB

#define SE35                                     0x3
#define SE35_address                             0x79C
#define SE35_position                            0x3
#define SE35_size                                0x1
#define SE35_value_mask                          0x8
#define SE35_clear_mask                          0xF7

#define SE36                                     0x4
#define SE36_address                             0x79C
#define SE36_position                            0x4
#define SE36_size                                0x1
#define SE36_value_mask                          0x10
#define SE36_clear_mask                          0xEF

#define SE37                                     0x5
#define SE37_address                             0x79C
#define SE37_position                            0x5
#define SE37_size                                0x1
#define SE37_value_mask                          0x20
#define SE37_clear_mask                          0xDF

#define SE38                                     0x6
#define SE38_address                             0x79C
#define SE38_position                            0x6
#define SE38_size                                0x1
#define SE38_value_mask                          0x40
#define SE38_clear_mask                          0xBF

#define SE39                                     0x7
#define SE39_address                             0x79C
#define SE39_position                            0x7
#define SE39_size                                0x1
#define SE39_value_mask                          0x80
#define SE39_clear_mask                          0x7F


/*------------------------------------------------#
| LCDSE5                                    0x79D |
#-------------------------------------------------#
| - | - | SE45 | SE44 | SE43 | SE42 | SE41 | SE40 |
#-------------------------------------------------#
| 7 | 6 | 5    | 4    | 3    | 2    | 1    | 0    |
#------------------------------------------------*/

#define LCDSE5                                   0x0
#define LCDSE5_address                           0x79D
#define LCDSE5_position                          0x0
#define LCDSE5_size                              0x8
#define LCDSE5_value_mask                        0xFF
#define LCDSE5_clear_mask                        0x0

#define SE40                                     0x0
#define SE40_address                             0x79D
#define SE40_position                            0x0
#define SE40_size                                0x1
#define SE40_value_mask                          0x1
#define SE40_clear_mask                          0xFE

#define SE41                                     0x1
#define SE41_address                             0x79D
#define SE41_position                            0x1
#define SE41_size                                0x1
#define SE41_value_mask                          0x2
#define SE41_clear_mask                          0xFD

#define SE42                                     0x2
#define SE42_address                             0x79D
#define SE42_position                            0x2
#define SE42_size                                0x1
#define SE42_value_mask                          0x4
#define SE42_clear_mask                          0xFB

#define SE43                                     0x3
#define SE43_address                             0x79D
#define SE43_position                            0x3
#define SE43_size                                0x1
#define SE43_value_mask                          0x8
#define SE43_clear_mask                          0xF7

#define SE44                                     0x4
#define SE44_address                             0x79D
#define SE44_position                            0x4
#define SE44_size                                0x1
#define SE44_value_mask                          0x10
#define SE44_clear_mask                          0xEF

#define SE45                                     0x5
#define SE45_address                             0x79D
#define SE45_position                            0x5
#define SE45_size                                0x1
#define SE45_value_mask                          0x20
#define SE45_clear_mask                          0xDF


/*--------------------------------------------------------------------------------------#
| LCDDATA0                                                                        0x7A0 |
#---------------------------------------------------------------------------------------#
| SEG7COM0 | SEG6COM0 | SEG5COM0 | SEG4COM0 | SEG3COM0 | SEG2COM0 | SEG1COM0 | SEG0COM0 |
#---------------------------------------------------------------------------------------#
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
#--------------------------------------------------------------------------------------*/

#define LCDDATA0                                 0x0
#define LCDDATA0_address                         0x7A0
#define LCDDATA0_position                        0x0
#define LCDDATA0_size                            0x8
#define LCDDATA0_value_mask                      0xFF
#define LCDDATA0_clear_mask                      0x0

#define SEG0COM0                                 0x0
#define SEG0COM0_address                         0x7A0
#define SEG0COM0_position                        0x0
#define SEG0COM0_size                            0x1
#define SEG0COM0_value_mask                      0x1
#define SEG0COM0_clear_mask                      0xFE

#define SEG1COM0                                 0x1
#define SEG1COM0_address                         0x7A0
#define SEG1COM0_position                        0x1
#define SEG1COM0_size                            0x1
#define SEG1COM0_value_mask                      0x2
#define SEG1COM0_clear_mask                      0xFD

#define SEG2COM0                                 0x2
#define SEG2COM0_address                         0x7A0
#define SEG2COM0_position                        0x2
#define SEG2COM0_size                            0x1
#define SEG2COM0_value_mask                      0x4
#define SEG2COM0_clear_mask                      0xFB

#define SEG3COM0                                 0x3
#define SEG3COM0_address                         0x7A0
#define SEG3COM0_position                        0x3
#define SEG3COM0_size                            0x1
#define SEG3COM0_value_mask                      0x8
#define SEG3COM0_clear_mask                      0xF7

#define SEG4COM0                                 0x4
#define SEG4COM0_address                         0x7A0
#define SEG4COM0_position                        0x4
#define SEG4COM0_size                            0x1
#define SEG4COM0_value_mask                      0x10
#define SEG4COM0_clear_mask                      0xEF

#define SEG5COM0                                 0x5
#define SEG5COM0_address                         0x7A0
#define SEG5COM0_position                        0x5
#define SEG5COM0_size                            0x1
#define SEG5COM0_value_mask                      0x20
#define SEG5COM0_clear_mask                      0xDF

#define SEG6COM0                                 0x6
#define SEG6COM0_address                         0x7A0
#define SEG6COM0_position                        0x6
#define SEG6COM0_size                            0x1
#define SEG6COM0_value_mask                      0x40
#define SEG6COM0_clear_mask                      0xBF

#define SEG7COM0                                 0x7
#define SEG7COM0_address                         0x7A0
#define SEG7COM0_position                        0x7
#define SEG7COM0_size                            0x1
#define SEG7COM0_value_mask                      0x80
#define SEG7COM0_clear_mask                      0x7F


/*--------------------------------------------------------------------------------------------#
| LCDDATA1                                                                              0x7A1 |
#---------------------------------------------------------------------------------------------#
| SEG15COM0 | SEG14COM0 | SEG13COM0 | SEG12COM0 | SEG11COM0 | SEG10COM0 | SEG9COM0 | SEG8COM0 |
#---------------------------------------------------------------------------------------------#
| 7         | 6         | 5         | 4         | 3         | 2         | 1        | 0        |
#--------------------------------------------------------------------------------------------*/

#define LCDDATA1                                 0x0
#define LCDDATA1_address                         0x7A1
#define LCDDATA1_position                        0x0
#define LCDDATA1_size                            0x8
#define LCDDATA1_value_mask                      0xFF
#define LCDDATA1_clear_mask                      0x0

#define SEG8COM0                                 0x0
#define SEG8COM0_address                         0x7A1
#define SEG8COM0_position                        0x0
#define SEG8COM0_size                            0x1
#define SEG8COM0_value_mask                      0x1
#define SEG8COM0_clear_mask                      0xFE

#define SEG9COM0                                 0x1
#define SEG9COM0_address                         0x7A1
#define SEG9COM0_position                        0x1
#define SEG9COM0_size                            0x1
#define SEG9COM0_value_mask                      0x2
#define SEG9COM0_clear_mask                      0xFD

#define SEG10COM0                                0x2
#define SEG10COM0_address                        0x7A1
#define SEG10COM0_position                       0x2
#define SEG10COM0_size                           0x1
#define SEG10COM0_value_mask                     0x4
#define SEG10COM0_clear_mask                     0xFB

#define SEG11COM0                                0x3
#define SEG11COM0_address                        0x7A1
#define SEG11COM0_position                       0x3
#define SEG11COM0_size                           0x1
#define SEG11COM0_value_mask                     0x8
#define SEG11COM0_clear_mask                     0xF7

#define SEG12COM0                                0x4
#define SEG12COM0_address                        0x7A1
#define SEG12COM0_position                       0x4
#define SEG12COM0_size                           0x1
#define SEG12COM0_value_mask                     0x10
#define SEG12COM0_clear_mask                     0xEF

#define SEG13COM0                                0x5
#define SEG13COM0_address                        0x7A1
#define SEG13COM0_position                       0x5
#define SEG13COM0_size                           0x1
#define SEG13COM0_value_mask                     0x20
#define SEG13COM0_clear_mask                     0xDF

#define SEG14COM0                                0x6
#define SEG14COM0_address                        0x7A1
#define SEG14COM0_position                       0x6
#define SEG14COM0_size                           0x1
#define SEG14COM0_value_mask                     0x40
#define SEG14COM0_clear_mask                     0xBF

#define SEG15COM0                                0x7
#define SEG15COM0_address                        0x7A1
#define SEG15COM0_position                       0x7
#define SEG15COM0_size                           0x1
#define SEG15COM0_value_mask                     0x80
#define SEG15COM0_clear_mask                     0x7F


/*----------------------------------------------------------------------------------------------#
| LCDDATA2                                                                                0x7A2 |
#-----------------------------------------------------------------------------------------------#
| SEG23COM0 | SEG22COM0 | SEG21COM0 | SEG20COM0 | SEG19COM0 | SEG18COM0 | SEG17COM0 | SEG16COM0 |
#-----------------------------------------------------------------------------------------------#
| 7         | 6         | 5         | 4         | 3         | 2         | 1         | 0         |
#----------------------------------------------------------------------------------------------*/

#define LCDDATA2                                 0x0
#define LCDDATA2_address                         0x7A2
#define LCDDATA2_position                        0x0
#define LCDDATA2_size                            0x8
#define LCDDATA2_value_mask                      0xFF
#define LCDDATA2_clear_mask                      0x0

#define SEG16COM0                                0x0
#define SEG16COM0_address                        0x7A2
#define SEG16COM0_position                       0x0
#define SEG16COM0_size                           0x1
#define SEG16COM0_value_mask                     0x1
#define SEG16COM0_clear_mask                     0xFE

#define SEG17COM0                                0x1
#define SEG17COM0_address                        0x7A2
#define SEG17COM0_position                       0x1
#define SEG17COM0_size                           0x1
#define SEG17COM0_value_mask                     0x2
#define SEG17COM0_clear_mask                     0xFD

#define SEG18COM0                                0x2
#define SEG18COM0_address                        0x7A2
#define SEG18COM0_position                       0x2
#define SEG18COM0_size                           0x1
#define SEG18COM0_value_mask                     0x4
#define SEG18COM0_clear_mask                     0xFB

#define SEG19COM0                                0x3
#define SEG19COM0_address                        0x7A2
#define SEG19COM0_position                       0x3
#define SEG19COM0_size                           0x1
#define SEG19COM0_value_mask                     0x8
#define SEG19COM0_clear_mask                     0xF7

#define SEG20COM0                                0x4
#define SEG20COM0_address                        0x7A2
#define SEG20COM0_position                       0x4
#define SEG20COM0_size                           0x1
#define SEG20COM0_value_mask                     0x10
#define SEG20COM0_clear_mask                     0xEF

#define SEG21COM0                                0x5
#define SEG21COM0_address                        0x7A2
#define SEG21COM0_position                       0x5
#define SEG21COM0_size                           0x1
#define SEG21COM0_value_mask                     0x20
#define SEG21COM0_clear_mask                     0xDF

#define SEG22COM0                                0x6
#define SEG22COM0_address                        0x7A2
#define SEG22COM0_position                       0x6
#define SEG22COM0_size                           0x1
#define SEG22COM0_value_mask                     0x40
#define SEG22COM0_clear_mask                     0xBF

#define SEG23COM0                                0x7
#define SEG23COM0_address                        0x7A2
#define SEG23COM0_position                       0x7
#define SEG23COM0_size                           0x1
#define SEG23COM0_value_mask                     0x80
#define SEG23COM0_clear_mask                     0x7F


/*--------------------------------------------------------------------------------------#
| LCDDATA3                                                                        0x7A3 |
#---------------------------------------------------------------------------------------#
| SEG7COM1 | SEG6COM1 | SEG5COM1 | SEG4COM1 | SEG3COM1 | SEG2COM1 | SEG1COM1 | SEG0COM1 |
#---------------------------------------------------------------------------------------#
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
#--------------------------------------------------------------------------------------*/

#define LCDDATA3                                 0x0
#define LCDDATA3_address                         0x7A3
#define LCDDATA3_position                        0x0
#define LCDDATA3_size                            0x8
#define LCDDATA3_value_mask                      0xFF
#define LCDDATA3_clear_mask                      0x0

#define SEG0COM1                                 0x0
#define SEG0COM1_address                         0x7A3
#define SEG0COM1_position                        0x0
#define SEG0COM1_size                            0x1
#define SEG0COM1_value_mask                      0x1
#define SEG0COM1_clear_mask                      0xFE

#define SEG1COM1                                 0x1
#define SEG1COM1_address                         0x7A3
#define SEG1COM1_position                        0x1
#define SEG1COM1_size                            0x1
#define SEG1COM1_value_mask                      0x2
#define SEG1COM1_clear_mask                      0xFD

#define SEG2COM1                                 0x2
#define SEG2COM1_address                         0x7A3
#define SEG2COM1_position                        0x2
#define SEG2COM1_size                            0x1
#define SEG2COM1_value_mask                      0x4
#define SEG2COM1_clear_mask                      0xFB

#define SEG3COM1                                 0x3
#define SEG3COM1_address                         0x7A3
#define SEG3COM1_position                        0x3
#define SEG3COM1_size                            0x1
#define SEG3COM1_value_mask                      0x8
#define SEG3COM1_clear_mask                      0xF7

#define SEG4COM1                                 0x4
#define SEG4COM1_address                         0x7A3
#define SEG4COM1_position                        0x4
#define SEG4COM1_size                            0x1
#define SEG4COM1_value_mask                      0x10
#define SEG4COM1_clear_mask                      0xEF

#define SEG5COM1                                 0x5
#define SEG5COM1_address                         0x7A3
#define SEG5COM1_position                        0x5
#define SEG5COM1_size                            0x1
#define SEG5COM1_value_mask                      0x20
#define SEG5COM1_clear_mask                      0xDF

#define SEG6COM1                                 0x6
#define SEG6COM1_address                         0x7A3
#define SEG6COM1_position                        0x6
#define SEG6COM1_size                            0x1
#define SEG6COM1_value_mask                      0x40
#define SEG6COM1_clear_mask                      0xBF

#define SEG7COM1                                 0x7
#define SEG7COM1_address                         0x7A3
#define SEG7COM1_position                        0x7
#define SEG7COM1_size                            0x1
#define SEG7COM1_value_mask                      0x80
#define SEG7COM1_clear_mask                      0x7F


/*--------------------------------------------------------------------------------------------#
| LCDDATA4                                                                              0x7A4 |
#---------------------------------------------------------------------------------------------#
| SEG15COM1 | SEG14COM1 | SEG13COM1 | SEG12COM1 | SEG11COM1 | SEG10COM1 | SEG9COM1 | SEG8COM1 |
#---------------------------------------------------------------------------------------------#
| 7         | 6         | 5         | 4         | 3         | 2         | 1        | 0        |
#--------------------------------------------------------------------------------------------*/

#define LCDDATA4                                 0x0
#define LCDDATA4_address                         0x7A4
#define LCDDATA4_position                        0x0
#define LCDDATA4_size                            0x8
#define LCDDATA4_value_mask                      0xFF
#define LCDDATA4_clear_mask                      0x0

#define SEG8COM1                                 0x0
#define SEG8COM1_address                         0x7A4
#define SEG8COM1_position                        0x0
#define SEG8COM1_size                            0x1
#define SEG8COM1_value_mask                      0x1
#define SEG8COM1_clear_mask                      0xFE

#define SEG9COM1                                 0x1
#define SEG9COM1_address                         0x7A4
#define SEG9COM1_position                        0x1
#define SEG9COM1_size                            0x1
#define SEG9COM1_value_mask                      0x2
#define SEG9COM1_clear_mask                      0xFD

#define SEG10COM1                                0x2
#define SEG10COM1_address                        0x7A4
#define SEG10COM1_position                       0x2
#define SEG10COM1_size                           0x1
#define SEG10COM1_value_mask                     0x4
#define SEG10COM1_clear_mask                     0xFB

#define SEG11COM1                                0x3
#define SEG11COM1_address                        0x7A4
#define SEG11COM1_position                       0x3
#define SEG11COM1_size                           0x1
#define SEG11COM1_value_mask                     0x8
#define SEG11COM1_clear_mask                     0xF7

#define SEG12COM1                                0x4
#define SEG12COM1_address                        0x7A4
#define SEG12COM1_position                       0x4
#define SEG12COM1_size                           0x1
#define SEG12COM1_value_mask                     0x10
#define SEG12COM1_clear_mask                     0xEF

#define SEG13COM1                                0x5
#define SEG13COM1_address                        0x7A4
#define SEG13COM1_position                       0x5
#define SEG13COM1_size                           0x1
#define SEG13COM1_value_mask                     0x20
#define SEG13COM1_clear_mask                     0xDF

#define SEG14COM1                                0x6
#define SEG14COM1_address                        0x7A4
#define SEG14COM1_position                       0x6
#define SEG14COM1_size                           0x1
#define SEG14COM1_value_mask                     0x40
#define SEG14COM1_clear_mask                     0xBF

#define SEG15COM1                                0x7
#define SEG15COM1_address                        0x7A4
#define SEG15COM1_position                       0x7
#define SEG15COM1_size                           0x1
#define SEG15COM1_value_mask                     0x80
#define SEG15COM1_clear_mask                     0x7F


/*----------------------------------------------------------------------------------------------#
| LCDDATA5                                                                                0x7A5 |
#-----------------------------------------------------------------------------------------------#
| SEG23COM1 | SEG22COM1 | SEG21COM1 | SEG20COM1 | SEG19COM1 | SEG18COM1 | SEG17COM1 | SEG16COM1 |
#-----------------------------------------------------------------------------------------------#
| 7         | 6         | 5         | 4         | 3         | 2         | 1         | 0         |
#----------------------------------------------------------------------------------------------*/

#define LCDDATA5                                 0x0
#define LCDDATA5_address                         0x7A5
#define LCDDATA5_position                        0x0
#define LCDDATA5_size                            0x8
#define LCDDATA5_value_mask                      0xFF
#define LCDDATA5_clear_mask                      0x0

#define SEG16COM1                                0x0
#define SEG16COM1_address                        0x7A5
#define SEG16COM1_position                       0x0
#define SEG16COM1_size                           0x1
#define SEG16COM1_value_mask                     0x1
#define SEG16COM1_clear_mask                     0xFE

#define SEG17COM1                                0x1
#define SEG17COM1_address                        0x7A5
#define SEG17COM1_position                       0x1
#define SEG17COM1_size                           0x1
#define SEG17COM1_value_mask                     0x2
#define SEG17COM1_clear_mask                     0xFD

#define SEG18COM1                                0x2
#define SEG18COM1_address                        0x7A5
#define SEG18COM1_position                       0x2
#define SEG18COM1_size                           0x1
#define SEG18COM1_value_mask                     0x4
#define SEG18COM1_clear_mask                     0xFB

#define SEG19COM1                                0x3
#define SEG19COM1_address                        0x7A5
#define SEG19COM1_position                       0x3
#define SEG19COM1_size                           0x1
#define SEG19COM1_value_mask                     0x8
#define SEG19COM1_clear_mask                     0xF7

#define SEG20COM1                                0x4
#define SEG20COM1_address                        0x7A5
#define SEG20COM1_position                       0x4
#define SEG20COM1_size                           0x1
#define SEG20COM1_value_mask                     0x10
#define SEG20COM1_clear_mask                     0xEF

#define SEG21COM1                                0x5
#define SEG21COM1_address                        0x7A5
#define SEG21COM1_position                       0x5
#define SEG21COM1_size                           0x1
#define SEG21COM1_value_mask                     0x20
#define SEG21COM1_clear_mask                     0xDF

#define SEG22COM1                                0x6
#define SEG22COM1_address                        0x7A5
#define SEG22COM1_position                       0x6
#define SEG22COM1_size                           0x1
#define SEG22COM1_value_mask                     0x40
#define SEG22COM1_clear_mask                     0xBF

#define SEG23COM1                                0x7
#define SEG23COM1_address                        0x7A5
#define SEG23COM1_position                       0x7
#define SEG23COM1_size                           0x1
#define SEG23COM1_value_mask                     0x80
#define SEG23COM1_clear_mask                     0x7F


/*--------------------------------------------------------------------------------------#
| LCDDATA6                                                                        0x7A6 |
#---------------------------------------------------------------------------------------#
| SEG7COM2 | SEG6COM2 | SEG5COM2 | SEG4COM2 | SEG3COM2 | SEG2COM2 | SEG1COM2 | SEG0COM2 |
#---------------------------------------------------------------------------------------#
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
#--------------------------------------------------------------------------------------*/

#define LCDDATA6                                 0x0
#define LCDDATA6_address                         0x7A6
#define LCDDATA6_position                        0x0
#define LCDDATA6_size                            0x8
#define LCDDATA6_value_mask                      0xFF
#define LCDDATA6_clear_mask                      0x0

#define SEG0COM2                                 0x0
#define SEG0COM2_address                         0x7A6
#define SEG0COM2_position                        0x0
#define SEG0COM2_size                            0x1
#define SEG0COM2_value_mask                      0x1
#define SEG0COM2_clear_mask                      0xFE

#define SEG1COM2                                 0x1
#define SEG1COM2_address                         0x7A6
#define SEG1COM2_position                        0x1
#define SEG1COM2_size                            0x1
#define SEG1COM2_value_mask                      0x2
#define SEG1COM2_clear_mask                      0xFD

#define SEG2COM2                                 0x2
#define SEG2COM2_address                         0x7A6
#define SEG2COM2_position                        0x2
#define SEG2COM2_size                            0x1
#define SEG2COM2_value_mask                      0x4
#define SEG2COM2_clear_mask                      0xFB

#define SEG3COM2                                 0x3
#define SEG3COM2_address                         0x7A6
#define SEG3COM2_position                        0x3
#define SEG3COM2_size                            0x1
#define SEG3COM2_value_mask                      0x8
#define SEG3COM2_clear_mask                      0xF7

#define SEG4COM2                                 0x4
#define SEG4COM2_address                         0x7A6
#define SEG4COM2_position                        0x4
#define SEG4COM2_size                            0x1
#define SEG4COM2_value_mask                      0x10
#define SEG4COM2_clear_mask                      0xEF

#define SEG5COM2                                 0x5
#define SEG5COM2_address                         0x7A6
#define SEG5COM2_position                        0x5
#define SEG5COM2_size                            0x1
#define SEG5COM2_value_mask                      0x20
#define SEG5COM2_clear_mask                      0xDF

#define SEG6COM2                                 0x6
#define SEG6COM2_address                         0x7A6
#define SEG6COM2_position                        0x6
#define SEG6COM2_size                            0x1
#define SEG6COM2_value_mask                      0x40
#define SEG6COM2_clear_mask                      0xBF

#define SEG7COM2                                 0x7
#define SEG7COM2_address                         0x7A6
#define SEG7COM2_position                        0x7
#define SEG7COM2_size                            0x1
#define SEG7COM2_value_mask                      0x80
#define SEG7COM2_clear_mask                      0x7F


/*--------------------------------------------------------------------------------------------#
| LCDDATA7                                                                              0x7A7 |
#---------------------------------------------------------------------------------------------#
| SEG15COM2 | SEG14COM2 | SEG13COM2 | SEG12COM2 | SEG11COM2 | SEG10COM2 | SEG9COM2 | SEG8COM2 |
#---------------------------------------------------------------------------------------------#
| 7         | 6         | 5         | 4         | 3         | 2         | 1        | 0        |
#--------------------------------------------------------------------------------------------*/

#define LCDDATA7                                 0x0
#define LCDDATA7_address                         0x7A7
#define LCDDATA7_position                        0x0
#define LCDDATA7_size                            0x8
#define LCDDATA7_value_mask                      0xFF
#define LCDDATA7_clear_mask                      0x0

#define SEG8COM2                                 0x0
#define SEG8COM2_address                         0x7A7
#define SEG8COM2_position                        0x0
#define SEG8COM2_size                            0x1
#define SEG8COM2_value_mask                      0x1
#define SEG8COM2_clear_mask                      0xFE

#define SEG9COM2                                 0x1
#define SEG9COM2_address                         0x7A7
#define SEG9COM2_position                        0x1
#define SEG9COM2_size                            0x1
#define SEG9COM2_value_mask                      0x2
#define SEG9COM2_clear_mask                      0xFD

#define SEG10COM2                                0x2
#define SEG10COM2_address                        0x7A7
#define SEG10COM2_position                       0x2
#define SEG10COM2_size                           0x1
#define SEG10COM2_value_mask                     0x4
#define SEG10COM2_clear_mask                     0xFB

#define SEG11COM2                                0x3
#define SEG11COM2_address                        0x7A7
#define SEG11COM2_position                       0x3
#define SEG11COM2_size                           0x1
#define SEG11COM2_value_mask                     0x8
#define SEG11COM2_clear_mask                     0xF7

#define SEG12COM2                                0x4
#define SEG12COM2_address                        0x7A7
#define SEG12COM2_position                       0x4
#define SEG12COM2_size                           0x1
#define SEG12COM2_value_mask                     0x10
#define SEG12COM2_clear_mask                     0xEF

#define SEG13COM2                                0x5
#define SEG13COM2_address                        0x7A7
#define SEG13COM2_position                       0x5
#define SEG13COM2_size                           0x1
#define SEG13COM2_value_mask                     0x20
#define SEG13COM2_clear_mask                     0xDF

#define SEG14COM2                                0x6
#define SEG14COM2_address                        0x7A7
#define SEG14COM2_position                       0x6
#define SEG14COM2_size                           0x1
#define SEG14COM2_value_mask                     0x40
#define SEG14COM2_clear_mask                     0xBF

#define SEG15COM2                                0x7
#define SEG15COM2_address                        0x7A7
#define SEG15COM2_position                       0x7
#define SEG15COM2_size                           0x1
#define SEG15COM2_value_mask                     0x80
#define SEG15COM2_clear_mask                     0x7F


/*----------------------------------------------------------------------------------------------#
| LCDDATA8                                                                                0x7A8 |
#-----------------------------------------------------------------------------------------------#
| SEG23COM2 | SEG22COM2 | SEG21COM2 | SEG20COM2 | SEG19COM2 | SEG18COM2 | SEG17COM2 | SEG16COM2 |
#-----------------------------------------------------------------------------------------------#
| 7         | 6         | 5         | 4         | 3         | 2         | 1         | 0         |
#----------------------------------------------------------------------------------------------*/

#define LCDDATA8                                 0x0
#define LCDDATA8_address                         0x7A8
#define LCDDATA8_position                        0x0
#define LCDDATA8_size                            0x8
#define LCDDATA8_value_mask                      0xFF
#define LCDDATA8_clear_mask                      0x0

#define SEG16COM2                                0x0
#define SEG16COM2_address                        0x7A8
#define SEG16COM2_position                       0x0
#define SEG16COM2_size                           0x1
#define SEG16COM2_value_mask                     0x1
#define SEG16COM2_clear_mask                     0xFE

#define SEG17COM2                                0x1
#define SEG17COM2_address                        0x7A8
#define SEG17COM2_position                       0x1
#define SEG17COM2_size                           0x1
#define SEG17COM2_value_mask                     0x2
#define SEG17COM2_clear_mask                     0xFD

#define SEG18COM2                                0x2
#define SEG18COM2_address                        0x7A8
#define SEG18COM2_position                       0x2
#define SEG18COM2_size                           0x1
#define SEG18COM2_value_mask                     0x4
#define SEG18COM2_clear_mask                     0xFB

#define SEG19COM2                                0x3
#define SEG19COM2_address                        0x7A8
#define SEG19COM2_position                       0x3
#define SEG19COM2_size                           0x1
#define SEG19COM2_value_mask                     0x8
#define SEG19COM2_clear_mask                     0xF7

#define SEG20COM2                                0x4
#define SEG20COM2_address                        0x7A8
#define SEG20COM2_position                       0x4
#define SEG20COM2_size                           0x1
#define SEG20COM2_value_mask                     0x10
#define SEG20COM2_clear_mask                     0xEF

#define SEG21COM2                                0x5
#define SEG21COM2_address                        0x7A8
#define SEG21COM2_position                       0x5
#define SEG21COM2_size                           0x1
#define SEG21COM2_value_mask                     0x20
#define SEG21COM2_clear_mask                     0xDF

#define SEG22COM2                                0x6
#define SEG22COM2_address                        0x7A8
#define SEG22COM2_position                       0x6
#define SEG22COM2_size                           0x1
#define SEG22COM2_value_mask                     0x40
#define SEG22COM2_clear_mask                     0xBF

#define SEG23COM2                                0x7
#define SEG23COM2_address                        0x7A8
#define SEG23COM2_position                       0x7
#define SEG23COM2_size                           0x1
#define SEG23COM2_value_mask                     0x80
#define SEG23COM2_clear_mask                     0x7F


/*--------------------------------------------------------------------------------------#
| LCDDATA9                                                                        0x7A9 |
#---------------------------------------------------------------------------------------#
| SEG7COM3 | SEG6COM3 | SEG5COM3 | SEG4COM3 | SEG3COM3 | SEG2COM3 | SEG1COM3 | SEG0COM3 |
#---------------------------------------------------------------------------------------#
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
#--------------------------------------------------------------------------------------*/

#define LCDDATA9                                 0x0
#define LCDDATA9_address                         0x7A9
#define LCDDATA9_position                        0x0
#define LCDDATA9_size                            0x8
#define LCDDATA9_value_mask                      0xFF
#define LCDDATA9_clear_mask                      0x0

#define SEG0COM3                                 0x0
#define SEG0COM3_address                         0x7A9
#define SEG0COM3_position                        0x0
#define SEG0COM3_size                            0x1
#define SEG0COM3_value_mask                      0x1
#define SEG0COM3_clear_mask                      0xFE

#define SEG1COM3                                 0x1
#define SEG1COM3_address                         0x7A9
#define SEG1COM3_position                        0x1
#define SEG1COM3_size                            0x1
#define SEG1COM3_value_mask                      0x2
#define SEG1COM3_clear_mask                      0xFD

#define SEG2COM3                                 0x2
#define SEG2COM3_address                         0x7A9
#define SEG2COM3_position                        0x2
#define SEG2COM3_size                            0x1
#define SEG2COM3_value_mask                      0x4
#define SEG2COM3_clear_mask                      0xFB

#define SEG3COM3                                 0x3
#define SEG3COM3_address                         0x7A9
#define SEG3COM3_position                        0x3
#define SEG3COM3_size                            0x1
#define SEG3COM3_value_mask                      0x8
#define SEG3COM3_clear_mask                      0xF7

#define SEG4COM3                                 0x4
#define SEG4COM3_address                         0x7A9
#define SEG4COM3_position                        0x4
#define SEG4COM3_size                            0x1
#define SEG4COM3_value_mask                      0x10
#define SEG4COM3_clear_mask                      0xEF

#define SEG5COM3                                 0x5
#define SEG5COM3_address                         0x7A9
#define SEG5COM3_position                        0x5
#define SEG5COM3_size                            0x1
#define SEG5COM3_value_mask                      0x20
#define SEG5COM3_clear_mask                      0xDF

#define SEG6COM3                                 0x6
#define SEG6COM3_address                         0x7A9
#define SEG6COM3_position                        0x6
#define SEG6COM3_size                            0x1
#define SEG6COM3_value_mask                      0x40
#define SEG6COM3_clear_mask                      0xBF

#define SEG7COM3                                 0x7
#define SEG7COM3_address                         0x7A9
#define SEG7COM3_position                        0x7
#define SEG7COM3_size                            0x1
#define SEG7COM3_value_mask                      0x80
#define SEG7COM3_clear_mask                      0x7F


/*--------------------------------------------------------------------------------------------#
| LCDDATA10                                                                             0x7AA |
#---------------------------------------------------------------------------------------------#
| SEG15COM3 | SEG14COM3 | SEG13COM3 | SEG12COM3 | SEG11COM3 | SEG10COM3 | SEG9COM3 | SEG8COM3 |
#---------------------------------------------------------------------------------------------#
| 7         | 6         | 5         | 4         | 3         | 2         | 1        | 0        |
#--------------------------------------------------------------------------------------------*/

#define LCDDATA10                                0x0
#define LCDDATA10_address                        0x7AA
#define LCDDATA10_position                       0x0
#define LCDDATA10_size                           0x8
#define LCDDATA10_value_mask                     0xFF
#define LCDDATA10_clear_mask                     0x0

#define SEG8COM3                                 0x0
#define SEG8COM3_address                         0x7AA
#define SEG8COM3_position                        0x0
#define SEG8COM3_size                            0x1
#define SEG8COM3_value_mask                      0x1
#define SEG8COM3_clear_mask                      0xFE

#define SEG9COM3                                 0x1
#define SEG9COM3_address                         0x7AA
#define SEG9COM3_position                        0x1
#define SEG9COM3_size                            0x1
#define SEG9COM3_value_mask                      0x2
#define SEG9COM3_clear_mask                      0xFD

#define SEG10COM3                                0x2
#define SEG10COM3_address                        0x7AA
#define SEG10COM3_position                       0x2
#define SEG10COM3_size                           0x1
#define SEG10COM3_value_mask                     0x4
#define SEG10COM3_clear_mask                     0xFB

#define SEG11COM3                                0x3
#define SEG11COM3_address                        0x7AA
#define SEG11COM3_position                       0x3
#define SEG11COM3_size                           0x1
#define SEG11COM3_value_mask                     0x8
#define SEG11COM3_clear_mask                     0xF7

#define SEG12COM3                                0x4
#define SEG12COM3_address                        0x7AA
#define SEG12COM3_position                       0x4
#define SEG12COM3_size                           0x1
#define SEG12COM3_value_mask                     0x10
#define SEG12COM3_clear_mask                     0xEF

#define SEG13COM3                                0x5
#define SEG13COM3_address                        0x7AA
#define SEG13COM3_position                       0x5
#define SEG13COM3_size                           0x1
#define SEG13COM3_value_mask                     0x20
#define SEG13COM3_clear_mask                     0xDF

#define SEG14COM3                                0x6
#define SEG14COM3_address                        0x7AA
#define SEG14COM3_position                       0x6
#define SEG14COM3_size                           0x1
#define SEG14COM3_value_mask                     0x40
#define SEG14COM3_clear_mask                     0xBF

#define SEG15COM3                                0x7
#define SEG15COM3_address                        0x7AA
#define SEG15COM3_position                       0x7
#define SEG15COM3_size                           0x1
#define SEG15COM3_value_mask                     0x80
#define SEG15COM3_clear_mask                     0x7F


/*----------------------------------------------------------------------------------------------#
| LCDDATA11                                                                               0x7AB |
#-----------------------------------------------------------------------------------------------#
| SEG23COM3 | SEG22COM3 | SEG21COM3 | SEG20COM3 | SEG19COM3 | SEG18COM3 | SEG17COM3 | SEG16COM3 |
#-----------------------------------------------------------------------------------------------#
| 7         | 6         | 5         | 4         | 3         | 2         | 1         | 0         |
#----------------------------------------------------------------------------------------------*/

#define LCDDATA11                                0x0
#define LCDDATA11_address                        0x7AB
#define LCDDATA11_position                       0x0
#define LCDDATA11_size                           0x8
#define LCDDATA11_value_mask                     0xFF
#define LCDDATA11_clear_mask                     0x0

#define SEG16COM3                                0x0
#define SEG16COM3_address                        0x7AB
#define SEG16COM3_position                       0x0
#define SEG16COM3_size                           0x1
#define SEG16COM3_value_mask                     0x1
#define SEG16COM3_clear_mask                     0xFE

#define SEG17COM3                                0x1
#define SEG17COM3_address                        0x7AB
#define SEG17COM3_position                       0x1
#define SEG17COM3_size                           0x1
#define SEG17COM3_value_mask                     0x2
#define SEG17COM3_clear_mask                     0xFD

#define SEG18COM3                                0x2
#define SEG18COM3_address                        0x7AB
#define SEG18COM3_position                       0x2
#define SEG18COM3_size                           0x1
#define SEG18COM3_value_mask                     0x4
#define SEG18COM3_clear_mask                     0xFB

#define SEG19COM3                                0x3
#define SEG19COM3_address                        0x7AB
#define SEG19COM3_position                       0x3
#define SEG19COM3_size                           0x1
#define SEG19COM3_value_mask                     0x8
#define SEG19COM3_clear_mask                     0xF7

#define SEG20COM3                                0x4
#define SEG20COM3_address                        0x7AB
#define SEG20COM3_position                       0x4
#define SEG20COM3_size                           0x1
#define SEG20COM3_value_mask                     0x10
#define SEG20COM3_clear_mask                     0xEF

#define SEG21COM3                                0x5
#define SEG21COM3_address                        0x7AB
#define SEG21COM3_position                       0x5
#define SEG21COM3_size                           0x1
#define SEG21COM3_value_mask                     0x20
#define SEG21COM3_clear_mask                     0xDF

#define SEG22COM3                                0x6
#define SEG22COM3_address                        0x7AB
#define SEG22COM3_position                       0x6
#define SEG22COM3_size                           0x1
#define SEG22COM3_value_mask                     0x40
#define SEG22COM3_clear_mask                     0xBF

#define SEG23COM3                                0x7
#define SEG23COM3_address                        0x7AB
#define SEG23COM3_position                       0x7
#define SEG23COM3_size                           0x1
#define SEG23COM3_value_mask                     0x80
#define SEG23COM3_clear_mask                     0x7F


/*----------------------------------------------------------------------------------------------#
| LCDDATA12                                                                               0x7AC |
#-----------------------------------------------------------------------------------------------#
| SEG31COM0 | SEG30COM0 | SEG29COM0 | SEG28COM0 | SEG27COM0 | SEG26COM0 | SEG25COM0 | SEG24COM0 |
#-----------------------------------------------------------------------------------------------#
| 7         | 6         | 5         | 4         | 3         | 2         | 1         | 0         |
#----------------------------------------------------------------------------------------------*/

#define LCDDATA12                                0x0
#define LCDDATA12_address                        0x7AC
#define LCDDATA12_position                       0x0
#define LCDDATA12_size                           0x8
#define LCDDATA12_value_mask                     0xFF
#define LCDDATA12_clear_mask                     0x0

#define SEG24COM0                                0x0
#define SEG24COM0_address                        0x7AC
#define SEG24COM0_position                       0x0
#define SEG24COM0_size                           0x1
#define SEG24COM0_value_mask                     0x1
#define SEG24COM0_clear_mask                     0xFE

#define SEG25COM0                                0x1
#define SEG25COM0_address                        0x7AC
#define SEG25COM0_position                       0x1
#define SEG25COM0_size                           0x1
#define SEG25COM0_value_mask                     0x2
#define SEG25COM0_clear_mask                     0xFD

#define SEG26COM0                                0x2
#define SEG26COM0_address                        0x7AC
#define SEG26COM0_position                       0x2
#define SEG26COM0_size                           0x1
#define SEG26COM0_value_mask                     0x4
#define SEG26COM0_clear_mask                     0xFB

#define SEG27COM0                                0x3
#define SEG27COM0_address                        0x7AC
#define SEG27COM0_position                       0x3
#define SEG27COM0_size                           0x1
#define SEG27COM0_value_mask                     0x8
#define SEG27COM0_clear_mask                     0xF7

#define SEG28COM0                                0x4
#define SEG28COM0_address                        0x7AC
#define SEG28COM0_position                       0x4
#define SEG28COM0_size                           0x1
#define SEG28COM0_value_mask                     0x10
#define SEG28COM0_clear_mask                     0xEF

#define SEG29COM0                                0x5
#define SEG29COM0_address                        0x7AC
#define SEG29COM0_position                       0x5
#define SEG29COM0_size                           0x1
#define SEG29COM0_value_mask                     0x20
#define SEG29COM0_clear_mask                     0xDF

#define SEG30COM0                                0x6
#define SEG30COM0_address                        0x7AC
#define SEG30COM0_position                       0x6
#define SEG30COM0_size                           0x1
#define SEG30COM0_value_mask                     0x40
#define SEG30COM0_clear_mask                     0xBF

#define SEG31COM0                                0x7
#define SEG31COM0_address                        0x7AC
#define SEG31COM0_position                       0x7
#define SEG31COM0_size                           0x1
#define SEG31COM0_value_mask                     0x80
#define SEG31COM0_clear_mask                     0x7F


/*----------------------------------------------------------------------------------------------#
| LCDDATA13                                                                               0x7AD |
#-----------------------------------------------------------------------------------------------#
| SEG39COM0 | SEG38COM0 | SEG37COM0 | SEG36COM0 | SEG35COM0 | SEG34COM0 | SEG33COM0 | SEG32COM0 |
#-----------------------------------------------------------------------------------------------#
| 7         | 6         | 5         | 4         | 3         | 2         | 1         | 0         |
#----------------------------------------------------------------------------------------------*/

#define LCDDATA13                                0x0
#define LCDDATA13_address                        0x7AD
#define LCDDATA13_position                       0x0
#define LCDDATA13_size                           0x8
#define LCDDATA13_value_mask                     0xFF
#define LCDDATA13_clear_mask                     0x0

#define SEG32COM0                                0x0
#define SEG32COM0_address                        0x7AD
#define SEG32COM0_position                       0x0
#define SEG32COM0_size                           0x1
#define SEG32COM0_value_mask                     0x1
#define SEG32COM0_clear_mask                     0xFE

#define SEG33COM0                                0x1
#define SEG33COM0_address                        0x7AD
#define SEG33COM0_position                       0x1
#define SEG33COM0_size                           0x1
#define SEG33COM0_value_mask                     0x2
#define SEG33COM0_clear_mask                     0xFD

#define SEG34COM0                                0x2
#define SEG34COM0_address                        0x7AD
#define SEG34COM0_position                       0x2
#define SEG34COM0_size                           0x1
#define SEG34COM0_value_mask                     0x4
#define SEG34COM0_clear_mask                     0xFB

#define SEG35COM0                                0x3
#define SEG35COM0_address                        0x7AD
#define SEG35COM0_position                       0x3
#define SEG35COM0_size                           0x1
#define SEG35COM0_value_mask                     0x8
#define SEG35COM0_clear_mask                     0xF7

#define SEG36COM0                                0x4
#define SEG36COM0_address                        0x7AD
#define SEG36COM0_position                       0x4
#define SEG36COM0_size                           0x1
#define SEG36COM0_value_mask                     0x10
#define SEG36COM0_clear_mask                     0xEF

#define SEG37COM0                                0x5
#define SEG37COM0_address                        0x7AD
#define SEG37COM0_position                       0x5
#define SEG37COM0_size                           0x1
#define SEG37COM0_value_mask                     0x20
#define SEG37COM0_clear_mask                     0xDF

#define SEG38COM0                                0x6
#define SEG38COM0_address                        0x7AD
#define SEG38COM0_position                       0x6
#define SEG38COM0_size                           0x1
#define SEG38COM0_value_mask                     0x40
#define SEG38COM0_clear_mask                     0xBF

#define SEG39COM0                                0x7
#define SEG39COM0_address                        0x7AD
#define SEG39COM0_position                       0x7
#define SEG39COM0_size                           0x1
#define SEG39COM0_value_mask                     0x80
#define SEG39COM0_clear_mask                     0x7F


/*------------------------------------------------------------------------------#
| LCDDATA14                                                               0x7AE |
#-------------------------------------------------------------------------------#
| - | - | SEG45COM0 | SEG44COM0 | SEG43COM0 | SEG42COM0 | SEG41COM0 | SEG40COM0 |
#-------------------------------------------------------------------------------#
| 7 | 6 | 5         | 4         | 3         | 2         | 1         | 0         |
#------------------------------------------------------------------------------*/

#define LCDDATA14                                0x0
#define LCDDATA14_address                        0x7AE
#define LCDDATA14_position                       0x0
#define LCDDATA14_size                           0x8
#define LCDDATA14_value_mask                     0xFF
#define LCDDATA14_clear_mask                     0x0

#define SEG40COM0                                0x0
#define SEG40COM0_address                        0x7AE
#define SEG40COM0_position                       0x0
#define SEG40COM0_size                           0x1
#define SEG40COM0_value_mask                     0x1
#define SEG40COM0_clear_mask                     0xFE

#define SEG41COM0                                0x1
#define SEG41COM0_address                        0x7AE
#define SEG41COM0_position                       0x1
#define SEG41COM0_size                           0x1
#define SEG41COM0_value_mask                     0x2
#define SEG41COM0_clear_mask                     0xFD

#define SEG42COM0                                0x2
#define SEG42COM0_address                        0x7AE
#define SEG42COM0_position                       0x2
#define SEG42COM0_size                           0x1
#define SEG42COM0_value_mask                     0x4
#define SEG42COM0_clear_mask                     0xFB

#define SEG43COM0                                0x3
#define SEG43COM0_address                        0x7AE
#define SEG43COM0_position                       0x3
#define SEG43COM0_size                           0x1
#define SEG43COM0_value_mask                     0x8
#define SEG43COM0_clear_mask                     0xF7

#define SEG44COM0                                0x4
#define SEG44COM0_address                        0x7AE
#define SEG44COM0_position                       0x4
#define SEG44COM0_size                           0x1
#define SEG44COM0_value_mask                     0x10
#define SEG44COM0_clear_mask                     0xEF

#define SEG45COM0                                0x5
#define SEG45COM0_address                        0x7AE
#define SEG45COM0_position                       0x5
#define SEG45COM0_size                           0x1
#define SEG45COM0_value_mask                     0x20
#define SEG45COM0_clear_mask                     0xDF


/*----------------------------------------------------------------------------------------------#
| LCDDATA15                                                                               0x7AF |
#-----------------------------------------------------------------------------------------------#
| SEG31COM1 | SEG30COM1 | SEG29COM1 | SEG28COM1 | SEG27COM1 | SEG26COM1 | SEG25COM1 | SEG24COM1 |
#-----------------------------------------------------------------------------------------------#
| 7         | 6         | 5         | 4         | 3         | 2         | 1         | 0         |
#----------------------------------------------------------------------------------------------*/

#define LCDDATA15                                0x0
#define LCDDATA15_address                        0x7AF
#define LCDDATA15_position                       0x0
#define LCDDATA15_size                           0x8
#define LCDDATA15_value_mask                     0xFF
#define LCDDATA15_clear_mask                     0x0

#define SEG24COM1                                0x0
#define SEG24COM1_address                        0x7AF
#define SEG24COM1_position                       0x0
#define SEG24COM1_size                           0x1
#define SEG24COM1_value_mask                     0x1
#define SEG24COM1_clear_mask                     0xFE

#define SEG25COM1                                0x1
#define SEG25COM1_address                        0x7AF
#define SEG25COM1_position                       0x1
#define SEG25COM1_size                           0x1
#define SEG25COM1_value_mask                     0x2
#define SEG25COM1_clear_mask                     0xFD

#define SEG26COM1                                0x2
#define SEG26COM1_address                        0x7AF
#define SEG26COM1_position                       0x2
#define SEG26COM1_size                           0x1
#define SEG26COM1_value_mask                     0x4
#define SEG26COM1_clear_mask                     0xFB

#define SEG27COM1                                0x3
#define SEG27COM1_address                        0x7AF
#define SEG27COM1_position                       0x3
#define SEG27COM1_size                           0x1
#define SEG27COM1_value_mask                     0x8
#define SEG27COM1_clear_mask                     0xF7

#define SEG28COM1                                0x4
#define SEG28COM1_address                        0x7AF
#define SEG28COM1_position                       0x4
#define SEG28COM1_size                           0x1
#define SEG28COM1_value_mask                     0x10
#define SEG28COM1_clear_mask                     0xEF

#define SEG29COM1                                0x5
#define SEG29COM1_address                        0x7AF
#define SEG29COM1_position                       0x5
#define SEG29COM1_size                           0x1
#define SEG29COM1_value_mask                     0x20
#define SEG29COM1_clear_mask                     0xDF

#define SEG30COM1                                0x6
#define SEG30COM1_address                        0x7AF
#define SEG30COM1_position                       0x6
#define SEG30COM1_size                           0x1
#define SEG30COM1_value_mask                     0x40
#define SEG30COM1_clear_mask                     0xBF

#define SEG31COM1                                0x7
#define SEG31COM1_address                        0x7AF
#define SEG31COM1_position                       0x7
#define SEG31COM1_size                           0x1
#define SEG31COM1_value_mask                     0x80
#define SEG31COM1_clear_mask                     0x7F


/*----------------------------------------------------------------------------------------------#
| LCDDATA16                                                                               0x7B0 |
#-----------------------------------------------------------------------------------------------#
| SEG39COM1 | SEG38COM1 | SEG37COM1 | SEG36COM1 | SEG35COM1 | SEG34COM1 | SEG33COM1 | SEG32COM1 |
#-----------------------------------------------------------------------------------------------#
| 7         | 6         | 5         | 4         | 3         | 2         | 1         | 0         |
#----------------------------------------------------------------------------------------------*/

#define LCDDATA16                                0x0
#define LCDDATA16_address                        0x7B0
#define LCDDATA16_position                       0x0
#define LCDDATA16_size                           0x8
#define LCDDATA16_value_mask                     0xFF
#define LCDDATA16_clear_mask                     0x0

#define SEG32COM1                                0x0
#define SEG32COM1_address                        0x7B0
#define SEG32COM1_position                       0x0
#define SEG32COM1_size                           0x1
#define SEG32COM1_value_mask                     0x1
#define SEG32COM1_clear_mask                     0xFE

#define SEG33COM1                                0x1
#define SEG33COM1_address                        0x7B0
#define SEG33COM1_position                       0x1
#define SEG33COM1_size                           0x1
#define SEG33COM1_value_mask                     0x2
#define SEG33COM1_clear_mask                     0xFD

#define SEG34COM1                                0x2
#define SEG34COM1_address                        0x7B0
#define SEG34COM1_position                       0x2
#define SEG34COM1_size                           0x1
#define SEG34COM1_value_mask                     0x4
#define SEG34COM1_clear_mask                     0xFB

#define SEG35COM1                                0x3
#define SEG35COM1_address                        0x7B0
#define SEG35COM1_position                       0x3
#define SEG35COM1_size                           0x1
#define SEG35COM1_value_mask                     0x8
#define SEG35COM1_clear_mask                     0xF7

#define SEG36COM1                                0x4
#define SEG36COM1_address                        0x7B0
#define SEG36COM1_position                       0x4
#define SEG36COM1_size                           0x1
#define SEG36COM1_value_mask                     0x10
#define SEG36COM1_clear_mask                     0xEF

#define SEG37COM1                                0x5
#define SEG37COM1_address                        0x7B0
#define SEG37COM1_position                       0x5
#define SEG37COM1_size                           0x1
#define SEG37COM1_value_mask                     0x20
#define SEG37COM1_clear_mask                     0xDF

#define SEG38COM1                                0x6
#define SEG38COM1_address                        0x7B0
#define SEG38COM1_position                       0x6
#define SEG38COM1_size                           0x1
#define SEG38COM1_value_mask                     0x40
#define SEG38COM1_clear_mask                     0xBF

#define SEG39COM1                                0x7
#define SEG39COM1_address                        0x7B0
#define SEG39COM1_position                       0x7
#define SEG39COM1_size                           0x1
#define SEG39COM1_value_mask                     0x80
#define SEG39COM1_clear_mask                     0x7F


/*------------------------------------------------------------------------------#
| LCDDATA17                                                               0x7B1 |
#-------------------------------------------------------------------------------#
| - | - | SEG45COM1 | SEG44COM1 | SEG43COM1 | SEG42COM1 | SEG41COM1 | SEG40COM1 |
#-------------------------------------------------------------------------------#
| 7 | 6 | 5         | 4         | 3         | 2         | 1         | 0         |
#------------------------------------------------------------------------------*/

#define LCDDATA17                                0x0
#define LCDDATA17_address                        0x7B1
#define LCDDATA17_position                       0x0
#define LCDDATA17_size                           0x8
#define LCDDATA17_value_mask                     0xFF
#define LCDDATA17_clear_mask                     0x0

#define SEG40COM1                                0x0
#define SEG40COM1_address                        0x7B1
#define SEG40COM1_position                       0x0
#define SEG40COM1_size                           0x1
#define SEG40COM1_value_mask                     0x1
#define SEG40COM1_clear_mask                     0xFE

#define SEG41COM1                                0x1
#define SEG41COM1_address                        0x7B1
#define SEG41COM1_position                       0x1
#define SEG41COM1_size                           0x1
#define SEG41COM1_value_mask                     0x2
#define SEG41COM1_clear_mask                     0xFD

#define SEG42COM1                                0x2
#define SEG42COM1_address                        0x7B1
#define SEG42COM1_position                       0x2
#define SEG42COM1_size                           0x1
#define SEG42COM1_value_mask                     0x4
#define SEG42COM1_clear_mask                     0xFB

#define SEG43COM1                                0x3
#define SEG43COM1_address                        0x7B1
#define SEG43COM1_position                       0x3
#define SEG43COM1_size                           0x1
#define SEG43COM1_value_mask                     0x8
#define SEG43COM1_clear_mask                     0xF7

#define SEG44COM1                                0x4
#define SEG44COM1_address                        0x7B1
#define SEG44COM1_position                       0x4
#define SEG44COM1_size                           0x1
#define SEG44COM1_value_mask                     0x10
#define SEG44COM1_clear_mask                     0xEF

#define SEG45COM1                                0x5
#define SEG45COM1_address                        0x7B1
#define SEG45COM1_position                       0x5
#define SEG45COM1_size                           0x1
#define SEG45COM1_value_mask                     0x20
#define SEG45COM1_clear_mask                     0xDF


/*----------------------------------------------------------------------------------------------#
| LCDDATA18                                                                               0x7B2 |
#-----------------------------------------------------------------------------------------------#
| SEG31COM2 | SEG30COM2 | SEG29COM2 | SEG28COM2 | SEG27COM2 | SEG26COM2 | SEG25COM2 | SEG24COM2 |
#-----------------------------------------------------------------------------------------------#
| 7         | 6         | 5         | 4         | 3         | 2         | 1         | 0         |
#----------------------------------------------------------------------------------------------*/

#define LCDDATA18                                0x0
#define LCDDATA18_address                        0x7B2
#define LCDDATA18_position                       0x0
#define LCDDATA18_size                           0x8
#define LCDDATA18_value_mask                     0xFF
#define LCDDATA18_clear_mask                     0x0

#define SEG24COM2                                0x0
#define SEG24COM2_address                        0x7B2
#define SEG24COM2_position                       0x0
#define SEG24COM2_size                           0x1
#define SEG24COM2_value_mask                     0x1
#define SEG24COM2_clear_mask                     0xFE

#define SEG25COM2                                0x1
#define SEG25COM2_address                        0x7B2
#define SEG25COM2_position                       0x1
#define SEG25COM2_size                           0x1
#define SEG25COM2_value_mask                     0x2
#define SEG25COM2_clear_mask                     0xFD

#define SEG26COM2                                0x2
#define SEG26COM2_address                        0x7B2
#define SEG26COM2_position                       0x2
#define SEG26COM2_size                           0x1
#define SEG26COM2_value_mask                     0x4
#define SEG26COM2_clear_mask                     0xFB

#define SEG27COM2                                0x3
#define SEG27COM2_address                        0x7B2
#define SEG27COM2_position                       0x3
#define SEG27COM2_size                           0x1
#define SEG27COM2_value_mask                     0x8
#define SEG27COM2_clear_mask                     0xF7

#define SEG28COM2                                0x4
#define SEG28COM2_address                        0x7B2
#define SEG28COM2_position                       0x4
#define SEG28COM2_size                           0x1
#define SEG28COM2_value_mask                     0x10
#define SEG28COM2_clear_mask                     0xEF

#define SEG29COM2                                0x5
#define SEG29COM2_address                        0x7B2
#define SEG29COM2_position                       0x5
#define SEG29COM2_size                           0x1
#define SEG29COM2_value_mask                     0x20
#define SEG29COM2_clear_mask                     0xDF

#define SEG30COM2                                0x6
#define SEG30COM2_address                        0x7B2
#define SEG30COM2_position                       0x6
#define SEG30COM2_size                           0x1
#define SEG30COM2_value_mask                     0x40
#define SEG30COM2_clear_mask                     0xBF

#define SEG31COM2                                0x7
#define SEG31COM2_address                        0x7B2
#define SEG31COM2_position                       0x7
#define SEG31COM2_size                           0x1
#define SEG31COM2_value_mask                     0x80
#define SEG31COM2_clear_mask                     0x7F


/*----------------------------------------------------------------------------------------------#
| LCDDATA19                                                                               0x7B3 |
#-----------------------------------------------------------------------------------------------#
| SEG39COM2 | SEG38COM2 | SEG37COM2 | SEG36COM2 | SEG35COM2 | SEG34COM2 | SEG33COM2 | SEG32COM2 |
#-----------------------------------------------------------------------------------------------#
| 7         | 6         | 5         | 4         | 3         | 2         | 1         | 0         |
#----------------------------------------------------------------------------------------------*/

#define LCDDATA19                                0x0
#define LCDDATA19_address                        0x7B3
#define LCDDATA19_position                       0x0
#define LCDDATA19_size                           0x8
#define LCDDATA19_value_mask                     0xFF
#define LCDDATA19_clear_mask                     0x0

#define SEG32COM2                                0x0
#define SEG32COM2_address                        0x7B3
#define SEG32COM2_position                       0x0
#define SEG32COM2_size                           0x1
#define SEG32COM2_value_mask                     0x1
#define SEG32COM2_clear_mask                     0xFE

#define SEG33COM2                                0x1
#define SEG33COM2_address                        0x7B3
#define SEG33COM2_position                       0x1
#define SEG33COM2_size                           0x1
#define SEG33COM2_value_mask                     0x2
#define SEG33COM2_clear_mask                     0xFD

#define SEG34COM2                                0x2
#define SEG34COM2_address                        0x7B3
#define SEG34COM2_position                       0x2
#define SEG34COM2_size                           0x1
#define SEG34COM2_value_mask                     0x4
#define SEG34COM2_clear_mask                     0xFB

#define SEG35COM2                                0x3
#define SEG35COM2_address                        0x7B3
#define SEG35COM2_position                       0x3
#define SEG35COM2_size                           0x1
#define SEG35COM2_value_mask                     0x8
#define SEG35COM2_clear_mask                     0xF7

#define SEG36COM2                                0x4
#define SEG36COM2_address                        0x7B3
#define SEG36COM2_position                       0x4
#define SEG36COM2_size                           0x1
#define SEG36COM2_value_mask                     0x10
#define SEG36COM2_clear_mask                     0xEF

#define SEG37COM2                                0x5
#define SEG37COM2_address                        0x7B3
#define SEG37COM2_position                       0x5
#define SEG37COM2_size                           0x1
#define SEG37COM2_value_mask                     0x20
#define SEG37COM2_clear_mask                     0xDF

#define SEG38COM2                                0x6
#define SEG38COM2_address                        0x7B3
#define SEG38COM2_position                       0x6
#define SEG38COM2_size                           0x1
#define SEG38COM2_value_mask                     0x40
#define SEG38COM2_clear_mask                     0xBF

#define SEG39COM2                                0x7
#define SEG39COM2_address                        0x7B3
#define SEG39COM2_position                       0x7
#define SEG39COM2_size                           0x1
#define SEG39COM2_value_mask                     0x80
#define SEG39COM2_clear_mask                     0x7F


/*------------------------------------------------------------------------------#
| LCDDATA20                                                               0x7B4 |
#-------------------------------------------------------------------------------#
| - | - | SEG45COM2 | SEG44COM2 | SEG43COM2 | SEG42COM2 | SEG41COM2 | SEG40COM2 |
#-------------------------------------------------------------------------------#
| 7 | 6 | 5         | 4         | 3         | 2         | 1         | 0         |
#------------------------------------------------------------------------------*/

#define LCDDATA20                                0x0
#define LCDDATA20_address                        0x7B4
#define LCDDATA20_position                       0x0
#define LCDDATA20_size                           0x8
#define LCDDATA20_value_mask                     0xFF
#define LCDDATA20_clear_mask                     0x0

#define SEG40COM2                                0x0
#define SEG40COM2_address                        0x7B4
#define SEG40COM2_position                       0x0
#define SEG40COM2_size                           0x1
#define SEG40COM2_value_mask                     0x1
#define SEG40COM2_clear_mask                     0xFE

#define SEG41COM2                                0x1
#define SEG41COM2_address                        0x7B4
#define SEG41COM2_position                       0x1
#define SEG41COM2_size                           0x1
#define SEG41COM2_value_mask                     0x2
#define SEG41COM2_clear_mask                     0xFD

#define SEG42COM2                                0x2
#define SEG42COM2_address                        0x7B4
#define SEG42COM2_position                       0x2
#define SEG42COM2_size                           0x1
#define SEG42COM2_value_mask                     0x4
#define SEG42COM2_clear_mask                     0xFB

#define SEG43COM2                                0x3
#define SEG43COM2_address                        0x7B4
#define SEG43COM2_position                       0x3
#define SEG43COM2_size                           0x1
#define SEG43COM2_value_mask                     0x8
#define SEG43COM2_clear_mask                     0xF7

#define SEG44COM2                                0x4
#define SEG44COM2_address                        0x7B4
#define SEG44COM2_position                       0x4
#define SEG44COM2_size                           0x1
#define SEG44COM2_value_mask                     0x10
#define SEG44COM2_clear_mask                     0xEF

#define SEG45COM2                                0x5
#define SEG45COM2_address                        0x7B4
#define SEG45COM2_position                       0x5
#define SEG45COM2_size                           0x1
#define SEG45COM2_value_mask                     0x20
#define SEG45COM2_clear_mask                     0xDF


/*----------------------------------------------------------------------------------------------#
| LCDDATA21                                                                               0x7B5 |
#-----------------------------------------------------------------------------------------------#
| SEG31COM3 | SEG30COM3 | SEG29COM3 | SEG28COM3 | SEG27COM3 | SEG26COM3 | SEG25COM3 | SEG24COM3 |
#-----------------------------------------------------------------------------------------------#
| 7         | 6         | 5         | 4         | 3         | 2         | 1         | 0         |
#----------------------------------------------------------------------------------------------*/

#define LCDDATA21                                0x0
#define LCDDATA21_address                        0x7B5
#define LCDDATA21_position                       0x0
#define LCDDATA21_size                           0x8
#define LCDDATA21_value_mask                     0xFF
#define LCDDATA21_clear_mask                     0x0

#define SEG24COM3                                0x0
#define SEG24COM3_address                        0x7B5
#define SEG24COM3_position                       0x0
#define SEG24COM3_size                           0x1
#define SEG24COM3_value_mask                     0x1
#define SEG24COM3_clear_mask                     0xFE

#define SEG25COM3                                0x1
#define SEG25COM3_address                        0x7B5
#define SEG25COM3_position                       0x1
#define SEG25COM3_size                           0x1
#define SEG25COM3_value_mask                     0x2
#define SEG25COM3_clear_mask                     0xFD

#define SEG26COM3                                0x2
#define SEG26COM3_address                        0x7B5
#define SEG26COM3_position                       0x2
#define SEG26COM3_size                           0x1
#define SEG26COM3_value_mask                     0x4
#define SEG26COM3_clear_mask                     0xFB

#define SEG27COM3                                0x3
#define SEG27COM3_address                        0x7B5
#define SEG27COM3_position                       0x3
#define SEG27COM3_size                           0x1
#define SEG27COM3_value_mask                     0x8
#define SEG27COM3_clear_mask                     0xF7

#define SEG28COM3                                0x4
#define SEG28COM3_address                        0x7B5
#define SEG28COM3_position                       0x4
#define SEG28COM3_size                           0x1
#define SEG28COM3_value_mask                     0x10
#define SEG28COM3_clear_mask                     0xEF

#define SEG29COM3                                0x5
#define SEG29COM3_address                        0x7B5
#define SEG29COM3_position                       0x5
#define SEG29COM3_size                           0x1
#define SEG29COM3_value_mask                     0x20
#define SEG29COM3_clear_mask                     0xDF

#define SEG30COM3                                0x6
#define SEG30COM3_address                        0x7B5
#define SEG30COM3_position                       0x6
#define SEG30COM3_size                           0x1
#define SEG30COM3_value_mask                     0x40
#define SEG30COM3_clear_mask                     0xBF

#define SEG31COM3                                0x7
#define SEG31COM3_address                        0x7B5
#define SEG31COM3_position                       0x7
#define SEG31COM3_size                           0x1
#define SEG31COM3_value_mask                     0x80
#define SEG31COM3_clear_mask                     0x7F


/*----------------------------------------------------------------------------------------------#
| LCDDATA22                                                                               0x7B6 |
#-----------------------------------------------------------------------------------------------#
| SEG39COM3 | SEG38COM3 | SEG37COM3 | SEG36COM3 | SEG35COM3 | SEG34COM3 | SEG33COM3 | SEG32COM3 |
#-----------------------------------------------------------------------------------------------#
| 7         | 6         | 5         | 4         | 3         | 2         | 1         | 0         |
#----------------------------------------------------------------------------------------------*/

#define LCDDATA22                                0x0
#define LCDDATA22_address                        0x7B6
#define LCDDATA22_position                       0x0
#define LCDDATA22_size                           0x8
#define LCDDATA22_value_mask                     0xFF
#define LCDDATA22_clear_mask                     0x0

#define SEG32COM3                                0x0
#define SEG32COM3_address                        0x7B6
#define SEG32COM3_position                       0x0
#define SEG32COM3_size                           0x1
#define SEG32COM3_value_mask                     0x1
#define SEG32COM3_clear_mask                     0xFE

#define SEG33COM3                                0x1
#define SEG33COM3_address                        0x7B6
#define SEG33COM3_position                       0x1
#define SEG33COM3_size                           0x1
#define SEG33COM3_value_mask                     0x2
#define SEG33COM3_clear_mask                     0xFD

#define SEG34COM3                                0x2
#define SEG34COM3_address                        0x7B6
#define SEG34COM3_position                       0x2
#define SEG34COM3_size                           0x1
#define SEG34COM3_value_mask                     0x4
#define SEG34COM3_clear_mask                     0xFB

#define SEG35COM3                                0x3
#define SEG35COM3_address                        0x7B6
#define SEG35COM3_position                       0x3
#define SEG35COM3_size                           0x1
#define SEG35COM3_value_mask                     0x8
#define SEG35COM3_clear_mask                     0xF7

#define SEG36COM3                                0x4
#define SEG36COM3_address                        0x7B6
#define SEG36COM3_position                       0x4
#define SEG36COM3_size                           0x1
#define SEG36COM3_value_mask                     0x10
#define SEG36COM3_clear_mask                     0xEF

#define SEG37COM3                                0x5
#define SEG37COM3_address                        0x7B6
#define SEG37COM3_position                       0x5
#define SEG37COM3_size                           0x1
#define SEG37COM3_value_mask                     0x20
#define SEG37COM3_clear_mask                     0xDF

#define SEG38COM3                                0x6
#define SEG38COM3_address                        0x7B6
#define SEG38COM3_position                       0x6
#define SEG38COM3_size                           0x1
#define SEG38COM3_value_mask                     0x40
#define SEG38COM3_clear_mask                     0xBF

#define SEG39COM3                                0x7
#define SEG39COM3_address                        0x7B6
#define SEG39COM3_position                       0x7
#define SEG39COM3_size                           0x1
#define SEG39COM3_value_mask                     0x80
#define SEG39COM3_clear_mask                     0x7F


/*------------------------------------------------------------------------------#
| LCDDATA23                                                               0x7B7 |
#-------------------------------------------------------------------------------#
| - | - | SEG45COM3 | SEG44COM3 | SEG43COM3 | SEG42COM3 | SEG41COM3 | SEG40COM3 |
#-------------------------------------------------------------------------------#
| 7 | 6 | 5         | 4         | 3         | 2         | 1         | 0         |
#------------------------------------------------------------------------------*/

#define LCDDATA23                                0x0
#define LCDDATA23_address                        0x7B7
#define LCDDATA23_position                       0x0
#define LCDDATA23_size                           0x8
#define LCDDATA23_value_mask                     0xFF
#define LCDDATA23_clear_mask                     0x0

#define SEG40COM3                                0x0
#define SEG40COM3_address                        0x7B7
#define SEG40COM3_position                       0x0
#define SEG40COM3_size                           0x1
#define SEG40COM3_value_mask                     0x1
#define SEG40COM3_clear_mask                     0xFE

#define SEG41COM3                                0x1
#define SEG41COM3_address                        0x7B7
#define SEG41COM3_position                       0x1
#define SEG41COM3_size                           0x1
#define SEG41COM3_value_mask                     0x2
#define SEG41COM3_clear_mask                     0xFD

#define SEG42COM3                                0x2
#define SEG42COM3_address                        0x7B7
#define SEG42COM3_position                       0x2
#define SEG42COM3_size                           0x1
#define SEG42COM3_value_mask                     0x4
#define SEG42COM3_clear_mask                     0xFB

#define SEG43COM3                                0x3
#define SEG43COM3_address                        0x7B7
#define SEG43COM3_position                       0x3
#define SEG43COM3_size                           0x1
#define SEG43COM3_value_mask                     0x8
#define SEG43COM3_clear_mask                     0xF7

#define SEG44COM3                                0x4
#define SEG44COM3_address                        0x7B7
#define SEG44COM3_position                       0x4
#define SEG44COM3_size                           0x1
#define SEG44COM3_value_mask                     0x10
#define SEG44COM3_clear_mask                     0xEF

#define SEG45COM3                                0x5
#define SEG45COM3_address                        0x7B7
#define SEG45COM3_position                       0x5
#define SEG45COM3_size                           0x1
#define SEG45COM3_value_mask                     0x20
#define SEG45COM3_clear_mask                     0xDF


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

#endif // _PIC16F1947_H_
