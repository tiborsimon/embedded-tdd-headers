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

#ifndef _PIC18LF4455_H_
#define _PIC18LF4455_H_


/*------------------------------#
| SPPDATA                 0xF62 |
#-------------------------------#
| DATA                          |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define SPPDATA                                  0x0
#define SPPDATA_address                          0xF62
#define SPPDATA_position                         0x0
#define SPPDATA_size                             0x8
#define SPPDATA_value_mask                       0xFF
#define SPPDATA_clear_mask                       0x0

#define DATA                                     0x0
#define DATA_address                             0xF62
#define DATA_position                            0x0
#define DATA_size                                0x8
#define DATA_value_mask                          0xFF
#define DATA_clear_mask                          0x0


/*----------------------------------------------------------#
| SPPCFG                                              0xF63 |
#-----------------------------------------------------------#
| CLKCFG1 | CLKCFG0 | CSEN | CLK1EN | WS3 | WS2 | WS1 | WS0 |
#-----------------------------------------------------------#
| 7       | 6       | 5    | 4      | 3   | 2   | 1   | 0   |
#----------------------------------------------------------*/

#define SPPCFG                                   0x0
#define SPPCFG_address                           0xF63
#define SPPCFG_position                          0x0
#define SPPCFG_size                              0x8
#define SPPCFG_value_mask                        0xFF
#define SPPCFG_clear_mask                        0x0

#define WS0                                      0x0
#define WS0_address                              0xF63
#define WS0_position                             0x0
#define WS0_size                                 0x1
#define WS0_value_mask                           0x1
#define WS0_clear_mask                           0xFE

#define WS                                       0x0
#define WS_address                               0xF63
#define WS_position                              0x0
#define WS_size                                  0x4
#define WS_value_mask                            0xF
#define WS_clear_mask                            0xF0

#define WS1                                      0x1
#define WS1_address                              0xF63
#define WS1_position                             0x1
#define WS1_size                                 0x1
#define WS1_value_mask                           0x2
#define WS1_clear_mask                           0xFD

#define WS2                                      0x2
#define WS2_address                              0xF63
#define WS2_position                             0x2
#define WS2_size                                 0x1
#define WS2_value_mask                           0x4
#define WS2_clear_mask                           0xFB

#define WS3                                      0x3
#define WS3_address                              0xF63
#define WS3_position                             0x3
#define WS3_size                                 0x1
#define WS3_value_mask                           0x8
#define WS3_clear_mask                           0xF7

#define CLK1EN                                   0x4
#define CLK1EN_address                           0xF63
#define CLK1EN_position                          0x4
#define CLK1EN_size                              0x1
#define CLK1EN_value_mask                        0x10
#define CLK1EN_clear_mask                        0xEF

#define CSEN                                     0x5
#define CSEN_address                             0xF63
#define CSEN_position                            0x5
#define CSEN_size                                0x1
#define CSEN_value_mask                          0x20
#define CSEN_clear_mask                          0xDF

#define CLKCFG                                   0x6
#define CLKCFG_address                           0xF63
#define CLKCFG_position                          0x6
#define CLKCFG_size                              0x2
#define CLKCFG_value_mask                        0xC0
#define CLKCFG_clear_mask                        0x3F

#define CLKCFG0                                  0x6
#define CLKCFG0_address                          0xF63
#define CLKCFG0_position                         0x6
#define CLKCFG0_size                             0x1
#define CLKCFG0_value_mask                       0x40
#define CLKCFG0_clear_mask                       0xBF

#define CLKCFG1                                  0x7
#define CLKCFG1_address                          0xF63
#define CLKCFG1_position                         0x7
#define CLKCFG1_size                             0x1
#define CLKCFG1_value_mask                       0x80
#define CLKCFG1_clear_mask                       0x7F


/*----------------------------------------------------------------------------------------#
| SPPEPS                                                                            0xF64 |
#-----------------------------------------------------------------------------------------#
| RDSPP | WRSPP | - | SPPBUSY | SPPEPS_ADDR3 | SPPEPS_ADDR2 | SPPEPS_ADDR1 | SPPEPS_ADDR0 |
#-----------------------------------------------------------------------------------------#
| 7     | 6     | 5 | 4       | 3            | 2            | 1            | 0            |
#----------------------------------------------------------------------------------------*/

#define SPPEPS                                   0x0
#define SPPEPS_address                           0xF64
#define SPPEPS_position                          0x0
#define SPPEPS_size                              0x8
#define SPPEPS_value_mask                        0xFF
#define SPPEPS_clear_mask                        0x0

#define SPPEPS_ADDR0                             0x0
#define SPPEPS_ADDR0_address                     0xF64
#define SPPEPS_ADDR0_position                    0x0
#define SPPEPS_ADDR0_size                        0x1
#define SPPEPS_ADDR0_value_mask                  0x1
#define SPPEPS_ADDR0_clear_mask                  0xFE

#define SPPEPS_ADDR                              0x0
#define SPPEPS_ADDR_address                      0xF64
#define SPPEPS_ADDR_position                     0x0
#define SPPEPS_ADDR_size                         0x4
#define SPPEPS_ADDR_value_mask                   0xF
#define SPPEPS_ADDR_clear_mask                   0xF0

#define SPPEPS_ADDR1                             0x1
#define SPPEPS_ADDR1_address                     0xF64
#define SPPEPS_ADDR1_position                    0x1
#define SPPEPS_ADDR1_size                        0x1
#define SPPEPS_ADDR1_value_mask                  0x2
#define SPPEPS_ADDR1_clear_mask                  0xFD

#define SPPEPS_ADDR2                             0x2
#define SPPEPS_ADDR2_address                     0xF64
#define SPPEPS_ADDR2_position                    0x2
#define SPPEPS_ADDR2_size                        0x1
#define SPPEPS_ADDR2_value_mask                  0x4
#define SPPEPS_ADDR2_clear_mask                  0xFB

#define SPPEPS_ADDR3                             0x3
#define SPPEPS_ADDR3_address                     0xF64
#define SPPEPS_ADDR3_position                    0x3
#define SPPEPS_ADDR3_size                        0x1
#define SPPEPS_ADDR3_value_mask                  0x8
#define SPPEPS_ADDR3_clear_mask                  0xF7

#define SPPBUSY                                  0x4
#define SPPBUSY_address                          0xF64
#define SPPBUSY_position                         0x4
#define SPPBUSY_size                             0x1
#define SPPBUSY_value_mask                       0x10
#define SPPBUSY_clear_mask                       0xEF

#define BUSY                                     0x4
#define BUSY_address                             0xF64
#define BUSY_position                            0x4
#define BUSY_size                                0x1
#define BUSY_value_mask                          0x10
#define BUSY_clear_mask                          0xEF

#define WRSPP                                    0x6
#define WRSPP_address                            0xF64
#define WRSPP_position                           0x6
#define WRSPP_size                               0x1
#define WRSPP_value_mask                         0x40
#define WRSPP_clear_mask                         0xBF

#define RDSPP                                    0x7
#define RDSPP_address                            0xF64
#define RDSPP_position                           0x7
#define RDSPP_size                               0x1
#define RDSPP_value_mask                         0x80
#define RDSPP_clear_mask                         0x7F


/*---------------------------------------#
| SPPCON                           0xF65 |
#----------------------------------------#
| - | - | - | - | - | - | SPPOWN | SPPEN |
#----------------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1      | 0     |
#---------------------------------------*/

#define SPPCON                                   0x0
#define SPPCON_address                           0xF65
#define SPPCON_position                          0x0
#define SPPCON_size                              0x8
#define SPPCON_value_mask                        0xFF
#define SPPCON_clear_mask                        0x0

#define SPPEN                                    0x0
#define SPPEN_address                            0xF65
#define SPPEN_position                           0x0
#define SPPEN_size                               0x1
#define SPPEN_value_mask                         0x1
#define SPPEN_clear_mask                         0xFE

#define SPPOWN                                   0x1
#define SPPOWN_address                           0xF65
#define SPPOWN_position                          0x1
#define SPPOWN_size                              0x1
#define SPPOWN_value_mask                        0x2
#define SPPOWN_clear_mask                        0xFD


/*------------------------------------------------------#
| UFRML                                           0xF66 |
#-------------------------------------------------------#
| FRM7 | FRM6 | FRM5 | FRM4 | FRM3 | FRM2 | FRM1 | FRM0 |
#-------------------------------------------------------#
| 7    | 6    | 5    | 4    | 3    | 2    | 1    | 0    |
#------------------------------------------------------*/

#define UFRML                                    0x0
#define UFRML_address                            0xF66
#define UFRML_position                           0x0
#define UFRML_size                               0x8
#define UFRML_value_mask                         0xFF
#define UFRML_clear_mask                         0x0

#define FRML                                     0x0
#define FRML_address                             0xF66
#define FRML_position                            0x0
#define FRML_size                                0x8
#define FRML_value_mask                          0xFF
#define FRML_clear_mask                          0x0

#define FRM0                                     0x0
#define FRM0_address                             0xF66
#define FRM0_position                            0x0
#define FRM0_size                                0x1
#define FRM0_value_mask                          0x1
#define FRM0_clear_mask                          0xFE

#define UFRML_FRM                                0x0
#define UFRML_FRM_address                        0xF66
#define UFRML_FRM_position                       0x0
#define UFRML_FRM_size                           0x8
#define UFRML_FRM_value_mask                     0xFF
#define UFRML_FRM_clear_mask                     0x0

#define FRM1                                     0x1
#define FRM1_address                             0xF66
#define FRM1_position                            0x1
#define FRM1_size                                0x1
#define FRM1_value_mask                          0x2
#define FRM1_clear_mask                          0xFD

#define FRM2                                     0x2
#define FRM2_address                             0xF66
#define FRM2_position                            0x2
#define FRM2_size                                0x1
#define FRM2_value_mask                          0x4
#define FRM2_clear_mask                          0xFB

#define FRM3                                     0x3
#define FRM3_address                             0xF66
#define FRM3_position                            0x3
#define FRM3_size                                0x1
#define FRM3_value_mask                          0x8
#define FRM3_clear_mask                          0xF7

#define FRM4                                     0x4
#define FRM4_address                             0xF66
#define FRM4_position                            0x4
#define FRM4_size                                0x1
#define FRM4_value_mask                          0x10
#define FRM4_clear_mask                          0xEF

#define FRM5                                     0x5
#define FRM5_address                             0xF66
#define FRM5_position                            0x5
#define FRM5_size                                0x1
#define FRM5_value_mask                          0x20
#define FRM5_clear_mask                          0xDF

#define FRM6                                     0x6
#define FRM6_address                             0xF66
#define FRM6_position                            0x6
#define FRM6_size                                0x1
#define FRM6_value_mask                          0x40
#define FRM6_clear_mask                          0xBF

#define FRM7                                     0x7
#define FRM7_address                             0xF66
#define FRM7_position                            0x7
#define FRM7_size                                0x1
#define FRM7_value_mask                          0x80
#define FRM7_clear_mask                          0x7F


/*----------------------------------------#
| UFRMH                             0xF67 |
#-----------------------------------------#
| - | - | - | - | - | FRM10 | FRM9 | FRM8 |
#-----------------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2     | 1    | 0    |
#----------------------------------------*/

#define UFRMH                                    0x0
#define UFRMH_address                            0xF67
#define UFRMH_position                           0x0
#define UFRMH_size                               0x8
#define UFRMH_value_mask                         0xFF
#define UFRMH_clear_mask                         0x0

#define FRM8                                     0x0
#define FRM8_address                             0xF67
#define FRM8_position                            0x0
#define FRM8_size                                0x1
#define FRM8_value_mask                          0x1
#define FRM8_clear_mask                          0xFE

#define UFRMH_FRM                                0x0
#define UFRMH_FRM_address                        0xF67
#define UFRMH_FRM_position                       0x0
#define UFRMH_FRM_size                           0x3
#define UFRMH_FRM_value_mask                     0x7
#define UFRMH_FRM_clear_mask                     0xF8

#define FRM9                                     0x1
#define FRM9_address                             0xF67
#define FRM9_position                            0x1
#define FRM9_size                                0x1
#define FRM9_value_mask                          0x2
#define FRM9_clear_mask                          0xFD

#define FRM10                                    0x2
#define FRM10_address                            0xF67
#define FRM10_position                           0x2
#define FRM10_size                               0x1
#define FRM10_value_mask                         0x4
#define FRM10_clear_mask                         0xFB


/*----------------------------------------------------------------#
| UIR                                                       0xF68 |
#-----------------------------------------------------------------#
| - | SOFIF | STALLIF | IDLEIF | TRNIF | ACTVIF | UERRIF | URSTIF |
#-----------------------------------------------------------------#
| 7 | 6     | 5       | 4      | 3     | 2      | 1      | 0      |
#----------------------------------------------------------------*/

#define UIR                                      0x0
#define UIR_address                              0xF68
#define UIR_position                             0x0
#define UIR_size                                 0x8
#define UIR_value_mask                           0xFF
#define UIR_clear_mask                           0x0

#define URSTIF                                   0x0
#define URSTIF_address                           0xF68
#define URSTIF_position                          0x0
#define URSTIF_size                              0x1
#define URSTIF_value_mask                        0x1
#define URSTIF_clear_mask                        0xFE

#define UERRIF                                   0x1
#define UERRIF_address                           0xF68
#define UERRIF_position                          0x1
#define UERRIF_size                              0x1
#define UERRIF_value_mask                        0x2
#define UERRIF_clear_mask                        0xFD

#define ACTVIF                                   0x2
#define ACTVIF_address                           0xF68
#define ACTVIF_position                          0x2
#define ACTVIF_size                              0x1
#define ACTVIF_value_mask                        0x4
#define ACTVIF_clear_mask                        0xFB

#define TRNIF                                    0x3
#define TRNIF_address                            0xF68
#define TRNIF_position                           0x3
#define TRNIF_size                               0x1
#define TRNIF_value_mask                         0x8
#define TRNIF_clear_mask                         0xF7

#define IDLEIF                                   0x4
#define IDLEIF_address                           0xF68
#define IDLEIF_position                          0x4
#define IDLEIF_size                              0x1
#define IDLEIF_value_mask                        0x10
#define IDLEIF_clear_mask                        0xEF

#define STALLIF                                  0x5
#define STALLIF_address                          0xF68
#define STALLIF_position                         0x5
#define STALLIF_size                             0x1
#define STALLIF_value_mask                       0x20
#define STALLIF_clear_mask                       0xDF

