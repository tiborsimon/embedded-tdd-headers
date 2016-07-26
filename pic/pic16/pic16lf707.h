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

#ifndef _PIC16LF707_H_
#define _PIC16LF707_H_


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


/*-----------------------------------------------------#
| PORTA                                            0x5 |
#------------------------------------------------------#
| CLKIN | CLKOUT | AN4 | TACKI | AN3 | AN2 | AN1 | AN0 |
#------------------------------------------------------#
| 7     | 6      | 5   | 4     | 3   | 2   | 1   | 0   |
#-----------------------------------------------------*/

#define PORTA                                    0x0
#define PORTA_address                            0x005
#define PORTA_position                           0x0
#define PORTA_size                               0x8
#define PORTA_value_mask                         0xFF
#define PORTA_clear_mask                         0x0

#define AN0                                      0x0
#define AN0_address                              0x005
#define AN0_position                             0x0
#define AN0_size                                 0x1
#define AN0_value_mask                           0x1
#define AN0_clear_mask                           0xFE

#define RA0                                      0x0
#define RA0_address                              0x005
#define RA0_position                             0x0
#define RA0_size                                 0x1
#define RA0_value_mask                           0x1
#define RA0_clear_mask                           0xFE

#define AN1                                      0x1
#define AN1_address                              0x005
#define AN1_position                             0x1
#define AN1_size                                 0x1
#define AN1_value_mask                           0x2
#define AN1_clear_mask                           0xFD

#define RA1                                      0x1
#define RA1_address                              0x005
#define RA1_position                             0x1
#define RA1_size                                 0x1
#define RA1_value_mask                           0x2
#define RA1_clear_mask                           0xFD

#define CPSA0                                    0x1
#define CPSA0_address                            0x005
#define CPSA0_position                           0x1
#define CPSA0_size                               0x1
#define CPSA0_value_mask                         0x2
#define CPSA0_clear_mask                         0xFD

#define AN2                                      0x2
#define AN2_address                              0x005
#define AN2_position                             0x2
#define AN2_size                                 0x1
#define AN2_value_mask                           0x4
#define AN2_clear_mask                           0xFB

#define DACOUT                                   0x2
#define DACOUT_address                           0x005
#define DACOUT_position                          0x2
#define DACOUT_size                              0x1
#define DACOUT_value_mask                        0x4
#define DACOUT_clear_mask                        0xFB

#define RA2                                      0x2
#define RA2_address                              0x005
#define RA2_position                             0x2
#define RA2_size                                 0x1
#define RA2_value_mask                           0x4
#define RA2_clear_mask                           0xFB

#define CPSA1                                    0x2
#define CPSA1_address                            0x005
#define CPSA1_position                           0x2
#define CPSA1_size                               0x1
#define CPSA1_value_mask                         0x4
#define CPSA1_clear_mask                         0xFB

#define AN3                                      0x3
#define AN3_address                              0x005
#define AN3_position                             0x3
#define AN3_size                                 0x1
#define AN3_value_mask                           0x8
#define AN3_clear_mask                           0xF7

#define RA3                                      0x3
#define RA3_address                              0x005
#define RA3_position                             0x3
#define RA3_size                                 0x1
#define RA3_value_mask                           0x8
#define RA3_clear_mask                           0xF7

#define CPSA2                                    0x3
#define CPSA2_address                            0x005
#define CPSA2_position                           0x3
#define CPSA2_size                               0x1
#define CPSA2_value_mask                         0x8
#define CPSA2_clear_mask                         0xF7

#define TACKI                                    0x4
#define TACKI_address                            0x005
#define TACKI_position                           0x4
#define TACKI_size                               0x1
#define TACKI_value_mask                         0x10
#define TACKI_clear_mask                         0xEF

#define T0CKI                                    0x4
#define T0CKI_address                            0x005
#define T0CKI_position                           0x4
#define T0CKI_size                               0x1
#define T0CKI_value_mask                         0x10
#define T0CKI_clear_mask                         0xEF

#define RA4                                      0x4
#define RA4_address                              0x005
#define RA4_position                             0x4
#define RA4_size                                 0x1
#define RA4_value_mask                           0x10
#define RA4_clear_mask                           0xEF

#define CPSA3                                    0x4
#define CPSA3_address                            0x005
#define CPSA3_position                           0x4
#define CPSA3_size                               0x1
#define CPSA3_value_mask                         0x10
#define CPSA3_clear_mask                         0xEF

#define AN4                                      0x5
#define AN4_address                              0x005
#define AN4_position                             0x5
#define AN4_size                                 0x1
#define AN4_value_mask                           0x20
#define AN4_clear_mask                           0xDF

#define RA5                                      0x5
#define RA5_address                              0x005
#define RA5_position                             0x5
#define RA5_size                                 0x1
#define RA5_value_mask                           0x20
#define RA5_clear_mask                           0xDF

#define CPSA4                                    0x5
#define CPSA4_address                            0x005
#define CPSA4_position                           0x5
#define CPSA4_size                               0x1
#define CPSA4_value_mask                         0x20
#define CPSA4_clear_mask                         0xDF

#define CLKOUT                                   0x6
#define CLKOUT_address                           0x005
#define CLKOUT_position                          0x6
#define CLKOUT_size                              0x1
#define CLKOUT_value_mask                        0x40
#define CLKOUT_clear_mask                        0xBF

#define CPSB1                                    0x6
#define CPSB1_address                            0x005
#define CPSB1_position                           0x6
#define CPSB1_size                               0x1
#define CPSB1_value_mask                         0x40
#define CPSB1_clear_mask                         0xBF

#define RA6                                      0x6
#define RA6_address                              0x005
#define RA6_position                             0x6
#define RA6_size                                 0x1
#define RA6_value_mask                           0x40
#define RA6_clear_mask                           0xBF

#define OSC2                                     0x6
#define OSC2_address                             0x005
#define OSC2_position                            0x6
#define OSC2_size                                0x1
#define OSC2_value_mask                          0x40
#define OSC2_clear_mask                          0xBF

#define CLKIN                                    0x7
#define CLKIN_address                            0x005
#define CLKIN_position                           0x7
#define CLKIN_size                               0x1
#define CLKIN_value_mask                         0x80
#define CLKIN_clear_mask                         0x7F

#define CPSB0                                    0x7
#define CPSB0_address                            0x005
#define CPSB0_position                           0x7
#define CPSB0_size                               0x1
#define CPSB0_value_mask                         0x80
#define CPSB0_clear_mask                         0x7F

#define RA7                                      0x7
#define RA7_address                              0x005
#define RA7_position                             0x7
#define RA7_size                                 0x1
#define RA7_value_mask                           0x80
#define RA7_clear_mask                           0x7F

#define OSC1                                     0x7
#define OSC1_address                             0x005
#define OSC1_position                            0x7
#define OSC1_size                                0x1
#define OSC1_value_mask                          0x80
#define OSC1_clear_mask                          0x7F


/*----------------------------------------------------#
| PORTB                                           0x6 |
#-----------------------------------------------------#
| RB7 | RB6 | T3CKI | RB4 | AN9 | AN8 | CPSB9 | CPSB8 |
#-----------------------------------------------------#
| 7   | 6   | 5     | 4   | 3   | 2   | 1     | 0     |
#----------------------------------------------------*/

#define PORTB                                    0x0
#define PORTB_address                            0x006
#define PORTB_position                           0x0
#define PORTB_size                               0x8
#define PORTB_value_mask                         0xFF
#define PORTB_clear_mask                         0x0

#define CPSB8                                    0x0
#define CPSB8_address                            0x006
#define CPSB8_position                           0x0
#define CPSB8_size                               0x1
#define CPSB8_value_mask                         0x1
#define CPSB8_clear_mask                         0xFE

#define RB0                                      0x0
#define RB0_address                              0x006
#define RB0_position                             0x0
#define RB0_size                                 0x1
#define RB0_value_mask                           0x1
#define RB0_clear_mask                           0xFE

#define AN12                                     0x0
#define AN12_address                             0x006
#define AN12_position                            0x0
#define AN12_size                                0x1
#define AN12_value_mask                          0x1
#define AN12_clear_mask                          0xFE

#define CPSB9                                    0x1
#define CPSB9_address                            0x006
#define CPSB9_position                           0x1
#define CPSB9_size                               0x1
#define CPSB9_value_mask                         0x2
#define CPSB9_clear_mask                         0xFD

#define RB1                                      0x1
#define RB1_address                              0x006
#define RB1_position                             0x1
#define RB1_size                                 0x1
#define RB1_value_mask                           0x2
#define RB1_clear_mask                           0xFD

#define AN10                                     0x1
#define AN10_address                             0x006
#define AN10_position                            0x1
#define AN10_size                                0x1
#define AN10_value_mask                          0x2
#define AN10_clear_mask                          0xFD

#define AN8                                      0x2
#define AN8_address                              0x006
#define AN8_position                             0x2
#define AN8_size                                 0x1
#define AN8_value_mask                           0x4
#define AN8_clear_mask                           0xFB

#define RB2                                      0x2
#define RB2_address                              0x006
#define RB2_position                             0x2
#define RB2_size                                 0x1
#define RB2_value_mask                           0x4
#define RB2_clear_mask                           0xFB

#define CPSB10                                   0x2
#define CPSB10_address                           0x006
#define CPSB10_position                          0x2
#define CPSB10_size                              0x1
#define CPSB10_value_mask                        0x4
#define CPSB10_clear_mask                        0xFB

#define AN9                                      0x3
#define AN9_address                              0x006
#define AN9_position                             0x3
#define AN9_size                                 0x1
#define AN9_value_mask                           0x8
#define AN9_clear_mask                           0xF7

#define RB3                                      0x3
#define RB3_address                              0x006
#define RB3_position                             0x3
#define RB3_size                                 0x1
#define RB3_value_mask                           0x8
#define RB3_clear_mask                           0xF7

#define PORTB_CCP2                               0x3
#define PORTB_CCP2_address                       0x006
#define PORTB_CCP2_position                      0x3
#define PORTB_CCP2_size                          0x1
#define PORTB_CCP2_value_mask                    0x8
#define PORTB_CCP2_clear_mask                    0xF7

#define CPSB11                                   0x3
#define CPSB11_address                           0x006
#define CPSB11_position                          0x3
#define CPSB11_size                              0x1
#define CPSB11_value_mask                        0x8
#define CPSB11_clear_mask                        0xF7

#define RB4                                      0x4
#define RB4_address                              0x006
#define RB4_position                             0x4
#define RB4_size                                 0x1
#define RB4_value_mask                           0x10
#define RB4_clear_mask                           0xEF

#define AN11                                     0x4
#define AN11_address                             0x006
#define AN11_position                            0x4
#define AN11_size                                0x1
#define AN11_value_mask                          0x10
#define AN11_clear_mask                          0xEF

#define CPSB12                                   0x4
#define CPSB12_address                           0x006
#define CPSB12_position                          0x4
#define CPSB12_size                              0x1
#define CPSB12_value_mask                        0x10
#define CPSB12_clear_mask                        0xEF

#define T3CKI                                    0x5
#define T3CKI_address                            0x006
#define T3CKI_position                           0x5
#define T3CKI_size                               0x1
#define T3CKI_value_mask                         0x20
#define T3CKI_clear_mask                         0xDF

#define RB5                                      0x5
#define RB5_address                              0x006
#define RB5_position                             0x5
#define RB5_size                                 0x1
#define RB5_value_mask                           0x20
#define RB5_clear_mask                           0xDF

#define T1G                                      0x5
#define T1G_address                              0x006
#define T1G_position                             0x5
#define T1G_size                                 0x1
#define T1G_value_mask                           0x20
#define T1G_clear_mask                           0xDF

#define AN13                                     0x5
#define AN13_address                             0x006
#define AN13_position                            0x5
#define AN13_size                                0x1
#define AN13_value_mask                          0x20
#define AN13_clear_mask                          0xDF

#define CPSB13                                   0x5
#define CPSB13_address                           0x006
#define CPSB13_position                          0x5
#define CPSB13_size                              0x1
#define CPSB13_value_mask                        0x20
#define CPSB13_clear_mask                        0xDF

#define RB6                                      0x6
#define RB6_address                              0x006
#define RB6_position                             0x6
#define RB6_size                                 0x1
#define RB6_value_mask                           0x40
#define RB6_clear_mask                           0xBF

#define CPSB14                                   0x6
#define CPSB14_address                           0x006
#define CPSB14_position                          0x6
#define CPSB14_size                              0x1
#define CPSB14_value_mask                        0x40
#define CPSB14_clear_mask                        0xBF

#define RB7                                      0x7
#define RB7_address                              0x006
#define RB7_position                             0x7
#define RB7_size                                 0x1
#define RB7_value_mask                           0x80
#define RB7_clear_mask                           0x7F

#define CPSB15                                   0x7
#define CPSB15_address                           0x006
#define CPSB15_position                          0x7
#define CPSB15_size                              0x1
#define CPSB15_value_mask                        0x80
#define CPSB15_clear_mask                        0x7F


/*-----------------------------------------------------------#
| PORTC                                                  0x7 |
#------------------------------------------------------------#
| CPSA11 | CPSA10 | CPSA9 | RC4 | SCL | CCP1 | CPSB3 | CPSB2 |
#------------------------------------------------------------#
| 7      | 6      | 5     | 4   | 3   | 2    | 1     | 0     |
#-----------------------------------------------------------*/

#define PORTC                                    0x0
#define PORTC_address                            0x007
#define PORTC_position                           0x0
#define PORTC_size                               0x8
#define PORTC_value_mask                         0xFF
#define PORTC_clear_mask                         0x0

#define CPSB2                                    0x0
#define CPSB2_address                            0x007
#define CPSB2_position                           0x0
#define CPSB2_size                               0x1
#define CPSB2_value_mask                         0x1
#define CPSB2_clear_mask                         0xFE

#define T1CKI                                    0x0
#define T1CKI_address                            0x007
#define T1CKI_position                           0x0
#define T1CKI_size                               0x1
#define T1CKI_value_mask                         0x1
#define T1CKI_clear_mask                         0xFE

#define T1OSO                                    0x0
#define T1OSO_address                            0x007
#define T1OSO_position                           0x0
#define T1OSO_size                               0x1
#define T1OSO_value_mask                         0x1
#define T1OSO_clear_mask                         0xFE

#define RC0                                      0x0
#define RC0_address                              0x007
#define RC0_position                             0x0
#define RC0_size                                 0x1
#define RC0_value_mask                           0x1
#define RC0_clear_mask                           0xFE

#define CPSB3                                    0x1
#define CPSB3_address                            0x007
#define CPSB3_position                           0x1
#define CPSB3_size                               0x1
#define CPSB3_value_mask                         0x2
#define CPSB3_clear_mask                         0xFD

#define PORTC_CCP2                               0x1
#define PORTC_CCP2_address                       0x007
#define PORTC_CCP2_position                      0x1
#define PORTC_CCP2_size                          0x1
#define PORTC_CCP2_value_mask                    0x2
#define PORTC_CCP2_clear_mask                    0xFD

#define T1OSI                                    0x1
#define T1OSI_address                            0x007
#define T1OSI_position                           0x1
#define T1OSI_size                               0x1
#define T1OSI_value_mask                         0x2
#define T1OSI_clear_mask                         0xFD

