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

#ifndef _PIC18F67J60_H_
#define _PIC18F67J60_H_


/*-----------------------------------------#
| MISTAT                             0xE8A |
#------------------------------------------#
| - | - | - | - | - | NVALID | SCAN | BUSY |
#------------------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2      | 1    | 0    |
#-----------------------------------------*/

#define MISTAT                                   0x0
#define MISTAT_address                           0xE8A
#define MISTAT_position                          0x0
#define MISTAT_size                              0x8
#define MISTAT_value_mask                        0xFF
#define MISTAT_clear_mask                        0x0

#define BUSY                                     0x0
#define BUSY_address                             0xE8A
#define BUSY_position                            0x0
#define BUSY_size                                0x1
#define BUSY_value_mask                          0x1
#define BUSY_clear_mask                          0xFE

#define SCAN                                     0x1
#define SCAN_address                             0xE8A
#define SCAN_position                            0x1
#define SCAN_size                                0x1
#define SCAN_value_mask                          0x2
#define SCAN_clear_mask                          0xFD

#define NVALID                                   0x2
#define NVALID_address                           0xE8A
#define NVALID_position                          0x2
#define NVALID_size                              0x1
#define NVALID_value_mask                        0x4
#define NVALID_clear_mask                        0xFB


/*--------------------------------------------#
| EFLOCON                               0xE97 |
#---------------------------------------------#
| - | - | - | - | - | FULDPXS | FCEN1 | FCEN0 |
#---------------------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2       | 1     | 0     |
#--------------------------------------------*/

#define EFLOCON                                  0x0
#define EFLOCON_address                          0xE97
#define EFLOCON_position                         0x0
#define EFLOCON_size                             0x8
#define EFLOCON_value_mask                       0xFF
#define EFLOCON_clear_mask                       0x0

#define FCEN0                                    0x0
#define FCEN0_address                            0xE97
#define FCEN0_position                           0x0
#define FCEN0_size                               0x1
#define FCEN0_value_mask                         0x1
#define FCEN0_clear_mask                         0xFE

#define FCEN1                                    0x1
#define FCEN1_address                            0xE97
#define FCEN1_position                           0x1
#define FCEN1_size                               0x1
#define FCEN1_value_mask                         0x2
#define FCEN1_clear_mask                         0xFD

#define FULDPXS                                  0x2
#define FULDPXS_address                          0xE97
#define FULDPXS_position                         0x2
#define FULDPXS_size                             0x1
#define FULDPXS_value_mask                       0x4
#define FULDPXS_clear_mask                       0xFB


/*---------------------------------------------------#
| MACON1                                       0xEA0 |
#----------------------------------------------------#
| - | - | - | - | TXPAUS | RXPAUS | PASSALL | MARXEN |
#----------------------------------------------------#
| 7 | 6 | 5 | 4 | 3      | 2      | 1       | 0      |
#---------------------------------------------------*/

#define MACON1                                   0x0
#define MACON1_address                           0xEA0
#define MACON1_position                          0x0
#define MACON1_size                              0x8
#define MACON1_value_mask                        0xFF
#define MACON1_clear_mask                        0x0

#define MARXEN                                   0x0
#define MARXEN_address                           0xEA0
#define MARXEN_position                          0x0
#define MARXEN_size                              0x1
#define MARXEN_value_mask                        0x1
#define MARXEN_clear_mask                        0xFE

#define PASSALL                                  0x1
#define PASSALL_address                          0xEA0
#define PASSALL_position                         0x1
#define PASSALL_size                             0x1
#define PASSALL_value_mask                       0x2
#define PASSALL_clear_mask                       0xFD

#define RXPAUS                                   0x2
#define RXPAUS_address                           0xEA0
#define RXPAUS_position                          0x2
#define RXPAUS_size                              0x1
#define RXPAUS_value_mask                        0x4
#define RXPAUS_clear_mask                        0xFB

#define TXPAUS                                   0x3
#define TXPAUS_address                           0xEA0
#define TXPAUS_position                          0x3
#define TXPAUS_size                              0x1
#define TXPAUS_value_mask                        0x8
#define TXPAUS_clear_mask                        0xF7


/*---------------------------------------------------------------------------#
| MACON3                                                               0xEA2 |
#----------------------------------------------------------------------------#
| PADCFG2 | PADCFG1 | PADCFG0 | TXCRCEN | PHDREN | HFRMEN | FRMLNEN | FULDPX |
#----------------------------------------------------------------------------#
| 7       | 6       | 5       | 4       | 3      | 2      | 1       | 0      |
#---------------------------------------------------------------------------*/

#define MACON3                                   0x0
#define MACON3_address                           0xEA2
#define MACON3_position                          0x0
#define MACON3_size                              0x8
#define MACON3_value_mask                        0xFF
#define MACON3_clear_mask                        0x0

#define FULDPX                                   0x0
#define FULDPX_address                           0xEA2
#define FULDPX_position                          0x0
#define FULDPX_size                              0x1
#define FULDPX_value_mask                        0x1
#define FULDPX_clear_mask                        0xFE

#define FRMLNEN                                  0x1
#define FRMLNEN_address                          0xEA2
#define FRMLNEN_position                         0x1
#define FRMLNEN_size                             0x1
#define FRMLNEN_value_mask                       0x2
#define FRMLNEN_clear_mask                       0xFD

#define HFRMEN                                   0x2
#define HFRMEN_address                           0xEA2
#define HFRMEN_position                          0x2
#define HFRMEN_size                              0x1
#define HFRMEN_value_mask                        0x4
#define HFRMEN_clear_mask                        0xFB

#define PHDREN                                   0x3
#define PHDREN_address                           0xEA2
#define PHDREN_position                          0x3
#define PHDREN_size                              0x1
#define PHDREN_value_mask                        0x8
#define PHDREN_clear_mask                        0xF7

#define TXCRCEN                                  0x4
#define TXCRCEN_address                          0xEA2
#define TXCRCEN_position                         0x4
#define TXCRCEN_size                             0x1
#define TXCRCEN_value_mask                       0x10
#define TXCRCEN_clear_mask                       0xEF

#define PADCFG0                                  0x5
#define PADCFG0_address                          0xEA2
#define PADCFG0_position                         0x5
#define PADCFG0_size                             0x1
#define PADCFG0_value_mask                       0x20
#define PADCFG0_clear_mask                       0xDF

#define PADCFG                                   0x5
#define PADCFG_address                           0xEA2
#define PADCFG_position                          0x5
#define PADCFG_size                              0x3
#define PADCFG_value_mask                        0xE0
#define PADCFG_clear_mask                        0x1F

#define PADCFG1                                  0x6
#define PADCFG1_address                          0xEA2
#define PADCFG1_position                         0x6
#define PADCFG1_size                             0x1
#define PADCFG1_value_mask                       0x40
#define PADCFG1_clear_mask                       0xBF

#define PADCFG2                                  0x7
#define PADCFG2_address                          0xEA2
#define PADCFG2_position                         0x7
#define PADCFG2_size                             0x1
#define PADCFG2_value_mask                       0x80
#define PADCFG2_clear_mask                       0x7F


/*----------------------------------#
| MACON4                      0xEA3 |
#-----------------------------------#
| - | DEFER | - | - | - | - | - | - |
#-----------------------------------#
| 7 | 6     | 5 | 4 | 3 | 2 | 1 | 0 |
#----------------------------------*/

#define MACON4                                   0x0
#define MACON4_address                           0xEA3
#define MACON4_position                          0x0
#define MACON4_size                              0x8
#define MACON4_value_mask                        0xFF
#define MACON4_clear_mask                        0x0

#define DEFER                                    0x6
#define DEFER_address                            0xEA3
#define DEFER_position                           0x6
#define DEFER_size                               0x1
#define DEFER_value_mask                         0x40
#define DEFER_clear_mask                         0xBF


/*-----------------------------------------------------------------#
| MABBIPG                                                    0xEA4 |
#------------------------------------------------------------------#
| - | BBIPG6 | BBIPG5 | BBIPG4 | BBIPG3 | BBIPG2 | BBIPG1 | BBIPG0 |
#------------------------------------------------------------------#
| 7 | 6      | 5      | 4      | 3      | 2      | 1      | 0      |
#-----------------------------------------------------------------*/

#define MABBIPG                                  0x0
#define MABBIPG_address                          0xEA4
#define MABBIPG_position                         0x0
#define MABBIPG_size                             0x8
#define MABBIPG_value_mask                       0xFF
#define MABBIPG_clear_mask                       0x0

#define BBIPG0                                   0x0
#define BBIPG0_address                           0xEA4
#define BBIPG0_position                          0x0
#define BBIPG0_size                              0x1
#define BBIPG0_value_mask                        0x1
#define BBIPG0_clear_mask                        0xFE

#define BBIPG1                                   0x1
#define BBIPG1_address                           0xEA4
#define BBIPG1_position                          0x1
#define BBIPG1_size                              0x1
#define BBIPG1_value_mask                        0x2
#define BBIPG1_clear_mask                        0xFD

#define BBIPG2                                   0x2
#define BBIPG2_address                           0xEA4
#define BBIPG2_position                          0x2
#define BBIPG2_size                              0x1
#define BBIPG2_value_mask                        0x4
#define BBIPG2_clear_mask                        0xFB

#define BBIPG3                                   0x3
#define BBIPG3_address                           0xEA4
#define BBIPG3_position                          0x3
#define BBIPG3_size                              0x1
#define BBIPG3_value_mask                        0x8
#define BBIPG3_clear_mask                        0xF7

#define BBIPG4                                   0x4
#define BBIPG4_address                           0xEA4
#define BBIPG4_position                          0x4
#define BBIPG4_size                              0x1
#define BBIPG4_value_mask                        0x10
#define BBIPG4_clear_mask                        0xEF

#define BBIPG5                                   0x5
#define BBIPG5_address                           0xEA4
#define BBIPG5_position                          0x5
#define BBIPG5_size                              0x1
#define BBIPG5_value_mask                        0x20
#define BBIPG5_clear_mask                        0xDF

#define BBIPG6                                   0x6
#define BBIPG6_address                           0xEA4
#define BBIPG6_position                          0x6
#define BBIPG6_size                              0x1
#define BBIPG6_value_mask                        0x40
#define BBIPG6_clear_mask                        0xBF


/*----------------------------------------#
| MICMD                             0xEB2 |
#-----------------------------------------#
| - | - | - | - | - | - | MIISCAN | MIIRD |
#-----------------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1       | 0     |
#----------------------------------------*/

#define MICMD                                    0x0
#define MICMD_address                            0xEB2
#define MICMD_position                           0x0
#define MICMD_size                               0x8
#define MICMD_value_mask                         0xFF
#define MICMD_clear_mask                         0x0

#define MIIRD                                    0x0
#define MIIRD_address                            0xEB2
#define MIIRD_position                           0x0
#define MIIRD_size                               0x1
#define MIIRD_value_mask                         0x1
#define MIIRD_clear_mask                         0xFE

#define MIISCAN                                  0x1
#define MIISCAN_address                          0xEB2
#define MIISCAN_position                         0x1
#define MIISCAN_size                             0x1
#define MIISCAN_value_mask                       0x2
#define MIISCAN_clear_mask                       0xFD


/*--------------------------------------------------------#
| ERXFCON                                           0xED8 |
#---------------------------------------------------------#
| UCEN | ANDOR | CRCEN | PMEN | MPEN | HTEN | MCEN | BCEN |
#---------------------------------------------------------#
| 7    | 6     | 5     | 4    | 3    | 2    | 1    | 0    |
#--------------------------------------------------------*/

#define ERXFCON                                  0x0
#define ERXFCON_address                          0xED8
#define ERXFCON_position                         0x0
#define ERXFCON_size                             0x8
#define ERXFCON_value_mask                       0xFF
#define ERXFCON_clear_mask                       0x0

#define BCEN                                     0x0
#define BCEN_address                             0xED8
#define BCEN_position                            0x0
#define BCEN_size                                0x1
#define BCEN_value_mask                          0x1
#define BCEN_clear_mask                          0xFE

#define MCEN                                     0x1
#define MCEN_address                             0xED8
#define MCEN_position                            0x1
#define MCEN_size                                0x1
#define MCEN_value_mask                          0x2
#define MCEN_clear_mask                          0xFD

#define HTEN                                     0x2
#define HTEN_address                             0xED8
#define HTEN_position                            0x2
#define HTEN_size                                0x1
#define HTEN_value_mask                          0x4
#define HTEN_clear_mask                          0xFB

#define MPEN                                     0x3
#define MPEN_address                             0xED8
#define MPEN_position                            0x3
#define MPEN_size                                0x1
#define MPEN_value_mask                          0x8
#define MPEN_clear_mask                          0xF7

#define PMEN                                     0x4
#define PMEN_address                             0xED8
#define PMEN_position                            0x4
#define PMEN_size                                0x1
#define PMEN_value_mask                          0x10
#define PMEN_clear_mask                          0xEF

#define CRCEN                                    0x5
#define CRCEN_address                            0xED8
#define CRCEN_position                           0x5
#define CRCEN_size                               0x1
#define CRCEN_value_mask                         0x20
#define CRCEN_clear_mask                         0xDF

#define ANDOR                                    0x6
#define ANDOR_address                            0xED8
#define ANDOR_position                           0x6
#define ANDOR_size                               0x1
#define ANDOR_value_mask                         0x40
#define ANDOR_clear_mask                         0xBF

