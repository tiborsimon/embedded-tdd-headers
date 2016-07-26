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

#ifndef _PIC18C801_H_
#define _PIC18C801_H_


/*----------------------------------------------------------------------------#
| PORTA                                                                 0xF80 |
#-----------------------------------------------------------------------------#
| - | PORTA_RA6 | LVDIN | PORTA_RA4 | PORTA_RA3 | VREFN | PORTA_RA1 | ULPWUIN |
#-----------------------------------------------------------------------------#
| 7 | 6         | 5     | 4         | 3         | 2     | 1         | 0       |
#----------------------------------------------------------------------------*/

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

#define VREFN                                    0x2
#define VREFN_address                            0xF80
#define VREFN_position                           0x2
#define VREFN_size                               0x1
#define VREFN_value_mask                         0x4
#define VREFN_clear_mask                         0xFB

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

#define SS                                       0x5
#define SS_address                               0xF80
#define SS_position                              0x5
#define SS_size                                  0x1
#define SS_value_mask                            0x20
#define SS_clear_mask                            0xDF

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

#define CLK0                                     0x6
#define CLK0_address                             0xF80
#define CLK0_position                            0x6
#define CLK0_size                                0x1
#define CLK0_value_mask                          0x40
#define CLK0_clear_mask                          0xBF


/*---------------------------------------------------------------------------------------------#
| PORTB                                                                                  0xF81 |
#----------------------------------------------------------------------------------------------#
| PORTB_RB7 | PORTB_RB6 | PORTB_RB5 | PORTB_RB4 | CCP2_PA2 | PORTB_RB2 | PORTB_RB1 | PORTB_RB0 |
#----------------------------------------------------------------------------------------------#
| 7         | 6         | 5         | 4         | 3        | 2         | 1         | 0         |
#---------------------------------------------------------------------------------------------*/

#define PORTB                                    0x0
#define PORTB_address                            0xF81
#define PORTB_position                           0x0
#define PORTB_size                               0x8
#define PORTB_value_mask                         0xFF
#define PORTB_clear_mask                         0x0

#define PORTB_RB0                                0x0
#define PORTB_RB0_address                        0xF81
#define PORTB_RB0_position                       0x0
#define PORTB_RB0_size                           0x1
#define PORTB_RB0_value_mask                     0x1
#define PORTB_RB0_clear_mask                     0xFE

#define INT0                                     0x0
#define INT0_address                             0xF81
#define INT0_position                            0x0
#define INT0_size                                0x1
#define INT0_value_mask                          0x1
#define INT0_clear_mask                          0xFE

#define PORTB_RB1                                0x1
#define PORTB_RB1_address                        0xF81
#define PORTB_RB1_position                       0x1
#define PORTB_RB1_size                           0x1
#define PORTB_RB1_value_mask                     0x2
#define PORTB_RB1_clear_mask                     0xFD

#define INT1                                     0x1
#define INT1_address                             0xF81
#define INT1_position                            0x1
#define INT1_size                                0x1
#define INT1_value_mask                          0x2
#define INT1_clear_mask                          0xFD

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

#define PORTB_CCP2                               0x3
#define PORTB_CCP2_address                       0xF81
#define PORTB_CCP2_position                      0x3
#define PORTB_CCP2_size                          0x1
#define PORTB_CCP2_value_mask                    0x8
#define PORTB_CCP2_clear_mask                    0xF7

#define PORTB_RB4                                0x4
#define PORTB_RB4_address                        0xF81
#define PORTB_RB4_position                       0x4
#define PORTB_RB4_size                           0x1
#define PORTB_RB4_value_mask                     0x10
#define PORTB_RB4_clear_mask                     0xEF

#define PORTB_RB5                                0x5
#define PORTB_RB5_address                        0xF81
#define PORTB_RB5_position                       0x5
#define PORTB_RB5_size                           0x1
#define PORTB_RB5_value_mask                     0x20
#define PORTB_RB5_clear_mask                     0xDF

#define PORTB_RB6                                0x6
#define PORTB_RB6_address                        0xF81
#define PORTB_RB6_position                       0x6
#define PORTB_RB6_size                           0x1
#define PORTB_RB6_value_mask                     0x40
#define PORTB_RB6_clear_mask                     0xBF

#define PORTB_RB7                                0x7
#define PORTB_RB7_address                        0xF81
#define PORTB_RB7_position                       0x7
#define PORTB_RB7_size                           0x1
#define PORTB_RB7_value_mask                     0x80
#define PORTB_RB7_clear_mask                     0x7F


/*------------------------------------------------------#
| PORTC                                           0xF82 |
#-------------------------------------------------------#
| DT | CK | SDO | SDA | SCL | CCP1 | PORTC_CCP2 | T1CKI |
#-------------------------------------------------------#
| 7  | 6  | 5   | 4   | 3   | 2    | 1          | 0     |
#------------------------------------------------------*/

#define PORTC                                    0x0
#define PORTC_address                            0xF82
#define PORTC_position                           0x0
#define PORTC_size                               0x8
#define PORTC_value_mask                         0xFF
#define PORTC_clear_mask                         0x0

#define T1CKI                                    0x0
#define T1CKI_address                            0xF82
#define T1CKI_position                           0x0
#define T1CKI_size                               0x1
#define T1CKI_value_mask                         0x1
#define T1CKI_clear_mask                         0xFE

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


/*----------------------------------------------------------------------------#
| PORTD                                                                 0xF83 |
#-----------------------------------------------------------------------------#
| PORTD_RD7 | AD6 | PORTD_RD5 | AD4 | PORTD_RD3 | PORTD_RD2 | PORTD_RD1 | AD0 |
#-----------------------------------------------------------------------------#
| 7         | 6   | 5         | 4   | 3         | 2         | 1         | 0   |
#----------------------------------------------------------------------------*/

#define PORTD                                    0x0
#define PORTD_address                            0xF83
#define PORTD_position                           0x0
#define PORTD_size                               0x8
#define PORTD_value_mask                         0xFF
#define PORTD_clear_mask                         0x0

#define AD0                                      0x0
#define AD0_address                              0xF83
#define AD0_position                             0x0
#define AD0_size                                 0x1
#define AD0_value_mask                           0x1
#define AD0_clear_mask                           0xFE

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

#define AD1                                      0x1
#define AD1_address                              0xF83
#define AD1_position                             0x1
#define AD1_size                                 0x1
#define AD1_value_mask                           0x2
#define AD1_clear_mask                           0xFD

#define PORTD_RD2                                0x2
#define PORTD_RD2_address                        0xF83
#define PORTD_RD2_position                       0x2
#define PORTD_RD2_size                           0x1
#define PORTD_RD2_value_mask                     0x4
#define PORTD_RD2_clear_mask                     0xFB

#define AD2                                      0x2
#define AD2_address                              0xF83
#define AD2_position                             0x2
#define AD2_size                                 0x1
#define AD2_value_mask                           0x4
#define AD2_clear_mask                           0xFB

#define PORTD_RD3                                0x3
#define PORTD_RD3_address                        0xF83
#define PORTD_RD3_position                       0x3
#define PORTD_RD3_size                           0x1
#define PORTD_RD3_value_mask                     0x8
#define PORTD_RD3_clear_mask                     0xF7

#define AD3                                      0x3
#define AD3_address                              0xF83
#define AD3_position                             0x3
#define AD3_size                                 0x1
#define AD3_value_mask                           0x8
#define AD3_clear_mask                           0xF7

#define AD4                                      0x4
#define AD4_address                              0xF83
#define AD4_position                             0x4
#define AD4_size                                 0x1
#define AD4_value_mask                           0x10
#define AD4_clear_mask                           0xEF

#define PORTD_RD4                                0x4
#define PORTD_RD4_address                        0xF83
#define PORTD_RD4_position                       0x4
#define PORTD_RD4_size                           0x1
#define PORTD_RD4_value_mask                     0x10
#define PORTD_RD4_clear_mask                     0xEF

#define PORTD_RD5                                0x5
#define PORTD_RD5_address                        0xF83
#define PORTD_RD5_position                       0x5
#define PORTD_RD5_size                           0x1
#define PORTD_RD5_value_mask                     0x20
#define PORTD_RD5_clear_mask                     0xDF

#define AD5                                      0x5
#define AD5_address                              0xF83
#define AD5_position                             0x5
#define AD5_size                                 0x1
#define AD5_value_mask                           0x20
#define AD5_clear_mask                           0xDF

#define PORTD_RD6                                0x6
#define PORTD_RD6_address                        0xF83
#define PORTD_RD6_position                       0x6
#define PORTD_RD6_size                           0x1
#define PORTD_RD6_value_mask                     0x40
#define PORTD_RD6_clear_mask                     0xBF

#define AD6                                      0x6
#define AD6_address                              0xF83
#define AD6_position                             0x6
#define AD6_size                                 0x1
#define AD6_value_mask                           0x40
#define AD6_clear_mask                           0xBF

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

#define AD7                                      0x7
#define AD7_address                              0xF83
#define AD7_position                             0x7
#define AD7_size                                 0x1
#define AD7_value_mask                           0x80
#define AD7_clear_mask                           0x7F


/*-----------------------------------------------------#
| PORTE                                          0xF84 |
#------------------------------------------------------#
| CCP2E | CCP6E | AD13 | AD12 | CCP9E | CS | AD9 | PD2 |
#------------------------------------------------------#
| 7     | 6     | 5    | 4    | 3     | 2  | 1   | 0   |
#-----------------------------------------------------*/

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

#define AD8                                      0x0
#define AD8_address                              0xF84
#define AD8_position                             0x0
#define AD8_size                                 0x1
#define AD8_value_mask                           0x1
#define AD8_clear_mask                           0xFE

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

#define AD9                                      0x1
#define AD9_address                              0xF84
#define AD9_position                             0x1
#define AD9_size                                 0x1
#define AD9_value_mask                           0x2
#define AD9_clear_mask                           0xFD

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

