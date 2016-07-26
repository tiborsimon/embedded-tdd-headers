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

#ifndef _MCP19115_H_
#define _MCP19115_H_


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

#define RB4                                      0x4
#define RB4_address                              0x006
#define RB4_position                             0x4
#define RB4_size                                 0x1
#define RB4_value_mask                           0x10
#define RB4_clear_mask                           0xEF

#define GPB4                                     0x4
#define GPB4_address                             0x006
#define GPB4_position                            0x4
#define GPB4_size                                0x1
#define GPB4_value_mask                          0x10
#define GPB4_clear_mask                          0xEF

#define RB5                                      0x5
#define RB5_address                              0x006
#define RB5_position                             0x5
#define RB5_size                                 0x1
#define RB5_value_mask                           0x20
#define RB5_clear_mask                           0xDF

#define GPB5                                     0x5
#define GPB5_address                             0x006
#define GPB5_position                            0x5
#define GPB5_size                                0x1
#define GPB5_value_mask                          0x20
#define GPB5_clear_mask                          0xDF

#define RB6                                      0x6
#define RB6_address                              0x006
#define RB6_position                             0x6
#define RB6_size                                 0x1
#define RB6_value_mask                           0x40
#define RB6_clear_mask                           0xBF

#define GPB6                                     0x6
#define GPB6_address                             0x006
#define GPB6_position                            0x6
#define GPB6_size                                0x1
#define GPB6_value_mask                          0x40
#define GPB6_clear_mask                          0xBF

#define RB7                                      0x7
#define RB7_address                              0x006
#define RB7_position                             0x7
#define RB7_size                                 0x1
#define RB7_value_mask                           0x80
#define RB7_clear_mask                           0x7F

#define GPB7                                     0x7
#define GPB7_address                             0x006
#define GPB7_position                            0x7
#define GPB7_size                                0x1
#define GPB7_value_mask                          0x80
#define GPB7_clear_mask                          0x7F


/*-----------------------------------------------------------#
| PIR1                                                   0x7 |
#------------------------------------------------------------#
| - | ADIF | BCLIF | SSPIF | CC2IF | CC1IF | TMR2IF | TMR1IF |
#------------------------------------------------------------#
| 7 | 6    | 5     | 4     | 3     | 2     | 1      | 0      |
#-----------------------------------------------------------*/

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

#define CC1IF                                    0x2
#define CC1IF_address                            0x007
#define CC1IF_position                           0x2
#define CC1IF_size                               0x1
#define CC1IF_value_mask                         0x4
#define CC1IF_clear_mask                         0xFB

#define CC2IF                                    0x3
#define CC2IF_address                            0x007
#define CC2IF_position                           0x3
#define CC2IF_size                               0x1
#define CC2IF_value_mask                         0x8
#define CC2IF_clear_mask                         0xF7

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


/*-------------------------------------------------------#
| PIR2                                               0x8 |
#--------------------------------------------------------#
| CDSIF | - | - | OTIF | OVIF | DRUVIF | OVLOIF | UVLOIF |
#--------------------------------------------------------#
| 7     | 6 | 5 | 4    | 3    | 2      | 1      | 0      |
#-------------------------------------------------------*/

#define PIR2                                     0x0
#define PIR2_address                             0x008
#define PIR2_position                            0x0
#define PIR2_size                                0x8
#define PIR2_value_mask                          0xFF
#define PIR2_clear_mask                          0x0

#define UVLOIF                                   0x0
#define UVLOIF_address                           0x008
#define UVLOIF_position                          0x0
#define UVLOIF_size                              0x1
#define UVLOIF_value_mask                        0x1
#define UVLOIF_clear_mask                        0xFE

#define OVLOIF                                   0x1
#define OVLOIF_address                           0x008
#define OVLOIF_position                          0x1
#define OVLOIF_size                              0x1
#define OVLOIF_value_mask                        0x2
#define OVLOIF_clear_mask                        0xFD

#define DRUVIF                                   0x2
#define DRUVIF_address                           0x008
#define DRUVIF_position                          0x2
#define DRUVIF_size                              0x1
#define DRUVIF_value_mask                        0x4
#define DRUVIF_clear_mask                        0xFB

#define OVIF                                     0x3
#define OVIF_address                             0x008
#define OVIF_position                            0x3
#define OVIF_size                                0x1
#define OVIF_value_mask                          0x8
#define OVIF_clear_mask                          0xF7

#define OTIF                                     0x4
#define OTIF_address                             0x008
#define OTIF_position                            0x4
#define OTIF_size                                0x1
#define OTIF_value_mask                          0x10
#define OTIF_clear_mask                          0xEF

#define CDSIF                                    0x7
#define CDSIF_address                            0x008
#define CDSIF_position                           0x7
#define CDSIF_size                               0x1
#define CDSIF_value_mask                         0x80
#define CDSIF_clear_mask                         0x7F


/*------------------------------------#
| PCON                            0x9 |
#-------------------------------------#
| - | - | - | - | - | - | nPOR | nBOR |
#-------------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1    | 0    |
#------------------------------------*/

#define PCON                                     0x0
#define PCON_address                             0x009
#define PCON_position                            0x0
#define PCON_size                                0x8
#define PCON_value_mask                          0xFF
#define PCON_clear_mask                          0x0

#define nBOR                                     0x0
#define nBOR_address                             0x009
#define nBOR_position                            0x0
#define nBOR_size                                0x1
#define nBOR_value_mask                          0x1
#define nBOR_clear_mask                          0xFE

#define nPOR                                     0x1
#define nPOR_address                             0x009
#define nPOR_position                            0x1
#define nPOR_size                                0x1
#define nPOR_value_mask                          0x2
#define nPOR_clear_mask                          0xFD


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


/*--------------------------------------------------------------#
| VREFCON                                                  0x19 |
#---------------------------------------------------------------#
| VREF7 | VREF6 | VREF5 | VREF4 | VREF3 | VREF2 | VREF1 | VREF0 |
#---------------------------------------------------------------#
| 7     | 6     | 5     | 4     | 3     | 2     | 1     | 0     |
#--------------------------------------------------------------*/

#define VREFCON                                  0x0
#define VREFCON_address                          0x019
#define VREFCON_position                         0x0
#define VREFCON_size                             0x8
#define VREFCON_value_mask                       0xFF
#define VREFCON_clear_mask                       0x0

#define VREF0                                    0x0
#define VREF0_address                            0x019
#define VREF0_position                           0x0
#define VREF0_size                               0x1
#define VREF0_value_mask                         0x1
#define VREF0_clear_mask                         0xFE

