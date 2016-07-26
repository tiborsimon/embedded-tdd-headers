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

#ifndef _MCP19110_H_
#define _MCP19110_H_


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


/*--------------------------------------------------------------#
| PORTGPA                                                   0x5 |
#---------------------------------------------------------------#
| GPIO7 | GPIO6 | GPIO5 | GPIO4 | GPIO3 | GPIO2 | GPIO1 | GPIO0 |
#---------------------------------------------------------------#
| 7     | 6     | 5     | 4     | 3     | 2     | 1     | 0     |
#--------------------------------------------------------------*/

#define PORTGPA                                  0x0
#define PORTGPA_address                          0x005
#define PORTGPA_position                         0x0
#define PORTGPA_size                             0x8
#define PORTGPA_value_mask                       0xFF
#define PORTGPA_clear_mask                       0x0

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

#define GPA0                                     0x0
#define GPA0_address                             0x005
#define GPA0_position                            0x0
#define GPA0_size                                0x1
#define GPA0_value_mask                          0x1
#define GPA0_clear_mask                          0xFE

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

#define GPA1                                     0x1
#define GPA1_address                             0x005
#define GPA1_position                            0x1
#define GPA1_size                                0x1
#define GPA1_value_mask                          0x2
#define GPA1_clear_mask                          0xFD

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

#define GPA2                                     0x2
#define GPA2_address                             0x005
#define GPA2_position                            0x2
#define GPA2_size                                0x1
#define GPA2_value_mask                          0x4
#define GPA2_clear_mask                          0xFB

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

#define GPA3                                     0x3
#define GPA3_address                             0x005
#define GPA3_position                            0x3
#define GPA3_size                                0x1
#define GPA3_value_mask                          0x8
#define GPA3_clear_mask                          0xF7

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

#define GPA4                                     0x4
#define GPA4_address                             0x005
#define GPA4_position                            0x4
#define GPA4_size                                0x1
#define GPA4_value_mask                          0x10
#define GPA4_clear_mask                          0xEF

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

#define GPA5                                     0x5
#define GPA5_address                             0x005
#define GPA5_position                            0x5
#define GPA5_size                                0x1
#define GPA5_value_mask                          0x20
#define GPA5_clear_mask                          0xDF

#define GPIO6                                    0x6
#define GPIO6_address                            0x005
#define GPIO6_position                           0x6
#define GPIO6_size                               0x1
#define GPIO6_value_mask                         0x40
#define GPIO6_clear_mask                         0xBF

#define RA6                                      0x6
#define RA6_address                              0x005
#define RA6_position                             0x6
#define RA6_size                                 0x1
#define RA6_value_mask                           0x40
#define RA6_clear_mask                           0xBF

#define GPA6                                     0x6
#define GPA6_address                             0x005
#define GPA6_position                            0x6
#define GPA6_size                                0x1
#define GPA6_value_mask                          0x40
#define GPA6_clear_mask                          0xBF

#define GPIO7                                    0x7
#define GPIO7_address                            0x005
#define GPIO7_position                           0x7
#define GPIO7_size                               0x1
#define GPIO7_value_mask                         0x80
#define GPIO7_clear_mask                         0x7F

#define RA7                                      0x7
#define RA7_address                              0x005
#define RA7_position                             0x7
#define RA7_size                                 0x1
#define RA7_value_mask                           0x80
#define RA7_clear_mask                           0x7F

#define GPA7                                     0x7
#define GPA7_address                             0x005
#define GPA7_position                            0x7
#define GPA7_size                                0x1
#define GPA7_value_mask                          0x80
#define GPA7_clear_mask                          0x7F


/*--------------------------------------------#
| PORTGPB                                 0x6 |
#---------------------------------------------#
| RB7 | RB6 | RB5 | RB4 | - | RB2 | RB1 | RB0 |
#---------------------------------------------#
| 7   | 6   | 5   | 4   | 3 | 2   | 1   | 0   |
#--------------------------------------------*/

#define PORTGPB                                  0x0
#define PORTGPB_address                          0x006
#define PORTGPB_position                         0x0
#define PORTGPB_size                             0x8
#define PORTGPB_value_mask                       0xFF
#define PORTGPB_clear_mask                       0x0

#define RB0                                      0x0
#define RB0_address                              0x006
#define RB0_position                             0x0
#define RB0_size                                 0x1
#define RB0_value_mask                           0x1
#define RB0_clear_mask                           0xFE

#define GPB0                                     0x0
#define GPB0_address                             0x006
#define GPB0_position                            0x0
#define GPB0_size                                0x1
#define GPB0_value_mask                          0x1
#define GPB0_clear_mask                          0xFE

#define RB1                                      0x1
#define RB1_address                              0x006
#define RB1_position                             0x1
#define RB1_size                                 0x1
#define RB1_value_mask                           0x2
#define RB1_clear_mask                           0xFD

#define GPB1                                     0x1
#define GPB1_address                             0x006
#define GPB1_position                            0x1
#define GPB1_size                                0x1
#define GPB1_value_mask                          0x2
#define GPB1_clear_mask                          0xFD

#define RB2                                      0x2
#define RB2_address                              0x006
#define RB2_position                             0x2
#define RB2_size                                 0x1
#define RB2_value_mask                           0x4
#define RB2_clear_mask                           0xFB

#define GPB2                                     0x2
#define GPB2_address                             0x006
#define GPB2_position                            0x2
#define GPB2_size                                0x1
#define GPB2_value_mask                          0x4
#define GPB2_clear_mask                          0xFB

#define RB4                                      0x4
#define RB4_address                              0x006
#define RB4_position                             0x4
#define RB4_size                                 0x1
#define RB4_value_mask                           0x10
#define RB4_clear_mask                           0xEF

#define RB5                                      0x5
#define RB5_address                              0x006
#define RB5_position                             0x5
#define RB5_size                                 0x1
#define RB5_value_mask                           0x20
#define RB5_clear_mask                           0xDF

#define RB6                                      0x6
#define RB6_address                              0x006
#define RB6_position                             0x6
#define RB6_size                                 0x1
#define RB6_value_mask                           0x40
#define RB6_clear_mask                           0xBF

#define RB7                                      0x7
#define RB7_address                              0x006
#define RB7_position                             0x7
#define RB7_size                                 0x1
#define RB7_value_mask                           0x80
#define RB7_clear_mask                           0x7F


/*---------------------------------------------------#
| PIR1                                           0x7 |
#----------------------------------------------------#
| - | ADIF | BCLIF | SSPIF | - | - | TMR2IF | TMR1IF |
#----------------------------------------------------#
| 7 | 6    | 5     | 4     | 3 | 2 | 1      | 0      |
#---------------------------------------------------*/

#define PIR1                                     0x0
#define PIR1_address                             0x007
#define PIR1_position                            0x0
#define PIR1_size                                0x8
#define PIR1_value_mask                          0xFF
#define PIR1_clear_mask                          0x0

#define TMR1IF                                   0x0
#define TMR1IF_address                           0x007
#define TMR1IF_position                          0x0
#define TMR1IF_size                              0x1
#define TMR1IF_value_mask                        0x1
#define TMR1IF_clear_mask                        0xFE

#define TMR2IF                                   0x1
#define TMR2IF_address                           0x007
#define TMR2IF_position                          0x1
#define TMR2IF_size                              0x1
#define TMR2IF_value_mask                        0x2
#define TMR2IF_clear_mask                        0xFD

#define SSPIF                                    0x4
#define SSPIF_address                            0x007
#define SSPIF_position                           0x4
#define SSPIF_size                               0x1
#define SSPIF_value_mask                         0x10
#define SSPIF_clear_mask                         0xEF

#define BCLIF                                    0x5
#define BCLIF_address                            0x007
#define BCLIF_position                           0x5
#define BCLIF_size                               0x1
#define BCLIF_value_mask                         0x20
#define BCLIF_clear_mask                         0xDF

#define ADIF                                     0x6
#define ADIF_address                             0x007
#define ADIF_position                            0x6
#define ADIF_size                                0x1
#define ADIF_value_mask                          0x40
#define ADIF_clear_mask                          0xBF


/*------------------------------------------------#
| PIR2                                        0x8 |
#-------------------------------------------------#
| UVIF | - | OCIF | OVIF | - | - | VINIF | DCERIF |
#-------------------------------------------------#
| 7    | 6 | 5    | 4    | 3 | 2 | 1     | 0      |
#------------------------------------------------*/

#define PIR2                                     0x0
#define PIR2_address                             0x008
#define PIR2_position                            0x0
#define PIR2_size                                0x8
#define PIR2_value_mask                          0xFF
#define PIR2_clear_mask                          0x0

#define DCERIF                                   0x0
#define DCERIF_address                           0x008
#define DCERIF_position                          0x0
#define DCERIF_size                              0x1
#define DCERIF_value_mask                        0x1
#define DCERIF_clear_mask                        0xFE

#define VINIF                                    0x1
#define VINIF_address                            0x008
#define VINIF_position                           0x1
#define VINIF_size                               0x1
#define VINIF_value_mask                         0x2
#define VINIF_clear_mask                         0xFD

#define OVIF                                     0x4
#define OVIF_address                             0x008
#define OVIF_position                            0x4
#define OVIF_size                                0x1
#define OVIF_value_mask                          0x10
#define OVIF_clear_mask                          0xEF

#define OCIF                                     0x5
#define OCIF_address                             0x008
#define OCIF_position                            0x5
#define OCIF_size                                0x1
#define OCIF_value_mask                          0x20
#define OCIF_clear_mask                          0xDF

#define UVIF                                     0x7
#define UVIF_address                             0x008
#define UVIF_position                            0x7
#define UVIF_size                                0x1
#define UVIF_value_mask                          0x80
#define UVIF_clear_mask                          0x7F


/*-----------------------------------#
| PCON                           0x9 |
#------------------------------------#
| - | - | - | - | - | nOT | nPOR | - |
#------------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2   | 1    | 0 |
#-----------------------------------*/

#define PCON                                     0x0
#define PCON_address                             0x009
#define PCON_position                            0x0
#define PCON_size                                0x8
#define PCON_value_mask                          0xFF
#define PCON_clear_mask                          0x0

#define nPOR                                     0x1
#define nPOR_address                             0x009
#define nPOR_position                            0x1
#define nPOR_size                                0x1
#define nPOR_value_mask                          0x2
#define nPOR_clear_mask                          0xFD

#define nOT                                      0x2
#define nOT_address                              0x009
#define nOT_position                             0x2
#define nOT_size                                 0x1
#define nOT_value_mask                           0x4
#define nOT_clear_mask                           0xFB


/*-----------------------------------------------------#
| INTCON                                           0xB |
#------------------------------------------------------#
| GIE | PEIE | T0IE | INTE | IOCE | T0IF | INTF | IOCF |
#------------------------------------------------------#
| 7   | 6    | 5    | 4    | 3    | 2    | 1    | 0    |
#-----------------------------------------------------*/

#define INTCON                                   0x0
#define INTCON_address                           0x00B
#define INTCON_position                          0x0
#define INTCON_size                              0x8
#define INTCON_value_mask                        0xFF
#define INTCON_clear_mask                        0x0

#define IOCF                                     0x0
#define IOCF_address                             0x00B
#define IOCF_position                            0x0
#define IOCF_size                                0x1
#define IOCF_value_mask                          0x1
#define IOCF_clear_mask                          0xFE

#define INTF                                     0x1
#define INTF_address                             0x00B
#define INTF_position                            0x1
#define INTF_size                                0x1
#define INTF_value_mask                          0x2
#define INTF_clear_mask                          0xFD

#define T0IF                                     0x2
#define T0IF_address                             0x00B
#define T0IF_position                            0x2
#define T0IF_size                                0x1
#define T0IF_value_mask                          0x4
#define T0IF_clear_mask                          0xFB

#define IOCE                                     0x3
#define IOCE_address                             0x00B
#define IOCE_position                            0x3
#define IOCE_size                                0x1
#define IOCE_value_mask                          0x8
#define IOCE_clear_mask                          0xF7

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


/*----------------------------------------------------#
| T1CON                                           0xE |
#-----------------------------------------------------#
| - | - | T1CKPS1 | T1CKPS0 | - | - | TMR1CS | TMR1ON |
#-----------------------------------------------------#
| 7 | 6 | 5       | 4       | 3 | 2 | 1      | 0      |
#----------------------------------------------------*/

#define T1CON                                    0x0
#define T1CON_address                            0x00E
#define T1CON_position                           0x0
#define T1CON_size                               0x8
#define T1CON_value_mask                         0xFF
#define T1CON_clear_mask                         0x0

#define TMR1ON                                   0x0
#define TMR1ON_address                           0x00E
#define TMR1ON_position                          0x0
#define TMR1ON_size                              0x1
#define TMR1ON_value_mask                        0x1
#define TMR1ON_clear_mask                        0xFE

#define TMR1CS                                   0x1
#define TMR1CS_address                           0x00E
#define TMR1CS_position                          0x1
#define TMR1CS_size                              0x1
#define TMR1CS_value_mask                        0x2
#define TMR1CS_clear_mask                        0xFD

#define T1CKPS                                   0x4
#define T1CKPS_address                           0x00E
#define T1CKPS_position                          0x4
#define T1CKPS_size                              0x2
#define T1CKPS_value_mask                        0x30
#define T1CKPS_clear_mask                        0xCF

#define T1CKPS0                                  0x4
#define T1CKPS0_address                          0x00E
#define T1CKPS0_position                         0x4
#define T1CKPS0_size                             0x1
#define T1CKPS0_value_mask                       0x10
#define T1CKPS0_clear_mask                       0xEF

#define T1CKPS1                                  0x5
#define T1CKPS1_address                          0x00E
#define T1CKPS1_position                         0x5
#define T1CKPS1_size                             0x1
#define T1CKPS1_value_mask                       0x20
#define T1CKPS1_clear_mask                       0xDF


/*------------------------------------#
| T2CON                          0x10 |
#-------------------------------------#
| - | - | - | - | - | TMR2ON | T2CKPS |
#-------------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2      | 1 | 0  |
#------------------------------------*/

#define T2CON                                    0x0
#define T2CON_address                            0x010
#define T2CON_position                           0x0
#define T2CON_size                               0x8
#define T2CON_value_mask                         0xFF
#define T2CON_clear_mask                         0x0

#define T2CKPS                                   0x0
#define T2CKPS_address                           0x010
#define T2CKPS_position                          0x0
#define T2CKPS_size                              0x2
#define T2CKPS_value_mask                        0x3
#define T2CKPS_clear_mask                        0xFC