#define CS                                       0x2
#define CS_address                               0xF84
#define CS_position                              0x2
#define CS_size                                  0x1
#define CS_value_mask                            0x4
#define CS_clear_mask                            0xFB

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

#define PORTE_RE2                                0x2
#define PORTE_RE2_address                        0xF84
#define PORTE_RE2_position                       0x2
#define PORTE_RE2_size                           0x1
#define PORTE_RE2_value_mask                     0x4
#define PORTE_RE2_clear_mask                     0xFB

#define AD10                                     0x2
#define AD10_address                             0xF84
#define AD10_position                            0x2
#define AD10_size                                0x1
#define AD10_value_mask                          0x4
#define AD10_clear_mask                          0xFB

#define PORTE_RE3                                0x3
#define PORTE_RE3_address                        0xF84
#define PORTE_RE3_position                       0x3
#define PORTE_RE3_size                           0x1
#define PORTE_RE3_value_mask                     0x8
#define PORTE_RE3_clear_mask                     0xF7

#define CCP9E                                    0x3
#define CCP9E_address                            0xF84
#define CCP9E_position                           0x3
#define CCP9E_size                               0x1
#define CCP9E_value_mask                         0x8
#define CCP9E_clear_mask                         0xF7

#define AD11                                     0x3
#define AD11_address                             0xF84
#define AD11_position                            0x3
#define AD11_size                                0x1
#define AD11_value_mask                          0x8
#define AD11_clear_mask                          0xF7

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

#define AD12                                     0x4
#define AD12_address                             0xF84
#define AD12_position                            0x4
#define AD12_size                                0x1
#define AD12_value_mask                          0x10
#define AD12_clear_mask                          0xEF

#define CCP8E                                    0x4
#define CCP8E_address                            0xF84
#define CCP8E_position                           0x4
#define CCP8E_size                               0x1
#define CCP8E_value_mask                         0x10
#define CCP8E_clear_mask                         0xEF

#define PORTE_RE5                                0x5
#define PORTE_RE5_address                        0xF84
#define PORTE_RE5_position                       0x5
#define PORTE_RE5_size                           0x1
#define PORTE_RE5_value_mask                     0x20
#define PORTE_RE5_clear_mask                     0xDF

#define CCP7E                                    0x5
#define CCP7E_address                            0xF84
#define CCP7E_position                           0x5
#define CCP7E_size                               0x1
#define CCP7E_value_mask                         0x20
#define CCP7E_clear_mask                         0xDF

#define AD13                                     0x5
#define AD13_address                             0xF84
#define AD13_position                            0x5
#define AD13_size                                0x1
#define AD13_value_mask                          0x20
#define AD13_clear_mask                          0xDF

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

#define PORTE_RE6                                0x6
#define PORTE_RE6_address                        0xF84
#define PORTE_RE6_position                       0x6
#define PORTE_RE6_size                           0x1
#define PORTE_RE6_value_mask                     0x40
#define PORTE_RE6_clear_mask                     0xBF

#define AD14                                     0x6
#define AD14_address                             0xF84
#define AD14_position                            0x6
#define AD14_size                                0x1
#define AD14_value_mask                          0x40
#define AD14_clear_mask                          0xBF

#define PB1E                                     0x6
#define PB1E_address                             0xF84
#define PB1E_position                            0x6
#define PB1E_size                                0x1
#define PB1E_value_mask                          0x40
#define PB1E_clear_mask                          0xBF

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

#define PORTE_RE7                                0x7
#define PORTE_RE7_address                        0xF84
#define PORTE_RE7_position                       0x7
#define PORTE_RE7_size                           0x1
#define PORTE_RE7_value_mask                     0x80
#define PORTE_RE7_clear_mask                     0x7F

#define AD15                                     0x7
#define AD15_address                             0xF84
#define AD15_position                            0x7
#define AD15_size                                0x1
#define AD15_value_mask                          0x80
#define AD15_clear_mask                          0x7F


/*----------------------------------------------------------------------------------------------#
| PORTF                                                                                   0xF85 |
#-----------------------------------------------------------------------------------------------#
| PORTF_RF7 | PORTF_RF6 | PORTF_RF5 | PORTF_RF4 | PORTF_RF3 | PORTF_RF2 | PORTF_RF1 | PORTF_RF0 |
#-----------------------------------------------------------------------------------------------#
| 7         | 6         | 5         | 4         | 3         | 2         | 1         | 0         |
#----------------------------------------------------------------------------------------------*/

#define PORTF                                    0x0
#define PORTF_address                            0xF85
#define PORTF_position                           0x0
#define PORTF_size                               0x8
#define PORTF_value_mask                         0xFF
#define PORTF_clear_mask                         0x0

#define PORTF_RF0                                0x0
#define PORTF_RF0_address                        0xF85
#define PORTF_RF0_position                       0x0
#define PORTF_RF0_size                           0x1
#define PORTF_RF0_value_mask                     0x1
#define PORTF_RF0_clear_mask                     0xFE

#define AN5                                      0x0
#define AN5_address                              0xF85
#define AN5_position                             0x0
#define AN5_size                                 0x1
#define AN5_value_mask                           0x1
#define AN5_clear_mask                           0xFE

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

#define PORTF_CSIO                               0x3
#define PORTF_CSIO_address                       0xF85
#define PORTF_CSIO_position                      0x3
#define PORTF_CSIO_size                          0x1
#define PORTF_CSIO_value_mask                    0x8
#define PORTF_CSIO_clear_mask                    0xF7

#define PORTF_RF4                                0x4
#define PORTF_RF4_address                        0xF85
#define PORTF_RF4_position                       0x4
#define PORTF_RF4_size                           0x1
#define PORTF_RF4_value_mask                     0x10
#define PORTF_RF4_clear_mask                     0xEF

#define CS2                                      0x4
#define CS2_address                              0xF85
#define CS2_position                             0x4
#define CS2_size                                 0x1
#define CS2_value_mask                           0x10
#define CS2_clear_mask                           0xEF

#define PORTF_RF5                                0x5
#define PORTF_RF5_address                        0xF85
#define PORTF_RF5_position                       0x5
#define PORTF_RF5_size                           0x1
#define PORTF_RF5_value_mask                     0x20
#define PORTF_RF5_clear_mask                     0xDF

#define CS1                                      0x5
#define CS1_address                              0xF85
#define CS1_position                             0x5
#define CS1_size                                 0x1
#define CS1_value_mask                           0x20
#define CS1_clear_mask                           0xDF

#define PORTF_RF6                                0x6
#define PORTF_RF6_address                        0xF85
#define PORTF_RF6_position                       0x6
#define PORTF_RF6_size                           0x1
#define PORTF_RF6_value_mask                     0x40
#define PORTF_RF6_clear_mask                     0xBF

#define LB                                       0x6
#define LB_address                               0xF85
#define LB_position                              0x6
#define LB_size                                  0x1
#define LB_value_mask                            0x40
#define LB_clear_mask                            0xBF

#define PORTF_RF7                                0x7
#define PORTF_RF7_address                        0xF85
#define PORTF_RF7_position                       0x7
#define PORTF_RF7_size                           0x1
#define PORTF_RF7_value_mask                     0x80
#define PORTF_RF7_clear_mask                     0x7F

#define UB                                       0x7
#define UB_address                               0xF85
#define UB_position                              0x7
#define UB_size                                  0x1
#define UB_value_mask                            0x80
#define UB_clear_mask                            0x7F


/*-------------------------------------------------#
| PORTG                                      0xF86 |
#--------------------------------------------------#
| - | - | - | BA0 | WRH | PORTG_RG2 | C3OUTG | ALE |
#--------------------------------------------------#
| 7 | 6 | 5 | 4   | 3   | 2         | 1      | 0   |
#-------------------------------------------------*/

#define PORTG                                    0x0
#define PORTG_address                            0xF86
#define PORTG_position                           0x0
#define PORTG_size                               0x8
#define PORTG_value_mask                         0xFF
#define PORTG_clear_mask                         0x0

#define ALE                                      0x0
#define ALE_address                              0xF86
#define ALE_position                             0x0
#define ALE_size                                 0x1
#define ALE_value_mask                           0x1
#define ALE_clear_mask                           0xFE

#define PORTG_RG0                                0x0
#define PORTG_RG0_address                        0xF86
#define PORTG_RG0_position                       0x0
#define PORTG_RG0_size                           0x1
#define PORTG_RG0_value_mask                     0x1
#define PORTG_RG0_clear_mask                     0xFE

#define OE                                       0x1
#define OE_address                               0xF86
#define OE_position                              0x1
#define OE_size                                  0x1
#define OE_value_mask                            0x2
#define OE_clear_mask                            0xFD

#define PORTG_RG1                                0x1
#define PORTG_RG1_address                        0xF86
#define PORTG_RG1_position                       0x1
#define PORTG_RG1_size                           0x1
#define PORTG_RG1_value_mask                     0x2
#define PORTG_RG1_clear_mask                     0xFD

#define C3OUTG                                   0x1
#define C3OUTG_address                           0xF86
#define C3OUTG_position                          0x1
#define C3OUTG_size                              0x1
#define C3OUTG_value_mask                        0x2
#define C3OUTG_clear_mask                        0xFD

#define PORTG_RG2                                0x2
#define PORTG_RG2_address                        0xF86
#define PORTG_RG2_position                       0x2
#define PORTG_RG2_size                           0x1
#define PORTG_RG2_value_mask                     0x4
#define PORTG_RG2_clear_mask                     0xFB

#define WRL                                      0x2
#define WRL_address                              0xF86
#define WRL_position                             0x2
#define WRL_size                                 0x1
#define WRL_value_mask                           0x4
#define WRL_clear_mask                           0xFB

#define WRH                                      0x3
#define WRH_address                              0xF86
#define WRH_position                             0x3
#define WRH_size                                 0x1
#define WRH_value_mask                           0x8
#define WRH_clear_mask                           0xF7