#define VREF1                                    0x1
#define VREF1_address                            0x019
#define VREF1_position                           0x1
#define VREF1_size                               0x1
#define VREF1_value_mask                         0x2
#define VREF1_clear_mask                         0xFD

#define VREF2                                    0x2
#define VREF2_address                            0x019
#define VREF2_position                           0x2
#define VREF2_size                               0x1
#define VREF2_value_mask                         0x4
#define VREF2_clear_mask                         0xFB

#define VREF3                                    0x3
#define VREF3_address                            0x019
#define VREF3_position                           0x3
#define VREF3_size                               0x1
#define VREF3_value_mask                         0x8
#define VREF3_clear_mask                         0xF7

#define VREF4                                    0x4
#define VREF4_address                            0x019
#define VREF4_position                           0x4
#define VREF4_size                               0x1
#define VREF4_value_mask                         0x10
#define VREF4_clear_mask                         0xEF

#define VREF5                                    0x5
#define VREF5_address                            0x019
#define VREF5_position                           0x5
#define VREF5_size                               0x1
#define VREF5_value_mask                         0x20
#define VREF5_clear_mask                         0xDF

#define VREF6                                    0x6
#define VREF6_address                            0x019
#define VREF6_position                           0x6
#define VREF6_size                               0x1
#define VREF6_value_mask                         0x40
#define VREF6_clear_mask                         0xBF

#define VREF7                                    0x7
#define VREF7_address                            0x019
#define VREF7_position                           0x7
#define VREF7_size                               0x1
#define VREF7_value_mask                         0x80
#define VREF7_clear_mask                         0x7F


/*----------------------------------------------------------------------#
| VREF2CON                                                         0x1A |
#-----------------------------------------------------------------------#
| VREF27 | VREF26 | VREF25 | VREF24 | VREF23 | VREF22 | VREF21 | VREF20 |
#-----------------------------------------------------------------------#
| 7      | 6      | 5      | 4      | 3      | 2      | 1      | 0      |
#----------------------------------------------------------------------*/

#define VREF2CON                                 0x0
#define VREF2CON_address                         0x01A
#define VREF2CON_position                        0x0
#define VREF2CON_size                            0x8
#define VREF2CON_value_mask                      0xFF
#define VREF2CON_clear_mask                      0x0

#define VREF20                                   0x0
#define VREF20_address                           0x01A
#define VREF20_position                          0x0
#define VREF20_size                              0x1
#define VREF20_value_mask                        0x1
#define VREF20_clear_mask                        0xFE

#define VREF21                                   0x1
#define VREF21_address                           0x01A
#define VREF21_position                          0x1
#define VREF21_size                              0x1
#define VREF21_value_mask                        0x2
#define VREF21_clear_mask                        0xFD

#define VREF22                                   0x2
#define VREF22_address                           0x01A
#define VREF22_position                          0x2
#define VREF22_size                              0x1
#define VREF22_value_mask                        0x4
#define VREF22_clear_mask                        0xFB

#define VREF23                                   0x3
#define VREF23_address                           0x01A
#define VREF23_position                          0x3
#define VREF23_size                              0x1
#define VREF23_value_mask                        0x8
#define VREF23_clear_mask                        0xF7

#define VREF24                                   0x4
#define VREF24_address                           0x01A
#define VREF24_position                          0x4
#define VREF24_size                              0x1
#define VREF24_value_mask                        0x10
#define VREF24_clear_mask                        0xEF

#define VREF25                                   0x5
#define VREF25_address                           0x01A
#define VREF25_position                          0x5
#define VREF25_size                              0x1
#define VREF25_value_mask                        0x20
#define VREF25_clear_mask                        0xDF

#define VREF26                                   0x6
#define VREF26_address                           0x01A
#define VREF26_position                          0x6
#define VREF26_size                              0x1
#define VREF26_value_mask                        0x40
#define VREF26_clear_mask                        0xBF

#define VREF27                                   0x7
#define VREF27_address                           0x01A
#define VREF27_position                          0x7
#define VREF27_size                              0x1
#define VREF27_value_mask                        0x80
#define VREF27_clear_mask                        0x7F


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


/*-----------------------------------------------------------------#
| TRISGPA                                                     0x85 |
#------------------------------------------------------------------#
| TRISA7 | TRISA6 | TRISA5 | - | TRISA3 | TRISA2 | TRISA1 | TRISA0 |
#------------------------------------------------------------------#
| 7      | 6      | 5      | 4 | 3      | 2      | 1      | 0      |
#-----------------------------------------------------------------*/

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


/*------------------------------------------------------------#
| TRISGPB                                                0x86 |
#-------------------------------------------------------------#
| TRISB7 | TRISB6 | TRISB5 | TRISB4 | - | - | TRISB1 | TRISB0 |
#-------------------------------------------------------------#
| 7      | 6      | 5      | 4      | 3 | 2 | 1      | 0      |
#------------------------------------------------------------*/

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

#define TRISB4                                   0x4
#define TRISB4_address                           0x086
#define TRISB4_position                          0x4
#define TRISB4_size                              0x1
#define TRISB4_value_mask                        0x10
#define TRISB4_clear_mask                        0xEF

#define TRISB5                                   0x5
#define TRISB5_address                           0x086
#define TRISB5_position                          0x5
#define TRISB5_size                              0x1
#define TRISB5_value_mask                        0x20
#define TRISB5_clear_mask                        0xDF

#define TRISB6                                   0x6
#define TRISB6_address                           0x086
#define TRISB6_position                          0x6
#define TRISB6_size                              0x1
#define TRISB6_value_mask                        0x40
#define TRISB6_clear_mask                        0xBF

#define TRISB7                                   0x7
#define TRISB7_address                           0x086
#define TRISB7_position                          0x7
#define TRISB7_size                              0x1
#define TRISB7_value_mask                        0x80
#define TRISB7_clear_mask                        0x7F


/*-----------------------------------------------------------#
| PIE1                                                  0x87 |
#------------------------------------------------------------#
| - | ADIE | BCLIE | SSPIE | CC2IE | CC1IE | TMR2IE | TMR1IE |
#------------------------------------------------------------#
| 7 | 6    | 5     | 4     | 3     | 2     | 1      | 0      |
#-----------------------------------------------------------*/

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

#define CC1IE                                    0x2
#define CC1IE_address                            0x087
#define CC1IE_position                           0x2
#define CC1IE_size                               0x1
#define CC1IE_value_mask                         0x4
#define CC1IE_clear_mask                         0xFB

#define CC2IE                                    0x3
#define CC2IE_address                            0x087
#define CC2IE_position                           0x3
#define CC2IE_size                               0x1
#define CC2IE_value_mask                         0x8
#define CC2IE_clear_mask                         0xF7

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