#define UCEN                                     0x7
#define UCEN_address                             0xED8
#define UCEN_position                            0x7
#define UCEN_size                                0x1
#define UCEN_value_mask                          0x80
#define UCEN_clear_mask                          0x7F


/*------------------------------------------------------------#
| EIE                                                   0xEFB |
#-------------------------------------------------------------#
| - | PKTIE | DMAIE | LINKIE | EIE_TXIE | - | TXERIE | RXERIE |
#-------------------------------------------------------------#
| 7 | 6     | 5     | 4      | 3        | 2 | 1      | 0      |
#------------------------------------------------------------*/

#define EIE                                      0x0
#define EIE_address                              0xEFB
#define EIE_position                             0x0
#define EIE_size                                 0x8
#define EIE_value_mask                           0xFF
#define EIE_clear_mask                           0x0

#define RXERIE                                   0x0
#define RXERIE_address                           0xEFB
#define RXERIE_position                          0x0
#define RXERIE_size                              0x1
#define RXERIE_value_mask                        0x1
#define RXERIE_clear_mask                        0xFE

#define TXERIE                                   0x1
#define TXERIE_address                           0xEFB
#define TXERIE_position                          0x1
#define TXERIE_size                              0x1
#define TXERIE_value_mask                        0x2
#define TXERIE_clear_mask                        0xFD

#define EIE_TXIE                                 0x3
#define EIE_TXIE_address                         0xEFB
#define EIE_TXIE_position                        0x3
#define EIE_TXIE_size                            0x1
#define EIE_TXIE_value_mask                      0x8
#define EIE_TXIE_clear_mask                      0xF7

#define ETXIE                                    0x3
#define ETXIE_address                            0xEFB
#define ETXIE_position                           0x3
#define ETXIE_size                               0x1
#define ETXIE_value_mask                         0x8
#define ETXIE_clear_mask                         0xF7

#define LINKIE                                   0x4
#define LINKIE_address                           0xEFB
#define LINKIE_position                          0x4
#define LINKIE_size                              0x1
#define LINKIE_value_mask                        0x10
#define LINKIE_clear_mask                        0xEF

#define DMAIE                                    0x5
#define DMAIE_address                            0xEFB
#define DMAIE_position                           0x5
#define DMAIE_size                               0x1
#define DMAIE_value_mask                         0x20
#define DMAIE_clear_mask                         0xDF

#define PKTIE                                    0x6
#define PKTIE_address                            0xEFB
#define PKTIE_position                           0x6
#define PKTIE_size                               0x1
#define PKTIE_value_mask                         0x40
#define PKTIE_clear_mask                         0xBF


/*-------------------------------------------------#
| ESTAT                                      0xEFD |
#--------------------------------------------------#
| - | BUFER | - | - | - | RXBUSY | TXABRT | PHYRDY |
#--------------------------------------------------#
| 7 | 6     | 5 | 4 | 3 | 2      | 1      | 0      |
#-------------------------------------------------*/

#define ESTAT                                    0x0
#define ESTAT_address                            0xEFD
#define ESTAT_position                           0x0
#define ESTAT_size                               0x8
#define ESTAT_value_mask                         0xFF
#define ESTAT_clear_mask                         0x0

#define PHYRDY                                   0x0
#define PHYRDY_address                           0xEFD
#define PHYRDY_position                          0x0
#define PHYRDY_size                              0x1
#define PHYRDY_value_mask                        0x1
#define PHYRDY_clear_mask                        0xFE

#define TXABRT                                   0x1
#define TXABRT_address                           0xEFD
#define TXABRT_position                          0x1
#define TXABRT_size                              0x1
#define TXABRT_value_mask                        0x2
#define TXABRT_clear_mask                        0xFD

#define RXBUSY                                   0x2
#define RXBUSY_address                           0xEFD
#define RXBUSY_position                          0x2
#define RXBUSY_size                              0x1
#define RXBUSY_value_mask                        0x4
#define RXBUSY_clear_mask                        0xFB

#define BUFER                                    0x6
#define BUFER_address                            0xEFD
#define BUFER_position                           0x6
#define BUFER_size                               0x1
#define BUFER_value_mask                         0x40
#define BUFER_clear_mask                         0xBF


/*---------------------------------------------#
| ECON2                                  0xEFE |
#----------------------------------------------#
| AUTOINC | PKTDEC | ETHEN | - | - | - | - | - |
#----------------------------------------------#
| 7       | 6      | 5     | 4 | 3 | 2 | 1 | 0 |
#---------------------------------------------*/

#define ECON2                                    0x0
#define ECON2_address                            0xEFE
#define ECON2_position                           0x0
#define ECON2_size                               0x8
#define ECON2_value_mask                         0xFF
#define ECON2_clear_mask                         0x0

#define ETHEN                                    0x5
#define ETHEN_address                            0xEFE
#define ETHEN_position                           0x5
#define ETHEN_size                               0x1
#define ETHEN_value_mask                         0x20
#define ETHEN_clear_mask                         0xDF

#define PKTDEC                                   0x6
#define PKTDEC_address                           0xEFE
#define PKTDEC_position                          0x6
#define PKTDEC_size                              0x1
#define PKTDEC_value_mask                        0x40
#define PKTDEC_clear_mask                        0xBF

#define AUTOINC                                  0x7
#define AUTOINC_address                          0xEFE
#define AUTOINC_position                         0x7
#define AUTOINC_size                             0x1
#define AUTOINC_value_mask                       0x80
#define AUTOINC_clear_mask                       0x7F


/*------------------------------------------------------------#
| EIR                                                   0xF60 |
#-------------------------------------------------------------#
| - | PKTIF | DMAIF | LINKIF | EIR_TXIF | - | TXERIF | RXERIF |
#-------------------------------------------------------------#
| 7 | 6     | 5     | 4      | 3        | 2 | 1      | 0      |
#------------------------------------------------------------*/

#define EIR                                      0x0
#define EIR_address                              0xF60
#define EIR_position                             0x0
#define EIR_size                                 0x8
#define EIR_value_mask                           0xFF
#define EIR_clear_mask                           0x0

#define RXERIF                                   0x0
#define RXERIF_address                           0xF60
#define RXERIF_position                          0x0
#define RXERIF_size                              0x1
#define RXERIF_value_mask                        0x1
#define RXERIF_clear_mask                        0xFE

#define TXERIF                                   0x1
#define TXERIF_address                           0xF60
#define TXERIF_position                          0x1
#define TXERIF_size                              0x1
#define TXERIF_value_mask                        0x2
#define TXERIF_clear_mask                        0xFD

#define EIR_TXIF                                 0x3
#define EIR_TXIF_address                         0xF60
#define EIR_TXIF_position                        0x3
#define EIR_TXIF_size                            0x1
#define EIR_TXIF_value_mask                      0x8
#define EIR_TXIF_clear_mask                      0xF7

#define ETXIF                                    0x3
#define ETXIF_address                            0xF60
#define ETXIF_position                           0x3
#define ETXIF_size                               0x1
#define ETXIF_value_mask                         0x8
#define ETXIF_clear_mask                         0xF7

#define LINKIF                                   0x4
#define LINKIF_address                           0xF60
#define LINKIF_position                          0x4
#define LINKIF_size                              0x1
#define LINKIF_value_mask                        0x10
#define LINKIF_clear_mask                        0xEF

#define DMAIF                                    0x5
#define DMAIF_address                            0xF60
#define DMAIF_position                           0x5
#define DMAIF_size                               0x1
#define DMAIF_value_mask                         0x20
#define DMAIF_clear_mask                         0xDF

#define PKTIF                                    0x6
#define PKTIF_address                            0xF60
#define PKTIF_position                           0x6
#define PKTIF_size                               0x1
#define PKTIF_value_mask                         0x40
#define PKTIF_clear_mask                         0xBF


/*----------------------------------------------------------------------#
| EDATA                                                           0xF61 |
#-----------------------------------------------------------------------#
| EDATA7 | EDATA6 | EDATA5 | EDATA4 | EDATA3 | EDATA2 | EDATA1 | EDATA0 |
#-----------------------------------------------------------------------#
| 7      | 6      | 5      | 4      | 3      | 2      | 1      | 0      |
#----------------------------------------------------------------------*/

#define EDATA                                    0x0
#define EDATA_address                            0xF61
#define EDATA_position                           0x0
#define EDATA_size                               0x8
#define EDATA_value_mask                         0xFF
#define EDATA_clear_mask                         0x0

#define EDATA0                                   0x0
#define EDATA0_address                           0xF61
#define EDATA0_position                          0x0
#define EDATA0_size                              0x1
#define EDATA0_value_mask                        0x1
#define EDATA0_clear_mask                        0xFE

#define EDATA1                                   0x1
#define EDATA1_address                           0xF61
#define EDATA1_position                          0x1
#define EDATA1_size                              0x1
#define EDATA1_value_mask                        0x2
#define EDATA1_clear_mask                        0xFD

#define EDATA2                                   0x2
#define EDATA2_address                           0xF61
#define EDATA2_position                          0x2
#define EDATA2_size                              0x1
#define EDATA2_value_mask                        0x4
#define EDATA2_clear_mask                        0xFB

#define EDATA3                                   0x3
#define EDATA3_address                           0xF61
#define EDATA3_position                          0x3
#define EDATA3_size                              0x1
#define EDATA3_value_mask                        0x8
#define EDATA3_clear_mask                        0xF7

#define EDATA4                                   0x4
#define EDATA4_address                           0xF61
#define EDATA4_position                          0x4
#define EDATA4_size                              0x1
#define EDATA4_value_mask                        0x10
#define EDATA4_clear_mask                        0xEF

#define EDATA5                                   0x5
#define EDATA5_address                           0xF61
#define EDATA5_position                          0x5
#define EDATA5_size                              0x1
#define EDATA5_value_mask                        0x20
#define EDATA5_clear_mask                        0xDF

#define EDATA6                                   0x6
#define EDATA6_address                           0xF61
#define EDATA6_position                          0x6
#define EDATA6_size                              0x1
#define EDATA6_value_mask                        0x40
#define EDATA6_clear_mask                        0xBF

#define EDATA7                                   0x7
#define EDATA7_address                           0xF61
#define EDATA7_position                          0x7
#define EDATA7_size                              0x1
#define EDATA7_value_mask                        0x80
#define EDATA7_clear_mask                        0x7F


/*-------------------------------------------------------------------------------------------------------------------------------#
| ECCP2DEL                                                                                                                 0xF67 |
#--------------------------------------------------------------------------------------------------------------------------------#
| ECCP2DEL_PRSEN | ECCP2DEL_PDC6 | ECCP2DEL_PDC5 | ECCP2DEL_PDC4 | ECCP2DEL_PDC3 | ECCP2DEL_PDC2 | ECCP2DEL_PDC1 | ECCP2DEL_PDC0 |
#--------------------------------------------------------------------------------------------------------------------------------#
| 7              | 6             | 5             | 4             | 3             | 2             | 1             | 0             |
#-------------------------------------------------------------------------------------------------------------------------------*/

#define ECCP2DEL                                 0x0
#define ECCP2DEL_address                         0xF67
#define ECCP2DEL_position                        0x0
#define ECCP2DEL_size                            0x8
#define ECCP2DEL_value_mask                      0xFF
#define ECCP2DEL_clear_mask                      0x0

#define P2DC0                                    0x0
#define P2DC0_address                            0xF67
#define P2DC0_position                           0x0
#define P2DC0_size                               0x1
#define P2DC0_value_mask                         0x1
#define P2DC0_clear_mask                         0xFE

#define ECCP2DEL_PDC0                            0x0
#define ECCP2DEL_PDC0_address                    0xF67
#define ECCP2DEL_PDC0_position                   0x0
#define ECCP2DEL_PDC0_size                       0x1
#define ECCP2DEL_PDC0_value_mask                 0x1
#define ECCP2DEL_PDC0_clear_mask                 0xFE

#define ECCP2DEL_PDC                             0x0
#define ECCP2DEL_PDC_address                     0xF67
#define ECCP2DEL_PDC_position                    0x0
#define ECCP2DEL_PDC_size                        0x7
#define ECCP2DEL_PDC_value_mask                  0x7F
#define ECCP2DEL_PDC_clear_mask                  0x80

#define P2DC1                                    0x1
#define P2DC1_address                            0xF67
#define P2DC1_position                           0x1
#define P2DC1_size                               0x1
#define P2DC1_value_mask                         0x2
#define P2DC1_clear_mask                         0xFD

#define ECCP2DEL_PDC1                            0x1
#define ECCP2DEL_PDC1_address                    0xF67
#define ECCP2DEL_PDC1_position                   0x1
#define ECCP2DEL_PDC1_size                       0x1
#define ECCP2DEL_PDC1_value_mask                 0x2
#define ECCP2DEL_PDC1_clear_mask                 0xFD

#define P2DC2                                    0x2
#define P2DC2_address                            0xF67
#define P2DC2_position                           0x2
#define P2DC2_size                               0x1
#define P2DC2_value_mask                         0x4
#define P2DC2_clear_mask                         0xFB

#define ECCP2DEL_PDC2                            0x2
#define ECCP2DEL_PDC2_address                    0xF67
#define ECCP2DEL_PDC2_position                   0x2
#define ECCP2DEL_PDC2_size                       0x1
#define ECCP2DEL_PDC2_value_mask                 0x4
#define ECCP2DEL_PDC2_clear_mask                 0xFB