#define PORTG_RG3                                0x3
#define PORTG_RG3_address                        0xF86
#define PORTG_RG3_position                       0x3
#define PORTG_RG3_size                           0x1
#define PORTG_RG3_value_mask                     0x8
#define PORTG_RG3_clear_mask                     0xF7

#define BA0                                      0x4
#define BA0_address                              0xF86
#define BA0_position                             0x4
#define BA0_size                                 0x1
#define BA0_value_mask                           0x10
#define BA0_clear_mask                           0xEF

#define PORTG_RG4                                0x4
#define PORTG_RG4_address                        0xF86
#define PORTG_RG4_position                       0x4
#define PORTG_RG4_size                           0x1
#define PORTG_RG4_value_mask                     0x10
#define PORTG_RG4_clear_mask                     0xEF


/*----------------------------------------------------------------------------------------------#
| PORTH                                                                                   0xF87 |
#-----------------------------------------------------------------------------------------------#
| PORTH_RH7 | PORTH_RH6 | PORTH_RH5 | PORTH_RH4 | PORTH_RH3 | PORTH_RH2 | PORTH_RH1 | PORTH_RH0 |
#-----------------------------------------------------------------------------------------------#
| 7         | 6         | 5         | 4         | 3         | 2         | 1         | 0         |
#----------------------------------------------------------------------------------------------*/

#define PORTH                                    0x0
#define PORTH_address                            0xF87
#define PORTH_position                           0x0
#define PORTH_size                               0x8
#define PORTH_value_mask                         0xFF
#define PORTH_clear_mask                         0x0

#define PORTH_RH0                                0x0
#define PORTH_RH0_address                        0xF87
#define PORTH_RH0_position                       0x0
#define PORTH_RH0_size                           0x1
#define PORTH_RH0_value_mask                     0x1
#define PORTH_RH0_clear_mask                     0xFE

#define A16                                      0x0
#define A16_address                              0xF87
#define A16_position                             0x0
#define A16_size                                 0x1
#define A16_value_mask                           0x1
#define A16_clear_mask                           0xFE

#define PORTH_RH1                                0x1
#define PORTH_RH1_address                        0xF87
#define PORTH_RH1_position                       0x1
#define PORTH_RH1_size                           0x1
#define PORTH_RH1_value_mask                     0x2
#define PORTH_RH1_clear_mask                     0xFD

#define A17                                      0x1
#define A17_address                              0xF87
#define A17_position                             0x1
#define A17_size                                 0x1
#define A17_value_mask                           0x2
#define A17_clear_mask                           0xFD

#define PORTH_RH2                                0x2
#define PORTH_RH2_address                        0xF87
#define PORTH_RH2_position                       0x2
#define PORTH_RH2_size                           0x1
#define PORTH_RH2_value_mask                     0x4
#define PORTH_RH2_clear_mask                     0xFB

#define A18                                      0x2
#define A18_address                              0xF87
#define A18_position                             0x2
#define A18_size                                 0x1
#define A18_value_mask                           0x4
#define A18_clear_mask                           0xFB

#define PORTH_RH3                                0x3
#define PORTH_RH3_address                        0xF87
#define PORTH_RH3_position                       0x3
#define PORTH_RH3_size                           0x1
#define PORTH_RH3_value_mask                     0x8
#define PORTH_RH3_clear_mask                     0xF7

#define A19                                      0x3
#define A19_address                              0xF87
#define A19_position                             0x3
#define A19_size                                 0x1
#define A19_value_mask                           0x8
#define A19_clear_mask                           0xF7

#define PORTH_RH4                                0x4
#define PORTH_RH4_address                        0xF87
#define PORTH_RH4_position                       0x4
#define PORTH_RH4_size                           0x1
#define PORTH_RH4_value_mask                     0x10
#define PORTH_RH4_clear_mask                     0xEF

#define CCP9                                     0x4
#define CCP9_address                             0xF87
#define CCP9_position                            0x4
#define CCP9_size                                0x1
#define CCP9_value_mask                          0x10
#define CCP9_clear_mask                          0xEF

#define AN8                                      0x4
#define AN8_address                              0xF87
#define AN8_position                             0x4
#define AN8_size                                 0x1
#define AN8_value_mask                           0x10
#define AN8_clear_mask                           0xEF

#define PC3                                      0x4
#define PC3_address                              0xF87
#define PC3_position                             0x4
#define PC3_size                                 0x1
#define PC3_value_mask                           0x10
#define PC3_clear_mask                           0xEF

#define PORTH_RH5                                0x5
#define PORTH_RH5_address                        0xF87
#define PORTH_RH5_position                       0x5
#define PORTH_RH5_size                           0x1
#define PORTH_RH5_value_mask                     0x20
#define PORTH_RH5_clear_mask                     0xDF

#define CCP8                                     0x5
#define CCP8_address                             0xF87
#define CCP8_position                            0x5
#define CCP8_size                                0x1
#define CCP8_value_mask                          0x20
#define CCP8_clear_mask                          0xDF

#define AN9                                      0x5
#define AN9_address                              0xF87
#define AN9_position                             0x5
#define AN9_size                                 0x1
#define AN9_value_mask                           0x20
#define AN9_clear_mask                           0xDF

#define PB3                                      0x5
#define PB3_address                              0xF87
#define PB3_position                             0x5
#define PB3_size                                 0x1
#define PB3_value_mask                           0x20
#define PB3_clear_mask                           0xDF

#define PORTH_RH6                                0x6
#define PORTH_RH6_address                        0xF87
#define PORTH_RH6_position                       0x6
#define PORTH_RH6_size                           0x1
#define PORTH_RH6_value_mask                     0x40
#define PORTH_RH6_clear_mask                     0xBF

#define CCP7                                     0x6
#define CCP7_address                             0xF87
#define CCP7_position                            0x6
#define CCP7_size                                0x1
#define CCP7_value_mask                          0x40
#define CCP7_clear_mask                          0xBF

#define PC1                                      0x6
#define PC1_address                              0xF87
#define PC1_position                             0x6
#define PC1_size                                 0x1
#define PC1_value_mask                           0x40
#define PC1_clear_mask                           0xBF

#define AN10                                     0x6
#define AN10_address                             0xF87
#define AN10_position                            0x6
#define AN10_size                                0x1
#define AN10_value_mask                          0x40
#define AN10_clear_mask                          0xBF

#define PORTH_RH7                                0x7
#define PORTH_RH7_address                        0xF87
#define PORTH_RH7_position                       0x7
#define PORTH_RH7_size                           0x1
#define PORTH_RH7_value_mask                     0x80
#define PORTH_RH7_clear_mask                     0x7F

#define CCP6                                     0x7
#define CCP6_address                             0xF87
#define CCP6_position                            0x7
#define CCP6_size                                0x1
#define CCP6_value_mask                          0x80
#define CCP6_clear_mask                          0x7F

#define PB1                                      0x7
#define PB1_address                              0xF87
#define PB1_position                             0x7
#define PB1_size                                 0x1
#define PB1_value_mask                           0x80
#define PB1_clear_mask                           0x7F

#define AN11                                     0x7
#define AN11_address                             0xF87
#define AN11_position                            0x7
#define AN11_size                                0x1
#define AN11_value_mask                          0x80
#define AN11_clear_mask                          0x7F


/*----------------------------------------------------------------------------------------------#
| PORTJ                                                                                   0xF88 |
#-----------------------------------------------------------------------------------------------#
| PORTJ_RJ7 | PORTJ_RJ6 | PORTJ_RJ5 | PORTJ_RJ4 | PORTJ_RJ3 | PORTJ_RJ2 | PORTJ_RJ1 | PORTJ_RJ0 |
#-----------------------------------------------------------------------------------------------#
| 7         | 6         | 5         | 4         | 3         | 2         | 1         | 0         |
#----------------------------------------------------------------------------------------------*/

#define PORTJ                                    0x0
#define PORTJ_address                            0xF88
#define PORTJ_position                           0x0
#define PORTJ_size                               0x8
#define PORTJ_value_mask                         0xFF
#define PORTJ_clear_mask                         0x0

#define PORTJ_RJ0                                0x0
#define PORTJ_RJ0_address                        0xF88
#define PORTJ_RJ0_position                       0x0
#define PORTJ_RJ0_size                           0x1
#define PORTJ_RJ0_value_mask                     0x1
#define PORTJ_RJ0_clear_mask                     0xFE

#define D0                                       0x0
#define D0_address                               0xF88
#define D0_position                              0x0
#define D0_size                                  0x1
#define D0_value_mask                            0x1
#define D0_clear_mask                            0xFE

#define PORTJ_RJ1                                0x1
#define PORTJ_RJ1_address                        0xF88
#define PORTJ_RJ1_position                       0x1
#define PORTJ_RJ1_size                           0x1
#define PORTJ_RJ1_value_mask                     0x2
#define PORTJ_RJ1_clear_mask                     0xFD

#define D1                                       0x1
#define D1_address                               0xF88
#define D1_position                              0x1
#define D1_size                                  0x1
#define D1_value_mask                            0x2
#define D1_clear_mask                            0xFD

#define PORTJ_RJ2                                0x2
#define PORTJ_RJ2_address                        0xF88
#define PORTJ_RJ2_position                       0x2
#define PORTJ_RJ2_size                           0x1
#define PORTJ_RJ2_value_mask                     0x4
#define PORTJ_RJ2_clear_mask                     0xFB

#define D2                                       0x2
#define D2_address                               0xF88
#define D2_position                              0x2
#define D2_size                                  0x1
#define D2_value_mask                            0x4
#define D2_clear_mask                            0xFB

#define PORTJ_RJ3                                0x3
#define PORTJ_RJ3_address                        0xF88
#define PORTJ_RJ3_position                       0x3
#define PORTJ_RJ3_size                           0x1
#define PORTJ_RJ3_value_mask                     0x8
#define PORTJ_RJ3_clear_mask                     0xF7