/*-------------------------------------------------------#
| PIE2                                              0x88 |
#--------------------------------------------------------#
| CDSIE | - | - | OTIE | OVIE | DRUVIE | OVLOIE | UVLOIE |
#--------------------------------------------------------#
| 7     | 6 | 5 | 4    | 3    | 2      | 1      | 0      |
#-------------------------------------------------------*/

#define PIE2                                     0x0
#define PIE2_address                             0x088
#define PIE2_position                            0x0
#define PIE2_size                                0x8
#define PIE2_value_mask                          0xFF
#define PIE2_clear_mask                          0x0

#define UVLOIE                                   0x0
#define UVLOIE_address                           0x088
#define UVLOIE_position                          0x0
#define UVLOIE_size                              0x1
#define UVLOIE_value_mask                        0x1
#define UVLOIE_clear_mask                        0xFE

#define OVLOIE                                   0x1
#define OVLOIE_address                           0x088
#define OVLOIE_position                          0x1
#define OVLOIE_size                              0x1
#define OVLOIE_value_mask                        0x2
#define OVLOIE_clear_mask                        0xFD

#define DRUVIE                                   0x2
#define DRUVIE_address                           0x088
#define DRUVIE_position                          0x2
#define DRUVIE_size                              0x1
#define DRUVIE_value_mask                        0x4
#define DRUVIE_clear_mask                        0xFB

#define OVIE                                     0x3
#define OVIE_address                             0x088
#define OVIE_position                            0x3
#define OVIE_size                                0x1
#define OVIE_value_mask                          0x8
#define OVIE_clear_mask                          0xF7

#define OTIE                                     0x4
#define OTIE_address                             0x088
#define OTIE_position                            0x4
#define OTIE_size                                0x1
#define OTIE_value_mask                          0x10
#define OTIE_clear_mask                          0xEF

#define CDSIE                                    0x7
#define CDSIE_address                            0x088
#define CDSIE_position                           0x7
#define CDSIE_size                               0x1
#define CDSIE_value_mask                         0x80
#define CDSIE_clear_mask                         0x7F


/*------------------------------------------------------#
| VINUVLO                                          0x90 |
#-------------------------------------------------------#
| - | - | UVLO5 | UVLO4 | UVLO3 | UVLO2 | UVLO1 | UVLO0 |
#-------------------------------------------------------#
| 7 | 6 | 5     | 4     | 3     | 2     | 1     | 0     |
#------------------------------------------------------*/

#define VINUVLO                                  0x0
#define VINUVLO_address                          0x090
#define VINUVLO_position                         0x0
#define VINUVLO_size                             0x8
#define VINUVLO_value_mask                       0xFF
#define VINUVLO_clear_mask                       0x0

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


/*------------------------------------------------------#
| VINOVLO                                          0x91 |
#-------------------------------------------------------#
| - | - | OVLO5 | OVLO4 | OVLO3 | OVLO2 | OVLO1 | OVLO0 |
#-------------------------------------------------------#
| 7 | 6 | 5     | 4     | 3     | 2     | 1     | 0     |
#------------------------------------------------------*/

#define VINOVLO                                  0x0
#define VINOVLO_address                          0x091
#define VINOVLO_position                         0x0
#define VINOVLO_size                             0x8
#define VINOVLO_value_mask                       0xFF
#define VINOVLO_clear_mask                       0x0

#define OVLO0                                    0x0
#define OVLO0_address                            0x091
#define OVLO0_position                           0x0
#define OVLO0_size                               0x1
#define OVLO0_value_mask                         0x1
#define OVLO0_clear_mask                         0xFE

#define OVLO1                                    0x1
#define OVLO1_address                            0x091
#define OVLO1_position                           0x1
#define OVLO1_size                               0x1
#define OVLO1_value_mask                         0x2
#define OVLO1_clear_mask                         0xFD

#define OVLO2                                    0x2
#define OVLO2_address                            0x091
#define OVLO2_position                           0x2
#define OVLO2_size                               0x1
#define OVLO2_value_mask                         0x4
#define OVLO2_clear_mask                         0xFB

#define OVLO3                                    0x3
#define OVLO3_address                            0x091
#define OVLO3_position                           0x3
#define OVLO3_size                               0x1
#define OVLO3_value_mask                         0x8
#define OVLO3_clear_mask                         0xF7

#define OVLO4                                    0x4
#define OVLO4_address                            0x091
#define OVLO4_position                           0x4
#define OVLO4_size                               0x1
#define OVLO4_value_mask                         0x10
#define OVLO4_clear_mask                         0xEF

#define OVLO5                                    0x5
#define OVLO5_address                            0x091
#define OVLO5_position                           0x5
#define OVLO5_size                               0x1
#define OVLO5_value_mask                         0x20
#define OVLO5_clear_mask                         0xDF


/*--------------------------------------------------------------------------------#
| VINCON                                                                     0x92 |
#---------------------------------------------------------------------------------#
| UVLOEN | UVLOOUT | UVLOINTP | UVLOINTN | OVLOEN | OVLOOUT | OVLOINTP | OVLOINTN |
#---------------------------------------------------------------------------------#
| 7      | 6       | 5        | 4        | 3      | 2       | 1        | 0        |
#--------------------------------------------------------------------------------*/

#define VINCON                                   0x0
#define VINCON_address                           0x092
#define VINCON_position                          0x0
#define VINCON_size                              0x8
#define VINCON_value_mask                        0xFF
#define VINCON_clear_mask                        0x0

#define OVLOINTN                                 0x0
#define OVLOINTN_address                         0x092
#define OVLOINTN_position                        0x0
#define OVLOINTN_size                            0x1
#define OVLOINTN_value_mask                      0x1
#define OVLOINTN_clear_mask                      0xFE

#define OVLOINTP                                 0x1
#define OVLOINTP_address                         0x092
#define OVLOINTP_position                        0x1
#define OVLOINTP_size                            0x1
#define OVLOINTP_value_mask                      0x2
#define OVLOINTP_clear_mask                      0xFD

#define OVLOOUT                                  0x2
#define OVLOOUT_address                          0x092
#define OVLOOUT_position                         0x2
#define OVLOOUT_size                             0x1
#define OVLOOUT_value_mask                       0x4
#define OVLOOUT_clear_mask                       0xFB

#define OVLOEN                                   0x3
#define OVLOEN_address                           0x092
#define OVLOEN_position                          0x3
#define OVLOEN_size                              0x1
#define OVLOEN_value_mask                        0x8
#define OVLOEN_clear_mask                        0xF7