#define TMR2ON                                   0x2
#define TMR2ON_address                           0x010
#define TMR2ON_position                          0x2
#define TMR2ON_size                              0x1
#define TMR2ON_value_mask                        0x4
#define TMR2ON_clear_mask                        0xFB


/*------------------------------#
| PR2                      0x11 |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define PR2                                      0x0
#define PR2_address                              0x011
#define PR2_position                             0x0
#define PR2_size                                 0x8
#define PR2_value_mask                           0xFF
#define PR2_clear_mask                           0x0


/*------------------------------#
| PWMPHL                   0x13 |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define PWMPHL                                   0x0
#define PWMPHL_address                           0x013
#define PWMPHL_position                          0x0
#define PWMPHL_size                              0x8
#define PWMPHL_value_mask                        0xFF
#define PWMPHL_clear_mask                        0x0


/*------------------------------#
| PWMPHH                   0x14 |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define PWMPHH                                   0x0
#define PWMPHH_address                           0x014
#define PWMPHH_position                          0x0
#define PWMPHH_size                              0x8
#define PWMPHH_value_mask                        0xFF
#define PWMPHH_clear_mask                        0x0


/*------------------------------#
| PWMRL                    0x15 |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define PWMRL                                    0x0
#define PWMRL_address                            0x015
#define PWMRL_position                           0x0
#define PWMRL_size                               0x8
#define PWMRL_value_mask                         0xFF
#define PWMRL_clear_mask                         0x0


/*------------------------------#
| PWMRH                    0x16 |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define PWMRH                                    0x0
#define PWMRH_address                            0x016
#define PWMRH_position                           0x0
#define PWMRH_size                               0x8
#define PWMRH_value_mask                         0xFF
#define PWMRH_clear_mask                         0x0


/*------------------------------------------------------#
| OVCCON                                           0x19 |
#-------------------------------------------------------#
| OVC7 | OVC6 | OVC5 | OVC4 | OVC3 | OVC2 | OVC1 | OVC0 |
#-------------------------------------------------------#
| 7    | 6    | 5    | 4    | 3    | 2    | 1    | 0    |
#------------------------------------------------------*/

#define OVCCON                                   0x0
#define OVCCON_address                           0x019
#define OVCCON_position                          0x0
#define OVCCON_size                              0x8
#define OVCCON_value_mask                        0xFF
#define OVCCON_clear_mask                        0x0

#define OVC0                                     0x0
#define OVC0_address                             0x019
#define OVC0_position                            0x0
#define OVC0_size                                0x1
#define OVC0_value_mask                          0x1
#define OVC0_clear_mask                          0xFE

#define OVC1                                     0x1
#define OVC1_address                             0x019
#define OVC1_position                            0x1
#define OVC1_size                                0x1
#define OVC1_value_mask                          0x2
#define OVC1_clear_mask                          0xFD

#define OVC2                                     0x2
#define OVC2_address                             0x019
#define OVC2_position                            0x2
#define OVC2_size                                0x1
#define OVC2_value_mask                          0x4
#define OVC2_clear_mask                          0xFB

#define OVC3                                     0x3
#define OVC3_address                             0x019
#define OVC3_position                            0x3
#define OVC3_size                                0x1
#define OVC3_value_mask                          0x8
#define OVC3_clear_mask                          0xF7

#define OVC4                                     0x4
#define OVC4_address                             0x019
#define OVC4_position                            0x4
#define OVC4_size                                0x1
#define OVC4_value_mask                          0x10
#define OVC4_clear_mask                          0xEF

#define OVC5                                     0x5
#define OVC5_address                             0x019
#define OVC5_position                            0x5
#define OVC5_size                                0x1
#define OVC5_value_mask                          0x20
#define OVC5_clear_mask                          0xDF

#define OVC6                                     0x6
#define OVC6_address                             0x019
#define OVC6_position                            0x6
#define OVC6_size                                0x1
#define OVC6_value_mask                          0x40
#define OVC6_clear_mask                          0xBF

#define OVC7                                     0x7
#define OVC7_address                             0x019
#define OVC7_position                            0x7
#define OVC7_size                                0x1
#define OVC7_value_mask                          0x80
#define OVC7_clear_mask                          0x7F


/*--------------------------------------------------#
| OVFCON                                       0x1A |
#---------------------------------------------------#
| VOUTON | - | - | OVF4 | OVF3 | OVF2 | OVF1 | OVF0 |
#---------------------------------------------------#
| 7      | 6 | 5 | 4    | 3    | 2    | 1    | 0    |
#--------------------------------------------------*/

#define OVFCON                                   0x0
#define OVFCON_address                           0x01A
#define OVFCON_position                          0x0
#define OVFCON_size                              0x8
#define OVFCON_value_mask                        0xFF
#define OVFCON_clear_mask                        0x0

#define OVF0                                     0x0
#define OVF0_address                             0x01A
#define OVF0_position                            0x0
#define OVF0_size                                0x1
#define OVF0_value_mask                          0x1
#define OVF0_clear_mask                          0xFE

#define OVF1                                     0x1
#define OVF1_address                             0x01A
#define OVF1_position                            0x1
#define OVF1_size                                0x1
#define OVF1_value_mask                          0x2
#define OVF1_clear_mask                          0xFD

#define OVF2                                     0x2
#define OVF2_address                             0x01A
#define OVF2_position                            0x2
#define OVF2_size                                0x1
#define OVF2_value_mask                          0x4
#define OVF2_clear_mask                          0xFB

#define OVF3                                     0x3
#define OVF3_address                             0x01A
#define OVF3_position                            0x3
#define OVF3_size                                0x1
#define OVF3_value_mask                          0x8
#define OVF3_clear_mask                          0xF7

#define OVF4                                     0x4
#define OVF4_address                             0x01A
#define OVF4_position                            0x4
#define OVF4_size                                0x1
#define OVF4_value_mask                          0x10
#define OVF4_clear_mask                          0xEF

#define VOUTON                                   0x7
#define VOUTON_address                           0x01A
#define VOUTON_position                          0x7
#define VOUTON_size                              0x1
#define VOUTON_value_mask                        0x80
#define VOUTON_clear_mask                        0x7F


/*---------------------------------------------#
| OSCTUNE                                 0x1B |
#----------------------------------------------#
| - | - | - | TUN4 | TUN3 | TUN2 | TUN1 | TUN0 |
#----------------------------------------------#
| 7 | 6 | 5 | 4    | 3    | 2    | 1    | 0    |
#---------------------------------------------*/

#define OSCTUNE                                  0x0
#define OSCTUNE_address                          0x01B
#define OSCTUNE_position                         0x0
#define OSCTUNE_size                             0x8
#define OSCTUNE_value_mask                       0xFF
#define OSCTUNE_clear_mask                       0x0

#define TUN0                                     0x0
#define TUN0_address                             0x01B
#define TUN0_position                            0x0
#define TUN0_size                                0x1
#define TUN0_value_mask                          0x1
#define TUN0_clear_mask                          0xFE

#define TUN1                                     0x1
#define TUN1_address                             0x01B
#define TUN1_position                            0x1
#define TUN1_size                                0x1
#define TUN1_value_mask                          0x2
#define TUN1_clear_mask                          0xFD

#define TUN2                                     0x2
#define TUN2_address                             0x01B
#define TUN2_position                            0x2
#define TUN2_size                                0x1
#define TUN2_value_mask                          0x4
#define TUN2_clear_mask                          0xFB

#define TUN3                                     0x3
#define TUN3_address                             0x01B
#define TUN3_position                            0x3
#define TUN3_size                                0x1
#define TUN3_value_mask                          0x8
#define TUN3_clear_mask                          0xF7

#define TUN4                                     0x4
#define TUN4_address                             0x01B
#define TUN4_position                            0x4
#define TUN4_size                                0x1
#define TUN4_value_mask                          0x10
#define TUN4_clear_mask                          0xEF


/*------------------------------#
| ADRESL                   0x1C |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define ADRESL                                   0x0
#define ADRESL_address                           0x01C
#define ADRESL_position                          0x0
#define ADRESL_size                              0x8
#define ADRESL_value_mask                        0xFF
#define ADRESL_clear_mask                        0x0


/*-------------------------------------------------------#
| ADCON0                                            0x1E |
#--------------------------------------------------------#
| - | CHS4 | CHS3 | CHS2 | CHS1 | CHS0 | GO_nDONE | ADON |
#--------------------------------------------------------#
| 7 | 6    | 5    | 4    | 3    | 2    | 1        | 0    |
#-------------------------------------------------------*/

#define ADCON0                                   0x0
#define ADCON0_address                           0x01E
#define ADCON0_position                          0x0
#define ADCON0_size                              0x8
#define ADCON0_value_mask                        0xFF
#define ADCON0_clear_mask                        0x0

#define ADON                                     0x0
#define ADON_address                             0x01E
#define ADON_position                            0x0
#define ADON_size                                0x1
#define ADON_value_mask                          0x1
#define ADON_clear_mask                          0xFE

#define GO_nDONE                                 0x1
#define GO_nDONE_address                         0x01E
#define GO_nDONE_position                        0x1
#define GO_nDONE_size                            0x1
#define GO_nDONE_value_mask                      0x2
#define GO_nDONE_clear_mask                      0xFD

#define CHS0                                     0x2
#define CHS0_address                             0x01E
#define CHS0_position                            0x2
#define CHS0_size                                0x1
#define CHS0_value_mask                          0x4
#define CHS0_clear_mask                          0xFB

#define CHS1                                     0x3
#define CHS1_address                             0x01E
#define CHS1_position                            0x3
#define CHS1_size                                0x1
#define CHS1_value_mask                          0x8
#define CHS1_clear_mask                          0xF7

#define CHS2                                     0x4
#define CHS2_address                             0x01E
#define CHS2_position                            0x4
#define CHS2_size                                0x1
#define CHS2_value_mask                          0x10
#define CHS2_clear_mask                          0xEF

#define CHS3                                     0x5
#define CHS3_address                             0x01E
#define CHS3_position                            0x5
#define CHS3_size                                0x1
#define CHS3_value_mask                          0x20
#define CHS3_clear_mask                          0xDF

#define CHS4                                     0x6
#define CHS4_address                             0x01E
#define CHS4_position                            0x6
#define CHS4_size                                0x1
#define CHS4_value_mask                          0x40
#define CHS4_clear_mask                          0xBF


/*------------------------------------------#
| ADCON1                               0x1F |
#-------------------------------------------#
| - | ADCS2 | ADCS1 | ADCS0 | - | - | - | - |
#-------------------------------------------#
| 7 | 6     | 5     | 4     | 3 | 2 | 1 | 0 |
#------------------------------------------*/

#define ADCON1                                   0x0
#define ADCON1_address                           0x01F
#define ADCON1_position                          0x0
#define ADCON1_size                              0x8
#define ADCON1_value_mask                        0xFF
#define ADCON1_clear_mask                        0x0

#define ADCS0                                    0x4
#define ADCS0_address                            0x01F
#define ADCS0_position                           0x4
#define ADCS0_size                               0x1
#define ADCS0_value_mask                         0x10
#define ADCS0_clear_mask                         0xEF

#define ADCS1                                    0x5
#define ADCS1_address                            0x01F
#define ADCS1_position                           0x5
#define ADCS1_size                               0x1
#define ADCS1_value_mask                         0x20
#define ADCS1_clear_mask                         0xDF

#define ADCS2                                    0x6
#define ADCS2_address                            0x01F
#define ADCS2_position                           0x6
#define ADCS2_size                               0x1
#define ADCS2_value_mask                         0x40
#define ADCS2_clear_mask                         0xBF


/*------------------------------------------------------#
| OPTION_REG                                       0x81 |
#-------------------------------------------------------#
| nRAPUI | INTEDG | T0CS | T0SE | PSA | PS2 | PS1 | PS0 |
#-------------------------------------------------------#
| 7      | 6      | 5    | 4    | 3   | 2   | 1   | 0   |
#------------------------------------------------------*/

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

#define nRAPUI                                   0x7
#define nRAPUI_address                           0x081
#define nRAPUI_position                          0x7
#define nRAPUI_size                              0x1
#define nRAPUI_value_mask                        0x80
#define nRAPUI_clear_mask                        0x7F


/*----------------------------------------------------------------------#
| TRISGPA                                                          0x85 |
#-----------------------------------------------------------------------#
| TRISA7 | TRISA6 | TRISA5 | TRISA4 | TRISA3 | TRISA2 | TRISA1 | TRISA0 |
#-----------------------------------------------------------------------#
| 7      | 6      | 5      | 4      | 3      | 2      | 1      | 0      |
#----------------------------------------------------------------------*/

#define TRISGPA                                  0x0
#define TRISGPA_address                          0x085
#define TRISGPA_position                         0x0
#define TRISGPA_size                             0x8
#define TRISGPA_value_mask                       0xFF
#define TRISGPA_clear_mask                       0x0

#define TRISA0                                   0x0
#define TRISA0_address                           0x085
#define TRISA0_position                          0x0
#define TRISA0_size                              0x1
#define TRISA0_value_mask                        0x1
#define TRISA0_clear_mask                        0xFE

#define TRISA1                                   0x1
#define TRISA1_address                           0x085
#define TRISA1_position                          0x1
#define TRISA1_size                              0x1
#define TRISA1_value_mask                        0x2
#define TRISA1_clear_mask                        0xFD

#define TRISA2                                   0x2
#define TRISA2_address                           0x085
#define TRISA2_position                          0x2
#define TRISA2_size                              0x1
#define TRISA2_value_mask                        0x4
#define TRISA2_clear_mask                        0xFB

#define TRISA3                                   0x3
#define TRISA3_address                           0x085
#define TRISA3_position                          0x3
#define TRISA3_size                              0x1
#define TRISA3_value_mask                        0x8
#define TRISA3_clear_mask                        0xF7

#define TRISA4                                   0x4
#define TRISA4_address                           0x085
#define TRISA4_position                          0x4
#define TRISA4_size                              0x1
#define TRISA4_value_mask                        0x10
#define TRISA4_clear_mask                        0xEF

#define TRISA5                                   0x5
#define TRISA5_address                           0x085
#define TRISA5_position                          0x5
#define TRISA5_size                              0x1
#define TRISA5_value_mask                        0x20
#define TRISA5_clear_mask                        0xDF

#define TRISA6                                   0x6
#define TRISA6_address                           0x085
#define TRISA6_position                          0x6
#define TRISA6_size                              0x1
#define TRISA6_value_mask                        0x40
#define TRISA6_clear_mask                        0xBF