#define SOFIF                                    0x6
#define SOFIF_address                            0xF68
#define SOFIF_position                           0x6
#define SOFIF_size                               0x1
#define SOFIF_value_mask                         0x40
#define SOFIF_clear_mask                         0xBF


/*----------------------------------------------------------------#
| UIE                                                       0xF69 |
#-----------------------------------------------------------------#
| - | SOFIE | STALLIE | IDLEIE | TRNIE | ACTVIE | UERRIE | URSTIE |
#-----------------------------------------------------------------#
| 7 | 6     | 5       | 4      | 3     | 2      | 1      | 0      |
#----------------------------------------------------------------*/

#define UIE                                      0x0
#define UIE_address                              0xF69
#define UIE_position                             0x0
#define UIE_size                                 0x8
#define UIE_value_mask                           0xFF
#define UIE_clear_mask                           0x0

#define URSTIE                                   0x0
#define URSTIE_address                           0xF69
#define URSTIE_position                          0x0
#define URSTIE_size                              0x1
#define URSTIE_value_mask                        0x1
#define URSTIE_clear_mask                        0xFE

#define UERRIE                                   0x1
#define UERRIE_address                           0xF69
#define UERRIE_position                          0x1
#define UERRIE_size                              0x1
#define UERRIE_value_mask                        0x2
#define UERRIE_clear_mask                        0xFD

#define ACTVIE                                   0x2
#define ACTVIE_address                           0xF69
#define ACTVIE_position                          0x2
#define ACTVIE_size                              0x1
#define ACTVIE_value_mask                        0x4
#define ACTVIE_clear_mask                        0xFB

#define TRNIE                                    0x3
#define TRNIE_address                            0xF69
#define TRNIE_position                           0x3
#define TRNIE_size                               0x1
#define TRNIE_value_mask                         0x8
#define TRNIE_clear_mask                         0xF7

#define IDLEIE                                   0x4
#define IDLEIE_address                           0xF69
#define IDLEIE_position                          0x4
#define IDLEIE_size                              0x1
#define IDLEIE_value_mask                        0x10
#define IDLEIE_clear_mask                        0xEF

#define STALLIE                                  0x5
#define STALLIE_address                          0xF69
#define STALLIE_position                         0x5
#define STALLIE_size                             0x1
#define STALLIE_value_mask                       0x20
#define STALLIE_clear_mask                       0xDF

#define SOFIE                                    0x6
#define SOFIE_address                            0xF69
#define SOFIE_position                           0x6
#define SOFIE_size                               0x1
#define SOFIE_value_mask                         0x40
#define SOFIE_clear_mask                         0xBF


/*----------------------------------------------------------#
| UEIR                                                0xF6A |
#-----------------------------------------------------------#
| BTSEF | - | - | BTOEF | DFN8EF | CRC16EF | CRC5EF | PIDEF |
#-----------------------------------------------------------#
| 7     | 6 | 5 | 4     | 3      | 2       | 1      | 0     |
#----------------------------------------------------------*/

#define UEIR                                     0x0
#define UEIR_address                             0xF6A
#define UEIR_position                            0x0
#define UEIR_size                                0x8
#define UEIR_value_mask                          0xFF
#define UEIR_clear_mask                          0x0

#define PIDEF                                    0x0
#define PIDEF_address                            0xF6A
#define PIDEF_position                           0x0
#define PIDEF_size                               0x1
#define PIDEF_value_mask                         0x1
#define PIDEF_clear_mask                         0xFE

#define CRC5EF                                   0x1
#define CRC5EF_address                           0xF6A
#define CRC5EF_position                          0x1
#define CRC5EF_size                              0x1
#define CRC5EF_value_mask                        0x2
#define CRC5EF_clear_mask                        0xFD

#define CRC16EF                                  0x2
#define CRC16EF_address                          0xF6A
#define CRC16EF_position                         0x2
#define CRC16EF_size                             0x1
#define CRC16EF_value_mask                       0x4
#define CRC16EF_clear_mask                       0xFB

#define DFN8EF                                   0x3
#define DFN8EF_address                           0xF6A
#define DFN8EF_position                          0x3
#define DFN8EF_size                              0x1
#define DFN8EF_value_mask                        0x8
#define DFN8EF_clear_mask                        0xF7

#define BTOEF                                    0x4
#define BTOEF_address                            0xF6A
#define BTOEF_position                           0x4
#define BTOEF_size                               0x1
#define BTOEF_value_mask                         0x10
#define BTOEF_clear_mask                         0xEF

#define BTSEF                                    0x7
#define BTSEF_address                            0xF6A
#define BTSEF_position                           0x7
#define BTSEF_size                               0x1
#define BTSEF_value_mask                         0x80
#define BTSEF_clear_mask                         0x7F


/*----------------------------------------------------------#
| UEIE                                                0xF6B |
#-----------------------------------------------------------#
| BTSEE | - | - | BTOEE | DFN8EE | CRC16EE | CRC5EE | PIDEE |
#-----------------------------------------------------------#
| 7     | 6 | 5 | 4     | 3      | 2       | 1      | 0     |
#----------------------------------------------------------*/

#define UEIE                                     0x0
#define UEIE_address                             0xF6B
#define UEIE_position                            0x0
#define UEIE_size                                0x8
#define UEIE_value_mask                          0xFF
#define UEIE_clear_mask                          0x0

#define PIDEE                                    0x0
#define PIDEE_address                            0xF6B
#define PIDEE_position                           0x0
#define PIDEE_size                               0x1
#define PIDEE_value_mask                         0x1
#define PIDEE_clear_mask                         0xFE

#define CRC5EE                                   0x1
#define CRC5EE_address                           0xF6B
#define CRC5EE_position                          0x1
#define CRC5EE_size                              0x1
#define CRC5EE_value_mask                        0x2
#define CRC5EE_clear_mask                        0xFD

#define CRC16EE                                  0x2
#define CRC16EE_address                          0xF6B
#define CRC16EE_position                         0x2
#define CRC16EE_size                             0x1
#define CRC16EE_value_mask                       0x4
#define CRC16EE_clear_mask                       0xFB

#define DFN8EE                                   0x3
#define DFN8EE_address                           0xF6B
#define DFN8EE_position                          0x3
#define DFN8EE_size                              0x1
#define DFN8EE_value_mask                        0x8
#define DFN8EE_clear_mask                        0xF7

#define BTOEE                                    0x4
#define BTOEE_address                            0xF6B
#define BTOEE_position                           0x4
#define BTOEE_size                               0x1
#define BTOEE_value_mask                         0x10
#define BTOEE_clear_mask                         0xEF

#define BTSEE                                    0x7
#define BTSEE_address                            0xF6B
#define BTSEE_position                           0x7
#define BTSEE_size                               0x1
#define BTSEE_value_mask                         0x80
#define BTSEE_clear_mask                         0x7F


/*---------------------------------------------------#
| USTAT                                        0xF6C |
#----------------------------------------------------#
| - | ENDP3 | ENDP2 | ENDP1 | ENDP0 | DIR | PPBI | - |
#----------------------------------------------------#
| 7 | 6     | 5     | 4     | 3     | 2   | 1    | 0 |
#---------------------------------------------------*/

#define USTAT                                    0x0
#define USTAT_address                            0xF6C
#define USTAT_position                           0x0
#define USTAT_size                               0x8
#define USTAT_value_mask                         0xFF
#define USTAT_clear_mask                         0x0

#define PPBI                                     0x1
#define PPBI_address                             0xF6C
#define PPBI_position                            0x1
#define PPBI_size                                0x1
#define PPBI_value_mask                          0x2
#define PPBI_clear_mask                          0xFD

#define DIR                                      0x2
#define DIR_address                              0xF6C
#define DIR_position                             0x2
#define DIR_size                                 0x1
#define DIR_value_mask                           0x4
#define DIR_clear_mask                           0xFB

#define ENDP                                     0x3
#define ENDP_address                             0xF6C
#define ENDP_position                            0x3
#define ENDP_size                                0x4
#define ENDP_value_mask                          0x78
#define ENDP_clear_mask                          0x87

#define ENDP0                                    0x3
#define ENDP0_address                            0xF6C
#define ENDP0_position                           0x3
#define ENDP0_size                               0x1
#define ENDP0_value_mask                         0x8
#define ENDP0_clear_mask                         0xF7

#define ENDP1                                    0x4
#define ENDP1_address                            0xF6C
#define ENDP1_position                           0x4
#define ENDP1_size                               0x1
#define ENDP1_value_mask                         0x10
#define ENDP1_clear_mask                         0xEF

#define ENDP2                                    0x5
#define ENDP2_address                            0xF6C
#define ENDP2_position                           0x5
#define ENDP2_size                               0x1
#define ENDP2_value_mask                         0x20
#define ENDP2_clear_mask                         0xDF

#define ENDP3                                    0x6
#define ENDP3_address                            0xF6C
#define ENDP3_position                           0x6
#define ENDP3_size                               0x1
#define ENDP3_value_mask                         0x40
#define ENDP3_clear_mask                         0xBF


/*--------------------------------------------------------#
| UCON                                              0xF6D |
#---------------------------------------------------------#
| - | PPBRST | SE0 | PKTDIS | USBEN | RESUME | SUSPND | - |
#---------------------------------------------------------#
| 7 | 6      | 5   | 4      | 3     | 2      | 1      | 0 |
#--------------------------------------------------------*/

#define UCON                                     0x0
#define UCON_address                             0xF6D
#define UCON_position                            0x0
#define UCON_size                                0x8
#define UCON_value_mask                          0xFF
#define UCON_clear_mask                          0x0

#define SUSPND                                   0x1
#define SUSPND_address                           0xF6D
#define SUSPND_position                          0x1
#define SUSPND_size                              0x1
#define SUSPND_value_mask                        0x2
#define SUSPND_clear_mask                        0xFD

#define RESUME                                   0x2
#define RESUME_address                           0xF6D
#define RESUME_position                          0x2
#define RESUME_size                              0x1
#define RESUME_value_mask                        0x4
#define RESUME_clear_mask                        0xFB

#define USBEN                                    0x3
#define USBEN_address                            0xF6D
#define USBEN_position                           0x3
#define USBEN_size                               0x1
#define USBEN_value_mask                         0x8
#define USBEN_clear_mask                         0xF7

#define PKTDIS                                   0x4
#define PKTDIS_address                           0xF6D
#define PKTDIS_position                          0x4
#define PKTDIS_size                              0x1
#define PKTDIS_value_mask                        0x10
#define PKTDIS_clear_mask                        0xEF

#define SE0                                      0x5
#define SE0_address                              0xF6D
#define SE0_position                             0x5
#define SE0_size                                 0x1
#define SE0_value_mask                           0x20
#define SE0_clear_mask                           0xDF

#define PPBRST                                   0x6
#define PPBRST_address                           0xF6D
#define PPBRST_position                          0x6
#define PPBRST_size                              0x1
#define PPBRST_value_mask                        0x40
#define PPBRST_clear_mask                        0xBF


/*----------------------------------------------------------------------------------#
| UADDR                                                                       0xF6E |
#-----------------------------------------------------------------------------------#
| - | ADDR6 | ADDR5 | ADDR4 | UADDR_ADDR3 | UADDR_ADDR2 | UADDR_ADDR1 | UADDR_ADDR0 |
#-----------------------------------------------------------------------------------#
| 7 | 6     | 5     | 4     | 3           | 2           | 1           | 0           |
#----------------------------------------------------------------------------------*/

#define UADDR                                    0x0
#define UADDR_address                            0xF6E
#define UADDR_position                           0x0
#define UADDR_size                               0x8
#define UADDR_value_mask                         0xFF
#define UADDR_clear_mask                         0x0

#define UADDR_ADDR0                              0x0
#define UADDR_ADDR0_address                      0xF6E
#define UADDR_ADDR0_position                     0x0
#define UADDR_ADDR0_size                         0x1
#define UADDR_ADDR0_value_mask                   0x1
#define UADDR_ADDR0_clear_mask                   0xFE

#define UADDR_ADDR                               0x0
#define UADDR_ADDR_address                       0xF6E
#define UADDR_ADDR_position                      0x0
#define UADDR_ADDR_size                          0x7
#define UADDR_ADDR_value_mask                    0x7F
#define UADDR_ADDR_clear_mask                    0x80

#define UADDR_ADDR1                              0x1
#define UADDR_ADDR1_address                      0xF6E
#define UADDR_ADDR1_position                     0x1
#define UADDR_ADDR1_size                         0x1
#define UADDR_ADDR1_value_mask                   0x2
#define UADDR_ADDR1_clear_mask                   0xFD

#define UADDR_ADDR2                              0x2
#define UADDR_ADDR2_address                      0xF6E
#define UADDR_ADDR2_position                     0x2
#define UADDR_ADDR2_size                         0x1
#define UADDR_ADDR2_value_mask                   0x4
#define UADDR_ADDR2_clear_mask                   0xFB

#define UADDR_ADDR3                              0x3
#define UADDR_ADDR3_address                      0xF6E
#define UADDR_ADDR3_position                     0x3
#define UADDR_ADDR3_size                         0x1
#define UADDR_ADDR3_value_mask                   0x8
#define UADDR_ADDR3_clear_mask                   0xF7

#define ADDR4                                    0x4
#define ADDR4_address                            0xF6E
#define ADDR4_position                           0x4
#define ADDR4_size                               0x1
#define ADDR4_value_mask                         0x10
#define ADDR4_clear_mask                         0xEF

#define ADDR5                                    0x5
#define ADDR5_address                            0xF6E
#define ADDR5_position                           0x5
#define ADDR5_size                               0x1
#define ADDR5_value_mask                         0x20
#define ADDR5_clear_mask                         0xDF

#define ADDR6                                    0x6
#define ADDR6_address                            0xF6E
#define ADDR6_position                           0x6
#define ADDR6_size                               0x1
#define ADDR6_value_mask                         0x40
#define ADDR6_clear_mask                         0xBF


/*---------------------------------------------------------#
| UCFG                                               0xF6F |
#----------------------------------------------------------#
| UTEYE | UOEMON | - | UPUEN | UTRDIS | FSEN | UPP1 | PPB0 |
#----------------------------------------------------------#
| 7     | 6      | 5 | 4     | 3      | 2    | 1    | 0    |
#---------------------------------------------------------*/

#define UCFG                                     0x0
#define UCFG_address                             0xF6F
#define UCFG_position                            0x0
#define UCFG_size                                0x8
#define UCFG_value_mask                          0xFF
#define UCFG_clear_mask                          0x0

