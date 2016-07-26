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

#ifndef _MCP19121_H_
#define _MCP19121_H_


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


/*-----------------------------------------------#
| PORTGPB                                    0x6 |
#------------------------------------------------#
| RB7 | RB6 | RB5 | RB4 | GPB3 | RB2 | RB1 | RB0 |
#------------------------------------------------#
| 7   | 6   | 5   | 4   | 3    | 2   | 1   | 0   |
#-----------------------------------------------*/

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

#define GPB3                                     0x3
#define GPB3_address                             0x006
#define GPB3_position                            0x3
#define GPB3_size                                0x1
#define GPB3_value_mask                          0x8
#define GPB3_clear_mask                          0xF7

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


/*-----------------------------------------------------------------#
| PIR1                                                         0x7 |
#------------------------------------------------------------------#
| TMR1GIF | ADIF | BCLIF | SSPIF | CC2IF | CC1IF | TMR2IF | TMR1IF |
#------------------------------------------------------------------#
| 7       | 6    | 5     | 4     | 3     | 2     | 1      | 0      |
#-----------------------------------------------------------------*/

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

#define TMR1GIF                                  0x7
#define TMR1GIF_address                          0x007
#define TMR1GIF_position                         0x7
#define TMR1GIF_size                             0x1
#define TMR1GIF_value_mask                       0x80
#define TMR1GIF_clear_mask                       0x7F


/*----------------------------------------------------#
| PIR2                                            0x8 |
#-----------------------------------------------------#
| UVIF | OTIF | OCIF | OVIF | - | - | OVLOIF | UVLOIF |
#-----------------------------------------------------#
| 7    | 6    | 5    | 4    | 3 | 2 | 1      | 0      |
#----------------------------------------------------*/

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

#define OTIF                                     0x6
#define OTIF_address                             0x008
#define OTIF_position                            0x6
#define OTIF_size                                0x1
#define OTIF_value_mask                          0x40
#define OTIF_clear_mask                          0xBF

#define UVIF                                     0x7
#define UVIF_address                             0x008
#define UVIF_position                            0x7
#define UVIF_size                                0x1
#define UVIF_value_mask                          0x80
#define UVIF_clear_mask                          0x7F


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


/*-------------------------------------------------------------------#
| T1GCON                                                        0x12 |
#--------------------------------------------------------------------#
| TMR1GE | T1GPOL | T1GTM | T1GSPM | T1GO | T1GVAL | T1GSS1 | T1GSS0 |
#--------------------------------------------------------------------#
| 7      | 6      | 5     | 4      | 3    | 2      | 1      | 0      |
#-------------------------------------------------------------------*/

#define T1GCON                                   0x0
#define T1GCON_address                           0x012
#define T1GCON_position                          0x0
#define T1GCON_size                              0x8
#define T1GCON_value_mask                        0xFF
#define T1GCON_clear_mask                        0x0

#define T1GSS0                                   0x0
#define T1GSS0_address                           0x012
#define T1GSS0_position                          0x0
#define T1GSS0_size                              0x1
#define T1GSS0_value_mask                        0x1
#define T1GSS0_clear_mask                        0xFE

#define T1GSS1                                   0x1
#define T1GSS1_address                           0x012
#define T1GSS1_position                          0x1
#define T1GSS1_size                              0x1
#define T1GSS1_value_mask                        0x2
#define T1GSS1_clear_mask                        0xFD

#define T1GVAL                                   0x2
#define T1GVAL_address                           0x012
#define T1GVAL_position                          0x2
#define T1GVAL_size                              0x1
#define T1GVAL_value_mask                        0x4
#define T1GVAL_clear_mask                        0xFB

#define T1GO                                     0x3
#define T1GO_address                             0x012
#define T1GO_position                            0x3
#define T1GO_size                                0x1
#define T1GO_value_mask                          0x8
#define T1GO_clear_mask                          0xF7

#define T1GSPM                                   0x4
#define T1GSPM_address                           0x012
#define T1GSPM_position                          0x4
#define T1GSPM_size                              0x1
#define T1GSPM_value_mask                        0x10
#define T1GSPM_clear_mask                        0xEF

#define T1GTM                                    0x5
#define T1GTM_address                            0x012
#define T1GTM_position                           0x5
#define T1GTM_size                               0x1
#define T1GTM_value_mask                         0x20
#define T1GTM_clear_mask                         0xDF

#define T1GPOL                                   0x6
#define T1GPOL_address                           0x012
#define T1GPOL_position                          0x6
#define T1GPOL_size                              0x1
#define T1GPOL_value_mask                        0x40
#define T1GPOL_clear_mask                        0xBF

#define TMR1GE                                   0x7
#define TMR1GE_address                           0x012
#define TMR1GE_position                          0x7
#define TMR1GE_size                              0x1
#define TMR1GE_value_mask                        0x80
#define TMR1GE_clear_mask                        0x7F


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


/*------------------------------#
| CC1RL                    0x17 |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define CC1RL                                    0x0
#define CC1RL_address                            0x017
#define CC1RL_position                           0x0
#define CC1RL_size                               0x8
#define CC1RL_value_mask                         0xFF
#define CC1RL_clear_mask                         0x0


/*------------------------------#
| CC1RH                    0x18 |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define CC1RH                                    0x0
#define CC1RH_address                            0x018
#define CC1RH_position                           0x0
#define CC1RH_size                               0x8
#define CC1RH_value_mask                         0xFF
#define CC1RH_clear_mask                         0x0


/*------------------------------#
| CC2RL                    0x19 |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define CC2RL                                    0x0
#define CC2RL_address                            0x019
#define CC2RL_position                           0x0
#define CC2RL_size                               0x8
#define CC2RL_value_mask                         0xFF
#define CC2RL_clear_mask                         0x0


/*------------------------------#
| CC2RH                    0x1A |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define CC2RH                                    0x0
#define CC2RH_address                            0x01A
#define CC2RH_position                           0x0
#define CC2RH_size                               0x8
#define CC2RH_value_mask                         0xFF
#define CC2RH_clear_mask                         0x0


/*--------------------------------------------------------------#
| CCDCON                                                   0x1B |
#---------------------------------------------------------------#
| CC2M3 | CC2M2 | CC2M1 | CC2M0 | CC1M3 | CC1M2 | CC1M1 | CC1M0 |
#---------------------------------------------------------------#
| 7     | 6     | 5     | 4     | 3     | 2     | 1     | 0     |
#--------------------------------------------------------------*/

#define CCDCON                                   0x0
#define CCDCON_address                           0x01B
#define CCDCON_position                          0x0
#define CCDCON_size                              0x8
#define CCDCON_value_mask                        0xFF
#define CCDCON_clear_mask                        0x0

#define CC1M0                                    0x0
#define CC1M0_address                            0x01B
#define CC1M0_position                           0x0
#define CC1M0_size                               0x1
#define CC1M0_value_mask                         0x1
#define CC1M0_clear_mask                         0xFE

#define CC1M1                                    0x1
#define CC1M1_address                            0x01B
#define CC1M1_position                           0x1
#define CC1M1_size                               0x1
#define CC1M1_value_mask                         0x2
#define CC1M1_clear_mask                         0xFD

#define CC1M2                                    0x2
#define CC1M2_address                            0x01B
#define CC1M2_position                           0x2
#define CC1M2_size                               0x1
#define CC1M2_value_mask                         0x4
#define CC1M2_clear_mask                         0xFB

#define CC1M3                                    0x3
#define CC1M3_address                            0x01B
#define CC1M3_position                           0x3
#define CC1M3_size                               0x1
#define CC1M3_value_mask                         0x8
#define CC1M3_clear_mask                         0xF7

#define CC2M0                                    0x4
#define CC2M0_address                            0x01B
#define CC2M0_position                           0x4
#define CC2M0_size                               0x1
#define CC2M0_value_mask                         0x10
#define CC2M0_clear_mask                         0xEF

#define CC2M1                                    0x5
#define CC2M1_address                            0x01B
#define CC2M1_position                           0x5
#define CC2M1_size                               0x1
#define CC2M1_value_mask                         0x20
#define CC2M1_clear_mask                         0xDF

#define CC2M2                                    0x6
#define CC2M2_address                            0x01B
#define CC2M2_position                           0x6
#define CC2M2_size                               0x1
#define CC2M2_value_mask                         0x40
#define CC2M2_clear_mask                         0xBF

#define CC2M3                                    0x7
#define CC2M3_address                            0x01B
#define CC2M3_position                           0x7
#define CC2M3_size                               0x1
#define CC2M3_value_mask                         0x80
#define CC2M3_clear_mask                         0x7F


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


