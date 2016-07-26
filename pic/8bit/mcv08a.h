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

#ifndef _MCV08A_H_
#define _MCV08A_H_


/*------------------------------#
| INDF                      0x0 |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define INDF                                     0x0
#define INDF_address                             0x000
#define INDF_position                            0x0
#define INDF_size                                0x8
#define INDF_value_mask                          0xFF
#define INDF_clear_mask                          0x0


/*------------------------------#
| TMR0                      0x1 |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define TMR0                                     0x0
#define TMR0_address                             0x001
#define TMR0_position                            0x0
#define TMR0_size                                0x8
#define TMR0_value_mask                          0xFF
#define TMR0_clear_mask                          0x0


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


/*-----------------------------------------------#
| STATUS                                     0x3 |
#------------------------------------------------#
| GPWUF | CWUF | PA0 | nTO | nPD | ZERO | DC | C |
#------------------------------------------------#
| 7     | 6    | 5   | 4   | 3   | 2    | 1  | 0 |
#-----------------------------------------------*/

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

#define PA0                                      0x5
#define PA0_address                              0x003
#define PA0_position                             0x5
#define PA0_size                                 0x1
#define PA0_value_mask                           0x20
#define PA0_clear_mask                           0xDF

#define CWUF                                     0x6
#define CWUF_address                             0x003
#define CWUF_position                            0x6
#define CWUF_size                                0x1
#define CWUF_value_mask                          0x40
#define CWUF_clear_mask                          0xBF

#define GPWUF                                    0x7
#define GPWUF_address                            0x003
#define GPWUF_position                           0x7
#define GPWUF_size                               0x1
#define GPWUF_value_mask                         0x80
#define GPWUF_clear_mask                         0x7F


/*------------------------------#
| FSR                       0x4 |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define FSR                                      0x0
#define FSR_address                              0x004
#define FSR_position                             0x0
#define FSR_size                                 0x8
#define FSR_value_mask                           0xFF
#define FSR_clear_mask                           0x0


/*---------------------------------------------------#
| OSCCAL                                         0x5 |
#----------------------------------------------------#
| CAL6 | CAL5 | CAL4 | CAL3 | CAL2 | CAL1 | CAL0 | - |
#----------------------------------------------------#
| 7    | 6    | 5    | 4    | 3    | 2    | 1    | 0 |
#---------------------------------------------------*/

#define OSCCAL                                   0x0
#define OSCCAL_address                           0x005
#define OSCCAL_position                          0x0
#define OSCCAL_size                              0x8
#define OSCCAL_value_mask                        0xFF
#define OSCCAL_clear_mask                        0x0

#define CAL0                                     0x1
#define CAL0_address                             0x005
#define CAL0_position                            0x1
#define CAL0_size                                0x1
#define CAL0_value_mask                          0x2
#define CAL0_clear_mask                          0xFD

#define CAL                                      0x1
#define CAL_address                              0x005
#define CAL_position                             0x1
#define CAL_size                                 0x7
#define CAL_value_mask                           0xFE
#define CAL_clear_mask                           0x1

#define CAL1                                     0x2
#define CAL1_address                             0x005
#define CAL1_position                            0x2
#define CAL1_size                                0x1
#define CAL1_value_mask                          0x4
#define CAL1_clear_mask                          0xFB

#define CAL2                                     0x3
#define CAL2_address                             0x005
#define CAL2_position                            0x3
#define CAL2_size                                0x1
#define CAL2_value_mask                          0x8
#define CAL2_clear_mask                          0xF7

#define CAL3                                     0x4
#define CAL3_address                             0x005
#define CAL3_position                            0x4
#define CAL3_size                                0x1
#define CAL3_value_mask                          0x10
#define CAL3_clear_mask                          0xEF

#define CAL4                                     0x5
#define CAL4_address                             0x005
#define CAL4_position                            0x5
#define CAL4_size                                0x1
#define CAL4_value_mask                          0x20
#define CAL4_clear_mask                          0xDF

#define CAL5                                     0x6
#define CAL5_address                             0x005
#define CAL5_position                            0x6
#define CAL5_size                                0x1
#define CAL5_value_mask                          0x40
#define CAL5_clear_mask                          0xBF

#define CAL6                                     0x7
#define CAL6_address                             0x005
#define CAL6_position                            0x7
#define CAL6_size                                0x1
#define CAL6_value_mask                          0x80
#define CAL6_clear_mask                          0x7F


