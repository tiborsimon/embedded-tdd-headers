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

#ifndef _PIC12F675_H_
#define _PIC12F675_H_


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


/*--------------------------------------------#
| STATUS                                  0x3 |
#---------------------------------------------#
| IRP | RP1 | RP0 | nTO | nPD | ZERO | DC | C |
#---------------------------------------------#
| 7   | 6   | 5   | 4   | 3   | 2    | 1  | 0 |
#--------------------------------------------*/

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

#define RP0                                      0x5
#define RP0_address                              0x003
#define RP0_position                             0x5
#define RP0_size                                 0x1
#define RP0_value_mask                           0x20
#define RP0_clear_mask                           0xDF

#define RP                                       0x5
#define RP_address                               0x003
#define RP_position                              0x5
#define RP_size                                  0x2
#define RP_value_mask                            0x60
#define RP_clear_mask                            0x9F

#define RP1                                      0x6
#define RP1_address                              0x003
#define RP1_position                             0x6
#define RP1_size                                 0x1
#define RP1_value_mask                           0x40
#define RP1_clear_mask                           0xBF

#define IRP                                      0x7
#define IRP_address                              0x003
#define IRP_position                             0x7
#define IRP_size                                 0x1
#define IRP_value_mask                           0x80
#define IRP_clear_mask                           0x7F


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


/*------------------------------------------------------#
| GPIO                                              0x5 |
#-------------------------------------------------------#
| - | - | GPIO5 | GPIO4 | GPIO3 | GPIO2 | GPIO1 | GPIO0 |
#-------------------------------------------------------#
| 7 | 6 | 5     | 4     | 3     | 2     | 1     | 0     |
#------------------------------------------------------*/

#define GPIO                                     0x0
#define GPIO_address                             0x005
#define GPIO_position                            0x0
#define GPIO_size                                0x8
#define GPIO_value_mask                          0xFF
#define GPIO_clear_mask                          0x0

#define GPIO0                                    0x0
#define GPIO0_address                            0x005
#define GPIO0_position                           0x0
#define GPIO0_size                               0x1
#define GPIO0_value_mask                         0x1
#define GPIO0_clear_mask                         0xFE

#define GP0                                      0x0
#define GP0_address                              0x005
#define GP0_position                             0x0
#define GP0_size                                 0x1
#define GP0_value_mask                           0x1
#define GP0_clear_mask                           0xFE

#define GPIO1                                    0x1
#define GPIO1_address                            0x005
#define GPIO1_position                           0x1
#define GPIO1_size                               0x1
#define GPIO1_value_mask                         0x2
#define GPIO1_clear_mask                         0xFD

#define GP1                                      0x1
#define GP1_address                              0x005
#define GP1_position                             0x1
#define GP1_size                                 0x1
#define GP1_value_mask                           0x2
#define GP1_clear_mask                           0xFD

#define GPIO2                                    0x2
#define GPIO2_address                            0x005
#define GPIO2_position                           0x2
#define GPIO2_size                               0x1
#define GPIO2_value_mask                         0x4
#define GPIO2_clear_mask                         0xFB

#define GP2                                      0x2
#define GP2_address                              0x005
#define GP2_position                             0x2
#define GP2_size                                 0x1
#define GP2_value_mask                           0x4
#define GP2_clear_mask                           0xFB

#define GPIO3                                    0x3
#define GPIO3_address                            0x005
#define GPIO3_position                           0x3
#define GPIO3_size                               0x1
#define GPIO3_value_mask                         0x8
#define GPIO3_clear_mask                         0xF7

#define GP3                                      0x3
#define GP3_address                              0x005
#define GP3_position                             0x3
#define GP3_size                                 0x1
#define GP3_value_mask                           0x8
#define GP3_clear_mask                           0xF7

#define GPIO4                                    0x4
#define GPIO4_address                            0x005
#define GPIO4_position                           0x4
#define GPIO4_size                               0x1
#define GPIO4_value_mask                         0x10
#define GPIO4_clear_mask                         0xEF

#define GP4                                      0x4
#define GP4_address                              0x005
#define GP4_position                             0x4
#define GP4_size                                 0x1
#define GP4_value_mask                           0x10
#define GP4_clear_mask                           0xEF

#define GPIO5                                    0x5
#define GPIO5_address                            0x005
#define GPIO5_position                           0x5
#define GPIO5_size                               0x1
#define GPIO5_value_mask                         0x20
#define GPIO5_clear_mask                         0xDF

#define GP5                                      0x5
#define GP5_address                              0x005
#define GP5_position                             0x5
#define GP5_size                                 0x1
#define GP5_value_mask                           0x20
#define GP5_clear_mask                           0xDF


/*------------------------------#
| PCLATH                    0xA |
#-------------------------------#
| - | - | - | PCLATH            |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define PCLATH                                   0x0
#define PCLATH_address                           0x00A
#define PCLATH_position                          0x0
#define PCLATH_size                              0x5
#define PCLATH_value_mask                        0x1F
#define PCLATH_clear_mask                        0xE0


/*-----------------------------------------------------#
| INTCON                                           0xB |
#------------------------------------------------------#
| GIE | PEIE | T0IE | INTE | GPIE | T0IF | INTF | GPIF |
#------------------------------------------------------#
| 7   | 6    | 5    | 4    | 3    | 2    | 1    | 0    |
#-----------------------------------------------------*/