#define UVLOINTN                                 0x4
#define UVLOINTN_address                         0x092
#define UVLOINTN_position                        0x4
#define UVLOINTN_size                            0x1
#define UVLOINTN_value_mask                      0x10
#define UVLOINTN_clear_mask                      0xEF

#define UVLOINTP                                 0x5
#define UVLOINTP_address                         0x092
#define UVLOINTP_position                        0x5
#define UVLOINTP_size                            0x1
#define UVLOINTP_value_mask                      0x20
#define UVLOINTP_clear_mask                      0xDF

#define UVLOOUT                                  0x6
#define UVLOOUT_address                          0x092
#define UVLOOUT_position                         0x6
#define UVLOOUT_size                             0x1
#define UVLOOUT_value_mask                       0x40
#define UVLOOUT_clear_mask                       0xBF

#define UVLOEN                                   0x7
#define UVLOEN_address                           0x092
#define UVLOEN_position                          0x7
#define UVLOEN_size                              0x1
#define UVLOEN_value_mask                        0x80
#define UVLOEN_clear_mask                        0x7F


/*------------------------------#
| CC1RL                    0x93 |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define CC1RL                                    0x0
#define CC1RL_address                            0x093
#define CC1RL_position                           0x0
#define CC1RL_size                               0x8
#define CC1RL_value_mask                         0xFF
#define CC1RL_clear_mask                         0x0


/*------------------------------#
| CC1RH                    0x94 |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define CC1RH                                    0x0
#define CC1RH_address                            0x094
#define CC1RH_position                           0x0
#define CC1RH_size                               0x8
#define CC1RH_value_mask                         0xFF
#define CC1RH_clear_mask                         0x0


/*------------------------------#
| CC2RL                    0x95 |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define CC2RL                                    0x0
#define CC2RL_address                            0x095
#define CC2RL_position                           0x0
#define CC2RL_size                               0x8
#define CC2RL_value_mask                         0xFF
#define CC2RL_clear_mask                         0x0


/*------------------------------#
| CC2RH                    0x96 |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define CC2RH                                    0x0
#define CC2RH_address                            0x096
#define CC2RH_position                           0x0
#define CC2RH_size                               0x8
#define CC2RH_value_mask                         0xFF
#define CC2RH_clear_mask                         0x0


/*------------------------------#
| CCDCON                   0x97 |
#-------------------------------#
| CC2M          | CC1M          |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define CCDCON                                   0x0
#define CCDCON_address                           0x097
#define CCDCON_position                          0x0
#define CCDCON_size                              0x8
#define CCDCON_value_mask                        0xFF
#define CCDCON_clear_mask                        0x0

#define CC1M                                     0x0
#define CC1M_address                             0x097
#define CC1M_position                            0x0
#define CC1M_size                                0x4
#define CC1M_value_mask                          0xF
#define CC1M_clear_mask                          0xF0

#define CC2M                                     0x4
#define CC2M_address                             0x097
#define CC2M_position                            0x4
#define CC2M_size                                0x4
#define CC2M_value_mask                          0xF0
#define CC2M_clear_mask                          0xF


/*-------------------------------------------------------------------------#
| DESATCON                                                            0x98 |
#--------------------------------------------------------------------------#
| CDSMUX | CDSWDE | CDSBLANK | CDSPOL | CDSOE | CDSOUT | CDSINTP | CDSINTN |
#--------------------------------------------------------------------------#
| 7      | 6      | 5        | 4      | 3     | 2      | 1       | 0       |
#-------------------------------------------------------------------------*/

#define DESATCON                                 0x0
#define DESATCON_address                         0x098
#define DESATCON_position                        0x0
#define DESATCON_size                            0x8
#define DESATCON_value_mask                      0xFF
#define DESATCON_clear_mask                      0x0

#define CDSINTN                                  0x0
#define CDSINTN_address                          0x098
#define CDSINTN_position                         0x0
#define CDSINTN_size                             0x1
#define CDSINTN_value_mask                       0x1
#define CDSINTN_clear_mask                       0xFE

#define CDSINTP                                  0x1
#define CDSINTP_address                          0x098
#define CDSINTP_position                         0x1
#define CDSINTP_size                             0x1
#define CDSINTP_value_mask                       0x2
#define CDSINTP_clear_mask                       0xFD

#define CDSOUT                                   0x2
#define CDSOUT_address                           0x098
#define CDSOUT_position                          0x2
#define CDSOUT_size                              0x1
#define CDSOUT_value_mask                        0x4
#define CDSOUT_clear_mask                        0xFB

#define CDSOE                                    0x3
#define CDSOE_address                            0x098
#define CDSOE_position                           0x3
#define CDSOE_size                               0x1
#define CDSOE_value_mask                         0x8
#define CDSOE_clear_mask                         0xF7

#define CDSPOL                                   0x4
#define CDSPOL_address                           0x098
#define CDSPOL_position                          0x4
#define CDSPOL_size                              0x1
#define CDSPOL_value_mask                        0x10
#define CDSPOL_clear_mask                        0xEF

#define CDSBLANK                                 0x5
#define CDSBLANK_address                         0x098
#define CDSBLANK_position                        0x5
#define CDSBLANK_size                            0x1
#define CDSBLANK_value_mask                      0x20
#define CDSBLANK_clear_mask                      0xDF

#define CDSWDE                                   0x6
#define CDSWDE_address                           0x098
#define CDSWDE_position                          0x6
#define CDSWDE_size                              0x1
#define CDSWDE_value_mask                        0x40
#define CDSWDE_clear_mask                        0xBF

#define CDSMUX                                   0x7
#define CDSMUX_address                           0x098
#define CDSMUX_position                          0x7
#define CDSMUX_size                              0x1
#define CDSMUX_value_mask                        0x80
#define CDSMUX_clear_mask                        0x7F


/*-----------------------------------------------#
| OVCON                                     0x99 |
#------------------------------------------------#
| - | - | - | - | OVEN | OVOUT | OVINTP | OVINTN |
#------------------------------------------------#
| 7 | 6 | 5 | 4 | 3    | 2     | 1      | 0      |
#-----------------------------------------------*/

#define OVCON                                    0x0
#define OVCON_address                            0x099
#define OVCON_position                           0x0
#define OVCON_size                               0x8
#define OVCON_value_mask                         0xFF
#define OVCON_clear_mask                         0x0

#define OVINTN                                   0x0
#define OVINTN_address                           0x099
#define OVINTN_position                          0x0
#define OVINTN_size                              0x1
#define OVINTN_value_mask                        0x1
#define OVINTN_clear_mask                        0xFE