#define TRISA7                                   0x7
#define TRISA7_address                           0x085
#define TRISA7_position                          0x7
#define TRISA7_size                              0x1
#define TRISA7_value_mask                        0x80
#define TRISA7_clear_mask                        0x7F


/*---------------------------------------------#
| TRISGPB                                 0x86 |
#----------------------------------------------#
| - | - | - | - | - | TRISB2 | TRISB1 | TRISB0 |
#----------------------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2      | 1      | 0      |
#---------------------------------------------*/

#define TRISGPB                                  0x0
#define TRISGPB_address                          0x086
#define TRISGPB_position                         0x0
#define TRISGPB_size                             0x8
#define TRISGPB_value_mask                       0xFF
#define TRISGPB_clear_mask                       0x0

#define TRISB0                                   0x0
#define TRISB0_address                           0x086
#define TRISB0_position                          0x0
#define TRISB0_size                              0x1
#define TRISB0_value_mask                        0x1
#define TRISB0_clear_mask                        0xFE

#define TRISB1                                   0x1
#define TRISB1_address                           0x086
#define TRISB1_position                          0x1
#define TRISB1_size                              0x1
#define TRISB1_value_mask                        0x2
#define TRISB1_clear_mask                        0xFD

#define TRISB2                                   0x2
#define TRISB2_address                           0x086
#define TRISB2_position                          0x2
#define TRISB2_size                              0x1
#define TRISB2_value_mask                        0x4
#define TRISB2_clear_mask                        0xFB


/*---------------------------------------------------#
| PIE1                                          0x87 |
#----------------------------------------------------#
| - | ADIE | BCLIE | SSPIE | - | - | TMR2IE | TMR1IE |
#----------------------------------------------------#
| 7 | 6    | 5     | 4     | 3 | 2 | 1      | 0      |
#---------------------------------------------------*/

#define PIE1                                     0x0
#define PIE1_address                             0x087
#define PIE1_position                            0x0
#define PIE1_size                                0x8
#define PIE1_value_mask                          0xFF
#define PIE1_clear_mask                          0x0

#define TMR1IE                                   0x0
#define TMR1IE_address                           0x087
#define TMR1IE_position                          0x0
#define TMR1IE_size                              0x1
#define TMR1IE_value_mask                        0x1
#define TMR1IE_clear_mask                        0xFE

#define TMR2IE                                   0x1
#define TMR2IE_address                           0x087
#define TMR2IE_position                          0x1
#define TMR2IE_size                              0x1
#define TMR2IE_value_mask                        0x2
#define TMR2IE_clear_mask                        0xFD

#define SSPIE                                    0x4
#define SSPIE_address                            0x087
#define SSPIE_position                           0x4
#define SSPIE_size                               0x1
#define SSPIE_value_mask                         0x10
#define SSPIE_clear_mask                         0xEF

#define BCLIE                                    0x5
#define BCLIE_address                            0x087
#define BCLIE_position                           0x5
#define BCLIE_size                               0x1
#define BCLIE_value_mask                         0x20
#define BCLIE_clear_mask                         0xDF

#define ADIE                                     0x6
#define ADIE_address                             0x087
#define ADIE_position                            0x6
#define ADIE_size                                0x1
#define ADIE_value_mask                          0x40
#define ADIE_clear_mask                          0xBF


/*------------------------------------------------#
| PIE2                                       0x88 |
#-------------------------------------------------#
| UVIE | - | OCIE | OVIE | - | - | VINIE | DCERIE |
#-------------------------------------------------#
| 7    | 6 | 5    | 4    | 3 | 2 | 1     | 0      |
#------------------------------------------------*/

#define PIE2                                     0x0
#define PIE2_address                             0x088
#define PIE2_position                            0x0
#define PIE2_size                                0x8
#define PIE2_value_mask                          0xFF
#define PIE2_clear_mask                          0x0

#define DCERIE                                   0x0
#define DCERIE_address                           0x088
#define DCERIE_position                          0x0
#define DCERIE_size                              0x1
#define DCERIE_value_mask                        0x1
#define DCERIE_clear_mask                        0xFE

#define VINIE                                    0x1
#define VINIE_address                            0x088
#define VINIE_position                           0x1
#define VINIE_size                               0x1
#define VINIE_value_mask                         0x2
#define VINIE_clear_mask                         0xFD

#define OVIE                                     0x4
#define OVIE_address                             0x088
#define OVIE_position                            0x4
#define OVIE_size                                0x1
#define OVIE_value_mask                          0x10
#define OVIE_clear_mask                          0xEF

#define OCIE                                     0x5
#define OCIE_address                             0x088
#define OCIE_position                            0x5
#define OCIE_size                                0x1
#define OCIE_value_mask                          0x20
#define OCIE_clear_mask                          0xDF

#define UVIE                                     0x7
#define UVIE_address                             0x088
#define UVIE_position                            0x7
#define UVIE_size                                0x1
#define UVIE_value_mask                          0x80
#define UVIE_clear_mask                          0x7F


/*-----------------------------------#
| APFCON                        0x89 |
#------------------------------------#
| - | - | - | - | - | - | - | CLKSEL |
#------------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0      |
#-----------------------------------*/

#define APFCON                                   0x0
#define APFCON_address                           0x089
#define APFCON_position                          0x0
#define APFCON_size                              0x8
#define APFCON_value_mask                        0xFF
#define APFCON_clear_mask                        0x0

#define CLKSEL                                   0x0
#define CLKSEL_address                           0x089
#define CLKSEL_position                          0x0
#define CLKSEL_size                              0x1
#define CLKSEL_value_mask                        0x1
#define CLKSEL_clear_mask                        0xFE


/*-----------------------------------------------------------#
| VINLVL                                                0x90 |
#------------------------------------------------------------#
| UVLOEN | - | UVLO5 | UVLO4 | UVLO3 | UVLO2 | UVLO1 | UVLO0 |
#------------------------------------------------------------#
| 7      | 6 | 5     | 4     | 3     | 2     | 1     | 0     |
#-----------------------------------------------------------*/

#define VINLVL                                   0x0
#define VINLVL_address                           0x090
#define VINLVL_position                          0x0
#define VINLVL_size                              0x8
#define VINLVL_value_mask                        0xFF
#define VINLVL_clear_mask                        0x0

#define UVLO0                                    0x0
#define UVLO0_address                            0x090
#define UVLO0_position                           0x0
#define UVLO0_size                               0x1
#define UVLO0_value_mask                         0x1
#define UVLO0_clear_mask                         0xFE

#define UVLO1                                    0x1
#define UVLO1_address                            0x090
#define UVLO1_position                           0x1
#define UVLO1_size                               0x1
#define UVLO1_value_mask                         0x2
#define UVLO1_clear_mask                         0xFD

#define UVLO2                                    0x2
#define UVLO2_address                            0x090
#define UVLO2_position                           0x2
#define UVLO2_size                               0x1
#define UVLO2_value_mask                         0x4
#define UVLO2_clear_mask                         0xFB

#define UVLO3                                    0x3
#define UVLO3_address                            0x090
#define UVLO3_position                           0x3
#define UVLO3_size                               0x1
#define UVLO3_value_mask                         0x8
#define UVLO3_clear_mask                         0xF7

#define UVLO4                                    0x4
#define UVLO4_address                            0x090
#define UVLO4_position                           0x4
#define UVLO4_size                               0x1
#define UVLO4_value_mask                         0x10
#define UVLO4_clear_mask                         0xEF

#define UVLO5                                    0x5
#define UVLO5_address                            0x090
#define UVLO5_position                           0x5
#define UVLO5_size                               0x1
#define UVLO5_value_mask                         0x20
#define UVLO5_clear_mask                         0xDF

#define UVLOEN                                   0x7
#define UVLOEN_address                           0x090
#define UVLOEN_position                          0x7
#define UVLOEN_size                              0x1
#define UVLOEN_value_mask                        0x80
#define UVLOEN_clear_mask                        0x7F


/*----------------------------------------------------------#
| OCCON                                                0x91 |
#-----------------------------------------------------------#
| OCEN | OCLEB1 | OCLEB0 | OOC4 | OOC3 | OOC2 | OOC1 | OOC0 |
#-----------------------------------------------------------#
| 7    | 6      | 5      | 4    | 3    | 2    | 1    | 0    |
#----------------------------------------------------------*/

#define OCCON                                    0x0
#define OCCON_address                            0x091
#define OCCON_position                           0x0
#define OCCON_size                               0x8
#define OCCON_value_mask                         0xFF
#define OCCON_clear_mask                         0x0

#define OOC0                                     0x0
#define OOC0_address                             0x091
#define OOC0_position                            0x0
#define OOC0_size                                0x1
#define OOC0_value_mask                          0x1
#define OOC0_clear_mask                          0xFE

#define OOC1                                     0x1
#define OOC1_address                             0x091
#define OOC1_position                            0x1
#define OOC1_size                                0x1
#define OOC1_value_mask                          0x2
#define OOC1_clear_mask                          0xFD

#define OOC2                                     0x2
#define OOC2_address                             0x091
#define OOC2_position                            0x2
#define OOC2_size                                0x1
#define OOC2_value_mask                          0x4
#define OOC2_clear_mask                          0xFB

#define OOC3                                     0x3
#define OOC3_address                             0x091
#define OOC3_position                            0x3
#define OOC3_size                                0x1
#define OOC3_value_mask                          0x8
#define OOC3_clear_mask                          0xF7

#define OOC4                                     0x4
#define OOC4_address                             0x091
#define OOC4_position                            0x4
#define OOC4_size                                0x1
#define OOC4_value_mask                          0x10
#define OOC4_clear_mask                          0xEF

#define OCLEB0                                   0x5
#define OCLEB0_address                           0x091
#define OCLEB0_position                          0x5
#define OCLEB0_size                              0x1
#define OCLEB0_value_mask                        0x20
#define OCLEB0_clear_mask                        0xDF

#define OCLEB1                                   0x6
#define OCLEB1_address                           0x091
#define OCLEB1_position                          0x6
#define OCLEB1_size                              0x1
#define OCLEB1_value_mask                        0x40
#define OCLEB1_clear_mask                        0xBF

#define OCEN                                     0x7
#define OCEN_address                             0x091
#define OCEN_position                            0x7
#define OCEN_size                                0x1
#define OCEN_value_mask                          0x80
#define OCEN_clear_mask                          0x7F


/*----------------------------------------------#
| CSGSCON                                  0x93 |
#-----------------------------------------------#
| - | - | - | - | CSGS3 | CSGS2 | CSGS1 | CSGS0 |
#-----------------------------------------------#
| 7 | 6 | 5 | 4 | 3     | 2     | 1     | 0     |
#----------------------------------------------*/

#define CSGSCON                                  0x0
#define CSGSCON_address                          0x093
#define CSGSCON_position                         0x0
#define CSGSCON_size                             0x8
#define CSGSCON_value_mask                       0xFF
#define CSGSCON_clear_mask                       0x0

#define CSGS0                                    0x0
#define CSGS0_address                            0x093
#define CSGS0_position                           0x0
#define CSGS0_size                               0x1
#define CSGS0_value_mask                         0x1
#define CSGS0_clear_mask                         0xFE

#define CSGS1                                    0x1
#define CSGS1_address                            0x093
#define CSGS1_position                           0x1
#define CSGS1_size                               0x1
#define CSGS1_value_mask                         0x2
#define CSGS1_clear_mask                         0xFD

#define CSGS2                                    0x2
#define CSGS2_address                            0x093
#define CSGS2_position                           0x2
#define CSGS2_size                               0x1
#define CSGS2_value_mask                         0x4
#define CSGS2_clear_mask                         0xFB

#define CSGS3                                    0x3
#define CSGS3_address                            0x093
#define CSGS3_position                           0x3
#define CSGS3_size                               0x1
#define CSGS3_value_mask                         0x8
#define CSGS3_clear_mask                         0xF7


/*-----------------------------------------------#
| CSDGCON                                   0x95 |
#------------------------------------------------#
| CSDGEN | - | - | - | - | CSDG2 | CSDG1 | CSDG0 |
#------------------------------------------------#
| 7      | 6 | 5 | 4 | 3 | 2     | 1     | 0     |
#-----------------------------------------------*/

#define CSDGCON                                  0x0
#define CSDGCON_address                          0x095
#define CSDGCON_position                         0x0
#define CSDGCON_size                             0x8
#define CSDGCON_value_mask                       0xFF
#define CSDGCON_clear_mask                       0x0

#define CSDG0                                    0x0
#define CSDG0_address                            0x095
#define CSDG0_position                           0x0
#define CSDG0_size                               0x1
#define CSDG0_value_mask                         0x1
#define CSDG0_clear_mask                         0xFE

#define CSDG1                                    0x1
#define CSDG1_address                            0x095
#define CSDG1_position                           0x1
#define CSDG1_size                               0x1
#define CSDG1_value_mask                         0x2
#define CSDG1_clear_mask                         0xFD

#define CSDG2                                    0x2
#define CSDG2_address                            0x095
#define CSDG2_position                           0x2
#define CSDG2_size                               0x1
#define CSDG2_value_mask                         0x4
#define CSDG2_clear_mask                         0xFB

#define CSDGEN                                   0x7
#define CSDGEN_address                           0x095
#define CSDGEN_position                          0x7
#define CSDGEN_size                              0x1
#define CSDGEN_value_mask                        0x80
#define CSDGEN_clear_mask                        0x7F


/*------------------------------------------------------#
| VZCCON                                           0x97 |
#-------------------------------------------------------#
| VZC7 | VZC6 | VZC5 | VZC4 | VZC3 | VZC2 | VZC1 | VZC0 |
#-------------------------------------------------------#
| 7    | 6    | 5    | 4    | 3    | 2    | 1    | 0    |
#------------------------------------------------------*/

#define VZCCON                                   0x0
#define VZCCON_address                           0x097
#define VZCCON_position                          0x0
#define VZCCON_size                              0x8
#define VZCCON_value_mask                        0xFF
#define VZCCON_clear_mask                        0x0

#define VZC0                                     0x0
#define VZC0_address                             0x097
#define VZC0_position                            0x0
#define VZC0_size                                0x1
#define VZC0_value_mask                          0x1
#define VZC0_clear_mask                          0xFE

#define VZC1                                     0x1
#define VZC1_address                             0x097
#define VZC1_position                            0x1
#define VZC1_size                                0x1
#define VZC1_value_mask                          0x2
#define VZC1_clear_mask                          0xFD

#define VZC2                                     0x2
#define VZC2_address                             0x097
#define VZC2_position                            0x2
#define VZC2_size                                0x1
#define VZC2_value_mask                          0x4
#define VZC2_clear_mask                          0xFB