/*------------------------------------------#
| GPIO                                  0x6 |
#-------------------------------------------#
| - | - | GP5 | GP4 | GP3 | GP2 | GP1 | GP0 |
#-------------------------------------------#
| 7 | 6 | 5   | 4   | 3   | 2   | 1   | 0   |
#------------------------------------------*/

#define GPIO                                     0x0
#define GPIO_address                             0x006
#define GPIO_position                            0x0
#define GPIO_size                                0x8
#define GPIO_value_mask                          0xFF
#define GPIO_clear_mask                          0x0

#define GP                                       0x0
#define GP_address                               0x006
#define GP_position                              0x0
#define GP_size                                  0x6
#define GP_value_mask                            0x3F
#define GP_clear_mask                            0xC0

#define GP0                                      0x0
#define GP0_address                              0x006
#define GP0_position                             0x0
#define GP0_size                                 0x1
#define GP0_value_mask                           0x1
#define GP0_clear_mask                           0xFE

#define GP1                                      0x1
#define GP1_address                              0x006
#define GP1_position                             0x1
#define GP1_size                                 0x1
#define GP1_value_mask                           0x2
#define GP1_clear_mask                           0xFD

#define GP2                                      0x2
#define GP2_address                              0x006
#define GP2_position                             0x2
#define GP2_size                                 0x1
#define GP2_value_mask                           0x4
#define GP2_clear_mask                           0xFB

#define GP3                                      0x3
#define GP3_address                              0x006
#define GP3_position                             0x3
#define GP3_size                                 0x1
#define GP3_value_mask                           0x8
#define GP3_clear_mask                           0xF7

#define GP4                                      0x4
#define GP4_address                              0x006
#define GP4_position                             0x4
#define GP4_size                                 0x1
#define GP4_value_mask                           0x10
#define GP4_clear_mask                           0xEF

#define GP5                                      0x5
#define GP5_address                              0x006
#define GP5_position                             0x5
#define GP5_size                                 0x1
#define GP5_value_mask                           0x20
#define GP5_clear_mask                           0xDF


/*--------------------------------------------------------------------#
| CM1CON0                                                         0x7 |
#---------------------------------------------------------------------#
| C1OUT | nC1OUTEN | C1POL | nC1T0CS | C1ON | C1NREF | C1PREF | nC1WU |
#---------------------------------------------------------------------#
| 7     | 6        | 5     | 4       | 3    | 2      | 1      | 0     |
#--------------------------------------------------------------------*/

#define CM1CON0                                  0x0
#define CM1CON0_address                          0x007
#define CM1CON0_position                         0x0
#define CM1CON0_size                             0x8
#define CM1CON0_value_mask                       0xFF
#define CM1CON0_clear_mask                       0x0

#define nC1WU                                    0x0
#define nC1WU_address                            0x007
#define nC1WU_position                           0x0
#define nC1WU_size                               0x1
#define nC1WU_value_mask                         0x1
#define nC1WU_clear_mask                         0xFE

#define C1PREF                                   0x1
#define C1PREF_address                           0x007
#define C1PREF_position                          0x1
#define C1PREF_size                              0x1
#define C1PREF_value_mask                        0x2
#define C1PREF_clear_mask                        0xFD

#define C1NREF                                   0x2
#define C1NREF_address                           0x007
#define C1NREF_position                          0x2
#define C1NREF_size                              0x1
#define C1NREF_value_mask                        0x4
#define C1NREF_clear_mask                        0xFB

#define C1ON                                     0x3
#define C1ON_address                             0x007
#define C1ON_position                            0x3
#define C1ON_size                                0x1
#define C1ON_value_mask                          0x8
#define C1ON_clear_mask                          0xF7

#define nC1T0CS                                  0x4
#define nC1T0CS_address                          0x007
#define nC1T0CS_position                         0x4
#define nC1T0CS_size                             0x1
#define nC1T0CS_value_mask                       0x10
#define nC1T0CS_clear_mask                       0xEF

#define C1POL                                    0x5
#define C1POL_address                            0x007
#define C1POL_position                           0x5
#define C1POL_size                               0x1
#define C1POL_value_mask                         0x20
#define C1POL_clear_mask                         0xDF

