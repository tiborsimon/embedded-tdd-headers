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

#ifndef _PIC12F609_H_
#define _PIC12F609_H_


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

#define RA0                                      0x0
#define RA0_address                              0x005
#define RA0_position                             0x0
#define RA0_size                                 0x1
#define RA0_value_mask                           0x1
#define RA0_clear_mask                           0xFE

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

#define RA1                                      0x1
#define RA1_address                              0x005
#define RA1_position                             0x1
#define RA1_size                                 0x1
#define RA1_value_mask                           0x2
#define RA1_clear_mask                           0xFD

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

#define RA2                                      0x2
#define RA2_address                              0x005
#define RA2_position                             0x2
#define RA2_size                                 0x1
#define RA2_value_mask                           0x4
#define RA2_clear_mask                           0xFB

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

#define RA3                                      0x3
#define RA3_address                              0x005
#define RA3_position                             0x3
#define RA3_size                                 0x1
#define RA3_value_mask                           0x8
#define RA3_clear_mask                           0xF7

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

#define RA4                                      0x4
#define RA4_address                              0x005
#define RA4_position                             0x4
#define RA4_size                                 0x1
#define RA4_value_mask                           0x10
#define RA4_clear_mask                           0xEF

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

#define RA5                                      0x5
#define RA5_address                              0x005
#define RA5_position                             0x5
#define RA5_size                                 0x1
#define RA5_value_mask                           0x20
#define RA5_clear_mask                           0xDF

#define GP5                                      0x5
#define GP5_address                              0x005
#define GP5_position                             0x5
#define GP5_size                                 0x1
#define GP5_value_mask                           0x20
#define GP5_clear_mask                           0xDF


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


/*------------------------------------#
| PIR1                            0xC |
#-------------------------------------#
| - | - | - | - | C1IF | - | - | T1IF |
#-------------------------------------#
| 7 | 6 | 5 | 4 | 3    | 2 | 1 | 0    |
#------------------------------------*/

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

#define C1IF                                     0x3
#define C1IF_address                             0x00C
#define C1IF_position                            0x3
#define C1IF_size                                0x1
#define C1IF_value_mask                          0x8
#define C1IF_clear_mask                          0xF7

#define CMIF                                     0x3
#define CMIF_address                             0x00C
#define CMIF_position                            0x3
#define CMIF_size                                0x1
#define CMIF_value_mask                          0x8
#define CMIF_clear_mask                          0xF7


/*--------------------------------------------------------------------------#
| T1CON                                                                0x10 |
#---------------------------------------------------------------------------#
| T1GINV | TMR1GE | T1CKPS1 | T1CKPS0 | T1OSCEN | nT1SYNC | TMR1CS | TMR1ON |
#---------------------------------------------------------------------------#
| 7      | 6      | 5       | 4       | 3       | 2       | 1      | 0      |
#--------------------------------------------------------------------------*/

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

#define T1GINV                                   0x7
#define T1GINV_address                           0x010
#define T1GINV_position                          0x7
#define T1GINV_size                              0x1
#define T1GINV_value_mask                        0x80
#define T1GINV_clear_mask                        0x7F


/*-------------------------------------------------#
| VRCON                                       0x19 |
#--------------------------------------------------#
| CMVREN | - | VRR | VP6EN | VR3 | VR2 | VR1 | VR0 |
#--------------------------------------------------#
| 7      | 6 | 5   | 4     | 3   | 2   | 1   | 0   |
#-------------------------------------------------*/

#define VRCON                                    0x0
#define VRCON_address                            0x019
#define VRCON_position                           0x0
#define VRCON_size                               0x8
#define VRCON_value_mask                         0xFF
#define VRCON_clear_mask                         0x0

#define VR0                                      0x0
#define VR0_address                              0x019
#define VR0_position                             0x0
#define VR0_size                                 0x1
#define VR0_value_mask                           0x1
#define VR0_clear_mask                           0xFE

#define VR                                       0x0
#define VR_address                               0x019
#define VR_position                              0x0
#define VR_size                                  0x4
#define VR_value_mask                            0xF
#define VR_clear_mask                            0xF0

