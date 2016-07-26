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

#ifndef _PIC18F66J16_H_
#define _PIC18F66J16_H_


/*-----------------------------------------------#
| PMSTATL                                  0xF5A |
#------------------------------------------------#
| OBE | OBUF | - | - | OB3E | OB2E | OB1E | OB0E |
#------------------------------------------------#
| 7   | 6    | 5 | 4 | 3    | 2    | 1    | 0    |
#-----------------------------------------------*/

#define PMSTATL                                  0x0
#define PMSTATL_address                          0xF5A
#define PMSTATL_position                         0x0
#define PMSTATL_size                             0x8
#define PMSTATL_value_mask                       0xFF
#define PMSTATL_clear_mask                       0x0

#define OB0E                                     0x0
#define OB0E_address                             0xF5A
#define OB0E_position                            0x0
#define OB0E_size                                0x1
#define OB0E_value_mask                          0x1
#define OB0E_clear_mask                          0xFE

#define OB1E                                     0x1
#define OB1E_address                             0xF5A
#define OB1E_position                            0x1
#define OB1E_size                                0x1
#define OB1E_value_mask                          0x2
#define OB1E_clear_mask                          0xFD

#define OB2E                                     0x2
#define OB2E_address                             0xF5A
#define OB2E_position                            0x2
#define OB2E_size                                0x1
#define OB2E_value_mask                          0x4
#define OB2E_clear_mask                          0xFB

#define OB3E                                     0x3
#define OB3E_address                             0xF5A
#define OB3E_position                            0x3
#define OB3E_size                                0x1
#define OB3E_value_mask                          0x8
#define OB3E_clear_mask                          0xF7

#define OBUF                                     0x6
#define OBUF_address                             0xF5A
#define OBUF_position                            0x6
#define OBUF_size                                0x1
#define OBUF_value_mask                          0x40
#define OBUF_clear_mask                          0xBF

#define OBE                                      0x7
#define OBE_address                              0xF5A
#define OBE_position                             0x7
#define OBE_size                                 0x1
#define OBE_value_mask                           0x80
#define OBE_clear_mask                           0x7F


/*-----------------------------------------------#
| PMSTATH                                  0xF5B |
#------------------------------------------------#
| IBF | IBOV | - | - | IB3F | IB2F | IB1F | IB0F |
#------------------------------------------------#
| 7   | 6    | 5 | 4 | 3    | 2    | 1    | 0    |
#-----------------------------------------------*/

#define PMSTATH                                  0x0
#define PMSTATH_address                          0xF5B
#define PMSTATH_position                         0x0
#define PMSTATH_size                             0x8
#define PMSTATH_value_mask                       0xFF
#define PMSTATH_clear_mask                       0x0

#define IB0F                                     0x0
#define IB0F_address                             0xF5B
#define IB0F_position                            0x0
#define IB0F_size                                0x1
#define IB0F_value_mask                          0x1
#define IB0F_clear_mask                          0xFE

#define IB1F                                     0x1
#define IB1F_address                             0xF5B
#define IB1F_position                            0x1
#define IB1F_size                                0x1
#define IB1F_value_mask                          0x2
#define IB1F_clear_mask                          0xFD

#define IB2F                                     0x2
#define IB2F_address                             0xF5B
#define IB2F_position                            0x2
#define IB2F_size                                0x1
#define IB2F_value_mask                          0x4
#define IB2F_clear_mask                          0xFB

#define IB3F                                     0x3
#define IB3F_address                             0xF5B
#define IB3F_position                            0x3
#define IB3F_size                                0x1
#define IB3F_value_mask                          0x8
#define IB3F_clear_mask                          0xF7

#define IBOV                                     0x6
#define IBOV_address                             0xF5B
#define IBOV_position                            0x6
#define IBOV_size                                0x1
#define IBOV_value_mask                          0x40
#define IBOV_clear_mask                          0xBF

#define IBF                                      0x7
#define IBF_address                              0xF5B
#define IBF_position                             0x7
#define IBF_size                                 0x1
#define IBF_value_mask                           0x80
#define IBF_clear_mask                           0x7F


/*--------------------------------------------------------------#
| PMEL                                                    0xF5C |
#---------------------------------------------------------------#
| PTEN7 | PTEN6 | PTEN5 | PTEN4 | PTEN3 | PTEN2 | PTEN1 | PTEN0 |
#---------------------------------------------------------------#
| 7     | 6     | 5     | 4     | 3     | 2     | 1     | 0     |
#--------------------------------------------------------------*/

#define PMEL                                     0x0
#define PMEL_address                             0xF5C
#define PMEL_position                            0x0
#define PMEL_size                                0x8
#define PMEL_value_mask                          0xFF
#define PMEL_clear_mask                          0x0

#define PTEN0                                    0x0
#define PTEN0_address                            0xF5C
#define PTEN0_position                           0x0
#define PTEN0_size                               0x1
#define PTEN0_value_mask                         0x1
#define PTEN0_clear_mask                         0xFE

#define PTENL                                    0x0
#define PTENL_address                            0xF5C
#define PTENL_position                           0x0
#define PTENL_size                               0x8
#define PTENL_value_mask                         0xFF
#define PTENL_clear_mask                         0x0

#define PTEN1                                    0x1
#define PTEN1_address                            0xF5C
#define PTEN1_position                           0x1
#define PTEN1_size                               0x1
#define PTEN1_value_mask                         0x2
#define PTEN1_clear_mask                         0xFD

#define PTEN2                                    0x2
#define PTEN2_address                            0xF5C
#define PTEN2_position                           0x2
#define PTEN2_size                               0x1
#define PTEN2_value_mask                         0x4
#define PTEN2_clear_mask                         0xFB

#define PTEN3                                    0x3
#define PTEN3_address                            0xF5C
#define PTEN3_position                           0x3
#define PTEN3_size                               0x1
#define PTEN3_value_mask                         0x8
#define PTEN3_clear_mask                         0xF7

#define PTEN4                                    0x4
#define PTEN4_address                            0xF5C
#define PTEN4_position                           0x4
#define PTEN4_size                               0x1
#define PTEN4_value_mask                         0x10
#define PTEN4_clear_mask                         0xEF

#define PTEN5                                    0x5
#define PTEN5_address                            0xF5C
#define PTEN5_position                           0x5
#define PTEN5_size                               0x1
#define PTEN5_value_mask                         0x20
#define PTEN5_clear_mask                         0xDF

#define PTEN6                                    0x6
#define PTEN6_address                            0xF5C
#define PTEN6_position                           0x6
#define PTEN6_size                               0x1
#define PTEN6_value_mask                         0x40
#define PTEN6_clear_mask                         0xBF

#define PTEN7                                    0x7
#define PTEN7_address                            0xF5C
#define PTEN7_position                           0x7
#define PTEN7_size                               0x1
#define PTEN7_value_mask                         0x80
#define PTEN7_clear_mask                         0x7F


/*--------------------------------------------------------------------#
| PMEH                                                          0xF5D |
#---------------------------------------------------------------------#
| PTEN15 | PTEN14 | PTEN13 | PTEN12 | PTEN11 | PTEN10 | PTEN9 | PTEN8 |
#---------------------------------------------------------------------#
| 7      | 6      | 5      | 4      | 3      | 2      | 1     | 0     |
#--------------------------------------------------------------------*/

#define PMEH                                     0x0
#define PMEH_address                             0xF5D
#define PMEH_position                            0x0
#define PMEH_size                                0x8
#define PMEH_value_mask                          0xFF
#define PMEH_clear_mask                          0x0

#define PTEN8                                    0x0
#define PTEN8_address                            0xF5D
#define PTEN8_position                           0x0
#define PTEN8_size                               0x1
#define PTEN8_value_mask                         0x1
#define PTEN8_clear_mask                         0xFE

#define PTENH                                    0x0
#define PTENH_address                            0xF5D
#define PTENH_position                           0x0
#define PTENH_size                               0x8
#define PTENH_value_mask                         0xFF
#define PTENH_clear_mask                         0x0

#define PTEN9                                    0x1
#define PTEN9_address                            0xF5D
#define PTEN9_position                           0x1
#define PTEN9_size                               0x1
#define PTEN9_value_mask                         0x2
#define PTEN9_clear_mask                         0xFD

#define PTEN10                                   0x2
#define PTEN10_address                           0xF5D
#define PTEN10_position                          0x2
#define PTEN10_size                              0x1
#define PTEN10_value_mask                        0x4
#define PTEN10_clear_mask                        0xFB

#define PTEN11                                   0x3
#define PTEN11_address                           0xF5D
#define PTEN11_position                          0x3
#define PTEN11_size                              0x1
#define PTEN11_value_mask                        0x8
#define PTEN11_clear_mask                        0xF7

#define PTEN12                                   0x4
#define PTEN12_address                           0xF5D
#define PTEN12_position                          0x4
#define PTEN12_size                              0x1
#define PTEN12_value_mask                        0x10
#define PTEN12_clear_mask                        0xEF

#define PTEN13                                   0x5
#define PTEN13_address                           0xF5D
#define PTEN13_position                          0x5
#define PTEN13_size                              0x1
#define PTEN13_value_mask                        0x20
#define PTEN13_clear_mask                        0xDF

#define PTEN14                                   0x6
#define PTEN14_address                           0xF5D
#define PTEN14_position                          0x6
#define PTEN14_size                              0x1
#define PTEN14_value_mask                        0x40
#define PTEN14_clear_mask                        0xBF

#define PTEN15                                   0x7
#define PTEN15_address                           0xF5D
#define PTEN15_position                          0x7
#define PTEN15_size                              0x1
#define PTEN15_value_mask                        0x80
#define PTEN15_clear_mask                        0x7F


/*----------------------------------------------------------------------#
| PMMODEL                                                         0xF62 |
#-----------------------------------------------------------------------#
| WAITB1 | WAITB0 | WAITM3 | WAITM2 | WAITM1 | WAITM0 | WAITE1 | WAITE0 |
#-----------------------------------------------------------------------#
| 7      | 6      | 5      | 4      | 3      | 2      | 1      | 0      |
#----------------------------------------------------------------------*/

#define PMMODEL                                  0x0
#define PMMODEL_address                          0xF62
#define PMMODEL_position                         0x0
#define PMMODEL_size                             0x8
#define PMMODEL_value_mask                       0xFF
#define PMMODEL_clear_mask                       0x0

#define WAITE0                                   0x0
#define WAITE0_address                           0xF62
#define WAITE0_position                          0x0
#define WAITE0_size                              0x1
#define WAITE0_value_mask                        0x1
#define WAITE0_clear_mask                        0xFE

#define WAITE                                    0x0
#define WAITE_address                            0xF62
#define WAITE_position                           0x0
#define WAITE_size                               0x2
#define WAITE_value_mask                         0x3
#define WAITE_clear_mask                         0xFC

#define WAITE1                                   0x1
#define WAITE1_address                           0xF62
#define WAITE1_position                          0x1
#define WAITE1_size                              0x1
#define WAITE1_value_mask                        0x2
#define WAITE1_clear_mask                        0xFD

#define WAITM0                                   0x2
#define WAITM0_address                           0xF62
#define WAITM0_position                          0x2
#define WAITM0_size                              0x1
#define WAITM0_value_mask                        0x4
#define WAITM0_clear_mask                        0xFB

#define WAITM                                    0x2
#define WAITM_address                            0xF62
#define WAITM_position                           0x2
#define WAITM_size                               0x4
#define WAITM_value_mask                         0x3C
#define WAITM_clear_mask                         0xC3

#define WAITM1                                   0x3
#define WAITM1_address                           0xF62
#define WAITM1_position                          0x3
#define WAITM1_size                              0x1
#define WAITM1_value_mask                        0x8
#define WAITM1_clear_mask                        0xF7

#define WAITM2                                   0x4
#define WAITM2_address                           0xF62
#define WAITM2_position                          0x4
#define WAITM2_size                              0x1
#define WAITM2_value_mask                        0x10
#define WAITM2_clear_mask                        0xEF

#define WAITM3                                   0x5
#define WAITM3_address                           0xF62
#define WAITM3_position                          0x5
#define WAITM3_size                              0x1
#define WAITM3_value_mask                        0x20
#define WAITM3_clear_mask                        0xDF

#define WAITB0                                   0x6
#define WAITB0_address                           0xF62
#define WAITB0_position                          0x6
#define WAITB0_size                              0x1
#define WAITB0_value_mask                        0x40
#define WAITB0_clear_mask                        0xBF

#define WAITB                                    0x6
#define WAITB_address                            0xF62
#define WAITB_position                           0x6
#define WAITB_size                               0x2
#define WAITB_value_mask                         0xC0
#define WAITB_clear_mask                         0x3F

#define WAITB1                                   0x7
#define WAITB1_address                           0xF62
#define WAITB1_position                          0x7
#define WAITB1_size                              0x1
#define WAITB1_value_mask                        0x80
#define WAITB1_clear_mask                        0x7F


/*--------------------------------------------------------------#
| PMMODEH                                                 0xF63 |
#---------------------------------------------------------------#
| BUSY | IRQM1 | IRQM0 | INCM1 | INCM0 | MODE16 | MODE1 | MODE0 |
#---------------------------------------------------------------#
| 7    | 6     | 5     | 4     | 3     | 2      | 1     | 0     |
#--------------------------------------------------------------*/

#define PMMODEH                                  0x0
#define PMMODEH_address                          0xF63
#define PMMODEH_position                         0x0
#define PMMODEH_size                             0x8
#define PMMODEH_value_mask                       0xFF
#define PMMODEH_clear_mask                       0x0

#define MODE0                                    0x0
#define MODE0_address                            0xF63
#define MODE0_position                           0x0
#define MODE0_size                               0x1
#define MODE0_value_mask                         0x1
#define MODE0_clear_mask                         0xFE

#define MODE                                     0x0
#define MODE_address                             0xF63
#define MODE_position                            0x0
#define MODE_size                                0x2
#define MODE_value_mask                          0x3
#define MODE_clear_mask                          0xFC

#define MODE1                                    0x1
#define MODE1_address                            0xF63
#define MODE1_position                           0x1
#define MODE1_size                               0x1
#define MODE1_value_mask                         0x2
#define MODE1_clear_mask                         0xFD

#define MODE16                                   0x2
#define MODE16_address                           0xF63
#define MODE16_position                          0x2
#define MODE16_size                              0x1
#define MODE16_value_mask                        0x4
#define MODE16_clear_mask                        0xFB

#define INCM                                     0x3
#define INCM_address                             0xF63
#define INCM_position                            0x3
#define INCM_size                                0x2
#define INCM_value_mask                          0x18
#define INCM_clear_mask                          0xE7

#define INCM0                                    0x3
#define INCM0_address                            0xF63
#define INCM0_position                           0x3
#define INCM0_size                               0x1
#define INCM0_value_mask                         0x8
#define INCM0_clear_mask                         0xF7

#define INCM1                                    0x4
#define INCM1_address                            0xF63
#define INCM1_position                           0x4
#define INCM1_size                               0x1
#define INCM1_value_mask                         0x10
#define INCM1_clear_mask                         0xEF

#define IRQM0                                    0x5
#define IRQM0_address                            0xF63
#define IRQM0_position                           0x5
#define IRQM0_size                               0x1
#define IRQM0_value_mask                         0x20
#define IRQM0_clear_mask                         0xDF

#define IRQM                                     0x5
#define IRQM_address                             0xF63
#define IRQM_position                            0x5
#define IRQM_size                                0x2
#define IRQM_value_mask                          0x60
#define IRQM_clear_mask                          0x9F

#define IRQM1                                    0x6
#define IRQM1_address                            0xF63
#define IRQM1_position                           0x6
#define IRQM1_size                               0x1
#define IRQM1_value_mask                         0x40
#define IRQM1_clear_mask                         0xBF

#define BUSY                                     0x7
#define BUSY_address                             0xF63
#define BUSY_position                            0x7
#define BUSY_size                                0x1
#define BUSY_value_mask                          0x80
#define BUSY_clear_mask                          0x7F


/*----------------------------------------------------#
| PMCONL                                        0xF64 |
#-----------------------------------------------------#
| CSF1 | CSF0 | ALP | CS2P | CS1P | BEP | WRSP | RDSP |
#-----------------------------------------------------#
| 7    | 6    | 5   | 4    | 3    | 2   | 1    | 0    |
#----------------------------------------------------*/

#define PMCONL                                   0x0
#define PMCONL_address                           0xF64
#define PMCONL_position                          0x0
#define PMCONL_size                              0x8
#define PMCONL_value_mask                        0xFF
#define PMCONL_clear_mask                        0x0

#define RDSP                                     0x0
#define RDSP_address                             0xF64
#define RDSP_position                            0x0
#define RDSP_size                                0x1
#define RDSP_value_mask                          0x1
#define RDSP_clear_mask                          0xFE

#define WRSP                                     0x1
#define WRSP_address                             0xF64
#define WRSP_position                            0x1
#define WRSP_size                                0x1
#define WRSP_value_mask                          0x2
#define WRSP_clear_mask                          0xFD

#define BEP                                      0x2
#define BEP_address                              0xF64
#define BEP_position                             0x2
#define BEP_size                                 0x1
#define BEP_value_mask                           0x4
#define BEP_clear_mask                           0xFB

#define CS1P                                     0x3
#define CS1P_address                             0xF64
#define CS1P_position                            0x3
#define CS1P_size                                0x1
#define CS1P_value_mask                          0x8
#define CS1P_clear_mask                          0xF7

#define CS2P                                     0x4
#define CS2P_address                             0xF64
#define CS2P_position                            0x4
#define CS2P_size                                0x1
#define CS2P_value_mask                          0x10
#define CS2P_clear_mask                          0xEF

#define ALP                                      0x5
#define ALP_address                              0xF64
#define ALP_position                             0x5
#define ALP_size                                 0x1
#define ALP_value_mask                           0x20
#define ALP_clear_mask                           0xDF

#define CSF0                                     0x6
#define CSF0_address                             0xF64
#define CSF0_position                            0x6
#define CSF0_size                                0x1
#define CSF0_value_mask                          0x40
#define CSF0_clear_mask                          0xBF

#define CSF1                                     0x7
#define CSF1_address                             0xF64
#define CSF1_position                            0x7
#define CSF1_size                                0x1
#define CSF1_value_mask                          0x80
#define CSF1_clear_mask                          0x7F


/*-----------------------------------------------------------------#
| PMCONH                                                     0xF65 |
#------------------------------------------------------------------#
| PMPEN | - | PSIDL | ADRMUX1 | ADRMUX0 | PTBEEN | PTWREN | PTRDEN |
#------------------------------------------------------------------#
| 7     | 6 | 5     | 4       | 3       | 2      | 1      | 0      |
#-----------------------------------------------------------------*/

#define PMCONH                                   0x0
#define PMCONH_address                           0xF65
#define PMCONH_position                          0x0
#define PMCONH_size                              0x8
#define PMCONH_value_mask                        0xFF
#define PMCONH_clear_mask                        0x0

#define PTRDEN                                   0x0
#define PTRDEN_address                           0xF65
#define PTRDEN_position                          0x0
#define PTRDEN_size                              0x1
#define PTRDEN_value_mask                        0x1
#define PTRDEN_clear_mask                        0xFE

#define PTWREN                                   0x1
#define PTWREN_address                           0xF65
#define PTWREN_position                          0x1
#define PTWREN_size                              0x1
#define PTWREN_value_mask                        0x2
#define PTWREN_clear_mask                        0xFD

#define PTBEEN                                   0x2
#define PTBEEN_address                           0xF65
#define PTBEEN_position                          0x2
#define PTBEEN_size                              0x1
#define PTBEEN_value_mask                        0x4
#define PTBEEN_clear_mask                        0xFB

#define ADRMUX0                                  0x3
#define ADRMUX0_address                          0xF65
#define ADRMUX0_position                         0x3
#define ADRMUX0_size                             0x1
#define ADRMUX0_value_mask                       0x8
#define ADRMUX0_clear_mask                       0xF7

#define ADRMUX1                                  0x4
#define ADRMUX1_address                          0xF65
#define ADRMUX1_position                         0x4
#define ADRMUX1_size                             0x1
#define ADRMUX1_value_mask                       0x10
#define ADRMUX1_clear_mask                       0xEF

#define PSIDL                                    0x5
#define PSIDL_address                            0xF65
#define PSIDL_position                           0x5
#define PSIDL_size                               0x1
#define PSIDL_value_mask                         0x20
#define PSIDL_clear_mask                         0xDF

#define PMPEN                                    0x7
#define PMPEN_address                            0xF65
#define PMPEN_position                           0x7
#define PMPEN_size                               0x1
#define PMPEN_value_mask                         0x80
#define PMPEN_clear_mask                         0x7F


/*----------------------------------#
| PMADDRH                     0xF69 |
#-----------------------------------#
| CS2 | CS1 | ADDRH                 |
#-----------------------------------#
| 7   | 6   | 5 | 4 | 3 | 2 | 1 | 0 |
#----------------------------------*/

#define PMADDRH                                  0x0
#define PMADDRH_address                          0xF69
#define PMADDRH_position                         0x0
#define PMADDRH_size                             0x8
#define PMADDRH_value_mask                       0xFF
#define PMADDRH_clear_mask                       0x0

#define ADDRH                                    0x0
#define ADDRH_address                            0xF69
#define ADDRH_position                           0x0
#define ADDRH_size                               0x6
#define ADDRH_value_mask                         0x3F
#define ADDRH_clear_mask                         0xC0

#define CS1                                      0x6
#define CS1_address                              0xF69
#define CS1_position                             0x6
#define CS1_size                                 0x1
#define CS1_value_mask                           0x40
#define CS1_clear_mask                           0xBF

#define CS2                                      0x7
#define CS2_address                              0xF69
#define CS2_position                             0x7
#define CS2_size                                 0x1
#define CS2_value_mask                           0x80
#define CS2_clear_mask                           0x7F


/*--------------------------------------#
| CMSTAT                          0xF6A |
#---------------------------------------#
| - | - | - | - | - | - | COUT2 | COUT1 |
#---------------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1     | 0     |
#--------------------------------------*/

#define CMSTAT                                   0x0
#define CMSTAT_address                           0xF6A
#define CMSTAT_position                          0x0
#define CMSTAT_size                              0x8
#define CMSTAT_value_mask                        0xFF
#define CMSTAT_clear_mask                        0x0

#define COUT1                                    0x0
#define COUT1_address                            0xF6A
#define COUT1_position                           0x0
#define COUT1_size                               0x1
#define COUT1_value_mask                         0x1
#define COUT1_clear_mask                         0xFE

#define COUT2                                    0x1
#define COUT2_address                            0xF6A
#define COUT2_position                           0x1
#define COUT2_size                               0x1
#define COUT2_value_mask                         0x2
#define COUT2_clear_mask                         0xFD


/*---------------------------------------------------------------------------------#
| SSP2CON2                                                                   0xF6B |
#----------------------------------------------------------------------------------#
| GCEN2 | SSP2CON2_ACKSTAT | ADMSK52 | ACKEN2 | ADMSK32 | ADMSK22 | ADMSK12 | SEN2 |
#----------------------------------------------------------------------------------#
| 7     | 6                | 5       | 4      | 3       | 2       | 1       | 0    |
#---------------------------------------------------------------------------------*/

#define SSP2CON2                                 0x0
#define SSP2CON2_address                         0xF6B
#define SSP2CON2_position                        0x0
#define SSP2CON2_size                            0x8
#define SSP2CON2_value_mask                      0xFF
#define SSP2CON2_clear_mask                      0x0

#define SEN2                                     0x0
#define SEN2_address                             0xF6B
#define SEN2_position                            0x0
#define SEN2_size                                0x1
#define SEN2_value_mask                          0x1
#define SEN2_clear_mask                          0xFE

#define SSP2CON2_SEN                             0x0
#define SSP2CON2_SEN_address                     0xF6B
#define SSP2CON2_SEN_position                    0x0
#define SSP2CON2_SEN_size                        0x1
#define SSP2CON2_SEN_value_mask                  0x1
#define SSP2CON2_SEN_clear_mask                  0xFE

#define ADMSK12                                  0x1
#define ADMSK12_address                          0xF6B
#define ADMSK12_position                         0x1
#define ADMSK12_size                             0x1
#define ADMSK12_value_mask                       0x2
#define ADMSK12_clear_mask                       0xFD

#define SSP2CON2_RSEN                            0x1
#define SSP2CON2_RSEN_address                    0xF6B
#define SSP2CON2_RSEN_position                   0x1
#define SSP2CON2_RSEN_size                       0x1
#define SSP2CON2_RSEN_value_mask                 0x2
#define SSP2CON2_RSEN_clear_mask                 0xFD

#define RSEN2                                    0x1
#define RSEN2_address                            0xF6B
#define RSEN2_position                           0x1
#define RSEN2_size                               0x1
#define RSEN2_value_mask                         0x2
#define RSEN2_clear_mask                         0xFD

#define SSP2CON2_ADMSK1                          0x1
#define SSP2CON2_ADMSK1_address                  0xF6B
#define SSP2CON2_ADMSK1_position                 0x1
#define SSP2CON2_ADMSK1_size                     0x1
#define SSP2CON2_ADMSK1_value_mask               0x2
#define SSP2CON2_ADMSK1_clear_mask               0xFD

#define ADMSK22                                  0x2
#define ADMSK22_address                          0xF6B
#define ADMSK22_position                         0x2
#define ADMSK22_size                             0x1
#define ADMSK22_value_mask                       0x4
#define ADMSK22_clear_mask                       0xFB

#define PEN2                                     0x2
#define PEN2_address                             0xF6B
#define PEN2_position                            0x2
#define PEN2_size                                0x1
#define PEN2_value_mask                          0x4
#define PEN2_clear_mask                          0xFB

#define SSP2CON2_PEN                             0x2
#define SSP2CON2_PEN_address                     0xF6B
#define SSP2CON2_PEN_position                    0x2
#define SSP2CON2_PEN_size                        0x1
#define SSP2CON2_PEN_value_mask                  0x4
#define SSP2CON2_PEN_clear_mask                  0xFB

#define SSP2CON2_ADMSK2                          0x2
#define SSP2CON2_ADMSK2_address                  0xF6B
#define SSP2CON2_ADMSK2_position                 0x2
#define SSP2CON2_ADMSK2_size                     0x1
#define SSP2CON2_ADMSK2_value_mask               0x4
#define SSP2CON2_ADMSK2_clear_mask               0xFB

#define ADMSK32                                  0x3
#define ADMSK32_address                          0xF6B
#define ADMSK32_position                         0x3
#define ADMSK32_size                             0x1
#define ADMSK32_value_mask                       0x8
#define ADMSK32_clear_mask                       0xF7

#define SSP2CON2_RCEN                            0x3
#define SSP2CON2_RCEN_address                    0xF6B
#define SSP2CON2_RCEN_position                   0x3
#define SSP2CON2_RCEN_size                       0x1
#define SSP2CON2_RCEN_value_mask                 0x8
#define SSP2CON2_RCEN_clear_mask                 0xF7

#define RCEN2                                    0x3
#define RCEN2_address                            0xF6B
#define RCEN2_position                           0x3
#define RCEN2_size                               0x1
#define RCEN2_value_mask                         0x8
#define RCEN2_clear_mask                         0xF7

#define SSP2CON2_ADMSK3                          0x3
#define SSP2CON2_ADMSK3_address                  0xF6B
#define SSP2CON2_ADMSK3_position                 0x3
#define SSP2CON2_ADMSK3_size                     0x1
#define SSP2CON2_ADMSK3_value_mask               0x8
#define SSP2CON2_ADMSK3_clear_mask               0xF7

#define ACKEN2                                   0x4
#define ACKEN2_address                           0xF6B
#define ACKEN2_position                          0x4
#define ACKEN2_size                              0x1
#define ACKEN2_value_mask                        0x10
#define ACKEN2_clear_mask                        0xEF

#define ADMSK42                                  0x4
#define ADMSK42_address                          0xF6B
#define ADMSK42_position                         0x4
#define ADMSK42_size                             0x1
#define ADMSK42_value_mask                       0x10
#define ADMSK42_clear_mask                       0xEF

#define SSP2CON2_ADMSK4                          0x4
#define SSP2CON2_ADMSK4_address                  0xF6B
#define SSP2CON2_ADMSK4_position                 0x4
#define SSP2CON2_ADMSK4_size                     0x1
#define SSP2CON2_ADMSK4_value_mask               0x10
#define SSP2CON2_ADMSK4_clear_mask               0xEF

#define SSP2CON2_ACKEN                           0x4
#define SSP2CON2_ACKEN_address                   0xF6B
#define SSP2CON2_ACKEN_position                  0x4
#define SSP2CON2_ACKEN_size                      0x1
#define SSP2CON2_ACKEN_value_mask                0x10
#define SSP2CON2_ACKEN_clear_mask                0xEF

#define ACKDT2                                   0x5
#define ACKDT2_address                           0xF6B
#define ACKDT2_position                          0x5
#define ACKDT2_size                              0x1
#define ACKDT2_value_mask                        0x20
#define ACKDT2_clear_mask                        0xDF

#define ADMSK52                                  0x5
#define ADMSK52_address                          0xF6B
#define ADMSK52_position                         0x5
#define ADMSK52_size                             0x1
#define ADMSK52_value_mask                       0x20
#define ADMSK52_clear_mask                       0xDF

#define SSP2CON2_ACKDT                           0x5
#define SSP2CON2_ACKDT_address                   0xF6B
#define SSP2CON2_ACKDT_position                  0x5
#define SSP2CON2_ACKDT_size                      0x1
#define SSP2CON2_ACKDT_value_mask                0x20
#define SSP2CON2_ACKDT_clear_mask                0xDF

#define SSP2CON2_ADMSK5                          0x5
#define SSP2CON2_ADMSK5_address                  0xF6B
#define SSP2CON2_ADMSK5_position                 0x5
#define SSP2CON2_ADMSK5_size                     0x1
#define SSP2CON2_ADMSK5_value_mask               0x20
#define SSP2CON2_ADMSK5_clear_mask               0xDF

#define SSP2CON2_ACKSTAT                         0x6
#define SSP2CON2_ACKSTAT_address                 0xF6B
#define SSP2CON2_ACKSTAT_position                0x6
#define SSP2CON2_ACKSTAT_size                    0x1
#define SSP2CON2_ACKSTAT_value_mask              0x40
#define SSP2CON2_ACKSTAT_clear_mask              0xBF

#define ACKSTAT2                                 0x6
#define ACKSTAT2_address                         0xF6B
#define ACKSTAT2_position                        0x6
#define ACKSTAT2_size                            0x1
#define ACKSTAT2_value_mask                      0x40
#define ACKSTAT2_clear_mask                      0xBF

#define SSP2CON2_GCEN                            0x7
#define SSP2CON2_GCEN_address                    0xF6B
#define SSP2CON2_GCEN_position                   0x7
#define SSP2CON2_GCEN_size                       0x1
#define SSP2CON2_GCEN_value_mask                 0x80
#define SSP2CON2_GCEN_clear_mask                 0x7F