#define OVINTP                                   0x1
#define OVINTP_address                           0x099
#define OVINTP_position                          0x1
#define OVINTP_size                              0x1
#define OVINTP_value_mask                        0x2
#define OVINTP_clear_mask                        0xFD

#define OVOUT                                    0x2
#define OVOUT_address                            0x099
#define OVOUT_position                           0x2
#define OVOUT_size                               0x1
#define OVOUT_value_mask                         0x4
#define OVOUT_clear_mask                         0xFB

#define OVEN                                     0x3
#define OVEN_address                             0x099
#define OVEN_position                            0x3
#define OVEN_size                                0x1
#define OVEN_value_mask                          0x8
#define OVEN_clear_mask                          0xF7


/*------------------------------------------------------#
| OVREFCON                                         0x9A |
#-------------------------------------------------------#
| OOV7 | OOV6 | OOV5 | OOV4 | OOV3 | OOV2 | OOV1 | OOV0 |
#-------------------------------------------------------#
| 7    | 6    | 5    | 4    | 3    | 2    | 1    | 0    |
#------------------------------------------------------*/

#define OVREFCON                                 0x0
#define OVREFCON_address                         0x09A
#define OVREFCON_position                        0x0
#define OVREFCON_size                            0x8
#define OVREFCON_value_mask                      0xFF
#define OVREFCON_clear_mask                      0x0

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


/*------------------------------------------------------------------------------#
| DEADCON                                                                  0x9B |
#-------------------------------------------------------------------------------#
| PDRVDT3 | PDRVDT2 | PDRVDT1 | PDRVDT0 | SDRVDT3 | SDRVDT2 | SDRVDT1 | SDRVDT0 |
#-------------------------------------------------------------------------------#
| 7       | 6       | 5       | 4       | 3       | 2       | 1       | 0       |
#------------------------------------------------------------------------------*/

#define DEADCON                                  0x0
#define DEADCON_address                          0x09B
#define DEADCON_position                         0x0
#define DEADCON_size                             0x8
#define DEADCON_value_mask                       0xFF
#define DEADCON_clear_mask                       0x0

#define SDRVDT0                                  0x0
#define SDRVDT0_address                          0x09B
#define SDRVDT0_position                         0x0
#define SDRVDT0_size                             0x1
#define SDRVDT0_value_mask                       0x1
#define SDRVDT0_clear_mask                       0xFE

#define SDRVDT1                                  0x1
#define SDRVDT1_address                          0x09B
#define SDRVDT1_position                         0x1
#define SDRVDT1_size                             0x1
#define SDRVDT1_value_mask                       0x2
#define SDRVDT1_clear_mask                       0xFD

#define SDRVDT2                                  0x2
#define SDRVDT2_address                          0x09B
#define SDRVDT2_position                         0x2
#define SDRVDT2_size                             0x1
#define SDRVDT2_value_mask                       0x4
#define SDRVDT2_clear_mask                       0xFB

#define SDRVDT3                                  0x3
#define SDRVDT3_address                          0x09B
#define SDRVDT3_position                         0x3
#define SDRVDT3_size                             0x1
#define SDRVDT3_value_mask                       0x8
#define SDRVDT3_clear_mask                       0xF7

#define PDRVDT0                                  0x4
#define PDRVDT0_address                          0x09B
#define PDRVDT0_position                         0x4
#define PDRVDT0_size                             0x1
#define PDRVDT0_value_mask                       0x10
#define PDRVDT0_clear_mask                       0xEF

#define PDRVDT1                                  0x5
#define PDRVDT1_address                          0x09B
#define PDRVDT1_position                         0x5
#define PDRVDT1_size                             0x1
#define PDRVDT1_value_mask                       0x20
#define PDRVDT1_clear_mask                       0xDF

#define PDRVDT2                                  0x6
#define PDRVDT2_address                          0x09B
#define PDRVDT2_position                         0x6
#define PDRVDT2_size                             0x1
#define PDRVDT2_value_mask                       0x40
#define PDRVDT2_clear_mask                       0xBF

#define PDRVDT3                                  0x7
#define PDRVDT3_address                          0x09B
#define PDRVDT3_position                         0x7
#define PDRVDT3_size                             0x1
#define PDRVDT3_value_mask                       0x80
#define PDRVDT3_clear_mask                       0x7F


/*----------------------------------------------------------#
| SLPCRCON                                             0x9C |
#-----------------------------------------------------------#
| - | SLPBY | SLPS5 | SLPS4 | SLPS3 | SLPS2 | SLPS1 | SLPS0 |
#-----------------------------------------------------------#
| 7 | 6     | 5     | 4     | 3     | 2     | 1     | 0     |
#----------------------------------------------------------*/

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

#define SLPS4                                    0x4
#define SLPS4_address                            0x09C
#define SLPS4_position                           0x4
#define SLPS4_size                               0x1
#define SLPS4_value_mask                         0x10
#define SLPS4_clear_mask                         0xEF

#define SLPS5                                    0x5
#define SLPS5_address                            0x09C
#define SLPS5_position                           0x5
#define SLPS5_size                               0x1
#define SLPS5_value_mask                         0x20
#define SLPS5_clear_mask                         0xDF

#define SLPBY                                    0x6
#define SLPBY_address                            0x09C
#define SLPBY_position                           0x6
#define SLPBY_size                               0x1
#define SLPBY_value_mask                         0x40
#define SLPBY_clear_mask                         0xBF


/*--------------------------------------------------#
| ICOACON                                      0x9D |
#---------------------------------------------------#
| - | - | - | - | ICOAC3 | ICOAC2 | ICOAC1 | ICOAC0 |
#---------------------------------------------------#
| 7 | 6 | 5 | 4 | 3      | 2      | 1      | 0      |
#--------------------------------------------------*/

#define ICOACON                                  0x0
#define ICOACON_address                          0x09D
#define ICOACON_position                         0x0
#define ICOACON_size                             0x8
#define ICOACON_value_mask                       0xFF
#define ICOACON_clear_mask                       0x0

#define ICOAC0                                   0x0
#define ICOAC0_address                           0x09D
#define ICOAC0_position                          0x0
#define ICOAC0_size                              0x1
#define ICOAC0_value_mask                        0x1
#define ICOAC0_clear_mask                        0xFE

#define ICOAC1                                   0x1
#define ICOAC1_address                           0x09D
#define ICOAC1_position                          0x1
#define ICOAC1_size                              0x1
#define ICOAC1_value_mask                        0x2
#define ICOAC1_clear_mask                        0xFD

#define ICOAC2                                   0x2
#define ICOAC2_address                           0x09D
#define ICOAC2_position                          0x2
#define ICOAC2_size                              0x1
#define ICOAC2_value_mask                        0x4
#define ICOAC2_clear_mask                        0xFB