#define RC1                                      0x1
#define RC1_address                              0x007
#define RC1_position                             0x1
#define RC1_size                                 0x1
#define RC1_value_mask                           0x2
#define RC1_clear_mask                           0xFD

#define CCP1                                     0x2
#define CCP1_address                             0x007
#define CCP1_position                            0x2
#define CCP1_size                                0x1
#define CCP1_value_mask                          0x4
#define CCP1_clear_mask                          0xFB

#define CPSB4                                    0x2
#define CPSB4_address                            0x007
#define CPSB4_position                           0x2
#define CPSB4_size                               0x1
#define CPSB4_value_mask                         0x4
#define CPSB4_clear_mask                         0xFB

#define TBCKI                                    0x2
#define TBCKI_address                            0x007
#define TBCKI_position                           0x2
#define TBCKI_size                               0x1
#define TBCKI_value_mask                         0x4
#define TBCKI_clear_mask                         0xFB

#define RC2                                      0x2
#define RC2_address                              0x007
#define RC2_position                             0x2
#define RC2_size                                 0x1
#define RC2_value_mask                           0x4
#define RC2_clear_mask                           0xFB

#define SCL                                      0x3
#define SCL_address                              0x007
#define SCL_position                             0x3
#define SCL_size                                 0x1
#define SCL_value_mask                           0x8
#define SCL_clear_mask                           0xF7

#define SCK                                      0x3
#define SCK_address                              0x007
#define SCK_position                             0x3
#define SCK_size                                 0x1
#define SCK_value_mask                           0x8
#define SCK_clear_mask                           0xF7

#define RC3                                      0x3
#define RC3_address                              0x007
#define RC3_position                             0x3
#define RC3_size                                 0x1
#define RC3_value_mask                           0x8
#define RC3_clear_mask                           0xF7

#define RC4                                      0x4
#define RC4_address                              0x007
#define RC4_position                             0x4
#define RC4_size                                 0x1
#define RC4_value_mask                           0x10
#define RC4_clear_mask                           0xEF

#define SDA                                      0x4
#define SDA_address                              0x007
#define SDA_position                             0x4
#define SDA_size                                 0x1
#define SDA_value_mask                           0x10
#define SDA_clear_mask                           0xEF

#define SDI                                      0x4
#define SDI_address                              0x007
#define SDI_position                             0x4
#define SDI_size                                 0x1
#define SDI_value_mask                           0x10
#define SDI_clear_mask                           0xEF

#define CPSA9                                    0x5
#define CPSA9_address                            0x007
#define CPSA9_position                           0x5
#define CPSA9_size                               0x1
#define CPSA9_value_mask                         0x20
#define CPSA9_clear_mask                         0xDF

#define RC5                                      0x5
#define RC5_address                              0x007
#define RC5_position                             0x5
#define RC5_size                                 0x1
#define RC5_value_mask                           0x20
#define RC5_clear_mask                           0xDF

#define SDO                                      0x5
#define SDO_address                              0x007
#define SDO_position                             0x5
#define SDO_size                                 0x1
#define SDO_value_mask                           0x20
#define SDO_clear_mask                           0xDF

#define CPSA10                                   0x6
#define CPSA10_address                           0x007
#define CPSA10_position                          0x6
#define CPSA10_size                              0x1
#define CPSA10_value_mask                        0x40
#define CPSA10_clear_mask                        0xBF

#define TX                                       0x6
#define TX_address                               0x007
#define TX_position                              0x6
#define TX_size                                  0x1
#define TX_value_mask                            0x40
#define TX_clear_mask                            0xBF

#define CK                                       0x6
#define CK_address                               0x007
#define CK_position                              0x6
#define CK_size                                  0x1
#define CK_value_mask                            0x40
#define CK_clear_mask                            0xBF

#define RC6                                      0x6
#define RC6_address                              0x007
#define RC6_position                             0x6
#define RC6_size                                 0x1
#define RC6_value_mask                           0x40
#define RC6_clear_mask                           0xBF

#define CPSA11                                   0x7
#define CPSA11_address                           0x007
#define CPSA11_position                          0x7
#define CPSA11_size                              0x1
#define CPSA11_value_mask                        0x80
#define CPSA11_clear_mask                        0x7F

#define DT                                       0x7
#define DT_address                               0x007
#define DT_position                              0x7
#define DT_size                                  0x1
#define DT_value_mask                            0x80
#define DT_clear_mask                            0x7F

#define RX                                       0x7
#define RX_address                               0x007
#define RX_position                              0x7
#define RX_size                                  0x1
#define RX_value_mask                            0x80
#define RX_clear_mask                            0x7F

#define RC7                                      0x7
#define RC7_address                              0x007
#define RC7_position                             0x7
#define RC7_size                                 0x1
#define RC7_value_mask                           0x80
#define RC7_clear_mask                           0x7F


/*----------------------------------------------#
| PORTD                                     0x8 |
#-----------------------------------------------#
| RD7 | RD6 | RD5 | RD4 | RD3 | RD2 | RD1 | RD0 |
#-----------------------------------------------#
| 7   | 6   | 5   | 4   | 3   | 2   | 1   | 0   |
#----------------------------------------------*/

#define PORTD                                    0x0
#define PORTD_address                            0x008
#define PORTD_position                           0x0
#define PORTD_size                               0x8
#define PORTD_value_mask                         0xFF
#define PORTD_clear_mask                         0x0

#define RD0                                      0x0
#define RD0_address                              0x008
#define RD0_position                             0x0
#define RD0_size                                 0x1
#define RD0_value_mask                           0x1
#define RD0_clear_mask                           0xFE

#define CPSB5                                    0x0
#define CPSB5_address                            0x008
#define CPSB5_position                           0x0
#define CPSB5_size                               0x1
#define CPSB5_value_mask                         0x1
#define CPSB5_clear_mask                         0xFE

#define T3G                                      0x0
#define T3G_address                              0x008
#define T3G_position                             0x0
#define T3G_size                                 0x1
#define T3G_value_mask                           0x1
#define T3G_clear_mask                           0xFE

#define RD1                                      0x1
#define RD1_address                              0x008
#define RD1_position                             0x1
#define RD1_size                                 0x1
#define RD1_value_mask                           0x2
#define RD1_clear_mask                           0xFD

#define CPSB6                                    0x1
#define CPSB6_address                            0x008
#define CPSB6_position                           0x1
#define CPSB6_size                               0x1
#define CPSB6_value_mask                         0x2
#define CPSB6_clear_mask                         0xFD

#define RD2                                      0x2
#define RD2_address                              0x008
#define RD2_position                             0x2
#define RD2_size                                 0x1
#define RD2_value_mask                           0x4
#define RD2_clear_mask                           0xFB

#define CPSB7                                    0x2
#define CPSB7_address                            0x008
#define CPSB7_position                           0x2
#define CPSB7_size                               0x1
#define CPSB7_value_mask                         0x4
#define CPSB7_clear_mask                         0xFB

#define RD3                                      0x3
#define RD3_address                              0x008
#define RD3_position                             0x3
#define RD3_size                                 0x1
#define RD3_value_mask                           0x8
#define RD3_clear_mask                           0xF7

#define CPSA8                                    0x3
#define CPSA8_address                            0x008
#define CPSA8_position                           0x3
#define CPSA8_size                               0x1
#define CPSA8_value_mask                         0x8
#define CPSA8_clear_mask                         0xF7

#define RD4                                      0x4
#define RD4_address                              0x008
#define RD4_position                             0x4
#define RD4_size                                 0x1
#define RD4_value_mask                           0x10
#define RD4_clear_mask                           0xEF

#define CPSA12                                   0x4
#define CPSA12_address                           0x008
#define CPSA12_position                          0x4
#define CPSA12_size                              0x1
#define CPSA12_value_mask                        0x10
#define CPSA12_clear_mask                        0xEF

#define RD5                                      0x5
#define RD5_address                              0x008
#define RD5_position                             0x5
#define RD5_size                                 0x1
#define RD5_value_mask                           0x20
#define RD5_clear_mask                           0xDF

#define CPSA13                                   0x5
#define CPSA13_address                           0x008
#define CPSA13_position                          0x5
#define CPSA13_size                              0x1
#define CPSA13_value_mask                        0x20
#define CPSA13_clear_mask                        0xDF

#define RD6                                      0x6
#define RD6_address                              0x008
#define RD6_position                             0x6
#define RD6_size                                 0x1
#define RD6_value_mask                           0x40
#define RD6_clear_mask                           0xBF

#define CPSA14                                   0x6
#define CPSA14_address                           0x008
#define CPSA14_position                          0x6
#define CPSA14_size                              0x1
#define CPSA14_value_mask                        0x40
#define CPSA14_clear_mask                        0xBF

#define RD7                                      0x7
#define RD7_address                              0x008
#define RD7_position                             0x7
#define RD7_size                                 0x1
#define RD7_value_mask                           0x80
#define RD7_clear_mask                           0x7F

#define CPSA15                                   0x7
#define CPSA15_address                           0x008
#define CPSA15_position                          0x7
#define CPSA15_size                              0x1
#define CPSA15_value_mask                        0x80
#define CPSA15_clear_mask                        0x7F


/*--------------------------------------#
| PORTE                             0x9 |
#---------------------------------------#
| - | - | - | - | RE3 | RE2 | RE1 | AN5 |
#---------------------------------------#
| 7 | 6 | 5 | 4 | 3   | 2   | 1   | 0   |
#--------------------------------------*/

#define PORTE                                    0x0
#define PORTE_address                            0x009
#define PORTE_position                           0x0
#define PORTE_size                               0x8
#define PORTE_value_mask                         0xFF
#define PORTE_clear_mask                         0x0

#define CPSA5                                    0x0
#define CPSA5_address                            0x009
#define CPSA5_position                           0x0
#define CPSA5_size                               0x1
#define CPSA5_value_mask                         0x1
#define CPSA5_clear_mask                         0xFE

#define RE0                                      0x0
#define RE0_address                              0x009
#define RE0_position                             0x0
#define RE0_size                                 0x1
#define RE0_value_mask                           0x1
#define RE0_clear_mask                           0xFE

#define AN5                                      0x0
#define AN5_address                              0x009
#define AN5_position                             0x0
#define AN5_size                                 0x1
#define AN5_value_mask                           0x1
#define AN5_clear_mask                           0xFE

#define CPSA6                                    0x1
#define CPSA6_address                            0x009
#define CPSA6_position                           0x1
#define CPSA6_size                               0x1
#define CPSA6_value_mask                         0x2
#define CPSA6_clear_mask                         0xFD

#define RE1                                      0x1
#define RE1_address                              0x009
#define RE1_position                             0x1
#define RE1_size                                 0x1
#define RE1_value_mask                           0x2
#define RE1_clear_mask                           0xFD

#define AN6                                      0x1
#define AN6_address                              0x009
#define AN6_position                             0x1
#define AN6_size                                 0x1
#define AN6_value_mask                           0x2
#define AN6_clear_mask                           0xFD

#define RE2                                      0x2
#define RE2_address                              0x009
#define RE2_position                             0x2
#define RE2_size                                 0x1
#define RE2_value_mask                           0x4
#define RE2_clear_mask                           0xFB

#define AN7                                      0x2
#define AN7_address                              0x009
#define AN7_position                             0x2
#define AN7_size                                 0x1
#define AN7_value_mask                           0x4
#define AN7_clear_mask                           0xFB

#define CPSA7                                    0x2
#define CPSA7_address                            0x009
#define CPSA7_position                           0x2
#define CPSA7_size                               0x1
#define CPSA7_value_mask                         0x4
#define CPSA7_clear_mask                         0xFB

#define RE3                                      0x3
#define RE3_address                              0x009
#define RE3_position                             0x3
#define RE3_size                                 0x1
#define RE3_value_mask                           0x8
#define RE3_clear_mask                           0xF7

#define nMCLR                                    0x3
#define nMCLR_address                            0x009
#define nMCLR_position                           0x3
#define nMCLR_size                               0x1
#define nMCLR_value_mask                         0x8
#define nMCLR_clear_mask                         0xF7


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
| GIE | PEIE | T0IE | INTE | RBIE | T0IF | INTF | RBIF |
#------------------------------------------------------#
| 7   | 6    | 5    | 4    | 3    | 2    | 1    | 0    |
#-----------------------------------------------------*/

#define INTCON                                   0x0
#define INTCON_address                           0x00B
#define INTCON_position                          0x0
#define INTCON_size                              0x8
#define INTCON_value_mask                        0xFF
#define INTCON_clear_mask                        0x0

#define RBIF                                     0x0
#define RBIF_address                             0x00B
#define RBIF_position                            0x0
#define RBIF_size                                0x1
#define RBIF_value_mask                          0x1
#define RBIF_clear_mask                          0xFE

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

#define TMR0IF                                   0x2
#define TMR0IF_address                           0x00B
#define TMR0IF_position                          0x2
#define TMR0IF_size                              0x1
#define TMR0IF_value_mask                        0x4
#define TMR0IF_clear_mask                        0xFB

#define RBIE                                     0x3
#define RBIE_address                             0x00B
#define RBIE_position                            0x3
#define RBIE_size                                0x1
#define RBIE_value_mask                          0x8
#define RBIE_clear_mask                          0xF7

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


/*----------------------------------------------------------------#
| PIR1                                                        0xC |
#-----------------------------------------------------------------#
| TMR1GIF | ADIF | RCIF | TXIF | SSPIF | CCP1IF | TMR2IF | TMR1IF |
#-----------------------------------------------------------------#
| 7       | 6    | 5    | 4    | 3     | 2      | 1      | 0      |
#----------------------------------------------------------------*/

#define PIR1                                     0x0
#define PIR1_address                             0x00C
#define PIR1_position                            0x0
#define PIR1_size                                0x8
#define PIR1_value_mask                          0xFF
#define PIR1_clear_mask                          0x0

#define TMR1IF                                   0x0
#define TMR1IF_address                           0x00C
#define TMR1IF_position                          0x0
#define TMR1IF_size                              0x1
#define TMR1IF_value_mask                        0x1
#define TMR1IF_clear_mask                        0xFE

#define TMR2IF                                   0x1
#define TMR2IF_address                           0x00C
#define TMR2IF_position                          0x1
#define TMR2IF_size                              0x1
#define TMR2IF_value_mask                        0x2
#define TMR2IF_clear_mask                        0xFD

#define CCP1IF                                   0x2
#define CCP1IF_address                           0x00C
#define CCP1IF_position                          0x2
#define CCP1IF_size                              0x1
#define CCP1IF_value_mask                        0x4
#define CCP1IF_clear_mask                        0xFB

#define SSPIF                                    0x3
#define SSPIF_address                            0x00C
#define SSPIF_position                           0x3
#define SSPIF_size                               0x1
#define SSPIF_value_mask                         0x8
#define SSPIF_clear_mask                         0xF7

#define TXIF                                     0x4
#define TXIF_address                             0x00C
#define TXIF_position                            0x4
#define TXIF_size                                0x1
#define TXIF_value_mask                          0x10
#define TXIF_clear_mask                          0xEF

#define RCIF                                     0x5
#define RCIF_address                             0x00C
#define RCIF_position                            0x5
#define RCIF_size                                0x1
#define RCIF_value_mask                          0x20
#define RCIF_clear_mask                          0xDF