/*----------------------------------------------------------#
| ADCON0                                               0x1E |
#-----------------------------------------------------------#
| CHS5 | CHS4 | CHS3 | CHS2 | CHS1 | CHS0 | GO_nDONE | ADON |
#-----------------------------------------------------------#
| 7    | 6    | 5    | 4    | 3    | 2    | 1        | 0    |
#----------------------------------------------------------*/

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

#define CHS5                                     0x7
#define CHS5_address                             0x01E
#define CHS5_position                            0x7
#define CHS5_size                                0x1
#define CHS5_value_mask                          0x80
#define CHS5_clear_mask                          0x7F


/*------------------------------------------------#
| ADCON1                                     0x1F |
#-------------------------------------------------#
| - | ADCS2 | ADCS1 | ADCS0 | - | - | ADFM | VCFG |
#-------------------------------------------------#
| 7 | 6     | 5     | 4     | 3 | 2 | 1    | 0    |
#------------------------------------------------*/

#define ADCON1                                   0x0
#define ADCON1_address                           0x01F
#define ADCON1_position                          0x0
#define ADCON1_size                              0x8
#define ADCON1_value_mask                        0xFF
#define ADCON1_clear_mask                        0x0

#define VCFG                                     0x0
#define VCFG_address                             0x01F
#define VCFG_position                            0x0
#define VCFG_size                                0x1
#define VCFG_value_mask                          0x1
#define VCFG_clear_mask                          0xFE

#define ADFM                                     0x1
#define ADFM_address                             0x01F
#define ADFM_position                            0x1
#define ADFM_size                                0x1
#define ADFM_value_mask                          0x2
#define ADFM_clear_mask                          0xFD

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


/*----------------------------------------------------------------------#
| TRISGPB                                                          0x86 |
#-----------------------------------------------------------------------#
| TRISB7 | TRISB6 | TRISB5 | TRISB4 | TRISB3 | TRISB2 | TRISB1 | TRISB0 |
#-----------------------------------------------------------------------#
| 7      | 6      | 5      | 4      | 3      | 2      | 1      | 0      |
#----------------------------------------------------------------------*/

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

#define TRISB3                                   0x3
#define TRISB3_address                           0x086
#define TRISB3_position                          0x3
#define TRISB3_size                              0x1
#define TRISB3_value_mask                        0x8
#define TRISB3_clear_mask                        0xF7

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


/*-----------------------------------------------------------------#
| PIE1                                                        0x87 |
#------------------------------------------------------------------#
| TMR1GIE | ADIE | BCLIE | SSPIE | CC2IE | CC1IE | TMR2IE | TMR1IE |
#------------------------------------------------------------------#
| 7       | 6    | 5     | 4     | 3     | 2     | 1      | 0      |
#-----------------------------------------------------------------*/

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

#define TMR1GIE                                  0x7
#define TMR1GIE_address                          0x087
#define TMR1GIE_position                         0x7
#define TMR1GIE_size                             0x1
#define TMR1GIE_value_mask                       0x80
#define TMR1GIE_clear_mask                       0x7F


/*----------------------------------------------------#
| PIE2                                           0x88 |
#-----------------------------------------------------#
| UVIE | OTIE | OCIE | OVIE | - | - | OVLOIE | UVLOIE |
#-----------------------------------------------------#
| 7    | 6    | 5    | 4    | 3 | 2 | 1      | 0      |
#----------------------------------------------------*/

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

#define OTIE                                     0x6
#define OTIE_address                             0x088
#define OTIE_position                            0x6
#define OTIE_size                                0x1
#define OTIE_value_mask                          0x40
#define OTIE_clear_mask                          0xBF

#define UVIE                                     0x7
#define UVIE_address                             0x088
#define UVIE_position                            0x7
#define UVIE_size                                0x1
#define UVIE_value_mask                          0x80
#define UVIE_clear_mask                          0x7F


/*----------------------------------------------#
| VINUVLO                                  0x90 |
#-----------------------------------------------#
| - | - | - | - | UVLO3 | UVLO2 | UVLO1 | UVLO0 |
#-----------------------------------------------#
| 7 | 6 | 5 | 4 | 3     | 2     | 1     | 0     |
#----------------------------------------------*/

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


/*----------------------------------------------#
| VINOVLO                                  0x91 |
#-----------------------------------------------#
| - | - | - | - | OVLO3 | OVLO2 | OVLO1 | OVLO0 |
#-----------------------------------------------#
| 7 | 6 | 5 | 4 | 3     | 2     | 1     | 0     |
#----------------------------------------------*/

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


/*---------------------------------------#
| DAGCON                            0x93 |
#----------------------------------------#
| - | - | - | - | - | DAG2 | DAG1 | DAG0 |
#----------------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2    | 1    | 0    |
#---------------------------------------*/

#define DAGCON                                   0x0
#define DAGCON_address                           0x093
#define DAGCON_position                          0x0
#define DAGCON_size                              0x8
#define DAGCON_value_mask                        0xFF
#define DAGCON_clear_mask                        0x0

#define DAG0                                     0x0
#define DAG0_address                             0x093
#define DAG0_position                            0x0
#define DAG0_size                                0x1
#define DAG0_value_mask                          0x1
#define DAG0_clear_mask                          0xFE

#define DAG1                                     0x1
#define DAG1_address                             0x093
#define DAG1_position                            0x1
#define DAG1_size                                0x1
#define DAG1_value_mask                          0x2
#define DAG1_clear_mask                          0xFD

#define DAG2                                     0x2
#define DAG2_address                             0x093
#define DAG2_position                            0x2
#define DAG2_size                                0x1
#define DAG2_value_mask                          0x4
#define DAG2_clear_mask                          0xFB


/*--------------------------------------------------------------#
| VOUTL                                                    0x94 |
#---------------------------------------------------------------#
| VOUT7 | VOUT6 | VOUT5 | VOUT4 | VOUT3 | VOUT2 | VOUT1 | VOUT0 |
#---------------------------------------------------------------#
| 7     | 6     | 5     | 4     | 3     | 2     | 1     | 0     |
#--------------------------------------------------------------*/

#define VOUTL                                    0x0
#define VOUTL_address                            0x094
#define VOUTL_position                           0x0
#define VOUTL_size                               0x8
#define VOUTL_value_mask                         0xFF
#define VOUTL_clear_mask                         0x0

#define VOUT0                                    0x0
#define VOUT0_address                            0x094
#define VOUT0_position                           0x0
#define VOUT0_size                               0x1
#define VOUT0_value_mask                         0x1
#define VOUT0_clear_mask                         0xFE

#define VOUT1                                    0x1
#define VOUT1_address                            0x094
#define VOUT1_position                           0x1
#define VOUT1_size                               0x1
#define VOUT1_value_mask                         0x2
#define VOUT1_clear_mask                         0xFD

#define VOUT2                                    0x2
#define VOUT2_address                            0x094
#define VOUT2_position                           0x2
#define VOUT2_size                               0x1
#define VOUT2_value_mask                         0x4
#define VOUT2_clear_mask                         0xFB

#define VOUT3                                    0x3
#define VOUT3_address                            0x094
#define VOUT3_position                           0x3
#define VOUT3_size                               0x1
#define VOUT3_value_mask                         0x8
#define VOUT3_clear_mask                         0xF7

#define VOUT4                                    0x4
#define VOUT4_address                            0x094
#define VOUT4_position                           0x4
#define VOUT4_size                               0x1
#define VOUT4_value_mask                         0x10
#define VOUT4_clear_mask                         0xEF

#define VOUT5                                    0x5
#define VOUT5_address                            0x094
#define VOUT5_position                           0x5
#define VOUT5_size                               0x1
#define VOUT5_value_mask                         0x20
#define VOUT5_clear_mask                         0xDF

#define VOUT6                                    0x6
#define VOUT6_address                            0x094
#define VOUT6_position                           0x6
#define VOUT6_size                               0x1
#define VOUT6_value_mask                         0x40
#define VOUT6_clear_mask                         0xBF

#define VOUT7                                    0x7
#define VOUT7_address                            0x094
#define VOUT7_position                           0x7
#define VOUT7_size                               0x1
#define VOUT7_value_mask                         0x80
#define VOUT7_clear_mask                         0x7F


/*--------------------------------------#
| VOUTH                            0x95 |
#---------------------------------------#
| - | - | - | - | - | - | VOUT9 | VOUT8 |
#---------------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1     | 0     |
#--------------------------------------*/

