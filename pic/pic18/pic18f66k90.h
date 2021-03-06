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

#ifndef _PIC18F66K90_H_
#define _PIC18F66K90_H_


/*-----------------------------------------------------#
| LCDCON                                         0xEF4 |
#------------------------------------------------------#
| LCDEN | SLPEN | WERR | - | CS1 | CS0 | LMUX1 | LMUX0 |
#------------------------------------------------------#
| 7     | 6     | 5    | 4 | 3   | 2   | 1     | 0     |
#-----------------------------------------------------*/

#define LCDCON                                   0x0
#define LCDCON_address                           0xEF4
#define LCDCON_position                          0x0
#define LCDCON_size                              0x8
#define LCDCON_value_mask                        0xFF
#define LCDCON_clear_mask                        0x0

#define LMUX0                                    0x0
#define LMUX0_address                            0xEF4
#define LMUX0_position                           0x0
#define LMUX0_size                               0x1
#define LMUX0_value_mask                         0x1
#define LMUX0_clear_mask                         0xFE

#define LMUX                                     0x0
#define LMUX_address                             0xEF4
#define LMUX_position                            0x0
#define LMUX_size                                0x2
#define LMUX_value_mask                          0x3
#define LMUX_clear_mask                          0xFC

#define LMUX1                                    0x1
#define LMUX1_address                            0xEF4
#define LMUX1_position                           0x1
#define LMUX1_size                               0x1
#define LMUX1_value_mask                         0x2
#define LMUX1_clear_mask                         0xFD

#define LCDCON_CS                                0x2
#define LCDCON_CS_address                        0xEF4
#define LCDCON_CS_position                       0x2
#define LCDCON_CS_size                           0x2
#define LCDCON_CS_value_mask                     0xC
#define LCDCON_CS_clear_mask                     0xF3

#define CS0                                      0x2
#define CS0_address                              0xEF4
#define CS0_position                             0x2
#define CS0_size                                 0x1
#define CS0_value_mask                           0x4
#define CS0_clear_mask                           0xFB

#define CS1                                      0x3
#define CS1_address                              0xEF4
#define CS1_position                             0x3
#define CS1_size                                 0x1
#define CS1_value_mask                           0x8
#define CS1_clear_mask                           0xF7

#define WERR                                     0x5
#define WERR_address                             0xEF4
#define WERR_position                            0x5
#define WERR_size                                0x1
#define WERR_value_mask                          0x20
#define WERR_clear_mask                          0xDF

#define SLPEN                                    0x6
#define SLPEN_address                            0xEF4
#define SLPEN_position                           0x6
#define SLPEN_size                               0x1
#define SLPEN_value_mask                         0x40
#define SLPEN_clear_mask                         0xBF

#define LCDEN                                    0x7
#define LCDEN_address                            0xEF4
#define LCDEN_position                           0x7
#define LCDEN_size                               0x1
#define LCDEN_value_mask                         0x80
#define LCDEN_clear_mask                         0x7F


/*-------------------------------------------------#
| LCDPS                                      0xEF5 |
#--------------------------------------------------#
| WFT | BIASMD | LCDA | WA | LP3 | LP2 | LP1 | LP0 |
#--------------------------------------------------#
| 7   | 6      | 5    | 4  | 3   | 2   | 1   | 0   |
#-------------------------------------------------*/

#define LCDPS                                    0x0
#define LCDPS_address                            0xEF5
#define LCDPS_position                           0x0
#define LCDPS_size                               0x8
#define LCDPS_value_mask                         0xFF
#define LCDPS_clear_mask                         0x0

#define LP                                       0x0
#define LP_address                               0xEF5
#define LP_position                              0x0
#define LP_size                                  0x4
#define LP_value_mask                            0xF
#define LP_clear_mask                            0xF0

#define LP0                                      0x0
#define LP0_address                              0xEF5
#define LP0_position                             0x0
#define LP0_size                                 0x1
#define LP0_value_mask                           0x1
#define LP0_clear_mask                           0xFE

#define LP1                                      0x1
#define LP1_address                              0xEF5
#define LP1_position                             0x1
#define LP1_size                                 0x1
#define LP1_value_mask                           0x2
#define LP1_clear_mask                           0xFD

#define LP2                                      0x2
#define LP2_address                              0xEF5
#define LP2_position                             0x2
#define LP2_size                                 0x1
#define LP2_value_mask                           0x4
#define LP2_clear_mask                           0xFB

#define LP3                                      0x3
#define LP3_address                              0xEF5
#define LP3_position                             0x3
#define LP3_size                                 0x1
#define LP3_value_mask                           0x8
#define LP3_clear_mask                           0xF7

#define WA                                       0x4
#define WA_address                               0xEF5
#define WA_position                              0x4
#define WA_size                                  0x1
#define WA_value_mask                            0x10
#define WA_clear_mask                            0xEF

#define LCDA                                     0x5
#define LCDA_address                             0xEF5
#define LCDA_position                            0x5
#define LCDA_size                                0x1
#define LCDA_value_mask                          0x20
#define LCDA_clear_mask                          0xDF

#define BIASMD                                   0x6
#define BIASMD_address                           0xEF5
#define BIASMD_position                          0x6
#define BIASMD_size                              0x1
#define BIASMD_value_mask                        0x40
#define BIASMD_clear_mask                        0xBF

#define WFT                                      0x7
#define WFT_address                              0xEF5
#define WFT_position                             0x7
#define WFT_size                                 0x1
#define WFT_value_mask                           0x80
#define WFT_clear_mask                           0x7F


/*------------------------------------------------------#
| LCDSE0                                          0xEF6 |
#-------------------------------------------------------#
| SE07 | SE06 | SE05 | SE04 | SE03 | SE02 | SE01 | SE00 |
#-------------------------------------------------------#
| 7    | 6    | 5    | 4    | 3    | 2    | 1    | 0    |
#------------------------------------------------------*/

#define LCDSE0                                   0x0
#define LCDSE0_address                           0xEF6
#define LCDSE0_position                          0x0
#define LCDSE0_size                              0x8
#define LCDSE0_value_mask                        0xFF
#define LCDSE0_clear_mask                        0x0

#define SE00                                     0x0
#define SE00_address                             0xEF6
#define SE00_position                            0x0
#define SE00_size                                0x1
#define SE00_value_mask                          0x1
#define SE00_clear_mask                          0xFE

#define SE01                                     0x1
#define SE01_address                             0xEF6
#define SE01_position                            0x1
#define SE01_size                                0x1
#define SE01_value_mask                          0x2
#define SE01_clear_mask                          0xFD

#define SE02                                     0x2
#define SE02_address                             0xEF6
#define SE02_position                            0x2
#define SE02_size                                0x1
#define SE02_value_mask                          0x4
#define SE02_clear_mask                          0xFB

#define SE03                                     0x3
#define SE03_address                             0xEF6
#define SE03_position                            0x3
#define SE03_size                                0x1
#define SE03_value_mask                          0x8
#define SE03_clear_mask                          0xF7

#define SE04                                     0x4
#define SE04_address                             0xEF6
#define SE04_position                            0x4
#define SE04_size                                0x1
#define SE04_value_mask                          0x10
#define SE04_clear_mask                          0xEF

#define SE05                                     0x5
#define SE05_address                             0xEF6
#define SE05_position                            0x5
#define SE05_size                                0x1
#define SE05_value_mask                          0x20
#define SE05_clear_mask                          0xDF

#define SE06                                     0x6
#define SE06_address                             0xEF6
#define SE06_position                            0x6
#define SE06_size                                0x1
#define SE06_value_mask                          0x40
#define SE06_clear_mask                          0xBF

#define SE07                                     0x7
#define SE07_address                             0xEF6
#define SE07_position                            0x7
#define SE07_size                                0x1
#define SE07_value_mask                          0x80
#define SE07_clear_mask                          0x7F


/*------------------------------------------------------#
| LCDSE1                                          0xEF7 |
#-------------------------------------------------------#
| SE15 | SE14 | SE13 | SE12 | SE11 | SE10 | SE09 | SE08 |
#-------------------------------------------------------#
| 7    | 6    | 5    | 4    | 3    | 2    | 1    | 0    |
#------------------------------------------------------*/

#define LCDSE1                                   0x0
#define LCDSE1_address                           0xEF7
#define LCDSE1_position                          0x0
#define LCDSE1_size                              0x8
#define LCDSE1_value_mask                        0xFF
#define LCDSE1_clear_mask                        0x0

#define SE08                                     0x0
#define SE08_address                             0xEF7
#define SE08_position                            0x0
#define SE08_size                                0x1
#define SE08_value_mask                          0x1
#define SE08_clear_mask                          0xFE

#define SE09                                     0x1
#define SE09_address                             0xEF7
#define SE09_position                            0x1
#define SE09_size                                0x1
#define SE09_value_mask                          0x2
#define SE09_clear_mask                          0xFD

#define SE10                                     0x2
#define SE10_address                             0xEF7
#define SE10_position                            0x2
#define SE10_size                                0x1
#define SE10_value_mask                          0x4
#define SE10_clear_mask                          0xFB

#define SE11                                     0x3
#define SE11_address                             0xEF7
#define SE11_position                            0x3
#define SE11_size                                0x1
#define SE11_value_mask                          0x8
#define SE11_clear_mask                          0xF7

#define SE12                                     0x4
#define SE12_address                             0xEF7
#define SE12_position                            0x4
#define SE12_size                                0x1
#define SE12_value_mask                          0x10
#define SE12_clear_mask                          0xEF

#define SE13                                     0x5
#define SE13_address                             0xEF7
#define SE13_position                            0x5
#define SE13_size                                0x1
#define SE13_value_mask                          0x20
#define SE13_clear_mask                          0xDF

#define SE14                                     0x6
#define SE14_address                             0xEF7
#define SE14_position                            0x6
#define SE14_size                                0x1
#define SE14_value_mask                          0x40
#define SE14_clear_mask                          0xBF

#define SE15                                     0x7
#define SE15_address                             0xEF7
#define SE15_position                            0x7
#define SE15_size                                0x1
#define SE15_value_mask                          0x80
#define SE15_clear_mask                          0x7F


/*------------------------------------------------------#
| LCDSE2                                          0xEF8 |
#-------------------------------------------------------#
| SE23 | SE22 | SE21 | SE20 | SE19 | SE18 | SE17 | SE16 |
#-------------------------------------------------------#
| 7    | 6    | 5    | 4    | 3    | 2    | 1    | 0    |
#------------------------------------------------------*/

#define LCDSE2                                   0x0
#define LCDSE2_address                           0xEF8
#define LCDSE2_position                          0x0
#define LCDSE2_size                              0x8
#define LCDSE2_value_mask                        0xFF
#define LCDSE2_clear_mask                        0x0

#define SE16                                     0x0
#define SE16_address                             0xEF8
#define SE16_position                            0x0
#define SE16_size                                0x1
#define SE16_value_mask                          0x1
#define SE16_clear_mask                          0xFE

#define SE17                                     0x1
#define SE17_address                             0xEF8
#define SE17_position                            0x1
#define SE17_size                                0x1
#define SE17_value_mask                          0x2
#define SE17_clear_mask                          0xFD

#define SE18                                     0x2
#define SE18_address                             0xEF8
#define SE18_position                            0x2
#define SE18_size                                0x1
#define SE18_value_mask                          0x4
#define SE18_clear_mask                          0xFB

#define SE19                                     0x3
#define SE19_address                             0xEF8
#define SE19_position                            0x3
#define SE19_size                                0x1
#define SE19_value_mask                          0x8
#define SE19_clear_mask                          0xF7

#define SE20                                     0x4
#define SE20_address                             0xEF8
#define SE20_position                            0x4
#define SE20_size                                0x1
#define SE20_value_mask                          0x10
#define SE20_clear_mask                          0xEF

#define SE21                                     0x5
#define SE21_address                             0xEF8
#define SE21_position                            0x5
#define SE21_size                                0x1
#define SE21_value_mask                          0x20
#define SE21_clear_mask                          0xDF

#define SE22                                     0x6
#define SE22_address                             0xEF8
#define SE22_position                            0x6
#define SE22_size                                0x1
#define SE22_value_mask                          0x40
#define SE22_clear_mask                          0xBF

#define SE23                                     0x7
#define SE23_address                             0xEF8
#define SE23_position                            0x7
#define SE23_size                                0x1
#define SE23_value_mask                          0x80
#define SE23_clear_mask                          0x7F


/*------------------------------------------------------#
| LCDSE3                                          0xEF9 |
#-------------------------------------------------------#
| SE31 | SE30 | SE29 | SE28 | SE27 | SE26 | SE25 | SE24 |
#-------------------------------------------------------#
| 7    | 6    | 5    | 4    | 3    | 2    | 1    | 0    |
#------------------------------------------------------*/

#define LCDSE3                                   0x0
#define LCDSE3_address                           0xEF9
#define LCDSE3_position                          0x0
#define LCDSE3_size                              0x8
#define LCDSE3_value_mask                        0xFF
#define LCDSE3_clear_mask                        0x0

#define SE24                                     0x0
#define SE24_address                             0xEF9
#define SE24_position                            0x0
#define SE24_size                                0x1
#define SE24_value_mask                          0x1
#define SE24_clear_mask                          0xFE

#define SE25                                     0x1
#define SE25_address                             0xEF9
#define SE25_position                            0x1
#define SE25_size                                0x1
#define SE25_value_mask                          0x2
#define SE25_clear_mask                          0xFD

#define SE26                                     0x2
#define SE26_address                             0xEF9
#define SE26_position                            0x2
#define SE26_size                                0x1
#define SE26_value_mask                          0x4
#define SE26_clear_mask                          0xFB

#define SE27                                     0x3
#define SE27_address                             0xEF9
#define SE27_position                            0x3
#define SE27_size                                0x1
#define SE27_value_mask                          0x8
#define SE27_clear_mask                          0xF7

#define SE28                                     0x4
#define SE28_address                             0xEF9
#define SE28_position                            0x4
#define SE28_size                                0x1
#define SE28_value_mask                          0x10
#define SE28_clear_mask                          0xEF

#define SE29                                     0x5
#define SE29_address                             0xEF9
#define SE29_position                            0x5
#define SE29_size                                0x1
#define SE29_value_mask                          0x20
#define SE29_clear_mask                          0xDF

#define SE30                                     0x6
#define SE30_address                             0xEF9
#define SE30_position                            0x6
#define SE30_size                                0x1
#define SE30_value_mask                          0x40
#define SE30_clear_mask                          0xBF

#define SE31                                     0x7
#define SE31_address                             0xEF9
#define SE31_position                            0x7
#define SE31_size                                0x1
#define SE31_value_mask                          0x80
#define SE31_clear_mask                          0x7F


/*---------------------------------#
| LCDSE4                     0xEFA |
#----------------------------------#
| - | - | - | - | - | - | - | SE32 |
#----------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0    |
#---------------------------------*/

#define LCDSE4                                   0x0
#define LCDSE4_address                           0xEFA
#define LCDSE4_position                          0x0
#define LCDSE4_size                              0x8
#define LCDSE4_value_mask                        0xFF
#define LCDSE4_clear_mask                        0x0

#define SE32                                     0x0
#define SE32_address                             0xEFA
#define SE32_position                            0x0
#define SE32_size                                0x1
#define SE32_value_mask                          0x1
#define SE32_clear_mask                          0xFE


/*----------------------------------------------------------------------#
| LCDRL                                                           0xEFC |
#-----------------------------------------------------------------------#
| LRLAP1 | LRLAP0 | LRLBP1 | LRLBP0 | LCDIRI | LRLAT2 | LRLAT1 | LRLAT0 |
#-----------------------------------------------------------------------#
| 7      | 6      | 5      | 4      | 3      | 2      | 1      | 0      |
#----------------------------------------------------------------------*/

#define LCDRL                                    0x0
#define LCDRL_address                            0xEFC
#define LCDRL_position                           0x0
#define LCDRL_size                               0x8
#define LCDRL_value_mask                         0xFF
#define LCDRL_clear_mask                         0x0

#define LRLAT0                                   0x0
#define LRLAT0_address                           0xEFC
#define LRLAT0_position                          0x0
#define LRLAT0_size                              0x1
#define LRLAT0_value_mask                        0x1
#define LRLAT0_clear_mask                        0xFE

#define LRLAT                                    0x0
#define LRLAT_address                            0xEFC
#define LRLAT_position                           0x0
#define LRLAT_size                               0x3
#define LRLAT_value_mask                         0x7
#define LRLAT_clear_mask                         0xF8

#define LRLAT1                                   0x1
#define LRLAT1_address                           0xEFC
#define LRLAT1_position                          0x1
#define LRLAT1_size                              0x1
#define LRLAT1_value_mask                        0x2
#define LRLAT1_clear_mask                        0xFD

#define LRLAT2                                   0x2
#define LRLAT2_address                           0xEFC
#define LRLAT2_position                          0x2
#define LRLAT2_size                              0x1
#define LRLAT2_value_mask                        0x4
#define LRLAT2_clear_mask                        0xFB

#define LCDIRI                                   0x3
#define LCDIRI_address                           0xEFC
#define LCDIRI_position                          0x3
#define LCDIRI_size                              0x1
#define LCDIRI_value_mask                        0x8
#define LCDIRI_clear_mask                        0xF7

#define LRLBP                                    0x4
#define LRLBP_address                            0xEFC
#define LRLBP_position                           0x4
#define LRLBP_size                               0x2
#define LRLBP_value_mask                         0x30
#define LRLBP_clear_mask                         0xCF

#define LRLBP0                                   0x4
#define LRLBP0_address                           0xEFC
#define LRLBP0_position                          0x4
#define LRLBP0_size                              0x1
#define LRLBP0_value_mask                        0x10
#define LRLBP0_clear_mask                        0xEF

#define LRLBP1                                   0x5
#define LRLBP1_address                           0xEFC
#define LRLBP1_position                          0x5
#define LRLBP1_size                              0x1
#define LRLBP1_value_mask                        0x20
#define LRLBP1_clear_mask                        0xDF

#define LRLAP0                                   0x6
#define LRLAP0_address                           0xEFC
#define LRLAP0_position                          0x6
#define LRLAP0_size                              0x1
#define LRLAP0_value_mask                        0x40
#define LRLAP0_clear_mask                        0xBF

#define LRLAP                                    0x6
#define LRLAP_address                            0xEFC
#define LRLAP_position                           0x6
#define LRLAP_size                               0x2
#define LRLAP_value_mask                         0xC0
#define LRLAP_clear_mask                         0x3F

#define LRLAP1                                   0x7
#define LRLAP1_address                           0xEFC
#define LRLAP1_position                          0x7
#define LRLAP1_size                              0x1
#define LRLAP1_value_mask                        0x80
#define LRLAP1_clear_mask                        0x7F


/*----------------------------------------------------------------------------#
| LCDREF                                                                0xEFD |
#-----------------------------------------------------------------------------#
| LCDIRE | LCDIRS | LCDCST2 | LCDCST1 | LCDCST0 | VLCD3PE | VLCD2PE | VLCD1PE |
#-----------------------------------------------------------------------------#
| 7      | 6      | 5       | 4       | 3       | 2       | 1       | 0       |
#----------------------------------------------------------------------------*/

#define LCDREF                                   0x0
#define LCDREF_address                           0xEFD
#define LCDREF_position                          0x0
#define LCDREF_size                              0x8
#define LCDREF_value_mask                        0xFF
#define LCDREF_clear_mask                        0x0

#define VLCD1PE                                  0x0
#define VLCD1PE_address                          0xEFD
#define VLCD1PE_position                         0x0
#define VLCD1PE_size                             0x1
#define VLCD1PE_value_mask                       0x1
#define VLCD1PE_clear_mask                       0xFE

#define VLCD2PE                                  0x1
#define VLCD2PE_address                          0xEFD
#define VLCD2PE_position                         0x1
#define VLCD2PE_size                             0x1
#define VLCD2PE_value_mask                       0x2
#define VLCD2PE_clear_mask                       0xFD

#define VLCD3PE                                  0x2
#define VLCD3PE_address                          0xEFD
#define VLCD3PE_position                         0x2
#define VLCD3PE_size                             0x1
#define VLCD3PE_value_mask                       0x4
#define VLCD3PE_clear_mask                       0xFB

#define LCDCST0                                  0x3
#define LCDCST0_address                          0xEFD
#define LCDCST0_position                         0x3
#define LCDCST0_size                             0x1
#define LCDCST0_value_mask                       0x8
#define LCDCST0_clear_mask                       0xF7

#define LCDCST                                   0x3
#define LCDCST_address                           0xEFD
#define LCDCST_position                          0x3
#define LCDCST_size                              0x3
#define LCDCST_value_mask                        0x38
#define LCDCST_clear_mask                        0xC7

#define LCDCST1                                  0x4
#define LCDCST1_address                          0xEFD
#define LCDCST1_position                         0x4
#define LCDCST1_size                             0x1
#define LCDCST1_value_mask                       0x10
#define LCDCST1_clear_mask                       0xEF

#define LCDCST2                                  0x5
#define LCDCST2_address                          0xEFD
#define LCDCST2_position                         0x5
#define LCDCST2_size                             0x1
#define LCDCST2_value_mask                       0x20
#define LCDCST2_clear_mask                       0xDF

#define LCDIRS                                   0x6
#define LCDIRS_address                           0xEFD
#define LCDIRS_position                          0x6
#define LCDIRS_size                              0x1
#define LCDIRS_value_mask                        0x40
#define LCDIRS_clear_mask                        0xBF

#define LCDIRE                                   0x7
#define LCDIRE_address                           0xEFD
#define LCDIRE_position                          0x7
#define LCDIRE_size                              0x1
#define LCDIRE_value_mask                        0x80
#define LCDIRE_clear_mask                        0x7F


/*---------------------------------------------------------------------------------#
| SSP2CON2                                                                   0xEFE |
#----------------------------------------------------------------------------------#
| GCEN2 | SSP2CON2_ACKSTAT | ADMSK52 | ACKEN2 | ADMSK32 | ADMSK22 | ADMSK12 | SEN2 |
#----------------------------------------------------------------------------------#
| 7     | 6                | 5       | 4      | 3       | 2       | 1       | 0    |
#---------------------------------------------------------------------------------*/

#define SSP2CON2                                 0x0
#define SSP2CON2_address                         0xEFE
#define SSP2CON2_position                        0x0
#define SSP2CON2_size                            0x8
#define SSP2CON2_value_mask                      0xFF
#define SSP2CON2_clear_mask                      0x0

#define SEN2                                     0x0
#define SEN2_address                             0xEFE
#define SEN2_position                            0x0
#define SEN2_size                                0x1
#define SEN2_value_mask                          0x1
#define SEN2_clear_mask                          0xFE

#define SSP2CON2_SEN                             0x0
#define SSP2CON2_SEN_address                     0xEFE
#define SSP2CON2_SEN_position                    0x0
#define SSP2CON2_SEN_size                        0x1
#define SSP2CON2_SEN_value_mask                  0x1
#define SSP2CON2_SEN_clear_mask                  0xFE

#define ADMSK12                                  0x1
#define ADMSK12_address                          0xEFE
#define ADMSK12_position                         0x1
#define ADMSK12_size                             0x1
#define ADMSK12_value_mask                       0x2
#define ADMSK12_clear_mask                       0xFD

#define SSP2CON2_RSEN                            0x1
#define SSP2CON2_RSEN_address                    0xEFE
#define SSP2CON2_RSEN_position                   0x1
#define SSP2CON2_RSEN_size                       0x1
#define SSP2CON2_RSEN_value_mask                 0x2
#define SSP2CON2_RSEN_clear_mask                 0xFD

#define RSEN2                                    0x1
#define RSEN2_address                            0xEFE
#define RSEN2_position                           0x1
#define RSEN2_size                               0x1
#define RSEN2_value_mask                         0x2
#define RSEN2_clear_mask                         0xFD

#define SSP2CON2_ADMSK1                          0x1
#define SSP2CON2_ADMSK1_address                  0xEFE
#define SSP2CON2_ADMSK1_position                 0x1
#define SSP2CON2_ADMSK1_size                     0x1
#define SSP2CON2_ADMSK1_value_mask               0x2
#define SSP2CON2_ADMSK1_clear_mask               0xFD

#define ADMSK22                                  0x2
#define ADMSK22_address                          0xEFE
#define ADMSK22_position                         0x2
#define ADMSK22_size                             0x1
#define ADMSK22_value_mask                       0x4
#define ADMSK22_clear_mask                       0xFB

#define PEN2                                     0x2
#define PEN2_address                             0xEFE
#define PEN2_position                            0x2
#define PEN2_size                                0x1
#define PEN2_value_mask                          0x4
#define PEN2_clear_mask                          0xFB

#define SSP2CON2_PEN                             0x2
#define SSP2CON2_PEN_address                     0xEFE
#define SSP2CON2_PEN_position                    0x2
#define SSP2CON2_PEN_size                        0x1
#define SSP2CON2_PEN_value_mask                  0x4
#define SSP2CON2_PEN_clear_mask                  0xFB

#define SSP2CON2_ADMSK2                          0x2
#define SSP2CON2_ADMSK2_address                  0xEFE
#define SSP2CON2_ADMSK2_position                 0x2
#define SSP2CON2_ADMSK2_size                     0x1
#define SSP2CON2_ADMSK2_value_mask               0x4
#define SSP2CON2_ADMSK2_clear_mask               0xFB

#define ADMSK32                                  0x3
#define ADMSK32_address                          0xEFE
#define ADMSK32_position                         0x3
#define ADMSK32_size                             0x1
#define ADMSK32_value_mask                       0x8
#define ADMSK32_clear_mask                       0xF7

#define SSP2CON2_RCEN                            0x3
#define SSP2CON2_RCEN_address                    0xEFE
#define SSP2CON2_RCEN_position                   0x3
#define SSP2CON2_RCEN_size                       0x1
#define SSP2CON2_RCEN_value_mask                 0x8
#define SSP2CON2_RCEN_clear_mask                 0xF7

#define RCEN2                                    0x3
#define RCEN2_address                            0xEFE
#define RCEN2_position                           0x3
#define RCEN2_size                               0x1
#define RCEN2_value_mask                         0x8
#define RCEN2_clear_mask                         0xF7

#define SSP2CON2_ADMSK3                          0x3
#define SSP2CON2_ADMSK3_address                  0xEFE
#define SSP2CON2_ADMSK3_position                 0x3
#define SSP2CON2_ADMSK3_size                     0x1
#define SSP2CON2_ADMSK3_value_mask               0x8
#define SSP2CON2_ADMSK3_clear_mask               0xF7

#define ACKEN2                                   0x4
#define ACKEN2_address                           0xEFE
#define ACKEN2_position                          0x4
#define ACKEN2_size                              0x1
#define ACKEN2_value_mask                        0x10
#define ACKEN2_clear_mask                        0xEF

#define ADMSK42                                  0x4
#define ADMSK42_address                          0xEFE
#define ADMSK42_position                         0x4
#define ADMSK42_size                             0x1
#define ADMSK42_value_mask                       0x10
#define ADMSK42_clear_mask                       0xEF

#define SSP2CON2_ADMSK4                          0x4
#define SSP2CON2_ADMSK4_address                  0xEFE
#define SSP2CON2_ADMSK4_position                 0x4
#define SSP2CON2_ADMSK4_size                     0x1
#define SSP2CON2_ADMSK4_value_mask               0x10
#define SSP2CON2_ADMSK4_clear_mask               0xEF

#define SSP2CON2_ACKEN                           0x4
#define SSP2CON2_ACKEN_address                   0xEFE
#define SSP2CON2_ACKEN_position                  0x4
#define SSP2CON2_ACKEN_size                      0x1
#define SSP2CON2_ACKEN_value_mask                0x10
#define SSP2CON2_ACKEN_clear_mask                0xEF

#define ACKDT2                                   0x5
#define ACKDT2_address                           0xEFE
#define ACKDT2_position                          0x5
#define ACKDT2_size                              0x1
#define ACKDT2_value_mask                        0x20
#define ACKDT2_clear_mask                        0xDF

#define ADMSK52                                  0x5
#define ADMSK52_address                          0xEFE
#define ADMSK52_position                         0x5
#define ADMSK52_size                             0x1
#define ADMSK52_value_mask                       0x20
#define ADMSK52_clear_mask                       0xDF

#define SSP2CON2_ACKDT                           0x5
#define SSP2CON2_ACKDT_address                   0xEFE
#define SSP2CON2_ACKDT_position                  0x5
#define SSP2CON2_ACKDT_size                      0x1
#define SSP2CON2_ACKDT_value_mask                0x20
#define SSP2CON2_ACKDT_clear_mask                0xDF

#define SSP2CON2_ADMSK5                          0x5
#define SSP2CON2_ADMSK5_address                  0xEFE
#define SSP2CON2_ADMSK5_position                 0x5
#define SSP2CON2_ADMSK5_size                     0x1
#define SSP2CON2_ADMSK5_value_mask               0x20
#define SSP2CON2_ADMSK5_clear_mask               0xDF

#define SSP2CON2_ACKSTAT                         0x6
#define SSP2CON2_ACKSTAT_address                 0xEFE
#define SSP2CON2_ACKSTAT_position                0x6
#define SSP2CON2_ACKSTAT_size                    0x1
#define SSP2CON2_ACKSTAT_value_mask              0x40
#define SSP2CON2_ACKSTAT_clear_mask              0xBF

#define ACKSTAT2                                 0x6
#define ACKSTAT2_address                         0xEFE
#define ACKSTAT2_position                        0x6
#define ACKSTAT2_size                            0x1
#define ACKSTAT2_value_mask                      0x40
#define ACKSTAT2_clear_mask                      0xBF

#define SSP2CON2_GCEN                            0x7
#define SSP2CON2_GCEN_address                    0xEFE
#define SSP2CON2_GCEN_position                   0x7
#define SSP2CON2_GCEN_size                       0x1
#define SSP2CON2_GCEN_value_mask                 0x80
#define SSP2CON2_GCEN_clear_mask                 0x7F

#define GCEN2                                    0x7
#define GCEN2_address                            0xEFE
#define GCEN2_position                           0x7
#define GCEN2_size                               0x1
#define GCEN2_value_mask                         0x80
#define GCEN2_clear_mask                         0x7F


/*---------------------------------------------------------------------------------------------------------------------------#
| SSP2CON1                                                                                                             0xEFF |
#----------------------------------------------------------------------------------------------------------------------------#
| WCOL2 | SSP2CON1_SSPOV | SSP2CON1_SSPEN | SSP2CON1_CKP | SSP2CON1_SSPM3 | SSP2CON1_SSPM2 | SSP2CON1_SSPM1 | SSP2CON1_SSPM0 |
#----------------------------------------------------------------------------------------------------------------------------#
| 7     | 6              | 5              | 4            | 3              | 2              | 1              | 0              |
#---------------------------------------------------------------------------------------------------------------------------*/

#define SSP2CON1                                 0x0
#define SSP2CON1_address                         0xEFF
#define SSP2CON1_position                        0x0
#define SSP2CON1_size                            0x8
#define SSP2CON1_value_mask                      0xFF
#define SSP2CON1_clear_mask                      0x0

#define SSP2CON1_SSPM                            0x0
#define SSP2CON1_SSPM_address                    0xEFF
#define SSP2CON1_SSPM_position                   0x0
#define SSP2CON1_SSPM_size                       0x4
#define SSP2CON1_SSPM_value_mask                 0xF
#define SSP2CON1_SSPM_clear_mask                 0xF0

#define SSP2CON1_SSPM0                           0x0
#define SSP2CON1_SSPM0_address                   0xEFF
#define SSP2CON1_SSPM0_position                  0x0
#define SSP2CON1_SSPM0_size                      0x1
#define SSP2CON1_SSPM0_value_mask                0x1
#define SSP2CON1_SSPM0_clear_mask                0xFE

#define SSPM02                                   0x0
#define SSPM02_address                           0xEFF
#define SSPM02_position                          0x0
#define SSPM02_size                              0x1
#define SSPM02_value_mask                        0x1
#define SSPM02_clear_mask                        0xFE

#define SSPM12                                   0x1
#define SSPM12_address                           0xEFF
#define SSPM12_position                          0x1
#define SSPM12_size                              0x1
#define SSPM12_value_mask                        0x2
#define SSPM12_clear_mask                        0xFD

#define SSP2CON1_SSPM1                           0x1
#define SSP2CON1_SSPM1_address                   0xEFF
#define SSP2CON1_SSPM1_position                  0x1
#define SSP2CON1_SSPM1_size                      0x1
#define SSP2CON1_SSPM1_value_mask                0x2
#define SSP2CON1_SSPM1_clear_mask                0xFD

#define SSP2CON1_SSPM2                           0x2
#define SSP2CON1_SSPM2_address                   0xEFF
#define SSP2CON1_SSPM2_position                  0x2
#define SSP2CON1_SSPM2_size                      0x1
#define SSP2CON1_SSPM2_value_mask                0x4
#define SSP2CON1_SSPM2_clear_mask                0xFB

#define SSPM22                                   0x2
#define SSPM22_address                           0xEFF
#define SSPM22_position                          0x2
#define SSPM22_size                              0x1
#define SSPM22_value_mask                        0x4
#define SSPM22_clear_mask                        0xFB

#define SSPM32                                   0x3
#define SSPM32_address                           0xEFF
#define SSPM32_position                          0x3
#define SSPM32_size                              0x1
#define SSPM32_value_mask                        0x8
#define SSPM32_clear_mask                        0xF7

#define SSP2CON1_SSPM3                           0x3
#define SSP2CON1_SSPM3_address                   0xEFF
#define SSP2CON1_SSPM3_position                  0x3
#define SSP2CON1_SSPM3_size                      0x1
#define SSP2CON1_SSPM3_value_mask                0x8
#define SSP2CON1_SSPM3_clear_mask                0xF7

#define SSP2CON1_CKP                             0x4
#define SSP2CON1_CKP_address                     0xEFF
#define SSP2CON1_CKP_position                    0x4
#define SSP2CON1_CKP_size                        0x1
#define SSP2CON1_CKP_value_mask                  0x10
#define SSP2CON1_CKP_clear_mask                  0xEF

#define CKP2                                     0x4
#define CKP2_address                             0xEFF
#define CKP2_position                            0x4
#define CKP2_size                                0x1
#define CKP2_value_mask                          0x10
#define CKP2_clear_mask                          0xEF

#define SSPEN2                                   0x5
#define SSPEN2_address                           0xEFF
#define SSPEN2_position                          0x5
#define SSPEN2_size                              0x1
#define SSPEN2_value_mask                        0x20
#define SSPEN2_clear_mask                        0xDF

#define SSP2CON1_SSPEN                           0x5
#define SSP2CON1_SSPEN_address                   0xEFF
#define SSP2CON1_SSPEN_position                  0x5
#define SSP2CON1_SSPEN_size                      0x1
#define SSP2CON1_SSPEN_value_mask                0x20
#define SSP2CON1_SSPEN_clear_mask                0xDF

#define SSPOV2                                   0x6
#define SSPOV2_address                           0xEFF
#define SSPOV2_position                          0x6
#define SSPOV2_size                              0x1
#define SSPOV2_value_mask                        0x40
#define SSPOV2_clear_mask                        0xBF

#define SSP2CON1_SSPOV                           0x6
#define SSP2CON1_SSPOV_address                   0xEFF
#define SSP2CON1_SSPOV_position                  0x6
#define SSP2CON1_SSPOV_size                      0x1
#define SSP2CON1_SSPOV_value_mask                0x40
#define SSP2CON1_SSPOV_clear_mask                0xBF

#define WCOL2                                    0x7
#define WCOL2_address                            0xEFF
#define WCOL2_position                           0x7
#define WCOL2_size                               0x1
#define WCOL2_value_mask                         0x80
#define WCOL2_clear_mask                         0x7F

#define SSP2CON1_WCOL                            0x7
#define SSP2CON1_WCOL_address                    0xEFF
#define SSP2CON1_WCOL_position                   0x7
#define SSP2CON1_WCOL_size                       0x1
#define SSP2CON1_WCOL_value_mask                 0x80
#define SSP2CON1_WCOL_clear_mask                 0x7F


/*----------------------------------------------------------------------------------------------#
| SSP2STAT                                                                                0xF00 |
#-----------------------------------------------------------------------------------------------#
| SMP2 | SSP2STAT_CKE | SSP2STAT_D | SSP2STAT_P | S2 | SSP2STAT_R_W | SSP2STAT_UA | SSP2STAT_BF |
#-----------------------------------------------------------------------------------------------#
| 7    | 6            | 5          | 4          | 3  | 2            | 1           | 0           |
#----------------------------------------------------------------------------------------------*/

#define SSP2STAT                                 0x0
#define SSP2STAT_address                         0xF00
#define SSP2STAT_position                        0x0
#define SSP2STAT_size                            0x8
#define SSP2STAT_value_mask                      0xFF
#define SSP2STAT_clear_mask                      0x0

#define SSP2STAT_BF                              0x0
#define SSP2STAT_BF_address                      0xF00
#define SSP2STAT_BF_position                     0x0
#define SSP2STAT_BF_size                         0x1
#define SSP2STAT_BF_value_mask                   0x1
#define SSP2STAT_BF_clear_mask                   0xFE

#define BF2                                      0x0
#define BF2_address                              0xF00
#define BF2_position                             0x0
#define BF2_size                                 0x1
#define BF2_value_mask                           0x1
#define BF2_clear_mask                           0xFE

#define SSP2STAT_UA                              0x1
#define SSP2STAT_UA_address                      0xF00
#define SSP2STAT_UA_position                     0x1
#define SSP2STAT_UA_size                         0x1
#define SSP2STAT_UA_value_mask                   0x2
#define SSP2STAT_UA_clear_mask                   0xFD

#define UA2                                      0x1
#define UA2_address                              0xF00
#define UA2_position                             0x1
#define UA2_size                                 0x1
#define UA2_value_mask                           0x2
#define UA2_clear_mask                           0xFD

#define SSP2STAT_R_W                             0x2
#define SSP2STAT_R_W_address                     0xF00
#define SSP2STAT_R_W_position                    0x2
#define SSP2STAT_R_W_size                        0x1
#define SSP2STAT_R_W_value_mask                  0x4
#define SSP2STAT_R_W_clear_mask                  0xFB

#define SSP2STAT_I2C_READ                        0x2
#define SSP2STAT_I2C_READ_address                0xF00
#define SSP2STAT_I2C_READ_position               0x2
#define SSP2STAT_I2C_READ_size                   0x1
#define SSP2STAT_I2C_READ_value_mask             0x4
#define SSP2STAT_I2C_READ_clear_mask             0xFB

#define RW2                                      0x2
#define RW2_address                              0xF00
#define RW2_position                             0x2
#define RW2_size                                 0x1
#define RW2_value_mask                           0x4
#define RW2_clear_mask                           0xFB

#define SSP2STAT_R                               0x2
#define SSP2STAT_R_address                       0xF00
#define SSP2STAT_R_position                      0x2
#define SSP2STAT_R_size                          0x1
#define SSP2STAT_R_value_mask                    0x4
#define SSP2STAT_R_clear_mask                    0xFB

#define SSP2STAT_nW                              0x2
#define SSP2STAT_nW_address                      0xF00
#define SSP2STAT_nW_position                     0x2
#define SSP2STAT_nW_size                         0x1
#define SSP2STAT_nW_value_mask                   0x4
#define SSP2STAT_nW_clear_mask                   0xFB

#define READ_WRITE2                              0x2
#define READ_WRITE2_address                      0xF00
#define READ_WRITE2_position                     0x2
#define READ_WRITE2_size                         0x1
#define READ_WRITE2_value_mask                   0x4
#define READ_WRITE2_clear_mask                   0xFB

#define nW2                                      0x2
#define nW2_address                              0xF00
#define nW2_position                             0x2
#define nW2_size                                 0x1
#define nW2_value_mask                           0x4
#define nW2_clear_mask                           0xFB

#define SSP2STAT_nWRITE                          0x2
#define SSP2STAT_nWRITE_address                  0xF00
#define SSP2STAT_nWRITE_position                 0x2
#define SSP2STAT_nWRITE_size                     0x1
#define SSP2STAT_nWRITE_value_mask               0x4
#define SSP2STAT_nWRITE_clear_mask               0xFB

#define I2C_READ2                                0x2
#define I2C_READ2_address                        0xF00
#define I2C_READ2_position                       0x2
#define I2C_READ2_size                           0x1
#define I2C_READ2_value_mask                     0x4
#define I2C_READ2_clear_mask                     0xFB

#define SSP2STAT_R_NOT_W                         0x2
#define SSP2STAT_R_NOT_W_address                 0xF00
#define SSP2STAT_R_NOT_W_position                0x2
#define SSP2STAT_R_NOT_W_size                    0x1
#define SSP2STAT_R_NOT_W_value_mask              0x4
#define SSP2STAT_R_NOT_W_clear_mask              0xFB

#define R_nW2                                    0x2
#define R_nW2_address                            0xF00
#define R_nW2_position                           0x2
#define R_nW2_size                               0x1
#define R_nW2_value_mask                         0x4
#define R_nW2_clear_mask                         0xFB

#define SSP2STAT_READ_WRITE                      0x2
#define SSP2STAT_READ_WRITE_address              0xF00
#define SSP2STAT_READ_WRITE_position             0x2
#define SSP2STAT_READ_WRITE_size                 0x1
#define SSP2STAT_READ_WRITE_value_mask           0x4
#define SSP2STAT_READ_WRITE_clear_mask           0xFB

#define nWRITE2                                  0x2
#define nWRITE2_address                          0xF00
#define nWRITE2_position                         0x2
#define nWRITE2_size                             0x1
#define nWRITE2_value_mask                       0x4
#define nWRITE2_clear_mask                       0xFB

#define R_W2                                     0x2
#define R_W2_address                             0xF00
#define R_W2_position                            0x2
#define R_W2_size                                0x1
#define R_W2_value_mask                          0x4
#define R_W2_clear_mask                          0xFB

#define SSP2STAT_R_nW                            0x2
#define SSP2STAT_R_nW_address                    0xF00
#define SSP2STAT_R_nW_position                   0x2
#define SSP2STAT_R_nW_size                       0x1
#define SSP2STAT_R_nW_value_mask                 0x4
#define SSP2STAT_R_nW_clear_mask                 0xFB

#define SSP2STAT_NOT_WRITE                       0x2
#define SSP2STAT_NOT_WRITE_address               0xF00
#define SSP2STAT_NOT_WRITE_position              0x2
#define SSP2STAT_NOT_WRITE_size                  0x1
#define SSP2STAT_NOT_WRITE_value_mask            0x4
#define SSP2STAT_NOT_WRITE_clear_mask            0xFB

#define SSP2STAT_S                               0x3
#define SSP2STAT_S_address                       0xF00
#define SSP2STAT_S_position                      0x3
#define SSP2STAT_S_size                          0x1
#define SSP2STAT_S_value_mask                    0x8
#define SSP2STAT_S_clear_mask                    0xF7

#define S2                                       0x3
#define S2_address                               0xF00
#define S2_position                              0x3
#define S2_size                                  0x1
#define S2_value_mask                            0x8
#define S2_clear_mask                            0xF7

#define START2                                   0x3
#define START2_address                           0xF00
#define START2_position                          0x3
#define START2_size                              0x1
#define START2_value_mask                        0x8
#define START2_clear_mask                        0xF7

#define SSP2STAT_I2C_START                       0x3
#define SSP2STAT_I2C_START_address               0xF00
#define SSP2STAT_I2C_START_position              0x3
#define SSP2STAT_I2C_START_size                  0x1
#define SSP2STAT_I2C_START_value_mask            0x8
#define SSP2STAT_I2C_START_clear_mask            0xF7

#define I2C_START2                               0x3
#define I2C_START2_address                       0xF00
#define I2C_START2_position                      0x3
#define I2C_START2_size                          0x1
#define I2C_START2_value_mask                    0x8
#define I2C_START2_clear_mask                    0xF7

#define P2                                       0x4
#define P2_address                               0xF00
#define P2_position                              0x4
#define P2_size                                  0x1
#define P2_value_mask                            0x10
#define P2_clear_mask                            0xEF

#define SSP2STAT_I2C_STOP                        0x4
#define SSP2STAT_I2C_STOP_address                0xF00
#define SSP2STAT_I2C_STOP_position               0x4
#define SSP2STAT_I2C_STOP_size                   0x1
#define SSP2STAT_I2C_STOP_value_mask             0x10
#define SSP2STAT_I2C_STOP_clear_mask             0xEF

#define SSP2STAT_P                               0x4
#define SSP2STAT_P_address                       0xF00
#define SSP2STAT_P_position                      0x4
#define SSP2STAT_P_size                          0x1
#define SSP2STAT_P_value_mask                    0x10
#define SSP2STAT_P_clear_mask                    0xEF

#define STOP2                                    0x4
#define STOP2_address                            0xF00
#define STOP2_position                           0x4
#define STOP2_size                               0x1
#define STOP2_value_mask                         0x10
#define STOP2_clear_mask                         0xEF

#define I2C_STOP2                                0x4
#define I2C_STOP2_address                        0xF00
#define I2C_STOP2_position                       0x4
#define I2C_STOP2_size                           0x1
#define I2C_STOP2_value_mask                     0x10
#define I2C_STOP2_clear_mask                     0xEF

#define I2C_DAT2                                 0x5
#define I2C_DAT2_address                         0xF00
#define I2C_DAT2_position                        0x5
#define I2C_DAT2_size                            0x1
#define I2C_DAT2_value_mask                      0x20
#define I2C_DAT2_clear_mask                      0xDF

#define SSP2STAT_D                               0x5
#define SSP2STAT_D_address                       0xF00
#define SSP2STAT_D_position                      0x5
#define SSP2STAT_D_size                          0x1
#define SSP2STAT_D_value_mask                    0x20
#define SSP2STAT_D_clear_mask                    0xDF

#define DATA_ADDRESS2                            0x5
#define DATA_ADDRESS2_address                    0xF00
#define DATA_ADDRESS2_position                   0x5
#define DATA_ADDRESS2_size                       0x1
#define DATA_ADDRESS2_value_mask                 0x20
#define DATA_ADDRESS2_clear_mask                 0xDF

#define SSP2STAT_D_NOT_A                         0x5
#define SSP2STAT_D_NOT_A_address                 0xF00
#define SSP2STAT_D_NOT_A_position                0x5
#define SSP2STAT_D_NOT_A_size                    0x1
#define SSP2STAT_D_NOT_A_value_mask              0x20
#define SSP2STAT_D_NOT_A_clear_mask              0xDF

#define SSP2STAT_I2C_DAT                         0x5
#define SSP2STAT_I2C_DAT_address                 0xF00
#define SSP2STAT_I2C_DAT_position                0x5
#define SSP2STAT_I2C_DAT_size                    0x1
#define SSP2STAT_I2C_DAT_value_mask              0x20
#define SSP2STAT_I2C_DAT_clear_mask              0xDF

#define D_A2                                     0x5
#define D_A2_address                             0xF00
#define D_A2_position                            0x5
#define D_A2_size                                0x1
#define D_A2_value_mask                          0x20
#define D_A2_clear_mask                          0xDF

#define SSP2STAT_NOT_ADDRESS                     0x5
#define SSP2STAT_NOT_ADDRESS_address             0xF00
#define SSP2STAT_NOT_ADDRESS_position            0x5
#define SSP2STAT_NOT_ADDRESS_size                0x1
#define SSP2STAT_NOT_ADDRESS_value_mask          0x20
#define SSP2STAT_NOT_ADDRESS_clear_mask          0xDF

#define SSP2STAT_D_nA                            0x5
#define SSP2STAT_D_nA_address                    0xF00
#define SSP2STAT_D_nA_position                   0x5
#define SSP2STAT_D_nA_size                       0x1
#define SSP2STAT_D_nA_value_mask                 0x20
#define SSP2STAT_D_nA_clear_mask                 0xDF

#define SSP2STAT_DATA_ADDRESS                    0x5
#define SSP2STAT_DATA_ADDRESS_address            0xF00
#define SSP2STAT_DATA_ADDRESS_position           0x5
#define SSP2STAT_DATA_ADDRESS_size               0x1
#define SSP2STAT_DATA_ADDRESS_value_mask         0x20
#define SSP2STAT_DATA_ADDRESS_clear_mask         0xDF

#define SSP2STAT_nADDRESS                        0x5
#define SSP2STAT_nADDRESS_address                0xF00
#define SSP2STAT_nADDRESS_position               0x5
#define SSP2STAT_nADDRESS_size                   0x1
#define SSP2STAT_nADDRESS_value_mask             0x20
#define SSP2STAT_nADDRESS_clear_mask             0xDF

#define nA2                                      0x5
#define nA2_address                              0xF00
#define nA2_position                             0x5
#define nA2_size                                 0x1
#define nA2_value_mask                           0x20
#define nA2_clear_mask                           0xDF

#define DA2                                      0x5
#define DA2_address                              0xF00
#define DA2_position                             0x5
#define DA2_size                                 0x1
#define DA2_value_mask                           0x20
#define DA2_clear_mask                           0xDF

#define nADDRESS2                                0x5
#define nADDRESS2_address                        0xF00
#define nADDRESS2_position                       0x5
#define nADDRESS2_size                           0x1
#define nADDRESS2_value_mask                     0x20
#define nADDRESS2_clear_mask                     0xDF

#define D_nA2                                    0x5
#define D_nA2_address                            0xF00
#define D_nA2_position                           0x5
#define D_nA2_size                               0x1
#define D_nA2_value_mask                         0x20
#define D_nA2_clear_mask                         0xDF

#define SSP2STAT_nA                              0x5
#define SSP2STAT_nA_address                      0xF00
#define SSP2STAT_nA_position                     0x5
#define SSP2STAT_nA_size                         0x1
#define SSP2STAT_nA_value_mask                   0x20
#define SSP2STAT_nA_clear_mask                   0xDF

#define SSP2STAT_D_A                             0x5
#define SSP2STAT_D_A_address                     0xF00
#define SSP2STAT_D_A_position                    0x5
#define SSP2STAT_D_A_size                        0x1
#define SSP2STAT_D_A_value_mask                  0x20
#define SSP2STAT_D_A_clear_mask                  0xDF

#define SSP2STAT_CKE                             0x6
#define SSP2STAT_CKE_address                     0xF00
#define SSP2STAT_CKE_position                    0x6
#define SSP2STAT_CKE_size                        0x1
#define SSP2STAT_CKE_value_mask                  0x40
#define SSP2STAT_CKE_clear_mask                  0xBF

#define CKE2                                     0x6
#define CKE2_address                             0xF00
#define CKE2_position                            0x6
#define CKE2_size                                0x1
#define CKE2_value_mask                          0x40
#define CKE2_clear_mask                          0xBF

#define SSP2STAT_SMP                             0x7
#define SSP2STAT_SMP_address                     0xF00
#define SSP2STAT_SMP_position                    0x7
#define SSP2STAT_SMP_size                        0x1
#define SSP2STAT_SMP_value_mask                  0x80
#define SSP2STAT_SMP_clear_mask                  0x7F

#define SMP2                                     0x7
#define SMP2_address                             0xF00
#define SMP2_position                            0x7
#define SMP2_size                                0x1
#define SMP2_value_mask                          0x80
#define SMP2_clear_mask                          0x7F


/*---------------------------------------------------------------------#
| SSP2ADD                                                        0xF01 |
#----------------------------------------------------------------------#
| MSK72 | MSK62 | MSK52 | MSK42 | SSP2ADD_MSK3 | MSK22 | MSK12 | MSK02 |
#----------------------------------------------------------------------#
| 7     | 6     | 5     | 4     | 3            | 2     | 1     | 0     |
#---------------------------------------------------------------------*/

#define MSK02                                    0x0
#define MSK02_address                            0xF01
#define MSK02_position                           0x0
#define MSK02_size                               0x1
#define MSK02_value_mask                         0x1
#define MSK02_clear_mask                         0xFE

#define SSP2ADD                                  0x0
#define SSP2ADD_address                          0xF01
#define SSP2ADD_position                         0x0
#define SSP2ADD_size                             0x8
#define SSP2ADD_value_mask                       0xFF
#define SSP2ADD_clear_mask                       0x0

#define SSP2ADD_MSK0                             0x0
#define SSP2ADD_MSK0_address                     0xF01
#define SSP2ADD_MSK0_position                    0x0
#define SSP2ADD_MSK0_size                        0x1
#define SSP2ADD_MSK0_value_mask                  0x1
#define SSP2ADD_MSK0_clear_mask                  0xFE

#define MSK12                                    0x1
#define MSK12_address                            0xF01
#define MSK12_position                           0x1
#define MSK12_size                               0x1
#define MSK12_value_mask                         0x2
#define MSK12_clear_mask                         0xFD

#define SSP2ADD_MSK1                             0x1
#define SSP2ADD_MSK1_address                     0xF01
#define SSP2ADD_MSK1_position                    0x1
#define SSP2ADD_MSK1_size                        0x1
#define SSP2ADD_MSK1_value_mask                  0x2
#define SSP2ADD_MSK1_clear_mask                  0xFD

#define MSK22                                    0x2
#define MSK22_address                            0xF01
#define MSK22_position                           0x2
#define MSK22_size                               0x1
#define MSK22_value_mask                         0x4
#define MSK22_clear_mask                         0xFB

#define SSP2ADD_MSK2                             0x2
#define SSP2ADD_MSK2_address                     0xF01
#define SSP2ADD_MSK2_position                    0x2
#define SSP2ADD_MSK2_size                        0x1
#define SSP2ADD_MSK2_value_mask                  0x4
#define SSP2ADD_MSK2_clear_mask                  0xFB

#define MSK32                                    0x3
#define MSK32_address                            0xF01
#define MSK32_position                           0x3
#define MSK32_size                               0x1
#define MSK32_value_mask                         0x8
#define MSK32_clear_mask                         0xF7

#define SSP2ADD_MSK3                             0x3
#define SSP2ADD_MSK3_address                     0xF01
#define SSP2ADD_MSK3_position                    0x3
#define SSP2ADD_MSK3_size                        0x1
#define SSP2ADD_MSK3_value_mask                  0x8
#define SSP2ADD_MSK3_clear_mask                  0xF7

#define MSK42                                    0x4
#define MSK42_address                            0xF01
#define MSK42_position                           0x4
#define MSK42_size                               0x1
#define MSK42_value_mask                         0x10
#define MSK42_clear_mask                         0xEF

#define SSP2ADD_MSK4                             0x4
#define SSP2ADD_MSK4_address                     0xF01
#define SSP2ADD_MSK4_position                    0x4
#define SSP2ADD_MSK4_size                        0x1
#define SSP2ADD_MSK4_value_mask                  0x10
#define SSP2ADD_MSK4_clear_mask                  0xEF

#define MSK52                                    0x5
#define MSK52_address                            0xF01
#define MSK52_position                           0x5
#define MSK52_size                               0x1
#define MSK52_value_mask                         0x20
#define MSK52_clear_mask                         0xDF

#define SSP2ADD_MSK5                             0x5
#define SSP2ADD_MSK5_address                     0xF01
#define SSP2ADD_MSK5_position                    0x5
#define SSP2ADD_MSK5_size                        0x1
#define SSP2ADD_MSK5_value_mask                  0x20
#define SSP2ADD_MSK5_clear_mask                  0xDF

#define MSK62                                    0x6
#define MSK62_address                            0xF01
#define MSK62_position                           0x6
#define MSK62_size                               0x1
#define MSK62_value_mask                         0x40
#define MSK62_clear_mask                         0xBF

#define SSP2ADD_MSK6                             0x6
#define SSP2ADD_MSK6_address                     0xF01
#define SSP2ADD_MSK6_position                    0x6
#define SSP2ADD_MSK6_size                        0x1
#define SSP2ADD_MSK6_value_mask                  0x40
#define SSP2ADD_MSK6_clear_mask                  0xBF

#define MSK72                                    0x7
#define MSK72_address                            0xF01
#define MSK72_position                           0x7
#define MSK72_size                               0x1
#define MSK72_value_mask                         0x80
#define MSK72_clear_mask                         0x7F

#define SSP2ADD_MSK7                             0x7
#define SSP2ADD_MSK7_address                     0xF01
#define SSP2ADD_MSK7_position                    0x7
#define SSP2ADD_MSK7_size                        0x1
#define SSP2ADD_MSK7_value_mask                  0x80
#define SSP2ADD_MSK7_clear_mask                  0x7F


/*------------------------------#
| SSP2BUF                 0xF02 |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define SSP2BUF                                  0x0
#define SSP2BUF_address                          0xF02
#define SSP2BUF_position                         0x0
#define SSP2BUF_size                             0x8
#define SSP2BUF_value_mask                       0xFF
#define SSP2BUF_clear_mask                       0x0


/*---------------------------------------------------------------------------#
| T4CON                                                                0xF03 |
#----------------------------------------------------------------------------#
| - | T4OUTPS3 | T4OUTPS2 | T4OUTPS1 | T4OUTPS0 | TMR4ON | T4CKPS1 | T4CKPS0 |
#----------------------------------------------------------------------------#
| 7 | 6        | 5        | 4        | 3        | 2      | 1       | 0       |
#---------------------------------------------------------------------------*/

#define T4CON                                    0x0
#define T4CON_address                            0xF03
#define T4CON_position                           0x0
#define T4CON_size                               0x8
#define T4CON_value_mask                         0xFF
#define T4CON_clear_mask                         0x0

#define T4CKPS0                                  0x0
#define T4CKPS0_address                          0xF03
#define T4CKPS0_position                         0x0
#define T4CKPS0_size                             0x1
#define T4CKPS0_value_mask                       0x1
#define T4CKPS0_clear_mask                       0xFE

#define T4CKPS                                   0x0
#define T4CKPS_address                           0xF03
#define T4CKPS_position                          0x0
#define T4CKPS_size                              0x2
#define T4CKPS_value_mask                        0x3
#define T4CKPS_clear_mask                        0xFC

#define T4CKPS1                                  0x1
#define T4CKPS1_address                          0xF03
#define T4CKPS1_position                         0x1
#define T4CKPS1_size                             0x1
#define T4CKPS1_value_mask                       0x2
#define T4CKPS1_clear_mask                       0xFD

#define TMR4ON                                   0x2
#define TMR4ON_address                           0xF03
#define TMR4ON_position                          0x2
#define TMR4ON_size                              0x1
#define TMR4ON_value_mask                        0x4
#define TMR4ON_clear_mask                        0xFB

#define T4OUTPS                                  0x3
#define T4OUTPS_address                          0xF03
#define T4OUTPS_position                         0x3
#define T4OUTPS_size                             0x4
#define T4OUTPS_value_mask                       0x78
#define T4OUTPS_clear_mask                       0x87

#define T4OUTPS0                                 0x3
#define T4OUTPS0_address                         0xF03
#define T4OUTPS0_position                        0x3
#define T4OUTPS0_size                            0x1
#define T4OUTPS0_value_mask                      0x8
#define T4OUTPS0_clear_mask                      0xF7

#define T4OUTPS1                                 0x4
#define T4OUTPS1_address                         0xF03
#define T4OUTPS1_position                        0x4
#define T4OUTPS1_size                            0x1
#define T4OUTPS1_value_mask                      0x10
#define T4OUTPS1_clear_mask                      0xEF

#define T4OUTPS2                                 0x5
#define T4OUTPS2_address                         0xF03
#define T4OUTPS2_position                        0x5
#define T4OUTPS2_size                            0x1
#define T4OUTPS2_value_mask                      0x20
#define T4OUTPS2_clear_mask                      0xDF

#define T4OUTPS3                                 0x6
#define T4OUTPS3_address                         0xF03
#define T4OUTPS3_position                        0x6
#define T4OUTPS3_size                            0x1
#define T4OUTPS3_value_mask                      0x40
#define T4OUTPS3_clear_mask                      0xBF


/*------------------------------#
| PR4                     0xF04 |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define PR4                                      0x0
#define PR4_address                              0xF04
#define PR4_position                             0x0
#define PR4_size                                 0x8
#define PR4_value_mask                           0xFF
#define PR4_clear_mask                           0x0


/*------------------------------#
| TMR4                    0xF05 |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define TMR4                                     0x0
#define TMR4_address                             0xF05
#define TMR4_position                            0x0
#define TMR4_size                                0x8
#define TMR4_value_mask                          0xFF
#define TMR4_clear_mask                          0x0


/*----------------------------------------------------------#
| CCP7CON                                             0xF06 |
#-----------------------------------------------------------#
| - | - | CCP7X | CCP7Y | CCP7M3 | CCP7M2 | CCP7M1 | CCP7M0 |
#-----------------------------------------------------------#
| 7 | 6 | 5     | 4     | 3      | 2      | 1      | 0      |
#----------------------------------------------------------*/

#define CCP7CON                                  0x0
#define CCP7CON_address                          0xF06
#define CCP7CON_position                         0x0
#define CCP7CON_size                             0x8
#define CCP7CON_value_mask                       0xFF
#define CCP7CON_clear_mask                       0x0

#define CCP7M0                                   0x0
#define CCP7M0_address                           0xF06
#define CCP7M0_position                          0x0
#define CCP7M0_size                              0x1
#define CCP7M0_value_mask                        0x1
#define CCP7M0_clear_mask                        0xFE

#define CCP7M                                    0x0
#define CCP7M_address                            0xF06
#define CCP7M_position                           0x0
#define CCP7M_size                               0x4
#define CCP7M_value_mask                         0xF
#define CCP7M_clear_mask                         0xF0

#define CCP7M1                                   0x1
#define CCP7M1_address                           0xF06
#define CCP7M1_position                          0x1
#define CCP7M1_size                              0x1
#define CCP7M1_value_mask                        0x2
#define CCP7M1_clear_mask                        0xFD

#define CCP7M2                                   0x2
#define CCP7M2_address                           0xF06
#define CCP7M2_position                          0x2
#define CCP7M2_size                              0x1
#define CCP7M2_value_mask                        0x4
#define CCP7M2_clear_mask                        0xFB

#define CCP7M3                                   0x3
#define CCP7M3_address                           0xF06
#define CCP7M3_position                          0x3
#define CCP7M3_size                              0x1
#define CCP7M3_value_mask                        0x8
#define CCP7M3_clear_mask                        0xF7

#define DC7B                                     0x4
#define DC7B_address                             0xF06
#define DC7B_position                            0x4
#define DC7B_size                                0x2
#define DC7B_value_mask                          0x30
#define DC7B_clear_mask                          0xCF

#define CCP7Y                                    0x4
#define CCP7Y_address                            0xF06
#define CCP7Y_position                           0x4
#define CCP7Y_size                               0x1
#define CCP7Y_value_mask                         0x10
#define CCP7Y_clear_mask                         0xEF

#define DC7B0                                    0x4
#define DC7B0_address                            0xF06
#define DC7B0_position                           0x4
#define DC7B0_size                               0x1
#define DC7B0_value_mask                         0x10
#define DC7B0_clear_mask                         0xEF

#define CCP7X                                    0x5
#define CCP7X_address                            0xF06
#define CCP7X_position                           0x5
#define CCP7X_size                               0x1
#define CCP7X_value_mask                         0x20
#define CCP7X_clear_mask                         0xDF

#define DC7B1                                    0x5
#define DC7B1_address                            0xF06
#define DC7B1_position                           0x5
#define DC7B1_size                               0x1
#define DC7B1_value_mask                         0x20
#define DC7B1_clear_mask                         0xDF


/*------------------------------#
| CCPR7L                  0xF07 |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define CCPR7L                                   0x0
#define CCPR7L_address                           0xF07
#define CCPR7L_position                          0x0
#define CCPR7L_size                              0x8
#define CCPR7L_value_mask                        0xFF
#define CCPR7L_clear_mask                        0x0


/*------------------------------#
| CCPR7H                  0xF08 |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define CCPR7H                                   0x0
#define CCPR7H_address                           0xF08
#define CCPR7H_position                          0x0
#define CCPR7H_size                              0x8
#define CCPR7H_value_mask                        0xFF
#define CCPR7H_clear_mask                        0x0


/*----------------------------------------------------------#
| CCP6CON                                             0xF09 |
#-----------------------------------------------------------#
| - | - | CCP6X | CCP6Y | CCP6M3 | CCP6M2 | CCP6M1 | CCP6M0 |
#-----------------------------------------------------------#
| 7 | 6 | 5     | 4     | 3      | 2      | 1      | 0      |
#----------------------------------------------------------*/

#define CCP6CON                                  0x0
#define CCP6CON_address                          0xF09
#define CCP6CON_position                         0x0
#define CCP6CON_size                             0x8
#define CCP6CON_value_mask                       0xFF
#define CCP6CON_clear_mask                       0x0

#define CCP6M                                    0x0
#define CCP6M_address                            0xF09
#define CCP6M_position                           0x0
#define CCP6M_size                               0x4
#define CCP6M_value_mask                         0xF
#define CCP6M_clear_mask                         0xF0

#define CCP6M0                                   0x0
#define CCP6M0_address                           0xF09
#define CCP6M0_position                          0x0
#define CCP6M0_size                              0x1
#define CCP6M0_value_mask                        0x1
#define CCP6M0_clear_mask                        0xFE

#define CCP6M1                                   0x1
#define CCP6M1_address                           0xF09
#define CCP6M1_position                          0x1
#define CCP6M1_size                              0x1
#define CCP6M1_value_mask                        0x2
#define CCP6M1_clear_mask                        0xFD

#define CCP6M2                                   0x2
#define CCP6M2_address                           0xF09
#define CCP6M2_position                          0x2
#define CCP6M2_size                              0x1
#define CCP6M2_value_mask                        0x4
#define CCP6M2_clear_mask                        0xFB

#define CCP6M3                                   0x3
#define CCP6M3_address                           0xF09
#define CCP6M3_position                          0x3
#define CCP6M3_size                              0x1
#define CCP6M3_value_mask                        0x8
#define CCP6M3_clear_mask                        0xF7

#define CCP6Y                                    0x4
#define CCP6Y_address                            0xF09
#define CCP6Y_position                           0x4
#define CCP6Y_size                               0x1
#define CCP6Y_value_mask                         0x10
#define CCP6Y_clear_mask                         0xEF

#define DC6B0                                    0x4
#define DC6B0_address                            0xF09
#define DC6B0_position                           0x4
#define DC6B0_size                               0x1
#define DC6B0_value_mask                         0x10
#define DC6B0_clear_mask                         0xEF

#define DC6B                                     0x4
#define DC6B_address                             0xF09
#define DC6B_position                            0x4
#define DC6B_size                                0x2
#define DC6B_value_mask                          0x30
#define DC6B_clear_mask                          0xCF

#define DC6B1                                    0x5
#define DC6B1_address                            0xF09
#define DC6B1_position                           0x5
#define DC6B1_size                               0x1
#define DC6B1_value_mask                         0x20
#define DC6B1_clear_mask                         0xDF

#define CCP6X                                    0x5
#define CCP6X_address                            0xF09
#define CCP6X_position                           0x5
#define CCP6X_size                               0x1
#define CCP6X_value_mask                         0x20
#define CCP6X_clear_mask                         0xDF


/*------------------------------#
| CCPR6L                  0xF0A |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define CCPR6L                                   0x0
#define CCPR6L_address                           0xF0A
#define CCPR6L_position                          0x0
#define CCPR6L_size                              0x8
#define CCPR6L_value_mask                        0xFF
#define CCPR6L_clear_mask                        0x0


/*------------------------------#
| CCPR6H                  0xF0B |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define CCPR6H                                   0x0
#define CCPR6H_address                           0xF0B
#define CCPR6H_position                          0x0
#define CCPR6H_size                              0x8
#define CCPR6H_value_mask                        0xFF
#define CCPR6H_clear_mask                        0x0


/*----------------------------------------------------------#
| CCP5CON                                             0xF0C |
#-----------------------------------------------------------#
| - | - | CCP5X | CCP5Y | CCP5M3 | CCP5M2 | CCP5M1 | CCP5M0 |
#-----------------------------------------------------------#
| 7 | 6 | 5     | 4     | 3      | 2      | 1      | 0      |
#----------------------------------------------------------*/

#define CCP5CON                                  0x0
#define CCP5CON_address                          0xF0C
#define CCP5CON_position                         0x0
#define CCP5CON_size                             0x8
#define CCP5CON_value_mask                       0xFF
#define CCP5CON_clear_mask                       0x0

#define CCP5M0                                   0x0
#define CCP5M0_address                           0xF0C
#define CCP5M0_position                          0x0
#define CCP5M0_size                              0x1
#define CCP5M0_value_mask                        0x1
#define CCP5M0_clear_mask                        0xFE

#define CCP5M                                    0x0
#define CCP5M_address                            0xF0C
#define CCP5M_position                           0x0
#define CCP5M_size                               0x4
#define CCP5M_value_mask                         0xF
#define CCP5M_clear_mask                         0xF0

#define CCP5M1                                   0x1
#define CCP5M1_address                           0xF0C
#define CCP5M1_position                          0x1
#define CCP5M1_size                              0x1
#define CCP5M1_value_mask                        0x2
#define CCP5M1_clear_mask                        0xFD

#define CCP5M2                                   0x2
#define CCP5M2_address                           0xF0C
#define CCP5M2_position                          0x2
#define CCP5M2_size                              0x1
#define CCP5M2_value_mask                        0x4
#define CCP5M2_clear_mask                        0xFB

#define CCP5M3                                   0x3
#define CCP5M3_address                           0xF0C
#define CCP5M3_position                          0x3
#define CCP5M3_size                              0x1
#define CCP5M3_value_mask                        0x8
#define CCP5M3_clear_mask                        0xF7

#define CCP5Y                                    0x4
#define CCP5Y_address                            0xF0C
#define CCP5Y_position                           0x4
#define CCP5Y_size                               0x1
#define CCP5Y_value_mask                         0x10
#define CCP5Y_clear_mask                         0xEF

#define DC5B0                                    0x4
#define DC5B0_address                            0xF0C
#define DC5B0_position                           0x4
#define DC5B0_size                               0x1
#define DC5B0_value_mask                         0x10
#define DC5B0_clear_mask                         0xEF

#define DC5B                                     0x4
#define DC5B_address                             0xF0C
#define DC5B_position                            0x4
#define DC5B_size                                0x2
#define DC5B_value_mask                          0x30
#define DC5B_clear_mask                          0xCF

#define CCP5X                                    0x5
#define CCP5X_address                            0xF0C
#define CCP5X_position                           0x5
#define CCP5X_size                               0x1
#define CCP5X_value_mask                         0x20
#define CCP5X_clear_mask                         0xDF

#define DC5B1                                    0x5
#define DC5B1_address                            0xF0C
#define DC5B1_position                           0x5
#define DC5B1_size                               0x1
#define DC5B1_value_mask                         0x20
#define DC5B1_clear_mask                         0xDF


/*------------------------------#
| CCPR5L                  0xF0D |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define CCPR5L                                   0x0
#define CCPR5L_address                           0xF0D
#define CCPR5L_position                          0x0
#define CCPR5L_size                              0x8
#define CCPR5L_value_mask                        0xFF
#define CCPR5L_clear_mask                        0x0


/*------------------------------#
| CCPR5H                  0xF0E |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define CCPR5H                                   0x0
#define CCPR5H_address                           0xF0E
#define CCPR5H_position                          0x0
#define CCPR5H_size                              0x8
#define CCPR5H_value_mask                        0xFF
#define CCPR5H_clear_mask                        0x0


/*----------------------------------------------------------#
| CCP4CON                                             0xF0F |
#-----------------------------------------------------------#
| - | - | CCP4X | CCP4Y | CCP4M3 | CCP4M2 | CCP4M1 | CCP4M0 |
#-----------------------------------------------------------#
| 7 | 6 | 5     | 4     | 3      | 2      | 1      | 0      |
#----------------------------------------------------------*/

#define CCP4CON                                  0x0
#define CCP4CON_address                          0xF0F
#define CCP4CON_position                         0x0
#define CCP4CON_size                             0x8
#define CCP4CON_value_mask                       0xFF
#define CCP4CON_clear_mask                       0x0

#define CCP4M                                    0x0
#define CCP4M_address                            0xF0F
#define CCP4M_position                           0x0
#define CCP4M_size                               0x4
#define CCP4M_value_mask                         0xF
#define CCP4M_clear_mask                         0xF0

#define CCP4M0                                   0x0
#define CCP4M0_address                           0xF0F
#define CCP4M0_position                          0x0
#define CCP4M0_size                              0x1
#define CCP4M0_value_mask                        0x1
#define CCP4M0_clear_mask                        0xFE

#define CCP4M1                                   0x1
#define CCP4M1_address                           0xF0F
#define CCP4M1_position                          0x1
#define CCP4M1_size                              0x1
#define CCP4M1_value_mask                        0x2
#define CCP4M1_clear_mask                        0xFD

#define CCP4M2                                   0x2
#define CCP4M2_address                           0xF0F
#define CCP4M2_position                          0x2
#define CCP4M2_size                              0x1
#define CCP4M2_value_mask                        0x4
#define CCP4M2_clear_mask                        0xFB

#define CCP4M3                                   0x3
#define CCP4M3_address                           0xF0F
#define CCP4M3_position                          0x3
#define CCP4M3_size                              0x1
#define CCP4M3_value_mask                        0x8
#define CCP4M3_clear_mask                        0xF7

#define CCP4Y                                    0x4
#define CCP4Y_address                            0xF0F
#define CCP4Y_position                           0x4
#define CCP4Y_size                               0x1
#define CCP4Y_value_mask                         0x10
#define CCP4Y_clear_mask                         0xEF

#define DC4B0                                    0x4
#define DC4B0_address                            0xF0F
#define DC4B0_position                           0x4
#define DC4B0_size                               0x1
#define DC4B0_value_mask                         0x10
#define DC4B0_clear_mask                         0xEF

#define DC4B                                     0x4
#define DC4B_address                             0xF0F
#define DC4B_position                            0x4
#define DC4B_size                                0x2
#define DC4B_value_mask                          0x30
#define DC4B_clear_mask                          0xCF

#define CCP4X                                    0x5
#define CCP4X_address                            0xF0F
#define CCP4X_position                           0x5
#define CCP4X_size                               0x1
#define CCP4X_value_mask                         0x20
#define CCP4X_clear_mask                         0xDF

#define DC4B1                                    0x5
#define DC4B1_address                            0xF0F
#define DC4B1_position                           0x5
#define DC4B1_size                               0x1
#define DC4B1_value_mask                         0x20
#define DC4B1_clear_mask                         0xDF


/*------------------------------#
| CCPR4L                  0xF10 |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define CCPR4L                                   0x0
#define CCPR4L_address                           0xF10
#define CCPR4L_position                          0x0
#define CCPR4L_size                              0x8
#define CCPR4L_value_mask                        0xFF
#define CCPR4L_clear_mask                        0x0


/*------------------------------#
| CCPR4H                  0xF11 |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define CCPR4H                                   0x0
#define CCPR4H_address                           0xF11
#define CCPR4H_position                          0x0
#define CCPR4H_size                              0x8
#define CCPR4H_value_mask                        0xFF
#define CCPR4H_clear_mask                        0x0


/*-------------------------------------------------------------------------------#
| T5GCON                                                                   0xF12 |
#--------------------------------------------------------------------------------#
| TMR5GE | T5GPOL | T5GTM | T5GSPM | T5GGO_NOT_T5DONE | T5GVAL | T5GSS1 | T5GSS0 |
#--------------------------------------------------------------------------------#
| 7      | 6      | 5     | 4      | 3                | 2      | 1      | 0      |
#-------------------------------------------------------------------------------*/

#define T5GCON                                   0x0
#define T5GCON_address                           0xF12
#define T5GCON_position                          0x0
#define T5GCON_size                              0x8
#define T5GCON_value_mask                        0xFF
#define T5GCON_clear_mask                        0x0

#define T5GSS                                    0x0
#define T5GSS_address                            0xF12
#define T5GSS_position                           0x0
#define T5GSS_size                               0x2
#define T5GSS_value_mask                         0x3
#define T5GSS_clear_mask                         0xFC

#define T5GSS0                                   0x0
#define T5GSS0_address                           0xF12
#define T5GSS0_position                          0x0
#define T5GSS0_size                              0x1
#define T5GSS0_value_mask                        0x1
#define T5GSS0_clear_mask                        0xFE

#define T5GSS1                                   0x1
#define T5GSS1_address                           0xF12
#define T5GSS1_position                          0x1
#define T5GSS1_size                              0x1
#define T5GSS1_value_mask                        0x2
#define T5GSS1_clear_mask                        0xFD

#define T5GVAL                                   0x2
#define T5GVAL_address                           0xF12
#define T5GVAL_position                          0x2
#define T5GVAL_size                              0x1
#define T5GVAL_value_mask                        0x4
#define T5GVAL_clear_mask                        0xFB

#define T5GGO_NOT_T5DONE                         0x3
#define T5GGO_NOT_T5DONE_address                 0xF12
#define T5GGO_NOT_T5DONE_position                0x3
#define T5GGO_NOT_T5DONE_size                    0x1
#define T5GGO_NOT_T5DONE_value_mask              0x8
#define T5GGO_NOT_T5DONE_clear_mask              0xF7

#define nT5DONE                                  0x3
#define nT5DONE_address                          0xF12
#define nT5DONE_position                         0x3
#define nT5DONE_size                             0x1
#define nT5DONE_value_mask                       0x8
#define nT5DONE_clear_mask                       0xF7

#define T5GGO_nT5DONE                            0x3
#define T5GGO_nT5DONE_address                    0xF12
#define T5GGO_nT5DONE_position                   0x3
#define T5GGO_nT5DONE_size                       0x1
#define T5GGO_nT5DONE_value_mask                 0x8
#define T5GGO_nT5DONE_clear_mask                 0xF7

#define NOT_T5DONE                               0x3
#define NOT_T5DONE_address                       0xF12
#define NOT_T5DONE_position                      0x3
#define NOT_T5DONE_size                          0x1
#define NOT_T5DONE_value_mask                    0x8
#define NOT_T5DONE_clear_mask                    0xF7

#define T5GGO                                    0x3
#define T5GGO_address                            0xF12
#define T5GGO_position                           0x3
#define T5GGO_size                               0x1
#define T5GGO_value_mask                         0x8
#define T5GGO_clear_mask                         0xF7

#define T5GSPM                                   0x4
#define T5GSPM_address                           0xF12
#define T5GSPM_position                          0x4
#define T5GSPM_size                              0x1
#define T5GSPM_value_mask                        0x10
#define T5GSPM_clear_mask                        0xEF

#define T5GTM                                    0x5
#define T5GTM_address                            0xF12
#define T5GTM_position                           0x5
#define T5GTM_size                               0x1
#define T5GTM_value_mask                         0x20
#define T5GTM_clear_mask                         0xDF

#define T5GPOL                                   0x6
#define T5GPOL_address                           0xF12
#define T5GPOL_position                          0x6
#define T5GPOL_size                              0x1
#define T5GPOL_value_mask                        0x40
#define T5GPOL_clear_mask                        0xBF

#define TMR5GE                                   0x7
#define TMR5GE_address                           0xF12
#define TMR5GE_position                          0x7
#define TMR5GE_size                              0x1
#define TMR5GE_value_mask                        0x80
#define TMR5GE_clear_mask                        0x7F


/*--------------------------------------------------------------------------------#
| T5CON                                                                     0xF13 |
#---------------------------------------------------------------------------------#
| TMR5CS1 | TMR5CS0 | T5CKPS1 | T5CKPS0 | SOSCEN5 | nT5SYNC | T5CON_RD16 | TMR5ON |
#---------------------------------------------------------------------------------#
| 7       | 6       | 5       | 4       | 3       | 2       | 1          | 0      |
#--------------------------------------------------------------------------------*/

#define T5CON                                    0x0
#define T5CON_address                            0xF13
#define T5CON_position                           0x0
#define T5CON_size                               0x8
#define T5CON_value_mask                         0xFF
#define T5CON_clear_mask                         0x0

#define TMR5ON                                   0x0
#define TMR5ON_address                           0xF13
#define TMR5ON_position                          0x0
#define TMR5ON_size                              0x1
#define TMR5ON_value_mask                        0x1
#define TMR5ON_clear_mask                        0xFE

#define T5CON_RD16                               0x1
#define T5CON_RD16_address                       0xF13
#define T5CON_RD16_position                      0x1
#define T5CON_RD16_size                          0x1
#define T5CON_RD16_value_mask                    0x2
#define T5CON_RD16_clear_mask                    0xFD

#define RD165                                    0x1
#define RD165_address                            0xF13
#define RD165_position                           0x1
#define RD165_size                               0x1
#define RD165_value_mask                         0x2
#define RD165_clear_mask                         0xFD

#define nT5SYNC                                  0x2
#define nT5SYNC_address                          0xF13
#define nT5SYNC_position                         0x2
#define nT5SYNC_size                             0x1
#define nT5SYNC_value_mask                       0x4
#define nT5SYNC_clear_mask                       0xFB

#define NOT_T5SYNC                               0x2
#define NOT_T5SYNC_address                       0xF13
#define NOT_T5SYNC_position                      0x2
#define NOT_T5SYNC_size                          0x1
#define NOT_T5SYNC_value_mask                    0x4
#define NOT_T5SYNC_clear_mask                    0xFB

#define SOSCEN5                                  0x3
#define SOSCEN5_address                          0xF13
#define SOSCEN5_position                         0x3
#define SOSCEN5_size                             0x1
#define SOSCEN5_value_mask                       0x8
#define SOSCEN5_clear_mask                       0xF7

#define T5CON_SOSCEN                             0x3
#define T5CON_SOSCEN_address                     0xF13
#define T5CON_SOSCEN_position                    0x3
#define T5CON_SOSCEN_size                        0x1
#define T5CON_SOSCEN_value_mask                  0x8
#define T5CON_SOSCEN_clear_mask                  0xF7

#define T5CKPS                                   0x4
#define T5CKPS_address                           0xF13
#define T5CKPS_position                          0x4
#define T5CKPS_size                              0x2
#define T5CKPS_value_mask                        0x30
#define T5CKPS_clear_mask                        0xCF

#define T5CKPS0                                  0x4
#define T5CKPS0_address                          0xF13
#define T5CKPS0_position                         0x4
#define T5CKPS0_size                             0x1
#define T5CKPS0_value_mask                       0x10
#define T5CKPS0_clear_mask                       0xEF

#define T5CKPS1                                  0x5
#define T5CKPS1_address                          0xF13
#define T5CKPS1_position                         0x5
#define T5CKPS1_size                             0x1
#define T5CKPS1_value_mask                       0x20
#define T5CKPS1_clear_mask                       0xDF

#define TMR5CS0                                  0x6
#define TMR5CS0_address                          0xF13
#define TMR5CS0_position                         0x6
#define TMR5CS0_size                             0x1
#define TMR5CS0_value_mask                       0x40
#define TMR5CS0_clear_mask                       0xBF

#define TMR5CS                                   0x6
#define TMR5CS_address                           0xF13
#define TMR5CS_position                          0x6
#define TMR5CS_size                              0x2
#define TMR5CS_value_mask                        0xC0
#define TMR5CS_clear_mask                        0x3F

#define TMR5CS1                                  0x7
#define TMR5CS1_address                          0xF13
#define TMR5CS1_position                         0x7
#define TMR5CS1_size                             0x1
#define TMR5CS1_value_mask                       0x80
#define TMR5CS1_clear_mask                       0x7F


/*------------------------------#
| TMR5L                   0xF14 |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define TMR5L                                    0x0
#define TMR5L_address                            0xF14
#define TMR5L_position                           0x0
#define TMR5L_size                               0x8
#define TMR5L_value_mask                         0xFF
#define TMR5L_clear_mask                         0x0


/*------------------------------#
| TMR5H                   0xF15 |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define TMR5H                                    0x0
#define TMR5H_address                            0xF15
#define TMR5H_position                           0x0
#define TMR5H_size                               0x8
#define TMR5H_value_mask                         0xFF
#define TMR5H_clear_mask                         0x0


/*------------------------------------------------------------------------#
| PMD3                                                              0xF16 |
#-------------------------------------------------------------------------#
| CCP10MD | CCP9MD | CCP8MD | CCP7MD | CCP6MD | CCP5MD | CCP4MD | TMR12MD |
#-------------------------------------------------------------------------#
| 7       | 6      | 5      | 4      | 3      | 2      | 1      | 0       |
#------------------------------------------------------------------------*/

#define PMD3                                     0x0
#define PMD3_address                             0xF16
#define PMD3_position                            0x0
#define PMD3_size                                0x8
#define PMD3_value_mask                          0xFF
#define PMD3_clear_mask                          0x0

#define TMR12MD                                  0x0
#define TMR12MD_address                          0xF16
#define TMR12MD_position                         0x0
#define TMR12MD_size                             0x1
#define TMR12MD_value_mask                       0x1
#define TMR12MD_clear_mask                       0xFE

#define CCP4MD                                   0x1
#define CCP4MD_address                           0xF16
#define CCP4MD_position                          0x1
#define CCP4MD_size                              0x1
#define CCP4MD_value_mask                        0x2
#define CCP4MD_clear_mask                        0xFD

#define CCP5MD                                   0x2
#define CCP5MD_address                           0xF16
#define CCP5MD_position                          0x2
#define CCP5MD_size                              0x1
#define CCP5MD_value_mask                        0x4
#define CCP5MD_clear_mask                        0xFB

#define CCP6MD                                   0x3
#define CCP6MD_address                           0xF16
#define CCP6MD_position                          0x3
#define CCP6MD_size                              0x1
#define CCP6MD_value_mask                        0x8
#define CCP6MD_clear_mask                        0xF7

#define CCP7MD                                   0x4
#define CCP7MD_address                           0xF16
#define CCP7MD_position                          0x4
#define CCP7MD_size                              0x1
#define CCP7MD_value_mask                        0x10
#define CCP7MD_clear_mask                        0xEF

#define CCP8MD                                   0x5
#define CCP8MD_address                           0xF16
#define CCP8MD_position                          0x5
#define CCP8MD_size                              0x1
#define CCP8MD_value_mask                        0x20
#define CCP8MD_clear_mask                        0xDF

#define CCP9MD                                   0x6
#define CCP9MD_address                           0xF16
#define CCP9MD_position                          0x6
#define CCP9MD_size                              0x1
#define CCP9MD_value_mask                        0x40
#define CCP9MD_clear_mask                        0xBF

#define CCP10MD                                  0x7
#define CCP10MD_address                          0xF16
#define CCP10MD_position                         0x7
#define CCP10MD_size                             0x1
#define CCP10MD_value_mask                       0x80
#define CCP10MD_clear_mask                       0x7F


/*-----------------------------------------------------------------------#
| PMD2                                                             0xF17 |
#------------------------------------------------------------------------#
| TMR10MD | TMR8MD | TMR7MD | TMR6MD | TMR5MD | CMP3MD | CMP2MD | CMP1MD |
#------------------------------------------------------------------------#
| 7       | 6      | 5      | 4      | 3      | 2      | 1      | 0      |
#-----------------------------------------------------------------------*/

#define PMD2                                     0x0
#define PMD2_address                             0xF17
#define PMD2_position                            0x0
#define PMD2_size                                0x8
#define PMD2_value_mask                          0xFF
#define PMD2_clear_mask                          0x0

#define CMP1MD                                   0x0
#define CMP1MD_address                           0xF17
#define CMP1MD_position                          0x0
#define CMP1MD_size                              0x1
#define CMP1MD_value_mask                        0x1
#define CMP1MD_clear_mask                        0xFE

#define CMP2MD                                   0x1
#define CMP2MD_address                           0xF17
#define CMP2MD_position                          0x1
#define CMP2MD_size                              0x1
#define CMP2MD_value_mask                        0x2
#define CMP2MD_clear_mask                        0xFD

#define CMP3MD                                   0x2
#define CMP3MD_address                           0xF17
#define CMP3MD_position                          0x2
#define CMP3MD_size                              0x1
#define CMP3MD_value_mask                        0x4
#define CMP3MD_clear_mask                        0xFB

#define TMR5MD                                   0x3
#define TMR5MD_address                           0xF17
#define TMR5MD_position                          0x3
#define TMR5MD_size                              0x1
#define TMR5MD_value_mask                        0x8
#define TMR5MD_clear_mask                        0xF7

#define TMR6MD                                   0x4
#define TMR6MD_address                           0xF17
#define TMR6MD_position                          0x4
#define TMR6MD_size                              0x1
#define TMR6MD_value_mask                        0x10
#define TMR6MD_clear_mask                        0xEF

#define TMR7MD                                   0x5
#define TMR7MD_address                           0xF17
#define TMR7MD_position                          0x5
#define TMR7MD_size                              0x1
#define TMR7MD_value_mask                        0x20
#define TMR7MD_clear_mask                        0xDF

#define TMR8MD                                   0x6
#define TMR8MD_address                           0xF17
#define TMR8MD_position                          0x6
#define TMR8MD_size                              0x1
#define TMR8MD_value_mask                        0x40
#define TMR8MD_clear_mask                        0xBF

#define TMR10MD                                  0x7
#define TMR10MD_address                          0xF17
#define TMR10MD_position                         0x7
#define TMR10MD_size                             0x1
#define TMR10MD_value_mask                       0x80
#define TMR10MD_clear_mask                       0x7F


/*------------------------------------------------------------#
| PMD1                                                  0xF18 |
#-------------------------------------------------------------#
| - | CTMUMD | RTCCMD | TMR4MD | TMR3MD | TMR2MD | TMR1MD | - |
#-------------------------------------------------------------#
| 7 | 6      | 5      | 4      | 3      | 2      | 1      | 0 |
#------------------------------------------------------------*/

#define PMD1                                     0x0
#define PMD1_address                             0xF18
#define PMD1_position                            0x0
#define PMD1_size                                0x8
#define PMD1_value_mask                          0xFF
#define PMD1_clear_mask                          0x0

#define TMR1MD                                   0x1
#define TMR1MD_address                           0xF18
#define TMR1MD_position                          0x1
#define TMR1MD_size                              0x1
#define TMR1MD_value_mask                        0x2
#define TMR1MD_clear_mask                        0xFD

#define TMR2MD                                   0x2
#define TMR2MD_address                           0xF18
#define TMR2MD_position                          0x2
#define TMR2MD_size                              0x1
#define TMR2MD_value_mask                        0x4
#define TMR2MD_clear_mask                        0xFB

#define TMR3MD                                   0x3
#define TMR3MD_address                           0xF18
#define TMR3MD_position                          0x3
#define TMR3MD_size                              0x1
#define TMR3MD_value_mask                        0x8
#define TMR3MD_clear_mask                        0xF7

#define TMR4MD                                   0x4
#define TMR4MD_address                           0xF18
#define TMR4MD_position                          0x4
#define TMR4MD_size                              0x1
#define TMR4MD_value_mask                        0x10
#define TMR4MD_clear_mask                        0xEF

#define RTCCMD                                   0x5
#define RTCCMD_address                           0xF18
#define RTCCMD_position                          0x5
#define RTCCMD_size                              0x1
#define RTCCMD_value_mask                        0x20
#define RTCCMD_clear_mask                        0xDF

#define CTMUMD                                   0x6
#define CTMUMD_address                           0xF18
#define CTMUMD_position                          0x6
#define CTMUMD_size                              0x1
#define CTMUMD_value_mask                        0x40
#define CTMUMD_clear_mask                        0xBF


/*-----------------------------------------------------------------------#
| PMD0                                                             0xF19 |
#------------------------------------------------------------------------#
| CCP3MD | CCP2MD | CCP1MD | UART2MD | UART1MD | SPI2MD | SPI1MD | ADCMD |
#------------------------------------------------------------------------#
| 7      | 6      | 5      | 4       | 3       | 2      | 1      | 0     |
#-----------------------------------------------------------------------*/

#define PMD0                                     0x0
#define PMD0_address                             0xF19
#define PMD0_position                            0x0
#define PMD0_size                                0x8
#define PMD0_value_mask                          0xFF
#define PMD0_clear_mask                          0x0

#define ADCMD                                    0x0
#define ADCMD_address                            0xF19
#define ADCMD_position                           0x0
#define ADCMD_size                               0x1
#define ADCMD_value_mask                         0x1
#define ADCMD_clear_mask                         0xFE

#define SSP1MD                                   0x1
#define SSP1MD_address                           0xF19
#define SSP1MD_position                          0x1
#define SSP1MD_size                              0x1
#define SSP1MD_value_mask                        0x2
#define SSP1MD_clear_mask                        0xFD

#define SPI1MD                                   0x1
#define SPI1MD_address                           0xF19
#define SPI1MD_position                          0x1
#define SPI1MD_size                              0x1
#define SPI1MD_value_mask                        0x2
#define SPI1MD_clear_mask                        0xFD

#define SPI2MD                                   0x2
#define SPI2MD_address                           0xF19
#define SPI2MD_position                          0x2
#define SPI2MD_size                              0x1
#define SPI2MD_value_mask                        0x4
#define SPI2MD_clear_mask                        0xFB

#define SSP2MD                                   0x2
#define SSP2MD_address                           0xF19
#define SSP2MD_position                          0x2
#define SSP2MD_size                              0x1
#define SSP2MD_value_mask                        0x4
#define SSP2MD_clear_mask                        0xFB

#define UART1MD                                  0x3
#define UART1MD_address                          0xF19
#define UART1MD_position                         0x3
#define UART1MD_size                             0x1
#define UART1MD_value_mask                       0x8
#define UART1MD_clear_mask                       0xF7

#define UART2MD                                  0x4
#define UART2MD_address                          0xF19
#define UART2MD_position                         0x4
#define UART2MD_size                             0x1
#define UART2MD_value_mask                       0x10
#define UART2MD_clear_mask                       0xEF

#define CCP1MD                                   0x5
#define CCP1MD_address                           0xF19
#define CCP1MD_position                          0x5
#define CCP1MD_size                              0x1
#define CCP1MD_value_mask                        0x20
#define CCP1MD_clear_mask                        0xDF

#define CCP2MD                                   0x6
#define CCP2MD_address                           0xF19
#define CCP2MD_position                          0x6
#define CCP2MD_size                              0x1
#define CCP2MD_value_mask                        0x40
#define CCP2MD_clear_mask                        0xBF

#define CCP3MD                                   0x7
#define CCP3MD_address                           0xF19
#define CCP3MD_position                          0x7
#define CCP3MD_size                              0x1
#define CCP3MD_value_mask                        0x80
#define CCP3MD_clear_mask                        0x7F


/*-----------------------------------------------------------------------------------------------#
| PSTR3CON                                                                                 0xF1A |
#------------------------------------------------------------------------------------------------#
| PSTR3CON_CMPL1 | PSTR3CON_CMPL0 | - | STRSYNC3 | PSTR3CON_STRD | STRC3 | STRB3 | PSTR3CON_STRA |
#------------------------------------------------------------------------------------------------#
| 7              | 6              | 5 | 4        | 3             | 2     | 1     | 0             |
#-----------------------------------------------------------------------------------------------*/

#define PSTR3CON                                 0x0
#define PSTR3CON_address                         0xF1A
#define PSTR3CON_position                        0x0
#define PSTR3CON_size                            0x8
#define PSTR3CON_value_mask                      0xFF
#define PSTR3CON_clear_mask                      0x0

#define PSTR3CON_STRA                            0x0
#define PSTR3CON_STRA_address                    0xF1A
#define PSTR3CON_STRA_position                   0x0
#define PSTR3CON_STRA_size                       0x1
#define PSTR3CON_STRA_value_mask                 0x1
#define PSTR3CON_STRA_clear_mask                 0xFE

#define STRA3                                    0x0
#define STRA3_address                            0xF1A
#define STRA3_position                           0x0
#define STRA3_size                               0x1
#define STRA3_value_mask                         0x1
#define STRA3_clear_mask                         0xFE

#define STRB3                                    0x1
#define STRB3_address                            0xF1A
#define STRB3_position                           0x1
#define STRB3_size                               0x1
#define STRB3_value_mask                         0x2
#define STRB3_clear_mask                         0xFD

#define PSTR3CON_STRB                            0x1
#define PSTR3CON_STRB_address                    0xF1A
#define PSTR3CON_STRB_position                   0x1
#define PSTR3CON_STRB_size                       0x1
#define PSTR3CON_STRB_value_mask                 0x2
#define PSTR3CON_STRB_clear_mask                 0xFD

#define PSTR3CON_STRC                            0x2
#define PSTR3CON_STRC_address                    0xF1A
#define PSTR3CON_STRC_position                   0x2
#define PSTR3CON_STRC_size                       0x1
#define PSTR3CON_STRC_value_mask                 0x4
#define PSTR3CON_STRC_clear_mask                 0xFB

#define STRC3                                    0x2
#define STRC3_address                            0xF1A
#define STRC3_position                           0x2
#define STRC3_size                               0x1
#define STRC3_value_mask                         0x4
#define STRC3_clear_mask                         0xFB

#define STRD3                                    0x3
#define STRD3_address                            0xF1A
#define STRD3_position                           0x3
#define STRD3_size                               0x1
#define STRD3_value_mask                         0x8
#define STRD3_clear_mask                         0xF7

#define PSTR3CON_STRD                            0x3
#define PSTR3CON_STRD_address                    0xF1A
#define PSTR3CON_STRD_position                   0x3
#define PSTR3CON_STRD_size                       0x1
#define PSTR3CON_STRD_value_mask                 0x8
#define PSTR3CON_STRD_clear_mask                 0xF7

#define STRSYNC3                                 0x4
#define STRSYNC3_address                         0xF1A
#define STRSYNC3_position                        0x4
#define STRSYNC3_size                            0x1
#define STRSYNC3_value_mask                      0x10
#define STRSYNC3_clear_mask                      0xEF

#define PSTR3CON_STRSYNC                         0x4
#define PSTR3CON_STRSYNC_address                 0xF1A
#define PSTR3CON_STRSYNC_position                0x4
#define PSTR3CON_STRSYNC_size                    0x1
#define PSTR3CON_STRSYNC_value_mask              0x10
#define PSTR3CON_STRSYNC_clear_mask              0xEF

#define PSTR3CON_CMPL0                           0x6
#define PSTR3CON_CMPL0_address                   0xF1A
#define PSTR3CON_CMPL0_position                  0x6
#define PSTR3CON_CMPL0_size                      0x1
#define PSTR3CON_CMPL0_value_mask                0x40
#define PSTR3CON_CMPL0_clear_mask                0xBF

#define CMPL03                                   0x6
#define CMPL03_address                           0xF1A
#define CMPL03_position                          0x6
#define CMPL03_size                              0x1
#define CMPL03_value_mask                        0x40
#define CMPL03_clear_mask                        0xBF

#define PSTR3CON_CMPL                            0x6
#define PSTR3CON_CMPL_address                    0xF1A
#define PSTR3CON_CMPL_position                   0x6
#define PSTR3CON_CMPL_size                       0x2
#define PSTR3CON_CMPL_value_mask                 0xC0
#define PSTR3CON_CMPL_clear_mask                 0x3F

#define CMPL13                                   0x7
#define CMPL13_address                           0xF1A
#define CMPL13_position                          0x7
#define CMPL13_size                              0x1
#define CMPL13_value_mask                        0x80
#define CMPL13_clear_mask                        0x7F

#define PSTR3CON_CMPL1                           0x7
#define PSTR3CON_CMPL1_address                   0xF1A
#define PSTR3CON_CMPL1_position                  0x7
#define PSTR3CON_CMPL1_size                      0x1
#define PSTR3CON_CMPL1_value_mask                0x80
#define PSTR3CON_CMPL1_clear_mask                0x7F


/*---------------------------------------------------------------------------#
| PSTR2CON                                                             0xF1B |
#----------------------------------------------------------------------------#
| CMPL12 | P2DC6CON | - | P2DC4CON | P2DC32 | P2DC22 | STRB2 | PSTR2CON_STRA |
#----------------------------------------------------------------------------#
| 7      | 6        | 5 | 4        | 3      | 2      | 1     | 0             |
#---------------------------------------------------------------------------*/

#define PSTR2CON                                 0x0
#define PSTR2CON_address                         0xF1B
#define PSTR2CON_position                        0x0
#define PSTR2CON_size                            0x8
#define PSTR2CON_value_mask                      0xFF
#define PSTR2CON_clear_mask                      0x0

#define PSTR2CON_STRA                            0x0
#define PSTR2CON_STRA_address                    0xF1B
#define PSTR2CON_STRA_position                   0x0
#define PSTR2CON_STRA_size                       0x1
#define PSTR2CON_STRA_value_mask                 0x1
#define PSTR2CON_STRA_clear_mask                 0xFE

#define P2DC02                                   0x0
#define P2DC02_address                           0xF1B
#define P2DC02_position                          0x0
#define P2DC02_size                              0x1
#define P2DC02_value_mask                        0x1
#define P2DC02_clear_mask                        0xFE

#define STRA2                                    0x0
#define STRA2_address                            0xF1B
#define STRA2_position                           0x0
#define STRA2_size                               0x1
#define STRA2_value_mask                         0x1
#define STRA2_clear_mask                         0xFE

#define P2DC0CON                                 0x0
#define P2DC0CON_address                         0xF1B
#define P2DC0CON_position                        0x0
#define P2DC0CON_size                            0x1
#define P2DC0CON_value_mask                      0x1
#define P2DC0CON_clear_mask                      0xFE

#define STRB2                                    0x1
#define STRB2_address                            0xF1B
#define STRB2_position                           0x1
#define STRB2_size                               0x1
#define STRB2_value_mask                         0x2
#define STRB2_clear_mask                         0xFD

#define P2DC12                                   0x1
#define P2DC12_address                           0xF1B
#define P2DC12_position                          0x1
#define P2DC12_size                              0x1
#define P2DC12_value_mask                        0x2
#define P2DC12_clear_mask                        0xFD

#define PSTR2CON_STRB                            0x1
#define PSTR2CON_STRB_address                    0xF1B
#define PSTR2CON_STRB_position                   0x1
#define PSTR2CON_STRB_size                       0x1
#define PSTR2CON_STRB_value_mask                 0x2
#define PSTR2CON_STRB_clear_mask                 0xFD

#define P2DC1CON                                 0x1
#define P2DC1CON_address                         0xF1B
#define P2DC1CON_position                        0x1
#define P2DC1CON_size                            0x1
#define P2DC1CON_value_mask                      0x2
#define P2DC1CON_clear_mask                      0xFD

#define STRC2                                    0x2
#define STRC2_address                            0xF1B
#define STRC2_position                           0x2
#define STRC2_size                               0x1
#define STRC2_value_mask                         0x4
#define STRC2_clear_mask                         0xFB

#define PSTR2CON_STRC                            0x2
#define PSTR2CON_STRC_address                    0xF1B
#define PSTR2CON_STRC_position                   0x2
#define PSTR2CON_STRC_size                       0x1
#define PSTR2CON_STRC_value_mask                 0x4
#define PSTR2CON_STRC_clear_mask                 0xFB

#define P2DC22                                   0x2
#define P2DC22_address                           0xF1B
#define P2DC22_position                          0x2
#define P2DC22_size                              0x1
#define P2DC22_value_mask                        0x4
#define P2DC22_clear_mask                        0xFB

#define P2DC2CON                                 0x2
#define P2DC2CON_address                         0xF1B
#define P2DC2CON_position                        0x2
#define P2DC2CON_size                            0x1
#define P2DC2CON_value_mask                      0x4
#define P2DC2CON_clear_mask                      0xFB

#define P2DC32                                   0x3
#define P2DC32_address                           0xF1B
#define P2DC32_position                          0x3
#define P2DC32_size                              0x1
#define P2DC32_value_mask                        0x8
#define P2DC32_clear_mask                        0xF7

#define STRD2                                    0x3
#define STRD2_address                            0xF1B
#define STRD2_position                           0x3
#define STRD2_size                               0x1
#define STRD2_value_mask                         0x8
#define STRD2_clear_mask                         0xF7

#define PSTR2CON_STRD                            0x3
#define PSTR2CON_STRD_address                    0xF1B
#define PSTR2CON_STRD_position                   0x3
#define PSTR2CON_STRD_size                       0x1
#define PSTR2CON_STRD_value_mask                 0x8
#define PSTR2CON_STRD_clear_mask                 0xF7

#define P2DC3CON                                 0x3
#define P2DC3CON_address                         0xF1B
#define P2DC3CON_position                        0x3
#define P2DC3CON_size                            0x1
#define P2DC3CON_value_mask                      0x8
#define P2DC3CON_clear_mask                      0xF7

#define P2DC4CON                                 0x4
#define P2DC4CON_address                         0xF1B
#define P2DC4CON_position                        0x4
#define P2DC4CON_size                            0x1
#define P2DC4CON_value_mask                      0x10
#define P2DC4CON_clear_mask                      0xEF

#define STRSYNC2                                 0x4
#define STRSYNC2_address                         0xF1B
#define STRSYNC2_position                        0x4
#define STRSYNC2_size                            0x1
#define STRSYNC2_value_mask                      0x10
#define STRSYNC2_clear_mask                      0xEF

#define PSTR2CON_STRSYNC                         0x4
#define PSTR2CON_STRSYNC_address                 0xF1B
#define PSTR2CON_STRSYNC_position                0x4
#define PSTR2CON_STRSYNC_size                    0x1
#define PSTR2CON_STRSYNC_value_mask              0x10
#define PSTR2CON_STRSYNC_clear_mask              0xEF

#define P2DC42                                   0x4
#define P2DC42_address                           0xF1B
#define P2DC42_position                          0x4
#define P2DC42_size                              0x1
#define P2DC42_value_mask                        0x10
#define P2DC42_clear_mask                        0xEF

#define P2DC6CON                                 0x6
#define P2DC6CON_address                         0xF1B
#define P2DC6CON_position                        0x6
#define P2DC6CON_size                            0x1
#define P2DC6CON_value_mask                      0x40
#define P2DC6CON_clear_mask                      0xBF

#define PSTR2CON_CMPL                            0x6
#define PSTR2CON_CMPL_address                    0xF1B
#define PSTR2CON_CMPL_position                   0x6
#define PSTR2CON_CMPL_size                       0x2
#define PSTR2CON_CMPL_value_mask                 0xC0
#define PSTR2CON_CMPL_clear_mask                 0x3F

#define CMPL02                                   0x6
#define CMPL02_address                           0xF1B
#define CMPL02_position                          0x6
#define CMPL02_size                              0x1
#define CMPL02_value_mask                        0x40
#define CMPL02_clear_mask                        0xBF

#define P2DC62                                   0x6
#define P2DC62_address                           0xF1B
#define P2DC62_position                          0x6
#define P2DC62_size                              0x1
#define P2DC62_value_mask                        0x40
#define P2DC62_clear_mask                        0xBF

#define PSTR2CON_CMPL0                           0x6
#define PSTR2CON_CMPL0_address                   0xF1B
#define PSTR2CON_CMPL0_position                  0x6
#define PSTR2CON_CMPL0_size                      0x1
#define PSTR2CON_CMPL0_value_mask                0x40
#define PSTR2CON_CMPL0_clear_mask                0xBF

#define CMPL12                                   0x7
#define CMPL12_address                           0xF1B
#define CMPL12_position                          0x7
#define CMPL12_size                              0x1
#define CMPL12_value_mask                        0x80
#define CMPL12_clear_mask                        0x7F

#define PSTR2CON_CMPL1                           0x7
#define PSTR2CON_CMPL1_address                   0xF1B
#define PSTR2CON_CMPL1_position                  0x7
#define PSTR2CON_CMPL1_size                      0x1
#define PSTR2CON_CMPL1_value_mask                0x80
#define PSTR2CON_CMPL1_clear_mask                0x7F


/*------------------------------#
| TXREG2                  0xF1C |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define TXREG2                                   0x0
#define TXREG2_address                           0xF1C
#define TXREG2_position                          0x0
#define TXREG2_size                              0x8
#define TXREG2_value_mask                        0xFF
#define TXREG2_clear_mask                        0x0


/*------------------------------#
| RCREG2                  0xF1D |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define RCREG2                                   0x0
#define RCREG2_address                           0xF1D
#define RCREG2_position                          0x0
#define RCREG2_size                              0x8
#define RCREG2_value_mask                        0xFF
#define RCREG2_clear_mask                        0x0


/*------------------------------#
| SPBRG2                  0xF1E |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define SPBRG2                                   0x0
#define SPBRG2_address                           0xF1E
#define SPBRG2_position                          0x0
#define SPBRG2_size                              0x8
#define SPBRG2_value_mask                        0xFF
#define SPBRG2_clear_mask                        0x0


/*------------------------------#
| SPBRGH2                 0xF1F |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define SPBRGH2                                  0x0
#define SPBRGH2_address                          0xF1F
#define SPBRGH2_position                         0x0
#define SPBRGH2_size                             0x8
#define SPBRGH2_value_mask                       0xFF
#define SPBRGH2_clear_mask                       0x0


/*------------------------------------------------------------------------------------------------#
| BAUDCON2                                                                                  0xF20 |
#-------------------------------------------------------------------------------------------------#
| BAUDCON2_ABDOVF | BAUDCON2_RCIDL | DTRXP2 | BAUDCON2_TXCKP | BAUDCON2_BRG16 | - | WUE2 | ABDEN2 |
#-------------------------------------------------------------------------------------------------#
| 7               | 6              | 5      | 4              | 3              | 2 | 1    | 0      |
#------------------------------------------------------------------------------------------------*/

#define BAUDCON2                                 0x0
#define BAUDCON2_address                         0xF20
#define BAUDCON2_position                        0x0
#define BAUDCON2_size                            0x8
#define BAUDCON2_value_mask                      0xFF
#define BAUDCON2_clear_mask                      0x0

#define ABDEN2                                   0x0
#define ABDEN2_address                           0xF20
#define ABDEN2_position                          0x0
#define ABDEN2_size                              0x1
#define ABDEN2_value_mask                        0x1
#define ABDEN2_clear_mask                        0xFE

#define BAUDCON2_ABDEN                           0x0
#define BAUDCON2_ABDEN_address                   0xF20
#define BAUDCON2_ABDEN_position                  0x0
#define BAUDCON2_ABDEN_size                      0x1
#define BAUDCON2_ABDEN_value_mask                0x1
#define BAUDCON2_ABDEN_clear_mask                0xFE

#define WUE2                                     0x1
#define WUE2_address                             0xF20
#define WUE2_position                            0x1
#define WUE2_size                                0x1
#define WUE2_value_mask                          0x2
#define WUE2_clear_mask                          0xFD

#define BAUDCON2_WUE                             0x1
#define BAUDCON2_WUE_address                     0xF20
#define BAUDCON2_WUE_position                    0x1
#define BAUDCON2_WUE_size                        0x1
#define BAUDCON2_WUE_value_mask                  0x2
#define BAUDCON2_WUE_clear_mask                  0xFD

#define BRG162                                   0x3
#define BRG162_address                           0xF20
#define BRG162_position                          0x3
#define BRG162_size                              0x1
#define BRG162_value_mask                        0x8
#define BRG162_clear_mask                        0xF7

#define BAUDCON2_BRG16                           0x3
#define BAUDCON2_BRG16_address                   0xF20
#define BAUDCON2_BRG16_position                  0x3
#define BAUDCON2_BRG16_size                      0x1
#define BAUDCON2_BRG16_value_mask                0x8
#define BAUDCON2_BRG16_clear_mask                0xF7

#define SCKP2                                    0x4
#define SCKP2_address                            0xF20
#define SCKP2_position                           0x4
#define SCKP2_size                               0x1
#define SCKP2_value_mask                         0x10
#define SCKP2_clear_mask                         0xEF

#define TXCKP2                                   0x4
#define TXCKP2_address                           0xF20
#define TXCKP2_position                          0x4
#define TXCKP2_size                              0x1
#define TXCKP2_value_mask                        0x10
#define TXCKP2_clear_mask                        0xEF

#define BAUDCON2_TXCKP                           0x4
#define BAUDCON2_TXCKP_address                   0xF20
#define BAUDCON2_TXCKP_position                  0x4
#define BAUDCON2_TXCKP_size                      0x1
#define BAUDCON2_TXCKP_value_mask                0x10
#define BAUDCON2_TXCKP_clear_mask                0xEF

#define DTRXP2                                   0x5
#define DTRXP2_address                           0xF20
#define DTRXP2_position                          0x5
#define DTRXP2_size                              0x1
#define DTRXP2_value_mask                        0x20
#define DTRXP2_clear_mask                        0xDF

#define RXDTP2                                   0x5
#define RXDTP2_address                           0xF20
#define RXDTP2_position                          0x5
#define RXDTP2_size                              0x1
#define RXDTP2_value_mask                        0x20
#define RXDTP2_clear_mask                        0xDF

#define BAUDCON2_RXDTP                           0x5
#define BAUDCON2_RXDTP_address                   0xF20
#define BAUDCON2_RXDTP_position                  0x5
#define BAUDCON2_RXDTP_size                      0x1
#define BAUDCON2_RXDTP_value_mask                0x20
#define BAUDCON2_RXDTP_clear_mask                0xDF

#define RCMT2                                    0x6
#define RCMT2_address                            0xF20
#define RCMT2_position                           0x6
#define RCMT2_size                               0x1
#define RCMT2_value_mask                         0x40
#define RCMT2_clear_mask                         0xBF

#define RCIDL2                                   0x6
#define RCIDL2_address                           0xF20
#define RCIDL2_position                          0x6
#define RCIDL2_size                              0x1
#define RCIDL2_value_mask                        0x40
#define RCIDL2_clear_mask                        0xBF

#define BAUDCON2_RCIDL                           0x6
#define BAUDCON2_RCIDL_address                   0xF20
#define BAUDCON2_RCIDL_position                  0x6
#define BAUDCON2_RCIDL_size                      0x1
#define BAUDCON2_RCIDL_value_mask                0x40
#define BAUDCON2_RCIDL_clear_mask                0xBF

#define BAUDCON2_ABDOVF                          0x7
#define BAUDCON2_ABDOVF_address                  0xF20
#define BAUDCON2_ABDOVF_position                 0x7
#define BAUDCON2_ABDOVF_size                     0x1
#define BAUDCON2_ABDOVF_value_mask               0x80
#define BAUDCON2_ABDOVF_clear_mask               0x7F

#define ABDOVF2                                  0x7
#define ABDOVF2_address                          0xF20
#define ABDOVF2_position                         0x7
#define ABDOVF2_size                             0x1
#define ABDOVF2_value_mask                       0x80
#define ABDOVF2_clear_mask                       0x7F


/*----------------------------------------------------------------------------------------#
| TXSTA2                                                                            0xF21 |
#-----------------------------------------------------------------------------------------#
| TXSTA2_CSRC | TX8_92 | TXEN2 | TXSTA2_SYNC | SENDB2 | TXSTA2_BRGH | TXSTA2_TRMT | TX9D2 |
#-----------------------------------------------------------------------------------------#
| 7           | 6      | 5     | 4           | 3      | 2           | 1           | 0     |
#----------------------------------------------------------------------------------------*/

#define TXSTA2                                   0x0
#define TXSTA2_address                           0xF21
#define TXSTA2_position                          0x0
#define TXSTA2_size                              0x8
#define TXSTA2_value_mask                        0xFF
#define TXSTA2_clear_mask                        0x0

#define TX9D2                                    0x0
#define TX9D2_address                            0xF21
#define TX9D2_position                           0x0
#define TX9D2_size                               0x1
#define TX9D2_value_mask                         0x1
#define TX9D2_clear_mask                         0xFE

#define TXSTA2_TX9D                              0x0
#define TXSTA2_TX9D_address                      0xF21
#define TXSTA2_TX9D_position                     0x0
#define TXSTA2_TX9D_size                         0x1
#define TXSTA2_TX9D_value_mask                   0x1
#define TXSTA2_TX9D_clear_mask                   0xFE

#define TXD82                                    0x0
#define TXD82_address                            0xF21
#define TXD82_position                           0x0
#define TXD82_size                               0x1
#define TXD82_value_mask                         0x1
#define TXD82_clear_mask                         0xFE

#define TRMT2                                    0x1
#define TRMT2_address                            0xF21
#define TRMT2_position                           0x1
#define TRMT2_size                               0x1
#define TRMT2_value_mask                         0x2
#define TRMT2_clear_mask                         0xFD

#define TXSTA2_TRMT                              0x1
#define TXSTA2_TRMT_address                      0xF21
#define TXSTA2_TRMT_position                     0x1
#define TXSTA2_TRMT_size                         0x1
#define TXSTA2_TRMT_value_mask                   0x2
#define TXSTA2_TRMT_clear_mask                   0xFD

#define BRGH2                                    0x2
#define BRGH2_address                            0xF21
#define BRGH2_position                           0x2
#define BRGH2_size                               0x1
#define BRGH2_value_mask                         0x4
#define BRGH2_clear_mask                         0xFB

#define TXSTA2_BRGH                              0x2
#define TXSTA2_BRGH_address                      0xF21
#define TXSTA2_BRGH_position                     0x2
#define TXSTA2_BRGH_size                         0x1
#define TXSTA2_BRGH_value_mask                   0x4
#define TXSTA2_BRGH_clear_mask                   0xFB

#define SENDB2                                   0x3
#define SENDB2_address                           0xF21
#define SENDB2_position                          0x3
#define SENDB2_size                              0x1
#define SENDB2_value_mask                        0x8
#define SENDB2_clear_mask                        0xF7

#define TXSTA2_SENDB                             0x3
#define TXSTA2_SENDB_address                     0xF21
#define TXSTA2_SENDB_position                    0x3
#define TXSTA2_SENDB_size                        0x1
#define TXSTA2_SENDB_value_mask                  0x8
#define TXSTA2_SENDB_clear_mask                  0xF7

#define TXSTA2_SYNC                              0x4
#define TXSTA2_SYNC_address                      0xF21
#define TXSTA2_SYNC_position                     0x4
#define TXSTA2_SYNC_size                         0x1
#define TXSTA2_SYNC_value_mask                   0x10
#define TXSTA2_SYNC_clear_mask                   0xEF

#define SYNC2                                    0x4
#define SYNC2_address                            0xF21
#define SYNC2_position                           0x4
#define SYNC2_size                               0x1
#define SYNC2_value_mask                         0x10
#define SYNC2_clear_mask                         0xEF

#define TXEN2                                    0x5
#define TXEN2_address                            0xF21
#define TXEN2_position                           0x5
#define TXEN2_size                               0x1
#define TXEN2_value_mask                         0x20
#define TXEN2_clear_mask                         0xDF

#define TXSTA2_TXEN                              0x5
#define TXSTA2_TXEN_address                      0xF21
#define TXSTA2_TXEN_position                     0x5
#define TXSTA2_TXEN_size                         0x1
#define TXSTA2_TXEN_value_mask                   0x20
#define TXSTA2_TXEN_clear_mask                   0xDF

#define TX8_92                                   0x6
#define TX8_92_address                           0xF21
#define TX8_92_position                          0x6
#define TX8_92_size                              0x1
#define TX8_92_value_mask                        0x40
#define TX8_92_clear_mask                        0xBF

#define TX92                                     0x6
#define TX92_address                             0xF21
#define TX92_position                            0x6
#define TX92_size                                0x1
#define TX92_value_mask                          0x40
#define TX92_clear_mask                          0xBF

#define TXSTA2_TX9                               0x6
#define TXSTA2_TX9_address                       0xF21
#define TXSTA2_TX9_position                      0x6
#define TXSTA2_TX9_size                          0x1
#define TXSTA2_TX9_value_mask                    0x40
#define TXSTA2_TX9_clear_mask                    0xBF

#define TXSTA2_CSRC                              0x7
#define TXSTA2_CSRC_address                      0xF21
#define TXSTA2_CSRC_position                     0x7
#define TXSTA2_CSRC_size                         0x1
#define TXSTA2_CSRC_value_mask                   0x80
#define TXSTA2_CSRC_clear_mask                   0x7F

#define CSRC2                                    0x7
#define CSRC2_address                            0xF21
#define CSRC2_position                           0x7
#define CSRC2_size                               0x1
#define CSRC2_value_mask                         0x80
#define CSRC2_clear_mask                         0x7F


/*----------------------------------------------------------------------------#
| RCSTA2                                                                0xF22 |
#-----------------------------------------------------------------------------#
| SPEN2 | RC8_92 | SREN2 | RCSTA2_CREN | RCSTA2_ADDEN | FERR2 | OERR2 | RX9D2 |
#-----------------------------------------------------------------------------#
| 7     | 6      | 5     | 4           | 3            | 2     | 1     | 0     |
#----------------------------------------------------------------------------*/

#define RCSTA2                                   0x0
#define RCSTA2_address                           0xF22
#define RCSTA2_position                          0x0
#define RCSTA2_size                              0x8
#define RCSTA2_value_mask                        0xFF
#define RCSTA2_clear_mask                        0x0

#define RCD82                                    0x0
#define RCD82_address                            0xF22
#define RCD82_position                           0x0
#define RCD82_size                               0x1
#define RCD82_value_mask                         0x1
#define RCD82_clear_mask                         0xFE

#define RX9D2                                    0x0
#define RX9D2_address                            0xF22
#define RX9D2_position                           0x0
#define RX9D2_size                               0x1
#define RX9D2_value_mask                         0x1
#define RX9D2_clear_mask                         0xFE

#define RCSTA2_RX9D                              0x0
#define RCSTA2_RX9D_address                      0xF22
#define RCSTA2_RX9D_position                     0x0
#define RCSTA2_RX9D_size                         0x1
#define RCSTA2_RX9D_value_mask                   0x1
#define RCSTA2_RX9D_clear_mask                   0xFE

#define OERR2                                    0x1
#define OERR2_address                            0xF22
#define OERR2_position                           0x1
#define OERR2_size                               0x1
#define OERR2_value_mask                         0x2
#define OERR2_clear_mask                         0xFD

#define RCSTA2_OERR                              0x1
#define RCSTA2_OERR_address                      0xF22
#define RCSTA2_OERR_position                     0x1
#define RCSTA2_OERR_size                         0x1
#define RCSTA2_OERR_value_mask                   0x2
#define RCSTA2_OERR_clear_mask                   0xFD

#define FERR2                                    0x2
#define FERR2_address                            0xF22
#define FERR2_position                           0x2
#define FERR2_size                               0x1
#define FERR2_value_mask                         0x4
#define FERR2_clear_mask                         0xFB

#define RCSTA2_FERR                              0x2
#define RCSTA2_FERR_address                      0xF22
#define RCSTA2_FERR_position                     0x2
#define RCSTA2_FERR_size                         0x1
#define RCSTA2_FERR_value_mask                   0x4
#define RCSTA2_FERR_clear_mask                   0xFB

#define ADDEN2                                   0x3
#define ADDEN2_address                           0xF22
#define ADDEN2_position                          0x3
#define ADDEN2_size                              0x1
#define ADDEN2_value_mask                        0x8
#define ADDEN2_clear_mask                        0xF7

#define RCSTA2_ADDEN                             0x3
#define RCSTA2_ADDEN_address                     0xF22
#define RCSTA2_ADDEN_position                    0x3
#define RCSTA2_ADDEN_size                        0x1
#define RCSTA2_ADDEN_value_mask                  0x8
#define RCSTA2_ADDEN_clear_mask                  0xF7

#define RCSTA2_CREN                              0x4
#define RCSTA2_CREN_address                      0xF22
#define RCSTA2_CREN_position                     0x4
#define RCSTA2_CREN_size                         0x1
#define RCSTA2_CREN_value_mask                   0x10
#define RCSTA2_CREN_clear_mask                   0xEF

#define CREN2                                    0x4
#define CREN2_address                            0xF22
#define CREN2_position                           0x4
#define CREN2_size                               0x1
#define CREN2_value_mask                         0x10
#define CREN2_clear_mask                         0xEF

#define SREN2                                    0x5
#define SREN2_address                            0xF22
#define SREN2_position                           0x5
#define SREN2_size                               0x1
#define SREN2_value_mask                         0x20
#define SREN2_clear_mask                         0xDF

#define RCSTA2_SREN                              0x5
#define RCSTA2_SREN_address                      0xF22
#define RCSTA2_SREN_position                     0x5
#define RCSTA2_SREN_size                         0x1
#define RCSTA2_SREN_value_mask                   0x20
#define RCSTA2_SREN_clear_mask                   0xDF

#define RC92                                     0x6
#define RC92_address                             0xF22
#define RC92_position                            0x6
#define RC92_size                                0x1
#define RC92_value_mask                          0x40
#define RC92_clear_mask                          0xBF

#define RC8_92                                   0x6
#define RC8_92_address                           0xF22
#define RC8_92_position                          0x6
#define RC8_92_size                              0x1
#define RC8_92_value_mask                        0x40
#define RC8_92_clear_mask                        0xBF

#define RCSTA2_RX9                               0x6
#define RCSTA2_RX9_address                       0xF22
#define RCSTA2_RX9_position                      0x6
#define RCSTA2_RX9_size                          0x1
#define RCSTA2_RX9_value_mask                    0x40
#define RCSTA2_RX9_clear_mask                    0xBF

#define RX92                                     0x6
#define RX92_address                             0xF22
#define RX92_position                            0x6
#define RX92_size                                0x1
#define RX92_value_mask                          0x40
#define RX92_clear_mask                          0xBF

#define RCSTA2_SPEN                              0x7
#define RCSTA2_SPEN_address                      0xF22
#define RCSTA2_SPEN_position                     0x7
#define RCSTA2_SPEN_size                         0x1
#define RCSTA2_SPEN_value_mask                   0x80
#define RCSTA2_SPEN_clear_mask                   0x7F

#define SPEN2                                    0x7
#define SPEN2_address                            0xF22
#define SPEN2_position                           0x7
#define SPEN2_size                               0x1
#define SPEN2_value_mask                         0x80
#define SPEN2_clear_mask                         0x7F


/*--------------------------------------------------#
| ANCON2                                      0xF23 |
#---------------------------------------------------#
| - | - | - | - | PCFG19 | PCFG18 | PCFG17 | PCFG16 |
#---------------------------------------------------#
| 7 | 6 | 5 | 4 | 3      | 2      | 1      | 0      |
#--------------------------------------------------*/

#define ANCON2                                   0x0
#define ANCON2_address                           0xF23
#define ANCON2_position                          0x0
#define ANCON2_size                              0x8
#define ANCON2_value_mask                        0xFF
#define ANCON2_clear_mask                        0x0

#define PCFG16                                   0x0
#define PCFG16_address                           0xF23
#define PCFG16_position                          0x0
#define PCFG16_size                              0x1
#define PCFG16_value_mask                        0x1
#define PCFG16_clear_mask                        0xFE

#define ANSEL16                                  0x0
#define ANSEL16_address                          0xF23
#define ANSEL16_position                         0x0
#define ANSEL16_size                             0x1
#define ANSEL16_value_mask                       0x1
#define ANSEL16_clear_mask                       0xFE

#define PCFG17                                   0x1
#define PCFG17_address                           0xF23
#define PCFG17_position                          0x1
#define PCFG17_size                              0x1
#define PCFG17_value_mask                        0x2
#define PCFG17_clear_mask                        0xFD

#define ANSEL17                                  0x1
#define ANSEL17_address                          0xF23
#define ANSEL17_position                         0x1
#define ANSEL17_size                             0x1
#define ANSEL17_value_mask                       0x2
#define ANSEL17_clear_mask                       0xFD

#define PCFG18                                   0x2
#define PCFG18_address                           0xF23
#define PCFG18_position                          0x2
#define PCFG18_size                              0x1
#define PCFG18_value_mask                        0x4
#define PCFG18_clear_mask                        0xFB

#define ANSEL18                                  0x2
#define ANSEL18_address                          0xF23
#define ANSEL18_position                         0x2
#define ANSEL18_size                             0x1
#define ANSEL18_value_mask                       0x4
#define ANSEL18_clear_mask                       0xFB

#define PCFG19                                   0x3
#define PCFG19_address                           0xF23
#define PCFG19_position                          0x3
#define PCFG19_size                              0x1
#define PCFG19_value_mask                        0x8
#define PCFG19_clear_mask                        0xF7

#define ANSEL19                                  0x3
#define ANSEL19_address                          0xF23
#define ANSEL19_position                         0x3
#define ANSEL19_size                             0x1
#define ANSEL19_value_mask                       0x8
#define ANSEL19_clear_mask                       0xF7


/*---------------------------------------------------#
| ANCON1                                       0xF24 |
#----------------------------------------------------#
| - | - | - | - | ANSEL11 | PCFG10 | ANSEL9 | ANSEL8 |
#----------------------------------------------------#
| 7 | 6 | 5 | 4 | 3       | 2      | 1      | 0      |
#---------------------------------------------------*/

#define ANCON1                                   0x0
#define ANCON1_address                           0xF24
#define ANCON1_position                          0x0
#define ANCON1_size                              0x8
#define ANCON1_value_mask                        0xFF
#define ANCON1_clear_mask                        0x0

#define ANSEL8                                   0x0
#define ANSEL8_address                           0xF24
#define ANSEL8_position                          0x0
#define ANSEL8_size                              0x1
#define ANSEL8_value_mask                        0x1
#define ANSEL8_clear_mask                        0xFE

#define PCFG8                                    0x0
#define PCFG8_address                            0xF24
#define PCFG8_position                           0x0
#define PCFG8_size                               0x1
#define PCFG8_value_mask                         0x1
#define PCFG8_clear_mask                         0xFE

#define ANSEL9                                   0x1
#define ANSEL9_address                           0xF24
#define ANSEL9_position                          0x1
#define ANSEL9_size                              0x1
#define ANSEL9_value_mask                        0x2
#define ANSEL9_clear_mask                        0xFD

#define PCFG9                                    0x1
#define PCFG9_address                            0xF24
#define PCFG9_position                           0x1
#define PCFG9_size                               0x1
#define PCFG9_value_mask                         0x2
#define PCFG9_clear_mask                         0xFD

#define PCFG10                                   0x2
#define PCFG10_address                           0xF24
#define PCFG10_position                          0x2
#define PCFG10_size                              0x1
#define PCFG10_value_mask                        0x4
#define PCFG10_clear_mask                        0xFB

#define ANSEL10                                  0x2
#define ANSEL10_address                          0xF24
#define ANSEL10_position                         0x2
#define ANSEL10_size                             0x1
#define ANSEL10_value_mask                       0x4
#define ANSEL10_clear_mask                       0xFB

#define ANSEL11                                  0x3
#define ANSEL11_address                          0xF24
#define ANSEL11_position                         0x3
#define ANSEL11_size                             0x1
#define ANSEL11_value_mask                       0x8
#define ANSEL11_clear_mask                       0xF7

#define PCFG11                                   0x3
#define PCFG11_address                           0xF24
#define PCFG11_position                          0x3
#define PCFG11_size                              0x1
#define PCFG11_value_mask                        0x8
#define PCFG11_clear_mask                        0xF7


/*----------------------------------------------------------------------#
| ANCON0                                                          0xF25 |
#-----------------------------------------------------------------------#
| ANSEL7 | ANSEL6 | ANSEL5 | ANSEL4 | ANSEL3 | ANSEL2 | ANSEL1 | ANSEL0 |
#-----------------------------------------------------------------------#
| 7      | 6      | 5      | 4      | 3      | 2      | 1      | 0      |
#----------------------------------------------------------------------*/

#define ANCON0                                   0x0
#define ANCON0_address                           0xF25
#define ANCON0_position                          0x0
#define ANCON0_size                              0x8
#define ANCON0_value_mask                        0xFF
#define ANCON0_clear_mask                        0x0

#define ANSEL0                                   0x0
#define ANSEL0_address                           0xF25
#define ANSEL0_position                          0x0
#define ANSEL0_size                              0x1
#define ANSEL0_value_mask                        0x1
#define ANSEL0_clear_mask                        0xFE

#define PCFG0                                    0x0
#define PCFG0_address                            0xF25
#define PCFG0_position                           0x0
#define PCFG0_size                               0x1
#define PCFG0_value_mask                         0x1
#define PCFG0_clear_mask                         0xFE

#define ANSEL1                                   0x1
#define ANSEL1_address                           0xF25
#define ANSEL1_position                          0x1
#define ANSEL1_size                              0x1
#define ANSEL1_value_mask                        0x2
#define ANSEL1_clear_mask                        0xFD

#define PCFG1                                    0x1
#define PCFG1_address                            0xF25
#define PCFG1_position                           0x1
#define PCFG1_size                               0x1
#define PCFG1_value_mask                         0x2
#define PCFG1_clear_mask                         0xFD

#define ANSEL2                                   0x2
#define ANSEL2_address                           0xF25
#define ANSEL2_position                          0x2
#define ANSEL2_size                              0x1
#define ANSEL2_value_mask                        0x4
#define ANSEL2_clear_mask                        0xFB

#define PCFG2                                    0x2
#define PCFG2_address                            0xF25
#define PCFG2_position                           0x2
#define PCFG2_size                               0x1
#define PCFG2_value_mask                         0x4
#define PCFG2_clear_mask                         0xFB

#define ANSEL3                                   0x3
#define ANSEL3_address                           0xF25
#define ANSEL3_position                          0x3
#define ANSEL3_size                              0x1
#define ANSEL3_value_mask                        0x8
#define ANSEL3_clear_mask                        0xF7

#define PCFG3                                    0x3
#define PCFG3_address                            0xF25
#define PCFG3_position                           0x3
#define PCFG3_size                               0x1
#define PCFG3_value_mask                         0x8
#define PCFG3_clear_mask                         0xF7

#define ANSEL4                                   0x4
#define ANSEL4_address                           0xF25
#define ANSEL4_position                          0x4
#define ANSEL4_size                              0x1
#define ANSEL4_value_mask                        0x10
#define ANSEL4_clear_mask                        0xEF

#define PCFG4                                    0x4
#define PCFG4_address                            0xF25
#define PCFG4_position                           0x4
#define PCFG4_size                               0x1
#define PCFG4_value_mask                         0x10
#define PCFG4_clear_mask                         0xEF

#define ANSEL5                                   0x5
#define ANSEL5_address                           0xF25
#define ANSEL5_position                          0x5
#define ANSEL5_size                              0x1
#define ANSEL5_value_mask                        0x20
#define ANSEL5_clear_mask                        0xDF

#define PCFG5                                    0x5
#define PCFG5_address                            0xF25
#define PCFG5_position                           0x5
#define PCFG5_size                               0x1
#define PCFG5_value_mask                         0x20
#define PCFG5_clear_mask                         0xDF

#define ANSEL6                                   0x6
#define ANSEL6_address                           0xF25
#define ANSEL6_position                          0x6
#define ANSEL6_size                              0x1
#define ANSEL6_value_mask                        0x40
#define ANSEL6_clear_mask                        0xBF

#define PCFG6                                    0x6
#define PCFG6_address                            0xF25
#define PCFG6_position                           0x6
#define PCFG6_size                               0x1
#define PCFG6_value_mask                         0x40
#define PCFG6_clear_mask                         0xBF

#define ANSEL7                                   0x7
#define ANSEL7_address                           0xF25
#define ANSEL7_position                          0x7
#define ANSEL7_size                              0x1
#define ANSEL7_value_mask                        0x80
#define ANSEL7_clear_mask                        0x7F

#define PCFG7                                    0x7
#define PCFG7_address                            0xF25
#define PCFG7_position                           0x7
#define PCFG7_size                               0x1
#define PCFG7_value_mask                         0x80
#define PCFG7_clear_mask                         0x7F


/*-----------------------------------------#
| ODCON3                             0xF27 |
#------------------------------------------#
| U2OD | U1OD | - | - | - | - | - | CTMUDS |
#------------------------------------------#
| 7    | 6    | 5 | 4 | 3 | 2 | 1 | 0      |
#-----------------------------------------*/

#define ODCON3                                   0x0
#define ODCON3_address                           0xF27
#define ODCON3_position                          0x0
#define ODCON3_size                              0x8
#define ODCON3_value_mask                        0xFF
#define ODCON3_clear_mask                        0x0

#define CTMUDS                                   0x0
#define CTMUDS_address                           0xF27
#define CTMUDS_position                          0x0
#define CTMUDS_size                              0x1
#define CTMUDS_value_mask                        0x1
#define CTMUDS_clear_mask                        0xFE

#define U1OD                                     0x6
#define U1OD_address                             0xF27
#define U1OD_position                            0x6
#define U1OD_size                                0x1
#define U1OD_value_mask                          0x40
#define U1OD_clear_mask                          0xBF

#define U2OD                                     0x7
#define U2OD_address                             0xF27
#define U2OD_position                            0x7
#define U2OD_size                                0x1
#define U2OD_value_mask                          0x80
#define U2OD_clear_mask                          0x7F


/*-----------------------------------------------------------------------#
| ODCON2                                                           0xF28 |
#------------------------------------------------------------------------#
| CCP10OD | CCP9OD | CCP8OD | CCP7OD | CCP6OD | CCP5OD | CCP4OD | CCP3OD |
#------------------------------------------------------------------------#
| 7       | 6      | 5      | 4      | 3      | 2      | 1      | 0      |
#-----------------------------------------------------------------------*/

#define ODCON2                                   0x0
#define ODCON2_address                           0xF28
#define ODCON2_position                          0x0
#define ODCON2_size                              0x8
#define ODCON2_value_mask                        0xFF
#define ODCON2_clear_mask                        0x0

#define CCP3OD                                   0x0
#define CCP3OD_address                           0xF28
#define CCP3OD_position                          0x0
#define CCP3OD_size                              0x1
#define CCP3OD_value_mask                        0x1
#define CCP3OD_clear_mask                        0xFE

#define CCP4OD                                   0x1
#define CCP4OD_address                           0xF28
#define CCP4OD_position                          0x1
#define CCP4OD_size                              0x1
#define CCP4OD_value_mask                        0x2
#define CCP4OD_clear_mask                        0xFD

#define CCP5OD                                   0x2
#define CCP5OD_address                           0xF28
#define CCP5OD_position                          0x2
#define CCP5OD_size                              0x1
#define CCP5OD_value_mask                        0x4
#define CCP5OD_clear_mask                        0xFB

#define CCP6OD                                   0x3
#define CCP6OD_address                           0xF28
#define CCP6OD_position                          0x3
#define CCP6OD_size                              0x1
#define CCP6OD_value_mask                        0x8
#define CCP6OD_clear_mask                        0xF7

#define CCP7OD                                   0x4
#define CCP7OD_address                           0xF28
#define CCP7OD_position                          0x4
#define CCP7OD_size                              0x1
#define CCP7OD_value_mask                        0x10
#define CCP7OD_clear_mask                        0xEF

#define CCP8OD                                   0x5
#define CCP8OD_address                           0xF28
#define CCP8OD_position                          0x5
#define CCP8OD_size                              0x1
#define CCP8OD_value_mask                        0x20
#define CCP8OD_clear_mask                        0xDF

#define CCP9OD                                   0x6
#define CCP9OD_address                           0xF28
#define CCP9OD_position                          0x6
#define CCP9OD_size                              0x1
#define CCP9OD_value_mask                        0x40
#define CCP9OD_clear_mask                        0xBF

#define CCP10OD                                  0x7
#define CCP10OD_address                          0xF28
#define CCP10OD_position                         0x7
#define CCP10OD_size                             0x1
#define CCP10OD_value_mask                       0x80
#define CCP10OD_clear_mask                       0x7F


/*--------------------------------------------------#
| ODCON1                                      0xF29 |
#---------------------------------------------------#
| SPI1OD | CCP2OD | CCP1OD | - | - | - | - | SPI2OD |
#---------------------------------------------------#
| 7      | 6      | 5      | 4 | 3 | 2 | 1 | 0      |
#--------------------------------------------------*/

#define ODCON1                                   0x0
#define ODCON1_address                           0xF29
#define ODCON1_position                          0x0
#define ODCON1_size                              0x8
#define ODCON1_value_mask                        0xFF
#define ODCON1_clear_mask                        0x0

#define SPI2OD                                   0x0
#define SPI2OD_address                           0xF29
#define SPI2OD_position                          0x0
#define SPI2OD_size                              0x1
#define SPI2OD_value_mask                        0x1
#define SPI2OD_clear_mask                        0xFE

#define CCP1OD                                   0x5
#define CCP1OD_address                           0xF29
#define CCP1OD_position                          0x5
#define CCP1OD_size                              0x1
#define CCP1OD_value_mask                        0x20
#define CCP1OD_clear_mask                        0xDF

#define CCP2OD                                   0x6
#define CCP2OD_address                           0xF29
#define CCP2OD_position                          0x6
#define CCP2OD_size                              0x1
#define CCP2OD_value_mask                        0x40
#define CCP2OD_clear_mask                        0xBF

#define SPI1OD                                   0x7
#define SPI1OD_address                           0xF29
#define SPI1OD_position                          0x7
#define SPI1OD_size                              0x1
#define SPI1OD_value_mask                        0x80
#define SPI1OD_clear_mask                        0x7F


/*--------------------------------------------------------------#
| REFOCON                                                 0xF2A |
#---------------------------------------------------------------#
| ROON | - | ROSSLP | ROSEL | RODIV3 | RODIV2 | RODIV1 | RODIV0 |
#---------------------------------------------------------------#
| 7    | 6 | 5      | 4     | 3      | 2      | 1      | 0      |
#--------------------------------------------------------------*/

#define REFOCON                                  0x0
#define REFOCON_address                          0xF2A
#define REFOCON_position                         0x0
#define REFOCON_size                             0x8
#define REFOCON_value_mask                       0xFF
#define REFOCON_clear_mask                       0x0

#define RODIV0                                   0x0
#define RODIV0_address                           0xF2A
#define RODIV0_position                          0x0
#define RODIV0_size                              0x1
#define RODIV0_value_mask                        0x1
#define RODIV0_clear_mask                        0xFE

#define RODIV                                    0x0
#define RODIV_address                            0xF2A
#define RODIV_position                           0x0
#define RODIV_size                               0x4
#define RODIV_value_mask                         0xF
#define RODIV_clear_mask                         0xF0

#define RODIV1                                   0x1
#define RODIV1_address                           0xF2A
#define RODIV1_position                          0x1
#define RODIV1_size                              0x1
#define RODIV1_value_mask                        0x2
#define RODIV1_clear_mask                        0xFD

#define RODIV2                                   0x2
#define RODIV2_address                           0xF2A
#define RODIV2_position                          0x2
#define RODIV2_size                              0x1
#define RODIV2_value_mask                        0x4
#define RODIV2_clear_mask                        0xFB

#define RODIV3                                   0x3
#define RODIV3_address                           0xF2A
#define RODIV3_position                          0x3
#define RODIV3_size                              0x1
#define RODIV3_value_mask                        0x8
#define RODIV3_clear_mask                        0xF7

#define ROSEL                                    0x4
#define ROSEL_address                            0xF2A
#define ROSEL_position                           0x4
#define ROSEL_size                               0x1
#define ROSEL_value_mask                         0x10
#define ROSEL_clear_mask                         0xEF

#define ROSSLP                                   0x5
#define ROSSLP_address                           0xF2A
#define ROSSLP_position                          0x5
#define ROSSLP_size                              0x1
#define ROSSLP_value_mask                        0x20
#define ROSSLP_clear_mask                        0xDF

#define ROON                                     0x7
#define ROON_address                             0xF2A
#define ROON_position                            0x7
#define ROON_size                                0x1
#define ROON_value_mask                          0x80
#define ROON_clear_mask                          0x7F


/*-------------------------------------------------------#
| CCPTMRS2                                         0xF2B |
#--------------------------------------------------------#
| - | - | - | C10TSEL0 | - | C9TSEL0 | C8TSEL1 | C8TSEL0 |
#--------------------------------------------------------#
| 7 | 6 | 5 | 4        | 3 | 2       | 1       | 0       |
#-------------------------------------------------------*/

#define CCPTMRS2                                 0x0
#define CCPTMRS2_address                         0xF2B
#define CCPTMRS2_position                        0x0
#define CCPTMRS2_size                            0x8
#define CCPTMRS2_value_mask                      0xFF
#define CCPTMRS2_clear_mask                      0x0

#define C8TSEL0                                  0x0
#define C8TSEL0_address                          0xF2B
#define C8TSEL0_position                         0x0
#define C8TSEL0_size                             0x1
#define C8TSEL0_value_mask                       0x1
#define C8TSEL0_clear_mask                       0xFE

#define C8TSEL                                   0x0
#define C8TSEL_address                           0xF2B
#define C8TSEL_position                          0x0
#define C8TSEL_size                              0x2
#define C8TSEL_value_mask                        0x3
#define C8TSEL_clear_mask                        0xFC

#define C8TSEL1                                  0x1
#define C8TSEL1_address                          0xF2B
#define C8TSEL1_position                         0x1
#define C8TSEL1_size                             0x1
#define C8TSEL1_value_mask                       0x2
#define C8TSEL1_clear_mask                       0xFD

#define C9TSEL0                                  0x2
#define C9TSEL0_address                          0xF2B
#define C9TSEL0_position                         0x2
#define C9TSEL0_size                             0x1
#define C9TSEL0_value_mask                       0x4
#define C9TSEL0_clear_mask                       0xFB

#define C10TSEL0                                 0x4
#define C10TSEL0_address                         0xF2B
#define C10TSEL0_position                        0x4
#define C10TSEL0_size                            0x1
#define C10TSEL0_value_mask                      0x10
#define C10TSEL0_clear_mask                      0xEF


/*------------------------------------------------------------------#
| CCPTMRS1                                                    0xF2C |
#-------------------------------------------------------------------#
| C7TSEL1 | C7TSEL0 | - | C6TSEL0 | - | C5TSEL0 | C4TSEL1 | C4TSEL0 |
#-------------------------------------------------------------------#
| 7       | 6       | 5 | 4       | 3 | 2       | 1       | 0       |
#------------------------------------------------------------------*/

#define CCPTMRS1                                 0x0
#define CCPTMRS1_address                         0xF2C
#define CCPTMRS1_position                        0x0
#define CCPTMRS1_size                            0x8
#define CCPTMRS1_value_mask                      0xFF
#define CCPTMRS1_clear_mask                      0x0

#define C4TSEL                                   0x0
#define C4TSEL_address                           0xF2C
#define C4TSEL_position                          0x0
#define C4TSEL_size                              0x2
#define C4TSEL_value_mask                        0x3
#define C4TSEL_clear_mask                        0xFC

#define C4TSEL0                                  0x0
#define C4TSEL0_address                          0xF2C
#define C4TSEL0_position                         0x0
#define C4TSEL0_size                             0x1
#define C4TSEL0_value_mask                       0x1
#define C4TSEL0_clear_mask                       0xFE

#define C4TSEL1                                  0x1
#define C4TSEL1_address                          0xF2C
#define C4TSEL1_position                         0x1
#define C4TSEL1_size                             0x1
#define C4TSEL1_value_mask                       0x2
#define C4TSEL1_clear_mask                       0xFD

#define C5TSEL0                                  0x2
#define C5TSEL0_address                          0xF2C
#define C5TSEL0_position                         0x2
#define C5TSEL0_size                             0x1
#define C5TSEL0_value_mask                       0x4
#define C5TSEL0_clear_mask                       0xFB

#define C6TSEL0                                  0x4
#define C6TSEL0_address                          0xF2C
#define C6TSEL0_position                         0x4
#define C6TSEL0_size                             0x1
#define C6TSEL0_value_mask                       0x10
#define C6TSEL0_clear_mask                       0xEF

#define C7TSEL                                   0x6
#define C7TSEL_address                           0xF2C
#define C7TSEL_position                          0x6
#define C7TSEL_size                              0x2
#define C7TSEL_value_mask                        0xC0
#define C7TSEL_clear_mask                        0x3F

#define C7TSEL0                                  0x6
#define C7TSEL0_address                          0xF2C
#define C7TSEL0_position                         0x6
#define C7TSEL0_size                             0x1
#define C7TSEL0_value_mask                       0x40
#define C7TSEL0_clear_mask                       0xBF

#define C7TSEL1                                  0x7
#define C7TSEL1_address                          0xF2C
#define C7TSEL1_position                         0x7
#define C7TSEL1_size                             0x1
#define C7TSEL1_value_mask                       0x80
#define C7TSEL1_clear_mask                       0x7F


/*------------------------------------------------------------------------------#
| CCPTMRS0                                                                0xF2D |
#-------------------------------------------------------------------------------#
| C3TSEL1 | C3TSEL0 | C2TSEL2 | C2TSEL1 | C2TSEL0 | C1TSEL2 | C1TSEL1 | C1TSEL0 |
#-------------------------------------------------------------------------------#
| 7       | 6       | 5       | 4       | 3       | 2       | 1       | 0       |
#------------------------------------------------------------------------------*/

#define CCPTMRS0                                 0x0
#define CCPTMRS0_address                         0xF2D
#define CCPTMRS0_position                        0x0
#define CCPTMRS0_size                            0x8
#define CCPTMRS0_value_mask                      0xFF
#define CCPTMRS0_clear_mask                      0x0

#define C1TSEL0                                  0x0
#define C1TSEL0_address                          0xF2D
#define C1TSEL0_position                         0x0
#define C1TSEL0_size                             0x1
#define C1TSEL0_value_mask                       0x1
#define C1TSEL0_clear_mask                       0xFE

#define C1TSEL                                   0x0
#define C1TSEL_address                           0xF2D
#define C1TSEL_position                          0x0
#define C1TSEL_size                              0x3
#define C1TSEL_value_mask                        0x7
#define C1TSEL_clear_mask                        0xF8

#define C1TSEL1                                  0x1
#define C1TSEL1_address                          0xF2D
#define C1TSEL1_position                         0x1
#define C1TSEL1_size                             0x1
#define C1TSEL1_value_mask                       0x2
#define C1TSEL1_clear_mask                       0xFD

#define C1TSEL2                                  0x2
#define C1TSEL2_address                          0xF2D
#define C1TSEL2_position                         0x2
#define C1TSEL2_size                             0x1
#define C1TSEL2_value_mask                       0x4
#define C1TSEL2_clear_mask                       0xFB

#define C2TSEL0                                  0x3
#define C2TSEL0_address                          0xF2D
#define C2TSEL0_position                         0x3
#define C2TSEL0_size                             0x1
#define C2TSEL0_value_mask                       0x8
#define C2TSEL0_clear_mask                       0xF7

#define C2TSEL                                   0x3
#define C2TSEL_address                           0xF2D
#define C2TSEL_position                          0x3
#define C2TSEL_size                              0x3
#define C2TSEL_value_mask                        0x38
#define C2TSEL_clear_mask                        0xC7

#define C2TSEL1                                  0x4
#define C2TSEL1_address                          0xF2D
#define C2TSEL1_position                         0x4
#define C2TSEL1_size                             0x1
#define C2TSEL1_value_mask                       0x10
#define C2TSEL1_clear_mask                       0xEF

#define C2TSEL2                                  0x5
#define C2TSEL2_address                          0xF2D
#define C2TSEL2_position                         0x5
#define C2TSEL2_size                             0x1
#define C2TSEL2_value_mask                       0x20
#define C2TSEL2_clear_mask                       0xDF

#define C3TSEL0                                  0x6
#define C3TSEL0_address                          0xF2D
#define C3TSEL0_position                         0x6
#define C3TSEL0_size                             0x1
#define C3TSEL0_value_mask                       0x40
#define C3TSEL0_clear_mask                       0xBF

#define C3TSEL                                   0x6
#define C3TSEL_address                           0xF2D
#define C3TSEL_position                          0x6
#define C3TSEL_size                              0x2
#define C3TSEL_value_mask                        0xC0
#define C3TSEL_clear_mask                        0x3F

#define C3TSEL1                                  0x7
#define C3TSEL1_address                          0xF2D
#define C3TSEL1_position                         0x7
#define C3TSEL1_size                             0x1
#define C3TSEL1_value_mask                       0x80
#define C3TSEL1_clear_mask                       0x7F


/*----------------------------------------------------------------------------------------------------#
| CM3CON                                                                                        0xF2E |
#-----------------------------------------------------------------------------------------------------#
| CM3CON_CON | CM3CON_COE | CM3CON_CPOL | CM3CON_EVPOL1 | EVPOL03 | CREF3 | CM3CON_CCH1 | CM3CON_CCH0 |
#-----------------------------------------------------------------------------------------------------#
| 7          | 6          | 5           | 4             | 3       | 2     | 1           | 0           |
#----------------------------------------------------------------------------------------------------*/

#define CM3CON                                   0x0
#define CM3CON_address                           0xF2E
#define CM3CON_position                          0x0
#define CM3CON_size                              0x8
#define CM3CON_value_mask                        0xFF
#define CM3CON_clear_mask                        0x0

#define CM3CON_CCH                               0x0
#define CM3CON_CCH_address                       0xF2E
#define CM3CON_CCH_position                      0x0
#define CM3CON_CCH_size                          0x2
#define CM3CON_CCH_value_mask                    0x3
#define CM3CON_CCH_clear_mask                    0xFC

#define CCH03                                    0x0
#define CCH03_address                            0xF2E
#define CCH03_position                           0x0
#define CCH03_size                               0x1
#define CCH03_value_mask                         0x1
#define CCH03_clear_mask                         0xFE

#define CM3CON_CCH0                              0x0
#define CM3CON_CCH0_address                      0xF2E
#define CM3CON_CCH0_position                     0x0
#define CM3CON_CCH0_size                         0x1
#define CM3CON_CCH0_value_mask                   0x1
#define CM3CON_CCH0_clear_mask                   0xFE

#define CCH13                                    0x1
#define CCH13_address                            0xF2E
#define CCH13_position                           0x1
#define CCH13_size                               0x1
#define CCH13_value_mask                         0x2
#define CCH13_clear_mask                         0xFD

#define CM3CON_CCH1                              0x1
#define CM3CON_CCH1_address                      0xF2E
#define CM3CON_CCH1_position                     0x1
#define CM3CON_CCH1_size                         0x1
#define CM3CON_CCH1_value_mask                   0x2
#define CM3CON_CCH1_clear_mask                   0xFD

#define CM3CON_CREF                              0x2
#define CM3CON_CREF_address                      0xF2E
#define CM3CON_CREF_position                     0x2
#define CM3CON_CREF_size                         0x1
#define CM3CON_CREF_value_mask                   0x4
#define CM3CON_CREF_clear_mask                   0xFB

#define CREF3                                    0x2
#define CREF3_address                            0xF2E
#define CREF3_position                           0x2
#define CREF3_size                               0x1
#define CREF3_value_mask                         0x4
#define CREF3_clear_mask                         0xFB

#define CM3CON_EVPOL                             0x3
#define CM3CON_EVPOL_address                     0xF2E
#define CM3CON_EVPOL_position                    0x3
#define CM3CON_EVPOL_size                        0x2
#define CM3CON_EVPOL_value_mask                  0x18
#define CM3CON_EVPOL_clear_mask                  0xE7

#define EVPOL03                                  0x3
#define EVPOL03_address                          0xF2E
#define EVPOL03_position                         0x3
#define EVPOL03_size                             0x1
#define EVPOL03_value_mask                       0x8
#define EVPOL03_clear_mask                       0xF7

#define CM3CON_EVPOL0                            0x3
#define CM3CON_EVPOL0_address                    0xF2E
#define CM3CON_EVPOL0_position                   0x3
#define CM3CON_EVPOL0_size                       0x1
#define CM3CON_EVPOL0_value_mask                 0x8
#define CM3CON_EVPOL0_clear_mask                 0xF7

#define CM3CON_EVPOL1                            0x4
#define CM3CON_EVPOL1_address                    0xF2E
#define CM3CON_EVPOL1_position                   0x4
#define CM3CON_EVPOL1_size                       0x1
#define CM3CON_EVPOL1_value_mask                 0x10
#define CM3CON_EVPOL1_clear_mask                 0xEF

#define EVPOL13                                  0x4
#define EVPOL13_address                          0xF2E
#define EVPOL13_position                         0x4
#define EVPOL13_size                             0x1
#define EVPOL13_value_mask                       0x10
#define EVPOL13_clear_mask                       0xEF

#define CM3CON_CPOL                              0x5
#define CM3CON_CPOL_address                      0xF2E
#define CM3CON_CPOL_position                     0x5
#define CM3CON_CPOL_size                         0x1
#define CM3CON_CPOL_value_mask                   0x20
#define CM3CON_CPOL_clear_mask                   0xDF

#define CPOL3                                    0x5
#define CPOL3_address                            0xF2E
#define CPOL3_position                           0x5
#define CPOL3_size                               0x1
#define CPOL3_value_mask                         0x20
#define CPOL3_clear_mask                         0xDF

#define COE3                                     0x6
#define COE3_address                             0xF2E
#define COE3_position                            0x6
#define COE3_size                                0x1
#define COE3_value_mask                          0x40
#define COE3_clear_mask                          0xBF

#define CM3CON_COE                               0x6
#define CM3CON_COE_address                       0xF2E
#define CM3CON_COE_position                      0x6
#define CM3CON_COE_size                          0x1
#define CM3CON_COE_value_mask                    0x40
#define CM3CON_COE_clear_mask                    0xBF

#define CM3CON_CON                               0x7
#define CM3CON_CON_address                       0xF2E
#define CM3CON_CON_position                      0x7
#define CM3CON_CON_size                          0x1
#define CM3CON_CON_value_mask                    0x80
#define CM3CON_CON_clear_mask                    0x7F

#define CON3                                     0x7
#define CON3_address                             0xF2E
#define CON3_position                            0x7
#define CON3_size                                0x1
#define CON3_value_mask                          0x80
#define CON3_clear_mask                          0x7F


/*----------------------------------------------------------------------------------#
| CM2CON                                                                      0xF2F |
#-----------------------------------------------------------------------------------#
| CM2CON_CON | CM2CON_COE | CM2CON_CPOL | EVPOL12 | EVPOL02 | CREF2 | CCH12 | CCH02 |
#-----------------------------------------------------------------------------------#
| 7          | 6          | 5           | 4       | 3       | 2     | 1     | 0     |
#----------------------------------------------------------------------------------*/

#define CM2CON                                   0x0
#define CM2CON_address                           0xF2F
#define CM2CON_position                          0x0
#define CM2CON_size                              0x8
#define CM2CON_value_mask                        0xFF
#define CM2CON_clear_mask                        0x0

#define CM2CON_CCH                               0x0
#define CM2CON_CCH_address                       0xF2F
#define CM2CON_CCH_position                      0x0
#define CM2CON_CCH_size                          0x2
#define CM2CON_CCH_value_mask                    0x3
#define CM2CON_CCH_clear_mask                    0xFC

#define CM2CON_CCH0                              0x0
#define CM2CON_CCH0_address                      0xF2F
#define CM2CON_CCH0_position                     0x0
#define CM2CON_CCH0_size                         0x1
#define CM2CON_CCH0_value_mask                   0x1
#define CM2CON_CCH0_clear_mask                   0xFE

#define CCH02                                    0x0
#define CCH02_address                            0xF2F
#define CCH02_position                           0x0
#define CCH02_size                               0x1
#define CCH02_value_mask                         0x1
#define CCH02_clear_mask                         0xFE

#define CCH12                                    0x1
#define CCH12_address                            0xF2F
#define CCH12_position                           0x1
#define CCH12_size                               0x1
#define CCH12_value_mask                         0x2
#define CCH12_clear_mask                         0xFD

#define CM2CON_CCH1                              0x1
#define CM2CON_CCH1_address                      0xF2F
#define CM2CON_CCH1_position                     0x1
#define CM2CON_CCH1_size                         0x1
#define CM2CON_CCH1_value_mask                   0x2
#define CM2CON_CCH1_clear_mask                   0xFD

#define CM2CON_CREF                              0x2
#define CM2CON_CREF_address                      0xF2F
#define CM2CON_CREF_position                     0x2
#define CM2CON_CREF_size                         0x1
#define CM2CON_CREF_value_mask                   0x4
#define CM2CON_CREF_clear_mask                   0xFB

#define CREF2                                    0x2
#define CREF2_address                            0xF2F
#define CREF2_position                           0x2
#define CREF2_size                               0x1
#define CREF2_value_mask                         0x4
#define CREF2_clear_mask                         0xFB

#define CM2CON_EVPOL                             0x3
#define CM2CON_EVPOL_address                     0xF2F
#define CM2CON_EVPOL_position                    0x3
#define CM2CON_EVPOL_size                        0x2
#define CM2CON_EVPOL_value_mask                  0x18
#define CM2CON_EVPOL_clear_mask                  0xE7

#define EVPOL02                                  0x3
#define EVPOL02_address                          0xF2F
#define EVPOL02_position                         0x3
#define EVPOL02_size                             0x1
#define EVPOL02_value_mask                       0x8
#define EVPOL02_clear_mask                       0xF7

#define CM2CON_EVPOL0                            0x3
#define CM2CON_EVPOL0_address                    0xF2F
#define CM2CON_EVPOL0_position                   0x3
#define CM2CON_EVPOL0_size                       0x1
#define CM2CON_EVPOL0_value_mask                 0x8
#define CM2CON_EVPOL0_clear_mask                 0xF7

#define EVPOL12                                  0x4
#define EVPOL12_address                          0xF2F
#define EVPOL12_position                         0x4
#define EVPOL12_size                             0x1
#define EVPOL12_value_mask                       0x10
#define EVPOL12_clear_mask                       0xEF

#define CM2CON_EVPOL1                            0x4
#define CM2CON_EVPOL1_address                    0xF2F
#define CM2CON_EVPOL1_position                   0x4
#define CM2CON_EVPOL1_size                       0x1
#define CM2CON_EVPOL1_value_mask                 0x10
#define CM2CON_EVPOL1_clear_mask                 0xEF

#define CM2CON_CPOL                              0x5
#define CM2CON_CPOL_address                      0xF2F
#define CM2CON_CPOL_position                     0x5
#define CM2CON_CPOL_size                         0x1
#define CM2CON_CPOL_value_mask                   0x20
#define CM2CON_CPOL_clear_mask                   0xDF

#define CPOL2                                    0x5
#define CPOL2_address                            0xF2F
#define CPOL2_position                           0x5
#define CPOL2_size                               0x1
#define CPOL2_value_mask                         0x20
#define CPOL2_clear_mask                         0xDF

#define CM2CON_COE                               0x6
#define CM2CON_COE_address                       0xF2F
#define CM2CON_COE_position                      0x6
#define CM2CON_COE_size                          0x1
#define CM2CON_COE_value_mask                    0x40
#define CM2CON_COE_clear_mask                    0xBF

#define COE2                                     0x6
#define COE2_address                             0xF2F
#define COE2_position                            0x6
#define COE2_size                                0x1
#define COE2_value_mask                          0x40
#define COE2_clear_mask                          0xBF

#define CM2CON_CON                               0x7
#define CM2CON_CON_address                       0xF2F
#define CM2CON_CON_position                      0x7
#define CM2CON_CON_size                          0x1
#define CM2CON_CON_value_mask                    0x80
#define CM2CON_CON_clear_mask                    0x7F

#define CON2                                     0x7
#define CON2_address                             0xF2F
#define CON2_position                            0x7
#define CON2_size                                0x1
#define CON2_value_mask                          0x80
#define CON2_clear_mask                          0x7F


/*----------------------------------------------------------------------------------#
| T12CON                                                                      0xF30 |
#-----------------------------------------------------------------------------------#
| - | T12OUTPS3 | T12OUTPS2 | T12OUTPS1 | T12OUTPS0 | TMR12ON | T12CKPS1 | T12CKPS0 |
#-----------------------------------------------------------------------------------#
| 7 | 6         | 5         | 4         | 3         | 2       | 1        | 0        |
#----------------------------------------------------------------------------------*/

#define T12CON                                   0x0
#define T12CON_address                           0xF30
#define T12CON_position                          0x0
#define T12CON_size                              0x8
#define T12CON_value_mask                        0xFF
#define T12CON_clear_mask                        0x0

#define T12CKPS0                                 0x0
#define T12CKPS0_address                         0xF30
#define T12CKPS0_position                        0x0
#define T12CKPS0_size                            0x1
#define T12CKPS0_value_mask                      0x1
#define T12CKPS0_clear_mask                      0xFE

#define T12CKPS                                  0x0
#define T12CKPS_address                          0xF30
#define T12CKPS_position                         0x0
#define T12CKPS_size                             0x2
#define T12CKPS_value_mask                       0x3
#define T12CKPS_clear_mask                       0xFC

#define T12CKPS1                                 0x1
#define T12CKPS1_address                         0xF30
#define T12CKPS1_position                        0x1
#define T12CKPS1_size                            0x1
#define T12CKPS1_value_mask                      0x2
#define T12CKPS1_clear_mask                      0xFD

#define TMR12ON                                  0x2
#define TMR12ON_address                          0xF30
#define TMR12ON_position                         0x2
#define TMR12ON_size                             0x1
#define TMR12ON_value_mask                       0x4
#define TMR12ON_clear_mask                       0xFB

#define T12OUTPS0                                0x3
#define T12OUTPS0_address                        0xF30
#define T12OUTPS0_position                       0x3
#define T12OUTPS0_size                           0x1
#define T12OUTPS0_value_mask                     0x8
#define T12OUTPS0_clear_mask                     0xF7

#define T12OUTPS                                 0x3
#define T12OUTPS_address                         0xF30
#define T12OUTPS_position                        0x3
#define T12OUTPS_size                            0x4
#define T12OUTPS_value_mask                      0x78
#define T12OUTPS_clear_mask                      0x87

#define T12OUTPS1                                0x4
#define T12OUTPS1_address                        0xF30
#define T12OUTPS1_position                       0x4
#define T12OUTPS1_size                           0x1
#define T12OUTPS1_value_mask                     0x10
#define T12OUTPS1_clear_mask                     0xEF

#define T12OUTPS2                                0x5
#define T12OUTPS2_address                        0xF30
#define T12OUTPS2_position                       0x5
#define T12OUTPS2_size                           0x1
#define T12OUTPS2_value_mask                     0x20
#define T12OUTPS2_clear_mask                     0xDF

#define T12OUTPS3                                0x6
#define T12OUTPS3_address                        0xF30
#define T12OUTPS3_position                       0x6
#define T12OUTPS3_size                           0x1
#define T12OUTPS3_value_mask                     0x40
#define T12OUTPS3_clear_mask                     0xBF


/*------------------------------#
| PR12                    0xF31 |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define PR12                                     0x0
#define PR12_address                             0xF31
#define PR12_position                            0x0
#define PR12_size                                0x8
#define PR12_value_mask                          0xFF
#define PR12_clear_mask                          0x0


/*------------------------------#
| TMR12                   0xF32 |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define TMR12                                    0x0
#define TMR12_address                            0xF32
#define TMR12_position                           0x0
#define TMR12_size                               0x8
#define TMR12_value_mask                         0xFF
#define TMR12_clear_mask                         0x0


/*----------------------------------------------------------------------------------#
| T10CON                                                                      0xF33 |
#-----------------------------------------------------------------------------------#
| - | T10OUTPS3 | T10OUTPS2 | T10OUTPS1 | T10OUTPS0 | TMR10ON | T10CKPS1 | T10CKPS0 |
#-----------------------------------------------------------------------------------#
| 7 | 6         | 5         | 4         | 3         | 2       | 1        | 0        |
#----------------------------------------------------------------------------------*/

#define T10CON                                   0x0
#define T10CON_address                           0xF33
#define T10CON_position                          0x0
#define T10CON_size                              0x8
#define T10CON_value_mask                        0xFF
#define T10CON_clear_mask                        0x0

#define T10CKPS                                  0x0
#define T10CKPS_address                          0xF33
#define T10CKPS_position                         0x0
#define T10CKPS_size                             0x2
#define T10CKPS_value_mask                       0x3
#define T10CKPS_clear_mask                       0xFC

#define T10CKPS0                                 0x0
#define T10CKPS0_address                         0xF33
#define T10CKPS0_position                        0x0
#define T10CKPS0_size                            0x1
#define T10CKPS0_value_mask                      0x1
#define T10CKPS0_clear_mask                      0xFE

#define T10CKPS1                                 0x1
#define T10CKPS1_address                         0xF33
#define T10CKPS1_position                        0x1
#define T10CKPS1_size                            0x1
#define T10CKPS1_value_mask                      0x2
#define T10CKPS1_clear_mask                      0xFD

#define TMR10ON                                  0x2
#define TMR10ON_address                          0xF33
#define TMR10ON_position                         0x2
#define TMR10ON_size                             0x1
#define TMR10ON_value_mask                       0x4
#define TMR10ON_clear_mask                       0xFB

#define T10OUTPS0                                0x3
#define T10OUTPS0_address                        0xF33
#define T10OUTPS0_position                       0x3
#define T10OUTPS0_size                           0x1
#define T10OUTPS0_value_mask                     0x8
#define T10OUTPS0_clear_mask                     0xF7

#define T10OUTPS                                 0x3
#define T10OUTPS_address                         0xF33
#define T10OUTPS_position                        0x3
#define T10OUTPS_size                            0x4
#define T10OUTPS_value_mask                      0x78
#define T10OUTPS_clear_mask                      0x87

#define T10OUTPS1                                0x4
#define T10OUTPS1_address                        0xF33
#define T10OUTPS1_position                       0x4
#define T10OUTPS1_size                           0x1
#define T10OUTPS1_value_mask                     0x10
#define T10OUTPS1_clear_mask                     0xEF

#define T10OUTPS2                                0x5
#define T10OUTPS2_address                        0xF33
#define T10OUTPS2_position                       0x5
#define T10OUTPS2_size                           0x1
#define T10OUTPS2_value_mask                     0x20
#define T10OUTPS2_clear_mask                     0xDF

#define T10OUTPS3                                0x6
#define T10OUTPS3_address                        0xF33
#define T10OUTPS3_position                       0x6
#define T10OUTPS3_size                           0x1
#define T10OUTPS3_value_mask                     0x40
#define T10OUTPS3_clear_mask                     0xBF


/*------------------------------#
| PR10                    0xF34 |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define PR10                                     0x0
#define PR10_address                             0xF34
#define PR10_position                            0x0
#define PR10_size                                0x8
#define PR10_value_mask                          0xFF
#define PR10_clear_mask                          0x0


/*------------------------------#
| TMR10                   0xF35 |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define TMR10                                    0x0
#define TMR10_address                            0xF35
#define TMR10_position                           0x0
#define TMR10_size                               0x8
#define TMR10_value_mask                         0xFF
#define TMR10_clear_mask                         0x0


/*---------------------------------------------------------------------------#
| T8CON                                                                0xF36 |
#----------------------------------------------------------------------------#
| - | T8OUTPS3 | T8OUTPS2 | T8OUTPS1 | T8OUTPS0 | TMR8ON | T8CKPS1 | T8CKPS0 |
#----------------------------------------------------------------------------#
| 7 | 6        | 5        | 4        | 3        | 2      | 1       | 0       |
#---------------------------------------------------------------------------*/

#define T8CON                                    0x0
#define T8CON_address                            0xF36
#define T8CON_position                           0x0
#define T8CON_size                               0x8
#define T8CON_value_mask                         0xFF
#define T8CON_clear_mask                         0x0

#define T8CKPS0                                  0x0
#define T8CKPS0_address                          0xF36
#define T8CKPS0_position                         0x0
#define T8CKPS0_size                             0x1
#define T8CKPS0_value_mask                       0x1
#define T8CKPS0_clear_mask                       0xFE

#define T8CKPS                                   0x0
#define T8CKPS_address                           0xF36
#define T8CKPS_position                          0x0
#define T8CKPS_size                              0x2
#define T8CKPS_value_mask                        0x3
#define T8CKPS_clear_mask                        0xFC

#define T8CKPS1                                  0x1
#define T8CKPS1_address                          0xF36
#define T8CKPS1_position                         0x1
#define T8CKPS1_size                             0x1
#define T8CKPS1_value_mask                       0x2
#define T8CKPS1_clear_mask                       0xFD

#define TMR8ON                                   0x2
#define TMR8ON_address                           0xF36
#define TMR8ON_position                          0x2
#define TMR8ON_size                              0x1
#define TMR8ON_value_mask                        0x4
#define TMR8ON_clear_mask                        0xFB

#define T8OUTPS                                  0x3
#define T8OUTPS_address                          0xF36
#define T8OUTPS_position                         0x3
#define T8OUTPS_size                             0x4
#define T8OUTPS_value_mask                       0x78
#define T8OUTPS_clear_mask                       0x87

#define T8OUTPS0                                 0x3
#define T8OUTPS0_address                         0xF36
#define T8OUTPS0_position                        0x3
#define T8OUTPS0_size                            0x1
#define T8OUTPS0_value_mask                      0x8
#define T8OUTPS0_clear_mask                      0xF7

#define T8OUTPS1                                 0x4
#define T8OUTPS1_address                         0xF36
#define T8OUTPS1_position                        0x4
#define T8OUTPS1_size                            0x1
#define T8OUTPS1_value_mask                      0x10
#define T8OUTPS1_clear_mask                      0xEF

#define T8OUTPS2                                 0x5
#define T8OUTPS2_address                         0xF36
#define T8OUTPS2_position                        0x5
#define T8OUTPS2_size                            0x1
#define T8OUTPS2_value_mask                      0x20
#define T8OUTPS2_clear_mask                      0xDF

#define T8OUTPS3                                 0x6
#define T8OUTPS3_address                         0xF36
#define T8OUTPS3_position                        0x6
#define T8OUTPS3_size                            0x1
#define T8OUTPS3_value_mask                      0x40
#define T8OUTPS3_clear_mask                      0xBF


/*------------------------------#
| PR8                     0xF37 |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define PR8                                      0x0
#define PR8_address                              0xF37
#define PR8_position                             0x0
#define PR8_size                                 0x8
#define PR8_value_mask                           0xFF
#define PR8_clear_mask                           0x0


/*------------------------------#
| TMR8                    0xF38 |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define TMR8                                     0x0
#define TMR8_address                             0xF38
#define TMR8_position                            0x0
#define TMR8_size                                0x8
#define TMR8_value_mask                          0xFF
#define TMR8_clear_mask                          0x0


/*---------------------------------------------------------------------------#
| T6CON                                                                0xF39 |
#----------------------------------------------------------------------------#
| - | T6OUTPS3 | T6OUTPS2 | T6OUTPS1 | T6OUTPS0 | TMR6ON | T6CKPS1 | T6CKPS0 |
#----------------------------------------------------------------------------#
| 7 | 6        | 5        | 4        | 3        | 2      | 1       | 0       |
#---------------------------------------------------------------------------*/

#define T6CON                                    0x0
#define T6CON_address                            0xF39
#define T6CON_position                           0x0
#define T6CON_size                               0x8
#define T6CON_value_mask                         0xFF
#define T6CON_clear_mask                         0x0

#define T6CKPS0                                  0x0
#define T6CKPS0_address                          0xF39
#define T6CKPS0_position                         0x0
#define T6CKPS0_size                             0x1
#define T6CKPS0_value_mask                       0x1
#define T6CKPS0_clear_mask                       0xFE

#define T6CKPS                                   0x0
#define T6CKPS_address                           0xF39
#define T6CKPS_position                          0x0
#define T6CKPS_size                              0x2
#define T6CKPS_value_mask                        0x3
#define T6CKPS_clear_mask                        0xFC

#define T6CKPS1                                  0x1
#define T6CKPS1_address                          0xF39
#define T6CKPS1_position                         0x1
#define T6CKPS1_size                             0x1
#define T6CKPS1_value_mask                       0x2
#define T6CKPS1_clear_mask                       0xFD

#define TMR6ON                                   0x2
#define TMR6ON_address                           0xF39
#define TMR6ON_position                          0x2
#define TMR6ON_size                              0x1
#define TMR6ON_value_mask                        0x4
#define TMR6ON_clear_mask                        0xFB

#define T6OUTPS0                                 0x3
#define T6OUTPS0_address                         0xF39
#define T6OUTPS0_position                        0x3
#define T6OUTPS0_size                            0x1
#define T6OUTPS0_value_mask                      0x8
#define T6OUTPS0_clear_mask                      0xF7

#define T6OUTPS                                  0x3
#define T6OUTPS_address                          0xF39
#define T6OUTPS_position                         0x3
#define T6OUTPS_size                             0x4
#define T6OUTPS_value_mask                       0x78
#define T6OUTPS_clear_mask                       0x87

#define T6OUTPS1                                 0x4
#define T6OUTPS1_address                         0xF39
#define T6OUTPS1_position                        0x4
#define T6OUTPS1_size                            0x1
#define T6OUTPS1_value_mask                      0x10
#define T6OUTPS1_clear_mask                      0xEF

#define T6OUTPS2                                 0x5
#define T6OUTPS2_address                         0xF39
#define T6OUTPS2_position                        0x5
#define T6OUTPS2_size                            0x1
#define T6OUTPS2_value_mask                      0x20
#define T6OUTPS2_clear_mask                      0xDF

#define T6OUTPS3                                 0x6
#define T6OUTPS3_address                         0xF39
#define T6OUTPS3_position                        0x6
#define T6OUTPS3_size                            0x1
#define T6OUTPS3_value_mask                      0x40
#define T6OUTPS3_clear_mask                      0xBF


/*------------------------------#
| PR6                     0xF3A |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define PR6                                      0x0
#define PR6_address                              0xF3A
#define PR6_position                             0x0
#define PR6_size                                 0x8
#define PR6_value_mask                           0xFF
#define PR6_clear_mask                           0x0


/*------------------------------#
| TMR6                    0xF3B |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define TMR6                                     0x0
#define TMR6_address                             0xF3B
#define TMR6_position                            0x0
#define TMR6_size                                0x8
#define TMR6_value_mask                          0xFF
#define TMR6_clear_mask                          0x0


/*-------------------------------------------------------------------------------#
| T7GCON                                                                   0xF3C |
#--------------------------------------------------------------------------------#
| TMR7GE | T7GPOL | T7GTM | T7GSPM | T7GGO_NOT_T7DONE | T7GVAL | T7GSS1 | T7GSS0 |
#--------------------------------------------------------------------------------#
| 7      | 6      | 5     | 4      | 3                | 2      | 1      | 0      |
#-------------------------------------------------------------------------------*/

#define T7GCON                                   0x0
#define T7GCON_address                           0xF3C
#define T7GCON_position                          0x0
#define T7GCON_size                              0x8
#define T7GCON_value_mask                        0xFF
#define T7GCON_clear_mask                        0x0

#define T7GSS0                                   0x0
#define T7GSS0_address                           0xF3C
#define T7GSS0_position                          0x0
#define T7GSS0_size                              0x1
#define T7GSS0_value_mask                        0x1
#define T7GSS0_clear_mask                        0xFE

#define T7GSS                                    0x0
#define T7GSS_address                            0xF3C
#define T7GSS_position                           0x0
#define T7GSS_size                               0x2
#define T7GSS_value_mask                         0x3
#define T7GSS_clear_mask                         0xFC

#define T7GSS1                                   0x1
#define T7GSS1_address                           0xF3C
#define T7GSS1_position                          0x1
#define T7GSS1_size                              0x1
#define T7GSS1_value_mask                        0x2
#define T7GSS1_clear_mask                        0xFD

#define T7GVAL                                   0x2
#define T7GVAL_address                           0xF3C
#define T7GVAL_position                          0x2
#define T7GVAL_size                              0x1
#define T7GVAL_value_mask                        0x4
#define T7GVAL_clear_mask                        0xFB

#define nT7DONE                                  0x3
#define nT7DONE_address                          0xF3C
#define nT7DONE_position                         0x3
#define nT7DONE_size                             0x1
#define nT7DONE_value_mask                       0x8
#define nT7DONE_clear_mask                       0xF7

#define T7GGO_NOT_T7DONE                         0x3
#define T7GGO_NOT_T7DONE_address                 0xF3C
#define T7GGO_NOT_T7DONE_position                0x3
#define T7GGO_NOT_T7DONE_size                    0x1
#define T7GGO_NOT_T7DONE_value_mask              0x8
#define T7GGO_NOT_T7DONE_clear_mask              0xF7

#define NOT_T7DONE                               0x3
#define NOT_T7DONE_address                       0xF3C
#define NOT_T7DONE_position                      0x3
#define NOT_T7DONE_size                          0x1
#define NOT_T7DONE_value_mask                    0x8
#define NOT_T7DONE_clear_mask                    0xF7

#define T7GGO_nT7DONE                            0x3
#define T7GGO_nT7DONE_address                    0xF3C
#define T7GGO_nT7DONE_position                   0x3
#define T7GGO_nT7DONE_size                       0x1
#define T7GGO_nT7DONE_value_mask                 0x8
#define T7GGO_nT7DONE_clear_mask                 0xF7

#define T7GGO                                    0x3
#define T7GGO_address                            0xF3C
#define T7GGO_position                           0x3
#define T7GGO_size                               0x1
#define T7GGO_value_mask                         0x8
#define T7GGO_clear_mask                         0xF7

#define T7GSPM                                   0x4
#define T7GSPM_address                           0xF3C
#define T7GSPM_position                          0x4
#define T7GSPM_size                              0x1
#define T7GSPM_value_mask                        0x10
#define T7GSPM_clear_mask                        0xEF

#define T7GTM                                    0x5
#define T7GTM_address                            0xF3C
#define T7GTM_position                           0x5
#define T7GTM_size                               0x1
#define T7GTM_value_mask                         0x20
#define T7GTM_clear_mask                         0xDF

#define T7GPOL                                   0x6
#define T7GPOL_address                           0xF3C
#define T7GPOL_position                          0x6
#define T7GPOL_size                              0x1
#define T7GPOL_value_mask                        0x40
#define T7GPOL_clear_mask                        0xBF

#define TMR7GE                                   0x7
#define TMR7GE_address                           0xF3C
#define TMR7GE_position                          0x7
#define TMR7GE_size                              0x1
#define TMR7GE_value_mask                        0x80
#define TMR7GE_clear_mask                        0x7F


/*--------------------------------------------------------------------------------#
| T7CON                                                                     0xF3D |
#---------------------------------------------------------------------------------#
| TMR7CS1 | TMR7CS0 | T7CKPS1 | T7CKPS0 | SOSCEN7 | nT7SYNC | T7CON_RD16 | TMR7ON |
#---------------------------------------------------------------------------------#
| 7       | 6       | 5       | 4       | 3       | 2       | 1          | 0      |
#--------------------------------------------------------------------------------*/

#define T7CON                                    0x0
#define T7CON_address                            0xF3D
#define T7CON_position                           0x0
#define T7CON_size                               0x8
#define T7CON_value_mask                         0xFF
#define T7CON_clear_mask                         0x0

#define TMR7ON                                   0x0
#define TMR7ON_address                           0xF3D
#define TMR7ON_position                          0x0
#define TMR7ON_size                              0x1
#define TMR7ON_value_mask                        0x1
#define TMR7ON_clear_mask                        0xFE

#define T7CON_RD16                               0x1
#define T7CON_RD16_address                       0xF3D
#define T7CON_RD16_position                      0x1
#define T7CON_RD16_size                          0x1
#define T7CON_RD16_value_mask                    0x2
#define T7CON_RD16_clear_mask                    0xFD

#define RD167                                    0x1
#define RD167_address                            0xF3D
#define RD167_position                           0x1
#define RD167_size                               0x1
#define RD167_value_mask                         0x2
#define RD167_clear_mask                         0xFD

#define nT7SYNC                                  0x2
#define nT7SYNC_address                          0xF3D
#define nT7SYNC_position                         0x2
#define nT7SYNC_size                             0x1
#define nT7SYNC_value_mask                       0x4
#define nT7SYNC_clear_mask                       0xFB

#define NOT_T7SYNC                               0x2
#define NOT_T7SYNC_address                       0xF3D
#define NOT_T7SYNC_position                      0x2
#define NOT_T7SYNC_size                          0x1
#define NOT_T7SYNC_value_mask                    0x4
#define NOT_T7SYNC_clear_mask                    0xFB

#define SOSCEN7                                  0x3
#define SOSCEN7_address                          0xF3D
#define SOSCEN7_position                         0x3
#define SOSCEN7_size                             0x1
#define SOSCEN7_value_mask                       0x8
#define SOSCEN7_clear_mask                       0xF7

#define T7CON_SOSCEN                             0x3
#define T7CON_SOSCEN_address                     0xF3D
#define T7CON_SOSCEN_position                    0x3
#define T7CON_SOSCEN_size                        0x1
#define T7CON_SOSCEN_value_mask                  0x8
#define T7CON_SOSCEN_clear_mask                  0xF7

#define T7CKPS                                   0x4
#define T7CKPS_address                           0xF3D
#define T7CKPS_position                          0x4
#define T7CKPS_size                              0x2
#define T7CKPS_value_mask                        0x30
#define T7CKPS_clear_mask                        0xCF

#define T7CKPS0                                  0x4
#define T7CKPS0_address                          0xF3D
#define T7CKPS0_position                         0x4
#define T7CKPS0_size                             0x1
#define T7CKPS0_value_mask                       0x10
#define T7CKPS0_clear_mask                       0xEF

#define T7CKPS1                                  0x5
#define T7CKPS1_address                          0xF3D
#define T7CKPS1_position                         0x5
#define T7CKPS1_size                             0x1
#define T7CKPS1_value_mask                       0x20
#define T7CKPS1_clear_mask                       0xDF

#define TMR7CS                                   0x6
#define TMR7CS_address                           0xF3D
#define TMR7CS_position                          0x6
#define TMR7CS_size                              0x2
#define TMR7CS_value_mask                        0xC0
#define TMR7CS_clear_mask                        0x3F

#define TMR7CS0                                  0x6
#define TMR7CS0_address                          0xF3D
#define TMR7CS0_position                         0x6
#define TMR7CS0_size                             0x1
#define TMR7CS0_value_mask                       0x40
#define TMR7CS0_clear_mask                       0xBF

#define TMR7CS1                                  0x7
#define TMR7CS1_address                          0xF3D
#define TMR7CS1_position                         0x7
#define TMR7CS1_size                             0x1
#define TMR7CS1_value_mask                       0x80
#define TMR7CS1_clear_mask                       0x7F


/*--------------------------------------------------------------#
| TMR7L                                                   0xF3E |
#---------------------------------------------------------------#
| CAL77 | CAL67 | CAL57 | CAL47 | CAL37 | CAL27 | CAL17 | CAL07 |
#---------------------------------------------------------------#
| 7     | 6     | 5     | 4     | 3     | 2     | 1     | 0     |
#--------------------------------------------------------------*/

#define TMR7L                                    0x0
#define TMR7L_address                            0xF3E
#define TMR7L_position                           0x0
#define TMR7L_size                               0x8
#define TMR7L_value_mask                         0xFF
#define TMR7L_clear_mask                         0x0

#define CAL07                                    0x0
#define CAL07_address                            0xF3E
#define CAL07_position                           0x0
#define CAL07_size                               0x1
#define CAL07_value_mask                         0x1
#define CAL07_clear_mask                         0xFE

#define CAL17                                    0x1
#define CAL17_address                            0xF3E
#define CAL17_position                           0x1
#define CAL17_size                               0x1
#define CAL17_value_mask                         0x2
#define CAL17_clear_mask                         0xFD

#define CAL27                                    0x2
#define CAL27_address                            0xF3E
#define CAL27_position                           0x2
#define CAL27_size                               0x1
#define CAL27_value_mask                         0x4
#define CAL27_clear_mask                         0xFB

#define CAL37                                    0x3
#define CAL37_address                            0xF3E
#define CAL37_position                           0x3
#define CAL37_size                               0x1
#define CAL37_value_mask                         0x8
#define CAL37_clear_mask                         0xF7

#define CAL47                                    0x4
#define CAL47_address                            0xF3E
#define CAL47_position                           0x4
#define CAL47_size                               0x1
#define CAL47_value_mask                         0x10
#define CAL47_clear_mask                         0xEF

#define CAL57                                    0x5
#define CAL57_address                            0xF3E
#define CAL57_position                           0x5
#define CAL57_size                               0x1
#define CAL57_value_mask                         0x20
#define CAL57_clear_mask                         0xDF

#define CAL67                                    0x6
#define CAL67_address                            0xF3E
#define CAL67_position                           0x6
#define CAL67_size                               0x1
#define CAL67_value_mask                         0x40
#define CAL67_clear_mask                         0xBF

#define CAL77                                    0x7
#define CAL77_address                            0xF3E
#define CAL77_position                           0x7
#define CAL77_size                               0x1
#define CAL77_value_mask                         0x80
#define CAL77_clear_mask                         0x7F


/*------------------------------#
| TMR7H                   0xF3F |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define TMR7H                                    0x0
#define TMR7H_address                            0xF3F
#define TMR7H_position                           0x0
#define TMR7H_size                               0x8
#define TMR7H_value_mask                         0xFF
#define TMR7H_clear_mask                         0x0


/*----------------------------------------------------------------#
| CCP10CON                                                  0xF40 |
#-----------------------------------------------------------------#
| - | - | DC10B1 | CCP10Y | CCP10M3 | CCP10M2 | CCP10M1 | CCP10M0 |
#-----------------------------------------------------------------#
| 7 | 6 | 5      | 4      | 3       | 2       | 1       | 0       |
#----------------------------------------------------------------*/

#define CCP10CON                                 0x0
#define CCP10CON_address                         0xF40
#define CCP10CON_position                        0x0
#define CCP10CON_size                            0x8
#define CCP10CON_value_mask                      0xFF
#define CCP10CON_clear_mask                      0x0

#define CCP10M                                   0x0
#define CCP10M_address                           0xF40
#define CCP10M_position                          0x0
#define CCP10M_size                              0x4
#define CCP10M_value_mask                        0xF
#define CCP10M_clear_mask                        0xF0

#define CCP10M0                                  0x0
#define CCP10M0_address                          0xF40
#define CCP10M0_position                         0x0
#define CCP10M0_size                             0x1
#define CCP10M0_value_mask                       0x1
#define CCP10M0_clear_mask                       0xFE

#define CCP10M1                                  0x1
#define CCP10M1_address                          0xF40
#define CCP10M1_position                         0x1
#define CCP10M1_size                             0x1
#define CCP10M1_value_mask                       0x2
#define CCP10M1_clear_mask                       0xFD

#define CCP10M2                                  0x2
#define CCP10M2_address                          0xF40
#define CCP10M2_position                         0x2
#define CCP10M2_size                             0x1
#define CCP10M2_value_mask                       0x4
#define CCP10M2_clear_mask                       0xFB

#define CCP10M3                                  0x3
#define CCP10M3_address                          0xF40
#define CCP10M3_position                         0x3
#define CCP10M3_size                             0x1
#define CCP10M3_value_mask                       0x8
#define CCP10M3_clear_mask                       0xF7

#define CCP10Y                                   0x4
#define CCP10Y_address                           0xF40
#define CCP10Y_position                          0x4
#define CCP10Y_size                              0x1
#define CCP10Y_value_mask                        0x10
#define CCP10Y_clear_mask                        0xEF

#define DC10B0                                   0x4
#define DC10B0_address                           0xF40
#define DC10B0_position                          0x4
#define DC10B0_size                              0x1
#define DC10B0_value_mask                        0x10
#define DC10B0_clear_mask                        0xEF

#define DC10B                                    0x4
#define DC10B_address                            0xF40
#define DC10B_position                           0x4
#define DC10B_size                               0x2
#define DC10B_value_mask                         0x30
#define DC10B_clear_mask                         0xCF

#define CCP10X                                   0x5
#define CCP10X_address                           0xF40
#define CCP10X_position                          0x5
#define CCP10X_size                              0x1
#define CCP10X_value_mask                        0x20
#define CCP10X_clear_mask                        0xDF

#define DC10B1                                   0x5
#define DC10B1_address                           0xF40
#define DC10B1_position                          0x5
#define DC10B1_size                              0x1
#define DC10B1_value_mask                        0x20
#define DC10B1_clear_mask                        0xDF


/*------------------------------#
| CCPR10L                 0xF41 |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define CCPR10L                                  0x0
#define CCPR10L_address                          0xF41
#define CCPR10L_position                         0x0
#define CCPR10L_size                             0x8
#define CCPR10L_value_mask                       0xFF
#define CCPR10L_clear_mask                       0x0


/*------------------------------#
| CCPR10H                 0xF42 |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define CCPR10H                                  0x0
#define CCPR10H_address                          0xF42
#define CCPR10H_position                         0x0
#define CCPR10H_size                             0x8
#define CCPR10H_value_mask                       0xFF
#define CCPR10H_clear_mask                       0x0


/*----------------------------------------------------------#
| CCP9CON                                             0xF43 |
#-----------------------------------------------------------#
| - | - | CCP9X | CCP9Y | CCP9M3 | CCP9M2 | CCP9M1 | CCP9M0 |
#-----------------------------------------------------------#
| 7 | 6 | 5     | 4     | 3      | 2      | 1      | 0      |
#----------------------------------------------------------*/

#define CCP9CON                                  0x0
#define CCP9CON_address                          0xF43
#define CCP9CON_position                         0x0
#define CCP9CON_size                             0x8
#define CCP9CON_value_mask                       0xFF
#define CCP9CON_clear_mask                       0x0

#define CCP9M0                                   0x0
#define CCP9M0_address                           0xF43
#define CCP9M0_position                          0x0
#define CCP9M0_size                              0x1
#define CCP9M0_value_mask                        0x1
#define CCP9M0_clear_mask                        0xFE

#define CCP9M                                    0x0
#define CCP9M_address                            0xF43
#define CCP9M_position                           0x0
#define CCP9M_size                               0x4
#define CCP9M_value_mask                         0xF
#define CCP9M_clear_mask                         0xF0

#define CCP9M1                                   0x1
#define CCP9M1_address                           0xF43
#define CCP9M1_position                          0x1
#define CCP9M1_size                              0x1
#define CCP9M1_value_mask                        0x2
#define CCP9M1_clear_mask                        0xFD

#define CCP9M2                                   0x2
#define CCP9M2_address                           0xF43
#define CCP9M2_position                          0x2
#define CCP9M2_size                              0x1
#define CCP9M2_value_mask                        0x4
#define CCP9M2_clear_mask                        0xFB

#define CCP9M3                                   0x3
#define CCP9M3_address                           0xF43
#define CCP9M3_position                          0x3
#define CCP9M3_size                              0x1
#define CCP9M3_value_mask                        0x8
#define CCP9M3_clear_mask                        0xF7

#define CCP9Y                                    0x4
#define CCP9Y_address                            0xF43
#define CCP9Y_position                           0x4
#define CCP9Y_size                               0x1
#define CCP9Y_value_mask                         0x10
#define CCP9Y_clear_mask                         0xEF

#define DC9B0                                    0x4
#define DC9B0_address                            0xF43
#define DC9B0_position                           0x4
#define DC9B0_size                               0x1
#define DC9B0_value_mask                         0x10
#define DC9B0_clear_mask                         0xEF

#define DC9B                                     0x4
#define DC9B_address                             0xF43
#define DC9B_position                            0x4
#define DC9B_size                                0x2
#define DC9B_value_mask                          0x30
#define DC9B_clear_mask                          0xCF

#define CCP9X                                    0x5
#define CCP9X_address                            0xF43
#define CCP9X_position                           0x5
#define CCP9X_size                               0x1
#define CCP9X_value_mask                         0x20
#define CCP9X_clear_mask                         0xDF

#define DC9B1                                    0x5
#define DC9B1_address                            0xF43
#define DC9B1_position                           0x5
#define DC9B1_size                               0x1
#define DC9B1_value_mask                         0x20
#define DC9B1_clear_mask                         0xDF


/*------------------------------#
| CCPR9L                  0xF44 |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define CCPR9L                                   0x0
#define CCPR9L_address                           0xF44
#define CCPR9L_position                          0x0
#define CCPR9L_size                              0x8
#define CCPR9L_value_mask                        0xFF
#define CCPR9L_clear_mask                        0x0


/*------------------------------#
| CCPR9H                  0xF45 |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define CCPR9H                                   0x0
#define CCPR9H_address                           0xF45
#define CCPR9H_position                          0x0
#define CCPR9H_size                              0x8
#define CCPR9H_value_mask                        0xFF
#define CCPR9H_clear_mask                        0x0


/*----------------------------------------------------------#
| CCP8CON                                             0xF46 |
#-----------------------------------------------------------#
| - | - | DC8B1 | DC8B0 | CCP8M3 | CCP8M2 | CCP8M1 | CCP8M0 |
#-----------------------------------------------------------#
| 7 | 6 | 5     | 4     | 3      | 2      | 1      | 0      |
#----------------------------------------------------------*/

#define CCP8CON                                  0x0
#define CCP8CON_address                          0xF46
#define CCP8CON_position                         0x0
#define CCP8CON_size                             0x8
#define CCP8CON_value_mask                       0xFF
#define CCP8CON_clear_mask                       0x0

#define CCP8M0                                   0x0
#define CCP8M0_address                           0xF46
#define CCP8M0_position                          0x0
#define CCP8M0_size                              0x1
#define CCP8M0_value_mask                        0x1
#define CCP8M0_clear_mask                        0xFE

#define CCP8M                                    0x0
#define CCP8M_address                            0xF46
#define CCP8M_position                           0x0
#define CCP8M_size                               0x4
#define CCP8M_value_mask                         0xF
#define CCP8M_clear_mask                         0xF0

#define CCP8M1                                   0x1
#define CCP8M1_address                           0xF46
#define CCP8M1_position                          0x1
#define CCP8M1_size                              0x1
#define CCP8M1_value_mask                        0x2
#define CCP8M1_clear_mask                        0xFD

#define CCP8M2                                   0x2
#define CCP8M2_address                           0xF46
#define CCP8M2_position                          0x2
#define CCP8M2_size                              0x1
#define CCP8M2_value_mask                        0x4
#define CCP8M2_clear_mask                        0xFB

#define CCP8M3                                   0x3
#define CCP8M3_address                           0xF46
#define CCP8M3_position                          0x3
#define CCP8M3_size                              0x1
#define CCP8M3_value_mask                        0x8
#define CCP8M3_clear_mask                        0xF7

#define DC8B0                                    0x4
#define DC8B0_address                            0xF46
#define DC8B0_position                           0x4
#define DC8B0_size                               0x1
#define DC8B0_value_mask                         0x10
#define DC8B0_clear_mask                         0xEF

#define CCP8Y                                    0x4
#define CCP8Y_address                            0xF46
#define CCP8Y_position                           0x4
#define CCP8Y_size                               0x1
#define CCP8Y_value_mask                         0x10
#define CCP8Y_clear_mask                         0xEF

#define DC8B                                     0x4
#define DC8B_address                             0xF46
#define DC8B_position                            0x4
#define DC8B_size                                0x2
#define DC8B_value_mask                          0x30
#define DC8B_clear_mask                          0xCF

#define DC8B1                                    0x5
#define DC8B1_address                            0xF46
#define DC8B1_position                           0x5
#define DC8B1_size                               0x1
#define DC8B1_value_mask                         0x20
#define DC8B1_clear_mask                         0xDF

#define CCP8X                                    0x5
#define CCP8X_address                            0xF46
#define CCP8X_position                           0x5
#define CCP8X_size                               0x1
#define CCP8X_value_mask                         0x20
#define CCP8X_clear_mask                         0xDF


/*------------------------------#
| CCPR8L                  0xF47 |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define CCPR8L                                   0x0
#define CCPR8L_address                           0xF47
#define CCPR8L_position                          0x0
#define CCPR8L_size                              0x8
#define CCPR8L_value_mask                        0xFF
#define CCPR8L_clear_mask                        0x0


/*------------------------------#
| CCPR8H                  0xF48 |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define CCPR8H                                   0x0
#define CCPR8H_address                           0xF48
#define CCPR8H_position                          0x0
#define CCPR8H_size                              0x8
#define CCPR8H_value_mask                        0xFF
#define CCPR8H_clear_mask                        0x0


/*----------------------------------------------------------------#
| CCP3CON                                                   0xF49 |
#-----------------------------------------------------------------#
| P3M1 | P3M0 | CCP3X | CCP3Y | CCP3M3 | CCP3M2 | CCP3M1 | CCP3M0 |
#-----------------------------------------------------------------#
| 7    | 6    | 5     | 4     | 3      | 2      | 1      | 0      |
#----------------------------------------------------------------*/

#define CCP3CON                                  0x0
#define CCP3CON_address                          0xF49
#define CCP3CON_position                         0x0
#define CCP3CON_size                             0x8
#define CCP3CON_value_mask                       0xFF
#define CCP3CON_clear_mask                       0x0

#define CCP3M                                    0x0
#define CCP3M_address                            0xF49
#define CCP3M_position                           0x0
#define CCP3M_size                               0x4
#define CCP3M_value_mask                         0xF
#define CCP3M_clear_mask                         0xF0

#define CCP3M0                                   0x0
#define CCP3M0_address                           0xF49
#define CCP3M0_position                          0x0
#define CCP3M0_size                              0x1
#define CCP3M0_value_mask                        0x1
#define CCP3M0_clear_mask                        0xFE

#define CCP3M1                                   0x1
#define CCP3M1_address                           0xF49
#define CCP3M1_position                          0x1
#define CCP3M1_size                              0x1
#define CCP3M1_value_mask                        0x2
#define CCP3M1_clear_mask                        0xFD

#define CCP3M2                                   0x2
#define CCP3M2_address                           0xF49
#define CCP3M2_position                          0x2
#define CCP3M2_size                              0x1
#define CCP3M2_value_mask                        0x4
#define CCP3M2_clear_mask                        0xFB

#define CCP3M3                                   0x3
#define CCP3M3_address                           0xF49
#define CCP3M3_position                          0x3
#define CCP3M3_size                              0x1
#define CCP3M3_value_mask                        0x8
#define CCP3M3_clear_mask                        0xF7

#define CCP3Y                                    0x4
#define CCP3Y_address                            0xF49
#define CCP3Y_position                           0x4
#define CCP3Y_size                               0x1
#define CCP3Y_value_mask                         0x10
#define CCP3Y_clear_mask                         0xEF

#define DC3B                                     0x4
#define DC3B_address                             0xF49
#define DC3B_position                            0x4
#define DC3B_size                                0x2
#define DC3B_value_mask                          0x30
#define DC3B_clear_mask                          0xCF

#define DC3B0                                    0x4
#define DC3B0_address                            0xF49
#define DC3B0_position                           0x4
#define DC3B0_size                               0x1
#define DC3B0_value_mask                         0x10
#define DC3B0_clear_mask                         0xEF

#define DC3B1                                    0x5
#define DC3B1_address                            0xF49
#define DC3B1_position                           0x5
#define DC3B1_size                               0x1
#define DC3B1_value_mask                         0x20
#define DC3B1_clear_mask                         0xDF

#define CCP3X                                    0x5
#define CCP3X_address                            0xF49
#define CCP3X_position                           0x5
#define CCP3X_size                               0x1
#define CCP3X_value_mask                         0x20
#define CCP3X_clear_mask                         0xDF

#define P3M                                      0x6
#define P3M_address                              0xF49
#define P3M_position                             0x6
#define P3M_size                                 0x2
#define P3M_value_mask                           0xC0
#define P3M_clear_mask                           0x3F

#define P3M0                                     0x6
#define P3M0_address                             0xF49
#define P3M0_position                            0x6
#define P3M0_size                                0x1
#define P3M0_value_mask                          0x40
#define P3M0_clear_mask                          0xBF

#define P3M1                                     0x7
#define P3M1_address                             0xF49
#define P3M1_position                            0x7
#define P3M1_size                                0x1
#define P3M1_value_mask                          0x80
#define P3M1_clear_mask                          0x7F


/*------------------------------#
| CCPR3L                  0xF4A |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define CCPR3L                                   0x0
#define CCPR3L_address                           0xF4A
#define CCPR3L_position                          0x0
#define CCPR3L_size                              0x8
#define CCPR3L_value_mask                        0xFF
#define CCPR3L_clear_mask                        0x0


/*------------------------------#
| CCPR3H                  0xF4B |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define CCPR3H                                   0x0
#define CCPR3H_address                           0xF4B
#define CCPR3H_position                          0x0
#define CCPR3H_size                              0x8
#define CCPR3H_value_mask                        0xFF
#define CCPR3H_clear_mask                        0x0


/*---------------------------------------------------------------#
| ECCP3DEL                                                 0xF4C |
#----------------------------------------------------------------#
| P3RSEN | P3DC6 | P3DC5 | P3DC4 | P3DC3 | P3DC2 | P3DC1 | P3DC0 |
#----------------------------------------------------------------#
| 7      | 6     | 5     | 4     | 3     | 2     | 1     | 0     |
#---------------------------------------------------------------*/

#define ECCP3DEL                                 0x0
#define ECCP3DEL_address                         0xF4C
#define ECCP3DEL_position                        0x0
#define ECCP3DEL_size                            0x8
#define ECCP3DEL_value_mask                      0xFF
#define ECCP3DEL_clear_mask                      0x0

#define P3DC                                     0x0
#define P3DC_address                             0xF4C
#define P3DC_position                            0x0
#define P3DC_size                                0x7
#define P3DC_value_mask                          0x7F
#define P3DC_clear_mask                          0x80

#define P3DC0                                    0x0
#define P3DC0_address                            0xF4C
#define P3DC0_position                           0x0
#define P3DC0_size                               0x1
#define P3DC0_value_mask                         0x1
#define P3DC0_clear_mask                         0xFE

#define P3DC1                                    0x1
#define P3DC1_address                            0xF4C
#define P3DC1_position                           0x1
#define P3DC1_size                               0x1
#define P3DC1_value_mask                         0x2
#define P3DC1_clear_mask                         0xFD

#define P3DC2                                    0x2
#define P3DC2_address                            0xF4C
#define P3DC2_position                           0x2
#define P3DC2_size                               0x1
#define P3DC2_value_mask                         0x4
#define P3DC2_clear_mask                         0xFB

#define P3DC3                                    0x3
#define P3DC3_address                            0xF4C
#define P3DC3_position                           0x3
#define P3DC3_size                               0x1
#define P3DC3_value_mask                         0x8
#define P3DC3_clear_mask                         0xF7

#define P3DC4                                    0x4
#define P3DC4_address                            0xF4C
#define P3DC4_position                           0x4
#define P3DC4_size                               0x1
#define P3DC4_value_mask                         0x10
#define P3DC4_clear_mask                         0xEF

#define P3DC5                                    0x5
#define P3DC5_address                            0xF4C
#define P3DC5_position                           0x5
#define P3DC5_size                               0x1
#define P3DC5_value_mask                         0x20
#define P3DC5_clear_mask                         0xDF

#define P3DC6                                    0x6
#define P3DC6_address                            0xF4C
#define P3DC6_position                           0x6
#define P3DC6_size                               0x1
#define P3DC6_value_mask                         0x40
#define P3DC6_clear_mask                         0xBF

#define P3RSEN                                   0x7
#define P3RSEN_address                           0xF4C
#define P3RSEN_position                          0x7
#define P3RSEN_size                              0x1
#define P3RSEN_value_mask                        0x80
#define P3RSEN_clear_mask                        0x7F


/*----------------------------------------------------------------------------------#
| ECCP3AS                                                                     0xF4D |
#-----------------------------------------------------------------------------------#
| ECCP3ASE | ECCP3AS2 | ECCP3AS1 | ECCP3AS0 | PSS3AC1 | PSS3AC0 | PSS3BD1 | PSS3BD0 |
#-----------------------------------------------------------------------------------#
| 7        | 6        | 5        | 4        | 3       | 2       | 1       | 0       |
#----------------------------------------------------------------------------------*/

#define PSS3BD0                                  0x0
#define PSS3BD0_address                          0xF4D
#define PSS3BD0_position                         0x0
#define PSS3BD0_size                             0x1
#define PSS3BD0_value_mask                       0x1
#define PSS3BD0_clear_mask                       0xFE

#define PSS3BD                                   0x0
#define PSS3BD_address                           0xF4D
#define PSS3BD_position                          0x0
#define PSS3BD_size                              0x2
#define PSS3BD_value_mask                        0x3
#define PSS3BD_clear_mask                        0xFC

#define PSS3BD1                                  0x1
#define PSS3BD1_address                          0xF4D
#define PSS3BD1_position                         0x1
#define PSS3BD1_size                             0x1
#define PSS3BD1_value_mask                       0x2
#define PSS3BD1_clear_mask                       0xFD

#define PSS3AC0                                  0x2
#define PSS3AC0_address                          0xF4D
#define PSS3AC0_position                         0x2
#define PSS3AC0_size                             0x1
#define PSS3AC0_value_mask                       0x4
#define PSS3AC0_clear_mask                       0xFB

#define PSS3AC                                   0x2
#define PSS3AC_address                           0xF4D
#define PSS3AC_position                          0x2
#define PSS3AC_size                              0x2
#define PSS3AC_value_mask                        0xC
#define PSS3AC_clear_mask                        0xF3

#define PSS3AC1                                  0x3
#define PSS3AC1_address                          0xF4D
#define PSS3AC1_position                         0x3
#define PSS3AC1_size                             0x1
#define PSS3AC1_value_mask                       0x8
#define PSS3AC1_clear_mask                       0xF7

#define ECCP3AS                                  0x4
#define ECCP3AS_address                          0xF4D
#define ECCP3AS_position                         0x4
#define ECCP3AS_size                             0x3
#define ECCP3AS_value_mask                       0x70
#define ECCP3AS_clear_mask                       0x8F

#define ECCP3AS0                                 0x4
#define ECCP3AS0_address                         0xF4D
#define ECCP3AS0_position                        0x4
#define ECCP3AS0_size                            0x1
#define ECCP3AS0_value_mask                      0x10
#define ECCP3AS0_clear_mask                      0xEF

#define ECCP3AS1                                 0x5
#define ECCP3AS1_address                         0xF4D
#define ECCP3AS1_position                        0x5
#define ECCP3AS1_size                            0x1
#define ECCP3AS1_value_mask                      0x20
#define ECCP3AS1_clear_mask                      0xDF

#define ECCP3AS2                                 0x6
#define ECCP3AS2_address                         0xF4D
#define ECCP3AS2_position                        0x6
#define ECCP3AS2_size                            0x1
#define ECCP3AS2_value_mask                      0x40
#define ECCP3AS2_clear_mask                      0xBF

#define ECCP3ASE                                 0x7
#define ECCP3ASE_address                         0xF4D
#define ECCP3ASE_position                        0x7
#define ECCP3ASE_size                            0x1
#define ECCP3ASE_value_mask                      0x80
#define ECCP3ASE_clear_mask                      0x7F


/*----------------------------------------------------------------#
| CCP2CON                                                   0xF4E |
#-----------------------------------------------------------------#
| P2M1 | P2M0 | DC2B1 | DC2B0 | CCP2M3 | CCP2M2 | CCP2M1 | CCP2M0 |
#-----------------------------------------------------------------#
| 7    | 6    | 5     | 4     | 3      | 2      | 1      | 0      |
#----------------------------------------------------------------*/

#define CCP2CON                                  0x0
#define CCP2CON_address                          0xF4E
#define CCP2CON_position                         0x0
#define CCP2CON_size                             0x8
#define CCP2CON_value_mask                       0xFF
#define CCP2CON_clear_mask                       0x0

#define CCP2M                                    0x0
#define CCP2M_address                            0xF4E
#define CCP2M_position                           0x0
#define CCP2M_size                               0x4
#define CCP2M_value_mask                         0xF
#define CCP2M_clear_mask                         0xF0

#define CCP2M0                                   0x0
#define CCP2M0_address                           0xF4E
#define CCP2M0_position                          0x0
#define CCP2M0_size                              0x1
#define CCP2M0_value_mask                        0x1
#define CCP2M0_clear_mask                        0xFE

#define CCP2M1                                   0x1
#define CCP2M1_address                           0xF4E
#define CCP2M1_position                          0x1
#define CCP2M1_size                              0x1
#define CCP2M1_value_mask                        0x2
#define CCP2M1_clear_mask                        0xFD

#define CCP2M2                                   0x2
#define CCP2M2_address                           0xF4E
#define CCP2M2_position                          0x2
#define CCP2M2_size                              0x1
#define CCP2M2_value_mask                        0x4
#define CCP2M2_clear_mask                        0xFB

#define CCP2M3                                   0x3
#define CCP2M3_address                           0xF4E
#define CCP2M3_position                          0x3
#define CCP2M3_size                              0x1
#define CCP2M3_value_mask                        0x8
#define CCP2M3_clear_mask                        0xF7

#define DC2B                                     0x4
#define DC2B_address                             0xF4E
#define DC2B_position                            0x4
#define DC2B_size                                0x2
#define DC2B_value_mask                          0x30
#define DC2B_clear_mask                          0xCF

#define DC2B0                                    0x4
#define DC2B0_address                            0xF4E
#define DC2B0_position                           0x4
#define DC2B0_size                               0x1
#define DC2B0_value_mask                         0x10
#define DC2B0_clear_mask                         0xEF

#define CCP2Y                                    0x4
#define CCP2Y_address                            0xF4E
#define CCP2Y_position                           0x4
#define CCP2Y_size                               0x1
#define CCP2Y_value_mask                         0x10
#define CCP2Y_clear_mask                         0xEF

#define DC2B1                                    0x5
#define DC2B1_address                            0xF4E
#define DC2B1_position                           0x5
#define DC2B1_size                               0x1
#define DC2B1_value_mask                         0x20
#define DC2B1_clear_mask                         0xDF

#define CCP2X                                    0x5
#define CCP2X_address                            0xF4E
#define CCP2X_position                           0x5
#define CCP2X_size                               0x1
#define CCP2X_value_mask                         0x20
#define CCP2X_clear_mask                         0xDF

#define P2M                                      0x6
#define P2M_address                              0xF4E
#define P2M_position                             0x6
#define P2M_size                                 0x2
#define P2M_value_mask                           0xC0
#define P2M_clear_mask                           0x3F

#define P2M0                                     0x6
#define P2M0_address                             0xF4E
#define P2M0_position                            0x6
#define P2M0_size                                0x1
#define P2M0_value_mask                          0x40
#define P2M0_clear_mask                          0xBF

#define P2M1                                     0x7
#define P2M1_address                             0xF4E
#define P2M1_position                            0x7
#define P2M1_size                                0x1
#define P2M1_value_mask                          0x80
#define P2M1_clear_mask                          0x7F


/*------------------------------#
| CCPR2L                  0xF4F |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define CCPR2L                                   0x0
#define CCPR2L_address                           0xF4F
#define CCPR2L_position                          0x0
#define CCPR2L_size                              0x8
#define CCPR2L_value_mask                        0xFF
#define CCPR2L_clear_mask                        0x0


/*------------------------------#
| CCPR2H                  0xF50 |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define CCPR2H                                   0x0
#define CCPR2H_address                           0xF50
#define CCPR2H_position                          0x0
#define CCPR2H_size                              0x8
#define CCPR2H_value_mask                        0xFF
#define CCPR2H_clear_mask                        0x0


/*---------------------------------------------------------------#
| ECCP2DEL                                                 0xF51 |
#----------------------------------------------------------------#
| P2RSEN | P2DC6 | P2DC5 | P2DC4 | P2DC3 | P2DC2 | P2DC1 | P2DC0 |
#----------------------------------------------------------------#
| 7      | 6     | 5     | 4     | 3     | 2     | 1     | 0     |
#---------------------------------------------------------------*/

#define ECCP2DEL                                 0x0
#define ECCP2DEL_address                         0xF51
#define ECCP2DEL_position                        0x0
#define ECCP2DEL_size                            0x8
#define ECCP2DEL_value_mask                      0xFF
#define ECCP2DEL_clear_mask                      0x0

#define P2DC                                     0x0
#define P2DC_address                             0xF51
#define P2DC_position                            0x0
#define P2DC_size                                0x7
#define P2DC_value_mask                          0x7F
#define P2DC_clear_mask                          0x80

#define P2DC0                                    0x0
#define P2DC0_address                            0xF51
#define P2DC0_position                           0x0
#define P2DC0_size                               0x1
#define P2DC0_value_mask                         0x1
#define P2DC0_clear_mask                         0xFE

#define P2DC1                                    0x1
#define P2DC1_address                            0xF51
#define P2DC1_position                           0x1
#define P2DC1_size                               0x1
#define P2DC1_value_mask                         0x2
#define P2DC1_clear_mask                         0xFD

#define P2DC2                                    0x2
#define P2DC2_address                            0xF51
#define P2DC2_position                           0x2
#define P2DC2_size                               0x1
#define P2DC2_value_mask                         0x4
#define P2DC2_clear_mask                         0xFB

#define P2DC3                                    0x3
#define P2DC3_address                            0xF51
#define P2DC3_position                           0x3
#define P2DC3_size                               0x1
#define P2DC3_value_mask                         0x8
#define P2DC3_clear_mask                         0xF7

#define P2DC4                                    0x4
#define P2DC4_address                            0xF51
#define P2DC4_position                           0x4
#define P2DC4_size                               0x1
#define P2DC4_value_mask                         0x10
#define P2DC4_clear_mask                         0xEF

#define P2DC5                                    0x5
#define P2DC5_address                            0xF51
#define P2DC5_position                           0x5
#define P2DC5_size                               0x1
#define P2DC5_value_mask                         0x20
#define P2DC5_clear_mask                         0xDF

#define P2DC6                                    0x6
#define P2DC6_address                            0xF51
#define P2DC6_position                           0x6
#define P2DC6_size                               0x1
#define P2DC6_value_mask                         0x40
#define P2DC6_clear_mask                         0xBF

#define P2RSEN                                   0x7
#define P2RSEN_address                           0xF51
#define P2RSEN_position                          0x7
#define P2RSEN_size                              0x1
#define P2RSEN_value_mask                        0x80
#define P2RSEN_clear_mask                        0x7F


/*----------------------------------------------------------------------------------#
| ECCP2AS                                                                     0xF52 |
#-----------------------------------------------------------------------------------#
| ECCP2ASE | ECCP2AS2 | ECCP2AS1 | ECCP2AS0 | PSS2AC1 | PSS2AC0 | PSS2BD1 | PSS2BD0 |
#-----------------------------------------------------------------------------------#
| 7        | 6        | 5        | 4        | 3       | 2       | 1       | 0       |
#----------------------------------------------------------------------------------*/

#define PSS2BD                                   0x0
#define PSS2BD_address                           0xF52
#define PSS2BD_position                          0x0
#define PSS2BD_size                              0x2
#define PSS2BD_value_mask                        0x3
#define PSS2BD_clear_mask                        0xFC

#define PSS2BD0                                  0x0
#define PSS2BD0_address                          0xF52
#define PSS2BD0_position                         0x0
#define PSS2BD0_size                             0x1
#define PSS2BD0_value_mask                       0x1
#define PSS2BD0_clear_mask                       0xFE

#define PSS2BD1                                  0x1
#define PSS2BD1_address                          0xF52
#define PSS2BD1_position                         0x1
#define PSS2BD1_size                             0x1
#define PSS2BD1_value_mask                       0x2
#define PSS2BD1_clear_mask                       0xFD

#define PSS2AC0                                  0x2
#define PSS2AC0_address                          0xF52
#define PSS2AC0_position                         0x2
#define PSS2AC0_size                             0x1
#define PSS2AC0_value_mask                       0x4
#define PSS2AC0_clear_mask                       0xFB

#define PSS2AC                                   0x2
#define PSS2AC_address                           0xF52
#define PSS2AC_position                          0x2
#define PSS2AC_size                              0x2
#define PSS2AC_value_mask                        0xC
#define PSS2AC_clear_mask                        0xF3

#define PSS2AC1                                  0x3
#define PSS2AC1_address                          0xF52
#define PSS2AC1_position                         0x3
#define PSS2AC1_size                             0x1
#define PSS2AC1_value_mask                       0x8
#define PSS2AC1_clear_mask                       0xF7

#define ECCP2AS0                                 0x4
#define ECCP2AS0_address                         0xF52
#define ECCP2AS0_position                        0x4
#define ECCP2AS0_size                            0x1
#define ECCP2AS0_value_mask                      0x10
#define ECCP2AS0_clear_mask                      0xEF

#define ECCP2AS                                  0x4
#define ECCP2AS_address                          0xF52
#define ECCP2AS_position                         0x4
#define ECCP2AS_size                             0x3
#define ECCP2AS_value_mask                       0x70
#define ECCP2AS_clear_mask                       0x8F

#define ECCP2AS1                                 0x5
#define ECCP2AS1_address                         0xF52
#define ECCP2AS1_position                        0x5
#define ECCP2AS1_size                            0x1
#define ECCP2AS1_value_mask                      0x20
#define ECCP2AS1_clear_mask                      0xDF

#define ECCP2AS2                                 0x6
#define ECCP2AS2_address                         0xF52
#define ECCP2AS2_position                        0x6
#define ECCP2AS2_size                            0x1
#define ECCP2AS2_value_mask                      0x40
#define ECCP2AS2_clear_mask                      0xBF

#define ECCP2ASE                                 0x7
#define ECCP2ASE_address                         0xF52
#define ECCP2ASE_position                        0x7
#define ECCP2ASE_size                            0x1
#define ECCP2ASE_value_mask                      0x80
#define ECCP2ASE_clear_mask                      0x7F


/*----------------------------------------------------#
| PADCFG1                                       0xF53 |
#-----------------------------------------------------#
| RDPU | REPU | - | - | - | RTSECSEL1 | RTSECSEL0 | - |
#-----------------------------------------------------#
| 7    | 6    | 5 | 4 | 3 | 2         | 1         | 0 |
#----------------------------------------------------*/

#define PADCFG1                                  0x0
#define PADCFG1_address                          0xF53
#define PADCFG1_position                         0x0
#define PADCFG1_size                             0x8
#define PADCFG1_value_mask                       0xFF
#define PADCFG1_clear_mask                       0x0

#define RTSECSEL0                                0x1
#define RTSECSEL0_address                        0xF53
#define RTSECSEL0_position                       0x1
#define RTSECSEL0_size                           0x1
#define RTSECSEL0_value_mask                     0x2
#define RTSECSEL0_clear_mask                     0xFD

#define RTSECSEL                                 0x1
#define RTSECSEL_address                         0xF53
#define RTSECSEL_position                        0x1
#define RTSECSEL_size                            0x2
#define RTSECSEL_value_mask                      0x6
#define RTSECSEL_clear_mask                      0xF9

#define RTSECSEL1                                0x2
#define RTSECSEL1_address                        0xF53
#define RTSECSEL1_position                       0x2
#define RTSECSEL1_size                           0x1
#define RTSECSEL1_value_mask                     0x4
#define RTSECSEL1_clear_mask                     0xFB

#define REPU                                     0x6
#define REPU_address                             0xF53
#define REPU_position                            0x6
#define REPU_size                                0x1
#define REPU_value_mask                          0x40
#define REPU_clear_mask                          0xBF

#define RDPU                                     0x7
#define RDPU_address                             0xF53
#define RDPU_position                            0x7
#define RDPU_size                                0x1
#define RDPU_value_mask                          0x80
#define RDPU_clear_mask                          0x7F


/*----------------------------------------------------------------------------#
| CM1CON                                                                0xF54 |
#-----------------------------------------------------------------------------#
| CON1 | COE1 | CPOL1 | CM1CON_EVPOL1 | EVPOL01 | CM1CON_CREF | CCH11 | CCH01 |
#-----------------------------------------------------------------------------#
| 7    | 6    | 5     | 4             | 3       | 2           | 1     | 0     |
#----------------------------------------------------------------------------*/

#define CM1CON                                   0x0
#define CM1CON_address                           0xF54
#define CM1CON_position                          0x0
#define CM1CON_size                              0x8
#define CM1CON_value_mask                        0xFF
#define CM1CON_clear_mask                        0x0

#define CM1CON_CCH                               0x0
#define CM1CON_CCH_address                       0xF54
#define CM1CON_CCH_position                      0x0
#define CM1CON_CCH_size                          0x2
#define CM1CON_CCH_value_mask                    0x3
#define CM1CON_CCH_clear_mask                    0xFC

#define C1CH0                                    0x0
#define C1CH0_address                            0xF54
#define C1CH0_position                           0x0
#define C1CH0_size                               0x1
#define C1CH0_value_mask                         0x1
#define C1CH0_clear_mask                         0xFE

#define CM1CON_CCH0                              0x0
#define CM1CON_CCH0_address                      0xF54
#define CM1CON_CCH0_position                     0x0
#define CM1CON_CCH0_size                         0x1
#define CM1CON_CCH0_value_mask                   0x1
#define CM1CON_CCH0_clear_mask                   0xFE

#define CCH01                                    0x0
#define CCH01_address                            0xF54
#define CCH01_position                           0x0
#define CCH01_size                               0x1
#define CCH01_value_mask                         0x1
#define CCH01_clear_mask                         0xFE

#define CCH11                                    0x1
#define CCH11_address                            0xF54
#define CCH11_position                           0x1
#define CCH11_size                               0x1
#define CCH11_value_mask                         0x2
#define CCH11_clear_mask                         0xFD

#define C1CH1                                    0x1
#define C1CH1_address                            0xF54
#define C1CH1_position                           0x1
#define C1CH1_size                               0x1
#define C1CH1_value_mask                         0x2
#define C1CH1_clear_mask                         0xFD

#define CM1CON_CCH1                              0x1
#define CM1CON_CCH1_address                      0xF54
#define CM1CON_CCH1_position                     0x1
#define CM1CON_CCH1_size                         0x1
#define CM1CON_CCH1_value_mask                   0x2
#define CM1CON_CCH1_clear_mask                   0xFD

#define CM1CON_CREF                              0x2
#define CM1CON_CREF_address                      0xF54
#define CM1CON_CREF_position                     0x2
#define CM1CON_CREF_size                         0x1
#define CM1CON_CREF_value_mask                   0x4
#define CM1CON_CREF_clear_mask                   0xFB

#define CREF1                                    0x2
#define CREF1_address                            0xF54
#define CREF1_position                           0x2
#define CREF1_size                               0x1
#define CREF1_value_mask                         0x4
#define CREF1_clear_mask                         0xFB

#define EVPOL01                                  0x3
#define EVPOL01_address                          0xF54
#define EVPOL01_position                         0x3
#define EVPOL01_size                             0x1
#define EVPOL01_value_mask                       0x8
#define EVPOL01_clear_mask                       0xF7

#define CM1CON_EVPOL0                            0x3
#define CM1CON_EVPOL0_address                    0xF54
#define CM1CON_EVPOL0_position                   0x3
#define CM1CON_EVPOL0_size                       0x1
#define CM1CON_EVPOL0_value_mask                 0x8
#define CM1CON_EVPOL0_clear_mask                 0xF7

#define CM1CON_EVPOL                             0x3
#define CM1CON_EVPOL_address                     0xF54
#define CM1CON_EVPOL_position                    0x3
#define CM1CON_EVPOL_size                        0x2
#define CM1CON_EVPOL_value_mask                  0x18
#define CM1CON_EVPOL_clear_mask                  0xE7

#define CM1CON_EVPOL1                            0x4
#define CM1CON_EVPOL1_address                    0xF54
#define CM1CON_EVPOL1_position                   0x4
#define CM1CON_EVPOL1_size                       0x1
#define CM1CON_EVPOL1_value_mask                 0x10
#define CM1CON_EVPOL1_clear_mask                 0xEF

#define EVPOL11                                  0x4
#define EVPOL11_address                          0xF54
#define EVPOL11_position                         0x4
#define EVPOL11_size                             0x1
#define EVPOL11_value_mask                       0x10
#define EVPOL11_clear_mask                       0xEF

#define CM1CON_CPOL                              0x5
#define CM1CON_CPOL_address                      0xF54
#define CM1CON_CPOL_position                     0x5
#define CM1CON_CPOL_size                         0x1
#define CM1CON_CPOL_value_mask                   0x20
#define CM1CON_CPOL_clear_mask                   0xDF

#define CPOL1                                    0x5
#define CPOL1_address                            0xF54
#define CPOL1_position                           0x5
#define CPOL1_size                               0x1
#define CPOL1_value_mask                         0x20
#define CPOL1_clear_mask                         0xDF

#define CM1CON_COE                               0x6
#define CM1CON_COE_address                       0xF54
#define CM1CON_COE_position                      0x6
#define CM1CON_COE_size                          0x1
#define CM1CON_COE_value_mask                    0x40
#define CM1CON_COE_clear_mask                    0xBF

#define COE1                                     0x6
#define COE1_address                             0xF54
#define COE1_position                            0x6
#define COE1_size                                0x1
#define COE1_value_mask                          0x40
#define COE1_clear_mask                          0xBF

#define CM1CON_CON                               0x7
#define CM1CON_CON_address                       0xF54
#define CM1CON_CON_position                      0x7
#define CM1CON_CON_size                          0x1
#define CM1CON_CON_value_mask                    0x80
#define CM1CON_CON_clear_mask                    0x7F

#define CON1                                     0x7
#define CON1_address                             0xF54
#define CON1_position                            0x7
#define CON1_size                                0x1
#define CON1_value_mask                          0x80
#define CON1_clear_mask                          0x7F


/*--------------------------------------------------------------------#
| CTMUICON                                                      0xF55 |
#---------------------------------------------------------------------#
| ITRIM5 | ITRIM4 | ITRIM3 | ITRIM2 | ITRIM1 | ITRIM0 | IRNG1 | IRNG0 |
#---------------------------------------------------------------------#
| 7      | 6      | 5      | 4      | 3      | 2      | 1     | 0     |
#--------------------------------------------------------------------*/

#define CTMUICON                                 0x0
#define CTMUICON_address                         0xF55
#define CTMUICON_position                        0x0
#define CTMUICON_size                            0x8
#define CTMUICON_value_mask                      0xFF
#define CTMUICON_clear_mask                      0x0

#define IRNG                                     0x0
#define IRNG_address                             0xF55
#define IRNG_position                            0x0
#define IRNG_size                                0x2
#define IRNG_value_mask                          0x3
#define IRNG_clear_mask                          0xFC

#define IRNG0                                    0x0
#define IRNG0_address                            0xF55
#define IRNG0_position                           0x0
#define IRNG0_size                               0x1
#define IRNG0_value_mask                         0x1
#define IRNG0_clear_mask                         0xFE

#define IRNG1                                    0x1
#define IRNG1_address                            0xF55
#define IRNG1_position                           0x1
#define IRNG1_size                               0x1
#define IRNG1_value_mask                         0x2
#define IRNG1_clear_mask                         0xFD

#define ITRIM0                                   0x2
#define ITRIM0_address                           0xF55
#define ITRIM0_position                          0x2
#define ITRIM0_size                              0x1
#define ITRIM0_value_mask                        0x4
#define ITRIM0_clear_mask                        0xFB

#define ITRIM                                    0x2
#define ITRIM_address                            0xF55
#define ITRIM_position                           0x2
#define ITRIM_size                               0x6
#define ITRIM_value_mask                         0xFC
#define ITRIM_clear_mask                         0x3

#define ITRIM1                                   0x3
#define ITRIM1_address                           0xF55
#define ITRIM1_position                          0x3
#define ITRIM1_size                              0x1
#define ITRIM1_value_mask                        0x8
#define ITRIM1_clear_mask                        0xF7

#define ITRIM2                                   0x4
#define ITRIM2_address                           0xF55
#define ITRIM2_position                          0x4
#define ITRIM2_size                              0x1
#define ITRIM2_value_mask                        0x10
#define ITRIM2_clear_mask                        0xEF

#define ITRIM3                                   0x5
#define ITRIM3_address                           0xF55
#define ITRIM3_position                          0x5
#define ITRIM3_size                              0x1
#define ITRIM3_value_mask                        0x20
#define ITRIM3_clear_mask                        0xDF

#define ITRIM4                                   0x6
#define ITRIM4_address                           0xF55
#define ITRIM4_position                          0x6
#define ITRIM4_size                              0x1
#define ITRIM4_value_mask                        0x40
#define ITRIM4_clear_mask                        0xBF

#define ITRIM5                                   0x7
#define ITRIM5_address                           0xF55
#define ITRIM5_position                          0x7
#define ITRIM5_size                              0x1
#define ITRIM5_value_mask                        0x80
#define ITRIM5_clear_mask                        0x7F


/*------------------------------------------------------------------------------------#
| CTMUCONL                                                                      0xF56 |
#-------------------------------------------------------------------------------------#
| EDG2POL | EDG2SEL1 | EDG2SEL0 | EDG1POL | EDG1SEL1 | EDG1SEL0 | EDG2STAT | EDG1STAT |
#-------------------------------------------------------------------------------------#
| 7       | 6        | 5        | 4       | 3        | 2        | 1        | 0        |
#------------------------------------------------------------------------------------*/

#define CTMUCONL                                 0x0
#define CTMUCONL_address                         0xF56
#define CTMUCONL_position                        0x0
#define CTMUCONL_size                            0x8
#define CTMUCONL_value_mask                      0xFF
#define CTMUCONL_clear_mask                      0x0

#define EDG1STAT                                 0x0
#define EDG1STAT_address                         0xF56
#define EDG1STAT_position                        0x0
#define EDG1STAT_size                            0x1
#define EDG1STAT_value_mask                      0x1
#define EDG1STAT_clear_mask                      0xFE

#define EDG2STAT                                 0x1
#define EDG2STAT_address                         0xF56
#define EDG2STAT_position                        0x1
#define EDG2STAT_size                            0x1
#define EDG2STAT_value_mask                      0x2
#define EDG2STAT_clear_mask                      0xFD

#define EDG1SEL                                  0x2
#define EDG1SEL_address                          0xF56
#define EDG1SEL_position                         0x2
#define EDG1SEL_size                             0x2
#define EDG1SEL_value_mask                       0xC
#define EDG1SEL_clear_mask                       0xF3

#define EDG1SEL0                                 0x2
#define EDG1SEL0_address                         0xF56
#define EDG1SEL0_position                        0x2
#define EDG1SEL0_size                            0x1
#define EDG1SEL0_value_mask                      0x4
#define EDG1SEL0_clear_mask                      0xFB

#define EDG1SEL1                                 0x3
#define EDG1SEL1_address                         0xF56
#define EDG1SEL1_position                        0x3
#define EDG1SEL1_size                            0x1
#define EDG1SEL1_value_mask                      0x8
#define EDG1SEL1_clear_mask                      0xF7

#define EDG1POL                                  0x4
#define EDG1POL_address                          0xF56
#define EDG1POL_position                         0x4
#define EDG1POL_size                             0x1
#define EDG1POL_value_mask                       0x10
#define EDG1POL_clear_mask                       0xEF

#define EDG2SEL0                                 0x5
#define EDG2SEL0_address                         0xF56
#define EDG2SEL0_position                        0x5
#define EDG2SEL0_size                            0x1
#define EDG2SEL0_value_mask                      0x20
#define EDG2SEL0_clear_mask                      0xDF

#define EDG2SEL                                  0x5
#define EDG2SEL_address                          0xF56
#define EDG2SEL_position                         0x5
#define EDG2SEL_size                             0x2
#define EDG2SEL_value_mask                       0x60
#define EDG2SEL_clear_mask                       0x9F

#define EDG2SEL1                                 0x6
#define EDG2SEL1_address                         0xF56
#define EDG2SEL1_position                        0x6
#define EDG2SEL1_size                            0x1
#define EDG2SEL1_value_mask                      0x40
#define EDG2SEL1_clear_mask                      0xBF

#define EDG2POL                                  0x7
#define EDG2POL_address                          0xF56
#define EDG2POL_position                         0x7
#define EDG2POL_size                             0x1
#define EDG2POL_value_mask                       0x80
#define EDG2POL_clear_mask                       0x7F


/*-------------------------------------------------------------------#
| CTMUCONH                                                     0xF57 |
#--------------------------------------------------------------------#
| CTMUEN | - | CTMUSIDL | TGEN | EDGEN | EDGSEQEN | IDISSEN | CTTRIG |
#--------------------------------------------------------------------#
| 7      | 6 | 5        | 4    | 3     | 2        | 1       | 0      |
#-------------------------------------------------------------------*/

#define CTMUCONH                                 0x0
#define CTMUCONH_address                         0xF57
#define CTMUCONH_position                        0x0
#define CTMUCONH_size                            0x8
#define CTMUCONH_value_mask                      0xFF
#define CTMUCONH_clear_mask                      0x0

#define CTTRIG                                   0x0
#define CTTRIG_address                           0xF57
#define CTTRIG_position                          0x0
#define CTTRIG_size                              0x1
#define CTTRIG_value_mask                        0x1
#define CTTRIG_clear_mask                        0xFE

#define IDISSEN                                  0x1
#define IDISSEN_address                          0xF57
#define IDISSEN_position                         0x1
#define IDISSEN_size                             0x1
#define IDISSEN_value_mask                       0x2
#define IDISSEN_clear_mask                       0xFD

#define EDGSEQEN                                 0x2
#define EDGSEQEN_address                         0xF57
#define EDGSEQEN_position                        0x2
#define EDGSEQEN_size                            0x1
#define EDGSEQEN_value_mask                      0x4
#define EDGSEQEN_clear_mask                      0xFB

#define EDGEN                                    0x3
#define EDGEN_address                            0xF57
#define EDGEN_position                           0x3
#define EDGEN_size                               0x1
#define EDGEN_value_mask                         0x8
#define EDGEN_clear_mask                         0xF7

#define TGEN                                     0x4
#define TGEN_address                             0xF57
#define TGEN_position                            0x4
#define TGEN_size                                0x1
#define TGEN_value_mask                          0x10
#define TGEN_clear_mask                          0xEF

#define CTMUSIDL                                 0x5
#define CTMUSIDL_address                         0xF57
#define CTMUSIDL_position                        0x5
#define CTMUSIDL_size                            0x1
#define CTMUSIDL_value_mask                      0x20
#define CTMUSIDL_clear_mask                      0xDF

#define CTMUEN                                   0x7
#define CTMUEN_address                           0xF57
#define CTMUEN_position                          0x7
#define CTMUEN_size                              0x1
#define CTMUEN_value_mask                        0x80
#define CTMUEN_clear_mask                        0x7F


/*------------------------------#
| ALRMVALL                0xF58 |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define ALRMVALL                                 0x0
#define ALRMVALL_address                         0xF58
#define ALRMVALL_position                        0x0
#define ALRMVALL_size                            0x8
#define ALRMVALL_value_mask                      0xFF
#define ALRMVALL_clear_mask                      0x0


/*------------------------------#
| ALRMVALH                0xF59 |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define ALRMVALH                                 0x0
#define ALRMVALH_address                         0xF59
#define ALRMVALH_position                        0x0
#define ALRMVALH_size                            0x8
#define ALRMVALH_value_mask                      0xFF
#define ALRMVALH_clear_mask                      0x0


/*--------------------------------------------------------------#
| ALRMRPT                                                 0xF5A |
#---------------------------------------------------------------#
| ARPT7 | ARPT6 | ARPT5 | ARPT4 | ARPT3 | ARPT2 | ARPT1 | ARPT0 |
#---------------------------------------------------------------#
| 7     | 6     | 5     | 4     | 3     | 2     | 1     | 0     |
#--------------------------------------------------------------*/

#define ALRMRPT                                  0x0
#define ALRMRPT_address                          0xF5A
#define ALRMRPT_position                         0x0
#define ALRMRPT_size                             0x8
#define ALRMRPT_value_mask                       0xFF
#define ALRMRPT_clear_mask                       0x0

#define ARPT0                                    0x0
#define ARPT0_address                            0xF5A
#define ARPT0_position                           0x0
#define ARPT0_size                               0x1
#define ARPT0_value_mask                         0x1
#define ARPT0_clear_mask                         0xFE

#define ARPT                                     0x0
#define ARPT_address                             0xF5A
#define ARPT_position                            0x0
#define ARPT_size                                0x8
#define ARPT_value_mask                          0xFF
#define ARPT_clear_mask                          0x0

#define ARPT1                                    0x1
#define ARPT1_address                            0xF5A
#define ARPT1_position                           0x1
#define ARPT1_size                               0x1
#define ARPT1_value_mask                         0x2
#define ARPT1_clear_mask                         0xFD

#define ARPT2                                    0x2
#define ARPT2_address                            0xF5A
#define ARPT2_position                           0x2
#define ARPT2_size                               0x1
#define ARPT2_value_mask                         0x4
#define ARPT2_clear_mask                         0xFB

#define ARPT3                                    0x3
#define ARPT3_address                            0xF5A
#define ARPT3_position                           0x3
#define ARPT3_size                               0x1
#define ARPT3_value_mask                         0x8
#define ARPT3_clear_mask                         0xF7

#define ARPT4                                    0x4
#define ARPT4_address                            0xF5A
#define ARPT4_position                           0x4
#define ARPT4_size                               0x1
#define ARPT4_value_mask                         0x10
#define ARPT4_clear_mask                         0xEF

#define ARPT5                                    0x5
#define ARPT5_address                            0xF5A
#define ARPT5_position                           0x5
#define ARPT5_size                               0x1
#define ARPT5_value_mask                         0x20
#define ARPT5_clear_mask                         0xDF

#define ARPT6                                    0x6
#define ARPT6_address                            0xF5A
#define ARPT6_position                           0x6
#define ARPT6_size                               0x1
#define ARPT6_value_mask                         0x40
#define ARPT6_clear_mask                         0xBF

#define ARPT7                                    0x7
#define ARPT7_address                            0xF5A
#define ARPT7_position                           0x7
#define ARPT7_size                               0x1
#define ARPT7_value_mask                         0x80
#define ARPT7_clear_mask                         0x7F


/*-------------------------------------------------------------------------#
| ALRMCFG                                                            0xF5B |
#--------------------------------------------------------------------------#
| ALRMEN | CHIME | AMASK3 | AMASK2 | AMASK1 | AMASK0 | ALRMPTR1 | ALRMPTR0 |
#--------------------------------------------------------------------------#
| 7      | 6     | 5      | 4      | 3      | 2      | 1        | 0        |
#-------------------------------------------------------------------------*/

#define ALRMCFG                                  0x0
#define ALRMCFG_address                          0xF5B
#define ALRMCFG_position                         0x0
#define ALRMCFG_size                             0x8
#define ALRMCFG_value_mask                       0xFF
#define ALRMCFG_clear_mask                       0x0

#define ALRMPTR                                  0x0
#define ALRMPTR_address                          0xF5B
#define ALRMPTR_position                         0x0
#define ALRMPTR_size                             0x2
#define ALRMPTR_value_mask                       0x3
#define ALRMPTR_clear_mask                       0xFC

#define ALRMPTR0                                 0x0
#define ALRMPTR0_address                         0xF5B
#define ALRMPTR0_position                        0x0
#define ALRMPTR0_size                            0x1
#define ALRMPTR0_value_mask                      0x1
#define ALRMPTR0_clear_mask                      0xFE

#define ALRMPTR1                                 0x1
#define ALRMPTR1_address                         0xF5B
#define ALRMPTR1_position                        0x1
#define ALRMPTR1_size                            0x1
#define ALRMPTR1_value_mask                      0x2
#define ALRMPTR1_clear_mask                      0xFD

#define AMASK0                                   0x2
#define AMASK0_address                           0xF5B
#define AMASK0_position                          0x2
#define AMASK0_size                              0x1
#define AMASK0_value_mask                        0x4
#define AMASK0_clear_mask                        0xFB

#define AMASK                                    0x2
#define AMASK_address                            0xF5B
#define AMASK_position                           0x2
#define AMASK_size                               0x4
#define AMASK_value_mask                         0x3C
#define AMASK_clear_mask                         0xC3

#define AMASK1                                   0x3
#define AMASK1_address                           0xF5B
#define AMASK1_position                          0x3
#define AMASK1_size                              0x1
#define AMASK1_value_mask                        0x8
#define AMASK1_clear_mask                        0xF7

#define AMASK2                                   0x4
#define AMASK2_address                           0xF5B
#define AMASK2_position                          0x4
#define AMASK2_size                              0x1
#define AMASK2_value_mask                        0x10
#define AMASK2_clear_mask                        0xEF

#define AMASK3                                   0x5
#define AMASK3_address                           0xF5B
#define AMASK3_position                          0x5
#define AMASK3_size                              0x1
#define AMASK3_value_mask                        0x20
#define AMASK3_clear_mask                        0xDF

#define CHIME                                    0x6
#define CHIME_address                            0xF5B
#define CHIME_position                           0x6
#define CHIME_size                               0x1
#define CHIME_value_mask                         0x40
#define CHIME_clear_mask                         0xBF

#define ALRMEN                                   0x7
#define ALRMEN_address                           0xF5B
#define ALRMEN_position                          0x7
#define ALRMEN_size                              0x1
#define ALRMEN_value_mask                        0x80
#define ALRMEN_clear_mask                        0x7F


/*------------------------------#
| RTCVALL                 0xF5C |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define RTCVALL                                  0x0
#define RTCVALL_address                          0xF5C
#define RTCVALL_position                         0x0
#define RTCVALL_size                             0x8
#define RTCVALL_value_mask                       0xFF
#define RTCVALL_clear_mask                       0x0


/*----------------------------------------------------------------------#
| RTCVALH                                                         0xF5D |
#-----------------------------------------------------------------------#
| WAITB1 | WAITB0 | WAITM3 | WAITM2 | WAITM1 | WAITM0 | WAITE1 | WAITE0 |
#-----------------------------------------------------------------------#
| 7      | 6      | 5      | 4      | 3      | 2      | 1      | 0      |
#----------------------------------------------------------------------*/

#define WAITE0                                   0x0
#define WAITE0_address                           0xF5D
#define WAITE0_position                          0x0
#define WAITE0_size                              0x1
#define WAITE0_value_mask                        0x1
#define WAITE0_clear_mask                        0xFE

#define RTCVALH                                  0x0
#define RTCVALH_address                          0xF5D
#define RTCVALH_position                         0x0
#define RTCVALH_size                             0x8
#define RTCVALH_value_mask                       0xFF
#define RTCVALH_clear_mask                       0x0

#define WAITE1                                   0x1
#define WAITE1_address                           0xF5D
#define WAITE1_position                          0x1
#define WAITE1_size                              0x1
#define WAITE1_value_mask                        0x2
#define WAITE1_clear_mask                        0xFD

#define WAITM0                                   0x2
#define WAITM0_address                           0xF5D
#define WAITM0_position                          0x2
#define WAITM0_size                              0x1
#define WAITM0_value_mask                        0x4
#define WAITM0_clear_mask                        0xFB

#define WAITM1                                   0x3
#define WAITM1_address                           0xF5D
#define WAITM1_position                          0x3
#define WAITM1_size                              0x1
#define WAITM1_value_mask                        0x8
#define WAITM1_clear_mask                        0xF7

#define WAITM2                                   0x4
#define WAITM2_address                           0xF5D
#define WAITM2_position                          0x4
#define WAITM2_size                              0x1
#define WAITM2_value_mask                        0x10
#define WAITM2_clear_mask                        0xEF

#define WAITM3                                   0x5
#define WAITM3_address                           0xF5D
#define WAITM3_position                          0x5
#define WAITM3_size                              0x1
#define WAITM3_value_mask                        0x20
#define WAITM3_clear_mask                        0xDF

#define WAITB0                                   0x6
#define WAITB0_address                           0xF5D
#define WAITB0_position                          0x6
#define WAITB0_size                              0x1
#define WAITB0_value_mask                        0x40
#define WAITB0_clear_mask                        0xBF

#define WAITB1                                   0x7
#define WAITB1_address                           0xF5D
#define WAITB1_position                          0x7
#define WAITB1_size                              0x1
#define WAITB1_value_mask                        0x80
#define WAITB1_clear_mask                        0x7F


/*------------------------------------------------------#
| RTCCAL                                          0xF5E |
#-------------------------------------------------------#
| CAL7 | CAL6 | CAL5 | CAL4 | CAL3 | CAL2 | CAL1 | CAL0 |
#-------------------------------------------------------#
| 7    | 6    | 5    | 4    | 3    | 2    | 1    | 0    |
#------------------------------------------------------*/

#define RTCCAL                                   0x0
#define RTCCAL_address                           0xF5E
#define RTCCAL_position                          0x0
#define RTCCAL_size                              0x8
#define RTCCAL_value_mask                        0xFF
#define RTCCAL_clear_mask                        0x0

#define CAL0                                     0x0
#define CAL0_address                             0xF5E
#define CAL0_position                            0x0
#define CAL0_size                                0x1
#define CAL0_value_mask                          0x1
#define CAL0_clear_mask                          0xFE

#define CAL                                      0x0
#define CAL_address                              0xF5E
#define CAL_position                             0x0
#define CAL_size                                 0x8
#define CAL_value_mask                           0xFF
#define CAL_clear_mask                           0x0

#define CAL1                                     0x1
#define CAL1_address                             0xF5E
#define CAL1_position                            0x1
#define CAL1_size                                0x1
#define CAL1_value_mask                          0x2
#define CAL1_clear_mask                          0xFD

#define CAL2                                     0x2
#define CAL2_address                             0xF5E
#define CAL2_position                            0x2
#define CAL2_size                                0x1
#define CAL2_value_mask                          0x4
#define CAL2_clear_mask                          0xFB

#define CAL3                                     0x3
#define CAL3_address                             0xF5E
#define CAL3_position                            0x3
#define CAL3_size                                0x1
#define CAL3_value_mask                          0x8
#define CAL3_clear_mask                          0xF7

#define CAL4                                     0x4
#define CAL4_address                             0xF5E
#define CAL4_position                            0x4
#define CAL4_size                                0x1
#define CAL4_value_mask                          0x10
#define CAL4_clear_mask                          0xEF

#define CAL5                                     0x5
#define CAL5_address                             0xF5E
#define CAL5_position                            0x5
#define CAL5_size                                0x1
#define CAL5_value_mask                          0x20
#define CAL5_clear_mask                          0xDF

#define CAL6                                     0x6
#define CAL6_address                             0xF5E
#define CAL6_position                            0x6
#define CAL6_size                                0x1
#define CAL6_value_mask                          0x40
#define CAL6_clear_mask                          0xBF

#define CAL7                                     0x7
#define CAL7_address                             0xF5E
#define CAL7_position                            0x7
#define CAL7_size                                0x1
#define CAL7_value_mask                          0x80
#define CAL7_clear_mask                          0x7F


/*--------------------------------------------------------------------#
| RTCCFG                                                        0xF5F |
#---------------------------------------------------------------------#
| RTCEN | - | RTCWREN | RTCSYNC | HALFSEC | RTCOE | RTCPTR1 | RTCPTR0 |
#---------------------------------------------------------------------#
| 7     | 6 | 5       | 4       | 3       | 2     | 1       | 0       |
#--------------------------------------------------------------------*/

#define RTCCFG                                   0x0
#define RTCCFG_address                           0xF5F
#define RTCCFG_position                          0x0
#define RTCCFG_size                              0x8
#define RTCCFG_value_mask                        0xFF
#define RTCCFG_clear_mask                        0x0

#define RTCPTR0                                  0x0
#define RTCPTR0_address                          0xF5F
#define RTCPTR0_position                         0x0
#define RTCPTR0_size                             0x1
#define RTCPTR0_value_mask                       0x1
#define RTCPTR0_clear_mask                       0xFE

#define RTCPTR                                   0x0
#define RTCPTR_address                           0xF5F
#define RTCPTR_position                          0x0
#define RTCPTR_size                              0x2
#define RTCPTR_value_mask                        0x3
#define RTCPTR_clear_mask                        0xFC

#define RTCPTR1                                  0x1
#define RTCPTR1_address                          0xF5F
#define RTCPTR1_position                         0x1
#define RTCPTR1_size                             0x1
#define RTCPTR1_value_mask                       0x2
#define RTCPTR1_clear_mask                       0xFD

#define RTCOE                                    0x2
#define RTCOE_address                            0xF5F
#define RTCOE_position                           0x2
#define RTCOE_size                               0x1
#define RTCOE_value_mask                         0x4
#define RTCOE_clear_mask                         0xFB

#define HALFSEC                                  0x3
#define HALFSEC_address                          0xF5F
#define HALFSEC_position                         0x3
#define HALFSEC_size                             0x1
#define HALFSEC_value_mask                       0x8
#define HALFSEC_clear_mask                       0xF7

#define RTCSYNC                                  0x4
#define RTCSYNC_address                          0xF5F
#define RTCSYNC_position                         0x4
#define RTCSYNC_size                             0x1
#define RTCSYNC_value_mask                       0x10
#define RTCSYNC_clear_mask                       0xEF

#define RTCWREN                                  0x5
#define RTCWREN_address                          0xF5F
#define RTCWREN_position                         0x5
#define RTCWREN_size                             0x1
#define RTCWREN_value_mask                       0x20
#define RTCWREN_clear_mask                       0xDF

#define RTCEN                                    0x7
#define RTCEN_address                            0xF5F
#define RTCEN_position                           0x7
#define RTCEN_size                               0x1
#define RTCEN_value_mask                         0x80
#define RTCEN_clear_mask                         0x7F


/*------------------------------------------------#
| PIE6                                      0xF60 |
#-------------------------------------------------#
| - | - | - | EEIE | - | CMP3IE | CMP2IE | CMP1IE |
#-------------------------------------------------#
| 7 | 6 | 5 | 4    | 3 | 2      | 1      | 0      |
#------------------------------------------------*/

#define PIE6                                     0x0
#define PIE6_address                             0xF60
#define PIE6_position                            0x0
#define PIE6_size                                0x8
#define PIE6_value_mask                          0xFF
#define PIE6_clear_mask                          0x0

#define CMP1IE                                   0x0
#define CMP1IE_address                           0xF60
#define CMP1IE_position                          0x0
#define CMP1IE_size                              0x1
#define CMP1IE_value_mask                        0x1
#define CMP1IE_clear_mask                        0xFE

#define CMP2IE                                   0x1
#define CMP2IE_address                           0xF60
#define CMP2IE_position                          0x1
#define CMP2IE_size                              0x1
#define CMP2IE_value_mask                        0x2
#define CMP2IE_clear_mask                        0xFD

#define CMP3IE                                   0x2
#define CMP3IE_address                           0xF60
#define CMP3IE_position                          0x2
#define CMP3IE_size                              0x1
#define CMP3IE_value_mask                        0x4
#define CMP3IE_clear_mask                        0xFB

#define EEIE                                     0x4
#define EEIE_address                             0xF60
#define EEIE_position                            0x4
#define EEIE_size                                0x1
#define EEIE_value_mask                          0x10
#define EEIE_clear_mask                          0xEF


/*------------------------------#
| EEDATA                  0xF61 |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define EEDATA                                   0x0
#define EEDATA_address                           0xF61
#define EEDATA_position                          0x0
#define EEDATA_size                              0x8
#define EEDATA_value_mask                        0xFF
#define EEDATA_clear_mask                        0x0


/*------------------------------#
| EEADR                   0xF62 |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define EEADR                                    0x0
#define EEADR_address                            0xF62
#define EEADR_position                           0x0
#define EEADR_size                               0x8
#define EEADR_value_mask                         0xFF
#define EEADR_clear_mask                         0x0


/*-------------------------------#
| EEADRH                   0xF63 |
#--------------------------------#
| - | - | - | - | - | - | EEADRH |
#--------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0  |
#-------------------------------*/

#define EEADRH                                   0x0
#define EEADRH_address                           0xF63
#define EEADRH_position                          0x0
#define EEADRH_size                              0x2
#define EEADRH_value_mask                        0x3
#define EEADRH_clear_mask                        0xFC


/*----------------------------------------------------#
| OSCCON2                                       0xF64 |
#-----------------------------------------------------#
| - | SOSCRUN | - | - | SOSCGO | - | MFIOFS | MFIOSEL |
#-----------------------------------------------------#
| 7 | 6       | 5 | 4 | 3      | 2 | 1      | 0       |
#----------------------------------------------------*/

#define OSCCON2                                  0x0
#define OSCCON2_address                          0xF64
#define OSCCON2_position                         0x0
#define OSCCON2_size                             0x8
#define OSCCON2_value_mask                       0xFF
#define OSCCON2_clear_mask                       0x0

#define MFIOSEL                                  0x0
#define MFIOSEL_address                          0xF64
#define MFIOSEL_position                         0x0
#define MFIOSEL_size                             0x1
#define MFIOSEL_value_mask                       0x1
#define MFIOSEL_clear_mask                       0xFE

#define MFIOFS                                   0x1
#define MFIOFS_address                           0xF64
#define MFIOFS_position                          0x1
#define MFIOFS_size                              0x1
#define MFIOFS_value_mask                        0x2
#define MFIOFS_clear_mask                        0xFD

#define SOSCGO                                   0x3
#define SOSCGO_address                           0xF64
#define SOSCGO_position                          0x3
#define SOSCGO_size                              0x1
#define SOSCGO_value_mask                        0x8
#define SOSCGO_clear_mask                        0xF7

#define SOSCRUN                                  0x6
#define SOSCRUN_address                          0xF64
#define SOSCRUN_position                         0x6
#define SOSCRUN_size                             0x1
#define SOSCRUN_value_mask                       0x40
#define SOSCRUN_clear_mask                       0xBF


/*------------------------------------------------------------------------------#
| BAUDCON1                                                                0xF65 |
#-------------------------------------------------------------------------------#
| ABDOVF1 | RCMT1 | DTRXP1 | CKTXP | BRG161 | - | BAUDCON1_WUE | BAUDCON1_ABDEN |
#-------------------------------------------------------------------------------#
| 7       | 6     | 5      | 4     | 3      | 2 | 1            | 0              |
#------------------------------------------------------------------------------*/

#define BAUDCON1                                 0x0
#define BAUDCON1_address                         0xF65
#define BAUDCON1_position                        0x0
#define BAUDCON1_size                            0x8
#define BAUDCON1_value_mask                      0xFF
#define BAUDCON1_clear_mask                      0x0

#define BAUDCON1_ABDEN                           0x0
#define BAUDCON1_ABDEN_address                   0xF65
#define BAUDCON1_ABDEN_position                  0x0
#define BAUDCON1_ABDEN_size                      0x1
#define BAUDCON1_ABDEN_value_mask                0x1
#define BAUDCON1_ABDEN_clear_mask                0xFE

#define ABDEN1                                   0x0
#define ABDEN1_address                           0xF65
#define ABDEN1_position                          0x0
#define ABDEN1_size                              0x1
#define ABDEN1_value_mask                        0x1
#define ABDEN1_clear_mask                        0xFE

#define BAUDCON1_WUE                             0x1
#define BAUDCON1_WUE_address                     0xF65
#define BAUDCON1_WUE_position                    0x1
#define BAUDCON1_WUE_size                        0x1
#define BAUDCON1_WUE_value_mask                  0x2
#define BAUDCON1_WUE_clear_mask                  0xFD

#define WUE1                                     0x1
#define WUE1_address                             0xF65
#define WUE1_position                            0x1
#define WUE1_size                                0x1
#define WUE1_value_mask                          0x2
#define WUE1_clear_mask                          0xFD

#define W4E                                      0x1
#define W4E_address                              0xF65
#define W4E_position                             0x1
#define W4E_size                                 0x1
#define W4E_value_mask                           0x2
#define W4E_clear_mask                           0xFD

#define BRG161                                   0x3
#define BRG161_address                           0xF65
#define BRG161_position                          0x3
#define BRG161_size                              0x1
#define BRG161_value_mask                        0x8
#define BRG161_clear_mask                        0xF7

#define BAUDCON1_BRG16                           0x3
#define BAUDCON1_BRG16_address                   0xF65
#define BAUDCON1_BRG16_position                  0x3
#define BAUDCON1_BRG16_size                      0x1
#define BAUDCON1_BRG16_value_mask                0x8
#define BAUDCON1_BRG16_clear_mask                0xF7

#define CKTXP                                    0x4
#define CKTXP_address                            0xF65
#define CKTXP_position                           0x4
#define CKTXP_size                               0x1
#define CKTXP_value_mask                         0x10
#define CKTXP_clear_mask                         0xEF

#define BAUDCON1_TXCKP                           0x4
#define BAUDCON1_TXCKP_address                   0xF65
#define BAUDCON1_TXCKP_position                  0x4
#define BAUDCON1_TXCKP_size                      0x1
#define BAUDCON1_TXCKP_value_mask                0x10
#define BAUDCON1_TXCKP_clear_mask                0xEF

#define SCKP1                                    0x4
#define SCKP1_address                            0xF65
#define SCKP1_position                           0x4
#define SCKP1_size                               0x1
#define SCKP1_value_mask                         0x10
#define SCKP1_clear_mask                         0xEF

#define TXCKP1                                   0x4
#define TXCKP1_address                           0xF65
#define TXCKP1_position                          0x4
#define TXCKP1_size                              0x1
#define TXCKP1_value_mask                        0x10
#define TXCKP1_clear_mask                        0xEF

#define SCKP                                     0x4
#define SCKP_address                             0xF65
#define SCKP_position                            0x4
#define SCKP_size                                0x1
#define SCKP_value_mask                          0x10
#define SCKP_clear_mask                          0xEF

#define DTRXP1                                   0x5
#define DTRXP1_address                           0xF65
#define DTRXP1_position                          0x5
#define DTRXP1_size                              0x1
#define DTRXP1_value_mask                        0x20
#define DTRXP1_clear_mask                        0xDF

#define RXDTP1                                   0x5
#define RXDTP1_address                           0xF65
#define RXDTP1_position                          0x5
#define RXDTP1_size                              0x1
#define RXDTP1_value_mask                        0x20
#define RXDTP1_clear_mask                        0xDF

#define DTRXP                                    0x5
#define DTRXP_address                            0xF65
#define DTRXP_position                           0x5
#define DTRXP_size                               0x1
#define DTRXP_value_mask                         0x20
#define DTRXP_clear_mask                         0xDF

#define RXCKP                                    0x5
#define RXCKP_address                            0xF65
#define RXCKP_position                           0x5
#define RXCKP_size                               0x1
#define RXCKP_value_mask                         0x20
#define RXCKP_clear_mask                         0xDF

#define BAUDCON1_RXDTP                           0x5
#define BAUDCON1_RXDTP_address                   0xF65
#define BAUDCON1_RXDTP_position                  0x5
#define BAUDCON1_RXDTP_size                      0x1
#define BAUDCON1_RXDTP_value_mask                0x20
#define BAUDCON1_RXDTP_clear_mask                0xDF

#define RCMT1                                    0x6
#define RCMT1_address                            0xF65
#define RCMT1_position                           0x6
#define RCMT1_size                               0x1
#define RCMT1_value_mask                         0x40
#define RCMT1_clear_mask                         0xBF

#define RCIDL1                                   0x6
#define RCIDL1_address                           0xF65
#define RCIDL1_position                          0x6
#define RCIDL1_size                              0x1
#define RCIDL1_value_mask                        0x40
#define RCIDL1_clear_mask                        0xBF

#define BAUDCON1_RCIDL                           0x6
#define BAUDCON1_RCIDL_address                   0xF65
#define BAUDCON1_RCIDL_position                  0x6
#define BAUDCON1_RCIDL_size                      0x1
#define BAUDCON1_RCIDL_value_mask                0x40
#define BAUDCON1_RCIDL_clear_mask                0xBF

#define RCMT                                     0x6
#define RCMT_address                             0xF65
#define RCMT_position                            0x6
#define RCMT_size                                0x1
#define RCMT_value_mask                          0x40
#define RCMT_clear_mask                          0xBF

#define ABDOVF1                                  0x7
#define ABDOVF1_address                          0xF65
#define ABDOVF1_position                         0x7
#define ABDOVF1_size                             0x1
#define ABDOVF1_value_mask                       0x80
#define ABDOVF1_clear_mask                       0x7F

#define BAUDCON1_ABDOVF                          0x7
#define BAUDCON1_ABDOVF_address                  0xF65
#define BAUDCON1_ABDOVF_position                 0x7
#define BAUDCON1_ABDOVF_size                     0x1
#define BAUDCON1_ABDOVF_value_mask               0x80
#define BAUDCON1_ABDOVF_clear_mask               0x7F


/*--------------------------------------------------------------#
| LCDDATA0                                                0xF66 |
#---------------------------------------------------------------#
| S07C0 | S06C0 | S05C0 | S04C0 | S03C0 | S02C0 | S01C0 | S00C0 |
#---------------------------------------------------------------#
| 7     | 6     | 5     | 4     | 3     | 2     | 1     | 0     |
#--------------------------------------------------------------*/

#define LCDDATA0                                 0x0
#define LCDDATA0_address                         0xF66
#define LCDDATA0_position                        0x0
#define LCDDATA0_size                            0x8
#define LCDDATA0_value_mask                      0xFF
#define LCDDATA0_clear_mask                      0x0

#define S00C0                                    0x0
#define S00C0_address                            0xF66
#define S00C0_position                           0x0
#define S00C0_size                               0x1
#define S00C0_value_mask                         0x1
#define S00C0_clear_mask                         0xFE

#define S01C0                                    0x1
#define S01C0_address                            0xF66
#define S01C0_position                           0x1
#define S01C0_size                               0x1
#define S01C0_value_mask                         0x2
#define S01C0_clear_mask                         0xFD

#define S02C0                                    0x2
#define S02C0_address                            0xF66
#define S02C0_position                           0x2
#define S02C0_size                               0x1
#define S02C0_value_mask                         0x4
#define S02C0_clear_mask                         0xFB

#define S03C0                                    0x3
#define S03C0_address                            0xF66
#define S03C0_position                           0x3
#define S03C0_size                               0x1
#define S03C0_value_mask                         0x8
#define S03C0_clear_mask                         0xF7

#define S04C0                                    0x4
#define S04C0_address                            0xF66
#define S04C0_position                           0x4
#define S04C0_size                               0x1
#define S04C0_value_mask                         0x10
#define S04C0_clear_mask                         0xEF

#define S05C0                                    0x5
#define S05C0_address                            0xF66
#define S05C0_position                           0x5
#define S05C0_size                               0x1
#define S05C0_value_mask                         0x20
#define S05C0_clear_mask                         0xDF

#define S06C0                                    0x6
#define S06C0_address                            0xF66
#define S06C0_position                           0x6
#define S06C0_size                               0x1
#define S06C0_value_mask                         0x40
#define S06C0_clear_mask                         0xBF

#define S07C0                                    0x7
#define S07C0_address                            0xF66
#define S07C0_position                           0x7
#define S07C0_size                               0x1
#define S07C0_value_mask                         0x80
#define S07C0_clear_mask                         0x7F


/*--------------------------------------------------------------#
| LCDDATA1                                                0xF67 |
#---------------------------------------------------------------#
| S15C0 | S14C0 | S13C0 | S12C0 | S11C0 | S10C0 | S09C0 | S08C0 |
#---------------------------------------------------------------#
| 7     | 6     | 5     | 4     | 3     | 2     | 1     | 0     |
#--------------------------------------------------------------*/

#define LCDDATA1                                 0x0
#define LCDDATA1_address                         0xF67
#define LCDDATA1_position                        0x0
#define LCDDATA1_size                            0x8
#define LCDDATA1_value_mask                      0xFF
#define LCDDATA1_clear_mask                      0x0

#define S08C0                                    0x0
#define S08C0_address                            0xF67
#define S08C0_position                           0x0
#define S08C0_size                               0x1
#define S08C0_value_mask                         0x1
#define S08C0_clear_mask                         0xFE

#define S09C0                                    0x1
#define S09C0_address                            0xF67
#define S09C0_position                           0x1
#define S09C0_size                               0x1
#define S09C0_value_mask                         0x2
#define S09C0_clear_mask                         0xFD

#define S10C0                                    0x2
#define S10C0_address                            0xF67
#define S10C0_position                           0x2
#define S10C0_size                               0x1
#define S10C0_value_mask                         0x4
#define S10C0_clear_mask                         0xFB

#define S11C0                                    0x3
#define S11C0_address                            0xF67
#define S11C0_position                           0x3
#define S11C0_size                               0x1
#define S11C0_value_mask                         0x8
#define S11C0_clear_mask                         0xF7

#define S12C0                                    0x4
#define S12C0_address                            0xF67
#define S12C0_position                           0x4
#define S12C0_size                               0x1
#define S12C0_value_mask                         0x10
#define S12C0_clear_mask                         0xEF

#define S13C0                                    0x5
#define S13C0_address                            0xF67
#define S13C0_position                           0x5
#define S13C0_size                               0x1
#define S13C0_value_mask                         0x20
#define S13C0_clear_mask                         0xDF

#define S14C0                                    0x6
#define S14C0_address                            0xF67
#define S14C0_position                           0x6
#define S14C0_size                               0x1
#define S14C0_value_mask                         0x40
#define S14C0_clear_mask                         0xBF

#define S15C0                                    0x7
#define S15C0_address                            0xF67
#define S15C0_position                           0x7
#define S15C0_size                               0x1
#define S15C0_value_mask                         0x80
#define S15C0_clear_mask                         0x7F


/*--------------------------------------------------------------#
| LCDDATA2                                                0xF68 |
#---------------------------------------------------------------#
| S23C0 | S22C0 | S21C0 | S20C0 | S19C0 | S18C0 | S17C0 | S16C0 |
#---------------------------------------------------------------#
| 7     | 6     | 5     | 4     | 3     | 2     | 1     | 0     |
#--------------------------------------------------------------*/

#define LCDDATA2                                 0x0
#define LCDDATA2_address                         0xF68
#define LCDDATA2_position                        0x0
#define LCDDATA2_size                            0x8
#define LCDDATA2_value_mask                      0xFF
#define LCDDATA2_clear_mask                      0x0

#define S16C0                                    0x0
#define S16C0_address                            0xF68
#define S16C0_position                           0x0
#define S16C0_size                               0x1
#define S16C0_value_mask                         0x1
#define S16C0_clear_mask                         0xFE

#define S17C0                                    0x1
#define S17C0_address                            0xF68
#define S17C0_position                           0x1
#define S17C0_size                               0x1
#define S17C0_value_mask                         0x2
#define S17C0_clear_mask                         0xFD

#define S18C0                                    0x2
#define S18C0_address                            0xF68
#define S18C0_position                           0x2
#define S18C0_size                               0x1
#define S18C0_value_mask                         0x4
#define S18C0_clear_mask                         0xFB

#define S19C0                                    0x3
#define S19C0_address                            0xF68
#define S19C0_position                           0x3
#define S19C0_size                               0x1
#define S19C0_value_mask                         0x8
#define S19C0_clear_mask                         0xF7

#define S20C0                                    0x4
#define S20C0_address                            0xF68
#define S20C0_position                           0x4
#define S20C0_size                               0x1
#define S20C0_value_mask                         0x10
#define S20C0_clear_mask                         0xEF

#define S21C0                                    0x5
#define S21C0_address                            0xF68
#define S21C0_position                           0x5
#define S21C0_size                               0x1
#define S21C0_value_mask                         0x20
#define S21C0_clear_mask                         0xDF

#define S22C0                                    0x6
#define S22C0_address                            0xF68
#define S22C0_position                           0x6
#define S22C0_size                               0x1
#define S22C0_value_mask                         0x40
#define S22C0_clear_mask                         0xBF

#define S23C0                                    0x7
#define S23C0_address                            0xF68
#define S23C0_position                           0x7
#define S23C0_size                               0x1
#define S23C0_value_mask                         0x80
#define S23C0_clear_mask                         0x7F


/*--------------------------------------------------------------#
| LCDDATA3                                                0xF69 |
#---------------------------------------------------------------#
| S31C0 | S30C0 | S29C0 | S28C0 | S27C0 | S26C0 | S25C0 | S24C0 |
#---------------------------------------------------------------#
| 7     | 6     | 5     | 4     | 3     | 2     | 1     | 0     |
#--------------------------------------------------------------*/

#define LCDDATA3                                 0x0
#define LCDDATA3_address                         0xF69
#define LCDDATA3_position                        0x0
#define LCDDATA3_size                            0x8
#define LCDDATA3_value_mask                      0xFF
#define LCDDATA3_clear_mask                      0x0

#define S24C0                                    0x0
#define S24C0_address                            0xF69
#define S24C0_position                           0x0
#define S24C0_size                               0x1
#define S24C0_value_mask                         0x1
#define S24C0_clear_mask                         0xFE

#define S25C0                                    0x1
#define S25C0_address                            0xF69
#define S25C0_position                           0x1
#define S25C0_size                               0x1
#define S25C0_value_mask                         0x2
#define S25C0_clear_mask                         0xFD

#define S26C0                                    0x2
#define S26C0_address                            0xF69
#define S26C0_position                           0x2
#define S26C0_size                               0x1
#define S26C0_value_mask                         0x4
#define S26C0_clear_mask                         0xFB

#define S27C0                                    0x3
#define S27C0_address                            0xF69
#define S27C0_position                           0x3
#define S27C0_size                               0x1
#define S27C0_value_mask                         0x8
#define S27C0_clear_mask                         0xF7

#define S28C0                                    0x4
#define S28C0_address                            0xF69
#define S28C0_position                           0x4
#define S28C0_size                               0x1
#define S28C0_value_mask                         0x10
#define S28C0_clear_mask                         0xEF

#define S29C0                                    0x5
#define S29C0_address                            0xF69
#define S29C0_position                           0x5
#define S29C0_size                               0x1
#define S29C0_value_mask                         0x20
#define S29C0_clear_mask                         0xDF

#define S30C0                                    0x6
#define S30C0_address                            0xF69
#define S30C0_position                           0x6
#define S30C0_size                               0x1
#define S30C0_value_mask                         0x40
#define S30C0_clear_mask                         0xBF

#define S31C0                                    0x7
#define S31C0_address                            0xF69
#define S31C0_position                           0x7
#define S31C0_size                               0x1
#define S31C0_value_mask                         0x80
#define S31C0_clear_mask                         0x7F


/*----------------------------------#
| LCDDATA4                    0xF6A |
#-----------------------------------#
| - | - | - | - | - | - | - | S32C0 |
#-----------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0     |
#----------------------------------*/

#define LCDDATA4                                 0x0
#define LCDDATA4_address                         0xF6A
#define LCDDATA4_position                        0x0
#define LCDDATA4_size                            0x8
#define LCDDATA4_value_mask                      0xFF
#define LCDDATA4_clear_mask                      0x0

#define S32C0                                    0x0
#define S32C0_address                            0xF6A
#define S32C0_position                           0x0
#define S32C0_size                               0x1
#define S32C0_value_mask                         0x1
#define S32C0_clear_mask                         0xFE


/*--------------------------------------------------------------#
| LCDDATA6                                                0xF6C |
#---------------------------------------------------------------#
| S07C1 | S06C1 | S05C1 | S04C1 | S03C1 | S02C1 | S01C1 | S00C1 |
#---------------------------------------------------------------#
| 7     | 6     | 5     | 4     | 3     | 2     | 1     | 0     |
#--------------------------------------------------------------*/

#define LCDDATA6                                 0x0
#define LCDDATA6_address                         0xF6C
#define LCDDATA6_position                        0x0
#define LCDDATA6_size                            0x8
#define LCDDATA6_value_mask                      0xFF
#define LCDDATA6_clear_mask                      0x0

#define S00C1                                    0x0
#define S00C1_address                            0xF6C
#define S00C1_position                           0x0
#define S00C1_size                               0x1
#define S00C1_value_mask                         0x1
#define S00C1_clear_mask                         0xFE

#define S01C1                                    0x1
#define S01C1_address                            0xF6C
#define S01C1_position                           0x1
#define S01C1_size                               0x1
#define S01C1_value_mask                         0x2
#define S01C1_clear_mask                         0xFD

#define S02C1                                    0x2
#define S02C1_address                            0xF6C
#define S02C1_position                           0x2
#define S02C1_size                               0x1
#define S02C1_value_mask                         0x4
#define S02C1_clear_mask                         0xFB

#define S03C1                                    0x3
#define S03C1_address                            0xF6C
#define S03C1_position                           0x3
#define S03C1_size                               0x1
#define S03C1_value_mask                         0x8
#define S03C1_clear_mask                         0xF7

#define S04C1                                    0x4
#define S04C1_address                            0xF6C
#define S04C1_position                           0x4
#define S04C1_size                               0x1
#define S04C1_value_mask                         0x10
#define S04C1_clear_mask                         0xEF

#define S05C1                                    0x5
#define S05C1_address                            0xF6C
#define S05C1_position                           0x5
#define S05C1_size                               0x1
#define S05C1_value_mask                         0x20
#define S05C1_clear_mask                         0xDF

#define S06C1                                    0x6
#define S06C1_address                            0xF6C
#define S06C1_position                           0x6
#define S06C1_size                               0x1
#define S06C1_value_mask                         0x40
#define S06C1_clear_mask                         0xBF

#define S07C1                                    0x7
#define S07C1_address                            0xF6C
#define S07C1_position                           0x7
#define S07C1_size                               0x1
#define S07C1_value_mask                         0x80
#define S07C1_clear_mask                         0x7F


/*--------------------------------------------------------------#
| LCDDATA7                                                0xF6D |
#---------------------------------------------------------------#
| S15C1 | S14C1 | S13C1 | S12C1 | S11C1 | S10C1 | S09C1 | S08C1 |
#---------------------------------------------------------------#
| 7     | 6     | 5     | 4     | 3     | 2     | 1     | 0     |
#--------------------------------------------------------------*/

#define LCDDATA7                                 0x0
#define LCDDATA7_address                         0xF6D
#define LCDDATA7_position                        0x0
#define LCDDATA7_size                            0x8
#define LCDDATA7_value_mask                      0xFF
#define LCDDATA7_clear_mask                      0x0

#define S08C1                                    0x0
#define S08C1_address                            0xF6D
#define S08C1_position                           0x0
#define S08C1_size                               0x1
#define S08C1_value_mask                         0x1
#define S08C1_clear_mask                         0xFE

#define S09C1                                    0x1
#define S09C1_address                            0xF6D
#define S09C1_position                           0x1
#define S09C1_size                               0x1
#define S09C1_value_mask                         0x2
#define S09C1_clear_mask                         0xFD

#define S10C1                                    0x2
#define S10C1_address                            0xF6D
#define S10C1_position                           0x2
#define S10C1_size                               0x1
#define S10C1_value_mask                         0x4
#define S10C1_clear_mask                         0xFB

#define S11C1                                    0x3
#define S11C1_address                            0xF6D
#define S11C1_position                           0x3
#define S11C1_size                               0x1
#define S11C1_value_mask                         0x8
#define S11C1_clear_mask                         0xF7

#define S12C1                                    0x4
#define S12C1_address                            0xF6D
#define S12C1_position                           0x4
#define S12C1_size                               0x1
#define S12C1_value_mask                         0x10
#define S12C1_clear_mask                         0xEF

#define S13C1                                    0x5
#define S13C1_address                            0xF6D
#define S13C1_position                           0x5
#define S13C1_size                               0x1
#define S13C1_value_mask                         0x20
#define S13C1_clear_mask                         0xDF

#define S14C1                                    0x6
#define S14C1_address                            0xF6D
#define S14C1_position                           0x6
#define S14C1_size                               0x1
#define S14C1_value_mask                         0x40
#define S14C1_clear_mask                         0xBF

#define S15C1                                    0x7
#define S15C1_address                            0xF6D
#define S15C1_position                           0x7
#define S15C1_size                               0x1
#define S15C1_value_mask                         0x80
#define S15C1_clear_mask                         0x7F


/*--------------------------------------------------------------#
| LCDDATA8                                                0xF6E |
#---------------------------------------------------------------#
| S23C1 | S22C1 | S21C1 | S20C1 | S19C1 | S18C1 | S17C1 | S16C1 |
#---------------------------------------------------------------#
| 7     | 6     | 5     | 4     | 3     | 2     | 1     | 0     |
#--------------------------------------------------------------*/

#define LCDDATA8                                 0x0
#define LCDDATA8_address                         0xF6E
#define LCDDATA8_position                        0x0
#define LCDDATA8_size                            0x8
#define LCDDATA8_value_mask                      0xFF
#define LCDDATA8_clear_mask                      0x0

#define S16C1                                    0x0
#define S16C1_address                            0xF6E
#define S16C1_position                           0x0
#define S16C1_size                               0x1
#define S16C1_value_mask                         0x1
#define S16C1_clear_mask                         0xFE

#define S17C1                                    0x1
#define S17C1_address                            0xF6E
#define S17C1_position                           0x1
#define S17C1_size                               0x1
#define S17C1_value_mask                         0x2
#define S17C1_clear_mask                         0xFD

#define S18C1                                    0x2
#define S18C1_address                            0xF6E
#define S18C1_position                           0x2
#define S18C1_size                               0x1
#define S18C1_value_mask                         0x4
#define S18C1_clear_mask                         0xFB

#define S19C1                                    0x3
#define S19C1_address                            0xF6E
#define S19C1_position                           0x3
#define S19C1_size                               0x1
#define S19C1_value_mask                         0x8
#define S19C1_clear_mask                         0xF7

#define S20C1                                    0x4
#define S20C1_address                            0xF6E
#define S20C1_position                           0x4
#define S20C1_size                               0x1
#define S20C1_value_mask                         0x10
#define S20C1_clear_mask                         0xEF

#define S21C1                                    0x5
#define S21C1_address                            0xF6E
#define S21C1_position                           0x5
#define S21C1_size                               0x1
#define S21C1_value_mask                         0x20
#define S21C1_clear_mask                         0xDF

#define S22C1                                    0x6
#define S22C1_address                            0xF6E
#define S22C1_position                           0x6
#define S22C1_size                               0x1
#define S22C1_value_mask                         0x40
#define S22C1_clear_mask                         0xBF

#define S23C1                                    0x7
#define S23C1_address                            0xF6E
#define S23C1_position                           0x7
#define S23C1_size                               0x1
#define S23C1_value_mask                         0x80
#define S23C1_clear_mask                         0x7F


/*--------------------------------------------------------------#
| LCDDATA9                                                0xF6F |
#---------------------------------------------------------------#
| S31C1 | S30C1 | S29C1 | S28C1 | S27C1 | S26C1 | S25C1 | S24C1 |
#---------------------------------------------------------------#
| 7     | 6     | 5     | 4     | 3     | 2     | 1     | 0     |
#--------------------------------------------------------------*/

#define LCDDATA9                                 0x0
#define LCDDATA9_address                         0xF6F
#define LCDDATA9_position                        0x0
#define LCDDATA9_size                            0x8
#define LCDDATA9_value_mask                      0xFF
#define LCDDATA9_clear_mask                      0x0

#define S24C1                                    0x0
#define S24C1_address                            0xF6F
#define S24C1_position                           0x0
#define S24C1_size                               0x1
#define S24C1_value_mask                         0x1
#define S24C1_clear_mask                         0xFE

#define S25C1                                    0x1
#define S25C1_address                            0xF6F
#define S25C1_position                           0x1
#define S25C1_size                               0x1
#define S25C1_value_mask                         0x2
#define S25C1_clear_mask                         0xFD

#define S26C1                                    0x2
#define S26C1_address                            0xF6F
#define S26C1_position                           0x2
#define S26C1_size                               0x1
#define S26C1_value_mask                         0x4
#define S26C1_clear_mask                         0xFB

#define S27C1                                    0x3
#define S27C1_address                            0xF6F
#define S27C1_position                           0x3
#define S27C1_size                               0x1
#define S27C1_value_mask                         0x8
#define S27C1_clear_mask                         0xF7

#define S28C1                                    0x4
#define S28C1_address                            0xF6F
#define S28C1_position                           0x4
#define S28C1_size                               0x1
#define S28C1_value_mask                         0x10
#define S28C1_clear_mask                         0xEF

#define S29C1                                    0x5
#define S29C1_address                            0xF6F
#define S29C1_position                           0x5
#define S29C1_size                               0x1
#define S29C1_value_mask                         0x20
#define S29C1_clear_mask                         0xDF

#define S30C1                                    0x6
#define S30C1_address                            0xF6F
#define S30C1_position                           0x6
#define S30C1_size                               0x1
#define S30C1_value_mask                         0x40
#define S30C1_clear_mask                         0xBF

#define S31C1                                    0x7
#define S31C1_address                            0xF6F
#define S31C1_position                           0x7
#define S31C1_size                               0x1
#define S31C1_value_mask                         0x80
#define S31C1_clear_mask                         0x7F


/*----------------------------------#
| LCDDATA10                   0xF70 |
#-----------------------------------#
| - | - | - | - | - | - | - | S32C1 |
#-----------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0     |
#----------------------------------*/

#define LCDDATA10                                0x0
#define LCDDATA10_address                        0xF70
#define LCDDATA10_position                       0x0
#define LCDDATA10_size                           0x8
#define LCDDATA10_value_mask                     0xFF
#define LCDDATA10_clear_mask                     0x0

#define S32C1                                    0x0
#define S32C1_address                            0xF70
#define S32C1_position                           0x0
#define S32C1_size                               0x1
#define S32C1_value_mask                         0x1
#define S32C1_clear_mask                         0xFE


/*------------------------------------------------------------------#
| LCDDATA12                                                   0xF72 |
#-------------------------------------------------------------------#
| S07C2 | S06C2 | S05C2 | S04C2 | S03C2 | SSPM212 | S01C2 | SSPM012 |
#-------------------------------------------------------------------#
| 7     | 6     | 5     | 4     | 3     | 2       | 1     | 0       |
#------------------------------------------------------------------*/

#define LCDDATA12                                0x0
#define LCDDATA12_address                        0xF72
#define LCDDATA12_position                       0x0
#define LCDDATA12_size                           0x8
#define LCDDATA12_value_mask                     0xFF
#define LCDDATA12_clear_mask                     0x0

#define SSPM012                                  0x0
#define SSPM012_address                          0xF72
#define SSPM012_position                         0x0
#define SSPM012_size                             0x1
#define SSPM012_value_mask                       0x1
#define SSPM012_clear_mask                       0xFE

#define S00C2                                    0x0
#define S00C2_address                            0xF72
#define S00C2_position                           0x0
#define S00C2_size                               0x1
#define S00C2_value_mask                         0x1
#define S00C2_clear_mask                         0xFE

#define S01C2                                    0x1
#define S01C2_address                            0xF72
#define S01C2_position                           0x1
#define S01C2_size                               0x1
#define S01C2_value_mask                         0x2
#define S01C2_clear_mask                         0xFD

#define SSPM112                                  0x1
#define SSPM112_address                          0xF72
#define SSPM112_position                         0x1
#define SSPM112_size                             0x1
#define SSPM112_value_mask                       0x2
#define SSPM112_clear_mask                       0xFD

#define SSPM212                                  0x2
#define SSPM212_address                          0xF72
#define SSPM212_position                         0x2
#define SSPM212_size                             0x1
#define SSPM212_value_mask                       0x4
#define SSPM212_clear_mask                       0xFB

#define S02C2                                    0x2
#define S02C2_address                            0xF72
#define S02C2_position                           0x2
#define S02C2_size                               0x1
#define S02C2_value_mask                         0x4
#define S02C2_clear_mask                         0xFB

#define S03C2                                    0x3
#define S03C2_address                            0xF72
#define S03C2_position                           0x3
#define S03C2_size                               0x1
#define S03C2_value_mask                         0x8
#define S03C2_clear_mask                         0xF7

#define SSPM312                                  0x3
#define SSPM312_address                          0xF72
#define SSPM312_position                         0x3
#define SSPM312_size                             0x1
#define SSPM312_value_mask                       0x8
#define SSPM312_clear_mask                       0xF7

#define S04C2                                    0x4
#define S04C2_address                            0xF72
#define S04C2_position                           0x4
#define S04C2_size                               0x1
#define S04C2_value_mask                         0x10
#define S04C2_clear_mask                         0xEF

#define S05C2                                    0x5
#define S05C2_address                            0xF72
#define S05C2_position                           0x5
#define S05C2_size                               0x1
#define S05C2_value_mask                         0x20
#define S05C2_clear_mask                         0xDF

#define S06C2                                    0x6
#define S06C2_address                            0xF72
#define S06C2_position                           0x6
#define S06C2_size                               0x1
#define S06C2_value_mask                         0x40
#define S06C2_clear_mask                         0xBF

#define S07C2                                    0x7
#define S07C2_address                            0xF72
#define S07C2_position                           0x7
#define S07C2_size                               0x1
#define S07C2_value_mask                         0x80
#define S07C2_clear_mask                         0x7F


/*--------------------------------------------------------------#
| LCDDATA13                                               0xF73 |
#---------------------------------------------------------------#
| S15C2 | S14C2 | S13C2 | S12C2 | S11C2 | S10C2 | S09C2 | S08C2 |
#---------------------------------------------------------------#
| 7     | 6     | 5     | 4     | 3     | 2     | 1     | 0     |
#--------------------------------------------------------------*/

#define LCDDATA13                                0x0
#define LCDDATA13_address                        0xF73
#define LCDDATA13_position                       0x0
#define LCDDATA13_size                           0x8
#define LCDDATA13_value_mask                     0xFF
#define LCDDATA13_clear_mask                     0x0

#define S08C2                                    0x0
#define S08C2_address                            0xF73
#define S08C2_position                           0x0
#define S08C2_size                               0x1
#define S08C2_value_mask                         0x1
#define S08C2_clear_mask                         0xFE

#define S09C2                                    0x1
#define S09C2_address                            0xF73
#define S09C2_position                           0x1
#define S09C2_size                               0x1
#define S09C2_value_mask                         0x2
#define S09C2_clear_mask                         0xFD

#define S10C2                                    0x2
#define S10C2_address                            0xF73
#define S10C2_position                           0x2
#define S10C2_size                               0x1
#define S10C2_value_mask                         0x4
#define S10C2_clear_mask                         0xFB

#define S11C2                                    0x3
#define S11C2_address                            0xF73
#define S11C2_position                           0x3
#define S11C2_size                               0x1
#define S11C2_value_mask                         0x8
#define S11C2_clear_mask                         0xF7

#define S12C2                                    0x4
#define S12C2_address                            0xF73
#define S12C2_position                           0x4
#define S12C2_size                               0x1
#define S12C2_value_mask                         0x10
#define S12C2_clear_mask                         0xEF

#define S13C2                                    0x5
#define S13C2_address                            0xF73
#define S13C2_position                           0x5
#define S13C2_size                               0x1
#define S13C2_value_mask                         0x20
#define S13C2_clear_mask                         0xDF

#define S14C2                                    0x6
#define S14C2_address                            0xF73
#define S14C2_position                           0x6
#define S14C2_size                               0x1
#define S14C2_value_mask                         0x40
#define S14C2_clear_mask                         0xBF

#define S15C2                                    0x7
#define S15C2_address                            0xF73
#define S15C2_position                           0x7
#define S15C2_size                               0x1
#define S15C2_value_mask                         0x80
#define S15C2_clear_mask                         0x7F


/*--------------------------------------------------------------#
| LCDDATA14                                               0xF74 |
#---------------------------------------------------------------#
| S23C2 | S22C2 | S21C2 | S20C2 | S19C2 | S18C2 | S17C2 | S16C2 |
#---------------------------------------------------------------#
| 7     | 6     | 5     | 4     | 3     | 2     | 1     | 0     |
#--------------------------------------------------------------*/

#define LCDDATA14                                0x0
#define LCDDATA14_address                        0xF74
#define LCDDATA14_position                       0x0
#define LCDDATA14_size                           0x8
#define LCDDATA14_value_mask                     0xFF
#define LCDDATA14_clear_mask                     0x0

#define LCDDATA14_MSK0                           0x0
#define LCDDATA14_MSK0_address                   0xF74
#define LCDDATA14_MSK0_position                  0x0
#define LCDDATA14_MSK0_size                      0x1
#define LCDDATA14_MSK0_value_mask                0x1
#define LCDDATA14_MSK0_clear_mask                0xFE

#define S16C2                                    0x0
#define S16C2_address                            0xF74
#define S16C2_position                           0x0
#define S16C2_size                               0x1
#define S16C2_value_mask                         0x1
#define S16C2_clear_mask                         0xFE

#define LCDDATA14_MSK1                           0x1
#define LCDDATA14_MSK1_address                   0xF74
#define LCDDATA14_MSK1_position                  0x1
#define LCDDATA14_MSK1_size                      0x1
#define LCDDATA14_MSK1_value_mask                0x2
#define LCDDATA14_MSK1_clear_mask                0xFD

#define S17C2                                    0x1
#define S17C2_address                            0xF74
#define S17C2_position                           0x1
#define S17C2_size                               0x1
#define S17C2_value_mask                         0x2
#define S17C2_clear_mask                         0xFD

#define LCDDATA14_MSK2                           0x2
#define LCDDATA14_MSK2_address                   0xF74
#define LCDDATA14_MSK2_position                  0x2
#define LCDDATA14_MSK2_size                      0x1
#define LCDDATA14_MSK2_value_mask                0x4
#define LCDDATA14_MSK2_clear_mask                0xFB

#define S18C2                                    0x2
#define S18C2_address                            0xF74
#define S18C2_position                           0x2
#define S18C2_size                               0x1
#define S18C2_value_mask                         0x4
#define S18C2_clear_mask                         0xFB

#define S19C2                                    0x3
#define S19C2_address                            0xF74
#define S19C2_position                           0x3
#define S19C2_size                               0x1
#define S19C2_value_mask                         0x8
#define S19C2_clear_mask                         0xF7

#define LCDDATA14_MSK3                           0x3
#define LCDDATA14_MSK3_address                   0xF74
#define LCDDATA14_MSK3_position                  0x3
#define LCDDATA14_MSK3_size                      0x1
#define LCDDATA14_MSK3_value_mask                0x8
#define LCDDATA14_MSK3_clear_mask                0xF7

#define LCDDATA14_MSK4                           0x4
#define LCDDATA14_MSK4_address                   0xF74
#define LCDDATA14_MSK4_position                  0x4
#define LCDDATA14_MSK4_size                      0x1
#define LCDDATA14_MSK4_value_mask                0x10
#define LCDDATA14_MSK4_clear_mask                0xEF

#define S20C2                                    0x4
#define S20C2_address                            0xF74
#define S20C2_position                           0x4
#define S20C2_size                               0x1
#define S20C2_value_mask                         0x10
#define S20C2_clear_mask                         0xEF

#define LCDDATA14_MSK5                           0x5
#define LCDDATA14_MSK5_address                   0xF74
#define LCDDATA14_MSK5_position                  0x5
#define LCDDATA14_MSK5_size                      0x1
#define LCDDATA14_MSK5_value_mask                0x20
#define LCDDATA14_MSK5_clear_mask                0xDF

#define S21C2                                    0x5
#define S21C2_address                            0xF74
#define S21C2_position                           0x5
#define S21C2_size                               0x1
#define S21C2_value_mask                         0x20
#define S21C2_clear_mask                         0xDF

#define LCDDATA14_MSK6                           0x6
#define LCDDATA14_MSK6_address                   0xF74
#define LCDDATA14_MSK6_position                  0x6
#define LCDDATA14_MSK6_size                      0x1
#define LCDDATA14_MSK6_value_mask                0x40
#define LCDDATA14_MSK6_clear_mask                0xBF

#define S22C2                                    0x6
#define S22C2_address                            0xF74
#define S22C2_position                           0x6
#define S22C2_size                               0x1
#define S22C2_value_mask                         0x40
#define S22C2_clear_mask                         0xBF

#define LCDDATA14_MSK7                           0x7
#define LCDDATA14_MSK7_address                   0xF74
#define LCDDATA14_MSK7_position                  0x7
#define LCDDATA14_MSK7_size                      0x1
#define LCDDATA14_MSK7_value_mask                0x80
#define LCDDATA14_MSK7_clear_mask                0x7F

#define S23C2                                    0x7
#define S23C2_address                            0xF74
#define S23C2_position                           0x7
#define S23C2_size                               0x1
#define S23C2_value_mask                         0x80
#define S23C2_clear_mask                         0x7F


/*--------------------------------------------------------------#
| LCDDATA15                                               0xF75 |
#---------------------------------------------------------------#
| S31C2 | S30C2 | S29C2 | S28C2 | S27C2 | S26C2 | S25C2 | S24C2 |
#---------------------------------------------------------------#
| 7     | 6     | 5     | 4     | 3     | 2     | 1     | 0     |
#--------------------------------------------------------------*/

#define LCDDATA15                                0x0
#define LCDDATA15_address                        0xF75
#define LCDDATA15_position                       0x0
#define LCDDATA15_size                           0x8
#define LCDDATA15_value_mask                     0xFF
#define LCDDATA15_clear_mask                     0x0

#define S24C2                                    0x0
#define S24C2_address                            0xF75
#define S24C2_position                           0x0
#define S24C2_size                               0x1
#define S24C2_value_mask                         0x1
#define S24C2_clear_mask                         0xFE

#define S25C2                                    0x1
#define S25C2_address                            0xF75
#define S25C2_position                           0x1
#define S25C2_size                               0x1
#define S25C2_value_mask                         0x2
#define S25C2_clear_mask                         0xFD

#define S26C2                                    0x2
#define S26C2_address                            0xF75
#define S26C2_position                           0x2
#define S26C2_size                               0x1
#define S26C2_value_mask                         0x4
#define S26C2_clear_mask                         0xFB

#define S27C2                                    0x3
#define S27C2_address                            0xF75
#define S27C2_position                           0x3
#define S27C2_size                               0x1
#define S27C2_value_mask                         0x8
#define S27C2_clear_mask                         0xF7

#define S28C2                                    0x4
#define S28C2_address                            0xF75
#define S28C2_position                           0x4
#define S28C2_size                               0x1
#define S28C2_value_mask                         0x10
#define S28C2_clear_mask                         0xEF

#define S29C2                                    0x5
#define S29C2_address                            0xF75
#define S29C2_position                           0x5
#define S29C2_size                               0x1
#define S29C2_value_mask                         0x20
#define S29C2_clear_mask                         0xDF

#define S30C2                                    0x6
#define S30C2_address                            0xF75
#define S30C2_position                           0x6
#define S30C2_size                               0x1
#define S30C2_value_mask                         0x40
#define S30C2_clear_mask                         0xBF

#define S31C2                                    0x7
#define S31C2_address                            0xF75
#define S31C2_position                           0x7
#define S31C2_size                               0x1
#define S31C2_value_mask                         0x80
#define S31C2_clear_mask                         0x7F


/*----------------------------------#
| LCDDATA16                   0xF76 |
#-----------------------------------#
| - | - | - | - | - | - | - | S32C2 |
#-----------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0     |
#----------------------------------*/

#define LCDDATA16                                0x0
#define LCDDATA16_address                        0xF76
#define LCDDATA16_position                       0x0
#define LCDDATA16_size                           0x8
#define LCDDATA16_value_mask                     0xFF
#define LCDDATA16_clear_mask                     0x0

#define S32C2                                    0x0
#define S32C2_address                            0xF76
#define S32C2_position                           0x0
#define S32C2_size                               0x1
#define S32C2_value_mask                         0x1
#define S32C2_clear_mask                         0xFE

#define T4CKPS016                                0x0
#define T4CKPS016_address                        0xF76
#define T4CKPS016_position                       0x0
#define T4CKPS016_size                           0x1
#define T4CKPS016_value_mask                     0x1
#define T4CKPS016_clear_mask                     0xFE


/*--------------------------------------------------------------#
| LCDDATA18                                               0xF78 |
#---------------------------------------------------------------#
| S07C3 | S06C3 | S05C3 | S04C3 | S03C3 | S02C3 | S01C3 | S00C3 |
#---------------------------------------------------------------#
| 7     | 6     | 5     | 4     | 3     | 2     | 1     | 0     |
#--------------------------------------------------------------*/

#define LCDDATA18                                0x0
#define LCDDATA18_address                        0xF78
#define LCDDATA18_position                       0x0
#define LCDDATA18_size                           0x8
#define LCDDATA18_value_mask                     0xFF
#define LCDDATA18_clear_mask                     0x0

#define S00C3                                    0x0
#define S00C3_address                            0xF78
#define S00C3_position                           0x0
#define S00C3_size                               0x1
#define S00C3_value_mask                         0x1
#define S00C3_clear_mask                         0xFE

#define S01C3                                    0x1
#define S01C3_address                            0xF78
#define S01C3_position                           0x1
#define S01C3_size                               0x1
#define S01C3_value_mask                         0x2
#define S01C3_clear_mask                         0xFD

#define S02C3                                    0x2
#define S02C3_address                            0xF78
#define S02C3_position                           0x2
#define S02C3_size                               0x1
#define S02C3_value_mask                         0x4
#define S02C3_clear_mask                         0xFB

#define S03C3                                    0x3
#define S03C3_address                            0xF78
#define S03C3_position                           0x3
#define S03C3_size                               0x1
#define S03C3_value_mask                         0x8
#define S03C3_clear_mask                         0xF7

#define S04C3                                    0x4
#define S04C3_address                            0xF78
#define S04C3_position                           0x4
#define S04C3_size                               0x1
#define S04C3_value_mask                         0x10
#define S04C3_clear_mask                         0xEF

#define S05C3                                    0x5
#define S05C3_address                            0xF78
#define S05C3_position                           0x5
#define S05C3_size                               0x1
#define S05C3_value_mask                         0x20
#define S05C3_clear_mask                         0xDF

#define S06C3                                    0x6
#define S06C3_address                            0xF78
#define S06C3_position                           0x6
#define S06C3_size                               0x1
#define S06C3_value_mask                         0x40
#define S06C3_clear_mask                         0xBF

#define S07C3                                    0x7
#define S07C3_address                            0xF78
#define S07C3_position                           0x7
#define S07C3_size                               0x1
#define S07C3_value_mask                         0x80
#define S07C3_clear_mask                         0x7F


/*----------------------------------------------------------------------#
| LCDDATA19                                                       0xF79 |
#-----------------------------------------------------------------------#
| TMR3CS119 | S14C3 | T3CKPS119 | S12C3 | S11C3 | S10C3 | S09C3 | S08C3 |
#-----------------------------------------------------------------------#
| 7         | 6     | 5         | 4     | 3     | 2     | 1     | 0     |
#----------------------------------------------------------------------*/

#define LCDDATA19                                0x0
#define LCDDATA19_address                        0xF79
#define LCDDATA19_position                       0x0
#define LCDDATA19_size                           0x8
#define LCDDATA19_value_mask                     0xFF
#define LCDDATA19_clear_mask                     0x0

#define S08C3                                    0x0
#define S08C3_address                            0xF79
#define S08C3_position                           0x0
#define S08C3_size                               0x1
#define S08C3_value_mask                         0x1
#define S08C3_clear_mask                         0xFE

#define S09C3                                    0x1
#define S09C3_address                            0xF79
#define S09C3_position                           0x1
#define S09C3_size                               0x1
#define S09C3_value_mask                         0x2
#define S09C3_clear_mask                         0xFD

#define S10C3                                    0x2
#define S10C3_address                            0xF79
#define S10C3_position                           0x2
#define S10C3_size                               0x1
#define S10C3_value_mask                         0x4
#define S10C3_clear_mask                         0xFB

#define S11C3                                    0x3
#define S11C3_address                            0xF79
#define S11C3_position                           0x3
#define S11C3_size                               0x1
#define S11C3_value_mask                         0x8
#define S11C3_clear_mask                         0xF7

#define S12C3                                    0x4
#define S12C3_address                            0xF79
#define S12C3_position                           0x4
#define S12C3_size                               0x1
#define S12C3_value_mask                         0x10
#define S12C3_clear_mask                         0xEF

#define T3CKPS019                                0x4
#define T3CKPS019_address                        0xF79
#define T3CKPS019_position                       0x4
#define T3CKPS019_size                           0x1
#define T3CKPS019_value_mask                     0x10
#define T3CKPS019_clear_mask                     0xEF

#define T3CKPS119                                0x5
#define T3CKPS119_address                        0xF79
#define T3CKPS119_position                       0x5
#define T3CKPS119_size                           0x1
#define T3CKPS119_value_mask                     0x20
#define T3CKPS119_clear_mask                     0xDF

#define S13C3                                    0x5
#define S13C3_address                            0xF79
#define S13C3_position                           0x5
#define S13C3_size                               0x1
#define S13C3_value_mask                         0x20
#define S13C3_clear_mask                         0xDF

#define S14C3                                    0x6
#define S14C3_address                            0xF79
#define S14C3_position                           0x6
#define S14C3_size                               0x1
#define S14C3_value_mask                         0x40
#define S14C3_clear_mask                         0xBF

#define TMR3CS019                                0x6
#define TMR3CS019_address                        0xF79
#define TMR3CS019_position                       0x6
#define TMR3CS019_size                           0x1
#define TMR3CS019_value_mask                     0x40
#define TMR3CS019_clear_mask                     0xBF

#define TMR3CS119                                0x7
#define TMR3CS119_address                        0xF79
#define TMR3CS119_position                       0x7
#define TMR3CS119_size                           0x1
#define TMR3CS119_value_mask                     0x80
#define TMR3CS119_clear_mask                     0x7F

#define S15C3                                    0x7
#define S15C3_address                            0xF79
#define S15C3_position                           0x7
#define S15C3_size                               0x1
#define S15C3_value_mask                         0x80
#define S15C3_clear_mask                         0x7F


/*--------------------------------------------------------------#
| LCDDATA20                                               0xF7A |
#---------------------------------------------------------------#
| S23C3 | S22C3 | S21C3 | S20C3 | S19C3 | S18C3 | S17C3 | S16C3 |
#---------------------------------------------------------------#
| 7     | 6     | 5     | 4     | 3     | 2     | 1     | 0     |
#--------------------------------------------------------------*/

#define LCDDATA20                                0x0
#define LCDDATA20_address                        0xF7A
#define LCDDATA20_position                       0x0
#define LCDDATA20_size                           0x8
#define LCDDATA20_value_mask                     0xFF
#define LCDDATA20_clear_mask                     0x0

#define S16C3                                    0x0
#define S16C3_address                            0xF7A
#define S16C3_position                           0x0
#define S16C3_size                               0x1
#define S16C3_value_mask                         0x1
#define S16C3_clear_mask                         0xFE

#define S17C3                                    0x1
#define S17C3_address                            0xF7A
#define S17C3_position                           0x1
#define S17C3_size                               0x1
#define S17C3_value_mask                         0x2
#define S17C3_clear_mask                         0xFD

#define S18C3                                    0x2
#define S18C3_address                            0xF7A
#define S18C3_position                           0x2
#define S18C3_size                               0x1
#define S18C3_value_mask                         0x4
#define S18C3_clear_mask                         0xFB

#define S19C3                                    0x3
#define S19C3_address                            0xF7A
#define S19C3_position                           0x3
#define S19C3_size                               0x1
#define S19C3_value_mask                         0x8
#define S19C3_clear_mask                         0xF7

#define S20C3                                    0x4
#define S20C3_address                            0xF7A
#define S20C3_position                           0x4
#define S20C3_size                               0x1
#define S20C3_value_mask                         0x10
#define S20C3_clear_mask                         0xEF

#define S21C3                                    0x5
#define S21C3_address                            0xF7A
#define S21C3_position                           0x5
#define S21C3_size                               0x1
#define S21C3_value_mask                         0x20
#define S21C3_clear_mask                         0xDF

#define S22C3                                    0x6
#define S22C3_address                            0xF7A
#define S22C3_position                           0x6
#define S22C3_size                               0x1
#define S22C3_value_mask                         0x40
#define S22C3_clear_mask                         0xBF

#define S23C3                                    0x7
#define S23C3_address                            0xF7A
#define S23C3_position                           0x7
#define S23C3_size                               0x1
#define S23C3_value_mask                         0x80
#define S23C3_clear_mask                         0x7F


/*--------------------------------------------------------------#
| LCDDATA21                                               0xF7B |
#---------------------------------------------------------------#
| S31C3 | S30C3 | S29C3 | S28C3 | S27C3 | S26C3 | S25C3 | S24C3 |
#---------------------------------------------------------------#
| 7     | 6     | 5     | 4     | 3     | 2     | 1     | 0     |
#--------------------------------------------------------------*/

#define LCDDATA21                                0x0
#define LCDDATA21_address                        0xF7B
#define LCDDATA21_position                       0x0
#define LCDDATA21_size                           0x8
#define LCDDATA21_value_mask                     0xFF
#define LCDDATA21_clear_mask                     0x0

#define S24C3                                    0x0
#define S24C3_address                            0xF7B
#define S24C3_position                           0x0
#define S24C3_size                               0x1
#define S24C3_value_mask                         0x1
#define S24C3_clear_mask                         0xFE

#define S25C3                                    0x1
#define S25C3_address                            0xF7B
#define S25C3_position                           0x1
#define S25C3_size                               0x1
#define S25C3_value_mask                         0x2
#define S25C3_clear_mask                         0xFD

#define S26C3                                    0x2
#define S26C3_address                            0xF7B
#define S26C3_position                           0x2
#define S26C3_size                               0x1
#define S26C3_value_mask                         0x4
#define S26C3_clear_mask                         0xFB

#define S27C3                                    0x3
#define S27C3_address                            0xF7B
#define S27C3_position                           0x3
#define S27C3_size                               0x1
#define S27C3_value_mask                         0x8
#define S27C3_clear_mask                         0xF7

#define S28C3                                    0x4
#define S28C3_address                            0xF7B
#define S28C3_position                           0x4
#define S28C3_size                               0x1
#define S28C3_value_mask                         0x10
#define S28C3_clear_mask                         0xEF

#define S29C3                                    0x5
#define S29C3_address                            0xF7B
#define S29C3_position                           0x5
#define S29C3_size                               0x1
#define S29C3_value_mask                         0x20
#define S29C3_clear_mask                         0xDF

#define S30C3                                    0x6
#define S30C3_address                            0xF7B
#define S30C3_position                           0x6
#define S30C3_size                               0x1
#define S30C3_value_mask                         0x40
#define S30C3_clear_mask                         0xBF

#define S31C3                                    0x7
#define S31C3_address                            0xF7B
#define S31C3_position                           0x7
#define S31C3_size                               0x1
#define S31C3_value_mask                         0x80
#define S31C3_clear_mask                         0x7F


/*----------------------------------#
| LCDDATA22                   0xF7C |
#-----------------------------------#
| - | - | - | - | - | - | - | S32C3 |
#-----------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0     |
#----------------------------------*/

#define LCDDATA22                                0x0
#define LCDDATA22_address                        0xF7C
#define LCDDATA22_position                       0x0
#define LCDDATA22_size                           0x8
#define LCDDATA22_value_mask                     0xFF
#define LCDDATA22_clear_mask                     0x0

#define S32C3                                    0x0
#define S32C3_address                            0xF7C
#define S32C3_position                           0x0
#define S32C3_size                               0x1
#define S32C3_value_mask                         0x1
#define S32C3_clear_mask                         0xFE


/*------------------------------#
| EECON2                  0xF7E |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define EECON2                                   0x0
#define EECON2_address                           0xF7E
#define EECON2_position                          0x0
#define EECON2_size                              0x8
#define EECON2_value_mask                        0xFF
#define EECON2_clear_mask                        0x0


/*---------------------------------------------------------------#
| EECON1                                                   0xF7F |
#----------------------------------------------------------------#
| EEPGD | CFGS | - | FREE | WRERR | WREN | EECON1_WR | EECON1_RD |
#----------------------------------------------------------------#
| 7     | 6    | 5 | 4    | 3     | 2    | 1         | 0         |
#---------------------------------------------------------------*/

#define EECON1                                   0x0
#define EECON1_address                           0xF7F
#define EECON1_position                          0x0
#define EECON1_size                              0x8
#define EECON1_value_mask                        0xFF
#define EECON1_clear_mask                        0x0

#define EECON1_RD                                0x0
#define EECON1_RD_address                        0xF7F
#define EECON1_RD_position                       0x0
#define EECON1_RD_size                           0x1
#define EECON1_RD_value_mask                     0x1
#define EECON1_RD_clear_mask                     0xFE

#define EECON1_WR                                0x1
#define EECON1_WR_address                        0xF7F
#define EECON1_WR_position                       0x1
#define EECON1_WR_size                           0x1
#define EECON1_WR_value_mask                     0x2
#define EECON1_WR_clear_mask                     0xFD

#define WREN                                     0x2
#define WREN_address                             0xF7F
#define WREN_position                            0x2
#define WREN_size                                0x1
#define WREN_value_mask                          0x4
#define WREN_clear_mask                          0xFB

#define WRERR                                    0x3
#define WRERR_address                            0xF7F
#define WRERR_position                           0x3
#define WRERR_size                               0x1
#define WRERR_value_mask                         0x8
#define WRERR_clear_mask                         0xF7

#define FREE                                     0x4
#define FREE_address                             0xF7F
#define FREE_position                            0x4
#define FREE_size                                0x1
#define FREE_value_mask                          0x10
#define FREE_clear_mask                          0xEF

#define CFGS                                     0x6
#define CFGS_address                             0xF7F
#define CFGS_position                            0x6
#define CFGS_size                                0x1
#define CFGS_value_mask                          0x40
#define CFGS_clear_mask                          0xBF

#define EEFS                                     0x6
#define EEFS_address                             0xF7F
#define EEFS_position                            0x6
#define EEFS_size                                0x1
#define EEFS_value_mask                          0x40
#define EEFS_clear_mask                          0xBF

#define EEPGD                                    0x7
#define EEPGD_address                            0xF7F
#define EEPGD_position                           0x7
#define EEPGD_size                               0x1
#define EEPGD_value_mask                         0x80
#define EEPGD_clear_mask                         0x7F


/*----------------------------------------------------------#
| PORTA                                               0xF80 |
#-----------------------------------------------------------#
| CLKI | CLKO | SEG15 | SEG14 | AN3 | AN2 | SEG18 | ULPWUIN |
#-----------------------------------------------------------#
| 7    | 6    | 5     | 4     | 3   | 2   | 1     | 0       |
#----------------------------------------------------------*/

#define PORTA                                    0x0
#define PORTA_address                            0xF80
#define PORTA_position                           0x0
#define PORTA_size                               0x8
#define PORTA_value_mask                         0xFF
#define PORTA_clear_mask                         0x0

#define ULPWUIN                                  0x0
#define ULPWUIN_address                          0xF80
#define ULPWUIN_position                         0x0
#define ULPWUIN_size                             0x1
#define ULPWUIN_value_mask                       0x1
#define ULPWUIN_clear_mask                       0xFE

#define AN0                                      0x0
#define AN0_address                              0xF80
#define AN0_position                             0x0
#define AN0_size                                 0x1
#define AN0_value_mask                           0x1
#define AN0_clear_mask                           0xFE

#define RA0                                      0x0
#define RA0_address                              0xF80
#define RA0_position                             0x0
#define RA0_size                                 0x1
#define RA0_value_mask                           0x1
#define RA0_clear_mask                           0xFE

#define SEG18                                    0x1
#define SEG18_address                            0xF80
#define SEG18_position                           0x1
#define SEG18_size                               0x1
#define SEG18_value_mask                         0x2
#define SEG18_clear_mask                         0xFD

#define AN1                                      0x1
#define AN1_address                              0xF80
#define AN1_position                             0x1
#define AN1_size                                 0x1
#define AN1_value_mask                           0x2
#define AN1_clear_mask                           0xFD

#define RA1                                      0x1
#define RA1_address                              0xF80
#define RA1_position                             0x1
#define RA1_size                                 0x1
#define RA1_value_mask                           0x2
#define RA1_clear_mask                           0xFD

#define AN2                                      0x2
#define AN2_address                              0xF80
#define AN2_position                             0x2
#define AN2_size                                 0x1
#define AN2_value_mask                           0x4
#define AN2_clear_mask                           0xFB

#define RA2                                      0x2
#define RA2_address                              0xF80
#define RA2_position                             0x2
#define RA2_size                                 0x1
#define RA2_value_mask                           0x4
#define RA2_clear_mask                           0xFB

#define VREF_MINUS                               0x2
#define VREF_MINUS_address                       0xF80
#define VREF_MINUS_position                      0x2
#define VREF_MINUS_size                          0x1
#define VREF_MINUS_value_mask                    0x4
#define VREF_MINUS_clear_mask                    0xFB

#define AN3                                      0x3
#define AN3_address                              0xF80
#define AN3_position                             0x3
#define AN3_size                                 0x1
#define AN3_value_mask                           0x8
#define AN3_clear_mask                           0xF7

#define VREF_PLUS                                0x3
#define VREF_PLUS_address                        0xF80
#define VREF_PLUS_position                       0x3
#define VREF_PLUS_size                           0x1
#define VREF_PLUS_value_mask                     0x8
#define VREF_PLUS_clear_mask                     0xF7

#define RA3                                      0x3
#define RA3_address                              0xF80
#define RA3_position                             0x3
#define RA3_size                                 0x1
#define RA3_value_mask                           0x8
#define RA3_clear_mask                           0xF7

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

#define RA4                                      0x4
#define RA4_address                              0xF80
#define RA4_position                             0x4
#define RA4_size                                 0x1
#define RA4_value_mask                           0x10
#define RA4_clear_mask                           0xEF

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

#define T1CKI                                    0x5
#define T1CKI_address                            0xF80
#define T1CKI_position                           0x5
#define T1CKI_size                               0x1
#define T1CKI_value_mask                         0x20
#define T1CKI_clear_mask                         0xDF

#define LVDIN                                    0x5
#define LVDIN_address                            0xF80
#define LVDIN_position                           0x5
#define LVDIN_size                               0x1
#define LVDIN_value_mask                         0x20
#define LVDIN_clear_mask                         0xDF

#define RA5                                      0x5
#define RA5_address                              0xF80
#define RA5_position                             0x5
#define RA5_size                                 0x1
#define RA5_value_mask                           0x20
#define RA5_clear_mask                           0xDF

#define T3G                                      0x5
#define T3G_address                              0xF80
#define T3G_position                             0x5
#define T3G_size                                 0x1
#define T3G_value_mask                           0x20
#define T3G_clear_mask                           0xDF

#define CLKO                                     0x6
#define CLKO_address                             0xF80
#define CLKO_position                            0x6
#define CLKO_size                                0x1
#define CLKO_value_mask                          0x40
#define CLKO_clear_mask                          0xBF

#define RA6                                      0x6
#define RA6_address                              0xF80
#define RA6_position                             0x6
#define RA6_size                                 0x1
#define RA6_value_mask                           0x40
#define RA6_clear_mask                           0xBF

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

#define PORTA_RJPU                               0x7
#define PORTA_RJPU_address                       0xF80
#define PORTA_RJPU_position                      0x7
#define PORTA_RJPU_size                          0x1
#define PORTA_RJPU_value_mask                    0x80
#define PORTA_RJPU_clear_mask                    0x7F

#define RA7                                      0x7
#define RA7_address                              0xF80
#define RA7_position                             0x7
#define RA7_size                                 0x1
#define RA7_value_mask                           0x80
#define RA7_clear_mask                           0x7F

#define OSC1                                     0x7
#define OSC1_address                             0xF80
#define OSC1_position                            0x7
#define OSC1_size                                0x1
#define OSC1_value_mask                          0x80
#define OSC1_clear_mask                          0x7F


/*----------------------------------------------------#
| PORTB                                         0xF81 |
#-----------------------------------------------------#
| PGD | PGC | T3CKI | RB4 | SEG10 | RB2 | RB1 | SEG30 |
#-----------------------------------------------------#
| 7   | 6   | 5     | 4   | 3     | 2   | 1   | 0     |
#----------------------------------------------------*/

#define PORTB                                    0x0
#define PORTB_address                            0xF81
#define PORTB_position                           0x0
#define PORTB_size                               0x8
#define PORTB_value_mask                         0xFF
#define PORTB_clear_mask                         0x0

#define SEG30                                    0x0
#define SEG30_address                            0xF81
#define SEG30_position                           0x0
#define SEG30_size                               0x1
#define SEG30_value_mask                         0x1
#define SEG30_clear_mask                         0xFE

#define FLT0                                     0x0
#define FLT0_address                             0xF81
#define FLT0_position                            0x0
#define FLT0_size                                0x1
#define FLT0_value_mask                          0x1
#define FLT0_clear_mask                          0xFE

#define RB0                                      0x0
#define RB0_address                              0xF81
#define RB0_position                             0x0
#define RB0_size                                 0x1
#define RB0_value_mask                           0x1
#define RB0_clear_mask                           0xFE

#define INT0                                     0x0
#define INT0_address                             0xF81
#define INT0_position                            0x0
#define INT0_size                                0x1
#define INT0_value_mask                          0x1
#define INT0_clear_mask                          0xFE

#define RB1                                      0x1
#define RB1_address                              0xF81
#define RB1_position                             0x1
#define RB1_size                                 0x1
#define RB1_value_mask                           0x2
#define RB1_clear_mask                           0xFD

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

#define RB2                                      0x2
#define RB2_address                              0xF81
#define RB2_position                             0x2
#define RB2_size                                 0x1
#define RB2_value_mask                           0x4
#define RB2_clear_mask                           0xFB

#define INT2                                     0x2
#define INT2_address                             0xF81
#define INT2_position                            0x2
#define INT2_size                                0x1
#define INT2_value_mask                          0x4
#define INT2_clear_mask                          0xFB

#define CTED1                                    0x2
#define CTED1_address                            0xF81
#define CTED1_position                           0x2
#define CTED1_size                               0x1
#define CTED1_value_mask                         0x4
#define CTED1_clear_mask                         0xFB

#define SEG9                                     0x2
#define SEG9_address                             0xF81
#define SEG9_position                            0x2
#define SEG9_size                                0x1
#define SEG9_value_mask                          0x4
#define SEG9_clear_mask                          0xFB

#define SEG10                                    0x3
#define SEG10_address                            0xF81
#define SEG10_position                           0x3
#define SEG10_size                               0x1
#define SEG10_value_mask                         0x8
#define SEG10_clear_mask                         0xF7

#define RB3                                      0x3
#define RB3_address                              0xF81
#define RB3_position                             0x3
#define RB3_size                                 0x1
#define RB3_value_mask                           0x8
#define RB3_clear_mask                           0xF7

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

#define CTED2                                    0x3
#define CTED2_address                            0xF81
#define CTED2_position                           0x3
#define CTED2_size                               0x1
#define CTED2_value_mask                         0x8
#define CTED2_clear_mask                         0xF7

#define SEG11                                    0x4
#define SEG11_address                            0xF81
#define SEG11_position                           0x4
#define SEG11_size                               0x1
#define SEG11_value_mask                         0x10
#define SEG11_clear_mask                         0xEF

#define RB4                                      0x4
#define RB4_address                              0xF81
#define RB4_position                             0x4
#define RB4_size                                 0x1
#define RB4_value_mask                           0x10
#define RB4_clear_mask                           0xEF

#define KBI0                                     0x4
#define KBI0_address                             0xF81
#define KBI0_position                            0x4
#define KBI0_size                                0x1
#define KBI0_value_mask                          0x10
#define KBI0_clear_mask                          0xEF

#define PGM                                      0x5
#define PGM_address                              0xF81
#define PGM_position                             0x5
#define PGM_size                                 0x1
#define PGM_value_mask                           0x20
#define PGM_clear_mask                           0xDF

#define T3CKI                                    0x5
#define T3CKI_address                            0xF81
#define T3CKI_position                           0x5
#define T3CKI_size                               0x1
#define T3CKI_value_mask                         0x20
#define T3CKI_clear_mask                         0xDF

#define RB5                                      0x5
#define RB5_address                              0xF81
#define RB5_position                             0x5
#define RB5_size                                 0x1
#define RB5_value_mask                           0x20
#define RB5_clear_mask                           0xDF

#define SEG29                                    0x5
#define SEG29_address                            0xF81
#define SEG29_position                           0x5
#define SEG29_size                               0x1
#define SEG29_value_mask                         0x20
#define SEG29_clear_mask                         0xDF

#define KBI1                                     0x5
#define KBI1_address                             0xF81
#define KBI1_position                            0x5
#define KBI1_size                                0x1
#define KBI1_value_mask                          0x20
#define KBI1_clear_mask                          0xDF

#define T1G                                      0x5
#define T1G_address                              0xF81
#define T1G_position                             0x5
#define T1G_size                                 0x1
#define T1G_value_mask                           0x20
#define T1G_clear_mask                           0xDF

#define PGC                                      0x6
#define PGC_address                              0xF81
#define PGC_position                             0x6
#define PGC_size                                 0x1
#define PGC_value_mask                           0x40
#define PGC_clear_mask                           0xBF

#define RB6                                      0x6
#define RB6_address                              0xF81
#define RB6_position                             0x6
#define RB6_size                                 0x1
#define RB6_value_mask                           0x40
#define RB6_clear_mask                           0xBF

#define KBI2                                     0x6
#define KBI2_address                             0xF81
#define KBI2_position                            0x6
#define KBI2_size                                0x1
#define KBI2_value_mask                          0x40
#define KBI2_clear_mask                          0xBF

#define PGD                                      0x7
#define PGD_address                              0xF81
#define PGD_position                             0x7
#define PGD_size                                 0x1
#define PGD_value_mask                           0x80
#define PGD_clear_mask                           0x7F

#define RB7                                      0x7
#define RB7_address                              0xF81
#define RB7_position                             0x7
#define RB7_size                                 0x1
#define RB7_value_mask                           0x80
#define RB7_clear_mask                           0x7F

#define KBI3                                     0x7
#define KBI3_address                             0xF81
#define KBI3_position                            0x7
#define KBI3_size                                0x1
#define KBI3_value_mask                          0x80
#define KBI3_clear_mask                          0x7F


/*------------------------------------------------------------#
| PORTC                                                 0xF82 |
#-------------------------------------------------------------#
| RX1 | SEG27 | SEG12 | SEG16 | SEG17 | SEG13 | SEG32 | SOSCO |
#-------------------------------------------------------------#
| 7   | 6     | 5     | 4     | 3     | 2     | 1     | 0     |
#------------------------------------------------------------*/

#define PORTC                                    0x0
#define PORTC_address                            0xF82
#define PORTC_position                           0x0
#define PORTC_size                               0x8
#define PORTC_value_mask                         0xFF
#define PORTC_clear_mask                         0x0

#define SCKLI                                    0x0
#define SCKLI_address                            0xF82
#define SCKLI_position                           0x0
#define SCKLI_size                               0x1
#define SCKLI_value_mask                         0x1
#define SCKLI_clear_mask                         0xFE

#define RC0                                      0x0
#define RC0_address                              0xF82
#define RC0_position                             0x0
#define RC0_size                                 0x1
#define RC0_value_mask                           0x1
#define RC0_clear_mask                           0xFE

#define SOSCO                                    0x0
#define SOSCO_address                            0xF82
#define SOSCO_position                           0x0
#define SOSCO_size                               0x1
#define SOSCO_value_mask                         0x1
#define SOSCO_clear_mask                         0xFE

#define SEG32                                    0x1
#define SEG32_address                            0xF82
#define SEG32_position                           0x1
#define SEG32_size                               0x1
#define SEG32_value_mask                         0x2
#define SEG32_clear_mask                         0xFD

#define PORTC_PA2                                0x1
#define PORTC_PA2_address                        0xF82
#define PORTC_PA2_position                       0x1
#define PORTC_PA2_size                           0x1
#define PORTC_PA2_value_mask                     0x2
#define PORTC_PA2_clear_mask                     0xFD

#define PORTC_CCP2                               0x1
#define PORTC_CCP2_address                       0xF82
#define PORTC_CCP2_position                      0x1
#define PORTC_CCP2_size                          0x1
#define PORTC_CCP2_value_mask                    0x2
#define PORTC_CCP2_clear_mask                    0xFD

#define RC1                                      0x1
#define RC1_address                              0xF82
#define RC1_position                             0x1
#define RC1_size                                 0x1
#define RC1_value_mask                           0x2
#define RC1_clear_mask                           0xFD

#define SOSCI                                    0x1
#define SOSCI_address                            0xF82
#define SOSCI_position                           0x1
#define SOSCI_size                               0x1
#define SOSCI_value_mask                         0x2
#define SOSCI_clear_mask                         0xFD

#define SEG13                                    0x2
#define SEG13_address                            0xF82
#define SEG13_position                           0x2
#define SEG13_size                               0x1
#define SEG13_value_mask                         0x4
#define SEG13_clear_mask                         0xFB

#define CCP1                                     0x2
#define CCP1_address                             0xF82
#define CCP1_position                            0x2
#define CCP1_size                                0x1
#define CCP1_value_mask                          0x4
#define CCP1_clear_mask                          0xFB

#define PA1                                      0x2
#define PA1_address                              0xF82
#define PA1_position                             0x2
#define PA1_size                                 0x1
#define PA1_value_mask                           0x4
#define PA1_clear_mask                           0xFB

#define RC2                                      0x2
#define RC2_address                              0xF82
#define RC2_position                             0x2
#define RC2_size                                 0x1
#define RC2_value_mask                           0x4
#define RC2_clear_mask                           0xFB

#define SEG17                                    0x3
#define SEG17_address                            0xF82
#define SEG17_position                           0x3
#define SEG17_size                               0x1
#define SEG17_value_mask                         0x8
#define SEG17_clear_mask                         0xF7

#define SCK1                                     0x3
#define SCK1_address                             0xF82
#define SCK1_position                            0x3
#define SCK1_size                                0x1
#define SCK1_value_mask                          0x8
#define SCK1_clear_mask                          0xF7

#define SCL1                                     0x3
#define SCL1_address                             0xF82
#define SCL1_position                            0x3
#define SCL1_size                                0x1
#define SCL1_value_mask                          0x8
#define SCL1_clear_mask                          0xF7

#define RC3                                      0x3
#define RC3_address                              0xF82
#define RC3_position                             0x3
#define RC3_size                                 0x1
#define RC3_value_mask                           0x8
#define RC3_clear_mask                           0xF7

#define SEG16                                    0x4
#define SEG16_address                            0xF82
#define SEG16_position                           0x4
#define SEG16_size                               0x1
#define SEG16_value_mask                         0x10
#define SEG16_clear_mask                         0xEF

#define SDI1                                     0x4
#define SDI1_address                             0xF82
#define SDI1_position                            0x4
#define SDI1_size                                0x1
#define SDI1_value_mask                          0x10
#define SDI1_clear_mask                          0xEF

#define SDA1                                     0x4
#define SDA1_address                             0xF82
#define SDA1_position                            0x4
#define SDA1_size                                0x1
#define SDA1_value_mask                          0x10
#define SDA1_clear_mask                          0xEF

#define RC4                                      0x4
#define RC4_address                              0xF82
#define RC4_position                             0x4
#define RC4_size                                 0x1
#define RC4_value_mask                           0x10
#define RC4_clear_mask                           0xEF

#define SEG12                                    0x5
#define SEG12_address                            0xF82
#define SEG12_position                           0x5
#define SEG12_size                               0x1
#define SEG12_value_mask                         0x20
#define SEG12_clear_mask                         0xDF

#define SDO1                                     0x5
#define SDO1_address                             0xF82
#define SDO1_position                            0x5
#define SDO1_size                                0x1
#define SDO1_value_mask                          0x20
#define SDO1_clear_mask                          0xDF

#define RC5                                      0x5
#define RC5_address                              0xF82
#define RC5_position                             0x5
#define RC5_size                                 0x1
#define RC5_value_mask                           0x20
#define RC5_clear_mask                           0xDF

#define SEG27                                    0x6
#define SEG27_address                            0xF82
#define SEG27_position                           0x6
#define SEG27_size                               0x1
#define SEG27_value_mask                         0x40
#define SEG27_clear_mask                         0xBF

#define TX1                                      0x6
#define TX1_address                              0xF82
#define TX1_position                             0x6
#define TX1_size                                 0x1
#define TX1_value_mask                           0x40
#define TX1_clear_mask                           0xBF

#define RC6                                      0x6
#define RC6_address                              0xF82
#define RC6_position                             0x6
#define RC6_size                                 0x1
#define RC6_value_mask                           0x40
#define RC6_clear_mask                           0xBF

#define CK1                                      0x6
#define CK1_address                              0xF82
#define CK1_position                             0x6
#define CK1_size                                 0x1
#define CK1_value_mask                           0x40
#define CK1_clear_mask                           0xBF

#define DT1                                      0x7
#define DT1_address                              0xF82
#define DT1_position                             0x7
#define DT1_size                                 0x1
#define DT1_value_mask                           0x80
#define DT1_clear_mask                           0x7F

#define RX1                                      0x7
#define RX1_address                              0xF82
#define RX1_position                             0x7
#define RX1_size                                 0x1
#define RX1_value_mask                           0x80
#define RX1_clear_mask                           0x7F

#define SEG28                                    0x7
#define SEG28_address                            0xF82
#define SEG28_position                           0x7
#define SEG28_size                               0x1
#define SEG28_value_mask                         0x80
#define SEG28_clear_mask                         0x7F

#define RC7                                      0x7
#define RC7_address                              0xF82
#define RC7_position                             0x7
#define RC7_size                                 0x1
#define RC7_value_mask                           0x80
#define RC7_clear_mask                           0x7F


/*-----------------------------------------------------#
| PORTD                                          0xF83 |
#------------------------------------------------------#
| SS2 | SCK2 | PSP5 | PSP4 | PSP3 | PSP2 | PSP1 | PSP0 |
#------------------------------------------------------#
| 7   | 6    | 5    | 4    | 3    | 2    | 1    | 0    |
#-----------------------------------------------------*/

#define PORTD                                    0x0
#define PORTD_address                            0xF83
#define PORTD_position                           0x0
#define PORTD_size                               0x8
#define PORTD_value_mask                         0xFF
#define PORTD_clear_mask                         0x0

#define PSP0                                     0x0
#define PSP0_address                             0xF83
#define PSP0_position                            0x0
#define PSP0_size                                0x1
#define PSP0_value_mask                          0x1
#define PSP0_clear_mask                          0xFE

#define RD0                                      0x0
#define RD0_address                              0xF83
#define RD0_position                             0x0
#define RD0_size                                 0x1
#define RD0_value_mask                           0x1
#define RD0_clear_mask                           0xFE

#define CTPLS                                    0x0
#define CTPLS_address                            0xF83
#define CTPLS_position                           0x0
#define CTPLS_size                               0x1
#define CTPLS_value_mask                         0x1
#define CTPLS_clear_mask                         0xFE

#define AD0                                      0x0
#define AD0_address                              0xF83
#define AD0_position                             0x0
#define AD0_size                                 0x1
#define AD0_value_mask                           0x1
#define AD0_clear_mask                           0xFE

#define SEG0                                     0x0
#define SEG0_address                             0xF83
#define SEG0_position                            0x0
#define SEG0_size                                0x1
#define SEG0_value_mask                          0x1
#define SEG0_clear_mask                          0xFE

#define PSP1                                     0x1
#define PSP1_address                             0xF83
#define PSP1_position                            0x1
#define PSP1_size                                0x1
#define PSP1_value_mask                          0x2
#define PSP1_clear_mask                          0xFD

#define RD1                                      0x1
#define RD1_address                              0xF83
#define RD1_position                             0x1
#define RD1_size                                 0x1
#define RD1_value_mask                           0x2
#define RD1_clear_mask                           0xFD

#define T5CKI                                    0x1
#define T5CKI_address                            0xF83
#define T5CKI_position                           0x1
#define T5CKI_size                               0x1
#define T5CKI_value_mask                         0x2
#define T5CKI_clear_mask                         0xFD

#define T7G                                      0x1
#define T7G_address                              0xF83
#define T7G_position                             0x1
#define T7G_size                                 0x1
#define T7G_value_mask                           0x2
#define T7G_clear_mask                           0xFD

#define AD1                                      0x1
#define AD1_address                              0xF83
#define AD1_position                             0x1
#define AD1_size                                 0x1
#define AD1_value_mask                           0x2
#define AD1_clear_mask                           0xFD

#define SEG1                                     0x1
#define SEG1_address                             0xF83
#define SEG1_position                            0x1
#define SEG1_size                                0x1
#define SEG1_value_mask                          0x2
#define SEG1_clear_mask                          0xFD

#define PSP2                                     0x2
#define PSP2_address                             0xF83
#define PSP2_position                            0x2
#define PSP2_size                                0x1
#define PSP2_value_mask                          0x4
#define PSP2_clear_mask                          0xFB

#define RD2                                      0x2
#define RD2_address                              0xF83
#define RD2_position                             0x2
#define RD2_size                                 0x1
#define RD2_value_mask                           0x4
#define RD2_clear_mask                           0xFB

#define AD2                                      0x2
#define AD2_address                              0xF83
#define AD2_position                             0x2
#define AD2_size                                 0x1
#define AD2_value_mask                           0x4
#define AD2_clear_mask                           0xFB

#define SEG2                                     0x2
#define SEG2_address                             0xF83
#define SEG2_position                            0x2
#define SEG2_size                                0x1
#define SEG2_value_mask                          0x4
#define SEG2_clear_mask                          0xFB

#define PSP3                                     0x3
#define PSP3_address                             0xF83
#define PSP3_position                            0x3
#define PSP3_size                                0x1
#define PSP3_value_mask                          0x8
#define PSP3_clear_mask                          0xF7

#define RD3                                      0x3
#define RD3_address                              0xF83
#define RD3_position                             0x3
#define RD3_size                                 0x1
#define RD3_value_mask                           0x8
#define RD3_clear_mask                           0xF7

#define AD3                                      0x3
#define AD3_address                              0xF83
#define AD3_position                             0x3
#define AD3_size                                 0x1
#define AD3_value_mask                           0x8
#define AD3_clear_mask                           0xF7

#define SEG3                                     0x3
#define SEG3_address                             0xF83
#define SEG3_position                            0x3
#define SEG3_size                                0x1
#define SEG3_value_mask                          0x8
#define SEG3_clear_mask                          0xF7

#define PSP4                                     0x4
#define PSP4_address                             0xF83
#define PSP4_position                            0x4
#define PSP4_size                                0x1
#define PSP4_value_mask                          0x10
#define PSP4_clear_mask                          0xEF

#define RD4                                      0x4
#define RD4_address                              0xF83
#define RD4_position                             0x4
#define RD4_size                                 0x1
#define RD4_value_mask                           0x10
#define RD4_clear_mask                           0xEF

#define AD4                                      0x4
#define AD4_address                              0xF83
#define AD4_position                             0x4
#define AD4_size                                 0x1
#define AD4_value_mask                           0x10
#define AD4_clear_mask                           0xEF

#define SDO2                                     0x4
#define SDO2_address                             0xF83
#define SDO2_position                            0x4
#define SDO2_size                                0x1
#define SDO2_value_mask                          0x10
#define SDO2_clear_mask                          0xEF

#define SEG4                                     0x4
#define SEG4_address                             0xF83
#define SEG4_position                            0x4
#define SEG4_size                                0x1
#define SEG4_value_mask                          0x10
#define SEG4_clear_mask                          0xEF

#define PSP5                                     0x5
#define PSP5_address                             0xF83
#define PSP5_position                            0x5
#define PSP5_size                                0x1
#define PSP5_value_mask                          0x20
#define PSP5_clear_mask                          0xDF

#define RD5                                      0x5
#define RD5_address                              0xF83
#define RD5_position                             0x5
#define RD5_size                                 0x1
#define RD5_value_mask                           0x20
#define RD5_clear_mask                           0xDF

#define SDI2                                     0x5
#define SDI2_address                             0xF83
#define SDI2_position                            0x5
#define SDI2_size                                0x1
#define SDI2_value_mask                          0x20
#define SDI2_clear_mask                          0xDF

#define AD5                                      0x5
#define AD5_address                              0xF83
#define AD5_position                             0x5
#define AD5_size                                 0x1
#define AD5_value_mask                           0x20
#define AD5_clear_mask                           0xDF

#define SDA2                                     0x5
#define SDA2_address                             0xF83
#define SDA2_position                            0x5
#define SDA2_size                                0x1
#define SDA2_value_mask                          0x20
#define SDA2_clear_mask                          0xDF

#define SEG5                                     0x5
#define SEG5_address                             0xF83
#define SEG5_position                            0x5
#define SEG5_size                                0x1
#define SEG5_value_mask                          0x20
#define SEG5_clear_mask                          0xDF

#define SEG6                                     0x6
#define SEG6_address                             0xF83
#define SEG6_position                            0x6
#define SEG6_size                                0x1
#define SEG6_value_mask                          0x40
#define SEG6_clear_mask                          0xBF

#define SCK2                                     0x6
#define SCK2_address                             0xF83
#define SCK2_position                            0x6
#define SCK2_size                                0x1
#define SCK2_value_mask                          0x40
#define SCK2_clear_mask                          0xBF

#define PSP6                                     0x6
#define PSP6_address                             0xF83
#define PSP6_position                            0x6
#define PSP6_size                                0x1
#define PSP6_value_mask                          0x40
#define PSP6_clear_mask                          0xBF

#define RD6                                      0x6
#define RD6_address                              0xF83
#define RD6_position                             0x6
#define RD6_size                                 0x1
#define RD6_value_mask                           0x40
#define RD6_clear_mask                           0xBF

#define AD6                                      0x6
#define AD6_address                              0xF83
#define AD6_position                             0x6
#define AD6_size                                 0x1
#define AD6_value_mask                           0x40
#define AD6_clear_mask                           0xBF

#define SCL2                                     0x6
#define SCL2_address                             0xF83
#define SCL2_position                            0x6
#define SCL2_size                                0x1
#define SCL2_value_mask                          0x40
#define SCL2_clear_mask                          0xBF

#define SS2                                      0x7
#define SS2_address                              0xF83
#define SS2_position                             0x7
#define SS2_size                                 0x1
#define SS2_value_mask                           0x80
#define SS2_clear_mask                           0x7F

#define PSP7                                     0x7
#define PSP7_address                             0xF83
#define PSP7_position                            0x7
#define PSP7_size                                0x1
#define PSP7_value_mask                          0x80
#define PSP7_clear_mask                          0x7F

#define RD7                                      0x7
#define RD7_address                              0xF83
#define RD7_position                             0x7
#define RD7_size                                 0x1
#define RD7_value_mask                           0x80
#define RD7_clear_mask                           0x7F

#define AD7                                      0x7
#define AD7_address                              0xF83
#define AD7_position                             0x7
#define AD7_size                                 0x1
#define AD7_value_mask                           0x80
#define AD7_clear_mask                           0x7F

#define SEG7                                     0x7
#define SEG7_address                             0xF83
#define SEG7_position                            0x7
#define SEG7_size                                0x1
#define SEG7_value_mask                          0x80
#define SEG7_clear_mask                          0x7F


/*-------------------------------------------------------------------#
| PORTE                                                        0xF84 |
#--------------------------------------------------------------------#
| PORTE_CCP2 | CCP6E | CCP7 | RE4 | AD11 | PORTE_CS | RE1 | PORTE_RD |
#--------------------------------------------------------------------#
| 7          | 6     | 5    | 4   | 3    | 2        | 1   | 0        |
#-------------------------------------------------------------------*/

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

#define AD8                                      0x0
#define AD8_address                              0xF84
#define AD8_position                             0x0
#define AD8_size                                 0x1
#define AD8_value_mask                           0x1
#define AD8_clear_mask                           0xFE

#define PORTE_RD                                 0x0
#define PORTE_RD_address                         0xF84
#define PORTE_RD_position                        0x0
#define PORTE_RD_size                            0x1
#define PORTE_RD_value_mask                      0x1
#define PORTE_RD_clear_mask                      0xFE

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

#define AD9                                      0x1
#define AD9_address                              0xF84
#define AD9_position                             0x1
#define AD9_size                                 0x1
#define AD9_value_mask                           0x2
#define AD9_clear_mask                           0xFD

#define PORTE_WR                                 0x1
#define PORTE_WR_address                         0xF84
#define PORTE_WR_position                        0x1
#define PORTE_WR_size                            0x1
#define PORTE_WR_value_mask                      0x2
#define PORTE_WR_clear_mask                      0xFD

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

#define RE1                                      0x1
#define RE1_address                              0xF84
#define RE1_position                             0x1
#define RE1_size                                 0x1
#define RE1_value_mask                           0x2
#define RE1_clear_mask                           0xFD

#define PC2                                      0x1
#define PC2_address                              0xF84
#define PC2_position                             0x1
#define PC2_size                                 0x1
#define PC2_value_mask                           0x2
#define PC2_clear_mask                           0xFD

#define PORTE_CS                                 0x2
#define PORTE_CS_address                         0xF84
#define PORTE_CS_position                        0x2
#define PORTE_CS_size                            0x1
#define PORTE_CS_value_mask                      0x4
#define PORTE_CS_clear_mask                      0xFB

#define PB2                                      0x2
#define PB2_address                              0xF84
#define PB2_position                             0x2
#define PB2_size                                 0x1
#define PB2_value_mask                           0x4
#define PB2_clear_mask                           0xFB

#define CCP10                                    0x2
#define CCP10_address                            0xF84
#define CCP10_position                           0x2
#define CCP10_size                               0x1
#define CCP10_value_mask                         0x4
#define CCP10_clear_mask                         0xFB

#define AD10                                     0x2
#define AD10_address                             0xF84
#define AD10_position                            0x2
#define AD10_size                                0x1
#define AD10_value_mask                          0x4
#define AD10_clear_mask                          0xFB

#define LCDBIAS3                                 0x2
#define LCDBIAS3_address                         0xF84
#define LCDBIAS3_position                        0x2
#define LCDBIAS3_size                            0x1
#define LCDBIAS3_value_mask                      0x4
#define LCDBIAS3_clear_mask                      0xFB

#define RE2                                      0x2
#define RE2_address                              0xF84
#define RE2_position                             0x2
#define RE2_size                                 0x1
#define RE2_value_mask                           0x4
#define RE2_clear_mask                           0xFB

#define CCP9                                     0x3
#define CCP9_address                             0xF84
#define CCP9_position                            0x3
#define CCP9_size                                0x1
#define CCP9_value_mask                          0x8
#define CCP9_clear_mask                          0xF7

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

#define AD11                                     0x3
#define AD11_address                             0xF84
#define AD11_position                            0x3
#define AD11_size                                0x1
#define AD11_value_mask                          0x8
#define AD11_clear_mask                          0xF7

#define RE3                                      0x3
#define RE3_address                              0xF84
#define RE3_position                             0x3
#define RE3_size                                 0x1
#define RE3_value_mask                           0x8
#define RE3_clear_mask                           0xF7

#define PC3                                      0x3
#define PC3_address                              0xF84
#define PC3_position                             0x3
#define PC3_size                                 0x1
#define PC3_value_mask                           0x8
#define PC3_clear_mask                           0xF7

#define PC3E                                     0x3
#define PC3E_address                             0xF84
#define PC3E_position                            0x3
#define PC3E_size                                0x1
#define PC3E_value_mask                          0x8
#define PC3E_clear_mask                          0xF7

#define CCP8                                     0x4
#define CCP8_address                             0xF84
#define CCP8_position                            0x4
#define CCP8_size                                0x1
#define CCP8_value_mask                          0x10
#define CCP8_clear_mask                          0xEF

#define PB3E                                     0x4
#define PB3E_address                             0xF84
#define PB3E_position                            0x4
#define PB3E_size                                0x1
#define PB3E_value_mask                          0x10
#define PB3E_clear_mask                          0xEF

#define PB3                                      0x4
#define PB3_address                              0xF84
#define PB3_position                             0x4
#define PB3_size                                 0x1
#define PB3_value_mask                           0x10
#define PB3_clear_mask                           0xEF

#define COM1                                     0x4
#define COM1_address                             0xF84
#define COM1_position                            0x4
#define COM1_size                                0x1
#define COM1_value_mask                          0x10
#define COM1_clear_mask                          0xEF

#define REFO                                     0x4
#define REFO_address                             0xF84
#define REFO_position                            0x4
#define REFO_size                                0x1
#define REFO_value_mask                          0x10
#define REFO_clear_mask                          0xEF

#define AD12                                     0x4
#define AD12_address                             0xF84
#define AD12_position                            0x4
#define AD12_size                                0x1
#define AD12_value_mask                          0x10
#define AD12_clear_mask                          0xEF

#define RE4                                      0x4
#define RE4_address                              0xF84
#define RE4_position                             0x4
#define RE4_size                                 0x1
#define RE4_value_mask                           0x10
#define RE4_clear_mask                           0xEF

#define CCP8E                                    0x4
#define CCP8E_address                            0xF84
#define CCP8E_position                           0x4
#define CCP8E_size                               0x1
#define CCP8E_value_mask                         0x10
#define CCP8E_clear_mask                         0xEF

#define PC1                                      0x5
#define PC1_address                              0xF84
#define PC1_position                             0x5
#define PC1_size                                 0x1
#define PC1_value_mask                           0x20
#define PC1_clear_mask                           0xDF

#define CCP7                                     0x5
#define CCP7_address                             0xF84
#define CCP7_position                            0x5
#define CCP7_size                                0x1
#define CCP7_value_mask                          0x20
#define CCP7_clear_mask                          0xDF

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

#define AD13                                     0x5
#define AD13_address                             0xF84
#define AD13_position                            0x5
#define AD13_size                                0x1
#define AD13_value_mask                          0x20
#define AD13_clear_mask                          0xDF

#define RE5                                      0x5
#define RE5_address                              0xF84
#define RE5_position                             0x5
#define RE5_size                                 0x1
#define RE5_value_mask                           0x20
#define RE5_clear_mask                           0xDF

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

#define CCP6                                     0x6
#define CCP6_address                             0xF84
#define CCP6_position                            0x6
#define CCP6_size                                0x1
#define CCP6_value_mask                          0x40
#define CCP6_clear_mask                          0xBF

#define PB1                                      0x6
#define PB1_address                              0xF84
#define PB1_position                             0x6
#define PB1_size                                 0x1
#define PB1_value_mask                           0x40
#define PB1_clear_mask                           0xBF

#define COM3                                     0x6
#define COM3_address                             0xF84
#define COM3_position                            0x6
#define COM3_size                                0x1
#define COM3_value_mask                          0x40
#define COM3_clear_mask                          0xBF

#define AD14                                     0x6
#define AD14_address                             0xF84
#define AD14_position                            0x6
#define AD14_size                                0x1
#define AD14_value_mask                          0x40
#define AD14_clear_mask                          0xBF

#define RE6                                      0x6
#define RE6_address                              0xF84
#define RE6_position                             0x6
#define RE6_size                                 0x1
#define RE6_value_mask                           0x40
#define RE6_clear_mask                           0xBF

#define PB1E                                     0x6
#define PB1E_address                             0xF84
#define PB1E_position                            0x6
#define PB1E_size                                0x1
#define PB1E_value_mask                          0x40
#define PB1E_clear_mask                          0xBF

#define PORTE_CCP2                               0x7
#define PORTE_CCP2_address                       0xF84
#define PORTE_CCP2_position                      0x7
#define PORTE_CCP2_size                          0x1
#define PORTE_CCP2_value_mask                    0x80
#define PORTE_CCP2_clear_mask                    0x7F

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

#define PORTE_PA2                                0x7
#define PORTE_PA2_address                        0xF84
#define PORTE_PA2_position                       0x7
#define PORTE_PA2_size                           0x1
#define PORTE_PA2_value_mask                     0x80
#define PORTE_PA2_clear_mask                     0x7F

#define AD15                                     0x7
#define AD15_address                             0xF84
#define AD15_position                            0x7
#define AD15_size                                0x1
#define AD15_value_mask                          0x80
#define AD15_clear_mask                          0x7F

#define RE7                                      0x7
#define RE7_address                              0xF84
#define RE7_position                             0x7
#define RE7_size                                 0x1
#define RE7_value_mask                           0x80
#define RE7_clear_mask                           0x7F


/*----------------------------------------------------------#
| PORTF                                               0xF85 |
#-----------------------------------------------------------#
| SS1 | C1INA | C1INB | AN9 | AN8 | PORTF_C1OUT | SEG19 | - |
#-----------------------------------------------------------#
| 7   | 6     | 5     | 4   | 3   | 2           | 1     | 0 |
#----------------------------------------------------------*/

#define PORTF                                    0x0
#define PORTF_address                            0xF85
#define PORTF_position                           0x0
#define PORTF_size                               0x8
#define PORTF_value_mask                         0xFF
#define PORTF_clear_mask                         0x0

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

#define PORTF_C2OUT                              0x1
#define PORTF_C2OUT_address                      0xF85
#define PORTF_C2OUT_position                     0x1
#define PORTF_C2OUT_size                         0x1
#define PORTF_C2OUT_value_mask                   0x2
#define PORTF_C2OUT_clear_mask                   0xFD

#define RF1                                      0x1
#define RF1_address                              0xF85
#define RF1_position                             0x1
#define RF1_size                                 0x1
#define RF1_value_mask                           0x2
#define RF1_clear_mask                           0xFD

#define CTDIN                                    0x1
#define CTDIN_address                            0xF85
#define CTDIN_position                           0x1
#define CTDIN_size                               0x1
#define CTDIN_value_mask                         0x2
#define CTDIN_clear_mask                         0xFD

#define PORTF_C1OUT                              0x2
#define PORTF_C1OUT_address                      0xF85
#define PORTF_C1OUT_position                     0x2
#define PORTF_C1OUT_size                         0x1
#define PORTF_C1OUT_value_mask                   0x4
#define PORTF_C1OUT_clear_mask                   0xFB

#define AN7                                      0x2
#define AN7_address                              0xF85
#define AN7_position                             0x2
#define AN7_size                                 0x1
#define AN7_value_mask                           0x4
#define AN7_clear_mask                           0xFB

#define RF2                                      0x2
#define RF2_address                              0xF85
#define RF2_position                             0x2
#define RF2_size                                 0x1
#define RF2_value_mask                           0x4
#define RF2_clear_mask                           0xFB

#define C1OUTF                                   0x2
#define C1OUTF_address                           0xF85
#define C1OUTF_position                          0x2
#define C1OUTF_size                              0x1
#define C1OUTF_value_mask                        0x4
#define C1OUTF_clear_mask                        0xFB

#define SEG20                                    0x2
#define SEG20_address                            0xF85
#define SEG20_position                           0x2
#define SEG20_size                               0x1
#define SEG20_value_mask                         0x4
#define SEG20_clear_mask                         0xFB

#define AN8                                      0x3
#define AN8_address                              0xF85
#define AN8_position                             0x3
#define AN8_size                                 0x1
#define AN8_value_mask                           0x8
#define AN8_clear_mask                           0xF7

#define RF3                                      0x3
#define RF3_address                              0xF85
#define RF3_position                             0x3
#define RF3_size                                 0x1
#define RF3_value_mask                           0x8
#define RF3_clear_mask                           0xF7

#define SEG21                                    0x3
#define SEG21_address                            0xF85
#define SEG21_position                           0x3
#define SEG21_size                               0x1
#define SEG21_value_mask                         0x8
#define SEG21_clear_mask                         0xF7

#define CTMUI                                    0x3
#define CTMUI_address                            0xF85
#define CTMUI_position                           0x3
#define CTMUI_size                               0x1
#define CTMUI_value_mask                         0x8
#define CTMUI_clear_mask                         0xF7

#define C2INB                                    0x3
#define C2INB_address                            0xF85
#define C2INB_position                           0x3
#define C2INB_size                               0x1
#define C2INB_value_mask                         0x8
#define C2INB_clear_mask                         0xF7

#define AN9                                      0x4
#define AN9_address                              0xF85
#define AN9_position                             0x4
#define AN9_size                                 0x1
#define AN9_value_mask                           0x10
#define AN9_clear_mask                           0xEF

#define RF4                                      0x4
#define RF4_address                              0xF85
#define RF4_position                             0x4
#define RF4_size                                 0x1
#define RF4_value_mask                           0x10
#define RF4_clear_mask                           0xEF

#define SEG22                                    0x4
#define SEG22_address                            0xF85
#define SEG22_position                           0x4
#define SEG22_size                               0x1
#define SEG22_value_mask                         0x10
#define SEG22_clear_mask                         0xEF

#define C2INA                                    0x4
#define C2INA_address                            0xF85
#define C2INA_position                           0x4
#define C2INA_size                               0x1
#define C2INA_value_mask                         0x10
#define C2INA_clear_mask                         0xEF

#define C1INB                                    0x5
#define C1INB_address                            0xF85
#define C1INB_position                           0x5
#define C1INB_size                               0x1
#define C1INB_value_mask                         0x20
#define C1INB_clear_mask                         0xDF

#define RF5                                      0x5
#define RF5_address                              0xF85
#define RF5_position                             0x5
#define RF5_size                                 0x1
#define RF5_value_mask                           0x20
#define RF5_clear_mask                           0xDF

#define SEG23                                    0x5
#define SEG23_address                            0xF85
#define SEG23_position                           0x5
#define SEG23_size                               0x1
#define SEG23_value_mask                         0x20
#define SEG23_clear_mask                         0xDF

#define CVREF                                    0x5
#define CVREF_address                            0xF85
#define CVREF_position                           0x5
#define CVREF_size                               0x1
#define CVREF_value_mask                         0x20
#define CVREF_clear_mask                         0xDF

#define AN10                                     0x5
#define AN10_address                             0xF85
#define AN10_position                            0x5
#define AN10_size                                0x1
#define AN10_value_mask                          0x20
#define AN10_clear_mask                          0xDF

#define C1INA                                    0x6
#define C1INA_address                            0xF85
#define C1INA_position                           0x6
#define C1INA_size                               0x1
#define C1INA_value_mask                         0x40
#define C1INA_clear_mask                         0xBF

#define RF6                                      0x6
#define RF6_address                              0xF85
#define RF6_position                             0x6
#define RF6_size                                 0x1
#define RF6_value_mask                           0x40
#define RF6_clear_mask                           0xBF

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

#define SS1                                      0x7
#define SS1_address                              0xF85
#define SS1_position                             0x7
#define SS1_size                                 0x1
#define SS1_value_mask                           0x80
#define SS1_clear_mask                           0x7F

#define AN5                                      0x7
#define AN5_address                              0xF85
#define AN5_position                             0x7
#define AN5_size                                 0x1
#define AN5_value_mask                           0x80
#define AN5_clear_mask                           0x7F

#define RF7                                      0x7
#define RF7_address                              0xF85
#define RF7_position                             0x7
#define RF7_size                                 0x1
#define RF7_value_mask                           0x80
#define RF7_clear_mask                           0x7F

#define SEG25                                    0x7
#define SEG25_address                            0xF85
#define SEG25_position                           0x7
#define SEG25_size                               0x1
#define SEG25_value_mask                         0x80
#define SEG25_clear_mask                         0x7F


/*---------------------------------------------------------#
| PORTG                                              0xF86 |
#----------------------------------------------------------#
| - | - | PORTG_RJPU | CCP5 | CCP4 | C3INA | C3OUTG | CCP3 |
#----------------------------------------------------------#
| 7 | 6 | 5          | 4    | 3    | 2     | 1      | 0    |
#---------------------------------------------------------*/

#define PORTG                                    0x0
#define PORTG_address                            0xF86
#define PORTG_position                           0x0
#define PORTG_size                               0x8
#define PORTG_value_mask                         0xFF
#define PORTG_clear_mask                         0x0

#define CCP3                                     0x0
#define CCP3_address                             0xF86
#define CCP3_position                            0x0
#define CCP3_size                                0x1
#define CCP3_value_mask                          0x1
#define CCP3_clear_mask                          0xFE

#define PA3                                      0x0
#define PA3_address                              0xF86
#define PA3_position                             0x0
#define PA3_size                                 0x1
#define PA3_value_mask                           0x1
#define PA3_clear_mask                           0xFE

#define RG0                                      0x0
#define RG0_address                              0xF86
#define RG0_position                             0x0
#define RG0_size                                 0x1
#define RG0_value_mask                           0x1
#define RG0_clear_mask                           0xFE

#define C3OUTG                                   0x1
#define C3OUTG_address                           0xF86
#define C3OUTG_position                          0x1
#define C3OUTG_size                              0x1
#define C3OUTG_value_mask                        0x2
#define C3OUTG_clear_mask                        0xFD

#define PORTG_C3OUT                              0x1
#define PORTG_C3OUT_address                      0xF86
#define PORTG_C3OUT_position                     0x1
#define PORTG_C3OUT_size                         0x1
#define PORTG_C3OUT_value_mask                   0x2
#define PORTG_C3OUT_clear_mask                   0xFD

#define TX2                                      0x1
#define TX2_address                              0xF86
#define TX2_position                             0x1
#define TX2_size                                 0x1
#define TX2_value_mask                           0x2
#define TX2_clear_mask                           0xFD

#define RG1                                      0x1
#define RG1_address                              0xF86
#define RG1_position                             0x1
#define RG1_size                                 0x1
#define RG1_value_mask                           0x2
#define RG1_clear_mask                           0xFD

#define CK2                                      0x1
#define CK2_address                              0xF86
#define CK2_position                             0x1
#define CK2_size                                 0x1
#define CK2_value_mask                           0x2
#define CK2_clear_mask                           0xFD

#define AN19                                     0x1
#define AN19_address                             0xF86
#define AN19_position                            0x1
#define AN19_size                                0x1
#define AN19_value_mask                          0x2
#define AN19_clear_mask                          0xFD

#define C3INA                                    0x2
#define C3INA_address                            0xF86
#define C3INA_position                           0x2
#define C3INA_size                               0x1
#define C3INA_value_mask                         0x4
#define C3INA_clear_mask                         0xFB

#define RX2                                      0x2
#define RX2_address                              0xF86
#define RX2_position                             0x2
#define RX2_size                                 0x1
#define RX2_value_mask                           0x4
#define RX2_clear_mask                           0xFB

#define RG2                                      0x2
#define RG2_address                              0xF86
#define RG2_position                             0x2
#define RG2_size                                 0x1
#define RG2_value_mask                           0x4
#define RG2_clear_mask                           0xFB

#define DT2                                      0x2
#define DT2_address                              0xF86
#define DT2_position                             0x2
#define DT2_size                                 0x1
#define DT2_value_mask                           0x4
#define DT2_clear_mask                           0xFB

#define AN18                                     0x2
#define AN18_address                             0xF86
#define AN18_position                            0x2
#define AN18_size                                0x1
#define AN18_value_mask                          0x4
#define AN18_clear_mask                          0xFB

#define CCP4                                     0x3
#define CCP4_address                             0xF86
#define CCP4_position                            0x3
#define CCP4_size                                0x1
#define CCP4_value_mask                          0x8
#define CCP4_clear_mask                          0xF7

#define PD3                                      0x3
#define PD3_address                              0xF86
#define PD3_position                             0x3
#define PD3_size                                 0x1
#define PD3_value_mask                           0x8
#define PD3_clear_mask                           0xF7

#define C3INB                                    0x3
#define C3INB_address                            0xF86
#define C3INB_position                           0x3
#define C3INB_size                               0x1
#define C3INB_value_mask                         0x8
#define C3INB_clear_mask                         0xF7

#define RG3                                      0x3
#define RG3_address                              0xF86
#define RG3_position                             0x3
#define RG3_size                                 0x1
#define RG3_value_mask                           0x8
#define RG3_clear_mask                           0xF7

#define AN17                                     0x3
#define AN17_address                             0xF86
#define AN17_position                            0x3
#define AN17_size                                0x1
#define AN17_value_mask                          0x8
#define AN17_clear_mask                          0xF7

#define CCP5                                     0x4
#define CCP5_address                             0xF86
#define CCP5_position                            0x4
#define CCP5_size                                0x1
#define CCP5_value_mask                          0x10
#define CCP5_clear_mask                          0xEF

#define PD1                                      0x4
#define PD1_address                              0xF86
#define PD1_position                             0x4
#define PD1_size                                 0x1
#define PD1_value_mask                           0x10
#define PD1_clear_mask                           0xEF

#define SEG26                                    0x4
#define SEG26_address                            0xF86
#define SEG26_position                           0x4
#define SEG26_size                               0x1
#define SEG26_value_mask                         0x10
#define SEG26_clear_mask                         0xEF

#define C3INC                                    0x4
#define C3INC_address                            0xF86
#define C3INC_position                           0x4
#define C3INC_size                               0x1
#define C3INC_value_mask                         0x10
#define C3INC_clear_mask                         0xEF

#define T7CKI                                    0x4
#define T7CKI_address                            0xF86
#define T7CKI_position                           0x4
#define T7CKI_size                               0x1
#define T7CKI_value_mask                         0x10
#define T7CKI_clear_mask                         0xEF

#define T5G                                      0x4
#define T5G_address                              0xF86
#define T5G_position                             0x4
#define T5G_size                                 0x1
#define T5G_value_mask                           0x10
#define T5G_clear_mask                           0xEF

#define RG4                                      0x4
#define RG4_address                              0xF86
#define RG4_position                             0x4
#define RG4_size                                 0x1
#define RG4_value_mask                           0x10
#define RG4_clear_mask                           0xEF

#define RTCC                                     0x4
#define RTCC_address                             0xF86
#define RTCC_position                            0x4
#define RTCC_size                                0x1
#define RTCC_value_mask                          0x10
#define RTCC_clear_mask                          0xEF

#define AN16                                     0x4
#define AN16_address                             0xF86
#define AN16_position                            0x4
#define AN16_size                                0x1
#define AN16_value_mask                          0x10
#define AN16_clear_mask                          0xEF

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


/*--------------------------------------------------------------#
| LATE                                                    0xF8D |
#---------------------------------------------------------------#
| LATE7 | LATE6 | LATE5 | LATE4 | LATE3 | LATE2 | LATE1 | LATE0 |
#---------------------------------------------------------------#
| 7     | 6     | 5     | 4     | 3     | 2     | 1     | 0     |
#--------------------------------------------------------------*/

#define LATE                                     0x0
#define LATE_address                             0xF8D
#define LATE_position                            0x0
#define LATE_size                                0x8
#define LATE_value_mask                          0xFF
#define LATE_clear_mask                          0x0

#define LATE0                                    0x0
#define LATE0_address                            0xF8D
#define LATE0_position                           0x0
#define LATE0_size                               0x1
#define LATE0_value_mask                         0x1
#define LATE0_clear_mask                         0xFE

#define LE0                                      0x0
#define LE0_address                              0xF8D
#define LE0_position                             0x0
#define LE0_size                                 0x1
#define LE0_value_mask                           0x1
#define LE0_clear_mask                           0xFE

#define LATE1                                    0x1
#define LATE1_address                            0xF8D
#define LATE1_position                           0x1
#define LATE1_size                               0x1
#define LATE1_value_mask                         0x2
#define LATE1_clear_mask                         0xFD

#define LE1                                      0x1
#define LE1_address                              0xF8D
#define LE1_position                             0x1
#define LE1_size                                 0x1
#define LE1_value_mask                           0x2
#define LE1_clear_mask                           0xFD

#define LATE2                                    0x2
#define LATE2_address                            0xF8D
#define LATE2_position                           0x2
#define LATE2_size                               0x1
#define LATE2_value_mask                         0x4
#define LATE2_clear_mask                         0xFB

#define LE2                                      0x2
#define LE2_address                              0xF8D
#define LE2_position                             0x2
#define LE2_size                                 0x1
#define LE2_value_mask                           0x4
#define LE2_clear_mask                           0xFB

#define LATE3                                    0x3
#define LATE3_address                            0xF8D
#define LATE3_position                           0x3
#define LATE3_size                               0x1
#define LATE3_value_mask                         0x8
#define LATE3_clear_mask                         0xF7

#define LE3                                      0x3
#define LE3_address                              0xF8D
#define LE3_position                             0x3
#define LE3_size                                 0x1
#define LE3_value_mask                           0x8
#define LE3_clear_mask                           0xF7

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


/*----------------------------------------------------#
| LATF                                          0xF8E |
#-----------------------------------------------------#
| LATF7 | LATF6 | LF5 | LF4 | LF3 | LATF2 | LATF1 | - |
#-----------------------------------------------------#
| 7     | 6     | 5   | 4   | 3   | 2     | 1     | 0 |
#----------------------------------------------------*/

#define LATF                                     0x0
#define LATF_address                             0xF8E
#define LATF_position                            0x0
#define LATF_size                                0x8
#define LATF_value_mask                          0xFF
#define LATF_clear_mask                          0x0

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


/*----------------------------------------------------------------------#
| TRISA                                                           0xF92 |
#-----------------------------------------------------------------------#
| TRISA7 | TRISA6 | TRISA5 | TRISA4 | TRISA3 | TRISA2 | TRISA1 | TRISA0 |
#-----------------------------------------------------------------------#
| 7      | 6      | 5      | 4      | 3      | 2      | 1      | 0      |
#----------------------------------------------------------------------*/

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

#define TRISA1                                   0x1
#define TRISA1_address                           0xF92
#define TRISA1_position                          0x1
#define TRISA1_size                              0x1
#define TRISA1_value_mask                        0x2
#define TRISA1_clear_mask                        0xFD

#define TRISA2                                   0x2
#define TRISA2_address                           0xF92
#define TRISA2_position                          0x2
#define TRISA2_size                              0x1
#define TRISA2_value_mask                        0x4
#define TRISA2_clear_mask                        0xFB

#define TRISA3                                   0x3
#define TRISA3_address                           0xF92
#define TRISA3_position                          0x3
#define TRISA3_size                              0x1
#define TRISA3_value_mask                        0x8
#define TRISA3_clear_mask                        0xF7

#define TRISA4                                   0x4
#define TRISA4_address                           0xF92
#define TRISA4_position                          0x4
#define TRISA4_size                              0x1
#define TRISA4_value_mask                        0x10
#define TRISA4_clear_mask                        0xEF

#define TRISA5                                   0x5
#define TRISA5_address                           0xF92
#define TRISA5_position                          0x5
#define TRISA5_size                              0x1
#define TRISA5_value_mask                        0x20
#define TRISA5_clear_mask                        0xDF

#define TRISA6                                   0x6
#define TRISA6_address                           0xF92
#define TRISA6_position                          0x6
#define TRISA6_size                              0x1
#define TRISA6_value_mask                        0x40
#define TRISA6_clear_mask                        0xBF

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

#define TRISB0                                   0x0
#define TRISB0_address                           0xF93
#define TRISB0_position                          0x0
#define TRISB0_size                              0x1
#define TRISB0_value_mask                        0x1
#define TRISB0_clear_mask                        0xFE

#define TRISB1                                   0x1
#define TRISB1_address                           0xF93
#define TRISB1_position                          0x1
#define TRISB1_size                              0x1
#define TRISB1_value_mask                        0x2
#define TRISB1_clear_mask                        0xFD

#define TRISB2                                   0x2
#define TRISB2_address                           0xF93
#define TRISB2_position                          0x2
#define TRISB2_size                              0x1
#define TRISB2_value_mask                        0x4
#define TRISB2_clear_mask                        0xFB

#define TRISB3                                   0x3
#define TRISB3_address                           0xF93
#define TRISB3_position                          0x3
#define TRISB3_size                              0x1
#define TRISB3_value_mask                        0x8
#define TRISB3_clear_mask                        0xF7

#define TRISB4                                   0x4
#define TRISB4_address                           0xF93
#define TRISB4_position                          0x4
#define TRISB4_size                              0x1
#define TRISB4_value_mask                        0x10
#define TRISB4_clear_mask                        0xEF

#define TRISB5                                   0x5
#define TRISB5_address                           0xF93
#define TRISB5_position                          0x5
#define TRISB5_size                              0x1
#define TRISB5_value_mask                        0x20
#define TRISB5_clear_mask                        0xDF

#define TRISB6                                   0x6
#define TRISB6_address                           0xF93
#define TRISB6_position                          0x6
#define TRISB6_size                              0x1
#define TRISB6_value_mask                        0x40
#define TRISB6_clear_mask                        0xBF

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

#define TRISC1                                   0x1
#define TRISC1_address                           0xF94
#define TRISC1_position                          0x1
#define TRISC1_size                              0x1
#define TRISC1_value_mask                        0x2
#define TRISC1_clear_mask                        0xFD

#define TRISC2                                   0x2
#define TRISC2_address                           0xF94
#define TRISC2_position                          0x2
#define TRISC2_size                              0x1
#define TRISC2_value_mask                        0x4
#define TRISC2_clear_mask                        0xFB

#define TRISC3                                   0x3
#define TRISC3_address                           0xF94
#define TRISC3_position                          0x3
#define TRISC3_size                              0x1
#define TRISC3_value_mask                        0x8
#define TRISC3_clear_mask                        0xF7

#define TRISC4                                   0x4
#define TRISC4_address                           0xF94
#define TRISC4_position                          0x4
#define TRISC4_size                              0x1
#define TRISC4_value_mask                        0x10
#define TRISC4_clear_mask                        0xEF

#define TRISC5                                   0x5
#define TRISC5_address                           0xF94
#define TRISC5_position                          0x5
#define TRISC5_size                              0x1
#define TRISC5_value_mask                        0x20
#define TRISC5_clear_mask                        0xDF

#define TRISC6                                   0x6
#define TRISC6_address                           0xF94
#define TRISC6_position                          0x6
#define TRISC6_size                              0x1
#define TRISC6_value_mask                        0x40
#define TRISC6_clear_mask                        0xBF

#define TRISC7                                   0x7
#define TRISC7_address                           0xF94
#define TRISC7_position                          0x7
#define TRISC7_size                              0x1
#define TRISC7_value_mask                        0x80
#define TRISC7_clear_mask                        0x7F


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

#define TRISD0                                   0x0
#define TRISD0_address                           0xF95
#define TRISD0_position                          0x0
#define TRISD0_size                              0x1
#define TRISD0_value_mask                        0x1
#define TRISD0_clear_mask                        0xFE

#define TRISD1                                   0x1
#define TRISD1_address                           0xF95
#define TRISD1_position                          0x1
#define TRISD1_size                              0x1
#define TRISD1_value_mask                        0x2
#define TRISD1_clear_mask                        0xFD

#define TRISD2                                   0x2
#define TRISD2_address                           0xF95
#define TRISD2_position                          0x2
#define TRISD2_size                              0x1
#define TRISD2_value_mask                        0x4
#define TRISD2_clear_mask                        0xFB

#define TRISD3                                   0x3
#define TRISD3_address                           0xF95
#define TRISD3_position                          0x3
#define TRISD3_size                              0x1
#define TRISD3_value_mask                        0x8
#define TRISD3_clear_mask                        0xF7

#define TRISD4                                   0x4
#define TRISD4_address                           0xF95
#define TRISD4_position                          0x4
#define TRISD4_size                              0x1
#define TRISD4_value_mask                        0x10
#define TRISD4_clear_mask                        0xEF

#define TRISD5                                   0x5
#define TRISD5_address                           0xF95
#define TRISD5_position                          0x5
#define TRISD5_size                              0x1
#define TRISD5_value_mask                        0x20
#define TRISD5_clear_mask                        0xDF

#define TRISD6                                   0x6
#define TRISD6_address                           0xF95
#define TRISD6_position                          0x6
#define TRISD6_size                              0x1
#define TRISD6_value_mask                        0x40
#define TRISD6_clear_mask                        0xBF

#define TRISD7                                   0x7
#define TRISD7_address                           0xF95
#define TRISD7_position                          0x7
#define TRISD7_size                              0x1
#define TRISD7_value_mask                        0x80
#define TRISD7_clear_mask                        0x7F


/*----------------------------------------------------------------------#
| TRISE                                                           0xF96 |
#-----------------------------------------------------------------------#
| TRISE7 | TRISE6 | TRISE5 | TRISE4 | TRISE3 | TRISE2 | TRISE1 | TRISE0 |
#-----------------------------------------------------------------------#
| 7      | 6      | 5      | 4      | 3      | 2      | 1      | 0      |
#----------------------------------------------------------------------*/

#define TRISE                                    0x0
#define TRISE_address                            0xF96
#define TRISE_position                           0x0
#define TRISE_size                               0x8
#define TRISE_value_mask                         0xFF
#define TRISE_clear_mask                         0x0

#define TRISE0                                   0x0
#define TRISE0_address                           0xF96
#define TRISE0_position                          0x0
#define TRISE0_size                              0x1
#define TRISE0_value_mask                        0x1
#define TRISE0_clear_mask                        0xFE

#define TRISE1                                   0x1
#define TRISE1_address                           0xF96
#define TRISE1_position                          0x1
#define TRISE1_size                              0x1
#define TRISE1_value_mask                        0x2
#define TRISE1_clear_mask                        0xFD

#define TRISE2                                   0x2
#define TRISE2_address                           0xF96
#define TRISE2_position                          0x2
#define TRISE2_size                              0x1
#define TRISE2_value_mask                        0x4
#define TRISE2_clear_mask                        0xFB

#define TRISE3                                   0x3
#define TRISE3_address                           0xF96
#define TRISE3_position                          0x3
#define TRISE3_size                              0x1
#define TRISE3_value_mask                        0x8
#define TRISE3_clear_mask                        0xF7

#define TRISE4                                   0x4
#define TRISE4_address                           0xF96
#define TRISE4_position                          0x4
#define TRISE4_size                              0x1
#define TRISE4_value_mask                        0x10
#define TRISE4_clear_mask                        0xEF

#define TRISE5                                   0x5
#define TRISE5_address                           0xF96
#define TRISE5_position                          0x5
#define TRISE5_size                              0x1
#define TRISE5_value_mask                        0x20
#define TRISE5_clear_mask                        0xDF

#define TRISE6                                   0x6
#define TRISE6_address                           0xF96
#define TRISE6_position                          0x6
#define TRISE6_size                              0x1
#define TRISE6_value_mask                        0x40
#define TRISE6_clear_mask                        0xBF

#define TRISE7                                   0x7
#define TRISE7_address                           0xF96
#define TRISE7_position                          0x7
#define TRISE7_size                              0x1
#define TRISE7_value_mask                        0x80
#define TRISE7_clear_mask                        0x7F


/*-----------------------------------------------------------------#
| TRISF                                                      0xF97 |
#------------------------------------------------------------------#
| TRISF7 | TRISF6 | TRISF5 | TRISF4 | TRISF3 | TRISF2 | TRISF1 | - |
#------------------------------------------------------------------#
| 7      | 6      | 5      | 4      | 3      | 2      | 1      | 0 |
#-----------------------------------------------------------------*/

#define TRISF                                    0x0
#define TRISF_address                            0xF97
#define TRISF_position                           0x0
#define TRISF_size                               0x8
#define TRISF_value_mask                         0xFF
#define TRISF_clear_mask                         0x0

#define TRISF1                                   0x1
#define TRISF1_address                           0xF97
#define TRISF1_position                          0x1
#define TRISF1_size                              0x1
#define TRISF1_value_mask                        0x2
#define TRISF1_clear_mask                        0xFD

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

#define TRISF4                                   0x4
#define TRISF4_address                           0xF97
#define TRISF4_position                          0x4
#define TRISF4_size                              0x1
#define TRISF4_value_mask                        0x10
#define TRISF4_clear_mask                        0xEF

#define TRISF5                                   0x5
#define TRISF5_address                           0xF97
#define TRISF5_position                          0x5
#define TRISF5_size                              0x1
#define TRISF5_value_mask                        0x20
#define TRISF5_clear_mask                        0xDF

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


/*-------------------------------------------------------#
| TRISG                                            0xF98 |
#--------------------------------------------------------#
| - | - | - | TRISG4 | TRISG3 | TRISG2 | TRISG1 | TRISG0 |
#--------------------------------------------------------#
| 7 | 6 | 5 | 4      | 3      | 2      | 1      | 0      |
#-------------------------------------------------------*/

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

#define TRISG1                                   0x1
#define TRISG1_address                           0xF98
#define TRISG1_position                          0x1
#define TRISG1_size                              0x1
#define TRISG1_value_mask                        0x2
#define TRISG1_clear_mask                        0xFD

#define TRISG2                                   0x2
#define TRISG2_address                           0xF98
#define TRISG2_position                          0x2
#define TRISG2_size                              0x1
#define TRISG2_value_mask                        0x4
#define TRISG2_clear_mask                        0xFB

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


/*---------------------------------------------------------#
| OSCTUNE                                            0xF9B |
#----------------------------------------------------------#
| INTSRC | PLLEN | TUN5 | TUN4 | TUN3 | TUN2 | TUN1 | TUN0 |
#----------------------------------------------------------#
| 7      | 6     | 5    | 4    | 3    | 2    | 1    | 0    |
#---------------------------------------------------------*/

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
#define TUN_size                                 0x6
#define TUN_value_mask                           0x3F
#define TUN_clear_mask                           0xC0

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

#define TUN5                                     0x5
#define TUN5_address                             0xF9B
#define TUN5_position                            0x5
#define TUN5_size                                0x1
#define TUN5_value_mask                          0x20
#define TUN5_clear_mask                          0xDF

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


/*-----------------------------------------------------------------------------------------------------------------------#
| PSTR1CON                                                                                                         0xF9C |
#------------------------------------------------------------------------------------------------------------------------#
| PSTR1CON_CMPL1 | PSTR1CON_CMPL0 | - | PSTR1CON_STRSYNC | PSTR1CON_STRD | PSTR1CON_STRC | PSTR1CON_STRB | PSTR1CON_STRA |
#------------------------------------------------------------------------------------------------------------------------#
| 7              | 6              | 5 | 4                | 3             | 2             | 1             | 0             |
#-----------------------------------------------------------------------------------------------------------------------*/

#define PSTR1CON                                 0x0
#define PSTR1CON_address                         0xF9C
#define PSTR1CON_position                        0x0
#define PSTR1CON_size                            0x8
#define PSTR1CON_value_mask                      0xFF
#define PSTR1CON_clear_mask                      0x0

#define PSTR1CON_STRA                            0x0
#define PSTR1CON_STRA_address                    0xF9C
#define PSTR1CON_STRA_position                   0x0
#define PSTR1CON_STRA_size                       0x1
#define PSTR1CON_STRA_value_mask                 0x1
#define PSTR1CON_STRA_clear_mask                 0xFE

#define PSTR1CON_STRB                            0x1
#define PSTR1CON_STRB_address                    0xF9C
#define PSTR1CON_STRB_position                   0x1
#define PSTR1CON_STRB_size                       0x1
#define PSTR1CON_STRB_value_mask                 0x2
#define PSTR1CON_STRB_clear_mask                 0xFD

#define PSTR1CON_STRC                            0x2
#define PSTR1CON_STRC_address                    0xF9C
#define PSTR1CON_STRC_position                   0x2
#define PSTR1CON_STRC_size                       0x1
#define PSTR1CON_STRC_value_mask                 0x4
#define PSTR1CON_STRC_clear_mask                 0xFB

#define PSTR1CON_STRD                            0x3
#define PSTR1CON_STRD_address                    0xF9C
#define PSTR1CON_STRD_position                   0x3
#define PSTR1CON_STRD_size                       0x1
#define PSTR1CON_STRD_value_mask                 0x8
#define PSTR1CON_STRD_clear_mask                 0xF7

#define PSTR1CON_STRSYNC                         0x4
#define PSTR1CON_STRSYNC_address                 0xF9C
#define PSTR1CON_STRSYNC_position                0x4
#define PSTR1CON_STRSYNC_size                    0x1
#define PSTR1CON_STRSYNC_value_mask              0x10
#define PSTR1CON_STRSYNC_clear_mask              0xEF

#define PSTR1CON_CMPL0                           0x6
#define PSTR1CON_CMPL0_address                   0xF9C
#define PSTR1CON_CMPL0_position                  0x6
#define PSTR1CON_CMPL0_size                      0x1
#define PSTR1CON_CMPL0_value_mask                0x40
#define PSTR1CON_CMPL0_clear_mask                0xBF

#define PSTR1CON_CMPL                            0x6
#define PSTR1CON_CMPL_address                    0xF9C
#define PSTR1CON_CMPL_position                   0x6
#define PSTR1CON_CMPL_size                       0x2
#define PSTR1CON_CMPL_value_mask                 0xC0
#define PSTR1CON_CMPL_clear_mask                 0x3F

#define PSTR1CON_CMPL1                           0x7
#define PSTR1CON_CMPL1_address                   0xF9C
#define PSTR1CON_CMPL1_position                  0x7
#define PSTR1CON_CMPL1_size                      0x1
#define PSTR1CON_CMPL1_value_mask                0x80
#define PSTR1CON_CMPL1_clear_mask                0x7F


/*------------------------------------------------------------#
| PIE1                                                  0xF9D |
#-------------------------------------------------------------#
| - | ADIE | RCIE | TXIE | SSP1IE | TMR1GIE | TMR2IE | TMR1IE |
#-------------------------------------------------------------#
| 7 | 6    | 5    | 4    | 3      | 2       | 1      | 0      |
#------------------------------------------------------------*/

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

#define TMR1GIE                                  0x2
#define TMR1GIE_address                          0xF9D
#define TMR1GIE_position                         0x2
#define TMR1GIE_size                             0x1
#define TMR1GIE_value_mask                       0x4
#define TMR1GIE_clear_mask                       0xFB

#define SSP1IE                                   0x3
#define SSP1IE_address                           0xF9D
#define SSP1IE_position                          0x3
#define SSP1IE_size                              0x1
#define SSP1IE_value_mask                        0x8
#define SSP1IE_clear_mask                        0xF7

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


/*------------------------------------------------------------#
| PIR1                                                  0xF9E |
#-------------------------------------------------------------#
| - | ADIF | RCIF | TXIF | SSP1IF | TMR1GIF | TMR2IF | TMR1IF |
#-------------------------------------------------------------#
| 7 | 6    | 5    | 4    | 3      | 2       | 1      | 0      |
#------------------------------------------------------------*/

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

#define TMR1GIF                                  0x2
#define TMR1GIF_address                          0xF9E
#define TMR1GIF_position                         0x2
#define TMR1GIF_size                             0x1
#define TMR1GIF_value_mask                       0x4
#define TMR1GIF_clear_mask                       0xFB

#define SSPIF                                    0x3
#define SSPIF_address                            0xF9E
#define SSPIF_position                           0x3
#define SSPIF_size                               0x1
#define SSPIF_value_mask                         0x8
#define SSPIF_clear_mask                         0xF7

#define SSP1IF                                   0x3
#define SSP1IF_address                           0xF9E
#define SSP1IF_position                          0x3
#define SSP1IF_size                              0x1
#define SSP1IF_value_mask                        0x8
#define SSP1IF_clear_mask                        0xF7

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


/*-------------------------------------------------------------#
| IPR1                                                   0xF9F |
#--------------------------------------------------------------#
| - | ADIP | RC1IP | TX1IP | SSPIP | TMR1GIP | TMR2IP | TMR1IP |
#--------------------------------------------------------------#
| 7 | 6    | 5     | 4     | 3     | 2       | 1      | 0      |
#-------------------------------------------------------------*/

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

#define TMR1GIP                                  0x2
#define TMR1GIP_address                          0xF9F
#define TMR1GIP_position                         0x2
#define TMR1GIP_size                             0x1
#define TMR1GIP_value_mask                       0x4
#define TMR1GIP_clear_mask                       0xFB

#define SSPIP                                    0x3
#define SSPIP_address                            0xF9F
#define SSPIP_position                           0x3
#define SSPIP_size                               0x1
#define SSPIP_value_mask                         0x8
#define SSPIP_clear_mask                         0xF7

#define SSP1IP                                   0x3
#define SSP1IP_address                           0xF9F
#define SSP1IP_position                          0x3
#define SSP1IP_size                              0x1
#define SSP1IP_value_mask                        0x8
#define SSP1IP_clear_mask                        0xF7

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

#define RCIP                                     0x5
#define RCIP_address                             0xF9F
#define RCIP_position                            0x5
#define RCIP_size                                0x1
#define RCIP_value_mask                          0x20
#define RCIP_clear_mask                          0xDF

#define RC1IP                                    0x5
#define RC1IP_address                            0xF9F
#define RC1IP_position                           0x5
#define RC1IP_size                               0x1
#define RC1IP_value_mask                         0x20
#define RC1IP_clear_mask                         0xDF

#define ADIP                                     0x6
#define ADIP_address                             0xF9F
#define ADIP_position                            0x6
#define ADIP_size                                0x1
#define ADIP_value_mask                          0x40
#define ADIP_clear_mask                          0xBF


/*------------------------------------------------------------------#
| PIE2                                                        0xFA0 |
#-------------------------------------------------------------------#
| OSCFIE | - | SSP2IE | BCL2IE | BCL1IE | HLVDIE | TMR3IE | TMR3GIE |
#-------------------------------------------------------------------#
| 7      | 6 | 5      | 4      | 3      | 2      | 1      | 0       |
#------------------------------------------------------------------*/

#define PIE2                                     0x0
#define PIE2_address                             0xFA0
#define PIE2_position                            0x0
#define PIE2_size                                0x8
#define PIE2_value_mask                          0xFF
#define PIE2_clear_mask                          0x0

#define TMR3GIE                                  0x0
#define TMR3GIE_address                          0xFA0
#define TMR3GIE_position                         0x0
#define TMR3GIE_size                             0x1
#define TMR3GIE_value_mask                       0x1
#define TMR3GIE_clear_mask                       0xFE

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

#define BCL1IE                                   0x3
#define BCL1IE_address                           0xFA0
#define BCL1IE_position                          0x3
#define BCL1IE_size                              0x1
#define BCL1IE_value_mask                        0x8
#define BCL1IE_clear_mask                        0xF7

#define BCLIE                                    0x3
#define BCLIE_address                            0xFA0
#define BCLIE_position                           0x3
#define BCLIE_size                               0x1
#define BCLIE_value_mask                         0x8
#define BCLIE_clear_mask                         0xF7

#define BCL2IE                                   0x4
#define BCL2IE_address                           0xFA0
#define BCL2IE_position                          0x4
#define BCL2IE_size                              0x1
#define BCL2IE_value_mask                        0x10
#define BCL2IE_clear_mask                        0xEF

#define SSP2IE                                   0x5
#define SSP2IE_address                           0xFA0
#define SSP2IE_position                          0x5
#define SSP2IE_size                              0x1
#define SSP2IE_value_mask                        0x20
#define SSP2IE_clear_mask                        0xDF

#define OSCFIE                                   0x7
#define OSCFIE_address                           0xFA0
#define OSCFIE_position                          0x7
#define OSCFIE_size                              0x1
#define OSCFIE_value_mask                        0x80
#define OSCFIE_clear_mask                        0x7F


/*-----------------------------------------------------------------#
| PIR2                                                       0xFA1 |
#------------------------------------------------------------------#
| OSCFIF | - | SSP2IF | BCL2IF | BCLIF | HLVDIF | TMR3IF | TMR3GIF |
#------------------------------------------------------------------#
| 7      | 6 | 5      | 4      | 3     | 2      | 1      | 0       |
#-----------------------------------------------------------------*/

#define PIR2                                     0x0
#define PIR2_address                             0xFA1
#define PIR2_position                            0x0
#define PIR2_size                                0x8
#define PIR2_value_mask                          0xFF
#define PIR2_clear_mask                          0x0

#define TMR3GIF                                  0x0
#define TMR3GIF_address                          0xFA1
#define TMR3GIF_position                         0x0
#define TMR3GIF_size                             0x1
#define TMR3GIF_value_mask                       0x1
#define TMR3GIF_clear_mask                       0xFE

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

#define BCL1IF                                   0x3
#define BCL1IF_address                           0xFA1
#define BCL1IF_position                          0x3
#define BCL1IF_size                              0x1
#define BCL1IF_value_mask                        0x8
#define BCL1IF_clear_mask                        0xF7

#define BCL2IF                                   0x4
#define BCL2IF_address                           0xFA1
#define BCL2IF_position                          0x4
#define BCL2IF_size                              0x1
#define BCL2IF_value_mask                        0x10
#define BCL2IF_clear_mask                        0xEF

#define SSP2IF                                   0x5
#define SSP2IF_address                           0xFA1
#define SSP2IF_position                          0x5
#define SSP2IF_size                              0x1
#define SSP2IF_value_mask                        0x20
#define SSP2IF_clear_mask                        0xDF

#define OSCFIF                                   0x7
#define OSCFIF_address                           0xFA1
#define OSCFIF_position                          0x7
#define OSCFIF_size                              0x1
#define OSCFIF_value_mask                        0x80
#define OSCFIF_clear_mask                        0x7F


/*------------------------------------------------------------------#
| IPR2                                                        0xFA2 |
#-------------------------------------------------------------------#
| OSCFIP | - | SSP2IP | BCL2IP | BCL1IP | HLVDIP | TMR3IP | TMR3GIP |
#-------------------------------------------------------------------#
| 7      | 6 | 5      | 4      | 3      | 2      | 1      | 0       |
#------------------------------------------------------------------*/

#define IPR2                                     0x0
#define IPR2_address                             0xFA2
#define IPR2_position                            0x0
#define IPR2_size                                0x8
#define IPR2_value_mask                          0xFF
#define IPR2_clear_mask                          0x0

#define TMR3GIP                                  0x0
#define TMR3GIP_address                          0xFA2
#define TMR3GIP_position                         0x0
#define TMR3GIP_size                             0x1
#define TMR3GIP_value_mask                       0x1
#define TMR3GIP_clear_mask                       0xFE

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

#define BCL1IP                                   0x3
#define BCL1IP_address                           0xFA2
#define BCL1IP_position                          0x3
#define BCL1IP_size                              0x1
#define BCL1IP_value_mask                        0x8
#define BCL1IP_clear_mask                        0xF7

#define BCL2IP                                   0x4
#define BCL2IP_address                           0xFA2
#define BCL2IP_position                          0x4
#define BCL2IP_size                              0x1
#define BCL2IP_value_mask                        0x10
#define BCL2IP_clear_mask                        0xEF

#define SSP2IP                                   0x5
#define SSP2IP_address                           0xFA2
#define SSP2IP_position                          0x5
#define SSP2IP_size                              0x1
#define SSP2IP_value_mask                        0x20
#define SSP2IP_clear_mask                        0xDF

#define OSCFIP                                   0x7
#define OSCFIP_address                           0xFA2
#define OSCFIP_position                          0x7
#define OSCFIP_size                              0x1
#define OSCFIP_value_mask                        0x80
#define OSCFIP_clear_mask                        0x7F


/*---------------------------------------------------------------------#
| PIE3                                                           0xFA3 |
#----------------------------------------------------------------------#
| TMR5GIE | LCDIE | RC2IE | TXB2IE | CTMUIE | CCP2IE | RXBNIE | RTCCIE |
#----------------------------------------------------------------------#
| 7       | 6     | 5     | 4      | 3      | 2      | 1      | 0      |
#---------------------------------------------------------------------*/

#define PIE3                                     0x0
#define PIE3_address                             0xFA3
#define PIE3_position                            0x0
#define PIE3_size                                0x8
#define PIE3_value_mask                          0xFF
#define PIE3_clear_mask                          0x0

#define RXB0IE                                   0x0
#define RXB0IE_address                           0xFA3
#define RXB0IE_position                          0x0
#define RXB0IE_size                              0x1
#define RXB0IE_value_mask                        0x1
#define RXB0IE_clear_mask                        0xFE

#define RTCCIE                                   0x0
#define RTCCIE_address                           0xFA3
#define RTCCIE_position                          0x0
#define RTCCIE_size                              0x1
#define RTCCIE_value_mask                        0x1
#define RTCCIE_clear_mask                        0xFE

#define RXBNIE                                   0x1
#define RXBNIE_address                           0xFA3
#define RXBNIE_position                          0x1
#define RXBNIE_size                              0x1
#define RXBNIE_value_mask                        0x2
#define RXBNIE_clear_mask                        0xFD

#define CCP1IE                                   0x1
#define CCP1IE_address                           0xFA3
#define CCP1IE_position                          0x1
#define CCP1IE_size                              0x1
#define CCP1IE_value_mask                        0x2
#define CCP1IE_clear_mask                        0xFD

#define RXB1IE                                   0x1
#define RXB1IE_address                           0xFA3
#define RXB1IE_position                          0x1
#define RXB1IE_size                              0x1
#define RXB1IE_value_mask                        0x2
#define RXB1IE_clear_mask                        0xFD

#define CCP2IE                                   0x2
#define CCP2IE_address                           0xFA3
#define CCP2IE_position                          0x2
#define CCP2IE_size                              0x1
#define CCP2IE_value_mask                        0x4
#define CCP2IE_clear_mask                        0xFB

#define TXB0IE                                   0x2
#define TXB0IE_address                           0xFA3
#define TXB0IE_position                          0x2
#define TXB0IE_size                              0x1
#define TXB0IE_value_mask                        0x4
#define TXB0IE_clear_mask                        0xFB

#define CTMUIE                                   0x3
#define CTMUIE_address                           0xFA3
#define CTMUIE_position                          0x3
#define CTMUIE_size                              0x1
#define CTMUIE_value_mask                        0x8
#define CTMUIE_clear_mask                        0xF7

#define TXB1IE                                   0x3
#define TXB1IE_address                           0xFA3
#define TXB1IE_position                          0x3
#define TXB1IE_size                              0x1
#define TXB1IE_value_mask                        0x8
#define TXB1IE_clear_mask                        0xF7

#define TXBNIE                                   0x4
#define TXBNIE_address                           0xFA3
#define TXBNIE_position                          0x4
#define TXBNIE_size                              0x1
#define TXBNIE_value_mask                        0x10
#define TXBNIE_clear_mask                        0xEF

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

#define TMR5GIE                                  0x7
#define TMR5GIE_address                          0xFA3
#define TMR5GIE_position                         0x7
#define TMR5GIE_size                             0x1
#define TMR5GIE_value_mask                       0x80
#define TMR5GIE_clear_mask                       0x7F


/*---------------------------------------------------------------------#
| PIR3                                                           0xFA4 |
#----------------------------------------------------------------------#
| TMR5GIF | LCDIF | RC2IF | TXBNIF | CTMUIF | CCP2IF | RXBNIF | RTCCIF |
#----------------------------------------------------------------------#
| 7       | 6     | 5     | 4      | 3      | 2      | 1      | 0      |
#---------------------------------------------------------------------*/

#define PIR3                                     0x0
#define PIR3_address                             0xFA4
#define PIR3_position                            0x0
#define PIR3_size                                0x8
#define PIR3_value_mask                          0xFF
#define PIR3_clear_mask                          0x0

#define RTCCIF                                   0x0
#define RTCCIF_address                           0xFA4
#define RTCCIF_position                          0x0
#define RTCCIF_size                              0x1
#define RTCCIF_value_mask                        0x1
#define RTCCIF_clear_mask                        0xFE

#define RXBNIF                                   0x1
#define RXBNIF_address                           0xFA4
#define RXBNIF_position                          0x1
#define RXBNIF_size                              0x1
#define RXBNIF_value_mask                        0x2
#define RXBNIF_clear_mask                        0xFD

#define CCP1IF                                   0x1
#define CCP1IF_address                           0xFA4
#define CCP1IF_position                          0x1
#define CCP1IF_size                              0x1
#define CCP1IF_value_mask                        0x2
#define CCP1IF_clear_mask                        0xFD

#define CCP2IF                                   0x2
#define CCP2IF_address                           0xFA4
#define CCP2IF_position                          0x2
#define CCP2IF_size                              0x1
#define CCP2IF_value_mask                        0x4
#define CCP2IF_clear_mask                        0xFB

#define CTMUIF                                   0x3
#define CTMUIF_address                           0xFA4
#define CTMUIF_position                          0x3
#define CTMUIF_size                              0x1
#define CTMUIF_value_mask                        0x8
#define CTMUIF_clear_mask                        0xF7

#define TXBNIF                                   0x4
#define TXBNIF_address                           0xFA4
#define TXBNIF_position                          0x4
#define TXBNIF_size                              0x1
#define TXBNIF_value_mask                        0x10
#define TXBNIF_clear_mask                        0xEF

#define TX2IF                                    0x4
#define TX2IF_address                            0xFA4
#define TX2IF_position                           0x4
#define TX2IF_size                               0x1
#define TX2IF_value_mask                         0x10
#define TX2IF_clear_mask                         0xEF

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

#define TMR5GIF                                  0x7
#define TMR5GIF_address                          0xFA4
#define TMR5GIF_position                         0x7
#define TMR5GIF_size                             0x1
#define TMR5GIF_value_mask                       0x80
#define TMR5GIF_clear_mask                       0x7F


/*--------------------------------------------------------------------#
| IPR3                                                          0xFA5 |
#---------------------------------------------------------------------#
| TMR5GIP | LCDIP | RC2IP | TX2IP | CTMUIP | CCP2IP | RXBNIP | RTCCIP |
#---------------------------------------------------------------------#
| 7       | 6     | 5     | 4     | 3      | 2      | 1      | 0      |
#--------------------------------------------------------------------*/

#define IPR3                                     0x0
#define IPR3_address                             0xFA5
#define IPR3_position                            0x0
#define IPR3_size                                0x8
#define IPR3_value_mask                          0xFF
#define IPR3_clear_mask                          0x0

#define RTCCIP                                   0x0
#define RTCCIP_address                           0xFA5
#define RTCCIP_position                          0x0
#define RTCCIP_size                              0x1
#define RTCCIP_value_mask                        0x1
#define RTCCIP_clear_mask                        0xFE

#define CCP1IP                                   0x1
#define CCP1IP_address                           0xFA5
#define CCP1IP_position                          0x1
#define CCP1IP_size                              0x1
#define CCP1IP_value_mask                        0x2
#define CCP1IP_clear_mask                        0xFD

#define RXBNIP                                   0x1
#define RXBNIP_address                           0xFA5
#define RXBNIP_position                          0x1
#define RXBNIP_size                              0x1
#define RXBNIP_value_mask                        0x2
#define RXBNIP_clear_mask                        0xFD

#define CCP2IP                                   0x2
#define CCP2IP_address                           0xFA5
#define CCP2IP_position                          0x2
#define CCP2IP_size                              0x1
#define CCP2IP_value_mask                        0x4
#define CCP2IP_clear_mask                        0xFB

#define CTMUIP                                   0x3
#define CTMUIP_address                           0xFA5
#define CTMUIP_position                          0x3
#define CTMUIP_size                              0x1
#define CTMUIP_value_mask                        0x8
#define CTMUIP_clear_mask                        0xF7

#define TX2IP                                    0x4
#define TX2IP_address                            0xFA5
#define TX2IP_position                           0x4
#define TX2IP_size                               0x1
#define TX2IP_value_mask                         0x10
#define TX2IP_clear_mask                         0xEF

#define TXBNIP                                   0x4
#define TXBNIP_address                           0xFA5
#define TXBNIP_position                          0x4
#define TXBNIP_size                              0x1
#define TXBNIP_value_mask                        0x10
#define TXBNIP_clear_mask                        0xEF

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

#define TMR5GIP                                  0x7
#define TMR5GIP_address                          0xFA5
#define TMR5GIP_position                         0x7
#define TMR5GIP_size                             0x1
#define TMR5GIP_value_mask                       0x80
#define TMR5GIP_clear_mask                       0x7F


/*------------------------------------------------#
| PIR6                                      0xFA6 |
#-------------------------------------------------#
| - | - | - | EEIF | - | CMP3IF | CMP2IF | CMP1IF |
#-------------------------------------------------#
| 7 | 6 | 5 | 4    | 3 | 2      | 1      | 0      |
#------------------------------------------------*/

#define PIR6                                     0x0
#define PIR6_address                             0xFA6
#define PIR6_position                            0x0
#define PIR6_size                                0x8
#define PIR6_value_mask                          0xFF
#define PIR6_clear_mask                          0x0

#define CMP1IF                                   0x0
#define CMP1IF_address                           0xFA6
#define CMP1IF_position                          0x0
#define CMP1IF_size                              0x1
#define CMP1IF_value_mask                        0x1
#define CMP1IF_clear_mask                        0xFE

#define CMP2IF                                   0x1
#define CMP2IF_address                           0xFA6
#define CMP2IF_position                          0x1
#define CMP2IF_size                              0x1
#define CMP2IF_value_mask                        0x2
#define CMP2IF_clear_mask                        0xFD

#define CMP3IF                                   0x2
#define CMP3IF_address                           0xFA6
#define CMP3IF_position                          0x2
#define CMP3IF_size                              0x1
#define CMP3IF_value_mask                        0x4
#define CMP3IF_clear_mask                        0xFB

#define EEIF                                     0x4
#define EEIF_address                             0xFA6
#define EEIF_position                            0x4
#define EEIF_size                                0x1
#define EEIF_value_mask                          0x10
#define EEIF_clear_mask                          0xEF


/*---------------------------------------------------------------------#
| HLVDCON                                                        0xFA8 |
#----------------------------------------------------------------------#
| VDIRMAG | BGVST | IRVST | HLVDEN | HLVDL3 | HLVDL2 | HLVDL1 | HLVDL0 |
#----------------------------------------------------------------------#
| 7       | 6     | 5     | 4      | 3      | 2      | 1      | 0      |
#---------------------------------------------------------------------*/

#define HLVDCON                                  0x0
#define HLVDCON_address                          0xFA8
#define HLVDCON_position                         0x0
#define HLVDCON_size                             0x8
#define HLVDCON_value_mask                       0xFF
#define HLVDCON_clear_mask                       0x0

#define HLVDL                                    0x0
#define HLVDL_address                            0xFA8
#define HLVDL_position                           0x0
#define HLVDL_size                               0x4
#define HLVDL_value_mask                         0xF
#define HLVDL_clear_mask                         0xF0

#define HLVDL0                                   0x0
#define HLVDL0_address                           0xFA8
#define HLVDL0_position                          0x0
#define HLVDL0_size                              0x1
#define HLVDL0_value_mask                        0x1
#define HLVDL0_clear_mask                        0xFE

#define HLVDL1                                   0x1
#define HLVDL1_address                           0xFA8
#define HLVDL1_position                          0x1
#define HLVDL1_size                              0x1
#define HLVDL1_value_mask                        0x2
#define HLVDL1_clear_mask                        0xFD

#define HLVDL2                                   0x2
#define HLVDL2_address                           0xFA8
#define HLVDL2_position                          0x2
#define HLVDL2_size                              0x1
#define HLVDL2_value_mask                        0x4
#define HLVDL2_clear_mask                        0xFB

#define HLVDL3                                   0x3
#define HLVDL3_address                           0xFA8
#define HLVDL3_position                          0x3
#define HLVDL3_size                              0x1
#define HLVDL3_value_mask                        0x8
#define HLVDL3_clear_mask                        0xF7

#define HLVDEN                                   0x4
#define HLVDEN_address                           0xFA8
#define HLVDEN_position                          0x4
#define HLVDEN_size                              0x1
#define HLVDEN_value_mask                        0x10
#define HLVDEN_clear_mask                        0xEF

#define IRVST                                    0x5
#define IRVST_address                            0xFA8
#define IRVST_position                           0x5
#define IRVST_size                               0x1
#define IRVST_value_mask                         0x20
#define IRVST_clear_mask                         0xDF

#define BGVST                                    0x6
#define BGVST_address                            0xFA8
#define BGVST_position                           0x6
#define BGVST_size                               0x1
#define BGVST_value_mask                         0x40
#define BGVST_clear_mask                         0xBF

#define VDIRMAG                                  0x7
#define VDIRMAG_address                          0xFA8
#define VDIRMAG_position                         0x7
#define VDIRMAG_size                             0x1
#define VDIRMAG_value_mask                       0x80
#define VDIRMAG_clear_mask                       0x7F


/*------------------------------------------------#
| IPR6                                      0xFA9 |
#-------------------------------------------------#
| - | - | - | EEIP | - | CMP3IP | CMP2IP | CMP1IP |
#-------------------------------------------------#
| 7 | 6 | 5 | 4    | 3 | 2      | 1      | 0      |
#------------------------------------------------*/

#define IPR6                                     0x0
#define IPR6_address                             0xFA9
#define IPR6_position                            0x0
#define IPR6_size                                0x8
#define IPR6_value_mask                          0xFF
#define IPR6_clear_mask                          0x0

#define CMP1IP                                   0x0
#define CMP1IP_address                           0xFA9
#define CMP1IP_position                          0x0
#define CMP1IP_size                              0x1
#define CMP1IP_value_mask                        0x1
#define CMP1IP_clear_mask                        0xFE

#define CMP2IP                                   0x1
#define CMP2IP_address                           0xFA9
#define CMP2IP_position                          0x1
#define CMP2IP_size                              0x1
#define CMP2IP_value_mask                        0x2
#define CMP2IP_clear_mask                        0xFD

#define CMP3IP                                   0x2
#define CMP3IP_address                           0xFA9
#define CMP3IP_position                          0x2
#define CMP3IP_size                              0x1
#define CMP3IP_value_mask                        0x4
#define CMP3IP_clear_mask                        0xFB

#define EEIP                                     0x4
#define EEIP_address                             0xFA9
#define EEIP_position                            0x4
#define EEIP_size                                0x1
#define EEIP_value_mask                          0x10
#define EEIP_clear_mask                          0xEF


/*----------------------------------------------------------------------------#
| T1GCON                                                                0xFAA |
#-----------------------------------------------------------------------------#
| TMR1GE | T1GPOL | T1GTM | T1GSPM | T1GGO_nT1DONE | T1GVAL | T1GSS1 | T1GSS0 |
#-----------------------------------------------------------------------------#
| 7      | 6      | 5     | 4      | 3             | 2      | 1      | 0      |
#----------------------------------------------------------------------------*/

#define T1GCON                                   0x0
#define T1GCON_address                           0xFAA
#define T1GCON_position                          0x0
#define T1GCON_size                              0x8
#define T1GCON_value_mask                        0xFF
#define T1GCON_clear_mask                        0x0

#define T1GSS0                                   0x0
#define T1GSS0_address                           0xFAA
#define T1GSS0_position                          0x0
#define T1GSS0_size                              0x1
#define T1GSS0_value_mask                        0x1
#define T1GSS0_clear_mask                        0xFE

#define T1GSS                                    0x0
#define T1GSS_address                            0xFAA
#define T1GSS_position                           0x0
#define T1GSS_size                               0x2
#define T1GSS_value_mask                         0x3
#define T1GSS_clear_mask                         0xFC

#define T1GSS1                                   0x1
#define T1GSS1_address                           0xFAA
#define T1GSS1_position                          0x1
#define T1GSS1_size                              0x1
#define T1GSS1_value_mask                        0x2
#define T1GSS1_clear_mask                        0xFD

#define T1GVAL                                   0x2
#define T1GVAL_address                           0xFAA
#define T1GVAL_position                          0x2
#define T1GVAL_size                              0x1
#define T1GVAL_value_mask                        0x4
#define T1GVAL_clear_mask                        0xFB

#define T1GGO_nT1DONE                            0x3
#define T1GGO_nT1DONE_address                    0xFAA
#define T1GGO_nT1DONE_position                   0x3
#define T1GGO_nT1DONE_size                       0x1
#define T1GGO_nT1DONE_value_mask                 0x8
#define T1GGO_nT1DONE_clear_mask                 0xF7

#define nT1DONE                                  0x3
#define nT1DONE_address                          0xFAA
#define nT1DONE_position                         0x3
#define nT1DONE_size                             0x1
#define nT1DONE_value_mask                       0x8
#define nT1DONE_clear_mask                       0xF7

#define T1GGO_NOT_T1DONE                         0x3
#define T1GGO_NOT_T1DONE_address                 0xFAA
#define T1GGO_NOT_T1DONE_position                0x3
#define T1GGO_NOT_T1DONE_size                    0x1
#define T1GGO_NOT_T1DONE_value_mask              0x8
#define T1GGO_NOT_T1DONE_clear_mask              0xF7

#define NOT_T1DONE                               0x3
#define NOT_T1DONE_address                       0xFAA
#define NOT_T1DONE_position                      0x3
#define NOT_T1DONE_size                          0x1
#define NOT_T1DONE_value_mask                    0x8
#define NOT_T1DONE_clear_mask                    0xF7

#define T1GGO                                    0x3
#define T1GGO_address                            0xFAA
#define T1GGO_position                           0x3
#define T1GGO_size                               0x1
#define T1GGO_value_mask                         0x8
#define T1GGO_clear_mask                         0xF7

#define T1GSPM                                   0x4
#define T1GSPM_address                           0xFAA
#define T1GSPM_position                          0x4
#define T1GSPM_size                              0x1
#define T1GSPM_value_mask                        0x10
#define T1GSPM_clear_mask                        0xEF

#define T1GTM                                    0x5
#define T1GTM_address                            0xFAA
#define T1GTM_position                           0x5
#define T1GTM_size                               0x1
#define T1GTM_value_mask                         0x20
#define T1GTM_clear_mask                         0xDF

#define T1GPOL                                   0x6
#define T1GPOL_address                           0xFAA
#define T1GPOL_position                          0x6
#define T1GPOL_size                              0x1
#define T1GPOL_value_mask                        0x40
#define T1GPOL_clear_mask                        0xBF

#define TMR1GE                                   0x7
#define TMR1GE_address                           0xFAA
#define TMR1GE_position                          0x7
#define TMR1GE_size                              0x1
#define TMR1GE_value_mask                        0x80
#define TMR1GE_clear_mask                        0x7F


/*---------------------------------------------------------------------------------------------------#
| RCSTA1                                                                                       0xFAB |
#----------------------------------------------------------------------------------------------------#
| RCSTA1_SPEN | RC8_9 | SREN1 | RCSTA1_CREN | RCSTA1_ADDEN | RCSTA1_FERR | RCSTA1_OERR | RCSTA1_RX9D |
#----------------------------------------------------------------------------------------------------#
| 7           | 6     | 5     | 4           | 3            | 2           | 1           | 0           |
#---------------------------------------------------------------------------------------------------*/

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

#define RCD8                                     0x0
#define RCD8_address                             0xFAB
#define RCD8_position                            0x0
#define RCD8_size                                0x1
#define RCD8_value_mask                          0x1
#define RCD8_clear_mask                          0xFE

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

#define ADDEN1                                   0x3
#define ADDEN1_address                           0xFAB
#define ADDEN1_position                          0x3
#define ADDEN1_size                              0x1
#define ADDEN1_value_mask                        0x8
#define ADDEN1_clear_mask                        0xF7

#define ADEN                                     0x3
#define ADEN_address                             0xFAB
#define ADEN_position                            0x3
#define ADEN_size                                0x1
#define ADEN_value_mask                          0x8
#define ADEN_clear_mask                          0xF7

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

#define RC8_9                                    0x6
#define RC8_9_address                            0xFAB
#define RC8_9_position                           0x6
#define RC8_9_size                               0x1
#define RC8_9_value_mask                         0x40
#define RC8_9_clear_mask                         0xBF

#define RCSTA1_RX9                               0x6
#define RCSTA1_RX9_address                       0xFAB
#define RCSTA1_RX9_position                      0x6
#define RCSTA1_RX9_size                          0x1
#define RCSTA1_RX9_value_mask                    0x40
#define RCSTA1_RX9_clear_mask                    0xBF

#define nRC8                                     0x6
#define nRC8_address                             0xFAB
#define nRC8_position                            0x6
#define nRC8_size                                0x1
#define nRC8_value_mask                          0x40
#define nRC8_clear_mask                          0xBF

#define NOT_RC8                                  0x6
#define NOT_RC8_address                          0xFAB
#define NOT_RC8_position                         0x6
#define NOT_RC8_size                             0x1
#define NOT_RC8_value_mask                       0x40
#define NOT_RC8_clear_mask                       0xBF

#define RC9                                      0x6
#define RC9_address                              0xFAB
#define RC9_position                             0x6
#define RC9_size                                 0x1
#define RC9_value_mask                           0x40
#define RC9_clear_mask                           0xBF

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


/*-------------------------------------------------------------------------------------#
| TXSTA1                                                                         0xFAC |
#--------------------------------------------------------------------------------------#
| CSRC1 | TX91 | TXSTA1_TXEN | SYNC1 | TXSTA1_SENDB | TXSTA1_BRGH | TXSTA1_TRMT | TXD8 |
#--------------------------------------------------------------------------------------#
| 7     | 6    | 5           | 4     | 3            | 2           | 1           | 0    |
#-------------------------------------------------------------------------------------*/

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

#define TXD8                                     0x0
#define TXD8_address                             0xFAC
#define TXD8_position                            0x0
#define TXD8_size                                0x1
#define TXD8_value_mask                          0x1
#define TXD8_clear_mask                          0xFE

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

#define TXSTA1_SENDB                             0x3
#define TXSTA1_SENDB_address                     0xFAC
#define TXSTA1_SENDB_position                    0x3
#define TXSTA1_SENDB_size                        0x1
#define TXSTA1_SENDB_value_mask                  0x8
#define TXSTA1_SENDB_clear_mask                  0xF7

#define SENDB1                                   0x3
#define SENDB1_address                           0xFAC
#define SENDB1_position                          0x3
#define SENDB1_size                              0x1
#define SENDB1_value_mask                        0x8
#define SENDB1_clear_mask                        0xF7

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

#define TX8_9                                    0x6
#define TX8_9_address                            0xFAC
#define TX8_9_position                           0x6
#define TX8_9_size                               0x1
#define TX8_9_value_mask                         0x40
#define TX8_9_clear_mask                         0xBF

#define NOT_TX8                                  0x6
#define NOT_TX8_address                          0xFAC
#define NOT_TX8_position                         0x6
#define NOT_TX8_size                             0x1
#define NOT_TX8_value_mask                       0x40
#define NOT_TX8_clear_mask                       0xBF

#define nTX8                                     0x6
#define nTX8_address                             0xFAC
#define nTX8_position                            0x6
#define nTX8_size                                0x1
#define nTX8_value_mask                          0x40
#define nTX8_clear_mask                          0xBF

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


/*------------------------------#
| TXREG1                  0xFAD |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define TXREG1                                   0x0
#define TXREG1_address                           0xFAD
#define TXREG1_position                          0x0
#define TXREG1_size                              0x8
#define TXREG1_value_mask                        0xFF
#define TXREG1_clear_mask                        0x0


/*------------------------------#
| RCREG1                  0xFAE |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define RCREG1                                   0x0
#define RCREG1_address                           0xFAE
#define RCREG1_position                          0x0
#define RCREG1_size                              0x8
#define RCREG1_value_mask                        0xFF
#define RCREG1_clear_mask                        0x0


/*------------------------------#
| SPBRG1                  0xFAF |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define SPBRG1                                   0x0
#define SPBRG1_address                           0xFAF
#define SPBRG1_position                          0x0
#define SPBRG1_size                              0x8
#define SPBRG1_value_mask                        0xFF
#define SPBRG1_clear_mask                        0x0


/*--------------------------------------------------------------------#
| T3GCON                                                        0xFB0 |
#---------------------------------------------------------------------#
| TMR3GE | T3GPOL | T3GTM | T3GSPM | T3GGO | T3GVAL | T3GSS1 | T3GSS0 |
#---------------------------------------------------------------------#
| 7      | 6      | 5     | 4      | 3     | 2      | 1      | 0      |
#--------------------------------------------------------------------*/

#define T3GCON                                   0x0
#define T3GCON_address                           0xFB0
#define T3GCON_position                          0x0
#define T3GCON_size                              0x8
#define T3GCON_value_mask                        0xFF
#define T3GCON_clear_mask                        0x0

#define T3GSS0                                   0x0
#define T3GSS0_address                           0xFB0
#define T3GSS0_position                          0x0
#define T3GSS0_size                              0x1
#define T3GSS0_value_mask                        0x1
#define T3GSS0_clear_mask                        0xFE

#define T3GSS                                    0x0
#define T3GSS_address                            0xFB0
#define T3GSS_position                           0x0
#define T3GSS_size                               0x2
#define T3GSS_value_mask                         0x3
#define T3GSS_clear_mask                         0xFC

#define T3GSS1                                   0x1
#define T3GSS1_address                           0xFB0
#define T3GSS1_position                          0x1
#define T3GSS1_size                              0x1
#define T3GSS1_value_mask                        0x2
#define T3GSS1_clear_mask                        0xFD

#define T3GVAL                                   0x2
#define T3GVAL_address                           0xFB0
#define T3GVAL_position                          0x2
#define T3GVAL_size                              0x1
#define T3GVAL_value_mask                        0x4
#define T3GVAL_clear_mask                        0xFB

#define T3GGO                                    0x3
#define T3GGO_address                            0xFB0
#define T3GGO_position                           0x3
#define T3GGO_size                               0x1
#define T3GGO_value_mask                         0x8
#define T3GGO_clear_mask                         0xF7

#define NOT_T3DONE                               0x3
#define NOT_T3DONE_address                       0xFB0
#define NOT_T3DONE_position                      0x3
#define NOT_T3DONE_size                          0x1
#define NOT_T3DONE_value_mask                    0x8
#define NOT_T3DONE_clear_mask                    0xF7

#define nT3DONE                                  0x3
#define nT3DONE_address                          0xFB0
#define nT3DONE_position                         0x3
#define nT3DONE_size                             0x1
#define nT3DONE_value_mask                       0x8
#define nT3DONE_clear_mask                       0xF7

#define T3GGO_nT3DONE                            0x3
#define T3GGO_nT3DONE_address                    0xFB0
#define T3GGO_nT3DONE_position                   0x3
#define T3GGO_nT3DONE_size                       0x1
#define T3GGO_nT3DONE_value_mask                 0x8
#define T3GGO_nT3DONE_clear_mask                 0xF7

#define T3GGO_NOT_T3DONE                         0x3
#define T3GGO_NOT_T3DONE_address                 0xFB0
#define T3GGO_NOT_T3DONE_position                0x3
#define T3GGO_NOT_T3DONE_size                    0x1
#define T3GGO_NOT_T3DONE_value_mask              0x8
#define T3GGO_NOT_T3DONE_clear_mask              0xF7

#define T3GSPM                                   0x4
#define T3GSPM_address                           0xFB0
#define T3GSPM_position                          0x4
#define T3GSPM_size                              0x1
#define T3GSPM_value_mask                        0x10
#define T3GSPM_clear_mask                        0xEF

#define T3GTM                                    0x5
#define T3GTM_address                            0xFB0
#define T3GTM_position                           0x5
#define T3GTM_size                               0x1
#define T3GTM_value_mask                         0x20
#define T3GTM_clear_mask                         0xDF

#define T3GPOL                                   0x6
#define T3GPOL_address                           0xFB0
#define T3GPOL_position                          0x6
#define T3GPOL_size                              0x1
#define T3GPOL_value_mask                        0x40
#define T3GPOL_clear_mask                        0xBF

#define TMR3GE                                   0x7
#define TMR3GE_address                           0xFB0
#define TMR3GE_position                          0x7
#define TMR3GE_size                              0x1
#define TMR3GE_value_mask                        0x80
#define TMR3GE_clear_mask                        0x7F


/*--------------------------------------------------------------------------------#
| T3CON                                                                     0xFB1 |
#---------------------------------------------------------------------------------#
| TMR3CS1 | TMR3CS0 | T3CKPS1 | T3CKPS0 | SOSCEN3 | nT3SYNC | T3CON_RD16 | TMR3ON |
#---------------------------------------------------------------------------------#
| 7       | 6       | 5       | 4       | 3       | 2       | 1          | 0      |
#--------------------------------------------------------------------------------*/

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

#define T3CON_RD16                               0x1
#define T3CON_RD16_address                       0xFB1
#define T3CON_RD16_position                      0x1
#define T3CON_RD16_size                          0x1
#define T3CON_RD16_value_mask                    0x2
#define T3CON_RD16_clear_mask                    0xFD

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

#define SOSCEN3                                  0x3
#define SOSCEN3_address                          0xFB1
#define SOSCEN3_position                         0x3
#define SOSCEN3_size                             0x1
#define SOSCEN3_value_mask                       0x8
#define SOSCEN3_clear_mask                       0xF7

#define T3CON_SOSCEN                             0x3
#define T3CON_SOSCEN_address                     0xFB1
#define T3CON_SOSCEN_position                    0x3
#define T3CON_SOSCEN_size                        0x1
#define T3CON_SOSCEN_value_mask                  0x8
#define T3CON_SOSCEN_clear_mask                  0xF7

#define T3CKPS0                                  0x4
#define T3CKPS0_address                          0xFB1
#define T3CKPS0_position                         0x4
#define T3CKPS0_size                             0x1
#define T3CKPS0_value_mask                       0x10
#define T3CKPS0_clear_mask                       0xEF

#define T3CKPS                                   0x4
#define T3CKPS_address                           0xFB1
#define T3CKPS_position                          0x4
#define T3CKPS_size                              0x2
#define T3CKPS_value_mask                        0x30
#define T3CKPS_clear_mask                        0xCF

#define T3CKPS1                                  0x5
#define T3CKPS1_address                          0xFB1
#define T3CKPS1_position                         0x5
#define T3CKPS1_size                             0x1
#define T3CKPS1_value_mask                       0x20
#define T3CKPS1_clear_mask                       0xDF

#define TMR3CS                                   0x6
#define TMR3CS_address                           0xFB1
#define TMR3CS_position                          0x6
#define TMR3CS_size                              0x2
#define TMR3CS_value_mask                        0xC0
#define TMR3CS_clear_mask                        0x3F

#define TMR3CS0                                  0x6
#define TMR3CS0_address                          0xFB1
#define TMR3CS0_position                         0x6
#define TMR3CS0_size                             0x1
#define TMR3CS0_value_mask                       0x40
#define TMR3CS0_clear_mask                       0xBF

#define TMR3CS1                                  0x7
#define TMR3CS1_address                          0xFB1
#define TMR3CS1_position                         0x7
#define TMR3CS1_size                             0x1
#define TMR3CS1_value_mask                       0x80
#define TMR3CS1_clear_mask                       0x7F

#define T3RD16                                   0x7
#define T3RD16_address                           0xFB1
#define T3RD16_position                          0x7
#define T3RD16_size                              0x1
#define T3RD16_value_mask                        0x80
#define T3RD16_clear_mask                        0x7F

#define RD163                                    0x7
#define RD163_address                            0xFB1
#define RD163_position                           0x7
#define RD163_size                               0x1
#define RD163_value_mask                         0x80
#define RD163_clear_mask                         0x7F


/*------------------------------#
| TMR3L                   0xFB2 |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define TMR3L                                    0x0
#define TMR3L_address                            0xFB2
#define TMR3L_position                           0x0
#define TMR3L_size                               0x8
#define TMR3L_value_mask                         0xFF
#define TMR3L_clear_mask                         0x0


/*------------------------------#
| TMR3H                   0xFB3 |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define TMR3H                                    0x0
#define TMR3H_address                            0xFB3
#define TMR3H_position                           0x0
#define TMR3H_size                               0x8
#define TMR3H_value_mask                         0xFF
#define TMR3H_clear_mask                         0x0


/*----------------------------------------------------------#
| CMSTAT                                              0xFB4 |
#-----------------------------------------------------------#
| CMP3OUT | CMSTAT_C2OUT | CMSTAT_C1OUT | - | - | - | - | - |
#-----------------------------------------------------------#
| 7       | 6            | 5            | 4 | 3 | 2 | 1 | 0 |
#----------------------------------------------------------*/

#define CMSTAT                                   0x0
#define CMSTAT_address                           0xFB4
#define CMSTAT_position                          0x0
#define CMSTAT_size                              0x8
#define CMSTAT_value_mask                        0xFF
#define CMSTAT_clear_mask                        0x0

#define CMSTAT_C1OUT                             0x5
#define CMSTAT_C1OUT_address                     0xFB4
#define CMSTAT_C1OUT_position                    0x5
#define CMSTAT_C1OUT_size                        0x1
#define CMSTAT_C1OUT_value_mask                  0x20
#define CMSTAT_C1OUT_clear_mask                  0xDF

#define CMP1OUT                                  0x5
#define CMP1OUT_address                          0xFB4
#define CMP1OUT_position                         0x5
#define CMP1OUT_size                             0x1
#define CMP1OUT_value_mask                       0x20
#define CMP1OUT_clear_mask                       0xDF

#define CMSTAT_C2OUT                             0x6
#define CMSTAT_C2OUT_address                     0xFB4
#define CMSTAT_C2OUT_position                    0x6
#define CMSTAT_C2OUT_size                        0x1
#define CMSTAT_C2OUT_value_mask                  0x40
#define CMSTAT_C2OUT_clear_mask                  0xBF

#define CMP2OUT                                  0x6
#define CMP2OUT_address                          0xFB4
#define CMP2OUT_position                         0x6
#define CMP2OUT_size                             0x1
#define CMP2OUT_value_mask                       0x40
#define CMP2OUT_clear_mask                       0xBF

#define CMP3OUT                                  0x7
#define CMP3OUT_address                          0xFB4
#define CMP3OUT_position                         0x7
#define CMP3OUT_size                             0x1
#define CMP3OUT_value_mask                       0x80
#define CMP3OUT_clear_mask                       0x7F

#define CMSTAT_C3OUT                             0x7
#define CMSTAT_C3OUT_address                     0xFB4
#define CMSTAT_C3OUT_position                    0x7
#define CMSTAT_C3OUT_size                        0x1
#define CMSTAT_C3OUT_value_mask                  0x80
#define CMSTAT_C3OUT_clear_mask                  0x7F


/*----------------------------------------------------------#
| CVRCON                                              0xFB5 |
#-----------------------------------------------------------#
| CVREN | CVROEN | CVRSS | CVR4 | CVR3 | CVR2 | CVR1 | CVR0 |
#-----------------------------------------------------------#
| 7     | 6      | 5     | 4    | 3    | 2    | 1    | 0    |
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
#define CVR_size                                 0x5
#define CVR_value_mask                           0x1F
#define CVR_clear_mask                           0xE0

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

#define CVR4                                     0x4
#define CVR4_address                             0xFB5
#define CVR4_position                            0x4
#define CVR4_size                                0x1
#define CVR4_value_mask                          0x10
#define CVR4_clear_mask                          0xEF

#define CVRR                                     0x5
#define CVRR_address                             0xFB5
#define CVRR_position                            0x5
#define CVRR_size                                0x1
#define CVRR_value_mask                          0x20
#define CVRR_clear_mask                          0xDF

#define CVRSS                                    0x5
#define CVRSS_address                            0xFB5
#define CVRSS_position                           0x5
#define CVRSS_size                               0x1
#define CVRSS_value_mask                         0x20
#define CVRSS_clear_mask                         0xDF

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


/*-----------------------------------------------------------------------#
| PIE4                                                             0xFB6 |
#------------------------------------------------------------------------#
| CCP10IE | CCP9IE | CCP8IE | CCP7IE | CCP6IE | CCP5IE | CCP4IE | CCP3IE |
#------------------------------------------------------------------------#
| 7       | 6      | 5      | 4      | 3      | 2      | 1      | 0      |
#-----------------------------------------------------------------------*/

#define PIE4                                     0x0
#define PIE4_address                             0xFB6
#define PIE4_position                            0x0
#define PIE4_size                                0x8
#define PIE4_value_mask                          0xFF
#define PIE4_clear_mask                          0x0

#define CCP3IE                                   0x0
#define CCP3IE_address                           0xFB6
#define CCP3IE_position                          0x0
#define CCP3IE_size                              0x1
#define CCP3IE_value_mask                        0x1
#define CCP3IE_clear_mask                        0xFE

#define CCP4IE                                   0x1
#define CCP4IE_address                           0xFB6
#define CCP4IE_position                          0x1
#define CCP4IE_size                              0x1
#define CCP4IE_value_mask                        0x2
#define CCP4IE_clear_mask                        0xFD

#define CCP5IE                                   0x2
#define CCP5IE_address                           0xFB6
#define CCP5IE_position                          0x2
#define CCP5IE_size                              0x1
#define CCP5IE_value_mask                        0x4
#define CCP5IE_clear_mask                        0xFB

#define CCP6IE                                   0x3
#define CCP6IE_address                           0xFB6
#define CCP6IE_position                          0x3
#define CCP6IE_size                              0x1
#define CCP6IE_value_mask                        0x8
#define CCP6IE_clear_mask                        0xF7

#define CCP7IE                                   0x4
#define CCP7IE_address                           0xFB6
#define CCP7IE_position                          0x4
#define CCP7IE_size                              0x1
#define CCP7IE_value_mask                        0x10
#define CCP7IE_clear_mask                        0xEF

#define CCP8IE                                   0x5
#define CCP8IE_address                           0xFB6
#define CCP8IE_position                          0x5
#define CCP8IE_size                              0x1
#define CCP8IE_value_mask                        0x20
#define CCP8IE_clear_mask                        0xDF

#define CCP9IE                                   0x6
#define CCP9IE_address                           0xFB6
#define CCP9IE_position                          0x6
#define CCP9IE_size                              0x1
#define CCP9IE_value_mask                        0x40
#define CCP9IE_clear_mask                        0xBF

#define CCP10IE                                  0x7
#define CCP10IE_address                          0xFB6
#define CCP10IE_position                         0x7
#define CCP10IE_size                             0x1
#define CCP10IE_value_mask                       0x80
#define CCP10IE_clear_mask                       0x7F


/*-----------------------------------------------------------------------#
| PIR4                                                             0xFB7 |
#------------------------------------------------------------------------#
| CCP10IF | CCP9IF | CCP8IF | CCP7IF | CCP6IF | CCP5IF | CCP4IF | CCP3IF |
#------------------------------------------------------------------------#
| 7       | 6      | 5      | 4      | 3      | 2      | 1      | 0      |
#-----------------------------------------------------------------------*/

#define PIR4                                     0x0
#define PIR4_address                             0xFB7
#define PIR4_position                            0x0
#define PIR4_size                                0x8
#define PIR4_value_mask                          0xFF
#define PIR4_clear_mask                          0x0

#define CCP3IF                                   0x0
#define CCP3IF_address                           0xFB7
#define CCP3IF_position                          0x0
#define CCP3IF_size                              0x1
#define CCP3IF_value_mask                        0x1
#define CCP3IF_clear_mask                        0xFE

#define CCP4IF                                   0x1
#define CCP4IF_address                           0xFB7
#define CCP4IF_position                          0x1
#define CCP4IF_size                              0x1
#define CCP4IF_value_mask                        0x2
#define CCP4IF_clear_mask                        0xFD

#define CCP5IF                                   0x2
#define CCP5IF_address                           0xFB7
#define CCP5IF_position                          0x2
#define CCP5IF_size                              0x1
#define CCP5IF_value_mask                        0x4
#define CCP5IF_clear_mask                        0xFB

#define CCP6IF                                   0x3
#define CCP6IF_address                           0xFB7
#define CCP6IF_position                          0x3
#define CCP6IF_size                              0x1
#define CCP6IF_value_mask                        0x8
#define CCP6IF_clear_mask                        0xF7

#define CCP7IF                                   0x4
#define CCP7IF_address                           0xFB7
#define CCP7IF_position                          0x4
#define CCP7IF_size                              0x1
#define CCP7IF_value_mask                        0x10
#define CCP7IF_clear_mask                        0xEF

#define CCP8IF                                   0x5
#define CCP8IF_address                           0xFB7
#define CCP8IF_position                          0x5
#define CCP8IF_size                              0x1
#define CCP8IF_value_mask                        0x20
#define CCP8IF_clear_mask                        0xDF

#define CCP9IF                                   0x6
#define CCP9IF_address                           0xFB7
#define CCP9IF_position                          0x6
#define CCP9IF_size                              0x1
#define CCP9IF_value_mask                        0x40
#define CCP9IF_clear_mask                        0xBF

#define CCP10IF                                  0x7
#define CCP10IF_address                          0xFB7
#define CCP10IF_position                         0x7
#define CCP10IF_size                             0x1
#define CCP10IF_value_mask                       0x80
#define CCP10IF_clear_mask                       0x7F


/*-----------------------------------------------------------------------#
| IPR4                                                             0xFB8 |
#------------------------------------------------------------------------#
| CCP10IP | CCP9IP | CCP8IP | CCP7IP | CCP6IP | CCP5IP | CCP4IP | CCP3IP |
#------------------------------------------------------------------------#
| 7       | 6      | 5      | 4      | 3      | 2      | 1      | 0      |
#-----------------------------------------------------------------------*/

#define IPR4                                     0x0
#define IPR4_address                             0xFB8
#define IPR4_position                            0x0
#define IPR4_size                                0x8
#define IPR4_value_mask                          0xFF
#define IPR4_clear_mask                          0x0

#define CCP3IP                                   0x0
#define CCP3IP_address                           0xFB8
#define CCP3IP_position                          0x0
#define CCP3IP_size                              0x1
#define CCP3IP_value_mask                        0x1
#define CCP3IP_clear_mask                        0xFE

#define CCIP3IP                                  0x0
#define CCIP3IP_address                          0xFB8
#define CCIP3IP_position                         0x0
#define CCIP3IP_size                             0x1
#define CCIP3IP_value_mask                       0x1
#define CCIP3IP_clear_mask                       0xFE

#define CCP4IP                                   0x1
#define CCP4IP_address                           0xFB8
#define CCP4IP_position                          0x1
#define CCP4IP_size                              0x1
#define CCP4IP_value_mask                        0x2
#define CCP4IP_clear_mask                        0xFD

#define CCP5IP                                   0x2
#define CCP5IP_address                           0xFB8
#define CCP5IP_position                          0x2
#define CCP5IP_size                              0x1
#define CCP5IP_value_mask                        0x4
#define CCP5IP_clear_mask                        0xFB

#define CCP6IP                                   0x3
#define CCP6IP_address                           0xFB8
#define CCP6IP_position                          0x3
#define CCP6IP_size                              0x1
#define CCP6IP_value_mask                        0x8
#define CCP6IP_clear_mask                        0xF7

#define CCP7IP                                   0x4
#define CCP7IP_address                           0xFB8
#define CCP7IP_position                          0x4
#define CCP7IP_size                              0x1
#define CCP7IP_value_mask                        0x10
#define CCP7IP_clear_mask                        0xEF

#define CCP8IP                                   0x5
#define CCP8IP_address                           0xFB8
#define CCP8IP_position                          0x5
#define CCP8IP_size                              0x1
#define CCP8IP_value_mask                        0x20
#define CCP8IP_clear_mask                        0xDF

#define CCP9IP                                   0x6
#define CCP9IP_address                           0xFB8
#define CCP9IP_position                          0x6
#define CCP9IP_size                              0x1
#define CCP9IP_value_mask                        0x40
#define CCP9IP_clear_mask                        0xBF

#define CCP10IP                                  0x7
#define CCP10IP_address                          0xFB8
#define CCP10IP_position                         0x7
#define CCP10IP_size                             0x1
#define CCP10IP_value_mask                       0x80
#define CCP10IP_clear_mask                       0x7F


/*-------------------------------------------------------------------------#
| PIE5                                                               0xFB9 |
#--------------------------------------------------------------------------#
| TMR7GIE | TMR12IE | TMR10IE | TMR8IE | TMR7IE | TMR6IE | TMR5IE | TMR4IE |
#--------------------------------------------------------------------------#
| 7       | 6       | 5       | 4      | 3      | 2      | 1      | 0      |
#-------------------------------------------------------------------------*/

#define PIE5                                     0x0
#define PIE5_address                             0xFB9
#define PIE5_position                            0x0
#define PIE5_size                                0x8
#define PIE5_value_mask                          0xFF
#define PIE5_clear_mask                          0x0

#define TMR4IE                                   0x0
#define TMR4IE_address                           0xFB9
#define TMR4IE_position                          0x0
#define TMR4IE_size                              0x1
#define TMR4IE_value_mask                        0x1
#define TMR4IE_clear_mask                        0xFE

#define TMR5IE                                   0x1
#define TMR5IE_address                           0xFB9
#define TMR5IE_position                          0x1
#define TMR5IE_size                              0x1
#define TMR5IE_value_mask                        0x2
#define TMR5IE_clear_mask                        0xFD

#define TMR6IE                                   0x2
#define TMR6IE_address                           0xFB9
#define TMR6IE_position                          0x2
#define TMR6IE_size                              0x1
#define TMR6IE_value_mask                        0x4
#define TMR6IE_clear_mask                        0xFB

#define TMR7IE                                   0x3
#define TMR7IE_address                           0xFB9
#define TMR7IE_position                          0x3
#define TMR7IE_size                              0x1
#define TMR7IE_value_mask                        0x8
#define TMR7IE_clear_mask                        0xF7

#define TMR8IE                                   0x4
#define TMR8IE_address                           0xFB9
#define TMR8IE_position                          0x4
#define TMR8IE_size                              0x1
#define TMR8IE_value_mask                        0x10
#define TMR8IE_clear_mask                        0xEF

#define TMR10IE                                  0x5
#define TMR10IE_address                          0xFB9
#define TMR10IE_position                         0x5
#define TMR10IE_size                             0x1
#define TMR10IE_value_mask                       0x20
#define TMR10IE_clear_mask                       0xDF

#define TMR12IE                                  0x6
#define TMR12IE_address                          0xFB9
#define TMR12IE_position                         0x6
#define TMR12IE_size                             0x1
#define TMR12IE_value_mask                       0x40
#define TMR12IE_clear_mask                       0xBF

#define TMR7GIE                                  0x7
#define TMR7GIE_address                          0xFB9
#define TMR7GIE_position                         0x7
#define TMR7GIE_size                             0x1
#define TMR7GIE_value_mask                       0x80
#define TMR7GIE_clear_mask                       0x7F


/*-------------------------------------------------------------------------#
| PIR5                                                               0xFBA |
#--------------------------------------------------------------------------#
| TMR7GIF | TMR12IF | TMR10IF | TMR8IF | TMR7IF | TMR6IF | TMR5IF | TMR4IF |
#--------------------------------------------------------------------------#
| 7       | 6       | 5       | 4      | 3      | 2      | 1      | 0      |
#-------------------------------------------------------------------------*/

#define PIR5                                     0x0
#define PIR5_address                             0xFBA
#define PIR5_position                            0x0
#define PIR5_size                                0x8
#define PIR5_value_mask                          0xFF
#define PIR5_clear_mask                          0x0

#define TMR4IF                                   0x0
#define TMR4IF_address                           0xFBA
#define TMR4IF_position                          0x0
#define TMR4IF_size                              0x1
#define TMR4IF_value_mask                        0x1
#define TMR4IF_clear_mask                        0xFE

#define TMR5IF                                   0x1
#define TMR5IF_address                           0xFBA
#define TMR5IF_position                          0x1
#define TMR5IF_size                              0x1
#define TMR5IF_value_mask                        0x2
#define TMR5IF_clear_mask                        0xFD

#define TMR6IF                                   0x2
#define TMR6IF_address                           0xFBA
#define TMR6IF_position                          0x2
#define TMR6IF_size                              0x1
#define TMR6IF_value_mask                        0x4
#define TMR6IF_clear_mask                        0xFB

#define TMR7IF                                   0x3
#define TMR7IF_address                           0xFBA
#define TMR7IF_position                          0x3
#define TMR7IF_size                              0x1
#define TMR7IF_value_mask                        0x8
#define TMR7IF_clear_mask                        0xF7

#define TMR8IF                                   0x4
#define TMR8IF_address                           0xFBA
#define TMR8IF_position                          0x4
#define TMR8IF_size                              0x1
#define TMR8IF_value_mask                        0x10
#define TMR8IF_clear_mask                        0xEF

#define TMR10IF                                  0x5
#define TMR10IF_address                          0xFBA
#define TMR10IF_position                         0x5
#define TMR10IF_size                             0x1
#define TMR10IF_value_mask                       0x20
#define TMR10IF_clear_mask                       0xDF

#define TMR12IF                                  0x6
#define TMR12IF_address                          0xFBA
#define TMR12IF_position                         0x6
#define TMR12IF_size                             0x1
#define TMR12IF_value_mask                       0x40
#define TMR12IF_clear_mask                       0xBF

#define TMR7GIF                                  0x7
#define TMR7GIF_address                          0xFBA
#define TMR7GIF_position                         0x7
#define TMR7GIF_size                             0x1
#define TMR7GIF_value_mask                       0x80
#define TMR7GIF_clear_mask                       0x7F


/*----------------------------------------------------------------#
| CCP1CON                                                   0xFBB |
#-----------------------------------------------------------------#
| P1M1 | P1M0 | CCP1X | CCP1Y | CCP1M3 | CCP1M2 | CCP1M1 | CCP1M0 |
#-----------------------------------------------------------------#
| 7    | 6    | 5     | 4     | 3      | 2      | 1      | 0      |
#----------------------------------------------------------------*/

#define CCP1CON                                  0x0
#define CCP1CON_address                          0xFBB
#define CCP1CON_position                         0x0
#define CCP1CON_size                             0x8
#define CCP1CON_value_mask                       0xFF
#define CCP1CON_clear_mask                       0x0

#define CCP1M0                                   0x0
#define CCP1M0_address                           0xFBB
#define CCP1M0_position                          0x0
#define CCP1M0_size                              0x1
#define CCP1M0_value_mask                        0x1
#define CCP1M0_clear_mask                        0xFE

#define CCP1M                                    0x0
#define CCP1M_address                            0xFBB
#define CCP1M_position                           0x0
#define CCP1M_size                               0x4
#define CCP1M_value_mask                         0xF
#define CCP1M_clear_mask                         0xF0

#define CCP1M1                                   0x1
#define CCP1M1_address                           0xFBB
#define CCP1M1_position                          0x1
#define CCP1M1_size                              0x1
#define CCP1M1_value_mask                        0x2
#define CCP1M1_clear_mask                        0xFD

#define CCP1M2                                   0x2
#define CCP1M2_address                           0xFBB
#define CCP1M2_position                          0x2
#define CCP1M2_size                              0x1
#define CCP1M2_value_mask                        0x4
#define CCP1M2_clear_mask                        0xFB

#define CCP1M3                                   0x3
#define CCP1M3_address                           0xFBB
#define CCP1M3_position                          0x3
#define CCP1M3_size                              0x1
#define CCP1M3_value_mask                        0x8
#define CCP1M3_clear_mask                        0xF7

#define CCP1Y                                    0x4
#define CCP1Y_address                            0xFBB
#define CCP1Y_position                           0x4
#define CCP1Y_size                               0x1
#define CCP1Y_value_mask                         0x10
#define CCP1Y_clear_mask                         0xEF

#define DC1B                                     0x4
#define DC1B_address                             0xFBB
#define DC1B_position                            0x4
#define DC1B_size                                0x2
#define DC1B_value_mask                          0x30
#define DC1B_clear_mask                          0xCF

#define DC1B0                                    0x4
#define DC1B0_address                            0xFBB
#define DC1B0_position                           0x4
#define DC1B0_size                               0x1
#define DC1B0_value_mask                         0x10
#define DC1B0_clear_mask                         0xEF

#define CCP1X                                    0x5
#define CCP1X_address                            0xFBB
#define CCP1X_position                           0x5
#define CCP1X_size                               0x1
#define CCP1X_value_mask                         0x20
#define CCP1X_clear_mask                         0xDF

#define DC1B1                                    0x5
#define DC1B1_address                            0xFBB
#define DC1B1_position                           0x5
#define DC1B1_size                               0x1
#define DC1B1_value_mask                         0x20
#define DC1B1_clear_mask                         0xDF

#define P1M                                      0x6
#define P1M_address                              0xFBB
#define P1M_position                             0x6
#define P1M_size                                 0x2
#define P1M_value_mask                           0xC0
#define P1M_clear_mask                           0x3F

#define P1M0                                     0x6
#define P1M0_address                             0xFBB
#define P1M0_position                            0x6
#define P1M0_size                                0x1
#define P1M0_value_mask                          0x40
#define P1M0_clear_mask                          0xBF

#define P1M1                                     0x7
#define P1M1_address                             0xFBB
#define P1M1_position                            0x7
#define P1M1_size                                0x1
#define P1M1_value_mask                          0x80
#define P1M1_clear_mask                          0x7F


/*------------------------------#
| CCPR1L                  0xFBC |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define CCPR1L                                   0x0
#define CCPR1L_address                           0xFBC
#define CCPR1L_position                          0x0
#define CCPR1L_size                              0x8
#define CCPR1L_value_mask                        0xFF
#define CCPR1L_clear_mask                        0x0


/*------------------------------#
| CCPR1H                  0xFBD |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define CCPR1H                                   0x0
#define CCPR1H_address                           0xFBD
#define CCPR1H_position                          0x0
#define CCPR1H_size                              0x8
#define CCPR1H_value_mask                        0xFF
#define CCPR1H_clear_mask                        0x0


/*---------------------------------------------------------------#
| ECCP1DEL                                                 0xFBE |
#----------------------------------------------------------------#
| P1RSEN | P1DC6 | P1DC5 | P1DC4 | P1DC3 | P1DC2 | P1DC1 | P1DC0 |
#----------------------------------------------------------------#
| 7      | 6     | 5     | 4     | 3     | 2     | 1     | 0     |
#---------------------------------------------------------------*/

#define ECCP1DEL                                 0x0
#define ECCP1DEL_address                         0xFBE
#define ECCP1DEL_position                        0x0
#define ECCP1DEL_size                            0x8
#define ECCP1DEL_value_mask                      0xFF
#define ECCP1DEL_clear_mask                      0x0

#define P1DC                                     0x0
#define P1DC_address                             0xFBE
#define P1DC_position                            0x0
#define P1DC_size                                0x7
#define P1DC_value_mask                          0x7F
#define P1DC_clear_mask                          0x80

#define P1DC0                                    0x0
#define P1DC0_address                            0xFBE
#define P1DC0_position                           0x0
#define P1DC0_size                               0x1
#define P1DC0_value_mask                         0x1
#define P1DC0_clear_mask                         0xFE

#define P1DC1                                    0x1
#define P1DC1_address                            0xFBE
#define P1DC1_position                           0x1
#define P1DC1_size                               0x1
#define P1DC1_value_mask                         0x2
#define P1DC1_clear_mask                         0xFD

#define P1DC2                                    0x2
#define P1DC2_address                            0xFBE
#define P1DC2_position                           0x2
#define P1DC2_size                               0x1
#define P1DC2_value_mask                         0x4
#define P1DC2_clear_mask                         0xFB

#define P1DC3                                    0x3
#define P1DC3_address                            0xFBE
#define P1DC3_position                           0x3
#define P1DC3_size                               0x1
#define P1DC3_value_mask                         0x8
#define P1DC3_clear_mask                         0xF7

#define P1DC4                                    0x4
#define P1DC4_address                            0xFBE
#define P1DC4_position                           0x4
#define P1DC4_size                               0x1
#define P1DC4_value_mask                         0x10
#define P1DC4_clear_mask                         0xEF

#define P1DC5                                    0x5
#define P1DC5_address                            0xFBE
#define P1DC5_position                           0x5
#define P1DC5_size                               0x1
#define P1DC5_value_mask                         0x20
#define P1DC5_clear_mask                         0xDF

#define P1DC6                                    0x6
#define P1DC6_address                            0xFBE
#define P1DC6_position                           0x6
#define P1DC6_size                               0x1
#define P1DC6_value_mask                         0x40
#define P1DC6_clear_mask                         0xBF

#define P1RSEN                                   0x7
#define P1RSEN_address                           0xFBE
#define P1RSEN_position                          0x7
#define P1RSEN_size                              0x1
#define P1RSEN_value_mask                        0x80
#define P1RSEN_clear_mask                        0x7F


/*----------------------------------------------------------------------------------#
| ECCP1AS                                                                     0xFBF |
#-----------------------------------------------------------------------------------#
| ECCP1ASE | ECCP1AS2 | ECCP1AS1 | ECCP1AS0 | PSS1AC1 | PSS1AC0 | PSS1BD1 | PSS1BD0 |
#-----------------------------------------------------------------------------------#
| 7        | 6        | 5        | 4        | 3       | 2       | 1       | 0       |
#----------------------------------------------------------------------------------*/

#define PSS1BD0                                  0x0
#define PSS1BD0_address                          0xFBF
#define PSS1BD0_position                         0x0
#define PSS1BD0_size                             0x1
#define PSS1BD0_value_mask                       0x1
#define PSS1BD0_clear_mask                       0xFE

#define PSS1BD                                   0x0
#define PSS1BD_address                           0xFBF
#define PSS1BD_position                          0x0
#define PSS1BD_size                              0x2
#define PSS1BD_value_mask                        0x3
#define PSS1BD_clear_mask                        0xFC

#define PSS1BD1                                  0x1
#define PSS1BD1_address                          0xFBF
#define PSS1BD1_position                         0x1
#define PSS1BD1_size                             0x1
#define PSS1BD1_value_mask                       0x2
#define PSS1BD1_clear_mask                       0xFD

#define PSS1AC                                   0x2
#define PSS1AC_address                           0xFBF
#define PSS1AC_position                          0x2
#define PSS1AC_size                              0x2
#define PSS1AC_value_mask                        0xC
#define PSS1AC_clear_mask                        0xF3

#define PSS1AC0                                  0x2
#define PSS1AC0_address                          0xFBF
#define PSS1AC0_position                         0x2
#define PSS1AC0_size                             0x1
#define PSS1AC0_value_mask                       0x4
#define PSS1AC0_clear_mask                       0xFB

#define PSS1AC1                                  0x3
#define PSS1AC1_address                          0xFBF
#define PSS1AC1_position                         0x3
#define PSS1AC1_size                             0x1
#define PSS1AC1_value_mask                       0x8
#define PSS1AC1_clear_mask                       0xF7

#define ECCP1AS                                  0x4
#define ECCP1AS_address                          0xFBF
#define ECCP1AS_position                         0x4
#define ECCP1AS_size                             0x3
#define ECCP1AS_value_mask                       0x70
#define ECCP1AS_clear_mask                       0x8F

#define ECCP1AS0                                 0x4
#define ECCP1AS0_address                         0xFBF
#define ECCP1AS0_position                        0x4
#define ECCP1AS0_size                            0x1
#define ECCP1AS0_value_mask                      0x10
#define ECCP1AS0_clear_mask                      0xEF

#define ECCP1AS1                                 0x5
#define ECCP1AS1_address                         0xFBF
#define ECCP1AS1_position                        0x5
#define ECCP1AS1_size                            0x1
#define ECCP1AS1_value_mask                      0x20
#define ECCP1AS1_clear_mask                      0xDF

#define ECCP1AS2                                 0x6
#define ECCP1AS2_address                         0xFBF
#define ECCP1AS2_position                        0x6
#define ECCP1AS2_size                            0x1
#define ECCP1AS2_value_mask                      0x40
#define ECCP1AS2_clear_mask                      0xBF

#define ECCP1ASE                                 0x7
#define ECCP1ASE_address                         0xFBF
#define ECCP1ASE_position                        0x7
#define ECCP1ASE_size                            0x1
#define ECCP1ASE_value_mask                      0x80
#define ECCP1ASE_clear_mask                      0x7F


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


/*----------------------------------------------------------------------#
| ADCON1                                                          0xFC1 |
#-----------------------------------------------------------------------#
| TRIGSEL1 | TRIGSEL0 | VCFG11 | VCFG01 | VNCFG | CHSN2 | CHSN1 | CHSN0 |
#-----------------------------------------------------------------------#
| 7        | 6        | 5      | 4      | 3     | 2     | 1     | 0     |
#----------------------------------------------------------------------*/

#define ADCON1                                   0x0
#define ADCON1_address                           0xFC1
#define ADCON1_position                          0x0
#define ADCON1_size                              0x8
#define ADCON1_value_mask                        0xFF
#define ADCON1_clear_mask                        0x0

#define CHSN0                                    0x0
#define CHSN0_address                            0xFC1
#define CHSN0_position                           0x0
#define CHSN0_size                               0x1
#define CHSN0_value_mask                         0x1
#define CHSN0_clear_mask                         0xFE

#define CHSN                                     0x0
#define CHSN_address                             0xFC1
#define CHSN_position                            0x0
#define CHSN_size                                0x3
#define CHSN_value_mask                          0x7
#define CHSN_clear_mask                          0xF8

#define CHSN1                                    0x1
#define CHSN1_address                            0xFC1
#define CHSN1_position                           0x1
#define CHSN1_size                               0x1
#define CHSN1_value_mask                         0x2
#define CHSN1_clear_mask                         0xFD

#define CHSN2                                    0x2
#define CHSN2_address                            0xFC1
#define CHSN2_position                           0x2
#define CHSN2_size                               0x1
#define CHSN2_value_mask                         0x4
#define CHSN2_clear_mask                         0xFB

#define VNCFG                                    0x3
#define VNCFG_address                            0xFC1
#define VNCFG_position                           0x3
#define VNCFG_size                               0x1
#define VNCFG_value_mask                         0x8
#define VNCFG_clear_mask                         0xF7

#define CHSN3                                    0x3
#define CHSN3_address                            0xFC1
#define CHSN3_position                           0x3
#define CHSN3_size                               0x1
#define CHSN3_value_mask                         0x8
#define CHSN3_clear_mask                         0xF7

#define VCFG                                     0x4
#define VCFG_address                             0xFC1
#define VCFG_position                            0x4
#define VCFG_size                                0x2
#define VCFG_value_mask                          0x30
#define VCFG_clear_mask                          0xCF

#define VCFG01                                   0x4
#define VCFG01_address                           0xFC1
#define VCFG01_position                          0x4
#define VCFG01_size                              0x1
#define VCFG01_value_mask                        0x10
#define VCFG01_clear_mask                        0xEF

#define VCFG0                                    0x4
#define VCFG0_address                            0xFC1
#define VCFG0_position                           0x4
#define VCFG0_size                               0x1
#define VCFG0_value_mask                         0x10
#define VCFG0_clear_mask                         0xEF

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

#define TRIGSEL                                  0x6
#define TRIGSEL_address                          0xFC1
#define TRIGSEL_position                         0x6
#define TRIGSEL_size                             0x2
#define TRIGSEL_value_mask                       0xC0
#define TRIGSEL_clear_mask                       0x3F

#define TRIGSEL0                                 0x6
#define TRIGSEL0_address                         0xFC1
#define TRIGSEL0_position                        0x6
#define TRIGSEL0_size                            0x1
#define TRIGSEL0_value_mask                      0x40
#define TRIGSEL0_clear_mask                      0xBF

#define TRIGSEL1                                 0x7
#define TRIGSEL1_address                         0xFC1
#define TRIGSEL1_position                        0x7
#define TRIGSEL1_size                            0x1
#define TRIGSEL1_value_mask                      0x80
#define TRIGSEL1_clear_mask                      0x7F


/*----------------------------------------------------#
| ADCON0                                        0xFC2 |
#-----------------------------------------------------#
| - | CHS4 | CHS3 | CHS2 | CHS1 | CHS0 | nDONE | ADON |
#-----------------------------------------------------#
| 7 | 6    | 5    | 4    | 3    | 2    | 1     | 0    |
#----------------------------------------------------*/

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
#define CHS_size                                 0x5
#define CHS_value_mask                           0x7C
#define CHS_clear_mask                           0x83

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

#define CHS4                                     0x6
#define CHS4_address                             0xFC2
#define CHS4_position                            0x6
#define CHS4_size                                0x1
#define CHS4_value_mask                          0x40
#define CHS4_clear_mask                          0xBF


/*------------------------------#
| ADRESL                  0xFC3 |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define ADRESL                                   0x0
#define ADRESL_address                           0xFC3
#define ADRESL_position                          0x0
#define ADRESL_size                              0x8
#define ADRESL_value_mask                        0xFF
#define ADRESL_clear_mask                        0x0


/*------------------------------#
| ADRESH                  0xFC4 |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define ADRESH                                   0x0
#define ADRESH_address                           0xFC4
#define ADRESH_position                          0x0
#define ADRESH_size                              0x8
#define ADRESH_value_mask                        0xFF
#define ADRESH_clear_mask                        0x0


/*---------------------------------------------------------------------------------------------#
| SSP1CON2                                                                               0xFC5 |
#----------------------------------------------------------------------------------------------#
| GCEN1 | SSP1CON2_ACKSTAT | ACKDT1 | SSP1CON2_ACKEN | ADMSK31 | SSP1CON2_PEN | ADMSK11 | SEN1 |
#----------------------------------------------------------------------------------------------#
| 7     | 6                | 5      | 4              | 3       | 2            | 1       | 0    |
#---------------------------------------------------------------------------------------------*/

#define SSP1CON2                                 0x0
#define SSP1CON2_address                         0xFC5
#define SSP1CON2_position                        0x0
#define SSP1CON2_size                            0x8
#define SSP1CON2_value_mask                      0xFF
#define SSP1CON2_clear_mask                      0x0

#define SEN1                                     0x0
#define SEN1_address                             0xFC5
#define SEN1_position                            0x0
#define SEN1_size                                0x1
#define SEN1_value_mask                          0x1
#define SEN1_clear_mask                          0xFE

#define SSP1CON2_SEN                             0x0
#define SSP1CON2_SEN_address                     0xFC5
#define SSP1CON2_SEN_position                    0x0
#define SSP1CON2_SEN_size                        0x1
#define SSP1CON2_SEN_value_mask                  0x1
#define SSP1CON2_SEN_clear_mask                  0xFE

#define ADMSK11                                  0x1
#define ADMSK11_address                          0xFC5
#define ADMSK11_position                         0x1
#define ADMSK11_size                             0x1
#define ADMSK11_value_mask                       0x2
#define ADMSK11_clear_mask                       0xFD

#define SSP1CON2_RSEN                            0x1
#define SSP1CON2_RSEN_address                    0xFC5
#define SSP1CON2_RSEN_position                   0x1
#define SSP1CON2_RSEN_size                       0x1
#define SSP1CON2_RSEN_value_mask                 0x2
#define SSP1CON2_RSEN_clear_mask                 0xFD

#define RSEN1                                    0x1
#define RSEN1_address                            0xFC5
#define RSEN1_position                           0x1
#define RSEN1_size                               0x1
#define RSEN1_value_mask                         0x2
#define RSEN1_clear_mask                         0xFD

#define SSP1CON2_ADMSK1                          0x1
#define SSP1CON2_ADMSK1_address                  0xFC5
#define SSP1CON2_ADMSK1_position                 0x1
#define SSP1CON2_ADMSK1_size                     0x1
#define SSP1CON2_ADMSK1_value_mask               0x2
#define SSP1CON2_ADMSK1_clear_mask               0xFD

#define SSP1CON2_PEN                             0x2
#define SSP1CON2_PEN_address                     0xFC5
#define SSP1CON2_PEN_position                    0x2
#define SSP1CON2_PEN_size                        0x1
#define SSP1CON2_PEN_value_mask                  0x4
#define SSP1CON2_PEN_clear_mask                  0xFB

#define ADMSK21                                  0x2
#define ADMSK21_address                          0xFC5
#define ADMSK21_position                         0x2
#define ADMSK21_size                             0x1
#define ADMSK21_value_mask                       0x4
#define ADMSK21_clear_mask                       0xFB

#define PEN1                                     0x2
#define PEN1_address                             0xFC5
#define PEN1_position                            0x2
#define PEN1_size                                0x1
#define PEN1_value_mask                          0x4
#define PEN1_clear_mask                          0xFB

#define SSP1CON2_ADMSK2                          0x2
#define SSP1CON2_ADMSK2_address                  0xFC5
#define SSP1CON2_ADMSK2_position                 0x2
#define SSP1CON2_ADMSK2_size                     0x1
#define SSP1CON2_ADMSK2_value_mask               0x4
#define SSP1CON2_ADMSK2_clear_mask               0xFB

#define ADMSK31                                  0x3
#define ADMSK31_address                          0xFC5
#define ADMSK31_position                         0x3
#define ADMSK31_size                             0x1
#define ADMSK31_value_mask                       0x8
#define ADMSK31_clear_mask                       0xF7

#define RCEN1                                    0x3
#define RCEN1_address                            0xFC5
#define RCEN1_position                           0x3
#define RCEN1_size                               0x1
#define RCEN1_value_mask                         0x8
#define RCEN1_clear_mask                         0xF7

#define SSP1CON2_RCEN                            0x3
#define SSP1CON2_RCEN_address                    0xFC5
#define SSP1CON2_RCEN_position                   0x3
#define SSP1CON2_RCEN_size                       0x1
#define SSP1CON2_RCEN_value_mask                 0x8
#define SSP1CON2_RCEN_clear_mask                 0xF7

#define SSP1CON2_ADMSK3                          0x3
#define SSP1CON2_ADMSK3_address                  0xFC5
#define SSP1CON2_ADMSK3_position                 0x3
#define SSP1CON2_ADMSK3_size                     0x1
#define SSP1CON2_ADMSK3_value_mask               0x8
#define SSP1CON2_ADMSK3_clear_mask               0xF7

#define SSP1CON2_ACKEN                           0x4
#define SSP1CON2_ACKEN_address                   0xFC5
#define SSP1CON2_ACKEN_position                  0x4
#define SSP1CON2_ACKEN_size                      0x1
#define SSP1CON2_ACKEN_value_mask                0x10
#define SSP1CON2_ACKEN_clear_mask                0xEF

#define ACKEN1                                   0x4
#define ACKEN1_address                           0xFC5
#define ACKEN1_position                          0x4
#define ACKEN1_size                              0x1
#define ACKEN1_value_mask                        0x10
#define ACKEN1_clear_mask                        0xEF

#define ADMSK41                                  0x4
#define ADMSK41_address                          0xFC5
#define ADMSK41_position                         0x4
#define ADMSK41_size                             0x1
#define ADMSK41_value_mask                       0x10
#define ADMSK41_clear_mask                       0xEF

#define SSP1CON2_ADMSK4                          0x4
#define SSP1CON2_ADMSK4_address                  0xFC5
#define SSP1CON2_ADMSK4_position                 0x4
#define SSP1CON2_ADMSK4_size                     0x1
#define SSP1CON2_ADMSK4_value_mask               0x10
#define SSP1CON2_ADMSK4_clear_mask               0xEF

#define ACKDT1                                   0x5
#define ACKDT1_address                           0xFC5
#define ACKDT1_position                          0x5
#define ACKDT1_size                              0x1
#define ACKDT1_value_mask                        0x20
#define ACKDT1_clear_mask                        0xDF

#define ADMSK51                                  0x5
#define ADMSK51_address                          0xFC5
#define ADMSK51_position                         0x5
#define ADMSK51_size                             0x1
#define ADMSK51_value_mask                       0x20
#define ADMSK51_clear_mask                       0xDF

#define SSP1CON2_ACKDT                           0x5
#define SSP1CON2_ACKDT_address                   0xFC5
#define SSP1CON2_ACKDT_position                  0x5
#define SSP1CON2_ACKDT_size                      0x1
#define SSP1CON2_ACKDT_value_mask                0x20
#define SSP1CON2_ACKDT_clear_mask                0xDF

#define SSP1CON2_ADMSK5                          0x5
#define SSP1CON2_ADMSK5_address                  0xFC5
#define SSP1CON2_ADMSK5_position                 0x5
#define SSP1CON2_ADMSK5_size                     0x1
#define SSP1CON2_ADMSK5_value_mask               0x20
#define SSP1CON2_ADMSK5_clear_mask               0xDF

#define SSP1CON2_ACKSTAT                         0x6
#define SSP1CON2_ACKSTAT_address                 0xFC5
#define SSP1CON2_ACKSTAT_position                0x6
#define SSP1CON2_ACKSTAT_size                    0x1
#define SSP1CON2_ACKSTAT_value_mask              0x40
#define SSP1CON2_ACKSTAT_clear_mask              0xBF

#define ACKSTAT1                                 0x6
#define ACKSTAT1_address                         0xFC5
#define ACKSTAT1_position                        0x6
#define ACKSTAT1_size                            0x1
#define ACKSTAT1_value_mask                      0x40
#define ACKSTAT1_clear_mask                      0xBF

#define GCEN1                                    0x7
#define GCEN1_address                            0xFC5
#define GCEN1_position                           0x7
#define GCEN1_size                               0x1
#define GCEN1_value_mask                         0x80
#define GCEN1_clear_mask                         0x7F

#define SSP1CON2_GCEN                            0x7
#define SSP1CON2_GCEN_address                    0xFC5
#define SSP1CON2_GCEN_position                   0x7
#define SSP1CON2_GCEN_size                       0x1
#define SSP1CON2_GCEN_value_mask                 0x80
#define SSP1CON2_GCEN_clear_mask                 0x7F


/*-------------------------------------------------------------------------------------------------------------------#
| SSP1CON1                                                                                                     0xFC6 |
#--------------------------------------------------------------------------------------------------------------------#
| SSP1CON1_WCOL | SSP1CON1_SSPOV | SSP1CON1_SSPEN | SSP1CON1_CKP | SSP1CON1_SSPM3 | SSPM21 | SSP1CON1_SSPM1 | SSPM01 |
#--------------------------------------------------------------------------------------------------------------------#
| 7             | 6              | 5              | 4            | 3              | 2      | 1              | 0      |
#-------------------------------------------------------------------------------------------------------------------*/

#define SSP1CON1                                 0x0
#define SSP1CON1_address                         0xFC6
#define SSP1CON1_position                        0x0
#define SSP1CON1_size                            0x8
#define SSP1CON1_value_mask                      0xFF
#define SSP1CON1_clear_mask                      0x0

#define SSP1CON1_SSPM0                           0x0
#define SSP1CON1_SSPM0_address                   0xFC6
#define SSP1CON1_SSPM0_position                  0x0
#define SSP1CON1_SSPM0_size                      0x1
#define SSP1CON1_SSPM0_value_mask                0x1
#define SSP1CON1_SSPM0_clear_mask                0xFE

#define SSPM01                                   0x0
#define SSPM01_address                           0xFC6
#define SSPM01_position                          0x0
#define SSPM01_size                              0x1
#define SSPM01_value_mask                        0x1
#define SSPM01_clear_mask                        0xFE

#define SSP1CON1_SSPM                            0x0
#define SSP1CON1_SSPM_address                    0xFC6
#define SSP1CON1_SSPM_position                   0x0
#define SSP1CON1_SSPM_size                       0x4
#define SSP1CON1_SSPM_value_mask                 0xF
#define SSP1CON1_SSPM_clear_mask                 0xF0

#define SSP1CON1_SSPM1                           0x1
#define SSP1CON1_SSPM1_address                   0xFC6
#define SSP1CON1_SSPM1_position                  0x1
#define SSP1CON1_SSPM1_size                      0x1
#define SSP1CON1_SSPM1_value_mask                0x2
#define SSP1CON1_SSPM1_clear_mask                0xFD

#define SSPM11                                   0x1
#define SSPM11_address                           0xFC6
#define SSPM11_position                          0x1
#define SSPM11_size                              0x1
#define SSPM11_value_mask                        0x2
#define SSPM11_clear_mask                        0xFD

#define SSP1CON1_SSPM2                           0x2
#define SSP1CON1_SSPM2_address                   0xFC6
#define SSP1CON1_SSPM2_position                  0x2
#define SSP1CON1_SSPM2_size                      0x1
#define SSP1CON1_SSPM2_value_mask                0x4
#define SSP1CON1_SSPM2_clear_mask                0xFB

#define SSPM21                                   0x2
#define SSPM21_address                           0xFC6
#define SSPM21_position                          0x2
#define SSPM21_size                              0x1
#define SSPM21_value_mask                        0x4
#define SSPM21_clear_mask                        0xFB

#define SSPM31                                   0x3
#define SSPM31_address                           0xFC6
#define SSPM31_position                          0x3
#define SSPM31_size                              0x1
#define SSPM31_value_mask                        0x8
#define SSPM31_clear_mask                        0xF7

#define SSP1CON1_SSPM3                           0x3
#define SSP1CON1_SSPM3_address                   0xFC6
#define SSP1CON1_SSPM3_position                  0x3
#define SSP1CON1_SSPM3_size                      0x1
#define SSP1CON1_SSPM3_value_mask                0x8
#define SSP1CON1_SSPM3_clear_mask                0xF7

#define SSP1CON1_CKP                             0x4
#define SSP1CON1_CKP_address                     0xFC6
#define SSP1CON1_CKP_position                    0x4
#define SSP1CON1_CKP_size                        0x1
#define SSP1CON1_CKP_value_mask                  0x10
#define SSP1CON1_CKP_clear_mask                  0xEF

#define CKP1                                     0x4
#define CKP1_address                             0xFC6
#define CKP1_position                            0x4
#define CKP1_size                                0x1
#define CKP1_value_mask                          0x10
#define CKP1_clear_mask                          0xEF

#define SSPEN1                                   0x5
#define SSPEN1_address                           0xFC6
#define SSPEN1_position                          0x5
#define SSPEN1_size                              0x1
#define SSPEN1_value_mask                        0x20
#define SSPEN1_clear_mask                        0xDF

#define SSP1CON1_SSPEN                           0x5
#define SSP1CON1_SSPEN_address                   0xFC6
#define SSP1CON1_SSPEN_position                  0x5
#define SSP1CON1_SSPEN_size                      0x1
#define SSP1CON1_SSPEN_value_mask                0x20
#define SSP1CON1_SSPEN_clear_mask                0xDF

#define SSPOV1                                   0x6
#define SSPOV1_address                           0xFC6
#define SSPOV1_position                          0x6
#define SSPOV1_size                              0x1
#define SSPOV1_value_mask                        0x40
#define SSPOV1_clear_mask                        0xBF

#define SSP1CON1_SSPOV                           0x6
#define SSP1CON1_SSPOV_address                   0xFC6
#define SSP1CON1_SSPOV_position                  0x6
#define SSP1CON1_SSPOV_size                      0x1
#define SSP1CON1_SSPOV_value_mask                0x40
#define SSP1CON1_SSPOV_clear_mask                0xBF

#define WCOL1                                    0x7
#define WCOL1_address                            0xFC6
#define WCOL1_position                           0x7
#define WCOL1_size                               0x1
#define WCOL1_value_mask                         0x80
#define WCOL1_clear_mask                         0x7F

#define SSP1CON1_WCOL                            0x7
#define SSP1CON1_WCOL_address                    0xFC6
#define SSP1CON1_WCOL_position                   0x7
#define SSP1CON1_WCOL_size                       0x1
#define SSP1CON1_WCOL_value_mask                 0x80
#define SSP1CON1_WCOL_clear_mask                 0x7F


/*----------------------------------------------------------------------------------------------------#
| SSP1STAT                                                                                      0xFC7 |
#-----------------------------------------------------------------------------------------------------#
| SSP1STAT_SMP | SSP1STAT_CKE | SSP1STAT_D | STOP | SSP1STAT_S | SSP1STAT_R_NOT_W | SSP1STAT_UA | BF1 |
#-----------------------------------------------------------------------------------------------------#
| 7            | 6            | 5          | 4    | 3          | 2                | 1           | 0   |
#----------------------------------------------------------------------------------------------------*/

#define SSP1STAT                                 0x0
#define SSP1STAT_address                         0xFC7
#define SSP1STAT_position                        0x0
#define SSP1STAT_size                            0x8
#define SSP1STAT_value_mask                      0xFF
#define SSP1STAT_clear_mask                      0x0

#define BF1                                      0x0
#define BF1_address                              0xFC7
#define BF1_position                             0x0
#define BF1_size                                 0x1
#define BF1_value_mask                           0x1
#define BF1_clear_mask                           0xFE

#define SSP1STAT_BF                              0x0
#define SSP1STAT_BF_address                      0xFC7
#define SSP1STAT_BF_position                     0x0
#define SSP1STAT_BF_size                         0x1
#define SSP1STAT_BF_value_mask                   0x1
#define SSP1STAT_BF_clear_mask                   0xFE

#define UA1                                      0x1
#define UA1_address                              0xFC7
#define UA1_position                             0x1
#define UA1_size                                 0x1
#define UA1_value_mask                           0x2
#define UA1_clear_mask                           0xFD

#define SSP1STAT_UA                              0x1
#define SSP1STAT_UA_address                      0xFC7
#define SSP1STAT_UA_position                     0x1
#define SSP1STAT_UA_size                         0x1
#define SSP1STAT_UA_value_mask                   0x2
#define SSP1STAT_UA_clear_mask                   0xFD

#define SSP1STAT_R_NOT_W                         0x2
#define SSP1STAT_R_NOT_W_address                 0xFC7
#define SSP1STAT_R_NOT_W_position                0x2
#define SSP1STAT_R_NOT_W_size                    0x1
#define SSP1STAT_R_NOT_W_value_mask              0x4
#define SSP1STAT_R_NOT_W_clear_mask              0xFB

#define RW1                                      0x2
#define RW1_address                              0xFC7
#define RW1_position                             0x2
#define RW1_size                                 0x1
#define RW1_value_mask                           0x4
#define RW1_clear_mask                           0xFB

#define NOT_W                                    0x2
#define NOT_W_address                            0xFC7
#define NOT_W_position                           0x2
#define NOT_W_size                               0x1
#define NOT_W_value_mask                         0x4
#define NOT_W_clear_mask                         0xFB

#define SSP1STAT_R                               0x2
#define SSP1STAT_R_address                       0xFC7
#define SSP1STAT_R_position                      0x2
#define SSP1STAT_R_size                          0x1
#define SSP1STAT_R_value_mask                    0x4
#define SSP1STAT_R_clear_mask                    0xFB

#define SSP1STAT_nW                              0x2
#define SSP1STAT_nW_address                      0xFC7
#define SSP1STAT_nW_position                     0x2
#define SSP1STAT_nW_size                         0x1
#define SSP1STAT_nW_value_mask                   0x4
#define SSP1STAT_nW_clear_mask                   0xFB

#define RW                                       0x2
#define RW_address                               0xFC7
#define RW_position                              0x2
#define RW_size                                  0x1
#define RW_value_mask                            0x4
#define RW_clear_mask                            0xFB

#define SSP1STAT_READ_WRITE                      0x2
#define SSP1STAT_READ_WRITE_address              0xFC7
#define SSP1STAT_READ_WRITE_position             0x2
#define SSP1STAT_READ_WRITE_size                 0x1
#define SSP1STAT_READ_WRITE_value_mask           0x4
#define SSP1STAT_READ_WRITE_clear_mask           0xFB

#define SSP1STAT_nWRITE                          0x2
#define SSP1STAT_nWRITE_address                  0xFC7
#define SSP1STAT_nWRITE_position                 0x2
#define SSP1STAT_nWRITE_size                     0x1
#define SSP1STAT_nWRITE_value_mask               0x4
#define SSP1STAT_nWRITE_clear_mask               0xFB

#define SSP1STAT_I2C_READ                        0x2
#define SSP1STAT_I2C_READ_address                0xFC7
#define SSP1STAT_I2C_READ_position               0x2
#define SSP1STAT_I2C_READ_size                   0x1
#define SSP1STAT_I2C_READ_value_mask             0x4
#define SSP1STAT_I2C_READ_clear_mask             0xFB

#define SSP1STAT_R_W                             0x2
#define SSP1STAT_R_W_address                     0xFC7
#define SSP1STAT_R_W_position                    0x2
#define SSP1STAT_R_W_size                        0x1
#define SSP1STAT_R_W_value_mask                  0x4
#define SSP1STAT_R_W_clear_mask                  0xFB

#define SSP1STAT_NOT_WRITE                       0x2
#define SSP1STAT_NOT_WRITE_address               0xFC7
#define SSP1STAT_NOT_WRITE_position              0x2
#define SSP1STAT_NOT_WRITE_size                  0x1
#define SSP1STAT_NOT_WRITE_value_mask            0x4
#define SSP1STAT_NOT_WRITE_clear_mask            0xFB

#define SSP1STAT_R_nW                            0x2
#define SSP1STAT_R_nW_address                    0xFC7
#define SSP1STAT_R_nW_position                   0x2
#define SSP1STAT_R_nW_size                       0x1
#define SSP1STAT_R_nW_value_mask                 0x4
#define SSP1STAT_R_nW_clear_mask                 0xFB

#define SSP1STAT_S                               0x3
#define SSP1STAT_S_address                       0xFC7
#define SSP1STAT_S_position                      0x3
#define SSP1STAT_S_size                          0x1
#define SSP1STAT_S_value_mask                    0x8
#define SSP1STAT_S_clear_mask                    0xF7

#define START                                    0x3
#define START_address                            0xFC7
#define START_position                           0x3
#define START_size                               0x1
#define START_value_mask                         0x8
#define START_clear_mask                         0xF7

#define SSP1STAT_I2C_START                       0x3
#define SSP1STAT_I2C_START_address               0xFC7
#define SSP1STAT_I2C_START_position              0x3
#define SSP1STAT_I2C_START_size                  0x1
#define SSP1STAT_I2C_START_value_mask            0x8
#define SSP1STAT_I2C_START_clear_mask            0xF7

#define START1                                   0x3
#define START1_address                           0xFC7
#define START1_position                          0x3
#define START1_size                              0x1
#define START1_value_mask                        0x8
#define START1_clear_mask                        0xF7

#define STOP                                     0x4
#define STOP_address                             0xFC7
#define STOP_position                            0x4
#define STOP_size                                0x1
#define STOP_value_mask                          0x10
#define STOP_clear_mask                          0xEF

#define SSP1STAT_P                               0x4
#define SSP1STAT_P_address                       0xFC7
#define SSP1STAT_P_position                      0x4
#define SSP1STAT_P_size                          0x1
#define SSP1STAT_P_value_mask                    0x10
#define SSP1STAT_P_clear_mask                    0xEF

#define STOP1                                    0x4
#define STOP1_address                            0xFC7
#define STOP1_position                           0x4
#define STOP1_size                               0x1
#define STOP1_value_mask                         0x10
#define STOP1_clear_mask                         0xEF

#define SSP1STAT_I2C_STOP                        0x4
#define SSP1STAT_I2C_STOP_address                0xFC7
#define SSP1STAT_I2C_STOP_position               0x4
#define SSP1STAT_I2C_STOP_size                   0x1
#define SSP1STAT_I2C_STOP_value_mask             0x10
#define SSP1STAT_I2C_STOP_clear_mask             0xEF

#define SSP1STAT_D                               0x5
#define SSP1STAT_D_address                       0xFC7
#define SSP1STAT_D_position                      0x5
#define SSP1STAT_D_size                          0x1
#define SSP1STAT_D_value_mask                    0x20
#define SSP1STAT_D_clear_mask                    0xDF

#define SSP1STAT_D_NOT_A                         0x5
#define SSP1STAT_D_NOT_A_address                 0xFC7
#define SSP1STAT_D_NOT_A_position                0x5
#define SSP1STAT_D_NOT_A_size                    0x1
#define SSP1STAT_D_NOT_A_value_mask              0x20
#define SSP1STAT_D_NOT_A_clear_mask              0xDF

#define NOT_A                                    0x5
#define NOT_A_address                            0xFC7
#define NOT_A_position                           0x5
#define NOT_A_size                               0x1
#define NOT_A_value_mask                         0x20
#define NOT_A_clear_mask                         0xDF

#define SSP1STAT_D_A                             0x5
#define SSP1STAT_D_A_address                     0xFC7
#define SSP1STAT_D_A_position                    0x5
#define SSP1STAT_D_A_size                        0x1
#define SSP1STAT_D_A_value_mask                  0x20
#define SSP1STAT_D_A_clear_mask                  0xDF

#define SSP1STAT_D_nA                            0x5
#define SSP1STAT_D_nA_address                    0xFC7
#define SSP1STAT_D_nA_position                   0x5
#define SSP1STAT_D_nA_size                       0x1
#define SSP1STAT_D_nA_value_mask                 0x20
#define SSP1STAT_D_nA_clear_mask                 0xDF

#define SSP1STAT_NOT_ADDRESS                     0x5
#define SSP1STAT_NOT_ADDRESS_address             0xFC7
#define SSP1STAT_NOT_ADDRESS_position            0x5
#define SSP1STAT_NOT_ADDRESS_size                0x1
#define SSP1STAT_NOT_ADDRESS_value_mask          0x20
#define SSP1STAT_NOT_ADDRESS_clear_mask          0xDF

#define SSP1STAT_nA                              0x5
#define SSP1STAT_nA_address                      0xFC7
#define SSP1STAT_nA_position                     0x5
#define SSP1STAT_nA_size                         0x1
#define SSP1STAT_nA_value_mask                   0x20
#define SSP1STAT_nA_clear_mask                   0xDF

#define DA1                                      0x5
#define DA1_address                              0xFC7
#define DA1_position                             0x5
#define DA1_size                                 0x1
#define DA1_value_mask                           0x20
#define DA1_clear_mask                           0xDF

#define DA                                       0x5
#define DA_address                               0xFC7
#define DA_position                              0x5
#define DA_size                                  0x1
#define DA_value_mask                            0x20
#define DA_clear_mask                            0xDF

#define SSP1STAT_I2C_DAT                         0x5
#define SSP1STAT_I2C_DAT_address                 0xFC7
#define SSP1STAT_I2C_DAT_position                0x5
#define SSP1STAT_I2C_DAT_size                    0x1
#define SSP1STAT_I2C_DAT_value_mask              0x20
#define SSP1STAT_I2C_DAT_clear_mask              0xDF

#define SSP1STAT_nADDRESS                        0x5
#define SSP1STAT_nADDRESS_address                0xFC7
#define SSP1STAT_nADDRESS_position               0x5
#define SSP1STAT_nADDRESS_size                   0x1
#define SSP1STAT_nADDRESS_value_mask             0x20
#define SSP1STAT_nADDRESS_clear_mask             0xDF

#define SSP1STAT_DATA_ADDRESS                    0x5
#define SSP1STAT_DATA_ADDRESS_address            0xFC7
#define SSP1STAT_DATA_ADDRESS_position           0x5
#define SSP1STAT_DATA_ADDRESS_size               0x1
#define SSP1STAT_DATA_ADDRESS_value_mask         0x20
#define SSP1STAT_DATA_ADDRESS_clear_mask         0xDF

#define SSP1STAT_CKE                             0x6
#define SSP1STAT_CKE_address                     0xFC7
#define SSP1STAT_CKE_position                    0x6
#define SSP1STAT_CKE_size                        0x1
#define SSP1STAT_CKE_value_mask                  0x40
#define SSP1STAT_CKE_clear_mask                  0xBF

#define CKE1                                     0x6
#define CKE1_address                             0xFC7
#define CKE1_position                            0x6
#define CKE1_size                                0x1
#define CKE1_value_mask                          0x40
#define CKE1_clear_mask                          0xBF

#define SSP1STAT_SMP                             0x7
#define SSP1STAT_SMP_address                     0xFC7
#define SSP1STAT_SMP_position                    0x7
#define SSP1STAT_SMP_size                        0x1
#define SSP1STAT_SMP_value_mask                  0x80
#define SSP1STAT_SMP_clear_mask                  0x7F

#define SMP1                                     0x7
#define SMP1_address                             0xFC7
#define SMP1_position                            0x7
#define SMP1_size                                0x1
#define SMP1_value_mask                          0x80
#define SMP1_clear_mask                          0x7F


/*--------------------------------------------------------------------------------------------------------#
| SSP1ADD                                                                                           0xFC8 |
#---------------------------------------------------------------------------------------------------------#
| SSP1ADD_MSK7 | MSK61 | MSK51 | SSP1ADD_MSK4 | SSP1ADD_MSK3 | SSP1ADD_MSK2 | SSP1ADD_MSK1 | SSP1ADD_MSK0 |
#---------------------------------------------------------------------------------------------------------#
| 7            | 6     | 5     | 4            | 3            | 2            | 1            | 0            |
#--------------------------------------------------------------------------------------------------------*/

#define SSP1ADD                                  0x0
#define SSP1ADD_address                          0xFC8
#define SSP1ADD_position                         0x0
#define SSP1ADD_size                             0x8
#define SSP1ADD_value_mask                       0xFF
#define SSP1ADD_clear_mask                       0x0

#define SSP1ADD_MSK0                             0x0
#define SSP1ADD_MSK0_address                     0xFC8
#define SSP1ADD_MSK0_position                    0x0
#define SSP1ADD_MSK0_size                        0x1
#define SSP1ADD_MSK0_value_mask                  0x1
#define SSP1ADD_MSK0_clear_mask                  0xFE

#define MSK01                                    0x0
#define MSK01_address                            0xFC8
#define MSK01_position                           0x0
#define MSK01_size                               0x1
#define MSK01_value_mask                         0x1
#define MSK01_clear_mask                         0xFE

#define SSPADD                                   0x0
#define SSPADD_address                           0xFC8
#define SSPADD_position                          0x0
#define SSPADD_size                              0x8
#define SSPADD_value_mask                        0xFF
#define SSPADD_clear_mask                        0x0

#define SSP1ADD_MSK1                             0x1
#define SSP1ADD_MSK1_address                     0xFC8
#define SSP1ADD_MSK1_position                    0x1
#define SSP1ADD_MSK1_size                        0x1
#define SSP1ADD_MSK1_value_mask                  0x2
#define SSP1ADD_MSK1_clear_mask                  0xFD

#define MSK11                                    0x1
#define MSK11_address                            0xFC8
#define MSK11_position                           0x1
#define MSK11_size                               0x1
#define MSK11_value_mask                         0x2
#define MSK11_clear_mask                         0xFD

#define SSP1ADD_MSK2                             0x2
#define SSP1ADD_MSK2_address                     0xFC8
#define SSP1ADD_MSK2_position                    0x2
#define SSP1ADD_MSK2_size                        0x1
#define SSP1ADD_MSK2_value_mask                  0x4
#define SSP1ADD_MSK2_clear_mask                  0xFB

#define MSK21                                    0x2
#define MSK21_address                            0xFC8
#define MSK21_position                           0x2
#define MSK21_size                               0x1
#define MSK21_value_mask                         0x4
#define MSK21_clear_mask                         0xFB

#define MSK31                                    0x3
#define MSK31_address                            0xFC8
#define MSK31_position                           0x3
#define MSK31_size                               0x1
#define MSK31_value_mask                         0x8
#define MSK31_clear_mask                         0xF7

#define SSP1ADD_MSK3                             0x3
#define SSP1ADD_MSK3_address                     0xFC8
#define SSP1ADD_MSK3_position                    0x3
#define SSP1ADD_MSK3_size                        0x1
#define SSP1ADD_MSK3_value_mask                  0x8
#define SSP1ADD_MSK3_clear_mask                  0xF7

#define SSP1ADD_MSK4                             0x4
#define SSP1ADD_MSK4_address                     0xFC8
#define SSP1ADD_MSK4_position                    0x4
#define SSP1ADD_MSK4_size                        0x1
#define SSP1ADD_MSK4_value_mask                  0x10
#define SSP1ADD_MSK4_clear_mask                  0xEF

#define MSK41                                    0x4
#define MSK41_address                            0xFC8
#define MSK41_position                           0x4
#define MSK41_size                               0x1
#define MSK41_value_mask                         0x10
#define MSK41_clear_mask                         0xEF

#define MSK51                                    0x5
#define MSK51_address                            0xFC8
#define MSK51_position                           0x5
#define MSK51_size                               0x1
#define MSK51_value_mask                         0x20
#define MSK51_clear_mask                         0xDF

#define SSP1ADD_MSK5                             0x5
#define SSP1ADD_MSK5_address                     0xFC8
#define SSP1ADD_MSK5_position                    0x5
#define SSP1ADD_MSK5_size                        0x1
#define SSP1ADD_MSK5_value_mask                  0x20
#define SSP1ADD_MSK5_clear_mask                  0xDF

#define MSK61                                    0x6
#define MSK61_address                            0xFC8
#define MSK61_position                           0x6
#define MSK61_size                               0x1
#define MSK61_value_mask                         0x40
#define MSK61_clear_mask                         0xBF

#define SSP1ADD_MSK6                             0x6
#define SSP1ADD_MSK6_address                     0xFC8
#define SSP1ADD_MSK6_position                    0x6
#define SSP1ADD_MSK6_size                        0x1
#define SSP1ADD_MSK6_value_mask                  0x40
#define SSP1ADD_MSK6_clear_mask                  0xBF

#define SSP1ADD_MSK7                             0x7
#define SSP1ADD_MSK7_address                     0xFC8
#define SSP1ADD_MSK7_position                    0x7
#define SSP1ADD_MSK7_size                        0x1
#define SSP1ADD_MSK7_value_mask                  0x80
#define SSP1ADD_MSK7_clear_mask                  0x7F

#define MSK71                                    0x7
#define MSK71_address                            0xFC8
#define MSK71_position                           0x7
#define MSK71_size                               0x1
#define MSK71_value_mask                         0x80
#define MSK71_clear_mask                         0x7F


/*------------------------------#
| SSP1BUF                 0xFC9 |
#-------------------------------#
| SSPBUF                        |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define SSP1BUF                                  0x0
#define SSP1BUF_address                          0xFC9
#define SSP1BUF_position                         0x0
#define SSP1BUF_size                             0x8
#define SSP1BUF_value_mask                       0xFF
#define SSP1BUF_clear_mask                       0x0

#define SSPBUF                                   0x0
#define SSPBUF_address                           0xFC9
#define SSPBUF_position                          0x0
#define SSPBUF_size                              0x8
#define SSPBUF_value_mask                        0xFF
#define SSPBUF_clear_mask                        0x0


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

#define T2OUTPS                                  0x3
#define T2OUTPS_address                          0xFCA
#define T2OUTPS_position                         0x3
#define T2OUTPS_size                             0x4
#define T2OUTPS_value_mask                       0x78
#define T2OUTPS_clear_mask                       0x87

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


/*----------------------------------------------#
| PR2                                     0xFCB |
#-----------------------------------------------#
| EBDIS | - | WAIT1 | WAIT0 | - | - | WM1 | WM0 |
#-----------------------------------------------#
| 7     | 6 | 5     | 4     | 3 | 2 | 1   | 0   |
#----------------------------------------------*/

#define WM0                                      0x0
#define WM0_address                              0xFCB
#define WM0_position                             0x0
#define WM0_size                                 0x1
#define WM0_value_mask                           0x1
#define WM0_clear_mask                           0xFE

#define PR2                                      0x0
#define PR2_address                              0xFCB
#define PR2_position                             0x0
#define PR2_size                                 0x8
#define PR2_value_mask                           0xFF
#define PR2_clear_mask                           0x0

#define WM1                                      0x1
#define WM1_address                              0xFCB
#define WM1_position                             0x1
#define WM1_size                                 0x1
#define WM1_value_mask                           0x2
#define WM1_clear_mask                           0xFD

#define WAIT0                                    0x4
#define WAIT0_address                            0xFCB
#define WAIT0_position                           0x4
#define WAIT0_size                               0x1
#define WAIT0_value_mask                         0x10
#define WAIT0_clear_mask                         0xEF

#define WAIT1                                    0x5
#define WAIT1_address                            0xFCB
#define WAIT1_position                           0x5
#define WAIT1_size                               0x1
#define WAIT1_value_mask                         0x20
#define WAIT1_clear_mask                         0xDF

#define EBDIS                                    0x7
#define EBDIS_address                            0xFCB
#define EBDIS_position                           0x7
#define EBDIS_size                               0x1
#define EBDIS_value_mask                         0x80
#define EBDIS_clear_mask                         0x7F


/*------------------------------#
| TMR2                    0xFCC |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define TMR2                                     0x0
#define TMR2_address                             0xFCC
#define TMR2_position                            0x0
#define TMR2_size                                0x8
#define TMR2_value_mask                          0xFF
#define TMR2_clear_mask                          0x0


/*----------------------------------------------------------------------------------#
| T1CON                                                                       0xFCD |
#-----------------------------------------------------------------------------------#
| T1RD16 | TMR1CS0 | T1CKPS1 | T1CKPS0 | T1OSCEN | NOT_T1SYNC | T1CON_RD16 | TMR1ON |
#-----------------------------------------------------------------------------------#
| 7      | 6       | 5       | 4       | 3       | 2          | 1          | 0      |
#----------------------------------------------------------------------------------*/

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

#define T1CON_RD16                               0x1
#define T1CON_RD16_address                       0xFCD
#define T1CON_RD16_position                      0x1
#define T1CON_RD16_size                          0x1
#define T1CON_RD16_value_mask                    0x2
#define T1CON_RD16_clear_mask                    0xFD

#define NOT_T1SYNC                               0x2
#define NOT_T1SYNC_address                       0xFCD
#define NOT_T1SYNC_position                      0x2
#define NOT_T1SYNC_size                          0x1
#define NOT_T1SYNC_value_mask                    0x4
#define NOT_T1SYNC_clear_mask                    0xFB

#define nT1SYNC                                  0x2
#define nT1SYNC_address                          0xFCD
#define nT1SYNC_position                         0x2
#define nT1SYNC_size                             0x1
#define nT1SYNC_value_mask                       0x4
#define nT1SYNC_clear_mask                       0xFB

#define T1OSCEN                                  0x3
#define T1OSCEN_address                          0xFCD
#define T1OSCEN_position                         0x3
#define T1OSCEN_size                             0x1
#define T1OSCEN_value_mask                       0x8
#define T1OSCEN_clear_mask                       0xF7

#define T1CON_SOSCEN                             0x3
#define T1CON_SOSCEN_address                     0xFCD
#define T1CON_SOSCEN_position                    0x3
#define T1CON_SOSCEN_size                        0x1
#define T1CON_SOSCEN_value_mask                  0x8
#define T1CON_SOSCEN_clear_mask                  0xF7

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

#define TMR1CS0                                  0x6
#define TMR1CS0_address                          0xFCD
#define TMR1CS0_position                         0x6
#define TMR1CS0_size                             0x1
#define TMR1CS0_value_mask                       0x40
#define TMR1CS0_clear_mask                       0xBF

#define TMR1CS                                   0x6
#define TMR1CS_address                           0xFCD
#define TMR1CS_position                          0x6
#define TMR1CS_size                              0x2
#define TMR1CS_value_mask                        0xC0
#define TMR1CS_clear_mask                        0x3F

#define T1RD16                                   0x7
#define T1RD16_address                           0xFCD
#define T1RD16_position                          0x7
#define T1RD16_size                              0x1
#define T1RD16_value_mask                        0x80
#define T1RD16_clear_mask                        0x7F

#define TMR1CS1                                  0x7
#define TMR1CS1_address                          0xFCD
#define TMR1CS1_position                         0x7
#define TMR1CS1_size                             0x1
#define TMR1CS1_value_mask                       0x80
#define TMR1CS1_clear_mask                       0x7F


/*------------------------------#
| TMR1L                   0xFCE |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define TMR1L                                    0x0
#define TMR1L_address                            0xFCE
#define TMR1L_position                           0x0
#define TMR1L_size                               0x8
#define TMR1L_value_mask                         0xFF
#define TMR1L_clear_mask                         0x0


/*------------------------------#
| TMR1H                   0xFCF |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define TMR1H                                    0x0
#define TMR1H_address                            0xFCF
#define TMR1H_position                           0x0
#define TMR1H_size                               0x8
#define TMR1H_value_mask                         0xFF
#define TMR1H_clear_mask                         0x0


/*-------------------------------------------------------#
| RCON                                             0xFD0 |
#--------------------------------------------------------#
| IPEN | SBOREN | CM | nRI | TO | NOT_PD | POR | NOT_BOR |
#--------------------------------------------------------#
| 7    | 6      | 5  | 4   | 3  | 2      | 1   | 0       |
#-------------------------------------------------------*/

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

#define NOT_TO                                   0x3
#define NOT_TO_address                           0xFD0
#define NOT_TO_position                          0x3
#define NOT_TO_size                              0x1
#define NOT_TO_value_mask                        0x8
#define NOT_TO_clear_mask                        0xF7

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

#define NOT_CM                                   0x5
#define NOT_CM_address                           0xFD0
#define NOT_CM_position                          0x5
#define NOT_CM_size                              0x1
#define NOT_CM_value_mask                        0x20
#define NOT_CM_clear_mask                        0xDF

#define CM                                       0x5
#define CM_address                               0xFD0
#define CM_position                              0x5
#define CM_size                                  0x1
#define CM_value_mask                            0x20
#define CM_clear_mask                            0xDF

#define nCM                                      0x5
#define nCM_address                              0xFD0
#define nCM_position                             0x5
#define nCM_size                                 0x1
#define nCM_value_mask                           0x20
#define nCM_clear_mask                           0xDF

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


/*------------------------------------------------------------#
| WDTCON                                                0xFD1 |
#-------------------------------------------------------------#
| REGSLP | - | ULPLVL | SRETEN | - | ULPEN | ULPSINK | SWDTEN |
#-------------------------------------------------------------#
| 7      | 6 | 5      | 4      | 3 | 2     | 1       | 0      |
#------------------------------------------------------------*/

#define WDTCON                                   0x0
#define WDTCON_address                           0xFD1
#define WDTCON_position                          0x0
#define WDTCON_size                              0x8
#define WDTCON_value_mask                        0xFF
#define WDTCON_clear_mask                        0x0

#define SWDTEN                                   0x0
#define SWDTEN_address                           0xFD1
#define SWDTEN_position                          0x0
#define SWDTEN_size                              0x1
#define SWDTEN_value_mask                        0x1
#define SWDTEN_clear_mask                        0xFE

#define SWDTE                                    0x0
#define SWDTE_address                            0xFD1
#define SWDTE_position                           0x0
#define SWDTE_size                               0x1
#define SWDTE_value_mask                         0x1
#define SWDTE_clear_mask                         0xFE

#define ULPSINK                                  0x1
#define ULPSINK_address                          0xFD1
#define ULPSINK_position                         0x1
#define ULPSINK_size                             0x1
#define ULPSINK_value_mask                       0x2
#define ULPSINK_clear_mask                       0xFD

#define ULPEN                                    0x2
#define ULPEN_address                            0xFD1
#define ULPEN_position                           0x2
#define ULPEN_size                               0x1
#define ULPEN_value_mask                         0x4
#define ULPEN_clear_mask                         0xFB

#define SRETEN                                   0x4
#define SRETEN_address                           0xFD1
#define SRETEN_position                          0x4
#define SRETEN_size                              0x1
#define SRETEN_value_mask                        0x10
#define SRETEN_clear_mask                        0xEF

#define ULPLVL                                   0x5
#define ULPLVL_address                           0xFD1
#define ULPLVL_position                          0x5
#define ULPLVL_size                              0x1
#define ULPLVL_value_mask                        0x20
#define ULPLVL_clear_mask                        0xDF

#define REGSLP                                   0x7
#define REGSLP_address                           0xFD1
#define REGSLP_position                          0x7
#define REGSLP_size                              0x1
#define REGSLP_value_mask                        0x80
#define REGSLP_clear_mask                        0x7F


/*--------------------------------------------------------------------------#
| IPR5                                                                0xFD2 |
#---------------------------------------------------------------------------#
| TMR7GIP | TMR12IP | TMR10IP | EVPOL15 | EVPOL05 | TMR6IP | TMR5IP | CCH05 |
#---------------------------------------------------------------------------#
| 7       | 6       | 5       | 4       | 3       | 2      | 1      | 0     |
#--------------------------------------------------------------------------*/

#define IPR5                                     0x0
#define IPR5_address                             0xFD2
#define IPR5_position                            0x0
#define IPR5_size                                0x8
#define IPR5_value_mask                          0xFF
#define IPR5_clear_mask                          0x0

#define CCH05                                    0x0
#define CCH05_address                            0xFD2
#define CCH05_position                           0x0
#define CCH05_size                               0x1
#define CCH05_value_mask                         0x1
#define CCH05_clear_mask                         0xFE

#define TMR4IP                                   0x0
#define TMR4IP_address                           0xFD2
#define TMR4IP_position                          0x0
#define TMR4IP_size                              0x1
#define TMR4IP_value_mask                        0x1
#define TMR4IP_clear_mask                        0xFE

#define CCH15                                    0x1
#define CCH15_address                            0xFD2
#define CCH15_position                           0x1
#define CCH15_size                               0x1
#define CCH15_value_mask                         0x2
#define CCH15_clear_mask                         0xFD

#define TMR5IP                                   0x1
#define TMR5IP_address                           0xFD2
#define TMR5IP_position                          0x1
#define TMR5IP_size                              0x1
#define TMR5IP_value_mask                        0x2
#define TMR5IP_clear_mask                        0xFD

#define TMR6IP                                   0x2
#define TMR6IP_address                           0xFD2
#define TMR6IP_position                          0x2
#define TMR6IP_size                              0x1
#define TMR6IP_value_mask                        0x4
#define TMR6IP_clear_mask                        0xFB

#define EVPOL05                                  0x3
#define EVPOL05_address                          0xFD2
#define EVPOL05_position                         0x3
#define EVPOL05_size                             0x1
#define EVPOL05_value_mask                       0x8
#define EVPOL05_clear_mask                       0xF7

#define TMR7IP                                   0x3
#define TMR7IP_address                           0xFD2
#define TMR7IP_position                          0x3
#define TMR7IP_size                              0x1
#define TMR7IP_value_mask                        0x8
#define TMR7IP_clear_mask                        0xF7

#define EVPOL15                                  0x4
#define EVPOL15_address                          0xFD2
#define EVPOL15_position                         0x4
#define EVPOL15_size                             0x1
#define EVPOL15_value_mask                       0x10
#define EVPOL15_clear_mask                       0xEF

#define TMR8IP                                   0x4
#define TMR8IP_address                           0xFD2
#define TMR8IP_position                          0x4
#define TMR8IP_size                              0x1
#define TMR8IP_value_mask                        0x10
#define TMR8IP_clear_mask                        0xEF

#define TMR10IP                                  0x5
#define TMR10IP_address                          0xFD2
#define TMR10IP_position                         0x5
#define TMR10IP_size                             0x1
#define TMR10IP_value_mask                       0x20
#define TMR10IP_clear_mask                       0xDF

#define TMR12IP                                  0x6
#define TMR12IP_address                          0xFD2
#define TMR12IP_position                         0x6
#define TMR12IP_size                             0x1
#define TMR12IP_value_mask                       0x40
#define TMR12IP_clear_mask                       0xBF

#define TMR7GIP                                  0x7
#define TMR7GIP_address                          0xFD2
#define TMR7GIP_position                         0x7
#define TMR7GIP_size                             0x1
#define TMR7GIP_value_mask                       0x80
#define TMR7GIP_clear_mask                       0x7F


/*------------------------------------------------------------#
| OSCCON                                                0xFD3 |
#-------------------------------------------------------------#
| IDLEN | IRCF2 | IRCF1 | IRCF0 | OSTS | HFIOFS | SCS1 | SCS0 |
#-------------------------------------------------------------#
| 7     | 6     | 5     | 4     | 3    | 2      | 1    | 0    |
#------------------------------------------------------------*/

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

#define HFIOFS                                   0x2
#define HFIOFS_address                           0xFD3
#define HFIOFS_position                          0x2
#define HFIOFS_size                              0x1
#define HFIOFS_value_mask                        0x4
#define HFIOFS_clear_mask                        0xFB

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


/*------------------------------#
| SPBRGH1                 0xFD4 |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define SPBRGH1                                  0x0
#define SPBRGH1_address                          0xFD4
#define SPBRGH1_position                         0x0
#define SPBRGH1_size                             0x8
#define SPBRGH1_value_mask                       0xFF
#define SPBRGH1_clear_mask                       0x0


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


/*------------------------------#
| TMR0L                   0xFD6 |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define TMR0L                                    0x0
#define TMR0L_address                            0xFD6
#define TMR0L_position                           0x0
#define TMR0L_size                               0x8
#define TMR0L_value_mask                         0xFF
#define TMR0L_clear_mask                         0x0


/*------------------------------#
| TMR0H                   0xFD7 |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define TMR0H                                    0x0
#define TMR0H_address                            0xFD7
#define TMR0H_position                           0x0
#define TMR0H_size                               0x8
#define TMR0H_value_mask                         0xFF
#define TMR0H_clear_mask                         0x0


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


/*------------------------------#
| FSR2L                   0xFD9 |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define FSR2L                                    0x0
#define FSR2L_address                            0xFD9
#define FSR2L_position                           0x0
#define FSR2L_size                               0x8
#define FSR2L_value_mask                         0xFF
#define FSR2L_clear_mask                         0x0


/*------------------------------#
| PLUSW2                  0xFDB |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define PLUSW2                                   0x0
#define PLUSW2_address                           0xFDB
#define PLUSW2_position                          0x0
#define PLUSW2_size                              0x8
#define PLUSW2_value_mask                        0xFF
#define PLUSW2_clear_mask                        0x0


/*------------------------------#
| PREINC2                 0xFDC |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define PREINC2                                  0x0
#define PREINC2_address                          0xFDC
#define PREINC2_position                         0x0
#define PREINC2_size                             0x8
#define PREINC2_value_mask                       0xFF
#define PREINC2_clear_mask                       0x0


/*------------------------------#
| POSTDEC2                0xFDD |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define POSTDEC2                                 0x0
#define POSTDEC2_address                         0xFDD
#define POSTDEC2_position                        0x0
#define POSTDEC2_size                            0x8
#define POSTDEC2_value_mask                      0xFF
#define POSTDEC2_clear_mask                      0x0


/*------------------------------#
| POSTINC2                0xFDE |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define POSTINC2                                 0x0
#define POSTINC2_address                         0xFDE
#define POSTINC2_position                        0x0
#define POSTINC2_size                            0x8
#define POSTINC2_value_mask                      0xFF
#define POSTINC2_clear_mask                      0x0


/*------------------------------#
| INDF2                   0xFDF |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define INDF2                                    0x0
#define INDF2_address                            0xFDF
#define INDF2_position                           0x0
#define INDF2_size                               0x8
#define INDF2_value_mask                         0xFF
#define INDF2_clear_mask                         0x0


/*------------------------------#
| FSR1L                   0xFE1 |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define FSR1L                                    0x0
#define FSR1L_address                            0xFE1
#define FSR1L_position                           0x0
#define FSR1L_size                               0x8
#define FSR1L_value_mask                         0xFF
#define FSR1L_clear_mask                         0x0


/*------------------------------#
| PLUSW1                  0xFE3 |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define PLUSW1                                   0x0
#define PLUSW1_address                           0xFE3
#define PLUSW1_position                          0x0
#define PLUSW1_size                              0x8
#define PLUSW1_value_mask                        0xFF
#define PLUSW1_clear_mask                        0x0


/*------------------------------#
| PREINC1                 0xFE4 |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define PREINC1                                  0x0
#define PREINC1_address                          0xFE4
#define PREINC1_position                         0x0
#define PREINC1_size                             0x8
#define PREINC1_value_mask                       0xFF
#define PREINC1_clear_mask                       0x0


/*------------------------------#
| POSTDEC1                0xFE5 |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define POSTDEC1                                 0x0
#define POSTDEC1_address                         0xFE5
#define POSTDEC1_position                        0x0
#define POSTDEC1_size                            0x8
#define POSTDEC1_value_mask                      0xFF
#define POSTDEC1_clear_mask                      0x0


/*------------------------------#
| POSTINC1                0xFE6 |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define POSTINC1                                 0x0
#define POSTINC1_address                         0xFE6
#define POSTINC1_position                        0x0
#define POSTINC1_size                            0x8
#define POSTINC1_value_mask                      0xFF
#define POSTINC1_clear_mask                      0x0


/*------------------------------#
| INDF1                   0xFE7 |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define INDF1                                    0x0
#define INDF1_address                            0xFE7
#define INDF1_position                           0x0
#define INDF1_size                               0x8
#define INDF1_value_mask                         0xFF
#define INDF1_clear_mask                         0x0


/*------------------------------#
| WREG                    0xFE8 |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define WREG                                     0x0
#define WREG_address                             0xFE8
#define WREG_position                            0x0
#define WREG_size                                0x8
#define WREG_value_mask                          0xFF
#define WREG_clear_mask                          0x0


/*------------------------------#
| FSR0L                   0xFE9 |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define FSR0L                                    0x0
#define FSR0L_address                            0xFE9
#define FSR0L_position                           0x0
#define FSR0L_size                               0x8
#define FSR0L_value_mask                         0xFF
#define FSR0L_clear_mask                         0x0


/*------------------------------#
| PLUSW0                  0xFEB |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define PLUSW0                                   0x0
#define PLUSW0_address                           0xFEB
#define PLUSW0_position                          0x0
#define PLUSW0_size                              0x8
#define PLUSW0_value_mask                        0xFF
#define PLUSW0_clear_mask                        0x0


/*------------------------------#
| PREINC0                 0xFEC |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define PREINC0                                  0x0
#define PREINC0_address                          0xFEC
#define PREINC0_position                         0x0
#define PREINC0_size                             0x8
#define PREINC0_value_mask                       0xFF
#define PREINC0_clear_mask                       0x0


/*------------------------------#
| POSTDEC0                0xFED |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define POSTDEC0                                 0x0
#define POSTDEC0_address                         0xFED
#define POSTDEC0_position                        0x0
#define POSTDEC0_size                            0x8
#define POSTDEC0_value_mask                      0xFF
#define POSTDEC0_clear_mask                      0x0


/*------------------------------#
| POSTINC0                0xFEE |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define POSTINC0                                 0x0
#define POSTINC0_address                         0xFEE
#define POSTINC0_position                        0x0
#define POSTINC0_size                            0x8
#define POSTINC0_value_mask                      0xFF
#define POSTINC0_clear_mask                      0x0


/*------------------------------#
| INDF0                   0xFEF |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define INDF0                                    0x0
#define INDF0_address                            0xFEF
#define INDF0_position                           0x0
#define INDF0_size                               0x8
#define INDF0_value_mask                         0xFF
#define INDF0_clear_mask                         0x0


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


/*------------------------------#
| PRODL                   0xFF3 |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define PRODL                                    0x0
#define PRODL_address                            0xFF3
#define PRODL_position                           0x0
#define PRODL_size                               0x8
#define PRODL_value_mask                         0xFF
#define PRODL_clear_mask                         0x0


/*------------------------------#
| PRODH                   0xFF4 |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define PRODH                                    0x0
#define PRODH_address                            0xFF4
#define PRODH_position                           0x0
#define PRODH_size                               0x8
#define PRODH_value_mask                         0xFF
#define PRODH_clear_mask                         0x0


/*------------------------------#
| TABLAT                  0xFF5 |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define TABLAT                                   0x0
#define TABLAT_address                           0xFF5
#define TABLAT_position                          0x0
#define TABLAT_size                              0x8
#define TABLAT_value_mask                        0xFF
#define TABLAT_clear_mask                        0x0


/*------------------------------#
| TBLPTRL                 0xFF6 |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define TBLPTRL                                  0x0
#define TBLPTRL_address                          0xFF6
#define TBLPTRL_position                         0x0
#define TBLPTRL_size                             0x8
#define TBLPTRL_value_mask                       0xFF
#define TBLPTRL_clear_mask                       0x0


/*------------------------------#
| TBLPTRH                 0xFF7 |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define TBLPTRH                                  0x0
#define TBLPTRH_address                          0xFF7
#define TBLPTRH_position                         0x0
#define TBLPTRH_size                             0x8
#define TBLPTRH_value_mask                       0xFF
#define TBLPTRH_clear_mask                       0x0


/*------------------------------#
| PCL                     0xFF9 |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define PCL                                      0x0
#define PCL_address                              0xFF9
#define PCL_position                             0x0
#define PCL_size                                 0x8
#define PCL_value_mask                           0xFF
#define PCL_clear_mask                           0x0


/*------------------------------#
| PCLATH                  0xFFA |
#-------------------------------#
| PCH                           |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define PCLATH                                   0x0
#define PCLATH_address                           0xFFA
#define PCLATH_position                          0x0
#define PCLATH_size                              0x8
#define PCLATH_value_mask                        0xFF
#define PCLATH_clear_mask                        0x0

#define PCH                                      0x0
#define PCH_address                              0xFFA
#define PCH_position                             0x0
#define PCH_size                                 0x8
#define PCH_value_mask                           0xFF
#define PCH_clear_mask                           0x0


/*--------------------------------------------------#
| STKPTR                                      0xFFC |
#---------------------------------------------------#
| STKOVF | STKUNF | - | SP4 | SP3 | SP2 | SP1 | SP0 |
#---------------------------------------------------#
| 7      | 6      | 5 | 4   | 3   | 2   | 1   | 0   |
#--------------------------------------------------*/

#define SP0                                      0x0
#define SP0_address                              0xFFC
#define SP0_position                             0x0
#define SP0_size                                 0x1
#define SP0_value_mask                           0x1
#define SP0_clear_mask                           0xFE

#define STKPTR                                   0x0
#define STKPTR_address                           0xFFC
#define STKPTR_position                          0x0
#define STKPTR_size                              0x5
#define STKPTR_value_mask                        0x1F
#define STKPTR_clear_mask                        0xE0

#define SP1                                      0x1
#define SP1_address                              0xFFC
#define SP1_position                             0x1
#define SP1_size                                 0x1
#define SP1_value_mask                           0x2
#define SP1_clear_mask                           0xFD

#define SP2                                      0x2
#define SP2_address                              0xFFC
#define SP2_position                             0x2
#define SP2_size                                 0x1
#define SP2_value_mask                           0x4
#define SP2_clear_mask                           0xFB

#define SP3                                      0x3
#define SP3_address                              0xFFC
#define SP3_position                             0x3
#define SP3_size                                 0x1
#define SP3_value_mask                           0x8
#define SP3_clear_mask                           0xF7

#define SP4                                      0x4
#define SP4_address                              0xFFC
#define SP4_position                             0x4
#define SP4_size                                 0x1
#define SP4_value_mask                           0x10
#define SP4_clear_mask                           0xEF

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


/*------------------------------#
| TOSL                    0xFFD |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define TOSL                                     0x0
#define TOSL_address                             0xFFD
#define TOSL_position                            0x0
#define TOSL_size                                0x8
#define TOSL_value_mask                          0xFF
#define TOSL_clear_mask                          0x0


/*------------------------------#
| TOSH                    0xFFE |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define TOSH                                     0x0
#define TOSH_address                             0xFFE
#define TOSH_position                            0x0
#define TOSH_size                                0x8
#define TOSH_value_mask                          0xFF
#define TOSH_clear_mask                          0x0

#endif // _PIC18F66K90_H_