#define GCEN2                                    0x7
#define GCEN2_address                            0xF6B
#define GCEN2_position                           0x7
#define GCEN2_size                               0x1
#define GCEN2_value_mask                         0x80
#define GCEN2_clear_mask                         0x7F


/*---------------------------------------------------------------------------------------------------------------------------#
| SSP2CON1                                                                                                             0xF6C |
#----------------------------------------------------------------------------------------------------------------------------#
| WCOL2 | SSP2CON1_SSPOV | SSP2CON1_SSPEN | SSP2CON1_CKP | SSP2CON1_SSPM3 | SSP2CON1_SSPM2 | SSP2CON1_SSPM1 | SSP2CON1_SSPM0 |
#----------------------------------------------------------------------------------------------------------------------------#
| 7     | 6              | 5              | 4            | 3              | 2              | 1              | 0              |
#---------------------------------------------------------------------------------------------------------------------------*/

#define SSP2CON1                                 0x0
#define SSP2CON1_address                         0xF6C
#define SSP2CON1_position                        0x0
#define SSP2CON1_size                            0x8
#define SSP2CON1_value_mask                      0xFF
#define SSP2CON1_clear_mask                      0x0

#define SSP2CON1_SSPM                            0x0
#define SSP2CON1_SSPM_address                    0xF6C
#define SSP2CON1_SSPM_position                   0x0
#define SSP2CON1_SSPM_size                       0x4
#define SSP2CON1_SSPM_value_mask                 0xF
#define SSP2CON1_SSPM_clear_mask                 0xF0

#define SSP2CON1_SSPM0                           0x0
#define SSP2CON1_SSPM0_address                   0xF6C
#define SSP2CON1_SSPM0_position                  0x0
#define SSP2CON1_SSPM0_size                      0x1
#define SSP2CON1_SSPM0_value_mask                0x1
#define SSP2CON1_SSPM0_clear_mask                0xFE

#define SSPM02                                   0x0
#define SSPM02_address                           0xF6C
#define SSPM02_position                          0x0
#define SSPM02_size                              0x1
#define SSPM02_value_mask                        0x1
#define SSPM02_clear_mask                        0xFE

#define SSPM12                                   0x1
#define SSPM12_address                           0xF6C
#define SSPM12_position                          0x1
#define SSPM12_size                              0x1
#define SSPM12_value_mask                        0x2
#define SSPM12_clear_mask                        0xFD

#define SSP2CON1_SSPM1                           0x1
#define SSP2CON1_SSPM1_address                   0xF6C
#define SSP2CON1_SSPM1_position                  0x1
#define SSP2CON1_SSPM1_size                      0x1
#define SSP2CON1_SSPM1_value_mask                0x2
#define SSP2CON1_SSPM1_clear_mask                0xFD

#define SSP2CON1_SSPM2                           0x2
#define SSP2CON1_SSPM2_address                   0xF6C
#define SSP2CON1_SSPM2_position                  0x2
#define SSP2CON1_SSPM2_size                      0x1
#define SSP2CON1_SSPM2_value_mask                0x4
#define SSP2CON1_SSPM2_clear_mask                0xFB

#define SSPM22                                   0x2
#define SSPM22_address                           0xF6C
#define SSPM22_position                          0x2
#define SSPM22_size                              0x1
#define SSPM22_value_mask                        0x4
#define SSPM22_clear_mask                        0xFB

#define SSPM32                                   0x3
#define SSPM32_address                           0xF6C
#define SSPM32_position                          0x3
#define SSPM32_size                              0x1
#define SSPM32_value_mask                        0x8
#define SSPM32_clear_mask                        0xF7

#define SSP2CON1_SSPM3                           0x3
#define SSP2CON1_SSPM3_address                   0xF6C
#define SSP2CON1_SSPM3_position                  0x3
#define SSP2CON1_SSPM3_size                      0x1
#define SSP2CON1_SSPM3_value_mask                0x8
#define SSP2CON1_SSPM3_clear_mask                0xF7

#define SSP2CON1_CKP                             0x4
#define SSP2CON1_CKP_address                     0xF6C
#define SSP2CON1_CKP_position                    0x4
#define SSP2CON1_CKP_size                        0x1
#define SSP2CON1_CKP_value_mask                  0x10
#define SSP2CON1_CKP_clear_mask                  0xEF

#define CKP2                                     0x4
#define CKP2_address                             0xF6C
#define CKP2_position                            0x4
#define CKP2_size                                0x1
#define CKP2_value_mask                          0x10
#define CKP2_clear_mask                          0xEF

#define SSPEN2                                   0x5
#define SSPEN2_address                           0xF6C
#define SSPEN2_position                          0x5
#define SSPEN2_size                              0x1
#define SSPEN2_value_mask                        0x20
#define SSPEN2_clear_mask                        0xDF

#define SSP2CON1_SSPEN                           0x5
#define SSP2CON1_SSPEN_address                   0xF6C
#define SSP2CON1_SSPEN_position                  0x5
#define SSP2CON1_SSPEN_size                      0x1
#define SSP2CON1_SSPEN_value_mask                0x20
#define SSP2CON1_SSPEN_clear_mask                0xDF

#define SSPOV2                                   0x6
#define SSPOV2_address                           0xF6C
#define SSPOV2_position                          0x6
#define SSPOV2_size                              0x1
#define SSPOV2_value_mask                        0x40
#define SSPOV2_clear_mask                        0xBF

#define SSP2CON1_SSPOV                           0x6
#define SSP2CON1_SSPOV_address                   0xF6C
#define SSP2CON1_SSPOV_position                  0x6
#define SSP2CON1_SSPOV_size                      0x1
#define SSP2CON1_SSPOV_value_mask                0x40
#define SSP2CON1_SSPOV_clear_mask                0xBF

#define WCOL2                                    0x7
#define WCOL2_address                            0xF6C
#define WCOL2_position                           0x7
#define WCOL2_size                               0x1
#define WCOL2_value_mask                         0x80
#define WCOL2_clear_mask                         0x7F

#define SSP2CON1_WCOL                            0x7
#define SSP2CON1_WCOL_address                    0xF6C
#define SSP2CON1_WCOL_position                   0x7
#define SSP2CON1_WCOL_size                       0x1
#define SSP2CON1_WCOL_value_mask                 0x80
#define SSP2CON1_WCOL_clear_mask                 0x7F


/*-----------------------------------------------------------------------------------------------------#
| SSP2STAT                                                                                       0xF6D |
#------------------------------------------------------------------------------------------------------#
| SMP2 | SSP2STAT_CKE | SSP2STAT_D | SSP2STAT_I2C_STOP | S2 | SSP2STAT_R_W | SSP2STAT_UA | SSP2STAT_BF |
#------------------------------------------------------------------------------------------------------#
| 7    | 6            | 5          | 4                 | 3  | 2            | 1           | 0           |
#-----------------------------------------------------------------------------------------------------*/

#define SSP2STAT                                 0x0
#define SSP2STAT_address                         0xF6D
#define SSP2STAT_position                        0x0
#define SSP2STAT_size                            0x8
#define SSP2STAT_value_mask                      0xFF
#define SSP2STAT_clear_mask                      0x0

#define SSP2STAT_BF                              0x0
#define SSP2STAT_BF_address                      0xF6D
#define SSP2STAT_BF_position                     0x0
#define SSP2STAT_BF_size                         0x1
#define SSP2STAT_BF_value_mask                   0x1
#define SSP2STAT_BF_clear_mask                   0xFE

#define BF2                                      0x0
#define BF2_address                              0xF6D
#define BF2_position                             0x0
#define BF2_size                                 0x1
#define BF2_value_mask                           0x1
#define BF2_clear_mask                           0xFE

#define SSP2STAT_UA                              0x1
#define SSP2STAT_UA_address                      0xF6D
#define SSP2STAT_UA_position                     0x1
#define SSP2STAT_UA_size                         0x1
#define SSP2STAT_UA_value_mask                   0x2
#define SSP2STAT_UA_clear_mask                   0xFD

#define UA2                                      0x1
#define UA2_address                              0xF6D
#define UA2_position                             0x1
#define UA2_size                                 0x1
#define UA2_value_mask                           0x2
#define UA2_clear_mask                           0xFD

#define SSP2STAT_R_W                             0x2
#define SSP2STAT_R_W_address                     0xF6D
#define SSP2STAT_R_W_position                    0x2
#define SSP2STAT_R_W_size                        0x1
#define SSP2STAT_R_W_value_mask                  0x4
#define SSP2STAT_R_W_clear_mask                  0xFB

#define RW2                                      0x2
#define RW2_address                              0xF6D
#define RW2_position                             0x2
#define RW2_size                                 0x1
#define RW2_value_mask                           0x4
#define RW2_clear_mask                           0xFB

#define SSP2STAT_R                               0x2
#define SSP2STAT_R_address                       0xF6D
#define SSP2STAT_R_position                      0x2
#define SSP2STAT_R_size                          0x1
#define SSP2STAT_R_value_mask                    0x4
#define SSP2STAT_R_clear_mask                    0xFB

#define SSP2STAT_nWRITE                          0x2
#define SSP2STAT_nWRITE_address                  0xF6D
#define SSP2STAT_nWRITE_position                 0x2
#define SSP2STAT_nWRITE_size                     0x1
#define SSP2STAT_nWRITE_value_mask               0x4
#define SSP2STAT_nWRITE_clear_mask               0xFB

#define SSP2STAT_nW                              0x2
#define SSP2STAT_nW_address                      0xF6D
#define SSP2STAT_nW_position                     0x2
#define SSP2STAT_nW_size                         0x1
#define SSP2STAT_nW_value_mask                   0x4
#define SSP2STAT_nW_clear_mask                   0xFB

#define READ_WRITE2                              0x2
#define READ_WRITE2_address                      0xF6D
#define READ_WRITE2_position                     0x2
#define READ_WRITE2_size                         0x1
#define READ_WRITE2_value_mask                   0x4
#define READ_WRITE2_clear_mask                   0xFB

#define nW2                                      0x2
#define nW2_address                              0xF6D
#define nW2_position                             0x2
#define nW2_size                                 0x1
#define nW2_value_mask                           0x4
#define nW2_clear_mask                           0xFB

#define SSP2STAT_I2C_READ                        0x2
#define SSP2STAT_I2C_READ_address                0xF6D
#define SSP2STAT_I2C_READ_position               0x2
#define SSP2STAT_I2C_READ_size                   0x1
#define SSP2STAT_I2C_READ_value_mask             0x4
#define SSP2STAT_I2C_READ_clear_mask             0xFB

#define I2C_READ2                                0x2
#define I2C_READ2_address                        0xF6D
#define I2C_READ2_position                       0x2
#define I2C_READ2_size                           0x1
#define I2C_READ2_value_mask                     0x4
#define I2C_READ2_clear_mask                     0xFB

#define SSP2STAT_R_NOT_W                         0x2
#define SSP2STAT_R_NOT_W_address                 0xF6D
#define SSP2STAT_R_NOT_W_position                0x2
#define SSP2STAT_R_NOT_W_size                    0x1
#define SSP2STAT_R_NOT_W_value_mask              0x4
#define SSP2STAT_R_NOT_W_clear_mask              0xFB

#define R_nW2                                    0x2
#define R_nW2_address                            0xF6D
#define R_nW2_position                           0x2
#define R_nW2_size                               0x1
#define R_nW2_value_mask                         0x4
#define R_nW2_clear_mask                         0xFB

#define SSP2STAT_READ_WRITE                      0x2
#define SSP2STAT_READ_WRITE_address              0xF6D
#define SSP2STAT_READ_WRITE_position             0x2
#define SSP2STAT_READ_WRITE_size                 0x1
#define SSP2STAT_READ_WRITE_value_mask           0x4
#define SSP2STAT_READ_WRITE_clear_mask           0xFB

#define nWRITE2                                  0x2
#define nWRITE2_address                          0xF6D
#define nWRITE2_position                         0x2
#define nWRITE2_size                             0x1
#define nWRITE2_value_mask                       0x4
#define nWRITE2_clear_mask                       0xFB

#define R_W2                                     0x2
#define R_W2_address                             0xF6D
#define R_W2_position                            0x2
#define R_W2_size                                0x1
#define R_W2_value_mask                          0x4
#define R_W2_clear_mask                          0xFB

#define SSP2STAT_R_nW                            0x2
#define SSP2STAT_R_nW_address                    0xF6D
#define SSP2STAT_R_nW_position                   0x2
#define SSP2STAT_R_nW_size                       0x1
#define SSP2STAT_R_nW_value_mask                 0x4
#define SSP2STAT_R_nW_clear_mask                 0xFB

#define SSP2STAT_NOT_WRITE                       0x2
#define SSP2STAT_NOT_WRITE_address               0xF6D
#define SSP2STAT_NOT_WRITE_position              0x2
#define SSP2STAT_NOT_WRITE_size                  0x1
#define SSP2STAT_NOT_WRITE_value_mask            0x4
#define SSP2STAT_NOT_WRITE_clear_mask            0xFB

#define SSP2STAT_S                               0x3
#define SSP2STAT_S_address                       0xF6D
#define SSP2STAT_S_position                      0x3
#define SSP2STAT_S_size                          0x1
#define SSP2STAT_S_value_mask                    0x8
#define SSP2STAT_S_clear_mask                    0xF7

#define S2                                       0x3
#define S2_address                               0xF6D
#define S2_position                              0x3
#define S2_size                                  0x1
#define S2_value_mask                            0x8
#define S2_clear_mask                            0xF7

#define START2                                   0x3
#define START2_address                           0xF6D
#define START2_position                          0x3
#define START2_size                              0x1
#define START2_value_mask                        0x8
#define START2_clear_mask                        0xF7

#define SSP2STAT_I2C_START                       0x3
#define SSP2STAT_I2C_START_address               0xF6D
#define SSP2STAT_I2C_START_position              0x3
#define SSP2STAT_I2C_START_size                  0x1
#define SSP2STAT_I2C_START_value_mask            0x8
#define SSP2STAT_I2C_START_clear_mask            0xF7

#define I2C_START2                               0x3
#define I2C_START2_address                       0xF6D
#define I2C_START2_position                      0x3
#define I2C_START2_size                          0x1
#define I2C_START2_value_mask                    0x8
#define I2C_START2_clear_mask                    0xF7

#define P2                                       0x4
#define P2_address                               0xF6D
#define P2_position                              0x4
#define P2_size                                  0x1
#define P2_value_mask                            0x10
#define P2_clear_mask                            0xEF

#define SSP2STAT_I2C_STOP                        0x4
#define SSP2STAT_I2C_STOP_address                0xF6D
#define SSP2STAT_I2C_STOP_position               0x4
#define SSP2STAT_I2C_STOP_size                   0x1
#define SSP2STAT_I2C_STOP_value_mask             0x10
#define SSP2STAT_I2C_STOP_clear_mask             0xEF

#define STOP2                                    0x4
#define STOP2_address                            0xF6D
#define STOP2_position                           0x4
#define STOP2_size                               0x1
#define STOP2_value_mask                         0x10
#define STOP2_clear_mask                         0xEF

#define SSP2STAT_P                               0x4
#define SSP2STAT_P_address                       0xF6D
#define SSP2STAT_P_position                      0x4
#define SSP2STAT_P_size                          0x1
#define SSP2STAT_P_value_mask                    0x10
#define SSP2STAT_P_clear_mask                    0xEF

#define I2C_STOP2                                0x4
#define I2C_STOP2_address                        0xF6D
#define I2C_STOP2_position                       0x4
#define I2C_STOP2_size                           0x1
#define I2C_STOP2_value_mask                     0x10
#define I2C_STOP2_clear_mask                     0xEF

#define I2C_DAT2                                 0x5
#define I2C_DAT2_address                         0xF6D
#define I2C_DAT2_position                        0x5
#define I2C_DAT2_size                            0x1
#define I2C_DAT2_value_mask                      0x20
#define I2C_DAT2_clear_mask                      0xDF

#define SSP2STAT_D                               0x5
#define SSP2STAT_D_address                       0xF6D
#define SSP2STAT_D_position                      0x5
#define SSP2STAT_D_size                          0x1
#define SSP2STAT_D_value_mask                    0x20
#define SSP2STAT_D_clear_mask                    0xDF

#define DATA_ADDRESS2                            0x5
#define DATA_ADDRESS2_address                    0xF6D
#define DATA_ADDRESS2_position                   0x5
#define DATA_ADDRESS2_size                       0x1
#define DATA_ADDRESS2_value_mask                 0x20
#define DATA_ADDRESS2_clear_mask                 0xDF

#define SSP2STAT_D_NOT_A                         0x5
#define SSP2STAT_D_NOT_A_address                 0xF6D
#define SSP2STAT_D_NOT_A_position                0x5
#define SSP2STAT_D_NOT_A_size                    0x1
#define SSP2STAT_D_NOT_A_value_mask              0x20
#define SSP2STAT_D_NOT_A_clear_mask              0xDF

#define SSP2STAT_I2C_DAT                         0x5
#define SSP2STAT_I2C_DAT_address                 0xF6D
#define SSP2STAT_I2C_DAT_position                0x5
#define SSP2STAT_I2C_DAT_size                    0x1
#define SSP2STAT_I2C_DAT_value_mask              0x20
#define SSP2STAT_I2C_DAT_clear_mask              0xDF

#define D_A2                                     0x5
#define D_A2_address                             0xF6D
#define D_A2_position                            0x5
#define D_A2_size                                0x1
#define D_A2_value_mask                          0x20
#define D_A2_clear_mask                          0xDF

#define SSP2STAT_NOT_ADDRESS                     0x5
#define SSP2STAT_NOT_ADDRESS_address             0xF6D
#define SSP2STAT_NOT_ADDRESS_position            0x5
#define SSP2STAT_NOT_ADDRESS_size                0x1
#define SSP2STAT_NOT_ADDRESS_value_mask          0x20
#define SSP2STAT_NOT_ADDRESS_clear_mask          0xDF

#define SSP2STAT_D_nA                            0x5
#define SSP2STAT_D_nA_address                    0xF6D
#define SSP2STAT_D_nA_position                   0x5
#define SSP2STAT_D_nA_size                       0x1
#define SSP2STAT_D_nA_value_mask                 0x20
#define SSP2STAT_D_nA_clear_mask                 0xDF

#define SSP2STAT_DATA_ADDRESS                    0x5
#define SSP2STAT_DATA_ADDRESS_address            0xF6D
#define SSP2STAT_DATA_ADDRESS_position           0x5
#define SSP2STAT_DATA_ADDRESS_size               0x1
#define SSP2STAT_DATA_ADDRESS_value_mask         0x20
#define SSP2STAT_DATA_ADDRESS_clear_mask         0xDF

#define SSP2STAT_nADDRESS                        0x5
#define SSP2STAT_nADDRESS_address                0xF6D
#define SSP2STAT_nADDRESS_position               0x5
#define SSP2STAT_nADDRESS_size                   0x1
#define SSP2STAT_nADDRESS_value_mask             0x20
#define SSP2STAT_nADDRESS_clear_mask             0xDF

#define nA2                                      0x5
#define nA2_address                              0xF6D
#define nA2_position                             0x5
#define nA2_size                                 0x1
#define nA2_value_mask                           0x20
#define nA2_clear_mask                           0xDF

#define DA2                                      0x5
#define DA2_address                              0xF6D
#define DA2_position                             0x5
#define DA2_size                                 0x1
#define DA2_value_mask                           0x20
#define DA2_clear_mask                           0xDF

#define nADDRESS2                                0x5
#define nADDRESS2_address                        0xF6D
#define nADDRESS2_position                       0x5
#define nADDRESS2_size                           0x1
#define nADDRESS2_value_mask                     0x20
#define nADDRESS2_clear_mask                     0xDF

#define SSP2STAT_nA                              0x5
#define SSP2STAT_nA_address                      0xF6D
#define SSP2STAT_nA_position                     0x5
#define SSP2STAT_nA_size                         0x1
#define SSP2STAT_nA_value_mask                   0x20
#define SSP2STAT_nA_clear_mask                   0xDF

#define SSP2STAT_D_A                             0x5
#define SSP2STAT_D_A_address                     0xF6D
#define SSP2STAT_D_A_position                    0x5
#define SSP2STAT_D_A_size                        0x1
#define SSP2STAT_D_A_value_mask                  0x20
#define SSP2STAT_D_A_clear_mask                  0xDF

#define D_nA2                                    0x5
#define D_nA2_address                            0xF6D
#define D_nA2_position                           0x5
#define D_nA2_size                               0x1
#define D_nA2_value_mask                         0x20
#define D_nA2_clear_mask                         0xDF

#define SSP2STAT_CKE                             0x6
#define SSP2STAT_CKE_address                     0xF6D
#define SSP2STAT_CKE_position                    0x6
#define SSP2STAT_CKE_size                        0x1
#define SSP2STAT_CKE_value_mask                  0x40
#define SSP2STAT_CKE_clear_mask                  0xBF

#define CKE2                                     0x6
#define CKE2_address                             0xF6D
#define CKE2_position                            0x6
#define CKE2_size                                0x1
#define CKE2_value_mask                          0x40
#define CKE2_clear_mask                          0xBF

#define SSP2STAT_SMP                             0x7
#define SSP2STAT_SMP_address                     0xF6D
#define SSP2STAT_SMP_position                    0x7
#define SSP2STAT_SMP_size                        0x1
#define SSP2STAT_SMP_value_mask                  0x80
#define SSP2STAT_SMP_clear_mask                  0x7F

#define SMP2                                     0x7
#define SMP2_address                             0xF6D
#define SMP2_position                            0x7
#define SMP2_size                                0x1
#define SMP2_value_mask                          0x80
#define SMP2_clear_mask                          0x7F


/*--------------------------------------------------------------#
| SSP2ADD                                                 0xF6E |
#---------------------------------------------------------------#
| MSK72 | MSK62 | MSK52 | MSK42 | MSK32 | MSK22 | MSK12 | MSK02 |
#---------------------------------------------------------------#
| 7     | 6     | 5     | 4     | 3     | 2     | 1     | 0     |
#--------------------------------------------------------------*/

#define SSP2ADD                                  0x0
#define SSP2ADD_address                          0xF6E
#define SSP2ADD_position                         0x0
#define SSP2ADD_size                             0x8
#define SSP2ADD_value_mask                       0xFF
#define SSP2ADD_clear_mask                       0x0

#define MSK02                                    0x0
#define MSK02_address                            0xF6E
#define MSK02_position                           0x0
#define MSK02_size                               0x1
#define MSK02_value_mask                         0x1
#define MSK02_clear_mask                         0xFE

#define MSK12                                    0x1
#define MSK12_address                            0xF6E
#define MSK12_position                           0x1
#define MSK12_size                               0x1
#define MSK12_value_mask                         0x2
#define MSK12_clear_mask                         0xFD

#define MSK22                                    0x2
#define MSK22_address                            0xF6E
#define MSK22_position                           0x2
#define MSK22_size                               0x1
#define MSK22_value_mask                         0x4
#define MSK22_clear_mask                         0xFB

#define MSK32                                    0x3
#define MSK32_address                            0xF6E
#define MSK32_position                           0x3
#define MSK32_size                               0x1
#define MSK32_value_mask                         0x8
#define MSK32_clear_mask                         0xF7

#define MSK42                                    0x4
#define MSK42_address                            0xF6E
#define MSK42_position                           0x4
#define MSK42_size                               0x1
#define MSK42_value_mask                         0x10
#define MSK42_clear_mask                         0xEF

#define MSK52                                    0x5
#define MSK52_address                            0xF6E
#define MSK52_position                           0x5
#define MSK52_size                               0x1
#define MSK52_value_mask                         0x20
#define MSK52_clear_mask                         0xDF

#define MSK62                                    0x6
#define MSK62_address                            0xF6E
#define MSK62_position                           0x6
#define MSK62_size                               0x1
#define MSK62_value_mask                         0x40
#define MSK62_clear_mask                         0xBF

#define MSK72                                    0x7
#define MSK72_address                            0xF6E
#define MSK72_position                           0x7
#define MSK72_size                               0x1
#define MSK72_value_mask                         0x80
#define MSK72_clear_mask                         0x7F


/*----------------------------------------------------------------------------------------------------------------------#
| SSP2MSK                                                                                                         0xF6E |
#-----------------------------------------------------------------------------------------------------------------------#
| SSP2MSK_MSK7 | SSP2MSK_MSK6 | SSP2MSK_MSK5 | SSP2MSK_MSK4 | SSP2MSK_MSK3 | SSP2MSK_MSK2 | SSP2MSK_MSK1 | SSP2MSK_MSK0 |
#-----------------------------------------------------------------------------------------------------------------------#
| 7            | 6            | 5            | 4            | 3            | 2            | 1            | 0            |
#----------------------------------------------------------------------------------------------------------------------*/

#define SSP2MSK                                  0x0
#define SSP2MSK_address                          0xF6E
#define SSP2MSK_position                         0x0
#define SSP2MSK_size                             0x8
#define SSP2MSK_value_mask                       0xFF
#define SSP2MSK_clear_mask                       0x0

#define SSP2MSK_MSK0                             0x0
#define SSP2MSK_MSK0_address                     0xF6E
#define SSP2MSK_MSK0_position                    0x0
#define SSP2MSK_MSK0_size                        0x1
#define SSP2MSK_MSK0_value_mask                  0x1
#define SSP2MSK_MSK0_clear_mask                  0xFE

#define SSP2MSK_MSK1                             0x1
#define SSP2MSK_MSK1_address                     0xF6E
#define SSP2MSK_MSK1_position                    0x1
#define SSP2MSK_MSK1_size                        0x1
#define SSP2MSK_MSK1_value_mask                  0x2
#define SSP2MSK_MSK1_clear_mask                  0xFD

#define SSP2MSK_MSK2                             0x2
#define SSP2MSK_MSK2_address                     0xF6E
#define SSP2MSK_MSK2_position                    0x2
#define SSP2MSK_MSK2_size                        0x1
#define SSP2MSK_MSK2_value_mask                  0x4
#define SSP2MSK_MSK2_clear_mask                  0xFB

#define SSP2MSK_MSK3                             0x3
#define SSP2MSK_MSK3_address                     0xF6E
#define SSP2MSK_MSK3_position                    0x3
#define SSP2MSK_MSK3_size                        0x1
#define SSP2MSK_MSK3_value_mask                  0x8
#define SSP2MSK_MSK3_clear_mask                  0xF7

#define SSP2MSK_MSK4                             0x4
#define SSP2MSK_MSK4_address                     0xF6E
#define SSP2MSK_MSK4_position                    0x4
#define SSP2MSK_MSK4_size                        0x1
#define SSP2MSK_MSK4_value_mask                  0x10
#define SSP2MSK_MSK4_clear_mask                  0xEF

#define SSP2MSK_MSK5                             0x5
#define SSP2MSK_MSK5_address                     0xF6E
#define SSP2MSK_MSK5_position                    0x5
#define SSP2MSK_MSK5_size                        0x1
#define SSP2MSK_MSK5_value_mask                  0x20
#define SSP2MSK_MSK5_clear_mask                  0xDF

#define SSP2MSK_MSK6                             0x6
#define SSP2MSK_MSK6_address                     0xF6E
#define SSP2MSK_MSK6_position                    0x6
#define SSP2MSK_MSK6_size                        0x1
#define SSP2MSK_MSK6_value_mask                  0x40
#define SSP2MSK_MSK6_clear_mask                  0xBF

#define SSP2MSK_MSK7                             0x7
#define SSP2MSK_MSK7_address                     0xF6E
#define SSP2MSK_MSK7_position                    0x7
#define SSP2MSK_MSK7_size                        0x1
#define SSP2MSK_MSK7_value_mask                  0x80
#define SSP2MSK_MSK7_clear_mask                  0x7F


/*----------------------------------------------------------#
| CCP5CON                                             0xF70 |
#-----------------------------------------------------------#
| - | - | DC5B1 | DC5B0 | CCP5M3 | CCP5M2 | CCP5M1 | CCP5M0 |
#-----------------------------------------------------------#
| 7 | 6 | 5     | 4     | 3      | 2      | 1      | 0      |
#----------------------------------------------------------*/

#define CCP5CON                                  0x0
#define CCP5CON_address                          0xF70
#define CCP5CON_position                         0x0
#define CCP5CON_size                             0x8
#define CCP5CON_value_mask                       0xFF
#define CCP5CON_clear_mask                       0x0

#define CCP5M0                                   0x0
#define CCP5M0_address                           0xF70
#define CCP5M0_position                          0x0
#define CCP5M0_size                              0x1
#define CCP5M0_value_mask                        0x1
#define CCP5M0_clear_mask                        0xFE

#define CCP5M                                    0x0
#define CCP5M_address                            0xF70
#define CCP5M_position                           0x0
#define CCP5M_size                               0x4
#define CCP5M_value_mask                         0xF
#define CCP5M_clear_mask                         0xF0

#define CCP5M1                                   0x1
#define CCP5M1_address                           0xF70
#define CCP5M1_position                          0x1
#define CCP5M1_size                              0x1
#define CCP5M1_value_mask                        0x2
#define CCP5M1_clear_mask                        0xFD

#define CCP5M2                                   0x2
#define CCP5M2_address                           0xF70
#define CCP5M2_position                          0x2
#define CCP5M2_size                              0x1
#define CCP5M2_value_mask                        0x4
#define CCP5M2_clear_mask                        0xFB

#define CCP5M3                                   0x3
#define CCP5M3_address                           0xF70
#define CCP5M3_position                          0x3
#define CCP5M3_size                              0x1
#define CCP5M3_value_mask                        0x8
#define CCP5M3_clear_mask                        0xF7

#define DCCP5Y                                   0x4
#define DCCP5Y_address                           0xF70
#define DCCP5Y_position                          0x4
#define DCCP5Y_size                              0x1
#define DCCP5Y_value_mask                        0x10
#define DCCP5Y_clear_mask                        0xEF

#define DC5B0                                    0x4
#define DC5B0_address                            0xF70
#define DC5B0_position                           0x4
#define DC5B0_size                               0x1
#define DC5B0_value_mask                         0x10
#define DC5B0_clear_mask                         0xEF

#define DC5B                                     0x4
#define DC5B_address                             0xF70
#define DC5B_position                            0x4
#define DC5B_size                                0x2
#define DC5B_value_mask                          0x30
#define DC5B_clear_mask                          0xCF

#define DC5B1                                    0x5
#define DC5B1_address                            0xF70
#define DC5B1_position                           0x5
#define DC5B1_size                               0x1
#define DC5B1_value_mask                         0x20
#define DC5B1_clear_mask                         0xDF

#define DCCP5X                                   0x5
#define DCCP5X_address                           0xF70
#define DCCP5X_position                          0x5
#define DCCP5X_size                              0x1
#define DCCP5X_value_mask                        0x20
#define DCCP5X_clear_mask                        0xDF


/*----------------------------------------------------------#
| CCP4CON                                             0xF73 |
#-----------------------------------------------------------#
| - | - | DC4B1 | DC4B0 | CCP4M3 | CCP4M2 | CCP4M1 | CCP4M0 |
#-----------------------------------------------------------#
| 7 | 6 | 5     | 4     | 3      | 2      | 1      | 0      |
#----------------------------------------------------------*/

