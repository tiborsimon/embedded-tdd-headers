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

#ifndef _PIC18F258_H_
#define _PIC18F258_H_


/*---------------------------------------------------------------------------------------#
| RXF0SIDH                                                                         0xF00 |
#----------------------------------------------------------------------------------------#
| RXF0SID10 | RXF0SID9 | RXF0SID8 | RXF0SID7 | RXF0SID6 | RXF0SID5 | RXF0SID4 | RXF0SID3 |
#----------------------------------------------------------------------------------------#
| 7         | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
#---------------------------------------------------------------------------------------*/

#define RXF0SIDH                                 0x0
#define RXF0SIDH_address                         0xF00
#define RXF0SIDH_position                        0x0
#define RXF0SIDH_size                            0x8
#define RXF0SIDH_value_mask                      0xFF
#define RXF0SIDH_clear_mask                      0x0

#define RXF0SID3                                 0x0
#define RXF0SID3_address                         0xF00
#define RXF0SID3_position                        0x0
#define RXF0SID3_size                            0x1
#define RXF0SID3_value_mask                      0x1
#define RXF0SID3_clear_mask                      0xFE

#define RXF0SIDH_SID3                            0x0
#define RXF0SIDH_SID3_address                    0xF00
#define RXF0SIDH_SID3_position                   0x0
#define RXF0SIDH_SID3_size                       0x1
#define RXF0SIDH_SID3_value_mask                 0x1
#define RXF0SIDH_SID3_clear_mask                 0xFE

#define RXF0SID4                                 0x1
#define RXF0SID4_address                         0xF00
#define RXF0SID4_position                        0x1
#define RXF0SID4_size                            0x1
#define RXF0SID4_value_mask                      0x2
#define RXF0SID4_clear_mask                      0xFD

#define RXF0SIDH_SID4                            0x1
#define RXF0SIDH_SID4_address                    0xF00
#define RXF0SIDH_SID4_position                   0x1
#define RXF0SIDH_SID4_size                       0x1
#define RXF0SIDH_SID4_value_mask                 0x2
#define RXF0SIDH_SID4_clear_mask                 0xFD

#define RXF0SID5                                 0x2
#define RXF0SID5_address                         0xF00
#define RXF0SID5_position                        0x2
#define RXF0SID5_size                            0x1
#define RXF0SID5_value_mask                      0x4
#define RXF0SID5_clear_mask                      0xFB

#define RXF0SIDH_SID5                            0x2
#define RXF0SIDH_SID5_address                    0xF00
#define RXF0SIDH_SID5_position                   0x2
#define RXF0SIDH_SID5_size                       0x1
#define RXF0SIDH_SID5_value_mask                 0x4
#define RXF0SIDH_SID5_clear_mask                 0xFB

#define RXF0SID6                                 0x3
#define RXF0SID6_address                         0xF00
#define RXF0SID6_position                        0x3
#define RXF0SID6_size                            0x1
#define RXF0SID6_value_mask                      0x8
#define RXF0SID6_clear_mask                      0xF7

#define RXF0SIDH_SID6                            0x3
#define RXF0SIDH_SID6_address                    0xF00
#define RXF0SIDH_SID6_position                   0x3
#define RXF0SIDH_SID6_size                       0x1
#define RXF0SIDH_SID6_value_mask                 0x8
#define RXF0SIDH_SID6_clear_mask                 0xF7

#define RXF0SID7                                 0x4
#define RXF0SID7_address                         0xF00
#define RXF0SID7_position                        0x4
#define RXF0SID7_size                            0x1
#define RXF0SID7_value_mask                      0x10
#define RXF0SID7_clear_mask                      0xEF

#define RXF0SIDH_SID7                            0x4
#define RXF0SIDH_SID7_address                    0xF00
#define RXF0SIDH_SID7_position                   0x4
#define RXF0SIDH_SID7_size                       0x1
#define RXF0SIDH_SID7_value_mask                 0x10
#define RXF0SIDH_SID7_clear_mask                 0xEF

#define RXF0SID8                                 0x5
#define RXF0SID8_address                         0xF00
#define RXF0SID8_position                        0x5
#define RXF0SID8_size                            0x1
#define RXF0SID8_value_mask                      0x20
#define RXF0SID8_clear_mask                      0xDF

#define RXF0SIDH_SID8                            0x5
#define RXF0SIDH_SID8_address                    0xF00
#define RXF0SIDH_SID8_position                   0x5
#define RXF0SIDH_SID8_size                       0x1
#define RXF0SIDH_SID8_value_mask                 0x20
#define RXF0SIDH_SID8_clear_mask                 0xDF

#define RXF0SID9                                 0x6
#define RXF0SID9_address                         0xF00
#define RXF0SID9_position                        0x6
#define RXF0SID9_size                            0x1
#define RXF0SID9_value_mask                      0x40
#define RXF0SID9_clear_mask                      0xBF

#define RXF0SIDH_SID9                            0x6
#define RXF0SIDH_SID9_address                    0xF00
#define RXF0SIDH_SID9_position                   0x6
#define RXF0SIDH_SID9_size                       0x1
#define RXF0SIDH_SID9_value_mask                 0x40
#define RXF0SIDH_SID9_clear_mask                 0xBF

#define RXF0SID10                                0x7
#define RXF0SID10_address                        0xF00
#define RXF0SID10_position                       0x7
#define RXF0SID10_size                           0x1
#define RXF0SID10_value_mask                     0x80
#define RXF0SID10_clear_mask                     0x7F

#define RXF0SIDH_SID10                           0x7
#define RXF0SIDH_SID10_address                   0xF00
#define RXF0SIDH_SID10_position                  0x7
#define RXF0SIDH_SID10_size                      0x1
#define RXF0SIDH_SID10_value_mask                0x80
#define RXF0SIDH_SID10_clear_mask                0x7F


/*--------------------------------------------------------------------------------------#
| RXF0SIDL                                                                        0xF01 |
#---------------------------------------------------------------------------------------#
| RXF0SID2 | RXF0SID1 | RXF0SID0 | - | RXF0SIDL_EXIDEN | - | RXF0EID17 | RXF0SIDL_EID16 |
#---------------------------------------------------------------------------------------#
| 7        | 6        | 5        | 4 | 3               | 2 | 1         | 0              |
#--------------------------------------------------------------------------------------*/

#define RXF0SIDL                                 0x0
#define RXF0SIDL_address                         0xF01
#define RXF0SIDL_position                        0x0
#define RXF0SIDL_size                            0x8
#define RXF0SIDL_value_mask                      0xFF
#define RXF0SIDL_clear_mask                      0x0

#define RXF0SIDL_EID16                           0x0
#define RXF0SIDL_EID16_address                   0xF01
#define RXF0SIDL_EID16_position                  0x0
#define RXF0SIDL_EID16_size                      0x1
#define RXF0SIDL_EID16_value_mask                0x1
#define RXF0SIDL_EID16_clear_mask                0xFE

#define RXF0EID16                                0x0
#define RXF0EID16_address                        0xF01
#define RXF0EID16_position                       0x0
#define RXF0EID16_size                           0x1
#define RXF0EID16_value_mask                     0x1
#define RXF0EID16_clear_mask                     0xFE

#define RXF0SIDL_EID17                           0x1
#define RXF0SIDL_EID17_address                   0xF01
#define RXF0SIDL_EID17_position                  0x1
#define RXF0SIDL_EID17_size                      0x1
#define RXF0SIDL_EID17_value_mask                0x2
#define RXF0SIDL_EID17_clear_mask                0xFD

#define RXF0EID17                                0x1
#define RXF0EID17_address                        0xF01
#define RXF0EID17_position                       0x1
#define RXF0EID17_size                           0x1
#define RXF0EID17_value_mask                     0x2
#define RXF0EID17_clear_mask                     0xFD

#define RXF0EXIDEN                               0x3
#define RXF0EXIDEN_address                       0xF01
#define RXF0EXIDEN_position                      0x3
#define RXF0EXIDEN_size                          0x1
#define RXF0EXIDEN_value_mask                    0x8
#define RXF0EXIDEN_clear_mask                    0xF7

#define RXF0SIDL_EXIDEN                          0x3
#define RXF0SIDL_EXIDEN_address                  0xF01
#define RXF0SIDL_EXIDEN_position                 0x3
#define RXF0SIDL_EXIDEN_size                     0x1
#define RXF0SIDL_EXIDEN_value_mask               0x8
#define RXF0SIDL_EXIDEN_clear_mask               0xF7

#define RXF0SID0                                 0x5
#define RXF0SID0_address                         0xF01
#define RXF0SID0_position                        0x5
#define RXF0SID0_size                            0x1
#define RXF0SID0_value_mask                      0x20
#define RXF0SID0_clear_mask                      0xDF

#define RXF0SIDL_SID0                            0x5
#define RXF0SIDL_SID0_address                    0xF01
#define RXF0SIDL_SID0_position                   0x5
#define RXF0SIDL_SID0_size                       0x1
#define RXF0SIDL_SID0_value_mask                 0x20
#define RXF0SIDL_SID0_clear_mask                 0xDF

#define RXF0SID1                                 0x6
#define RXF0SID1_address                         0xF01
#define RXF0SID1_position                        0x6
#define RXF0SID1_size                            0x1
#define RXF0SID1_value_mask                      0x40
#define RXF0SID1_clear_mask                      0xBF

#define RXF0SIDL_SID1                            0x6
#define RXF0SIDL_SID1_address                    0xF01
#define RXF0SIDL_SID1_position                   0x6
#define RXF0SIDL_SID1_size                       0x1
#define RXF0SIDL_SID1_value_mask                 0x40
#define RXF0SIDL_SID1_clear_mask                 0xBF

#define RXF0SID2                                 0x7
#define RXF0SID2_address                         0xF01
#define RXF0SID2_position                        0x7
#define RXF0SID2_size                            0x1
#define RXF0SID2_value_mask                      0x80
#define RXF0SID2_clear_mask                      0x7F

#define RXF0SIDL_SID2                            0x7
#define RXF0SIDL_SID2_address                    0xF01
#define RXF0SIDL_SID2_position                   0x7
#define RXF0SIDL_SID2_size                       0x1
#define RXF0SIDL_SID2_value_mask                 0x80
#define RXF0SIDL_SID2_clear_mask                 0x7F


/*----------------------------------------------------------------------------------------------------------------#
| RXF0EIDH                                                                                                  0xF02 |
#-----------------------------------------------------------------------------------------------------------------#
| RXF0EID15 | RXF0EID14 | RXF0EIDH_EID13 | RXF0EIDH_EID12 | RXF0EID11 | RXF0EID10 | RXF0EIDH_EID9 | RXF0EIDH_EID8 |
#-----------------------------------------------------------------------------------------------------------------#
| 7         | 6         | 5              | 4              | 3         | 2         | 1             | 0             |
#----------------------------------------------------------------------------------------------------------------*/

#define RXF0EIDH                                 0x0
#define RXF0EIDH_address                         0xF02
#define RXF0EIDH_position                        0x0
#define RXF0EIDH_size                            0x8
#define RXF0EIDH_value_mask                      0xFF
#define RXF0EIDH_clear_mask                      0x0

#define RXF0EIDH_EID8                            0x0
#define RXF0EIDH_EID8_address                    0xF02
#define RXF0EIDH_EID8_position                   0x0
#define RXF0EIDH_EID8_size                       0x1
#define RXF0EIDH_EID8_value_mask                 0x1
#define RXF0EIDH_EID8_clear_mask                 0xFE

#define RXF0EID8                                 0x0
#define RXF0EID8_address                         0xF02
#define RXF0EID8_position                        0x0
#define RXF0EID8_size                            0x1
#define RXF0EID8_value_mask                      0x1
#define RXF0EID8_clear_mask                      0xFE

#define RXF0EIDH_EID9                            0x1
#define RXF0EIDH_EID9_address                    0xF02
#define RXF0EIDH_EID9_position                   0x1
#define RXF0EIDH_EID9_size                       0x1
#define RXF0EIDH_EID9_value_mask                 0x2
#define RXF0EIDH_EID9_clear_mask                 0xFD

#define RXF0EID9                                 0x1
#define RXF0EID9_address                         0xF02
#define RXF0EID9_position                        0x1
#define RXF0EID9_size                            0x1
#define RXF0EID9_value_mask                      0x2
#define RXF0EID9_clear_mask                      0xFD

#define RXF0EIDH_EID10                           0x2
#define RXF0EIDH_EID10_address                   0xF02
#define RXF0EIDH_EID10_position                  0x2
#define RXF0EIDH_EID10_size                      0x1
#define RXF0EIDH_EID10_value_mask                0x4
#define RXF0EIDH_EID10_clear_mask                0xFB

#define RXF0EID10                                0x2
#define RXF0EID10_address                        0xF02
#define RXF0EID10_position                       0x2
#define RXF0EID10_size                           0x1
#define RXF0EID10_value_mask                     0x4
#define RXF0EID10_clear_mask                     0xFB

#define RXF0EIDH_EID11                           0x3
#define RXF0EIDH_EID11_address                   0xF02
#define RXF0EIDH_EID11_position                  0x3
#define RXF0EIDH_EID11_size                      0x1
#define RXF0EIDH_EID11_value_mask                0x8
#define RXF0EIDH_EID11_clear_mask                0xF7

#define RXF0EID11                                0x3
#define RXF0EID11_address                        0xF02
#define RXF0EID11_position                       0x3
#define RXF0EID11_size                           0x1
#define RXF0EID11_value_mask                     0x8
#define RXF0EID11_clear_mask                     0xF7

#define RXF0EIDH_EID12                           0x4
#define RXF0EIDH_EID12_address                   0xF02
#define RXF0EIDH_EID12_position                  0x4
#define RXF0EIDH_EID12_size                      0x1
#define RXF0EIDH_EID12_value_mask                0x10
#define RXF0EIDH_EID12_clear_mask                0xEF

#define RXF0EID12                                0x4
#define RXF0EID12_address                        0xF02
#define RXF0EID12_position                       0x4
#define RXF0EID12_size                           0x1
#define RXF0EID12_value_mask                     0x10
#define RXF0EID12_clear_mask                     0xEF

#define RXF0EIDH_EID13                           0x5
#define RXF0EIDH_EID13_address                   0xF02
#define RXF0EIDH_EID13_position                  0x5
#define RXF0EIDH_EID13_size                      0x1
#define RXF0EIDH_EID13_value_mask                0x20
#define RXF0EIDH_EID13_clear_mask                0xDF

#define RXF0EID13                                0x5
#define RXF0EID13_address                        0xF02
#define RXF0EID13_position                       0x5
#define RXF0EID13_size                           0x1
#define RXF0EID13_value_mask                     0x20
#define RXF0EID13_clear_mask                     0xDF

#define RXF0EIDH_EID14                           0x6
#define RXF0EIDH_EID14_address                   0xF02
#define RXF0EIDH_EID14_position                  0x6
#define RXF0EIDH_EID14_size                      0x1
#define RXF0EIDH_EID14_value_mask                0x40
#define RXF0EIDH_EID14_clear_mask                0xBF

#define RXF0EID14                                0x6
#define RXF0EID14_address                        0xF02
#define RXF0EID14_position                       0x6
#define RXF0EID14_size                           0x1
#define RXF0EID14_value_mask                     0x40
#define RXF0EID14_clear_mask                     0xBF

#define RXF0EIDH_EID15                           0x7
#define RXF0EIDH_EID15_address                   0xF02
#define RXF0EIDH_EID15_position                  0x7
#define RXF0EIDH_EID15_size                      0x1
#define RXF0EIDH_EID15_value_mask                0x80
#define RXF0EIDH_EID15_clear_mask                0x7F

#define RXF0EID15                                0x7
#define RXF0EID15_address                        0xF02
#define RXF0EID15_position                       0x7
#define RXF0EID15_size                           0x1
#define RXF0EID15_value_mask                     0x80
#define RXF0EID15_clear_mask                     0x7F


/*------------------------------------------------------------------------------------------------------------------------------#
| RXF0EIDL                                                                                                                0xF03 |
#-------------------------------------------------------------------------------------------------------------------------------#
| RXF0EIDL_EID7 | RXF0EIDL_EID6 | RXF0EIDL_EID5 | RXF0EIDL_EID4 | RXF0EIDL_EID3 | RXF0EIDL_EID2 | RXF0EIDL_EID1 | RXF0EIDL_EID0 |
#-------------------------------------------------------------------------------------------------------------------------------#
| 7             | 6             | 5             | 4             | 3             | 2             | 1             | 0             |
#------------------------------------------------------------------------------------------------------------------------------*/

#define RXF0EIDL                                 0x0
#define RXF0EIDL_address                         0xF03
#define RXF0EIDL_position                        0x0
#define RXF0EIDL_size                            0x8
#define RXF0EIDL_value_mask                      0xFF
#define RXF0EIDL_clear_mask                      0x0

#define RXF0EIDL_EID0                            0x0
#define RXF0EIDL_EID0_address                    0xF03
#define RXF0EIDL_EID0_position                   0x0
#define RXF0EIDL_EID0_size                       0x1
#define RXF0EIDL_EID0_value_mask                 0x1
#define RXF0EIDL_EID0_clear_mask                 0xFE

#define RXF0EID0                                 0x0
#define RXF0EID0_address                         0xF03
#define RXF0EID0_position                        0x0
#define RXF0EID0_size                            0x1
#define RXF0EID0_value_mask                      0x1
#define RXF0EID0_clear_mask                      0xFE

#define RXF0EIDL_EID1                            0x1
#define RXF0EIDL_EID1_address                    0xF03
#define RXF0EIDL_EID1_position                   0x1
#define RXF0EIDL_EID1_size                       0x1
#define RXF0EIDL_EID1_value_mask                 0x2
#define RXF0EIDL_EID1_clear_mask                 0xFD

#define RXF0EID1                                 0x1
#define RXF0EID1_address                         0xF03
#define RXF0EID1_position                        0x1
#define RXF0EID1_size                            0x1
#define RXF0EID1_value_mask                      0x2
#define RXF0EID1_clear_mask                      0xFD

#define RXF0EIDL_EID2                            0x2
#define RXF0EIDL_EID2_address                    0xF03
#define RXF0EIDL_EID2_position                   0x2
#define RXF0EIDL_EID2_size                       0x1
#define RXF0EIDL_EID2_value_mask                 0x4
#define RXF0EIDL_EID2_clear_mask                 0xFB

#define RXF0EID2                                 0x2
#define RXF0EID2_address                         0xF03
#define RXF0EID2_position                        0x2
#define RXF0EID2_size                            0x1
#define RXF0EID2_value_mask                      0x4
#define RXF0EID2_clear_mask                      0xFB

#define RXF0EIDL_EID3                            0x3
#define RXF0EIDL_EID3_address                    0xF03
#define RXF0EIDL_EID3_position                   0x3
#define RXF0EIDL_EID3_size                       0x1
#define RXF0EIDL_EID3_value_mask                 0x8
#define RXF0EIDL_EID3_clear_mask                 0xF7

#define RXF0EID3                                 0x3
#define RXF0EID3_address                         0xF03
#define RXF0EID3_position                        0x3
#define RXF0EID3_size                            0x1
#define RXF0EID3_value_mask                      0x8
#define RXF0EID3_clear_mask                      0xF7

#define RXF0EIDL_EID4                            0x4
#define RXF0EIDL_EID4_address                    0xF03
#define RXF0EIDL_EID4_position                   0x4
#define RXF0EIDL_EID4_size                       0x1
#define RXF0EIDL_EID4_value_mask                 0x10
#define RXF0EIDL_EID4_clear_mask                 0xEF

#define RXF0EID4                                 0x4
#define RXF0EID4_address                         0xF03
#define RXF0EID4_position                        0x4
#define RXF0EID4_size                            0x1
#define RXF0EID4_value_mask                      0x10
#define RXF0EID4_clear_mask                      0xEF

#define RXF0EIDL_EID5                            0x5
#define RXF0EIDL_EID5_address                    0xF03
#define RXF0EIDL_EID5_position                   0x5
#define RXF0EIDL_EID5_size                       0x1
#define RXF0EIDL_EID5_value_mask                 0x20
#define RXF0EIDL_EID5_clear_mask                 0xDF

#define RXF0EID5                                 0x5
#define RXF0EID5_address                         0xF03
#define RXF0EID5_position                        0x5
#define RXF0EID5_size                            0x1
#define RXF0EID5_value_mask                      0x20
#define RXF0EID5_clear_mask                      0xDF

#define RXF0EIDL_EID6                            0x6
#define RXF0EIDL_EID6_address                    0xF03
#define RXF0EIDL_EID6_position                   0x6
#define RXF0EIDL_EID6_size                       0x1
#define RXF0EIDL_EID6_value_mask                 0x40
#define RXF0EIDL_EID6_clear_mask                 0xBF

#define RXF0EID6                                 0x6
#define RXF0EID6_address                         0xF03
#define RXF0EID6_position                        0x6
#define RXF0EID6_size                            0x1
#define RXF0EID6_value_mask                      0x40
#define RXF0EID6_clear_mask                      0xBF

#define RXF0EIDL_EID7                            0x7
#define RXF0EIDL_EID7_address                    0xF03
#define RXF0EIDL_EID7_position                   0x7
#define RXF0EIDL_EID7_size                       0x1
#define RXF0EIDL_EID7_value_mask                 0x80
#define RXF0EIDL_EID7_clear_mask                 0x7F

#define RXF0EID7                                 0x7
#define RXF0EID7_address                         0xF03
#define RXF0EID7_position                        0x7
#define RXF0EID7_size                            0x1
#define RXF0EID7_value_mask                      0x80
#define RXF0EID7_clear_mask                      0x7F


/*--------------------------------------------------------------------------------------------------------------------------#
| RXF1SIDH                                                                                                            0xF04 |
#---------------------------------------------------------------------------------------------------------------------------#
| RXF1SID10 | RXF1SIDH_SID9 | RXF1SIDH_SID8 | RXF1SIDH_SID7 | RXF1SIDH_SID6 | RXF1SIDH_SID5 | RXF1SIDH_SID4 | RXF1SIDH_SID3 |
#---------------------------------------------------------------------------------------------------------------------------#
| 7         | 6             | 5             | 4             | 3             | 2             | 1             | 0             |
#--------------------------------------------------------------------------------------------------------------------------*/

#define RXF1SIDH                                 0x0
#define RXF1SIDH_address                         0xF04
#define RXF1SIDH_position                        0x0
#define RXF1SIDH_size                            0x8
#define RXF1SIDH_value_mask                      0xFF
#define RXF1SIDH_clear_mask                      0x0

#define RXF1SID3                                 0x0
#define RXF1SID3_address                         0xF04
#define RXF1SID3_position                        0x0
#define RXF1SID3_size                            0x1
#define RXF1SID3_value_mask                      0x1
#define RXF1SID3_clear_mask                      0xFE

#define RXF1SIDH_SID3                            0x0
#define RXF1SIDH_SID3_address                    0xF04
#define RXF1SIDH_SID3_position                   0x0
#define RXF1SIDH_SID3_size                       0x1
#define RXF1SIDH_SID3_value_mask                 0x1
#define RXF1SIDH_SID3_clear_mask                 0xFE

#define RXF1SID4                                 0x1
#define RXF1SID4_address                         0xF04
#define RXF1SID4_position                        0x1
#define RXF1SID4_size                            0x1
#define RXF1SID4_value_mask                      0x2
#define RXF1SID4_clear_mask                      0xFD

#define RXF1SIDH_SID4                            0x1
#define RXF1SIDH_SID4_address                    0xF04
#define RXF1SIDH_SID4_position                   0x1
#define RXF1SIDH_SID4_size                       0x1
#define RXF1SIDH_SID4_value_mask                 0x2
#define RXF1SIDH_SID4_clear_mask                 0xFD

#define RXF1SID5                                 0x2
#define RXF1SID5_address                         0xF04
#define RXF1SID5_position                        0x2
#define RXF1SID5_size                            0x1
#define RXF1SID5_value_mask                      0x4
#define RXF1SID5_clear_mask                      0xFB

#define RXF1SIDH_SID5                            0x2
#define RXF1SIDH_SID5_address                    0xF04
#define RXF1SIDH_SID5_position                   0x2
#define RXF1SIDH_SID5_size                       0x1
#define RXF1SIDH_SID5_value_mask                 0x4
#define RXF1SIDH_SID5_clear_mask                 0xFB

#define RXF1SID6                                 0x3
#define RXF1SID6_address                         0xF04
#define RXF1SID6_position                        0x3
#define RXF1SID6_size                            0x1
#define RXF1SID6_value_mask                      0x8
#define RXF1SID6_clear_mask                      0xF7

#define RXF1SIDH_SID6                            0x3
#define RXF1SIDH_SID6_address                    0xF04
#define RXF1SIDH_SID6_position                   0x3
#define RXF1SIDH_SID6_size                       0x1
#define RXF1SIDH_SID6_value_mask                 0x8
#define RXF1SIDH_SID6_clear_mask                 0xF7

#define RXF1SID7                                 0x4
#define RXF1SID7_address                         0xF04
#define RXF1SID7_position                        0x4
#define RXF1SID7_size                            0x1
#define RXF1SID7_value_mask                      0x10
#define RXF1SID7_clear_mask                      0xEF

#define RXF1SIDH_SID7                            0x4
#define RXF1SIDH_SID7_address                    0xF04
#define RXF1SIDH_SID7_position                   0x4
#define RXF1SIDH_SID7_size                       0x1
#define RXF1SIDH_SID7_value_mask                 0x10
#define RXF1SIDH_SID7_clear_mask                 0xEF

#define RXF1SID8                                 0x5
#define RXF1SID8_address                         0xF04
#define RXF1SID8_position                        0x5
#define RXF1SID8_size                            0x1
#define RXF1SID8_value_mask                      0x20
#define RXF1SID8_clear_mask                      0xDF

#define RXF1SIDH_SID8                            0x5
#define RXF1SIDH_SID8_address                    0xF04
#define RXF1SIDH_SID8_position                   0x5
#define RXF1SIDH_SID8_size                       0x1
#define RXF1SIDH_SID8_value_mask                 0x20
#define RXF1SIDH_SID8_clear_mask                 0xDF

#define RXF1SID9                                 0x6
#define RXF1SID9_address                         0xF04
#define RXF1SID9_position                        0x6
#define RXF1SID9_size                            0x1
#define RXF1SID9_value_mask                      0x40
#define RXF1SID9_clear_mask                      0xBF

#define RXF1SIDH_SID9                            0x6
#define RXF1SIDH_SID9_address                    0xF04
#define RXF1SIDH_SID9_position                   0x6
#define RXF1SIDH_SID9_size                       0x1
#define RXF1SIDH_SID9_value_mask                 0x40
#define RXF1SIDH_SID9_clear_mask                 0xBF

#define RXF1SIDH_SID10                           0x7
#define RXF1SIDH_SID10_address                   0xF04
#define RXF1SIDH_SID10_position                  0x7
#define RXF1SIDH_SID10_size                      0x1
#define RXF1SIDH_SID10_value_mask                0x80
#define RXF1SIDH_SID10_clear_mask                0x7F

#define RXF1SID10                                0x7
#define RXF1SID10_address                        0xF04
#define RXF1SID10_position                       0x7
#define RXF1SID10_size                           0x1
#define RXF1SID10_value_mask                     0x80
#define RXF1SID10_clear_mask                     0x7F


/*----------------------------------------------------------------------------#
| RXF1SIDL                                                              0xF05 |
#-----------------------------------------------------------------------------#
| RXF1SID2 | RXF1SID1 | RXF1SID0 | - | RXF1EXIDEN | - | RXF1EID17 | RXF1EID16 |
#-----------------------------------------------------------------------------#
| 7        | 6        | 5        | 4 | 3          | 2 | 1         | 0         |
#----------------------------------------------------------------------------*/

#define RXF1SIDL                                 0x0
#define RXF1SIDL_address                         0xF05
#define RXF1SIDL_position                        0x0
#define RXF1SIDL_size                            0x8
#define RXF1SIDL_value_mask                      0xFF
#define RXF1SIDL_clear_mask                      0x0

#define RXF1SIDL_EID16                           0x0
#define RXF1SIDL_EID16_address                   0xF05
#define RXF1SIDL_EID16_position                  0x0
#define RXF1SIDL_EID16_size                      0x1
#define RXF1SIDL_EID16_value_mask                0x1
#define RXF1SIDL_EID16_clear_mask                0xFE

#define RXF1EID16                                0x0
#define RXF1EID16_address                        0xF05
#define RXF1EID16_position                       0x0
#define RXF1EID16_size                           0x1
#define RXF1EID16_value_mask                     0x1
#define RXF1EID16_clear_mask                     0xFE

#define RXF1EID17                                0x1
#define RXF1EID17_address                        0xF05
#define RXF1EID17_position                       0x1
#define RXF1EID17_size                           0x1
#define RXF1EID17_value_mask                     0x2
#define RXF1EID17_clear_mask                     0xFD

#define RXF1SIDL_EID17                           0x1
#define RXF1SIDL_EID17_address                   0xF05
#define RXF1SIDL_EID17_position                  0x1
#define RXF1SIDL_EID17_size                      0x1
#define RXF1SIDL_EID17_value_mask                0x2
#define RXF1SIDL_EID17_clear_mask                0xFD

#define RXF1EXIDEN                               0x3
#define RXF1EXIDEN_address                       0xF05
#define RXF1EXIDEN_position                      0x3
#define RXF1EXIDEN_size                          0x1
#define RXF1EXIDEN_value_mask                    0x8
#define RXF1EXIDEN_clear_mask                    0xF7

#define RXF1SIDL_EXIDEN                          0x3
#define RXF1SIDL_EXIDEN_address                  0xF05
#define RXF1SIDL_EXIDEN_position                 0x3
#define RXF1SIDL_EXIDEN_size                     0x1
#define RXF1SIDL_EXIDEN_value_mask               0x8
#define RXF1SIDL_EXIDEN_clear_mask               0xF7

#define RXF1SIDL_SID0                            0x5
#define RXF1SIDL_SID0_address                    0xF05
#define RXF1SIDL_SID0_position                   0x5
#define RXF1SIDL_SID0_size                       0x1
#define RXF1SIDL_SID0_value_mask                 0x20
#define RXF1SIDL_SID0_clear_mask                 0xDF

#define RXF1SID0                                 0x5
#define RXF1SID0_address                         0xF05
#define RXF1SID0_position                        0x5
#define RXF1SID0_size                            0x1
#define RXF1SID0_value_mask                      0x20
#define RXF1SID0_clear_mask                      0xDF

#define RXF1SIDL_SID1                            0x6
#define RXF1SIDL_SID1_address                    0xF05
#define RXF1SIDL_SID1_position                   0x6
#define RXF1SIDL_SID1_size                       0x1
#define RXF1SIDL_SID1_value_mask                 0x40
#define RXF1SIDL_SID1_clear_mask                 0xBF

#define RXF1SID1                                 0x6
#define RXF1SID1_address                         0xF05
#define RXF1SID1_position                        0x6
#define RXF1SID1_size                            0x1
#define RXF1SID1_value_mask                      0x40
#define RXF1SID1_clear_mask                      0xBF

#define RXF1SID2                                 0x7
#define RXF1SID2_address                         0xF05
#define RXF1SID2_position                        0x7
#define RXF1SID2_size                            0x1
#define RXF1SID2_value_mask                      0x80
#define RXF1SID2_clear_mask                      0x7F

#define RXF1SIDL_SID2                            0x7
#define RXF1SIDL_SID2_address                    0xF05
#define RXF1SIDL_SID2_position                   0x7
#define RXF1SIDL_SID2_size                       0x1
#define RXF1SIDL_SID2_value_mask                 0x80
#define RXF1SIDL_SID2_clear_mask                 0x7F


/*--------------------------------------------------------------------------------------------------------------------------#
| RXF1EIDH                                                                                                            0xF06 |
#---------------------------------------------------------------------------------------------------------------------------#
| RXF1EIDH_EID15 | RXF1EIDH_EID14 | RXF1EIDH_EID13 | RXF1EIDH_EID12 | RXF1EIDH_EID11 | RXF1EIDH_EID10 | RXF1EID9 | RXF1EID8 |
#---------------------------------------------------------------------------------------------------------------------------#
| 7              | 6              | 5              | 4              | 3              | 2              | 1        | 0        |
#--------------------------------------------------------------------------------------------------------------------------*/

#define RXF1EIDH                                 0x0
#define RXF1EIDH_address                         0xF06
#define RXF1EIDH_position                        0x0
#define RXF1EIDH_size                            0x8
#define RXF1EIDH_value_mask                      0xFF
#define RXF1EIDH_clear_mask                      0x0

#define RXF1EID8                                 0x0
#define RXF1EID8_address                         0xF06
#define RXF1EID8_position                        0x0
#define RXF1EID8_size                            0x1
#define RXF1EID8_value_mask                      0x1
#define RXF1EID8_clear_mask                      0xFE

#define RXF1EIDH_EID8                            0x0
#define RXF1EIDH_EID8_address                    0xF06
#define RXF1EIDH_EID8_position                   0x0
#define RXF1EIDH_EID8_size                       0x1
#define RXF1EIDH_EID8_value_mask                 0x1
#define RXF1EIDH_EID8_clear_mask                 0xFE

#define RXF1EID9                                 0x1
#define RXF1EID9_address                         0xF06
#define RXF1EID9_position                        0x1
#define RXF1EID9_size                            0x1
#define RXF1EID9_value_mask                      0x2
#define RXF1EID9_clear_mask                      0xFD

#define RXF1EIDH_EID9                            0x1
#define RXF1EIDH_EID9_address                    0xF06
#define RXF1EIDH_EID9_position                   0x1
#define RXF1EIDH_EID9_size                       0x1
#define RXF1EIDH_EID9_value_mask                 0x2
#define RXF1EIDH_EID9_clear_mask                 0xFD

#define RXF1EIDH_EID10                           0x2
#define RXF1EIDH_EID10_address                   0xF06
#define RXF1EIDH_EID10_position                  0x2
#define RXF1EIDH_EID10_size                      0x1
#define RXF1EIDH_EID10_value_mask                0x4
#define RXF1EIDH_EID10_clear_mask                0xFB

#define RXF1EID10                                0x2
#define RXF1EID10_address                        0xF06
#define RXF1EID10_position                       0x2
#define RXF1EID10_size                           0x1
#define RXF1EID10_value_mask                     0x4
#define RXF1EID10_clear_mask                     0xFB

#define RXF1EIDH_EID11                           0x3
#define RXF1EIDH_EID11_address                   0xF06
#define RXF1EIDH_EID11_position                  0x3
#define RXF1EIDH_EID11_size                      0x1
#define RXF1EIDH_EID11_value_mask                0x8
#define RXF1EIDH_EID11_clear_mask                0xF7

#define RXF1EID11                                0x3
#define RXF1EID11_address                        0xF06
#define RXF1EID11_position                       0x3
#define RXF1EID11_size                           0x1
#define RXF1EID11_value_mask                     0x8
#define RXF1EID11_clear_mask                     0xF7

#define RXF1EIDH_EID12                           0x4
#define RXF1EIDH_EID12_address                   0xF06
#define RXF1EIDH_EID12_position                  0x4
#define RXF1EIDH_EID12_size                      0x1
#define RXF1EIDH_EID12_value_mask                0x10
#define RXF1EIDH_EID12_clear_mask                0xEF

#define RXF1EID12                                0x4
#define RXF1EID12_address                        0xF06
#define RXF1EID12_position                       0x4
#define RXF1EID12_size                           0x1
#define RXF1EID12_value_mask                     0x10
#define RXF1EID12_clear_mask                     0xEF

#define RXF1EIDH_EID13                           0x5
#define RXF1EIDH_EID13_address                   0xF06
#define RXF1EIDH_EID13_position                  0x5
#define RXF1EIDH_EID13_size                      0x1
#define RXF1EIDH_EID13_value_mask                0x20
#define RXF1EIDH_EID13_clear_mask                0xDF

#define RXF1EID13                                0x5
#define RXF1EID13_address                        0xF06
#define RXF1EID13_position                       0x5
#define RXF1EID13_size                           0x1
#define RXF1EID13_value_mask                     0x20
#define RXF1EID13_clear_mask                     0xDF

#define RXF1EIDH_EID14                           0x6
#define RXF1EIDH_EID14_address                   0xF06
#define RXF1EIDH_EID14_position                  0x6
#define RXF1EIDH_EID14_size                      0x1
#define RXF1EIDH_EID14_value_mask                0x40
#define RXF1EIDH_EID14_clear_mask                0xBF

#define RXF1EID14                                0x6
#define RXF1EID14_address                        0xF06
#define RXF1EID14_position                       0x6
#define RXF1EID14_size                           0x1
#define RXF1EID14_value_mask                     0x40
#define RXF1EID14_clear_mask                     0xBF

#define RXF1EIDH_EID15                           0x7
#define RXF1EIDH_EID15_address                   0xF06
#define RXF1EIDH_EID15_position                  0x7
#define RXF1EIDH_EID15_size                      0x1
#define RXF1EIDH_EID15_value_mask                0x80
#define RXF1EIDH_EID15_clear_mask                0x7F

#define RXF1EID15                                0x7
#define RXF1EID15_address                        0xF06
#define RXF1EID15_position                       0x7
#define RXF1EID15_size                           0x1
#define RXF1EID15_value_mask                     0x80
#define RXF1EID15_clear_mask                     0x7F


/*--------------------------------------------------------------------------------------#
| RXF1EIDL                                                                        0xF07 |
#---------------------------------------------------------------------------------------#
| RXF1EID7 | RXF1EID6 | RXF1EID5 | RXF1EID4 | RXF1EID3 | RXF1EID2 | RXF1EID1 | RXF1EID0 |
#---------------------------------------------------------------------------------------#
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
#--------------------------------------------------------------------------------------*/

#define RXF1EIDL                                 0x0
#define RXF1EIDL_address                         0xF07
#define RXF1EIDL_position                        0x0
#define RXF1EIDL_size                            0x8
#define RXF1EIDL_value_mask                      0xFF
#define RXF1EIDL_clear_mask                      0x0

#define RXF1EID0                                 0x0
#define RXF1EID0_address                         0xF07
#define RXF1EID0_position                        0x0
#define RXF1EID0_size                            0x1
#define RXF1EID0_value_mask                      0x1
#define RXF1EID0_clear_mask                      0xFE

#define RXF1EIDL_EID0                            0x0
#define RXF1EIDL_EID0_address                    0xF07
#define RXF1EIDL_EID0_position                   0x0
#define RXF1EIDL_EID0_size                       0x1
#define RXF1EIDL_EID0_value_mask                 0x1
#define RXF1EIDL_EID0_clear_mask                 0xFE

#define RXF1EID1                                 0x1
#define RXF1EID1_address                         0xF07
#define RXF1EID1_position                        0x1
#define RXF1EID1_size                            0x1
#define RXF1EID1_value_mask                      0x2
#define RXF1EID1_clear_mask                      0xFD

#define RXF1EIDL_EID1                            0x1
#define RXF1EIDL_EID1_address                    0xF07
#define RXF1EIDL_EID1_position                   0x1
#define RXF1EIDL_EID1_size                       0x1
#define RXF1EIDL_EID1_value_mask                 0x2
#define RXF1EIDL_EID1_clear_mask                 0xFD

#define RXF1EID2                                 0x2
#define RXF1EID2_address                         0xF07
#define RXF1EID2_position                        0x2
#define RXF1EID2_size                            0x1
#define RXF1EID2_value_mask                      0x4
#define RXF1EID2_clear_mask                      0xFB

#define RXF1EIDL_EID2                            0x2
#define RXF1EIDL_EID2_address                    0xF07
#define RXF1EIDL_EID2_position                   0x2
#define RXF1EIDL_EID2_size                       0x1
#define RXF1EIDL_EID2_value_mask                 0x4
#define RXF1EIDL_EID2_clear_mask                 0xFB

#define RXF1EID3                                 0x3
#define RXF1EID3_address                         0xF07
#define RXF1EID3_position                        0x3
#define RXF1EID3_size                            0x1
#define RXF1EID3_value_mask                      0x8
#define RXF1EID3_clear_mask                      0xF7

#define RXF1EIDL_EID3                            0x3
#define RXF1EIDL_EID3_address                    0xF07
#define RXF1EIDL_EID3_position                   0x3
#define RXF1EIDL_EID3_size                       0x1
#define RXF1EIDL_EID3_value_mask                 0x8
#define RXF1EIDL_EID3_clear_mask                 0xF7

#define RXF1EID4                                 0x4
#define RXF1EID4_address                         0xF07
#define RXF1EID4_position                        0x4
#define RXF1EID4_size                            0x1
#define RXF1EID4_value_mask                      0x10
#define RXF1EID4_clear_mask                      0xEF

#define RXF1EIDL_EID4                            0x4
#define RXF1EIDL_EID4_address                    0xF07
#define RXF1EIDL_EID4_position                   0x4
#define RXF1EIDL_EID4_size                       0x1
#define RXF1EIDL_EID4_value_mask                 0x10
#define RXF1EIDL_EID4_clear_mask                 0xEF

#define RXF1EID5                                 0x5
#define RXF1EID5_address                         0xF07
#define RXF1EID5_position                        0x5
#define RXF1EID5_size                            0x1
#define RXF1EID5_value_mask                      0x20
#define RXF1EID5_clear_mask                      0xDF

#define RXF1EIDL_EID5                            0x5
#define RXF1EIDL_EID5_address                    0xF07
#define RXF1EIDL_EID5_position                   0x5
#define RXF1EIDL_EID5_size                       0x1
#define RXF1EIDL_EID5_value_mask                 0x20
#define RXF1EIDL_EID5_clear_mask                 0xDF

#define RXF1EID6                                 0x6
#define RXF1EID6_address                         0xF07
#define RXF1EID6_position                        0x6
#define RXF1EID6_size                            0x1
#define RXF1EID6_value_mask                      0x40
#define RXF1EID6_clear_mask                      0xBF

#define RXF1EIDL_EID6                            0x6
#define RXF1EIDL_EID6_address                    0xF07
#define RXF1EIDL_EID6_position                   0x6
#define RXF1EIDL_EID6_size                       0x1
#define RXF1EIDL_EID6_value_mask                 0x40
#define RXF1EIDL_EID6_clear_mask                 0xBF

#define RXF1EIDL_EID7                            0x7
#define RXF1EIDL_EID7_address                    0xF07
#define RXF1EIDL_EID7_position                   0x7
#define RXF1EIDL_EID7_size                       0x1
#define RXF1EIDL_EID7_value_mask                 0x80
#define RXF1EIDL_EID7_clear_mask                 0x7F

#define RXF1EID7                                 0x7
#define RXF1EID7_address                         0xF07
#define RXF1EID7_position                        0x7
#define RXF1EID7_size                            0x1
#define RXF1EID7_value_mask                      0x80
#define RXF1EID7_clear_mask                      0x7F


/*---------------------------------------------------------------------------------------#
| RXF2SIDH                                                                         0xF08 |
#----------------------------------------------------------------------------------------#
| RXF2SID10 | RXF2SID9 | RXF2SID8 | RXF2SID7 | RXF2SID6 | RXF2SID5 | RXF2SID4 | RXF2SID3 |
#----------------------------------------------------------------------------------------#
| 7         | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
#---------------------------------------------------------------------------------------*/

#define RXF2SIDH                                 0x0
#define RXF2SIDH_address                         0xF08
#define RXF2SIDH_position                        0x0
#define RXF2SIDH_size                            0x8
#define RXF2SIDH_value_mask                      0xFF
#define RXF2SIDH_clear_mask                      0x0

#define RXF2SID3                                 0x0
#define RXF2SID3_address                         0xF08
#define RXF2SID3_position                        0x0
#define RXF2SID3_size                            0x1
#define RXF2SID3_value_mask                      0x1
#define RXF2SID3_clear_mask                      0xFE

#define RXF2SIDH_SID3                            0x0
#define RXF2SIDH_SID3_address                    0xF08
#define RXF2SIDH_SID3_position                   0x0
#define RXF2SIDH_SID3_size                       0x1
#define RXF2SIDH_SID3_value_mask                 0x1
#define RXF2SIDH_SID3_clear_mask                 0xFE

#define RXF2SID4                                 0x1
#define RXF2SID4_address                         0xF08
#define RXF2SID4_position                        0x1
#define RXF2SID4_size                            0x1
#define RXF2SID4_value_mask                      0x2
#define RXF2SID4_clear_mask                      0xFD

#define RXF2SIDH_SID4                            0x1
#define RXF2SIDH_SID4_address                    0xF08
#define RXF2SIDH_SID4_position                   0x1
#define RXF2SIDH_SID4_size                       0x1
#define RXF2SIDH_SID4_value_mask                 0x2
#define RXF2SIDH_SID4_clear_mask                 0xFD

#define RXF2SID5                                 0x2
#define RXF2SID5_address                         0xF08
#define RXF2SID5_position                        0x2
#define RXF2SID5_size                            0x1
#define RXF2SID5_value_mask                      0x4
#define RXF2SID5_clear_mask                      0xFB

#define RXF2SIDH_SID5                            0x2
#define RXF2SIDH_SID5_address                    0xF08
#define RXF2SIDH_SID5_position                   0x2
#define RXF2SIDH_SID5_size                       0x1
#define RXF2SIDH_SID5_value_mask                 0x4
#define RXF2SIDH_SID5_clear_mask                 0xFB

#define RXF2SID6                                 0x3
#define RXF2SID6_address                         0xF08
#define RXF2SID6_position                        0x3
#define RXF2SID6_size                            0x1
#define RXF2SID6_value_mask                      0x8
#define RXF2SID6_clear_mask                      0xF7

#define RXF2SIDH_SID6                            0x3
#define RXF2SIDH_SID6_address                    0xF08
#define RXF2SIDH_SID6_position                   0x3
#define RXF2SIDH_SID6_size                       0x1
#define RXF2SIDH_SID6_value_mask                 0x8
#define RXF2SIDH_SID6_clear_mask                 0xF7

#define RXF2SID7                                 0x4
#define RXF2SID7_address                         0xF08
#define RXF2SID7_position                        0x4
#define RXF2SID7_size                            0x1
#define RXF2SID7_value_mask                      0x10
#define RXF2SID7_clear_mask                      0xEF

#define RXF2SIDH_SID7                            0x4
#define RXF2SIDH_SID7_address                    0xF08
#define RXF2SIDH_SID7_position                   0x4
#define RXF2SIDH_SID7_size                       0x1
#define RXF2SIDH_SID7_value_mask                 0x10
#define RXF2SIDH_SID7_clear_mask                 0xEF

#define RXF2SID8                                 0x5
#define RXF2SID8_address                         0xF08
#define RXF2SID8_position                        0x5
#define RXF2SID8_size                            0x1
#define RXF2SID8_value_mask                      0x20
#define RXF2SID8_clear_mask                      0xDF

#define RXF2SIDH_SID8                            0x5
#define RXF2SIDH_SID8_address                    0xF08
#define RXF2SIDH_SID8_position                   0x5
#define RXF2SIDH_SID8_size                       0x1
#define RXF2SIDH_SID8_value_mask                 0x20
#define RXF2SIDH_SID8_clear_mask                 0xDF

#define RXF2SID9                                 0x6
#define RXF2SID9_address                         0xF08
#define RXF2SID9_position                        0x6
#define RXF2SID9_size                            0x1
#define RXF2SID9_value_mask                      0x40
#define RXF2SID9_clear_mask                      0xBF

#define RXF2SIDH_SID9                            0x6
#define RXF2SIDH_SID9_address                    0xF08
#define RXF2SIDH_SID9_position                   0x6
#define RXF2SIDH_SID9_size                       0x1
#define RXF2SIDH_SID9_value_mask                 0x40
#define RXF2SIDH_SID9_clear_mask                 0xBF

#define RXF2SID10                                0x7
#define RXF2SID10_address                        0xF08
#define RXF2SID10_position                       0x7
#define RXF2SID10_size                           0x1
#define RXF2SID10_value_mask                     0x80
#define RXF2SID10_clear_mask                     0x7F

#define RXF2SIDH_SID10                           0x7
#define RXF2SIDH_SID10_address                   0xF08
#define RXF2SIDH_SID10_position                  0x7
#define RXF2SIDH_SID10_size                      0x1
#define RXF2SIDH_SID10_value_mask                0x80
#define RXF2SIDH_SID10_clear_mask                0x7F


/*--------------------------------------------------------------------------------------#
| RXF2SIDL                                                                        0xF09 |
#---------------------------------------------------------------------------------------#
| RXF2SID2 | RXF2SID1 | RXF2SID0 | - | RXF2EXIDEN | - | RXF2SIDL_EID17 | RXF2SIDL_EID16 |
#---------------------------------------------------------------------------------------#
| 7        | 6        | 5        | 4 | 3          | 2 | 1              | 0              |
#--------------------------------------------------------------------------------------*/

#define RXF2SIDL                                 0x0
#define RXF2SIDL_address                         0xF09
#define RXF2SIDL_position                        0x0
#define RXF2SIDL_size                            0x8
#define RXF2SIDL_value_mask                      0xFF
#define RXF2SIDL_clear_mask                      0x0

#define RXF2SIDL_EID16                           0x0
#define RXF2SIDL_EID16_address                   0xF09
#define RXF2SIDL_EID16_position                  0x0
#define RXF2SIDL_EID16_size                      0x1
#define RXF2SIDL_EID16_value_mask                0x1
#define RXF2SIDL_EID16_clear_mask                0xFE

#define RXF2EID16                                0x0
#define RXF2EID16_address                        0xF09
#define RXF2EID16_position                       0x0
#define RXF2EID16_size                           0x1
#define RXF2EID16_value_mask                     0x1
#define RXF2EID16_clear_mask                     0xFE

#define RXF2SIDL_EID17                           0x1
#define RXF2SIDL_EID17_address                   0xF09
#define RXF2SIDL_EID17_position                  0x1
#define RXF2SIDL_EID17_size                      0x1
#define RXF2SIDL_EID17_value_mask                0x2
#define RXF2SIDL_EID17_clear_mask                0xFD

#define RXF2EID17                                0x1
#define RXF2EID17_address                        0xF09
#define RXF2EID17_position                       0x1
#define RXF2EID17_size                           0x1
#define RXF2EID17_value_mask                     0x2
#define RXF2EID17_clear_mask                     0xFD

#define RXF2EXIDEN                               0x3
#define RXF2EXIDEN_address                       0xF09
#define RXF2EXIDEN_position                      0x3
#define RXF2EXIDEN_size                          0x1
#define RXF2EXIDEN_value_mask                    0x8
#define RXF2EXIDEN_clear_mask                    0xF7

#define RXF2SIDL_EXIDEN                          0x3
#define RXF2SIDL_EXIDEN_address                  0xF09
#define RXF2SIDL_EXIDEN_position                 0x3
#define RXF2SIDL_EXIDEN_size                     0x1
#define RXF2SIDL_EXIDEN_value_mask               0x8
#define RXF2SIDL_EXIDEN_clear_mask               0xF7

#define RXF2SID0                                 0x5
#define RXF2SID0_address                         0xF09
#define RXF2SID0_position                        0x5
#define RXF2SID0_size                            0x1
#define RXF2SID0_value_mask                      0x20
#define RXF2SID0_clear_mask                      0xDF

#define RXF2SIDL_SID0                            0x5
#define RXF2SIDL_SID0_address                    0xF09
#define RXF2SIDL_SID0_position                   0x5
#define RXF2SIDL_SID0_size                       0x1
#define RXF2SIDL_SID0_value_mask                 0x20
#define RXF2SIDL_SID0_clear_mask                 0xDF

#define RXF2SID1                                 0x6
#define RXF2SID1_address                         0xF09
#define RXF2SID1_position                        0x6
#define RXF2SID1_size                            0x1
#define RXF2SID1_value_mask                      0x40
#define RXF2SID1_clear_mask                      0xBF

#define RXF2SIDL_SID1                            0x6
#define RXF2SIDL_SID1_address                    0xF09
#define RXF2SIDL_SID1_position                   0x6
#define RXF2SIDL_SID1_size                       0x1
#define RXF2SIDL_SID1_value_mask                 0x40
#define RXF2SIDL_SID1_clear_mask                 0xBF

#define RXF2SID2                                 0x7
#define RXF2SID2_address                         0xF09
#define RXF2SID2_position                        0x7
#define RXF2SID2_size                            0x1
#define RXF2SID2_value_mask                      0x80
#define RXF2SID2_clear_mask                      0x7F

#define RXF2SIDL_SID2                            0x7
#define RXF2SIDL_SID2_address                    0xF09
#define RXF2SIDL_SID2_position                   0x7
#define RXF2SIDL_SID2_size                       0x1
#define RXF2SIDL_SID2_value_mask                 0x80
#define RXF2SIDL_SID2_clear_mask                 0x7F


/*--------------------------------------------------------------------------------------------#
| RXF2EIDH                                                                              0xF0A |
#---------------------------------------------------------------------------------------------#
| RXF2EID15 | RXF2EID14 | RXF2EID13 | RXF2EID12 | RXF2EID11 | RXF2EID10 | RXF2EID9 | RXF2EID8 |
#---------------------------------------------------------------------------------------------#
| 7         | 6         | 5         | 4         | 3         | 2         | 1        | 0        |
#--------------------------------------------------------------------------------------------*/

#define RXF2EIDH                                 0x0
#define RXF2EIDH_address                         0xF0A
#define RXF2EIDH_position                        0x0
#define RXF2EIDH_size                            0x8
#define RXF2EIDH_value_mask                      0xFF
#define RXF2EIDH_clear_mask                      0x0

#define RXF2EID8                                 0x0
#define RXF2EID8_address                         0xF0A
#define RXF2EID8_position                        0x0
#define RXF2EID8_size                            0x1
#define RXF2EID8_value_mask                      0x1
#define RXF2EID8_clear_mask                      0xFE

#define RXF2EIDH_EID8                            0x0
#define RXF2EIDH_EID8_address                    0xF0A
#define RXF2EIDH_EID8_position                   0x0
#define RXF2EIDH_EID8_size                       0x1
#define RXF2EIDH_EID8_value_mask                 0x1
#define RXF2EIDH_EID8_clear_mask                 0xFE

#define RXF2EID9                                 0x1
#define RXF2EID9_address                         0xF0A
#define RXF2EID9_position                        0x1
#define RXF2EID9_size                            0x1
#define RXF2EID9_value_mask                      0x2
#define RXF2EID9_clear_mask                      0xFD

#define RXF2EIDH_EID9                            0x1
#define RXF2EIDH_EID9_address                    0xF0A
#define RXF2EIDH_EID9_position                   0x1
#define RXF2EIDH_EID9_size                       0x1
#define RXF2EIDH_EID9_value_mask                 0x2
#define RXF2EIDH_EID9_clear_mask                 0xFD

#define RXF2EID10                                0x2
#define RXF2EID10_address                        0xF0A
#define RXF2EID10_position                       0x2
#define RXF2EID10_size                           0x1
#define RXF2EID10_value_mask                     0x4
#define RXF2EID10_clear_mask                     0xFB

#define RXF2EIDH_EID10                           0x2
#define RXF2EIDH_EID10_address                   0xF0A
#define RXF2EIDH_EID10_position                  0x2
#define RXF2EIDH_EID10_size                      0x1
#define RXF2EIDH_EID10_value_mask                0x4
#define RXF2EIDH_EID10_clear_mask                0xFB

#define RXF2EIDH_EID11                           0x3
#define RXF2EIDH_EID11_address                   0xF0A
#define RXF2EIDH_EID11_position                  0x3
#define RXF2EIDH_EID11_size                      0x1
#define RXF2EIDH_EID11_value_mask                0x8
#define RXF2EIDH_EID11_clear_mask                0xF7

#define RXF2EID11                                0x3
#define RXF2EID11_address                        0xF0A
#define RXF2EID11_position                       0x3
#define RXF2EID11_size                           0x1
#define RXF2EID11_value_mask                     0x8
#define RXF2EID11_clear_mask                     0xF7

#define RXF2EIDH_EID12                           0x4
#define RXF2EIDH_EID12_address                   0xF0A
#define RXF2EIDH_EID12_position                  0x4
#define RXF2EIDH_EID12_size                      0x1
#define RXF2EIDH_EID12_value_mask                0x10
#define RXF2EIDH_EID12_clear_mask                0xEF

#define RXF2EID12                                0x4
#define RXF2EID12_address                        0xF0A
#define RXF2EID12_position                       0x4
#define RXF2EID12_size                           0x1
#define RXF2EID12_value_mask                     0x10
#define RXF2EID12_clear_mask                     0xEF

#define RXF2EIDH_EID13                           0x5
#define RXF2EIDH_EID13_address                   0xF0A
#define RXF2EIDH_EID13_position                  0x5
#define RXF2EIDH_EID13_size                      0x1
#define RXF2EIDH_EID13_value_mask                0x20
#define RXF2EIDH_EID13_clear_mask                0xDF

#define RXF2EID13                                0x5
#define RXF2EID13_address                        0xF0A
#define RXF2EID13_position                       0x5
#define RXF2EID13_size                           0x1
#define RXF2EID13_value_mask                     0x20
#define RXF2EID13_clear_mask                     0xDF

#define RXF2EIDH_EID14                           0x6
#define RXF2EIDH_EID14_address                   0xF0A
#define RXF2EIDH_EID14_position                  0x6
#define RXF2EIDH_EID14_size                      0x1
#define RXF2EIDH_EID14_value_mask                0x40
#define RXF2EIDH_EID14_clear_mask                0xBF

#define RXF2EID14                                0x6
#define RXF2EID14_address                        0xF0A
#define RXF2EID14_position                       0x6
#define RXF2EID14_size                           0x1
#define RXF2EID14_value_mask                     0x40
#define RXF2EID14_clear_mask                     0xBF

#define RXF2EIDH_EID15                           0x7
#define RXF2EIDH_EID15_address                   0xF0A
#define RXF2EIDH_EID15_position                  0x7
#define RXF2EIDH_EID15_size                      0x1
#define RXF2EIDH_EID15_value_mask                0x80
#define RXF2EIDH_EID15_clear_mask                0x7F

#define RXF2EID15                                0x7
#define RXF2EID15_address                        0xF0A
#define RXF2EID15_position                       0x7
#define RXF2EID15_size                           0x1
#define RXF2EID15_value_mask                     0x80
#define RXF2EID15_clear_mask                     0x7F


/*--------------------------------------------------------------------------------------#
| RXF2EIDL                                                                        0xF0B |
#---------------------------------------------------------------------------------------#
| RXF2EID7 | RXF2EID6 | RXF2EID5 | RXF2EID4 | RXF2EID3 | RXF2EID2 | RXF2EID1 | RXF2EID0 |
#---------------------------------------------------------------------------------------#
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
#--------------------------------------------------------------------------------------*/

#define RXF2EIDL                                 0x0
#define RXF2EIDL_address                         0xF0B
#define RXF2EIDL_position                        0x0
#define RXF2EIDL_size                            0x8
#define RXF2EIDL_value_mask                      0xFF
#define RXF2EIDL_clear_mask                      0x0

#define RXF2EID0                                 0x0
#define RXF2EID0_address                         0xF0B
#define RXF2EID0_position                        0x0
#define RXF2EID0_size                            0x1
#define RXF2EID0_value_mask                      0x1
#define RXF2EID0_clear_mask                      0xFE

#define RXF2EIDL_EID0                            0x0
#define RXF2EIDL_EID0_address                    0xF0B
#define RXF2EIDL_EID0_position                   0x0
#define RXF2EIDL_EID0_size                       0x1
#define RXF2EIDL_EID0_value_mask                 0x1
#define RXF2EIDL_EID0_clear_mask                 0xFE

#define RXF2EID1                                 0x1
#define RXF2EID1_address                         0xF0B
#define RXF2EID1_position                        0x1
#define RXF2EID1_size                            0x1
#define RXF2EID1_value_mask                      0x2
#define RXF2EID1_clear_mask                      0xFD

#define RXF2EIDL_EID1                            0x1
#define RXF2EIDL_EID1_address                    0xF0B
#define RXF2EIDL_EID1_position                   0x1
#define RXF2EIDL_EID1_size                       0x1
#define RXF2EIDL_EID1_value_mask                 0x2
#define RXF2EIDL_EID1_clear_mask                 0xFD

#define RXF2EID2                                 0x2
#define RXF2EID2_address                         0xF0B
#define RXF2EID2_position                        0x2
#define RXF2EID2_size                            0x1
#define RXF2EID2_value_mask                      0x4
#define RXF2EID2_clear_mask                      0xFB

#define RXF2EIDL_EID2                            0x2
#define RXF2EIDL_EID2_address                    0xF0B
#define RXF2EIDL_EID2_position                   0x2
#define RXF2EIDL_EID2_size                       0x1
#define RXF2EIDL_EID2_value_mask                 0x4
#define RXF2EIDL_EID2_clear_mask                 0xFB

#define RXF2EID3                                 0x3
#define RXF2EID3_address                         0xF0B
#define RXF2EID3_position                        0x3
#define RXF2EID3_size                            0x1
#define RXF2EID3_value_mask                      0x8
#define RXF2EID3_clear_mask                      0xF7

#define RXF2EIDL_EID3                            0x3
#define RXF2EIDL_EID3_address                    0xF0B
#define RXF2EIDL_EID3_position                   0x3
#define RXF2EIDL_EID3_size                       0x1
#define RXF2EIDL_EID3_value_mask                 0x8
#define RXF2EIDL_EID3_clear_mask                 0xF7

#define RXF2EID4                                 0x4
#define RXF2EID4_address                         0xF0B
#define RXF2EID4_position                        0x4
#define RXF2EID4_size                            0x1
#define RXF2EID4_value_mask                      0x10
#define RXF2EID4_clear_mask                      0xEF

#define RXF2EIDL_EID4                            0x4
#define RXF2EIDL_EID4_address                    0xF0B
#define RXF2EIDL_EID4_position                   0x4
#define RXF2EIDL_EID4_size                       0x1
#define RXF2EIDL_EID4_value_mask                 0x10
#define RXF2EIDL_EID4_clear_mask                 0xEF

#define RXF2EID5                                 0x5
#define RXF2EID5_address                         0xF0B
#define RXF2EID5_position                        0x5
#define RXF2EID5_size                            0x1
#define RXF2EID5_value_mask                      0x20
#define RXF2EID5_clear_mask                      0xDF

#define RXF2EIDL_EID5                            0x5
#define RXF2EIDL_EID5_address                    0xF0B
#define RXF2EIDL_EID5_position                   0x5
#define RXF2EIDL_EID5_size                       0x1
#define RXF2EIDL_EID5_value_mask                 0x20
#define RXF2EIDL_EID5_clear_mask                 0xDF

#define RXF2EID6                                 0x6
#define RXF2EID6_address                         0xF0B
#define RXF2EID6_position                        0x6
#define RXF2EID6_size                            0x1
#define RXF2EID6_value_mask                      0x40
#define RXF2EID6_clear_mask                      0xBF

#define RXF2EIDL_EID6                            0x6
#define RXF2EIDL_EID6_address                    0xF0B
#define RXF2EIDL_EID6_position                   0x6
#define RXF2EIDL_EID6_size                       0x1
#define RXF2EIDL_EID6_value_mask                 0x40
#define RXF2EIDL_EID6_clear_mask                 0xBF

#define RXF2EID7                                 0x7
#define RXF2EID7_address                         0xF0B
#define RXF2EID7_position                        0x7
#define RXF2EID7_size                            0x1
#define RXF2EID7_value_mask                      0x80
#define RXF2EID7_clear_mask                      0x7F

#define RXF2EIDL_EID7                            0x7
#define RXF2EIDL_EID7_address                    0xF0B
#define RXF2EIDL_EID7_position                   0x7
#define RXF2EIDL_EID7_size                       0x1
#define RXF2EIDL_EID7_value_mask                 0x80
#define RXF2EIDL_EID7_clear_mask                 0x7F


/*---------------------------------------------------------------------------------------#
| RXF3SIDH                                                                         0xF0C |
#----------------------------------------------------------------------------------------#
| RXF3SID10 | RXF3SID9 | RXF3SID8 | RXF3SID7 | RXF3SID6 | RXF3SID5 | RXF3SID4 | RXF3SID3 |
#----------------------------------------------------------------------------------------#
| 7         | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
#---------------------------------------------------------------------------------------*/

#define RXF3SIDH                                 0x0
#define RXF3SIDH_address                         0xF0C
#define RXF3SIDH_position                        0x0
#define RXF3SIDH_size                            0x8
#define RXF3SIDH_value_mask                      0xFF
#define RXF3SIDH_clear_mask                      0x0

#define RXF3SID3                                 0x0
#define RXF3SID3_address                         0xF0C
#define RXF3SID3_position                        0x0
#define RXF3SID3_size                            0x1
#define RXF3SID3_value_mask                      0x1
#define RXF3SID3_clear_mask                      0xFE

#define RXF3SIDH_SID3                            0x0
#define RXF3SIDH_SID3_address                    0xF0C
#define RXF3SIDH_SID3_position                   0x0
#define RXF3SIDH_SID3_size                       0x1
#define RXF3SIDH_SID3_value_mask                 0x1
#define RXF3SIDH_SID3_clear_mask                 0xFE

#define RXF3SIDH_SID4                            0x1
#define RXF3SIDH_SID4_address                    0xF0C
#define RXF3SIDH_SID4_position                   0x1
#define RXF3SIDH_SID4_size                       0x1
#define RXF3SIDH_SID4_value_mask                 0x2
#define RXF3SIDH_SID4_clear_mask                 0xFD

#define RXF3SID4                                 0x1
#define RXF3SID4_address                         0xF0C
#define RXF3SID4_position                        0x1
#define RXF3SID4_size                            0x1
#define RXF3SID4_value_mask                      0x2
#define RXF3SID4_clear_mask                      0xFD

#define RXF3SIDH_SID5                            0x2
#define RXF3SIDH_SID5_address                    0xF0C
#define RXF3SIDH_SID5_position                   0x2
#define RXF3SIDH_SID5_size                       0x1
#define RXF3SIDH_SID5_value_mask                 0x4
#define RXF3SIDH_SID5_clear_mask                 0xFB

#define RXF3SID5                                 0x2
#define RXF3SID5_address                         0xF0C
#define RXF3SID5_position                        0x2
#define RXF3SID5_size                            0x1
#define RXF3SID5_value_mask                      0x4
#define RXF3SID5_clear_mask                      0xFB

#define RXF3SIDH_SID6                            0x3
#define RXF3SIDH_SID6_address                    0xF0C
#define RXF3SIDH_SID6_position                   0x3
#define RXF3SIDH_SID6_size                       0x1
#define RXF3SIDH_SID6_value_mask                 0x8
#define RXF3SIDH_SID6_clear_mask                 0xF7

#define RXF3SID6                                 0x3
#define RXF3SID6_address                         0xF0C
#define RXF3SID6_position                        0x3
#define RXF3SID6_size                            0x1
#define RXF3SID6_value_mask                      0x8
#define RXF3SID6_clear_mask                      0xF7

#define RXF3SIDH_SID7                            0x4
#define RXF3SIDH_SID7_address                    0xF0C
#define RXF3SIDH_SID7_position                   0x4
#define RXF3SIDH_SID7_size                       0x1
#define RXF3SIDH_SID7_value_mask                 0x10
#define RXF3SIDH_SID7_clear_mask                 0xEF

#define RXF3SID7                                 0x4
#define RXF3SID7_address                         0xF0C
#define RXF3SID7_position                        0x4
#define RXF3SID7_size                            0x1
#define RXF3SID7_value_mask                      0x10
#define RXF3SID7_clear_mask                      0xEF

#define RXF3SIDH_SID8                            0x5
#define RXF3SIDH_SID8_address                    0xF0C
#define RXF3SIDH_SID8_position                   0x5
#define RXF3SIDH_SID8_size                       0x1
#define RXF3SIDH_SID8_value_mask                 0x20
#define RXF3SIDH_SID8_clear_mask                 0xDF

#define RXF3SID8                                 0x5
#define RXF3SID8_address                         0xF0C
#define RXF3SID8_position                        0x5
#define RXF3SID8_size                            0x1
#define RXF3SID8_value_mask                      0x20
#define RXF3SID8_clear_mask                      0xDF

#define RXF3SIDH_SID9                            0x6
#define RXF3SIDH_SID9_address                    0xF0C
#define RXF3SIDH_SID9_position                   0x6
#define RXF3SIDH_SID9_size                       0x1
#define RXF3SIDH_SID9_value_mask                 0x40
#define RXF3SIDH_SID9_clear_mask                 0xBF

#define RXF3SID9                                 0x6
#define RXF3SID9_address                         0xF0C
#define RXF3SID9_position                        0x6
#define RXF3SID9_size                            0x1
#define RXF3SID9_value_mask                      0x40
#define RXF3SID9_clear_mask                      0xBF

#define RXF3SID10                                0x7
#define RXF3SID10_address                        0xF0C
#define RXF3SID10_position                       0x7
#define RXF3SID10_size                           0x1
#define RXF3SID10_value_mask                     0x80
#define RXF3SID10_clear_mask                     0x7F

#define RXF3SIDH_SID10                           0x7
#define RXF3SIDH_SID10_address                   0xF0C
#define RXF3SIDH_SID10_position                  0x7
#define RXF3SIDH_SID10_size                      0x1
#define RXF3SIDH_SID10_value_mask                0x80
#define RXF3SIDH_SID10_clear_mask                0x7F


/*-----------------------------------------------------------------------------------------------------#
| RXF3SIDL                                                                                       0xF0D |
#------------------------------------------------------------------------------------------------------#
| RXF3SIDL_SID2 | RXF3SIDL_SID1 | RXF3SIDL_SID0 | - | RXF3SIDL_EXIDEN | - | RXF3EID17 | RXF3SIDL_EID16 |
#------------------------------------------------------------------------------------------------------#
| 7             | 6             | 5             | 4 | 3               | 2 | 1         | 0              |
#-----------------------------------------------------------------------------------------------------*/

#define RXF3SIDL                                 0x0
#define RXF3SIDL_address                         0xF0D
#define RXF3SIDL_position                        0x0
#define RXF3SIDL_size                            0x8
#define RXF3SIDL_value_mask                      0xFF
#define RXF3SIDL_clear_mask                      0x0

#define RXF3SIDL_EID16                           0x0
#define RXF3SIDL_EID16_address                   0xF0D
#define RXF3SIDL_EID16_position                  0x0
#define RXF3SIDL_EID16_size                      0x1
#define RXF3SIDL_EID16_value_mask                0x1
#define RXF3SIDL_EID16_clear_mask                0xFE

#define RXF3EID16                                0x0
#define RXF3EID16_address                        0xF0D
#define RXF3EID16_position                       0x0
#define RXF3EID16_size                           0x1
#define RXF3EID16_value_mask                     0x1
#define RXF3EID16_clear_mask                     0xFE

#define RXF3EID17                                0x1
#define RXF3EID17_address                        0xF0D
#define RXF3EID17_position                       0x1
#define RXF3EID17_size                           0x1
#define RXF3EID17_value_mask                     0x2
#define RXF3EID17_clear_mask                     0xFD

#define RXF3SIDL_EID17                           0x1
#define RXF3SIDL_EID17_address                   0xF0D
#define RXF3SIDL_EID17_position                  0x1
#define RXF3SIDL_EID17_size                      0x1
#define RXF3SIDL_EID17_value_mask                0x2
#define RXF3SIDL_EID17_clear_mask                0xFD

#define RXF3SIDL_EXIDEN                          0x3
#define RXF3SIDL_EXIDEN_address                  0xF0D
#define RXF3SIDL_EXIDEN_position                 0x3
#define RXF3SIDL_EXIDEN_size                     0x1
#define RXF3SIDL_EXIDEN_value_mask               0x8
#define RXF3SIDL_EXIDEN_clear_mask               0xF7

#define RXF3EXIDEN                               0x3
#define RXF3EXIDEN_address                       0xF0D
#define RXF3EXIDEN_position                      0x3
#define RXF3EXIDEN_size                          0x1
#define RXF3EXIDEN_value_mask                    0x8
#define RXF3EXIDEN_clear_mask                    0xF7

#define RXF3SIDL_SID0                            0x5
#define RXF3SIDL_SID0_address                    0xF0D
#define RXF3SIDL_SID0_position                   0x5
#define RXF3SIDL_SID0_size                       0x1
#define RXF3SIDL_SID0_value_mask                 0x20
#define RXF3SIDL_SID0_clear_mask                 0xDF

#define RXF3SID0                                 0x5
#define RXF3SID0_address                         0xF0D
#define RXF3SID0_position                        0x5
#define RXF3SID0_size                            0x1
#define RXF3SID0_value_mask                      0x20
#define RXF3SID0_clear_mask                      0xDF

#define RXF3SIDL_SID1                            0x6
#define RXF3SIDL_SID1_address                    0xF0D
#define RXF3SIDL_SID1_position                   0x6
#define RXF3SIDL_SID1_size                       0x1
#define RXF3SIDL_SID1_value_mask                 0x40
#define RXF3SIDL_SID1_clear_mask                 0xBF

#define RXF3SID1                                 0x6
#define RXF3SID1_address                         0xF0D
#define RXF3SID1_position                        0x6
#define RXF3SID1_size                            0x1
#define RXF3SID1_value_mask                      0x40
#define RXF3SID1_clear_mask                      0xBF

#define RXF3SIDL_SID2                            0x7
#define RXF3SIDL_SID2_address                    0xF0D
#define RXF3SIDL_SID2_position                   0x7
#define RXF3SIDL_SID2_size                       0x1
#define RXF3SIDL_SID2_value_mask                 0x80
#define RXF3SIDL_SID2_clear_mask                 0x7F

#define RXF3SID2                                 0x7
#define RXF3SID2_address                         0xF0D
#define RXF3SID2_position                        0x7
#define RXF3SID2_size                            0x1
#define RXF3SID2_value_mask                      0x80
#define RXF3SID2_clear_mask                      0x7F


/*--------------------------------------------------------------------------------------------------------------------------#
| RXF3EIDH                                                                                                            0xF0E |
#---------------------------------------------------------------------------------------------------------------------------#
| RXF3EIDH_EID15 | RXF3EIDH_EID14 | RXF3EIDH_EID13 | RXF3EIDH_EID12 | RXF3EIDH_EID11 | RXF3EIDH_EID10 | RXF3EID9 | RXF3EID8 |
#---------------------------------------------------------------------------------------------------------------------------#
| 7              | 6              | 5              | 4              | 3              | 2              | 1        | 0        |
#--------------------------------------------------------------------------------------------------------------------------*/

#define RXF3EIDH                                 0x0
#define RXF3EIDH_address                         0xF0E
#define RXF3EIDH_position                        0x0
#define RXF3EIDH_size                            0x8
#define RXF3EIDH_value_mask                      0xFF
#define RXF3EIDH_clear_mask                      0x0

#define RXF3EIDH_EID8                            0x0
#define RXF3EIDH_EID8_address                    0xF0E
#define RXF3EIDH_EID8_position                   0x0
#define RXF3EIDH_EID8_size                       0x1
#define RXF3EIDH_EID8_value_mask                 0x1
#define RXF3EIDH_EID8_clear_mask                 0xFE

#define RXF3EID8                                 0x0
#define RXF3EID8_address                         0xF0E
#define RXF3EID8_position                        0x0
#define RXF3EID8_size                            0x1
#define RXF3EID8_value_mask                      0x1
#define RXF3EID8_clear_mask                      0xFE

#define RXF3EIDH_EID9                            0x1
#define RXF3EIDH_EID9_address                    0xF0E
#define RXF3EIDH_EID9_position                   0x1
#define RXF3EIDH_EID9_size                       0x1
#define RXF3EIDH_EID9_value_mask                 0x2
#define RXF3EIDH_EID9_clear_mask                 0xFD

#define RXF3EID9                                 0x1
#define RXF3EID9_address                         0xF0E
#define RXF3EID9_position                        0x1
#define RXF3EID9_size                            0x1
#define RXF3EID9_value_mask                      0x2
#define RXF3EID9_clear_mask                      0xFD

#define RXF3EIDH_EID10                           0x2
#define RXF3EIDH_EID10_address                   0xF0E
#define RXF3EIDH_EID10_position                  0x2
#define RXF3EIDH_EID10_size                      0x1
#define RXF3EIDH_EID10_value_mask                0x4
#define RXF3EIDH_EID10_clear_mask                0xFB

#define RXF3EID10                                0x2
#define RXF3EID10_address                        0xF0E
#define RXF3EID10_position                       0x2
#define RXF3EID10_size                           0x1
#define RXF3EID10_value_mask                     0x4
#define RXF3EID10_clear_mask                     0xFB

#define RXF3EIDH_EID11                           0x3
#define RXF3EIDH_EID11_address                   0xF0E
#define RXF3EIDH_EID11_position                  0x3
#define RXF3EIDH_EID11_size                      0x1
#define RXF3EIDH_EID11_value_mask                0x8
#define RXF3EIDH_EID11_clear_mask                0xF7

#define RXF3EID11                                0x3
#define RXF3EID11_address                        0xF0E
#define RXF3EID11_position                       0x3
#define RXF3EID11_size                           0x1
#define RXF3EID11_value_mask                     0x8
#define RXF3EID11_clear_mask                     0xF7

#define RXF3EIDH_EID12                           0x4
#define RXF3EIDH_EID12_address                   0xF0E
#define RXF3EIDH_EID12_position                  0x4
#define RXF3EIDH_EID12_size                      0x1
#define RXF3EIDH_EID12_value_mask                0x10
#define RXF3EIDH_EID12_clear_mask                0xEF

#define RXF3EID12                                0x4
#define RXF3EID12_address                        0xF0E
#define RXF3EID12_position                       0x4
#define RXF3EID12_size                           0x1
#define RXF3EID12_value_mask                     0x10
#define RXF3EID12_clear_mask                     0xEF

#define RXF3EIDH_EID13                           0x5
#define RXF3EIDH_EID13_address                   0xF0E
#define RXF3EIDH_EID13_position                  0x5
#define RXF3EIDH_EID13_size                      0x1
#define RXF3EIDH_EID13_value_mask                0x20
#define RXF3EIDH_EID13_clear_mask                0xDF

#define RXF3EID13                                0x5
#define RXF3EID13_address                        0xF0E
#define RXF3EID13_position                       0x5
#define RXF3EID13_size                           0x1
#define RXF3EID13_value_mask                     0x20
#define RXF3EID13_clear_mask                     0xDF

#define RXF3EIDH_EID14                           0x6
#define RXF3EIDH_EID14_address                   0xF0E
#define RXF3EIDH_EID14_position                  0x6
#define RXF3EIDH_EID14_size                      0x1
#define RXF3EIDH_EID14_value_mask                0x40
#define RXF3EIDH_EID14_clear_mask                0xBF

#define RXF3EID14                                0x6
#define RXF3EID14_address                        0xF0E
#define RXF3EID14_position                       0x6
#define RXF3EID14_size                           0x1
#define RXF3EID14_value_mask                     0x40
#define RXF3EID14_clear_mask                     0xBF

#define RXF3EIDH_EID15                           0x7
#define RXF3EIDH_EID15_address                   0xF0E
#define RXF3EIDH_EID15_position                  0x7
#define RXF3EIDH_EID15_size                      0x1
#define RXF3EIDH_EID15_value_mask                0x80
#define RXF3EIDH_EID15_clear_mask                0x7F

#define RXF3EID15                                0x7
#define RXF3EID15_address                        0xF0E
#define RXF3EID15_position                       0x7
#define RXF3EID15_size                           0x1
#define RXF3EID15_value_mask                     0x80
#define RXF3EID15_clear_mask                     0x7F


/*--------------------------------------------------------------------------------------#
| RXF3EIDL                                                                        0xF0F |
#---------------------------------------------------------------------------------------#
| RXF3EID7 | RXF3EID6 | RXF3EID5 | RXF3EID4 | RXF3EID3 | RXF3EID2 | RXF3EID1 | RXF3EID0 |
#---------------------------------------------------------------------------------------#
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
#--------------------------------------------------------------------------------------*/

#define RXF3EIDL                                 0x0
#define RXF3EIDL_address                         0xF0F
#define RXF3EIDL_position                        0x0
#define RXF3EIDL_size                            0x8
#define RXF3EIDL_value_mask                      0xFF
#define RXF3EIDL_clear_mask                      0x0

#define RXF3EID0                                 0x0
#define RXF3EID0_address                         0xF0F
#define RXF3EID0_position                        0x0
#define RXF3EID0_size                            0x1
#define RXF3EID0_value_mask                      0x1
#define RXF3EID0_clear_mask                      0xFE

#define RXF3EIDL_EID0                            0x0
#define RXF3EIDL_EID0_address                    0xF0F
#define RXF3EIDL_EID0_position                   0x0
#define RXF3EIDL_EID0_size                       0x1
#define RXF3EIDL_EID0_value_mask                 0x1
#define RXF3EIDL_EID0_clear_mask                 0xFE

#define RXF3EID1                                 0x1
#define RXF3EID1_address                         0xF0F
#define RXF3EID1_position                        0x1
#define RXF3EID1_size                            0x1
#define RXF3EID1_value_mask                      0x2
#define RXF3EID1_clear_mask                      0xFD

#define RXF3EIDL_EID1                            0x1
#define RXF3EIDL_EID1_address                    0xF0F
#define RXF3EIDL_EID1_position                   0x1
#define RXF3EIDL_EID1_size                       0x1
#define RXF3EIDL_EID1_value_mask                 0x2
#define RXF3EIDL_EID1_clear_mask                 0xFD

#define RXF3EID2                                 0x2
#define RXF3EID2_address                         0xF0F
#define RXF3EID2_position                        0x2
#define RXF3EID2_size                            0x1
#define RXF3EID2_value_mask                      0x4
#define RXF3EID2_clear_mask                      0xFB

#define RXF3EIDL_EID2                            0x2
#define RXF3EIDL_EID2_address                    0xF0F
#define RXF3EIDL_EID2_position                   0x2
#define RXF3EIDL_EID2_size                       0x1
#define RXF3EIDL_EID2_value_mask                 0x4
#define RXF3EIDL_EID2_clear_mask                 0xFB

#define RXF3EID3                                 0x3
#define RXF3EID3_address                         0xF0F
#define RXF3EID3_position                        0x3
#define RXF3EID3_size                            0x1
#define RXF3EID3_value_mask                      0x8
#define RXF3EID3_clear_mask                      0xF7

#define RXF3EIDL_EID3                            0x3
#define RXF3EIDL_EID3_address                    0xF0F
#define RXF3EIDL_EID3_position                   0x3
#define RXF3EIDL_EID3_size                       0x1
#define RXF3EIDL_EID3_value_mask                 0x8
#define RXF3EIDL_EID3_clear_mask                 0xF7

#define RXF3EID4                                 0x4
#define RXF3EID4_address                         0xF0F
#define RXF3EID4_position                        0x4
#define RXF3EID4_size                            0x1
#define RXF3EID4_value_mask                      0x10
#define RXF3EID4_clear_mask                      0xEF

#define RXF3EIDL_EID4                            0x4
#define RXF3EIDL_EID4_address                    0xF0F
#define RXF3EIDL_EID4_position                   0x4
#define RXF3EIDL_EID4_size                       0x1
#define RXF3EIDL_EID4_value_mask                 0x10
#define RXF3EIDL_EID4_clear_mask                 0xEF

#define RXF3EID5                                 0x5
#define RXF3EID5_address                         0xF0F
#define RXF3EID5_position                        0x5
#define RXF3EID5_size                            0x1
#define RXF3EID5_value_mask                      0x20
#define RXF3EID5_clear_mask                      0xDF

#define RXF3EIDL_EID5                            0x5
#define RXF3EIDL_EID5_address                    0xF0F
#define RXF3EIDL_EID5_position                   0x5
#define RXF3EIDL_EID5_size                       0x1
#define RXF3EIDL_EID5_value_mask                 0x20
#define RXF3EIDL_EID5_clear_mask                 0xDF

#define RXF3EID6                                 0x6
#define RXF3EID6_address                         0xF0F
#define RXF3EID6_position                        0x6
#define RXF3EID6_size                            0x1
#define RXF3EID6_value_mask                      0x40
#define RXF3EID6_clear_mask                      0xBF

#define RXF3EIDL_EID6                            0x6
#define RXF3EIDL_EID6_address                    0xF0F
#define RXF3EIDL_EID6_position                   0x6
#define RXF3EIDL_EID6_size                       0x1
#define RXF3EIDL_EID6_value_mask                 0x40
#define RXF3EIDL_EID6_clear_mask                 0xBF

#define RXF3EID7                                 0x7
#define RXF3EID7_address                         0xF0F
#define RXF3EID7_position                        0x7
#define RXF3EID7_size                            0x1
#define RXF3EID7_value_mask                      0x80
#define RXF3EID7_clear_mask                      0x7F

#define RXF3EIDL_EID7                            0x7
#define RXF3EIDL_EID7_address                    0xF0F
#define RXF3EIDL_EID7_position                   0x7
#define RXF3EIDL_EID7_size                       0x1
#define RXF3EIDL_EID7_value_mask                 0x80
#define RXF3EIDL_EID7_clear_mask                 0x7F


/*-----------------------------------------------------------------------------------------------------------#
| RXF4SIDH                                                                                             0xF10 |
#------------------------------------------------------------------------------------------------------------#
| RXF4SIDH_SID10 | RXF4SIDH_SID9 | RXF4SIDH_SID8 | RXF4SID7 | RXF4SID6 | RXF4SID5 | RXF4SID4 | RXF4SIDH_SID3 |
#------------------------------------------------------------------------------------------------------------#
| 7              | 6             | 5             | 4        | 3        | 2        | 1        | 0             |
#-----------------------------------------------------------------------------------------------------------*/

#define RXF4SIDH                                 0x0
#define RXF4SIDH_address                         0xF10
#define RXF4SIDH_position                        0x0
#define RXF4SIDH_size                            0x8
#define RXF4SIDH_value_mask                      0xFF
#define RXF4SIDH_clear_mask                      0x0

#define RXF4SID3                                 0x0
#define RXF4SID3_address                         0xF10
#define RXF4SID3_position                        0x0
#define RXF4SID3_size                            0x1
#define RXF4SID3_value_mask                      0x1
#define RXF4SID3_clear_mask                      0xFE

#define RXF4SIDH_SID3                            0x0
#define RXF4SIDH_SID3_address                    0xF10
#define RXF4SIDH_SID3_position                   0x0
#define RXF4SIDH_SID3_size                       0x1
#define RXF4SIDH_SID3_value_mask                 0x1
#define RXF4SIDH_SID3_clear_mask                 0xFE

#define RXF4SID4                                 0x1
#define RXF4SID4_address                         0xF10
#define RXF4SID4_position                        0x1
#define RXF4SID4_size                            0x1
#define RXF4SID4_value_mask                      0x2
#define RXF4SID4_clear_mask                      0xFD

#define RXF4SIDH_SID4                            0x1
#define RXF4SIDH_SID4_address                    0xF10
#define RXF4SIDH_SID4_position                   0x1
#define RXF4SIDH_SID4_size                       0x1
#define RXF4SIDH_SID4_value_mask                 0x2
#define RXF4SIDH_SID4_clear_mask                 0xFD

#define RXF4SID5                                 0x2
#define RXF4SID5_address                         0xF10
#define RXF4SID5_position                        0x2
#define RXF4SID5_size                            0x1
#define RXF4SID5_value_mask                      0x4
#define RXF4SID5_clear_mask                      0xFB

#define RXF4SIDH_SID5                            0x2
#define RXF4SIDH_SID5_address                    0xF10
#define RXF4SIDH_SID5_position                   0x2
#define RXF4SIDH_SID5_size                       0x1
#define RXF4SIDH_SID5_value_mask                 0x4
#define RXF4SIDH_SID5_clear_mask                 0xFB

#define RXF4SID6                                 0x3
#define RXF4SID6_address                         0xF10
#define RXF4SID6_position                        0x3
#define RXF4SID6_size                            0x1
#define RXF4SID6_value_mask                      0x8
#define RXF4SID6_clear_mask                      0xF7

#define RXF4SIDH_SID6                            0x3
#define RXF4SIDH_SID6_address                    0xF10
#define RXF4SIDH_SID6_position                   0x3
#define RXF4SIDH_SID6_size                       0x1
#define RXF4SIDH_SID6_value_mask                 0x8
#define RXF4SIDH_SID6_clear_mask                 0xF7

#define RXF4SID7                                 0x4
#define RXF4SID7_address                         0xF10
#define RXF4SID7_position                        0x4
#define RXF4SID7_size                            0x1
#define RXF4SID7_value_mask                      0x10
#define RXF4SID7_clear_mask                      0xEF

#define RXF4SIDH_SID7                            0x4
#define RXF4SIDH_SID7_address                    0xF10
#define RXF4SIDH_SID7_position                   0x4
#define RXF4SIDH_SID7_size                       0x1
#define RXF4SIDH_SID7_value_mask                 0x10
#define RXF4SIDH_SID7_clear_mask                 0xEF

#define RXF4SID8                                 0x5
#define RXF4SID8_address                         0xF10
#define RXF4SID8_position                        0x5
#define RXF4SID8_size                            0x1
#define RXF4SID8_value_mask                      0x20
#define RXF4SID8_clear_mask                      0xDF

#define RXF4SIDH_SID8                            0x5
#define RXF4SIDH_SID8_address                    0xF10
#define RXF4SIDH_SID8_position                   0x5
#define RXF4SIDH_SID8_size                       0x1
#define RXF4SIDH_SID8_value_mask                 0x20
#define RXF4SIDH_SID8_clear_mask                 0xDF

#define RXF4SID9                                 0x6
#define RXF4SID9_address                         0xF10
#define RXF4SID9_position                        0x6
#define RXF4SID9_size                            0x1
#define RXF4SID9_value_mask                      0x40
#define RXF4SID9_clear_mask                      0xBF

#define RXF4SIDH_SID9                            0x6
#define RXF4SIDH_SID9_address                    0xF10
#define RXF4SIDH_SID9_position                   0x6
#define RXF4SIDH_SID9_size                       0x1
#define RXF4SIDH_SID9_value_mask                 0x40
#define RXF4SIDH_SID9_clear_mask                 0xBF

#define RXF4SIDH_SID10                           0x7
#define RXF4SIDH_SID10_address                   0xF10
#define RXF4SIDH_SID10_position                  0x7
#define RXF4SIDH_SID10_size                      0x1
#define RXF4SIDH_SID10_value_mask                0x80
#define RXF4SIDH_SID10_clear_mask                0x7F

#define RXF4SID10                                0x7
#define RXF4SID10_address                        0xF10
#define RXF4SID10_position                       0x7
#define RXF4SID10_size                           0x1
#define RXF4SID10_value_mask                     0x80
#define RXF4SID10_clear_mask                     0x7F


/*----------------------------------------------------------------------------#
| RXF4SIDL                                                              0xF11 |
#-----------------------------------------------------------------------------#
| RXF4SID2 | RXF4SID1 | RXF4SID0 | - | RXF4EXIDEN | - | RXF4EID17 | RXF4EID16 |
#-----------------------------------------------------------------------------#
| 7        | 6        | 5        | 4 | 3          | 2 | 1         | 0         |
#----------------------------------------------------------------------------*/

#define RXF4SIDL                                 0x0
#define RXF4SIDL_address                         0xF11
#define RXF4SIDL_position                        0x0
#define RXF4SIDL_size                            0x8
#define RXF4SIDL_value_mask                      0xFF
#define RXF4SIDL_clear_mask                      0x0

#define RXF4EID16                                0x0
#define RXF4EID16_address                        0xF11
#define RXF4EID16_position                       0x0
#define RXF4EID16_size                           0x1
#define RXF4EID16_value_mask                     0x1
#define RXF4EID16_clear_mask                     0xFE

#define RXF4SIDL_EID16                           0x0
#define RXF4SIDL_EID16_address                   0xF11
#define RXF4SIDL_EID16_position                  0x0
#define RXF4SIDL_EID16_size                      0x1
#define RXF4SIDL_EID16_value_mask                0x1
#define RXF4SIDL_EID16_clear_mask                0xFE

#define RXF4EID17                                0x1
#define RXF4EID17_address                        0xF11
#define RXF4EID17_position                       0x1
#define RXF4EID17_size                           0x1
#define RXF4EID17_value_mask                     0x2
#define RXF4EID17_clear_mask                     0xFD

#define RXF4SIDL_EID17                           0x1
#define RXF4SIDL_EID17_address                   0xF11
#define RXF4SIDL_EID17_position                  0x1
#define RXF4SIDL_EID17_size                      0x1
#define RXF4SIDL_EID17_value_mask                0x2
#define RXF4SIDL_EID17_clear_mask                0xFD

#define RXF4SIDL_EXIDEN                          0x3
#define RXF4SIDL_EXIDEN_address                  0xF11
#define RXF4SIDL_EXIDEN_position                 0x3
#define RXF4SIDL_EXIDEN_size                     0x1
#define RXF4SIDL_EXIDEN_value_mask               0x8
#define RXF4SIDL_EXIDEN_clear_mask               0xF7

#define RXF4EXIDEN                               0x3
#define RXF4EXIDEN_address                       0xF11
#define RXF4EXIDEN_position                      0x3
#define RXF4EXIDEN_size                          0x1
#define RXF4EXIDEN_value_mask                    0x8
#define RXF4EXIDEN_clear_mask                    0xF7

#define RXF4SID0                                 0x5
#define RXF4SID0_address                         0xF11
#define RXF4SID0_position                        0x5
#define RXF4SID0_size                            0x1
#define RXF4SID0_value_mask                      0x20
#define RXF4SID0_clear_mask                      0xDF

#define RXF4SIDL_SID0                            0x5
#define RXF4SIDL_SID0_address                    0xF11
#define RXF4SIDL_SID0_position                   0x5
#define RXF4SIDL_SID0_size                       0x1
#define RXF4SIDL_SID0_value_mask                 0x20
#define RXF4SIDL_SID0_clear_mask                 0xDF

#define RXF4SIDL_SID1                            0x6
#define RXF4SIDL_SID1_address                    0xF11
#define RXF4SIDL_SID1_position                   0x6
#define RXF4SIDL_SID1_size                       0x1
#define RXF4SIDL_SID1_value_mask                 0x40
#define RXF4SIDL_SID1_clear_mask                 0xBF

#define RXF4SID1                                 0x6
#define RXF4SID1_address                         0xF11
#define RXF4SID1_position                        0x6
#define RXF4SID1_size                            0x1
#define RXF4SID1_value_mask                      0x40
#define RXF4SID1_clear_mask                      0xBF

#define RXF4SID2                                 0x7
#define RXF4SID2_address                         0xF11
#define RXF4SID2_position                        0x7
#define RXF4SID2_size                            0x1
#define RXF4SID2_value_mask                      0x80
#define RXF4SID2_clear_mask                      0x7F

#define RXF4SIDL_SID2                            0x7
#define RXF4SIDL_SID2_address                    0xF11
#define RXF4SIDL_SID2_position                   0x7
#define RXF4SIDL_SID2_size                       0x1
#define RXF4SIDL_SID2_value_mask                 0x80
#define RXF4SIDL_SID2_clear_mask                 0x7F


/*--------------------------------------------------------------------------------------------------------------------------#
| RXF4EIDH                                                                                                            0xF12 |
#---------------------------------------------------------------------------------------------------------------------------#
| RXF4EIDH_EID15 | RXF4EIDH_EID14 | RXF4EIDH_EID13 | RXF4EIDH_EID12 | RXF4EIDH_EID11 | RXF4EIDH_EID10 | RXF4EID9 | RXF4EID8 |
#---------------------------------------------------------------------------------------------------------------------------#
| 7              | 6              | 5              | 4              | 3              | 2              | 1        | 0        |
#--------------------------------------------------------------------------------------------------------------------------*/

#define RXF4EIDH                                 0x0
#define RXF4EIDH_address                         0xF12
#define RXF4EIDH_position                        0x0
#define RXF4EIDH_size                            0x8
#define RXF4EIDH_value_mask                      0xFF
#define RXF4EIDH_clear_mask                      0x0

#define RXF4EID8                                 0x0
#define RXF4EID8_address                         0xF12
#define RXF4EID8_position                        0x0
#define RXF4EID8_size                            0x1
#define RXF4EID8_value_mask                      0x1
#define RXF4EID8_clear_mask                      0xFE

#define RXF4EIDH_EID8                            0x0
#define RXF4EIDH_EID8_address                    0xF12
#define RXF4EIDH_EID8_position                   0x0
#define RXF4EIDH_EID8_size                       0x1
#define RXF4EIDH_EID8_value_mask                 0x1
#define RXF4EIDH_EID8_clear_mask                 0xFE

#define RXF4EID9                                 0x1
#define RXF4EID9_address                         0xF12
#define RXF4EID9_position                        0x1
#define RXF4EID9_size                            0x1
#define RXF4EID9_value_mask                      0x2
#define RXF4EID9_clear_mask                      0xFD

#define RXF4EIDH_EID9                            0x1
#define RXF4EIDH_EID9_address                    0xF12
#define RXF4EIDH_EID9_position                   0x1
#define RXF4EIDH_EID9_size                       0x1
#define RXF4EIDH_EID9_value_mask                 0x2
#define RXF4EIDH_EID9_clear_mask                 0xFD

#define RXF4EID10                                0x2
#define RXF4EID10_address                        0xF12
#define RXF4EID10_position                       0x2
#define RXF4EID10_size                           0x1
#define RXF4EID10_value_mask                     0x4
#define RXF4EID10_clear_mask                     0xFB

#define RXF4EIDH_EID10                           0x2
#define RXF4EIDH_EID10_address                   0xF12
#define RXF4EIDH_EID10_position                  0x2
#define RXF4EIDH_EID10_size                      0x1
#define RXF4EIDH_EID10_value_mask                0x4
#define RXF4EIDH_EID10_clear_mask                0xFB

#define RXF4EID11                                0x3
#define RXF4EID11_address                        0xF12
#define RXF4EID11_position                       0x3
#define RXF4EID11_size                           0x1
#define RXF4EID11_value_mask                     0x8
#define RXF4EID11_clear_mask                     0xF7

#define RXF4EIDH_EID11                           0x3
#define RXF4EIDH_EID11_address                   0xF12
#define RXF4EIDH_EID11_position                  0x3
#define RXF4EIDH_EID11_size                      0x1
#define RXF4EIDH_EID11_value_mask                0x8
#define RXF4EIDH_EID11_clear_mask                0xF7

#define RXF4EID12                                0x4
#define RXF4EID12_address                        0xF12
#define RXF4EID12_position                       0x4
#define RXF4EID12_size                           0x1
#define RXF4EID12_value_mask                     0x10
#define RXF4EID12_clear_mask                     0xEF

#define RXF4EIDH_EID12                           0x4
#define RXF4EIDH_EID12_address                   0xF12
#define RXF4EIDH_EID12_position                  0x4
#define RXF4EIDH_EID12_size                      0x1
#define RXF4EIDH_EID12_value_mask                0x10
#define RXF4EIDH_EID12_clear_mask                0xEF

#define RXF4EID13                                0x5
#define RXF4EID13_address                        0xF12
#define RXF4EID13_position                       0x5
#define RXF4EID13_size                           0x1
#define RXF4EID13_value_mask                     0x20
#define RXF4EID13_clear_mask                     0xDF

#define RXF4EIDH_EID13                           0x5
#define RXF4EIDH_EID13_address                   0xF12
#define RXF4EIDH_EID13_position                  0x5
#define RXF4EIDH_EID13_size                      0x1
#define RXF4EIDH_EID13_value_mask                0x20
#define RXF4EIDH_EID13_clear_mask                0xDF

#define RXF4EID14                                0x6
#define RXF4EID14_address                        0xF12
#define RXF4EID14_position                       0x6
#define RXF4EID14_size                           0x1
#define RXF4EID14_value_mask                     0x40
#define RXF4EID14_clear_mask                     0xBF

#define RXF4EIDH_EID14                           0x6
#define RXF4EIDH_EID14_address                   0xF12
#define RXF4EIDH_EID14_position                  0x6
#define RXF4EIDH_EID14_size                      0x1
#define RXF4EIDH_EID14_value_mask                0x40
#define RXF4EIDH_EID14_clear_mask                0xBF

#define RXF4EID15                                0x7
#define RXF4EID15_address                        0xF12
#define RXF4EID15_position                       0x7
#define RXF4EID15_size                           0x1
#define RXF4EID15_value_mask                     0x80
#define RXF4EID15_clear_mask                     0x7F

#define RXF4EIDH_EID15                           0x7
#define RXF4EIDH_EID15_address                   0xF12
#define RXF4EIDH_EID15_position                  0x7
#define RXF4EIDH_EID15_size                      0x1
#define RXF4EIDH_EID15_value_mask                0x80
#define RXF4EIDH_EID15_clear_mask                0x7F


/*--------------------------------------------------------------------------------------#
| RXF4EIDL                                                                        0xF13 |
#---------------------------------------------------------------------------------------#
| RXF4EID7 | RXF4EID6 | RXF4EID5 | RXF4EID4 | RXF4EID3 | RXF4EID2 | RXF4EID1 | RXF4EID0 |
#---------------------------------------------------------------------------------------#
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
#--------------------------------------------------------------------------------------*/

#define RXF4EIDL                                 0x0
#define RXF4EIDL_address                         0xF13
#define RXF4EIDL_position                        0x0
#define RXF4EIDL_size                            0x8
#define RXF4EIDL_value_mask                      0xFF
#define RXF4EIDL_clear_mask                      0x0

#define RXF4EID0                                 0x0
#define RXF4EID0_address                         0xF13
#define RXF4EID0_position                        0x0
#define RXF4EID0_size                            0x1
#define RXF4EID0_value_mask                      0x1
#define RXF4EID0_clear_mask                      0xFE

#define RXF4EIDL_EID0                            0x0
#define RXF4EIDL_EID0_address                    0xF13
#define RXF4EIDL_EID0_position                   0x0
#define RXF4EIDL_EID0_size                       0x1
#define RXF4EIDL_EID0_value_mask                 0x1
#define RXF4EIDL_EID0_clear_mask                 0xFE

#define RXF4EID1                                 0x1
#define RXF4EID1_address                         0xF13
#define RXF4EID1_position                        0x1
#define RXF4EID1_size                            0x1
#define RXF4EID1_value_mask                      0x2
#define RXF4EID1_clear_mask                      0xFD

#define RXF4EIDL_EID1                            0x1
#define RXF4EIDL_EID1_address                    0xF13
#define RXF4EIDL_EID1_position                   0x1
#define RXF4EIDL_EID1_size                       0x1
#define RXF4EIDL_EID1_value_mask                 0x2
#define RXF4EIDL_EID1_clear_mask                 0xFD

#define RXF4EID2                                 0x2
#define RXF4EID2_address                         0xF13
#define RXF4EID2_position                        0x2
#define RXF4EID2_size                            0x1
#define RXF4EID2_value_mask                      0x4
#define RXF4EID2_clear_mask                      0xFB

#define RXF4EIDL_EID2                            0x2
#define RXF4EIDL_EID2_address                    0xF13
#define RXF4EIDL_EID2_position                   0x2
#define RXF4EIDL_EID2_size                       0x1
#define RXF4EIDL_EID2_value_mask                 0x4
#define RXF4EIDL_EID2_clear_mask                 0xFB

#define RXF4EID3                                 0x3
#define RXF4EID3_address                         0xF13
#define RXF4EID3_position                        0x3
#define RXF4EID3_size                            0x1
#define RXF4EID3_value_mask                      0x8
#define RXF4EID3_clear_mask                      0xF7

#define RXF4EIDL_EID3                            0x3
#define RXF4EIDL_EID3_address                    0xF13
#define RXF4EIDL_EID3_position                   0x3
#define RXF4EIDL_EID3_size                       0x1
#define RXF4EIDL_EID3_value_mask                 0x8
#define RXF4EIDL_EID3_clear_mask                 0xF7

#define RXF4EID4                                 0x4
#define RXF4EID4_address                         0xF13
#define RXF4EID4_position                        0x4
#define RXF4EID4_size                            0x1
#define RXF4EID4_value_mask                      0x10
#define RXF4EID4_clear_mask                      0xEF

#define RXF4EIDL_EID4                            0x4
#define RXF4EIDL_EID4_address                    0xF13
#define RXF4EIDL_EID4_position                   0x4
#define RXF4EIDL_EID4_size                       0x1
#define RXF4EIDL_EID4_value_mask                 0x10
#define RXF4EIDL_EID4_clear_mask                 0xEF

#define RXF4EID5                                 0x5
#define RXF4EID5_address                         0xF13
#define RXF4EID5_position                        0x5
#define RXF4EID5_size                            0x1
#define RXF4EID5_value_mask                      0x20
#define RXF4EID5_clear_mask                      0xDF

#define RXF4EIDL_EID5                            0x5
#define RXF4EIDL_EID5_address                    0xF13
#define RXF4EIDL_EID5_position                   0x5
#define RXF4EIDL_EID5_size                       0x1
#define RXF4EIDL_EID5_value_mask                 0x20
#define RXF4EIDL_EID5_clear_mask                 0xDF

#define RXF4EID6                                 0x6
#define RXF4EID6_address                         0xF13
#define RXF4EID6_position                        0x6
#define RXF4EID6_size                            0x1
#define RXF4EID6_value_mask                      0x40
#define RXF4EID6_clear_mask                      0xBF

#define RXF4EIDL_EID6                            0x6
#define RXF4EIDL_EID6_address                    0xF13
#define RXF4EIDL_EID6_position                   0x6
#define RXF4EIDL_EID6_size                       0x1
#define RXF4EIDL_EID6_value_mask                 0x40
#define RXF4EIDL_EID6_clear_mask                 0xBF

#define RXF4EID7                                 0x7
#define RXF4EID7_address                         0xF13
#define RXF4EID7_position                        0x7
#define RXF4EID7_size                            0x1
#define RXF4EID7_value_mask                      0x80
#define RXF4EID7_clear_mask                      0x7F

#define RXF4EIDL_EID7                            0x7
#define RXF4EIDL_EID7_address                    0xF13
#define RXF4EIDL_EID7_position                   0x7
#define RXF4EIDL_EID7_size                       0x1
#define RXF4EIDL_EID7_value_mask                 0x80
#define RXF4EIDL_EID7_clear_mask                 0x7F


/*----------------------------------------------------------------------------------------------------------------#
| RXF5SIDH                                                                                                  0xF14 |
#-----------------------------------------------------------------------------------------------------------------#
| RXF5SIDH_SID10 | RXF5SIDH_SID9 | RXF5SIDH_SID8 | RXF5SIDH_SID7 | RXF5SID6 | RXF5SID5 | RXF5SID4 | RXF5SIDH_SID3 |
#-----------------------------------------------------------------------------------------------------------------#
| 7              | 6             | 5             | 4             | 3        | 2        | 1        | 0             |
#----------------------------------------------------------------------------------------------------------------*/

#define RXF5SIDH                                 0x0
#define RXF5SIDH_address                         0xF14
#define RXF5SIDH_position                        0x0
#define RXF5SIDH_size                            0x8
#define RXF5SIDH_value_mask                      0xFF
#define RXF5SIDH_clear_mask                      0x0

#define RXF5SIDH_SID3                            0x0
#define RXF5SIDH_SID3_address                    0xF14
#define RXF5SIDH_SID3_position                   0x0
#define RXF5SIDH_SID3_size                       0x1
#define RXF5SIDH_SID3_value_mask                 0x1
#define RXF5SIDH_SID3_clear_mask                 0xFE

#define RXF5SID3                                 0x0
#define RXF5SID3_address                         0xF14
#define RXF5SID3_position                        0x0
#define RXF5SID3_size                            0x1
#define RXF5SID3_value_mask                      0x1
#define RXF5SID3_clear_mask                      0xFE

#define RXF5SIDH_SID4                            0x1
#define RXF5SIDH_SID4_address                    0xF14
#define RXF5SIDH_SID4_position                   0x1
#define RXF5SIDH_SID4_size                       0x1
#define RXF5SIDH_SID4_value_mask                 0x2
#define RXF5SIDH_SID4_clear_mask                 0xFD

#define RXF5SID4                                 0x1
#define RXF5SID4_address                         0xF14
#define RXF5SID4_position                        0x1
#define RXF5SID4_size                            0x1
#define RXF5SID4_value_mask                      0x2
#define RXF5SID4_clear_mask                      0xFD

#define RXF5SIDH_SID5                            0x2
#define RXF5SIDH_SID5_address                    0xF14
#define RXF5SIDH_SID5_position                   0x2
#define RXF5SIDH_SID5_size                       0x1
#define RXF5SIDH_SID5_value_mask                 0x4
#define RXF5SIDH_SID5_clear_mask                 0xFB

#define RXF5SID5                                 0x2
#define RXF5SID5_address                         0xF14
#define RXF5SID5_position                        0x2
#define RXF5SID5_size                            0x1
#define RXF5SID5_value_mask                      0x4
#define RXF5SID5_clear_mask                      0xFB

#define RXF5SIDH_SID6                            0x3
#define RXF5SIDH_SID6_address                    0xF14
#define RXF5SIDH_SID6_position                   0x3
#define RXF5SIDH_SID6_size                       0x1
#define RXF5SIDH_SID6_value_mask                 0x8
#define RXF5SIDH_SID6_clear_mask                 0xF7

#define RXF5SID6                                 0x3
#define RXF5SID6_address                         0xF14
#define RXF5SID6_position                        0x3
#define RXF5SID6_size                            0x1
#define RXF5SID6_value_mask                      0x8
#define RXF5SID6_clear_mask                      0xF7

#define RXF5SIDH_SID7                            0x4
#define RXF5SIDH_SID7_address                    0xF14
#define RXF5SIDH_SID7_position                   0x4
#define RXF5SIDH_SID7_size                       0x1
#define RXF5SIDH_SID7_value_mask                 0x10
#define RXF5SIDH_SID7_clear_mask                 0xEF

#define RXF5SID7                                 0x4
#define RXF5SID7_address                         0xF14
#define RXF5SID7_position                        0x4
#define RXF5SID7_size                            0x1
#define RXF5SID7_value_mask                      0x10
#define RXF5SID7_clear_mask                      0xEF

#define RXF5SIDH_SID8                            0x5
#define RXF5SIDH_SID8_address                    0xF14
#define RXF5SIDH_SID8_position                   0x5
#define RXF5SIDH_SID8_size                       0x1
#define RXF5SIDH_SID8_value_mask                 0x20
#define RXF5SIDH_SID8_clear_mask                 0xDF

#define RXF5SID8                                 0x5
#define RXF5SID8_address                         0xF14
#define RXF5SID8_position                        0x5
#define RXF5SID8_size                            0x1
#define RXF5SID8_value_mask                      0x20
#define RXF5SID8_clear_mask                      0xDF

#define RXF5SIDH_SID9                            0x6
#define RXF5SIDH_SID9_address                    0xF14
#define RXF5SIDH_SID9_position                   0x6
#define RXF5SIDH_SID9_size                       0x1
#define RXF5SIDH_SID9_value_mask                 0x40
#define RXF5SIDH_SID9_clear_mask                 0xBF

#define RXF5SID9                                 0x6
#define RXF5SID9_address                         0xF14
#define RXF5SID9_position                        0x6
#define RXF5SID9_size                            0x1
#define RXF5SID9_value_mask                      0x40
#define RXF5SID9_clear_mask                      0xBF

#define RXF5SIDH_SID10                           0x7
#define RXF5SIDH_SID10_address                   0xF14
#define RXF5SIDH_SID10_position                  0x7
#define RXF5SIDH_SID10_size                      0x1
#define RXF5SIDH_SID10_value_mask                0x80
#define RXF5SIDH_SID10_clear_mask                0x7F

#define RXF5SID10                                0x7
#define RXF5SID10_address                        0xF14
#define RXF5SID10_position                       0x7
#define RXF5SID10_size                           0x1
#define RXF5SID10_value_mask                     0x80
#define RXF5SID10_clear_mask                     0x7F


/*---------------------------------------------------------------------------------#
| RXF5SIDL                                                                   0xF15 |
#----------------------------------------------------------------------------------#
| RXF5SID2 | RXF5SID1 | RXF5SID0 | - | RXF5SIDL_EXIDEN | - | RXF5EID17 | RXF5EID16 |
#----------------------------------------------------------------------------------#
| 7        | 6        | 5        | 4 | 3               | 2 | 1         | 0         |
#---------------------------------------------------------------------------------*/

#define RXF5SIDL                                 0x0
#define RXF5SIDL_address                         0xF15
#define RXF5SIDL_position                        0x0
#define RXF5SIDL_size                            0x8
#define RXF5SIDL_value_mask                      0xFF
#define RXF5SIDL_clear_mask                      0x0

#define RXF5EID16                                0x0
#define RXF5EID16_address                        0xF15
#define RXF5EID16_position                       0x0
#define RXF5EID16_size                           0x1
#define RXF5EID16_value_mask                     0x1
#define RXF5EID16_clear_mask                     0xFE

#define RXF5SIDL_EID16                           0x0
#define RXF5SIDL_EID16_address                   0xF15
#define RXF5SIDL_EID16_position                  0x0
#define RXF5SIDL_EID16_size                      0x1
#define RXF5SIDL_EID16_value_mask                0x1
#define RXF5SIDL_EID16_clear_mask                0xFE

#define RXF5EID17                                0x1
#define RXF5EID17_address                        0xF15
#define RXF5EID17_position                       0x1
#define RXF5EID17_size                           0x1
#define RXF5EID17_value_mask                     0x2
#define RXF5EID17_clear_mask                     0xFD

#define RXF5SIDL_EID17                           0x1
#define RXF5SIDL_EID17_address                   0xF15
#define RXF5SIDL_EID17_position                  0x1
#define RXF5SIDL_EID17_size                      0x1
#define RXF5SIDL_EID17_value_mask                0x2
#define RXF5SIDL_EID17_clear_mask                0xFD

#define RXF5SIDL_EXIDEN                          0x3
#define RXF5SIDL_EXIDEN_address                  0xF15
#define RXF5SIDL_EXIDEN_position                 0x3
#define RXF5SIDL_EXIDEN_size                     0x1
#define RXF5SIDL_EXIDEN_value_mask               0x8
#define RXF5SIDL_EXIDEN_clear_mask               0xF7

#define RXF5EXIDEN                               0x3
#define RXF5EXIDEN_address                       0xF15
#define RXF5EXIDEN_position                      0x3
#define RXF5EXIDEN_size                          0x1
#define RXF5EXIDEN_value_mask                    0x8
#define RXF5EXIDEN_clear_mask                    0xF7

#define RXF5SIDL_SID0                            0x5
#define RXF5SIDL_SID0_address                    0xF15
#define RXF5SIDL_SID0_position                   0x5
#define RXF5SIDL_SID0_size                       0x1
#define RXF5SIDL_SID0_value_mask                 0x20
#define RXF5SIDL_SID0_clear_mask                 0xDF

#define RXF5SID0                                 0x5
#define RXF5SID0_address                         0xF15
#define RXF5SID0_position                        0x5
#define RXF5SID0_size                            0x1
#define RXF5SID0_value_mask                      0x20
#define RXF5SID0_clear_mask                      0xDF

#define RXF5SID1                                 0x6
#define RXF5SID1_address                         0xF15
#define RXF5SID1_position                        0x6
#define RXF5SID1_size                            0x1
#define RXF5SID1_value_mask                      0x40
#define RXF5SID1_clear_mask                      0xBF

#define RXF5SIDL_SID1                            0x6
#define RXF5SIDL_SID1_address                    0xF15
#define RXF5SIDL_SID1_position                   0x6
#define RXF5SIDL_SID1_size                       0x1
#define RXF5SIDL_SID1_value_mask                 0x40
#define RXF5SIDL_SID1_clear_mask                 0xBF

#define RXF5SIDL_SID2                            0x7
#define RXF5SIDL_SID2_address                    0xF15
#define RXF5SIDL_SID2_position                   0x7
#define RXF5SIDL_SID2_size                       0x1
#define RXF5SIDL_SID2_value_mask                 0x80
#define RXF5SIDL_SID2_clear_mask                 0x7F

#define RXF5SID2                                 0x7
#define RXF5SID2_address                         0xF15
#define RXF5SID2_position                        0x7
#define RXF5SID2_size                            0x1
#define RXF5SID2_value_mask                      0x80
#define RXF5SID2_clear_mask                      0x7F


/*------------------------------------------------------------------------------------------------------------------------------------#
| RXF5EIDH                                                                                                                      0xF16 |
#-------------------------------------------------------------------------------------------------------------------------------------#
| RXF5EIDH_EID15 | RXF5EIDH_EID14 | RXF5EIDH_EID13 | RXF5EIDH_EID12 | RXF5EIDH_EID11 | RXF5EIDH_EID10 | RXF5EIDH_EID9 | RXF5EIDH_EID8 |
#-------------------------------------------------------------------------------------------------------------------------------------#
| 7              | 6              | 5              | 4              | 3              | 2              | 1             | 0             |
#------------------------------------------------------------------------------------------------------------------------------------*/

#define RXF5EIDH                                 0x0
#define RXF5EIDH_address                         0xF16
#define RXF5EIDH_position                        0x0
#define RXF5EIDH_size                            0x8
#define RXF5EIDH_value_mask                      0xFF
#define RXF5EIDH_clear_mask                      0x0

#define RXF5EIDH_EID8                            0x0
#define RXF5EIDH_EID8_address                    0xF16
#define RXF5EIDH_EID8_position                   0x0
#define RXF5EIDH_EID8_size                       0x1
#define RXF5EIDH_EID8_value_mask                 0x1
#define RXF5EIDH_EID8_clear_mask                 0xFE

#define RXF5EID8                                 0x0
#define RXF5EID8_address                         0xF16
#define RXF5EID8_position                        0x0
#define RXF5EID8_size                            0x1
#define RXF5EID8_value_mask                      0x1
#define RXF5EID8_clear_mask                      0xFE

#define RXF5EIDH_EID9                            0x1
#define RXF5EIDH_EID9_address                    0xF16
#define RXF5EIDH_EID9_position                   0x1
#define RXF5EIDH_EID9_size                       0x1
#define RXF5EIDH_EID9_value_mask                 0x2
#define RXF5EIDH_EID9_clear_mask                 0xFD

#define RXF5EID9                                 0x1
#define RXF5EID9_address                         0xF16
#define RXF5EID9_position                        0x1
#define RXF5EID9_size                            0x1
#define RXF5EID9_value_mask                      0x2
#define RXF5EID9_clear_mask                      0xFD

#define RXF5EIDH_EID10                           0x2
#define RXF5EIDH_EID10_address                   0xF16
#define RXF5EIDH_EID10_position                  0x2
#define RXF5EIDH_EID10_size                      0x1
#define RXF5EIDH_EID10_value_mask                0x4
#define RXF5EIDH_EID10_clear_mask                0xFB

#define RXF5EID10                                0x2
#define RXF5EID10_address                        0xF16
#define RXF5EID10_position                       0x2
#define RXF5EID10_size                           0x1
#define RXF5EID10_value_mask                     0x4
#define RXF5EID10_clear_mask                     0xFB

#define RXF5EIDH_EID11                           0x3
#define RXF5EIDH_EID11_address                   0xF16
#define RXF5EIDH_EID11_position                  0x3
#define RXF5EIDH_EID11_size                      0x1
#define RXF5EIDH_EID11_value_mask                0x8
#define RXF5EIDH_EID11_clear_mask                0xF7

#define RXF5EID11                                0x3
#define RXF5EID11_address                        0xF16
#define RXF5EID11_position                       0x3
#define RXF5EID11_size                           0x1
#define RXF5EID11_value_mask                     0x8
#define RXF5EID11_clear_mask                     0xF7

#define RXF5EIDH_EID12                           0x4
#define RXF5EIDH_EID12_address                   0xF16
#define RXF5EIDH_EID12_position                  0x4
#define RXF5EIDH_EID12_size                      0x1
#define RXF5EIDH_EID12_value_mask                0x10
#define RXF5EIDH_EID12_clear_mask                0xEF

#define RXF5EID12                                0x4
#define RXF5EID12_address                        0xF16
#define RXF5EID12_position                       0x4
#define RXF5EID12_size                           0x1
#define RXF5EID12_value_mask                     0x10
#define RXF5EID12_clear_mask                     0xEF

#define RXF5EIDH_EID13                           0x5
#define RXF5EIDH_EID13_address                   0xF16
#define RXF5EIDH_EID13_position                  0x5
#define RXF5EIDH_EID13_size                      0x1
#define RXF5EIDH_EID13_value_mask                0x20
#define RXF5EIDH_EID13_clear_mask                0xDF

#define RXF5EID13                                0x5
#define RXF5EID13_address                        0xF16
#define RXF5EID13_position                       0x5
#define RXF5EID13_size                           0x1
#define RXF5EID13_value_mask                     0x20
#define RXF5EID13_clear_mask                     0xDF

#define RXF5EIDH_EID14                           0x6
#define RXF5EIDH_EID14_address                   0xF16
#define RXF5EIDH_EID14_position                  0x6
#define RXF5EIDH_EID14_size                      0x1
#define RXF5EIDH_EID14_value_mask                0x40
#define RXF5EIDH_EID14_clear_mask                0xBF

#define RXF5EID14                                0x6
#define RXF5EID14_address                        0xF16
#define RXF5EID14_position                       0x6
#define RXF5EID14_size                           0x1
#define RXF5EID14_value_mask                     0x40
#define RXF5EID14_clear_mask                     0xBF

#define RXF5EIDH_EID15                           0x7
#define RXF5EIDH_EID15_address                   0xF16
#define RXF5EIDH_EID15_position                  0x7
#define RXF5EIDH_EID15_size                      0x1
#define RXF5EIDH_EID15_value_mask                0x80
#define RXF5EIDH_EID15_clear_mask                0x7F

#define RXF5EID15                                0x7
#define RXF5EID15_address                        0xF16
#define RXF5EID15_position                       0x7
#define RXF5EID15_size                           0x1
#define RXF5EID15_value_mask                     0x80
#define RXF5EID15_clear_mask                     0x7F


/*------------------------------------------------------------------------------------------------------------------------------#
| RXF5EIDL                                                                                                                0xF17 |
#-------------------------------------------------------------------------------------------------------------------------------#
| RXF5EIDL_EID7 | RXF5EIDL_EID6 | RXF5EIDL_EID5 | RXF5EIDL_EID4 | RXF5EIDL_EID3 | RXF5EIDL_EID2 | RXF5EIDL_EID1 | RXF5EIDL_EID0 |
#-------------------------------------------------------------------------------------------------------------------------------#
| 7             | 6             | 5             | 4             | 3             | 2             | 1             | 0             |
#------------------------------------------------------------------------------------------------------------------------------*/

#define RXF5EIDL                                 0x0
#define RXF5EIDL_address                         0xF17
#define RXF5EIDL_position                        0x0
#define RXF5EIDL_size                            0x8
#define RXF5EIDL_value_mask                      0xFF
#define RXF5EIDL_clear_mask                      0x0

#define RXF5EIDL_EID0                            0x0
#define RXF5EIDL_EID0_address                    0xF17
#define RXF5EIDL_EID0_position                   0x0
#define RXF5EIDL_EID0_size                       0x1
#define RXF5EIDL_EID0_value_mask                 0x1
#define RXF5EIDL_EID0_clear_mask                 0xFE

#define RXF5EID0                                 0x0
#define RXF5EID0_address                         0xF17
#define RXF5EID0_position                        0x0
#define RXF5EID0_size                            0x1
#define RXF5EID0_value_mask                      0x1
#define RXF5EID0_clear_mask                      0xFE

#define RXF5EIDL_EID1                            0x1
#define RXF5EIDL_EID1_address                    0xF17
#define RXF5EIDL_EID1_position                   0x1
#define RXF5EIDL_EID1_size                       0x1
#define RXF5EIDL_EID1_value_mask                 0x2
#define RXF5EIDL_EID1_clear_mask                 0xFD

#define RXF5EID1                                 0x1
#define RXF5EID1_address                         0xF17
#define RXF5EID1_position                        0x1
#define RXF5EID1_size                            0x1
#define RXF5EID1_value_mask                      0x2
#define RXF5EID1_clear_mask                      0xFD

#define RXF5EIDL_EID2                            0x2
#define RXF5EIDL_EID2_address                    0xF17
#define RXF5EIDL_EID2_position                   0x2
#define RXF5EIDL_EID2_size                       0x1
#define RXF5EIDL_EID2_value_mask                 0x4
#define RXF5EIDL_EID2_clear_mask                 0xFB

#define RXF5EID2                                 0x2
#define RXF5EID2_address                         0xF17
#define RXF5EID2_position                        0x2
#define RXF5EID2_size                            0x1
#define RXF5EID2_value_mask                      0x4
#define RXF5EID2_clear_mask                      0xFB

#define RXF5EIDL_EID3                            0x3
#define RXF5EIDL_EID3_address                    0xF17
#define RXF5EIDL_EID3_position                   0x3
#define RXF5EIDL_EID3_size                       0x1
#define RXF5EIDL_EID3_value_mask                 0x8
#define RXF5EIDL_EID3_clear_mask                 0xF7

#define RXF5EID3                                 0x3
#define RXF5EID3_address                         0xF17
#define RXF5EID3_position                        0x3
#define RXF5EID3_size                            0x1
#define RXF5EID3_value_mask                      0x8
#define RXF5EID3_clear_mask                      0xF7

#define RXF5EIDL_EID4                            0x4
#define RXF5EIDL_EID4_address                    0xF17
#define RXF5EIDL_EID4_position                   0x4
#define RXF5EIDL_EID4_size                       0x1
#define RXF5EIDL_EID4_value_mask                 0x10
#define RXF5EIDL_EID4_clear_mask                 0xEF

#define RXF5EID4                                 0x4
#define RXF5EID4_address                         0xF17
#define RXF5EID4_position                        0x4
#define RXF5EID4_size                            0x1
#define RXF5EID4_value_mask                      0x10
#define RXF5EID4_clear_mask                      0xEF

#define RXF5EIDL_EID5                            0x5
#define RXF5EIDL_EID5_address                    0xF17
#define RXF5EIDL_EID5_position                   0x5
#define RXF5EIDL_EID5_size                       0x1
#define RXF5EIDL_EID5_value_mask                 0x20
#define RXF5EIDL_EID5_clear_mask                 0xDF

#define RXF5EID5                                 0x5
#define RXF5EID5_address                         0xF17
#define RXF5EID5_position                        0x5
#define RXF5EID5_size                            0x1
#define RXF5EID5_value_mask                      0x20
#define RXF5EID5_clear_mask                      0xDF

#define RXF5EIDL_EID6                            0x6
#define RXF5EIDL_EID6_address                    0xF17
#define RXF5EIDL_EID6_position                   0x6
#define RXF5EIDL_EID6_size                       0x1
#define RXF5EIDL_EID6_value_mask                 0x40
#define RXF5EIDL_EID6_clear_mask                 0xBF

#define RXF5EID6                                 0x6
#define RXF5EID6_address                         0xF17
#define RXF5EID6_position                        0x6
#define RXF5EID6_size                            0x1
#define RXF5EID6_value_mask                      0x40
#define RXF5EID6_clear_mask                      0xBF

#define RXF5EIDL_EID7                            0x7
#define RXF5EIDL_EID7_address                    0xF17
#define RXF5EIDL_EID7_position                   0x7
#define RXF5EIDL_EID7_size                       0x1
#define RXF5EIDL_EID7_value_mask                 0x80
#define RXF5EIDL_EID7_clear_mask                 0x7F

#define RXF5EID7                                 0x7
#define RXF5EID7_address                         0xF17
#define RXF5EID7_position                        0x7
#define RXF5EID7_size                            0x1
#define RXF5EID7_value_mask                      0x80
#define RXF5EID7_clear_mask                      0x7F


/*---------------------------------------------------------------------------------------#
| RXM0SIDH                                                                         0xF18 |
#----------------------------------------------------------------------------------------#
| RXM0SID10 | RXM0SID9 | RXM0SID8 | RXM0SID7 | RXM0SID6 | RXM0SID5 | RXM0SID4 | RXM0SID3 |
#----------------------------------------------------------------------------------------#
| 7         | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
#---------------------------------------------------------------------------------------*/

#define RXM0SIDH                                 0x0
#define RXM0SIDH_address                         0xF18
#define RXM0SIDH_position                        0x0
#define RXM0SIDH_size                            0x8
#define RXM0SIDH_value_mask                      0xFF
#define RXM0SIDH_clear_mask                      0x0

#define RXM0SIDH_SID3                            0x0
#define RXM0SIDH_SID3_address                    0xF18
#define RXM0SIDH_SID3_position                   0x0
#define RXM0SIDH_SID3_size                       0x1
#define RXM0SIDH_SID3_value_mask                 0x1
#define RXM0SIDH_SID3_clear_mask                 0xFE

#define RXM0SID3                                 0x0
#define RXM0SID3_address                         0xF18
#define RXM0SID3_position                        0x0
#define RXM0SID3_size                            0x1
#define RXM0SID3_value_mask                      0x1
#define RXM0SID3_clear_mask                      0xFE

#define RXM0SIDH_SID4                            0x1
#define RXM0SIDH_SID4_address                    0xF18
#define RXM0SIDH_SID4_position                   0x1
#define RXM0SIDH_SID4_size                       0x1
#define RXM0SIDH_SID4_value_mask                 0x2
#define RXM0SIDH_SID4_clear_mask                 0xFD

#define RXM0SID4                                 0x1
#define RXM0SID4_address                         0xF18
#define RXM0SID4_position                        0x1
#define RXM0SID4_size                            0x1
#define RXM0SID4_value_mask                      0x2
#define RXM0SID4_clear_mask                      0xFD

#define RXM0SIDH_SID5                            0x2
#define RXM0SIDH_SID5_address                    0xF18
#define RXM0SIDH_SID5_position                   0x2
#define RXM0SIDH_SID5_size                       0x1
#define RXM0SIDH_SID5_value_mask                 0x4
#define RXM0SIDH_SID5_clear_mask                 0xFB

#define RXM0SID5                                 0x2
#define RXM0SID5_address                         0xF18
#define RXM0SID5_position                        0x2
#define RXM0SID5_size                            0x1
#define RXM0SID5_value_mask                      0x4
#define RXM0SID5_clear_mask                      0xFB

#define RXM0SIDH_SID6                            0x3
#define RXM0SIDH_SID6_address                    0xF18
#define RXM0SIDH_SID6_position                   0x3
#define RXM0SIDH_SID6_size                       0x1
#define RXM0SIDH_SID6_value_mask                 0x8
#define RXM0SIDH_SID6_clear_mask                 0xF7

#define RXM0SID6                                 0x3
#define RXM0SID6_address                         0xF18
#define RXM0SID6_position                        0x3
#define RXM0SID6_size                            0x1
#define RXM0SID6_value_mask                      0x8
#define RXM0SID6_clear_mask                      0xF7

#define RXM0SIDH_SID7                            0x4
#define RXM0SIDH_SID7_address                    0xF18
#define RXM0SIDH_SID7_position                   0x4
#define RXM0SIDH_SID7_size                       0x1
#define RXM0SIDH_SID7_value_mask                 0x10
#define RXM0SIDH_SID7_clear_mask                 0xEF

#define RXM0SID7                                 0x4
#define RXM0SID7_address                         0xF18
#define RXM0SID7_position                        0x4
#define RXM0SID7_size                            0x1
#define RXM0SID7_value_mask                      0x10
#define RXM0SID7_clear_mask                      0xEF

#define RXM0SIDH_SID8                            0x5
#define RXM0SIDH_SID8_address                    0xF18
#define RXM0SIDH_SID8_position                   0x5
#define RXM0SIDH_SID8_size                       0x1
#define RXM0SIDH_SID8_value_mask                 0x20
#define RXM0SIDH_SID8_clear_mask                 0xDF

#define RXM0SID8                                 0x5
#define RXM0SID8_address                         0xF18
#define RXM0SID8_position                        0x5
#define RXM0SID8_size                            0x1
#define RXM0SID8_value_mask                      0x20
#define RXM0SID8_clear_mask                      0xDF

#define RXM0SIDH_SID9                            0x6
#define RXM0SIDH_SID9_address                    0xF18
#define RXM0SIDH_SID9_position                   0x6
#define RXM0SIDH_SID9_size                       0x1
#define RXM0SIDH_SID9_value_mask                 0x40
#define RXM0SIDH_SID9_clear_mask                 0xBF

#define RXM0SID9                                 0x6
#define RXM0SID9_address                         0xF18
#define RXM0SID9_position                        0x6
#define RXM0SID9_size                            0x1
#define RXM0SID9_value_mask                      0x40
#define RXM0SID9_clear_mask                      0xBF

#define RXM0SID10                                0x7
#define RXM0SID10_address                        0xF18
#define RXM0SID10_position                       0x7
#define RXM0SID10_size                           0x1
#define RXM0SID10_value_mask                     0x80
#define RXM0SID10_clear_mask                     0x7F

#define RXM0SIDH_SID10                           0x7
#define RXM0SIDH_SID10_address                   0xF18
#define RXM0SIDH_SID10_position                  0x7
#define RXM0SIDH_SID10_size                      0x1
#define RXM0SIDH_SID10_value_mask                0x80
#define RXM0SIDH_SID10_clear_mask                0x7F


/*------------------------------------------------------------------------#
| RXM0SIDL                                                          0xF19 |
#-------------------------------------------------------------------------#
| RXM0SID2 | RXM0SID1 | RXM0SID0 | - | - | - | RXM0EID17 | RXM0SIDL_EID16 |
#-------------------------------------------------------------------------#
| 7        | 6        | 5        | 4 | 3 | 2 | 1         | 0              |
#------------------------------------------------------------------------*/

#define RXM0SIDL                                 0x0
#define RXM0SIDL_address                         0xF19
#define RXM0SIDL_position                        0x0
#define RXM0SIDL_size                            0x8
#define RXM0SIDL_value_mask                      0xFF
#define RXM0SIDL_clear_mask                      0x0

#define RXM0SIDL_EID16                           0x0
#define RXM0SIDL_EID16_address                   0xF19
#define RXM0SIDL_EID16_position                  0x0
#define RXM0SIDL_EID16_size                      0x1
#define RXM0SIDL_EID16_value_mask                0x1
#define RXM0SIDL_EID16_clear_mask                0xFE

#define RXM0EID16                                0x0
#define RXM0EID16_address                        0xF19
#define RXM0EID16_position                       0x0
#define RXM0EID16_size                           0x1
#define RXM0EID16_value_mask                     0x1
#define RXM0EID16_clear_mask                     0xFE

#define RXM0EID17                                0x1
#define RXM0EID17_address                        0xF19
#define RXM0EID17_position                       0x1
#define RXM0EID17_size                           0x1
#define RXM0EID17_value_mask                     0x2
#define RXM0EID17_clear_mask                     0xFD

#define RXM0SIDL_EID17                           0x1
#define RXM0SIDL_EID17_address                   0xF19
#define RXM0SIDL_EID17_position                  0x1
#define RXM0SIDL_EID17_size                      0x1
#define RXM0SIDL_EID17_value_mask                0x2
#define RXM0SIDL_EID17_clear_mask                0xFD

#define RXM0SID0                                 0x5
#define RXM0SID0_address                         0xF19
#define RXM0SID0_position                        0x5
#define RXM0SID0_size                            0x1
#define RXM0SID0_value_mask                      0x20
#define RXM0SID0_clear_mask                      0xDF

#define RXM0SIDL_SID0                            0x5
#define RXM0SIDL_SID0_address                    0xF19
#define RXM0SIDL_SID0_position                   0x5
#define RXM0SIDL_SID0_size                       0x1
#define RXM0SIDL_SID0_value_mask                 0x20
#define RXM0SIDL_SID0_clear_mask                 0xDF

#define RXM0SID1                                 0x6
#define RXM0SID1_address                         0xF19
#define RXM0SID1_position                        0x6
#define RXM0SID1_size                            0x1
#define RXM0SID1_value_mask                      0x40
#define RXM0SID1_clear_mask                      0xBF

#define RXM0SIDL_SID1                            0x6
#define RXM0SIDL_SID1_address                    0xF19
#define RXM0SIDL_SID1_position                   0x6
#define RXM0SIDL_SID1_size                       0x1
#define RXM0SIDL_SID1_value_mask                 0x40
#define RXM0SIDL_SID1_clear_mask                 0xBF

#define RXM0SID2                                 0x7
#define RXM0SID2_address                         0xF19
#define RXM0SID2_position                        0x7
#define RXM0SID2_size                            0x1
#define RXM0SID2_value_mask                      0x80
#define RXM0SID2_clear_mask                      0x7F

#define RXM0SIDL_SID2                            0x7
#define RXM0SIDL_SID2_address                    0xF19
#define RXM0SIDL_SID2_position                   0x7
#define RXM0SIDL_SID2_size                       0x1
#define RXM0SIDL_SID2_value_mask                 0x80
#define RXM0SIDL_SID2_clear_mask                 0x7F


/*--------------------------------------------------------------------------------------------#
| RXM0EIDH                                                                              0xF1A |
#---------------------------------------------------------------------------------------------#
| RXM0EID15 | RXM0EID14 | RXM0EID13 | RXM0EID12 | RXM0EID11 | RXM0EID10 | RXM0EID9 | RXM0EID8 |
#---------------------------------------------------------------------------------------------#
| 7         | 6         | 5         | 4         | 3         | 2         | 1        | 0        |
#--------------------------------------------------------------------------------------------*/

#define RXM0EIDH                                 0x0
#define RXM0EIDH_address                         0xF1A
#define RXM0EIDH_position                        0x0
#define RXM0EIDH_size                            0x8
#define RXM0EIDH_value_mask                      0xFF
#define RXM0EIDH_clear_mask                      0x0

#define RXM0EIDH_EID8                            0x0
#define RXM0EIDH_EID8_address                    0xF1A
#define RXM0EIDH_EID8_position                   0x0
#define RXM0EIDH_EID8_size                       0x1
#define RXM0EIDH_EID8_value_mask                 0x1
#define RXM0EIDH_EID8_clear_mask                 0xFE

#define RXM0EID8                                 0x0
#define RXM0EID8_address                         0xF1A
#define RXM0EID8_position                        0x0
#define RXM0EID8_size                            0x1
#define RXM0EID8_value_mask                      0x1
#define RXM0EID8_clear_mask                      0xFE

#define RXM0EIDH_EID9                            0x1
#define RXM0EIDH_EID9_address                    0xF1A
#define RXM0EIDH_EID9_position                   0x1
#define RXM0EIDH_EID9_size                       0x1
#define RXM0EIDH_EID9_value_mask                 0x2
#define RXM0EIDH_EID9_clear_mask                 0xFD

#define RXM0EID9                                 0x1
#define RXM0EID9_address                         0xF1A
#define RXM0EID9_position                        0x1
#define RXM0EID9_size                            0x1
#define RXM0EID9_value_mask                      0x2
#define RXM0EID9_clear_mask                      0xFD

#define RXM0EIDH_EID10                           0x2
#define RXM0EIDH_EID10_address                   0xF1A
#define RXM0EIDH_EID10_position                  0x2
#define RXM0EIDH_EID10_size                      0x1
#define RXM0EIDH_EID10_value_mask                0x4
#define RXM0EIDH_EID10_clear_mask                0xFB

#define RXM0EID10                                0x2
#define RXM0EID10_address                        0xF1A
#define RXM0EID10_position                       0x2
#define RXM0EID10_size                           0x1
#define RXM0EID10_value_mask                     0x4
#define RXM0EID10_clear_mask                     0xFB

#define RXM0EIDH_EID11                           0x3
#define RXM0EIDH_EID11_address                   0xF1A
#define RXM0EIDH_EID11_position                  0x3
#define RXM0EIDH_EID11_size                      0x1
#define RXM0EIDH_EID11_value_mask                0x8
#define RXM0EIDH_EID11_clear_mask                0xF7

#define RXM0EID11                                0x3
#define RXM0EID11_address                        0xF1A
#define RXM0EID11_position                       0x3
#define RXM0EID11_size                           0x1
#define RXM0EID11_value_mask                     0x8
#define RXM0EID11_clear_mask                     0xF7

#define RXM0EIDH_EID12                           0x4
#define RXM0EIDH_EID12_address                   0xF1A
#define RXM0EIDH_EID12_position                  0x4
#define RXM0EIDH_EID12_size                      0x1
#define RXM0EIDH_EID12_value_mask                0x10
#define RXM0EIDH_EID12_clear_mask                0xEF

#define RXM0EID12                                0x4
#define RXM0EID12_address                        0xF1A
#define RXM0EID12_position                       0x4
#define RXM0EID12_size                           0x1
#define RXM0EID12_value_mask                     0x10
#define RXM0EID12_clear_mask                     0xEF

#define RXM0EIDH_EID13                           0x5
#define RXM0EIDH_EID13_address                   0xF1A
#define RXM0EIDH_EID13_position                  0x5
#define RXM0EIDH_EID13_size                      0x1
#define RXM0EIDH_EID13_value_mask                0x20
#define RXM0EIDH_EID13_clear_mask                0xDF

#define RXM0EID13                                0x5
#define RXM0EID13_address                        0xF1A
#define RXM0EID13_position                       0x5
#define RXM0EID13_size                           0x1
#define RXM0EID13_value_mask                     0x20
#define RXM0EID13_clear_mask                     0xDF

#define RXM0EIDH_EID14                           0x6
#define RXM0EIDH_EID14_address                   0xF1A
#define RXM0EIDH_EID14_position                  0x6
#define RXM0EIDH_EID14_size                      0x1
#define RXM0EIDH_EID14_value_mask                0x40
#define RXM0EIDH_EID14_clear_mask                0xBF

#define RXM0EID14                                0x6
#define RXM0EID14_address                        0xF1A
#define RXM0EID14_position                       0x6
#define RXM0EID14_size                           0x1
#define RXM0EID14_value_mask                     0x40
#define RXM0EID14_clear_mask                     0xBF

#define RXM0EIDH_EID15                           0x7
#define RXM0EIDH_EID15_address                   0xF1A
#define RXM0EIDH_EID15_position                  0x7
#define RXM0EIDH_EID15_size                      0x1
#define RXM0EIDH_EID15_value_mask                0x80
#define RXM0EIDH_EID15_clear_mask                0x7F

#define RXM0EID15                                0x7
#define RXM0EID15_address                        0xF1A
#define RXM0EID15_position                       0x7
#define RXM0EID15_size                           0x1
#define RXM0EID15_value_mask                     0x80
#define RXM0EID15_clear_mask                     0x7F


/*------------------------------------------------------------------------------------------------------------------------------#
| RXM0EIDL                                                                                                                0xF1B |
#-------------------------------------------------------------------------------------------------------------------------------#
| RXM0EIDL_EID7 | RXM0EIDL_EID6 | RXM0EIDL_EID5 | RXM0EIDL_EID4 | RXM0EIDL_EID3 | RXM0EIDL_EID2 | RXM0EIDL_EID1 | RXM0EIDL_EID0 |
#-------------------------------------------------------------------------------------------------------------------------------#
| 7             | 6             | 5             | 4             | 3             | 2             | 1             | 0             |
#------------------------------------------------------------------------------------------------------------------------------*/

#define RXM0EIDL                                 0x0
#define RXM0EIDL_address                         0xF1B
#define RXM0EIDL_position                        0x0
#define RXM0EIDL_size                            0x8
#define RXM0EIDL_value_mask                      0xFF
#define RXM0EIDL_clear_mask                      0x0

#define RXM0EIDL_EID0                            0x0
#define RXM0EIDL_EID0_address                    0xF1B
#define RXM0EIDL_EID0_position                   0x0
#define RXM0EIDL_EID0_size                       0x1
#define RXM0EIDL_EID0_value_mask                 0x1
#define RXM0EIDL_EID0_clear_mask                 0xFE

#define RXM0EID0                                 0x0
#define RXM0EID0_address                         0xF1B
#define RXM0EID0_position                        0x0
#define RXM0EID0_size                            0x1
#define RXM0EID0_value_mask                      0x1
#define RXM0EID0_clear_mask                      0xFE

#define RXM0EIDL_EID1                            0x1
#define RXM0EIDL_EID1_address                    0xF1B
#define RXM0EIDL_EID1_position                   0x1
#define RXM0EIDL_EID1_size                       0x1
#define RXM0EIDL_EID1_value_mask                 0x2
#define RXM0EIDL_EID1_clear_mask                 0xFD

#define RXM0EID1                                 0x1
#define RXM0EID1_address                         0xF1B
#define RXM0EID1_position                        0x1
#define RXM0EID1_size                            0x1
#define RXM0EID1_value_mask                      0x2
#define RXM0EID1_clear_mask                      0xFD

#define RXM0EIDL_EID2                            0x2
#define RXM0EIDL_EID2_address                    0xF1B
#define RXM0EIDL_EID2_position                   0x2
#define RXM0EIDL_EID2_size                       0x1
#define RXM0EIDL_EID2_value_mask                 0x4
#define RXM0EIDL_EID2_clear_mask                 0xFB

#define RXM0EID2                                 0x2
#define RXM0EID2_address                         0xF1B
#define RXM0EID2_position                        0x2
#define RXM0EID2_size                            0x1
#define RXM0EID2_value_mask                      0x4
#define RXM0EID2_clear_mask                      0xFB

#define RXM0EIDL_EID3                            0x3
#define RXM0EIDL_EID3_address                    0xF1B
#define RXM0EIDL_EID3_position                   0x3
#define RXM0EIDL_EID3_size                       0x1
#define RXM0EIDL_EID3_value_mask                 0x8
#define RXM0EIDL_EID3_clear_mask                 0xF7

#define RXM0EID3                                 0x3
#define RXM0EID3_address                         0xF1B
#define RXM0EID3_position                        0x3
#define RXM0EID3_size                            0x1
#define RXM0EID3_value_mask                      0x8
#define RXM0EID3_clear_mask                      0xF7

#define RXM0EIDL_EID4                            0x4
#define RXM0EIDL_EID4_address                    0xF1B
#define RXM0EIDL_EID4_position                   0x4
#define RXM0EIDL_EID4_size                       0x1
#define RXM0EIDL_EID4_value_mask                 0x10
#define RXM0EIDL_EID4_clear_mask                 0xEF

#define RXM0EID4                                 0x4
#define RXM0EID4_address                         0xF1B
#define RXM0EID4_position                        0x4
#define RXM0EID4_size                            0x1
#define RXM0EID4_value_mask                      0x10
#define RXM0EID4_clear_mask                      0xEF

#define RXM0EIDL_EID5                            0x5
#define RXM0EIDL_EID5_address                    0xF1B
#define RXM0EIDL_EID5_position                   0x5
#define RXM0EIDL_EID5_size                       0x1
#define RXM0EIDL_EID5_value_mask                 0x20
#define RXM0EIDL_EID5_clear_mask                 0xDF

#define RXM0EID5                                 0x5
#define RXM0EID5_address                         0xF1B
#define RXM0EID5_position                        0x5
#define RXM0EID5_size                            0x1
#define RXM0EID5_value_mask                      0x20
#define RXM0EID5_clear_mask                      0xDF

#define RXM0EIDL_EID6                            0x6
#define RXM0EIDL_EID6_address                    0xF1B
#define RXM0EIDL_EID6_position                   0x6
#define RXM0EIDL_EID6_size                       0x1
#define RXM0EIDL_EID6_value_mask                 0x40
#define RXM0EIDL_EID6_clear_mask                 0xBF

#define RXM0EID6                                 0x6
#define RXM0EID6_address                         0xF1B
#define RXM0EID6_position                        0x6
#define RXM0EID6_size                            0x1
#define RXM0EID6_value_mask                      0x40
#define RXM0EID6_clear_mask                      0xBF

#define RXM0EIDL_EID7                            0x7
#define RXM0EIDL_EID7_address                    0xF1B
#define RXM0EIDL_EID7_position                   0x7
#define RXM0EIDL_EID7_size                       0x1
#define RXM0EIDL_EID7_value_mask                 0x80
#define RXM0EIDL_EID7_clear_mask                 0x7F

#define RXM0EID7                                 0x7
#define RXM0EID7_address                         0xF1B
#define RXM0EID7_position                        0x7
#define RXM0EID7_size                            0x1
#define RXM0EID7_value_mask                      0x80
#define RXM0EID7_clear_mask                      0x7F


/*------------------------------------------------------------------------------------------------------#
| RXM1SIDH                                                                                        0xF1C |
#-------------------------------------------------------------------------------------------------------#
| RXM1SID10 | RXM1SIDH_SID9 | RXM1SIDH_SID8 | RXM1SID7 | RXM1SIDH_SID6 | RXM1SID5 | RXM1SID4 | RXM1SID3 |
#-------------------------------------------------------------------------------------------------------#
| 7         | 6             | 5             | 4        | 3             | 2        | 1        | 0        |
#------------------------------------------------------------------------------------------------------*/

#define RXM1SIDH                                 0x0
#define RXM1SIDH_address                         0xF1C
#define RXM1SIDH_position                        0x0
#define RXM1SIDH_size                            0x8
#define RXM1SIDH_value_mask                      0xFF
#define RXM1SIDH_clear_mask                      0x0

#define RXM1SID3                                 0x0
#define RXM1SID3_address                         0xF1C
#define RXM1SID3_position                        0x0
#define RXM1SID3_size                            0x1
#define RXM1SID3_value_mask                      0x1
#define RXM1SID3_clear_mask                      0xFE

#define RXM1SIDH_SID3                            0x0
#define RXM1SIDH_SID3_address                    0xF1C
#define RXM1SIDH_SID3_position                   0x0
#define RXM1SIDH_SID3_size                       0x1
#define RXM1SIDH_SID3_value_mask                 0x1
#define RXM1SIDH_SID3_clear_mask                 0xFE

#define RXM1SID4                                 0x1
#define RXM1SID4_address                         0xF1C
#define RXM1SID4_position                        0x1
#define RXM1SID4_size                            0x1
#define RXM1SID4_value_mask                      0x2
#define RXM1SID4_clear_mask                      0xFD

#define RXM1SIDH_SID4                            0x1
#define RXM1SIDH_SID4_address                    0xF1C
#define RXM1SIDH_SID4_position                   0x1
#define RXM1SIDH_SID4_size                       0x1
#define RXM1SIDH_SID4_value_mask                 0x2
#define RXM1SIDH_SID4_clear_mask                 0xFD

#define RXM1SID5                                 0x2
#define RXM1SID5_address                         0xF1C
#define RXM1SID5_position                        0x2
#define RXM1SID5_size                            0x1
#define RXM1SID5_value_mask                      0x4
#define RXM1SID5_clear_mask                      0xFB

#define RXM1SIDH_SID5                            0x2
#define RXM1SIDH_SID5_address                    0xF1C
#define RXM1SIDH_SID5_position                   0x2
#define RXM1SIDH_SID5_size                       0x1
#define RXM1SIDH_SID5_value_mask                 0x4
#define RXM1SIDH_SID5_clear_mask                 0xFB

#define RXM1SID6                                 0x3
#define RXM1SID6_address                         0xF1C
#define RXM1SID6_position                        0x3
#define RXM1SID6_size                            0x1
#define RXM1SID6_value_mask                      0x8
#define RXM1SID6_clear_mask                      0xF7

#define RXM1SIDH_SID6                            0x3
#define RXM1SIDH_SID6_address                    0xF1C
#define RXM1SIDH_SID6_position                   0x3
#define RXM1SIDH_SID6_size                       0x1
#define RXM1SIDH_SID6_value_mask                 0x8
#define RXM1SIDH_SID6_clear_mask                 0xF7

#define RXM1SID7                                 0x4
#define RXM1SID7_address                         0xF1C
#define RXM1SID7_position                        0x4
#define RXM1SID7_size                            0x1
#define RXM1SID7_value_mask                      0x10
#define RXM1SID7_clear_mask                      0xEF

#define RXM1SIDH_SID7                            0x4
#define RXM1SIDH_SID7_address                    0xF1C
#define RXM1SIDH_SID7_position                   0x4
#define RXM1SIDH_SID7_size                       0x1
#define RXM1SIDH_SID7_value_mask                 0x10
#define RXM1SIDH_SID7_clear_mask                 0xEF

#define RXM1SIDH_SID8                            0x5
#define RXM1SIDH_SID8_address                    0xF1C
#define RXM1SIDH_SID8_position                   0x5
#define RXM1SIDH_SID8_size                       0x1
#define RXM1SIDH_SID8_value_mask                 0x20
#define RXM1SIDH_SID8_clear_mask                 0xDF

#define RXM1SID8                                 0x5
#define RXM1SID8_address                         0xF1C
#define RXM1SID8_position                        0x5
#define RXM1SID8_size                            0x1
#define RXM1SID8_value_mask                      0x20
#define RXM1SID8_clear_mask                      0xDF

#define RXM1SID9                                 0x6
#define RXM1SID9_address                         0xF1C
#define RXM1SID9_position                        0x6
#define RXM1SID9_size                            0x1
#define RXM1SID9_value_mask                      0x40
#define RXM1SID9_clear_mask                      0xBF

#define RXM1SIDH_SID9                            0x6
#define RXM1SIDH_SID9_address                    0xF1C
#define RXM1SIDH_SID9_position                   0x6
#define RXM1SIDH_SID9_size                       0x1
#define RXM1SIDH_SID9_value_mask                 0x40
#define RXM1SIDH_SID9_clear_mask                 0xBF

#define RXM1SIDH_SID10                           0x7
#define RXM1SIDH_SID10_address                   0xF1C
#define RXM1SIDH_SID10_position                  0x7
#define RXM1SIDH_SID10_size                      0x1
#define RXM1SIDH_SID10_value_mask                0x80
#define RXM1SIDH_SID10_clear_mask                0x7F

#define RXM1SID10                                0x7
#define RXM1SID10_address                        0xF1C
#define RXM1SID10_position                       0x7
#define RXM1SID10_size                           0x1
#define RXM1SID10_value_mask                     0x80
#define RXM1SID10_clear_mask                     0x7F


/*-----------------------------------------------------------------------------#
| RXM1SIDL                                                               0xF1D |
#------------------------------------------------------------------------------#
| RXM1SID2 | RXM1SID1 | RXM1SID0 | - | - | - | RXM1SIDL_EID17 | RXM1SIDL_EID16 |
#------------------------------------------------------------------------------#
| 7        | 6        | 5        | 4 | 3 | 2 | 1              | 0              |
#-----------------------------------------------------------------------------*/

#define RXM1SIDL                                 0x0
#define RXM1SIDL_address                         0xF1D
#define RXM1SIDL_position                        0x0
#define RXM1SIDL_size                            0x8
#define RXM1SIDL_value_mask                      0xFF
#define RXM1SIDL_clear_mask                      0x0

#define RXM1SIDL_EID16                           0x0
#define RXM1SIDL_EID16_address                   0xF1D
#define RXM1SIDL_EID16_position                  0x0
#define RXM1SIDL_EID16_size                      0x1
#define RXM1SIDL_EID16_value_mask                0x1
#define RXM1SIDL_EID16_clear_mask                0xFE

#define RXM1EID16                                0x0
#define RXM1EID16_address                        0xF1D
#define RXM1EID16_position                       0x0
#define RXM1EID16_size                           0x1
#define RXM1EID16_value_mask                     0x1
#define RXM1EID16_clear_mask                     0xFE

#define RXM1SIDL_EID17                           0x1
#define RXM1SIDL_EID17_address                   0xF1D
#define RXM1SIDL_EID17_position                  0x1
#define RXM1SIDL_EID17_size                      0x1
#define RXM1SIDL_EID17_value_mask                0x2
#define RXM1SIDL_EID17_clear_mask                0xFD

#define RXM1EID17                                0x1
#define RXM1EID17_address                        0xF1D
#define RXM1EID17_position                       0x1
#define RXM1EID17_size                           0x1
#define RXM1EID17_value_mask                     0x2
#define RXM1EID17_clear_mask                     0xFD

#define RXM1SID0                                 0x5
#define RXM1SID0_address                         0xF1D
#define RXM1SID0_position                        0x5
#define RXM1SID0_size                            0x1
#define RXM1SID0_value_mask                      0x20
#define RXM1SID0_clear_mask                      0xDF

#define RXM1SIDL_SID0                            0x5
#define RXM1SIDL_SID0_address                    0xF1D
#define RXM1SIDL_SID0_position                   0x5
#define RXM1SIDL_SID0_size                       0x1
#define RXM1SIDL_SID0_value_mask                 0x20
#define RXM1SIDL_SID0_clear_mask                 0xDF

#define RXM1SID1                                 0x6
#define RXM1SID1_address                         0xF1D
#define RXM1SID1_position                        0x6
#define RXM1SID1_size                            0x1
#define RXM1SID1_value_mask                      0x40
#define RXM1SID1_clear_mask                      0xBF

#define RXM1SIDL_SID1                            0x6
#define RXM1SIDL_SID1_address                    0xF1D
#define RXM1SIDL_SID1_position                   0x6
#define RXM1SIDL_SID1_size                       0x1
#define RXM1SIDL_SID1_value_mask                 0x40
#define RXM1SIDL_SID1_clear_mask                 0xBF

#define RXM1SID2                                 0x7
#define RXM1SID2_address                         0xF1D
#define RXM1SID2_position                        0x7
#define RXM1SID2_size                            0x1
#define RXM1SID2_value_mask                      0x80
#define RXM1SID2_clear_mask                      0x7F

#define RXM1SIDL_SID2                            0x7
#define RXM1SIDL_SID2_address                    0xF1D
#define RXM1SIDL_SID2_position                   0x7
#define RXM1SIDL_SID2_size                       0x1
#define RXM1SIDL_SID2_value_mask                 0x80
#define RXM1SIDL_SID2_clear_mask                 0x7F


/*---------------------------------------------------------------------------------------------------------------------#
| RXM1EIDH                                                                                                       0xF1E |
#----------------------------------------------------------------------------------------------------------------------#
| RXM1EIDH_EID15 | RXM1EIDH_EID14 | RXM1EID13 | RXM1EIDH_EID12 | RXM1EIDH_EID11 | RXM1EIDH_EID10 | RXM1EID9 | RXM1EID8 |
#----------------------------------------------------------------------------------------------------------------------#
| 7              | 6              | 5         | 4              | 3              | 2              | 1        | 0        |
#---------------------------------------------------------------------------------------------------------------------*/

#define RXM1EIDH                                 0x0
#define RXM1EIDH_address                         0xF1E
#define RXM1EIDH_position                        0x0
#define RXM1EIDH_size                            0x8
#define RXM1EIDH_value_mask                      0xFF
#define RXM1EIDH_clear_mask                      0x0

#define RXM1EID8                                 0x0
#define RXM1EID8_address                         0xF1E
#define RXM1EID8_position                        0x0
#define RXM1EID8_size                            0x1
#define RXM1EID8_value_mask                      0x1
#define RXM1EID8_clear_mask                      0xFE

#define RXM1EIDH_EID8                            0x0
#define RXM1EIDH_EID8_address                    0xF1E
#define RXM1EIDH_EID8_position                   0x0
#define RXM1EIDH_EID8_size                       0x1
#define RXM1EIDH_EID8_value_mask                 0x1
#define RXM1EIDH_EID8_clear_mask                 0xFE

#define RXM1EID9                                 0x1
#define RXM1EID9_address                         0xF1E
#define RXM1EID9_position                        0x1
#define RXM1EID9_size                            0x1
#define RXM1EID9_value_mask                      0x2
#define RXM1EID9_clear_mask                      0xFD

#define RXM1EIDH_EID9                            0x1
#define RXM1EIDH_EID9_address                    0xF1E
#define RXM1EIDH_EID9_position                   0x1
#define RXM1EIDH_EID9_size                       0x1
#define RXM1EIDH_EID9_value_mask                 0x2
#define RXM1EIDH_EID9_clear_mask                 0xFD

#define RXM1EIDH_EID10                           0x2
#define RXM1EIDH_EID10_address                   0xF1E
#define RXM1EIDH_EID10_position                  0x2
#define RXM1EIDH_EID10_size                      0x1
#define RXM1EIDH_EID10_value_mask                0x4
#define RXM1EIDH_EID10_clear_mask                0xFB

#define RXM1EID10                                0x2
#define RXM1EID10_address                        0xF1E
#define RXM1EID10_position                       0x2
#define RXM1EID10_size                           0x1
#define RXM1EID10_value_mask                     0x4
#define RXM1EID10_clear_mask                     0xFB

#define RXM1EIDH_EID11                           0x3
#define RXM1EIDH_EID11_address                   0xF1E
#define RXM1EIDH_EID11_position                  0x3
#define RXM1EIDH_EID11_size                      0x1
#define RXM1EIDH_EID11_value_mask                0x8
#define RXM1EIDH_EID11_clear_mask                0xF7

#define RXM1EID11                                0x3
#define RXM1EID11_address                        0xF1E
#define RXM1EID11_position                       0x3
#define RXM1EID11_size                           0x1
#define RXM1EID11_value_mask                     0x8
#define RXM1EID11_clear_mask                     0xF7

#define RXM1EIDH_EID12                           0x4
#define RXM1EIDH_EID12_address                   0xF1E
#define RXM1EIDH_EID12_position                  0x4
#define RXM1EIDH_EID12_size                      0x1
#define RXM1EIDH_EID12_value_mask                0x10
#define RXM1EIDH_EID12_clear_mask                0xEF

#define RXM1EID12                                0x4
#define RXM1EID12_address                        0xF1E
#define RXM1EID12_position                       0x4
#define RXM1EID12_size                           0x1
#define RXM1EID12_value_mask                     0x10
#define RXM1EID12_clear_mask                     0xEF

#define RXM1EIDH_EID13                           0x5
#define RXM1EIDH_EID13_address                   0xF1E
#define RXM1EIDH_EID13_position                  0x5
#define RXM1EIDH_EID13_size                      0x1
#define RXM1EIDH_EID13_value_mask                0x20
#define RXM1EIDH_EID13_clear_mask                0xDF

#define RXM1EID13                                0x5
#define RXM1EID13_address                        0xF1E
#define RXM1EID13_position                       0x5
#define RXM1EID13_size                           0x1
#define RXM1EID13_value_mask                     0x20
#define RXM1EID13_clear_mask                     0xDF

#define RXM1EIDH_EID14                           0x6
#define RXM1EIDH_EID14_address                   0xF1E
#define RXM1EIDH_EID14_position                  0x6
#define RXM1EIDH_EID14_size                      0x1
#define RXM1EIDH_EID14_value_mask                0x40
#define RXM1EIDH_EID14_clear_mask                0xBF

#define RXM1EID14                                0x6
#define RXM1EID14_address                        0xF1E
#define RXM1EID14_position                       0x6
#define RXM1EID14_size                           0x1
#define RXM1EID14_value_mask                     0x40
#define RXM1EID14_clear_mask                     0xBF

#define RXM1EIDH_EID15                           0x7
#define RXM1EIDH_EID15_address                   0xF1E
#define RXM1EIDH_EID15_position                  0x7
#define RXM1EIDH_EID15_size                      0x1
#define RXM1EIDH_EID15_value_mask                0x80
#define RXM1EIDH_EID15_clear_mask                0x7F

#define RXM1EID15                                0x7
#define RXM1EID15_address                        0xF1E
#define RXM1EID15_position                       0x7
#define RXM1EID15_size                           0x1
#define RXM1EID15_value_mask                     0x80
#define RXM1EID15_clear_mask                     0x7F


/*--------------------------------------------------------------------------------------#
| RXM1EIDL                                                                        0xF1F |
#---------------------------------------------------------------------------------------#
| RXM1EID7 | RXM1EID6 | RXM1EID5 | RXM1EID4 | RXM1EID3 | RXM1EID2 | RXM1EID1 | RXM1EID0 |
#---------------------------------------------------------------------------------------#
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
#--------------------------------------------------------------------------------------*/

#define RXM1EIDL                                 0x0
#define RXM1EIDL_address                         0xF1F
#define RXM1EIDL_position                        0x0
#define RXM1EIDL_size                            0x8
#define RXM1EIDL_value_mask                      0xFF
#define RXM1EIDL_clear_mask                      0x0

#define RXM1EID0                                 0x0
#define RXM1EID0_address                         0xF1F
#define RXM1EID0_position                        0x0
#define RXM1EID0_size                            0x1
#define RXM1EID0_value_mask                      0x1
#define RXM1EID0_clear_mask                      0xFE

#define RXM1EIDL_EID0                            0x0
#define RXM1EIDL_EID0_address                    0xF1F
#define RXM1EIDL_EID0_position                   0x0
#define RXM1EIDL_EID0_size                       0x1
#define RXM1EIDL_EID0_value_mask                 0x1
#define RXM1EIDL_EID0_clear_mask                 0xFE

#define RXM1EID1                                 0x1
#define RXM1EID1_address                         0xF1F
#define RXM1EID1_position                        0x1
#define RXM1EID1_size                            0x1
#define RXM1EID1_value_mask                      0x2
#define RXM1EID1_clear_mask                      0xFD

#define RXM1EIDL_EID1                            0x1
#define RXM1EIDL_EID1_address                    0xF1F
#define RXM1EIDL_EID1_position                   0x1
#define RXM1EIDL_EID1_size                       0x1
#define RXM1EIDL_EID1_value_mask                 0x2
#define RXM1EIDL_EID1_clear_mask                 0xFD

#define RXM1EID2                                 0x2
#define RXM1EID2_address                         0xF1F
#define RXM1EID2_position                        0x2
#define RXM1EID2_size                            0x1
#define RXM1EID2_value_mask                      0x4
#define RXM1EID2_clear_mask                      0xFB

#define RXM1EIDL_EID2                            0x2
#define RXM1EIDL_EID2_address                    0xF1F
#define RXM1EIDL_EID2_position                   0x2
#define RXM1EIDL_EID2_size                       0x1
#define RXM1EIDL_EID2_value_mask                 0x4
#define RXM1EIDL_EID2_clear_mask                 0xFB

#define RXM1EID3                                 0x3
#define RXM1EID3_address                         0xF1F
#define RXM1EID3_position                        0x3
#define RXM1EID3_size                            0x1
#define RXM1EID3_value_mask                      0x8
#define RXM1EID3_clear_mask                      0xF7

#define RXM1EIDL_EID3                            0x3
#define RXM1EIDL_EID3_address                    0xF1F
#define RXM1EIDL_EID3_position                   0x3
#define RXM1EIDL_EID3_size                       0x1
#define RXM1EIDL_EID3_value_mask                 0x8
#define RXM1EIDL_EID3_clear_mask                 0xF7

#define RXM1EIDL_EID4                            0x4
#define RXM1EIDL_EID4_address                    0xF1F
#define RXM1EIDL_EID4_position                   0x4
#define RXM1EIDL_EID4_size                       0x1
#define RXM1EIDL_EID4_value_mask                 0x10
#define RXM1EIDL_EID4_clear_mask                 0xEF

#define RXM1EID4                                 0x4
#define RXM1EID4_address                         0xF1F
#define RXM1EID4_position                        0x4
#define RXM1EID4_size                            0x1
#define RXM1EID4_value_mask                      0x10
#define RXM1EID4_clear_mask                      0xEF

#define RXM1EIDL_EID5                            0x5
#define RXM1EIDL_EID5_address                    0xF1F
#define RXM1EIDL_EID5_position                   0x5
#define RXM1EIDL_EID5_size                       0x1
#define RXM1EIDL_EID5_value_mask                 0x20
#define RXM1EIDL_EID5_clear_mask                 0xDF

#define RXM1EID5                                 0x5
#define RXM1EID5_address                         0xF1F
#define RXM1EID5_position                        0x5
#define RXM1EID5_size                            0x1
#define RXM1EID5_value_mask                      0x20
#define RXM1EID5_clear_mask                      0xDF

#define RXM1EID6                                 0x6
#define RXM1EID6_address                         0xF1F
#define RXM1EID6_position                        0x6
#define RXM1EID6_size                            0x1
#define RXM1EID6_value_mask                      0x40
#define RXM1EID6_clear_mask                      0xBF

#define RXM1EIDL_EID6                            0x6
#define RXM1EIDL_EID6_address                    0xF1F
#define RXM1EIDL_EID6_position                   0x6
#define RXM1EIDL_EID6_size                       0x1
#define RXM1EIDL_EID6_value_mask                 0x40
#define RXM1EIDL_EID6_clear_mask                 0xBF

#define RXM1EID7                                 0x7
#define RXM1EID7_address                         0xF1F
#define RXM1EID7_position                        0x7
#define RXM1EID7_size                            0x1
#define RXM1EID7_value_mask                      0x80
#define RXM1EID7_clear_mask                      0x7F

#define RXM1EIDL_EID7                            0x7
#define RXM1EIDL_EID7_address                    0xF1F
#define RXM1EIDL_EID7_position                   0x7
#define RXM1EIDL_EID7_size                       0x1
#define RXM1EIDL_EID7_value_mask                 0x80
#define RXM1EIDL_EID7_clear_mask                 0x7F


/*---------------------------------------------------------------------------------#
| TXB2CON                                                                    0xF20 |
#----------------------------------------------------------------------------------#
| - | TXB2ABT | TXB2CON_TXLARB | TXB2ERR | TXB2CON_TXREQ | - | TXB2PRI1 | TXB2PRI0 |
#----------------------------------------------------------------------------------#
| 7 | 6       | 5              | 4       | 3             | 2 | 1        | 0        |
#---------------------------------------------------------------------------------*/

#define TXB2CON                                  0x0
#define TXB2CON_address                          0xF20
#define TXB2CON_position                         0x0
#define TXB2CON_size                             0x8
#define TXB2CON_value_mask                       0xFF
#define TXB2CON_clear_mask                       0x0

#define TXB2PRI0                                 0x0
#define TXB2PRI0_address                         0xF20
#define TXB2PRI0_position                        0x0
#define TXB2PRI0_size                            0x1
#define TXB2PRI0_value_mask                      0x1
#define TXB2PRI0_clear_mask                      0xFE

#define TXB2CON_TXPRI0                           0x0
#define TXB2CON_TXPRI0_address                   0xF20
#define TXB2CON_TXPRI0_position                  0x0
#define TXB2CON_TXPRI0_size                      0x1
#define TXB2CON_TXPRI0_value_mask                0x1
#define TXB2CON_TXPRI0_clear_mask                0xFE

#define TXB2PRI1                                 0x1
#define TXB2PRI1_address                         0xF20
#define TXB2PRI1_position                        0x1
#define TXB2PRI1_size                            0x1
#define TXB2PRI1_value_mask                      0x2
#define TXB2PRI1_clear_mask                      0xFD

#define TXB2CON_TXPRI1                           0x1
#define TXB2CON_TXPRI1_address                   0xF20
#define TXB2CON_TXPRI1_position                  0x1
#define TXB2CON_TXPRI1_size                      0x1
#define TXB2CON_TXPRI1_value_mask                0x2
#define TXB2CON_TXPRI1_clear_mask                0xFD

#define TXB2REQ                                  0x3
#define TXB2REQ_address                          0xF20
#define TXB2REQ_position                         0x3
#define TXB2REQ_size                             0x1
#define TXB2REQ_value_mask                       0x8
#define TXB2REQ_clear_mask                       0xF7

#define TXB2CON_TXREQ                            0x3
#define TXB2CON_TXREQ_address                    0xF20
#define TXB2CON_TXREQ_position                   0x3
#define TXB2CON_TXREQ_size                       0x1
#define TXB2CON_TXREQ_value_mask                 0x8
#define TXB2CON_TXREQ_clear_mask                 0xF7

#define TXB2ERR                                  0x4
#define TXB2ERR_address                          0xF20
#define TXB2ERR_position                         0x4
#define TXB2ERR_size                             0x1
#define TXB2ERR_value_mask                       0x10
#define TXB2ERR_clear_mask                       0xEF

#define TXB2CON_TXERR                            0x4
#define TXB2CON_TXERR_address                    0xF20
#define TXB2CON_TXERR_position                   0x4
#define TXB2CON_TXERR_size                       0x1
#define TXB2CON_TXERR_value_mask                 0x10
#define TXB2CON_TXERR_clear_mask                 0xEF

#define TXB2CON_TXLARB                           0x5
#define TXB2CON_TXLARB_address                   0xF20
#define TXB2CON_TXLARB_position                  0x5
#define TXB2CON_TXLARB_size                      0x1
#define TXB2CON_TXLARB_value_mask                0x20
#define TXB2CON_TXLARB_clear_mask                0xDF

#define TXB2LARB                                 0x5
#define TXB2LARB_address                         0xF20
#define TXB2LARB_position                        0x5
#define TXB2LARB_size                            0x1
#define TXB2LARB_value_mask                      0x20
#define TXB2LARB_clear_mask                      0xDF

#define TXB2ABT                                  0x6
#define TXB2ABT_address                          0xF20
#define TXB2ABT_position                         0x6
#define TXB2ABT_size                             0x1
#define TXB2ABT_value_mask                       0x40
#define TXB2ABT_clear_mask                       0xBF

#define TXB2CON_TXABT                            0x6
#define TXB2CON_TXABT_address                    0xF20
#define TXB2CON_TXABT_position                   0x6
#define TXB2CON_TXABT_size                       0x1
#define TXB2CON_TXABT_value_mask                 0x40
#define TXB2CON_TXABT_clear_mask                 0xBF


/*-------------------------------------------------------------------------------------------------------------------------------#
| TXB2SIDH                                                                                                                 0xF21 |
#--------------------------------------------------------------------------------------------------------------------------------#
| TXB2SIDH_SID10 | TXB2SIDH_SID9 | TXB2SIDH_SID8 | TXB2SIDH_SID7 | TXB2SIDH_SID6 | TXB2SIDH_SID5 | TXB2SIDH_SID4 | TXB2SIDH_SID3 |
#--------------------------------------------------------------------------------------------------------------------------------#
| 7              | 6             | 5             | 4             | 3             | 2             | 1             | 0             |
#-------------------------------------------------------------------------------------------------------------------------------*/

#define TXB2SIDH                                 0x0
#define TXB2SIDH_address                         0xF21
#define TXB2SIDH_position                        0x0
#define TXB2SIDH_size                            0x8
#define TXB2SIDH_value_mask                      0xFF
#define TXB2SIDH_clear_mask                      0x0

#define TXB2SID3                                 0x0
#define TXB2SID3_address                         0xF21
#define TXB2SID3_position                        0x0
#define TXB2SID3_size                            0x1
#define TXB2SID3_value_mask                      0x1
#define TXB2SID3_clear_mask                      0xFE

#define TXB2SIDH_SID3                            0x0
#define TXB2SIDH_SID3_address                    0xF21
#define TXB2SIDH_SID3_position                   0x0
#define TXB2SIDH_SID3_size                       0x1
#define TXB2SIDH_SID3_value_mask                 0x1
#define TXB2SIDH_SID3_clear_mask                 0xFE

#define TXB2SID4                                 0x1
#define TXB2SID4_address                         0xF21
#define TXB2SID4_position                        0x1
#define TXB2SID4_size                            0x1
#define TXB2SID4_value_mask                      0x2
#define TXB2SID4_clear_mask                      0xFD

#define TXB2SIDH_SID4                            0x1
#define TXB2SIDH_SID4_address                    0xF21
#define TXB2SIDH_SID4_position                   0x1
#define TXB2SIDH_SID4_size                       0x1
#define TXB2SIDH_SID4_value_mask                 0x2
#define TXB2SIDH_SID4_clear_mask                 0xFD

#define TXB2SID5                                 0x2
#define TXB2SID5_address                         0xF21
#define TXB2SID5_position                        0x2
#define TXB2SID5_size                            0x1
#define TXB2SID5_value_mask                      0x4
#define TXB2SID5_clear_mask                      0xFB

#define TXB2SIDH_SID5                            0x2
#define TXB2SIDH_SID5_address                    0xF21
#define TXB2SIDH_SID5_position                   0x2
#define TXB2SIDH_SID5_size                       0x1
#define TXB2SIDH_SID5_value_mask                 0x4
#define TXB2SIDH_SID5_clear_mask                 0xFB

#define TXB2SID6                                 0x3
#define TXB2SID6_address                         0xF21
#define TXB2SID6_position                        0x3
#define TXB2SID6_size                            0x1
#define TXB2SID6_value_mask                      0x8
#define TXB2SID6_clear_mask                      0xF7

#define TXB2SIDH_SID6                            0x3
#define TXB2SIDH_SID6_address                    0xF21
#define TXB2SIDH_SID6_position                   0x3
#define TXB2SIDH_SID6_size                       0x1
#define TXB2SIDH_SID6_value_mask                 0x8
#define TXB2SIDH_SID6_clear_mask                 0xF7

#define TXB2SID7                                 0x4
#define TXB2SID7_address                         0xF21
#define TXB2SID7_position                        0x4
#define TXB2SID7_size                            0x1
#define TXB2SID7_value_mask                      0x10
#define TXB2SID7_clear_mask                      0xEF

#define TXB2SIDH_SID7                            0x4
#define TXB2SIDH_SID7_address                    0xF21
#define TXB2SIDH_SID7_position                   0x4
#define TXB2SIDH_SID7_size                       0x1
#define TXB2SIDH_SID7_value_mask                 0x10
#define TXB2SIDH_SID7_clear_mask                 0xEF

#define TXB2SID8                                 0x5
#define TXB2SID8_address                         0xF21
#define TXB2SID8_position                        0x5
#define TXB2SID8_size                            0x1
#define TXB2SID8_value_mask                      0x20
#define TXB2SID8_clear_mask                      0xDF

#define TXB2SIDH_SID8                            0x5
#define TXB2SIDH_SID8_address                    0xF21
#define TXB2SIDH_SID8_position                   0x5
#define TXB2SIDH_SID8_size                       0x1
#define TXB2SIDH_SID8_value_mask                 0x20
#define TXB2SIDH_SID8_clear_mask                 0xDF

#define TXB2SID9                                 0x6
#define TXB2SID9_address                         0xF21
#define TXB2SID9_position                        0x6
#define TXB2SID9_size                            0x1
#define TXB2SID9_value_mask                      0x40
#define TXB2SID9_clear_mask                      0xBF

#define TXB2SIDH_SID9                            0x6
#define TXB2SIDH_SID9_address                    0xF21
#define TXB2SIDH_SID9_position                   0x6
#define TXB2SIDH_SID9_size                       0x1
#define TXB2SIDH_SID9_value_mask                 0x40
#define TXB2SIDH_SID9_clear_mask                 0xBF

#define TXB2SIDH_SID10                           0x7
#define TXB2SIDH_SID10_address                   0xF21
#define TXB2SIDH_SID10_position                  0x7
#define TXB2SIDH_SID10_size                      0x1
#define TXB2SIDH_SID10_value_mask                0x80
#define TXB2SIDH_SID10_clear_mask                0x7F

#define TXB2SID10                                0x7
#define TXB2SID10_address                        0xF21
#define TXB2SID10_position                       0x7
#define TXB2SID10_size                           0x1
#define TXB2SID10_value_mask                     0x80
#define TXB2SID10_clear_mask                     0x7F


/*----------------------------------------------------------------------------------------------------#
| TXB2SIDL                                                                                      0xF22 |
#-----------------------------------------------------------------------------------------------------#
| TXB2SIDL_SID2 | TXB2SIDL_SID1 | TXB2SIDL_SID0 | - | TXB2EXIDE | - | TXB2SIDL_EID17 | TXB2SIDL_EID16 |
#-----------------------------------------------------------------------------------------------------#
| 7             | 6             | 5             | 4 | 3         | 2 | 1              | 0              |
#----------------------------------------------------------------------------------------------------*/

#define TXB2SIDL                                 0x0
#define TXB2SIDL_address                         0xF22
#define TXB2SIDL_position                        0x0
#define TXB2SIDL_size                            0x8
#define TXB2SIDL_value_mask                      0xFF
#define TXB2SIDL_clear_mask                      0x0

#define TXB2SIDL_EID16                           0x0
#define TXB2SIDL_EID16_address                   0xF22
#define TXB2SIDL_EID16_position                  0x0
#define TXB2SIDL_EID16_size                      0x1
#define TXB2SIDL_EID16_value_mask                0x1
#define TXB2SIDL_EID16_clear_mask                0xFE

#define TXB2EID16                                0x0
#define TXB2EID16_address                        0xF22
#define TXB2EID16_position                       0x0
#define TXB2EID16_size                           0x1
#define TXB2EID16_value_mask                     0x1
#define TXB2EID16_clear_mask                     0xFE

#define TXB2SIDL_EID17                           0x1
#define TXB2SIDL_EID17_address                   0xF22
#define TXB2SIDL_EID17_position                  0x1
#define TXB2SIDL_EID17_size                      0x1
#define TXB2SIDL_EID17_value_mask                0x2
#define TXB2SIDL_EID17_clear_mask                0xFD

#define TXB2EID17                                0x1
#define TXB2EID17_address                        0xF22
#define TXB2EID17_position                       0x1
#define TXB2EID17_size                           0x1
#define TXB2EID17_value_mask                     0x2
#define TXB2EID17_clear_mask                     0xFD

#define TXB2EXIDE                                0x3
#define TXB2EXIDE_address                        0xF22
#define TXB2EXIDE_position                       0x3
#define TXB2EXIDE_size                           0x1
#define TXB2EXIDE_value_mask                     0x8
#define TXB2EXIDE_clear_mask                     0xF7

#define TXB2SIDL_EXIDE                           0x3
#define TXB2SIDL_EXIDE_address                   0xF22
#define TXB2SIDL_EXIDE_position                  0x3
#define TXB2SIDL_EXIDE_size                      0x1
#define TXB2SIDL_EXIDE_value_mask                0x8
#define TXB2SIDL_EXIDE_clear_mask                0xF7

#define TXB2SIDL_SID0                            0x5
#define TXB2SIDL_SID0_address                    0xF22
#define TXB2SIDL_SID0_position                   0x5
#define TXB2SIDL_SID0_size                       0x1
#define TXB2SIDL_SID0_value_mask                 0x20
#define TXB2SIDL_SID0_clear_mask                 0xDF

#define TXB2SID0                                 0x5
#define TXB2SID0_address                         0xF22
#define TXB2SID0_position                        0x5
#define TXB2SID0_size                            0x1
#define TXB2SID0_value_mask                      0x20
#define TXB2SID0_clear_mask                      0xDF

#define TXB2SIDL_SID1                            0x6
#define TXB2SIDL_SID1_address                    0xF22
#define TXB2SIDL_SID1_position                   0x6
#define TXB2SIDL_SID1_size                       0x1
#define TXB2SIDL_SID1_value_mask                 0x40
#define TXB2SIDL_SID1_clear_mask                 0xBF

#define TXB2SID1                                 0x6
#define TXB2SID1_address                         0xF22
#define TXB2SID1_position                        0x6
#define TXB2SID1_size                            0x1
#define TXB2SID1_value_mask                      0x40
#define TXB2SID1_clear_mask                      0xBF

#define TXB2SIDL_SID2                            0x7
#define TXB2SIDL_SID2_address                    0xF22
#define TXB2SIDL_SID2_position                   0x7
#define TXB2SIDL_SID2_size                       0x1
#define TXB2SIDL_SID2_value_mask                 0x80
#define TXB2SIDL_SID2_clear_mask                 0x7F

#define TXB2SID2                                 0x7
#define TXB2SID2_address                         0xF22
#define TXB2SID2_position                        0x7
#define TXB2SID2_size                            0x1
#define TXB2SID2_value_mask                      0x80
#define TXB2SID2_clear_mask                      0x7F


/*------------------------------------------------------------------------------------------------------#
| TXB2EIDH                                                                                        0xF23 |
#-------------------------------------------------------------------------------------------------------#
| TXB2EID15 | TXB2EID14 | TXB2EID13 | TXB2EID12 | TXB2EID11 | TXB2EID10 | TXB2EIDH_EID9 | TXB2EIDH_EID8 |
#-------------------------------------------------------------------------------------------------------#
| 7         | 6         | 5         | 4         | 3         | 2         | 1             | 0             |
#------------------------------------------------------------------------------------------------------*/

#define TXB2EIDH                                 0x0
#define TXB2EIDH_address                         0xF23
#define TXB2EIDH_position                        0x0
#define TXB2EIDH_size                            0x8
#define TXB2EIDH_value_mask                      0xFF
#define TXB2EIDH_clear_mask                      0x0

#define TXB2EIDH_EID8                            0x0
#define TXB2EIDH_EID8_address                    0xF23
#define TXB2EIDH_EID8_position                   0x0
#define TXB2EIDH_EID8_size                       0x1
#define TXB2EIDH_EID8_value_mask                 0x1
#define TXB2EIDH_EID8_clear_mask                 0xFE

#define TXB2EID8                                 0x0
#define TXB2EID8_address                         0xF23
#define TXB2EID8_position                        0x0
#define TXB2EID8_size                            0x1
#define TXB2EID8_value_mask                      0x1
#define TXB2EID8_clear_mask                      0xFE

#define TXB2EIDH_EID9                            0x1
#define TXB2EIDH_EID9_address                    0xF23
#define TXB2EIDH_EID9_position                   0x1
#define TXB2EIDH_EID9_size                       0x1
#define TXB2EIDH_EID9_value_mask                 0x2
#define TXB2EIDH_EID9_clear_mask                 0xFD

#define TXB2EID9                                 0x1
#define TXB2EID9_address                         0xF23
#define TXB2EID9_position                        0x1
#define TXB2EID9_size                            0x1
#define TXB2EID9_value_mask                      0x2
#define TXB2EID9_clear_mask                      0xFD

#define TXB2EIDH_EID10                           0x2
#define TXB2EIDH_EID10_address                   0xF23
#define TXB2EIDH_EID10_position                  0x2
#define TXB2EIDH_EID10_size                      0x1
#define TXB2EIDH_EID10_value_mask                0x4
#define TXB2EIDH_EID10_clear_mask                0xFB

#define TXB2EID10                                0x2
#define TXB2EID10_address                        0xF23
#define TXB2EID10_position                       0x2
#define TXB2EID10_size                           0x1
#define TXB2EID10_value_mask                     0x4
#define TXB2EID10_clear_mask                     0xFB

#define TXB2EIDH_EID11                           0x3
#define TXB2EIDH_EID11_address                   0xF23
#define TXB2EIDH_EID11_position                  0x3
#define TXB2EIDH_EID11_size                      0x1
#define TXB2EIDH_EID11_value_mask                0x8
#define TXB2EIDH_EID11_clear_mask                0xF7

#define TXB2EID11                                0x3
#define TXB2EID11_address                        0xF23
#define TXB2EID11_position                       0x3
#define TXB2EID11_size                           0x1
#define TXB2EID11_value_mask                     0x8
#define TXB2EID11_clear_mask                     0xF7

#define TXB2EIDH_EID12                           0x4
#define TXB2EIDH_EID12_address                   0xF23
#define TXB2EIDH_EID12_position                  0x4
#define TXB2EIDH_EID12_size                      0x1
#define TXB2EIDH_EID12_value_mask                0x10
#define TXB2EIDH_EID12_clear_mask                0xEF

#define TXB2EID12                                0x4
#define TXB2EID12_address                        0xF23
#define TXB2EID12_position                       0x4
#define TXB2EID12_size                           0x1
#define TXB2EID12_value_mask                     0x10
#define TXB2EID12_clear_mask                     0xEF

#define TXB2EIDH_EID13                           0x5
#define TXB2EIDH_EID13_address                   0xF23
#define TXB2EIDH_EID13_position                  0x5
#define TXB2EIDH_EID13_size                      0x1
#define TXB2EIDH_EID13_value_mask                0x20
#define TXB2EIDH_EID13_clear_mask                0xDF

#define TXB2EID13                                0x5
#define TXB2EID13_address                        0xF23
#define TXB2EID13_position                       0x5
#define TXB2EID13_size                           0x1
#define TXB2EID13_value_mask                     0x20
#define TXB2EID13_clear_mask                     0xDF

#define TXB2EIDH_EID14                           0x6
#define TXB2EIDH_EID14_address                   0xF23
#define TXB2EIDH_EID14_position                  0x6
#define TXB2EIDH_EID14_size                      0x1
#define TXB2EIDH_EID14_value_mask                0x40
#define TXB2EIDH_EID14_clear_mask                0xBF

#define TXB2EID14                                0x6
#define TXB2EID14_address                        0xF23
#define TXB2EID14_position                       0x6
#define TXB2EID14_size                           0x1
#define TXB2EID14_value_mask                     0x40
#define TXB2EID14_clear_mask                     0xBF

#define TXB2EIDH_EID15                           0x7
#define TXB2EIDH_EID15_address                   0xF23
#define TXB2EIDH_EID15_position                  0x7
#define TXB2EIDH_EID15_size                      0x1
#define TXB2EIDH_EID15_value_mask                0x80
#define TXB2EIDH_EID15_clear_mask                0x7F

#define TXB2EID15                                0x7
#define TXB2EID15_address                        0xF23
#define TXB2EID15_position                       0x7
#define TXB2EID15_size                           0x1
#define TXB2EID15_value_mask                     0x80
#define TXB2EID15_clear_mask                     0x7F


/*------------------------------------------------------------------------------------------------------------------------------#
| TXB2EIDL                                                                                                                0xF24 |
#-------------------------------------------------------------------------------------------------------------------------------#
| TXB2EIDL_EID7 | TXB2EIDL_EID6 | TXB2EIDL_EID5 | TXB2EIDL_EID4 | TXB2EIDL_EID3 | TXB2EIDL_EID2 | TXB2EIDL_EID1 | TXB2EIDL_EID0 |
#-------------------------------------------------------------------------------------------------------------------------------#
| 7             | 6             | 5             | 4             | 3             | 2             | 1             | 0             |
#------------------------------------------------------------------------------------------------------------------------------*/

#define TXB2EIDL                                 0x0
#define TXB2EIDL_address                         0xF24
#define TXB2EIDL_position                        0x0
#define TXB2EIDL_size                            0x8
#define TXB2EIDL_value_mask                      0xFF
#define TXB2EIDL_clear_mask                      0x0

#define TXB2EID0                                 0x0
#define TXB2EID0_address                         0xF24
#define TXB2EID0_position                        0x0
#define TXB2EID0_size                            0x1
#define TXB2EID0_value_mask                      0x1
#define TXB2EID0_clear_mask                      0xFE

#define TXB2EIDL_EID0                            0x0
#define TXB2EIDL_EID0_address                    0xF24
#define TXB2EIDL_EID0_position                   0x0
#define TXB2EIDL_EID0_size                       0x1
#define TXB2EIDL_EID0_value_mask                 0x1
#define TXB2EIDL_EID0_clear_mask                 0xFE

#define TXB2EID1                                 0x1
#define TXB2EID1_address                         0xF24
#define TXB2EID1_position                        0x1
#define TXB2EID1_size                            0x1
#define TXB2EID1_value_mask                      0x2
#define TXB2EID1_clear_mask                      0xFD

#define TXB2EIDL_EID1                            0x1
#define TXB2EIDL_EID1_address                    0xF24
#define TXB2EIDL_EID1_position                   0x1
#define TXB2EIDL_EID1_size                       0x1
#define TXB2EIDL_EID1_value_mask                 0x2
#define TXB2EIDL_EID1_clear_mask                 0xFD

#define TXB2EID2                                 0x2
#define TXB2EID2_address                         0xF24
#define TXB2EID2_position                        0x2
#define TXB2EID2_size                            0x1
#define TXB2EID2_value_mask                      0x4
#define TXB2EID2_clear_mask                      0xFB

#define TXB2EIDL_EID2                            0x2
#define TXB2EIDL_EID2_address                    0xF24
#define TXB2EIDL_EID2_position                   0x2
#define TXB2EIDL_EID2_size                       0x1
#define TXB2EIDL_EID2_value_mask                 0x4
#define TXB2EIDL_EID2_clear_mask                 0xFB

#define TXB2EID3                                 0x3
#define TXB2EID3_address                         0xF24
#define TXB2EID3_position                        0x3
#define TXB2EID3_size                            0x1
#define TXB2EID3_value_mask                      0x8
#define TXB2EID3_clear_mask                      0xF7

#define TXB2EIDL_EID3                            0x3
#define TXB2EIDL_EID3_address                    0xF24
#define TXB2EIDL_EID3_position                   0x3
#define TXB2EIDL_EID3_size                       0x1
#define TXB2EIDL_EID3_value_mask                 0x8
#define TXB2EIDL_EID3_clear_mask                 0xF7

#define TXB2EID4                                 0x4
#define TXB2EID4_address                         0xF24
#define TXB2EID4_position                        0x4
#define TXB2EID4_size                            0x1
#define TXB2EID4_value_mask                      0x10
#define TXB2EID4_clear_mask                      0xEF

#define TXB2EIDL_EID4                            0x4
#define TXB2EIDL_EID4_address                    0xF24
#define TXB2EIDL_EID4_position                   0x4
#define TXB2EIDL_EID4_size                       0x1
#define TXB2EIDL_EID4_value_mask                 0x10
#define TXB2EIDL_EID4_clear_mask                 0xEF

#define TXB2EID5                                 0x5
#define TXB2EID5_address                         0xF24
#define TXB2EID5_position                        0x5
#define TXB2EID5_size                            0x1
#define TXB2EID5_value_mask                      0x20
#define TXB2EID5_clear_mask                      0xDF

#define TXB2EIDL_EID5                            0x5
#define TXB2EIDL_EID5_address                    0xF24
#define TXB2EIDL_EID5_position                   0x5
#define TXB2EIDL_EID5_size                       0x1
#define TXB2EIDL_EID5_value_mask                 0x20
#define TXB2EIDL_EID5_clear_mask                 0xDF

#define TXB2EID6                                 0x6
#define TXB2EID6_address                         0xF24
#define TXB2EID6_position                        0x6
#define TXB2EID6_size                            0x1
#define TXB2EID6_value_mask                      0x40
#define TXB2EID6_clear_mask                      0xBF

#define TXB2EIDL_EID6                            0x6
#define TXB2EIDL_EID6_address                    0xF24
#define TXB2EIDL_EID6_position                   0x6
#define TXB2EIDL_EID6_size                       0x1
#define TXB2EIDL_EID6_value_mask                 0x40
#define TXB2EIDL_EID6_clear_mask                 0xBF

#define TXB2EID7                                 0x7
#define TXB2EID7_address                         0xF24
#define TXB2EID7_position                        0x7
#define TXB2EID7_size                            0x1
#define TXB2EID7_value_mask                      0x80
#define TXB2EID7_clear_mask                      0x7F

#define TXB2EIDL_EID7                            0x7
#define TXB2EIDL_EID7_address                    0xF24
#define TXB2EIDL_EID7_position                   0x7
#define TXB2EIDL_EID7_size                       0x1
#define TXB2EIDL_EID7_value_mask                 0x80
#define TXB2EIDL_EID7_clear_mask                 0x7F


/*----------------------------------------------------------------------#
| TXB2DLC                                                         0xF25 |
#-----------------------------------------------------------------------#
| - | TXB2DLC_TXRTR | - | - | TXB2DLC3 | TXB2DLC2 | TXB2DLC1 | TXB2DLC0 |
#-----------------------------------------------------------------------#
| 7 | 6             | 5 | 4 | 3        | 2        | 1        | 0        |
#----------------------------------------------------------------------*/

#define TXB2DLC                                  0x0
#define TXB2DLC_address                          0xF25
#define TXB2DLC_position                         0x0
#define TXB2DLC_size                             0x8
#define TXB2DLC_value_mask                       0xFF
#define TXB2DLC_clear_mask                       0x0

#define TXB2DLC0                                 0x0
#define TXB2DLC0_address                         0xF25
#define TXB2DLC0_position                        0x0
#define TXB2DLC0_size                            0x1
#define TXB2DLC0_value_mask                      0x1
#define TXB2DLC0_clear_mask                      0xFE

#define TXB2DLC_DLC0                             0x0
#define TXB2DLC_DLC0_address                     0xF25
#define TXB2DLC_DLC0_position                    0x0
#define TXB2DLC_DLC0_size                        0x1
#define TXB2DLC_DLC0_value_mask                  0x1
#define TXB2DLC_DLC0_clear_mask                  0xFE

#define TXB2DLC1                                 0x1
#define TXB2DLC1_address                         0xF25
#define TXB2DLC1_position                        0x1
#define TXB2DLC1_size                            0x1
#define TXB2DLC1_value_mask                      0x2
#define TXB2DLC1_clear_mask                      0xFD

#define TXB2DLC_DLC1                             0x1
#define TXB2DLC_DLC1_address                     0xF25
#define TXB2DLC_DLC1_position                    0x1
#define TXB2DLC_DLC1_size                        0x1
#define TXB2DLC_DLC1_value_mask                  0x2
#define TXB2DLC_DLC1_clear_mask                  0xFD

#define TXB2DLC2                                 0x2
#define TXB2DLC2_address                         0xF25
#define TXB2DLC2_position                        0x2
#define TXB2DLC2_size                            0x1
#define TXB2DLC2_value_mask                      0x4
#define TXB2DLC2_clear_mask                      0xFB

#define TXB2DLC_DLC2                             0x2
#define TXB2DLC_DLC2_address                     0xF25
#define TXB2DLC_DLC2_position                    0x2
#define TXB2DLC_DLC2_size                        0x1
#define TXB2DLC_DLC2_value_mask                  0x4
#define TXB2DLC_DLC2_clear_mask                  0xFB

#define TXB2DLC_DLC3                             0x3
#define TXB2DLC_DLC3_address                     0xF25
#define TXB2DLC_DLC3_position                    0x3
#define TXB2DLC_DLC3_size                        0x1
#define TXB2DLC_DLC3_value_mask                  0x8
#define TXB2DLC_DLC3_clear_mask                  0xF7

#define TXB2DLC3                                 0x3
#define TXB2DLC3_address                         0xF25
#define TXB2DLC3_position                        0x3
#define TXB2DLC3_size                            0x1
#define TXB2DLC3_value_mask                      0x8
#define TXB2DLC3_clear_mask                      0xF7

#define TXB2DLC_TXRTR                            0x6
#define TXB2DLC_TXRTR_address                    0xF25
#define TXB2DLC_TXRTR_position                   0x6
#define TXB2DLC_TXRTR_size                       0x1
#define TXB2DLC_TXRTR_value_mask                 0x40
#define TXB2DLC_TXRTR_clear_mask                 0xBF

#define TXB2RTR                                  0x6
#define TXB2RTR_address                          0xF25
#define TXB2RTR_position                         0x6
#define TXB2RTR_size                             0x1
#define TXB2RTR_value_mask                       0x40
#define TXB2RTR_clear_mask                       0xBF


/*------------------------------------------------------------------------------#
| TXB2D0                                                                  0xF26 |
#-------------------------------------------------------------------------------#
| TXB2D07 | TXB2D06 | TXB2D05 | TXB2D04 | TXB2D03 | TXB2D02 | TXB2D01 | TXB2D00 |
#-------------------------------------------------------------------------------#
| 7       | 6       | 5       | 4       | 3       | 2       | 1       | 0       |
#------------------------------------------------------------------------------*/

#define TXB2D0                                   0x0
#define TXB2D0_address                           0xF26
#define TXB2D0_position                          0x0
#define TXB2D0_size                              0x8
#define TXB2D0_value_mask                        0xFF
#define TXB2D0_clear_mask                        0x0

#define TXB2D00                                  0x0
#define TXB2D00_address                          0xF26
#define TXB2D00_position                         0x0
#define TXB2D00_size                             0x1
#define TXB2D00_value_mask                       0x1
#define TXB2D00_clear_mask                       0xFE

#define TXB2D01                                  0x1
#define TXB2D01_address                          0xF26
#define TXB2D01_position                         0x1
#define TXB2D01_size                             0x1
#define TXB2D01_value_mask                       0x2
#define TXB2D01_clear_mask                       0xFD

#define TXB2D02                                  0x2
#define TXB2D02_address                          0xF26
#define TXB2D02_position                         0x2
#define TXB2D02_size                             0x1
#define TXB2D02_value_mask                       0x4
#define TXB2D02_clear_mask                       0xFB

#define TXB2D03                                  0x3
#define TXB2D03_address                          0xF26
#define TXB2D03_position                         0x3
#define TXB2D03_size                             0x1
#define TXB2D03_value_mask                       0x8
#define TXB2D03_clear_mask                       0xF7

#define TXB2D04                                  0x4
#define TXB2D04_address                          0xF26
#define TXB2D04_position                         0x4
#define TXB2D04_size                             0x1
#define TXB2D04_value_mask                       0x10
#define TXB2D04_clear_mask                       0xEF

#define TXB2D05                                  0x5
#define TXB2D05_address                          0xF26
#define TXB2D05_position                         0x5
#define TXB2D05_size                             0x1
#define TXB2D05_value_mask                       0x20
#define TXB2D05_clear_mask                       0xDF

#define TXB2D06                                  0x6
#define TXB2D06_address                          0xF26
#define TXB2D06_position                         0x6
#define TXB2D06_size                             0x1
#define TXB2D06_value_mask                       0x40
#define TXB2D06_clear_mask                       0xBF

#define TXB2D07                                  0x7
#define TXB2D07_address                          0xF26
#define TXB2D07_position                         0x7
#define TXB2D07_size                             0x1
#define TXB2D07_value_mask                       0x80
#define TXB2D07_clear_mask                       0x7F


/*------------------------------------------------------------------------------#
| TXB2D1                                                                  0xF27 |
#-------------------------------------------------------------------------------#
| TXB2D17 | TXB2D16 | TXB2D15 | TXB2D14 | TXB2D13 | TXB2D12 | TXB2D11 | TXB2D10 |
#-------------------------------------------------------------------------------#
| 7       | 6       | 5       | 4       | 3       | 2       | 1       | 0       |
#------------------------------------------------------------------------------*/

#define TXB2D1                                   0x0
#define TXB2D1_address                           0xF27
#define TXB2D1_position                          0x0
#define TXB2D1_size                              0x8
#define TXB2D1_value_mask                        0xFF
#define TXB2D1_clear_mask                        0x0

#define TXB2D10                                  0x0
#define TXB2D10_address                          0xF27
#define TXB2D10_position                         0x0
#define TXB2D10_size                             0x1
#define TXB2D10_value_mask                       0x1
#define TXB2D10_clear_mask                       0xFE

#define TXB2D11                                  0x1
#define TXB2D11_address                          0xF27
#define TXB2D11_position                         0x1
#define TXB2D11_size                             0x1
#define TXB2D11_value_mask                       0x2
#define TXB2D11_clear_mask                       0xFD

#define TXB2D12                                  0x2
#define TXB2D12_address                          0xF27
#define TXB2D12_position                         0x2
#define TXB2D12_size                             0x1
#define TXB2D12_value_mask                       0x4
#define TXB2D12_clear_mask                       0xFB

#define TXB2D13                                  0x3
#define TXB2D13_address                          0xF27
#define TXB2D13_position                         0x3
#define TXB2D13_size                             0x1
#define TXB2D13_value_mask                       0x8
#define TXB2D13_clear_mask                       0xF7

#define TXB2D14                                  0x4
#define TXB2D14_address                          0xF27
#define TXB2D14_position                         0x4
#define TXB2D14_size                             0x1
#define TXB2D14_value_mask                       0x10
#define TXB2D14_clear_mask                       0xEF

#define TXB2D15                                  0x5
#define TXB2D15_address                          0xF27
#define TXB2D15_position                         0x5
#define TXB2D15_size                             0x1
#define TXB2D15_value_mask                       0x20
#define TXB2D15_clear_mask                       0xDF

#define TXB2D16                                  0x6
#define TXB2D16_address                          0xF27
#define TXB2D16_position                         0x6
#define TXB2D16_size                             0x1
#define TXB2D16_value_mask                       0x40
#define TXB2D16_clear_mask                       0xBF

#define TXB2D17                                  0x7
#define TXB2D17_address                          0xF27
#define TXB2D17_position                         0x7
#define TXB2D17_size                             0x1
#define TXB2D17_value_mask                       0x80
#define TXB2D17_clear_mask                       0x7F


/*------------------------------------------------------------------------------#
| TXB2D2                                                                  0xF28 |
#-------------------------------------------------------------------------------#
| TXB2D27 | TXB2D26 | TXB2D25 | TXB2D24 | TXB2D23 | TXB2D22 | TXB2D21 | TXB2D20 |
#-------------------------------------------------------------------------------#
| 7       | 6       | 5       | 4       | 3       | 2       | 1       | 0       |
#------------------------------------------------------------------------------*/

#define TXB2D2                                   0x0
#define TXB2D2_address                           0xF28
#define TXB2D2_position                          0x0
#define TXB2D2_size                              0x8
#define TXB2D2_value_mask                        0xFF
#define TXB2D2_clear_mask                        0x0

#define TXB2D20                                  0x0
#define TXB2D20_address                          0xF28
#define TXB2D20_position                         0x0
#define TXB2D20_size                             0x1
#define TXB2D20_value_mask                       0x1
#define TXB2D20_clear_mask                       0xFE

#define TXB2D21                                  0x1
#define TXB2D21_address                          0xF28
#define TXB2D21_position                         0x1
#define TXB2D21_size                             0x1
#define TXB2D21_value_mask                       0x2
#define TXB2D21_clear_mask                       0xFD

#define TXB2D22                                  0x2
#define TXB2D22_address                          0xF28
#define TXB2D22_position                         0x2
#define TXB2D22_size                             0x1
#define TXB2D22_value_mask                       0x4
#define TXB2D22_clear_mask                       0xFB

#define TXB2D23                                  0x3
#define TXB2D23_address                          0xF28
#define TXB2D23_position                         0x3
#define TXB2D23_size                             0x1
#define TXB2D23_value_mask                       0x8
#define TXB2D23_clear_mask                       0xF7

#define TXB2D24                                  0x4
#define TXB2D24_address                          0xF28
#define TXB2D24_position                         0x4
#define TXB2D24_size                             0x1
#define TXB2D24_value_mask                       0x10
#define TXB2D24_clear_mask                       0xEF

#define TXB2D25                                  0x5
#define TXB2D25_address                          0xF28
#define TXB2D25_position                         0x5
#define TXB2D25_size                             0x1
#define TXB2D25_value_mask                       0x20
#define TXB2D25_clear_mask                       0xDF

#define TXB2D26                                  0x6
#define TXB2D26_address                          0xF28
#define TXB2D26_position                         0x6
#define TXB2D26_size                             0x1
#define TXB2D26_value_mask                       0x40
#define TXB2D26_clear_mask                       0xBF

#define TXB2D27                                  0x7
#define TXB2D27_address                          0xF28
#define TXB2D27_position                         0x7
#define TXB2D27_size                             0x1
#define TXB2D27_value_mask                       0x80
#define TXB2D27_clear_mask                       0x7F


/*------------------------------------------------------------------------------#
| TXB2D3                                                                  0xF29 |
#-------------------------------------------------------------------------------#
| TXB2D37 | TXB2D36 | TXB2D35 | TXB2D34 | TXB2D33 | TXB2D32 | TXB2D31 | TXB2D30 |
#-------------------------------------------------------------------------------#
| 7       | 6       | 5       | 4       | 3       | 2       | 1       | 0       |
#------------------------------------------------------------------------------*/

#define TXB2D3                                   0x0
#define TXB2D3_address                           0xF29
#define TXB2D3_position                          0x0
#define TXB2D3_size                              0x8
#define TXB2D3_value_mask                        0xFF
#define TXB2D3_clear_mask                        0x0

#define TXB2D30                                  0x0
#define TXB2D30_address                          0xF29
#define TXB2D30_position                         0x0
#define TXB2D30_size                             0x1
#define TXB2D30_value_mask                       0x1
#define TXB2D30_clear_mask                       0xFE

#define TXB2D31                                  0x1
#define TXB2D31_address                          0xF29
#define TXB2D31_position                         0x1
#define TXB2D31_size                             0x1
#define TXB2D31_value_mask                       0x2
#define TXB2D31_clear_mask                       0xFD

#define TXB2D32                                  0x2
#define TXB2D32_address                          0xF29
#define TXB2D32_position                         0x2
#define TXB2D32_size                             0x1
#define TXB2D32_value_mask                       0x4
#define TXB2D32_clear_mask                       0xFB

#define TXB2D33                                  0x3
#define TXB2D33_address                          0xF29
#define TXB2D33_position                         0x3
#define TXB2D33_size                             0x1
#define TXB2D33_value_mask                       0x8
#define TXB2D33_clear_mask                       0xF7

#define TXB2D34                                  0x4
#define TXB2D34_address                          0xF29
#define TXB2D34_position                         0x4
#define TXB2D34_size                             0x1
#define TXB2D34_value_mask                       0x10
#define TXB2D34_clear_mask                       0xEF

#define TXB2D35                                  0x5
#define TXB2D35_address                          0xF29
#define TXB2D35_position                         0x5
#define TXB2D35_size                             0x1
#define TXB2D35_value_mask                       0x20
#define TXB2D35_clear_mask                       0xDF

#define TXB2D36                                  0x6
#define TXB2D36_address                          0xF29
#define TXB2D36_position                         0x6
#define TXB2D36_size                             0x1
#define TXB2D36_value_mask                       0x40
#define TXB2D36_clear_mask                       0xBF

#define TXB2D37                                  0x7
#define TXB2D37_address                          0xF29
#define TXB2D37_position                         0x7
#define TXB2D37_size                             0x1
#define TXB2D37_value_mask                       0x80
#define TXB2D37_clear_mask                       0x7F


/*------------------------------------------------------------------------------#
| TXB2D4                                                                  0xF2A |
#-------------------------------------------------------------------------------#
| TXB2D47 | TXB2D46 | TXB2D45 | TXB2D44 | TXB2D43 | TXB2D42 | TXB2D41 | TXB2D40 |
#-------------------------------------------------------------------------------#
| 7       | 6       | 5       | 4       | 3       | 2       | 1       | 0       |
#------------------------------------------------------------------------------*/

#define TXB2D4                                   0x0
#define TXB2D4_address                           0xF2A
#define TXB2D4_position                          0x0
#define TXB2D4_size                              0x8
#define TXB2D4_value_mask                        0xFF
#define TXB2D4_clear_mask                        0x0

#define TXB2D40                                  0x0
#define TXB2D40_address                          0xF2A
#define TXB2D40_position                         0x0
#define TXB2D40_size                             0x1
#define TXB2D40_value_mask                       0x1
#define TXB2D40_clear_mask                       0xFE

#define TXB2D41                                  0x1
#define TXB2D41_address                          0xF2A
#define TXB2D41_position                         0x1
#define TXB2D41_size                             0x1
#define TXB2D41_value_mask                       0x2
#define TXB2D41_clear_mask                       0xFD

#define TXB2D42                                  0x2
#define TXB2D42_address                          0xF2A
#define TXB2D42_position                         0x2
#define TXB2D42_size                             0x1
#define TXB2D42_value_mask                       0x4
#define TXB2D42_clear_mask                       0xFB

#define TXB2D43                                  0x3
#define TXB2D43_address                          0xF2A
#define TXB2D43_position                         0x3
#define TXB2D43_size                             0x1
#define TXB2D43_value_mask                       0x8
#define TXB2D43_clear_mask                       0xF7

#define TXB2D44                                  0x4
#define TXB2D44_address                          0xF2A
#define TXB2D44_position                         0x4
#define TXB2D44_size                             0x1
#define TXB2D44_value_mask                       0x10
#define TXB2D44_clear_mask                       0xEF

#define TXB2D45                                  0x5
#define TXB2D45_address                          0xF2A
#define TXB2D45_position                         0x5
#define TXB2D45_size                             0x1
#define TXB2D45_value_mask                       0x20
#define TXB2D45_clear_mask                       0xDF

#define TXB2D46                                  0x6
#define TXB2D46_address                          0xF2A
#define TXB2D46_position                         0x6
#define TXB2D46_size                             0x1
#define TXB2D46_value_mask                       0x40
#define TXB2D46_clear_mask                       0xBF

#define TXB2D47                                  0x7
#define TXB2D47_address                          0xF2A
#define TXB2D47_position                         0x7
#define TXB2D47_size                             0x1
#define TXB2D47_value_mask                       0x80
#define TXB2D47_clear_mask                       0x7F


/*------------------------------------------------------------------------------#
| TXB2D5                                                                  0xF2B |
#-------------------------------------------------------------------------------#
| TXB2D57 | TXB2D56 | TXB2D55 | TXB2D54 | TXB2D53 | TXB2D52 | TXB2D51 | TXB2D50 |
#-------------------------------------------------------------------------------#
| 7       | 6       | 5       | 4       | 3       | 2       | 1       | 0       |
#------------------------------------------------------------------------------*/

#define TXB2D5                                   0x0
#define TXB2D5_address                           0xF2B
#define TXB2D5_position                          0x0
#define TXB2D5_size                              0x8
#define TXB2D5_value_mask                        0xFF
#define TXB2D5_clear_mask                        0x0

#define TXB2D50                                  0x0
#define TXB2D50_address                          0xF2B
#define TXB2D50_position                         0x0
#define TXB2D50_size                             0x1
#define TXB2D50_value_mask                       0x1
#define TXB2D50_clear_mask                       0xFE

#define TXB2D51                                  0x1
#define TXB2D51_address                          0xF2B
#define TXB2D51_position                         0x1
#define TXB2D51_size                             0x1
#define TXB2D51_value_mask                       0x2
#define TXB2D51_clear_mask                       0xFD

#define TXB2D52                                  0x2
#define TXB2D52_address                          0xF2B
#define TXB2D52_position                         0x2
#define TXB2D52_size                             0x1
#define TXB2D52_value_mask                       0x4
#define TXB2D52_clear_mask                       0xFB

#define TXB2D53                                  0x3
#define TXB2D53_address                          0xF2B
#define TXB2D53_position                         0x3
#define TXB2D53_size                             0x1
#define TXB2D53_value_mask                       0x8
#define TXB2D53_clear_mask                       0xF7

#define TXB2D54                                  0x4
#define TXB2D54_address                          0xF2B
#define TXB2D54_position                         0x4
#define TXB2D54_size                             0x1
#define TXB2D54_value_mask                       0x10
#define TXB2D54_clear_mask                       0xEF

#define TXB2D55                                  0x5
#define TXB2D55_address                          0xF2B
#define TXB2D55_position                         0x5
#define TXB2D55_size                             0x1
#define TXB2D55_value_mask                       0x20
#define TXB2D55_clear_mask                       0xDF

#define TXB2D56                                  0x6
#define TXB2D56_address                          0xF2B
#define TXB2D56_position                         0x6
#define TXB2D56_size                             0x1
#define TXB2D56_value_mask                       0x40
#define TXB2D56_clear_mask                       0xBF

#define TXB2D57                                  0x7
#define TXB2D57_address                          0xF2B
#define TXB2D57_position                         0x7
#define TXB2D57_size                             0x1
#define TXB2D57_value_mask                       0x80
#define TXB2D57_clear_mask                       0x7F


/*------------------------------------------------------------------------------#
| TXB2D6                                                                  0xF2C |
#-------------------------------------------------------------------------------#
| TXB2D67 | TXB2D66 | TXB2D65 | TXB2D64 | TXB2D63 | TXB2D62 | TXB2D61 | TXB2D60 |
#-------------------------------------------------------------------------------#
| 7       | 6       | 5       | 4       | 3       | 2       | 1       | 0       |
#------------------------------------------------------------------------------*/

#define TXB2D6                                   0x0
#define TXB2D6_address                           0xF2C
#define TXB2D6_position                          0x0
#define TXB2D6_size                              0x8
#define TXB2D6_value_mask                        0xFF
#define TXB2D6_clear_mask                        0x0

#define TXB2D60                                  0x0
#define TXB2D60_address                          0xF2C
#define TXB2D60_position                         0x0
#define TXB2D60_size                             0x1
#define TXB2D60_value_mask                       0x1
#define TXB2D60_clear_mask                       0xFE

#define TXB2D61                                  0x1
#define TXB2D61_address                          0xF2C
#define TXB2D61_position                         0x1
#define TXB2D61_size                             0x1
#define TXB2D61_value_mask                       0x2
#define TXB2D61_clear_mask                       0xFD

#define TXB2D62                                  0x2
#define TXB2D62_address                          0xF2C
#define TXB2D62_position                         0x2
#define TXB2D62_size                             0x1
#define TXB2D62_value_mask                       0x4
#define TXB2D62_clear_mask                       0xFB

#define TXB2D63                                  0x3
#define TXB2D63_address                          0xF2C
#define TXB2D63_position                         0x3
#define TXB2D63_size                             0x1
#define TXB2D63_value_mask                       0x8
#define TXB2D63_clear_mask                       0xF7

#define TXB2D64                                  0x4
#define TXB2D64_address                          0xF2C
#define TXB2D64_position                         0x4
#define TXB2D64_size                             0x1
#define TXB2D64_value_mask                       0x10
#define TXB2D64_clear_mask                       0xEF

#define TXB2D65                                  0x5
#define TXB2D65_address                          0xF2C
#define TXB2D65_position                         0x5
#define TXB2D65_size                             0x1
#define TXB2D65_value_mask                       0x20
#define TXB2D65_clear_mask                       0xDF

#define TXB2D66                                  0x6
#define TXB2D66_address                          0xF2C
#define TXB2D66_position                         0x6
#define TXB2D66_size                             0x1
#define TXB2D66_value_mask                       0x40
#define TXB2D66_clear_mask                       0xBF

#define TXB2D67                                  0x7
#define TXB2D67_address                          0xF2C
#define TXB2D67_position                         0x7
#define TXB2D67_size                             0x1
#define TXB2D67_value_mask                       0x80
#define TXB2D67_clear_mask                       0x7F


/*------------------------------------------------------------------------------#
| TXB2D7                                                                  0xF2D |
#-------------------------------------------------------------------------------#
| TXB2D77 | TXB2D76 | TXB2D75 | TXB2D74 | TXB2D73 | TXB2D72 | TXB2D71 | TXB2D70 |
#-------------------------------------------------------------------------------#
| 7       | 6       | 5       | 4       | 3       | 2       | 1       | 0       |
#------------------------------------------------------------------------------*/

#define TXB2D7                                   0x0
#define TXB2D7_address                           0xF2D
#define TXB2D7_position                          0x0
#define TXB2D7_size                              0x8
#define TXB2D7_value_mask                        0xFF
#define TXB2D7_clear_mask                        0x0

#define TXB2D70                                  0x0
#define TXB2D70_address                          0xF2D
#define TXB2D70_position                         0x0
#define TXB2D70_size                             0x1
#define TXB2D70_value_mask                       0x1
#define TXB2D70_clear_mask                       0xFE

#define TXB2D71                                  0x1
#define TXB2D71_address                          0xF2D
#define TXB2D71_position                         0x1
#define TXB2D71_size                             0x1
#define TXB2D71_value_mask                       0x2
#define TXB2D71_clear_mask                       0xFD

#define TXB2D72                                  0x2
#define TXB2D72_address                          0xF2D
#define TXB2D72_position                         0x2
#define TXB2D72_size                             0x1
#define TXB2D72_value_mask                       0x4
#define TXB2D72_clear_mask                       0xFB

#define TXB2D73                                  0x3
#define TXB2D73_address                          0xF2D
#define TXB2D73_position                         0x3
#define TXB2D73_size                             0x1
#define TXB2D73_value_mask                       0x8
#define TXB2D73_clear_mask                       0xF7

#define TXB2D74                                  0x4
#define TXB2D74_address                          0xF2D
#define TXB2D74_position                         0x4
#define TXB2D74_size                             0x1
#define TXB2D74_value_mask                       0x10
#define TXB2D74_clear_mask                       0xEF

#define TXB2D75                                  0x5
#define TXB2D75_address                          0xF2D
#define TXB2D75_position                         0x5
#define TXB2D75_size                             0x1
#define TXB2D75_value_mask                       0x20
#define TXB2D75_clear_mask                       0xDF

#define TXB2D76                                  0x6
#define TXB2D76_address                          0xF2D
#define TXB2D76_position                         0x6
#define TXB2D76_size                             0x1
#define TXB2D76_value_mask                       0x40
#define TXB2D76_clear_mask                       0xBF

#define TXB2D77                                  0x7
#define TXB2D77_address                          0xF2D
#define TXB2D77_position                         0x7
#define TXB2D77_size                             0x1
#define TXB2D77_value_mask                       0x80
#define TXB2D77_clear_mask                       0x7F


/*---------------------------------------------------------------------------------------------------------------------------------#
| CANSTATRO4                                                                                                                 0xF2E |
#----------------------------------------------------------------------------------------------------------------------------------#
| CANSTATRO4_OPMODE2 | CANSTATRO4_OPMODE1 | CANSTATRO4_OPMODE0 | - | CANSTATRO4_ICODE2 | CANSTATRO4_ICODE1 | CANSTATRO4_ICODE0 | - |
#----------------------------------------------------------------------------------------------------------------------------------#
| 7                  | 6                  | 5                  | 4 | 3                 | 2                 | 1                 | 0 |
#---------------------------------------------------------------------------------------------------------------------------------*/

#define CANSTATRO4                               0x0
#define CANSTATRO4_address                       0xF2E
#define CANSTATRO4_position                      0x0
#define CANSTATRO4_size                          0x8
#define CANSTATRO4_value_mask                    0xFF
#define CANSTATRO4_clear_mask                    0x0

#define CANSTATRO4_ICODE0                        0x1
#define CANSTATRO4_ICODE0_address                0xF2E
#define CANSTATRO4_ICODE0_position               0x1
#define CANSTATRO4_ICODE0_size                   0x1
#define CANSTATRO4_ICODE0_value_mask             0x2
#define CANSTATRO4_ICODE0_clear_mask             0xFD

#define CANSTATRO4_ICODE1                        0x2
#define CANSTATRO4_ICODE1_address                0xF2E
#define CANSTATRO4_ICODE1_position               0x2
#define CANSTATRO4_ICODE1_size                   0x1
#define CANSTATRO4_ICODE1_value_mask             0x4
#define CANSTATRO4_ICODE1_clear_mask             0xFB

#define CANSTATRO4_ICODE2                        0x3
#define CANSTATRO4_ICODE2_address                0xF2E
#define CANSTATRO4_ICODE2_position               0x3
#define CANSTATRO4_ICODE2_size                   0x1
#define CANSTATRO4_ICODE2_value_mask             0x8
#define CANSTATRO4_ICODE2_clear_mask             0xF7

#define CANSTATRO4_OPMODE0                       0x5
#define CANSTATRO4_OPMODE0_address               0xF2E
#define CANSTATRO4_OPMODE0_position              0x5
#define CANSTATRO4_OPMODE0_size                  0x1
#define CANSTATRO4_OPMODE0_value_mask            0x20
#define CANSTATRO4_OPMODE0_clear_mask            0xDF

#define CANSTATRO4_OPMODE1                       0x6
#define CANSTATRO4_OPMODE1_address               0xF2E
#define CANSTATRO4_OPMODE1_position              0x6
#define CANSTATRO4_OPMODE1_size                  0x1
#define CANSTATRO4_OPMODE1_value_mask            0x40
#define CANSTATRO4_OPMODE1_clear_mask            0xBF

#define CANSTATRO4_OPMODE2                       0x7
#define CANSTATRO4_OPMODE2_address               0xF2E
#define CANSTATRO4_OPMODE2_position              0x7
#define CANSTATRO4_OPMODE2_size                  0x1
#define CANSTATRO4_OPMODE2_value_mask            0x80
#define CANSTATRO4_OPMODE2_clear_mask            0x7F


/*---------------------------------------------------------------------------------------#
| TXB1CON                                                                          0xF30 |
#----------------------------------------------------------------------------------------#
| - | TXB1ABT | TXB1CON_TXLARB | TXB1CON_TXERR | TXB1CON_TXREQ | - | TXB1PRI1 | TXB1PRI0 |
#----------------------------------------------------------------------------------------#
| 7 | 6       | 5              | 4             | 3             | 2 | 1        | 0        |
#---------------------------------------------------------------------------------------*/

#define TXB1CON                                  0x0
#define TXB1CON_address                          0xF30
#define TXB1CON_position                         0x0
#define TXB1CON_size                             0x8
#define TXB1CON_value_mask                       0xFF
#define TXB1CON_clear_mask                       0x0

#define TXB1PRI0                                 0x0
#define TXB1PRI0_address                         0xF30
#define TXB1PRI0_position                        0x0
#define TXB1PRI0_size                            0x1
#define TXB1PRI0_value_mask                      0x1
#define TXB1PRI0_clear_mask                      0xFE

#define TXB1CON_TXPRI0                           0x0
#define TXB1CON_TXPRI0_address                   0xF30
#define TXB1CON_TXPRI0_position                  0x0
#define TXB1CON_TXPRI0_size                      0x1
#define TXB1CON_TXPRI0_value_mask                0x1
#define TXB1CON_TXPRI0_clear_mask                0xFE

#define TXB1PRI1                                 0x1
#define TXB1PRI1_address                         0xF30
#define TXB1PRI1_position                        0x1
#define TXB1PRI1_size                            0x1
#define TXB1PRI1_value_mask                      0x2
#define TXB1PRI1_clear_mask                      0xFD

#define TXB1CON_TXPRI1                           0x1
#define TXB1CON_TXPRI1_address                   0xF30
#define TXB1CON_TXPRI1_position                  0x1
#define TXB1CON_TXPRI1_size                      0x1
#define TXB1CON_TXPRI1_value_mask                0x2
#define TXB1CON_TXPRI1_clear_mask                0xFD

#define TXB1CON_TXREQ                            0x3
#define TXB1CON_TXREQ_address                    0xF30
#define TXB1CON_TXREQ_position                   0x3
#define TXB1CON_TXREQ_size                       0x1
#define TXB1CON_TXREQ_value_mask                 0x8
#define TXB1CON_TXREQ_clear_mask                 0xF7

#define TXB1REQ                                  0x3
#define TXB1REQ_address                          0xF30
#define TXB1REQ_position                         0x3
#define TXB1REQ_size                             0x1
#define TXB1REQ_value_mask                       0x8
#define TXB1REQ_clear_mask                       0xF7

#define TXB1CON_TXERR                            0x4
#define TXB1CON_TXERR_address                    0xF30
#define TXB1CON_TXERR_position                   0x4
#define TXB1CON_TXERR_size                       0x1
#define TXB1CON_TXERR_value_mask                 0x10
#define TXB1CON_TXERR_clear_mask                 0xEF

#define TXB1ERR                                  0x4
#define TXB1ERR_address                          0xF30
#define TXB1ERR_position                         0x4
#define TXB1ERR_size                             0x1
#define TXB1ERR_value_mask                       0x10
#define TXB1ERR_clear_mask                       0xEF

#define TXB1CON_TXLARB                           0x5
#define TXB1CON_TXLARB_address                   0xF30
#define TXB1CON_TXLARB_position                  0x5
#define TXB1CON_TXLARB_size                      0x1
#define TXB1CON_TXLARB_value_mask                0x20
#define TXB1CON_TXLARB_clear_mask                0xDF

#define TXB1LARB                                 0x5
#define TXB1LARB_address                         0xF30
#define TXB1LARB_position                        0x5
#define TXB1LARB_size                            0x1
#define TXB1LARB_value_mask                      0x20
#define TXB1LARB_clear_mask                      0xDF

#define TXB1ABT                                  0x6
#define TXB1ABT_address                          0xF30
#define TXB1ABT_position                         0x6
#define TXB1ABT_size                             0x1
#define TXB1ABT_value_mask                       0x40
#define TXB1ABT_clear_mask                       0xBF

#define TXB1CON_TXABT                            0x6
#define TXB1CON_TXABT_address                    0xF30
#define TXB1CON_TXABT_position                   0x6
#define TXB1CON_TXABT_size                       0x1
#define TXB1CON_TXABT_value_mask                 0x40
#define TXB1CON_TXABT_clear_mask                 0xBF


/*--------------------------------------------------------------------------------------------#
| TXB1SIDH                                                                              0xF31 |
#---------------------------------------------------------------------------------------------#
| TXB1SIDH_SID10 | TXB1SID9 | TXB1SID8 | TXB1SID7 | TXB1SID6 | TXB1SID5 | TXB1SID4 | TXB1SID3 |
#---------------------------------------------------------------------------------------------#
| 7              | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
#--------------------------------------------------------------------------------------------*/

#define TXB1SIDH                                 0x0
#define TXB1SIDH_address                         0xF31
#define TXB1SIDH_position                        0x0
#define TXB1SIDH_size                            0x8
#define TXB1SIDH_value_mask                      0xFF
#define TXB1SIDH_clear_mask                      0x0

#define TXB1SIDH_SID3                            0x0
#define TXB1SIDH_SID3_address                    0xF31
#define TXB1SIDH_SID3_position                   0x0
#define TXB1SIDH_SID3_size                       0x1
#define TXB1SIDH_SID3_value_mask                 0x1
#define TXB1SIDH_SID3_clear_mask                 0xFE

#define TXB1SID3                                 0x0
#define TXB1SID3_address                         0xF31
#define TXB1SID3_position                        0x0
#define TXB1SID3_size                            0x1
#define TXB1SID3_value_mask                      0x1
#define TXB1SID3_clear_mask                      0xFE

#define TXB1SIDH_SID4                            0x1
#define TXB1SIDH_SID4_address                    0xF31
#define TXB1SIDH_SID4_position                   0x1
#define TXB1SIDH_SID4_size                       0x1
#define TXB1SIDH_SID4_value_mask                 0x2
#define TXB1SIDH_SID4_clear_mask                 0xFD

#define TXB1SID4                                 0x1
#define TXB1SID4_address                         0xF31
#define TXB1SID4_position                        0x1
#define TXB1SID4_size                            0x1
#define TXB1SID4_value_mask                      0x2
#define TXB1SID4_clear_mask                      0xFD

#define TXB1SIDH_SID5                            0x2
#define TXB1SIDH_SID5_address                    0xF31
#define TXB1SIDH_SID5_position                   0x2
#define TXB1SIDH_SID5_size                       0x1
#define TXB1SIDH_SID5_value_mask                 0x4
#define TXB1SIDH_SID5_clear_mask                 0xFB

#define TXB1SID5                                 0x2
#define TXB1SID5_address                         0xF31
#define TXB1SID5_position                        0x2
#define TXB1SID5_size                            0x1
#define TXB1SID5_value_mask                      0x4
#define TXB1SID5_clear_mask                      0xFB

#define TXB1SIDH_SID6                            0x3
#define TXB1SIDH_SID6_address                    0xF31
#define TXB1SIDH_SID6_position                   0x3
#define TXB1SIDH_SID6_size                       0x1
#define TXB1SIDH_SID6_value_mask                 0x8
#define TXB1SIDH_SID6_clear_mask                 0xF7

#define TXB1SID6                                 0x3
#define TXB1SID6_address                         0xF31
#define TXB1SID6_position                        0x3
#define TXB1SID6_size                            0x1
#define TXB1SID6_value_mask                      0x8
#define TXB1SID6_clear_mask                      0xF7

#define TXB1SIDH_SID7                            0x4
#define TXB1SIDH_SID7_address                    0xF31
#define TXB1SIDH_SID7_position                   0x4
#define TXB1SIDH_SID7_size                       0x1
#define TXB1SIDH_SID7_value_mask                 0x10
#define TXB1SIDH_SID7_clear_mask                 0xEF

#define TXB1SID7                                 0x4
#define TXB1SID7_address                         0xF31
#define TXB1SID7_position                        0x4
#define TXB1SID7_size                            0x1
#define TXB1SID7_value_mask                      0x10
#define TXB1SID7_clear_mask                      0xEF

#define TXB1SIDH_SID8                            0x5
#define TXB1SIDH_SID8_address                    0xF31
#define TXB1SIDH_SID8_position                   0x5
#define TXB1SIDH_SID8_size                       0x1
#define TXB1SIDH_SID8_value_mask                 0x20
#define TXB1SIDH_SID8_clear_mask                 0xDF

#define TXB1SID8                                 0x5
#define TXB1SID8_address                         0xF31
#define TXB1SID8_position                        0x5
#define TXB1SID8_size                            0x1
#define TXB1SID8_value_mask                      0x20
#define TXB1SID8_clear_mask                      0xDF

#define TXB1SIDH_SID9                            0x6
#define TXB1SIDH_SID9_address                    0xF31
#define TXB1SIDH_SID9_position                   0x6
#define TXB1SIDH_SID9_size                       0x1
#define TXB1SIDH_SID9_value_mask                 0x40
#define TXB1SIDH_SID9_clear_mask                 0xBF

#define TXB1SID9                                 0x6
#define TXB1SID9_address                         0xF31
#define TXB1SID9_position                        0x6
#define TXB1SID9_size                            0x1
#define TXB1SID9_value_mask                      0x40
#define TXB1SID9_clear_mask                      0xBF

#define TXB1SID10                                0x7
#define TXB1SID10_address                        0xF31
#define TXB1SID10_position                       0x7
#define TXB1SID10_size                           0x1
#define TXB1SID10_value_mask                     0x80
#define TXB1SID10_clear_mask                     0x7F

#define TXB1SIDH_SID10                           0x7
#define TXB1SIDH_SID10_address                   0xF31
#define TXB1SIDH_SID10_position                  0x7
#define TXB1SIDH_SID10_size                      0x1
#define TXB1SIDH_SID10_value_mask                0x80
#define TXB1SIDH_SID10_clear_mask                0x7F


/*-------------------------------------------------------------------------------------#
| TXB1SIDL                                                                       0xF32 |
#--------------------------------------------------------------------------------------#
| TXB1SID2 | TXB1SID1 | TXB1SID0 | - | TXB1EXIDE | - | TXB1SIDL_EID17 | TXB1SIDL_EID16 |
#--------------------------------------------------------------------------------------#
| 7        | 6        | 5        | 4 | 3         | 2 | 1              | 0              |
#-------------------------------------------------------------------------------------*/

#define TXB1SIDL                                 0x0
#define TXB1SIDL_address                         0xF32
#define TXB1SIDL_position                        0x0
#define TXB1SIDL_size                            0x8
#define TXB1SIDL_value_mask                      0xFF
#define TXB1SIDL_clear_mask                      0x0

#define TXB1SIDL_EID16                           0x0
#define TXB1SIDL_EID16_address                   0xF32
#define TXB1SIDL_EID16_position                  0x0
#define TXB1SIDL_EID16_size                      0x1
#define TXB1SIDL_EID16_value_mask                0x1
#define TXB1SIDL_EID16_clear_mask                0xFE

#define TXB1EID16                                0x0
#define TXB1EID16_address                        0xF32
#define TXB1EID16_position                       0x0
#define TXB1EID16_size                           0x1
#define TXB1EID16_value_mask                     0x1
#define TXB1EID16_clear_mask                     0xFE

#define TXB1SIDL_EID17                           0x1
#define TXB1SIDL_EID17_address                   0xF32
#define TXB1SIDL_EID17_position                  0x1
#define TXB1SIDL_EID17_size                      0x1
#define TXB1SIDL_EID17_value_mask                0x2
#define TXB1SIDL_EID17_clear_mask                0xFD

#define TXB1EID17                                0x1
#define TXB1EID17_address                        0xF32
#define TXB1EID17_position                       0x1
#define TXB1EID17_size                           0x1
#define TXB1EID17_value_mask                     0x2
#define TXB1EID17_clear_mask                     0xFD

#define TXB1EXIDE                                0x3
#define TXB1EXIDE_address                        0xF32
#define TXB1EXIDE_position                       0x3
#define TXB1EXIDE_size                           0x1
#define TXB1EXIDE_value_mask                     0x8
#define TXB1EXIDE_clear_mask                     0xF7

#define TXB1SIDL_EXIDE                           0x3
#define TXB1SIDL_EXIDE_address                   0xF32
#define TXB1SIDL_EXIDE_position                  0x3
#define TXB1SIDL_EXIDE_size                      0x1
#define TXB1SIDL_EXIDE_value_mask                0x8
#define TXB1SIDL_EXIDE_clear_mask                0xF7

#define TXB1SID0                                 0x5
#define TXB1SID0_address                         0xF32
#define TXB1SID0_position                        0x5
#define TXB1SID0_size                            0x1
#define TXB1SID0_value_mask                      0x20
#define TXB1SID0_clear_mask                      0xDF

#define TXB1SIDL_SID0                            0x5
#define TXB1SIDL_SID0_address                    0xF32
#define TXB1SIDL_SID0_position                   0x5
#define TXB1SIDL_SID0_size                       0x1
#define TXB1SIDL_SID0_value_mask                 0x20
#define TXB1SIDL_SID0_clear_mask                 0xDF

#define TXB1SID1                                 0x6
#define TXB1SID1_address                         0xF32
#define TXB1SID1_position                        0x6
#define TXB1SID1_size                            0x1
#define TXB1SID1_value_mask                      0x40
#define TXB1SID1_clear_mask                      0xBF

#define TXB1SIDL_SID1                            0x6
#define TXB1SIDL_SID1_address                    0xF32
#define TXB1SIDL_SID1_position                   0x6
#define TXB1SIDL_SID1_size                       0x1
#define TXB1SIDL_SID1_value_mask                 0x40
#define TXB1SIDL_SID1_clear_mask                 0xBF

#define TXB1SID2                                 0x7
#define TXB1SID2_address                         0xF32
#define TXB1SID2_position                        0x7
#define TXB1SID2_size                            0x1
#define TXB1SID2_value_mask                      0x80
#define TXB1SID2_clear_mask                      0x7F

#define TXB1SIDL_SID2                            0x7
#define TXB1SIDL_SID2_address                    0xF32
#define TXB1SIDL_SID2_position                   0x7
#define TXB1SIDL_SID2_size                       0x1
#define TXB1SIDL_SID2_value_mask                 0x80
#define TXB1SIDL_SID2_clear_mask                 0x7F


/*----------------------------------------------------------------------------------------------------------------#
| TXB1EIDH                                                                                                  0xF33 |
#-----------------------------------------------------------------------------------------------------------------#
| TXB1EID15 | TXB1EID14 | TXB1EIDH_EID13 | TXB1EIDH_EID12 | TXB1EIDH_EID11 | TXB1EIDH_EID10 | TXB1EID9 | TXB1EID8 |
#-----------------------------------------------------------------------------------------------------------------#
| 7         | 6         | 5              | 4              | 3              | 2              | 1        | 0        |
#----------------------------------------------------------------------------------------------------------------*/

#define TXB1EIDH                                 0x0
#define TXB1EIDH_address                         0xF33
#define TXB1EIDH_position                        0x0
#define TXB1EIDH_size                            0x8
#define TXB1EIDH_value_mask                      0xFF
#define TXB1EIDH_clear_mask                      0x0

#define TXB1EID8                                 0x0
#define TXB1EID8_address                         0xF33
#define TXB1EID8_position                        0x0
#define TXB1EID8_size                            0x1
#define TXB1EID8_value_mask                      0x1
#define TXB1EID8_clear_mask                      0xFE

#define TXB1EIDH_EID8                            0x0
#define TXB1EIDH_EID8_address                    0xF33
#define TXB1EIDH_EID8_position                   0x0
#define TXB1EIDH_EID8_size                       0x1
#define TXB1EIDH_EID8_value_mask                 0x1
#define TXB1EIDH_EID8_clear_mask                 0xFE

#define TXB1EID9                                 0x1
#define TXB1EID9_address                         0xF33
#define TXB1EID9_position                        0x1
#define TXB1EID9_size                            0x1
#define TXB1EID9_value_mask                      0x2
#define TXB1EID9_clear_mask                      0xFD

#define TXB1EIDH_EID9                            0x1
#define TXB1EIDH_EID9_address                    0xF33
#define TXB1EIDH_EID9_position                   0x1
#define TXB1EIDH_EID9_size                       0x1
#define TXB1EIDH_EID9_value_mask                 0x2
#define TXB1EIDH_EID9_clear_mask                 0xFD

#define TXB1EID10                                0x2
#define TXB1EID10_address                        0xF33
#define TXB1EID10_position                       0x2
#define TXB1EID10_size                           0x1
#define TXB1EID10_value_mask                     0x4
#define TXB1EID10_clear_mask                     0xFB

#define TXB1EIDH_EID10                           0x2
#define TXB1EIDH_EID10_address                   0xF33
#define TXB1EIDH_EID10_position                  0x2
#define TXB1EIDH_EID10_size                      0x1
#define TXB1EIDH_EID10_value_mask                0x4
#define TXB1EIDH_EID10_clear_mask                0xFB

#define TXB1EID11                                0x3
#define TXB1EID11_address                        0xF33
#define TXB1EID11_position                       0x3
#define TXB1EID11_size                           0x1
#define TXB1EID11_value_mask                     0x8
#define TXB1EID11_clear_mask                     0xF7

#define TXB1EIDH_EID11                           0x3
#define TXB1EIDH_EID11_address                   0xF33
#define TXB1EIDH_EID11_position                  0x3
#define TXB1EIDH_EID11_size                      0x1
#define TXB1EIDH_EID11_value_mask                0x8
#define TXB1EIDH_EID11_clear_mask                0xF7

#define TXB1EID12                                0x4
#define TXB1EID12_address                        0xF33
#define TXB1EID12_position                       0x4
#define TXB1EID12_size                           0x1
#define TXB1EID12_value_mask                     0x10
#define TXB1EID12_clear_mask                     0xEF

#define TXB1EIDH_EID12                           0x4
#define TXB1EIDH_EID12_address                   0xF33
#define TXB1EIDH_EID12_position                  0x4
#define TXB1EIDH_EID12_size                      0x1
#define TXB1EIDH_EID12_value_mask                0x10
#define TXB1EIDH_EID12_clear_mask                0xEF

#define TXB1EID13                                0x5
#define TXB1EID13_address                        0xF33
#define TXB1EID13_position                       0x5
#define TXB1EID13_size                           0x1
#define TXB1EID13_value_mask                     0x20
#define TXB1EID13_clear_mask                     0xDF

#define TXB1EIDH_EID13                           0x5
#define TXB1EIDH_EID13_address                   0xF33
#define TXB1EIDH_EID13_position                  0x5
#define TXB1EIDH_EID13_size                      0x1
#define TXB1EIDH_EID13_value_mask                0x20
#define TXB1EIDH_EID13_clear_mask                0xDF

#define TXB1EID14                                0x6
#define TXB1EID14_address                        0xF33
#define TXB1EID14_position                       0x6
#define TXB1EID14_size                           0x1
#define TXB1EID14_value_mask                     0x40
#define TXB1EID14_clear_mask                     0xBF

#define TXB1EIDH_EID14                           0x6
#define TXB1EIDH_EID14_address                   0xF33
#define TXB1EIDH_EID14_position                  0x6
#define TXB1EIDH_EID14_size                      0x1
#define TXB1EIDH_EID14_value_mask                0x40
#define TXB1EIDH_EID14_clear_mask                0xBF

#define TXB1EID15                                0x7
#define TXB1EID15_address                        0xF33
#define TXB1EID15_position                       0x7
#define TXB1EID15_size                           0x1
#define TXB1EID15_value_mask                     0x80
#define TXB1EID15_clear_mask                     0x7F

#define TXB1EIDH_EID15                           0x7
#define TXB1EIDH_EID15_address                   0xF33
#define TXB1EIDH_EID15_position                  0x7
#define TXB1EIDH_EID15_size                      0x1
#define TXB1EIDH_EID15_value_mask                0x80
#define TXB1EIDH_EID15_clear_mask                0x7F


/*------------------------------------------------------------------------------------------------------------------------------#
| TXB1EIDL                                                                                                                0xF34 |
#-------------------------------------------------------------------------------------------------------------------------------#
| TXB1EIDL_EID7 | TXB1EIDL_EID6 | TXB1EIDL_EID5 | TXB1EIDL_EID4 | TXB1EIDL_EID3 | TXB1EIDL_EID2 | TXB1EIDL_EID1 | TXB1EIDL_EID0 |
#-------------------------------------------------------------------------------------------------------------------------------#
| 7             | 6             | 5             | 4             | 3             | 2             | 1             | 0             |
#------------------------------------------------------------------------------------------------------------------------------*/

#define TXB1EIDL                                 0x0
#define TXB1EIDL_address                         0xF34
#define TXB1EIDL_position                        0x0
#define TXB1EIDL_size                            0x8
#define TXB1EIDL_value_mask                      0xFF
#define TXB1EIDL_clear_mask                      0x0

#define TXB1EIDL_EID0                            0x0
#define TXB1EIDL_EID0_address                    0xF34
#define TXB1EIDL_EID0_position                   0x0
#define TXB1EIDL_EID0_size                       0x1
#define TXB1EIDL_EID0_value_mask                 0x1
#define TXB1EIDL_EID0_clear_mask                 0xFE

#define TXB1EID0                                 0x0
#define TXB1EID0_address                         0xF34
#define TXB1EID0_position                        0x0
#define TXB1EID0_size                            0x1
#define TXB1EID0_value_mask                      0x1
#define TXB1EID0_clear_mask                      0xFE

#define TXB1EIDL_EID1                            0x1
#define TXB1EIDL_EID1_address                    0xF34
#define TXB1EIDL_EID1_position                   0x1
#define TXB1EIDL_EID1_size                       0x1
#define TXB1EIDL_EID1_value_mask                 0x2
#define TXB1EIDL_EID1_clear_mask                 0xFD

#define TXB1EID1                                 0x1
#define TXB1EID1_address                         0xF34
#define TXB1EID1_position                        0x1
#define TXB1EID1_size                            0x1
#define TXB1EID1_value_mask                      0x2
#define TXB1EID1_clear_mask                      0xFD

#define TXB1EIDL_EID2                            0x2
#define TXB1EIDL_EID2_address                    0xF34
#define TXB1EIDL_EID2_position                   0x2
#define TXB1EIDL_EID2_size                       0x1
#define TXB1EIDL_EID2_value_mask                 0x4
#define TXB1EIDL_EID2_clear_mask                 0xFB

#define TXB1EID2                                 0x2
#define TXB1EID2_address                         0xF34
#define TXB1EID2_position                        0x2
#define TXB1EID2_size                            0x1
#define TXB1EID2_value_mask                      0x4
#define TXB1EID2_clear_mask                      0xFB

#define TXB1EIDL_EID3                            0x3
#define TXB1EIDL_EID3_address                    0xF34
#define TXB1EIDL_EID3_position                   0x3
#define TXB1EIDL_EID3_size                       0x1
#define TXB1EIDL_EID3_value_mask                 0x8
#define TXB1EIDL_EID3_clear_mask                 0xF7

#define TXB1EID3                                 0x3
#define TXB1EID3_address                         0xF34
#define TXB1EID3_position                        0x3
#define TXB1EID3_size                            0x1
#define TXB1EID3_value_mask                      0x8
#define TXB1EID3_clear_mask                      0xF7

#define TXB1EIDL_EID4                            0x4
#define TXB1EIDL_EID4_address                    0xF34
#define TXB1EIDL_EID4_position                   0x4
#define TXB1EIDL_EID4_size                       0x1
#define TXB1EIDL_EID4_value_mask                 0x10
#define TXB1EIDL_EID4_clear_mask                 0xEF

#define TXB1EID4                                 0x4
#define TXB1EID4_address                         0xF34
#define TXB1EID4_position                        0x4
#define TXB1EID4_size                            0x1
#define TXB1EID4_value_mask                      0x10
#define TXB1EID4_clear_mask                      0xEF

#define TXB1EIDL_EID5                            0x5
#define TXB1EIDL_EID5_address                    0xF34
#define TXB1EIDL_EID5_position                   0x5
#define TXB1EIDL_EID5_size                       0x1
#define TXB1EIDL_EID5_value_mask                 0x20
#define TXB1EIDL_EID5_clear_mask                 0xDF

#define TXB1EID5                                 0x5
#define TXB1EID5_address                         0xF34
#define TXB1EID5_position                        0x5
#define TXB1EID5_size                            0x1
#define TXB1EID5_value_mask                      0x20
#define TXB1EID5_clear_mask                      0xDF

#define TXB1EIDL_EID6                            0x6
#define TXB1EIDL_EID6_address                    0xF34
#define TXB1EIDL_EID6_position                   0x6
#define TXB1EIDL_EID6_size                       0x1
#define TXB1EIDL_EID6_value_mask                 0x40
#define TXB1EIDL_EID6_clear_mask                 0xBF

#define TXB1EID6                                 0x6
#define TXB1EID6_address                         0xF34
#define TXB1EID6_position                        0x6
#define TXB1EID6_size                            0x1
#define TXB1EID6_value_mask                      0x40
#define TXB1EID6_clear_mask                      0xBF

#define TXB1EIDL_EID7                            0x7
#define TXB1EIDL_EID7_address                    0xF34
#define TXB1EIDL_EID7_position                   0x7
#define TXB1EIDL_EID7_size                       0x1
#define TXB1EIDL_EID7_value_mask                 0x80
#define TXB1EIDL_EID7_clear_mask                 0x7F

#define TXB1EID7                                 0x7
#define TXB1EID7_address                         0xF34
#define TXB1EID7_position                        0x7
#define TXB1EID7_size                            0x1
#define TXB1EID7_value_mask                      0x80
#define TXB1EID7_clear_mask                      0x7F


/*--------------------------------------------------------------------#
| TXB1DLC                                                       0xF35 |
#---------------------------------------------------------------------#
| - | TXB1RTR | - | - | TXB1DLC_DLC3 | TXB1DLC2 | TXB1DLC1 | TXB1DLC0 |
#---------------------------------------------------------------------#
| 7 | 6       | 5 | 4 | 3            | 2        | 1        | 0        |
#--------------------------------------------------------------------*/

#define TXB1DLC                                  0x0
#define TXB1DLC_address                          0xF35
#define TXB1DLC_position                         0x0
#define TXB1DLC_size                             0x8
#define TXB1DLC_value_mask                       0xFF
#define TXB1DLC_clear_mask                       0x0

#define TXB1DLC0                                 0x0
#define TXB1DLC0_address                         0xF35
#define TXB1DLC0_position                        0x0
#define TXB1DLC0_size                            0x1
#define TXB1DLC0_value_mask                      0x1
#define TXB1DLC0_clear_mask                      0xFE

#define TXB1DLC_DLC0                             0x0
#define TXB1DLC_DLC0_address                     0xF35
#define TXB1DLC_DLC0_position                    0x0
#define TXB1DLC_DLC0_size                        0x1
#define TXB1DLC_DLC0_value_mask                  0x1
#define TXB1DLC_DLC0_clear_mask                  0xFE

#define TXB1DLC_DLC1                             0x1
#define TXB1DLC_DLC1_address                     0xF35
#define TXB1DLC_DLC1_position                    0x1
#define TXB1DLC_DLC1_size                        0x1
#define TXB1DLC_DLC1_value_mask                  0x2
#define TXB1DLC_DLC1_clear_mask                  0xFD

#define TXB1DLC1                                 0x1
#define TXB1DLC1_address                         0xF35
#define TXB1DLC1_position                        0x1
#define TXB1DLC1_size                            0x1
#define TXB1DLC1_value_mask                      0x2
#define TXB1DLC1_clear_mask                      0xFD

#define TXB1DLC_DLC2                             0x2
#define TXB1DLC_DLC2_address                     0xF35
#define TXB1DLC_DLC2_position                    0x2
#define TXB1DLC_DLC2_size                        0x1
#define TXB1DLC_DLC2_value_mask                  0x4
#define TXB1DLC_DLC2_clear_mask                  0xFB

#define TXB1DLC2                                 0x2
#define TXB1DLC2_address                         0xF35
#define TXB1DLC2_position                        0x2
#define TXB1DLC2_size                            0x1
#define TXB1DLC2_value_mask                      0x4
#define TXB1DLC2_clear_mask                      0xFB

#define TXB1DLC_DLC3                             0x3
#define TXB1DLC_DLC3_address                     0xF35
#define TXB1DLC_DLC3_position                    0x3
#define TXB1DLC_DLC3_size                        0x1
#define TXB1DLC_DLC3_value_mask                  0x8
#define TXB1DLC_DLC3_clear_mask                  0xF7

#define TXB1DLC3                                 0x3
#define TXB1DLC3_address                         0xF35
#define TXB1DLC3_position                        0x3
#define TXB1DLC3_size                            0x1
#define TXB1DLC3_value_mask                      0x8
#define TXB1DLC3_clear_mask                      0xF7

#define TXB1RTR                                  0x6
#define TXB1RTR_address                          0xF35
#define TXB1RTR_position                         0x6
#define TXB1RTR_size                             0x1
#define TXB1RTR_value_mask                       0x40
#define TXB1RTR_clear_mask                       0xBF

#define TXB1DLC_TXRTR                            0x6
#define TXB1DLC_TXRTR_address                    0xF35
#define TXB1DLC_TXRTR_position                   0x6
#define TXB1DLC_TXRTR_size                       0x1
#define TXB1DLC_TXRTR_value_mask                 0x40
#define TXB1DLC_TXRTR_clear_mask                 0xBF


/*------------------------------------------------------------------------------#
| TXB1D0                                                                  0xF36 |
#-------------------------------------------------------------------------------#
| TXB1D07 | TXB1D06 | TXB1D05 | TXB1D04 | TXB1D03 | TXB1D02 | TXB1D01 | TXB1D00 |
#-------------------------------------------------------------------------------#
| 7       | 6       | 5       | 4       | 3       | 2       | 1       | 0       |
#------------------------------------------------------------------------------*/

#define TXB1D0                                   0x0
#define TXB1D0_address                           0xF36
#define TXB1D0_position                          0x0
#define TXB1D0_size                              0x8
#define TXB1D0_value_mask                        0xFF
#define TXB1D0_clear_mask                        0x0

#define TXB1D00                                  0x0
#define TXB1D00_address                          0xF36
#define TXB1D00_position                         0x0
#define TXB1D00_size                             0x1
#define TXB1D00_value_mask                       0x1
#define TXB1D00_clear_mask                       0xFE

#define TXB1D01                                  0x1
#define TXB1D01_address                          0xF36
#define TXB1D01_position                         0x1
#define TXB1D01_size                             0x1
#define TXB1D01_value_mask                       0x2
#define TXB1D01_clear_mask                       0xFD

#define TXB1D02                                  0x2
#define TXB1D02_address                          0xF36
#define TXB1D02_position                         0x2
#define TXB1D02_size                             0x1
#define TXB1D02_value_mask                       0x4
#define TXB1D02_clear_mask                       0xFB

#define TXB1D03                                  0x3
#define TXB1D03_address                          0xF36
#define TXB1D03_position                         0x3
#define TXB1D03_size                             0x1
#define TXB1D03_value_mask                       0x8
#define TXB1D03_clear_mask                       0xF7

#define TXB1D04                                  0x4
#define TXB1D04_address                          0xF36
#define TXB1D04_position                         0x4
#define TXB1D04_size                             0x1
#define TXB1D04_value_mask                       0x10
#define TXB1D04_clear_mask                       0xEF

#define TXB1D05                                  0x5
#define TXB1D05_address                          0xF36
#define TXB1D05_position                         0x5
#define TXB1D05_size                             0x1
#define TXB1D05_value_mask                       0x20
#define TXB1D05_clear_mask                       0xDF

#define TXB1D06                                  0x6
#define TXB1D06_address                          0xF36
#define TXB1D06_position                         0x6
#define TXB1D06_size                             0x1
#define TXB1D06_value_mask                       0x40
#define TXB1D06_clear_mask                       0xBF

#define TXB1D07                                  0x7
#define TXB1D07_address                          0xF36
#define TXB1D07_position                         0x7
#define TXB1D07_size                             0x1
#define TXB1D07_value_mask                       0x80
#define TXB1D07_clear_mask                       0x7F


/*------------------------------------------------------------------------------#
| TXB1D1                                                                  0xF37 |
#-------------------------------------------------------------------------------#
| TXB1D17 | TXB1D16 | TXB1D15 | TXB1D14 | TXB1D13 | TXB1D12 | TXB1D11 | TXB1D10 |
#-------------------------------------------------------------------------------#
| 7       | 6       | 5       | 4       | 3       | 2       | 1       | 0       |
#------------------------------------------------------------------------------*/

#define TXB1D1                                   0x0
#define TXB1D1_address                           0xF37
#define TXB1D1_position                          0x0
#define TXB1D1_size                              0x8
#define TXB1D1_value_mask                        0xFF
#define TXB1D1_clear_mask                        0x0

#define TXB1D10                                  0x0
#define TXB1D10_address                          0xF37
#define TXB1D10_position                         0x0
#define TXB1D10_size                             0x1
#define TXB1D10_value_mask                       0x1
#define TXB1D10_clear_mask                       0xFE

#define TXB1D11                                  0x1
#define TXB1D11_address                          0xF37
#define TXB1D11_position                         0x1
#define TXB1D11_size                             0x1
#define TXB1D11_value_mask                       0x2
#define TXB1D11_clear_mask                       0xFD

#define TXB1D12                                  0x2
#define TXB1D12_address                          0xF37
#define TXB1D12_position                         0x2
#define TXB1D12_size                             0x1
#define TXB1D12_value_mask                       0x4
#define TXB1D12_clear_mask                       0xFB

#define TXB1D13                                  0x3
#define TXB1D13_address                          0xF37
#define TXB1D13_position                         0x3
#define TXB1D13_size                             0x1
#define TXB1D13_value_mask                       0x8
#define TXB1D13_clear_mask                       0xF7

#define TXB1D14                                  0x4
#define TXB1D14_address                          0xF37
#define TXB1D14_position                         0x4
#define TXB1D14_size                             0x1
#define TXB1D14_value_mask                       0x10
#define TXB1D14_clear_mask                       0xEF

#define TXB1D15                                  0x5
#define TXB1D15_address                          0xF37
#define TXB1D15_position                         0x5
#define TXB1D15_size                             0x1
#define TXB1D15_value_mask                       0x20
#define TXB1D15_clear_mask                       0xDF

#define TXB1D16                                  0x6
#define TXB1D16_address                          0xF37
#define TXB1D16_position                         0x6
#define TXB1D16_size                             0x1
#define TXB1D16_value_mask                       0x40
#define TXB1D16_clear_mask                       0xBF

#define TXB1D17                                  0x7
#define TXB1D17_address                          0xF37
#define TXB1D17_position                         0x7
#define TXB1D17_size                             0x1
#define TXB1D17_value_mask                       0x80
#define TXB1D17_clear_mask                       0x7F


/*------------------------------------------------------------------------------#
| TXB1D2                                                                  0xF38 |
#-------------------------------------------------------------------------------#
| TXB1D27 | TXB1D26 | TXB1D25 | TXB1D24 | TBB1D23 | TXB1D22 | TXB1D21 | TXB1D20 |
#-------------------------------------------------------------------------------#
| 7       | 6       | 5       | 4       | 3       | 2       | 1       | 0       |
#------------------------------------------------------------------------------*/

#define TXB1D2                                   0x0
#define TXB1D2_address                           0xF38
#define TXB1D2_position                          0x0
#define TXB1D2_size                              0x8
#define TXB1D2_value_mask                        0xFF
#define TXB1D2_clear_mask                        0x0

#define TXB1D20                                  0x0
#define TXB1D20_address                          0xF38
#define TXB1D20_position                         0x0
#define TXB1D20_size                             0x1
#define TXB1D20_value_mask                       0x1
#define TXB1D20_clear_mask                       0xFE

#define TXB1D21                                  0x1
#define TXB1D21_address                          0xF38
#define TXB1D21_position                         0x1
#define TXB1D21_size                             0x1
#define TXB1D21_value_mask                       0x2
#define TXB1D21_clear_mask                       0xFD

#define TXB1D22                                  0x2
#define TXB1D22_address                          0xF38
#define TXB1D22_position                         0x2
#define TXB1D22_size                             0x1
#define TXB1D22_value_mask                       0x4
#define TXB1D22_clear_mask                       0xFB

#define TBB1D23                                  0x3
#define TBB1D23_address                          0xF38
#define TBB1D23_position                         0x3
#define TBB1D23_size                             0x1
#define TBB1D23_value_mask                       0x8
#define TBB1D23_clear_mask                       0xF7

#define TXB1D23                                  0x3
#define TXB1D23_address                          0xF38
#define TXB1D23_position                         0x3
#define TXB1D23_size                             0x1
#define TXB1D23_value_mask                       0x8
#define TXB1D23_clear_mask                       0xF7

#define TXB1D24                                  0x4
#define TXB1D24_address                          0xF38
#define TXB1D24_position                         0x4
#define TXB1D24_size                             0x1
#define TXB1D24_value_mask                       0x10
#define TXB1D24_clear_mask                       0xEF

#define TXB1D25                                  0x5
#define TXB1D25_address                          0xF38
#define TXB1D25_position                         0x5
#define TXB1D25_size                             0x1
#define TXB1D25_value_mask                       0x20
#define TXB1D25_clear_mask                       0xDF

#define TXB1D26                                  0x6
#define TXB1D26_address                          0xF38
#define TXB1D26_position                         0x6
#define TXB1D26_size                             0x1
#define TXB1D26_value_mask                       0x40
#define TXB1D26_clear_mask                       0xBF

#define TXB1D27                                  0x7
#define TXB1D27_address                          0xF38
#define TXB1D27_position                         0x7
#define TXB1D27_size                             0x1
#define TXB1D27_value_mask                       0x80
#define TXB1D27_clear_mask                       0x7F


/*------------------------------------------------------------------------------#
| TXB1D3                                                                  0xF39 |
#-------------------------------------------------------------------------------#
| TXB1D37 | TXB1D36 | TXB1D35 | TXB1D34 | TXB1D33 | TXB1D32 | TXB1D31 | TXB1D30 |
#-------------------------------------------------------------------------------#
| 7       | 6       | 5       | 4       | 3       | 2       | 1       | 0       |
#------------------------------------------------------------------------------*/

#define TXB1D3                                   0x0
#define TXB1D3_address                           0xF39
#define TXB1D3_position                          0x0
#define TXB1D3_size                              0x8
#define TXB1D3_value_mask                        0xFF
#define TXB1D3_clear_mask                        0x0

#define TXB1D30                                  0x0
#define TXB1D30_address                          0xF39
#define TXB1D30_position                         0x0
#define TXB1D30_size                             0x1
#define TXB1D30_value_mask                       0x1
#define TXB1D30_clear_mask                       0xFE

#define TXB1D31                                  0x1
#define TXB1D31_address                          0xF39
#define TXB1D31_position                         0x1
#define TXB1D31_size                             0x1
#define TXB1D31_value_mask                       0x2
#define TXB1D31_clear_mask                       0xFD

#define TXB1D32                                  0x2
#define TXB1D32_address                          0xF39
#define TXB1D32_position                         0x2
#define TXB1D32_size                             0x1
#define TXB1D32_value_mask                       0x4
#define TXB1D32_clear_mask                       0xFB

#define TXB1D33                                  0x3
#define TXB1D33_address                          0xF39
#define TXB1D33_position                         0x3
#define TXB1D33_size                             0x1
#define TXB1D33_value_mask                       0x8
#define TXB1D33_clear_mask                       0xF7

#define TXB1D34                                  0x4
#define TXB1D34_address                          0xF39
#define TXB1D34_position                         0x4
#define TXB1D34_size                             0x1
#define TXB1D34_value_mask                       0x10
#define TXB1D34_clear_mask                       0xEF

#define TXB1D35                                  0x5
#define TXB1D35_address                          0xF39
#define TXB1D35_position                         0x5
#define TXB1D35_size                             0x1
#define TXB1D35_value_mask                       0x20
#define TXB1D35_clear_mask                       0xDF

#define TXB1D36                                  0x6
#define TXB1D36_address                          0xF39
#define TXB1D36_position                         0x6
#define TXB1D36_size                             0x1
#define TXB1D36_value_mask                       0x40
#define TXB1D36_clear_mask                       0xBF

#define TXB1D37                                  0x7
#define TXB1D37_address                          0xF39
#define TXB1D37_position                         0x7
#define TXB1D37_size                             0x1
#define TXB1D37_value_mask                       0x80
#define TXB1D37_clear_mask                       0x7F


/*------------------------------------------------------------------------------#
| TXB1D4                                                                  0xF3A |
#-------------------------------------------------------------------------------#
| TXB1D47 | TXB1D46 | TXB1D45 | TXB1D44 | TXB1D43 | TXB1D42 | TXB1D41 | TXB1D40 |
#-------------------------------------------------------------------------------#
| 7       | 6       | 5       | 4       | 3       | 2       | 1       | 0       |
#------------------------------------------------------------------------------*/

#define TXB1D4                                   0x0
#define TXB1D4_address                           0xF3A
#define TXB1D4_position                          0x0
#define TXB1D4_size                              0x8
#define TXB1D4_value_mask                        0xFF
#define TXB1D4_clear_mask                        0x0

#define TXB1D40                                  0x0
#define TXB1D40_address                          0xF3A
#define TXB1D40_position                         0x0
#define TXB1D40_size                             0x1
#define TXB1D40_value_mask                       0x1
#define TXB1D40_clear_mask                       0xFE

#define TXB1D41                                  0x1
#define TXB1D41_address                          0xF3A
#define TXB1D41_position                         0x1
#define TXB1D41_size                             0x1
#define TXB1D41_value_mask                       0x2
#define TXB1D41_clear_mask                       0xFD

#define TXB1D42                                  0x2
#define TXB1D42_address                          0xF3A
#define TXB1D42_position                         0x2
#define TXB1D42_size                             0x1
#define TXB1D42_value_mask                       0x4
#define TXB1D42_clear_mask                       0xFB

#define TXB1D43                                  0x3
#define TXB1D43_address                          0xF3A
#define TXB1D43_position                         0x3
#define TXB1D43_size                             0x1
#define TXB1D43_value_mask                       0x8
#define TXB1D43_clear_mask                       0xF7

#define TXB1D44                                  0x4
#define TXB1D44_address                          0xF3A
#define TXB1D44_position                         0x4
#define TXB1D44_size                             0x1
#define TXB1D44_value_mask                       0x10
#define TXB1D44_clear_mask                       0xEF

#define TXB1D45                                  0x5
#define TXB1D45_address                          0xF3A
#define TXB1D45_position                         0x5
#define TXB1D45_size                             0x1
#define TXB1D45_value_mask                       0x20
#define TXB1D45_clear_mask                       0xDF

#define TXB1D46                                  0x6
#define TXB1D46_address                          0xF3A
#define TXB1D46_position                         0x6
#define TXB1D46_size                             0x1
#define TXB1D46_value_mask                       0x40
#define TXB1D46_clear_mask                       0xBF

#define TXB1D47                                  0x7
#define TXB1D47_address                          0xF3A
#define TXB1D47_position                         0x7
#define TXB1D47_size                             0x1
#define TXB1D47_value_mask                       0x80
#define TXB1D47_clear_mask                       0x7F


/*------------------------------------------------------------------------------#
| TXB1D5                                                                  0xF3B |
#-------------------------------------------------------------------------------#
| TXB1D57 | TXB1D56 | TXB1D55 | TXB1D54 | TXB1D53 | TXB1D52 | TXB1D51 | TXB1D50 |
#-------------------------------------------------------------------------------#
| 7       | 6       | 5       | 4       | 3       | 2       | 1       | 0       |
#------------------------------------------------------------------------------*/

#define TXB1D5                                   0x0
#define TXB1D5_address                           0xF3B
#define TXB1D5_position                          0x0
#define TXB1D5_size                              0x8
#define TXB1D5_value_mask                        0xFF
#define TXB1D5_clear_mask                        0x0

#define TXB1D50                                  0x0
#define TXB1D50_address                          0xF3B
#define TXB1D50_position                         0x0
#define TXB1D50_size                             0x1
#define TXB1D50_value_mask                       0x1
#define TXB1D50_clear_mask                       0xFE

#define TXB1D51                                  0x1
#define TXB1D51_address                          0xF3B
#define TXB1D51_position                         0x1
#define TXB1D51_size                             0x1
#define TXB1D51_value_mask                       0x2
#define TXB1D51_clear_mask                       0xFD

#define TXB1D52                                  0x2
#define TXB1D52_address                          0xF3B
#define TXB1D52_position                         0x2
#define TXB1D52_size                             0x1
#define TXB1D52_value_mask                       0x4
#define TXB1D52_clear_mask                       0xFB

#define TXB1D53                                  0x3
#define TXB1D53_address                          0xF3B
#define TXB1D53_position                         0x3
#define TXB1D53_size                             0x1
#define TXB1D53_value_mask                       0x8
#define TXB1D53_clear_mask                       0xF7

#define TXB1D54                                  0x4
#define TXB1D54_address                          0xF3B
#define TXB1D54_position                         0x4
#define TXB1D54_size                             0x1
#define TXB1D54_value_mask                       0x10
#define TXB1D54_clear_mask                       0xEF

#define TXB1D55                                  0x5
#define TXB1D55_address                          0xF3B
#define TXB1D55_position                         0x5
#define TXB1D55_size                             0x1
#define TXB1D55_value_mask                       0x20
#define TXB1D55_clear_mask                       0xDF

#define TXB1D56                                  0x6
#define TXB1D56_address                          0xF3B
#define TXB1D56_position                         0x6
#define TXB1D56_size                             0x1
#define TXB1D56_value_mask                       0x40
#define TXB1D56_clear_mask                       0xBF

#define TXB1D57                                  0x7
#define TXB1D57_address                          0xF3B
#define TXB1D57_position                         0x7
#define TXB1D57_size                             0x1
#define TXB1D57_value_mask                       0x80
#define TXB1D57_clear_mask                       0x7F


/*------------------------------------------------------------------------------#
| TXB1D6                                                                  0xF3C |
#-------------------------------------------------------------------------------#
| TXB1D67 | TXB1D66 | TXB1D65 | TXB1D64 | TXB1D63 | TXB1D62 | TXB1D61 | TXB1D60 |
#-------------------------------------------------------------------------------#
| 7       | 6       | 5       | 4       | 3       | 2       | 1       | 0       |
#------------------------------------------------------------------------------*/

#define TXB1D6                                   0x0
#define TXB1D6_address                           0xF3C
#define TXB1D6_position                          0x0
#define TXB1D6_size                              0x8
#define TXB1D6_value_mask                        0xFF
#define TXB1D6_clear_mask                        0x0

#define TXB1D60                                  0x0
#define TXB1D60_address                          0xF3C
#define TXB1D60_position                         0x0
#define TXB1D60_size                             0x1
#define TXB1D60_value_mask                       0x1
#define TXB1D60_clear_mask                       0xFE

#define TXB1D61                                  0x1
#define TXB1D61_address                          0xF3C
#define TXB1D61_position                         0x1
#define TXB1D61_size                             0x1
#define TXB1D61_value_mask                       0x2
#define TXB1D61_clear_mask                       0xFD

#define TXB1D62                                  0x2
#define TXB1D62_address                          0xF3C
#define TXB1D62_position                         0x2
#define TXB1D62_size                             0x1
#define TXB1D62_value_mask                       0x4
#define TXB1D62_clear_mask                       0xFB

#define TXB1D63                                  0x3
#define TXB1D63_address                          0xF3C
#define TXB1D63_position                         0x3
#define TXB1D63_size                             0x1
#define TXB1D63_value_mask                       0x8
#define TXB1D63_clear_mask                       0xF7

#define TXB1D64                                  0x4
#define TXB1D64_address                          0xF3C
#define TXB1D64_position                         0x4
#define TXB1D64_size                             0x1
#define TXB1D64_value_mask                       0x10
#define TXB1D64_clear_mask                       0xEF

#define TXB1D65                                  0x5
#define TXB1D65_address                          0xF3C
#define TXB1D65_position                         0x5
#define TXB1D65_size                             0x1
#define TXB1D65_value_mask                       0x20
#define TXB1D65_clear_mask                       0xDF

#define TXB1D66                                  0x6
#define TXB1D66_address                          0xF3C
#define TXB1D66_position                         0x6
#define TXB1D66_size                             0x1
#define TXB1D66_value_mask                       0x40
#define TXB1D66_clear_mask                       0xBF

#define TXB1D67                                  0x7
#define TXB1D67_address                          0xF3C
#define TXB1D67_position                         0x7
#define TXB1D67_size                             0x1
#define TXB1D67_value_mask                       0x80
#define TXB1D67_clear_mask                       0x7F


/*------------------------------------------------------------------------------#
| TXB1D7                                                                  0xF3D |
#-------------------------------------------------------------------------------#
| TXB1D77 | TXB1D76 | TXB1D75 | TXB1D74 | TXB1D73 | TXB1D72 | TXB1D71 | TXB1D70 |
#-------------------------------------------------------------------------------#
| 7       | 6       | 5       | 4       | 3       | 2       | 1       | 0       |
#------------------------------------------------------------------------------*/

#define TXB1D7                                   0x0
#define TXB1D7_address                           0xF3D
#define TXB1D7_position                          0x0
#define TXB1D7_size                              0x8
#define TXB1D7_value_mask                        0xFF
#define TXB1D7_clear_mask                        0x0

#define TXB1D70                                  0x0
#define TXB1D70_address                          0xF3D
#define TXB1D70_position                         0x0
#define TXB1D70_size                             0x1
#define TXB1D70_value_mask                       0x1
#define TXB1D70_clear_mask                       0xFE

#define TXB1D71                                  0x1
#define TXB1D71_address                          0xF3D
#define TXB1D71_position                         0x1
#define TXB1D71_size                             0x1
#define TXB1D71_value_mask                       0x2
#define TXB1D71_clear_mask                       0xFD

#define TXB1D72                                  0x2
#define TXB1D72_address                          0xF3D
#define TXB1D72_position                         0x2
#define TXB1D72_size                             0x1
#define TXB1D72_value_mask                       0x4
#define TXB1D72_clear_mask                       0xFB

#define TXB1D73                                  0x3
#define TXB1D73_address                          0xF3D
#define TXB1D73_position                         0x3
#define TXB1D73_size                             0x1
#define TXB1D73_value_mask                       0x8
#define TXB1D73_clear_mask                       0xF7

#define TXB1D74                                  0x4
#define TXB1D74_address                          0xF3D
#define TXB1D74_position                         0x4
#define TXB1D74_size                             0x1
#define TXB1D74_value_mask                       0x10
#define TXB1D74_clear_mask                       0xEF

#define TXB1D75                                  0x5
#define TXB1D75_address                          0xF3D
#define TXB1D75_position                         0x5
#define TXB1D75_size                             0x1
#define TXB1D75_value_mask                       0x20
#define TXB1D75_clear_mask                       0xDF

#define TXB1D76                                  0x6
#define TXB1D76_address                          0xF3D
#define TXB1D76_position                         0x6
#define TXB1D76_size                             0x1
#define TXB1D76_value_mask                       0x40
#define TXB1D76_clear_mask                       0xBF

#define TXB1D77                                  0x7
#define TXB1D77_address                          0xF3D
#define TXB1D77_position                         0x7
#define TXB1D77_size                             0x1
#define TXB1D77_value_mask                       0x80
#define TXB1D77_clear_mask                       0x7F


/*---------------------------------------------------------------------------------------------------------------------------------#
| CANSTATRO3                                                                                                                 0xF3E |
#----------------------------------------------------------------------------------------------------------------------------------#
| CANSTATRO3_OPMODE2 | CANSTATRO3_OPMODE1 | CANSTATRO3_OPMODE0 | - | CANSTATRO3_ICODE2 | CANSTATRO3_ICODE1 | CANSTATRO3_ICODE0 | - |
#----------------------------------------------------------------------------------------------------------------------------------#
| 7                  | 6                  | 5                  | 4 | 3                 | 2                 | 1                 | 0 |
#---------------------------------------------------------------------------------------------------------------------------------*/

#define CANSTATRO3                               0x0
#define CANSTATRO3_address                       0xF3E
#define CANSTATRO3_position                      0x0
#define CANSTATRO3_size                          0x8
#define CANSTATRO3_value_mask                    0xFF
#define CANSTATRO3_clear_mask                    0x0

#define CANSTATRO3_ICODE0                        0x1
#define CANSTATRO3_ICODE0_address                0xF3E
#define CANSTATRO3_ICODE0_position               0x1
#define CANSTATRO3_ICODE0_size                   0x1
#define CANSTATRO3_ICODE0_value_mask             0x2
#define CANSTATRO3_ICODE0_clear_mask             0xFD

#define CANSTATRO3_ICODE1                        0x2
#define CANSTATRO3_ICODE1_address                0xF3E
#define CANSTATRO3_ICODE1_position               0x2
#define CANSTATRO3_ICODE1_size                   0x1
#define CANSTATRO3_ICODE1_value_mask             0x4
#define CANSTATRO3_ICODE1_clear_mask             0xFB

#define CANSTATRO3_ICODE2                        0x3
#define CANSTATRO3_ICODE2_address                0xF3E
#define CANSTATRO3_ICODE2_position               0x3
#define CANSTATRO3_ICODE2_size                   0x1
#define CANSTATRO3_ICODE2_value_mask             0x8
#define CANSTATRO3_ICODE2_clear_mask             0xF7

#define CANSTATRO3_OPMODE0                       0x5
#define CANSTATRO3_OPMODE0_address               0xF3E
#define CANSTATRO3_OPMODE0_position              0x5
#define CANSTATRO3_OPMODE0_size                  0x1
#define CANSTATRO3_OPMODE0_value_mask            0x20
#define CANSTATRO3_OPMODE0_clear_mask            0xDF

#define CANSTATRO3_OPMODE1                       0x6
#define CANSTATRO3_OPMODE1_address               0xF3E
#define CANSTATRO3_OPMODE1_position              0x6
#define CANSTATRO3_OPMODE1_size                  0x1
#define CANSTATRO3_OPMODE1_value_mask            0x40
#define CANSTATRO3_OPMODE1_clear_mask            0xBF

#define CANSTATRO3_OPMODE2                       0x7
#define CANSTATRO3_OPMODE2_address               0xF3E
#define CANSTATRO3_OPMODE2_position              0x7
#define CANSTATRO3_OPMODE2_size                  0x1
#define CANSTATRO3_OPMODE2_value_mask            0x80
#define CANSTATRO3_OPMODE2_clear_mask            0x7F


/*---------------------------------------------------------------------------#
| TXB0CON                                                              0xF40 |
#----------------------------------------------------------------------------#
| - | TXB0ABT | TXB0CON_TXLARB | TXB0ERR | TXB0REQ | - | TXB0PRI1 | TXB0PRI0 |
#----------------------------------------------------------------------------#
| 7 | 6       | 5              | 4       | 3       | 2 | 1        | 0        |
#---------------------------------------------------------------------------*/

#define TXB0CON                                  0x0
#define TXB0CON_address                          0xF40
#define TXB0CON_position                         0x0
#define TXB0CON_size                             0x8
#define TXB0CON_value_mask                       0xFF
#define TXB0CON_clear_mask                       0x0

#define TXB0PRI0                                 0x0
#define TXB0PRI0_address                         0xF40
#define TXB0PRI0_position                        0x0
#define TXB0PRI0_size                            0x1
#define TXB0PRI0_value_mask                      0x1
#define TXB0PRI0_clear_mask                      0xFE

#define TXB0CON_TXPRI0                           0x0
#define TXB0CON_TXPRI0_address                   0xF40
#define TXB0CON_TXPRI0_position                  0x0
#define TXB0CON_TXPRI0_size                      0x1
#define TXB0CON_TXPRI0_value_mask                0x1
#define TXB0CON_TXPRI0_clear_mask                0xFE

#define TXB0CON_TXPRI1                           0x1
#define TXB0CON_TXPRI1_address                   0xF40
#define TXB0CON_TXPRI1_position                  0x1
#define TXB0CON_TXPRI1_size                      0x1
#define TXB0CON_TXPRI1_value_mask                0x2
#define TXB0CON_TXPRI1_clear_mask                0xFD

#define TXB0PRI1                                 0x1
#define TXB0PRI1_address                         0xF40
#define TXB0PRI1_position                        0x1
#define TXB0PRI1_size                            0x1
#define TXB0PRI1_value_mask                      0x2
#define TXB0PRI1_clear_mask                      0xFD

#define TXB0REQ                                  0x3
#define TXB0REQ_address                          0xF40
#define TXB0REQ_position                         0x3
#define TXB0REQ_size                             0x1
#define TXB0REQ_value_mask                       0x8
#define TXB0REQ_clear_mask                       0xF7

#define TXB0CON_TXREQ                            0x3
#define TXB0CON_TXREQ_address                    0xF40
#define TXB0CON_TXREQ_position                   0x3
#define TXB0CON_TXREQ_size                       0x1
#define TXB0CON_TXREQ_value_mask                 0x8
#define TXB0CON_TXREQ_clear_mask                 0xF7

#define TXB0CON_TXERR                            0x4
#define TXB0CON_TXERR_address                    0xF40
#define TXB0CON_TXERR_position                   0x4
#define TXB0CON_TXERR_size                       0x1
#define TXB0CON_TXERR_value_mask                 0x10
#define TXB0CON_TXERR_clear_mask                 0xEF

#define TXB0ERR                                  0x4
#define TXB0ERR_address                          0xF40
#define TXB0ERR_position                         0x4
#define TXB0ERR_size                             0x1
#define TXB0ERR_value_mask                       0x10
#define TXB0ERR_clear_mask                       0xEF

#define TXB0CON_TXLARB                           0x5
#define TXB0CON_TXLARB_address                   0xF40
#define TXB0CON_TXLARB_position                  0x5
#define TXB0CON_TXLARB_size                      0x1
#define TXB0CON_TXLARB_value_mask                0x20
#define TXB0CON_TXLARB_clear_mask                0xDF

#define TXB0LARB                                 0x5
#define TXB0LARB_address                         0xF40
#define TXB0LARB_position                        0x5
#define TXB0LARB_size                            0x1
#define TXB0LARB_value_mask                      0x20
#define TXB0LARB_clear_mask                      0xDF

#define TXB0ABT                                  0x6
#define TXB0ABT_address                          0xF40
#define TXB0ABT_position                         0x6
#define TXB0ABT_size                             0x1
#define TXB0ABT_value_mask                       0x40
#define TXB0ABT_clear_mask                       0xBF

#define TXB0CON_TXABT                            0x6
#define TXB0CON_TXABT_address                    0xF40
#define TXB0CON_TXABT_position                   0x6
#define TXB0CON_TXABT_size                       0x1
#define TXB0CON_TXABT_value_mask                 0x40
#define TXB0CON_TXABT_clear_mask                 0xBF


/*--------------------------------------------------------------------------------------------#
| TXB0SIDH                                                                              0xF41 |
#---------------------------------------------------------------------------------------------#
| TXB0SIDH_SID10 | TXB0SID9 | TXB0SID8 | TXB0SID7 | TXB0SID6 | TXB0SID5 | TXB0SID4 | TXB0SID3 |
#---------------------------------------------------------------------------------------------#
| 7              | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
#--------------------------------------------------------------------------------------------*/

#define TXB0SIDH                                 0x0
#define TXB0SIDH_address                         0xF41
#define TXB0SIDH_position                        0x0
#define TXB0SIDH_size                            0x8
#define TXB0SIDH_value_mask                      0xFF
#define TXB0SIDH_clear_mask                      0x0

#define TXB0SID3                                 0x0
#define TXB0SID3_address                         0xF41
#define TXB0SID3_position                        0x0
#define TXB0SID3_size                            0x1
#define TXB0SID3_value_mask                      0x1
#define TXB0SID3_clear_mask                      0xFE

#define TXB0SIDH_SID3                            0x0
#define TXB0SIDH_SID3_address                    0xF41
#define TXB0SIDH_SID3_position                   0x0
#define TXB0SIDH_SID3_size                       0x1
#define TXB0SIDH_SID3_value_mask                 0x1
#define TXB0SIDH_SID3_clear_mask                 0xFE

#define TXB0SID4                                 0x1
#define TXB0SID4_address                         0xF41
#define TXB0SID4_position                        0x1
#define TXB0SID4_size                            0x1
#define TXB0SID4_value_mask                      0x2
#define TXB0SID4_clear_mask                      0xFD

#define TXB0SIDH_SID4                            0x1
#define TXB0SIDH_SID4_address                    0xF41
#define TXB0SIDH_SID4_position                   0x1
#define TXB0SIDH_SID4_size                       0x1
#define TXB0SIDH_SID4_value_mask                 0x2
#define TXB0SIDH_SID4_clear_mask                 0xFD

#define TXB0SID5                                 0x2
#define TXB0SID5_address                         0xF41
#define TXB0SID5_position                        0x2
#define TXB0SID5_size                            0x1
#define TXB0SID5_value_mask                      0x4
#define TXB0SID5_clear_mask                      0xFB

#define TXB0SIDH_SID5                            0x2
#define TXB0SIDH_SID5_address                    0xF41
#define TXB0SIDH_SID5_position                   0x2
#define TXB0SIDH_SID5_size                       0x1
#define TXB0SIDH_SID5_value_mask                 0x4
#define TXB0SIDH_SID5_clear_mask                 0xFB

#define TXB0SID6                                 0x3
#define TXB0SID6_address                         0xF41
#define TXB0SID6_position                        0x3
#define TXB0SID6_size                            0x1
#define TXB0SID6_value_mask                      0x8
#define TXB0SID6_clear_mask                      0xF7

#define TXB0SIDH_SID6                            0x3
#define TXB0SIDH_SID6_address                    0xF41
#define TXB0SIDH_SID6_position                   0x3
#define TXB0SIDH_SID6_size                       0x1
#define TXB0SIDH_SID6_value_mask                 0x8
#define TXB0SIDH_SID6_clear_mask                 0xF7

#define TXB0SID7                                 0x4
#define TXB0SID7_address                         0xF41
#define TXB0SID7_position                        0x4
#define TXB0SID7_size                            0x1
#define TXB0SID7_value_mask                      0x10
#define TXB0SID7_clear_mask                      0xEF

#define TXB0SIDH_SID7                            0x4
#define TXB0SIDH_SID7_address                    0xF41
#define TXB0SIDH_SID7_position                   0x4
#define TXB0SIDH_SID7_size                       0x1
#define TXB0SIDH_SID7_value_mask                 0x10
#define TXB0SIDH_SID7_clear_mask                 0xEF

#define TXB0SID8                                 0x5
#define TXB0SID8_address                         0xF41
#define TXB0SID8_position                        0x5
#define TXB0SID8_size                            0x1
#define TXB0SID8_value_mask                      0x20
#define TXB0SID8_clear_mask                      0xDF

#define TXB0SIDH_SID8                            0x5
#define TXB0SIDH_SID8_address                    0xF41
#define TXB0SIDH_SID8_position                   0x5
#define TXB0SIDH_SID8_size                       0x1
#define TXB0SIDH_SID8_value_mask                 0x20
#define TXB0SIDH_SID8_clear_mask                 0xDF

#define TXB0SID9                                 0x6
#define TXB0SID9_address                         0xF41
#define TXB0SID9_position                        0x6
#define TXB0SID9_size                            0x1
#define TXB0SID9_value_mask                      0x40
#define TXB0SID9_clear_mask                      0xBF

#define TXB0SIDH_SID9                            0x6
#define TXB0SIDH_SID9_address                    0xF41
#define TXB0SIDH_SID9_position                   0x6
#define TXB0SIDH_SID9_size                       0x1
#define TXB0SIDH_SID9_value_mask                 0x40
#define TXB0SIDH_SID9_clear_mask                 0xBF

#define TXB0SIDH_SID10                           0x7
#define TXB0SIDH_SID10_address                   0xF41
#define TXB0SIDH_SID10_position                  0x7
#define TXB0SIDH_SID10_size                      0x1
#define TXB0SIDH_SID10_value_mask                0x80
#define TXB0SIDH_SID10_clear_mask                0x7F

#define TXB0SID10                                0x7
#define TXB0SID10_address                        0xF41
#define TXB0SID10_position                       0x7
#define TXB0SID10_size                           0x1
#define TXB0SID10_value_mask                     0x80
#define TXB0SID10_clear_mask                     0x7F


/*---------------------------------------------------------------------------#
| TXB0SIDL                                                             0xF42 |
#----------------------------------------------------------------------------#
| TXB0SID2 | TXB0SID1 | TXB0SID0 | - | TXB0EXIDE | - | TXB0EID17 | TXB0EID16 |
#----------------------------------------------------------------------------#
| 7        | 6        | 5        | 4 | 3         | 2 | 1         | 0         |
#---------------------------------------------------------------------------*/

#define TXB0SIDL                                 0x0
#define TXB0SIDL_address                         0xF42
#define TXB0SIDL_position                        0x0
#define TXB0SIDL_size                            0x8
#define TXB0SIDL_value_mask                      0xFF
#define TXB0SIDL_clear_mask                      0x0

#define TXB0EID16                                0x0
#define TXB0EID16_address                        0xF42
#define TXB0EID16_position                       0x0
#define TXB0EID16_size                           0x1
#define TXB0EID16_value_mask                     0x1
#define TXB0EID16_clear_mask                     0xFE

#define TXB0SIDL_EID16                           0x0
#define TXB0SIDL_EID16_address                   0xF42
#define TXB0SIDL_EID16_position                  0x0
#define TXB0SIDL_EID16_size                      0x1
#define TXB0SIDL_EID16_value_mask                0x1
#define TXB0SIDL_EID16_clear_mask                0xFE

#define TXB0EID17                                0x1
#define TXB0EID17_address                        0xF42
#define TXB0EID17_position                       0x1
#define TXB0EID17_size                           0x1
#define TXB0EID17_value_mask                     0x2
#define TXB0EID17_clear_mask                     0xFD

#define TXB0SIDL_EID17                           0x1
#define TXB0SIDL_EID17_address                   0xF42
#define TXB0SIDL_EID17_position                  0x1
#define TXB0SIDL_EID17_size                      0x1
#define TXB0SIDL_EID17_value_mask                0x2
#define TXB0SIDL_EID17_clear_mask                0xFD

#define TXB0SIDL_EXIDE                           0x3
#define TXB0SIDL_EXIDE_address                   0xF42
#define TXB0SIDL_EXIDE_position                  0x3
#define TXB0SIDL_EXIDE_size                      0x1
#define TXB0SIDL_EXIDE_value_mask                0x8
#define TXB0SIDL_EXIDE_clear_mask                0xF7

#define TXB0EXIDE                                0x3
#define TXB0EXIDE_address                        0xF42
#define TXB0EXIDE_position                       0x3
#define TXB0EXIDE_size                           0x1
#define TXB0EXIDE_value_mask                     0x8
#define TXB0EXIDE_clear_mask                     0xF7

#define TXB0SID0                                 0x5
#define TXB0SID0_address                         0xF42
#define TXB0SID0_position                        0x5
#define TXB0SID0_size                            0x1
#define TXB0SID0_value_mask                      0x20
#define TXB0SID0_clear_mask                      0xDF

#define TXB0SIDL_SID0                            0x5
#define TXB0SIDL_SID0_address                    0xF42
#define TXB0SIDL_SID0_position                   0x5
#define TXB0SIDL_SID0_size                       0x1
#define TXB0SIDL_SID0_value_mask                 0x20
#define TXB0SIDL_SID0_clear_mask                 0xDF

#define TXB0SID1                                 0x6
#define TXB0SID1_address                         0xF42
#define TXB0SID1_position                        0x6
#define TXB0SID1_size                            0x1
#define TXB0SID1_value_mask                      0x40
#define TXB0SID1_clear_mask                      0xBF

#define TXB0SIDL_SID1                            0x6
#define TXB0SIDL_SID1_address                    0xF42
#define TXB0SIDL_SID1_position                   0x6
#define TXB0SIDL_SID1_size                       0x1
#define TXB0SIDL_SID1_value_mask                 0x40
#define TXB0SIDL_SID1_clear_mask                 0xBF

#define TXB0SID2                                 0x7
#define TXB0SID2_address                         0xF42
#define TXB0SID2_position                        0x7
#define TXB0SID2_size                            0x1
#define TXB0SID2_value_mask                      0x80
#define TXB0SID2_clear_mask                      0x7F

#define TXB0SIDL_SID2                            0x7
#define TXB0SIDL_SID2_address                    0xF42
#define TXB0SIDL_SID2_position                   0x7
#define TXB0SIDL_SID2_size                       0x1
#define TXB0SIDL_SID2_value_mask                 0x80
#define TXB0SIDL_SID2_clear_mask                 0x7F


/*--------------------------------------------------------------------------------------------------------------------------#
| TXB0EIDH                                                                                                            0xF43 |
#---------------------------------------------------------------------------------------------------------------------------#
| TXB0EIDH_EID15 | TXB0EIDH_EID14 | TXB0EIDH_EID13 | TXB0EIDH_EID12 | TXB0EIDH_EID11 | TXB0EIDH_EID10 | TXB0EID9 | TXB0EID8 |
#---------------------------------------------------------------------------------------------------------------------------#
| 7              | 6              | 5              | 4              | 3              | 2              | 1        | 0        |
#--------------------------------------------------------------------------------------------------------------------------*/

#define TXB0EIDH                                 0x0
#define TXB0EIDH_address                         0xF43
#define TXB0EIDH_position                        0x0
#define TXB0EIDH_size                            0x8
#define TXB0EIDH_value_mask                      0xFF
#define TXB0EIDH_clear_mask                      0x0

#define TXB0EID8                                 0x0
#define TXB0EID8_address                         0xF43
#define TXB0EID8_position                        0x0
#define TXB0EID8_size                            0x1
#define TXB0EID8_value_mask                      0x1
#define TXB0EID8_clear_mask                      0xFE

#define TXB0EIDH_EID8                            0x0
#define TXB0EIDH_EID8_address                    0xF43
#define TXB0EIDH_EID8_position                   0x0
#define TXB0EIDH_EID8_size                       0x1
#define TXB0EIDH_EID8_value_mask                 0x1
#define TXB0EIDH_EID8_clear_mask                 0xFE

#define TXB0EID9                                 0x1
#define TXB0EID9_address                         0xF43
#define TXB0EID9_position                        0x1
#define TXB0EID9_size                            0x1
#define TXB0EID9_value_mask                      0x2
#define TXB0EID9_clear_mask                      0xFD

#define TXB0EIDH_EID9                            0x1
#define TXB0EIDH_EID9_address                    0xF43
#define TXB0EIDH_EID9_position                   0x1
#define TXB0EIDH_EID9_size                       0x1
#define TXB0EIDH_EID9_value_mask                 0x2
#define TXB0EIDH_EID9_clear_mask                 0xFD

#define TXB0EIDH_EID10                           0x2
#define TXB0EIDH_EID10_address                   0xF43
#define TXB0EIDH_EID10_position                  0x2
#define TXB0EIDH_EID10_size                      0x1
#define TXB0EIDH_EID10_value_mask                0x4
#define TXB0EIDH_EID10_clear_mask                0xFB

#define TXB0EID10                                0x2
#define TXB0EID10_address                        0xF43
#define TXB0EID10_position                       0x2
#define TXB0EID10_size                           0x1
#define TXB0EID10_value_mask                     0x4
#define TXB0EID10_clear_mask                     0xFB

#define TXB0EID11                                0x3
#define TXB0EID11_address                        0xF43
#define TXB0EID11_position                       0x3
#define TXB0EID11_size                           0x1
#define TXB0EID11_value_mask                     0x8
#define TXB0EID11_clear_mask                     0xF7

#define TXB0EIDH_EID11                           0x3
#define TXB0EIDH_EID11_address                   0xF43
#define TXB0EIDH_EID11_position                  0x3
#define TXB0EIDH_EID11_size                      0x1
#define TXB0EIDH_EID11_value_mask                0x8
#define TXB0EIDH_EID11_clear_mask                0xF7

#define TXB0EIDH_EID12                           0x4
#define TXB0EIDH_EID12_address                   0xF43
#define TXB0EIDH_EID12_position                  0x4
#define TXB0EIDH_EID12_size                      0x1
#define TXB0EIDH_EID12_value_mask                0x10
#define TXB0EIDH_EID12_clear_mask                0xEF

#define TXB0EID12                                0x4
#define TXB0EID12_address                        0xF43
#define TXB0EID12_position                       0x4
#define TXB0EID12_size                           0x1
#define TXB0EID12_value_mask                     0x10
#define TXB0EID12_clear_mask                     0xEF

#define TXB0EIDH_EID13                           0x5
#define TXB0EIDH_EID13_address                   0xF43
#define TXB0EIDH_EID13_position                  0x5
#define TXB0EIDH_EID13_size                      0x1
#define TXB0EIDH_EID13_value_mask                0x20
#define TXB0EIDH_EID13_clear_mask                0xDF

#define TXB0EID13                                0x5
#define TXB0EID13_address                        0xF43
#define TXB0EID13_position                       0x5
#define TXB0EID13_size                           0x1
#define TXB0EID13_value_mask                     0x20
#define TXB0EID13_clear_mask                     0xDF

#define TXB0EIDH_EID14                           0x6
#define TXB0EIDH_EID14_address                   0xF43
#define TXB0EIDH_EID14_position                  0x6
#define TXB0EIDH_EID14_size                      0x1
#define TXB0EIDH_EID14_value_mask                0x40
#define TXB0EIDH_EID14_clear_mask                0xBF

#define TXB0EID14                                0x6
#define TXB0EID14_address                        0xF43
#define TXB0EID14_position                       0x6
#define TXB0EID14_size                           0x1
#define TXB0EID14_value_mask                     0x40
#define TXB0EID14_clear_mask                     0xBF

#define TXB0EIDH_EID15                           0x7
#define TXB0EIDH_EID15_address                   0xF43
#define TXB0EIDH_EID15_position                  0x7
#define TXB0EIDH_EID15_size                      0x1
#define TXB0EIDH_EID15_value_mask                0x80
#define TXB0EIDH_EID15_clear_mask                0x7F

#define TXB0EID15                                0x7
#define TXB0EID15_address                        0xF43
#define TXB0EID15_position                       0x7
#define TXB0EID15_size                           0x1
#define TXB0EID15_value_mask                     0x80
#define TXB0EID15_clear_mask                     0x7F


/*------------------------------------------------------------------------------------------------------------------------------#
| TXB0EIDL                                                                                                                0xF44 |
#-------------------------------------------------------------------------------------------------------------------------------#
| TXB0EIDL_EID7 | TXB0EIDL_EID6 | TXB0EIDL_EID5 | TXB0EIDL_EID4 | TXB0EIDL_EID3 | TXB0EIDL_EID2 | TXB0EIDL_EID1 | TXB0EIDL_EID0 |
#-------------------------------------------------------------------------------------------------------------------------------#
| 7             | 6             | 5             | 4             | 3             | 2             | 1             | 0             |
#------------------------------------------------------------------------------------------------------------------------------*/

#define TXB0EIDL                                 0x0
#define TXB0EIDL_address                         0xF44
#define TXB0EIDL_position                        0x0
#define TXB0EIDL_size                            0x8
#define TXB0EIDL_value_mask                      0xFF
#define TXB0EIDL_clear_mask                      0x0

#define TXB0EIDL_EID0                            0x0
#define TXB0EIDL_EID0_address                    0xF44
#define TXB0EIDL_EID0_position                   0x0
#define TXB0EIDL_EID0_size                       0x1
#define TXB0EIDL_EID0_value_mask                 0x1
#define TXB0EIDL_EID0_clear_mask                 0xFE

#define TXB0EID0                                 0x0
#define TXB0EID0_address                         0xF44
#define TXB0EID0_position                        0x0
#define TXB0EID0_size                            0x1
#define TXB0EID0_value_mask                      0x1
#define TXB0EID0_clear_mask                      0xFE

#define TXB0EIDL_EID1                            0x1
#define TXB0EIDL_EID1_address                    0xF44
#define TXB0EIDL_EID1_position                   0x1
#define TXB0EIDL_EID1_size                       0x1
#define TXB0EIDL_EID1_value_mask                 0x2
#define TXB0EIDL_EID1_clear_mask                 0xFD

#define TXB0EID1                                 0x1
#define TXB0EID1_address                         0xF44
#define TXB0EID1_position                        0x1
#define TXB0EID1_size                            0x1
#define TXB0EID1_value_mask                      0x2
#define TXB0EID1_clear_mask                      0xFD

#define TXB0EIDL_EID2                            0x2
#define TXB0EIDL_EID2_address                    0xF44
#define TXB0EIDL_EID2_position                   0x2
#define TXB0EIDL_EID2_size                       0x1
#define TXB0EIDL_EID2_value_mask                 0x4
#define TXB0EIDL_EID2_clear_mask                 0xFB

#define TXB0EID2                                 0x2
#define TXB0EID2_address                         0xF44
#define TXB0EID2_position                        0x2
#define TXB0EID2_size                            0x1
#define TXB0EID2_value_mask                      0x4
#define TXB0EID2_clear_mask                      0xFB

#define TXB0EIDL_EID3                            0x3
#define TXB0EIDL_EID3_address                    0xF44
#define TXB0EIDL_EID3_position                   0x3
#define TXB0EIDL_EID3_size                       0x1
#define TXB0EIDL_EID3_value_mask                 0x8
#define TXB0EIDL_EID3_clear_mask                 0xF7

#define TXB0EID3                                 0x3
#define TXB0EID3_address                         0xF44
#define TXB0EID3_position                        0x3
#define TXB0EID3_size                            0x1
#define TXB0EID3_value_mask                      0x8
#define TXB0EID3_clear_mask                      0xF7

#define TXB0EIDL_EID4                            0x4
#define TXB0EIDL_EID4_address                    0xF44
#define TXB0EIDL_EID4_position                   0x4
#define TXB0EIDL_EID4_size                       0x1
#define TXB0EIDL_EID4_value_mask                 0x10
#define TXB0EIDL_EID4_clear_mask                 0xEF

#define TXB0EID4                                 0x4
#define TXB0EID4_address                         0xF44
#define TXB0EID4_position                        0x4
#define TXB0EID4_size                            0x1
#define TXB0EID4_value_mask                      0x10
#define TXB0EID4_clear_mask                      0xEF

#define TXB0EIDL_EID5                            0x5
#define TXB0EIDL_EID5_address                    0xF44
#define TXB0EIDL_EID5_position                   0x5
#define TXB0EIDL_EID5_size                       0x1
#define TXB0EIDL_EID5_value_mask                 0x20
#define TXB0EIDL_EID5_clear_mask                 0xDF

#define TXB0EID5                                 0x5
#define TXB0EID5_address                         0xF44
#define TXB0EID5_position                        0x5
#define TXB0EID5_size                            0x1
#define TXB0EID5_value_mask                      0x20
#define TXB0EID5_clear_mask                      0xDF

#define TXB0EIDL_EID6                            0x6
#define TXB0EIDL_EID6_address                    0xF44
#define TXB0EIDL_EID6_position                   0x6
#define TXB0EIDL_EID6_size                       0x1
#define TXB0EIDL_EID6_value_mask                 0x40
#define TXB0EIDL_EID6_clear_mask                 0xBF

#define TXB0EID6                                 0x6
#define TXB0EID6_address                         0xF44
#define TXB0EID6_position                        0x6
#define TXB0EID6_size                            0x1
#define TXB0EID6_value_mask                      0x40
#define TXB0EID6_clear_mask                      0xBF

#define TXB0EIDL_EID7                            0x7
#define TXB0EIDL_EID7_address                    0xF44
#define TXB0EIDL_EID7_position                   0x7
#define TXB0EIDL_EID7_size                       0x1
#define TXB0EIDL_EID7_value_mask                 0x80
#define TXB0EIDL_EID7_clear_mask                 0x7F

#define TXB0EID7                                 0x7
#define TXB0EID7_address                         0xF44
#define TXB0EID7_position                        0x7
#define TXB0EID7_size                            0x1
#define TXB0EID7_value_mask                      0x80
#define TXB0EID7_clear_mask                      0x7F


/*----------------------------------------------------------------------#
| TXB0DLC                                                         0xF45 |
#-----------------------------------------------------------------------#
| - | TXB0DLC_TXRTR | - | - | TXB0DLC3 | TXB0DLC2 | TXB0DLC1 | TXB0DLC0 |
#-----------------------------------------------------------------------#
| 7 | 6             | 5 | 4 | 3        | 2        | 1        | 0        |
#----------------------------------------------------------------------*/

#define TXB0DLC                                  0x0
#define TXB0DLC_address                          0xF45
#define TXB0DLC_position                         0x0
#define TXB0DLC_size                             0x8
#define TXB0DLC_value_mask                       0xFF
#define TXB0DLC_clear_mask                       0x0

#define TXB0DLC0                                 0x0
#define TXB0DLC0_address                         0xF45
#define TXB0DLC0_position                        0x0
#define TXB0DLC0_size                            0x1
#define TXB0DLC0_value_mask                      0x1
#define TXB0DLC0_clear_mask                      0xFE

#define TXB0DLC_DLC0                             0x0
#define TXB0DLC_DLC0_address                     0xF45
#define TXB0DLC_DLC0_position                    0x0
#define TXB0DLC_DLC0_size                        0x1
#define TXB0DLC_DLC0_value_mask                  0x1
#define TXB0DLC_DLC0_clear_mask                  0xFE

#define TXB0DLC1                                 0x1
#define TXB0DLC1_address                         0xF45
#define TXB0DLC1_position                        0x1
#define TXB0DLC1_size                            0x1
#define TXB0DLC1_value_mask                      0x2
#define TXB0DLC1_clear_mask                      0xFD

#define TXB0DLC_DLC1                             0x1
#define TXB0DLC_DLC1_address                     0xF45
#define TXB0DLC_DLC1_position                    0x1
#define TXB0DLC_DLC1_size                        0x1
#define TXB0DLC_DLC1_value_mask                  0x2
#define TXB0DLC_DLC1_clear_mask                  0xFD

#define TXB0DLC2                                 0x2
#define TXB0DLC2_address                         0xF45
#define TXB0DLC2_position                        0x2
#define TXB0DLC2_size                            0x1
#define TXB0DLC2_value_mask                      0x4
#define TXB0DLC2_clear_mask                      0xFB

#define TXB0DLC_DLC2                             0x2
#define TXB0DLC_DLC2_address                     0xF45
#define TXB0DLC_DLC2_position                    0x2
#define TXB0DLC_DLC2_size                        0x1
#define TXB0DLC_DLC2_value_mask                  0x4
#define TXB0DLC_DLC2_clear_mask                  0xFB

#define TXB0DLC3                                 0x3
#define TXB0DLC3_address                         0xF45
#define TXB0DLC3_position                        0x3
#define TXB0DLC3_size                            0x1
#define TXB0DLC3_value_mask                      0x8
#define TXB0DLC3_clear_mask                      0xF7

#define TXB0DLC_DLC3                             0x3
#define TXB0DLC_DLC3_address                     0xF45
#define TXB0DLC_DLC3_position                    0x3
#define TXB0DLC_DLC3_size                        0x1
#define TXB0DLC_DLC3_value_mask                  0x8
#define TXB0DLC_DLC3_clear_mask                  0xF7

#define TXB0RTR                                  0x6
#define TXB0RTR_address                          0xF45
#define TXB0RTR_position                         0x6
#define TXB0RTR_size                             0x1
#define TXB0RTR_value_mask                       0x40
#define TXB0RTR_clear_mask                       0xBF

#define TXB0DLC_TXRTR                            0x6
#define TXB0DLC_TXRTR_address                    0xF45
#define TXB0DLC_TXRTR_position                   0x6
#define TXB0DLC_TXRTR_size                       0x1
#define TXB0DLC_TXRTR_value_mask                 0x40
#define TXB0DLC_TXRTR_clear_mask                 0xBF


/*------------------------------------------------------------------------------#
| TXB0D0                                                                  0xF46 |
#-------------------------------------------------------------------------------#
| TXB0D07 | TXB0D06 | TXB0D05 | TXB0D04 | TXB0D03 | TXB0D02 | TXB0D01 | TXB0D00 |
#-------------------------------------------------------------------------------#
| 7       | 6       | 5       | 4       | 3       | 2       | 1       | 0       |
#------------------------------------------------------------------------------*/

#define TXB0D0                                   0x0
#define TXB0D0_address                           0xF46
#define TXB0D0_position                          0x0
#define TXB0D0_size                              0x8
#define TXB0D0_value_mask                        0xFF
#define TXB0D0_clear_mask                        0x0

#define TXB0D00                                  0x0
#define TXB0D00_address                          0xF46
#define TXB0D00_position                         0x0
#define TXB0D00_size                             0x1
#define TXB0D00_value_mask                       0x1
#define TXB0D00_clear_mask                       0xFE

#define TXB0D01                                  0x1
#define TXB0D01_address                          0xF46
#define TXB0D01_position                         0x1
#define TXB0D01_size                             0x1
#define TXB0D01_value_mask                       0x2
#define TXB0D01_clear_mask                       0xFD

#define TXB0D02                                  0x2
#define TXB0D02_address                          0xF46
#define TXB0D02_position                         0x2
#define TXB0D02_size                             0x1
#define TXB0D02_value_mask                       0x4
#define TXB0D02_clear_mask                       0xFB

#define TXB0D03                                  0x3
#define TXB0D03_address                          0xF46
#define TXB0D03_position                         0x3
#define TXB0D03_size                             0x1
#define TXB0D03_value_mask                       0x8
#define TXB0D03_clear_mask                       0xF7

#define TXB0D04                                  0x4
#define TXB0D04_address                          0xF46
#define TXB0D04_position                         0x4
#define TXB0D04_size                             0x1
#define TXB0D04_value_mask                       0x10
#define TXB0D04_clear_mask                       0xEF

#define TXB0D05                                  0x5
#define TXB0D05_address                          0xF46
#define TXB0D05_position                         0x5
#define TXB0D05_size                             0x1
#define TXB0D05_value_mask                       0x20
#define TXB0D05_clear_mask                       0xDF

#define TXB0D06                                  0x6
#define TXB0D06_address                          0xF46
#define TXB0D06_position                         0x6
#define TXB0D06_size                             0x1
#define TXB0D06_value_mask                       0x40
#define TXB0D06_clear_mask                       0xBF

#define TXB0D07                                  0x7
#define TXB0D07_address                          0xF46
#define TXB0D07_position                         0x7
#define TXB0D07_size                             0x1
#define TXB0D07_value_mask                       0x80
#define TXB0D07_clear_mask                       0x7F


/*------------------------------------------------------------------------------#
| TXB0D1                                                                  0xF47 |
#-------------------------------------------------------------------------------#
| TXB0D17 | TXB0D16 | TXB0D15 | TXB0D14 | TXB0D13 | TXB0D12 | TXB0D11 | TXB0D10 |
#-------------------------------------------------------------------------------#
| 7       | 6       | 5       | 4       | 3       | 2       | 1       | 0       |
#------------------------------------------------------------------------------*/

#define TXB0D1                                   0x0
#define TXB0D1_address                           0xF47
#define TXB0D1_position                          0x0
#define TXB0D1_size                              0x8
#define TXB0D1_value_mask                        0xFF
#define TXB0D1_clear_mask                        0x0

#define TXB0D10                                  0x0
#define TXB0D10_address                          0xF47
#define TXB0D10_position                         0x0
#define TXB0D10_size                             0x1
#define TXB0D10_value_mask                       0x1
#define TXB0D10_clear_mask                       0xFE

#define TXB0D11                                  0x1
#define TXB0D11_address                          0xF47
#define TXB0D11_position                         0x1
#define TXB0D11_size                             0x1
#define TXB0D11_value_mask                       0x2
#define TXB0D11_clear_mask                       0xFD

#define TXB0D12                                  0x2
#define TXB0D12_address                          0xF47
#define TXB0D12_position                         0x2
#define TXB0D12_size                             0x1
#define TXB0D12_value_mask                       0x4
#define TXB0D12_clear_mask                       0xFB

#define TXB0D13                                  0x3
#define TXB0D13_address                          0xF47
#define TXB0D13_position                         0x3
#define TXB0D13_size                             0x1
#define TXB0D13_value_mask                       0x8
#define TXB0D13_clear_mask                       0xF7

#define TXB0D14                                  0x4
#define TXB0D14_address                          0xF47
#define TXB0D14_position                         0x4
#define TXB0D14_size                             0x1
#define TXB0D14_value_mask                       0x10
#define TXB0D14_clear_mask                       0xEF

#define TXB0D15                                  0x5
#define TXB0D15_address                          0xF47
#define TXB0D15_position                         0x5
#define TXB0D15_size                             0x1
#define TXB0D15_value_mask                       0x20
#define TXB0D15_clear_mask                       0xDF

#define TXB0D16                                  0x6
#define TXB0D16_address                          0xF47
#define TXB0D16_position                         0x6
#define TXB0D16_size                             0x1
#define TXB0D16_value_mask                       0x40
#define TXB0D16_clear_mask                       0xBF

#define TXB0D17                                  0x7
#define TXB0D17_address                          0xF47
#define TXB0D17_position                         0x7
#define TXB0D17_size                             0x1
#define TXB0D17_value_mask                       0x80
#define TXB0D17_clear_mask                       0x7F


/*------------------------------------------------------------------------------#
| TXB0D2                                                                  0xF48 |
#-------------------------------------------------------------------------------#
| TXB0D27 | TXB0D26 | TXB0D25 | TXB0D24 | TXB0D23 | TXB0D22 | TXB0D21 | TXB0D20 |
#-------------------------------------------------------------------------------#
| 7       | 6       | 5       | 4       | 3       | 2       | 1       | 0       |
#------------------------------------------------------------------------------*/

#define TXB0D2                                   0x0
#define TXB0D2_address                           0xF48
#define TXB0D2_position                          0x0
#define TXB0D2_size                              0x8
#define TXB0D2_value_mask                        0xFF
#define TXB0D2_clear_mask                        0x0

#define TXB0D20                                  0x0
#define TXB0D20_address                          0xF48
#define TXB0D20_position                         0x0
#define TXB0D20_size                             0x1
#define TXB0D20_value_mask                       0x1
#define TXB0D20_clear_mask                       0xFE

#define TXB0D21                                  0x1
#define TXB0D21_address                          0xF48
#define TXB0D21_position                         0x1
#define TXB0D21_size                             0x1
#define TXB0D21_value_mask                       0x2
#define TXB0D21_clear_mask                       0xFD

#define TXB0D22                                  0x2
#define TXB0D22_address                          0xF48
#define TXB0D22_position                         0x2
#define TXB0D22_size                             0x1
#define TXB0D22_value_mask                       0x4
#define TXB0D22_clear_mask                       0xFB

#define TXB0D23                                  0x3
#define TXB0D23_address                          0xF48
#define TXB0D23_position                         0x3
#define TXB0D23_size                             0x1
#define TXB0D23_value_mask                       0x8
#define TXB0D23_clear_mask                       0xF7

#define TXB0D24                                  0x4
#define TXB0D24_address                          0xF48
#define TXB0D24_position                         0x4
#define TXB0D24_size                             0x1
#define TXB0D24_value_mask                       0x10
#define TXB0D24_clear_mask                       0xEF

#define TXB0D25                                  0x5
#define TXB0D25_address                          0xF48
#define TXB0D25_position                         0x5
#define TXB0D25_size                             0x1
#define TXB0D25_value_mask                       0x20
#define TXB0D25_clear_mask                       0xDF

#define TXB0D26                                  0x6
#define TXB0D26_address                          0xF48
#define TXB0D26_position                         0x6
#define TXB0D26_size                             0x1
#define TXB0D26_value_mask                       0x40
#define TXB0D26_clear_mask                       0xBF

#define TXB0D27                                  0x7
#define TXB0D27_address                          0xF48
#define TXB0D27_position                         0x7
#define TXB0D27_size                             0x1
#define TXB0D27_value_mask                       0x80
#define TXB0D27_clear_mask                       0x7F


/*------------------------------------------------------------------------------#
| TXB0D3                                                                  0xF49 |
#-------------------------------------------------------------------------------#
| TXB0D37 | TXB0D36 | TXB0D35 | TXB0D34 | TXB0D33 | TXB0D32 | TXB0D31 | TXB0D30 |
#-------------------------------------------------------------------------------#
| 7       | 6       | 5       | 4       | 3       | 2       | 1       | 0       |
#------------------------------------------------------------------------------*/

#define TXB0D3                                   0x0
#define TXB0D3_address                           0xF49
#define TXB0D3_position                          0x0
#define TXB0D3_size                              0x8
#define TXB0D3_value_mask                        0xFF
#define TXB0D3_clear_mask                        0x0

#define TXB0D30                                  0x0
#define TXB0D30_address                          0xF49
#define TXB0D30_position                         0x0
#define TXB0D30_size                             0x1
#define TXB0D30_value_mask                       0x1
#define TXB0D30_clear_mask                       0xFE

#define TXB0D31                                  0x1
#define TXB0D31_address                          0xF49
#define TXB0D31_position                         0x1
#define TXB0D31_size                             0x1
#define TXB0D31_value_mask                       0x2
#define TXB0D31_clear_mask                       0xFD

#define TXB0D32                                  0x2
#define TXB0D32_address                          0xF49
#define TXB0D32_position                         0x2
#define TXB0D32_size                             0x1
#define TXB0D32_value_mask                       0x4
#define TXB0D32_clear_mask                       0xFB

#define TXB0D33                                  0x3
#define TXB0D33_address                          0xF49
#define TXB0D33_position                         0x3
#define TXB0D33_size                             0x1
#define TXB0D33_value_mask                       0x8
#define TXB0D33_clear_mask                       0xF7

#define TXB0D34                                  0x4
#define TXB0D34_address                          0xF49
#define TXB0D34_position                         0x4
#define TXB0D34_size                             0x1
#define TXB0D34_value_mask                       0x10
#define TXB0D34_clear_mask                       0xEF

#define TXB0D35                                  0x5
#define TXB0D35_address                          0xF49
#define TXB0D35_position                         0x5
#define TXB0D35_size                             0x1
#define TXB0D35_value_mask                       0x20
#define TXB0D35_clear_mask                       0xDF

#define TXB0D36                                  0x6
#define TXB0D36_address                          0xF49
#define TXB0D36_position                         0x6
#define TXB0D36_size                             0x1
#define TXB0D36_value_mask                       0x40
#define TXB0D36_clear_mask                       0xBF

#define TXB0D37                                  0x7
#define TXB0D37_address                          0xF49
#define TXB0D37_position                         0x7
#define TXB0D37_size                             0x1
#define TXB0D37_value_mask                       0x80
#define TXB0D37_clear_mask                       0x7F


/*------------------------------------------------------------------------------#
| TXB0D4                                                                  0xF4A |
#-------------------------------------------------------------------------------#
| TXB0D47 | TXB0D46 | TXB0D45 | TXB0D44 | TXB0D43 | TXB0D42 | TXB0D41 | TXB0D40 |
#-------------------------------------------------------------------------------#
| 7       | 6       | 5       | 4       | 3       | 2       | 1       | 0       |
#------------------------------------------------------------------------------*/

#define TXB0D4                                   0x0
#define TXB0D4_address                           0xF4A
#define TXB0D4_position                          0x0
#define TXB0D4_size                              0x8
#define TXB0D4_value_mask                        0xFF
#define TXB0D4_clear_mask                        0x0

#define TXB0D40                                  0x0
#define TXB0D40_address                          0xF4A
#define TXB0D40_position                         0x0
#define TXB0D40_size                             0x1
#define TXB0D40_value_mask                       0x1
#define TXB0D40_clear_mask                       0xFE

#define TXB0D41                                  0x1
#define TXB0D41_address                          0xF4A
#define TXB0D41_position                         0x1
#define TXB0D41_size                             0x1
#define TXB0D41_value_mask                       0x2
#define TXB0D41_clear_mask                       0xFD

#define TXB0D42                                  0x2
#define TXB0D42_address                          0xF4A
#define TXB0D42_position                         0x2
#define TXB0D42_size                             0x1
#define TXB0D42_value_mask                       0x4
#define TXB0D42_clear_mask                       0xFB

#define TXB0D43                                  0x3
#define TXB0D43_address                          0xF4A
#define TXB0D43_position                         0x3
#define TXB0D43_size                             0x1
#define TXB0D43_value_mask                       0x8
#define TXB0D43_clear_mask                       0xF7

#define TXB0D44                                  0x4
#define TXB0D44_address                          0xF4A
#define TXB0D44_position                         0x4
#define TXB0D44_size                             0x1
#define TXB0D44_value_mask                       0x10
#define TXB0D44_clear_mask                       0xEF

#define TXB0D45                                  0x5
#define TXB0D45_address                          0xF4A
#define TXB0D45_position                         0x5
#define TXB0D45_size                             0x1
#define TXB0D45_value_mask                       0x20
#define TXB0D45_clear_mask                       0xDF

#define TXB0D46                                  0x6
#define TXB0D46_address                          0xF4A
#define TXB0D46_position                         0x6
#define TXB0D46_size                             0x1
#define TXB0D46_value_mask                       0x40
#define TXB0D46_clear_mask                       0xBF

#define TXB0D47                                  0x7
#define TXB0D47_address                          0xF4A
#define TXB0D47_position                         0x7
#define TXB0D47_size                             0x1
#define TXB0D47_value_mask                       0x80
#define TXB0D47_clear_mask                       0x7F


/*------------------------------------------------------------------------------#
| TXB0D5                                                                  0xF4B |
#-------------------------------------------------------------------------------#
| TXB0D57 | TXB0D56 | TXB0D55 | TXB0D54 | TXB0D53 | TXB0D52 | TXB0D51 | TXB0D50 |
#-------------------------------------------------------------------------------#
| 7       | 6       | 5       | 4       | 3       | 2       | 1       | 0       |
#------------------------------------------------------------------------------*/

#define TXB0D5                                   0x0
#define TXB0D5_address                           0xF4B
#define TXB0D5_position                          0x0
#define TXB0D5_size                              0x8
#define TXB0D5_value_mask                        0xFF
#define TXB0D5_clear_mask                        0x0

#define TXB0D50                                  0x0
#define TXB0D50_address                          0xF4B
#define TXB0D50_position                         0x0
#define TXB0D50_size                             0x1
#define TXB0D50_value_mask                       0x1
#define TXB0D50_clear_mask                       0xFE

#define TXB0D51                                  0x1
#define TXB0D51_address                          0xF4B
#define TXB0D51_position                         0x1
#define TXB0D51_size                             0x1
#define TXB0D51_value_mask                       0x2
#define TXB0D51_clear_mask                       0xFD

#define TXB0D52                                  0x2
#define TXB0D52_address                          0xF4B
#define TXB0D52_position                         0x2
#define TXB0D52_size                             0x1
#define TXB0D52_value_mask                       0x4
#define TXB0D52_clear_mask                       0xFB

#define TXB0D53                                  0x3
#define TXB0D53_address                          0xF4B
#define TXB0D53_position                         0x3
#define TXB0D53_size                             0x1
#define TXB0D53_value_mask                       0x8
#define TXB0D53_clear_mask                       0xF7

#define TXB0D54                                  0x4
#define TXB0D54_address                          0xF4B
#define TXB0D54_position                         0x4
#define TXB0D54_size                             0x1
#define TXB0D54_value_mask                       0x10
#define TXB0D54_clear_mask                       0xEF

#define TXB0D55                                  0x5
#define TXB0D55_address                          0xF4B
#define TXB0D55_position                         0x5
#define TXB0D55_size                             0x1
#define TXB0D55_value_mask                       0x20
#define TXB0D55_clear_mask                       0xDF

#define TXB0D56                                  0x6
#define TXB0D56_address                          0xF4B
#define TXB0D56_position                         0x6
#define TXB0D56_size                             0x1
#define TXB0D56_value_mask                       0x40
#define TXB0D56_clear_mask                       0xBF

#define TXB0D57                                  0x7
#define TXB0D57_address                          0xF4B
#define TXB0D57_position                         0x7
#define TXB0D57_size                             0x1
#define TXB0D57_value_mask                       0x80
#define TXB0D57_clear_mask                       0x7F


/*------------------------------------------------------------------------------#
| TXB0D6                                                                  0xF4C |
#-------------------------------------------------------------------------------#
| TXB0D67 | TXB0D66 | TXB0D65 | TXB0D64 | TXB0D63 | TXB0D62 | TXB0D61 | TXB0D60 |
#-------------------------------------------------------------------------------#
| 7       | 6       | 5       | 4       | 3       | 2       | 1       | 0       |
#------------------------------------------------------------------------------*/

#define TXB0D6                                   0x0
#define TXB0D6_address                           0xF4C
#define TXB0D6_position                          0x0
#define TXB0D6_size                              0x8
#define TXB0D6_value_mask                        0xFF
#define TXB0D6_clear_mask                        0x0

#define TXB0D60                                  0x0
#define TXB0D60_address                          0xF4C
#define TXB0D60_position                         0x0
#define TXB0D60_size                             0x1
#define TXB0D60_value_mask                       0x1
#define TXB0D60_clear_mask                       0xFE

#define TXB0D61                                  0x1
#define TXB0D61_address                          0xF4C
#define TXB0D61_position                         0x1
#define TXB0D61_size                             0x1
#define TXB0D61_value_mask                       0x2
#define TXB0D61_clear_mask                       0xFD

#define TXB0D62                                  0x2
#define TXB0D62_address                          0xF4C
#define TXB0D62_position                         0x2
#define TXB0D62_size                             0x1
#define TXB0D62_value_mask                       0x4
#define TXB0D62_clear_mask                       0xFB

#define TXB0D63                                  0x3
#define TXB0D63_address                          0xF4C
#define TXB0D63_position                         0x3
#define TXB0D63_size                             0x1
#define TXB0D63_value_mask                       0x8
#define TXB0D63_clear_mask                       0xF7

#define TXB0D64                                  0x4
#define TXB0D64_address                          0xF4C
#define TXB0D64_position                         0x4
#define TXB0D64_size                             0x1
#define TXB0D64_value_mask                       0x10
#define TXB0D64_clear_mask                       0xEF

#define TXB0D65                                  0x5
#define TXB0D65_address                          0xF4C
#define TXB0D65_position                         0x5
#define TXB0D65_size                             0x1
#define TXB0D65_value_mask                       0x20
#define TXB0D65_clear_mask                       0xDF

#define TXB0D66                                  0x6
#define TXB0D66_address                          0xF4C
#define TXB0D66_position                         0x6
#define TXB0D66_size                             0x1
#define TXB0D66_value_mask                       0x40
#define TXB0D66_clear_mask                       0xBF

#define TXB0D67                                  0x7
#define TXB0D67_address                          0xF4C
#define TXB0D67_position                         0x7
#define TXB0D67_size                             0x1
#define TXB0D67_value_mask                       0x80
#define TXB0D67_clear_mask                       0x7F


/*------------------------------------------------------------------------------#
| TXB0D7                                                                  0xF4D |
#-------------------------------------------------------------------------------#
| TXB0D77 | TXB0D76 | TXB0D75 | TXB0D74 | TXB0D73 | TXB0D72 | TXB0D71 | TXB0D70 |
#-------------------------------------------------------------------------------#
| 7       | 6       | 5       | 4       | 3       | 2       | 1       | 0       |
#------------------------------------------------------------------------------*/

#define TXB0D7                                   0x0
#define TXB0D7_address                           0xF4D
#define TXB0D7_position                          0x0
#define TXB0D7_size                              0x8
#define TXB0D7_value_mask                        0xFF
#define TXB0D7_clear_mask                        0x0

#define TXB0D70                                  0x0
#define TXB0D70_address                          0xF4D
#define TXB0D70_position                         0x0
#define TXB0D70_size                             0x1
#define TXB0D70_value_mask                       0x1
#define TXB0D70_clear_mask                       0xFE

#define TXB0D71                                  0x1
#define TXB0D71_address                          0xF4D
#define TXB0D71_position                         0x1
#define TXB0D71_size                             0x1
#define TXB0D71_value_mask                       0x2
#define TXB0D71_clear_mask                       0xFD

#define TXB0D72                                  0x2
#define TXB0D72_address                          0xF4D
#define TXB0D72_position                         0x2
#define TXB0D72_size                             0x1
#define TXB0D72_value_mask                       0x4
#define TXB0D72_clear_mask                       0xFB

#define TXB0D73                                  0x3
#define TXB0D73_address                          0xF4D
#define TXB0D73_position                         0x3
#define TXB0D73_size                             0x1
#define TXB0D73_value_mask                       0x8
#define TXB0D73_clear_mask                       0xF7

#define TXB0D74                                  0x4
#define TXB0D74_address                          0xF4D
#define TXB0D74_position                         0x4
#define TXB0D74_size                             0x1
#define TXB0D74_value_mask                       0x10
#define TXB0D74_clear_mask                       0xEF

#define TXB0D75                                  0x5
#define TXB0D75_address                          0xF4D
#define TXB0D75_position                         0x5
#define TXB0D75_size                             0x1
#define TXB0D75_value_mask                       0x20
#define TXB0D75_clear_mask                       0xDF

#define TXB0D76                                  0x6
#define TXB0D76_address                          0xF4D
#define TXB0D76_position                         0x6
#define TXB0D76_size                             0x1
#define TXB0D76_value_mask                       0x40
#define TXB0D76_clear_mask                       0xBF

#define TXB0D77                                  0x7
#define TXB0D77_address                          0xF4D
#define TXB0D77_position                         0x7
#define TXB0D77_size                             0x1
#define TXB0D77_value_mask                       0x80
#define TXB0D77_clear_mask                       0x7F


/*---------------------------------------------------------------------------------------------------------------------------------#
| CANSTATRO2                                                                                                                 0xF4E |
#----------------------------------------------------------------------------------------------------------------------------------#
| CANSTATRO2_OPMODE2 | CANSTATRO2_OPMODE1 | CANSTATRO2_OPMODE0 | - | CANSTATRO2_ICODE2 | CANSTATRO2_ICODE1 | CANSTATRO2_ICODE0 | - |
#----------------------------------------------------------------------------------------------------------------------------------#
| 7                  | 6                  | 5                  | 4 | 3                 | 2                 | 1                 | 0 |
#---------------------------------------------------------------------------------------------------------------------------------*/

#define CANSTATRO2                               0x0
#define CANSTATRO2_address                       0xF4E
#define CANSTATRO2_position                      0x0
#define CANSTATRO2_size                          0x8
#define CANSTATRO2_value_mask                    0xFF
#define CANSTATRO2_clear_mask                    0x0

#define CANSTATRO2_ICODE0                        0x1
#define CANSTATRO2_ICODE0_address                0xF4E
#define CANSTATRO2_ICODE0_position               0x1
#define CANSTATRO2_ICODE0_size                   0x1
#define CANSTATRO2_ICODE0_value_mask             0x2
#define CANSTATRO2_ICODE0_clear_mask             0xFD

#define CANSTATRO2_ICODE1                        0x2
#define CANSTATRO2_ICODE1_address                0xF4E
#define CANSTATRO2_ICODE1_position               0x2
#define CANSTATRO2_ICODE1_size                   0x1
#define CANSTATRO2_ICODE1_value_mask             0x4
#define CANSTATRO2_ICODE1_clear_mask             0xFB

#define CANSTATRO2_ICODE2                        0x3
#define CANSTATRO2_ICODE2_address                0xF4E
#define CANSTATRO2_ICODE2_position               0x3
#define CANSTATRO2_ICODE2_size                   0x1
#define CANSTATRO2_ICODE2_value_mask             0x8
#define CANSTATRO2_ICODE2_clear_mask             0xF7

#define CANSTATRO2_OPMODE0                       0x5
#define CANSTATRO2_OPMODE0_address               0xF4E
#define CANSTATRO2_OPMODE0_position              0x5
#define CANSTATRO2_OPMODE0_size                  0x1
#define CANSTATRO2_OPMODE0_value_mask            0x20
#define CANSTATRO2_OPMODE0_clear_mask            0xDF

#define CANSTATRO2_OPMODE1                       0x6
#define CANSTATRO2_OPMODE1_address               0xF4E
#define CANSTATRO2_OPMODE1_position              0x6
#define CANSTATRO2_OPMODE1_size                  0x1
#define CANSTATRO2_OPMODE1_value_mask            0x40
#define CANSTATRO2_OPMODE1_clear_mask            0xBF

#define CANSTATRO2_OPMODE2                       0x7
#define CANSTATRO2_OPMODE2_address               0xF4E
#define CANSTATRO2_OPMODE2_position              0x7
#define CANSTATRO2_OPMODE2_size                  0x1
#define CANSTATRO2_OPMODE2_value_mask            0x80
#define CANSTATRO2_OPMODE2_clear_mask            0x7F


/*--------------------------------------------------------------------------------------------#
| RXB1CON                                                                               0xF50 |
#---------------------------------------------------------------------------------------------#
| RXB1CON_RXFUL | RXB1M1 | RXB1CON_RXM0 | - | RXB1RTRR0 | FILHIT2 | RXB1FILHIT1 | RXB1FILHIT0 |
#---------------------------------------------------------------------------------------------#
| 7             | 6      | 5            | 4 | 3         | 2       | 1           | 0           |
#--------------------------------------------------------------------------------------------*/

#define RXB1CON                                  0x0
#define RXB1CON_address                          0xF50
#define RXB1CON_position                         0x0
#define RXB1CON_size                             0x8
#define RXB1CON_value_mask                       0xFF
#define RXB1CON_clear_mask                       0x0

#define RXB1FILHIT0                              0x0
#define RXB1FILHIT0_address                      0xF50
#define RXB1FILHIT0_position                     0x0
#define RXB1FILHIT0_size                         0x1
#define RXB1FILHIT0_value_mask                   0x1
#define RXB1FILHIT0_clear_mask                   0xFE

#define RXB1CON_FILHIT0                          0x0
#define RXB1CON_FILHIT0_address                  0xF50
#define RXB1CON_FILHIT0_position                 0x0
#define RXB1CON_FILHIT0_size                     0x1
#define RXB1CON_FILHIT0_value_mask               0x1
#define RXB1CON_FILHIT0_clear_mask               0xFE

#define RXB1FILHIT1                              0x1
#define RXB1FILHIT1_address                      0xF50
#define RXB1FILHIT1_position                     0x1
#define RXB1FILHIT1_size                         0x1
#define RXB1FILHIT1_value_mask                   0x2
#define RXB1FILHIT1_clear_mask                   0xFD

#define FILHIT1                                  0x1
#define FILHIT1_address                          0xF50
#define FILHIT1_position                         0x1
#define FILHIT1_size                             0x1
#define FILHIT1_value_mask                       0x2
#define FILHIT1_clear_mask                       0xFD

#define RXB1FILHIT2                              0x2
#define RXB1FILHIT2_address                      0xF50
#define RXB1FILHIT2_position                     0x2
#define RXB1FILHIT2_size                         0x1
#define RXB1FILHIT2_value_mask                   0x4
#define RXB1FILHIT2_clear_mask                   0xFB

#define FILHIT2                                  0x2
#define FILHIT2_address                          0xF50
#define FILHIT2_position                         0x2
#define FILHIT2_size                             0x1
#define FILHIT2_value_mask                       0x4
#define FILHIT2_clear_mask                       0xFB

#define RXB1FILHIT3                              0x3
#define RXB1FILHIT3_address                      0xF50
#define RXB1FILHIT3_position                     0x3
#define RXB1FILHIT3_size                         0x1
#define RXB1FILHIT3_value_mask                   0x8
#define RXB1FILHIT3_clear_mask                   0xF7

#define RXB1RTRR0                                0x3
#define RXB1RTRR0_address                        0xF50
#define RXB1RTRR0_position                       0x3
#define RXB1RTRR0_size                           0x1
#define RXB1RTRR0_value_mask                     0x8
#define RXB1RTRR0_clear_mask                     0xF7

#define RXB1CON_RXRTRRO                          0x3
#define RXB1CON_RXRTRRO_address                  0xF50
#define RXB1CON_RXRTRRO_position                 0x3
#define RXB1CON_RXRTRRO_size                     0x1
#define RXB1CON_RXRTRRO_value_mask               0x8
#define RXB1CON_RXRTRRO_clear_mask               0xF7

#define RXB1RTRRO                                0x5
#define RXB1RTRRO_address                        0xF50
#define RXB1RTRRO_position                       0x5
#define RXB1RTRRO_size                           0x1
#define RXB1RTRRO_value_mask                     0x20
#define RXB1RTRRO_clear_mask                     0xDF

#define RXB1CON_RXM0                             0x5
#define RXB1CON_RXM0_address                     0xF50
#define RXB1CON_RXM0_position                    0x5
#define RXB1CON_RXM0_size                        0x1
#define RXB1CON_RXM0_value_mask                  0x20
#define RXB1CON_RXM0_clear_mask                  0xDF

#define RXB1M0                                   0x5
#define RXB1M0_address                           0xF50
#define RXB1M0_position                          0x5
#define RXB1M0_size                              0x1
#define RXB1M0_value_mask                        0x20
#define RXB1M0_clear_mask                        0xDF

#define RXB1M1                                   0x6
#define RXB1M1_address                           0xF50
#define RXB1M1_position                          0x6
#define RXB1M1_size                              0x1
#define RXB1M1_value_mask                        0x40
#define RXB1M1_clear_mask                        0xBF

#define RXB1CON_RXM1                             0x6
#define RXB1CON_RXM1_address                     0xF50
#define RXB1CON_RXM1_position                    0x6
#define RXB1CON_RXM1_size                        0x1
#define RXB1CON_RXM1_value_mask                  0x40
#define RXB1CON_RXM1_clear_mask                  0xBF

#define RXB1CON_RXFUL                            0x7
#define RXB1CON_RXFUL_address                    0xF50
#define RXB1CON_RXFUL_position                   0x7
#define RXB1CON_RXFUL_size                       0x1
#define RXB1CON_RXFUL_value_mask                 0x80
#define RXB1CON_RXFUL_clear_mask                 0x7F

#define RXB1FUL                                  0x7
#define RXB1FUL_address                          0xF50
#define RXB1FUL_position                         0x7
#define RXB1FUL_size                             0x1
#define RXB1FUL_value_mask                       0x80
#define RXB1FUL_clear_mask                       0x7F


/*---------------------------------------------------------------------------------------------------------------------#
| RXB1SIDH                                                                                                       0xF51 |
#----------------------------------------------------------------------------------------------------------------------#
| RXB1SIDH_SID10 | RXB1SIDH_SID9 | RXB1SIDH_SID8 | RXB1SIDH_SID7 | RXB1SID6 | RXB1SID5 | RXB1SIDH_SID4 | RXB1SIDH_SID3 |
#----------------------------------------------------------------------------------------------------------------------#
| 7              | 6             | 5             | 4             | 3        | 2        | 1             | 0             |
#---------------------------------------------------------------------------------------------------------------------*/

#define RXB1SIDH                                 0x0
#define RXB1SIDH_address                         0xF51
#define RXB1SIDH_position                        0x0
#define RXB1SIDH_size                            0x8
#define RXB1SIDH_value_mask                      0xFF
#define RXB1SIDH_clear_mask                      0x0

#define RXB1SID3                                 0x0
#define RXB1SID3_address                         0xF51
#define RXB1SID3_position                        0x0
#define RXB1SID3_size                            0x1
#define RXB1SID3_value_mask                      0x1
#define RXB1SID3_clear_mask                      0xFE

#define RXB1SIDH_SID3                            0x0
#define RXB1SIDH_SID3_address                    0xF51
#define RXB1SIDH_SID3_position                   0x0
#define RXB1SIDH_SID3_size                       0x1
#define RXB1SIDH_SID3_value_mask                 0x1
#define RXB1SIDH_SID3_clear_mask                 0xFE

#define RXB1SID4                                 0x1
#define RXB1SID4_address                         0xF51
#define RXB1SID4_position                        0x1
#define RXB1SID4_size                            0x1
#define RXB1SID4_value_mask                      0x2
#define RXB1SID4_clear_mask                      0xFD

#define RXB1SIDH_SID4                            0x1
#define RXB1SIDH_SID4_address                    0xF51
#define RXB1SIDH_SID4_position                   0x1
#define RXB1SIDH_SID4_size                       0x1
#define RXB1SIDH_SID4_value_mask                 0x2
#define RXB1SIDH_SID4_clear_mask                 0xFD

#define RXB1SID5                                 0x2
#define RXB1SID5_address                         0xF51
#define RXB1SID5_position                        0x2
#define RXB1SID5_size                            0x1
#define RXB1SID5_value_mask                      0x4
#define RXB1SID5_clear_mask                      0xFB

#define RXB1SIDH_SID5                            0x2
#define RXB1SIDH_SID5_address                    0xF51
#define RXB1SIDH_SID5_position                   0x2
#define RXB1SIDH_SID5_size                       0x1
#define RXB1SIDH_SID5_value_mask                 0x4
#define RXB1SIDH_SID5_clear_mask                 0xFB

#define RXB1SID6                                 0x3
#define RXB1SID6_address                         0xF51
#define RXB1SID6_position                        0x3
#define RXB1SID6_size                            0x1
#define RXB1SID6_value_mask                      0x8
#define RXB1SID6_clear_mask                      0xF7

#define RXB1SIDH_SID6                            0x3
#define RXB1SIDH_SID6_address                    0xF51
#define RXB1SIDH_SID6_position                   0x3
#define RXB1SIDH_SID6_size                       0x1
#define RXB1SIDH_SID6_value_mask                 0x8
#define RXB1SIDH_SID6_clear_mask                 0xF7

#define RXB1SID7                                 0x4
#define RXB1SID7_address                         0xF51
#define RXB1SID7_position                        0x4
#define RXB1SID7_size                            0x1
#define RXB1SID7_value_mask                      0x10
#define RXB1SID7_clear_mask                      0xEF

#define RXB1SIDH_SID7                            0x4
#define RXB1SIDH_SID7_address                    0xF51
#define RXB1SIDH_SID7_position                   0x4
#define RXB1SIDH_SID7_size                       0x1
#define RXB1SIDH_SID7_value_mask                 0x10
#define RXB1SIDH_SID7_clear_mask                 0xEF

#define RXB1SID8                                 0x5
#define RXB1SID8_address                         0xF51
#define RXB1SID8_position                        0x5
#define RXB1SID8_size                            0x1
#define RXB1SID8_value_mask                      0x20
#define RXB1SID8_clear_mask                      0xDF

#define RXB1SIDH_SID8                            0x5
#define RXB1SIDH_SID8_address                    0xF51
#define RXB1SIDH_SID8_position                   0x5
#define RXB1SIDH_SID8_size                       0x1
#define RXB1SIDH_SID8_value_mask                 0x20
#define RXB1SIDH_SID8_clear_mask                 0xDF

#define RXB1SID9                                 0x6
#define RXB1SID9_address                         0xF51
#define RXB1SID9_position                        0x6
#define RXB1SID9_size                            0x1
#define RXB1SID9_value_mask                      0x40
#define RXB1SID9_clear_mask                      0xBF

#define RXB1SIDH_SID9                            0x6
#define RXB1SIDH_SID9_address                    0xF51
#define RXB1SIDH_SID9_position                   0x6
#define RXB1SIDH_SID9_size                       0x1
#define RXB1SIDH_SID9_value_mask                 0x40
#define RXB1SIDH_SID9_clear_mask                 0xBF

#define RXB1SIDH_SID10                           0x7
#define RXB1SIDH_SID10_address                   0xF51
#define RXB1SIDH_SID10_position                  0x7
#define RXB1SIDH_SID10_size                      0x1
#define RXB1SIDH_SID10_value_mask                0x80
#define RXB1SIDH_SID10_clear_mask                0x7F

#define RXB1SID10                                0x7
#define RXB1SID10_address                        0xF51
#define RXB1SID10_position                       0x7
#define RXB1SID10_size                           0x1
#define RXB1SID10_value_mask                     0x80
#define RXB1SID10_clear_mask                     0x7F


/*----------------------------------------------------------------------------------------------------#
| RXB1SIDL                                                                                      0xF52 |
#-----------------------------------------------------------------------------------------------------#
| RXB1SIDL_SID2 | RXB1SIDL_SID1 | RXB1SIDL_SID0 | RXB1SRR | RXB1EXID | - | RXB1EID17 | RXB1SIDL_EID16 |
#-----------------------------------------------------------------------------------------------------#
| 7             | 6             | 5             | 4       | 3        | 2 | 1         | 0              |
#----------------------------------------------------------------------------------------------------*/

#define RXB1SIDL                                 0x0
#define RXB1SIDL_address                         0xF52
#define RXB1SIDL_position                        0x0
#define RXB1SIDL_size                            0x8
#define RXB1SIDL_value_mask                      0xFF
#define RXB1SIDL_clear_mask                      0x0

#define RXB1SIDL_EID16                           0x0
#define RXB1SIDL_EID16_address                   0xF52
#define RXB1SIDL_EID16_position                  0x0
#define RXB1SIDL_EID16_size                      0x1
#define RXB1SIDL_EID16_value_mask                0x1
#define RXB1SIDL_EID16_clear_mask                0xFE

#define RXB1EID16                                0x0
#define RXB1EID16_address                        0xF52
#define RXB1EID16_position                       0x0
#define RXB1EID16_size                           0x1
#define RXB1EID16_value_mask                     0x1
#define RXB1EID16_clear_mask                     0xFE

#define RXB1SIDL_EID17                           0x1
#define RXB1SIDL_EID17_address                   0xF52
#define RXB1SIDL_EID17_position                  0x1
#define RXB1SIDL_EID17_size                      0x1
#define RXB1SIDL_EID17_value_mask                0x2
#define RXB1SIDL_EID17_clear_mask                0xFD

#define RXB1EID17                                0x1
#define RXB1EID17_address                        0xF52
#define RXB1EID17_position                       0x1
#define RXB1EID17_size                           0x1
#define RXB1EID17_value_mask                     0x2
#define RXB1EID17_clear_mask                     0xFD

#define RXB1EXID                                 0x3
#define RXB1EXID_address                         0xF52
#define RXB1EXID_position                        0x3
#define RXB1EXID_size                            0x1
#define RXB1EXID_value_mask                      0x8
#define RXB1EXID_clear_mask                      0xF7

#define RXB1SIDL_EXID                            0x3
#define RXB1SIDL_EXID_address                    0xF52
#define RXB1SIDL_EXID_position                   0x3
#define RXB1SIDL_EXID_size                       0x1
#define RXB1SIDL_EXID_value_mask                 0x8
#define RXB1SIDL_EXID_clear_mask                 0xF7

#define RXB1SRR                                  0x4
#define RXB1SRR_address                          0xF52
#define RXB1SRR_position                         0x4
#define RXB1SRR_size                             0x1
#define RXB1SRR_value_mask                       0x10
#define RXB1SRR_clear_mask                       0xEF

#define RXB1SIDL_SRR                             0x4
#define RXB1SIDL_SRR_address                     0xF52
#define RXB1SIDL_SRR_position                    0x4
#define RXB1SIDL_SRR_size                        0x1
#define RXB1SIDL_SRR_value_mask                  0x10
#define RXB1SIDL_SRR_clear_mask                  0xEF

#define RXB1SID0                                 0x5
#define RXB1SID0_address                         0xF52
#define RXB1SID0_position                        0x5
#define RXB1SID0_size                            0x1
#define RXB1SID0_value_mask                      0x20
#define RXB1SID0_clear_mask                      0xDF

#define RXB1SIDL_SID0                            0x5
#define RXB1SIDL_SID0_address                    0xF52
#define RXB1SIDL_SID0_position                   0x5
#define RXB1SIDL_SID0_size                       0x1
#define RXB1SIDL_SID0_value_mask                 0x20
#define RXB1SIDL_SID0_clear_mask                 0xDF

#define RXB1SIDL_SID1                            0x6
#define RXB1SIDL_SID1_address                    0xF52
#define RXB1SIDL_SID1_position                   0x6
#define RXB1SIDL_SID1_size                       0x1
#define RXB1SIDL_SID1_value_mask                 0x40
#define RXB1SIDL_SID1_clear_mask                 0xBF

#define RXB1SID1                                 0x6
#define RXB1SID1_address                         0xF52
#define RXB1SID1_position                        0x6
#define RXB1SID1_size                            0x1
#define RXB1SID1_value_mask                      0x40
#define RXB1SID1_clear_mask                      0xBF

#define RXB1SIDL_SID2                            0x7
#define RXB1SIDL_SID2_address                    0xF52
#define RXB1SIDL_SID2_position                   0x7
#define RXB1SIDL_SID2_size                       0x1
#define RXB1SIDL_SID2_value_mask                 0x80
#define RXB1SIDL_SID2_clear_mask                 0x7F

#define RXB1SID2                                 0x7
#define RXB1SID2_address                         0xF52
#define RXB1SID2_position                        0x7
#define RXB1SID2_size                            0x1
#define RXB1SID2_value_mask                      0x80
#define RXB1SID2_clear_mask                      0x7F


/*----------------------------------------------------------------------------------------------------------------#
| RXB1EIDH                                                                                                  0xF53 |
#-----------------------------------------------------------------------------------------------------------------#
| RXB1EIDH_EID15 | RXB1EIDH_EID14 | RXB1EID13 | RXB1EIDH_EID12 | RXB1EIDH_EID11 | RXB1EID10 | RXB1EID9 | RXB1EID8 |
#-----------------------------------------------------------------------------------------------------------------#
| 7              | 6              | 5         | 4              | 3              | 2         | 1        | 0        |
#----------------------------------------------------------------------------------------------------------------*/

#define RXB1EIDH                                 0x0
#define RXB1EIDH_address                         0xF53
#define RXB1EIDH_position                        0x0
#define RXB1EIDH_size                            0x8
#define RXB1EIDH_value_mask                      0xFF
#define RXB1EIDH_clear_mask                      0x0

#define RXB1EID8                                 0x0
#define RXB1EID8_address                         0xF53
#define RXB1EID8_position                        0x0
#define RXB1EID8_size                            0x1
#define RXB1EID8_value_mask                      0x1
#define RXB1EID8_clear_mask                      0xFE

#define RXB1EIDH_EID8                            0x0
#define RXB1EIDH_EID8_address                    0xF53
#define RXB1EIDH_EID8_position                   0x0
#define RXB1EIDH_EID8_size                       0x1
#define RXB1EIDH_EID8_value_mask                 0x1
#define RXB1EIDH_EID8_clear_mask                 0xFE

#define RXB1EID9                                 0x1
#define RXB1EID9_address                         0xF53
#define RXB1EID9_position                        0x1
#define RXB1EID9_size                            0x1
#define RXB1EID9_value_mask                      0x2
#define RXB1EID9_clear_mask                      0xFD

#define RXB1EIDH_EID9                            0x1
#define RXB1EIDH_EID9_address                    0xF53
#define RXB1EIDH_EID9_position                   0x1
#define RXB1EIDH_EID9_size                       0x1
#define RXB1EIDH_EID9_value_mask                 0x2
#define RXB1EIDH_EID9_clear_mask                 0xFD

#define RXB1EIDH_EID10                           0x2
#define RXB1EIDH_EID10_address                   0xF53
#define RXB1EIDH_EID10_position                  0x2
#define RXB1EIDH_EID10_size                      0x1
#define RXB1EIDH_EID10_value_mask                0x4
#define RXB1EIDH_EID10_clear_mask                0xFB

#define RXB1EID10                                0x2
#define RXB1EID10_address                        0xF53
#define RXB1EID10_position                       0x2
#define RXB1EID10_size                           0x1
#define RXB1EID10_value_mask                     0x4
#define RXB1EID10_clear_mask                     0xFB

#define RXB1EIDH_EID11                           0x3
#define RXB1EIDH_EID11_address                   0xF53
#define RXB1EIDH_EID11_position                  0x3
#define RXB1EIDH_EID11_size                      0x1
#define RXB1EIDH_EID11_value_mask                0x8
#define RXB1EIDH_EID11_clear_mask                0xF7

#define RXB1EID11                                0x3
#define RXB1EID11_address                        0xF53
#define RXB1EID11_position                       0x3
#define RXB1EID11_size                           0x1
#define RXB1EID11_value_mask                     0x8
#define RXB1EID11_clear_mask                     0xF7

#define RXB1EIDH_EID12                           0x4
#define RXB1EIDH_EID12_address                   0xF53
#define RXB1EIDH_EID12_position                  0x4
#define RXB1EIDH_EID12_size                      0x1
#define RXB1EIDH_EID12_value_mask                0x10
#define RXB1EIDH_EID12_clear_mask                0xEF

#define RXB1EID12                                0x4
#define RXB1EID12_address                        0xF53
#define RXB1EID12_position                       0x4
#define RXB1EID12_size                           0x1
#define RXB1EID12_value_mask                     0x10
#define RXB1EID12_clear_mask                     0xEF

#define RXB1EID13                                0x5
#define RXB1EID13_address                        0xF53
#define RXB1EID13_position                       0x5
#define RXB1EID13_size                           0x1
#define RXB1EID13_value_mask                     0x20
#define RXB1EID13_clear_mask                     0xDF

#define RXB1EIDH_EID13                           0x5
#define RXB1EIDH_EID13_address                   0xF53
#define RXB1EIDH_EID13_position                  0x5
#define RXB1EIDH_EID13_size                      0x1
#define RXB1EIDH_EID13_value_mask                0x20
#define RXB1EIDH_EID13_clear_mask                0xDF

#define RXB1EIDH_EID14                           0x6
#define RXB1EIDH_EID14_address                   0xF53
#define RXB1EIDH_EID14_position                  0x6
#define RXB1EIDH_EID14_size                      0x1
#define RXB1EIDH_EID14_value_mask                0x40
#define RXB1EIDH_EID14_clear_mask                0xBF

#define RXB1EID14                                0x6
#define RXB1EID14_address                        0xF53
#define RXB1EID14_position                       0x6
#define RXB1EID14_size                           0x1
#define RXB1EID14_value_mask                     0x40
#define RXB1EID14_clear_mask                     0xBF

#define RXB1EIDH_EID15                           0x7
#define RXB1EIDH_EID15_address                   0xF53
#define RXB1EIDH_EID15_position                  0x7
#define RXB1EIDH_EID15_size                      0x1
#define RXB1EIDH_EID15_value_mask                0x80
#define RXB1EIDH_EID15_clear_mask                0x7F

#define RXB1EID15                                0x7
#define RXB1EID15_address                        0xF53
#define RXB1EID15_position                       0x7
#define RXB1EID15_size                           0x1
#define RXB1EID15_value_mask                     0x80
#define RXB1EID15_clear_mask                     0x7F


/*------------------------------------------------------------------------------------------------------------------------------#
| RXB1EIDL                                                                                                                0xF54 |
#-------------------------------------------------------------------------------------------------------------------------------#
| RXB1EIDL_EID7 | RXB1EIDL_EID6 | RXB1EIDL_EID5 | RXB1EIDL_EID4 | RXB1EIDL_EID3 | RXB1EIDL_EID2 | RXB1EIDL_EID1 | RXB1EIDL_EID0 |
#-------------------------------------------------------------------------------------------------------------------------------#
| 7             | 6             | 5             | 4             | 3             | 2             | 1             | 0             |
#------------------------------------------------------------------------------------------------------------------------------*/

#define RXB1EIDL                                 0x0
#define RXB1EIDL_address                         0xF54
#define RXB1EIDL_position                        0x0
#define RXB1EIDL_size                            0x8
#define RXB1EIDL_value_mask                      0xFF
#define RXB1EIDL_clear_mask                      0x0

#define RXB1EIDL_EID0                            0x0
#define RXB1EIDL_EID0_address                    0xF54
#define RXB1EIDL_EID0_position                   0x0
#define RXB1EIDL_EID0_size                       0x1
#define RXB1EIDL_EID0_value_mask                 0x1
#define RXB1EIDL_EID0_clear_mask                 0xFE

#define RXB1EID0                                 0x0
#define RXB1EID0_address                         0xF54
#define RXB1EID0_position                        0x0
#define RXB1EID0_size                            0x1
#define RXB1EID0_value_mask                      0x1
#define RXB1EID0_clear_mask                      0xFE

#define RXB1EIDL_EID1                            0x1
#define RXB1EIDL_EID1_address                    0xF54
#define RXB1EIDL_EID1_position                   0x1
#define RXB1EIDL_EID1_size                       0x1
#define RXB1EIDL_EID1_value_mask                 0x2
#define RXB1EIDL_EID1_clear_mask                 0xFD

#define RXB1EID1                                 0x1
#define RXB1EID1_address                         0xF54
#define RXB1EID1_position                        0x1
#define RXB1EID1_size                            0x1
#define RXB1EID1_value_mask                      0x2
#define RXB1EID1_clear_mask                      0xFD

#define RXB1EIDL_EID2                            0x2
#define RXB1EIDL_EID2_address                    0xF54
#define RXB1EIDL_EID2_position                   0x2
#define RXB1EIDL_EID2_size                       0x1
#define RXB1EIDL_EID2_value_mask                 0x4
#define RXB1EIDL_EID2_clear_mask                 0xFB

#define RXB1EID2                                 0x2
#define RXB1EID2_address                         0xF54
#define RXB1EID2_position                        0x2
#define RXB1EID2_size                            0x1
#define RXB1EID2_value_mask                      0x4
#define RXB1EID2_clear_mask                      0xFB

#define RXB1EIDL_EID3                            0x3
#define RXB1EIDL_EID3_address                    0xF54
#define RXB1EIDL_EID3_position                   0x3
#define RXB1EIDL_EID3_size                       0x1
#define RXB1EIDL_EID3_value_mask                 0x8
#define RXB1EIDL_EID3_clear_mask                 0xF7

#define RXB1EID3                                 0x3
#define RXB1EID3_address                         0xF54
#define RXB1EID3_position                        0x3
#define RXB1EID3_size                            0x1
#define RXB1EID3_value_mask                      0x8
#define RXB1EID3_clear_mask                      0xF7

#define RXB1EIDL_EID4                            0x4
#define RXB1EIDL_EID4_address                    0xF54
#define RXB1EIDL_EID4_position                   0x4
#define RXB1EIDL_EID4_size                       0x1
#define RXB1EIDL_EID4_value_mask                 0x10
#define RXB1EIDL_EID4_clear_mask                 0xEF

#define RXB1EID4                                 0x4
#define RXB1EID4_address                         0xF54
#define RXB1EID4_position                        0x4
#define RXB1EID4_size                            0x1
#define RXB1EID4_value_mask                      0x10
#define RXB1EID4_clear_mask                      0xEF

#define RXB1EIDL_EID5                            0x5
#define RXB1EIDL_EID5_address                    0xF54
#define RXB1EIDL_EID5_position                   0x5
#define RXB1EIDL_EID5_size                       0x1
#define RXB1EIDL_EID5_value_mask                 0x20
#define RXB1EIDL_EID5_clear_mask                 0xDF

#define RXB1EID5                                 0x5
#define RXB1EID5_address                         0xF54
#define RXB1EID5_position                        0x5
#define RXB1EID5_size                            0x1
#define RXB1EID5_value_mask                      0x20
#define RXB1EID5_clear_mask                      0xDF

#define RXB1EIDL_EID6                            0x6
#define RXB1EIDL_EID6_address                    0xF54
#define RXB1EIDL_EID6_position                   0x6
#define RXB1EIDL_EID6_size                       0x1
#define RXB1EIDL_EID6_value_mask                 0x40
#define RXB1EIDL_EID6_clear_mask                 0xBF

#define RXB1EID6                                 0x6
#define RXB1EID6_address                         0xF54
#define RXB1EID6_position                        0x6
#define RXB1EID6_size                            0x1
#define RXB1EID6_value_mask                      0x40
#define RXB1EID6_clear_mask                      0xBF

#define RXB1EIDL_EID7                            0x7
#define RXB1EIDL_EID7_address                    0xF54
#define RXB1EIDL_EID7_position                   0x7
#define RXB1EIDL_EID7_size                       0x1
#define RXB1EIDL_EID7_value_mask                 0x80
#define RXB1EIDL_EID7_clear_mask                 0x7F

#define RXB1EID7                                 0x7
#define RXB1EID7_address                         0xF54
#define RXB1EID7_position                        0x7
#define RXB1EID7_size                            0x1
#define RXB1EID7_value_mask                      0x80
#define RXB1EID7_clear_mask                      0x7F


/*----------------------------------------------------------------------------------------------#
| RXB1DLC                                                                                 0xF55 |
#-----------------------------------------------------------------------------------------------#
| - | RXB1DLC_RXRTR | RXB1DLC_RESB1 | RXB1DLC_RESB0 | RXB1DLC3 | RXB1DLC2 | RXB1DLC1 | RXB1DLC0 |
#-----------------------------------------------------------------------------------------------#
| 7 | 6             | 5             | 4             | 3        | 2        | 1        | 0        |
#----------------------------------------------------------------------------------------------*/

#define RXB1DLC                                  0x0
#define RXB1DLC_address                          0xF55
#define RXB1DLC_position                         0x0
#define RXB1DLC_size                             0x8
#define RXB1DLC_value_mask                       0xFF
#define RXB1DLC_clear_mask                       0x0

#define RXB1DLC0                                 0x0
#define RXB1DLC0_address                         0xF55
#define RXB1DLC0_position                        0x0
#define RXB1DLC0_size                            0x1
#define RXB1DLC0_value_mask                      0x1
#define RXB1DLC0_clear_mask                      0xFE

#define RXB1DLC_DLC0                             0x0
#define RXB1DLC_DLC0_address                     0xF55
#define RXB1DLC_DLC0_position                    0x0
#define RXB1DLC_DLC0_size                        0x1
#define RXB1DLC_DLC0_value_mask                  0x1
#define RXB1DLC_DLC0_clear_mask                  0xFE

#define RXB1DLC1                                 0x1
#define RXB1DLC1_address                         0xF55
#define RXB1DLC1_position                        0x1
#define RXB1DLC1_size                            0x1
#define RXB1DLC1_value_mask                      0x2
#define RXB1DLC1_clear_mask                      0xFD

#define RXB1DLC_DLC1                             0x1
#define RXB1DLC_DLC1_address                     0xF55
#define RXB1DLC_DLC1_position                    0x1
#define RXB1DLC_DLC1_size                        0x1
#define RXB1DLC_DLC1_value_mask                  0x2
#define RXB1DLC_DLC1_clear_mask                  0xFD

#define RXB1DLC2                                 0x2
#define RXB1DLC2_address                         0xF55
#define RXB1DLC2_position                        0x2
#define RXB1DLC2_size                            0x1
#define RXB1DLC2_value_mask                      0x4
#define RXB1DLC2_clear_mask                      0xFB

#define RXB1DLC_DLC2                             0x2
#define RXB1DLC_DLC2_address                     0xF55
#define RXB1DLC_DLC2_position                    0x2
#define RXB1DLC_DLC2_size                        0x1
#define RXB1DLC_DLC2_value_mask                  0x4
#define RXB1DLC_DLC2_clear_mask                  0xFB

#define RXB1DLC3                                 0x3
#define RXB1DLC3_address                         0xF55
#define RXB1DLC3_position                        0x3
#define RXB1DLC3_size                            0x1
#define RXB1DLC3_value_mask                      0x8
#define RXB1DLC3_clear_mask                      0xF7

#define RXB1DLC_DLC3                             0x3
#define RXB1DLC_DLC3_address                     0xF55
#define RXB1DLC_DLC3_position                    0x3
#define RXB1DLC_DLC3_size                        0x1
#define RXB1DLC_DLC3_value_mask                  0x8
#define RXB1DLC_DLC3_clear_mask                  0xF7

#define RXB1DLC_RESB0                            0x4
#define RXB1DLC_RESB0_address                    0xF55
#define RXB1DLC_RESB0_position                   0x4
#define RXB1DLC_RESB0_size                       0x1
#define RXB1DLC_RESB0_value_mask                 0x10
#define RXB1DLC_RESB0_clear_mask                 0xEF

#define RXB1RB0                                  0x4
#define RXB1RB0_address                          0xF55
#define RXB1RB0_position                         0x4
#define RXB1RB0_size                             0x1
#define RXB1RB0_value_mask                       0x10
#define RXB1RB0_clear_mask                       0xEF

#define RXB1DLC_RB0                              0x4
#define RXB1DLC_RB0_address                      0xF55
#define RXB1DLC_RB0_position                     0x4
#define RXB1DLC_RB0_size                         0x1
#define RXB1DLC_RB0_value_mask                   0x10
#define RXB1DLC_RB0_clear_mask                   0xEF

#define RXB1DLC_RESB1                            0x5
#define RXB1DLC_RESB1_address                    0xF55
#define RXB1DLC_RESB1_position                   0x5
#define RXB1DLC_RESB1_size                       0x1
#define RXB1DLC_RESB1_value_mask                 0x20
#define RXB1DLC_RESB1_clear_mask                 0xDF

#define RXB1RB1                                  0x5
#define RXB1RB1_address                          0xF55
#define RXB1RB1_position                         0x5
#define RXB1RB1_size                             0x1
#define RXB1RB1_value_mask                       0x20
#define RXB1RB1_clear_mask                       0xDF

#define RXB1DLC_RB1                              0x5
#define RXB1DLC_RB1_address                      0xF55
#define RXB1DLC_RB1_position                     0x5
#define RXB1DLC_RB1_size                         0x1
#define RXB1DLC_RB1_value_mask                   0x20
#define RXB1DLC_RB1_clear_mask                   0xDF

#define RXB1DLC_RXRTR                            0x6
#define RXB1DLC_RXRTR_address                    0xF55
#define RXB1DLC_RXRTR_position                   0x6
#define RXB1DLC_RXRTR_size                       0x1
#define RXB1DLC_RXRTR_value_mask                 0x40
#define RXB1DLC_RXRTR_clear_mask                 0xBF

#define RXB1RTR                                  0x6
#define RXB1RTR_address                          0xF55
#define RXB1RTR_position                         0x6
#define RXB1RTR_size                             0x1
#define RXB1RTR_value_mask                       0x40
#define RXB1RTR_clear_mask                       0xBF


/*------------------------------------------------------------------------------#
| RXB1D0                                                                  0xF56 |
#-------------------------------------------------------------------------------#
| RXB1D07 | RXB1D06 | RXB1D05 | RXB1D04 | RXB1D03 | RXB1D02 | RXB1D01 | RXB1D00 |
#-------------------------------------------------------------------------------#
| 7       | 6       | 5       | 4       | 3       | 2       | 1       | 0       |
#------------------------------------------------------------------------------*/

#define RXB1D0                                   0x0
#define RXB1D0_address                           0xF56
#define RXB1D0_position                          0x0
#define RXB1D0_size                              0x8
#define RXB1D0_value_mask                        0xFF
#define RXB1D0_clear_mask                        0x0

#define RXB1D00                                  0x0
#define RXB1D00_address                          0xF56
#define RXB1D00_position                         0x0
#define RXB1D00_size                             0x1
#define RXB1D00_value_mask                       0x1
#define RXB1D00_clear_mask                       0xFE

#define RXB1D01                                  0x1
#define RXB1D01_address                          0xF56
#define RXB1D01_position                         0x1
#define RXB1D01_size                             0x1
#define RXB1D01_value_mask                       0x2
#define RXB1D01_clear_mask                       0xFD

#define RXB1D02                                  0x2
#define RXB1D02_address                          0xF56
#define RXB1D02_position                         0x2
#define RXB1D02_size                             0x1
#define RXB1D02_value_mask                       0x4
#define RXB1D02_clear_mask                       0xFB

#define RXB1D03                                  0x3
#define RXB1D03_address                          0xF56
#define RXB1D03_position                         0x3
#define RXB1D03_size                             0x1
#define RXB1D03_value_mask                       0x8
#define RXB1D03_clear_mask                       0xF7

#define RXB1D04                                  0x4
#define RXB1D04_address                          0xF56
#define RXB1D04_position                         0x4
#define RXB1D04_size                             0x1
#define RXB1D04_value_mask                       0x10
#define RXB1D04_clear_mask                       0xEF

#define RXB1D05                                  0x5
#define RXB1D05_address                          0xF56
#define RXB1D05_position                         0x5
#define RXB1D05_size                             0x1
#define RXB1D05_value_mask                       0x20
#define RXB1D05_clear_mask                       0xDF

#define RXB1D06                                  0x6
#define RXB1D06_address                          0xF56
#define RXB1D06_position                         0x6
#define RXB1D06_size                             0x1
#define RXB1D06_value_mask                       0x40
#define RXB1D06_clear_mask                       0xBF

#define RXB1D07                                  0x7
#define RXB1D07_address                          0xF56
#define RXB1D07_position                         0x7
#define RXB1D07_size                             0x1
#define RXB1D07_value_mask                       0x80
#define RXB1D07_clear_mask                       0x7F


/*------------------------------------------------------------------------------#
| RXB1D1                                                                  0xF57 |
#-------------------------------------------------------------------------------#
| RXB1D17 | RXB1D16 | RXB1D15 | RXB1D14 | RXB1D13 | RXB1D12 | RXB1D11 | RXB1D10 |
#-------------------------------------------------------------------------------#
| 7       | 6       | 5       | 4       | 3       | 2       | 1       | 0       |
#------------------------------------------------------------------------------*/

#define RXB1D1                                   0x0
#define RXB1D1_address                           0xF57
#define RXB1D1_position                          0x0
#define RXB1D1_size                              0x8
#define RXB1D1_value_mask                        0xFF
#define RXB1D1_clear_mask                        0x0

#define RXB1D10                                  0x0
#define RXB1D10_address                          0xF57
#define RXB1D10_position                         0x0
#define RXB1D10_size                             0x1
#define RXB1D10_value_mask                       0x1
#define RXB1D10_clear_mask                       0xFE

#define RXB1D11                                  0x1
#define RXB1D11_address                          0xF57
#define RXB1D11_position                         0x1
#define RXB1D11_size                             0x1
#define RXB1D11_value_mask                       0x2
#define RXB1D11_clear_mask                       0xFD

#define RXB1D12                                  0x2
#define RXB1D12_address                          0xF57
#define RXB1D12_position                         0x2
#define RXB1D12_size                             0x1
#define RXB1D12_value_mask                       0x4
#define RXB1D12_clear_mask                       0xFB

#define RXB1D13                                  0x3
#define RXB1D13_address                          0xF57
#define RXB1D13_position                         0x3
#define RXB1D13_size                             0x1
#define RXB1D13_value_mask                       0x8
#define RXB1D13_clear_mask                       0xF7

#define RXB1D14                                  0x4
#define RXB1D14_address                          0xF57
#define RXB1D14_position                         0x4
#define RXB1D14_size                             0x1
#define RXB1D14_value_mask                       0x10
#define RXB1D14_clear_mask                       0xEF

#define RXB1D15                                  0x5
#define RXB1D15_address                          0xF57
#define RXB1D15_position                         0x5
#define RXB1D15_size                             0x1
#define RXB1D15_value_mask                       0x20
#define RXB1D15_clear_mask                       0xDF

#define RXB1D16                                  0x6
#define RXB1D16_address                          0xF57
#define RXB1D16_position                         0x6
#define RXB1D16_size                             0x1
#define RXB1D16_value_mask                       0x40
#define RXB1D16_clear_mask                       0xBF

#define RXB1D17                                  0x7
#define RXB1D17_address                          0xF57
#define RXB1D17_position                         0x7
#define RXB1D17_size                             0x1
#define RXB1D17_value_mask                       0x80
#define RXB1D17_clear_mask                       0x7F


/*------------------------------------------------------------------------------#
| RXB1D2                                                                  0xF58 |
#-------------------------------------------------------------------------------#
| RXB1D27 | RXB1D26 | RXB1D25 | RXB1D24 | RXB1D23 | RXB1D22 | RXB1D21 | RXB1D20 |
#-------------------------------------------------------------------------------#
| 7       | 6       | 5       | 4       | 3       | 2       | 1       | 0       |
#------------------------------------------------------------------------------*/

#define RXB1D2                                   0x0
#define RXB1D2_address                           0xF58
#define RXB1D2_position                          0x0
#define RXB1D2_size                              0x8
#define RXB1D2_value_mask                        0xFF
#define RXB1D2_clear_mask                        0x0

#define RXB1D20                                  0x0
#define RXB1D20_address                          0xF58
#define RXB1D20_position                         0x0
#define RXB1D20_size                             0x1
#define RXB1D20_value_mask                       0x1
#define RXB1D20_clear_mask                       0xFE

#define RXB1D21                                  0x1
#define RXB1D21_address                          0xF58
#define RXB1D21_position                         0x1
#define RXB1D21_size                             0x1
#define RXB1D21_value_mask                       0x2
#define RXB1D21_clear_mask                       0xFD

#define RXB1D22                                  0x2
#define RXB1D22_address                          0xF58
#define RXB1D22_position                         0x2
#define RXB1D22_size                             0x1
#define RXB1D22_value_mask                       0x4
#define RXB1D22_clear_mask                       0xFB

#define RXB1D23                                  0x3
#define RXB1D23_address                          0xF58
#define RXB1D23_position                         0x3
#define RXB1D23_size                             0x1
#define RXB1D23_value_mask                       0x8
#define RXB1D23_clear_mask                       0xF7

#define RXB1D24                                  0x4
#define RXB1D24_address                          0xF58
#define RXB1D24_position                         0x4
#define RXB1D24_size                             0x1
#define RXB1D24_value_mask                       0x10
#define RXB1D24_clear_mask                       0xEF

#define RXB1D25                                  0x5
#define RXB1D25_address                          0xF58
#define RXB1D25_position                         0x5
#define RXB1D25_size                             0x1
#define RXB1D25_value_mask                       0x20
#define RXB1D25_clear_mask                       0xDF

#define RXB1D26                                  0x6
#define RXB1D26_address                          0xF58
#define RXB1D26_position                         0x6
#define RXB1D26_size                             0x1
#define RXB1D26_value_mask                       0x40
#define RXB1D26_clear_mask                       0xBF

#define RXB1D27                                  0x7
#define RXB1D27_address                          0xF58
#define RXB1D27_position                         0x7
#define RXB1D27_size                             0x1
#define RXB1D27_value_mask                       0x80
#define RXB1D27_clear_mask                       0x7F


/*------------------------------------------------------------------------------#
| RXB1D3                                                                  0xF59 |
#-------------------------------------------------------------------------------#
| RXB1D37 | RXB1D36 | RXB1D35 | RXB1D34 | RXB1D33 | RXB1D32 | RXB1D31 | RXB1D30 |
#-------------------------------------------------------------------------------#
| 7       | 6       | 5       | 4       | 3       | 2       | 1       | 0       |
#------------------------------------------------------------------------------*/

#define RXB1D3                                   0x0
#define RXB1D3_address                           0xF59
#define RXB1D3_position                          0x0
#define RXB1D3_size                              0x8
#define RXB1D3_value_mask                        0xFF
#define RXB1D3_clear_mask                        0x0

#define RXB1D30                                  0x0
#define RXB1D30_address                          0xF59
#define RXB1D30_position                         0x0
#define RXB1D30_size                             0x1
#define RXB1D30_value_mask                       0x1
#define RXB1D30_clear_mask                       0xFE

#define RXB1D31                                  0x1
#define RXB1D31_address                          0xF59
#define RXB1D31_position                         0x1
#define RXB1D31_size                             0x1
#define RXB1D31_value_mask                       0x2
#define RXB1D31_clear_mask                       0xFD

#define RXB1D32                                  0x2
#define RXB1D32_address                          0xF59
#define RXB1D32_position                         0x2
#define RXB1D32_size                             0x1
#define RXB1D32_value_mask                       0x4
#define RXB1D32_clear_mask                       0xFB

#define RXB1D33                                  0x3
#define RXB1D33_address                          0xF59
#define RXB1D33_position                         0x3
#define RXB1D33_size                             0x1
#define RXB1D33_value_mask                       0x8
#define RXB1D33_clear_mask                       0xF7

#define RXB1D34                                  0x4
#define RXB1D34_address                          0xF59
#define RXB1D34_position                         0x4
#define RXB1D34_size                             0x1
#define RXB1D34_value_mask                       0x10
#define RXB1D34_clear_mask                       0xEF

#define RXB1D35                                  0x5
#define RXB1D35_address                          0xF59
#define RXB1D35_position                         0x5
#define RXB1D35_size                             0x1
#define RXB1D35_value_mask                       0x20
#define RXB1D35_clear_mask                       0xDF

#define RXB1D36                                  0x6
#define RXB1D36_address                          0xF59
#define RXB1D36_position                         0x6
#define RXB1D36_size                             0x1
#define RXB1D36_value_mask                       0x40
#define RXB1D36_clear_mask                       0xBF

#define RXB1D37                                  0x7
#define RXB1D37_address                          0xF59
#define RXB1D37_position                         0x7
#define RXB1D37_size                             0x1
#define RXB1D37_value_mask                       0x80
#define RXB1D37_clear_mask                       0x7F


/*------------------------------------------------------------------------------#
| RXB1D4                                                                  0xF5A |
#-------------------------------------------------------------------------------#
| RXB1D47 | RXB1D46 | RXB1D45 | RXB1D44 | RXB1D43 | RXB1D42 | RXB1D41 | RXB1D40 |
#-------------------------------------------------------------------------------#
| 7       | 6       | 5       | 4       | 3       | 2       | 1       | 0       |
#------------------------------------------------------------------------------*/

#define RXB1D4                                   0x0
#define RXB1D4_address                           0xF5A
#define RXB1D4_position                          0x0
#define RXB1D4_size                              0x8
#define RXB1D4_value_mask                        0xFF
#define RXB1D4_clear_mask                        0x0

#define RXB1D40                                  0x0
#define RXB1D40_address                          0xF5A
#define RXB1D40_position                         0x0
#define RXB1D40_size                             0x1
#define RXB1D40_value_mask                       0x1
#define RXB1D40_clear_mask                       0xFE

#define RXB1D41                                  0x1
#define RXB1D41_address                          0xF5A
#define RXB1D41_position                         0x1
#define RXB1D41_size                             0x1
#define RXB1D41_value_mask                       0x2
#define RXB1D41_clear_mask                       0xFD

#define RXB1D42                                  0x2
#define RXB1D42_address                          0xF5A
#define RXB1D42_position                         0x2
#define RXB1D42_size                             0x1
#define RXB1D42_value_mask                       0x4
#define RXB1D42_clear_mask                       0xFB

#define RXB1D43                                  0x3
#define RXB1D43_address                          0xF5A
#define RXB1D43_position                         0x3
#define RXB1D43_size                             0x1
#define RXB1D43_value_mask                       0x8
#define RXB1D43_clear_mask                       0xF7

#define RXB1D44                                  0x4
#define RXB1D44_address                          0xF5A
#define RXB1D44_position                         0x4
#define RXB1D44_size                             0x1
#define RXB1D44_value_mask                       0x10
#define RXB1D44_clear_mask                       0xEF

#define RXB1D45                                  0x5
#define RXB1D45_address                          0xF5A
#define RXB1D45_position                         0x5
#define RXB1D45_size                             0x1
#define RXB1D45_value_mask                       0x20
#define RXB1D45_clear_mask                       0xDF

#define RXB1D46                                  0x6
#define RXB1D46_address                          0xF5A
#define RXB1D46_position                         0x6
#define RXB1D46_size                             0x1
#define RXB1D46_value_mask                       0x40
#define RXB1D46_clear_mask                       0xBF

#define RXB1D47                                  0x7
#define RXB1D47_address                          0xF5A
#define RXB1D47_position                         0x7
#define RXB1D47_size                             0x1
#define RXB1D47_value_mask                       0x80
#define RXB1D47_clear_mask                       0x7F


/*------------------------------------------------------------------------------#
| RXB1D5                                                                  0xF5B |
#-------------------------------------------------------------------------------#
| RXB1D57 | RXB1D56 | RXB1D55 | RXB1D54 | RXB1D53 | RXB1D52 | RXB1D51 | RXB1D50 |
#-------------------------------------------------------------------------------#
| 7       | 6       | 5       | 4       | 3       | 2       | 1       | 0       |
#------------------------------------------------------------------------------*/

#define RXB1D5                                   0x0
#define RXB1D5_address                           0xF5B
#define RXB1D5_position                          0x0
#define RXB1D5_size                              0x8
#define RXB1D5_value_mask                        0xFF
#define RXB1D5_clear_mask                        0x0

#define RXB1D50                                  0x0
#define RXB1D50_address                          0xF5B
#define RXB1D50_position                         0x0
#define RXB1D50_size                             0x1
#define RXB1D50_value_mask                       0x1
#define RXB1D50_clear_mask                       0xFE

#define RXB1D51                                  0x1
#define RXB1D51_address                          0xF5B
#define RXB1D51_position                         0x1
#define RXB1D51_size                             0x1
#define RXB1D51_value_mask                       0x2
#define RXB1D51_clear_mask                       0xFD

#define RXB1D52                                  0x2
#define RXB1D52_address                          0xF5B
#define RXB1D52_position                         0x2
#define RXB1D52_size                             0x1
#define RXB1D52_value_mask                       0x4
#define RXB1D52_clear_mask                       0xFB

#define RXB1D53                                  0x3
#define RXB1D53_address                          0xF5B
#define RXB1D53_position                         0x3
#define RXB1D53_size                             0x1
#define RXB1D53_value_mask                       0x8
#define RXB1D53_clear_mask                       0xF7

#define RXB1D54                                  0x4
#define RXB1D54_address                          0xF5B
#define RXB1D54_position                         0x4
#define RXB1D54_size                             0x1
#define RXB1D54_value_mask                       0x10
#define RXB1D54_clear_mask                       0xEF

#define RXB1D55                                  0x5
#define RXB1D55_address                          0xF5B
#define RXB1D55_position                         0x5
#define RXB1D55_size                             0x1
#define RXB1D55_value_mask                       0x20
#define RXB1D55_clear_mask                       0xDF

#define RXB1D56                                  0x6
#define RXB1D56_address                          0xF5B
#define RXB1D56_position                         0x6
#define RXB1D56_size                             0x1
#define RXB1D56_value_mask                       0x40
#define RXB1D56_clear_mask                       0xBF

#define RXB1D57                                  0x7
#define RXB1D57_address                          0xF5B
#define RXB1D57_position                         0x7
#define RXB1D57_size                             0x1
#define RXB1D57_value_mask                       0x80
#define RXB1D57_clear_mask                       0x7F


/*------------------------------------------------------------------------------#
| RXB1D6                                                                  0xF5C |
#-------------------------------------------------------------------------------#
| RXB1D67 | RXB1D66 | RXB1D65 | RXB1D64 | RXB1D63 | RXB1D62 | RXB1D61 | RXB1D60 |
#-------------------------------------------------------------------------------#
| 7       | 6       | 5       | 4       | 3       | 2       | 1       | 0       |
#------------------------------------------------------------------------------*/

#define RXB1D6                                   0x0
#define RXB1D6_address                           0xF5C
#define RXB1D6_position                          0x0
#define RXB1D6_size                              0x8
#define RXB1D6_value_mask                        0xFF
#define RXB1D6_clear_mask                        0x0

#define RXB1D60                                  0x0
#define RXB1D60_address                          0xF5C
#define RXB1D60_position                         0x0
#define RXB1D60_size                             0x1
#define RXB1D60_value_mask                       0x1
#define RXB1D60_clear_mask                       0xFE

#define RXB1D61                                  0x1
#define RXB1D61_address                          0xF5C
#define RXB1D61_position                         0x1
#define RXB1D61_size                             0x1
#define RXB1D61_value_mask                       0x2
#define RXB1D61_clear_mask                       0xFD

#define RXB1D62                                  0x2
#define RXB1D62_address                          0xF5C
#define RXB1D62_position                         0x2
#define RXB1D62_size                             0x1
#define RXB1D62_value_mask                       0x4
#define RXB1D62_clear_mask                       0xFB

#define RXB1D63                                  0x3
#define RXB1D63_address                          0xF5C
#define RXB1D63_position                         0x3
#define RXB1D63_size                             0x1
#define RXB1D63_value_mask                       0x8
#define RXB1D63_clear_mask                       0xF7

#define RXB1D64                                  0x4
#define RXB1D64_address                          0xF5C
#define RXB1D64_position                         0x4
#define RXB1D64_size                             0x1
#define RXB1D64_value_mask                       0x10
#define RXB1D64_clear_mask                       0xEF

#define RXB1D65                                  0x5
#define RXB1D65_address                          0xF5C
#define RXB1D65_position                         0x5
#define RXB1D65_size                             0x1
#define RXB1D65_value_mask                       0x20
#define RXB1D65_clear_mask                       0xDF

#define RXB1D66                                  0x6
#define RXB1D66_address                          0xF5C
#define RXB1D66_position                         0x6
#define RXB1D66_size                             0x1
#define RXB1D66_value_mask                       0x40
#define RXB1D66_clear_mask                       0xBF

#define RXB1D67                                  0x7
#define RXB1D67_address                          0xF5C
#define RXB1D67_position                         0x7
#define RXB1D67_size                             0x1
#define RXB1D67_value_mask                       0x80
#define RXB1D67_clear_mask                       0x7F


/*------------------------------------------------------------------------------#
| RXB1D7                                                                  0xF5D |
#-------------------------------------------------------------------------------#
| RXB1D77 | RXB1D76 | RXB1D75 | RXB1D74 | RXB1D73 | RXB1D72 | RXB1D71 | RXB1D70 |
#-------------------------------------------------------------------------------#
| 7       | 6       | 5       | 4       | 3       | 2       | 1       | 0       |
#------------------------------------------------------------------------------*/

#define RXB1D7                                   0x0
#define RXB1D7_address                           0xF5D
#define RXB1D7_position                          0x0
#define RXB1D7_size                              0x8
#define RXB1D7_value_mask                        0xFF
#define RXB1D7_clear_mask                        0x0

#define RXB1D70                                  0x0
#define RXB1D70_address                          0xF5D
#define RXB1D70_position                         0x0
#define RXB1D70_size                             0x1
#define RXB1D70_value_mask                       0x1
#define RXB1D70_clear_mask                       0xFE

#define RXB1D71                                  0x1
#define RXB1D71_address                          0xF5D
#define RXB1D71_position                         0x1
#define RXB1D71_size                             0x1
#define RXB1D71_value_mask                       0x2
#define RXB1D71_clear_mask                       0xFD

#define RXB1D72                                  0x2
#define RXB1D72_address                          0xF5D
#define RXB1D72_position                         0x2
#define RXB1D72_size                             0x1
#define RXB1D72_value_mask                       0x4
#define RXB1D72_clear_mask                       0xFB

#define RXB1D73                                  0x3
#define RXB1D73_address                          0xF5D
#define RXB1D73_position                         0x3
#define RXB1D73_size                             0x1
#define RXB1D73_value_mask                       0x8
#define RXB1D73_clear_mask                       0xF7

#define RXB1D74                                  0x4
#define RXB1D74_address                          0xF5D
#define RXB1D74_position                         0x4
#define RXB1D74_size                             0x1
#define RXB1D74_value_mask                       0x10
#define RXB1D74_clear_mask                       0xEF

#define RXB1D75                                  0x5
#define RXB1D75_address                          0xF5D
#define RXB1D75_position                         0x5
#define RXB1D75_size                             0x1
#define RXB1D75_value_mask                       0x20
#define RXB1D75_clear_mask                       0xDF

#define RXB1D76                                  0x6
#define RXB1D76_address                          0xF5D
#define RXB1D76_position                         0x6
#define RXB1D76_size                             0x1
#define RXB1D76_value_mask                       0x40
#define RXB1D76_clear_mask                       0xBF

#define RXB1D77                                  0x7
#define RXB1D77_address                          0xF5D
#define RXB1D77_position                         0x7
#define RXB1D77_size                             0x1
#define RXB1D77_value_mask                       0x80
#define RXB1D77_clear_mask                       0x7F


/*---------------------------------------------------------------------------------------------------------------------------------#
| CANSTATRO1                                                                                                                 0xF5E |
#----------------------------------------------------------------------------------------------------------------------------------#
| CANSTATRO1_OPMODE2 | CANSTATRO1_OPMODE1 | CANSTATRO1_OPMODE0 | - | CANSTATRO1_ICODE2 | CANSTATRO1_ICODE1 | CANSTATRO1_ICODE0 | - |
#----------------------------------------------------------------------------------------------------------------------------------#
| 7                  | 6                  | 5                  | 4 | 3                 | 2                 | 1                 | 0 |
#---------------------------------------------------------------------------------------------------------------------------------*/

#define CANSTATRO1                               0x0
#define CANSTATRO1_address                       0xF5E
#define CANSTATRO1_position                      0x0
#define CANSTATRO1_size                          0x8
#define CANSTATRO1_value_mask                    0xFF
#define CANSTATRO1_clear_mask                    0x0

#define CANSTATRO1_ICODE0                        0x1
#define CANSTATRO1_ICODE0_address                0xF5E
#define CANSTATRO1_ICODE0_position               0x1
#define CANSTATRO1_ICODE0_size                   0x1
#define CANSTATRO1_ICODE0_value_mask             0x2
#define CANSTATRO1_ICODE0_clear_mask             0xFD

#define CANSTATRO1_ICODE1                        0x2
#define CANSTATRO1_ICODE1_address                0xF5E
#define CANSTATRO1_ICODE1_position               0x2
#define CANSTATRO1_ICODE1_size                   0x1
#define CANSTATRO1_ICODE1_value_mask             0x4
#define CANSTATRO1_ICODE1_clear_mask             0xFB

#define CANSTATRO1_ICODE2                        0x3
#define CANSTATRO1_ICODE2_address                0xF5E
#define CANSTATRO1_ICODE2_position               0x3
#define CANSTATRO1_ICODE2_size                   0x1
#define CANSTATRO1_ICODE2_value_mask             0x8
#define CANSTATRO1_ICODE2_clear_mask             0xF7

#define CANSTATRO1_OPMODE0                       0x5
#define CANSTATRO1_OPMODE0_address               0xF5E
#define CANSTATRO1_OPMODE0_position              0x5
#define CANSTATRO1_OPMODE0_size                  0x1
#define CANSTATRO1_OPMODE0_value_mask            0x20
#define CANSTATRO1_OPMODE0_clear_mask            0xDF

#define CANSTATRO1_OPMODE1                       0x6
#define CANSTATRO1_OPMODE1_address               0xF5E
#define CANSTATRO1_OPMODE1_position              0x6
#define CANSTATRO1_OPMODE1_size                  0x1
#define CANSTATRO1_OPMODE1_value_mask            0x40
#define CANSTATRO1_OPMODE1_clear_mask            0xBF

#define CANSTATRO1_OPMODE2                       0x7
#define CANSTATRO1_OPMODE2_address               0xF5E
#define CANSTATRO1_OPMODE2_position              0x7
#define CANSTATRO1_OPMODE2_size                  0x1
#define CANSTATRO1_OPMODE2_value_mask            0x80
#define CANSTATRO1_OPMODE2_clear_mask            0x7F


/*---------------------------------------------------------------------------------------------#
| RXB0CON                                                                                0xF60 |
#----------------------------------------------------------------------------------------------#
| RXB0FUL | RXB0M1 | RXB0RTRRO | - | RXB0CON_RXRTRRO | RXB0FILHIT2 | RXB0FILHIT1 | RXB0FILHIT0 |
#----------------------------------------------------------------------------------------------#
| 7       | 6      | 5         | 4 | 3               | 2           | 1           | 0           |
#---------------------------------------------------------------------------------------------*/

#define RXB0CON                                  0x0
#define RXB0CON_address                          0xF60
#define RXB0CON_position                         0x0
#define RXB0CON_size                             0x8
#define RXB0CON_value_mask                       0xFF
#define RXB0CON_clear_mask                       0x0

#define RXB0FILHIT0                              0x0
#define RXB0FILHIT0_address                      0xF60
#define RXB0FILHIT0_position                     0x0
#define RXB0FILHIT0_size                         0x1
#define RXB0FILHIT0_value_mask                   0x1
#define RXB0FILHIT0_clear_mask                   0xFE

#define RXB0CON_FILHIT0                          0x0
#define RXB0CON_FILHIT0_address                  0xF60
#define RXB0CON_FILHIT0_position                 0x0
#define RXB0CON_FILHIT0_size                     0x1
#define RXB0CON_FILHIT0_value_mask               0x1
#define RXB0CON_FILHIT0_clear_mask               0xFE

#define RXB0FILHIT1                              0x1
#define RXB0FILHIT1_address                      0xF60
#define RXB0FILHIT1_position                     0x1
#define RXB0FILHIT1_size                         0x1
#define RXB0FILHIT1_value_mask                   0x2
#define RXB0FILHIT1_clear_mask                   0xFD

#define JTOFF                                    0x1
#define JTOFF_address                            0xF60
#define JTOFF_position                           0x1
#define JTOFF_size                               0x1
#define JTOFF_value_mask                         0x2
#define JTOFF_clear_mask                         0xFD

#define RXB0FILHIT2                              0x2
#define RXB0FILHIT2_address                      0xF60
#define RXB0FILHIT2_position                     0x2
#define RXB0FILHIT2_size                         0x1
#define RXB0FILHIT2_value_mask                   0x4
#define RXB0FILHIT2_clear_mask                   0xFB

#define RXB0DBEN                                 0x2
#define RXB0DBEN_address                         0xF60
#define RXB0DBEN_position                        0x2
#define RXB0DBEN_size                            0x1
#define RXB0DBEN_value_mask                      0x4
#define RXB0DBEN_clear_mask                      0xFB

#define RXB0CON_RXRTRRO                          0x3
#define RXB0CON_RXRTRRO_address                  0xF60
#define RXB0CON_RXRTRRO_position                 0x3
#define RXB0CON_RXRTRRO_size                     0x1
#define RXB0CON_RXRTRRO_value_mask               0x8
#define RXB0CON_RXRTRRO_clear_mask               0xF7

#define RXB0FILHIT3                              0x3
#define RXB0FILHIT3_address                      0xF60
#define RXB0FILHIT3_position                     0x3
#define RXB0FILHIT3_size                         0x1
#define RXB0FILHIT3_value_mask                   0x8
#define RXB0FILHIT3_clear_mask                   0xF7

#define RXB0RTRR0                                0x3
#define RXB0RTRR0_address                        0xF60
#define RXB0RTRR0_position                       0x3
#define RXB0RTRR0_size                           0x1
#define RXB0RTRR0_value_mask                     0x8
#define RXB0RTRR0_clear_mask                     0xF7

#define RXB0RTRRO                                0x5
#define RXB0RTRRO_address                        0xF60
#define RXB0RTRRO_position                       0x5
#define RXB0RTRRO_size                           0x1
#define RXB0RTRRO_value_mask                     0x20
#define RXB0RTRRO_clear_mask                     0xDF

#define RXB0M0                                   0x5
#define RXB0M0_address                           0xF60
#define RXB0M0_position                          0x5
#define RXB0M0_size                              0x1
#define RXB0M0_value_mask                        0x20
#define RXB0M0_clear_mask                        0xDF

#define RXB0CON_RXM0                             0x5
#define RXB0CON_RXM0_address                     0xF60
#define RXB0CON_RXM0_position                    0x5
#define RXB0CON_RXM0_size                        0x1
#define RXB0CON_RXM0_value_mask                  0x20
#define RXB0CON_RXM0_clear_mask                  0xDF

#define RXB0M1                                   0x6
#define RXB0M1_address                           0xF60
#define RXB0M1_position                          0x6
#define RXB0M1_size                              0x1
#define RXB0M1_value_mask                        0x40
#define RXB0M1_clear_mask                        0xBF

#define RXB0CON_RXM1                             0x6
#define RXB0CON_RXM1_address                     0xF60
#define RXB0CON_RXM1_position                    0x6
#define RXB0CON_RXM1_size                        0x1
#define RXB0CON_RXM1_value_mask                  0x40
#define RXB0CON_RXM1_clear_mask                  0xBF

#define RXB0CON_RXFUL                            0x7
#define RXB0CON_RXFUL_address                    0xF60
#define RXB0CON_RXFUL_position                   0x7
#define RXB0CON_RXFUL_size                       0x1
#define RXB0CON_RXFUL_value_mask                 0x80
#define RXB0CON_RXFUL_clear_mask                 0x7F

#define RXB0FUL                                  0x7
#define RXB0FUL_address                          0xF60
#define RXB0FUL_position                         0x7
#define RXB0FUL_size                             0x1
#define RXB0FUL_value_mask                       0x80
#define RXB0FUL_clear_mask                       0x7F


/*-------------------------------------------------------------------------------------------------#
| RXB0SIDH                                                                                   0xF61 |
#--------------------------------------------------------------------------------------------------#
| RXB0SIDH_SID10 | RXB0SID9 | RXB0SID8 | RXB0SID7 | RXB0SIDH_SID6 | RXB0SID5 | RXB0SID4 | RXB0SID3 |
#--------------------------------------------------------------------------------------------------#
| 7              | 6        | 5        | 4        | 3             | 2        | 1        | 0        |
#-------------------------------------------------------------------------------------------------*/

#define RXB0SIDH                                 0x0
#define RXB0SIDH_address                         0xF61
#define RXB0SIDH_position                        0x0
#define RXB0SIDH_size                            0x8
#define RXB0SIDH_value_mask                      0xFF
#define RXB0SIDH_clear_mask                      0x0

#define RXB0SIDH_SID3                            0x0
#define RXB0SIDH_SID3_address                    0xF61
#define RXB0SIDH_SID3_position                   0x0
#define RXB0SIDH_SID3_size                       0x1
#define RXB0SIDH_SID3_value_mask                 0x1
#define RXB0SIDH_SID3_clear_mask                 0xFE

#define RXB0SID3                                 0x0
#define RXB0SID3_address                         0xF61
#define RXB0SID3_position                        0x0
#define RXB0SID3_size                            0x1
#define RXB0SID3_value_mask                      0x1
#define RXB0SID3_clear_mask                      0xFE

#define RXB0SIDH_SID4                            0x1
#define RXB0SIDH_SID4_address                    0xF61
#define RXB0SIDH_SID4_position                   0x1
#define RXB0SIDH_SID4_size                       0x1
#define RXB0SIDH_SID4_value_mask                 0x2
#define RXB0SIDH_SID4_clear_mask                 0xFD

#define RXB0SID4                                 0x1
#define RXB0SID4_address                         0xF61
#define RXB0SID4_position                        0x1
#define RXB0SID4_size                            0x1
#define RXB0SID4_value_mask                      0x2
#define RXB0SID4_clear_mask                      0xFD

#define RXB0SIDH_SID5                            0x2
#define RXB0SIDH_SID5_address                    0xF61
#define RXB0SIDH_SID5_position                   0x2
#define RXB0SIDH_SID5_size                       0x1
#define RXB0SIDH_SID5_value_mask                 0x4
#define RXB0SIDH_SID5_clear_mask                 0xFB

#define RXB0SID5                                 0x2
#define RXB0SID5_address                         0xF61
#define RXB0SID5_position                        0x2
#define RXB0SID5_size                            0x1
#define RXB0SID5_value_mask                      0x4
#define RXB0SID5_clear_mask                      0xFB

#define RXB0SIDH_SID6                            0x3
#define RXB0SIDH_SID6_address                    0xF61
#define RXB0SIDH_SID6_position                   0x3
#define RXB0SIDH_SID6_size                       0x1
#define RXB0SIDH_SID6_value_mask                 0x8
#define RXB0SIDH_SID6_clear_mask                 0xF7

#define RXB0SID6                                 0x3
#define RXB0SID6_address                         0xF61
#define RXB0SID6_position                        0x3
#define RXB0SID6_size                            0x1
#define RXB0SID6_value_mask                      0x8
#define RXB0SID6_clear_mask                      0xF7

#define RXB0SIDH_SID7                            0x4
#define RXB0SIDH_SID7_address                    0xF61
#define RXB0SIDH_SID7_position                   0x4
#define RXB0SIDH_SID7_size                       0x1
#define RXB0SIDH_SID7_value_mask                 0x10
#define RXB0SIDH_SID7_clear_mask                 0xEF

#define RXB0SID7                                 0x4
#define RXB0SID7_address                         0xF61
#define RXB0SID7_position                        0x4
#define RXB0SID7_size                            0x1
#define RXB0SID7_value_mask                      0x10
#define RXB0SID7_clear_mask                      0xEF

#define RXB0SIDH_SID8                            0x5
#define RXB0SIDH_SID8_address                    0xF61
#define RXB0SIDH_SID8_position                   0x5
#define RXB0SIDH_SID8_size                       0x1
#define RXB0SIDH_SID8_value_mask                 0x20
#define RXB0SIDH_SID8_clear_mask                 0xDF

#define RXB0SID8                                 0x5
#define RXB0SID8_address                         0xF61
#define RXB0SID8_position                        0x5
#define RXB0SID8_size                            0x1
#define RXB0SID8_value_mask                      0x20
#define RXB0SID8_clear_mask                      0xDF

#define RXB0SIDH_SID9                            0x6
#define RXB0SIDH_SID9_address                    0xF61
#define RXB0SIDH_SID9_position                   0x6
#define RXB0SIDH_SID9_size                       0x1
#define RXB0SIDH_SID9_value_mask                 0x40
#define RXB0SIDH_SID9_clear_mask                 0xBF

#define RXB0SID9                                 0x6
#define RXB0SID9_address                         0xF61
#define RXB0SID9_position                        0x6
#define RXB0SID9_size                            0x1
#define RXB0SID9_value_mask                      0x40
#define RXB0SID9_clear_mask                      0xBF

#define RXB0SIDH_SID10                           0x7
#define RXB0SIDH_SID10_address                   0xF61
#define RXB0SIDH_SID10_position                  0x7
#define RXB0SIDH_SID10_size                      0x1
#define RXB0SIDH_SID10_value_mask                0x80
#define RXB0SIDH_SID10_clear_mask                0x7F

#define RXB0SID10                                0x7
#define RXB0SID10_address                        0xF61
#define RXB0SID10_position                       0x7
#define RXB0SID10_size                           0x1
#define RXB0SID10_value_mask                     0x80
#define RXB0SID10_clear_mask                     0x7F


/*------------------------------------------------------------------------------------------#
| RXB0SIDL                                                                            0xF62 |
#-------------------------------------------------------------------------------------------#
| RXB0SID2 | RXB0SID1 | RXB0SID0 | RXB0SRR | RXB0EXID | - | RXB0SIDL_EID17 | RXB0SIDL_EID16 |
#-------------------------------------------------------------------------------------------#
| 7        | 6        | 5        | 4       | 3        | 2 | 1              | 0              |
#------------------------------------------------------------------------------------------*/

#define RXB0SIDL                                 0x0
#define RXB0SIDL_address                         0xF62
#define RXB0SIDL_position                        0x0
#define RXB0SIDL_size                            0x8
#define RXB0SIDL_value_mask                      0xFF
#define RXB0SIDL_clear_mask                      0x0

#define RXB0SIDL_EID16                           0x0
#define RXB0SIDL_EID16_address                   0xF62
#define RXB0SIDL_EID16_position                  0x0
#define RXB0SIDL_EID16_size                      0x1
#define RXB0SIDL_EID16_value_mask                0x1
#define RXB0SIDL_EID16_clear_mask                0xFE

#define RXB0EID16                                0x0
#define RXB0EID16_address                        0xF62
#define RXB0EID16_position                       0x0
#define RXB0EID16_size                           0x1
#define RXB0EID16_value_mask                     0x1
#define RXB0EID16_clear_mask                     0xFE

#define RXB0SIDL_EID17                           0x1
#define RXB0SIDL_EID17_address                   0xF62
#define RXB0SIDL_EID17_position                  0x1
#define RXB0SIDL_EID17_size                      0x1
#define RXB0SIDL_EID17_value_mask                0x2
#define RXB0SIDL_EID17_clear_mask                0xFD

#define RXB0EID17                                0x1
#define RXB0EID17_address                        0xF62
#define RXB0EID17_position                       0x1
#define RXB0EID17_size                           0x1
#define RXB0EID17_value_mask                     0x2
#define RXB0EID17_clear_mask                     0xFD

#define RXB0EXID                                 0x3
#define RXB0EXID_address                         0xF62
#define RXB0EXID_position                        0x3
#define RXB0EXID_size                            0x1
#define RXB0EXID_value_mask                      0x8
#define RXB0EXID_clear_mask                      0xF7

#define RXB0SIDL_EXID                            0x3
#define RXB0SIDL_EXID_address                    0xF62
#define RXB0SIDL_EXID_position                   0x3
#define RXB0SIDL_EXID_size                       0x1
#define RXB0SIDL_EXID_value_mask                 0x8
#define RXB0SIDL_EXID_clear_mask                 0xF7

#define RXB0SRR                                  0x4
#define RXB0SRR_address                          0xF62
#define RXB0SRR_position                         0x4
#define RXB0SRR_size                             0x1
#define RXB0SRR_value_mask                       0x10
#define RXB0SRR_clear_mask                       0xEF

#define RXB0SIDL_SRR                             0x4
#define RXB0SIDL_SRR_address                     0xF62
#define RXB0SIDL_SRR_position                    0x4
#define RXB0SIDL_SRR_size                        0x1
#define RXB0SIDL_SRR_value_mask                  0x10
#define RXB0SIDL_SRR_clear_mask                  0xEF

#define RXB0SID0                                 0x5
#define RXB0SID0_address                         0xF62
#define RXB0SID0_position                        0x5
#define RXB0SID0_size                            0x1
#define RXB0SID0_value_mask                      0x20
#define RXB0SID0_clear_mask                      0xDF

#define RXB0SIDL_SID0                            0x5
#define RXB0SIDL_SID0_address                    0xF62
#define RXB0SIDL_SID0_position                   0x5
#define RXB0SIDL_SID0_size                       0x1
#define RXB0SIDL_SID0_value_mask                 0x20
#define RXB0SIDL_SID0_clear_mask                 0xDF

#define RXB0SID1                                 0x6
#define RXB0SID1_address                         0xF62
#define RXB0SID1_position                        0x6
#define RXB0SID1_size                            0x1
#define RXB0SID1_value_mask                      0x40
#define RXB0SID1_clear_mask                      0xBF

#define RXB0SIDL_SID1                            0x6
#define RXB0SIDL_SID1_address                    0xF62
#define RXB0SIDL_SID1_position                   0x6
#define RXB0SIDL_SID1_size                       0x1
#define RXB0SIDL_SID1_value_mask                 0x40
#define RXB0SIDL_SID1_clear_mask                 0xBF

#define RXB0SIDL_SID2                            0x7
#define RXB0SIDL_SID2_address                    0xF62
#define RXB0SIDL_SID2_position                   0x7
#define RXB0SIDL_SID2_size                       0x1
#define RXB0SIDL_SID2_value_mask                 0x80
#define RXB0SIDL_SID2_clear_mask                 0x7F

#define RXB0SID2                                 0x7
#define RXB0SID2_address                         0xF62
#define RXB0SID2_position                        0x7
#define RXB0SID2_size                            0x1
#define RXB0SID2_value_mask                      0x80
#define RXB0SID2_clear_mask                      0x7F


/*------------------------------------------------------------------------------------------------------------------------------------#
| RXB0EIDH                                                                                                                      0xF63 |
#-------------------------------------------------------------------------------------------------------------------------------------#
| RXB0EIDH_EID15 | RXB0EIDH_EID14 | RXB0EIDH_EID13 | RXB0EIDH_EID12 | RXB0EIDH_EID11 | RXB0EIDH_EID10 | RXB0EIDH_EID9 | RXB0EIDH_EID8 |
#-------------------------------------------------------------------------------------------------------------------------------------#
| 7              | 6              | 5              | 4              | 3              | 2              | 1             | 0             |
#------------------------------------------------------------------------------------------------------------------------------------*/

#define RXB0EIDH                                 0x0
#define RXB0EIDH_address                         0xF63
#define RXB0EIDH_position                        0x0
#define RXB0EIDH_size                            0x8
#define RXB0EIDH_value_mask                      0xFF
#define RXB0EIDH_clear_mask                      0x0

#define RXB0EID8                                 0x0
#define RXB0EID8_address                         0xF63
#define RXB0EID8_position                        0x0
#define RXB0EID8_size                            0x1
#define RXB0EID8_value_mask                      0x1
#define RXB0EID8_clear_mask                      0xFE

#define RXB0EIDH_EID8                            0x0
#define RXB0EIDH_EID8_address                    0xF63
#define RXB0EIDH_EID8_position                   0x0
#define RXB0EIDH_EID8_size                       0x1
#define RXB0EIDH_EID8_value_mask                 0x1
#define RXB0EIDH_EID8_clear_mask                 0xFE

#define RXB0EID9                                 0x1
#define RXB0EID9_address                         0xF63
#define RXB0EID9_position                        0x1
#define RXB0EID9_size                            0x1
#define RXB0EID9_value_mask                      0x2
#define RXB0EID9_clear_mask                      0xFD

#define RXB0EIDH_EID9                            0x1
#define RXB0EIDH_EID9_address                    0xF63
#define RXB0EIDH_EID9_position                   0x1
#define RXB0EIDH_EID9_size                       0x1
#define RXB0EIDH_EID9_value_mask                 0x2
#define RXB0EIDH_EID9_clear_mask                 0xFD

#define RXB0EID10                                0x2
#define RXB0EID10_address                        0xF63
#define RXB0EID10_position                       0x2
#define RXB0EID10_size                           0x1
#define RXB0EID10_value_mask                     0x4
#define RXB0EID10_clear_mask                     0xFB

#define RXB0EIDH_EID10                           0x2
#define RXB0EIDH_EID10_address                   0xF63
#define RXB0EIDH_EID10_position                  0x2
#define RXB0EIDH_EID10_size                      0x1
#define RXB0EIDH_EID10_value_mask                0x4
#define RXB0EIDH_EID10_clear_mask                0xFB

#define RXB0EID11                                0x3
#define RXB0EID11_address                        0xF63
#define RXB0EID11_position                       0x3
#define RXB0EID11_size                           0x1
#define RXB0EID11_value_mask                     0x8
#define RXB0EID11_clear_mask                     0xF7

#define RXB0EIDH_EID11                           0x3
#define RXB0EIDH_EID11_address                   0xF63
#define RXB0EIDH_EID11_position                  0x3
#define RXB0EIDH_EID11_size                      0x1
#define RXB0EIDH_EID11_value_mask                0x8
#define RXB0EIDH_EID11_clear_mask                0xF7

#define RXB0EID12                                0x4
#define RXB0EID12_address                        0xF63
#define RXB0EID12_position                       0x4
#define RXB0EID12_size                           0x1
#define RXB0EID12_value_mask                     0x10
#define RXB0EID12_clear_mask                     0xEF

#define RXB0EIDH_EID12                           0x4
#define RXB0EIDH_EID12_address                   0xF63
#define RXB0EIDH_EID12_position                  0x4
#define RXB0EIDH_EID12_size                      0x1
#define RXB0EIDH_EID12_value_mask                0x10
#define RXB0EIDH_EID12_clear_mask                0xEF

#define RXB0EID13                                0x5
#define RXB0EID13_address                        0xF63
#define RXB0EID13_position                       0x5
#define RXB0EID13_size                           0x1
#define RXB0EID13_value_mask                     0x20
#define RXB0EID13_clear_mask                     0xDF

#define RXB0EIDH_EID13                           0x5
#define RXB0EIDH_EID13_address                   0xF63
#define RXB0EIDH_EID13_position                  0x5
#define RXB0EIDH_EID13_size                      0x1
#define RXB0EIDH_EID13_value_mask                0x20
#define RXB0EIDH_EID13_clear_mask                0xDF

#define RXB0EID14                                0x6
#define RXB0EID14_address                        0xF63
#define RXB0EID14_position                       0x6
#define RXB0EID14_size                           0x1
#define RXB0EID14_value_mask                     0x40
#define RXB0EID14_clear_mask                     0xBF

#define RXB0EIDH_EID14                           0x6
#define RXB0EIDH_EID14_address                   0xF63
#define RXB0EIDH_EID14_position                  0x6
#define RXB0EIDH_EID14_size                      0x1
#define RXB0EIDH_EID14_value_mask                0x40
#define RXB0EIDH_EID14_clear_mask                0xBF

#define RXB0EID15                                0x7
#define RXB0EID15_address                        0xF63
#define RXB0EID15_position                       0x7
#define RXB0EID15_size                           0x1
#define RXB0EID15_value_mask                     0x80
#define RXB0EID15_clear_mask                     0x7F

#define RXB0EIDH_EID15                           0x7
#define RXB0EIDH_EID15_address                   0xF63
#define RXB0EIDH_EID15_position                  0x7
#define RXB0EIDH_EID15_size                      0x1
#define RXB0EIDH_EID15_value_mask                0x80
#define RXB0EIDH_EID15_clear_mask                0x7F


/*--------------------------------------------------------------------------------------#
| RXB0EIDL                                                                        0xF64 |
#---------------------------------------------------------------------------------------#
| RXB0EID7 | RXB0EID6 | RXB0EID5 | RXB0EID4 | RXB0EID3 | RXB0EID2 | RXB0EID1 | RXB0EID0 |
#---------------------------------------------------------------------------------------#
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
#--------------------------------------------------------------------------------------*/

#define RXB0EIDL                                 0x0
#define RXB0EIDL_address                         0xF64
#define RXB0EIDL_position                        0x0
#define RXB0EIDL_size                            0x8
#define RXB0EIDL_value_mask                      0xFF
#define RXB0EIDL_clear_mask                      0x0

#define RXB0EID0                                 0x0
#define RXB0EID0_address                         0xF64
#define RXB0EID0_position                        0x0
#define RXB0EID0_size                            0x1
#define RXB0EID0_value_mask                      0x1
#define RXB0EID0_clear_mask                      0xFE

#define RXB0EIDL_EID0                            0x0
#define RXB0EIDL_EID0_address                    0xF64
#define RXB0EIDL_EID0_position                   0x0
#define RXB0EIDL_EID0_size                       0x1
#define RXB0EIDL_EID0_value_mask                 0x1
#define RXB0EIDL_EID0_clear_mask                 0xFE

#define RXB0EID1                                 0x1
#define RXB0EID1_address                         0xF64
#define RXB0EID1_position                        0x1
#define RXB0EID1_size                            0x1
#define RXB0EID1_value_mask                      0x2
#define RXB0EID1_clear_mask                      0xFD

#define RXB0EIDL_EID1                            0x1
#define RXB0EIDL_EID1_address                    0xF64
#define RXB0EIDL_EID1_position                   0x1
#define RXB0EIDL_EID1_size                       0x1
#define RXB0EIDL_EID1_value_mask                 0x2
#define RXB0EIDL_EID1_clear_mask                 0xFD

#define RXB0EID2                                 0x2
#define RXB0EID2_address                         0xF64
#define RXB0EID2_position                        0x2
#define RXB0EID2_size                            0x1
#define RXB0EID2_value_mask                      0x4
#define RXB0EID2_clear_mask                      0xFB

#define RXB0EIDL_EID2                            0x2
#define RXB0EIDL_EID2_address                    0xF64
#define RXB0EIDL_EID2_position                   0x2
#define RXB0EIDL_EID2_size                       0x1
#define RXB0EIDL_EID2_value_mask                 0x4
#define RXB0EIDL_EID2_clear_mask                 0xFB

#define RXB0EID3                                 0x3
#define RXB0EID3_address                         0xF64
#define RXB0EID3_position                        0x3
#define RXB0EID3_size                            0x1
#define RXB0EID3_value_mask                      0x8
#define RXB0EID3_clear_mask                      0xF7

#define RXB0EIDL_EID3                            0x3
#define RXB0EIDL_EID3_address                    0xF64
#define RXB0EIDL_EID3_position                   0x3
#define RXB0EIDL_EID3_size                       0x1
#define RXB0EIDL_EID3_value_mask                 0x8
#define RXB0EIDL_EID3_clear_mask                 0xF7

#define RXB0EID4                                 0x4
#define RXB0EID4_address                         0xF64
#define RXB0EID4_position                        0x4
#define RXB0EID4_size                            0x1
#define RXB0EID4_value_mask                      0x10
#define RXB0EID4_clear_mask                      0xEF

#define RXB0EIDL_EID4                            0x4
#define RXB0EIDL_EID4_address                    0xF64
#define RXB0EIDL_EID4_position                   0x4
#define RXB0EIDL_EID4_size                       0x1
#define RXB0EIDL_EID4_value_mask                 0x10
#define RXB0EIDL_EID4_clear_mask                 0xEF

#define RXB0EID5                                 0x5
#define RXB0EID5_address                         0xF64
#define RXB0EID5_position                        0x5
#define RXB0EID5_size                            0x1
#define RXB0EID5_value_mask                      0x20
#define RXB0EID5_clear_mask                      0xDF

#define RXB0EIDL_EID5                            0x5
#define RXB0EIDL_EID5_address                    0xF64
#define RXB0EIDL_EID5_position                   0x5
#define RXB0EIDL_EID5_size                       0x1
#define RXB0EIDL_EID5_value_mask                 0x20
#define RXB0EIDL_EID5_clear_mask                 0xDF

#define RXB0EID6                                 0x6
#define RXB0EID6_address                         0xF64
#define RXB0EID6_position                        0x6
#define RXB0EID6_size                            0x1
#define RXB0EID6_value_mask                      0x40
#define RXB0EID6_clear_mask                      0xBF

#define RXB0EIDL_EID6                            0x6
#define RXB0EIDL_EID6_address                    0xF64
#define RXB0EIDL_EID6_position                   0x6
#define RXB0EIDL_EID6_size                       0x1
#define RXB0EIDL_EID6_value_mask                 0x40
#define RXB0EIDL_EID6_clear_mask                 0xBF

#define RXB0EID7                                 0x7
#define RXB0EID7_address                         0xF64
#define RXB0EID7_position                        0x7
#define RXB0EID7_size                            0x1
#define RXB0EID7_value_mask                      0x80
#define RXB0EID7_clear_mask                      0x7F

#define RXB0EIDL_EID7                            0x7
#define RXB0EIDL_EID7_address                    0xF64
#define RXB0EIDL_EID7_position                   0x7
#define RXB0EIDL_EID7_size                       0x1
#define RXB0EIDL_EID7_value_mask                 0x80
#define RXB0EIDL_EID7_clear_mask                 0x7F


/*----------------------------------------------------------------------------#
| RXB0DLC                                                               0xF65 |
#-----------------------------------------------------------------------------#
| - | RXB0RTR | RXB0RB1 | RXB0RB0 | RXB0DLC3 | RXB0DLC2 | RXB0DLC1 | RXB0DLC0 |
#-----------------------------------------------------------------------------#
| 7 | 6       | 5       | 4       | 3        | 2        | 1        | 0        |
#----------------------------------------------------------------------------*/

#define RXB0DLC                                  0x0
#define RXB0DLC_address                          0xF65
#define RXB0DLC_position                         0x0
#define RXB0DLC_size                             0x8
#define RXB0DLC_value_mask                       0xFF
#define RXB0DLC_clear_mask                       0x0

#define RXB0DLC_DLC0                             0x0
#define RXB0DLC_DLC0_address                     0xF65
#define RXB0DLC_DLC0_position                    0x0
#define RXB0DLC_DLC0_size                        0x1
#define RXB0DLC_DLC0_value_mask                  0x1
#define RXB0DLC_DLC0_clear_mask                  0xFE

#define RXB0DLC0                                 0x0
#define RXB0DLC0_address                         0xF65
#define RXB0DLC0_position                        0x0
#define RXB0DLC0_size                            0x1
#define RXB0DLC0_value_mask                      0x1
#define RXB0DLC0_clear_mask                      0xFE

#define RXB0DLC1                                 0x1
#define RXB0DLC1_address                         0xF65
#define RXB0DLC1_position                        0x1
#define RXB0DLC1_size                            0x1
#define RXB0DLC1_value_mask                      0x2
#define RXB0DLC1_clear_mask                      0xFD

#define RXB0DLC_DLC1                             0x1
#define RXB0DLC_DLC1_address                     0xF65
#define RXB0DLC_DLC1_position                    0x1
#define RXB0DLC_DLC1_size                        0x1
#define RXB0DLC_DLC1_value_mask                  0x2
#define RXB0DLC_DLC1_clear_mask                  0xFD

#define RXB0DLC2                                 0x2
#define RXB0DLC2_address                         0xF65
#define RXB0DLC2_position                        0x2
#define RXB0DLC2_size                            0x1
#define RXB0DLC2_value_mask                      0x4
#define RXB0DLC2_clear_mask                      0xFB

#define RXB0DLC_DLC2                             0x2
#define RXB0DLC_DLC2_address                     0xF65
#define RXB0DLC_DLC2_position                    0x2
#define RXB0DLC_DLC2_size                        0x1
#define RXB0DLC_DLC2_value_mask                  0x4
#define RXB0DLC_DLC2_clear_mask                  0xFB

#define RXB0DLC3                                 0x3
#define RXB0DLC3_address                         0xF65
#define RXB0DLC3_position                        0x3
#define RXB0DLC3_size                            0x1
#define RXB0DLC3_value_mask                      0x8
#define RXB0DLC3_clear_mask                      0xF7

#define RXB0DLC_DLC3                             0x3
#define RXB0DLC_DLC3_address                     0xF65
#define RXB0DLC_DLC3_position                    0x3
#define RXB0DLC_DLC3_size                        0x1
#define RXB0DLC_DLC3_value_mask                  0x8
#define RXB0DLC_DLC3_clear_mask                  0xF7

#define RXB0RB0                                  0x4
#define RXB0RB0_address                          0xF65
#define RXB0RB0_position                         0x4
#define RXB0RB0_size                             0x1
#define RXB0RB0_value_mask                       0x10
#define RXB0RB0_clear_mask                       0xEF

#define RXB0DLC_RESB0                            0x4
#define RXB0DLC_RESB0_address                    0xF65
#define RXB0DLC_RESB0_position                   0x4
#define RXB0DLC_RESB0_size                       0x1
#define RXB0DLC_RESB0_value_mask                 0x10
#define RXB0DLC_RESB0_clear_mask                 0xEF

#define RXB0DLC_RB0                              0x4
#define RXB0DLC_RB0_address                      0xF65
#define RXB0DLC_RB0_position                     0x4
#define RXB0DLC_RB0_size                         0x1
#define RXB0DLC_RB0_value_mask                   0x10
#define RXB0DLC_RB0_clear_mask                   0xEF

#define RXB0DLC_RESB1                            0x5
#define RXB0DLC_RESB1_address                    0xF65
#define RXB0DLC_RESB1_position                   0x5
#define RXB0DLC_RESB1_size                       0x1
#define RXB0DLC_RESB1_value_mask                 0x20
#define RXB0DLC_RESB1_clear_mask                 0xDF

#define RXB0RB1                                  0x5
#define RXB0RB1_address                          0xF65
#define RXB0RB1_position                         0x5
#define RXB0RB1_size                             0x1
#define RXB0RB1_value_mask                       0x20
#define RXB0RB1_clear_mask                       0xDF

#define RXB0DLC_RB1                              0x5
#define RXB0DLC_RB1_address                      0xF65
#define RXB0DLC_RB1_position                     0x5
#define RXB0DLC_RB1_size                         0x1
#define RXB0DLC_RB1_value_mask                   0x20
#define RXB0DLC_RB1_clear_mask                   0xDF

#define RXB0DLC_RXRTR                            0x6
#define RXB0DLC_RXRTR_address                    0xF65
#define RXB0DLC_RXRTR_position                   0x6
#define RXB0DLC_RXRTR_size                       0x1
#define RXB0DLC_RXRTR_value_mask                 0x40
#define RXB0DLC_RXRTR_clear_mask                 0xBF

#define RXB0RTR                                  0x6
#define RXB0RTR_address                          0xF65
#define RXB0RTR_position                         0x6
#define RXB0RTR_size                             0x1
#define RXB0RTR_value_mask                       0x40
#define RXB0RTR_clear_mask                       0xBF


/*----------------------------------------------------------------------#
| RXB0D0                                                          0xF66 |
#-----------------------------------------------------------------------#
| RB0D07 | RB0D06 | RB0D05 | RB0D04 | RB0D03 | RB0D02 | RB0D01 | RB0D00 |
#-----------------------------------------------------------------------#
| 7      | 6      | 5      | 4      | 3      | 2      | 1      | 0      |
#----------------------------------------------------------------------*/

#define RXB0D0                                   0x0
#define RXB0D0_address                           0xF66
#define RXB0D0_position                          0x0
#define RXB0D0_size                              0x8
#define RXB0D0_value_mask                        0xFF
#define RXB0D0_clear_mask                        0x0

#define RB0D00                                   0x0
#define RB0D00_address                           0xF66
#define RB0D00_position                          0x0
#define RB0D00_size                              0x1
#define RB0D00_value_mask                        0x1
#define RB0D00_clear_mask                        0xFE

#define RXB0D00                                  0x0
#define RXB0D00_address                          0xF66
#define RXB0D00_position                         0x0
#define RXB0D00_size                             0x1
#define RXB0D00_value_mask                       0x1
#define RXB0D00_clear_mask                       0xFE

#define RB0D01                                   0x1
#define RB0D01_address                           0xF66
#define RB0D01_position                          0x1
#define RB0D01_size                              0x1
#define RB0D01_value_mask                        0x2
#define RB0D01_clear_mask                        0xFD

#define RXB0D01                                  0x1
#define RXB0D01_address                          0xF66
#define RXB0D01_position                         0x1
#define RXB0D01_size                             0x1
#define RXB0D01_value_mask                       0x2
#define RXB0D01_clear_mask                       0xFD

#define RB0D02                                   0x2
#define RB0D02_address                           0xF66
#define RB0D02_position                          0x2
#define RB0D02_size                              0x1
#define RB0D02_value_mask                        0x4
#define RB0D02_clear_mask                        0xFB

#define RXB0D02                                  0x2
#define RXB0D02_address                          0xF66
#define RXB0D02_position                         0x2
#define RXB0D02_size                             0x1
#define RXB0D02_value_mask                       0x4
#define RXB0D02_clear_mask                       0xFB

#define RB0D03                                   0x3
#define RB0D03_address                           0xF66
#define RB0D03_position                          0x3
#define RB0D03_size                              0x1
#define RB0D03_value_mask                        0x8
#define RB0D03_clear_mask                        0xF7

#define RXB0D03                                  0x3
#define RXB0D03_address                          0xF66
#define RXB0D03_position                         0x3
#define RXB0D03_size                             0x1
#define RXB0D03_value_mask                       0x8
#define RXB0D03_clear_mask                       0xF7

#define RB0D04                                   0x4
#define RB0D04_address                           0xF66
#define RB0D04_position                          0x4
#define RB0D04_size                              0x1
#define RB0D04_value_mask                        0x10
#define RB0D04_clear_mask                        0xEF

#define RXB0D04                                  0x4
#define RXB0D04_address                          0xF66
#define RXB0D04_position                         0x4
#define RXB0D04_size                             0x1
#define RXB0D04_value_mask                       0x10
#define RXB0D04_clear_mask                       0xEF

#define RB0D05                                   0x5
#define RB0D05_address                           0xF66
#define RB0D05_position                          0x5
#define RB0D05_size                              0x1
#define RB0D05_value_mask                        0x20
#define RB0D05_clear_mask                        0xDF

#define RXB0D05                                  0x5
#define RXB0D05_address                          0xF66
#define RXB0D05_position                         0x5
#define RXB0D05_size                             0x1
#define RXB0D05_value_mask                       0x20
#define RXB0D05_clear_mask                       0xDF

#define RB0D06                                   0x6
#define RB0D06_address                           0xF66
#define RB0D06_position                          0x6
#define RB0D06_size                              0x1
#define RB0D06_value_mask                        0x40
#define RB0D06_clear_mask                        0xBF

#define RXB0D06                                  0x6
#define RXB0D06_address                          0xF66
#define RXB0D06_position                         0x6
#define RXB0D06_size                             0x1
#define RXB0D06_value_mask                       0x40
#define RXB0D06_clear_mask                       0xBF

#define RB0D07                                   0x7
#define RB0D07_address                           0xF66
#define RB0D07_position                          0x7
#define RB0D07_size                              0x1
#define RB0D07_value_mask                        0x80
#define RB0D07_clear_mask                        0x7F

#define RXB0D07                                  0x7
#define RXB0D07_address                          0xF66
#define RXB0D07_position                         0x7
#define RXB0D07_size                             0x1
#define RXB0D07_value_mask                       0x80
#define RXB0D07_clear_mask                       0x7F


/*----------------------------------------------------------------------#
| RXB0D1                                                          0xF67 |
#-----------------------------------------------------------------------#
| RB0D17 | RB0D16 | RB0D15 | RB0D14 | RB0D13 | RB0D12 | RB0D11 | RB0D10 |
#-----------------------------------------------------------------------#
| 7      | 6      | 5      | 4      | 3      | 2      | 1      | 0      |
#----------------------------------------------------------------------*/

#define RXB0D1                                   0x0
#define RXB0D1_address                           0xF67
#define RXB0D1_position                          0x0
#define RXB0D1_size                              0x8
#define RXB0D1_value_mask                        0xFF
#define RXB0D1_clear_mask                        0x0

#define RB0D10                                   0x0
#define RB0D10_address                           0xF67
#define RB0D10_position                          0x0
#define RB0D10_size                              0x1
#define RB0D10_value_mask                        0x1
#define RB0D10_clear_mask                        0xFE

#define RXB0D10                                  0x0
#define RXB0D10_address                          0xF67
#define RXB0D10_position                         0x0
#define RXB0D10_size                             0x1
#define RXB0D10_value_mask                       0x1
#define RXB0D10_clear_mask                       0xFE

#define RB0D11                                   0x1
#define RB0D11_address                           0xF67
#define RB0D11_position                          0x1
#define RB0D11_size                              0x1
#define RB0D11_value_mask                        0x2
#define RB0D11_clear_mask                        0xFD

#define RXB0D11                                  0x1
#define RXB0D11_address                          0xF67
#define RXB0D11_position                         0x1
#define RXB0D11_size                             0x1
#define RXB0D11_value_mask                       0x2
#define RXB0D11_clear_mask                       0xFD

#define RB0D12                                   0x2
#define RB0D12_address                           0xF67
#define RB0D12_position                          0x2
#define RB0D12_size                              0x1
#define RB0D12_value_mask                        0x4
#define RB0D12_clear_mask                        0xFB

#define RXB0D12                                  0x2
#define RXB0D12_address                          0xF67
#define RXB0D12_position                         0x2
#define RXB0D12_size                             0x1
#define RXB0D12_value_mask                       0x4
#define RXB0D12_clear_mask                       0xFB

#define RB0D13                                   0x3
#define RB0D13_address                           0xF67
#define RB0D13_position                          0x3
#define RB0D13_size                              0x1
#define RB0D13_value_mask                        0x8
#define RB0D13_clear_mask                        0xF7

#define RXB0D13                                  0x3
#define RXB0D13_address                          0xF67
#define RXB0D13_position                         0x3
#define RXB0D13_size                             0x1
#define RXB0D13_value_mask                       0x8
#define RXB0D13_clear_mask                       0xF7

#define RB0D14                                   0x4
#define RB0D14_address                           0xF67
#define RB0D14_position                          0x4
#define RB0D14_size                              0x1
#define RB0D14_value_mask                        0x10
#define RB0D14_clear_mask                        0xEF

#define RXB0D14                                  0x4
#define RXB0D14_address                          0xF67
#define RXB0D14_position                         0x4
#define RXB0D14_size                             0x1
#define RXB0D14_value_mask                       0x10
#define RXB0D14_clear_mask                       0xEF

#define RB0D15                                   0x5
#define RB0D15_address                           0xF67
#define RB0D15_position                          0x5
#define RB0D15_size                              0x1
#define RB0D15_value_mask                        0x20
#define RB0D15_clear_mask                        0xDF

#define RXB0D15                                  0x5
#define RXB0D15_address                          0xF67
#define RXB0D15_position                         0x5
#define RXB0D15_size                             0x1
#define RXB0D15_value_mask                       0x20
#define RXB0D15_clear_mask                       0xDF

#define RB0D16                                   0x6
#define RB0D16_address                           0xF67
#define RB0D16_position                          0x6
#define RB0D16_size                              0x1
#define RB0D16_value_mask                        0x40
#define RB0D16_clear_mask                        0xBF

#define RXB0D16                                  0x6
#define RXB0D16_address                          0xF67
#define RXB0D16_position                         0x6
#define RXB0D16_size                             0x1
#define RXB0D16_value_mask                       0x40
#define RXB0D16_clear_mask                       0xBF

#define RB0D17                                   0x7
#define RB0D17_address                           0xF67
#define RB0D17_position                          0x7
#define RB0D17_size                              0x1
#define RB0D17_value_mask                        0x80
#define RB0D17_clear_mask                        0x7F

#define RXB0D17                                  0x7
#define RXB0D17_address                          0xF67
#define RXB0D17_position                         0x7
#define RXB0D17_size                             0x1
#define RXB0D17_value_mask                       0x80
#define RXB0D17_clear_mask                       0x7F


/*------------------------------------------------------------------------------#
| RXB0D2                                                                  0xF68 |
#-------------------------------------------------------------------------------#
| RXB0D27 | RXB0D26 | RXB0D25 | RXB0D24 | RXB0D23 | RXB0D22 | RXB0D21 | RXB0D20 |
#-------------------------------------------------------------------------------#
| 7       | 6       | 5       | 4       | 3       | 2       | 1       | 0       |
#------------------------------------------------------------------------------*/

#define RXB0D2                                   0x0
#define RXB0D2_address                           0xF68
#define RXB0D2_position                          0x0
#define RXB0D2_size                              0x8
#define RXB0D2_value_mask                        0xFF
#define RXB0D2_clear_mask                        0x0

#define RXB0D20                                  0x0
#define RXB0D20_address                          0xF68
#define RXB0D20_position                         0x0
#define RXB0D20_size                             0x1
#define RXB0D20_value_mask                       0x1
#define RXB0D20_clear_mask                       0xFE

#define RB0D20                                   0x0
#define RB0D20_address                           0xF68
#define RB0D20_position                          0x0
#define RB0D20_size                              0x1
#define RB0D20_value_mask                        0x1
#define RB0D20_clear_mask                        0xFE

#define RXB0D21                                  0x1
#define RXB0D21_address                          0xF68
#define RXB0D21_position                         0x1
#define RXB0D21_size                             0x1
#define RXB0D21_value_mask                       0x2
#define RXB0D21_clear_mask                       0xFD

#define RB0D21                                   0x1
#define RB0D21_address                           0xF68
#define RB0D21_position                          0x1
#define RB0D21_size                              0x1
#define RB0D21_value_mask                        0x2
#define RB0D21_clear_mask                        0xFD

#define RXB0D22                                  0x2
#define RXB0D22_address                          0xF68
#define RXB0D22_position                         0x2
#define RXB0D22_size                             0x1
#define RXB0D22_value_mask                       0x4
#define RXB0D22_clear_mask                       0xFB

#define RB0D22                                   0x2
#define RB0D22_address                           0xF68
#define RB0D22_position                          0x2
#define RB0D22_size                              0x1
#define RB0D22_value_mask                        0x4
#define RB0D22_clear_mask                        0xFB

#define RXB0D23                                  0x3
#define RXB0D23_address                          0xF68
#define RXB0D23_position                         0x3
#define RXB0D23_size                             0x1
#define RXB0D23_value_mask                       0x8
#define RXB0D23_clear_mask                       0xF7

#define RB0D23                                   0x3
#define RB0D23_address                           0xF68
#define RB0D23_position                          0x3
#define RB0D23_size                              0x1
#define RB0D23_value_mask                        0x8
#define RB0D23_clear_mask                        0xF7

#define RXB0D24                                  0x4
#define RXB0D24_address                          0xF68
#define RXB0D24_position                         0x4
#define RXB0D24_size                             0x1
#define RXB0D24_value_mask                       0x10
#define RXB0D24_clear_mask                       0xEF

#define RB0D24                                   0x4
#define RB0D24_address                           0xF68
#define RB0D24_position                          0x4
#define RB0D24_size                              0x1
#define RB0D24_value_mask                        0x10
#define RB0D24_clear_mask                        0xEF

#define RXB0D25                                  0x5
#define RXB0D25_address                          0xF68
#define RXB0D25_position                         0x5
#define RXB0D25_size                             0x1
#define RXB0D25_value_mask                       0x20
#define RXB0D25_clear_mask                       0xDF

#define RB0D25                                   0x5
#define RB0D25_address                           0xF68
#define RB0D25_position                          0x5
#define RB0D25_size                              0x1
#define RB0D25_value_mask                        0x20
#define RB0D25_clear_mask                        0xDF

#define RXB0D26                                  0x6
#define RXB0D26_address                          0xF68
#define RXB0D26_position                         0x6
#define RXB0D26_size                             0x1
#define RXB0D26_value_mask                       0x40
#define RXB0D26_clear_mask                       0xBF

#define RB0D26                                   0x6
#define RB0D26_address                           0xF68
#define RB0D26_position                          0x6
#define RB0D26_size                              0x1
#define RB0D26_value_mask                        0x40
#define RB0D26_clear_mask                        0xBF

#define RXB0D27                                  0x7
#define RXB0D27_address                          0xF68
#define RXB0D27_position                         0x7
#define RXB0D27_size                             0x1
#define RXB0D27_value_mask                       0x80
#define RXB0D27_clear_mask                       0x7F

#define RB0D27                                   0x7
#define RB0D27_address                           0xF68
#define RB0D27_position                          0x7
#define RB0D27_size                              0x1
#define RB0D27_value_mask                        0x80
#define RB0D27_clear_mask                        0x7F


/*------------------------------------------------------------------------------#
| RXB0D3                                                                  0xF69 |
#-------------------------------------------------------------------------------#
| RXB0D37 | RXB0D36 | RXB0D35 | RXB0D34 | RXB0D33 | RXB0D32 | RXB0D31 | RXB0D30 |
#-------------------------------------------------------------------------------#
| 7       | 6       | 5       | 4       | 3       | 2       | 1       | 0       |
#------------------------------------------------------------------------------*/

#define RXB0D3                                   0x0
#define RXB0D3_address                           0xF69
#define RXB0D3_position                          0x0
#define RXB0D3_size                              0x8
#define RXB0D3_value_mask                        0xFF
#define RXB0D3_clear_mask                        0x0

#define RXB0D30                                  0x0
#define RXB0D30_address                          0xF69
#define RXB0D30_position                         0x0
#define RXB0D30_size                             0x1
#define RXB0D30_value_mask                       0x1
#define RXB0D30_clear_mask                       0xFE

#define RB0D30                                   0x0
#define RB0D30_address                           0xF69
#define RB0D30_position                          0x0
#define RB0D30_size                              0x1
#define RB0D30_value_mask                        0x1
#define RB0D30_clear_mask                        0xFE

#define RXB0D31                                  0x1
#define RXB0D31_address                          0xF69
#define RXB0D31_position                         0x1
#define RXB0D31_size                             0x1
#define RXB0D31_value_mask                       0x2
#define RXB0D31_clear_mask                       0xFD

#define RB0D31                                   0x1
#define RB0D31_address                           0xF69
#define RB0D31_position                          0x1
#define RB0D31_size                              0x1
#define RB0D31_value_mask                        0x2
#define RB0D31_clear_mask                        0xFD

#define RXB0D32                                  0x2
#define RXB0D32_address                          0xF69
#define RXB0D32_position                         0x2
#define RXB0D32_size                             0x1
#define RXB0D32_value_mask                       0x4
#define RXB0D32_clear_mask                       0xFB

#define RB0D32                                   0x2
#define RB0D32_address                           0xF69
#define RB0D32_position                          0x2
#define RB0D32_size                              0x1
#define RB0D32_value_mask                        0x4
#define RB0D32_clear_mask                        0xFB

#define RXB0D33                                  0x3
#define RXB0D33_address                          0xF69
#define RXB0D33_position                         0x3
#define RXB0D33_size                             0x1
#define RXB0D33_value_mask                       0x8
#define RXB0D33_clear_mask                       0xF7

#define RB0D33                                   0x3
#define RB0D33_address                           0xF69
#define RB0D33_position                          0x3
#define RB0D33_size                              0x1
#define RB0D33_value_mask                        0x8
#define RB0D33_clear_mask                        0xF7

#define RXB0D34                                  0x4
#define RXB0D34_address                          0xF69
#define RXB0D34_position                         0x4
#define RXB0D34_size                             0x1
#define RXB0D34_value_mask                       0x10
#define RXB0D34_clear_mask                       0xEF

#define RB0D34                                   0x4
#define RB0D34_address                           0xF69
#define RB0D34_position                          0x4
#define RB0D34_size                              0x1
#define RB0D34_value_mask                        0x10
#define RB0D34_clear_mask                        0xEF

#define RXB0D35                                  0x5
#define RXB0D35_address                          0xF69
#define RXB0D35_position                         0x5
#define RXB0D35_size                             0x1
#define RXB0D35_value_mask                       0x20
#define RXB0D35_clear_mask                       0xDF

#define RB0D35                                   0x5
#define RB0D35_address                           0xF69
#define RB0D35_position                          0x5
#define RB0D35_size                              0x1
#define RB0D35_value_mask                        0x20
#define RB0D35_clear_mask                        0xDF

#define RXB0D36                                  0x6
#define RXB0D36_address                          0xF69
#define RXB0D36_position                         0x6
#define RXB0D36_size                             0x1
#define RXB0D36_value_mask                       0x40
#define RXB0D36_clear_mask                       0xBF

#define RB0D36                                   0x6
#define RB0D36_address                           0xF69
#define RB0D36_position                          0x6
#define RB0D36_size                              0x1
#define RB0D36_value_mask                        0x40
#define RB0D36_clear_mask                        0xBF

#define RXB0D37                                  0x7
#define RXB0D37_address                          0xF69
#define RXB0D37_position                         0x7
#define RXB0D37_size                             0x1
#define RXB0D37_value_mask                       0x80
#define RXB0D37_clear_mask                       0x7F

#define RB0D37                                   0x7
#define RB0D37_address                           0xF69
#define RB0D37_position                          0x7
#define RB0D37_size                              0x1
#define RB0D37_value_mask                        0x80
#define RB0D37_clear_mask                        0x7F


/*----------------------------------------------------------------------#
| RXB0D4                                                          0xF6A |
#-----------------------------------------------------------------------#
| RB0D47 | RB0D46 | RB0D45 | RB0D44 | RB0D43 | RB0D42 | RB0D41 | RB0D40 |
#-----------------------------------------------------------------------#
| 7      | 6      | 5      | 4      | 3      | 2      | 1      | 0      |
#----------------------------------------------------------------------*/

#define RXB0D4                                   0x0
#define RXB0D4_address                           0xF6A
#define RXB0D4_position                          0x0
#define RXB0D4_size                              0x8
#define RXB0D4_value_mask                        0xFF
#define RXB0D4_clear_mask                        0x0

#define RB0D40                                   0x0
#define RB0D40_address                           0xF6A
#define RB0D40_position                          0x0
#define RB0D40_size                              0x1
#define RB0D40_value_mask                        0x1
#define RB0D40_clear_mask                        0xFE

#define RXB0D40                                  0x0
#define RXB0D40_address                          0xF6A
#define RXB0D40_position                         0x0
#define RXB0D40_size                             0x1
#define RXB0D40_value_mask                       0x1
#define RXB0D40_clear_mask                       0xFE

#define RB0D41                                   0x1
#define RB0D41_address                           0xF6A
#define RB0D41_position                          0x1
#define RB0D41_size                              0x1
#define RB0D41_value_mask                        0x2
#define RB0D41_clear_mask                        0xFD

#define RXB0D41                                  0x1
#define RXB0D41_address                          0xF6A
#define RXB0D41_position                         0x1
#define RXB0D41_size                             0x1
#define RXB0D41_value_mask                       0x2
#define RXB0D41_clear_mask                       0xFD

#define RB0D42                                   0x2
#define RB0D42_address                           0xF6A
#define RB0D42_position                          0x2
#define RB0D42_size                              0x1
#define RB0D42_value_mask                        0x4
#define RB0D42_clear_mask                        0xFB

#define RXB0D42                                  0x2
#define RXB0D42_address                          0xF6A
#define RXB0D42_position                         0x2
#define RXB0D42_size                             0x1
#define RXB0D42_value_mask                       0x4
#define RXB0D42_clear_mask                       0xFB

#define RB0D43                                   0x3
#define RB0D43_address                           0xF6A
#define RB0D43_position                          0x3
#define RB0D43_size                              0x1
#define RB0D43_value_mask                        0x8
#define RB0D43_clear_mask                        0xF7

#define RXB0D43                                  0x3
#define RXB0D43_address                          0xF6A
#define RXB0D43_position                         0x3
#define RXB0D43_size                             0x1
#define RXB0D43_value_mask                       0x8
#define RXB0D43_clear_mask                       0xF7

#define RB0D44                                   0x4
#define RB0D44_address                           0xF6A
#define RB0D44_position                          0x4
#define RB0D44_size                              0x1
#define RB0D44_value_mask                        0x10
#define RB0D44_clear_mask                        0xEF

#define RXB0D44                                  0x4
#define RXB0D44_address                          0xF6A
#define RXB0D44_position                         0x4
#define RXB0D44_size                             0x1
#define RXB0D44_value_mask                       0x10
#define RXB0D44_clear_mask                       0xEF

#define RB0D45                                   0x5
#define RB0D45_address                           0xF6A
#define RB0D45_position                          0x5
#define RB0D45_size                              0x1
#define RB0D45_value_mask                        0x20
#define RB0D45_clear_mask                        0xDF

#define RXB0D45                                  0x5
#define RXB0D45_address                          0xF6A
#define RXB0D45_position                         0x5
#define RXB0D45_size                             0x1
#define RXB0D45_value_mask                       0x20
#define RXB0D45_clear_mask                       0xDF

#define RB0D46                                   0x6
#define RB0D46_address                           0xF6A
#define RB0D46_position                          0x6
#define RB0D46_size                              0x1
#define RB0D46_value_mask                        0x40
#define RB0D46_clear_mask                        0xBF

#define RXB0D46                                  0x6
#define RXB0D46_address                          0xF6A
#define RXB0D46_position                         0x6
#define RXB0D46_size                             0x1
#define RXB0D46_value_mask                       0x40
#define RXB0D46_clear_mask                       0xBF

#define RB0D47                                   0x7
#define RB0D47_address                           0xF6A
#define RB0D47_position                          0x7
#define RB0D47_size                              0x1
#define RB0D47_value_mask                        0x80
#define RB0D47_clear_mask                        0x7F

#define RXB0D47                                  0x7
#define RXB0D47_address                          0xF6A
#define RXB0D47_position                         0x7
#define RXB0D47_size                             0x1
#define RXB0D47_value_mask                       0x80
#define RXB0D47_clear_mask                       0x7F


/*----------------------------------------------------------------------#
| RXB0D5                                                          0xF6B |
#-----------------------------------------------------------------------#
| RB0D57 | RB0D56 | RB0D55 | RB0D54 | RB0D53 | RB0D52 | RB0D51 | RB0D50 |
#-----------------------------------------------------------------------#
| 7      | 6      | 5      | 4      | 3      | 2      | 1      | 0      |
#----------------------------------------------------------------------*/

#define RXB0D5                                   0x0
#define RXB0D5_address                           0xF6B
#define RXB0D5_position                          0x0
#define RXB0D5_size                              0x8
#define RXB0D5_value_mask                        0xFF
#define RXB0D5_clear_mask                        0x0

#define RB0D50                                   0x0
#define RB0D50_address                           0xF6B
#define RB0D50_position                          0x0
#define RB0D50_size                              0x1
#define RB0D50_value_mask                        0x1
#define RB0D50_clear_mask                        0xFE

#define RXB0D50                                  0x0
#define RXB0D50_address                          0xF6B
#define RXB0D50_position                         0x0
#define RXB0D50_size                             0x1
#define RXB0D50_value_mask                       0x1
#define RXB0D50_clear_mask                       0xFE

#define RB0D51                                   0x1
#define RB0D51_address                           0xF6B
#define RB0D51_position                          0x1
#define RB0D51_size                              0x1
#define RB0D51_value_mask                        0x2
#define RB0D51_clear_mask                        0xFD

#define RXB0D51                                  0x1
#define RXB0D51_address                          0xF6B
#define RXB0D51_position                         0x1
#define RXB0D51_size                             0x1
#define RXB0D51_value_mask                       0x2
#define RXB0D51_clear_mask                       0xFD

#define RB0D52                                   0x2
#define RB0D52_address                           0xF6B
#define RB0D52_position                          0x2
#define RB0D52_size                              0x1
#define RB0D52_value_mask                        0x4
#define RB0D52_clear_mask                        0xFB

#define RXB0D52                                  0x2
#define RXB0D52_address                          0xF6B
#define RXB0D52_position                         0x2
#define RXB0D52_size                             0x1
#define RXB0D52_value_mask                       0x4
#define RXB0D52_clear_mask                       0xFB

#define RB0D53                                   0x3
#define RB0D53_address                           0xF6B
#define RB0D53_position                          0x3
#define RB0D53_size                              0x1
#define RB0D53_value_mask                        0x8
#define RB0D53_clear_mask                        0xF7

#define RXB0D53                                  0x3
#define RXB0D53_address                          0xF6B
#define RXB0D53_position                         0x3
#define RXB0D53_size                             0x1
#define RXB0D53_value_mask                       0x8
#define RXB0D53_clear_mask                       0xF7

#define RB0D54                                   0x4
#define RB0D54_address                           0xF6B
#define RB0D54_position                          0x4
#define RB0D54_size                              0x1
#define RB0D54_value_mask                        0x10
#define RB0D54_clear_mask                        0xEF

#define RXB0D54                                  0x4
#define RXB0D54_address                          0xF6B
#define RXB0D54_position                         0x4
#define RXB0D54_size                             0x1
#define RXB0D54_value_mask                       0x10
#define RXB0D54_clear_mask                       0xEF

#define RB0D55                                   0x5
#define RB0D55_address                           0xF6B
#define RB0D55_position                          0x5
#define RB0D55_size                              0x1
#define RB0D55_value_mask                        0x20
#define RB0D55_clear_mask                        0xDF

#define RXB0D55                                  0x5
#define RXB0D55_address                          0xF6B
#define RXB0D55_position                         0x5
#define RXB0D55_size                             0x1
#define RXB0D55_value_mask                       0x20
#define RXB0D55_clear_mask                       0xDF

#define RB0D56                                   0x6
#define RB0D56_address                           0xF6B
#define RB0D56_position                          0x6
#define RB0D56_size                              0x1
#define RB0D56_value_mask                        0x40
#define RB0D56_clear_mask                        0xBF

#define RXB0D56                                  0x6
#define RXB0D56_address                          0xF6B
#define RXB0D56_position                         0x6
#define RXB0D56_size                             0x1
#define RXB0D56_value_mask                       0x40
#define RXB0D56_clear_mask                       0xBF

#define RB0D57                                   0x7
#define RB0D57_address                           0xF6B
#define RB0D57_position                          0x7
#define RB0D57_size                              0x1
#define RB0D57_value_mask                        0x80
#define RB0D57_clear_mask                        0x7F

#define RXB0D57                                  0x7
#define RXB0D57_address                          0xF6B
#define RXB0D57_position                         0x7
#define RXB0D57_size                             0x1
#define RXB0D57_value_mask                       0x80
#define RXB0D57_clear_mask                       0x7F


/*----------------------------------------------------------------------------#
| RXB0D6                                                                0xF6C |
#-----------------------------------------------------------------------------#
| RXB0D67 | RXB0D66 | RB0D65 | RB0D64 | RXB0D63 | RXB0D62 | RXB0D61 | RXB0D60 |
#-----------------------------------------------------------------------------#
| 7       | 6       | 5      | 4      | 3       | 2       | 1       | 0       |
#----------------------------------------------------------------------------*/

#define RXB0D6                                   0x0
#define RXB0D6_address                           0xF6C
#define RXB0D6_position                          0x0
#define RXB0D6_size                              0x8
#define RXB0D6_value_mask                        0xFF
#define RXB0D6_clear_mask                        0x0

#define RXB0D60                                  0x0
#define RXB0D60_address                          0xF6C
#define RXB0D60_position                         0x0
#define RXB0D60_size                             0x1
#define RXB0D60_value_mask                       0x1
#define RXB0D60_clear_mask                       0xFE

#define RB0D60                                   0x0
#define RB0D60_address                           0xF6C
#define RB0D60_position                          0x0
#define RB0D60_size                              0x1
#define RB0D60_value_mask                        0x1
#define RB0D60_clear_mask                        0xFE

#define RXB0D61                                  0x1
#define RXB0D61_address                          0xF6C
#define RXB0D61_position                         0x1
#define RXB0D61_size                             0x1
#define RXB0D61_value_mask                       0x2
#define RXB0D61_clear_mask                       0xFD

#define RB0D61                                   0x1
#define RB0D61_address                           0xF6C
#define RB0D61_position                          0x1
#define RB0D61_size                              0x1
#define RB0D61_value_mask                        0x2
#define RB0D61_clear_mask                        0xFD

#define RB0D62                                   0x2
#define RB0D62_address                           0xF6C
#define RB0D62_position                          0x2
#define RB0D62_size                              0x1
#define RB0D62_value_mask                        0x4
#define RB0D62_clear_mask                        0xFB

#define RXB0D62                                  0x2
#define RXB0D62_address                          0xF6C
#define RXB0D62_position                         0x2
#define RXB0D62_size                             0x1
#define RXB0D62_value_mask                       0x4
#define RXB0D62_clear_mask                       0xFB

#define RB0D63                                   0x3
#define RB0D63_address                           0xF6C
#define RB0D63_position                          0x3
#define RB0D63_size                              0x1
#define RB0D63_value_mask                        0x8
#define RB0D63_clear_mask                        0xF7

#define RXB0D63                                  0x3
#define RXB0D63_address                          0xF6C
#define RXB0D63_position                         0x3
#define RXB0D63_size                             0x1
#define RXB0D63_value_mask                       0x8
#define RXB0D63_clear_mask                       0xF7

#define RB0D64                                   0x4
#define RB0D64_address                           0xF6C
#define RB0D64_position                          0x4
#define RB0D64_size                              0x1
#define RB0D64_value_mask                        0x10
#define RB0D64_clear_mask                        0xEF

#define RXB0D64                                  0x4
#define RXB0D64_address                          0xF6C
#define RXB0D64_position                         0x4
#define RXB0D64_size                             0x1
#define RXB0D64_value_mask                       0x10
#define RXB0D64_clear_mask                       0xEF

#define RB0D65                                   0x5
#define RB0D65_address                           0xF6C
#define RB0D65_position                          0x5
#define RB0D65_size                              0x1
#define RB0D65_value_mask                        0x20
#define RB0D65_clear_mask                        0xDF

#define RXB0D65                                  0x5
#define RXB0D65_address                          0xF6C
#define RXB0D65_position                         0x5
#define RXB0D65_size                             0x1
#define RXB0D65_value_mask                       0x20
#define RXB0D65_clear_mask                       0xDF

#define RB0D66                                   0x6
#define RB0D66_address                           0xF6C
#define RB0D66_position                          0x6
#define RB0D66_size                              0x1
#define RB0D66_value_mask                        0x40
#define RB0D66_clear_mask                        0xBF

#define RXB0D66                                  0x6
#define RXB0D66_address                          0xF6C
#define RXB0D66_position                         0x6
#define RXB0D66_size                             0x1
#define RXB0D66_value_mask                       0x40
#define RXB0D66_clear_mask                       0xBF

#define RXB0D67                                  0x7
#define RXB0D67_address                          0xF6C
#define RXB0D67_position                         0x7
#define RXB0D67_size                             0x1
#define RXB0D67_value_mask                       0x80
#define RXB0D67_clear_mask                       0x7F

#define RB0D67                                   0x7
#define RB0D67_address                           0xF6C
#define RB0D67_position                          0x7
#define RB0D67_size                              0x1
#define RB0D67_value_mask                        0x80
#define RB0D67_clear_mask                        0x7F


/*----------------------------------------------------------------------#
| RXB0D7                                                          0xF6D |
#-----------------------------------------------------------------------#
| RB0D77 | RB0D76 | RB0D75 | RB0D74 | RB0D73 | RB0D72 | RB0D71 | RB0D70 |
#-----------------------------------------------------------------------#
| 7      | 6      | 5      | 4      | 3      | 2      | 1      | 0      |
#----------------------------------------------------------------------*/

#define RXB0D7                                   0x0
#define RXB0D7_address                           0xF6D
#define RXB0D7_position                          0x0
#define RXB0D7_size                              0x8
#define RXB0D7_value_mask                        0xFF
#define RXB0D7_clear_mask                        0x0

#define RB0D70                                   0x0
#define RB0D70_address                           0xF6D
#define RB0D70_position                          0x0
#define RB0D70_size                              0x1
#define RB0D70_value_mask                        0x1
#define RB0D70_clear_mask                        0xFE

#define RXB0D70                                  0x0
#define RXB0D70_address                          0xF6D
#define RXB0D70_position                         0x0
#define RXB0D70_size                             0x1
#define RXB0D70_value_mask                       0x1
#define RXB0D70_clear_mask                       0xFE

#define RB0D71                                   0x1
#define RB0D71_address                           0xF6D
#define RB0D71_position                          0x1
#define RB0D71_size                              0x1
#define RB0D71_value_mask                        0x2
#define RB0D71_clear_mask                        0xFD

#define RXB0D71                                  0x1
#define RXB0D71_address                          0xF6D
#define RXB0D71_position                         0x1
#define RXB0D71_size                             0x1
#define RXB0D71_value_mask                       0x2
#define RXB0D71_clear_mask                       0xFD

#define RB0D72                                   0x2
#define RB0D72_address                           0xF6D
#define RB0D72_position                          0x2
#define RB0D72_size                              0x1
#define RB0D72_value_mask                        0x4
#define RB0D72_clear_mask                        0xFB

#define RXB0D72                                  0x2
#define RXB0D72_address                          0xF6D
#define RXB0D72_position                         0x2
#define RXB0D72_size                             0x1
#define RXB0D72_value_mask                       0x4
#define RXB0D72_clear_mask                       0xFB

#define RB0D73                                   0x3
#define RB0D73_address                           0xF6D
#define RB0D73_position                          0x3
#define RB0D73_size                              0x1
#define RB0D73_value_mask                        0x8
#define RB0D73_clear_mask                        0xF7

#define RXB0D73                                  0x3
#define RXB0D73_address                          0xF6D
#define RXB0D73_position                         0x3
#define RXB0D73_size                             0x1
#define RXB0D73_value_mask                       0x8
#define RXB0D73_clear_mask                       0xF7

#define RB0D74                                   0x4
#define RB0D74_address                           0xF6D
#define RB0D74_position                          0x4
#define RB0D74_size                              0x1
#define RB0D74_value_mask                        0x10
#define RB0D74_clear_mask                        0xEF

#define RXB0D74                                  0x4
#define RXB0D74_address                          0xF6D
#define RXB0D74_position                         0x4
#define RXB0D74_size                             0x1
#define RXB0D74_value_mask                       0x10
#define RXB0D74_clear_mask                       0xEF

#define RB0D75                                   0x5
#define RB0D75_address                           0xF6D
#define RB0D75_position                          0x5
#define RB0D75_size                              0x1
#define RB0D75_value_mask                        0x20
#define RB0D75_clear_mask                        0xDF

#define RXB0D75                                  0x5
#define RXB0D75_address                          0xF6D
#define RXB0D75_position                         0x5
#define RXB0D75_size                             0x1
#define RXB0D75_value_mask                       0x20
#define RXB0D75_clear_mask                       0xDF

#define RB0D76                                   0x6
#define RB0D76_address                           0xF6D
#define RB0D76_position                          0x6
#define RB0D76_size                              0x1
#define RB0D76_value_mask                        0x40
#define RB0D76_clear_mask                        0xBF

#define RXB0D76                                  0x6
#define RXB0D76_address                          0xF6D
#define RXB0D76_position                         0x6
#define RXB0D76_size                             0x1
#define RXB0D76_value_mask                       0x40
#define RXB0D76_clear_mask                       0xBF

#define RB0D77                                   0x7
#define RB0D77_address                           0xF6D
#define RB0D77_position                          0x7
#define RB0D77_size                              0x1
#define RB0D77_value_mask                        0x80
#define RB0D77_clear_mask                        0x7F

#define RXB0D77                                  0x7
#define RXB0D77_address                          0xF6D
#define RXB0D77_position                         0x7
#define RXB0D77_size                             0x1
#define RXB0D77_value_mask                       0x80
#define RXB0D77_clear_mask                       0x7F


/*------------------------------------------------------------------------------------------#
| CANSTAT                                                                             0xF6E |
#-------------------------------------------------------------------------------------------#
| CANSTAT_OPMODE2 | CANSTAT_OPMODE1 | CANSTAT_OPMODE0 | - | EICODE3 | EICODE2 | EICODE1 | - |
#-------------------------------------------------------------------------------------------#
| 7               | 6               | 5               | 4 | 3       | 2       | 1       | 0 |
#------------------------------------------------------------------------------------------*/

#define CANSTAT                                  0x0
#define CANSTAT_address                          0xF6E
#define CANSTAT_position                         0x0
#define CANSTAT_size                             0x8
#define CANSTAT_value_mask                       0xFF
#define CANSTAT_clear_mask                       0x0

#define EICODE1                                  0x1
#define EICODE1_address                          0xF6E
#define EICODE1_position                         0x1
#define EICODE1_size                             0x1
#define EICODE1_value_mask                       0x2
#define EICODE1_clear_mask                       0xFD

#define CANSTAT_ICODE0                           0x1
#define CANSTAT_ICODE0_address                   0xF6E
#define CANSTAT_ICODE0_position                  0x1
#define CANSTAT_ICODE0_size                      0x1
#define CANSTAT_ICODE0_value_mask                0x2
#define CANSTAT_ICODE0_clear_mask                0xFD

#define EICODE2                                  0x2
#define EICODE2_address                          0xF6E
#define EICODE2_position                         0x2
#define EICODE2_size                             0x1
#define EICODE2_value_mask                       0x4
#define EICODE2_clear_mask                       0xFB

#define CANSTAT_ICODE1                           0x2
#define CANSTAT_ICODE1_address                   0xF6E
#define CANSTAT_ICODE1_position                  0x2
#define CANSTAT_ICODE1_size                      0x1
#define CANSTAT_ICODE1_value_mask                0x4
#define CANSTAT_ICODE1_clear_mask                0xFB

#define EICODE3                                  0x3
#define EICODE3_address                          0xF6E
#define EICODE3_position                         0x3
#define EICODE3_size                             0x1
#define EICODE3_value_mask                       0x8
#define EICODE3_clear_mask                       0xF7

#define CANSTAT_ICODE2                           0x3
#define CANSTAT_ICODE2_address                   0xF6E
#define CANSTAT_ICODE2_position                  0x3
#define CANSTAT_ICODE2_size                      0x1
#define CANSTAT_ICODE2_value_mask                0x8
#define CANSTAT_ICODE2_clear_mask                0xF7

#define CANSTAT_OPMODE0                          0x5
#define CANSTAT_OPMODE0_address                  0xF6E
#define CANSTAT_OPMODE0_position                 0x5
#define CANSTAT_OPMODE0_size                     0x1
#define CANSTAT_OPMODE0_value_mask               0x20
#define CANSTAT_OPMODE0_clear_mask               0xDF

#define CANSTAT_OPMODE1                          0x6
#define CANSTAT_OPMODE1_address                  0xF6E
#define CANSTAT_OPMODE1_position                 0x6
#define CANSTAT_OPMODE1_size                     0x1
#define CANSTAT_OPMODE1_value_mask               0x40
#define CANSTAT_OPMODE1_clear_mask               0xBF

#define CANSTAT_OPMODE2                          0x7
#define CANSTAT_OPMODE2_address                  0xF6E
#define CANSTAT_OPMODE2_position                 0x7
#define CANSTAT_OPMODE2_size                     0x1
#define CANSTAT_OPMODE2_value_mask               0x80
#define CANSTAT_OPMODE2_clear_mask               0x7F


/*---------------------------------------------------------#
| CANCON                                             0xF6F |
#----------------------------------------------------------#
| REQOP2 | REQOP1 | REQOP0 | ABAT | WIN2 | WIN1 | WIN0 | - |
#----------------------------------------------------------#
| 7      | 6      | 5      | 4    | 3    | 2    | 1    | 0 |
#---------------------------------------------------------*/

#define CANCON                                   0x0
#define CANCON_address                           0xF6F
#define CANCON_position                          0x0
#define CANCON_size                              0x8
#define CANCON_value_mask                        0xFF
#define CANCON_clear_mask                        0x0

#define WIN0                                     0x1
#define WIN0_address                             0xF6F
#define WIN0_position                            0x1
#define WIN0_size                                0x1
#define WIN0_value_mask                          0x2
#define WIN0_clear_mask                          0xFD

#define FP1                                      0x1
#define FP1_address                              0xF6F
#define FP1_position                             0x1
#define FP1_size                                 0x1
#define FP1_value_mask                           0x2
#define FP1_clear_mask                           0xFD

#define WIN1                                     0x2
#define WIN1_address                             0xF6F
#define WIN1_position                            0x2
#define WIN1_size                                0x1
#define WIN1_value_mask                          0x4
#define WIN1_clear_mask                          0xFB

#define FP2                                      0x2
#define FP2_address                              0xF6F
#define FP2_position                             0x2
#define FP2_size                                 0x1
#define FP2_value_mask                           0x4
#define FP2_clear_mask                           0xFB

#define FP3                                      0x3
#define FP3_address                              0xF6F
#define FP3_position                             0x3
#define FP3_size                                 0x1
#define FP3_value_mask                           0x8
#define FP3_clear_mask                           0xF7

#define WIN2                                     0x3
#define WIN2_address                             0xF6F
#define WIN2_position                            0x3
#define WIN2_size                                0x1
#define WIN2_value_mask                          0x8
#define WIN2_clear_mask                          0xF7

#define ABAT                                     0x4
#define ABAT_address                             0xF6F
#define ABAT_position                            0x4
#define ABAT_size                                0x1
#define ABAT_value_mask                          0x10
#define ABAT_clear_mask                          0xEF

#define REQOP0                                   0x5
#define REQOP0_address                           0xF6F
#define REQOP0_position                          0x5
#define REQOP0_size                              0x1
#define REQOP0_value_mask                        0x20
#define REQOP0_clear_mask                        0xDF

#define REQOP1                                   0x6
#define REQOP1_address                           0xF6F
#define REQOP1_position                          0x6
#define REQOP1_size                              0x1
#define REQOP1_value_mask                        0x40
#define REQOP1_clear_mask                        0xBF

#define REQOP2                                   0x7
#define REQOP2_address                           0xF6F
#define REQOP2_position                          0x7
#define REQOP2_size                              0x1
#define REQOP2_value_mask                        0x80
#define REQOP2_clear_mask                        0x7F


/*------------------------------------------------------#
| BRGCON1                                         0xF70 |
#-------------------------------------------------------#
| SJW1 | SJW0 | BRP5 | BRP4 | BRP3 | BRP2 | BRP1 | BRP0 |
#-------------------------------------------------------#
| 7    | 6    | 5    | 4    | 3    | 2    | 1    | 0    |
#------------------------------------------------------*/

#define BRGCON1                                  0x0
#define BRGCON1_address                          0xF70
#define BRGCON1_position                         0x0
#define BRGCON1_size                             0x8
#define BRGCON1_value_mask                       0xFF
#define BRGCON1_clear_mask                       0x0

#define BRP0                                     0x0
#define BRP0_address                             0xF70
#define BRP0_position                            0x0
#define BRP0_size                                0x1
#define BRP0_value_mask                          0x1
#define BRP0_clear_mask                          0xFE

#define BRP1                                     0x1
#define BRP1_address                             0xF70
#define BRP1_position                            0x1
#define BRP1_size                                0x1
#define BRP1_value_mask                          0x2
#define BRP1_clear_mask                          0xFD

#define BRP2                                     0x2
#define BRP2_address                             0xF70
#define BRP2_position                            0x2
#define BRP2_size                                0x1
#define BRP2_value_mask                          0x4
#define BRP2_clear_mask                          0xFB

#define BRP3                                     0x3
#define BRP3_address                             0xF70
#define BRP3_position                            0x3
#define BRP3_size                                0x1
#define BRP3_value_mask                          0x8
#define BRP3_clear_mask                          0xF7

#define BRP4                                     0x4
#define BRP4_address                             0xF70
#define BRP4_position                            0x4
#define BRP4_size                                0x1
#define BRP4_value_mask                          0x10
#define BRP4_clear_mask                          0xEF

#define BRP5                                     0x5
#define BRP5_address                             0xF70
#define BRP5_position                            0x5
#define BRP5_size                                0x1
#define BRP5_value_mask                          0x20
#define BRP5_clear_mask                          0xDF

#define SJW0                                     0x6
#define SJW0_address                             0xF70
#define SJW0_position                            0x6
#define SJW0_size                                0x1
#define SJW0_value_mask                          0x40
#define SJW0_clear_mask                          0xBF

#define SJW1                                     0x7
#define SJW1_address                             0xF70
#define SJW1_position                            0x7
#define SJW1_size                                0x1
#define SJW1_value_mask                          0x80
#define SJW1_clear_mask                          0x7F


/*-----------------------------------------------------------------------#
| BRGCON2                                                          0xF71 |
#------------------------------------------------------------------------#
| SEG2PHT | SAM | SEG1PH2 | SEG1PH1 | SEG1PH0 | PRSEG2 | PRSEG1 | PRSEG0 |
#------------------------------------------------------------------------#
| 7       | 6   | 5       | 4       | 3       | 2      | 1      | 0      |
#-----------------------------------------------------------------------*/

#define BRGCON2                                  0x0
#define BRGCON2_address                          0xF71
#define BRGCON2_position                         0x0
#define BRGCON2_size                             0x8
#define BRGCON2_value_mask                       0xFF
#define BRGCON2_clear_mask                       0x0

#define PRSEG0                                   0x0
#define PRSEG0_address                           0xF71
#define PRSEG0_position                          0x0
#define PRSEG0_size                              0x1
#define PRSEG0_value_mask                        0x1
#define PRSEG0_clear_mask                        0xFE

#define PRSEG1                                   0x1
#define PRSEG1_address                           0xF71
#define PRSEG1_position                          0x1
#define PRSEG1_size                              0x1
#define PRSEG1_value_mask                        0x2
#define PRSEG1_clear_mask                        0xFD

#define PRSEG2                                   0x2
#define PRSEG2_address                           0xF71
#define PRSEG2_position                          0x2
#define PRSEG2_size                              0x1
#define PRSEG2_value_mask                        0x4
#define PRSEG2_clear_mask                        0xFB

#define SEG1PH0                                  0x3
#define SEG1PH0_address                          0xF71
#define SEG1PH0_position                         0x3
#define SEG1PH0_size                             0x1
#define SEG1PH0_value_mask                       0x8
#define SEG1PH0_clear_mask                       0xF7

#define SEG1PH1                                  0x4
#define SEG1PH1_address                          0xF71
#define SEG1PH1_position                         0x4
#define SEG1PH1_size                             0x1
#define SEG1PH1_value_mask                       0x10
#define SEG1PH1_clear_mask                       0xEF

#define SEG1PH2                                  0x5
#define SEG1PH2_address                          0xF71
#define SEG1PH2_position                         0x5
#define SEG1PH2_size                             0x1
#define SEG1PH2_value_mask                       0x20
#define SEG1PH2_clear_mask                       0xDF

#define SAM                                      0x6
#define SAM_address                              0xF71
#define SAM_position                             0x6
#define SAM_size                                 0x1
#define SAM_value_mask                           0x40
#define SAM_clear_mask                           0xBF

#define SEG2PHT                                  0x7
#define SEG2PHT_address                          0xF71
#define SEG2PHT_position                         0x7
#define SEG2PHT_size                             0x1
#define SEG2PHT_value_mask                       0x80
#define SEG2PHT_clear_mask                       0x7F

#define SEG2PHTS                                 0x7
#define SEG2PHTS_address                         0xF71
#define SEG2PHTS_position                        0x7
#define SEG2PHTS_size                            0x1
#define SEG2PHTS_value_mask                      0x80
#define SEG2PHTS_clear_mask                      0x7F


/*-----------------------------------------------------#
| BRGCON3                                        0xF72 |
#------------------------------------------------------#
| - | WAKFIL | - | - | - | SEG2PH2 | SEG2PH1 | SEG2PH0 |
#------------------------------------------------------#
| 7 | 6      | 5 | 4 | 3 | 2       | 1       | 0       |
#-----------------------------------------------------*/

#define BRGCON3                                  0x0
#define BRGCON3_address                          0xF72
#define BRGCON3_position                         0x0
#define BRGCON3_size                             0x8
#define BRGCON3_value_mask                       0xFF
#define BRGCON3_clear_mask                       0x0

#define SEG2PH0                                  0x0
#define SEG2PH0_address                          0xF72
#define SEG2PH0_position                         0x0
#define SEG2PH0_size                             0x1
#define SEG2PH0_value_mask                       0x1
#define SEG2PH0_clear_mask                       0xFE

#define SEG2PH1                                  0x1
#define SEG2PH1_address                          0xF72
#define SEG2PH1_position                         0x1
#define SEG2PH1_size                             0x1
#define SEG2PH1_value_mask                       0x2
#define SEG2PH1_clear_mask                       0xFD

#define SEG2PH2                                  0x2
#define SEG2PH2_address                          0xF72
#define SEG2PH2_position                         0x2
#define SEG2PH2_size                             0x1
#define SEG2PH2_value_mask                       0x4
#define SEG2PH2_clear_mask                       0xFB

#define WAKFIL                                   0x6
#define WAKFIL_address                           0xF72
#define WAKFIL_position                          0x6
#define WAKFIL_size                              0x1
#define WAKFIL_value_mask                        0x40
#define WAKFIL_clear_mask                        0xBF


/*----------------------------------------#
| CIOCON                            0xF73 |
#-----------------------------------------#
| - | - | ENDRHI | CANCAP | - | - | - | - |
#-----------------------------------------#
| 7 | 6 | 5      | 4      | 3 | 2 | 1 | 0 |
#----------------------------------------*/

#define CIOCON                                   0x0
#define CIOCON_address                           0xF73
#define CIOCON_position                          0x0
#define CIOCON_size                              0x8
#define CIOCON_value_mask                        0xFF
#define CIOCON_clear_mask                        0x0

#define CANCAP                                   0x4
#define CANCAP_address                           0xF73
#define CANCAP_position                          0x4
#define CANCAP_size                              0x1
#define CANCAP_value_mask                        0x10
#define CANCAP_clear_mask                        0xEF

#define ENDRHI                                   0x5
#define ENDRHI_address                           0xF73
#define ENDRHI_position                          0x5
#define ENDRHI_size                              0x1
#define ENDRHI_value_mask                        0x20
#define ENDRHI_clear_mask                        0xDF


/*-----------------------------------------------------------------#
| COMSTAT                                                    0xF74 |
#------------------------------------------------------------------#
| RX1OVFL | RX2OVFL | TXBO | TXBP | RXBP | TXWARN | RXWARN | EWARN |
#------------------------------------------------------------------#
| 7       | 6       | 5    | 4    | 3    | 2      | 1      | 0     |
#-----------------------------------------------------------------*/

#define COMSTAT                                  0x0
#define COMSTAT_address                          0xF74
#define COMSTAT_position                         0x0
#define COMSTAT_size                             0x8
#define COMSTAT_value_mask                       0xFF
#define COMSTAT_clear_mask                       0x0

#define EWARN                                    0x0
#define EWARN_address                            0xF74
#define EWARN_position                           0x0
#define EWARN_size                               0x1
#define EWARN_value_mask                         0x1
#define EWARN_clear_mask                         0xFE

#define RXWARN                                   0x1
#define RXWARN_address                           0xF74
#define RXWARN_position                          0x1
#define RXWARN_size                              0x1
#define RXWARN_value_mask                        0x2
#define RXWARN_clear_mask                        0xFD

#define TXWARN                                   0x2
#define TXWARN_address                           0xF74
#define TXWARN_position                          0x2
#define TXWARN_size                              0x1
#define TXWARN_value_mask                        0x4
#define TXWARN_clear_mask                        0xFB

#define RXBP                                     0x3
#define RXBP_address                             0xF74
#define RXBP_position                            0x3
#define RXBP_size                                0x1
#define RXBP_value_mask                          0x8
#define RXBP_clear_mask                          0xF7

#define TXBP                                     0x4
#define TXBP_address                             0xF74
#define TXBP_position                            0x4
#define TXBP_size                                0x1
#define TXBP_value_mask                          0x10
#define TXBP_clear_mask                          0xEF

#define TXBO                                     0x5
#define TXBO_address                             0xF74
#define TXBO_position                            0x5
#define TXBO_size                                0x1
#define TXBO_value_mask                          0x20
#define TXBO_clear_mask                          0xDF

#define RX2OVFL                                  0x6
#define RX2OVFL_address                          0xF74
#define RX2OVFL_position                         0x6
#define RX2OVFL_size                             0x1
#define RX2OVFL_value_mask                       0x40
#define RX2OVFL_clear_mask                       0xBF

#define RXB1OVFL                                 0x6
#define RXB1OVFL_address                         0xF74
#define RXB1OVFL_position                        0x6
#define RXB1OVFL_size                            0x1
#define RXB1OVFL_value_mask                      0x40
#define RXB1OVFL_clear_mask                      0xBF

#define RXBNOVFL                                 0x6
#define RXBNOVFL_address                         0xF74
#define RXBNOVFL_position                        0x6
#define RXBNOVFL_size                            0x1
#define RXBNOVFL_value_mask                      0x40
#define RXBNOVFL_clear_mask                      0xBF

#define RX1OVFL                                  0x7
#define RX1OVFL_address                          0xF74
#define RX1OVFL_position                         0x7
#define RX1OVFL_size                             0x1
#define RX1OVFL_value_mask                       0x80
#define RX1OVFL_clear_mask                       0x7F

#define FIFOEMPTY                                0x7
#define FIFOEMPTY_address                        0xF74
#define FIFOEMPTY_position                       0x7
#define FIFOEMPTY_size                           0x1
#define FIFOEMPTY_value_mask                     0x80
#define FIFOEMPTY_clear_mask                     0x7F

#define RXB0OVFL                                 0x7
#define RXB0OVFL_address                         0xF74
#define RXB0OVFL_position                        0x7
#define RXB0OVFL_size                            0x1
#define RXB0OVFL_value_mask                      0x80
#define RXB0OVFL_clear_mask                      0x7F


/*------------------------------------------------------#
| RXERRCNT                                        0xF75 |
#-------------------------------------------------------#
| REC7 | REC6 | REC5 | REC4 | REC3 | REC2 | REC1 | REC0 |
#-------------------------------------------------------#
| 7    | 6    | 5    | 4    | 3    | 2    | 1    | 0    |
#------------------------------------------------------*/

#define RXERRCNT                                 0x0
#define RXERRCNT_address                         0xF75
#define RXERRCNT_position                        0x0
#define RXERRCNT_size                            0x8
#define RXERRCNT_value_mask                      0xFF
#define RXERRCNT_clear_mask                      0x0

#define REC0                                     0x0
#define REC0_address                             0xF75
#define REC0_position                            0x0
#define REC0_size                                0x1
#define REC0_value_mask                          0x1
#define REC0_clear_mask                          0xFE

#define REC1                                     0x1
#define REC1_address                             0xF75
#define REC1_position                            0x1
#define REC1_size                                0x1
#define REC1_value_mask                          0x2
#define REC1_clear_mask                          0xFD

#define REC2                                     0x2
#define REC2_address                             0xF75
#define REC2_position                            0x2
#define REC2_size                                0x1
#define REC2_value_mask                          0x4
#define REC2_clear_mask                          0xFB

#define REC3                                     0x3
#define REC3_address                             0xF75
#define REC3_position                            0x3
#define REC3_size                                0x1
#define REC3_value_mask                          0x8
#define REC3_clear_mask                          0xF7

#define REC4                                     0x4
#define REC4_address                             0xF75
#define REC4_position                            0x4
#define REC4_size                                0x1
#define REC4_value_mask                          0x10
#define REC4_clear_mask                          0xEF

#define REC5                                     0x5
#define REC5_address                             0xF75
#define REC5_position                            0x5
#define REC5_size                                0x1
#define REC5_value_mask                          0x20
#define REC5_clear_mask                          0xDF

#define REC6                                     0x6
#define REC6_address                             0xF75
#define REC6_position                            0x6
#define REC6_size                                0x1
#define REC6_value_mask                          0x40
#define REC6_clear_mask                          0xBF

#define REC7                                     0x7
#define REC7_address                             0xF75
#define REC7_position                            0x7
#define REC7_size                                0x1
#define REC7_value_mask                          0x80
#define REC7_clear_mask                          0x7F


/*------------------------------------------------------#
| TXERRCNT                                        0xF76 |
#-------------------------------------------------------#
| TEC7 | TEC6 | TEC5 | TEC4 | TEC3 | TEC2 | TEC1 | TEC0 |
#-------------------------------------------------------#
| 7    | 6    | 5    | 4    | 3    | 2    | 1    | 0    |
#------------------------------------------------------*/

#define TXERRCNT                                 0x0
#define TXERRCNT_address                         0xF76
#define TXERRCNT_position                        0x0
#define TXERRCNT_size                            0x8
#define TXERRCNT_value_mask                      0xFF
#define TXERRCNT_clear_mask                      0x0

#define TEC0                                     0x0
#define TEC0_address                             0xF76
#define TEC0_position                            0x0
#define TEC0_size                                0x1
#define TEC0_value_mask                          0x1
#define TEC0_clear_mask                          0xFE

#define TEC1                                     0x1
#define TEC1_address                             0xF76
#define TEC1_position                            0x1
#define TEC1_size                                0x1
#define TEC1_value_mask                          0x2
#define TEC1_clear_mask                          0xFD

#define TEC2                                     0x2
#define TEC2_address                             0xF76
#define TEC2_position                            0x2
#define TEC2_size                                0x1
#define TEC2_value_mask                          0x4
#define TEC2_clear_mask                          0xFB

#define TEC3                                     0x3
#define TEC3_address                             0xF76
#define TEC3_position                            0x3
#define TEC3_size                                0x1
#define TEC3_value_mask                          0x8
#define TEC3_clear_mask                          0xF7

#define TEC4                                     0x4
#define TEC4_address                             0xF76
#define TEC4_position                            0x4
#define TEC4_size                                0x1
#define TEC4_value_mask                          0x10
#define TEC4_clear_mask                          0xEF

#define TEC5                                     0x5
#define TEC5_address                             0xF76
#define TEC5_position                            0x5
#define TEC5_size                                0x1
#define TEC5_value_mask                          0x20
#define TEC5_clear_mask                          0xDF

#define TEC6                                     0x6
#define TEC6_address                             0xF76
#define TEC6_position                            0x6
#define TEC6_size                                0x1
#define TEC6_value_mask                          0x40
#define TEC6_clear_mask                          0xBF

#define TEC7                                     0x7
#define TEC7_address                             0xF76
#define TEC7_position                            0x7
#define TEC7_size                                0x1
#define TEC7_value_mask                          0x80
#define TEC7_clear_mask                          0x7F


/*---------------------------------------------------#
| PORTA                                        0xF80 |
#----------------------------------------------------#
| - | CLKO | AN4 | PORTA_RA4 | AN3 | AN2 | AN1 | AN0 |
#----------------------------------------------------#
| 7 | 6    | 5   | 4         | 3   | 2   | 1   | 0   |
#---------------------------------------------------*/

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

#define CVREF                                    0x0
#define CVREF_address                            0xF80
#define CVREF_position                           0x0
#define CVREF_size                               0x1
#define CVREF_value_mask                         0x1
#define CVREF_clear_mask                         0xFE

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

#define T0CKI                                    0x4
#define T0CKI_address                            0xF80
#define T0CKI_position                           0x4
#define T0CKI_size                               0x1
#define T0CKI_value_mask                         0x10
#define T0CKI_clear_mask                         0xEF

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

#define NOT_SS                                   0x5
#define NOT_SS_address                           0xF80
#define NOT_SS_position                          0x5
#define NOT_SS_size                              0x1
#define NOT_SS_value_mask                        0x20
#define NOT_SS_clear_mask                        0xDF

#define LVDIN                                    0x5
#define LVDIN_address                            0xF80
#define LVDIN_position                           0x5
#define LVDIN_size                               0x1
#define LVDIN_value_mask                         0x20
#define LVDIN_clear_mask                         0xDF

#define nSS                                      0x5
#define nSS_address                              0xF80
#define nSS_position                             0x5
#define nSS_size                                 0x1
#define nSS_value_mask                           0x20
#define nSS_clear_mask                           0xDF

#define SS                                       0x5
#define SS_address                               0xF80
#define SS_position                              0x5
#define SS_size                                  0x1
#define SS_value_mask                            0x20
#define SS_clear_mask                            0xDF

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


/*---------------------------------------------------------------------------#
| PORTB                                                                0xF81 |
#----------------------------------------------------------------------------#
| PGD | PGC | PGM | PORTB_RB4 | CCP2_PA2 | PORTB_RB2 | PORTB_RB1 | PORTB_RB0 |
#----------------------------------------------------------------------------#
| 7   | 6   | 5   | 4         | 3        | 2         | 1         | 0         |
#---------------------------------------------------------------------------*/

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

#define PORTB_RB1                                0x1
#define PORTB_RB1_address                        0xF81
#define PORTB_RB1_position                       0x1
#define PORTB_RB1_size                           0x1
#define PORTB_RB1_value_mask                     0x2
#define PORTB_RB1_clear_mask                     0xFD

#define CANTX                                    0x2
#define CANTX_address                            0xF81
#define CANTX_position                           0x2
#define CANTX_size                               0x1
#define CANTX_value_mask                         0x4
#define CANTX_clear_mask                         0xFB

#define PORTB_RB2                                0x2
#define PORTB_RB2_address                        0xF81
#define PORTB_RB2_position                       0x2
#define PORTB_RB2_size                           0x1
#define PORTB_RB2_value_mask                     0x4
#define PORTB_RB2_clear_mask                     0xFB

#define CCP2_PA2                                 0x3
#define CCP2_PA2_address                         0xF81
#define CCP2_PA2_position                        0x3
#define CCP2_PA2_size                            0x1
#define CCP2_PA2_value_mask                      0x8
#define CCP2_PA2_clear_mask                      0xF7

#define CANRX                                    0x3
#define CANRX_address                            0xF81
#define CANRX_position                           0x3
#define CANRX_size                               0x1
#define CANRX_value_mask                         0x8
#define CANRX_clear_mask                         0xF7

#define PORTB_RB3                                0x3
#define PORTB_RB3_address                        0xF81
#define PORTB_RB3_position                       0x3
#define PORTB_RB3_size                           0x1
#define PORTB_RB3_value_mask                     0x8
#define PORTB_RB3_clear_mask                     0xF7

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

#define PORTB_RB7                                0x7
#define PORTB_RB7_address                        0xF81
#define PORTB_RB7_position                       0x7
#define PORTB_RB7_size                           0x1
#define PORTB_RB7_value_mask                     0x80
#define PORTB_RB7_clear_mask                     0x7F


/*------------------------------------------------#
| PORTC                                     0xF82 |
#-------------------------------------------------#
| DT | CK | SDO | SDA | SCL | CCP1 | CCP2 | T1CKI |
#-------------------------------------------------#
| 7  | 6  | 5   | 4   | 3   | 2    | 1    | 0     |
#------------------------------------------------*/

#define PORTC                                    0x0
#define PORTC_address                            0xF82
#define PORTC_position                           0x0
#define PORTC_size                               0x8
#define PORTC_value_mask                         0xFF
#define PORTC_clear_mask                         0x0

#define T1CKI                                    0x0
#define T1CKI_address                            0xF82
#define T1CKI_position                           0x0
#define T1CKI_size                               0x1
#define T1CKI_value_mask                         0x1
#define T1CKI_clear_mask                         0xFE

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


/*----------------------------------------------------------#
| LATA                                                0xF89 |
#-----------------------------------------------------------#
| - | LATA6 | LATA5 | LATA4 | LATA3 | LATA2 | LATA1 | LATA0 |
#-----------------------------------------------------------#
| 7 | 6     | 5     | 4     | 3     | 2     | 1     | 0     |
#----------------------------------------------------------*/

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


/*-----------------------------------------------------------------#
| TRISA                                                      0xF92 |
#------------------------------------------------------------------#
| - | TRISA6 | TRISA5 | TRISA4 | TRISA3 | TRISA2 | TRISA1 | TRISA0 |
#------------------------------------------------------------------#
| 7 | 6      | 5      | 4      | 3      | 2      | 1      | 0      |
#-----------------------------------------------------------------*/

#define TRISA                                    0x0
#define TRISA_address                            0xF92
#define TRISA_position                           0x0
#define TRISA_size                               0x8
#define TRISA_value_mask                         0xFF
#define TRISA_clear_mask                         0x0

#define TRISA_RA0                                0x0
#define TRISA_RA0_address                        0xF92
#define TRISA_RA0_position                       0x0
#define TRISA_RA0_size                           0x1
#define TRISA_RA0_value_mask                     0x1
#define TRISA_RA0_clear_mask                     0xFE

#define TRISA0                                   0x0
#define TRISA0_address                           0xF92
#define TRISA0_position                          0x0
#define TRISA0_size                              0x1
#define TRISA0_value_mask                        0x1
#define TRISA0_clear_mask                        0xFE

#define TRISA_RA1                                0x1
#define TRISA_RA1_address                        0xF92
#define TRISA_RA1_position                       0x1
#define TRISA_RA1_size                           0x1
#define TRISA_RA1_value_mask                     0x2
#define TRISA_RA1_clear_mask                     0xFD

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

#define TRISA_RA2                                0x2
#define TRISA_RA2_address                        0xF92
#define TRISA_RA2_position                       0x2
#define TRISA_RA2_size                           0x1
#define TRISA_RA2_value_mask                     0x4
#define TRISA_RA2_clear_mask                     0xFB

#define TRISA_RA3                                0x3
#define TRISA_RA3_address                        0xF92
#define TRISA_RA3_position                       0x3
#define TRISA_RA3_size                           0x1
#define TRISA_RA3_value_mask                     0x8
#define TRISA_RA3_clear_mask                     0xF7

#define TRISA3                                   0x3
#define TRISA3_address                           0xF92
#define TRISA3_position                          0x3
#define TRISA3_size                              0x1
#define TRISA3_value_mask                        0x8
#define TRISA3_clear_mask                        0xF7

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


/*----------------------------------------------------------------#
| PIE1                                                      0xF9D |
#-----------------------------------------------------------------#
| - | ADIE | RCIE | PIE1_TX1IE | SSPIE | CCP1IE | TMR2IE | TMR1IE |
#-----------------------------------------------------------------#
| 7 | 6    | 5    | 4          | 3     | 2      | 1      | 0      |
#----------------------------------------------------------------*/

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

#define PIE1_TX1IE                               0x4
#define PIE1_TX1IE_address                       0xF9D
#define PIE1_TX1IE_position                      0x4
#define PIE1_TX1IE_size                          0x1
#define PIE1_TX1IE_value_mask                    0x10
#define PIE1_TX1IE_clear_mask                    0xEF

#define TXIE                                     0x4
#define TXIE_address                             0xF9D
#define TXIE_position                            0x4
#define TXIE_size                                0x1
#define TXIE_value_mask                          0x10
#define TXIE_clear_mask                          0xEF

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

#define PIR1_TX1IF                               0x4
#define PIR1_TX1IF_address                       0xF9E
#define PIR1_TX1IF_position                      0x4
#define PIR1_TX1IF_size                          0x1
#define PIR1_TX1IF_value_mask                    0x10
#define PIR1_TX1IF_clear_mask                    0xEF

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


/*----------------------------------------------#
| PIE2                                    0xFA0 |
#-----------------------------------------------#
| - | - | - | EEIE | BCLIE | LVDIE | TMR3IE | - |
#-----------------------------------------------#
| 7 | 6 | 5 | 4    | 3     | 2     | 1      | 0 |
#----------------------------------------------*/

#define PIE2                                     0x0
#define PIE2_address                             0xFA0
#define PIE2_position                            0x0
#define PIE2_size                                0x8
#define PIE2_value_mask                          0xFF
#define PIE2_clear_mask                          0x0

#define TMR3IE                                   0x1
#define TMR3IE_address                           0xFA0
#define TMR3IE_position                          0x1
#define TMR3IE_size                              0x1
#define TMR3IE_value_mask                        0x2
#define TMR3IE_clear_mask                        0xFD

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

#define EEIE                                     0x4
#define EEIE_address                             0xFA0
#define EEIE_position                            0x4
#define EEIE_size                                0x1
#define EEIE_value_mask                          0x10
#define EEIE_clear_mask                          0xEF


/*----------------------------------------------#
| PIR2                                    0xFA1 |
#-----------------------------------------------#
| - | - | - | EEIF | BCLIF | LVDIF | TMR3IF | - |
#-----------------------------------------------#
| 7 | 6 | 5 | 4    | 3     | 2     | 1      | 0 |
#----------------------------------------------*/

#define PIR2                                     0x0
#define PIR2_address                             0xFA1
#define PIR2_position                            0x0
#define PIR2_size                                0x8
#define PIR2_value_mask                          0xFF
#define PIR2_clear_mask                          0x0

#define TMR3IF                                   0x1
#define TMR3IF_address                           0xFA1
#define TMR3IF_position                          0x1
#define TMR3IF_size                              0x1
#define TMR3IF_value_mask                        0x2
#define TMR3IF_clear_mask                        0xFD

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

#define EEIF                                     0x4
#define EEIF_address                             0xFA1
#define EEIF_position                            0x4
#define EEIF_size                                0x1
#define EEIF_value_mask                          0x10
#define EEIF_clear_mask                          0xEF


/*----------------------------------------------#
| IPR2                                    0xFA2 |
#-----------------------------------------------#
| - | - | - | EEIP | BCLIP | LVDIP | TMR3IP | - |
#-----------------------------------------------#
| 7 | 6 | 5 | 4    | 3     | 2     | 1      | 0 |
#----------------------------------------------*/

#define IPR2                                     0x0
#define IPR2_address                             0xFA2
#define IPR2_position                            0x0
#define IPR2_size                                0x8
#define IPR2_value_mask                          0xFF
#define IPR2_clear_mask                          0x0

#define TMR3IP                                   0x1
#define TMR3IP_address                           0xFA2
#define TMR3IP_position                          0x1
#define TMR3IP_size                              0x1
#define TMR3IP_value_mask                        0x2
#define TMR3IP_clear_mask                        0xFD

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

#define EEIP                                     0x4
#define EEIP_address                             0xFA2
#define EEIP_position                            0x4
#define EEIP_size                                0x1
#define EEIP_value_mask                          0x10
#define EEIP_clear_mask                          0xEF


/*-----------------------------------------------------------------------#
| PIE3                                                             0xFA3 |
#------------------------------------------------------------------------#
| IRXIE | WAKIE | ERRIE | TXB2IE | PIE3_TX1IE | TXB0IE | RXBNIE | RXB0IE |
#------------------------------------------------------------------------#
| 7     | 6     | 5     | 4      | 3          | 2      | 1      | 0      |
#-----------------------------------------------------------------------*/

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

#define RX0IE                                    0x0
#define RX0IE_address                            0xFA3
#define RX0IE_position                           0x0
#define RX0IE_size                               0x1
#define RX0IE_value_mask                         0x1
#define RX0IE_clear_mask                         0xFE

#define RXBNIE                                   0x1
#define RXBNIE_address                           0xFA3
#define RXBNIE_position                          0x1
#define RXBNIE_size                              0x1
#define RXBNIE_value_mask                        0x2
#define RXBNIE_clear_mask                        0xFD

#define RX1IE                                    0x1
#define RX1IE_address                            0xFA3
#define RX1IE_position                           0x1
#define RX1IE_size                               0x1
#define RX1IE_value_mask                         0x2
#define RX1IE_clear_mask                         0xFD

#define RXB1IE                                   0x1
#define RXB1IE_address                           0xFA3
#define RXB1IE_position                          0x1
#define RXB1IE_size                              0x1
#define RXB1IE_value_mask                        0x2
#define RXB1IE_clear_mask                        0xFD

#define TXB0IE                                   0x2
#define TXB0IE_address                           0xFA3
#define TXB0IE_position                          0x2
#define TXB0IE_size                              0x1
#define TXB0IE_value_mask                        0x4
#define TXB0IE_clear_mask                        0xFB

#define TX0IE                                    0x2
#define TX0IE_address                            0xFA3
#define TX0IE_position                           0x2
#define TX0IE_size                               0x1
#define TX0IE_value_mask                         0x4
#define TX0IE_clear_mask                         0xFB

#define PIE3_TX1IE                               0x3
#define PIE3_TX1IE_address                       0xFA3
#define PIE3_TX1IE_position                      0x3
#define PIE3_TX1IE_size                          0x1
#define PIE3_TX1IE_value_mask                    0x8
#define PIE3_TX1IE_clear_mask                    0xF7

#define TXB1IE                                   0x3
#define TXB1IE_address                           0xFA3
#define TXB1IE_position                          0x3
#define TXB1IE_size                              0x1
#define TXB1IE_value_mask                        0x8
#define TXB1IE_clear_mask                        0xF7

#define TXB2IE                                   0x4
#define TXB2IE_address                           0xFA3
#define TXB2IE_position                          0x4
#define TXB2IE_size                              0x1
#define TXB2IE_value_mask                        0x10
#define TXB2IE_clear_mask                        0xEF

#define TXBNIE                                   0x4
#define TXBNIE_address                           0xFA3
#define TXBNIE_position                          0x4
#define TXBNIE_size                              0x1
#define TXBNIE_value_mask                        0x10
#define TXBNIE_clear_mask                        0xEF

#define TX2IE                                    0x4
#define TX2IE_address                            0xFA3
#define TX2IE_position                           0x4
#define TX2IE_size                               0x1
#define TX2IE_value_mask                         0x10
#define TX2IE_clear_mask                         0xEF

#define ERRIE                                    0x5
#define ERRIE_address                            0xFA3
#define ERRIE_position                           0x5
#define ERRIE_size                               0x1
#define ERRIE_value_mask                         0x20
#define ERRIE_clear_mask                         0xDF

#define WAKIE                                    0x6
#define WAKIE_address                            0xFA3
#define WAKIE_position                           0x6
#define WAKIE_size                               0x1
#define WAKIE_value_mask                         0x40
#define WAKIE_clear_mask                         0xBF

#define IRXIE                                    0x7
#define IRXIE_address                            0xFA3
#define IRXIE_position                           0x7
#define IRXIE_size                               0x1
#define IRXIE_value_mask                         0x80
#define IRXIE_clear_mask                         0x7F

#define IVRE                                     0x7
#define IVRE_address                             0xFA3
#define IVRE_position                            0x7
#define IVRE_size                                0x1
#define IVRE_value_mask                          0x80
#define IVRE_clear_mask                          0x7F


/*----------------------------------------------------------------------#
| PIR3                                                            0xFA4 |
#-----------------------------------------------------------------------#
| IRXIF | WAKIF | ERRIF | TXB2IF | PIR3_TX1IF | TX0IF | RXBNIF | RXB0IF |
#-----------------------------------------------------------------------#
| 7     | 6     | 5     | 4      | 3          | 2     | 1      | 0      |
#----------------------------------------------------------------------*/

#define PIR3                                     0x0
#define PIR3_address                             0xFA4
#define PIR3_position                            0x0
#define PIR3_size                                0x8
#define PIR3_value_mask                          0xFF
#define PIR3_clear_mask                          0x0

#define RX0IF                                    0x0
#define RX0IF_address                            0xFA4
#define RX0IF_position                           0x0
#define RX0IF_size                               0x1
#define RX0IF_value_mask                         0x1
#define RX0IF_clear_mask                         0xFE

#define RXB0IF                                   0x0
#define RXB0IF_address                           0xFA4
#define RXB0IF_position                          0x0
#define RXB0IF_size                              0x1
#define RXB0IF_value_mask                        0x1
#define RXB0IF_clear_mask                        0xFE

#define RXBNIF                                   0x1
#define RXBNIF_address                           0xFA4
#define RXBNIF_position                          0x1
#define RXBNIF_size                              0x1
#define RXBNIF_value_mask                        0x2
#define RXBNIF_clear_mask                        0xFD

#define RX1IF                                    0x1
#define RX1IF_address                            0xFA4
#define RX1IF_position                           0x1
#define RX1IF_size                               0x1
#define RX1IF_value_mask                         0x2
#define RX1IF_clear_mask                         0xFD

#define RXB1IF                                   0x1
#define RXB1IF_address                           0xFA4
#define RXB1IF_position                          0x1
#define RXB1IF_size                              0x1
#define RXB1IF_value_mask                        0x2
#define RXB1IF_clear_mask                        0xFD

#define TX0IF                                    0x2
#define TX0IF_address                            0xFA4
#define TX0IF_position                           0x2
#define TX0IF_size                               0x1
#define TX0IF_value_mask                         0x4
#define TX0IF_clear_mask                         0xFB

#define TXB0IF                                   0x2
#define TXB0IF_address                           0xFA4
#define TXB0IF_position                          0x2
#define TXB0IF_size                              0x1
#define TXB0IF_value_mask                        0x4
#define TXB0IF_clear_mask                        0xFB

#define PIR3_TX1IF                               0x3
#define PIR3_TX1IF_address                       0xFA4
#define PIR3_TX1IF_position                      0x3
#define PIR3_TX1IF_size                          0x1
#define PIR3_TX1IF_value_mask                    0x8
#define PIR3_TX1IF_clear_mask                    0xF7

#define TXB1IF                                   0x3
#define TXB1IF_address                           0xFA4
#define TXB1IF_position                          0x3
#define TXB1IF_size                              0x1
#define TXB1IF_value_mask                        0x8
#define TXB1IF_clear_mask                        0xF7

#define TXB2IF                                   0x4
#define TXB2IF_address                           0xFA4
#define TXB2IF_position                          0x4
#define TXB2IF_size                              0x1
#define TXB2IF_value_mask                        0x10
#define TXB2IF_clear_mask                        0xEF

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

#define ERRIF                                    0x5
#define ERRIF_address                            0xFA4
#define ERRIF_position                           0x5
#define ERRIF_size                               0x1
#define ERRIF_value_mask                         0x20
#define ERRIF_clear_mask                         0xDF

#define WAKIF                                    0x6
#define WAKIF_address                            0xFA4
#define WAKIF_position                           0x6
#define WAKIF_size                               0x1
#define WAKIF_value_mask                         0x40
#define WAKIF_clear_mask                         0xBF

#define IRXIF                                    0x7
#define IRXIF_address                            0xFA4
#define IRXIF_position                           0x7
#define IRXIF_size                               0x1
#define IRXIF_value_mask                         0x80
#define IRXIF_clear_mask                         0x7F

#define IVRF                                     0x7
#define IVRF_address                             0xFA4
#define IVRF_position                            0x7
#define IVRF_size                                0x1
#define IVRF_value_mask                          0x80
#define IVRF_clear_mask                          0x7F


/*------------------------------------------------------------------#
| IPR3                                                        0xFA5 |
#-------------------------------------------------------------------#
| IVRP | WAKIP | ERRIP | TXB2IP | TXB1IP | TXB0IP | RXB1IP | RXB0IP |
#-------------------------------------------------------------------#
| 7    | 6     | 5     | 4      | 3      | 2      | 1      | 0      |
#------------------------------------------------------------------*/

#define IPR3                                     0x0
#define IPR3_address                             0xFA5
#define IPR3_position                            0x0
#define IPR3_size                                0x8
#define IPR3_value_mask                          0xFF
#define IPR3_clear_mask                          0x0

#define RXB0IP                                   0x0
#define RXB0IP_address                           0xFA5
#define RXB0IP_position                          0x0
#define RXB0IP_size                              0x1
#define RXB0IP_value_mask                        0x1
#define RXB0IP_clear_mask                        0xFE

#define RXB1IP                                   0x1
#define RXB1IP_address                           0xFA5
#define RXB1IP_position                          0x1
#define RXB1IP_size                              0x1
#define RXB1IP_value_mask                        0x2
#define RXB1IP_clear_mask                        0xFD

#define RXBNIP                                   0x1
#define RXBNIP_address                           0xFA5
#define RXBNIP_position                          0x1
#define RXBNIP_size                              0x1
#define RXBNIP_value_mask                        0x2
#define RXBNIP_clear_mask                        0xFD

#define TXB0IP                                   0x2
#define TXB0IP_address                           0xFA5
#define TXB0IP_position                          0x2
#define TXB0IP_size                              0x1
#define TXB0IP_value_mask                        0x4
#define TXB0IP_clear_mask                        0xFB

#define TXB1IP                                   0x3
#define TXB1IP_address                           0xFA5
#define TXB1IP_position                          0x3
#define TXB1IP_size                              0x1
#define TXB1IP_value_mask                        0x8
#define TXB1IP_clear_mask                        0xF7

#define TXB2IP                                   0x4
#define TXB2IP_address                           0xFA5
#define TXB2IP_position                          0x4
#define TXB2IP_size                              0x1
#define TXB2IP_value_mask                        0x10
#define TXB2IP_clear_mask                        0xEF

#define TXBNIP                                   0x4
#define TXBNIP_address                           0xFA5
#define TXBNIP_position                          0x4
#define TXBNIP_size                              0x1
#define TXBNIP_value_mask                        0x10
#define TXBNIP_clear_mask                        0xEF

#define ERRIP                                    0x5
#define ERRIP_address                            0xFA5
#define ERRIP_position                           0x5
#define ERRIP_size                               0x1
#define ERRIP_value_mask                         0x20
#define ERRIP_clear_mask                         0xDF

#define WAKIP                                    0x6
#define WAKIP_address                            0xFA5
#define WAKIP_position                           0x6
#define WAKIP_size                               0x1
#define WAKIP_value_mask                         0x40
#define WAKIP_clear_mask                         0xBF

#define IVRP                                     0x7
#define IVRP_address                             0xFA5
#define IVRP_position                            0x7
#define IVRP_size                                0x1
#define IVRP_value_mask                          0x80
#define IVRP_clear_mask                          0x7F

#define IRXIP                                    0x7
#define IRXIP_address                            0xFA5
#define IRXIP_position                           0x7
#define IRXIP_size                               0x1
#define IRXIP_value_mask                         0x80
#define IRXIP_clear_mask                         0x7F


/*-------------------------------------------------#
| EECON1                                     0xFA6 |
#--------------------------------------------------#
| EEPGD | CFGS | - | FREE | WRERR | WREN | WR | RD |
#--------------------------------------------------#
| 7     | 6    | 5 | 4    | 3     | 2    | 1  | 0  |
#-------------------------------------------------*/

#define EECON1                                   0x0
#define EECON1_address                           0xFA6
#define EECON1_position                          0x0
#define EECON1_size                              0x8
#define EECON1_value_mask                        0xFF
#define EECON1_clear_mask                        0x0

#define RD                                       0x0
#define RD_address                               0xFA6
#define RD_position                              0x0
#define RD_size                                  0x1
#define RD_value_mask                            0x1
#define RD_clear_mask                            0xFE

#define WR                                       0x1
#define WR_address                               0xFA6
#define WR_position                              0x1
#define WR_size                                  0x1
#define WR_value_mask                            0x2
#define WR_clear_mask                            0xFD

#define WREN                                     0x2
#define WREN_address                             0xFA6
#define WREN_position                            0x2
#define WREN_size                                0x1
#define WREN_value_mask                          0x4
#define WREN_clear_mask                          0xFB

#define WRERR                                    0x3
#define WRERR_address                            0xFA6
#define WRERR_position                           0x3
#define WRERR_size                               0x1
#define WRERR_value_mask                         0x8
#define WRERR_clear_mask                         0xF7

#define FREE                                     0x4
#define FREE_address                             0xFA6
#define FREE_position                            0x4
#define FREE_size                                0x1
#define FREE_value_mask                          0x10
#define FREE_clear_mask                          0xEF

#define CFGS                                     0x6
#define CFGS_address                             0xFA6
#define CFGS_position                            0x6
#define CFGS_size                                0x1
#define CFGS_value_mask                          0x40
#define CFGS_clear_mask                          0xBF

#define EEFS                                     0x6
#define EEFS_address                             0xFA6
#define EEFS_position                            0x6
#define EEFS_size                                0x1
#define EEFS_value_mask                          0x40
#define EEFS_clear_mask                          0xBF

#define EEPGD                                    0x7
#define EEPGD_address                            0xFA6
#define EEPGD_position                           0x7
#define EEPGD_size                               0x1
#define EEPGD_value_mask                         0x80
#define EEPGD_clear_mask                         0x7F


/*------------------------------------------------------#
| RCSTA                                           0xFAB |
#-------------------------------------------------------#
| SPEN | RX9 | SREN | CREN | ADDEN | FERR | OERR | RCD8 |
#-------------------------------------------------------#
| 7    | 6   | 5    | 4    | 3     | 2    | 1    | 0    |
#------------------------------------------------------*/

#define RCSTA                                    0x0
#define RCSTA_address                            0xFAB
#define RCSTA_position                           0x0
#define RCSTA_size                               0x8
#define RCSTA_value_mask                         0xFF
#define RCSTA_clear_mask                         0x0

#define RCD8                                     0x0
#define RCD8_address                             0xFAB
#define RCD8_position                            0x0
#define RCD8_size                                0x1
#define RCD8_value_mask                          0x1
#define RCD8_clear_mask                          0xFE

#define RX9D                                     0x0
#define RX9D_address                             0xFAB
#define RX9D_position                            0x0
#define RX9D_size                                0x1
#define RX9D_value_mask                          0x1
#define RX9D_clear_mask                          0xFE

#define OERR                                     0x1
#define OERR_address                             0xFAB
#define OERR_position                            0x1
#define OERR_size                                0x1
#define OERR_value_mask                          0x2
#define OERR_clear_mask                          0xFD

#define FERR                                     0x2
#define FERR_address                             0xFAB
#define FERR_position                            0x2
#define FERR_size                                0x1
#define FERR_value_mask                          0x4
#define FERR_clear_mask                          0xFB

#define ADDEN                                    0x3
#define ADDEN_address                            0xFAB
#define ADDEN_position                           0x3
#define ADDEN_size                               0x1
#define ADDEN_value_mask                         0x8
#define ADDEN_clear_mask                         0xF7

#define CREN                                     0x4
#define CREN_address                             0xFAB
#define CREN_position                            0x4
#define CREN_size                                0x1
#define CREN_value_mask                          0x10
#define CREN_clear_mask                          0xEF

#define SREN                                     0x5
#define SREN_address                             0xFAB
#define SREN_position                            0x5
#define SREN_size                                0x1
#define SREN_value_mask                          0x20
#define SREN_clear_mask                          0xDF

#define SRENA                                    0x5
#define SRENA_address                            0xFAB
#define SRENA_position                           0x5
#define SRENA_size                               0x1
#define SRENA_value_mask                         0x20
#define SRENA_clear_mask                         0xDF

#define RC8_9                                    0x6
#define RC8_9_address                            0xFAB
#define RC8_9_position                           0x6
#define RC8_9_size                               0x1
#define RC8_9_value_mask                         0x40
#define RC8_9_clear_mask                         0xBF

#define RC9                                      0x6
#define RC9_address                              0xFAB
#define RC9_position                             0x6
#define RC9_size                                 0x1
#define RC9_value_mask                           0x40
#define RC9_clear_mask                           0xBF

#define RX9                                      0x6
#define RX9_address                              0xFAB
#define RX9_position                             0x6
#define RX9_size                                 0x1
#define RX9_value_mask                           0x40
#define RX9_clear_mask                           0xBF

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

#define SPEN                                     0x7
#define SPEN_address                             0xFAB
#define SPEN_position                            0x7
#define SPEN_size                                0x1
#define SPEN_value_mask                          0x80
#define SPEN_clear_mask                          0x7F


/*-----------------------------------------------------#
| TXSTA                                          0xFAC |
#------------------------------------------------------#
| CSRC1 | TX91 | TXEN | SYNC | - | BRGH1 | TRMT | TXD8 |
#------------------------------------------------------#
| 7     | 6    | 5    | 4    | 3 | 2     | 1    | 0    |
#-----------------------------------------------------*/

#define TXSTA                                    0x0
#define TXSTA_address                            0xFAC
#define TXSTA_position                           0x0
#define TXSTA_size                               0x8
#define TXSTA_value_mask                         0xFF
#define TXSTA_clear_mask                         0x0

#define TXD8                                     0x0
#define TXD8_address                             0xFAC
#define TXD8_position                            0x0
#define TXD8_size                                0x1
#define TXD8_value_mask                          0x1
#define TXD8_clear_mask                          0xFE

#define TX9D1                                    0x0
#define TX9D1_address                            0xFAC
#define TX9D1_position                           0x0
#define TX9D1_size                               0x1
#define TX9D1_value_mask                         0x1
#define TX9D1_clear_mask                         0xFE

#define TX9D                                     0x0
#define TX9D_address                             0xFAC
#define TX9D_position                            0x0
#define TX9D_size                                0x1
#define TX9D_value_mask                          0x1
#define TX9D_clear_mask                          0xFE

#define TRMT                                     0x1
#define TRMT_address                             0xFAC
#define TRMT_position                            0x1
#define TRMT_size                                0x1
#define TRMT_value_mask                          0x2
#define TRMT_clear_mask                          0xFD

#define TRMT1                                    0x1
#define TRMT1_address                            0xFAC
#define TRMT1_position                           0x1
#define TRMT1_size                               0x1
#define TRMT1_value_mask                         0x2
#define TRMT1_clear_mask                         0xFD

#define BRGH1                                    0x2
#define BRGH1_address                            0xFAC
#define BRGH1_position                           0x2
#define BRGH1_size                               0x1
#define BRGH1_value_mask                         0x4
#define BRGH1_clear_mask                         0xFB

#define BRGH                                     0x2
#define BRGH_address                             0xFAC
#define BRGH_position                            0x2
#define BRGH_size                                0x1
#define BRGH_value_mask                          0x4
#define BRGH_clear_mask                          0xFB

#define SYNC                                     0x4
#define SYNC_address                             0xFAC
#define SYNC_position                            0x4
#define SYNC_size                                0x1
#define SYNC_value_mask                          0x10
#define SYNC_clear_mask                          0xEF

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

#define TXEN                                     0x5
#define TXEN_address                             0xFAC
#define TXEN_position                            0x5
#define TXEN_size                                0x1
#define TXEN_value_mask                          0x20
#define TXEN_clear_mask                          0xDF

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

#define TX9                                      0x6
#define TX9_address                              0xFAC
#define TX9_position                             0x6
#define TX9_size                                 0x1
#define TX9_value_mask                           0x40
#define TX9_clear_mask                           0xBF

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

#define CSRC1                                    0x7
#define CSRC1_address                            0xFAC
#define CSRC1_position                           0x7
#define CSRC1_size                               0x1
#define CSRC1_value_mask                         0x80
#define CSRC1_clear_mask                         0x7F

#define CSRC                                     0x7
#define CSRC_address                             0xFAC
#define CSRC_position                            0x7
#define CSRC_size                                0x1
#define CSRC_value_mask                          0x80
#define CSRC_clear_mask                          0x7F


/*-------------------------------------------------------------------------------#
| T3CON                                                                    0xFB1 |
#--------------------------------------------------------------------------------#
| T3CON_RD16 | T3ECCP1 | T3CKPS1 | T3CKPS0 | SOSCEN3 | nT3SYNC | TMR3CS | TMR3ON |
#--------------------------------------------------------------------------------#
| 7          | 6       | 5       | 4       | 3       | 2       | 1      | 0      |
#-------------------------------------------------------------------------------*/

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

#define T3ECCP1                                  0x6
#define T3ECCP1_address                          0xFB1
#define T3ECCP1_position                         0x6
#define T3ECCP1_size                             0x1
#define T3ECCP1_value_mask                       0x40
#define T3ECCP1_clear_mask                       0xBF

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


/*----------------------------------------------------------#
| CCP1CON                                             0xFBD |
#-----------------------------------------------------------#
| - | - | CCP1X | CCP1Y | CCP1M3 | CCP1M2 | CCP1M1 | CCP1M0 |
#-----------------------------------------------------------#
| 7 | 6 | 5     | 4     | 3      | 2      | 1      | 0      |
#----------------------------------------------------------*/

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

#define DC1B1                                    0x5
#define DC1B1_address                            0xFBD
#define DC1B1_position                           0x5
#define DC1B1_size                               0x1
#define DC1B1_value_mask                         0x20
#define DC1B1_clear_mask                         0xDF


/*-----------------------------------------------------#
| ADCON1                                         0xFC1 |
#------------------------------------------------------#
| ADFM | ADCS2 | - | - | CHSN3 | PCFG2 | PCFG1 | PCFG0 |
#------------------------------------------------------#
| 7    | 6     | 5 | 4 | 3     | 2     | 1     | 0     |
#-----------------------------------------------------*/

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

#define ADCS2                                    0x6
#define ADCS2_address                            0xFC1
#define ADCS2_position                           0x6
#define ADCS2_size                               0x1
#define ADCS2_value_mask                         0x40
#define ADCS2_clear_mask                         0xBF

#define ADFM                                     0x7
#define ADFM_address                             0xFC1
#define ADFM_position                            0x7
#define ADFM_size                                0x1
#define ADFM_value_mask                          0x80
#define ADFM_clear_mask                          0x7F


/*------------------------------------------------------#
| ADCON0                                          0xFC2 |
#-------------------------------------------------------#
| ADCAL | ADCS0 | CHS2 | CHS1 | CHS0 | nDONE | - | ADON |
#-------------------------------------------------------#
| 7     | 6     | 5    | 4    | 3    | 2     | 1 | 0    |
#------------------------------------------------------*/

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

#define nDONE                                    0x2
#define nDONE_address                            0xFC2
#define nDONE_position                           0x2
#define nDONE_size                               0x1
#define nDONE_value_mask                         0x4
#define nDONE_clear_mask                         0xFB

#define GO_nDONE                                 0x2
#define GO_nDONE_address                         0xFC2
#define GO_nDONE_position                        0x2
#define GO_nDONE_size                            0x1
#define GO_nDONE_value_mask                      0x4
#define GO_nDONE_clear_mask                      0xFB

#define NOT_DONE                                 0x2
#define NOT_DONE_address                         0xFC2
#define NOT_DONE_position                        0x2
#define NOT_DONE_size                            0x1
#define NOT_DONE_value_mask                      0x4
#define NOT_DONE_clear_mask                      0xFB

#define GODONE                                   0x2
#define GODONE_address                           0xFC2
#define GODONE_position                          0x2
#define GODONE_size                              0x1
#define GODONE_value_mask                        0x4
#define GODONE_clear_mask                        0xFB

#define GO_DONE                                  0x2
#define GO_DONE_address                          0xFC2
#define GO_DONE_position                         0x2
#define GO_DONE_size                             0x1
#define GO_DONE_value_mask                       0x4
#define GO_DONE_clear_mask                       0xFB

#define DONE                                     0x2
#define DONE_address                             0xFC2
#define DONE_position                            0x2
#define DONE_size                                0x1
#define DONE_value_mask                          0x4
#define DONE_clear_mask                          0xFB

#define GO                                       0x2
#define GO_address                               0xFC2
#define GO_position                              0x2
#define GO_size                                  0x1
#define GO_value_mask                            0x4
#define GO_clear_mask                            0xFB

#define GO_NOT_DONE                              0x2
#define GO_NOT_DONE_address                      0xFC2
#define GO_NOT_DONE_position                     0x2
#define GO_NOT_DONE_size                         0x1
#define GO_NOT_DONE_value_mask                   0x4
#define GO_NOT_DONE_clear_mask                   0xFB

#define CHS                                      0x3
#define CHS_address                              0xFC2
#define CHS_position                             0x3
#define CHS_size                                 0x3
#define CHS_value_mask                           0x38
#define CHS_clear_mask                           0xC7

#define CHS0                                     0x3
#define CHS0_address                             0xFC2
#define CHS0_position                            0x3
#define CHS0_size                                0x1
#define CHS0_value_mask                          0x8
#define CHS0_clear_mask                          0xF7

#define CHS1                                     0x4
#define CHS1_address                             0xFC2
#define CHS1_position                            0x4
#define CHS1_size                                0x1
#define CHS1_value_mask                          0x10
#define CHS1_clear_mask                          0xEF

#define CHS2                                     0x5
#define CHS2_address                             0xFC2
#define CHS2_position                            0x5
#define CHS2_size                                0x1
#define CHS2_value_mask                          0x20
#define CHS2_clear_mask                          0xDF

#define ADCS                                     0x6
#define ADCS_address                             0xFC2
#define ADCS_position                            0x6
#define ADCS_size                                0x2
#define ADCS_value_mask                          0xC0
#define ADCS_clear_mask                          0x3F

#define ADCS0                                    0x6
#define ADCS0_address                            0xFC2
#define ADCS0_position                           0x6
#define ADCS0_size                               0x1
#define ADCS0_value_mask                         0x40
#define ADCS0_clear_mask                         0xBF

#define ADCAL                                    0x7
#define ADCAL_address                            0xFC2
#define ADCAL_position                           0x7
#define ADCAL_size                               0x1
#define ADCAL_value_mask                         0x80
#define ADCAL_clear_mask                         0x7F

#define ADCS1                                    0x7
#define ADCS1_address                            0xFC2
#define ADCS1_position                           0x7
#define ADCS1_size                               0x1
#define ADCS1_value_mask                         0x80
#define ADCS1_clear_mask                         0x7F


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

#define RW                                       0x2
#define RW_address                               0xFC7
#define RW_position                              0x2
#define RW_size                                  0x1
#define RW_value_mask                            0x4
#define RW_clear_mask                            0xFB

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

#define nW                                       0x2
#define nW_address                               0xFC7
#define nW_position                              0x2
#define nW_size                                  0x1
#define nW_value_mask                            0x4
#define nW_clear_mask                            0xFB

#define nWRITE                                   0x2
#define nWRITE_address                           0xFC7
#define nWRITE_position                          0x2
#define nWRITE_size                              0x1
#define nWRITE_value_mask                        0x4
#define nWRITE_clear_mask                        0xFB

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

#define I2C_DATA                                 0x5
#define I2C_DATA_address                         0xFC7
#define I2C_DATA_position                        0x5
#define I2C_DATA_size                            0x1
#define I2C_DATA_value_mask                      0x20
#define I2C_DATA_clear_mask                      0xDF

#define nA                                       0x5
#define nA_address                               0xFC7
#define nA_position                              0x5
#define nA_size                                  0x1
#define nA_value_mask                            0x20
#define nA_clear_mask                            0xDF

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

#define DATA_ADDRESS                             0x5
#define DATA_ADDRESS_address                     0xFC7
#define DATA_ADDRESS_position                    0x5
#define DATA_ADDRESS_size                        0x1
#define DATA_ADDRESS_value_mask                  0x20
#define DATA_ADDRESS_clear_mask                  0xDF

#define D_A                                      0x5
#define D_A_address                              0xFC7
#define D_A_position                             0x5
#define D_A_size                                 0x1
#define D_A_value_mask                           0x20
#define D_A_clear_mask                           0xDF

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


/*-----------------------------------------------------------------------#
| T2CON                                                            0xFCA |
#------------------------------------------------------------------------#
| - | TOUTPS3 | TOUTPS2 | TOUTPS1 | TOUTPS0 | TMR2ON | T2CKPS1 | T2CKPS0 |
#------------------------------------------------------------------------#
| 7 | 6       | 5       | 4       | 3       | 2      | 1       | 0       |
#-----------------------------------------------------------------------*/

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

#define TOUTPS0                                  0x3
#define TOUTPS0_address                          0xFCA
#define TOUTPS0_position                         0x3
#define TOUTPS0_size                             0x1
#define TOUTPS0_value_mask                       0x8
#define TOUTPS0_clear_mask                       0xF7

#define TOUTPS                                   0x3
#define TOUTPS_address                           0xFCA
#define TOUTPS_position                          0x3
#define TOUTPS_size                              0x4
#define TOUTPS_value_mask                        0x78
#define TOUTPS_clear_mask                        0x87

#define TOUTPS1                                  0x4
#define TOUTPS1_address                          0xFCA
#define TOUTPS1_position                         0x4
#define TOUTPS1_size                             0x1
#define TOUTPS1_value_mask                       0x10
#define TOUTPS1_clear_mask                       0xEF

#define TOUTPS2                                  0x5
#define TOUTPS2_address                          0xFCA
#define TOUTPS2_position                         0x5
#define TOUTPS2_size                             0x1
#define TOUTPS2_value_mask                       0x20
#define TOUTPS2_clear_mask                       0xDF

#define TOUTPS3                                  0x6
#define TOUTPS3_address                          0xFCA
#define TOUTPS3_position                         0x6
#define TOUTPS3_size                             0x1
#define TOUTPS3_value_mask                       0x40
#define TOUTPS3_clear_mask                       0xBF


/*----------------------------------------------#
| PR2                                     0xFCB |
#-----------------------------------------------#
| EBDIS | - | WAIT1 | WAIT0 | - | - | WM1 | WM0 |
#-----------------------------------------------#
| 7     | 6 | 5     | 4     | 3 | 2 | 1   | 0   |
#----------------------------------------------*/

#define PR2                                      0x0
#define PR2_address                              0xFCB
#define PR2_position                             0x0
#define PR2_size                                 0x8
#define PR2_value_mask                           0xFF
#define PR2_clear_mask                           0x0

#define WM0                                      0x0
#define WM0_address                              0xFCB
#define WM0_position                             0x0
#define WM0_size                                 0x1
#define WM0_value_mask                           0x1
#define WM0_clear_mask                           0xFE

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


/*------------------------------------------------------------------------#
| T1CON                                                             0xFCD |
#-------------------------------------------------------------------------#
| T1RD16 | - | T1CKPS1 | T1CKPS0 | T1OSCEN | NOT_T1SYNC | TMR1CS | TMR1ON |
#-------------------------------------------------------------------------#
| 7      | 6 | 5       | 4       | 3       | 2          | 1      | 0      |
#------------------------------------------------------------------------*/

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
| nIPEN | - | - | nRI | TO | NOT_PD | NOT_POR | BOR |
#---------------------------------------------------#
| 7     | 6 | 5 | 4   | 3  | 2      | 1       | 0   |
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

#define PD                                       0x2
#define PD_address                               0xFD0
#define PD_position                              0x2
#define PD_size                                  0x1
#define PD_value_mask                            0x4
#define PD_clear_mask                            0xFB

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

#define nIPEN                                    0x7
#define nIPEN_address                            0xFD0
#define nIPEN_position                           0x7
#define nIPEN_size                               0x1
#define nIPEN_value_mask                         0x80
#define nIPEN_clear_mask                         0x7F

#define IPEN                                     0x7
#define IPEN_address                             0xFD0
#define IPEN_position                            0x7
#define IPEN_size                                0x1
#define IPEN_value_mask                          0x80
#define IPEN_clear_mask                          0x7F

#define NOT_IPEN                                 0x7
#define NOT_IPEN_address                         0xFD0
#define NOT_IPEN_position                        0x7
#define NOT_IPEN_size                            0x1
#define NOT_IPEN_value_mask                      0x80
#define NOT_IPEN_clear_mask                      0x7F


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


/*------------------------------------------------------#
| LVDCON                                          0xFD2 |
#-------------------------------------------------------#
| - | - | IRVST | LVDEN | LVDL3 | LVDL2 | LVDL1 | LVDL0 |
#-------------------------------------------------------#
| 7 | 6 | 5     | 4     | 3     | 2     | 1     | 0     |
#------------------------------------------------------*/

#define LVDCON                                   0x0
#define LVDCON_address                           0xFD2
#define LVDCON_position                          0x0
#define LVDCON_size                              0x8
#define LVDCON_value_mask                        0xFF
#define LVDCON_clear_mask                        0x0

#define LVDL0                                    0x0
#define LVDL0_address                            0xFD2
#define LVDL0_position                           0x0
#define LVDL0_size                               0x1
#define LVDL0_value_mask                         0x1
#define LVDL0_clear_mask                         0xFE

#define LVDL                                     0x0
#define LVDL_address                             0xFD2
#define LVDL_position                            0x0
#define LVDL_size                                0x4
#define LVDL_value_mask                          0xF
#define LVDL_clear_mask                          0xF0

#define LVDL1                                    0x1
#define LVDL1_address                            0xFD2
#define LVDL1_position                           0x1
#define LVDL1_size                               0x1
#define LVDL1_value_mask                         0x2
#define LVDL1_clear_mask                         0xFD

#define LVDL2                                    0x2
#define LVDL2_address                            0xFD2
#define LVDL2_position                           0x2
#define LVDL2_size                               0x1
#define LVDL2_value_mask                         0x4
#define LVDL2_clear_mask                         0xFB

#define LVDL3                                    0x3
#define LVDL3_address                            0xFD2
#define LVDL3_position                           0x3
#define LVDL3_size                               0x1
#define LVDL3_value_mask                         0x8
#define LVDL3_clear_mask                         0xF7

#define LVDEN                                    0x4
#define LVDEN_address                            0xFD2
#define LVDEN_position                           0x4
#define LVDEN_size                               0x1
#define LVDEN_value_mask                         0x10
#define LVDEN_clear_mask                         0xEF

#define IRVST                                    0x5
#define IRVST_address                            0xFD2
#define IRVST_position                           0x5
#define IRVST_size                               0x1
#define IRVST_value_mask                         0x20
#define IRVST_clear_mask                         0xDF

#define IVRST                                    0x5
#define IVRST_address                            0xFD2
#define IVRST_position                           0x5
#define IVRST_size                               0x1
#define IVRST_value_mask                         0x20
#define IVRST_clear_mask                         0xDF


/*--------------------------------#
| OSCCON                    0xFD3 |
#---------------------------------#
| - | - | - | - | - | - | - | SCS |
#---------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0   |
#--------------------------------*/

#define OSCCON                                   0x0
#define OSCCON_address                           0xFD3
#define OSCCON_position                          0x0
#define OSCCON_size                              0x8
#define OSCCON_value_mask                        0xFF
#define OSCCON_clear_mask                        0x0

#define SCS                                      0x0
#define SCS_address                              0xFD3
#define SCS_position                             0x0
#define SCS_size                                 0x1
#define SCS_value_mask                           0x1
#define SCS_clear_mask                           0xFE


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


/*-----------------------------------------------------------#
| INTCON3                                              0xFF0 |
#------------------------------------------------------------#
| INT2IP | INT1P | - | INT2IE | INT1IE | - | INT2IF | INT1IF |
#------------------------------------------------------------#
| 7      | 6     | 5 | 4      | 3      | 2 | 1      | 0      |
#-----------------------------------------------------------*/

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


/*-----------------------------------------------------------#
| INTCON2                                              0xFF1 |
#------------------------------------------------------------#
| RBPU | INTEDG0 | INTEDG1 | INTEDG2 | - | TMR0IP | - | RBIP |
#------------------------------------------------------------#
| 7    | 6       | 5       | 4       | 3 | 2      | 1 | 0    |
#-----------------------------------------------------------*/

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

#define SP0                                      0x0
#define SP0_address                              0xFFC
#define SP0_position                             0x0
#define SP0_size                                 0x1
#define SP0_value_mask                           0x1
#define SP0_clear_mask                           0xFE

#define STKPTR1                                  0x1
#define STKPTR1_address                          0xFFC
#define STKPTR1_position                         0x1
#define STKPTR1_size                             0x1
#define STKPTR1_value_mask                       0x2
#define STKPTR1_clear_mask                       0xFD

#define SP1                                      0x1
#define SP1_address                              0xFFC
#define SP1_position                             0x1
#define SP1_size                                 0x1
#define SP1_value_mask                           0x2
#define SP1_clear_mask                           0xFD

#define STKPTR2                                  0x2
#define STKPTR2_address                          0xFFC
#define STKPTR2_position                         0x2
#define STKPTR2_size                             0x1
#define STKPTR2_value_mask                       0x4
#define STKPTR2_clear_mask                       0xFB

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

#endif // _PIC18F258_H_
