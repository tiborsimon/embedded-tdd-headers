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

#ifndef _PIC18LF2331_H_
#define _PIC18LF2331_H_


/*-----------------------------------------------------------------#
| DFLTCON                                                    0xF60 |
#------------------------------------------------------------------#
| - | FLT4EN | FLT3EN | FLT2EN | FLT1EN | FLTCK2 | FLTCK1 | FLTCK0 |
#------------------------------------------------------------------#
| 7 | 6      | 5      | 4      | 3      | 2      | 1      | 0      |
#-----------------------------------------------------------------*/

#define DFLTCON                                  0x0
#define DFLTCON_address                          0xF60
#define DFLTCON_position                         0x0
#define DFLTCON_size                             0x8
#define DFLTCON_value_mask                       0xFF
#define DFLTCON_clear_mask                       0x0

#define FLTCK0                                   0x0
#define FLTCK0_address                           0xF60
#define FLTCK0_position                          0x0
#define FLTCK0_size                              0x1
#define FLTCK0_value_mask                        0x1
#define FLTCK0_clear_mask                        0xFE

#define FLTCK                                    0x0
#define FLTCK_address                            0xF60
#define FLTCK_position                           0x0
#define FLTCK_size                               0x3
#define FLTCK_value_mask                         0x7
#define FLTCK_clear_mask                         0xF8

#define FLTCK1                                   0x1
#define FLTCK1_address                           0xF60
#define FLTCK1_position                          0x1
#define FLTCK1_size                              0x1
#define FLTCK1_value_mask                        0x2
#define FLTCK1_clear_mask                        0xFD

#define FLTCK2                                   0x2
#define FLTCK2_address                           0xF60
#define FLTCK2_position                          0x2
#define FLTCK2_size                              0x1
#define FLTCK2_value_mask                        0x4
#define FLTCK2_clear_mask                        0xFB

#define FLT1EN                                   0x3
#define FLT1EN_address                           0xF60
#define FLT1EN_position                          0x3
#define FLT1EN_size                              0x1
#define FLT1EN_value_mask                        0x8
#define FLT1EN_clear_mask                        0xF7

#define FLT2EN                                   0x4
#define FLT2EN_address                           0xF60
#define FLT2EN_position                          0x4
#define FLT2EN_size                              0x1
#define FLT2EN_value_mask                        0x10
#define FLT2EN_clear_mask                        0xEF

#define FLT3EN                                   0x5
#define FLT3EN_address                           0xF60
#define FLT3EN_position                          0x5
#define FLT3EN_size                              0x1
#define FLT3EN_value_mask                        0x20
#define FLT3EN_clear_mask                        0xDF

#define FLT4EN                                   0x6
#define FLT4EN_address                           0xF60
#define FLT4EN_position                          0x6
#define FLT4EN_size                              0x1
#define FLT4EN_value_mask                        0x40
#define FLT4EN_clear_mask                        0xBF


/*--------------------------------------------------------------#
| CAP3CON                                                 0xF61 |
#---------------------------------------------------------------#
| - | CAP3REN | CAP3TMR | - | CAP3M3 | CAP3M2 | CAP3M1 | CAP3M0 |
#---------------------------------------------------------------#
| 7 | 6       | 5       | 4 | 3      | 2      | 1      | 0      |
#--------------------------------------------------------------*/

#define CAP3CON                                  0x0
#define CAP3CON_address                          0xF61
#define CAP3CON_position                         0x0
#define CAP3CON_size                             0x8
#define CAP3CON_value_mask                       0xFF
#define CAP3CON_clear_mask                       0x0

#define CAP3M                                    0x0
#define CAP3M_address                            0xF61
#define CAP3M_position                           0x0
#define CAP3M_size                               0x4
#define CAP3M_value_mask                         0xF
#define CAP3M_clear_mask                         0xF0

#define CAP3M0                                   0x0
#define CAP3M0_address                           0xF61
#define CAP3M0_position                          0x0
#define CAP3M0_size                              0x1
#define CAP3M0_value_mask                        0x1
#define CAP3M0_clear_mask                        0xFE

#define CAP3M1                                   0x1
#define CAP3M1_address                           0xF61
#define CAP3M1_position                          0x1
#define CAP3M1_size                              0x1
#define CAP3M1_value_mask                        0x2
#define CAP3M1_clear_mask                        0xFD

#define CAP3M2                                   0x2
#define CAP3M2_address                           0xF61
#define CAP3M2_position                          0x2
#define CAP3M2_size                              0x1
#define CAP3M2_value_mask                        0x4
#define CAP3M2_clear_mask                        0xFB

#define CAP3M3                                   0x3
#define CAP3M3_address                           0xF61
#define CAP3M3_position                          0x3
#define CAP3M3_size                              0x1
#define CAP3M3_value_mask                        0x8
#define CAP3M3_clear_mask                        0xF7

#define CAP3TMR                                  0x5
#define CAP3TMR_address                          0xF61
#define CAP3TMR_position                         0x5
#define CAP3TMR_size                             0x1
#define CAP3TMR_value_mask                       0x20
#define CAP3TMR_clear_mask                       0xDF

#define CAP3REN                                  0x6
#define CAP3REN_address                          0xF61
#define CAP3REN_position                         0x6
#define CAP3REN_size                             0x1
#define CAP3REN_value_mask                       0x40
#define CAP3REN_clear_mask                       0xBF


/*--------------------------------------------------------------#
| CAP2CON                                                 0xF62 |
#---------------------------------------------------------------#
| - | CAP2REN | CAP2TMR | - | CAP2M3 | CAP2M2 | CAP2M1 | CAP2M0 |
#---------------------------------------------------------------#
| 7 | 6       | 5       | 4 | 3      | 2      | 1      | 0      |
#--------------------------------------------------------------*/

#define CAP2CON                                  0x0
#define CAP2CON_address                          0xF62
#define CAP2CON_position                         0x0
#define CAP2CON_size                             0x8
#define CAP2CON_value_mask                       0xFF
#define CAP2CON_clear_mask                       0x0

#define CAP2M0                                   0x0
#define CAP2M0_address                           0xF62
#define CAP2M0_position                          0x0
#define CAP2M0_size                              0x1
#define CAP2M0_value_mask                        0x1
#define CAP2M0_clear_mask                        0xFE

#define CAP2M                                    0x0
#define CAP2M_address                            0xF62
#define CAP2M_position                           0x0
#define CAP2M_size                               0x4
#define CAP2M_value_mask                         0xF
#define CAP2M_clear_mask                         0xF0

#define CAP2M1                                   0x1
#define CAP2M1_address                           0xF62
#define CAP2M1_position                          0x1
#define CAP2M1_size                              0x1
#define CAP2M1_value_mask                        0x2
#define CAP2M1_clear_mask                        0xFD

#define CAP2M2                                   0x2
#define CAP2M2_address                           0xF62
#define CAP2M2_position                          0x2
#define CAP2M2_size                              0x1
#define CAP2M2_value_mask                        0x4
#define CAP2M2_clear_mask                        0xFB

#define CAP2M3                                   0x3
#define CAP2M3_address                           0xF62
#define CAP2M3_position                          0x3
#define CAP2M3_size                              0x1
#define CAP2M3_value_mask                        0x8
#define CAP2M3_clear_mask                        0xF7

#define CAP2TMR                                  0x5
#define CAP2TMR_address                          0xF62
#define CAP2TMR_position                         0x5
#define CAP2TMR_size                             0x1
#define CAP2TMR_value_mask                       0x20
#define CAP2TMR_clear_mask                       0xDF

#define CAP2REN                                  0x6
#define CAP2REN_address                          0xF62
#define CAP2REN_position                         0x6
#define CAP2REN_size                             0x1
#define CAP2REN_value_mask                       0x40
#define CAP2REN_clear_mask                       0xBF


/*--------------------------------------------------------------#
| CAP1CON                                                 0xF63 |
#---------------------------------------------------------------#
| - | CAP1REN | CAP1TMR | - | CAP1M3 | CAP1M2 | CAP1M1 | CAP1M0 |
#---------------------------------------------------------------#
| 7 | 6       | 5       | 4 | 3      | 2      | 1      | 0      |
#--------------------------------------------------------------*/

#define CAP1CON                                  0x0
#define CAP1CON_address                          0xF63
#define CAP1CON_position                         0x0
#define CAP1CON_size                             0x8
#define CAP1CON_value_mask                       0xFF
#define CAP1CON_clear_mask                       0x0

#define CAP1M                                    0x0
#define CAP1M_address                            0xF63
#define CAP1M_position                           0x0
#define CAP1M_size                               0x4
#define CAP1M_value_mask                         0xF
#define CAP1M_clear_mask                         0xF0

#define CAP1M0                                   0x0
#define CAP1M0_address                           0xF63
#define CAP1M0_position                          0x0
#define CAP1M0_size                              0x1
#define CAP1M0_value_mask                        0x1
#define CAP1M0_clear_mask                        0xFE

#define CAP1M1                                   0x1
#define CAP1M1_address                           0xF63
#define CAP1M1_position                          0x1
#define CAP1M1_size                              0x1
#define CAP1M1_value_mask                        0x2
#define CAP1M1_clear_mask                        0xFD

#define CAP1M2                                   0x2
#define CAP1M2_address                           0xF63
#define CAP1M2_position                          0x2
#define CAP1M2_size                              0x1
#define CAP1M2_value_mask                        0x4
#define CAP1M2_clear_mask                        0xFB

#define CAP1M3                                   0x3
#define CAP1M3_address                           0xF63
#define CAP1M3_position                          0x3
#define CAP1M3_size                              0x1
#define CAP1M3_value_mask                        0x8
#define CAP1M3_clear_mask                        0xF7

#define CAP1TMR                                  0x5
#define CAP1TMR_address                          0xF63
#define CAP1TMR_position                         0x5
#define CAP1TMR_size                             0x1
#define CAP1TMR_value_mask                       0x20
#define CAP1TMR_clear_mask                       0xDF

#define CAP1REN                                  0x6
#define CAP1REN_address                          0xF63
#define CAP1REN_position                         0x6
#define CAP1REN_size                             0x1
#define CAP1REN_value_mask                       0x40
#define CAP1REN_clear_mask                       0xBF


/*--------------------------------------------------------------#
| OVDCONS                                                 0xF6A |
#---------------------------------------------------------------#
| POUT7 | POUT6 | POUT5 | POUT4 | POUT3 | POUT2 | POUT1 | POUT0 |
#---------------------------------------------------------------#
| 7     | 6     | 5     | 4     | 3     | 2     | 1     | 0     |
#--------------------------------------------------------------*/

#define OVDCONS                                  0x0
#define OVDCONS_address                          0xF6A
#define OVDCONS_position                         0x0
#define OVDCONS_size                             0x8
#define OVDCONS_value_mask                       0xFF
#define OVDCONS_clear_mask                       0x0

#define POUT                                     0x0
#define POUT_address                             0xF6A
#define POUT_position                            0x0
#define POUT_size                                0x8
#define POUT_value_mask                          0xFF
#define POUT_clear_mask                          0x0

#define POUT0                                    0x0
#define POUT0_address                            0xF6A
#define POUT0_position                           0x0
#define POUT0_size                               0x1
#define POUT0_value_mask                         0x1
#define POUT0_clear_mask                         0xFE

#define POUT1                                    0x1
#define POUT1_address                            0xF6A
#define POUT1_position                           0x1
#define POUT1_size                               0x1
#define POUT1_value_mask                         0x2
#define POUT1_clear_mask                         0xFD

#define POUT2                                    0x2
#define POUT2_address                            0xF6A
#define POUT2_position                           0x2
#define POUT2_size                               0x1
#define POUT2_value_mask                         0x4
#define POUT2_clear_mask                         0xFB

#define POUT3                                    0x3
#define POUT3_address                            0xF6A
#define POUT3_position                           0x3
#define POUT3_size                               0x1
#define POUT3_value_mask                         0x8
#define POUT3_clear_mask                         0xF7