#define CCP4CON                                  0x0
#define CCP4CON_address                          0xF73
#define CCP4CON_position                         0x0
#define CCP4CON_size                             0x8
#define CCP4CON_value_mask                       0xFF
#define CCP4CON_clear_mask                       0x0

#define CCP4M                                    0x0
#define CCP4M_address                            0xF73
#define CCP4M_position                           0x0
#define CCP4M_size                               0x4
#define CCP4M_value_mask                         0xF
#define CCP4M_clear_mask                         0xF0

#define CCP4M0                                   0x0
#define CCP4M0_address                           0xF73
#define CCP4M0_position                          0x0
#define CCP4M0_size                              0x1
#define CCP4M0_value_mask                        0x1
#define CCP4M0_clear_mask                        0xFE

#define CCP4M1                                   0x1
#define CCP4M1_address                           0xF73
#define CCP4M1_position                          0x1
#define CCP4M1_size                              0x1
#define CCP4M1_value_mask                        0x2
#define CCP4M1_clear_mask                        0xFD

#define CCP4M2                                   0x2
#define CCP4M2_address                           0xF73
#define CCP4M2_position                          0x2
#define CCP4M2_size                              0x1
#define CCP4M2_value_mask                        0x4
#define CCP4M2_clear_mask                        0xFB

#define CCP4M3                                   0x3
#define CCP4M3_address                           0xF73
#define CCP4M3_position                          0x3
#define CCP4M3_size                              0x1
#define CCP4M3_value_mask                        0x8
#define CCP4M3_clear_mask                        0xF7

#define DCCP4Y                                   0x4
#define DCCP4Y_address                           0xF73
#define DCCP4Y_position                          0x4
#define DCCP4Y_size                              0x1
#define DCCP4Y_value_mask                        0x10
#define DCCP4Y_clear_mask                        0xEF

#define DC4B0                                    0x4
#define DC4B0_address                            0xF73
#define DC4B0_position                           0x4
#define DC4B0_size                               0x1
#define DC4B0_value_mask                         0x10
#define DC4B0_clear_mask                         0xEF

#define DC4B                                     0x4
#define DC4B_address                             0xF73
#define DC4B_position                            0x4
#define DC4B_size                                0x2
#define DC4B_value_mask                          0x30
#define DC4B_clear_mask                          0xCF

#define DCCP4X                                   0x5
#define DCCP4X_address                           0xF73
#define DCCP4X_position                          0x5
#define DCCP4X_size                              0x1
#define DCCP4X_value_mask                        0x20
#define DCCP4X_clear_mask                        0xDF

#define DC4B1                                    0x5
#define DC4B1_address                            0xF73
#define DC4B1_position                           0x5
#define DC4B1_size                               0x1
#define DC4B1_value_mask                         0x20
#define DC4B1_clear_mask                         0xDF


/*---------------------------------------------------------------------------#
| T4CON                                                                0xF76 |
#----------------------------------------------------------------------------#
| - | T4OUTPS3 | T4OUTPS2 | T4OUTPS1 | T4OUTPS0 | TMR4ON | T4CKPS1 | T4CKPS0 |
#----------------------------------------------------------------------------#
| 7 | 6        | 5        | 4        | 3        | 2      | 1       | 0       |
#---------------------------------------------------------------------------*/

#define T4CON                                    0x0
#define T4CON_address                            0xF76
#define T4CON_position                           0x0
#define T4CON_size                               0x8
#define T4CON_value_mask                         0xFF
#define T4CON_clear_mask                         0x0

#define T4CKPS0                                  0x0
#define T4CKPS0_address                          0xF76
#define T4CKPS0_position                         0x0
#define T4CKPS0_size                             0x1
#define T4CKPS0_value_mask                       0x1
#define T4CKPS0_clear_mask                       0xFE

#define T4CKPS                                   0x0
#define T4CKPS_address                           0xF76
#define T4CKPS_position                          0x0
#define T4CKPS_size                              0x2
#define T4CKPS_value_mask                        0x3
#define T4CKPS_clear_mask                        0xFC

#define T4CKPS1                                  0x1
#define T4CKPS1_address                          0xF76
#define T4CKPS1_position                         0x1
#define T4CKPS1_size                             0x1
#define T4CKPS1_value_mask                       0x2
#define T4CKPS1_clear_mask                       0xFD

#define TMR4ON                                   0x2
#define TMR4ON_address                           0xF76
#define TMR4ON_position                          0x2
#define TMR4ON_size                              0x1
#define TMR4ON_value_mask                        0x4
#define TMR4ON_clear_mask                        0xFB

#define T4OUTPS                                  0x3
#define T4OUTPS_address                          0xF76
#define T4OUTPS_position                         0x3
#define T4OUTPS_size                             0x4
#define T4OUTPS_value_mask                       0x78
#define T4OUTPS_clear_mask                       0x87

#define T4OUTPS0                                 0x3
#define T4OUTPS0_address                         0xF76
#define T4OUTPS0_position                        0x3
#define T4OUTPS0_size                            0x1
#define T4OUTPS0_value_mask                      0x8
#define T4OUTPS0_clear_mask                      0xF7

#define T4OUTPS1                                 0x4
#define T4OUTPS1_address                         0xF76
#define T4OUTPS1_position                        0x4
#define T4OUTPS1_size                            0x1
#define T4OUTPS1_value_mask                      0x10
#define T4OUTPS1_clear_mask                      0xEF

#define T4OUTPS2                                 0x5
#define T4OUTPS2_address                         0xF76
#define T4OUTPS2_position                        0x5
#define T4OUTPS2_size                            0x1
#define T4OUTPS2_value_mask                      0x20
#define T4OUTPS2_clear_mask                      0xDF

#define T4OUTPS3                                 0x6
#define T4OUTPS3_address                         0xF76
#define T4OUTPS3_position                        0x6
#define T4OUTPS3_size                            0x1
#define T4OUTPS3_value_mask                      0x40
#define T4OUTPS3_clear_mask                      0xBF


/*----------------------------------------------------------#
| CVRCON                                              0xF77 |
#-----------------------------------------------------------#
| CVREN | CVROEN | CVRR | CVRSS | CVR3 | CVR2 | CVR1 | CVR0 |
#-----------------------------------------------------------#
| 7     | 6      | 5    | 4     | 3    | 2    | 1    | 0    |
#----------------------------------------------------------*/

#define CVRCON                                   0x0
#define CVRCON_address                           0xF77
#define CVRCON_position                          0x0
#define CVRCON_size                              0x8
#define CVRCON_value_mask                        0xFF
#define CVRCON_clear_mask                        0x0

#define CVR                                      0x0
#define CVR_address                              0xF77
#define CVR_position                             0x0
#define CVR_size                                 0x4
#define CVR_value_mask                           0xF
#define CVR_clear_mask                           0xF0

#define CVR0                                     0x0
#define CVR0_address                             0xF77
#define CVR0_position                            0x0
#define CVR0_size                                0x1
#define CVR0_value_mask                          0x1
#define CVR0_clear_mask                          0xFE

#define CVR1                                     0x1
#define CVR1_address                             0xF77
#define CVR1_position                            0x1
#define CVR1_size                                0x1
#define CVR1_value_mask                          0x2
#define CVR1_clear_mask                          0xFD

#define CVR2                                     0x2
#define CVR2_address                             0xF77
#define CVR2_position                            0x2
#define CVR2_size                                0x1
#define CVR2_value_mask                          0x4
#define CVR2_clear_mask                          0xFB

#define CVR3                                     0x3
#define CVR3_address                             0xF77
#define CVR3_position                            0x3
#define CVR3_size                                0x1
#define CVR3_value_mask                          0x8
#define CVR3_clear_mask                          0xF7

#define CVRSS                                    0x4
#define CVRSS_address                            0xF77
#define CVRSS_position                           0x4
#define CVRSS_size                               0x1
#define CVRSS_value_mask                         0x10
#define CVRSS_clear_mask                         0xEF

#define CVRR                                     0x5
#define CVRR_address                             0xF77
#define CVRR_position                            0x5
#define CVRR_size                                0x1
#define CVRR_value_mask                          0x20
#define CVRR_clear_mask                          0xDF

#define CVROEN                                   0x6
#define CVROEN_address                           0xF77
#define CVROEN_position                          0x6
#define CVROEN_size                              0x1
#define CVROEN_value_mask                        0x40
#define CVROEN_clear_mask                        0xBF

#define CVROE                                    0x6
#define CVROE_address                            0xF77
#define CVROE_position                           0x6
#define CVROE_size                               0x1
#define CVROE_value_mask                         0x40
#define CVROE_clear_mask                         0xBF

#define CVREN                                    0x7
#define CVREN_address                            0xF77
#define CVREN_position                           0x7
#define CVREN_size                               0x1
#define CVREN_value_mask                         0x80
#define CVREN_clear_mask                         0x7F


/*------------------------------------------------------------------------------#
| T3CON                                                                   0xF79 |
#-------------------------------------------------------------------------------#
| T3CON_RD16 | T3CCP2 | T3CKPS1 | T3CKPS0 | SOSCEN3 | nT3SYNC | TMR3CS | TMR3ON |
#-------------------------------------------------------------------------------#
| 7          | 6      | 5       | 4       | 3       | 2       | 1      | 0      |
#------------------------------------------------------------------------------*/

#define T3CON                                    0x0
#define T3CON_address                            0xF79
#define T3CON_position                           0x0
#define T3CON_size                               0x8
#define T3CON_value_mask                         0xFF
#define T3CON_clear_mask                         0x0

#define TMR3ON                                   0x0
#define TMR3ON_address                           0xF79
#define TMR3ON_position                          0x0
#define TMR3ON_size                              0x1
#define TMR3ON_value_mask                        0x1
#define TMR3ON_clear_mask                        0xFE

#define TMR3CS                                   0x1
#define TMR3CS_address                           0xF79
#define TMR3CS_position                          0x1
#define TMR3CS_size                              0x1
#define TMR3CS_value_mask                        0x2
#define TMR3CS_clear_mask                        0xFD

#define nT3SYNC                                  0x2
#define nT3SYNC_address                          0xF79
#define nT3SYNC_position                         0x2
#define nT3SYNC_size                             0x1
#define nT3SYNC_value_mask                       0x4
#define nT3SYNC_clear_mask                       0xFB

#define NOT_T3SYNC                               0x2
#define NOT_T3SYNC_address                       0xF79
#define NOT_T3SYNC_position                      0x2
#define NOT_T3SYNC_size                          0x1
#define NOT_T3SYNC_value_mask                    0x4
#define NOT_T3SYNC_clear_mask                    0xFB

#define T3SYNC                                   0x2
#define T3SYNC_address                           0xF79
#define T3SYNC_position                          0x2
#define T3SYNC_size                              0x1
#define T3SYNC_value_mask                        0x4
#define T3SYNC_clear_mask                        0xFB

#define T3INSYNC                                 0x2
#define T3INSYNC_address                         0xF79
#define T3INSYNC_position                        0x2
#define T3INSYNC_size                            0x1
#define T3INSYNC_value_mask                      0x4
#define T3INSYNC_clear_mask                      0xFB

#define SOSCEN3                                  0x3
#define SOSCEN3_address                          0xF79
#define SOSCEN3_position                         0x3
#define SOSCEN3_size                             0x1
#define SOSCEN3_value_mask                       0x8
#define SOSCEN3_clear_mask                       0xF7

#define T3CCP1                                   0x3
#define T3CCP1_address                           0xF79
#define T3CCP1_position                          0x3
#define T3CCP1_size                              0x1
#define T3CCP1_value_mask                        0x8
#define T3CCP1_clear_mask                        0xF7

#define T3CKPS                                   0x4
#define T3CKPS_address                           0xF79
#define T3CKPS_position                          0x4
#define T3CKPS_size                              0x2
#define T3CKPS_value_mask                        0x30
#define T3CKPS_clear_mask                        0xCF

#define T3CKPS0                                  0x4
#define T3CKPS0_address                          0xF79
#define T3CKPS0_position                         0x4
#define T3CKPS0_size                             0x1
#define T3CKPS0_value_mask                       0x10
#define T3CKPS0_clear_mask                       0xEF

#define T3CKPS1                                  0x5
#define T3CKPS1_address                          0xF79
#define T3CKPS1_position                         0x5
#define T3CKPS1_size                             0x1
#define T3CKPS1_value_mask                       0x20
#define T3CKPS1_clear_mask                       0xDF

#define T3CCP2                                   0x6
#define T3CCP2_address                           0xF79
#define T3CCP2_position                          0x6
#define T3CCP2_size                              0x1
#define T3CCP2_value_mask                        0x40
#define T3CCP2_clear_mask                        0xBF

#define T3CON_RD16                               0x7
#define T3CON_RD16_address                       0xF79
#define T3CON_RD16_position                      0x7
#define T3CON_RD16_size                          0x1
#define T3CON_RD16_value_mask                    0x80
#define T3CON_RD16_clear_mask                    0x7F

#define RD163                                    0x7
#define RD163_address                            0xF79
#define RD163_position                           0x7
#define RD163_size                               0x1
#define RD163_value_mask                         0x80
#define RD163_clear_mask                         0x7F

#define T3RD16                                   0x7
#define T3RD16_address                           0xF79
#define T3RD16_position                          0x7
#define T3RD16_size                              0x1
#define T3RD16_value_mask                        0x80
#define T3RD16_clear_mask                        0x7F


/*-------------------------------------------------------------------------------#
| BAUDCON2                                                                 0xF7C |
#--------------------------------------------------------------------------------#
| ABDOVF2 | BAUDCON2_RCMT | DTRXP2 | BAUDCON2_TXCKP | BRG162 | - | WUE2 | ABDEN2 |
#--------------------------------------------------------------------------------#
| 7       | 6             | 5      | 4              | 3      | 2 | 1    | 0      |
#-------------------------------------------------------------------------------*/

#define BAUDCON2                                 0x0
#define BAUDCON2_address                         0xF7C
#define BAUDCON2_position                        0x0
#define BAUDCON2_size                            0x8
#define BAUDCON2_value_mask                      0xFF
#define BAUDCON2_clear_mask                      0x0

#define BAUDCON2_ABDEN                           0x0
#define BAUDCON2_ABDEN_address                   0xF7C
#define BAUDCON2_ABDEN_position                  0x0
#define BAUDCON2_ABDEN_size                      0x1
#define BAUDCON2_ABDEN_value_mask                0x1
#define BAUDCON2_ABDEN_clear_mask                0xFE

#define ABDEN2                                   0x0
#define ABDEN2_address                           0xF7C
#define ABDEN2_position                          0x0
#define ABDEN2_size                              0x1
#define ABDEN2_value_mask                        0x1
#define ABDEN2_clear_mask                        0xFE

#define WUE2                                     0x1
#define WUE2_address                             0xF7C
#define WUE2_position                            0x1
#define WUE2_size                                0x1
#define WUE2_value_mask                          0x2
#define WUE2_clear_mask                          0xFD

#define BAUDCON2_WUE                             0x1
#define BAUDCON2_WUE_address                     0xF7C
#define BAUDCON2_WUE_position                    0x1
#define BAUDCON2_WUE_size                        0x1
#define BAUDCON2_WUE_value_mask                  0x2
#define BAUDCON2_WUE_clear_mask                  0xFD

#define BRG162                                   0x3
#define BRG162_address                           0xF7C
#define BRG162_position                          0x3
#define BRG162_size                              0x1
#define BRG162_value_mask                        0x8
#define BRG162_clear_mask                        0xF7

#define BAUDCON2_BRG16                           0x3
#define BAUDCON2_BRG16_address                   0xF7C
#define BAUDCON2_BRG16_position                  0x3
#define BAUDCON2_BRG16_size                      0x1
#define BAUDCON2_BRG16_value_mask                0x8
#define BAUDCON2_BRG16_clear_mask                0xF7

#define BAUDCON2_SCKP                            0x4
#define BAUDCON2_SCKP_address                    0xF7C
#define BAUDCON2_SCKP_position                   0x4
#define BAUDCON2_SCKP_size                       0x1
#define BAUDCON2_SCKP_value_mask                 0x10
#define BAUDCON2_SCKP_clear_mask                 0xEF

#define SCKP2                                    0x4
#define SCKP2_address                            0xF7C
#define SCKP2_position                           0x4
#define SCKP2_size                               0x1
#define SCKP2_value_mask                         0x10
#define SCKP2_clear_mask                         0xEF

#define BAUDCON2_TXCKP                           0x4
#define BAUDCON2_TXCKP_address                   0xF7C
#define BAUDCON2_TXCKP_position                  0x4
#define BAUDCON2_TXCKP_size                      0x1
#define BAUDCON2_TXCKP_value_mask                0x10
#define BAUDCON2_TXCKP_clear_mask                0xEF

#define TXCKP2                                   0x4
#define TXCKP2_address                           0xF7C
#define TXCKP2_position                          0x4
#define TXCKP2_size                              0x1
#define TXCKP2_value_mask                        0x10
#define TXCKP2_clear_mask                        0xEF

#define DTRXP2                                   0x5
#define DTRXP2_address                           0xF7C
#define DTRXP2_position                          0x5
#define DTRXP2_size                              0x1
#define DTRXP2_value_mask                        0x20
#define DTRXP2_clear_mask                        0xDF

#define RXDTP2                                   0x5
#define RXDTP2_address                           0xF7C
#define RXDTP2_position                          0x5
#define RXDTP2_size                              0x1
#define RXDTP2_value_mask                        0x20
#define RXDTP2_clear_mask                        0xDF

#define BAUDCON2_DTRXP                           0x5
#define BAUDCON2_DTRXP_address                   0xF7C
#define BAUDCON2_DTRXP_position                  0x5
#define BAUDCON2_DTRXP_size                      0x1
#define BAUDCON2_DTRXP_value_mask                0x20
#define BAUDCON2_DTRXP_clear_mask                0xDF

#define BAUDCON2_RXDTP                           0x5
#define BAUDCON2_RXDTP_address                   0xF7C
#define BAUDCON2_RXDTP_position                  0x5
#define BAUDCON2_RXDTP_size                      0x1
#define BAUDCON2_RXDTP_value_mask                0x20
#define BAUDCON2_RXDTP_clear_mask                0xDF

#define RCMT2                                    0x6
#define RCMT2_address                            0xF7C
#define RCMT2_position                           0x6
#define RCMT2_size                               0x1
#define RCMT2_value_mask                         0x40
#define RCMT2_clear_mask                         0xBF

#define RCIDL2                                   0x6
#define RCIDL2_address                           0xF7C
#define RCIDL2_position                          0x6
#define RCIDL2_size                              0x1
#define RCIDL2_value_mask                        0x40
#define RCIDL2_clear_mask                        0xBF

#define BAUDCON2_RCIDL                           0x6
#define BAUDCON2_RCIDL_address                   0xF7C
#define BAUDCON2_RCIDL_position                  0x6
#define BAUDCON2_RCIDL_size                      0x1
#define BAUDCON2_RCIDL_value_mask                0x40
#define BAUDCON2_RCIDL_clear_mask                0xBF

#define BAUDCON2_RCMT                            0x6
#define BAUDCON2_RCMT_address                    0xF7C
#define BAUDCON2_RCMT_position                   0x6
#define BAUDCON2_RCMT_size                       0x1
#define BAUDCON2_RCMT_value_mask                 0x40
#define BAUDCON2_RCMT_clear_mask                 0xBF

#define BAUDCON2_ABDOVF                          0x7
#define BAUDCON2_ABDOVF_address                  0xF7C
#define BAUDCON2_ABDOVF_position                 0x7
#define BAUDCON2_ABDOVF_size                     0x1
#define BAUDCON2_ABDOVF_value_mask               0x80
#define BAUDCON2_ABDOVF_clear_mask               0x7F

#define ABDOVF2                                  0x7
#define ABDOVF2_address                          0xF7C
#define ABDOVF2_position                         0x7
#define ABDOVF2_size                             0x1
#define ABDOVF2_value_mask                       0x80
#define ABDOVF2_clear_mask                       0x7F


/*--------------------------------------------------------------------------------------#
| BAUDCON1                                                                        0xF7E |
#---------------------------------------------------------------------------------------#
| ABDOVF1 | BAUDCON1_RCMT | DTRXP1 | CKTXP | BRG161 | - | BAUDCON1_WUE | BAUDCON1_ABDEN |
#---------------------------------------------------------------------------------------#
| 7       | 6             | 5      | 4     | 3      | 2 | 1            | 0              |
#--------------------------------------------------------------------------------------*/

#define BAUDCON1                                 0x0
#define BAUDCON1_address                         0xF7E
#define BAUDCON1_position                        0x0
#define BAUDCON1_size                            0x8
#define BAUDCON1_value_mask                      0xFF
#define BAUDCON1_clear_mask                      0x0

#define BAUDCON1_ABDEN                           0x0
#define BAUDCON1_ABDEN_address                   0xF7E
#define BAUDCON1_ABDEN_position                  0x0
#define BAUDCON1_ABDEN_size                      0x1
#define BAUDCON1_ABDEN_value_mask                0x1
#define BAUDCON1_ABDEN_clear_mask                0xFE

#define ABDEN1                                   0x0
#define ABDEN1_address                           0xF7E
#define ABDEN1_position                          0x0
#define ABDEN1_size                              0x1
#define ABDEN1_value_mask                        0x1
#define ABDEN1_clear_mask                        0xFE

#define BAUDCON1_WUE                             0x1
#define BAUDCON1_WUE_address                     0xF7E
#define BAUDCON1_WUE_position                    0x1
#define BAUDCON1_WUE_size                        0x1
#define BAUDCON1_WUE_value_mask                  0x2
#define BAUDCON1_WUE_clear_mask                  0xFD

#define WUE1                                     0x1
#define WUE1_address                             0xF7E
#define WUE1_position                            0x1
#define WUE1_size                                0x1
#define WUE1_value_mask                          0x2
#define WUE1_clear_mask                          0xFD

#define W4E                                      0x1
#define W4E_address                              0xF7E
#define W4E_position                             0x1
#define W4E_size                                 0x1
#define W4E_value_mask                           0x2
#define W4E_clear_mask                           0xFD

#define BRG161                                   0x3
#define BRG161_address                           0xF7E
#define BRG161_position                          0x3
#define BRG161_size                              0x1
#define BRG161_value_mask                        0x8
#define BRG161_clear_mask                        0xF7

#define BAUDCON1_BRG16                           0x3
#define BAUDCON1_BRG16_address                   0xF7E
#define BAUDCON1_BRG16_position                  0x3
#define BAUDCON1_BRG16_size                      0x1
#define BAUDCON1_BRG16_value_mask                0x8
#define BAUDCON1_BRG16_clear_mask                0xF7

#define CKTXP                                    0x4
#define CKTXP_address                            0xF7E
#define CKTXP_position                           0x4
#define CKTXP_size                               0x1
#define CKTXP_value_mask                         0x10
#define CKTXP_clear_mask                         0xEF

#define BAUDCON1_TXCKP                           0x4
#define BAUDCON1_TXCKP_address                   0xF7E
#define BAUDCON1_TXCKP_position                  0x4
#define BAUDCON1_TXCKP_size                      0x1
#define BAUDCON1_TXCKP_value_mask                0x10
#define BAUDCON1_TXCKP_clear_mask                0xEF

#define SCKP1                                    0x4
#define SCKP1_address                            0xF7E
#define SCKP1_position                           0x4
#define SCKP1_size                               0x1
#define SCKP1_value_mask                         0x10
#define SCKP1_clear_mask                         0xEF

#define BAUDCON1_SCKP                            0x4
#define BAUDCON1_SCKP_address                    0xF7E
#define BAUDCON1_SCKP_position                   0x4
#define BAUDCON1_SCKP_size                       0x1
#define BAUDCON1_SCKP_value_mask                 0x10
#define BAUDCON1_SCKP_clear_mask                 0xEF

#define TXCKP1                                   0x4
#define TXCKP1_address                           0xF7E
#define TXCKP1_position                          0x4
#define TXCKP1_size                              0x1
#define TXCKP1_value_mask                        0x10
#define TXCKP1_clear_mask                        0xEF

#define DTRXP1                                   0x5
#define DTRXP1_address                           0xF7E
#define DTRXP1_position                          0x5
#define DTRXP1_size                              0x1
#define DTRXP1_value_mask                        0x20
#define DTRXP1_clear_mask                        0xDF

#define RXDTP1                                   0x5
#define RXDTP1_address                           0xF7E
#define RXDTP1_position                          0x5
#define RXDTP1_size                              0x1
#define RXDTP1_value_mask                        0x20
#define RXDTP1_clear_mask                        0xDF

#define RXCKP                                    0x5
#define RXCKP_address                            0xF7E
#define RXCKP_position                           0x5
#define RXCKP_size                               0x1
#define RXCKP_value_mask                         0x20
#define RXCKP_clear_mask                         0xDF

#define BAUDCON1_DTRXP                           0x5
#define BAUDCON1_DTRXP_address                   0xF7E
#define BAUDCON1_DTRXP_position                  0x5
#define BAUDCON1_DTRXP_size                      0x1
#define BAUDCON1_DTRXP_value_mask                0x20
#define BAUDCON1_DTRXP_clear_mask                0xDF

#define BAUDCON1_RXDTP                           0x5
#define BAUDCON1_RXDTP_address                   0xF7E
#define BAUDCON1_RXDTP_position                  0x5
#define BAUDCON1_RXDTP_size                      0x1
#define BAUDCON1_RXDTP_value_mask                0x20
#define BAUDCON1_RXDTP_clear_mask                0xDF

#define BAUDCON1_RCMT                            0x6
#define BAUDCON1_RCMT_address                    0xF7E
#define BAUDCON1_RCMT_position                   0x6
#define BAUDCON1_RCMT_size                       0x1
#define BAUDCON1_RCMT_value_mask                 0x40
#define BAUDCON1_RCMT_clear_mask                 0xBF

#define RCMT1                                    0x6
#define RCMT1_address                            0xF7E
#define RCMT1_position                           0x6
#define RCMT1_size                               0x1
#define RCMT1_value_mask                         0x40
#define RCMT1_clear_mask                         0xBF

#define RCIDL1                                   0x6
#define RCIDL1_address                           0xF7E
#define RCIDL1_position                          0x6
#define RCIDL1_size                              0x1
#define RCIDL1_value_mask                        0x40
#define RCIDL1_clear_mask                        0xBF

#define BAUDCON1_RCIDL                           0x6
#define BAUDCON1_RCIDL_address                   0xF7E
#define BAUDCON1_RCIDL_position                  0x6
#define BAUDCON1_RCIDL_size                      0x1
#define BAUDCON1_RCIDL_value_mask                0x40
#define BAUDCON1_RCIDL_clear_mask                0xBF

#define ABDOVF1                                  0x7
#define ABDOVF1_address                          0xF7E
#define ABDOVF1_position                         0x7
#define ABDOVF1_size                             0x1
#define ABDOVF1_value_mask                       0x80
#define ABDOVF1_clear_mask                       0x7F

#define BAUDCON1_ABDOVF                          0x7
#define BAUDCON1_ABDOVF_address                  0xF7E
#define BAUDCON1_ABDOVF_position                 0x7
#define BAUDCON1_ABDOVF_size                     0x1
#define BAUDCON1_ABDOVF_value_mask               0x80
#define BAUDCON1_ABDOVF_clear_mask               0x7F


/*----------------------------------------------------------------------------#
| PORTA                                                                 0xF80 |
#-----------------------------------------------------------------------------#
| RJPU | CLKO | LVDIN | PORTA_RA4 | PORTA_RA3 | VREFM | PORTA_RA1 | PORTA_RA0 |
#-----------------------------------------------------------------------------#
| 7    | 6    | 5     | 4         | 3         | 2     | 1         | 0         |
#----------------------------------------------------------------------------*/

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

#define PORTA_RA7                                0x7
#define PORTA_RA7_address                        0xF80
#define PORTA_RA7_position                       0x7
#define PORTA_RA7_size                           0x1
#define PORTA_RA7_value_mask                     0x80
#define PORTA_RA7_clear_mask                     0x7F

#define RJPU                                     0x7
#define RJPU_address                             0xF80
#define RJPU_position                            0x7
#define RJPU_size                                0x1
#define RJPU_value_mask                          0x80
#define RJPU_clear_mask                          0x7F


/*----------------------------------------------------#
| PORTB                                         0xF81 |
#-----------------------------------------------------#
| PGD | PGC | PMA0 | PMA1 | PMA2 | PMA3 | PMA4 | FLT0 |
#-----------------------------------------------------#
| 7   | 6   | 5    | 4    | 3    | 2    | 1    | 0    |
#----------------------------------------------------*/

#define PORTB                                    0x0
#define PORTB_address                            0xF81
#define PORTB_position                           0x0
#define PORTB_size                               0x8
#define PORTB_value_mask                         0xFF
#define PORTB_clear_mask                         0x0

#define FLT0                                     0x0
#define FLT0_address                             0xF81
#define FLT0_position                            0x0
#define FLT0_size                                0x1
#define FLT0_value_mask                          0x1
#define FLT0_clear_mask                          0xFE

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

#define PMA4                                     0x1
#define PMA4_address                             0xF81
#define PMA4_position                            0x1
#define PMA4_size                                0x1
#define PMA4_value_mask                          0x2
#define PMA4_clear_mask                          0xFD

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

#define PMA3                                     0x2
#define PMA3_address                             0xF81
#define PMA3_position                            0x2
#define PMA3_size                                0x1
#define PMA3_value_mask                          0x4
#define PMA3_clear_mask                          0xFB

#define INT2                                     0x2
#define INT2_address                             0xF81
#define INT2_position                            0x2
#define INT2_size                                0x1
#define INT2_value_mask                          0x4
#define INT2_clear_mask                          0xFB

#define PORTB_RB2                                0x2
#define PORTB_RB2_address                        0xF81
#define PORTB_RB2_position                       0x2
#define PORTB_RB2_size                           0x1
#define PORTB_RB2_value_mask                     0x4
#define PORTB_RB2_clear_mask                     0xFB

#define PMA2                                     0x3
#define PMA2_address                             0xF81
#define PMA2_position                            0x3
#define PMA2_size                                0x1
#define PMA2_value_mask                          0x8
#define PMA2_clear_mask                          0xF7

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

#define PMA1                                     0x4
#define PMA1_address                             0xF81
#define PMA1_position                            0x4
#define PMA1_size                                0x1
#define PMA1_value_mask                          0x10
#define PMA1_clear_mask                          0xEF

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

#define PMA0                                     0x5
#define PMA0_address                             0xF81
#define PMA0_position                            0x5
#define PMA0_size                                0x1
#define PMA0_value_mask                          0x20
#define PMA0_clear_mask                          0xDF

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


/*-------------------------------------------------------#
| PORTC                                            0xF82 |
#--------------------------------------------------------#
| DT | CK | SDO | SDA | SCL | CCP1 | PORTC_CCP2 | T13CKI |
#--------------------------------------------------------#
| 7  | 6  | 5   | 4   | 3   | 2    | 1          | 0      |
#-------------------------------------------------------*/

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