#define ADIF                                     0x6
#define ADIF_address                             0x00C
#define ADIF_position                            0x6
#define ADIF_size                                0x1
#define ADIF_value_mask                          0x40
#define ADIF_clear_mask                          0xBF

#define TMR1GIF                                  0x7
#define TMR1GIF_address                          0x00C
#define TMR1GIF_position                         0x7
#define TMR1GIF_size                             0x1
#define TMR1GIF_value_mask                       0x80
#define TMR1GIF_clear_mask                       0x7F


/*--------------------------------------------------------#
| PIR2                                                0xD |
#---------------------------------------------------------#
| TMR3GIF | TMR3IF | TMRBIF | TMRAIF | - | - | - | CCP2IF |
#---------------------------------------------------------#
| 7       | 6      | 5      | 4      | 3 | 2 | 1 | 0      |
#--------------------------------------------------------*/

#define PIR2                                     0x0
#define PIR2_address                             0x00D
#define PIR2_position                            0x0
#define PIR2_size                                0x8
#define PIR2_value_mask                          0xFF
#define PIR2_clear_mask                          0x0

#define CCP2IF                                   0x0
#define CCP2IF_address                           0x00D
#define CCP2IF_position                          0x0
#define CCP2IF_size                              0x1
#define CCP2IF_value_mask                        0x1
#define CCP2IF_clear_mask                        0xFE

#define TMRAIF                                   0x4
#define TMRAIF_address                           0x00D
#define TMRAIF_position                          0x4
#define TMRAIF_size                              0x1
#define TMRAIF_value_mask                        0x10
#define TMRAIF_clear_mask                        0xEF

#define TMRBIF                                   0x5
#define TMRBIF_address                           0x00D
#define TMRBIF_position                          0x5
#define TMRBIF_size                              0x1
#define TMRBIF_value_mask                        0x20
#define TMRBIF_clear_mask                        0xDF

#define TMR3IF                                   0x6
#define TMR3IF_address                           0x00D
#define TMR3IF_position                          0x6
#define TMR3IF_size                              0x1
#define TMR3IF_value_mask                        0x40
#define TMR3IF_clear_mask                        0xBF

#define TMR3GIF                                  0x7
#define TMR3GIF_address                          0x00D
#define TMR3GIF_position                         0x7
#define TMR3GIF_size                             0x1
#define TMR3GIF_value_mask                       0x80
#define TMR3GIF_clear_mask                       0x7F


/*--------------------------------------------------------------------#
| T1CON                                                          0x10 |
#---------------------------------------------------------------------#
| TMRCS1 | TMRCS0 | T1CKPS1 | T1CKPS0 | T1OSCEN | T1SYNC | - | TMR1ON |
#---------------------------------------------------------------------#
| 7      | 6      | 5       | 4       | 3       | 2      | 1 | 0      |
#--------------------------------------------------------------------*/

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

#define T1SYNC                                   0x2
#define T1SYNC_address                           0x010
#define T1SYNC_position                          0x2
#define T1SYNC_size                              0x1
#define T1SYNC_value_mask                        0x4
#define T1SYNC_clear_mask                        0xFB

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

#define TMR1CS                                   0x6
#define TMR1CS_address                           0x010
#define TMR1CS_position                          0x6
#define TMR1CS_size                              0x2
#define TMR1CS_value_mask                        0xC0
#define TMR1CS_clear_mask                        0x3F

#define TMRCS0                                   0x6
#define TMRCS0_address                           0x010
#define TMRCS0_position                          0x6
#define TMRCS0_size                              0x1
#define TMRCS0_value_mask                        0x40
#define TMRCS0_clear_mask                        0xBF

#define TMRCS1                                   0x7
#define TMRCS1_address                           0x010
#define TMRCS1_position                          0x7
#define TMRCS1_size                              0x1
#define TMRCS1_value_mask                        0x80
#define TMRCS1_clear_mask                        0x7F


/*-----------------------------------------------------------------------#
| T2CON                                                             0x12 |
#------------------------------------------------------------------------#
| - | TOUTPS3 | TOUTPS2 | TOUTPS1 | TOUTPS0 | TMR2ON | T2CKPS1 | T2CKPS0 |
#------------------------------------------------------------------------#
| 7 | 6       | 5       | 4       | 3       | 2      | 1       | 0       |
#-----------------------------------------------------------------------*/

#define T2CON                                    0x0
#define T2CON_address                            0x012
#define T2CON_position                           0x0
#define T2CON_size                               0x8
#define T2CON_value_mask                         0xFF
#define T2CON_clear_mask                         0x0

#define T2CKPS0                                  0x0
#define T2CKPS0_address                          0x012
#define T2CKPS0_position                         0x0
#define T2CKPS0_size                             0x1
#define T2CKPS0_value_mask                       0x1
#define T2CKPS0_clear_mask                       0xFE

#define T2CKPS                                   0x0
#define T2CKPS_address                           0x012
#define T2CKPS_position                          0x0
#define T2CKPS_size                              0x2
#define T2CKPS_value_mask                        0x3
#define T2CKPS_clear_mask                        0xFC

#define T2CKPS1                                  0x1
#define T2CKPS1_address                          0x012
#define T2CKPS1_position                         0x1
#define T2CKPS1_size                             0x1
#define T2CKPS1_value_mask                       0x2
#define T2CKPS1_clear_mask                       0xFD

#define TMR2ON                                   0x2
#define TMR2ON_address                           0x012
#define TMR2ON_position                          0x2
#define TMR2ON_size                              0x1
#define TMR2ON_value_mask                        0x4
#define TMR2ON_clear_mask                        0xFB

#define TOUTPS0                                  0x3
#define TOUTPS0_address                          0x012
#define TOUTPS0_position                         0x3
#define TOUTPS0_size                             0x1
#define TOUTPS0_value_mask                       0x8
#define TOUTPS0_clear_mask                       0xF7

#define TOUTPS                                   0x3
#define TOUTPS_address                           0x012
#define TOUTPS_position                          0x3
#define TOUTPS_size                              0x4
#define TOUTPS_value_mask                        0x78
#define TOUTPS_clear_mask                        0x87

#define TOUTPS1                                  0x4
#define TOUTPS1_address                          0x012
#define TOUTPS1_position                         0x4
#define TOUTPS1_size                             0x1
#define TOUTPS1_value_mask                       0x10
#define TOUTPS1_clear_mask                       0xEF

#define TOUTPS2                                  0x5
#define TOUTPS2_address                          0x012
#define TOUTPS2_position                         0x5
#define TOUTPS2_size                             0x1
#define TOUTPS2_value_mask                       0x20
#define TOUTPS2_clear_mask                       0xDF

#define TOUTPS3                                  0x6
#define TOUTPS3_address                          0x012
#define TOUTPS3_position                         0x6
#define TOUTPS3_size                             0x1
#define TOUTPS3_value_mask                       0x40
#define TOUTPS3_clear_mask                       0xBF


/*-----------------------------------------------------------#
| SSPCON                                                0x14 |
#------------------------------------------------------------#
| WCOL | SSPOV | SSPEN | CKP | SSPM3 | SSPM2 | SSPM1 | SSPM0 |
#------------------------------------------------------------#
| 7    | 6     | 5     | 4   | 3     | 2     | 1     | 0     |
#-----------------------------------------------------------*/

#define SSPCON                                   0x0
#define SSPCON_address                           0x014
#define SSPCON_position                          0x0
#define SSPCON_size                              0x8
#define SSPCON_value_mask                        0xFF
#define SSPCON_clear_mask                        0x0

#define SSPM0                                    0x0
#define SSPM0_address                            0x014
#define SSPM0_position                           0x0
#define SSPM0_size                               0x1
#define SSPM0_value_mask                         0x1
#define SSPM0_clear_mask                         0xFE

#define SSPM                                     0x0
#define SSPM_address                             0x014
#define SSPM_position                            0x0
#define SSPM_size                                0x4
#define SSPM_value_mask                          0xF
#define SSPM_clear_mask                          0xF0

#define SSPM1                                    0x1
#define SSPM1_address                            0x014
#define SSPM1_position                           0x1
#define SSPM1_size                               0x1
#define SSPM1_value_mask                         0x2
#define SSPM1_clear_mask                         0xFD

#define SSPM2                                    0x2
#define SSPM2_address                            0x014
#define SSPM2_position                           0x2
#define SSPM2_size                               0x1
#define SSPM2_value_mask                         0x4
#define SSPM2_clear_mask                         0xFB

#define SSPM3                                    0x3
#define SSPM3_address                            0x014
#define SSPM3_position                           0x3
#define SSPM3_size                               0x1
#define SSPM3_value_mask                         0x8
#define SSPM3_clear_mask                         0xF7

#define CKP                                      0x4
#define CKP_address                              0x014
#define CKP_position                             0x4
#define CKP_size                                 0x1
#define CKP_value_mask                           0x10
#define CKP_clear_mask                           0xEF

#define SSPEN                                    0x5
#define SSPEN_address                            0x014
#define SSPEN_position                           0x5
#define SSPEN_size                               0x1
#define SSPEN_value_mask                         0x20
#define SSPEN_clear_mask                         0xDF

#define SSPOV                                    0x6
#define SSPOV_address                            0x014
#define SSPOV_position                           0x6
#define SSPOV_size                               0x1
#define SSPOV_value_mask                         0x40
#define SSPOV_clear_mask                         0xBF

#define WCOL                                     0x7
#define WCOL_address                             0x014
#define WCOL_position                            0x7
#define WCOL_size                                0x1
#define WCOL_value_mask                          0x80
#define WCOL_clear_mask                          0x7F


/*----------------------------------------------------------#
| CCP1CON                                              0x17 |
#-----------------------------------------------------------#
| - | - | DC1B1 | DC1B0 | CCP1M3 | CCP1M2 | CCP1M1 | CCP1M0 |
#-----------------------------------------------------------#
| 7 | 6 | 5     | 4     | 3      | 2      | 1      | 0      |
#----------------------------------------------------------*/

#define CCP1CON                                  0x0
#define CCP1CON_address                          0x017
#define CCP1CON_position                         0x0
#define CCP1CON_size                             0x8
#define CCP1CON_value_mask                       0xFF
#define CCP1CON_clear_mask                       0x0

#define CCP1M0                                   0x0
#define CCP1M0_address                           0x017
#define CCP1M0_position                          0x0
#define CCP1M0_size                              0x1
#define CCP1M0_value_mask                        0x1
#define CCP1M0_clear_mask                        0xFE

#define CCP1M                                    0x0
#define CCP1M_address                            0x017
#define CCP1M_position                           0x0
#define CCP1M_size                               0x4
#define CCP1M_value_mask                         0xF
#define CCP1M_clear_mask                         0xF0

#define CCP1M1                                   0x1
#define CCP1M1_address                           0x017
#define CCP1M1_position                          0x1
#define CCP1M1_size                              0x1
#define CCP1M1_value_mask                        0x2
#define CCP1M1_clear_mask                        0xFD

#define CCP1M2                                   0x2
#define CCP1M2_address                           0x017
#define CCP1M2_position                          0x2
#define CCP1M2_size                              0x1
#define CCP1M2_value_mask                        0x4
#define CCP1M2_clear_mask                        0xFB

#define CCP1M3                                   0x3
#define CCP1M3_address                           0x017
#define CCP1M3_position                          0x3
#define CCP1M3_size                              0x1
#define CCP1M3_value_mask                        0x8
#define CCP1M3_clear_mask                        0xF7

#define DC1B                                     0x4
#define DC1B_address                             0x017
#define DC1B_position                            0x4
#define DC1B_size                                0x2
#define DC1B_value_mask                          0x30
#define DC1B_clear_mask                          0xCF

#define DC1B0                                    0x4
#define DC1B0_address                            0x017
#define DC1B0_position                           0x4
#define DC1B0_size                               0x1
#define DC1B0_value_mask                         0x10
#define DC1B0_clear_mask                         0xEF

#define DC1B1                                    0x5
#define DC1B1_address                            0x017
#define DC1B1_position                           0x5
#define DC1B1_size                               0x1
#define DC1B1_value_mask                         0x20
#define DC1B1_clear_mask                         0xDF


/*------------------------------------------------------#
| RCSTA                                            0x18 |
#-------------------------------------------------------#
| SPEN | RX9 | SREN | CREN | ADDEN | FERR | OERR | RX9D |
#-------------------------------------------------------#
| 7    | 6   | 5    | 4    | 3     | 2    | 1    | 0    |
#------------------------------------------------------*/

#define RCSTA                                    0x0
#define RCSTA_address                            0x018
#define RCSTA_position                           0x0
#define RCSTA_size                               0x8
#define RCSTA_value_mask                         0xFF
#define RCSTA_clear_mask                         0x0

#define RX9D                                     0x0
#define RX9D_address                             0x018
#define RX9D_position                            0x0
#define RX9D_size                                0x1
#define RX9D_value_mask                          0x1
#define RX9D_clear_mask                          0xFE

#define OERR                                     0x1
#define OERR_address                             0x018
#define OERR_position                            0x1
#define OERR_size                                0x1
#define OERR_value_mask                          0x2
#define OERR_clear_mask                          0xFD

#define FERR                                     0x2
#define FERR_address                             0x018
#define FERR_position                            0x2
#define FERR_size                                0x1
#define FERR_value_mask                          0x4
#define FERR_clear_mask                          0xFB

#define ADDEN                                    0x3
#define ADDEN_address                            0x018
#define ADDEN_position                           0x3
#define ADDEN_size                               0x1
#define ADDEN_value_mask                         0x8
#define ADDEN_clear_mask                         0xF7

#define CREN                                     0x4
#define CREN_address                             0x018
#define CREN_position                            0x4
#define CREN_size                                0x1
#define CREN_value_mask                          0x10
#define CREN_clear_mask                          0xEF

#define SREN                                     0x5
#define SREN_address                             0x018
#define SREN_position                            0x5
#define SREN_size                                0x1
#define SREN_value_mask                          0x20
#define SREN_clear_mask                          0xDF

#define RX9                                      0x6
#define RX9_address                              0x018
#define RX9_position                             0x6
#define RX9_size                                 0x1
#define RX9_value_mask                           0x40
#define RX9_clear_mask                           0xBF

#define SPEN                                     0x7
#define SPEN_address                             0x018
#define SPEN_position                            0x7
#define SPEN_size                                0x1
#define SPEN_value_mask                          0x80
#define SPEN_clear_mask                          0x7F


/*----------------------------------------------------------#
| CCP2CON                                              0x1D |
#-----------------------------------------------------------#
| - | - | DC2B1 | DC2B0 | CCP2M3 | CCP2M2 | CCP2M1 | CCP2M0 |
#-----------------------------------------------------------#
| 7 | 6 | 5     | 4     | 3      | 2      | 1      | 0      |
#----------------------------------------------------------*/

#define CCP2CON                                  0x0
#define CCP2CON_address                          0x01D
#define CCP2CON_position                         0x0
#define CCP2CON_size                             0x8
#define CCP2CON_value_mask                       0xFF
#define CCP2CON_clear_mask                       0x0

#define CCP2M                                    0x0
#define CCP2M_address                            0x01D
#define CCP2M_position                           0x0
#define CCP2M_size                               0x4
#define CCP2M_value_mask                         0xF
#define CCP2M_clear_mask                         0xF0