#define PPB                                      0x0
#define PPB_address                              0xF6F
#define PPB_position                             0x0
#define PPB_size                                 0x2
#define PPB_value_mask                           0x3
#define PPB_clear_mask                           0xFC

#define UPP0                                     0x0
#define UPP0_address                             0xF6F
#define UPP0_position                            0x0
#define UPP0_size                                0x1
#define UPP0_value_mask                          0x1
#define UPP0_clear_mask                          0xFE

#define PPB0                                     0x0
#define PPB0_address                             0xF6F
#define PPB0_position                            0x0
#define PPB0_size                                0x1
#define PPB0_value_mask                          0x1
#define PPB0_clear_mask                          0xFE

#define UPP1                                     0x1
#define UPP1_address                             0xF6F
#define UPP1_position                            0x1
#define UPP1_size                                0x1
#define UPP1_value_mask                          0x2
#define UPP1_clear_mask                          0xFD

#define PPB1                                     0x1
#define PPB1_address                             0xF6F
#define PPB1_position                            0x1
#define PPB1_size                                0x1
#define PPB1_value_mask                          0x2
#define PPB1_clear_mask                          0xFD

#define FSEN                                     0x2
#define FSEN_address                             0xF6F
#define FSEN_position                            0x2
#define FSEN_size                                0x1
#define FSEN_value_mask                          0x4
#define FSEN_clear_mask                          0xFB

#define UTRDIS                                   0x3
#define UTRDIS_address                           0xF6F
#define UTRDIS_position                          0x3
#define UTRDIS_size                              0x1
#define UTRDIS_value_mask                        0x8
#define UTRDIS_clear_mask                        0xF7

#define UPUEN                                    0x4
#define UPUEN_address                            0xF6F
#define UPUEN_position                           0x4
#define UPUEN_size                               0x1
#define UPUEN_value_mask                         0x10
#define UPUEN_clear_mask                         0xEF

#define UOEMON                                   0x6
#define UOEMON_address                           0xF6F
#define UOEMON_position                          0x6
#define UOEMON_size                              0x1
#define UOEMON_value_mask                        0x40
#define UOEMON_clear_mask                        0xBF

#define UTEYE                                    0x7
#define UTEYE_address                            0xF6F
#define UTEYE_position                           0x7
#define UTEYE_size                               0x1
#define UTEYE_value_mask                         0x80
#define UTEYE_clear_mask                         0x7F


/*--------------------------------------------------------------------------------#
| UEP0                                                                      0xF70 |
#---------------------------------------------------------------------------------#
| - | - | - | UEP0_EPHSHK | UEP0_EPCONDIS | EP0OUTEN | UEP0_EPINEN | UEP0_EPSTALL |
#---------------------------------------------------------------------------------#
| 7 | 6 | 5 | 4           | 3             | 2        | 1           | 0            |
#--------------------------------------------------------------------------------*/

#define UEP0                                     0x0
#define UEP0_address                             0xF70
#define UEP0_position                            0x0
#define UEP0_size                                0x8
#define UEP0_value_mask                          0xFF
#define UEP0_clear_mask                          0x0

#define UEP0_EPSTALL                             0x0
#define UEP0_EPSTALL_address                     0xF70
#define UEP0_EPSTALL_position                    0x0
#define UEP0_EPSTALL_size                        0x1
#define UEP0_EPSTALL_value_mask                  0x1
#define UEP0_EPSTALL_clear_mask                  0xFE

#define EP0STALL                                 0x0
#define EP0STALL_address                         0xF70
#define EP0STALL_position                        0x0
#define EP0STALL_size                            0x1
#define EP0STALL_value_mask                      0x1
#define EP0STALL_clear_mask                      0xFE

#define EPSTALL0                                 0x0
#define EPSTALL0_address                         0xF70
#define EPSTALL0_position                        0x0
#define EPSTALL0_size                            0x1
#define EPSTALL0_value_mask                      0x1
#define EPSTALL0_clear_mask                      0xFE

#define UEP0_EPINEN                              0x1
#define UEP0_EPINEN_address                      0xF70
#define UEP0_EPINEN_position                     0x1
#define UEP0_EPINEN_size                         0x1
#define UEP0_EPINEN_value_mask                   0x2
#define UEP0_EPINEN_clear_mask                   0xFD

#define EPINEN0                                  0x1
#define EPINEN0_address                          0xF70
#define EPINEN0_position                         0x1
#define EPINEN0_size                             0x1
#define EPINEN0_value_mask                       0x2
#define EPINEN0_clear_mask                       0xFD

#define EP0INEN                                  0x1
#define EP0INEN_address                          0xF70
#define EP0INEN_position                         0x1
#define EP0INEN_size                             0x1
#define EP0INEN_value_mask                       0x2
#define EP0INEN_clear_mask                       0xFD

#define UEP0_EPOUTEN                             0x2
#define UEP0_EPOUTEN_address                     0xF70
#define UEP0_EPOUTEN_position                    0x2
#define UEP0_EPOUTEN_size                        0x1
#define UEP0_EPOUTEN_value_mask                  0x4
#define UEP0_EPOUTEN_clear_mask                  0xFB

#define EP0OUTEN                                 0x2
#define EP0OUTEN_address                         0xF70
#define EP0OUTEN_position                        0x2
#define EP0OUTEN_size                            0x1
#define EP0OUTEN_value_mask                      0x4
#define EP0OUTEN_clear_mask                      0xFB

#define EPOUTEN0                                 0x2
#define EPOUTEN0_address                         0xF70
#define EPOUTEN0_position                        0x2
#define EPOUTEN0_size                            0x1
#define EPOUTEN0_value_mask                      0x4
#define EPOUTEN0_clear_mask                      0xFB

#define EPCONDIS0                                0x3
#define EPCONDIS0_address                        0xF70
#define EPCONDIS0_position                       0x3
#define EPCONDIS0_size                           0x1
#define EPCONDIS0_value_mask                     0x8
#define EPCONDIS0_clear_mask                     0xF7

#define EP0CONDIS                                0x3
#define EP0CONDIS_address                        0xF70
#define EP0CONDIS_position                       0x3
#define EP0CONDIS_size                           0x1
#define EP0CONDIS_value_mask                     0x8
#define EP0CONDIS_clear_mask                     0xF7

#define UEP0_EPCONDIS                            0x3
#define UEP0_EPCONDIS_address                    0xF70
#define UEP0_EPCONDIS_position                   0x3
#define UEP0_EPCONDIS_size                       0x1
#define UEP0_EPCONDIS_value_mask                 0x8
#define UEP0_EPCONDIS_clear_mask                 0xF7

#define UEP0_EPHSHK                              0x4
#define UEP0_EPHSHK_address                      0xF70
#define UEP0_EPHSHK_position                     0x4
#define UEP0_EPHSHK_size                         0x1
#define UEP0_EPHSHK_value_mask                   0x10
#define UEP0_EPHSHK_clear_mask                   0xEF

#define EP0HSHK                                  0x4
#define EP0HSHK_address                          0xF70
#define EP0HSHK_position                         0x4
#define EP0HSHK_size                             0x1
#define EP0HSHK_value_mask                       0x10
#define EP0HSHK_clear_mask                       0xEF

#define EPHSHK0                                  0x4
#define EPHSHK0_address                          0xF70
#define EPHSHK0_position                         0x4
#define EPHSHK0_size                             0x1
#define EPHSHK0_value_mask                       0x10
#define EPHSHK0_clear_mask                       0xEF


/*------------------------------------------------------------------------#
| UEP1                                                              0xF71 |
#-------------------------------------------------------------------------#
| - | - | - | UEP1_EPHSHK | UEP1_EPCONDIS | EP1OUTEN | EP1INEN | EPSTALL1 |
#-------------------------------------------------------------------------#
| 7 | 6 | 5 | 4           | 3             | 2        | 1       | 0        |
#------------------------------------------------------------------------*/

#define UEP1                                     0x0
#define UEP1_address                             0xF71
#define UEP1_position                            0x0
#define UEP1_size                                0x8
#define UEP1_value_mask                          0xFF
#define UEP1_clear_mask                          0x0

#define EPSTALL1                                 0x0
#define EPSTALL1_address                         0xF71
#define EPSTALL1_position                        0x0
#define EPSTALL1_size                            0x1
#define EPSTALL1_value_mask                      0x1
#define EPSTALL1_clear_mask                      0xFE

#define EP1STALL                                 0x0
#define EP1STALL_address                         0xF71
#define EP1STALL_position                        0x0
#define EP1STALL_size                            0x1
#define EP1STALL_value_mask                      0x1
#define EP1STALL_clear_mask                      0xFE

#define UEP1_EPSTALL                             0x0
#define UEP1_EPSTALL_address                     0xF71
#define UEP1_EPSTALL_position                    0x0
#define UEP1_EPSTALL_size                        0x1
#define UEP1_EPSTALL_value_mask                  0x1
#define UEP1_EPSTALL_clear_mask                  0xFE

#define EPINEN1                                  0x1
#define EPINEN1_address                          0xF71
#define EPINEN1_position                         0x1
#define EPINEN1_size                             0x1
#define EPINEN1_value_mask                       0x2
#define EPINEN1_clear_mask                       0xFD

#define EP1INEN                                  0x1
#define EP1INEN_address                          0xF71
#define EP1INEN_position                         0x1
#define EP1INEN_size                             0x1
#define EP1INEN_value_mask                       0x2
#define EP1INEN_clear_mask                       0xFD

#define UEP1_EPINEN                              0x1
#define UEP1_EPINEN_address                      0xF71
#define UEP1_EPINEN_position                     0x1
#define UEP1_EPINEN_size                         0x1
#define UEP1_EPINEN_value_mask                   0x2
#define UEP1_EPINEN_clear_mask                   0xFD

#define EPOUTEN1                                 0x2
#define EPOUTEN1_address                         0xF71
#define EPOUTEN1_position                        0x2
#define EPOUTEN1_size                            0x1
#define EPOUTEN1_value_mask                      0x4
#define EPOUTEN1_clear_mask                      0xFB

#define UEP1_EPOUTEN                             0x2
#define UEP1_EPOUTEN_address                     0xF71
#define UEP1_EPOUTEN_position                    0x2
#define UEP1_EPOUTEN_size                        0x1
#define UEP1_EPOUTEN_value_mask                  0x4
#define UEP1_EPOUTEN_clear_mask                  0xFB

#define EP1OUTEN                                 0x2
#define EP1OUTEN_address                         0xF71
#define EP1OUTEN_position                        0x2
#define EP1OUTEN_size                            0x1
#define EP1OUTEN_value_mask                      0x4
#define EP1OUTEN_clear_mask                      0xFB

#define UEP1_EPCONDIS                            0x3
#define UEP1_EPCONDIS_address                    0xF71
#define UEP1_EPCONDIS_position                   0x3
#define UEP1_EPCONDIS_size                       0x1
#define UEP1_EPCONDIS_value_mask                 0x8
#define UEP1_EPCONDIS_clear_mask                 0xF7

#define EP1CONDIS                                0x3
#define EP1CONDIS_address                        0xF71
#define EP1CONDIS_position                       0x3
#define EP1CONDIS_size                           0x1
#define EP1CONDIS_value_mask                     0x8
#define EP1CONDIS_clear_mask                     0xF7

#define EPCONDIS1                                0x3
#define EPCONDIS1_address                        0xF71
#define EPCONDIS1_position                       0x3
#define EPCONDIS1_size                           0x1
#define EPCONDIS1_value_mask                     0x8
#define EPCONDIS1_clear_mask                     0xF7

#define EPHSHK1                                  0x4
#define EPHSHK1_address                          0xF71
#define EPHSHK1_position                         0x4
#define EPHSHK1_size                             0x1
#define EPHSHK1_value_mask                       0x10
#define EPHSHK1_clear_mask                       0xEF

#define EP1HSHK                                  0x4
#define EP1HSHK_address                          0xF71
#define EP1HSHK_position                         0x4
#define EP1HSHK_size                             0x1
#define EP1HSHK_value_mask                       0x10
#define EP1HSHK_clear_mask                       0xEF

#define UEP1_EPHSHK                              0x4
#define UEP1_EPHSHK_address                      0xF71
#define UEP1_EPHSHK_position                     0x4
#define UEP1_EPHSHK_size                         0x1
#define UEP1_EPHSHK_value_mask                   0x10
#define UEP1_EPHSHK_clear_mask                   0xEF


/*----------------------------------------------------------------#
| UEP2                                                      0xF72 |
#-----------------------------------------------------------------#
| - | - | - | EPHSHK2 | EP2CONDIS | EP2OUTEN | EP2INEN | EP2STALL |
#-----------------------------------------------------------------#
| 7 | 6 | 5 | 4       | 3         | 2        | 1       | 0        |
#----------------------------------------------------------------*/

#define UEP2                                     0x0
#define UEP2_address                             0xF72
#define UEP2_position                            0x0
#define UEP2_size                                0x8
#define UEP2_value_mask                          0xFF
#define UEP2_clear_mask                          0x0

#define EP2STALL                                 0x0
#define EP2STALL_address                         0xF72
#define EP2STALL_position                        0x0
#define EP2STALL_size                            0x1
#define EP2STALL_value_mask                      0x1
#define EP2STALL_clear_mask                      0xFE

#define EPSTALL2                                 0x0
#define EPSTALL2_address                         0xF72
#define EPSTALL2_position                        0x0
#define EPSTALL2_size                            0x1
#define EPSTALL2_value_mask                      0x1
#define EPSTALL2_clear_mask                      0xFE

#define UEP2_EPSTALL                             0x0
#define UEP2_EPSTALL_address                     0xF72
#define UEP2_EPSTALL_position                    0x0
#define UEP2_EPSTALL_size                        0x1
#define UEP2_EPSTALL_value_mask                  0x1
#define UEP2_EPSTALL_clear_mask                  0xFE

#define EP2INEN                                  0x1
#define EP2INEN_address                          0xF72
#define EP2INEN_position                         0x1
#define EP2INEN_size                             0x1
#define EP2INEN_value_mask                       0x2
#define EP2INEN_clear_mask                       0xFD

#define EPINEN2                                  0x1
#define EPINEN2_address                          0xF72
#define EPINEN2_position                         0x1
#define EPINEN2_size                             0x1
#define EPINEN2_value_mask                       0x2
#define EPINEN2_clear_mask                       0xFD

#define UEP2_EPINEN                              0x1
#define UEP2_EPINEN_address                      0xF72
#define UEP2_EPINEN_position                     0x1
#define UEP2_EPINEN_size                         0x1
#define UEP2_EPINEN_value_mask                   0x2
#define UEP2_EPINEN_clear_mask                   0xFD

