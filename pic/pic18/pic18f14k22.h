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

#ifndef _PIC18F14K22_H_
#define _PIC18F14K22_H_


/*----------------------------------------------------------------#
| SRCON0                                                    0xF68 |
#-----------------------------------------------------------------#
| SRLEN | SRCLK2 | SRCLK1 | SRCLK0 | SRQEN | SRNQEN | SRPS | SRPR |
#-----------------------------------------------------------------#
| 7     | 6      | 5      | 4      | 3     | 2      | 1    | 0    |
#----------------------------------------------------------------*/

#define SRCON0                                   0x0
#define SRCON0_address                           0xF68
#define SRCON0_position                          0x0
#define SRCON0_size                              0x8
#define SRCON0_value_mask                        0xFF
#define SRCON0_clear_mask                        0x0

#define SRPR                                     0x0
#define SRPR_address                             0xF68
#define SRPR_position                            0x0
#define SRPR_size                                0x1
#define SRPR_value_mask                          0x1
#define SRPR_clear_mask                          0xFE

#define SRPS                                     0x1
#define SRPS_address                             0xF68
#define SRPS_position                            0x1
#define SRPS_size                                0x1
#define SRPS_value_mask                          0x2
#define SRPS_clear_mask                          0xFD

#define SRNQEN                                   0x2
#define SRNQEN_address                           0xF68
#define SRNQEN_position                          0x2
#define SRNQEN_size                              0x1
#define SRNQEN_value_mask                        0x4
#define SRNQEN_clear_mask                        0xFB

#define SRQEN                                    0x3
#define SRQEN_address                            0xF68
#define SRQEN_position                           0x3
#define SRQEN_size                               0x1
#define SRQEN_value_mask                         0x8
#define SRQEN_clear_mask                         0xF7

#define SRCLK0                                   0x4
#define SRCLK0_address                           0xF68
#define SRCLK0_position                          0x4
#define SRCLK0_size                              0x1
#define SRCLK0_value_mask                        0x10
#define SRCLK0_clear_mask                        0xEF

#define SRCLK                                    0x4
#define SRCLK_address                            0xF68
#define SRCLK_position                           0x4
#define SRCLK_size                               0x3
#define SRCLK_value_mask                         0x70
#define SRCLK_clear_mask                         0x8F

#define SRCLK1                                   0x5
#define SRCLK1_address                           0xF68
#define SRCLK1_position                          0x5
#define SRCLK1_size                              0x1
#define SRCLK1_value_mask                        0x20
#define SRCLK1_clear_mask                        0xDF

#define SRCLK2                                   0x6
#define SRCLK2_address                           0xF68
#define SRCLK2_position                          0x6
#define SRCLK2_size                              0x1
#define SRCLK2_value_mask                        0x40
#define SRCLK2_clear_mask                        0xBF

#define SRLEN                                    0x7
#define SRLEN_address                            0xF68
#define SRLEN_position                           0x7
#define SRLEN_size                               0x1
#define SRLEN_value_mask                         0x80
#define SRLEN_clear_mask                         0x7F


/*--------------------------------------------------------------------#
| SRCON1                                                        0xF69 |
#---------------------------------------------------------------------#
| SRSPE | SRSCKE | SRSC2E | SRSC1E | SRRPE | SRRCKE | SRRC2E | SRRC1E |
#---------------------------------------------------------------------#
| 7     | 6      | 5      | 4      | 3     | 2      | 1      | 0      |
#--------------------------------------------------------------------*/

#define SRCON1                                   0x0
#define SRCON1_address                           0xF69
#define SRCON1_position                          0x0
#define SRCON1_size                              0x8
#define SRCON1_value_mask                        0xFF
#define SRCON1_clear_mask                        0x0

#define SRRC1E                                   0x0
#define SRRC1E_address                           0xF69
#define SRRC1E_position                          0x0
#define SRRC1E_size                              0x1
#define SRRC1E_value_mask                        0x1
#define SRRC1E_clear_mask                        0xFE

#define SRRC2E                                   0x1
#define SRRC2E_address                           0xF69
#define SRRC2E_position                          0x1
#define SRRC2E_size                              0x1
#define SRRC2E_value_mask                        0x2
#define SRRC2E_clear_mask                        0xFD

#define SRRCKE                                   0x2
#define SRRCKE_address                           0xF69
#define SRRCKE_position                          0x2
#define SRRCKE_size                              0x1
#define SRRCKE_value_mask                        0x4
#define SRRCKE_clear_mask                        0xFB

#define SRRPE                                    0x3
#define SRRPE_address                            0xF69
#define SRRPE_position                           0x3
#define SRRPE_size                               0x1
#define SRRPE_value_mask                         0x8
#define SRRPE_clear_mask                         0xF7

#define SRSC1E                                   0x4
#define SRSC1E_address                           0xF69
#define SRSC1E_position                          0x4
#define SRSC1E_size                              0x1
#define SRSC1E_value_mask                        0x10
#define SRSC1E_clear_mask                        0xEF

#define SRSC2E                                   0x5
#define SRSC2E_address                           0xF69
#define SRSC2E_position                          0x5
#define SRSC2E_size                              0x1
#define SRSC2E_value_mask                        0x20
#define SRSC2E_clear_mask                        0xDF

#define SRSCKE                                   0x6
#define SRSCKE_address                           0xF69
#define SRSCKE_position                          0x6
#define SRSCKE_size                              0x1
#define SRSCKE_value_mask                        0x40
#define SRSCKE_clear_mask                        0xBF

#define SRSPE                                    0x7
#define SRSPE_address                            0xF69
#define SRSPE_position                           0x7
#define SRSPE_size                               0x1
#define SRSPE_value_mask                         0x80
#define SRSPE_clear_mask                         0x7F


/*---------------------------------------------------------#
| CM2CON0                                            0xF6B |
#----------------------------------------------------------#
| C2ON | C2OUT | C2OE | C2POL | C2SP | C2R | C2CH1 | C2CH0 |
#----------------------------------------------------------#
| 7    | 6     | 5    | 4     | 3    | 2   | 1     | 0     |
#---------------------------------------------------------*/

#define CM2CON0                                  0x0
#define CM2CON0_address                          0xF6B
#define CM2CON0_position                         0x0
#define CM2CON0_size                             0x8
#define CM2CON0_value_mask                       0xFF
#define CM2CON0_clear_mask                       0x0

#define C2CH0                                    0x0
#define C2CH0_address                            0xF6B
#define C2CH0_position                           0x0
#define C2CH0_size                               0x1
#define C2CH0_value_mask                         0x1
#define C2CH0_clear_mask                         0xFE

#define C2CH                                     0x0
#define C2CH_address                             0xF6B
#define C2CH_position                            0x0
#define C2CH_size                                0x2
#define C2CH_value_mask                          0x3
#define C2CH_clear_mask                          0xFC

#define C2CH1                                    0x1
#define C2CH1_address                            0xF6B
#define C2CH1_position                           0x1
#define C2CH1_size                               0x1
#define C2CH1_value_mask                         0x2
#define C2CH1_clear_mask                         0xFD

#define C2R                                      0x2
#define C2R_address                              0xF6B
#define C2R_position                             0x2
#define C2R_size                                 0x1
#define C2R_value_mask                           0x4
#define C2R_clear_mask                           0xFB

#define C2SP                                     0x3
#define C2SP_address                             0xF6B
#define C2SP_position                            0x3
#define C2SP_size                                0x1
#define C2SP_value_mask                          0x8
#define C2SP_clear_mask                          0xF7

#define C2POL                                    0x4
#define C2POL_address                            0xF6B
#define C2POL_position                           0x4
#define C2POL_size                               0x1
#define C2POL_value_mask                         0x10
#define C2POL_clear_mask                         0xEF

#define C2OE                                     0x5
#define C2OE_address                             0xF6B
#define C2OE_position                            0x5
#define C2OE_size                                0x1
#define C2OE_value_mask                          0x20
#define C2OE_clear_mask                          0xDF

#define C2OUT                                    0x6
#define C2OUT_address                            0xF6B
#define C2OUT_position                           0x6
#define C2OUT_size                               0x1
#define C2OUT_value_mask                         0x40
#define C2OUT_clear_mask                         0xBF

#define C2ON                                     0x7
#define C2ON_address                             0xF6B
#define C2ON_position                            0x7
#define C2ON_size                                0x1
#define C2ON_value_mask                          0x80
#define C2ON_clear_mask                          0x7F


/*--------------------------------------------------------------------#
| CM2CON1                                                       0xF6C |
#---------------------------------------------------------------------#
| MC1OUT | MC2OUT | C1RSEL | C2RSEL | C1HYS | C2HYS | C1SYNC | C2SYNC |
#---------------------------------------------------------------------#
| 7      | 6      | 5      | 4      | 3     | 2     | 1      | 0      |
#--------------------------------------------------------------------*/

#define CM2CON1                                  0x0
#define CM2CON1_address                          0xF6C
#define CM2CON1_position                         0x0
#define CM2CON1_size                             0x8
#define CM2CON1_value_mask                       0xFF
#define CM2CON1_clear_mask                       0x0

#define C2SYNC                                   0x0
#define C2SYNC_address                           0xF6C
#define C2SYNC_position                          0x0
#define C2SYNC_size                              0x1
#define C2SYNC_value_mask                        0x1
#define C2SYNC_clear_mask                        0xFE

#define C1SYNC                                   0x1
#define C1SYNC_address                           0xF6C
#define C1SYNC_position                          0x1
#define C1SYNC_size                              0x1
#define C1SYNC_value_mask                        0x2
#define C1SYNC_clear_mask                        0xFD

#define C2HYS                                    0x2
#define C2HYS_address                            0xF6C
#define C2HYS_position                           0x2
#define C2HYS_size                               0x1
#define C2HYS_value_mask                         0x4
#define C2HYS_clear_mask                         0xFB

#define C1HYS                                    0x3
#define C1HYS_address                            0xF6C
#define C1HYS_position                           0x3
#define C1HYS_size                               0x1
#define C1HYS_value_mask                         0x8
#define C1HYS_clear_mask                         0xF7

#define C2RSEL                                   0x4
#define C2RSEL_address                           0xF6C
#define C2RSEL_position                          0x4
#define C2RSEL_size                              0x1
#define C2RSEL_value_mask                        0x10
#define C2RSEL_clear_mask                        0xEF

#define C1RSEL                                   0x5
#define C1RSEL_address                           0xF6C
#define C1RSEL_position                          0x5
#define C1RSEL_size                              0x1
#define C1RSEL_value_mask                        0x20
#define C1RSEL_clear_mask                        0xDF

#define MC2OUT                                   0x6
#define MC2OUT_address                           0xF6C
#define MC2OUT_position                          0x6
#define MC2OUT_size                              0x1
#define MC2OUT_value_mask                        0x40
#define MC2OUT_clear_mask                        0xBF

