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

#ifndef _PIC18F24K50_H_
#define _PIC18F24K50_H_


/*--------------------------------------------------------------------#
| SRCON1                                                        0xF57 |
#---------------------------------------------------------------------#
| SRSPE | SRSCKE | SRSC2E | SRSC1E | SRRPE | SRRCKE | SRRC2E | SRRC1E |
#---------------------------------------------------------------------#
| 7     | 6      | 5      | 4      | 3     | 2      | 1      | 0      |
#--------------------------------------------------------------------*/

#define SRCON1                                   0x0
#define SRCON1_address                           0xF57
#define SRCON1_position                          0x0
#define SRCON1_size                              0x8
#define SRCON1_value_mask                        0xFF
#define SRCON1_clear_mask                        0x0

#define SRRC1E                                   0x0
#define SRRC1E_address                           0xF57
#define SRRC1E_position                          0x0
#define SRRC1E_size                              0x1
#define SRRC1E_value_mask                        0x1
#define SRRC1E_clear_mask                        0xFE

#define SRRC2E                                   0x1
#define SRRC2E_address                           0xF57
#define SRRC2E_position                          0x1
#define SRRC2E_size                              0x1
#define SRRC2E_value_mask                        0x2
#define SRRC2E_clear_mask                        0xFD

#define SRRCKE                                   0x2
#define SRRCKE_address                           0xF57
#define SRRCKE_position                          0x2
#define SRRCKE_size                              0x1
#define SRRCKE_value_mask                        0x4
#define SRRCKE_clear_mask                        0xFB

#define SRRPE                                    0x3
#define SRRPE_address                            0xF57
#define SRRPE_position                           0x3
#define SRRPE_size                               0x1
#define SRRPE_value_mask                         0x8
#define SRRPE_clear_mask                         0xF7

#define SRSC1E                                   0x4
#define SRSC1E_address                           0xF57
#define SRSC1E_position                          0x4
#define SRSC1E_size                              0x1
#define SRSC1E_value_mask                        0x10
#define SRSC1E_clear_mask                        0xEF

#define SRSC2E                                   0x5
#define SRSC2E_address                           0xF57
#define SRSC2E_position                          0x5
#define SRSC2E_size                              0x1
#define SRSC2E_value_mask                        0x20
#define SRSC2E_clear_mask                        0xDF

#define SRSCKE                                   0x6
#define SRSCKE_address                           0xF57
#define SRSCKE_position                          0x6
#define SRSCKE_size                              0x1
#define SRSCKE_value_mask                        0x40
#define SRSCKE_clear_mask                        0xBF

#define SRSPE                                    0x7
#define SRSPE_address                            0xF57
#define SRSPE_position                           0x7
#define SRSPE_size                               0x1
#define SRSPE_value_mask                         0x80
#define SRSPE_clear_mask                         0x7F


/*----------------------------------------------------------------#
| SRCON0                                                    0xF58 |
#-----------------------------------------------------------------#
| SRLEN | SRCLK2 | SRCLK1 | SRCLK0 | SRQEN | SRNQEN | SRPS | SRPR |
#-----------------------------------------------------------------#
| 7     | 6      | 5      | 4      | 3     | 2      | 1    | 0    |
#----------------------------------------------------------------*/

#define SRCON0                                   0x0
#define SRCON0_address                           0xF58
#define SRCON0_position                          0x0
#define SRCON0_size                              0x8
#define SRCON0_value_mask                        0xFF
#define SRCON0_clear_mask                        0x0

#define SRPR                                     0x0
#define SRPR_address                             0xF58
#define SRPR_position                            0x0
#define SRPR_size                                0x1
#define SRPR_value_mask                          0x1
#define SRPR_clear_mask                          0xFE

#define SRPS                                     0x1
#define SRPS_address                             0xF58
#define SRPS_position                            0x1
#define SRPS_size                                0x1
#define SRPS_value_mask                          0x2
#define SRPS_clear_mask                          0xFD

#define SRNQEN                                   0x2
#define SRNQEN_address                           0xF58
#define SRNQEN_position                          0x2
#define SRNQEN_size                              0x1
#define SRNQEN_value_mask                        0x4
#define SRNQEN_clear_mask                        0xFB

#define SRQEN                                    0x3
#define SRQEN_address                            0xF58
#define SRQEN_position                           0x3
#define SRQEN_size                               0x1
#define SRQEN_value_mask                         0x8
#define SRQEN_clear_mask                         0xF7

#define SRCLK0                                   0x4
#define SRCLK0_address                           0xF58
#define SRCLK0_position                          0x4
#define SRCLK0_size                              0x1
#define SRCLK0_value_mask                        0x10
#define SRCLK0_clear_mask                        0xEF

#define SRCLK                                    0x4
#define SRCLK_address                            0xF58
#define SRCLK_position                           0x4
#define SRCLK_size                               0x3
#define SRCLK_value_mask                         0x70
#define SRCLK_clear_mask                         0x8F

#define SRCLK1                                   0x5
#define SRCLK1_address                           0xF58
#define SRCLK1_position                          0x5
#define SRCLK1_size                              0x1
#define SRCLK1_value_mask                        0x20
#define SRCLK1_clear_mask                        0xDF

#define SRCLK2                                   0x6
#define SRCLK2_address                           0xF58
#define SRCLK2_position                          0x6
#define SRCLK2_size                              0x1
#define SRCLK2_value_mask                        0x40
#define SRCLK2_clear_mask                        0xBF

#define SRLEN                                    0x7
#define SRLEN_address                            0xF58
#define SRLEN_position                           0x7
#define SRLEN_size                               0x1
#define SRLEN_value_mask                         0x80
#define SRLEN_clear_mask                         0x7F


/*----------------------------------------#
| CCPTMRS                           0xF59 |
#-----------------------------------------#
| - | - | - | - | C2TSEL | - | - | C1TSEL |
#-----------------------------------------#
| 7 | 6 | 5 | 4 | 3      | 2 | 1 | 0      |
#----------------------------------------*/

#define CCPTMRS                                  0x0
#define CCPTMRS_address                          0xF59
#define CCPTMRS_position                         0x0
#define CCPTMRS_size                             0x8
#define CCPTMRS_value_mask                       0xFF
#define CCPTMRS_clear_mask                       0x0

#define C1TSEL                                   0x0
#define C1TSEL_address                           0xF59
#define C1TSEL_position                          0x0
#define C1TSEL_size                              0x1
#define C1TSEL_value_mask                        0x1
#define C1TSEL_clear_mask                        0xFE

#define C2TSEL                                   0x3
#define C2TSEL_address                           0xF59
#define C2TSEL_position                          0x3
#define C2TSEL_size                              0x1
#define C2TSEL_value_mask                        0x8
#define C2TSEL_clear_mask                        0xF7


/*-------------------------------#
| VREGCON                  0xF5A |
#--------------------------------#
| - | - | - | - | - | - | VREGPM |
#--------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0  |
#-------------------------------*/

#define VREGCON                                  0x0
#define VREGCON_address                          0xF5A
#define VREGCON_position                         0x0
#define VREGCON_size                             0x8
#define VREGCON_value_mask                       0xFF
#define VREGCON_clear_mask                       0x0

#define VREGPM                                   0x0
#define VREGPM_address                           0xF5A
#define VREGPM_position                          0x0
#define VREGPM_size                              0x2
#define VREGPM_value_mask                        0x3
#define VREGPM_clear_mask                        0xFC


/*--------------------------------------------------#
| ANSELA                                      0xF5B |
#---------------------------------------------------#
| - | - | ANSA5 | - | ANSA3 | ANSA2 | ANSA1 | ANSA0 |
#---------------------------------------------------#
| 7 | 6 | 5     | 4 | 3     | 2     | 1     | 0     |
#--------------------------------------------------*/

#define ANSELA                                   0x0
#define ANSELA_address                           0xF5B
#define ANSELA_position                          0x0
#define ANSELA_size                              0x8
#define ANSELA_value_mask                        0xFF
#define ANSELA_clear_mask                        0x0

#define ANSA0                                    0x0
#define ANSA0_address                            0xF5B
#define ANSA0_position                           0x0
#define ANSA0_size                               0x1
#define ANSA0_value_mask                         0x1
#define ANSA0_clear_mask                         0xFE

#define ANSA1                                    0x1
#define ANSA1_address                            0xF5B
#define ANSA1_position                           0x1
#define ANSA1_size                               0x1
#define ANSA1_value_mask                         0x2
#define ANSA1_clear_mask                         0xFD

#define ANSA2                                    0x2
#define ANSA2_address                            0xF5B
#define ANSA2_position                           0x2
#define ANSA2_size                               0x1
#define ANSA2_value_mask                         0x4
#define ANSA2_clear_mask                         0xFB

#define ANSA3                                    0x3
#define ANSA3_address                            0xF5B
#define ANSA3_position                           0x3
#define ANSA3_size                               0x1
#define ANSA3_value_mask                         0x8
#define ANSA3_clear_mask                         0xF7

#define ANSA5                                    0x5
#define ANSA5_address                            0xF5B
#define ANSA5_position                           0x5
#define ANSA5_size                               0x1
#define ANSA5_value_mask                         0x20
#define ANSA5_clear_mask                         0xDF


/*------------------------------------------------------#
| ANSELB                                          0xF5C |
#-------------------------------------------------------#
| - | - | ANSB5 | ANSB4 | ANSB3 | ANSB2 | ANSB1 | ANSB0 |
#-------------------------------------------------------#
| 7 | 6 | 5     | 4     | 3     | 2     | 1     | 0     |
#------------------------------------------------------*/

#define ANSELB                                   0x0
#define ANSELB_address                           0xF5C
#define ANSELB_position                          0x0
#define ANSELB_size                              0x8
#define ANSELB_value_mask                        0xFF
#define ANSELB_clear_mask                        0x0

#define ANSB0                                    0x0
#define ANSB0_address                            0xF5C
#define ANSB0_position                           0x0
#define ANSB0_size                               0x1
#define ANSB0_value_mask                         0x1
#define ANSB0_clear_mask                         0xFE

#define ANSB1                                    0x1
#define ANSB1_address                            0xF5C
#define ANSB1_position                           0x1
#define ANSB1_size                               0x1
#define ANSB1_value_mask                         0x2
#define ANSB1_clear_mask                         0xFD

#define ANSB2                                    0x2
#define ANSB2_address                            0xF5C
#define ANSB2_position                           0x2
#define ANSB2_size                               0x1
#define ANSB2_value_mask                         0x4
#define ANSB2_clear_mask                         0xFB

#define ANSB3                                    0x3
#define ANSB3_address                            0xF5C
#define ANSB3_position                           0x3
#define ANSB3_size                               0x1
#define ANSB3_value_mask                         0x8
#define ANSB3_clear_mask                         0xF7

#define ANSB4                                    0x4
#define ANSB4_address                            0xF5C
#define ANSB4_position                           0x4
#define ANSB4_size                               0x1
#define ANSB4_value_mask                         0x10
#define ANSB4_clear_mask                         0xEF

#define ANSB5                                    0x5
#define ANSB5_address                            0xF5C
#define ANSB5_position                           0x5
#define ANSB5_size                               0x1
#define ANSB5_value_mask                         0x20
#define ANSB5_clear_mask                         0xDF


/*------------------------------------------#
| ANSELC                              0xF5D |
#-------------------------------------------#
| ANSC7 | ANSC6 | - | - | - | ANSC2 | - | - |
#-------------------------------------------#
| 7     | 6     | 5 | 4 | 3 | 2     | 1 | 0 |
#------------------------------------------*/

#define ANSELC                                   0x0
#define ANSELC_address                           0xF5D
#define ANSELC_position                          0x0
#define ANSELC_size                              0x8
#define ANSELC_value_mask                        0xFF
#define ANSELC_clear_mask                        0x0

#define ANSC2                                    0x2
#define ANSC2_address                            0xF5D
#define ANSC2_position                           0x2
#define ANSC2_size                               0x1
#define ANSC2_value_mask                         0x4
#define ANSC2_clear_mask                         0xFB

#define ANSC6                                    0x6
#define ANSC6_address                            0xF5D
#define ANSC6_position                           0x6
#define ANSC6_size                               0x1
#define ANSC6_value_mask                         0x40
#define ANSC6_clear_mask                         0xBF

#define ANSC7                                    0x7
#define ANSC7_address                            0xF5D
#define ANSC7_position                           0x7
#define ANSC7_size                               0x1
#define ANSC7_value_mask                         0x80
#define ANSC7_clear_mask                         0x7F


/*--------------------------------------------------------#
| UCON                                              0xF60 |
#---------------------------------------------------------#
| - | PPBRST | SE0 | PKTDIS | USBEN | RESUME | SUSPND | - |
#---------------------------------------------------------#
| 7 | 6      | 5   | 4      | 3     | 2      | 1      | 0 |
#--------------------------------------------------------*/

#define UCON                                     0x0
#define UCON_address                             0xF60
#define UCON_position                            0x0
#define UCON_size                                0x8
#define UCON_value_mask                          0xFF
#define UCON_clear_mask                          0x0

#define SUSPND                                   0x1
#define SUSPND_address                           0xF60
#define SUSPND_position                          0x1
#define SUSPND_size                              0x1
#define SUSPND_value_mask                        0x2
#define SUSPND_clear_mask                        0xFD

#define RESUME                                   0x2
#define RESUME_address                           0xF60
#define RESUME_position                          0x2
#define RESUME_size                              0x1
#define RESUME_value_mask                        0x4
#define RESUME_clear_mask                        0xFB

#define USBEN                                    0x3
#define USBEN_address                            0xF60
#define USBEN_position                           0x3
#define USBEN_size                               0x1
#define USBEN_value_mask                         0x8
#define USBEN_clear_mask                         0xF7

#define PKTDIS                                   0x4
#define PKTDIS_address                           0xF60
#define PKTDIS_position                          0x4
#define PKTDIS_size                              0x1
#define PKTDIS_value_mask                        0x10
#define PKTDIS_clear_mask                        0xEF

#define SE0                                      0x5
#define SE0_address                              0xF60
#define SE0_position                             0x5
#define SE0_size                                 0x1
#define SE0_value_mask                           0x20
#define SE0_clear_mask                           0xDF

#define PPBRST                                   0x6
#define PPBRST_address                           0xF60
#define PPBRST_position                          0x6
#define PPBRST_size                              0x1
#define PPBRST_value_mask                        0x40
#define PPBRST_clear_mask                        0xBF


/*---------------------------------------------------#
| USTAT                                        0xF61 |
#----------------------------------------------------#
| - | ENDP3 | ENDP2 | ENDP1 | ENDP0 | DIR | PPBI | - |
#----------------------------------------------------#
| 7 | 6     | 5     | 4     | 3     | 2   | 1    | 0 |
#---------------------------------------------------*/

#define USTAT                                    0x0
#define USTAT_address                            0xF61
#define USTAT_position                           0x0
#define USTAT_size                               0x8
#define USTAT_value_mask                         0xFF
#define USTAT_clear_mask                         0x0

#define PPBI                                     0x1
#define PPBI_address                             0xF61
#define PPBI_position                            0x1
#define PPBI_size                                0x1
#define PPBI_value_mask                          0x2
#define PPBI_clear_mask                          0xFD

#define DIR                                      0x2
#define DIR_address                              0xF61
#define DIR_position                             0x2
#define DIR_size                                 0x1
#define DIR_value_mask                           0x4
#define DIR_clear_mask                           0xFB

#define ENDP                                     0x3
#define ENDP_address                             0xF61
#define ENDP_position                            0x3
#define ENDP_size                                0x4
#define ENDP_value_mask                          0x78
#define ENDP_clear_mask                          0x87

#define ENDP0                                    0x3
#define ENDP0_address                            0xF61
#define ENDP0_position                           0x3
#define ENDP0_size                               0x1
#define ENDP0_value_mask                         0x8
#define ENDP0_clear_mask                         0xF7

#define ENDP1                                    0x4
#define ENDP1_address                            0xF61
#define ENDP1_position                           0x4
#define ENDP1_size                               0x1
#define ENDP1_value_mask                         0x10
#define ENDP1_clear_mask                         0xEF

#define ENDP2                                    0x5
#define ENDP2_address                            0xF61
#define ENDP2_position                           0x5
#define ENDP2_size                               0x1
#define ENDP2_value_mask                         0x20
#define ENDP2_clear_mask                         0xDF

#define ENDP3                                    0x6
#define ENDP3_address                            0xF61
#define ENDP3_position                           0x6
#define ENDP3_size                               0x1
#define ENDP3_value_mask                         0x40
#define ENDP3_clear_mask                         0xBF


/*---------------------------------------------------------#
| UCFG                                               0xF62 |
#----------------------------------------------------------#
| UTEYE | UOEMON | - | UPUEN | UTRDIS | FSEN | UPP1 | PPB0 |
#----------------------------------------------------------#
| 7     | 6      | 5 | 4     | 3      | 2    | 1    | 0    |
#---------------------------------------------------------*/

#define UCFG                                     0x0
#define UCFG_address                             0xF62
#define UCFG_position                            0x0
#define UCFG_size                                0x8
#define UCFG_value_mask                          0xFF
#define UCFG_clear_mask                          0x0

#define PPB                                      0x0
#define PPB_address                              0xF62
#define PPB_position                             0x0
#define PPB_size                                 0x2
#define PPB_value_mask                           0x3
#define PPB_clear_mask                           0xFC

#define UPP0                                     0x0
#define UPP0_address                             0xF62
#define UPP0_position                            0x0
#define UPP0_size                                0x1
#define UPP0_value_mask                          0x1
#define UPP0_clear_mask                          0xFE

#define PPB0                                     0x0
#define PPB0_address                             0xF62
#define PPB0_position                            0x0
#define PPB0_size                                0x1
#define PPB0_value_mask                          0x1
#define PPB0_clear_mask                          0xFE

#define UPP1                                     0x1
#define UPP1_address                             0xF62
#define UPP1_position                            0x1
#define UPP1_size                                0x1
#define UPP1_value_mask                          0x2
#define UPP1_clear_mask                          0xFD

#define PPB1                                     0x1
#define PPB1_address                             0xF62
#define PPB1_position                            0x1
#define PPB1_size                                0x1
#define PPB1_value_mask                          0x2
#define PPB1_clear_mask                          0xFD

#define FSEN                                     0x2
#define FSEN_address                             0xF62
#define FSEN_position                            0x2
#define FSEN_size                                0x1
#define FSEN_value_mask                          0x4
#define FSEN_clear_mask                          0xFB

#define UTRDIS                                   0x3
#define UTRDIS_address                           0xF62
#define UTRDIS_position                          0x3
#define UTRDIS_size                              0x1
#define UTRDIS_value_mask                        0x8
#define UTRDIS_clear_mask                        0xF7

#define UPUEN                                    0x4
#define UPUEN_address                            0xF62
#define UPUEN_position                           0x4
#define UPUEN_size                               0x1
#define UPUEN_value_mask                         0x10
#define UPUEN_clear_mask                         0xEF

#define UOEMON                                   0x6
#define UOEMON_address                           0xF62
#define UOEMON_position                          0x6
#define UOEMON_size                              0x1
#define UOEMON_value_mask                        0x40
#define UOEMON_clear_mask                        0xBF

#define UTEYE                                    0x7
#define UTEYE_address                            0xF62
#define UTEYE_position                           0x7
#define UTEYE_size                               0x1
#define UTEYE_value_mask                         0x80
#define UTEYE_clear_mask                         0x7F


/*----------------------------------------------------------#
| UADDR                                               0xF63 |
#-----------------------------------------------------------#
| - | ADDR6 | ADDR5 | ADDR4 | ADDR3 | ADDR2 | ADDR1 | ADDR0 |
#-----------------------------------------------------------#
| 7 | 6     | 5     | 4     | 3     | 2     | 1     | 0     |
#----------------------------------------------------------*/

#define UADDR                                    0x0
#define UADDR_address                            0xF63
#define UADDR_position                           0x0
#define UADDR_size                               0x8
#define UADDR_value_mask                         0xFF
#define UADDR_clear_mask                         0x0

#define ADDR                                     0x0
#define ADDR_address                             0xF63
#define ADDR_position                            0x0
#define ADDR_size                                0x7
#define ADDR_value_mask                          0x7F
#define ADDR_clear_mask                          0x80

#define ADDR0                                    0x0
#define ADDR0_address                            0xF63
#define ADDR0_position                           0x0
#define ADDR0_size                               0x1
#define ADDR0_value_mask                         0x1
#define ADDR0_clear_mask                         0xFE

#define ADDR1                                    0x1
#define ADDR1_address                            0xF63
#define ADDR1_position                           0x1
#define ADDR1_size                               0x1
#define ADDR1_value_mask                         0x2
#define ADDR1_clear_mask                         0xFD

#define ADDR2                                    0x2
#define ADDR2_address                            0xF63
#define ADDR2_position                           0x2
#define ADDR2_size                               0x1
#define ADDR2_value_mask                         0x4
#define ADDR2_clear_mask                         0xFB

#define ADDR3                                    0x3
#define ADDR3_address                            0xF63
#define ADDR3_position                           0x3
#define ADDR3_size                               0x1
#define ADDR3_value_mask                         0x8
#define ADDR3_clear_mask                         0xF7

#define ADDR4                                    0x4
#define ADDR4_address                            0xF63
#define ADDR4_position                           0x4
#define ADDR4_size                               0x1
#define ADDR4_value_mask                         0x10
#define ADDR4_clear_mask                         0xEF

#define ADDR5                                    0x5
#define ADDR5_address                            0xF63
#define ADDR5_position                           0x5
#define ADDR5_size                               0x1
#define ADDR5_value_mask                         0x20
#define ADDR5_clear_mask                         0xDF

#define ADDR6                                    0x6
#define ADDR6_address                            0xF63
#define ADDR6_position                           0x6
#define ADDR6_size                               0x1
#define ADDR6_value_mask                         0x40
#define ADDR6_clear_mask                         0xBF


/*----------------------------------------------------------------#
| UIE                                                       0xF64 |
#-----------------------------------------------------------------#
| - | SOFIE | STALLIE | IDLEIE | TRNIE | ACTVIE | UERRIE | URSTIE |
#-----------------------------------------------------------------#
| 7 | 6     | 5       | 4      | 3     | 2      | 1      | 0      |
#----------------------------------------------------------------*/

#define UIE                                      0x0
#define UIE_address                              0xF64
#define UIE_position                             0x0
#define UIE_size                                 0x8
#define UIE_value_mask                           0xFF
#define UIE_clear_mask                           0x0

#define URSTIE                                   0x0
#define URSTIE_address                           0xF64
#define URSTIE_position                          0x0
#define URSTIE_size                              0x1
#define URSTIE_value_mask                        0x1
#define URSTIE_clear_mask                        0xFE

#define UERRIE                                   0x1
#define UERRIE_address                           0xF64
#define UERRIE_position                          0x1
#define UERRIE_size                              0x1
#define UERRIE_value_mask                        0x2
#define UERRIE_clear_mask                        0xFD

#define ACTVIE                                   0x2
#define ACTVIE_address                           0xF64
#define ACTVIE_position                          0x2
#define ACTVIE_size                              0x1
#define ACTVIE_value_mask                        0x4
#define ACTVIE_clear_mask                        0xFB

#define TRNIE                                    0x3
#define TRNIE_address                            0xF64
#define TRNIE_position                           0x3
#define TRNIE_size                               0x1
#define TRNIE_value_mask                         0x8
#define TRNIE_clear_mask                         0xF7

#define IDLEIE                                   0x4
#define IDLEIE_address                           0xF64
#define IDLEIE_position                          0x4
#define IDLEIE_size                              0x1
#define IDLEIE_value_mask                        0x10
#define IDLEIE_clear_mask                        0xEF

#define STALLIE                                  0x5
#define STALLIE_address                          0xF64
#define STALLIE_position                         0x5
#define STALLIE_size                             0x1
#define STALLIE_value_mask                       0x20
#define STALLIE_clear_mask                       0xDF

#define SOFIE                                    0x6
#define SOFIE_address                            0xF64
#define SOFIE_position                           0x6
#define SOFIE_size                               0x1
#define SOFIE_value_mask                         0x40
#define SOFIE_clear_mask                         0xBF


/*----------------------------------------------------------------#
| UIR                                                       0xF65 |
#-----------------------------------------------------------------#
| - | SOFIF | STALLIF | IDLEIF | TRNIF | ACTVIF | UERRIF | URSTIF |
#-----------------------------------------------------------------#
| 7 | 6     | 5       | 4      | 3     | 2      | 1      | 0      |
#----------------------------------------------------------------*/

#define UIR                                      0x0
#define UIR_address                              0xF65
#define UIR_position                             0x0
#define UIR_size                                 0x8
#define UIR_value_mask                           0xFF
#define UIR_clear_mask                           0x0

#define URSTIF                                   0x0
#define URSTIF_address                           0xF65
#define URSTIF_position                          0x0
#define URSTIF_size                              0x1
#define URSTIF_value_mask                        0x1
#define URSTIF_clear_mask                        0xFE

#define UERRIF                                   0x1
#define UERRIF_address                           0xF65
#define UERRIF_position                          0x1
#define UERRIF_size                              0x1
#define UERRIF_value_mask                        0x2
#define UERRIF_clear_mask                        0xFD

#define ACTVIF                                   0x2
#define ACTVIF_address                           0xF65
#define ACTVIF_position                          0x2
#define ACTVIF_size                              0x1
#define ACTVIF_value_mask                        0x4
#define ACTVIF_clear_mask                        0xFB

#define TRNIF                                    0x3
#define TRNIF_address                            0xF65
#define TRNIF_position                           0x3
#define TRNIF_size                               0x1
#define TRNIF_value_mask                         0x8
#define TRNIF_clear_mask                         0xF7

#define IDLEIF                                   0x4
#define IDLEIF_address                           0xF65
#define IDLEIF_position                          0x4
#define IDLEIF_size                              0x1
#define IDLEIF_value_mask                        0x10
#define IDLEIF_clear_mask                        0xEF

#define STALLIF                                  0x5
#define STALLIF_address                          0xF65
#define STALLIF_position                         0x5
#define STALLIF_size                             0x1
#define STALLIF_value_mask                       0x20
#define STALLIF_clear_mask                       0xDF

#define SOFIF                                    0x6
#define SOFIF_address                            0xF65
#define SOFIF_position                           0x6
#define SOFIF_size                               0x1
#define SOFIF_value_mask                         0x40
#define SOFIF_clear_mask                         0xBF


/*----------------------------------------------------------#
| UEIE                                                0xF66 |
#-----------------------------------------------------------#
| BTSEE | - | - | BTOEE | DFN8EE | CRC16EE | CRC5EE | PIDEE |
#-----------------------------------------------------------#
| 7     | 6 | 5 | 4     | 3      | 2       | 1      | 0     |
#----------------------------------------------------------*/

#define UEIE                                     0x0
#define UEIE_address                             0xF66
#define UEIE_position                            0x0
#define UEIE_size                                0x8
#define UEIE_value_mask                          0xFF
#define UEIE_clear_mask                          0x0

#define PIDEE                                    0x0
#define PIDEE_address                            0xF66
#define PIDEE_position                           0x0
#define PIDEE_size                               0x1
#define PIDEE_value_mask                         0x1
#define PIDEE_clear_mask                         0xFE

#define CRC5EE                                   0x1
#define CRC5EE_address                           0xF66
#define CRC5EE_position                          0x1
#define CRC5EE_size                              0x1
#define CRC5EE_value_mask                        0x2
#define CRC5EE_clear_mask                        0xFD

#define CRC16EE                                  0x2
#define CRC16EE_address                          0xF66
#define CRC16EE_position                         0x2
#define CRC16EE_size                             0x1
#define CRC16EE_value_mask                       0x4
#define CRC16EE_clear_mask                       0xFB

#define DFN8EE                                   0x3
#define DFN8EE_address                           0xF66
#define DFN8EE_position                          0x3
#define DFN8EE_size                              0x1
#define DFN8EE_value_mask                        0x8
#define DFN8EE_clear_mask                        0xF7

#define BTOEE                                    0x4
#define BTOEE_address                            0xF66
#define BTOEE_position                           0x4
#define BTOEE_size                               0x1
#define BTOEE_value_mask                         0x10
#define BTOEE_clear_mask                         0xEF

#define BTSEE                                    0x7
#define BTSEE_address                            0xF66
#define BTSEE_position                           0x7
#define BTSEE_size                               0x1
#define BTSEE_value_mask                         0x80
#define BTSEE_clear_mask                         0x7F


/*----------------------------------------------------------#
| UEIR                                                0xF67 |
#-----------------------------------------------------------#
| BTSEF | - | - | BTOEF | DFN8EF | CRC16EF | CRC5EF | PIDEF |
#-----------------------------------------------------------#
| 7     | 6 | 5 | 4     | 3      | 2       | 1      | 0     |
#----------------------------------------------------------*/

#define UEIR                                     0x0
#define UEIR_address                             0xF67
#define UEIR_position                            0x0
#define UEIR_size                                0x8
#define UEIR_value_mask                          0xFF
#define UEIR_clear_mask                          0x0

#define PIDEF                                    0x0
#define PIDEF_address                            0xF67
#define PIDEF_position                           0x0
#define PIDEF_size                               0x1
#define PIDEF_value_mask                         0x1
#define PIDEF_clear_mask                         0xFE

#define CRC5EF                                   0x1
#define CRC5EF_address                           0xF67
#define CRC5EF_position                          0x1
#define CRC5EF_size                              0x1
#define CRC5EF_value_mask                        0x2
#define CRC5EF_clear_mask                        0xFD

#define CRC16EF                                  0x2
#define CRC16EF_address                          0xF67
#define CRC16EF_position                         0x2
#define CRC16EF_size                             0x1
#define CRC16EF_value_mask                       0x4
#define CRC16EF_clear_mask                       0xFB

#define DFN8EF                                   0x3
#define DFN8EF_address                           0xF67
#define DFN8EF_position                          0x3
#define DFN8EF_size                              0x1
#define DFN8EF_value_mask                        0x8
#define DFN8EF_clear_mask                        0xF7

#define BTOEF                                    0x4
#define BTOEF_address                            0xF67
#define BTOEF_position                           0x4
#define BTOEF_size                               0x1
#define BTOEF_value_mask                         0x10
#define BTOEF_clear_mask                         0xEF