#define EP2OUTEN                                 0x2
#define EP2OUTEN_address                         0xF72
#define EP2OUTEN_position                        0x2
#define EP2OUTEN_size                            0x1
#define EP2OUTEN_value_mask                      0x4
#define EP2OUTEN_clear_mask                      0xFB

#define UEP2_EPOUTEN                             0x2
#define UEP2_EPOUTEN_address                     0xF72
#define UEP2_EPOUTEN_position                    0x2
#define UEP2_EPOUTEN_size                        0x1
#define UEP2_EPOUTEN_value_mask                  0x4
#define UEP2_EPOUTEN_clear_mask                  0xFB

#define EPOUTEN2                                 0x2
#define EPOUTEN2_address                         0xF72
#define EPOUTEN2_position                        0x2
#define EPOUTEN2_size                            0x1
#define EPOUTEN2_value_mask                      0x4
#define EPOUTEN2_clear_mask                      0xFB

#define EP2CONDIS                                0x3
#define EP2CONDIS_address                        0xF72
#define EP2CONDIS_position                       0x3
#define EP2CONDIS_size                           0x1
#define EP2CONDIS_value_mask                     0x8
#define EP2CONDIS_clear_mask                     0xF7

#define UEP2_EPCONDIS                            0x3
#define UEP2_EPCONDIS_address                    0xF72
#define UEP2_EPCONDIS_position                   0x3
#define UEP2_EPCONDIS_size                       0x1
#define UEP2_EPCONDIS_value_mask                 0x8
#define UEP2_EPCONDIS_clear_mask                 0xF7

#define EPCONDIS2                                0x3
#define EPCONDIS2_address                        0xF72
#define EPCONDIS2_position                       0x3
#define EPCONDIS2_size                           0x1
#define EPCONDIS2_value_mask                     0x8
#define EPCONDIS2_clear_mask                     0xF7

#define EP2HSHK                                  0x4
#define EP2HSHK_address                          0xF72
#define EP2HSHK_position                         0x4
#define EP2HSHK_size                             0x1
#define EP2HSHK_value_mask                       0x10
#define EP2HSHK_clear_mask                       0xEF

#define EPHSHK2                                  0x4
#define EPHSHK2_address                          0xF72
#define EPHSHK2_position                         0x4
#define EPHSHK2_size                             0x1
#define EPHSHK2_value_mask                       0x10
#define EPHSHK2_clear_mask                       0xEF

#define UEP2_EPHSHK                              0x4
#define UEP2_EPHSHK_address                      0xF72
#define UEP2_EPHSHK_position                     0x4
#define UEP2_EPHSHK_size                         0x1
#define UEP2_EPHSHK_value_mask                   0x10
#define UEP2_EPHSHK_clear_mask                   0xEF


/*----------------------------------------------------------------------------#
| UEP3                                                                  0xF73 |
#-----------------------------------------------------------------------------#
| - | - | - | UEP3_EPHSHK | UEP3_EPCONDIS | EP3OUTEN | UEP3_EPINEN | EPSTALL3 |
#-----------------------------------------------------------------------------#
| 7 | 6 | 5 | 4           | 3             | 2        | 1           | 0        |
#----------------------------------------------------------------------------*/

#define UEP3                                     0x0
#define UEP3_address                             0xF73
#define UEP3_position                            0x0
#define UEP3_size                                0x8
#define UEP3_value_mask                          0xFF
#define UEP3_clear_mask                          0x0

#define UEP3_EPSTALL                             0x0
#define UEP3_EPSTALL_address                     0xF73
#define UEP3_EPSTALL_position                    0x0
#define UEP3_EPSTALL_size                        0x1
#define UEP3_EPSTALL_value_mask                  0x1
#define UEP3_EPSTALL_clear_mask                  0xFE

#define EPSTALL3                                 0x0
#define EPSTALL3_address                         0xF73
#define EPSTALL3_position                        0x0
#define EPSTALL3_size                            0x1
#define EPSTALL3_value_mask                      0x1
#define EPSTALL3_clear_mask                      0xFE

#define EP3STALL                                 0x0
#define EP3STALL_address                         0xF73
#define EP3STALL_position                        0x0
#define EP3STALL_size                            0x1
#define EP3STALL_value_mask                      0x1
#define EP3STALL_clear_mask                      0xFE

#define UEP3_EPINEN                              0x1
#define UEP3_EPINEN_address                      0xF73
#define UEP3_EPINEN_position                     0x1
#define UEP3_EPINEN_size                         0x1
#define UEP3_EPINEN_value_mask                   0x2
#define UEP3_EPINEN_clear_mask                   0xFD

#define EPINEN3                                  0x1
#define EPINEN3_address                          0xF73
#define EPINEN3_position                         0x1
#define EPINEN3_size                             0x1
#define EPINEN3_value_mask                       0x2
#define EPINEN3_clear_mask                       0xFD

#define EP3INEN                                  0x1
#define EP3INEN_address                          0xF73
#define EP3INEN_position                         0x1
#define EP3INEN_size                             0x1
#define EP3INEN_value_mask                       0x2
#define EP3INEN_clear_mask                       0xFD

#define EP3OUTEN                                 0x2
#define EP3OUTEN_address                         0xF73
#define EP3OUTEN_position                        0x2
#define EP3OUTEN_size                            0x1
#define EP3OUTEN_value_mask                      0x4
#define EP3OUTEN_clear_mask                      0xFB

#define EPOUTEN3                                 0x2
#define EPOUTEN3_address                         0xF73
#define EPOUTEN3_position                        0x2
#define EPOUTEN3_size                            0x1
#define EPOUTEN3_value_mask                      0x4
#define EPOUTEN3_clear_mask                      0xFB

#define UEP3_EPOUTEN                             0x2
#define UEP3_EPOUTEN_address                     0xF73
#define UEP3_EPOUTEN_position                    0x2
#define UEP3_EPOUTEN_size                        0x1
#define UEP3_EPOUTEN_value_mask                  0x4
#define UEP3_EPOUTEN_clear_mask                  0xFB

#define UEP3_EPCONDIS                            0x3
#define UEP3_EPCONDIS_address                    0xF73
#define UEP3_EPCONDIS_position                   0x3
#define UEP3_EPCONDIS_size                       0x1
#define UEP3_EPCONDIS_value_mask                 0x8
#define UEP3_EPCONDIS_clear_mask                 0xF7

#define EP3CONDIS                                0x3
#define EP3CONDIS_address                        0xF73
#define EP3CONDIS_position                       0x3
#define EP3CONDIS_size                           0x1
#define EP3CONDIS_value_mask                     0x8
#define EP3CONDIS_clear_mask                     0xF7

#define EPCONDIS3                                0x3
#define EPCONDIS3_address                        0xF73
#define EPCONDIS3_position                       0x3
#define EPCONDIS3_size                           0x1
#define EPCONDIS3_value_mask                     0x8
#define EPCONDIS3_clear_mask                     0xF7

#define EPHSHK3                                  0x4
#define EPHSHK3_address                          0xF73
#define EPHSHK3_position                         0x4
#define EPHSHK3_size                             0x1
#define EPHSHK3_value_mask                       0x10
#define EPHSHK3_clear_mask                       0xEF

#define UEP3_EPHSHK                              0x4
#define UEP3_EPHSHK_address                      0xF73
#define UEP3_EPHSHK_position                     0x4
#define UEP3_EPHSHK_size                         0x1
#define UEP3_EPHSHK_value_mask                   0x10
#define UEP3_EPHSHK_clear_mask                   0xEF

#define EP3HSHK                                  0x4
#define EP3HSHK_address                          0xF73
#define EP3HSHK_position                         0x4
#define EP3HSHK_size                             0x1
#define EP3HSHK_value_mask                       0x10
#define EP3HSHK_clear_mask                       0xEF


/*--------------------------------------------------------------------#
| UEP4                                                          0xF74 |
#---------------------------------------------------------------------#
| - | - | - | EP4HSHK | EP4CONDIS | EP4OUTEN | UEP4_EPINEN | EPSTALL4 |
#---------------------------------------------------------------------#
| 7 | 6 | 5 | 4       | 3         | 2        | 1           | 0        |
#--------------------------------------------------------------------*/

#define UEP4                                     0x0
#define UEP4_address                             0xF74
#define UEP4_position                            0x0
#define UEP4_size                                0x8
#define UEP4_value_mask                          0xFF
#define UEP4_clear_mask                          0x0

#define EP4STALL                                 0x0
#define EP4STALL_address                         0xF74
#define EP4STALL_position                        0x0
#define EP4STALL_size                            0x1
#define EP4STALL_value_mask                      0x1
#define EP4STALL_clear_mask                      0xFE

#define EPSTALL4                                 0x0
#define EPSTALL4_address                         0xF74
#define EPSTALL4_position                        0x0
#define EPSTALL4_size                            0x1
#define EPSTALL4_value_mask                      0x1
#define EPSTALL4_clear_mask                      0xFE

#define UEP4_EPSTALL                             0x0
#define UEP4_EPSTALL_address                     0xF74
#define UEP4_EPSTALL_position                    0x0
#define UEP4_EPSTALL_size                        0x1
#define UEP4_EPSTALL_value_mask                  0x1
#define UEP4_EPSTALL_clear_mask                  0xFE

#define UEP4_EPINEN                              0x1
#define UEP4_EPINEN_address                      0xF74
#define UEP4_EPINEN_position                     0x1
#define UEP4_EPINEN_size                         0x1
#define UEP4_EPINEN_value_mask                   0x2
#define UEP4_EPINEN_clear_mask                   0xFD

#define EP4INEN                                  0x1
#define EP4INEN_address                          0xF74
#define EP4INEN_position                         0x1
#define EP4INEN_size                             0x1
#define EP4INEN_value_mask                       0x2
#define EP4INEN_clear_mask                       0xFD

#define EPINEN4                                  0x1
#define EPINEN4_address                          0xF74
#define EPINEN4_position                         0x1
#define EPINEN4_size                             0x1
#define EPINEN4_value_mask                       0x2
#define EPINEN4_clear_mask                       0xFD

#define UEP4_EPOUTEN                             0x2
#define UEP4_EPOUTEN_address                     0xF74
#define UEP4_EPOUTEN_position                    0x2
#define UEP4_EPOUTEN_size                        0x1
#define UEP4_EPOUTEN_value_mask                  0x4
#define UEP4_EPOUTEN_clear_mask                  0xFB

#define EPOUTEN4                                 0x2
#define EPOUTEN4_address                         0xF74
#define EPOUTEN4_position                        0x2
#define EPOUTEN4_size                            0x1
#define EPOUTEN4_value_mask                      0x4
#define EPOUTEN4_clear_mask                      0xFB

#define EP4OUTEN                                 0x2
#define EP4OUTEN_address                         0xF74
#define EP4OUTEN_position                        0x2
#define EP4OUTEN_size                            0x1
#define EP4OUTEN_value_mask                      0x4
#define EP4OUTEN_clear_mask                      0xFB

#define EPCONDIS4                                0x3
#define EPCONDIS4_address                        0xF74
#define EPCONDIS4_position                       0x3
#define EPCONDIS4_size                           0x1
#define EPCONDIS4_value_mask                     0x8
#define EPCONDIS4_clear_mask                     0xF7

#define EP4CONDIS                                0x3
#define EP4CONDIS_address                        0xF74
#define EP4CONDIS_position                       0x3
#define EP4CONDIS_size                           0x1
#define EP4CONDIS_value_mask                     0x8
#define EP4CONDIS_clear_mask                     0xF7

#define UEP4_EPCONDIS                            0x3
#define UEP4_EPCONDIS_address                    0xF74
#define UEP4_EPCONDIS_position                   0x3
#define UEP4_EPCONDIS_size                       0x1
#define UEP4_EPCONDIS_value_mask                 0x8
#define UEP4_EPCONDIS_clear_mask                 0xF7

#define EPHSHK4                                  0x4
#define EPHSHK4_address                          0xF74
#define EPHSHK4_position                         0x4
#define EPHSHK4_size                             0x1
#define EPHSHK4_value_mask                       0x10
#define EPHSHK4_clear_mask                       0xEF

#define EP4HSHK                                  0x4
#define EP4HSHK_address                          0xF74
#define EP4HSHK_position                         0x4
#define EP4HSHK_size                             0x1
#define EP4HSHK_value_mask                       0x10
#define EP4HSHK_clear_mask                       0xEF

#define UEP4_EPHSHK                              0x4
#define UEP4_EPHSHK_address                      0xF74
#define UEP4_EPHSHK_position                     0x4
#define UEP4_EPHSHK_size                         0x1
#define UEP4_EPHSHK_value_mask                   0x10
#define UEP4_EPHSHK_clear_mask                   0xEF


/*------------------------------------------------------------------------#
| UEP5                                                              0xF75 |
#-------------------------------------------------------------------------#
| - | - | - | UEP5_EPHSHK | EP5CONDIS | EPOUTEN5 | UEP5_EPINEN | EP5STALL |
#-------------------------------------------------------------------------#
| 7 | 6 | 5 | 4           | 3         | 2        | 1           | 0        |
#------------------------------------------------------------------------*/

#define UEP5                                     0x0
#define UEP5_address                             0xF75
#define UEP5_position                            0x0
#define UEP5_size                                0x8
#define UEP5_value_mask                          0xFF
#define UEP5_clear_mask                          0x0

#define EP5STALL                                 0x0
#define EP5STALL_address                         0xF75
#define EP5STALL_position                        0x0
#define EP5STALL_size                            0x1
#define EP5STALL_value_mask                      0x1
#define EP5STALL_clear_mask                      0xFE

#define UEP5_EPSTALL                             0x0
#define UEP5_EPSTALL_address                     0xF75
#define UEP5_EPSTALL_position                    0x0
#define UEP5_EPSTALL_size                        0x1
#define UEP5_EPSTALL_value_mask                  0x1
#define UEP5_EPSTALL_clear_mask                  0xFE

#define EPSTALL5                                 0x0
#define EPSTALL5_address                         0xF75
#define EPSTALL5_position                        0x0
#define EPSTALL5_size                            0x1
#define EPSTALL5_value_mask                      0x1
#define EPSTALL5_clear_mask                      0xFE

#define EPINEN5                                  0x1
#define EPINEN5_address                          0xF75
#define EPINEN5_position                         0x1
#define EPINEN5_size                             0x1
#define EPINEN5_value_mask                       0x2
#define EPINEN5_clear_mask                       0xFD