#define VOUTH                                    0x0
#define VOUTH_address                            0x095
#define VOUTH_position                           0x0
#define VOUTH_size                               0x8
#define VOUTH_value_mask                         0xFF
#define VOUTH_clear_mask                         0x0

#define VOUT8                                    0x0
#define VOUT8_address                            0x095
#define VOUT8_position                           0x0
#define VOUT8_size                               0x1
#define VOUT8_value_mask                         0x1
#define VOUT8_clear_mask                         0xFE

#define VOUT9                                    0x1
#define VOUT9_address                            0x095
#define VOUT9_position                           0x1
#define VOUT9_size                               0x1
#define VOUT9_value_mask                         0x2
#define VOUT9_clear_mask                         0xFD


/*---------------------------------------------#
| OSCTUNE                                 0x96 |
#----------------------------------------------#
| - | - | - | TUN4 | TUN3 | TUN2 | TUN1 | TUN0 |
#----------------------------------------------#
| 7 | 6 | 5 | 4    | 3    | 2    | 1    | 0    |
#---------------------------------------------*/

#define OSCTUNE                                  0x0
#define OSCTUNE_address                          0x096
#define OSCTUNE_position                         0x0
#define OSCTUNE_size                             0x8
#define OSCTUNE_value_mask                       0xFF
#define OSCTUNE_clear_mask                       0x0

#define TUN0                                     0x0
#define TUN0_address                             0x096
#define TUN0_position                            0x0
#define TUN0_size                                0x1
#define TUN0_value_mask                          0x1
#define TUN0_clear_mask                          0xFE

#define TUN1                                     0x1
#define TUN1_address                             0x096
#define TUN1_position                            0x1
#define TUN1_size                                0x1
#define TUN1_value_mask                          0x2
#define TUN1_clear_mask                          0xFD

#define TUN2                                     0x2
#define TUN2_address                             0x096
#define TUN2_position                            0x2
#define TUN2_size                                0x1
#define TUN2_value_mask                          0x4
#define TUN2_clear_mask                          0xFB

#define TUN3                                     0x3
#define TUN3_address                             0x096
#define TUN3_position                            0x3
#define TUN3_size                                0x1
#define TUN3_value_mask                          0x8
#define TUN3_clear_mask                          0xF7

#define TUN4                                     0x4
#define TUN4_address                             0x096
#define TUN4_position                            0x4
#define TUN4_size                                0x1
#define TUN4_value_mask                          0x10
#define TUN4_clear_mask                          0xEF


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


/*------------------------------------------#
| VOTUVLO                              0x99 |
#-------------------------------------------#
| - | - | - | - | OUV3 | OUV2 | OUV1 | OUV0 |
#-------------------------------------------#
| 7 | 6 | 5 | 4 | 3    | 2    | 1    | 0    |
#------------------------------------------*/

#define VOTUVLO                                  0x0
#define VOTUVLO_address                          0x099
#define VOTUVLO_position                         0x0
#define VOTUVLO_size                             0x8
#define VOTUVLO_value_mask                       0xFF
#define VOTUVLO_clear_mask                       0x0

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


/*------------------------------------------#
| VOTOVLO                              0x9A |
#-------------------------------------------#
| - | - | - | - | OOV3 | OOV2 | OOV1 | OOV0 |
#-------------------------------------------#
| 7 | 6 | 5 | 4 | 3    | 2    | 1    | 0    |
#------------------------------------------*/

#define VOTOVLO                                  0x0
#define VOTOVLO_address                          0x09A
#define VOTOVLO_position                         0x0
#define VOTOVLO_size                             0x8
#define VOTOVLO_value_mask                       0xFF
#define VOTOVLO_clear_mask                       0x0

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


/*-------------------------------------------------#
| RAMPCON                                     0x9C |
#--------------------------------------------------#
| RMPEN | - | - | RMP4 | RMP3 | RMP2 | RMP1 | RMP0 |
#--------------------------------------------------#
| 7     | 6 | 5 | 4    | 3    | 2    | 1    | 0    |
#-------------------------------------------------*/

#define RAMPCON                                  0x0
#define RAMPCON_address                          0x09C
#define RAMPCON_position                         0x0
#define RAMPCON_size                             0x8
#define RAMPCON_value_mask                       0xFF
#define RAMPCON_clear_mask                       0x0

#define RMP0                                     0x0
#define RMP0_address                             0x09C
#define RMP0_position                            0x0
#define RMP0_size                                0x1
#define RMP0_value_mask                          0x1
#define RMP0_clear_mask                          0xFE

#define RMP1                                     0x1
#define RMP1_address                             0x09C
#define RMP1_position                            0x1
#define RMP1_size                                0x1
#define RMP1_value_mask                          0x2
#define RMP1_clear_mask                          0xFD

#define RMP2                                     0x2
#define RMP2_address                             0x09C
#define RMP2_position                            0x2
#define RMP2_size                                0x1
#define RMP2_value_mask                          0x4
#define RMP2_clear_mask                          0xFB

#define RMP3                                     0x3
#define RMP3_address                             0x09C
#define RMP3_position                            0x3
#define RMP3_size                                0x1
#define RMP3_value_mask                          0x8
#define RMP3_clear_mask                          0xF7

#define RMP4                                     0x4
#define RMP4_address                             0x09C
#define RMP4_position                            0x4
#define RMP4_size                                0x1
#define RMP4_value_mask                          0x10
#define RMP4_clear_mask                          0xEF

#define RMPEN                                    0x7
#define RMPEN_address                            0x09C
#define RMPEN_position                           0x7
#define RMPEN_size                               0x1
#define RMPEN_value_mask                         0x80
#define RMPEN_clear_mask                         0x7F


/*----------------------------------------------------------#
| OCCON                                                0x9D |
#-----------------------------------------------------------#
| OCEN | OCLEB1 | OCLEB0 | OOC4 | OOC3 | OOC2 | OOC1 | OOC0 |
#-----------------------------------------------------------#
| 7    | 6      | 5      | 4    | 3    | 2    | 1    | 0    |
#----------------------------------------------------------*/

#define OCCON                                    0x0
#define OCCON_address                            0x09D
#define OCCON_position                           0x0
#define OCCON_size                               0x8
#define OCCON_value_mask                         0xFF
#define OCCON_clear_mask                         0x0

#define OOC0                                     0x0
#define OOC0_address                             0x09D
#define OOC0_position                            0x0
#define OOC0_size                                0x1
#define OOC0_value_mask                          0x1
#define OOC0_clear_mask                          0xFE

#define OOC1                                     0x1
#define OOC1_address                             0x09D
#define OOC1_position                            0x1
#define OOC1_size                                0x1
#define OOC1_value_mask                          0x2
#define OOC1_clear_mask                          0xFD

#define OOC2                                     0x2
#define OOC2_address                             0x09D
#define OOC2_position                            0x2
#define OOC2_size                                0x1
#define OOC2_value_mask                          0x4
#define OOC2_clear_mask                          0xFB

#define OOC3                                     0x3
#define OOC3_address                             0x09D
#define OOC3_position                            0x3
#define OOC3_size                                0x1
#define OOC3_value_mask                          0x8
#define OOC3_clear_mask                          0xF7

#define OOC4                                     0x4
#define OOC4_address                             0x09D
#define OOC4_position                            0x4
#define OOC4_size                                0x1
#define OOC4_value_mask                          0x10
#define OOC4_clear_mask                          0xEF

#define OCLEB0                                   0x5
#define OCLEB0_address                           0x09D
#define OCLEB0_position                          0x5
#define OCLEB0_size                              0x1
#define OCLEB0_value_mask                        0x20
#define OCLEB0_clear_mask                        0xDF

#define OCLEB1                                   0x6
#define OCLEB1_address                           0x09D
#define OCLEB1_position                          0x6
#define OCLEB1_size                              0x1
#define OCLEB1_value_mask                        0x40
#define OCLEB1_clear_mask                        0xBF

#define OCEN                                     0x7
#define OCEN_address                             0x09D
#define OCEN_position                            0x7
#define OCEN_size                                0x1
#define OCEN_value_mask                          0x80
#define OCEN_clear_mask                          0x7F


/*--------------------------------------------------#
| CSGSCON                                      0x9E |
#---------------------------------------------------#
| - | - | - | CSGS4 | CSGS3 | CSGS2 | CSGS1 | CSGS0 |
#---------------------------------------------------#
| 7 | 6 | 5 | 4     | 3     | 2     | 1     | 0     |
#--------------------------------------------------*/