#define CCP2M0                                   0x0
#define CCP2M0_address                           0x01D
#define CCP2M0_position                          0x0
#define CCP2M0_size                              0x1
#define CCP2M0_value_mask                        0x1
#define CCP2M0_clear_mask                        0xFE

#define CCP2M1                                   0x1
#define CCP2M1_address                           0x01D
#define CCP2M1_position                          0x1
#define CCP2M1_size                              0x1
#define CCP2M1_value_mask                        0x2
#define CCP2M1_clear_mask                        0xFD

#define CCP2M2                                   0x2
#define CCP2M2_address                           0x01D
#define CCP2M2_position                          0x2
#define CCP2M2_size                              0x1
#define CCP2M2_value_mask                        0x4
#define CCP2M2_clear_mask                        0xFB

#define CCP2M3                                   0x3
#define CCP2M3_address                           0x01D
#define CCP2M3_position                          0x3
#define CCP2M3_size                              0x1
#define CCP2M3_value_mask                        0x8
#define CCP2M3_clear_mask                        0xF7

#define DC2B0                                    0x4
#define DC2B0_address                            0x01D
#define DC2B0_position                           0x4
#define DC2B0_size                               0x1
#define DC2B0_value_mask                         0x10
#define DC2B0_clear_mask                         0xEF

#define DC2B                                     0x4
#define DC2B_address                             0x01D
#define DC2B_position                            0x4
#define DC2B_size                                0x2
#define DC2B_value_mask                          0x30
#define DC2B_clear_mask                          0xCF

#define DC2B1                                    0x5
#define DC2B1_address                            0x01D
#define DC2B1_position                           0x5
#define DC2B1_size                               0x1
#define DC2B1_value_mask                         0x20
#define DC2B1_clear_mask                         0xDF


/*----------------------------------------------------#
| ADCON0                                         0x1F |
#-----------------------------------------------------#
| - | - | CHS3 | CHS2 | CHS1 | CHS0 | GO_nDONE | ADON |
#-----------------------------------------------------#
| 7 | 6 | 5    | 4    | 3    | 2    | 1        | 0    |
#----------------------------------------------------*/

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

#define GO_nDONE                                 0x1
#define GO_nDONE_address                         0x01F
#define GO_nDONE_position                        0x1
#define GO_nDONE_size                            0x1
#define GO_nDONE_value_mask                      0x2
#define GO_nDONE_clear_mask                      0xFD

#define CHS0                                     0x2
#define CHS0_address                             0x01F
#define CHS0_position                            0x2
#define CHS0_size                                0x1
#define CHS0_value_mask                          0x4
#define CHS0_clear_mask                          0xFB

#define CHS                                      0x2
#define CHS_address                              0x01F
#define CHS_position                             0x2
#define CHS_size                                 0x4
#define CHS_value_mask                           0x3C
#define CHS_clear_mask                           0xC3

#define CHS1                                     0x3
#define CHS1_address                             0x01F
#define CHS1_position                            0x3
#define CHS1_size                                0x1
#define CHS1_value_mask                          0x8
#define CHS1_clear_mask                          0xF7

#define CHS2                                     0x4
#define CHS2_address                             0x01F
#define CHS2_position                            0x4
#define CHS2_size                                0x1
#define CHS2_value_mask                          0x10
#define CHS2_clear_mask                          0xEF

#define CHS3                                     0x5
#define CHS3_address                             0x01F
#define CHS3_position                            0x5
#define CHS3_size                                0x1
#define CHS3_value_mask                          0x20
#define CHS3_clear_mask                          0xDF


/*-----------------------------------------------------#
| OPTION_REG                                      0x81 |
#------------------------------------------------------#
| nRBPU | INTEDG | T0CS | T0SE | PSA | PS2 | PS1 | PS0 |
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

#define TMR0SE                                   0x4
#define TMR0SE_address                           0x081
#define TMR0SE_position                          0x4
#define TMR0SE_size                              0x1
#define TMR0SE_value_mask                        0x10
#define TMR0SE_clear_mask                        0xEF

#define T0CS                                     0x5
#define T0CS_address                             0x081
#define T0CS_position                            0x5
#define T0CS_size                                0x1
#define T0CS_value_mask                          0x20
#define T0CS_clear_mask                          0xDF

#define TMR0CS                                   0x5
#define TMR0CS_address                           0x081
#define TMR0CS_position                          0x5
#define TMR0CS_size                              0x1
#define TMR0CS_value_mask                        0x20
#define TMR0CS_clear_mask                        0xDF

#define INTEDG                                   0x6
#define INTEDG_address                           0x081
#define INTEDG_position                          0x6
#define INTEDG_size                              0x1
#define INTEDG_value_mask                        0x40
#define INTEDG_clear_mask                        0xBF

#define nRBPU                                    0x7
#define nRBPU_address                            0x081
#define nRBPU_position                           0x7
#define nRBPU_size                               0x1
#define nRBPU_value_mask                         0x80
#define nRBPU_clear_mask                         0x7F


/*----------------------------------------------------------------------#
| TRISA                                                            0x85 |
#-----------------------------------------------------------------------#
| TRISA7 | TRISA6 | TRISA5 | TRISA4 | TRISA3 | TRISA2 | TRISA1 | TRISA0 |
#-----------------------------------------------------------------------#
| 7      | 6      | 5      | 4      | 3      | 2      | 1      | 0      |
#----------------------------------------------------------------------*/

#define TRISA                                    0x0
#define TRISA_address                            0x085
#define TRISA_position                           0x0
#define TRISA_size                               0x8
#define TRISA_value_mask                         0xFF
#define TRISA_clear_mask                         0x0

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
| TRISB                                                            0x86 |
#-----------------------------------------------------------------------#
| TRISB7 | TRISB6 | TRISB5 | TRISB4 | TRISB3 | TRISB2 | TRISB1 | TRISB0 |
#-----------------------------------------------------------------------#
| 7      | 6      | 5      | 4      | 3      | 2      | 1      | 0      |
#----------------------------------------------------------------------*/

#define TRISB                                    0x0
#define TRISB_address                            0x086
#define TRISB_position                           0x0
#define TRISB_size                               0x8
#define TRISB_value_mask                         0xFF
#define TRISB_clear_mask                         0x0

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


/*----------------------------------------------------------------------#
| TRISC                                                            0x87 |
#-----------------------------------------------------------------------#
| TRISC7 | TRISC6 | TRISC5 | TRISC4 | TRISC3 | TRISC2 | TRISC1 | TRISC0 |
#-----------------------------------------------------------------------#
| 7      | 6      | 5      | 4      | 3      | 2      | 1      | 0      |
#----------------------------------------------------------------------*/

#define TRISC                                    0x0
#define TRISC_address                            0x087
#define TRISC_position                           0x0
#define TRISC_size                               0x8
#define TRISC_value_mask                         0xFF
#define TRISC_clear_mask                         0x0

#define TRISC0                                   0x0
#define TRISC0_address                           0x087
#define TRISC0_position                          0x0
#define TRISC0_size                              0x1
#define TRISC0_value_mask                        0x1
#define TRISC0_clear_mask                        0xFE

#define TRISC1                                   0x1
#define TRISC1_address                           0x087
#define TRISC1_position                          0x1
#define TRISC1_size                              0x1
#define TRISC1_value_mask                        0x2
#define TRISC1_clear_mask                        0xFD

#define TRISC2                                   0x2
#define TRISC2_address                           0x087
#define TRISC2_position                          0x2
#define TRISC2_size                              0x1
#define TRISC2_value_mask                        0x4
#define TRISC2_clear_mask                        0xFB

#define TRISC3                                   0x3
#define TRISC3_address                           0x087
#define TRISC3_position                          0x3
#define TRISC3_size                              0x1
#define TRISC3_value_mask                        0x8
#define TRISC3_clear_mask                        0xF7

#define TRISC4                                   0x4
#define TRISC4_address                           0x087
#define TRISC4_position                          0x4
#define TRISC4_size                              0x1
#define TRISC4_value_mask                        0x10
#define TRISC4_clear_mask                        0xEF

#define TRISC5                                   0x5
#define TRISC5_address                           0x087
#define TRISC5_position                          0x5
#define TRISC5_size                              0x1
#define TRISC5_value_mask                        0x20
#define TRISC5_clear_mask                        0xDF

#define TRISC6                                   0x6
#define TRISC6_address                           0x087
#define TRISC6_position                          0x6
#define TRISC6_size                              0x1
#define TRISC6_value_mask                        0x40
#define TRISC6_clear_mask                        0xBF

#define TRISC7                                   0x7
#define TRISC7_address                           0x087
#define TRISC7_position                          0x7
#define TRISC7_size                              0x1
#define TRISC7_value_mask                        0x80
#define TRISC7_clear_mask                        0x7F


/*----------------------------------------------------------------------#
| TRISD                                                            0x88 |
#-----------------------------------------------------------------------#
| TRISD7 | TRISD6 | TRISD5 | TRISD4 | TRISD3 | TRISD2 | TRISD1 | TRISD0 |
#-----------------------------------------------------------------------#
| 7      | 6      | 5      | 4      | 3      | 2      | 1      | 0      |
#----------------------------------------------------------------------*/

#define TRISD                                    0x0
#define TRISD_address                            0x088
#define TRISD_position                           0x0
#define TRISD_size                               0x8
#define TRISD_value_mask                         0xFF
#define TRISD_clear_mask                         0x0

#define TRISD0                                   0x0
#define TRISD0_address                           0x088
#define TRISD0_position                          0x0
#define TRISD0_size                              0x1
#define TRISD0_value_mask                        0x1
#define TRISD0_clear_mask                        0xFE

#define TRISD1                                   0x1
#define TRISD1_address                           0x088
#define TRISD1_position                          0x1
#define TRISD1_size                              0x1
#define TRISD1_value_mask                        0x2
#define TRISD1_clear_mask                        0xFD

#define TRISD2                                   0x2
#define TRISD2_address                           0x088
#define TRISD2_position                          0x2
#define TRISD2_size                              0x1
#define TRISD2_value_mask                        0x4
#define TRISD2_clear_mask                        0xFB

#define TRISD3                                   0x3
#define TRISD3_address                           0x088
#define TRISD3_position                          0x3
#define TRISD3_size                              0x1
#define TRISD3_value_mask                        0x8
#define TRISD3_clear_mask                        0xF7

#define TRISD4                                   0x4
#define TRISD4_address                           0x088
#define TRISD4_position                          0x4
#define TRISD4_size                              0x1
#define TRISD4_value_mask                        0x10
#define TRISD4_clear_mask                        0xEF

#define TRISD5                                   0x5
#define TRISD5_address                           0x088
#define TRISD5_position                          0x5
#define TRISD5_size                              0x1
#define TRISD5_value_mask                        0x20
#define TRISD5_clear_mask                        0xDF

#define TRISD6                                   0x6
#define TRISD6_address                           0x088
#define TRISD6_position                          0x6
#define TRISD6_size                              0x1
#define TRISD6_value_mask                        0x40
#define TRISD6_clear_mask                        0xBF

#define TRISD7                                   0x7
#define TRISD7_address                           0x088
#define TRISD7_position                          0x7
#define TRISD7_size                              0x1
#define TRISD7_value_mask                        0x80
#define TRISD7_clear_mask                        0x7F


/*--------------------------------------------------#
| TRISE                                        0x89 |
#---------------------------------------------------#
| - | - | - | - | TRISE3 | TRISE2 | TRISE1 | TRISE0 |
#---------------------------------------------------#
| 7 | 6 | 5 | 4 | 3      | 2      | 1      | 0      |
#--------------------------------------------------*/

#define TRISE                                    0x0
#define TRISE_address                            0x089
#define TRISE_position                           0x0
#define TRISE_size                               0x8
#define TRISE_value_mask                         0xFF
#define TRISE_clear_mask                         0x0

#define TRISE0                                   0x0
#define TRISE0_address                           0x089
#define TRISE0_position                          0x0
#define TRISE0_size                              0x1
#define TRISE0_value_mask                        0x1
#define TRISE0_clear_mask                        0xFE

#define TRISE1                                   0x1
#define TRISE1_address                           0x089
#define TRISE1_position                          0x1
#define TRISE1_size                              0x1
#define TRISE1_value_mask                        0x2
#define TRISE1_clear_mask                        0xFD

#define TRISE2                                   0x2
#define TRISE2_address                           0x089
#define TRISE2_position                          0x2
#define TRISE2_size                              0x1
#define TRISE2_value_mask                        0x4
#define TRISE2_clear_mask                        0xFB

#define TRISE3                                   0x3
#define TRISE3_address                           0x089
#define TRISE3_position                          0x3
#define TRISE3_size                              0x1
#define TRISE3_value_mask                        0x8
#define TRISE3_clear_mask                        0xF7


/*----------------------------------------------------------------#
| PIE1                                                       0x8C |
#-----------------------------------------------------------------#
| TMR1GIE | ADIE | RCIE | TXIE | SSPIE | CCP1IE | TMR2IE | TMR1IE |
#-----------------------------------------------------------------#
| 7       | 6    | 5    | 4    | 3     | 2      | 1      | 0      |
#----------------------------------------------------------------*/

#define PIE1                                     0x0
#define PIE1_address                             0x08C
#define PIE1_position                            0x0
#define PIE1_size                                0x8
#define PIE1_value_mask                          0xFF
#define PIE1_clear_mask                          0x0

#define TMR1IE                                   0x0
#define TMR1IE_address                           0x08C
#define TMR1IE_position                          0x0
#define TMR1IE_size                              0x1
#define TMR1IE_value_mask                        0x1
#define TMR1IE_clear_mask                        0xFE

#define TMR2IE                                   0x1
#define TMR2IE_address                           0x08C
#define TMR2IE_position                          0x1
#define TMR2IE_size                              0x1
#define TMR2IE_value_mask                        0x2
#define TMR2IE_clear_mask                        0xFD

#define CCP1IE                                   0x2
#define CCP1IE_address                           0x08C
#define CCP1IE_position                          0x2
#define CCP1IE_size                              0x1
#define CCP1IE_value_mask                        0x4
#define CCP1IE_clear_mask                        0xFB

#define SSPIE                                    0x3
#define SSPIE_address                            0x08C
#define SSPIE_position                           0x3
#define SSPIE_size                               0x1
#define SSPIE_value_mask                         0x8
#define SSPIE_clear_mask                         0xF7

#define TXIE                                     0x4
#define TXIE_address                             0x08C
#define TXIE_position                            0x4
#define TXIE_size                                0x1
#define TXIE_value_mask                          0x10
#define TXIE_clear_mask                          0xEF

#define RCIE                                     0x5
#define RCIE_address                             0x08C
#define RCIE_position                            0x5
#define RCIE_size                                0x1
#define RCIE_value_mask                          0x20
#define RCIE_clear_mask                          0xDF

#define ADIE                                     0x6
#define ADIE_address                             0x08C
#define ADIE_position                            0x6
#define ADIE_size                                0x1
#define ADIE_value_mask                          0x40
#define ADIE_clear_mask                          0xBF

#define TMR1GIE                                  0x7
#define TMR1GIE_address                          0x08C
#define TMR1GIE_position                         0x7
#define TMR1GIE_size                             0x1
#define TMR1GIE_value_mask                       0x80
#define TMR1GIE_clear_mask                       0x7F