#define PORTC_CCP2                               0x1
#define PORTC_CCP2_address                       0xF82
#define PORTC_CCP2_position                      0x1
#define PORTC_CCP2_size                          0x1
#define PORTC_CCP2_value_mask                    0x2
#define PORTC_CCP2_clear_mask                    0xFD

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


/*-------------------------------------------------------------------------#
| PORTD                                                              0xF83 |
#--------------------------------------------------------------------------#
| SS2 | SCK2 | SDI2 | SDO2 | PORTD_RD3 | PORTD_RD2 | PORTD_RD1 | PORTD_RD0 |
#--------------------------------------------------------------------------#
| 7   | 6    | 5    | 4    | 3         | 2         | 1         | 0         |
#-------------------------------------------------------------------------*/

#define PORTD                                    0x0
#define PORTD_address                            0xF83
#define PORTD_position                           0x0
#define PORTD_size                               0x8
#define PORTD_value_mask                         0xFF
#define PORTD_clear_mask                         0x0

#define PORTD_RD0                                0x0
#define PORTD_RD0_address                        0xF83
#define PORTD_RD0_position                       0x0
#define PORTD_RD0_size                           0x1
#define PORTD_RD0_value_mask                     0x1
#define PORTD_RD0_clear_mask                     0xFE

#define PMD0                                     0x0
#define PMD0_address                             0xF83
#define PMD0_position                            0x0
#define PMD0_size                                0x1
#define PMD0_value_mask                          0x1
#define PMD0_clear_mask                          0xFE

#define PORTD_RD1                                0x1
#define PORTD_RD1_address                        0xF83
#define PORTD_RD1_position                       0x1
#define PORTD_RD1_size                           0x1
#define PORTD_RD1_value_mask                     0x2
#define PORTD_RD1_clear_mask                     0xFD

#define PMD1                                     0x1
#define PMD1_address                             0xF83
#define PMD1_position                            0x1
#define PMD1_size                                0x1
#define PMD1_value_mask                          0x2
#define PMD1_clear_mask                          0xFD

#define PORTD_RD2                                0x2
#define PORTD_RD2_address                        0xF83
#define PORTD_RD2_position                       0x2
#define PORTD_RD2_size                           0x1
#define PORTD_RD2_value_mask                     0x4
#define PORTD_RD2_clear_mask                     0xFB

#define PMD2                                     0x2
#define PMD2_address                             0xF83
#define PMD2_position                            0x2
#define PMD2_size                                0x1
#define PMD2_value_mask                          0x4
#define PMD2_clear_mask                          0xFB

#define PORTD_RD3                                0x3
#define PORTD_RD3_address                        0xF83
#define PORTD_RD3_position                       0x3
#define PORTD_RD3_size                           0x1
#define PORTD_RD3_value_mask                     0x8
#define PORTD_RD3_clear_mask                     0xF7

#define PMD3                                     0x3
#define PMD3_address                             0xF83
#define PMD3_position                            0x3
#define PMD3_size                                0x1
#define PMD3_value_mask                          0x8
#define PMD3_clear_mask                          0xF7

#define SDO2                                     0x4
#define SDO2_address                             0xF83
#define SDO2_position                            0x4
#define SDO2_size                                0x1
#define SDO2_value_mask                          0x10
#define SDO2_clear_mask                          0xEF

#define PORTD_RD4                                0x4
#define PORTD_RD4_address                        0xF83
#define PORTD_RD4_position                       0x4
#define PORTD_RD4_size                           0x1
#define PORTD_RD4_value_mask                     0x10
#define PORTD_RD4_clear_mask                     0xEF

#define PMD4                                     0x4
#define PMD4_address                             0xF83
#define PMD4_position                            0x4
#define PMD4_size                                0x1
#define PMD4_value_mask                          0x10
#define PMD4_clear_mask                          0xEF

#define SDI2                                     0x5
#define SDI2_address                             0xF83
#define SDI2_position                            0x5
#define SDI2_size                                0x1
#define SDI2_value_mask                          0x20
#define SDI2_clear_mask                          0xDF

#define SDA2                                     0x5
#define SDA2_address                             0xF83
#define SDA2_position                            0x5
#define SDA2_size                                0x1
#define SDA2_value_mask                          0x20
#define SDA2_clear_mask                          0xDF

#define PORTD_RD5                                0x5
#define PORTD_RD5_address                        0xF83
#define PORTD_RD5_position                       0x5
#define PORTD_RD5_size                           0x1
#define PORTD_RD5_value_mask                     0x20
#define PORTD_RD5_clear_mask                     0xDF

#define PMD5                                     0x5
#define PMD5_address                             0xF83
#define PMD5_position                            0x5
#define PMD5_size                                0x1
#define PMD5_value_mask                          0x20
#define PMD5_clear_mask                          0xDF

#define SCK2                                     0x6
#define SCK2_address                             0xF83
#define SCK2_position                            0x6
#define SCK2_size                                0x1
#define SCK2_value_mask                          0x40
#define SCK2_clear_mask                          0xBF

#define SCL2                                     0x6
#define SCL2_address                             0xF83
#define SCL2_position                            0x6
#define SCL2_size                                0x1
#define SCL2_value_mask                          0x40
#define SCL2_clear_mask                          0xBF

#define PORTD_RD6                                0x6
#define PORTD_RD6_address                        0xF83
#define PORTD_RD6_position                       0x6
#define PORTD_RD6_size                           0x1
#define PORTD_RD6_value_mask                     0x40
#define PORTD_RD6_clear_mask                     0xBF

#define PMD6                                     0x6
#define PMD6_address                             0xF83
#define PMD6_position                            0x6
#define PMD6_size                                0x1
#define PMD6_value_mask                          0x40
#define PMD6_clear_mask                          0xBF

#define SS2                                      0x7
#define SS2_address                              0xF83
#define SS2_position                             0x7
#define SS2_size                                 0x1
#define SS2_value_mask                           0x80
#define SS2_clear_mask                           0x7F

#define PORTD_RD7                                0x7
#define PORTD_RD7_address                        0xF83
#define PORTD_RD7_position                       0x7
#define PORTD_RD7_size                           0x1
#define PORTD_RD7_value_mask                     0x80
#define PORTD_RD7_clear_mask                     0x7F

#define PMD7                                     0x7
#define PMD7_address                             0xF83
#define PMD7_position                            0x7
#define PMD7_size                                0x1
#define PMD7_value_mask                          0x80
#define PMD7_clear_mask                          0x7F


/*-------------------------------------------------------------#
| PORTE                                                  0xF84 |
#--------------------------------------------------------------#
| PORTE_CCP2 | CCP6E | PMA11 | PMA12 | CCP9E | CS | PMWR | PD2 |
#--------------------------------------------------------------#
| 7          | 6     | 5     | 4     | 3     | 2  | 1    | 0   |
#-------------------------------------------------------------*/

#define PORTE                                    0x0
#define PORTE_address                            0xF84
#define PORTE_position                           0x0
#define PORTE_size                               0x8
#define PORTE_value_mask                         0xFF
#define PORTE_clear_mask                         0x0

#define PMRD                                     0x0
#define PMRD_address                             0xF84
#define PMRD_position                            0x0
#define PMRD_size                                0x1
#define PMRD_value_mask                          0x1
#define PMRD_clear_mask                          0xFE

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

#define PORTE_RE0                                0x0
#define PORTE_RE0_address                        0xF84
#define PORTE_RE0_position                       0x0
#define PORTE_RE0_size                           0x1
#define PORTE_RE0_value_mask                     0x1
#define PORTE_RE0_clear_mask                     0xFE

#define PMWR                                     0x1
#define PMWR_address                             0xF84
#define PMWR_position                            0x1
#define PMWR_size                                0x1
#define PMWR_value_mask                          0x2
#define PMWR_clear_mask                          0xFD

#define WRE                                      0x1
#define WRE_address                              0xF84
#define WRE_position                             0x1
#define WRE_size                                 0x1
#define WRE_value_mask                           0x2
#define WRE_clear_mask                           0xFD

#define PORTE_RE1                                0x1
#define PORTE_RE1_address                        0xF84
#define PORTE_RE1_position                       0x1
#define PORTE_RE1_size                           0x1
#define PORTE_RE1_value_mask                     0x2
#define PORTE_RE1_clear_mask                     0xFD

#define PC2                                      0x1
#define PC2_address                              0xF84
#define PC2_position                             0x1
#define PC2_size                                 0x1
#define PC2_value_mask                           0x2
#define PC2_clear_mask                           0xFD

#define PMBE                                     0x2
#define PMBE_address                             0xF84
#define PMBE_position                            0x2
#define PMBE_size                                0x1
#define PMBE_value_mask                          0x4
#define PMBE_clear_mask                          0xFB

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

#define CS                                       0x2
#define CS_address                               0xF84
#define CS_position                              0x2
#define CS_size                                  0x1
#define CS_value_mask                            0x4
#define CS_clear_mask                            0xFB

#define PORTE_RE2                                0x2
#define PORTE_RE2_address                        0xF84
#define PORTE_RE2_position                       0x2
#define PORTE_RE2_size                           0x1
#define PORTE_RE2_value_mask                     0x4
#define PORTE_RE2_clear_mask                     0xFB

#define CCP9E                                    0x3
#define CCP9E_address                            0xF84
#define CCP9E_position                           0x3
#define CCP9E_size                               0x1
#define CCP9E_value_mask                         0x8
#define CCP9E_clear_mask                         0xF7

#define PMA13                                    0x3
#define PMA13_address                            0xF84
#define PMA13_position                           0x3
#define PMA13_size                               0x1
#define PMA13_value_mask                         0x8
#define PMA13_clear_mask                         0xF7

#define REFO                                     0x3
#define REFO_address                             0xF84
#define REFO_position                            0x3
#define REFO_size                                0x1
#define REFO_value_mask                          0x8
#define REFO_clear_mask                          0xF7

#define PORTE_RE3                                0x3
#define PORTE_RE3_address                        0xF84
#define PORTE_RE3_position                       0x3
#define PORTE_RE3_size                           0x1
#define PORTE_RE3_value_mask                     0x8
#define PORTE_RE3_clear_mask                     0xF7

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

#define PMA12                                    0x4
#define PMA12_address                            0xF84
#define PMA12_position                           0x4
#define PMA12_size                               0x1
#define PMA12_value_mask                         0x10
#define PMA12_clear_mask                         0xEF

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

#define PMA11                                    0x5
#define PMA11_address                            0xF84
#define PMA11_position                           0x5
#define PMA11_size                               0x1
#define PMA11_value_mask                         0x20
#define PMA11_clear_mask                         0xDF

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

#define PMA10                                    0x6
#define PMA10_address                            0xF84
#define PMA10_position                           0x6
#define PMA10_size                               0x1
#define PMA10_value_mask                         0x40
#define PMA10_clear_mask                         0xBF

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

#define PORTE_RE7                                0x7
#define PORTE_RE7_address                        0xF84
#define PORTE_RE7_position                       0x7
#define PORTE_RE7_size                           0x1
#define PORTE_RE7_value_mask                     0x80
#define PORTE_RE7_clear_mask                     0x7F

#define PMA9                                     0x7
#define PMA9_address                             0xF84
#define PMA9_position                            0x7
#define PMA9_size                                0x1
#define PMA9_value_mask                          0x80
#define PMA9_clear_mask                          0x7F

#define PA2E                                     0x7
#define PA2E_address                             0xF84
#define PA2E_position                            0x7
#define PA2E_size                                0x1
#define PA2E_value_mask                          0x80
#define PA2E_clear_mask                          0x7F


/*------------------------------------------------------------------------#
| PORTF                                                             0xF85 |
#-------------------------------------------------------------------------#
| PORTF_RF7 | C1INA | C1INB | PORTF_RF4 | PORTF_RF3 | AN7 | PORTF_RF1 | - |
#-------------------------------------------------------------------------#
| 7         | 6     | 5     | 4         | 3         | 2   | 1         | 0 |
#------------------------------------------------------------------------*/

#define PORTF                                    0x0
#define PORTF_address                            0xF85
#define PORTF_position                           0x0
#define PORTF_size                               0x8
#define PORTF_value_mask                         0xFF
#define PORTF_clear_mask                         0x0

#define PORTF_RF1                                0x1
#define PORTF_RF1_address                        0xF85
#define PORTF_RF1_position                       0x1
#define PORTF_RF1_size                           0x1
#define PORTF_RF1_value_mask                     0x2
#define PORTF_RF1_clear_mask                     0xFD

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

#define C2OUT                                    0x1
#define C2OUT_address                            0xF85
#define C2OUT_position                           0x1
#define C2OUT_size                               0x1
#define C2OUT_value_mask                         0x2
#define C2OUT_clear_mask                         0xFD

#define AN7                                      0x2
#define AN7_address                              0xF85
#define AN7_position                             0x2
#define AN7_size                                 0x1
#define AN7_value_mask                           0x4
#define AN7_clear_mask                           0xFB

#define C1OUTF                                   0x2
#define C1OUTF_address                           0xF85
#define C1OUTF_position                          0x2
#define C1OUTF_size                              0x1
#define C1OUTF_value_mask                        0x4
#define C1OUTF_clear_mask                        0xFB

#define C1OUT                                    0x2
#define C1OUT_address                            0xF85
#define C1OUT_position                           0x2
#define C1OUT_size                               0x1
#define C1OUT_value_mask                         0x4
#define C1OUT_clear_mask                         0xFB

#define PORTF_RF2                                0x2
#define PORTF_RF2_address                        0xF85
#define PORTF_RF2_position                       0x2
#define PORTF_RF2_size                           0x1
#define PORTF_RF2_value_mask                     0x4
#define PORTF_RF2_clear_mask                     0xFB

#define PMA5                                     0x2
#define PMA5_address                             0xF85
#define PMA5_position                            0x2
#define PMA5_size                                0x1
#define PMA5_value_mask                          0x4
#define PMA5_clear_mask                          0xFB

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

#define C2INB                                    0x3
#define C2INB_address                            0xF85
#define C2INB_position                           0x3
#define C2INB_size                               0x1
#define C2INB_value_mask                         0x8
#define C2INB_clear_mask                         0xF7

#define PORTF_RF4                                0x4
#define PORTF_RF4_address                        0xF85
#define PORTF_RF4_position                       0x4
#define PORTF_RF4_size                           0x1
#define PORTF_RF4_value_mask                     0x10
#define PORTF_RF4_clear_mask                     0xEF

#define AN9                                      0x4
#define AN9_address                              0xF85
#define AN9_position                             0x4
#define AN9_size                                 0x1
#define AN9_value_mask                           0x10
#define AN9_clear_mask                           0xEF

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

#define PORTF_RF5                                0x5
#define PORTF_RF5_address                        0xF85
#define PORTF_RF5_position                       0x5
#define PORTF_RF5_size                           0x1
#define PORTF_RF5_value_mask                     0x20
#define PORTF_RF5_clear_mask                     0xDF

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

#define PORTF_RF6                                0x6
#define PORTF_RF6_address                        0xF85
#define PORTF_RF6_position                       0x6
#define PORTF_RF6_size                           0x1
#define PORTF_RF6_value_mask                     0x40
#define PORTF_RF6_clear_mask                     0xBF

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

#define SS                                       0x7
#define SS_address                               0xF85
#define SS_position                              0x7
#define SS_size                                  0x1
#define SS_value_mask                            0x80
#define SS_clear_mask                            0x7F


/*-----------------------------------------------------#
| PORTG                                          0xF86 |
#------------------------------------------------------#
| RDPU | REPU | - | PMCS2 | PMCS1 | PMA6 | PMA7 | CCP3 |
#------------------------------------------------------#
| 7    | 6    | 5 | 4     | 3     | 2    | 1    | 0    |
#-----------------------------------------------------*/

#define PORTG                                    0x0
#define PORTG_address                            0xF86
#define PORTG_position                           0x0
#define PORTG_size                               0x8
#define PORTG_value_mask                         0xFF
#define PORTG_clear_mask                         0x0

#define PMA8                                     0x0
#define PMA8_address                             0xF86
#define PMA8_position                            0x0
#define PMA8_size                                0x1
#define PMA8_value_mask                          0x1
#define PMA8_clear_mask                          0xFE

#define CCP3                                     0x0
#define CCP3_address                             0xF86
#define CCP3_position                            0x0
#define CCP3_size                                0x1
#define CCP3_value_mask                          0x1
#define CCP3_clear_mask                          0xFE

#define PORTG_RG0                                0x0
#define PORTG_RG0_address                        0xF86
#define PORTG_RG0_position                       0x0
#define PORTG_RG0_size                           0x1
#define PORTG_RG0_value_mask                     0x1
#define PORTG_RG0_clear_mask                     0xFE

#define PMA7                                     0x1
#define PMA7_address                             0xF86
#define PMA7_position                            0x1
#define PMA7_size                                0x1
#define PMA7_value_mask                          0x2
#define PMA7_clear_mask                          0xFD

#define C3OUTG                                   0x1
#define C3OUTG_address                           0xF86
#define C3OUTG_position                          0x1
#define C3OUTG_size                              0x1
#define C3OUTG_value_mask                        0x2
#define C3OUTG_clear_mask                        0xFD

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

#define PMA6                                     0x2
#define PMA6_address                             0xF86
#define PMA6_position                            0x2
#define PMA6_size                                0x1
#define PMA6_value_mask                          0x4
#define PMA6_clear_mask                          0xFB

#define RX2                                      0x2
#define RX2_address                              0xF86
#define RX2_position                             0x2
#define RX2_size                                 0x1
#define RX2_value_mask                           0x4
#define RX2_clear_mask                           0xFB

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

#define PMCS1                                    0x3
#define PMCS1_address                            0xF86
#define PMCS1_position                           0x3
#define PMCS1_size                               0x1
#define PMCS1_value_mask                         0x8
#define PMCS1_clear_mask                         0xF7

#define CCP4                                     0x3
#define CCP4_address                             0xF86
#define CCP4_position                            0x3
#define CCP4_size                                0x1
#define CCP4_value_mask                          0x8
#define CCP4_clear_mask                          0xF7

#define PORTG_RG3                                0x3
#define PORTG_RG3_address                        0xF86
#define PORTG_RG3_position                       0x3
#define PORTG_RG3_size                           0x1
#define PORTG_RG3_value_mask                     0x8
#define PORTG_RG3_clear_mask                     0xF7

#define PMCS2                                    0x4
#define PMCS2_address                            0xF86
#define PMCS2_position                           0x4
#define PMCS2_size                               0x1
#define PMCS2_value_mask                         0x10
#define PMCS2_clear_mask                         0xEF

#define CCP5                                     0x4
#define CCP5_address                             0xF86
#define CCP5_position                            0x4
#define CCP5_size                                0x1
#define CCP5_value_mask                          0x10
#define CCP5_clear_mask                          0xEF

#define PORTG_RG4                                0x4
#define PORTG_RG4_address                        0xF86
#define PORTG_RG4_position                       0x4
#define PORTG_RG4_size                           0x1
#define PORTG_RG4_value_mask                     0x10
#define PORTG_RG4_clear_mask                     0xEF

#define REPU                                     0x6
#define REPU_address                             0xF86
#define REPU_position                            0x6
#define REPU_size                                0x1
#define REPU_value_mask                          0x40
#define REPU_clear_mask                          0xBF

#define RG6                                      0x6
#define RG6_address                              0xF86
#define RG6_position                             0x6
#define RG6_size                                 0x1
#define RG6_value_mask                           0x40
#define RG6_clear_mask                           0xBF

#define RDPU                                     0x7
#define RDPU_address                             0xF86
#define RDPU_position                            0x7
#define RDPU_size                                0x1
#define RDPU_value_mask                          0x80
#define RDPU_clear_mask                          0x7F

#define RG7                                      0x7
#define RG7_address                              0xF86
#define RG7_position                             0x7
#define RG7_size                                 0x1
#define RG7_value_mask                           0x80
#define RG7_clear_mask                           0x7F


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


/*----------------------------------------------------------------------------------------------#
| TRISE                                                                                   0xF96 |
#-----------------------------------------------------------------------------------------------#
| TRISE_RE7 | TRISE_RE6 | TRISE_RE5 | TRISE_RE4 | TRISE_RE3 | TRISE_RE2 | TRISE_RE1 | TRISE_RE0 |
#-----------------------------------------------------------------------------------------------#
| 7         | 6         | 5         | 4         | 3         | 2         | 1         | 0         |
#----------------------------------------------------------------------------------------------*/

#define TRISE                                    0x0
#define TRISE_address                            0xF96
#define TRISE_position                           0x0
#define TRISE_size                               0x8
#define TRISE_value_mask                         0xFF
#define TRISE_clear_mask                         0x0

#define TRISE_RE0                                0x0
#define TRISE_RE0_address                        0xF96
#define TRISE_RE0_position                       0x0
#define TRISE_RE0_size                           0x1
#define TRISE_RE0_value_mask                     0x1
#define TRISE_RE0_clear_mask                     0xFE

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

#define TRISE_RE1                                0x1
#define TRISE_RE1_address                        0xF96
#define TRISE_RE1_position                       0x1
#define TRISE_RE1_size                           0x1
#define TRISE_RE1_value_mask                     0x2
#define TRISE_RE1_clear_mask                     0xFD

#define TRISE2                                   0x2
#define TRISE2_address                           0xF96
#define TRISE2_position                          0x2
#define TRISE2_size                              0x1
#define TRISE2_value_mask                        0x4
#define TRISE2_clear_mask                        0xFB

#define TRISE_RE2                                0x2
#define TRISE_RE2_address                        0xF96
#define TRISE_RE2_position                       0x2
#define TRISE_RE2_size                           0x1
#define TRISE_RE2_value_mask                     0x4
#define TRISE_RE2_clear_mask                     0xFB

#define TRISE_RE3                                0x3
#define TRISE_RE3_address                        0xF96
#define TRISE_RE3_position                       0x3
#define TRISE_RE3_size                           0x1
#define TRISE_RE3_value_mask                     0x8
#define TRISE_RE3_clear_mask                     0xF7

#define TRISE3                                   0x3
#define TRISE3_address                           0xF96
#define TRISE3_position                          0x3
#define TRISE3_size                              0x1
#define TRISE3_value_mask                        0x8
#define TRISE3_clear_mask                        0xF7

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


/*--------------------------------------------------------------------------------------#
| TRISF                                                                           0xF97 |
#---------------------------------------------------------------------------------------#
| TRISF_RF7 | TRISF_RF6 | TRISF_RF5 | TRISF_RF4 | TRISF_RF3 | TRISF_RF2 | TRISF_RF1 | - |
#---------------------------------------------------------------------------------------#
| 7         | 6         | 5         | 4         | 3         | 2         | 1         | 0 |
#--------------------------------------------------------------------------------------*/

#define TRISF                                    0x0
#define TRISF_address                            0xF97
#define TRISF_position                           0x0
#define TRISF_size                               0x8
#define TRISF_value_mask                         0xFF
#define TRISF_clear_mask                         0x0

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

#define TRISF2                                   0x2
#define TRISF2_address                           0xF97
#define TRISF2_position                          0x2
#define TRISF2_size                              0x1
#define TRISF2_value_mask                        0x4
#define TRISF2_clear_mask                        0xFB

#define TRISF_RF2                                0x2
#define TRISF_RF2_address                        0xF97
#define TRISF_RF2_position                       0x2
#define TRISF_RF2_size                           0x1
#define TRISF_RF2_value_mask                     0x4
#define TRISF_RF2_clear_mask                     0xFB

#define TRISF_RF3                                0x3
#define TRISF_RF3_address                        0xF97
#define TRISF_RF3_position                       0x3
#define TRISF_RF3_size                           0x1
#define TRISF_RF3_value_mask                     0x8
#define TRISF_RF3_clear_mask                     0xF7

#define TRISF3                                   0x3
#define TRISF3_address                           0xF97
#define TRISF3_position                          0x3
#define TRISF3_size                              0x1
#define TRISF3_value_mask                        0x8
#define TRISF3_clear_mask                        0xF7

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


/*--------------------------------------------------------------------------------#
| RCSTA2                                                                    0xF9C |
#---------------------------------------------------------------------------------#
| RCSTA2_SPEN | RC92 | SREN2 | RCSTA2_CREN | ADDEN2 | FERR2 | RCSTA2_OERR | RCD82 |
#---------------------------------------------------------------------------------#
| 7           | 6    | 5     | 4           | 3      | 2     | 1           | 0     |
#--------------------------------------------------------------------------------*/

#define RCSTA2                                   0x0
#define RCSTA2_address                           0xF9C
#define RCSTA2_position                          0x0
#define RCSTA2_size                              0x8
#define RCSTA2_value_mask                        0xFF
#define RCSTA2_clear_mask                        0x0

#define RCD82                                    0x0
#define RCD82_address                            0xF9C
#define RCD82_position                           0x0
#define RCD82_size                               0x1
#define RCD82_value_mask                         0x1
#define RCD82_clear_mask                         0xFE

#define RX9D2                                    0x0
#define RX9D2_address                            0xF9C
#define RX9D2_position                           0x0
#define RX9D2_size                               0x1
#define RX9D2_value_mask                         0x1
#define RX9D2_clear_mask                         0xFE

#define RCSTA2_RCD8                              0x0
#define RCSTA2_RCD8_address                      0xF9C
#define RCSTA2_RCD8_position                     0x0
#define RCSTA2_RCD8_size                         0x1
#define RCSTA2_RCD8_value_mask                   0x1
#define RCSTA2_RCD8_clear_mask                   0xFE

#define RCSTA2_RX9D                              0x0
#define RCSTA2_RX9D_address                      0xF9C
#define RCSTA2_RX9D_position                     0x0
#define RCSTA2_RX9D_size                         0x1
#define RCSTA2_RX9D_value_mask                   0x1
#define RCSTA2_RX9D_clear_mask                   0xFE

#define RCSTA2_OERR                              0x1
#define RCSTA2_OERR_address                      0xF9C
#define RCSTA2_OERR_position                     0x1
#define RCSTA2_OERR_size                         0x1
#define RCSTA2_OERR_value_mask                   0x2
#define RCSTA2_OERR_clear_mask                   0xFD

#define OERR2                                    0x1
#define OERR2_address                            0xF9C
#define OERR2_position                           0x1
#define OERR2_size                               0x1
#define OERR2_value_mask                         0x2
#define OERR2_clear_mask                         0xFD

#define FERR2                                    0x2
#define FERR2_address                            0xF9C
#define FERR2_position                           0x2
#define FERR2_size                               0x1
#define FERR2_value_mask                         0x4
#define FERR2_clear_mask                         0xFB

#define RCSTA2_FERR                              0x2
#define RCSTA2_FERR_address                      0xF9C
#define RCSTA2_FERR_position                     0x2
#define RCSTA2_FERR_size                         0x1
#define RCSTA2_FERR_value_mask                   0x4
#define RCSTA2_FERR_clear_mask                   0xFB

#define ADDEN2                                   0x3
#define ADDEN2_address                           0xF9C
#define ADDEN2_position                          0x3
#define ADDEN2_size                              0x1
#define ADDEN2_value_mask                        0x8
#define ADDEN2_clear_mask                        0xF7

#define RCSTA2_ADDEN                             0x3
#define RCSTA2_ADDEN_address                     0xF9C
#define RCSTA2_ADDEN_position                    0x3
#define RCSTA2_ADDEN_size                        0x1
#define RCSTA2_ADDEN_value_mask                  0x8
#define RCSTA2_ADDEN_clear_mask                  0xF7

#define RCSTA2_CREN                              0x4
#define RCSTA2_CREN_address                      0xF9C
#define RCSTA2_CREN_position                     0x4
#define RCSTA2_CREN_size                         0x1
#define RCSTA2_CREN_value_mask                   0x10
#define RCSTA2_CREN_clear_mask                   0xEF

#define CREN2                                    0x4
#define CREN2_address                            0xF9C
#define CREN2_position                           0x4
#define CREN2_size                               0x1
#define CREN2_value_mask                         0x10
#define CREN2_clear_mask                         0xEF

#define SREN2                                    0x5
#define SREN2_address                            0xF9C
#define SREN2_position                           0x5
#define SREN2_size                               0x1
#define SREN2_value_mask                         0x20
#define SREN2_clear_mask                         0xDF

#define RCSTA2_SREN                              0x5
#define RCSTA2_SREN_address                      0xF9C
#define RCSTA2_SREN_position                     0x5
#define RCSTA2_SREN_size                         0x1
#define RCSTA2_SREN_value_mask                   0x20
#define RCSTA2_SREN_clear_mask                   0xDF

#define RC92                                     0x6
#define RC92_address                             0xF9C
#define RC92_position                            0x6
#define RC92_size                                0x1
#define RC92_value_mask                          0x40
#define RC92_clear_mask                          0xBF

#define RCSTA2_nRC8                              0x6
#define RCSTA2_nRC8_address                      0xF9C
#define RCSTA2_nRC8_position                     0x6
#define RCSTA2_nRC8_size                         0x1
#define RCSTA2_nRC8_value_mask                   0x40
#define RCSTA2_nRC8_clear_mask                   0xBF

#define RC8_92                                   0x6
#define RC8_92_address                           0xF9C
#define RC8_92_position                          0x6
#define RC8_92_size                              0x1
#define RC8_92_value_mask                        0x40
#define RC8_92_clear_mask                        0xBF

#define RCSTA2_RX9                               0x6
#define RCSTA2_RX9_address                       0xF9C
#define RCSTA2_RX9_position                      0x6
#define RCSTA2_RX9_size                          0x1
#define RCSTA2_RX9_value_mask                    0x40
#define RCSTA2_RX9_clear_mask                    0xBF

#define RCSTA2_NOT_RC8                           0x6
#define RCSTA2_NOT_RC8_address                   0xF9C
#define RCSTA2_NOT_RC8_position                  0x6
#define RCSTA2_NOT_RC8_size                      0x1
#define RCSTA2_NOT_RC8_value_mask                0x40
#define RCSTA2_NOT_RC8_clear_mask                0xBF

#define RCSTA2_RC9                               0x6
#define RCSTA2_RC9_address                       0xF9C
#define RCSTA2_RC9_position                      0x6
#define RCSTA2_RC9_size                          0x1
#define RCSTA2_RC9_value_mask                    0x40
#define RCSTA2_RC9_clear_mask                    0xBF

#define RCSTA2_RC8_9                             0x6
#define RCSTA2_RC8_9_address                     0xF9C
#define RCSTA2_RC8_9_position                    0x6
#define RCSTA2_RC8_9_size                        0x1
#define RCSTA2_RC8_9_value_mask                  0x40
#define RCSTA2_RC8_9_clear_mask                  0xBF

#define RX92                                     0x6
#define RX92_address                             0xF9C
#define RX92_position                            0x6
#define RX92_size                                0x1
#define RX92_value_mask                          0x40
#define RX92_clear_mask                          0xBF