#define CSGSCON                                  0x0
#define CSGSCON_address                          0x09E
#define CSGSCON_position                         0x0
#define CSGSCON_size                             0x8
#define CSGSCON_value_mask                       0xFF
#define CSGSCON_clear_mask                       0x0

#define CSGS0                                    0x0
#define CSGS0_address                            0x09E
#define CSGS0_position                           0x0
#define CSGS0_size                               0x1
#define CSGS0_value_mask                         0x1
#define CSGS0_clear_mask                         0xFE

#define CSGS1                                    0x1
#define CSGS1_address                            0x09E
#define CSGS1_position                           0x1
#define CSGS1_size                               0x1
#define CSGS1_value_mask                         0x2
#define CSGS1_clear_mask                         0xFD

#define CSGS2                                    0x2
#define CSGS2_address                            0x09E
#define CSGS2_position                           0x2
#define CSGS2_size                               0x1
#define CSGS2_value_mask                         0x4
#define CSGS2_clear_mask                         0xFB

#define CSGS3                                    0x3
#define CSGS3_address                            0x09E
#define CSGS3_position                           0x3
#define CSGS3_size                               0x1
#define CSGS3_value_mask                         0x8
#define CSGS3_clear_mask                         0xF7

#define CSGS4                                    0x4
#define CSGS4_address                            0x09E
#define CSGS4_position                           0x4
#define CSGS4_size                               0x1
#define CSGS4_value_mask                         0x10
#define CSGS4_clear_mask                         0xEF


/*-------------------------------------------------#
| RELEFF                                      0x9F |
#--------------------------------------------------#
| MSDONE | RE6 | RE5 | RE4 | RE3 | RE2 | RE1 | RE0 |
#--------------------------------------------------#
| 7      | 6   | 5   | 4   | 3   | 2   | 1   | 0   |
#-------------------------------------------------*/

#define RELEFF                                   0x0
#define RELEFF_address                           0x09F
#define RELEFF_position                          0x0
#define RELEFF_size                              0x8
#define RELEFF_value_mask                        0xFF
#define RELEFF_clear_mask                        0x0

#define RE0                                      0x0
#define RE0_address                              0x09F
#define RE0_position                             0x0
#define RE0_size                                 0x1
#define RE0_value_mask                           0x1
#define RE0_clear_mask                           0xFE

#define RE1                                      0x1
#define RE1_address                              0x09F
#define RE1_position                             0x1
#define RE1_size                                 0x1
#define RE1_value_mask                           0x2
#define RE1_clear_mask                           0xFD

#define RE2                                      0x2
#define RE2_address                              0x09F
#define RE2_position                             0x2
#define RE2_size                                 0x1
#define RE2_value_mask                           0x4
#define RE2_clear_mask                           0xFB

#define RE3                                      0x3
#define RE3_address                              0x09F
#define RE3_position                             0x3
#define RE3_size                                 0x1
#define RE3_value_mask                           0x8
#define RE3_clear_mask                           0xF7

#define RE4                                      0x4
#define RE4_address                              0x09F
#define RE4_position                             0x4
#define RE4_size                                 0x1
#define RE4_value_mask                           0x10
#define RE4_clear_mask                           0xEF

#define RE5                                      0x5
#define RE5_address                              0x09F
#define RE5_position                             0x5
#define RE5_size                                 0x1
#define RE5_value_mask                           0x20
#define RE5_clear_mask                           0xDF

#define RE6                                      0x6
#define RE6_address                              0x09F
#define RE6_position                             0x6
#define RE6_size                                 0x1
#define RE6_value_mask                           0x40
#define RE6_clear_mask                           0xBF

#define MSDONE                                   0x7
#define MSDONE_address                           0x09F
#define MSDONE_position                          0x7
#define MSDONE_size                              0x1
#define MSDONE_value_mask                        0x80
#define MSDONE_clear_mask                        0x7F


/*------------------------------------------------#
| WPUGPA                                    0x105 |
#-------------------------------------------------#
| - | - | WPUA5 | - | WCS1 | WCS0 | WPUA1 | WPUA0 |
#-------------------------------------------------#
| 7 | 6 | 5     | 4 | 3    | 2    | 1     | 0     |
#------------------------------------------------*/

#define WPUGPA                                   0x0
#define WPUGPA_address                           0x105
#define WPUGPA_position                          0x0
#define WPUGPA_size                              0x8
#define WPUGPA_value_mask                        0xFF
#define WPUGPA_clear_mask                        0x0

#define WPUA0                                    0x0
#define WPUA0_address                            0x105
#define WPUA0_position                           0x0
#define WPUA0_size                               0x1
#define WPUA0_value_mask                         0x1
#define WPUA0_clear_mask                         0xFE

#define WPUA1                                    0x1
#define WPUA1_address                            0x105
#define WPUA1_position                           0x1
#define WPUA1_size                               0x1
#define WPUA1_value_mask                         0x2
#define WPUA1_clear_mask                         0xFD

#define WCS0                                     0x2
#define WCS0_address                             0x105
#define WCS0_position                            0x2
#define WCS0_size                                0x1
#define WCS0_value_mask                          0x4
#define WCS0_clear_mask                          0xFB

#define WCS1                                     0x3
#define WCS1_address                             0x105
#define WCS1_position                            0x3
#define WCS1_size                                0x1
#define WCS1_value_mask                          0x8
#define WCS1_clear_mask                          0xF7

#define WPUA5                                    0x5
#define WPUA5_address                            0x105
#define WPUA5_position                           0x5
#define WPUA5_size                               0x1
#define WPUA5_value_mask                         0x20
#define WPUA5_clear_mask                         0xDF


/*----------------------------------------------------------#
| WPUGPB                                              0x106 |
#-----------------------------------------------------------#
| WPUB7 | WPUB6 | WPUB5 | WPUB4 | WPUB3 | WPUB2 | WPUB1 | - |
#-----------------------------------------------------------#
| 7     | 6     | 5     | 4     | 3     | 2     | 1     | 0 |
#----------------------------------------------------------*/

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

#define WPUB2                                    0x2
#define WPUB2_address                            0x106
#define WPUB2_position                           0x2
#define WPUB2_size                               0x1
#define WPUB2_value_mask                         0x4
#define WPUB2_clear_mask                         0xFB

#define WPUB3                                    0x3
#define WPUB3_address                            0x106
#define WPUB3_position                           0x3
#define WPUB3_size                               0x1
#define WPUB3_value_mask                         0x8
#define WPUB3_clear_mask                         0xF7

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


/*----------------------------------------------------------#
| PE1                                                 0x107 |
#-----------------------------------------------------------#
| DECON | - | HIDIS | LODIS | MEASEN | SPAN | UVTEE | OVTEE |
#-----------------------------------------------------------#
| 7     | 6 | 5     | 4     | 3      | 2    | 1     | 0     |
#----------------------------------------------------------*/

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

#define SPAN                                     0x2
#define SPAN_address                             0x107
#define SPAN_position                            0x2
#define SPAN_size                                0x1
#define SPAN_value_mask                          0x4
#define SPAN_clear_mask                          0xFB

#define MEASEN                                   0x3
#define MEASEN_address                           0x107
#define MEASEN_position                          0x3
#define MEASEN_size                              0x1
#define MEASEN_value_mask                        0x8
#define MEASEN_clear_mask                        0xF7

#define LODIS                                    0x4
#define LODIS_address                            0x107
#define LODIS_position                           0x4
#define LODIS_size                               0x1
#define LODIS_value_mask                         0x10
#define LODIS_clear_mask                         0xEF

#define HIDIS                                    0x5
#define HIDIS_address                            0x107
#define HIDIS_position                           0x5
#define HIDIS_size                               0x1
#define HIDIS_value_mask                         0x20
#define HIDIS_clear_mask                         0xDF

#define DECON                                    0x7
#define DECON_address                            0x107
#define DECON_position                           0x7
#define DECON_size                               0x1
#define DECON_value_mask                         0x80
#define DECON_clear_mask                         0x7F


/*--------------------------------------------------------------#
| MODECON                                                 0x108 |
#---------------------------------------------------------------#
| CLMPSEL | VGNDEN | VDDEN | CNSG | EACLMP | MSC2 | MSC1 | MSC0 |
#---------------------------------------------------------------#
| 7       | 6      | 5     | 4    | 3      | 2    | 1    | 0    |
#--------------------------------------------------------------*/

#define MODECON                                  0x0
#define MODECON_address                          0x108
#define MODECON_position                         0x0
#define MODECON_size                             0x8
#define MODECON_value_mask                       0xFF
#define MODECON_clear_mask                       0x0