#define ICOAC3                                   0x3
#define ICOAC3_address                           0x09D
#define ICOAC3_position                          0x3
#define ICOAC3_size                              0x1
#define ICOAC3_value_mask                        0x8
#define ICOAC3_clear_mask                        0xF7


/*------------------------------------------#
| ICLEBCON                             0x9E |
#-------------------------------------------#
| - | - | - | - | - | - | ICLEBC1 | ICLEBC0 |
#-------------------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1       | 0       |
#------------------------------------------*/

#define ICLEBCON                                 0x0
#define ICLEBCON_address                         0x09E
#define ICLEBCON_position                        0x0
#define ICLEBCON_size                            0x8
#define ICLEBCON_value_mask                      0xFF
#define ICLEBCON_clear_mask                      0x0

#define ICLEBC0                                  0x0
#define ICLEBC0_address                          0x09E
#define ICLEBC0_position                         0x0
#define ICLEBC0_size                             0x1
#define ICLEBC0_value_mask                       0x1
#define ICLEBC0_clear_mask                       0xFE

#define ICLEBC1                                  0x1
#define ICLEBC1_address                          0x09E
#define ICLEBC1_position                         0x1
#define ICLEBC1_size                             0x1
#define ICLEBC1_value_mask                       0x2
#define ICLEBC1_clear_mask                       0xFD


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

#define WPUGPB4                                  0x4
#define WPUGPB4_address                          0x106
#define WPUGPB4_position                         0x4
#define WPUGPB4_size                             0x1
#define WPUGPB4_value_mask                       0x10
#define WPUGPB4_clear_mask                       0xEF

#define WPUB5                                    0x5
#define WPUB5_address                            0x106
#define WPUB5_position                           0x5
#define WPUB5_size                               0x1
#define WPUB5_value_mask                         0x20
#define WPUB5_clear_mask                         0xDF

#define WPUGPB5                                  0x5
#define WPUGPB5_address                          0x106
#define WPUGPB5_position                         0x5
#define WPUGPB5_size                             0x1
#define WPUGPB5_value_mask                       0x20
#define WPUGPB5_clear_mask                       0xDF

#define WPUB6                                    0x6
#define WPUB6_address                            0x106
#define WPUB6_position                           0x6
#define WPUB6_size                               0x1
#define WPUB6_value_mask                         0x40
#define WPUB6_clear_mask                         0xBF

#define WPUGPB6                                  0x6
#define WPUGPB6_address                          0x106
#define WPUGPB6_position                         0x6
#define WPUGPB6_size                             0x1
#define WPUGPB6_value_mask                       0x40
#define WPUGPB6_clear_mask                       0xBF

#define WPUB7                                    0x7
#define WPUB7_address                            0x106
#define WPUB7_position                           0x7
#define WPUB7_size                               0x1
#define WPUB7_value_mask                         0x80
#define WPUB7_clear_mask                         0x7F

#define WPUGPB7                                  0x7
#define WPUGPB7_address                          0x106
#define WPUGPB7_position                         0x7
#define WPUGPB7_size                             0x1
#define WPUGPB7_value_mask                       0x80
#define WPUGPB7_clear_mask                       0x7F


/*-------------------------------------------------------------#
| PE1                                                    0x107 |
#--------------------------------------------------------------#
| PDRVEN | SDRVEN | PDRVBY | SDRVBY | - | PUEN | UVTEE | OVTEE |
#--------------------------------------------------------------#
| 7      | 6      | 5      | 4      | 3 | 2    | 1     | 0     |
#-------------------------------------------------------------*/

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

#define SDRVBY                                   0x4
#define SDRVBY_address                           0x107
#define SDRVBY_position                          0x4
#define SDRVBY_size                              0x1
#define SDRVBY_value_mask                        0x10
#define SDRVBY_clear_mask                        0xEF

#define PDRVBY                                   0x5
#define PDRVBY_address                           0x107
#define PDRVBY_position                          0x5
#define PDRVBY_size                              0x1
#define PDRVBY_value_mask                        0x20
#define PDRVBY_clear_mask                        0xDF

#define SDRVEN                                   0x6
#define SDRVEN_address                           0x107
#define SDRVEN_position                          0x6
#define SDRVEN_size                              0x1
#define SDRVEN_value_mask                        0x40
#define SDRVEN_clear_mask                        0xBF

#define PDRVEN                                   0x7
#define PDRVEN_address                           0x107
#define PDRVEN_position                          0x7
#define PDRVEN_size                              0x1
#define PDRVEN_value_mask                        0x80
#define PDRVEN_clear_mask                        0x7F


/*--------------------------------------#
| MODECON                         0x108 |
#---------------------------------------#
| MSC1 | MSC0 | RFB | - | - | - | - | - |
#---------------------------------------#
| 7    | 6    | 5   | 4 | 3 | 2 | 1 | 0 |
#--------------------------------------*/

#define MODECON                                  0x0
#define MODECON_address                          0x108
#define MODECON_position                         0x0
#define MODECON_size                             0x8
#define MODECON_value_mask                       0xFF
#define MODECON_clear_mask                       0x0

#define RFB                                      0x5
#define RFB_address                              0x108
#define RFB_position                             0x5
#define RFB_size                                 0x1
#define RFB_value_mask                           0x20
#define RFB_clear_mask                           0xDF

#define MSC0                                     0x6
#define MSC0_address                             0x108
#define MSC0_position                            0x6
#define MSC0_size                                0x1
#define MSC0_value_mask                          0x40
#define MSC0_clear_mask                          0xBF

#define MSC1                                     0x7
#define MSC1_address                             0x108
#define MSC1_position                            0x7
#define MSC1_size                                0x1
#define MSC1_value_mask                          0x80
#define MSC1_clear_mask                          0x7F


/*--------------------------------------------------------------#
| ABECON                                                  0x109 |
#---------------------------------------------------------------#
| DIGOEN | DSEL2 | DSEL1 | DSEL0 | DRUVSEL | - | EADIS | ANAOEN |
#---------------------------------------------------------------#
| 7      | 6     | 5     | 4     | 3       | 2 | 1     | 0      |
#--------------------------------------------------------------*/

#define ABECON                                   0x0
#define ABECON_address                           0x109
#define ABECON_position                          0x0
#define ABECON_size                              0x8
#define ABECON_value_mask                        0xFF
#define ABECON_clear_mask                        0x0

#define ANAOEN                                   0x0
#define ANAOEN_address                           0x109
#define ANAOEN_position                          0x0
#define ANAOEN_size                              0x1
#define ANAOEN_value_mask                        0x1
#define ANAOEN_clear_mask                        0xFE