#define VR1                                      0x1
#define VR1_address                              0x019
#define VR1_position                             0x1
#define VR1_size                                 0x1
#define VR1_value_mask                           0x2
#define VR1_clear_mask                           0xFD

#define VR2                                      0x2
#define VR2_address                              0x019
#define VR2_position                             0x2
#define VR2_size                                 0x1
#define VR2_value_mask                           0x4
#define VR2_clear_mask                           0xFB

#define VR3                                      0x3
#define VR3_address                              0x019
#define VR3_position                             0x3
#define VR3_size                                 0x1
#define VR3_value_mask                           0x8
#define VR3_clear_mask                           0xF7

#define VP6EN                                    0x4
#define VP6EN_address                            0x019
#define VP6EN_position                           0x4
#define VP6EN_size                               0x1
#define VP6EN_value_mask                         0x10
#define VP6EN_clear_mask                         0xEF

#define FBREN                                    0x4
#define FBREN_address                            0x019
#define FBREN_position                           0x4
#define FBREN_size                               0x1
#define FBREN_value_mask                         0x10
#define FBREN_clear_mask                         0xEF

#define FVREN                                    0x4
#define FVREN_address                            0x019
#define FVREN_position                           0x4
#define FVREN_size                               0x1
#define FVREN_value_mask                         0x10
#define FVREN_clear_mask                         0xEF

#define VRR                                      0x5
#define VRR_address                              0x019
#define VRR_position                             0x5
#define VRR_size                                 0x1
#define VRR_value_mask                           0x20
#define VRR_clear_mask                           0xDF

#define CMVREN                                   0x7
#define CMVREN_address                           0x019
#define CMVREN_position                          0x7
#define CMVREN_size                              0x1
#define CMVREN_value_mask                        0x80
#define CMVREN_clear_mask                        0x7F

#define C1VREN                                   0x7
#define C1VREN_address                           0x019
#define C1VREN_position                          0x7
#define C1VREN_size                              0x1
#define C1VREN_value_mask                        0x80
#define C1VREN_clear_mask                        0x7F


/*------------------------------------------------#
| CMCON0                                     0x1A |
#-------------------------------------------------#
| CMON | COUT | CMOE | CMPOL | - | C1R | - | CMCH |
#-------------------------------------------------#
| 7    | 6    | 5    | 4     | 3 | 2   | 1 | 0    |
#------------------------------------------------*/

#define CMCON0                                   0x0
#define CMCON0_address                           0x01A
#define CMCON0_position                          0x0
#define CMCON0_size                              0x8
#define CMCON0_value_mask                        0xFF
#define CMCON0_clear_mask                        0x0

#define CMCH                                     0x0
#define CMCH_address                             0x01A
#define CMCH_position                            0x0
#define CMCH_size                                0x1
#define CMCH_value_mask                          0x1
#define CMCH_clear_mask                          0xFE

#define C1CH                                     0x0
#define C1CH_address                             0x01A
#define C1CH_position                            0x0
#define C1CH_size                                0x1
#define C1CH_value_mask                          0x1
#define C1CH_clear_mask                          0xFE

#define C1CH0                                    0x0
#define C1CH0_address                            0x01A
#define C1CH0_position                           0x0
#define C1CH0_size                               0x1
#define C1CH0_value_mask                         0x1
#define C1CH0_clear_mask                         0xFE

#define C1R                                      0x2
#define C1R_address                              0x01A
#define C1R_position                             0x2
#define C1R_size                                 0x1
#define C1R_value_mask                           0x4
#define C1R_clear_mask                           0xFB

#define CMR                                      0x2
#define CMR_address                              0x01A
#define CMR_position                             0x2
#define CMR_size                                 0x1
#define CMR_value_mask                           0x4
#define CMR_clear_mask                           0xFB

#define CMPOL                                    0x4
#define CMPOL_address                            0x01A
#define CMPOL_position                           0x4
#define CMPOL_size                               0x1
#define CMPOL_value_mask                         0x10
#define CMPOL_clear_mask                         0xEF

#define C1POL                                    0x4
#define C1POL_address                            0x01A
#define C1POL_position                           0x4
#define C1POL_size                               0x1
#define C1POL_value_mask                         0x10
#define C1POL_clear_mask                         0xEF