#define INTCON                                   0x0
#define INTCON_address                           0x00B
#define INTCON_position                          0x0
#define INTCON_size                              0x8
#define INTCON_value_mask                        0xFF
#define INTCON_clear_mask                        0x0

#define GPIF                                     0x0
#define GPIF_address                             0x00B
#define GPIF_position                            0x0
#define GPIF_size                                0x1
#define GPIF_value_mask                          0x1
#define GPIF_clear_mask                          0xFE

#define INTF                                     0x1
#define INTF_address                             0x00B
#define INTF_position                            0x1
#define INTF_size                                0x1
#define INTF_value_mask                          0x2
#define INTF_clear_mask                          0xFD

#define TMR0IF                                   0x2
#define TMR0IF_address                           0x00B
#define TMR0IF_position                          0x2
#define TMR0IF_size                              0x1
#define TMR0IF_value_mask                        0x4
#define TMR0IF_clear_mask                        0xFB

#define T0IF                                     0x2
#define T0IF_address                             0x00B
#define T0IF_position                            0x2
#define T0IF_size                                0x1
#define T0IF_value_mask                          0x4
#define T0IF_clear_mask                          0xFB

#define GPIE                                     0x3
#define GPIE_address                             0x00B
#define GPIE_position                            0x3
#define GPIE_size                                0x1
#define GPIE_value_mask                          0x8
#define GPIE_clear_mask                          0xF7

#define INTE                                     0x4
#define INTE_address                             0x00B
#define INTE_position                            0x4
#define INTE_size                                0x1
#define INTE_value_mask                          0x10
#define INTE_clear_mask                          0xEF

#define T0IE                                     0x5
#define T0IE_address                             0x00B
#define T0IE_position                            0x5
#define T0IE_size                                0x1
#define T0IE_value_mask                          0x20
#define T0IE_clear_mask                          0xDF

#define TMR0IE                                   0x5
#define TMR0IE_address                           0x00B
#define TMR0IE_position                          0x5
#define TMR0IE_size                              0x1
#define TMR0IE_value_mask                        0x20
#define TMR0IE_clear_mask                        0xDF

#define PEIE                                     0x6
#define PEIE_address                             0x00B
#define PEIE_position                            0x6
#define PEIE_size                                0x1
#define PEIE_value_mask                          0x40
#define PEIE_clear_mask                          0xBF

#define GIE                                      0x7
#define GIE_address                              0x00B
#define GIE_position                             0x7
#define GIE_size                                 0x1
#define GIE_value_mask                           0x80
#define GIE_clear_mask                           0x7F


/*------------------------------------------#
| PIR1                                  0xC |
#-------------------------------------------#
| EEIF | ADIF | - | - | CMIF | - | - | T1IF |
#-------------------------------------------#
| 7    | 6    | 5 | 4 | 3    | 2 | 1 | 0    |
#------------------------------------------*/

#define PIR1                                     0x0
#define PIR1_address                             0x00C
#define PIR1_position                            0x0
#define PIR1_size                                0x8
#define PIR1_value_mask                          0xFF
#define PIR1_clear_mask                          0x0

#define T1IF                                     0x0
#define T1IF_address                             0x00C
#define T1IF_position                            0x0
#define T1IF_size                                0x1
#define T1IF_value_mask                          0x1
#define T1IF_clear_mask                          0xFE

#define TMR1IF                                   0x0
#define TMR1IF_address                           0x00C
#define TMR1IF_position                          0x0
#define TMR1IF_size                              0x1
#define TMR1IF_value_mask                        0x1
#define TMR1IF_clear_mask                        0xFE

#define CMIF                                     0x3
#define CMIF_address                             0x00C
#define CMIF_position                            0x3
#define CMIF_size                                0x1
#define CMIF_value_mask                          0x8
#define CMIF_clear_mask                          0xF7

#define ADIF                                     0x6
#define ADIF_address                             0x00C
#define ADIF_position                            0x6
#define ADIF_size                                0x1
#define ADIF_value_mask                          0x40
#define ADIF_clear_mask                          0xBF

#define EEIF                                     0x7
#define EEIF_address                             0x00C
#define EEIF_position                            0x7
#define EEIF_size                                0x1
#define EEIF_value_mask                          0x80
#define EEIF_clear_mask                          0x7F