#define VZC3                                     0x3
#define VZC3_address                             0x097
#define VZC3_position                            0x3
#define VZC3_size                                0x1
#define VZC3_value_mask                          0x8
#define VZC3_clear_mask                          0xF7

#define VZC4                                     0x4
#define VZC4_address                             0x097
#define VZC4_position                            0x4
#define VZC4_size                                0x1
#define VZC4_value_mask                          0x10
#define VZC4_clear_mask                          0xEF

#define VZC5                                     0x5
#define VZC5_address                             0x097
#define VZC5_position                            0x5
#define VZC5_size                                0x1
#define VZC5_value_mask                          0x20
#define VZC5_clear_mask                          0xDF

#define VZC6                                     0x6
#define VZC6_address                             0x097
#define VZC6_position                            0x6
#define VZC6_size                                0x1
#define VZC6_value_mask                          0x40
#define VZC6_clear_mask                          0xBF

#define VZC7                                     0x7
#define VZC7_address                             0x097
#define VZC7_position                            0x7
#define VZC7_size                                0x1
#define VZC7_value_mask                          0x80
#define VZC7_clear_mask                          0x7F


/*----------------------------------------------------------------------#
| CMPZCON                                                          0x98 |
#-----------------------------------------------------------------------#
| CMPZF3 | CMPZF2 | CMPZF1 | CMPZF0 | CMPZG3 | CMPZG2 | CMPZG1 | CMPZG0 |
#-----------------------------------------------------------------------#
| 7      | 6      | 5      | 4      | 3      | 2      | 1      | 0      |
#----------------------------------------------------------------------*/

#define CMPZCON                                  0x0
#define CMPZCON_address                          0x098
#define CMPZCON_position                         0x0
#define CMPZCON_size                             0x8
#define CMPZCON_value_mask                       0xFF
#define CMPZCON_clear_mask                       0x0

#define CMPZG0                                   0x0
#define CMPZG0_address                           0x098
#define CMPZG0_position                          0x0
#define CMPZG0_size                              0x1
#define CMPZG0_value_mask                        0x1
#define CMPZG0_clear_mask                        0xFE

#define CMPZG1                                   0x1
#define CMPZG1_address                           0x098
#define CMPZG1_position                          0x1
#define CMPZG1_size                              0x1
#define CMPZG1_value_mask                        0x2
#define CMPZG1_clear_mask                        0xFD

#define CMPZG2                                   0x2
#define CMPZG2_address                           0x098
#define CMPZG2_position                          0x2
#define CMPZG2_size                              0x1
#define CMPZG2_value_mask                        0x4
#define CMPZG2_clear_mask                        0xFB

#define CMPZG3                                   0x3
#define CMPZG3_address                           0x098
#define CMPZG3_position                          0x3
#define CMPZG3_size                              0x1
#define CMPZG3_value_mask                        0x8
#define CMPZG3_clear_mask                        0xF7

#define CMPZF0                                   0x4
#define CMPZF0_address                           0x098
#define CMPZF0_position                          0x4
#define CMPZF0_size                              0x1
#define CMPZF0_value_mask                        0x10
#define CMPZF0_clear_mask                        0xEF

#define CMPZF1                                   0x5
#define CMPZF1_address                           0x098
#define CMPZF1_position                          0x5
#define CMPZF1_size                              0x1
#define CMPZF1_value_mask                        0x20
#define CMPZF1_clear_mask                        0xDF

#define CMPZF2                                   0x6
#define CMPZF2_address                           0x098
#define CMPZF2_position                          0x6
#define CMPZF2_size                              0x1
#define CMPZF2_value_mask                        0x40
#define CMPZF2_clear_mask                        0xBF

#define CMPZF3                                   0x7
#define CMPZF3_address                           0x098
#define CMPZF3_position                          0x7
#define CMPZF3_size                              0x1
#define CMPZF3_value_mask                        0x80
#define CMPZF3_clear_mask                        0x7F


/*------------------------------------------------------#
| OUVCON                                           0x99 |
#-------------------------------------------------------#
| OUV7 | OUV6 | OUV5 | OUV4 | OUV3 | OUV2 | OUV1 | OUV0 |
#-------------------------------------------------------#
| 7    | 6    | 5    | 4    | 3    | 2    | 1    | 0    |
#------------------------------------------------------*/

#define OUVCON                                   0x0
#define OUVCON_address                           0x099
#define OUVCON_position                          0x0
#define OUVCON_size                              0x8
#define OUVCON_value_mask                        0xFF
#define OUVCON_clear_mask                        0x0

#define OUV0                                     0x0
#define OUV0_address                             0x099
#define OUV0_position                            0x0
#define OUV0_size                                0x1
#define OUV0_value_mask                          0x1
#define OUV0_clear_mask                          0xFE

#define OUV1                                     0x1
#define OUV1_address                             0x099
#define OUV1_position                            0x1
#define OUV1_size                                0x1
#define OUV1_value_mask                          0x2
#define OUV1_clear_mask                          0xFD

#define OUV2                                     0x2
#define OUV2_address                             0x099
#define OUV2_position                            0x2
#define OUV2_size                                0x1
#define OUV2_value_mask                          0x4
#define OUV2_clear_mask                          0xFB

#define OUV3                                     0x3
#define OUV3_address                             0x099
#define OUV3_position                            0x3
#define OUV3_size                                0x1
#define OUV3_value_mask                          0x8
#define OUV3_clear_mask                          0xF7

#define OUV4                                     0x4
#define OUV4_address                             0x099
#define OUV4_position                            0x4
#define OUV4_size                                0x1
#define OUV4_value_mask                          0x10
#define OUV4_clear_mask                          0xEF

#define OUV5                                     0x5
#define OUV5_address                             0x099
#define OUV5_position                            0x5
#define OUV5_size                                0x1
#define OUV5_value_mask                          0x20
#define OUV5_clear_mask                          0xDF

#define OUV6                                     0x6
#define OUV6_address                             0x099
#define OUV6_position                            0x6
#define OUV6_size                                0x1
#define OUV6_value_mask                          0x40
#define OUV6_clear_mask                          0xBF

#define OUV7                                     0x7
#define OUV7_address                             0x099
#define OUV7_position                            0x7
#define OUV7_size                                0x1
#define OUV7_value_mask                          0x80
#define OUV7_clear_mask                          0x7F


/*------------------------------------------------------#
| OOVCON                                           0x9A |
#-------------------------------------------------------#
| OOV7 | OOV6 | OOV5 | OOV4 | OOV3 | OOV2 | OOV1 | OOV0 |
#-------------------------------------------------------#
| 7    | 6    | 5    | 4    | 3    | 2    | 1    | 0    |
#------------------------------------------------------*/

#define OOVCON                                   0x0
#define OOVCON_address                           0x09A
#define OOVCON_position                          0x0
#define OOVCON_size                              0x8
#define OOVCON_value_mask                        0xFF
#define OOVCON_clear_mask                        0x0

#define OOV0                                     0x0
#define OOV0_address                             0x09A
#define OOV0_position                            0x0
#define OOV0_size                                0x1
#define OOV0_value_mask                          0x1
#define OOV0_clear_mask                          0xFE

#define OOV1                                     0x1
#define OOV1_address                             0x09A
#define OOV1_position                            0x1
#define OOV1_size                                0x1
#define OOV1_value_mask                          0x2
#define OOV1_clear_mask                          0xFD

#define OOV2                                     0x2
#define OOV2_address                             0x09A
#define OOV2_position                            0x2
#define OOV2_size                                0x1
#define OOV2_value_mask                          0x4
#define OOV2_clear_mask                          0xFB

#define OOV3                                     0x3
#define OOV3_address                             0x09A
#define OOV3_position                            0x3
#define OOV3_size                                0x1
#define OOV3_value_mask                          0x8
#define OOV3_clear_mask                          0xF7

#define OOV4                                     0x4
#define OOV4_address                             0x09A
#define OOV4_position                            0x4
#define OOV4_size                                0x1
#define OOV4_value_mask                          0x10
#define OOV4_clear_mask                          0xEF

#define OOV5                                     0x5
#define OOV5_address                             0x09A
#define OOV5_position                            0x5
#define OOV5_size                                0x1
#define OOV5_value_mask                          0x20
#define OOV5_clear_mask                          0xDF

#define OOV6                                     0x6
#define OOV6_address                             0x09A
#define OOV6_position                            0x6
#define OOV6_size                                0x1
#define OOV6_value_mask                          0x40
#define OOV6_clear_mask                          0xBF

#define OOV7                                     0x7
#define OOV7_address                             0x09A
#define OOV7_position                            0x7
#define OOV7_size                                0x1
#define OOV7_value_mask                          0x80
#define OOV7_clear_mask                          0x7F


/*--------------------------------------------------------------#
| DEADCON                                                  0x9B |
#---------------------------------------------------------------#
| HDLY3 | HDLY2 | HDLY1 | HDLY0 | LDLY3 | LDLY2 | LDLY1 | LDLY0 |
#---------------------------------------------------------------#
| 7     | 6     | 5     | 4     | 3     | 2     | 1     | 0     |
#--------------------------------------------------------------*/

#define DEADCON                                  0x0
#define DEADCON_address                          0x09B
#define DEADCON_position                         0x0
#define DEADCON_size                             0x8
#define DEADCON_value_mask                       0xFF
#define DEADCON_clear_mask                       0x0

#define LDLY0                                    0x0
#define LDLY0_address                            0x09B
#define LDLY0_position                           0x0
#define LDLY0_size                               0x1
#define LDLY0_value_mask                         0x1
#define LDLY0_clear_mask                         0xFE

#define LDLY1                                    0x1
#define LDLY1_address                            0x09B
#define LDLY1_position                           0x1
#define LDLY1_size                               0x1
#define LDLY1_value_mask                         0x2
#define LDLY1_clear_mask                         0xFD

#define LDLY2                                    0x2
#define LDLY2_address                            0x09B
#define LDLY2_position                           0x2
#define LDLY2_size                               0x1
#define LDLY2_value_mask                         0x4
#define LDLY2_clear_mask                         0xFB

#define LDLY3                                    0x3
#define LDLY3_address                            0x09B
#define LDLY3_position                           0x3
#define LDLY3_size                               0x1
#define LDLY3_value_mask                         0x8
#define LDLY3_clear_mask                         0xF7

#define HDLY0                                    0x4
#define HDLY0_address                            0x09B
#define HDLY0_position                           0x4
#define HDLY0_size                               0x1
#define HDLY0_value_mask                         0x10
#define HDLY0_clear_mask                         0xEF

#define HDLY1                                    0x5
#define HDLY1_address                            0x09B
#define HDLY1_position                           0x5
#define HDLY1_size                               0x1
#define HDLY1_value_mask                         0x20
#define HDLY1_clear_mask                         0xDF

#define HDLY2                                    0x6
#define HDLY2_address                            0x09B
#define HDLY2_position                           0x6
#define HDLY2_size                               0x1
#define HDLY2_value_mask                         0x40
#define HDLY2_clear_mask                         0xBF

#define HDLY3                                    0x7
#define HDLY3_address                            0x09B
#define HDLY3_position                           0x7
#define HDLY3_size                               0x1
#define HDLY3_value_mask                         0x80
#define HDLY3_clear_mask                         0x7F


/*--------------------------------------------------------------#
| SLPCRCON                                                 0x9C |
#---------------------------------------------------------------#
| SLPG3 | SLPG2 | SLPG1 | SLPG0 | SLPS3 | SLPS2 | SLPS1 | SLPS0 |
#---------------------------------------------------------------#
| 7     | 6     | 5     | 4     | 3     | 2     | 1     | 0     |
#--------------------------------------------------------------*/

#define SLPCRCON                                 0x0
#define SLPCRCON_address                         0x09C
#define SLPCRCON_position                        0x0
#define SLPCRCON_size                            0x8
#define SLPCRCON_value_mask                      0xFF
#define SLPCRCON_clear_mask                      0x0

#define SLPS0                                    0x0
#define SLPS0_address                            0x09C
#define SLPS0_position                           0x0
#define SLPS0_size                               0x1
#define SLPS0_value_mask                         0x1
#define SLPS0_clear_mask                         0xFE

#define SLPS1                                    0x1
#define SLPS1_address                            0x09C
#define SLPS1_position                           0x1
#define SLPS1_size                               0x1
#define SLPS1_value_mask                         0x2
#define SLPS1_clear_mask                         0xFD

#define SLPS2                                    0x2
#define SLPS2_address                            0x09C
#define SLPS2_position                           0x2
#define SLPS2_size                               0x1
#define SLPS2_value_mask                         0x4
#define SLPS2_clear_mask                         0xFB

#define SLPS3                                    0x3
#define SLPS3_address                            0x09C
#define SLPS3_position                           0x3
#define SLPS3_size                               0x1
#define SLPS3_value_mask                         0x8
#define SLPS3_clear_mask                         0xF7

#define SLPG0                                    0x4
#define SLPG0_address                            0x09C
#define SLPG0_position                           0x4
#define SLPG0_size                               0x1
#define SLPG0_value_mask                         0x10
#define SLPG0_clear_mask                         0xEF

#define SLPG1                                    0x5
#define SLPG1_address                            0x09C
#define SLPG1_position                           0x5
#define SLPG1_size                               0x1
#define SLPG1_value_mask                         0x20
#define SLPG1_clear_mask                         0xDF

#define SLPG2                                    0x6
#define SLPG2_address                            0x09C
#define SLPG2_position                           0x6
#define SLPG2_size                               0x1
#define SLPG2_value_mask                         0x40
#define SLPG2_clear_mask                         0xBF

#define SLPG3                                    0x7
#define SLPG3_address                            0x09C
#define SLPG3_position                           0x7
#define SLPG3_size                               0x1
#define SLPG3_value_mask                         0x80
#define SLPG3_clear_mask                         0x7F


/*-------------------------------------------------------#
| SLVGNCON                                          0x9D |
#--------------------------------------------------------#
| - | - | - | SLVGN4 | SLVGN3 | SLVGN2 | SLVGN1 | SLVGN0 |
#--------------------------------------------------------#
| 7 | 6 | 5 | 4      | 3      | 2      | 1      | 0      |
#-------------------------------------------------------*/

#define SLVGNCON                                 0x0
#define SLVGNCON_address                         0x09D
#define SLVGNCON_position                        0x0
#define SLVGNCON_size                            0x8
#define SLVGNCON_value_mask                      0xFF
#define SLVGNCON_clear_mask                      0x0