#define D3                                       0x3
#define D3_address                               0xF88
#define D3_position                              0x3
#define D3_size                                  0x1
#define D3_value_mask                            0x8
#define D3_clear_mask                            0xF7

#define PORTJ_RJ4                                0x4
#define PORTJ_RJ4_address                        0xF88
#define PORTJ_RJ4_position                       0x4
#define PORTJ_RJ4_size                           0x1
#define PORTJ_RJ4_value_mask                     0x10
#define PORTJ_RJ4_clear_mask                     0xEF

#define D4                                       0x4
#define D4_address                               0xF88
#define D4_position                              0x4
#define D4_size                                  0x1
#define D4_value_mask                            0x10
#define D4_clear_mask                            0xEF

#define PORTJ_RJ5                                0x5
#define PORTJ_RJ5_address                        0xF88
#define PORTJ_RJ5_position                       0x5
#define PORTJ_RJ5_size                           0x1
#define PORTJ_RJ5_value_mask                     0x20
#define PORTJ_RJ5_clear_mask                     0xDF

#define D5                                       0x5
#define D5_address                               0xF88
#define D5_position                              0x5
#define D5_size                                  0x1
#define D5_value_mask                            0x20
#define D5_clear_mask                            0xDF

#define PORTJ_RJ6                                0x6
#define PORTJ_RJ6_address                        0xF88
#define PORTJ_RJ6_position                       0x6
#define PORTJ_RJ6_size                           0x1
#define PORTJ_RJ6_value_mask                     0x40
#define PORTJ_RJ6_clear_mask                     0xBF

#define D6                                       0x6
#define D6_address                               0xF88
#define D6_position                              0x6
#define D6_size                                  0x1
#define D6_value_mask                            0x40
#define D6_clear_mask                            0xBF

#define PORTJ_RJ7                                0x7
#define PORTJ_RJ7_address                        0xF88
#define PORTJ_RJ7_position                       0x7
#define PORTJ_RJ7_size                           0x1
#define PORTJ_RJ7_value_mask                     0x80
#define PORTJ_RJ7_clear_mask                     0x7F

#define D7                                       0x7
#define D7_address                               0xF88
#define D7_position                              0x7
#define D7_size                                  0x1
#define D7_value_mask                            0x80
#define D7_clear_mask                            0x7F


/*------------------------------------------------------#
| LATA                                            0xF89 |
#-------------------------------------------------------#
| - | - | LATA5 | LATA4 | LATA3 | LATA2 | LATA1 | LATA0 |
#-------------------------------------------------------#
| 7 | 6 | 5     | 4     | 3     | 2     | 1     | 0     |
#------------------------------------------------------*/

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


/*--------------------------------------------------------#
| LATF                                              0xF8E |
#---------------------------------------------------------#
| LATF7 | LATF6 | LF5 | LF4 | LF3 | LATF2 | LATF1 | LATF0 |
#---------------------------------------------------------#
| 7     | 6     | 5   | 4   | 3   | 2     | 1     | 0     |
#--------------------------------------------------------*/

#define LATF                                     0x0
#define LATF_address                             0xF8E
#define LATF_position                            0x0
#define LATF_size                                0x8
#define LATF_value_mask                          0xFF
#define LATF_clear_mask                          0x0

#define LATF0                                    0x0
#define LATF0_address                            0xF8E
#define LATF0_position                           0x0
#define LATF0_size                               0x1
#define LATF0_value_mask                         0x1
#define LATF0_clear_mask                         0xFE

#define LF0                                      0x0
#define LF0_address                              0xF8E
#define LF0_position                             0x0
#define LF0_size                                 0x1
#define LF0_value_mask                           0x1
#define LF0_clear_mask                           0xFE

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


/*----------------------------------------------#
| LATH                                    0xF90 |
#-----------------------------------------------#
| LH7 | LH6 | LH5 | LH4 | LH3 | LH2 | LH1 | LH0 |
#-----------------------------------------------#
| 7   | 6   | 5   | 4   | 3   | 2   | 1   | 0   |
#----------------------------------------------*/

#define LATH                                     0x0
#define LATH_address                             0xF90
#define LATH_position                            0x0
#define LATH_size                                0x8
#define LATH_value_mask                          0xFF
#define LATH_clear_mask                          0x0

#define LH0                                      0x0
#define LH0_address                              0xF90
#define LH0_position                             0x0
#define LH0_size                                 0x1
#define LH0_value_mask                           0x1
#define LH0_clear_mask                           0xFE

#define LATH0                                    0x0
#define LATH0_address                            0xF90
#define LATH0_position                           0x0
#define LATH0_size                               0x1
#define LATH0_value_mask                         0x1
#define LATH0_clear_mask                         0xFE

#define LH1                                      0x1
#define LH1_address                              0xF90
#define LH1_position                             0x1
#define LH1_size                                 0x1
#define LH1_value_mask                           0x2
#define LH1_clear_mask                           0xFD

#define LATH1                                    0x1
#define LATH1_address                            0xF90
#define LATH1_position                           0x1
#define LATH1_size                               0x1
#define LATH1_value_mask                         0x2
#define LATH1_clear_mask                         0xFD

#define LH2                                      0x2
#define LH2_address                              0xF90
#define LH2_position                             0x2
#define LH2_size                                 0x1
#define LH2_value_mask                           0x4
#define LH2_clear_mask                           0xFB

#define LATH2                                    0x2
#define LATH2_address                            0xF90
#define LATH2_position                           0x2
#define LATH2_size                               0x1
#define LATH2_value_mask                         0x4
#define LATH2_clear_mask                         0xFB

#define LH3                                      0x3
#define LH3_address                              0xF90
#define LH3_position                             0x3
#define LH3_size                                 0x1
#define LH3_value_mask                           0x8
#define LH3_clear_mask                           0xF7

#define LATH3                                    0x3
#define LATH3_address                            0xF90
#define LATH3_position                           0x3
#define LATH3_size                               0x1
#define LATH3_value_mask                         0x8
#define LATH3_clear_mask                         0xF7

#define LH4                                      0x4
#define LH4_address                              0xF90
#define LH4_position                             0x4
#define LH4_size                                 0x1
#define LH4_value_mask                           0x10
#define LH4_clear_mask                           0xEF

#define LATH4                                    0x4
#define LATH4_address                            0xF90
#define LATH4_position                           0x4
#define LATH4_size                               0x1
#define LATH4_value_mask                         0x10
#define LATH4_clear_mask                         0xEF

#define LH5                                      0x5
#define LH5_address                              0xF90
#define LH5_position                             0x5
#define LH5_size                                 0x1
#define LH5_value_mask                           0x20
#define LH5_clear_mask                           0xDF

#define LATH5                                    0x5
#define LATH5_address                            0xF90
#define LATH5_position                           0x5
#define LATH5_size                               0x1
#define LATH5_value_mask                         0x20
#define LATH5_clear_mask                         0xDF

#define LH6                                      0x6
#define LH6_address                              0xF90
#define LH6_position                             0x6
#define LH6_size                                 0x1
#define LH6_value_mask                           0x40
#define LH6_clear_mask                           0xBF

#define LATH6                                    0x6
#define LATH6_address                            0xF90
#define LATH6_position                           0x6
#define LATH6_size                               0x1
#define LATH6_value_mask                         0x40
#define LATH6_clear_mask                         0xBF

#define LH7                                      0x7
#define LH7_address                              0xF90
#define LH7_position                             0x7
#define LH7_size                                 0x1
#define LH7_value_mask                           0x80
#define LH7_clear_mask                           0x7F

#define LATH7                                    0x7
#define LATH7_address                            0xF90
#define LATH7_position                           0x7
#define LATH7_size                               0x1
#define LATH7_value_mask                         0x80
#define LATH7_clear_mask                         0x7F


/*--------------------------------------------------------------#
| LATJ                                                    0xF91 |
#---------------------------------------------------------------#
| LATJ7 | LATJ6 | LATJ5 | LATJ4 | LATJ3 | LATJ2 | LATJ1 | LATJ0 |
#---------------------------------------------------------------#
| 7     | 6     | 5     | 4     | 3     | 2     | 1     | 0     |
#--------------------------------------------------------------*/

#define LATJ                                     0x0
#define LATJ_address                             0xF91
#define LATJ_position                            0x0
#define LATJ_size                                0x8
#define LATJ_value_mask                          0xFF
#define LATJ_clear_mask                          0x0

#define LATJ0                                    0x0
#define LATJ0_address                            0xF91
#define LATJ0_position                           0x0
#define LATJ0_size                               0x1
#define LATJ0_value_mask                         0x1
#define LATJ0_clear_mask                         0xFE

#define LJ0                                      0x0
#define LJ0_address                              0xF91
#define LJ0_position                             0x0
#define LJ0_size                                 0x1
#define LJ0_value_mask                           0x1
#define LJ0_clear_mask                           0xFE

#define LATJ1                                    0x1
#define LATJ1_address                            0xF91
#define LATJ1_position                           0x1
#define LATJ1_size                               0x1
#define LATJ1_value_mask                         0x2
#define LATJ1_clear_mask                         0xFD

#define LJ1                                      0x1
#define LJ1_address                              0xF91
#define LJ1_position                             0x1
#define LJ1_size                                 0x1
#define LJ1_value_mask                           0x2
#define LJ1_clear_mask                           0xFD

#define LATJ2                                    0x2
#define LATJ2_address                            0xF91
#define LATJ2_position                           0x2
#define LATJ2_size                               0x1
#define LATJ2_value_mask                         0x4
#define LATJ2_clear_mask                         0xFB

#define LJ2                                      0x2
#define LJ2_address                              0xF91
#define LJ2_position                             0x2
#define LJ2_size                                 0x1
#define LJ2_value_mask                           0x4
#define LJ2_clear_mask                           0xFB

#define LATJ3                                    0x3
#define LATJ3_address                            0xF91
#define LATJ3_position                           0x3
#define LATJ3_size                               0x1
#define LATJ3_value_mask                         0x8
#define LATJ3_clear_mask                         0xF7