#define CMOE                                     0x5
#define CMOE_address                             0x01A
#define CMOE_position                            0x5
#define CMOE_size                                0x1
#define CMOE_value_mask                          0x20
#define CMOE_clear_mask                          0xDF

#define C1OE                                     0x5
#define C1OE_address                             0x01A
#define C1OE_position                            0x5
#define C1OE_size                                0x1
#define C1OE_value_mask                          0x20
#define C1OE_clear_mask                          0xDF

#define COUT                                     0x6
#define COUT_address                             0x01A
#define COUT_position                            0x6
#define COUT_size                                0x1
#define COUT_value_mask                          0x40
#define COUT_clear_mask                          0xBF

#define C1OUT                                    0x6
#define C1OUT_address                            0x01A
#define C1OUT_position                           0x6
#define C1OUT_size                               0x1
#define C1OUT_value_mask                         0x40
#define C1OUT_clear_mask                         0xBF

#define CMON                                     0x7
#define CMON_address                             0x01A
#define CMON_position                            0x7
#define CMON_size                                0x1
#define CMON_value_mask                          0x80
#define CMON_clear_mask                          0x7F

#define C1ON                                     0x7
#define C1ON_address                             0x01A
#define C1ON_position                            0x7
#define C1ON_size                                0x1
#define C1ON_value_mask                          0x80
#define C1ON_clear_mask                          0x7F


/*-----------------------------------------------#
| CMCON1                                    0x1C |
#------------------------------------------------#
| - | - | - | T1ACS | CMHYS | - | T1GSS | CMSYNC |
#------------------------------------------------#
| 7 | 6 | 5 | 4     | 3     | 2 | 1     | 0      |
#-----------------------------------------------*/

#define CMCON1                                   0x0
#define CMCON1_address                           0x01C
#define CMCON1_position                          0x0
#define CMCON1_size                              0x8
#define CMCON1_value_mask                        0xFF
#define CMCON1_clear_mask                        0x0

#define CMSYNC                                   0x0
#define CMSYNC_address                           0x01C
#define CMSYNC_position                          0x0
#define CMSYNC_size                              0x1
#define CMSYNC_value_mask                        0x1
#define CMSYNC_clear_mask                        0xFE

#define C1SYNC                                   0x0
#define C1SYNC_address                           0x01C
#define C1SYNC_position                          0x0
#define C1SYNC_size                              0x1
#define C1SYNC_value_mask                        0x1
#define C1SYNC_clear_mask                        0xFE

#define T1GSS                                    0x1
#define T1GSS_address                            0x01C
#define T1GSS_position                           0x1
#define T1GSS_size                               0x1
#define T1GSS_value_mask                         0x2
#define T1GSS_clear_mask                         0xFD

#define CMHYS                                    0x3
#define CMHYS_address                            0x01C
#define CMHYS_position                           0x3
#define CMHYS_size                               0x1
#define CMHYS_value_mask                         0x8
#define CMHYS_clear_mask                         0xF7

#define C1HYS                                    0x3
#define C1HYS_address                            0x01C
#define C1HYS_position                           0x3
#define C1HYS_size                               0x1
#define C1HYS_value_mask                         0x8
#define C1HYS_clear_mask                         0xF7

#define T1ACS                                    0x4
#define T1ACS_address                            0x01C
#define T1ACS_position                           0x4
#define T1ACS_size                               0x1
#define T1ACS_value_mask                         0x10
#define T1ACS_clear_mask                         0xEF


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


/*-----------------------------------------------------------------#
| TRISIO                                                      0x85 |
#------------------------------------------------------------------#
| - | - | TRISIO5 | TRISIO4 | TRISA3 | TRISIO2 | TRISIO1 | TRISIO0 |
#------------------------------------------------------------------#
| 7 | 6 | 5       | 4       | 3      | 2       | 1       | 0       |
#-----------------------------------------------------------------*/

#define TRISIO                                   0x0
#define TRISIO_address                           0x085
#define TRISIO_position                          0x0
#define TRISIO_size                              0x8
#define TRISIO_value_mask                        0xFF
#define TRISIO_clear_mask                        0x0