#define RCSTA2_SPEN                              0x7
#define RCSTA2_SPEN_address                      0xF9C
#define RCSTA2_SPEN_position                     0x7
#define RCSTA2_SPEN_size                         0x1
#define RCSTA2_SPEN_value_mask                   0x80
#define RCSTA2_SPEN_clear_mask                   0x7F

#define SPEN2                                    0x7
#define SPEN2_address                            0xF9C
#define SPEN2_position                           0x7
#define SPEN2_size                               0x1
#define SPEN2_value_mask                         0x80
#define SPEN2_clear_mask                         0x7F


/*----------------------------------------------------------------#
| PIE1                                                      0xF9D |
#-----------------------------------------------------------------#
| PSPIE | ADIE | RC1IE | TXIE | SSP1IE | CCP1IE | TMR2IE | TMR1IE |
#-----------------------------------------------------------------#
| 7     | 6    | 5     | 4    | 3      | 2      | 1      | 0      |
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

#define RC1IE                                    0x5
#define RC1IE_address                            0xF9D
#define RC1IE_position                           0x5
#define RC1IE_size                               0x1
#define RC1IE_value_mask                         0x20
#define RC1IE_clear_mask                         0xDF

#define RCIE                                     0x5
#define RCIE_address                             0xF9D
#define RCIE_position                            0x5
#define RCIE_size                                0x1
#define RCIE_value_mask                          0x20
#define RCIE_clear_mask                          0xDF

#define ADIE                                     0x6
#define ADIE_address                             0xF9D
#define ADIE_position                            0x6
#define ADIE_size                                0x1
#define ADIE_value_mask                          0x40
#define ADIE_clear_mask                          0xBF

#define PSPIE                                    0x7
#define PSPIE_address                            0xF9D
#define PSPIE_position                           0x7
#define PSPIE_size                               0x1
#define PSPIE_value_mask                         0x80
#define PSPIE_clear_mask                         0x7F

#define PMPIE                                    0x7
#define PMPIE_address                            0xF9D
#define PMPIE_position                           0x7
#define PMPIE_size                               0x1
#define PMPIE_value_mask                         0x80
#define PMPIE_clear_mask                         0x7F


/*--------------------------------------------------------------#
| PIR1                                                    0xF9E |
#---------------------------------------------------------------#
| PSPIF | ADIF | RCIF | TXIF | SSPIF | CCP1IF | TMR2IF | TMR1IF |
#---------------------------------------------------------------#
| 7     | 6    | 5    | 4    | 3     | 2      | 1      | 0      |
#--------------------------------------------------------------*/

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

#define PSPIF                                    0x7
#define PSPIF_address                            0xF9E
#define PSPIF_position                           0x7
#define PSPIF_size                               0x1
#define PSPIF_value_mask                         0x80
#define PSPIF_clear_mask                         0x7F

#define PMPIF                                    0x7
#define PMPIF_address                            0xF9E
#define PMPIF_position                           0x7
#define PMPIF_size                               0x1
#define PMPIF_value_mask                         0x80
#define PMPIF_clear_mask                         0x7F


/*-----------------------------------------------------------------#
| IPR1                                                       0xF9F |
#------------------------------------------------------------------#
| PMPIP | ADIP | RC1IP | TX1IP | SSP1IP | CCP1IP | TMR2IP | TMR1IP |
#------------------------------------------------------------------#
| 7     | 6    | 5     | 4     | 3      | 2      | 1      | 0      |
#-----------------------------------------------------------------*/

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

#define PMPIP                                    0x7
#define PMPIP_address                            0xF9F
#define PMPIP_position                           0x7
#define PMPIP_size                               0x1
#define PMPIP_value_mask                         0x80
#define PMPIP_clear_mask                         0x7F

#define PSPIP                                    0x7
#define PSPIP_address                            0xF9F
#define PSPIP_position                           0x7
#define PSPIP_size                               0x1
#define PSPIP_value_mask                         0x80
#define PSPIP_clear_mask                         0x7F


/*-------------------------------------------------------------#
| PIE2                                                   0xFA0 |
#--------------------------------------------------------------#
| OSCFIE | CMIE | CM1IE | - | BCL1IE | LVDIE | TMR3IE | CCP2IE |
#--------------------------------------------------------------#
| 7      | 6    | 5     | 4 | 3      | 2     | 1      | 0      |
#-------------------------------------------------------------*/

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

#define CM1IE                                    0x5
#define CM1IE_address                            0xFA0
#define CM1IE_position                           0x5
#define CM1IE_size                               0x1
#define CM1IE_value_mask                         0x20
#define CM1IE_clear_mask                         0xDF

#define CMIE                                     0x6
#define CMIE_address                             0xFA0
#define CMIE_position                            0x6
#define CMIE_size                                0x1
#define CMIE_value_mask                          0x40
#define CMIE_clear_mask                          0xBF

#define CM2IE                                    0x6
#define CM2IE_address                            0xFA0
#define CM2IE_position                           0x6
#define CM2IE_size                               0x1
#define CM2IE_value_mask                         0x40
#define CM2IE_clear_mask                         0xBF

#define OSCFIE                                   0x7
#define OSCFIE_address                           0xFA0
#define OSCFIE_position                          0x7
#define OSCFIE_size                              0x1
#define OSCFIE_value_mask                        0x80
#define OSCFIE_clear_mask                        0x7F


/*-------------------------------------------------------------#
| PIR2                                                   0xFA1 |
#--------------------------------------------------------------#
| OSCFIF | CMIF | CM1IF | - | BCL1IF | LVDIF | TMR3IF | CCP2IF |
#--------------------------------------------------------------#
| 7      | 6    | 5     | 4 | 3      | 2     | 1      | 0      |
#-------------------------------------------------------------*/

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

#define LVDIF                                    0x2
#define LVDIF_address                            0xFA1
#define LVDIF_position                           0x2
#define LVDIF_size                               0x1
#define LVDIF_value_mask                         0x4
#define LVDIF_clear_mask                         0xFB

#define BCL1IF                                   0x3
#define BCL1IF_address                           0xFA1
#define BCL1IF_position                          0x3
#define BCL1IF_size                              0x1
#define BCL1IF_value_mask                        0x8
#define BCL1IF_clear_mask                        0xF7

#define BCLIF                                    0x3
#define BCLIF_address                            0xFA1
#define BCLIF_position                           0x3
#define BCLIF_size                               0x1
#define BCLIF_value_mask                         0x8
#define BCLIF_clear_mask                         0xF7

#define CM1IF                                    0x5
#define CM1IF_address                            0xFA1
#define CM1IF_position                           0x5
#define CM1IF_size                               0x1
#define CM1IF_value_mask                         0x20
#define CM1IF_clear_mask                         0xDF

#define CMIF                                     0x6
#define CMIF_address                             0xFA1
#define CMIF_position                            0x6
#define CMIF_size                                0x1
#define CMIF_value_mask                          0x40
#define CMIF_clear_mask                          0xBF

#define CM2IF                                    0x6
#define CM2IF_address                            0xFA1
#define CM2IF_position                           0x6
#define CM2IF_size                               0x1
#define CM2IF_value_mask                         0x40
#define CM2IF_clear_mask                         0xBF

#define OSCFIF                                   0x7
#define OSCFIF_address                           0xFA1
#define OSCFIF_position                          0x7
#define OSCFIF_size                              0x1
#define OSCFIF_value_mask                        0x80
#define OSCFIF_clear_mask                        0x7F


/*--------------------------------------------------------------#
| IPR2                                                    0xFA2 |
#---------------------------------------------------------------#
| OSCFIP | CM2IP | CM1IP | - | BCL1IP | LVDIP | TMR3IP | CCP2IP |
#---------------------------------------------------------------#
| 7      | 6     | 5     | 4 | 3      | 2     | 1      | 0      |
#--------------------------------------------------------------*/

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

#define CM1IP                                    0x5
#define CM1IP_address                            0xFA2
#define CM1IP_position                           0x5
#define CM1IP_size                               0x1
#define CM1IP_value_mask                         0x20
#define CM1IP_clear_mask                         0xDF

#define CM2IP                                    0x6
#define CM2IP_address                            0xFA2
#define CM2IP_position                           0x6
#define CM2IP_size                               0x1
#define CM2IP_value_mask                         0x40
#define CM2IP_clear_mask                         0xBF

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


/*---------------------------------------------------------------------#
| PIE3                                                           0xFA3 |
#----------------------------------------------------------------------#
| SSP2IE | BCL2IE | RC2IE | TXB2IE | TMR4IE | TXB0IE | RXBNIE | CCP3IE |
#----------------------------------------------------------------------#
| 7      | 6      | 5     | 4      | 3      | 2      | 1      | 0      |
#---------------------------------------------------------------------*/

#define PIE3                                     0x0
#define PIE3_address                             0xFA3
#define PIE3_position                            0x0
#define PIE3_size                                0x8
#define PIE3_value_mask                          0xFF
#define PIE3_clear_mask                          0x0

#define CCP3IE                                   0x0
#define CCP3IE_address                           0xFA3
#define CCP3IE_position                          0x0
#define CCP3IE_size                              0x1
#define CCP3IE_value_mask                        0x1
#define CCP3IE_clear_mask                        0xFE

#define RXB0IE                                   0x0
#define RXB0IE_address                           0xFA3
#define RXB0IE_position                          0x0
#define RXB0IE_size                              0x1
#define RXB0IE_value_mask                        0x1
#define RXB0IE_clear_mask                        0xFE

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

#define CCP4IE                                   0x1
#define CCP4IE_address                           0xFA3
#define CCP4IE_position                          0x1
#define CCP4IE_size                              0x1
#define CCP4IE_value_mask                        0x2
#define CCP4IE_clear_mask                        0xFD

#define TXB0IE                                   0x2
#define TXB0IE_address                           0xFA3
#define TXB0IE_position                          0x2
#define TXB0IE_size                              0x1
#define TXB0IE_value_mask                        0x4
#define TXB0IE_clear_mask                        0xFB

#define CCP5IE                                   0x2
#define CCP5IE_address                           0xFA3
#define CCP5IE_position                          0x2
#define CCP5IE_size                              0x1
#define CCP5IE_value_mask                        0x4
#define CCP5IE_clear_mask                        0xFB

#define TXB1IE                                   0x3
#define TXB1IE_address                           0xFA3
#define TXB1IE_position                          0x3
#define TXB1IE_size                              0x1
#define TXB1IE_value_mask                        0x8
#define TXB1IE_clear_mask                        0xF7

#define TMR4IE                                   0x3
#define TMR4IE_address                           0xFA3
#define TMR4IE_position                          0x3
#define TMR4IE_size                              0x1
#define TMR4IE_value_mask                        0x8
#define TMR4IE_clear_mask                        0xF7

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

#define RC2IE                                    0x5
#define RC2IE_address                            0xFA3
#define RC2IE_position                           0x5
#define RC2IE_size                               0x1
#define RC2IE_value_mask                         0x20
#define RC2IE_clear_mask                         0xDF

#define BCL2IE                                   0x6
#define BCL2IE_address                           0xFA3
#define BCL2IE_position                          0x6
#define BCL2IE_size                              0x1
#define BCL2IE_value_mask                        0x40
#define BCL2IE_clear_mask                        0xBF

#define SSP2IE                                   0x7
#define SSP2IE_address                           0xFA3
#define SSP2IE_position                          0x7
#define SSP2IE_size                              0x1
#define SSP2IE_value_mask                        0x80
#define SSP2IE_clear_mask                        0x7F


/*---------------------------------------------------------------------#
| PIR3                                                           0xFA4 |
#----------------------------------------------------------------------#
| SSP2IF | BCL2IF | RC2IF | TXBNIF | TMR4IF | CCP5IF | RXBNIF | CCP3IF |
#----------------------------------------------------------------------#
| 7      | 6      | 5     | 4      | 3      | 2      | 1      | 0      |
#---------------------------------------------------------------------*/

#define PIR3                                     0x0
#define PIR3_address                             0xFA4
#define PIR3_position                            0x0
#define PIR3_size                                0x8
#define PIR3_value_mask                          0xFF
#define PIR3_clear_mask                          0x0

#define CCP3IF                                   0x0
#define CCP3IF_address                           0xFA4
#define CCP3IF_position                          0x0
#define CCP3IF_size                              0x1
#define CCP3IF_value_mask                        0x1
#define CCP3IF_clear_mask                        0xFE

#define RXBNIF                                   0x1
#define RXBNIF_address                           0xFA4
#define RXBNIF_position                          0x1
#define RXBNIF_size                              0x1
#define RXBNIF_value_mask                        0x2
#define RXBNIF_clear_mask                        0xFD

#define CCP4IF                                   0x1
#define CCP4IF_address                           0xFA4
#define CCP4IF_position                          0x1
#define CCP4IF_size                              0x1
#define CCP4IF_value_mask                        0x2
#define CCP4IF_clear_mask                        0xFD

#define CCP5IF                                   0x2
#define CCP5IF_address                           0xFA4
#define CCP5IF_position                          0x2
#define CCP5IF_size                              0x1
#define CCP5IF_value_mask                        0x4
#define CCP5IF_clear_mask                        0xFB

#define TMR4IF                                   0x3
#define TMR4IF_address                           0xFA4
#define TMR4IF_position                          0x3
#define TMR4IF_size                              0x1
#define TMR4IF_value_mask                        0x8
#define TMR4IF_clear_mask                        0xF7

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

#define BCL2IF                                   0x6
#define BCL2IF_address                           0xFA4
#define BCL2IF_position                          0x6
#define BCL2IF_size                              0x1
#define BCL2IF_value_mask                        0x40
#define BCL2IF_clear_mask                        0xBF

#define SSP2IF                                   0x7
#define SSP2IF_address                           0xFA4
#define SSP2IF_position                          0x7
#define SSP2IF_size                              0x1
#define SSP2IF_value_mask                        0x80
#define SSP2IF_clear_mask                        0x7F


/*--------------------------------------------------------------------#
| IPR3                                                          0xFA5 |
#---------------------------------------------------------------------#
| SSP2IP | BCL2IP | RC2IP | TX2IP | TMR4IP | CCP5IP | CCP4IP | CCP3IP |
#---------------------------------------------------------------------#
| 7      | 6      | 5     | 4     | 3      | 2      | 1      | 0      |
#--------------------------------------------------------------------*/

#define IPR3                                     0x0
#define IPR3_address                             0xFA5
#define IPR3_position                            0x0
#define IPR3_size                                0x8
#define IPR3_value_mask                          0xFF
#define IPR3_clear_mask                          0x0

#define CCP3IP                                   0x0
#define CCP3IP_address                           0xFA5
#define CCP3IP_position                          0x0
#define CCP3IP_size                              0x1
#define CCP3IP_value_mask                        0x1
#define CCP3IP_clear_mask                        0xFE

#define CCP4IP                                   0x1
#define CCP4IP_address                           0xFA5
#define CCP4IP_position                          0x1
#define CCP4IP_size                              0x1
#define CCP4IP_value_mask                        0x2
#define CCP4IP_clear_mask                        0xFD

#define RXBNIP                                   0x1
#define RXBNIP_address                           0xFA5
#define RXBNIP_position                          0x1
#define RXBNIP_size                              0x1
#define RXBNIP_value_mask                        0x2
#define RXBNIP_clear_mask                        0xFD

#define CCP5IP                                   0x2
#define CCP5IP_address                           0xFA5
#define CCP5IP_position                          0x2
#define CCP5IP_size                              0x1
#define CCP5IP_value_mask                        0x4
#define CCP5IP_clear_mask                        0xFB

#define TMR4IP                                   0x3
#define TMR4IP_address                           0xFA5
#define TMR4IP_position                          0x3
#define TMR4IP_size                              0x1
#define TMR4IP_value_mask                        0x8
#define TMR4IP_clear_mask                        0xF7

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

#define BCL2IP                                   0x6
#define BCL2IP_address                           0xFA5
#define BCL2IP_position                          0x6
#define BCL2IP_size                              0x1
#define BCL2IP_value_mask                        0x40
#define BCL2IP_clear_mask                        0xBF

#define SSP2IP                                   0x7
#define SSP2IP_address                           0xFA5
#define SSP2IP_position                          0x7
#define SSP2IP_size                              0x1
#define SSP2IP_value_mask                        0x80
#define SSP2IP_clear_mask                        0x7F


/*---------------------------------------------#
| EECON1                                 0xFA6 |
#----------------------------------------------#
| - | - | WPROG | FREE | WRERR | WREN | WR | - |
#----------------------------------------------#
| 7 | 6 | 5     | 4    | 3     | 2    | 1  | 0 |
#---------------------------------------------*/

#define EECON1                                   0x0
#define EECON1_address                           0xFA6
#define EECON1_position                          0x0
#define EECON1_size                              0x8
#define EECON1_value_mask                        0xFF
#define EECON1_clear_mask                        0x0

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

#define WPROG                                    0x5
#define WPROG_address                            0xFA6
#define WPROG_position                           0x5
#define WPROG_size                               0x1
#define WPROG_value_mask                         0x20
#define WPROG_clear_mask                         0xDF


/*----------------------------------------------------------------------------------#
| TXSTA2                                                                      0xFA8 |
#-----------------------------------------------------------------------------------#
| TXSTA2_CSRC | TX8_92 | TXEN2 | TXSTA2_SYNC | SENDB2 | BRGH2 | TRMT2 | TXSTA2_TXD8 |
#-----------------------------------------------------------------------------------#
| 7           | 6      | 5     | 4           | 3      | 2     | 1     | 0           |
#----------------------------------------------------------------------------------*/

#define TXSTA2                                   0x0
#define TXSTA2_address                           0xFA8
#define TXSTA2_position                          0x0
#define TXSTA2_size                              0x8
#define TXSTA2_value_mask                        0xFF
#define TXSTA2_clear_mask                        0x0

#define TXSTA2_TXD8                              0x0
#define TXSTA2_TXD8_address                      0xFA8
#define TXSTA2_TXD8_position                     0x0
#define TXSTA2_TXD8_size                         0x1
#define TXSTA2_TXD8_value_mask                   0x1
#define TXSTA2_TXD8_clear_mask                   0xFE

#define TX9D2                                    0x0
#define TX9D2_address                            0xFA8
#define TX9D2_position                           0x0
#define TX9D2_size                               0x1
#define TX9D2_value_mask                         0x1
#define TX9D2_clear_mask                         0xFE

#define TXSTA2_TX9D                              0x0
#define TXSTA2_TX9D_address                      0xFA8
#define TXSTA2_TX9D_position                     0x0
#define TXSTA2_TX9D_size                         0x1
#define TXSTA2_TX9D_value_mask                   0x1
#define TXSTA2_TX9D_clear_mask                   0xFE

#define TXD82                                    0x0
#define TXD82_address                            0xFA8
#define TXD82_position                           0x0
#define TXD82_size                               0x1
#define TXD82_value_mask                         0x1
#define TXD82_clear_mask                         0xFE

#define TRMT2                                    0x1
#define TRMT2_address                            0xFA8
#define TRMT2_position                           0x1
#define TRMT2_size                               0x1
#define TRMT2_value_mask                         0x2
#define TRMT2_clear_mask                         0xFD

#define TXSTA2_TRMT                              0x1
#define TXSTA2_TRMT_address                      0xFA8
#define TXSTA2_TRMT_position                     0x1
#define TXSTA2_TRMT_size                         0x1
#define TXSTA2_TRMT_value_mask                   0x2
#define TXSTA2_TRMT_clear_mask                   0xFD

#define BRGH2                                    0x2
#define BRGH2_address                            0xFA8
#define BRGH2_position                           0x2
#define BRGH2_size                               0x1
#define BRGH2_value_mask                         0x4
#define BRGH2_clear_mask                         0xFB

#define TXSTA2_BRGH                              0x2
#define TXSTA2_BRGH_address                      0xFA8
#define TXSTA2_BRGH_position                     0x2
#define TXSTA2_BRGH_size                         0x1
#define TXSTA2_BRGH_value_mask                   0x4
#define TXSTA2_BRGH_clear_mask                   0xFB

#define SENDB2                                   0x3
#define SENDB2_address                           0xFA8
#define SENDB2_position                          0x3
#define SENDB2_size                              0x1
#define SENDB2_value_mask                        0x8
#define SENDB2_clear_mask                        0xF7

#define TXSTA2_SENDB                             0x3
#define TXSTA2_SENDB_address                     0xFA8
#define TXSTA2_SENDB_position                    0x3
#define TXSTA2_SENDB_size                        0x1
#define TXSTA2_SENDB_value_mask                  0x8
#define TXSTA2_SENDB_clear_mask                  0xF7

#define TXSTA2_SYNC                              0x4
#define TXSTA2_SYNC_address                      0xFA8
#define TXSTA2_SYNC_position                     0x4
#define TXSTA2_SYNC_size                         0x1
#define TXSTA2_SYNC_value_mask                   0x10
#define TXSTA2_SYNC_clear_mask                   0xEF

#define SYNC2                                    0x4
#define SYNC2_address                            0xFA8
#define SYNC2_position                           0x4
#define SYNC2_size                               0x1
#define SYNC2_value_mask                         0x10
#define SYNC2_clear_mask                         0xEF

#define TXEN2                                    0x5
#define TXEN2_address                            0xFA8
#define TXEN2_position                           0x5
#define TXEN2_size                               0x1
#define TXEN2_value_mask                         0x20
#define TXEN2_clear_mask                         0xDF

#define TXSTA2_TXEN                              0x5
#define TXSTA2_TXEN_address                      0xFA8
#define TXSTA2_TXEN_position                     0x5
#define TXSTA2_TXEN_size                         0x1
#define TXSTA2_TXEN_value_mask                   0x20
#define TXSTA2_TXEN_clear_mask                   0xDF

#define TX8_92                                   0x6
#define TX8_92_address                           0xFA8
#define TX8_92_position                          0x6
#define TX8_92_size                              0x1
#define TX8_92_value_mask                        0x40
#define TX8_92_clear_mask                        0xBF

#define TX92                                     0x6
#define TX92_address                             0xFA8
#define TX92_position                            0x6
#define TX92_size                                0x1
#define TX92_value_mask                          0x40
#define TX92_clear_mask                          0xBF

#define TXSTA2_TX9                               0x6
#define TXSTA2_TX9_address                       0xFA8
#define TXSTA2_TX9_position                      0x6
#define TXSTA2_TX9_size                          0x1
#define TXSTA2_TX9_value_mask                    0x40
#define TXSTA2_TX9_clear_mask                    0xBF

#define TXSTA2_nTX8                              0x6
#define TXSTA2_nTX8_address                      0xFA8
#define TXSTA2_nTX8_position                     0x6
#define TXSTA2_nTX8_size                         0x1
#define TXSTA2_nTX8_value_mask                   0x40
#define TXSTA2_nTX8_clear_mask                   0xBF

#define TXSTA2_NOT_TX8                           0x6
#define TXSTA2_NOT_TX8_address                   0xFA8
#define TXSTA2_NOT_TX8_position                  0x6
#define TXSTA2_NOT_TX8_size                      0x1
#define TXSTA2_NOT_TX8_value_mask                0x40
#define TXSTA2_NOT_TX8_clear_mask                0xBF

#define TXSTA2_TX8_9                             0x6
#define TXSTA2_TX8_9_address                     0xFA8
#define TXSTA2_TX8_9_position                    0x6
#define TXSTA2_TX8_9_size                        0x1
#define TXSTA2_TX8_9_value_mask                  0x40
#define TXSTA2_TX8_9_clear_mask                  0xBF

#define TXSTA2_CSRC                              0x7
#define TXSTA2_CSRC_address                      0xFA8
#define TXSTA2_CSRC_position                     0x7
#define TXSTA2_CSRC_size                         0x1
#define TXSTA2_CSRC_value_mask                   0x80
#define TXSTA2_CSRC_clear_mask                   0x7F

#define CSRC2                                    0x7
#define CSRC2_address                            0xFA8
#define CSRC2_position                           0x7
#define CSRC2_size                               0x1
#define CSRC2_value_mask                         0x80
#define CSRC2_clear_mask                         0x7F


/*------------------------------------------------------------------------------------------------------------#
| RCSTA1                                                                                                0xFAC |
#-------------------------------------------------------------------------------------------------------------#
| RCSTA1_SPEN | RCSTA1_NOT_RC8 | SREN1 | RCSTA1_CREN | RCSTA1_ADDEN | RCSTA1_FERR | RCSTA1_OERR | RCSTA1_RX9D |
#-------------------------------------------------------------------------------------------------------------#
| 7           | 6              | 5     | 4           | 3            | 2           | 1           | 0           |
#------------------------------------------------------------------------------------------------------------*/

#define RCSTA1                                   0x0
#define RCSTA1_address                           0xFAC
#define RCSTA1_position                          0x0
#define RCSTA1_size                              0x8
#define RCSTA1_value_mask                        0xFF
#define RCSTA1_clear_mask                        0x0

#define RCSTA1_RX9D                              0x0
#define RCSTA1_RX9D_address                      0xFAC
#define RCSTA1_RX9D_position                     0x0
#define RCSTA1_RX9D_size                         0x1
#define RCSTA1_RX9D_value_mask                   0x1
#define RCSTA1_RX9D_clear_mask                   0xFE

#define RX9D1                                    0x0
#define RX9D1_address                            0xFAC
#define RX9D1_position                           0x0
#define RX9D1_size                               0x1
#define RX9D1_value_mask                         0x1
#define RX9D1_clear_mask                         0xFE

#define RCSTA1_RCD8                              0x0
#define RCSTA1_RCD8_address                      0xFAC
#define RCSTA1_RCD8_position                     0x0
#define RCSTA1_RCD8_size                         0x1
#define RCSTA1_RCD8_value_mask                   0x1
#define RCSTA1_RCD8_clear_mask                   0xFE

#define RCSTA1_OERR                              0x1
#define RCSTA1_OERR_address                      0xFAC
#define RCSTA1_OERR_position                     0x1
#define RCSTA1_OERR_size                         0x1
#define RCSTA1_OERR_value_mask                   0x2
#define RCSTA1_OERR_clear_mask                   0xFD

#define OERR1                                    0x1
#define OERR1_address                            0xFAC
#define OERR1_position                           0x1
#define OERR1_size                               0x1
#define OERR1_value_mask                         0x2
#define OERR1_clear_mask                         0xFD

#define RCSTA1_FERR                              0x2
#define RCSTA1_FERR_address                      0xFAC
#define RCSTA1_FERR_position                     0x2
#define RCSTA1_FERR_size                         0x1
#define RCSTA1_FERR_value_mask                   0x4
#define RCSTA1_FERR_clear_mask                   0xFB

#define FERR1                                    0x2
#define FERR1_address                            0xFAC
#define FERR1_position                           0x2
#define FERR1_size                               0x1
#define FERR1_value_mask                         0x4
#define FERR1_clear_mask                         0xFB

#define RCSTA1_ADDEN                             0x3
#define RCSTA1_ADDEN_address                     0xFAC
#define RCSTA1_ADDEN_position                    0x3
#define RCSTA1_ADDEN_size                        0x1
#define RCSTA1_ADDEN_value_mask                  0x8
#define RCSTA1_ADDEN_clear_mask                  0xF7

#define ADDEN1                                   0x3
#define ADDEN1_address                           0xFAC
#define ADDEN1_position                          0x3
#define ADDEN1_size                              0x1
#define ADDEN1_value_mask                        0x8
#define ADDEN1_clear_mask                        0xF7

#define RCSTA1_CREN                              0x4
#define RCSTA1_CREN_address                      0xFAC
#define RCSTA1_CREN_position                     0x4
#define RCSTA1_CREN_size                         0x1
#define RCSTA1_CREN_value_mask                   0x10
#define RCSTA1_CREN_clear_mask                   0xEF

#define CREN1                                    0x4
#define CREN1_address                            0xFAC
#define CREN1_position                           0x4
#define CREN1_size                               0x1
#define CREN1_value_mask                         0x10
#define CREN1_clear_mask                         0xEF

#define SRENA                                    0x5
#define SRENA_address                            0xFAC
#define SRENA_position                           0x5
#define SRENA_size                               0x1
#define SRENA_value_mask                         0x20
#define SRENA_clear_mask                         0xDF

#define SREN1                                    0x5
#define SREN1_address                            0xFAC
#define SREN1_position                           0x5
#define SREN1_size                               0x1
#define SREN1_value_mask                         0x20
#define SREN1_clear_mask                         0xDF

#define RCSTA1_SREN                              0x5
#define RCSTA1_SREN_address                      0xFAC
#define RCSTA1_SREN_position                     0x5
#define RCSTA1_SREN_size                         0x1
#define RCSTA1_SREN_value_mask                   0x20
#define RCSTA1_SREN_clear_mask                   0xDF

#define RCSTA1_NOT_RC8                           0x6
#define RCSTA1_NOT_RC8_address                   0xFAC
#define RCSTA1_NOT_RC8_position                  0x6
#define RCSTA1_NOT_RC8_size                      0x1
#define RCSTA1_NOT_RC8_value_mask                0x40
#define RCSTA1_NOT_RC8_clear_mask                0xBF

#define RCSTA1_RC9                               0x6
#define RCSTA1_RC9_address                       0xFAC
#define RCSTA1_RC9_position                      0x6
#define RCSTA1_RC9_size                          0x1
#define RCSTA1_RC9_value_mask                    0x40
#define RCSTA1_RC9_clear_mask                    0xBF

#define RCSTA1_nRC8                              0x6
#define RCSTA1_nRC8_address                      0xFAC
#define RCSTA1_nRC8_position                     0x6
#define RCSTA1_nRC8_size                         0x1
#define RCSTA1_nRC8_value_mask                   0x40
#define RCSTA1_nRC8_clear_mask                   0xBF

#define RCSTA1_RC8_9                             0x6
#define RCSTA1_RC8_9_address                     0xFAC
#define RCSTA1_RC8_9_position                    0x6
#define RCSTA1_RC8_9_size                        0x1
#define RCSTA1_RC8_9_value_mask                  0x40
#define RCSTA1_RC8_9_clear_mask                  0xBF

#define RCSTA1_RX9                               0x6
#define RCSTA1_RX9_address                       0xFAC
#define RCSTA1_RX9_position                      0x6
#define RCSTA1_RX9_size                          0x1
#define RCSTA1_RX9_value_mask                    0x40
#define RCSTA1_RX9_clear_mask                    0xBF

#define RX91                                     0x6
#define RX91_address                             0xFAC
#define RX91_position                            0x6
#define RX91_size                                0x1
#define RX91_value_mask                          0x40
#define RX91_clear_mask                          0xBF

#define RCSTA1_SPEN                              0x7
#define RCSTA1_SPEN_address                      0xFAC
#define RCSTA1_SPEN_position                     0x7
#define RCSTA1_SPEN_size                         0x1
#define RCSTA1_SPEN_value_mask                   0x80
#define RCSTA1_SPEN_clear_mask                   0x7F

#define SPEN1                                    0x7
#define SPEN1_address                            0xFAC
#define SPEN1_position                           0x7
#define SPEN1_size                               0x1
#define SPEN1_value_mask                         0x80
#define SPEN1_clear_mask                         0x7F