#define UEP5_EPINEN                              0x1
#define UEP5_EPINEN_address                      0xF75
#define UEP5_EPINEN_position                     0x1
#define UEP5_EPINEN_size                         0x1
#define UEP5_EPINEN_value_mask                   0x2
#define UEP5_EPINEN_clear_mask                   0xFD

#define EP5INEN                                  0x1
#define EP5INEN_address                          0xF75
#define EP5INEN_position                         0x1
#define EP5INEN_size                             0x1
#define EP5INEN_value_mask                       0x2
#define EP5INEN_clear_mask                       0xFD

#define EPOUTEN5                                 0x2
#define EPOUTEN5_address                         0xF75
#define EPOUTEN5_position                        0x2
#define EPOUTEN5_size                            0x1
#define EPOUTEN5_value_mask                      0x4
#define EPOUTEN5_clear_mask                      0xFB

#define UEP5_EPOUTEN                             0x2
#define UEP5_EPOUTEN_address                     0xF75
#define UEP5_EPOUTEN_position                    0x2
#define UEP5_EPOUTEN_size                        0x1
#define UEP5_EPOUTEN_value_mask                  0x4
#define UEP5_EPOUTEN_clear_mask                  0xFB

#define EP5OUTEN                                 0x2
#define EP5OUTEN_address                         0xF75
#define EP5OUTEN_position                        0x2
#define EP5OUTEN_size                            0x1
#define EP5OUTEN_value_mask                      0x4
#define EP5OUTEN_clear_mask                      0xFB

#define EPCONDIS5                                0x3
#define EPCONDIS5_address                        0xF75
#define EPCONDIS5_position                       0x3
#define EPCONDIS5_size                           0x1
#define EPCONDIS5_value_mask                     0x8
#define EPCONDIS5_clear_mask                     0xF7

#define EP5CONDIS                                0x3
#define EP5CONDIS_address                        0xF75
#define EP5CONDIS_position                       0x3
#define EP5CONDIS_size                           0x1
#define EP5CONDIS_value_mask                     0x8
#define EP5CONDIS_clear_mask                     0xF7

#define UEP5_EPCONDIS                            0x3
#define UEP5_EPCONDIS_address                    0xF75
#define UEP5_EPCONDIS_position                   0x3
#define UEP5_EPCONDIS_size                       0x1
#define UEP5_EPCONDIS_value_mask                 0x8
#define UEP5_EPCONDIS_clear_mask                 0xF7

#define UEP5_EPHSHK                              0x4
#define UEP5_EPHSHK_address                      0xF75
#define UEP5_EPHSHK_position                     0x4
#define UEP5_EPHSHK_size                         0x1
#define UEP5_EPHSHK_value_mask                   0x10
#define UEP5_EPHSHK_clear_mask                   0xEF

#define EPHSHK5                                  0x4
#define EPHSHK5_address                          0xF75
#define EPHSHK5_position                         0x4
#define EPHSHK5_size                             0x1
#define EPHSHK5_value_mask                       0x10
#define EPHSHK5_clear_mask                       0xEF

#define EP5HSHK                                  0x4
#define EP5HSHK_address                          0xF75
#define EP5HSHK_position                         0x4
#define EP5HSHK_size                             0x1
#define EP5HSHK_value_mask                       0x10
#define EP5HSHK_clear_mask                       0xEF


/*----------------------------------------------------------------------------#
| UEP6                                                                  0xF76 |
#-----------------------------------------------------------------------------#
| - | - | - | UEP6_EPHSHK | UEP6_EPCONDIS | EP6OUTEN | EPINEN6 | UEP6_EPSTALL |
#-----------------------------------------------------------------------------#
| 7 | 6 | 5 | 4           | 3             | 2        | 1       | 0            |
#----------------------------------------------------------------------------*/

#define UEP6                                     0x0
#define UEP6_address                             0xF76
#define UEP6_position                            0x0
#define UEP6_size                                0x8
#define UEP6_value_mask                          0xFF
#define UEP6_clear_mask                          0x0

#define EPSTALL6                                 0x0
#define EPSTALL6_address                         0xF76
#define EPSTALL6_position                        0x0
#define EPSTALL6_size                            0x1
#define EPSTALL6_value_mask                      0x1
#define EPSTALL6_clear_mask                      0xFE

#define UEP6_EPSTALL                             0x0
#define UEP6_EPSTALL_address                     0xF76
#define UEP6_EPSTALL_position                    0x0
#define UEP6_EPSTALL_size                        0x1
#define UEP6_EPSTALL_value_mask                  0x1
#define UEP6_EPSTALL_clear_mask                  0xFE

#define EP6STALL                                 0x0
#define EP6STALL_address                         0xF76
#define EP6STALL_position                        0x0
#define EP6STALL_size                            0x1
#define EP6STALL_value_mask                      0x1
#define EP6STALL_clear_mask                      0xFE

#define EP6INEN                                  0x1
#define EP6INEN_address                          0xF76
#define EP6INEN_position                         0x1
#define EP6INEN_size                             0x1
#define EP6INEN_value_mask                       0x2
#define EP6INEN_clear_mask                       0xFD

#define UEP6_EPINEN                              0x1
#define UEP6_EPINEN_address                      0xF76
#define UEP6_EPINEN_position                     0x1
#define UEP6_EPINEN_size                         0x1
#define UEP6_EPINEN_value_mask                   0x2
#define UEP6_EPINEN_clear_mask                   0xFD

#define EPINEN6                                  0x1
#define EPINEN6_address                          0xF76
#define EPINEN6_position                         0x1
#define EPINEN6_size                             0x1
#define EPINEN6_value_mask                       0x2
#define EPINEN6_clear_mask                       0xFD

#define EP6OUTEN                                 0x2
#define EP6OUTEN_address                         0xF76
#define EP6OUTEN_position                        0x2
#define EP6OUTEN_size                            0x1
#define EP6OUTEN_value_mask                      0x4
#define EP6OUTEN_clear_mask                      0xFB

#define EPOUTEN6                                 0x2
#define EPOUTEN6_address                         0xF76
#define EPOUTEN6_position                        0x2
#define EPOUTEN6_size                            0x1
#define EPOUTEN6_value_mask                      0x4
#define EPOUTEN6_clear_mask                      0xFB

#define UEP6_EPOUTEN                             0x2
#define UEP6_EPOUTEN_address                     0xF76
#define UEP6_EPOUTEN_position                    0x2
#define UEP6_EPOUTEN_size                        0x1
#define UEP6_EPOUTEN_value_mask                  0x4
#define UEP6_EPOUTEN_clear_mask                  0xFB

#define UEP6_EPCONDIS                            0x3
#define UEP6_EPCONDIS_address                    0xF76
#define UEP6_EPCONDIS_position                   0x3
#define UEP6_EPCONDIS_size                       0x1
#define UEP6_EPCONDIS_value_mask                 0x8
#define UEP6_EPCONDIS_clear_mask                 0xF7

#define EP6CONDIS                                0x3
#define EP6CONDIS_address                        0xF76
#define EP6CONDIS_position                       0x3
#define EP6CONDIS_size                           0x1
#define EP6CONDIS_value_mask                     0x8
#define EP6CONDIS_clear_mask                     0xF7

#define EPCONDIS6                                0x3
#define EPCONDIS6_address                        0xF76
#define EPCONDIS6_position                       0x3
#define EPCONDIS6_size                           0x1
#define EPCONDIS6_value_mask                     0x8
#define EPCONDIS6_clear_mask                     0xF7

#define EPHSHK6                                  0x4
#define EPHSHK6_address                          0xF76
#define EPHSHK6_position                         0x4
#define EPHSHK6_size                             0x1
#define EPHSHK6_value_mask                       0x10
#define EPHSHK6_clear_mask                       0xEF

#define UEP6_EPHSHK                              0x4
#define UEP6_EPHSHK_address                      0xF76
#define UEP6_EPHSHK_position                     0x4
#define UEP6_EPHSHK_size                         0x1
#define UEP6_EPHSHK_value_mask                   0x10
#define UEP6_EPHSHK_clear_mask                   0xEF

#define EP6HSHK                                  0x4
#define EP6HSHK_address                          0xF76
#define EP6HSHK_position                         0x4
#define EP6HSHK_size                             0x1
#define EP6HSHK_value_mask                       0x10
#define EP6HSHK_clear_mask                       0xEF


/*--------------------------------------------------------------------#
| UEP7                                                          0xF77 |
#---------------------------------------------------------------------#
| - | - | - | EP7HSHK | UEP7_EPCONDIS | EP7OUTEN | EP7INEN | EP7STALL |
#---------------------------------------------------------------------#
| 7 | 6 | 5 | 4       | 3             | 2        | 1       | 0        |
#--------------------------------------------------------------------*/

#define UEP7                                     0x0
#define UEP7_address                             0xF77
#define UEP7_position                            0x0
#define UEP7_size                                0x8
#define UEP7_value_mask                          0xFF
#define UEP7_clear_mask                          0x0

#define UEP7_EPSTALL                             0x0
#define UEP7_EPSTALL_address                     0xF77
#define UEP7_EPSTALL_position                    0x0
#define UEP7_EPSTALL_size                        0x1
#define UEP7_EPSTALL_value_mask                  0x1
#define UEP7_EPSTALL_clear_mask                  0xFE

#define EP7STALL                                 0x0
#define EP7STALL_address                         0xF77
#define EP7STALL_position                        0x0
#define EP7STALL_size                            0x1
#define EP7STALL_value_mask                      0x1
#define EP7STALL_clear_mask                      0xFE

#define EPSTALL7                                 0x0
#define EPSTALL7_address                         0xF77
#define EPSTALL7_position                        0x0
#define EPSTALL7_size                            0x1
#define EPSTALL7_value_mask                      0x1
#define EPSTALL7_clear_mask                      0xFE

#define EP7INEN                                  0x1
#define EP7INEN_address                          0xF77
#define EP7INEN_position                         0x1
#define EP7INEN_size                             0x1
#define EP7INEN_value_mask                       0x2
#define EP7INEN_clear_mask                       0xFD

#define EPINEN7                                  0x1
#define EPINEN7_address                          0xF77
#define EPINEN7_position                         0x1
#define EPINEN7_size                             0x1
#define EPINEN7_value_mask                       0x2
#define EPINEN7_clear_mask                       0xFD

#define UEP7_EPINEN                              0x1
#define UEP7_EPINEN_address                      0xF77
#define UEP7_EPINEN_position                     0x1
#define UEP7_EPINEN_size                         0x1
#define UEP7_EPINEN_value_mask                   0x2
#define UEP7_EPINEN_clear_mask                   0xFD

#define EP7OUTEN                                 0x2
#define EP7OUTEN_address                         0xF77
#define EP7OUTEN_position                        0x2
#define EP7OUTEN_size                            0x1
#define EP7OUTEN_value_mask                      0x4
#define EP7OUTEN_clear_mask                      0xFB

#define UEP7_EPOUTEN                             0x2
#define UEP7_EPOUTEN_address                     0xF77
#define UEP7_EPOUTEN_position                    0x2
#define UEP7_EPOUTEN_size                        0x1
#define UEP7_EPOUTEN_value_mask                  0x4
#define UEP7_EPOUTEN_clear_mask                  0xFB

#define EPOUTEN7                                 0x2
#define EPOUTEN7_address                         0xF77
#define EPOUTEN7_position                        0x2
#define EPOUTEN7_size                            0x1
#define EPOUTEN7_value_mask                      0x4
#define EPOUTEN7_clear_mask                      0xFB

#define UEP7_EPCONDIS                            0x3
#define UEP7_EPCONDIS_address                    0xF77
#define UEP7_EPCONDIS_position                   0x3
#define UEP7_EPCONDIS_size                       0x1
#define UEP7_EPCONDIS_value_mask                 0x8
#define UEP7_EPCONDIS_clear_mask                 0xF7

#define EP7CONDIS                                0x3
#define EP7CONDIS_address                        0xF77
#define EP7CONDIS_position                       0x3
#define EP7CONDIS_size                           0x1
#define EP7CONDIS_value_mask                     0x8
#define EP7CONDIS_clear_mask                     0xF7

#define EPCONDIS7                                0x3
#define EPCONDIS7_address                        0xF77
#define EPCONDIS7_position                       0x3
#define EPCONDIS7_size                           0x1
#define EPCONDIS7_value_mask                     0x8
#define EPCONDIS7_clear_mask                     0xF7

#define EPHSHK7                                  0x4
#define EPHSHK7_address                          0xF77
#define EPHSHK7_position                         0x4
#define EPHSHK7_size                             0x1
#define EPHSHK7_value_mask                       0x10
#define EPHSHK7_clear_mask                       0xEF

#define UEP7_EPHSHK                              0x4
#define UEP7_EPHSHK_address                      0xF77
#define UEP7_EPHSHK_position                     0x4
#define UEP7_EPHSHK_size                         0x1
#define UEP7_EPHSHK_value_mask                   0x10
#define UEP7_EPHSHK_clear_mask                   0xEF

#define EP7HSHK                                  0x4
#define EP7HSHK_address                          0xF77
#define EP7HSHK_position                         0x4
#define EP7HSHK_size                             0x1
#define EP7HSHK_value_mask                       0x10
#define EP7HSHK_clear_mask                       0xEF


/*--------------------------------------------------------------------------------#
| UEP8                                                                      0xF78 |
#---------------------------------------------------------------------------------#
| - | - | - | UEP8_EPHSHK | UEP8_EPCONDIS | UEP8_EPOUTEN | UEP8_EPINEN | EPSTALL8 |
#---------------------------------------------------------------------------------#
| 7 | 6 | 5 | 4           | 3             | 2            | 1           | 0        |
#--------------------------------------------------------------------------------*/

#define UEP8                                     0x0
#define UEP8_address                             0xF78
#define UEP8_position                            0x0
#define UEP8_size                                0x8
#define UEP8_value_mask                          0xFF
#define UEP8_clear_mask                          0x0

#define EPSTALL8                                 0x0
#define EPSTALL8_address                         0xF78
#define EPSTALL8_position                        0x0
#define EPSTALL8_size                            0x1
#define EPSTALL8_value_mask                      0x1
#define EPSTALL8_clear_mask                      0xFE

#define UEP8_EPSTALL                             0x0
#define UEP8_EPSTALL_address                     0xF78
#define UEP8_EPSTALL_position                    0x0
#define UEP8_EPSTALL_size                        0x1
#define UEP8_EPSTALL_value_mask                  0x1
#define UEP8_EPSTALL_clear_mask                  0xFE