#define nC1OUTEN                                 0x6
#define nC1OUTEN_address                         0x007
#define nC1OUTEN_position                        0x6
#define nC1OUTEN_size                            0x1
#define nC1OUTEN_value_mask                      0x40
#define nC1OUTEN_clear_mask                      0xBF

#define C1OUT                                    0x7
#define C1OUT_address                            0x007
#define C1OUT_position                           0x7
#define C1OUT_size                               0x1
#define C1OUT_value_mask                         0x80
#define C1OUT_clear_mask                         0x7F


/*---------------------------------------------------------#
| ADCON0                                               0x8 |
#----------------------------------------------------------#
| ANS1 | ANS0 | ADCS1 | ADCS0 | CHS1 | CHS0 | nDONE | ADON |
#----------------------------------------------------------#
| 7    | 6    | 5     | 4     | 3    | 2    | 1     | 0    |
#---------------------------------------------------------*/

#define ADCON0                                   0x0
#define ADCON0_address                           0x008
#define ADCON0_position                          0x0
#define ADCON0_size                              0x8
#define ADCON0_value_mask                        0xFF
#define ADCON0_clear_mask                        0x0

#define ADON                                     0x0
#define ADON_address                             0x008
#define ADON_position                            0x0
#define ADON_size                                0x1
#define ADON_value_mask                          0x1
#define ADON_clear_mask                          0xFE

#define nDONE                                    0x1
#define nDONE_address                            0x008
#define nDONE_position                           0x1
#define nDONE_size                               0x1
#define nDONE_value_mask                         0x2
#define nDONE_clear_mask                         0xFD

#define GO_nDONE                                 0x1
#define GO_nDONE_address                         0x008
#define GO_nDONE_position                        0x1
#define GO_nDONE_size                            0x1
#define GO_nDONE_value_mask                      0x2
#define GO_nDONE_clear_mask                      0xFD

#define GO                                       0x1
#define GO_address                               0x008
#define GO_position                              0x1
#define GO_size                                  0x1
#define GO_value_mask                            0x2
#define GO_clear_mask                            0xFD

#define CHS                                      0x2
#define CHS_address                              0x008
#define CHS_position                             0x2
#define CHS_size                                 0x2
#define CHS_value_mask                           0xC
#define CHS_clear_mask                           0xF3

#define CHS0                                     0x2
#define CHS0_address                             0x008
#define CHS0_position                            0x2
#define CHS0_size                                0x1
#define CHS0_value_mask                          0x4
#define CHS0_clear_mask                          0xFB

#define CHS1                                     0x3
#define CHS1_address                             0x008
#define CHS1_position                            0x3
#define CHS1_size                                0x1
#define CHS1_value_mask                          0x8
#define CHS1_clear_mask                          0xF7

#define ADCS0                                    0x4
#define ADCS0_address                            0x008
#define ADCS0_position                           0x4
#define ADCS0_size                               0x1
#define ADCS0_value_mask                         0x10
#define ADCS0_clear_mask                         0xEF

#define ADCS                                     0x4
#define ADCS_address                             0x008
#define ADCS_position                            0x4
#define ADCS_size                                0x2
#define ADCS_value_mask                          0x30
#define ADCS_clear_mask                          0xCF

#define ADCS1                                    0x5
#define ADCS1_address                            0x008
#define ADCS1_position                           0x5
#define ADCS1_size                               0x1
#define ADCS1_value_mask                         0x20
#define ADCS1_clear_mask                         0xDF

#define ANS0                                     0x6
#define ANS0_address                             0x008
#define ANS0_position                            0x6
#define ANS0_size                                0x1
#define ANS0_value_mask                          0x40
#define ANS0_clear_mask                          0xBF

#define ANS                                      0x6
#define ANS_address                              0x008
#define ANS_position                             0x6
#define ANS_size                                 0x2
#define ANS_value_mask                           0xC0
#define ANS_clear_mask                           0x3F

#define ANS1                                     0x7
#define ANS1_address                             0x008
#define ANS1_position                            0x7
#define ANS1_size                                0x1
#define ANS1_value_mask                          0x80
#define ANS1_clear_mask                          0x7F


/*------------------------------#
| ADRES                     0x9 |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define ADRES                                    0x0
#define ADRES_address                            0x009
#define ADRES_position                           0x0
#define ADRES_size                               0x8
#define ADRES_value_mask                         0xFF
#define ADRES_clear_mask                         0x0

#endif // _MCV08A_H_