#define TRISA0                                   0x0
#define TRISA0_address                           0x085
#define TRISA0_position                          0x0
#define TRISA0_size                              0x1
#define TRISA0_value_mask                        0x1
#define TRISA0_clear_mask                        0xFE

#define TRISIO0                                  0x0
#define TRISIO0_address                          0x085
#define TRISIO0_position                         0x0
#define TRISIO0_size                             0x1
#define TRISIO0_value_mask                       0x1
#define TRISIO0_clear_mask                       0xFE

#define TRISA1                                   0x1
#define TRISA1_address                           0x085
#define TRISA1_position                          0x1
#define TRISA1_size                              0x1
#define TRISA1_value_mask                        0x2
#define TRISA1_clear_mask                        0xFD

#define TRISIO1                                  0x1
#define TRISIO1_address                          0x085
#define TRISIO1_position                         0x1
#define TRISIO1_size                             0x1
#define TRISIO1_value_mask                       0x2
#define TRISIO1_clear_mask                       0xFD

#define TRISA2                                   0x2
#define TRISA2_address                           0x085
#define TRISA2_position                          0x2
#define TRISA2_size                              0x1
#define TRISA2_value_mask                        0x4
#define TRISA2_clear_mask                        0xFB

#define TRISIO2                                  0x2
#define TRISIO2_address                          0x085
#define TRISIO2_position                         0x2
#define TRISIO2_size                             0x1
#define TRISIO2_value_mask                       0x4
#define TRISIO2_clear_mask                       0xFB

#define TRISA3                                   0x3
#define TRISA3_address                           0x085
#define TRISA3_position                          0x3
#define TRISA3_size                              0x1
#define TRISA3_value_mask                        0x8
#define TRISA3_clear_mask                        0xF7

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

#define TRISA4                                   0x4
#define TRISA4_address                           0x085
#define TRISA4_position                          0x4
#define TRISA4_size                              0x1
#define TRISA4_value_mask                        0x10
#define TRISA4_clear_mask                        0xEF

#define TRISIO5                                  0x5
#define TRISIO5_address                          0x085
#define TRISIO5_position                         0x5
#define TRISIO5_size                             0x1
#define TRISIO5_value_mask                       0x20
#define TRISIO5_clear_mask                       0xDF

#define TRISA5                                   0x5
#define TRISA5_address                           0x085
#define TRISA5_position                          0x5
#define TRISA5_size                              0x1
#define TRISA5_value_mask                        0x20
#define TRISA5_clear_mask                        0xDF


/*------------------------------------#
| PIE1                           0x8C |
#-------------------------------------#
| - | - | - | - | C1IE | - | - | T1IE |
#-------------------------------------#
| 7 | 6 | 5 | 4 | 3    | 2 | 1 | 0    |
#------------------------------------*/

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

#define C1IE                                     0x3
#define C1IE_address                             0x08C
#define C1IE_position                            0x3
#define C1IE_size                                0x1
#define C1IE_value_mask                          0x8
#define C1IE_clear_mask                          0xF7

#define CMIE                                     0x3
#define CMIE_address                             0x08C
#define CMIE_position                            0x3
#define CMIE_size                                0x1
#define CMIE_value_mask                          0x8
#define CMIE_clear_mask                          0xF7


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


/*---------------------------------------------#
| OSCTUNE                                 0x90 |
#----------------------------------------------#
| - | - | - | TUN4 | TUN3 | TUN2 | TUN1 | TUN0 |
#----------------------------------------------#
| 7 | 6 | 5 | 4    | 3    | 2    | 1    | 0    |
#---------------------------------------------*/

#define OSCTUNE                                  0x0
#define OSCTUNE_address                          0x090
#define OSCTUNE_position                         0x0
#define OSCTUNE_size                             0x8
#define OSCTUNE_value_mask                       0xFF
#define OSCTUNE_clear_mask                       0x0

#define TUN0                                     0x0
#define TUN0_address                             0x090
#define TUN0_position                            0x0
#define TUN0_size                                0x1
#define TUN0_value_mask                          0x1
#define TUN0_clear_mask                          0xFE