#define BTSEF                                    0x7
#define BTSEF_address                            0xF67
#define BTSEF_position                           0x7
#define BTSEF_size                               0x1
#define BTSEF_value_mask                         0x80
#define BTSEF_clear_mask                         0x7F


/*------------------------------------------------------#
| UFRML                                           0xF68 |
#-------------------------------------------------------#
| FRM7 | FRM6 | FRM5 | FRM4 | FRM3 | FRM2 | FRM1 | FRM0 |
#-------------------------------------------------------#
| 7    | 6    | 5    | 4    | 3    | 2    | 1    | 0    |
#------------------------------------------------------*/

#define UFRML                                    0x0
#define UFRML_address                            0xF68
#define UFRML_position                           0x0
#define UFRML_size                               0x8
#define UFRML_value_mask                         0xFF
#define UFRML_clear_mask                         0x0

#define FRML                                     0x0
#define FRML_address                             0xF68
#define FRML_position                            0x0
#define FRML_size                                0x8
#define FRML_value_mask                          0xFF
#define FRML_clear_mask                          0x0

#define FRM0                                     0x0
#define FRM0_address                             0xF68
#define FRM0_position                            0x0
#define FRM0_size                                0x1
#define FRM0_value_mask                          0x1
#define FRM0_clear_mask                          0xFE

#define UFRML_FRM                                0x0
#define UFRML_FRM_address                        0xF68
#define UFRML_FRM_position                       0x0
#define UFRML_FRM_size                           0x8
#define UFRML_FRM_value_mask                     0xFF
#define UFRML_FRM_clear_mask                     0x0

#define FRM1                                     0x1
#define FRM1_address                             0xF68
#define FRM1_position                            0x1
#define FRM1_size                                0x1
#define FRM1_value_mask                          0x2
#define FRM1_clear_mask                          0xFD

#define FRM2                                     0x2
#define FRM2_address                             0xF68
#define FRM2_position                            0x2
#define FRM2_size                                0x1
#define FRM2_value_mask                          0x4
#define FRM2_clear_mask                          0xFB

#define FRM3                                     0x3
#define FRM3_address                             0xF68
#define FRM3_position                            0x3
#define FRM3_size                                0x1
#define FRM3_value_mask                          0x8
#define FRM3_clear_mask                          0xF7

#define FRM4                                     0x4
#define FRM4_address                             0xF68
#define FRM4_position                            0x4
#define FRM4_size                                0x1
#define FRM4_value_mask                          0x10
#define FRM4_clear_mask                          0xEF

#define FRM5                                     0x5
#define FRM5_address                             0xF68
#define FRM5_position                            0x5
#define FRM5_size                                0x1
#define FRM5_value_mask                          0x20
#define FRM5_clear_mask                          0xDF

#define FRM6                                     0x6
#define FRM6_address                             0xF68
#define FRM6_position                            0x6
#define FRM6_size                                0x1
#define FRM6_value_mask                          0x40
#define FRM6_clear_mask                          0xBF

#define FRM7                                     0x7
#define FRM7_address                             0xF68
#define FRM7_position                            0x7
#define FRM7_size                                0x1
#define FRM7_value_mask                          0x80
#define FRM7_clear_mask                          0x7F


/*----------------------------------------#
| UFRMH                             0xF69 |
#-----------------------------------------#
| - | - | - | - | - | FRM10 | FRM9 | FRM8 |
#-----------------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2     | 1    | 0    |
#----------------------------------------*/

#define UFRMH                                    0x0
#define UFRMH_address                            0xF69
#define UFRMH_position                           0x0
#define UFRMH_size                               0x8
#define UFRMH_value_mask                         0xFF
#define UFRMH_clear_mask                         0x0

#define FRM8                                     0x0
#define FRM8_address                             0xF69
#define FRM8_position                            0x0
#define FRM8_size                                0x1
#define FRM8_value_mask                          0x1
#define FRM8_clear_mask                          0xFE

#define UFRMH_FRM                                0x0
#define UFRMH_FRM_address                        0xF69
#define UFRMH_FRM_position                       0x0
#define UFRMH_FRM_size                           0x3
#define UFRMH_FRM_value_mask                     0x7
#define UFRMH_FRM_clear_mask                     0xF8

#define FRM9                                     0x1
#define FRM9_address                             0xF69
#define FRM9_position                            0x1
#define FRM9_size                                0x1
#define FRM9_value_mask                          0x2
#define FRM9_clear_mask                          0xFD

#define FRM10                                    0x2
#define FRM10_address                            0xF69
#define FRM10_position                           0x2
#define FRM10_size                               0x1
#define FRM10_value_mask                         0x4
#define FRM10_clear_mask                         0xFB


/*--------------------------------------------------------------------------------#
| UEP0                                                                      0xF6A |
#---------------------------------------------------------------------------------#
| - | - | - | UEP0_EPHSHK | UEP0_EPCONDIS | EP0OUTEN | UEP0_EPINEN | UEP0_EPSTALL |
#---------------------------------------------------------------------------------#
| 7 | 6 | 5 | 4           | 3             | 2        | 1           | 0            |
#--------------------------------------------------------------------------------*/

#define UEP0                                     0x0
#define UEP0_address                             0xF6A
#define UEP0_position                            0x0
#define UEP0_size                                0x8
#define UEP0_value_mask                          0xFF
#define UEP0_clear_mask                          0x0

#define UEP0_EPSTALL                             0x0
#define UEP0_EPSTALL_address                     0xF6A
#define UEP0_EPSTALL_position                    0x0
#define UEP0_EPSTALL_size                        0x1
#define UEP0_EPSTALL_value_mask                  0x1
#define UEP0_EPSTALL_clear_mask                  0xFE

#define EP0STALL                                 0x0
#define EP0STALL_address                         0xF6A
#define EP0STALL_position                        0x0
#define EP0STALL_size                            0x1
#define EP0STALL_value_mask                      0x1
#define EP0STALL_clear_mask                      0xFE

#define EPSTALL0                                 0x0
#define EPSTALL0_address                         0xF6A
#define EPSTALL0_position                        0x0
#define EPSTALL0_size                            0x1
#define EPSTALL0_value_mask                      0x1
#define EPSTALL0_clear_mask                      0xFE

#define UEP0_EPINEN                              0x1
#define UEP0_EPINEN_address                      0xF6A
#define UEP0_EPINEN_position                     0x1
#define UEP0_EPINEN_size                         0x1
#define UEP0_EPINEN_value_mask                   0x2
#define UEP0_EPINEN_clear_mask                   0xFD

#define EPINEN0                                  0x1
#define EPINEN0_address                          0xF6A
#define EPINEN0_position                         0x1
#define EPINEN0_size                             0x1
#define EPINEN0_value_mask                       0x2
#define EPINEN0_clear_mask                       0xFD

#define EP0INEN                                  0x1
#define EP0INEN_address                          0xF6A
#define EP0INEN_position                         0x1
#define EP0INEN_size                             0x1
#define EP0INEN_value_mask                       0x2
#define EP0INEN_clear_mask                       0xFD

#define UEP0_EPOUTEN                             0x2
#define UEP0_EPOUTEN_address                     0xF6A
#define UEP0_EPOUTEN_position                    0x2
#define UEP0_EPOUTEN_size                        0x1
#define UEP0_EPOUTEN_value_mask                  0x4
#define UEP0_EPOUTEN_clear_mask                  0xFB

#define EP0OUTEN                                 0x2
#define EP0OUTEN_address                         0xF6A
#define EP0OUTEN_position                        0x2
#define EP0OUTEN_size                            0x1
#define EP0OUTEN_value_mask                      0x4
#define EP0OUTEN_clear_mask                      0xFB

#define EPOUTEN0                                 0x2
#define EPOUTEN0_address                         0xF6A
#define EPOUTEN0_position                        0x2
#define EPOUTEN0_size                            0x1
#define EPOUTEN0_value_mask                      0x4
#define EPOUTEN0_clear_mask                      0xFB

#define EPCONDIS0                                0x3
#define EPCONDIS0_address                        0xF6A
#define EPCONDIS0_position                       0x3
#define EPCONDIS0_size                           0x1
#define EPCONDIS0_value_mask                     0x8
#define EPCONDIS0_clear_mask                     0xF7

#define EP0CONDIS                                0x3
#define EP0CONDIS_address                        0xF6A
#define EP0CONDIS_position                       0x3
#define EP0CONDIS_size                           0x1
#define EP0CONDIS_value_mask                     0x8
#define EP0CONDIS_clear_mask                     0xF7

#define UEP0_EPCONDIS                            0x3
#define UEP0_EPCONDIS_address                    0xF6A
#define UEP0_EPCONDIS_position                   0x3
#define UEP0_EPCONDIS_size                       0x1
#define UEP0_EPCONDIS_value_mask                 0x8
#define UEP0_EPCONDIS_clear_mask                 0xF7

#define UEP0_EPHSHK                              0x4
#define UEP0_EPHSHK_address                      0xF6A
#define UEP0_EPHSHK_position                     0x4
#define UEP0_EPHSHK_size                         0x1
#define UEP0_EPHSHK_value_mask                   0x10
#define UEP0_EPHSHK_clear_mask                   0xEF

#define EP0HSHK                                  0x4
#define EP0HSHK_address                          0xF6A
#define EP0HSHK_position                         0x4
#define EP0HSHK_size                             0x1
#define EP0HSHK_value_mask                       0x10
#define EP0HSHK_clear_mask                       0xEF

#define EPHSHK0                                  0x4
#define EPHSHK0_address                          0xF6A
#define EPHSHK0_position                         0x4
#define EPHSHK0_size                             0x1
#define EPHSHK0_value_mask                       0x10
#define EPHSHK0_clear_mask                       0xEF


/*------------------------------------------------------------------------#
| UEP1                                                              0xF6B |
#-------------------------------------------------------------------------#
| - | - | - | UEP1_EPHSHK | UEP1_EPCONDIS | EP1OUTEN | EP1INEN | EPSTALL1 |
#-------------------------------------------------------------------------#
| 7 | 6 | 5 | 4           | 3             | 2        | 1       | 0        |
#------------------------------------------------------------------------*/

#define UEP1                                     0x0
#define UEP1_address                             0xF6B
#define UEP1_position                            0x0
#define UEP1_size                                0x8
#define UEP1_value_mask                          0xFF
#define UEP1_clear_mask                          0x0

#define EPSTALL1                                 0x0
#define EPSTALL1_address                         0xF6B
#define EPSTALL1_position                        0x0
#define EPSTALL1_size                            0x1
#define EPSTALL1_value_mask                      0x1
#define EPSTALL1_clear_mask                      0xFE

#define EP1STALL                                 0x0
#define EP1STALL_address                         0xF6B
#define EP1STALL_position                        0x0
#define EP1STALL_size                            0x1
#define EP1STALL_value_mask                      0x1
#define EP1STALL_clear_mask                      0xFE

#define UEP1_EPSTALL                             0x0
#define UEP1_EPSTALL_address                     0xF6B
#define UEP1_EPSTALL_position                    0x0
#define UEP1_EPSTALL_size                        0x1
#define UEP1_EPSTALL_value_mask                  0x1
#define UEP1_EPSTALL_clear_mask                  0xFE

#define EPINEN1                                  0x1
#define EPINEN1_address                          0xF6B
#define EPINEN1_position                         0x1
#define EPINEN1_size                             0x1
#define EPINEN1_value_mask                       0x2
#define EPINEN1_clear_mask                       0xFD

#define EP1INEN                                  0x1
#define EP1INEN_address                          0xF6B
#define EP1INEN_position                         0x1
#define EP1INEN_size                             0x1
#define EP1INEN_value_mask                       0x2
#define EP1INEN_clear_mask                       0xFD

#define UEP1_EPINEN                              0x1
#define UEP1_EPINEN_address                      0xF6B
#define UEP1_EPINEN_position                     0x1
#define UEP1_EPINEN_size                         0x1
#define UEP1_EPINEN_value_mask                   0x2
#define UEP1_EPINEN_clear_mask                   0xFD

#define EPOUTEN1                                 0x2
#define EPOUTEN1_address                         0xF6B
#define EPOUTEN1_position                        0x2
#define EPOUTEN1_size                            0x1
#define EPOUTEN1_value_mask                      0x4
#define EPOUTEN1_clear_mask                      0xFB

#define UEP1_EPOUTEN                             0x2
#define UEP1_EPOUTEN_address                     0xF6B
#define UEP1_EPOUTEN_position                    0x2
#define UEP1_EPOUTEN_size                        0x1
#define UEP1_EPOUTEN_value_mask                  0x4
#define UEP1_EPOUTEN_clear_mask                  0xFB

#define EP1OUTEN                                 0x2
#define EP1OUTEN_address                         0xF6B
#define EP1OUTEN_position                        0x2
#define EP1OUTEN_size                            0x1
#define EP1OUTEN_value_mask                      0x4
#define EP1OUTEN_clear_mask                      0xFB

#define UEP1_EPCONDIS                            0x3
#define UEP1_EPCONDIS_address                    0xF6B
#define UEP1_EPCONDIS_position                   0x3
#define UEP1_EPCONDIS_size                       0x1
#define UEP1_EPCONDIS_value_mask                 0x8
#define UEP1_EPCONDIS_clear_mask                 0xF7

#define EP1CONDIS                                0x3
#define EP1CONDIS_address                        0xF6B
#define EP1CONDIS_position                       0x3
#define EP1CONDIS_size                           0x1
#define EP1CONDIS_value_mask                     0x8
#define EP1CONDIS_clear_mask                     0xF7

#define EPCONDIS1                                0x3
#define EPCONDIS1_address                        0xF6B
#define EPCONDIS1_position                       0x3
#define EPCONDIS1_size                           0x1
#define EPCONDIS1_value_mask                     0x8
#define EPCONDIS1_clear_mask                     0xF7

#define EPHSHK1                                  0x4
#define EPHSHK1_address                          0xF6B
#define EPHSHK1_position                         0x4
#define EPHSHK1_size                             0x1
#define EPHSHK1_value_mask                       0x10
#define EPHSHK1_clear_mask                       0xEF

#define EP1HSHK                                  0x4
#define EP1HSHK_address                          0xF6B
#define EP1HSHK_position                         0x4
#define EP1HSHK_size                             0x1
#define EP1HSHK_value_mask                       0x10
#define EP1HSHK_clear_mask                       0xEF

#define UEP1_EPHSHK                              0x4
#define UEP1_EPHSHK_address                      0xF6B
#define UEP1_EPHSHK_position                     0x4
#define UEP1_EPHSHK_size                         0x1
#define UEP1_EPHSHK_value_mask                   0x10
#define UEP1_EPHSHK_clear_mask                   0xEF


/*----------------------------------------------------------------#
| UEP2                                                      0xF6C |
#-----------------------------------------------------------------#
| - | - | - | EPHSHK2 | EP2CONDIS | EP2OUTEN | EP2INEN | EP2STALL |
#-----------------------------------------------------------------#
| 7 | 6 | 5 | 4       | 3         | 2        | 1       | 0        |
#----------------------------------------------------------------*/

#define UEP2                                     0x0
#define UEP2_address                             0xF6C
#define UEP2_position                            0x0
#define UEP2_size                                0x8
#define UEP2_value_mask                          0xFF
#define UEP2_clear_mask                          0x0

#define EP2STALL                                 0x0
#define EP2STALL_address                         0xF6C
#define EP2STALL_position                        0x0
#define EP2STALL_size                            0x1
#define EP2STALL_value_mask                      0x1
#define EP2STALL_clear_mask                      0xFE

#define EPSTALL2                                 0x0
#define EPSTALL2_address                         0xF6C
#define EPSTALL2_position                        0x0
#define EPSTALL2_size                            0x1
#define EPSTALL2_value_mask                      0x1
#define EPSTALL2_clear_mask                      0xFE

#define UEP2_EPSTALL                             0x0
#define UEP2_EPSTALL_address                     0xF6C
#define UEP2_EPSTALL_position                    0x0
#define UEP2_EPSTALL_size                        0x1
#define UEP2_EPSTALL_value_mask                  0x1
#define UEP2_EPSTALL_clear_mask                  0xFE

#define EP2INEN                                  0x1
#define EP2INEN_address                          0xF6C
#define EP2INEN_position                         0x1
#define EP2INEN_size                             0x1
#define EP2INEN_value_mask                       0x2
#define EP2INEN_clear_mask                       0xFD

#define EPINEN2                                  0x1
#define EPINEN2_address                          0xF6C
#define EPINEN2_position                         0x1
#define EPINEN2_size                             0x1
#define EPINEN2_value_mask                       0x2
#define EPINEN2_clear_mask                       0xFD

#define UEP2_EPINEN                              0x1
#define UEP2_EPINEN_address                      0xF6C
#define UEP2_EPINEN_position                     0x1
#define UEP2_EPINEN_size                         0x1
#define UEP2_EPINEN_value_mask                   0x2
#define UEP2_EPINEN_clear_mask                   0xFD

#define EP2OUTEN                                 0x2
#define EP2OUTEN_address                         0xF6C
#define EP2OUTEN_position                        0x2
#define EP2OUTEN_size                            0x1
#define EP2OUTEN_value_mask                      0x4
#define EP2OUTEN_clear_mask                      0xFB

#define UEP2_EPOUTEN                             0x2
#define UEP2_EPOUTEN_address                     0xF6C
#define UEP2_EPOUTEN_position                    0x2
#define UEP2_EPOUTEN_size                        0x1
#define UEP2_EPOUTEN_value_mask                  0x4
#define UEP2_EPOUTEN_clear_mask                  0xFB

#define EPOUTEN2                                 0x2
#define EPOUTEN2_address                         0xF6C
#define EPOUTEN2_position                        0x2
#define EPOUTEN2_size                            0x1
#define EPOUTEN2_value_mask                      0x4
#define EPOUTEN2_clear_mask                      0xFB

#define EP2CONDIS                                0x3
#define EP2CONDIS_address                        0xF6C
#define EP2CONDIS_position                       0x3
#define EP2CONDIS_size                           0x1
#define EP2CONDIS_value_mask                     0x8
#define EP2CONDIS_clear_mask                     0xF7

#define UEP2_EPCONDIS                            0x3
#define UEP2_EPCONDIS_address                    0xF6C
#define UEP2_EPCONDIS_position                   0x3
#define UEP2_EPCONDIS_size                       0x1
#define UEP2_EPCONDIS_value_mask                 0x8
#define UEP2_EPCONDIS_clear_mask                 0xF7

#define EPCONDIS2                                0x3
#define EPCONDIS2_address                        0xF6C
#define EPCONDIS2_position                       0x3
#define EPCONDIS2_size                           0x1
#define EPCONDIS2_value_mask                     0x8
#define EPCONDIS2_clear_mask                     0xF7

#define EP2HSHK                                  0x4
#define EP2HSHK_address                          0xF6C
#define EP2HSHK_position                         0x4
#define EP2HSHK_size                             0x1
#define EP2HSHK_value_mask                       0x10
#define EP2HSHK_clear_mask                       0xEF

#define EPHSHK2                                  0x4
#define EPHSHK2_address                          0xF6C
#define EPHSHK2_position                         0x4
#define EPHSHK2_size                             0x1
#define EPHSHK2_value_mask                       0x10
#define EPHSHK2_clear_mask                       0xEF

#define UEP2_EPHSHK                              0x4
#define UEP2_EPHSHK_address                      0xF6C
#define UEP2_EPHSHK_position                     0x4
#define UEP2_EPHSHK_size                         0x1
#define UEP2_EPHSHK_value_mask                   0x10
#define UEP2_EPHSHK_clear_mask                   0xEF


/*----------------------------------------------------------------------------#
| UEP3                                                                  0xF6D |
#-----------------------------------------------------------------------------#
| - | - | - | UEP3_EPHSHK | UEP3_EPCONDIS | EP3OUTEN | UEP3_EPINEN | EPSTALL3 |
#-----------------------------------------------------------------------------#
| 7 | 6 | 5 | 4           | 3             | 2        | 1           | 0        |
#----------------------------------------------------------------------------*/

#define UEP3                                     0x0
#define UEP3_address                             0xF6D
#define UEP3_position                            0x0
#define UEP3_size                                0x8
#define UEP3_value_mask                          0xFF
#define UEP3_clear_mask                          0x0

#define UEP3_EPSTALL                             0x0
#define UEP3_EPSTALL_address                     0xF6D
#define UEP3_EPSTALL_position                    0x0
#define UEP3_EPSTALL_size                        0x1
#define UEP3_EPSTALL_value_mask                  0x1
#define UEP3_EPSTALL_clear_mask                  0xFE

#define EPSTALL3                                 0x0
#define EPSTALL3_address                         0xF6D
#define EPSTALL3_position                        0x0
#define EPSTALL3_size                            0x1
#define EPSTALL3_value_mask                      0x1
#define EPSTALL3_clear_mask                      0xFE

#define EP3STALL                                 0x0
#define EP3STALL_address                         0xF6D
#define EP3STALL_position                        0x0
#define EP3STALL_size                            0x1
#define EP3STALL_value_mask                      0x1
#define EP3STALL_clear_mask                      0xFE

#define UEP3_EPINEN                              0x1
#define UEP3_EPINEN_address                      0xF6D
#define UEP3_EPINEN_position                     0x1
#define UEP3_EPINEN_size                         0x1
#define UEP3_EPINEN_value_mask                   0x2
#define UEP3_EPINEN_clear_mask                   0xFD

#define EPINEN3                                  0x1
#define EPINEN3_address                          0xF6D
#define EPINEN3_position                         0x1
#define EPINEN3_size                             0x1
#define EPINEN3_value_mask                       0x2
#define EPINEN3_clear_mask                       0xFD

#define EP3INEN                                  0x1
#define EP3INEN_address                          0xF6D
#define EP3INEN_position                         0x1
#define EP3INEN_size                             0x1
#define EP3INEN_value_mask                       0x2
#define EP3INEN_clear_mask                       0xFD

#define EP3OUTEN                                 0x2
#define EP3OUTEN_address                         0xF6D
#define EP3OUTEN_position                        0x2
#define EP3OUTEN_size                            0x1
#define EP3OUTEN_value_mask                      0x4
#define EP3OUTEN_clear_mask                      0xFB

#define EPOUTEN3                                 0x2
#define EPOUTEN3_address                         0xF6D
#define EPOUTEN3_position                        0x2
#define EPOUTEN3_size                            0x1
#define EPOUTEN3_value_mask                      0x4
#define EPOUTEN3_clear_mask                      0xFB

#define UEP3_EPOUTEN                             0x2
#define UEP3_EPOUTEN_address                     0xF6D
#define UEP3_EPOUTEN_position                    0x2
#define UEP3_EPOUTEN_size                        0x1
#define UEP3_EPOUTEN_value_mask                  0x4
#define UEP3_EPOUTEN_clear_mask                  0xFB

#define UEP3_EPCONDIS                            0x3
#define UEP3_EPCONDIS_address                    0xF6D
#define UEP3_EPCONDIS_position                   0x3
#define UEP3_EPCONDIS_size                       0x1
#define UEP3_EPCONDIS_value_mask                 0x8
#define UEP3_EPCONDIS_clear_mask                 0xF7

#define EP3CONDIS                                0x3
#define EP3CONDIS_address                        0xF6D
#define EP3CONDIS_position                       0x3
#define EP3CONDIS_size                           0x1
#define EP3CONDIS_value_mask                     0x8
#define EP3CONDIS_clear_mask                     0xF7

#define EPCONDIS3                                0x3
#define EPCONDIS3_address                        0xF6D
#define EPCONDIS3_position                       0x3
#define EPCONDIS3_size                           0x1
#define EPCONDIS3_value_mask                     0x8
#define EPCONDIS3_clear_mask                     0xF7

#define EPHSHK3                                  0x4
#define EPHSHK3_address                          0xF6D
#define EPHSHK3_position                         0x4
#define EPHSHK3_size                             0x1
#define EPHSHK3_value_mask                       0x10
#define EPHSHK3_clear_mask                       0xEF

#define UEP3_EPHSHK                              0x4
#define UEP3_EPHSHK_address                      0xF6D
#define UEP3_EPHSHK_position                     0x4
#define UEP3_EPHSHK_size                         0x1
#define UEP3_EPHSHK_value_mask                   0x10
#define UEP3_EPHSHK_clear_mask                   0xEF

#define EP3HSHK                                  0x4
#define EP3HSHK_address                          0xF6D
#define EP3HSHK_position                         0x4
#define EP3HSHK_size                             0x1
#define EP3HSHK_value_mask                       0x10
#define EP3HSHK_clear_mask                       0xEF


/*--------------------------------------------------------------------#
| UEP4                                                          0xF6E |
#---------------------------------------------------------------------#
| - | - | - | EP4HSHK | EP4CONDIS | EP4OUTEN | UEP4_EPINEN | EPSTALL4 |
#---------------------------------------------------------------------#
| 7 | 6 | 5 | 4       | 3         | 2        | 1           | 0        |
#--------------------------------------------------------------------*/

#define UEP4                                     0x0
#define UEP4_address                             0xF6E
#define UEP4_position                            0x0
#define UEP4_size                                0x8
#define UEP4_value_mask                          0xFF
#define UEP4_clear_mask                          0x0

#define EP4STALL                                 0x0
#define EP4STALL_address                         0xF6E
#define EP4STALL_position                        0x0
#define EP4STALL_size                            0x1
#define EP4STALL_value_mask                      0x1
#define EP4STALL_clear_mask                      0xFE

#define EPSTALL4                                 0x0
#define EPSTALL4_address                         0xF6E
#define EPSTALL4_position                        0x0
#define EPSTALL4_size                            0x1
#define EPSTALL4_value_mask                      0x1
#define EPSTALL4_clear_mask                      0xFE

#define UEP4_EPSTALL                             0x0
#define UEP4_EPSTALL_address                     0xF6E
#define UEP4_EPSTALL_position                    0x0
#define UEP4_EPSTALL_size                        0x1
#define UEP4_EPSTALL_value_mask                  0x1
#define UEP4_EPSTALL_clear_mask                  0xFE

#define UEP4_EPINEN                              0x1
#define UEP4_EPINEN_address                      0xF6E
#define UEP4_EPINEN_position                     0x1
#define UEP4_EPINEN_size                         0x1
#define UEP4_EPINEN_value_mask                   0x2
#define UEP4_EPINEN_clear_mask                   0xFD

#define EP4INEN                                  0x1
#define EP4INEN_address                          0xF6E
#define EP4INEN_position                         0x1
#define EP4INEN_size                             0x1
#define EP4INEN_value_mask                       0x2
#define EP4INEN_clear_mask                       0xFD

#define EPINEN4                                  0x1
#define EPINEN4_address                          0xF6E
#define EPINEN4_position                         0x1
#define EPINEN4_size                             0x1
#define EPINEN4_value_mask                       0x2
#define EPINEN4_clear_mask                       0xFD

#define UEP4_EPOUTEN                             0x2
#define UEP4_EPOUTEN_address                     0xF6E
#define UEP4_EPOUTEN_position                    0x2
#define UEP4_EPOUTEN_size                        0x1
#define UEP4_EPOUTEN_value_mask                  0x4
#define UEP4_EPOUTEN_clear_mask                  0xFB

#define EPOUTEN4                                 0x2
#define EPOUTEN4_address                         0xF6E
#define EPOUTEN4_position                        0x2
#define EPOUTEN4_size                            0x1
#define EPOUTEN4_value_mask                      0x4
#define EPOUTEN4_clear_mask                      0xFB

#define EP4OUTEN                                 0x2
#define EP4OUTEN_address                         0xF6E
#define EP4OUTEN_position                        0x2
#define EP4OUTEN_size                            0x1
#define EP4OUTEN_value_mask                      0x4
#define EP4OUTEN_clear_mask                      0xFB

#define EPCONDIS4                                0x3
#define EPCONDIS4_address                        0xF6E
#define EPCONDIS4_position                       0x3
#define EPCONDIS4_size                           0x1
#define EPCONDIS4_value_mask                     0x8
#define EPCONDIS4_clear_mask                     0xF7

#define EP4CONDIS                                0x3
#define EP4CONDIS_address                        0xF6E
#define EP4CONDIS_position                       0x3
#define EP4CONDIS_size                           0x1
#define EP4CONDIS_value_mask                     0x8
#define EP4CONDIS_clear_mask                     0xF7

#define UEP4_EPCONDIS                            0x3
#define UEP4_EPCONDIS_address                    0xF6E
#define UEP4_EPCONDIS_position                   0x3
#define UEP4_EPCONDIS_size                       0x1
#define UEP4_EPCONDIS_value_mask                 0x8
#define UEP4_EPCONDIS_clear_mask                 0xF7

#define EPHSHK4                                  0x4
#define EPHSHK4_address                          0xF6E
#define EPHSHK4_position                         0x4
#define EPHSHK4_size                             0x1
#define EPHSHK4_value_mask                       0x10
#define EPHSHK4_clear_mask                       0xEF

#define EP4HSHK                                  0x4
#define EP4HSHK_address                          0xF6E
#define EP4HSHK_position                         0x4
#define EP4HSHK_size                             0x1
#define EP4HSHK_value_mask                       0x10
#define EP4HSHK_clear_mask                       0xEF

#define UEP4_EPHSHK                              0x4
#define UEP4_EPHSHK_address                      0xF6E
#define UEP4_EPHSHK_position                     0x4
#define UEP4_EPHSHK_size                         0x1
#define UEP4_EPHSHK_value_mask                   0x10
#define UEP4_EPHSHK_clear_mask                   0xEF


/*------------------------------------------------------------------------#
| UEP5                                                              0xF6F |
#-------------------------------------------------------------------------#
| - | - | - | UEP5_EPHSHK | EP5CONDIS | EPOUTEN5 | UEP5_EPINEN | EP5STALL |
#-------------------------------------------------------------------------#
| 7 | 6 | 5 | 4           | 3         | 2        | 1           | 0        |
#------------------------------------------------------------------------*/

#define UEP5                                     0x0
#define UEP5_address                             0xF6F
#define UEP5_position                            0x0
#define UEP5_size                                0x8
#define UEP5_value_mask                          0xFF
#define UEP5_clear_mask                          0x0

#define EP5STALL                                 0x0
#define EP5STALL_address                         0xF6F
#define EP5STALL_position                        0x0
#define EP5STALL_size                            0x1
#define EP5STALL_value_mask                      0x1
#define EP5STALL_clear_mask                      0xFE