#define SLVGN0                                   0x0
#define SLVGN0_address                           0x09D
#define SLVGN0_position                          0x0
#define SLVGN0_size                              0x1
#define SLVGN0_value_mask                        0x1
#define SLVGN0_clear_mask                        0xFE

#define SLVGN1                                   0x1
#define SLVGN1_address                           0x09D
#define SLVGN1_position                          0x1
#define SLVGN1_size                              0x1
#define SLVGN1_value_mask                        0x2
#define SLVGN1_clear_mask                        0xFD

#define SLVGN2                                   0x2
#define SLVGN2_address                           0x09D
#define SLVGN2_position                          0x2
#define SLVGN2_size                              0x1
#define SLVGN2_value_mask                        0x4
#define SLVGN2_clear_mask                        0xFB

#define SLVGN3                                   0x3
#define SLVGN3_address                           0x09D
#define SLVGN3_position                          0x3
#define SLVGN3_size                              0x1
#define SLVGN3_value_mask                        0x8
#define SLVGN3_clear_mask                        0xF7

#define SLVGN4                                   0x4
#define SLVGN4_address                           0x09D
#define SLVGN4_position                          0x4
#define SLVGN4_size                              0x1
#define SLVGN4_value_mask                        0x10
#define SLVGN4_clear_mask                        0xEF


/*-------------------------------------------------#
| RELEFF                                      0x9E |
#--------------------------------------------------#
| MSDONE | RE6 | RE5 | RE4 | RE3 | RE2 | RE1 | RE0 |
#--------------------------------------------------#
| 7      | 6   | 5   | 4   | 3   | 2   | 1   | 0   |
#-------------------------------------------------*/

#define RELEFF                                   0x0
#define RELEFF_address                           0x09E
#define RELEFF_position                          0x0
#define RELEFF_size                              0x8
#define RELEFF_value_mask                        0xFF
#define RELEFF_clear_mask                        0x0

#define RE0                                      0x0
#define RE0_address                              0x09E
#define RE0_position                             0x0
#define RE0_size                                 0x1
#define RE0_value_mask                           0x1
#define RE0_clear_mask                           0xFE

#define RE1                                      0x1
#define RE1_address                              0x09E
#define RE1_position                             0x1
#define RE1_size                                 0x1
#define RE1_value_mask                           0x2
#define RE1_clear_mask                           0xFD

#define RE2                                      0x2
#define RE2_address                              0x09E
#define RE2_position                             0x2
#define RE2_size                                 0x1
#define RE2_value_mask                           0x4
#define RE2_clear_mask                           0xFB

#define RE3                                      0x3
#define RE3_address                              0x09E
#define RE3_position                             0x3
#define RE3_size                                 0x1
#define RE3_value_mask                           0x8
#define RE3_clear_mask                           0xF7

#define RE4                                      0x4
#define RE4_address                              0x09E
#define RE4_position                             0x4
#define RE4_size                                 0x1
#define RE4_value_mask                           0x10
#define RE4_clear_mask                           0xEF

#define RE5                                      0x5
#define RE5_address                              0x09E
#define RE5_position                             0x5
#define RE5_size                                 0x1
#define RE5_value_mask                           0x20
#define RE5_clear_mask                           0xDF

#define RE6                                      0x6
#define RE6_address                              0x09E
#define RE6_position                             0x6
#define RE6_size                                 0x1
#define RE6_value_mask                           0x40
#define RE6_clear_mask                           0xBF

#define MSDONE                                   0x7
#define MSDONE_address                           0x09E
#define MSDONE_position                          0x7
#define MSDONE_size                              0x1
#define MSDONE_value_mask                        0x80
#define MSDONE_clear_mask                        0x7F


/*------------------------------------------------------------#
| WPUGPA                                                0x105 |
#-------------------------------------------------------------#
| - | - | WPUGPA5 | - | WPUGPA3 | WPUGPA2 | WPUGPA1 | WPUGPA0 |
#-------------------------------------------------------------#
| 7 | 6 | 5       | 4 | 3       | 2       | 1       | 0       |
#------------------------------------------------------------*/

#define WPUGPA                                   0x0
#define WPUGPA_address                           0x105
#define WPUGPA_position                          0x0
#define WPUGPA_size                              0x8
#define WPUGPA_value_mask                        0xFF
#define WPUGPA_clear_mask                        0x0

#define WPUGPA0                                  0x0
#define WPUGPA0_address                          0x105
#define WPUGPA0_position                         0x0
#define WPUGPA0_size                             0x1
#define WPUGPA0_value_mask                       0x1
#define WPUGPA0_clear_mask                       0xFE

#define WPUA0                                    0x0
#define WPUA0_address                            0x105
#define WPUA0_position                           0x0
#define WPUA0_size                               0x1
#define WPUA0_value_mask                         0x1
#define WPUA0_clear_mask                         0xFE

#define WPUGPA1                                  0x1
#define WPUGPA1_address                          0x105
#define WPUGPA1_position                         0x1
#define WPUGPA1_size                             0x1
#define WPUGPA1_value_mask                       0x2
#define WPUGPA1_clear_mask                       0xFD

#define WPUA1                                    0x1
#define WPUA1_address                            0x105
#define WPUA1_position                           0x1
#define WPUA1_size                               0x1
#define WPUA1_value_mask                         0x2
#define WPUA1_clear_mask                         0xFD

#define WPUGPA2                                  0x2
#define WPUGPA2_address                          0x105
#define WPUGPA2_position                         0x2
#define WPUGPA2_size                             0x1
#define WPUGPA2_value_mask                       0x4
#define WPUGPA2_clear_mask                       0xFB

#define WPUA2                                    0x2
#define WPUA2_address                            0x105
#define WPUA2_position                           0x2
#define WPUA2_size                               0x1
#define WPUA2_value_mask                         0x4
#define WPUA2_clear_mask                         0xFB

#define WPUGPA3                                  0x3
#define WPUGPA3_address                          0x105
#define WPUGPA3_position                         0x3
#define WPUGPA3_size                             0x1
#define WPUGPA3_value_mask                       0x8
#define WPUGPA3_clear_mask                       0xF7

#define WPUA3                                    0x3
#define WPUA3_address                            0x105
#define WPUA3_position                           0x3
#define WPUA3_size                               0x1
#define WPUA3_value_mask                         0x8
#define WPUA3_clear_mask                         0xF7

#define WPUGPA5                                  0x5
#define WPUGPA5_address                          0x105
#define WPUGPA5_position                         0x5
#define WPUGPA5_size                             0x1
#define WPUGPA5_value_mask                       0x20
#define WPUGPA5_clear_mask                       0xDF

#define WPUA5                                    0x5
#define WPUA5_address                            0x105
#define WPUA5_position                           0x5
#define WPUA5_size                               0x1
#define WPUA5_value_mask                         0x20
#define WPUA5_clear_mask                         0xDF


/*------------------------------------------------------#
| WPUGPB                                          0x106 |
#-------------------------------------------------------#
| WPUB7 | WPUB6 | WPUB5 | WPUB4 | - | WPUB2 | WPUB1 | - |
#-------------------------------------------------------#
| 7     | 6     | 5     | 4     | 3 | 2     | 1     | 0 |
#------------------------------------------------------*/

#define WPUGPB                                   0x0
#define WPUGPB_address                           0x106
#define WPUGPB_position                          0x0
#define WPUGPB_size                              0x8
#define WPUGPB_value_mask                        0xFF
#define WPUGPB_clear_mask                        0x0

#define WPUB1                                    0x1
#define WPUB1_address                            0x106
#define WPUB1_position                           0x1
#define WPUB1_size                               0x1
#define WPUB1_value_mask                         0x2
#define WPUB1_clear_mask                         0xFD

#define WPUGPB1                                  0x1
#define WPUGPB1_address                          0x106
#define WPUGPB1_position                         0x1
#define WPUGPB1_size                             0x1
#define WPUGPB1_value_mask                       0x2
#define WPUGPB1_clear_mask                       0xFD

#define WPUB2                                    0x2
#define WPUB2_address                            0x106
#define WPUB2_position                           0x2
#define WPUB2_size                               0x1
#define WPUB2_value_mask                         0x4
#define WPUB2_clear_mask                         0xFB

#define WPUGPB2                                  0x2
#define WPUGPB2_address                          0x106
#define WPUGPB2_position                         0x2
#define WPUGPB2_size                             0x1
#define WPUGPB2_value_mask                       0x4
#define WPUGPB2_clear_mask                       0xFB

#define WPUB4                                    0x4
#define WPUB4_address                            0x106
#define WPUB4_position                           0x4
#define WPUB4_size                               0x1
#define WPUB4_value_mask                         0x10
#define WPUB4_clear_mask                         0xEF

#define WPUB5                                    0x5
#define WPUB5_address                            0x106
#define WPUB5_position                           0x5
#define WPUB5_size                               0x1
#define WPUB5_value_mask                         0x20
#define WPUB5_clear_mask                         0xDF

#define WPUB6                                    0x6
#define WPUB6_address                            0x106
#define WPUB6_position                           0x6
#define WPUB6_size                               0x1
#define WPUB6_value_mask                         0x40
#define WPUB6_clear_mask                         0xBF

#define WPUB7                                    0x7
#define WPUB7_address                            0x106
#define WPUB7_position                           0x7
#define WPUB7_size                               0x1
#define WPUB7_value_mask                         0x80
#define WPUB7_clear_mask                         0x7F


/*---------------------------------------------------------------#
| PE1                                                      0x107 |
#----------------------------------------------------------------#
| DECON | DVRSTR | HDLYBY | LDLYBY | PDEN | PUEN | UVTEE | OVTEE |
#----------------------------------------------------------------#
| 7     | 6      | 5      | 4      | 3    | 2    | 1     | 0     |
#---------------------------------------------------------------*/

#define PE1                                      0x0
#define PE1_address                              0x107
#define PE1_position                             0x0
#define PE1_size                                 0x8
#define PE1_value_mask                           0xFF
#define PE1_clear_mask                           0x0

#define OVTEE                                    0x0
#define OVTEE_address                            0x107
#define OVTEE_position                           0x0
#define OVTEE_size                               0x1
#define OVTEE_value_mask                         0x1
#define OVTEE_clear_mask                         0xFE

#define UVTEE                                    0x1
#define UVTEE_address                            0x107
#define UVTEE_position                           0x1
#define UVTEE_size                               0x1
#define UVTEE_value_mask                         0x2
#define UVTEE_clear_mask                         0xFD

#define PUEN                                     0x2
#define PUEN_address                             0x107
#define PUEN_position                            0x2
#define PUEN_size                                0x1
#define PUEN_value_mask                          0x4
#define PUEN_clear_mask                          0xFB

#define PDEN                                     0x3
#define PDEN_address                             0x107
#define PDEN_position                            0x3
#define PDEN_size                                0x1
#define PDEN_value_mask                          0x8
#define PDEN_clear_mask                          0xF7

#define LDLYBY                                   0x4
#define LDLYBY_address                           0x107
#define LDLYBY_position                          0x4
#define LDLYBY_size                              0x1
#define LDLYBY_value_mask                        0x10
#define LDLYBY_clear_mask                        0xEF

#define HDLYBY                                   0x5
#define HDLYBY_address                           0x107
#define HDLYBY_position                          0x5
#define HDLYBY_size                              0x1
#define HDLYBY_value_mask                        0x20
#define HDLYBY_clear_mask                        0xDF

#define DVRSTR                                   0x6
#define DVRSTR_address                           0x107
#define DVRSTR_position                          0x6
#define DVRSTR_size                              0x1
#define DVRSTR_value_mask                        0x40
#define DVRSTR_clear_mask                        0xBF

#define DECON                                    0x7
#define DECON_address                            0x107
#define DECON_position                           0x7
#define DECON_size                               0x1
#define DECON_value_mask                         0x80
#define DECON_clear_mask                         0x7F


/*-----------------------------------------------------------------#
| BUFFCON                                                    0x108 |
#------------------------------------------------------------------#
| MLTPH2 | MLTPH1 | MLTPH0 | ASEL4 | ASEL3 | ASEL2 | ASEL1 | ASEL0 |
#------------------------------------------------------------------#
| 7      | 6      | 5      | 4     | 3     | 2     | 1     | 0     |
#-----------------------------------------------------------------*/

#define BUFFCON                                  0x0
#define BUFFCON_address                          0x108
#define BUFFCON_position                         0x0
#define BUFFCON_size                             0x8
#define BUFFCON_value_mask                       0xFF
#define BUFFCON_clear_mask                       0x0

#define ASEL0                                    0x0
#define ASEL0_address                            0x108
#define ASEL0_position                           0x0
#define ASEL0_size                               0x1
#define ASEL0_value_mask                         0x1
#define ASEL0_clear_mask                         0xFE

#define ASEL1                                    0x1
#define ASEL1_address                            0x108
#define ASEL1_position                           0x1
#define ASEL1_size                               0x1
#define ASEL1_value_mask                         0x2
#define ASEL1_clear_mask                         0xFD

#define ASEL2                                    0x2
#define ASEL2_address                            0x108
#define ASEL2_position                           0x2
#define ASEL2_size                               0x1
#define ASEL2_value_mask                         0x4
#define ASEL2_clear_mask                         0xFB

#define ASEL3                                    0x3
#define ASEL3_address                            0x108
#define ASEL3_position                           0x3
#define ASEL3_size                               0x1
#define ASEL3_value_mask                         0x8
#define ASEL3_clear_mask                         0xF7

#define ASEL4                                    0x4
#define ASEL4_address                            0x108
#define ASEL4_position                           0x4
#define ASEL4_size                               0x1
#define ASEL4_value_mask                         0x10
#define ASEL4_clear_mask                         0xEF

#define MLTPH0                                   0x5
#define MLTPH0_address                           0x108
#define MLTPH0_position                          0x5
#define MLTPH0_size                              0x1
#define MLTPH0_value_mask                        0x20
#define MLTPH0_clear_mask                        0xDF

#define MLTPH1                                   0x6
#define MLTPH1_address                           0x108
#define MLTPH1_position                          0x6
#define MLTPH1_size                              0x1
#define MLTPH1_value_mask                        0x40
#define MLTPH1_clear_mask                        0xBF

#define MLTPH2                                   0x7
#define MLTPH2_address                           0x108
#define MLTPH2_position                          0x7
#define MLTPH2_size                              0x1
#define MLTPH2_value_mask                        0x80
#define MLTPH2_clear_mask                        0x7F