#define POUT4                                    0x4
#define POUT4_address                            0xF6A
#define POUT4_position                           0x4
#define POUT4_size                               0x1
#define POUT4_value_mask                         0x10
#define POUT4_clear_mask                         0xEF

#define POUT5                                    0x5
#define POUT5_address                            0xF6A
#define POUT5_position                           0x5
#define POUT5_size                               0x1
#define POUT5_value_mask                         0x20
#define POUT5_clear_mask                         0xDF

#define POUT6                                    0x6
#define POUT6_address                            0xF6A
#define POUT6_position                           0x6
#define POUT6_size                               0x1
#define POUT6_value_mask                         0x40
#define POUT6_clear_mask                         0xBF

#define POUT7                                    0x7
#define POUT7_address                            0xF6A
#define POUT7_position                           0x7
#define POUT7_size                               0x1
#define POUT7_value_mask                         0x80
#define POUT7_clear_mask                         0x7F


/*--------------------------------------------------------------#
| OVDCOND                                                 0xF6B |
#---------------------------------------------------------------#
| POVD7 | POVD6 | POVD5 | POVD4 | POVD3 | POVD2 | POVD1 | POVD0 |
#---------------------------------------------------------------#
| 7     | 6     | 5     | 4     | 3     | 2     | 1     | 0     |
#--------------------------------------------------------------*/

#define OVDCOND                                  0x0
#define OVDCOND_address                          0xF6B
#define OVDCOND_position                         0x0
#define OVDCOND_size                             0x8
#define OVDCOND_value_mask                       0xFF
#define OVDCOND_clear_mask                       0x0

#define POVD                                     0x0
#define POVD_address                             0xF6B
#define POVD_position                            0x0
#define POVD_size                                0x8
#define POVD_value_mask                          0xFF
#define POVD_clear_mask                          0x0

#define POVD0                                    0x0
#define POVD0_address                            0xF6B
#define POVD0_position                           0x0
#define POVD0_size                               0x1
#define POVD0_value_mask                         0x1
#define POVD0_clear_mask                         0xFE

#define POVD1                                    0x1
#define POVD1_address                            0xF6B
#define POVD1_position                           0x1
#define POVD1_size                               0x1
#define POVD1_value_mask                         0x2
#define POVD1_clear_mask                         0xFD

#define POVD2                                    0x2
#define POVD2_address                            0xF6B
#define POVD2_position                           0x2
#define POVD2_size                               0x1
#define POVD2_value_mask                         0x4
#define POVD2_clear_mask                         0xFB

#define POVD3                                    0x3
#define POVD3_address                            0xF6B
#define POVD3_position                           0x3
#define POVD3_size                               0x1
#define POVD3_value_mask                         0x8
#define POVD3_clear_mask                         0xF7

#define POVD4                                    0x4
#define POVD4_address                            0xF6B
#define POVD4_position                           0x4
#define POVD4_size                               0x1
#define POVD4_value_mask                         0x10
#define POVD4_clear_mask                         0xEF

#define POVD5                                    0x5
#define POVD5_address                            0xF6B
#define POVD5_position                           0x5
#define POVD5_size                               0x1
#define POVD5_value_mask                         0x20
#define POVD5_clear_mask                         0xDF

#define POVD6                                    0x6
#define POVD6_address                            0xF6B
#define POVD6_position                           0x6
#define POVD6_size                               0x1
#define POVD6_value_mask                         0x40
#define POVD6_clear_mask                         0xBF

#define POVD7                                    0x7
#define POVD7_address                            0xF6B
#define POVD7_position                           0x7
#define POVD7_size                               0x1
#define POVD7_value_mask                         0x80
#define POVD7_clear_mask                         0x7F


/*---------------------------------------------------------------------#
| FLTCONFIG                                                      0xF6C |
#----------------------------------------------------------------------#
| BRFEN | FLTBS | FLTBMOD | FLTBEN | FLTCON | FLTAS | FLTAMOD | FLTAEN |
#----------------------------------------------------------------------#
| 7     | 6     | 5       | 4      | 3      | 2     | 1       | 0      |
#---------------------------------------------------------------------*/

#define FLTCONFIG                                0x0
#define FLTCONFIG_address                        0xF6C
#define FLTCONFIG_position                       0x0
#define FLTCONFIG_size                           0x8
#define FLTCONFIG_value_mask                     0xFF
#define FLTCONFIG_clear_mask                     0x0

#define FLTAEN                                   0x0
#define FLTAEN_address                           0xF6C
#define FLTAEN_position                          0x0
#define FLTAEN_size                              0x1
#define FLTAEN_value_mask                        0x1
#define FLTAEN_clear_mask                        0xFE

#define FLTAMOD                                  0x1
#define FLTAMOD_address                          0xF6C
#define FLTAMOD_position                         0x1
#define FLTAMOD_size                             0x1
#define FLTAMOD_value_mask                       0x2
#define FLTAMOD_clear_mask                       0xFD

#define FLTAS                                    0x2
#define FLTAS_address                            0xF6C
#define FLTAS_position                           0x2
#define FLTAS_size                               0x1
#define FLTAS_value_mask                         0x4
#define FLTAS_clear_mask                         0xFB

#define FLTCON                                   0x3
#define FLTCON_address                           0xF6C
#define FLTCON_position                          0x3
#define FLTCON_size                              0x1
#define FLTCON_value_mask                        0x8
#define FLTCON_clear_mask                        0xF7

#define FLTBEN                                   0x4
#define FLTBEN_address                           0xF6C
#define FLTBEN_position                          0x4
#define FLTBEN_size                              0x1
#define FLTBEN_value_mask                        0x10
#define FLTBEN_clear_mask                        0xEF

#define FLTBMOD                                  0x5
#define FLTBMOD_address                          0xF6C
#define FLTBMOD_position                         0x5
#define FLTBMOD_size                             0x1
#define FLTBMOD_value_mask                       0x20
#define FLTBMOD_clear_mask                       0xDF

#define FLTBS                                    0x6
#define FLTBS_address                            0xF6C
#define FLTBS_position                           0x6
#define FLTBS_size                               0x1
#define FLTBS_value_mask                         0x40
#define FLTBS_clear_mask                         0xBF

#define BRFEN                                    0x7
#define BRFEN_address                            0xF6C
#define BRFEN_position                           0x7
#define BRFEN_size                               0x1
#define BRFEN_value_mask                         0x80
#define BRFEN_clear_mask                         0x7F


/*----------------------------------------------------------#
| DTCON                                               0xF6D |
#-----------------------------------------------------------#
| DTAPS1 | DTAPS0 | DTA5 | DTA4 | DTA3 | DTA2 | DTA1 | DTA0 |
#-----------------------------------------------------------#
| 7      | 6      | 5    | 4    | 3    | 2    | 1    | 0    |
#----------------------------------------------------------*/

#define DTCON                                    0x0
#define DTCON_address                            0xF6D
#define DTCON_position                           0x0
#define DTCON_size                               0x8
#define DTCON_value_mask                         0xFF
#define DTCON_clear_mask                         0x0

#define DTA                                      0x0
#define DTA_address                              0xF6D
#define DTA_position                             0x0
#define DTA_size                                 0x6
#define DTA_value_mask                           0x3F
#define DTA_clear_mask                           0xC0

#define DTA0                                     0x0
#define DTA0_address                             0xF6D
#define DTA0_position                            0x0
#define DTA0_size                                0x1
#define DTA0_value_mask                          0x1
#define DTA0_clear_mask                          0xFE

#define DT0                                      0x0
#define DT0_address                              0xF6D
#define DT0_position                             0x0
#define DT0_size                                 0x1
#define DT0_value_mask                           0x1
#define DT0_clear_mask                           0xFE

#define DTA1                                     0x1
#define DTA1_address                             0xF6D
#define DTA1_position                            0x1
#define DTA1_size                                0x1
#define DTA1_value_mask                          0x2
#define DTA1_clear_mask                          0xFD

#define DT1                                      0x1
#define DT1_address                              0xF6D
#define DT1_position                             0x1
#define DT1_size                                 0x1
#define DT1_value_mask                           0x2
#define DT1_clear_mask                           0xFD

#define DTA2                                     0x2
#define DTA2_address                             0xF6D
#define DTA2_position                            0x2
#define DTA2_size                                0x1
#define DTA2_value_mask                          0x4
#define DTA2_clear_mask                          0xFB

#define DT2                                      0x2
#define DT2_address                              0xF6D
#define DT2_position                             0x2
#define DT2_size                                 0x1
#define DT2_value_mask                           0x4
#define DT2_clear_mask                           0xFB

#define DTA3                                     0x3
#define DTA3_address                             0xF6D
#define DTA3_position                            0x3
#define DTA3_size                                0x1
#define DTA3_value_mask                          0x8
#define DTA3_clear_mask                          0xF7

#define DT3                                      0x3
#define DT3_address                              0xF6D
#define DT3_position                             0x3
#define DT3_size                                 0x1
#define DT3_value_mask                           0x8
#define DT3_clear_mask                           0xF7

#define DTA4                                     0x4
#define DTA4_address                             0xF6D
#define DTA4_position                            0x4
#define DTA4_size                                0x1
#define DTA4_value_mask                          0x10
#define DTA4_clear_mask                          0xEF

#define DT4                                      0x4
#define DT4_address                              0xF6D
#define DT4_position                             0x4
#define DT4_size                                 0x1
#define DT4_value_mask                           0x10
#define DT4_clear_mask                           0xEF

#define DTA5                                     0x5
#define DTA5_address                             0xF6D
#define DTA5_position                            0x5
#define DTA5_size                                0x1
#define DTA5_value_mask                          0x20
#define DTA5_clear_mask                          0xDF

#define DT5                                      0x5
#define DT5_address                              0xF6D
#define DT5_position                             0x5
#define DT5_size                                 0x1
#define DT5_value_mask                           0x20
#define DT5_clear_mask                           0xDF

#define DTAPS0                                   0x6
#define DTAPS0_address                           0xF6D
#define DTAPS0_position                          0x6
#define DTAPS0_size                              0x1
#define DTAPS0_value_mask                        0x40
#define DTAPS0_clear_mask                        0xBF

#define DTPS0                                    0x6
#define DTPS0_address                            0xF6D
#define DTPS0_position                           0x6
#define DTPS0_size                               0x1
#define DTPS0_value_mask                         0x40
#define DTPS0_clear_mask                         0xBF

#define DTAPS                                    0x6
#define DTAPS_address                            0xF6D
#define DTAPS_position                           0x6
#define DTAPS_size                               0x2
#define DTAPS_value_mask                         0xC0
#define DTAPS_clear_mask                         0x3F

#define DTAPS1                                   0x7
#define DTAPS1_address                           0xF6D
#define DTAPS1_position                          0x7
#define DTAPS1_size                              0x1
#define DTAPS1_value_mask                        0x80
#define DTAPS1_clear_mask                        0x7F

#define DTPS1                                    0x7
#define DTPS1_address                            0xF6D
#define DTPS1_position                           0x7
#define DTPS1_size                               0x1
#define DTPS1_value_mask                         0x80
#define DTPS1_clear_mask                         0x7F


/*-------------------------------------------------------------------#
| PWMCON1                                                      0xF6E |
#--------------------------------------------------------------------#
| SEVOPS3 | SEVOPS2 | SEVOPS1 | SEVOPS0 | SEVTDIR | - | UDIS | OSYNC |
#--------------------------------------------------------------------#
| 7       | 6       | 5       | 4       | 3       | 2 | 1    | 0     |
#-------------------------------------------------------------------*/

#define PWMCON1                                  0x0
#define PWMCON1_address                          0xF6E
#define PWMCON1_position                         0x0
#define PWMCON1_size                             0x8
#define PWMCON1_value_mask                       0xFF
#define PWMCON1_clear_mask                       0x0