/*--------------------------------------------------------#
| PIE2                                               0x8D |
#---------------------------------------------------------#
| TMR3GIE | TMR3IE | TMRBIE | TMRAIE | - | - | - | CCP2IE |
#---------------------------------------------------------#
| 7       | 6      | 5      | 4      | 3 | 2 | 1 | 0      |
#--------------------------------------------------------*/

#define PIE2                                     0x0
#define PIE2_address                             0x08D
#define PIE2_position                            0x0
#define PIE2_size                                0x8
#define PIE2_value_mask                          0xFF
#define PIE2_clear_mask                          0x0

#define CCP2IE                                   0x0
#define CCP2IE_address                           0x08D
#define CCP2IE_position                          0x0
#define CCP2IE_size                              0x1
#define CCP2IE_value_mask                        0x1
#define CCP2IE_clear_mask                        0xFE

#define TMRAIE                                   0x4
#define TMRAIE_address                           0x08D
#define TMRAIE_position                          0x4
#define TMRAIE_size                              0x1
#define TMRAIE_value_mask                        0x10
#define TMRAIE_clear_mask                        0xEF

#define TMRBIE                                   0x5
#define TMRBIE_address                           0x08D
#define TMRBIE_position                          0x5
#define TMRBIE_size                              0x1
#define TMRBIE_value_mask                        0x20
#define TMRBIE_clear_mask                        0xDF

#define TMR3IE                                   0x6
#define TMR3IE_address                           0x08D
#define TMR3IE_position                          0x6
#define TMR3IE_size                              0x1
#define TMR3IE_value_mask                        0x40
#define TMR3IE_clear_mask                        0xBF

#define TMR3GIE                                  0x7
#define TMR3GIE_address                          0x08D
#define TMR3GIE_position                         0x7
#define TMR3GIE_size                             0x1
#define TMR3GIE_value_mask                       0x80
#define TMR3GIE_clear_mask                       0x7F


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

#define nPOR                                     0x1
#define nPOR_address                             0x08E
#define nPOR_position                            0x1
#define nPOR_size                                0x1
#define nPOR_value_mask                          0x2
#define nPOR_clear_mask                          0xFD


/*--------------------------------------------------------------------------#
| T1GCON                                                               0x8F |
#---------------------------------------------------------------------------#
| TMR1GE | T1GPOL | T1GTM | T1GSPM | T1GGO_nDONE | T1GVAL | T1GSS1 | T1GSS0 |
#---------------------------------------------------------------------------#
| 7      | 6      | 5     | 4      | 3           | 2      | 1      | 0      |
#--------------------------------------------------------------------------*/

#define T1GCON                                   0x0
#define T1GCON_address                           0x08F
#define T1GCON_position                          0x0
#define T1GCON_size                              0x8
#define T1GCON_value_mask                        0xFF
#define T1GCON_clear_mask                        0x0

#define T1GSS0                                   0x0
#define T1GSS0_address                           0x08F
#define T1GSS0_position                          0x0
#define T1GSS0_size                              0x1
#define T1GSS0_value_mask                        0x1
#define T1GSS0_clear_mask                        0xFE

#define T1GSS                                    0x0
#define T1GSS_address                            0x08F
#define T1GSS_position                           0x0
#define T1GSS_size                               0x2
#define T1GSS_value_mask                         0x3
#define T1GSS_clear_mask                         0xFC

#define T1GSS1                                   0x1
#define T1GSS1_address                           0x08F
#define T1GSS1_position                          0x1
#define T1GSS1_size                              0x1
#define T1GSS1_value_mask                        0x2
#define T1GSS1_clear_mask                        0xFD

#define T1GVAL                                   0x2
#define T1GVAL_address                           0x08F
#define T1GVAL_position                          0x2
#define T1GVAL_size                              0x1
#define T1GVAL_value_mask                        0x4
#define T1GVAL_clear_mask                        0xFB

#define T1GGO_nDONE                              0x3
#define T1GGO_nDONE_address                      0x08F
#define T1GGO_nDONE_position                     0x3
#define T1GGO_nDONE_size                         0x1
#define T1GGO_nDONE_value_mask                   0x8
#define T1GGO_nDONE_clear_mask                   0xF7

#define T1GSPM                                   0x4
#define T1GSPM_address                           0x08F
#define T1GSPM_position                          0x4
#define T1GSPM_size                              0x1
#define T1GSPM_value_mask                        0x10
#define T1GSPM_clear_mask                        0xEF

#define T1GTM                                    0x5
#define T1GTM_address                            0x08F
#define T1GTM_position                           0x5
#define T1GTM_size                               0x1
#define T1GTM_value_mask                         0x20
#define T1GTM_clear_mask                         0xDF

#define T1GPOL                                   0x6
#define T1GPOL_address                           0x08F
#define T1GPOL_position                          0x6
#define T1GPOL_size                              0x1
#define T1GPOL_value_mask                        0x40
#define T1GPOL_clear_mask                        0xBF

#define TMR1GE                                   0x7
#define TMR1GE_address                           0x08F
#define TMR1GE_position                          0x7
#define TMR1GE_size                              0x1
#define TMR1GE_value_mask                        0x80
#define TMR1GE_clear_mask                        0x7F


/*--------------------------------------------#
| OSCCON                                 0x90 |
#---------------------------------------------#
| - | - | IRCF1 | IRCF0 | ICSL | ICSS | - | - |
#---------------------------------------------#
| 7 | 6 | 5     | 4     | 3    | 2    | 1 | 0 |
#--------------------------------------------*/

#define OSCCON                                   0x0
#define OSCCON_address                           0x090
#define OSCCON_position                          0x0
#define OSCCON_size                              0x8
#define OSCCON_value_mask                        0xFF
#define OSCCON_clear_mask                        0x0

#define ICSS                                     0x2
#define ICSS_address                             0x090
#define ICSS_position                            0x2
#define ICSS_size                                0x1
#define ICSS_value_mask                          0x4
#define ICSS_clear_mask                          0xFB

#define ICSL                                     0x3
#define ICSL_address                             0x090
#define ICSL_position                            0x3
#define ICSL_size                                0x1
#define ICSL_value_mask                          0x8
#define ICSL_clear_mask                          0xF7

#define IRCF                                     0x4
#define IRCF_address                             0x090
#define IRCF_position                            0x4
#define IRCF_size                                0x2
#define IRCF_value_mask                          0x30
#define IRCF_clear_mask                          0xCF

#define IRCF0                                    0x4
#define IRCF0_address                            0x090
#define IRCF0_position                           0x4
#define IRCF0_size                               0x1
#define IRCF0_value_mask                         0x10
#define IRCF0_clear_mask                         0xEF

#define IRCF1                                    0x5
#define IRCF1_address                            0x090
#define IRCF1_position                           0x5
#define IRCF1_size                               0x1
#define IRCF1_value_mask                         0x20
#define IRCF1_clear_mask                         0xDF


/*------------------------------#
| OSCTUNE                  0x91 |
#-------------------------------#
| - | - | TUN                   |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define OSCTUNE                                  0x0
#define OSCTUNE_address                          0x091
#define OSCTUNE_position                         0x0
#define OSCTUNE_size                             0x8
#define OSCTUNE_value_mask                       0xFF
#define OSCTUNE_clear_mask                       0x0

#define TUN                                      0x0
#define TUN_address                              0x091
#define TUN_position                             0x0
#define TUN_size                                 0x6
#define TUN_value_mask                           0x3F
#define TUN_clear_mask                           0xC0


/*------------------------------#
| SSPADD                   0x93 |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define SSPADD                                   0x0
#define SSPADD_address                           0x093
#define SSPADD_position                          0x0
#define SSPADD_size                              0x8
#define SSPADD_value_mask                        0xFF
#define SSPADD_clear_mask                        0x0


/*------------------------------#
| SSPMSK                   0x93 |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define SSPMSK                                   0x0
#define SSPMSK_address                           0x093
#define SSPMSK_position                          0x0
#define SSPMSK_size                              0x8
#define SSPMSK_value_mask                        0xFF
#define SSPMSK_clear_mask                        0x0


/*------------------------------------------#
| SSPSTAT                              0x94 |
#-------------------------------------------#
| SMP | CKE | D_nA | P | S | R_nW | UA | BF |
#-------------------------------------------#
| 7   | 6   | 5    | 4 | 3 | 2    | 1  | 0  |
#------------------------------------------*/

#define SSPSTAT                                  0x0
#define SSPSTAT_address                          0x094
#define SSPSTAT_position                         0x0
#define SSPSTAT_size                             0x8
#define SSPSTAT_value_mask                       0xFF
#define SSPSTAT_clear_mask                       0x0

#define BF                                       0x0
#define BF_address                               0x094
#define BF_position                              0x0
#define BF_size                                  0x1
#define BF_value_mask                            0x1
#define BF_clear_mask                            0xFE

#define UA                                       0x1
#define UA_address                               0x094
#define UA_position                              0x1
#define UA_size                                  0x1
#define UA_value_mask                            0x2
#define UA_clear_mask                            0xFD

#define R_nW                                     0x2
#define R_nW_address                             0x094
#define R_nW_position                            0x2
#define R_nW_size                                0x1
#define R_nW_value_mask                          0x4
#define R_nW_clear_mask                          0xFB

#define S                                        0x3
#define S_address                                0x094
#define S_position                               0x3
#define S_size                                   0x1
#define S_value_mask                             0x8
#define S_clear_mask                             0xF7

#define P                                        0x4
#define P_address                                0x094
#define P_position                               0x4
#define P_size                                   0x1
#define P_value_mask                             0x10
#define P_clear_mask                             0xEF

#define D_nA                                     0x5
#define D_nA_address                             0x094
#define D_nA_position                            0x5
#define D_nA_size                                0x1
#define D_nA_value_mask                          0x20
#define D_nA_clear_mask                          0xDF

#define CKE                                      0x6
#define CKE_address                              0x094
#define CKE_position                             0x6
#define CKE_size                                 0x1
#define CKE_value_mask                           0x40
#define CKE_clear_mask                           0xBF

#define SMP                                      0x7
#define SMP_address                              0x094
#define SMP_position                             0x7
#define SMP_size                                 0x1
#define SMP_value_mask                           0x80
#define SMP_clear_mask                           0x7F


/*--------------------------------------------------------------#
| WPUB                                                     0x95 |
#---------------------------------------------------------------#
| WPUB7 | WPUB6 | WPUB5 | WPUB4 | WPUB3 | WPUB2 | WPUB1 | WPUB0 |
#---------------------------------------------------------------#
| 7     | 6     | 5     | 4     | 3     | 2     | 1     | 0     |
#--------------------------------------------------------------*/

#define WPUB                                     0x0
#define WPUB_address                             0x095
#define WPUB_position                            0x0
#define WPUB_size                                0x8
#define WPUB_value_mask                          0xFF
#define WPUB_clear_mask                          0x0

#define WPUB0                                    0x0
#define WPUB0_address                            0x095
#define WPUB0_position                           0x0
#define WPUB0_size                               0x1
#define WPUB0_value_mask                         0x1
#define WPUB0_clear_mask                         0xFE

#define WPUB1                                    0x1
#define WPUB1_address                            0x095
#define WPUB1_position                           0x1
#define WPUB1_size                               0x1
#define WPUB1_value_mask                         0x2
#define WPUB1_clear_mask                         0xFD

#define WPUB2                                    0x2
#define WPUB2_address                            0x095
#define WPUB2_position                           0x2
#define WPUB2_size                               0x1
#define WPUB2_value_mask                         0x4
#define WPUB2_clear_mask                         0xFB

#define WPUB3                                    0x3
#define WPUB3_address                            0x095
#define WPUB3_position                           0x3
#define WPUB3_size                               0x1
#define WPUB3_value_mask                         0x8
#define WPUB3_clear_mask                         0xF7

#define WPUB4                                    0x4
#define WPUB4_address                            0x095
#define WPUB4_position                           0x4
#define WPUB4_size                               0x1
#define WPUB4_value_mask                         0x10
#define WPUB4_clear_mask                         0xEF

#define WPUB5                                    0x5
#define WPUB5_address                            0x095
#define WPUB5_position                           0x5
#define WPUB5_size                               0x1
#define WPUB5_value_mask                         0x20
#define WPUB5_clear_mask                         0xDF

#define WPUB6                                    0x6
#define WPUB6_address                            0x095
#define WPUB6_position                           0x6
#define WPUB6_size                               0x1
#define WPUB6_value_mask                         0x40
#define WPUB6_clear_mask                         0xBF

#define WPUB7                                    0x7
#define WPUB7_address                            0x095
#define WPUB7_position                           0x7
#define WPUB7_size                               0x1
#define WPUB7_value_mask                         0x80
#define WPUB7_clear_mask                         0x7F


/*--------------------------------------------------------------#
| IOCB                                                     0x96 |
#---------------------------------------------------------------#
| IOCB7 | IOCB6 | IOCB5 | IOCB4 | IOCB3 | IOCB2 | IOCB1 | IOCB0 |
#---------------------------------------------------------------#
| 7     | 6     | 5     | 4     | 3     | 2     | 1     | 0     |
#--------------------------------------------------------------*/

#define IOCB                                     0x0
#define IOCB_address                             0x096
#define IOCB_position                            0x0
#define IOCB_size                                0x8
#define IOCB_value_mask                          0xFF
#define IOCB_clear_mask                          0x0

#define IOCB0                                    0x0
#define IOCB0_address                            0x096
#define IOCB0_position                           0x0
#define IOCB0_size                               0x1
#define IOCB0_value_mask                         0x1
#define IOCB0_clear_mask                         0xFE

#define IOCB1                                    0x1
#define IOCB1_address                            0x096
#define IOCB1_position                           0x1
#define IOCB1_size                               0x1
#define IOCB1_value_mask                         0x2
#define IOCB1_clear_mask                         0xFD

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

#define IOCB4                                    0x4
#define IOCB4_address                            0x096
#define IOCB4_position                           0x4
#define IOCB4_size                               0x1
#define IOCB4_value_mask                         0x10
#define IOCB4_clear_mask                         0xEF

#define IOCB5                                    0x5
#define IOCB5_address                            0x096
#define IOCB5_position                           0x5
#define IOCB5_size                               0x1
#define IOCB5_value_mask                         0x20
#define IOCB5_clear_mask                         0xDF

#define IOCB6                                    0x6
#define IOCB6_address                            0x096
#define IOCB6_position                           0x6
#define IOCB6_size                               0x1
#define IOCB6_value_mask                         0x40
#define IOCB6_clear_mask                         0xBF

#define IOCB7                                    0x7
#define IOCB7_address                            0x096
#define IOCB7_position                           0x7
#define IOCB7_size                               0x1
#define IOCB7_value_mask                         0x80
#define IOCB7_clear_mask                         0x7F


/*----------------------------------------------------------------#
| T3CON                                                      0x97 |
#-----------------------------------------------------------------#
| TMR3CS1 | TMR3CS0 | T3CKPS1 | T3CKPS0 | - | T3SYNC | - | TMR3ON |
#-----------------------------------------------------------------#
| 7       | 6       | 5       | 4       | 3 | 2      | 1 | 0      |
#----------------------------------------------------------------*/

#define T3CON                                    0x0
#define T3CON_address                            0x097
#define T3CON_position                           0x0
#define T3CON_size                               0x8
#define T3CON_value_mask                         0xFF
#define T3CON_clear_mask                         0x0