#define P2DC3                                    0x3
#define P2DC3_address                            0xF67
#define P2DC3_position                           0x3
#define P2DC3_size                               0x1
#define P2DC3_value_mask                         0x8
#define P2DC3_clear_mask                         0xF7

#define ECCP2DEL_PDC3                            0x3
#define ECCP2DEL_PDC3_address                    0xF67
#define ECCP2DEL_PDC3_position                   0x3
#define ECCP2DEL_PDC3_size                       0x1
#define ECCP2DEL_PDC3_value_mask                 0x8
#define ECCP2DEL_PDC3_clear_mask                 0xF7

#define P2DC4                                    0x4
#define P2DC4_address                            0xF67
#define P2DC4_position                           0x4
#define P2DC4_size                               0x1
#define P2DC4_value_mask                         0x10
#define P2DC4_clear_mask                         0xEF

#define ECCP2DEL_PDC4                            0x4
#define ECCP2DEL_PDC4_address                    0xF67
#define ECCP2DEL_PDC4_position                   0x4
#define ECCP2DEL_PDC4_size                       0x1
#define ECCP2DEL_PDC4_value_mask                 0x10
#define ECCP2DEL_PDC4_clear_mask                 0xEF

#define P2DC5                                    0x5
#define P2DC5_address                            0xF67
#define P2DC5_position                           0x5
#define P2DC5_size                               0x1
#define P2DC5_value_mask                         0x20
#define P2DC5_clear_mask                         0xDF

#define ECCP2DEL_PDC5                            0x5
#define ECCP2DEL_PDC5_address                    0xF67
#define ECCP2DEL_PDC5_position                   0x5
#define ECCP2DEL_PDC5_size                       0x1
#define ECCP2DEL_PDC5_value_mask                 0x20
#define ECCP2DEL_PDC5_clear_mask                 0xDF

#define P2DC6                                    0x6
#define P2DC6_address                            0xF67
#define P2DC6_position                           0x6
#define P2DC6_size                               0x1
#define P2DC6_value_mask                         0x40
#define P2DC6_clear_mask                         0xBF

#define ECCP2DEL_PDC6                            0x6
#define ECCP2DEL_PDC6_address                    0xF67
#define ECCP2DEL_PDC6_position                   0x6
#define ECCP2DEL_PDC6_size                       0x1
#define ECCP2DEL_PDC6_value_mask                 0x40
#define ECCP2DEL_PDC6_clear_mask                 0xBF

#define ECCP2DEL_PRSEN                           0x7
#define ECCP2DEL_PRSEN_address                   0xF67
#define ECCP2DEL_PRSEN_position                  0x7
#define ECCP2DEL_PRSEN_size                      0x1
#define ECCP2DEL_PRSEN_value_mask                0x80
#define ECCP2DEL_PRSEN_clear_mask                0x7F

#define P2RSEN                                   0x7
#define P2RSEN_address                           0xF67
#define P2RSEN_position                          0x7
#define P2RSEN_size                              0x1
#define P2RSEN_value_mask                        0x80
#define P2RSEN_clear_mask                        0x7F


/*------------------------------------------------------------------------------------------------#
| ECCP2AS                                                                                   0xF68 |
#-------------------------------------------------------------------------------------------------#
| ECCP2AS_ECCPASE | ECCP2AS2 | ECCP2AS1 | ECCP2AS0 | PSS2AC1 | ECCP2AS_PSSAC0 | PSS2BD1 | PSS2BD0 |
#-------------------------------------------------------------------------------------------------#
| 7               | 6        | 5        | 4        | 3       | 2              | 1       | 0       |
#------------------------------------------------------------------------------------------------*/

#define ECCP2AS                                  0x0
#define ECCP2AS_address                          0xF68
#define ECCP2AS_position                         0x0
#define ECCP2AS_size                             0x8
#define ECCP2AS_value_mask                       0xFF
#define ECCP2AS_clear_mask                       0x0

#define ECCP2AS_PSSBD                            0x0
#define ECCP2AS_PSSBD_address                    0xF68
#define ECCP2AS_PSSBD_position                   0x0
#define ECCP2AS_PSSBD_size                       0x2
#define ECCP2AS_PSSBD_value_mask                 0x3
#define ECCP2AS_PSSBD_clear_mask                 0xFC

#define ECCP2AS_PSSBD0                           0x0
#define ECCP2AS_PSSBD0_address                   0xF68
#define ECCP2AS_PSSBD0_position                  0x0
#define ECCP2AS_PSSBD0_size                      0x1
#define ECCP2AS_PSSBD0_value_mask                0x1
#define ECCP2AS_PSSBD0_clear_mask                0xFE

#define PSS2BD0                                  0x0
#define PSS2BD0_address                          0xF68
#define PSS2BD0_position                         0x0
#define PSS2BD0_size                             0x1
#define PSS2BD0_value_mask                       0x1
#define PSS2BD0_clear_mask                       0xFE

#define ECCP2AS_PSSBD1                           0x1
#define ECCP2AS_PSSBD1_address                   0xF68
#define ECCP2AS_PSSBD1_position                  0x1
#define ECCP2AS_PSSBD1_size                      0x1
#define ECCP2AS_PSSBD1_value_mask                0x2
#define ECCP2AS_PSSBD1_clear_mask                0xFD

#define PSS2BD1                                  0x1
#define PSS2BD1_address                          0xF68
#define PSS2BD1_position                         0x1
#define PSS2BD1_size                             0x1
#define PSS2BD1_value_mask                       0x2
#define PSS2BD1_clear_mask                       0xFD

#define PSS2AC0                                  0x2
#define PSS2AC0_address                          0xF68
#define PSS2AC0_position                         0x2
#define PSS2AC0_size                             0x1
#define PSS2AC0_value_mask                       0x4
#define PSS2AC0_clear_mask                       0xFB

#define ECCP2AS_PSSAC0                           0x2
#define ECCP2AS_PSSAC0_address                   0xF68
#define ECCP2AS_PSSAC0_position                  0x2
#define ECCP2AS_PSSAC0_size                      0x1
#define ECCP2AS_PSSAC0_value_mask                0x4
#define ECCP2AS_PSSAC0_clear_mask                0xFB

#define ECCP2AS_PSSAC                            0x2
#define ECCP2AS_PSSAC_address                    0xF68
#define ECCP2AS_PSSAC_position                   0x2
#define ECCP2AS_PSSAC_size                       0x2
#define ECCP2AS_PSSAC_value_mask                 0xC
#define ECCP2AS_PSSAC_clear_mask                 0xF3

#define ECCP2AS_PSSAC1                           0x3
#define ECCP2AS_PSSAC1_address                   0xF68
#define ECCP2AS_PSSAC1_position                  0x3
#define ECCP2AS_PSSAC1_size                      0x1
#define ECCP2AS_PSSAC1_value_mask                0x8
#define ECCP2AS_PSSAC1_clear_mask                0xF7

#define PSS2AC1                                  0x3
#define PSS2AC1_address                          0xF68
#define PSS2AC1_position                         0x3
#define PSS2AC1_size                             0x1
#define PSS2AC1_value_mask                       0x8
#define PSS2AC1_clear_mask                       0xF7

#define ECCP2AS_ECCPAS                           0x4
#define ECCP2AS_ECCPAS_address                   0xF68
#define ECCP2AS_ECCPAS_position                  0x4
#define ECCP2AS_ECCPAS_size                      0x3
#define ECCP2AS_ECCPAS_value_mask                0x70
#define ECCP2AS_ECCPAS_clear_mask                0x8F

#define ECCP2AS0                                 0x4
#define ECCP2AS0_address                         0xF68
#define ECCP2AS0_position                        0x4
#define ECCP2AS0_size                            0x1
#define ECCP2AS0_value_mask                      0x10
#define ECCP2AS0_clear_mask                      0xEF

#define ECCP2AS_ECCPAS0                          0x4
#define ECCP2AS_ECCPAS0_address                  0xF68
#define ECCP2AS_ECCPAS0_position                 0x4
#define ECCP2AS_ECCPAS0_size                     0x1
#define ECCP2AS_ECCPAS0_value_mask               0x10
#define ECCP2AS_ECCPAS0_clear_mask               0xEF

#define ECCP2AS1                                 0x5
#define ECCP2AS1_address                         0xF68
#define ECCP2AS1_position                        0x5
#define ECCP2AS1_size                            0x1
#define ECCP2AS1_value_mask                      0x20
#define ECCP2AS1_clear_mask                      0xDF

#define ECCP2AS_ECCPAS1                          0x5
#define ECCP2AS_ECCPAS1_address                  0xF68
#define ECCP2AS_ECCPAS1_position                 0x5
#define ECCP2AS_ECCPAS1_size                     0x1
#define ECCP2AS_ECCPAS1_value_mask               0x20
#define ECCP2AS_ECCPAS1_clear_mask               0xDF

#define ECCP2AS2                                 0x6
#define ECCP2AS2_address                         0xF68
#define ECCP2AS2_position                        0x6
#define ECCP2AS2_size                            0x1
#define ECCP2AS2_value_mask                      0x40
#define ECCP2AS2_clear_mask                      0xBF

#define ECCP2AS_ECCPAS2                          0x6
#define ECCP2AS_ECCPAS2_address                  0xF68
#define ECCP2AS_ECCPAS2_position                 0x6
#define ECCP2AS_ECCPAS2_size                     0x1
#define ECCP2AS_ECCPAS2_value_mask               0x40
#define ECCP2AS_ECCPAS2_clear_mask               0xBF

#define ECCP2AS_ECCPASE                          0x7
#define ECCP2AS_ECCPASE_address                  0xF68
#define ECCP2AS_ECCPASE_position                 0x7
#define ECCP2AS_ECCPASE_size                     0x1
#define ECCP2AS_ECCPASE_value_mask               0x80
#define ECCP2AS_ECCPASE_clear_mask               0x7F

#define ECCP2ASE                                 0x7
#define ECCP2ASE_address                         0xF68
#define ECCP2ASE_position                        0x7
#define ECCP2ASE_size                            0x1
#define ECCP2ASE_value_mask                      0x80
#define ECCP2ASE_clear_mask                      0x7F


/*-----------------------------------------------------------------------------------------------------------------------#
| ECCP3DEL                                                                                                         0xF69 |
#------------------------------------------------------------------------------------------------------------------------#
| P3RSEN | ECCP3DEL_PDC6 | ECCP3DEL_PDC5 | ECCP3DEL_PDC4 | ECCP3DEL_PDC3 | ECCP3DEL_PDC2 | ECCP3DEL_PDC1 | ECCP3DEL_PDC0 |
#------------------------------------------------------------------------------------------------------------------------#
| 7      | 6             | 5             | 4             | 3             | 2             | 1             | 0             |
#-----------------------------------------------------------------------------------------------------------------------*/

#define ECCP3DEL                                 0x0
#define ECCP3DEL_address                         0xF69
#define ECCP3DEL_position                        0x0
#define ECCP3DEL_size                            0x8
#define ECCP3DEL_value_mask                      0xFF
#define ECCP3DEL_clear_mask                      0x0

#define ECCP3DEL_PDC0                            0x0
#define ECCP3DEL_PDC0_address                    0xF69
#define ECCP3DEL_PDC0_position                   0x0
#define ECCP3DEL_PDC0_size                       0x1
#define ECCP3DEL_PDC0_value_mask                 0x1
#define ECCP3DEL_PDC0_clear_mask                 0xFE

#define P3DC0                                    0x0
#define P3DC0_address                            0xF69
#define P3DC0_position                           0x0
#define P3DC0_size                               0x1
#define P3DC0_value_mask                         0x1
#define P3DC0_clear_mask                         0xFE

#define ECCP3DEL_PDC                             0x0
#define ECCP3DEL_PDC_address                     0xF69
#define ECCP3DEL_PDC_position                    0x0
#define ECCP3DEL_PDC_size                        0x7
#define ECCP3DEL_PDC_value_mask                  0x7F
#define ECCP3DEL_PDC_clear_mask                  0x80

#define ECCP3DEL_PDC1                            0x1
#define ECCP3DEL_PDC1_address                    0xF69
#define ECCP3DEL_PDC1_position                   0x1
#define ECCP3DEL_PDC1_size                       0x1
#define ECCP3DEL_PDC1_value_mask                 0x2
#define ECCP3DEL_PDC1_clear_mask                 0xFD

#define P3DC1                                    0x1
#define P3DC1_address                            0xF69
#define P3DC1_position                           0x1
#define P3DC1_size                               0x1
#define P3DC1_value_mask                         0x2
#define P3DC1_clear_mask                         0xFD

#define ECCP3DEL_PDC2                            0x2
#define ECCP3DEL_PDC2_address                    0xF69
#define ECCP3DEL_PDC2_position                   0x2
#define ECCP3DEL_PDC2_size                       0x1
#define ECCP3DEL_PDC2_value_mask                 0x4
#define ECCP3DEL_PDC2_clear_mask                 0xFB

#define P3DC2                                    0x2
#define P3DC2_address                            0xF69
#define P3DC2_position                           0x2
#define P3DC2_size                               0x1
#define P3DC2_value_mask                         0x4
#define P3DC2_clear_mask                         0xFB