#define LJ3                                      0x3
#define LJ3_address                              0xF91
#define LJ3_position                             0x3
#define LJ3_size                                 0x1
#define LJ3_value_mask                           0x8
#define LJ3_clear_mask                           0xF7

#define LATJ4                                    0x4
#define LATJ4_address                            0xF91
#define LATJ4_position                           0x4
#define LATJ4_size                               0x1
#define LATJ4_value_mask                         0x10
#define LATJ4_clear_mask                         0xEF

#define LJ4                                      0x4
#define LJ4_address                              0xF91
#define LJ4_position                             0x4
#define LJ4_size                                 0x1
#define LJ4_value_mask                           0x10
#define LJ4_clear_mask                           0xEF

#define LATJ5                                    0x5
#define LATJ5_address                            0xF91
#define LATJ5_position                           0x5
#define LATJ5_size                               0x1
#define LATJ5_value_mask                         0x20
#define LATJ5_clear_mask                         0xDF

#define LJ5                                      0x5
#define LJ5_address                              0xF91
#define LJ5_position                             0x5
#define LJ5_size                                 0x1
#define LJ5_value_mask                           0x20
#define LJ5_clear_mask                           0xDF

#define LATJ6                                    0x6
#define LATJ6_address                            0xF91
#define LATJ6_position                           0x6
#define LATJ6_size                               0x1
#define LATJ6_value_mask                         0x40
#define LATJ6_clear_mask                         0xBF

#define LJ6                                      0x6
#define LJ6_address                              0xF91
#define LJ6_position                             0x6
#define LJ6_size                                 0x1
#define LJ6_value_mask                           0x40
#define LJ6_clear_mask                           0xBF

#define LATJ7                                    0x7
#define LATJ7_address                            0xF91
#define LATJ7_position                           0x7
#define LATJ7_size                               0x1
#define LATJ7_value_mask                         0x80
#define LATJ7_clear_mask                         0x7F

#define LJ7                                      0x7
#define LJ7_address                              0xF91
#define LJ7_position                             0x7
#define LJ7_size                                 0x1
#define LJ7_value_mask                           0x80
#define LJ7_clear_mask                           0x7F


/*-------------------------------------------------------------------------#
| TRISA                                                              0xF92 |
#--------------------------------------------------------------------------#
| RA7 | TRISA_RA6 | TRISA5 | TRISA_RA4 | TRISA3 | TRISA2 | TRISA1 | TRISA0 |
#--------------------------------------------------------------------------#
| 7   | 6         | 5      | 4         | 3      | 2      | 1      | 0      |
#-------------------------------------------------------------------------*/

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

#define RA7                                      0x7
#define RA7_address                              0xF92
#define RA7_position                             0x7
#define RA7_size                                 0x1
#define RA7_value_mask                           0x80
#define RA7_clear_mask                           0x7F


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


/*----------------------------------------------------------------------------------------------#
| TRISF                                                                                   0xF97 |
#-----------------------------------------------------------------------------------------------#
| TRISF_RF7 | TRISF_RF6 | TRISF_RF5 | TRISF_RF4 | TRISF_RF3 | TRISF_RF2 | TRISF_RF1 | TRISF_RF0 |
#-----------------------------------------------------------------------------------------------#
| 7         | 6         | 5         | 4         | 3         | 2         | 1         | 0         |
#----------------------------------------------------------------------------------------------*/

#define TRISF                                    0x0
#define TRISF_address                            0xF97
#define TRISF_position                           0x0
#define TRISF_size                               0x8
#define TRISF_value_mask                         0xFF
#define TRISF_clear_mask                         0x0

#define TRISF0                                   0x0
#define TRISF0_address                           0xF97
#define TRISF0_position                          0x0
#define TRISF0_size                              0x1
#define TRISF0_value_mask                        0x1
#define TRISF0_clear_mask                        0xFE

#define TRISF_RF0                                0x0
#define TRISF_RF0_address                        0xF97
#define TRISF_RF0_position                       0x0
#define TRISF_RF0_size                           0x1
#define TRISF_RF0_value_mask                     0x1
#define TRISF_RF0_clear_mask                     0xFE

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

#define TRISF_RF2                                0x2
#define TRISF_RF2_address                        0xF97
#define TRISF_RF2_position                       0x2
#define TRISF_RF2_size                           0x1
#define TRISF_RF2_value_mask                     0x4
#define TRISF_RF2_clear_mask                     0xFB

#define TRISF2                                   0x2
#define TRISF2_address                           0xF97
#define TRISF2_position                          0x2
#define TRISF2_size                              0x1
#define TRISF2_value_mask                        0x4
#define TRISF2_clear_mask                        0xFB

#define TRISF3                                   0x3
#define TRISF3_address                           0xF97
#define TRISF3_position                          0x3
#define TRISF3_size                              0x1
#define TRISF3_value_mask                        0x8
#define TRISF3_clear_mask                        0xF7

#define TRISF_RF3                                0x3
#define TRISF_RF3_address                        0xF97
#define TRISF_RF3_position                       0x3
#define TRISF_RF3_size                           0x1
#define TRISF_RF3_value_mask                     0x8
#define TRISF_RF3_clear_mask                     0xF7

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


/*----------------------------------------------------------------------#
| TRISH                                                           0xF99 |
#-----------------------------------------------------------------------#
| TRISH7 | TRISH6 | TRISH5 | TRISH4 | TRISH3 | TRISH2 | TRISH1 | TRISH0 |
#-----------------------------------------------------------------------#
| 7      | 6      | 5      | 4      | 3      | 2      | 1      | 0      |
#----------------------------------------------------------------------*/

#define TRISH                                    0x0
#define TRISH_address                            0xF99
#define TRISH_position                           0x0
#define TRISH_size                               0x8
#define TRISH_value_mask                         0xFF
#define TRISH_clear_mask                         0x0

#define TRISH_RH0                                0x0
#define TRISH_RH0_address                        0xF99
#define TRISH_RH0_position                       0x0
#define TRISH_RH0_size                           0x1
#define TRISH_RH0_value_mask                     0x1
#define TRISH_RH0_clear_mask                     0xFE

#define TRISH0                                   0x0
#define TRISH0_address                           0xF99
#define TRISH0_position                          0x0
#define TRISH0_size                              0x1
#define TRISH0_value_mask                        0x1
#define TRISH0_clear_mask                        0xFE

#define TRISH_RH1                                0x1
#define TRISH_RH1_address                        0xF99
#define TRISH_RH1_position                       0x1
#define TRISH_RH1_size                           0x1
#define TRISH_RH1_value_mask                     0x2
#define TRISH_RH1_clear_mask                     0xFD

#define TRISH1                                   0x1
#define TRISH1_address                           0xF99
#define TRISH1_position                          0x1
#define TRISH1_size                              0x1
#define TRISH1_value_mask                        0x2
#define TRISH1_clear_mask                        0xFD

#define TRISH_RH2                                0x2
#define TRISH_RH2_address                        0xF99
#define TRISH_RH2_position                       0x2
#define TRISH_RH2_size                           0x1
#define TRISH_RH2_value_mask                     0x4
#define TRISH_RH2_clear_mask                     0xFB

#define TRISH2                                   0x2
#define TRISH2_address                           0xF99
#define TRISH2_position                          0x2
#define TRISH2_size                              0x1
#define TRISH2_value_mask                        0x4
#define TRISH2_clear_mask                        0xFB

#define TRISH_RH3                                0x3
#define TRISH_RH3_address                        0xF99
#define TRISH_RH3_position                       0x3
#define TRISH_RH3_size                           0x1
#define TRISH_RH3_value_mask                     0x8
#define TRISH_RH3_clear_mask                     0xF7

#define TRISH3                                   0x3
#define TRISH3_address                           0xF99
#define TRISH3_position                          0x3
#define TRISH3_size                              0x1
#define TRISH3_value_mask                        0x8
#define TRISH3_clear_mask                        0xF7

#define TRISH_RH4                                0x4
#define TRISH_RH4_address                        0xF99
#define TRISH_RH4_position                       0x4
#define TRISH_RH4_size                           0x1
#define TRISH_RH4_value_mask                     0x10
#define TRISH_RH4_clear_mask                     0xEF

#define TRISH4                                   0x4
#define TRISH4_address                           0xF99
#define TRISH4_position                          0x4
#define TRISH4_size                              0x1
#define TRISH4_value_mask                        0x10
#define TRISH4_clear_mask                        0xEF

#define TRISH_RH5                                0x5
#define TRISH_RH5_address                        0xF99
#define TRISH_RH5_position                       0x5
#define TRISH_RH5_size                           0x1
#define TRISH_RH5_value_mask                     0x20
#define TRISH_RH5_clear_mask                     0xDF

#define TRISH5                                   0x5
#define TRISH5_address                           0xF99
#define TRISH5_position                          0x5
#define TRISH5_size                              0x1
#define TRISH5_value_mask                        0x20
#define TRISH5_clear_mask                        0xDF

#define TRISH_RH6                                0x6
#define TRISH_RH6_address                        0xF99
#define TRISH_RH6_position                       0x6
#define TRISH_RH6_size                           0x1
#define TRISH_RH6_value_mask                     0x40
#define TRISH_RH6_clear_mask                     0xBF

#define TRISH6                                   0x6
#define TRISH6_address                           0xF99
#define TRISH6_position                          0x6
#define TRISH6_size                              0x1
#define TRISH6_value_mask                        0x40
#define TRISH6_clear_mask                        0xBF

#define TRISH_RH7                                0x7
#define TRISH_RH7_address                        0xF99
#define TRISH_RH7_position                       0x7
#define TRISH_RH7_size                           0x1
#define TRISH_RH7_value_mask                     0x80
#define TRISH_RH7_clear_mask                     0x7F