#define TMR3ON                                   0x0
#define TMR3ON_address                           0x097
#define TMR3ON_position                          0x0
#define TMR3ON_size                              0x1
#define TMR3ON_value_mask                        0x1
#define TMR3ON_clear_mask                        0xFE

#define T3SYNC                                   0x2
#define T3SYNC_address                           0x097
#define T3SYNC_position                          0x2
#define T3SYNC_size                              0x1
#define T3SYNC_value_mask                        0x4
#define T3SYNC_clear_mask                        0xFB

#define T3CKPS                                   0x4
#define T3CKPS_address                           0x097
#define T3CKPS_position                          0x4
#define T3CKPS_size                              0x2
#define T3CKPS_value_mask                        0x30
#define T3CKPS_clear_mask                        0xCF

#define T3CKPS0                                  0x4
#define T3CKPS0_address                          0x097
#define T3CKPS0_position                         0x4
#define T3CKPS0_size                             0x1
#define T3CKPS0_value_mask                       0x10
#define T3CKPS0_clear_mask                       0xEF

#define T3CKPS1                                  0x5
#define T3CKPS1_address                          0x097
#define T3CKPS1_position                         0x5
#define T3CKPS1_size                             0x1
#define T3CKPS1_value_mask                       0x20
#define T3CKPS1_clear_mask                       0xDF

#define TMR3CS0                                  0x6
#define TMR3CS0_address                          0x097
#define TMR3CS0_position                         0x6
#define TMR3CS0_size                             0x1
#define TMR3CS0_value_mask                       0x40
#define TMR3CS0_clear_mask                       0xBF

#define TMR3CS                                   0x6
#define TMR3CS_address                           0x097
#define TMR3CS_position                          0x6
#define TMR3CS_size                              0x2
#define TMR3CS_value_mask                        0xC0
#define TMR3CS_clear_mask                        0x3F

#define TMR3CS1                                  0x7
#define TMR3CS1_address                          0x097
#define TMR3CS1_position                         0x7
#define TMR3CS1_size                             0x1
#define TMR3CS1_value_mask                       0x80
#define TMR3CS1_clear_mask                       0x7F


/*--------------------------------------------------#
| TXSTA                                        0x98 |
#---------------------------------------------------#
| CSRC | TX9 | TXEN | SYNC | - | BRGH | TRMT | TX9D |
#---------------------------------------------------#
| 7    | 6   | 5    | 4    | 3 | 2    | 1    | 0    |
#--------------------------------------------------*/

#define TXSTA                                    0x0
#define TXSTA_address                            0x098
#define TXSTA_position                           0x0
#define TXSTA_size                               0x8
#define TXSTA_value_mask                         0xFF
#define TXSTA_clear_mask                         0x0

#define TX9D                                     0x0
#define TX9D_address                             0x098
#define TX9D_position                            0x0
#define TX9D_size                                0x1
#define TX9D_value_mask                          0x1
#define TX9D_clear_mask                          0xFE

#define TRMT                                     0x1
#define TRMT_address                             0x098
#define TRMT_position                            0x1
#define TRMT_size                                0x1
#define TRMT_value_mask                          0x2
#define TRMT_clear_mask                          0xFD

#define BRGH                                     0x2
#define BRGH_address                             0x098
#define BRGH_position                            0x2
#define BRGH_size                                0x1
#define BRGH_value_mask                          0x4
#define BRGH_clear_mask                          0xFB

#define SYNC                                     0x4
#define SYNC_address                             0x098
#define SYNC_position                            0x4
#define SYNC_size                                0x1
#define SYNC_value_mask                          0x10
#define SYNC_clear_mask                          0xEF

#define TXEN                                     0x5
#define TXEN_address                             0x098
#define TXEN_position                            0x5
#define TXEN_size                                0x1
#define TXEN_value_mask                          0x20
#define TXEN_clear_mask                          0xDF

#define TX9                                      0x6
#define TX9_address                              0x098
#define TX9_position                             0x6
#define TX9_size                                 0x1
#define TX9_value_mask                           0x40
#define TX9_clear_mask                           0xBF

#define CSRC                                     0x7
#define CSRC_address                             0x098
#define CSRC_position                            0x7
#define CSRC_size                                0x1
#define CSRC_value_mask                          0x80
#define CSRC_clear_mask                          0x7F


/*----------------------------------------#
| APFCON                             0x9C |
#-----------------------------------------#
| - | - | - | - | - | - | SSSEL | CCP2SEL |
#-----------------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1     | 0       |
#----------------------------------------*/

#define APFCON                                   0x0
#define APFCON_address                           0x09C
#define APFCON_position                          0x0
#define APFCON_size                              0x8
#define APFCON_value_mask                        0xFF
#define APFCON_clear_mask                        0x0

#define CCP2SEL                                  0x0
#define CCP2SEL_address                          0x09C
#define CCP2SEL_position                         0x0
#define CCP2SEL_size                             0x1
#define CCP2SEL_value_mask                       0x1
#define CCP2SEL_clear_mask                       0xFE

#define SSSEL                                    0x1
#define SSSEL_address                            0x09C
#define SSSEL_position                           0x1
#define SSSEL_size                               0x1
#define SSSEL_value_mask                         0x2
#define SSSEL_clear_mask                         0xFD


/*-------------------------------------------------------------#
| FVRCON                                                  0x9D |
#--------------------------------------------------------------#
| FVRRDY | FVREN | - | - | CDAFVR1 | CDAFVR0 | ADFVR1 | ADFVR0 |
#--------------------------------------------------------------#
| 7      | 6     | 5 | 4 | 3       | 2       | 1      | 0      |
#-------------------------------------------------------------*/

#define FVRCON                                   0x0
#define FVRCON_address                           0x09D
#define FVRCON_position                          0x0
#define FVRCON_size                              0x8
#define FVRCON_value_mask                        0xFF
#define FVRCON_clear_mask                        0x0

#define ADFVR0                                   0x0
#define ADFVR0_address                           0x09D
#define ADFVR0_position                          0x0
#define ADFVR0_size                              0x1
#define ADFVR0_value_mask                        0x1
#define ADFVR0_clear_mask                        0xFE

#define ADFVR                                    0x0
#define ADFVR_address                            0x09D
#define ADFVR_position                           0x0
#define ADFVR_size                               0x2
#define ADFVR_value_mask                         0x3
#define ADFVR_clear_mask                         0xFC

#define ADFVR1                                   0x1
#define ADFVR1_address                           0x09D
#define ADFVR1_position                          0x1
#define ADFVR1_size                              0x1
#define ADFVR1_value_mask                        0x2
#define ADFVR1_clear_mask                        0xFD

#define CDAFVR0                                  0x2
#define CDAFVR0_address                          0x09D
#define CDAFVR0_position                         0x2
#define CDAFVR0_size                             0x1
#define CDAFVR0_value_mask                       0x4
#define CDAFVR0_clear_mask                       0xFB

#define CDAFVR                                   0x2
#define CDAFVR_address                           0x09D
#define CDAFVR_position                          0x2
#define CDAFVR_size                              0x2
#define CDAFVR_value_mask                        0xC
#define CDAFVR_clear_mask                        0xF3

#define CDAFVR1                                  0x3
#define CDAFVR1_address                          0x09D
#define CDAFVR1_position                         0x3
#define CDAFVR1_size                             0x1
#define CDAFVR1_value_mask                       0x8
#define CDAFVR1_clear_mask                       0xF7

#define FVREN                                    0x6
#define FVREN_address                            0x09D
#define FVREN_position                           0x6
#define FVREN_size                               0x1
#define FVREN_value_mask                         0x40
#define FVREN_clear_mask                         0xBF

#define FVRRDY                                   0x7
#define FVRRDY_address                           0x09D
#define FVRRDY_position                          0x7
#define FVRRDY_size                              0x1
#define FVRRDY_value_mask                        0x80
#define FVRRDY_clear_mask                        0x7F


/*--------------------------------------------------------------------------#
| T3GCON                                                               0x9E |
#---------------------------------------------------------------------------#
| TMR3GE | T3GPOL | T3GTM | T3GSPM | T3GGO_nDONE | T3GVAL | T3GSS1 | T3GSS0 |
#---------------------------------------------------------------------------#
| 7      | 6      | 5     | 4      | 3           | 2      | 1      | 0      |
#--------------------------------------------------------------------------*/

#define T3GCON                                   0x0
#define T3GCON_address                           0x09E
#define T3GCON_position                          0x0
#define T3GCON_size                              0x8
#define T3GCON_value_mask                        0xFF
#define T3GCON_clear_mask                        0x0

#define T3GSS0                                   0x0
#define T3GSS0_address                           0x09E
#define T3GSS0_position                          0x0
#define T3GSS0_size                              0x1
#define T3GSS0_value_mask                        0x1
#define T3GSS0_clear_mask                        0xFE

#define T3GSS                                    0x0
#define T3GSS_address                            0x09E
#define T3GSS_position                           0x0
#define T3GSS_size                               0x2
#define T3GSS_value_mask                         0x3
#define T3GSS_clear_mask                         0xFC

#define T3GSS1                                   0x1
#define T3GSS1_address                           0x09E
#define T3GSS1_position                          0x1
#define T3GSS1_size                              0x1
#define T3GSS1_value_mask                        0x2
#define T3GSS1_clear_mask                        0xFD

#define T3GVAL                                   0x2
#define T3GVAL_address                           0x09E
#define T3GVAL_position                          0x2
#define T3GVAL_size                              0x1
#define T3GVAL_value_mask                        0x4
#define T3GVAL_clear_mask                        0xFB

#define T3GGO_nDONE                              0x3
#define T3GGO_nDONE_address                      0x09E
#define T3GGO_nDONE_position                     0x3
#define T3GGO_nDONE_size                         0x1
#define T3GGO_nDONE_value_mask                   0x8
#define T3GGO_nDONE_clear_mask                   0xF7

#define T3GSPM                                   0x4
#define T3GSPM_address                           0x09E
#define T3GSPM_position                          0x4
#define T3GSPM_size                              0x1
#define T3GSPM_value_mask                        0x10
#define T3GSPM_clear_mask                        0xEF

#define T3GTM                                    0x5
#define T3GTM_address                            0x09E
#define T3GTM_position                           0x5
#define T3GTM_size                               0x1
#define T3GTM_value_mask                         0x20
#define T3GTM_clear_mask                         0xDF

#define T3GPOL                                   0x6
#define T3GPOL_address                           0x09E
#define T3GPOL_position                          0x6
#define T3GPOL_size                              0x1
#define T3GPOL_value_mask                        0x40
#define T3GPOL_clear_mask                        0xBF

#define TMR3GE                                   0x7
#define TMR3GE_address                           0x09E
#define TMR3GE_position                          0x7
#define TMR3GE_size                              0x1
#define TMR3GE_value_mask                        0x80
#define TMR3GE_clear_mask                        0x7F


/*----------------------------------------------------#
| ADCON1                                         0x9F |
#-----------------------------------------------------#
| - | ADCS2 | ADCS1 | ADCS0 | - | - | ADREF1 | ADREF0 |
#-----------------------------------------------------#
| 7 | 6     | 5     | 4     | 3 | 2 | 1      | 0      |
#----------------------------------------------------*/

#define ADCON1                                   0x0
#define ADCON1_address                           0x09F
#define ADCON1_position                          0x0
#define ADCON1_size                              0x8
#define ADCON1_value_mask                        0xFF
#define ADCON1_clear_mask                        0x0

#define ADREF                                    0x0
#define ADREF_address                            0x09F
#define ADREF_position                           0x0
#define ADREF_size                               0x2
#define ADREF_value_mask                         0x3
#define ADREF_clear_mask                         0xFC

#define ADREF0                                   0x0
#define ADREF0_address                           0x09F
#define ADREF0_position                          0x0
#define ADREF0_size                              0x1
#define ADREF0_value_mask                        0x1
#define ADREF0_clear_mask                        0xFE

#define ADREF1                                   0x1
#define ADREF1_address                           0x09F
#define ADREF1_position                          0x1
#define ADREF1_size                              0x1
#define ADREF1_value_mask                        0x2
#define ADREF1_clear_mask                        0xFD

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


/*-------------------------------------------------------------#
| TACON                                                  0x105 |
#--------------------------------------------------------------#
| TMRAON | - | TACS | TASE | TMRAPSA | TAPS2 | TAPS1 | TMRAPS0 |
#--------------------------------------------------------------#
| 7      | 6 | 5    | 4    | 3       | 2     | 1     | 0       |
#-------------------------------------------------------------*/

#define TACON                                    0x0
#define TACON_address                            0x105
#define TACON_position                           0x0
#define TACON_size                               0x8
#define TACON_value_mask                         0xFF
#define TACON_clear_mask                         0x0

#define TAPS                                     0x0
#define TAPS_address                             0x105
#define TAPS_position                            0x0
#define TAPS_size                                0x3
#define TAPS_value_mask                          0x7
#define TAPS_clear_mask                          0xF8

#define TMRAPS0                                  0x0
#define TMRAPS0_address                          0x105
#define TMRAPS0_position                         0x0
#define TMRAPS0_size                             0x1
#define TMRAPS0_value_mask                       0x1
#define TMRAPS0_clear_mask                       0xFE

#define TAPS0                                    0x0
#define TAPS0_address                            0x105
#define TAPS0_position                           0x0
#define TAPS0_size                               0x1
#define TAPS0_value_mask                         0x1
#define TAPS0_clear_mask                         0xFE

#define TMRAPS                                   0x0
#define TMRAPS_address                           0x105
#define TMRAPS_position                          0x0
#define TMRAPS_size                              0x3
#define TMRAPS_value_mask                        0x7
#define TMRAPS_clear_mask                        0xF8

#define TAPS1                                    0x1
#define TAPS1_address                            0x105
#define TAPS1_position                           0x1
#define TAPS1_size                               0x1
#define TAPS1_value_mask                         0x2
#define TAPS1_clear_mask                         0xFD

#define TMRAPS1                                  0x1
#define TMRAPS1_address                          0x105
#define TMRAPS1_position                         0x1
#define TMRAPS1_size                             0x1
#define TMRAPS1_value_mask                       0x2
#define TMRAPS1_clear_mask                       0xFD

#define TAPS2                                    0x2
#define TAPS2_address                            0x105
#define TAPS2_position                           0x2
#define TAPS2_size                               0x1
#define TAPS2_value_mask                         0x4
#define TAPS2_clear_mask                         0xFB

#define TMRAPS2                                  0x2
#define TMRAPS2_address                          0x105
#define TMRAPS2_position                         0x2
#define TMRAPS2_size                             0x1
#define TMRAPS2_value_mask                       0x4
#define TMRAPS2_clear_mask                       0xFB

#define TMRAPSA                                  0x3
#define TMRAPSA_address                          0x105
#define TMRAPSA_position                         0x3
#define TMRAPSA_size                             0x1
#define TMRAPSA_value_mask                       0x8
#define TMRAPSA_clear_mask                       0xF7

#define TAPSA                                    0x3
#define TAPSA_address                            0x105
#define TAPSA_position                           0x3
#define TAPSA_size                               0x1
#define TAPSA_value_mask                         0x8
#define TAPSA_clear_mask                         0xF7