#define OSYNC                                    0x0
#define OSYNC_address                            0xF6E
#define OSYNC_position                           0x0
#define OSYNC_size                               0x1
#define OSYNC_value_mask                         0x1
#define OSYNC_clear_mask                         0xFE

#define UDIS                                     0x1
#define UDIS_address                             0xF6E
#define UDIS_position                            0x1
#define UDIS_size                                0x1
#define UDIS_value_mask                          0x2
#define UDIS_clear_mask                          0xFD

#define SEVTDIR                                  0x3
#define SEVTDIR_address                          0xF6E
#define SEVTDIR_position                         0x3
#define SEVTDIR_size                             0x1
#define SEVTDIR_value_mask                       0x8
#define SEVTDIR_clear_mask                       0xF7

#define SEVOPS0                                  0x4
#define SEVOPS0_address                          0xF6E
#define SEVOPS0_position                         0x4
#define SEVOPS0_size                             0x1
#define SEVOPS0_value_mask                       0x10
#define SEVOPS0_clear_mask                       0xEF

#define SEVOPS                                   0x4
#define SEVOPS_address                           0xF6E
#define SEVOPS_position                          0x4
#define SEVOPS_size                              0x4
#define SEVOPS_value_mask                        0xF0
#define SEVOPS_clear_mask                        0xF

#define SEVOPS1                                  0x5
#define SEVOPS1_address                          0xF6E
#define SEVOPS1_position                         0x5
#define SEVOPS1_size                             0x1
#define SEVOPS1_value_mask                       0x20
#define SEVOPS1_clear_mask                       0xDF

#define SEVOPS2                                  0x6
#define SEVOPS2_address                          0xF6E
#define SEVOPS2_position                         0x6
#define SEVOPS2_size                             0x1
#define SEVOPS2_value_mask                       0x40
#define SEVOPS2_clear_mask                       0xBF

#define SEVOPS3                                  0x7
#define SEVOPS3_address                          0xF6E
#define SEVOPS3_position                         0x7
#define SEVOPS3_size                             0x1
#define SEVOPS3_value_mask                       0x80
#define SEVOPS3_clear_mask                       0x7F


/*-------------------------------------------------------------#
| PWMCON0                                                0xF6F |
#--------------------------------------------------------------#
| - | PWMEN2 | PWMEN1 | PWMEN0 | PMOD3 | PMOD2 | PMOD1 | PMOD0 |
#--------------------------------------------------------------#
| 7 | 6      | 5      | 4      | 3     | 2     | 1     | 0     |
#-------------------------------------------------------------*/

#define PWMCON0                                  0x0
#define PWMCON0_address                          0xF6F
#define PWMCON0_position                         0x0
#define PWMCON0_size                             0x8
#define PWMCON0_value_mask                       0xFF
#define PWMCON0_clear_mask                       0x0

#define PMOD                                     0x0
#define PMOD_address                             0xF6F
#define PMOD_position                            0x0
#define PMOD_size                                0x4
#define PMOD_value_mask                          0xF
#define PMOD_clear_mask                          0xF0

#define PMOD0                                    0x0
#define PMOD0_address                            0xF6F
#define PMOD0_position                           0x0
#define PMOD0_size                               0x1
#define PMOD0_value_mask                         0x1
#define PMOD0_clear_mask                         0xFE

#define PMOD1                                    0x1
#define PMOD1_address                            0xF6F
#define PMOD1_position                           0x1
#define PMOD1_size                               0x1
#define PMOD1_value_mask                         0x2
#define PMOD1_clear_mask                         0xFD

#define PMOD2                                    0x2
#define PMOD2_address                            0xF6F
#define PMOD2_position                           0x2
#define PMOD2_size                               0x1
#define PMOD2_value_mask                         0x4
#define PMOD2_clear_mask                         0xFB

#define PMOD3                                    0x3
#define PMOD3_address                            0xF6F
#define PMOD3_position                           0x3
#define PMOD3_size                               0x1
#define PMOD3_value_mask                         0x8
#define PMOD3_clear_mask                         0xF7

#define PWMEN                                    0x4
#define PWMEN_address                            0xF6F
#define PWMEN_position                           0x4
#define PWMEN_size                               0x3
#define PWMEN_value_mask                         0x70
#define PWMEN_clear_mask                         0x8F

#define PWMEN0                                   0x4
#define PWMEN0_address                           0xF6F
#define PWMEN0_position                          0x4
#define PWMEN0_size                              0x1
#define PWMEN0_value_mask                        0x10
#define PWMEN0_clear_mask                        0xEF

#define PWMEN1                                   0x5
#define PWMEN1_address                           0xF6F
#define PWMEN1_position                          0x5
#define PWMEN1_size                              0x1
#define PWMEN1_value_mask                        0x20
#define PWMEN1_clear_mask                        0xDF

#define PWMEN2                                   0x6
#define PWMEN2_address                           0xF6F
#define PWMEN2_position                          0x6
#define PWMEN2_size                              0x1
#define PWMEN2_value_mask                        0x40
#define PWMEN2_clear_mask                        0xBF


/*-------------------------------------#
| PTCON1                         0xF7E |
#--------------------------------------#
| PTEN | PTDIR | - | - | - | - | - | - |
#--------------------------------------#
| 7    | 6     | 5 | 4 | 3 | 2 | 1 | 0 |
#-------------------------------------*/

#define PTCON1                                   0x0
#define PTCON1_address                           0xF7E
#define PTCON1_position                          0x0
#define PTCON1_size                              0x8
#define PTCON1_value_mask                        0xFF
#define PTCON1_clear_mask                        0x0

#define PTDIR                                    0x6
#define PTDIR_address                            0xF7E
#define PTDIR_position                           0x6
#define PTDIR_size                               0x1
#define PTDIR_value_mask                         0x40
#define PTDIR_clear_mask                         0xBF

#define PTEN                                     0x7
#define PTEN_address                             0xF7E
#define PTEN_position                            0x7
#define PTEN_size                                0x1
#define PTEN_value_mask                          0x80
#define PTEN_clear_mask                          0x7F


/*------------------------------------------------------------------------#
| PTCON0                                                            0xF7F |
#-------------------------------------------------------------------------#
| PTOPS3 | PTOPS2 | PTOPS1 | PTOPS0 | PTCKPS1 | PTCKPS0 | PTMOD1 | PTMOD0 |
#-------------------------------------------------------------------------#
| 7      | 6      | 5      | 4      | 3       | 2       | 1      | 0      |
#------------------------------------------------------------------------*/

#define PTCON0                                   0x0
#define PTCON0_address                           0xF7F
#define PTCON0_position                          0x0
#define PTCON0_size                              0x8
#define PTCON0_value_mask                        0xFF
#define PTCON0_clear_mask                        0x0

#define PTMOD                                    0x0
#define PTMOD_address                            0xF7F
#define PTMOD_position                           0x0
#define PTMOD_size                               0x2
#define PTMOD_value_mask                         0x3
#define PTMOD_clear_mask                         0xFC

#define PTMOD0                                   0x0
#define PTMOD0_address                           0xF7F
#define PTMOD0_position                          0x0
#define PTMOD0_size                              0x1
#define PTMOD0_value_mask                        0x1
#define PTMOD0_clear_mask                        0xFE

#define PTMOD1                                   0x1
#define PTMOD1_address                           0xF7F
#define PTMOD1_position                          0x1
#define PTMOD1_size                              0x1
#define PTMOD1_value_mask                        0x2
#define PTMOD1_clear_mask                        0xFD

#define PTCKPS0                                  0x2
#define PTCKPS0_address                          0xF7F
#define PTCKPS0_position                         0x2
#define PTCKPS0_size                             0x1
#define PTCKPS0_value_mask                       0x4
#define PTCKPS0_clear_mask                       0xFB

#define PTCKPS                                   0x2
#define PTCKPS_address                           0xF7F
#define PTCKPS_position                          0x2
#define PTCKPS_size                              0x2
#define PTCKPS_value_mask                        0xC
#define PTCKPS_clear_mask                        0xF3

#define PTCKPS1                                  0x3
#define PTCKPS1_address                          0xF7F
#define PTCKPS1_position                         0x3
#define PTCKPS1_size                             0x1
#define PTCKPS1_value_mask                       0x8
#define PTCKPS1_clear_mask                       0xF7

#define PTOPS                                    0x4
#define PTOPS_address                            0xF7F
#define PTOPS_position                           0x4
#define PTOPS_size                               0x4
#define PTOPS_value_mask                         0xF0
#define PTOPS_clear_mask                         0xF

#define PTOPS0                                   0x4
#define PTOPS0_address                           0xF7F
#define PTOPS0_position                          0x4
#define PTOPS0_size                              0x1
#define PTOPS0_value_mask                        0x10
#define PTOPS0_clear_mask                        0xEF

#define PTOPS1                                   0x5
#define PTOPS1_address                           0xF7F
#define PTOPS1_position                          0x5
#define PTOPS1_size                              0x1
#define PTOPS1_value_mask                        0x20
#define PTOPS1_clear_mask                        0xDF

#define PTOPS2                                   0x6
#define PTOPS2_address                           0xF7F
#define PTOPS2_position                          0x6
#define PTOPS2_size                              0x1
#define PTOPS2_value_mask                        0x40
#define PTOPS2_clear_mask                        0xBF

#define PTOPS3                                   0x7
#define PTOPS3_address                           0xF7F
#define PTOPS3_position                          0x7
#define PTOPS3_size                              0x1
#define PTOPS3_value_mask                        0x80
#define PTOPS3_clear_mask                        0x7F


/*--------------------------------------------------------------------#
| PORTA                                                         0xF80 |
#---------------------------------------------------------------------#
| CLKI | CLKO | - | PORTA_RA4 | VREFP | VREFM | PORTA_RA1 | PORTA_RA0 |
#---------------------------------------------------------------------#
| 7    | 6    | 5 | 4         | 3     | 2     | 1         | 0         |
#--------------------------------------------------------------------*/

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

#define AN4                                      0x4
#define AN4_address                              0xF80
#define AN4_position                             0x4
#define AN4_size                                 0x1
#define AN4_value_mask                           0x10
#define AN4_clear_mask                           0xEF

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

#define RJPU                                     0x7
#define RJPU_address                             0xF80
#define RJPU_position                            0x7
#define RJPU_size                                0x1
#define RJPU_value_mask                          0x80
#define RJPU_clear_mask                          0x7F


/*---------------------------------------------------------------------------------------------#
| PORTB                                                                                  0xF81 |
#----------------------------------------------------------------------------------------------#
| PORTB_RB7 | PORTB_RB6 | PORTB_RB5 | PORTB_RB4 | CCP2_PA2 | PORTB_RB2 | PORTB_RB1 | PORTB_RB0 |
#----------------------------------------------------------------------------------------------#
| 7         | 6         | 5         | 4         | 3        | 2         | 1         | 0         |
#---------------------------------------------------------------------------------------------*/

#define PORTB                                    0x0
#define PORTB_address                            0xF81
#define PORTB_position                           0x0
#define PORTB_size                               0x8
#define PORTB_value_mask                         0xFF
#define PORTB_clear_mask                         0x0

#define PORTB_RB0                                0x0
#define PORTB_RB0_address                        0xF81
#define PORTB_RB0_position                       0x0
#define PORTB_RB0_size                           0x1
#define PORTB_RB0_value_mask                     0x1
#define PORTB_RB0_clear_mask                     0xFE

#define PORTB_RB1                                0x1
#define PORTB_RB1_address                        0xF81
#define PORTB_RB1_position                       0x1
#define PORTB_RB1_size                           0x1
#define PORTB_RB1_value_mask                     0x2
#define PORTB_RB1_clear_mask                     0xFD

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

#define PORTB_RB5                                0x5
#define PORTB_RB5_address                        0xF81
#define PORTB_RB5_position                       0x5
#define PORTB_RB5_size                           0x1
#define PORTB_RB5_value_mask                     0x20
#define PORTB_RB5_clear_mask                     0xDF