#define MC1OUT                                   0x7
#define MC1OUT_address                           0xF6C
#define MC1OUT_position                          0x7
#define MC1OUT_size                              0x1
#define MC1OUT_value_mask                        0x80
#define MC1OUT_clear_mask                        0x7F


/*---------------------------------------------------------#
| CM1CON0                                            0xF6D |
#----------------------------------------------------------#
| C1ON | C1OUT | C1OE | C1POL | C1SP | C1R | C1CH1 | C1CH0 |
#----------------------------------------------------------#
| 7    | 6     | 5    | 4     | 3    | 2   | 1     | 0     |
#---------------------------------------------------------*/

#define CM1CON0                                  0x0
#define CM1CON0_address                          0xF6D
#define CM1CON0_position                         0x0
#define CM1CON0_size                             0x8
#define CM1CON0_value_mask                       0xFF
#define CM1CON0_clear_mask                       0x0

#define C1CH                                     0x0
#define C1CH_address                             0xF6D
#define C1CH_position                            0x0
#define C1CH_size                                0x2
#define C1CH_value_mask                          0x3
#define C1CH_clear_mask                          0xFC

#define C1CH0                                    0x0
#define C1CH0_address                            0xF6D
#define C1CH0_position                           0x0
#define C1CH0_size                               0x1
#define C1CH0_value_mask                         0x1
#define C1CH0_clear_mask                         0xFE

#define C1CH1                                    0x1
#define C1CH1_address                            0xF6D
#define C1CH1_position                           0x1
#define C1CH1_size                               0x1
#define C1CH1_value_mask                         0x2
#define C1CH1_clear_mask                         0xFD

#define C1R                                      0x2
#define C1R_address                              0xF6D
#define C1R_position                             0x2
#define C1R_size                                 0x1
#define C1R_value_mask                           0x4
#define C1R_clear_mask                           0xFB

#define C1SP                                     0x3
#define C1SP_address                             0xF6D
#define C1SP_position                            0x3
#define C1SP_size                                0x1
#define C1SP_value_mask                          0x8
#define C1SP_clear_mask                          0xF7

#define C1POL                                    0x4
#define C1POL_address                            0xF6D
#define C1POL_position                           0x4
#define C1POL_size                               0x1
#define C1POL_value_mask                         0x10
#define C1POL_clear_mask                         0xEF

#define C1OE                                     0x5
#define C1OE_address                             0xF6D
#define C1OE_position                            0x5
#define C1OE_size                                0x1
#define C1OE_value_mask                          0x20
#define C1OE_clear_mask                          0xDF

#define C1OUT                                    0x6
#define C1OUT_address                            0xF6D
#define C1OUT_position                           0x6
#define C1OUT_size                               0x1
#define C1OUT_value_mask                         0x40
#define C1OUT_clear_mask                         0xBF

#define C1ON                                     0x7
#define C1ON_address                             0xF6D
#define C1ON_position                            0x7
#define C1ON_size                                0x1
#define C1ON_value_mask                          0x80
#define C1ON_clear_mask                          0x7F


/*------------------------------------------------------#
| SSPMSK                                          0xF6F |
#-------------------------------------------------------#
| MSK7 | MSK6 | MSK5 | MSK4 | MSK3 | MSK2 | MSK1 | MSK0 |
#-------------------------------------------------------#
| 7    | 6    | 5    | 4    | 3    | 2    | 1    | 0    |
#------------------------------------------------------*/

#define SSPMSK                                   0x0
#define SSPMSK_address                           0xF6F
#define SSPMSK_position                          0x0
#define SSPMSK_size                              0x8
#define SSPMSK_value_mask                        0xFF
#define SSPMSK_clear_mask                        0x0

#define MSK0                                     0x0
#define MSK0_address                             0xF6F
#define MSK0_position                            0x0
#define MSK0_size                                0x1
#define MSK0_value_mask                          0x1
#define MSK0_clear_mask                          0xFE

#define MSK                                      0x0
#define MSK_address                              0xF6F
#define MSK_position                             0x0
#define MSK_size                                 0x8
#define MSK_value_mask                           0xFF
#define MSK_clear_mask                           0x0

#define MSK1                                     0x1
#define MSK1_address                             0xF6F
#define MSK1_position                            0x1
#define MSK1_size                                0x1
#define MSK1_value_mask                          0x2
#define MSK1_clear_mask                          0xFD

#define MSK2                                     0x2
#define MSK2_address                             0xF6F
#define MSK2_position                            0x2
#define MSK2_size                                0x1
#define MSK2_value_mask                          0x4
#define MSK2_clear_mask                          0xFB

#define MSK3                                     0x3
#define MSK3_address                             0xF6F
#define MSK3_position                            0x3
#define MSK3_size                                0x1
#define MSK3_value_mask                          0x8
#define MSK3_clear_mask                          0xF7

#define MSK4                                     0x4
#define MSK4_address                             0xF6F
#define MSK4_position                            0x4
#define MSK4_size                                0x1
#define MSK4_value_mask                          0x10
#define MSK4_clear_mask                          0xEF

#define MSK5                                     0x5
#define MSK5_address                             0xF6F
#define MSK5_position                            0x5
#define MSK5_size                                0x1
#define MSK5_value_mask                          0x20
#define MSK5_clear_mask                          0xDF

#define MSK6                                     0x6
#define MSK6_address                             0xF6F
#define MSK6_position                            0x6
#define MSK6_size                                0x1
#define MSK6_value_mask                          0x40
#define MSK6_clear_mask                          0xBF

#define MSK7                                     0x7
#define MSK7_address                             0xF6F
#define MSK7_position                            0x7
#define MSK7_size                                0x1
#define MSK7_value_mask                          0x80
#define MSK7_clear_mask                          0x7F


/*---------------------------------------#
| SLRCON                           0xF76 |
#----------------------------------------#
| - | - | - | - | - | SLRC | SLRB | SLRA |
#----------------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2    | 1    | 0    |
#---------------------------------------*/

#define SLRCON                                   0x0
#define SLRCON_address                           0xF76
#define SLRCON_position                          0x0
#define SLRCON_size                              0x8
#define SLRCON_value_mask                        0xFF
#define SLRCON_clear_mask                        0x0

#define SLRA                                     0x0
#define SLRA_address                             0xF76
#define SLRA_position                            0x0
#define SLRA_size                                0x1
#define SLRA_value_mask                          0x1
#define SLRA_clear_mask                          0xFE

#define SLRB                                     0x1
#define SLRB_address                             0xF76
#define SLRB_position                            0x1
#define SLRB_size                                0x1
#define SLRB_value_mask                          0x2
#define SLRB_clear_mask                          0xFD

#define SLRC                                     0x2
#define SLRC_address                             0xF76
#define SLRC_position                            0x2
#define SLRC_size                                0x1
#define SLRC_value_mask                          0x4
#define SLRC_clear_mask                          0xFB


/*------------------------------------------------------#
| WPUA                                            0xF77 |
#-------------------------------------------------------#
| - | - | WPUA5 | WPUA4 | WPUA3 | WPUA2 | WPUA1 | WPUA0 |
#-------------------------------------------------------#
| 7 | 6 | 5     | 4     | 3     | 2     | 1     | 0     |
#------------------------------------------------------*/

#define WPUA0                                    0x0
#define WPUA0_address                            0xF77
#define WPUA0_position                           0x0
#define WPUA0_size                               0x1
#define WPUA0_value_mask                         0x1
#define WPUA0_clear_mask                         0xFE

#define WPUA                                     0x0
#define WPUA_address                             0xF77
#define WPUA_position                            0x0
#define WPUA_size                                0x6
#define WPUA_value_mask                          0x3F
#define WPUA_clear_mask                          0xC0

#define WPUA1                                    0x1
#define WPUA1_address                            0xF77
#define WPUA1_position                           0x1
#define WPUA1_size                               0x1
#define WPUA1_value_mask                         0x2
#define WPUA1_clear_mask                         0xFD

#define WPUA2                                    0x2
#define WPUA2_address                            0xF77
#define WPUA2_position                           0x2
#define WPUA2_size                               0x1
#define WPUA2_value_mask                         0x4
#define WPUA2_clear_mask                         0xFB

#define WPUA3                                    0x3
#define WPUA3_address                            0xF77
#define WPUA3_position                           0x3
#define WPUA3_size                               0x1
#define WPUA3_value_mask                         0x8
#define WPUA3_clear_mask                         0xF7

#define WPUA4                                    0x4
#define WPUA4_address                            0xF77
#define WPUA4_position                           0x4
#define WPUA4_size                               0x1
#define WPUA4_value_mask                         0x10
#define WPUA4_clear_mask                         0xEF

#define WPUA5                                    0x5
#define WPUA5_address                            0xF77
#define WPUA5_position                           0x5
#define WPUA5_size                               0x1
#define WPUA5_value_mask                         0x20
#define WPUA5_clear_mask                         0xDF


/*----------------------------------------------#
| WPUB                                    0xF78 |
#-----------------------------------------------#
| WPUB7 | WPUB6 | WPUB5 | WPUB4 | - | - | - | - |
#-----------------------------------------------#
| 7     | 6     | 5     | 4     | 3 | 2 | 1 | 0 |
#----------------------------------------------*/

#define WPUB                                     0x4
#define WPUB_address                             0xF78
#define WPUB_position                            0x4
#define WPUB_size                                0x4
#define WPUB_value_mask                          0xF0
#define WPUB_clear_mask                          0xF

#define WPUB4                                    0x4
#define WPUB4_address                            0xF78
#define WPUB4_position                           0x4
#define WPUB4_size                               0x1
#define WPUB4_value_mask                         0x10
#define WPUB4_clear_mask                         0xEF

#define WPUB5                                    0x5
#define WPUB5_address                            0xF78
#define WPUB5_position                           0x5
#define WPUB5_size                               0x1
#define WPUB5_value_mask                         0x20
#define WPUB5_clear_mask                         0xDF

#define WPUB6                                    0x6
#define WPUB6_address                            0xF78
#define WPUB6_position                           0x6
#define WPUB6_size                               0x1
#define WPUB6_value_mask                         0x40
#define WPUB6_clear_mask                         0xBF

#define WPUB7                                    0x7
#define WPUB7_address                            0xF78
#define WPUB7_position                           0x7
#define WPUB7_size                               0x1
#define WPUB7_value_mask                         0x80
#define WPUB7_clear_mask                         0x7F


/*------------------------------------------------------#
| IOCA                                            0xF79 |
#-------------------------------------------------------#
| - | - | IOCA5 | IOCA4 | IOCA3 | IOCA2 | IOCA1 | IOCA0 |
#-------------------------------------------------------#
| 7 | 6 | 5     | 4     | 3     | 2     | 1     | 0     |
#------------------------------------------------------*/

#define IOCA0                                    0x0
#define IOCA0_address                            0xF79
#define IOCA0_position                           0x0
#define IOCA0_size                               0x1
#define IOCA0_value_mask                         0x1
#define IOCA0_clear_mask                         0xFE