/*---------------------------------------------------------------------------------------------#
| TXSTA1                                                                                 0xFAD |
#----------------------------------------------------------------------------------------------#
| CSRC1 | TXSTA1_nTX8 | TXSTA1_TXEN | SYNC1 | TXSTA1_SENDB | TXSTA1_BRGH | TXSTA1_TRMT | TX9D1 |
#----------------------------------------------------------------------------------------------#
| 7     | 6           | 5           | 4     | 3            | 2           | 1           | 0     |
#---------------------------------------------------------------------------------------------*/

#define TXSTA1                                   0x0
#define TXSTA1_address                           0xFAD
#define TXSTA1_position                          0x0
#define TXSTA1_size                              0x8
#define TXSTA1_value_mask                        0xFF
#define TXSTA1_clear_mask                        0x0

#define TX9D1                                    0x0
#define TX9D1_address                            0xFAD
#define TX9D1_position                           0x0
#define TX9D1_size                               0x1
#define TX9D1_value_mask                         0x1
#define TX9D1_clear_mask                         0xFE

#define TXSTA1_TX9D                              0x0
#define TXSTA1_TX9D_address                      0xFAD
#define TXSTA1_TX9D_position                     0x0
#define TXSTA1_TX9D_size                         0x1
#define TXSTA1_TX9D_value_mask                   0x1
#define TXSTA1_TX9D_clear_mask                   0xFE

#define TXSTA1_TXD8                              0x0
#define TXSTA1_TXD8_address                      0xFAD
#define TXSTA1_TXD8_position                     0x0
#define TXSTA1_TXD8_size                         0x1
#define TXSTA1_TXD8_value_mask                   0x1
#define TXSTA1_TXD8_clear_mask                   0xFE

#define TRMT1                                    0x1
#define TRMT1_address                            0xFAD
#define TRMT1_position                           0x1
#define TRMT1_size                               0x1
#define TRMT1_value_mask                         0x2
#define TRMT1_clear_mask                         0xFD

#define TXSTA1_TRMT                              0x1
#define TXSTA1_TRMT_address                      0xFAD
#define TXSTA1_TRMT_position                     0x1
#define TXSTA1_TRMT_size                         0x1
#define TXSTA1_TRMT_value_mask                   0x2
#define TXSTA1_TRMT_clear_mask                   0xFD

#define BRGH1                                    0x2
#define BRGH1_address                            0xFAD
#define BRGH1_position                           0x2
#define BRGH1_size                               0x1
#define BRGH1_value_mask                         0x4
#define BRGH1_clear_mask                         0xFB

#define TXSTA1_BRGH                              0x2
#define TXSTA1_BRGH_address                      0xFAD
#define TXSTA1_BRGH_position                     0x2
#define TXSTA1_BRGH_size                         0x1
#define TXSTA1_BRGH_value_mask                   0x4
#define TXSTA1_BRGH_clear_mask                   0xFB

#define TXSTA1_SENDB                             0x3
#define TXSTA1_SENDB_address                     0xFAD
#define TXSTA1_SENDB_position                    0x3
#define TXSTA1_SENDB_size                        0x1
#define TXSTA1_SENDB_value_mask                  0x8
#define TXSTA1_SENDB_clear_mask                  0xF7

#define SENDB1                                   0x3
#define SENDB1_address                           0xFAD
#define SENDB1_position                          0x3
#define SENDB1_size                              0x1
#define SENDB1_value_mask                        0x8
#define SENDB1_clear_mask                        0xF7

#define TXSTA1_SYNC                              0x4
#define TXSTA1_SYNC_address                      0xFAD
#define TXSTA1_SYNC_position                     0x4
#define TXSTA1_SYNC_size                         0x1
#define TXSTA1_SYNC_value_mask                   0x10
#define TXSTA1_SYNC_clear_mask                   0xEF

#define SYNC1                                    0x4
#define SYNC1_address                            0xFAD
#define SYNC1_position                           0x4
#define SYNC1_size                               0x1
#define SYNC1_value_mask                         0x10
#define SYNC1_clear_mask                         0xEF

#define TXEN1                                    0x5
#define TXEN1_address                            0xFAD
#define TXEN1_position                           0x5
#define TXEN1_size                               0x1
#define TXEN1_value_mask                         0x20
#define TXEN1_clear_mask                         0xDF

#define TXSTA1_TXEN                              0x5
#define TXSTA1_TXEN_address                      0xFAD
#define TXSTA1_TXEN_position                     0x5
#define TXSTA1_TXEN_size                         0x1
#define TXSTA1_TXEN_value_mask                   0x20
#define TXSTA1_TXEN_clear_mask                   0xDF

#define TX91                                     0x6
#define TX91_address                             0xFAD
#define TX91_position                            0x6
#define TX91_size                                0x1
#define TX91_value_mask                          0x40
#define TX91_clear_mask                          0xBF

#define TXSTA1_NOT_TX8                           0x6
#define TXSTA1_NOT_TX8_address                   0xFAD
#define TXSTA1_NOT_TX8_position                  0x6
#define TXSTA1_NOT_TX8_size                      0x1
#define TXSTA1_NOT_TX8_value_mask                0x40
#define TXSTA1_NOT_TX8_clear_mask                0xBF

#define TXSTA1_TX8_9                             0x6
#define TXSTA1_TX8_9_address                     0xFAD
#define TXSTA1_TX8_9_position                    0x6
#define TXSTA1_TX8_9_size                        0x1
#define TXSTA1_TX8_9_value_mask                  0x40
#define TXSTA1_TX8_9_clear_mask                  0xBF

#define TXSTA1_TX9                               0x6
#define TXSTA1_TX9_address                       0xFAD
#define TXSTA1_TX9_position                      0x6
#define TXSTA1_TX9_size                          0x1
#define TXSTA1_TX9_value_mask                    0x40
#define TXSTA1_TX9_clear_mask                    0xBF

#define TXSTA1_nTX8                              0x6
#define TXSTA1_nTX8_address                      0xFAD
#define TXSTA1_nTX8_position                     0x6
#define TXSTA1_nTX8_size                         0x1
#define TXSTA1_nTX8_value_mask                   0x40
#define TXSTA1_nTX8_clear_mask                   0xBF

#define TXSTA1_CSRC                              0x7
#define TXSTA1_CSRC_address                      0xFAD
#define TXSTA1_CSRC_position                     0x7
#define TXSTA1_CSRC_size                         0x1
#define TXSTA1_CSRC_value_mask                   0x80
#define TXSTA1_CSRC_clear_mask                   0x7F

#define CSRC1                                    0x7
#define CSRC1_address                            0xFAD
#define CSRC1_position                           0x7
#define CSRC1_size                               0x1
#define CSRC1_value_mask                         0x80
#define CSRC1_clear_mask                         0x7F


/*----------------------------------------------------------------#
| ECCP3CON                                                  0xFB1 |
#-----------------------------------------------------------------#
| P3M1 | P3M0 | CCP3X | CCP3Y | CCP3M3 | CCP3M2 | CCP3M1 | CCP3M0 |
#-----------------------------------------------------------------#
| 7    | 6    | 5     | 4     | 3      | 2      | 1      | 0      |
#----------------------------------------------------------------*/

#define ECCP3CON                                 0x0
#define ECCP3CON_address                         0xFB1
#define ECCP3CON_position                        0x0
#define ECCP3CON_size                            0x8
#define ECCP3CON_value_mask                      0xFF
#define ECCP3CON_clear_mask                      0x0

#define CCP3M                                    0x0
#define CCP3M_address                            0xFB1
#define CCP3M_position                           0x0
#define CCP3M_size                               0x4
#define CCP3M_value_mask                         0xF
#define CCP3M_clear_mask                         0xF0

#define CCP3M0                                   0x0
#define CCP3M0_address                           0xFB1
#define CCP3M0_position                          0x0
#define CCP3M0_size                              0x1
#define CCP3M0_value_mask                        0x1
#define CCP3M0_clear_mask                        0xFE

#define CCP3M1                                   0x1
#define CCP3M1_address                           0xFB1
#define CCP3M1_position                          0x1
#define CCP3M1_size                              0x1
#define CCP3M1_value_mask                        0x2
#define CCP3M1_clear_mask                        0xFD

#define CCP3M2                                   0x2
#define CCP3M2_address                           0xFB1
#define CCP3M2_position                          0x2
#define CCP3M2_size                              0x1
#define CCP3M2_value_mask                        0x4
#define CCP3M2_clear_mask                        0xFB

#define CCP3M3                                   0x3
#define CCP3M3_address                           0xFB1
#define CCP3M3_position                          0x3
#define CCP3M3_size                              0x1
#define CCP3M3_value_mask                        0x8
#define CCP3M3_clear_mask                        0xF7

#define CCP3Y                                    0x4
#define CCP3Y_address                            0xFB1
#define CCP3Y_position                           0x4
#define CCP3Y_size                               0x1
#define CCP3Y_value_mask                         0x10
#define CCP3Y_clear_mask                         0xEF

#define DC3B                                     0x4
#define DC3B_address                             0xFB1
#define DC3B_position                            0x4
#define DC3B_size                                0x2
#define DC3B_value_mask                          0x30
#define DC3B_clear_mask                          0xCF

#define DC3B0                                    0x4
#define DC3B0_address                            0xFB1
#define DC3B0_position                           0x4
#define DC3B0_size                               0x1
#define DC3B0_value_mask                         0x10
#define DC3B0_clear_mask                         0xEF

#define DC3B1                                    0x5
#define DC3B1_address                            0xFB1
#define DC3B1_position                           0x5
#define DC3B1_size                               0x1
#define DC3B1_value_mask                         0x20
#define DC3B1_clear_mask                         0xDF

#define CCP3X                                    0x5
#define CCP3X_address                            0xFB1
#define CCP3X_position                           0x5
#define CCP3X_size                               0x1
#define CCP3X_value_mask                         0x20
#define CCP3X_clear_mask                         0xDF

#define P3M                                      0x6
#define P3M_address                              0xFB1
#define P3M_position                             0x6
#define P3M_size                                 0x2
#define P3M_value_mask                           0xC0
#define P3M_clear_mask                           0x3F

#define P3M0                                     0x6
#define P3M0_address                             0xFB1
#define P3M0_position                            0x6
#define P3M0_size                                0x1
#define P3M0_value_mask                          0x40
#define P3M0_clear_mask                          0xBF

#define P3M1                                     0x7
#define P3M1_address                             0xFB1
#define P3M1_position                            0x7
#define P3M1_size                                0x1
#define P3M1_value_mask                          0x80
#define P3M1_clear_mask                          0x7F


/*-----------------------------------------------------------------------------------------------------------------------#
| ECCP3DEL                                                                                                         0xFB4 |
#------------------------------------------------------------------------------------------------------------------------#
| P3RSEN | ECCP3DEL_PDC6 | ECCP3DEL_PDC5 | ECCP3DEL_PDC4 | ECCP3DEL_PDC3 | ECCP3DEL_PDC2 | ECCP3DEL_PDC1 | ECCP3DEL_PDC0 |
#------------------------------------------------------------------------------------------------------------------------#
| 7      | 6             | 5             | 4             | 3             | 2             | 1             | 0             |
#-----------------------------------------------------------------------------------------------------------------------*/

#define ECCP3DEL                                 0x0
#define ECCP3DEL_address                         0xFB4
#define ECCP3DEL_position                        0x0
#define ECCP3DEL_size                            0x8
#define ECCP3DEL_value_mask                      0xFF
#define ECCP3DEL_clear_mask                      0x0

#define ECCP3DEL_PDC0                            0x0
#define ECCP3DEL_PDC0_address                    0xFB4
#define ECCP3DEL_PDC0_position                   0x0
#define ECCP3DEL_PDC0_size                       0x1
#define ECCP3DEL_PDC0_value_mask                 0x1
#define ECCP3DEL_PDC0_clear_mask                 0xFE

#define P3DC0                                    0x0
#define P3DC0_address                            0xFB4
#define P3DC0_position                           0x0
#define P3DC0_size                               0x1
#define P3DC0_value_mask                         0x1
#define P3DC0_clear_mask                         0xFE

#define ECCP3DEL_PDC                             0x0
#define ECCP3DEL_PDC_address                     0xFB4
#define ECCP3DEL_PDC_position                    0x0
#define ECCP3DEL_PDC_size                        0x7
#define ECCP3DEL_PDC_value_mask                  0x7F
#define ECCP3DEL_PDC_clear_mask                  0x80

#define ECCP3DEL_PDC1                            0x1
#define ECCP3DEL_PDC1_address                    0xFB4
#define ECCP3DEL_PDC1_position                   0x1
#define ECCP3DEL_PDC1_size                       0x1
#define ECCP3DEL_PDC1_value_mask                 0x2
#define ECCP3DEL_PDC1_clear_mask                 0xFD

#define P3DC1                                    0x1
#define P3DC1_address                            0xFB4
#define P3DC1_position                           0x1
#define P3DC1_size                               0x1
#define P3DC1_value_mask                         0x2
#define P3DC1_clear_mask                         0xFD

#define ECCP3DEL_PDC2                            0x2
#define ECCP3DEL_PDC2_address                    0xFB4
#define ECCP3DEL_PDC2_position                   0x2
#define ECCP3DEL_PDC2_size                       0x1
#define ECCP3DEL_PDC2_value_mask                 0x4
#define ECCP3DEL_PDC2_clear_mask                 0xFB

#define P3DC2                                    0x2
#define P3DC2_address                            0xFB4
#define P3DC2_position                           0x2
#define P3DC2_size                               0x1
#define P3DC2_value_mask                         0x4
#define P3DC2_clear_mask                         0xFB

#define ECCP3DEL_PDC3                            0x3
#define ECCP3DEL_PDC3_address                    0xFB4
#define ECCP3DEL_PDC3_position                   0x3
#define ECCP3DEL_PDC3_size                       0x1
#define ECCP3DEL_PDC3_value_mask                 0x8
#define ECCP3DEL_PDC3_clear_mask                 0xF7

#define P3DC3                                    0x3
#define P3DC3_address                            0xFB4
#define P3DC3_position                           0x3
#define P3DC3_size                               0x1
#define P3DC3_value_mask                         0x8
#define P3DC3_clear_mask                         0xF7

#define ECCP3DEL_PDC4                            0x4
#define ECCP3DEL_PDC4_address                    0xFB4
#define ECCP3DEL_PDC4_position                   0x4
#define ECCP3DEL_PDC4_size                       0x1
#define ECCP3DEL_PDC4_value_mask                 0x10
#define ECCP3DEL_PDC4_clear_mask                 0xEF

#define P3DC4                                    0x4
#define P3DC4_address                            0xFB4
#define P3DC4_position                           0x4
#define P3DC4_size                               0x1
#define P3DC4_value_mask                         0x10
#define P3DC4_clear_mask                         0xEF

#define ECCP3DEL_PDC5                            0x5
#define ECCP3DEL_PDC5_address                    0xFB4
#define ECCP3DEL_PDC5_position                   0x5
#define ECCP3DEL_PDC5_size                       0x1
#define ECCP3DEL_PDC5_value_mask                 0x20
#define ECCP3DEL_PDC5_clear_mask                 0xDF

#define P3DC5                                    0x5
#define P3DC5_address                            0xFB4
#define P3DC5_position                           0x5
#define P3DC5_size                               0x1
#define P3DC5_value_mask                         0x20
#define P3DC5_clear_mask                         0xDF

#define ECCP3DEL_PDC6                            0x6
#define ECCP3DEL_PDC6_address                    0xFB4
#define ECCP3DEL_PDC6_position                   0x6
#define ECCP3DEL_PDC6_size                       0x1
#define ECCP3DEL_PDC6_value_mask                 0x40
#define ECCP3DEL_PDC6_clear_mask                 0xBF

#define P3DC6                                    0x6
#define P3DC6_address                            0xFB4
#define P3DC6_position                           0x6
#define P3DC6_size                               0x1
#define P3DC6_value_mask                         0x40
#define P3DC6_clear_mask                         0xBF

#define P3RSEN                                   0x7
#define P3RSEN_address                           0xFB4
#define P3RSEN_position                          0x7
#define P3RSEN_size                              0x1
#define P3RSEN_value_mask                        0x80
#define P3RSEN_clear_mask                        0x7F

#define ECCP3DEL_PRSEN                           0x7
#define ECCP3DEL_PRSEN_address                   0xFB4
#define ECCP3DEL_PRSEN_position                  0x7
#define ECCP3DEL_PRSEN_size                      0x1
#define ECCP3DEL_PRSEN_value_mask                0x80
#define ECCP3DEL_PRSEN_clear_mask                0x7F


/*----------------------------------------------------------------------------------------------------------------------------#
| ECCP3AS                                                                                                               0xFB5 |
#-----------------------------------------------------------------------------------------------------------------------------#
| ECCP3AS_ECCPASE | ECCP3AS_ECCPAS2 | ECCP3AS_ECCPAS1 | ECCP3AS_ECCPAS0 | ECCP3AS_PSSAC1 | ECCP3AS_PSSAC0 | PSS3BD1 | PSS3BD0 |
#-----------------------------------------------------------------------------------------------------------------------------#
| 7               | 6               | 5               | 4               | 3              | 2              | 1       | 0       |
#----------------------------------------------------------------------------------------------------------------------------*/

#define ECCP3AS                                  0x0
#define ECCP3AS_address                          0xFB5
#define ECCP3AS_position                         0x0
#define ECCP3AS_size                             0x8
#define ECCP3AS_value_mask                       0xFF
#define ECCP3AS_clear_mask                       0x0

#define ECCP3AS_PSSBD0                           0x0
#define ECCP3AS_PSSBD0_address                   0xFB5
#define ECCP3AS_PSSBD0_position                  0x0
#define ECCP3AS_PSSBD0_size                      0x1
#define ECCP3AS_PSSBD0_value_mask                0x1
#define ECCP3AS_PSSBD0_clear_mask                0xFE

#define PSS3BD0                                  0x0
#define PSS3BD0_address                          0xFB5
#define PSS3BD0_position                         0x0
#define PSS3BD0_size                             0x1
#define PSS3BD0_value_mask                       0x1
#define PSS3BD0_clear_mask                       0xFE

#define ECCP3AS_PSSBD                            0x0
#define ECCP3AS_PSSBD_address                    0xFB5
#define ECCP3AS_PSSBD_position                   0x0
#define ECCP3AS_PSSBD_size                       0x2
#define ECCP3AS_PSSBD_value_mask                 0x3
#define ECCP3AS_PSSBD_clear_mask                 0xFC

#define ECCP3AS_PSSBD1                           0x1
#define ECCP3AS_PSSBD1_address                   0xFB5
#define ECCP3AS_PSSBD1_position                  0x1
#define ECCP3AS_PSSBD1_size                      0x1
#define ECCP3AS_PSSBD1_value_mask                0x2
#define ECCP3AS_PSSBD1_clear_mask                0xFD

#define PSS3BD1                                  0x1
#define PSS3BD1_address                          0xFB5
#define PSS3BD1_position                         0x1
#define PSS3BD1_size                             0x1
#define PSS3BD1_value_mask                       0x2
#define PSS3BD1_clear_mask                       0xFD

#define ECCP3AS_PSSAC0                           0x2
#define ECCP3AS_PSSAC0_address                   0xFB5
#define ECCP3AS_PSSAC0_position                  0x2
#define ECCP3AS_PSSAC0_size                      0x1
#define ECCP3AS_PSSAC0_value_mask                0x4
#define ECCP3AS_PSSAC0_clear_mask                0xFB

#define PSS3AC0                                  0x2
#define PSS3AC0_address                          0xFB5
#define PSS3AC0_position                         0x2
#define PSS3AC0_size                             0x1
#define PSS3AC0_value_mask                       0x4
#define PSS3AC0_clear_mask                       0xFB

#define ECCP3AS_PSSAC                            0x2
#define ECCP3AS_PSSAC_address                    0xFB5
#define ECCP3AS_PSSAC_position                   0x2
#define ECCP3AS_PSSAC_size                       0x2
#define ECCP3AS_PSSAC_value_mask                 0xC
#define ECCP3AS_PSSAC_clear_mask                 0xF3

#define ECCP3AS_PSSAC1                           0x3
#define ECCP3AS_PSSAC1_address                   0xFB5
#define ECCP3AS_PSSAC1_position                  0x3
#define ECCP3AS_PSSAC1_size                      0x1
#define ECCP3AS_PSSAC1_value_mask                0x8
#define ECCP3AS_PSSAC1_clear_mask                0xF7

#define PSS3AC1                                  0x3
#define PSS3AC1_address                          0xFB5
#define PSS3AC1_position                         0x3
#define PSS3AC1_size                             0x1
#define PSS3AC1_value_mask                       0x8
#define PSS3AC1_clear_mask                       0xF7

#define ECCP3AS_ECCPAS0                          0x4
#define ECCP3AS_ECCPAS0_address                  0xFB5
#define ECCP3AS_ECCPAS0_position                 0x4
#define ECCP3AS_ECCPAS0_size                     0x1
#define ECCP3AS_ECCPAS0_value_mask               0x10
#define ECCP3AS_ECCPAS0_clear_mask               0xEF

#define ECCP3AS_ECCPAS                           0x4
#define ECCP3AS_ECCPAS_address                   0xFB5
#define ECCP3AS_ECCPAS_position                  0x4
#define ECCP3AS_ECCPAS_size                      0x3
#define ECCP3AS_ECCPAS_value_mask                0x70
#define ECCP3AS_ECCPAS_clear_mask                0x8F

#define ECCP3AS0                                 0x4
#define ECCP3AS0_address                         0xFB5
#define ECCP3AS0_position                        0x4
#define ECCP3AS0_size                            0x1
#define ECCP3AS0_value_mask                      0x10
#define ECCP3AS0_clear_mask                      0xEF

#define ECCP3AS_ECCPAS1                          0x5
#define ECCP3AS_ECCPAS1_address                  0xFB5
#define ECCP3AS_ECCPAS1_position                 0x5
#define ECCP3AS_ECCPAS1_size                     0x1
#define ECCP3AS_ECCPAS1_value_mask               0x20
#define ECCP3AS_ECCPAS1_clear_mask               0xDF

#define ECCP3AS1                                 0x5
#define ECCP3AS1_address                         0xFB5
#define ECCP3AS1_position                        0x5
#define ECCP3AS1_size                            0x1
#define ECCP3AS1_value_mask                      0x20
#define ECCP3AS1_clear_mask                      0xDF

#define ECCP3AS_ECCPAS2                          0x6
#define ECCP3AS_ECCPAS2_address                  0xFB5
#define ECCP3AS_ECCPAS2_position                 0x6
#define ECCP3AS_ECCPAS2_size                     0x1
#define ECCP3AS_ECCPAS2_value_mask               0x40
#define ECCP3AS_ECCPAS2_clear_mask               0xBF

#define ECCP3AS2                                 0x6
#define ECCP3AS2_address                         0xFB5
#define ECCP3AS2_position                        0x6
#define ECCP3AS2_size                            0x1
#define ECCP3AS2_value_mask                      0x40
#define ECCP3AS2_clear_mask                      0xBF

#define ECCP3AS_ECCPASE                          0x7
#define ECCP3AS_ECCPASE_address                  0xFB5
#define ECCP3AS_ECCPASE_position                 0x7
#define ECCP3AS_ECCPASE_size                     0x1
#define ECCP3AS_ECCPASE_value_mask               0x80
#define ECCP3AS_ECCPASE_clear_mask               0x7F

#define ECCP3ASE                                 0x7
#define ECCP3ASE_address                         0xFB5
#define ECCP3ASE_position                        0x7
#define ECCP3ASE_size                            0x1
#define ECCP3ASE_value_mask                      0x80
#define ECCP3ASE_clear_mask                      0x7F


/*----------------------------------------------------------------#
| ECCP2CON                                                  0xFB6 |
#-----------------------------------------------------------------#
| P2M1 | P2M0 | DC2B1 | DC2B0 | CCP2M3 | CCP2M2 | CCP2M1 | CCP2M0 |
#-----------------------------------------------------------------#
| 7    | 6    | 5     | 4     | 3      | 2      | 1      | 0      |
#----------------------------------------------------------------*/

#define ECCP2CON                                 0x0
#define ECCP2CON_address                         0xFB6
#define ECCP2CON_position                        0x0
#define ECCP2CON_size                            0x8
#define ECCP2CON_value_mask                      0xFF
#define ECCP2CON_clear_mask                      0x0

#define CCP2M                                    0x0
#define CCP2M_address                            0xFB6
#define CCP2M_position                           0x0
#define CCP2M_size                               0x4
#define CCP2M_value_mask                         0xF
#define CCP2M_clear_mask                         0xF0

#define CCP2M0                                   0x0
#define CCP2M0_address                           0xFB6
#define CCP2M0_position                          0x0
#define CCP2M0_size                              0x1
#define CCP2M0_value_mask                        0x1
#define CCP2M0_clear_mask                        0xFE

#define CCP2M1                                   0x1
#define CCP2M1_address                           0xFB6
#define CCP2M1_position                          0x1
#define CCP2M1_size                              0x1
#define CCP2M1_value_mask                        0x2
#define CCP2M1_clear_mask                        0xFD

#define CCP2M2                                   0x2
#define CCP2M2_address                           0xFB6
#define CCP2M2_position                          0x2
#define CCP2M2_size                              0x1
#define CCP2M2_value_mask                        0x4
#define CCP2M2_clear_mask                        0xFB

#define CCP2M3                                   0x3
#define CCP2M3_address                           0xFB6
#define CCP2M3_position                          0x3
#define CCP2M3_size                              0x1
#define CCP2M3_value_mask                        0x8
#define CCP2M3_clear_mask                        0xF7

#define DC2B                                     0x4
#define DC2B_address                             0xFB6
#define DC2B_position                            0x4
#define DC2B_size                                0x2
#define DC2B_value_mask                          0x30
#define DC2B_clear_mask                          0xCF

#define DC2B0                                    0x4
#define DC2B0_address                            0xFB6
#define DC2B0_position                           0x4
#define DC2B0_size                               0x1
#define DC2B0_value_mask                         0x10
#define DC2B0_clear_mask                         0xEF

#define CCP2Y                                    0x4
#define CCP2Y_address                            0xFB6
#define CCP2Y_position                           0x4
#define CCP2Y_size                               0x1
#define CCP2Y_value_mask                         0x10
#define CCP2Y_clear_mask                         0xEF

#define DC2B1                                    0x5
#define DC2B1_address                            0xFB6
#define DC2B1_position                           0x5
#define DC2B1_size                               0x1
#define DC2B1_value_mask                         0x20
#define DC2B1_clear_mask                         0xDF

#define CCP2X                                    0x5
#define CCP2X_address                            0xFB6
#define CCP2X_position                           0x5
#define CCP2X_size                               0x1
#define CCP2X_value_mask                         0x20
#define CCP2X_clear_mask                         0xDF

#define P2M                                      0x6
#define P2M_address                              0xFB6
#define P2M_position                             0x6
#define P2M_size                                 0x2
#define P2M_value_mask                           0xC0
#define P2M_clear_mask                           0x3F

#define P2M0                                     0x6
#define P2M0_address                             0xFB6
#define P2M0_position                            0x6
#define P2M0_size                                0x1
#define P2M0_value_mask                          0x40
#define P2M0_clear_mask                          0xBF

#define P2M1                                     0x7
#define P2M1_address                             0xFB6
#define P2M1_position                            0x7
#define P2M1_size                                0x1
#define P2M1_value_mask                          0x80
#define P2M1_clear_mask                          0x7F


/*-------------------------------------------------------------------------------------------------------------------------------#
| ECCP2DEL                                                                                                                 0xFB9 |
#--------------------------------------------------------------------------------------------------------------------------------#
| ECCP2DEL_PRSEN | ECCP2DEL_PDC6 | ECCP2DEL_PDC5 | ECCP2DEL_PDC4 | ECCP2DEL_PDC3 | ECCP2DEL_PDC2 | ECCP2DEL_PDC1 | ECCP2DEL_PDC0 |
#--------------------------------------------------------------------------------------------------------------------------------#
| 7              | 6             | 5             | 4             | 3             | 2             | 1             | 0             |
#-------------------------------------------------------------------------------------------------------------------------------*/

#define ECCP2DEL                                 0x0
#define ECCP2DEL_address                         0xFB9
#define ECCP2DEL_position                        0x0
#define ECCP2DEL_size                            0x8
#define ECCP2DEL_value_mask                      0xFF
#define ECCP2DEL_clear_mask                      0x0

#define P2DC0                                    0x0
#define P2DC0_address                            0xFB9
#define P2DC0_position                           0x0
#define P2DC0_size                               0x1
#define P2DC0_value_mask                         0x1
#define P2DC0_clear_mask                         0xFE

#define ECCP2DEL_PDC0                            0x0
#define ECCP2DEL_PDC0_address                    0xFB9
#define ECCP2DEL_PDC0_position                   0x0
#define ECCP2DEL_PDC0_size                       0x1
#define ECCP2DEL_PDC0_value_mask                 0x1
#define ECCP2DEL_PDC0_clear_mask                 0xFE

#define ECCP2DEL_PDC                             0x0
#define ECCP2DEL_PDC_address                     0xFB9
#define ECCP2DEL_PDC_position                    0x0
#define ECCP2DEL_PDC_size                        0x7
#define ECCP2DEL_PDC_value_mask                  0x7F
#define ECCP2DEL_PDC_clear_mask                  0x80

#define P2DC1                                    0x1
#define P2DC1_address                            0xFB9
#define P2DC1_position                           0x1
#define P2DC1_size                               0x1
#define P2DC1_value_mask                         0x2
#define P2DC1_clear_mask                         0xFD

#define ECCP2DEL_PDC1                            0x1
#define ECCP2DEL_PDC1_address                    0xFB9
#define ECCP2DEL_PDC1_position                   0x1
#define ECCP2DEL_PDC1_size                       0x1
#define ECCP2DEL_PDC1_value_mask                 0x2
#define ECCP2DEL_PDC1_clear_mask                 0xFD

#define P2DC2                                    0x2
#define P2DC2_address                            0xFB9
#define P2DC2_position                           0x2
#define P2DC2_size                               0x1
#define P2DC2_value_mask                         0x4
#define P2DC2_clear_mask                         0xFB

#define ECCP2DEL_PDC2                            0x2
#define ECCP2DEL_PDC2_address                    0xFB9
#define ECCP2DEL_PDC2_position                   0x2
#define ECCP2DEL_PDC2_size                       0x1
#define ECCP2DEL_PDC2_value_mask                 0x4
#define ECCP2DEL_PDC2_clear_mask                 0xFB

#define P2DC3                                    0x3
#define P2DC3_address                            0xFB9
#define P2DC3_position                           0x3
#define P2DC3_size                               0x1
#define P2DC3_value_mask                         0x8
#define P2DC3_clear_mask                         0xF7

#define ECCP2DEL_PDC3                            0x3
#define ECCP2DEL_PDC3_address                    0xFB9
#define ECCP2DEL_PDC3_position                   0x3
#define ECCP2DEL_PDC3_size                       0x1
#define ECCP2DEL_PDC3_value_mask                 0x8
#define ECCP2DEL_PDC3_clear_mask                 0xF7