#define PORTB_RB6                                0x6
#define PORTB_RB6_address                        0xF81
#define PORTB_RB6_position                       0x6
#define PORTB_RB6_size                           0x1
#define PORTB_RB6_value_mask                     0x40
#define PORTB_RB6_clear_mask                     0xBF

#define PORTB_RB7                                0x7
#define PORTB_RB7_address                        0xF81
#define PORTB_RB7_position                       0x7
#define PORTB_RB7_size                           0x1
#define PORTB_RB7_value_mask                     0x80
#define PORTB_RB7_clear_mask                     0x7F


/*----------------------------------------------------#
| PORTC                                         0xF82 |
#-----------------------------------------------------#
| DT | CK | SCL | SDI | INT0 | nFLTB | nFLTA | T13CKI |
#-----------------------------------------------------#
| 7  | 6  | 5   | 4   | 3    | 2     | 1     | 0      |
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

#define nFLTA                                    0x1
#define nFLTA_address                            0xF82
#define nFLTA_position                           0x1
#define nFLTA_size                               0x1
#define nFLTA_value_mask                         0x2
#define nFLTA_clear_mask                         0xFD

#define NOT_FLTA                                 0x1
#define NOT_FLTA_address                         0xF82
#define NOT_FLTA_position                        0x1
#define NOT_FLTA_size                            0x1
#define NOT_FLTA_value_mask                      0x2
#define NOT_FLTA_clear_mask                      0xFD

#define FLTA                                     0x1
#define FLTA_address                             0xF82
#define FLTA_position                            0x1
#define FLTA_size                                0x1
#define FLTA_value_mask                          0x2
#define FLTA_clear_mask                          0xFD

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

#define nFLTB                                    0x2
#define nFLTB_address                            0xF82
#define nFLTB_position                           0x2
#define nFLTB_size                               0x1
#define nFLTB_value_mask                         0x4
#define nFLTB_clear_mask                         0xFB

#define FLTB                                     0x2
#define FLTB_address                             0xF82
#define FLTB_position                            0x2
#define FLTB_size                                0x1
#define FLTB_value_mask                          0x4
#define FLTB_clear_mask                          0xFB

#define NOT_FLTB                                 0x2
#define NOT_FLTB_address                         0xF82
#define NOT_FLTB_position                        0x2
#define NOT_FLTB_size                            0x1
#define NOT_FLTB_value_mask                      0x4
#define NOT_FLTB_clear_mask                      0xFB

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

#define INT0                                     0x3
#define INT0_address                             0xF82
#define INT0_position                            0x3
#define INT0_size                                0x1
#define INT0_value_mask                          0x8
#define INT0_clear_mask                          0xF7

#define T0CKI                                    0x3
#define T0CKI_address                            0xF82
#define T0CKI_position                           0x3
#define T0CKI_size                               0x1
#define T0CKI_value_mask                         0x8
#define T0CKI_clear_mask                         0xF7

#define T5CKI                                    0x3
#define T5CKI_address                            0xF82
#define T5CKI_position                           0x3
#define T5CKI_size                               0x1
#define T5CKI_value_mask                         0x8
#define T5CKI_clear_mask                         0xF7

#define PORTC_RC3                                0x3
#define PORTC_RC3_address                        0xF82
#define PORTC_RC3_position                       0x3
#define PORTC_RC3_size                           0x1
#define PORTC_RC3_value_mask                     0x8
#define PORTC_RC3_clear_mask                     0xF7

#define INT1                                     0x4
#define INT1_address                             0xF82
#define INT1_position                            0x4
#define INT1_size                                0x1
#define INT1_value_mask                          0x10
#define INT1_clear_mask                          0xEF

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

#define SCL                                      0x5
#define SCL_address                              0xF82
#define SCL_position                             0x5
#define SCL_size                                 0x1
#define SCL_value_mask                           0x20
#define SCL_clear_mask                           0xDF

#define SCK                                      0x5
#define SCK_address                              0xF82
#define SCK_position                             0x5
#define SCK_size                                 0x1
#define SCK_value_mask                           0x20
#define SCK_clear_mask                           0xDF

#define INT2                                     0x5
#define INT2_address                             0xF82
#define INT2_position                            0x5
#define INT2_size                                0x1
#define INT2_value_mask                          0x20
#define INT2_clear_mask                          0xDF

#define PORTC_RC5                                0x5
#define PORTC_RC5_address                        0xF82
#define PORTC_RC5_position                       0x5
#define PORTC_RC5_size                           0x1
#define PORTC_RC5_value_mask                     0x20
#define PORTC_RC5_clear_mask                     0xDF

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

#define nSS                                      0x6
#define nSS_address                              0xF82
#define nSS_position                             0x6
#define nSS_size                                 0x1
#define nSS_value_mask                           0x40
#define nSS_clear_mask                           0xBF

#define NOT_SS                                   0x6
#define NOT_SS_address                           0xF82
#define NOT_SS_position                          0x6
#define NOT_SS_size                              0x1
#define NOT_SS_value_mask                        0x40
#define NOT_SS_clear_mask                        0xBF

#define TX                                       0x6
#define TX_address                               0xF82
#define TX_position                              0x6
#define TX_size                                  0x1
#define TX_value_mask                            0x40
#define TX_clear_mask                            0xBF

#define SS                                       0x6
#define SS_address                               0xF82
#define SS_position                              0x6
#define SS_size                                  0x1
#define SS_value_mask                            0x40
#define SS_clear_mask                            0xBF

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

#define SDO                                      0x7
#define SDO_address                              0xF82
#define SDO_position                             0x7
#define SDO_size                                 0x1
#define SDO_value_mask                           0x80
#define SDO_clear_mask                           0x7F

#define PORTC_RC7                                0x7
#define PORTC_RC7_address                        0xF82
#define PORTC_RC7_position                       0x7
#define PORTC_RC7_size                           0x1
#define PORTC_RC7_value_mask                     0x80
#define PORTC_RC7_clear_mask                     0x7F


/*--------------------------------#
| PORTE                     0xF84 |
#---------------------------------#
| - | - | - | - | RE3 | - | - | - |
#---------------------------------#
| 7 | 6 | 5 | 4 | 3   | 2 | 1 | 0 |
#--------------------------------*/

#define PORTE                                    0x0
#define PORTE_address                            0xF84
#define PORTE_position                           0x0
#define PORTE_size                               0x8
#define PORTE_value_mask                         0xFF
#define PORTE_clear_mask                         0x0

#define RE3                                      0x3
#define RE3_address                              0xF84
#define RE3_position                             0x3
#define RE3_size                                 0x1
#define RE3_value_mask                           0x8
#define RE3_clear_mask                           0xF7

#define NOT_MCLR                                 0x3
#define NOT_MCLR_address                         0xF84
#define NOT_MCLR_position                        0x3
#define NOT_MCLR_size                            0x1
#define NOT_MCLR_value_mask                      0x8
#define NOT_MCLR_clear_mask                      0xF7

#define MCLR                                     0x3
#define MCLR_address                             0xF84
#define MCLR_position                            0x3
#define MCLR_size                                0x1
#define MCLR_value_mask                          0x8
#define MCLR_clear_mask                          0xF7

#define CCP9E                                    0x3
#define CCP9E_address                            0xF84
#define CCP9E_position                           0x3
#define CCP9E_size                               0x1
#define CCP9E_value_mask                         0x8
#define CCP9E_clear_mask                         0xF7

#define nMCLR                                    0x3
#define nMCLR_address                            0xF84
#define nMCLR_position                           0x3
#define nMCLR_size                               0x1
#define nMCLR_value_mask                         0x8
#define nMCLR_clear_mask                         0xF7

#define PC3E                                     0x3
#define PC3E_address                             0xF84
#define PC3E_position                            0x3
#define PC3E_size                                0x1
#define PC3E_value_mask                          0x8
#define PC3E_clear_mask                          0xF7


/*----------------------------------------------------------#
| LATA                                                0xF89 |
#-----------------------------------------------------------#
| LATA7 | LATA6 | - | LATA4 | LATA3 | LATA2 | LATA1 | LATA0 |
#-----------------------------------------------------------#
| 7     | 6     | 5 | 4     | 3     | 2     | 1     | 0     |
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


/*-----------------------------------------------------------------#
| TRISA                                                      0xF92 |
#------------------------------------------------------------------#
| TRISA7 | TRISA6 | - | TRISA4 | TRISA3 | TRISA2 | TRISA1 | TRISA0 |
#------------------------------------------------------------------#
| 7      | 6      | 5 | 4      | 3      | 2      | 1      | 0      |
#-----------------------------------------------------------------*/

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

#define TRISA_RA2                                0x2
#define TRISA_RA2_address                        0xF92
#define TRISA_RA2_position                       0x2
#define TRISA_RA2_size                           0x1
#define TRISA_RA2_value_mask                     0x4
#define TRISA_RA2_clear_mask                     0xFB

#define TRISA2                                   0x2
#define TRISA2_address                           0xF92
#define TRISA2_position                          0x2
#define TRISA2_size                              0x1
#define TRISA2_value_mask                        0x4
#define TRISA2_clear_mask                        0xFB

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
| ADCHS                                                           0xF99 |
#-----------------------------------------------------------------------#
| SDSEL1 | SDSEL0 | SBSEL1 | SBSEL0 | GCSEL1 | GCSEL0 | SASEL1 | SASEL0 |
#-----------------------------------------------------------------------#
| 7      | 6      | 5      | 4      | 3      | 2      | 1      | 0      |
#----------------------------------------------------------------------*/

#define ADCHS                                    0x0
#define ADCHS_address                            0xF99
#define ADCHS_position                           0x0
#define ADCHS_size                               0x8
#define ADCHS_value_mask                         0xFF
#define ADCHS_clear_mask                         0x0

#define SASEL0                                   0x0
#define SASEL0_address                           0xF99
#define SASEL0_position                          0x0
#define SASEL0_size                              0x1
#define SASEL0_value_mask                        0x1
#define SASEL0_clear_mask                        0xFE

#define GASEL0                                   0x0
#define GASEL0_address                           0xF99
#define GASEL0_position                          0x0
#define GASEL0_size                              0x1
#define GASEL0_value_mask                        0x1
#define GASEL0_clear_mask                        0xFE

#define SASEL                                    0x0
#define SASEL_address                            0xF99
#define SASEL_position                           0x0
#define SASEL_size                               0x2
#define SASEL_value_mask                         0x3
#define SASEL_clear_mask                         0xFC

#define SASEL1                                   0x1
#define SASEL1_address                           0xF99
#define SASEL1_position                          0x1
#define SASEL1_size                              0x1
#define SASEL1_value_mask                        0x2
#define SASEL1_clear_mask                        0xFD

#define GASEL1                                   0x1
#define GASEL1_address                           0xF99
#define GASEL1_position                          0x1
#define GASEL1_size                              0x1
#define GASEL1_value_mask                        0x2
#define GASEL1_clear_mask                        0xFD

#define SCSEL0                                   0x2
#define SCSEL0_address                           0xF99
#define SCSEL0_position                          0x2
#define SCSEL0_size                              0x1
#define SCSEL0_value_mask                        0x4
#define SCSEL0_clear_mask                        0xFB

#define GCSEL0                                   0x2
#define GCSEL0_address                           0xF99
#define GCSEL0_position                          0x2
#define GCSEL0_size                              0x1
#define GCSEL0_value_mask                        0x4
#define GCSEL0_clear_mask                        0xFB

#define SCSEL                                    0x2
#define SCSEL_address                            0xF99
#define SCSEL_position                           0x2
#define SCSEL_size                               0x2
#define SCSEL_value_mask                         0xC
#define SCSEL_clear_mask                         0xF3

#define SCSEL1                                   0x3
#define SCSEL1_address                           0xF99
#define SCSEL1_position                          0x3
#define SCSEL1_size                              0x1
#define SCSEL1_value_mask                        0x8
#define SCSEL1_clear_mask                        0xF7