#define MSC0                                     0x0
#define MSC0_address                             0x108
#define MSC0_position                            0x0
#define MSC0_size                                0x1
#define MSC0_value_mask                          0x1
#define MSC0_clear_mask                          0xFE

#define MSC1                                     0x1
#define MSC1_address                             0x108
#define MSC1_position                            0x1
#define MSC1_size                                0x1
#define MSC1_value_mask                          0x2
#define MSC1_clear_mask                          0xFD

#define MSC2                                     0x2
#define MSC2_address                             0x108
#define MSC2_position                            0x2
#define MSC2_size                                0x1
#define MSC2_value_mask                          0x4
#define MSC2_clear_mask                          0xFB

#define EACLMP                                   0x3
#define EACLMP_address                           0x108
#define EACLMP_position                          0x3
#define EACLMP_size                              0x1
#define EACLMP_value_mask                        0x8
#define EACLMP_clear_mask                        0xF7

#define CNSG                                     0x4
#define CNSG_address                             0x108
#define CNSG_position                            0x4
#define CNSG_size                                0x1
#define CNSG_value_mask                          0x10
#define CNSG_clear_mask                          0xEF

#define VDDEN                                    0x5
#define VDDEN_address                            0x108
#define VDDEN_position                           0x5
#define VDDEN_size                               0x1
#define VDDEN_value_mask                         0x20
#define VDDEN_clear_mask                         0xDF

#define VGNDEN                                   0x6
#define VGNDEN_address                           0x108
#define VGNDEN_position                          0x6
#define VGNDEN_size                              0x1
#define VGNDEN_value_mask                        0x40
#define VGNDEN_clear_mask                        0xBF

#define CLMPSEL                                  0x7
#define CLMPSEL_address                          0x108
#define CLMPSEL_position                         0x7
#define CLMPSEL_size                             0x1
#define CLMPSEL_value_mask                       0x80
#define CLMPSEL_clear_mask                       0x7F


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


/*--------------------------------------------------#
| VREFCAL                                     0x119 |
#---------------------------------------------------#
| - | - | - | VREF4 | VREF3 | VREF2 | VREF1 | VREF0 |
#---------------------------------------------------#
| 7 | 6 | 5 | 4     | 3     | 2     | 1     | 0     |
#--------------------------------------------------*/

#define VREFCAL                                  0x0
#define VREFCAL_address                          0x119
#define VREFCAL_position                         0x0
#define VREFCAL_size                             0x8
#define VREFCAL_value_mask                       0xFF
#define VREFCAL_clear_mask                       0x0

#define VREF0                                    0x0
#define VREF0_address                            0x119
#define VREF0_position                           0x0
#define VREF0_size                               0x1
#define VREF0_value_mask                         0x1
#define VREF0_clear_mask                         0xFE

#define VREF1                                    0x1
#define VREF1_address                            0x119
#define VREF1_position                           0x1
#define VREF1_size                               0x1
#define VREF1_value_mask                         0x2
#define VREF1_clear_mask                         0xFD

#define VREF2                                    0x2
#define VREF2_address                            0x119
#define VREF2_position                           0x2
#define VREF2_size                               0x1
#define VREF2_value_mask                         0x4
#define VREF2_clear_mask                         0xFB

#define VREF3                                    0x3
#define VREF3_address                            0x119
#define VREF3_position                           0x3
#define VREF3_size                               0x1
#define VREF3_value_mask                         0x8
#define VREF3_clear_mask                         0xF7

#define VREF4                                    0x4
#define VREF4_address                            0x119
#define VREF4_position                           0x4
#define VREF4_size                               0x1
#define VREF4_value_mask                         0x10
#define VREF4_clear_mask                         0xEF


/*--------------------------------------------------#
| VRFSCAL                                     0x11A |
#---------------------------------------------------#
| - | - | - | VRFS4 | VRFS3 | VRFS2 | VRFS1 | VRFS0 |
#---------------------------------------------------#
| 7 | 6 | 5 | 4     | 3     | 2     | 1     | 0     |
#--------------------------------------------------*/

#define VRFSCAL                                  0x0
#define VRFSCAL_address                          0x11A
#define VRFSCAL_position                         0x0
#define VRFSCAL_size                             0x8
#define VRFSCAL_value_mask                       0xFF
#define VRFSCAL_clear_mask                       0x0

#define VRFS0                                    0x0
#define VRFS0_address                            0x11A
#define VRFS0_position                           0x0
#define VRFS0_size                               0x1
#define VRFS0_value_mask                         0x1
#define VRFS0_clear_mask                         0xFE

#define VRFS1                                    0x1
#define VRFS1_address                            0x11A
#define VRFS1_position                           0x1
#define VRFS1_size                               0x1
#define VRFS1_value_mask                         0x2
#define VRFS1_clear_mask                         0xFD

#define VRFS2                                    0x2
#define VRFS2_address                            0x11A
#define VRFS2_position                           0x2
#define VRFS2_size                               0x1
#define VRFS2_value_mask                         0x4
#define VRFS2_clear_mask                         0xFB

#define VRFS3                                    0x3
#define VRFS3_address                            0x11A
#define VRFS3_position                           0x3
#define VRFS3_size                               0x1
#define VRFS3_value_mask                         0x8
#define VRFS3_clear_mask                         0xF7

#define VRFS4                                    0x4
#define VRFS4_address                            0x11A
#define VRFS4_position                           0x4
#define VRFS4_size                               0x1
#define VRFS4_value_mask                         0x10
#define VRFS4_clear_mask                         0xEF


/*--------------------------------------------------#
| RAMPCAL                                     0x11B |
#---------------------------------------------------#
| - | - | - | RAMP4 | RAMP3 | RAMP2 | RAMP1 | RAMP0 |
#---------------------------------------------------#
| 7 | 6 | 5 | 4     | 3     | 2     | 1     | 0     |
#--------------------------------------------------*/

#define RAMPCAL                                  0x0
#define RAMPCAL_address                          0x11B
#define RAMPCAL_position                         0x0
#define RAMPCAL_size                             0x8
#define RAMPCAL_value_mask                       0xFF
#define RAMPCAL_clear_mask                       0x0

#define RAMP0                                    0x0
#define RAMP0_address                            0x11B
#define RAMP0_position                           0x0
#define RAMP0_size                               0x1
#define RAMP0_value_mask                         0x1
#define RAMP0_clear_mask                         0xFE

#define RAMP1                                    0x1
#define RAMP1_address                            0x11B
#define RAMP1_position                           0x1
#define RAMP1_size                               0x1
#define RAMP1_value_mask                         0x2
#define RAMP1_clear_mask                         0xFD

#define RAMP2                                    0x2
#define RAMP2_address                            0x11B
#define RAMP2_position                           0x2
#define RAMP2_size                               0x1
#define RAMP2_value_mask                         0x4
#define RAMP2_clear_mask                         0xFB

#define RAMP3                                    0x3
#define RAMP3_address                            0x11B
#define RAMP3_position                           0x3
#define RAMP3_size                               0x1
#define RAMP3_value_mask                         0x8
#define RAMP3_clear_mask                         0xF7

#define RAMP4                                    0x4
#define RAMP4_address                            0x11B
#define RAMP4_position                           0x4
#define RAMP4_size                               0x1
#define RAMP4_value_mask                         0x10
#define RAMP4_clear_mask                         0xEF


/*---------------------------------------------#
| CSRCAL                                 0x11C |
#----------------------------------------------#
| - | - | - | CSR4 | CSR3 | CSR2 | CSR1 | CSR0 |
#----------------------------------------------#
| 7 | 6 | 5 | 4    | 3    | 2    | 1    | 0    |
#---------------------------------------------*/

#define CSRCAL                                   0x0
#define CSRCAL_address                           0x11C
#define CSRCAL_position                          0x0
#define CSRCAL_size                              0x8
#define CSRCAL_value_mask                        0xFF
#define CSRCAL_clear_mask                        0x0

#define CSR0                                     0x0
#define CSR0_address                             0x11C
#define CSR0_position                            0x0
#define CSR0_size                                0x1
#define CSR0_value_mask                          0x1
#define CSR0_clear_mask                          0xFE

#define CSR1                                     0x1
#define CSR1_address                             0x11C
#define CSR1_position                            0x1
#define CSR1_size                                0x1
#define CSR1_value_mask                          0x2
#define CSR1_clear_mask                          0xFD