#define ECCP3DEL_PDC3                            0x3
#define ECCP3DEL_PDC3_address                    0xF69
#define ECCP3DEL_PDC3_position                   0x3
#define ECCP3DEL_PDC3_size                       0x1
#define ECCP3DEL_PDC3_value_mask                 0x8
#define ECCP3DEL_PDC3_clear_mask                 0xF7

#define P3DC3                                    0x3
#define P3DC3_address                            0xF69
#define P3DC3_position                           0x3
#define P3DC3_size                               0x1
#define P3DC3_value_mask                         0x8
#define P3DC3_clear_mask                         0xF7

#define ECCP3DEL_PDC4                            0x4
#define ECCP3DEL_PDC4_address                    0xF69
#define ECCP3DEL_PDC4_position                   0x4
#define ECCP3DEL_PDC4_size                       0x1
#define ECCP3DEL_PDC4_value_mask                 0x10
#define ECCP3DEL_PDC4_clear_mask                 0xEF

#define P3DC4                                    0x4
#define P3DC4_address                            0xF69
#define P3DC4_position                           0x4
#define P3DC4_size                               0x1
#define P3DC4_value_mask                         0x10
#define P3DC4_clear_mask                         0xEF

#define ECCP3DEL_PDC5                            0x5
#define ECCP3DEL_PDC5_address                    0xF69
#define ECCP3DEL_PDC5_position                   0x5
#define ECCP3DEL_PDC5_size                       0x1
#define ECCP3DEL_PDC5_value_mask                 0x20
#define ECCP3DEL_PDC5_clear_mask                 0xDF

#define P3DC5                                    0x5
#define P3DC5_address                            0xF69
#define P3DC5_position                           0x5
#define P3DC5_size                               0x1
#define P3DC5_value_mask                         0x20
#define P3DC5_clear_mask                         0xDF

#define ECCP3DEL_PDC6                            0x6
#define ECCP3DEL_PDC6_address                    0xF69
#define ECCP3DEL_PDC6_position                   0x6
#define ECCP3DEL_PDC6_size                       0x1
#define ECCP3DEL_PDC6_value_mask                 0x40
#define ECCP3DEL_PDC6_clear_mask                 0xBF

#define P3DC6                                    0x6
#define P3DC6_address                            0xF69
#define P3DC6_position                           0x6
#define P3DC6_size                               0x1
#define P3DC6_value_mask                         0x40
#define P3DC6_clear_mask                         0xBF

#define P3RSEN                                   0x7
#define P3RSEN_address                           0xF69
#define P3RSEN_position                          0x7
#define P3RSEN_size                              0x1
#define P3RSEN_value_mask                        0x80
#define P3RSEN_clear_mask                        0x7F

#define ECCP3DEL_PRSEN                           0x7
#define ECCP3DEL_PRSEN_address                   0xF69
#define ECCP3DEL_PRSEN_position                  0x7
#define ECCP3DEL_PRSEN_size                      0x1
#define ECCP3DEL_PRSEN_value_mask                0x80
#define ECCP3DEL_PRSEN_clear_mask                0x7F


/*----------------------------------------------------------------------------------------------------------------------------#
| ECCP3AS                                                                                                               0xF6A |
#-----------------------------------------------------------------------------------------------------------------------------#
| ECCP3AS_ECCPASE | ECCP3AS_ECCPAS2 | ECCP3AS_ECCPAS1 | ECCP3AS_ECCPAS0 | ECCP3AS_PSSAC1 | ECCP3AS_PSSAC0 | PSS3BD1 | PSS3BD0 |
#-----------------------------------------------------------------------------------------------------------------------------#
| 7               | 6               | 5               | 4               | 3              | 2              | 1       | 0       |
#----------------------------------------------------------------------------------------------------------------------------*/

#define ECCP3AS                                  0x0
#define ECCP3AS_address                          0xF6A
#define ECCP3AS_position                         0x0
#define ECCP3AS_size                             0x8
#define ECCP3AS_value_mask                       0xFF
#define ECCP3AS_clear_mask                       0x0

#define ECCP3AS_PSSBD0                           0x0
#define ECCP3AS_PSSBD0_address                   0xF6A
#define ECCP3AS_PSSBD0_position                  0x0
#define ECCP3AS_PSSBD0_size                      0x1
#define ECCP3AS_PSSBD0_value_mask                0x1
#define ECCP3AS_PSSBD0_clear_mask                0xFE

#define PSS3BD0                                  0x0
#define PSS3BD0_address                          0xF6A
#define PSS3BD0_position                         0x0
#define PSS3BD0_size                             0x1
#define PSS3BD0_value_mask                       0x1
#define PSS3BD0_clear_mask                       0xFE

#define ECCP3AS_PSSBD                            0x0
#define ECCP3AS_PSSBD_address                    0xF6A
#define ECCP3AS_PSSBD_position                   0x0
#define ECCP3AS_PSSBD_size                       0x2
#define ECCP3AS_PSSBD_value_mask                 0x3
#define ECCP3AS_PSSBD_clear_mask                 0xFC

#define ECCP3AS_PSSBD1                           0x1
#define ECCP3AS_PSSBD1_address                   0xF6A
#define ECCP3AS_PSSBD1_position                  0x1
#define ECCP3AS_PSSBD1_size                      0x1
#define ECCP3AS_PSSBD1_value_mask                0x2
#define ECCP3AS_PSSBD1_clear_mask                0xFD

#define PSS3BD1                                  0x1
#define PSS3BD1_address                          0xF6A
#define PSS3BD1_position                         0x1
#define PSS3BD1_size                             0x1
#define PSS3BD1_value_mask                       0x2
#define PSS3BD1_clear_mask                       0xFD

#define ECCP3AS_PSSAC0                           0x2
#define ECCP3AS_PSSAC0_address                   0xF6A
#define ECCP3AS_PSSAC0_position                  0x2
#define ECCP3AS_PSSAC0_size                      0x1
#define ECCP3AS_PSSAC0_value_mask                0x4
#define ECCP3AS_PSSAC0_clear_mask                0xFB

#define PSS3AC0                                  0x2
#define PSS3AC0_address                          0xF6A
#define PSS3AC0_position                         0x2
#define PSS3AC0_size                             0x1
#define PSS3AC0_value_mask                       0x4
#define PSS3AC0_clear_mask                       0xFB

#define ECCP3AS_PSSAC                            0x2
#define ECCP3AS_PSSAC_address                    0xF6A
#define ECCP3AS_PSSAC_position                   0x2
#define ECCP3AS_PSSAC_size                       0x2
#define ECCP3AS_PSSAC_value_mask                 0xC
#define ECCP3AS_PSSAC_clear_mask                 0xF3

#define ECCP3AS_PSSAC1                           0x3
#define ECCP3AS_PSSAC1_address                   0xF6A
#define ECCP3AS_PSSAC1_position                  0x3
#define ECCP3AS_PSSAC1_size                      0x1
#define ECCP3AS_PSSAC1_value_mask                0x8
#define ECCP3AS_PSSAC1_clear_mask                0xF7

#define PSS3AC1                                  0x3
#define PSS3AC1_address                          0xF6A
#define PSS3AC1_position                         0x3
#define PSS3AC1_size                             0x1
#define PSS3AC1_value_mask                       0x8
#define PSS3AC1_clear_mask                       0xF7

#define ECCP3AS_ECCPAS0                          0x4
#define ECCP3AS_ECCPAS0_address                  0xF6A
#define ECCP3AS_ECCPAS0_position                 0x4
#define ECCP3AS_ECCPAS0_size                     0x1
#define ECCP3AS_ECCPAS0_value_mask               0x10
#define ECCP3AS_ECCPAS0_clear_mask               0xEF

#define ECCP3AS_ECCPAS                           0x4
#define ECCP3AS_ECCPAS_address                   0xF6A
#define ECCP3AS_ECCPAS_position                  0x4
#define ECCP3AS_ECCPAS_size                      0x3
#define ECCP3AS_ECCPAS_value_mask                0x70
#define ECCP3AS_ECCPAS_clear_mask                0x8F

#define ECCP3AS0                                 0x4
#define ECCP3AS0_address                         0xF6A
#define ECCP3AS0_position                        0x4
#define ECCP3AS0_size                            0x1
#define ECCP3AS0_value_mask                      0x10
#define ECCP3AS0_clear_mask                      0xEF

#define ECCP3AS_ECCPAS1                          0x5
#define ECCP3AS_ECCPAS1_address                  0xF6A
#define ECCP3AS_ECCPAS1_position                 0x5
#define ECCP3AS_ECCPAS1_size                     0x1
#define ECCP3AS_ECCPAS1_value_mask               0x20
#define ECCP3AS_ECCPAS1_clear_mask               0xDF

#define ECCP3AS1                                 0x5
#define ECCP3AS1_address                         0xF6A
#define ECCP3AS1_position                        0x5
#define ECCP3AS1_size                            0x1
#define ECCP3AS1_value_mask                      0x20
#define ECCP3AS1_clear_mask                      0xDF

#define ECCP3AS_ECCPAS2                          0x6
#define ECCP3AS_ECCPAS2_address                  0xF6A
#define ECCP3AS_ECCPAS2_position                 0x6
#define ECCP3AS_ECCPAS2_size                     0x1
#define ECCP3AS_ECCPAS2_value_mask               0x40
#define ECCP3AS_ECCPAS2_clear_mask               0xBF

#define ECCP3AS2                                 0x6
#define ECCP3AS2_address                         0xF6A
#define ECCP3AS2_position                        0x6
#define ECCP3AS2_size                            0x1
#define ECCP3AS2_value_mask                      0x40
#define ECCP3AS2_clear_mask                      0xBF

#define ECCP3AS_ECCPASE                          0x7
#define ECCP3AS_ECCPASE_address                  0xF6A
#define ECCP3AS_ECCPASE_position                 0x7
#define ECCP3AS_ECCPASE_size                     0x1
#define ECCP3AS_ECCPASE_value_mask               0x80
#define ECCP3AS_ECCPASE_clear_mask               0x7F

#define ECCP3ASE                                 0x7
#define ECCP3ASE_address                         0xF6A
#define ECCP3ASE_position                        0x7
#define ECCP3ASE_size                            0x1
#define ECCP3ASE_value_mask                      0x80
#define ECCP3ASE_clear_mask                      0x7F


/*----------------------------------------------------------#
| CCP5CON                                             0xF70 |
#-----------------------------------------------------------#
| - | - | CCP5X | CCP5Y | CCP5M3 | CCP5M2 | CCP5M1 | CCP5M0 |
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

#define CCP5Y                                    0x4
#define CCP5Y_address                            0xF70
#define CCP5Y_position                           0x4
#define CCP5Y_size                               0x1
#define CCP5Y_value_mask                         0x10
#define CCP5Y_clear_mask                         0xEF

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

#define CCP5X                                    0x5
#define CCP5X_address                            0xF70
#define CCP5X_position                           0x5
#define CCP5X_size                               0x1
#define CCP5X_value_mask                         0x20
#define CCP5X_clear_mask                         0xDF

#define DC5B1                                    0x5
#define DC5B1_address                            0xF70
#define DC5B1_position                           0x5
#define DC5B1_size                               0x1
#define DC5B1_value_mask                         0x20
#define DC5B1_clear_mask                         0xDF


/*----------------------------------------------------------#
| CCP4CON                                             0xF73 |
#-----------------------------------------------------------#
| - | - | CCP4X | CCP4Y | CCP4M3 | CCP4M2 | CCP4M1 | CCP4M0 |
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

#define CCP4Y                                    0x4
#define CCP4Y_address                            0xF73
#define CCP4Y_position                           0x4
#define CCP4Y_size                               0x1
#define CCP4Y_value_mask                         0x10
#define CCP4Y_clear_mask                         0xEF

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

#define CCP4X                                    0x5
#define CCP4X_address                            0xF73
#define CCP4X_position                           0x5
#define CCP4X_size                               0x1
#define CCP4X_value_mask                         0x20
#define CCP4X_clear_mask                         0xDF

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


/*---------------------------------------------------------------#
| ECCP1DEL                                                 0xF79 |
#----------------------------------------------------------------#
| P1RSEN | P1DC6 | P1DC5 | P1DC4 | P1DC3 | P1DC2 | P1DC1 | P1DC0 |
#----------------------------------------------------------------#
| 7      | 6     | 5     | 4     | 3     | 2     | 1     | 0     |
#---------------------------------------------------------------*/

#define ECCP1DEL                                 0x0
#define ECCP1DEL_address                         0xF79
#define ECCP1DEL_position                        0x0
#define ECCP1DEL_size                            0x8
#define ECCP1DEL_value_mask                      0xFF
#define ECCP1DEL_clear_mask                      0x0

#define P1DC0                                    0x0
#define P1DC0_address                            0xF79
#define P1DC0_position                           0x0
#define P1DC0_size                               0x1
#define P1DC0_value_mask                         0x1
#define P1DC0_clear_mask                         0xFE

#define ECCP1DEL_PDC0                            0x0
#define ECCP1DEL_PDC0_address                    0xF79
#define ECCP1DEL_PDC0_position                   0x0
#define ECCP1DEL_PDC0_size                       0x1
#define ECCP1DEL_PDC0_value_mask                 0x1
#define ECCP1DEL_PDC0_clear_mask                 0xFE

#define ECCP1DEL_PDC                             0x0
#define ECCP1DEL_PDC_address                     0xF79
#define ECCP1DEL_PDC_position                    0x0
#define ECCP1DEL_PDC_size                        0x7
#define ECCP1DEL_PDC_value_mask                  0x7F
#define ECCP1DEL_PDC_clear_mask                  0x80