#define UEP5_EPSTALL                             0x0
#define UEP5_EPSTALL_address                     0xF6F
#define UEP5_EPSTALL_position                    0x0
#define UEP5_EPSTALL_size                        0x1
#define UEP5_EPSTALL_value_mask                  0x1
#define UEP5_EPSTALL_clear_mask                  0xFE

#define EPSTALL5                                 0x0
#define EPSTALL5_address                         0xF6F
#define EPSTALL5_position                        0x0
#define EPSTALL5_size                            0x1
#define EPSTALL5_value_mask                      0x1
#define EPSTALL5_clear_mask                      0xFE

#define EPINEN5                                  0x1
#define EPINEN5_address                          0xF6F
#define EPINEN5_position                         0x1
#define EPINEN5_size                             0x1
#define EPINEN5_value_mask                       0x2
#define EPINEN5_clear_mask                       0xFD

#define UEP5_EPINEN                              0x1
#define UEP5_EPINEN_address                      0xF6F
#define UEP5_EPINEN_position                     0x1
#define UEP5_EPINEN_size                         0x1
#define UEP5_EPINEN_value_mask                   0x2
#define UEP5_EPINEN_clear_mask                   0xFD

#define EP5INEN                                  0x1
#define EP5INEN_address                          0xF6F
#define EP5INEN_position                         0x1
#define EP5INEN_size                             0x1
#define EP5INEN_value_mask                       0x2
#define EP5INEN_clear_mask                       0xFD

#define EPOUTEN5                                 0x2
#define EPOUTEN5_address                         0xF6F
#define EPOUTEN5_position                        0x2
#define EPOUTEN5_size                            0x1
#define EPOUTEN5_value_mask                      0x4
#define EPOUTEN5_clear_mask                      0xFB

#define UEP5_EPOUTEN                             0x2
#define UEP5_EPOUTEN_address                     0xF6F
#define UEP5_EPOUTEN_position                    0x2
#define UEP5_EPOUTEN_size                        0x1
#define UEP5_EPOUTEN_value_mask                  0x4
#define UEP5_EPOUTEN_clear_mask                  0xFB

#define EP5OUTEN                                 0x2
#define EP5OUTEN_address                         0xF6F
#define EP5OUTEN_position                        0x2
#define EP5OUTEN_size                            0x1
#define EP5OUTEN_value_mask                      0x4
#define EP5OUTEN_clear_mask                      0xFB

#define EPCONDIS5                                0x3
#define EPCONDIS5_address                        0xF6F
#define EPCONDIS5_position                       0x3
#define EPCONDIS5_size                           0x1
#define EPCONDIS5_value_mask                     0x8
#define EPCONDIS5_clear_mask                     0xF7

#define EP5CONDIS                                0x3
#define EP5CONDIS_address                        0xF6F
#define EP5CONDIS_position                       0x3
#define EP5CONDIS_size                           0x1
#define EP5CONDIS_value_mask                     0x8
#define EP5CONDIS_clear_mask                     0xF7

#define UEP5_EPCONDIS                            0x3
#define UEP5_EPCONDIS_address                    0xF6F
#define UEP5_EPCONDIS_position                   0x3
#define UEP5_EPCONDIS_size                       0x1
#define UEP5_EPCONDIS_value_mask                 0x8
#define UEP5_EPCONDIS_clear_mask                 0xF7

#define UEP5_EPHSHK                              0x4
#define UEP5_EPHSHK_address                      0xF6F
#define UEP5_EPHSHK_position                     0x4
#define UEP5_EPHSHK_size                         0x1
#define UEP5_EPHSHK_value_mask                   0x10
#define UEP5_EPHSHK_clear_mask                   0xEF

#define EPHSHK5                                  0x4
#define EPHSHK5_address                          0xF6F
#define EPHSHK5_position                         0x4
#define EPHSHK5_size                             0x1
#define EPHSHK5_value_mask                       0x10
#define EPHSHK5_clear_mask                       0xEF

#define EP5HSHK                                  0x4
#define EP5HSHK_address                          0xF6F
#define EP5HSHK_position                         0x4
#define EP5HSHK_size                             0x1
#define EP5HSHK_value_mask                       0x10
#define EP5HSHK_clear_mask                       0xEF


/*----------------------------------------------------------------------------#
| UEP6                                                                  0xF70 |
#-----------------------------------------------------------------------------#
| - | - | - | UEP6_EPHSHK | UEP6_EPCONDIS | EP6OUTEN | EPINEN6 | UEP6_EPSTALL |
#-----------------------------------------------------------------------------#
| 7 | 6 | 5 | 4           | 3             | 2        | 1       | 0            |
#----------------------------------------------------------------------------*/

#define UEP6                                     0x0
#define UEP6_address                             0xF70
#define UEP6_position                            0x0
#define UEP6_size                                0x8
#define UEP6_value_mask                          0xFF
#define UEP6_clear_mask                          0x0

#define EPSTALL6                                 0x0
#define EPSTALL6_address                         0xF70
#define EPSTALL6_position                        0x0
#define EPSTALL6_size                            0x1
#define EPSTALL6_value_mask                      0x1
#define EPSTALL6_clear_mask                      0xFE

#define UEP6_EPSTALL                             0x0
#define UEP6_EPSTALL_address                     0xF70
#define UEP6_EPSTALL_position                    0x0
#define UEP6_EPSTALL_size                        0x1
#define UEP6_EPSTALL_value_mask                  0x1
#define UEP6_EPSTALL_clear_mask                  0xFE

#define EP6STALL                                 0x0
#define EP6STALL_address                         0xF70
#define EP6STALL_position                        0x0
#define EP6STALL_size                            0x1
#define EP6STALL_value_mask                      0x1
#define EP6STALL_clear_mask                      0xFE

#define EP6INEN                                  0x1
#define EP6INEN_address                          0xF70
#define EP6INEN_position                         0x1
#define EP6INEN_size                             0x1
#define EP6INEN_value_mask                       0x2
#define EP6INEN_clear_mask                       0xFD

#define UEP6_EPINEN                              0x1
#define UEP6_EPINEN_address                      0xF70
#define UEP6_EPINEN_position                     0x1
#define UEP6_EPINEN_size                         0x1
#define UEP6_EPINEN_value_mask                   0x2
#define UEP6_EPINEN_clear_mask                   0xFD

#define EPINEN6                                  0x1
#define EPINEN6_address                          0xF70
#define EPINEN6_position                         0x1
#define EPINEN6_size                             0x1
#define EPINEN6_value_mask                       0x2
#define EPINEN6_clear_mask                       0xFD

#define EP6OUTEN                                 0x2
#define EP6OUTEN_address                         0xF70
#define EP6OUTEN_position                        0x2
#define EP6OUTEN_size                            0x1
#define EP6OUTEN_value_mask                      0x4
#define EP6OUTEN_clear_mask                      0xFB

#define EPOUTEN6                                 0x2
#define EPOUTEN6_address                         0xF70
#define EPOUTEN6_position                        0x2
#define EPOUTEN6_size                            0x1
#define EPOUTEN6_value_mask                      0x4
#define EPOUTEN6_clear_mask                      0xFB

#define UEP6_EPOUTEN                             0x2
#define UEP6_EPOUTEN_address                     0xF70
#define UEP6_EPOUTEN_position                    0x2
#define UEP6_EPOUTEN_size                        0x1
#define UEP6_EPOUTEN_value_mask                  0x4
#define UEP6_EPOUTEN_clear_mask                  0xFB

#define UEP6_EPCONDIS                            0x3
#define UEP6_EPCONDIS_address                    0xF70
#define UEP6_EPCONDIS_position                   0x3
#define UEP6_EPCONDIS_size                       0x1
#define UEP6_EPCONDIS_value_mask                 0x8
#define UEP6_EPCONDIS_clear_mask                 0xF7

#define EP6CONDIS                                0x3
#define EP6CONDIS_address                        0xF70
#define EP6CONDIS_position                       0x3
#define EP6CONDIS_size                           0x1
#define EP6CONDIS_value_mask                     0x8
#define EP6CONDIS_clear_mask                     0xF7

#define EPCONDIS6                                0x3
#define EPCONDIS6_address                        0xF70
#define EPCONDIS6_position                       0x3
#define EPCONDIS6_size                           0x1
#define EPCONDIS6_value_mask                     0x8
#define EPCONDIS6_clear_mask                     0xF7

#define EPHSHK6                                  0x4
#define EPHSHK6_address                          0xF70
#define EPHSHK6_position                         0x4
#define EPHSHK6_size                             0x1
#define EPHSHK6_value_mask                       0x10
#define EPHSHK6_clear_mask                       0xEF

#define UEP6_EPHSHK                              0x4
#define UEP6_EPHSHK_address                      0xF70
#define UEP6_EPHSHK_position                     0x4
#define UEP6_EPHSHK_size                         0x1
#define UEP6_EPHSHK_value_mask                   0x10
#define UEP6_EPHSHK_clear_mask                   0xEF

#define EP6HSHK                                  0x4
#define EP6HSHK_address                          0xF70
#define EP6HSHK_position                         0x4
#define EP6HSHK_size                             0x1
#define EP6HSHK_value_mask                       0x10
#define EP6HSHK_clear_mask                       0xEF


/*--------------------------------------------------------------------#
| UEP7                                                          0xF71 |
#---------------------------------------------------------------------#
| - | - | - | EP7HSHK | UEP7_EPCONDIS | EP7OUTEN | EP7INEN | EP7STALL |
#---------------------------------------------------------------------#
| 7 | 6 | 5 | 4       | 3             | 2        | 1       | 0        |
#--------------------------------------------------------------------*/

#define UEP7                                     0x0
#define UEP7_address                             0xF71
#define UEP7_position                            0x0
#define UEP7_size                                0x8
#define UEP7_value_mask                          0xFF
#define UEP7_clear_mask                          0x0

#define UEP7_EPSTALL                             0x0
#define UEP7_EPSTALL_address                     0xF71
#define UEP7_EPSTALL_position                    0x0
#define UEP7_EPSTALL_size                        0x1
#define UEP7_EPSTALL_value_mask                  0x1
#define UEP7_EPSTALL_clear_mask                  0xFE

#define EP7STALL                                 0x0
#define EP7STALL_address                         0xF71
#define EP7STALL_position                        0x0
#define EP7STALL_size                            0x1
#define EP7STALL_value_mask                      0x1
#define EP7STALL_clear_mask                      0xFE

#define EPSTALL7                                 0x0
#define EPSTALL7_address                         0xF71
#define EPSTALL7_position                        0x0
#define EPSTALL7_size                            0x1
#define EPSTALL7_value_mask                      0x1
#define EPSTALL7_clear_mask                      0xFE

#define EP7INEN                                  0x1
#define EP7INEN_address                          0xF71
#define EP7INEN_position                         0x1
#define EP7INEN_size                             0x1
#define EP7INEN_value_mask                       0x2
#define EP7INEN_clear_mask                       0xFD

#define EPINEN7                                  0x1
#define EPINEN7_address                          0xF71
#define EPINEN7_position                         0x1
#define EPINEN7_size                             0x1
#define EPINEN7_value_mask                       0x2
#define EPINEN7_clear_mask                       0xFD

#define UEP7_EPINEN                              0x1
#define UEP7_EPINEN_address                      0xF71
#define UEP7_EPINEN_position                     0x1
#define UEP7_EPINEN_size                         0x1
#define UEP7_EPINEN_value_mask                   0x2
#define UEP7_EPINEN_clear_mask                   0xFD

#define EP7OUTEN                                 0x2
#define EP7OUTEN_address                         0xF71
#define EP7OUTEN_position                        0x2
#define EP7OUTEN_size                            0x1
#define EP7OUTEN_value_mask                      0x4
#define EP7OUTEN_clear_mask                      0xFB

#define UEP7_EPOUTEN                             0x2
#define UEP7_EPOUTEN_address                     0xF71
#define UEP7_EPOUTEN_position                    0x2
#define UEP7_EPOUTEN_size                        0x1
#define UEP7_EPOUTEN_value_mask                  0x4
#define UEP7_EPOUTEN_clear_mask                  0xFB

#define EPOUTEN7                                 0x2
#define EPOUTEN7_address                         0xF71
#define EPOUTEN7_position                        0x2
#define EPOUTEN7_size                            0x1
#define EPOUTEN7_value_mask                      0x4
#define EPOUTEN7_clear_mask                      0xFB

#define UEP7_EPCONDIS                            0x3
#define UEP7_EPCONDIS_address                    0xF71
#define UEP7_EPCONDIS_position                   0x3
#define UEP7_EPCONDIS_size                       0x1
#define UEP7_EPCONDIS_value_mask                 0x8
#define UEP7_EPCONDIS_clear_mask                 0xF7

#define EP7CONDIS                                0x3
#define EP7CONDIS_address                        0xF71
#define EP7CONDIS_position                       0x3
#define EP7CONDIS_size                           0x1
#define EP7CONDIS_value_mask                     0x8
#define EP7CONDIS_clear_mask                     0xF7

#define EPCONDIS7                                0x3
#define EPCONDIS7_address                        0xF71
#define EPCONDIS7_position                       0x3
#define EPCONDIS7_size                           0x1
#define EPCONDIS7_value_mask                     0x8
#define EPCONDIS7_clear_mask                     0xF7

#define EPHSHK7                                  0x4
#define EPHSHK7_address                          0xF71
#define EPHSHK7_position                         0x4
#define EPHSHK7_size                             0x1
#define EPHSHK7_value_mask                       0x10
#define EPHSHK7_clear_mask                       0xEF

#define UEP7_EPHSHK                              0x4
#define UEP7_EPHSHK_address                      0xF71
#define UEP7_EPHSHK_position                     0x4
#define UEP7_EPHSHK_size                         0x1
#define UEP7_EPHSHK_value_mask                   0x10
#define UEP7_EPHSHK_clear_mask                   0xEF

#define EP7HSHK                                  0x4
#define EP7HSHK_address                          0xF71
#define EP7HSHK_position                         0x4
#define EP7HSHK_size                             0x1
#define EP7HSHK_value_mask                       0x10
#define EP7HSHK_clear_mask                       0xEF


/*--------------------------------------------------------------------------------#
| UEP8                                                                      0xF72 |
#---------------------------------------------------------------------------------#
| - | - | - | UEP8_EPHSHK | UEP8_EPCONDIS | UEP8_EPOUTEN | UEP8_EPINEN | EPSTALL8 |
#---------------------------------------------------------------------------------#
| 7 | 6 | 5 | 4           | 3             | 2            | 1           | 0        |
#--------------------------------------------------------------------------------*/

#define UEP8                                     0x0
#define UEP8_address                             0xF72
#define UEP8_position                            0x0
#define UEP8_size                                0x8
#define UEP8_value_mask                          0xFF
#define UEP8_clear_mask                          0x0

#define EPSTALL8                                 0x0
#define EPSTALL8_address                         0xF72
#define EPSTALL8_position                        0x0
#define EPSTALL8_size                            0x1
#define EPSTALL8_value_mask                      0x1
#define EPSTALL8_clear_mask                      0xFE

#define UEP8_EPSTALL                             0x0
#define UEP8_EPSTALL_address                     0xF72
#define UEP8_EPSTALL_position                    0x0
#define UEP8_EPSTALL_size                        0x1
#define UEP8_EPSTALL_value_mask                  0x1
#define UEP8_EPSTALL_clear_mask                  0xFE

#define UEP8_EPINEN                              0x1
#define UEP8_EPINEN_address                      0xF72
#define UEP8_EPINEN_position                     0x1
#define UEP8_EPINEN_size                         0x1
#define UEP8_EPINEN_value_mask                   0x2
#define UEP8_EPINEN_clear_mask                   0xFD

#define EPINEN8                                  0x1
#define EPINEN8_address                          0xF72
#define EPINEN8_position                         0x1
#define EPINEN8_size                             0x1
#define EPINEN8_value_mask                       0x2
#define EPINEN8_clear_mask                       0xFD

#define UEP8_EPOUTEN                             0x2
#define UEP8_EPOUTEN_address                     0xF72
#define UEP8_EPOUTEN_position                    0x2
#define UEP8_EPOUTEN_size                        0x1
#define UEP8_EPOUTEN_value_mask                  0x4
#define UEP8_EPOUTEN_clear_mask                  0xFB

#define EPOUTEN8                                 0x2
#define EPOUTEN8_address                         0xF72
#define EPOUTEN8_position                        0x2
#define EPOUTEN8_size                            0x1
#define EPOUTEN8_value_mask                      0x4
#define EPOUTEN8_clear_mask                      0xFB

#define UEP8_EPCONDIS                            0x3
#define UEP8_EPCONDIS_address                    0xF72
#define UEP8_EPCONDIS_position                   0x3
#define UEP8_EPCONDIS_size                       0x1
#define UEP8_EPCONDIS_value_mask                 0x8
#define UEP8_EPCONDIS_clear_mask                 0xF7

#define EPCONDIS8                                0x3
#define EPCONDIS8_address                        0xF72
#define EPCONDIS8_position                       0x3
#define EPCONDIS8_size                           0x1
#define EPCONDIS8_value_mask                     0x8
#define EPCONDIS8_clear_mask                     0xF7

#define UEP8_EPHSHK                              0x4
#define UEP8_EPHSHK_address                      0xF72
#define UEP8_EPHSHK_position                     0x4
#define UEP8_EPHSHK_size                         0x1
#define UEP8_EPHSHK_value_mask                   0x10
#define UEP8_EPHSHK_clear_mask                   0xEF

#define EPHSHK8                                  0x4
#define EPHSHK8_address                          0xF72
#define EPHSHK8_position                         0x4
#define EPHSHK8_size                             0x1
#define EPHSHK8_value_mask                       0x10
#define EPHSHK8_clear_mask                       0xEF


/*--------------------------------------------------------------------------------#
| UEP9                                                                      0xF73 |
#---------------------------------------------------------------------------------#
| - | - | - | UEP9_EPHSHK | UEP9_EPCONDIS | UEP9_EPOUTEN | UEP9_EPINEN | EPSTALL9 |
#---------------------------------------------------------------------------------#
| 7 | 6 | 5 | 4           | 3             | 2            | 1           | 0        |
#--------------------------------------------------------------------------------*/

#define UEP9                                     0x0
#define UEP9_address                             0xF73
#define UEP9_position                            0x0
#define UEP9_size                                0x8
#define UEP9_value_mask                          0xFF
#define UEP9_clear_mask                          0x0

#define EPSTALL9                                 0x0
#define EPSTALL9_address                         0xF73
#define EPSTALL9_position                        0x0
#define EPSTALL9_size                            0x1
#define EPSTALL9_value_mask                      0x1
#define EPSTALL9_clear_mask                      0xFE

#define UEP9_EPSTALL                             0x0
#define UEP9_EPSTALL_address                     0xF73
#define UEP9_EPSTALL_position                    0x0
#define UEP9_EPSTALL_size                        0x1
#define UEP9_EPSTALL_value_mask                  0x1
#define UEP9_EPSTALL_clear_mask                  0xFE

#define EPINEN9                                  0x1
#define EPINEN9_address                          0xF73
#define EPINEN9_position                         0x1
#define EPINEN9_size                             0x1
#define EPINEN9_value_mask                       0x2
#define EPINEN9_clear_mask                       0xFD

#define UEP9_EPINEN                              0x1
#define UEP9_EPINEN_address                      0xF73
#define UEP9_EPINEN_position                     0x1
#define UEP9_EPINEN_size                         0x1
#define UEP9_EPINEN_value_mask                   0x2
#define UEP9_EPINEN_clear_mask                   0xFD

#define UEP9_EPOUTEN                             0x2
#define UEP9_EPOUTEN_address                     0xF73
#define UEP9_EPOUTEN_position                    0x2
#define UEP9_EPOUTEN_size                        0x1
#define UEP9_EPOUTEN_value_mask                  0x4
#define UEP9_EPOUTEN_clear_mask                  0xFB

#define EPOUTEN9                                 0x2
#define EPOUTEN9_address                         0xF73
#define EPOUTEN9_position                        0x2
#define EPOUTEN9_size                            0x1
#define EPOUTEN9_value_mask                      0x4
#define EPOUTEN9_clear_mask                      0xFB

#define UEP9_EPCONDIS                            0x3
#define UEP9_EPCONDIS_address                    0xF73
#define UEP9_EPCONDIS_position                   0x3
#define UEP9_EPCONDIS_size                       0x1
#define UEP9_EPCONDIS_value_mask                 0x8
#define UEP9_EPCONDIS_clear_mask                 0xF7

#define EPCONDIS9                                0x3
#define EPCONDIS9_address                        0xF73
#define EPCONDIS9_position                       0x3
#define EPCONDIS9_size                           0x1
#define EPCONDIS9_value_mask                     0x8
#define EPCONDIS9_clear_mask                     0xF7

#define UEP9_EPHSHK                              0x4
#define UEP9_EPHSHK_address                      0xF73
#define UEP9_EPHSHK_position                     0x4
#define UEP9_EPHSHK_size                         0x1
#define UEP9_EPHSHK_value_mask                   0x10
#define UEP9_EPHSHK_clear_mask                   0xEF

#define EPHSHK9                                  0x4
#define EPHSHK9_address                          0xF73
#define EPHSHK9_position                         0x4
#define EPHSHK9_size                             0x1
#define EPHSHK9_value_mask                       0x10
#define EPHSHK9_clear_mask                       0xEF


/*-----------------------------------------------------------------------------#
| UEP10                                                                  0xF74 |
#------------------------------------------------------------------------------#
| - | - | - | EPHSHK10 | EPCONDIS10 | UEP10_EPOUTEN | EPINEN10 | UEP10_EPSTALL |
#------------------------------------------------------------------------------#
| 7 | 6 | 5 | 4        | 3          | 2             | 1        | 0             |
#-----------------------------------------------------------------------------*/

#define UEP10                                    0x0
#define UEP10_address                            0xF74
#define UEP10_position                           0x0
#define UEP10_size                               0x8
#define UEP10_value_mask                         0xFF
#define UEP10_clear_mask                         0x0

#define EPSTALL10                                0x0
#define EPSTALL10_address                        0xF74
#define EPSTALL10_position                       0x0
#define EPSTALL10_size                           0x1
#define EPSTALL10_value_mask                     0x1
#define EPSTALL10_clear_mask                     0xFE

#define UEP10_EPSTALL                            0x0
#define UEP10_EPSTALL_address                    0xF74
#define UEP10_EPSTALL_position                   0x0
#define UEP10_EPSTALL_size                       0x1
#define UEP10_EPSTALL_value_mask                 0x1
#define UEP10_EPSTALL_clear_mask                 0xFE

#define EPINEN10                                 0x1
#define EPINEN10_address                         0xF74
#define EPINEN10_position                        0x1
#define EPINEN10_size                            0x1
#define EPINEN10_value_mask                      0x2
#define EPINEN10_clear_mask                      0xFD

#define UEP10_EPINEN                             0x1
#define UEP10_EPINEN_address                     0xF74
#define UEP10_EPINEN_position                    0x1
#define UEP10_EPINEN_size                        0x1
#define UEP10_EPINEN_value_mask                  0x2
#define UEP10_EPINEN_clear_mask                  0xFD

#define UEP10_EPOUTEN                            0x2
#define UEP10_EPOUTEN_address                    0xF74
#define UEP10_EPOUTEN_position                   0x2
#define UEP10_EPOUTEN_size                       0x1
#define UEP10_EPOUTEN_value_mask                 0x4
#define UEP10_EPOUTEN_clear_mask                 0xFB

#define EPOUTEN10                                0x2
#define EPOUTEN10_address                        0xF74
#define EPOUTEN10_position                       0x2
#define EPOUTEN10_size                           0x1
#define EPOUTEN10_value_mask                     0x4
#define EPOUTEN10_clear_mask                     0xFB

#define EPCONDIS10                               0x3
#define EPCONDIS10_address                       0xF74
#define EPCONDIS10_position                      0x3
#define EPCONDIS10_size                          0x1
#define EPCONDIS10_value_mask                    0x8
#define EPCONDIS10_clear_mask                    0xF7

#define UEP10_EPCONDIS                           0x3
#define UEP10_EPCONDIS_address                   0xF74
#define UEP10_EPCONDIS_position                  0x3
#define UEP10_EPCONDIS_size                      0x1
#define UEP10_EPCONDIS_value_mask                0x8
#define UEP10_EPCONDIS_clear_mask                0xF7

#define UEP10_EPHSHK                             0x4
#define UEP10_EPHSHK_address                     0xF74
#define UEP10_EPHSHK_position                    0x4
#define UEP10_EPHSHK_size                        0x1
#define UEP10_EPHSHK_value_mask                  0x10
#define UEP10_EPHSHK_clear_mask                  0xEF

#define EPHSHK10                                 0x4
#define EPHSHK10_address                         0xF74
#define EPHSHK10_position                        0x4
#define EPHSHK10_size                            0x1
#define EPHSHK10_value_mask                      0x10
#define EPHSHK10_clear_mask                      0xEF


/*-----------------------------------------------------------------------------#
| UEP11                                                                  0xF75 |
#------------------------------------------------------------------------------#
| - | - | - | UEP11_EPHSHK | EPCONDIS11 | EPOUTEN11 | EPINEN11 | UEP11_EPSTALL |
#------------------------------------------------------------------------------#
| 7 | 6 | 5 | 4            | 3          | 2         | 1        | 0             |
#-----------------------------------------------------------------------------*/

#define UEP11                                    0x0
#define UEP11_address                            0xF75
#define UEP11_position                           0x0
#define UEP11_size                               0x8
#define UEP11_value_mask                         0xFF
#define UEP11_clear_mask                         0x0

#define UEP11_EPSTALL                            0x0
#define UEP11_EPSTALL_address                    0xF75
#define UEP11_EPSTALL_position                   0x0
#define UEP11_EPSTALL_size                       0x1
#define UEP11_EPSTALL_value_mask                 0x1
#define UEP11_EPSTALL_clear_mask                 0xFE

#define EPSTALL11                                0x0
#define EPSTALL11_address                        0xF75
#define EPSTALL11_position                       0x0
#define EPSTALL11_size                           0x1
#define EPSTALL11_value_mask                     0x1
#define EPSTALL11_clear_mask                     0xFE

#define EPINEN11                                 0x1
#define EPINEN11_address                         0xF75
#define EPINEN11_position                        0x1
#define EPINEN11_size                            0x1
#define EPINEN11_value_mask                      0x2
#define EPINEN11_clear_mask                      0xFD

#define UEP11_EPINEN                             0x1
#define UEP11_EPINEN_address                     0xF75
#define UEP11_EPINEN_position                    0x1
#define UEP11_EPINEN_size                        0x1
#define UEP11_EPINEN_value_mask                  0x2
#define UEP11_EPINEN_clear_mask                  0xFD

#define UEP11_EPOUTEN                            0x2
#define UEP11_EPOUTEN_address                    0xF75
#define UEP11_EPOUTEN_position                   0x2
#define UEP11_EPOUTEN_size                       0x1
#define UEP11_EPOUTEN_value_mask                 0x4
#define UEP11_EPOUTEN_clear_mask                 0xFB

#define EPOUTEN11                                0x2
#define EPOUTEN11_address                        0xF75
#define EPOUTEN11_position                       0x2
#define EPOUTEN11_size                           0x1
#define EPOUTEN11_value_mask                     0x4
#define EPOUTEN11_clear_mask                     0xFB

#define EPCONDIS11                               0x3
#define EPCONDIS11_address                       0xF75
#define EPCONDIS11_position                      0x3
#define EPCONDIS11_size                          0x1
#define EPCONDIS11_value_mask                    0x8
#define EPCONDIS11_clear_mask                    0xF7

#define UEP11_EPCONDIS                           0x3
#define UEP11_EPCONDIS_address                   0xF75
#define UEP11_EPCONDIS_position                  0x3
#define UEP11_EPCONDIS_size                      0x1
#define UEP11_EPCONDIS_value_mask                0x8
#define UEP11_EPCONDIS_clear_mask                0xF7

#define UEP11_EPHSHK                             0x4
#define UEP11_EPHSHK_address                     0xF75
#define UEP11_EPHSHK_position                    0x4
#define UEP11_EPHSHK_size                        0x1
#define UEP11_EPHSHK_value_mask                  0x10
#define UEP11_EPHSHK_clear_mask                  0xEF

#define EPHSHK11                                 0x4
#define EPHSHK11_address                         0xF75
#define EPHSHK11_position                        0x4
#define EPHSHK11_size                            0x1
#define EPHSHK11_value_mask                      0x10
#define EPHSHK11_clear_mask                      0xEF


/*-----------------------------------------------------------------------------#
| UEP12                                                                  0xF76 |
#------------------------------------------------------------------------------#
| - | - | - | EPHSHK12 | UEP12_EPCONDIS | EPOUTEN12 | UEP12_EPINEN | EPSTALL12 |
#------------------------------------------------------------------------------#
| 7 | 6 | 5 | 4        | 3              | 2         | 1            | 0         |
#-----------------------------------------------------------------------------*/

#define UEP12                                    0x0
#define UEP12_address                            0xF76
#define UEP12_position                           0x0
#define UEP12_size                               0x8
#define UEP12_value_mask                         0xFF
#define UEP12_clear_mask                         0x0

#define EPSTALL12                                0x0
#define EPSTALL12_address                        0xF76
#define EPSTALL12_position                       0x0
#define EPSTALL12_size                           0x1
#define EPSTALL12_value_mask                     0x1
#define EPSTALL12_clear_mask                     0xFE

#define UEP12_EPSTALL                            0x0
#define UEP12_EPSTALL_address                    0xF76
#define UEP12_EPSTALL_position                   0x0
#define UEP12_EPSTALL_size                       0x1
#define UEP12_EPSTALL_value_mask                 0x1
#define UEP12_EPSTALL_clear_mask                 0xFE

#define UEP12_EPINEN                             0x1
#define UEP12_EPINEN_address                     0xF76
#define UEP12_EPINEN_position                    0x1
#define UEP12_EPINEN_size                        0x1
#define UEP12_EPINEN_value_mask                  0x2
#define UEP12_EPINEN_clear_mask                  0xFD

#define EPINEN12                                 0x1
#define EPINEN12_address                         0xF76
#define EPINEN12_position                        0x1
#define EPINEN12_size                            0x1
#define EPINEN12_value_mask                      0x2
#define EPINEN12_clear_mask                      0xFD

#define EPOUTEN12                                0x2
#define EPOUTEN12_address                        0xF76
#define EPOUTEN12_position                       0x2
#define EPOUTEN12_size                           0x1
#define EPOUTEN12_value_mask                     0x4
#define EPOUTEN12_clear_mask                     0xFB