/*-----------------------------------------------------------------------#
| ABECON                                                           0x109 |
#------------------------------------------------------------------------#
| OVDCEN | UVDCEN | MEASEN | SLCPBY | CRTMEN | TMPSEN | RECIREN | PATHEN |
#------------------------------------------------------------------------#
| 7      | 6      | 5      | 4      | 3      | 2      | 1       | 0      |
#-----------------------------------------------------------------------*/

#define ABECON                                   0x0
#define ABECON_address                           0x109
#define ABECON_position                          0x0
#define ABECON_size                              0x8
#define ABECON_value_mask                        0xFF
#define ABECON_clear_mask                        0x0

#define PATHEN                                   0x0
#define PATHEN_address                           0x109
#define PATHEN_position                          0x0
#define PATHEN_size                              0x1
#define PATHEN_value_mask                        0x1
#define PATHEN_clear_mask                        0xFE

#define RECIREN                                  0x1
#define RECIREN_address                          0x109
#define RECIREN_position                         0x1
#define RECIREN_size                             0x1
#define RECIREN_value_mask                       0x2
#define RECIREN_clear_mask                       0xFD

#define TMPSEN                                   0x2
#define TMPSEN_address                           0x109
#define TMPSEN_position                          0x2
#define TMPSEN_size                              0x1
#define TMPSEN_value_mask                        0x4
#define TMPSEN_clear_mask                        0xFB

#define CRTMEN                                   0x3
#define CRTMEN_address                           0x109
#define CRTMEN_position                          0x3
#define CRTMEN_size                              0x1
#define CRTMEN_value_mask                        0x8
#define CRTMEN_clear_mask                        0xF7

#define SLCPBY                                   0x4
#define SLCPBY_address                           0x109
#define SLCPBY_position                          0x4
#define SLCPBY_size                              0x1
#define SLCPBY_value_mask                        0x10
#define SLCPBY_clear_mask                        0xEF

#define MEASEN                                   0x5
#define MEASEN_address                           0x109
#define MEASEN_position                          0x5
#define MEASEN_size                              0x1
#define MEASEN_value_mask                        0x20
#define MEASEN_clear_mask                        0xDF

#define UVDCEN                                   0x6
#define UVDCEN_address                           0x109
#define UVDCEN_position                          0x6
#define UVDCEN_size                              0x1
#define UVDCEN_value_mask                        0x40
#define UVDCEN_clear_mask                        0xBF

#define OVDCEN                                   0x7
#define OVDCEN_address                           0x109
#define OVDCEN_position                          0x7
#define OVDCEN_size                              0x1
#define OVDCEN_value_mask                        0x80
#define OVDCEN_clear_mask                        0x7F


/*------------------------------#
| SSPADD                  0x110 |
#-------------------------------#
| ADD                           |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define SSPADD                                   0x0
#define SSPADD_address                           0x110
#define SSPADD_position                          0x0
#define SSPADD_size                              0x8
#define SSPADD_value_mask                        0xFF
#define SSPADD_clear_mask                        0x0

#define ADD                                      0x0
#define ADD_address                              0x110
#define ADD_position                             0x0
#define ADD_size                                 0x8
#define ADD_value_mask                           0xFF
#define ADD_clear_mask                           0x0


/*------------------------------#
| SSPBUF                  0x111 |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define SSPBUF                                   0x0
#define SSPBUF_address                           0x111
#define SSPBUF_position                          0x0
#define SSPBUF_size                              0x8
#define SSPBUF_value_mask                        0xFF
#define SSPBUF_clear_mask                        0x0


/*-----------------------------------------------------------#
| SSPCON1                                              0x112 |
#------------------------------------------------------------#
| WCOL | SSPOV | SSPEN | CKP | SSPM3 | SSPM2 | SSPM1 | SSPM0 |
#------------------------------------------------------------#
| 7    | 6     | 5     | 4   | 3     | 2     | 1     | 0     |
#-----------------------------------------------------------*/

#define SSPCON1                                  0x0
#define SSPCON1_address                          0x112
#define SSPCON1_position                         0x0
#define SSPCON1_size                             0x8
#define SSPCON1_value_mask                       0xFF
#define SSPCON1_clear_mask                       0x0

#define SSPM0                                    0x0
#define SSPM0_address                            0x112
#define SSPM0_position                           0x0
#define SSPM0_size                               0x1
#define SSPM0_value_mask                         0x1
#define SSPM0_clear_mask                         0xFE

#define SSPM1                                    0x1
#define SSPM1_address                            0x112
#define SSPM1_position                           0x1
#define SSPM1_size                               0x1
#define SSPM1_value_mask                         0x2
#define SSPM1_clear_mask                         0xFD

#define SSPM2                                    0x2
#define SSPM2_address                            0x112
#define SSPM2_position                           0x2
#define SSPM2_size                               0x1
#define SSPM2_value_mask                         0x4
#define SSPM2_clear_mask                         0xFB

#define SSPM3                                    0x3
#define SSPM3_address                            0x112
#define SSPM3_position                           0x3
#define SSPM3_size                               0x1
#define SSPM3_value_mask                         0x8
#define SSPM3_clear_mask                         0xF7

#define CKP                                      0x4
#define CKP_address                              0x112
#define CKP_position                             0x4
#define CKP_size                                 0x1
#define CKP_value_mask                           0x10
#define CKP_clear_mask                           0xEF

#define SSPEN                                    0x5
#define SSPEN_address                            0x112
#define SSPEN_position                           0x5
#define SSPEN_size                               0x1
#define SSPEN_value_mask                         0x20
#define SSPEN_clear_mask                         0xDF

#define SSPOV                                    0x6
#define SSPOV_address                            0x112
#define SSPOV_position                           0x6
#define SSPOV_size                               0x1
#define SSPOV_value_mask                         0x40
#define SSPOV_clear_mask                         0xBF

#define WCOL                                     0x7
#define WCOL_address                             0x112
#define WCOL_position                            0x7
#define WCOL_size                                0x1
#define WCOL_value_mask                          0x80
#define WCOL_clear_mask                          0x7F


/*---------------------------------------------------------#
| SSPCON2                                            0x113 |
#----------------------------------------------------------#
| GCEN | ACKSTAT | ACKDT | ACKEN | RCEN | PEN | RSEN | SEN |
#----------------------------------------------------------#
| 7    | 6       | 5     | 4     | 3    | 2   | 1    | 0   |
#---------------------------------------------------------*/

#define SSPCON2                                  0x0
#define SSPCON2_address                          0x113
#define SSPCON2_position                         0x0
#define SSPCON2_size                             0x8
#define SSPCON2_value_mask                       0xFF
#define SSPCON2_clear_mask                       0x0

#define SEN                                      0x0
#define SEN_address                              0x113
#define SEN_position                             0x0
#define SEN_size                                 0x1
#define SEN_value_mask                           0x1
#define SEN_clear_mask                           0xFE

#define RSEN                                     0x1
#define RSEN_address                             0x113
#define RSEN_position                            0x1
#define RSEN_size                                0x1
#define RSEN_value_mask                          0x2
#define RSEN_clear_mask                          0xFD

#define PEN                                      0x2
#define PEN_address                              0x113
#define PEN_position                             0x2
#define PEN_size                                 0x1
#define PEN_value_mask                           0x4
#define PEN_clear_mask                           0xFB

#define RCEN                                     0x3
#define RCEN_address                             0x113
#define RCEN_position                            0x3
#define RCEN_size                                0x1
#define RCEN_value_mask                          0x8
#define RCEN_clear_mask                          0xF7

#define ACKEN                                    0x4
#define ACKEN_address                            0x113
#define ACKEN_position                           0x4
#define ACKEN_size                               0x1
#define ACKEN_value_mask                         0x10
#define ACKEN_clear_mask                         0xEF

#define ACKDT                                    0x5
#define ACKDT_address                            0x113
#define ACKDT_position                           0x5
#define ACKDT_size                               0x1
#define ACKDT_value_mask                         0x20
#define ACKDT_clear_mask                         0xDF

#define ACKSTAT                                  0x6
#define ACKSTAT_address                          0x113
#define ACKSTAT_position                         0x6
#define ACKSTAT_size                             0x1
#define ACKSTAT_value_mask                       0x40
#define ACKSTAT_clear_mask                       0xBF

#define GCEN                                     0x7
#define GCEN_address                             0x113
#define GCEN_position                            0x7
#define GCEN_size                                0x1
#define GCEN_value_mask                          0x80
#define GCEN_clear_mask                          0x7F


/*----------------------------------------------------------#
| SSPCON3                                             0x114 |
#-----------------------------------------------------------#
| ACKTIM | PCIE | SCIE | BOEN | SDAHT | SBCDE | AHEN | DHEN |
#-----------------------------------------------------------#
| 7      | 6    | 5    | 4    | 3     | 2     | 1    | 0    |
#----------------------------------------------------------*/

#define SSPCON3                                  0x0
#define SSPCON3_address                          0x114
#define SSPCON3_position                         0x0
#define SSPCON3_size                             0x8
#define SSPCON3_value_mask                       0xFF
#define SSPCON3_clear_mask                       0x0

#define DHEN                                     0x0
#define DHEN_address                             0x114
#define DHEN_position                            0x0
#define DHEN_size                                0x1
#define DHEN_value_mask                          0x1
#define DHEN_clear_mask                          0xFE

#define AHEN                                     0x1
#define AHEN_address                             0x114
#define AHEN_position                            0x1
#define AHEN_size                                0x1
#define AHEN_value_mask                          0x2
#define AHEN_clear_mask                          0xFD

#define SBCDE                                    0x2
#define SBCDE_address                            0x114
#define SBCDE_position                           0x2
#define SBCDE_size                               0x1
#define SBCDE_value_mask                         0x4
#define SBCDE_clear_mask                         0xFB

#define SDAHT                                    0x3
#define SDAHT_address                            0x114
#define SDAHT_position                           0x3
#define SDAHT_size                               0x1
#define SDAHT_value_mask                         0x8
#define SDAHT_clear_mask                         0xF7

#define BOEN                                     0x4
#define BOEN_address                             0x114
#define BOEN_position                            0x4
#define BOEN_size                                0x1
#define BOEN_value_mask                          0x10
#define BOEN_clear_mask                          0xEF

#define SCIE                                     0x5
#define SCIE_address                             0x114
#define SCIE_position                            0x5
#define SCIE_size                                0x1
#define SCIE_value_mask                          0x20
#define SCIE_clear_mask                          0xDF

#define PCIE                                     0x6
#define PCIE_address                             0x114
#define PCIE_position                            0x6
#define PCIE_size                                0x1
#define PCIE_value_mask                          0x40
#define PCIE_clear_mask                          0xBF

#define ACKTIM                                   0x7
#define ACKTIM_address                           0x114
#define ACKTIM_position                          0x7
#define ACKTIM_size                              0x1
#define ACKTIM_value_mask                        0x80
#define ACKTIM_clear_mask                        0x7F


/*------------------------------#
| SSPMSK                  0x115 |
#-------------------------------#
| MSK                           |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define SSPMSK                                   0x0
#define SSPMSK_address                           0x115
#define SSPMSK_position                          0x0
#define SSPMSK_size                              0x8
#define SSPMSK_value_mask                        0xFF
#define SSPMSK_clear_mask                        0x0

#define MSK                                      0x0
#define MSK_address                              0x115
#define MSK_position                             0x0
#define MSK_size                                 0x8
#define MSK_value_mask                           0xFF
#define MSK_clear_mask                           0x0


/*------------------------------------------#
| SSPSTAT                             0x116 |
#-------------------------------------------#
| SMP | CKE | D_nA | P | S | R_nW | UA | BF |
#-------------------------------------------#
| 7   | 6   | 5    | 4 | 3 | 2    | 1  | 0  |
#------------------------------------------*/

#define SSPSTAT                                  0x0
#define SSPSTAT_address                          0x116
#define SSPSTAT_position                         0x0
#define SSPSTAT_size                             0x8
#define SSPSTAT_value_mask                       0xFF
#define SSPSTAT_clear_mask                       0x0

#define BF                                       0x0
#define BF_address                               0x116
#define BF_position                              0x0
#define BF_size                                  0x1
#define BF_value_mask                            0x1
#define BF_clear_mask                            0xFE

#define UA                                       0x1
#define UA_address                               0x116
#define UA_position                              0x1
#define UA_size                                  0x1
#define UA_value_mask                            0x2
#define UA_clear_mask                            0xFD

#define R_nW                                     0x2
#define R_nW_address                             0x116
#define R_nW_position                            0x2
#define R_nW_size                                0x1
#define R_nW_value_mask                          0x4
#define R_nW_clear_mask                          0xFB

#define S                                        0x3
#define S_address                                0x116
#define S_position                               0x3
#define S_size                                   0x1
#define S_value_mask                             0x8
#define S_clear_mask                             0xF7

#define P                                        0x4
#define P_address                                0x116
#define P_position                               0x4
#define P_size                                   0x1
#define P_value_mask                             0x10
#define P_clear_mask                             0xEF

#define D_nA                                     0x5
#define D_nA_address                             0x116
#define D_nA_position                            0x5
#define D_nA_size                                0x1
#define D_nA_value_mask                          0x20
#define D_nA_clear_mask                          0xDF

#define CKE                                      0x6
#define CKE_address                              0x116
#define CKE_position                             0x6
#define CKE_size                                 0x1
#define CKE_value_mask                           0x40
#define CKE_clear_mask                           0xBF

#define SMP                                      0x7
#define SMP_address                              0x116
#define SMP_position                             0x7
#define SMP_size                                 0x1
#define SMP_value_mask                           0x80
#define SMP_clear_mask                           0x7F


/*------------------------------#
| SSPADD2                 0x117 |
#-------------------------------#
| ADD2                          |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define SSPADD2                                  0x0
#define SSPADD2_address                          0x117
#define SSPADD2_position                         0x0
#define SSPADD2_size                             0x8
#define SSPADD2_value_mask                       0xFF
#define SSPADD2_clear_mask                       0x0

#define ADD2                                     0x0
#define ADD2_address                             0x117
#define ADD2_position                            0x0
#define ADD2_size                                0x8
#define ADD2_value_mask                          0xFF
#define ADD2_clear_mask                          0x0


/*------------------------------#
| SSPMSK2                 0x118 |
#-------------------------------#
| MSK2                          |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define SSPMSK2                                  0x0
#define SSPMSK2_address                          0x118
#define SSPMSK2_position                         0x0
#define SSPMSK2_size                             0x8
#define SSPMSK2_value_mask                       0xFF
#define SSPMSK2_clear_mask                       0x0

#define MSK2                                     0x0
#define MSK2_address                             0x118
#define MSK2_position                            0x0
#define MSK2_size                                0x8
#define MSK2_value_mask                          0xFF
#define MSK2_clear_mask                          0x0


/*--------------------------------------------------------------#
| IOCA                                                    0x185 |
#---------------------------------------------------------------#
| IOCA7 | IOCA6 | IOCA5 | IOCA4 | IOCA3 | IOCA2 | IOCA1 | IOCA0 |
#---------------------------------------------------------------#
| 7     | 6     | 5     | 4     | 3     | 2     | 1     | 0     |
#--------------------------------------------------------------*/