#define IOCA                                     0x0
#define IOCA_address                             0xF79
#define IOCA_position                            0x0
#define IOCA_size                                0x6
#define IOCA_value_mask                          0x3F
#define IOCA_clear_mask                          0xC0

#define IOCA1                                    0x1
#define IOCA1_address                            0xF79
#define IOCA1_position                           0x1
#define IOCA1_size                               0x1
#define IOCA1_value_mask                         0x2
#define IOCA1_clear_mask                         0xFD

#define IOCA2                                    0x2
#define IOCA2_address                            0xF79
#define IOCA2_position                           0x2
#define IOCA2_size                               0x1
#define IOCA2_value_mask                         0x4
#define IOCA2_clear_mask                         0xFB

#define IOCA3                                    0x3
#define IOCA3_address                            0xF79
#define IOCA3_position                           0x3
#define IOCA3_size                               0x1
#define IOCA3_value_mask                         0x8
#define IOCA3_clear_mask                         0xF7

#define IOCA4                                    0x4
#define IOCA4_address                            0xF79
#define IOCA4_position                           0x4
#define IOCA4_size                               0x1
#define IOCA4_value_mask                         0x10
#define IOCA4_clear_mask                         0xEF

#define IOCA5                                    0x5
#define IOCA5_address                            0xF79
#define IOCA5_position                           0x5
#define IOCA5_size                               0x1
#define IOCA5_value_mask                         0x20
#define IOCA5_clear_mask                         0xDF


/*----------------------------------------------#
| IOCB                                    0xF7A |
#-----------------------------------------------#
| IOCB7 | IOCB6 | IOCB5 | IOCB4 | - | - | - | - |
#-----------------------------------------------#
| 7     | 6     | 5     | 4     | 3 | 2 | 1 | 0 |
#----------------------------------------------*/

#define IOCB                                     0x4
#define IOCB_address                             0xF7A
#define IOCB_position                            0x4
#define IOCB_size                                0x4
#define IOCB_value_mask                          0xF0
#define IOCB_clear_mask                          0xF

#define IOCB4                                    0x4
#define IOCB4_address                            0xF7A
#define IOCB4_position                           0x4
#define IOCB4_size                               0x1
#define IOCB4_value_mask                         0x10
#define IOCB4_clear_mask                         0xEF

#define IOCB5                                    0x5
#define IOCB5_address                            0xF7A
#define IOCB5_position                           0x5
#define IOCB5_size                               0x1
#define IOCB5_value_mask                         0x20
#define IOCB5_clear_mask                         0xDF

#define IOCB6                                    0x6
#define IOCB6_address                            0xF7A
#define IOCB6_position                           0x6
#define IOCB6_size                               0x1
#define IOCB6_value_mask                         0x40
#define IOCB6_clear_mask                         0xBF

#define IOCB7                                    0x7
#define IOCB7_address                            0xF7A
#define IOCB7_position                           0x7
#define IOCB7_size                               0x1
#define IOCB7_value_mask                         0x80
#define IOCB7_clear_mask                         0x7F


/*--------------------------------------------------------------------#
| ANSEL                                                         0xF7E |
#---------------------------------------------------------------------#
| ANSEL7 | ANSEL6 | ANSEL5 | ANSEL4 | ANSEL3 | ANSEL2 | ANS1 | ANSEL0 |
#---------------------------------------------------------------------#
| 7      | 6      | 5      | 4      | 3      | 2      | 1    | 0      |
#--------------------------------------------------------------------*/

#define ANSEL                                    0x0
#define ANSEL_address                            0xF7E
#define ANSEL_position                           0x0
#define ANSEL_size                               0x8
#define ANSEL_value_mask                         0xFF
#define ANSEL_clear_mask                         0x0

#define ANSEL0                                   0x0
#define ANSEL0_address                           0xF7E
#define ANSEL0_position                          0x0
#define ANSEL0_size                              0x1
#define ANSEL0_value_mask                        0x1
#define ANSEL0_clear_mask                        0xFE

#define ANS0                                     0x0
#define ANS0_address                             0xF7E
#define ANS0_position                            0x0
#define ANS0_size                                0x1
#define ANS0_value_mask                          0x1
#define ANS0_clear_mask                          0xFE

#define ANS1                                     0x1
#define ANS1_address                             0xF7E
#define ANS1_position                            0x1
#define ANS1_size                                0x1
#define ANS1_value_mask                          0x2
#define ANS1_clear_mask                          0xFD

#define ANSEL1                                   0x1
#define ANSEL1_address                           0xF7E
#define ANSEL1_position                          0x1
#define ANSEL1_size                              0x1
#define ANSEL1_value_mask                        0x2
#define ANSEL1_clear_mask                        0xFD

#define ANSEL2                                   0x2
#define ANSEL2_address                           0xF7E
#define ANSEL2_position                          0x2
#define ANSEL2_size                              0x1
#define ANSEL2_value_mask                        0x4
#define ANSEL2_clear_mask                        0xFB

#define ANS2                                     0x2
#define ANS2_address                             0xF7E
#define ANS2_position                            0x2
#define ANS2_size                                0x1
#define ANS2_value_mask                          0x4
#define ANS2_clear_mask                          0xFB

#define ANSEL3                                   0x3
#define ANSEL3_address                           0xF7E
#define ANSEL3_position                          0x3
#define ANSEL3_size                              0x1
#define ANSEL3_value_mask                        0x8
#define ANSEL3_clear_mask                        0xF7

#define ANS3                                     0x3
#define ANS3_address                             0xF7E
#define ANS3_position                            0x3
#define ANS3_size                                0x1
#define ANS3_value_mask                          0x8
#define ANS3_clear_mask                          0xF7

#define ANSEL4                                   0x4
#define ANSEL4_address                           0xF7E
#define ANSEL4_position                          0x4
#define ANSEL4_size                              0x1
#define ANSEL4_value_mask                        0x10
#define ANSEL4_clear_mask                        0xEF

#define ANS4                                     0x4
#define ANS4_address                             0xF7E
#define ANS4_position                            0x4
#define ANS4_size                                0x1
#define ANS4_value_mask                          0x10
#define ANS4_clear_mask                          0xEF

#define ANSEL5                                   0x5
#define ANSEL5_address                           0xF7E
#define ANSEL5_position                          0x5
#define ANSEL5_size                              0x1
#define ANSEL5_value_mask                        0x20
#define ANSEL5_clear_mask                        0xDF

#define ANS5                                     0x5
#define ANS5_address                             0xF7E
#define ANS5_position                            0x5
#define ANS5_size                                0x1
#define ANS5_value_mask                          0x20
#define ANS5_clear_mask                          0xDF

#define ANSEL6                                   0x6
#define ANSEL6_address                           0xF7E
#define ANSEL6_position                          0x6
#define ANSEL6_size                              0x1
#define ANSEL6_value_mask                        0x40
#define ANSEL6_clear_mask                        0xBF

#define ANS6                                     0x6
#define ANS6_address                             0xF7E
#define ANS6_position                            0x6
#define ANS6_size                                0x1
#define ANS6_value_mask                          0x40
#define ANS6_clear_mask                          0xBF

#define ANSEL7                                   0x7
#define ANSEL7_address                           0xF7E
#define ANSEL7_position                          0x7
#define ANSEL7_size                              0x1
#define ANSEL7_value_mask                        0x80
#define ANSEL7_clear_mask                        0x7F

#define ANS7                                     0x7
#define ANS7_address                             0xF7E
#define ANS7_position                            0x7
#define ANS7_size                                0x1
#define ANS7_value_mask                          0x80
#define ANS7_clear_mask                          0x7F


/*--------------------------------------------#
| ANSELH                                0xF7F |
#---------------------------------------------#
| - | - | - | - | ANS11 | ANS10 | ANS9 | ANS8 |
#---------------------------------------------#
| 7 | 6 | 5 | 4 | 3     | 2     | 1    | 0    |
#--------------------------------------------*/

#define ANS8                                     0x0
#define ANS8_address                             0xF7F
#define ANS8_position                            0x0
#define ANS8_size                                0x1
#define ANS8_value_mask                          0x1
#define ANS8_clear_mask                          0xFE

#define ANSEL8                                   0x0
#define ANSEL8_address                           0xF7F
#define ANSEL8_position                          0x0
#define ANSEL8_size                              0x1
#define ANSEL8_value_mask                        0x1
#define ANSEL8_clear_mask                        0xFE

#define ANSELH                                   0x0
#define ANSELH_address                           0xF7F
#define ANSELH_position                          0x0
#define ANSELH_size                              0x4
#define ANSELH_value_mask                        0xF
#define ANSELH_clear_mask                        0xF0

#define ANS9                                     0x1
#define ANS9_address                             0xF7F
#define ANS9_position                            0x1
#define ANS9_size                                0x1
#define ANS9_value_mask                          0x2
#define ANS9_clear_mask                          0xFD

#define ANSEL9                                   0x1
#define ANSEL9_address                           0xF7F
#define ANSEL9_position                          0x1
#define ANSEL9_size                              0x1
#define ANSEL9_value_mask                        0x2
#define ANSEL9_clear_mask                        0xFD

#define ANSEL10                                  0x2
#define ANSEL10_address                          0xF7F
#define ANSEL10_position                         0x2
#define ANSEL10_size                             0x1
#define ANSEL10_value_mask                       0x4
#define ANSEL10_clear_mask                       0xFB

#define ANS10                                    0x2
#define ANS10_address                            0xF7F
#define ANS10_position                           0x2
#define ANS10_size                               0x1
#define ANS10_value_mask                         0x4
#define ANS10_clear_mask                         0xFB

#define ANS11                                    0x3
#define ANS11_address                            0xF7F
#define ANS11_position                           0x3
#define ANS11_size                               0x1
#define ANS11_value_mask                         0x8
#define ANS11_clear_mask                         0xF7

#define ANSEL11                                  0x3
#define ANSEL11_address                          0xF7F
#define ANSEL11_position                         0x3
#define ANSEL11_size                             0x1
#define ANSEL11_value_mask                       0x8
#define ANSEL11_clear_mask                       0xF7


/*---------------------------------------------------#
| PORTA                                        0xF80 |
#----------------------------------------------------#
| - | - | CLKIN | CLKOUT | RA3 | AN2 | AN1 | ULPWUIN |
#----------------------------------------------------#
| 7 | 6 | 5     | 4      | 3   | 2   | 1   | 0       |
#---------------------------------------------------*/

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

#define C1INP                                    0x0
#define C1INP_address                            0xF80
#define C1INP_position                           0x0
#define C1INP_size                               0x1
#define C1INP_value_mask                         0x1
#define C1INP_clear_mask                         0xFE

#define AN0                                      0x0
#define AN0_address                              0xF80
#define AN0_position                             0x0
#define AN0_size                                 0x1
#define AN0_value_mask                           0x1
#define AN0_clear_mask                           0xFE