#define UEP8_EPINEN                              0x1
#define UEP8_EPINEN_address                      0xF78
#define UEP8_EPINEN_position                     0x1
#define UEP8_EPINEN_size                         0x1
#define UEP8_EPINEN_value_mask                   0x2
#define UEP8_EPINEN_clear_mask                   0xFD

#define EPINEN8                                  0x1
#define EPINEN8_address                          0xF78
#define EPINEN8_position                         0x1
#define EPINEN8_size                             0x1
#define EPINEN8_value_mask                       0x2
#define EPINEN8_clear_mask                       0xFD

#define UEP8_EPOUTEN                             0x2
#define UEP8_EPOUTEN_address                     0xF78
#define UEP8_EPOUTEN_position                    0x2
#define UEP8_EPOUTEN_size                        0x1
#define UEP8_EPOUTEN_value_mask                  0x4
#define UEP8_EPOUTEN_clear_mask                  0xFB

#define EPOUTEN8                                 0x2
#define EPOUTEN8_address                         0xF78
#define EPOUTEN8_position                        0x2
#define EPOUTEN8_size                            0x1
#define EPOUTEN8_value_mask                      0x4
#define EPOUTEN8_clear_mask                      0xFB

#define UEP8_EPCONDIS                            0x3
#define UEP8_EPCONDIS_address                    0xF78
#define UEP8_EPCONDIS_position                   0x3
#define UEP8_EPCONDIS_size                       0x1
#define UEP8_EPCONDIS_value_mask                 0x8
#define UEP8_EPCONDIS_clear_mask                 0xF7

#define EPCONDIS8                                0x3
#define EPCONDIS8_address                        0xF78
#define EPCONDIS8_position                       0x3
#define EPCONDIS8_size                           0x1
#define EPCONDIS8_value_mask                     0x8
#define EPCONDIS8_clear_mask                     0xF7

#define UEP8_EPHSHK                              0x4
#define UEP8_EPHSHK_address                      0xF78
#define UEP8_EPHSHK_position                     0x4
#define UEP8_EPHSHK_size                         0x1
#define UEP8_EPHSHK_value_mask                   0x10
#define UEP8_EPHSHK_clear_mask                   0xEF

#define EPHSHK8                                  0x4
#define EPHSHK8_address                          0xF78
#define EPHSHK8_position                         0x4
#define EPHSHK8_size                             0x1
#define EPHSHK8_value_mask                       0x10
#define EPHSHK8_clear_mask                       0xEF


/*--------------------------------------------------------------------------------#
| UEP9                                                                      0xF79 |
#---------------------------------------------------------------------------------#
| - | - | - | UEP9_EPHSHK | UEP9_EPCONDIS | UEP9_EPOUTEN | UEP9_EPINEN | EPSTALL9 |
#---------------------------------------------------------------------------------#
| 7 | 6 | 5 | 4           | 3             | 2            | 1           | 0        |
#--------------------------------------------------------------------------------*/

#define UEP9                                     0x0
#define UEP9_address                             0xF79
#define UEP9_position                            0x0
#define UEP9_size                                0x8
#define UEP9_value_mask                          0xFF
#define UEP9_clear_mask                          0x0

#define EPSTALL9                                 0x0
#define EPSTALL9_address                         0xF79
#define EPSTALL9_position                        0x0
#define EPSTALL9_size                            0x1
#define EPSTALL9_value_mask                      0x1
#define EPSTALL9_clear_mask                      0xFE

#define UEP9_EPSTALL                             0x0
#define UEP9_EPSTALL_address                     0xF79
#define UEP9_EPSTALL_position                    0x0
#define UEP9_EPSTALL_size                        0x1
#define UEP9_EPSTALL_value_mask                  0x1
#define UEP9_EPSTALL_clear_mask                  0xFE

#define EPINEN9                                  0x1
#define EPINEN9_address                          0xF79
#define EPINEN9_position                         0x1
#define EPINEN9_size                             0x1
#define EPINEN9_value_mask                       0x2
#define EPINEN9_clear_mask                       0xFD

#define UEP9_EPINEN                              0x1
#define UEP9_EPINEN_address                      0xF79
#define UEP9_EPINEN_position                     0x1
#define UEP9_EPINEN_size                         0x1
#define UEP9_EPINEN_value_mask                   0x2
#define UEP9_EPINEN_clear_mask                   0xFD

#define UEP9_EPOUTEN                             0x2
#define UEP9_EPOUTEN_address                     0xF79
#define UEP9_EPOUTEN_position                    0x2
#define UEP9_EPOUTEN_size                        0x1
#define UEP9_EPOUTEN_value_mask                  0x4
#define UEP9_EPOUTEN_clear_mask                  0xFB

#define EPOUTEN9                                 0x2
#define EPOUTEN9_address                         0xF79
#define EPOUTEN9_position                        0x2
#define EPOUTEN9_size                            0x1
#define EPOUTEN9_value_mask                      0x4
#define EPOUTEN9_clear_mask                      0xFB

#define UEP9_EPCONDIS                            0x3
#define UEP9_EPCONDIS_address                    0xF79
#define UEP9_EPCONDIS_position                   0x3
#define UEP9_EPCONDIS_size                       0x1
#define UEP9_EPCONDIS_value_mask                 0x8
#define UEP9_EPCONDIS_clear_mask                 0xF7

#define EPCONDIS9                                0x3
#define EPCONDIS9_address                        0xF79
#define EPCONDIS9_position                       0x3
#define EPCONDIS9_size                           0x1
#define EPCONDIS9_value_mask                     0x8
#define EPCONDIS9_clear_mask                     0xF7

#define UEP9_EPHSHK                              0x4
#define UEP9_EPHSHK_address                      0xF79
#define UEP9_EPHSHK_position                     0x4
#define UEP9_EPHSHK_size                         0x1
#define UEP9_EPHSHK_value_mask                   0x10
#define UEP9_EPHSHK_clear_mask                   0xEF

#define EPHSHK9                                  0x4
#define EPHSHK9_address                          0xF79
#define EPHSHK9_position                         0x4
#define EPHSHK9_size                             0x1
#define EPHSHK9_value_mask                       0x10
#define EPHSHK9_clear_mask                       0xEF


/*-----------------------------------------------------------------------------#
| UEP10                                                                  0xF7A |
#------------------------------------------------------------------------------#
| - | - | - | EPHSHK10 | EPCONDIS10 | UEP10_EPOUTEN | EPINEN10 | UEP10_EPSTALL |
#------------------------------------------------------------------------------#
| 7 | 6 | 5 | 4        | 3          | 2             | 1        | 0             |
#-----------------------------------------------------------------------------*/

#define UEP10                                    0x0
#define UEP10_address                            0xF7A
#define UEP10_position                           0x0
#define UEP10_size                               0x8
#define UEP10_value_mask                         0xFF
#define UEP10_clear_mask                         0x0

#define EPSTALL10                                0x0
#define EPSTALL10_address                        0xF7A
#define EPSTALL10_position                       0x0
#define EPSTALL10_size                           0x1
#define EPSTALL10_value_mask                     0x1
#define EPSTALL10_clear_mask                     0xFE

#define UEP10_EPSTALL                            0x0
#define UEP10_EPSTALL_address                    0xF7A
#define UEP10_EPSTALL_position                   0x0
#define UEP10_EPSTALL_size                       0x1
#define UEP10_EPSTALL_value_mask                 0x1
#define UEP10_EPSTALL_clear_mask                 0xFE

#define EPINEN10                                 0x1
#define EPINEN10_address                         0xF7A
#define EPINEN10_position                        0x1
#define EPINEN10_size                            0x1
#define EPINEN10_value_mask                      0x2
#define EPINEN10_clear_mask                      0xFD

#define UEP10_EPINEN                             0x1
#define UEP10_EPINEN_address                     0xF7A
#define UEP10_EPINEN_position                    0x1
#define UEP10_EPINEN_size                        0x1
#define UEP10_EPINEN_value_mask                  0x2
#define UEP10_EPINEN_clear_mask                  0xFD

#define UEP10_EPOUTEN                            0x2
#define UEP10_EPOUTEN_address                    0xF7A
#define UEP10_EPOUTEN_position                   0x2
#define UEP10_EPOUTEN_size                       0x1
#define UEP10_EPOUTEN_value_mask                 0x4
#define UEP10_EPOUTEN_clear_mask                 0xFB

#define EPOUTEN10                                0x2
#define EPOUTEN10_address                        0xF7A
#define EPOUTEN10_position                       0x2
#define EPOUTEN10_size                           0x1
#define EPOUTEN10_value_mask                     0x4
#define EPOUTEN10_clear_mask                     0xFB

#define EPCONDIS10                               0x3
#define EPCONDIS10_address                       0xF7A
#define EPCONDIS10_position                      0x3
#define EPCONDIS10_size                          0x1
#define EPCONDIS10_value_mask                    0x8
#define EPCONDIS10_clear_mask                    0xF7

#define UEP10_EPCONDIS                           0x3
#define UEP10_EPCONDIS_address                   0xF7A
#define UEP10_EPCONDIS_position                  0x3
#define UEP10_EPCONDIS_size                      0x1
#define UEP10_EPCONDIS_value_mask                0x8
#define UEP10_EPCONDIS_clear_mask                0xF7

#define UEP10_EPHSHK                             0x4
#define UEP10_EPHSHK_address                     0xF7A
#define UEP10_EPHSHK_position                    0x4
#define UEP10_EPHSHK_size                        0x1
#define UEP10_EPHSHK_value_mask                  0x10
#define UEP10_EPHSHK_clear_mask                  0xEF

#define EPHSHK10                                 0x4
#define EPHSHK10_address                         0xF7A
#define EPHSHK10_position                        0x4
#define EPHSHK10_size                            0x1
#define EPHSHK10_value_mask                      0x10
#define EPHSHK10_clear_mask                      0xEF


/*-----------------------------------------------------------------------------#
| UEP11                                                                  0xF7B |
#------------------------------------------------------------------------------#
| - | - | - | UEP11_EPHSHK | EPCONDIS11 | EPOUTEN11 | EPINEN11 | UEP11_EPSTALL |
#------------------------------------------------------------------------------#
| 7 | 6 | 5 | 4            | 3          | 2         | 1        | 0             |
#-----------------------------------------------------------------------------*/

#define UEP11                                    0x0
#define UEP11_address                            0xF7B
#define UEP11_position                           0x0
#define UEP11_size                               0x8
#define UEP11_value_mask                         0xFF
#define UEP11_clear_mask                         0x0

#define UEP11_EPSTALL                            0x0
#define UEP11_EPSTALL_address                    0xF7B
#define UEP11_EPSTALL_position                   0x0
#define UEP11_EPSTALL_size                       0x1
#define UEP11_EPSTALL_value_mask                 0x1
#define UEP11_EPSTALL_clear_mask                 0xFE

#define EPSTALL11                                0x0
#define EPSTALL11_address                        0xF7B
#define EPSTALL11_position                       0x0
#define EPSTALL11_size                           0x1
#define EPSTALL11_value_mask                     0x1
#define EPSTALL11_clear_mask                     0xFE

#define EPINEN11                                 0x1
#define EPINEN11_address                         0xF7B
#define EPINEN11_position                        0x1
#define EPINEN11_size                            0x1
#define EPINEN11_value_mask                      0x2
#define EPINEN11_clear_mask                      0xFD

#define UEP11_EPINEN                             0x1
#define UEP11_EPINEN_address                     0xF7B
#define UEP11_EPINEN_position                    0x1
#define UEP11_EPINEN_size                        0x1
#define UEP11_EPINEN_value_mask                  0x2
#define UEP11_EPINEN_clear_mask                  0xFD

#define UEP11_EPOUTEN                            0x2
#define UEP11_EPOUTEN_address                    0xF7B
#define UEP11_EPOUTEN_position                   0x2
#define UEP11_EPOUTEN_size                       0x1
#define UEP11_EPOUTEN_value_mask                 0x4
#define UEP11_EPOUTEN_clear_mask                 0xFB

#define EPOUTEN11                                0x2
#define EPOUTEN11_address                        0xF7B
#define EPOUTEN11_position                       0x2
#define EPOUTEN11_size                           0x1
#define EPOUTEN11_value_mask                     0x4
#define EPOUTEN11_clear_mask                     0xFB

#define EPCONDIS11                               0x3
#define EPCONDIS11_address                       0xF7B
#define EPCONDIS11_position                      0x3
#define EPCONDIS11_size                          0x1
#define EPCONDIS11_value_mask                    0x8
#define EPCONDIS11_clear_mask                    0xF7

#define UEP11_EPCONDIS                           0x3
#define UEP11_EPCONDIS_address                   0xF7B
#define UEP11_EPCONDIS_position                  0x3
#define UEP11_EPCONDIS_size                      0x1
#define UEP11_EPCONDIS_value_mask                0x8
#define UEP11_EPCONDIS_clear_mask                0xF7

#define UEP11_EPHSHK                             0x4
#define UEP11_EPHSHK_address                     0xF7B
#define UEP11_EPHSHK_position                    0x4
#define UEP11_EPHSHK_size                        0x1
#define UEP11_EPHSHK_value_mask                  0x10
#define UEP11_EPHSHK_clear_mask                  0xEF

#define EPHSHK11                                 0x4
#define EPHSHK11_address                         0xF7B
#define EPHSHK11_position                        0x4
#define EPHSHK11_size                            0x1
#define EPHSHK11_value_mask                      0x10
#define EPHSHK11_clear_mask                      0xEF


/*-----------------------------------------------------------------------------#
| UEP12                                                                  0xF7C |
#------------------------------------------------------------------------------#
| - | - | - | EPHSHK12 | UEP12_EPCONDIS | EPOUTEN12 | UEP12_EPINEN | EPSTALL12 |
#------------------------------------------------------------------------------#
| 7 | 6 | 5 | 4        | 3              | 2         | 1            | 0         |
#-----------------------------------------------------------------------------*/

#define UEP12                                    0x0
#define UEP12_address                            0xF7C
#define UEP12_position                           0x0
#define UEP12_size                               0x8
#define UEP12_value_mask                         0xFF
#define UEP12_clear_mask                         0x0

#define EPSTALL12                                0x0
#define EPSTALL12_address                        0xF7C
#define EPSTALL12_position                       0x0
#define EPSTALL12_size                           0x1
#define EPSTALL12_value_mask                     0x1
#define EPSTALL12_clear_mask                     0xFE

#define UEP12_EPSTALL                            0x0
#define UEP12_EPSTALL_address                    0xF7C
#define UEP12_EPSTALL_position                   0x0
#define UEP12_EPSTALL_size                       0x1
#define UEP12_EPSTALL_value_mask                 0x1
#define UEP12_EPSTALL_clear_mask                 0xFE