#define UEP12_EPOUTEN                            0x2
#define UEP12_EPOUTEN_address                    0xF76
#define UEP12_EPOUTEN_position                   0x2
#define UEP12_EPOUTEN_size                       0x1
#define UEP12_EPOUTEN_value_mask                 0x4
#define UEP12_EPOUTEN_clear_mask                 0xFB

#define EPCONDIS12                               0x3
#define EPCONDIS12_address                       0xF76
#define EPCONDIS12_position                      0x3
#define EPCONDIS12_size                          0x1
#define EPCONDIS12_value_mask                    0x8
#define EPCONDIS12_clear_mask                    0xF7

#define UEP12_EPCONDIS                           0x3
#define UEP12_EPCONDIS_address                   0xF76
#define UEP12_EPCONDIS_position                  0x3
#define UEP12_EPCONDIS_size                      0x1
#define UEP12_EPCONDIS_value_mask                0x8
#define UEP12_EPCONDIS_clear_mask                0xF7

#define EPHSHK12                                 0x4
#define EPHSHK12_address                         0xF76
#define EPHSHK12_position                        0x4
#define EPHSHK12_size                            0x1
#define EPHSHK12_value_mask                      0x10
#define EPHSHK12_clear_mask                      0xEF

#define UEP12_EPHSHK                             0x4
#define UEP12_EPHSHK_address                     0xF76
#define UEP12_EPHSHK_position                    0x4
#define UEP12_EPHSHK_size                        0x1
#define UEP12_EPHSHK_value_mask                  0x10
#define UEP12_EPHSHK_clear_mask                  0xEF


/*-----------------------------------------------------------------------------#
| UEP13                                                                  0xF77 |
#------------------------------------------------------------------------------#
| - | - | - | EPHSHK13 | EPCONDIS13 | UEP13_EPOUTEN | EPINEN13 | UEP13_EPSTALL |
#------------------------------------------------------------------------------#
| 7 | 6 | 5 | 4        | 3          | 2             | 1        | 0             |
#-----------------------------------------------------------------------------*/

#define UEP13                                    0x0
#define UEP13_address                            0xF77
#define UEP13_position                           0x0
#define UEP13_size                               0x8
#define UEP13_value_mask                         0xFF
#define UEP13_clear_mask                         0x0

#define UEP13_EPSTALL                            0x0
#define UEP13_EPSTALL_address                    0xF77
#define UEP13_EPSTALL_position                   0x0
#define UEP13_EPSTALL_size                       0x1
#define UEP13_EPSTALL_value_mask                 0x1
#define UEP13_EPSTALL_clear_mask                 0xFE

#define EPSTALL13                                0x0
#define EPSTALL13_address                        0xF77
#define EPSTALL13_position                       0x0
#define EPSTALL13_size                           0x1
#define EPSTALL13_value_mask                     0x1
#define EPSTALL13_clear_mask                     0xFE

#define EPINEN13                                 0x1
#define EPINEN13_address                         0xF77
#define EPINEN13_position                        0x1
#define EPINEN13_size                            0x1
#define EPINEN13_value_mask                      0x2
#define EPINEN13_clear_mask                      0xFD

#define UEP13_EPINEN                             0x1
#define UEP13_EPINEN_address                     0xF77
#define UEP13_EPINEN_position                    0x1
#define UEP13_EPINEN_size                        0x1
#define UEP13_EPINEN_value_mask                  0x2
#define UEP13_EPINEN_clear_mask                  0xFD

#define UEP13_EPOUTEN                            0x2
#define UEP13_EPOUTEN_address                    0xF77
#define UEP13_EPOUTEN_position                   0x2
#define UEP13_EPOUTEN_size                       0x1
#define UEP13_EPOUTEN_value_mask                 0x4
#define UEP13_EPOUTEN_clear_mask                 0xFB

#define EPOUTEN13                                0x2
#define EPOUTEN13_address                        0xF77
#define EPOUTEN13_position                       0x2
#define EPOUTEN13_size                           0x1
#define EPOUTEN13_value_mask                     0x4
#define EPOUTEN13_clear_mask                     0xFB

#define EPCONDIS13                               0x3
#define EPCONDIS13_address                       0xF77
#define EPCONDIS13_position                      0x3
#define EPCONDIS13_size                          0x1
#define EPCONDIS13_value_mask                    0x8
#define EPCONDIS13_clear_mask                    0xF7

#define UEP13_EPCONDIS                           0x3
#define UEP13_EPCONDIS_address                   0xF77
#define UEP13_EPCONDIS_position                  0x3
#define UEP13_EPCONDIS_size                      0x1
#define UEP13_EPCONDIS_value_mask                0x8
#define UEP13_EPCONDIS_clear_mask                0xF7

#define EPHSHK13                                 0x4
#define EPHSHK13_address                         0xF77
#define EPHSHK13_position                        0x4
#define EPHSHK13_size                            0x1
#define EPHSHK13_value_mask                      0x10
#define EPHSHK13_clear_mask                      0xEF

#define UEP13_EPHSHK                             0x4
#define UEP13_EPHSHK_address                     0xF77
#define UEP13_EPHSHK_position                    0x4
#define UEP13_EPHSHK_size                        0x1
#define UEP13_EPHSHK_value_mask                  0x10
#define UEP13_EPHSHK_clear_mask                  0xEF


/*-----------------------------------------------------------------------------#
| UEP14                                                                  0xF78 |
#------------------------------------------------------------------------------#
| - | - | - | UEP14_EPHSHK | EPCONDIS14 | EPOUTEN14 | EPINEN14 | UEP14_EPSTALL |
#------------------------------------------------------------------------------#
| 7 | 6 | 5 | 4            | 3          | 2         | 1        | 0             |
#-----------------------------------------------------------------------------*/

#define UEP14                                    0x0
#define UEP14_address                            0xF78
#define UEP14_position                           0x0
#define UEP14_size                               0x8
#define UEP14_value_mask                         0xFF
#define UEP14_clear_mask                         0x0

#define UEP14_EPSTALL                            0x0
#define UEP14_EPSTALL_address                    0xF78
#define UEP14_EPSTALL_position                   0x0
#define UEP14_EPSTALL_size                       0x1
#define UEP14_EPSTALL_value_mask                 0x1
#define UEP14_EPSTALL_clear_mask                 0xFE

#define EPSTALL14                                0x0
#define EPSTALL14_address                        0xF78
#define EPSTALL14_position                       0x0
#define EPSTALL14_size                           0x1
#define EPSTALL14_value_mask                     0x1
#define EPSTALL14_clear_mask                     0xFE

#define EPINEN14                                 0x1
#define EPINEN14_address                         0xF78
#define EPINEN14_position                        0x1
#define EPINEN14_size                            0x1
#define EPINEN14_value_mask                      0x2
#define EPINEN14_clear_mask                      0xFD

#define UEP14_EPINEN                             0x1
#define UEP14_EPINEN_address                     0xF78
#define UEP14_EPINEN_position                    0x1
#define UEP14_EPINEN_size                        0x1
#define UEP14_EPINEN_value_mask                  0x2
#define UEP14_EPINEN_clear_mask                  0xFD

#define UEP14_EPOUTEN                            0x2
#define UEP14_EPOUTEN_address                    0xF78
#define UEP14_EPOUTEN_position                   0x2
#define UEP14_EPOUTEN_size                       0x1
#define UEP14_EPOUTEN_value_mask                 0x4
#define UEP14_EPOUTEN_clear_mask                 0xFB

#define EPOUTEN14                                0x2
#define EPOUTEN14_address                        0xF78
#define EPOUTEN14_position                       0x2
#define EPOUTEN14_size                           0x1
#define EPOUTEN14_value_mask                     0x4
#define EPOUTEN14_clear_mask                     0xFB

#define EPCONDIS14                               0x3
#define EPCONDIS14_address                       0xF78
#define EPCONDIS14_position                      0x3
#define EPCONDIS14_size                          0x1
#define EPCONDIS14_value_mask                    0x8
#define EPCONDIS14_clear_mask                    0xF7

#define UEP14_EPCONDIS                           0x3
#define UEP14_EPCONDIS_address                   0xF78
#define UEP14_EPCONDIS_position                  0x3
#define UEP14_EPCONDIS_size                      0x1
#define UEP14_EPCONDIS_value_mask                0x8
#define UEP14_EPCONDIS_clear_mask                0xF7

#define UEP14_EPHSHK                             0x4
#define UEP14_EPHSHK_address                     0xF78
#define UEP14_EPHSHK_position                    0x4
#define UEP14_EPHSHK_size                        0x1
#define UEP14_EPHSHK_value_mask                  0x10
#define UEP14_EPHSHK_clear_mask                  0xEF

#define EPHSHK14                                 0x4
#define EPHSHK14_address                         0xF78
#define EPHSHK14_position                        0x4
#define EPHSHK14_size                            0x1
#define EPHSHK14_value_mask                      0x10
#define EPHSHK14_clear_mask                      0xEF


/*---------------------------------------------------------------------------------#
| UEP15                                                                      0xF79 |
#----------------------------------------------------------------------------------#
| - | - | - | UEP15_EPHSHK | EPCONDIS15 | EPOUTEN15 | UEP15_EPINEN | UEP15_EPSTALL |
#----------------------------------------------------------------------------------#
| 7 | 6 | 5 | 4            | 3          | 2         | 1            | 0             |
#---------------------------------------------------------------------------------*/

#define UEP15                                    0x0
#define UEP15_address                            0xF79
#define UEP15_position                           0x0
#define UEP15_size                               0x8
#define UEP15_value_mask                         0xFF
#define UEP15_clear_mask                         0x0

#define UEP15_EPSTALL                            0x0
#define UEP15_EPSTALL_address                    0xF79
#define UEP15_EPSTALL_position                   0x0
#define UEP15_EPSTALL_size                       0x1
#define UEP15_EPSTALL_value_mask                 0x1
#define UEP15_EPSTALL_clear_mask                 0xFE

#define EPSTALL15                                0x0
#define EPSTALL15_address                        0xF79
#define EPSTALL15_position                       0x0
#define EPSTALL15_size                           0x1
#define EPSTALL15_value_mask                     0x1
#define EPSTALL15_clear_mask                     0xFE

#define UEP15_EPINEN                             0x1
#define UEP15_EPINEN_address                     0xF79
#define UEP15_EPINEN_position                    0x1
#define UEP15_EPINEN_size                        0x1
#define UEP15_EPINEN_value_mask                  0x2
#define UEP15_EPINEN_clear_mask                  0xFD

#define EPINEN15                                 0x1
#define EPINEN15_address                         0xF79
#define EPINEN15_position                        0x1
#define EPINEN15_size                            0x1
#define EPINEN15_value_mask                      0x2
#define EPINEN15_clear_mask                      0xFD

#define UEP15_EPOUTEN                            0x2
#define UEP15_EPOUTEN_address                    0xF79
#define UEP15_EPOUTEN_position                   0x2
#define UEP15_EPOUTEN_size                       0x1
#define UEP15_EPOUTEN_value_mask                 0x4
#define UEP15_EPOUTEN_clear_mask                 0xFB

#define EPOUTEN15                                0x2
#define EPOUTEN15_address                        0xF79
#define EPOUTEN15_position                       0x2
#define EPOUTEN15_size                           0x1
#define EPOUTEN15_value_mask                     0x4
#define EPOUTEN15_clear_mask                     0xFB

#define EPCONDIS15                               0x3
#define EPCONDIS15_address                       0xF79
#define EPCONDIS15_position                      0x3
#define EPCONDIS15_size                          0x1
#define EPCONDIS15_value_mask                    0x8
#define EPCONDIS15_clear_mask                    0xF7

#define UEP15_EPCONDIS                           0x3
#define UEP15_EPCONDIS_address                   0xF79
#define UEP15_EPCONDIS_position                  0x3
#define UEP15_EPCONDIS_size                      0x1
#define UEP15_EPCONDIS_value_mask                0x8
#define UEP15_EPCONDIS_clear_mask                0xF7

#define UEP15_EPHSHK                             0x4
#define UEP15_EPHSHK_address                     0xF79
#define UEP15_EPHSHK_position                    0x4
#define UEP15_EPHSHK_size                        0x1
#define UEP15_EPHSHK_value_mask                  0x10
#define UEP15_EPHSHK_clear_mask                  0xEF

#define EPHSHK15                                 0x4
#define EPHSHK15_address                         0xF79
#define EPHSHK15_position                        0x4
#define EPHSHK15_size                            0x1
#define EPHSHK15_value_mask                      0x10
#define EPHSHK15_clear_mask                      0xEF


/*---------------------------------------#
| SLRCON                           0xF7A |
#----------------------------------------#
| - | - | - | - | - | SLRC | SLRB | SLRA |
#----------------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2    | 1    | 0    |
#---------------------------------------*/

#define SLRCON                                   0x0
#define SLRCON_address                           0xF7A
#define SLRCON_position                          0x0
#define SLRCON_size                              0x8
#define SLRCON_value_mask                        0xFF
#define SLRCON_clear_mask                        0x0

#define SLRA                                     0x0
#define SLRA_address                             0xF7A
#define SLRA_position                            0x0
#define SLRA_size                                0x1
#define SLRA_value_mask                          0x1
#define SLRA_clear_mask                          0xFE

#define SLRB                                     0x1
#define SLRB_address                             0xF7A
#define SLRB_position                            0x1
#define SLRB_size                                0x1
#define SLRB_value_mask                          0x2
#define SLRB_clear_mask                          0xFD

#define SLRC                                     0x2
#define SLRC_address                             0xF7A
#define SLRC_position                            0x2
#define SLRC_size                                0x1
#define SLRC_value_mask                          0x4
#define SLRC_clear_mask                          0xFB


/*--------------------------------------------------#
| VREFCON2                                    0xF7B |
#---------------------------------------------------#
| - | - | - | DACR4 | DACR3 | DACR2 | DACR1 | DACR0 |
#---------------------------------------------------#
| 7 | 6 | 5 | 4     | 3     | 2     | 1     | 0     |
#--------------------------------------------------*/

#define VREFCON2                                 0x0
#define VREFCON2_address                         0xF7B
#define VREFCON2_position                        0x0
#define VREFCON2_size                            0x8
#define VREFCON2_value_mask                      0xFF
#define VREFCON2_clear_mask                      0x0

#define DACR0                                    0x0
#define DACR0_address                            0xF7B
#define DACR0_position                           0x0
#define DACR0_size                               0x1
#define DACR0_value_mask                         0x1
#define DACR0_clear_mask                         0xFE

#define DACR                                     0x0
#define DACR_address                             0xF7B
#define DACR_position                            0x0
#define DACR_size                                0x5
#define DACR_value_mask                          0x1F
#define DACR_clear_mask                          0xE0

#define DACR1                                    0x1
#define DACR1_address                            0xF7B
#define DACR1_position                           0x1
#define DACR1_size                               0x1
#define DACR1_value_mask                         0x2
#define DACR1_clear_mask                         0xFD

#define DACR2                                    0x2
#define DACR2_address                            0xF7B
#define DACR2_position                           0x2
#define DACR2_size                               0x1
#define DACR2_value_mask                         0x4
#define DACR2_clear_mask                         0xFB

#define DACR3                                    0x3
#define DACR3_address                            0xF7B
#define DACR3_position                           0x3
#define DACR3_size                               0x1
#define DACR3_value_mask                         0x8
#define DACR3_clear_mask                         0xF7

#define DACR4                                    0x4
#define DACR4_address                            0xF7B
#define DACR4_position                           0x4
#define DACR4_size                               0x1
#define DACR4_value_mask                         0x10
#define DACR4_clear_mask                         0xEF


/*------------------------------------------------------------#
| VREFCON1                                              0xF7C |
#-------------------------------------------------------------#
| DACEN | DACLPS | DACOE | - | DACPSS1 | DACPSS0 | - | DACNSS |
#-------------------------------------------------------------#
| 7     | 6      | 5     | 4 | 3       | 2       | 1 | 0      |
#------------------------------------------------------------*/

#define VREFCON1                                 0x0
#define VREFCON1_address                         0xF7C
#define VREFCON1_position                        0x0
#define VREFCON1_size                            0x8
#define VREFCON1_value_mask                      0xFF
#define VREFCON1_clear_mask                      0x0

#define DACNSS                                   0x0
#define DACNSS_address                           0xF7C
#define DACNSS_position                          0x0
#define DACNSS_size                              0x1
#define DACNSS_value_mask                        0x1
#define DACNSS_clear_mask                        0xFE

#define DACPSS                                   0x2
#define DACPSS_address                           0xF7C
#define DACPSS_position                          0x2
#define DACPSS_size                              0x2
#define DACPSS_value_mask                        0xC
#define DACPSS_clear_mask                        0xF3

#define DACPSS0                                  0x2
#define DACPSS0_address                          0xF7C
#define DACPSS0_position                         0x2
#define DACPSS0_size                             0x1
#define DACPSS0_value_mask                       0x4
#define DACPSS0_clear_mask                       0xFB

#define DACPSS1                                  0x3
#define DACPSS1_address                          0xF7C
#define DACPSS1_position                         0x3
#define DACPSS1_size                             0x1
#define DACPSS1_value_mask                       0x8
#define DACPSS1_clear_mask                       0xF7

#define DACOE                                    0x5
#define DACOE_address                            0xF7C
#define DACOE_position                           0x5
#define DACOE_size                               0x1
#define DACOE_value_mask                         0x20
#define DACOE_clear_mask                         0xDF

#define DACLPS                                   0x6
#define DACLPS_address                           0xF7C
#define DACLPS_position                          0x6
#define DACLPS_size                              0x1
#define DACLPS_value_mask                        0x40
#define DACLPS_clear_mask                        0xBF

#define DACEN                                    0x7
#define DACEN_address                            0xF7C
#define DACEN_position                           0x7
#define DACEN_size                               0x1
#define DACEN_value_mask                         0x80
#define DACEN_clear_mask                         0x7F


/*-----------------------------------------------------#
| VREFCON0                                       0xF7D |
#------------------------------------------------------#
| FVREN | FVRST | FVRS1 | FVRS0 | TSEN | TSRNG | - | - |
#------------------------------------------------------#
| 7     | 6     | 5     | 4     | 3    | 2     | 1 | 0 |
#-----------------------------------------------------*/

#define VREFCON0                                 0x0
#define VREFCON0_address                         0xF7D
#define VREFCON0_position                        0x0
#define VREFCON0_size                            0x8
#define VREFCON0_value_mask                      0xFF
#define VREFCON0_clear_mask                      0x0

#define TSRNG                                    0x2
#define TSRNG_address                            0xF7D
#define TSRNG_position                           0x2
#define TSRNG_size                               0x1
#define TSRNG_value_mask                         0x4
#define TSRNG_clear_mask                         0xFB

#define TSEN                                     0x3
#define TSEN_address                             0xF7D
#define TSEN_position                            0x3
#define TSEN_size                                0x1
#define TSEN_value_mask                          0x8
#define TSEN_clear_mask                          0xF7

#define FVRS                                     0x4
#define FVRS_address                             0xF7D
#define FVRS_position                            0x4
#define FVRS_size                                0x2
#define FVRS_value_mask                          0x30
#define FVRS_clear_mask                          0xCF

#define FVRS0                                    0x4
#define FVRS0_address                            0xF7D
#define FVRS0_position                           0x4
#define FVRS0_size                               0x1
#define FVRS0_value_mask                         0x10
#define FVRS0_clear_mask                         0xEF

#define FVRS1                                    0x5
#define FVRS1_address                            0xF7D
#define FVRS1_position                           0x5
#define FVRS1_size                               0x1
#define FVRS1_value_mask                         0x20
#define FVRS1_clear_mask                         0xDF

#define FVRST                                    0x6
#define FVRST_address                            0xF7D
#define FVRST_position                           0x6
#define FVRST_size                               0x1
#define FVRST_value_mask                         0x40
#define FVRST_clear_mask                         0xBF

#define FVREN                                    0x7
#define FVREN_address                            0xF7D
#define FVREN_position                           0x7
#define FVREN_size                               0x1
#define FVREN_value_mask                         0x80
#define FVREN_clear_mask                         0x7F


/*----------------------------------------------------------#
| PMD0                                                0xF7E |
#-----------------------------------------------------------#
| - | UARTMD | USBMD | ACTMD | - | SPI2MD | SPI1MD | TMR1MD |
#-----------------------------------------------------------#
| 7 | 6      | 5     | 4     | 3 | 2      | 1      | 0      |
#----------------------------------------------------------*/

#define PMD0                                     0x0
#define PMD0_address                             0xF7E
#define PMD0_position                            0x0
#define PMD0_size                                0x8
#define PMD0_value_mask                          0xFF
#define PMD0_clear_mask                          0x0

#define TMR1MD                                   0x0
#define TMR1MD_address                           0xF7E
#define TMR1MD_position                          0x0
#define TMR1MD_size                              0x1
#define TMR1MD_value_mask                        0x1
#define TMR1MD_clear_mask                        0xFE

#define SPI1MD                                   0x1
#define SPI1MD_address                           0xF7E
#define SPI1MD_position                          0x1
#define SPI1MD_size                              0x1
#define SPI1MD_value_mask                        0x2
#define SPI1MD_clear_mask                        0xFD

#define TMR2MD                                   0x1
#define TMR2MD_address                           0xF7E
#define TMR2MD_position                          0x1
#define TMR2MD_size                              0x1
#define TMR2MD_value_mask                        0x2
#define TMR2MD_clear_mask                        0xFD

#define SPI2MD                                   0x2
#define SPI2MD_address                           0xF7E
#define SPI2MD_position                          0x2
#define SPI2MD_size                              0x1
#define SPI2MD_value_mask                        0x4
#define SPI2MD_clear_mask                        0xFB

#define TMR3MD                                   0x2
#define TMR3MD_address                           0xF7E
#define TMR3MD_position                          0x2
#define TMR3MD_size                              0x1
#define TMR3MD_value_mask                        0x4
#define TMR3MD_clear_mask                        0xFB

#define ACTMD                                    0x4
#define ACTMD_address                            0xF7E
#define ACTMD_position                           0x4
#define ACTMD_size                               0x1
#define ACTMD_value_mask                         0x10
#define ACTMD_clear_mask                         0xEF

#define STMD                                     0x4
#define STMD_address                             0xF7E
#define STMD_position                            0x4
#define STMD_size                                0x1
#define STMD_value_mask                          0x10
#define STMD_clear_mask                          0xEF

#define USBMD                                    0x5
#define USBMD_address                            0xF7E
#define USBMD_position                           0x5
#define USBMD_size                               0x1
#define USBMD_value_mask                         0x20
#define USBMD_clear_mask                         0xDF

#define UARTMD                                   0x6
#define UARTMD_address                           0xF7E
#define UARTMD_position                          0x6
#define UARTMD_size                              0x1
#define UARTMD_value_mask                        0x40
#define UARTMD_clear_mask                        0xBF

#define UART1MD                                  0x6
#define UART1MD_address                          0xF7E
#define UART1MD_position                         0x6
#define UART1MD_size                             0x1
#define UART1MD_value_mask                       0x40
#define UART1MD_clear_mask                       0xBF


/*---------------------------------------------------------------#
| PMD1                                                     0xF7F |
#----------------------------------------------------------------#
| - | MSSPMD | CTMUMD | CMP2MD | CMP1MD | ADCMD | CCP2MD | EMBMD |
#----------------------------------------------------------------#
| 7 | 6      | 5      | 4      | 3      | 2     | 1      | 0     |
#---------------------------------------------------------------*/

#define PMD1                                     0x0
#define PMD1_address                             0xF7F
#define PMD1_position                            0x0
#define PMD1_size                                0x8
#define PMD1_value_mask                          0xFF
#define PMD1_clear_mask                          0x0

#define EMBMD                                    0x0
#define EMBMD_address                            0xF7F
#define EMBMD_position                           0x0
#define EMBMD_size                               0x1
#define EMBMD_value_mask                         0x1
#define EMBMD_clear_mask                         0xFE

#define CCP1MD                                   0x0
#define CCP1MD_address                           0xF7F
#define CCP1MD_position                          0x0
#define CCP1MD_size                              0x1
#define CCP1MD_value_mask                        0x1
#define CCP1MD_clear_mask                        0xFE

#define CCP2MD                                   0x1
#define CCP2MD_address                           0xF7F
#define CCP2MD_position                          0x1
#define CCP2MD_size                              0x1
#define CCP2MD_value_mask                        0x2
#define CCP2MD_clear_mask                        0xFD

#define ADCMD                                    0x2
#define ADCMD_address                            0xF7F
#define ADCMD_position                           0x2
#define ADCMD_size                               0x1
#define ADCMD_value_mask                         0x4
#define ADCMD_clear_mask                         0xFB

#define CMP1MD                                   0x3
#define CMP1MD_address                           0xF7F
#define CMP1MD_position                          0x3
#define CMP1MD_size                              0x1
#define CMP1MD_value_mask                        0x8
#define CMP1MD_clear_mask                        0xF7

#define CMP2MD                                   0x4
#define CMP2MD_address                           0xF7F
#define CMP2MD_position                          0x4
#define CMP2MD_size                              0x1
#define CMP2MD_value_mask                        0x10
#define CMP2MD_clear_mask                        0xEF

#define CTMUMD                                   0x5
#define CTMUMD_address                           0xF7F
#define CTMUMD_position                          0x5
#define CTMUMD_size                              0x1
#define CTMUMD_value_mask                        0x20
#define CTMUMD_clear_mask                        0xDF

#define MSSPMD                                   0x6
#define MSSPMD_address                           0xF7F
#define MSSPMD_position                          0x6
#define MSSPMD_size                              0x1
#define MSSPMD_value_mask                        0x40
#define MSSPMD_clear_mask                        0xBF

#define SSP1MD                                   0x6
#define SSP1MD_address                           0xF7F
#define SSP1MD_position                          0x6
#define SSP1MD_size                              0x1
#define SSP1MD_value_mask                        0x40
#define SSP1MD_clear_mask                        0xBF

#define MSSP1MD                                  0x6
#define MSSP1MD_address                          0xF7F
#define MSSP1MD_position                         0x6
#define MSSP1MD_size                             0x1
#define MSSP1MD_value_mask                       0x40
#define MSSP1MD_clear_mask                       0xBF


/*-------------------------------------------------------------------------------#
| PORTA                                                                    0xF80 |
#--------------------------------------------------------------------------------#
| RJPU | PORTA_RA6 | LVDIN | PORTA_RA4 | PORTA_RA3 | VREFM | PORTA_RA1 | ULPWUIN |
#--------------------------------------------------------------------------------#
| 7    | 6         | 5     | 4         | 3         | 2     | 1         | 0       |
#-------------------------------------------------------------------------------*/

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

#define HLVDIN                                   0x5
#define HLVDIN_address                           0xF80
#define HLVDIN_position                          0x5
#define HLVDIN_size                              0x1
#define HLVDIN_value_mask                        0x20
#define HLVDIN_clear_mask                        0xDF

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


/*--------------------------------------------#
| PORTC                                 0xF82 |
#---------------------------------------------#
| RX | CK | RC5 | RC4 | - | P1A | PA2 | T1OSO |
#---------------------------------------------#
| 7  | 6  | 5   | 4   | 3 | 2   | 1   | 0     |
#--------------------------------------------*/

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

#define P1A                                      0x2
#define P1A_address                              0xF82
#define P1A_position                             0x2
#define P1A_size                                 0x1
#define P1A_value_mask                           0x4
#define P1A_clear_mask                           0xFB

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

#define RC4                                      0x4
#define RC4_address                              0xF82
#define RC4_position                             0x4
#define RC4_size                                 0x1
#define RC4_value_mask                           0x10
#define RC4_clear_mask                           0xEF

#define RC5                                      0x5
#define RC5_address                              0xF82
#define RC5_position                             0x5
#define RC5_size                                 0x1
#define RC5_value_mask                           0x20
#define RC5_clear_mask                           0xDF

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

#define PC3E                                     0x3
#define PC3E_address                             0xF84
#define PC3E_position                            0x3
#define PC3E_size                                0x1
#define PC3E_value_mask                          0x8
#define PC3E_clear_mask                          0xF7

#define CCP9E                                    0x3
#define CCP9E_address                            0xF84
#define CCP9E_position                           0x3
#define CCP9E_size                               0x1
#define CCP9E_value_mask                         0x8
#define CCP9E_clear_mask                         0xF7


/*--------------------------------------------------------------#
| WPUB                                                    0xF85 |
#---------------------------------------------------------------#
| WPUB7 | WPUB6 | WPUB5 | WPUB4 | WPUB3 | WPUB2 | WPUB1 | WPUB0 |
#---------------------------------------------------------------#
| 7     | 6     | 5     | 4     | 3     | 2     | 1     | 0     |
#--------------------------------------------------------------*/

#define WPUB                                     0x0
#define WPUB_address                             0xF85
#define WPUB_position                            0x0
#define WPUB_size                                0x8
#define WPUB_value_mask                          0xFF
#define WPUB_clear_mask                          0x0

#define WPUB0                                    0x0
#define WPUB0_address                            0xF85
#define WPUB0_position                           0x0
#define WPUB0_size                               0x1
#define WPUB0_value_mask                         0x1
#define WPUB0_clear_mask                         0xFE

#define WPUB1                                    0x1
#define WPUB1_address                            0xF85
#define WPUB1_position                           0x1
#define WPUB1_size                               0x1
#define WPUB1_value_mask                         0x2
#define WPUB1_clear_mask                         0xFD

#define WPUB2                                    0x2
#define WPUB2_address                            0xF85
#define WPUB2_position                           0x2
#define WPUB2_size                               0x1
#define WPUB2_value_mask                         0x4
#define WPUB2_clear_mask                         0xFB

#define WPUB3                                    0x3
#define WPUB3_address                            0xF85
#define WPUB3_position                           0x3
#define WPUB3_size                               0x1
#define WPUB3_value_mask                         0x8
#define WPUB3_clear_mask                         0xF7

#define WPUB4                                    0x4
#define WPUB4_address                            0xF85
#define WPUB4_position                           0x4
#define WPUB4_size                               0x1
#define WPUB4_value_mask                         0x10
#define WPUB4_clear_mask                         0xEF

#define WPUB5                                    0x5
#define WPUB5_address                            0xF85
#define WPUB5_position                           0x5
#define WPUB5_size                               0x1
#define WPUB5_value_mask                         0x20
#define WPUB5_clear_mask                         0xDF