/*------------------------------#
| TMR1L                     0xE |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define TMR1L                                    0x0
#define TMR1L_address                            0x00E
#define TMR1L_position                           0x0
#define TMR1L_size                               0x8
#define TMR1L_value_mask                         0xFF
#define TMR1L_clear_mask                         0x0


/*------------------------------#
| TMR1H                     0xF |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define TMR1H                                    0x0
#define TMR1H_address                            0x00F
#define TMR1H_position                           0x0
#define TMR1H_size                               0x8
#define TMR1H_value_mask                         0xFF
#define TMR1H_clear_mask                         0x0


/*---------------------------------------------------------------------#
| T1CON                                                           0x10 |
#----------------------------------------------------------------------#
| - | TMR1GE | T1CKPS1 | T1CKPS0 | T1OSCEN | nT1SYNC | TMR1CS | TMR1ON |
#----------------------------------------------------------------------#
| 7 | 6      | 5       | 4       | 3       | 2       | 1      | 0      |
#---------------------------------------------------------------------*/

#define T1CON                                    0x0
#define T1CON_address                            0x010
#define T1CON_position                           0x0
#define T1CON_size                               0x8
#define T1CON_value_mask                         0xFF
#define T1CON_clear_mask                         0x0

#define TMR1ON                                   0x0
#define TMR1ON_address                           0x010
#define TMR1ON_position                          0x0
#define TMR1ON_size                              0x1
#define TMR1ON_value_mask                        0x1
#define TMR1ON_clear_mask                        0xFE

#define TMR1CS                                   0x1
#define TMR1CS_address                           0x010
#define TMR1CS_position                          0x1
#define TMR1CS_size                              0x1
#define TMR1CS_value_mask                        0x2
#define TMR1CS_clear_mask                        0xFD

#define nT1SYNC                                  0x2
#define nT1SYNC_address                          0x010
#define nT1SYNC_position                         0x2
#define nT1SYNC_size                             0x1
#define nT1SYNC_value_mask                       0x4
#define nT1SYNC_clear_mask                       0xFB

#define T1OSCEN                                  0x3
#define T1OSCEN_address                          0x010
#define T1OSCEN_position                         0x3
#define T1OSCEN_size                             0x1
#define T1OSCEN_value_mask                       0x8
#define T1OSCEN_clear_mask                       0xF7

#define T1CKPS0                                  0x4
#define T1CKPS0_address                          0x010
#define T1CKPS0_position                         0x4
#define T1CKPS0_size                             0x1
#define T1CKPS0_value_mask                       0x10
#define T1CKPS0_clear_mask                       0xEF

#define T1CKPS                                   0x4
#define T1CKPS_address                           0x010
#define T1CKPS_position                          0x4
#define T1CKPS_size                              0x2
#define T1CKPS_value_mask                        0x30
#define T1CKPS_clear_mask                        0xCF

#define T1CKPS1                                  0x5
#define T1CKPS1_address                          0x010
#define T1CKPS1_position                         0x5
#define T1CKPS1_size                             0x1
#define T1CKPS1_value_mask                       0x20
#define T1CKPS1_clear_mask                       0xDF

#define TMR1GE                                   0x6
#define TMR1GE_address                           0x010
#define TMR1GE_position                          0x6
#define TMR1GE_size                              0x1
#define TMR1GE_value_mask                        0x40
#define TMR1GE_clear_mask                        0xBF


/*--------------------------------------------#
| CMCON                                  0x19 |
#---------------------------------------------#
| - | COUT | - | CINV | CIS | CM2 | CM1 | CM0 |
#---------------------------------------------#
| 7 | 6    | 5 | 4    | 3   | 2   | 1   | 0   |
#--------------------------------------------*/

#define CMCON                                    0x0
#define CMCON_address                            0x019
#define CMCON_position                           0x0
#define CMCON_size                               0x8
#define CMCON_value_mask                         0xFF
#define CMCON_clear_mask                         0x0

#define CM                                       0x0
#define CM_address                               0x019
#define CM_position                              0x0
#define CM_size                                  0x3
#define CM_value_mask                            0x7
#define CM_clear_mask                            0xF8

#define CM0                                      0x0
#define CM0_address                              0x019
#define CM0_position                             0x0
#define CM0_size                                 0x1
#define CM0_value_mask                           0x1
#define CM0_clear_mask                           0xFE

#define CM1                                      0x1
#define CM1_address                              0x019
#define CM1_position                             0x1
#define CM1_size                                 0x1
#define CM1_value_mask                           0x2
#define CM1_clear_mask                           0xFD

#define CM2                                      0x2
#define CM2_address                              0x019
#define CM2_position                             0x2
#define CM2_size                                 0x1
#define CM2_value_mask                           0x4
#define CM2_clear_mask                           0xFB

#define CIS                                      0x3
#define CIS_address                              0x019
#define CIS_position                             0x3
#define CIS_size                                 0x1
#define CIS_value_mask                           0x8
#define CIS_clear_mask                           0xF7

#define CINV                                     0x4
#define CINV_address                             0x019
#define CINV_position                            0x4
#define CINV_size                                0x1
#define CINV_value_mask                          0x10
#define CINV_clear_mask                          0xEF

#define COUT                                     0x6
#define COUT_address                             0x019
#define COUT_position                            0x6
#define COUT_size                                0x1
#define COUT_value_mask                          0x40
#define COUT_clear_mask                          0xBF