#define GCSEL1                                   0x3
#define GCSEL1_address                           0xF99
#define GCSEL1_position                          0x3
#define GCSEL1_size                              0x1
#define GCSEL1_value_mask                        0x8
#define GCSEL1_clear_mask                        0xF7

#define SBSEL                                    0x4
#define SBSEL_address                            0xF99
#define SBSEL_position                           0x4
#define SBSEL_size                               0x2
#define SBSEL_value_mask                         0x30
#define SBSEL_clear_mask                         0xCF

#define GBSEL0                                   0x4
#define GBSEL0_address                           0xF99
#define GBSEL0_position                          0x4
#define GBSEL0_size                              0x1
#define GBSEL0_value_mask                        0x10
#define GBSEL0_clear_mask                        0xEF

#define SBSEL0                                   0x4
#define SBSEL0_address                           0xF99
#define SBSEL0_position                          0x4
#define SBSEL0_size                              0x1
#define SBSEL0_value_mask                        0x10
#define SBSEL0_clear_mask                        0xEF

#define GBSEL1                                   0x5
#define GBSEL1_address                           0xF99
#define GBSEL1_position                          0x5
#define GBSEL1_size                              0x1
#define GBSEL1_value_mask                        0x20
#define GBSEL1_clear_mask                        0xDF

#define SBSEL1                                   0x5
#define SBSEL1_address                           0xF99
#define SBSEL1_position                          0x5
#define SBSEL1_size                              0x1
#define SBSEL1_value_mask                        0x20
#define SBSEL1_clear_mask                        0xDF

#define SDSEL                                    0x6
#define SDSEL_address                            0xF99
#define SDSEL_position                           0x6
#define SDSEL_size                               0x2
#define SDSEL_value_mask                         0xC0
#define SDSEL_clear_mask                         0x3F

#define SDSEL0                                   0x6
#define SDSEL0_address                           0xF99
#define SDSEL0_position                          0x6
#define SDSEL0_size                              0x1
#define SDSEL0_value_mask                        0x40
#define SDSEL0_clear_mask                        0xBF

#define GDSEL0                                   0x6
#define GDSEL0_address                           0xF99
#define GDSEL0_position                          0x6
#define GDSEL0_size                              0x1
#define GDSEL0_value_mask                        0x40
#define GDSEL0_clear_mask                        0xBF

#define SDSEL1                                   0x7
#define SDSEL1_address                           0xF99
#define SDSEL1_position                          0x7
#define SDSEL1_size                              0x1
#define SDSEL1_value_mask                        0x80
#define SDSEL1_clear_mask                        0x7F

#define GDSEL1                                   0x7
#define GDSEL1_address                           0xF99
#define GDSEL1_position                          0x7
#define GDSEL1_size                              0x1
#define GDSEL1_value_mask                        0x80
#define GDSEL1_clear_mask                        0x7F


/*----------------------------------------------------------#
| ADCON3                                              0xF9A |
#-----------------------------------------------------------#
| ADRS1 | ADRS0 | - | SSRC4 | SSRC3 | SSRC2 | SSRC1 | SSRC0 |
#-----------------------------------------------------------#
| 7     | 6     | 5 | 4     | 3     | 2     | 1     | 0     |
#----------------------------------------------------------*/

#define ADCON3                                   0x0
#define ADCON3_address                           0xF9A
#define ADCON3_position                          0x0
#define ADCON3_size                              0x8
#define ADCON3_value_mask                        0xFF
#define ADCON3_clear_mask                        0x0

#define SSRC0                                    0x0
#define SSRC0_address                            0xF9A
#define SSRC0_position                           0x0
#define SSRC0_size                               0x1
#define SSRC0_value_mask                         0x1
#define SSRC0_clear_mask                         0xFE

#define SSRC                                     0x0
#define SSRC_address                             0xF9A
#define SSRC_position                            0x0
#define SSRC_size                                0x5
#define SSRC_value_mask                          0x1F
#define SSRC_clear_mask                          0xE0

#define SSRC1                                    0x1
#define SSRC1_address                            0xF9A
#define SSRC1_position                           0x1
#define SSRC1_size                               0x1
#define SSRC1_value_mask                         0x2
#define SSRC1_clear_mask                         0xFD

#define SSRC2                                    0x2
#define SSRC2_address                            0xF9A
#define SSRC2_position                           0x2
#define SSRC2_size                               0x1
#define SSRC2_value_mask                         0x4
#define SSRC2_clear_mask                         0xFB

#define SSRC3                                    0x3
#define SSRC3_address                            0xF9A
#define SSRC3_position                           0x3
#define SSRC3_size                               0x1
#define SSRC3_value_mask                         0x8
#define SSRC3_clear_mask                         0xF7

#define SSRC4                                    0x4
#define SSRC4_address                            0xF9A
#define SSRC4_position                           0x4
#define SSRC4_size                               0x1
#define SSRC4_value_mask                         0x10
#define SSRC4_clear_mask                         0xEF

#define ADRS                                     0x6
#define ADRS_address                             0xF9A
#define ADRS_position                            0x6
#define ADRS_size                                0x2
#define ADRS_value_mask                          0xC0
#define ADRS_clear_mask                          0x3F

#define ADRS0                                    0x6
#define ADRS0_address                            0xF9A
#define ADRS0_position                           0x6
#define ADRS0_size                               0x1
#define ADRS0_value_mask                         0x40
#define ADRS0_clear_mask                         0xBF

#define ADRS1                                    0x7
#define ADRS1_address                            0xF9A
#define ADRS1_position                           0x7
#define ADRS1_size                               0x1
#define ADRS1_value_mask                         0x80
#define ADRS1_clear_mask                         0x7F


/*------------------------------------------------#
| OSCTUNE                                   0xF9B |
#-------------------------------------------------#
| - | - | TUN5 | TUN4 | TUN3 | TUN2 | TUN1 | TUN0 |
#-------------------------------------------------#
| 7 | 6 | 5    | 4    | 3    | 2    | 1    | 0    |
#------------------------------------------------*/

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

#define TBIE                                     0x4
#define TBIE_address                             0xF9D
#define TBIE_position                            0x4
#define TBIE_size                                0x1
#define TBIE_value_mask                          0x10
#define TBIE_clear_mask                          0xEF

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

#define TBIF                                     0x4
#define TBIF_address                             0xF9E
#define TBIF_position                            0x4
#define TBIF_size                                0x1
#define TBIF_value_mask                          0x10
#define TBIF_clear_mask                          0xEF

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


/*----------------------------------------------------------#
| IPR1                                                0xF9F |
#-----------------------------------------------------------#
| - | ADIP | RCIP | TBIP | SSPIP | CCP1IP | TMR2IP | TMR1IP |
#-----------------------------------------------------------#
| 7 | 6    | 5    | 4    | 3     | 2      | 1      | 0      |
#----------------------------------------------------------*/

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

#define TBIP                                     0x4
#define TBIP_address                             0xF9F
#define TBIP_position                            0x4
#define TBIP_size                                0x1
#define TBIP_value_mask                          0x10
#define TBIP_clear_mask                          0xEF

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
| OSFIE | - | - | EEIE | - | LVDIE | - | CCP2IE |
#-----------------------------------------------#
| 7     | 6 | 5 | 4    | 3 | 2     | 1 | 0      |
#----------------------------------------------*/

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

#define LVDIE                                    0x2
#define LVDIE_address                            0xFA0
#define LVDIE_position                           0x2
#define LVDIE_size                               0x1
#define LVDIE_value_mask                         0x4
#define LVDIE_clear_mask                         0xFB

#define EEIE                                     0x4
#define EEIE_address                             0xFA0
#define EEIE_position                            0x4
#define EEIE_size                                0x1
#define EEIE_value_mask                          0x10
#define EEIE_clear_mask                          0xEF

#define OSFIE                                    0x7
#define OSFIE_address                            0xFA0
#define OSFIE_position                           0x7
#define OSFIE_size                               0x1
#define OSFIE_value_mask                         0x80
#define OSFIE_clear_mask                         0x7F


/*----------------------------------------------#
| PIR2                                    0xFA1 |
#-----------------------------------------------#
| OSFIF | - | - | EEIF | - | LVDIF | - | CCP2IF |
#-----------------------------------------------#
| 7     | 6 | 5 | 4    | 3 | 2     | 1 | 0      |
#----------------------------------------------*/

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

#define LVDIF                                    0x2
#define LVDIF_address                            0xFA1
#define LVDIF_position                           0x2
#define LVDIF_size                               0x1
#define LVDIF_value_mask                         0x4
#define LVDIF_clear_mask                         0xFB

#define EEIF                                     0x4
#define EEIF_address                             0xFA1
#define EEIF_position                            0x4
#define EEIF_size                                0x1
#define EEIF_value_mask                          0x10
#define EEIF_clear_mask                          0xEF

#define OSFIF                                    0x7
#define OSFIF_address                            0xFA1
#define OSFIF_position                           0x7
#define OSFIF_size                               0x1
#define OSFIF_value_mask                         0x80
#define OSFIF_clear_mask                         0x7F


/*----------------------------------------------#
| IPR2                                    0xFA2 |
#-----------------------------------------------#
| OSFIP | - | - | EEIP | - | LVDIP | - | CCP2IP |
#-----------------------------------------------#
| 7     | 6 | 5 | 4    | 3 | 2     | 1 | 0      |
#----------------------------------------------*/

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

#define LVDIP                                    0x2
#define LVDIP_address                            0xFA2
#define LVDIP_position                           0x2
#define LVDIP_size                               0x1
#define LVDIP_value_mask                         0x4
#define LVDIP_clear_mask                         0xFB

#define EEIP                                     0x4
#define EEIP_address                             0xFA2
#define EEIP_position                            0x4
#define EEIP_size                                0x1
#define EEIP_value_mask                          0x10
#define EEIP_clear_mask                          0xEF

#define OSFIP                                    0x7
#define OSFIP_address                            0xFA2
#define OSFIP_position                           0x7
#define OSFIP_size                               0x1
#define OSFIP_value_mask                         0x80
#define OSFIP_clear_mask                         0x7F


/*--------------------------------------------------------#
| PIE3                                              0xFA3 |
#---------------------------------------------------------#
| - | - | - | TXB2IE | IC3DRIE | IC2QEIE | IC1IE | TMR5IE |
#---------------------------------------------------------#
| 7 | 6 | 5 | 4      | 3       | 2       | 1     | 0      |
#--------------------------------------------------------*/

#define PIE3                                     0x0
#define PIE3_address                             0xFA3
#define PIE3_position                            0x0
#define PIE3_size                                0x8
#define PIE3_value_mask                          0xFF
#define PIE3_clear_mask                          0x0

#define TMR5IE                                   0x0
#define TMR5IE_address                           0xFA3
#define TMR5IE_position                          0x0
#define TMR5IE_size                              0x1
#define TMR5IE_value_mask                        0x1
#define TMR5IE_clear_mask                        0xFE

#define RXB0IE                                   0x0
#define RXB0IE_address                           0xFA3
#define RXB0IE_position                          0x0
#define RXB0IE_size                              0x1
#define RXB0IE_value_mask                        0x1
#define RXB0IE_clear_mask                        0xFE

#define IC1IE                                    0x1
#define IC1IE_address                            0xFA3
#define IC1IE_position                           0x1
#define IC1IE_size                               0x1
#define IC1IE_value_mask                         0x2
#define IC1IE_clear_mask                         0xFD

#define RXBNIE                                   0x1
#define RXBNIE_address                           0xFA3
#define RXBNIE_position                          0x1
#define RXBNIE_size                              0x1
#define RXBNIE_value_mask                        0x2
#define RXBNIE_clear_mask                        0xFD

#define RXB1IE                                   0x1
#define RXB1IE_address                           0xFA3
#define RXB1IE_position                          0x1
#define RXB1IE_size                              0x1
#define RXB1IE_value_mask                        0x2
#define RXB1IE_clear_mask                        0xFD