#define WPUB6                                    0x6
#define WPUB6_address                            0xF85
#define WPUB6_position                           0x6
#define WPUB6_size                               0x1
#define WPUB6_value_mask                         0x40
#define WPUB6_clear_mask                         0xBF

#define WPUB7                                    0x7
#define WPUB7_address                            0xF85
#define WPUB7_position                           0x7
#define WPUB7_size                               0x1
#define WPUB7_value_mask                         0x80
#define WPUB7_clear_mask                         0x7F


/*----------------------------------------------#
| IOCB                                    0xF86 |
#-----------------------------------------------#
| IOCB7 | IOCB6 | IOCB5 | IOCB4 | - | - | - | - |
#-----------------------------------------------#
| 7     | 6     | 5     | 4     | 3 | 2 | 1 | 0 |
#----------------------------------------------*/

#define IOCB                                     0x0
#define IOCB_address                             0xF86
#define IOCB_position                            0x0
#define IOCB_size                                0x8
#define IOCB_value_mask                          0xFF
#define IOCB_clear_mask                          0x0

#define IOCB4                                    0x4
#define IOCB4_address                            0xF86
#define IOCB4_position                           0x4
#define IOCB4_size                               0x1
#define IOCB4_value_mask                         0x10
#define IOCB4_clear_mask                         0xEF

#define IOCB5                                    0x5
#define IOCB5_address                            0xF86
#define IOCB5_position                           0x5
#define IOCB5_size                               0x1
#define IOCB5_value_mask                         0x20
#define IOCB5_clear_mask                         0xDF

#define IOCB6                                    0x6
#define IOCB6_address                            0xF86
#define IOCB6_position                           0x6
#define IOCB6_size                               0x1
#define IOCB6_value_mask                         0x40
#define IOCB6_clear_mask                         0xBF

#define IOCB7                                    0x7
#define IOCB7_address                            0xF86
#define IOCB7_position                           0x7
#define IOCB7_size                               0x1
#define IOCB7_value_mask                         0x80
#define IOCB7_clear_mask                         0x7F


/*----------------------------------------------------------#
| IOCC                                                0xF87 |
#-----------------------------------------------------------#
| IOCC7 | IOCC6 | IOCC5 | IOCC4 | - | IOCC2 | IOCC1 | IOCC0 |
#-----------------------------------------------------------#
| 7     | 6     | 5     | 4     | 3 | 2     | 1     | 0     |
#----------------------------------------------------------*/

#define IOCC                                     0x0
#define IOCC_address                             0xF87
#define IOCC_position                            0x0
#define IOCC_size                                0x8
#define IOCC_value_mask                          0xFF
#define IOCC_clear_mask                          0x0

#define IOCC0                                    0x0
#define IOCC0_address                            0xF87
#define IOCC0_position                           0x0
#define IOCC0_size                               0x1
#define IOCC0_value_mask                         0x1
#define IOCC0_clear_mask                         0xFE

#define IOCC1                                    0x1
#define IOCC1_address                            0xF87
#define IOCC1_position                           0x1
#define IOCC1_size                               0x1
#define IOCC1_value_mask                         0x2
#define IOCC1_clear_mask                         0xFD

#define IOCC2                                    0x2
#define IOCC2_address                            0xF87
#define IOCC2_position                           0x2
#define IOCC2_size                               0x1
#define IOCC2_value_mask                         0x4
#define IOCC2_clear_mask                         0xFB

#define IOCC4                                    0x4
#define IOCC4_address                            0xF87
#define IOCC4_position                           0x4
#define IOCC4_size                               0x1
#define IOCC4_value_mask                         0x10
#define IOCC4_clear_mask                         0xEF

#define IOCC5                                    0x5
#define IOCC5_address                            0xF87
#define IOCC5_position                           0x5
#define IOCC5_size                               0x1
#define IOCC5_value_mask                         0x20
#define IOCC5_clear_mask                         0xDF

#define IOCC6                                    0x6
#define IOCC6_address                            0xF87
#define IOCC6_position                           0x6
#define IOCC6_size                               0x1
#define IOCC6_value_mask                         0x40
#define IOCC6_clear_mask                         0xBF

#define IOCC7                                    0x7
#define IOCC7_address                            0xF87
#define IOCC7_position                           0x7
#define IOCC7_size                               0x1
#define IOCC7_value_mask                         0x80
#define IOCC7_clear_mask                         0x7F


/*--------------------------------------------------------------------#
| CTMUICON                                                      0xF88 |
#---------------------------------------------------------------------#
| ITRIM5 | ITRIM4 | ITRIM3 | ITRIM2 | ITRIM1 | ITRIM0 | IRNG1 | IRNG0 |
#---------------------------------------------------------------------#
| 7      | 6      | 5      | 4      | 3      | 2      | 1     | 0     |
#--------------------------------------------------------------------*/

#define CTMUICON                                 0x0
#define CTMUICON_address                         0xF88
#define CTMUICON_position                        0x0
#define CTMUICON_size                            0x8
#define CTMUICON_value_mask                      0xFF
#define CTMUICON_clear_mask                      0x0

#define IRNG                                     0x0
#define IRNG_address                             0xF88
#define IRNG_position                            0x0
#define IRNG_size                                0x2
#define IRNG_value_mask                          0x3
#define IRNG_clear_mask                          0xFC

#define IRNG0                                    0x0
#define IRNG0_address                            0xF88
#define IRNG0_position                           0x0
#define IRNG0_size                               0x1
#define IRNG0_value_mask                         0x1
#define IRNG0_clear_mask                         0xFE

#define IRNG1                                    0x1
#define IRNG1_address                            0xF88
#define IRNG1_position                           0x1
#define IRNG1_size                               0x1
#define IRNG1_value_mask                         0x2
#define IRNG1_clear_mask                         0xFD

#define ITRIM0                                   0x2
#define ITRIM0_address                           0xF88
#define ITRIM0_position                          0x2
#define ITRIM0_size                              0x1
#define ITRIM0_value_mask                        0x4
#define ITRIM0_clear_mask                        0xFB

#define ITRIM                                    0x2
#define ITRIM_address                            0xF88
#define ITRIM_position                           0x2
#define ITRIM_size                               0x6
#define ITRIM_value_mask                         0xFC
#define ITRIM_clear_mask                         0x3

#define ITRIM1                                   0x3
#define ITRIM1_address                           0xF88
#define ITRIM1_position                          0x3
#define ITRIM1_size                              0x1
#define ITRIM1_value_mask                        0x8
#define ITRIM1_clear_mask                        0xF7

#define ITRIM2                                   0x4
#define ITRIM2_address                           0xF88
#define ITRIM2_position                          0x4
#define ITRIM2_size                              0x1
#define ITRIM2_value_mask                        0x10
#define ITRIM2_clear_mask                        0xEF

#define ITRIM3                                   0x5
#define ITRIM3_address                           0xF88
#define ITRIM3_position                          0x5
#define ITRIM3_size                              0x1
#define ITRIM3_value_mask                        0x20
#define ITRIM3_clear_mask                        0xDF

#define ITRIM4                                   0x6
#define ITRIM4_address                           0xF88
#define ITRIM4_position                          0x6
#define ITRIM4_size                              0x1
#define ITRIM4_value_mask                        0x40
#define ITRIM4_clear_mask                        0xBF

#define ITRIM5                                   0x7
#define ITRIM5_address                           0xF88
#define ITRIM5_position                          0x7
#define ITRIM5_size                              0x1
#define ITRIM5_value_mask                        0x80
#define ITRIM5_clear_mask                        0x7F


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


/*--------------------------------------------------------#
| LATC                                              0xF8B |
#---------------------------------------------------------#
| LATC7 | LC6 | LATC5 | LATC4 | - | LATC2 | LATC1 | LATC0 |
#---------------------------------------------------------#
| 7     | 6   | 5     | 4     | 3 | 2     | 1     | 0     |
#--------------------------------------------------------*/

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

#define LC6                                      0x6
#define LC6_address                              0xF8B
#define LC6_position                             0x6
#define LC6_size                                 0x1
#define LC6_value_mask                           0x40
#define LC6_clear_mask                           0xBF

#define LATC6                                    0x6
#define LATC6_address                            0xF8B
#define LATC6_position                           0x6
#define LATC6_size                               0x1
#define LATC6_value_mask                         0x40
#define LATC6_clear_mask                         0xBF

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


/*------------------------------------------------------------------------------------#
| CTMUCONL                                                                      0xF8E |
#-------------------------------------------------------------------------------------#
| EDG2POL | EDG2SEL1 | EDG2SEL0 | EDG1POL | EDG1SEL1 | EDG1SEL0 | EDG2STAT | EDG1STAT |
#-------------------------------------------------------------------------------------#
| 7       | 6        | 5        | 4       | 3        | 2        | 1        | 0        |
#------------------------------------------------------------------------------------*/

#define CTMUCONL                                 0x0
#define CTMUCONL_address                         0xF8E
#define CTMUCONL_position                        0x0
#define CTMUCONL_size                            0x8
#define CTMUCONL_value_mask                      0xFF
#define CTMUCONL_clear_mask                      0x0

#define EDG1STAT                                 0x0
#define EDG1STAT_address                         0xF8E
#define EDG1STAT_position                        0x0
#define EDG1STAT_size                            0x1
#define EDG1STAT_value_mask                      0x1
#define EDG1STAT_clear_mask                      0xFE

#define EDG2STAT                                 0x1
#define EDG2STAT_address                         0xF8E
#define EDG2STAT_position                        0x1
#define EDG2STAT_size                            0x1
#define EDG2STAT_value_mask                      0x2
#define EDG2STAT_clear_mask                      0xFD

#define EDG1SEL                                  0x2
#define EDG1SEL_address                          0xF8E
#define EDG1SEL_position                         0x2
#define EDG1SEL_size                             0x2
#define EDG1SEL_value_mask                       0xC
#define EDG1SEL_clear_mask                       0xF3

#define EDG1SEL0                                 0x2
#define EDG1SEL0_address                         0xF8E
#define EDG1SEL0_position                        0x2
#define EDG1SEL0_size                            0x1
#define EDG1SEL0_value_mask                      0x4
#define EDG1SEL0_clear_mask                      0xFB

#define EDG1SEL1                                 0x3
#define EDG1SEL1_address                         0xF8E
#define EDG1SEL1_position                        0x3
#define EDG1SEL1_size                            0x1
#define EDG1SEL1_value_mask                      0x8
#define EDG1SEL1_clear_mask                      0xF7

#define EDG1POL                                  0x4
#define EDG1POL_address                          0xF8E
#define EDG1POL_position                         0x4
#define EDG1POL_size                             0x1
#define EDG1POL_value_mask                       0x10
#define EDG1POL_clear_mask                       0xEF

#define EDG2SEL0                                 0x5
#define EDG2SEL0_address                         0xF8E
#define EDG2SEL0_position                        0x5
#define EDG2SEL0_size                            0x1
#define EDG2SEL0_value_mask                      0x20
#define EDG2SEL0_clear_mask                      0xDF

#define EDG2SEL                                  0x5
#define EDG2SEL_address                          0xF8E
#define EDG2SEL_position                         0x5
#define EDG2SEL_size                             0x2
#define EDG2SEL_value_mask                       0x60
#define EDG2SEL_clear_mask                       0x9F

#define EDG2SEL1                                 0x6
#define EDG2SEL1_address                         0xF8E
#define EDG2SEL1_position                        0x6
#define EDG2SEL1_size                            0x1
#define EDG2SEL1_value_mask                      0x40
#define EDG2SEL1_clear_mask                      0xBF

#define EDG2POL                                  0x7
#define EDG2POL_address                          0xF8E
#define EDG2POL_position                         0x7
#define EDG2POL_size                             0x1
#define EDG2POL_value_mask                       0x80
#define EDG2POL_clear_mask                       0x7F


/*-----------------------------------------------------------#
| CTMUCONH                                             0xF8F |
#------------------------------------------------------------#
| ON | - | SIDL | TGEN | EDGEN | EDGSEQEN | IDISSEN | TRIGEN |
#------------------------------------------------------------#
| 7  | 6 | 5    | 4    | 3     | 2        | 1       | 0      |
#-----------------------------------------------------------*/

#define CTMUCONH                                 0x0
#define CTMUCONH_address                         0xF8F
#define CTMUCONH_position                        0x0
#define CTMUCONH_size                            0x8
#define CTMUCONH_value_mask                      0xFF
#define CTMUCONH_clear_mask                      0x0

#define TRIGEN                                   0x0
#define TRIGEN_address                           0xF8F
#define TRIGEN_position                          0x0
#define TRIGEN_size                              0x1
#define TRIGEN_value_mask                        0x1
#define TRIGEN_clear_mask                        0xFE

#define CTTRIG                                   0x0
#define CTTRIG_address                           0xF8F
#define CTTRIG_position                          0x0
#define CTTRIG_size                              0x1
#define CTTRIG_value_mask                        0x1
#define CTTRIG_clear_mask                        0xFE

#define IDISSEN                                  0x1
#define IDISSEN_address                          0xF8F
#define IDISSEN_position                         0x1
#define IDISSEN_size                             0x1
#define IDISSEN_value_mask                       0x2
#define IDISSEN_clear_mask                       0xFD

#define EDGSEQEN                                 0x2
#define EDGSEQEN_address                         0xF8F
#define EDGSEQEN_position                        0x2
#define EDGSEQEN_size                            0x1
#define EDGSEQEN_value_mask                      0x4
#define EDGSEQEN_clear_mask                      0xFB

#define EDGEN                                    0x3
#define EDGEN_address                            0xF8F
#define EDGEN_position                           0x3
#define EDGEN_size                               0x1
#define EDGEN_value_mask                         0x8
#define EDGEN_clear_mask                         0xF7

#define TGEN                                     0x4
#define TGEN_address                             0xF8F
#define TGEN_position                            0x4
#define TGEN_size                                0x1
#define TGEN_value_mask                          0x10
#define TGEN_clear_mask                          0xEF

#define SIDL                                     0x5
#define SIDL_address                             0xF8F
#define SIDL_position                            0x5
#define SIDL_size                                0x1
#define SIDL_value_mask                          0x20
#define SIDL_clear_mask                          0xDF

#define CTMUSIDL                                 0x5
#define CTMUSIDL_address                         0xF8F
#define CTMUSIDL_position                        0x5
#define CTMUSIDL_size                            0x1
#define CTMUSIDL_value_mask                      0x20
#define CTMUSIDL_clear_mask                      0xDF

#define ON                                       0x7
#define ON_address                               0xF8F
#define ON_position                              0x7
#define ON_size                                  0x1
#define ON_value_mask                            0x80
#define ON_clear_mask                            0x7F

#define CTMUEN                                   0x7
#define CTMUEN_address                           0xF8F
#define CTMUEN_position                          0x7
#define CTMUEN_size                              0x1
#define CTMUEN_value_mask                        0x80
#define CTMUEN_clear_mask                        0x7F


/*------------------------------#
| CCPR2L                  0xF90 |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define CCPR2L                                   0x0
#define CCPR2L_address                           0xF90
#define CCPR2L_position                          0x0
#define CCPR2L_size                              0x8
#define CCPR2L_value_mask                        0xFF
#define CCPR2L_clear_mask                        0x0


/*------------------------------#
| CCPR2H                  0xF91 |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define CCPR2H                                   0x0
#define CCPR2H_address                           0xF91
#define CCPR2H_position                          0x0
#define CCPR2H_size                              0x8
#define CCPR2H_value_mask                        0xFF
#define CCPR2H_clear_mask                        0x0


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


/*-----------------------------------------------------------------#
| TRISC                                                      0xF94 |
#------------------------------------------------------------------#
| TRISC7 | TRISC6 | TRISC5 | TRISC4 | - | TRISC2 | TRISC1 | TRISC0 |
#------------------------------------------------------------------#
| 7      | 6      | 5      | 4      | 3 | 2      | 1      | 0      |
#-----------------------------------------------------------------*/

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


/*----------------------------------------------------------#
| CCP2CON                                             0xF97 |
#-----------------------------------------------------------#
| - | - | DC2B1 | DC2B0 | CCP2M3 | CCP2M2 | CCP2M1 | CCP2M0 |
#-----------------------------------------------------------#
| 7 | 6 | 5     | 4     | 3      | 2      | 1      | 0      |
#----------------------------------------------------------*/

#define CCP2CON                                  0x0
#define CCP2CON_address                          0xF97
#define CCP2CON_position                         0x0
#define CCP2CON_size                             0x8
#define CCP2CON_value_mask                       0xFF
#define CCP2CON_clear_mask                       0x0

#define CCP2M                                    0x0
#define CCP2M_address                            0xF97
#define CCP2M_position                           0x0
#define CCP2M_size                               0x4
#define CCP2M_value_mask                         0xF
#define CCP2M_clear_mask                         0xF0

#define CCP2M0                                   0x0
#define CCP2M0_address                           0xF97
#define CCP2M0_position                          0x0
#define CCP2M0_size                              0x1
#define CCP2M0_value_mask                        0x1
#define CCP2M0_clear_mask                        0xFE

#define CCP2M1                                   0x1
#define CCP2M1_address                           0xF97
#define CCP2M1_position                          0x1
#define CCP2M1_size                              0x1
#define CCP2M1_value_mask                        0x2
#define CCP2M1_clear_mask                        0xFD

#define CCP2M2                                   0x2
#define CCP2M2_address                           0xF97
#define CCP2M2_position                          0x2
#define CCP2M2_size                              0x1
#define CCP2M2_value_mask                        0x4
#define CCP2M2_clear_mask                        0xFB

#define CCP2M3                                   0x3
#define CCP2M3_address                           0xF97
#define CCP2M3_position                          0x3
#define CCP2M3_size                              0x1
#define CCP2M3_value_mask                        0x8
#define CCP2M3_clear_mask                        0xF7

#define DC2B0                                    0x4
#define DC2B0_address                            0xF97
#define DC2B0_position                           0x4
#define DC2B0_size                               0x1
#define DC2B0_value_mask                         0x10
#define DC2B0_clear_mask                         0xEF

#define CCP2Y                                    0x4
#define CCP2Y_address                            0xF97
#define CCP2Y_position                           0x4
#define CCP2Y_size                               0x1
#define CCP2Y_value_mask                         0x10
#define CCP2Y_clear_mask                         0xEF

#define DC2B                                     0x4
#define DC2B_address                             0xF97
#define DC2B_position                            0x4
#define DC2B_size                                0x2
#define DC2B_value_mask                          0x30
#define DC2B_clear_mask                          0xCF

#define DC2B1                                    0x5
#define DC2B1_address                            0xF97
#define DC2B1_position                           0x5
#define DC2B1_size                               0x1
#define DC2B1_value_mask                         0x20
#define DC2B1_clear_mask                         0xDF

#define CCP2X                                    0x5
#define CCP2X_address                            0xF97
#define CCP2X_position                           0x5
#define CCP2X_size                               0x1
#define CCP2X_value_mask                         0x20
#define CCP2X_clear_mask                         0xDF


/*-------------------------------------------------------------------------#
| CM1CON0                                                            0xF98 |
#--------------------------------------------------------------------------#
| CM1CON0_CON | COUT1 | C1OE | C1POL | C1SP | CM1CON0_CREF | C1CH1 | C1CH0 |
#--------------------------------------------------------------------------#
| 7           | 6     | 5    | 4     | 3    | 2            | 1     | 0     |
#-------------------------------------------------------------------------*/

#define CM1CON0                                  0x0
#define CM1CON0_address                          0xF98
#define CM1CON0_position                         0x0
#define CM1CON0_size                             0x8
#define CM1CON0_value_mask                       0xFF
#define CM1CON0_clear_mask                       0x0

#define C1CH                                     0x0
#define C1CH_address                             0xF98
#define C1CH_position                            0x0
#define C1CH_size                                0x2
#define C1CH_value_mask                          0x3
#define C1CH_clear_mask                          0xFC

#define C1CH0                                    0x0
#define C1CH0_address                            0xF98
#define C1CH0_position                           0x0
#define C1CH0_size                               0x1
#define C1CH0_value_mask                         0x1
#define C1CH0_clear_mask                         0xFE

#define CM1CON0_CCH0                             0x0
#define CM1CON0_CCH0_address                     0xF98
#define CM1CON0_CCH0_position                    0x0
#define CM1CON0_CCH0_size                        0x1
#define CM1CON0_CCH0_value_mask                  0x1
#define CM1CON0_CCH0_clear_mask                  0xFE

#define CM1CON0_CCH                              0x0
#define CM1CON0_CCH_address                      0xF98
#define CM1CON0_CCH_position                     0x0
#define CM1CON0_CCH_size                         0x2
#define CM1CON0_CCH_value_mask                   0x3
#define CM1CON0_CCH_clear_mask                   0xFC

#define CM1CON0_CCH1                             0x1
#define CM1CON0_CCH1_address                     0xF98
#define CM1CON0_CCH1_position                    0x1
#define CM1CON0_CCH1_size                        0x1
#define CM1CON0_CCH1_value_mask                  0x2
#define CM1CON0_CCH1_clear_mask                  0xFD

#define C1CH1                                    0x1
#define C1CH1_address                            0xF98
#define C1CH1_position                           0x1
#define C1CH1_size                               0x1
#define C1CH1_value_mask                         0x2
#define C1CH1_clear_mask                         0xFD

#define CM1CON0_CREF                             0x2
#define CM1CON0_CREF_address                     0xF98
#define CM1CON0_CREF_position                    0x2
#define CM1CON0_CREF_size                        0x1
#define CM1CON0_CREF_value_mask                  0x4
#define CM1CON0_CREF_clear_mask                  0xFB

#define C1R                                      0x2
#define C1R_address                              0xF98
#define C1R_position                             0x2
#define C1R_size                                 0x1
#define C1R_value_mask                           0x4
#define C1R_clear_mask                           0xFB

#define C1SP                                     0x3
#define C1SP_address                             0xF98
#define C1SP_position                            0x3
#define C1SP_size                                0x1
#define C1SP_value_mask                          0x8
#define C1SP_clear_mask                          0xF7

#define CM1CON0_CPOL                             0x4
#define CM1CON0_CPOL_address                     0xF98
#define CM1CON0_CPOL_position                    0x4
#define CM1CON0_CPOL_size                        0x1
#define CM1CON0_CPOL_value_mask                  0x10
#define CM1CON0_CPOL_clear_mask                  0xEF

#define C1POL                                    0x4
#define C1POL_address                            0xF98
#define C1POL_position                           0x4
#define C1POL_size                               0x1
#define C1POL_value_mask                         0x10
#define C1POL_clear_mask                         0xEF

#define CM1CON0_COE                              0x5
#define CM1CON0_COE_address                      0xF98
#define CM1CON0_COE_position                     0x5
#define CM1CON0_COE_size                         0x1
#define CM1CON0_COE_value_mask                   0x20
#define CM1CON0_COE_clear_mask                   0xDF

#define C1OE                                     0x5
#define C1OE_address                             0xF98
#define C1OE_position                            0x5
#define C1OE_size                                0x1
#define C1OE_value_mask                          0x20
#define C1OE_clear_mask                          0xDF

#define C1OUT                                    0x6
#define C1OUT_address                            0xF98
#define C1OUT_position                           0x6
#define C1OUT_size                               0x1
#define C1OUT_value_mask                         0x40
#define C1OUT_clear_mask                         0xBF

#define COUT1                                    0x6
#define COUT1_address                            0xF98
#define COUT1_position                           0x6
#define COUT1_size                               0x1
#define COUT1_value_mask                         0x40
#define COUT1_clear_mask                         0xBF

#define CM1CON0_CON                              0x7
#define CM1CON0_CON_address                      0xF98
#define CM1CON0_CON_position                     0x7
#define CM1CON0_CON_size                         0x1
#define CM1CON0_CON_value_mask                   0x80
#define CM1CON0_CON_clear_mask                   0x7F

#define C1ON                                     0x7
#define C1ON_address                             0xF98
#define C1ON_position                            0x7
#define C1ON_size                                0x1
#define C1ON_value_mask                          0x80
#define C1ON_clear_mask                          0x7F


/*--------------------------------------------------------------------------------------------#
| CM2CON0                                                                               0xF99 |
#---------------------------------------------------------------------------------------------#
| CM2CON0_CON | COUT2 | CM2CON0_COE | CM2CON0_CPOL | C2SP | C2R | CM2CON0_CCH1 | CM2CON0_CCH0 |
#---------------------------------------------------------------------------------------------#
| 7           | 6     | 5           | 4            | 3    | 2   | 1            | 0            |
#--------------------------------------------------------------------------------------------*/

#define CM2CON0                                  0x0
#define CM2CON0_address                          0xF99
#define CM2CON0_position                         0x0
#define CM2CON0_size                             0x8
#define CM2CON0_value_mask                       0xFF
#define CM2CON0_clear_mask                       0x0

#define CM2CON0_CCH0                             0x0
#define CM2CON0_CCH0_address                     0xF99
#define CM2CON0_CCH0_position                    0x0
#define CM2CON0_CCH0_size                        0x1
#define CM2CON0_CCH0_value_mask                  0x1
#define CM2CON0_CCH0_clear_mask                  0xFE

#define C2CH0                                    0x0
#define C2CH0_address                            0xF99
#define C2CH0_position                           0x0
#define C2CH0_size                               0x1
#define C2CH0_value_mask                         0x1
#define C2CH0_clear_mask                         0xFE

#define C2CH                                     0x0
#define C2CH_address                             0xF99
#define C2CH_position                            0x0
#define C2CH_size                                0x2
#define C2CH_value_mask                          0x3
#define C2CH_clear_mask                          0xFC

#define CM2CON0_CCH                              0x0
#define CM2CON0_CCH_address                      0xF99
#define CM2CON0_CCH_position                     0x0
#define CM2CON0_CCH_size                         0x2
#define CM2CON0_CCH_value_mask                   0x3
#define CM2CON0_CCH_clear_mask                   0xFC

#define CM2CON0_CCH1                             0x1
#define CM2CON0_CCH1_address                     0xF99
#define CM2CON0_CCH1_position                    0x1
#define CM2CON0_CCH1_size                        0x1
#define CM2CON0_CCH1_value_mask                  0x2
#define CM2CON0_CCH1_clear_mask                  0xFD

#define C2CH1                                    0x1
#define C2CH1_address                            0xF99
#define C2CH1_position                           0x1
#define C2CH1_size                               0x1
#define C2CH1_value_mask                         0x2
#define C2CH1_clear_mask                         0xFD

#define C2R                                      0x2
#define C2R_address                              0xF99
#define C2R_position                             0x2
#define C2R_size                                 0x1
#define C2R_value_mask                           0x4
#define C2R_clear_mask                           0xFB

#define CM2CON0_CREF                             0x2
#define CM2CON0_CREF_address                     0xF99
#define CM2CON0_CREF_position                    0x2
#define CM2CON0_CREF_size                        0x1
#define CM2CON0_CREF_value_mask                  0x4
#define CM2CON0_CREF_clear_mask                  0xFB

#define C2SP                                     0x3
#define C2SP_address                             0xF99
#define C2SP_position                            0x3
#define C2SP_size                                0x1
#define C2SP_value_mask                          0x8
#define C2SP_clear_mask                          0xF7

#define C2POL                                    0x4
#define C2POL_address                            0xF99
#define C2POL_position                           0x4
#define C2POL_size                               0x1
#define C2POL_value_mask                         0x10
#define C2POL_clear_mask                         0xEF

#define CM2CON0_CPOL                             0x4
#define CM2CON0_CPOL_address                     0xF99
#define CM2CON0_CPOL_position                    0x4
#define CM2CON0_CPOL_size                        0x1
#define CM2CON0_CPOL_value_mask                  0x10
#define CM2CON0_CPOL_clear_mask                  0xEF

#define CM2CON0_COE                              0x5
#define CM2CON0_COE_address                      0xF99
#define CM2CON0_COE_position                     0x5
#define CM2CON0_COE_size                         0x1
#define CM2CON0_COE_value_mask                   0x20
#define CM2CON0_COE_clear_mask                   0xDF

#define C2OE                                     0x5
#define C2OE_address                             0xF99
#define C2OE_position                            0x5
#define C2OE_size                                0x1
#define C2OE_value_mask                          0x20
#define C2OE_clear_mask                          0xDF

#define C2OUT                                    0x6
#define C2OUT_address                            0xF99
#define C2OUT_position                           0x6
#define C2OUT_size                               0x1
#define C2OUT_value_mask                         0x40
#define C2OUT_clear_mask                         0xBF

#define COUT2                                    0x6
#define COUT2_address                            0xF99
#define COUT2_position                           0x6
#define COUT2_size                               0x1
#define COUT2_value_mask                         0x40
#define COUT2_clear_mask                         0xBF

#define CM2CON0_CON                              0x7
#define CM2CON0_CON_address                      0xF99
#define CM2CON0_CON_position                     0x7
#define CM2CON0_CON_size                         0x1
#define CM2CON0_CON_value_mask                   0x80
#define CM2CON0_CON_clear_mask                   0x7F

#define C2ON                                     0x7
#define C2ON_address                             0xF99
#define C2ON_position                            0x7
#define C2ON_size                                0x1
#define C2ON_value_mask                          0x80
#define C2ON_clear_mask                          0x7F


/*--------------------------------------------------------------------#
| CM2CON1                                                       0xF9A |
#---------------------------------------------------------------------#
| MC1OUT | MC2OUT | C1RSEL | C2RSEL | C1HYS | C2HYS | C1SYNC | C2SYNC |
#---------------------------------------------------------------------#
| 7      | 6      | 5      | 4      | 3     | 2     | 1      | 0      |
#--------------------------------------------------------------------*/

#define CM2CON1                                  0x0
#define CM2CON1_address                          0xF9A
#define CM2CON1_position                         0x0
#define CM2CON1_size                             0x8
#define CM2CON1_value_mask                       0xFF
#define CM2CON1_clear_mask                       0x0

#define C2SYNC                                   0x0
#define C2SYNC_address                           0xF9A
#define C2SYNC_position                          0x0
#define C2SYNC_size                              0x1
#define C2SYNC_value_mask                        0x1
#define C2SYNC_clear_mask                        0xFE

#define C1SYNC                                   0x1
#define C1SYNC_address                           0xF9A
#define C1SYNC_position                          0x1
#define C1SYNC_size                              0x1
#define C1SYNC_value_mask                        0x2
#define C1SYNC_clear_mask                        0xFD