#define IOCA                                     0x0
#define IOCA_address                             0x185
#define IOCA_position                            0x0
#define IOCA_size                                0x8
#define IOCA_value_mask                          0xFF
#define IOCA_clear_mask                          0x0

#define IOCA0                                    0x0
#define IOCA0_address                            0x185
#define IOCA0_position                           0x0
#define IOCA0_size                               0x1
#define IOCA0_value_mask                         0x1
#define IOCA0_clear_mask                         0xFE

#define IOCA1                                    0x1
#define IOCA1_address                            0x185
#define IOCA1_position                           0x1
#define IOCA1_size                               0x1
#define IOCA1_value_mask                         0x2
#define IOCA1_clear_mask                         0xFD

#define IOCA2                                    0x2
#define IOCA2_address                            0x185
#define IOCA2_position                           0x2
#define IOCA2_size                               0x1
#define IOCA2_value_mask                         0x4
#define IOCA2_clear_mask                         0xFB

#define IOCA3                                    0x3
#define IOCA3_address                            0x185
#define IOCA3_position                           0x3
#define IOCA3_size                               0x1
#define IOCA3_value_mask                         0x8
#define IOCA3_clear_mask                         0xF7

#define IOCA4                                    0x4
#define IOCA4_address                            0x185
#define IOCA4_position                           0x4
#define IOCA4_size                               0x1
#define IOCA4_value_mask                         0x10
#define IOCA4_clear_mask                         0xEF

#define IOCA5                                    0x5
#define IOCA5_address                            0x185
#define IOCA5_position                           0x5
#define IOCA5_size                               0x1
#define IOCA5_value_mask                         0x20
#define IOCA5_clear_mask                         0xDF

#define IOCA6                                    0x6
#define IOCA6_address                            0x185
#define IOCA6_position                           0x6
#define IOCA6_size                               0x1
#define IOCA6_value_mask                         0x40
#define IOCA6_clear_mask                         0xBF

#define IOCA7                                    0x7
#define IOCA7_address                            0x185
#define IOCA7_position                           0x7
#define IOCA7_size                               0x1
#define IOCA7_value_mask                         0x80
#define IOCA7_clear_mask                         0x7F


/*------------------------------------------#
| IOCB                                0x186 |
#-------------------------------------------#
| - | - | - | - | - | IOCB2 | IOCB1 | IOCB0 |
#-------------------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2     | 1     | 0     |
#------------------------------------------*/

#define IOCB                                     0x0
#define IOCB_address                             0x186
#define IOCB_position                            0x0
#define IOCB_size                                0x8
#define IOCB_value_mask                          0xFF
#define IOCB_clear_mask                          0x0

#define IOCB0                                    0x0
#define IOCB0_address                            0x186
#define IOCB0_position                           0x0
#define IOCB0_size                               0x1
#define IOCB0_value_mask                         0x1
#define IOCB0_clear_mask                         0xFE

#define IOCB1                                    0x1
#define IOCB1_address                            0x186
#define IOCB1_position                           0x1
#define IOCB1_size                               0x1
#define IOCB1_value_mask                         0x2
#define IOCB1_clear_mask                         0xFD

#define IOCB2                                    0x2
#define IOCB2_address                            0x186
#define IOCB2_position                           0x2
#define IOCB2_size                               0x1
#define IOCB2_value_mask                         0x4
#define IOCB2_clear_mask                         0xFB


/*----------------------------------------------#
| ANSELA                                  0x187 |
#-----------------------------------------------#
| - | - | - | - | ANSA3 | ANSA2 | ANSA1 | ANSA0 |
#-----------------------------------------------#
| 7 | 6 | 5 | 4 | 3     | 2     | 1     | 0     |
#----------------------------------------------*/

#define ANSELA                                   0x0
#define ANSELA_address                           0x187
#define ANSELA_position                          0x0
#define ANSELA_size                              0x8
#define ANSELA_value_mask                        0xFF
#define ANSELA_clear_mask                        0x0

#define ANSA0                                    0x0
#define ANSA0_address                            0x187
#define ANSA0_position                           0x0
#define ANSA0_size                               0x1
#define ANSA0_value_mask                         0x1
#define ANSA0_clear_mask                         0xFE

#define ANSA1                                    0x1
#define ANSA1_address                            0x187
#define ANSA1_position                           0x1
#define ANSA1_size                               0x1
#define ANSA1_value_mask                         0x2
#define ANSA1_clear_mask                         0xFD

#define ANSA2                                    0x2
#define ANSA2_address                            0x187
#define ANSA2_position                           0x2
#define ANSA2_size                               0x1
#define ANSA2_value_mask                         0x4
#define ANSA2_clear_mask                         0xFB

#define ANSA3                                    0x3
#define ANSA3_address                            0x187
#define ANSA3_position                           0x3
#define ANSA3_size                               0x1
#define ANSA3_value_mask                         0x8
#define ANSA3_clear_mask                         0xF7


/*----------------------------------------------#
| ANSELB                                  0x188 |
#-----------------------------------------------#
| - | - | ANSB5 | ANSB4 | - | ANSB2 | ANSB1 | - |
#-----------------------------------------------#
| 7 | 6 | 5     | 4     | 3 | 2     | 1     | 0 |
#----------------------------------------------*/

#define ANSELB                                   0x0
#define ANSELB_address                           0x188
#define ANSELB_position                          0x0
#define ANSELB_size                              0x8
#define ANSELB_value_mask                        0xFF
#define ANSELB_clear_mask                        0x0

#define ANSB1                                    0x1
#define ANSB1_address                            0x188
#define ANSB1_position                           0x1
#define ANSB1_size                               0x1
#define ANSB1_value_mask                         0x2
#define ANSB1_clear_mask                         0xFD

#define ANSB2                                    0x2
#define ANSB2_address                            0x188
#define ANSB2_position                           0x2
#define ANSB2_size                               0x1
#define ANSB2_value_mask                         0x4
#define ANSB2_clear_mask                         0xFB

#define ANSB4                                    0x4
#define ANSB4_address                            0x188
#define ANSB4_position                           0x4
#define ANSB4_size                               0x1
#define ANSB4_value_mask                         0x10
#define ANSB4_clear_mask                         0xEF

#define ANSB5                                    0x5
#define ANSB5_address                            0x188
#define ANSB5_position                           0x5
#define ANSB5_size                               0x1
#define ANSB5_value_mask                         0x20
#define ANSB5_clear_mask                         0xDF


/*----------------------------------------#
| PMCON1                            0x190 |
#-----------------------------------------#
| - | CALSEL | - | - | - | WREN | WR | RD |
#-----------------------------------------#
| 7 | 6      | 5 | 4 | 3 | 2    | 1  | 0  |
#----------------------------------------*/

#define PMCON1                                   0x0
#define PMCON1_address                           0x190
#define PMCON1_position                          0x0
#define PMCON1_size                              0x8
#define PMCON1_value_mask                        0xFF
#define PMCON1_clear_mask                        0x0

#define RD                                       0x0
#define RD_address                               0x190
#define RD_position                              0x0
#define RD_size                                  0x1
#define RD_value_mask                            0x1
#define RD_clear_mask                            0xFE

#define WR                                       0x1
#define WR_address                               0x190
#define WR_position                              0x1
#define WR_size                                  0x1
#define WR_value_mask                            0x2
#define WR_clear_mask                            0xFD

#define WREN                                     0x2
#define WREN_address                             0x190
#define WREN_position                            0x2
#define WREN_size                                0x1
#define WREN_value_mask                          0x4
#define WREN_clear_mask                          0xFB

#define CALSEL                                   0x6
#define CALSEL_address                           0x190
#define CALSEL_position                          0x6
#define CALSEL_size                              0x1
#define CALSEL_value_mask                        0x40
#define CALSEL_clear_mask                        0xBF


/*------------------------------#
| PMCON2                  0x191 |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define PMCON2                                   0x0
#define PMCON2_address                           0x191
#define PMCON2_position                          0x0
#define PMCON2_size                              0x8
#define PMCON2_value_mask                        0xFF
#define PMCON2_clear_mask                        0x0


/*------------------------------------------------------------------------------#
| PMADRL                                                                  0x192 |
#-------------------------------------------------------------------------------#
| PMADRL7 | PMADRL6 | PMADRL5 | PMADRL4 | PMADRL3 | PMADRL2 | PMADRL1 | PMADRL0 |
#-------------------------------------------------------------------------------#
| 7       | 6       | 5       | 4       | 3       | 2       | 1       | 0       |
#------------------------------------------------------------------------------*/

#define PMADRL                                   0x0
#define PMADRL_address                           0x192
#define PMADRL_position                          0x0
#define PMADRL_size                              0x8
#define PMADRL_value_mask                        0xFF
#define PMADRL_clear_mask                        0x0

#define PMADRL0                                  0x0
#define PMADRL0_address                          0x192
#define PMADRL0_position                         0x0
#define PMADRL0_size                             0x1
#define PMADRL0_value_mask                       0x1
#define PMADRL0_clear_mask                       0xFE

#define PMADRL1                                  0x1
#define PMADRL1_address                          0x192
#define PMADRL1_position                         0x1
#define PMADRL1_size                             0x1
#define PMADRL1_value_mask                       0x2
#define PMADRL1_clear_mask                       0xFD

#define PMADRL2                                  0x2
#define PMADRL2_address                          0x192
#define PMADRL2_position                         0x2
#define PMADRL2_size                             0x1
#define PMADRL2_value_mask                       0x4
#define PMADRL2_clear_mask                       0xFB

#define PMADRL3                                  0x3
#define PMADRL3_address                          0x192
#define PMADRL3_position                         0x3
#define PMADRL3_size                             0x1
#define PMADRL3_value_mask                       0x8
#define PMADRL3_clear_mask                       0xF7

#define PMADRL4                                  0x4
#define PMADRL4_address                          0x192
#define PMADRL4_position                         0x4
#define PMADRL4_size                             0x1
#define PMADRL4_value_mask                       0x10
#define PMADRL4_clear_mask                       0xEF

#define PMADRL5                                  0x5
#define PMADRL5_address                          0x192
#define PMADRL5_position                         0x5
#define PMADRL5_size                             0x1
#define PMADRL5_value_mask                       0x20
#define PMADRL5_clear_mask                       0xDF

#define PMADRL6                                  0x6
#define PMADRL6_address                          0x192
#define PMADRL6_position                         0x6
#define PMADRL6_size                             0x1
#define PMADRL6_value_mask                       0x40
#define PMADRL6_clear_mask                       0xBF

#define PMADRL7                                  0x7
#define PMADRL7_address                          0x192
#define PMADRL7_position                         0x7
#define PMADRL7_size                             0x1
#define PMADRL7_value_mask                       0x80
#define PMADRL7_clear_mask                       0x7F


/*------------------------------------------------------#
| PMADRH                                          0x193 |
#-------------------------------------------------------#
| - | - | - | - | PMADRH3 | PMADRH2 | PMADRH1 | PMADRH0 |
#-------------------------------------------------------#
| 7 | 6 | 5 | 4 | 3       | 2       | 1       | 0       |
#------------------------------------------------------*/

#define PMADRH                                   0x0
#define PMADRH_address                           0x193
#define PMADRH_position                          0x0
#define PMADRH_size                              0x8
#define PMADRH_value_mask                        0xFF
#define PMADRH_clear_mask                        0x0

#define PMADRH0                                  0x0
#define PMADRH0_address                          0x193
#define PMADRH0_position                         0x0
#define PMADRH0_size                             0x1
#define PMADRH0_value_mask                       0x1
#define PMADRH0_clear_mask                       0xFE

#define PMADRH1                                  0x1
#define PMADRH1_address                          0x193
#define PMADRH1_position                         0x1
#define PMADRH1_size                             0x1
#define PMADRH1_value_mask                       0x2
#define PMADRH1_clear_mask                       0xFD

#define PMADRH2                                  0x2
#define PMADRH2_address                          0x193
#define PMADRH2_position                         0x2
#define PMADRH2_size                             0x1
#define PMADRH2_value_mask                       0x4
#define PMADRH2_clear_mask                       0xFB

#define PMADRH3                                  0x3
#define PMADRH3_address                          0x193
#define PMADRH3_position                         0x3
#define PMADRH3_size                             0x1
#define PMADRH3_value_mask                       0x8
#define PMADRH3_clear_mask                       0xF7


/*------------------------------------------------------------------------------#
| PMDATL                                                                  0x194 |
#-------------------------------------------------------------------------------#
| PMDATL7 | PMDATL6 | PMDATL5 | PMDATL4 | PMDATL3 | PMDATL2 | PMDATL1 | PMDATL0 |
#-------------------------------------------------------------------------------#
| 7       | 6       | 5       | 4       | 3       | 2       | 1       | 0       |
#------------------------------------------------------------------------------*/

#define PMDATL                                   0x0
#define PMDATL_address                           0x194
#define PMDATL_position                          0x0
#define PMDATL_size                              0x8
#define PMDATL_value_mask                        0xFF
#define PMDATL_clear_mask                        0x0

#define PMDATL0                                  0x0
#define PMDATL0_address                          0x194
#define PMDATL0_position                         0x0
#define PMDATL0_size                             0x1
#define PMDATL0_value_mask                       0x1
#define PMDATL0_clear_mask                       0xFE

#define PMDATL1                                  0x1
#define PMDATL1_address                          0x194
#define PMDATL1_position                         0x1
#define PMDATL1_size                             0x1
#define PMDATL1_value_mask                       0x2
#define PMDATL1_clear_mask                       0xFD

#define PMDATL2                                  0x2
#define PMDATL2_address                          0x194
#define PMDATL2_position                         0x2
#define PMDATL2_size                             0x1
#define PMDATL2_value_mask                       0x4
#define PMDATL2_clear_mask                       0xFB

#define PMDATL3                                  0x3
#define PMDATL3_address                          0x194
#define PMDATL3_position                         0x3
#define PMDATL3_size                             0x1
#define PMDATL3_value_mask                       0x8
#define PMDATL3_clear_mask                       0xF7