#define IC2QEIE                                  0x2
#define IC2QEIE_address                          0xFA3
#define IC2QEIE_position                         0x2
#define IC2QEIE_size                             0x1
#define IC2QEIE_value_mask                       0x4
#define IC2QEIE_clear_mask                       0xFB

#define TXB0IE                                   0x2
#define TXB0IE_address                           0xFA3
#define TXB0IE_position                          0x2
#define TXB0IE_size                              0x1
#define TXB0IE_value_mask                        0x4
#define TXB0IE_clear_mask                        0xFB

#define IC3DRIE                                  0x3
#define IC3DRIE_address                          0xFA3
#define IC3DRIE_position                         0x3
#define IC3DRIE_size                             0x1
#define IC3DRIE_value_mask                       0x8
#define IC3DRIE_clear_mask                       0xF7

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

#define PTIE                                     0x4
#define PTIE_address                             0xFA3
#define PTIE_position                            0x4
#define PTIE_size                                0x1
#define PTIE_value_mask                          0x10
#define PTIE_clear_mask                          0xEF


/*-------------------------------------------------------#
| PIR3                                             0xFA4 |
#--------------------------------------------------------#
| - | - | - | PTIF | IC3DRIF | IC2QEIF | RXBNIF | TMR5IF |
#--------------------------------------------------------#
| 7 | 6 | 5 | 4    | 3       | 2       | 1      | 0      |
#-------------------------------------------------------*/

#define PIR3                                     0x0
#define PIR3_address                             0xFA4
#define PIR3_position                            0x0
#define PIR3_size                                0x8
#define PIR3_value_mask                          0xFF
#define PIR3_clear_mask                          0x0

#define TMR5IF                                   0x0
#define TMR5IF_address                           0xFA4
#define TMR5IF_position                          0x0
#define TMR5IF_size                              0x1
#define TMR5IF_value_mask                        0x1
#define TMR5IF_clear_mask                        0xFE

#define RXBNIF                                   0x1
#define RXBNIF_address                           0xFA4
#define RXBNIF_position                          0x1
#define RXBNIF_size                              0x1
#define RXBNIF_value_mask                        0x2
#define RXBNIF_clear_mask                        0xFD

#define IC1IF                                    0x1
#define IC1IF_address                            0xFA4
#define IC1IF_position                           0x1
#define IC1IF_size                               0x1
#define IC1IF_value_mask                         0x2
#define IC1IF_clear_mask                         0xFD

#define IC2QEIF                                  0x2
#define IC2QEIF_address                          0xFA4
#define IC2QEIF_position                         0x2
#define IC2QEIF_size                             0x1
#define IC2QEIF_value_mask                       0x4
#define IC2QEIF_clear_mask                       0xFB

#define IC3DRIF                                  0x3
#define IC3DRIF_address                          0xFA4
#define IC3DRIF_position                         0x3
#define IC3DRIF_size                             0x1
#define IC3DRIF_value_mask                       0x8
#define IC3DRIF_clear_mask                       0xF7

#define PTIF                                     0x4
#define PTIF_address                             0xFA4
#define PTIF_position                            0x4
#define PTIF_size                                0x1
#define PTIF_value_mask                          0x10
#define PTIF_clear_mask                          0xEF

#define TXBNIF                                   0x4
#define TXBNIF_address                           0xFA4
#define TXBNIF_position                          0x4
#define TXBNIF_size                              0x1
#define TXBNIF_value_mask                        0x10
#define TXBNIF_clear_mask                        0xEF


/*--------------------------------------------------------#
| IPR3                                              0xFA5 |
#---------------------------------------------------------#
| - | - | - | TXBNIP | IC3DRIP | IC2QEIP | IC1IP | TMR5IP |
#---------------------------------------------------------#
| 7 | 6 | 5 | 4      | 3       | 2       | 1     | 0      |
#--------------------------------------------------------*/

#define IPR3                                     0x0
#define IPR3_address                             0xFA5
#define IPR3_position                            0x0
#define IPR3_size                                0x8
#define IPR3_value_mask                          0xFF
#define IPR3_clear_mask                          0x0

#define TMR5IP                                   0x0
#define TMR5IP_address                           0xFA5
#define TMR5IP_position                          0x0
#define TMR5IP_size                              0x1
#define TMR5IP_value_mask                        0x1
#define TMR5IP_clear_mask                        0xFE

#define IC1IP                                    0x1
#define IC1IP_address                            0xFA5
#define IC1IP_position                           0x1
#define IC1IP_size                               0x1
#define IC1IP_value_mask                         0x2
#define IC1IP_clear_mask                         0xFD

#define RXBNIP                                   0x1
#define RXBNIP_address                           0xFA5
#define RXBNIP_position                          0x1
#define RXBNIP_size                              0x1
#define RXBNIP_value_mask                        0x2
#define RXBNIP_clear_mask                        0xFD

#define IC2QEIP                                  0x2
#define IC2QEIP_address                          0xFA5
#define IC2QEIP_position                         0x2
#define IC2QEIP_size                             0x1
#define IC2QEIP_value_mask                       0x4
#define IC2QEIP_clear_mask                       0xFB

#define IC3DRIP                                  0x3
#define IC3DRIP_address                          0xFA5
#define IC3DRIP_position                         0x3
#define IC3DRIP_size                             0x1
#define IC3DRIP_value_mask                       0x8
#define IC3DRIP_clear_mask                       0xF7

#define TXBNIP                                   0x4
#define TXBNIP_address                           0xFA5
#define TXBNIP_position                          0x4
#define TXBNIP_size                              0x1
#define TXBNIP_value_mask                        0x10
#define TXBNIP_clear_mask                        0xEF

#define PTIP                                     0x4
#define PTIP_address                             0xFA5
#define PTIP_position                            0x4
#define PTIP_size                                0x1
#define PTIP_value_mask                          0x10
#define PTIP_clear_mask                          0xEF


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


/*--------------------------------------------------------#
| BAUDCON                                           0xFAA |
#---------------------------------------------------------#
| ABDOVF | RCMT | RXCKP | TXCKP | BRG16 | - | W4E | ABDEN |
#---------------------------------------------------------#
| 7      | 6    | 5     | 4     | 3     | 2 | 1   | 0     |
#--------------------------------------------------------*/

#define BAUDCON                                  0x0
#define BAUDCON_address                          0xFAA
#define BAUDCON_position                         0x0
#define BAUDCON_size                             0x8
#define BAUDCON_value_mask                       0xFF
#define BAUDCON_clear_mask                       0x0

#define ABDEN                                    0x0
#define ABDEN_address                            0xFAA
#define ABDEN_position                           0x0
#define ABDEN_size                               0x1
#define ABDEN_value_mask                         0x1
#define ABDEN_clear_mask                         0xFE

#define W4E                                      0x1
#define W4E_address                              0xFAA
#define W4E_position                             0x1
#define W4E_size                                 0x1
#define W4E_value_mask                           0x2
#define W4E_clear_mask                           0xFD

#define WUE                                      0x1
#define WUE_address                              0xFAA
#define WUE_position                             0x1
#define WUE_size                                 0x1
#define WUE_value_mask                           0x2
#define WUE_clear_mask                           0xFD

#define BRG16                                    0x3
#define BRG16_address                            0xFAA
#define BRG16_position                           0x3
#define BRG16_size                               0x1
#define BRG16_value_mask                         0x8
#define BRG16_clear_mask                         0xF7

#define TXCKP                                    0x4
#define TXCKP_address                            0xFAA
#define TXCKP_position                           0x4
#define TXCKP_size                               0x1
#define TXCKP_value_mask                         0x10
#define TXCKP_clear_mask                         0xEF

#define SCKP                                     0x4
#define SCKP_address                             0xFAA
#define SCKP_position                            0x4
#define SCKP_size                                0x1
#define SCKP_value_mask                          0x10
#define SCKP_clear_mask                          0xEF

#define RXCKP                                    0x5
#define RXCKP_address                            0xFAA
#define RXCKP_position                           0x5
#define RXCKP_size                               0x1
#define RXCKP_value_mask                         0x20
#define RXCKP_clear_mask                         0xDF

#define RXDTP                                    0x5
#define RXDTP_address                            0xFAA
#define RXDTP_position                           0x5
#define RXDTP_size                               0x1
#define RXDTP_value_mask                         0x20
#define RXDTP_clear_mask                         0xDF

#define RCMT                                     0x6
#define RCMT_address                             0xFAA
#define RCMT_position                            0x6
#define RCMT_size                                0x1
#define RCMT_value_mask                          0x40
#define RCMT_clear_mask                          0xBF

#define RCIDL                                    0x6
#define RCIDL_address                            0xFAA
#define RCIDL_position                           0x6
#define RCIDL_size                               0x1
#define RCIDL_value_mask                         0x40
#define RCIDL_clear_mask                         0xBF

#define ABDOVF                                   0x7
#define ABDOVF_address                           0xFAA
#define ABDOVF_position                          0x7
#define ABDOVF_size                              0x1
#define ABDOVF_value_mask                        0x80
#define ABDOVF_clear_mask                        0x7F


/*-------------------------------------------------------#
| RCSTA                                            0xFAB |
#--------------------------------------------------------#
| SPEN | RX9 | SRENA | CREN | ADDEN | FERR | OERR | RCD8 |
#--------------------------------------------------------#
| 7    | 6   | 5     | 4    | 3     | 2    | 1    | 0    |
#-------------------------------------------------------*/

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

#define ADEN                                     0x3
#define ADEN_address                             0xFAB
#define ADEN_position                            0x3
#define ADEN_size                                0x1
#define ADEN_value_mask                          0x8
#define ADEN_clear_mask                          0xF7

#define CREN                                     0x4
#define CREN_address                             0xFAB
#define CREN_position                            0x4
#define CREN_size                                0x1
#define CREN_value_mask                          0x10
#define CREN_clear_mask                          0xEF

#define SRENA                                    0x5
#define SRENA_address                            0xFAB
#define SRENA_position                           0x5
#define SRENA_size                               0x1
#define SRENA_value_mask                         0x20
#define SRENA_clear_mask                         0xDF

#define SREN                                     0x5
#define SREN_address                             0xFAB
#define SREN_position                            0x5
#define SREN_size                                0x1
#define SREN_value_mask                          0x20
#define SREN_clear_mask                          0xDF

#define RC9                                      0x6
#define RC9_address                              0xFAB
#define RC9_position                             0x6
#define RC9_size                                 0x1
#define RC9_value_mask                           0x40
#define RC9_clear_mask                           0xBF

#define RC8_9                                    0x6
#define RC8_9_address                            0xFAB
#define RC8_9_position                           0x6
#define RC8_9_size                               0x1
#define RC8_9_value_mask                         0x40
#define RC8_9_clear_mask                         0xBF

#define RX9                                      0x6
#define RX9_address                              0xFAB
#define RX9_position                             0x6
#define RX9_size                                 0x1
#define RX9_value_mask                           0x40
#define RX9_clear_mask                           0xBF

#define SPEN                                     0x7
#define SPEN_address                             0xFAB
#define SPEN_position                            0x7
#define SPEN_size                                0x1
#define SPEN_value_mask                          0x80
#define SPEN_clear_mask                          0x7F


/*----------------------------------------------------------#
| TXSTA                                               0xFAC |
#-----------------------------------------------------------#
| CSRC1 | TX91 | TXEN | SYNC | SENDB1 | BRGH1 | TRMT | TXD8 |
#-----------------------------------------------------------#
| 7     | 6    | 5    | 4    | 3      | 2     | 1    | 0    |
#----------------------------------------------------------*/

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


/*-------------------------------------------------------------#
| QEICON                                                 0xFB6 |
#--------------------------------------------------------------#
| VELM | ERROR | nDOWN | QEIM2 | QEIM1 | QEIM0 | PDEC1 | PDEC0 |
#--------------------------------------------------------------#
| 7    | 6     | 5     | 4     | 3     | 2     | 1     | 0     |
#-------------------------------------------------------------*/