#define TRISH7                                   0x7
#define TRISH7_address                           0xF99
#define TRISH7_position                          0x7
#define TRISH7_size                              0x1
#define TRISH7_value_mask                        0x80
#define TRISH7_clear_mask                        0x7F


/*----------------------------------------------------------------------#
| TRISJ                                                           0xF9A |
#-----------------------------------------------------------------------#
| TRISJ7 | TRISJ6 | TRISJ5 | TRISJ4 | TRISJ3 | TRISJ2 | TRISJ1 | TRISJ0 |
#-----------------------------------------------------------------------#
| 7      | 6      | 5      | 4      | 3      | 2      | 1      | 0      |
#----------------------------------------------------------------------*/

#define TRISJ                                    0x0
#define TRISJ_address                            0xF9A
#define TRISJ_position                           0x0
#define TRISJ_size                               0x8
#define TRISJ_value_mask                         0xFF
#define TRISJ_clear_mask                         0x0

#define TRISJ_RJ0                                0x0
#define TRISJ_RJ0_address                        0xF9A
#define TRISJ_RJ0_position                       0x0
#define TRISJ_RJ0_size                           0x1
#define TRISJ_RJ0_value_mask                     0x1
#define TRISJ_RJ0_clear_mask                     0xFE

#define TRISJ0                                   0x0
#define TRISJ0_address                           0xF9A
#define TRISJ0_position                          0x0
#define TRISJ0_size                              0x1
#define TRISJ0_value_mask                        0x1
#define TRISJ0_clear_mask                        0xFE

#define TRISJ_RJ1                                0x1
#define TRISJ_RJ1_address                        0xF9A
#define TRISJ_RJ1_position                       0x1
#define TRISJ_RJ1_size                           0x1
#define TRISJ_RJ1_value_mask                     0x2
#define TRISJ_RJ1_clear_mask                     0xFD

#define TRISJ1                                   0x1
#define TRISJ1_address                           0xF9A
#define TRISJ1_position                          0x1
#define TRISJ1_size                              0x1
#define TRISJ1_value_mask                        0x2
#define TRISJ1_clear_mask                        0xFD

#define TRISJ_RJ2                                0x2
#define TRISJ_RJ2_address                        0xF9A
#define TRISJ_RJ2_position                       0x2
#define TRISJ_RJ2_size                           0x1
#define TRISJ_RJ2_value_mask                     0x4
#define TRISJ_RJ2_clear_mask                     0xFB

#define TRISJ2                                   0x2
#define TRISJ2_address                           0xF9A
#define TRISJ2_position                          0x2
#define TRISJ2_size                              0x1
#define TRISJ2_value_mask                        0x4
#define TRISJ2_clear_mask                        0xFB

#define TRISJ_RJ3                                0x3
#define TRISJ_RJ3_address                        0xF9A
#define TRISJ_RJ3_position                       0x3
#define TRISJ_RJ3_size                           0x1
#define TRISJ_RJ3_value_mask                     0x8
#define TRISJ_RJ3_clear_mask                     0xF7

#define TRISJ3                                   0x3
#define TRISJ3_address                           0xF9A
#define TRISJ3_position                          0x3
#define TRISJ3_size                              0x1
#define TRISJ3_value_mask                        0x8
#define TRISJ3_clear_mask                        0xF7

#define TRISJ_RJ4                                0x4
#define TRISJ_RJ4_address                        0xF9A
#define TRISJ_RJ4_position                       0x4
#define TRISJ_RJ4_size                           0x1
#define TRISJ_RJ4_value_mask                     0x10
#define TRISJ_RJ4_clear_mask                     0xEF

#define TRISJ4                                   0x4
#define TRISJ4_address                           0xF9A
#define TRISJ4_position                          0x4
#define TRISJ4_size                              0x1
#define TRISJ4_value_mask                        0x10
#define TRISJ4_clear_mask                        0xEF

#define TRISJ_RJ5                                0x5
#define TRISJ_RJ5_address                        0xF9A
#define TRISJ_RJ5_position                       0x5
#define TRISJ_RJ5_size                           0x1
#define TRISJ_RJ5_value_mask                     0x20
#define TRISJ_RJ5_clear_mask                     0xDF

#define TRISJ5                                   0x5
#define TRISJ5_address                           0xF9A
#define TRISJ5_position                          0x5
#define TRISJ5_size                              0x1
#define TRISJ5_value_mask                        0x20
#define TRISJ5_clear_mask                        0xDF

#define TRISJ_RJ6                                0x6
#define TRISJ_RJ6_address                        0xF9A
#define TRISJ_RJ6_position                       0x6
#define TRISJ_RJ6_size                           0x1
#define TRISJ_RJ6_value_mask                     0x40
#define TRISJ_RJ6_clear_mask                     0xBF

#define TRISJ6                                   0x6
#define TRISJ6_address                           0xF9A
#define TRISJ6_position                          0x6
#define TRISJ6_size                              0x1
#define TRISJ6_value_mask                        0x40
#define TRISJ6_clear_mask                        0xBF

#define TRISJ_RJ7                                0x7
#define TRISJ_RJ7_address                        0xF9A
#define TRISJ_RJ7_position                       0x7
#define TRISJ_RJ7_size                           0x1
#define TRISJ_RJ7_value_mask                     0x80
#define TRISJ_RJ7_clear_mask                     0x7F

#define TRISJ7                                   0x7
#define TRISJ7_address                           0xF9A
#define TRISJ7_position                          0x7
#define TRISJ7_size                              0x1
#define TRISJ7_value_mask                        0x80
#define TRISJ7_clear_mask                        0x7F


/*-------------------------------------------------#
| MEMCON                                     0xF9C |
#--------------------------------------------------#
| EBDIS | PGRM | WAIT1 | WAIT0 | - | - | WM1 | WM0 |
#--------------------------------------------------#
| 7     | 6    | 5     | 4     | 3 | 2 | 1   | 0   |
#-------------------------------------------------*/

#define MEMCON                                   0x0
#define MEMCON_address                           0xF9C
#define MEMCON_position                          0x0
#define MEMCON_size                              0x8
#define MEMCON_value_mask                        0xFF
#define MEMCON_clear_mask                        0x0

#define WM                                       0x0
#define WM_address                               0xF9C
#define WM_position                              0x0
#define WM_size                                  0x2
#define WM_value_mask                            0x3
#define WM_clear_mask                            0xFC

#define WM0                                      0x0
#define WM0_address                              0xF9C
#define WM0_position                             0x0
#define WM0_size                                 0x1
#define WM0_value_mask                           0x1
#define WM0_clear_mask                           0xFE

#define WM1                                      0x1
#define WM1_address                              0xF9C
#define WM1_position                             0x1
#define WM1_size                                 0x1
#define WM1_value_mask                           0x2
#define WM1_clear_mask                           0xFD

#define WAIT0                                    0x4
#define WAIT0_address                            0xF9C
#define WAIT0_position                           0x4
#define WAIT0_size                               0x1
#define WAIT0_value_mask                         0x10
#define WAIT0_clear_mask                         0xEF

#define WAIT                                     0x4
#define WAIT_address                             0xF9C
#define WAIT_position                            0x4
#define WAIT_size                                0x2
#define WAIT_value_mask                          0x30
#define WAIT_clear_mask                          0xCF

#define WAIT1                                    0x5
#define WAIT1_address                            0xF9C
#define WAIT1_position                           0x5
#define WAIT1_size                               0x1
#define WAIT1_value_mask                         0x20
#define WAIT1_clear_mask                         0xDF

#define PGRM                                     0x6
#define PGRM_address                             0xF9C
#define PGRM_position                            0x6
#define PGRM_size                                0x1
#define PGRM_value_mask                          0x40
#define PGRM_clear_mask                          0xBF

#define EBDIS                                    0x7
#define EBDIS_address                            0xF9C
#define EBDIS_position                           0x7
#define EBDIS_size                               0x1
#define EBDIS_value_mask                         0x80
#define EBDIS_clear_mask                         0x7F


/*----------------------------------------------------------#
| PIE1                                                0xF9D |
#-----------------------------------------------------------#
| - | ADIE | RCIE | TXIE | SSPIE | CCP1IE | TMR2IE | TMR1IE |
#-----------------------------------------------------------#
| 7 | 6    | 5    | 4    | 3     | 2      | 1      | 0      |
#----------------------------------------------------------*/

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


/*----------------------------------------------------------#
| PIR1                                                0xF9E |
#-----------------------------------------------------------#
| - | ADIF | RCIF | TXIF | SSPIF | CCP1IF | TMR2IF | TMR1IF |
#-----------------------------------------------------------#
| 7 | 6    | 5    | 4    | 3     | 2      | 1      | 0      |
#----------------------------------------------------------*/

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


/*-----------------------------------------------------------#
| IPR1                                                 0xF9F |
#------------------------------------------------------------#
| - | ADIP | RCIP | TX1IP | SSPIP | CCP1IP | TMR2IP | TMR1IP |
#------------------------------------------------------------#
| 7 | 6    | 5    | 4     | 3     | 2      | 1      | 0      |
#-----------------------------------------------------------*/

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


/*------------------------------------------------#
| PIE2                                      0xFA0 |
#-------------------------------------------------#
| - | - | - | - | BCLIE | LVDIE | TMR3IE | CCP2IE |
#-------------------------------------------------#
| 7 | 6 | 5 | 4 | 3     | 2     | 1      | 0      |
#------------------------------------------------*/

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

#define BCLIE                                    0x3
#define BCLIE_address                            0xFA0
#define BCLIE_position                           0x3
#define BCLIE_size                               0x1
#define BCLIE_value_mask                         0x8
#define BCLIE_clear_mask                         0xF7


/*------------------------------------------------#
| PIR2                                      0xFA1 |
#-------------------------------------------------#
| - | - | - | - | BCLIF | LVDIF | TMR3IF | CCP2IF |
#-------------------------------------------------#
| 7 | 6 | 5 | 4 | 3     | 2     | 1      | 0      |
#------------------------------------------------*/

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