/*------------------------------#
| ADRESH                   0x1E |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define ADRESH                                   0x0
#define ADRESH_address                           0x01E
#define ADRESH_position                          0x0
#define ADRESH_size                              0x8
#define ADRESH_value_mask                        0xFF
#define ADRESH_clear_mask                        0x0


/*-------------------------------------------------#
| ADCON0                                      0x1F |
#--------------------------------------------------#
| ADFM | VCFG | - | - | CHS1 | CHS0 | nDONE | ADON |
#--------------------------------------------------#
| 7    | 6    | 5 | 4 | 3    | 2    | 1     | 0    |
#-------------------------------------------------*/

#define ADCON0                                   0x0
#define ADCON0_address                           0x01F
#define ADCON0_position                          0x0
#define ADCON0_size                              0x8
#define ADCON0_value_mask                        0xFF
#define ADCON0_clear_mask                        0x0

#define ADON                                     0x0
#define ADON_address                             0x01F
#define ADON_position                            0x0
#define ADON_size                                0x1
#define ADON_value_mask                          0x1
#define ADON_clear_mask                          0xFE

#define nDONE                                    0x1
#define nDONE_address                            0x01F
#define nDONE_position                           0x1
#define nDONE_size                               0x1
#define nDONE_value_mask                         0x2
#define nDONE_clear_mask                         0xFD

#define GO_nDONE                                 0x1
#define GO_nDONE_address                         0x01F
#define GO_nDONE_position                        0x1
#define GO_nDONE_size                            0x1
#define GO_nDONE_value_mask                      0x2
#define GO_nDONE_clear_mask                      0xFD

#define GO_DONE                                  0x1
#define GO_DONE_address                          0x01F
#define GO_DONE_position                         0x1
#define GO_DONE_size                             0x1
#define GO_DONE_value_mask                       0x2
#define GO_DONE_clear_mask                       0xFD

#define GO                                       0x1
#define GO_address                               0x01F
#define GO_position                              0x1
#define GO_size                                  0x1
#define GO_value_mask                            0x2
#define GO_clear_mask                            0xFD

#define CHS                                      0x2
#define CHS_address                              0x01F
#define CHS_position                             0x2
#define CHS_size                                 0x2
#define CHS_value_mask                           0xC
#define CHS_clear_mask                           0xF3

#define CHS0                                     0x2
#define CHS0_address                             0x01F
#define CHS0_position                            0x2
#define CHS0_size                                0x1
#define CHS0_value_mask                          0x4
#define CHS0_clear_mask                          0xFB

#define CHS1                                     0x3
#define CHS1_address                             0x01F
#define CHS1_position                            0x3
#define CHS1_size                                0x1
#define CHS1_value_mask                          0x8
#define CHS1_clear_mask                          0xF7

#define VCFG                                     0x6
#define VCFG_address                             0x01F
#define VCFG_position                            0x6
#define VCFG_size                                0x1
#define VCFG_value_mask                          0x40
#define VCFG_clear_mask                          0xBF

#define ADFM                                     0x7
#define ADFM_address                             0x01F
#define ADFM_position                            0x7
#define ADFM_size                                0x1
#define ADFM_value_mask                          0x80
#define ADFM_clear_mask                          0x7F


/*-----------------------------------------------------#
| OPTION_REG                                      0x81 |
#------------------------------------------------------#
| nGPPU | INTEDG | T0CS | T0SE | PSA | PS2 | PS1 | PS0 |
#------------------------------------------------------#
| 7     | 6      | 5    | 4    | 3   | 2   | 1   | 0   |
#-----------------------------------------------------*/

#define OPTION_REG                               0x0
#define OPTION_REG_address                       0x081
#define OPTION_REG_position                      0x0
#define OPTION_REG_size                          0x8
#define OPTION_REG_value_mask                    0xFF
#define OPTION_REG_clear_mask                    0x0

#define PS                                       0x0
#define PS_address                               0x081
#define PS_position                              0x0
#define PS_size                                  0x3
#define PS_value_mask                            0x7
#define PS_clear_mask                            0xF8

#define PS0                                      0x0
#define PS0_address                              0x081
#define PS0_position                             0x0
#define PS0_size                                 0x1
#define PS0_value_mask                           0x1
#define PS0_clear_mask                           0xFE

#define PS1                                      0x1
#define PS1_address                              0x081
#define PS1_position                             0x1
#define PS1_size                                 0x1
#define PS1_value_mask                           0x2
#define PS1_clear_mask                           0xFD

#define PS2                                      0x2
#define PS2_address                              0x081
#define PS2_position                             0x2
#define PS2_size                                 0x1
#define PS2_value_mask                           0x4
#define PS2_clear_mask                           0xFB

#define PSA                                      0x3
#define PSA_address                              0x081
#define PSA_position                             0x3
#define PSA_size                                 0x1
#define PSA_value_mask                           0x8
#define PSA_clear_mask                           0xF7

#define T0SE                                     0x4
#define T0SE_address                             0x081
#define T0SE_position                            0x4
#define T0SE_size                                0x1
#define T0SE_value_mask                          0x10
#define T0SE_clear_mask                          0xEF