#define CSR2                                     0x2
#define CSR2_address                             0x11C
#define CSR2_position                            0x2
#define CSR2_size                                0x1
#define CSR2_value_mask                          0x4
#define CSR2_clear_mask                          0xFB

#define CSR3                                     0x3
#define CSR3_address                             0x11C
#define CSR3_position                            0x3
#define CSR3_size                                0x1
#define CSR3_value_mask                          0x8
#define CSR3_clear_mask                          0xF7

#define CSR4                                     0x4
#define CSR4_address                             0x11C
#define CSR4_position                            0x4
#define CSR4_size                                0x1
#define CSR4_value_mask                          0x10
#define CSR4_clear_mask                          0xEF


/*--------------------------------------------------#
| OVUVCAL                                     0x11D |
#---------------------------------------------------#
| - | - | - | OVUV4 | OVUV3 | OVUV2 | OVUV1 | OVUV0 |
#---------------------------------------------------#
| 7 | 6 | 5 | 4     | 3     | 2     | 1     | 0     |
#--------------------------------------------------*/

#define OVUVCAL                                  0x0
#define OVUVCAL_address                          0x11D
#define OVUVCAL_position                         0x0
#define OVUVCAL_size                             0x8
#define OVUVCAL_value_mask                       0xFF
#define OVUVCAL_clear_mask                       0x0

#define OVUV0                                    0x0
#define OVUV0_address                            0x11D
#define OVUV0_position                           0x0
#define OVUV0_size                               0x1
#define OVUV0_value_mask                         0x1
#define OVUV0_clear_mask                         0xFE

#define OVUV1                                    0x1
#define OVUV1_address                            0x11D
#define OVUV1_position                           0x1
#define OVUV1_size                               0x1
#define OVUV1_value_mask                         0x2
#define OVUV1_clear_mask                         0xFD

#define OVUV2                                    0x2
#define OVUV2_address                            0x11D
#define OVUV2_position                           0x2
#define OVUV2_size                               0x1
#define OVUV2_value_mask                         0x4
#define OVUV2_clear_mask                         0xFB

#define OVUV3                                    0x3
#define OVUV3_address                            0x11D
#define OVUV3_position                           0x3
#define OVUV3_size                               0x1
#define OVUV3_value_mask                         0x8
#define OVUV3_clear_mask                         0xF7

#define OVUV4                                    0x4
#define OVUV4_address                            0x11D
#define OVUV4_position                           0x4
#define OVUV4_size                               0x1
#define OVUV4_value_mask                         0x10
#define OVUV4_clear_mask                         0xEF


/*-------------------------------------------------------#
| DEMCAL                                           0x11E |
#--------------------------------------------------------#
| - | - | - | DEMOV4 | DEMOV3 | DEMOV2 | DEMOV1 | DEMOV0 |
#--------------------------------------------------------#
| 7 | 6 | 5 | 4      | 3      | 2      | 1      | 0      |
#-------------------------------------------------------*/

#define DEMCAL                                   0x0
#define DEMCAL_address                           0x11E
#define DEMCAL_position                          0x0
#define DEMCAL_size                              0x8
#define DEMCAL_value_mask                        0xFF
#define DEMCAL_clear_mask                        0x0

#define DEMOV0                                   0x0
#define DEMOV0_address                           0x11E
#define DEMOV0_position                          0x0
#define DEMOV0_size                              0x1
#define DEMOV0_value_mask                        0x1
#define DEMOV0_clear_mask                        0xFE

#define DEMOV1                                   0x1
#define DEMOV1_address                           0x11E
#define DEMOV1_position                          0x1
#define DEMOV1_size                              0x1
#define DEMOV1_value_mask                        0x2
#define DEMOV1_clear_mask                        0xFD

#define DEMOV2                                   0x2
#define DEMOV2_address                           0x11E
#define DEMOV2_position                          0x2
#define DEMOV2_size                              0x1
#define DEMOV2_value_mask                        0x4
#define DEMOV2_clear_mask                        0xFB

#define DEMOV3                                   0x3
#define DEMOV3_address                           0x11E
#define DEMOV3_position                          0x3
#define DEMOV3_size                              0x1
#define DEMOV3_value_mask                        0x8
#define DEMOV3_clear_mask                        0xF7

#define DEMOV4                                   0x4
#define DEMOV4_address                           0x11E
#define DEMOV4_position                          0x4
#define DEMOV4_size                              0x1
#define DEMOV4_value_mask                        0x10
#define DEMOV4_clear_mask                        0xEF


/*-------------------------------------------------------#
| HCSOVCAL                                         0x11F |
#--------------------------------------------------------#
| - | - | - | HCSOV4 | HCSOV3 | HCSOV2 | HCSOV1 | HCSOV0 |
#--------------------------------------------------------#
| 7 | 6 | 5 | 4      | 3      | 2      | 1      | 0      |
#-------------------------------------------------------*/

#define HCSOVCAL                                 0x0
#define HCSOVCAL_address                         0x11F
#define HCSOVCAL_position                        0x0
#define HCSOVCAL_size                            0x8
#define HCSOVCAL_value_mask                      0xFF
#define HCSOVCAL_clear_mask                      0x0

#define HCSOV0                                   0x0
#define HCSOV0_address                           0x11F
#define HCSOV0_position                          0x0
#define HCSOV0_size                              0x1
#define HCSOV0_value_mask                        0x1
#define HCSOV0_clear_mask                        0xFE

#define HCSOV1                                   0x1
#define HCSOV1_address                           0x11F
#define HCSOV1_position                          0x1
#define HCSOV1_size                              0x1
#define HCSOV1_value_mask                        0x2
#define HCSOV1_clear_mask                        0xFD

#define HCSOV2                                   0x2
#define HCSOV2_address                           0x11F
#define HCSOV2_position                          0x2
#define HCSOV2_size                              0x1
#define HCSOV2_value_mask                        0x4
#define HCSOV2_clear_mask                        0xFB

#define HCSOV3                                   0x3
#define HCSOV3_address                           0x11F
#define HCSOV3_position                          0x3
#define HCSOV3_size                              0x1
#define HCSOV3_value_mask                        0x8
#define HCSOV3_clear_mask                        0xF7

#define HCSOV4                                   0x4
#define HCSOV4_address                           0x11F
#define HCSOV4_position                          0x4
#define HCSOV4_size                              0x1
#define HCSOV4_value_mask                        0x10
#define HCSOV4_clear_mask                        0xEF


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


/*--------------------------------------------------------------#
| IOCB                                                    0x186 |
#---------------------------------------------------------------#
| IOCB7 | IOCB6 | IOCB5 | IOCB4 | IOCB3 | IOCB2 | IOCB1 | IOCB0 |
#---------------------------------------------------------------#
| 7     | 6     | 5     | 4     | 3     | 2     | 1     | 0     |
#--------------------------------------------------------------*/

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

#define IOCB3                                    0x3
#define IOCB3_address                            0x186
#define IOCB3_position                           0x3
#define IOCB3_size                               0x1
#define IOCB3_value_mask                         0x8
#define IOCB3_clear_mask                         0xF7

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


/*------------------------------------------#
| TTACAL                              0x196 |
#-------------------------------------------#
| - | - | - | - | TTA3 | TTA2 | TTA1 | TTA0 |
#-------------------------------------------#
| 7 | 6 | 5 | 4 | 3    | 2    | 1    | 0    |
#------------------------------------------*/

#define TTACAL                                   0x0
#define TTACAL_address                           0x196
#define TTACAL_position                          0x0
#define TTACAL_size                              0x8
#define TTACAL_value_mask                        0xFF
#define TTACAL_clear_mask                        0x0

#define TTA0                                     0x0
#define TTA0_address                             0x196
#define TTA0_position                            0x0
#define TTA0_size                                0x1
#define TTA0_value_mask                          0x1
#define TTA0_clear_mask                          0xFE

#define TTA1                                     0x1
#define TTA1_address                             0x196
#define TTA1_position                            0x1
#define TTA1_size                                0x1
#define TTA1_value_mask                          0x2
#define TTA1_clear_mask                          0xFD

#define TTA2                                     0x2
#define TTA2_address                             0x196
#define TTA2_position                            0x2
#define TTA2_size                                0x1
#define TTA2_value_mask                          0x4
#define TTA2_clear_mask                          0xFB

#define TTA3                                     0x3
#define TTA3_address                             0x196
#define TTA3_position                            0x3
#define TTA3_size                                0x1
#define TTA3_value_mask                          0x8
#define TTA3_clear_mask                          0xF7