#define BCLIF                                    0x3
#define BCLIF_address                            0xFA1
#define BCLIF_position                           0x3
#define BCLIF_size                               0x1
#define BCLIF_value_mask                         0x8
#define BCLIF_clear_mask                         0xF7


/*------------------------------------------------#
| IPR2                                      0xFA2 |
#-------------------------------------------------#
| - | - | - | - | BCLIP | LVDIP | TMR3IP | CCP2IP |
#-------------------------------------------------#
| 7 | 6 | 5 | 4 | 3     | 2     | 1      | 0      |
#------------------------------------------------*/

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


/*--------------------------------------------------------------#
| CSELIO                                                  0xFA6 |
#---------------------------------------------------------------#
| CSIO7 | CSIO6 | CSIO5 | CSIO4 | CSIO3 | CSIO2 | CSIO1 | CSIO0 |
#---------------------------------------------------------------#
| 7     | 6     | 5     | 4     | 3     | 2     | 1     | 0     |
#--------------------------------------------------------------*/

#define CSELIO                                   0x0
#define CSELIO_address                           0xFA6
#define CSELIO_position                          0x0
#define CSELIO_size                              0x8
#define CSELIO_value_mask                        0xFF
#define CSELIO_clear_mask                        0x0

#define CSELIO_CSIO                              0x0
#define CSELIO_CSIO_address                      0xFA6
#define CSELIO_CSIO_position                     0x0
#define CSELIO_CSIO_size                         0x8
#define CSELIO_CSIO_value_mask                   0xFF
#define CSELIO_CSIO_clear_mask                   0x0

#define CSIO0                                    0x0
#define CSIO0_address                            0xFA6
#define CSIO0_position                           0x0
#define CSIO0_size                               0x1
#define CSIO0_value_mask                         0x1
#define CSIO0_clear_mask                         0xFE

#define CSIO1                                    0x1
#define CSIO1_address                            0xFA6
#define CSIO1_position                           0x1
#define CSIO1_size                               0x1
#define CSIO1_value_mask                         0x2
#define CSIO1_clear_mask                         0xFD

#define CSIO2                                    0x2
#define CSIO2_address                            0xFA6
#define CSIO2_position                           0x2
#define CSIO2_size                               0x1
#define CSIO2_value_mask                         0x4
#define CSIO2_clear_mask                         0xFB

#define CSIO3                                    0x3
#define CSIO3_address                            0xFA6
#define CSIO3_position                           0x3
#define CSIO3_size                               0x1
#define CSIO3_value_mask                         0x8
#define CSIO3_clear_mask                         0xF7

#define CSIO4                                    0x4
#define CSIO4_address                            0xFA6
#define CSIO4_position                           0x4
#define CSIO4_size                               0x1
#define CSIO4_value_mask                         0x10
#define CSIO4_clear_mask                         0xEF

#define CSIO5                                    0x5
#define CSIO5_address                            0xFA6
#define CSIO5_position                           0x5
#define CSIO5_size                               0x1
#define CSIO5_value_mask                         0x20
#define CSIO5_clear_mask                         0xDF

#define CSIO6                                    0x6
#define CSIO6_address                            0xFA6
#define CSIO6_position                           0x6
#define CSIO6_size                               0x1
#define CSIO6_value_mask                         0x40
#define CSIO6_clear_mask                         0xBF

#define CSIO7                                    0x7
#define CSIO7_address                            0xFA6
#define CSIO7_position                           0x7
#define CSIO7_size                               0x1
#define CSIO7_value_mask                         0x80
#define CSIO7_clear_mask                         0x7F


/*------------------------------------------------------#
| CSEL2                                           0xFA7 |
#-------------------------------------------------------#
| CSL7 | CSL6 | CSL5 | CSL4 | CSL3 | CSL2 | CSL1 | CSL0 |
#-------------------------------------------------------#
| 7    | 6    | 5    | 4    | 3    | 2    | 1    | 0    |
#------------------------------------------------------*/

#define CSEL2                                    0x0
#define CSEL2_address                            0xFA7
#define CSEL2_position                           0x0
#define CSEL2_size                               0x8
#define CSEL2_value_mask                         0xFF
#define CSEL2_clear_mask                         0x0

#define CSL                                      0x0
#define CSL_address                              0xFA7
#define CSL_position                             0x0
#define CSL_size                                 0x8
#define CSL_value_mask                           0xFF
#define CSL_clear_mask                           0x0

#define CSL0                                     0x0
#define CSL0_address                             0xFA7
#define CSL0_position                            0x0
#define CSL0_size                                0x1
#define CSL0_value_mask                          0x1
#define CSL0_clear_mask                          0xFE

#define CSL1                                     0x1
#define CSL1_address                             0xFA7
#define CSL1_position                            0x1
#define CSL1_size                                0x1
#define CSL1_value_mask                          0x2
#define CSL1_clear_mask                          0xFD

#define CSL2                                     0x2
#define CSL2_address                             0xFA7
#define CSL2_position                            0x2
#define CSL2_size                                0x1
#define CSL2_value_mask                          0x4
#define CSL2_clear_mask                          0xFB

#define CSL3                                     0x3
#define CSL3_address                             0xFA7
#define CSL3_position                            0x3
#define CSL3_size                                0x1
#define CSL3_value_mask                          0x8
#define CSL3_clear_mask                          0xF7

#define CSL4                                     0x4
#define CSL4_address                             0xFA7
#define CSL4_position                            0x4
#define CSL4_size                                0x1
#define CSL4_value_mask                          0x10
#define CSL4_clear_mask                          0xEF

#define CSL5                                     0x5
#define CSL5_address                             0xFA7
#define CSL5_position                            0x5
#define CSL5_size                                0x1
#define CSL5_value_mask                          0x20
#define CSL5_clear_mask                          0xDF

#define CSL6                                     0x6
#define CSL6_address                             0xFA7
#define CSL6_position                            0x6
#define CSL6_size                                0x1
#define CSL6_value_mask                          0x40
#define CSL6_clear_mask                          0xBF

#define CSL7                                     0x7
#define CSL7_address                             0xFA7
#define CSL7_position                            0x7
#define CSL7_size                                0x1
#define CSL7_value_mask                          0x80
#define CSL7_clear_mask                          0x7F


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


/*-----------------------------------------------------#
| TXSTA                                          0xFAC |
#------------------------------------------------------#
| CSRC1 | TX91 | TXEN | SYNC | - | BRGH1 | TRMT | TXD8 |
#------------------------------------------------------#
| 7     | 6    | 5    | 4    | 3 | 2     | 1    | 0    |
#-----------------------------------------------------*/

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


/*--------------------------------------#
| PSPCON                          0xFB0 |
#---------------------------------------#
| - | - | - | - | - | - | CMLK1 | CMLK0 |
#---------------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1     | 0     |
#--------------------------------------*/

#define PSPCON                                   0x0
#define PSPCON_address                           0xFB0
#define PSPCON_position                          0x0
#define PSPCON_size                              0x8
#define PSPCON_value_mask                        0xFF
#define PSPCON_clear_mask                        0x0

#define CMLK0                                    0x0
#define CMLK0_address                            0xFB0
#define CMLK0_position                           0x0
#define CMLK0_size                               0x1
#define CMLK0_value_mask                         0x1
#define CMLK0_clear_mask                         0xFE

#define CMLK                                     0x0
#define CMLK_address                             0xFB0
#define CMLK_position                            0x0
#define CMLK_size                                0x2
#define CMLK_value_mask                          0x3
#define CMLK_clear_mask                          0xFC

#define CMLK1                                    0x1
#define CMLK1_address                            0xFB0
#define CMLK1_position                           0x1
#define CMLK1_size                               0x1
#define CMLK1_value_mask                         0x2
#define CMLK1_clear_mask                         0xFD


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

#define CCP2Y                                    0x4
#define CCP2Y_address                            0xFBA
#define CCP2Y_position                           0x4
#define CCP2Y_size                               0x1
#define CCP2Y_value_mask                         0x10
#define CCP2Y_clear_mask                         0xEF

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

#define DCCPX                                    0x5
#define DCCPX_address                            0xFBA
#define DCCPX_position                           0x5
#define DCCPX_size                               0x1
#define DCCPX_value_mask                         0x20
#define DCCPX_clear_mask                         0xDF

#define CCP2X                                    0x5
#define CCP2X_address                            0xFBA
#define CCP2X_position                           0x5
#define CCP2X_size                               0x1
#define CCP2X_value_mask                         0x20
#define CCP2X_clear_mask                         0xDF


/*----------------------------------------------------------#
| CCP1CON                                             0xFBD |
#-----------------------------------------------------------#
| - | - | CCP1X | CCP1Y | CCP1M3 | CCP1M2 | CCP1M1 | CCP1M0 |
#-----------------------------------------------------------#
| 7 | 6 | 5     | 4     | 3      | 2      | 1      | 0      |
#----------------------------------------------------------*/

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


/*---------------------------------------------#
| ADCON2                                 0xFC0 |
#----------------------------------------------#
| ADFM | - | - | - | - | ADCS2 | ADCS1 | ADCS0 |
#----------------------------------------------#
| 7    | 6 | 5 | 4 | 3 | 2     | 1     | 0     |
#---------------------------------------------*/

#define ADCON2                                   0x0
#define ADCON2_address                           0xFC0
#define ADCON2_position                          0x0
#define ADCON2_size                              0x8
#define ADCON2_value_mask                        0xFF
#define ADCON2_clear_mask                        0x0

#define ADCS                                     0x0
#define ADCS_address                             0xFC0
#define ADCS_position                            0x0
#define ADCS_size                                0x3
#define ADCS_value_mask                          0x7
#define ADCS_clear_mask                          0xF8

#define ADCS0                                    0x0
#define ADCS0_address                            0xFC0
#define ADCS0_position                           0x0
#define ADCS0_size                               0x1
#define ADCS0_value_mask                         0x1
#define ADCS0_clear_mask                         0xFE

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