#define TASE                                     0x4
#define TASE_address                             0x105
#define TASE_position                            0x4
#define TASE_size                                0x1
#define TASE_value_mask                          0x10
#define TASE_clear_mask                          0xEF

#define TMRASE                                   0x4
#define TMRASE_address                           0x105
#define TMRASE_position                          0x4
#define TMRASE_size                              0x1
#define TMRASE_value_mask                        0x10
#define TMRASE_clear_mask                        0xEF

#define TACS                                     0x5
#define TACS_address                             0x105
#define TACS_position                            0x5
#define TACS_size                                0x1
#define TACS_value_mask                          0x20
#define TACS_clear_mask                          0xDF

#define TMRACS                                   0x5
#define TMRACS_address                           0x105
#define TMRACS_position                          0x5
#define TMRACS_size                              0x1
#define TMRACS_value_mask                        0x20
#define TMRACS_clear_mask                        0xDF

#define TMRAON                                   0x7
#define TMRAON_address                           0x105
#define TMRAON_position                          0x7
#define TMRAON_size                              0x1
#define TMRAON_value_mask                        0x80
#define TMRAON_clear_mask                        0x7F


/*----------------------------------------------------------------#
| CPSBCON0                                                  0x106 |
#-----------------------------------------------------------------#
| CPSBON | CPSBRM | - | - | CPSBRNG1 | CPSBRNG0 | CPSBOUT | TBXCS |
#-----------------------------------------------------------------#
| 7      | 6      | 5 | 4 | 3        | 2        | 1       | 0     |
#----------------------------------------------------------------*/

#define CPSBCON0                                 0x0
#define CPSBCON0_address                         0x106
#define CPSBCON0_position                        0x0
#define CPSBCON0_size                            0x8
#define CPSBCON0_value_mask                      0xFF
#define CPSBCON0_clear_mask                      0x0

#define TBXCS                                    0x0
#define TBXCS_address                            0x106
#define TBXCS_position                           0x0
#define TBXCS_size                               0x1
#define TBXCS_value_mask                         0x1
#define TBXCS_clear_mask                         0xFE

#define CPSBOUT                                  0x1
#define CPSBOUT_address                          0x106
#define CPSBOUT_position                         0x1
#define CPSBOUT_size                             0x1
#define CPSBOUT_value_mask                       0x2
#define CPSBOUT_clear_mask                       0xFD

#define CPSBRNG0                                 0x2
#define CPSBRNG0_address                         0x106
#define CPSBRNG0_position                        0x2
#define CPSBRNG0_size                            0x1
#define CPSBRNG0_value_mask                      0x4
#define CPSBRNG0_clear_mask                      0xFB

#define CPSBRNG                                  0x2
#define CPSBRNG_address                          0x106
#define CPSBRNG_position                         0x2
#define CPSBRNG_size                             0x2
#define CPSBRNG_value_mask                       0xC
#define CPSBRNG_clear_mask                       0xF3

#define CPSBRNG1                                 0x3
#define CPSBRNG1_address                         0x106
#define CPSBRNG1_position                        0x3
#define CPSBRNG1_size                            0x1
#define CPSBRNG1_value_mask                      0x8
#define CPSBRNG1_clear_mask                      0xF7

#define CPSBRM                                   0x6
#define CPSBRM_address                           0x106
#define CPSBRM_position                          0x6
#define CPSBRM_size                              0x1
#define CPSBRM_value_mask                        0x40
#define CPSBRM_clear_mask                        0xBF

#define CPSBON                                   0x7
#define CPSBON_address                           0x106
#define CPSBON_position                          0x7
#define CPSBON_size                              0x1
#define CPSBON_value_mask                        0x80
#define CPSBON_clear_mask                        0x7F


/*------------------------------------------------------#
| CPSBCON1                                        0x107 |
#-------------------------------------------------------#
| - | - | - | - | CPSBCH3 | CPSBCH2 | CPSBCH1 | CPSBCH0 |
#-------------------------------------------------------#
| 7 | 6 | 5 | 4 | 3       | 2       | 1       | 0       |
#------------------------------------------------------*/

#define CPSBCON1                                 0x0
#define CPSBCON1_address                         0x107
#define CPSBCON1_position                        0x0
#define CPSBCON1_size                            0x8
#define CPSBCON1_value_mask                      0xFF
#define CPSBCON1_clear_mask                      0x0

#define CPSBCH                                   0x0
#define CPSBCH_address                           0x107
#define CPSBCH_position                          0x0
#define CPSBCH_size                              0x4
#define CPSBCH_value_mask                        0xF
#define CPSBCH_clear_mask                        0xF0

#define CPSBCH0                                  0x0
#define CPSBCH0_address                          0x107
#define CPSBCH0_position                         0x0
#define CPSBCH0_size                             0x1
#define CPSBCH0_value_mask                       0x1
#define CPSBCH0_clear_mask                       0xFE

#define CPSBCH1                                  0x1
#define CPSBCH1_address                          0x107
#define CPSBCH1_position                         0x1
#define CPSBCH1_size                             0x1
#define CPSBCH1_value_mask                       0x2
#define CPSBCH1_clear_mask                       0xFD

#define CPSBCH2                                  0x2
#define CPSBCH2_address                          0x107
#define CPSBCH2_position                         0x2
#define CPSBCH2_size                             0x1
#define CPSBCH2_value_mask                       0x4
#define CPSBCH2_clear_mask                       0xFB

#define CPSBCH3                                  0x3
#define CPSBCH3_address                          0x107
#define CPSBCH3_position                         0x3
#define CPSBCH3_size                             0x1
#define CPSBCH3_value_mask                       0x8
#define CPSBCH3_clear_mask                       0xF7


/*----------------------------------------------------------------#
| CPSACON0                                                  0x108 |
#-----------------------------------------------------------------#
| CPSAON | CPSARM | - | - | CPSARNG1 | CPSARNG0 | CPSAOUT | TAXCS |
#-----------------------------------------------------------------#
| 7      | 6      | 5 | 4 | 3        | 2        | 1       | 0     |
#----------------------------------------------------------------*/

#define CPSACON0                                 0x0
#define CPSACON0_address                         0x108
#define CPSACON0_position                        0x0
#define CPSACON0_size                            0x8
#define CPSACON0_value_mask                      0xFF
#define CPSACON0_clear_mask                      0x0

#define TAXCS                                    0x0
#define TAXCS_address                            0x108
#define TAXCS_position                           0x0
#define TAXCS_size                               0x1
#define TAXCS_value_mask                         0x1
#define TAXCS_clear_mask                         0xFE

#define CPSAOUT                                  0x1
#define CPSAOUT_address                          0x108
#define CPSAOUT_position                         0x1
#define CPSAOUT_size                             0x1
#define CPSAOUT_value_mask                       0x2
#define CPSAOUT_clear_mask                       0xFD

#define CPSARNG0                                 0x2
#define CPSARNG0_address                         0x108
#define CPSARNG0_position                        0x2
#define CPSARNG0_size                            0x1
#define CPSARNG0_value_mask                      0x4
#define CPSARNG0_clear_mask                      0xFB

#define CPSARNG                                  0x2
#define CPSARNG_address                          0x108
#define CPSARNG_position                         0x2
#define CPSARNG_size                             0x2
#define CPSARNG_value_mask                       0xC
#define CPSARNG_clear_mask                       0xF3

#define CPSARNG1                                 0x3
#define CPSARNG1_address                         0x108
#define CPSARNG1_position                        0x3
#define CPSARNG1_size                            0x1
#define CPSARNG1_value_mask                      0x8
#define CPSARNG1_clear_mask                      0xF7

#define CPSARM                                   0x6
#define CPSARM_address                           0x108
#define CPSARM_position                          0x6
#define CPSARM_size                              0x1
#define CPSARM_value_mask                        0x40
#define CPSARM_clear_mask                        0xBF

#define CPSAON                                   0x7
#define CPSAON_address                           0x108
#define CPSAON_position                          0x7
#define CPSAON_size                              0x1
#define CPSAON_value_mask                        0x80
#define CPSAON_clear_mask                        0x7F


/*------------------------------------------------------#
| CPSACON1                                        0x109 |
#-------------------------------------------------------#
| - | - | - | - | CPSACH3 | CPSACH2 | CPSACH1 | CPSACH0 |
#-------------------------------------------------------#
| 7 | 6 | 5 | 4 | 3       | 2       | 1       | 0       |
#------------------------------------------------------*/

#define CPSACON1                                 0x0
#define CPSACON1_address                         0x109
#define CPSACON1_position                        0x0
#define CPSACON1_size                            0x8
#define CPSACON1_value_mask                      0xFF
#define CPSACON1_clear_mask                      0x0

#define CPSACH                                   0x0
#define CPSACH_address                           0x109
#define CPSACH_position                          0x0
#define CPSACH_size                              0x4
#define CPSACH_value_mask                        0xF
#define CPSACH_clear_mask                        0xF0

#define CPSACH0                                  0x0
#define CPSACH0_address                          0x109
#define CPSACH0_position                         0x0
#define CPSACH0_size                             0x1
#define CPSACH0_value_mask                       0x1
#define CPSACH0_clear_mask                       0xFE

#define CPSACH1                                  0x1
#define CPSACH1_address                          0x109
#define CPSACH1_position                         0x1
#define CPSACH1_size                             0x1
#define CPSACH1_value_mask                       0x2
#define CPSACH1_clear_mask                       0xFD

#define CPSACH2                                  0x2
#define CPSACH2_address                          0x109
#define CPSACH2_position                         0x2
#define CPSACH2_size                             0x1
#define CPSACH2_value_mask                       0x4
#define CPSACH2_clear_mask                       0xFB

#define CPSACH3                                  0x3
#define CPSACH3_address                          0x109
#define CPSACH3_position                         0x3
#define CPSACH3_size                             0x1
#define CPSACH3_value_mask                       0x8
#define CPSACH3_clear_mask                       0xF7


/*---------------------------------------------------------------#
| TBCON                                                    0x111 |
#----------------------------------------------------------------#
| TMRBON | - | TMRBCS | TBSE | TBPSA | TMRBPS2 | TMRBPS1 | TBPS0 |
#----------------------------------------------------------------#
| 7      | 6 | 5      | 4    | 3     | 2       | 1       | 0     |
#---------------------------------------------------------------*/

#define TBCON                                    0x0
#define TBCON_address                            0x111
#define TBCON_position                           0x0
#define TBCON_size                               0x8
#define TBCON_value_mask                         0xFF
#define TBCON_clear_mask                         0x0

#define TBPS                                     0x0
#define TBPS_address                             0x111
#define TBPS_position                            0x0
#define TBPS_size                                0x3
#define TBPS_value_mask                          0x7
#define TBPS_clear_mask                          0xF8

#define TBPS0                                    0x0
#define TBPS0_address                            0x111
#define TBPS0_position                           0x0
#define TBPS0_size                               0x1
#define TBPS0_value_mask                         0x1
#define TBPS0_clear_mask                         0xFE

#define TMRBPS0                                  0x0
#define TMRBPS0_address                          0x111
#define TMRBPS0_position                         0x0
#define TMRBPS0_size                             0x1
#define TMRBPS0_value_mask                       0x1
#define TMRBPS0_clear_mask                       0xFE

#define TMRBPS                                   0x0
#define TMRBPS_address                           0x111
#define TMRBPS_position                          0x0
#define TMRBPS_size                              0x3
#define TMRBPS_value_mask                        0x7
#define TMRBPS_clear_mask                        0xF8

#define TMRBPS1                                  0x1
#define TMRBPS1_address                          0x111
#define TMRBPS1_position                         0x1
#define TMRBPS1_size                             0x1
#define TMRBPS1_value_mask                       0x2
#define TMRBPS1_clear_mask                       0xFD

#define TBPS1                                    0x1
#define TBPS1_address                            0x111
#define TBPS1_position                           0x1
#define TBPS1_size                               0x1
#define TBPS1_value_mask                         0x2
#define TBPS1_clear_mask                         0xFD

#define TMRBPS2                                  0x2
#define TMRBPS2_address                          0x111
#define TMRBPS2_position                         0x2
#define TMRBPS2_size                             0x1
#define TMRBPS2_value_mask                       0x4
#define TMRBPS2_clear_mask                       0xFB

#define TBPS2                                    0x2
#define TBPS2_address                            0x111
#define TBPS2_position                           0x2
#define TBPS2_size                               0x1
#define TBPS2_value_mask                         0x4
#define TBPS2_clear_mask                         0xFB

#define TBPSA                                    0x3
#define TBPSA_address                            0x111
#define TBPSA_position                           0x3
#define TBPSA_size                               0x1
#define TBPSA_value_mask                         0x8
#define TBPSA_clear_mask                         0xF7

#define TMRBPSA                                  0x3
#define TMRBPSA_address                          0x111
#define TMRBPSA_position                         0x3
#define TMRBPSA_size                             0x1
#define TMRBPSA_value_mask                       0x8
#define TMRBPSA_clear_mask                       0xF7

#define TBSE                                     0x4
#define TBSE_address                             0x111
#define TBSE_position                            0x4
#define TBSE_size                                0x1
#define TBSE_value_mask                          0x10
#define TBSE_clear_mask                          0xEF

#define TMRBSE                                   0x4
#define TMRBSE_address                           0x111
#define TMRBSE_position                          0x4
#define TMRBSE_size                              0x1
#define TMRBSE_value_mask                        0x10
#define TMRBSE_clear_mask                        0xEF

#define TMRBCS                                   0x5
#define TMRBCS_address                           0x111
#define TMRBCS_position                          0x5
#define TMRBCS_size                              0x1
#define TMRBCS_value_mask                        0x20
#define TMRBCS_clear_mask                        0xDF

#define TBCS                                     0x5
#define TBCS_address                             0x111
#define TBCS_position                            0x5
#define TBCS_size                                0x1
#define TBCS_value_mask                          0x20
#define TBCS_clear_mask                          0xDF

#define TMRBON                                   0x7
#define TMRBON_address                           0x111
#define TMRBON_position                          0x7
#define TMRBON_size                              0x1
#define TMRBON_value_mask                        0x80
#define TMRBON_clear_mask                        0x7F


/*-------------------------------------------------------#
| DACCON0                                          0x113 |
#--------------------------------------------------------#
| DACEN | DACLPS | DACOE | - | DACPSS1 | DACPSS0 | - | - |
#--------------------------------------------------------#
| 7     | 6      | 5     | 4 | 3       | 2       | 1 | 0 |
#-------------------------------------------------------*/

#define DACCON0                                  0x0
#define DACCON0_address                          0x113
#define DACCON0_position                         0x0
#define DACCON0_size                             0x8
#define DACCON0_value_mask                       0xFF
#define DACCON0_clear_mask                       0x0

#define DACPSS                                   0x2
#define DACPSS_address                           0x113
#define DACPSS_position                          0x2
#define DACPSS_size                              0x2
#define DACPSS_value_mask                        0xC
#define DACPSS_clear_mask                        0xF3

#define DACPSS0                                  0x2
#define DACPSS0_address                          0x113
#define DACPSS0_position                         0x2
#define DACPSS0_size                             0x1
#define DACPSS0_value_mask                       0x4
#define DACPSS0_clear_mask                       0xFB

#define DACPSS1                                  0x3
#define DACPSS1_address                          0x113
#define DACPSS1_position                         0x3
#define DACPSS1_size                             0x1
#define DACPSS1_value_mask                       0x8
#define DACPSS1_clear_mask                       0xF7