#define P1DC1                                    0x1
#define P1DC1_address                            0xF79
#define P1DC1_position                           0x1
#define P1DC1_size                               0x1
#define P1DC1_value_mask                         0x2
#define P1DC1_clear_mask                         0xFD

#define ECCP1DEL_PDC1                            0x1
#define ECCP1DEL_PDC1_address                    0xF79
#define ECCP1DEL_PDC1_position                   0x1
#define ECCP1DEL_PDC1_size                       0x1
#define ECCP1DEL_PDC1_value_mask                 0x2
#define ECCP1DEL_PDC1_clear_mask                 0xFD

#define P1DC2                                    0x2
#define P1DC2_address                            0xF79
#define P1DC2_position                           0x2
#define P1DC2_size                               0x1
#define P1DC2_value_mask                         0x4
#define P1DC2_clear_mask                         0xFB

#define ECCP1DEL_PDC2                            0x2
#define ECCP1DEL_PDC2_address                    0xF79
#define ECCP1DEL_PDC2_position                   0x2
#define ECCP1DEL_PDC2_size                       0x1
#define ECCP1DEL_PDC2_value_mask                 0x4
#define ECCP1DEL_PDC2_clear_mask                 0xFB

#define P1DC3                                    0x3
#define P1DC3_address                            0xF79
#define P1DC3_position                           0x3
#define P1DC3_size                               0x1
#define P1DC3_value_mask                         0x8
#define P1DC3_clear_mask                         0xF7

#define ECCP1DEL_PDC3                            0x3
#define ECCP1DEL_PDC3_address                    0xF79
#define ECCP1DEL_PDC3_position                   0x3
#define ECCP1DEL_PDC3_size                       0x1
#define ECCP1DEL_PDC3_value_mask                 0x8
#define ECCP1DEL_PDC3_clear_mask                 0xF7

#define P1DC4                                    0x4
#define P1DC4_address                            0xF79
#define P1DC4_position                           0x4
#define P1DC4_size                               0x1
#define P1DC4_value_mask                         0x10
#define P1DC4_clear_mask                         0xEF

#define ECCP1DEL_PDC4                            0x4
#define ECCP1DEL_PDC4_address                    0xF79
#define ECCP1DEL_PDC4_position                   0x4
#define ECCP1DEL_PDC4_size                       0x1
#define ECCP1DEL_PDC4_value_mask                 0x10
#define ECCP1DEL_PDC4_clear_mask                 0xEF

#define P1DC5                                    0x5
#define P1DC5_address                            0xF79
#define P1DC5_position                           0x5
#define P1DC5_size                               0x1
#define P1DC5_value_mask                         0x20
#define P1DC5_clear_mask                         0xDF

#define ECCP1DEL_PDC5                            0x5
#define ECCP1DEL_PDC5_address                    0xF79
#define ECCP1DEL_PDC5_position                   0x5
#define ECCP1DEL_PDC5_size                       0x1
#define ECCP1DEL_PDC5_value_mask                 0x20
#define ECCP1DEL_PDC5_clear_mask                 0xDF

#define P1DC6                                    0x6
#define P1DC6_address                            0xF79
#define P1DC6_position                           0x6
#define P1DC6_size                               0x1
#define P1DC6_value_mask                         0x40
#define P1DC6_clear_mask                         0xBF

#define ECCP1DEL_PDC6                            0x6
#define ECCP1DEL_PDC6_address                    0xF79
#define ECCP1DEL_PDC6_position                   0x6
#define ECCP1DEL_PDC6_size                       0x1
#define ECCP1DEL_PDC6_value_mask                 0x40
#define ECCP1DEL_PDC6_clear_mask                 0xBF

#define P1RSEN                                   0x7
#define P1RSEN_address                           0xF79
#define P1RSEN_position                          0x7
#define P1RSEN_size                              0x1
#define P1RSEN_value_mask                        0x80
#define P1RSEN_clear_mask                        0x7F

#define ECCP1DEL_PRSEN                           0x7
#define ECCP1DEL_PRSEN_address                   0xF79
#define ECCP1DEL_PRSEN_position                  0x7
#define ECCP1DEL_PRSEN_size                      0x1
#define ECCP1DEL_PRSEN_value_mask                0x80
#define ECCP1DEL_PRSEN_clear_mask                0x7F


/*-------------------------------------------------------------#
| BAUDCON1                                               0xF7E |
#--------------------------------------------------------------#
| ABDOVF | RCMT1 | DTRXP1 | CKTXP | BRG161 | - | WUE1 | ABDEN1 |
#--------------------------------------------------------------#
| 7      | 6     | 5      | 4     | 3      | 2 | 1    | 0      |
#-------------------------------------------------------------*/

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

#define W4E                                      0x1
#define W4E_address                              0xF7E
#define W4E_position                             0x1
#define W4E_size                                 0x1
#define W4E_value_mask                           0x2
#define W4E_clear_mask                           0xFD

#define WUE                                      0x1
#define WUE_address                              0xF7E
#define WUE_position                             0x1
#define WUE_size                                 0x1
#define WUE_value_mask                           0x2
#define WUE_clear_mask                           0xFD

#define BRG161                                   0x3
#define BRG161_address                           0xF7E
#define BRG161_position                          0x3
#define BRG161_size                              0x1
#define BRG161_value_mask                        0x8
#define BRG161_clear_mask                        0xF7

#define BRG16                                    0x3
#define BRG16_address                            0xF7E
#define BRG16_position                           0x3
#define BRG16_size                               0x1
#define BRG16_value_mask                         0x8
#define BRG16_clear_mask                         0xF7

#define CKTXP                                    0x4
#define CKTXP_address                            0xF7E
#define CKTXP_position                           0x4
#define CKTXP_size                               0x1
#define CKTXP_value_mask                         0x10
#define CKTXP_clear_mask                         0xEF

#define SCKP1                                    0x4
#define SCKP1_address                            0xF7E
#define SCKP1_position                           0x4
#define SCKP1_size                               0x1
#define SCKP1_value_mask                         0x10
#define SCKP1_clear_mask                         0xEF

#define TXCKP                                    0x4
#define TXCKP_address                            0xF7E
#define TXCKP_position                           0x4
#define TXCKP_size                               0x1
#define TXCKP_value_mask                         0x10
#define TXCKP_clear_mask                         0xEF

#define TXCKP1                                   0x4
#define TXCKP1_address                           0xF7E
#define TXCKP1_position                          0x4
#define TXCKP1_size                              0x1
#define TXCKP1_value_mask                        0x10
#define TXCKP1_clear_mask                        0xEF

#define SCKP                                     0x4
#define SCKP_address                             0xF7E
#define SCKP_position                            0x4
#define SCKP_size                                0x1
#define SCKP_value_mask                          0x10
#define SCKP_clear_mask                          0xEF

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

#define DTRXP                                    0x5
#define DTRXP_address                            0xF7E
#define DTRXP_position                           0x5
#define DTRXP_size                               0x1
#define DTRXP_value_mask                         0x20
#define DTRXP_clear_mask                         0xDF

#define RXCKP                                    0x5
#define RXCKP_address                            0xF7E
#define RXCKP_position                           0x5
#define RXCKP_size                               0x1
#define RXCKP_value_mask                         0x20
#define RXCKP_clear_mask                         0xDF

#define RXDTP                                    0x5
#define RXDTP_address                            0xF7E
#define RXDTP_position                           0x5
#define RXDTP_size                               0x1
#define RXDTP_value_mask                         0x20
#define RXDTP_clear_mask                         0xDF

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

#define RCIDL                                    0x6
#define RCIDL_address                            0xF7E
#define RCIDL_position                           0x6
#define RCIDL_size                               0x1
#define RCIDL_value_mask                         0x40
#define RCIDL_clear_mask                         0xBF

#define RCMT                                     0x6
#define RCMT_address                             0xF7E
#define RCMT_position                            0x6
#define RCMT_size                                0x1
#define RCMT_value_mask                          0x40
#define RCMT_clear_mask                          0xBF

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


/*-------------------------------------------------------------#
| PORTA                                                  0xF80 |
#--------------------------------------------------------------#
| - | - | LVDIN | T0CKI | PORTA_RA3 | VREFM | PORTA_RA1 | LEDA |
#--------------------------------------------------------------#
| 7 | 6 | 5     | 4     | 3         | 2     | 1         | 0    |
#-------------------------------------------------------------*/

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

#define LEDA                                     0x0
#define LEDA_address                             0xF80
#define LEDA_position                            0x0
#define LEDA_size                                0x1
#define LEDA_value_mask                          0x1
#define LEDA_clear_mask                          0xFE

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

#define LEDB                                     0x1
#define LEDB_address                             0xF80
#define LEDB_position                            0x1
#define LEDB_size                                0x1
#define LEDB_value_mask                          0x2
#define LEDB_clear_mask                          0xFD

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


/*---------------------------------------------------------------------------------#
| PORTB                                                                      0xF81 |
#----------------------------------------------------------------------------------#
| PGD | PGC | PORTB_RB5 | PORTB_RB4 | CCP2_PA2 | PORTB_RB2 | PORTB_RB1 | PORTB_RB0 |
#----------------------------------------------------------------------------------#
| 7   | 6   | 5         | 4         | 3        | 2         | 1         | 0         |
#---------------------------------------------------------------------------------*/

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


/*-----------------------------------------------------#
| PORTC                                          0xF82 |
#------------------------------------------------------#
| DT1 | TX | SDO1 | SDI1 | SCK1 | CCP1 | CCP2 | T13CKI |
#------------------------------------------------------#
| 7   | 6  | 5    | 4    | 3    | 2    | 1    | 0      |
#-----------------------------------------------------*/

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

#define ECCP2                                    0x1
#define ECCP2_address                            0xF82
#define ECCP2_position                           0x1
#define ECCP2_size                               0x1
#define ECCP2_value_mask                         0x2
#define ECCP2_clear_mask                         0xFD

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

#define ECCP1                                    0x2
#define ECCP1_address                            0xF82
#define ECCP1_position                           0x2
#define ECCP1_size                               0x1
#define ECCP1_value_mask                         0x4
#define ECCP1_clear_mask                         0xFB

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

#define SCK1                                     0x3
#define SCK1_address                             0xF82
#define SCK1_position                            0x3
#define SCK1_size                                0x1
#define SCK1_value_mask                          0x8
#define SCK1_clear_mask                          0xF7

#define SCL                                      0x3
#define SCL_address                              0xF82
#define SCL_position                             0x3
#define SCL_size                                 0x1
#define SCL_value_mask                           0x8
#define SCL_clear_mask                           0xF7

#define SCL1                                     0x3
#define SCL1_address                             0xF82
#define SCL1_position                            0x3
#define SCL1_size                                0x1
#define SCL1_value_mask                          0x8
#define SCL1_clear_mask                          0xF7

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

#define SDO1                                     0x5
#define SDO1_address                             0xF82
#define SDO1_position                            0x5
#define SDO1_size                                0x1
#define SDO1_value_mask                          0x20
#define SDO1_clear_mask                          0xDF

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

#define PORTC_RC6                                0x6
#define PORTC_RC6_address                        0xF82
#define PORTC_RC6_position                       0x6
#define PORTC_RC6_size                           0x1
#define PORTC_RC6_value_mask                     0x40
#define PORTC_RC6_clear_mask                     0xBF

#define CK                                       0x6
#define CK_address                               0xF82
#define CK_position                              0x6
#define CK_size                                  0x1
#define CK_value_mask                            0x40
#define CK_clear_mask                            0xBF

#define TX1                                      0x6
#define TX1_address                              0xF82
#define TX1_position                             0x6
#define TX1_size                                 0x1
#define TX1_value_mask                           0x40
#define TX1_clear_mask                           0xBF

#define CK1                                      0x6
#define CK1_address                              0xF82
#define CK1_position                             0x6
#define CK1_size                                 0x1
#define CK1_value_mask                           0x40
#define CK1_clear_mask                           0xBF

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

#define RX1                                      0x7
#define RX1_address                              0xF82
#define RX1_position                             0x7
#define RX1_size                                 0x1
#define RX1_value_mask                           0x80
#define RX1_clear_mask                           0x7F

#define DT1                                      0x7
#define DT1_address                              0xF82
#define DT1_position                             0x7
#define DT1_size                                 0x1
#define DT1_value_mask                           0x80
#define DT1_clear_mask                           0x7F

#define PORTC_RC7                                0x7
#define PORTC_RC7_address                        0xF82
#define PORTC_RC7_position                       0x7
#define PORTC_RC7_size                           0x1
#define PORTC_RC7_value_mask                     0x80
#define PORTC_RC7_clear_mask                     0x7F


/*------------------------------------------------------#
| PORTD                                           0xF83 |
#-------------------------------------------------------#
| - | - | - | - | - | PORTD_RD2 | PORTD_RD1 | PORTD_RD0 |
#-------------------------------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2         | 1         | 0         |
#------------------------------------------------------*/

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

#define PORTD_RD1                                0x1
#define PORTD_RD1_address                        0xF83
#define PORTD_RD1_position                       0x1
#define PORTD_RD1_size                           0x1
#define PORTD_RD1_value_mask                     0x2
#define PORTD_RD1_clear_mask                     0xFD