#define NOT_WRITE                                0x2
#define NOT_WRITE_address                        0xFC7
#define NOT_WRITE_position                       0x2
#define NOT_WRITE_size                           0x1
#define NOT_WRITE_value_mask                     0x4
#define NOT_WRITE_clear_mask                     0xFB

#define nW                                       0x2
#define nW_address                               0xFC7
#define nW_position                              0x2
#define nW_size                                  0x1
#define nW_value_mask                            0x4
#define nW_clear_mask                            0xFB

#define nWRITE                                   0x2
#define nWRITE_address                           0xFC7
#define nWRITE_position                          0x2
#define nWRITE_size                              0x1
#define nWRITE_value_mask                        0x4
#define nWRITE_clear_mask                        0xFB

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

#define I2C_DATA                                 0x5
#define I2C_DATA_address                         0xFC7
#define I2C_DATA_position                        0x5
#define I2C_DATA_size                            0x1
#define I2C_DATA_value_mask                      0x20
#define I2C_DATA_clear_mask                      0xDF

#define nA                                       0x5
#define nA_address                               0xFC7
#define nA_position                              0x5
#define nA_size                                  0x1
#define nA_value_mask                            0x20
#define nA_clear_mask                            0xDF

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

#define DATA_ADDRESS                             0x5
#define DATA_ADDRESS_address                     0xFC7
#define DATA_ADDRESS_position                    0x5
#define DATA_ADDRESS_size                        0x1
#define DATA_ADDRESS_value_mask                  0x20
#define DATA_ADDRESS_clear_mask                  0xDF

#define D_A                                      0x5
#define D_A_address                              0xFC7
#define D_A_position                             0x5
#define D_A_size                                 0x1
#define D_A_value_mask                           0x20
#define D_A_clear_mask                           0xDF

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


/*-----------------------------------------------------------------------#
| T2CON                                                            0xFCA |
#------------------------------------------------------------------------#
| - | TOUTPS3 | TOUTPS2 | TOUTPS1 | TOUTPS0 | TMR2ON | T2CKPS1 | T2CKPS0 |
#------------------------------------------------------------------------#
| 7 | 6       | 5       | 4       | 3       | 2      | 1       | 0       |
#-----------------------------------------------------------------------*/

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

#define TOUTPS1                                  0x4
#define TOUTPS1_address                          0xFCA
#define TOUTPS1_position                         0x4
#define TOUTPS1_size                             0x1
#define TOUTPS1_value_mask                       0x10
#define TOUTPS1_clear_mask                       0xEF

#define TOUTPS2                                  0x5
#define TOUTPS2_address                          0xFCA
#define TOUTPS2_position                         0x5
#define TOUTPS2_size                             0x1
#define TOUTPS2_value_mask                       0x20
#define TOUTPS2_clear_mask                       0xDF

#define TOUTPS3                                  0x6
#define TOUTPS3_address                          0xFCA
#define TOUTPS3_position                         0x6
#define TOUTPS3_size                             0x1
#define TOUTPS3_value_mask                       0x40
#define TOUTPS3_clear_mask                       0xBF


/*------------------------------------------------------------------------#
| T1CON                                                             0xFCD |
#-------------------------------------------------------------------------#
| T1RD16 | - | T1CKPS1 | T1CKPS0 | T1OSCEN | NOT_T1SYNC | TMR1CS | TMR1ON |
#-------------------------------------------------------------------------#
| 7      | 6 | 5       | 4       | 3       | 2          | 1      | 0      |
#------------------------------------------------------------------------*/

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


/*---------------------------------------------------#
| RCON                                         0xFD0 |
#----------------------------------------------------#
| nIPEN | - | - | nRI | TO | nPD | NOT_POR | NOT_BOR |
#----------------------------------------------------#
| 7     | 6 | 5 | 4   | 3  | 2   | 1       | 0       |
#---------------------------------------------------*/

#define RCON                                     0x0
#define RCON_address                             0xFD0
#define RCON_position                            0x0
#define RCON_size                                0x8
#define RCON_value_mask                          0xFF
#define RCON_clear_mask                          0x0

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

#define PD                                       0x2
#define PD_address                               0xFD0
#define PD_position                              0x2
#define PD_size                                  0x1
#define PD_value_mask                            0x4
#define PD_clear_mask                            0xFB

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


/*--------------------------------------------------#
| WDTCON                                      0xFD1 |
#---------------------------------------------------#
| - | - | - | - | SWDPS2 | SWDPS1 | SWDPS0 | SWDTEN |
#---------------------------------------------------#
| 7 | 6 | 5 | 4 | 3      | 2      | 1      | 0      |
#--------------------------------------------------*/

#define WDTCON                                   0x0
#define WDTCON_address                           0xFD1
#define WDTCON_position                          0x0
#define WDTCON_size                              0x8
#define WDTCON_value_mask                        0xFF
#define WDTCON_clear_mask                        0x0

#define SWDTEN                                   0x0
#define SWDTEN_address                           0xFD1
#define SWDTEN_position                          0x0
#define SWDTEN_size                              0x1
#define SWDTEN_value_mask                        0x1
#define SWDTEN_clear_mask                        0xFE

#define SWDTE                                    0x0
#define SWDTE_address                            0xFD1
#define SWDTE_position                           0x0
#define SWDTE_size                               0x1
#define SWDTE_value_mask                         0x1
#define SWDTE_clear_mask                         0xFE

#define SWDPS0                                   0x1
#define SWDPS0_address                           0xFD1
#define SWDPS0_position                          0x1
#define SWDPS0_size                              0x1
#define SWDPS0_value_mask                        0x2
#define SWDPS0_clear_mask                        0xFD

#define WDPS0                                    0x1
#define WDPS0_address                            0xFD1
#define WDPS0_position                           0x1
#define WDPS0_size                               0x1
#define WDPS0_value_mask                         0x2
#define WDPS0_clear_mask                         0xFD

#define SWDPS                                    0x1
#define SWDPS_address                            0xFD1
#define SWDPS_position                           0x1
#define SWDPS_size                               0x3
#define SWDPS_value_mask                         0xE
#define SWDPS_clear_mask                         0xF1

#define SWDPS1                                   0x2
#define SWDPS1_address                           0xFD1
#define SWDPS1_position                          0x2
#define SWDPS1_size                              0x1
#define SWDPS1_value_mask                        0x4
#define SWDPS1_clear_mask                        0xFB

#define WDPS1                                    0x2
#define WDPS1_address                            0xFD1
#define WDPS1_position                           0x2
#define WDPS1_size                               0x1
#define WDPS1_value_mask                         0x4
#define WDPS1_clear_mask                         0xFB

#define SWDPS2                                   0x3
#define SWDPS2_address                           0xFD1
#define SWDPS2_position                          0x3
#define SWDPS2_size                              0x1
#define SWDPS2_value_mask                        0x8
#define SWDPS2_clear_mask                        0xF7

#define WDPS2                                    0x3
#define WDPS2_address                            0xFD1
#define WDPS2_position                           0x3
#define WDPS2_size                               0x1
#define WDPS2_value_mask                         0x8
#define WDPS2_clear_mask                         0xF7


/*--------------------------------------------------#
| LVDCON                                      0xFD2 |
#---------------------------------------------------#
| - | - | IRVST | LVDEN | LVV3 | LVV2 | LVV1 | LVV0 |
#---------------------------------------------------#
| 7 | 6 | 5     | 4     | 3    | 2    | 1    | 0    |
#--------------------------------------------------*/

#define LVDCON                                   0x0
#define LVDCON_address                           0xFD2
#define LVDCON_position                          0x0
#define LVDCON_size                              0x8
#define LVDCON_value_mask                        0xFF
#define LVDCON_clear_mask                        0x0

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

#define LVDL                                     0x0
#define LVDL_address                             0xFD2
#define LVDL_position                            0x0
#define LVDL_size                                0x4
#define LVDL_value_mask                          0xF
#define LVDL_clear_mask                          0xF0

#define LVV1                                     0x1
#define LVV1_address                             0xFD2
#define LVV1_position                            0x1
#define LVV1_size                                0x1
#define LVV1_value_mask                          0x2
#define LVV1_clear_mask                          0xFD

#define LVDL1                                    0x1
#define LVDL1_address                            0xFD2
#define LVDL1_position                           0x1
#define LVDL1_size                               0x1
#define LVDL1_value_mask                         0x2
#define LVDL1_clear_mask                         0xFD

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

#define LVDEN                                    0x4
#define LVDEN_address                            0xFD2
#define LVDEN_position                           0x4
#define LVDEN_size                               0x1
#define LVDEN_value_mask                         0x10
#define LVDEN_clear_mask                         0xEF

#define IRVST                                    0x5
#define IRVST_address                            0xFD2
#define IRVST_position                           0x5
#define IRVST_size                               0x1
#define IRVST_value_mask                         0x20
#define IRVST_clear_mask                         0xDF


/*-------------------------------------------#
| OSCCON                               0xFD3 |
#--------------------------------------------#
| - | - | - | - | LOCK | PLLEN | SCS1 | SCS0 |
#--------------------------------------------#
| 7 | 6 | 5 | 4 | 3    | 2     | 1    | 0    |
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

#define PLLEN                                    0x2
#define PLLEN_address                            0xFD3
#define PLLEN_position                           0x2
#define PLLEN_size                               0x1
#define PLLEN_value_mask                         0x4
#define PLLEN_clear_mask                         0xFB

#define LOCK                                     0x3
#define LOCK_address                             0xFD3
#define LOCK_position                            0x3
#define LOCK_size                                0x1
#define LOCK_value_mask                          0x8
#define LOCK_clear_mask                          0xF7


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

#define T016BIT                                  0x6
#define T016BIT_address                          0xFD5
#define T016BIT_position                         0x6
#define T016BIT_size                             0x1
#define T016BIT_value_mask                       0x40
#define T016BIT_clear_mask                       0xBF

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

#endif // _PIC18C801_H_