#define UEP12_EPINEN                             0x1
#define UEP12_EPINEN_address                     0xF7C
#define UEP12_EPINEN_position                    0x1
#define UEP12_EPINEN_size                        0x1
#define UEP12_EPINEN_value_mask                  0x2
#define UEP12_EPINEN_clear_mask                  0xFD

#define EPINEN12                                 0x1
#define EPINEN12_address                         0xF7C
#define EPINEN12_position                        0x1
#define EPINEN12_size                            0x1
#define EPINEN12_value_mask                      0x2
#define EPINEN12_clear_mask                      0xFD

#define EPOUTEN12                                0x2
#define EPOUTEN12_address                        0xF7C
#define EPOUTEN12_position                       0x2
#define EPOUTEN12_size                           0x1
#define EPOUTEN12_value_mask                     0x4
#define EPOUTEN12_clear_mask                     0xFB

#define UEP12_EPOUTEN                            0x2
#define UEP12_EPOUTEN_address                    0xF7C
#define UEP12_EPOUTEN_position                   0x2
#define UEP12_EPOUTEN_size                       0x1
#define UEP12_EPOUTEN_value_mask                 0x4
#define UEP12_EPOUTEN_clear_mask                 0xFB

#define EPCONDIS12                               0x3
#define EPCONDIS12_address                       0xF7C
#define EPCONDIS12_position                      0x3
#define EPCONDIS12_size                          0x1
#define EPCONDIS12_value_mask                    0x8
#define EPCONDIS12_clear_mask                    0xF7

#define UEP12_EPCONDIS                           0x3
#define UEP12_EPCONDIS_address                   0xF7C
#define UEP12_EPCONDIS_position                  0x3
#define UEP12_EPCONDIS_size                      0x1
#define UEP12_EPCONDIS_value_mask                0x8
#define UEP12_EPCONDIS_clear_mask                0xF7

#define EPHSHK12                                 0x4
#define EPHSHK12_address                         0xF7C
#define EPHSHK12_position                        0x4
#define EPHSHK12_size                            0x1
#define EPHSHK12_value_mask                      0x10
#define EPHSHK12_clear_mask                      0xEF

#define UEP12_EPHSHK                             0x4
#define UEP12_EPHSHK_address                     0xF7C
#define UEP12_EPHSHK_position                    0x4
#define UEP12_EPHSHK_size                        0x1
#define UEP12_EPHSHK_value_mask                  0x10
#define UEP12_EPHSHK_clear_mask                  0xEF


/*-----------------------------------------------------------------------------#
| UEP13                                                                  0xF7D |
#------------------------------------------------------------------------------#
| - | - | - | EPHSHK13 | EPCONDIS13 | UEP13_EPOUTEN | EPINEN13 | UEP13_EPSTALL |
#------------------------------------------------------------------------------#
| 7 | 6 | 5 | 4        | 3          | 2             | 1        | 0             |
#-----------------------------------------------------------------------------*/

#define UEP13                                    0x0
#define UEP13_address                            0xF7D
#define UEP13_position                           0x0
#define UEP13_size                               0x8
#define UEP13_value_mask                         0xFF
#define UEP13_clear_mask                         0x0

#define UEP13_EPSTALL                            0x0
#define UEP13_EPSTALL_address                    0xF7D
#define UEP13_EPSTALL_position                   0x0
#define UEP13_EPSTALL_size                       0x1
#define UEP13_EPSTALL_value_mask                 0x1
#define UEP13_EPSTALL_clear_mask                 0xFE

#define EPSTALL13                                0x0
#define EPSTALL13_address                        0xF7D
#define EPSTALL13_position                       0x0
#define EPSTALL13_size                           0x1
#define EPSTALL13_value_mask                     0x1
#define EPSTALL13_clear_mask                     0xFE

#define EPINEN13                                 0x1
#define EPINEN13_address                         0xF7D
#define EPINEN13_position                        0x1
#define EPINEN13_size                            0x1
#define EPINEN13_value_mask                      0x2
#define EPINEN13_clear_mask                      0xFD

#define UEP13_EPINEN                             0x1
#define UEP13_EPINEN_address                     0xF7D
#define UEP13_EPINEN_position                    0x1
#define UEP13_EPINEN_size                        0x1
#define UEP13_EPINEN_value_mask                  0x2
#define UEP13_EPINEN_clear_mask                  0xFD

#define UEP13_EPOUTEN                            0x2
#define UEP13_EPOUTEN_address                    0xF7D
#define UEP13_EPOUTEN_position                   0x2
#define UEP13_EPOUTEN_size                       0x1
#define UEP13_EPOUTEN_value_mask                 0x4
#define UEP13_EPOUTEN_clear_mask                 0xFB

#define EPOUTEN13                                0x2
#define EPOUTEN13_address                        0xF7D
#define EPOUTEN13_position                       0x2
#define EPOUTEN13_size                           0x1
#define EPOUTEN13_value_mask                     0x4
#define EPOUTEN13_clear_mask                     0xFB

#define EPCONDIS13                               0x3
#define EPCONDIS13_address                       0xF7D
#define EPCONDIS13_position                      0x3
#define EPCONDIS13_size                          0x1
#define EPCONDIS13_value_mask                    0x8
#define EPCONDIS13_clear_mask                    0xF7

#define UEP13_EPCONDIS                           0x3
#define UEP13_EPCONDIS_address                   0xF7D
#define UEP13_EPCONDIS_position                  0x3
#define UEP13_EPCONDIS_size                      0x1
#define UEP13_EPCONDIS_value_mask                0x8
#define UEP13_EPCONDIS_clear_mask                0xF7

#define EPHSHK13                                 0x4
#define EPHSHK13_address                         0xF7D
#define EPHSHK13_position                        0x4
#define EPHSHK13_size                            0x1
#define EPHSHK13_value_mask                      0x10
#define EPHSHK13_clear_mask                      0xEF

#define UEP13_EPHSHK                             0x4
#define UEP13_EPHSHK_address                     0xF7D
#define UEP13_EPHSHK_position                    0x4
#define UEP13_EPHSHK_size                        0x1
#define UEP13_EPHSHK_value_mask                  0x10
#define UEP13_EPHSHK_clear_mask                  0xEF


/*-----------------------------------------------------------------------------#
| UEP14                                                                  0xF7E |
#------------------------------------------------------------------------------#
| - | - | - | UEP14_EPHSHK | EPCONDIS14 | EPOUTEN14 | EPINEN14 | UEP14_EPSTALL |
#------------------------------------------------------------------------------#
| 7 | 6 | 5 | 4            | 3          | 2         | 1        | 0             |
#-----------------------------------------------------------------------------*/

#define UEP14                                    0x0
#define UEP14_address                            0xF7E
#define UEP14_position                           0x0
#define UEP14_size                               0x8
#define UEP14_value_mask                         0xFF
#define UEP14_clear_mask                         0x0

#define UEP14_EPSTALL                            0x0
#define UEP14_EPSTALL_address                    0xF7E
#define UEP14_EPSTALL_position                   0x0
#define UEP14_EPSTALL_size                       0x1
#define UEP14_EPSTALL_value_mask                 0x1
#define UEP14_EPSTALL_clear_mask                 0xFE

#define EPSTALL14                                0x0
#define EPSTALL14_address                        0xF7E
#define EPSTALL14_position                       0x0
#define EPSTALL14_size                           0x1
#define EPSTALL14_value_mask                     0x1
#define EPSTALL14_clear_mask                     0xFE

#define EPINEN14                                 0x1
#define EPINEN14_address                         0xF7E
#define EPINEN14_position                        0x1
#define EPINEN14_size                            0x1
#define EPINEN14_value_mask                      0x2
#define EPINEN14_clear_mask                      0xFD

#define UEP14_EPINEN                             0x1
#define UEP14_EPINEN_address                     0xF7E
#define UEP14_EPINEN_position                    0x1
#define UEP14_EPINEN_size                        0x1
#define UEP14_EPINEN_value_mask                  0x2
#define UEP14_EPINEN_clear_mask                  0xFD

#define UEP14_EPOUTEN                            0x2
#define UEP14_EPOUTEN_address                    0xF7E
#define UEP14_EPOUTEN_position                   0x2
#define UEP14_EPOUTEN_size                       0x1
#define UEP14_EPOUTEN_value_mask                 0x4
#define UEP14_EPOUTEN_clear_mask                 0xFB

#define EPOUTEN14                                0x2
#define EPOUTEN14_address                        0xF7E
#define EPOUTEN14_position                       0x2
#define EPOUTEN14_size                           0x1
#define EPOUTEN14_value_mask                     0x4
#define EPOUTEN14_clear_mask                     0xFB

#define EPCONDIS14                               0x3
#define EPCONDIS14_address                       0xF7E
#define EPCONDIS14_position                      0x3
#define EPCONDIS14_size                          0x1
#define EPCONDIS14_value_mask                    0x8
#define EPCONDIS14_clear_mask                    0xF7

#define UEP14_EPCONDIS                           0x3
#define UEP14_EPCONDIS_address                   0xF7E
#define UEP14_EPCONDIS_position                  0x3
#define UEP14_EPCONDIS_size                      0x1
#define UEP14_EPCONDIS_value_mask                0x8
#define UEP14_EPCONDIS_clear_mask                0xF7

#define UEP14_EPHSHK                             0x4
#define UEP14_EPHSHK_address                     0xF7E
#define UEP14_EPHSHK_position                    0x4
#define UEP14_EPHSHK_size                        0x1
#define UEP14_EPHSHK_value_mask                  0x10
#define UEP14_EPHSHK_clear_mask                  0xEF

#define EPHSHK14                                 0x4
#define EPHSHK14_address                         0xF7E
#define EPHSHK14_position                        0x4
#define EPHSHK14_size                            0x1
#define EPHSHK14_value_mask                      0x10
#define EPHSHK14_clear_mask                      0xEF


/*---------------------------------------------------------------------------------#
| UEP15                                                                      0xF7F |
#----------------------------------------------------------------------------------#
| - | - | - | UEP15_EPHSHK | EPCONDIS15 | EPOUTEN15 | UEP15_EPINEN | UEP15_EPSTALL |
#----------------------------------------------------------------------------------#
| 7 | 6 | 5 | 4            | 3          | 2         | 1            | 0             |
#---------------------------------------------------------------------------------*/

#define UEP15                                    0x0
#define UEP15_address                            0xF7F
#define UEP15_position                           0x0
#define UEP15_size                               0x8
#define UEP15_value_mask                         0xFF
#define UEP15_clear_mask                         0x0

#define UEP15_EPSTALL                            0x0
#define UEP15_EPSTALL_address                    0xF7F
#define UEP15_EPSTALL_position                   0x0
#define UEP15_EPSTALL_size                       0x1
#define UEP15_EPSTALL_value_mask                 0x1
#define UEP15_EPSTALL_clear_mask                 0xFE

#define EPSTALL15                                0x0
#define EPSTALL15_address                        0xF7F
#define EPSTALL15_position                       0x0
#define EPSTALL15_size                           0x1
#define EPSTALL15_value_mask                     0x1
#define EPSTALL15_clear_mask                     0xFE

#define UEP15_EPINEN                             0x1
#define UEP15_EPINEN_address                     0xF7F
#define UEP15_EPINEN_position                    0x1
#define UEP15_EPINEN_size                        0x1
#define UEP15_EPINEN_value_mask                  0x2
#define UEP15_EPINEN_clear_mask                  0xFD

#define EPINEN15                                 0x1
#define EPINEN15_address                         0xF7F
#define EPINEN15_position                        0x1
#define EPINEN15_size                            0x1
#define EPINEN15_value_mask                      0x2
#define EPINEN15_clear_mask                      0xFD

#define UEP15_EPOUTEN                            0x2
#define UEP15_EPOUTEN_address                    0xF7F
#define UEP15_EPOUTEN_position                   0x2
#define UEP15_EPOUTEN_size                       0x1
#define UEP15_EPOUTEN_value_mask                 0x4
#define UEP15_EPOUTEN_clear_mask                 0xFB

#define EPOUTEN15                                0x2
#define EPOUTEN15_address                        0xF7F
#define EPOUTEN15_position                       0x2
#define EPOUTEN15_size                           0x1
#define EPOUTEN15_value_mask                     0x4
#define EPOUTEN15_clear_mask                     0xFB

#define EPCONDIS15                               0x3
#define EPCONDIS15_address                       0xF7F
#define EPCONDIS15_position                      0x3
#define EPCONDIS15_size                          0x1
#define EPCONDIS15_value_mask                    0x8
#define EPCONDIS15_clear_mask                    0xF7

#define UEP15_EPCONDIS                           0x3
#define UEP15_EPCONDIS_address                   0xF7F
#define UEP15_EPCONDIS_position                  0x3
#define UEP15_EPCONDIS_size                      0x1
#define UEP15_EPCONDIS_value_mask                0x8
#define UEP15_EPCONDIS_clear_mask                0xF7

#define UEP15_EPHSHK                             0x4
#define UEP15_EPHSHK_address                     0xF7F
#define UEP15_EPHSHK_position                    0x4
#define UEP15_EPHSHK_size                        0x1
#define UEP15_EPHSHK_value_mask                  0x10
#define UEP15_EPHSHK_clear_mask                  0xEF

#define EPHSHK15                                 0x4
#define EPHSHK15_address                         0xF7F
#define EPHSHK15_position                        0x4
#define EPHSHK15_size                            0x1
#define EPHSHK15_value_mask                      0x10
#define EPHSHK15_clear_mask                      0xEF


/*-----------------------------------------------------------------------------#
| PORTA                                                                  0xF80 |
#------------------------------------------------------------------------------#
| - | PORTA_RA6 | HLVDIN | PORTA_RA4 | PORTA_RA3 | VREFM | PORTA_RA1 | ULPWUIN |
#------------------------------------------------------------------------------#
| 7 | 6         | 5      | 4         | 3         | 2     | 1         | 0       |
#-----------------------------------------------------------------------------*/

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

#define SPP0                                     0x0
#define SPP0_address                             0xF83
#define SPP0_position                            0x0
#define SPP0_size                                0x1
#define SPP0_value_mask                          0x1
#define SPP0_clear_mask                          0xFE

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

#define SPP1                                     0x1
#define SPP1_address                             0xF83
#define SPP1_position                            0x1
#define SPP1_size                                0x1
#define SPP1_value_mask                          0x2
#define SPP1_clear_mask                          0xFD