#define T0CS                                     0x5
#define T0CS_address                             0x081
#define T0CS_position                            0x5
#define T0CS_size                                0x1
#define T0CS_value_mask                          0x20
#define T0CS_clear_mask                          0xDF

#define INTEDG                                   0x6
#define INTEDG_address                           0x081
#define INTEDG_position                          0x6
#define INTEDG_size                              0x1
#define INTEDG_value_mask                        0x40
#define INTEDG_clear_mask                        0xBF

#define nGPPU                                    0x7
#define nGPPU_address                            0x081
#define nGPPU_position                           0x7
#define nGPPU_size                               0x1
#define nGPPU_value_mask                         0x80
#define nGPPU_clear_mask                         0x7F


/*------------------------------------------------------------------#
| TRISIO                                                       0x85 |
#-------------------------------------------------------------------#
| - | - | TRISIO5 | TRISIO4 | TRISIO3 | TRISIO2 | TRISIO1 | TRISIO0 |
#-------------------------------------------------------------------#
| 7 | 6 | 5       | 4       | 3       | 2       | 1       | 0       |
#------------------------------------------------------------------*/

#define TRISIO                                   0x0
#define TRISIO_address                           0x085
#define TRISIO_position                          0x0
#define TRISIO_size                              0x8
#define TRISIO_value_mask                        0xFF
#define TRISIO_clear_mask                        0x0

#define TRISIO0                                  0x0
#define TRISIO0_address                          0x085
#define TRISIO0_position                         0x0
#define TRISIO0_size                             0x1
#define TRISIO0_value_mask                       0x1
#define TRISIO0_clear_mask                       0xFE

#define TRISIO1                                  0x1
#define TRISIO1_address                          0x085
#define TRISIO1_position                         0x1
#define TRISIO1_size                             0x1
#define TRISIO1_value_mask                       0x2
#define TRISIO1_clear_mask                       0xFD

#define TRISIO2                                  0x2
#define TRISIO2_address                          0x085
#define TRISIO2_position                         0x2
#define TRISIO2_size                             0x1
#define TRISIO2_value_mask                       0x4
#define TRISIO2_clear_mask                       0xFB

#define TRISIO3                                  0x3
#define TRISIO3_address                          0x085
#define TRISIO3_position                         0x3
#define TRISIO3_size                             0x1
#define TRISIO3_value_mask                       0x8
#define TRISIO3_clear_mask                       0xF7

#define TRISIO4                                  0x4
#define TRISIO4_address                          0x085
#define TRISIO4_position                         0x4
#define TRISIO4_size                             0x1
#define TRISIO4_value_mask                       0x10
#define TRISIO4_clear_mask                       0xEF

#define TRISIO5                                  0x5
#define TRISIO5_address                          0x085
#define TRISIO5_position                         0x5
#define TRISIO5_size                             0x1
#define TRISIO5_value_mask                       0x20
#define TRISIO5_clear_mask                       0xDF


/*------------------------------------------#
| PIE1                                 0x8C |
#-------------------------------------------#
| EEIE | ADIE | - | - | CMIE | - | - | T1IE |
#-------------------------------------------#
| 7    | 6    | 5 | 4 | 3    | 2 | 1 | 0    |
#------------------------------------------*/

#define PIE1                                     0x0
#define PIE1_address                             0x08C
#define PIE1_position                            0x0
#define PIE1_size                                0x8
#define PIE1_value_mask                          0xFF
#define PIE1_clear_mask                          0x0

#define T1IE                                     0x0
#define T1IE_address                             0x08C
#define T1IE_position                            0x0
#define T1IE_size                                0x1
#define T1IE_value_mask                          0x1
#define T1IE_clear_mask                          0xFE

#define TMR1IE                                   0x0
#define TMR1IE_address                           0x08C
#define TMR1IE_position                          0x0
#define TMR1IE_size                              0x1
#define TMR1IE_value_mask                        0x1
#define TMR1IE_clear_mask                        0xFE

#define CMIE                                     0x3
#define CMIE_address                             0x08C
#define CMIE_position                            0x3
#define CMIE_size                                0x1
#define CMIE_value_mask                          0x8
#define CMIE_clear_mask                          0xF7

#define ADIE                                     0x6
#define ADIE_address                             0x08C
#define ADIE_position                            0x6
#define ADIE_size                                0x1
#define ADIE_value_mask                          0x40
#define ADIE_clear_mask                          0xBF

#define EEIE                                     0x7
#define EEIE_address                             0x08C
#define EEIE_position                            0x7
#define EEIE_size                                0x1
#define EEIE_value_mask                          0x80
#define EEIE_clear_mask                          0x7F


/*------------------------------------#
| PCON                           0x8E |
#-------------------------------------#
| - | - | - | - | - | - | nPOR | nBOR |
#-------------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1    | 0    |
#------------------------------------*/

#define PCON                                     0x0
#define PCON_address                             0x08E
#define PCON_position                            0x0
#define PCON_size                                0x8
#define PCON_value_mask                          0xFF
#define PCON_clear_mask                          0x0

#define nBOR                                     0x0
#define nBOR_address                             0x08E
#define nBOR_position                            0x0
#define nBOR_size                                0x1
#define nBOR_value_mask                          0x1
#define nBOR_clear_mask                          0xFE