#define QEICON                                   0x0
#define QEICON_address                           0xFB6
#define QEICON_position                          0x0
#define QEICON_size                              0x8
#define QEICON_value_mask                        0xFF
#define QEICON_clear_mask                        0x0

#define PDEC                                     0x0
#define PDEC_address                             0xFB6
#define PDEC_position                            0x0
#define PDEC_size                                0x2
#define PDEC_value_mask                          0x3
#define PDEC_clear_mask                          0xFC

#define PDEC0                                    0x0
#define PDEC0_address                            0xFB6
#define PDEC0_position                           0x0
#define PDEC0_size                               0x1
#define PDEC0_value_mask                         0x1
#define PDEC0_clear_mask                         0xFE

#define PDEC1                                    0x1
#define PDEC1_address                            0xFB6
#define PDEC1_position                           0x1
#define PDEC1_size                               0x1
#define PDEC1_value_mask                         0x2
#define PDEC1_clear_mask                         0xFD

#define QEIM                                     0x2
#define QEIM_address                             0xFB6
#define QEIM_position                            0x2
#define QEIM_size                                0x3
#define QEIM_value_mask                          0x1C
#define QEIM_clear_mask                          0xE3

#define QEIM0                                    0x2
#define QEIM0_address                            0xFB6
#define QEIM0_position                           0x2
#define QEIM0_size                               0x1
#define QEIM0_value_mask                         0x4
#define QEIM0_clear_mask                         0xFB

#define QEIM1                                    0x3
#define QEIM1_address                            0xFB6
#define QEIM1_position                           0x3
#define QEIM1_size                               0x1
#define QEIM1_value_mask                         0x8
#define QEIM1_clear_mask                         0xF7

#define QEIM2                                    0x4
#define QEIM2_address                            0xFB6
#define QEIM2_position                           0x4
#define QEIM2_size                               0x1
#define QEIM2_value_mask                         0x10
#define QEIM2_clear_mask                         0xEF

#define DOWN                                     0x5
#define DOWN_address                             0xFB6
#define DOWN_position                            0x5
#define DOWN_size                                0x1
#define DOWN_value_mask                          0x20
#define DOWN_clear_mask                          0xDF

#define nDOWN                                    0x5
#define nDOWN_address                            0xFB6
#define nDOWN_position                           0x5
#define nDOWN_size                               0x1
#define nDOWN_value_mask                         0x20
#define nDOWN_clear_mask                         0xDF

#define UP_nDOWN                                 0x5
#define UP_nDOWN_address                         0xFB6
#define UP_nDOWN_position                        0x5
#define UP_nDOWN_size                            0x1
#define UP_nDOWN_value_mask                      0x20
#define UP_nDOWN_clear_mask                      0xDF

#define NOT_DOWN                                 0x5
#define NOT_DOWN_address                         0xFB6
#define NOT_DOWN_position                        0x5
#define NOT_DOWN_size                            0x1
#define NOT_DOWN_value_mask                      0x20
#define NOT_DOWN_clear_mask                      0xDF

#define UP                                       0x5
#define UP_address                               0xFB6
#define UP_position                              0x5
#define UP_size                                  0x1
#define UP_value_mask                            0x20
#define UP_clear_mask                            0xDF

#define UPDOWN                                   0x5
#define UPDOWN_address                           0xFB6
#define UPDOWN_position                          0x5
#define UPDOWN_size                              0x1
#define UPDOWN_value_mask                        0x20
#define UPDOWN_clear_mask                        0xDF

#define UP_NOT_DOWN                              0x5
#define UP_NOT_DOWN_address                      0xFB6
#define UP_NOT_DOWN_position                     0x5
#define UP_NOT_DOWN_size                         0x1
#define UP_NOT_DOWN_value_mask                   0x20
#define UP_NOT_DOWN_clear_mask                   0xDF

#define UP_DOWN                                  0x5
#define UP_DOWN_address                          0xFB6
#define UP_DOWN_position                         0x5
#define UP_DOWN_size                             0x1
#define UP_DOWN_value_mask                       0x20
#define UP_DOWN_clear_mask                       0xDF

#define ERROR                                    0x6
#define ERROR_address                            0xFB6
#define ERROR_position                           0x6
#define ERROR_size                               0x1
#define ERROR_value_mask                         0x40
#define ERROR_clear_mask                         0xBF

#define VELM                                     0x7
#define VELM_address                             0xFB6
#define VELM_position                            0x7
#define VELM_size                                0x1
#define VELM_value_mask                          0x80
#define VELM_clear_mask                          0x7F

#define nVELM                                    0x7
#define nVELM_address                            0xFB6
#define nVELM_position                           0x7
#define nVELM_size                               0x1
#define nVELM_value_mask                         0x80
#define nVELM_clear_mask                         0x7F

#define NOT_VELM                                 0x7
#define NOT_VELM_address                         0xFB6
#define NOT_VELM_position                        0x7
#define NOT_VELM_size                            0x1
#define NOT_VELM_value_mask                      0x80
#define NOT_VELM_clear_mask                      0x7F


/*--------------------------------------------------------------------#
| T5CON                                                         0xFB7 |
#---------------------------------------------------------------------#
| T5SEN | nRESEN | T5MOD | T5PS1 | SOSCEN5 | T5SYNC | TMR5CS | TMR5ON |
#---------------------------------------------------------------------#
| 7     | 6      | 5     | 4     | 3       | 2      | 1      | 0      |
#--------------------------------------------------------------------*/

#define T5CON                                    0x0
#define T5CON_address                            0xFB7
#define T5CON_position                           0x0
#define T5CON_size                               0x8
#define T5CON_value_mask                         0xFF
#define T5CON_clear_mask                         0x0

#define TMR5ON                                   0x0
#define TMR5ON_address                           0xFB7
#define TMR5ON_position                          0x0
#define TMR5ON_size                              0x1
#define TMR5ON_value_mask                        0x1
#define TMR5ON_clear_mask                        0xFE

#define TMR5CS                                   0x1
#define TMR5CS_address                           0xFB7
#define TMR5CS_position                          0x1
#define TMR5CS_size                              0x1
#define TMR5CS_value_mask                        0x2
#define TMR5CS_clear_mask                        0xFD

#define RD165                                    0x1
#define RD165_address                            0xFB7
#define RD165_position                           0x1
#define RD165_size                               0x1
#define RD165_value_mask                         0x2
#define RD165_clear_mask                         0xFD

#define T5SYNC                                   0x2
#define T5SYNC_address                           0xFB7
#define T5SYNC_position                          0x2
#define T5SYNC_size                              0x1
#define T5SYNC_value_mask                        0x4
#define T5SYNC_clear_mask                        0xFB

#define nT5SYNC                                  0x2
#define nT5SYNC_address                          0xFB7
#define nT5SYNC_position                         0x2
#define nT5SYNC_size                             0x1
#define nT5SYNC_value_mask                       0x4
#define nT5SYNC_clear_mask                       0xFB

#define NOT_T5SYNC                               0x2
#define NOT_T5SYNC_address                       0xFB7
#define NOT_T5SYNC_position                      0x2
#define NOT_T5SYNC_size                          0x1
#define NOT_T5SYNC_value_mask                    0x4
#define NOT_T5SYNC_clear_mask                    0xFB

#define SOSCEN5                                  0x3
#define SOSCEN5_address                          0xFB7
#define SOSCEN5_position                         0x3
#define SOSCEN5_size                             0x1
#define SOSCEN5_value_mask                       0x8
#define SOSCEN5_clear_mask                       0xF7

#define T5PS0                                    0x3
#define T5PS0_address                            0xFB7
#define T5PS0_position                           0x3
#define T5PS0_size                               0x1
#define T5PS0_value_mask                         0x8
#define T5PS0_clear_mask                         0xF7

#define T5PS                                     0x3
#define T5PS_address                             0xFB7
#define T5PS_position                            0x3
#define T5PS_size                                0x2
#define T5PS_value_mask                          0x18
#define T5PS_clear_mask                          0xE7

#define T5PS1                                    0x4
#define T5PS1_address                            0xFB7
#define T5PS1_position                           0x4
#define T5PS1_size                               0x1
#define T5PS1_value_mask                         0x10
#define T5PS1_clear_mask                         0xEF

#define T5MOD                                    0x5
#define T5MOD_address                            0xFB7
#define T5MOD_position                           0x5
#define T5MOD_size                               0x1
#define T5MOD_value_mask                         0x20
#define T5MOD_clear_mask                         0xDF

#define nRESEN                                   0x6
#define nRESEN_address                           0xFB7
#define nRESEN_position                          0x6
#define nRESEN_size                              0x1
#define nRESEN_value_mask                        0x40
#define nRESEN_clear_mask                        0xBF

#define NOT_RESEN                                0x6
#define NOT_RESEN_address                        0xFB7
#define NOT_RESEN_position                       0x6
#define NOT_RESEN_size                           0x1
#define NOT_RESEN_value_mask                     0x40
#define NOT_RESEN_clear_mask                     0xBF

#define RESEN                                    0x6
#define RESEN_address                            0xFB7
#define RESEN_position                           0x6
#define RESEN_size                               0x1
#define RESEN_value_mask                         0x40
#define RESEN_clear_mask                         0xBF

#define T5SEN                                    0x7
#define T5SEN_address                            0xFB7
#define T5SEN_position                           0x7
#define T5SEN_size                               0x1
#define T5SEN_value_mask                         0x80
#define T5SEN_clear_mask                         0x7F


/*---------------------------------------------#
| ANSEL0                                 0xFB8 |
#----------------------------------------------#
| - | - | - | ANS4 | ANS3 | ANS2 | ANS1 | ANS0 |
#----------------------------------------------#
| 7 | 6 | 5 | 4    | 3    | 2    | 1    | 0    |
#---------------------------------------------*/

#define ANSEL0                                   0x0
#define ANSEL0_address                           0xFB8
#define ANSEL0_position                          0x0
#define ANSEL0_size                              0x8
#define ANSEL0_value_mask                        0xFF
#define ANSEL0_clear_mask                        0x0

#define ANS0                                     0x0
#define ANS0_address                             0xFB8
#define ANS0_position                            0x0
#define ANS0_size                                0x1
#define ANS0_value_mask                          0x1
#define ANS0_clear_mask                          0xFE

#define ANS1                                     0x1
#define ANS1_address                             0xFB8
#define ANS1_position                            0x1
#define ANS1_size                                0x1
#define ANS1_value_mask                          0x2
#define ANS1_clear_mask                          0xFD

#define ANS2                                     0x2
#define ANS2_address                             0xFB8
#define ANS2_position                            0x2
#define ANS2_size                                0x1
#define ANS2_value_mask                          0x4
#define ANS2_clear_mask                          0xFB

#define ANS3                                     0x3
#define ANS3_address                             0xFB8
#define ANS3_position                            0x3
#define ANS3_size                                0x1
#define ANS3_value_mask                          0x8
#define ANS3_clear_mask                          0xF7

#define ANS4                                     0x4
#define ANS4_address                             0xFB8
#define ANS4_position                            0x4
#define ANS4_size                                0x1
#define ANS4_value_mask                          0x10
#define ANS4_clear_mask                          0xEF


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

#define CCP2X                                    0x5
#define CCP2X_address                            0xFBA
#define CCP2X_position                           0x5
#define CCP2X_size                               0x1
#define CCP2X_value_mask                         0x20
#define CCP2X_clear_mask                         0xDF


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


/*-------------------------------------------------------------#
| ADCON2                                                 0xFC0 |
#--------------------------------------------------------------#
| ADFM | ACQT3 | ACQT2 | ACQT1 | ACQT0 | ADCS2 | ADCS1 | ADCS0 |
#--------------------------------------------------------------#
| 7    | 6     | 5     | 4     | 3     | 2     | 1     | 0     |
#-------------------------------------------------------------*/

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
#define ACQT_size                                0x4
#define ACQT_value_mask                          0x78
#define ACQT_clear_mask                          0x87

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