#define ECCP3                                    0x1
#define ECCP3_address                            0xF83
#define ECCP3_position                           0x1
#define ECCP3_size                               0x1
#define ECCP3_value_mask                         0x2
#define ECCP3_clear_mask                         0xFD

#define CCP3                                     0x1
#define CCP3_address                             0xF83
#define CCP3_position                            0x1
#define CCP3_size                                0x1
#define CCP3_value_mask                          0x2
#define CCP3_clear_mask                          0xFD

#define PORTD_RD2                                0x2
#define PORTD_RD2_address                        0xF83
#define PORTD_RD2_position                       0x2
#define PORTD_RD2_size                           0x1
#define PORTD_RD2_value_mask                     0x4
#define PORTD_RD2_clear_mask                     0xFB

#define CCP4                                     0x2
#define CCP4_address                             0xF83
#define CCP4_position                            0x2
#define CCP4_size                                0x1
#define CCP4_value_mask                          0x4
#define CCP4_clear_mask                          0xFB


/*-----------------------------------------------#
| PORTE                                    0xF84 |
#------------------------------------------------#
| - | - | PC1E | PB3E | PC3E | CCP10 | WRE | PD2 |
#------------------------------------------------#
| 7 | 6 | 5    | 4    | 3    | 2     | 1   | 0   |
#-----------------------------------------------*/

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

#define PORTE_RE0                                0x0
#define PORTE_RE0_address                        0xF84
#define PORTE_RE0_position                       0x0
#define PORTE_RE0_size                           0x1
#define PORTE_RE0_value_mask                     0x1
#define PORTE_RE0_clear_mask                     0xFE

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


/*--------------------------------------------------------------------------------------#
| PORTF                                                                           0xF85 |
#---------------------------------------------------------------------------------------#
| PORTF_RF7 | PORTF_RF6 | PORTF_RF5 | PORTF_RF4 | PORTF_RF3 | PORTF_RF2 | PORTF_RF1 | - |
#---------------------------------------------------------------------------------------#
| 7         | 6         | 5         | 4         | 3         | 2         | 1         | 0 |
#--------------------------------------------------------------------------------------*/

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

#define SS1                                      0x7
#define SS1_address                              0xF85
#define SS1_position                             0x7
#define SS1_size                                 0x1
#define SS1_value_mask                           0x80
#define SS1_clear_mask                           0x7F

#define nSS1                                     0x7
#define nSS1_address                             0xF85
#define nSS1_position                            0x7
#define nSS1_size                                0x1
#define nSS1_value_mask                          0x80
#define nSS1_clear_mask                          0x7F

#define NOT_SS1                                  0x7
#define NOT_SS1_address                          0xF85
#define NOT_SS1_position                         0x7
#define NOT_SS1_size                             0x1
#define NOT_SS1_value_mask                       0x80
#define NOT_SS1_clear_mask                       0x7F

#define nSS                                      0x7
#define nSS_address                              0xF85
#define nSS_position                             0x7
#define nSS_size                                 0x1
#define nSS_value_mask                           0x80
#define nSS_clear_mask                           0x7F

#define NOT_SS                                   0x7
#define NOT_SS_address                           0xF85
#define NOT_SS_position                          0x7
#define NOT_SS_size                              0x1
#define NOT_SS_value_mask                        0x80
#define NOT_SS_clear_mask                        0x7F

#define SS                                       0x7
#define SS_address                               0xF85
#define SS_position                              0x7
#define SS_size                                  0x1
#define SS_value_mask                            0x80
#define SS_clear_mask                            0x7F


/*---------------------------------#
| PORTG                      0xF86 |
#----------------------------------#
| - | - | - | CCP5 | - | - | - | - |
#----------------------------------#
| 7 | 6 | 5 | 4    | 3 | 2 | 1 | 0 |
#---------------------------------*/

#define PORTG                                    0x0
#define PORTG_address                            0xF86
#define PORTG_position                           0x0
#define PORTG_size                               0x8
#define PORTG_value_mask                         0xFF
#define PORTG_clear_mask                         0x0

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


/*-------------------------------------------------------------#
| LATA                                                   0xF89 |
#--------------------------------------------------------------#
| LATA7 | REPU | LATA5 | LATA4 | LATA3 | LATA2 | LATA1 | LATA0 |
#--------------------------------------------------------------#
| 7     | 6    | 5     | 4     | 3     | 2     | 1     | 0     |
#-------------------------------------------------------------*/

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

#define REPU                                     0x6
#define REPU_address                             0xF89
#define REPU_position                            0x6
#define REPU_size                                0x1
#define REPU_value_mask                          0x40
#define REPU_clear_mask                          0xBF

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

#define RDPU                                     0x7
#define RDPU_address                             0xF89
#define RDPU_position                            0x7
#define RDPU_size                                0x1
#define RDPU_value_mask                          0x80
#define RDPU_clear_mask                          0x7F

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


/*------------------------------------------#
| LATD                                0xF8C |
#-------------------------------------------#
| - | - | - | - | - | LATD2 | LATD1 | LATD0 |
#-------------------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2     | 1     | 0     |
#------------------------------------------*/

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


/*------------------------------------------------------#
| LATE                                            0xF8D |
#-------------------------------------------------------#
| - | - | LATE5 | LATE4 | LATE3 | LATE2 | LATE1 | LATE0 |
#-------------------------------------------------------#
| 7 | 6 | 5     | 4     | 3     | 2     | 1     | 0     |
#------------------------------------------------------*/

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


/*----------------------------------#
| LATG                        0xF8F |
#-----------------------------------#
| - | - | - | LATG4 | - | - | - | - |
#-----------------------------------#
| 7 | 6 | 5 | 4     | 3 | 2 | 1 | 0 |
#----------------------------------*/

#define LATG                                     0x0
#define LATG_address                             0xF8F
#define LATG_position                            0x0
#define LATG_size                                0x8
#define LATG_value_mask                          0xFF
#define LATG_clear_mask                          0x0

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


/*---------------------------------------------------------------#
| TRISA                                                    0xF92 |
#----------------------------------------------------------------#
| - | - | TRISA5 | TRISA_RA4 | TRISA3 | TRISA2 | TRISA1 | TRISA0 |
#----------------------------------------------------------------#
| 7 | 6 | 5      | 4         | 3      | 2      | 1      | 0      |
#---------------------------------------------------------------*/

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


/*---------------------------------------------#
| TRISD                                  0xF95 |
#----------------------------------------------#
| - | - | - | - | - | TRISD2 | TRISD1 | TRISD0 |
#----------------------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2      | 1      | 0      |
#---------------------------------------------*/

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

#define TRISD_RD0                                0x0
#define TRISD_RD0_address                        0xF95
#define TRISD_RD0_position                       0x0
#define TRISD_RD0_size                           0x1
#define TRISD_RD0_value_mask                     0x1
#define TRISD_RD0_clear_mask                     0xFE

#define TRISD1                                   0x1
#define TRISD1_address                           0xF95
#define TRISD1_position                          0x1
#define TRISD1_size                              0x1
#define TRISD1_value_mask                        0x2
#define TRISD1_clear_mask                        0xFD

#define TRISD_RD1                                0x1
#define TRISD_RD1_address                        0xF95
#define TRISD_RD1_position                       0x1
#define TRISD_RD1_size                           0x1
#define TRISD_RD1_value_mask                     0x2
#define TRISD_RD1_clear_mask                     0xFD

#define TRISD2                                   0x2
#define TRISD2_address                           0xF95
#define TRISD2_position                          0x2
#define TRISD2_size                              0x1
#define TRISD2_value_mask                        0x4
#define TRISD2_clear_mask                        0xFB

#define TRISD_RD2                                0x2
#define TRISD_RD2_address                        0xF95
#define TRISD_RD2_position                       0x2
#define TRISD_RD2_size                           0x1
#define TRISD_RD2_value_mask                     0x4
#define TRISD_RD2_clear_mask                     0xFB


/*------------------------------------------------------------------------------#
| TRISE                                                                   0xF96 |
#-------------------------------------------------------------------------------#
| - | - | TRISE_RE5 | TRISE_RE4 | TRISE_RE3 | TRISE_RE2 | TRISE_RE1 | TRISE_RE0 |
#-------------------------------------------------------------------------------#
| 7 | 6 | 5         | 4         | 3         | 2         | 1         | 0         |
#------------------------------------------------------------------------------*/

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

#define TRISE_RE2                                0x2
#define TRISE_RE2_address                        0xF96
#define TRISE_RE2_position                       0x2
#define TRISE_RE2_size                           0x1
#define TRISE_RE2_value_mask                     0x4
#define TRISE_RE2_clear_mask                     0xFB

#define TRISE2                                   0x2
#define TRISE2_address                           0xF96
#define TRISE2_position                          0x2
#define TRISE2_size                              0x1
#define TRISE2_value_mask                        0x4
#define TRISE2_clear_mask                        0xFB

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


/*-----------------------------------#
| TRISG                        0xF98 |
#------------------------------------#
| - | - | - | TRISG4 | - | - | - | - |
#------------------------------------#
| 7 | 6 | 5 | 4      | 3 | 2 | 1 | 0 |
#-----------------------------------*/

#define TRISG                                    0x0
#define TRISG_address                            0xF98
#define TRISG_position                           0x0
#define TRISG_size                               0x8
#define TRISG_value_mask                         0xFF
#define TRISG_clear_mask                         0x0

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


/*--------------------------------------------#
| OSCTUNE                               0xF9B |
#---------------------------------------------#
| PPST1 | PLLEN | TUN5 | TUN4 | - | - | - | - |
#---------------------------------------------#
| 7     | 6     | 5    | 4    | 3 | 2 | 1 | 0 |
#--------------------------------------------*/

#define OSCTUNE                                  0x0
#define OSCTUNE_address                          0xF9B
#define OSCTUNE_position                         0x0
#define OSCTUNE_size                             0x8
#define OSCTUNE_value_mask                       0xFF
#define OSCTUNE_clear_mask                       0x0

#define TUN4                                     0x4
#define TUN4_address                             0xF9B
#define TUN4_position                            0x4
#define TUN4_size                                0x1
#define TUN4_value_mask                          0x10
#define TUN4_clear_mask                          0xEF

#define PPRE                                     0x4
#define PPRE_address                             0xF9B
#define PPRE_position                            0x4
#define PPRE_size                                0x1
#define PPRE_value_mask                          0x10
#define PPRE_clear_mask                          0xEF

#define TUN5                                     0x5
#define TUN5_address                             0xF9B
#define TUN5_position                            0x5
#define TUN5_size                                0x1
#define TUN5_value_mask                          0x20
#define TUN5_clear_mask                          0xDF

#define PPST0                                    0x5
#define PPST0_address                            0xF9B
#define PPST0_position                           0x5
#define PPST0_size                               0x1
#define PPST0_value_mask                         0x20
#define PPST0_clear_mask                         0xDF

#define PLLEN                                    0x6
#define PLLEN_address                            0xF9B
#define PLLEN_position                           0x6
#define PLLEN_size                               0x1
#define PLLEN_value_mask                         0x40
#define PLLEN_clear_mask                         0xBF

#define PPST1                                    0x7
#define PPST1_address                            0xF9B
#define PPST1_position                           0x7
#define PPST1_size                               0x1
#define PPST1_value_mask                         0x80
#define PPST1_clear_mask                         0x7F


/*----------------------------------------------------------------#
| PIE1                                                      0xF9D |
#-----------------------------------------------------------------#
| - | ADIE | RCIE | PIE1_TXIE | SSP1IE | CCP1IE | TMR2IE | TMR1IE |
#-----------------------------------------------------------------#
| 7 | 6    | 5    | 4         | 3      | 2      | 1      | 0      |
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

#define PIE1_TXIE                                0x4
#define PIE1_TXIE_address                        0xF9D
#define PIE1_TXIE_position                       0x4
#define PIE1_TXIE_size                           0x1
#define PIE1_TXIE_value_mask                     0x10
#define PIE1_TXIE_clear_mask                     0xEF

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


/*---------------------------------------------------------------#
| PIR1                                                     0xF9E |
#----------------------------------------------------------------#
| - | ADIF | RCIF | PIR1_TXIF | SSPIF | CCP1IF | TMR2IF | TMR1IF |
#----------------------------------------------------------------#
| 7 | 6    | 5    | 4         | 3     | 2      | 1      | 0      |
#---------------------------------------------------------------*/

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

#define PIR1_TXIF                                0x4
#define PIR1_TXIF_address                        0xF9E
#define PIR1_TXIF_position                       0x4
#define PIR1_TXIF_size                           0x1
#define PIR1_TXIF_value_mask                     0x10
#define PIR1_TXIF_clear_mask                     0xEF

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
| - | ADIP | RC1IP | TX1IP | SSP1IP | CCP1IP | TMR2IP | TMR1IP |
#--------------------------------------------------------------#
| 7 | 6    | 5     | 4     | 3      | 2      | 1      | 0      |
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