#define PGD                                      0x0
#define PGD_address                              0xF80
#define PGD_position                             0x0
#define PGD_size                                 0x1
#define PGD_value_mask                           0x1
#define PGD_clear_mask                           0xFE

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

#define INT0                                     0x0
#define INT0_address                             0xF80
#define INT0_position                            0x0
#define INT0_size                                0x1
#define INT0_value_mask                          0x1
#define INT0_clear_mask                          0xFE

#define VREFM                                    0x0
#define VREFM_address                            0xF80
#define VREFM_position                           0x0
#define VREFM_size                               0x1
#define VREFM_value_mask                         0x1
#define VREFM_clear_mask                         0xFE

#define AN1                                      0x1
#define AN1_address                              0xF80
#define AN1_position                             0x1
#define AN1_size                                 0x1
#define AN1_value_mask                           0x2
#define AN1_clear_mask                           0xFD

#define PGC                                      0x1
#define PGC_address                              0xF80
#define PGC_position                             0x1
#define PGC_size                                 0x1
#define PGC_value_mask                           0x2
#define PGC_clear_mask                           0xFD

#define PORTA_RA1                                0x1
#define PORTA_RA1_address                        0xF80
#define PORTA_RA1_position                       0x1
#define PORTA_RA1_size                           0x1
#define PORTA_RA1_value_mask                     0x2
#define PORTA_RA1_clear_mask                     0xFD

#define INT1                                     0x1
#define INT1_address                             0xF80
#define INT1_position                            0x1
#define INT1_size                                0x1
#define INT1_value_mask                          0x2
#define INT1_clear_mask                          0xFD

#define VREFP                                    0x1
#define VREFP_address                            0xF80
#define VREFP_position                           0x1
#define VREFP_size                               0x1
#define VREFP_value_mask                         0x2
#define VREFP_clear_mask                         0xFD

#define C12IN0M                                  0x1
#define C12IN0M_address                          0xF80
#define C12IN0M_position                         0x1
#define C12IN0M_size                             0x1
#define C12IN0M_value_mask                       0x2
#define C12IN0M_clear_mask                       0xFD

#define PORTA_RA2                                0x2
#define PORTA_RA2_address                        0xF80
#define PORTA_RA2_position                       0x2
#define PORTA_RA2_size                           0x1
#define PORTA_RA2_value_mask                     0x4
#define PORTA_RA2_clear_mask                     0xFB

#define AN2                                      0x2
#define AN2_address                              0xF80
#define AN2_position                             0x2
#define AN2_size                                 0x1
#define AN2_value_mask                           0x4
#define AN2_clear_mask                           0xFB

#define T0CKI                                    0x2
#define T0CKI_address                            0xF80
#define T0CKI_position                           0x2
#define T0CKI_size                               0x1
#define T0CKI_value_mask                         0x4
#define T0CKI_clear_mask                         0xFB

#define INT2                                     0x2
#define INT2_address                             0xF80
#define INT2_position                            0x2
#define INT2_size                                0x1
#define INT2_value_mask                          0x4
#define INT2_clear_mask                          0xFB

#define SRQ                                      0x2
#define SRQ_address                              0xF80
#define SRQ_position                             0x2
#define SRQ_size                                 0x1
#define SRQ_value_mask                           0x4
#define SRQ_clear_mask                           0xFB

#define RA3                                      0x3
#define RA3_address                              0xF80
#define RA3_position                             0x3
#define RA3_size                                 0x1
#define RA3_value_mask                           0x8
#define RA3_clear_mask                           0xF7

#define VPP                                      0x3
#define VPP_address                              0xF80
#define VPP_position                             0x3
#define VPP_size                                 0x1
#define VPP_value_mask                           0x8
#define VPP_clear_mask                           0xF7

#define NOT_MCLR                                 0x3
#define NOT_MCLR_address                         0xF80
#define NOT_MCLR_position                        0x3
#define NOT_MCLR_size                            0x1
#define NOT_MCLR_value_mask                      0x8
#define NOT_MCLR_clear_mask                      0xF7

#define MCLR                                     0x3
#define MCLR_address                             0xF80
#define MCLR_position                            0x3
#define MCLR_size                                0x1
#define MCLR_value_mask                          0x8
#define MCLR_clear_mask                          0xF7

#define nMCLR                                    0x3
#define nMCLR_address                            0xF80
#define nMCLR_position                           0x3
#define nMCLR_size                               0x1
#define nMCLR_value_mask                         0x8
#define nMCLR_clear_mask                         0xF7

#define CLKOUT                                   0x4
#define CLKOUT_address                           0xF80
#define CLKOUT_position                          0x4
#define CLKOUT_size                              0x1
#define CLKOUT_value_mask                        0x10
#define CLKOUT_clear_mask                        0xEF

#define AN3                                      0x4
#define AN3_address                              0xF80
#define AN3_position                             0x4
#define AN3_size                                 0x1
#define AN3_value_mask                           0x10
#define AN3_clear_mask                           0xEF

#define PORTA_RA4                                0x4
#define PORTA_RA4_address                        0xF80
#define PORTA_RA4_position                       0x4
#define PORTA_RA4_size                           0x1
#define PORTA_RA4_value_mask                     0x10
#define PORTA_RA4_clear_mask                     0xEF

#define OSC2                                     0x4
#define OSC2_address                             0xF80
#define OSC2_position                            0x4
#define OSC2_size                                0x1
#define OSC2_value_mask                          0x10
#define OSC2_clear_mask                          0xEF

#define CLKIN                                    0x5
#define CLKIN_address                            0xF80
#define CLKIN_position                           0x5
#define CLKIN_size                               0x1
#define CLKIN_value_mask                         0x20
#define CLKIN_clear_mask                         0xDF

#define PORTA_RA5                                0x5
#define PORTA_RA5_address                        0xF80
#define PORTA_RA5_position                       0x5
#define PORTA_RA5_size                           0x1
#define PORTA_RA5_value_mask                     0x20
#define PORTA_RA5_clear_mask                     0xDF

#define T13CKI                                   0x5
#define T13CKI_address                           0xF80
#define T13CKI_position                          0x5
#define T13CKI_size                              0x1
#define T13CKI_value_mask                        0x20
#define T13CKI_clear_mask                        0xDF

#define OSC1                                     0x5
#define OSC1_address                             0xF80
#define OSC1_position                            0x5
#define OSC1_size                                0x1
#define OSC1_value_mask                          0x20
#define OSC1_clear_mask                          0xDF

#define LVDIN                                    0x5
#define LVDIN_address                            0xF80
#define LVDIN_position                           0x5
#define LVDIN_size                               0x1
#define LVDIN_value_mask                         0x20
#define LVDIN_clear_mask                         0xDF


/*---------------------------------------#
| PORTB                            0xF81 |
#----------------------------------------#
| CK | SCL | AN11 | AN10 | - | - | - | - |
#----------------------------------------#
| 7  | 6   | 5    | 4    | 3 | 2 | 1 | 0 |
#---------------------------------------*/

#define PORTB                                    0x0
#define PORTB_address                            0xF81
#define PORTB_position                           0x0
#define PORTB_size                               0x8
#define PORTB_value_mask                         0xFF
#define PORTB_clear_mask                         0x0

#define SDA                                      0x4
#define SDA_address                              0xF81
#define SDA_position                             0x4
#define SDA_size                                 0x1
#define SDA_value_mask                           0x10
#define SDA_clear_mask                           0xEF

#define AN10                                     0x4
#define AN10_address                             0xF81
#define AN10_position                            0x4
#define AN10_size                                0x1
#define AN10_value_mask                          0x10
#define AN10_clear_mask                          0xEF

#define SDI                                      0x4
#define SDI_address                              0xF81
#define SDI_position                             0x4
#define SDI_size                                 0x1
#define SDI_value_mask                           0x10
#define SDI_clear_mask                           0xEF

#define PORTB_RB4                                0x4
#define PORTB_RB4_address                        0xF81
#define PORTB_RB4_position                       0x4
#define PORTB_RB4_size                           0x1
#define PORTB_RB4_value_mask                     0x10
#define PORTB_RB4_clear_mask                     0xEF

#define RX                                       0x5
#define RX_address                               0xF81
#define RX_position                              0x5
#define RX_size                                  0x1
#define RX_value_mask                            0x20
#define RX_clear_mask                            0xDF

#define PORTB_RB5                                0x5
#define PORTB_RB5_address                        0xF81
#define PORTB_RB5_position                       0x5
#define PORTB_RB5_size                           0x1
#define PORTB_RB5_value_mask                     0x20
#define PORTB_RB5_clear_mask                     0xDF

#define AN11                                     0x5
#define AN11_address                             0xF81
#define AN11_position                            0x5
#define AN11_size                                0x1
#define AN11_value_mask                          0x20
#define AN11_clear_mask                          0xDF

#define DT                                       0x5
#define DT_address                               0xF81
#define DT_position                              0x5
#define DT_size                                  0x1
#define DT_value_mask                            0x20
#define DT_clear_mask                            0xDF

#define SCL                                      0x6
#define SCL_address                              0xF81
#define SCL_position                             0x6
#define SCL_size                                 0x1
#define SCL_value_mask                           0x40
#define SCL_clear_mask                           0xBF

#define SCK                                      0x6
#define SCK_address                              0xF81
#define SCK_position                             0x6
#define SCK_size                                 0x1
#define SCK_value_mask                           0x40
#define SCK_clear_mask                           0xBF

#define PORTB_RB6                                0x6
#define PORTB_RB6_address                        0xF81
#define PORTB_RB6_position                       0x6
#define PORTB_RB6_size                           0x1
#define PORTB_RB6_value_mask                     0x40
#define PORTB_RB6_clear_mask                     0xBF

#define CK                                       0x7
#define CK_address                               0xF81
#define CK_position                              0x7
#define CK_size                                  0x1
#define CK_value_mask                            0x80
#define CK_clear_mask                            0x7F

#define PORTB_RB7                                0x7
#define PORTB_RB7_address                        0xF81
#define PORTB_RB7_position                       0x7
#define PORTB_RB7_size                           0x1
#define PORTB_RB7_value_mask                     0x80
#define PORTB_RB7_clear_mask                     0x7F

#define TX                                       0x7
#define TX_address                               0xF81
#define TX_position                              0x7
#define TX_size                                  0x1
#define TX_value_mask                            0x80
#define TX_clear_mask                            0x7F


/*-----------------------------------------------#
| PORTC                                    0xF82 |
#------------------------------------------------#
| AN9 | AN8 | CCP1 | P1B | AN7 | AN6 | AN5 | AN4 |
#------------------------------------------------#
| 7   | 6   | 5    | 4   | 3   | 2   | 1   | 0   |
#-----------------------------------------------*/

#define PORTC                                    0x0
#define PORTC_address                            0xF82
#define PORTC_position                           0x0
#define PORTC_size                               0x8
#define PORTC_value_mask                         0xFF
#define PORTC_clear_mask                         0x0