#define P2DC4                                    0x4
#define P2DC4_address                            0xFB9
#define P2DC4_position                           0x4
#define P2DC4_size                               0x1
#define P2DC4_value_mask                         0x10
#define P2DC4_clear_mask                         0xEF

#define ECCP2DEL_PDC4                            0x4
#define ECCP2DEL_PDC4_address                    0xFB9
#define ECCP2DEL_PDC4_position                   0x4
#define ECCP2DEL_PDC4_size                       0x1
#define ECCP2DEL_PDC4_value_mask                 0x10
#define ECCP2DEL_PDC4_clear_mask                 0xEF

#define P2DC5                                    0x5
#define P2DC5_address                            0xFB9
#define P2DC5_position                           0x5
#define P2DC5_size                               0x1
#define P2DC5_value_mask                         0x20
#define P2DC5_clear_mask                         0xDF

#define ECCP2DEL_PDC5                            0x5
#define ECCP2DEL_PDC5_address                    0xFB9
#define ECCP2DEL_PDC5_position                   0x5
#define ECCP2DEL_PDC5_size                       0x1
#define ECCP2DEL_PDC5_value_mask                 0x20
#define ECCP2DEL_PDC5_clear_mask                 0xDF

#define P2DC6                                    0x6
#define P2DC6_address                            0xFB9
#define P2DC6_position                           0x6
#define P2DC6_size                               0x1
#define P2DC6_value_mask                         0x40
#define P2DC6_clear_mask                         0xBF

#define ECCP2DEL_PDC6                            0x6
#define ECCP2DEL_PDC6_address                    0xFB9
#define ECCP2DEL_PDC6_position                   0x6
#define ECCP2DEL_PDC6_size                       0x1
#define ECCP2DEL_PDC6_value_mask                 0x40
#define ECCP2DEL_PDC6_clear_mask                 0xBF

#define ECCP2DEL_PRSEN                           0x7
#define ECCP2DEL_PRSEN_address                   0xFB9
#define ECCP2DEL_PRSEN_position                  0x7
#define ECCP2DEL_PRSEN_size                      0x1
#define ECCP2DEL_PRSEN_value_mask                0x80
#define ECCP2DEL_PRSEN_clear_mask                0x7F

#define P2RSEN                                   0x7
#define P2RSEN_address                           0xFB9
#define P2RSEN_position                          0x7
#define P2RSEN_size                              0x1
#define P2RSEN_value_mask                        0x80
#define P2RSEN_clear_mask                        0x7F


/*------------------------------------------------------------------------------------------------#
| ECCP2AS                                                                                   0xFBA |
#-------------------------------------------------------------------------------------------------#
| ECCP2AS_ECCPASE | ECCP2AS2 | ECCP2AS1 | ECCP2AS0 | PSS2AC1 | ECCP2AS_PSSAC0 | PSS2BD1 | PSS2BD0 |
#-------------------------------------------------------------------------------------------------#
| 7               | 6        | 5        | 4        | 3       | 2              | 1       | 0       |
#------------------------------------------------------------------------------------------------*/

#define ECCP2AS                                  0x0
#define ECCP2AS_address                          0xFBA
#define ECCP2AS_position                         0x0
#define ECCP2AS_size                             0x8
#define ECCP2AS_value_mask                       0xFF
#define ECCP2AS_clear_mask                       0x0

#define ECCP2AS_PSSBD                            0x0
#define ECCP2AS_PSSBD_address                    0xFBA
#define ECCP2AS_PSSBD_position                   0x0
#define ECCP2AS_PSSBD_size                       0x2
#define ECCP2AS_PSSBD_value_mask                 0x3
#define ECCP2AS_PSSBD_clear_mask                 0xFC

#define ECCP2AS_PSSBD0                           0x0
#define ECCP2AS_PSSBD0_address                   0xFBA
#define ECCP2AS_PSSBD0_position                  0x0
#define ECCP2AS_PSSBD0_size                      0x1
#define ECCP2AS_PSSBD0_value_mask                0x1
#define ECCP2AS_PSSBD0_clear_mask                0xFE

#define PSS2BD0                                  0x0
#define PSS2BD0_address                          0xFBA
#define PSS2BD0_position                         0x0
#define PSS2BD0_size                             0x1
#define PSS2BD0_value_mask                       0x1
#define PSS2BD0_clear_mask                       0xFE

#define ECCP2AS_PSSBD1                           0x1
#define ECCP2AS_PSSBD1_address                   0xFBA
#define ECCP2AS_PSSBD1_position                  0x1
#define ECCP2AS_PSSBD1_size                      0x1
#define ECCP2AS_PSSBD1_value_mask                0x2
#define ECCP2AS_PSSBD1_clear_mask                0xFD

#define PSS2BD1                                  0x1
#define PSS2BD1_address                          0xFBA
#define PSS2BD1_position                         0x1
#define PSS2BD1_size                             0x1
#define PSS2BD1_value_mask                       0x2
#define PSS2BD1_clear_mask                       0xFD

#define PSS2AC0                                  0x2
#define PSS2AC0_address                          0xFBA
#define PSS2AC0_position                         0x2
#define PSS2AC0_size                             0x1
#define PSS2AC0_value_mask                       0x4
#define PSS2AC0_clear_mask                       0xFB

#define ECCP2AS_PSSAC0                           0x2
#define ECCP2AS_PSSAC0_address                   0xFBA
#define ECCP2AS_PSSAC0_position                  0x2
#define ECCP2AS_PSSAC0_size                      0x1
#define ECCP2AS_PSSAC0_value_mask                0x4
#define ECCP2AS_PSSAC0_clear_mask                0xFB

#define ECCP2AS_PSSAC                            0x2
#define ECCP2AS_PSSAC_address                    0xFBA
#define ECCP2AS_PSSAC_position                   0x2
#define ECCP2AS_PSSAC_size                       0x2
#define ECCP2AS_PSSAC_value_mask                 0xC
#define ECCP2AS_PSSAC_clear_mask                 0xF3

#define ECCP2AS_PSSAC1                           0x3
#define ECCP2AS_PSSAC1_address                   0xFBA
#define ECCP2AS_PSSAC1_position                  0x3
#define ECCP2AS_PSSAC1_size                      0x1
#define ECCP2AS_PSSAC1_value_mask                0x8
#define ECCP2AS_PSSAC1_clear_mask                0xF7

#define PSS2AC1                                  0x3
#define PSS2AC1_address                          0xFBA
#define PSS2AC1_position                         0x3
#define PSS2AC1_size                             0x1
#define PSS2AC1_value_mask                       0x8
#define PSS2AC1_clear_mask                       0xF7

#define ECCP2AS_ECCPAS                           0x4
#define ECCP2AS_ECCPAS_address                   0xFBA
#define ECCP2AS_ECCPAS_position                  0x4
#define ECCP2AS_ECCPAS_size                      0x3
#define ECCP2AS_ECCPAS_value_mask                0x70
#define ECCP2AS_ECCPAS_clear_mask                0x8F

#define ECCP2AS0                                 0x4
#define ECCP2AS0_address                         0xFBA
#define ECCP2AS0_position                        0x4
#define ECCP2AS0_size                            0x1
#define ECCP2AS0_value_mask                      0x10
#define ECCP2AS0_clear_mask                      0xEF

#define ECCP2AS_ECCPAS0                          0x4
#define ECCP2AS_ECCPAS0_address                  0xFBA
#define ECCP2AS_ECCPAS0_position                 0x4
#define ECCP2AS_ECCPAS0_size                     0x1
#define ECCP2AS_ECCPAS0_value_mask               0x10
#define ECCP2AS_ECCPAS0_clear_mask               0xEF

#define ECCP2AS1                                 0x5
#define ECCP2AS1_address                         0xFBA
#define ECCP2AS1_position                        0x5
#define ECCP2AS1_size                            0x1
#define ECCP2AS1_value_mask                      0x20
#define ECCP2AS1_clear_mask                      0xDF

#define ECCP2AS_ECCPAS1                          0x5
#define ECCP2AS_ECCPAS1_address                  0xFBA
#define ECCP2AS_ECCPAS1_position                 0x5
#define ECCP2AS_ECCPAS1_size                     0x1
#define ECCP2AS_ECCPAS1_value_mask               0x20
#define ECCP2AS_ECCPAS1_clear_mask               0xDF

#define ECCP2AS2                                 0x6
#define ECCP2AS2_address                         0xFBA
#define ECCP2AS2_position                        0x6
#define ECCP2AS2_size                            0x1
#define ECCP2AS2_value_mask                      0x40
#define ECCP2AS2_clear_mask                      0xBF

#define ECCP2AS_ECCPAS2                          0x6
#define ECCP2AS_ECCPAS2_address                  0xFBA
#define ECCP2AS_ECCPAS2_position                 0x6
#define ECCP2AS_ECCPAS2_size                     0x1
#define ECCP2AS_ECCPAS2_value_mask               0x40
#define ECCP2AS_ECCPAS2_clear_mask               0xBF

#define ECCP2AS_ECCPASE                          0x7
#define ECCP2AS_ECCPASE_address                  0xFBA
#define ECCP2AS_ECCPASE_position                 0x7
#define ECCP2AS_ECCPASE_size                     0x1
#define ECCP2AS_ECCPASE_value_mask               0x80
#define ECCP2AS_ECCPASE_clear_mask               0x7F

#define ECCP2ASE                                 0x7
#define ECCP2ASE_address                         0xFBA
#define ECCP2ASE_position                        0x7
#define ECCP2ASE_size                            0x1
#define ECCP2ASE_value_mask                      0x80
#define ECCP2ASE_clear_mask                      0x7F


/*----------------------------------------------------------------#
| ECCP1CON                                                  0xFBB |
#-----------------------------------------------------------------#
| P1M1 | P1M0 | CCP1X | CCP1Y | CCP1M3 | CCP1M2 | CCP1M1 | CCP1M0 |
#-----------------------------------------------------------------#
| 7    | 6    | 5     | 4     | 3      | 2      | 1      | 0      |
#----------------------------------------------------------------*/

#define ECCP1CON                                 0x0
#define ECCP1CON_address                         0xFBB
#define ECCP1CON_position                        0x0
#define ECCP1CON_size                            0x8
#define ECCP1CON_value_mask                      0xFF
#define ECCP1CON_clear_mask                      0x0

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

#define P1DC0                                    0x0
#define P1DC0_address                            0xFBE
#define P1DC0_position                           0x0
#define P1DC0_size                               0x1
#define P1DC0_value_mask                         0x1
#define P1DC0_clear_mask                         0xFE

#define ECCP1DEL_PDC0                            0x0
#define ECCP1DEL_PDC0_address                    0xFBE
#define ECCP1DEL_PDC0_position                   0x0
#define ECCP1DEL_PDC0_size                       0x1
#define ECCP1DEL_PDC0_value_mask                 0x1
#define ECCP1DEL_PDC0_clear_mask                 0xFE

#define ECCP1DEL_PDC                             0x0
#define ECCP1DEL_PDC_address                     0xFBE
#define ECCP1DEL_PDC_position                    0x0
#define ECCP1DEL_PDC_size                        0x7
#define ECCP1DEL_PDC_value_mask                  0x7F
#define ECCP1DEL_PDC_clear_mask                  0x80

#define P1DC1                                    0x1
#define P1DC1_address                            0xFBE
#define P1DC1_position                           0x1
#define P1DC1_size                               0x1
#define P1DC1_value_mask                         0x2
#define P1DC1_clear_mask                         0xFD

#define ECCP1DEL_PDC1                            0x1
#define ECCP1DEL_PDC1_address                    0xFBE
#define ECCP1DEL_PDC1_position                   0x1
#define ECCP1DEL_PDC1_size                       0x1
#define ECCP1DEL_PDC1_value_mask                 0x2
#define ECCP1DEL_PDC1_clear_mask                 0xFD

#define P1DC2                                    0x2
#define P1DC2_address                            0xFBE
#define P1DC2_position                           0x2
#define P1DC2_size                               0x1
#define P1DC2_value_mask                         0x4
#define P1DC2_clear_mask                         0xFB

#define ECCP1DEL_PDC2                            0x2
#define ECCP1DEL_PDC2_address                    0xFBE
#define ECCP1DEL_PDC2_position                   0x2
#define ECCP1DEL_PDC2_size                       0x1
#define ECCP1DEL_PDC2_value_mask                 0x4
#define ECCP1DEL_PDC2_clear_mask                 0xFB

#define P1DC3                                    0x3
#define P1DC3_address                            0xFBE
#define P1DC3_position                           0x3
#define P1DC3_size                               0x1
#define P1DC3_value_mask                         0x8
#define P1DC3_clear_mask                         0xF7

#define ECCP1DEL_PDC3                            0x3
#define ECCP1DEL_PDC3_address                    0xFBE
#define ECCP1DEL_PDC3_position                   0x3
#define ECCP1DEL_PDC3_size                       0x1
#define ECCP1DEL_PDC3_value_mask                 0x8
#define ECCP1DEL_PDC3_clear_mask                 0xF7

#define P1DC4                                    0x4
#define P1DC4_address                            0xFBE
#define P1DC4_position                           0x4
#define P1DC4_size                               0x1
#define P1DC4_value_mask                         0x10
#define P1DC4_clear_mask                         0xEF

#define ECCP1DEL_PDC4                            0x4
#define ECCP1DEL_PDC4_address                    0xFBE
#define ECCP1DEL_PDC4_position                   0x4
#define ECCP1DEL_PDC4_size                       0x1
#define ECCP1DEL_PDC4_value_mask                 0x10
#define ECCP1DEL_PDC4_clear_mask                 0xEF

#define P1DC5                                    0x5
#define P1DC5_address                            0xFBE
#define P1DC5_position                           0x5
#define P1DC5_size                               0x1
#define P1DC5_value_mask                         0x20
#define P1DC5_clear_mask                         0xDF

#define ECCP1DEL_PDC5                            0x5
#define ECCP1DEL_PDC5_address                    0xFBE
#define ECCP1DEL_PDC5_position                   0x5
#define ECCP1DEL_PDC5_size                       0x1
#define ECCP1DEL_PDC5_value_mask                 0x20
#define ECCP1DEL_PDC5_clear_mask                 0xDF

#define P1DC6                                    0x6
#define P1DC6_address                            0xFBE
#define P1DC6_position                           0x6
#define P1DC6_size                               0x1
#define P1DC6_value_mask                         0x40
#define P1DC6_clear_mask                         0xBF

#define ECCP1DEL_PDC6                            0x6
#define ECCP1DEL_PDC6_address                    0xFBE
#define ECCP1DEL_PDC6_position                   0x6
#define ECCP1DEL_PDC6_size                       0x1
#define ECCP1DEL_PDC6_value_mask                 0x40
#define ECCP1DEL_PDC6_clear_mask                 0xBF

#define P1RSEN                                   0x7
#define P1RSEN_address                           0xFBE
#define P1RSEN_position                          0x7
#define P1RSEN_size                              0x1
#define P1RSEN_value_mask                        0x80
#define P1RSEN_clear_mask                        0x7F

#define ECCP1DEL_PRSEN                           0x7
#define ECCP1DEL_PRSEN_address                   0xFBE
#define ECCP1DEL_PRSEN_position                  0x7
#define ECCP1DEL_PRSEN_size                      0x1
#define ECCP1DEL_PRSEN_value_mask                0x80
#define ECCP1DEL_PRSEN_clear_mask                0x7F


/*-------------------------------------------------------------------------------------------------------#
| ECCP1AS                                                                                          0xFBF |
#--------------------------------------------------------------------------------------------------------#
| ECCP1ASE | ECCP1AS_ECCPAS2 | ECCP1AS_ECCPAS1 | ECCP1AS_ECCPAS0 | PSS1AC1 | PSS1AC0 | PSS1BD1 | PSS1BD0 |
#--------------------------------------------------------------------------------------------------------#
| 7        | 6               | 5               | 4               | 3       | 2       | 1       | 0       |
#-------------------------------------------------------------------------------------------------------*/

#define ECCP1AS                                  0x0
#define ECCP1AS_address                          0xFBF
#define ECCP1AS_position                         0x0
#define ECCP1AS_size                             0x8
#define ECCP1AS_value_mask                       0xFF
#define ECCP1AS_clear_mask                       0x0

#define ECCP1AS_PSSBD                            0x0
#define ECCP1AS_PSSBD_address                    0xFBF
#define ECCP1AS_PSSBD_position                   0x0
#define ECCP1AS_PSSBD_size                       0x2
#define ECCP1AS_PSSBD_value_mask                 0x3
#define ECCP1AS_PSSBD_clear_mask                 0xFC

#define ECCP1AS_PSSBD0                           0x0
#define ECCP1AS_PSSBD0_address                   0xFBF
#define ECCP1AS_PSSBD0_position                  0x0
#define ECCP1AS_PSSBD0_size                      0x1
#define ECCP1AS_PSSBD0_value_mask                0x1
#define ECCP1AS_PSSBD0_clear_mask                0xFE

#define PSS1BD0                                  0x0
#define PSS1BD0_address                          0xFBF
#define PSS1BD0_position                         0x0
#define PSS1BD0_size                             0x1
#define PSS1BD0_value_mask                       0x1
#define PSS1BD0_clear_mask                       0xFE

#define ECCP1AS_PSSBD1                           0x1
#define ECCP1AS_PSSBD1_address                   0xFBF
#define ECCP1AS_PSSBD1_position                  0x1
#define ECCP1AS_PSSBD1_size                      0x1
#define ECCP1AS_PSSBD1_value_mask                0x2
#define ECCP1AS_PSSBD1_clear_mask                0xFD

#define PSS1BD1                                  0x1
#define PSS1BD1_address                          0xFBF
#define PSS1BD1_position                         0x1
#define PSS1BD1_size                             0x1
#define PSS1BD1_value_mask                       0x2
#define PSS1BD1_clear_mask                       0xFD

#define ECCP1AS_PSSAC0                           0x2
#define ECCP1AS_PSSAC0_address                   0xFBF
#define ECCP1AS_PSSAC0_position                  0x2
#define ECCP1AS_PSSAC0_size                      0x1
#define ECCP1AS_PSSAC0_value_mask                0x4
#define ECCP1AS_PSSAC0_clear_mask                0xFB

#define PSS1AC0                                  0x2
#define PSS1AC0_address                          0xFBF
#define PSS1AC0_position                         0x2
#define PSS1AC0_size                             0x1
#define PSS1AC0_value_mask                       0x4
#define PSS1AC0_clear_mask                       0xFB

#define ECCP1AS_PSSAC                            0x2
#define ECCP1AS_PSSAC_address                    0xFBF
#define ECCP1AS_PSSAC_position                   0x2
#define ECCP1AS_PSSAC_size                       0x2
#define ECCP1AS_PSSAC_value_mask                 0xC
#define ECCP1AS_PSSAC_clear_mask                 0xF3

#define ECCP1AS_PSSAC1                           0x3
#define ECCP1AS_PSSAC1_address                   0xFBF
#define ECCP1AS_PSSAC1_position                  0x3
#define ECCP1AS_PSSAC1_size                      0x1
#define ECCP1AS_PSSAC1_value_mask                0x8
#define ECCP1AS_PSSAC1_clear_mask                0xF7

#define PSS1AC1                                  0x3
#define PSS1AC1_address                          0xFBF
#define PSS1AC1_position                         0x3
#define PSS1AC1_size                             0x1
#define PSS1AC1_value_mask                       0x8
#define PSS1AC1_clear_mask                       0xF7

#define ECCP1AS_ECCPAS0                          0x4
#define ECCP1AS_ECCPAS0_address                  0xFBF
#define ECCP1AS_ECCPAS0_position                 0x4
#define ECCP1AS_ECCPAS0_size                     0x1
#define ECCP1AS_ECCPAS0_value_mask               0x10
#define ECCP1AS_ECCPAS0_clear_mask               0xEF

#define ECCP1AS_ECCPAS                           0x4
#define ECCP1AS_ECCPAS_address                   0xFBF
#define ECCP1AS_ECCPAS_position                  0x4
#define ECCP1AS_ECCPAS_size                      0x3
#define ECCP1AS_ECCPAS_value_mask                0x70
#define ECCP1AS_ECCPAS_clear_mask                0x8F

#define ECCP1AS0                                 0x4
#define ECCP1AS0_address                         0xFBF
#define ECCP1AS0_position                        0x4
#define ECCP1AS0_size                            0x1
#define ECCP1AS0_value_mask                      0x10
#define ECCP1AS0_clear_mask                      0xEF

#define ECCP1AS_ECCPAS1                          0x5
#define ECCP1AS_ECCPAS1_address                  0xFBF
#define ECCP1AS_ECCPAS1_position                 0x5
#define ECCP1AS_ECCPAS1_size                     0x1
#define ECCP1AS_ECCPAS1_value_mask               0x20
#define ECCP1AS_ECCPAS1_clear_mask               0xDF

#define ECCP1AS1                                 0x5
#define ECCP1AS1_address                         0xFBF
#define ECCP1AS1_position                        0x5
#define ECCP1AS1_size                            0x1
#define ECCP1AS1_value_mask                      0x20
#define ECCP1AS1_clear_mask                      0xDF

#define ECCP1AS_ECCPAS2                          0x6
#define ECCP1AS_ECCPAS2_address                  0xFBF
#define ECCP1AS_ECCPAS2_position                 0x6
#define ECCP1AS_ECCPAS2_size                     0x1
#define ECCP1AS_ECCPAS2_value_mask               0x40
#define ECCP1AS_ECCPAS2_clear_mask               0xBF

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

#define ECCP1AS_ECCPASE                          0x7
#define ECCP1AS_ECCPASE_address                  0xFBF
#define ECCP1AS_ECCPASE_position                 0x7
#define ECCP1AS_ECCPASE_size                     0x1
#define ECCP1AS_ECCPASE_value_mask               0x80
#define ECCP1AS_ECCPASE_clear_mask               0x7F


/*--------------------------------------------------#
| WDTCON                                      0xFC0 |
#---------------------------------------------------#
| REGSLP | LVDSTAT | - | ADSHR | - | - | - | SWDTEN |
#---------------------------------------------------#
| 7      | 6       | 5 | 4     | 3 | 2 | 1 | 0      |
#--------------------------------------------------*/

#define WDTCON                                   0x0
#define WDTCON_address                           0xFC0
#define WDTCON_position                          0x0
#define WDTCON_size                              0x8
#define WDTCON_value_mask                        0xFF
#define WDTCON_clear_mask                        0x0

#define SWDTEN                                   0x0
#define SWDTEN_address                           0xFC0
#define SWDTEN_position                          0x0
#define SWDTEN_size                              0x1
#define SWDTEN_value_mask                        0x1
#define SWDTEN_clear_mask                        0xFE

#define SWDTE                                    0x0
#define SWDTE_address                            0xFC0
#define SWDTE_position                           0x0
#define SWDTE_size                               0x1
#define SWDTE_value_mask                         0x1
#define SWDTE_clear_mask                         0xFE

#define ADSHR                                    0x4
#define ADSHR_address                            0xFC0
#define ADSHR_position                           0x4
#define ADSHR_size                               0x1
#define ADSHR_value_mask                         0x10
#define ADSHR_clear_mask                         0xEF

#define DEVCFG                                   0x4
#define DEVCFG_address                           0xFC0
#define DEVCFG_position                          0x4
#define DEVCFG_size                              0x1
#define DEVCFG_value_mask                        0x10
#define DEVCFG_clear_mask                        0xEF

#define LVDSTAT                                  0x6
#define LVDSTAT_address                          0xFC0
#define LVDSTAT_position                         0x6
#define LVDSTAT_size                             0x1
#define LVDSTAT_value_mask                       0x40
#define LVDSTAT_clear_mask                       0xBF

#define REGSLP                                   0x7
#define REGSLP_address                           0xFC0
#define REGSLP_position                          0x7
#define REGSLP_size                              0x1
#define REGSLP_value_mask                        0x80
#define REGSLP_clear_mask                        0x7F


/*--------------------------------------------------------------#
| ANCON0                                                  0xFC1 |
#---------------------------------------------------------------#
| PCFG7 | PCFG6 | PCFG5 | PCFG4 | PCFG3 | PCFG2 | PCFG1 | PCFG0 |
#---------------------------------------------------------------#
| 7     | 6     | 5     | 4     | 3     | 2     | 1     | 0     |
#--------------------------------------------------------------*/

#define ANCON0                                   0x0
#define ANCON0_address                           0xFC1
#define ANCON0_position                          0x0
#define ANCON0_size                              0x8
#define ANCON0_value_mask                        0xFF
#define ANCON0_clear_mask                        0x0

#define PCFGL                                    0x0
#define PCFGL_address                            0xFC1
#define PCFGL_position                           0x0
#define PCFGL_size                               0x8
#define PCFGL_value_mask                         0xFF
#define PCFGL_clear_mask                         0x0

#define PCFG0                                    0x0
#define PCFG0_address                            0xFC1
#define PCFG0_position                           0x0
#define PCFG0_size                               0x1
#define PCFG0_value_mask                         0x1
#define PCFG0_clear_mask                         0xFE

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

#define PCFG3                                    0x3
#define PCFG3_address                            0xFC1
#define PCFG3_position                           0x3
#define PCFG3_size                               0x1
#define PCFG3_value_mask                         0x8
#define PCFG3_clear_mask                         0xF7

#define PCFG4                                    0x4
#define PCFG4_address                            0xFC1
#define PCFG4_position                           0x4
#define PCFG4_size                               0x1
#define PCFG4_value_mask                         0x10
#define PCFG4_clear_mask                         0xEF

#define PCFG5                                    0x5
#define PCFG5_address                            0xFC1
#define PCFG5_position                           0x5
#define PCFG5_size                               0x1
#define PCFG5_value_mask                         0x20
#define PCFG5_clear_mask                         0xDF

#define PCFG6                                    0x6
#define PCFG6_address                            0xFC1
#define PCFG6_position                           0x6
#define PCFG6_size                               0x1
#define PCFG6_value_mask                         0x40
#define PCFG6_clear_mask                         0xBF

#define PCFG7                                    0x7
#define PCFG7_address                            0xFC1
#define PCFG7_position                           0x7
#define PCFG7_size                               0x1
#define PCFG7_value_mask                         0x80
#define PCFG7_clear_mask                         0x7F


/*--------------------------------------------------------------------#
| ADCON1                                                        0xFC1 |
#---------------------------------------------------------------------#
| ADFM | ADCON1_ADCAL | ACQT2 | ACQT1 | ACQT0 | ADCS2 | ADCS1 | ADCS0 |
#---------------------------------------------------------------------#
| 7    | 6            | 5     | 4     | 3     | 2     | 1     | 0     |
#--------------------------------------------------------------------*/

#define ADCON1                                   0x0
#define ADCON1_address                           0xFC1
#define ADCON1_position                          0x0
#define ADCON1_size                              0x8
#define ADCON1_value_mask                        0xFF
#define ADCON1_clear_mask                        0x0

#define ADCS0                                    0x0
#define ADCS0_address                            0xFC1
#define ADCS0_position                           0x0
#define ADCS0_size                               0x1
#define ADCS0_value_mask                         0x1
#define ADCS0_clear_mask                         0xFE

#define ADCS                                     0x0
#define ADCS_address                             0xFC1
#define ADCS_position                            0x0
#define ADCS_size                                0x3
#define ADCS_value_mask                          0x7
#define ADCS_clear_mask                          0xF8

#define ADCS1                                    0x1
#define ADCS1_address                            0xFC1
#define ADCS1_position                           0x1
#define ADCS1_size                               0x1
#define ADCS1_value_mask                         0x2
#define ADCS1_clear_mask                         0xFD

#define ADCS2                                    0x2
#define ADCS2_address                            0xFC1
#define ADCS2_position                           0x2
#define ADCS2_size                               0x1
#define ADCS2_value_mask                         0x4
#define ADCS2_clear_mask                         0xFB

#define ACQT0                                    0x3
#define ACQT0_address                            0xFC1
#define ACQT0_position                           0x3
#define ACQT0_size                               0x1
#define ACQT0_value_mask                         0x8
#define ACQT0_clear_mask                         0xF7

#define ACQT                                     0x3
#define ACQT_address                             0xFC1
#define ACQT_position                            0x3
#define ACQT_size                                0x3
#define ACQT_value_mask                          0x38
#define ACQT_clear_mask                          0xC7

#define CHSN3                                    0x3
#define CHSN3_address                            0xFC1
#define CHSN3_position                           0x3
#define CHSN3_size                               0x1
#define CHSN3_value_mask                         0x8
#define CHSN3_clear_mask                         0xF7

#define ACQT1                                    0x4
#define ACQT1_address                            0xFC1
#define ACQT1_position                           0x4
#define ACQT1_size                               0x1
#define ACQT1_value_mask                         0x10
#define ACQT1_clear_mask                         0xEF

#define VCFG01                                   0x4
#define VCFG01_address                           0xFC1
#define VCFG01_position                          0x4
#define VCFG01_size                              0x1
#define VCFG01_value_mask                        0x10
#define VCFG01_clear_mask                        0xEF

#define ACQT2                                    0x5
#define ACQT2_address                            0xFC1
#define ACQT2_position                           0x5
#define ACQT2_size                               0x1
#define ACQT2_value_mask                         0x20
#define ACQT2_clear_mask                         0xDF

#define VCFG11                                   0x5
#define VCFG11_address                           0xFC1
#define VCFG11_position                          0x5
#define VCFG11_size                              0x1
#define VCFG11_value_mask                        0x20
#define VCFG11_clear_mask                        0xDF

#define ADCON1_ADCAL                             0x6
#define ADCON1_ADCAL_address                     0xFC1
#define ADCON1_ADCAL_position                    0x6
#define ADCON1_ADCAL_size                        0x1
#define ADCON1_ADCAL_value_mask                  0x40
#define ADCON1_ADCAL_clear_mask                  0xBF

#define ADFM                                     0x7
#define ADFM_address                             0xFC1
#define ADFM_position                            0x7
#define ADFM_size                                0x1
#define ADFM_value_mask                          0x80
#define ADFM_clear_mask                          0x7F


/*--------------------------------------------------------------------#
| ANCON1                                                        0xFC2 |
#---------------------------------------------------------------------#
| PCFG15 | PCFG14 | PCFG13 | PCFG12 | PCFG11 | PCFG10 | PCFG9 | PCFG8 |
#---------------------------------------------------------------------#
| 7      | 6      | 5      | 4      | 3      | 2      | 1     | 0     |
#--------------------------------------------------------------------*/

#define ANCON1                                   0x0
#define ANCON1_address                           0xFC2
#define ANCON1_position                          0x0
#define ANCON1_size                              0x8
#define ANCON1_value_mask                        0xFF
#define ANCON1_clear_mask                        0x0

#define PCFGH                                    0x0
#define PCFGH_address                            0xFC2
#define PCFGH_position                           0x0
#define PCFGH_size                               0x8
#define PCFGH_value_mask                         0xFF
#define PCFGH_clear_mask                         0x0