#define EADIS                                    0x1
#define EADIS_address                            0x109
#define EADIS_position                           0x1
#define EADIS_size                               0x1
#define EADIS_value_mask                         0x2
#define EADIS_clear_mask                         0xFD

#define DRUVSEL                                  0x3
#define DRUVSEL_address                          0x109
#define DRUVSEL_position                         0x3
#define DRUVSEL_size                             0x1
#define DRUVSEL_value_mask                       0x8
#define DRUVSEL_clear_mask                       0xF7

#define DSEL0                                    0x4
#define DSEL0_address                            0x109
#define DSEL0_position                           0x4
#define DSEL0_size                               0x1
#define DSEL0_value_mask                         0x10
#define DSEL0_clear_mask                         0xEF

#define DSEL1                                    0x5
#define DSEL1_address                            0x109
#define DSEL1_position                           0x5
#define DSEL1_size                               0x1
#define DSEL1_value_mask                         0x20
#define DSEL1_clear_mask                         0xDF

#define DSEL2                                    0x6
#define DSEL2_address                            0x109
#define DSEL2_position                           0x6
#define DSEL2_size                               0x1
#define DSEL2_value_mask                         0x40
#define DSEL2_clear_mask                         0xBF

#define DIGOEN                                   0x7
#define DIGOEN_address                           0x109
#define DIGOEN_position                          0x7
#define DIGOEN_size                              0x1
#define DIGOEN_value_mask                        0x80
#define DIGOEN_clear_mask                        0x7F


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


/*----------------------------------------------------------#
| IOCA                                                0x185 |
#-----------------------------------------------------------#
| IOCA7 | IOCA6 | IOCA5 | - | IOCA3 | IOCA2 | IOCA1 | IOCA0 |
#-----------------------------------------------------------#
| 7     | 6     | 5     | 4 | 3     | 2     | 1     | 0     |
#----------------------------------------------------------*/

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


/*------------------------------------------------------#
| IOCB                                            0x186 |
#-------------------------------------------------------#
| IOCB7 | IOCB6 | IOCB5 | IOCB4 | - | - | IOCB1 | IOCB0 |
#-------------------------------------------------------#
| 7     | 6     | 5     | 4     | 3 | 2 | 1     | 0     |
#------------------------------------------------------*/

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

#define IOCB4                                    0x4
#define IOCB4_address                            0x186
#define IOCB4_position                           0x4
#define IOCB4_size                               0x1
#define IOCB4_value_mask                         0x10
#define IOCB4_clear_mask                         0xEF

#define IOCB5                                    0x5
#define IOCB5_address                            0x186
#define IOCB5_position                           0x5
#define IOCB5_size                               0x1
#define IOCB5_value_mask                         0x20
#define IOCB5_clear_mask                         0xDF

#define IOCB6                                    0x6
#define IOCB6_address                            0x186
#define IOCB6_position                           0x6
#define IOCB6_size                               0x1
#define IOCB6_value_mask                         0x40
#define IOCB6_clear_mask                         0xBF

#define IOCB7                                    0x7
#define IOCB7_address                            0x186
#define IOCB7_position                           0x7
#define IOCB7_size                               0x1
#define IOCB7_value_mask                         0x80
#define IOCB7_clear_mask                         0x7F


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
| - | ANSB6 | ANSB5 | ANSB4 | - | - | ANSB1 | - |
#-----------------------------------------------#
| 7 | 6     | 5     | 4     | 3 | 2 | 1     | 0 |
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

#define ANSB6                                    0x6
#define ANSB6_address                            0x188
#define ANSB6_position                           0x6
#define ANSB6_size                               0x1
#define ANSB6_value_mask                         0x40
#define ANSB6_clear_mask                         0xBF


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


/*------------------------------------------------------------#
| DSTCAL                                                0x196 |
#-------------------------------------------------------------#
| - | - | - | DSTCAL4 | DSTCAL3 | DSTCAL2 | DSTCAL1 | DSTCAL0 |
#-------------------------------------------------------------#
| 7 | 6 | 5 | 4       | 3       | 2       | 1       | 0       |
#------------------------------------------------------------*/

#define DSTCAL                                   0x0
#define DSTCAL_address                           0x196
#define DSTCAL_position                          0x0
#define DSTCAL_size                              0x8
#define DSTCAL_value_mask                        0xFF
#define DSTCAL_clear_mask                        0x0

#define DSTCAL0                                  0x0
#define DSTCAL0_address                          0x196
#define DSTCAL0_position                         0x0
#define DSTCAL0_size                             0x1
#define DSTCAL0_value_mask                       0x1
#define DSTCAL0_clear_mask                       0xFE

#define DSTCAL1                                  0x1
#define DSTCAL1_address                          0x196
#define DSTCAL1_position                         0x1
#define DSTCAL1_size                             0x1
#define DSTCAL1_value_mask                       0x2
#define DSTCAL1_clear_mask                       0xFD

#define DSTCAL2                                  0x2
#define DSTCAL2_address                          0x196
#define DSTCAL2_position                         0x2
#define DSTCAL2_size                             0x1
#define DSTCAL2_value_mask                       0x4
#define DSTCAL2_clear_mask                       0xFB

#define DSTCAL3                                  0x3
#define DSTCAL3_address                          0x196
#define DSTCAL3_position                         0x3
#define DSTCAL3_size                             0x1
#define DSTCAL3_value_mask                       0x8
#define DSTCAL3_clear_mask                       0xF7

#define DSTCAL4                                  0x4
#define DSTCAL4_address                          0x196
#define DSTCAL4_position                         0x4
#define DSTCAL4_size                             0x1
#define DSTCAL4_value_mask                       0x10
#define DSTCAL4_clear_mask                       0xEF


/*------------------------------------------------------------------#
| RFBTCAL                                                     0x197 |
#-------------------------------------------------------------------#
| - | - | RFBCAL5 | RFBCAL4 | RFBCAL3 | RFBCAL2 | RFBCAL1 | RFBCAL0 |
#-------------------------------------------------------------------#
| 7 | 6 | 5       | 4       | 3       | 2       | 1       | 0       |
#------------------------------------------------------------------*/

#define RFBTCAL                                  0x0
#define RFBTCAL_address                          0x197
#define RFBTCAL_position                         0x0
#define RFBTCAL_size                             0x8
#define RFBTCAL_value_mask                       0xFF
#define RFBTCAL_clear_mask                       0x0

#define RFBCAL0                                  0x0
#define RFBCAL0_address                          0x197
#define RFBCAL0_position                         0x0
#define RFBCAL0_size                             0x1
#define RFBCAL0_value_mask                       0x1
#define RFBCAL0_clear_mask                       0xFE