/*---------------------------------------------------------#
| PIE2                                               0xFA0 |
#----------------------------------------------------------#
| OSCFIE | CMIE | ETHIE | - | BCL1IE | - | TMR3IE | CCP2IE |
#----------------------------------------------------------#
| 7      | 6    | 5     | 4 | 3      | 2 | 1      | 0      |
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

#define ETHIE                                    0x5
#define ETHIE_address                            0xFA0
#define ETHIE_position                           0x5
#define ETHIE_size                               0x1
#define ETHIE_value_mask                         0x20
#define ETHIE_clear_mask                         0xDF

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
| OSCFIF | CMIF | ETHIF | - | BCL1IF | - | TMR3IF | CCP2IF |
#----------------------------------------------------------#
| 7      | 6    | 5     | 4 | 3      | 2 | 1      | 0      |
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

#define ETHIF                                    0x5
#define ETHIF_address                            0xFA1
#define ETHIF_position                           0x5
#define ETHIF_size                               0x1
#define ETHIF_value_mask                         0x20
#define ETHIF_clear_mask                         0xDF

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


/*--------------------------------------------------------#
| IPR2                                              0xFA2 |
#---------------------------------------------------------#
| OSCFIP | CMIP | ETHIP | - | BCLIP | - | TMR3IP | CCP2IP |
#---------------------------------------------------------#
| 7      | 6    | 5     | 4 | 3     | 2 | 1      | 0      |
#--------------------------------------------------------*/

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

#define ETHIP                                    0x5
#define ETHIP_address                            0xFA2
#define ETHIP_position                           0x5
#define ETHIP_size                               0x1
#define ETHIP_value_mask                         0x20
#define ETHIP_clear_mask                         0xDF

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
| - | - | - | - | TMR4IE | TXB0IE | RXBNIE | CCP3IE |
#---------------------------------------------------#
| 7 | 6 | 5 | 4 | 3      | 2      | 1      | 0      |
#--------------------------------------------------*/

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

#define TMR4IE                                   0x3
#define TMR4IE_address                           0xFA3
#define TMR4IE_position                          0x3
#define TMR4IE_size                              0x1
#define TMR4IE_value_mask                        0x8
#define TMR4IE_clear_mask                        0xF7

#define TXB1IE                                   0x3
#define TXB1IE_address                           0xFA3
#define TXB1IE_position                          0x3
#define TXB1IE_size                              0x1
#define TXB1IE_value_mask                        0x8
#define TXB1IE_clear_mask                        0xF7


/*--------------------------------------------------#
| PIR3                                        0xFA4 |
#---------------------------------------------------#
| - | - | - | - | TMR4IF | CCP5IF | CCP4IF | CCP3IF |
#---------------------------------------------------#
| 7 | 6 | 5 | 4 | 3      | 2      | 1      | 0      |
#--------------------------------------------------*/

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

#define CCP4IF                                   0x1
#define CCP4IF_address                           0xFA4
#define CCP4IF_position                          0x1
#define CCP4IF_size                              0x1
#define CCP4IF_value_mask                        0x2
#define CCP4IF_clear_mask                        0xFD

#define RXBNIF                                   0x1
#define RXBNIF_address                           0xFA4
#define RXBNIF_position                          0x1
#define RXBNIF_size                              0x1
#define RXBNIF_value_mask                        0x2
#define RXBNIF_clear_mask                        0xFD

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


/*--------------------------------------------------#
| IPR3                                        0xFA5 |
#---------------------------------------------------#
| - | - | - | - | TMR4IP | CCP5IP | CCP4IP | CCP3IP |
#---------------------------------------------------#
| 7 | 6 | 5 | 4 | 3      | 2      | 1      | 0      |
#--------------------------------------------------*/

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

#define RXBNIP                                   0x1
#define RXBNIP_address                           0xFA5
#define RXBNIP_position                          0x1
#define RXBNIP_size                              0x1
#define RXBNIP_value_mask                        0x2
#define RXBNIP_clear_mask                        0xFD

#define CCP4IP                                   0x1
#define CCP4IP_address                           0xFA5
#define CCP4IP_position                          0x1
#define CCP4IP_size                              0x1
#define CCP4IP_value_mask                        0x2
#define CCP4IP_clear_mask                        0xFD

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


/*-----------------------------------------#
| EECON1                             0xFA6 |
#------------------------------------------#
| - | - | - | FREE | WRERR | WREN | WR | - |
#------------------------------------------#
| 7 | 6 | 5 | 4    | 3     | 2    | 1  | 0 |
#-----------------------------------------*/

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


/*---------------------------------------------------------#
| RCSTA1                                             0xFAB |
#----------------------------------------------------------#
| SPEN | RC8_9 | SREN | CREN1 | ADDEN | FERR | OERR | RX9D |
#----------------------------------------------------------#
| 7    | 6     | 5    | 4     | 3     | 2    | 1    | 0    |
#---------------------------------------------------------*/

#define RCSTA1                                   0x0
#define RCSTA1_address                           0xFAB
#define RCSTA1_position                          0x0
#define RCSTA1_size                              0x8
#define RCSTA1_value_mask                        0xFF
#define RCSTA1_clear_mask                        0x0

#define RX9D                                     0x0
#define RX9D_address                             0xFAB
#define RX9D_position                            0x0
#define RX9D_size                                0x1
#define RX9D_value_mask                          0x1
#define RX9D_clear_mask                          0xFE

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

#define OERR1                                    0x1
#define OERR1_address                            0xFAB
#define OERR1_position                           0x1
#define OERR1_size                               0x1
#define OERR1_value_mask                         0x2
#define OERR1_clear_mask                         0xFD

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

#define FERR1                                    0x2
#define FERR1_address                            0xFAB
#define FERR1_position                           0x2
#define FERR1_size                               0x1
#define FERR1_value_mask                         0x4
#define FERR1_clear_mask                         0xFB

#define ADDEN                                    0x3
#define ADDEN_address                            0xFAB
#define ADDEN_position                           0x3
#define ADDEN_size                               0x1
#define ADDEN_value_mask                         0x8
#define ADDEN_clear_mask                         0xF7

#define ADDEN1                                   0x3
#define ADDEN1_address                           0xFAB
#define ADDEN1_position                          0x3
#define ADDEN1_size                              0x1
#define ADDEN1_value_mask                        0x8
#define ADDEN1_clear_mask                        0xF7

#define CREN1                                    0x4
#define CREN1_address                            0xFAB
#define CREN1_position                           0x4
#define CREN1_size                               0x1
#define CREN1_value_mask                         0x10
#define CREN1_clear_mask                         0xEF

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

#define SREN1                                    0x5
#define SREN1_address                            0xFAB
#define SREN1_position                           0x5
#define SREN1_size                               0x1
#define SREN1_value_mask                         0x20
#define SREN1_clear_mask                         0xDF

#define RX9                                      0x6
#define RX9_address                              0xFAB
#define RX9_position                             0x6
#define RX9_size                                 0x1
#define RX9_value_mask                           0x40
#define RX9_clear_mask                           0xBF

#define RC8_9                                    0x6
#define RC8_9_address                            0xFAB
#define RC8_9_position                           0x6
#define RC8_9_size                               0x1
#define RC8_9_value_mask                         0x40
#define RC8_9_clear_mask                         0xBF

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

#define SPEN                                     0x7
#define SPEN_address                             0xFAB
#define SPEN_position                            0x7
#define SPEN_size                                0x1
#define SPEN_value_mask                          0x80
#define SPEN_clear_mask                          0x7F

#define SPEN1                                    0x7
#define SPEN1_address                            0xFAB
#define SPEN1_position                           0x7
#define SPEN1_size                               0x1
#define SPEN1_value_mask                         0x80
#define SPEN1_clear_mask                         0x7F


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

#define TXEN                                     0x5
#define TXEN_address                             0xFAC
#define TXEN_position                            0x5
#define TXEN_size                                0x1
#define TXEN_value_mask                          0x20
#define TXEN_clear_mask                          0xDF

#define TXEN1                                    0x5
#define TXEN1_address                            0xFAC
#define TXEN1_position                           0x5
#define TXEN1_size                               0x1
#define TXEN1_value_mask                         0x20
#define TXEN1_clear_mask                         0xDF

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

#define CMCON_CM                                 0x0
#define CMCON_CM_address                         0xFB4
#define CMCON_CM_position                        0x0
#define CMCON_CM_size                            0x3
#define CMCON_CM_value_mask                      0x7
#define CMCON_CM_clear_mask                      0xF8

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


/*-------------------------------------------------------------------------------------------------------#
| ECCP1AS                                                                                          0xFB6 |
#--------------------------------------------------------------------------------------------------------#
| ECCP1ASE | ECCP1AS_ECCPAS2 | ECCP1AS_ECCPAS1 | ECCP1AS_ECCPAS0 | PSS1AC1 | PSS1AC0 | PSS1BD1 | PSS1BD0 |
#--------------------------------------------------------------------------------------------------------#
| 7        | 6               | 5               | 4               | 3       | 2       | 1       | 0       |
#-------------------------------------------------------------------------------------------------------*/

#define ECCP1AS                                  0x0
#define ECCP1AS_address                          0xFB6
#define ECCP1AS_position                         0x0
#define ECCP1AS_size                             0x8
#define ECCP1AS_value_mask                       0xFF
#define ECCP1AS_clear_mask                       0x0

#define ECCP1AS_PSSBD                            0x0
#define ECCP1AS_PSSBD_address                    0xFB6
#define ECCP1AS_PSSBD_position                   0x0
#define ECCP1AS_PSSBD_size                       0x2
#define ECCP1AS_PSSBD_value_mask                 0x3
#define ECCP1AS_PSSBD_clear_mask                 0xFC

#define ECCP1AS_PSSBD0                           0x0
#define ECCP1AS_PSSBD0_address                   0xFB6
#define ECCP1AS_PSSBD0_position                  0x0
#define ECCP1AS_PSSBD0_size                      0x1
#define ECCP1AS_PSSBD0_value_mask                0x1
#define ECCP1AS_PSSBD0_clear_mask                0xFE

#define PSS1BD0                                  0x0
#define PSS1BD0_address                          0xFB6
#define PSS1BD0_position                         0x0
#define PSS1BD0_size                             0x1
#define PSS1BD0_value_mask                       0x1
#define PSS1BD0_clear_mask                       0xFE

#define ECCP1AS_PSSBD1                           0x1
#define ECCP1AS_PSSBD1_address                   0xFB6
#define ECCP1AS_PSSBD1_position                  0x1
#define ECCP1AS_PSSBD1_size                      0x1
#define ECCP1AS_PSSBD1_value_mask                0x2
#define ECCP1AS_PSSBD1_clear_mask                0xFD

#define PSS1BD1                                  0x1
#define PSS1BD1_address                          0xFB6
#define PSS1BD1_position                         0x1
#define PSS1BD1_size                             0x1
#define PSS1BD1_value_mask                       0x2
#define PSS1BD1_clear_mask                       0xFD

#define ECCP1AS_PSSAC0                           0x2
#define ECCP1AS_PSSAC0_address                   0xFB6
#define ECCP1AS_PSSAC0_position                  0x2
#define ECCP1AS_PSSAC0_size                      0x1
#define ECCP1AS_PSSAC0_value_mask                0x4
#define ECCP1AS_PSSAC0_clear_mask                0xFB

#define PSS1AC0                                  0x2
#define PSS1AC0_address                          0xFB6
#define PSS1AC0_position                         0x2
#define PSS1AC0_size                             0x1
#define PSS1AC0_value_mask                       0x4
#define PSS1AC0_clear_mask                       0xFB

#define ECCP1AS_PSSAC                            0x2
#define ECCP1AS_PSSAC_address                    0xFB6
#define ECCP1AS_PSSAC_position                   0x2
#define ECCP1AS_PSSAC_size                       0x2
#define ECCP1AS_PSSAC_value_mask                 0xC
#define ECCP1AS_PSSAC_clear_mask                 0xF3

#define ECCP1AS_PSSAC1                           0x3
#define ECCP1AS_PSSAC1_address                   0xFB6
#define ECCP1AS_PSSAC1_position                  0x3
#define ECCP1AS_PSSAC1_size                      0x1
#define ECCP1AS_PSSAC1_value_mask                0x8
#define ECCP1AS_PSSAC1_clear_mask                0xF7

#define PSS1AC1                                  0x3
#define PSS1AC1_address                          0xFB6
#define PSS1AC1_position                         0x3
#define PSS1AC1_size                             0x1
#define PSS1AC1_value_mask                       0x8
#define PSS1AC1_clear_mask                       0xF7

#define ECCP1AS_ECCPAS0                          0x4
#define ECCP1AS_ECCPAS0_address                  0xFB6
#define ECCP1AS_ECCPAS0_position                 0x4
#define ECCP1AS_ECCPAS0_size                     0x1
#define ECCP1AS_ECCPAS0_value_mask               0x10
#define ECCP1AS_ECCPAS0_clear_mask               0xEF

#define ECCP1AS_ECCPAS                           0x4
#define ECCP1AS_ECCPAS_address                   0xFB6
#define ECCP1AS_ECCPAS_position                  0x4
#define ECCP1AS_ECCPAS_size                      0x3
#define ECCP1AS_ECCPAS_value_mask                0x70
#define ECCP1AS_ECCPAS_clear_mask                0x8F

#define ECCP1AS0                                 0x4
#define ECCP1AS0_address                         0xFB6
#define ECCP1AS0_position                        0x4
#define ECCP1AS0_size                            0x1
#define ECCP1AS0_value_mask                      0x10
#define ECCP1AS0_clear_mask                      0xEF

#define ECCP1AS_ECCPAS1                          0x5
#define ECCP1AS_ECCPAS1_address                  0xFB6
#define ECCP1AS_ECCPAS1_position                 0x5
#define ECCP1AS_ECCPAS1_size                     0x1
#define ECCP1AS_ECCPAS1_value_mask               0x20
#define ECCP1AS_ECCPAS1_clear_mask               0xDF