#define C2HYS                                    0x2
#define C2HYS_address                            0xF9A
#define C2HYS_position                           0x2
#define C2HYS_size                               0x1
#define C2HYS_value_mask                         0x4
#define C2HYS_clear_mask                         0xFB

#define C1HYS                                    0x3
#define C1HYS_address                            0xF9A
#define C1HYS_position                           0x3
#define C1HYS_size                               0x1
#define C1HYS_value_mask                         0x8
#define C1HYS_clear_mask                         0xF7

#define C2RSEL                                   0x4
#define C2RSEL_address                           0xF9A
#define C2RSEL_position                          0x4
#define C2RSEL_size                              0x1
#define C2RSEL_value_mask                        0x10
#define C2RSEL_clear_mask                        0xEF

#define C1RSEL                                   0x5
#define C1RSEL_address                           0xF9A
#define C1RSEL_position                          0x5
#define C1RSEL_size                              0x1
#define C1RSEL_value_mask                        0x20
#define C1RSEL_clear_mask                        0xDF

#define MC2OUT                                   0x6
#define MC2OUT_address                           0xF9A
#define MC2OUT_position                          0x6
#define MC2OUT_size                              0x1
#define MC2OUT_value_mask                        0x40
#define MC2OUT_clear_mask                        0xBF

#define MC1OUT                                   0x7
#define MC1OUT_address                           0xF9A
#define MC1OUT_position                          0x7
#define MC1OUT_size                              0x1
#define MC1OUT_value_mask                        0x80
#define MC1OUT_clear_mask                        0x7F


/*----------------------------------------------------------#
| OSCTUNE                                             0xF9B |
#-----------------------------------------------------------#
| SPLLMULT | TUN6 | TUN5 | TUN4 | TUN3 | TUN2 | TUN1 | TUN0 |
#-----------------------------------------------------------#
| 7        | 6    | 5    | 4    | 3    | 2    | 1    | 0    |
#----------------------------------------------------------*/

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
#define TUN_size                                 0x7
#define TUN_value_mask                           0x7F
#define TUN_clear_mask                           0x80

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

#define TUN6                                     0x6
#define TUN6_address                             0xF9B
#define TUN6_position                            0x6
#define TUN6_size                                0x1
#define TUN6_value_mask                          0x40
#define TUN6_clear_mask                          0xBF

#define SPLLMULT                                 0x7
#define SPLLMULT_address                         0xF9B
#define SPLLMULT_position                        0x7
#define SPLLMULT_size                            0x1
#define SPLLMULT_value_mask                      0x80
#define SPLLMULT_clear_mask                      0x7F


/*---------------------------------------------------------------------#
| HLVDCON                                                        0xF9C |
#----------------------------------------------------------------------#
| VDIRMAG | BGVST | IRVST | HLVDEN | HLVDL3 | HLVDL2 | HLVDL1 | HLVDL0 |
#----------------------------------------------------------------------#
| 7       | 6     | 5     | 4      | 3      | 2      | 1      | 0      |
#---------------------------------------------------------------------*/

#define HLVDCON                                  0x0
#define HLVDCON_address                          0xF9C
#define HLVDCON_position                         0x0
#define HLVDCON_size                             0x8
#define HLVDCON_value_mask                       0xFF
#define HLVDCON_clear_mask                       0x0

#define HLVDL                                    0x0
#define HLVDL_address                            0xF9C
#define HLVDL_position                           0x0
#define HLVDL_size                               0x4
#define HLVDL_value_mask                         0xF
#define HLVDL_clear_mask                         0xF0

#define HLVDL0                                   0x0
#define HLVDL0_address                           0xF9C
#define HLVDL0_position                          0x0
#define HLVDL0_size                              0x1
#define HLVDL0_value_mask                        0x1
#define HLVDL0_clear_mask                        0xFE

#define HLVDL1                                   0x1
#define HLVDL1_address                           0xF9C
#define HLVDL1_position                          0x1
#define HLVDL1_size                              0x1
#define HLVDL1_value_mask                        0x2
#define HLVDL1_clear_mask                        0xFD

#define HLVDL2                                   0x2
#define HLVDL2_address                           0xF9C
#define HLVDL2_position                          0x2
#define HLVDL2_size                              0x1
#define HLVDL2_value_mask                        0x4
#define HLVDL2_clear_mask                        0xFB

#define HLVDL3                                   0x3
#define HLVDL3_address                           0xF9C
#define HLVDL3_position                          0x3
#define HLVDL3_size                              0x1
#define HLVDL3_value_mask                        0x8
#define HLVDL3_clear_mask                        0xF7

#define HLVDEN                                   0x4
#define HLVDEN_address                           0xF9C
#define HLVDEN_position                          0x4
#define HLVDEN_size                              0x1
#define HLVDEN_value_mask                        0x10
#define HLVDEN_clear_mask                        0xEF

#define IRVST                                    0x5
#define IRVST_address                            0xF9C
#define IRVST_position                           0x5
#define IRVST_size                               0x1
#define IRVST_value_mask                         0x20
#define IRVST_clear_mask                         0xDF

#define BGVST                                    0x6
#define BGVST_address                            0xF9C
#define BGVST_position                           0x6
#define BGVST_size                               0x1
#define BGVST_value_mask                         0x40
#define BGVST_clear_mask                         0xBF

#define VDIRMAG                                  0x7
#define VDIRMAG_address                          0xF9C
#define VDIRMAG_position                         0x7
#define VDIRMAG_size                             0x1
#define VDIRMAG_value_mask                       0x80
#define VDIRMAG_clear_mask                       0x7F


/*--------------------------------------------------------------#
| PIE1                                                    0xF9D |
#---------------------------------------------------------------#
| PSPIE | ADIE | RCIE | TXIE | SSPIE | CCP1IE | TMR2IE | TMR1IE |
#---------------------------------------------------------------#
| 7     | 6    | 5    | 4    | 3     | 2      | 1      | 0      |
#--------------------------------------------------------------*/

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

#define SSP1IE                                   0x3
#define SSP1IE_address                           0xF9D
#define SSP1IE_position                          0x3
#define SSP1IE_size                              0x1
#define SSP1IE_value_mask                        0x8
#define SSP1IE_clear_mask                        0xF7

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

#define STIE                                     0x7
#define STIE_address                             0xF9D
#define STIE_position                            0x7
#define STIE_size                                0x1
#define STIE_value_mask                          0x80
#define STIE_clear_mask                          0x7F

#define PSPIE                                    0x7
#define PSPIE_address                            0xF9D
#define PSPIE_position                           0x7
#define PSPIE_size                               0x1
#define PSPIE_value_mask                         0x80
#define PSPIE_clear_mask                         0x7F

#define ACTIE                                    0x7
#define ACTIE_address                            0xF9D
#define ACTIE_position                           0x7
#define ACTIE_size                               0x1
#define ACTIE_value_mask                         0x80
#define ACTIE_clear_mask                         0x7F


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

#define STIF                                     0x7
#define STIF_address                             0xF9E
#define STIF_position                            0x7
#define STIF_size                                0x1
#define STIF_value_mask                          0x80
#define STIF_clear_mask                          0x7F

#define ACTIF                                    0x7
#define ACTIF_address                            0xF9E
#define ACTIF_position                           0x7
#define ACTIF_size                               0x1
#define ACTIF_value_mask                         0x80
#define ACTIF_clear_mask                         0x7F


/*---------------------------------------------------------------#
| IPR1                                                     0xF9F |
#----------------------------------------------------------------#
| ACTIP | ADIP | RCIP | TX1IP | SSPIP | CCP1IP | TMR2IP | TMR1IP |
#----------------------------------------------------------------#
| 7     | 6    | 5    | 4     | 3     | 2      | 1      | 0      |
#---------------------------------------------------------------*/

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

#define SSP1IP                                   0x3
#define SSP1IP_address                           0xF9F
#define SSP1IP_position                          0x3
#define SSP1IP_size                              0x1
#define SSP1IP_value_mask                        0x8
#define SSP1IP_clear_mask                        0xF7

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

#define ACTIP                                    0x7
#define ACTIP_address                            0xF9F
#define ACTIP_position                           0x7
#define ACTIP_size                               0x1
#define ACTIP_value_mask                         0x80
#define ACTIP_clear_mask                         0x7F

#define PSPIP                                    0x7
#define PSPIP_address                            0xF9F
#define PSPIP_position                           0x7
#define PSPIP_size                               0x1
#define PSPIP_value_mask                         0x80
#define PSPIP_clear_mask                         0x7F

#define STIP                                     0x7
#define STIP_address                             0xF9F
#define STIP_position                            0x7
#define STIP_size                                0x1
#define STIP_value_mask                          0x80
#define STIP_clear_mask                          0x7F


/*---------------------------------------------------------------#
| PIE2                                                     0xFA0 |
#----------------------------------------------------------------#
| OSCFIE | C1IE | C2IE | EEIE | BCLIE | HLVDIE | TMR3IE | CCP2IE |
#----------------------------------------------------------------#
| 7      | 6    | 5    | 4    | 3     | 2      | 1      | 0      |
#---------------------------------------------------------------*/

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

#define BCL1IE                                   0x3
#define BCL1IE_address                           0xFA0
#define BCL1IE_position                          0x3
#define BCL1IE_size                              0x1
#define BCL1IE_value_mask                        0x8
#define BCL1IE_clear_mask                        0xF7

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

#define CM2IE                                    0x5
#define CM2IE_address                            0xFA0
#define CM2IE_position                           0x5
#define CM2IE_size                               0x1
#define CM2IE_value_mask                         0x20
#define CM2IE_clear_mask                         0xDF

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

#define CM1IE                                    0x6
#define CM1IE_address                            0xFA0
#define CM1IE_position                           0x6
#define CM1IE_size                               0x1
#define CM1IE_value_mask                         0x40
#define CM1IE_clear_mask                         0xBF

#define OSCFIE                                   0x7
#define OSCFIE_address                           0xFA0
#define OSCFIE_position                          0x7
#define OSCFIE_size                              0x1
#define OSCFIE_value_mask                        0x80
#define OSCFIE_clear_mask                        0x7F


/*---------------------------------------------------------------#
| PIR2                                                     0xFA1 |
#----------------------------------------------------------------#
| OSCFIF | C1IF | C2IF | EEIF | BCLIF | HLVDIF | TMR3IF | CCP2IF |
#----------------------------------------------------------------#
| 7      | 6    | 5    | 4    | 3     | 2      | 1      | 0      |
#---------------------------------------------------------------*/

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

#define BCL1IF                                   0x3
#define BCL1IF_address                           0xFA1
#define BCL1IF_position                          0x3
#define BCL1IF_size                              0x1
#define BCL1IF_value_mask                        0x8
#define BCL1IF_clear_mask                        0xF7

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

#define CM2IF                                    0x5
#define CM2IF_address                            0xFA1
#define CM2IF_position                           0x5
#define CM2IF_size                               0x1
#define CM2IF_value_mask                         0x20
#define CM2IF_clear_mask                         0xDF

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

#define CM1IF                                    0x6
#define CM1IF_address                            0xFA1
#define CM1IF_position                           0x6
#define CM1IF_size                               0x1
#define CM1IF_value_mask                         0x40
#define CM1IF_clear_mask                         0xBF

#define OSCFIF                                   0x7
#define OSCFIF_address                           0xFA1
#define OSCFIF_position                          0x7
#define OSCFIF_size                              0x1
#define OSCFIF_value_mask                        0x80
#define OSCFIF_clear_mask                        0x7F


/*-----------------------------------------------------------------#
| IPR2                                                       0xFA2 |
#------------------------------------------------------------------#
| OSCFIP | CM1IP | C2IP | EEIP | BCL1IP | HLVDIP | TMR3IP | CCP2IP |
#------------------------------------------------------------------#
| 7      | 6     | 5    | 4    | 3      | 2      | 1      | 0      |
#-----------------------------------------------------------------*/

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

#define BCL1IP                                   0x3
#define BCL1IP_address                           0xFA2
#define BCL1IP_position                          0x3
#define BCL1IP_size                              0x1
#define BCL1IP_value_mask                        0x8
#define BCL1IP_clear_mask                        0xF7

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

#define CM2IP                                    0x5
#define CM2IP_address                            0xFA2
#define CM2IP_position                           0x5
#define CM2IP_size                               0x1
#define CM2IP_value_mask                         0x20
#define CM2IP_clear_mask                         0xDF

#define C2IP                                     0x5
#define C2IP_address                             0xFA2
#define C2IP_position                            0x5
#define C2IP_size                                0x1
#define C2IP_value_mask                          0x20
#define C2IP_clear_mask                          0xDF

#define CM1IP                                    0x6
#define CM1IP_address                            0xFA2
#define CM1IP_position                           0x6
#define CM1IP_size                               0x1
#define CM1IP_value_mask                         0x40
#define CM1IP_clear_mask                         0xBF

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


/*--------------------------------------------------#
| PIE3                                        0xFA3 |
#---------------------------------------------------#
| - | - | - | - | TXB1IE | USBIE | RXBNIE | TMR1GIE |
#---------------------------------------------------#
| 7 | 6 | 5 | 4 | 3      | 2     | 1      | 0       |
#--------------------------------------------------*/

#define PIE3                                     0x0
#define PIE3_address                             0xFA3
#define PIE3_position                            0x0
#define PIE3_size                                0x8
#define PIE3_value_mask                          0xFF
#define PIE3_clear_mask                          0x0

#define TMR1GIE                                  0x0
#define TMR1GIE_address                          0xFA3
#define TMR1GIE_position                         0x0
#define TMR1GIE_size                             0x1
#define TMR1GIE_value_mask                       0x1
#define TMR1GIE_clear_mask                       0xFE

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

#define TMR3GIE                                  0x1
#define TMR3GIE_address                          0xFA3
#define TMR3GIE_position                         0x1
#define TMR3GIE_size                             0x1
#define TMR3GIE_value_mask                       0x2
#define TMR3GIE_clear_mask                       0xFD

#define RXB1IE                                   0x1
#define RXB1IE_address                           0xFA3
#define RXB1IE_position                          0x1
#define RXB1IE_size                              0x1
#define RXB1IE_value_mask                        0x2
#define RXB1IE_clear_mask                        0xFD

#define USBIE                                    0x2
#define USBIE_address                            0xFA3
#define USBIE_position                           0x2
#define USBIE_size                               0x1
#define USBIE_value_mask                         0x4
#define USBIE_clear_mask                         0xFB

#define TXB0IE                                   0x2
#define TXB0IE_address                           0xFA3
#define TXB0IE_position                          0x2
#define TXB0IE_size                              0x1
#define TXB0IE_value_mask                        0x4
#define TXB0IE_clear_mask                        0xFB

#define TXB1IE                                   0x3
#define TXB1IE_address                           0xFA3
#define TXB1IE_position                          0x3
#define TXB1IE_size                              0x1
#define TXB1IE_value_mask                        0x8
#define TXB1IE_clear_mask                        0xF7

#define CTMUIE                                   0x3
#define CTMUIE_address                           0xFA3
#define CTMUIE_position                          0x3
#define CTMUIE_size                              0x1
#define CTMUIE_value_mask                        0x8
#define CTMUIE_clear_mask                        0xF7


/*--------------------------------------------------#
| PIR3                                        0xFA4 |
#---------------------------------------------------#
| - | - | - | - | CTMUIF | USBIF | RXBNIF | TMR1GIF |
#---------------------------------------------------#
| 7 | 6 | 5 | 4 | 3      | 2     | 1      | 0       |
#--------------------------------------------------*/

#define PIR3                                     0x0
#define PIR3_address                             0xFA4
#define PIR3_position                            0x0
#define PIR3_size                                0x8
#define PIR3_value_mask                          0xFF
#define PIR3_clear_mask                          0x0

#define TMR1GIF                                  0x0
#define TMR1GIF_address                          0xFA4
#define TMR1GIF_position                         0x0
#define TMR1GIF_size                             0x1
#define TMR1GIF_value_mask                       0x1
#define TMR1GIF_clear_mask                       0xFE

#define RXBNIF                                   0x1
#define RXBNIF_address                           0xFA4
#define RXBNIF_position                          0x1
#define RXBNIF_size                              0x1
#define RXBNIF_value_mask                        0x2
#define RXBNIF_clear_mask                        0xFD

#define TMR3GIF                                  0x1
#define TMR3GIF_address                          0xFA4
#define TMR3GIF_position                         0x1
#define TMR3GIF_size                             0x1
#define TMR3GIF_value_mask                       0x2
#define TMR3GIF_clear_mask                       0xFD

#define USBIF                                    0x2
#define USBIF_address                            0xFA4
#define USBIF_position                           0x2
#define USBIF_size                               0x1
#define USBIF_value_mask                         0x4
#define USBIF_clear_mask                         0xFB

#define CTMUIF                                   0x3
#define CTMUIF_address                           0xFA4
#define CTMUIF_position                          0x3
#define CTMUIF_size                              0x1
#define CTMUIF_value_mask                        0x8
#define CTMUIF_clear_mask                        0xF7


/*---------------------------------------------------#
| IPR3                                         0xFA5 |
#----------------------------------------------------#
| - | - | - | - | CTMUIP | USBIP | TMR3GIP | TMR1GIP |
#----------------------------------------------------#
| 7 | 6 | 5 | 4 | 3      | 2     | 1       | 0       |
#---------------------------------------------------*/

#define IPR3                                     0x0
#define IPR3_address                             0xFA5
#define IPR3_position                            0x0
#define IPR3_size                                0x8
#define IPR3_value_mask                          0xFF
#define IPR3_clear_mask                          0x0

#define TMR1GIP                                  0x0
#define TMR1GIP_address                          0xFA5
#define TMR1GIP_position                         0x0
#define TMR1GIP_size                             0x1
#define TMR1GIP_value_mask                       0x1
#define TMR1GIP_clear_mask                       0xFE

#define TMR3GIP                                  0x1
#define TMR3GIP_address                          0xFA5
#define TMR3GIP_position                         0x1
#define TMR3GIP_size                             0x1
#define TMR3GIP_value_mask                       0x2
#define TMR3GIP_clear_mask                       0xFD

#define RXBNIP                                   0x1
#define RXBNIP_address                           0xFA5
#define RXBNIP_position                          0x1
#define RXBNIP_size                              0x1
#define RXBNIP_value_mask                        0x2
#define RXBNIP_clear_mask                        0xFD

#define USBIP                                    0x2
#define USBIP_address                            0xFA5
#define USBIP_position                           0x2
#define USBIP_size                               0x1
#define USBIP_value_mask                         0x4
#define USBIP_clear_mask                         0xFB

#define CTMUIP                                   0x3
#define CTMUIP_address                           0xFA5
#define CTMUIP_position                          0x3
#define CTMUIP_size                              0x1
#define CTMUIP_value_mask                        0x8
#define CTMUIP_clear_mask                        0xF7


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


/*------------------------------#
| EECON2                  0xFA7 |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define EECON2                                   0x0
#define EECON2_address                           0xFA7
#define EECON2_position                          0x0
#define EECON2_size                              0x8
#define EECON2_value_mask                        0xFF
#define EECON2_clear_mask                        0x0


/*------------------------------------------------------#
| RCSTA1                                          0xFAB |
#-------------------------------------------------------#
| SPEN | RX9 | SREN | CREN | ADDEN | FERR | OERR | RCD8 |
#-------------------------------------------------------#
| 7    | 6   | 5    | 4    | 3     | 2    | 1    | 0    |
#------------------------------------------------------*/

#define RCSTA1                                   0x0
#define RCSTA1_address                           0xFAB
#define RCSTA1_position                          0x0
#define RCSTA1_size                              0x8
#define RCSTA1_value_mask                        0xFF
#define RCSTA1_clear_mask                        0x0

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

#define SPEN                                     0x7
#define SPEN_address                             0xFAB
#define SPEN_position                            0x7
#define SPEN_size                                0x1
#define SPEN_value_mask                          0x80
#define SPEN_clear_mask                          0x7F


/*----------------------------------------------------------#
| TXSTA1                                              0xFAC |
#-----------------------------------------------------------#
| CSRC1 | TX91 | TXEN | SYNC | SENDB1 | BRGH1 | TRMT | TXD8 |
#-----------------------------------------------------------#
| 7     | 6    | 5    | 4    | 3      | 2     | 1    | 0    |
#----------------------------------------------------------*/

#define TXSTA1                                   0x0
#define TXSTA1_address                           0xFAC
#define TXSTA1_position                          0x0
#define TXSTA1_size                              0x8
#define TXSTA1_value_mask                        0xFF
#define TXSTA1_clear_mask                        0x0

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


/*------------------------------------------------------#
| SPBRG1                                          0xFAF |
#-------------------------------------------------------#
| BRG7 | BRG6 | BRG5 | BRG4 | BRG3 | BRG2 | BRG1 | BRG0 |
#-------------------------------------------------------#
| 7    | 6    | 5    | 4    | 3    | 2    | 1    | 0    |
#------------------------------------------------------*/

#define BRG0                                     0x0
#define BRG0_address                             0xFAF
#define BRG0_position                            0x0
#define BRG0_size                                0x1
#define BRG0_value_mask                          0x1
#define BRG0_clear_mask                          0xFE

#define SPBRG1                                   0x0
#define SPBRG1_address                           0xFAF
#define SPBRG1_position                          0x0
#define SPBRG1_size                              0x8
#define SPBRG1_value_mask                        0xFF
#define SPBRG1_clear_mask                        0x0

#define BRG1                                     0x1
#define BRG1_address                             0xFAF
#define BRG1_position                            0x1
#define BRG1_size                                0x1
#define BRG1_value_mask                          0x2
#define BRG1_clear_mask                          0xFD

#define BRG2                                     0x2
#define BRG2_address                             0xFAF
#define BRG2_position                            0x2
#define BRG2_size                                0x1
#define BRG2_value_mask                          0x4
#define BRG2_clear_mask                          0xFB

#define BRG3                                     0x3
#define BRG3_address                             0xFAF
#define BRG3_position                            0x3
#define BRG3_size                                0x1
#define BRG3_value_mask                          0x8
#define BRG3_clear_mask                          0xF7

#define BRG4                                     0x4
#define BRG4_address                             0xFAF
#define BRG4_position                            0x4
#define BRG4_size                                0x1
#define BRG4_value_mask                          0x10
#define BRG4_clear_mask                          0xEF

#define BRG5                                     0x5
#define BRG5_address                             0xFAF
#define BRG5_position                            0x5
#define BRG5_size                                0x1
#define BRG5_value_mask                          0x20
#define BRG5_clear_mask                          0xDF

#define BRG6                                     0x6
#define BRG6_address                             0xFAF
#define BRG6_position                            0x6
#define BRG6_size                                0x1
#define BRG6_value_mask                          0x40
#define BRG6_clear_mask                          0xBF

#define BRG7                                     0x7
#define BRG7_address                             0xFAF
#define BRG7_position                            0x7
#define BRG7_size                                0x1
#define BRG7_value_mask                          0x80
#define BRG7_clear_mask                          0x7F


/*------------------------------------------------------------#
| SPBRGH1                                               0xFB0 |
#-------------------------------------------------------------#
| BRG15 | BRG14 | BRG13 | BRG12 | BRG11 | BRG10 | BRG9 | BRG8 |
#-------------------------------------------------------------#
| 7     | 6     | 5     | 4     | 3     | 2     | 1    | 0    |
#------------------------------------------------------------*/

#define BRG8                                     0x0
#define BRG8_address                             0xFB0
#define BRG8_position                            0x0
#define BRG8_size                                0x1
#define BRG8_value_mask                          0x1
#define BRG8_clear_mask                          0xFE

#define SPBRGH1                                  0x0
#define SPBRGH1_address                          0xFB0
#define SPBRGH1_position                         0x0
#define SPBRGH1_size                             0x8
#define SPBRGH1_value_mask                       0xFF
#define SPBRGH1_clear_mask                       0x0

#define BRG9                                     0x1
#define BRG9_address                             0xFB0
#define BRG9_position                            0x1
#define BRG9_size                                0x1
#define BRG9_value_mask                          0x2
#define BRG9_clear_mask                          0xFD

#define BRG10                                    0x2
#define BRG10_address                            0xFB0
#define BRG10_position                           0x2
#define BRG10_size                               0x1
#define BRG10_value_mask                         0x4
#define BRG10_clear_mask                         0xFB

#define BRG11                                    0x3
#define BRG11_address                            0xFB0
#define BRG11_position                           0x3
#define BRG11_size                               0x1
#define BRG11_value_mask                         0x8
#define BRG11_clear_mask                         0xF7

#define BRG12                                    0x4
#define BRG12_address                            0xFB0
#define BRG12_position                           0x4
#define BRG12_size                               0x1
#define BRG12_value_mask                         0x10
#define BRG12_clear_mask                         0xEF

#define BRG13                                    0x5
#define BRG13_address                            0xFB0
#define BRG13_position                           0x5
#define BRG13_size                               0x1
#define BRG13_value_mask                         0x20
#define BRG13_clear_mask                         0xDF

#define BRG14                                    0x6
#define BRG14_address                            0xFB0
#define BRG14_position                           0x6
#define BRG14_size                               0x1
#define BRG14_value_mask                         0x40
#define BRG14_clear_mask                         0xBF

#define BRG15                                    0x7
#define BRG15_address                            0xFB0
#define BRG15_position                           0x7
#define BRG15_size                               0x1
#define BRG15_value_mask                         0x80
#define BRG15_clear_mask                         0x7F


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

#define T3RD16                                   0x1
#define T3RD16_address                           0xFB1
#define T3RD16_position                          0x1
#define T3RD16_size                              0x1
#define T3RD16_value_mask                        0x2
#define T3RD16_clear_mask                        0xFD

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

#define T3SOSCEN                                 0x3
#define T3SOSCEN_address                         0xFB1
#define T3SOSCEN_position                        0x3
#define T3SOSCEN_size                            0x1
#define T3SOSCEN_value_mask                      0x8
#define T3SOSCEN_clear_mask                      0xF7

#define T3OSCEN                                  0x3
#define T3OSCEN_address                          0xFB1
#define T3OSCEN_position                         0x3
#define T3OSCEN_size                             0x1
#define T3OSCEN_value_mask                       0x8
#define T3OSCEN_clear_mask                       0xF7

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

#define TMR3CS0                                  0x6
#define TMR3CS0_address                          0xFB1
#define TMR3CS0_position                         0x6
#define TMR3CS0_size                             0x1
#define TMR3CS0_value_mask                       0x40
#define TMR3CS0_clear_mask                       0xBF

#define TMR3CS                                   0x6
#define TMR3CS_address                           0xFB1
#define TMR3CS_position                          0x6
#define TMR3CS_size                              0x2
#define TMR3CS_value_mask                        0xC0
#define TMR3CS_clear_mask                        0x3F

#define TMR3CS1                                  0x7
#define TMR3CS1_address                          0xFB1
#define TMR3CS1_position                         0x7
#define TMR3CS1_size                             0x1
#define TMR3CS1_value_mask                       0x80
#define TMR3CS1_clear_mask                       0x7F

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


/*--------------------------------------------------------------------#
| T3GCON                                                        0xFB4 |
#---------------------------------------------------------------------#
| TMR3GE | T3GPOL | T3GTM | T3GSPM | T3GGO | T3GVAL | T3GSS1 | T3GSS0 |
#---------------------------------------------------------------------#
| 7      | 6      | 5     | 4      | 3     | 2      | 1      | 0      |
#--------------------------------------------------------------------*/

#define T3GCON                                   0x0
#define T3GCON_address                           0xFB4
#define T3GCON_position                          0x0
#define T3GCON_size                              0x8
#define T3GCON_value_mask                        0xFF
#define T3GCON_clear_mask                        0x0

#define T3GSS0                                   0x0
#define T3GSS0_address                           0xFB4
#define T3GSS0_position                          0x0
#define T3GSS0_size                              0x1
#define T3GSS0_value_mask                        0x1
#define T3GSS0_clear_mask                        0xFE

#define T3GSS                                    0x0
#define T3GSS_address                            0xFB4
#define T3GSS_position                           0x0
#define T3GSS_size                               0x2
#define T3GSS_value_mask                         0x3
#define T3GSS_clear_mask                         0xFC

#define T3GSS1                                   0x1
#define T3GSS1_address                           0xFB4
#define T3GSS1_position                          0x1
#define T3GSS1_size                              0x1
#define T3GSS1_value_mask                        0x2
#define T3GSS1_clear_mask                        0xFD

#define T3GVAL                                   0x2
#define T3GVAL_address                           0xFB4
#define T3GVAL_position                          0x2
#define T3GVAL_size                              0x1
#define T3GVAL_value_mask                        0x4
#define T3GVAL_clear_mask                        0xFB

#define T3GGO_NOT_DONE                           0x3
#define T3GGO_NOT_DONE_address                   0xFB4
#define T3GGO_NOT_DONE_position                  0x3
#define T3GGO_NOT_DONE_size                      0x1
#define T3GGO_NOT_DONE_value_mask                0x8
#define T3GGO_NOT_DONE_clear_mask                0xF7

#define T3GGO                                    0x3
#define T3GGO_address                            0xFB4
#define T3GGO_position                           0x3
#define T3GGO_size                               0x1
#define T3GGO_value_mask                         0x8
#define T3GGO_clear_mask                         0xF7

#define T3GGO_nDONE                              0x3
#define T3GGO_nDONE_address                      0xFB4
#define T3GGO_nDONE_position                     0x3
#define T3GGO_nDONE_size                         0x1
#define T3GGO_nDONE_value_mask                   0x8
#define T3GGO_nDONE_clear_mask                   0xF7

#define T3DONE                                   0x3
#define T3DONE_address                           0xFB4
#define T3DONE_position                          0x3
#define T3DONE_size                              0x1
#define T3DONE_value_mask                        0x8
#define T3DONE_clear_mask                        0xF7

#define NOT_T3DONE                               0x3
#define NOT_T3DONE_address                       0xFB4
#define NOT_T3DONE_position                      0x3
#define NOT_T3DONE_size                          0x1
#define NOT_T3DONE_value_mask                    0x8
#define NOT_T3DONE_clear_mask                    0xF7

#define nT3DONE                                  0x3
#define nT3DONE_address                          0xFB4
#define nT3DONE_position                         0x3
#define nT3DONE_size                             0x1
#define nT3DONE_value_mask                       0x8
#define nT3DONE_clear_mask                       0xF7