#define PORTC_RC0                                0x0
#define PORTC_RC0_address                        0xF82
#define PORTC_RC0_position                       0x0
#define PORTC_RC0_size                           0x1
#define PORTC_RC0_value_mask                     0x1
#define PORTC_RC0_clear_mask                     0xFE

#define C12INP                                   0x0
#define C12INP_address                           0xF82
#define C12INP_position                          0x0
#define C12INP_size                              0x1
#define C12INP_value_mask                        0x1
#define C12INP_clear_mask                        0xFE

#define AN4                                      0x0
#define AN4_address                              0xF82
#define AN4_position                             0x0
#define AN4_size                                 0x1
#define AN4_value_mask                           0x1
#define AN4_clear_mask                           0xFE

#define C2INP                                    0x0
#define C2INP_address                            0xF82
#define C2INP_position                           0x0
#define C2INP_size                               0x1
#define C2INP_value_mask                         0x1
#define C2INP_clear_mask                         0xFE

#define AN5                                      0x1
#define AN5_address                              0xF82
#define AN5_position                             0x1
#define AN5_size                                 0x1
#define AN5_value_mask                           0x2
#define AN5_clear_mask                           0xFD

#define CCP2                                     0x1
#define CCP2_address                             0xF82
#define CCP2_position                            0x1
#define CCP2_size                                0x1
#define CCP2_value_mask                          0x2
#define CCP2_clear_mask                          0xFD

#define C12IN1M                                  0x1
#define C12IN1M_address                          0xF82
#define C12IN1M_position                         0x1
#define C12IN1M_size                             0x1
#define C12IN1M_value_mask                       0x2
#define C12IN1M_clear_mask                       0xFD

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

#define PA1                                      0x2
#define PA1_address                              0xF82
#define PA1_position                             0x2
#define PA1_size                                 0x1
#define PA1_value_mask                           0x4
#define PA1_clear_mask                           0xFB

#define AN6                                      0x2
#define AN6_address                              0xF82
#define AN6_position                             0x2
#define AN6_size                                 0x1
#define AN6_value_mask                           0x4
#define AN6_clear_mask                           0xFB

#define P1D                                      0x2
#define P1D_address                              0xF82
#define P1D_position                             0x2
#define P1D_size                                 0x1
#define P1D_value_mask                           0x4
#define P1D_clear_mask                           0xFB

#define C12IN2M                                  0x2
#define C12IN2M_address                          0xF82
#define C12IN2M_position                         0x2
#define C12IN2M_size                             0x1
#define C12IN2M_value_mask                       0x4
#define C12IN2M_clear_mask                       0xFB

#define PORTC_RC2                                0x2
#define PORTC_RC2_address                        0xF82
#define PORTC_RC2_position                       0x2
#define PORTC_RC2_size                           0x1
#define PORTC_RC2_value_mask                     0x4
#define PORTC_RC2_clear_mask                     0xFB

#define AN7                                      0x3
#define AN7_address                              0xF82
#define AN7_position                             0x3
#define AN7_size                                 0x1
#define AN7_value_mask                           0x8
#define AN7_clear_mask                           0xF7

#define PGM                                      0x3
#define PGM_address                              0xF82
#define PGM_position                             0x3
#define PGM_size                                 0x1
#define PGM_value_mask                           0x8
#define PGM_clear_mask                           0xF7

#define C12IN3M                                  0x3
#define C12IN3M_address                          0xF82
#define C12IN3M_position                         0x3
#define C12IN3M_size                             0x1
#define C12IN3M_value_mask                       0x8
#define C12IN3M_clear_mask                       0xF7

#define P1C                                      0x3
#define P1C_address                              0xF82
#define P1C_position                             0x3
#define P1C_size                                 0x1
#define P1C_value_mask                           0x8
#define P1C_clear_mask                           0xF7

#define PORTC_RC3                                0x3
#define PORTC_RC3_address                        0xF82
#define PORTC_RC3_position                       0x3
#define PORTC_RC3_size                           0x1
#define PORTC_RC3_value_mask                     0x8
#define PORTC_RC3_clear_mask                     0xF7

#define C12OUT                                   0x4
#define C12OUT_address                           0xF82
#define C12OUT_position                          0x4
#define C12OUT_size                              0x1
#define C12OUT_value_mask                        0x10
#define C12OUT_clear_mask                        0xEF

#define P1B                                      0x4
#define P1B_address                              0xF82
#define P1B_position                             0x4
#define P1B_size                                 0x1
#define P1B_value_mask                           0x10
#define P1B_clear_mask                           0xEF

#define SRNQ                                     0x4
#define SRNQ_address                             0xF82
#define SRNQ_position                            0x4
#define SRNQ_size                                0x1
#define SRNQ_value_mask                          0x10
#define SRNQ_clear_mask                          0xEF

#define PORTC_RC4                                0x4
#define PORTC_RC4_address                        0xF82
#define PORTC_RC4_position                       0x4
#define PORTC_RC4_size                           0x1
#define PORTC_RC4_value_mask                     0x10
#define PORTC_RC4_clear_mask                     0xEF

#define CCP1                                     0x5
#define CCP1_address                             0xF82
#define CCP1_position                            0x5
#define CCP1_size                                0x1
#define CCP1_value_mask                          0x20
#define CCP1_clear_mask                          0xDF

#define P1A                                      0x5
#define P1A_address                              0xF82
#define P1A_position                             0x5
#define P1A_size                                 0x1
#define P1A_value_mask                           0x20
#define P1A_clear_mask                           0xDF

#define PORTC_RC5                                0x5
#define PORTC_RC5_address                        0xF82
#define PORTC_RC5_position                       0x5
#define PORTC_RC5_size                           0x1
#define PORTC_RC5_value_mask                     0x20
#define PORTC_RC5_clear_mask                     0xDF

#define AN8                                      0x6
#define AN8_address                              0xF82
#define AN8_position                             0x6
#define AN8_size                                 0x1
#define AN8_value_mask                           0x40
#define AN8_clear_mask                           0xBF

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

#define SS                                       0x6
#define SS_address                               0xF82
#define SS_position                              0x6
#define SS_size                                  0x1
#define SS_value_mask                            0x40
#define SS_clear_mask                            0xBF

#define PORTC_RC6                                0x6
#define PORTC_RC6_address                        0xF82
#define PORTC_RC6_position                       0x6
#define PORTC_RC6_size                           0x1
#define PORTC_RC6_value_mask                     0x40
#define PORTC_RC6_clear_mask                     0xBF

#define AN9                                      0x7
#define AN9_address                              0xF82
#define AN9_position                             0x7
#define AN9_size                                 0x1
#define AN9_value_mask                           0x80
#define AN9_clear_mask                           0x7F

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


/*--------------------------------------------------#
| LATA                                        0xF89 |
#---------------------------------------------------#
| - | - | LATA5 | LATA4 | - | LATA2 | LATA1 | LATA0 |
#---------------------------------------------------#
| 7 | 6 | 5     | 4     | 3 | 2     | 1     | 0     |
#--------------------------------------------------*/

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


/*--------------------------------------#
| LATB                            0xF8A |
#---------------------------------------#
| LB7 | LB6 | LB5 | LB4 | - | - | - | - |
#---------------------------------------#
| 7   | 6   | 5   | 4   | 3 | 2 | 1 | 0 |
#--------------------------------------*/

#define LATB                                     0x0
#define LATB_address                             0xF8A
#define LATB_position                            0x0
#define LATB_size                                0x8
#define LATB_value_mask                          0xFF
#define LATB_clear_mask                          0x0

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


/*----------------------------------------------------------#
| TRISA                                               0xF92 |
#-----------------------------------------------------------#
| - | - | TRISA_RA5 | TRISA4 | - | TRISA2 | TRISA1 | TRISA0 |
#-----------------------------------------------------------#
| 7 | 6 | 5         | 4      | 3 | 2      | 1      | 0      |
#----------------------------------------------------------*/

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


/*--------------------------------------------------#
| TRISB                                       0xF93 |
#---------------------------------------------------#
| TRISB7 | TRISB6 | TRISB5 | TRISB4 | - | - | - | - |
#---------------------------------------------------#
| 7      | 6      | 5      | 4      | 3 | 2 | 1 | 0 |
#--------------------------------------------------*/

#define TRISB                                    0x0
#define TRISB_address                            0xF93
#define TRISB_position                           0x0
#define TRISB_size                               0x8
#define TRISB_value_mask                         0xFF
#define TRISB_clear_mask                         0x0

#define TRISB4                                   0x4
#define TRISB4_address                           0xF93
#define TRISB4_position                          0x4
#define TRISB4_size                              0x1
#define TRISB4_value_mask                        0x10
#define TRISB4_clear_mask                        0xEF

#define TRISB_RB4                                0x4
#define TRISB_RB4_address                        0xF93
#define TRISB_RB4_position                       0x4
#define TRISB_RB4_size                           0x1
#define TRISB_RB4_value_mask                     0x10
#define TRISB_RB4_clear_mask                     0xEF

#define TRISB5                                   0x5
#define TRISB5_address                           0xF93
#define TRISB5_position                          0x5
#define TRISB5_size                              0x1
#define TRISB5_value_mask                        0x20
#define TRISB5_clear_mask                        0xDF

#define TRISB_RB5                                0x5
#define TRISB_RB5_address                        0xF93
#define TRISB_RB5_position                       0x5
#define TRISB_RB5_size                           0x1
#define TRISB_RB5_value_mask                     0x20
#define TRISB_RB5_clear_mask                     0xDF

#define TRISB6                                   0x6
#define TRISB6_address                           0xF93
#define TRISB6_position                          0x6
#define TRISB6_size                              0x1
#define TRISB6_value_mask                        0x40
#define TRISB6_clear_mask                        0xBF

#define TRISB_RB6                                0x6
#define TRISB_RB6_address                        0xF93
#define TRISB_RB6_position                       0x6
#define TRISB_RB6_size                           0x1
#define TRISB_RB6_value_mask                     0x40
#define TRISB_RB6_clear_mask                     0xBF

#define TRISB7                                   0x7
#define TRISB7_address                           0xF93
#define TRISB7_position                          0x7
#define TRISB7_size                              0x1
#define TRISB7_value_mask                        0x80
#define TRISB7_clear_mask                        0x7F

#define TRISB_RB7                                0x7
#define TRISB_RB7_address                        0xF93
#define TRISB_RB7_position                       0x7
#define TRISB_RB7_size                           0x1
#define TRISB_RB7_value_mask                     0x80
#define TRISB_RB7_clear_mask                     0x7F


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


/*-----------------------------------------------------#
| PIE2                                           0xFA0 |
#------------------------------------------------------#
| OSCFIE | C1IE | C2IE | EEIE | BCLIE | - | TMR3IE | - |
#------------------------------------------------------#
| 7      | 6    | 5    | 4    | 3     | 2 | 1      | 0 |
#-----------------------------------------------------*/

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