#define DACOE                                    0x5
#define DACOE_address                            0x113
#define DACOE_position                           0x5
#define DACOE_size                               0x1
#define DACOE_value_mask                         0x20
#define DACOE_clear_mask                         0xDF

#define DACLPS                                   0x6
#define DACLPS_address                           0x113
#define DACLPS_position                          0x6
#define DACLPS_size                              0x1
#define DACLPS_value_mask                        0x40
#define DACLPS_clear_mask                        0xBF

#define DACEN                                    0x7
#define DACEN_address                            0x113
#define DACEN_position                           0x7
#define DACEN_size                               0x1
#define DACEN_value_mask                         0x80
#define DACEN_clear_mask                         0x7F


/*--------------------------------------------------#
| DACCON1                                     0x114 |
#---------------------------------------------------#
| - | - | - | DACR4 | DACR3 | DACR2 | DACR1 | DACR0 |
#---------------------------------------------------#
| 7 | 6 | 5 | 4     | 3     | 2     | 1     | 0     |
#--------------------------------------------------*/

#define DACCON1                                  0x0
#define DACCON1_address                          0x114
#define DACCON1_position                         0x0
#define DACCON1_size                             0x8
#define DACCON1_value_mask                       0xFF
#define DACCON1_clear_mask                       0x0

#define DACR0                                    0x0
#define DACR0_address                            0x114
#define DACR0_position                           0x0
#define DACR0_size                               0x1
#define DACR0_value_mask                         0x1
#define DACR0_clear_mask                         0xFE

#define DACR                                     0x0
#define DACR_address                             0x114
#define DACR_position                            0x0
#define DACR_size                                0x5
#define DACR_value_mask                          0x1F
#define DACR_clear_mask                          0xE0

#define DACR1                                    0x1
#define DACR1_address                            0x114
#define DACR1_position                           0x1
#define DACR1_size                               0x1
#define DACR1_value_mask                         0x2
#define DACR1_clear_mask                         0xFD

#define DACR2                                    0x2
#define DACR2_address                            0x114
#define DACR2_position                           0x2
#define DACR2_size                               0x1
#define DACR2_value_mask                         0x4
#define DACR2_clear_mask                         0xFB

#define DACR3                                    0x3
#define DACR3_address                            0x114
#define DACR3_position                           0x3
#define DACR3_size                               0x1
#define DACR3_value_mask                         0x8
#define DACR3_clear_mask                         0xF7

#define DACR4                                    0x4
#define DACR4_address                            0x114
#define DACR4_position                           0x4
#define DACR4_size                               0x1
#define DACR4_value_mask                         0x10
#define DACR4_clear_mask                         0xEF


/*--------------------------------------------------------------#
| ANSELA                                                  0x185 |
#---------------------------------------------------------------#
| ANSA7 | ANSA6 | ANSA5 | ANSA4 | ANSA3 | ANSA2 | ANSA1 | ANSA0 |
#---------------------------------------------------------------#
| 7     | 6     | 5     | 4     | 3     | 2     | 1     | 0     |
#--------------------------------------------------------------*/

#define ANSELA                                   0x0
#define ANSELA_address                           0x185
#define ANSELA_position                          0x0
#define ANSELA_size                              0x8
#define ANSELA_value_mask                        0xFF
#define ANSELA_clear_mask                        0x0

#define ANSA0                                    0x0
#define ANSA0_address                            0x185
#define ANSA0_position                           0x0
#define ANSA0_size                               0x1
#define ANSA0_value_mask                         0x1
#define ANSA0_clear_mask                         0xFE

#define ANSA                                     0x0
#define ANSA_address                             0x185
#define ANSA_position                            0x0
#define ANSA_size                                0x8
#define ANSA_value_mask                          0xFF
#define ANSA_clear_mask                          0x0

#define ANSA1                                    0x1
#define ANSA1_address                            0x185
#define ANSA1_position                           0x1
#define ANSA1_size                               0x1
#define ANSA1_value_mask                         0x2
#define ANSA1_clear_mask                         0xFD

#define ANSA2                                    0x2
#define ANSA2_address                            0x185
#define ANSA2_position                           0x2
#define ANSA2_size                               0x1
#define ANSA2_value_mask                         0x4
#define ANSA2_clear_mask                         0xFB

#define ANSA3                                    0x3
#define ANSA3_address                            0x185
#define ANSA3_position                           0x3
#define ANSA3_size                               0x1
#define ANSA3_value_mask                         0x8
#define ANSA3_clear_mask                         0xF7

#define ANSA4                                    0x4
#define ANSA4_address                            0x185
#define ANSA4_position                           0x4
#define ANSA4_size                               0x1
#define ANSA4_value_mask                         0x10
#define ANSA4_clear_mask                         0xEF

#define ANSA5                                    0x5
#define ANSA5_address                            0x185
#define ANSA5_position                           0x5
#define ANSA5_size                               0x1
#define ANSA5_value_mask                         0x20
#define ANSA5_clear_mask                         0xDF

#define ANSA6                                    0x6
#define ANSA6_address                            0x185
#define ANSA6_position                           0x6
#define ANSA6_size                               0x1
#define ANSA6_value_mask                         0x40
#define ANSA6_clear_mask                         0xBF

#define ANSA7                                    0x7
#define ANSA7_address                            0x185
#define ANSA7_position                           0x7
#define ANSA7_size                               0x1
#define ANSA7_value_mask                         0x80
#define ANSA7_clear_mask                         0x7F


/*--------------------------------------------------------------#
| ANSELB                                                  0x186 |
#---------------------------------------------------------------#
| ANSB7 | ANSB6 | ANSB5 | ANSB4 | ANSB3 | ANSB2 | ANSB1 | ANSB0 |
#---------------------------------------------------------------#
| 7     | 6     | 5     | 4     | 3     | 2     | 1     | 0     |
#--------------------------------------------------------------*/

#define ANSELB                                   0x0
#define ANSELB_address                           0x186
#define ANSELB_position                          0x0
#define ANSELB_size                              0x8
#define ANSELB_value_mask                        0xFF
#define ANSELB_clear_mask                        0x0

#define ANSB0                                    0x0
#define ANSB0_address                            0x186
#define ANSB0_position                           0x0
#define ANSB0_size                               0x1
#define ANSB0_value_mask                         0x1
#define ANSB0_clear_mask                         0xFE

#define ANSB                                     0x0
#define ANSB_address                             0x186
#define ANSB_position                            0x0
#define ANSB_size                                0x8
#define ANSB_value_mask                          0xFF
#define ANSB_clear_mask                          0x0

#define ANSB1                                    0x1
#define ANSB1_address                            0x186
#define ANSB1_position                           0x1
#define ANSB1_size                               0x1
#define ANSB1_value_mask                         0x2
#define ANSB1_clear_mask                         0xFD

#define ANSB2                                    0x2
#define ANSB2_address                            0x186
#define ANSB2_position                           0x2
#define ANSB2_size                               0x1
#define ANSB2_value_mask                         0x4
#define ANSB2_clear_mask                         0xFB

#define ANSB3                                    0x3
#define ANSB3_address                            0x186
#define ANSB3_position                           0x3
#define ANSB3_size                               0x1
#define ANSB3_value_mask                         0x8
#define ANSB3_clear_mask                         0xF7

#define ANSB4                                    0x4
#define ANSB4_address                            0x186
#define ANSB4_position                           0x4
#define ANSB4_size                               0x1
#define ANSB4_value_mask                         0x10
#define ANSB4_clear_mask                         0xEF

#define ANSB5                                    0x5
#define ANSB5_address                            0x186
#define ANSB5_position                           0x5
#define ANSB5_size                               0x1
#define ANSB5_value_mask                         0x20
#define ANSB5_clear_mask                         0xDF

#define ANSB6                                    0x6
#define ANSB6_address                            0x186
#define ANSB6_position                           0x6
#define ANSB6_size                               0x1
#define ANSB6_value_mask                         0x40
#define ANSB6_clear_mask                         0xBF

#define ANSB7                                    0x7
#define ANSB7_address                            0x186
#define ANSB7_position                           0x7
#define ANSB7_size                               0x1
#define ANSB7_value_mask                         0x80
#define ANSB7_clear_mask                         0x7F


/*------------------------------------------------------#
| ANSELC                                          0x187 |
#-------------------------------------------------------#
| ANSC7 | ANSC6 | ANSC5 | - | - | ANSC2 | ANSC1 | ANSC0 |
#-------------------------------------------------------#
| 7     | 6     | 5     | 4 | 3 | 2     | 1     | 0     |
#------------------------------------------------------*/

#define ANSELC                                   0x0
#define ANSELC_address                           0x187
#define ANSELC_position                          0x0
#define ANSELC_size                              0x8
#define ANSELC_value_mask                        0xFF
#define ANSELC_clear_mask                        0x0

#define ANSC0                                    0x0
#define ANSC0_address                            0x187
#define ANSC0_position                           0x0
#define ANSC0_size                               0x1
#define ANSC0_value_mask                         0x1
#define ANSC0_clear_mask                         0xFE

#define ANSC                                     0x0
#define ANSC_address                             0x187
#define ANSC_position                            0x0
#define ANSC_size                                0x8
#define ANSC_value_mask                          0xFF
#define ANSC_clear_mask                          0x0

#define ANSC1                                    0x1
#define ANSC1_address                            0x187
#define ANSC1_position                           0x1
#define ANSC1_size                               0x1
#define ANSC1_value_mask                         0x2
#define ANSC1_clear_mask                         0xFD

#define ANSC2                                    0x2
#define ANSC2_address                            0x187
#define ANSC2_position                           0x2
#define ANSC2_size                               0x1
#define ANSC2_value_mask                         0x4
#define ANSC2_clear_mask                         0xFB

#define ANSC5                                    0x5
#define ANSC5_address                            0x187
#define ANSC5_position                           0x5
#define ANSC5_size                               0x1
#define ANSC5_value_mask                         0x20
#define ANSC5_clear_mask                         0xDF

#define ANSC6                                    0x6
#define ANSC6_address                            0x187
#define ANSC6_position                           0x6
#define ANSC6_size                               0x1
#define ANSC6_value_mask                         0x40
#define ANSC6_clear_mask                         0xBF

#define ANSC7                                    0x7
#define ANSC7_address                            0x187
#define ANSC7_position                           0x7
#define ANSC7_size                               0x1
#define ANSC7_value_mask                         0x80
#define ANSC7_clear_mask                         0x7F


/*--------------------------------------------------------------#
| ANSELD                                                  0x188 |
#---------------------------------------------------------------#
| ANSD7 | ANSD6 | ANSD5 | ANSD4 | ANSD3 | ANSD2 | ANSD1 | ANSD0 |
#---------------------------------------------------------------#
| 7     | 6     | 5     | 4     | 3     | 2     | 1     | 0     |
#--------------------------------------------------------------*/

#define ANSELD                                   0x0
#define ANSELD_address                           0x188
#define ANSELD_position                          0x0
#define ANSELD_size                              0x8
#define ANSELD_value_mask                        0xFF
#define ANSELD_clear_mask                        0x0

#define ANSD                                     0x0
#define ANSD_address                             0x188
#define ANSD_position                            0x0
#define ANSD_size                                0x8
#define ANSD_value_mask                          0xFF
#define ANSD_clear_mask                          0x0

#define ANSD0                                    0x0
#define ANSD0_address                            0x188
#define ANSD0_position                           0x0
#define ANSD0_size                               0x1
#define ANSD0_value_mask                         0x1
#define ANSD0_clear_mask                         0xFE

#define ANSD1                                    0x1
#define ANSD1_address                            0x188
#define ANSD1_position                           0x1
#define ANSD1_size                               0x1
#define ANSD1_value_mask                         0x2
#define ANSD1_clear_mask                         0xFD

#define ANSD2                                    0x2
#define ANSD2_address                            0x188
#define ANSD2_position                           0x2
#define ANSD2_size                               0x1
#define ANSD2_value_mask                         0x4
#define ANSD2_clear_mask                         0xFB

#define ANSD3                                    0x3
#define ANSD3_address                            0x188
#define ANSD3_position                           0x3
#define ANSD3_size                               0x1
#define ANSD3_value_mask                         0x8
#define ANSD3_clear_mask                         0xF7

#define ANSD4                                    0x4
#define ANSD4_address                            0x188
#define ANSD4_position                           0x4
#define ANSD4_size                               0x1
#define ANSD4_value_mask                         0x10
#define ANSD4_clear_mask                         0xEF

#define ANSD5                                    0x5
#define ANSD5_address                            0x188
#define ANSD5_position                           0x5
#define ANSD5_size                               0x1
#define ANSD5_value_mask                         0x20
#define ANSD5_clear_mask                         0xDF

#define ANSD6                                    0x6
#define ANSD6_address                            0x188
#define ANSD6_position                           0x6
#define ANSD6_size                               0x1
#define ANSD6_value_mask                         0x40
#define ANSD6_clear_mask                         0xBF

#define ANSD7                                    0x7
#define ANSD7_address                            0x188
#define ANSD7_position                           0x7
#define ANSD7_size                               0x1
#define ANSD7_value_mask                         0x80
#define ANSD7_clear_mask                         0x7F


/*------------------------------------------#
| ANSELE                              0x189 |
#-------------------------------------------#
| - | - | - | - | - | ANSE2 | ANSE1 | ANSE0 |
#-------------------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2     | 1     | 0     |
#------------------------------------------*/

#define ANSELE                                   0x0
#define ANSELE_address                           0x189
#define ANSELE_position                          0x0
#define ANSELE_size                              0x8
#define ANSELE_value_mask                        0xFF
#define ANSELE_clear_mask                        0x0

#define ANSE                                     0x0
#define ANSE_address                             0x189
#define ANSE_position                            0x0
#define ANSE_size                                0x8
#define ANSE_value_mask                          0xFF
#define ANSE_clear_mask                          0x0

#define ANSE0                                    0x0
#define ANSE0_address                            0x189
#define ANSE0_position                           0x0
#define ANSE0_size                               0x1
#define ANSE0_value_mask                         0x1
#define ANSE0_clear_mask                         0xFE

#define ANSE1                                    0x1
#define ANSE1_address                            0x189
#define ANSE1_position                           0x1
#define ANSE1_size                               0x1
#define ANSE1_value_mask                         0x2
#define ANSE1_clear_mask                         0xFD

#define ANSE2                                    0x2
#define ANSE2_address                            0x189
#define ANSE2_position                           0x2
#define ANSE2_size                               0x1
#define ANSE2_value_mask                         0x4
#define ANSE2_clear_mask                         0xFB


/*-------------------------------#
| PMCON1                   0x18C |
#--------------------------------#
| - | - | - | - | - | - | - | RD |
#--------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0  |
#-------------------------------*/

#define PMCON1                                   0x0
#define PMCON1_address                           0x18C
#define PMCON1_position                          0x0
#define PMCON1_size                              0x8
#define PMCON1_value_mask                        0xFF
#define PMCON1_clear_mask                        0x0

#define RD                                       0x0
#define RD_address                               0x18C
#define RD_position                              0x0
#define RD_size                                  0x1
#define RD_value_mask                            0x1
#define RD_clear_mask                            0xFE

#endif // _PIC16LF707_H_