#define TUN                                      0x0
#define TUN_address                              0x090
#define TUN_position                             0x0
#define TUN_size                                 0x5
#define TUN_value_mask                           0x1F
#define TUN_clear_mask                           0xE0

#define TUN1                                     0x1
#define TUN1_address                             0x090
#define TUN1_position                            0x1
#define TUN1_size                                0x1
#define TUN1_value_mask                          0x2
#define TUN1_clear_mask                          0xFD

#define TUN2                                     0x2
#define TUN2_address                             0x090
#define TUN2_position                            0x2
#define TUN2_size                                0x1
#define TUN2_value_mask                          0x4
#define TUN2_clear_mask                          0xFB

#define TUN3                                     0x3
#define TUN3_address                             0x090
#define TUN3_position                            0x3
#define TUN3_size                                0x1
#define TUN3_value_mask                          0x8
#define TUN3_clear_mask                          0xF7

#define TUN4                                     0x4
#define TUN4_address                             0x090
#define TUN4_position                            0x4
#define TUN4_size                                0x1
#define TUN4_value_mask                          0x10
#define TUN4_clear_mask                          0xEF


/*--------------------------------------------------#
| WPU                                          0x95 |
#---------------------------------------------------#
| - | - | WPUA5 | WPUA4 | - | WPUA2 | WPUA1 | WPUA0 |
#---------------------------------------------------#
| 7 | 6 | 5     | 4     | 3 | 2     | 1     | 0     |
#--------------------------------------------------*/

#define WPU                                      0x0
#define WPU_address                              0x095
#define WPU_position                             0x0
#define WPU_size                                 0x8
#define WPU_value_mask                           0xFF
#define WPU_clear_mask                           0x0

#define WPUA0                                    0x0
#define WPUA0_address                            0x095
#define WPUA0_position                           0x0
#define WPUA0_size                               0x1
#define WPUA0_value_mask                         0x1
#define WPUA0_clear_mask                         0xFE

#define WPU0                                     0x0
#define WPU0_address                             0x095
#define WPU0_position                            0x0
#define WPU0_size                                0x1
#define WPU0_value_mask                          0x1
#define WPU0_clear_mask                          0xFE

#define WPUA1                                    0x1
#define WPUA1_address                            0x095
#define WPUA1_position                           0x1
#define WPUA1_size                               0x1
#define WPUA1_value_mask                         0x2
#define WPUA1_clear_mask                         0xFD

#define WPU1                                     0x1
#define WPU1_address                             0x095
#define WPU1_position                            0x1
#define WPU1_size                                0x1
#define WPU1_value_mask                          0x2
#define WPU1_clear_mask                          0xFD

#define WPUA2                                    0x2
#define WPUA2_address                            0x095
#define WPUA2_position                           0x2
#define WPUA2_size                               0x1
#define WPUA2_value_mask                         0x4
#define WPUA2_clear_mask                         0xFB

#define WPU2                                     0x2
#define WPU2_address                             0x095
#define WPU2_position                            0x2
#define WPU2_size                                0x1
#define WPU2_value_mask                          0x4
#define WPU2_clear_mask                          0xFB

#define WPUA4                                    0x4
#define WPUA4_address                            0x095
#define WPUA4_position                           0x4
#define WPUA4_size                               0x1
#define WPUA4_value_mask                         0x10
#define WPUA4_clear_mask                         0xEF

#define WPU4                                     0x4
#define WPU4_address                             0x095
#define WPU4_position                            0x4
#define WPU4_size                                0x1
#define WPU4_value_mask                          0x10
#define WPU4_clear_mask                          0xEF

#define WPUA5                                    0x5
#define WPUA5_address                            0x095
#define WPUA5_position                           0x5
#define WPUA5_size                               0x1
#define WPUA5_value_mask                         0x20
#define WPUA5_clear_mask                         0xDF

#define WPU5                                     0x5
#define WPU5_address                             0x095
#define WPU5_position                            0x5
#define WPU5_size                                0x1
#define WPU5_value_mask                          0x20
#define WPU5_clear_mask                          0xDF