#define T3GGO_nT3DONE                            0x3
#define T3GGO_nT3DONE_address                    0xFB4
#define T3GGO_nT3DONE_position                   0x3
#define T3GGO_nT3DONE_size                       0x1
#define T3GGO_nT3DONE_value_mask                 0x8
#define T3GGO_nT3DONE_clear_mask                 0xF7

#define T3GGO_NOT_T3DONE                         0x3
#define T3GGO_NOT_T3DONE_address                 0xFB4
#define T3GGO_NOT_T3DONE_position                0x3
#define T3GGO_NOT_T3DONE_size                    0x1
#define T3GGO_NOT_T3DONE_value_mask              0x8
#define T3GGO_NOT_T3DONE_clear_mask              0xF7

#define T3GSPM                                   0x4
#define T3GSPM_address                           0xFB4
#define T3GSPM_position                          0x4
#define T3GSPM_size                              0x1
#define T3GSPM_value_mask                        0x10
#define T3GSPM_clear_mask                        0xEF

#define T3GTM                                    0x5
#define T3GTM_address                            0xFB4
#define T3GTM_position                           0x5
#define T3GTM_size                               0x1
#define T3GTM_value_mask                         0x20
#define T3GTM_clear_mask                         0xDF

#define T3GPOL                                   0x6
#define T3GPOL_address                           0xFB4
#define T3GPOL_position                          0x6
#define T3GPOL_size                              0x1
#define T3GPOL_value_mask                        0x40
#define T3GPOL_clear_mask                        0xBF

#define TMR3GE                                   0x7
#define TMR3GE_address                           0xFB4
#define TMR3GE_position                          0x7
#define TMR3GE_size                              0x1
#define TMR3GE_value_mask                        0x80
#define TMR3GE_clear_mask                        0x7F


/*-------------------------------------------------#
| ACTCON                                     0xFB5 |
#--------------------------------------------------#
| ACTEN | STUD | - | STSRC | STLOCK | - | STOR | - |
#--------------------------------------------------#
| 7     | 6    | 5 | 4     | 3      | 2 | 1    | 0 |
#-------------------------------------------------*/

#define ACTCON                                   0x0
#define ACTCON_address                           0xFB5
#define ACTCON_position                          0x0
#define ACTCON_size                              0x8
#define ACTCON_value_mask                        0xFF
#define ACTCON_clear_mask                        0x0

#define STOR                                     0x1
#define STOR_address                             0xFB5
#define STOR_position                            0x1
#define STOR_size                                0x1
#define STOR_value_mask                          0x2
#define STOR_clear_mask                          0xFD

#define ACTORS                                   0x1
#define ACTORS_address                           0xFB5
#define ACTORS_position                          0x1
#define ACTORS_size                              0x1
#define ACTORS_value_mask                        0x2
#define ACTORS_clear_mask                        0xFD

#define ACTOR                                    0x1
#define ACTOR_address                            0xFB5
#define ACTOR_position                           0x1
#define ACTOR_size                               0x1
#define ACTOR_value_mask                         0x2
#define ACTOR_clear_mask                         0xFD

#define STLOCK                                   0x3
#define STLOCK_address                           0xFB5
#define STLOCK_position                          0x3
#define STLOCK_size                              0x1
#define STLOCK_value_mask                        0x8
#define STLOCK_clear_mask                        0xF7

#define ACTLOCK                                  0x3
#define ACTLOCK_address                          0xFB5
#define ACTLOCK_position                         0x3
#define ACTLOCK_size                             0x1
#define ACTLOCK_value_mask                       0x8
#define ACTLOCK_clear_mask                       0xF7

#define STSRC                                    0x4
#define STSRC_address                            0xFB5
#define STSRC_position                           0x4
#define STSRC_size                               0x1
#define STSRC_value_mask                         0x10
#define STSRC_clear_mask                         0xEF

#define ACTSRC                                   0x4
#define ACTSRC_address                           0xFB5
#define ACTSRC_position                          0x4
#define ACTSRC_size                              0x1
#define ACTSRC_value_mask                        0x10
#define ACTSRC_clear_mask                        0xEF

#define STUD                                     0x6
#define STUD_address                             0xFB5
#define STUD_position                            0x6
#define STUD_size                                0x1
#define STUD_value_mask                          0x40
#define STUD_clear_mask                          0xBF

#define ACTUD                                    0x6
#define ACTUD_address                            0xFB5
#define ACTUD_position                           0x6
#define ACTUD_size                               0x1
#define ACTUD_value_mask                         0x40
#define ACTUD_clear_mask                         0xBF

#define ACTD                                     0x6
#define ACTD_address                             0xFB5
#define ACTD_position                            0x6
#define ACTD_size                                0x1
#define ACTD_value_mask                          0x40
#define ACTD_clear_mask                          0xBF

#define ACTEN                                    0x7
#define ACTEN_address                            0xFB5
#define ACTEN_position                           0x7
#define ACTEN_size                               0x1
#define ACTEN_value_mask                         0x80
#define ACTEN_clear_mask                         0x7F

#define STEN                                     0x7
#define STEN_address                             0xFB5
#define STEN_position                            0x7
#define STEN_size                                0x1
#define STEN_value_mask                          0x80
#define STEN_clear_mask                          0x7F

#define ACTSEL                                   0x7
#define ACTSEL_address                           0xFB5
#define ACTSEL_position                          0x7
#define ACTSEL_size                              0x1
#define ACTSEL_value_mask                        0x80
#define ACTSEL_clear_mask                        0x7F


/*---------------------------------------------------------------------------------#
| ECCP1AS                                                                    0xFB6 |
#----------------------------------------------------------------------------------#
| ECCP1ASE | ECCP1AS2 | ECCP1AS1 | ECCP1AS0 | PSS1AC1 | PSSAC0 | PSS1BD1 | PSS1BD0 |
#----------------------------------------------------------------------------------#
| 7        | 6        | 5        | 4        | 3       | 2      | 1       | 0       |
#---------------------------------------------------------------------------------*/

#define P1SSBD                                   0x0
#define P1SSBD_address                           0xFB6
#define P1SSBD_position                          0x0
#define P1SSBD_size                              0x2
#define P1SSBD_value_mask                        0x3
#define P1SSBD_clear_mask                        0xFC

#define PSSBD0                                   0x0
#define PSSBD0_address                           0xFB6
#define PSSBD0_position                          0x0
#define PSSBD0_size                              0x1
#define PSSBD0_value_mask                        0x1
#define PSSBD0_clear_mask                        0xFE

#define PSS1BD0                                  0x0
#define PSS1BD0_address                          0xFB6
#define PSS1BD0_position                         0x0
#define PSS1BD0_size                             0x1
#define PSS1BD0_value_mask                       0x1
#define PSS1BD0_clear_mask                       0xFE

#define PSS1BD                                   0x0
#define PSS1BD_address                           0xFB6
#define PSS1BD_position                          0x0
#define PSS1BD_size                              0x2
#define PSS1BD_value_mask                        0x3
#define PSS1BD_clear_mask                        0xFC

#define PSSBD1                                   0x1
#define PSSBD1_address                           0xFB6
#define PSSBD1_position                          0x1
#define PSSBD1_size                              0x1
#define PSSBD1_value_mask                        0x2
#define PSSBD1_clear_mask                        0xFD

#define PSS1BD1                                  0x1
#define PSS1BD1_address                          0xFB6
#define PSS1BD1_position                         0x1
#define PSS1BD1_size                             0x1
#define PSS1BD1_value_mask                       0x2
#define PSS1BD1_clear_mask                       0xFD

#define PSSAC0                                   0x2
#define PSSAC0_address                           0xFB6
#define PSSAC0_position                          0x2
#define PSSAC0_size                              0x1
#define PSSAC0_value_mask                        0x4
#define PSSAC0_clear_mask                        0xFB

#define P1SSAC                                   0x2
#define P1SSAC_address                           0xFB6
#define P1SSAC_position                          0x2
#define P1SSAC_size                              0x2
#define P1SSAC_value_mask                        0xC
#define P1SSAC_clear_mask                        0xF3

#define PSS1AC                                   0x2
#define PSS1AC_address                           0xFB6
#define PSS1AC_position                          0x2
#define PSS1AC_size                              0x2
#define PSS1AC_value_mask                        0xC
#define PSS1AC_clear_mask                        0xF3

#define PSS1AC0                                  0x2
#define PSS1AC0_address                          0xFB6
#define PSS1AC0_position                         0x2
#define PSS1AC0_size                             0x1
#define PSS1AC0_value_mask                       0x4
#define PSS1AC0_clear_mask                       0xFB

#define PSSAC1                                   0x3
#define PSSAC1_address                           0xFB6
#define PSSAC1_position                          0x3
#define PSSAC1_size                              0x1
#define PSSAC1_value_mask                        0x8
#define PSSAC1_clear_mask                        0xF7

#define PSS1AC1                                  0x3
#define PSS1AC1_address                          0xFB6
#define PSS1AC1_position                         0x3
#define PSS1AC1_size                             0x1
#define PSS1AC1_value_mask                       0x8
#define PSS1AC1_clear_mask                       0xF7

#define ECCP1AS                                  0x4
#define ECCP1AS_address                          0xFB6
#define ECCP1AS_position                         0x4
#define ECCP1AS_size                             0x3
#define ECCP1AS_value_mask                       0x70
#define ECCP1AS_clear_mask                       0x8F

#define CCP1AS                                   0x4
#define CCP1AS_address                           0xFB6
#define CCP1AS_position                          0x4
#define CCP1AS_size                              0x3
#define CCP1AS_value_mask                        0x70
#define CCP1AS_clear_mask                        0x8F

#define ECCP1AS0                                 0x4
#define ECCP1AS0_address                         0xFB6
#define ECCP1AS0_position                        0x4
#define ECCP1AS0_size                            0x1
#define ECCP1AS0_value_mask                      0x10
#define ECCP1AS0_clear_mask                      0xEF

#define ECCP1AS1                                 0x5
#define ECCP1AS1_address                         0xFB6
#define ECCP1AS1_position                        0x5
#define ECCP1AS1_size                            0x1
#define ECCP1AS1_value_mask                      0x20
#define ECCP1AS1_clear_mask                      0xDF

#define ECCP1AS2                                 0x6
#define ECCP1AS2_address                         0xFB6
#define ECCP1AS2_position                        0x6
#define ECCP1AS2_size                            0x1
#define ECCP1AS2_value_mask                      0x40
#define ECCP1AS2_clear_mask                      0xBF

#define CCP1ASE                                  0x7
#define CCP1ASE_address                          0xFB6
#define CCP1ASE_position                         0x7
#define CCP1ASE_size                             0x1
#define CCP1ASE_value_mask                       0x80
#define CCP1ASE_clear_mask                       0x7F

#define ECCP1ASE                                 0x7
#define ECCP1ASE_address                         0xFB6
#define ECCP1ASE_position                        0x7
#define ECCP1ASE_size                            0x1
#define ECCP1ASE_value_mask                      0x80
#define ECCP1ASE_clear_mask                      0x7F


/*--------------------------------------------------------#
| PWM1CON                                           0xFB7 |
#---------------------------------------------------------#
| P1RSEN | PDC6 | PDC5 | PDC4 | PDC3 | PDC2 | PDC1 | PDC0 |
#---------------------------------------------------------#
| 7      | 6    | 5    | 4    | 3    | 2    | 1    | 0    |
#--------------------------------------------------------*/

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

#define P1DC                                     0x0
#define P1DC_address                             0xFB7
#define P1DC_position                            0x0
#define P1DC_size                                0x7
#define P1DC_value_mask                          0x7F
#define P1DC_clear_mask                          0x80

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

#define P1RSEN                                   0x7
#define P1RSEN_address                           0xFB7
#define P1RSEN_position                          0x7
#define P1RSEN_size                              0x1
#define P1RSEN_value_mask                        0x80
#define P1RSEN_clear_mask                        0x7F

#define PR1SEN                                   0x7
#define PR1SEN_address                           0xFB7
#define PR1SEN_position                          0x7
#define PR1SEN_size                              0x1
#define PR1SEN_value_mask                        0x80
#define PR1SEN_clear_mask                        0x7F


/*-------------------------------------------------------------#
| BAUDCON1                                               0xFB8 |
#--------------------------------------------------------------#
| ABDOVF | RCMT1 | DTRXP1 | CKTXP | BRG161 | - | WUE1 | ABDEN1 |
#--------------------------------------------------------------#
| 7      | 6     | 5      | 4     | 3      | 2 | 1    | 0      |
#-------------------------------------------------------------*/

#define BAUDCON1                                 0x0
#define BAUDCON1_address                         0xFB8
#define BAUDCON1_position                        0x0
#define BAUDCON1_size                            0x8
#define BAUDCON1_value_mask                      0xFF
#define BAUDCON1_clear_mask                      0x0

#define ABDEN1                                   0x0
#define ABDEN1_address                           0xFB8
#define ABDEN1_position                          0x0
#define ABDEN1_size                              0x1
#define ABDEN1_value_mask                        0x1
#define ABDEN1_clear_mask                        0xFE

#define ABDEN                                    0x0
#define ABDEN_address                            0xFB8
#define ABDEN_position                           0x0
#define ABDEN_size                               0x1
#define ABDEN_value_mask                         0x1
#define ABDEN_clear_mask                         0xFE

#define WUE1                                     0x1
#define WUE1_address                             0xFB8
#define WUE1_position                            0x1
#define WUE1_size                                0x1
#define WUE1_value_mask                          0x2
#define WUE1_clear_mask                          0xFD

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

#define BRG161                                   0x3
#define BRG161_address                           0xFB8
#define BRG161_position                          0x3
#define BRG161_size                              0x1
#define BRG161_value_mask                        0x8
#define BRG161_clear_mask                        0xF7

#define BRG16                                    0x3
#define BRG16_address                            0xFB8
#define BRG16_position                           0x3
#define BRG16_size                               0x1
#define BRG16_value_mask                         0x8
#define BRG16_clear_mask                         0xF7

#define CKTXP                                    0x4
#define CKTXP_address                            0xFB8
#define CKTXP_position                           0x4
#define CKTXP_size                               0x1
#define CKTXP_value_mask                         0x10
#define CKTXP_clear_mask                         0xEF

#define SCKP1                                    0x4
#define SCKP1_address                            0xFB8
#define SCKP1_position                           0x4
#define SCKP1_size                               0x1
#define SCKP1_value_mask                         0x10
#define SCKP1_clear_mask                         0xEF

#define TXCKP                                    0x4
#define TXCKP_address                            0xFB8
#define TXCKP_position                           0x4
#define TXCKP_size                               0x1
#define TXCKP_value_mask                         0x10
#define TXCKP_clear_mask                         0xEF

#define TXCKP1                                   0x4
#define TXCKP1_address                           0xFB8
#define TXCKP1_position                          0x4
#define TXCKP1_size                              0x1
#define TXCKP1_value_mask                        0x10
#define TXCKP1_clear_mask                        0xEF

#define SCKP                                     0x4
#define SCKP_address                             0xFB8
#define SCKP_position                            0x4
#define SCKP_size                                0x1
#define SCKP_value_mask                          0x10
#define SCKP_clear_mask                          0xEF

#define DTRXP1                                   0x5
#define DTRXP1_address                           0xFB8
#define DTRXP1_position                          0x5
#define DTRXP1_size                              0x1
#define DTRXP1_value_mask                        0x20
#define DTRXP1_clear_mask                        0xDF

#define RXDTP1                                   0x5
#define RXDTP1_address                           0xFB8
#define RXDTP1_position                          0x5
#define RXDTP1_size                              0x1
#define RXDTP1_value_mask                        0x20
#define RXDTP1_clear_mask                        0xDF

#define DTRXP                                    0x5
#define DTRXP_address                            0xFB8
#define DTRXP_position                           0x5
#define DTRXP_size                               0x1
#define DTRXP_value_mask                         0x20
#define DTRXP_clear_mask                         0xDF

#define RXCKP                                    0x5
#define RXCKP_address                            0xFB8
#define RXCKP_position                           0x5
#define RXCKP_size                               0x1
#define RXCKP_value_mask                         0x20
#define RXCKP_clear_mask                         0xDF

#define RXDTP                                    0x5
#define RXDTP_address                            0xFB8
#define RXDTP_position                           0x5
#define RXDTP_size                               0x1
#define RXDTP_value_mask                         0x20
#define RXDTP_clear_mask                         0xDF

#define RCMT1                                    0x6
#define RCMT1_address                            0xFB8
#define RCMT1_position                           0x6
#define RCMT1_size                               0x1
#define RCMT1_value_mask                         0x40
#define RCMT1_clear_mask                         0xBF

#define RCIDL1                                   0x6
#define RCIDL1_address                           0xFB8
#define RCIDL1_position                          0x6
#define RCIDL1_size                              0x1
#define RCIDL1_value_mask                        0x40
#define RCIDL1_clear_mask                        0xBF

#define RCIDL                                    0x6
#define RCIDL_address                            0xFB8
#define RCIDL_position                           0x6
#define RCIDL_size                               0x1
#define RCIDL_value_mask                         0x40
#define RCIDL_clear_mask                         0xBF

#define RCMT                                     0x6
#define RCMT_address                             0xFB8
#define RCMT_position                            0x6
#define RCMT_size                                0x1
#define RCMT_value_mask                          0x40
#define RCMT_clear_mask                          0xBF

#define ABDOVF                                   0x7
#define ABDOVF_address                           0xFB8
#define ABDOVF_position                          0x7
#define ABDOVF_size                              0x1
#define ABDOVF_value_mask                        0x80
#define ABDOVF_clear_mask                        0x7F

#define ABDOVF1                                  0x7
#define ABDOVF1_address                          0xFB8
#define ABDOVF1_position                         0x7
#define ABDOVF1_size                             0x1
#define ABDOVF1_value_mask                       0x80
#define ABDOVF1_clear_mask                       0x7F


/*-----------------------------------------------------#
| PSTR1CON                                       0xFB9 |
#------------------------------------------------------#
| - | - | - | STR1SYNC | STR1D | STR1C | STR1B | STR1A |
#------------------------------------------------------#
| 7 | 6 | 5 | 4        | 3     | 2     | 1     | 0     |
#-----------------------------------------------------*/

#define PSTR1CON                                 0x0
#define PSTR1CON_address                         0xFB9
#define PSTR1CON_position                        0x0
#define PSTR1CON_size                            0x8
#define PSTR1CON_value_mask                      0xFF
#define PSTR1CON_clear_mask                      0x0

#define STR1A                                    0x0
#define STR1A_address                            0xFB9
#define STR1A_position                           0x0
#define STR1A_size                               0x1
#define STR1A_value_mask                         0x1
#define STR1A_clear_mask                         0xFE

#define STRA                                     0x0
#define STRA_address                             0xFB9
#define STRA_position                            0x0
#define STRA_size                                0x1
#define STRA_value_mask                          0x1
#define STRA_clear_mask                          0xFE

#define STR1B                                    0x1
#define STR1B_address                            0xFB9
#define STR1B_position                           0x1
#define STR1B_size                               0x1
#define STR1B_value_mask                         0x2
#define STR1B_clear_mask                         0xFD

#define STRB                                     0x1
#define STRB_address                             0xFB9
#define STRB_position                            0x1
#define STRB_size                                0x1
#define STRB_value_mask                          0x2
#define STRB_clear_mask                          0xFD

#define STR1C                                    0x2
#define STR1C_address                            0xFB9
#define STR1C_position                           0x2
#define STR1C_size                               0x1
#define STR1C_value_mask                         0x4
#define STR1C_clear_mask                         0xFB

#define STRC                                     0x2
#define STRC_address                             0xFB9
#define STRC_position                            0x2
#define STRC_size                                0x1
#define STRC_value_mask                          0x4
#define STRC_clear_mask                          0xFB

#define STR1D                                    0x3
#define STR1D_address                            0xFB9
#define STR1D_position                           0x3
#define STR1D_size                               0x1
#define STR1D_value_mask                         0x8
#define STR1D_clear_mask                         0xF7

#define STRD                                     0x3
#define STRD_address                             0xFB9
#define STRD_position                            0x3
#define STRD_size                                0x1
#define STRD_value_mask                          0x8
#define STRD_clear_mask                          0xF7

#define STR1SYNC                                 0x4
#define STR1SYNC_address                         0xFB9
#define STR1SYNC_position                        0x4
#define STR1SYNC_size                            0x1
#define STR1SYNC_value_mask                      0x10
#define STR1SYNC_clear_mask                      0xEF

#define STRSYNC                                  0x4
#define STRSYNC_address                          0xFB9
#define STRSYNC_position                         0x4
#define STRSYNC_size                             0x1
#define STRSYNC_value_mask                       0x10
#define STRSYNC_clear_mask                       0xEF


/*---------------------------------------------------------------------------#
| T2CON                                                                0xFBA |
#----------------------------------------------------------------------------#
| - | T2OUTPS3 | T2OUTPS2 | T2OUTPS1 | T2OUTPS0 | TMR2ON | T2CKPS1 | T2CKPS0 |
#----------------------------------------------------------------------------#
| 7 | 6        | 5        | 4        | 3        | 2      | 1       | 0       |
#---------------------------------------------------------------------------*/

#define T2CON                                    0x0
#define T2CON_address                            0xFBA
#define T2CON_position                           0x0
#define T2CON_size                               0x8
#define T2CON_value_mask                         0xFF
#define T2CON_clear_mask                         0x0

#define T2CKPS0                                  0x0
#define T2CKPS0_address                          0xFBA
#define T2CKPS0_position                         0x0
#define T2CKPS0_size                             0x1
#define T2CKPS0_value_mask                       0x1
#define T2CKPS0_clear_mask                       0xFE

#define T2CKPS                                   0x0
#define T2CKPS_address                           0xFBA
#define T2CKPS_position                          0x0
#define T2CKPS_size                              0x2
#define T2CKPS_value_mask                        0x3
#define T2CKPS_clear_mask                        0xFC

#define T2CKPS1                                  0x1
#define T2CKPS1_address                          0xFBA
#define T2CKPS1_position                         0x1
#define T2CKPS1_size                             0x1
#define T2CKPS1_value_mask                       0x2
#define T2CKPS1_clear_mask                       0xFD

#define TMR2ON                                   0x2
#define TMR2ON_address                           0xFBA
#define TMR2ON_position                          0x2
#define TMR2ON_size                              0x1
#define TMR2ON_value_mask                        0x4
#define TMR2ON_clear_mask                        0xFB

#define T2OUTPS0                                 0x3
#define T2OUTPS0_address                         0xFBA
#define T2OUTPS0_position                        0x3
#define T2OUTPS0_size                            0x1
#define T2OUTPS0_value_mask                      0x8
#define T2OUTPS0_clear_mask                      0xF7

#define T2OUTPS                                  0x3
#define T2OUTPS_address                          0xFBA
#define T2OUTPS_position                         0x3
#define T2OUTPS_size                             0x4
#define T2OUTPS_value_mask                       0x78
#define T2OUTPS_clear_mask                       0x87

#define T2OUTPS1                                 0x4
#define T2OUTPS1_address                         0xFBA
#define T2OUTPS1_position                        0x4
#define T2OUTPS1_size                            0x1
#define T2OUTPS1_value_mask                      0x10
#define T2OUTPS1_clear_mask                      0xEF

#define T2OUTPS2                                 0x5
#define T2OUTPS2_address                         0xFBA
#define T2OUTPS2_position                        0x5
#define T2OUTPS2_size                            0x1
#define T2OUTPS2_value_mask                      0x20
#define T2OUTPS2_clear_mask                      0xDF

#define T2OUTPS3                                 0x6
#define T2OUTPS3_address                         0xFBA
#define T2OUTPS3_position                        0x6
#define T2OUTPS3_size                            0x1
#define T2OUTPS3_value_mask                      0x40
#define T2OUTPS3_clear_mask                      0xBF


/*------------------------------#
| PR2                     0xFBB |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define PR2                                      0x0
#define PR2_address                              0xFBB
#define PR2_position                             0x0
#define PR2_size                                 0x8
#define PR2_value_mask                           0xFF
#define PR2_clear_mask                           0x0


/*------------------------------#
| TMR2                    0xFBC |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define TMR2                                     0x0
#define TMR2_address                             0xFBC
#define TMR2_position                            0x0
#define TMR2_size                                0x8
#define TMR2_value_mask                          0xFF
#define TMR2_clear_mask                          0x0


/*----------------------------------------------------------------#
| CCP1CON                                                   0xFBD |
#-----------------------------------------------------------------#
| P1M1 | P1M0 | CCP1X | CCP1Y | CCP1M3 | CCP1M2 | CCP1M1 | CCP1M0 |
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


/*------------------------------#
| CCPR1L                  0xFBE |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define CCPR1L                                   0x0
#define CCPR1L_address                           0xFBE
#define CCPR1L_position                          0x0
#define CCPR1L_size                              0x8
#define CCPR1L_value_mask                        0xFF
#define CCPR1L_clear_mask                        0x0


/*------------------------------#
| CCPR1H                  0xFBF |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define CCPR1H                                   0x0
#define CCPR1H_address                           0xFBF
#define CCPR1H_position                          0x0
#define CCPR1H_size                              0x8
#define CCPR1H_value_mask                        0xFF
#define CCPR1H_clear_mask                        0x0


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
| TRIGSEL | - | - | - | CHSN3 | PVCFG0 | NVCFG1 | NVCFG0 |
#--------------------------------------------------------#
| 7       | 6 | 5 | 4 | 3     | 2      | 1      | 0      |
#-------------------------------------------------------*/

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

#define TRIGSEL                                  0x7
#define TRIGSEL_address                          0xFC1
#define TRIGSEL_position                         0x7
#define TRIGSEL_size                             0x1
#define TRIGSEL_value_mask                       0x80
#define TRIGSEL_clear_mask                       0x7F


/*-------------------------------------#
| ADCON0                         0xFC2 |
#--------------------------------------#
| - | CHS               | nDONE | ADON |
#--------------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1     | 0    |
#-------------------------------------*/

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

#define GODONE                                   0x1
#define GODONE_address                           0xFC2
#define GODONE_position                          0x1
#define GODONE_size                              0x1
#define GODONE_value_mask                        0x2
#define GODONE_clear_mask                        0xFD

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

#define CHS                                      0x2
#define CHS_address                              0xFC2
#define CHS_position                             0x2
#define CHS_size                                 0x5
#define CHS_value_mask                           0x7C
#define CHS_clear_mask                           0x83


/*------------------------------------------------------------------#
| SSP1CON2                                                    0xFC5 |
#-------------------------------------------------------------------#
| GCEN | ACKSTAT | ADMSK51 | ACKEN | ADMSK31 | PEN | ADMSK11 | SEN1 |
#-------------------------------------------------------------------#
| 7    | 6       | 5       | 4     | 3       | 2   | 1       | 0    |
#------------------------------------------------------------------*/

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

#define SEN                                      0x0
#define SEN_address                              0xFC5
#define SEN_position                             0x0
#define SEN_size                                 0x1
#define SEN_value_mask                           0x1
#define SEN_clear_mask                           0xFE

#define ADMSK11                                  0x1
#define ADMSK11_address                          0xFC5
#define ADMSK11_position                         0x1
#define ADMSK11_size                             0x1
#define ADMSK11_value_mask                       0x2
#define ADMSK11_clear_mask                       0xFD

#define RSEN1                                    0x1
#define RSEN1_address                            0xFC5
#define RSEN1_position                           0x1
#define RSEN1_size                               0x1
#define RSEN1_value_mask                         0x2
#define RSEN1_clear_mask                         0xFD

#define RSEN                                     0x1
#define RSEN_address                             0xFC5
#define RSEN_position                            0x1
#define RSEN_size                                0x1
#define RSEN_value_mask                          0x2
#define RSEN_clear_mask                          0xFD

#define ADMSK1                                   0x1
#define ADMSK1_address                           0xFC5
#define ADMSK1_position                          0x1
#define ADMSK1_size                              0x1
#define ADMSK1_value_mask                        0x2
#define ADMSK1_clear_mask                        0xFD

#define PEN                                      0x2
#define PEN_address                              0xFC5
#define PEN_position                             0x2
#define PEN_size                                 0x1
#define PEN_value_mask                           0x4
#define PEN_clear_mask                           0xFB

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

#define ADMSK2                                   0x2
#define ADMSK2_address                           0xFC5
#define ADMSK2_position                          0x2
#define ADMSK2_size                              0x1
#define ADMSK2_value_mask                        0x4
#define ADMSK2_clear_mask                        0xFB

#define ADMSK31                                  0x3
#define ADMSK31_address                          0xFC5
#define ADMSK31_position                         0x3
#define ADMSK31_size                             0x1
#define ADMSK31_value_mask                       0x8
#define ADMSK31_clear_mask                       0xF7

#define RCEN                                     0x3
#define RCEN_address                             0xFC5
#define RCEN_position                            0x3
#define RCEN_size                                0x1
#define RCEN_value_mask                          0x8
#define RCEN_clear_mask                          0xF7

#define RCEN1                                    0x3
#define RCEN1_address                            0xFC5
#define RCEN1_position                           0x3
#define RCEN1_size                               0x1
#define RCEN1_value_mask                         0x8
#define RCEN1_clear_mask                         0xF7

#define ADMSK3                                   0x3
#define ADMSK3_address                           0xFC5
#define ADMSK3_position                          0x3
#define ADMSK3_size                              0x1
#define ADMSK3_value_mask                        0x8
#define ADMSK3_clear_mask                        0xF7

#define ACKEN                                    0x4
#define ACKEN_address                            0xFC5
#define ACKEN_position                           0x4
#define ACKEN_size                               0x1
#define ACKEN_value_mask                         0x10
#define ACKEN_clear_mask                         0xEF

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

#define ADMSK4                                   0x4
#define ADMSK4_address                           0xFC5
#define ADMSK4_position                          0x4
#define ADMSK4_size                              0x1
#define ADMSK4_value_mask                        0x10
#define ADMSK4_clear_mask                        0xEF

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

#define ADMSK5                                   0x5
#define ADMSK5_address                           0xFC5
#define ADMSK5_position                          0x5
#define ADMSK5_size                              0x1
#define ADMSK5_value_mask                        0x20
#define ADMSK5_clear_mask                        0xDF

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

#define ACKSTAT1                                 0x6
#define ACKSTAT1_address                         0xFC5
#define ACKSTAT1_position                        0x6
#define ACKSTAT1_size                            0x1
#define ACKSTAT1_value_mask                      0x40
#define ACKSTAT1_clear_mask                      0xBF