#define ECCP1AS1                                 0x5
#define ECCP1AS1_address                         0xFB6
#define ECCP1AS1_position                        0x5
#define ECCP1AS1_size                            0x1
#define ECCP1AS1_value_mask                      0x20
#define ECCP1AS1_clear_mask                      0xDF

#define ECCP1AS_ECCPAS2                          0x6
#define ECCP1AS_ECCPAS2_address                  0xFB6
#define ECCP1AS_ECCPAS2_position                 0x6
#define ECCP1AS_ECCPAS2_size                     0x1
#define ECCP1AS_ECCPAS2_value_mask               0x40
#define ECCP1AS_ECCPAS2_clear_mask               0xBF

#define ECCP1AS2                                 0x6
#define ECCP1AS2_address                         0xFB6
#define ECCP1AS2_position                        0x6
#define ECCP1AS2_size                            0x1
#define ECCP1AS2_value_mask                      0x40
#define ECCP1AS2_clear_mask                      0xBF

#define ECCP1ASE                                 0x7
#define ECCP1ASE_address                         0xFB6
#define ECCP1ASE_position                        0x7
#define ECCP1ASE_size                            0x1
#define ECCP1ASE_value_mask                      0x80
#define ECCP1ASE_clear_mask                      0x7F

#define ECCP1AS_ECCPASE                          0x7
#define ECCP1AS_ECCPASE_address                  0xFB6
#define ECCP1AS_ECCPASE_position                 0x7
#define ECCP1AS_ECCPASE_size                     0x1
#define ECCP1AS_ECCPASE_value_mask               0x80
#define ECCP1AS_ECCPASE_clear_mask               0x7F


/*----------------------------------------------------------------#
| CCP3CON                                                   0xFB7 |
#-----------------------------------------------------------------#
| P3M1 | P3M0 | CCP3X | CCP3Y | CCP3M3 | CCP3M2 | CCP3M1 | CCP3M0 |
#-----------------------------------------------------------------#
| 7    | 6    | 5     | 4     | 3      | 2      | 1      | 0      |
#----------------------------------------------------------------*/

#define CCP3CON                                  0x0
#define CCP3CON_address                          0xFB7
#define CCP3CON_position                         0x0
#define CCP3CON_size                             0x8
#define CCP3CON_value_mask                       0xFF
#define CCP3CON_clear_mask                       0x0

#define CCP3M                                    0x0
#define CCP3M_address                            0xFB7
#define CCP3M_position                           0x0
#define CCP3M_size                               0x4
#define CCP3M_value_mask                         0xF
#define CCP3M_clear_mask                         0xF0

#define CCP3M0                                   0x0
#define CCP3M0_address                           0xFB7
#define CCP3M0_position                          0x0
#define CCP3M0_size                              0x1
#define CCP3M0_value_mask                        0x1
#define CCP3M0_clear_mask                        0xFE

#define CCP3M1                                   0x1
#define CCP3M1_address                           0xFB7
#define CCP3M1_position                          0x1
#define CCP3M1_size                              0x1
#define CCP3M1_value_mask                        0x2
#define CCP3M1_clear_mask                        0xFD

#define CCP3M2                                   0x2
#define CCP3M2_address                           0xFB7
#define CCP3M2_position                          0x2
#define CCP3M2_size                              0x1
#define CCP3M2_value_mask                        0x4
#define CCP3M2_clear_mask                        0xFB

#define CCP3M3                                   0x3
#define CCP3M3_address                           0xFB7
#define CCP3M3_position                          0x3
#define CCP3M3_size                              0x1
#define CCP3M3_value_mask                        0x8
#define CCP3M3_clear_mask                        0xF7

#define CCP3Y                                    0x4
#define CCP3Y_address                            0xFB7
#define CCP3Y_position                           0x4
#define CCP3Y_size                               0x1
#define CCP3Y_value_mask                         0x10
#define CCP3Y_clear_mask                         0xEF

#define DC3B                                     0x4
#define DC3B_address                             0xFB7
#define DC3B_position                            0x4
#define DC3B_size                                0x2
#define DC3B_value_mask                          0x30
#define DC3B_clear_mask                          0xCF

#define DC3B0                                    0x4
#define DC3B0_address                            0xFB7
#define DC3B0_position                           0x4
#define DC3B0_size                               0x1
#define DC3B0_value_mask                         0x10
#define DC3B0_clear_mask                         0xEF

#define DC3B1                                    0x5
#define DC3B1_address                            0xFB7
#define DC3B1_position                           0x5
#define DC3B1_size                               0x1
#define DC3B1_value_mask                         0x20
#define DC3B1_clear_mask                         0xDF

#define CCP3X                                    0x5
#define CCP3X_address                            0xFB7
#define CCP3X_position                           0x5
#define CCP3X_size                               0x1
#define CCP3X_value_mask                         0x20
#define CCP3X_clear_mask                         0xDF

#define P3M                                      0x6
#define P3M_address                              0xFB7
#define P3M_position                             0x6
#define P3M_size                                 0x2
#define P3M_value_mask                           0xC0
#define P3M_clear_mask                           0x3F

#define P3M0                                     0x6
#define P3M0_address                             0xFB7
#define P3M0_position                            0x6
#define P3M0_size                                0x1
#define P3M0_value_mask                          0x40
#define P3M0_clear_mask                          0xBF

#define P3M1                                     0x7
#define P3M1_address                             0xFB7
#define P3M1_position                            0x7
#define P3M1_size                                0x1
#define P3M1_value_mask                          0x80
#define P3M1_clear_mask                          0x7F


/*----------------------------------------------------------------#
| CCP2CON                                                   0xFBA |
#-----------------------------------------------------------------#
| P2M1 | P2M0 | DC2B1 | DC2B0 | CCP2M3 | CCP2M2 | CCP2M1 | CCP2M0 |
#-----------------------------------------------------------------#
| 7    | 6    | 5     | 4     | 3      | 2      | 1      | 0      |
#----------------------------------------------------------------*/

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

#define DC2B                                     0x4
#define DC2B_address                             0xFBA
#define DC2B_position                            0x4
#define DC2B_size                                0x2
#define DC2B_value_mask                          0x30
#define DC2B_clear_mask                          0xCF

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

#define P2M                                      0x6
#define P2M_address                              0xFBA
#define P2M_position                             0x6
#define P2M_size                                 0x2
#define P2M_value_mask                           0xC0
#define P2M_clear_mask                           0x3F

#define P2M0                                     0x6
#define P2M0_address                             0xFBA
#define P2M0_position                            0x6
#define P2M0_size                                0x1
#define P2M0_value_mask                          0x40
#define P2M0_clear_mask                          0xBF

#define P2M1                                     0x7
#define P2M1_address                             0xFBA
#define P2M1_position                            0x7
#define P2M1_size                                0x1
#define P2M1_value_mask                          0x80
#define P2M1_clear_mask                          0x7F


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


/*-----------------------------------------------------#
| ADCON0                                         0xFC2 |
#------------------------------------------------------#
| ADCAL | - | CHS3 | CHS2 | CHS1 | CHS0 | nDONE | ADON |
#------------------------------------------------------#
| 7     | 6 | 5    | 4    | 3    | 2    | 1     | 0    |
#-----------------------------------------------------*/

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

#define ADCAL                                    0x7
#define ADCAL_address                            0xFC2
#define ADCAL_position                           0x7
#define ADCAL_size                               0x1
#define ADCAL_value_mask                         0x80
#define ADCAL_clear_mask                         0x7F


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

#define ADMSK                                    0x1
#define ADMSK_address                            0xFC5
#define ADMSK_position                           0x1
#define ADMSK_size                               0x5
#define ADMSK_value_mask                         0x3E
#define ADMSK_clear_mask                         0xC1

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

#define STOP1                                    0x4
#define STOP1_address                            0xFC7
#define STOP1_position                           0x4
#define STOP1_size                               0x1
#define STOP1_value_mask                         0x10
#define STOP1_clear_mask                         0xEF

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


/*------------------------------------------------------------#
| SSP1ADD                                               0xFC8 |
#-------------------------------------------------------------#
| MSK71 | MSK61 | MSK51 | MSK4 | MSK31 | MSK21 | MSK11 | MSK0 |
#-------------------------------------------------------------#
| 7     | 6     | 5     | 4    | 3     | 2     | 1     | 0    |
#------------------------------------------------------------*/

#define SSP1ADD                                  0x0
#define SSP1ADD_address                          0xFC8
#define SSP1ADD_position                         0x0
#define SSP1ADD_size                             0x8
#define SSP1ADD_value_mask                       0xFF
#define SSP1ADD_clear_mask                       0x0

#define MSK01                                    0x0
#define MSK01_address                            0xFC8
#define MSK01_position                           0x0
#define MSK01_size                               0x1
#define MSK01_value_mask                         0x1
#define MSK01_clear_mask                         0xFE

#define MSK0                                     0x0
#define MSK0_address                             0xFC8
#define MSK0_position                            0x0
#define MSK0_size                                0x1
#define MSK0_value_mask                          0x1
#define MSK0_clear_mask                          0xFE

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

#define MSK21                                    0x2
#define MSK21_address                            0xFC8
#define MSK21_position                           0x2
#define MSK21_size                               0x1
#define MSK21_value_mask                         0x4
#define MSK21_clear_mask                         0xFB

#define MSK2                                     0x2
#define MSK2_address                             0xFC8
#define MSK2_position                            0x2
#define MSK2_size                                0x1
#define MSK2_value_mask                          0x4
#define MSK2_clear_mask                          0xFB

#define MSK3                                     0x3
#define MSK3_address                             0xFC8
#define MSK3_position                            0x3
#define MSK3_size                                0x1
#define MSK3_value_mask                          0x8
#define MSK3_clear_mask                          0xF7

#define MSK31                                    0x3
#define MSK31_address                            0xFC8
#define MSK31_position                           0x3
#define MSK31_size                               0x1
#define MSK31_value_mask                         0x8
#define MSK31_clear_mask                         0xF7

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

#define MSK61                                    0x6
#define MSK61_address                            0xFC8
#define MSK61_position                           0x6
#define MSK61_size                               0x1
#define MSK61_value_mask                         0x40
#define MSK61_clear_mask                         0xBF

#define MSK6                                     0x6
#define MSK6_address                             0xFC8
#define MSK6_position                            0x6
#define MSK6_size                                0x1
#define MSK6_value_mask                          0x40
#define MSK6_clear_mask                          0xBF

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


/*-------------------------------------------------------#
| RCON                                             0xFD0 |
#--------------------------------------------------------#
| IPEN | - | RCON_CM | nRI | TO | NOT_PD | POR | NOT_BOR |
#--------------------------------------------------------#
| 7    | 6 | 5       | 4   | 3  | 2      | 1   | 0       |
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

#define RCON_CM                                  0x5
#define RCON_CM_address                          0xFD0
#define RCON_CM_position                         0x5
#define RCON_CM_size                             0x1
#define RCON_CM_value_mask                       0x20
#define RCON_CM_clear_mask                       0xDF

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
| ECON1                                           0xFD2 |
#-------------------------------------------------------#
| TXRST | RXRST | DMAST | CSUMEN | TXRTS | RXEN | - | - |
#-------------------------------------------------------#
| 7     | 6     | 5     | 4      | 3     | 2    | 1 | 0 |
#------------------------------------------------------*/

#define ECON1                                    0x0
#define ECON1_address                            0xFD2
#define ECON1_position                           0x0
#define ECON1_size                               0x8
#define ECON1_value_mask                         0xFF
#define ECON1_clear_mask                         0x0

#define RXEN                                     0x2
#define RXEN_address                             0xFD2
#define RXEN_position                            0x2
#define RXEN_size                                0x1
#define RXEN_value_mask                          0x4
#define RXEN_clear_mask                          0xFB

#define TXRTS                                    0x3
#define TXRTS_address                            0xFD2
#define TXRTS_position                           0x3
#define TXRTS_size                               0x1
#define TXRTS_value_mask                         0x8
#define TXRTS_clear_mask                         0xF7

#define CSUMEN                                   0x4
#define CSUMEN_address                           0xFD2
#define CSUMEN_position                          0x4
#define CSUMEN_size                              0x1
#define CSUMEN_value_mask                        0x10
#define CSUMEN_clear_mask                        0xEF

#define DMAST                                    0x5
#define DMAST_address                            0xFD2
#define DMAST_position                           0x5
#define DMAST_size                               0x1
#define DMAST_value_mask                         0x20
#define DMAST_clear_mask                         0xDF

#define RXRST                                    0x6
#define RXRST_address                            0xFD2
#define RXRST_position                           0x6
#define RXRST_size                               0x1
#define RXRST_value_mask                         0x40
#define RXRST_clear_mask                         0xBF

#define TXRST                                    0x7
#define TXRST_address                            0xFD2
#define TXRST_position                           0x7
#define TXRST_size                               0x1
#define TXRST_value_mask                         0x80
#define TXRST_clear_mask                         0x7F


/*-------------------------------------------#
| OSCCON                               0xFD3 |
#--------------------------------------------#
| IDLEN | - | - | - | OSTS | - | SCS1 | SCS0 |
#--------------------------------------------#
| 7     | 6 | 5 | 4 | 3    | 2 | 1    | 0    |
#-------------------------------------------*/

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

#endif // _PIC18F67J60_H_