#define PMDATL4                                  0x4
#define PMDATL4_address                          0x194
#define PMDATL4_position                         0x4
#define PMDATL4_size                             0x1
#define PMDATL4_value_mask                       0x10
#define PMDATL4_clear_mask                       0xEF

#define PMDATL5                                  0x5
#define PMDATL5_address                          0x194
#define PMDATL5_position                         0x5
#define PMDATL5_size                             0x1
#define PMDATL5_value_mask                       0x20
#define PMDATL5_clear_mask                       0xDF

#define PMDATL6                                  0x6
#define PMDATL6_address                          0x194
#define PMDATL6_position                         0x6
#define PMDATL6_size                             0x1
#define PMDATL6_value_mask                       0x40
#define PMDATL6_clear_mask                       0xBF

#define PMDATL7                                  0x7
#define PMDATL7_address                          0x194
#define PMDATL7_position                         0x7
#define PMDATL7_size                             0x1
#define PMDATL7_value_mask                       0x80
#define PMDATL7_clear_mask                       0x7F


/*------------------------------------------------------------------#
| PMDATH                                                      0x195 |
#-------------------------------------------------------------------#
| - | - | PMDATH5 | PMDATH4 | PMDATH3 | PMDATH2 | PMDATH1 | PMDATH0 |
#-------------------------------------------------------------------#
| 7 | 6 | 5       | 4       | 3       | 2       | 1       | 0       |
#------------------------------------------------------------------*/

#define PMDATH                                   0x0
#define PMDATH_address                           0x195
#define PMDATH_position                          0x0
#define PMDATH_size                              0x8
#define PMDATH_value_mask                        0xFF
#define PMDATH_clear_mask                        0x0

#define PMDATH0                                  0x0
#define PMDATH0_address                          0x195
#define PMDATH0_position                         0x0
#define PMDATH0_size                             0x1
#define PMDATH0_value_mask                       0x1
#define PMDATH0_clear_mask                       0xFE

#define PMDATH1                                  0x1
#define PMDATH1_address                          0x195
#define PMDATH1_position                         0x1
#define PMDATH1_size                             0x1
#define PMDATH1_value_mask                       0x2
#define PMDATH1_clear_mask                       0xFD

#define PMDATH2                                  0x2
#define PMDATH2_address                          0x195
#define PMDATH2_position                         0x2
#define PMDATH2_size                             0x1
#define PMDATH2_value_mask                       0x4
#define PMDATH2_clear_mask                       0xFB

#define PMDATH3                                  0x3
#define PMDATH3_address                          0x195
#define PMDATH3_position                         0x3
#define PMDATH3_size                             0x1
#define PMDATH3_value_mask                       0x8
#define PMDATH3_clear_mask                       0xF7

#define PMDATH4                                  0x4
#define PMDATH4_address                          0x195
#define PMDATH4_position                         0x4
#define PMDATH4_size                             0x1
#define PMDATH4_value_mask                       0x10
#define PMDATH4_clear_mask                       0xEF

#define PMDATH5                                  0x5
#define PMDATH5_address                          0x195
#define PMDATH5_position                         0x5
#define PMDATH5_size                             0x1
#define PMDATH5_value_mask                       0x20
#define PMDATH5_clear_mask                       0xDF


/*-----------------------------------------------------------------#
| OSCCAL                                                     0x198 |
#------------------------------------------------------------------#
| - | FCALT6 | FCALT5 | FCALT4 | FCALT3 | FCALT2 | FCALT1 | FCALT0 |
#------------------------------------------------------------------#
| 7 | 6      | 5      | 4      | 3      | 2      | 1      | 0      |
#-----------------------------------------------------------------*/

#define OSCCAL                                   0x0
#define OSCCAL_address                           0x198
#define OSCCAL_position                          0x0
#define OSCCAL_size                              0x8
#define OSCCAL_value_mask                        0xFF
#define OSCCAL_clear_mask                        0x0

#define FCALT0                                   0x0
#define FCALT0_address                           0x198
#define FCALT0_position                          0x0
#define FCALT0_size                              0x1
#define FCALT0_value_mask                        0x1
#define FCALT0_clear_mask                        0xFE

#define FCALT1                                   0x1
#define FCALT1_address                           0x198
#define FCALT1_position                          0x1
#define FCALT1_size                              0x1
#define FCALT1_value_mask                        0x2
#define FCALT1_clear_mask                        0xFD

#define FCALT2                                   0x2
#define FCALT2_address                           0x198
#define FCALT2_position                          0x2
#define FCALT2_size                              0x1
#define FCALT2_value_mask                        0x4
#define FCALT2_clear_mask                        0xFB

#define FCALT3                                   0x3
#define FCALT3_address                           0x198
#define FCALT3_position                          0x3
#define FCALT3_size                              0x1
#define FCALT3_value_mask                        0x8
#define FCALT3_clear_mask                        0xF7

#define FCALT4                                   0x4
#define FCALT4_address                           0x198
#define FCALT4_position                          0x4
#define FCALT4_size                              0x1
#define FCALT4_value_mask                        0x10
#define FCALT4_clear_mask                        0xEF

#define FCALT5                                   0x5
#define FCALT5_address                           0x198
#define FCALT5_position                          0x5
#define FCALT5_size                              0x1
#define FCALT5_value_mask                        0x20
#define FCALT5_clear_mask                        0xDF

#define FCALT6                                   0x6
#define FCALT6_address                           0x198
#define FCALT6_position                          0x6
#define FCALT6_size                              0x1
#define FCALT6_value_mask                        0x40
#define FCALT6_clear_mask                        0xBF


/*----------------------------------------------#
| DOVCAL                                  0x199 |
#-----------------------------------------------#
| - | - | - | - | DOVT3 | DOVT2 | DOVT1 | DOVT0 |
#-----------------------------------------------#
| 7 | 6 | 5 | 4 | 3     | 2     | 1     | 0     |
#----------------------------------------------*/

#define DOVCAL                                   0x0
#define DOVCAL_address                           0x199
#define DOVCAL_position                          0x0
#define DOVCAL_size                              0x8
#define DOVCAL_value_mask                        0xFF
#define DOVCAL_clear_mask                        0x0

#define DOVT0                                    0x0
#define DOVT0_address                            0x199
#define DOVT0_position                           0x0
#define DOVT0_size                               0x1
#define DOVT0_value_mask                         0x1
#define DOVT0_clear_mask                         0xFE

#define DOVT1                                    0x1
#define DOVT1_address                            0x199
#define DOVT1_position                           0x1
#define DOVT1_size                               0x1
#define DOVT1_value_mask                         0x2
#define DOVT1_clear_mask                         0xFD

#define DOVT2                                    0x2
#define DOVT2_address                            0x199
#define DOVT2_position                           0x2
#define DOVT2_size                               0x1
#define DOVT2_value_mask                         0x4
#define DOVT2_clear_mask                         0xFB

#define DOVT3                                    0x3
#define DOVT3_address                            0x199
#define DOVT3_position                           0x3
#define DOVT3_size                               0x1
#define DOVT3_value_mask                         0x8
#define DOVT3_clear_mask                         0xF7


/*------------------------------------------#
| TTACAL                              0x19A |
#-------------------------------------------#
| - | - | - | - | TTA3 | TTA2 | TTA1 | TTA0 |
#-------------------------------------------#
| 7 | 6 | 5 | 4 | 3    | 2    | 1    | 0    |
#------------------------------------------*/

#define TTACAL                                   0x0
#define TTACAL_address                           0x19A
#define TTACAL_position                          0x0
#define TTACAL_size                              0x8
#define TTACAL_value_mask                        0xFF
#define TTACAL_clear_mask                        0x0

#define TTA0                                     0x0
#define TTA0_address                             0x19A
#define TTA0_position                            0x0
#define TTA0_size                                0x1
#define TTA0_value_mask                          0x1
#define TTA0_clear_mask                          0xFE

#define TTA1                                     0x1
#define TTA1_address                             0x19A
#define TTA1_position                            0x1
#define TTA1_size                                0x1
#define TTA1_value_mask                          0x2
#define TTA1_clear_mask                          0xFD

#define TTA2                                     0x2
#define TTA2_address                             0x19A
#define TTA2_position                            0x2
#define TTA2_size                                0x1
#define TTA2_value_mask                          0x4
#define TTA2_clear_mask                          0xFB

#define TTA3                                     0x3
#define TTA3_address                             0x19A
#define TTA3_position                            0x3
#define TTA3_size                                0x1
#define TTA3_value_mask                          0x8
#define TTA3_clear_mask                          0xF7


/*----------------------------------------------#
| BGRCAL                                  0x19B |
#-----------------------------------------------#
| - | - | - | - | BGRT3 | BGRT2 | BGRT1 | BGRT0 |
#-----------------------------------------------#
| 7 | 6 | 5 | 4 | 3     | 2     | 1     | 0     |
#----------------------------------------------*/

#define BGRCAL                                   0x0
#define BGRCAL_address                           0x19B
#define BGRCAL_position                          0x0
#define BGRCAL_size                              0x8
#define BGRCAL_value_mask                        0xFF
#define BGRCAL_clear_mask                        0x0

#define BGRT0                                    0x0
#define BGRT0_address                            0x19B
#define BGRT0_position                           0x0
#define BGRT0_size                               0x1
#define BGRT0_value_mask                         0x1
#define BGRT0_clear_mask                         0xFE

#define BGRT1                                    0x1
#define BGRT1_address                            0x19B
#define BGRT1_position                           0x1
#define BGRT1_size                               0x1
#define BGRT1_value_mask                         0x2
#define BGRT1_clear_mask                         0xFD

#define BGRT2                                    0x2
#define BGRT2_address                            0x19B
#define BGRT2_position                           0x2
#define BGRT2_size                               0x1
#define BGRT2_value_mask                         0x4
#define BGRT2_clear_mask                         0xFB

#define BGRT3                                    0x3
#define BGRT3_address                            0x19B
#define BGRT3_position                           0x3
#define BGRT3_size                               0x1
#define BGRT3_value_mask                         0x8
#define BGRT3_clear_mask                         0xF7


/*----------------------------------------------#
| VROCAL                                  0x19C |
#-----------------------------------------------#
| - | - | - | - | VROT3 | VROT2 | VROT1 | VROT0 |
#-----------------------------------------------#
| 7 | 6 | 5 | 4 | 3     | 2     | 1     | 0     |
#----------------------------------------------*/

#define VROCAL                                   0x0
#define VROCAL_address                           0x19C
#define VROCAL_position                          0x0
#define VROCAL_size                              0x8
#define VROCAL_value_mask                        0xFF
#define VROCAL_clear_mask                        0x0

#define VROT0                                    0x0
#define VROT0_address                            0x19C
#define VROT0_position                           0x0
#define VROT0_size                               0x1
#define VROT0_value_mask                         0x1
#define VROT0_clear_mask                         0xFE

#define VROT1                                    0x1
#define VROT1_address                            0x19C
#define VROT1_position                           0x1
#define VROT1_size                               0x1
#define VROT1_value_mask                         0x2
#define VROT1_clear_mask                         0xFD

#define VROT2                                    0x2
#define VROT2_address                            0x19C
#define VROT2_position                           0x2
#define VROT2_size                               0x1
#define VROT2_value_mask                         0x4
#define VROT2_clear_mask                         0xFB

#define VROT3                                    0x3
#define VROT3_address                            0x19C
#define VROT3_position                           0x3
#define VROT3_size                               0x1
#define VROT3_value_mask                         0x8
#define VROT3_clear_mask                         0xF7


/*----------------------------------------------#
| ZROCAL                                  0x19D |
#-----------------------------------------------#
| - | - | - | - | ZROT3 | ZROT2 | ZROT1 | ZROT0 |
#-----------------------------------------------#
| 7 | 6 | 5 | 4 | 3     | 2     | 1     | 0     |
#----------------------------------------------*/

#define ZROCAL                                   0x0
#define ZROCAL_address                           0x19D
#define ZROCAL_position                          0x0
#define ZROCAL_size                              0x8
#define ZROCAL_value_mask                        0xFF
#define ZROCAL_clear_mask                        0x0

#define ZROT0                                    0x0
#define ZROT0_address                            0x19D
#define ZROT0_position                           0x0
#define ZROT0_size                               0x1
#define ZROT0_value_mask                         0x1
#define ZROT0_clear_mask                         0xFE

#define ZROT1                                    0x1
#define ZROT1_address                            0x19D
#define ZROT1_position                           0x1
#define ZROT1_size                               0x1
#define ZROT1_value_mask                         0x2
#define ZROT1_clear_mask                         0xFD

#define ZROT2                                    0x2
#define ZROT2_address                            0x19D
#define ZROT2_position                           0x2
#define ZROT2_size                               0x1
#define ZROT2_value_mask                         0x4
#define ZROT2_clear_mask                         0xFB

#define ZROT3                                    0x3
#define ZROT3_address                            0x19D
#define ZROT3_position                           0x3
#define ZROT3_size                               0x1
#define ZROT3_value_mask                         0x8
#define ZROT3_clear_mask                         0xF7


/*------------------------------------------------#
| ATSTCON                                   0x19F |
#-------------------------------------------------#
| - | - | - | - | HIDIS | LODIS | BNCHEN | DRVDIS |
#-------------------------------------------------#
| 7 | 6 | 5 | 4 | 3     | 2     | 1      | 0      |
#------------------------------------------------*/

#define ATSTCON                                  0x0
#define ATSTCON_address                          0x19F
#define ATSTCON_position                         0x0
#define ATSTCON_size                             0x8
#define ATSTCON_value_mask                       0xFF
#define ATSTCON_clear_mask                       0x0

#define DRVDIS                                   0x0
#define DRVDIS_address                           0x19F
#define DRVDIS_position                          0x0
#define DRVDIS_size                              0x1
#define DRVDIS_value_mask                        0x1
#define DRVDIS_clear_mask                        0xFE

#define BNCHEN                                   0x1
#define BNCHEN_address                           0x19F
#define BNCHEN_position                          0x1
#define BNCHEN_size                              0x1
#define BNCHEN_value_mask                        0x2
#define BNCHEN_clear_mask                        0xFD

#define LODIS                                    0x2
#define LODIS_address                            0x19F
#define LODIS_position                           0x2
#define LODIS_size                               0x1
#define LODIS_value_mask                         0x4
#define LODIS_clear_mask                         0xFB

#define HIDIS                                    0x3
#define HIDIS_address                            0x19F
#define HIDIS_position                           0x3
#define HIDIS_size                               0x1
#define HIDIS_value_mask                         0x8
#define HIDIS_clear_mask                         0xF7

#endif // _MCP19110_H_