#define ACQT3                                    0x6
#define ACQT3_address                            0xFC0
#define ACQT3_position                           0x6
#define ACQT3_size                               0x1
#define ACQT3_value_mask                         0x40
#define ACQT3_clear_mask                         0xBF

#define ADFM                                     0x7
#define ADFM_address                             0xFC0
#define ADFM_position                            0x7
#define ADFM_size                                0x1
#define ADFM_value_mask                          0x80
#define ADFM_clear_mask                          0x7F


/*--------------------------------------------------------------#
| ADCON1                                                  0xFC1 |
#---------------------------------------------------------------#
| VCFG1 | VCFG0 | - | FIFOEN | CHSN3 | FFOVFL | ADPNT1 | ADPNT0 |
#---------------------------------------------------------------#
| 7     | 6     | 5 | 4      | 3     | 2      | 1      | 0      |
#--------------------------------------------------------------*/

#define ADCON1                                   0x0
#define ADCON1_address                           0xFC1
#define ADCON1_position                          0x0
#define ADCON1_size                              0x8
#define ADCON1_value_mask                        0xFF
#define ADCON1_clear_mask                        0x0

#define ADPNT                                    0x0
#define ADPNT_address                            0xFC1
#define ADPNT_position                           0x0
#define ADPNT_size                               0x2
#define ADPNT_value_mask                         0x3
#define ADPNT_clear_mask                         0xFC

#define ADPNT0                                   0x0
#define ADPNT0_address                           0xFC1
#define ADPNT0_position                          0x0
#define ADPNT0_size                              0x1
#define ADPNT0_value_mask                        0x1
#define ADPNT0_clear_mask                        0xFE

#define ADPNT1                                   0x1
#define ADPNT1_address                           0xFC1
#define ADPNT1_position                          0x1
#define ADPNT1_size                              0x1
#define ADPNT1_value_mask                        0x2
#define ADPNT1_clear_mask                        0xFD

#define FFOVFL                                   0x2
#define FFOVFL_address                           0xFC1
#define FFOVFL_position                          0x2
#define FFOVFL_size                              0x1
#define FFOVFL_value_mask                        0x4
#define FFOVFL_clear_mask                        0xFB

#define BFOVFL                                   0x2
#define BFOVFL_address                           0xFC1
#define BFOVFL_position                          0x2
#define BFOVFL_size                              0x1
#define BFOVFL_value_mask                        0x4
#define BFOVFL_clear_mask                        0xFB

#define CHSN3                                    0x3
#define CHSN3_address                            0xFC1
#define CHSN3_position                           0x3
#define CHSN3_size                               0x1
#define CHSN3_value_mask                         0x8
#define CHSN3_clear_mask                         0xF7

#define BFEMT                                    0x3
#define BFEMT_address                            0xFC1
#define BFEMT_position                           0x3
#define BFEMT_size                               0x1
#define BFEMT_value_mask                         0x8
#define BFEMT_clear_mask                         0xF7

#define FIFOEN                                   0x4
#define FIFOEN_address                           0xFC1
#define FIFOEN_position                          0x4
#define FIFOEN_size                              0x1
#define FIFOEN_value_mask                        0x10
#define FIFOEN_clear_mask                        0xEF

#define VCFG01                                   0x4
#define VCFG01_address                           0xFC1
#define VCFG01_position                          0x4
#define VCFG01_size                              0x1
#define VCFG01_value_mask                        0x10
#define VCFG01_clear_mask                        0xEF

#define VCFG                                     0x6
#define VCFG_address                             0xFC1
#define VCFG_position                            0x6
#define VCFG_size                                0x2
#define VCFG_value_mask                          0xC0
#define VCFG_clear_mask                          0x3F

#define VCFG0                                    0x6
#define VCFG0_address                            0xFC1
#define VCFG0_position                           0x6
#define VCFG0_size                               0x1
#define VCFG0_value_mask                         0x40
#define VCFG0_clear_mask                         0xBF

#define VCFG1                                    0x7
#define VCFG1_address                            0xFC1
#define VCFG1_position                           0x7
#define VCFG1_size                               0x1
#define VCFG1_value_mask                         0x80
#define VCFG1_clear_mask                         0x7F


/*----------------------------------------------------------#
| ADCON0                                              0xFC2 |
#-----------------------------------------------------------#
| - | - | ACONV | ACSCH | ACMOD1 | ACMOD0 | GO_nDONE | ADON |
#-----------------------------------------------------------#
| 7 | 6 | 5     | 4     | 3      | 2      | 1        | 0    |
#----------------------------------------------------------*/

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

#define GODONE                                   0x1
#define GODONE_address                           0xFC2
#define GODONE_position                          0x1
#define GODONE_size                              0x1
#define GODONE_value_mask                        0x2
#define GODONE_clear_mask                        0xFD

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

#define GO                                       0x1
#define GO_address                               0xFC2
#define GO_position                              0x1
#define GO_size                                  0x1
#define GO_value_mask                            0x2
#define GO_clear_mask                            0xFD

#define GO_NOT_DONE                              0x1
#define GO_NOT_DONE_address                      0xFC2
#define GO_NOT_DONE_position                     0x1
#define GO_NOT_DONE_size                         0x1
#define GO_NOT_DONE_value_mask                   0x2
#define GO_NOT_DONE_clear_mask                   0xFD

#define ACMOD0                                   0x2
#define ACMOD0_address                           0xFC2
#define ACMOD0_position                          0x2
#define ACMOD0_size                              0x1
#define ACMOD0_value_mask                        0x4
#define ACMOD0_clear_mask                        0xFB

#define ACMOD                                    0x2
#define ACMOD_address                            0xFC2
#define ACMOD_position                           0x2
#define ACMOD_size                               0x2
#define ACMOD_value_mask                         0xC
#define ACMOD_clear_mask                         0xF3

#define ACMOD1                                   0x3
#define ACMOD1_address                           0xFC2
#define ACMOD1_position                          0x3
#define ACMOD1_size                              0x1
#define ACMOD1_value_mask                        0x8
#define ACMOD1_clear_mask                        0xF7

#define ACSCH                                    0x4
#define ACSCH_address                            0xFC2
#define ACSCH_position                           0x4
#define ACSCH_size                               0x1
#define ACSCH_value_mask                         0x10
#define ACSCH_clear_mask                         0xEF

#define ACONV                                    0x5
#define ACONV_address                            0xFC2
#define ACONV_position                           0x5
#define ACONV_size                               0x1
#define ACONV_value_mask                         0x20
#define ACONV_clear_mask                         0xDF


/*-----------------------------------------------------------#
| SSPCON                                               0xFC6 |
#------------------------------------------------------------#
| WCOL | SSPOV | SSPEN | CKP | SSPM3 | SSPM2 | SSPM1 | SSPM0 |
#------------------------------------------------------------#
| 7    | 6     | 5     | 4   | 3     | 2     | 1     | 0     |
#-----------------------------------------------------------*/

#define SSPCON                                   0x0
#define SSPCON_address                           0xFC6
#define SSPCON_position                          0x0
#define SSPCON_size                              0x8
#define SSPCON_value_mask                        0xFF
#define SSPCON_clear_mask                        0x0

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

#define R_W                                      0x2
#define R_W_address                              0xFC7
#define R_W_position                             0x2
#define R_W_size                                 0x1
#define R_W_value_mask                           0x4
#define R_W_clear_mask                           0xFB

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

#define STOP                                     0x4
#define STOP_address                             0xFC7
#define STOP_position                            0x4
#define STOP_size                                0x1
#define STOP_value_mask                          0x10
#define STOP_clear_mask                          0xEF

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

#define DATA_ADDRESS                             0x5
#define DATA_ADDRESS_address                     0xFC7
#define DATA_ADDRESS_position                    0x5
#define DATA_ADDRESS_size                        0x1
#define DATA_ADDRESS_value_mask                  0x20
#define DATA_ADDRESS_clear_mask                  0xDF

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

#define T2OUTPS1                                 0x4
#define T2OUTPS1_address                         0xFCA
#define T2OUTPS1_position                        0x4
#define T2OUTPS1_size                            0x1
#define T2OUTPS1_value_mask                      0x10
#define T2OUTPS1_clear_mask                      0xEF

#define TOUTPS1                                  0x4
#define TOUTPS1_address                          0xFCA
#define TOUTPS1_position                         0x4
#define TOUTPS1_size                             0x1
#define TOUTPS1_value_mask                       0x10
#define TOUTPS1_clear_mask                       0xEF

#define T2OUTPS2                                 0x5
#define T2OUTPS2_address                         0xFCA
#define T2OUTPS2_position                        0x5
#define T2OUTPS2_size                            0x1
#define T2OUTPS2_value_mask                      0x20
#define T2OUTPS2_clear_mask                      0xDF

#define TOUTPS2                                  0x5
#define TOUTPS2_address                          0xFCA
#define TOUTPS2_position                         0x5
#define TOUTPS2_size                             0x1
#define TOUTPS2_value_mask                       0x20
#define TOUTPS2_clear_mask                       0xDF

#define T2OUTPS3                                 0x6
#define T2OUTPS3_address                         0xFCA
#define T2OUTPS3_position                        0x6
#define T2OUTPS3_size                            0x1
#define T2OUTPS3_value_mask                      0x40
#define T2OUTPS3_clear_mask                      0xBF

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


/*--------------------------------------------------------------------------#
| T1CON                                                               0xFCD |
#---------------------------------------------------------------------------#
| RD16 | T1RUN | T1CKPS1 | T1CKPS0 | T1OSCEN | NOT_T1SYNC | TMR1CS | TMR1ON |
#---------------------------------------------------------------------------#
| 7    | 6     | 5       | 4       | 3       | 2          | 1      | 0      |
#--------------------------------------------------------------------------*/

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

#define RD16                                     0x7
#define RD16_address                             0xFCD
#define RD16_position                            0x7
#define RD16_size                                0x1
#define RD16_value_mask                          0x80
#define RD16_clear_mask                          0x7F

#define T1RD16                                   0x7
#define T1RD16_address                           0xFCD
#define T1RD16_position                          0x7
#define T1RD16_size                              0x1
#define T1RD16_value_mask                        0x80
#define T1RD16_clear_mask                        0x7F


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


/*--------------------------------------#
| WDTCON                          0xFD1 |
#---------------------------------------#
| WDTW | - | - | - | - | - | - | SWDTEN |
#---------------------------------------#
| 7    | 6 | 5 | 4 | 3 | 2 | 1 | 0      |
#--------------------------------------*/

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

#define WDTW                                     0x7
#define WDTW_address                             0xFD1
#define WDTW_position                            0x7
#define WDTW_size                                0x1
#define WDTW_value_mask                          0x80
#define WDTW_clear_mask                          0x7F


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


/*----------------------------------------------------------#
| OSCCON                                              0xFD3 |
#-----------------------------------------------------------#
| IDLEN | IRCF2 | IRCF1 | IRCF0 | OSTS | IOFS | SCS1 | SCS0 |
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


/*-------------------------------------------------------------#
| T0CON                                                  0xFD5 |
#--------------------------------------------------------------#
| TMR0ON | T016BIT | T0CS | T0SE | PSA | T0PS2 | T0PS1 | T0PS0 |
#--------------------------------------------------------------#
| 7      | 6       | 5    | 4    | 3   | 2     | 1     | 0     |
#-------------------------------------------------------------*/

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

#define T0PS3                                    0x3
#define T0PS3_address                            0xFD5
#define T0PS3_position                           0x3
#define T0PS3_size                               0x1
#define T0PS3_value_mask                         0x8
#define T0PS3_clear_mask                         0xF7

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

#define T016BIT                                  0x6
#define T016BIT_address                          0xFD5
#define T016BIT_position                         0x6
#define T016BIT_size                             0x1
#define T016BIT_value_mask                       0x40
#define T016BIT_clear_mask                       0xBF

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

#endif // _PIC18LF2331_H_