#define GCEN                                     0x7
#define GCEN_address                             0xFC5
#define GCEN_position                            0x7
#define GCEN_size                                0x1
#define GCEN_value_mask                          0x80
#define GCEN_clear_mask                          0x7F

#define GCEN1                                    0x7
#define GCEN1_address                            0xFC5
#define GCEN1_position                           0x7
#define GCEN1_size                               0x1
#define GCEN1_value_mask                         0x80
#define GCEN1_clear_mask                         0x7F


/*------------------------------------------------------------#
| SSP1CON1                                              0xFC6 |
#-------------------------------------------------------------#
| WCOL | SSPOV | SSPEN | CKP | SSPM31 | SSPM2 | SSPM1 | SSPM0 |
#-------------------------------------------------------------#
| 7    | 6     | 5     | 4   | 3      | 2     | 1     | 0     |
#------------------------------------------------------------*/

#define SSP1CON1                                 0x0
#define SSP1CON1_address                         0xFC6
#define SSP1CON1_position                        0x0
#define SSP1CON1_size                            0x8
#define SSP1CON1_value_mask                      0xFF
#define SSP1CON1_clear_mask                      0x0

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

#define SSPM01                                   0x0
#define SSPM01_address                           0xFC6
#define SSPM01_position                          0x0
#define SSPM01_size                              0x1
#define SSPM01_value_mask                        0x1
#define SSPM01_clear_mask                        0xFE

#define SSPM1                                    0x1
#define SSPM1_address                            0xFC6
#define SSPM1_position                           0x1
#define SSPM1_size                               0x1
#define SSPM1_value_mask                         0x2
#define SSPM1_clear_mask                         0xFD

#define SSPM11                                   0x1
#define SSPM11_address                           0xFC6
#define SSPM11_position                          0x1
#define SSPM11_size                              0x1
#define SSPM11_value_mask                        0x2
#define SSPM11_clear_mask                        0xFD

#define SSPM2                                    0x2
#define SSPM2_address                            0xFC6
#define SSPM2_position                           0x2
#define SSPM2_size                               0x1
#define SSPM2_value_mask                         0x4
#define SSPM2_clear_mask                         0xFB

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

#define CKP1                                     0x4
#define CKP1_address                             0xFC6
#define CKP1_position                            0x4
#define CKP1_size                                0x1
#define CKP1_value_mask                          0x10
#define CKP1_clear_mask                          0xEF

#define SSPEN                                    0x5
#define SSPEN_address                            0xFC6
#define SSPEN_position                           0x5
#define SSPEN_size                               0x1
#define SSPEN_value_mask                         0x20
#define SSPEN_clear_mask                         0xDF

#define SSPEN1                                   0x5
#define SSPEN1_address                           0xFC6
#define SSPEN1_position                          0x5
#define SSPEN1_size                              0x1
#define SSPEN1_value_mask                        0x20
#define SSPEN1_clear_mask                        0xDF

#define SSPOV1                                   0x6
#define SSPOV1_address                           0xFC6
#define SSPOV1_position                          0x6
#define SSPOV1_size                              0x1
#define SSPOV1_value_mask                        0x40
#define SSPOV1_clear_mask                        0xBF

#define SSPOV                                    0x6
#define SSPOV_address                            0xFC6
#define SSPOV_position                           0x6
#define SSPOV_size                               0x1
#define SSPOV_value_mask                         0x40
#define SSPOV_clear_mask                         0xBF

#define WCOL1                                    0x7
#define WCOL1_address                            0xFC6
#define WCOL1_position                           0x7
#define WCOL1_size                               0x1
#define WCOL1_value_mask                         0x80
#define WCOL1_clear_mask                         0x7F

#define WCOL                                     0x7
#define WCOL_address                             0xFC6
#define WCOL_position                            0x7
#define WCOL_size                                0x1
#define WCOL_value_mask                          0x80
#define WCOL_clear_mask                          0x7F


/*-------------------------------------------------------#
| SSP1STAT                                         0xFC7 |
#--------------------------------------------------------#
| SMP | CKE | NOT_A | STOP | START1 | R_NOT_W | UA1 | BF |
#--------------------------------------------------------#
| 7   | 6   | 5     | 4    | 3      | 2       | 1   | 0  |
#-------------------------------------------------------*/

#define SSP1STAT                                 0x0
#define SSP1STAT_address                         0xFC7
#define SSP1STAT_position                        0x0
#define SSP1STAT_size                            0x8
#define SSP1STAT_value_mask                      0xFF
#define SSP1STAT_clear_mask                      0x0

#define BF                                       0x0
#define BF_address                               0xFC7
#define BF_position                              0x0
#define BF_size                                  0x1
#define BF_value_mask                            0x1
#define BF_clear_mask                            0xFE

#define BF1                                      0x0
#define BF1_address                              0xFC7
#define BF1_position                             0x0
#define BF1_size                                 0x1
#define BF1_value_mask                           0x1
#define BF1_clear_mask                           0xFE

#define UA1                                      0x1
#define UA1_address                              0xFC7
#define UA1_position                             0x1
#define UA1_size                                 0x1
#define UA1_value_mask                           0x2
#define UA1_clear_mask                           0xFD

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

#define nWRITE                                   0x2
#define nWRITE_address                           0xFC7
#define nWRITE_position                          0x2
#define nWRITE_size                              0x1
#define nWRITE_value_mask                        0x4
#define nWRITE_clear_mask                        0xFB

#define nW                                       0x2
#define nW_address                               0xFC7
#define nW_position                              0x2
#define nW_size                                  0x1
#define nW_value_mask                            0x4
#define nW_clear_mask                            0xFB

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

#define START1                                   0x3
#define START1_address                           0xFC7
#define START1_position                          0x3
#define START1_size                              0x1
#define START1_value_mask                        0x8
#define START1_clear_mask                        0xF7

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

#define STOP1                                    0x4
#define STOP1_address                            0xFC7
#define STOP1_position                           0x4
#define STOP1_size                               0x1
#define STOP1_value_mask                         0x10
#define STOP1_clear_mask                         0xEF

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

#define D_NOT_A                                  0x5
#define D_NOT_A_address                          0xFC7
#define D_NOT_A_position                         0x5
#define D_NOT_A_size                             0x1
#define D_NOT_A_value_mask                       0x20
#define D_NOT_A_clear_mask                       0xDF

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

#define CKE1                                     0x6
#define CKE1_address                             0xFC7
#define CKE1_position                            0x6
#define CKE1_size                                0x1
#define CKE1_value_mask                          0x40
#define CKE1_clear_mask                          0xBF

#define SMP                                      0x7
#define SMP_address                              0xFC7
#define SMP_position                             0x7
#define SMP_size                                 0x1
#define SMP_value_mask                           0x80
#define SMP_clear_mask                           0x7F

#define SMP1                                     0x7
#define SMP1_address                             0xFC7
#define SMP1_position                            0x7
#define SMP1_size                                0x1
#define SMP1_value_mask                          0x80
#define SMP1_clear_mask                          0x7F


/*-----------------------------------------------------------#
| SSP1ADD                                              0xFC8 |
#------------------------------------------------------------#
| MSK71 | MSK6 | MSK51 | MSK4 | MSK31 | MSK21 | MSK11 | MSK0 |
#------------------------------------------------------------#
| 7     | 6    | 5     | 4    | 3     | 2     | 1     | 0    |
#-----------------------------------------------------------*/

#define MSK0                                     0x0
#define MSK0_address                             0xFC8
#define MSK0_position                            0x0
#define MSK0_size                                0x1
#define MSK0_value_mask                          0x1
#define MSK0_clear_mask                          0xFE

#define SSP1ADD0                                 0x0
#define SSP1ADD0_address                         0xFC8
#define SSP1ADD0_position                        0x0
#define SSP1ADD0_size                            0x1
#define SSP1ADD0_value_mask                      0x1
#define SSP1ADD0_clear_mask                      0xFE

#define MSK01                                    0x0
#define MSK01_address                            0xFC8
#define MSK01_position                           0x0
#define MSK01_size                               0x1
#define MSK01_value_mask                         0x1
#define MSK01_clear_mask                         0xFE

#define SSP1ADD                                  0x0
#define SSP1ADD_address                          0xFC8
#define SSP1ADD_position                         0x0
#define SSP1ADD_size                             0x8
#define SSP1ADD_value_mask                       0xFF
#define SSP1ADD_clear_mask                       0x0

#define MSK11                                    0x1
#define MSK11_address                            0xFC8
#define MSK11_position                           0x1
#define MSK11_size                               0x1
#define MSK11_value_mask                         0x2
#define MSK11_clear_mask                         0xFD

#define MSK1                                     0x1
#define MSK1_address                             0xFC8
#define MSK1_position                            0x1
#define MSK1_size                                0x1
#define MSK1_value_mask                          0x2
#define MSK1_clear_mask                          0xFD

#define SSP1ADD1                                 0x1
#define SSP1ADD1_address                         0xFC8
#define SSP1ADD1_position                        0x1
#define SSP1ADD1_size                            0x1
#define SSP1ADD1_value_mask                      0x2
#define SSP1ADD1_clear_mask                      0xFD

#define MSK2                                     0x2
#define MSK2_address                             0xFC8
#define MSK2_position                            0x2
#define MSK2_size                                0x1
#define MSK2_value_mask                          0x4
#define MSK2_clear_mask                          0xFB

#define MSK21                                    0x2
#define MSK21_address                            0xFC8
#define MSK21_position                           0x2
#define MSK21_size                               0x1
#define MSK21_value_mask                         0x4
#define MSK21_clear_mask                         0xFB

#define SSP1ADD2                                 0x2
#define SSP1ADD2_address                         0xFC8
#define SSP1ADD2_position                        0x2
#define SSP1ADD2_size                            0x1
#define SSP1ADD2_value_mask                      0x4
#define SSP1ADD2_clear_mask                      0xFB

#define MSK31                                    0x3
#define MSK31_address                            0xFC8
#define MSK31_position                           0x3
#define MSK31_size                               0x1
#define MSK31_value_mask                         0x8
#define MSK31_clear_mask                         0xF7

#define MSK3                                     0x3
#define MSK3_address                             0xFC8
#define MSK3_position                            0x3
#define MSK3_size                                0x1
#define MSK3_value_mask                          0x8
#define MSK3_clear_mask                          0xF7

#define SSP1ADD3                                 0x3
#define SSP1ADD3_address                         0xFC8
#define SSP1ADD3_position                        0x3
#define SSP1ADD3_size                            0x1
#define SSP1ADD3_value_mask                      0x8
#define SSP1ADD3_clear_mask                      0xF7

#define MSK4                                     0x4
#define MSK4_address                             0xFC8
#define MSK4_position                            0x4
#define MSK4_size                                0x1
#define MSK4_value_mask                          0x10
#define MSK4_clear_mask                          0xEF

#define MSK41                                    0x4
#define MSK41_address                            0xFC8
#define MSK41_position                           0x4
#define MSK41_size                               0x1
#define MSK41_value_mask                         0x10
#define MSK41_clear_mask                         0xEF

#define SSP1ADD4                                 0x4
#define SSP1ADD4_address                         0xFC8
#define SSP1ADD4_position                        0x4
#define SSP1ADD4_size                            0x1
#define SSP1ADD4_value_mask                      0x10
#define SSP1ADD4_clear_mask                      0xEF

#define MSK51                                    0x5
#define MSK51_address                            0xFC8
#define MSK51_position                           0x5
#define MSK51_size                               0x1
#define MSK51_value_mask                         0x20
#define MSK51_clear_mask                         0xDF

#define MSK5                                     0x5
#define MSK5_address                             0xFC8
#define MSK5_position                            0x5
#define MSK5_size                                0x1
#define MSK5_value_mask                          0x20
#define MSK5_clear_mask                          0xDF

#define SSP1ADD5                                 0x5
#define SSP1ADD5_address                         0xFC8
#define SSP1ADD5_position                        0x5
#define SSP1ADD5_size                            0x1
#define SSP1ADD5_value_mask                      0x20
#define SSP1ADD5_clear_mask                      0xDF

#define MSK6                                     0x6
#define MSK6_address                             0xFC8
#define MSK6_position                            0x6
#define MSK6_size                                0x1
#define MSK6_value_mask                          0x40
#define MSK6_clear_mask                          0xBF

#define SSP1ADD6                                 0x6
#define SSP1ADD6_address                         0xFC8
#define SSP1ADD6_position                        0x6
#define SSP1ADD6_size                            0x1
#define SSP1ADD6_value_mask                      0x40
#define SSP1ADD6_clear_mask                      0xBF

#define MSK61                                    0x6
#define MSK61_address                            0xFC8
#define MSK61_position                           0x6
#define MSK61_size                               0x1
#define MSK61_value_mask                         0x40
#define MSK61_clear_mask                         0xBF

#define MSK71                                    0x7
#define MSK71_address                            0xFC8
#define MSK71_position                           0x7
#define MSK71_size                               0x1
#define MSK71_value_mask                         0x80
#define MSK71_clear_mask                         0x7F

#define MSK7                                     0x7
#define MSK7_address                             0xFC8
#define MSK7_position                            0x7
#define MSK7_size                                0x1
#define MSK7_value_mask                          0x80
#define MSK7_clear_mask                          0x7F

#define SSP1ADD7                                 0x7
#define SSP1ADD7_address                         0xFC8
#define SSP1ADD7_position                        0x7
#define SSP1ADD7_size                            0x1
#define SSP1ADD7_value_mask                      0x80
#define SSP1ADD7_clear_mask                      0x7F


/*------------------------------#
| SSP1BUF                 0xFC9 |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define SSP1BUF                                  0x0
#define SSP1BUF_address                          0xFC9
#define SSP1BUF_position                         0x0
#define SSP1BUF_size                             0x8
#define SSP1BUF_value_mask                       0xFF
#define SSP1BUF_clear_mask                       0x0


/*--------------------------------------------------------------------------------------#
| SSP1MSK                                                                         0xFCA |
#---------------------------------------------------------------------------------------#
| SSP1MSK7 | SSP1MSK6 | SSP1MSK5 | SSP1MSK4 | SSP1MSK3 | SSP1MSK2 | SSP1MSK1 | SSP1MSK0 |
#---------------------------------------------------------------------------------------#
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
#--------------------------------------------------------------------------------------*/

#define SSP1MSK0                                 0x0
#define SSP1MSK0_address                         0xFCA
#define SSP1MSK0_position                        0x0
#define SSP1MSK0_size                            0x1
#define SSP1MSK0_value_mask                      0x1
#define SSP1MSK0_clear_mask                      0xFE

#define SSP1MSK                                  0x0
#define SSP1MSK_address                          0xFCA
#define SSP1MSK_position                         0x0
#define SSP1MSK_size                             0x8
#define SSP1MSK_value_mask                       0xFF
#define SSP1MSK_clear_mask                       0x0

#define SSP1MSK1                                 0x1
#define SSP1MSK1_address                         0xFCA
#define SSP1MSK1_position                        0x1
#define SSP1MSK1_size                            0x1
#define SSP1MSK1_value_mask                      0x2
#define SSP1MSK1_clear_mask                      0xFD

#define SSP1MSK2                                 0x2
#define SSP1MSK2_address                         0xFCA
#define SSP1MSK2_position                        0x2
#define SSP1MSK2_size                            0x1
#define SSP1MSK2_value_mask                      0x4
#define SSP1MSK2_clear_mask                      0xFB

#define SSP1MSK3                                 0x3
#define SSP1MSK3_address                         0xFCA
#define SSP1MSK3_position                        0x3
#define SSP1MSK3_size                            0x1
#define SSP1MSK3_value_mask                      0x8
#define SSP1MSK3_clear_mask                      0xF7

#define SSP1MSK4                                 0x4
#define SSP1MSK4_address                         0xFCA
#define SSP1MSK4_position                        0x4
#define SSP1MSK4_size                            0x1
#define SSP1MSK4_value_mask                      0x10
#define SSP1MSK4_clear_mask                      0xEF

#define SSP1MSK5                                 0x5
#define SSP1MSK5_address                         0xFCA
#define SSP1MSK5_position                        0x5
#define SSP1MSK5_size                            0x1
#define SSP1MSK5_value_mask                      0x20
#define SSP1MSK5_clear_mask                      0xDF

#define SSP1MSK6                                 0x6
#define SSP1MSK6_address                         0xFCA
#define SSP1MSK6_position                        0x6
#define SSP1MSK6_size                            0x1
#define SSP1MSK6_value_mask                      0x40
#define SSP1MSK6_clear_mask                      0xBF

#define SSP1MSK7                                 0x7
#define SSP1MSK7_address                         0xFCA
#define SSP1MSK7_position                        0x7
#define SSP1MSK7_size                            0x1
#define SSP1MSK7_value_mask                      0x80
#define SSP1MSK7_clear_mask                      0x7F


/*----------------------------------------------------------#
| SSP1CON3                                            0xFCB |
#-----------------------------------------------------------#
| ACKTIM | PCIE | SCIE | BOEN | SDAHT | SBCDE | AHEN | DHEN |
#-----------------------------------------------------------#
| 7      | 6    | 5    | 4    | 3     | 2     | 1    | 0    |
#----------------------------------------------------------*/

#define SSP1CON3                                 0x0
#define SSP1CON3_address                         0xFCB
#define SSP1CON3_position                        0x0
#define SSP1CON3_size                            0x8
#define SSP1CON3_value_mask                      0xFF
#define SSP1CON3_clear_mask                      0x0

#define DHEN                                     0x0
#define DHEN_address                             0xFCB
#define DHEN_position                            0x0
#define DHEN_size                                0x1
#define DHEN_value_mask                          0x1
#define DHEN_clear_mask                          0xFE

#define AHEN                                     0x1
#define AHEN_address                             0xFCB
#define AHEN_position                            0x1
#define AHEN_size                                0x1
#define AHEN_value_mask                          0x2
#define AHEN_clear_mask                          0xFD

#define SBCDE                                    0x2
#define SBCDE_address                            0xFCB
#define SBCDE_position                           0x2
#define SBCDE_size                               0x1
#define SBCDE_value_mask                         0x4
#define SBCDE_clear_mask                         0xFB

#define SDAHT                                    0x3
#define SDAHT_address                            0xFCB
#define SDAHT_position                           0x3
#define SDAHT_size                               0x1
#define SDAHT_value_mask                         0x8
#define SDAHT_clear_mask                         0xF7

#define BOEN                                     0x4
#define BOEN_address                             0xFCB
#define BOEN_position                            0x4
#define BOEN_size                                0x1
#define BOEN_value_mask                          0x10
#define BOEN_clear_mask                          0xEF

#define SCIE                                     0x5
#define SCIE_address                             0xFCB
#define SCIE_position                            0x5
#define SCIE_size                                0x1
#define SCIE_value_mask                          0x20
#define SCIE_clear_mask                          0xDF

#define PCIE                                     0x6
#define PCIE_address                             0xFCB
#define PCIE_position                            0x6
#define PCIE_size                                0x1
#define PCIE_value_mask                          0x40
#define PCIE_clear_mask                          0xBF

#define ACKTIM                                   0x7
#define ACKTIM_address                           0xFCB
#define ACKTIM_position                          0x7
#define ACKTIM_size                              0x1
#define ACKTIM_value_mask                        0x80
#define ACKTIM_clear_mask                        0x7F


/*-----------------------------------------------------------------------------#
| T1GCON                                                                 0xFCC |
#------------------------------------------------------------------------------#
| TMR1GE | T1GPOL | T1GTM | T1GSPM | T1GGO_NOT_DONE | T1GVAL | T1GSS1 | T1GSS0 |
#------------------------------------------------------------------------------#
| 7      | 6      | 5     | 4      | 3              | 2      | 1      | 0      |
#-----------------------------------------------------------------------------*/

#define T1GCON                                   0x0
#define T1GCON_address                           0xFCC
#define T1GCON_position                          0x0
#define T1GCON_size                              0x8
#define T1GCON_value_mask                        0xFF
#define T1GCON_clear_mask                        0x0

#define T1GSS0                                   0x0
#define T1GSS0_address                           0xFCC
#define T1GSS0_position                          0x0
#define T1GSS0_size                              0x1
#define T1GSS0_value_mask                        0x1
#define T1GSS0_clear_mask                        0xFE

#define T1GSS                                    0x0
#define T1GSS_address                            0xFCC
#define T1GSS_position                           0x0
#define T1GSS_size                               0x2
#define T1GSS_value_mask                         0x3
#define T1GSS_clear_mask                         0xFC

#define T1GSS1                                   0x1
#define T1GSS1_address                           0xFCC
#define T1GSS1_position                          0x1
#define T1GSS1_size                              0x1
#define T1GSS1_value_mask                        0x2
#define T1GSS1_clear_mask                        0xFD

#define T1GVAL                                   0x2
#define T1GVAL_address                           0xFCC
#define T1GVAL_position                          0x2
#define T1GVAL_size                              0x1
#define T1GVAL_value_mask                        0x4
#define T1GVAL_clear_mask                        0xFB

#define T1GGO_nT1DONE                            0x3
#define T1GGO_nT1DONE_address                    0xFCC
#define T1GGO_nT1DONE_position                   0x3
#define T1GGO_nT1DONE_size                       0x1
#define T1GGO_nT1DONE_value_mask                 0x8
#define T1GGO_nT1DONE_clear_mask                 0xF7

#define T1GGO_NOT_DONE                           0x3
#define T1GGO_NOT_DONE_address                   0xFCC
#define T1GGO_NOT_DONE_position                  0x3
#define T1GGO_NOT_DONE_size                      0x1
#define T1GGO_NOT_DONE_value_mask                0x8
#define T1GGO_NOT_DONE_clear_mask                0xF7

#define T1GGO_nDONE                              0x3
#define T1GGO_nDONE_address                      0xFCC
#define T1GGO_nDONE_position                     0x3
#define T1GGO_nDONE_size                         0x1
#define T1GGO_nDONE_value_mask                   0x8
#define T1GGO_nDONE_clear_mask                   0xF7

#define T1DONE                                   0x3
#define T1DONE_address                           0xFCC
#define T1DONE_position                          0x3
#define T1DONE_size                              0x1
#define T1DONE_value_mask                        0x8
#define T1DONE_clear_mask                        0xF7

#define nT1DONE                                  0x3
#define nT1DONE_address                          0xFCC
#define nT1DONE_position                         0x3
#define nT1DONE_size                             0x1
#define nT1DONE_value_mask                       0x8
#define nT1DONE_clear_mask                       0xF7

#define T1GGO_NOT_T1DONE                         0x3
#define T1GGO_NOT_T1DONE_address                 0xFCC
#define T1GGO_NOT_T1DONE_position                0x3
#define T1GGO_NOT_T1DONE_size                    0x1
#define T1GGO_NOT_T1DONE_value_mask              0x8
#define T1GGO_NOT_T1DONE_clear_mask              0xF7

#define NOT_T1DONE                               0x3
#define NOT_T1DONE_address                       0xFCC
#define NOT_T1DONE_position                      0x3
#define NOT_T1DONE_size                          0x1
#define NOT_T1DONE_value_mask                    0x8
#define NOT_T1DONE_clear_mask                    0xF7

#define T1GGO                                    0x3
#define T1GGO_address                            0xFCC
#define T1GGO_position                           0x3
#define T1GGO_size                               0x1
#define T1GGO_value_mask                         0x8
#define T1GGO_clear_mask                         0xF7

#define T1GSPM                                   0x4
#define T1GSPM_address                           0xFCC
#define T1GSPM_position                          0x4
#define T1GSPM_size                              0x1
#define T1GSPM_value_mask                        0x10
#define T1GSPM_clear_mask                        0xEF

#define T1GTM                                    0x5
#define T1GTM_address                            0xFCC
#define T1GTM_position                           0x5
#define T1GTM_size                               0x1
#define T1GTM_value_mask                         0x20
#define T1GTM_clear_mask                         0xDF

#define T1GPOL                                   0x6
#define T1GPOL_address                           0xFCC
#define T1GPOL_position                          0x6
#define T1GPOL_size                              0x1
#define T1GPOL_value_mask                        0x40
#define T1GPOL_clear_mask                        0xBF

#define TMR1GE                                   0x7
#define TMR1GE_address                           0xFCC
#define TMR1GE_position                          0x7
#define TMR1GE_size                              0x1
#define TMR1GE_value_mask                        0x80
#define TMR1GE_clear_mask                        0x7F


/*-----------------------------------------------------------------------------------#
| T1CON                                                                        0xFCD |
#------------------------------------------------------------------------------------#
| TMR1CS1 | TMR1CS0 | T1CKPS1 | T1CKPS0 | T1OSCEN | NOT_T1SYNC | T1CON_RD16 | TMR1ON |
#------------------------------------------------------------------------------------#
| 7       | 6       | 5       | 4       | 3       | 2          | 1          | 0      |
#-----------------------------------------------------------------------------------*/

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

#define T1RD16                                   0x1
#define T1RD16_address                           0xFCD
#define T1RD16_position                          0x1
#define T1RD16_size                              0x1
#define T1RD16_value_mask                        0x2
#define T1RD16_clear_mask                        0xFD

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

#define T1SOSCEN                                 0x3
#define T1SOSCEN_address                         0xFCD
#define T1SOSCEN_position                        0x3
#define T1SOSCEN_size                            0x1
#define T1SOSCEN_value_mask                      0x8
#define T1SOSCEN_clear_mask                      0xF7

#define T1CON_SOSCEN                             0x3
#define T1CON_SOSCEN_address                     0xFCD
#define T1CON_SOSCEN_position                    0x3
#define T1CON_SOSCEN_size                        0x1
#define T1CON_SOSCEN_value_mask                  0x8
#define T1CON_SOSCEN_clear_mask                  0xF7

#define T1OSCEN                                  0x3
#define T1OSCEN_address                          0xFCD
#define T1OSCEN_position                         0x3
#define T1OSCEN_size                             0x1
#define T1OSCEN_value_mask                       0x8
#define T1OSCEN_clear_mask                       0xF7

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


/*---------------------------------------------------------------------#
| OSCCON2                                                        0xFD2 |
#----------------------------------------------------------------------#
| PLLRDY | SOSCRUN | INTSRC | PLLEN | SOSCGO | PRISD | HFIOFR | LFIOFS |
#----------------------------------------------------------------------#
| 7      | 6       | 5      | 4     | 3      | 2     | 1      | 0      |
#---------------------------------------------------------------------*/

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

#define HFIOFR                                   0x1
#define HFIOFR_address                           0xFD2
#define HFIOFR_position                          0x1
#define HFIOFR_size                              0x1
#define HFIOFR_value_mask                        0x2
#define HFIOFR_clear_mask                        0xFD

#define PRISD                                    0x2
#define PRISD_address                            0xFD2
#define PRISD_position                           0x2
#define PRISD_size                               0x1
#define PRISD_value_mask                         0x4
#define PRISD_clear_mask                         0xFB

#define SOSCGO                                   0x3
#define SOSCGO_address                           0xFD2
#define SOSCGO_position                          0x3
#define SOSCGO_size                              0x1
#define SOSCGO_value_mask                        0x8
#define SOSCGO_clear_mask                        0xF7

#define PLLEN                                    0x4
#define PLLEN_address                            0xFD2
#define PLLEN_position                           0x4
#define PLLEN_size                               0x1
#define PLLEN_value_mask                         0x10
#define PLLEN_clear_mask                         0xEF

#define INTSRC                                   0x5
#define INTSRC_address                           0xFD2
#define INTSRC_position                          0x5
#define INTSRC_size                              0x1
#define INTSRC_value_mask                        0x20
#define INTSRC_clear_mask                        0xDF

#define SOSCRUN                                  0x6
#define SOSCRUN_address                          0xFD2
#define SOSCRUN_position                         0x6
#define SOSCRUN_size                             0x1
#define SOSCRUN_value_mask                       0x40
#define SOSCRUN_clear_mask                       0xBF

#define PLLRDY                                   0x7
#define PLLRDY_address                           0xFD2
#define PLLRDY_position                          0x7
#define PLLRDY_size                              0x1
#define PLLRDY_value_mask                        0x80
#define PLLRDY_clear_mask                        0x7F


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


/*------------------------------------------------------------#
| INTCON2                                               0xFF1 |
#-------------------------------------------------------------#
| RBPU | INTEDG0 | INTEDG1 | INTEDG2 | - | TMR0IP | - | IOCIP |
#-------------------------------------------------------------#
| 7    | 6       | 5       | 4       | 3 | 2      | 1 | 0     |
#------------------------------------------------------------*/

#define INTCON2                                  0x0
#define INTCON2_address                          0xFF1
#define INTCON2_position                         0x0
#define INTCON2_size                             0x8
#define INTCON2_value_mask                       0xFF
#define INTCON2_clear_mask                       0x0

#define IOCIP                                    0x0
#define IOCIP_address                            0xFF1
#define IOCIP_position                           0x0
#define IOCIP_size                               0x1
#define IOCIP_value_mask                         0x1
#define IOCIP_clear_mask                         0xFE

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


/*------------------------------------------------------------------#
| INTCON                                                      0xFF2 |
#-------------------------------------------------------------------#
| GIE_GIEH | PEIE | T0IE | INT0IE | IOCIE | TMR0IF | INT0IF | IOCIF |
#-------------------------------------------------------------------#
| 7        | 6    | 5    | 4      | 3     | 2      | 1      | 0     |
#------------------------------------------------------------------*/

#define INTCON                                   0x0
#define INTCON_address                           0xFF2
#define INTCON_position                          0x0
#define INTCON_size                              0x8
#define INTCON_value_mask                        0xFF
#define INTCON_clear_mask                        0x0

#define IOCIF                                    0x0
#define IOCIF_address                            0xFF2
#define IOCIF_position                           0x0
#define IOCIF_size                               0x1
#define IOCIF_value_mask                         0x1
#define IOCIF_clear_mask                         0xFE

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

#define IOCIE                                    0x3
#define IOCIE_address                            0xFF2
#define IOCIE_position                           0x3
#define IOCIE_size                               0x1
#define IOCIE_value_mask                         0x8
#define IOCIE_clear_mask                         0xF7

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

#define GIEH                                     0x7
#define GIEH_address                             0xFF2
#define GIEH_position                            0x7
#define GIEH_size                                0x1
#define GIEH_value_mask                          0x80
#define GIEH_clear_mask                          0x7F

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

#endif // _PIC18F24K50_H_