#define RFBCAL1                                  0x1
#define RFBCAL1_address                          0x197
#define RFBCAL1_position                         0x1
#define RFBCAL1_size                             0x1
#define RFBCAL1_value_mask                       0x2
#define RFBCAL1_clear_mask                       0xFD

#define RFBCAL2                                  0x2
#define RFBCAL2_address                          0x197
#define RFBCAL2_position                         0x2
#define RFBCAL2_size                             0x1
#define RFBCAL2_value_mask                       0x4
#define RFBCAL2_clear_mask                       0xFB

#define RFBCAL3                                  0x3
#define RFBCAL3_address                          0x197
#define RFBCAL3_position                         0x3
#define RFBCAL3_size                             0x1
#define RFBCAL3_value_mask                       0x8
#define RFBCAL3_clear_mask                       0xF7

#define RFBCAL4                                  0x4
#define RFBCAL4_address                          0x197
#define RFBCAL4_position                         0x4
#define RFBCAL4_size                             0x1
#define RFBCAL4_value_mask                       0x10
#define RFBCAL4_clear_mask                       0xEF

#define RFBCAL5                                  0x5
#define RFBCAL5_address                          0x197
#define RFBCAL5_position                         0x5
#define RFBCAL5_size                             0x1
#define RFBCAL5_value_mask                       0x20
#define RFBCAL5_clear_mask                       0xDF


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


/*------------------------------------------------------------------------#
| DCSCAL                                                            0x199 |
#-------------------------------------------------------------------------#
| - | DCSCAL6 | DCSCAL5 | DCSCAL4 | DCSCAL3 | DCSCAL2 | DCSCAL1 | DCSCAL0 |
#-------------------------------------------------------------------------#
| 7 | 6       | 5       | 4       | 3       | 2       | 1       | 0       |
#------------------------------------------------------------------------*/

#define DCSCAL                                   0x0
#define DCSCAL_address                           0x199
#define DCSCAL_position                          0x0
#define DCSCAL_size                              0x8
#define DCSCAL_value_mask                        0xFF
#define DCSCAL_clear_mask                        0x0

#define DCSCAL0                                  0x0
#define DCSCAL0_address                          0x199
#define DCSCAL0_position                         0x0
#define DCSCAL0_size                             0x1
#define DCSCAL0_value_mask                       0x1
#define DCSCAL0_clear_mask                       0xFE

#define DCSCAL1                                  0x1
#define DCSCAL1_address                          0x199
#define DCSCAL1_position                         0x1
#define DCSCAL1_size                             0x1
#define DCSCAL1_value_mask                       0x2
#define DCSCAL1_clear_mask                       0xFD

#define DCSCAL2                                  0x2
#define DCSCAL2_address                          0x199
#define DCSCAL2_position                         0x2
#define DCSCAL2_size                             0x1
#define DCSCAL2_value_mask                       0x4
#define DCSCAL2_clear_mask                       0xFB

#define DCSCAL3                                  0x3
#define DCSCAL3_address                          0x199
#define DCSCAL3_position                         0x3
#define DCSCAL3_size                             0x1
#define DCSCAL3_value_mask                       0x8
#define DCSCAL3_clear_mask                       0xF7

#define DCSCAL4                                  0x4
#define DCSCAL4_address                          0x199
#define DCSCAL4_position                         0x4
#define DCSCAL4_size                             0x1
#define DCSCAL4_value_mask                       0x10
#define DCSCAL4_clear_mask                       0xEF

#define DCSCAL5                                  0x5
#define DCSCAL5_address                          0x199
#define DCSCAL5_position                         0x5
#define DCSCAL5_size                             0x1
#define DCSCAL5_value_mask                       0x20
#define DCSCAL5_clear_mask                       0xDF

#define DCSCAL6                                  0x6
#define DCSCAL6_address                          0x199
#define DCSCAL6_position                         0x6
#define DCSCAL6_size                             0x1
#define DCSCAL6_value_mask                       0x40
#define DCSCAL6_clear_mask                       0xBF


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


/*------------------------------------------------------#
| VROCAL                                          0x19C |
#-------------------------------------------------------#
| - | - | VROT5 | VROT4 | VROT3 | VROT2 | VROT1 | VROT0 |
#-------------------------------------------------------#
| 7 | 6 | 5     | 4     | 3     | 2     | 1     | 0     |
#------------------------------------------------------*/

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

#define VROT4                                    0x4
#define VROT4_address                            0x19C
#define VROT4_position                           0x4
#define VROT4_size                               0x1
#define VROT4_value_mask                         0x10
#define VROT4_clear_mask                         0xEF

#define VROT5                                    0x5
#define VROT5_address                            0x19C
#define VROT5_position                           0x5
#define VROT5_size                               0x1
#define VROT5_value_mask                         0x20
#define VROT5_clear_mask                         0xDF


/*------------------------------------------------------#
| ATSTCON                                         0x19F |
#-------------------------------------------------------#
| - | DISLOCLMP | - | SWFRQOR | - | - | DRUVBY | TMPTBY |
#-------------------------------------------------------#
| 7 | 6         | 5 | 4       | 3 | 2 | 1      | 0      |
#------------------------------------------------------*/

#define ATSTCON                                  0x0
#define ATSTCON_address                          0x19F
#define ATSTCON_position                         0x0
#define ATSTCON_size                             0x8
#define ATSTCON_value_mask                       0xFF
#define ATSTCON_clear_mask                       0x0

#define TMPTBY                                   0x0
#define TMPTBY_address                           0x19F
#define TMPTBY_position                          0x0
#define TMPTBY_size                              0x1
#define TMPTBY_value_mask                        0x1
#define TMPTBY_clear_mask                        0xFE

#define DRUVBY                                   0x1
#define DRUVBY_address                           0x19F
#define DRUVBY_position                          0x1
#define DRUVBY_size                              0x1
#define DRUVBY_value_mask                        0x2
#define DRUVBY_clear_mask                        0xFD

#define SWFRQOR                                  0x4
#define SWFRQOR_address                          0x19F
#define SWFRQOR_position                         0x4
#define SWFRQOR_size                             0x1
#define SWFRQOR_value_mask                       0x10
#define SWFRQOR_clear_mask                       0xEF

#define DISLOCLMP                                0x6
#define DISLOCLMP_address                        0x19F
#define DISLOCLMP_position                       0x6
#define DISLOCLMP_size                           0x1
#define DISLOCLMP_value_mask                     0x40
#define DISLOCLMP_clear_mask                     0xBF

#endif // _MCP19115_H_