#define PORTD_RD2                                0x2
#define PORTD_RD2_address                        0xF83
#define PORTD_RD2_position                       0x2
#define PORTD_RD2_size                           0x1
#define PORTD_RD2_value_mask                     0x4
#define PORTD_RD2_clear_mask                     0xFB

#define SPP2                                     0x2
#define SPP2_address                             0xF83
#define SPP2_position                            0x2
#define SPP2_size                                0x1
#define SPP2_value_mask                          0x4
#define SPP2_clear_mask                          0xFB

#define PORTD_RD3                                0x3
#define PORTD_RD3_address                        0xF83
#define PORTD_RD3_position                       0x3
#define PORTD_RD3_size                           0x1
#define PORTD_RD3_value_mask                     0x8
#define PORTD_RD3_clear_mask                     0xF7

#define SPP3                                     0x3
#define SPP3_address                             0xF83
#define SPP3_position                            0x3
#define SPP3_size                                0x1
#define SPP3_value_mask                          0x8
#define SPP3_clear_mask                          0xF7

#define SPP4                                     0x4
#define SPP4_address                             0xF83
#define SPP4_position                            0x4
#define SPP4_size                                0x1
#define SPP4_value_mask                          0x10
#define SPP4_clear_mask                          0xEF

#define PORTD_RD4                                0x4
#define PORTD_RD4_address                        0xF83
#define PORTD_RD4_position                       0x4
#define PORTD_RD4_size                           0x1
#define PORTD_RD4_value_mask                     0x10
#define PORTD_RD4_clear_mask                     0xEF

#define SPP5                                     0x5
#define SPP5_address                             0xF83
#define SPP5_position                            0x5
#define SPP5_size                                0x1
#define SPP5_value_mask                          0x20
#define SPP5_clear_mask                          0xDF

#define PORTD_RD5                                0x5
#define PORTD_RD5_address                        0xF83
#define PORTD_RD5_position                       0x5
#define PORTD_RD5_size                           0x1
#define PORTD_RD5_value_mask                     0x20
#define PORTD_RD5_clear_mask                     0xDF

#define PORTD_RD6                                0x6
#define PORTD_RD6_address                        0xF83
#define PORTD_RD6_position                       0x6
#define PORTD_RD6_size                           0x1
#define PORTD_RD6_value_mask                     0x40
#define PORTD_RD6_clear_mask                     0xBF

#define SPP6                                     0x6
#define SPP6_address                             0xF83
#define SPP6_position                            0x6
#define SPP6_size                                0x1
#define SPP6_value_mask                          0x40
#define SPP6_clear_mask                          0xBF

#define PORTD_RD7                                0x7
#define PORTD_RD7_address                        0xF83
#define PORTD_RD7_position                       0x7
#define PORTD_RD7_size                           0x1
#define PORTD_RD7_value_mask                     0x80
#define PORTD_RD7_clear_mask                     0x7F

#define SS2                                      0x7
#define SS2_address                              0xF83
#define SS2_position                             0x7
#define SS2_size                                 0x1
#define SS2_value_mask                           0x80
#define SS2_clear_mask                           0x7F

#define SPP7                                     0x7
#define SPP7_address                             0xF83
#define SPP7_position                            0x7
#define SPP7_size                                0x1
#define SPP7_value_mask                          0x80
#define SPP7_clear_mask                          0x7F


/*-------------------------------------------------#
| PORTE                                      0xF84 |
#--------------------------------------------------#
| PA2E | - | - | - | RE3 | CCP10 | CK2SPP | CK1SPP |
#--------------------------------------------------#
| 7    | 6 | 5 | 4 | 3   | 2     | 1      | 0      |
#-------------------------------------------------*/

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

#define CK1SPP                                   0x0
#define CK1SPP_address                           0xF84
#define CK1SPP_position                          0x0
#define CK1SPP_size                              0x1
#define CK1SPP_value_mask                        0x1
#define CK1SPP_clear_mask                        0xFE

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

#define CK2SPP                                   0x1
#define CK2SPP_address                           0xF84
#define CK2SPP_position                          0x1
#define CK2SPP_size                              0x1
#define CK2SPP_value_mask                        0x2
#define CK2SPP_clear_mask                        0xFD

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

#define OESPP                                    0x2
#define OESPP_address                            0xF84
#define OESPP_position                           0x2
#define OESPP_size                               0x1
#define OESPP_value_mask                         0x4
#define OESPP_clear_mask                         0xFB

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

#define RDPU                                     0x7
#define RDPU_address                             0xF84
#define RDPU_position                            0x7
#define RDPU_size                                0x1
#define RDPU_value_mask                          0x80
#define RDPU_clear_mask                          0x7F

#define CCP2E                                    0x7
#define CCP2E_address                            0xF84
#define CCP2E_position                           0x7
#define CCP2E_size                               0x1
#define CCP2E_value_mask                         0x80
#define CCP2E_clear_mask                         0x7F

#define PA2E                                     0x7
#define PA2E_address                             0xF84
#define PA2E_position                            0x7
#define PA2E_size                                0x1
#define PA2E_value_mask                          0x80
#define PA2E_clear_mask                          0x7F

#define RE7                                      0x7
#define RE7_address                              0xF84
#define RE7_position                             0x7
#define RE7_size                                 0x1
#define RE7_value_mask                           0x80
#define RE7_clear_mask                           0x7F


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


/*------------------------------------------------#
| LATC                                      0xF8B |
#-------------------------------------------------#
| LATC7 | LC6 | - | - | - | LATC2 | LATC1 | LATC0 |
#-------------------------------------------------#
| 7     | 6   | 5 | 4 | 3 | 2     | 1     | 0     |
#------------------------------------------------*/

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


/*------------------------------------------#
| LATE                                0xF8D |
#-------------------------------------------#
| - | - | - | - | - | LATE2 | LATE1 | LATE0 |
#-------------------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2     | 1     | 0     |
#------------------------------------------*/

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


/*-------------------------------------------------------#
| TRISC                                            0xF94 |
#--------------------------------------------------------#
| TRISC7 | TRISC6 | - | - | - | TRISC2 | TRISC1 | TRISC0 |
#--------------------------------------------------------#
| 7      | 6      | 5 | 4 | 3 | 2      | 1      | 0      |
#-------------------------------------------------------*/

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


/*------------------------------------------------------#
| TRISE                                           0xF96 |
#-------------------------------------------------------#
| - | - | - | - | - | TRISE_RE2 | TRISE_RE1 | TRISE_RE0 |
#-------------------------------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2         | 1         | 0         |
#------------------------------------------------------*/

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

#define TRISE_RE1                                0x1
#define TRISE_RE1_address                        0xF96
#define TRISE_RE1_position                       0x1
#define TRISE_RE1_size                           0x1
#define TRISE_RE1_value_mask                     0x2
#define TRISE_RE1_clear_mask                     0xFD

#define TRISE1                                   0x1
#define TRISE1_address                           0xF96
#define TRISE1_position                          0x1
#define TRISE1_size                              0x1
#define TRISE1_value_mask                        0x2
#define TRISE1_clear_mask                        0xFD

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


/*--------------------------------------------------#
| OSCTUNE                                     0xF9B |
#---------------------------------------------------#
| INTSRC | - | - | TUN4 | TUN3 | TUN2 | TUN1 | TUN0 |
#---------------------------------------------------#
| 7      | 6 | 5 | 4    | 3    | 2    | 1    | 0    |
#--------------------------------------------------*/

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

#define INTSRC                                   0x7
#define INTSRC_address                           0xF9B
#define INTSRC_position                          0x7
#define INTSRC_size                              0x1
#define INTSRC_value_mask                        0x80
#define INTSRC_clear_mask                        0x7F


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

#define PSPIE                                    0x7
#define PSPIE_address                            0xF9D
#define PSPIE_position                           0x7
#define PSPIE_size                               0x1
#define PSPIE_value_mask                         0x80
#define PSPIE_clear_mask                         0x7F

#define SPPIE                                    0x7
#define SPPIE_address                            0xF9D
#define SPPIE_position                           0x7
#define SPPIE_size                               0x1
#define SPPIE_value_mask                         0x80
#define SPPIE_clear_mask                         0x7F


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

#define SPPIF                                    0x7
#define SPPIF_address                            0xF9E
#define SPPIF_position                           0x7
#define SPPIF_size                               0x1
#define SPPIF_value_mask                         0x80
#define SPPIF_clear_mask                         0x7F


/*---------------------------------------------------------------#
| IPR1                                                     0xF9F |
#----------------------------------------------------------------#
| SPPIP | ADIP | RCIP | TX1IP | SSPIP | CCP1IP | TMR2IP | TMR1IP |
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

#define SPPIP                                    0x7
#define SPPIP_address                            0xF9F
#define SPPIP_position                           0x7
#define SPPIP_size                               0x1
#define SPPIP_value_mask                         0x80
#define SPPIP_clear_mask                         0x7F

#define PSPIP                                    0x7
#define PSPIP_address                            0xF9F
#define PSPIP_position                           0x7
#define PSPIP_size                               0x1
#define PSPIP_value_mask                         0x80
#define PSPIP_clear_mask                         0x7F


/*----------------------------------------------------------------#
| PIE2                                                      0xFA0 |
#-----------------------------------------------------------------#
| OSCFIE | CMIE | USBIE | EEIE | BCLIE | HLVDIE | TMR3IE | CCP2IE |
#-----------------------------------------------------------------#
| 7      | 6    | 5     | 4    | 3     | 2      | 1      | 0      |
#----------------------------------------------------------------*/

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

#define EEIE                                     0x4
#define EEIE_address                             0xFA0
#define EEIE_position                            0x4
#define EEIE_size                                0x1
#define EEIE_value_mask                          0x10
#define EEIE_clear_mask                          0xEF

#define USBIE                                    0x5
#define USBIE_address                            0xFA0
#define USBIE_position                           0x5
#define USBIE_size                               0x1
#define USBIE_value_mask                         0x20
#define USBIE_clear_mask                         0xDF

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


/*----------------------------------------------------------------#
| PIR2                                                      0xFA1 |
#-----------------------------------------------------------------#
| OSCFIF | CMIF | USBIF | EEIF | BCLIF | HLVDIF | TMR3IF | CCP2IF |
#-----------------------------------------------------------------#
| 7      | 6    | 5     | 4    | 3     | 2      | 1      | 0      |
#----------------------------------------------------------------*/

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

#define EEIF                                     0x4
#define EEIF_address                             0xFA1
#define EEIF_position                            0x4
#define EEIF_size                                0x1
#define EEIF_value_mask                          0x10
#define EEIF_clear_mask                          0xEF

#define USBIF                                    0x5
#define USBIF_address                            0xFA1
#define USBIF_position                           0x5
#define USBIF_size                               0x1
#define USBIF_value_mask                         0x20
#define USBIF_clear_mask                         0xDF

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


/*----------------------------------------------------------------#
| IPR2                                                      0xFA2 |
#-----------------------------------------------------------------#
| OSCFIP | CMIP | USBIP | EEIP | BCLIP | HLVDIP | TMR3IP | CCP2IP |
#-----------------------------------------------------------------#
| 7      | 6    | 5     | 4    | 3     | 2      | 1      | 0      |
#----------------------------------------------------------------*/

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

#define EEIP                                     0x4
#define EEIP_address                             0xFA2
#define EEIP_position                            0x4
#define EEIP_size                                0x1
#define EEIP_value_mask                          0x10
#define EEIP_clear_mask                          0xEF

#define USBIP                                    0x5
#define USBIP_address                            0xFA2
#define USBIP_position                           0x5
#define USBIP_size                               0x1
#define USBIP_value_mask                         0x20
#define USBIP_clear_mask                         0xDF

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

#define T3NSYNC                                  0x2
#define T3NSYNC_address                          0xFB1
#define T3NSYNC_position                         0x2
#define T3NSYNC_size                             0x1
#define T3NSYNC_value_mask                       0x4
#define T3NSYNC_clear_mask                       0xFB

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
| ECCP1DEL                                         0xFB7 |
#--------------------------------------------------------#
| PRSEN | PDC6 | PDC5 | PDC4 | PDC3 | PDC2 | PDC1 | PDC0 |
#--------------------------------------------------------#
| 7     | 6    | 5    | 4    | 3    | 2    | 1    | 0    |
#-------------------------------------------------------*/

#define ECCP1DEL                                 0x0
#define ECCP1DEL_address                         0xFB7
#define ECCP1DEL_position                        0x0
#define ECCP1DEL_size                            0x8
#define ECCP1DEL_value_mask                      0xFF
#define ECCP1DEL_clear_mask                      0x0

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
| ABDOVF | RCMT | RXCKP | TXCKP | BRG16 | - | W4E | ABDEN |
#---------------------------------------------------------#
| 7      | 6    | 5     | 4     | 3     | 2 | 1   | 0     |
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

#define TXCKP                                    0x4
#define TXCKP_address                            0xFB8
#define TXCKP_position                           0x4
#define TXCKP_size                               0x1
#define TXCKP_value_mask                         0x10
#define TXCKP_clear_mask                         0xEF

#define SCKP                                     0x4
#define SCKP_address                             0xFB8
#define SCKP_position                            0x4
#define SCKP_size                                0x1
#define SCKP_value_mask                          0x10
#define SCKP_clear_mask                          0xEF

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

#define RCMT                                     0x6
#define RCMT_address                             0xFB8
#define RCMT_position                            0x6
#define RCMT_size                                0x1
#define RCMT_value_mask                          0x40
#define RCMT_clear_mask                          0xBF

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


/*---------------------------------------------------#
| RCON                                         0xFD0 |
#----------------------------------------------------#
| nIPEN | SBOREN | - | nRI | TO | NOT_PD | POR | BOR |
#----------------------------------------------------#
| 7     | 6      | 5 | 4   | 3  | 2      | 1   | 0   |
#---------------------------------------------------*/

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

#define LVDL1                                    0x1
#define LVDL1_address                            0xFD2
#define LVDL1_position                           0x1
#define LVDL1_size                               0x1
#define LVDL1_value_mask                         0x2
#define LVDL1_clear_mask                         0xFD

#define LVV1                                     0x1
#define LVV1_address                             0xFD2
#define LVV1_position                            0x1
#define LVV1_size                                0x1
#define LVV1_value_mask                          0x2
#define LVV1_clear_mask                          0xFD

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

#define IVRST                                    0x5
#define IVRST_address                            0xFD2
#define IVRST_position                           0x5
#define IVRST_size                               0x1
#define IVRST_value_mask                         0x20
#define IVRST_clear_mask                         0xDF

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

#endif // _PIC18LF4455_H_