/*------------------------------------------------------#
| IOC                                              0x96 |
#-------------------------------------------------------#
| - | - | IOCA5 | IOCA4 | IOCA3 | IOCA2 | IOCA1 | IOCA0 |
#-------------------------------------------------------#
| 7 | 6 | 5     | 4     | 3     | 2     | 1     | 0     |
#------------------------------------------------------*/

#define IOC                                      0x0
#define IOC_address                              0x096
#define IOC_position                             0x0
#define IOC_size                                 0x8
#define IOC_value_mask                           0xFF
#define IOC_clear_mask                           0x0

#define IOCA0                                    0x0
#define IOCA0_address                            0x096
#define IOCA0_position                           0x0
#define IOCA0_size                               0x1
#define IOCA0_value_mask                         0x1
#define IOCA0_clear_mask                         0xFE

#define IOC0                                     0x0
#define IOC0_address                             0x096
#define IOC0_position                            0x0
#define IOC0_size                                0x1
#define IOC0_value_mask                          0x1
#define IOC0_clear_mask                          0xFE

#define IOCA1                                    0x1
#define IOCA1_address                            0x096
#define IOCA1_position                           0x1
#define IOCA1_size                               0x1
#define IOCA1_value_mask                         0x2
#define IOCA1_clear_mask                         0xFD

#define IOC1                                     0x1
#define IOC1_address                             0x096
#define IOC1_position                            0x1
#define IOC1_size                                0x1
#define IOC1_value_mask                          0x2
#define IOC1_clear_mask                          0xFD

#define IOCA2                                    0x2
#define IOCA2_address                            0x096
#define IOCA2_position                           0x2
#define IOCA2_size                               0x1
#define IOCA2_value_mask                         0x4
#define IOCA2_clear_mask                         0xFB

#define IOC2                                     0x2
#define IOC2_address                             0x096
#define IOC2_position                            0x2
#define IOC2_size                                0x1
#define IOC2_value_mask                          0x4
#define IOC2_clear_mask                          0xFB

#define IOCA3                                    0x3
#define IOCA3_address                            0x096
#define IOCA3_position                           0x3
#define IOCA3_size                               0x1
#define IOCA3_value_mask                         0x8
#define IOCA3_clear_mask                         0xF7

#define IOC3                                     0x3
#define IOC3_address                             0x096
#define IOC3_position                            0x3
#define IOC3_size                                0x1
#define IOC3_value_mask                          0x8
#define IOC3_clear_mask                          0xF7

#define IOCA4                                    0x4
#define IOCA4_address                            0x096
#define IOCA4_position                           0x4
#define IOCA4_size                               0x1
#define IOCA4_value_mask                         0x10
#define IOCA4_clear_mask                         0xEF

#define IOC4                                     0x4
#define IOC4_address                             0x096
#define IOC4_position                            0x4
#define IOC4_size                                0x1
#define IOC4_value_mask                          0x10
#define IOC4_clear_mask                          0xEF

#define IOCA5                                    0x5
#define IOCA5_address                            0x096
#define IOCA5_position                           0x5
#define IOCA5_size                               0x1
#define IOCA5_value_mask                         0x20
#define IOCA5_clear_mask                         0xDF

#define IOC5                                     0x5
#define IOC5_address                             0x096
#define IOC5_position                            0x5
#define IOC5_size                                0x1
#define IOC5_value_mask                          0x20
#define IOC5_clear_mask                          0xDF


/*---------------------------------------#
| ANSEL                             0x9F |
#----------------------------------------#
| - | ADCS      | ANS3 | - | ANS1 | ANS0 |
#----------------------------------------#
| 7 | 6 | 5 | 4 | 3    | 2 | 1    | 0    |
#---------------------------------------*/

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

#define ANS3                                     0x3
#define ANS3_address                             0x09F
#define ANS3_position                            0x3
#define ANS3_size                                0x1
#define ANS3_value_mask                          0x8
#define ANS3_clear_mask                          0xF7

#define ADCS                                     0x4
#define ADCS_address                             0x09F
#define ADCS_position                            0x4
#define ADCS_size                                0x3
#define ADCS_value_mask                          0x70
#define ADCS_clear_mask                          0x8F

#endif // _PIC12F609_H_