#define nBOD                                     0x0
#define nBOD_address                             0x08E
#define nBOD_position                            0x0
#define nBOD_size                                0x1
#define nBOD_value_mask                          0x1
#define nBOD_clear_mask                          0xFE

#define nPOR                                     0x1
#define nPOR_address                             0x08E
#define nPOR_position                            0x1
#define nPOR_size                                0x1
#define nPOR_value_mask                          0x2
#define nPOR_clear_mask                          0xFD


/*------------------------------------------------#
| OSCCAL                                     0x90 |
#-------------------------------------------------#
| CAL5 | CAL4 | CAL3 | CAL2 | CAL1 | CAL0 | - | - |
#-------------------------------------------------#
| 7    | 6    | 5    | 4    | 3    | 2    | 1 | 0 |
#------------------------------------------------*/

#define OSCCAL                                   0x0
#define OSCCAL_address                           0x090
#define OSCCAL_position                          0x0
#define OSCCAL_size                              0x8
#define OSCCAL_value_mask                        0xFF
#define OSCCAL_clear_mask                        0x0

#define CAL0                                     0x2
#define CAL0_address                             0x090
#define CAL0_position                            0x2
#define CAL0_size                                0x1
#define CAL0_value_mask                          0x4
#define CAL0_clear_mask                          0xFB

#define CAL                                      0x2
#define CAL_address                              0x090
#define CAL_position                             0x2
#define CAL_size                                 0x6
#define CAL_value_mask                           0xFC
#define CAL_clear_mask                           0x3

#define CAL1                                     0x3
#define CAL1_address                             0x090
#define CAL1_position                            0x3
#define CAL1_size                                0x1
#define CAL1_value_mask                          0x8
#define CAL1_clear_mask                          0xF7

#define CAL2                                     0x4
#define CAL2_address                             0x090
#define CAL2_position                            0x4
#define CAL2_size                                0x1
#define CAL2_value_mask                          0x10
#define CAL2_clear_mask                          0xEF

#define CAL3                                     0x5
#define CAL3_address                             0x090
#define CAL3_position                            0x5
#define CAL3_size                                0x1
#define CAL3_value_mask                          0x20
#define CAL3_clear_mask                          0xDF

#define CAL4                                     0x6
#define CAL4_address                             0x090
#define CAL4_position                            0x6
#define CAL4_size                                0x1
#define CAL4_value_mask                          0x40
#define CAL4_clear_mask                          0xBF

#define CAL5                                     0x7
#define CAL5_address                             0x090
#define CAL5_position                            0x7
#define CAL5_size                                0x1
#define CAL5_value_mask                          0x80
#define CAL5_clear_mask                          0x7F


/*---------------------------------------------#
| WPU                                     0x95 |
#----------------------------------------------#
| - | - | WPU5 | WPU4 | - | WPU2 | WPU1 | WPU0 |
#----------------------------------------------#
| 7 | 6 | 5    | 4    | 3 | 2    | 1    | 0    |
#---------------------------------------------*/

#define WPU                                      0x0
#define WPU_address                              0x095
#define WPU_position                             0x0
#define WPU_size                                 0x8
#define WPU_value_mask                           0xFF
#define WPU_clear_mask                           0x0

#define WPU0                                     0x0
#define WPU0_address                             0x095
#define WPU0_position                            0x0
#define WPU0_size                                0x1
#define WPU0_value_mask                          0x1
#define WPU0_clear_mask                          0xFE

#define WPU1                                     0x1
#define WPU1_address                             0x095
#define WPU1_position                            0x1
#define WPU1_size                                0x1
#define WPU1_value_mask                          0x2
#define WPU1_clear_mask                          0xFD

#define WPU2                                     0x2
#define WPU2_address                             0x095
#define WPU2_position                            0x2
#define WPU2_size                                0x1
#define WPU2_value_mask                          0x4
#define WPU2_clear_mask                          0xFB

#define WPU4                                     0x4
#define WPU4_address                             0x095
#define WPU4_position                            0x4
#define WPU4_size                                0x1
#define WPU4_value_mask                          0x10
#define WPU4_clear_mask                          0xEF

#define WPU5                                     0x5
#define WPU5_address                             0x095
#define WPU5_position                            0x5
#define WPU5_size                                0x1
#define WPU5_value_mask                          0x20
#define WPU5_clear_mask                          0xDF


/*--------------------------------------------------#
| IOC                                          0x96 |
#---------------------------------------------------#
| - | - | IOCB5 | IOCB4 | IOC3 | IOC2 | IOC1 | IOC0 |
#---------------------------------------------------#
| 7 | 6 | 5     | 4     | 3    | 2    | 1    | 0    |
#--------------------------------------------------*/

#define IOC                                      0x0
#define IOC_address                              0x096
#define IOC_position                             0x0
#define IOC_size                                 0x8
#define IOC_value_mask                           0xFF
#define IOC_clear_mask                           0x0