/*----------------------------------------------------------#
| OSCCAL                                              0x197 |
#-----------------------------------------------------------#
| - | FCAL6 | FCAL5 | FCAL4 | FCAL3 | FCAL2 | FCAL1 | FCAL0 |
#-----------------------------------------------------------#
| 7 | 6     | 5     | 4     | 3     | 2     | 1     | 0     |
#----------------------------------------------------------*/

#define OSCCAL                                   0x0
#define OSCCAL_address                           0x197
#define OSCCAL_position                          0x0
#define OSCCAL_size                              0x8
#define OSCCAL_value_mask                        0xFF
#define OSCCAL_clear_mask                        0x0

#define FCAL0                                    0x0
#define FCAL0_address                            0x197
#define FCAL0_position                           0x0
#define FCAL0_size                               0x1
#define FCAL0_value_mask                         0x1
#define FCAL0_clear_mask                         0xFE

#define FCAL1                                    0x1
#define FCAL1_address                            0x197
#define FCAL1_position                           0x1
#define FCAL1_size                               0x1
#define FCAL1_value_mask                         0x2
#define FCAL1_clear_mask                         0xFD

#define FCAL2                                    0x2
#define FCAL2_address                            0x197
#define FCAL2_position                           0x2
#define FCAL2_size                               0x1
#define FCAL2_value_mask                         0x4
#define FCAL2_clear_mask                         0xFB

#define FCAL3                                    0x3
#define FCAL3_address                            0x197
#define FCAL3_position                           0x3
#define FCAL3_size                               0x1
#define FCAL3_value_mask                         0x8
#define FCAL3_clear_mask                         0xF7

#define FCAL4                                    0x4
#define FCAL4_address                            0x197
#define FCAL4_position                           0x4
#define FCAL4_size                               0x1
#define FCAL4_value_mask                         0x10
#define FCAL4_clear_mask                         0xEF

#define FCAL5                                    0x5
#define FCAL5_address                            0x197
#define FCAL5_position                           0x5
#define FCAL5_size                               0x1
#define FCAL5_value_mask                         0x20
#define FCAL5_clear_mask                         0xDF

#define FCAL6                                    0x6
#define FCAL6_address                            0x197
#define FCAL6_position                           0x6
#define FCAL6_size                               0x1
#define FCAL6_value_mask                         0x40
#define FCAL6_clear_mask                         0xBF


/*------------------------------------------#
| BGTCAL                              0x198 |
#-------------------------------------------#
| - | - | - | - | BGT3 | BGT2 | BGT1 | BGT0 |
#-------------------------------------------#
| 7 | 6 | 5 | 4 | 3    | 2    | 1    | 0    |
#------------------------------------------*/

#define BGTCAL                                   0x0
#define BGTCAL_address                           0x198
#define BGTCAL_position                          0x0
#define BGTCAL_size                              0x8
#define BGTCAL_value_mask                        0xFF
#define BGTCAL_clear_mask                        0x0

#define BGT0                                     0x0
#define BGT0_address                             0x198
#define BGT0_position                            0x0
#define BGT0_size                                0x1
#define BGT0_value_mask                          0x1
#define BGT0_clear_mask                          0xFE

#define BGT1                                     0x1
#define BGT1_address                             0x198
#define BGT1_position                            0x1
#define BGT1_size                                0x1
#define BGT1_value_mask                          0x2
#define BGT1_clear_mask                          0xFD

#define BGT2                                     0x2
#define BGT2_address                             0x198
#define BGT2_position                            0x2
#define BGT2_size                                0x1
#define BGT2_value_mask                          0x4
#define BGT2_clear_mask                          0xFB

#define BGT3                                     0x3
#define BGT3_address                             0x198
#define BGT3_position                            0x3
#define BGT3_size                                0x1
#define BGT3_value_mask                          0x8
#define BGT3_clear_mask                          0xF7


/*------------------------------------------------#
| BGRCAL                                    0x199 |
#-------------------------------------------------#
| - | - | BGR5 | BGR4 | BGR3 | BGR2 | BGR1 | BGR0 |
#-------------------------------------------------#
| 7 | 6 | 5    | 4    | 3    | 2    | 1    | 0    |
#------------------------------------------------*/

#define BGRCAL                                   0x0
#define BGRCAL_address                           0x199
#define BGRCAL_position                          0x0
#define BGRCAL_size                              0x8
#define BGRCAL_value_mask                        0xFF
#define BGRCAL_clear_mask                        0x0

#define BGR0                                     0x0
#define BGR0_address                             0x199
#define BGR0_position                            0x0
#define BGR0_size                                0x1
#define BGR0_value_mask                          0x1
#define BGR0_clear_mask                          0xFE

#define BGR1                                     0x1
#define BGR1_address                             0x199
#define BGR1_position                            0x1
#define BGR1_size                                0x1
#define BGR1_value_mask                          0x2
#define BGR1_clear_mask                          0xFD

#define BGR2                                     0x2
#define BGR2_address                             0x199
#define BGR2_position                            0x2
#define BGR2_size                                0x1
#define BGR2_value_mask                          0x4
#define BGR2_clear_mask                          0xFB

#define BGR3                                     0x3
#define BGR3_address                             0x199
#define BGR3_position                            0x3
#define BGR3_size                                0x1
#define BGR3_value_mask                          0x8
#define BGR3_clear_mask                          0xF7

#define BGR4                                     0x4
#define BGR4_address                             0x199
#define BGR4_position                            0x4
#define BGR4_size                                0x1
#define BGR4_value_mask                          0x10
#define BGR4_clear_mask                          0xEF

#define BGR5                                     0x5
#define BGR5_address                             0x199
#define BGR5_position                            0x5
#define BGR5_size                                0x1
#define BGR5_value_mask                          0x20
#define BGR5_clear_mask                          0xDF


/*----------------------------------------------#
| AVDDCAL                                 0x19A |
#-----------------------------------------------#
| - | - | - | - | AVDD3 | AVDD2 | AVDD1 | AVDD0 |
#-----------------------------------------------#
| 7 | 6 | 5 | 4 | 3     | 2     | 1     | 0     |
#----------------------------------------------*/

#define AVDDCAL                                  0x0
#define AVDDCAL_address                          0x19A
#define AVDDCAL_position                         0x0
#define AVDDCAL_size                             0x8
#define AVDDCAL_value_mask                       0xFF
#define AVDDCAL_clear_mask                       0x0

#define AVDD0                                    0x0
#define AVDD0_address                            0x19A
#define AVDD0_position                           0x0
#define AVDD0_size                               0x1
#define AVDD0_value_mask                         0x1
#define AVDD0_clear_mask                         0xFE

#define AVDD1                                    0x1
#define AVDD1_address                            0x19A
#define AVDD1_position                           0x1
#define AVDD1_size                               0x1
#define AVDD1_value_mask                         0x2
#define AVDD1_clear_mask                         0xFD

#define AVDD2                                    0x2
#define AVDD2_address                            0x19A
#define AVDD2_position                           0x2
#define AVDD2_size                               0x1
#define AVDD2_value_mask                         0x4
#define AVDD2_clear_mask                         0xFB

#define AVDD3                                    0x3
#define AVDD3_address                            0x19A
#define AVDD3_position                           0x3
#define AVDD3_size                               0x1
#define AVDD3_value_mask                         0x8
#define AVDD3_clear_mask                         0xF7


/*--------------------------------------------------#
| VOURCAL                                     0x19B |
#---------------------------------------------------#
| - | - | - | VOUR4 | VOUR3 | VOUR2 | VOUR1 | VOUR0 |
#---------------------------------------------------#
| 7 | 6 | 5 | 4     | 3     | 2     | 1     | 0     |
#--------------------------------------------------*/

#define VOURCAL                                  0x0
#define VOURCAL_address                          0x19B
#define VOURCAL_position                         0x0
#define VOURCAL_size                             0x8
#define VOURCAL_value_mask                       0xFF
#define VOURCAL_clear_mask                       0x0

#define VOUR0                                    0x0
#define VOUR0_address                            0x19B
#define VOUR0_position                           0x0
#define VOUR0_size                               0x1
#define VOUR0_value_mask                         0x1
#define VOUR0_clear_mask                         0xFE

#define VOUR1                                    0x1
#define VOUR1_address                            0x19B
#define VOUR1_position                           0x1
#define VOUR1_size                               0x1
#define VOUR1_value_mask                         0x2
#define VOUR1_clear_mask                         0xFD

#define VOUR2                                    0x2
#define VOUR2_address                            0x19B
#define VOUR2_position                           0x2
#define VOUR2_size                               0x1
#define VOUR2_value_mask                         0x4
#define VOUR2_clear_mask                         0xFB