#define C2IE                                     0x5
#define C2IE_address                             0xFA0
#define C2IE_position                            0x5
#define C2IE_size                                0x1
#define C2IE_value_mask                          0x20
#define C2IE_clear_mask                          0xDF

#define C1IE                                     0x6
#define C1IE_address                             0xFA0
#define C1IE_position                            0x6
#define C1IE_size                                0x1
#define C1IE_value_mask                          0x40
#define C1IE_clear_mask                          0xBF

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


/*-----------------------------------------------------#
| PIR2                                           0xFA1 |
#------------------------------------------------------#
| OSCFIF | C1IF | C2IF | EEIF | BCLIF | - | TMR3IF | - |
#------------------------------------------------------#
| 7      | 6    | 5    | 4    | 3     | 2 | 1      | 0 |
#-----------------------------------------------------*/

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

#define C2IF                                     0x5
#define C2IF_address                             0xFA1
#define C2IF_position                            0x5
#define C2IF_size                                0x1
#define C2IF_value_mask                          0x20
#define C2IF_clear_mask                          0xDF

#define C1IF                                     0x6
#define C1IF_address                             0xFA1
#define C1IF_position                            0x6
#define C1IF_size                                0x1
#define C1IF_value_mask                          0x40
#define C1IF_clear_mask                          0xBF

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


/*-----------------------------------------------------#
| IPR2                                           0xFA2 |
#------------------------------------------------------#
| OSCFIP | C1IP | C2IP | EEIP | BCLIP | - | TMR3IP | - |
#------------------------------------------------------#
| 7      | 6    | 5    | 4    | 3     | 2 | 1      | 0 |
#-----------------------------------------------------*/

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

#define C2IP                                     0x5
#define C2IP_address                             0xFA2
#define C2IP_position                            0x5
#define C2IP_size                                0x1
#define C2IP_value_mask                          0x20
#define C2IP_clear_mask                          0xDF

#define C1IP                                     0x6
#define C1IP_address                             0xFA2
#define C1IP_position                            0x6
#define C1IP_size                                0x1
#define C1IP_value_mask                          0x40
#define C1IP_clear_mask                          0xBF

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


/*----------------------------------------------------------------------#
| EEADR                                                           0xFA9 |
#-----------------------------------------------------------------------#
| EEADR7 | EEADR6 | EEADR5 | EEADR4 | EEADR3 | EEADR2 | EEADR1 | EEADR0 |
#-----------------------------------------------------------------------#
| 7      | 6      | 5      | 4      | 3      | 2      | 1      | 0      |
#----------------------------------------------------------------------*/

#define EEADR                                    0x0
#define EEADR_address                            0xFA9
#define EEADR_position                           0x0
#define EEADR_size                               0x8
#define EEADR_value_mask                         0xFF
#define EEADR_clear_mask                         0x0

#define EEADR0                                   0x0
#define EEADR0_address                           0xFA9
#define EEADR0_position                          0x0
#define EEADR0_size                              0x1
#define EEADR0_value_mask                        0x1
#define EEADR0_clear_mask                        0xFE

#define EEADR1                                   0x1
#define EEADR1_address                           0xFA9
#define EEADR1_position                          0x1
#define EEADR1_size                              0x1
#define EEADR1_value_mask                        0x2
#define EEADR1_clear_mask                        0xFD

#define EEADR2                                   0x2
#define EEADR2_address                           0xFA9
#define EEADR2_position                          0x2
#define EEADR2_size                              0x1
#define EEADR2_value_mask                        0x4
#define EEADR2_clear_mask                        0xFB

#define EEADR3                                   0x3
#define EEADR3_address                           0xFA9
#define EEADR3_position                          0x3
#define EEADR3_size                              0x1
#define EEADR3_value_mask                        0x8
#define EEADR3_clear_mask                        0xF7

#define EEADR4                                   0x4
#define EEADR4_address                           0xFA9
#define EEADR4_position                          0x4
#define EEADR4_size                              0x1
#define EEADR4_value_mask                        0x10
#define EEADR4_clear_mask                        0xEF

#define EEADR5                                   0x5
#define EEADR5_address                           0xFA9
#define EEADR5_position                          0x5
#define EEADR5_size                              0x1
#define EEADR5_value_mask                        0x20
#define EEADR5_clear_mask                        0xDF

#define EEADR6                                   0x6
#define EEADR6_address                           0xFA9
#define EEADR6_position                          0x6
#define EEADR6_size                              0x1
#define EEADR6_value_mask                        0x40
#define EEADR6_clear_mask                        0xBF

#define EEADR7                                   0x7
#define EEADR7_address                           0xFA9
#define EEADR7_position                          0x7
#define EEADR7_size                              0x1
#define EEADR7_value_mask                        0x80
#define EEADR7_clear_mask                        0x7F


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


/*-------------------------------------------------------------------------#
| T3CON                                                              0xFB1 |
#--------------------------------------------------------------------------#
| T3CON_RD16 | - | T3CKPS1 | T3CKPS0 | SOSCEN3 | nT3SYNC | TMR3CS | TMR3ON |
#--------------------------------------------------------------------------#
| 7          | 6 | 5       | 4       | 3       | 2       | 1      | 0      |
#-------------------------------------------------------------------------*/

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

#define T3CON_RD16                               0x7
#define T3CON_RD16_address                       0xFB1
#define T3CON_RD16_position                      0x7
#define T3CON_RD16_size                          0x1
#define T3CON_RD16_value_mask                    0x80
#define T3CON_RD16_clear_mask                    0x7F

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


/*--------------------------------------------------------------------------#
| ECCP1AS                                                             0xFB6 |
#---------------------------------------------------------------------------#
| ECCPASE | ECCPAS2 | ECCPAS1 | ECCPAS0 | PSSAC1 | PSSAC0 | PSSBD1 | PSSBD0 |
#---------------------------------------------------------------------------#
| 7       | 6       | 5       | 4       | 3      | 2      | 1      | 0      |
#--------------------------------------------------------------------------*/

#define ECCP1AS                                  0x0
#define ECCP1AS_address                          0xFB6
#define ECCP1AS_position                         0x0
#define ECCP1AS_size                             0x8
#define ECCP1AS_value_mask                       0xFF
#define ECCP1AS_clear_mask                       0x0

#define PSSBD                                    0x0
#define PSSBD_address                            0xFB6
#define PSSBD_position                           0x0
#define PSSBD_size                               0x2
#define PSSBD_value_mask                         0x3
#define PSSBD_clear_mask                         0xFC

#define PSSBD0                                   0x0
#define PSSBD0_address                           0xFB6
#define PSSBD0_position                          0x0
#define PSSBD0_size                              0x1
#define PSSBD0_value_mask                        0x1
#define PSSBD0_clear_mask                        0xFE

#define PSSBD1                                   0x1
#define PSSBD1_address                           0xFB6
#define PSSBD1_position                          0x1
#define PSSBD1_size                              0x1
#define PSSBD1_value_mask                        0x2
#define PSSBD1_clear_mask                        0xFD

#define PSSAC                                    0x2
#define PSSAC_address                            0xFB6
#define PSSAC_position                           0x2
#define PSSAC_size                               0x2
#define PSSAC_value_mask                         0xC
#define PSSAC_clear_mask                         0xF3

#define PSSAC0                                   0x2
#define PSSAC0_address                           0xFB6
#define PSSAC0_position                          0x2
#define PSSAC0_size                              0x1
#define PSSAC0_value_mask                        0x4
#define PSSAC0_clear_mask                        0xFB

#define PSSAC1                                   0x3
#define PSSAC1_address                           0xFB6
#define PSSAC1_position                          0x3
#define PSSAC1_size                              0x1
#define PSSAC1_value_mask                        0x8
#define PSSAC1_clear_mask                        0xF7

#define ECCPAS0                                  0x4
#define ECCPAS0_address                          0xFB6
#define ECCPAS0_position                         0x4
#define ECCPAS0_size                             0x1
#define ECCPAS0_value_mask                       0x10
#define ECCPAS0_clear_mask                       0xEF

#define ECCPAS                                   0x4
#define ECCPAS_address                           0xFB6
#define ECCPAS_position                          0x4
#define ECCPAS_size                              0x3
#define ECCPAS_value_mask                        0x70
#define ECCPAS_clear_mask                        0x8F

#define ECCPAS1                                  0x5
#define ECCPAS1_address                          0xFB6
#define ECCPAS1_position                         0x5
#define ECCPAS1_size                             0x1
#define ECCPAS1_value_mask                       0x20
#define ECCPAS1_clear_mask                       0xDF

#define ECCPAS2                                  0x6
#define ECCPAS2_address                          0xFB6
#define ECCPAS2_position                         0x6
#define ECCPAS2_size                             0x1
#define ECCPAS2_value_mask                       0x40
#define ECCPAS2_clear_mask                       0xBF

#define ECCPASE                                  0x7
#define ECCPASE_address                          0xFB6
#define ECCPASE_position                         0x7
#define ECCPASE_size                             0x1
#define ECCPASE_value_mask                       0x80
#define ECCPASE_clear_mask                       0x7F


/*-------------------------------------------------------#
| PWM1CON                                          0xFB7 |
#--------------------------------------------------------#
| PRSEN | PDC6 | PDC5 | PDC4 | PDC3 | PDC2 | PDC1 | PDC0 |
#--------------------------------------------------------#
| 7     | 6    | 5    | 4    | 3    | 2    | 1    | 0    |
#-------------------------------------------------------*/

#define PWM1CON                                  0x0
#define PWM1CON_address                          0xFB7
#define PWM1CON_position                         0x0
#define PWM1CON_size                             0x8
#define PWM1CON_value_mask                       0xFF
#define PWM1CON_clear_mask                       0x0

#define PDC0                                     0x0
#define PDC0_address                             0xFB7
#define PDC0_position                            0x0
#define PDC0_size                                0x1
#define PDC0_value_mask                          0x1
#define PDC0_clear_mask                          0xFE

#define PDC                                      0x0
#define PDC_address                              0xFB7
#define PDC_position                             0x0
#define PDC_size                                 0x7
#define PDC_value_mask                           0x7F
#define PDC_clear_mask                           0x80

#define PDC1                                     0x1
#define PDC1_address                             0xFB7
#define PDC1_position                            0x1
#define PDC1_size                                0x1
#define PDC1_value_mask                          0x2
#define PDC1_clear_mask                          0xFD

#define PDC2                                     0x2
#define PDC2_address                             0xFB7
#define PDC2_position                            0x2
#define PDC2_size                                0x1
#define PDC2_value_mask                          0x4
#define PDC2_clear_mask                          0xFB

#define PDC3                                     0x3
#define PDC3_address                             0xFB7
#define PDC3_position                            0x3
#define PDC3_size                                0x1
#define PDC3_value_mask                          0x8
#define PDC3_clear_mask                          0xF7