#define IOC0                                     0x0
#define IOC0_address                             0x096
#define IOC0_position                            0x0
#define IOC0_size                                0x1
#define IOC0_value_mask                          0x1
#define IOC0_clear_mask                          0xFE

#define IOCB0                                    0x0
#define IOCB0_address                            0x096
#define IOCB0_position                           0x0
#define IOCB0_size                               0x1
#define IOCB0_value_mask                         0x1
#define IOCB0_clear_mask                         0xFE

#define IOC1                                     0x1
#define IOC1_address                             0x096
#define IOC1_position                            0x1
#define IOC1_size                                0x1
#define IOC1_value_mask                          0x2
#define IOC1_clear_mask                          0xFD

#define IOCB1                                    0x1
#define IOCB1_address                            0x096
#define IOCB1_position                           0x1
#define IOCB1_size                               0x1
#define IOCB1_value_mask                         0x2
#define IOCB1_clear_mask                         0xFD

#define IOC2                                     0x2
#define IOC2_address                             0x096
#define IOC2_position                            0x2
#define IOC2_size                                0x1
#define IOC2_value_mask                          0x4
#define IOC2_clear_mask                          0xFB

#define IOCB2                                    0x2
#define IOCB2_address                            0x096
#define IOCB2_position                           0x2
#define IOCB2_size                               0x1
#define IOCB2_value_mask                         0x4
#define IOCB2_clear_mask                         0xFB

#define IOCB3                                    0x3
#define IOCB3_address                            0x096
#define IOCB3_position                           0x3
#define IOCB3_size                               0x1
#define IOCB3_value_mask                         0x8
#define IOCB3_clear_mask                         0xF7

#define IOC3                                     0x3
#define IOC3_address                             0x096
#define IOC3_position                            0x3
#define IOC3_size                                0x1
#define IOC3_value_mask                          0x8
#define IOC3_clear_mask                          0xF7

#define IOCB4                                    0x4
#define IOCB4_address                            0x096
#define IOCB4_position                           0x4
#define IOCB4_size                               0x1
#define IOCB4_value_mask                         0x10
#define IOCB4_clear_mask                         0xEF

#define IOC4                                     0x4
#define IOC4_address                             0x096
#define IOC4_position                            0x4
#define IOC4_size                                0x1
#define IOC4_value_mask                          0x10
#define IOC4_clear_mask                          0xEF

#define IOC5                                     0x5
#define IOC5_address                             0x096
#define IOC5_position                            0x5
#define IOC5_size                                0x1
#define IOC5_value_mask                          0x20
#define IOC5_clear_mask                          0xDF

#define IOCB5                                    0x5
#define IOCB5_address                            0x096
#define IOCB5_position                           0x5
#define IOCB5_size                               0x1
#define IOCB5_value_mask                         0x20
#define IOCB5_clear_mask                         0xDF


/*-------------------------------------------#
| VRCON                                 0x99 |
#--------------------------------------------#
| VREN | - | VRR | - | VR3 | VR2 | VR1 | VR0 |
#--------------------------------------------#
| 7    | 6 | 5   | 4 | 3   | 2   | 1   | 0   |
#-------------------------------------------*/

#define VRCON                                    0x0
#define VRCON_address                            0x099
#define VRCON_position                           0x0
#define VRCON_size                               0x8
#define VRCON_value_mask                         0xFF
#define VRCON_clear_mask                         0x0

#define VR0                                      0x0
#define VR0_address                              0x099
#define VR0_position                             0x0
#define VR0_size                                 0x1
#define VR0_value_mask                           0x1
#define VR0_clear_mask                           0xFE

#define VR                                       0x0
#define VR_address                               0x099
#define VR_position                              0x0
#define VR_size                                  0x4
#define VR_value_mask                            0xF
#define VR_clear_mask                            0xF0

#define VR1                                      0x1
#define VR1_address                              0x099
#define VR1_position                             0x1
#define VR1_size                                 0x1
#define VR1_value_mask                           0x2
#define VR1_clear_mask                           0xFD

#define VR2                                      0x2
#define VR2_address                              0x099
#define VR2_position                             0x2
#define VR2_size                                 0x1
#define VR2_value_mask                           0x4
#define VR2_clear_mask                           0xFB

#define VR3                                      0x3
#define VR3_address                              0x099
#define VR3_position                             0x3
#define VR3_size                                 0x1
#define VR3_value_mask                           0x8
#define VR3_clear_mask                           0xF7

#define VRR                                      0x5
#define VRR_address                              0x099
#define VRR_position                             0x5
#define VRR_size                                 0x1
#define VRR_value_mask                           0x20
#define VRR_clear_mask                           0xDF

#define VREN                                     0x7
#define VREN_address                             0x099
#define VREN_position                            0x7
#define VREN_size                                0x1
#define VREN_value_mask                          0x80
#define VREN_clear_mask                          0x7F