#define PCFG8                                    0x0
#define PCFG8_address                            0xFC2
#define PCFG8_position                           0x0
#define PCFG8_size                               0x1
#define PCFG8_value_mask                         0x1
#define PCFG8_clear_mask                         0xFE

#define PCFG9                                    0x1
#define PCFG9_address                            0xFC2
#define PCFG9_position                           0x1
#define PCFG9_size                               0x1
#define PCFG9_value_mask                         0x2
#define PCFG9_clear_mask                         0xFD

#define PCFG10                                   0x2
#define PCFG10_address                           0xFC2
#define PCFG10_position                          0x2
#define PCFG10_size                              0x1
#define PCFG10_value_mask                        0x4
#define PCFG10_clear_mask                        0xFB

#define PCFG11                                   0x3
#define PCFG11_address                           0xFC2
#define PCFG11_position                          0x3
#define PCFG11_size                              0x1
#define PCFG11_value_mask                        0x8
#define PCFG11_clear_mask                        0xF7

#define PCFG12                                   0x4
#define PCFG12_address                           0xFC2
#define PCFG12_position                          0x4
#define PCFG12_size                              0x1
#define PCFG12_value_mask                        0x10
#define PCFG12_clear_mask                        0xEF

#define PCFG13                                   0x5
#define PCFG13_address                           0xFC2
#define PCFG13_position                          0x5
#define PCFG13_size                              0x1
#define PCFG13_value_mask                        0x20
#define PCFG13_clear_mask                        0xDF

#define PCFG14                                   0x6
#define PCFG14_address                           0xFC2
#define PCFG14_position                          0x6
#define PCFG14_size                              0x1
#define PCFG14_value_mask                        0x40
#define PCFG14_clear_mask                        0xBF

#define PCFG15                                   0x7
#define PCFG15_address                           0xFC2
#define PCFG15_position                          0x7
#define PCFG15_size                              0x1
#define PCFG15_value_mask                        0x80
#define PCFG15_clear_mask                        0x7F


/*------------------------------------------------------------#
| ADCON0                                                0xFC2 |
#-------------------------------------------------------------#
| VCFG1 | VCFG0 | CHS3 | CHS2 | CHS1 | CHS0 | GO_nDONE | ADON |
#-------------------------------------------------------------#
| 7     | 6     | 5    | 4    | 3    | 2    | 1        | 0    |
#------------------------------------------------------------*/

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

#define CHS                                      0x2
#define CHS_address                              0xFC2
#define CHS_position                             0x2
#define CHS_size                                 0x4
#define CHS_value_mask                           0x3C
#define CHS_clear_mask                           0xC3

#define CHS0                                     0x2
#define CHS0_address                             0xFC2
#define CHS0_position                            0x2
#define CHS0_size                                0x1
#define CHS0_value_mask                          0x4
#define CHS0_clear_mask                          0xFB

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

#define VCFG                                     0x6
#define VCFG_address                             0xFC2
#define VCFG_position                            0x6
#define VCFG_size                                0x2
#define VCFG_value_mask                          0xC0
#define VCFG_clear_mask                          0x3F

#define VCFG0                                    0x6
#define VCFG0_address                            0xFC2
#define VCFG0_position                           0x6
#define VCFG0_size                               0x1
#define VCFG0_value_mask                         0x40
#define VCFG0_clear_mask                         0xBF

#define VCFG1                                    0x7
#define VCFG1_address                            0xFC2
#define VCFG1_position                           0x7
#define VCFG1_size                               0x1
#define VCFG1_value_mask                         0x80
#define VCFG1_clear_mask                         0x7F

#define ADCON0_ADCAL                             0x7
#define ADCON0_ADCAL_address                     0xFC2
#define ADCON0_ADCAL_position                    0x7
#define ADCON0_ADCAL_size                        0x1
#define ADCON0_ADCAL_value_mask                  0x80
#define ADCON0_ADCAL_clear_mask                  0x7F


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

#define START1                                   0x3
#define START1_address                           0xFC7
#define START1_position                          0x3
#define START1_size                              0x1
#define START1_value_mask                        0x8
#define START1_clear_mask                        0xF7

#define SSP1STAT_I2C_START                       0x3
#define SSP1STAT_I2C_START_address               0xFC7
#define SSP1STAT_I2C_START_position              0x3
#define SSP1STAT_I2C_START_size                  0x1
#define SSP1STAT_I2C_START_value_mask            0x8
#define SSP1STAT_I2C_START_clear_mask            0xF7

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

#define SSP1STAT_nADDRESS                        0x5
#define SSP1STAT_nADDRESS_address                0xFC7
#define SSP1STAT_nADDRESS_position               0x5
#define SSP1STAT_nADDRESS_size                   0x1
#define SSP1STAT_nADDRESS_value_mask             0x20
#define SSP1STAT_nADDRESS_clear_mask             0xDF

#define SSP1STAT_I2C_DAT                         0x5
#define SSP1STAT_I2C_DAT_address                 0xFC7
#define SSP1STAT_I2C_DAT_position                0x5
#define SSP1STAT_I2C_DAT_size                    0x1
#define SSP1STAT_I2C_DAT_value_mask              0x20
#define SSP1STAT_I2C_DAT_clear_mask              0xDF

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

#define SSP1ADD_MSK6                             0x6
#define SSP1ADD_MSK6_address                     0xFC8
#define SSP1ADD_MSK6_position                    0x6
#define SSP1ADD_MSK6_size                        0x1
#define SSP1ADD_MSK6_value_mask                  0x40
#define SSP1ADD_MSK6_clear_mask                  0xBF

#define MSK61                                    0x6
#define MSK61_address                            0xFC8
#define MSK61_position                           0x6
#define MSK61_size                               0x1
#define MSK61_value_mask                         0x40
#define MSK61_clear_mask                         0xBF

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


/*----------------------------------------------------------------------------------------------------------------------#
| SSP1MSK                                                                                                         0xFC8 |
#-----------------------------------------------------------------------------------------------------------------------#
| SSP1MSK_MSK7 | SSP1MSK_MSK6 | SSP1MSK_MSK5 | SSP1MSK_MSK4 | SSP1MSK_MSK3 | SSP1MSK_MSK2 | SSP1MSK_MSK1 | SSP1MSK_MSK0 |
#-----------------------------------------------------------------------------------------------------------------------#
| 7            | 6            | 5            | 4            | 3            | 2            | 1            | 0            |
#----------------------------------------------------------------------------------------------------------------------*/

#define SSP1MSK                                  0x0
#define SSP1MSK_address                          0xFC8
#define SSP1MSK_position                         0x0
#define SSP1MSK_size                             0x8
#define SSP1MSK_value_mask                       0xFF
#define SSP1MSK_clear_mask                       0x0

#define SSP1MSK_MSK0                             0x0
#define SSP1MSK_MSK0_address                     0xFC8
#define SSP1MSK_MSK0_position                    0x0
#define SSP1MSK_MSK0_size                        0x1
#define SSP1MSK_MSK0_value_mask                  0x1
#define SSP1MSK_MSK0_clear_mask                  0xFE

#define SSP1MSK_MSK1                             0x1
#define SSP1MSK_MSK1_address                     0xFC8
#define SSP1MSK_MSK1_position                    0x1
#define SSP1MSK_MSK1_size                        0x1
#define SSP1MSK_MSK1_value_mask                  0x2
#define SSP1MSK_MSK1_clear_mask                  0xFD

#define SSP1MSK_MSK2                             0x2
#define SSP1MSK_MSK2_address                     0xFC8
#define SSP1MSK_MSK2_position                    0x2
#define SSP1MSK_MSK2_size                        0x1
#define SSP1MSK_MSK2_value_mask                  0x4
#define SSP1MSK_MSK2_clear_mask                  0xFB

#define SSP1MSK_MSK3                             0x3
#define SSP1MSK_MSK3_address                     0xFC8
#define SSP1MSK_MSK3_position                    0x3
#define SSP1MSK_MSK3_size                        0x1
#define SSP1MSK_MSK3_value_mask                  0x8
#define SSP1MSK_MSK3_clear_mask                  0xF7

#define SSP1MSK_MSK4                             0x4
#define SSP1MSK_MSK4_address                     0xFC8
#define SSP1MSK_MSK4_position                    0x4
#define SSP1MSK_MSK4_size                        0x1
#define SSP1MSK_MSK4_value_mask                  0x10
#define SSP1MSK_MSK4_clear_mask                  0xEF

#define SSP1MSK_MSK5                             0x5
#define SSP1MSK_MSK5_address                     0xFC8
#define SSP1MSK_MSK5_position                    0x5
#define SSP1MSK_MSK5_size                        0x1
#define SSP1MSK_MSK5_value_mask                  0x20
#define SSP1MSK_MSK5_clear_mask                  0xDF

#define SSP1MSK_MSK6                             0x6
#define SSP1MSK_MSK6_address                     0xFC8
#define SSP1MSK_MSK6_position                    0x6
#define SSP1MSK_MSK6_size                        0x1
#define SSP1MSK_MSK6_value_mask                  0x40
#define SSP1MSK_MSK6_clear_mask                  0xBF

#define SSP1MSK_MSK7                             0x7
#define SSP1MSK_MSK7_address                     0xFC8
#define SSP1MSK_MSK7_position                    0x7
#define SSP1MSK_MSK7_size                        0x1
#define SSP1MSK_MSK7_value_mask                  0x80
#define SSP1MSK_MSK7_clear_mask                  0x7F


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


/*----------------------------------#
| PADCFG1                     0xFCC |
#-----------------------------------#
| - | - | - | - | - | - | - | PMPTL |
#-----------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0     |
#----------------------------------*/

#define PADCFG1                                  0x0
#define PADCFG1_address                          0xFCC
#define PADCFG1_position                         0x0
#define PADCFG1_size                             0x8
#define PADCFG1_value_mask                       0xFF
#define PADCFG1_clear_mask                       0x0

#define PMPTL                                    0x0
#define PMPTL_address                            0xFCC
#define PMPTL_position                           0x0
#define PMPTL_size                               0x1
#define PMPTL_value_mask                         0x1
#define PMPTL_clear_mask                         0xFE

#define PMPTTL                                   0x0
#define PMPTTL_address                           0xFCC
#define PMPTTL_position                          0x0
#define PMPTTL_size                              0x1
#define PMPTTL_value_mask                        0x1
#define PMPTTL_clear_mask                        0xFE


/*----------------------------------------#
| ODCON3                            0xFCD |
#-----------------------------------------#
| - | - | - | - | - | - | SPI2OD | SPI1OD |
#-----------------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1      | 0      |
#----------------------------------------*/

#define ODCON3                                   0x0
#define ODCON3_address                           0xFCD
#define ODCON3_position                          0x0
#define ODCON3_size                              0x8
#define ODCON3_value_mask                        0xFF
#define ODCON3_clear_mask                        0x0

#define SPI1OD                                   0x0
#define SPI1OD_address                           0xFCD
#define SPI1OD_position                          0x0
#define SPI1OD_size                              0x1
#define SPI1OD_value_mask                        0x1
#define SPI1OD_clear_mask                        0xFE

#define SPI2OD                                   0x1
#define SPI2OD_address                           0xFCD
#define SPI2OD_position                          0x1
#define SPI2OD_size                              0x1
#define SPI2OD_value_mask                        0x2
#define SPI2OD_clear_mask                        0xFD


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


/*----------------------------------------#
| ODCON2                            0xFCE |
#-----------------------------------------#
| - | - | - | - | - | - | U2OD | USART1OD |
#-----------------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1    | 0        |
#----------------------------------------*/

#define ODCON2                                   0x0
#define ODCON2_address                           0xFCE
#define ODCON2_position                          0x0
#define ODCON2_size                              0x8
#define ODCON2_value_mask                        0xFF
#define ODCON2_clear_mask                        0x0

#define USART1OD                                 0x0
#define USART1OD_address                         0xFCE
#define USART1OD_position                        0x0
#define USART1OD_size                            0x1
#define USART1OD_value_mask                      0x1
#define USART1OD_clear_mask                      0xFE

#define U1OD                                     0x0
#define U1OD_address                             0xFCE
#define U1OD_position                            0x0
#define U1OD_size                                0x1
#define U1OD_value_mask                          0x1
#define U1OD_clear_mask                          0xFE

#define U2OD                                     0x1
#define U2OD_address                             0xFCE
#define U2OD_position                            0x1
#define U2OD_size                                0x1
#define U2OD_value_mask                          0x2
#define U2OD_clear_mask                          0xFD

#define USART2OD                                 0x1
#define USART2OD_address                         0xFCE
#define USART2OD_position                        0x1
#define USART2OD_size                            0x1
#define USART2OD_value_mask                      0x2
#define USART2OD_clear_mask                      0xFD


/*----------------------------------------------------------#
| ODCON1                                              0xFCF |
#-----------------------------------------------------------#
| - | - | - | CCP5OD | CCP4OD | ECCP3OD | ECCP2OD | ECCP1OD |
#-----------------------------------------------------------#
| 7 | 6 | 5 | 4      | 3      | 2       | 1       | 0       |
#----------------------------------------------------------*/

#define ODCON1                                   0x0
#define ODCON1_address                           0xFCF
#define ODCON1_position                          0x0
#define ODCON1_size                              0x8
#define ODCON1_value_mask                        0xFF
#define ODCON1_clear_mask                        0x0

#define ECCP1OD                                  0x0
#define ECCP1OD_address                          0xFCF
#define ECCP1OD_position                         0x0
#define ECCP1OD_size                             0x1
#define ECCP1OD_value_mask                       0x1
#define ECCP1OD_clear_mask                       0xFE

#define ECCP2OD                                  0x1
#define ECCP2OD_address                          0xFCF
#define ECCP2OD_position                         0x1
#define ECCP2OD_size                             0x1
#define ECCP2OD_value_mask                       0x2
#define ECCP2OD_clear_mask                       0xFD

#define ECCP3OD                                  0x2
#define ECCP3OD_address                          0xFCF
#define ECCP3OD_position                         0x2
#define ECCP3OD_size                             0x1
#define ECCP3OD_value_mask                       0x4
#define ECCP3OD_clear_mask                       0xFB

#define CCP4OD                                   0x3
#define CCP4OD_address                           0xFCF
#define CCP4OD_position                          0x3
#define CCP4OD_size                              0x1
#define CCP4OD_value_mask                        0x8
#define CCP4OD_clear_mask                        0xF7

#define CCP5OD                                   0x4
#define CCP5OD_address                           0xFCF
#define CCP5OD_position                          0x4
#define CCP5OD_size                              0x1
#define CCP5OD_value_mask                        0x10
#define CCP5OD_clear_mask                        0xEF


/*--------------------------------------------------#
| RCON                                        0xFD0 |
#---------------------------------------------------#
| IPEN | - | CM | nRI | TO | NOT_PD | POR | NOT_BOR |
#---------------------------------------------------#
| 7    | 6 | 5  | 4   | 3  | 2      | 1   | 0       |
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

#define IPEN                                     0x7
#define IPEN_address                             0xFD0
#define IPEN_position                            0x7
#define IPEN_size                                0x1
#define IPEN_value_mask                          0x80
#define IPEN_clear_mask                          0x7F


/*------------------------------------------------------------------------------#
| CM2CON1                                                                 0xFD1 |
#-------------------------------------------------------------------------------#
| CON2 | COE2 | CPOL2 | CM2CON1_EVPOL1 | EVPOL02 | CM2CON1_CREF | CCH12 | CCH02 |
#-------------------------------------------------------------------------------#
| 7    | 6    | 5     | 4              | 3       | 2            | 1     | 0     |
#------------------------------------------------------------------------------*/

#define CM2CON1                                  0x0
#define CM2CON1_address                          0xFD1
#define CM2CON1_position                         0x0
#define CM2CON1_size                             0x8
#define CM2CON1_value_mask                       0xFF
#define CM2CON1_clear_mask                       0x0

#define CM2CON1_C1CH0                            0x0
#define CM2CON1_C1CH0_address                    0xFD1
#define CM2CON1_C1CH0_position                   0x0
#define CM2CON1_C1CH0_size                       0x1
#define CM2CON1_C1CH0_value_mask                 0x1
#define CM2CON1_C1CH0_clear_mask                 0xFE

#define CM2CON1_CCH                              0x0
#define CM2CON1_CCH_address                      0xFD1
#define CM2CON1_CCH_position                     0x0
#define CM2CON1_CCH_size                         0x2
#define CM2CON1_CCH_value_mask                   0x3
#define CM2CON1_CCH_clear_mask                   0xFC

#define CM2CON1_CCH0                             0x0
#define CM2CON1_CCH0_address                     0xFD1
#define CM2CON1_CCH0_position                    0x0
#define CM2CON1_CCH0_size                        0x1
#define CM2CON1_CCH0_value_mask                  0x1
#define CM2CON1_CCH0_clear_mask                  0xFE

#define CCH02                                    0x0
#define CCH02_address                            0xFD1
#define CCH02_position                           0x0
#define CCH02_size                               0x1
#define CCH02_value_mask                         0x1
#define CCH02_clear_mask                         0xFE

#define CM2CON1_C1CH1                            0x1
#define CM2CON1_C1CH1_address                    0xFD1
#define CM2CON1_C1CH1_position                   0x1
#define CM2CON1_C1CH1_size                       0x1
#define CM2CON1_C1CH1_value_mask                 0x2
#define CM2CON1_C1CH1_clear_mask                 0xFD

#define CCH12                                    0x1
#define CCH12_address                            0xFD1
#define CCH12_position                           0x1
#define CCH12_size                               0x1
#define CCH12_value_mask                         0x2
#define CCH12_clear_mask                         0xFD

#define CM2CON1_CCH1                             0x1
#define CM2CON1_CCH1_address                     0xFD1
#define CM2CON1_CCH1_position                    0x1
#define CM2CON1_CCH1_size                        0x1
#define CM2CON1_CCH1_value_mask                  0x2
#define CM2CON1_CCH1_clear_mask                  0xFD

#define CM2CON1_CREF                             0x2
#define CM2CON1_CREF_address                     0xFD1
#define CM2CON1_CREF_position                    0x2
#define CM2CON1_CREF_size                        0x1
#define CM2CON1_CREF_value_mask                  0x4
#define CM2CON1_CREF_clear_mask                  0xFB

#define CREF2                                    0x2
#define CREF2_address                            0xFD1
#define CREF2_position                           0x2
#define CREF2_size                               0x1
#define CREF2_value_mask                         0x4
#define CREF2_clear_mask                         0xFB

#define EVPOL02                                  0x3
#define EVPOL02_address                          0xFD1
#define EVPOL02_position                         0x3
#define EVPOL02_size                             0x1
#define EVPOL02_value_mask                       0x8
#define EVPOL02_clear_mask                       0xF7

#define CM2CON1_EVPOL0                           0x3
#define CM2CON1_EVPOL0_address                   0xFD1
#define CM2CON1_EVPOL0_position                  0x3
#define CM2CON1_EVPOL0_size                      0x1
#define CM2CON1_EVPOL0_value_mask                0x8
#define CM2CON1_EVPOL0_clear_mask                0xF7

#define CM2CON1_EVPOL                            0x3
#define CM2CON1_EVPOL_address                    0xFD1
#define CM2CON1_EVPOL_position                   0x3
#define CM2CON1_EVPOL_size                       0x2
#define CM2CON1_EVPOL_value_mask                 0x18
#define CM2CON1_EVPOL_clear_mask                 0xE7

#define CM2CON1_EVPOL1                           0x4
#define CM2CON1_EVPOL1_address                   0xFD1
#define CM2CON1_EVPOL1_position                  0x4
#define CM2CON1_EVPOL1_size                      0x1
#define CM2CON1_EVPOL1_value_mask                0x10
#define CM2CON1_EVPOL1_clear_mask                0xEF

#define EVPOL12                                  0x4
#define EVPOL12_address                          0xFD1
#define EVPOL12_position                         0x4
#define EVPOL12_size                             0x1
#define EVPOL12_value_mask                       0x10
#define EVPOL12_clear_mask                       0xEF

#define CM2CON1_CPOL                             0x5
#define CM2CON1_CPOL_address                     0xFD1
#define CM2CON1_CPOL_position                    0x5
#define CM2CON1_CPOL_size                        0x1
#define CM2CON1_CPOL_value_mask                  0x20
#define CM2CON1_CPOL_clear_mask                  0xDF

#define CPOL2                                    0x5
#define CPOL2_address                            0xFD1
#define CPOL2_position                           0x5
#define CPOL2_size                               0x1
#define CPOL2_value_mask                         0x20
#define CPOL2_clear_mask                         0xDF

#define COE2                                     0x6
#define COE2_address                             0xFD1
#define COE2_position                            0x6
#define COE2_size                                0x1
#define COE2_value_mask                          0x40
#define COE2_clear_mask                          0xBF

#define CM2CON1_COE                              0x6
#define CM2CON1_COE_address                      0xFD1
#define CM2CON1_COE_position                     0x6
#define CM2CON1_COE_size                         0x1
#define CM2CON1_COE_value_mask                   0x40
#define CM2CON1_COE_clear_mask                   0xBF

#define CM2CON1_CON                              0x7
#define CM2CON1_CON_address                      0xFD1
#define CM2CON1_CON_position                     0x7
#define CM2CON1_CON_size                         0x1
#define CM2CON1_CON_value_mask                   0x80
#define CM2CON1_CON_clear_mask                   0x7F

#define CON2                                     0x7
#define CON2_address                             0xFD1
#define CON2_position                            0x7
#define CON2_size                                0x1
#define CON2_value_mask                          0x80
#define CON2_clear_mask                          0x7F


/*----------------------------------------------------------------------------------------------------------#
| CM1CON1                                                                                             0xFD2 |
#-----------------------------------------------------------------------------------------------------------#
| CM1CON1_CON | COE1 | CM1CON1_CPOL | CM1CON1_EVPOL1 | EVPOL01 | CM1CON1_CREF | CM1CON1_CCH1 | CM1CON1_CCH0 |
#-----------------------------------------------------------------------------------------------------------#
| 7           | 6    | 5            | 4              | 3       | 2            | 1            | 0            |
#----------------------------------------------------------------------------------------------------------*/

#define CM1CON1                                  0x0
#define CM1CON1_address                          0xFD2
#define CM1CON1_position                         0x0
#define CM1CON1_size                             0x8
#define CM1CON1_value_mask                       0xFF
#define CM1CON1_clear_mask                       0x0

#define CM1CON1_CCH0                             0x0
#define CM1CON1_CCH0_address                     0xFD2
#define CM1CON1_CCH0_position                    0x0
#define CM1CON1_CCH0_size                        0x1
#define CM1CON1_CCH0_value_mask                  0x1
#define CM1CON1_CCH0_clear_mask                  0xFE

#define CM1CON1_CCH                              0x0
#define CM1CON1_CCH_address                      0xFD2
#define CM1CON1_CCH_position                     0x0
#define CM1CON1_CCH_size                         0x2
#define CM1CON1_CCH_value_mask                   0x3
#define CM1CON1_CCH_clear_mask                   0xFC

#define CCH01                                    0x0
#define CCH01_address                            0xFD2
#define CCH01_position                           0x0
#define CCH01_size                               0x1
#define CCH01_value_mask                         0x1
#define CCH01_clear_mask                         0xFE

#define CM1CON1_C1CH0                            0x0
#define CM1CON1_C1CH0_address                    0xFD2
#define CM1CON1_C1CH0_position                   0x0
#define CM1CON1_C1CH0_size                       0x1
#define CM1CON1_C1CH0_value_mask                 0x1
#define CM1CON1_C1CH0_clear_mask                 0xFE

#define CM1CON1_CCH1                             0x1
#define CM1CON1_CCH1_address                     0xFD2
#define CM1CON1_CCH1_position                    0x1
#define CM1CON1_CCH1_size                        0x1
#define CM1CON1_CCH1_value_mask                  0x2
#define CM1CON1_CCH1_clear_mask                  0xFD

#define CCH11                                    0x1
#define CCH11_address                            0xFD2
#define CCH11_position                           0x1
#define CCH11_size                               0x1
#define CCH11_value_mask                         0x2
#define CCH11_clear_mask                         0xFD

#define CM1CON1_C1CH1                            0x1
#define CM1CON1_C1CH1_address                    0xFD2
#define CM1CON1_C1CH1_position                   0x1
#define CM1CON1_C1CH1_size                       0x1
#define CM1CON1_C1CH1_value_mask                 0x2
#define CM1CON1_C1CH1_clear_mask                 0xFD

#define CM1CON1_CREF                             0x2
#define CM1CON1_CREF_address                     0xFD2
#define CM1CON1_CREF_position                    0x2
#define CM1CON1_CREF_size                        0x1
#define CM1CON1_CREF_value_mask                  0x4
#define CM1CON1_CREF_clear_mask                  0xFB

#define CREF1                                    0x2
#define CREF1_address                            0xFD2
#define CREF1_position                           0x2
#define CREF1_size                               0x1
#define CREF1_value_mask                         0x4
#define CREF1_clear_mask                         0xFB

#define EVPOL01                                  0x3
#define EVPOL01_address                          0xFD2
#define EVPOL01_position                         0x3
#define EVPOL01_size                             0x1
#define EVPOL01_value_mask                       0x8
#define EVPOL01_clear_mask                       0xF7

#define CM1CON1_EVPOL                            0x3
#define CM1CON1_EVPOL_address                    0xFD2
#define CM1CON1_EVPOL_position                   0x3
#define CM1CON1_EVPOL_size                       0x2
#define CM1CON1_EVPOL_value_mask                 0x18
#define CM1CON1_EVPOL_clear_mask                 0xE7

#define CM1CON1_EVPOL0                           0x3
#define CM1CON1_EVPOL0_address                   0xFD2
#define CM1CON1_EVPOL0_position                  0x3
#define CM1CON1_EVPOL0_size                      0x1
#define CM1CON1_EVPOL0_value_mask                0x8
#define CM1CON1_EVPOL0_clear_mask                0xF7

#define CM1CON1_EVPOL1                           0x4
#define CM1CON1_EVPOL1_address                   0xFD2
#define CM1CON1_EVPOL1_position                  0x4
#define CM1CON1_EVPOL1_size                      0x1
#define CM1CON1_EVPOL1_value_mask                0x10
#define CM1CON1_EVPOL1_clear_mask                0xEF

#define EVPOL11                                  0x4
#define EVPOL11_address                          0xFD2
#define EVPOL11_position                         0x4
#define EVPOL11_size                             0x1
#define EVPOL11_value_mask                       0x10
#define EVPOL11_clear_mask                       0xEF

#define CM1CON1_CPOL                             0x5
#define CM1CON1_CPOL_address                     0xFD2
#define CM1CON1_CPOL_position                    0x5
#define CM1CON1_CPOL_size                        0x1
#define CM1CON1_CPOL_value_mask                  0x20
#define CM1CON1_CPOL_clear_mask                  0xDF

#define CPOL1                                    0x5
#define CPOL1_address                            0xFD2
#define CPOL1_position                           0x5
#define CPOL1_size                               0x1
#define CPOL1_value_mask                         0x20
#define CPOL1_clear_mask                         0xDF

#define COE1                                     0x6
#define COE1_address                             0xFD2
#define COE1_position                            0x6
#define COE1_size                                0x1
#define COE1_value_mask                          0x40
#define COE1_clear_mask                          0xBF

#define CM1CON1_COE                              0x6
#define CM1CON1_COE_address                      0xFD2
#define CM1CON1_COE_position                     0x6
#define CM1CON1_COE_size                         0x1
#define CM1CON1_COE_value_mask                   0x40
#define CM1CON1_COE_clear_mask                   0xBF

#define CM1CON1_CON                              0x7
#define CM1CON1_CON_address                      0xFD2
#define CM1CON1_CON_position                     0x7
#define CM1CON1_CON_size                         0x1
#define CM1CON1_CON_value_mask                   0x80
#define CM1CON1_CON_clear_mask                   0x7F

#define CON1                                     0x7
#define CON1_address                             0xFD2
#define CON1_position                            0x7
#define CON1_size                                0x1
#define CON1_value_mask                          0x80
#define CON1_clear_mask                          0x7F


/*--------------------------------------------------------------#
| REFOCON                                                 0xFD3 |
#---------------------------------------------------------------#
| ROON | - | ROSSLP | ROSEL | RODIV3 | RODIV2 | RODIV1 | RODIV0 |
#---------------------------------------------------------------#
| 7    | 6 | 5      | 4     | 3      | 2      | 1      | 0      |
#--------------------------------------------------------------*/

#define REFOCON                                  0x0
#define REFOCON_address                          0xFD3
#define REFOCON_position                         0x0
#define REFOCON_size                             0x8
#define REFOCON_value_mask                       0xFF
#define REFOCON_clear_mask                       0x0

#define RODIV0                                   0x0
#define RODIV0_address                           0xFD3
#define RODIV0_position                          0x0
#define RODIV0_size                              0x1
#define RODIV0_value_mask                        0x1
#define RODIV0_clear_mask                        0xFE

#define RODIV                                    0x0
#define RODIV_address                            0xFD3
#define RODIV_position                           0x0
#define RODIV_size                               0x4
#define RODIV_value_mask                         0xF
#define RODIV_clear_mask                         0xF0

#define RODIV1                                   0x1
#define RODIV1_address                           0xFD3
#define RODIV1_position                          0x1
#define RODIV1_size                              0x1
#define RODIV1_value_mask                        0x2
#define RODIV1_clear_mask                        0xFD

#define RODIV2                                   0x2
#define RODIV2_address                           0xFD3
#define RODIV2_position                          0x2
#define RODIV2_size                              0x1
#define RODIV2_value_mask                        0x4
#define RODIV2_clear_mask                        0xFB

#define RODIV3                                   0x3
#define RODIV3_address                           0xFD3
#define RODIV3_position                          0x3
#define RODIV3_size                              0x1
#define RODIV3_value_mask                        0x8
#define RODIV3_clear_mask                        0xF7

#define ROSEL                                    0x4
#define ROSEL_address                            0xFD3
#define ROSEL_position                           0x4
#define ROSEL_size                               0x1
#define ROSEL_value_mask                         0x10
#define ROSEL_clear_mask                         0xEF

#define ROSSLP                                   0x5
#define ROSSLP_address                           0xFD3
#define ROSSLP_position                          0x5
#define ROSSLP_size                              0x1
#define ROSSLP_value_mask                        0x20
#define ROSSLP_clear_mask                        0xDF

#define ROON                                     0x7
#define ROON_address                             0xFD3
#define ROON_position                            0x7
#define ROON_size                                0x1
#define ROON_value_mask                          0x80
#define ROON_clear_mask                          0x7F


/*-------------------------------------------------------#
| OSCCON                                           0xFD3 |
#--------------------------------------------------------#
| IDLEN | IRCF2 | IRCF1 | IRCF0 | OSTS | - | SCS1 | SCS0 |
#--------------------------------------------------------#
| 7     | 6     | 5     | 4     | 3    | 2 | 1    | 0    |
#-------------------------------------------------------*/

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

#endif // _PIC18F66J16_H_
