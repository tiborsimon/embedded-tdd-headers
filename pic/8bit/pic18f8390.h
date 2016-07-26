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

#ifndef _PIC18F8390_H_
#define _PIC18F8390_H_


/*-------------------------------------------------#
| LCDPS                                      0xF58 |
#--------------------------------------------------#
| WFT | BIASMD | LCDA | WA | LP3 | LP2 | LP1 | LP0 |
#--------------------------------------------------#
| 7   | 6      | 5    | 4  | 3   | 2   | 1   | 0   |
#-------------------------------------------------*/

#define LCDPS                                    0x0
#define LCDPS_address                            0xF58
#define LCDPS_position                           0x0
#define LCDPS_size                               0x8
#define LCDPS_value_mask                         0xFF
#define LCDPS_clear_mask                         0x0

#define LP                                       0x0
#define LP_address                               0xF58
#define LP_position                              0x0
#define LP_size                                  0x4
#define LP_value_mask                            0xF
#define LP_clear_mask                            0xF0

#define LP0                                      0x0
#define LP0_address                              0xF58
#define LP0_position                             0x0
#define LP0_size                                 0x1
#define LP0_value_mask                           0x1
#define LP0_clear_mask                           0xFE

#define LCDPS0                                   0x0
#define LCDPS0_address                           0xF58
#define LCDPS0_position                          0x0
#define LCDPS0_size                              0x1
#define LCDPS0_value_mask                        0x1
#define LCDPS0_clear_mask                        0xFE

#define LP1                                      0x1
#define LP1_address                              0xF58
#define LP1_position                             0x1
#define LP1_size                                 0x1
#define LP1_value_mask                           0x2
#define LP1_clear_mask                           0xFD

#define LCDPS1                                   0x1
#define LCDPS1_address                           0xF58
#define LCDPS1_position                          0x1
#define LCDPS1_size                              0x1
#define LCDPS1_value_mask                        0x2
#define LCDPS1_clear_mask                        0xFD

#define LP2                                      0x2
#define LP2_address                              0xF58
#define LP2_position                             0x2
#define LP2_size                                 0x1
#define LP2_value_mask                           0x4
#define LP2_clear_mask                           0xFB

#define LCDPS2                                   0x2
#define LCDPS2_address                           0xF58
#define LCDPS2_position                          0x2
#define LCDPS2_size                              0x1
#define LCDPS2_value_mask                        0x4
#define LCDPS2_clear_mask                        0xFB

#define LP3                                      0x3
#define LP3_address                              0xF58
#define LP3_position                             0x3
#define LP3_size                                 0x1
#define LP3_value_mask                           0x8
#define LP3_clear_mask                           0xF7

#define LCDPS3                                   0x3
#define LCDPS3_address                           0xF58
#define LCDPS3_position                          0x3
#define LCDPS3_size                              0x1
#define LCDPS3_value_mask                        0x8
#define LCDPS3_clear_mask                        0xF7

#define WA                                       0x4
#define WA_address                               0xF58
#define WA_position                              0x4
#define WA_size                                  0x1
#define WA_value_mask                            0x10
#define WA_clear_mask                            0xEF

#define LCDA                                     0x5
#define LCDA_address                             0xF58
#define LCDA_position                            0x5
#define LCDA_size                                0x1
#define LCDA_value_mask                          0x20
#define LCDA_clear_mask                          0xDF

#define BIASMD                                   0x6
#define BIASMD_address                           0xF58
#define BIASMD_position                          0x6
#define BIASMD_size                              0x1
#define BIASMD_value_mask                        0x40
#define BIASMD_clear_mask                        0xBF

#define WFT                                      0x7
#define WFT_address                              0xF58
#define WFT_position                             0x7
#define WFT_size                                 0x1
#define WFT_value_mask                           0x80
#define WFT_clear_mask                           0x7F


/*--------------------------------------------------------#
| LCDCON                                            0xF59 |
#---------------------------------------------------------#
| LCDEN | LCDSLPEN | WERR | - | CS1 | CS0 | LMUX1 | LMUX0 |
#---------------------------------------------------------#
| 7     | 6        | 5    | 4 | 3   | 2   | 1     | 0     |
#--------------------------------------------------------*/

#define LCDCON                                   0x0
#define LCDCON_address                           0xF59
#define LCDCON_position                          0x0
#define LCDCON_size                              0x8
#define LCDCON_value_mask                        0xFF
#define LCDCON_clear_mask                        0x0

#define LMUX0                                    0x0
#define LMUX0_address                            0xF59
#define LMUX0_position                           0x0
#define LMUX0_size                               0x1
#define LMUX0_value_mask                         0x1
#define LMUX0_clear_mask                         0xFE

#define LMUX                                     0x0
#define LMUX_address                             0xF59
#define LMUX_position                            0x0
#define LMUX_size                                0x2
#define LMUX_value_mask                          0x3
#define LMUX_clear_mask                          0xFC

#define LMUX1                                    0x1
#define LMUX1_address                            0xF59
#define LMUX1_position                           0x1
#define LMUX1_size                               0x1
#define LMUX1_value_mask                         0x2
#define LMUX1_clear_mask                         0xFD

#define LCDCON_CS                                0x2
#define LCDCON_CS_address                        0xF59
#define LCDCON_CS_position                       0x2
#define LCDCON_CS_size                           0x2
#define LCDCON_CS_value_mask                     0xC
#define LCDCON_CS_clear_mask                     0xF3

#define CS0                                      0x2
#define CS0_address                              0xF59
#define CS0_position                             0x2
#define CS0_size                                 0x1
#define CS0_value_mask                           0x4
#define CS0_clear_mask                           0xFB

#define LCDCS0                                   0x2
#define LCDCS0_address                           0xF59
#define LCDCS0_position                          0x2
#define LCDCS0_size                              0x1
#define LCDCS0_value_mask                        0x4
#define LCDCS0_clear_mask                        0xFB

#define CS1                                      0x3
#define CS1_address                              0xF59
#define CS1_position                             0x3
#define CS1_size                                 0x1
#define CS1_value_mask                           0x8
#define CS1_clear_mask                           0xF7

#define LCDCS1                                   0x3
#define LCDCS1_address                           0xF59
#define LCDCS1_position                          0x3
#define LCDCS1_size                              0x1
#define LCDCS1_value_mask                        0x8
#define LCDCS1_clear_mask                        0xF7

#define WERR                                     0x5
#define WERR_address                             0xF59
#define WERR_position                            0x5
#define WERR_size                                0x1
#define WERR_value_mask                          0x20
#define WERR_clear_mask                          0xDF

#define LCDWERR                                  0x5
#define LCDWERR_address                          0xF59
#define LCDWERR_position                         0x5
#define LCDWERR_size                             0x1
#define LCDWERR_value_mask                       0x20
#define LCDWERR_clear_mask                       0xDF

#define LCDSLPEN                                 0x6
#define LCDSLPEN_address                         0xF59
#define LCDSLPEN_position                        0x6
#define LCDSLPEN_size                            0x1
#define LCDSLPEN_value_mask                      0x40
#define LCDSLPEN_clear_mask                      0xBF

#define SLPEN                                    0x6
#define SLPEN_address                            0xF59
#define SLPEN_position                           0x6
#define SLPEN_size                               0x1
#define SLPEN_value_mask                         0x40
#define SLPEN_clear_mask                         0xBF

#define LCDEN                                    0x7
#define LCDEN_address                            0xF59
#define LCDEN_position                           0x7
#define LCDEN_size                               0x1
#define LCDEN_value_mask                         0x80
#define LCDEN_clear_mask                         0x7F


/*----------------------------------------------#
| LCDSE0                                  0xF5A |
#-----------------------------------------------#
| SE7 | SE6 | SE5 | SE4 | SE3 | SE2 | SE1 | SE0 |
#-----------------------------------------------#
| 7   | 6   | 5   | 4   | 3   | 2   | 1   | 0   |
#----------------------------------------------*/

#define SE0                                      0x0
#define SE0_address                              0xF5A
#define SE0_position                             0x0
#define SE0_size                                 0x1
#define SE0_value_mask                           0x1
#define SE0_clear_mask                           0xFE

#define SEGEN0                                   0x0
#define SEGEN0_address                           0xF5A
#define SEGEN0_position                          0x0
#define SEGEN0_size                              0x1
#define SEGEN0_value_mask                        0x1
#define SEGEN0_clear_mask                        0xFE

#define LCDSE0                                   0x0
#define LCDSE0_address                           0xF5A
#define LCDSE0_position                          0x0
#define LCDSE0_size                              0x8
#define LCDSE0_value_mask                        0xFF
#define LCDSE0_clear_mask                        0x0

#define SE1                                      0x1
#define SE1_address                              0xF5A
#define SE1_position                             0x1
#define SE1_size                                 0x1
#define SE1_value_mask                           0x2
#define SE1_clear_mask                           0xFD

#define SEGEN1                                   0x1
#define SEGEN1_address                           0xF5A
#define SEGEN1_position                          0x1
#define SEGEN1_size                              0x1
#define SEGEN1_value_mask                        0x2
#define SEGEN1_clear_mask                        0xFD

#define SE2                                      0x2
#define SE2_address                              0xF5A
#define SE2_position                             0x2
#define SE2_size                                 0x1
#define SE2_value_mask                           0x4
#define SE2_clear_mask                           0xFB

#define SEGEN2                                   0x2
#define SEGEN2_address                           0xF5A
#define SEGEN2_position                          0x2
#define SEGEN2_size                              0x1
#define SEGEN2_value_mask                        0x4
#define SEGEN2_clear_mask                        0xFB

#define SE3                                      0x3
#define SE3_address                              0xF5A
#define SE3_position                             0x3
#define SE3_size                                 0x1
#define SE3_value_mask                           0x8
#define SE3_clear_mask                           0xF7

#define SEGEN3                                   0x3
#define SEGEN3_address                           0xF5A
#define SEGEN3_position                          0x3
#define SEGEN3_size                              0x1
#define SEGEN3_value_mask                        0x8
#define SEGEN3_clear_mask                        0xF7

#define SE4                                      0x4
#define SE4_address                              0xF5A
#define SE4_position                             0x4
#define SE4_size                                 0x1
#define SE4_value_mask                           0x10
#define SE4_clear_mask                           0xEF

#define SEGEN4                                   0x4
#define SEGEN4_address                           0xF5A
#define SEGEN4_position                          0x4
#define SEGEN4_size                              0x1
#define SEGEN4_value_mask                        0x10
#define SEGEN4_clear_mask                        0xEF

#define SE5                                      0x5
#define SE5_address                              0xF5A
#define SE5_position                             0x5
#define SE5_size                                 0x1
#define SE5_value_mask                           0x20
#define SE5_clear_mask                           0xDF

#define SEGEN5                                   0x5
#define SEGEN5_address                           0xF5A
#define SEGEN5_position                          0x5
#define SEGEN5_size                              0x1
#define SEGEN5_value_mask                        0x20
#define SEGEN5_clear_mask                        0xDF

#define SE6                                      0x6
#define SE6_address                              0xF5A
#define SE6_position                             0x6
#define SE6_size                                 0x1
#define SE6_value_mask                           0x40
#define SE6_clear_mask                           0xBF

#define SEGEN6                                   0x6
#define SEGEN6_address                           0xF5A
#define SEGEN6_position                          0x6
#define SEGEN6_size                              0x1
#define SEGEN6_value_mask                        0x40
#define SEGEN6_clear_mask                        0xBF

#define SE7                                      0x7
#define SE7_address                              0xF5A
#define SE7_position                             0x7
#define SE7_size                                 0x1
#define SE7_value_mask                           0x80
#define SE7_clear_mask                           0x7F

#define SEGEN7                                   0x7
#define SEGEN7_address                           0xF5A
#define SEGEN7_position                          0x7
#define SEGEN7_size                              0x1
#define SEGEN7_value_mask                        0x80
#define SEGEN7_clear_mask                        0x7F


/*-------------------------------------------------------------------#
| LCDSE1                                                       0xF5B |
#--------------------------------------------------------------------#
| SEGEN15 | SEGEN14 | SEGEN13 | SEGEN12 | SEGEN11 | SE10 | SE9 | SE8 |
#--------------------------------------------------------------------#
| 7       | 6       | 5       | 4       | 3       | 2    | 1   | 0   |
#-------------------------------------------------------------------*/

#define SE8                                      0x0
#define SE8_address                              0xF5B
#define SE8_position                             0x0
#define SE8_size                                 0x1
#define SE8_value_mask                           0x1
#define SE8_clear_mask                           0xFE

#define SEGEN8                                   0x0
#define SEGEN8_address                           0xF5B
#define SEGEN8_position                          0x0
#define SEGEN8_size                              0x1
#define SEGEN8_value_mask                        0x1
#define SEGEN8_clear_mask                        0xFE

#define LCDSE1                                   0x0
#define LCDSE1_address                           0xF5B
#define LCDSE1_position                          0x0
#define LCDSE1_size                              0x8
#define LCDSE1_value_mask                        0xFF
#define LCDSE1_clear_mask                        0x0

#define SEGEN9                                   0x1
#define SEGEN9_address                           0xF5B
#define SEGEN9_position                          0x1
#define SEGEN9_size                              0x1
#define SEGEN9_value_mask                        0x2
#define SEGEN9_clear_mask                        0xFD

#define SE9                                      0x1
#define SE9_address                              0xF5B
#define SE9_position                             0x1
#define SE9_size                                 0x1
#define SE9_value_mask                           0x2
#define SE9_clear_mask                           0xFD

#define SEGEN10                                  0x2
#define SEGEN10_address                          0xF5B
#define SEGEN10_position                         0x2
#define SEGEN10_size                             0x1
#define SEGEN10_value_mask                       0x4
#define SEGEN10_clear_mask                       0xFB

#define SE10                                     0x2
#define SE10_address                             0xF5B
#define SE10_position                            0x2
#define SE10_size                                0x1
#define SE10_value_mask                          0x4
#define SE10_clear_mask                          0xFB

#define SEGEN11                                  0x3
#define SEGEN11_address                          0xF5B
#define SEGEN11_position                         0x3
#define SEGEN11_size                             0x1
#define SEGEN11_value_mask                       0x8
#define SEGEN11_clear_mask                       0xF7

#define SE11                                     0x3
#define SE11_address                             0xF5B
#define SE11_position                            0x3
#define SE11_size                                0x1
#define SE11_value_mask                          0x8
#define SE11_clear_mask                          0xF7

#define SEGEN12                                  0x4
#define SEGEN12_address                          0xF5B
#define SEGEN12_position                         0x4
#define SEGEN12_size                             0x1
#define SEGEN12_value_mask                       0x10
#define SEGEN12_clear_mask                       0xEF

#define SE12                                     0x4
#define SE12_address                             0xF5B
#define SE12_position                            0x4
#define SE12_size                                0x1
#define SE12_value_mask                          0x10
#define SE12_clear_mask                          0xEF

#define SEGEN13                                  0x5
#define SEGEN13_address                          0xF5B
#define SEGEN13_position                         0x5
#define SEGEN13_size                             0x1
#define SEGEN13_value_mask                       0x20
#define SEGEN13_clear_mask                       0xDF

#define SE13                                     0x5
#define SE13_address                             0xF5B
#define SE13_position                            0x5
#define SE13_size                                0x1
#define SE13_value_mask                          0x20
#define SE13_clear_mask                          0xDF

#define SEGEN14                                  0x6
#define SEGEN14_address                          0xF5B
#define SEGEN14_position                         0x6
#define SEGEN14_size                             0x1
#define SEGEN14_value_mask                       0x40
#define SEGEN14_clear_mask                       0xBF

#define SE14                                     0x6
#define SE14_address                             0xF5B
#define SE14_position                            0x6
#define SE14_size                                0x1
#define SE14_value_mask                          0x40
#define SE14_clear_mask                          0xBF

#define SEGEN15                                  0x7
#define SEGEN15_address                          0xF5B
#define SEGEN15_position                         0x7
#define SEGEN15_size                             0x1
#define SEGEN15_value_mask                       0x80
#define SEGEN15_clear_mask                       0x7F

#define SE15                                     0x7
#define SE15_address                             0xF5B
#define SE15_position                            0x7
#define SE15_size                                0x1
#define SE15_value_mask                          0x80
#define SE15_clear_mask                          0x7F


/*------------------------------------------------------------------------#
| LCDSE2                                                            0xF5C |
#-------------------------------------------------------------------------#
| SEGEN23 | SEGEN22 | SE21 | SE20 | SEGEN19 | SEGEN18 | SEGEN17 | SEGEN16 |
#-------------------------------------------------------------------------#
| 7       | 6       | 5    | 4    | 3       | 2       | 1       | 0       |
#------------------------------------------------------------------------*/

#define SEGEN16                                  0x0
#define SEGEN16_address                          0xF5C
#define SEGEN16_position                         0x0
#define SEGEN16_size                             0x1
#define SEGEN16_value_mask                       0x1
#define SEGEN16_clear_mask                       0xFE

#define LCDSE2                                   0x0
#define LCDSE2_address                           0xF5C
#define LCDSE2_position                          0x0
#define LCDSE2_size                              0x8
#define LCDSE2_value_mask                        0xFF
#define LCDSE2_clear_mask                        0x0

#define SE16                                     0x0
#define SE16_address                             0xF5C
#define SE16_position                            0x0
#define SE16_size                                0x1
#define SE16_value_mask                          0x1
#define SE16_clear_mask                          0xFE

#define SEGEN17                                  0x1
#define SEGEN17_address                          0xF5C
#define SEGEN17_position                         0x1
#define SEGEN17_size                             0x1
#define SEGEN17_value_mask                       0x2
#define SEGEN17_clear_mask                       0xFD

#define SE17                                     0x1
#define SE17_address                             0xF5C
#define SE17_position                            0x1
#define SE17_size                                0x1
#define SE17_value_mask                          0x2
#define SE17_clear_mask                          0xFD

#define SEGEN18                                  0x2
#define SEGEN18_address                          0xF5C
#define SEGEN18_position                         0x2
#define SEGEN18_size                             0x1
#define SEGEN18_value_mask                       0x4
#define SEGEN18_clear_mask                       0xFB

#define SE18                                     0x2
#define SE18_address                             0xF5C
#define SE18_position                            0x2
#define SE18_size                                0x1
#define SE18_value_mask                          0x4
#define SE18_clear_mask                          0xFB

#define SEGEN19                                  0x3
#define SEGEN19_address                          0xF5C
#define SEGEN19_position                         0x3
#define SEGEN19_size                             0x1
#define SEGEN19_value_mask                       0x8
#define SEGEN19_clear_mask                       0xF7

#define SE19                                     0x3
#define SE19_address                             0xF5C
#define SE19_position                            0x3
#define SE19_size                                0x1
#define SE19_value_mask                          0x8
#define SE19_clear_mask                          0xF7

#define SE20                                     0x4
#define SE20_address                             0xF5C
#define SE20_position                            0x4
#define SE20_size                                0x1
#define SE20_value_mask                          0x10
#define SE20_clear_mask                          0xEF

#define SEGEN20                                  0x4
#define SEGEN20_address                          0xF5C
#define SEGEN20_position                         0x4
#define SEGEN20_size                             0x1
#define SEGEN20_value_mask                       0x10
#define SEGEN20_clear_mask                       0xEF

#define SE21                                     0x5
#define SE21_address                             0xF5C
#define SE21_position                            0x5
#define SE21_size                                0x1
#define SE21_value_mask                          0x20
#define SE21_clear_mask                          0xDF

#define SEGEN21                                  0x5
#define SEGEN21_address                          0xF5C
#define SEGEN21_position                         0x5
#define SEGEN21_size                             0x1
#define SEGEN21_value_mask                       0x20
#define SEGEN21_clear_mask                       0xDF

#define SEGEN22                                  0x6
#define SEGEN22_address                          0xF5C
#define SEGEN22_position                         0x6
#define SEGEN22_size                             0x1
#define SEGEN22_value_mask                       0x40
#define SEGEN22_clear_mask                       0xBF

#define SE22                                     0x6
#define SE22_address                             0xF5C
#define SE22_position                            0x6
#define SE22_size                                0x1
#define SE22_value_mask                          0x40
#define SE22_clear_mask                          0xBF

#define SEGEN23                                  0x7
#define SEGEN23_address                          0xF5C
#define SEGEN23_position                         0x7
#define SEGEN23_size                             0x1
#define SEGEN23_value_mask                       0x80
#define SEGEN23_clear_mask                       0x7F

#define SE23                                     0x7
#define SE23_address                             0xF5C
#define SE23_position                            0x7
#define SE23_size                                0x1
#define SE23_value_mask                          0x80
#define SE23_clear_mask                          0x7F


/*------------------------------------------------------------#
| LCDSE3                                                0xF5D |
#-------------------------------------------------------------#
| SEGEN31 | SE30 | SEGEN29 | SE28 | SE27 | SE26 | SE25 | SE24 |
#-------------------------------------------------------------#
| 7       | 6    | 5       | 4    | 3    | 2    | 1    | 0    |
#------------------------------------------------------------*/

#define SE24                                     0x0
#define SE24_address                             0xF5D
#define SE24_position                            0x0
#define SE24_size                                0x1
#define SE24_value_mask                          0x1
#define SE24_clear_mask                          0xFE

#define SEGEN24                                  0x0
#define SEGEN24_address                          0xF5D
#define SEGEN24_position                         0x0
#define SEGEN24_size                             0x1
#define SEGEN24_value_mask                       0x1
#define SEGEN24_clear_mask                       0xFE

#define LCDSE3                                   0x0
#define LCDSE3_address                           0xF5D
#define LCDSE3_position                          0x0
#define LCDSE3_size                              0x8
#define LCDSE3_value_mask                        0xFF
#define LCDSE3_clear_mask                        0x0

#define SE25                                     0x1
#define SE25_address                             0xF5D
#define SE25_position                            0x1
#define SE25_size                                0x1
#define SE25_value_mask                          0x2
#define SE25_clear_mask                          0xFD

#define SEGEN25                                  0x1
#define SEGEN25_address                          0xF5D
#define SEGEN25_position                         0x1
#define SEGEN25_size                             0x1
#define SEGEN25_value_mask                       0x2
#define SEGEN25_clear_mask                       0xFD

#define SE26                                     0x2
#define SE26_address                             0xF5D
#define SE26_position                            0x2
#define SE26_size                                0x1
#define SE26_value_mask                          0x4
#define SE26_clear_mask                          0xFB

#define SEGEN26                                  0x2
#define SEGEN26_address                          0xF5D
#define SEGEN26_position                         0x2
#define SEGEN26_size                             0x1
#define SEGEN26_value_mask                       0x4
#define SEGEN26_clear_mask                       0xFB

#define SE27                                     0x3
#define SE27_address                             0xF5D
#define SE27_position                            0x3
#define SE27_size                                0x1
#define SE27_value_mask                          0x8
#define SE27_clear_mask                          0xF7

#define SEGEN27                                  0x3
#define SEGEN27_address                          0xF5D
#define SEGEN27_position                         0x3
#define SEGEN27_size                             0x1
#define SEGEN27_value_mask                       0x8
#define SEGEN27_clear_mask                       0xF7

#define SE28                                     0x4
#define SE28_address                             0xF5D
#define SE28_position                            0x4
#define SE28_size                                0x1
#define SE28_value_mask                          0x10
#define SE28_clear_mask                          0xEF

#define SEGEN28                                  0x4
#define SEGEN28_address                          0xF5D
#define SEGEN28_position                         0x4
#define SEGEN28_size                             0x1
#define SEGEN28_value_mask                       0x10
#define SEGEN28_clear_mask                       0xEF

#define SEGEN29                                  0x5
#define SEGEN29_address                          0xF5D
#define SEGEN29_position                         0x5
#define SEGEN29_size                             0x1
#define SEGEN29_value_mask                       0x20
#define SEGEN29_clear_mask                       0xDF

#define SE29                                     0x5
#define SE29_address                             0xF5D
#define SE29_position                            0x5
#define SE29_size                                0x1
#define SE29_value_mask                          0x20
#define SE29_clear_mask                          0xDF

#define SE30                                     0x6
#define SE30_address                             0xF5D
#define SE30_position                            0x6
#define SE30_size                                0x1
#define SE30_value_mask                          0x40
#define SE30_clear_mask                          0xBF

#define SEGEN30                                  0x6
#define SEGEN30_address                          0xF5D
#define SEGEN30_position                         0x6
#define SEGEN30_size                             0x1
#define SEGEN30_value_mask                       0x40
#define SEGEN30_clear_mask                       0xBF

#define SEGEN31                                  0x7
#define SEGEN31_address                          0xF5D
#define SEGEN31_position                         0x7
#define SEGEN31_size                             0x1
#define SEGEN31_value_mask                       0x80
#define SEGEN31_clear_mask                       0x7F

#define SE31                                     0x7
#define SE31_address                             0xF5D
#define SE31_position                            0x7
#define SE31_size                                0x1
#define SE31_value_mask                          0x80
#define SE31_clear_mask                          0x7F


/*------------------------------------------------------#
| LCDSE4                                          0xF5E |
#-------------------------------------------------------#
| SE39 | SE38 | SE37 | SE36 | SE35 | SE34 | SE33 | SE32 |
#-------------------------------------------------------#
| 7    | 6    | 5    | 4    | 3    | 2    | 1    | 0    |
#------------------------------------------------------*/

#define SE32                                     0x0
#define SE32_address                             0xF5E
#define SE32_position                            0x0
#define SE32_size                                0x1
#define SE32_value_mask                          0x1
#define SE32_clear_mask                          0xFE

#define SEGEN32                                  0x0
#define SEGEN32_address                          0xF5E
#define SEGEN32_position                         0x0
#define SEGEN32_size                             0x1
#define SEGEN32_value_mask                       0x1
#define SEGEN32_clear_mask                       0xFE

#define LCDSE4                                   0x0
#define LCDSE4_address                           0xF5E
#define LCDSE4_position                          0x0
#define LCDSE4_size                              0x8
#define LCDSE4_value_mask                        0xFF
#define LCDSE4_clear_mask                        0x0

#define SE33                                     0x1
#define SE33_address                             0xF5E
#define SE33_position                            0x1
#define SE33_size                                0x1
#define SE33_value_mask                          0x2
#define SE33_clear_mask                          0xFD

#define SEGEN33                                  0x1
#define SEGEN33_address                          0xF5E
#define SEGEN33_position                         0x1
#define SEGEN33_size                             0x1
#define SEGEN33_value_mask                       0x2
#define SEGEN33_clear_mask                       0xFD

#define SE34                                     0x2
#define SE34_address                             0xF5E
#define SE34_position                            0x2
#define SE34_size                                0x1
#define SE34_value_mask                          0x4
#define SE34_clear_mask                          0xFB

#define SEGEN34                                  0x2
#define SEGEN34_address                          0xF5E
#define SEGEN34_position                         0x2
#define SEGEN34_size                             0x1
#define SEGEN34_value_mask                       0x4
#define SEGEN34_clear_mask                       0xFB

#define SE35                                     0x3
#define SE35_address                             0xF5E
#define SE35_position                            0x3
#define SE35_size                                0x1
#define SE35_value_mask                          0x8
#define SE35_clear_mask                          0xF7

#define SEGEN35                                  0x3
#define SEGEN35_address                          0xF5E
#define SEGEN35_position                         0x3
#define SEGEN35_size                             0x1
#define SEGEN35_value_mask                       0x8
#define SEGEN35_clear_mask                       0xF7

#define SE36                                     0x4
#define SE36_address                             0xF5E
#define SE36_position                            0x4
#define SE36_size                                0x1
#define SE36_value_mask                          0x10
#define SE36_clear_mask                          0xEF

#define SEGEN36                                  0x4
#define SEGEN36_address                          0xF5E
#define SEGEN36_position                         0x4
#define SEGEN36_size                             0x1
#define SEGEN36_value_mask                       0x10
#define SEGEN36_clear_mask                       0xEF

#define SE37                                     0x5
#define SE37_address                             0xF5E
#define SE37_position                            0x5
#define SE37_size                                0x1
#define SE37_value_mask                          0x20
#define SE37_clear_mask                          0xDF

#define SEGEN37                                  0x5
#define SEGEN37_address                          0xF5E
#define SEGEN37_position                         0x5
#define SEGEN37_size                             0x1
#define SEGEN37_value_mask                       0x20
#define SEGEN37_clear_mask                       0xDF

#define SE38                                     0x6
#define SE38_address                             0xF5E
#define SE38_position                            0x6
#define SE38_size                                0x1
#define SE38_value_mask                          0x40
#define SE38_clear_mask                          0xBF

#define SEGEN38                                  0x6
#define SEGEN38_address                          0xF5E
#define SEGEN38_position                         0x6
#define SEGEN38_size                             0x1
#define SEGEN38_value_mask                       0x40
#define SEGEN38_clear_mask                       0xBF

#define SE39                                     0x7
#define SE39_address                             0xF5E
#define SE39_position                            0x7
#define SE39_size                                0x1
#define SE39_value_mask                          0x80
#define SE39_clear_mask                          0x7F

#define SEGEN39                                  0x7
#define SEGEN39_address                          0xF5E
#define SEGEN39_position                         0x7
#define SEGEN39_size                             0x1
#define SEGEN39_value_mask                       0x80
#define SEGEN39_clear_mask                       0x7F


/*------------------------------------------------------#
| LCDSE5                                          0xF5F |
#-------------------------------------------------------#
| SE47 | SE46 | SE45 | SE44 | SE43 | SE42 | SE41 | SE40 |
#-------------------------------------------------------#
| 7    | 6    | 5    | 4    | 3    | 2    | 1    | 0    |
#------------------------------------------------------*/

#define SE40                                     0x0
#define SE40_address                             0xF5F
#define SE40_position                            0x0
#define SE40_size                                0x1
#define SE40_value_mask                          0x1
#define SE40_clear_mask                          0xFE

#define SEGEN40                                  0x0
#define SEGEN40_address                          0xF5F
#define SEGEN40_position                         0x0
#define SEGEN40_size                             0x1
#define SEGEN40_value_mask                       0x1
#define SEGEN40_clear_mask                       0xFE

#define LCDSE5                                   0x0
#define LCDSE5_address                           0xF5F
#define LCDSE5_position                          0x0
#define LCDSE5_size                              0x8
#define LCDSE5_value_mask                        0xFF
#define LCDSE5_clear_mask                        0x0

#define SE41                                     0x1
#define SE41_address                             0xF5F
#define SE41_position                            0x1
#define SE41_size                                0x1
#define SE41_value_mask                          0x2
#define SE41_clear_mask                          0xFD

#define SEGEN41                                  0x1
#define SEGEN41_address                          0xF5F
#define SEGEN41_position                         0x1
#define SEGEN41_size                             0x1
#define SEGEN41_value_mask                       0x2
#define SEGEN41_clear_mask                       0xFD

#define SE42                                     0x2
#define SE42_address                             0xF5F
#define SE42_position                            0x2
#define SE42_size                                0x1
#define SE42_value_mask                          0x4
#define SE42_clear_mask                          0xFB

#define SEGEN42                                  0x2
#define SEGEN42_address                          0xF5F
#define SEGEN42_position                         0x2
#define SEGEN42_size                             0x1
#define SEGEN42_value_mask                       0x4
#define SEGEN42_clear_mask                       0xFB

#define SE43                                     0x3
#define SE43_address                             0xF5F
#define SE43_position                            0x3
#define SE43_size                                0x1
#define SE43_value_mask                          0x8
#define SE43_clear_mask                          0xF7

#define SEGEN43                                  0x3
#define SEGEN43_address                          0xF5F
#define SEGEN43_position                         0x3
#define SEGEN43_size                             0x1
#define SEGEN43_value_mask                       0x8
#define SEGEN43_clear_mask                       0xF7

#define SE44                                     0x4
#define SE44_address                             0xF5F
#define SE44_position                            0x4
#define SE44_size                                0x1
#define SE44_value_mask                          0x10
#define SE44_clear_mask                          0xEF

#define SEGEN44                                  0x4
#define SEGEN44_address                          0xF5F
#define SEGEN44_position                         0x4
#define SEGEN44_size                             0x1
#define SEGEN44_value_mask                       0x10
#define SEGEN44_clear_mask                       0xEF

#define SEGEN45                                  0x5
#define SEGEN45_address                          0xF5F
#define SEGEN45_position                         0x5
#define SEGEN45_size                             0x1
#define SEGEN45_value_mask                       0x20
#define SEGEN45_clear_mask                       0xDF

#define SE45                                     0x5
#define SE45_address                             0xF5F
#define SE45_position                            0x5
#define SE45_size                                0x1
#define SE45_value_mask                          0x20
#define SE45_clear_mask                          0xDF

#define SE46                                     0x6
#define SE46_address                             0xF5F
#define SE46_position                            0x6
#define SE46_size                                0x1
#define SE46_value_mask                          0x40
#define SE46_clear_mask                          0xBF

#define SEGEN46                                  0x6
#define SEGEN46_address                          0xF5F
#define SEGEN46_position                         0x6
#define SEGEN46_size                             0x1
#define SEGEN46_value_mask                       0x40
#define SEGEN46_clear_mask                       0xBF

#define SE47                                     0x7
#define SE47_address                             0xF5F
#define SE47_position                            0x7
#define SE47_size                                0x1
#define SE47_value_mask                          0x80
#define SE47_clear_mask                          0x7F

#define SEGEN47                                  0x7
#define SEGEN47_address                          0xF5F
#define SEGEN47_position                         0x7
#define SEGEN47_size                             0x1
#define SEGEN47_value_mask                       0x80
#define SEGEN47_clear_mask                       0x7F


/*-------------------------------------------------------------------------#
| LCDDATA0                                                           0xF60 |
#--------------------------------------------------------------------------#
| SEG7COM0 | SEG6COM0 | S5C0 | SEG4COM0 | S03C0 | S02C0 | S01C0 | SEG0COM0 |
#--------------------------------------------------------------------------#
| 7        | 6        | 5    | 4        | 3     | 2     | 1     | 0        |
#-------------------------------------------------------------------------*/

#define SEG0COM0                                 0x0
#define SEG0COM0_address                         0xF60
#define SEG0COM0_position                        0x0
#define SEG0COM0_size                            0x1
#define SEG0COM0_value_mask                      0x1
#define SEG0COM0_clear_mask                      0xFE

#define LCDDATA0                                 0x0
#define LCDDATA0_address                         0xF60
#define LCDDATA0_position                        0x0
#define LCDDATA0_size                            0x8
#define LCDDATA0_value_mask                      0xFF
#define LCDDATA0_clear_mask                      0x0

#define S00C0                                    0x0
#define S00C0_address                            0xF60
#define S00C0_position                           0x0
#define S00C0_size                               0x1
#define S00C0_value_mask                         0x1
#define S00C0_clear_mask                         0xFE

#define S0C0                                     0x0
#define S0C0_address                             0xF60
#define S0C0_position                            0x0
#define S0C0_size                                0x1
#define S0C0_value_mask                          0x1
#define S0C0_clear_mask                          0xFE

#define S01C0                                    0x1
#define S01C0_address                            0xF60
#define S01C0_position                           0x1
#define S01C0_size                               0x1
#define S01C0_value_mask                         0x2
#define S01C0_clear_mask                         0xFD

#define SEG1COM0                                 0x1
#define SEG1COM0_address                         0xF60
#define SEG1COM0_position                        0x1
#define SEG1COM0_size                            0x1
#define SEG1COM0_value_mask                      0x2
#define SEG1COM0_clear_mask                      0xFD

#define S1C0                                     0x1
#define S1C0_address                             0xF60
#define S1C0_position                            0x1
#define S1C0_size                                0x1
#define S1C0_value_mask                          0x2
#define S1C0_clear_mask                          0xFD

#define S02C0                                    0x2
#define S02C0_address                            0xF60
#define S02C0_position                           0x2
#define S02C0_size                               0x1
#define S02C0_value_mask                         0x4
#define S02C0_clear_mask                         0xFB

#define S2C0                                     0x2
#define S2C0_address                             0xF60
#define S2C0_position                            0x2
#define S2C0_size                                0x1
#define S2C0_value_mask                          0x4
#define S2C0_clear_mask                          0xFB

#define SEG2COM0                                 0x2
#define SEG2COM0_address                         0xF60
#define SEG2COM0_position                        0x2
#define SEG2COM0_size                            0x1
#define SEG2COM0_value_mask                      0x4
#define SEG2COM0_clear_mask                      0xFB

#define S03C0                                    0x3
#define S03C0_address                            0xF60
#define S03C0_position                           0x3
#define S03C0_size                               0x1
#define S03C0_value_mask                         0x8
#define S03C0_clear_mask                         0xF7

#define SEG3COM0                                 0x3
#define SEG3COM0_address                         0xF60
#define SEG3COM0_position                        0x3
#define SEG3COM0_size                            0x1
#define SEG3COM0_value_mask                      0x8
#define SEG3COM0_clear_mask                      0xF7

#define S3C0                                     0x3
#define S3C0_address                             0xF60
#define S3C0_position                            0x3
#define S3C0_size                                0x1
#define S3C0_value_mask                          0x8
#define S3C0_clear_mask                          0xF7

#define SEG4COM0                                 0x4
#define SEG4COM0_address                         0xF60
#define SEG4COM0_position                        0x4
#define SEG4COM0_size                            0x1
#define SEG4COM0_value_mask                      0x10
#define SEG4COM0_clear_mask                      0xEF

#define S4C0                                     0x4
#define S4C0_address                             0xF60
#define S4C0_position                            0x4
#define S4C0_size                                0x1
#define S4C0_value_mask                          0x10
#define S4C0_clear_mask                          0xEF

#define S04C0                                    0x4
#define S04C0_address                            0xF60
#define S04C0_position                           0x4
#define S04C0_size                               0x1
#define S04C0_value_mask                         0x10
#define S04C0_clear_mask                         0xEF

#define S5C0                                     0x5
#define S5C0_address                             0xF60
#define S5C0_position                            0x5
#define S5C0_size                                0x1
#define S5C0_value_mask                          0x20
#define S5C0_clear_mask                          0xDF

#define S05C0                                    0x5
#define S05C0_address                            0xF60
#define S05C0_position                           0x5
#define S05C0_size                               0x1
#define S05C0_value_mask                         0x20
#define S05C0_clear_mask                         0xDF

#define SEG5COM0                                 0x5
#define SEG5COM0_address                         0xF60
#define SEG5COM0_position                        0x5
#define SEG5COM0_size                            0x1
#define SEG5COM0_value_mask                      0x20
#define SEG5COM0_clear_mask                      0xDF

#define SEG6COM0                                 0x6
#define SEG6COM0_address                         0xF60
#define SEG6COM0_position                        0x6
#define SEG6COM0_size                            0x1
#define SEG6COM0_value_mask                      0x40
#define SEG6COM0_clear_mask                      0xBF

#define S6C0                                     0x6
#define S6C0_address                             0xF60
#define S6C0_position                            0x6
#define S6C0_size                                0x1
#define S6C0_value_mask                          0x40
#define S6C0_clear_mask                          0xBF

#define S06C0                                    0x6
#define S06C0_address                            0xF60
#define S06C0_position                           0x6
#define S06C0_size                               0x1
#define S06C0_value_mask                         0x40
#define S06C0_clear_mask                         0xBF

#define SEG7COM0                                 0x7
#define SEG7COM0_address                         0xF60
#define SEG7COM0_position                        0x7
#define SEG7COM0_size                            0x1
#define SEG7COM0_value_mask                      0x80
#define SEG7COM0_clear_mask                      0x7F

#define S7C0                                     0x7
#define S7C0_address                             0xF60
#define S7C0_position                            0x7
#define S7C0_size                                0x1
#define S7C0_value_mask                          0x80
#define S7C0_clear_mask                          0x7F

#define S07C0                                    0x7
#define S07C0_address                            0xF60
#define S07C0_position                           0x7
#define S07C0_size                               0x1
#define S07C0_value_mask                         0x80
#define S07C0_clear_mask                         0x7F


/*-------------------------------------------------------------------------#
| LCDDATA1                                                           0xF61 |
#--------------------------------------------------------------------------#
| SEG15COM0 | S14C0 | S13C0 | S12C0 | SEG11COM0 | S10C0 | SEG9COM0 | S08C0 |
#--------------------------------------------------------------------------#
| 7         | 6     | 5     | 4     | 3         | 2     | 1        | 0     |
#-------------------------------------------------------------------------*/

#define S08C0                                    0x0
#define S08C0_address                            0xF61
#define S08C0_position                           0x0
#define S08C0_size                               0x1
#define S08C0_value_mask                         0x1
#define S08C0_clear_mask                         0xFE

#define LCDDATA1                                 0x0
#define LCDDATA1_address                         0xF61
#define LCDDATA1_position                        0x0
#define LCDDATA1_size                            0x8
#define LCDDATA1_value_mask                      0xFF
#define LCDDATA1_clear_mask                      0x0

#define S8C0                                     0x0
#define S8C0_address                             0xF61
#define S8C0_position                            0x0
#define S8C0_size                                0x1
#define S8C0_value_mask                          0x1
#define S8C0_clear_mask                          0xFE

#define SEG8COM0                                 0x0
#define SEG8COM0_address                         0xF61
#define SEG8COM0_position                        0x0
#define SEG8COM0_size                            0x1
#define SEG8COM0_value_mask                      0x1
#define SEG8COM0_clear_mask                      0xFE

#define SEG9COM0                                 0x1
#define SEG9COM0_address                         0xF61
#define SEG9COM0_position                        0x1
#define SEG9COM0_size                            0x1
#define SEG9COM0_value_mask                      0x2
#define SEG9COM0_clear_mask                      0xFD

#define S09C0                                    0x1
#define S09C0_address                            0xF61
#define S09C0_position                           0x1
#define S09C0_size                               0x1
#define S09C0_value_mask                         0x2
#define S09C0_clear_mask                         0xFD

#define S9C0                                     0x1
#define S9C0_address                             0xF61
#define S9C0_position                            0x1
#define S9C0_size                                0x1
#define S9C0_value_mask                          0x2
#define S9C0_clear_mask                          0xFD

#define S10C0                                    0x2
#define S10C0_address                            0xF61
#define S10C0_position                           0x2
#define S10C0_size                               0x1
#define S10C0_value_mask                         0x4
#define S10C0_clear_mask                         0xFB

#define SEG10COM0                                0x2
#define SEG10COM0_address                        0xF61
#define SEG10COM0_position                       0x2
#define SEG10COM0_size                           0x1
#define SEG10COM0_value_mask                     0x4
#define SEG10COM0_clear_mask                     0xFB

#define S11C0                                    0x3
#define S11C0_address                            0xF61
#define S11C0_position                           0x3
#define S11C0_size                               0x1
#define S11C0_value_mask                         0x8
#define S11C0_clear_mask                         0xF7

#define SEG11COM0                                0x3
#define SEG11COM0_address                        0xF61
#define SEG11COM0_position                       0x3
#define SEG11COM0_size                           0x1
#define SEG11COM0_value_mask                     0x8
#define SEG11COM0_clear_mask                     0xF7

#define S12C0                                    0x4
#define S12C0_address                            0xF61
#define S12C0_position                           0x4
#define S12C0_size                               0x1
#define S12C0_value_mask                         0x10
#define S12C0_clear_mask                         0xEF

#define SEG12COM0                                0x4
#define SEG12COM0_address                        0xF61
#define SEG12COM0_position                       0x4
#define SEG12COM0_size                           0x1
#define SEG12COM0_value_mask                     0x10
#define SEG12COM0_clear_mask                     0xEF

#define S13C0                                    0x5
#define S13C0_address                            0xF61
#define S13C0_position                           0x5
#define S13C0_size                               0x1
#define S13C0_value_mask                         0x20
#define S13C0_clear_mask                         0xDF

#define SEG13COM0                                0x5
#define SEG13COM0_address                        0xF61
#define SEG13COM0_position                       0x5
#define SEG13COM0_size                           0x1
#define SEG13COM0_value_mask                     0x20
#define SEG13COM0_clear_mask                     0xDF

#define S14C0                                    0x6
#define S14C0_address                            0xF61
#define S14C0_position                           0x6
#define S14C0_size                               0x1
#define S14C0_value_mask                         0x40
#define S14C0_clear_mask                         0xBF

#define SEG14COM0                                0x6
#define SEG14COM0_address                        0xF61
#define SEG14COM0_position                       0x6
#define SEG14COM0_size                           0x1
#define SEG14COM0_value_mask                     0x40
#define SEG14COM0_clear_mask                     0xBF

#define SEG15COM0                                0x7
#define SEG15COM0_address                        0xF61
#define SEG15COM0_position                       0x7
#define SEG15COM0_size                           0x1
#define SEG15COM0_value_mask                     0x80
#define SEG15COM0_clear_mask                     0x7F

#define S15C0                                    0x7
#define S15C0_address                            0xF61
#define S15C0_position                           0x7
#define S15C0_size                               0x1
#define S15C0_value_mask                         0x80
#define S15C0_clear_mask                         0x7F


/*----------------------------------------------------------------------#
| LCDDATA2                                                        0xF62 |
#-----------------------------------------------------------------------#
| S23C0 | SEG22COM0 | S21C0 | S20C0 | S19C0 | SEG18COM0 | S17C0 | S16C0 |
#-----------------------------------------------------------------------#
| 7     | 6         | 5     | 4     | 3     | 2         | 1     | 0     |
#----------------------------------------------------------------------*/

#define LCDDATA2                                 0x0
#define LCDDATA2_address                         0xF62
#define LCDDATA2_position                        0x0
#define LCDDATA2_size                            0x8
#define LCDDATA2_value_mask                      0xFF
#define LCDDATA2_clear_mask                      0x0

#define S16C0                                    0x0
#define S16C0_address                            0xF62
#define S16C0_position                           0x0
#define S16C0_size                               0x1
#define S16C0_value_mask                         0x1
#define S16C0_clear_mask                         0xFE

#define SEG16COM0                                0x0
#define SEG16COM0_address                        0xF62
#define SEG16COM0_position                       0x0
#define SEG16COM0_size                           0x1
#define SEG16COM0_value_mask                     0x1
#define SEG16COM0_clear_mask                     0xFE

#define SEG17COM0                                0x1
#define SEG17COM0_address                        0xF62
#define SEG17COM0_position                       0x1
#define SEG17COM0_size                           0x1
#define SEG17COM0_value_mask                     0x2
#define SEG17COM0_clear_mask                     0xFD

#define S17C0                                    0x1
#define S17C0_address                            0xF62
#define S17C0_position                           0x1
#define S17C0_size                               0x1
#define S17C0_value_mask                         0x2
#define S17C0_clear_mask                         0xFD

#define SEG18COM0                                0x2
#define SEG18COM0_address                        0xF62
#define SEG18COM0_position                       0x2
#define SEG18COM0_size                           0x1
#define SEG18COM0_value_mask                     0x4
#define SEG18COM0_clear_mask                     0xFB

#define S18C0                                    0x2
#define S18C0_address                            0xF62
#define S18C0_position                           0x2
#define S18C0_size                               0x1
#define S18C0_value_mask                         0x4
#define S18C0_clear_mask                         0xFB

#define S19C0                                    0x3
#define S19C0_address                            0xF62
#define S19C0_position                           0x3
#define S19C0_size                               0x1
#define S19C0_value_mask                         0x8
#define S19C0_clear_mask                         0xF7

#define SEG19COM0                                0x3
#define SEG19COM0_address                        0xF62
#define SEG19COM0_position                       0x3
#define SEG19COM0_size                           0x1
#define SEG19COM0_value_mask                     0x8
#define SEG19COM0_clear_mask                     0xF7

#define S20C0                                    0x4
#define S20C0_address                            0xF62
#define S20C0_position                           0x4
#define S20C0_size                               0x1
#define S20C0_value_mask                         0x10
#define S20C0_clear_mask                         0xEF

#define SEG20COM0                                0x4
#define SEG20COM0_address                        0xF62
#define SEG20COM0_position                       0x4
#define SEG20COM0_size                           0x1
#define SEG20COM0_value_mask                     0x10
#define SEG20COM0_clear_mask                     0xEF

#define S21C0                                    0x5
#define S21C0_address                            0xF62
#define S21C0_position                           0x5
#define S21C0_size                               0x1
#define S21C0_value_mask                         0x20
#define S21C0_clear_mask                         0xDF

#define SEG21COM0                                0x5
#define SEG21COM0_address                        0xF62
#define SEG21COM0_position                       0x5
#define SEG21COM0_size                           0x1
#define SEG21COM0_value_mask                     0x20
#define SEG21COM0_clear_mask                     0xDF

#define SEG22COM0                                0x6
#define SEG22COM0_address                        0xF62
#define SEG22COM0_position                       0x6
#define SEG22COM0_size                           0x1
#define SEG22COM0_value_mask                     0x40
#define SEG22COM0_clear_mask                     0xBF

#define S22C0                                    0x6
#define S22C0_address                            0xF62
#define S22C0_position                           0x6
#define S22C0_size                               0x1
#define S22C0_value_mask                         0x40
#define S22C0_clear_mask                         0xBF

#define S23C0                                    0x7
#define S23C0_address                            0xF62
#define S23C0_position                           0x7
#define S23C0_size                               0x1
#define S23C0_value_mask                         0x80
#define S23C0_clear_mask                         0x7F

#define SEG23COM0                                0x7
#define SEG23COM0_address                        0xF62
#define SEG23COM0_position                       0x7
#define SEG23COM0_size                           0x1
#define SEG23COM0_value_mask                     0x80
#define SEG23COM0_clear_mask                     0x7F


/*------------------------------------------------------------------------------#
| LCDDATA3                                                                0xF63 |
#-------------------------------------------------------------------------------#
| S31C0 | SEG30COM0 | SEG29COM0 | SEG28COM0 | SEG27COM0 | S26C0 | S25C0 | S24C0 |
#-------------------------------------------------------------------------------#
| 7     | 6         | 5         | 4         | 3         | 2     | 1     | 0     |
#------------------------------------------------------------------------------*/

#define LCDDATA3                                 0x0
#define LCDDATA3_address                         0xF63
#define LCDDATA3_position                        0x0
#define LCDDATA3_size                            0x8
#define LCDDATA3_value_mask                      0xFF
#define LCDDATA3_clear_mask                      0x0

#define S24C0                                    0x0
#define S24C0_address                            0xF63
#define S24C0_position                           0x0
#define S24C0_size                               0x1
#define S24C0_value_mask                         0x1
#define S24C0_clear_mask                         0xFE

#define SEG24COM0                                0x0
#define SEG24COM0_address                        0xF63
#define SEG24COM0_position                       0x0
#define SEG24COM0_size                           0x1
#define SEG24COM0_value_mask                     0x1
#define SEG24COM0_clear_mask                     0xFE

#define S25C0                                    0x1
#define S25C0_address                            0xF63
#define S25C0_position                           0x1
#define S25C0_size                               0x1
#define S25C0_value_mask                         0x2
#define S25C0_clear_mask                         0xFD

#define SEG25COM0                                0x1
#define SEG25COM0_address                        0xF63
#define SEG25COM0_position                       0x1
#define SEG25COM0_size                           0x1
#define SEG25COM0_value_mask                     0x2
#define SEG25COM0_clear_mask                     0xFD

#define S26C0                                    0x2
#define S26C0_address                            0xF63
#define S26C0_position                           0x2
#define S26C0_size                               0x1
#define S26C0_value_mask                         0x4
#define S26C0_clear_mask                         0xFB

#define SEG26COM0                                0x2
#define SEG26COM0_address                        0xF63
#define SEG26COM0_position                       0x2
#define SEG26COM0_size                           0x1
#define SEG26COM0_value_mask                     0x4
#define SEG26COM0_clear_mask                     0xFB

#define SEG27COM0                                0x3
#define SEG27COM0_address                        0xF63
#define SEG27COM0_position                       0x3
#define SEG27COM0_size                           0x1
#define SEG27COM0_value_mask                     0x8
#define SEG27COM0_clear_mask                     0xF7

#define S27C0                                    0x3
#define S27C0_address                            0xF63
#define S27C0_position                           0x3
#define S27C0_size                               0x1
#define S27C0_value_mask                         0x8
#define S27C0_clear_mask                         0xF7

#define SEG28COM0                                0x4
#define SEG28COM0_address                        0xF63
#define SEG28COM0_position                       0x4
#define SEG28COM0_size                           0x1
#define SEG28COM0_value_mask                     0x10
#define SEG28COM0_clear_mask                     0xEF

#define S28C0                                    0x4
#define S28C0_address                            0xF63
#define S28C0_position                           0x4
#define S28C0_size                               0x1
#define S28C0_value_mask                         0x10
#define S28C0_clear_mask                         0xEF

#define SEG29COM0                                0x5
#define SEG29COM0_address                        0xF63
#define SEG29COM0_position                       0x5
#define SEG29COM0_size                           0x1
#define SEG29COM0_value_mask                     0x20
#define SEG29COM0_clear_mask                     0xDF

#define S29C0                                    0x5
#define S29C0_address                            0xF63
#define S29C0_position                           0x5
#define S29C0_size                               0x1
#define S29C0_value_mask                         0x20
#define S29C0_clear_mask                         0xDF

#define S30C0                                    0x6
#define S30C0_address                            0xF63
#define S30C0_position                           0x6
#define S30C0_size                               0x1
#define S30C0_value_mask                         0x40
#define S30C0_clear_mask                         0xBF

#define SEG30COM0                                0x6
#define SEG30COM0_address                        0xF63
#define SEG30COM0_position                       0x6
#define SEG30COM0_size                           0x1
#define SEG30COM0_value_mask                     0x40
#define SEG30COM0_clear_mask                     0xBF

#define SEG31COM0                                0x7
#define SEG31COM0_address                        0xF63
#define SEG31COM0_position                       0x7
#define SEG31COM0_size                           0x1
#define SEG31COM0_value_mask                     0x80
#define SEG31COM0_clear_mask                     0x7F

#define S31C0                                    0x7
#define S31C0_address                            0xF63
#define S31C0_position                           0x7
#define S31C0_size                               0x1
#define S31C0_value_mask                         0x80
#define S31C0_clear_mask                         0x7F


/*--------------------------------------------------------------------------#
| LCDDATA4                                                            0xF64 |
#---------------------------------------------------------------------------#
| SEG39COM0 | S38C0 | SEG37COM0 | S36C0 | S35C0 | S34C0 | SEG33COM0 | S32C0 |
#---------------------------------------------------------------------------#
| 7         | 6     | 5         | 4     | 3     | 2     | 1         | 0     |
#--------------------------------------------------------------------------*/

#define S32C0                                    0x0
#define S32C0_address                            0xF64
#define S32C0_position                           0x0
#define S32C0_size                               0x1
#define S32C0_value_mask                         0x1
#define S32C0_clear_mask                         0xFE

#define LCDDATA4                                 0x0
#define LCDDATA4_address                         0xF64
#define LCDDATA4_position                        0x0
#define LCDDATA4_size                            0x8
#define LCDDATA4_value_mask                      0xFF
#define LCDDATA4_clear_mask                      0x0

#define SEG32COM0                                0x0
#define SEG32COM0_address                        0xF64
#define SEG32COM0_position                       0x0
#define SEG32COM0_size                           0x1
#define SEG32COM0_value_mask                     0x1
#define SEG32COM0_clear_mask                     0xFE

#define SEG33COM0                                0x1
#define SEG33COM0_address                        0xF64
#define SEG33COM0_position                       0x1
#define SEG33COM0_size                           0x1
#define SEG33COM0_value_mask                     0x2
#define SEG33COM0_clear_mask                     0xFD

#define S33C0                                    0x1
#define S33C0_address                            0xF64
#define S33C0_position                           0x1
#define S33C0_size                               0x1
#define S33C0_value_mask                         0x2
#define S33C0_clear_mask                         0xFD

#define S34C0                                    0x2
#define S34C0_address                            0xF64
#define S34C0_position                           0x2
#define S34C0_size                               0x1
#define S34C0_value_mask                         0x4
#define S34C0_clear_mask                         0xFB

#define SEG34COM0                                0x2
#define SEG34COM0_address                        0xF64
#define SEG34COM0_position                       0x2
#define SEG34COM0_size                           0x1
#define SEG34COM0_value_mask                     0x4
#define SEG34COM0_clear_mask                     0xFB

#define S35C0                                    0x3
#define S35C0_address                            0xF64
#define S35C0_position                           0x3
#define S35C0_size                               0x1
#define S35C0_value_mask                         0x8
#define S35C0_clear_mask                         0xF7

#define SEG35COM0                                0x3
#define SEG35COM0_address                        0xF64
#define SEG35COM0_position                       0x3
#define SEG35COM0_size                           0x1
#define SEG35COM0_value_mask                     0x8
#define SEG35COM0_clear_mask                     0xF7

#define S36C0                                    0x4
#define S36C0_address                            0xF64
#define S36C0_position                           0x4
#define S36C0_size                               0x1
#define S36C0_value_mask                         0x10
#define S36C0_clear_mask                         0xEF

#define SEG36COM0                                0x4
#define SEG36COM0_address                        0xF64
#define SEG36COM0_position                       0x4
#define SEG36COM0_size                           0x1
#define SEG36COM0_value_mask                     0x10
#define SEG36COM0_clear_mask                     0xEF

#define SEG37COM0                                0x5
#define SEG37COM0_address                        0xF64
#define SEG37COM0_position                       0x5
#define SEG37COM0_size                           0x1
#define SEG37COM0_value_mask                     0x20
#define SEG37COM0_clear_mask                     0xDF

#define S37C0                                    0x5
#define S37C0_address                            0xF64
#define S37C0_position                           0x5
#define S37C0_size                               0x1
#define S37C0_value_mask                         0x20
#define S37C0_clear_mask                         0xDF

#define S38C0                                    0x6
#define S38C0_address                            0xF64
#define S38C0_position                           0x6
#define S38C0_size                               0x1
#define S38C0_value_mask                         0x40
#define S38C0_clear_mask                         0xBF

#define SEG38COM0                                0x6
#define SEG38COM0_address                        0xF64
#define SEG38COM0_position                       0x6
#define SEG38COM0_size                           0x1
#define SEG38COM0_value_mask                     0x40
#define SEG38COM0_clear_mask                     0xBF

#define SEG39COM0                                0x7
#define SEG39COM0_address                        0xF64
#define SEG39COM0_position                       0x7
#define SEG39COM0_size                           0x1
#define SEG39COM0_value_mask                     0x80
#define SEG39COM0_clear_mask                     0x7F

#define S39C0                                    0x7
#define S39C0_address                            0xF64
#define S39C0_position                           0x7
#define S39C0_size                               0x1
#define S39C0_value_mask                         0x80
#define S39C0_clear_mask                         0x7F


/*----------------------------------------------------------------------#
| LCDDATA5                                                        0xF65 |
#-----------------------------------------------------------------------#
| S47C0 | S46C0 | S45C0 | SEG44COM0 | S43C0 | S42C0 | SEG41COM0 | S40C0 |
#-----------------------------------------------------------------------#
| 7     | 6     | 5     | 4         | 3     | 2     | 1         | 0     |
#----------------------------------------------------------------------*/

#define LCDDATA5                                 0x0
#define LCDDATA5_address                         0xF65
#define LCDDATA5_position                        0x0
#define LCDDATA5_size                            0x8
#define LCDDATA5_value_mask                      0xFF
#define LCDDATA5_clear_mask                      0x0

#define S40C0                                    0x0
#define S40C0_address                            0xF65
#define S40C0_position                           0x0
#define S40C0_size                               0x1
#define S40C0_value_mask                         0x1
#define S40C0_clear_mask                         0xFE

#define SEG40COM0                                0x0
#define SEG40COM0_address                        0xF65
#define SEG40COM0_position                       0x0
#define SEG40COM0_size                           0x1
#define SEG40COM0_value_mask                     0x1
#define SEG40COM0_clear_mask                     0xFE

#define S40C15                                   0x0
#define S40C15_address                           0xF65
#define S40C15_position                          0x0
#define S40C15_size                              0x1
#define S40C15_value_mask                        0x1
#define S40C15_clear_mask                        0xFE

#define SEG41COM0                                0x1
#define SEG41COM0_address                        0xF65
#define SEG41COM0_position                       0x1
#define SEG41COM0_size                           0x1
#define SEG41COM0_value_mask                     0x2
#define SEG41COM0_clear_mask                     0xFD

#define S41C0                                    0x1
#define S41C0_address                            0xF65
#define S41C0_position                           0x1
#define S41C0_size                               0x1
#define S41C0_value_mask                         0x2
#define S41C0_clear_mask                         0xFD

#define S42C0                                    0x2
#define S42C0_address                            0xF65
#define S42C0_position                           0x2
#define S42C0_size                               0x1
#define S42C0_value_mask                         0x4
#define S42C0_clear_mask                         0xFB

#define SEG42COM0                                0x2
#define SEG42COM0_address                        0xF65
#define SEG42COM0_position                       0x2
#define SEG42COM0_size                           0x1
#define SEG42COM0_value_mask                     0x4
#define SEG42COM0_clear_mask                     0xFB

#define S43C0                                    0x3
#define S43C0_address                            0xF65
#define S43C0_position                           0x3
#define S43C0_size                               0x1
#define S43C0_value_mask                         0x8
#define S43C0_clear_mask                         0xF7

#define SEG43COM0                                0x3
#define SEG43COM0_address                        0xF65
#define SEG43COM0_position                       0x3
#define SEG43COM0_size                           0x1
#define SEG43COM0_value_mask                     0x8
#define SEG43COM0_clear_mask                     0xF7

#define SEG44COM0                                0x4
#define SEG44COM0_address                        0xF65
#define SEG44COM0_position                       0x4
#define SEG44COM0_size                           0x1
#define SEG44COM0_value_mask                     0x10
#define SEG44COM0_clear_mask                     0xEF

#define S44C0                                    0x4
#define S44C0_address                            0xF65
#define S44C0_position                           0x4
#define S44C0_size                               0x1
#define S44C0_value_mask                         0x10
#define S44C0_clear_mask                         0xEF

#define S45C0                                    0x5
#define S45C0_address                            0xF65
#define S45C0_position                           0x5
#define S45C0_size                               0x1
#define S45C0_value_mask                         0x20
#define S45C0_clear_mask                         0xDF

#define SEG45COM0                                0x5
#define SEG45COM0_address                        0xF65
#define SEG45COM0_position                       0x5
#define SEG45COM0_size                           0x1
#define SEG45COM0_value_mask                     0x20
#define SEG45COM0_clear_mask                     0xDF

#define S46C0                                    0x6
#define S46C0_address                            0xF65
#define S46C0_position                           0x6
#define S46C0_size                               0x1
#define S46C0_value_mask                         0x40
#define S46C0_clear_mask                         0xBF

#define SEG46COM0                                0x6
#define SEG46COM0_address                        0xF65
#define SEG46COM0_position                       0x6
#define SEG46COM0_size                           0x1
#define SEG46COM0_value_mask                     0x40
#define SEG46COM0_clear_mask                     0xBF

#define S47C0                                    0x7
#define S47C0_address                            0xF65
#define S47C0_position                           0x7
#define S47C0_size                               0x1
#define S47C0_value_mask                         0x80
#define S47C0_clear_mask                         0x7F

#define SEG47COM0                                0x7
#define SEG47COM0_address                        0xF65
#define SEG47COM0_position                       0x7
#define SEG47COM0_size                           0x1
#define SEG47COM0_value_mask                     0x80
#define SEG47COM0_clear_mask                     0x7F


/*-------------------------------------------------------------------------#
| LCDDATA6                                                           0xF66 |
#--------------------------------------------------------------------------#
| SEG7COM1 | SEG6COM1 | S5C1 | SEG4COM1 | S03C1 | S02C1 | S01C1 | SEG0COM1 |
#--------------------------------------------------------------------------#
| 7        | 6        | 5    | 4        | 3     | 2     | 1     | 0        |
#-------------------------------------------------------------------------*/

#define SEG0COM1                                 0x0
#define SEG0COM1_address                         0xF66
#define SEG0COM1_position                        0x0
#define SEG0COM1_size                            0x1
#define SEG0COM1_value_mask                      0x1
#define SEG0COM1_clear_mask                      0xFE

#define LCDDATA6                                 0x0
#define LCDDATA6_address                         0xF66
#define LCDDATA6_position                        0x0
#define LCDDATA6_size                            0x8
#define LCDDATA6_value_mask                      0xFF
#define LCDDATA6_clear_mask                      0x0

#define S00C1                                    0x0
#define S00C1_address                            0xF66
#define S00C1_position                           0x0
#define S00C1_size                               0x1
#define S00C1_value_mask                         0x1
#define S00C1_clear_mask                         0xFE

#define S0C1                                     0x0
#define S0C1_address                             0xF66
#define S0C1_position                            0x0
#define S0C1_size                                0x1
#define S0C1_value_mask                          0x1
#define S0C1_clear_mask                          0xFE

#define S01C1                                    0x1
#define S01C1_address                            0xF66
#define S01C1_position                           0x1
#define S01C1_size                               0x1
#define S01C1_value_mask                         0x2
#define S01C1_clear_mask                         0xFD

#define SEG1COM1                                 0x1
#define SEG1COM1_address                         0xF66
#define SEG1COM1_position                        0x1
#define SEG1COM1_size                            0x1
#define SEG1COM1_value_mask                      0x2
#define SEG1COM1_clear_mask                      0xFD

#define S1C1                                     0x1
#define S1C1_address                             0xF66
#define S1C1_position                            0x1
#define S1C1_size                                0x1
#define S1C1_value_mask                          0x2
#define S1C1_clear_mask                          0xFD

#define S02C1                                    0x2
#define S02C1_address                            0xF66
#define S02C1_position                           0x2
#define S02C1_size                               0x1
#define S02C1_value_mask                         0x4
#define S02C1_clear_mask                         0xFB

#define S2C1                                     0x2
#define S2C1_address                             0xF66
#define S2C1_position                            0x2
#define S2C1_size                                0x1
#define S2C1_value_mask                          0x4
#define S2C1_clear_mask                          0xFB

#define SEG2COM1                                 0x2
#define SEG2COM1_address                         0xF66
#define SEG2COM1_position                        0x2
#define SEG2COM1_size                            0x1
#define SEG2COM1_value_mask                      0x4
#define SEG2COM1_clear_mask                      0xFB

#define S03C1                                    0x3
#define S03C1_address                            0xF66
#define S03C1_position                           0x3
#define S03C1_size                               0x1
#define S03C1_value_mask                         0x8
#define S03C1_clear_mask                         0xF7

#define SEG3COM1                                 0x3
#define SEG3COM1_address                         0xF66
#define SEG3COM1_position                        0x3
#define SEG3COM1_size                            0x1
#define SEG3COM1_value_mask                      0x8
#define SEG3COM1_clear_mask                      0xF7

#define S3C1                                     0x3
#define S3C1_address                             0xF66
#define S3C1_position                            0x3
#define S3C1_size                                0x1
#define S3C1_value_mask                          0x8
#define S3C1_clear_mask                          0xF7

#define SEG4COM1                                 0x4
#define SEG4COM1_address                         0xF66
#define SEG4COM1_position                        0x4
#define SEG4COM1_size                            0x1
#define SEG4COM1_value_mask                      0x10
#define SEG4COM1_clear_mask                      0xEF

#define S4C1                                     0x4
#define S4C1_address                             0xF66
#define S4C1_position                            0x4
#define S4C1_size                                0x1
#define S4C1_value_mask                          0x10
#define S4C1_clear_mask                          0xEF

#define S04C1                                    0x4
#define S04C1_address                            0xF66
#define S04C1_position                           0x4
#define S04C1_size                               0x1
#define S04C1_value_mask                         0x10
#define S04C1_clear_mask                         0xEF

#define S5C1                                     0x5
#define S5C1_address                             0xF66
#define S5C1_position                            0x5
#define S5C1_size                                0x1
#define S5C1_value_mask                          0x20
#define S5C1_clear_mask                          0xDF

#define S05C1                                    0x5
#define S05C1_address                            0xF66
#define S05C1_position                           0x5
#define S05C1_size                               0x1
#define S05C1_value_mask                         0x20
#define S05C1_clear_mask                         0xDF

#define SEG5COM1                                 0x5
#define SEG5COM1_address                         0xF66
#define SEG5COM1_position                        0x5
#define SEG5COM1_size                            0x1
#define SEG5COM1_value_mask                      0x20
#define SEG5COM1_clear_mask                      0xDF

#define SEG6COM1                                 0x6
#define SEG6COM1_address                         0xF66
#define SEG6COM1_position                        0x6
#define SEG6COM1_size                            0x1
#define SEG6COM1_value_mask                      0x40
#define SEG6COM1_clear_mask                      0xBF

#define S6C1                                     0x6
#define S6C1_address                             0xF66
#define S6C1_position                            0x6
#define S6C1_size                                0x1
#define S6C1_value_mask                          0x40
#define S6C1_clear_mask                          0xBF

#define S06C1                                    0x6
#define S06C1_address                            0xF66
#define S06C1_position                           0x6
#define S06C1_size                               0x1
#define S06C1_value_mask                         0x40
#define S06C1_clear_mask                         0xBF

#define SEG7COM1                                 0x7
#define SEG7COM1_address                         0xF66
#define SEG7COM1_position                        0x7
#define SEG7COM1_size                            0x1
#define SEG7COM1_value_mask                      0x80
#define SEG7COM1_clear_mask                      0x7F

#define S7C1                                     0x7
#define S7C1_address                             0xF66
#define S7C1_position                            0x7
#define S7C1_size                                0x1
#define S7C1_value_mask                          0x80
#define S7C1_clear_mask                          0x7F

#define S07C1                                    0x7
#define S07C1_address                            0xF66
#define S07C1_position                           0x7
#define S07C1_size                               0x1
#define S07C1_value_mask                         0x80
#define S07C1_clear_mask                         0x7F


/*-------------------------------------------------------------------------#
| LCDDATA7                                                           0xF67 |
#--------------------------------------------------------------------------#
| SEG15COM1 | S14C1 | S13C1 | S12C1 | SEG11COM1 | S10C1 | SEG9COM1 | S08C1 |
#--------------------------------------------------------------------------#
| 7         | 6     | 5     | 4     | 3         | 2     | 1        | 0     |
#-------------------------------------------------------------------------*/

#define LCDDATA7                                 0x0
#define LCDDATA7_address                         0xF67
#define LCDDATA7_position                        0x0
#define LCDDATA7_size                            0x8
#define LCDDATA7_value_mask                      0xFF
#define LCDDATA7_clear_mask                      0x0

#define S08C1                                    0x0
#define S08C1_address                            0xF67
#define S08C1_position                           0x0
#define S08C1_size                               0x1
#define S08C1_value_mask                         0x1
#define S08C1_clear_mask                         0xFE

#define S8C1                                     0x0
#define S8C1_address                             0xF67
#define S8C1_position                            0x0
#define S8C1_size                                0x1
#define S8C1_value_mask                          0x1
#define S8C1_clear_mask                          0xFE

#define SEG8COM1                                 0x0
#define SEG8COM1_address                         0xF67
#define SEG8COM1_position                        0x0
#define SEG8COM1_size                            0x1
#define SEG8COM1_value_mask                      0x1
#define SEG8COM1_clear_mask                      0xFE

#define SEG9COM1                                 0x1
#define SEG9COM1_address                         0xF67
#define SEG9COM1_position                        0x1
#define SEG9COM1_size                            0x1
#define SEG9COM1_value_mask                      0x2
#define SEG9COM1_clear_mask                      0xFD

#define S09C1                                    0x1
#define S09C1_address                            0xF67
#define S09C1_position                           0x1
#define S09C1_size                               0x1
#define S09C1_value_mask                         0x2
#define S09C1_clear_mask                         0xFD

#define S9C1                                     0x1
#define S9C1_address                             0xF67
#define S9C1_position                            0x1
#define S9C1_size                                0x1
#define S9C1_value_mask                          0x2
#define S9C1_clear_mask                          0xFD

#define S10C1                                    0x2
#define S10C1_address                            0xF67
#define S10C1_position                           0x2
#define S10C1_size                               0x1
#define S10C1_value_mask                         0x4
#define S10C1_clear_mask                         0xFB

#define SEG10COM1                                0x2
#define SEG10COM1_address                        0xF67
#define SEG10COM1_position                       0x2
#define SEG10COM1_size                           0x1
#define SEG10COM1_value_mask                     0x4
#define SEG10COM1_clear_mask                     0xFB

#define S11C1                                    0x3
#define S11C1_address                            0xF67
#define S11C1_position                           0x3
#define S11C1_size                               0x1
#define S11C1_value_mask                         0x8
#define S11C1_clear_mask                         0xF7

#define SEG11COM1                                0x3
#define SEG11COM1_address                        0xF67
#define SEG11COM1_position                       0x3
#define SEG11COM1_size                           0x1
#define SEG11COM1_value_mask                     0x8
#define SEG11COM1_clear_mask                     0xF7

#define S12C1                                    0x4
#define S12C1_address                            0xF67
#define S12C1_position                           0x4
#define S12C1_size                               0x1
#define S12C1_value_mask                         0x10
#define S12C1_clear_mask                         0xEF

#define SEG12COM1                                0x4
#define SEG12COM1_address                        0xF67
#define SEG12COM1_position                       0x4
#define SEG12COM1_size                           0x1
#define SEG12COM1_value_mask                     0x10
#define SEG12COM1_clear_mask                     0xEF

#define S13C1                                    0x5
#define S13C1_address                            0xF67
#define S13C1_position                           0x5
#define S13C1_size                               0x1
#define S13C1_value_mask                         0x20
#define S13C1_clear_mask                         0xDF

#define SEG13COM1                                0x5
#define SEG13COM1_address                        0xF67
#define SEG13COM1_position                       0x5
#define SEG13COM1_size                           0x1
#define SEG13COM1_value_mask                     0x20
#define SEG13COM1_clear_mask                     0xDF

#define S14C1                                    0x6
#define S14C1_address                            0xF67
#define S14C1_position                           0x6
#define S14C1_size                               0x1
#define S14C1_value_mask                         0x40
#define S14C1_clear_mask                         0xBF

#define SEG14COM1                                0x6
#define SEG14COM1_address                        0xF67
#define SEG14COM1_position                       0x6
#define SEG14COM1_size                           0x1
#define SEG14COM1_value_mask                     0x40
#define SEG14COM1_clear_mask                     0xBF

#define SEG15COM1                                0x7
#define SEG15COM1_address                        0xF67
#define SEG15COM1_position                       0x7
#define SEG15COM1_size                           0x1
#define SEG15COM1_value_mask                     0x80
#define SEG15COM1_clear_mask                     0x7F

#define S15C1                                    0x7
#define S15C1_address                            0xF67
#define S15C1_position                           0x7
#define S15C1_size                               0x1
#define S15C1_value_mask                         0x80
#define S15C1_clear_mask                         0x7F


/*--------------------------------------------------------------------------#
| LCDDATA8                                                            0xF68 |
#---------------------------------------------------------------------------#
| S23C1 | SEG22COM1 | S21C1 | S20C1 | S19C1 | SEG18COM1 | S17C1 | SEG16COM1 |
#---------------------------------------------------------------------------#
| 7     | 6         | 5     | 4     | 3     | 2         | 1     | 0         |
#--------------------------------------------------------------------------*/

#define SEG16COM1                                0x0
#define SEG16COM1_address                        0xF68
#define SEG16COM1_position                       0x0
#define SEG16COM1_size                           0x1
#define SEG16COM1_value_mask                     0x1
#define SEG16COM1_clear_mask                     0xFE

#define LCDDATA8                                 0x0
#define LCDDATA8_address                         0xF68
#define LCDDATA8_position                        0x0
#define LCDDATA8_size                            0x8
#define LCDDATA8_value_mask                      0xFF
#define LCDDATA8_clear_mask                      0x0

#define S16C1                                    0x0
#define S16C1_address                            0xF68
#define S16C1_position                           0x0
#define S16C1_size                               0x1
#define S16C1_value_mask                         0x1
#define S16C1_clear_mask                         0xFE

#define SEG17COM1                                0x1
#define SEG17COM1_address                        0xF68
#define SEG17COM1_position                       0x1
#define SEG17COM1_size                           0x1
#define SEG17COM1_value_mask                     0x2
#define SEG17COM1_clear_mask                     0xFD

#define S17C1                                    0x1
#define S17C1_address                            0xF68
#define S17C1_position                           0x1
#define S17C1_size                               0x1
#define S17C1_value_mask                         0x2
#define S17C1_clear_mask                         0xFD

#define SEG18COM1                                0x2
#define SEG18COM1_address                        0xF68
#define SEG18COM1_position                       0x2
#define SEG18COM1_size                           0x1
#define SEG18COM1_value_mask                     0x4
#define SEG18COM1_clear_mask                     0xFB

#define S18C1                                    0x2
#define S18C1_address                            0xF68
#define S18C1_position                           0x2
#define S18C1_size                               0x1
#define S18C1_value_mask                         0x4
#define S18C1_clear_mask                         0xFB

#define S19C1                                    0x3
#define S19C1_address                            0xF68
#define S19C1_position                           0x3
#define S19C1_size                               0x1
#define S19C1_value_mask                         0x8
#define S19C1_clear_mask                         0xF7

#define SEG19COM1                                0x3
#define SEG19COM1_address                        0xF68
#define SEG19COM1_position                       0x3
#define SEG19COM1_size                           0x1
#define SEG19COM1_value_mask                     0x8
#define SEG19COM1_clear_mask                     0xF7

#define S20C1                                    0x4
#define S20C1_address                            0xF68
#define S20C1_position                           0x4
#define S20C1_size                               0x1
#define S20C1_value_mask                         0x10
#define S20C1_clear_mask                         0xEF

#define SEG20COM1                                0x4
#define SEG20COM1_address                        0xF68
#define SEG20COM1_position                       0x4
#define SEG20COM1_size                           0x1
#define SEG20COM1_value_mask                     0x10
#define SEG20COM1_clear_mask                     0xEF

#define S21C1                                    0x5
#define S21C1_address                            0xF68
#define S21C1_position                           0x5
#define S21C1_size                               0x1
#define S21C1_value_mask                         0x20
#define S21C1_clear_mask                         0xDF

#define SEG21COM1                                0x5
#define SEG21COM1_address                        0xF68
#define SEG21COM1_position                       0x5
#define SEG21COM1_size                           0x1
#define SEG21COM1_value_mask                     0x20
#define SEG21COM1_clear_mask                     0xDF

#define SEG22COM1                                0x6
#define SEG22COM1_address                        0xF68
#define SEG22COM1_position                       0x6
#define SEG22COM1_size                           0x1
#define SEG22COM1_value_mask                     0x40
#define SEG22COM1_clear_mask                     0xBF

#define S22C1                                    0x6
#define S22C1_address                            0xF68
#define S22C1_position                           0x6
#define S22C1_size                               0x1
#define S22C1_value_mask                         0x40
#define S22C1_clear_mask                         0xBF

#define S23C1                                    0x7
#define S23C1_address                            0xF68
#define S23C1_position                           0x7
#define S23C1_size                               0x1
#define S23C1_value_mask                         0x80
#define S23C1_clear_mask                         0x7F

#define SEG23COM1                                0x7
#define SEG23COM1_address                        0xF68
#define SEG23COM1_position                       0x7
#define SEG23COM1_size                           0x1
#define SEG23COM1_value_mask                     0x80
#define SEG23COM1_clear_mask                     0x7F


/*------------------------------------------------------------------------------#
| LCDDATA9                                                                0xF69 |
#-------------------------------------------------------------------------------#
| S31C1 | SEG30COM1 | SEG29COM1 | SEG28COM1 | SEG27COM1 | S26C1 | S25C1 | S24C1 |
#-------------------------------------------------------------------------------#
| 7     | 6         | 5         | 4         | 3         | 2     | 1     | 0     |
#------------------------------------------------------------------------------*/

#define S24C1                                    0x0
#define S24C1_address                            0xF69
#define S24C1_position                           0x0
#define S24C1_size                               0x1
#define S24C1_value_mask                         0x1
#define S24C1_clear_mask                         0xFE

#define SEG24COM1                                0x0
#define SEG24COM1_address                        0xF69
#define SEG24COM1_position                       0x0
#define SEG24COM1_size                           0x1
#define SEG24COM1_value_mask                     0x1
#define SEG24COM1_clear_mask                     0xFE

#define LCDDATA9                                 0x0
#define LCDDATA9_address                         0xF69
#define LCDDATA9_position                        0x0
#define LCDDATA9_size                            0x8
#define LCDDATA9_value_mask                      0xFF
#define LCDDATA9_clear_mask                      0x0

#define S25C1                                    0x1
#define S25C1_address                            0xF69
#define S25C1_position                           0x1
#define S25C1_size                               0x1
#define S25C1_value_mask                         0x2
#define S25C1_clear_mask                         0xFD

#define SEG25COM1                                0x1
#define SEG25COM1_address                        0xF69
#define SEG25COM1_position                       0x1
#define SEG25COM1_size                           0x1
#define SEG25COM1_value_mask                     0x2
#define SEG25COM1_clear_mask                     0xFD

#define S26C1                                    0x2
#define S26C1_address                            0xF69
#define S26C1_position                           0x2
#define S26C1_size                               0x1
#define S26C1_value_mask                         0x4
#define S26C1_clear_mask                         0xFB

#define SEG26COM1                                0x2
#define SEG26COM1_address                        0xF69
#define SEG26COM1_position                       0x2
#define SEG26COM1_size                           0x1
#define SEG26COM1_value_mask                     0x4
#define SEG26COM1_clear_mask                     0xFB

#define SEG27COM1                                0x3
#define SEG27COM1_address                        0xF69
#define SEG27COM1_position                       0x3
#define SEG27COM1_size                           0x1
#define SEG27COM1_value_mask                     0x8
#define SEG27COM1_clear_mask                     0xF7

#define S27C1                                    0x3
#define S27C1_address                            0xF69
#define S27C1_position                           0x3
#define S27C1_size                               0x1
#define S27C1_value_mask                         0x8
#define S27C1_clear_mask                         0xF7

#define SEG28COM1                                0x4
#define SEG28COM1_address                        0xF69
#define SEG28COM1_position                       0x4
#define SEG28COM1_size                           0x1
#define SEG28COM1_value_mask                     0x10
#define SEG28COM1_clear_mask                     0xEF

#define S28C1                                    0x4
#define S28C1_address                            0xF69
#define S28C1_position                           0x4
#define S28C1_size                               0x1
#define S28C1_value_mask                         0x10
#define S28C1_clear_mask                         0xEF

#define SEG29COM1                                0x5
#define SEG29COM1_address                        0xF69
#define SEG29COM1_position                       0x5
#define SEG29COM1_size                           0x1
#define SEG29COM1_value_mask                     0x20
#define SEG29COM1_clear_mask                     0xDF

#define S29C1                                    0x5
#define S29C1_address                            0xF69
#define S29C1_position                           0x5
#define S29C1_size                               0x1
#define S29C1_value_mask                         0x20
#define S29C1_clear_mask                         0xDF

#define SEG30COM1                                0x6
#define SEG30COM1_address                        0xF69
#define SEG30COM1_position                       0x6
#define SEG30COM1_size                           0x1
#define SEG30COM1_value_mask                     0x40
#define SEG30COM1_clear_mask                     0xBF

#define S30C1                                    0x6
#define S30C1_address                            0xF69
#define S30C1_position                           0x6
#define S30C1_size                               0x1
#define S30C1_value_mask                         0x40
#define S30C1_clear_mask                         0xBF

#define S31C1                                    0x7
#define S31C1_address                            0xF69
#define S31C1_position                           0x7
#define S31C1_size                               0x1
#define S31C1_value_mask                         0x80
#define S31C1_clear_mask                         0x7F

#define SEG31COM1                                0x7
#define SEG31COM1_address                        0xF69
#define SEG31COM1_position                       0x7
#define SEG31COM1_size                           0x1
#define SEG31COM1_value_mask                     0x80
#define SEG31COM1_clear_mask                     0x7F


/*--------------------------------------------------------------------------#
| LCDDATA10                                                           0xF6A |
#---------------------------------------------------------------------------#
| SEG39COM1 | S38C1 | SEG37COM1 | S36C1 | S35C1 | S34C1 | SEG33COM1 | S32C1 |
#---------------------------------------------------------------------------#
| 7         | 6     | 5         | 4     | 3     | 2     | 1         | 0     |
#--------------------------------------------------------------------------*/

#define S32C1                                    0x0
#define S32C1_address                            0xF6A
#define S32C1_position                           0x0
#define S32C1_size                               0x1
#define S32C1_value_mask                         0x1
#define S32C1_clear_mask                         0xFE

#define LCDDATA10                                0x0
#define LCDDATA10_address                        0xF6A
#define LCDDATA10_position                       0x0
#define LCDDATA10_size                           0x8
#define LCDDATA10_value_mask                     0xFF
#define LCDDATA10_clear_mask                     0x0

#define SEG32COM1                                0x0
#define SEG32COM1_address                        0xF6A
#define SEG32COM1_position                       0x0
#define SEG32COM1_size                           0x1
#define SEG32COM1_value_mask                     0x1
#define SEG32COM1_clear_mask                     0xFE

#define SEG33COM1                                0x1
#define SEG33COM1_address                        0xF6A
#define SEG33COM1_position                       0x1
#define SEG33COM1_size                           0x1
#define SEG33COM1_value_mask                     0x2
#define SEG33COM1_clear_mask                     0xFD

#define S33C1                                    0x1
#define S33C1_address                            0xF6A
#define S33C1_position                           0x1
#define S33C1_size                               0x1
#define S33C1_value_mask                         0x2
#define S33C1_clear_mask                         0xFD

#define S34C1                                    0x2
#define S34C1_address                            0xF6A
#define S34C1_position                           0x2
#define S34C1_size                               0x1
#define S34C1_value_mask                         0x4
#define S34C1_clear_mask                         0xFB

#define SEG34COM1                                0x2
#define SEG34COM1_address                        0xF6A
#define SEG34COM1_position                       0x2
#define SEG34COM1_size                           0x1
#define SEG34COM1_value_mask                     0x4
#define SEG34COM1_clear_mask                     0xFB

#define S35C1                                    0x3
#define S35C1_address                            0xF6A
#define S35C1_position                           0x3
#define S35C1_size                               0x1
#define S35C1_value_mask                         0x8
#define S35C1_clear_mask                         0xF7

#define SEG35COM1                                0x3
#define SEG35COM1_address                        0xF6A
#define SEG35COM1_position                       0x3
#define SEG35COM1_size                           0x1
#define SEG35COM1_value_mask                     0x8
#define SEG35COM1_clear_mask                     0xF7

#define S36C1                                    0x4
#define S36C1_address                            0xF6A
#define S36C1_position                           0x4
#define S36C1_size                               0x1
#define S36C1_value_mask                         0x10
#define S36C1_clear_mask                         0xEF

#define SEG36COM1                                0x4
#define SEG36COM1_address                        0xF6A
#define SEG36COM1_position                       0x4
#define SEG36COM1_size                           0x1
#define SEG36COM1_value_mask                     0x10
#define SEG36COM1_clear_mask                     0xEF

#define SEG37COM1                                0x5
#define SEG37COM1_address                        0xF6A
#define SEG37COM1_position                       0x5
#define SEG37COM1_size                           0x1
#define SEG37COM1_value_mask                     0x20
#define SEG37COM1_clear_mask                     0xDF

#define S37C1                                    0x5
#define S37C1_address                            0xF6A
#define S37C1_position                           0x5
#define S37C1_size                               0x1
#define S37C1_value_mask                         0x20
#define S37C1_clear_mask                         0xDF

#define S38C1                                    0x6
#define S38C1_address                            0xF6A
#define S38C1_position                           0x6
#define S38C1_size                               0x1
#define S38C1_value_mask                         0x40
#define S38C1_clear_mask                         0xBF

#define SEG38COM1                                0x6
#define SEG38COM1_address                        0xF6A
#define SEG38COM1_position                       0x6
#define SEG38COM1_size                           0x1
#define SEG38COM1_value_mask                     0x40
#define SEG38COM1_clear_mask                     0xBF

#define SEG39COM1                                0x7
#define SEG39COM1_address                        0xF6A
#define SEG39COM1_position                       0x7
#define SEG39COM1_size                           0x1
#define SEG39COM1_value_mask                     0x80
#define SEG39COM1_clear_mask                     0x7F

#define S39C1                                    0x7
#define S39C1_address                            0xF6A
#define S39C1_position                           0x7
#define S39C1_size                               0x1
#define S39C1_value_mask                         0x80
#define S39C1_clear_mask                         0x7F


/*-------------------------------------------------------------------------------------#
| RCSTA2                                                                         0xF6B |
#--------------------------------------------------------------------------------------#
| RCSTA2_SPEN | RC92 | SREN2 | RCSTA2_CREN | RCSTA2_ADEN | FERR2 | RCSTA2_OERR | RCD82 |
#--------------------------------------------------------------------------------------#
| 7           | 6    | 5     | 4           | 3           | 2     | 1           | 0     |
#-------------------------------------------------------------------------------------*/

#define RCSTA2                                   0x0
#define RCSTA2_address                           0xF6B
#define RCSTA2_position                          0x0
#define RCSTA2_size                              0x8
#define RCSTA2_value_mask                        0xFF
#define RCSTA2_clear_mask                        0x0

#define RCD82                                    0x0
#define RCD82_address                            0xF6B
#define RCD82_position                           0x0
#define RCD82_size                               0x1
#define RCD82_value_mask                         0x1
#define RCD82_clear_mask                         0xFE

#define RX9D2                                    0x0
#define RX9D2_address                            0xF6B
#define RX9D2_position                           0x0
#define RX9D2_size                               0x1
#define RX9D2_value_mask                         0x1
#define RX9D2_clear_mask                         0xFE

#define RCSTA2_RCD8                              0x0
#define RCSTA2_RCD8_address                      0xF6B
#define RCSTA2_RCD8_position                     0x0
#define RCSTA2_RCD8_size                         0x1
#define RCSTA2_RCD8_value_mask                   0x1
#define RCSTA2_RCD8_clear_mask                   0xFE

#define RCSTA2_RX9D                              0x0
#define RCSTA2_RX9D_address                      0xF6B
#define RCSTA2_RX9D_position                     0x0
#define RCSTA2_RX9D_size                         0x1
#define RCSTA2_RX9D_value_mask                   0x1
#define RCSTA2_RX9D_clear_mask                   0xFE

#define RCSTA2_OERR                              0x1
#define RCSTA2_OERR_address                      0xF6B
#define RCSTA2_OERR_position                     0x1
#define RCSTA2_OERR_size                         0x1
#define RCSTA2_OERR_value_mask                   0x2
#define RCSTA2_OERR_clear_mask                   0xFD

#define OERR2                                    0x1
#define OERR2_address                            0xF6B
#define OERR2_position                           0x1
#define OERR2_size                               0x1
#define OERR2_value_mask                         0x2
#define OERR2_clear_mask                         0xFD

#define FERR2                                    0x2
#define FERR2_address                            0xF6B
#define FERR2_position                           0x2
#define FERR2_size                               0x1
#define FERR2_value_mask                         0x4
#define FERR2_clear_mask                         0xFB

#define RCSTA2_FERR                              0x2
#define RCSTA2_FERR_address                      0xF6B
#define RCSTA2_FERR_position                     0x2
#define RCSTA2_FERR_size                         0x1
#define RCSTA2_FERR_value_mask                   0x4
#define RCSTA2_FERR_clear_mask                   0xFB

#define RCSTA2_ADEN                              0x3
#define RCSTA2_ADEN_address                      0xF6B
#define RCSTA2_ADEN_position                     0x3
#define RCSTA2_ADEN_size                         0x1
#define RCSTA2_ADEN_value_mask                   0x8
#define RCSTA2_ADEN_clear_mask                   0xF7

#define ADDEN2                                   0x3
#define ADDEN2_address                           0xF6B
#define ADDEN2_position                          0x3
#define ADDEN2_size                              0x1
#define ADDEN2_value_mask                        0x8
#define ADDEN2_clear_mask                        0xF7

#define RCSTA2_ADDEN                             0x3
#define RCSTA2_ADDEN_address                     0xF6B
#define RCSTA2_ADDEN_position                    0x3
#define RCSTA2_ADDEN_size                        0x1
#define RCSTA2_ADDEN_value_mask                  0x8
#define RCSTA2_ADDEN_clear_mask                  0xF7

#define RCSTA2_CREN                              0x4
#define RCSTA2_CREN_address                      0xF6B
#define RCSTA2_CREN_position                     0x4
#define RCSTA2_CREN_size                         0x1
#define RCSTA2_CREN_value_mask                   0x10
#define RCSTA2_CREN_clear_mask                   0xEF

#define CREN2                                    0x4
#define CREN2_address                            0xF6B
#define CREN2_position                           0x4
#define CREN2_size                               0x1
#define CREN2_value_mask                         0x10
#define CREN2_clear_mask                         0xEF

#define SREN2                                    0x5
#define SREN2_address                            0xF6B
#define SREN2_position                           0x5
#define SREN2_size                               0x1
#define SREN2_value_mask                         0x20
#define SREN2_clear_mask                         0xDF

#define RCSTA2_SREN                              0x5
#define RCSTA2_SREN_address                      0xF6B
#define RCSTA2_SREN_position                     0x5
#define RCSTA2_SREN_size                         0x1
#define RCSTA2_SREN_value_mask                   0x20
#define RCSTA2_SREN_clear_mask                   0xDF

#define RC92                                     0x6
#define RC92_address                             0xF6B
#define RC92_position                            0x6
#define RC92_size                                0x1
#define RC92_value_mask                          0x40
#define RC92_clear_mask                          0xBF

#define RCSTA2_RX9                               0x6
#define RCSTA2_RX9_address                       0xF6B
#define RCSTA2_RX9_position                      0x6
#define RCSTA2_RX9_size                          0x1
#define RCSTA2_RX9_value_mask                    0x40
#define RCSTA2_RX9_clear_mask                    0xBF

#define RCSTA2_RC9                               0x6
#define RCSTA2_RC9_address                       0xF6B
#define RCSTA2_RC9_position                      0x6
#define RCSTA2_RC9_size                          0x1
#define RCSTA2_RC9_value_mask                    0x40
#define RCSTA2_RC9_clear_mask                    0xBF

#define RC8_92                                   0x6
#define RC8_92_address                           0xF6B
#define RC8_92_position                          0x6
#define RC8_92_size                              0x1
#define RC8_92_value_mask                        0x40
#define RC8_92_clear_mask                        0xBF

#define RCSTA2_RC8_9                             0x6
#define RCSTA2_RC8_9_address                     0xF6B
#define RCSTA2_RC8_9_position                    0x6
#define RCSTA2_RC8_9_size                        0x1
#define RCSTA2_RC8_9_value_mask                  0x40
#define RCSTA2_RC8_9_clear_mask                  0xBF

#define nRC8                                     0x6
#define nRC8_address                             0xF6B
#define nRC8_position                            0x6
#define nRC8_size                                0x1
#define nRC8_value_mask                          0x40
#define nRC8_clear_mask                          0xBF

#define NOT_RC8                                  0x6
#define NOT_RC8_address                          0xF6B
#define NOT_RC8_position                         0x6
#define NOT_RC8_size                             0x1
#define NOT_RC8_value_mask                       0x40
#define NOT_RC8_clear_mask                       0xBF

#define RX92                                     0x6
#define RX92_address                             0xF6B
#define RX92_position                            0x6
#define RX92_size                                0x1
#define RX92_value_mask                          0x40
#define RX92_clear_mask                          0xBF

#define RCSTA2_SPEN                              0x7
#define RCSTA2_SPEN_address                      0xF6B
#define RCSTA2_SPEN_position                     0x7
#define RCSTA2_SPEN_size                         0x1
#define RCSTA2_SPEN_value_mask                   0x80
#define RCSTA2_SPEN_clear_mask                   0x7F

#define SPEN2                                    0x7
#define SPEN2_address                            0xF6B
#define SPEN2_position                           0x7
#define SPEN2_size                               0x1
#define SPEN2_value_mask                         0x80
#define SPEN2_clear_mask                         0x7F


/*----------------------------------------------------------------------------------------#
| TXSTA2                                                                            0xF6C |
#-----------------------------------------------------------------------------------------#
| TXSTA2_CSRC | TX8_92 | TXEN2 | SYNC2 | SENDB2 | TXSTA2_BRGH | TXSTA2_TRMT | TXSTA2_TXD8 |
#-----------------------------------------------------------------------------------------#
| 7           | 6      | 5     | 4     | 3      | 2           | 1           | 0           |
#----------------------------------------------------------------------------------------*/

#define TXSTA2                                   0x0
#define TXSTA2_address                           0xF6C
#define TXSTA2_position                          0x0
#define TXSTA2_size                              0x8
#define TXSTA2_value_mask                        0xFF
#define TXSTA2_clear_mask                        0x0

#define TXSTA2_TXD8                              0x0
#define TXSTA2_TXD8_address                      0xF6C
#define TXSTA2_TXD8_position                     0x0
#define TXSTA2_TXD8_size                         0x1
#define TXSTA2_TXD8_value_mask                   0x1
#define TXSTA2_TXD8_clear_mask                   0xFE

#define TX9D2                                    0x0
#define TX9D2_address                            0xF6C
#define TX9D2_position                           0x0
#define TX9D2_size                               0x1
#define TX9D2_value_mask                         0x1
#define TX9D2_clear_mask                         0xFE

#define TXSTA2_TX9D                              0x0
#define TXSTA2_TX9D_address                      0xF6C
#define TXSTA2_TX9D_position                     0x0
#define TXSTA2_TX9D_size                         0x1
#define TXSTA2_TX9D_value_mask                   0x1
#define TXSTA2_TX9D_clear_mask                   0xFE

#define TXD82                                    0x0
#define TXD82_address                            0xF6C
#define TXD82_position                           0x0
#define TXD82_size                               0x1
#define TXD82_value_mask                         0x1
#define TXD82_clear_mask                         0xFE

#define TRMT2                                    0x1
#define TRMT2_address                            0xF6C
#define TRMT2_position                           0x1
#define TRMT2_size                               0x1
#define TRMT2_value_mask                         0x2
#define TRMT2_clear_mask                         0xFD

#define TXSTA2_TRMT                              0x1
#define TXSTA2_TRMT_address                      0xF6C
#define TXSTA2_TRMT_position                     0x1
#define TXSTA2_TRMT_size                         0x1
#define TXSTA2_TRMT_value_mask                   0x2
#define TXSTA2_TRMT_clear_mask                   0xFD

#define BRGH2                                    0x2
#define BRGH2_address                            0xF6C
#define BRGH2_position                           0x2
#define BRGH2_size                               0x1
#define BRGH2_value_mask                         0x4
#define BRGH2_clear_mask                         0xFB

#define TXSTA2_BRGH                              0x2
#define TXSTA2_BRGH_address                      0xF6C
#define TXSTA2_BRGH_position                     0x2
#define TXSTA2_BRGH_size                         0x1
#define TXSTA2_BRGH_value_mask                   0x4
#define TXSTA2_BRGH_clear_mask                   0xFB

#define SENDB2                                   0x3
#define SENDB2_address                           0xF6C
#define SENDB2_position                          0x3
#define SENDB2_size                              0x1
#define SENDB2_value_mask                        0x8
#define SENDB2_clear_mask                        0xF7

#define TXSTA2_SYNC                              0x4
#define TXSTA2_SYNC_address                      0xF6C
#define TXSTA2_SYNC_position                     0x4
#define TXSTA2_SYNC_size                         0x1
#define TXSTA2_SYNC_value_mask                   0x10
#define TXSTA2_SYNC_clear_mask                   0xEF

#define SYNC2                                    0x4
#define SYNC2_address                            0xF6C
#define SYNC2_position                           0x4
#define SYNC2_size                               0x1
#define SYNC2_value_mask                         0x10
#define SYNC2_clear_mask                         0xEF

#define TXEN2                                    0x5
#define TXEN2_address                            0xF6C
#define TXEN2_position                           0x5
#define TXEN2_size                               0x1
#define TXEN2_value_mask                         0x20
#define TXEN2_clear_mask                         0xDF

#define TXSTA2_TXEN                              0x5
#define TXSTA2_TXEN_address                      0xF6C
#define TXSTA2_TXEN_position                     0x5
#define TXSTA2_TXEN_size                         0x1
#define TXSTA2_TXEN_value_mask                   0x20
#define TXSTA2_TXEN_clear_mask                   0xDF

#define TX8_92                                   0x6
#define TX8_92_address                           0xF6C
#define TX8_92_position                          0x6
#define TX8_92_size                              0x1
#define TX8_92_value_mask                        0x40
#define TX8_92_clear_mask                        0xBF

#define TX92                                     0x6
#define TX92_address                             0xF6C
#define TX92_position                            0x6
#define TX92_size                                0x1
#define TX92_value_mask                          0x40
#define TX92_clear_mask                          0xBF

#define TXSTA2_TX9                               0x6
#define TXSTA2_TX9_address                       0xF6C
#define TXSTA2_TX9_position                      0x6
#define TXSTA2_TX9_size                          0x1
#define TXSTA2_TX9_value_mask                    0x40
#define TXSTA2_TX9_clear_mask                    0xBF

#define NOT_TX8                                  0x6
#define NOT_TX8_address                          0xF6C
#define NOT_TX8_position                         0x6
#define NOT_TX8_size                             0x1
#define NOT_TX8_value_mask                       0x40
#define NOT_TX8_clear_mask                       0xBF

#define nTX8                                     0x6
#define nTX8_address                             0xF6C
#define nTX8_position                            0x6
#define nTX8_size                                0x1
#define nTX8_value_mask                          0x40
#define nTX8_clear_mask                          0xBF

#define TXSTA2_TX8_9                             0x6
#define TXSTA2_TX8_9_address                     0xF6C
#define TXSTA2_TX8_9_position                    0x6
#define TXSTA2_TX8_9_size                        0x1
#define TXSTA2_TX8_9_value_mask                  0x40
#define TXSTA2_TX8_9_clear_mask                  0xBF

#define TXSTA2_CSRC                              0x7
#define TXSTA2_CSRC_address                      0xF6C
#define TXSTA2_CSRC_position                     0x7
#define TXSTA2_CSRC_size                         0x1
#define TXSTA2_CSRC_value_mask                   0x80
#define TXSTA2_CSRC_clear_mask                   0x7F

#define CSRC2                                    0x7
#define CSRC2_address                            0xF6C
#define CSRC2_position                           0x7
#define CSRC2_size                               0x1
#define CSRC2_value_mask                         0x80
#define CSRC2_clear_mask                         0x7F


/*--------------------------------------------------------------------------------------#
| LCDDATA11                                                                       0xF70 |
#---------------------------------------------------------------------------------------#
| S47C1 | S46C1 | SEG45COM1 | SEG44COM1 | SEG43COM1 | SEG42COM1 | SEG41COM1 | SEG40COM1 |
#---------------------------------------------------------------------------------------#
| 7     | 6     | 5         | 4         | 3         | 2         | 1         | 0         |
#--------------------------------------------------------------------------------------*/

#define SEG40COM1                                0x0
#define SEG40COM1_address                        0xF70
#define SEG40COM1_position                       0x0
#define SEG40COM1_size                           0x1
#define SEG40COM1_value_mask                     0x1
#define SEG40COM1_clear_mask                     0xFE

#define S40C1                                    0x0
#define S40C1_address                            0xF70
#define S40C1_position                           0x0
#define S40C1_size                               0x1
#define S40C1_value_mask                         0x1
#define S40C1_clear_mask                         0xFE

#define LCDDATA11                                0x0
#define LCDDATA11_address                        0xF70
#define LCDDATA11_position                       0x0
#define LCDDATA11_size                           0x8
#define LCDDATA11_value_mask                     0xFF
#define LCDDATA11_clear_mask                     0x0

#define SEG41COM1                                0x1
#define SEG41COM1_address                        0xF70
#define SEG41COM1_position                       0x1
#define SEG41COM1_size                           0x1
#define SEG41COM1_value_mask                     0x2
#define SEG41COM1_clear_mask                     0xFD

#define S41C1                                    0x1
#define S41C1_address                            0xF70
#define S41C1_position                           0x1
#define S41C1_size                               0x1
#define S41C1_value_mask                         0x2
#define S41C1_clear_mask                         0xFD

#define ADMSK1                                   0x1
#define ADMSK1_address                           0xF70
#define ADMSK1_position                          0x1
#define ADMSK1_size                              0x1
#define ADMSK1_value_mask                        0x2
#define ADMSK1_clear_mask                        0xFD

#define SEG42COM1                                0x2
#define SEG42COM1_address                        0xF70
#define SEG42COM1_position                       0x2
#define SEG42COM1_size                           0x1
#define SEG42COM1_value_mask                     0x4
#define SEG42COM1_clear_mask                     0xFB

#define S42C1                                    0x2
#define S42C1_address                            0xF70
#define S42C1_position                           0x2
#define S42C1_size                               0x1
#define S42C1_value_mask                         0x4
#define S42C1_clear_mask                         0xFB

#define ADMSK2                                   0x2
#define ADMSK2_address                           0xF70
#define ADMSK2_position                          0x2
#define ADMSK2_size                              0x1
#define ADMSK2_value_mask                        0x4
#define ADMSK2_clear_mask                        0xFB

#define SEG43COM1                                0x3
#define SEG43COM1_address                        0xF70
#define SEG43COM1_position                       0x3
#define SEG43COM1_size                           0x1
#define SEG43COM1_value_mask                     0x8
#define SEG43COM1_clear_mask                     0xF7

#define S43C1                                    0x3
#define S43C1_address                            0xF70
#define S43C1_position                           0x3
#define S43C1_size                               0x1
#define S43C1_value_mask                         0x8
#define S43C1_clear_mask                         0xF7

#define ADMSK3                                   0x3
#define ADMSK3_address                           0xF70
#define ADMSK3_position                          0x3
#define ADMSK3_size                              0x1
#define ADMSK3_value_mask                        0x8
#define ADMSK3_clear_mask                        0xF7

#define SEG44COM1                                0x4
#define SEG44COM1_address                        0xF70
#define SEG44COM1_position                       0x4
#define SEG44COM1_size                           0x1
#define SEG44COM1_value_mask                     0x10
#define SEG44COM1_clear_mask                     0xEF

#define S44C1                                    0x4
#define S44C1_address                            0xF70
#define S44C1_position                           0x4
#define S44C1_size                               0x1
#define S44C1_value_mask                         0x10
#define S44C1_clear_mask                         0xEF

#define ADMSK4                                   0x4
#define ADMSK4_address                           0xF70
#define ADMSK4_position                          0x4
#define ADMSK4_size                              0x1
#define ADMSK4_value_mask                        0x10
#define ADMSK4_clear_mask                        0xEF

#define SEG45COM1                                0x5
#define SEG45COM1_address                        0xF70
#define SEG45COM1_position                       0x5
#define SEG45COM1_size                           0x1
#define SEG45COM1_value_mask                     0x20
#define SEG45COM1_clear_mask                     0xDF

#define S45C1                                    0x5
#define S45C1_address                            0xF70
#define S45C1_position                           0x5
#define S45C1_size                               0x1
#define S45C1_value_mask                         0x20
#define S45C1_clear_mask                         0xDF

#define ADMSK5                                   0x5
#define ADMSK5_address                           0xF70
#define ADMSK5_position                          0x5
#define ADMSK5_size                              0x1
#define ADMSK5_value_mask                        0x20
#define ADMSK5_clear_mask                        0xDF

#define S46C1                                    0x6
#define S46C1_address                            0xF70
#define S46C1_position                           0x6
#define S46C1_size                               0x1
#define S46C1_value_mask                         0x40
#define S46C1_clear_mask                         0xBF

#define SEG46COM1                                0x6
#define SEG46COM1_address                        0xF70
#define SEG46COM1_position                       0x6
#define SEG46COM1_size                           0x1
#define SEG46COM1_value_mask                     0x40
#define SEG46COM1_clear_mask                     0xBF

#define S47C1                                    0x7
#define S47C1_address                            0xF70
#define S47C1_position                           0x7
#define S47C1_size                               0x1
#define S47C1_value_mask                         0x80
#define S47C1_clear_mask                         0x7F

#define SEG47COM1                                0x7
#define SEG47COM1_address                        0xF70
#define SEG47COM1_position                       0x7
#define SEG47COM1_size                           0x1
#define SEG47COM1_value_mask                     0x80
#define SEG47COM1_clear_mask                     0x7F


/*-------------------------------------------------------------------------#
| LCDDATA12                                                          0xF71 |
#--------------------------------------------------------------------------#
| SEG7COM2 | SEG6COM2 | S5C2 | SEG4COM2 | S03C2 | S02C2 | S01C2 | SEG0COM2 |
#--------------------------------------------------------------------------#
| 7        | 6        | 5    | 4        | 3     | 2     | 1     | 0        |
#-------------------------------------------------------------------------*/

#define SEG0COM2                                 0x0
#define SEG0COM2_address                         0xF71
#define SEG0COM2_position                        0x0
#define SEG0COM2_size                            0x1
#define SEG0COM2_value_mask                      0x1
#define SEG0COM2_clear_mask                      0xFE

#define SSPM012                                  0x0
#define SSPM012_address                          0xF71
#define SSPM012_position                         0x0
#define SSPM012_size                             0x1
#define SSPM012_value_mask                       0x1
#define SSPM012_clear_mask                       0xFE

#define LCDDATA12                                0x0
#define LCDDATA12_address                        0xF71
#define LCDDATA12_position                       0x0
#define LCDDATA12_size                           0x8
#define LCDDATA12_value_mask                     0xFF
#define LCDDATA12_clear_mask                     0x0

#define S00C2                                    0x0
#define S00C2_address                            0xF71
#define S00C2_position                           0x0
#define S00C2_size                               0x1
#define S00C2_value_mask                         0x1
#define S00C2_clear_mask                         0xFE

#define S0C2                                     0x0
#define S0C2_address                             0xF71
#define S0C2_position                            0x0
#define S0C2_size                                0x1
#define S0C2_value_mask                          0x1
#define S0C2_clear_mask                          0xFE

#define S01C2                                    0x1
#define S01C2_address                            0xF71
#define S01C2_position                           0x1
#define S01C2_size                               0x1
#define S01C2_value_mask                         0x2
#define S01C2_clear_mask                         0xFD

#define SSPM112                                  0x1
#define SSPM112_address                          0xF71
#define SSPM112_position                         0x1
#define SSPM112_size                             0x1
#define SSPM112_value_mask                       0x2
#define SSPM112_clear_mask                       0xFD

#define SEG1COM2                                 0x1
#define SEG1COM2_address                         0xF71
#define SEG1COM2_position                        0x1
#define SEG1COM2_size                            0x1
#define SEG1COM2_value_mask                      0x2
#define SEG1COM2_clear_mask                      0xFD

#define S1C2                                     0x1
#define S1C2_address                             0xF71
#define S1C2_position                            0x1
#define S1C2_size                                0x1
#define S1C2_value_mask                          0x2
#define S1C2_clear_mask                          0xFD

#define S02C2                                    0x2
#define S02C2_address                            0xF71
#define S02C2_position                           0x2
#define S02C2_size                               0x1
#define S02C2_value_mask                         0x4
#define S02C2_clear_mask                         0xFB

#define S2C2                                     0x2
#define S2C2_address                             0xF71
#define S2C2_position                            0x2
#define S2C2_size                                0x1
#define S2C2_value_mask                          0x4
#define S2C2_clear_mask                          0xFB

#define SEG2COM2                                 0x2
#define SEG2COM2_address                         0xF71
#define SEG2COM2_position                        0x2
#define SEG2COM2_size                            0x1
#define SEG2COM2_value_mask                      0x4
#define SEG2COM2_clear_mask                      0xFB

#define SSPM212                                  0x2
#define SSPM212_address                          0xF71
#define SSPM212_position                         0x2
#define SSPM212_size                             0x1
#define SSPM212_value_mask                       0x4
#define SSPM212_clear_mask                       0xFB

#define S03C2                                    0x3
#define S03C2_address                            0xF71
#define S03C2_position                           0x3
#define S03C2_size                               0x1
#define S03C2_value_mask                         0x8
#define S03C2_clear_mask                         0xF7

#define SEG3COM2                                 0x3
#define SEG3COM2_address                         0xF71
#define SEG3COM2_position                        0x3
#define SEG3COM2_size                            0x1
#define SEG3COM2_value_mask                      0x8
#define SEG3COM2_clear_mask                      0xF7

#define S3C2                                     0x3
#define S3C2_address                             0xF71
#define S3C2_position                            0x3
#define S3C2_size                                0x1
#define S3C2_value_mask                          0x8
#define S3C2_clear_mask                          0xF7

#define SSPM312                                  0x3
#define SSPM312_address                          0xF71
#define SSPM312_position                         0x3
#define SSPM312_size                             0x1
#define SSPM312_value_mask                       0x8
#define SSPM312_clear_mask                       0xF7

#define SEG4COM2                                 0x4
#define SEG4COM2_address                         0xF71
#define SEG4COM2_position                        0x4
#define SEG4COM2_size                            0x1
#define SEG4COM2_value_mask                      0x10
#define SEG4COM2_clear_mask                      0xEF

#define S4C2                                     0x4
#define S4C2_address                             0xF71
#define S4C2_position                            0x4
#define S4C2_size                                0x1
#define S4C2_value_mask                          0x10
#define S4C2_clear_mask                          0xEF

#define S04C2                                    0x4
#define S04C2_address                            0xF71
#define S04C2_position                           0x4
#define S04C2_size                               0x1
#define S04C2_value_mask                         0x10
#define S04C2_clear_mask                         0xEF

#define S5C2                                     0x5
#define S5C2_address                             0xF71
#define S5C2_position                            0x5
#define S5C2_size                                0x1
#define S5C2_value_mask                          0x20
#define S5C2_clear_mask                          0xDF

#define S05C2                                    0x5
#define S05C2_address                            0xF71
#define S05C2_position                           0x5
#define S05C2_size                               0x1
#define S05C2_value_mask                         0x20
#define S05C2_clear_mask                         0xDF

#define SEG5COM2                                 0x5
#define SEG5COM2_address                         0xF71
#define SEG5COM2_position                        0x5
#define SEG5COM2_size                            0x1
#define SEG5COM2_value_mask                      0x20
#define SEG5COM2_clear_mask                      0xDF

#define SEG6COM2                                 0x6
#define SEG6COM2_address                         0xF71
#define SEG6COM2_position                        0x6
#define SEG6COM2_size                            0x1
#define SEG6COM2_value_mask                      0x40
#define SEG6COM2_clear_mask                      0xBF

#define S6C2                                     0x6
#define S6C2_address                             0xF71
#define S6C2_position                            0x6
#define S6C2_size                                0x1
#define S6C2_value_mask                          0x40
#define S6C2_clear_mask                          0xBF

#define S06C2                                    0x6
#define S06C2_address                            0xF71
#define S06C2_position                           0x6
#define S06C2_size                               0x1
#define S06C2_value_mask                         0x40
#define S06C2_clear_mask                         0xBF

#define SEG7COM2                                 0x7
#define SEG7COM2_address                         0xF71
#define SEG7COM2_position                        0x7
#define SEG7COM2_size                            0x1
#define SEG7COM2_value_mask                      0x80
#define SEG7COM2_clear_mask                      0x7F

#define S7C2                                     0x7
#define S7C2_address                             0xF71
#define S7C2_position                            0x7
#define S7C2_size                                0x1
#define S7C2_value_mask                          0x80
#define S7C2_clear_mask                          0x7F

#define S07C2                                    0x7
#define S07C2_address                            0xF71
#define S07C2_position                           0x7
#define S07C2_size                               0x1
#define S07C2_value_mask                         0x80
#define S07C2_clear_mask                         0x7F


/*---------------------------------------------------------------------#
| LCDDATA13                                                      0xF72 |
#----------------------------------------------------------------------#
| SEG15COM2 | S14C2 | S13C2 | S12C2 | S11C2 | S10C2 | SEG9COM2 | S08C2 |
#----------------------------------------------------------------------#
| 7         | 6     | 5     | 4     | 3     | 2     | 1        | 0     |
#---------------------------------------------------------------------*/

#define LCDDATA13                                0x0
#define LCDDATA13_address                        0xF72
#define LCDDATA13_position                       0x0
#define LCDDATA13_size                           0x8
#define LCDDATA13_value_mask                     0xFF
#define LCDDATA13_clear_mask                     0x0

#define S08C2                                    0x0
#define S08C2_address                            0xF72
#define S08C2_position                           0x0
#define S08C2_size                               0x1
#define S08C2_value_mask                         0x1
#define S08C2_clear_mask                         0xFE

#define S8C2                                     0x0
#define S8C2_address                             0xF72
#define S8C2_position                            0x0
#define S8C2_size                                0x1
#define S8C2_value_mask                          0x1
#define S8C2_clear_mask                          0xFE

#define SEG8COM2                                 0x0
#define SEG8COM2_address                         0xF72
#define SEG8COM2_position                        0x0
#define SEG8COM2_size                            0x1
#define SEG8COM2_value_mask                      0x1
#define SEG8COM2_clear_mask                      0xFE

#define SEG9COM2                                 0x1
#define SEG9COM2_address                         0xF72
#define SEG9COM2_position                        0x1
#define SEG9COM2_size                            0x1
#define SEG9COM2_value_mask                      0x2
#define SEG9COM2_clear_mask                      0xFD

#define S09C2                                    0x1
#define S09C2_address                            0xF72
#define S09C2_position                           0x1
#define S09C2_size                               0x1
#define S09C2_value_mask                         0x2
#define S09C2_clear_mask                         0xFD

#define S9C2                                     0x1
#define S9C2_address                             0xF72
#define S9C2_position                            0x1
#define S9C2_size                                0x1
#define S9C2_value_mask                          0x2
#define S9C2_clear_mask                          0xFD

#define S10C2                                    0x2
#define S10C2_address                            0xF72
#define S10C2_position                           0x2
#define S10C2_size                               0x1
#define S10C2_value_mask                         0x4
#define S10C2_clear_mask                         0xFB

#define SEG10COM2                                0x2
#define SEG10COM2_address                        0xF72
#define SEG10COM2_position                       0x2
#define SEG10COM2_size                           0x1
#define SEG10COM2_value_mask                     0x4
#define SEG10COM2_clear_mask                     0xFB

#define SEG11COM2                                0x3
#define SEG11COM2_address                        0xF72
#define SEG11COM2_position                       0x3
#define SEG11COM2_size                           0x1
#define SEG11COM2_value_mask                     0x8
#define SEG11COM2_clear_mask                     0xF7

#define S11C2                                    0x3
#define S11C2_address                            0xF72
#define S11C2_position                           0x3
#define S11C2_size                               0x1
#define S11C2_value_mask                         0x8
#define S11C2_clear_mask                         0xF7

#define S12C2                                    0x4
#define S12C2_address                            0xF72
#define S12C2_position                           0x4
#define S12C2_size                               0x1
#define S12C2_value_mask                         0x10
#define S12C2_clear_mask                         0xEF

#define SEG12COM2                                0x4
#define SEG12COM2_address                        0xF72
#define SEG12COM2_position                       0x4
#define SEG12COM2_size                           0x1
#define SEG12COM2_value_mask                     0x10
#define SEG12COM2_clear_mask                     0xEF

#define S13C2                                    0x5
#define S13C2_address                            0xF72
#define S13C2_position                           0x5
#define S13C2_size                               0x1
#define S13C2_value_mask                         0x20
#define S13C2_clear_mask                         0xDF

#define SEG13COM2                                0x5
#define SEG13COM2_address                        0xF72
#define SEG13COM2_position                       0x5
#define SEG13COM2_size                           0x1
#define SEG13COM2_value_mask                     0x20
#define SEG13COM2_clear_mask                     0xDF

#define S14C2                                    0x6
#define S14C2_address                            0xF72
#define S14C2_position                           0x6
#define S14C2_size                               0x1
#define S14C2_value_mask                         0x40
#define S14C2_clear_mask                         0xBF

#define SEG14COM2                                0x6
#define SEG14COM2_address                        0xF72
#define SEG14COM2_position                       0x6
#define SEG14COM2_size                           0x1
#define SEG14COM2_value_mask                     0x40
#define SEG14COM2_clear_mask                     0xBF

#define S15C2                                    0x7
#define S15C2_address                            0xF72
#define S15C2_position                           0x7
#define S15C2_size                               0x1
#define S15C2_value_mask                         0x80
#define S15C2_clear_mask                         0x7F

#define SEG15COM2                                0x7
#define SEG15COM2_address                        0xF72
#define SEG15COM2_position                       0x7
#define SEG15COM2_size                           0x1
#define SEG15COM2_value_mask                     0x80
#define SEG15COM2_clear_mask                     0x7F


/*------------------------------------------------------------------------#
| LCDDATA14                                                         0xF73 |
#-------------------------------------------------------------------------#
| SEG23COM2 | SEG22COM2 | MSK5 | MSK4 | S19C2 | S18C2 | S17C2 | SEG16COM2 |
#-------------------------------------------------------------------------#
| 7         | 6         | 5    | 4    | 3     | 2     | 1     | 0         |
#------------------------------------------------------------------------*/

#define SEG16COM2                                0x0
#define SEG16COM2_address                        0xF73
#define SEG16COM2_position                       0x0
#define SEG16COM2_size                           0x1
#define SEG16COM2_value_mask                     0x1
#define SEG16COM2_clear_mask                     0xFE

#define S16C2                                    0x0
#define S16C2_address                            0xF73
#define S16C2_position                           0x0
#define S16C2_size                               0x1
#define S16C2_value_mask                         0x1
#define S16C2_clear_mask                         0xFE

#define MSK0                                     0x0
#define MSK0_address                             0xF73
#define MSK0_position                            0x0
#define MSK0_size                                0x1
#define MSK0_value_mask                          0x1
#define MSK0_clear_mask                          0xFE

#define LCDDATA14                                0x0
#define LCDDATA14_address                        0xF73
#define LCDDATA14_position                       0x0
#define LCDDATA14_size                           0x8
#define LCDDATA14_value_mask                     0xFF
#define LCDDATA14_clear_mask                     0x0

#define S17C2                                    0x1
#define S17C2_address                            0xF73
#define S17C2_position                           0x1
#define S17C2_size                               0x1
#define S17C2_value_mask                         0x2
#define S17C2_clear_mask                         0xFD

#define MSK1                                     0x1
#define MSK1_address                             0xF73
#define MSK1_position                            0x1
#define MSK1_size                                0x1
#define MSK1_value_mask                          0x2
#define MSK1_clear_mask                          0xFD

#define SEG17COM2                                0x1
#define SEG17COM2_address                        0xF73
#define SEG17COM2_position                       0x1
#define SEG17COM2_size                           0x1
#define SEG17COM2_value_mask                     0x2
#define SEG17COM2_clear_mask                     0xFD

#define S18C2                                    0x2
#define S18C2_address                            0xF73
#define S18C2_position                           0x2
#define S18C2_size                               0x1
#define S18C2_value_mask                         0x4
#define S18C2_clear_mask                         0xFB

#define SEG18COM2                                0x2
#define SEG18COM2_address                        0xF73
#define SEG18COM2_position                       0x2
#define SEG18COM2_size                           0x1
#define SEG18COM2_value_mask                     0x4
#define SEG18COM2_clear_mask                     0xFB

#define MSK2                                     0x2
#define MSK2_address                             0xF73
#define MSK2_position                            0x2
#define MSK2_size                                0x1
#define MSK2_value_mask                          0x4
#define MSK2_clear_mask                          0xFB

#define S19C2                                    0x3
#define S19C2_address                            0xF73
#define S19C2_position                           0x3
#define S19C2_size                               0x1
#define S19C2_value_mask                         0x8
#define S19C2_clear_mask                         0xF7

#define SEG19COM2                                0x3
#define SEG19COM2_address                        0xF73
#define SEG19COM2_position                       0x3
#define SEG19COM2_size                           0x1
#define SEG19COM2_value_mask                     0x8
#define SEG19COM2_clear_mask                     0xF7

#define MSK3                                     0x3
#define MSK3_address                             0xF73
#define MSK3_position                            0x3
#define MSK3_size                                0x1
#define MSK3_value_mask                          0x8
#define MSK3_clear_mask                          0xF7

#define MSK4                                     0x4
#define MSK4_address                             0xF73
#define MSK4_position                            0x4
#define MSK4_size                                0x1
#define MSK4_value_mask                          0x10
#define MSK4_clear_mask                          0xEF

#define S20C2                                    0x4
#define S20C2_address                            0xF73
#define S20C2_position                           0x4
#define S20C2_size                               0x1
#define S20C2_value_mask                         0x10
#define S20C2_clear_mask                         0xEF

#define SEG20COM2                                0x4
#define SEG20COM2_address                        0xF73
#define SEG20COM2_position                       0x4
#define SEG20COM2_size                           0x1
#define SEG20COM2_value_mask                     0x10
#define SEG20COM2_clear_mask                     0xEF

#define MSK5                                     0x5
#define MSK5_address                             0xF73
#define MSK5_position                            0x5
#define MSK5_size                                0x1
#define MSK5_value_mask                          0x20
#define MSK5_clear_mask                          0xDF

#define S21C2                                    0x5
#define S21C2_address                            0xF73
#define S21C2_position                           0x5
#define S21C2_size                               0x1
#define S21C2_value_mask                         0x20
#define S21C2_clear_mask                         0xDF

#define SEG21COM2                                0x5
#define SEG21COM2_address                        0xF73
#define SEG21COM2_position                       0x5
#define SEG21COM2_size                           0x1
#define SEG21COM2_value_mask                     0x20
#define SEG21COM2_clear_mask                     0xDF

#define SEG22COM2                                0x6
#define SEG22COM2_address                        0xF73
#define SEG22COM2_position                       0x6
#define SEG22COM2_size                           0x1
#define SEG22COM2_value_mask                     0x40
#define SEG22COM2_clear_mask                     0xBF

#define MSK6                                     0x6
#define MSK6_address                             0xF73
#define MSK6_position                            0x6
#define MSK6_size                                0x1
#define MSK6_value_mask                          0x40
#define MSK6_clear_mask                          0xBF

#define S22C2                                    0x6
#define S22C2_address                            0xF73
#define S22C2_position                           0x6
#define S22C2_size                               0x1
#define S22C2_value_mask                         0x40
#define S22C2_clear_mask                         0xBF

#define SEG23COM2                                0x7
#define SEG23COM2_address                        0xF73
#define SEG23COM2_position                       0x7
#define SEG23COM2_size                           0x1
#define SEG23COM2_value_mask                     0x80
#define SEG23COM2_clear_mask                     0x7F

#define MSK7                                     0x7
#define MSK7_address                             0xF73
#define MSK7_position                            0x7
#define MSK7_size                                0x1
#define MSK7_value_mask                          0x80
#define MSK7_clear_mask                          0x7F

#define S23C2                                    0x7
#define S23C2_address                            0xF73
#define S23C2_position                           0x7
#define S23C2_size                               0x1
#define S23C2_value_mask                         0x80
#define S23C2_clear_mask                         0x7F


/*--------------------------------------------------------------------------#
| LCDDATA15                                                           0xF74 |
#---------------------------------------------------------------------------#
| S31C2 | SEG30COM2 | SEG29COM2 | S28C2 | SEG27COM2 | S26C2 | S25C2 | S24C2 |
#---------------------------------------------------------------------------#
| 7     | 6         | 5         | 4     | 3         | 2     | 1     | 0     |
#--------------------------------------------------------------------------*/

#define LCDDATA15                                0x0
#define LCDDATA15_address                        0xF74
#define LCDDATA15_position                       0x0
#define LCDDATA15_size                           0x8
#define LCDDATA15_value_mask                     0xFF
#define LCDDATA15_clear_mask                     0x0

#define S24C2                                    0x0
#define S24C2_address                            0xF74
#define S24C2_position                           0x0
#define S24C2_size                               0x1
#define S24C2_value_mask                         0x1
#define S24C2_clear_mask                         0xFE

#define SEG24COM2                                0x0
#define SEG24COM2_address                        0xF74
#define SEG24COM2_position                       0x0
#define SEG24COM2_size                           0x1
#define SEG24COM2_value_mask                     0x1
#define SEG24COM2_clear_mask                     0xFE

#define S25C2                                    0x1
#define S25C2_address                            0xF74
#define S25C2_position                           0x1
#define S25C2_size                               0x1
#define S25C2_value_mask                         0x2
#define S25C2_clear_mask                         0xFD

#define SEG25COM2                                0x1
#define SEG25COM2_address                        0xF74
#define SEG25COM2_position                       0x1
#define SEG25COM2_size                           0x1
#define SEG25COM2_value_mask                     0x2
#define SEG25COM2_clear_mask                     0xFD

#define S26C2                                    0x2
#define S26C2_address                            0xF74
#define S26C2_position                           0x2
#define S26C2_size                               0x1
#define S26C2_value_mask                         0x4
#define S26C2_clear_mask                         0xFB

#define SEG26COM2                                0x2
#define SEG26COM2_address                        0xF74
#define SEG26COM2_position                       0x2
#define SEG26COM2_size                           0x1
#define SEG26COM2_value_mask                     0x4
#define SEG26COM2_clear_mask                     0xFB

#define SEG27COM2                                0x3
#define SEG27COM2_address                        0xF74
#define SEG27COM2_position                       0x3
#define SEG27COM2_size                           0x1
#define SEG27COM2_value_mask                     0x8
#define SEG27COM2_clear_mask                     0xF7

#define S27C2                                    0x3
#define S27C2_address                            0xF74
#define S27C2_position                           0x3
#define S27C2_size                               0x1
#define S27C2_value_mask                         0x8
#define S27C2_clear_mask                         0xF7

#define S28C2                                    0x4
#define S28C2_address                            0xF74
#define S28C2_position                           0x4
#define S28C2_size                               0x1
#define S28C2_value_mask                         0x10
#define S28C2_clear_mask                         0xEF

#define SEG28COM2                                0x4
#define SEG28COM2_address                        0xF74
#define SEG28COM2_position                       0x4
#define SEG28COM2_size                           0x1
#define SEG28COM2_value_mask                     0x10
#define SEG28COM2_clear_mask                     0xEF

#define SEG29COM2                                0x5
#define SEG29COM2_address                        0xF74
#define SEG29COM2_position                       0x5
#define SEG29COM2_size                           0x1
#define SEG29COM2_value_mask                     0x20
#define SEG29COM2_clear_mask                     0xDF

#define S29C2                                    0x5
#define S29C2_address                            0xF74
#define S29C2_position                           0x5
#define S29C2_size                               0x1
#define S29C2_value_mask                         0x20
#define S29C2_clear_mask                         0xDF

#define SEG30COM2                                0x6
#define SEG30COM2_address                        0xF74
#define SEG30COM2_position                       0x6
#define SEG30COM2_size                           0x1
#define SEG30COM2_value_mask                     0x40
#define SEG30COM2_clear_mask                     0xBF

#define S30C2                                    0x6
#define S30C2_address                            0xF74
#define S30C2_position                           0x6
#define S30C2_size                               0x1
#define S30C2_value_mask                         0x40
#define S30C2_clear_mask                         0xBF

#define SEG31COM2                                0x7
#define SEG31COM2_address                        0xF74
#define SEG31COM2_position                       0x7
#define SEG31COM2_size                           0x1
#define SEG31COM2_value_mask                     0x80
#define SEG31COM2_clear_mask                     0x7F

#define S31C2                                    0x7
#define S31C2_address                            0xF74
#define S31C2_position                           0x7
#define S31C2_size                               0x1
#define S31C2_value_mask                         0x80
#define S31C2_clear_mask                         0x7F


/*------------------------------------------------------------------------------------#
| LCDDATA16                                                                     0xF75 |
#-------------------------------------------------------------------------------------#
| SEG39COM2 | SEG38COM2 | S37C2 | T4OUTPS116 | T4OUTPS016 | S34C2 | T4CKPS116 | S32C2 |
#-------------------------------------------------------------------------------------#
| 7         | 6         | 5     | 4          | 3          | 2     | 1         | 0     |
#------------------------------------------------------------------------------------*/

#define S32C2                                    0x0
#define S32C2_address                            0xF75
#define S32C2_position                           0x0
#define S32C2_size                               0x1
#define S32C2_value_mask                         0x1
#define S32C2_clear_mask                         0xFE

#define LCDDATA16                                0x0
#define LCDDATA16_address                        0xF75
#define LCDDATA16_position                       0x0
#define LCDDATA16_size                           0x8
#define LCDDATA16_value_mask                     0xFF
#define LCDDATA16_clear_mask                     0x0

#define SEG32COM2                                0x0
#define SEG32COM2_address                        0xF75
#define SEG32COM2_position                       0x0
#define SEG32COM2_size                           0x1
#define SEG32COM2_value_mask                     0x1
#define SEG32COM2_clear_mask                     0xFE

#define T4CKPS016                                0x0
#define T4CKPS016_address                        0xF75
#define T4CKPS016_position                       0x0
#define T4CKPS016_size                           0x1
#define T4CKPS016_value_mask                     0x1
#define T4CKPS016_clear_mask                     0xFE

#define T4CKPS116                                0x1
#define T4CKPS116_address                        0xF75
#define T4CKPS116_position                       0x1
#define T4CKPS116_size                           0x1
#define T4CKPS116_value_mask                     0x2
#define T4CKPS116_clear_mask                     0xFD

#define SEG33COM2                                0x1
#define SEG33COM2_address                        0xF75
#define SEG33COM2_position                       0x1
#define SEG33COM2_size                           0x1
#define SEG33COM2_value_mask                     0x2
#define SEG33COM2_clear_mask                     0xFD

#define S33C2                                    0x1
#define S33C2_address                            0xF75
#define S33C2_position                           0x1
#define S33C2_size                               0x1
#define S33C2_value_mask                         0x2
#define S33C2_clear_mask                         0xFD

#define S34C2                                    0x2
#define S34C2_address                            0xF75
#define S34C2_position                           0x2
#define S34C2_size                               0x1
#define S34C2_value_mask                         0x4
#define S34C2_clear_mask                         0xFB

#define SEG34COM2                                0x2
#define SEG34COM2_address                        0xF75
#define SEG34COM2_position                       0x2
#define SEG34COM2_size                           0x1
#define SEG34COM2_value_mask                     0x4
#define SEG34COM2_clear_mask                     0xFB

#define T4OUTPS016                               0x3
#define T4OUTPS016_address                       0xF75
#define T4OUTPS016_position                      0x3
#define T4OUTPS016_size                          0x1
#define T4OUTPS016_value_mask                    0x8
#define T4OUTPS016_clear_mask                    0xF7

#define S35C2                                    0x3
#define S35C2_address                            0xF75
#define S35C2_position                           0x3
#define S35C2_size                               0x1
#define S35C2_value_mask                         0x8
#define S35C2_clear_mask                         0xF7

#define SEG35COM2                                0x3
#define SEG35COM2_address                        0xF75
#define SEG35COM2_position                       0x3
#define SEG35COM2_size                           0x1
#define SEG35COM2_value_mask                     0x8
#define SEG35COM2_clear_mask                     0xF7

#define T4OUTPS116                               0x4
#define T4OUTPS116_address                       0xF75
#define T4OUTPS116_position                      0x4
#define T4OUTPS116_size                          0x1
#define T4OUTPS116_value_mask                    0x10
#define T4OUTPS116_clear_mask                    0xEF

#define SEG36COM2                                0x4
#define SEG36COM2_address                        0xF75
#define SEG36COM2_position                       0x4
#define SEG36COM2_size                           0x1
#define SEG36COM2_value_mask                     0x10
#define SEG36COM2_clear_mask                     0xEF

#define S36C2                                    0x4
#define S36C2_address                            0xF75
#define S36C2_position                           0x4
#define S36C2_size                               0x1
#define S36C2_value_mask                         0x10
#define S36C2_clear_mask                         0xEF

#define T4OUTPS216                               0x5
#define T4OUTPS216_address                       0xF75
#define T4OUTPS216_position                      0x5
#define T4OUTPS216_size                          0x1
#define T4OUTPS216_value_mask                    0x20
#define T4OUTPS216_clear_mask                    0xDF

#define S37C2                                    0x5
#define S37C2_address                            0xF75
#define S37C2_position                           0x5
#define S37C2_size                               0x1
#define S37C2_value_mask                         0x20
#define S37C2_clear_mask                         0xDF

#define SEG37COM2                                0x5
#define SEG37COM2_address                        0xF75
#define SEG37COM2_position                       0x5
#define SEG37COM2_size                           0x1
#define SEG37COM2_value_mask                     0x20
#define SEG37COM2_clear_mask                     0xDF

#define SEG38COM2                                0x6
#define SEG38COM2_address                        0xF75
#define SEG38COM2_position                       0x6
#define SEG38COM2_size                           0x1
#define SEG38COM2_value_mask                     0x40
#define SEG38COM2_clear_mask                     0xBF

#define S38C2                                    0x6
#define S38C2_address                            0xF75
#define S38C2_position                           0x6
#define S38C2_size                               0x1
#define S38C2_value_mask                         0x40
#define S38C2_clear_mask                         0xBF

#define T4OUTPS316                               0x6
#define T4OUTPS316_address                       0xF75
#define T4OUTPS316_position                      0x6
#define T4OUTPS316_size                          0x1
#define T4OUTPS316_value_mask                    0x40
#define T4OUTPS316_clear_mask                    0xBF

#define SEG39COM2                                0x7
#define SEG39COM2_address                        0xF75
#define SEG39COM2_position                       0x7
#define SEG39COM2_size                           0x1
#define SEG39COM2_value_mask                     0x80
#define SEG39COM2_clear_mask                     0x7F

#define S39C2                                    0x7
#define S39C2_address                            0xF75
#define S39C2_position                           0x7
#define S39C2_size                               0x1
#define S39C2_value_mask                         0x80
#define S39C2_clear_mask                         0x7F


/*----------------------------------------------------------------------#
| LCDDATA17                                                       0xF76 |
#-----------------------------------------------------------------------#
| S47C2 | S46C2 | S45C2 | SEG44COM2 | S43C2 | S42C2 | SEG41COM2 | S40C2 |
#-----------------------------------------------------------------------#
| 7     | 6     | 5     | 4         | 3     | 2     | 1         | 0     |
#----------------------------------------------------------------------*/

#define LCDDATA17                                0x0
#define LCDDATA17_address                        0xF76
#define LCDDATA17_position                       0x0
#define LCDDATA17_size                           0x8
#define LCDDATA17_value_mask                     0xFF
#define LCDDATA17_clear_mask                     0x0

#define S40C2                                    0x0
#define S40C2_address                            0xF76
#define S40C2_position                           0x0
#define S40C2_size                               0x1
#define S40C2_value_mask                         0x1
#define S40C2_clear_mask                         0xFE

#define SEG40COM2                                0x0
#define SEG40COM2_address                        0xF76
#define SEG40COM2_position                       0x0
#define SEG40COM2_size                           0x1
#define SEG40COM2_value_mask                     0x1
#define SEG40COM2_clear_mask                     0xFE

#define SEG41COM2                                0x1
#define SEG41COM2_address                        0xF76
#define SEG41COM2_position                       0x1
#define SEG41COM2_size                           0x1
#define SEG41COM2_value_mask                     0x2
#define SEG41COM2_clear_mask                     0xFD

#define S41C2                                    0x1
#define S41C2_address                            0xF76
#define S41C2_position                           0x1
#define S41C2_size                               0x1
#define S41C2_value_mask                         0x2
#define S41C2_clear_mask                         0xFD

#define S42C2                                    0x2
#define S42C2_address                            0xF76
#define S42C2_position                           0x2
#define S42C2_size                               0x1
#define S42C2_value_mask                         0x4
#define S42C2_clear_mask                         0xFB

#define SEG42COM2                                0x2
#define SEG42COM2_address                        0xF76
#define SEG42COM2_position                       0x2
#define SEG42COM2_size                           0x1
#define SEG42COM2_value_mask                     0x4
#define SEG42COM2_clear_mask                     0xFB

#define S43C2                                    0x3
#define S43C2_address                            0xF76
#define S43C2_position                           0x3
#define S43C2_size                               0x1
#define S43C2_value_mask                         0x8
#define S43C2_clear_mask                         0xF7

#define SEG43COM2                                0x3
#define SEG43COM2_address                        0xF76
#define SEG43COM2_position                       0x3
#define SEG43COM2_size                           0x1
#define SEG43COM2_value_mask                     0x8
#define SEG43COM2_clear_mask                     0xF7

#define SEG44COM2                                0x4
#define SEG44COM2_address                        0xF76
#define SEG44COM2_position                       0x4
#define SEG44COM2_size                           0x1
#define SEG44COM2_value_mask                     0x10
#define SEG44COM2_clear_mask                     0xEF

#define S44C2                                    0x4
#define S44C2_address                            0xF76
#define S44C2_position                           0x4
#define S44C2_size                               0x1
#define S44C2_value_mask                         0x10
#define S44C2_clear_mask                         0xEF

#define S45C2                                    0x5
#define S45C2_address                            0xF76
#define S45C2_position                           0x5
#define S45C2_size                               0x1
#define S45C2_value_mask                         0x20
#define S45C2_clear_mask                         0xDF

#define SEG45COM2                                0x5
#define SEG45COM2_address                        0xF76
#define SEG45COM2_position                       0x5
#define SEG45COM2_size                           0x1
#define SEG45COM2_value_mask                     0x20
#define SEG45COM2_clear_mask                     0xDF

#define S46C2                                    0x6
#define S46C2_address                            0xF76
#define S46C2_position                           0x6
#define S46C2_size                               0x1
#define S46C2_value_mask                         0x40
#define S46C2_clear_mask                         0xBF

#define SEG46COM2                                0x6
#define SEG46COM2_address                        0xF76
#define SEG46COM2_position                       0x6
#define SEG46COM2_size                           0x1
#define SEG46COM2_value_mask                     0x40
#define SEG46COM2_clear_mask                     0xBF

#define S47C2                                    0x7
#define S47C2_address                            0xF76
#define S47C2_position                           0x7
#define S47C2_size                               0x1
#define S47C2_value_mask                         0x80
#define S47C2_clear_mask                         0x7F

#define SEG47COM2                                0x7
#define SEG47COM2_address                        0xF76
#define SEG47COM2_position                       0x7
#define SEG47COM2_size                           0x1
#define SEG47COM2_value_mask                     0x80
#define SEG47COM2_clear_mask                     0x7F


/*-------------------------------------------------------------------------#
| LCDDATA18                                                          0xF77 |
#--------------------------------------------------------------------------#
| SEG7COM3 | SEG6COM3 | S5C3 | SEG4COM3 | S03C3 | S02C3 | S01C3 | SEG0COM3 |
#--------------------------------------------------------------------------#
| 7        | 6        | 5    | 4        | 3     | 2     | 1     | 0        |
#-------------------------------------------------------------------------*/

#define SEG0COM3                                 0x0
#define SEG0COM3_address                         0xF77
#define SEG0COM3_position                        0x0
#define SEG0COM3_size                            0x1
#define SEG0COM3_value_mask                      0x1
#define SEG0COM3_clear_mask                      0xFE

#define LCDDATA18                                0x0
#define LCDDATA18_address                        0xF77
#define LCDDATA18_position                       0x0
#define LCDDATA18_size                           0x8
#define LCDDATA18_value_mask                     0xFF
#define LCDDATA18_clear_mask                     0x0

#define S00C3                                    0x0
#define S00C3_address                            0xF77
#define S00C3_position                           0x0
#define S00C3_size                               0x1
#define S00C3_value_mask                         0x1
#define S00C3_clear_mask                         0xFE

#define S0C3                                     0x0
#define S0C3_address                             0xF77
#define S0C3_position                            0x0
#define S0C3_size                                0x1
#define S0C3_value_mask                          0x1
#define S0C3_clear_mask                          0xFE

#define S01C3                                    0x1
#define S01C3_address                            0xF77
#define S01C3_position                           0x1
#define S01C3_size                               0x1
#define S01C3_value_mask                         0x2
#define S01C3_clear_mask                         0xFD

#define SEG1COM3                                 0x1
#define SEG1COM3_address                         0xF77
#define SEG1COM3_position                        0x1
#define SEG1COM3_size                            0x1
#define SEG1COM3_value_mask                      0x2
#define SEG1COM3_clear_mask                      0xFD

#define S1C3                                     0x1
#define S1C3_address                             0xF77
#define S1C3_position                            0x1
#define S1C3_size                                0x1
#define S1C3_value_mask                          0x2
#define S1C3_clear_mask                          0xFD

#define S02C3                                    0x2
#define S02C3_address                            0xF77
#define S02C3_position                           0x2
#define S02C3_size                               0x1
#define S02C3_value_mask                         0x4
#define S02C3_clear_mask                         0xFB

#define S2C3                                     0x2
#define S2C3_address                             0xF77
#define S2C3_position                            0x2
#define S2C3_size                                0x1
#define S2C3_value_mask                          0x4
#define S2C3_clear_mask                          0xFB

#define SEG2COM3                                 0x2
#define SEG2COM3_address                         0xF77
#define SEG2COM3_position                        0x2
#define SEG2COM3_size                            0x1
#define SEG2COM3_value_mask                      0x4
#define SEG2COM3_clear_mask                      0xFB

#define S03C3                                    0x3
#define S03C3_address                            0xF77
#define S03C3_position                           0x3
#define S03C3_size                               0x1
#define S03C3_value_mask                         0x8
#define S03C3_clear_mask                         0xF7

#define SEG3COM3                                 0x3
#define SEG3COM3_address                         0xF77
#define SEG3COM3_position                        0x3
#define SEG3COM3_size                            0x1
#define SEG3COM3_value_mask                      0x8
#define SEG3COM3_clear_mask                      0xF7

#define S3C3                                     0x3
#define S3C3_address                             0xF77
#define S3C3_position                            0x3
#define S3C3_size                                0x1
#define S3C3_value_mask                          0x8
#define S3C3_clear_mask                          0xF7

#define SEG4COM3                                 0x4
#define SEG4COM3_address                         0xF77
#define SEG4COM3_position                        0x4
#define SEG4COM3_size                            0x1
#define SEG4COM3_value_mask                      0x10
#define SEG4COM3_clear_mask                      0xEF

#define S4C3                                     0x4
#define S4C3_address                             0xF77
#define S4C3_position                            0x4
#define S4C3_size                                0x1
#define S4C3_value_mask                          0x10
#define S4C3_clear_mask                          0xEF

#define S04C3                                    0x4
#define S04C3_address                            0xF77
#define S04C3_position                           0x4
#define S04C3_size                               0x1
#define S04C3_value_mask                         0x10
#define S04C3_clear_mask                         0xEF

#define S5C3                                     0x5
#define S5C3_address                             0xF77
#define S5C3_position                            0x5
#define S5C3_size                                0x1
#define S5C3_value_mask                          0x20
#define S5C3_clear_mask                          0xDF

#define S05C3                                    0x5
#define S05C3_address                            0xF77
#define S05C3_position                           0x5
#define S05C3_size                               0x1
#define S05C3_value_mask                         0x20
#define S05C3_clear_mask                         0xDF

#define SEG5COM3                                 0x5
#define SEG5COM3_address                         0xF77
#define SEG5COM3_position                        0x5
#define SEG5COM3_size                            0x1
#define SEG5COM3_value_mask                      0x20
#define SEG5COM3_clear_mask                      0xDF

#define SEG6COM3                                 0x6
#define SEG6COM3_address                         0xF77
#define SEG6COM3_position                        0x6
#define SEG6COM3_size                            0x1
#define SEG6COM3_value_mask                      0x40
#define SEG6COM3_clear_mask                      0xBF

#define S6C3                                     0x6
#define S6C3_address                             0xF77
#define S6C3_position                            0x6
#define S6C3_size                                0x1
#define S6C3_value_mask                          0x40
#define S6C3_clear_mask                          0xBF

#define S06C3                                    0x6
#define S06C3_address                            0xF77
#define S06C3_position                           0x6
#define S06C3_size                               0x1
#define S06C3_value_mask                         0x40
#define S06C3_clear_mask                         0xBF

#define SEG7COM3                                 0x7
#define SEG7COM3_address                         0xF77
#define SEG7COM3_position                        0x7
#define SEG7COM3_size                            0x1
#define SEG7COM3_value_mask                      0x80
#define SEG7COM3_clear_mask                      0x7F

#define S7C3                                     0x7
#define S7C3_address                             0xF77
#define S7C3_position                            0x7
#define S7C3_size                                0x1
#define S7C3_value_mask                          0x80
#define S7C3_clear_mask                          0x7F

#define S07C3                                    0x7
#define S07C3_address                            0xF77
#define S07C3_position                           0x7
#define S07C3_size                               0x1
#define S07C3_value_mask                         0x80
#define S07C3_clear_mask                         0x7F


/*---------------------------------------------------------------------#
| LCDDATA19                                                      0xF78 |
#----------------------------------------------------------------------#
| SEG15COM3 | S14C3 | S13C3 | S12C3 | S11C3 | SEG10COM3 | S09C3 | S8C3 |
#----------------------------------------------------------------------#
| 7         | 6     | 5     | 4     | 3     | 2         | 1     | 0    |
#---------------------------------------------------------------------*/

#define S8C3                                     0x0
#define S8C3_address                             0xF78
#define S8C3_position                            0x0
#define S8C3_size                                0x1
#define S8C3_value_mask                          0x1
#define S8C3_clear_mask                          0xFE

#define SEG8COM3                                 0x0
#define SEG8COM3_address                         0xF78
#define SEG8COM3_position                        0x0
#define SEG8COM3_size                            0x1
#define SEG8COM3_value_mask                      0x1
#define SEG8COM3_clear_mask                      0xFE

#define S08C3                                    0x0
#define S08C3_address                            0xF78
#define S08C3_position                           0x0
#define S08C3_size                               0x1
#define S08C3_value_mask                         0x1
#define S08C3_clear_mask                         0xFE

#define LCDDATA19                                0x0
#define LCDDATA19_address                        0xF78
#define LCDDATA19_position                       0x0
#define LCDDATA19_size                           0x8
#define LCDDATA19_value_mask                     0xFF
#define LCDDATA19_clear_mask                     0x0

#define S9C3                                     0x1
#define S9C3_address                             0xF78
#define S9C3_position                            0x1
#define S9C3_size                                0x1
#define S9C3_value_mask                          0x2
#define S9C3_clear_mask                          0xFD

#define SEG9COM3                                 0x1
#define SEG9COM3_address                         0xF78
#define SEG9COM3_position                        0x1
#define SEG9COM3_size                            0x1
#define SEG9COM3_value_mask                      0x2
#define SEG9COM3_clear_mask                      0xFD

#define S09C3                                    0x1
#define S09C3_address                            0xF78
#define S09C3_position                           0x1
#define S09C3_size                               0x1
#define S09C3_value_mask                         0x2
#define S09C3_clear_mask                         0xFD

#define SEG10COM3                                0x2
#define SEG10COM3_address                        0xF78
#define SEG10COM3_position                       0x2
#define SEG10COM3_size                           0x1
#define SEG10COM3_value_mask                     0x4
#define SEG10COM3_clear_mask                     0xFB

#define S10C3                                    0x2
#define S10C3_address                            0xF78
#define S10C3_position                           0x2
#define S10C3_size                               0x1
#define S10C3_value_mask                         0x4
#define S10C3_clear_mask                         0xFB

#define S11C3                                    0x3
#define S11C3_address                            0xF78
#define S11C3_position                           0x3
#define S11C3_size                               0x1
#define S11C3_value_mask                         0x8
#define S11C3_clear_mask                         0xF7

#define SEG11COM3                                0x3
#define SEG11COM3_address                        0xF78
#define SEG11COM3_position                       0x3
#define SEG11COM3_size                           0x1
#define SEG11COM3_value_mask                     0x8
#define SEG11COM3_clear_mask                     0xF7

#define S12C3                                    0x4
#define S12C3_address                            0xF78
#define S12C3_position                           0x4
#define S12C3_size                               0x1
#define S12C3_value_mask                         0x10
#define S12C3_clear_mask                         0xEF

#define T3CKPS019                                0x4
#define T3CKPS019_address                        0xF78
#define T3CKPS019_position                       0x4
#define T3CKPS019_size                           0x1
#define T3CKPS019_value_mask                     0x10
#define T3CKPS019_clear_mask                     0xEF

#define SEG12COM3                                0x4
#define SEG12COM3_address                        0xF78
#define SEG12COM3_position                       0x4
#define SEG12COM3_size                           0x1
#define SEG12COM3_value_mask                     0x10
#define SEG12COM3_clear_mask                     0xEF

#define S13C3                                    0x5
#define S13C3_address                            0xF78
#define S13C3_position                           0x5
#define S13C3_size                               0x1
#define S13C3_value_mask                         0x20
#define S13C3_clear_mask                         0xDF

#define SEG13COM3                                0x5
#define SEG13COM3_address                        0xF78
#define SEG13COM3_position                       0x5
#define SEG13COM3_size                           0x1
#define SEG13COM3_value_mask                     0x20
#define SEG13COM3_clear_mask                     0xDF

#define T3CKPS119                                0x5
#define T3CKPS119_address                        0xF78
#define T3CKPS119_position                       0x5
#define T3CKPS119_size                           0x1
#define T3CKPS119_value_mask                     0x20
#define T3CKPS119_clear_mask                     0xDF

#define S14C3                                    0x6
#define S14C3_address                            0xF78
#define S14C3_position                           0x6
#define S14C3_size                               0x1
#define S14C3_value_mask                         0x40
#define S14C3_clear_mask                         0xBF

#define SEG14COM3                                0x6
#define SEG14COM3_address                        0xF78
#define SEG14COM3_position                       0x6
#define SEG14COM3_size                           0x1
#define SEG14COM3_value_mask                     0x40
#define SEG14COM3_clear_mask                     0xBF

#define TMR3CS019                                0x6
#define TMR3CS019_address                        0xF78
#define TMR3CS019_position                       0x6
#define TMR3CS019_size                           0x1
#define TMR3CS019_value_mask                     0x40
#define TMR3CS019_clear_mask                     0xBF

#define SEG15COM3                                0x7
#define SEG15COM3_address                        0xF78
#define SEG15COM3_position                       0x7
#define SEG15COM3_size                           0x1
#define SEG15COM3_value_mask                     0x80
#define SEG15COM3_clear_mask                     0x7F

#define S15C3                                    0x7
#define S15C3_address                            0xF78
#define S15C3_position                           0x7
#define S15C3_size                               0x1
#define S15C3_value_mask                         0x80
#define S15C3_clear_mask                         0x7F

#define TMR3CS119                                0x7
#define TMR3CS119_address                        0xF78
#define TMR3CS119_position                       0x7
#define TMR3CS119_size                           0x1
#define TMR3CS119_value_mask                     0x80
#define TMR3CS119_clear_mask                     0x7F


/*--------------------------------------------------------------------------#
| LCDDATA20                                                           0xF79 |
#---------------------------------------------------------------------------#
| S23C3 | SEG22COM3 | S21C3 | S20C3 | S19C3 | SEG18COM3 | S17C3 | SEG16COM3 |
#---------------------------------------------------------------------------#
| 7     | 6         | 5     | 4     | 3     | 2         | 1     | 0         |
#--------------------------------------------------------------------------*/

#define LCDDATA20                                0x0
#define LCDDATA20_address                        0xF79
#define LCDDATA20_position                       0x0
#define LCDDATA20_size                           0x8
#define LCDDATA20_value_mask                     0xFF
#define LCDDATA20_clear_mask                     0x0

#define S16C3                                    0x0
#define S16C3_address                            0xF79
#define S16C3_position                           0x0
#define S16C3_size                               0x1
#define S16C3_value_mask                         0x1
#define S16C3_clear_mask                         0xFE

#define SEG16COM3                                0x0
#define SEG16COM3_address                        0xF79
#define SEG16COM3_position                       0x0
#define SEG16COM3_size                           0x1
#define SEG16COM3_value_mask                     0x1
#define SEG16COM3_clear_mask                     0xFE

#define SEG17COM3                                0x1
#define SEG17COM3_address                        0xF79
#define SEG17COM3_position                       0x1
#define SEG17COM3_size                           0x1
#define SEG17COM3_value_mask                     0x2
#define SEG17COM3_clear_mask                     0xFD

#define S17C3                                    0x1
#define S17C3_address                            0xF79
#define S17C3_position                           0x1
#define S17C3_size                               0x1
#define S17C3_value_mask                         0x2
#define S17C3_clear_mask                         0xFD

#define SEG18COM3                                0x2
#define SEG18COM3_address                        0xF79
#define SEG18COM3_position                       0x2
#define SEG18COM3_size                           0x1
#define SEG18COM3_value_mask                     0x4
#define SEG18COM3_clear_mask                     0xFB

#define S18C3                                    0x2
#define S18C3_address                            0xF79
#define S18C3_position                           0x2
#define S18C3_size                               0x1
#define S18C3_value_mask                         0x4
#define S18C3_clear_mask                         0xFB

#define S19C3                                    0x3
#define S19C3_address                            0xF79
#define S19C3_position                           0x3
#define S19C3_size                               0x1
#define S19C3_value_mask                         0x8
#define S19C3_clear_mask                         0xF7

#define SEG19COM3                                0x3
#define SEG19COM3_address                        0xF79
#define SEG19COM3_position                       0x3
#define SEG19COM3_size                           0x1
#define SEG19COM3_value_mask                     0x8
#define SEG19COM3_clear_mask                     0xF7

#define S20C3                                    0x4
#define S20C3_address                            0xF79
#define S20C3_position                           0x4
#define S20C3_size                               0x1
#define S20C3_value_mask                         0x10
#define S20C3_clear_mask                         0xEF

#define SEG20COM3                                0x4
#define SEG20COM3_address                        0xF79
#define SEG20COM3_position                       0x4
#define SEG20COM3_size                           0x1
#define SEG20COM3_value_mask                     0x10
#define SEG20COM3_clear_mask                     0xEF

#define SEG21COM3                                0x5
#define SEG21COM3_address                        0xF79
#define SEG21COM3_position                       0x5
#define SEG21COM3_size                           0x1
#define SEG21COM3_value_mask                     0x20
#define SEG21COM3_clear_mask                     0xDF

#define S21C3                                    0x5
#define S21C3_address                            0xF79
#define S21C3_position                           0x5
#define S21C3_size                               0x1
#define S21C3_value_mask                         0x20
#define S21C3_clear_mask                         0xDF

#define SEG22COM3                                0x6
#define SEG22COM3_address                        0xF79
#define SEG22COM3_position                       0x6
#define SEG22COM3_size                           0x1
#define SEG22COM3_value_mask                     0x40
#define SEG22COM3_clear_mask                     0xBF

#define S22C3                                    0x6
#define S22C3_address                            0xF79
#define S22C3_position                           0x6
#define S22C3_size                               0x1
#define S22C3_value_mask                         0x40
#define S22C3_clear_mask                         0xBF

#define S23C3                                    0x7
#define S23C3_address                            0xF79
#define S23C3_position                           0x7
#define S23C3_size                               0x1
#define S23C3_value_mask                         0x80
#define S23C3_clear_mask                         0x7F

#define SEG23COM3                                0x7
#define SEG23COM3_address                        0xF79
#define SEG23COM3_position                       0x7
#define SEG23COM3_size                           0x1
#define SEG23COM3_value_mask                     0x80
#define SEG23COM3_clear_mask                     0x7F


/*--------------------------------------------------------------------------#
| LCDDATA21                                                           0xF7A |
#---------------------------------------------------------------------------#
| S31C3 | SEG30COM3 | S29C3 | SEG28COM3 | SEG27COM3 | S26C3 | S25C3 | S24C3 |
#---------------------------------------------------------------------------#
| 7     | 6         | 5     | 4         | 3         | 2     | 1     | 0     |
#--------------------------------------------------------------------------*/

#define S24C3                                    0x0
#define S24C3_address                            0xF7A
#define S24C3_position                           0x0
#define S24C3_size                               0x1
#define S24C3_value_mask                         0x1
#define S24C3_clear_mask                         0xFE

#define LCDDATA21                                0x0
#define LCDDATA21_address                        0xF7A
#define LCDDATA21_position                       0x0
#define LCDDATA21_size                           0x8
#define LCDDATA21_value_mask                     0xFF
#define LCDDATA21_clear_mask                     0x0

#define SEG24COM3                                0x0
#define SEG24COM3_address                        0xF7A
#define SEG24COM3_position                       0x0
#define SEG24COM3_size                           0x1
#define SEG24COM3_value_mask                     0x1
#define SEG24COM3_clear_mask                     0xFE

#define S25C3                                    0x1
#define S25C3_address                            0xF7A
#define S25C3_position                           0x1
#define S25C3_size                               0x1
#define S25C3_value_mask                         0x2
#define S25C3_clear_mask                         0xFD

#define SEG25COM3                                0x1
#define SEG25COM3_address                        0xF7A
#define SEG25COM3_position                       0x1
#define SEG25COM3_size                           0x1
#define SEG25COM3_value_mask                     0x2
#define SEG25COM3_clear_mask                     0xFD

#define S26C3                                    0x2
#define S26C3_address                            0xF7A
#define S26C3_position                           0x2
#define S26C3_size                               0x1
#define S26C3_value_mask                         0x4
#define S26C3_clear_mask                         0xFB

#define SEG26COM3                                0x2
#define SEG26COM3_address                        0xF7A
#define SEG26COM3_position                       0x2
#define SEG26COM3_size                           0x1
#define SEG26COM3_value_mask                     0x4
#define SEG26COM3_clear_mask                     0xFB

#define SEG27COM3                                0x3
#define SEG27COM3_address                        0xF7A
#define SEG27COM3_position                       0x3
#define SEG27COM3_size                           0x1
#define SEG27COM3_value_mask                     0x8
#define SEG27COM3_clear_mask                     0xF7

#define S27C3                                    0x3
#define S27C3_address                            0xF7A
#define S27C3_position                           0x3
#define S27C3_size                               0x1
#define S27C3_value_mask                         0x8
#define S27C3_clear_mask                         0xF7

#define SEG28COM3                                0x4
#define SEG28COM3_address                        0xF7A
#define SEG28COM3_position                       0x4
#define SEG28COM3_size                           0x1
#define SEG28COM3_value_mask                     0x10
#define SEG28COM3_clear_mask                     0xEF

#define S28C3                                    0x4
#define S28C3_address                            0xF7A
#define S28C3_position                           0x4
#define S28C3_size                               0x1
#define S28C3_value_mask                         0x10
#define S28C3_clear_mask                         0xEF

#define SEG29COM3                                0x5
#define SEG29COM3_address                        0xF7A
#define SEG29COM3_position                       0x5
#define SEG29COM3_size                           0x1
#define SEG29COM3_value_mask                     0x20
#define SEG29COM3_clear_mask                     0xDF

#define S29C3                                    0x5
#define S29C3_address                            0xF7A
#define S29C3_position                           0x5
#define S29C3_size                               0x1
#define S29C3_value_mask                         0x20
#define S29C3_clear_mask                         0xDF

#define SEG30COM3                                0x6
#define SEG30COM3_address                        0xF7A
#define SEG30COM3_position                       0x6
#define SEG30COM3_size                           0x1
#define SEG30COM3_value_mask                     0x40
#define SEG30COM3_clear_mask                     0xBF

#define S30C3                                    0x6
#define S30C3_address                            0xF7A
#define S30C3_position                           0x6
#define S30C3_size                               0x1
#define S30C3_value_mask                         0x40
#define S30C3_clear_mask                         0xBF

#define SEG31COM3                                0x7
#define SEG31COM3_address                        0xF7A
#define SEG31COM3_position                       0x7
#define SEG31COM3_size                           0x1
#define SEG31COM3_value_mask                     0x80
#define SEG31COM3_clear_mask                     0x7F

#define S31C3                                    0x7
#define S31C3_address                            0xF7A
#define S31C3_position                           0x7
#define S31C3_size                               0x1
#define S31C3_value_mask                         0x80
#define S31C3_clear_mask                         0x7F


/*--------------------------------------------------------------------------#
| LCDDATA22                                                           0xF7B |
#---------------------------------------------------------------------------#
| SEG39COM3 | S38C3 | SEG37COM3 | S36C3 | S35C3 | S34C3 | SEG33COM3 | S32C3 |
#---------------------------------------------------------------------------#
| 7         | 6     | 5         | 4     | 3     | 2     | 1         | 0     |
#--------------------------------------------------------------------------*/

#define LCDDATA22                                0x0
#define LCDDATA22_address                        0xF7B
#define LCDDATA22_position                       0x0
#define LCDDATA22_size                           0x8
#define LCDDATA22_value_mask                     0xFF
#define LCDDATA22_clear_mask                     0x0

#define S32C3                                    0x0
#define S32C3_address                            0xF7B
#define S32C3_position                           0x0
#define S32C3_size                               0x1
#define S32C3_value_mask                         0x1
#define S32C3_clear_mask                         0xFE

#define SEG32COM3                                0x0
#define SEG32COM3_address                        0xF7B
#define SEG32COM3_position                       0x0
#define SEG32COM3_size                           0x1
#define SEG32COM3_value_mask                     0x1
#define SEG32COM3_clear_mask                     0xFE

#define SEG33COM3                                0x1
#define SEG33COM3_address                        0xF7B
#define SEG33COM3_position                       0x1
#define SEG33COM3_size                           0x1
#define SEG33COM3_value_mask                     0x2
#define SEG33COM3_clear_mask                     0xFD

#define S33C3                                    0x1
#define S33C3_address                            0xF7B
#define S33C3_position                           0x1
#define S33C3_size                               0x1
#define S33C3_value_mask                         0x2
#define S33C3_clear_mask                         0xFD

#define S34C3                                    0x2
#define S34C3_address                            0xF7B
#define S34C3_position                           0x2
#define S34C3_size                               0x1
#define S34C3_value_mask                         0x4
#define S34C3_clear_mask                         0xFB

#define SEG34COM3                                0x2
#define SEG34COM3_address                        0xF7B
#define SEG34COM3_position                       0x2
#define SEG34COM3_size                           0x1
#define SEG34COM3_value_mask                     0x4
#define SEG34COM3_clear_mask                     0xFB

#define S35C3                                    0x3
#define S35C3_address                            0xF7B
#define S35C3_position                           0x3
#define S35C3_size                               0x1
#define S35C3_value_mask                         0x8
#define S35C3_clear_mask                         0xF7

#define SEG35COM3                                0x3
#define SEG35COM3_address                        0xF7B
#define SEG35COM3_position                       0x3
#define SEG35COM3_size                           0x1
#define SEG35COM3_value_mask                     0x8
#define SEG35COM3_clear_mask                     0xF7

#define S36C3                                    0x4
#define S36C3_address                            0xF7B
#define S36C3_position                           0x4
#define S36C3_size                               0x1
#define S36C3_value_mask                         0x10
#define S36C3_clear_mask                         0xEF

#define SEG36COM3                                0x4
#define SEG36COM3_address                        0xF7B
#define SEG36COM3_position                       0x4
#define SEG36COM3_size                           0x1
#define SEG36COM3_value_mask                     0x10
#define SEG36COM3_clear_mask                     0xEF

#define SEG37COM3                                0x5
#define SEG37COM3_address                        0xF7B
#define SEG37COM3_position                       0x5
#define SEG37COM3_size                           0x1
#define SEG37COM3_value_mask                     0x20
#define SEG37COM3_clear_mask                     0xDF

#define S37C3                                    0x5
#define S37C3_address                            0xF7B
#define S37C3_position                           0x5
#define S37C3_size                               0x1
#define S37C3_value_mask                         0x20
#define S37C3_clear_mask                         0xDF

#define S38C3                                    0x6
#define S38C3_address                            0xF7B
#define S38C3_position                           0x6
#define S38C3_size                               0x1
#define S38C3_value_mask                         0x40
#define S38C3_clear_mask                         0xBF

#define SEG38COM3                                0x6
#define SEG38COM3_address                        0xF7B
#define SEG38COM3_position                       0x6
#define SEG38COM3_size                           0x1
#define SEG38COM3_value_mask                     0x40
#define SEG38COM3_clear_mask                     0xBF

#define SEG39COM3                                0x7
#define SEG39COM3_address                        0xF7B
#define SEG39COM3_position                       0x7
#define SEG39COM3_size                           0x1
#define SEG39COM3_value_mask                     0x80
#define SEG39COM3_clear_mask                     0x7F

#define S39C3                                    0x7
#define S39C3_address                            0xF7B
#define S39C3_position                           0x7
#define S39C3_size                               0x1
#define S39C3_value_mask                         0x80
#define S39C3_clear_mask                         0x7F


/*----------------------------------------------------------------------#
| LCDDATA23                                                       0xF7C |
#-----------------------------------------------------------------------#
| S47C3 | S46C3 | S45C3 | SEG44COM3 | S43C3 | S42C3 | SEG41COM3 | S40C3 |
#-----------------------------------------------------------------------#
| 7     | 6     | 5     | 4         | 3     | 2     | 1         | 0     |
#----------------------------------------------------------------------*/

#define LCDDATA23                                0x0
#define LCDDATA23_address                        0xF7C
#define LCDDATA23_position                       0x0
#define LCDDATA23_size                           0x8
#define LCDDATA23_value_mask                     0xFF
#define LCDDATA23_clear_mask                     0x0

#define S40C3                                    0x0
#define S40C3_address                            0xF7C
#define S40C3_position                           0x0
#define S40C3_size                               0x1
#define S40C3_value_mask                         0x1
#define S40C3_clear_mask                         0xFE

#define SEG40COM3                                0x0
#define SEG40COM3_address                        0xF7C
#define SEG40COM3_position                       0x0
#define SEG40COM3_size                           0x1
#define SEG40COM3_value_mask                     0x1
#define SEG40COM3_clear_mask                     0xFE

#define SEG41COM3                                0x1
#define SEG41COM3_address                        0xF7C
#define SEG41COM3_position                       0x1
#define SEG41COM3_size                           0x1
#define SEG41COM3_value_mask                     0x2
#define SEG41COM3_clear_mask                     0xFD

#define S41C3                                    0x1
#define S41C3_address                            0xF7C
#define S41C3_position                           0x1
#define S41C3_size                               0x1
#define S41C3_value_mask                         0x2
#define S41C3_clear_mask                         0xFD

#define S42C3                                    0x2
#define S42C3_address                            0xF7C
#define S42C3_position                           0x2
#define S42C3_size                               0x1
#define S42C3_value_mask                         0x4
#define S42C3_clear_mask                         0xFB

#define SEG42COM3                                0x2
#define SEG42COM3_address                        0xF7C
#define SEG42COM3_position                       0x2
#define SEG42COM3_size                           0x1
#define SEG42COM3_value_mask                     0x4
#define SEG42COM3_clear_mask                     0xFB

#define SEG43COM3                                0x3
#define SEG43COM3_address                        0xF7C
#define SEG43COM3_position                       0x3
#define SEG43COM3_size                           0x1
#define SEG43COM3_value_mask                     0x8
#define SEG43COM3_clear_mask                     0xF7

#define S43C3                                    0x3
#define S43C3_address                            0xF7C
#define S43C3_position                           0x3
#define S43C3_size                               0x1
#define S43C3_value_mask                         0x8
#define S43C3_clear_mask                         0xF7

#define SEG44COM3                                0x4
#define SEG44COM3_address                        0xF7C
#define SEG44COM3_position                       0x4
#define SEG44COM3_size                           0x1
#define SEG44COM3_value_mask                     0x10
#define SEG44COM3_clear_mask                     0xEF

#define S44C3                                    0x4
#define S44C3_address                            0xF7C
#define S44C3_position                           0x4
#define S44C3_size                               0x1
#define S44C3_value_mask                         0x10
#define S44C3_clear_mask                         0xEF

#define S45C3                                    0x5
#define S45C3_address                            0xF7C
#define S45C3_position                           0x5
#define S45C3_size                               0x1
#define S45C3_value_mask                         0x20
#define S45C3_clear_mask                         0xDF

#define SEG45COM3                                0x5
#define SEG45COM3_address                        0xF7C
#define SEG45COM3_position                       0x5
#define SEG45COM3_size                           0x1
#define SEG45COM3_value_mask                     0x20
#define SEG45COM3_clear_mask                     0xDF

#define S46C3                                    0x6
#define S46C3_address                            0xF7C
#define S46C3_position                           0x6
#define S46C3_size                               0x1
#define S46C3_value_mask                         0x40
#define S46C3_clear_mask                         0xBF

#define SEG46COM3                                0x6
#define SEG46COM3_address                        0xF7C
#define SEG46COM3_position                       0x6
#define SEG46COM3_size                           0x1
#define SEG46COM3_value_mask                     0x40
#define SEG46COM3_clear_mask                     0xBF

#define S47C3                                    0x7
#define S47C3_address                            0xF7C
#define S47C3_position                           0x7
#define S47C3_size                               0x1
#define S47C3_value_mask                         0x80
#define S47C3_clear_mask                         0x7F

#define SEG47COM3                                0x7
#define SEG47COM3_address                        0xF7C
#define SEG47COM3_position                       0x7
#define SEG47COM3_size                           0x1
#define SEG47COM3_value_mask                     0x80
#define SEG47COM3_clear_mask                     0x7F


/*-------------------------------------------------------#
| BAUDCON1                                         0xF7E |
#--------------------------------------------------------#
| ABDOVF | RCIDL | - | TXCKP | BRG16 | - | WUE1 | ABDEN1 |
#--------------------------------------------------------#
| 7      | 6     | 5 | 4     | 3     | 2 | 1    | 0      |
#-------------------------------------------------------*/

#define BAUDCON1                                 0x0
#define BAUDCON1_address                         0xF7E
#define BAUDCON1_position                        0x0
#define BAUDCON1_size                            0x8
#define BAUDCON1_value_mask                      0xFF
#define BAUDCON1_clear_mask                      0x0

#define ABDEN1                                   0x0
#define ABDEN1_address                           0xF7E
#define ABDEN1_position                          0x0
#define ABDEN1_size                              0x1
#define ABDEN1_value_mask                        0x1
#define ABDEN1_clear_mask                        0xFE

#define ABDEN                                    0x0
#define ABDEN_address                            0xF7E
#define ABDEN_position                           0x0
#define ABDEN_size                               0x1
#define ABDEN_value_mask                         0x1
#define ABDEN_clear_mask                         0xFE

#define WUE1                                     0x1
#define WUE1_address                             0xF7E
#define WUE1_position                            0x1
#define WUE1_size                                0x1
#define WUE1_value_mask                          0x2
#define WUE1_clear_mask                          0xFD

#define WUE                                      0x1
#define WUE_address                              0xF7E
#define WUE_position                             0x1
#define WUE_size                                 0x1
#define WUE_value_mask                           0x2
#define WUE_clear_mask                           0xFD

#define BRG16                                    0x3
#define BRG16_address                            0xF7E
#define BRG16_position                           0x3
#define BRG16_size                               0x1
#define BRG16_value_mask                         0x8
#define BRG16_clear_mask                         0xF7

#define BRG161                                   0x3
#define BRG161_address                           0xF7E
#define BRG161_position                          0x3
#define BRG161_size                              0x1
#define BRG161_value_mask                        0x8
#define BRG161_clear_mask                        0xF7

#define SCKP                                     0x4
#define SCKP_address                             0xF7E
#define SCKP_position                            0x4
#define SCKP_size                                0x1
#define SCKP_value_mask                          0x10
#define SCKP_clear_mask                          0xEF

#define TXCKP                                    0x4
#define TXCKP_address                            0xF7E
#define TXCKP_position                           0x4
#define TXCKP_size                               0x1
#define TXCKP_value_mask                         0x10
#define TXCKP_clear_mask                         0xEF

#define SCKP1                                    0x4
#define SCKP1_address                            0xF7E
#define SCKP1_position                           0x4
#define SCKP1_size                               0x1
#define SCKP1_value_mask                         0x10
#define SCKP1_clear_mask                         0xEF

#define TXCKP1                                   0x4
#define TXCKP1_address                           0xF7E
#define TXCKP1_position                          0x4
#define TXCKP1_size                              0x1
#define TXCKP1_value_mask                        0x10
#define TXCKP1_clear_mask                        0xEF

#define CKTXP                                    0x4
#define CKTXP_address                            0xF7E
#define CKTXP_position                           0x4
#define CKTXP_size                               0x1
#define CKTXP_value_mask                         0x10
#define CKTXP_clear_mask                         0xEF

#define RCMT                                     0x6
#define RCMT_address                             0xF7E
#define RCMT_position                            0x6
#define RCMT_size                                0x1
#define RCMT_value_mask                          0x40
#define RCMT_clear_mask                          0xBF

#define RCIDL                                    0x6
#define RCIDL_address                            0xF7E
#define RCIDL_position                           0x6
#define RCIDL_size                               0x1
#define RCIDL_value_mask                         0x40
#define RCIDL_clear_mask                         0xBF

#define RCIDL1                                   0x6
#define RCIDL1_address                           0xF7E
#define RCIDL1_position                          0x6
#define RCIDL1_size                              0x1
#define RCIDL1_value_mask                        0x40
#define RCIDL1_clear_mask                        0xBF

#define RCMT1                                    0x6
#define RCMT1_address                            0xF7E
#define RCMT1_position                           0x6
#define RCMT1_size                               0x1
#define RCMT1_value_mask                         0x40
#define RCMT1_clear_mask                         0xBF

#define ABDOVF                                   0x7
#define ABDOVF_address                           0xF7E
#define ABDOVF_position                          0x7
#define ABDOVF_size                              0x1
#define ABDOVF_value_mask                        0x80
#define ABDOVF_clear_mask                        0x7F

#define ABDOVF1                                  0x7
#define ABDOVF1_address                          0xF7E
#define ABDOVF1_position                         0x7
#define ABDOVF1_size                             0x1
#define ABDOVF1_value_mask                       0x80
#define ABDOVF1_clear_mask                       0x7F


/*--------------------------------------------------------#
| PORTA                                             0xF80 |
#---------------------------------------------------------#
| CLKI | CLKO | SEG15 | SEG14 | SEG17 | SEG16 | AN1 | AN0 |
#---------------------------------------------------------#
| 7    | 6    | 5     | 4     | 3     | 2     | 1   | 0   |
#--------------------------------------------------------*/

#define PORTA                                    0x0
#define PORTA_address                            0xF80
#define PORTA_position                           0x0
#define PORTA_size                               0x8
#define PORTA_value_mask                         0xFF
#define PORTA_clear_mask                         0x0

#define AN0                                      0x0
#define AN0_address                              0xF80
#define AN0_position                             0x0
#define AN0_size                                 0x1
#define AN0_value_mask                           0x1
#define AN0_clear_mask                           0xFE

#define ULPWUIN                                  0x0
#define ULPWUIN_address                          0xF80
#define ULPWUIN_position                         0x0
#define ULPWUIN_size                             0x1
#define ULPWUIN_value_mask                       0x1
#define ULPWUIN_clear_mask                       0xFE

#define PORTA_RA0                                0x0
#define PORTA_RA0_address                        0xF80
#define PORTA_RA0_position                       0x0
#define PORTA_RA0_size                           0x1
#define PORTA_RA0_value_mask                     0x1
#define PORTA_RA0_clear_mask                     0xFE

#define AN1                                      0x1
#define AN1_address                              0xF80
#define AN1_position                             0x1
#define AN1_size                                 0x1
#define AN1_value_mask                           0x2
#define AN1_clear_mask                           0xFD

#define PORTA_RA1                                0x1
#define PORTA_RA1_address                        0xF80
#define PORTA_RA1_position                       0x1
#define PORTA_RA1_size                           0x1
#define PORTA_RA1_value_mask                     0x2
#define PORTA_RA1_clear_mask                     0xFD

#define SEG16                                    0x2
#define SEG16_address                            0xF80
#define SEG16_position                           0x2
#define SEG16_size                               0x1
#define SEG16_value_mask                         0x4
#define SEG16_clear_mask                         0xFB

#define AN2                                      0x2
#define AN2_address                              0xF80
#define AN2_position                             0x2
#define AN2_size                                 0x1
#define AN2_value_mask                           0x4
#define AN2_clear_mask                           0xFB

#define PORTA_RA2                                0x2
#define PORTA_RA2_address                        0xF80
#define PORTA_RA2_position                       0x2
#define PORTA_RA2_size                           0x1
#define PORTA_RA2_value_mask                     0x4
#define PORTA_RA2_clear_mask                     0xFB

#define VREFM                                    0x2
#define VREFM_address                            0xF80
#define VREFM_position                           0x2
#define VREFM_size                               0x1
#define VREFM_value_mask                         0x4
#define VREFM_clear_mask                         0xFB

#define SEG17                                    0x3
#define SEG17_address                            0xF80
#define SEG17_position                           0x3
#define SEG17_size                               0x1
#define SEG17_value_mask                         0x8
#define SEG17_clear_mask                         0xF7

#define AN3                                      0x3
#define AN3_address                              0xF80
#define AN3_position                             0x3
#define AN3_size                                 0x1
#define AN3_value_mask                           0x8
#define AN3_clear_mask                           0xF7

#define PORTA_RA3                                0x3
#define PORTA_RA3_address                        0xF80
#define PORTA_RA3_position                       0x3
#define PORTA_RA3_size                           0x1
#define PORTA_RA3_value_mask                     0x8
#define PORTA_RA3_clear_mask                     0xF7

#define VREFP                                    0x3
#define VREFP_address                            0xF80
#define VREFP_position                           0x3
#define VREFP_size                               0x1
#define VREFP_value_mask                         0x8
#define VREFP_clear_mask                         0xF7

#define PORTA_RA4                                0x4
#define PORTA_RA4_address                        0xF80
#define PORTA_RA4_position                       0x4
#define PORTA_RA4_size                           0x1
#define PORTA_RA4_value_mask                     0x10
#define PORTA_RA4_clear_mask                     0xEF

#define SEG14                                    0x4
#define SEG14_address                            0xF80
#define SEG14_position                           0x4
#define SEG14_size                               0x1
#define SEG14_value_mask                         0x10
#define SEG14_clear_mask                         0xEF

#define T0CKI                                    0x4
#define T0CKI_address                            0xF80
#define T0CKI_position                           0x4
#define T0CKI_size                               0x1
#define T0CKI_value_mask                         0x10
#define T0CKI_clear_mask                         0xEF

#define SEG15                                    0x5
#define SEG15_address                            0xF80
#define SEG15_position                           0x5
#define SEG15_size                               0x1
#define SEG15_value_mask                         0x20
#define SEG15_clear_mask                         0xDF

#define AN4                                      0x5
#define AN4_address                              0xF80
#define AN4_position                             0x5
#define AN4_size                                 0x1
#define AN4_value_mask                           0x20
#define AN4_clear_mask                           0xDF

#define PORTA_RA5                                0x5
#define PORTA_RA5_address                        0xF80
#define PORTA_RA5_position                       0x5
#define PORTA_RA5_size                           0x1
#define PORTA_RA5_value_mask                     0x20
#define PORTA_RA5_clear_mask                     0xDF

#define LVDIN                                    0x5
#define LVDIN_address                            0xF80
#define LVDIN_position                           0x5
#define LVDIN_size                               0x1
#define LVDIN_value_mask                         0x20
#define LVDIN_clear_mask                         0xDF

#define CLKO                                     0x6
#define CLKO_address                             0xF80
#define CLKO_position                            0x6
#define CLKO_size                                0x1
#define CLKO_value_mask                          0x40
#define CLKO_clear_mask                          0xBF

#define PORTA_RA6                                0x6
#define PORTA_RA6_address                        0xF80
#define PORTA_RA6_position                       0x6
#define PORTA_RA6_size                           0x1
#define PORTA_RA6_value_mask                     0x40
#define PORTA_RA6_clear_mask                     0xBF

#define OSC2                                     0x6
#define OSC2_address                             0xF80
#define OSC2_position                            0x6
#define OSC2_size                                0x1
#define OSC2_value_mask                          0x40
#define OSC2_clear_mask                          0xBF

#define CLKI                                     0x7
#define CLKI_address                             0xF80
#define CLKI_position                            0x7
#define CLKI_size                                0x1
#define CLKI_value_mask                          0x80
#define CLKI_clear_mask                          0x7F

#define PORTA_RA7                                0x7
#define PORTA_RA7_address                        0xF80
#define PORTA_RA7_position                       0x7
#define PORTA_RA7_size                           0x1
#define PORTA_RA7_value_mask                     0x80
#define PORTA_RA7_clear_mask                     0x7F

#define OSC1                                     0x7
#define OSC1_address                             0xF80
#define OSC1_position                            0x7
#define OSC1_size                                0x1
#define OSC1_value_mask                          0x80
#define OSC1_clear_mask                          0x7F

#define PORTA_RJPU                               0x7
#define PORTA_RJPU_address                       0xF80
#define PORTA_RJPU_position                      0x7
#define PORTA_RJPU_size                          0x1
#define PORTA_RJPU_value_mask                    0x80
#define PORTA_RJPU_clear_mask                    0x7F


/*-----------------------------------------------------#
| PORTB                                          0xF81 |
#------------------------------------------------------#
| PGD | PGC | PGM | SEG11 | SEG10 | INT2 | INT1 | INT0 |
#------------------------------------------------------#
| 7   | 6   | 5   | 4     | 3     | 2    | 1    | 0    |
#-----------------------------------------------------*/

#define PORTB                                    0x0
#define PORTB_address                            0xF81
#define PORTB_position                           0x0
#define PORTB_size                               0x8
#define PORTB_value_mask                         0xFF
#define PORTB_clear_mask                         0x0

#define INT0                                     0x0
#define INT0_address                             0xF81
#define INT0_position                            0x0
#define INT0_size                                0x1
#define INT0_value_mask                          0x1
#define INT0_clear_mask                          0xFE

#define PORTB_RB0                                0x0
#define PORTB_RB0_address                        0xF81
#define PORTB_RB0_position                       0x0
#define PORTB_RB0_size                           0x1
#define PORTB_RB0_value_mask                     0x1
#define PORTB_RB0_clear_mask                     0xFE

#define INT1                                     0x1
#define INT1_address                             0xF81
#define INT1_position                            0x1
#define INT1_size                                0x1
#define INT1_value_mask                          0x2
#define INT1_clear_mask                          0xFD

#define SEG8                                     0x1
#define SEG8_address                             0xF81
#define SEG8_position                            0x1
#define SEG8_size                                0x1
#define SEG8_value_mask                          0x2
#define SEG8_clear_mask                          0xFD

#define PORTB_RB1                                0x1
#define PORTB_RB1_address                        0xF81
#define PORTB_RB1_position                       0x1
#define PORTB_RB1_size                           0x1
#define PORTB_RB1_value_mask                     0x2
#define PORTB_RB1_clear_mask                     0xFD

#define INT2                                     0x2
#define INT2_address                             0xF81
#define INT2_position                            0x2
#define INT2_size                                0x1
#define INT2_value_mask                          0x4
#define INT2_clear_mask                          0xFB

#define SEG9                                     0x2
#define SEG9_address                             0xF81
#define SEG9_position                            0x2
#define SEG9_size                                0x1
#define SEG9_value_mask                          0x4
#define SEG9_clear_mask                          0xFB

#define PORTB_RB2                                0x2
#define PORTB_RB2_address                        0xF81
#define PORTB_RB2_position                       0x2
#define PORTB_RB2_size                           0x1
#define PORTB_RB2_value_mask                     0x4
#define PORTB_RB2_clear_mask                     0xFB

#define SEG10                                    0x3
#define SEG10_address                            0xF81
#define SEG10_position                           0x3
#define SEG10_size                               0x1
#define SEG10_value_mask                         0x8
#define SEG10_clear_mask                         0xF7

#define CCP2B                                    0x3
#define CCP2B_address                            0xF81
#define CCP2B_position                           0x3
#define CCP2B_size                               0x1
#define CCP2B_value_mask                         0x8
#define CCP2B_clear_mask                         0xF7

#define INT3                                     0x3
#define INT3_address                             0xF81
#define INT3_position                            0x3
#define INT3_size                                0x1
#define INT3_value_mask                          0x8
#define INT3_clear_mask                          0xF7

#define CCP2_PA2                                 0x3
#define CCP2_PA2_address                         0xF81
#define CCP2_PA2_position                        0x3
#define CCP2_PA2_size                            0x1
#define CCP2_PA2_value_mask                      0x8
#define CCP2_PA2_clear_mask                      0xF7

#define PORTB_RB3                                0x3
#define PORTB_RB3_address                        0xF81
#define PORTB_RB3_position                       0x3
#define PORTB_RB3_size                           0x1
#define PORTB_RB3_value_mask                     0x8
#define PORTB_RB3_clear_mask                     0xF7

#define SEG11                                    0x4
#define SEG11_address                            0xF81
#define SEG11_position                           0x4
#define SEG11_size                               0x1
#define SEG11_value_mask                         0x10
#define SEG11_clear_mask                         0xEF

#define KBI0                                     0x4
#define KBI0_address                             0xF81
#define KBI0_position                            0x4
#define KBI0_size                                0x1
#define KBI0_value_mask                          0x10
#define KBI0_clear_mask                          0xEF

#define PORTB_RB4                                0x4
#define PORTB_RB4_address                        0xF81
#define PORTB_RB4_position                       0x4
#define PORTB_RB4_size                           0x1
#define PORTB_RB4_value_mask                     0x10
#define PORTB_RB4_clear_mask                     0xEF

#define PGM                                      0x5
#define PGM_address                              0xF81
#define PGM_position                             0x5
#define PGM_size                                 0x1
#define PGM_value_mask                           0x20
#define PGM_clear_mask                           0xDF

#define KBI1                                     0x5
#define KBI1_address                             0xF81
#define KBI1_position                            0x5
#define KBI1_size                                0x1
#define KBI1_value_mask                          0x20
#define KBI1_clear_mask                          0xDF

#define PORTB_RB5                                0x5
#define PORTB_RB5_address                        0xF81
#define PORTB_RB5_position                       0x5
#define PORTB_RB5_size                           0x1
#define PORTB_RB5_value_mask                     0x20
#define PORTB_RB5_clear_mask                     0xDF

#define PGC                                      0x6
#define PGC_address                              0xF81
#define PGC_position                             0x6
#define PGC_size                                 0x1
#define PGC_value_mask                           0x40
#define PGC_clear_mask                           0xBF

#define KBI2                                     0x6
#define KBI2_address                             0xF81
#define KBI2_position                            0x6
#define KBI2_size                                0x1
#define KBI2_value_mask                          0x40
#define KBI2_clear_mask                          0xBF

#define PORTB_RB6                                0x6
#define PORTB_RB6_address                        0xF81
#define PORTB_RB6_position                       0x6
#define PORTB_RB6_size                           0x1
#define PORTB_RB6_value_mask                     0x40
#define PORTB_RB6_clear_mask                     0xBF

#define PGD                                      0x7
#define PGD_address                              0xF81
#define PGD_position                             0x7
#define PGD_size                                 0x1
#define PGD_value_mask                           0x80
#define PGD_clear_mask                           0x7F

#define KBI3                                     0x7
#define KBI3_address                             0xF81
#define KBI3_position                            0x7
#define KBI3_size                                0x1
#define KBI3_value_mask                          0x80
#define KBI3_clear_mask                          0x7F

#define PORTB_RB7                                0x7
#define PORTB_RB7_address                        0xF81
#define PORTB_RB7_position                       0x7
#define PORTB_RB7_size                           0x1
#define PORTB_RB7_value_mask                     0x80
#define PORTB_RB7_clear_mask                     0x7F


/*----------------------------------------------------#
| PORTC                                         0xF82 |
#-----------------------------------------------------#
| DT | CK | SDO | SDI | SEG12 | CCP1 | CCP2C | T13CKI |
#-----------------------------------------------------#
| 7  | 6  | 5   | 4   | 3     | 2    | 1     | 0      |
#----------------------------------------------------*/

#define PORTC                                    0x0
#define PORTC_address                            0xF82
#define PORTC_position                           0x0
#define PORTC_size                               0x8
#define PORTC_value_mask                         0xFF
#define PORTC_clear_mask                         0x0

#define T13CKI                                   0x0
#define T13CKI_address                           0xF82
#define T13CKI_position                          0x0
#define T13CKI_size                              0x1
#define T13CKI_value_mask                        0x1
#define T13CKI_clear_mask                        0xFE

#define T1OSO                                    0x0
#define T1OSO_address                            0xF82
#define T1OSO_position                           0x0
#define T1OSO_size                               0x1
#define T1OSO_value_mask                         0x1
#define T1OSO_clear_mask                         0xFE

#define PORTC_RC0                                0x0
#define PORTC_RC0_address                        0xF82
#define PORTC_RC0_position                       0x0
#define PORTC_RC0_size                           0x1
#define PORTC_RC0_value_mask                     0x1
#define PORTC_RC0_clear_mask                     0xFE

#define CCP2C                                    0x1
#define CCP2C_address                            0xF82
#define CCP2C_position                           0x1
#define CCP2C_size                               0x1
#define CCP2C_value_mask                         0x2
#define CCP2C_clear_mask                         0xFD

#define CCP2                                     0x1
#define CCP2_address                             0xF82
#define CCP2_position                            0x1
#define CCP2_size                                0x1
#define CCP2_value_mask                          0x2
#define CCP2_clear_mask                          0xFD

#define T1OSI                                    0x1
#define T1OSI_address                            0xF82
#define T1OSI_position                           0x1
#define T1OSI_size                               0x1
#define T1OSI_value_mask                         0x2
#define T1OSI_clear_mask                         0xFD

#define PA2                                      0x1
#define PA2_address                              0xF82
#define PA2_position                             0x1
#define PA2_size                                 0x1
#define PA2_value_mask                           0x2
#define PA2_clear_mask                           0xFD

#define PORTC_RC1                                0x1
#define PORTC_RC1_address                        0xF82
#define PORTC_RC1_position                       0x1
#define PORTC_RC1_size                           0x1
#define PORTC_RC1_value_mask                     0x2
#define PORTC_RC1_clear_mask                     0xFD

#define CCP1                                     0x2
#define CCP1_address                             0xF82
#define CCP1_position                            0x2
#define CCP1_size                                0x1
#define CCP1_value_mask                          0x4
#define CCP1_clear_mask                          0xFB

#define SEG13                                    0x2
#define SEG13_address                            0xF82
#define SEG13_position                           0x2
#define SEG13_size                               0x1
#define SEG13_value_mask                         0x4
#define SEG13_clear_mask                         0xFB

#define PA1                                      0x2
#define PA1_address                              0xF82
#define PA1_position                             0x2
#define PA1_size                                 0x1
#define PA1_value_mask                           0x4
#define PA1_clear_mask                           0xFB

#define PORTC_RC2                                0x2
#define PORTC_RC2_address                        0xF82
#define PORTC_RC2_position                       0x2
#define PORTC_RC2_size                           0x1
#define PORTC_RC2_value_mask                     0x4
#define PORTC_RC2_clear_mask                     0xFB

#define SEG12                                    0x3
#define SEG12_address                            0xF82
#define SEG12_position                           0x3
#define SEG12_size                               0x1
#define SEG12_value_mask                         0x8
#define SEG12_clear_mask                         0xF7

#define SCL                                      0x3
#define SCL_address                              0xF82
#define SCL_position                             0x3
#define SCL_size                                 0x1
#define SCL_value_mask                           0x8
#define SCL_clear_mask                           0xF7

#define SCK                                      0x3
#define SCK_address                              0xF82
#define SCK_position                             0x3
#define SCK_size                                 0x1
#define SCK_value_mask                           0x8
#define SCK_clear_mask                           0xF7

#define PORTC_RC3                                0x3
#define PORTC_RC3_address                        0xF82
#define PORTC_RC3_position                       0x3
#define PORTC_RC3_size                           0x1
#define PORTC_RC3_value_mask                     0x8
#define PORTC_RC3_clear_mask                     0xF7

#define SDA                                      0x4
#define SDA_address                              0xF82
#define SDA_position                             0x4
#define SDA_size                                 0x1
#define SDA_value_mask                           0x10
#define SDA_clear_mask                           0xEF

#define SDI                                      0x4
#define SDI_address                              0xF82
#define SDI_position                             0x4
#define SDI_size                                 0x1
#define SDI_value_mask                           0x10
#define SDI_clear_mask                           0xEF

#define PORTC_RC4                                0x4
#define PORTC_RC4_address                        0xF82
#define PORTC_RC4_position                       0x4
#define PORTC_RC4_size                           0x1
#define PORTC_RC4_value_mask                     0x10
#define PORTC_RC4_clear_mask                     0xEF

#define SDO                                      0x5
#define SDO_address                              0xF82
#define SDO_position                             0x5
#define SDO_size                                 0x1
#define SDO_value_mask                           0x20
#define SDO_clear_mask                           0xDF

#define PORTC_RC5                                0x5
#define PORTC_RC5_address                        0xF82
#define PORTC_RC5_position                       0x5
#define PORTC_RC5_size                           0x1
#define PORTC_RC5_value_mask                     0x20
#define PORTC_RC5_clear_mask                     0xDF

#define TX                                       0x6
#define TX_address                               0xF82
#define TX_position                              0x6
#define TX_size                                  0x1
#define TX_value_mask                            0x40
#define TX_clear_mask                            0xBF

#define CK                                       0x6
#define CK_address                               0xF82
#define CK_position                              0x6
#define CK_size                                  0x1
#define CK_value_mask                            0x40
#define CK_clear_mask                            0xBF

#define PORTC_RC6                                0x6
#define PORTC_RC6_address                        0xF82
#define PORTC_RC6_position                       0x6
#define PORTC_RC6_size                           0x1
#define PORTC_RC6_value_mask                     0x40
#define PORTC_RC6_clear_mask                     0xBF

#define DT                                       0x7
#define DT_address                               0xF82
#define DT_position                              0x7
#define DT_size                                  0x1
#define DT_value_mask                            0x80
#define DT_clear_mask                            0x7F

#define RX                                       0x7
#define RX_address                               0xF82
#define RX_position                              0x7
#define RX_size                                  0x1
#define RX_value_mask                            0x80
#define RX_clear_mask                            0x7F

#define PORTC_RC7                                0x7
#define PORTC_RC7_address                        0xF82
#define PORTC_RC7_position                       0x7
#define PORTC_RC7_size                           0x1
#define PORTC_RC7_value_mask                     0x80
#define PORTC_RC7_clear_mask                     0x7F


/*----------------------------------------------------------------------------------------------#
| PORTD                                                                                   0xF83 |
#-----------------------------------------------------------------------------------------------#
| PORTD_RD7 | PORTD_RD6 | PORTD_RD5 | PORTD_RD4 | PORTD_RD3 | PORTD_RD2 | PORTD_RD1 | PORTD_RD0 |
#-----------------------------------------------------------------------------------------------#
| 7         | 6         | 5         | 4         | 3         | 2         | 1         | 0         |
#----------------------------------------------------------------------------------------------*/

#define PORTD                                    0x0
#define PORTD_address                            0xF83
#define PORTD_position                           0x0
#define PORTD_size                               0x8
#define PORTD_value_mask                         0xFF
#define PORTD_clear_mask                         0x0

#define SEG0                                     0x0
#define SEG0_address                             0xF83
#define SEG0_position                            0x0
#define SEG0_size                                0x1
#define SEG0_value_mask                          0x1
#define SEG0_clear_mask                          0xFE

#define PORTD_RD0                                0x0
#define PORTD_RD0_address                        0xF83
#define PORTD_RD0_position                       0x0
#define PORTD_RD0_size                           0x1
#define PORTD_RD0_value_mask                     0x1
#define PORTD_RD0_clear_mask                     0xFE

#define PORTD_RD1                                0x1
#define PORTD_RD1_address                        0xF83
#define PORTD_RD1_position                       0x1
#define PORTD_RD1_size                           0x1
#define PORTD_RD1_value_mask                     0x2
#define PORTD_RD1_clear_mask                     0xFD

#define SEG1                                     0x1
#define SEG1_address                             0xF83
#define SEG1_position                            0x1
#define SEG1_size                                0x1
#define SEG1_value_mask                          0x2
#define SEG1_clear_mask                          0xFD

#define PORTD_RD2                                0x2
#define PORTD_RD2_address                        0xF83
#define PORTD_RD2_position                       0x2
#define PORTD_RD2_size                           0x1
#define PORTD_RD2_value_mask                     0x4
#define PORTD_RD2_clear_mask                     0xFB

#define SEG2                                     0x2
#define SEG2_address                             0xF83
#define SEG2_position                            0x2
#define SEG2_size                                0x1
#define SEG2_value_mask                          0x4
#define SEG2_clear_mask                          0xFB

#define PORTD_RD3                                0x3
#define PORTD_RD3_address                        0xF83
#define PORTD_RD3_position                       0x3
#define PORTD_RD3_size                           0x1
#define PORTD_RD3_value_mask                     0x8
#define PORTD_RD3_clear_mask                     0xF7

#define SEG3                                     0x3
#define SEG3_address                             0xF83
#define SEG3_position                            0x3
#define SEG3_size                                0x1
#define SEG3_value_mask                          0x8
#define SEG3_clear_mask                          0xF7

#define SEG4                                     0x4
#define SEG4_address                             0xF83
#define SEG4_position                            0x4
#define SEG4_size                                0x1
#define SEG4_value_mask                          0x10
#define SEG4_clear_mask                          0xEF

#define PORTD_RD4                                0x4
#define PORTD_RD4_address                        0xF83
#define PORTD_RD4_position                       0x4
#define PORTD_RD4_size                           0x1
#define PORTD_RD4_value_mask                     0x10
#define PORTD_RD4_clear_mask                     0xEF

#define SEG5                                     0x5
#define SEG5_address                             0xF83
#define SEG5_position                            0x5
#define SEG5_size                                0x1
#define SEG5_value_mask                          0x20
#define SEG5_clear_mask                          0xDF

#define PORTD_RD5                                0x5
#define PORTD_RD5_address                        0xF83
#define PORTD_RD5_position                       0x5
#define PORTD_RD5_size                           0x1
#define PORTD_RD5_value_mask                     0x20
#define PORTD_RD5_clear_mask                     0xDF

#define SEG6                                     0x6
#define SEG6_address                             0xF83
#define SEG6_position                            0x6
#define SEG6_size                                0x1
#define SEG6_value_mask                          0x40
#define SEG6_clear_mask                          0xBF

#define PORTD_RD6                                0x6
#define PORTD_RD6_address                        0xF83
#define PORTD_RD6_position                       0x6
#define PORTD_RD6_size                           0x1
#define PORTD_RD6_value_mask                     0x40
#define PORTD_RD6_clear_mask                     0xBF

#define PORTD_RD7                                0x7
#define PORTD_RD7_address                        0xF83
#define PORTD_RD7_position                       0x7
#define PORTD_RD7_size                           0x1
#define PORTD_RD7_value_mask                     0x80
#define PORTD_RD7_clear_mask                     0x7F

#define SEG7                                     0x7
#define SEG7_address                             0xF83
#define SEG7_position                            0x7
#define SEG7_size                                0x1
#define SEG7_value_mask                          0x80
#define SEG7_clear_mask                          0x7F

#define SS2                                      0x7
#define SS2_address                              0xF83
#define SS2_position                             0x7
#define SS2_size                                 0x1
#define SS2_value_mask                           0x80
#define SS2_clear_mask                           0x7F


/*----------------------------------------------------------#
| PORTE                                               0xF84 |
#-----------------------------------------------------------#
| CCP2E | CCP6E | COM2 | COM1 | COM0 | PORTE_CS | WRE | PD2 |
#-----------------------------------------------------------#
| 7     | 6     | 5    | 4    | 3    | 2        | 1   | 0   |
#----------------------------------------------------------*/

#define PORTE                                    0x0
#define PORTE_address                            0xF84
#define PORTE_position                           0x0
#define PORTE_size                               0x8
#define PORTE_value_mask                         0xFF
#define PORTE_clear_mask                         0x0

#define PD2                                      0x0
#define PD2_address                              0xF84
#define PD2_position                             0x0
#define PD2_size                                 0x1
#define PD2_value_mask                           0x1
#define PD2_clear_mask                           0xFE

#define RDE                                      0x0
#define RDE_address                              0xF84
#define RDE_position                             0x0
#define RDE_size                                 0x1
#define RDE_value_mask                           0x1
#define RDE_clear_mask                           0xFE

#define LCDBIAS1                                 0x0
#define LCDBIAS1_address                         0xF84
#define LCDBIAS1_position                        0x0
#define LCDBIAS1_size                            0x1
#define LCDBIAS1_value_mask                      0x1
#define LCDBIAS1_clear_mask                      0xFE

#define RE0                                      0x0
#define RE0_address                              0xF84
#define RE0_position                             0x0
#define RE0_size                                 0x1
#define RE0_value_mask                           0x1
#define RE0_clear_mask                           0xFE

#define BIAS1                                    0x0
#define BIAS1_address                            0xF84
#define BIAS1_position                           0x0
#define BIAS1_size                               0x1
#define BIAS1_value_mask                         0x1
#define BIAS1_clear_mask                         0xFE

#define WRE                                      0x1
#define WRE_address                              0xF84
#define WRE_position                             0x1
#define WRE_size                                 0x1
#define WRE_value_mask                           0x2
#define WRE_clear_mask                           0xFD

#define LCDBIAS2                                 0x1
#define LCDBIAS2_address                         0xF84
#define LCDBIAS2_position                        0x1
#define LCDBIAS2_size                            0x1
#define LCDBIAS2_value_mask                      0x2
#define LCDBIAS2_clear_mask                      0xFD

#define PC2                                      0x1
#define PC2_address                              0xF84
#define PC2_position                             0x1
#define PC2_size                                 0x1
#define PC2_value_mask                           0x2
#define PC2_clear_mask                           0xFD

#define RE1                                      0x1
#define RE1_address                              0xF84
#define RE1_position                             0x1
#define RE1_size                                 0x1
#define RE1_value_mask                           0x2
#define RE1_clear_mask                           0xFD

#define BIAS2                                    0x1
#define BIAS2_address                            0xF84
#define BIAS2_position                           0x1
#define BIAS2_size                               0x1
#define BIAS2_value_mask                         0x2
#define BIAS2_clear_mask                         0xFD

#define PORTE_CS                                 0x2
#define PORTE_CS_address                         0xF84
#define PORTE_CS_position                        0x2
#define PORTE_CS_size                            0x1
#define PORTE_CS_value_mask                      0x4
#define PORTE_CS_clear_mask                      0xFB

#define CCP10                                    0x2
#define CCP10_address                            0xF84
#define CCP10_position                           0x2
#define CCP10_size                               0x1
#define CCP10_value_mask                         0x4
#define CCP10_clear_mask                         0xFB

#define PB2                                      0x2
#define PB2_address                              0xF84
#define PB2_position                             0x2
#define PB2_size                                 0x1
#define PB2_value_mask                           0x4
#define PB2_clear_mask                           0xFB

#define RE2                                      0x2
#define RE2_address                              0xF84
#define RE2_position                             0x2
#define RE2_size                                 0x1
#define RE2_value_mask                           0x4
#define RE2_clear_mask                           0xFB

#define LCDBIAS3                                 0x2
#define LCDBIAS3_address                         0xF84
#define LCDBIAS3_position                        0x2
#define LCDBIAS3_size                            0x1
#define LCDBIAS3_value_mask                      0x4
#define LCDBIAS3_clear_mask                      0xFB

#define BIAS3                                    0x2
#define BIAS3_address                            0xF84
#define BIAS3_position                           0x2
#define BIAS3_size                               0x1
#define BIAS3_value_mask                         0x4
#define BIAS3_clear_mask                         0xFB

#define COM0                                     0x3
#define COM0_address                             0xF84
#define COM0_position                            0x3
#define COM0_size                                0x1
#define COM0_value_mask                          0x8
#define COM0_clear_mask                          0xF7

#define CCP9E                                    0x3
#define CCP9E_address                            0xF84
#define CCP9E_position                           0x3
#define CCP9E_size                               0x1
#define CCP9E_value_mask                         0x8
#define CCP9E_clear_mask                         0xF7

#define RE3                                      0x3
#define RE3_address                              0xF84
#define RE3_position                             0x3
#define RE3_size                                 0x1
#define RE3_value_mask                           0x8
#define RE3_clear_mask                           0xF7

#define PC3E                                     0x3
#define PC3E_address                             0xF84
#define PC3E_position                            0x3
#define PC3E_size                                0x1
#define PC3E_value_mask                          0x8
#define PC3E_clear_mask                          0xF7

#define PB3E                                     0x4
#define PB3E_address                             0xF84
#define PB3E_position                            0x4
#define PB3E_size                                0x1
#define PB3E_value_mask                          0x10
#define PB3E_clear_mask                          0xEF

#define COM1                                     0x4
#define COM1_address                             0xF84
#define COM1_position                            0x4
#define COM1_size                                0x1
#define COM1_value_mask                          0x10
#define COM1_clear_mask                          0xEF

#define PORTE_RE4                                0x4
#define PORTE_RE4_address                        0xF84
#define PORTE_RE4_position                       0x4
#define PORTE_RE4_size                           0x1
#define PORTE_RE4_value_mask                     0x10
#define PORTE_RE4_clear_mask                     0xEF

#define CCP8E                                    0x4
#define CCP8E_address                            0xF84
#define CCP8E_position                           0x4
#define CCP8E_size                               0x1
#define CCP8E_value_mask                         0x10
#define CCP8E_clear_mask                         0xEF

#define COM2                                     0x5
#define COM2_address                             0xF84
#define COM2_position                            0x5
#define COM2_size                                0x1
#define COM2_value_mask                          0x20
#define COM2_clear_mask                          0xDF

#define CCP7E                                    0x5
#define CCP7E_address                            0xF84
#define CCP7E_position                           0x5
#define CCP7E_size                               0x1
#define CCP7E_value_mask                         0x20
#define CCP7E_clear_mask                         0xDF

#define PORTE_RE5                                0x5
#define PORTE_RE5_address                        0xF84
#define PORTE_RE5_position                       0x5
#define PORTE_RE5_size                           0x1
#define PORTE_RE5_value_mask                     0x20
#define PORTE_RE5_clear_mask                     0xDF

#define PC1E                                     0x5
#define PC1E_address                             0xF84
#define PC1E_position                            0x5
#define PC1E_size                                0x1
#define PC1E_value_mask                          0x20
#define PC1E_clear_mask                          0xDF

#define CCP6E                                    0x6
#define CCP6E_address                            0xF84
#define CCP6E_position                           0x6
#define CCP6E_size                               0x1
#define CCP6E_value_mask                         0x40
#define CCP6E_clear_mask                         0xBF

#define COM3                                     0x6
#define COM3_address                             0xF84
#define COM3_position                            0x6
#define COM3_size                                0x1
#define COM3_value_mask                          0x40
#define COM3_clear_mask                          0xBF

#define PORTE_RE6                                0x6
#define PORTE_RE6_address                        0xF84
#define PORTE_RE6_position                       0x6
#define PORTE_RE6_size                           0x1
#define PORTE_RE6_value_mask                     0x40
#define PORTE_RE6_clear_mask                     0xBF

#define PB1E                                     0x6
#define PB1E_address                             0xF84
#define PB1E_position                            0x6
#define PB1E_size                                0x1
#define PB1E_value_mask                          0x40
#define PB1E_clear_mask                          0xBF

#define CCP2E                                    0x7
#define CCP2E_address                            0xF84
#define CCP2E_position                           0x7
#define CCP2E_size                               0x1
#define CCP2E_value_mask                         0x80
#define CCP2E_clear_mask                         0x7F

#define SEG31                                    0x7
#define SEG31_address                            0xF84
#define SEG31_position                           0x7
#define SEG31_size                               0x1
#define SEG31_value_mask                         0x80
#define SEG31_clear_mask                         0x7F

#define PA2E                                     0x7
#define PA2E_address                             0xF84
#define PA2E_position                            0x7
#define PA2E_size                                0x1
#define PA2E_value_mask                          0x80
#define PA2E_clear_mask                          0x7F

#define PORTE_RE7                                0x7
#define PORTE_RE7_address                        0xF84
#define PORTE_RE7_position                       0x7
#define PORTE_RE7_size                           0x1
#define PORTE_RE7_value_mask                     0x80
#define PORTE_RE7_clear_mask                     0x7F


/*----------------------------------------------------------------------------------------#
| PORTF                                                                             0xF85 |
#-----------------------------------------------------------------------------------------#
| PORTF_RF7 | PORTF_RF6 | PORTF_RF5 | AN9 | PORTF_RF3 | PORTF_RF2 | PORTF_RF1 | PORTF_RF0 |
#-----------------------------------------------------------------------------------------#
| 7         | 6         | 5         | 4   | 3         | 2         | 1         | 0         |
#----------------------------------------------------------------------------------------*/

#define PORTF                                    0x0
#define PORTF_address                            0xF85
#define PORTF_position                           0x0
#define PORTF_size                               0x8
#define PORTF_value_mask                         0xFF
#define PORTF_clear_mask                         0x0

#define PORTF_RF0                                0x0
#define PORTF_RF0_address                        0xF85
#define PORTF_RF0_position                       0x0
#define PORTF_RF0_size                           0x1
#define PORTF_RF0_value_mask                     0x1
#define PORTF_RF0_clear_mask                     0xFE

#define SEG18                                    0x0
#define SEG18_address                            0xF85
#define SEG18_position                           0x0
#define SEG18_size                               0x1
#define SEG18_value_mask                         0x1
#define SEG18_clear_mask                         0xFE

#define AN5                                      0x0
#define AN5_address                              0xF85
#define AN5_position                             0x0
#define AN5_size                                 0x1
#define AN5_value_mask                           0x1
#define AN5_clear_mask                           0xFE

#define PORTF_RF1                                0x1
#define PORTF_RF1_address                        0xF85
#define PORTF_RF1_position                       0x1
#define PORTF_RF1_size                           0x1
#define PORTF_RF1_value_mask                     0x2
#define PORTF_RF1_clear_mask                     0xFD

#define SEG19                                    0x1
#define SEG19_address                            0xF85
#define SEG19_position                           0x1
#define SEG19_size                               0x1
#define SEG19_value_mask                         0x2
#define SEG19_clear_mask                         0xFD

#define C2OUTF                                   0x1
#define C2OUTF_address                           0xF85
#define C2OUTF_position                          0x1
#define C2OUTF_size                              0x1
#define C2OUTF_value_mask                        0x2
#define C2OUTF_clear_mask                        0xFD

#define AN6                                      0x1
#define AN6_address                              0xF85
#define AN6_position                             0x1
#define AN6_size                                 0x1
#define AN6_value_mask                           0x2
#define AN6_clear_mask                           0xFD

#define PORTF_RF2                                0x2
#define PORTF_RF2_address                        0xF85
#define PORTF_RF2_position                       0x2
#define PORTF_RF2_size                           0x1
#define PORTF_RF2_value_mask                     0x4
#define PORTF_RF2_clear_mask                     0xFB

#define AN7                                      0x2
#define AN7_address                              0xF85
#define AN7_position                             0x2
#define AN7_size                                 0x1
#define AN7_value_mask                           0x4
#define AN7_clear_mask                           0xFB

#define SEG20                                    0x2
#define SEG20_address                            0xF85
#define SEG20_position                           0x2
#define SEG20_size                               0x1
#define SEG20_value_mask                         0x4
#define SEG20_clear_mask                         0xFB

#define C1OUTF                                   0x2
#define C1OUTF_address                           0xF85
#define C1OUTF_position                          0x2
#define C1OUTF_size                              0x1
#define C1OUTF_value_mask                        0x4
#define C1OUTF_clear_mask                        0xFB

#define PORTF_RF3                                0x3
#define PORTF_RF3_address                        0xF85
#define PORTF_RF3_position                       0x3
#define PORTF_RF3_size                           0x1
#define PORTF_RF3_value_mask                     0x8
#define PORTF_RF3_clear_mask                     0xF7

#define AN8                                      0x3
#define AN8_address                              0xF85
#define AN8_position                             0x3
#define AN8_size                                 0x1
#define AN8_value_mask                           0x8
#define AN8_clear_mask                           0xF7

#define SEG21                                    0x3
#define SEG21_address                            0xF85
#define SEG21_position                           0x3
#define SEG21_size                               0x1
#define SEG21_value_mask                         0x8
#define SEG21_clear_mask                         0xF7

#define AN9                                      0x4
#define AN9_address                              0xF85
#define AN9_position                             0x4
#define AN9_size                                 0x1
#define AN9_value_mask                           0x10
#define AN9_clear_mask                           0xEF

#define PORTF_RF4                                0x4
#define PORTF_RF4_address                        0xF85
#define PORTF_RF4_position                       0x4
#define PORTF_RF4_size                           0x1
#define PORTF_RF4_value_mask                     0x10
#define PORTF_RF4_clear_mask                     0xEF

#define SEG22                                    0x4
#define SEG22_address                            0xF85
#define SEG22_position                           0x4
#define SEG22_size                               0x1
#define SEG22_value_mask                         0x10
#define SEG22_clear_mask                         0xEF

#define PORTF_RF5                                0x5
#define PORTF_RF5_address                        0xF85
#define PORTF_RF5_position                       0x5
#define PORTF_RF5_size                           0x1
#define PORTF_RF5_value_mask                     0x20
#define PORTF_RF5_clear_mask                     0xDF

#define SEG23                                    0x5
#define SEG23_address                            0xF85
#define SEG23_position                           0x5
#define SEG23_size                               0x1
#define SEG23_value_mask                         0x20
#define SEG23_clear_mask                         0xDF

#define AN10                                     0x5
#define AN10_address                             0xF85
#define AN10_position                            0x5
#define AN10_size                                0x1
#define AN10_value_mask                          0x20
#define AN10_clear_mask                          0xDF

#define CVREFF                                   0x5
#define CVREFF_address                           0xF85
#define CVREFF_position                          0x5
#define CVREFF_size                              0x1
#define CVREFF_value_mask                        0x20
#define CVREFF_clear_mask                        0xDF

#define PORTF_RF6                                0x6
#define PORTF_RF6_address                        0xF85
#define PORTF_RF6_position                       0x6
#define PORTF_RF6_size                           0x1
#define PORTF_RF6_value_mask                     0x40
#define PORTF_RF6_clear_mask                     0xBF

#define SEG24                                    0x6
#define SEG24_address                            0xF85
#define SEG24_position                           0x6
#define SEG24_size                               0x1
#define SEG24_value_mask                         0x40
#define SEG24_clear_mask                         0xBF

#define AN11                                     0x6
#define AN11_address                             0xF85
#define AN11_position                            0x6
#define AN11_size                                0x1
#define AN11_value_mask                          0x40
#define AN11_clear_mask                          0xBF

#define PORTF_RF7                                0x7
#define PORTF_RF7_address                        0xF85
#define PORTF_RF7_position                       0x7
#define PORTF_RF7_size                           0x1
#define PORTF_RF7_value_mask                     0x80
#define PORTF_RF7_clear_mask                     0x7F

#define SEG25                                    0x7
#define SEG25_address                            0xF85
#define SEG25_position                           0x7
#define SEG25_size                               0x1
#define SEG25_value_mask                         0x80
#define SEG25_clear_mask                         0x7F

#define SS                                       0x7
#define SS_address                               0xF85
#define SS_position                              0x7
#define SS_size                                  0x1
#define SS_value_mask                            0x80
#define SS_clear_mask                            0x7F


/*-----------------------------------------------------------------#
| PORTG                                                      0xF86 |
#------------------------------------------------------------------#
| - | - | VPP | SEG26 | PORTG_RG3 | PORTG_RG2 | C3OUTG | PORTG_RG0 |
#------------------------------------------------------------------#
| 7 | 6 | 5   | 4     | 3         | 2         | 1      | 0         |
#-----------------------------------------------------------------*/

#define PORTG                                    0x0
#define PORTG_address                            0xF86
#define PORTG_position                           0x0
#define PORTG_size                               0x8
#define PORTG_value_mask                         0xFF
#define PORTG_clear_mask                         0x0

#define SEG30                                    0x0
#define SEG30_address                            0xF86
#define SEG30_position                           0x0
#define SEG30_size                               0x1
#define SEG30_value_mask                         0x1
#define SEG30_clear_mask                         0xFE

#define PORTG_RG0                                0x0
#define PORTG_RG0_address                        0xF86
#define PORTG_RG0_position                       0x0
#define PORTG_RG0_size                           0x1
#define PORTG_RG0_value_mask                     0x1
#define PORTG_RG0_clear_mask                     0xFE

#define C3OUTG                                   0x1
#define C3OUTG_address                           0xF86
#define C3OUTG_position                          0x1
#define C3OUTG_size                              0x1
#define C3OUTG_value_mask                        0x2
#define C3OUTG_clear_mask                        0xFD

#define SEG29                                    0x1
#define SEG29_address                            0xF86
#define SEG29_position                           0x1
#define SEG29_size                               0x1
#define SEG29_value_mask                         0x2
#define SEG29_clear_mask                         0xFD

#define TX2                                      0x1
#define TX2_address                              0xF86
#define TX2_position                             0x1
#define TX2_size                                 0x1
#define TX2_value_mask                           0x2
#define TX2_clear_mask                           0xFD

#define PORTG_RG1                                0x1
#define PORTG_RG1_address                        0xF86
#define PORTG_RG1_position                       0x1
#define PORTG_RG1_size                           0x1
#define PORTG_RG1_value_mask                     0x2
#define PORTG_RG1_clear_mask                     0xFD

#define CK2                                      0x1
#define CK2_address                              0xF86
#define CK2_position                             0x1
#define CK2_size                                 0x1
#define CK2_value_mask                           0x2
#define CK2_clear_mask                           0xFD

#define RX2                                      0x2
#define RX2_address                              0xF86
#define RX2_position                             0x2
#define RX2_size                                 0x1
#define RX2_value_mask                           0x4
#define RX2_clear_mask                           0xFB

#define SEG28                                    0x2
#define SEG28_address                            0xF86
#define SEG28_position                           0x2
#define SEG28_size                               0x1
#define SEG28_value_mask                         0x4
#define SEG28_clear_mask                         0xFB

#define PORTG_RG2                                0x2
#define PORTG_RG2_address                        0xF86
#define PORTG_RG2_position                       0x2
#define PORTG_RG2_size                           0x1
#define PORTG_RG2_value_mask                     0x4
#define PORTG_RG2_clear_mask                     0xFB

#define DT2                                      0x2
#define DT2_address                              0xF86
#define DT2_position                             0x2
#define DT2_size                                 0x1
#define DT2_value_mask                           0x4
#define DT2_clear_mask                           0xFB

#define SEG27                                    0x3
#define SEG27_address                            0xF86
#define SEG27_position                           0x3
#define SEG27_size                               0x1
#define SEG27_value_mask                         0x8
#define SEG27_clear_mask                         0xF7

#define PORTG_RG3                                0x3
#define PORTG_RG3_address                        0xF86
#define PORTG_RG3_position                       0x3
#define PORTG_RG3_size                           0x1
#define PORTG_RG3_value_mask                     0x8
#define PORTG_RG3_clear_mask                     0xF7

#define SEG26                                    0x4
#define SEG26_address                            0xF86
#define SEG26_position                           0x4
#define SEG26_size                               0x1
#define SEG26_value_mask                         0x10
#define SEG26_clear_mask                         0xEF

#define PORTG_RG4                                0x4
#define PORTG_RG4_address                        0xF86
#define PORTG_RG4_position                       0x4
#define PORTG_RG4_size                           0x1
#define PORTG_RG4_value_mask                     0x10
#define PORTG_RG4_clear_mask                     0xEF

#define VPP                                      0x5
#define VPP_address                              0xF86
#define VPP_position                             0x5
#define VPP_size                                 0x1
#define VPP_value_mask                           0x20
#define VPP_clear_mask                           0xDF

#define PORTG_RJPU                               0x5
#define PORTG_RJPU_address                       0xF86
#define PORTG_RJPU_position                      0x5
#define PORTG_RJPU_size                          0x1
#define PORTG_RJPU_value_mask                    0x20
#define PORTG_RJPU_clear_mask                    0xDF

#define RG5                                      0x5
#define RG5_address                              0xF86
#define RG5_position                             0x5
#define RG5_size                                 0x1
#define RG5_value_mask                           0x20
#define RG5_clear_mask                           0xDF

#define MCLR                                     0x5
#define MCLR_address                             0xF86
#define MCLR_position                            0x5
#define MCLR_size                                0x1
#define MCLR_value_mask                          0x20
#define MCLR_clear_mask                          0xDF


/*----------------------------------------------------------------------------------------------#
| PORTH                                                                                   0xF87 |
#-----------------------------------------------------------------------------------------------#
| PORTH_RH7 | PORTH_RH6 | PORTH_RH5 | PORTH_RH4 | PORTH_RH3 | PORTH_RH2 | PORTH_RH1 | PORTH_RH0 |
#-----------------------------------------------------------------------------------------------#
| 7         | 6         | 5         | 4         | 3         | 2         | 1         | 0         |
#----------------------------------------------------------------------------------------------*/

#define PORTH                                    0x0
#define PORTH_address                            0xF87
#define PORTH_position                           0x0
#define PORTH_size                               0x8
#define PORTH_value_mask                         0xFF
#define PORTH_clear_mask                         0x0

#define PORTH_RH0                                0x0
#define PORTH_RH0_address                        0xF87
#define PORTH_RH0_position                       0x0
#define PORTH_RH0_size                           0x1
#define PORTH_RH0_value_mask                     0x1
#define PORTH_RH0_clear_mask                     0xFE

#define SEG47                                    0x0
#define SEG47_address                            0xF87
#define SEG47_position                           0x0
#define SEG47_size                               0x1
#define SEG47_value_mask                         0x1
#define SEG47_clear_mask                         0xFE

#define PORTH_RH1                                0x1
#define PORTH_RH1_address                        0xF87
#define PORTH_RH1_position                       0x1
#define PORTH_RH1_size                           0x1
#define PORTH_RH1_value_mask                     0x2
#define PORTH_RH1_clear_mask                     0xFD

#define SEG46                                    0x1
#define SEG46_address                            0xF87
#define SEG46_position                           0x1
#define SEG46_size                               0x1
#define SEG46_value_mask                         0x2
#define SEG46_clear_mask                         0xFD

#define PORTH_RH2                                0x2
#define PORTH_RH2_address                        0xF87
#define PORTH_RH2_position                       0x2
#define PORTH_RH2_size                           0x1
#define PORTH_RH2_value_mask                     0x4
#define PORTH_RH2_clear_mask                     0xFB

#define SEG45                                    0x2
#define SEG45_address                            0xF87
#define SEG45_position                           0x2
#define SEG45_size                               0x1
#define SEG45_value_mask                         0x4
#define SEG45_clear_mask                         0xFB

#define PORTH_RH3                                0x3
#define PORTH_RH3_address                        0xF87
#define PORTH_RH3_position                       0x3
#define PORTH_RH3_size                           0x1
#define PORTH_RH3_value_mask                     0x8
#define PORTH_RH3_clear_mask                     0xF7

#define SEG44                                    0x3
#define SEG44_address                            0xF87
#define SEG44_position                           0x3
#define SEG44_size                               0x1
#define SEG44_value_mask                         0x8
#define SEG44_clear_mask                         0xF7

#define PORTH_RH4                                0x4
#define PORTH_RH4_address                        0xF87
#define PORTH_RH4_position                       0x4
#define PORTH_RH4_size                           0x1
#define PORTH_RH4_value_mask                     0x10
#define PORTH_RH4_clear_mask                     0xEF

#define CCP9                                     0x4
#define CCP9_address                             0xF87
#define CCP9_position                            0x4
#define CCP9_size                                0x1
#define CCP9_value_mask                          0x10
#define CCP9_clear_mask                          0xEF

#define SEG40                                    0x4
#define SEG40_address                            0xF87
#define SEG40_position                           0x4
#define SEG40_size                               0x1
#define SEG40_value_mask                         0x10
#define SEG40_clear_mask                         0xEF

#define PC3                                      0x4
#define PC3_address                              0xF87
#define PC3_position                             0x4
#define PC3_size                                 0x1
#define PC3_value_mask                           0x10
#define PC3_clear_mask                           0xEF

#define PORTH_RH5                                0x5
#define PORTH_RH5_address                        0xF87
#define PORTH_RH5_position                       0x5
#define PORTH_RH5_size                           0x1
#define PORTH_RH5_value_mask                     0x20
#define PORTH_RH5_clear_mask                     0xDF

#define CCP8                                     0x5
#define CCP8_address                             0xF87
#define CCP8_position                            0x5
#define CCP8_size                                0x1
#define CCP8_value_mask                          0x20
#define CCP8_clear_mask                          0xDF

#define PB3                                      0x5
#define PB3_address                              0xF87
#define PB3_position                             0x5
#define PB3_size                                 0x1
#define PB3_value_mask                           0x20
#define PB3_clear_mask                           0xDF

#define SEG41                                    0x5
#define SEG41_address                            0xF87
#define SEG41_position                           0x5
#define SEG41_size                               0x1
#define SEG41_value_mask                         0x20
#define SEG41_clear_mask                         0xDF

#define PORTH_RH6                                0x6
#define PORTH_RH6_address                        0xF87
#define PORTH_RH6_position                       0x6
#define PORTH_RH6_size                           0x1
#define PORTH_RH6_value_mask                     0x40
#define PORTH_RH6_clear_mask                     0xBF

#define CCP7                                     0x6
#define CCP7_address                             0xF87
#define CCP7_position                            0x6
#define CCP7_size                                0x1
#define CCP7_value_mask                          0x40
#define CCP7_clear_mask                          0xBF

#define SEG42                                    0x6
#define SEG42_address                            0xF87
#define SEG42_position                           0x6
#define SEG42_size                               0x1
#define SEG42_value_mask                         0x40
#define SEG42_clear_mask                         0xBF

#define PC1                                      0x6
#define PC1_address                              0xF87
#define PC1_position                             0x6
#define PC1_size                                 0x1
#define PC1_value_mask                           0x40
#define PC1_clear_mask                           0xBF

#define PORTH_RH7                                0x7
#define PORTH_RH7_address                        0xF87
#define PORTH_RH7_position                       0x7
#define PORTH_RH7_size                           0x1
#define PORTH_RH7_value_mask                     0x80
#define PORTH_RH7_clear_mask                     0x7F

#define CCP6                                     0x7
#define CCP6_address                             0xF87
#define CCP6_position                            0x7
#define CCP6_size                                0x1
#define CCP6_value_mask                          0x80
#define CCP6_clear_mask                          0x7F

#define PB1                                      0x7
#define PB1_address                              0xF87
#define PB1_position                             0x7
#define PB1_size                                 0x1
#define PB1_value_mask                           0x80
#define PB1_clear_mask                           0x7F

#define SEG43                                    0x7
#define SEG43_address                            0xF87
#define SEG43_position                           0x7
#define SEG43_size                               0x1
#define SEG43_value_mask                         0x80
#define SEG43_clear_mask                         0x7F


/*--------------------------------------------------------------#
| PORTJ                                                   0xF88 |
#---------------------------------------------------------------#
| SEG36 | SEG37 | SEG38 | SEG39 | SEG35 | SEG34 | SEG33 | SEG32 |
#---------------------------------------------------------------#
| 7     | 6     | 5     | 4     | 3     | 2     | 1     | 0     |
#--------------------------------------------------------------*/

#define PORTJ                                    0x0
#define PORTJ_address                            0xF88
#define PORTJ_position                           0x0
#define PORTJ_size                               0x8
#define PORTJ_value_mask                         0xFF
#define PORTJ_clear_mask                         0x0

#define SEG32                                    0x0
#define SEG32_address                            0xF88
#define SEG32_position                           0x0
#define SEG32_size                               0x1
#define SEG32_value_mask                         0x1
#define SEG32_clear_mask                         0xFE

#define PORTJ_RJ0                                0x0
#define PORTJ_RJ0_address                        0xF88
#define PORTJ_RJ0_position                       0x0
#define PORTJ_RJ0_size                           0x1
#define PORTJ_RJ0_value_mask                     0x1
#define PORTJ_RJ0_clear_mask                     0xFE

#define SEG33                                    0x1
#define SEG33_address                            0xF88
#define SEG33_position                           0x1
#define SEG33_size                               0x1
#define SEG33_value_mask                         0x2
#define SEG33_clear_mask                         0xFD

#define PORTJ_RJ1                                0x1
#define PORTJ_RJ1_address                        0xF88
#define PORTJ_RJ1_position                       0x1
#define PORTJ_RJ1_size                           0x1
#define PORTJ_RJ1_value_mask                     0x2
#define PORTJ_RJ1_clear_mask                     0xFD

#define SEG34                                    0x2
#define SEG34_address                            0xF88
#define SEG34_position                           0x2
#define SEG34_size                               0x1
#define SEG34_value_mask                         0x4
#define SEG34_clear_mask                         0xFB

#define PORTJ_RJ2                                0x2
#define PORTJ_RJ2_address                        0xF88
#define PORTJ_RJ2_position                       0x2
#define PORTJ_RJ2_size                           0x1
#define PORTJ_RJ2_value_mask                     0x4
#define PORTJ_RJ2_clear_mask                     0xFB

#define SEG35                                    0x3
#define SEG35_address                            0xF88
#define SEG35_position                           0x3
#define SEG35_size                               0x1
#define SEG35_value_mask                         0x8
#define SEG35_clear_mask                         0xF7

#define PORTJ_RJ3                                0x3
#define PORTJ_RJ3_address                        0xF88
#define PORTJ_RJ3_position                       0x3
#define PORTJ_RJ3_size                           0x1
#define PORTJ_RJ3_value_mask                     0x8
#define PORTJ_RJ3_clear_mask                     0xF7

#define SEG39                                    0x4
#define SEG39_address                            0xF88
#define SEG39_position                           0x4
#define SEG39_size                               0x1
#define SEG39_value_mask                         0x10
#define SEG39_clear_mask                         0xEF

#define PORTJ_RJ4                                0x4
#define PORTJ_RJ4_address                        0xF88
#define PORTJ_RJ4_position                       0x4
#define PORTJ_RJ4_size                           0x1
#define PORTJ_RJ4_value_mask                     0x10
#define PORTJ_RJ4_clear_mask                     0xEF

#define SEG38                                    0x5
#define SEG38_address                            0xF88
#define SEG38_position                           0x5
#define SEG38_size                               0x1
#define SEG38_value_mask                         0x20
#define SEG38_clear_mask                         0xDF

#define PORTJ_RJ5                                0x5
#define PORTJ_RJ5_address                        0xF88
#define PORTJ_RJ5_position                       0x5
#define PORTJ_RJ5_size                           0x1
#define PORTJ_RJ5_value_mask                     0x20
#define PORTJ_RJ5_clear_mask                     0xDF

#define SEG37                                    0x6
#define SEG37_address                            0xF88
#define SEG37_position                           0x6
#define SEG37_size                               0x1
#define SEG37_value_mask                         0x40
#define SEG37_clear_mask                         0xBF

#define PORTJ_RJ6                                0x6
#define PORTJ_RJ6_address                        0xF88
#define PORTJ_RJ6_position                       0x6
#define PORTJ_RJ6_size                           0x1
#define PORTJ_RJ6_value_mask                     0x40
#define PORTJ_RJ6_clear_mask                     0xBF

#define SEG36                                    0x7
#define SEG36_address                            0xF88
#define SEG36_position                           0x7
#define SEG36_size                               0x1
#define SEG36_value_mask                         0x80
#define SEG36_clear_mask                         0x7F

#define PORTJ_RJ7                                0x7
#define PORTJ_RJ7_address                        0xF88
#define PORTJ_RJ7_position                       0x7
#define PORTJ_RJ7_size                           0x1
#define PORTJ_RJ7_value_mask                     0x80
#define PORTJ_RJ7_clear_mask                     0x7F


/*--------------------------------------------------------------#
| LATA                                                    0xF89 |
#---------------------------------------------------------------#
| LATA7 | LATA6 | LATA5 | LATA4 | LATA3 | LATA2 | LATA1 | LATA0 |
#---------------------------------------------------------------#
| 7     | 6     | 5     | 4     | 3     | 2     | 1     | 0     |
#--------------------------------------------------------------*/

#define LATA                                     0x0
#define LATA_address                             0xF89
#define LATA_position                            0x0
#define LATA_size                                0x8
#define LATA_value_mask                          0xFF
#define LATA_clear_mask                          0x0

#define LATA0                                    0x0
#define LATA0_address                            0xF89
#define LATA0_position                           0x0
#define LATA0_size                               0x1
#define LATA0_value_mask                         0x1
#define LATA0_clear_mask                         0xFE

#define LA0                                      0x0
#define LA0_address                              0xF89
#define LA0_position                             0x0
#define LA0_size                                 0x1
#define LA0_value_mask                           0x1
#define LA0_clear_mask                           0xFE

#define LATA1                                    0x1
#define LATA1_address                            0xF89
#define LATA1_position                           0x1
#define LATA1_size                               0x1
#define LATA1_value_mask                         0x2
#define LATA1_clear_mask                         0xFD

#define LA1                                      0x1
#define LA1_address                              0xF89
#define LA1_position                             0x1
#define LA1_size                                 0x1
#define LA1_value_mask                           0x2
#define LA1_clear_mask                           0xFD

#define LATA2                                    0x2
#define LATA2_address                            0xF89
#define LATA2_position                           0x2
#define LATA2_size                               0x1
#define LATA2_value_mask                         0x4
#define LATA2_clear_mask                         0xFB

#define LA2                                      0x2
#define LA2_address                              0xF89
#define LA2_position                             0x2
#define LA2_size                                 0x1
#define LA2_value_mask                           0x4
#define LA2_clear_mask                           0xFB

#define LATA3                                    0x3
#define LATA3_address                            0xF89
#define LATA3_position                           0x3
#define LATA3_size                               0x1
#define LATA3_value_mask                         0x8
#define LATA3_clear_mask                         0xF7

#define LA3                                      0x3
#define LA3_address                              0xF89
#define LA3_position                             0x3
#define LA3_size                                 0x1
#define LA3_value_mask                           0x8
#define LA3_clear_mask                           0xF7

#define LATA4                                    0x4
#define LATA4_address                            0xF89
#define LATA4_position                           0x4
#define LATA4_size                               0x1
#define LATA4_value_mask                         0x10
#define LATA4_clear_mask                         0xEF

#define LA4                                      0x4
#define LA4_address                              0xF89
#define LA4_position                             0x4
#define LA4_size                                 0x1
#define LA4_value_mask                           0x10
#define LA4_clear_mask                           0xEF

#define LATA5                                    0x5
#define LATA5_address                            0xF89
#define LATA5_position                           0x5
#define LATA5_size                               0x1
#define LATA5_value_mask                         0x20
#define LATA5_clear_mask                         0xDF

#define LA5                                      0x5
#define LA5_address                              0xF89
#define LA5_position                             0x5
#define LA5_size                                 0x1
#define LA5_value_mask                           0x20
#define LA5_clear_mask                           0xDF

#define LATA6                                    0x6
#define LATA6_address                            0xF89
#define LATA6_position                           0x6
#define LATA6_size                               0x1
#define LATA6_value_mask                         0x40
#define LATA6_clear_mask                         0xBF

#define LA6                                      0x6
#define LA6_address                              0xF89
#define LA6_position                             0x6
#define LA6_size                                 0x1
#define LA6_value_mask                           0x40
#define LA6_clear_mask                           0xBF

#define LATA7                                    0x7
#define LATA7_address                            0xF89
#define LATA7_position                           0x7
#define LATA7_size                               0x1
#define LATA7_value_mask                         0x80
#define LATA7_clear_mask                         0x7F

#define LA7                                      0x7
#define LA7_address                              0xF89
#define LA7_position                             0x7
#define LA7_size                                 0x1
#define LA7_value_mask                           0x80
#define LA7_clear_mask                           0x7F


/*----------------------------------------------#
| LATB                                    0xF8A |
#-----------------------------------------------#
| LB7 | LB6 | LB5 | LB4 | LB3 | LB2 | LB1 | LB0 |
#-----------------------------------------------#
| 7   | 6   | 5   | 4   | 3   | 2   | 1   | 0   |
#----------------------------------------------*/

#define LATB                                     0x0
#define LATB_address                             0xF8A
#define LATB_position                            0x0
#define LATB_size                                0x8
#define LATB_value_mask                          0xFF
#define LATB_clear_mask                          0x0

#define LB0                                      0x0
#define LB0_address                              0xF8A
#define LB0_position                             0x0
#define LB0_size                                 0x1
#define LB0_value_mask                           0x1
#define LB0_clear_mask                           0xFE

#define LATB0                                    0x0
#define LATB0_address                            0xF8A
#define LATB0_position                           0x0
#define LATB0_size                               0x1
#define LATB0_value_mask                         0x1
#define LATB0_clear_mask                         0xFE

#define LB1                                      0x1
#define LB1_address                              0xF8A
#define LB1_position                             0x1
#define LB1_size                                 0x1
#define LB1_value_mask                           0x2
#define LB1_clear_mask                           0xFD

#define LATB1                                    0x1
#define LATB1_address                            0xF8A
#define LATB1_position                           0x1
#define LATB1_size                               0x1
#define LATB1_value_mask                         0x2
#define LATB1_clear_mask                         0xFD

#define LB2                                      0x2
#define LB2_address                              0xF8A
#define LB2_position                             0x2
#define LB2_size                                 0x1
#define LB2_value_mask                           0x4
#define LB2_clear_mask                           0xFB

#define LATB2                                    0x2
#define LATB2_address                            0xF8A
#define LATB2_position                           0x2
#define LATB2_size                               0x1
#define LATB2_value_mask                         0x4
#define LATB2_clear_mask                         0xFB

#define LB3                                      0x3
#define LB3_address                              0xF8A
#define LB3_position                             0x3
#define LB3_size                                 0x1
#define LB3_value_mask                           0x8
#define LB3_clear_mask                           0xF7

#define LATB3                                    0x3
#define LATB3_address                            0xF8A
#define LATB3_position                           0x3
#define LATB3_size                               0x1
#define LATB3_value_mask                         0x8
#define LATB3_clear_mask                         0xF7

#define LB4                                      0x4
#define LB4_address                              0xF8A
#define LB4_position                             0x4
#define LB4_size                                 0x1
#define LB4_value_mask                           0x10
#define LB4_clear_mask                           0xEF

#define LATB4                                    0x4
#define LATB4_address                            0xF8A
#define LATB4_position                           0x4
#define LATB4_size                               0x1
#define LATB4_value_mask                         0x10
#define LATB4_clear_mask                         0xEF

#define LB5                                      0x5
#define LB5_address                              0xF8A
#define LB5_position                             0x5
#define LB5_size                                 0x1
#define LB5_value_mask                           0x20
#define LB5_clear_mask                           0xDF

#define LATB5                                    0x5
#define LATB5_address                            0xF8A
#define LATB5_position                           0x5
#define LATB5_size                               0x1
#define LATB5_value_mask                         0x20
#define LATB5_clear_mask                         0xDF

#define LB6                                      0x6
#define LB6_address                              0xF8A
#define LB6_position                             0x6
#define LB6_size                                 0x1
#define LB6_value_mask                           0x40
#define LB6_clear_mask                           0xBF

#define LATB6                                    0x6
#define LATB6_address                            0xF8A
#define LATB6_position                           0x6
#define LATB6_size                               0x1
#define LATB6_value_mask                         0x40
#define LATB6_clear_mask                         0xBF

#define LB7                                      0x7
#define LB7_address                              0xF8A
#define LB7_position                             0x7
#define LB7_size                                 0x1
#define LB7_value_mask                           0x80
#define LB7_clear_mask                           0x7F

#define LATB7                                    0x7
#define LATB7_address                            0xF8A
#define LATB7_position                           0x7
#define LATB7_size                               0x1
#define LATB7_value_mask                         0x80
#define LATB7_clear_mask                         0x7F


/*--------------------------------------------------------------#
| LATC                                                    0xF8B |
#---------------------------------------------------------------#
| LATC7 | LATC6 | LATC5 | LATC4 | LATC3 | LATC2 | LATC1 | LATC0 |
#---------------------------------------------------------------#
| 7     | 6     | 5     | 4     | 3     | 2     | 1     | 0     |
#--------------------------------------------------------------*/

#define LATC                                     0x0
#define LATC_address                             0xF8B
#define LATC_position                            0x0
#define LATC_size                                0x8
#define LATC_value_mask                          0xFF
#define LATC_clear_mask                          0x0

#define LATC0                                    0x0
#define LATC0_address                            0xF8B
#define LATC0_position                           0x0
#define LATC0_size                               0x1
#define LATC0_value_mask                         0x1
#define LATC0_clear_mask                         0xFE

#define LC0                                      0x0
#define LC0_address                              0xF8B
#define LC0_position                             0x0
#define LC0_size                                 0x1
#define LC0_value_mask                           0x1
#define LC0_clear_mask                           0xFE

#define LATC1                                    0x1
#define LATC1_address                            0xF8B
#define LATC1_position                           0x1
#define LATC1_size                               0x1
#define LATC1_value_mask                         0x2
#define LATC1_clear_mask                         0xFD

#define LC1                                      0x1
#define LC1_address                              0xF8B
#define LC1_position                             0x1
#define LC1_size                                 0x1
#define LC1_value_mask                           0x2
#define LC1_clear_mask                           0xFD

#define LATC2                                    0x2
#define LATC2_address                            0xF8B
#define LATC2_position                           0x2
#define LATC2_size                               0x1
#define LATC2_value_mask                         0x4
#define LATC2_clear_mask                         0xFB

#define LC2                                      0x2
#define LC2_address                              0xF8B
#define LC2_position                             0x2
#define LC2_size                                 0x1
#define LC2_value_mask                           0x4
#define LC2_clear_mask                           0xFB

#define LATC3                                    0x3
#define LATC3_address                            0xF8B
#define LATC3_position                           0x3
#define LATC3_size                               0x1
#define LATC3_value_mask                         0x8
#define LATC3_clear_mask                         0xF7

#define LC3                                      0x3
#define LC3_address                              0xF8B
#define LC3_position                             0x3
#define LC3_size                                 0x1
#define LC3_value_mask                           0x8
#define LC3_clear_mask                           0xF7

#define LATC4                                    0x4
#define LATC4_address                            0xF8B
#define LATC4_position                           0x4
#define LATC4_size                               0x1
#define LATC4_value_mask                         0x10
#define LATC4_clear_mask                         0xEF

#define LC4                                      0x4
#define LC4_address                              0xF8B
#define LC4_position                             0x4
#define LC4_size                                 0x1
#define LC4_value_mask                           0x10
#define LC4_clear_mask                           0xEF

#define LATC5                                    0x5
#define LATC5_address                            0xF8B
#define LATC5_position                           0x5
#define LATC5_size                               0x1
#define LATC5_value_mask                         0x20
#define LATC5_clear_mask                         0xDF

#define LC5                                      0x5
#define LC5_address                              0xF8B
#define LC5_position                             0x5
#define LC5_size                                 0x1
#define LC5_value_mask                           0x20
#define LC5_clear_mask                           0xDF

#define LATC6                                    0x6
#define LATC6_address                            0xF8B
#define LATC6_position                           0x6
#define LATC6_size                               0x1
#define LATC6_value_mask                         0x40
#define LATC6_clear_mask                         0xBF

#define LC6                                      0x6
#define LC6_address                              0xF8B
#define LC6_position                             0x6
#define LC6_size                                 0x1
#define LC6_value_mask                           0x40
#define LC6_clear_mask                           0xBF

#define LATC7                                    0x7
#define LATC7_address                            0xF8B
#define LATC7_position                           0x7
#define LATC7_size                               0x1
#define LATC7_value_mask                         0x80
#define LATC7_clear_mask                         0x7F

#define LC7                                      0x7
#define LC7_address                              0xF8B
#define LC7_position                             0x7
#define LC7_size                                 0x1
#define LC7_value_mask                           0x80
#define LC7_clear_mask                           0x7F


/*--------------------------------------------------------------#
| LATD                                                    0xF8C |
#---------------------------------------------------------------#
| LATD7 | LATD6 | LATD5 | LATD4 | LATD3 | LATD2 | LATD1 | LATD0 |
#---------------------------------------------------------------#
| 7     | 6     | 5     | 4     | 3     | 2     | 1     | 0     |
#--------------------------------------------------------------*/

#define LATD                                     0x0
#define LATD_address                             0xF8C
#define LATD_position                            0x0
#define LATD_size                                0x8
#define LATD_value_mask                          0xFF
#define LATD_clear_mask                          0x0

#define LATD0                                    0x0
#define LATD0_address                            0xF8C
#define LATD0_position                           0x0
#define LATD0_size                               0x1
#define LATD0_value_mask                         0x1
#define LATD0_clear_mask                         0xFE

#define LD0                                      0x0
#define LD0_address                              0xF8C
#define LD0_position                             0x0
#define LD0_size                                 0x1
#define LD0_value_mask                           0x1
#define LD0_clear_mask                           0xFE

#define LATD1                                    0x1
#define LATD1_address                            0xF8C
#define LATD1_position                           0x1
#define LATD1_size                               0x1
#define LATD1_value_mask                         0x2
#define LATD1_clear_mask                         0xFD

#define LD1                                      0x1
#define LD1_address                              0xF8C
#define LD1_position                             0x1
#define LD1_size                                 0x1
#define LD1_value_mask                           0x2
#define LD1_clear_mask                           0xFD

#define LATD2                                    0x2
#define LATD2_address                            0xF8C
#define LATD2_position                           0x2
#define LATD2_size                               0x1
#define LATD2_value_mask                         0x4
#define LATD2_clear_mask                         0xFB

#define LD2                                      0x2
#define LD2_address                              0xF8C
#define LD2_position                             0x2
#define LD2_size                                 0x1
#define LD2_value_mask                           0x4
#define LD2_clear_mask                           0xFB

#define LATD3                                    0x3
#define LATD3_address                            0xF8C
#define LATD3_position                           0x3
#define LATD3_size                               0x1
#define LATD3_value_mask                         0x8
#define LATD3_clear_mask                         0xF7

#define LD3                                      0x3
#define LD3_address                              0xF8C
#define LD3_position                             0x3
#define LD3_size                                 0x1
#define LD3_value_mask                           0x8
#define LD3_clear_mask                           0xF7

#define LATD4                                    0x4
#define LATD4_address                            0xF8C
#define LATD4_position                           0x4
#define LATD4_size                               0x1
#define LATD4_value_mask                         0x10
#define LATD4_clear_mask                         0xEF

#define LD4                                      0x4
#define LD4_address                              0xF8C
#define LD4_position                             0x4
#define LD4_size                                 0x1
#define LD4_value_mask                           0x10
#define LD4_clear_mask                           0xEF

#define LATD5                                    0x5
#define LATD5_address                            0xF8C
#define LATD5_position                           0x5
#define LATD5_size                               0x1
#define LATD5_value_mask                         0x20
#define LATD5_clear_mask                         0xDF

#define LD5                                      0x5
#define LD5_address                              0xF8C
#define LD5_position                             0x5
#define LD5_size                                 0x1
#define LD5_value_mask                           0x20
#define LD5_clear_mask                           0xDF

#define LATD6                                    0x6
#define LATD6_address                            0xF8C
#define LATD6_position                           0x6
#define LATD6_size                               0x1
#define LATD6_value_mask                         0x40
#define LATD6_clear_mask                         0xBF

#define LD6                                      0x6
#define LD6_address                              0xF8C
#define LD6_position                             0x6
#define LD6_size                                 0x1
#define LD6_value_mask                           0x40
#define LD6_clear_mask                           0xBF

#define LATD7                                    0x7
#define LATD7_address                            0xF8C
#define LATD7_position                           0x7
#define LATD7_size                               0x1
#define LATD7_value_mask                         0x80
#define LATD7_clear_mask                         0x7F

#define LD7                                      0x7
#define LD7_address                              0xF8C
#define LD7_position                             0x7
#define LD7_size                                 0x1
#define LD7_value_mask                           0x80
#define LD7_clear_mask                           0x7F


/*----------------------------------------------#
| LATE                                    0xF8D |
#-----------------------------------------------#
| LATE7 | LATE6 | LATE5 | LATE4 | - | - | - | - |
#-----------------------------------------------#
| 7     | 6     | 5     | 4     | 3 | 2 | 1 | 0 |
#----------------------------------------------*/

#define LATE                                     0x0
#define LATE_address                             0xF8D
#define LATE_position                            0x0
#define LATE_size                                0x8
#define LATE_value_mask                          0xFF
#define LATE_clear_mask                          0x0

#define LATE4                                    0x4
#define LATE4_address                            0xF8D
#define LATE4_position                           0x4
#define LATE4_size                               0x1
#define LATE4_value_mask                         0x10
#define LATE4_clear_mask                         0xEF

#define LE4                                      0x4
#define LE4_address                              0xF8D
#define LE4_position                             0x4
#define LE4_size                                 0x1
#define LE4_value_mask                           0x10
#define LE4_clear_mask                           0xEF

#define LATE5                                    0x5
#define LATE5_address                            0xF8D
#define LATE5_position                           0x5
#define LATE5_size                               0x1
#define LATE5_value_mask                         0x20
#define LATE5_clear_mask                         0xDF

#define LE5                                      0x5
#define LE5_address                              0xF8D
#define LE5_position                             0x5
#define LE5_size                                 0x1
#define LE5_value_mask                           0x20
#define LE5_clear_mask                           0xDF

#define LATE6                                    0x6
#define LATE6_address                            0xF8D
#define LATE6_position                           0x6
#define LATE6_size                               0x1
#define LATE6_value_mask                         0x40
#define LATE6_clear_mask                         0xBF

#define LE6                                      0x6
#define LE6_address                              0xF8D
#define LE6_position                             0x6
#define LE6_size                                 0x1
#define LE6_value_mask                           0x40
#define LE6_clear_mask                           0xBF

#define LATE7                                    0x7
#define LATE7_address                            0xF8D
#define LATE7_position                           0x7
#define LATE7_size                               0x1
#define LATE7_value_mask                         0x80
#define LATE7_clear_mask                         0x7F

#define LE7                                      0x7
#define LE7_address                              0xF8D
#define LE7_position                             0x7
#define LE7_size                                 0x1
#define LE7_value_mask                           0x80
#define LE7_clear_mask                           0x7F


/*--------------------------------------------------------#
| LATF                                              0xF8E |
#---------------------------------------------------------#
| LATF7 | LATF6 | LF5 | LF4 | LF3 | LATF2 | LATF1 | LATF0 |
#---------------------------------------------------------#
| 7     | 6     | 5   | 4   | 3   | 2     | 1     | 0     |
#--------------------------------------------------------*/

#define LATF                                     0x0
#define LATF_address                             0xF8E
#define LATF_position                            0x0
#define LATF_size                                0x8
#define LATF_value_mask                          0xFF
#define LATF_clear_mask                          0x0

#define LATF0                                    0x0
#define LATF0_address                            0xF8E
#define LATF0_position                           0x0
#define LATF0_size                               0x1
#define LATF0_value_mask                         0x1
#define LATF0_clear_mask                         0xFE

#define LF0                                      0x0
#define LF0_address                              0xF8E
#define LF0_position                             0x0
#define LF0_size                                 0x1
#define LF0_value_mask                           0x1
#define LF0_clear_mask                           0xFE

#define LATF1                                    0x1
#define LATF1_address                            0xF8E
#define LATF1_position                           0x1
#define LATF1_size                               0x1
#define LATF1_value_mask                         0x2
#define LATF1_clear_mask                         0xFD

#define LF1                                      0x1
#define LF1_address                              0xF8E
#define LF1_position                             0x1
#define LF1_size                                 0x1
#define LF1_value_mask                           0x2
#define LF1_clear_mask                           0xFD

#define LF2                                      0x2
#define LF2_address                              0xF8E
#define LF2_position                             0x2
#define LF2_size                                 0x1
#define LF2_value_mask                           0x4
#define LF2_clear_mask                           0xFB

#define LATF2                                    0x2
#define LATF2_address                            0xF8E
#define LATF2_position                           0x2
#define LATF2_size                               0x1
#define LATF2_value_mask                         0x4
#define LATF2_clear_mask                         0xFB

#define LF3                                      0x3
#define LF3_address                              0xF8E
#define LF3_position                             0x3
#define LF3_size                                 0x1
#define LF3_value_mask                           0x8
#define LF3_clear_mask                           0xF7

#define LATF3                                    0x3
#define LATF3_address                            0xF8E
#define LATF3_position                           0x3
#define LATF3_size                               0x1
#define LATF3_value_mask                         0x8
#define LATF3_clear_mask                         0xF7

#define LF4                                      0x4
#define LF4_address                              0xF8E
#define LF4_position                             0x4
#define LF4_size                                 0x1
#define LF4_value_mask                           0x10
#define LF4_clear_mask                           0xEF

#define LATF4                                    0x4
#define LATF4_address                            0xF8E
#define LATF4_position                           0x4
#define LATF4_size                               0x1
#define LATF4_value_mask                         0x10
#define LATF4_clear_mask                         0xEF

#define LF5                                      0x5
#define LF5_address                              0xF8E
#define LF5_position                             0x5
#define LF5_size                                 0x1
#define LF5_value_mask                           0x20
#define LF5_clear_mask                           0xDF

#define LATF5                                    0x5
#define LATF5_address                            0xF8E
#define LATF5_position                           0x5
#define LATF5_size                               0x1
#define LATF5_value_mask                         0x20
#define LATF5_clear_mask                         0xDF

#define LF6                                      0x6
#define LF6_address                              0xF8E
#define LF6_position                             0x6
#define LF6_size                                 0x1
#define LF6_value_mask                           0x40
#define LF6_clear_mask                           0xBF

#define LATF6                                    0x6
#define LATF6_address                            0xF8E
#define LATF6_position                           0x6
#define LATF6_size                               0x1
#define LATF6_value_mask                         0x40
#define LATF6_clear_mask                         0xBF

#define LF7                                      0x7
#define LF7_address                              0xF8E
#define LF7_position                             0x7
#define LF7_size                                 0x1
#define LF7_value_mask                           0x80
#define LF7_clear_mask                           0x7F

#define LATF7                                    0x7
#define LATF7_address                            0xF8E
#define LATF7_position                           0x7
#define LATF7_size                               0x1
#define LATF7_value_mask                         0x80
#define LATF7_clear_mask                         0x7F


/*--------------------------------------------------#
| LATG                                        0xF8F |
#---------------------------------------------------#
| - | - | - | LATG4 | LATG3 | LATG2 | LATG1 | LATG0 |
#---------------------------------------------------#
| 7 | 6 | 5 | 4     | 3     | 2     | 1     | 0     |
#--------------------------------------------------*/

#define LATG                                     0x0
#define LATG_address                             0xF8F
#define LATG_position                            0x0
#define LATG_size                                0x8
#define LATG_value_mask                          0xFF
#define LATG_clear_mask                          0x0

#define LATG0                                    0x0
#define LATG0_address                            0xF8F
#define LATG0_position                           0x0
#define LATG0_size                               0x1
#define LATG0_value_mask                         0x1
#define LATG0_clear_mask                         0xFE

#define LG0                                      0x0
#define LG0_address                              0xF8F
#define LG0_position                             0x0
#define LG0_size                                 0x1
#define LG0_value_mask                           0x1
#define LG0_clear_mask                           0xFE

#define LATG1                                    0x1
#define LATG1_address                            0xF8F
#define LATG1_position                           0x1
#define LATG1_size                               0x1
#define LATG1_value_mask                         0x2
#define LATG1_clear_mask                         0xFD

#define LG1                                      0x1
#define LG1_address                              0xF8F
#define LG1_position                             0x1
#define LG1_size                                 0x1
#define LG1_value_mask                           0x2
#define LG1_clear_mask                           0xFD

#define LATG2                                    0x2
#define LATG2_address                            0xF8F
#define LATG2_position                           0x2
#define LATG2_size                               0x1
#define LATG2_value_mask                         0x4
#define LATG2_clear_mask                         0xFB

#define LG2                                      0x2
#define LG2_address                              0xF8F
#define LG2_position                             0x2
#define LG2_size                                 0x1
#define LG2_value_mask                           0x4
#define LG2_clear_mask                           0xFB

#define LATG3                                    0x3
#define LATG3_address                            0xF8F
#define LATG3_position                           0x3
#define LATG3_size                               0x1
#define LATG3_value_mask                         0x8
#define LATG3_clear_mask                         0xF7

#define LG3                                      0x3
#define LG3_address                              0xF8F
#define LG3_position                             0x3
#define LG3_size                                 0x1
#define LG3_value_mask                           0x8
#define LG3_clear_mask                           0xF7

#define LATG4                                    0x4
#define LATG4_address                            0xF8F
#define LATG4_position                           0x4
#define LATG4_size                               0x1
#define LATG4_value_mask                         0x10
#define LATG4_clear_mask                         0xEF

#define LG4                                      0x4
#define LG4_address                              0xF8F
#define LG4_position                             0x4
#define LG4_size                                 0x1
#define LG4_value_mask                           0x10
#define LG4_clear_mask                           0xEF


/*----------------------------------------------#
| LATH                                    0xF90 |
#-----------------------------------------------#
| LH7 | LH6 | LH5 | LH4 | LH3 | LH2 | LH1 | LH0 |
#-----------------------------------------------#
| 7   | 6   | 5   | 4   | 3   | 2   | 1   | 0   |
#----------------------------------------------*/

#define LATH                                     0x0
#define LATH_address                             0xF90
#define LATH_position                            0x0
#define LATH_size                                0x8
#define LATH_value_mask                          0xFF
#define LATH_clear_mask                          0x0

#define LH0                                      0x0
#define LH0_address                              0xF90
#define LH0_position                             0x0
#define LH0_size                                 0x1
#define LH0_value_mask                           0x1
#define LH0_clear_mask                           0xFE

#define LATH0                                    0x0
#define LATH0_address                            0xF90
#define LATH0_position                           0x0
#define LATH0_size                               0x1
#define LATH0_value_mask                         0x1
#define LATH0_clear_mask                         0xFE

#define LH1                                      0x1
#define LH1_address                              0xF90
#define LH1_position                             0x1
#define LH1_size                                 0x1
#define LH1_value_mask                           0x2
#define LH1_clear_mask                           0xFD

#define LATH1                                    0x1
#define LATH1_address                            0xF90
#define LATH1_position                           0x1
#define LATH1_size                               0x1
#define LATH1_value_mask                         0x2
#define LATH1_clear_mask                         0xFD

#define LH2                                      0x2
#define LH2_address                              0xF90
#define LH2_position                             0x2
#define LH2_size                                 0x1
#define LH2_value_mask                           0x4
#define LH2_clear_mask                           0xFB

#define LATH2                                    0x2
#define LATH2_address                            0xF90
#define LATH2_position                           0x2
#define LATH2_size                               0x1
#define LATH2_value_mask                         0x4
#define LATH2_clear_mask                         0xFB

#define LH3                                      0x3
#define LH3_address                              0xF90
#define LH3_position                             0x3
#define LH3_size                                 0x1
#define LH3_value_mask                           0x8
#define LH3_clear_mask                           0xF7

#define LATH3                                    0x3
#define LATH3_address                            0xF90
#define LATH3_position                           0x3
#define LATH3_size                               0x1
#define LATH3_value_mask                         0x8
#define LATH3_clear_mask                         0xF7

#define LH4                                      0x4
#define LH4_address                              0xF90
#define LH4_position                             0x4
#define LH4_size                                 0x1
#define LH4_value_mask                           0x10
#define LH4_clear_mask                           0xEF

#define LATH4                                    0x4
#define LATH4_address                            0xF90
#define LATH4_position                           0x4
#define LATH4_size                               0x1
#define LATH4_value_mask                         0x10
#define LATH4_clear_mask                         0xEF

#define LH5                                      0x5
#define LH5_address                              0xF90
#define LH5_position                             0x5
#define LH5_size                                 0x1
#define LH5_value_mask                           0x20
#define LH5_clear_mask                           0xDF

#define LATH5                                    0x5
#define LATH5_address                            0xF90
#define LATH5_position                           0x5
#define LATH5_size                               0x1
#define LATH5_value_mask                         0x20
#define LATH5_clear_mask                         0xDF

#define LH6                                      0x6
#define LH6_address                              0xF90
#define LH6_position                             0x6
#define LH6_size                                 0x1
#define LH6_value_mask                           0x40
#define LH6_clear_mask                           0xBF

#define LATH6                                    0x6
#define LATH6_address                            0xF90
#define LATH6_position                           0x6
#define LATH6_size                               0x1
#define LATH6_value_mask                         0x40
#define LATH6_clear_mask                         0xBF

#define LH7                                      0x7
#define LH7_address                              0xF90
#define LH7_position                             0x7
#define LH7_size                                 0x1
#define LH7_value_mask                           0x80
#define LH7_clear_mask                           0x7F

#define LATH7                                    0x7
#define LATH7_address                            0xF90
#define LATH7_position                           0x7
#define LATH7_size                               0x1
#define LATH7_value_mask                         0x80
#define LATH7_clear_mask                         0x7F


/*--------------------------------------------------------------#
| LATJ                                                    0xF91 |
#---------------------------------------------------------------#
| LATJ7 | LATJ6 | LATJ5 | LATJ4 | LATJ3 | LATJ2 | LATJ1 | LATJ0 |
#---------------------------------------------------------------#
| 7     | 6     | 5     | 4     | 3     | 2     | 1     | 0     |
#--------------------------------------------------------------*/

#define LATJ                                     0x0
#define LATJ_address                             0xF91
#define LATJ_position                            0x0
#define LATJ_size                                0x8
#define LATJ_value_mask                          0xFF
#define LATJ_clear_mask                          0x0

#define LATJ0                                    0x0
#define LATJ0_address                            0xF91
#define LATJ0_position                           0x0
#define LATJ0_size                               0x1
#define LATJ0_value_mask                         0x1
#define LATJ0_clear_mask                         0xFE

#define LJ0                                      0x0
#define LJ0_address                              0xF91
#define LJ0_position                             0x0
#define LJ0_size                                 0x1
#define LJ0_value_mask                           0x1
#define LJ0_clear_mask                           0xFE

#define LATJ1                                    0x1
#define LATJ1_address                            0xF91
#define LATJ1_position                           0x1
#define LATJ1_size                               0x1
#define LATJ1_value_mask                         0x2
#define LATJ1_clear_mask                         0xFD

#define LJ1                                      0x1
#define LJ1_address                              0xF91
#define LJ1_position                             0x1
#define LJ1_size                                 0x1
#define LJ1_value_mask                           0x2
#define LJ1_clear_mask                           0xFD

#define LATJ2                                    0x2
#define LATJ2_address                            0xF91
#define LATJ2_position                           0x2
#define LATJ2_size                               0x1
#define LATJ2_value_mask                         0x4
#define LATJ2_clear_mask                         0xFB

#define LJ2                                      0x2
#define LJ2_address                              0xF91
#define LJ2_position                             0x2
#define LJ2_size                                 0x1
#define LJ2_value_mask                           0x4
#define LJ2_clear_mask                           0xFB

#define LATJ3                                    0x3
#define LATJ3_address                            0xF91
#define LATJ3_position                           0x3
#define LATJ3_size                               0x1
#define LATJ3_value_mask                         0x8
#define LATJ3_clear_mask                         0xF7

#define LJ3                                      0x3
#define LJ3_address                              0xF91
#define LJ3_position                             0x3
#define LJ3_size                                 0x1
#define LJ3_value_mask                           0x8
#define LJ3_clear_mask                           0xF7

#define LATJ4                                    0x4
#define LATJ4_address                            0xF91
#define LATJ4_position                           0x4
#define LATJ4_size                               0x1
#define LATJ4_value_mask                         0x10
#define LATJ4_clear_mask                         0xEF

#define LJ4                                      0x4
#define LJ4_address                              0xF91
#define LJ4_position                             0x4
#define LJ4_size                                 0x1
#define LJ4_value_mask                           0x10
#define LJ4_clear_mask                           0xEF

#define LATJ5                                    0x5
#define LATJ5_address                            0xF91
#define LATJ5_position                           0x5
#define LATJ5_size                               0x1
#define LATJ5_value_mask                         0x20
#define LATJ5_clear_mask                         0xDF

#define LJ5                                      0x5
#define LJ5_address                              0xF91
#define LJ5_position                             0x5
#define LJ5_size                                 0x1
#define LJ5_value_mask                           0x20
#define LJ5_clear_mask                           0xDF

#define LATJ6                                    0x6
#define LATJ6_address                            0xF91
#define LATJ6_position                           0x6
#define LATJ6_size                               0x1
#define LATJ6_value_mask                         0x40
#define LATJ6_clear_mask                         0xBF

#define LJ6                                      0x6
#define LJ6_address                              0xF91
#define LJ6_position                             0x6
#define LJ6_size                                 0x1
#define LJ6_value_mask                           0x40
#define LJ6_clear_mask                           0xBF

#define LATJ7                                    0x7
#define LATJ7_address                            0xF91
#define LATJ7_position                           0x7
#define LATJ7_size                               0x1
#define LATJ7_value_mask                         0x80
#define LATJ7_clear_mask                         0x7F

#define LJ7                                      0x7
#define LJ7_address                              0xF91
#define LJ7_position                             0x7
#define LJ7_size                                 0x1
#define LJ7_value_mask                           0x80
#define LJ7_clear_mask                           0x7F


/*----------------------------------------------------------------------------------#
| TRISA                                                                       0xF92 |
#-----------------------------------------------------------------------------------#
| TRISA7 | TRISA6 | TRISA_RA5 | TRISA_RA4 | TRISA_RA3 | TRISA2 | TRISA_RA1 | TRISA0 |
#-----------------------------------------------------------------------------------#
| 7      | 6      | 5         | 4         | 3         | 2      | 1         | 0      |
#----------------------------------------------------------------------------------*/

#define TRISA                                    0x0
#define TRISA_address                            0xF92
#define TRISA_position                           0x0
#define TRISA_size                               0x8
#define TRISA_value_mask                         0xFF
#define TRISA_clear_mask                         0x0

#define TRISA0                                   0x0
#define TRISA0_address                           0xF92
#define TRISA0_position                          0x0
#define TRISA0_size                              0x1
#define TRISA0_value_mask                        0x1
#define TRISA0_clear_mask                        0xFE

#define TRISA_RA0                                0x0
#define TRISA_RA0_address                        0xF92
#define TRISA_RA0_position                       0x0
#define TRISA_RA0_size                           0x1
#define TRISA_RA0_value_mask                     0x1
#define TRISA_RA0_clear_mask                     0xFE

#define TRISA1                                   0x1
#define TRISA1_address                           0xF92
#define TRISA1_position                          0x1
#define TRISA1_size                              0x1
#define TRISA1_value_mask                        0x2
#define TRISA1_clear_mask                        0xFD

#define TRISA_RA1                                0x1
#define TRISA_RA1_address                        0xF92
#define TRISA_RA1_position                       0x1
#define TRISA_RA1_size                           0x1
#define TRISA_RA1_value_mask                     0x2
#define TRISA_RA1_clear_mask                     0xFD

#define TRISA2                                   0x2
#define TRISA2_address                           0xF92
#define TRISA2_position                          0x2
#define TRISA2_size                              0x1
#define TRISA2_value_mask                        0x4
#define TRISA2_clear_mask                        0xFB

#define TRISA_RA2                                0x2
#define TRISA_RA2_address                        0xF92
#define TRISA_RA2_position                       0x2
#define TRISA_RA2_size                           0x1
#define TRISA_RA2_value_mask                     0x4
#define TRISA_RA2_clear_mask                     0xFB

#define TRISA3                                   0x3
#define TRISA3_address                           0xF92
#define TRISA3_position                          0x3
#define TRISA3_size                              0x1
#define TRISA3_value_mask                        0x8
#define TRISA3_clear_mask                        0xF7

#define TRISA_RA3                                0x3
#define TRISA_RA3_address                        0xF92
#define TRISA_RA3_position                       0x3
#define TRISA_RA3_size                           0x1
#define TRISA_RA3_value_mask                     0x8
#define TRISA_RA3_clear_mask                     0xF7

#define TRISA_RA4                                0x4
#define TRISA_RA4_address                        0xF92
#define TRISA_RA4_position                       0x4
#define TRISA_RA4_size                           0x1
#define TRISA_RA4_value_mask                     0x10
#define TRISA_RA4_clear_mask                     0xEF

#define TRISA4                                   0x4
#define TRISA4_address                           0xF92
#define TRISA4_position                          0x4
#define TRISA4_size                              0x1
#define TRISA4_value_mask                        0x10
#define TRISA4_clear_mask                        0xEF

#define TRISA_RA5                                0x5
#define TRISA_RA5_address                        0xF92
#define TRISA_RA5_position                       0x5
#define TRISA_RA5_size                           0x1
#define TRISA_RA5_value_mask                     0x20
#define TRISA_RA5_clear_mask                     0xDF

#define TRISA5                                   0x5
#define TRISA5_address                           0xF92
#define TRISA5_position                          0x5
#define TRISA5_size                              0x1
#define TRISA5_value_mask                        0x20
#define TRISA5_clear_mask                        0xDF

#define TRISA_RA6                                0x6
#define TRISA_RA6_address                        0xF92
#define TRISA_RA6_position                       0x6
#define TRISA_RA6_size                           0x1
#define TRISA_RA6_value_mask                     0x40
#define TRISA_RA6_clear_mask                     0xBF

#define TRISA6                                   0x6
#define TRISA6_address                           0xF92
#define TRISA6_position                          0x6
#define TRISA6_size                              0x1
#define TRISA6_value_mask                        0x40
#define TRISA6_clear_mask                        0xBF

#define TRISA_RA7                                0x7
#define TRISA_RA7_address                        0xF92
#define TRISA_RA7_position                       0x7
#define TRISA_RA7_size                           0x1
#define TRISA_RA7_value_mask                     0x80
#define TRISA_RA7_clear_mask                     0x7F

#define TRISA7                                   0x7
#define TRISA7_address                           0xF92
#define TRISA7_position                          0x7
#define TRISA7_size                              0x1
#define TRISA7_value_mask                        0x80
#define TRISA7_clear_mask                        0x7F


/*----------------------------------------------------------------------#
| TRISB                                                           0xF93 |
#-----------------------------------------------------------------------#
| TRISB7 | TRISB6 | TRISB5 | TRISB4 | TRISB3 | TRISB2 | TRISB1 | TRISB0 |
#-----------------------------------------------------------------------#
| 7      | 6      | 5      | 4      | 3      | 2      | 1      | 0      |
#----------------------------------------------------------------------*/

#define TRISB                                    0x0
#define TRISB_address                            0xF93
#define TRISB_position                           0x0
#define TRISB_size                               0x8
#define TRISB_value_mask                         0xFF
#define TRISB_clear_mask                         0x0

#define TRISB_RB0                                0x0
#define TRISB_RB0_address                        0xF93
#define TRISB_RB0_position                       0x0
#define TRISB_RB0_size                           0x1
#define TRISB_RB0_value_mask                     0x1
#define TRISB_RB0_clear_mask                     0xFE

#define TRISB0                                   0x0
#define TRISB0_address                           0xF93
#define TRISB0_position                          0x0
#define TRISB0_size                              0x1
#define TRISB0_value_mask                        0x1
#define TRISB0_clear_mask                        0xFE

#define TRISB_RB1                                0x1
#define TRISB_RB1_address                        0xF93
#define TRISB_RB1_position                       0x1
#define TRISB_RB1_size                           0x1
#define TRISB_RB1_value_mask                     0x2
#define TRISB_RB1_clear_mask                     0xFD

#define TRISB1                                   0x1
#define TRISB1_address                           0xF93
#define TRISB1_position                          0x1
#define TRISB1_size                              0x1
#define TRISB1_value_mask                        0x2
#define TRISB1_clear_mask                        0xFD

#define TRISB_RB2                                0x2
#define TRISB_RB2_address                        0xF93
#define TRISB_RB2_position                       0x2
#define TRISB_RB2_size                           0x1
#define TRISB_RB2_value_mask                     0x4
#define TRISB_RB2_clear_mask                     0xFB

#define TRISB2                                   0x2
#define TRISB2_address                           0xF93
#define TRISB2_position                          0x2
#define TRISB2_size                              0x1
#define TRISB2_value_mask                        0x4
#define TRISB2_clear_mask                        0xFB

#define TRISB_RB3                                0x3
#define TRISB_RB3_address                        0xF93
#define TRISB_RB3_position                       0x3
#define TRISB_RB3_size                           0x1
#define TRISB_RB3_value_mask                     0x8
#define TRISB_RB3_clear_mask                     0xF7

#define TRISB3                                   0x3
#define TRISB3_address                           0xF93
#define TRISB3_position                          0x3
#define TRISB3_size                              0x1
#define TRISB3_value_mask                        0x8
#define TRISB3_clear_mask                        0xF7

#define TRISB_RB4                                0x4
#define TRISB_RB4_address                        0xF93
#define TRISB_RB4_position                       0x4
#define TRISB_RB4_size                           0x1
#define TRISB_RB4_value_mask                     0x10
#define TRISB_RB4_clear_mask                     0xEF

#define TRISB4                                   0x4
#define TRISB4_address                           0xF93
#define TRISB4_position                          0x4
#define TRISB4_size                              0x1
#define TRISB4_value_mask                        0x10
#define TRISB4_clear_mask                        0xEF

#define TRISB_RB5                                0x5
#define TRISB_RB5_address                        0xF93
#define TRISB_RB5_position                       0x5
#define TRISB_RB5_size                           0x1
#define TRISB_RB5_value_mask                     0x20
#define TRISB_RB5_clear_mask                     0xDF

#define TRISB5                                   0x5
#define TRISB5_address                           0xF93
#define TRISB5_position                          0x5
#define TRISB5_size                              0x1
#define TRISB5_value_mask                        0x20
#define TRISB5_clear_mask                        0xDF

#define TRISB_RB6                                0x6
#define TRISB_RB6_address                        0xF93
#define TRISB_RB6_position                       0x6
#define TRISB_RB6_size                           0x1
#define TRISB_RB6_value_mask                     0x40
#define TRISB_RB6_clear_mask                     0xBF

#define TRISB6                                   0x6
#define TRISB6_address                           0xF93
#define TRISB6_position                          0x6
#define TRISB6_size                              0x1
#define TRISB6_value_mask                        0x40
#define TRISB6_clear_mask                        0xBF

#define TRISB_RB7                                0x7
#define TRISB_RB7_address                        0xF93
#define TRISB_RB7_position                       0x7
#define TRISB_RB7_size                           0x1
#define TRISB_RB7_value_mask                     0x80
#define TRISB_RB7_clear_mask                     0x7F

#define TRISB7                                   0x7
#define TRISB7_address                           0xF93
#define TRISB7_position                          0x7
#define TRISB7_size                              0x1
#define TRISB7_value_mask                        0x80
#define TRISB7_clear_mask                        0x7F


/*----------------------------------------------------------------------#
| TRISC                                                           0xF94 |
#-----------------------------------------------------------------------#
| TRISC7 | TRISC6 | TRISC5 | TRISC4 | TRISC3 | TRISC2 | TRISC1 | TRISC0 |
#-----------------------------------------------------------------------#
| 7      | 6      | 5      | 4      | 3      | 2      | 1      | 0      |
#----------------------------------------------------------------------*/

#define TRISC                                    0x0
#define TRISC_address                            0xF94
#define TRISC_position                           0x0
#define TRISC_size                               0x8
#define TRISC_value_mask                         0xFF
#define TRISC_clear_mask                         0x0

#define TRISC0                                   0x0
#define TRISC0_address                           0xF94
#define TRISC0_position                          0x0
#define TRISC0_size                              0x1
#define TRISC0_value_mask                        0x1
#define TRISC0_clear_mask                        0xFE

#define TRISC_RC0                                0x0
#define TRISC_RC0_address                        0xF94
#define TRISC_RC0_position                       0x0
#define TRISC_RC0_size                           0x1
#define TRISC_RC0_value_mask                     0x1
#define TRISC_RC0_clear_mask                     0xFE

#define TRISC1                                   0x1
#define TRISC1_address                           0xF94
#define TRISC1_position                          0x1
#define TRISC1_size                              0x1
#define TRISC1_value_mask                        0x2
#define TRISC1_clear_mask                        0xFD

#define TRISC_RC1                                0x1
#define TRISC_RC1_address                        0xF94
#define TRISC_RC1_position                       0x1
#define TRISC_RC1_size                           0x1
#define TRISC_RC1_value_mask                     0x2
#define TRISC_RC1_clear_mask                     0xFD

#define TRISC2                                   0x2
#define TRISC2_address                           0xF94
#define TRISC2_position                          0x2
#define TRISC2_size                              0x1
#define TRISC2_value_mask                        0x4
#define TRISC2_clear_mask                        0xFB

#define TRISC_RC2                                0x2
#define TRISC_RC2_address                        0xF94
#define TRISC_RC2_position                       0x2
#define TRISC_RC2_size                           0x1
#define TRISC_RC2_value_mask                     0x4
#define TRISC_RC2_clear_mask                     0xFB

#define TRISC3                                   0x3
#define TRISC3_address                           0xF94
#define TRISC3_position                          0x3
#define TRISC3_size                              0x1
#define TRISC3_value_mask                        0x8
#define TRISC3_clear_mask                        0xF7

#define TRISC_RC3                                0x3
#define TRISC_RC3_address                        0xF94
#define TRISC_RC3_position                       0x3
#define TRISC_RC3_size                           0x1
#define TRISC_RC3_value_mask                     0x8
#define TRISC_RC3_clear_mask                     0xF7

#define TRISC4                                   0x4
#define TRISC4_address                           0xF94
#define TRISC4_position                          0x4
#define TRISC4_size                              0x1
#define TRISC4_value_mask                        0x10
#define TRISC4_clear_mask                        0xEF

#define TRISC_RC4                                0x4
#define TRISC_RC4_address                        0xF94
#define TRISC_RC4_position                       0x4
#define TRISC_RC4_size                           0x1
#define TRISC_RC4_value_mask                     0x10
#define TRISC_RC4_clear_mask                     0xEF

#define TRISC5                                   0x5
#define TRISC5_address                           0xF94
#define TRISC5_position                          0x5
#define TRISC5_size                              0x1
#define TRISC5_value_mask                        0x20
#define TRISC5_clear_mask                        0xDF

#define TRISC_RC5                                0x5
#define TRISC_RC5_address                        0xF94
#define TRISC_RC5_position                       0x5
#define TRISC_RC5_size                           0x1
#define TRISC_RC5_value_mask                     0x20
#define TRISC_RC5_clear_mask                     0xDF

#define TRISC6                                   0x6
#define TRISC6_address                           0xF94
#define TRISC6_position                          0x6
#define TRISC6_size                              0x1
#define TRISC6_value_mask                        0x40
#define TRISC6_clear_mask                        0xBF

#define TRISC_RC6                                0x6
#define TRISC_RC6_address                        0xF94
#define TRISC_RC6_position                       0x6
#define TRISC_RC6_size                           0x1
#define TRISC_RC6_value_mask                     0x40
#define TRISC_RC6_clear_mask                     0xBF

#define TRISC7                                   0x7
#define TRISC7_address                           0xF94
#define TRISC7_position                          0x7
#define TRISC7_size                              0x1
#define TRISC7_value_mask                        0x80
#define TRISC7_clear_mask                        0x7F

#define TRISC_RC7                                0x7
#define TRISC_RC7_address                        0xF94
#define TRISC_RC7_position                       0x7
#define TRISC_RC7_size                           0x1
#define TRISC_RC7_value_mask                     0x80
#define TRISC_RC7_clear_mask                     0x7F


/*----------------------------------------------------------------------#
| TRISD                                                           0xF95 |
#-----------------------------------------------------------------------#
| TRISD7 | TRISD6 | TRISD5 | TRISD4 | TRISD3 | TRISD2 | TRISD1 | TRISD0 |
#-----------------------------------------------------------------------#
| 7      | 6      | 5      | 4      | 3      | 2      | 1      | 0      |
#----------------------------------------------------------------------*/

#define TRISD                                    0x0
#define TRISD_address                            0xF95
#define TRISD_position                           0x0
#define TRISD_size                               0x8
#define TRISD_value_mask                         0xFF
#define TRISD_clear_mask                         0x0

#define TRISD_RD0                                0x0
#define TRISD_RD0_address                        0xF95
#define TRISD_RD0_position                       0x0
#define TRISD_RD0_size                           0x1
#define TRISD_RD0_value_mask                     0x1
#define TRISD_RD0_clear_mask                     0xFE

#define TRISD0                                   0x0
#define TRISD0_address                           0xF95
#define TRISD0_position                          0x0
#define TRISD0_size                              0x1
#define TRISD0_value_mask                        0x1
#define TRISD0_clear_mask                        0xFE

#define TRISD_RD1                                0x1
#define TRISD_RD1_address                        0xF95
#define TRISD_RD1_position                       0x1
#define TRISD_RD1_size                           0x1
#define TRISD_RD1_value_mask                     0x2
#define TRISD_RD1_clear_mask                     0xFD

#define TRISD1                                   0x1
#define TRISD1_address                           0xF95
#define TRISD1_position                          0x1
#define TRISD1_size                              0x1
#define TRISD1_value_mask                        0x2
#define TRISD1_clear_mask                        0xFD

#define TRISD_RD2                                0x2
#define TRISD_RD2_address                        0xF95
#define TRISD_RD2_position                       0x2
#define TRISD_RD2_size                           0x1
#define TRISD_RD2_value_mask                     0x4
#define TRISD_RD2_clear_mask                     0xFB

#define TRISD2                                   0x2
#define TRISD2_address                           0xF95
#define TRISD2_position                          0x2
#define TRISD2_size                              0x1
#define TRISD2_value_mask                        0x4
#define TRISD2_clear_mask                        0xFB

#define TRISD_RD3                                0x3
#define TRISD_RD3_address                        0xF95
#define TRISD_RD3_position                       0x3
#define TRISD_RD3_size                           0x1
#define TRISD_RD3_value_mask                     0x8
#define TRISD_RD3_clear_mask                     0xF7

#define TRISD3                                   0x3
#define TRISD3_address                           0xF95
#define TRISD3_position                          0x3
#define TRISD3_size                              0x1
#define TRISD3_value_mask                        0x8
#define TRISD3_clear_mask                        0xF7

#define TRISD_RD4                                0x4
#define TRISD_RD4_address                        0xF95
#define TRISD_RD4_position                       0x4
#define TRISD_RD4_size                           0x1
#define TRISD_RD4_value_mask                     0x10
#define TRISD_RD4_clear_mask                     0xEF

#define TRISD4                                   0x4
#define TRISD4_address                           0xF95
#define TRISD4_position                          0x4
#define TRISD4_size                              0x1
#define TRISD4_value_mask                        0x10
#define TRISD4_clear_mask                        0xEF

#define TRISD_RD5                                0x5
#define TRISD_RD5_address                        0xF95
#define TRISD_RD5_position                       0x5
#define TRISD_RD5_size                           0x1
#define TRISD_RD5_value_mask                     0x20
#define TRISD_RD5_clear_mask                     0xDF

#define TRISD5                                   0x5
#define TRISD5_address                           0xF95
#define TRISD5_position                          0x5
#define TRISD5_size                              0x1
#define TRISD5_value_mask                        0x20
#define TRISD5_clear_mask                        0xDF

#define TRISD_RD6                                0x6
#define TRISD_RD6_address                        0xF95
#define TRISD_RD6_position                       0x6
#define TRISD_RD6_size                           0x1
#define TRISD_RD6_value_mask                     0x40
#define TRISD_RD6_clear_mask                     0xBF

#define TRISD6                                   0x6
#define TRISD6_address                           0xF95
#define TRISD6_position                          0x6
#define TRISD6_size                              0x1
#define TRISD6_value_mask                        0x40
#define TRISD6_clear_mask                        0xBF

#define TRISD_RD7                                0x7
#define TRISD_RD7_address                        0xF95
#define TRISD_RD7_position                       0x7
#define TRISD_RD7_size                           0x1
#define TRISD_RD7_value_mask                     0x80
#define TRISD_RD7_clear_mask                     0x7F

#define TRISD7                                   0x7
#define TRISD7_address                           0xF95
#define TRISD7_position                          0x7
#define TRISD7_size                              0x1
#define TRISD7_value_mask                        0x80
#define TRISD7_clear_mask                        0x7F


/*--------------------------------------------------------------#
| TRISE                                                   0xF96 |
#---------------------------------------------------------------#
| TRISE_RE7 | TRISE_RE6 | TRISE_RE5 | TRISE_RE4 | - | - | - | - |
#---------------------------------------------------------------#
| 7         | 6         | 5         | 4         | 3 | 2 | 1 | 0 |
#--------------------------------------------------------------*/

#define TRISE                                    0x0
#define TRISE_address                            0xF96
#define TRISE_position                           0x0
#define TRISE_size                               0x8
#define TRISE_value_mask                         0xFF
#define TRISE_clear_mask                         0x0

#define TRISE_RE4                                0x4
#define TRISE_RE4_address                        0xF96
#define TRISE_RE4_position                       0x4
#define TRISE_RE4_size                           0x1
#define TRISE_RE4_value_mask                     0x10
#define TRISE_RE4_clear_mask                     0xEF

#define TRISE4                                   0x4
#define TRISE4_address                           0xF96
#define TRISE4_position                          0x4
#define TRISE4_size                              0x1
#define TRISE4_value_mask                        0x10
#define TRISE4_clear_mask                        0xEF

#define TRISE_RE5                                0x5
#define TRISE_RE5_address                        0xF96
#define TRISE_RE5_position                       0x5
#define TRISE_RE5_size                           0x1
#define TRISE_RE5_value_mask                     0x20
#define TRISE_RE5_clear_mask                     0xDF

#define TRISE5                                   0x5
#define TRISE5_address                           0xF96
#define TRISE5_position                          0x5
#define TRISE5_size                              0x1
#define TRISE5_value_mask                        0x20
#define TRISE5_clear_mask                        0xDF

#define TRISE_RE6                                0x6
#define TRISE_RE6_address                        0xF96
#define TRISE_RE6_position                       0x6
#define TRISE_RE6_size                           0x1
#define TRISE_RE6_value_mask                     0x40
#define TRISE_RE6_clear_mask                     0xBF

#define TRISE6                                   0x6
#define TRISE6_address                           0xF96
#define TRISE6_position                          0x6
#define TRISE6_size                              0x1
#define TRISE6_value_mask                        0x40
#define TRISE6_clear_mask                        0xBF

#define TRISE_RE7                                0x7
#define TRISE_RE7_address                        0xF96
#define TRISE_RE7_position                       0x7
#define TRISE_RE7_size                           0x1
#define TRISE_RE7_value_mask                     0x80
#define TRISE_RE7_clear_mask                     0x7F

#define TRISE7                                   0x7
#define TRISE7_address                           0xF96
#define TRISE7_position                          0x7
#define TRISE7_size                              0x1
#define TRISE7_value_mask                        0x80
#define TRISE7_clear_mask                        0x7F


/*----------------------------------------------------------------------------------------------#
| TRISF                                                                                   0xF97 |
#-----------------------------------------------------------------------------------------------#
| TRISF_RF7 | TRISF_RF6 | TRISF_RF5 | TRISF_RF4 | TRISF_RF3 | TRISF_RF2 | TRISF_RF1 | TRISF_RF0 |
#-----------------------------------------------------------------------------------------------#
| 7         | 6         | 5         | 4         | 3         | 2         | 1         | 0         |
#----------------------------------------------------------------------------------------------*/

#define TRISF                                    0x0
#define TRISF_address                            0xF97
#define TRISF_position                           0x0
#define TRISF_size                               0x8
#define TRISF_value_mask                         0xFF
#define TRISF_clear_mask                         0x0

#define TRISF0                                   0x0
#define TRISF0_address                           0xF97
#define TRISF0_position                          0x0
#define TRISF0_size                              0x1
#define TRISF0_value_mask                        0x1
#define TRISF0_clear_mask                        0xFE

#define TRISF_RF0                                0x0
#define TRISF_RF0_address                        0xF97
#define TRISF_RF0_position                       0x0
#define TRISF_RF0_size                           0x1
#define TRISF_RF0_value_mask                     0x1
#define TRISF_RF0_clear_mask                     0xFE

#define TRISF_RF1                                0x1
#define TRISF_RF1_address                        0xF97
#define TRISF_RF1_position                       0x1
#define TRISF_RF1_size                           0x1
#define TRISF_RF1_value_mask                     0x2
#define TRISF_RF1_clear_mask                     0xFD

#define TRISF1                                   0x1
#define TRISF1_address                           0xF97
#define TRISF1_position                          0x1
#define TRISF1_size                              0x1
#define TRISF1_value_mask                        0x2
#define TRISF1_clear_mask                        0xFD

#define TRISF_RF2                                0x2
#define TRISF_RF2_address                        0xF97
#define TRISF_RF2_position                       0x2
#define TRISF_RF2_size                           0x1
#define TRISF_RF2_value_mask                     0x4
#define TRISF_RF2_clear_mask                     0xFB

#define TRISF2                                   0x2
#define TRISF2_address                           0xF97
#define TRISF2_position                          0x2
#define TRISF2_size                              0x1
#define TRISF2_value_mask                        0x4
#define TRISF2_clear_mask                        0xFB

#define TRISF3                                   0x3
#define TRISF3_address                           0xF97
#define TRISF3_position                          0x3
#define TRISF3_size                              0x1
#define TRISF3_value_mask                        0x8
#define TRISF3_clear_mask                        0xF7

#define TRISF_RF3                                0x3
#define TRISF_RF3_address                        0xF97
#define TRISF_RF3_position                       0x3
#define TRISF_RF3_size                           0x1
#define TRISF_RF3_value_mask                     0x8
#define TRISF_RF3_clear_mask                     0xF7

#define TRISF_RF4                                0x4
#define TRISF_RF4_address                        0xF97
#define TRISF_RF4_position                       0x4
#define TRISF_RF4_size                           0x1
#define TRISF_RF4_value_mask                     0x10
#define TRISF_RF4_clear_mask                     0xEF

#define TRISF4                                   0x4
#define TRISF4_address                           0xF97
#define TRISF4_position                          0x4
#define TRISF4_size                              0x1
#define TRISF4_value_mask                        0x10
#define TRISF4_clear_mask                        0xEF

#define TRISF_RF5                                0x5
#define TRISF_RF5_address                        0xF97
#define TRISF_RF5_position                       0x5
#define TRISF_RF5_size                           0x1
#define TRISF_RF5_value_mask                     0x20
#define TRISF_RF5_clear_mask                     0xDF

#define TRISF5                                   0x5
#define TRISF5_address                           0xF97
#define TRISF5_position                          0x5
#define TRISF5_size                              0x1
#define TRISF5_value_mask                        0x20
#define TRISF5_clear_mask                        0xDF

#define TRISF_RF6                                0x6
#define TRISF_RF6_address                        0xF97
#define TRISF_RF6_position                       0x6
#define TRISF_RF6_size                           0x1
#define TRISF_RF6_value_mask                     0x40
#define TRISF_RF6_clear_mask                     0xBF

#define TRISF6                                   0x6
#define TRISF6_address                           0xF97
#define TRISF6_position                          0x6
#define TRISF6_size                              0x1
#define TRISF6_value_mask                        0x40
#define TRISF6_clear_mask                        0xBF

#define TRISF7                                   0x7
#define TRISF7_address                           0xF97
#define TRISF7_position                          0x7
#define TRISF7_size                              0x1
#define TRISF7_value_mask                        0x80
#define TRISF7_clear_mask                        0x7F

#define TRISF_RF7                                0x7
#define TRISF_RF7_address                        0xF97
#define TRISF_RF7_position                       0x7
#define TRISF_RF7_size                           0x1
#define TRISF_RF7_value_mask                     0x80
#define TRISF_RF7_clear_mask                     0x7F


/*-------------------------------------------------------------#
| TRISG                                                  0xF98 |
#--------------------------------------------------------------#
| - | - | - | TRISG4 | TRISG_RG3 | TRISG_RG2 | TRISG1 | TRISG0 |
#--------------------------------------------------------------#
| 7 | 6 | 5 | 4      | 3         | 2         | 1      | 0      |
#-------------------------------------------------------------*/

#define TRISG                                    0x0
#define TRISG_address                            0xF98
#define TRISG_position                           0x0
#define TRISG_size                               0x8
#define TRISG_value_mask                         0xFF
#define TRISG_clear_mask                         0x0

#define TRISG0                                   0x0
#define TRISG0_address                           0xF98
#define TRISG0_position                          0x0
#define TRISG0_size                              0x1
#define TRISG0_value_mask                        0x1
#define TRISG0_clear_mask                        0xFE

#define TRISG_RG0                                0x0
#define TRISG_RG0_address                        0xF98
#define TRISG_RG0_position                       0x0
#define TRISG_RG0_size                           0x1
#define TRISG_RG0_value_mask                     0x1
#define TRISG_RG0_clear_mask                     0xFE

#define TRISG1                                   0x1
#define TRISG1_address                           0xF98
#define TRISG1_position                          0x1
#define TRISG1_size                              0x1
#define TRISG1_value_mask                        0x2
#define TRISG1_clear_mask                        0xFD

#define TRISG_RG1                                0x1
#define TRISG_RG1_address                        0xF98
#define TRISG_RG1_position                       0x1
#define TRISG_RG1_size                           0x1
#define TRISG_RG1_value_mask                     0x2
#define TRISG_RG1_clear_mask                     0xFD

#define TRISG2                                   0x2
#define TRISG2_address                           0xF98
#define TRISG2_position                          0x2
#define TRISG2_size                              0x1
#define TRISG2_value_mask                        0x4
#define TRISG2_clear_mask                        0xFB

#define TRISG_RG2                                0x2
#define TRISG_RG2_address                        0xF98
#define TRISG_RG2_position                       0x2
#define TRISG_RG2_size                           0x1
#define TRISG_RG2_value_mask                     0x4
#define TRISG_RG2_clear_mask                     0xFB

#define TRISG_RG3                                0x3
#define TRISG_RG3_address                        0xF98
#define TRISG_RG3_position                       0x3
#define TRISG_RG3_size                           0x1
#define TRISG_RG3_value_mask                     0x8
#define TRISG_RG3_clear_mask                     0xF7

#define TRISG3                                   0x3
#define TRISG3_address                           0xF98
#define TRISG3_position                          0x3
#define TRISG3_size                              0x1
#define TRISG3_value_mask                        0x8
#define TRISG3_clear_mask                        0xF7

#define TRISG4                                   0x4
#define TRISG4_address                           0xF98
#define TRISG4_position                          0x4
#define TRISG4_size                              0x1
#define TRISG4_value_mask                        0x10
#define TRISG4_clear_mask                        0xEF

#define TRISG_RG4                                0x4
#define TRISG_RG4_address                        0xF98
#define TRISG_RG4_position                       0x4
#define TRISG_RG4_size                           0x1
#define TRISG_RG4_value_mask                     0x10
#define TRISG_RG4_clear_mask                     0xEF


/*----------------------------------------------------------------------#
| TRISH                                                           0xF99 |
#-----------------------------------------------------------------------#
| TRISH7 | TRISH6 | TRISH5 | TRISH4 | TRISH3 | TRISH2 | TRISH1 | TRISH0 |
#-----------------------------------------------------------------------#
| 7      | 6      | 5      | 4      | 3      | 2      | 1      | 0      |
#----------------------------------------------------------------------*/

#define TRISH                                    0x0
#define TRISH_address                            0xF99
#define TRISH_position                           0x0
#define TRISH_size                               0x8
#define TRISH_value_mask                         0xFF
#define TRISH_clear_mask                         0x0

#define TRISH_RH0                                0x0
#define TRISH_RH0_address                        0xF99
#define TRISH_RH0_position                       0x0
#define TRISH_RH0_size                           0x1
#define TRISH_RH0_value_mask                     0x1
#define TRISH_RH0_clear_mask                     0xFE

#define TRISH0                                   0x0
#define TRISH0_address                           0xF99
#define TRISH0_position                          0x0
#define TRISH0_size                              0x1
#define TRISH0_value_mask                        0x1
#define TRISH0_clear_mask                        0xFE

#define TRISH_RH1                                0x1
#define TRISH_RH1_address                        0xF99
#define TRISH_RH1_position                       0x1
#define TRISH_RH1_size                           0x1
#define TRISH_RH1_value_mask                     0x2
#define TRISH_RH1_clear_mask                     0xFD

#define TRISH1                                   0x1
#define TRISH1_address                           0xF99
#define TRISH1_position                          0x1
#define TRISH1_size                              0x1
#define TRISH1_value_mask                        0x2
#define TRISH1_clear_mask                        0xFD

#define TRISH_RH2                                0x2
#define TRISH_RH2_address                        0xF99
#define TRISH_RH2_position                       0x2
#define TRISH_RH2_size                           0x1
#define TRISH_RH2_value_mask                     0x4
#define TRISH_RH2_clear_mask                     0xFB

#define TRISH2                                   0x2
#define TRISH2_address                           0xF99
#define TRISH2_position                          0x2
#define TRISH2_size                              0x1
#define TRISH2_value_mask                        0x4
#define TRISH2_clear_mask                        0xFB

#define TRISH_RH3                                0x3
#define TRISH_RH3_address                        0xF99
#define TRISH_RH3_position                       0x3
#define TRISH_RH3_size                           0x1
#define TRISH_RH3_value_mask                     0x8
#define TRISH_RH3_clear_mask                     0xF7

#define TRISH3                                   0x3
#define TRISH3_address                           0xF99
#define TRISH3_position                          0x3
#define TRISH3_size                              0x1
#define TRISH3_value_mask                        0x8
#define TRISH3_clear_mask                        0xF7

#define TRISH_RH4                                0x4
#define TRISH_RH4_address                        0xF99
#define TRISH_RH4_position                       0x4
#define TRISH_RH4_size                           0x1
#define TRISH_RH4_value_mask                     0x10
#define TRISH_RH4_clear_mask                     0xEF

#define TRISH4                                   0x4
#define TRISH4_address                           0xF99
#define TRISH4_position                          0x4
#define TRISH4_size                              0x1
#define TRISH4_value_mask                        0x10
#define TRISH4_clear_mask                        0xEF

#define TRISH_RH5                                0x5
#define TRISH_RH5_address                        0xF99
#define TRISH_RH5_position                       0x5
#define TRISH_RH5_size                           0x1
#define TRISH_RH5_value_mask                     0x20
#define TRISH_RH5_clear_mask                     0xDF

#define TRISH5                                   0x5
#define TRISH5_address                           0xF99
#define TRISH5_position                          0x5
#define TRISH5_size                              0x1
#define TRISH5_value_mask                        0x20
#define TRISH5_clear_mask                        0xDF

#define TRISH_RH6                                0x6
#define TRISH_RH6_address                        0xF99
#define TRISH_RH6_position                       0x6
#define TRISH_RH6_size                           0x1
#define TRISH_RH6_value_mask                     0x40
#define TRISH_RH6_clear_mask                     0xBF

#define TRISH6                                   0x6
#define TRISH6_address                           0xF99
#define TRISH6_position                          0x6
#define TRISH6_size                              0x1
#define TRISH6_value_mask                        0x40
#define TRISH6_clear_mask                        0xBF

#define TRISH_RH7                                0x7
#define TRISH_RH7_address                        0xF99
#define TRISH_RH7_position                       0x7
#define TRISH_RH7_size                           0x1
#define TRISH_RH7_value_mask                     0x80
#define TRISH_RH7_clear_mask                     0x7F

#define TRISH7                                   0x7
#define TRISH7_address                           0xF99
#define TRISH7_position                          0x7
#define TRISH7_size                              0x1
#define TRISH7_value_mask                        0x80
#define TRISH7_clear_mask                        0x7F


/*----------------------------------------------------------------------#
| TRISJ                                                           0xF9A |
#-----------------------------------------------------------------------#
| TRISJ7 | TRISJ6 | TRISJ5 | TRISJ4 | TRISJ3 | TRISJ2 | TRISJ1 | TRISJ0 |
#-----------------------------------------------------------------------#
| 7      | 6      | 5      | 4      | 3      | 2      | 1      | 0      |
#----------------------------------------------------------------------*/

#define TRISJ                                    0x0
#define TRISJ_address                            0xF9A
#define TRISJ_position                           0x0
#define TRISJ_size                               0x8
#define TRISJ_value_mask                         0xFF
#define TRISJ_clear_mask                         0x0

#define TRISJ_RJ0                                0x0
#define TRISJ_RJ0_address                        0xF9A
#define TRISJ_RJ0_position                       0x0
#define TRISJ_RJ0_size                           0x1
#define TRISJ_RJ0_value_mask                     0x1
#define TRISJ_RJ0_clear_mask                     0xFE

#define TRISJ0                                   0x0
#define TRISJ0_address                           0xF9A
#define TRISJ0_position                          0x0
#define TRISJ0_size                              0x1
#define TRISJ0_value_mask                        0x1
#define TRISJ0_clear_mask                        0xFE

#define TRISJ_RJ1                                0x1
#define TRISJ_RJ1_address                        0xF9A
#define TRISJ_RJ1_position                       0x1
#define TRISJ_RJ1_size                           0x1
#define TRISJ_RJ1_value_mask                     0x2
#define TRISJ_RJ1_clear_mask                     0xFD

#define TRISJ1                                   0x1
#define TRISJ1_address                           0xF9A
#define TRISJ1_position                          0x1
#define TRISJ1_size                              0x1
#define TRISJ1_value_mask                        0x2
#define TRISJ1_clear_mask                        0xFD

#define TRISJ_RJ2                                0x2
#define TRISJ_RJ2_address                        0xF9A
#define TRISJ_RJ2_position                       0x2
#define TRISJ_RJ2_size                           0x1
#define TRISJ_RJ2_value_mask                     0x4
#define TRISJ_RJ2_clear_mask                     0xFB

#define TRISJ2                                   0x2
#define TRISJ2_address                           0xF9A
#define TRISJ2_position                          0x2
#define TRISJ2_size                              0x1
#define TRISJ2_value_mask                        0x4
#define TRISJ2_clear_mask                        0xFB

#define TRISJ_RJ3                                0x3
#define TRISJ_RJ3_address                        0xF9A
#define TRISJ_RJ3_position                       0x3
#define TRISJ_RJ3_size                           0x1
#define TRISJ_RJ3_value_mask                     0x8
#define TRISJ_RJ3_clear_mask                     0xF7

#define TRISJ3                                   0x3
#define TRISJ3_address                           0xF9A
#define TRISJ3_position                          0x3
#define TRISJ3_size                              0x1
#define TRISJ3_value_mask                        0x8
#define TRISJ3_clear_mask                        0xF7

#define TRISJ_RJ4                                0x4
#define TRISJ_RJ4_address                        0xF9A
#define TRISJ_RJ4_position                       0x4
#define TRISJ_RJ4_size                           0x1
#define TRISJ_RJ4_value_mask                     0x10
#define TRISJ_RJ4_clear_mask                     0xEF

#define TRISJ4                                   0x4
#define TRISJ4_address                           0xF9A
#define TRISJ4_position                          0x4
#define TRISJ4_size                              0x1
#define TRISJ4_value_mask                        0x10
#define TRISJ4_clear_mask                        0xEF

#define TRISJ_RJ5                                0x5
#define TRISJ_RJ5_address                        0xF9A
#define TRISJ_RJ5_position                       0x5
#define TRISJ_RJ5_size                           0x1
#define TRISJ_RJ5_value_mask                     0x20
#define TRISJ_RJ5_clear_mask                     0xDF

#define TRISJ5                                   0x5
#define TRISJ5_address                           0xF9A
#define TRISJ5_position                          0x5
#define TRISJ5_size                              0x1
#define TRISJ5_value_mask                        0x20
#define TRISJ5_clear_mask                        0xDF

#define TRISJ_RJ6                                0x6
#define TRISJ_RJ6_address                        0xF9A
#define TRISJ_RJ6_position                       0x6
#define TRISJ_RJ6_size                           0x1
#define TRISJ_RJ6_value_mask                     0x40
#define TRISJ_RJ6_clear_mask                     0xBF

#define TRISJ6                                   0x6
#define TRISJ6_address                           0xF9A
#define TRISJ6_position                          0x6
#define TRISJ6_size                              0x1
#define TRISJ6_value_mask                        0x40
#define TRISJ6_clear_mask                        0xBF

#define TRISJ_RJ7                                0x7
#define TRISJ_RJ7_address                        0xF9A
#define TRISJ_RJ7_position                       0x7
#define TRISJ_RJ7_size                           0x1
#define TRISJ_RJ7_value_mask                     0x80
#define TRISJ_RJ7_clear_mask                     0x7F

#define TRISJ7                                   0x7
#define TRISJ7_address                           0xF9A
#define TRISJ7_position                          0x7
#define TRISJ7_size                              0x1
#define TRISJ7_value_mask                        0x80
#define TRISJ7_clear_mask                        0x7F


/*------------------------------------------------------#
| OSCTUNE                                         0xF9B |
#-------------------------------------------------------#
| INTSRC | PLLEN | - | TUN4 | TUN3 | TUN2 | TUN1 | TUN0 |
#-------------------------------------------------------#
| 7      | 6     | 5 | 4    | 3    | 2    | 1    | 0    |
#------------------------------------------------------*/

#define OSCTUNE                                  0x0
#define OSCTUNE_address                          0xF9B
#define OSCTUNE_position                         0x0
#define OSCTUNE_size                             0x8
#define OSCTUNE_value_mask                       0xFF
#define OSCTUNE_clear_mask                       0x0

#define TUN0                                     0x0
#define TUN0_address                             0xF9B
#define TUN0_position                            0x0
#define TUN0_size                                0x1
#define TUN0_value_mask                          0x1
#define TUN0_clear_mask                          0xFE

#define TUN                                      0x0
#define TUN_address                              0xF9B
#define TUN_position                             0x0
#define TUN_size                                 0x5
#define TUN_value_mask                           0x1F
#define TUN_clear_mask                           0xE0

#define TUN1                                     0x1
#define TUN1_address                             0xF9B
#define TUN1_position                            0x1
#define TUN1_size                                0x1
#define TUN1_value_mask                          0x2
#define TUN1_clear_mask                          0xFD

#define TUN2                                     0x2
#define TUN2_address                             0xF9B
#define TUN2_position                            0x2
#define TUN2_size                                0x1
#define TUN2_value_mask                          0x4
#define TUN2_clear_mask                          0xFB

#define TUN3                                     0x3
#define TUN3_address                             0xF9B
#define TUN3_position                            0x3
#define TUN3_size                                0x1
#define TUN3_value_mask                          0x8
#define TUN3_clear_mask                          0xF7

#define TUN4                                     0x4
#define TUN4_address                             0xF9B
#define TUN4_position                            0x4
#define TUN4_size                                0x1
#define TUN4_value_mask                          0x10
#define TUN4_clear_mask                          0xEF

#define PLLEN                                    0x6
#define PLLEN_address                            0xF9B
#define PLLEN_position                           0x6
#define PLLEN_size                               0x1
#define PLLEN_value_mask                         0x40
#define PLLEN_clear_mask                         0xBF

#define INTSRC                                   0x7
#define INTSRC_address                           0xF9B
#define INTSRC_position                          0x7
#define INTSRC_size                              0x1
#define INTSRC_value_mask                        0x80
#define INTSRC_clear_mask                        0x7F


/*----------------------------------------------#
| MEMCON                                  0xF9C |
#-----------------------------------------------#
| EBDIS | - | WAIT1 | WAIT0 | - | - | WM1 | WM0 |
#-----------------------------------------------#
| 7     | 6 | 5     | 4     | 3 | 2 | 1   | 0   |
#----------------------------------------------*/

#define MEMCON                                   0x0
#define MEMCON_address                           0xF9C
#define MEMCON_position                          0x0
#define MEMCON_size                              0x8
#define MEMCON_value_mask                        0xFF
#define MEMCON_clear_mask                        0x0

#define WM                                       0x0
#define WM_address                               0xF9C
#define WM_position                              0x0
#define WM_size                                  0x2
#define WM_value_mask                            0x3
#define WM_clear_mask                            0xFC

#define WM0                                      0x0
#define WM0_address                              0xF9C
#define WM0_position                             0x0
#define WM0_size                                 0x1
#define WM0_value_mask                           0x1
#define WM0_clear_mask                           0xFE

#define WM1                                      0x1
#define WM1_address                              0xF9C
#define WM1_position                             0x1
#define WM1_size                                 0x1
#define WM1_value_mask                           0x2
#define WM1_clear_mask                           0xFD

#define WAIT0                                    0x4
#define WAIT0_address                            0xF9C
#define WAIT0_position                           0x4
#define WAIT0_size                               0x1
#define WAIT0_value_mask                         0x10
#define WAIT0_clear_mask                         0xEF

#define WAIT                                     0x4
#define WAIT_address                             0xF9C
#define WAIT_position                            0x4
#define WAIT_size                                0x2
#define WAIT_value_mask                          0x30
#define WAIT_clear_mask                          0xCF

#define WAIT1                                    0x5
#define WAIT1_address                            0xF9C
#define WAIT1_position                           0x5
#define WAIT1_size                               0x1
#define WAIT1_value_mask                         0x20
#define WAIT1_clear_mask                         0xDF

#define EBDIS                                    0x7
#define EBDIS_address                            0xF9C
#define EBDIS_position                           0x7
#define EBDIS_size                               0x1
#define EBDIS_value_mask                         0x80
#define EBDIS_clear_mask                         0x7F


/*----------------------------------------------------------#
| PIE1                                                0xF9D |
#-----------------------------------------------------------#
| - | ADIE | RCIE | TXIE | SSPIE | CCP1IE | TMR2IE | TMR1IE |
#-----------------------------------------------------------#
| 7 | 6    | 5    | 4    | 3     | 2      | 1      | 0      |
#----------------------------------------------------------*/

#define PIE1                                     0x0
#define PIE1_address                             0xF9D
#define PIE1_position                            0x0
#define PIE1_size                                0x8
#define PIE1_value_mask                          0xFF
#define PIE1_clear_mask                          0x0

#define TMR1IE                                   0x0
#define TMR1IE_address                           0xF9D
#define TMR1IE_position                          0x0
#define TMR1IE_size                              0x1
#define TMR1IE_value_mask                        0x1
#define TMR1IE_clear_mask                        0xFE

#define TMR2IE                                   0x1
#define TMR2IE_address                           0xF9D
#define TMR2IE_position                          0x1
#define TMR2IE_size                              0x1
#define TMR2IE_value_mask                        0x2
#define TMR2IE_clear_mask                        0xFD

#define CCP1IE                                   0x2
#define CCP1IE_address                           0xF9D
#define CCP1IE_position                          0x2
#define CCP1IE_size                              0x1
#define CCP1IE_value_mask                        0x4
#define CCP1IE_clear_mask                        0xFB

#define SSPIE                                    0x3
#define SSPIE_address                            0xF9D
#define SSPIE_position                           0x3
#define SSPIE_size                               0x1
#define SSPIE_value_mask                         0x8
#define SSPIE_clear_mask                         0xF7

#define TXIE                                     0x4
#define TXIE_address                             0xF9D
#define TXIE_position                            0x4
#define TXIE_size                                0x1
#define TXIE_value_mask                          0x10
#define TXIE_clear_mask                          0xEF

#define TX1IE                                    0x4
#define TX1IE_address                            0xF9D
#define TX1IE_position                           0x4
#define TX1IE_size                               0x1
#define TX1IE_value_mask                         0x10
#define TX1IE_clear_mask                         0xEF

#define RCIE                                     0x5
#define RCIE_address                             0xF9D
#define RCIE_position                            0x5
#define RCIE_size                                0x1
#define RCIE_value_mask                          0x20
#define RCIE_clear_mask                          0xDF

#define RC1IE                                    0x5
#define RC1IE_address                            0xF9D
#define RC1IE_position                           0x5
#define RC1IE_size                               0x1
#define RC1IE_value_mask                         0x20
#define RC1IE_clear_mask                         0xDF

#define ADIE                                     0x6
#define ADIE_address                             0xF9D
#define ADIE_position                            0x6
#define ADIE_size                                0x1
#define ADIE_value_mask                          0x40
#define ADIE_clear_mask                          0xBF


/*----------------------------------------------------------#
| PIR1                                                0xF9E |
#-----------------------------------------------------------#
| - | ADIF | RCIF | TXIF | SSPIF | CCP1IF | TMR2IF | TMR1IF |
#-----------------------------------------------------------#
| 7 | 6    | 5    | 4    | 3     | 2      | 1      | 0      |
#----------------------------------------------------------*/

#define PIR1                                     0x0
#define PIR1_address                             0xF9E
#define PIR1_position                            0x0
#define PIR1_size                                0x8
#define PIR1_value_mask                          0xFF
#define PIR1_clear_mask                          0x0

#define TMR1IF                                   0x0
#define TMR1IF_address                           0xF9E
#define TMR1IF_position                          0x0
#define TMR1IF_size                              0x1
#define TMR1IF_value_mask                        0x1
#define TMR1IF_clear_mask                        0xFE

#define TMR2IF                                   0x1
#define TMR2IF_address                           0xF9E
#define TMR2IF_position                          0x1
#define TMR2IF_size                              0x1
#define TMR2IF_value_mask                        0x2
#define TMR2IF_clear_mask                        0xFD

#define CCP1IF                                   0x2
#define CCP1IF_address                           0xF9E
#define CCP1IF_position                          0x2
#define CCP1IF_size                              0x1
#define CCP1IF_value_mask                        0x4
#define CCP1IF_clear_mask                        0xFB

#define SSPIF                                    0x3
#define SSPIF_address                            0xF9E
#define SSPIF_position                           0x3
#define SSPIF_size                               0x1
#define SSPIF_value_mask                         0x8
#define SSPIF_clear_mask                         0xF7

#define TXIF                                     0x4
#define TXIF_address                             0xF9E
#define TXIF_position                            0x4
#define TXIF_size                                0x1
#define TXIF_value_mask                          0x10
#define TXIF_clear_mask                          0xEF

#define TX1IF                                    0x4
#define TX1IF_address                            0xF9E
#define TX1IF_position                           0x4
#define TX1IF_size                               0x1
#define TX1IF_value_mask                         0x10
#define TX1IF_clear_mask                         0xEF

#define RCIF                                     0x5
#define RCIF_address                             0xF9E
#define RCIF_position                            0x5
#define RCIF_size                                0x1
#define RCIF_value_mask                          0x20
#define RCIF_clear_mask                          0xDF

#define RC1IF                                    0x5
#define RC1IF_address                            0xF9E
#define RC1IF_position                           0x5
#define RC1IF_size                               0x1
#define RC1IF_value_mask                         0x20
#define RC1IF_clear_mask                         0xDF

#define ADIF                                     0x6
#define ADIF_address                             0xF9E
#define ADIF_position                            0x6
#define ADIF_size                                0x1
#define ADIF_value_mask                          0x40
#define ADIF_clear_mask                          0xBF


/*-----------------------------------------------------------#
| IPR1                                                 0xF9F |
#------------------------------------------------------------#
| - | ADIP | RCIP | TX1IP | SSPIP | CCP1IP | TMR2IP | TMR1IP |
#------------------------------------------------------------#
| 7 | 6    | 5    | 4     | 3     | 2      | 1      | 0      |
#-----------------------------------------------------------*/

#define IPR1                                     0x0
#define IPR1_address                             0xF9F
#define IPR1_position                            0x0
#define IPR1_size                                0x8
#define IPR1_value_mask                          0xFF
#define IPR1_clear_mask                          0x0

#define TMR1IP                                   0x0
#define TMR1IP_address                           0xF9F
#define TMR1IP_position                          0x0
#define TMR1IP_size                              0x1
#define TMR1IP_value_mask                        0x1
#define TMR1IP_clear_mask                        0xFE

#define TMR2IP                                   0x1
#define TMR2IP_address                           0xF9F
#define TMR2IP_position                          0x1
#define TMR2IP_size                              0x1
#define TMR2IP_value_mask                        0x2
#define TMR2IP_clear_mask                        0xFD

#define CCP1IP                                   0x2
#define CCP1IP_address                           0xF9F
#define CCP1IP_position                          0x2
#define CCP1IP_size                              0x1
#define CCP1IP_value_mask                        0x4
#define CCP1IP_clear_mask                        0xFB

#define SSPIP                                    0x3
#define SSPIP_address                            0xF9F
#define SSPIP_position                           0x3
#define SSPIP_size                               0x1
#define SSPIP_value_mask                         0x8
#define SSPIP_clear_mask                         0xF7

#define TX1IP                                    0x4
#define TX1IP_address                            0xF9F
#define TX1IP_position                           0x4
#define TX1IP_size                               0x1
#define TX1IP_value_mask                         0x10
#define TX1IP_clear_mask                         0xEF

#define TXIP                                     0x4
#define TXIP_address                             0xF9F
#define TXIP_position                            0x4
#define TXIP_size                                0x1
#define TXIP_value_mask                          0x10
#define TXIP_clear_mask                          0xEF

#define RC1IP                                    0x5
#define RC1IP_address                            0xF9F
#define RC1IP_position                           0x5
#define RC1IP_size                               0x1
#define RC1IP_value_mask                         0x20
#define RC1IP_clear_mask                         0xDF

#define RCIP                                     0x5
#define RCIP_address                             0xF9F
#define RCIP_position                            0x5
#define RCIP_size                                0x1
#define RCIP_value_mask                          0x20
#define RCIP_clear_mask                          0xDF

#define ADIP                                     0x6
#define ADIP_address                             0xF9F
#define ADIP_position                            0x6
#define ADIP_size                                0x1
#define ADIP_value_mask                          0x40
#define ADIP_clear_mask                          0xBF


/*---------------------------------------------------------#
| PIE2                                               0xFA0 |
#----------------------------------------------------------#
| OSCFIE | CMIE | - | - | BCLIE | HLVDIE | TMR3IE | CCP2IE |
#----------------------------------------------------------#
| 7      | 6    | 5 | 4 | 3     | 2      | 1      | 0      |
#---------------------------------------------------------*/

#define PIE2                                     0x0
#define PIE2_address                             0xFA0
#define PIE2_position                            0x0
#define PIE2_size                                0x8
#define PIE2_value_mask                          0xFF
#define PIE2_clear_mask                          0x0

#define CCP2IE                                   0x0
#define CCP2IE_address                           0xFA0
#define CCP2IE_position                          0x0
#define CCP2IE_size                              0x1
#define CCP2IE_value_mask                        0x1
#define CCP2IE_clear_mask                        0xFE

#define TMR3IE                                   0x1
#define TMR3IE_address                           0xFA0
#define TMR3IE_position                          0x1
#define TMR3IE_size                              0x1
#define TMR3IE_value_mask                        0x2
#define TMR3IE_clear_mask                        0xFD

#define HLVDIE                                   0x2
#define HLVDIE_address                           0xFA0
#define HLVDIE_position                          0x2
#define HLVDIE_size                              0x1
#define HLVDIE_value_mask                        0x4
#define HLVDIE_clear_mask                        0xFB

#define LVDIE                                    0x2
#define LVDIE_address                            0xFA0
#define LVDIE_position                           0x2
#define LVDIE_size                               0x1
#define LVDIE_value_mask                         0x4
#define LVDIE_clear_mask                         0xFB

#define BCLIE                                    0x3
#define BCLIE_address                            0xFA0
#define BCLIE_position                           0x3
#define BCLIE_size                               0x1
#define BCLIE_value_mask                         0x8
#define BCLIE_clear_mask                         0xF7

#define CMIE                                     0x6
#define CMIE_address                             0xFA0
#define CMIE_position                            0x6
#define CMIE_size                                0x1
#define CMIE_value_mask                          0x40
#define CMIE_clear_mask                          0xBF

#define OSCFIE                                   0x7
#define OSCFIE_address                           0xFA0
#define OSCFIE_position                          0x7
#define OSCFIE_size                              0x1
#define OSCFIE_value_mask                        0x80
#define OSCFIE_clear_mask                        0x7F


/*---------------------------------------------------------#
| PIR2                                               0xFA1 |
#----------------------------------------------------------#
| OSCFIF | CMIF | - | - | BCLIF | HLVDIF | TMR3IF | CCP2IF |
#----------------------------------------------------------#
| 7      | 6    | 5 | 4 | 3     | 2      | 1      | 0      |
#---------------------------------------------------------*/

#define PIR2                                     0x0
#define PIR2_address                             0xFA1
#define PIR2_position                            0x0
#define PIR2_size                                0x8
#define PIR2_value_mask                          0xFF
#define PIR2_clear_mask                          0x0

#define CCP2IF                                   0x0
#define CCP2IF_address                           0xFA1
#define CCP2IF_position                          0x0
#define CCP2IF_size                              0x1
#define CCP2IF_value_mask                        0x1
#define CCP2IF_clear_mask                        0xFE

#define TMR3IF                                   0x1
#define TMR3IF_address                           0xFA1
#define TMR3IF_position                          0x1
#define TMR3IF_size                              0x1
#define TMR3IF_value_mask                        0x2
#define TMR3IF_clear_mask                        0xFD

#define HLVDIF                                   0x2
#define HLVDIF_address                           0xFA1
#define HLVDIF_position                          0x2
#define HLVDIF_size                              0x1
#define HLVDIF_value_mask                        0x4
#define HLVDIF_clear_mask                        0xFB

#define LVDIF                                    0x2
#define LVDIF_address                            0xFA1
#define LVDIF_position                           0x2
#define LVDIF_size                               0x1
#define LVDIF_value_mask                         0x4
#define LVDIF_clear_mask                         0xFB

#define BCLIF                                    0x3
#define BCLIF_address                            0xFA1
#define BCLIF_position                           0x3
#define BCLIF_size                               0x1
#define BCLIF_value_mask                         0x8
#define BCLIF_clear_mask                         0xF7

#define CMIF                                     0x6
#define CMIF_address                             0xFA1
#define CMIF_position                            0x6
#define CMIF_size                                0x1
#define CMIF_value_mask                          0x40
#define CMIF_clear_mask                          0xBF

#define OSCFIF                                   0x7
#define OSCFIF_address                           0xFA1
#define OSCFIF_position                          0x7
#define OSCFIF_size                              0x1
#define OSCFIF_value_mask                        0x80
#define OSCFIF_clear_mask                        0x7F


/*---------------------------------------------------------#
| IPR2                                               0xFA2 |
#----------------------------------------------------------#
| OSCFIP | CMIP | - | - | BCLIP | HLVDIP | TMR3IP | CCP2IP |
#----------------------------------------------------------#
| 7      | 6    | 5 | 4 | 3     | 2      | 1      | 0      |
#---------------------------------------------------------*/

#define IPR2                                     0x0
#define IPR2_address                             0xFA2
#define IPR2_position                            0x0
#define IPR2_size                                0x8
#define IPR2_value_mask                          0xFF
#define IPR2_clear_mask                          0x0

#define CCP2IP                                   0x0
#define CCP2IP_address                           0xFA2
#define CCP2IP_position                          0x0
#define CCP2IP_size                              0x1
#define CCP2IP_value_mask                        0x1
#define CCP2IP_clear_mask                        0xFE

#define TMR3IP                                   0x1
#define TMR3IP_address                           0xFA2
#define TMR3IP_position                          0x1
#define TMR3IP_size                              0x1
#define TMR3IP_value_mask                        0x2
#define TMR3IP_clear_mask                        0xFD

#define HLVDIP                                   0x2
#define HLVDIP_address                           0xFA2
#define HLVDIP_position                          0x2
#define HLVDIP_size                              0x1
#define HLVDIP_value_mask                        0x4
#define HLVDIP_clear_mask                        0xFB

#define LVDIP                                    0x2
#define LVDIP_address                            0xFA2
#define LVDIP_position                           0x2
#define LVDIP_size                               0x1
#define LVDIP_value_mask                         0x4
#define LVDIP_clear_mask                         0xFB

#define BCLIP                                    0x3
#define BCLIP_address                            0xFA2
#define BCLIP_position                           0x3
#define BCLIP_size                               0x1
#define BCLIP_value_mask                         0x8
#define BCLIP_clear_mask                         0xF7

#define CMIP                                     0x6
#define CMIP_address                             0xFA2
#define CMIP_position                            0x6
#define CMIP_size                                0x1
#define CMIP_value_mask                          0x40
#define CMIP_clear_mask                          0xBF

#define OSCFIP                                   0x7
#define OSCFIP_address                           0xFA2
#define OSCFIP_position                          0x7
#define OSCFIP_size                              0x1
#define OSCFIP_value_mask                        0x80
#define OSCFIP_clear_mask                        0x7F


/*-------------------------------------------#
| PIE3                                 0xFA3 |
#--------------------------------------------#
| - | LCDIE | RC2IE | TXB2IE | - | - | - | - |
#--------------------------------------------#
| 7 | 6     | 5     | 4      | 3 | 2 | 1 | 0 |
#-------------------------------------------*/

#define PIE3                                     0x0
#define PIE3_address                             0xFA3
#define PIE3_position                            0x0
#define PIE3_size                                0x8
#define PIE3_value_mask                          0xFF
#define PIE3_clear_mask                          0x0

#define TXB2IE                                   0x4
#define TXB2IE_address                           0xFA3
#define TXB2IE_position                          0x4
#define TXB2IE_size                              0x1
#define TXB2IE_value_mask                        0x10
#define TXB2IE_clear_mask                        0xEF

#define TX2IE                                    0x4
#define TX2IE_address                            0xFA3
#define TX2IE_position                           0x4
#define TX2IE_size                               0x1
#define TX2IE_value_mask                         0x10
#define TX2IE_clear_mask                         0xEF

#define TXBNIE                                   0x4
#define TXBNIE_address                           0xFA3
#define TXBNIE_position                          0x4
#define TXBNIE_size                              0x1
#define TXBNIE_value_mask                        0x10
#define TXBNIE_clear_mask                        0xEF

#define RC2IE                                    0x5
#define RC2IE_address                            0xFA3
#define RC2IE_position                           0x5
#define RC2IE_size                               0x1
#define RC2IE_value_mask                         0x20
#define RC2IE_clear_mask                         0xDF

#define LCDIE                                    0x6
#define LCDIE_address                            0xFA3
#define LCDIE_position                           0x6
#define LCDIE_size                               0x1
#define LCDIE_value_mask                         0x40
#define LCDIE_clear_mask                         0xBF


/*------------------------------------------#
| PIR3                                0xFA4 |
#-------------------------------------------#
| - | LCDIF | RC2IF | TX2IF | - | - | - | - |
#-------------------------------------------#
| 7 | 6     | 5     | 4     | 3 | 2 | 1 | 0 |
#------------------------------------------*/

#define PIR3                                     0x0
#define PIR3_address                             0xFA4
#define PIR3_position                            0x0
#define PIR3_size                                0x8
#define PIR3_value_mask                          0xFF
#define PIR3_clear_mask                          0x0

#define TX2IF                                    0x4
#define TX2IF_address                            0xFA4
#define TX2IF_position                           0x4
#define TX2IF_size                               0x1
#define TX2IF_value_mask                         0x10
#define TX2IF_clear_mask                         0xEF

#define TXBNIF                                   0x4
#define TXBNIF_address                           0xFA4
#define TXBNIF_position                          0x4
#define TXBNIF_size                              0x1
#define TXBNIF_value_mask                        0x10
#define TXBNIF_clear_mask                        0xEF

#define RC2IF                                    0x5
#define RC2IF_address                            0xFA4
#define RC2IF_position                           0x5
#define RC2IF_size                               0x1
#define RC2IF_value_mask                         0x20
#define RC2IF_clear_mask                         0xDF

#define LCDIF                                    0x6
#define LCDIF_address                            0xFA4
#define LCDIF_position                           0x6
#define LCDIF_size                               0x1
#define LCDIF_value_mask                         0x40
#define LCDIF_clear_mask                         0xBF


/*-------------------------------------------#
| IPR3                                 0xFA5 |
#--------------------------------------------#
| - | LCDIP | RC2IP | TXBNIP | - | - | - | - |
#--------------------------------------------#
| 7 | 6     | 5     | 4      | 3 | 2 | 1 | 0 |
#-------------------------------------------*/

#define IPR3                                     0x0
#define IPR3_address                             0xFA5
#define IPR3_position                            0x0
#define IPR3_size                                0x8
#define IPR3_value_mask                          0xFF
#define IPR3_clear_mask                          0x0

#define TXBNIP                                   0x4
#define TXBNIP_address                           0xFA5
#define TXBNIP_position                          0x4
#define TXBNIP_size                              0x1
#define TXBNIP_value_mask                        0x10
#define TXBNIP_clear_mask                        0xEF

#define TX2IP                                    0x4
#define TX2IP_address                            0xFA5
#define TX2IP_position                           0x4
#define TX2IP_size                               0x1
#define TX2IP_value_mask                         0x10
#define TX2IP_clear_mask                         0xEF

#define RC2IP                                    0x5
#define RC2IP_address                            0xFA5
#define RC2IP_position                           0x5
#define RC2IP_size                               0x1
#define RC2IP_value_mask                         0x20
#define RC2IP_clear_mask                         0xDF

#define LCDIP                                    0x6
#define LCDIP_address                            0xFA5
#define LCDIP_position                           0x6
#define LCDIP_size                               0x1
#define LCDIP_value_mask                         0x40
#define LCDIP_clear_mask                         0xBF


/*---------------------------------------------------------------------------------------------------------#
| RCSTA1                                                                                             0xFAB |
#----------------------------------------------------------------------------------------------------------#
| RCSTA1_SPEN | RCSTA1_RC8_9 | RCSTA1_SREN | RCSTA1_CREN | RCSTA1_ADEN | RCSTA1_FERR | RCSTA1_OERR | RX9D1 |
#----------------------------------------------------------------------------------------------------------#
| 7           | 6            | 5           | 4           | 3           | 2           | 1           | 0     |
#---------------------------------------------------------------------------------------------------------*/

#define RCSTA1                                   0x0
#define RCSTA1_address                           0xFAB
#define RCSTA1_position                          0x0
#define RCSTA1_size                              0x8
#define RCSTA1_value_mask                        0xFF
#define RCSTA1_clear_mask                        0x0

#define RCSTA1_RX9D                              0x0
#define RCSTA1_RX9D_address                      0xFAB
#define RCSTA1_RX9D_position                     0x0
#define RCSTA1_RX9D_size                         0x1
#define RCSTA1_RX9D_value_mask                   0x1
#define RCSTA1_RX9D_clear_mask                   0xFE

#define RX9D1                                    0x0
#define RX9D1_address                            0xFAB
#define RX9D1_position                           0x0
#define RX9D1_size                               0x1
#define RX9D1_value_mask                         0x1
#define RX9D1_clear_mask                         0xFE

#define RCSTA1_RCD8                              0x0
#define RCSTA1_RCD8_address                      0xFAB
#define RCSTA1_RCD8_position                     0x0
#define RCSTA1_RCD8_size                         0x1
#define RCSTA1_RCD8_value_mask                   0x1
#define RCSTA1_RCD8_clear_mask                   0xFE

#define RCSTA1_OERR                              0x1
#define RCSTA1_OERR_address                      0xFAB
#define RCSTA1_OERR_position                     0x1
#define RCSTA1_OERR_size                         0x1
#define RCSTA1_OERR_value_mask                   0x2
#define RCSTA1_OERR_clear_mask                   0xFD

#define OERR1                                    0x1
#define OERR1_address                            0xFAB
#define OERR1_position                           0x1
#define OERR1_size                               0x1
#define OERR1_value_mask                         0x2
#define OERR1_clear_mask                         0xFD

#define RCSTA1_FERR                              0x2
#define RCSTA1_FERR_address                      0xFAB
#define RCSTA1_FERR_position                     0x2
#define RCSTA1_FERR_size                         0x1
#define RCSTA1_FERR_value_mask                   0x4
#define RCSTA1_FERR_clear_mask                   0xFB

#define FERR1                                    0x2
#define FERR1_address                            0xFAB
#define FERR1_position                           0x2
#define FERR1_size                               0x1
#define FERR1_value_mask                         0x4
#define FERR1_clear_mask                         0xFB

#define RCSTA1_ADDEN                             0x3
#define RCSTA1_ADDEN_address                     0xFAB
#define RCSTA1_ADDEN_position                    0x3
#define RCSTA1_ADDEN_size                        0x1
#define RCSTA1_ADDEN_value_mask                  0x8
#define RCSTA1_ADDEN_clear_mask                  0xF7

#define RCSTA1_ADEN                              0x3
#define RCSTA1_ADEN_address                      0xFAB
#define RCSTA1_ADEN_position                     0x3
#define RCSTA1_ADEN_size                         0x1
#define RCSTA1_ADEN_value_mask                   0x8
#define RCSTA1_ADEN_clear_mask                   0xF7

#define ADDEN1                                   0x3
#define ADDEN1_address                           0xFAB
#define ADDEN1_position                          0x3
#define ADDEN1_size                              0x1
#define ADDEN1_value_mask                        0x8
#define ADDEN1_clear_mask                        0xF7

#define RCSTA1_CREN                              0x4
#define RCSTA1_CREN_address                      0xFAB
#define RCSTA1_CREN_position                     0x4
#define RCSTA1_CREN_size                         0x1
#define RCSTA1_CREN_value_mask                   0x10
#define RCSTA1_CREN_clear_mask                   0xEF

#define CREN1                                    0x4
#define CREN1_address                            0xFAB
#define CREN1_position                           0x4
#define CREN1_size                               0x1
#define CREN1_value_mask                         0x10
#define CREN1_clear_mask                         0xEF

#define SRENA                                    0x5
#define SRENA_address                            0xFAB
#define SRENA_position                           0x5
#define SRENA_size                               0x1
#define SRENA_value_mask                         0x20
#define SRENA_clear_mask                         0xDF

#define SREN1                                    0x5
#define SREN1_address                            0xFAB
#define SREN1_position                           0x5
#define SREN1_size                               0x1
#define SREN1_value_mask                         0x20
#define SREN1_clear_mask                         0xDF

#define RCSTA1_SREN                              0x5
#define RCSTA1_SREN_address                      0xFAB
#define RCSTA1_SREN_position                     0x5
#define RCSTA1_SREN_size                         0x1
#define RCSTA1_SREN_value_mask                   0x20
#define RCSTA1_SREN_clear_mask                   0xDF

#define RCSTA1_RC9                               0x6
#define RCSTA1_RC9_address                       0xFAB
#define RCSTA1_RC9_position                      0x6
#define RCSTA1_RC9_size                          0x1
#define RCSTA1_RC9_value_mask                    0x40
#define RCSTA1_RC9_clear_mask                    0xBF

#define RCSTA1_RC8_9                             0x6
#define RCSTA1_RC8_9_address                     0xFAB
#define RCSTA1_RC8_9_position                    0x6
#define RCSTA1_RC8_9_size                        0x1
#define RCSTA1_RC8_9_value_mask                  0x40
#define RCSTA1_RC8_9_clear_mask                  0xBF

#define RCSTA1_RX9                               0x6
#define RCSTA1_RX9_address                       0xFAB
#define RCSTA1_RX9_position                      0x6
#define RCSTA1_RX9_size                          0x1
#define RCSTA1_RX9_value_mask                    0x40
#define RCSTA1_RX9_clear_mask                    0xBF

#define RX91                                     0x6
#define RX91_address                             0xFAB
#define RX91_position                            0x6
#define RX91_size                                0x1
#define RX91_value_mask                          0x40
#define RX91_clear_mask                          0xBF

#define RCSTA1_SPEN                              0x7
#define RCSTA1_SPEN_address                      0xFAB
#define RCSTA1_SPEN_position                     0x7
#define RCSTA1_SPEN_size                         0x1
#define RCSTA1_SPEN_value_mask                   0x80
#define RCSTA1_SPEN_clear_mask                   0x7F

#define SPEN1                                    0x7
#define SPEN1_address                            0xFAB
#define SPEN1_position                           0x7
#define SPEN1_size                               0x1
#define SPEN1_value_mask                         0x80
#define SPEN1_clear_mask                         0x7F


/*--------------------------------------------------------------------------------------#
| TXSTA1                                                                          0xFAC |
#---------------------------------------------------------------------------------------#
| CSRC1 | TX91 | TXSTA1_TXEN | SYNC1 | SENDB1 | TXSTA1_BRGH | TXSTA1_TRMT | TXSTA1_TXD8 |
#---------------------------------------------------------------------------------------#
| 7     | 6    | 5           | 4     | 3      | 2           | 1           | 0           |
#--------------------------------------------------------------------------------------*/

#define TXSTA1                                   0x0
#define TXSTA1_address                           0xFAC
#define TXSTA1_position                          0x0
#define TXSTA1_size                              0x8
#define TXSTA1_value_mask                        0xFF
#define TXSTA1_clear_mask                        0x0

#define TX9D1                                    0x0
#define TX9D1_address                            0xFAC
#define TX9D1_position                           0x0
#define TX9D1_size                               0x1
#define TX9D1_value_mask                         0x1
#define TX9D1_clear_mask                         0xFE

#define TXSTA1_TX9D                              0x0
#define TXSTA1_TX9D_address                      0xFAC
#define TXSTA1_TX9D_position                     0x0
#define TXSTA1_TX9D_size                         0x1
#define TXSTA1_TX9D_value_mask                   0x1
#define TXSTA1_TX9D_clear_mask                   0xFE

#define TXSTA1_TXD8                              0x0
#define TXSTA1_TXD8_address                      0xFAC
#define TXSTA1_TXD8_position                     0x0
#define TXSTA1_TXD8_size                         0x1
#define TXSTA1_TXD8_value_mask                   0x1
#define TXSTA1_TXD8_clear_mask                   0xFE

#define TRMT1                                    0x1
#define TRMT1_address                            0xFAC
#define TRMT1_position                           0x1
#define TRMT1_size                               0x1
#define TRMT1_value_mask                         0x2
#define TRMT1_clear_mask                         0xFD

#define TXSTA1_TRMT                              0x1
#define TXSTA1_TRMT_address                      0xFAC
#define TXSTA1_TRMT_position                     0x1
#define TXSTA1_TRMT_size                         0x1
#define TXSTA1_TRMT_value_mask                   0x2
#define TXSTA1_TRMT_clear_mask                   0xFD

#define BRGH1                                    0x2
#define BRGH1_address                            0xFAC
#define BRGH1_position                           0x2
#define BRGH1_size                               0x1
#define BRGH1_value_mask                         0x4
#define BRGH1_clear_mask                         0xFB

#define TXSTA1_BRGH                              0x2
#define TXSTA1_BRGH_address                      0xFAC
#define TXSTA1_BRGH_position                     0x2
#define TXSTA1_BRGH_size                         0x1
#define TXSTA1_BRGH_value_mask                   0x4
#define TXSTA1_BRGH_clear_mask                   0xFB

#define SENDB1                                   0x3
#define SENDB1_address                           0xFAC
#define SENDB1_position                          0x3
#define SENDB1_size                              0x1
#define SENDB1_value_mask                        0x8
#define SENDB1_clear_mask                        0xF7

#define SENDB                                    0x3
#define SENDB_address                            0xFAC
#define SENDB_position                           0x3
#define SENDB_size                               0x1
#define SENDB_value_mask                         0x8
#define SENDB_clear_mask                         0xF7

#define TXSTA1_SYNC                              0x4
#define TXSTA1_SYNC_address                      0xFAC
#define TXSTA1_SYNC_position                     0x4
#define TXSTA1_SYNC_size                         0x1
#define TXSTA1_SYNC_value_mask                   0x10
#define TXSTA1_SYNC_clear_mask                   0xEF

#define SYNC1                                    0x4
#define SYNC1_address                            0xFAC
#define SYNC1_position                           0x4
#define SYNC1_size                               0x1
#define SYNC1_value_mask                         0x10
#define SYNC1_clear_mask                         0xEF

#define TXEN1                                    0x5
#define TXEN1_address                            0xFAC
#define TXEN1_position                           0x5
#define TXEN1_size                               0x1
#define TXEN1_value_mask                         0x20
#define TXEN1_clear_mask                         0xDF

#define TXSTA1_TXEN                              0x5
#define TXSTA1_TXEN_address                      0xFAC
#define TXSTA1_TXEN_position                     0x5
#define TXSTA1_TXEN_size                         0x1
#define TXSTA1_TXEN_value_mask                   0x20
#define TXSTA1_TXEN_clear_mask                   0xDF

#define TX91                                     0x6
#define TX91_address                             0xFAC
#define TX91_position                            0x6
#define TX91_size                                0x1
#define TX91_value_mask                          0x40
#define TX91_clear_mask                          0xBF

#define TXSTA1_TX8_9                             0x6
#define TXSTA1_TX8_9_address                     0xFAC
#define TXSTA1_TX8_9_position                    0x6
#define TXSTA1_TX8_9_size                        0x1
#define TXSTA1_TX8_9_value_mask                  0x40
#define TXSTA1_TX8_9_clear_mask                  0xBF

#define TXSTA1_TX9                               0x6
#define TXSTA1_TX9_address                       0xFAC
#define TXSTA1_TX9_position                      0x6
#define TXSTA1_TX9_size                          0x1
#define TXSTA1_TX9_value_mask                    0x40
#define TXSTA1_TX9_clear_mask                    0xBF

#define TXSTA1_CSRC                              0x7
#define TXSTA1_CSRC_address                      0xFAC
#define TXSTA1_CSRC_position                     0x7
#define TXSTA1_CSRC_size                         0x1
#define TXSTA1_CSRC_value_mask                   0x80
#define TXSTA1_CSRC_clear_mask                   0x7F

#define CSRC1                                    0x7
#define CSRC1_address                            0xFAC
#define CSRC1_position                           0x7
#define CSRC1_size                               0x1
#define CSRC1_value_mask                         0x80
#define CSRC1_clear_mask                         0x7F


/*------------------------------------------------------------------------------#
| T3CON                                                                   0xFB1 |
#-------------------------------------------------------------------------------#
| T3CON_RD16 | T3CCP2 | T3CKPS1 | T3CKPS0 | SOSCEN3 | nT3SYNC | TMR3CS | TMR3ON |
#-------------------------------------------------------------------------------#
| 7          | 6      | 5       | 4       | 3       | 2       | 1      | 0      |
#------------------------------------------------------------------------------*/

#define T3CON                                    0x0
#define T3CON_address                            0xFB1
#define T3CON_position                           0x0
#define T3CON_size                               0x8
#define T3CON_value_mask                         0xFF
#define T3CON_clear_mask                         0x0

#define TMR3ON                                   0x0
#define TMR3ON_address                           0xFB1
#define TMR3ON_position                          0x0
#define TMR3ON_size                              0x1
#define TMR3ON_value_mask                        0x1
#define TMR3ON_clear_mask                        0xFE

#define TMR3CS                                   0x1
#define TMR3CS_address                           0xFB1
#define TMR3CS_position                          0x1
#define TMR3CS_size                              0x1
#define TMR3CS_value_mask                        0x2
#define TMR3CS_clear_mask                        0xFD

#define nT3SYNC                                  0x2
#define nT3SYNC_address                          0xFB1
#define nT3SYNC_position                         0x2
#define nT3SYNC_size                             0x1
#define nT3SYNC_value_mask                       0x4
#define nT3SYNC_clear_mask                       0xFB

#define NOT_T3SYNC                               0x2
#define NOT_T3SYNC_address                       0xFB1
#define NOT_T3SYNC_position                      0x2
#define NOT_T3SYNC_size                          0x1
#define NOT_T3SYNC_value_mask                    0x4
#define NOT_T3SYNC_clear_mask                    0xFB

#define T3SYNC                                   0x2
#define T3SYNC_address                           0xFB1
#define T3SYNC_position                          0x2
#define T3SYNC_size                              0x1
#define T3SYNC_value_mask                        0x4
#define T3SYNC_clear_mask                        0xFB

#define T3INSYNC                                 0x2
#define T3INSYNC_address                         0xFB1
#define T3INSYNC_position                        0x2
#define T3INSYNC_size                            0x1
#define T3INSYNC_value_mask                      0x4
#define T3INSYNC_clear_mask                      0xFB

#define SOSCEN3                                  0x3
#define SOSCEN3_address                          0xFB1
#define SOSCEN3_position                         0x3
#define SOSCEN3_size                             0x1
#define SOSCEN3_value_mask                       0x8
#define SOSCEN3_clear_mask                       0xF7

#define T3CCP1                                   0x3
#define T3CCP1_address                           0xFB1
#define T3CCP1_position                          0x3
#define T3CCP1_size                              0x1
#define T3CCP1_value_mask                        0x8
#define T3CCP1_clear_mask                        0xF7

#define T3CKPS                                   0x4
#define T3CKPS_address                           0xFB1
#define T3CKPS_position                          0x4
#define T3CKPS_size                              0x2
#define T3CKPS_value_mask                        0x30
#define T3CKPS_clear_mask                        0xCF

#define T3CKPS0                                  0x4
#define T3CKPS0_address                          0xFB1
#define T3CKPS0_position                         0x4
#define T3CKPS0_size                             0x1
#define T3CKPS0_value_mask                       0x10
#define T3CKPS0_clear_mask                       0xEF

#define T3CKPS1                                  0x5
#define T3CKPS1_address                          0xFB1
#define T3CKPS1_position                         0x5
#define T3CKPS1_size                             0x1
#define T3CKPS1_value_mask                       0x20
#define T3CKPS1_clear_mask                       0xDF

#define T3CCP2                                   0x6
#define T3CCP2_address                           0xFB1
#define T3CCP2_position                          0x6
#define T3CCP2_size                              0x1
#define T3CCP2_value_mask                        0x40
#define T3CCP2_clear_mask                        0xBF

#define T3CON_RD16                               0x7
#define T3CON_RD16_address                       0xFB1
#define T3CON_RD16_position                      0x7
#define T3CON_RD16_size                          0x1
#define T3CON_RD16_value_mask                    0x80
#define T3CON_RD16_clear_mask                    0x7F

#define RD163                                    0x7
#define RD163_address                            0xFB1
#define RD163_position                           0x7
#define RD163_size                               0x1
#define RD163_value_mask                         0x80
#define RD163_clear_mask                         0x7F

#define T3RD16                                   0x7
#define T3RD16_address                           0xFB1
#define T3RD16_position                          0x7
#define T3RD16_size                              0x1
#define T3RD16_value_mask                        0x80
#define T3RD16_clear_mask                        0x7F


/*------------------------------------------------------------#
| CMCON                                                 0xFB4 |
#-------------------------------------------------------------#
| C2OUT | C1OUT | C2INV | C1INV | CIS | CMEN2 | CMEN1 | CMEN0 |
#-------------------------------------------------------------#
| 7     | 6     | 5     | 4     | 3   | 2     | 1     | 0     |
#------------------------------------------------------------*/

#define CMCON                                    0x0
#define CMCON_address                            0xFB4
#define CMCON_position                           0x0
#define CMCON_size                               0x8
#define CMCON_value_mask                         0xFF
#define CMCON_clear_mask                         0x0

#define CM                                       0x0
#define CM_address                               0xFB4
#define CM_position                              0x0
#define CM_size                                  0x3
#define CM_value_mask                            0x7
#define CM_clear_mask                            0xF8

#define CMEN0                                    0x0
#define CMEN0_address                            0xFB4
#define CMEN0_position                           0x0
#define CMEN0_size                               0x1
#define CMEN0_value_mask                         0x1
#define CMEN0_clear_mask                         0xFE

#define CM0                                      0x0
#define CM0_address                              0xFB4
#define CM0_position                             0x0
#define CM0_size                                 0x1
#define CM0_value_mask                           0x1
#define CM0_clear_mask                           0xFE

#define CMEN1                                    0x1
#define CMEN1_address                            0xFB4
#define CMEN1_position                           0x1
#define CMEN1_size                               0x1
#define CMEN1_value_mask                         0x2
#define CMEN1_clear_mask                         0xFD

#define CM1                                      0x1
#define CM1_address                              0xFB4
#define CM1_position                             0x1
#define CM1_size                                 0x1
#define CM1_value_mask                           0x2
#define CM1_clear_mask                           0xFD

#define CMEN2                                    0x2
#define CMEN2_address                            0xFB4
#define CMEN2_position                           0x2
#define CMEN2_size                               0x1
#define CMEN2_value_mask                         0x4
#define CMEN2_clear_mask                         0xFB

#define CM2                                      0x2
#define CM2_address                              0xFB4
#define CM2_position                             0x2
#define CM2_size                                 0x1
#define CM2_value_mask                           0x4
#define CM2_clear_mask                           0xFB

#define CIS                                      0x3
#define CIS_address                              0xFB4
#define CIS_position                             0x3
#define CIS_size                                 0x1
#define CIS_value_mask                           0x8
#define CIS_clear_mask                           0xF7

#define C1INV                                    0x4
#define C1INV_address                            0xFB4
#define C1INV_position                           0x4
#define C1INV_size                               0x1
#define C1INV_value_mask                         0x10
#define C1INV_clear_mask                         0xEF

#define C2INV                                    0x5
#define C2INV_address                            0xFB4
#define C2INV_position                           0x5
#define C2INV_size                               0x1
#define C2INV_value_mask                         0x20
#define C2INV_clear_mask                         0xDF

#define C1OUT                                    0x6
#define C1OUT_address                            0xFB4
#define C1OUT_position                           0x6
#define C1OUT_size                               0x1
#define C1OUT_value_mask                         0x40
#define C1OUT_clear_mask                         0xBF

#define C2OUT                                    0x7
#define C2OUT_address                            0xFB4
#define C2OUT_position                           0x7
#define C2OUT_size                               0x1
#define C2OUT_value_mask                         0x80
#define C2OUT_clear_mask                         0x7F


/*----------------------------------------------------------#
| CVRCON                                              0xFB5 |
#-----------------------------------------------------------#
| CVREN | CVROEN | CVRR | CVRSS | CVR3 | CVR2 | CVR1 | CVR0 |
#-----------------------------------------------------------#
| 7     | 6      | 5    | 4     | 3    | 2    | 1    | 0    |
#----------------------------------------------------------*/

#define CVRCON                                   0x0
#define CVRCON_address                           0xFB5
#define CVRCON_position                          0x0
#define CVRCON_size                              0x8
#define CVRCON_value_mask                        0xFF
#define CVRCON_clear_mask                        0x0

#define CVR                                      0x0
#define CVR_address                              0xFB5
#define CVR_position                             0x0
#define CVR_size                                 0x4
#define CVR_value_mask                           0xF
#define CVR_clear_mask                           0xF0

#define CVR0                                     0x0
#define CVR0_address                             0xFB5
#define CVR0_position                            0x0
#define CVR0_size                                0x1
#define CVR0_value_mask                          0x1
#define CVR0_clear_mask                          0xFE

#define CVR1                                     0x1
#define CVR1_address                             0xFB5
#define CVR1_position                            0x1
#define CVR1_size                                0x1
#define CVR1_value_mask                          0x2
#define CVR1_clear_mask                          0xFD

#define CVR2                                     0x2
#define CVR2_address                             0xFB5
#define CVR2_position                            0x2
#define CVR2_size                                0x1
#define CVR2_value_mask                          0x4
#define CVR2_clear_mask                          0xFB

#define CVR3                                     0x3
#define CVR3_address                             0xFB5
#define CVR3_position                            0x3
#define CVR3_size                                0x1
#define CVR3_value_mask                          0x8
#define CVR3_clear_mask                          0xF7

#define CVRSS                                    0x4
#define CVRSS_address                            0xFB5
#define CVRSS_position                           0x4
#define CVRSS_size                               0x1
#define CVRSS_value_mask                         0x10
#define CVRSS_clear_mask                         0xEF

#define CVREF                                    0x4
#define CVREF_address                            0xFB5
#define CVREF_position                           0x4
#define CVREF_size                               0x1
#define CVREF_value_mask                         0x10
#define CVREF_clear_mask                         0xEF

#define CVRR                                     0x5
#define CVRR_address                             0xFB5
#define CVRR_position                            0x5
#define CVRR_size                                0x1
#define CVRR_value_mask                          0x20
#define CVRR_clear_mask                          0xDF

#define CVROEN                                   0x6
#define CVROEN_address                           0xFB5
#define CVROEN_position                          0x6
#define CVROEN_size                              0x1
#define CVROEN_value_mask                        0x40
#define CVROEN_clear_mask                        0xBF

#define CVROE                                    0x6
#define CVROE_address                            0xFB5
#define CVROE_position                           0x6
#define CVROE_size                               0x1
#define CVROE_value_mask                         0x40
#define CVROE_clear_mask                         0xBF

#define CVREN                                    0x7
#define CVREN_address                            0xFB5
#define CVREN_position                           0x7
#define CVREN_size                               0x1
#define CVREN_value_mask                         0x80
#define CVREN_clear_mask                         0x7F


/*----------------------------------------------------------#
| CCP2CON                                             0xFBA |
#-----------------------------------------------------------#
| - | - | DC2B1 | DC2B0 | CCP2M3 | CCP2M2 | CCP2M1 | CCP2M0 |
#-----------------------------------------------------------#
| 7 | 6 | 5     | 4     | 3      | 2      | 1      | 0      |
#----------------------------------------------------------*/

#define CCP2CON                                  0x0
#define CCP2CON_address                          0xFBA
#define CCP2CON_position                         0x0
#define CCP2CON_size                             0x8
#define CCP2CON_value_mask                       0xFF
#define CCP2CON_clear_mask                       0x0

#define CCP2M                                    0x0
#define CCP2M_address                            0xFBA
#define CCP2M_position                           0x0
#define CCP2M_size                               0x4
#define CCP2M_value_mask                         0xF
#define CCP2M_clear_mask                         0xF0

#define CCP2M0                                   0x0
#define CCP2M0_address                           0xFBA
#define CCP2M0_position                          0x0
#define CCP2M0_size                              0x1
#define CCP2M0_value_mask                        0x1
#define CCP2M0_clear_mask                        0xFE

#define CCP2M1                                   0x1
#define CCP2M1_address                           0xFBA
#define CCP2M1_position                          0x1
#define CCP2M1_size                              0x1
#define CCP2M1_value_mask                        0x2
#define CCP2M1_clear_mask                        0xFD

#define CCP2M2                                   0x2
#define CCP2M2_address                           0xFBA
#define CCP2M2_position                          0x2
#define CCP2M2_size                              0x1
#define CCP2M2_value_mask                        0x4
#define CCP2M2_clear_mask                        0xFB

#define CCP2M3                                   0x3
#define CCP2M3_address                           0xFBA
#define CCP2M3_position                          0x3
#define CCP2M3_size                              0x1
#define CCP2M3_value_mask                        0x8
#define CCP2M3_clear_mask                        0xF7

#define DC2B0                                    0x4
#define DC2B0_address                            0xFBA
#define DC2B0_position                           0x4
#define DC2B0_size                               0x1
#define DC2B0_value_mask                         0x10
#define DC2B0_clear_mask                         0xEF

#define DCCP2Y                                   0x4
#define DCCP2Y_address                           0xFBA
#define DCCP2Y_position                          0x4
#define DCCP2Y_size                              0x1
#define DCCP2Y_value_mask                        0x10
#define DCCP2Y_clear_mask                        0xEF

#define CCP2Y                                    0x4
#define CCP2Y_address                            0xFBA
#define CCP2Y_position                           0x4
#define CCP2Y_size                               0x1
#define CCP2Y_value_mask                         0x10
#define CCP2Y_clear_mask                         0xEF

#define DC2B                                     0x4
#define DC2B_address                             0xFBA
#define DC2B_position                            0x4
#define DC2B_size                                0x2
#define DC2B_value_mask                          0x30
#define DC2B_clear_mask                          0xCF

#define DC2B1                                    0x5
#define DC2B1_address                            0xFBA
#define DC2B1_position                           0x5
#define DC2B1_size                               0x1
#define DC2B1_value_mask                         0x20
#define DC2B1_clear_mask                         0xDF

#define DCCP2X                                   0x5
#define DCCP2X_address                           0xFBA
#define DCCP2X_position                          0x5
#define DCCP2X_size                              0x1
#define DCCP2X_value_mask                        0x20
#define DCCP2X_clear_mask                        0xDF

#define CCP2X                                    0x5
#define CCP2X_address                            0xFBA
#define CCP2X_position                           0x5
#define CCP2X_size                               0x1
#define CCP2X_value_mask                         0x20
#define CCP2X_clear_mask                         0xDF


/*-----------------------------------------------------------#
| CCP1CON                                              0xFBD |
#------------------------------------------------------------#
| - | - | CCP1X | DCCP1Y | CCP1M3 | CCP1M2 | CCP1M1 | CCP1M0 |
#------------------------------------------------------------#
| 7 | 6 | 5     | 4      | 3      | 2      | 1      | 0      |
#-----------------------------------------------------------*/

#define CCP1CON                                  0x0
#define CCP1CON_address                          0xFBD
#define CCP1CON_position                         0x0
#define CCP1CON_size                             0x8
#define CCP1CON_value_mask                       0xFF
#define CCP1CON_clear_mask                       0x0

#define CCP1M0                                   0x0
#define CCP1M0_address                           0xFBD
#define CCP1M0_position                          0x0
#define CCP1M0_size                              0x1
#define CCP1M0_value_mask                        0x1
#define CCP1M0_clear_mask                        0xFE

#define CCP1M                                    0x0
#define CCP1M_address                            0xFBD
#define CCP1M_position                           0x0
#define CCP1M_size                               0x4
#define CCP1M_value_mask                         0xF
#define CCP1M_clear_mask                         0xF0

#define CCP1M1                                   0x1
#define CCP1M1_address                           0xFBD
#define CCP1M1_position                          0x1
#define CCP1M1_size                              0x1
#define CCP1M1_value_mask                        0x2
#define CCP1M1_clear_mask                        0xFD

#define CCP1M2                                   0x2
#define CCP1M2_address                           0xFBD
#define CCP1M2_position                          0x2
#define CCP1M2_size                              0x1
#define CCP1M2_value_mask                        0x4
#define CCP1M2_clear_mask                        0xFB

#define CCP1M3                                   0x3
#define CCP1M3_address                           0xFBD
#define CCP1M3_position                          0x3
#define CCP1M3_size                              0x1
#define CCP1M3_value_mask                        0x8
#define CCP1M3_clear_mask                        0xF7

#define DCCP1Y                                   0x4
#define DCCP1Y_address                           0xFBD
#define DCCP1Y_position                          0x4
#define DCCP1Y_size                              0x1
#define DCCP1Y_value_mask                        0x10
#define DCCP1Y_clear_mask                        0xEF

#define CCP1Y                                    0x4
#define CCP1Y_address                            0xFBD
#define CCP1Y_position                           0x4
#define CCP1Y_size                               0x1
#define CCP1Y_value_mask                         0x10
#define CCP1Y_clear_mask                         0xEF

#define DC1B                                     0x4
#define DC1B_address                             0xFBD
#define DC1B_position                            0x4
#define DC1B_size                                0x2
#define DC1B_value_mask                          0x30
#define DC1B_clear_mask                          0xCF

#define DC1B0                                    0x4
#define DC1B0_address                            0xFBD
#define DC1B0_position                           0x4
#define DC1B0_size                               0x1
#define DC1B0_value_mask                         0x10
#define DC1B0_clear_mask                         0xEF

#define CCP1X                                    0x5
#define CCP1X_address                            0xFBD
#define CCP1X_position                           0x5
#define CCP1X_size                               0x1
#define CCP1X_value_mask                         0x20
#define CCP1X_clear_mask                         0xDF

#define DCCP1X                                   0x5
#define DCCP1X_address                           0xFBD
#define DCCP1X_position                          0x5
#define DCCP1X_size                              0x1
#define DCCP1X_value_mask                        0x20
#define DCCP1X_clear_mask                        0xDF

#define DC1B1                                    0x5
#define DC1B1_address                            0xFBD
#define DC1B1_position                           0x5
#define DC1B1_size                               0x1
#define DC1B1_value_mask                         0x20
#define DC1B1_clear_mask                         0xDF


/*---------------------------------------------------------#
| ADCON2                                             0xFC0 |
#----------------------------------------------------------#
| ADFM | - | ACQT2 | ACQT1 | ACQT0 | ADCS2 | ADCS1 | ADCS0 |
#----------------------------------------------------------#
| 7    | 6 | 5     | 4     | 3     | 2     | 1     | 0     |
#---------------------------------------------------------*/

#define ADCON2                                   0x0
#define ADCON2_address                           0xFC0
#define ADCON2_position                          0x0
#define ADCON2_size                              0x8
#define ADCON2_value_mask                        0xFF
#define ADCON2_clear_mask                        0x0

#define ADCS0                                    0x0
#define ADCS0_address                            0xFC0
#define ADCS0_position                           0x0
#define ADCS0_size                               0x1
#define ADCS0_value_mask                         0x1
#define ADCS0_clear_mask                         0xFE

#define ADCS                                     0x0
#define ADCS_address                             0xFC0
#define ADCS_position                            0x0
#define ADCS_size                                0x3
#define ADCS_value_mask                          0x7
#define ADCS_clear_mask                          0xF8

#define ADCS1                                    0x1
#define ADCS1_address                            0xFC0
#define ADCS1_position                           0x1
#define ADCS1_size                               0x1
#define ADCS1_value_mask                         0x2
#define ADCS1_clear_mask                         0xFD

#define ADCS2                                    0x2
#define ADCS2_address                            0xFC0
#define ADCS2_position                           0x2
#define ADCS2_size                               0x1
#define ADCS2_value_mask                         0x4
#define ADCS2_clear_mask                         0xFB

#define ACQT0                                    0x3
#define ACQT0_address                            0xFC0
#define ACQT0_position                           0x3
#define ACQT0_size                               0x1
#define ACQT0_value_mask                         0x8
#define ACQT0_clear_mask                         0xF7

#define ACQT                                     0x3
#define ACQT_address                             0xFC0
#define ACQT_position                            0x3
#define ACQT_size                                0x3
#define ACQT_value_mask                          0x38
#define ACQT_clear_mask                          0xC7

#define ACQT1                                    0x4
#define ACQT1_address                            0xFC0
#define ACQT1_position                           0x4
#define ACQT1_size                               0x1
#define ACQT1_value_mask                         0x10
#define ACQT1_clear_mask                         0xEF

#define ACQT2                                    0x5
#define ACQT2_address                            0xFC0
#define ACQT2_position                           0x5
#define ACQT2_size                               0x1
#define ACQT2_value_mask                         0x20
#define ACQT2_clear_mask                         0xDF

#define ADFM                                     0x7
#define ADFM_address                             0xFC0
#define ADFM_position                            0x7
#define ADFM_size                                0x1
#define ADFM_value_mask                          0x80
#define ADFM_clear_mask                          0x7F


/*-------------------------------------------------------#
| ADCON1                                           0xFC1 |
#--------------------------------------------------------#
| - | - | VCFG11 | VCFG0 | CHSN3 | PCFG2 | PCFG1 | PCFG0 |
#--------------------------------------------------------#
| 7 | 6 | 5      | 4     | 3     | 2     | 1     | 0     |
#-------------------------------------------------------*/

#define ADCON1                                   0x0
#define ADCON1_address                           0xFC1
#define ADCON1_position                          0x0
#define ADCON1_size                              0x8
#define ADCON1_value_mask                        0xFF
#define ADCON1_clear_mask                        0x0

#define PCFG0                                    0x0
#define PCFG0_address                            0xFC1
#define PCFG0_position                           0x0
#define PCFG0_size                               0x1
#define PCFG0_value_mask                         0x1
#define PCFG0_clear_mask                         0xFE

#define PCFG                                     0x0
#define PCFG_address                             0xFC1
#define PCFG_position                            0x0
#define PCFG_size                                0x4
#define PCFG_value_mask                          0xF
#define PCFG_clear_mask                          0xF0

#define PCFG1                                    0x1
#define PCFG1_address                            0xFC1
#define PCFG1_position                           0x1
#define PCFG1_size                               0x1
#define PCFG1_value_mask                         0x2
#define PCFG1_clear_mask                         0xFD

#define PCFG2                                    0x2
#define PCFG2_address                            0xFC1
#define PCFG2_position                           0x2
#define PCFG2_size                               0x1
#define PCFG2_value_mask                         0x4
#define PCFG2_clear_mask                         0xFB

#define CHSN3                                    0x3
#define CHSN3_address                            0xFC1
#define CHSN3_position                           0x3
#define CHSN3_size                               0x1
#define CHSN3_value_mask                         0x8
#define CHSN3_clear_mask                         0xF7

#define PCFG3                                    0x3
#define PCFG3_address                            0xFC1
#define PCFG3_position                           0x3
#define PCFG3_size                               0x1
#define PCFG3_value_mask                         0x8
#define PCFG3_clear_mask                         0xF7

#define VCFG                                     0x4
#define VCFG_address                             0xFC1
#define VCFG_position                            0x4
#define VCFG_size                                0x2
#define VCFG_value_mask                          0x30
#define VCFG_clear_mask                          0xCF

#define VCFG0                                    0x4
#define VCFG0_address                            0xFC1
#define VCFG0_position                           0x4
#define VCFG0_size                               0x1
#define VCFG0_value_mask                         0x10
#define VCFG0_clear_mask                         0xEF

#define VCFG01                                   0x4
#define VCFG01_address                           0xFC1
#define VCFG01_position                          0x4
#define VCFG01_size                              0x1
#define VCFG01_value_mask                        0x10
#define VCFG01_clear_mask                        0xEF

#define VCFG11                                   0x5
#define VCFG11_address                           0xFC1
#define VCFG11_position                          0x5
#define VCFG11_size                              0x1
#define VCFG11_value_mask                        0x20
#define VCFG11_clear_mask                        0xDF

#define VCFG1                                    0x5
#define VCFG1_address                            0xFC1
#define VCFG1_position                           0x5
#define VCFG1_size                               0x1
#define VCFG1_value_mask                         0x20
#define VCFG1_clear_mask                         0xDF


/*-------------------------------------------------#
| ADCON0                                     0xFC2 |
#--------------------------------------------------#
| - | - | CHS3 | CHS2 | CHS1 | CHS0 | nDONE | ADON |
#--------------------------------------------------#
| 7 | 6 | 5    | 4    | 3    | 2    | 1     | 0    |
#-------------------------------------------------*/

#define ADCON0                                   0x0
#define ADCON0_address                           0xFC2
#define ADCON0_position                          0x0
#define ADCON0_size                              0x8
#define ADCON0_value_mask                        0xFF
#define ADCON0_clear_mask                        0x0

#define ADON                                     0x0
#define ADON_address                             0xFC2
#define ADON_position                            0x0
#define ADON_size                                0x1
#define ADON_value_mask                          0x1
#define ADON_clear_mask                          0xFE

#define nDONE                                    0x1
#define nDONE_address                            0xFC2
#define nDONE_position                           0x1
#define nDONE_size                               0x1
#define nDONE_value_mask                         0x2
#define nDONE_clear_mask                         0xFD

#define GO_nDONE                                 0x1
#define GO_nDONE_address                         0xFC2
#define GO_nDONE_position                        0x1
#define GO_nDONE_size                            0x1
#define GO_nDONE_value_mask                      0x2
#define GO_nDONE_clear_mask                      0xFD

#define NOT_DONE                                 0x1
#define NOT_DONE_address                         0xFC2
#define NOT_DONE_position                        0x1
#define NOT_DONE_size                            0x1
#define NOT_DONE_value_mask                      0x2
#define NOT_DONE_clear_mask                      0xFD

#define GODONE                                   0x1
#define GODONE_address                           0xFC2
#define GODONE_position                          0x1
#define GODONE_size                              0x1
#define GODONE_value_mask                        0x2
#define GODONE_clear_mask                        0xFD

#define GO_DONE                                  0x1
#define GO_DONE_address                          0xFC2
#define GO_DONE_position                         0x1
#define GO_DONE_size                             0x1
#define GO_DONE_value_mask                       0x2
#define GO_DONE_clear_mask                       0xFD

#define DONE                                     0x1
#define DONE_address                             0xFC2
#define DONE_position                            0x1
#define DONE_size                                0x1
#define DONE_value_mask                          0x2
#define DONE_clear_mask                          0xFD

#define GO_NOT_DONE                              0x1
#define GO_NOT_DONE_address                      0xFC2
#define GO_NOT_DONE_position                     0x1
#define GO_NOT_DONE_size                         0x1
#define GO_NOT_DONE_value_mask                   0x2
#define GO_NOT_DONE_clear_mask                   0xFD

#define GO                                       0x1
#define GO_address                               0xFC2
#define GO_position                              0x1
#define GO_size                                  0x1
#define GO_value_mask                            0x2
#define GO_clear_mask                            0xFD

#define CHS0                                     0x2
#define CHS0_address                             0xFC2
#define CHS0_position                            0x2
#define CHS0_size                                0x1
#define CHS0_value_mask                          0x4
#define CHS0_clear_mask                          0xFB

#define CHS                                      0x2
#define CHS_address                              0xFC2
#define CHS_position                             0x2
#define CHS_size                                 0x4
#define CHS_value_mask                           0x3C
#define CHS_clear_mask                           0xC3

#define CHS1                                     0x3
#define CHS1_address                             0xFC2
#define CHS1_position                            0x3
#define CHS1_size                                0x1
#define CHS1_value_mask                          0x8
#define CHS1_clear_mask                          0xF7

#define CHS2                                     0x4
#define CHS2_address                             0xFC2
#define CHS2_position                            0x4
#define CHS2_size                                0x1
#define CHS2_value_mask                          0x10
#define CHS2_clear_mask                          0xEF

#define CHS3                                     0x5
#define CHS3_address                             0xFC2
#define CHS3_position                            0x5
#define CHS3_size                                0x1
#define CHS3_value_mask                          0x20
#define CHS3_clear_mask                          0xDF


/*---------------------------------------------------------#
| SSPCON2                                            0xFC5 |
#----------------------------------------------------------#
| GCEN | ACKSTAT | ACKDT | ACKEN | RCEN | PEN | RSEN | SEN |
#----------------------------------------------------------#
| 7    | 6       | 5     | 4     | 3    | 2   | 1    | 0   |
#---------------------------------------------------------*/

#define SSPCON2                                  0x0
#define SSPCON2_address                          0xFC5
#define SSPCON2_position                         0x0
#define SSPCON2_size                             0x8
#define SSPCON2_value_mask                       0xFF
#define SSPCON2_clear_mask                       0x0

#define SEN                                      0x0
#define SEN_address                              0xFC5
#define SEN_position                             0x0
#define SEN_size                                 0x1
#define SEN_value_mask                           0x1
#define SEN_clear_mask                           0xFE

#define RSEN                                     0x1
#define RSEN_address                             0xFC5
#define RSEN_position                            0x1
#define RSEN_size                                0x1
#define RSEN_value_mask                          0x2
#define RSEN_clear_mask                          0xFD

#define PEN                                      0x2
#define PEN_address                              0xFC5
#define PEN_position                             0x2
#define PEN_size                                 0x1
#define PEN_value_mask                           0x4
#define PEN_clear_mask                           0xFB

#define RCEN                                     0x3
#define RCEN_address                             0xFC5
#define RCEN_position                            0x3
#define RCEN_size                                0x1
#define RCEN_value_mask                          0x8
#define RCEN_clear_mask                          0xF7

#define ACKEN                                    0x4
#define ACKEN_address                            0xFC5
#define ACKEN_position                           0x4
#define ACKEN_size                               0x1
#define ACKEN_value_mask                         0x10
#define ACKEN_clear_mask                         0xEF

#define ACKDT                                    0x5
#define ACKDT_address                            0xFC5
#define ACKDT_position                           0x5
#define ACKDT_size                               0x1
#define ACKDT_value_mask                         0x20
#define ACKDT_clear_mask                         0xDF

#define ACKSTAT                                  0x6
#define ACKSTAT_address                          0xFC5
#define ACKSTAT_position                         0x6
#define ACKSTAT_size                             0x1
#define ACKSTAT_value_mask                       0x40
#define ACKSTAT_clear_mask                       0xBF

#define GCEN                                     0x7
#define GCEN_address                             0xFC5
#define GCEN_position                            0x7
#define GCEN_size                                0x1
#define GCEN_value_mask                          0x80
#define GCEN_clear_mask                          0x7F


/*-----------------------------------------------------------#
| SSPCON1                                              0xFC6 |
#------------------------------------------------------------#
| WCOL | SSPOV | SSPEN | CKP | SSPM3 | SSPM2 | SSPM1 | SSPM0 |
#------------------------------------------------------------#
| 7    | 6     | 5     | 4   | 3     | 2     | 1     | 0     |
#-----------------------------------------------------------*/

#define SSPCON1                                  0x0
#define SSPCON1_address                          0xFC6
#define SSPCON1_position                         0x0
#define SSPCON1_size                             0x8
#define SSPCON1_value_mask                       0xFF
#define SSPCON1_clear_mask                       0x0

#define SSPM0                                    0x0
#define SSPM0_address                            0xFC6
#define SSPM0_position                           0x0
#define SSPM0_size                               0x1
#define SSPM0_value_mask                         0x1
#define SSPM0_clear_mask                         0xFE

#define SSPM                                     0x0
#define SSPM_address                             0xFC6
#define SSPM_position                            0x0
#define SSPM_size                                0x4
#define SSPM_value_mask                          0xF
#define SSPM_clear_mask                          0xF0

#define SSPM1                                    0x1
#define SSPM1_address                            0xFC6
#define SSPM1_position                           0x1
#define SSPM1_size                               0x1
#define SSPM1_value_mask                         0x2
#define SSPM1_clear_mask                         0xFD

#define SSPM2                                    0x2
#define SSPM2_address                            0xFC6
#define SSPM2_position                           0x2
#define SSPM2_size                               0x1
#define SSPM2_value_mask                         0x4
#define SSPM2_clear_mask                         0xFB

#define SSPM3                                    0x3
#define SSPM3_address                            0xFC6
#define SSPM3_position                           0x3
#define SSPM3_size                               0x1
#define SSPM3_value_mask                         0x8
#define SSPM3_clear_mask                         0xF7

#define CKP                                      0x4
#define CKP_address                              0xFC6
#define CKP_position                             0x4
#define CKP_size                                 0x1
#define CKP_value_mask                           0x10
#define CKP_clear_mask                           0xEF

#define SSPEN                                    0x5
#define SSPEN_address                            0xFC6
#define SSPEN_position                           0x5
#define SSPEN_size                               0x1
#define SSPEN_value_mask                         0x20
#define SSPEN_clear_mask                         0xDF

#define SSPOV                                    0x6
#define SSPOV_address                            0xFC6
#define SSPOV_position                           0x6
#define SSPOV_size                               0x1
#define SSPOV_value_mask                         0x40
#define SSPOV_clear_mask                         0xBF

#define WCOL                                     0x7
#define WCOL_address                             0xFC6
#define WCOL_position                            0x7
#define WCOL_size                                0x1
#define WCOL_value_mask                          0x80
#define WCOL_clear_mask                          0x7F


/*-------------------------------------------------#
| SSPSTAT                                    0xFC7 |
#--------------------------------------------------#
| SMP | CKE | NOT_A | STOP | S | R_NOT_W | UA | BF |
#--------------------------------------------------#
| 7   | 6   | 5     | 4    | 3 | 2       | 1  | 0  |
#-------------------------------------------------*/

#define SSPSTAT                                  0x0
#define SSPSTAT_address                          0xFC7
#define SSPSTAT_position                         0x0
#define SSPSTAT_size                             0x8
#define SSPSTAT_value_mask                       0xFF
#define SSPSTAT_clear_mask                       0x0

#define BF                                       0x0
#define BF_address                               0xFC7
#define BF_position                              0x0
#define BF_size                                  0x1
#define BF_value_mask                            0x1
#define BF_clear_mask                            0xFE

#define UA                                       0x1
#define UA_address                               0xFC7
#define UA_position                              0x1
#define UA_size                                  0x1
#define UA_value_mask                            0x2
#define UA_clear_mask                            0xFD

#define R_NOT_W                                  0x2
#define R_NOT_W_address                          0xFC7
#define R_NOT_W_position                         0x2
#define R_NOT_W_size                             0x1
#define R_NOT_W_value_mask                       0x4
#define R_NOT_W_clear_mask                       0xFB

#define READ_WRITE                               0x2
#define READ_WRITE_address                       0xFC7
#define READ_WRITE_position                      0x2
#define READ_WRITE_size                          0x1
#define READ_WRITE_value_mask                    0x4
#define READ_WRITE_clear_mask                    0xFB

#define NOT_W                                    0x2
#define NOT_W_address                            0xFC7
#define NOT_W_position                           0x2
#define NOT_W_size                               0x1
#define NOT_W_value_mask                         0x4
#define NOT_W_clear_mask                         0xFB

#define R_W                                      0x2
#define R_W_address                              0xFC7
#define R_W_position                             0x2
#define R_W_size                                 0x1
#define R_W_value_mask                           0x4
#define R_W_clear_mask                           0xFB

#define nW                                       0x2
#define nW_address                               0xFC7
#define nW_position                              0x2
#define nW_size                                  0x1
#define nW_value_mask                            0x4
#define nW_clear_mask                            0xFB

#define RW                                       0x2
#define RW_address                               0xFC7
#define RW_position                              0x2
#define RW_size                                  0x1
#define RW_value_mask                            0x4
#define RW_clear_mask                            0xFB

#define nWRITE                                   0x2
#define nWRITE_address                           0xFC7
#define nWRITE_position                          0x2
#define nWRITE_size                              0x1
#define nWRITE_value_mask                        0x4
#define nWRITE_clear_mask                        0xFB

#define R                                        0x2
#define R_address                                0xFC7
#define R_position                               0x2
#define R_size                                   0x1
#define R_value_mask                             0x4
#define R_clear_mask                             0xFB

#define NOT_WRITE                                0x2
#define NOT_WRITE_address                        0xFC7
#define NOT_WRITE_position                       0x2
#define NOT_WRITE_size                           0x1
#define NOT_WRITE_value_mask                     0x4
#define NOT_WRITE_clear_mask                     0xFB

#define R_nW                                     0x2
#define R_nW_address                             0xFC7
#define R_nW_position                            0x2
#define R_nW_size                                0x1
#define R_nW_value_mask                          0x4
#define R_nW_clear_mask                          0xFB

#define I2C_READ                                 0x2
#define I2C_READ_address                         0xFC7
#define I2C_READ_position                        0x2
#define I2C_READ_size                            0x1
#define I2C_READ_value_mask                      0x4
#define I2C_READ_clear_mask                      0xFB

#define START                                    0x3
#define START_address                            0xFC7
#define START_position                           0x3
#define START_size                               0x1
#define START_value_mask                         0x8
#define START_clear_mask                         0xF7

#define S                                        0x3
#define S_address                                0xFC7
#define S_position                               0x3
#define S_size                                   0x1
#define S_value_mask                             0x8
#define S_clear_mask                             0xF7

#define I2C_START                                0x3
#define I2C_START_address                        0xFC7
#define I2C_START_position                       0x3
#define I2C_START_size                           0x1
#define I2C_START_value_mask                     0x8
#define I2C_START_clear_mask                     0xF7

#define STOP                                     0x4
#define STOP_address                             0xFC7
#define STOP_position                            0x4
#define STOP_size                                0x1
#define STOP_value_mask                          0x10
#define STOP_clear_mask                          0xEF

#define I2C_STOP                                 0x4
#define I2C_STOP_address                         0xFC7
#define I2C_STOP_position                        0x4
#define I2C_STOP_size                            0x1
#define I2C_STOP_value_mask                      0x10
#define I2C_STOP_clear_mask                      0xEF

#define P                                        0x4
#define P_address                                0xFC7
#define P_position                               0x4
#define P_size                                   0x1
#define P_value_mask                             0x10
#define P_clear_mask                             0xEF

#define NOT_A                                    0x5
#define NOT_A_address                            0xFC7
#define NOT_A_position                           0x5
#define NOT_A_size                               0x1
#define NOT_A_value_mask                         0x20
#define NOT_A_clear_mask                         0xDF

#define DATA_ADDRESS                             0x5
#define DATA_ADDRESS_address                     0xFC7
#define DATA_ADDRESS_position                    0x5
#define DATA_ADDRESS_size                        0x1
#define DATA_ADDRESS_value_mask                  0x20
#define DATA_ADDRESS_clear_mask                  0xDF

#define nA                                       0x5
#define nA_address                               0xFC7
#define nA_position                              0x5
#define nA_size                                  0x1
#define nA_value_mask                            0x20
#define nA_clear_mask                            0xDF

#define D_A                                      0x5
#define D_A_address                              0xFC7
#define D_A_position                             0x5
#define D_A_size                                 0x1
#define D_A_value_mask                           0x20
#define D_A_clear_mask                           0xDF

#define D_nA                                     0x5
#define D_nA_address                             0xFC7
#define D_nA_position                            0x5
#define D_nA_size                                0x1
#define D_nA_value_mask                          0x20
#define D_nA_clear_mask                          0xDF

#define D                                        0x5
#define D_address                                0xFC7
#define D_position                               0x5
#define D_size                                   0x1
#define D_value_mask                             0x20
#define D_clear_mask                             0xDF

#define DA                                       0x5
#define DA_address                               0xFC7
#define DA_position                              0x5
#define DA_size                                  0x1
#define DA_value_mask                            0x20
#define DA_clear_mask                            0xDF

#define D_NOT_A                                  0x5
#define D_NOT_A_address                          0xFC7
#define D_NOT_A_position                         0x5
#define D_NOT_A_size                             0x1
#define D_NOT_A_value_mask                       0x20
#define D_NOT_A_clear_mask                       0xDF

#define NOT_ADDRESS                              0x5
#define NOT_ADDRESS_address                      0xFC7
#define NOT_ADDRESS_position                     0x5
#define NOT_ADDRESS_size                         0x1
#define NOT_ADDRESS_value_mask                   0x20
#define NOT_ADDRESS_clear_mask                   0xDF

#define nADDRESS                                 0x5
#define nADDRESS_address                         0xFC7
#define nADDRESS_position                        0x5
#define nADDRESS_size                            0x1
#define nADDRESS_value_mask                      0x20
#define nADDRESS_clear_mask                      0xDF

#define I2C_DAT                                  0x5
#define I2C_DAT_address                          0xFC7
#define I2C_DAT_position                         0x5
#define I2C_DAT_size                             0x1
#define I2C_DAT_value_mask                       0x20
#define I2C_DAT_clear_mask                       0xDF

#define CKE                                      0x6
#define CKE_address                              0xFC7
#define CKE_position                             0x6
#define CKE_size                                 0x1
#define CKE_value_mask                           0x40
#define CKE_clear_mask                           0xBF

#define SMP                                      0x7
#define SMP_address                              0xFC7
#define SMP_position                             0x7
#define SMP_size                                 0x1
#define SMP_value_mask                           0x80
#define SMP_clear_mask                           0x7F


/*---------------------------------------------------------------------------#
| T2CON                                                                0xFCA |
#----------------------------------------------------------------------------#
| - | T2OUTPS3 | T2OUTPS2 | T2OUTPS1 | T2OUTPS0 | TMR2ON | T2CKPS1 | T2CKPS0 |
#----------------------------------------------------------------------------#
| 7 | 6        | 5        | 4        | 3        | 2      | 1       | 0       |
#---------------------------------------------------------------------------*/

#define T2CON                                    0x0
#define T2CON_address                            0xFCA
#define T2CON_position                           0x0
#define T2CON_size                               0x8
#define T2CON_value_mask                         0xFF
#define T2CON_clear_mask                         0x0

#define T2CKPS0                                  0x0
#define T2CKPS0_address                          0xFCA
#define T2CKPS0_position                         0x0
#define T2CKPS0_size                             0x1
#define T2CKPS0_value_mask                       0x1
#define T2CKPS0_clear_mask                       0xFE

#define T2CKPS                                   0x0
#define T2CKPS_address                           0xFCA
#define T2CKPS_position                          0x0
#define T2CKPS_size                              0x2
#define T2CKPS_value_mask                        0x3
#define T2CKPS_clear_mask                        0xFC

#define T2CKPS1                                  0x1
#define T2CKPS1_address                          0xFCA
#define T2CKPS1_position                         0x1
#define T2CKPS1_size                             0x1
#define T2CKPS1_value_mask                       0x2
#define T2CKPS1_clear_mask                       0xFD

#define TMR2ON                                   0x2
#define TMR2ON_address                           0xFCA
#define TMR2ON_position                          0x2
#define TMR2ON_size                              0x1
#define TMR2ON_value_mask                        0x4
#define TMR2ON_clear_mask                        0xFB

#define T2OUTPS0                                 0x3
#define T2OUTPS0_address                         0xFCA
#define T2OUTPS0_position                        0x3
#define T2OUTPS0_size                            0x1
#define T2OUTPS0_value_mask                      0x8
#define T2OUTPS0_clear_mask                      0xF7

#define TOUTPS                                   0x3
#define TOUTPS_address                           0xFCA
#define TOUTPS_position                          0x3
#define TOUTPS_size                              0x4
#define TOUTPS_value_mask                        0x78
#define TOUTPS_clear_mask                        0x87

#define T2OUTPS1                                 0x4
#define T2OUTPS1_address                         0xFCA
#define T2OUTPS1_position                        0x4
#define T2OUTPS1_size                            0x1
#define T2OUTPS1_value_mask                      0x10
#define T2OUTPS1_clear_mask                      0xEF

#define T2OUTPS2                                 0x5
#define T2OUTPS2_address                         0xFCA
#define T2OUTPS2_position                        0x5
#define T2OUTPS2_size                            0x1
#define T2OUTPS2_value_mask                      0x20
#define T2OUTPS2_clear_mask                      0xDF

#define T2OUTPS3                                 0x6
#define T2OUTPS3_address                         0xFCA
#define T2OUTPS3_position                        0x6
#define T2OUTPS3_size                            0x1
#define T2OUTPS3_value_mask                      0x40
#define T2OUTPS3_clear_mask                      0xBF


/*----------------------------------------------------------------------------#
| T1CON                                                                 0xFCD |
#-----------------------------------------------------------------------------#
| T1RD16 | T1RUN | T1CKPS1 | T1CKPS0 | T1OSCEN | NOT_T1SYNC | TMR1CS | TMR1ON |
#-----------------------------------------------------------------------------#
| 7      | 6     | 5       | 4       | 3       | 2          | 1      | 0      |
#----------------------------------------------------------------------------*/

#define T1CON                                    0x0
#define T1CON_address                            0xFCD
#define T1CON_position                           0x0
#define T1CON_size                               0x8
#define T1CON_value_mask                         0xFF
#define T1CON_clear_mask                         0x0

#define TMR1ON                                   0x0
#define TMR1ON_address                           0xFCD
#define TMR1ON_position                          0x0
#define TMR1ON_size                              0x1
#define TMR1ON_value_mask                        0x1
#define TMR1ON_clear_mask                        0xFE

#define TMR1CS                                   0x1
#define TMR1CS_address                           0xFCD
#define TMR1CS_position                          0x1
#define TMR1CS_size                              0x1
#define TMR1CS_value_mask                        0x2
#define TMR1CS_clear_mask                        0xFD

#define NOT_T1SYNC                               0x2
#define NOT_T1SYNC_address                       0xFCD
#define NOT_T1SYNC_position                      0x2
#define NOT_T1SYNC_size                          0x1
#define NOT_T1SYNC_value_mask                    0x4
#define NOT_T1SYNC_clear_mask                    0xFB

#define T1SYNC                                   0x2
#define T1SYNC_address                           0xFCD
#define T1SYNC_position                          0x2
#define T1SYNC_size                              0x1
#define T1SYNC_value_mask                        0x4
#define T1SYNC_clear_mask                        0xFB

#define nT1SYNC                                  0x2
#define nT1SYNC_address                          0xFCD
#define nT1SYNC_position                         0x2
#define nT1SYNC_size                             0x1
#define nT1SYNC_value_mask                       0x4
#define nT1SYNC_clear_mask                       0xFB

#define T1INSYNC                                 0x2
#define T1INSYNC_address                         0xFCD
#define T1INSYNC_position                        0x2
#define T1INSYNC_size                            0x1
#define T1INSYNC_value_mask                      0x4
#define T1INSYNC_clear_mask                      0xFB

#define T1OSCEN                                  0x3
#define T1OSCEN_address                          0xFCD
#define T1OSCEN_position                         0x3
#define T1OSCEN_size                             0x1
#define T1OSCEN_value_mask                       0x8
#define T1OSCEN_clear_mask                       0xF7

#define SOSCEN                                   0x3
#define SOSCEN_address                           0xFCD
#define SOSCEN_position                          0x3
#define SOSCEN_size                              0x1
#define SOSCEN_value_mask                        0x8
#define SOSCEN_clear_mask                        0xF7

#define T1CKPS0                                  0x4
#define T1CKPS0_address                          0xFCD
#define T1CKPS0_position                         0x4
#define T1CKPS0_size                             0x1
#define T1CKPS0_value_mask                       0x10
#define T1CKPS0_clear_mask                       0xEF

#define T1CKPS                                   0x4
#define T1CKPS_address                           0xFCD
#define T1CKPS_position                          0x4
#define T1CKPS_size                              0x2
#define T1CKPS_value_mask                        0x30
#define T1CKPS_clear_mask                        0xCF

#define T1CKPS1                                  0x5
#define T1CKPS1_address                          0xFCD
#define T1CKPS1_position                         0x5
#define T1CKPS1_size                             0x1
#define T1CKPS1_value_mask                       0x20
#define T1CKPS1_clear_mask                       0xDF

#define T1RUN                                    0x6
#define T1RUN_address                            0xFCD
#define T1RUN_position                           0x6
#define T1RUN_size                               0x1
#define T1RUN_value_mask                         0x40
#define T1RUN_clear_mask                         0xBF

#define T1RD16                                   0x7
#define T1RD16_address                           0xFCD
#define T1RD16_position                          0x7
#define T1RD16_size                              0x1
#define T1RD16_value_mask                        0x80
#define T1RD16_clear_mask                        0x7F

#define T1CON_RD16                               0x7
#define T1CON_RD16_address                       0xFCD
#define T1CON_RD16_position                      0x7
#define T1CON_RD16_size                          0x1
#define T1CON_RD16_value_mask                    0x80
#define T1CON_RD16_clear_mask                    0x7F


/*--------------------------------------------------#
| RCON                                        0xFD0 |
#---------------------------------------------------#
| IPEN | SBOREN | - | nRI | TO | NOT_PD | POR | BOR |
#---------------------------------------------------#
| 7    | 6      | 5 | 4   | 3  | 2      | 1   | 0   |
#--------------------------------------------------*/

#define RCON                                     0x0
#define RCON_address                             0xFD0
#define RCON_position                            0x0
#define RCON_size                                0x8
#define RCON_value_mask                          0xFF
#define RCON_clear_mask                          0x0

#define BOR                                      0x0
#define BOR_address                              0xFD0
#define BOR_position                             0x0
#define BOR_size                                 0x1
#define BOR_value_mask                           0x1
#define BOR_clear_mask                           0xFE

#define NOT_BOR                                  0x0
#define NOT_BOR_address                          0xFD0
#define NOT_BOR_position                         0x0
#define NOT_BOR_size                             0x1
#define NOT_BOR_value_mask                       0x1
#define NOT_BOR_clear_mask                       0xFE

#define nBOR                                     0x0
#define nBOR_address                             0xFD0
#define nBOR_position                            0x0
#define nBOR_size                                0x1
#define nBOR_value_mask                          0x1
#define nBOR_clear_mask                          0xFE

#define POR                                      0x1
#define POR_address                              0xFD0
#define POR_position                             0x1
#define POR_size                                 0x1
#define POR_value_mask                           0x2
#define POR_clear_mask                           0xFD

#define nPOR                                     0x1
#define nPOR_address                             0xFD0
#define nPOR_position                            0x1
#define nPOR_size                                0x1
#define nPOR_value_mask                          0x2
#define nPOR_clear_mask                          0xFD

#define NOT_POR                                  0x1
#define NOT_POR_address                          0xFD0
#define NOT_POR_position                         0x1
#define NOT_POR_size                             0x1
#define NOT_POR_value_mask                       0x2
#define NOT_POR_clear_mask                       0xFD

#define PD                                       0x2
#define PD_address                               0xFD0
#define PD_position                              0x2
#define PD_size                                  0x1
#define PD_value_mask                            0x4
#define PD_clear_mask                            0xFB

#define nPD                                      0x2
#define nPD_address                              0xFD0
#define nPD_position                             0x2
#define nPD_size                                 0x1
#define nPD_value_mask                           0x4
#define nPD_clear_mask                           0xFB

#define NOT_PD                                   0x2
#define NOT_PD_address                           0xFD0
#define NOT_PD_position                          0x2
#define NOT_PD_size                              0x1
#define NOT_PD_value_mask                        0x4
#define NOT_PD_clear_mask                        0xFB

#define NOT_TO                                   0x3
#define NOT_TO_address                           0xFD0
#define NOT_TO_position                          0x3
#define NOT_TO_size                              0x1
#define NOT_TO_value_mask                        0x8
#define NOT_TO_clear_mask                        0xF7

#define nTO                                      0x3
#define nTO_address                              0xFD0
#define nTO_position                             0x3
#define nTO_size                                 0x1
#define nTO_value_mask                           0x8
#define nTO_clear_mask                           0xF7

#define TO                                       0x3
#define TO_address                               0xFD0
#define TO_position                              0x3
#define TO_size                                  0x1
#define TO_value_mask                            0x8
#define TO_clear_mask                            0xF7

#define nRI                                      0x4
#define nRI_address                              0xFD0
#define nRI_position                             0x4
#define nRI_size                                 0x1
#define nRI_value_mask                           0x10
#define nRI_clear_mask                           0xEF

#define NOT_RI                                   0x4
#define NOT_RI_address                           0xFD0
#define NOT_RI_position                          0x4
#define NOT_RI_size                              0x1
#define NOT_RI_value_mask                        0x10
#define NOT_RI_clear_mask                        0xEF

#define RI                                       0x4
#define RI_address                               0xFD0
#define RI_position                              0x4
#define RI_size                                  0x1
#define RI_value_mask                            0x10
#define RI_clear_mask                            0xEF

#define SBOREN                                   0x6
#define SBOREN_address                           0xFD0
#define SBOREN_position                          0x6
#define SBOREN_size                              0x1
#define SBOREN_value_mask                        0x40
#define SBOREN_clear_mask                        0xBF

#define IPEN                                     0x7
#define IPEN_address                             0xFD0
#define IPEN_position                            0x7
#define IPEN_size                                0x1
#define IPEN_value_mask                          0x80
#define IPEN_clear_mask                          0x7F


/*----------------------------------#
| WDTCON                      0xFD1 |
#-----------------------------------#
| - | - | - | - | - | - | - | SWDTE |
#-----------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0     |
#----------------------------------*/

#define WDTCON                                   0x0
#define WDTCON_address                           0xFD1
#define WDTCON_position                          0x0
#define WDTCON_size                              0x8
#define WDTCON_value_mask                        0xFF
#define WDTCON_clear_mask                        0x0

#define SWDTE                                    0x0
#define SWDTE_address                            0xFD1
#define SWDTE_position                           0x0
#define SWDTE_size                               0x1
#define SWDTE_value_mask                         0x1
#define SWDTE_clear_mask                         0xFE

#define SWDTEN                                   0x0
#define SWDTEN_address                           0xFD1
#define SWDTEN_position                          0x0
#define SWDTEN_size                              0x1
#define SWDTEN_value_mask                        0x1
#define SWDTEN_clear_mask                        0xFE


/*----------------------------------------------------------------#
| HLVDCON                                                   0xFD2 |
#-----------------------------------------------------------------#
| VDIRMAG | - | BGST | HLVDEN | HLVDL3 | HLVDL2 | HLVDL1 | HLVDL0 |
#-----------------------------------------------------------------#
| 7       | 6 | 5    | 4      | 3      | 2      | 1      | 0      |
#----------------------------------------------------------------*/

#define HLVDCON                                  0x0
#define HLVDCON_address                          0xFD2
#define HLVDCON_position                         0x0
#define HLVDCON_size                             0x8
#define HLVDCON_value_mask                       0xFF
#define HLVDCON_clear_mask                       0x0

#define HLVDL                                    0x0
#define HLVDL_address                            0xFD2
#define HLVDL_position                           0x0
#define HLVDL_size                               0x4
#define HLVDL_value_mask                         0xF
#define HLVDL_clear_mask                         0xF0

#define HLVDL0                                   0x0
#define HLVDL0_address                           0xFD2
#define HLVDL0_position                          0x0
#define HLVDL0_size                              0x1
#define HLVDL0_value_mask                        0x1
#define HLVDL0_clear_mask                        0xFE

#define LVV0                                     0x0
#define LVV0_address                             0xFD2
#define LVV0_position                            0x0
#define LVV0_size                                0x1
#define LVV0_value_mask                          0x1
#define LVV0_clear_mask                          0xFE

#define LVDL0                                    0x0
#define LVDL0_address                            0xFD2
#define LVDL0_position                           0x0
#define LVDL0_size                               0x1
#define LVDL0_value_mask                         0x1
#define LVDL0_clear_mask                         0xFE

#define HLVDL1                                   0x1
#define HLVDL1_address                           0xFD2
#define HLVDL1_position                          0x1
#define HLVDL1_size                              0x1
#define HLVDL1_value_mask                        0x2
#define HLVDL1_clear_mask                        0xFD

#define LVV1                                     0x1
#define LVV1_address                             0xFD2
#define LVV1_position                            0x1
#define LVV1_size                                0x1
#define LVV1_value_mask                          0x2
#define LVV1_clear_mask                          0xFD

#define LVDL1                                    0x1
#define LVDL1_address                            0xFD2
#define LVDL1_position                           0x1
#define LVDL1_size                               0x1
#define LVDL1_value_mask                         0x2
#define LVDL1_clear_mask                         0xFD

#define HLVDL2                                   0x2
#define HLVDL2_address                           0xFD2
#define HLVDL2_position                          0x2
#define HLVDL2_size                              0x1
#define HLVDL2_value_mask                        0x4
#define HLVDL2_clear_mask                        0xFB

#define LVV2                                     0x2
#define LVV2_address                             0xFD2
#define LVV2_position                            0x2
#define LVV2_size                                0x1
#define LVV2_value_mask                          0x4
#define LVV2_clear_mask                          0xFB

#define LVDL2                                    0x2
#define LVDL2_address                            0xFD2
#define LVDL2_position                           0x2
#define LVDL2_size                               0x1
#define LVDL2_value_mask                         0x4
#define LVDL2_clear_mask                         0xFB

#define HLVDL3                                   0x3
#define HLVDL3_address                           0xFD2
#define HLVDL3_position                          0x3
#define HLVDL3_size                              0x1
#define HLVDL3_value_mask                        0x8
#define HLVDL3_clear_mask                        0xF7

#define LVV3                                     0x3
#define LVV3_address                             0xFD2
#define LVV3_position                            0x3
#define LVV3_size                                0x1
#define LVV3_value_mask                          0x8
#define LVV3_clear_mask                          0xF7

#define LVDL3                                    0x3
#define LVDL3_address                            0xFD2
#define LVDL3_position                           0x3
#define LVDL3_size                               0x1
#define LVDL3_value_mask                         0x8
#define LVDL3_clear_mask                         0xF7

#define HLVDEN                                   0x4
#define HLVDEN_address                           0xFD2
#define HLVDEN_position                          0x4
#define HLVDEN_size                              0x1
#define HLVDEN_value_mask                        0x10
#define HLVDEN_clear_mask                        0xEF

#define LVDEN                                    0x4
#define LVDEN_address                            0xFD2
#define LVDEN_position                           0x4
#define LVDEN_size                               0x1
#define LVDEN_value_mask                         0x10
#define LVDEN_clear_mask                         0xEF

#define BGST                                     0x5
#define BGST_address                             0xFD2
#define BGST_position                            0x5
#define BGST_size                                0x1
#define BGST_value_mask                          0x20
#define BGST_clear_mask                          0xDF

#define IRVST                                    0x5
#define IRVST_address                            0xFD2
#define IRVST_position                           0x5
#define IRVST_size                               0x1
#define IRVST_value_mask                         0x20
#define IRVST_clear_mask                         0xDF

#define VDIRMAG                                  0x7
#define VDIRMAG_address                          0xFD2
#define VDIRMAG_position                         0x7
#define VDIRMAG_size                             0x1
#define VDIRMAG_value_mask                       0x80
#define VDIRMAG_clear_mask                       0x7F


/*----------------------------------------------------------#
| OSCCON                                              0xFD3 |
#-----------------------------------------------------------#
| IDLEN | IRCF2 | IRCF1 | IRCF0 | OSTS | FLTS | SCS1 | SCS0 |
#-----------------------------------------------------------#
| 7     | 6     | 5     | 4     | 3    | 2    | 1    | 0    |
#----------------------------------------------------------*/

#define OSCCON                                   0x0
#define OSCCON_address                           0xFD3
#define OSCCON_position                          0x0
#define OSCCON_size                              0x8
#define OSCCON_value_mask                        0xFF
#define OSCCON_clear_mask                        0x0

#define SCS0                                     0x0
#define SCS0_address                             0xFD3
#define SCS0_position                            0x0
#define SCS0_size                                0x1
#define SCS0_value_mask                          0x1
#define SCS0_clear_mask                          0xFE

#define SCS                                      0x0
#define SCS_address                              0xFD3
#define SCS_position                             0x0
#define SCS_size                                 0x2
#define SCS_value_mask                           0x3
#define SCS_clear_mask                           0xFC

#define SCS1                                     0x1
#define SCS1_address                             0xFD3
#define SCS1_position                            0x1
#define SCS1_size                                0x1
#define SCS1_value_mask                          0x2
#define SCS1_clear_mask                          0xFD

#define FLTS                                     0x2
#define FLTS_address                             0xFD3
#define FLTS_position                            0x2
#define FLTS_size                                0x1
#define FLTS_value_mask                          0x4
#define FLTS_clear_mask                          0xFB

#define IOFS                                     0x2
#define IOFS_address                             0xFD3
#define IOFS_position                            0x2
#define IOFS_size                                0x1
#define IOFS_value_mask                          0x4
#define IOFS_clear_mask                          0xFB

#define OSTS                                     0x3
#define OSTS_address                             0xFD3
#define OSTS_position                            0x3
#define OSTS_size                                0x1
#define OSTS_value_mask                          0x8
#define OSTS_clear_mask                          0xF7

#define IRCF                                     0x4
#define IRCF_address                             0xFD3
#define IRCF_position                            0x4
#define IRCF_size                                0x3
#define IRCF_value_mask                          0x70
#define IRCF_clear_mask                          0x8F

#define IRCF0                                    0x4
#define IRCF0_address                            0xFD3
#define IRCF0_position                           0x4
#define IRCF0_size                               0x1
#define IRCF0_value_mask                         0x10
#define IRCF0_clear_mask                         0xEF

#define IRCF1                                    0x5
#define IRCF1_address                            0xFD3
#define IRCF1_position                           0x5
#define IRCF1_size                               0x1
#define IRCF1_value_mask                         0x20
#define IRCF1_clear_mask                         0xDF

#define IRCF2                                    0x6
#define IRCF2_address                            0xFD3
#define IRCF2_position                           0x6
#define IRCF2_size                               0x1
#define IRCF2_value_mask                         0x40
#define IRCF2_clear_mask                         0xBF

#define IDLEN                                    0x7
#define IDLEN_address                            0xFD3
#define IDLEN_position                           0x7
#define IDLEN_size                               0x1
#define IDLEN_value_mask                         0x80
#define IDLEN_clear_mask                         0x7F


/*------------------------------------------------------------#
| T0CON                                                 0xFD5 |
#-------------------------------------------------------------#
| TMR0ON | T08BIT | T0CS | T0SE | PSA | T0PS2 | T0PS1 | T0PS0 |
#-------------------------------------------------------------#
| 7      | 6      | 5    | 4    | 3   | 2     | 1     | 0     |
#------------------------------------------------------------*/

#define T0CON                                    0x0
#define T0CON_address                            0xFD5
#define T0CON_position                           0x0
#define T0CON_size                               0x8
#define T0CON_value_mask                         0xFF
#define T0CON_clear_mask                         0x0

#define T0PS                                     0x0
#define T0PS_address                             0xFD5
#define T0PS_position                            0x0
#define T0PS_size                                0x3
#define T0PS_value_mask                          0x7
#define T0PS_clear_mask                          0xF8

#define T0PS0                                    0x0
#define T0PS0_address                            0xFD5
#define T0PS0_position                           0x0
#define T0PS0_size                               0x1
#define T0PS0_value_mask                         0x1
#define T0PS0_clear_mask                         0xFE

#define T0PS1                                    0x1
#define T0PS1_address                            0xFD5
#define T0PS1_position                           0x1
#define T0PS1_size                               0x1
#define T0PS1_value_mask                         0x2
#define T0PS1_clear_mask                         0xFD

#define T0PS2                                    0x2
#define T0PS2_address                            0xFD5
#define T0PS2_position                           0x2
#define T0PS2_size                               0x1
#define T0PS2_value_mask                         0x4
#define T0PS2_clear_mask                         0xFB

#define PSA                                      0x3
#define PSA_address                              0xFD5
#define PSA_position                             0x3
#define PSA_size                                 0x1
#define PSA_value_mask                           0x8
#define PSA_clear_mask                           0xF7

#define T0SE                                     0x4
#define T0SE_address                             0xFD5
#define T0SE_position                            0x4
#define T0SE_size                                0x1
#define T0SE_value_mask                          0x10
#define T0SE_clear_mask                          0xEF

#define T0CS                                     0x5
#define T0CS_address                             0xFD5
#define T0CS_position                            0x5
#define T0CS_size                                0x1
#define T0CS_value_mask                          0x20
#define T0CS_clear_mask                          0xDF

#define T08BIT                                   0x6
#define T08BIT_address                           0xFD5
#define T08BIT_position                          0x6
#define T08BIT_size                              0x1
#define T08BIT_value_mask                        0x40
#define T08BIT_clear_mask                        0xBF

#define TMR0ON                                   0x7
#define TMR0ON_address                           0xFD5
#define TMR0ON_position                          0x7
#define TMR0ON_size                              0x1
#define TMR0ON_value_mask                        0x80
#define TMR0ON_clear_mask                        0x7F


/*-----------------------------------#
| STATUS                       0xFD8 |
#------------------------------------#
| - | - | - | N | OV | ZERO | DC | C |
#------------------------------------#
| 7 | 6 | 5 | 4 | 3  | 2    | 1  | 0 |
#-----------------------------------*/

#define STATUS                                   0x0
#define STATUS_address                           0xFD8
#define STATUS_position                          0x0
#define STATUS_size                              0x8
#define STATUS_value_mask                        0xFF
#define STATUS_clear_mask                        0x0

#define C                                        0x0
#define C_address                                0xFD8
#define C_position                               0x0
#define C_size                                   0x1
#define C_value_mask                             0x1
#define C_clear_mask                             0xFE

#define CARRY                                    0x0
#define CARRY_address                            0xFD8
#define CARRY_position                           0x0
#define CARRY_size                               0x1
#define CARRY_value_mask                         0x1
#define CARRY_clear_mask                         0xFE

#define DC                                       0x1
#define DC_address                               0xFD8
#define DC_position                              0x1
#define DC_size                                  0x1
#define DC_value_mask                            0x2
#define DC_clear_mask                            0xFD

#define ZERO                                     0x2
#define ZERO_address                             0xFD8
#define ZERO_position                            0x2
#define ZERO_size                                0x1
#define ZERO_value_mask                          0x4
#define ZERO_clear_mask                          0xFB

#define Z                                        0x2
#define Z_address                                0xFD8
#define Z_position                               0x2
#define Z_size                                   0x1
#define Z_value_mask                             0x4
#define Z_clear_mask                             0xFB

#define OV                                       0x3
#define OV_address                               0xFD8
#define OV_position                              0x3
#define OV_size                                  0x1
#define OV_value_mask                            0x8
#define OV_clear_mask                            0xF7

#define OVERFLOW                                 0x3
#define OVERFLOW_address                         0xFD8
#define OVERFLOW_position                        0x3
#define OVERFLOW_size                            0x1
#define OVERFLOW_value_mask                      0x8
#define OVERFLOW_clear_mask                      0xF7

#define N                                        0x4
#define N_address                                0xFD8
#define N_position                               0x4
#define N_size                                   0x1
#define N_value_mask                             0x10
#define N_clear_mask                             0xEF

#define NEGATIVE                                 0x4
#define NEGATIVE_address                         0xFD8
#define NEGATIVE_position                        0x4
#define NEGATIVE_size                            0x1
#define NEGATIVE_value_mask                      0x10
#define NEGATIVE_clear_mask                      0xEF


/*--------------------------------------------------------------------#
| INTCON3                                                       0xFF0 |
#---------------------------------------------------------------------#
| INT2IP | INT1P | INT3E | INT2IE | INT1IE | INT3IF | INT2IF | INT1IF |
#---------------------------------------------------------------------#
| 7      | 6     | 5     | 4      | 3      | 2      | 1      | 0      |
#--------------------------------------------------------------------*/

#define INTCON3                                  0x0
#define INTCON3_address                          0xFF0
#define INTCON3_position                         0x0
#define INTCON3_size                             0x8
#define INTCON3_value_mask                       0xFF
#define INTCON3_clear_mask                       0x0

#define INT1IF                                   0x0
#define INT1IF_address                           0xFF0
#define INT1IF_position                          0x0
#define INT1IF_size                              0x1
#define INT1IF_value_mask                        0x1
#define INT1IF_clear_mask                        0xFE

#define INT1F                                    0x0
#define INT1F_address                            0xFF0
#define INT1F_position                           0x0
#define INT1F_size                               0x1
#define INT1F_value_mask                         0x1
#define INT1F_clear_mask                         0xFE

#define INT2IF                                   0x1
#define INT2IF_address                           0xFF0
#define INT2IF_position                          0x1
#define INT2IF_size                              0x1
#define INT2IF_value_mask                        0x2
#define INT2IF_clear_mask                        0xFD

#define INT2F                                    0x1
#define INT2F_address                            0xFF0
#define INT2F_position                           0x1
#define INT2F_size                               0x1
#define INT2F_value_mask                         0x2
#define INT2F_clear_mask                         0xFD

#define INT3F                                    0x2
#define INT3F_address                            0xFF0
#define INT3F_position                           0x2
#define INT3F_size                               0x1
#define INT3F_value_mask                         0x4
#define INT3F_clear_mask                         0xFB

#define INT3IF                                   0x2
#define INT3IF_address                           0xFF0
#define INT3IF_position                          0x2
#define INT3IF_size                              0x1
#define INT3IF_value_mask                        0x4
#define INT3IF_clear_mask                        0xFB

#define INT1E                                    0x3
#define INT1E_address                            0xFF0
#define INT1E_position                           0x3
#define INT1E_size                               0x1
#define INT1E_value_mask                         0x8
#define INT1E_clear_mask                         0xF7

#define INT1IE                                   0x3
#define INT1IE_address                           0xFF0
#define INT1IE_position                          0x3
#define INT1IE_size                              0x1
#define INT1IE_value_mask                        0x8
#define INT1IE_clear_mask                        0xF7

#define INT2IE                                   0x4
#define INT2IE_address                           0xFF0
#define INT2IE_position                          0x4
#define INT2IE_size                              0x1
#define INT2IE_value_mask                        0x10
#define INT2IE_clear_mask                        0xEF

#define INT2E                                    0x4
#define INT2E_address                            0xFF0
#define INT2E_position                           0x4
#define INT2E_size                               0x1
#define INT2E_value_mask                         0x10
#define INT2E_clear_mask                         0xEF

#define INT3E                                    0x5
#define INT3E_address                            0xFF0
#define INT3E_position                           0x5
#define INT3E_size                               0x1
#define INT3E_value_mask                         0x20
#define INT3E_clear_mask                         0xDF

#define INT3IE                                   0x5
#define INT3IE_address                           0xFF0
#define INT3IE_position                          0x5
#define INT3IE_size                              0x1
#define INT3IE_value_mask                        0x20
#define INT3IE_clear_mask                        0xDF

#define INT1P                                    0x6
#define INT1P_address                            0xFF0
#define INT1P_position                           0x6
#define INT1P_size                               0x1
#define INT1P_value_mask                         0x40
#define INT1P_clear_mask                         0xBF

#define INT1IP                                   0x6
#define INT1IP_address                           0xFF0
#define INT1IP_position                          0x6
#define INT1IP_size                              0x1
#define INT1IP_value_mask                        0x40
#define INT1IP_clear_mask                        0xBF

#define INT2IP                                   0x7
#define INT2IP_address                           0xFF0
#define INT2IP_position                          0x7
#define INT2IP_size                              0x1
#define INT2IP_value_mask                        0x80
#define INT2IP_clear_mask                        0x7F

#define INT2P                                    0x7
#define INT2P_address                            0xFF0
#define INT2P_position                           0x7
#define INT2P_size                               0x1
#define INT2P_value_mask                         0x80
#define INT2P_clear_mask                         0x7F


/*--------------------------------------------------------------------------#
| INTCON2                                                             0xFF1 |
#---------------------------------------------------------------------------#
| NOT_RBPU | INTEDG0 | INTEDG1 | INTEDG2 | INTEDG3 | TMR0IP | INT3IP | RBIP |
#---------------------------------------------------------------------------#
| 7        | 6       | 5       | 4       | 3       | 2      | 1      | 0    |
#--------------------------------------------------------------------------*/

#define INTCON2                                  0x0
#define INTCON2_address                          0xFF1
#define INTCON2_position                         0x0
#define INTCON2_size                             0x8
#define INTCON2_value_mask                       0xFF
#define INTCON2_clear_mask                       0x0

#define RBIP                                     0x0
#define RBIP_address                             0xFF1
#define RBIP_position                            0x0
#define RBIP_size                                0x1
#define RBIP_value_mask                          0x1
#define RBIP_clear_mask                          0xFE

#define INT3IP                                   0x1
#define INT3IP_address                           0xFF1
#define INT3IP_position                          0x1
#define INT3IP_size                              0x1
#define INT3IP_value_mask                        0x2
#define INT3IP_clear_mask                        0xFD

#define INT3P                                    0x1
#define INT3P_address                            0xFF1
#define INT3P_position                           0x1
#define INT3P_size                               0x1
#define INT3P_value_mask                         0x2
#define INT3P_clear_mask                         0xFD

#define TMR0IP                                   0x2
#define TMR0IP_address                           0xFF1
#define TMR0IP_position                          0x2
#define TMR0IP_size                              0x1
#define TMR0IP_value_mask                        0x4
#define TMR0IP_clear_mask                        0xFB

#define T0IP                                     0x2
#define T0IP_address                             0xFF1
#define T0IP_position                            0x2
#define T0IP_size                                0x1
#define T0IP_value_mask                          0x4
#define T0IP_clear_mask                          0xFB

#define INTEDG3                                  0x3
#define INTEDG3_address                          0xFF1
#define INTEDG3_position                         0x3
#define INTEDG3_size                             0x1
#define INTEDG3_value_mask                       0x8
#define INTEDG3_clear_mask                       0xF7

#define INTEDG2                                  0x4
#define INTEDG2_address                          0xFF1
#define INTEDG2_position                         0x4
#define INTEDG2_size                             0x1
#define INTEDG2_value_mask                       0x10
#define INTEDG2_clear_mask                       0xEF

#define INTEDG1                                  0x5
#define INTEDG1_address                          0xFF1
#define INTEDG1_position                         0x5
#define INTEDG1_size                             0x1
#define INTEDG1_value_mask                       0x20
#define INTEDG1_clear_mask                       0xDF

#define INTEDG0                                  0x6
#define INTEDG0_address                          0xFF1
#define INTEDG0_position                         0x6
#define INTEDG0_size                             0x1
#define INTEDG0_value_mask                       0x40
#define INTEDG0_clear_mask                       0xBF

#define RBPU                                     0x7
#define RBPU_address                             0xFF1
#define RBPU_position                            0x7
#define RBPU_size                                0x1
#define RBPU_value_mask                          0x80
#define RBPU_clear_mask                          0x7F

#define NOT_RBPU                                 0x7
#define NOT_RBPU_address                         0xFF1
#define NOT_RBPU_position                        0x7
#define NOT_RBPU_size                            0x1
#define NOT_RBPU_value_mask                      0x80
#define NOT_RBPU_clear_mask                      0x7F

#define nRBPU                                    0x7
#define nRBPU_address                            0xFF1
#define nRBPU_position                           0x7
#define nRBPU_size                               0x1
#define nRBPU_value_mask                         0x80
#define nRBPU_clear_mask                         0x7F


/*----------------------------------------------------------------#
| INTCON                                                    0xFF2 |
#-----------------------------------------------------------------#
| GIE_GIEH | PEIE | T0IE | INT0IE | RBIE | TMR0IF | INT0IF | RBIF |
#-----------------------------------------------------------------#
| 7        | 6    | 5    | 4      | 3    | 2      | 1      | 0    |
#----------------------------------------------------------------*/

#define INTCON                                   0x0
#define INTCON_address                           0xFF2
#define INTCON_position                          0x0
#define INTCON_size                              0x8
#define INTCON_value_mask                        0xFF
#define INTCON_clear_mask                        0x0

#define RBIF                                     0x0
#define RBIF_address                             0xFF2
#define RBIF_position                            0x0
#define RBIF_size                                0x1
#define RBIF_value_mask                          0x1
#define RBIF_clear_mask                          0xFE

#define INT0F                                    0x1
#define INT0F_address                            0xFF2
#define INT0F_position                           0x1
#define INT0F_size                               0x1
#define INT0F_value_mask                         0x2
#define INT0F_clear_mask                         0xFD

#define INT0IF                                   0x1
#define INT0IF_address                           0xFF2
#define INT0IF_position                          0x1
#define INT0IF_size                              0x1
#define INT0IF_value_mask                        0x2
#define INT0IF_clear_mask                        0xFD

#define T0IF                                     0x2
#define T0IF_address                             0xFF2
#define T0IF_position                            0x2
#define T0IF_size                                0x1
#define T0IF_value_mask                          0x4
#define T0IF_clear_mask                          0xFB

#define TMR0IF                                   0x2
#define TMR0IF_address                           0xFF2
#define TMR0IF_position                          0x2
#define TMR0IF_size                              0x1
#define TMR0IF_value_mask                        0x4
#define TMR0IF_clear_mask                        0xFB

#define RBIE                                     0x3
#define RBIE_address                             0xFF2
#define RBIE_position                            0x3
#define RBIE_size                                0x1
#define RBIE_value_mask                          0x8
#define RBIE_clear_mask                          0xF7

#define INT0E                                    0x4
#define INT0E_address                            0xFF2
#define INT0E_position                           0x4
#define INT0E_size                               0x1
#define INT0E_value_mask                         0x10
#define INT0E_clear_mask                         0xEF

#define INT0IE                                   0x4
#define INT0IE_address                           0xFF2
#define INT0IE_position                          0x4
#define INT0IE_size                              0x1
#define INT0IE_value_mask                        0x10
#define INT0IE_clear_mask                        0xEF

#define T0IE                                     0x5
#define T0IE_address                             0xFF2
#define T0IE_position                            0x5
#define T0IE_size                                0x1
#define T0IE_value_mask                          0x20
#define T0IE_clear_mask                          0xDF

#define TMR0IE                                   0x5
#define TMR0IE_address                           0xFF2
#define TMR0IE_position                          0x5
#define TMR0IE_size                              0x1
#define TMR0IE_value_mask                        0x20
#define TMR0IE_clear_mask                        0xDF

#define PEIE                                     0x6
#define PEIE_address                             0xFF2
#define PEIE_position                            0x6
#define PEIE_size                                0x1
#define PEIE_value_mask                          0x40
#define PEIE_clear_mask                          0xBF

#define PEIE_GIEL                                0x6
#define PEIE_GIEL_address                        0xFF2
#define PEIE_GIEL_position                       0x6
#define PEIE_GIEL_size                           0x1
#define PEIE_GIEL_value_mask                     0x40
#define PEIE_GIEL_clear_mask                     0xBF

#define GIEL                                     0x6
#define GIEL_address                             0xFF2
#define GIEL_position                            0x6
#define GIEL_size                                0x1
#define GIEL_value_mask                          0x40
#define GIEL_clear_mask                          0xBF

#define GIE_GIEH                                 0x7
#define GIE_GIEH_address                         0xFF2
#define GIE_GIEH_position                        0x7
#define GIE_GIEH_size                            0x1
#define GIE_GIEH_value_mask                      0x80
#define GIE_GIEH_clear_mask                      0x7F

#define GIE                                      0x7
#define GIE_address                              0xFF2
#define GIE_position                             0x7
#define GIE_size                                 0x1
#define GIE_value_mask                           0x80
#define GIE_clear_mask                           0x7F

#define GIEH                                     0x7
#define GIEH_address                             0xFF2
#define GIEH_position                            0x7
#define GIEH_size                                0x1
#define GIEH_value_mask                          0x80
#define GIEH_clear_mask                          0x7F


/*----------------------------------------------------------------------#
| STKPTR                                                          0xFFC |
#-----------------------------------------------------------------------#
| STKOVF | STKUNF | - | STKPTR4 | STKPTR3 | STKPTR2 | STKPTR1 | STKPTR0 |
#-----------------------------------------------------------------------#
| 7      | 6      | 5 | 4       | 3       | 2       | 1       | 0       |
#----------------------------------------------------------------------*/

#define STKPTR0                                  0x0
#define STKPTR0_address                          0xFFC
#define STKPTR0_position                         0x0
#define STKPTR0_size                             0x1
#define STKPTR0_value_mask                       0x1
#define STKPTR0_clear_mask                       0xFE

#define STKPTR                                   0x0
#define STKPTR_address                           0xFFC
#define STKPTR_position                          0x0
#define STKPTR_size                              0x5
#define STKPTR_value_mask                        0x1F
#define STKPTR_clear_mask                        0xE0

#define STKPTR1                                  0x1
#define STKPTR1_address                          0xFFC
#define STKPTR1_position                         0x1
#define STKPTR1_size                             0x1
#define STKPTR1_value_mask                       0x2
#define STKPTR1_clear_mask                       0xFD

#define STKPTR2                                  0x2
#define STKPTR2_address                          0xFFC
#define STKPTR2_position                         0x2
#define STKPTR2_size                             0x1
#define STKPTR2_value_mask                       0x4
#define STKPTR2_clear_mask                       0xFB

#define STKPTR3                                  0x3
#define STKPTR3_address                          0xFFC
#define STKPTR3_position                         0x3
#define STKPTR3_size                             0x1
#define STKPTR3_value_mask                       0x8
#define STKPTR3_clear_mask                       0xF7

#define STKPTR4                                  0x4
#define STKPTR4_address                          0xFFC
#define STKPTR4_position                         0x4
#define STKPTR4_size                             0x1
#define STKPTR4_value_mask                       0x10
#define STKPTR4_clear_mask                       0xEF

#define STKUNF                                   0x6
#define STKUNF_address                           0xFFC
#define STKUNF_position                          0x6
#define STKUNF_size                              0x1
#define STKUNF_value_mask                        0x40
#define STKUNF_clear_mask                        0xBF

#define STKOVF                                   0x7
#define STKOVF_address                           0xFFC
#define STKOVF_position                          0x7
#define STKOVF_size                              0x1
#define STKOVF_value_mask                        0x80
#define STKOVF_clear_mask                        0x7F

#define STKFUL                                   0x7
#define STKFUL_address                           0xFFC
#define STKFUL_position                          0x7
#define STKFUL_size                              0x1
#define STKFUL_value_mask                        0x80
#define STKFUL_clear_mask                        0x7F

#endif // _PIC18F8390_H_