#define VOUR3                                    0x3
#define VOUR3_address                            0x19B
#define VOUR3_position                           0x3
#define VOUR3_size                               0x1
#define VOUR3_value_mask                         0x8
#define VOUR3_clear_mask                         0xF7

#define VOUR4                                    0x4
#define VOUR4_address                            0x19B
#define VOUR4_position                           0x4
#define VOUR4_size                               0x1
#define VOUR4_value_mask                         0x10
#define VOUR4_clear_mask                         0xEF


/*---------------------------------------------#
| DOVCAL                                 0x19C |
#----------------------------------------------#
| - | - | - | DOV4 | DOV3 | DOV2 | DOV1 | DOV0 |
#----------------------------------------------#
| 7 | 6 | 5 | 4    | 3    | 2    | 1    | 0    |
#---------------------------------------------*/

#define DOVCAL                                   0x0
#define DOVCAL_address                           0x19C
#define DOVCAL_position                          0x0
#define DOVCAL_size                              0x8
#define DOVCAL_value_mask                        0xFF
#define DOVCAL_clear_mask                        0x0

#define DOV0                                     0x0
#define DOV0_address                             0x19C
#define DOV0_position                            0x0
#define DOV0_size                                0x1
#define DOV0_value_mask                          0x1
#define DOV0_clear_mask                          0xFE

#define DOV1                                     0x1
#define DOV1_address                             0x19C
#define DOV1_position                            0x1
#define DOV1_size                                0x1
#define DOV1_value_mask                          0x2
#define DOV1_clear_mask                          0xFD

#define DOV2                                     0x2
#define DOV2_address                             0x19C
#define DOV2_position                            0x2
#define DOV2_size                                0x1
#define DOV2_value_mask                          0x4
#define DOV2_clear_mask                          0xFB

#define DOV3                                     0x3
#define DOV3_address                             0x19C
#define DOV3_position                            0x3
#define DOV3_size                                0x1
#define DOV3_value_mask                          0x8
#define DOV3_clear_mask                          0xF7

#define DOV4                                     0x4
#define DOV4_address                             0x19C
#define DOV4_position                            0x4
#define DOV4_size                                0x1
#define DOV4_value_mask                          0x10
#define DOV4_clear_mask                          0xEF


/*--------------------------------------------------#
| VEAOCAL                                     0x19D |
#---------------------------------------------------#
| - | - | - | VEAO4 | VEAO3 | VEAO2 | VEAO1 | VEAO0 |
#---------------------------------------------------#
| 7 | 6 | 5 | 4     | 3     | 2     | 1     | 0     |
#--------------------------------------------------*/

#define VEAOCAL                                  0x0
#define VEAOCAL_address                          0x19D
#define VEAOCAL_position                         0x0
#define VEAOCAL_size                             0x8
#define VEAOCAL_value_mask                       0xFF
#define VEAOCAL_clear_mask                       0x0

#define VEAO0                                    0x0
#define VEAO0_address                            0x19D
#define VEAO0_position                           0x0
#define VEAO0_size                               0x1
#define VEAO0_value_mask                         0x1
#define VEAO0_clear_mask                         0xFE

#define VEAO1                                    0x1
#define VEAO1_address                            0x19D
#define VEAO1_position                           0x1
#define VEAO1_size                               0x1
#define VEAO1_value_mask                         0x2
#define VEAO1_clear_mask                         0xFD

#define VEAO2                                    0x2
#define VEAO2_address                            0x19D
#define VEAO2_position                           0x2
#define VEAO2_size                               0x1
#define VEAO2_value_mask                         0x4
#define VEAO2_clear_mask                         0xFB

#define VEAO3                                    0x3
#define VEAO3_address                            0x19D
#define VEAO3_position                           0x3
#define VEAO3_size                               0x1
#define VEAO3_value_mask                         0x8
#define VEAO3_clear_mask                         0xF7

#define VEAO4                                    0x4
#define VEAO4_address                            0x19D
#define VEAO4_position                           0x4
#define VEAO4_size                               0x1
#define VEAO4_value_mask                         0x10
#define VEAO4_clear_mask                         0xEF


/*------------------------------------------------------------#
| BUFFCON                                               0x19E |
#-------------------------------------------------------------#
| BNCHEN | DIGOEN | - | DSEL4 | DSEL3 | DSEL2 | DSEL1 | DSEL0 |
#-------------------------------------------------------------#
| 7      | 6      | 5 | 4     | 3     | 2     | 1     | 0     |
#------------------------------------------------------------*/

#define BUFFCON                                  0x0
#define BUFFCON_address                          0x19E
#define BUFFCON_position                         0x0
#define BUFFCON_size                             0x8
#define BUFFCON_value_mask                       0xFF
#define BUFFCON_clear_mask                       0x0

#define DSEL0                                    0x0
#define DSEL0_address                            0x19E
#define DSEL0_position                           0x0
#define DSEL0_size                               0x1
#define DSEL0_value_mask                         0x1
#define DSEL0_clear_mask                         0xFE

#define DSEL1                                    0x1
#define DSEL1_address                            0x19E
#define DSEL1_position                           0x1
#define DSEL1_size                               0x1
#define DSEL1_value_mask                         0x2
#define DSEL1_clear_mask                         0xFD

#define DSEL2                                    0x2
#define DSEL2_address                            0x19E
#define DSEL2_position                           0x2
#define DSEL2_size                               0x1
#define DSEL2_value_mask                         0x4
#define DSEL2_clear_mask                         0xFB

#define DSEL3                                    0x3
#define DSEL3_address                            0x19E
#define DSEL3_position                           0x3
#define DSEL3_size                               0x1
#define DSEL3_value_mask                         0x8
#define DSEL3_clear_mask                         0xF7

#define DSEL4                                    0x4
#define DSEL4_address                            0x19E
#define DSEL4_position                           0x4
#define DSEL4_size                               0x1
#define DSEL4_value_mask                         0x10
#define DSEL4_clear_mask                         0xEF

#define DIGOEN                                   0x6
#define DIGOEN_address                           0x19E
#define DIGOEN_position                          0x6
#define DIGOEN_size                              0x1
#define DIGOEN_value_mask                        0x40
#define DIGOEN_clear_mask                        0xBF

#define BNCHEN                                   0x7
#define BNCHEN_address                           0x19E
#define BNCHEN_position                          0x7
#define BNCHEN_size                              0x1
#define BNCHEN_value_mask                        0x80
#define BNCHEN_clear_mask                        0x7F


/*-----------------------------------------------------------#
| ATSTCON                                              0x19F |
#------------------------------------------------------------#
| EACLKEN | - | - | AVDDTSEN | - | RAWIBY | TMPTBY | SWFRQEN |
#------------------------------------------------------------#
| 7       | 6 | 5 | 4        | 3 | 2      | 1      | 0       |
#-----------------------------------------------------------*/

#define ATSTCON                                  0x0
#define ATSTCON_address                          0x19F
#define ATSTCON_position                         0x0
#define ATSTCON_size                             0x8
#define ATSTCON_value_mask                       0xFF
#define ATSTCON_clear_mask                       0x0

#define SWFRQEN                                  0x0
#define SWFRQEN_address                          0x19F
#define SWFRQEN_position                         0x0
#define SWFRQEN_size                             0x1
#define SWFRQEN_value_mask                       0x1
#define SWFRQEN_clear_mask                       0xFE

#define TMPTBY                                   0x1
#define TMPTBY_address                           0x19F
#define TMPTBY_position                          0x1
#define TMPTBY_size                              0x1
#define TMPTBY_value_mask                        0x2
#define TMPTBY_clear_mask                        0xFD

#define RAWIBY                                   0x2
#define RAWIBY_address                           0x19F
#define RAWIBY_position                          0x2
#define RAWIBY_size                              0x1
#define RAWIBY_value_mask                        0x4
#define RAWIBY_clear_mask                        0xFB

#define AVDDTSEN                                 0x4
#define AVDDTSEN_address                         0x19F
#define AVDDTSEN_position                        0x4
#define AVDDTSEN_size                            0x1
#define AVDDTSEN_value_mask                      0x10
#define AVDDTSEN_clear_mask                      0xEF

#define EACLKEN                                  0x7
#define EACLKEN_address                          0x19F
#define EACLKEN_position                         0x7
#define EACLKEN_size                             0x1
#define EACLKEN_value_mask                       0x80
#define EACLKEN_clear_mask                       0x7F

#endif // _MCP19121_H_