/*------------------------------#
| EEDATA                   0x9A |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define EEDATA                                   0x0
#define EEDATA_address                           0x09A
#define EEDATA_position                          0x0
#define EEDATA_size                              0x8
#define EEDATA_value_mask                        0xFF
#define EEDATA_clear_mask                        0x0


/*------------------------------#
| EEADR                    0x9B |
#-------------------------------#
| - | EEADR                     |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define EEADR                                    0x0
#define EEADR_address                            0x09B
#define EEADR_position                           0x0
#define EEADR_size                               0x7
#define EEADR_value_mask                         0x7F
#define EEADR_clear_mask                         0x80


/*---------------------------------------#
| EECON1                            0x9C |
#----------------------------------------#
| - | - | - | - | WRERR | WREN | WR | RD |
#----------------------------------------#
| 7 | 6 | 5 | 4 | 3     | 2    | 1  | 0  |
#---------------------------------------*/

#define EECON1                                   0x0
#define EECON1_address                           0x09C
#define EECON1_position                          0x0
#define EECON1_size                              0x8
#define EECON1_value_mask                        0xFF
#define EECON1_clear_mask                        0x0

#define RD                                       0x0
#define RD_address                               0x09C
#define RD_position                              0x0
#define RD_size                                  0x1
#define RD_value_mask                            0x1
#define RD_clear_mask                            0xFE

#define WR                                       0x1
#define WR_address                               0x09C
#define WR_position                              0x1
#define WR_size                                  0x1
#define WR_value_mask                            0x2
#define WR_clear_mask                            0xFD

#define WREN                                     0x2
#define WREN_address                             0x09C
#define WREN_position                            0x2
#define WREN_size                                0x1
#define WREN_value_mask                          0x4
#define WREN_clear_mask                          0xFB

#define WRERR                                    0x3
#define WRERR_address                            0x09C
#define WRERR_position                           0x3
#define WRERR_size                               0x1
#define WRERR_value_mask                         0x8
#define WRERR_clear_mask                         0xF7


/*------------------------------#
| EECON2                   0x9D |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define EECON2                                   0x0
#define EECON2_address                           0x09D
#define EECON2_position                          0x0
#define EECON2_size                              0x8
#define EECON2_value_mask                        0xFF
#define EECON2_clear_mask                        0x0


/*------------------------------#
| ADRESL                   0x9E |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define ADRESL                                   0x0
#define ADRESL_address                           0x09E
#define ADRESL_position                          0x0
#define ADRESL_size                              0x8
#define ADRESL_value_mask                        0xFF
#define ADRESL_clear_mask                        0x0


/*------------------------------------------------------#
| ANSEL                                            0x9F |
#-------------------------------------------------------#
| - | ADCS2 | ADCS1 | ADCS0 | ANS3 | ANS2 | ANS1 | ANS0 |
#-------------------------------------------------------#
| 7 | 6     | 5     | 4     | 3    | 2    | 1    | 0    |
#------------------------------------------------------*/

#define ANSEL                                    0x0
#define ANSEL_address                            0x09F
#define ANSEL_position                           0x0
#define ANSEL_size                               0x8
#define ANSEL_value_mask                         0xFF
#define ANSEL_clear_mask                         0x0

#define ANS0                                     0x0
#define ANS0_address                             0x09F
#define ANS0_position                            0x0
#define ANS0_size                                0x1
#define ANS0_value_mask                          0x1
#define ANS0_clear_mask                          0xFE

#define ANS                                      0x0
#define ANS_address                              0x09F
#define ANS_position                             0x0
#define ANS_size                                 0x4
#define ANS_value_mask                           0xF
#define ANS_clear_mask                           0xF0

#define ANS1                                     0x1
#define ANS1_address                             0x09F
#define ANS1_position                            0x1
#define ANS1_size                                0x1
#define ANS1_value_mask                          0x2
#define ANS1_clear_mask                          0xFD

#define ANS2                                     0x2
#define ANS2_address                             0x09F
#define ANS2_position                            0x2
#define ANS2_size                                0x1
#define ANS2_value_mask                          0x4
#define ANS2_clear_mask                          0xFB

#define ANS3                                     0x3
#define ANS3_address                             0x09F
#define ANS3_position                            0x3
#define ANS3_size                                0x1
#define ANS3_value_mask                          0x8
#define ANS3_clear_mask                          0xF7

#define ADCS0                                    0x4
#define ADCS0_address                            0x09F
#define ADCS0_position                           0x4
#define ADCS0_size                               0x1
#define ADCS0_value_mask                         0x10
#define ADCS0_clear_mask                         0xEF

#define ADCS                                     0x4
#define ADCS_address                             0x09F
#define ADCS_position                            0x4
#define ADCS_size                                0x3
#define ADCS_value_mask                          0x70
#define ADCS_clear_mask                          0x8F

#define ADCS1                                    0x5
#define ADCS1_address                            0x09F
#define ADCS1_position                           0x5
#define ADCS1_size                               0x1
#define ADCS1_value_mask                         0x20
#define ADCS1_clear_mask                         0xDF

#define ADCS2                                    0x6
#define ADCS2_address                            0x09F
#define ADCS2_position                           0x6
#define ADCS2_size                               0x1
#define ADCS2_value_mask                         0x40
#define ADCS2_clear_mask                         0xBF

#endif // _PIC12F675_H_