#define PDC4                                     0x4
#define PDC4_address                             0xFB7
#define PDC4_position                            0x4
#define PDC4_size                                0x1
#define PDC4_value_mask                          0x10
#define PDC4_clear_mask                          0xEF

#define PDC5                                     0x5
#define PDC5_address                             0xFB7
#define PDC5_position                            0x5
#define PDC5_size                                0x1
#define PDC5_value_mask                          0x20
#define PDC5_clear_mask                          0xDF

#define PDC6                                     0x6
#define PDC6_address                             0xFB7
#define PDC6_position                            0x6
#define PDC6_size                                0x1
#define PDC6_value_mask                          0x40
#define PDC6_clear_mask                          0xBF

#define PRSEN                                    0x7
#define PRSEN_address                            0xFB7
#define PRSEN_position                           0x7
#define PRSEN_size                               0x1
#define PRSEN_value_mask                         0x80
#define PRSEN_clear_mask                         0x7F


/*--------------------------------------------------------#
| BAUDCON                                           0xFB8 |
#---------------------------------------------------------#
| ABDOVF | RCIDL | RXCKP | SCKP | BRG16 | - | W4E | ABDEN |
#---------------------------------------------------------#
| 7      | 6     | 5     | 4    | 3     | 2 | 1   | 0     |
#--------------------------------------------------------*/

#define BAUDCON                                  0x0
#define BAUDCON_address                          0xFB8
#define BAUDCON_position                         0x0
#define BAUDCON_size                             0x8
#define BAUDCON_value_mask                       0xFF
#define BAUDCON_clear_mask                       0x0

#define ABDEN                                    0x0
#define ABDEN_address                            0xFB8
#define ABDEN_position                           0x0
#define ABDEN_size                               0x1
#define ABDEN_value_mask                         0x1
#define ABDEN_clear_mask                         0xFE

#define W4E                                      0x1
#define W4E_address                              0xFB8
#define W4E_position                             0x1
#define W4E_size                                 0x1
#define W4E_value_mask                           0x2
#define W4E_clear_mask                           0xFD

#define WUE                                      0x1
#define WUE_address                              0xFB8
#define WUE_position                             0x1
#define WUE_size                                 0x1
#define WUE_value_mask                           0x2
#define WUE_clear_mask                           0xFD

#define BRG16                                    0x3
#define BRG16_address                            0xFB8
#define BRG16_position                           0x3
#define BRG16_size                               0x1
#define BRG16_value_mask                         0x8
#define BRG16_clear_mask                         0xF7

#define SCKP                                     0x4
#define SCKP_address                             0xFB8
#define SCKP_position                            0x4
#define SCKP_size                                0x1
#define SCKP_value_mask                          0x10
#define SCKP_clear_mask                          0xEF

#define CKTXP                                    0x4
#define CKTXP_address                            0xFB8
#define CKTXP_position                           0x4
#define CKTXP_size                               0x1
#define CKTXP_value_mask                         0x10
#define CKTXP_clear_mask                         0xEF

#define RXCKP                                    0x5
#define RXCKP_address                            0xFB8
#define RXCKP_position                           0x5
#define RXCKP_size                               0x1
#define RXCKP_value_mask                         0x20
#define RXCKP_clear_mask                         0xDF

#define DTRXP                                    0x5
#define DTRXP_address                            0xFB8
#define DTRXP_position                           0x5
#define DTRXP_size                               0x1
#define DTRXP_value_mask                         0x20
#define DTRXP_clear_mask                         0xDF

#define RCIDL                                    0x6
#define RCIDL_address                            0xFB8
#define RCIDL_position                           0x6
#define RCIDL_size                               0x1
#define RCIDL_value_mask                         0x40
#define RCIDL_clear_mask                         0xBF

#define ABDOVF                                   0x7
#define ABDOVF_address                           0xFB8
#define ABDOVF_position                          0x7
#define ABDOVF_size                              0x1
#define ABDOVF_value_mask                        0x80
#define ABDOVF_clear_mask                        0x7F


/*------------------------------------------------#
| PSTRCON                                   0xFB9 |
#-------------------------------------------------#
| - | - | - | STRSYNC | STRD | STRC | STRB | STRA |
#-------------------------------------------------#
| 7 | 6 | 5 | 4       | 3    | 2    | 1    | 0    |
#------------------------------------------------*/

#define PSTRCON                                  0x0
#define PSTRCON_address                          0xFB9
#define PSTRCON_position                         0x0
#define PSTRCON_size                             0x8
#define PSTRCON_value_mask                       0xFF
#define PSTRCON_clear_mask                       0x0

#define STRA                                     0x0
#define STRA_address                             0xFB9
#define STRA_position                            0x0
#define STRA_size                                0x1
#define STRA_value_mask                          0x1
#define STRA_clear_mask                          0xFE

#define STRB                                     0x1
#define STRB_address                             0xFB9
#define STRB_position                            0x1
#define STRB_size                                0x1
#define STRB_value_mask                          0x2
#define STRB_clear_mask                          0xFD

#define STRC                                     0x2
#define STRC_address                             0xFB9
#define STRC_position                            0x2
#define STRC_size                                0x1
#define STRC_value_mask                          0x4
#define STRC_clear_mask                          0xFB

#define STRD                                     0x3
#define STRD_address                             0xFB9
#define STRD_position                            0x3
#define STRD_size                                0x1
#define STRD_value_mask                          0x8
#define STRD_clear_mask                          0xF7

#define STRSYNC                                  0x4
#define STRSYNC_address                          0xFB9
#define STRSYNC_position                         0x4
#define STRSYNC_size                             0x1
#define STRSYNC_value_mask                       0x10
#define STRSYNC_clear_mask                       0xEF


/*--------------------------------------------------#
| VREFCON0                                    0xFBA |
#---------------------------------------------------#
| FVR1EN | FVR1ST | FVR1S1 | FVR1S0 | - | - | - | - |
#---------------------------------------------------#
| 7      | 6      | 5      | 4      | 3 | 2 | 1 | 0 |
#--------------------------------------------------*/

#define VREFCON0                                 0x0
#define VREFCON0_address                         0xFBA
#define VREFCON0_position                        0x0
#define VREFCON0_size                            0x8
#define VREFCON0_value_mask                      0xFF
#define VREFCON0_clear_mask                      0x0

#define FVR1S0                                   0x4
#define FVR1S0_address                           0xFBA
#define FVR1S0_position                          0x4
#define FVR1S0_size                              0x1
#define FVR1S0_value_mask                        0x10
#define FVR1S0_clear_mask                        0xEF

#define FVR1S1                                   0x5
#define FVR1S1_address                           0xFBA
#define FVR1S1_position                          0x5
#define FVR1S1_size                              0x1
#define FVR1S1_value_mask                        0x20
#define FVR1S1_clear_mask                        0xDF

#define FVR1ST                                   0x6
#define FVR1ST_address                           0xFBA
#define FVR1ST_position                          0x6
#define FVR1ST_size                              0x1
#define FVR1ST_value_mask                        0x40
#define FVR1ST_clear_mask                        0xBF

#define FVR1EN                                   0x7
#define FVR1EN_address                           0xFBA
#define FVR1EN_position                          0x7
#define FVR1EN_size                              0x1
#define FVR1EN_value_mask                        0x80
#define FVR1EN_clear_mask                        0x7F


/*---------------------------------------------------------#
| VREFCON1                                           0xFBB |
#----------------------------------------------------------#
| D1EN | D1LPS | DAC1OE | - | D1PSS1 | D1PSS0 | - | D1NSS0 |
#----------------------------------------------------------#
| 7    | 6     | 5      | 4 | 3      | 2      | 1 | 0      |
#---------------------------------------------------------*/

#define VREFCON1                                 0x0
#define VREFCON1_address                         0xFBB
#define VREFCON1_position                        0x0
#define VREFCON1_size                            0x8
#define VREFCON1_value_mask                      0xFF
#define VREFCON1_clear_mask                      0x0

#define D1NSS0                                   0x0
#define D1NSS0_address                           0xFBB
#define D1NSS0_position                          0x0
#define D1NSS0_size                              0x1
#define D1NSS0_value_mask                        0x1
#define D1NSS0_clear_mask                        0xFE

#define D1NSS                                    0x0
#define D1NSS_address                            0xFBB
#define D1NSS_position                           0x0
#define D1NSS_size                               0x1
#define D1NSS_value_mask                         0x1
#define D1NSS_clear_mask                         0xFE

#define D1PSS                                    0x2
#define D1PSS_address                            0xFBB
#define D1PSS_position                           0x2
#define D1PSS_size                               0x2
#define D1PSS_value_mask                         0xC
#define D1PSS_clear_mask                         0xF3

#define D1PSS0                                   0x2
#define D1PSS0_address                           0xFBB
#define D1PSS0_position                          0x2
#define D1PSS0_size                              0x1
#define D1PSS0_value_mask                        0x4
#define D1PSS0_clear_mask                        0xFB

#define D1PSS1                                   0x3
#define D1PSS1_address                           0xFBB
#define D1PSS1_position                          0x3
#define D1PSS1_size                              0x1
#define D1PSS1_value_mask                        0x8
#define D1PSS1_clear_mask                        0xF7

#define DAC1OE                                   0x5
#define DAC1OE_address                           0xFBB
#define DAC1OE_position                          0x5
#define DAC1OE_size                              0x1
#define DAC1OE_value_mask                        0x20
#define DAC1OE_clear_mask                        0xDF

#define D1LPS                                    0x6
#define D1LPS_address                            0xFBB
#define D1LPS_position                           0x6
#define D1LPS_size                               0x1
#define D1LPS_value_mask                         0x40
#define D1LPS_clear_mask                         0xBF

#define D1EN                                     0x7
#define D1EN_address                             0xFBB
#define D1EN_position                            0x7
#define D1EN_size                                0x1
#define D1EN_value_mask                          0x80
#define D1EN_clear_mask                          0x7F


/*-------------------------------------------------------#
| VREFCON2                                         0xFBC |
#--------------------------------------------------------#
| - | - | - | DAC1R4 | DAC1R3 | DAC1R2 | DAC1R1 | DAC1R0 |
#--------------------------------------------------------#
| 7 | 6 | 5 | 4      | 3      | 2      | 1      | 0      |
#-------------------------------------------------------*/

#define VREFCON2                                 0x0
#define VREFCON2_address                         0xFBC
#define VREFCON2_position                        0x0
#define VREFCON2_size                            0x8
#define VREFCON2_value_mask                      0xFF
#define VREFCON2_clear_mask                      0x0

#define DAC1R                                    0x0
#define DAC1R_address                            0xFBC
#define DAC1R_position                           0x0
#define DAC1R_size                               0x5
#define DAC1R_value_mask                         0x1F
#define DAC1R_clear_mask                         0xE0

#define DAC1R0                                   0x0
#define DAC1R0_address                           0xFBC
#define DAC1R0_position                          0x0
#define DAC1R0_size                              0x1
#define DAC1R0_value_mask                        0x1
#define DAC1R0_clear_mask                        0xFE

#define DAC1R1                                   0x1
#define DAC1R1_address                           0xFBC
#define DAC1R1_position                          0x1
#define DAC1R1_size                              0x1
#define DAC1R1_value_mask                        0x2
#define DAC1R1_clear_mask                        0xFD

#define DAC1R2                                   0x2
#define DAC1R2_address                           0xFBC
#define DAC1R2_position                          0x2
#define DAC1R2_size                              0x1
#define DAC1R2_value_mask                        0x4
#define DAC1R2_clear_mask                        0xFB

#define DAC1R3                                   0x3
#define DAC1R3_address                           0xFBC
#define DAC1R3_position                          0x3
#define DAC1R3_size                              0x1
#define DAC1R3_value_mask                        0x8
#define DAC1R3_clear_mask                        0xF7

#define DAC1R4                                   0x4
#define DAC1R4_address                           0xFBC
#define DAC1R4_position                          0x4
#define DAC1R4_size                              0x1
#define DAC1R4_value_mask                        0x10
#define DAC1R4_clear_mask                        0xEF


/*----------------------------------------------------------------#
| CCP1CON                                                   0xFBD |
#-----------------------------------------------------------------#
| P1M1 | P1M0 | DC1B1 | DC1B0 | CCP1M3 | CCP1M2 | CCP1M1 | CCP1M0 |
#-----------------------------------------------------------------#
| 7    | 6    | 5     | 4     | 3      | 2      | 1      | 0      |
#----------------------------------------------------------------*/

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

#define DC1B1                                    0x5
#define DC1B1_address                            0xFBD
#define DC1B1_position                           0x5
#define DC1B1_size                               0x1
#define DC1B1_value_mask                         0x20
#define DC1B1_clear_mask                         0xDF

#define P1M                                      0x6
#define P1M_address                              0xFBD
#define P1M_position                             0x6
#define P1M_size                                 0x2
#define P1M_value_mask                           0xC0
#define P1M_clear_mask                           0x3F

#define P1M0                                     0x6
#define P1M0_address                             0xFBD
#define P1M0_position                            0x6
#define P1M0_size                                0x1
#define P1M0_value_mask                          0x40
#define P1M0_clear_mask                          0xBF

#define P1M1                                     0x7
#define P1M1_address                             0xFBD
#define P1M1_position                            0x7
#define P1M1_size                                0x1
#define P1M1_value_mask                          0x80
#define P1M1_clear_mask                          0x7F


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


/*-------------------------------------------------#
| ADCON1                                     0xFC1 |
#--------------------------------------------------#
| - | - | - | - | CHSN3 | PVCFG0 | NVCFG1 | NVCFG0 |
#--------------------------------------------------#
| 7 | 6 | 5 | 4 | 3     | 2      | 1      | 0      |
#-------------------------------------------------*/

#define ADCON1                                   0x0
#define ADCON1_address                           0xFC1
#define ADCON1_position                          0x0
#define ADCON1_size                              0x8
#define ADCON1_value_mask                        0xFF
#define ADCON1_clear_mask                        0x0

#define NVCFG                                    0x0
#define NVCFG_address                            0xFC1
#define NVCFG_position                           0x0
#define NVCFG_size                               0x2
#define NVCFG_value_mask                         0x3
#define NVCFG_clear_mask                         0xFC

#define NVCFG0                                   0x0
#define NVCFG0_address                           0xFC1
#define NVCFG0_position                          0x0
#define NVCFG0_size                              0x1
#define NVCFG0_value_mask                        0x1
#define NVCFG0_clear_mask                        0xFE

#define NVCFG1                                   0x1
#define NVCFG1_address                           0xFC1
#define NVCFG1_position                          0x1
#define NVCFG1_size                              0x1
#define NVCFG1_value_mask                        0x2
#define NVCFG1_clear_mask                        0xFD

#define PVCFG                                    0x2
#define PVCFG_address                            0xFC1
#define PVCFG_position                           0x2
#define PVCFG_size                               0x2
#define PVCFG_value_mask                         0xC
#define PVCFG_clear_mask                         0xF3

#define PVCFG0                                   0x2
#define PVCFG0_address                           0xFC1
#define PVCFG0_position                          0x2
#define PVCFG0_size                              0x1
#define PVCFG0_value_mask                        0x4
#define PVCFG0_clear_mask                        0xFB

#define CHSN3                                    0x3
#define CHSN3_address                            0xFC1
#define CHSN3_position                           0x3
#define CHSN3_size                               0x1
#define CHSN3_value_mask                         0x8
#define CHSN3_clear_mask                         0xF7

#define PVCFG1                                   0x3
#define PVCFG1_address                           0xFC1
#define PVCFG1_position                          0x3
#define PVCFG1_size                              0x1
#define PVCFG1_value_mask                        0x8
#define PVCFG1_clear_mask                        0xF7


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


/*------------------------------------------------#
| SSPSTAT                                   0xFC7 |
#-------------------------------------------------#
| SMP | CKE | D_nA | STOP | S | R_NOT_W | UA | BF |
#-------------------------------------------------#
| 7   | 6   | 5    | 4    | 3 | 2       | 1  | 0  |
#------------------------------------------------*/

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

#define W                                        0x2
#define W_address                                0xFC7
#define W_position                               0x2
#define W_size                                   0x1
#define W_value_mask                             0x4
#define W_clear_mask                             0xFB

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

#define A                                        0x5
#define A_address                                0xFC7
#define A_position                               0x5
#define A_size                                   0x1
#define A_value_mask                             0x20
#define A_clear_mask                             0xDF

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


/*--------------------------------------------------------------------------------#
| T1CON                                                                     0xFCD |
#---------------------------------------------------------------------------------#
| T1CON_RD16 | T1RUN | T1CKPS1 | T1CKPS0 | T1OSCEN | NOT_T1SYNC | TMR1CS | TMR1ON |
#---------------------------------------------------------------------------------#
| 7          | 6     | 5       | 4       | 3       | 2          | 1      | 0      |
#--------------------------------------------------------------------------------*/

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

#define T1CON_RD16                               0x7
#define T1CON_RD16_address                       0xFCD
#define T1CON_RD16_position                      0x7
#define T1CON_RD16_size                          0x1
#define T1CON_RD16_value_mask                    0x80
#define T1CON_RD16_clear_mask                    0x7F

#define T1RD16                                   0x7
#define T1RD16_address                           0xFCD
#define T1RD16_position                          0x7
#define T1RD16_size                              0x1
#define T1RD16_value_mask                        0x80
#define T1RD16_clear_mask                        0x7F


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


/*---------------------------------------------#
| OSCCON2                                0xFD2 |
#----------------------------------------------#
| - | - | - | - | - | PRI_SD | HFIOFL | LFIOFS |
#----------------------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2      | 1      | 0      |
#---------------------------------------------*/

#define OSCCON2                                  0x0
#define OSCCON2_address                          0xFD2
#define OSCCON2_position                         0x0
#define OSCCON2_size                             0x8
#define OSCCON2_value_mask                       0xFF
#define OSCCON2_clear_mask                       0x0

#define LFIOFS                                   0x0
#define LFIOFS_address                           0xFD2
#define LFIOFS_position                          0x0
#define LFIOFS_size                              0x1
#define LFIOFS_value_mask                        0x1
#define LFIOFS_clear_mask                        0xFE

#define HFIOFL                                   0x1
#define HFIOFL_address                           0xFD2
#define HFIOFL_position                          0x1
#define HFIOFL_size                              0x1
#define HFIOFL_value_mask                        0x2
#define HFIOFL_clear_mask                        0xFD

#define PRI_SD                                   0x2
#define PRI_SD_address                           0xFD2
#define PRI_SD_position                          0x2
#define PRI_SD_size                              0x1
#define PRI_SD_value_mask                        0x4
#define PRI_SD_clear_mask                        0xFB


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


/*--------------------------------------------------------------#
| INTCON2                                                 0xFF1 |
#---------------------------------------------------------------#
| nRABPU | INTEDG0 | INTEDG1 | INTEDG2 | - | TMR0IP | - | RABIP |
#---------------------------------------------------------------#
| 7      | 6       | 5       | 4       | 3 | 2      | 1 | 0     |
#--------------------------------------------------------------*/

#define INTCON2                                  0x0
#define INTCON2_address                          0xFF1
#define INTCON2_position                         0x0
#define INTCON2_size                             0x8
#define INTCON2_value_mask                       0xFF
#define INTCON2_clear_mask                       0x0

#define RABIP                                    0x0
#define RABIP_address                            0xFF1
#define RABIP_position                           0x0
#define RABIP_size                               0x1
#define RABIP_value_mask                         0x1
#define RABIP_clear_mask                         0xFE

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

#define nRABPU                                   0x7
#define nRABPU_address                           0xFF1
#define nRABPU_position                          0x7
#define nRABPU_size                              0x1
#define nRABPU_value_mask                        0x80
#define nRABPU_clear_mask                        0x7F

#define NOT_RABPU                                0x7
#define NOT_RABPU_address                        0xFF1
#define NOT_RABPU_position                       0x7
#define NOT_RABPU_size                           0x1
#define NOT_RABPU_value_mask                     0x80
#define NOT_RABPU_clear_mask                     0x7F

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

#define RABPU                                    0x7
#define RABPU_address                            0xFF1
#define RABPU_position                           0x7
#define RABPU_size                               0x1
#define RABPU_value_mask                         0x80
#define RABPU_clear_mask                         0x7F


/*------------------------------------------------------------------#
| INTCON                                                      0xFF2 |
#-------------------------------------------------------------------#
| GIE_GIEH | PEIE | T0IE | INT0IE | RABIE | TMR0IF | INT0IF | RABIF |
#-------------------------------------------------------------------#
| 7        | 6    | 5    | 4      | 3     | 2      | 1      | 0     |
#------------------------------------------------------------------*/

#define INTCON                                   0x0
#define INTCON_address                           0xFF2
#define INTCON_position                          0x0
#define INTCON_size                              0x8
#define INTCON_value_mask                        0xFF
#define INTCON_clear_mask                        0x0

#define RABIF                                    0x0
#define RABIF_address                            0xFF2
#define RABIF_position                           0x0
#define RABIF_size                               0x1
#define RABIF_value_mask                         0x1
#define RABIF_clear_mask                         0xFE

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

#define RABIE                                    0x3
#define RABIE_address                            0xFF2
#define RABIE_position                           0x3
#define RABIE_size                               0x1
#define RABIE_value_mask                         0x8
#define RABIE_clear_mask                         0xF7

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

#define PIE                                      0x6
#define PIE_address                              0xFF2
#define PIE_position                             0x6
#define PIE_size                                 0x1
#define PIE_value_mask                           0x40
#define PIE_clear_mask                           0xBF

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

#endif // _PIC18F14K22_H_
