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

#ifndef _PIC18F44J10_H_
#define _PIC18F44J10_H_


/*--------------------------------------------------------------#
| PORTA                                                   0xF80 |
#---------------------------------------------------------------#
| - | - | PORTA_C2OUT | - | VREFP | CVREF | PORTA_RA1 | ULPWUIN |
#---------------------------------------------------------------#
| 7 | 6 | 5           | 4 | 3     | 2     | 1         | 0       |
#--------------------------------------------------------------*/

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

#define CVREF                                    0x2
#define CVREF_address                            0xF80
#define CVREF_position                           0x2
#define CVREF_size                               0x1
#define CVREF_value_mask                         0x4
#define CVREF_clear_mask                         0xFB

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

#define PORTA_C2OUT                              0x5
#define PORTA_C2OUT_address                      0xF80
#define PORTA_C2OUT_position                     0x5
#define PORTA_C2OUT_size                         0x1
#define PORTA_C2OUT_value_mask                   0x20
#define PORTA_C2OUT_clear_mask                   0xDF

#define SS1                                      0x5
#define SS1_address                              0xF80
#define SS1_position                             0x5
#define SS1_size                                 0x1
#define SS1_value_mask                           0x20
#define SS1_clear_mask                           0xDF

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

#define nSS1                                     0x5
#define nSS1_address                             0xF80
#define nSS1_position                            0x5
#define nSS1_size                                0x1
#define nSS1_value_mask                          0x20
#define nSS1_clear_mask                          0xDF

#define NOT_SS1                                  0x5
#define NOT_SS1_address                          0xF80
#define NOT_SS1_position                         0x5
#define NOT_SS1_size                             0x1
#define NOT_SS1_value_mask                       0x20
#define NOT_SS1_clear_mask                       0xDF


/*---------------------------------------------------#
| PORTB                                        0xF81 |
#----------------------------------------------------#
| PGD | PGC | T0CKI | AN11 | AN9 | AN8 | AN10 | FLT0 |
#----------------------------------------------------#
| 7   | 6   | 5     | 4    | 3   | 2   | 1    | 0    |
#---------------------------------------------------*/

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

#define AN12                                     0x0
#define AN12_address                             0xF81
#define AN12_position                            0x0
#define AN12_size                                0x1
#define AN12_value_mask                          0x1
#define AN12_clear_mask                          0xFE

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

#define AN10                                     0x1
#define AN10_address                             0xF81
#define AN10_position                            0x1
#define AN10_size                                0x1
#define AN10_value_mask                          0x2
#define AN10_clear_mask                          0xFD

#define AN8                                      0x2
#define AN8_address                              0xF81
#define AN8_position                             0x2
#define AN8_size                                 0x1
#define AN8_value_mask                           0x4
#define AN8_clear_mask                           0xFB

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

#define AN9                                      0x3
#define AN9_address                              0xF81
#define AN9_position                             0x3
#define AN9_size                                 0x1
#define AN9_value_mask                           0x8
#define AN9_clear_mask                           0xF7

#define PORTB_CCP2                               0x3
#define PORTB_CCP2_address                       0xF81
#define PORTB_CCP2_position                      0x3
#define PORTB_CCP2_size                          0x1
#define PORTB_CCP2_value_mask                    0x8
#define PORTB_CCP2_clear_mask                    0xF7

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

#define AN11                                     0x4
#define AN11_address                             0xF81
#define AN11_position                            0x4
#define AN11_size                                0x1
#define AN11_value_mask                          0x10
#define AN11_clear_mask                          0xEF

#define T0CKI                                    0x5
#define T0CKI_address                            0xF81
#define T0CKI_position                           0x5
#define T0CKI_size                               0x1
#define T0CKI_value_mask                         0x20
#define T0CKI_clear_mask                         0xDF

#define PORTB_RB5                                0x5
#define PORTB_RB5_address                        0xF81
#define PORTB_RB5_position                       0x5
#define PORTB_RB5_size                           0x1
#define PORTB_RB5_value_mask                     0x20
#define PORTB_RB5_clear_mask                     0xDF

#define PORTB_C1OUT                              0x5
#define PORTB_C1OUT_address                      0xF81
#define PORTB_C1OUT_position                     0x5
#define PORTB_C1OUT_size                         0x1
#define PORTB_C1OUT_value_mask                   0x20
#define PORTB_C1OUT_clear_mask                   0xDF

#define KBI1                                     0x5
#define KBI1_address                             0xF81
#define KBI1_position                            0x5
#define KBI1_size                                0x1
#define KBI1_value_mask                          0x20
#define KBI1_clear_mask                          0xDF

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

#define KBI2                                     0x6
#define KBI2_address                             0xF81
#define KBI2_position                            0x6
#define KBI2_size                                0x1
#define KBI2_value_mask                          0x40
#define KBI2_clear_mask                          0xBF

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

#define KBI3                                     0x7
#define KBI3_address                             0xF81
#define KBI3_position                            0x7
#define KBI3_size                                0x1
#define KBI3_value_mask                          0x80
#define KBI3_clear_mask                          0x7F


/*--------------------------------------------------------#
| PORTC                                             0xF82 |
#---------------------------------------------------------#
| DT | CK | SDO1 | SDI1 | SCK1 | P1A | PORTC_CCP2 | T1CKI |
#---------------------------------------------------------#
| 7  | 6  | 5    | 4    | 3    | 2   | 1          | 0     |
#--------------------------------------------------------*/

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


/*-----------------------------------------------------#
| PORTD                                          0xF83 |
#------------------------------------------------------#
| PSP7 | PSP6 | PSP5 | PSP4 | SS2 | PSP2 | PSP1 | SCK2 |
#------------------------------------------------------#
| 7    | 6    | 5    | 4    | 3   | 2    | 1    | 0    |
#-----------------------------------------------------*/

#define PORTD                                    0x0
#define PORTD_address                            0xF83
#define PORTD_position                           0x0
#define PORTD_size                               0x8
#define PORTD_value_mask                         0xFF
#define PORTD_clear_mask                         0x0

#define SCK2                                     0x0
#define SCK2_address                             0xF83
#define SCK2_position                            0x0
#define SCK2_size                                0x1
#define SCK2_value_mask                          0x1
#define SCK2_clear_mask                          0xFE

#define PSP0                                     0x0
#define PSP0_address                             0xF83
#define PSP0_position                            0x0
#define PSP0_size                                0x1
#define PSP0_value_mask                          0x1
#define PSP0_clear_mask                          0xFE

#define SCL2                                     0x0
#define SCL2_address                             0xF83
#define SCL2_position                            0x0
#define SCL2_size                                0x1
#define SCL2_value_mask                          0x1
#define SCL2_clear_mask                          0xFE

#define PORTD_RD0                                0x0
#define PORTD_RD0_address                        0xF83
#define PORTD_RD0_position                       0x0
#define PORTD_RD0_size                           0x1
#define PORTD_RD0_value_mask                     0x1
#define PORTD_RD0_clear_mask                     0xFE

#define PSP1                                     0x1
#define PSP1_address                             0xF83
#define PSP1_position                            0x1
#define PSP1_size                                0x1
#define PSP1_value_mask                          0x2
#define PSP1_clear_mask                          0xFD

#define SDI2                                     0x1
#define SDI2_address                             0xF83
#define SDI2_position                            0x1
#define SDI2_size                                0x1
#define SDI2_value_mask                          0x2
#define SDI2_clear_mask                          0xFD

#define SDA2                                     0x1
#define SDA2_address                             0xF83
#define SDA2_position                            0x1
#define SDA2_size                                0x1
#define SDA2_value_mask                          0x2
#define SDA2_clear_mask                          0xFD

#define PORTD_RD1                                0x1
#define PORTD_RD1_address                        0xF83
#define PORTD_RD1_position                       0x1
#define PORTD_RD1_size                           0x1
#define PORTD_RD1_value_mask                     0x2
#define PORTD_RD1_clear_mask                     0xFD

#define PSP2                                     0x2
#define PSP2_address                             0xF83
#define PSP2_position                            0x2
#define PSP2_size                                0x1
#define PSP2_value_mask                          0x4
#define PSP2_clear_mask                          0xFB

#define SDO2                                     0x2
#define SDO2_address                             0xF83
#define SDO2_position                            0x2
#define SDO2_size                                0x1
#define SDO2_value_mask                          0x4
#define SDO2_clear_mask                          0xFB

#define PORTD_RD2                                0x2
#define PORTD_RD2_address                        0xF83
#define PORTD_RD2_position                       0x2
#define PORTD_RD2_size                           0x1
#define PORTD_RD2_value_mask                     0x4
#define PORTD_RD2_clear_mask                     0xFB

#define SS2                                      0x3
#define SS2_address                              0xF83
#define SS2_position                             0x3
#define SS2_size                                 0x1
#define SS2_value_mask                           0x8
#define SS2_clear_mask                           0xF7

#define PSP3                                     0x3
#define PSP3_address                             0xF83
#define PSP3_position                            0x3
#define PSP3_size                                0x1
#define PSP3_value_mask                          0x8
#define PSP3_clear_mask                          0xF7

#define NOT_SS2                                  0x3
#define NOT_SS2_address                          0xF83
#define NOT_SS2_position                         0x3
#define NOT_SS2_size                             0x1
#define NOT_SS2_value_mask                       0x8
#define NOT_SS2_clear_mask                       0xF7

#define nSS2                                     0x3
#define nSS2_address                             0xF83
#define nSS2_position                            0x3
#define nSS2_size                                0x1
#define nSS2_value_mask                          0x8
#define nSS2_clear_mask                          0xF7

#define PORTD_RD3                                0x3
#define PORTD_RD3_address                        0xF83
#define PORTD_RD3_position                       0x3
#define PORTD_RD3_size                           0x1
#define PORTD_RD3_value_mask                     0x8
#define PORTD_RD3_clear_mask                     0xF7

#define PSP4                                     0x4
#define PSP4_address                             0xF83
#define PSP4_position                            0x4
#define PSP4_size                                0x1
#define PSP4_value_mask                          0x10
#define PSP4_clear_mask                          0xEF

#define PORTD_RD4                                0x4
#define PORTD_RD4_address                        0xF83
#define PORTD_RD4_position                       0x4
#define PORTD_RD4_size                           0x1
#define PORTD_RD4_value_mask                     0x10
#define PORTD_RD4_clear_mask                     0xEF

#define PSP5                                     0x5
#define PSP5_address                             0xF83
#define PSP5_position                            0x5
#define PSP5_size                                0x1
#define PSP5_value_mask                          0x20
#define PSP5_clear_mask                          0xDF

#define P1B                                      0x5
#define P1B_address                              0xF83
#define P1B_position                             0x5
#define P1B_size                                 0x1
#define P1B_value_mask                           0x20
#define P1B_clear_mask                           0xDF

#define PORTD_RD5                                0x5
#define PORTD_RD5_address                        0xF83
#define PORTD_RD5_position                       0x5
#define PORTD_RD5_size                           0x1
#define PORTD_RD5_value_mask                     0x20
#define PORTD_RD5_clear_mask                     0xDF

#define PSP6                                     0x6
#define PSP6_address                             0xF83
#define PSP6_position                            0x6
#define PSP6_size                                0x1
#define PSP6_value_mask                          0x40
#define PSP6_clear_mask                          0xBF

#define P1C                                      0x6
#define P1C_address                              0xF83
#define P1C_position                             0x6
#define P1C_size                                 0x1
#define P1C_value_mask                           0x40
#define P1C_clear_mask                           0xBF

#define PORTD_RD6                                0x6
#define PORTD_RD6_address                        0xF83
#define PORTD_RD6_position                       0x6
#define PORTD_RD6_size                           0x1
#define PORTD_RD6_value_mask                     0x40
#define PORTD_RD6_clear_mask                     0xBF

#define PSP7                                     0x7
#define PSP7_address                             0xF83
#define PSP7_position                            0x7
#define PSP7_size                                0x1
#define PSP7_value_mask                          0x80
#define PSP7_clear_mask                          0x7F

#define P1D                                      0x7
#define P1D_address                              0xF83
#define P1D_position                             0x7
#define P1D_size                                 0x1
#define P1D_value_mask                           0x80
#define P1D_clear_mask                           0x7F

#define PORTD_RD7                                0x7
#define PORTD_RD7_address                        0xF83
#define PORTD_RD7_position                       0x7
#define PORTD_RD7_size                           0x1
#define PORTD_RD7_value_mask                     0x80
#define PORTD_RD7_clear_mask                     0x7F


/*-----------------------------------------#
| PORTE                              0xF84 |
#------------------------------------------#
| - | - | - | - | - | AN7 | PORTE_WR | RDE |
#------------------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2   | 1        | 0   |
#-----------------------------------------*/

#define PORTE                                    0x0
#define PORTE_address                            0xF84
#define PORTE_position                           0x0
#define PORTE_size                               0x8
#define PORTE_value_mask                         0xFF
#define PORTE_clear_mask                         0x0

#define NOT_RD                                   0x0
#define NOT_RD_address                           0xF84
#define NOT_RD_position                          0x0
#define NOT_RD_size                              0x1
#define NOT_RD_value_mask                        0x1
#define NOT_RD_clear_mask                        0xFE

#define nRD                                      0x0
#define nRD_address                              0xF84
#define nRD_position                             0x0
#define nRD_size                                 0x1
#define nRD_value_mask                           0x1
#define nRD_clear_mask                           0xFE

#define AN5                                      0x0
#define AN5_address                              0xF84
#define AN5_position                             0x0
#define AN5_size                                 0x1
#define AN5_value_mask                           0x1
#define AN5_clear_mask                           0xFE

#define PD2                                      0x0
#define PD2_address                              0xF84
#define PD2_position                             0x0
#define PD2_size                                 0x1
#define PD2_value_mask                           0x1
#define PD2_clear_mask                           0xFE

#define RD                                       0x0
#define RD_address                               0xF84
#define RD_position                              0x0
#define RD_size                                  0x1
#define RD_value_mask                            0x1
#define RD_clear_mask                            0xFE

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

#define AN6                                      0x1
#define AN6_address                              0xF84
#define AN6_position                             0x1
#define AN6_size                                 0x1
#define AN6_value_mask                           0x2
#define AN6_clear_mask                           0xFD

#define NOT_WR                                   0x1
#define NOT_WR_address                           0xF84
#define NOT_WR_position                          0x1
#define NOT_WR_size                              0x1
#define NOT_WR_value_mask                        0x2
#define NOT_WR_clear_mask                        0xFD

#define PORTE_WR                                 0x1
#define PORTE_WR_address                         0xF84
#define PORTE_WR_position                        0x1
#define PORTE_WR_size                            0x1
#define PORTE_WR_value_mask                      0x2
#define PORTE_WR_clear_mask                      0xFD

#define WRE                                      0x1
#define WRE_address                              0xF84
#define WRE_position                             0x1
#define WRE_size                                 0x1
#define WRE_value_mask                           0x2
#define WRE_clear_mask                           0xFD

#define nWR                                      0x1
#define nWR_address                              0xF84
#define nWR_position                             0x1
#define nWR_size                                 0x1
#define nWR_value_mask                           0x2
#define nWR_clear_mask                           0xFD

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

#define nCS                                      0x2
#define nCS_address                              0xF84
#define nCS_position                             0x2
#define nCS_size                                 0x1
#define nCS_value_mask                           0x4
#define nCS_clear_mask                           0xFB

#define NOT_CS                                   0x2
#define NOT_CS_address                           0xF84
#define NOT_CS_position                          0x2
#define NOT_CS_size                              0x1
#define NOT_CS_value_mask                        0x4
#define NOT_CS_clear_mask                        0xFB

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

#define AN7                                      0x2
#define AN7_address                              0xF84
#define AN7_position                             0x2
#define AN7_size                                 0x1
#define AN7_value_mask                           0x4
#define AN7_clear_mask                           0xFB


/*---------------------------------------------------------------------------------------#
| SSP2CON2                                                                         0xF85 |
#----------------------------------------------------------------------------------------#
| GCEN2 | SSP2CON2_ACKSTAT | ADMSK52 | ACKEN2 | ADMSK32 | ADMSK22 | RSEN2 | SSP2CON2_SEN |
#----------------------------------------------------------------------------------------#
| 7     | 6                | 5       | 4      | 3       | 2       | 1     | 0            |
#---------------------------------------------------------------------------------------*/

#define SSP2CON2                                 0x0
#define SSP2CON2_address                         0xF85
#define SSP2CON2_position                        0x0
#define SSP2CON2_size                            0x8
#define SSP2CON2_value_mask                      0xFF
#define SSP2CON2_clear_mask                      0x0

#define SEN2                                     0x0
#define SEN2_address                             0xF85
#define SEN2_position                            0x0
#define SEN2_size                                0x1
#define SEN2_value_mask                          0x1
#define SEN2_clear_mask                          0xFE

#define SSP2CON2_SEN                             0x0
#define SSP2CON2_SEN_address                     0xF85
#define SSP2CON2_SEN_position                    0x0
#define SSP2CON2_SEN_size                        0x1
#define SSP2CON2_SEN_value_mask                  0x1
#define SSP2CON2_SEN_clear_mask                  0xFE

#define ADMSK12                                  0x1
#define ADMSK12_address                          0xF85
#define ADMSK12_position                         0x1
#define ADMSK12_size                             0x1
#define ADMSK12_value_mask                       0x2
#define ADMSK12_clear_mask                       0xFD

#define SSP2CON2_RSEN                            0x1
#define SSP2CON2_RSEN_address                    0xF85
#define SSP2CON2_RSEN_position                   0x1
#define SSP2CON2_RSEN_size                       0x1
#define SSP2CON2_RSEN_value_mask                 0x2
#define SSP2CON2_RSEN_clear_mask                 0xFD

#define RSEN2                                    0x1
#define RSEN2_address                            0xF85
#define RSEN2_position                           0x1
#define RSEN2_size                               0x1
#define RSEN2_value_mask                         0x2
#define RSEN2_clear_mask                         0xFD

#define ADMSK22                                  0x2
#define ADMSK22_address                          0xF85
#define ADMSK22_position                         0x2
#define ADMSK22_size                             0x1
#define ADMSK22_value_mask                       0x4
#define ADMSK22_clear_mask                       0xFB

#define PEN2                                     0x2
#define PEN2_address                             0xF85
#define PEN2_position                            0x2
#define PEN2_size                                0x1
#define PEN2_value_mask                          0x4
#define PEN2_clear_mask                          0xFB

#define SSP2CON2_PEN                             0x2
#define SSP2CON2_PEN_address                     0xF85
#define SSP2CON2_PEN_position                    0x2
#define SSP2CON2_PEN_size                        0x1
#define SSP2CON2_PEN_value_mask                  0x4
#define SSP2CON2_PEN_clear_mask                  0xFB

#define ADMSK32                                  0x3
#define ADMSK32_address                          0xF85
#define ADMSK32_position                         0x3
#define ADMSK32_size                             0x1
#define ADMSK32_value_mask                       0x8
#define ADMSK32_clear_mask                       0xF7

#define SSP2CON2_RCEN                            0x3
#define SSP2CON2_RCEN_address                    0xF85
#define SSP2CON2_RCEN_position                   0x3
#define SSP2CON2_RCEN_size                       0x1
#define SSP2CON2_RCEN_value_mask                 0x8
#define SSP2CON2_RCEN_clear_mask                 0xF7

#define RCEN2                                    0x3
#define RCEN2_address                            0xF85
#define RCEN2_position                           0x3
#define RCEN2_size                               0x1
#define RCEN2_value_mask                         0x8
#define RCEN2_clear_mask                         0xF7

#define ACKEN2                                   0x4
#define ACKEN2_address                           0xF85
#define ACKEN2_position                          0x4
#define ACKEN2_size                              0x1
#define ACKEN2_value_mask                        0x10
#define ACKEN2_clear_mask                        0xEF

#define ADMSK42                                  0x4
#define ADMSK42_address                          0xF85
#define ADMSK42_position                         0x4
#define ADMSK42_size                             0x1
#define ADMSK42_value_mask                       0x10
#define ADMSK42_clear_mask                       0xEF

#define SSP2CON2_ACKEN                           0x4
#define SSP2CON2_ACKEN_address                   0xF85
#define SSP2CON2_ACKEN_position                  0x4
#define SSP2CON2_ACKEN_size                      0x1
#define SSP2CON2_ACKEN_value_mask                0x10
#define SSP2CON2_ACKEN_clear_mask                0xEF

#define ACKDT2                                   0x5
#define ACKDT2_address                           0xF85
#define ACKDT2_position                          0x5
#define ACKDT2_size                              0x1
#define ACKDT2_value_mask                        0x20
#define ACKDT2_clear_mask                        0xDF

#define ADMSK52                                  0x5
#define ADMSK52_address                          0xF85
#define ADMSK52_position                         0x5
#define ADMSK52_size                             0x1
#define ADMSK52_value_mask                       0x20
#define ADMSK52_clear_mask                       0xDF

#define SSP2CON2_ACKDT                           0x5
#define SSP2CON2_ACKDT_address                   0xF85
#define SSP2CON2_ACKDT_position                  0x5
#define SSP2CON2_ACKDT_size                      0x1
#define SSP2CON2_ACKDT_value_mask                0x20
#define SSP2CON2_ACKDT_clear_mask                0xDF

#define SSP2CON2_ACKSTAT                         0x6
#define SSP2CON2_ACKSTAT_address                 0xF85
#define SSP2CON2_ACKSTAT_position                0x6
#define SSP2CON2_ACKSTAT_size                    0x1
#define SSP2CON2_ACKSTAT_value_mask              0x40
#define SSP2CON2_ACKSTAT_clear_mask              0xBF

#define ACKSTAT2                                 0x6
#define ACKSTAT2_address                         0xF85
#define ACKSTAT2_position                        0x6
#define ACKSTAT2_size                            0x1
#define ACKSTAT2_value_mask                      0x40
#define ACKSTAT2_clear_mask                      0xBF

#define GCEN2                                    0x7
#define GCEN2_address                            0xF85
#define GCEN2_position                           0x7
#define GCEN2_size                               0x1
#define GCEN2_value_mask                         0x80
#define GCEN2_clear_mask                         0x7F

#define SSP2CON2_GCEN                            0x7
#define SSP2CON2_GCEN_address                    0xF85
#define SSP2CON2_GCEN_position                   0x7
#define SSP2CON2_GCEN_size                       0x1
#define SSP2CON2_GCEN_value_mask                 0x80
#define SSP2CON2_GCEN_clear_mask                 0x7F


/*---------------------------------------------------------------------------------------------------------------------------#
| SSP2CON1                                                                                                             0xF86 |
#----------------------------------------------------------------------------------------------------------------------------#
| WCOL2 | SSP2CON1_SSPOV | SSP2CON1_SSPEN | SSP2CON1_CKP | SSP2CON1_SSPM3 | SSP2CON1_SSPM2 | SSP2CON1_SSPM1 | SSP2CON1_SSPM0 |
#----------------------------------------------------------------------------------------------------------------------------#
| 7     | 6              | 5              | 4            | 3              | 2              | 1              | 0              |
#---------------------------------------------------------------------------------------------------------------------------*/

#define SSP2CON1                                 0x0
#define SSP2CON1_address                         0xF86
#define SSP2CON1_position                        0x0
#define SSP2CON1_size                            0x8
#define SSP2CON1_value_mask                      0xFF
#define SSP2CON1_clear_mask                      0x0

#define SSP2CON1_SSPM                            0x0
#define SSP2CON1_SSPM_address                    0xF86
#define SSP2CON1_SSPM_position                   0x0
#define SSP2CON1_SSPM_size                       0x4
#define SSP2CON1_SSPM_value_mask                 0xF
#define SSP2CON1_SSPM_clear_mask                 0xF0

#define SSP2CON1_SSPM0                           0x0
#define SSP2CON1_SSPM0_address                   0xF86
#define SSP2CON1_SSPM0_position                  0x0
#define SSP2CON1_SSPM0_size                      0x1
#define SSP2CON1_SSPM0_value_mask                0x1
#define SSP2CON1_SSPM0_clear_mask                0xFE

#define SSPM02                                   0x0
#define SSPM02_address                           0xF86
#define SSPM02_position                          0x0
#define SSPM02_size                              0x1
#define SSPM02_value_mask                        0x1
#define SSPM02_clear_mask                        0xFE

#define SSPM12                                   0x1
#define SSPM12_address                           0xF86
#define SSPM12_position                          0x1
#define SSPM12_size                              0x1
#define SSPM12_value_mask                        0x2
#define SSPM12_clear_mask                        0xFD

#define SSP2CON1_SSPM1                           0x1
#define SSP2CON1_SSPM1_address                   0xF86
#define SSP2CON1_SSPM1_position                  0x1
#define SSP2CON1_SSPM1_size                      0x1
#define SSP2CON1_SSPM1_value_mask                0x2
#define SSP2CON1_SSPM1_clear_mask                0xFD

#define SSP2CON1_SSPM2                           0x2
#define SSP2CON1_SSPM2_address                   0xF86
#define SSP2CON1_SSPM2_position                  0x2
#define SSP2CON1_SSPM2_size                      0x1
#define SSP2CON1_SSPM2_value_mask                0x4
#define SSP2CON1_SSPM2_clear_mask                0xFB

#define SSPM22                                   0x2
#define SSPM22_address                           0xF86
#define SSPM22_position                          0x2
#define SSPM22_size                              0x1
#define SSPM22_value_mask                        0x4
#define SSPM22_clear_mask                        0xFB

#define SSPM32                                   0x3
#define SSPM32_address                           0xF86
#define SSPM32_position                          0x3
#define SSPM32_size                              0x1
#define SSPM32_value_mask                        0x8
#define SSPM32_clear_mask                        0xF7

#define SSP2CON1_SSPM3                           0x3
#define SSP2CON1_SSPM3_address                   0xF86
#define SSP2CON1_SSPM3_position                  0x3
#define SSP2CON1_SSPM3_size                      0x1
#define SSP2CON1_SSPM3_value_mask                0x8
#define SSP2CON1_SSPM3_clear_mask                0xF7

#define SSP2CON1_CKP                             0x4
#define SSP2CON1_CKP_address                     0xF86
#define SSP2CON1_CKP_position                    0x4
#define SSP2CON1_CKP_size                        0x1
#define SSP2CON1_CKP_value_mask                  0x10
#define SSP2CON1_CKP_clear_mask                  0xEF

#define CKP2                                     0x4
#define CKP2_address                             0xF86
#define CKP2_position                            0x4
#define CKP2_size                                0x1
#define CKP2_value_mask                          0x10
#define CKP2_clear_mask                          0xEF

#define SSPEN2                                   0x5
#define SSPEN2_address                           0xF86
#define SSPEN2_position                          0x5
#define SSPEN2_size                              0x1
#define SSPEN2_value_mask                        0x20
#define SSPEN2_clear_mask                        0xDF

#define SSP2CON1_SSPEN                           0x5
#define SSP2CON1_SSPEN_address                   0xF86
#define SSP2CON1_SSPEN_position                  0x5
#define SSP2CON1_SSPEN_size                      0x1
#define SSP2CON1_SSPEN_value_mask                0x20
#define SSP2CON1_SSPEN_clear_mask                0xDF

#define SSPOV2                                   0x6
#define SSPOV2_address                           0xF86
#define SSPOV2_position                          0x6
#define SSPOV2_size                              0x1
#define SSPOV2_value_mask                        0x40
#define SSPOV2_clear_mask                        0xBF

#define SSP2CON1_SSPOV                           0x6
#define SSP2CON1_SSPOV_address                   0xF86
#define SSP2CON1_SSPOV_position                  0x6
#define SSP2CON1_SSPOV_size                      0x1
#define SSP2CON1_SSPOV_value_mask                0x40
#define SSP2CON1_SSPOV_clear_mask                0xBF

#define WCOL2                                    0x7
#define WCOL2_address                            0xF86
#define WCOL2_position                           0x7
#define WCOL2_size                               0x1
#define WCOL2_value_mask                         0x80
#define WCOL2_clear_mask                         0x7F

#define SSP2CON1_WCOL                            0x7
#define SSP2CON1_WCOL_address                    0xF86
#define SSP2CON1_WCOL_position                   0x7
#define SSP2CON1_WCOL_size                       0x1
#define SSP2CON1_WCOL_value_mask                 0x80
#define SSP2CON1_WCOL_clear_mask                 0x7F


/*-----------------------------------------------------------------------------------------------------#
| SSP2STAT                                                                                       0xF87 |
#------------------------------------------------------------------------------------------------------#
| SMP2 | SSP2STAT_CKE | SSP2STAT_D | SSP2STAT_I2C_STOP | S2 | SSP2STAT_R_W | SSP2STAT_UA | SSP2STAT_BF |
#------------------------------------------------------------------------------------------------------#
| 7    | 6            | 5          | 4                 | 3  | 2            | 1           | 0           |
#-----------------------------------------------------------------------------------------------------*/

#define SSP2STAT                                 0x0
#define SSP2STAT_address                         0xF87
#define SSP2STAT_position                        0x0
#define SSP2STAT_size                            0x8
#define SSP2STAT_value_mask                      0xFF
#define SSP2STAT_clear_mask                      0x0

#define SSP2STAT_BF                              0x0
#define SSP2STAT_BF_address                      0xF87
#define SSP2STAT_BF_position                     0x0
#define SSP2STAT_BF_size                         0x1
#define SSP2STAT_BF_value_mask                   0x1
#define SSP2STAT_BF_clear_mask                   0xFE

#define BF2                                      0x0
#define BF2_address                              0xF87
#define BF2_position                             0x0
#define BF2_size                                 0x1
#define BF2_value_mask                           0x1
#define BF2_clear_mask                           0xFE

#define SSP2STAT_UA                              0x1
#define SSP2STAT_UA_address                      0xF87
#define SSP2STAT_UA_position                     0x1
#define SSP2STAT_UA_size                         0x1
#define SSP2STAT_UA_value_mask                   0x2
#define SSP2STAT_UA_clear_mask                   0xFD

#define UA2                                      0x1
#define UA2_address                              0xF87
#define UA2_position                             0x1
#define UA2_size                                 0x1
#define UA2_value_mask                           0x2
#define UA2_clear_mask                           0xFD

#define SSP2STAT_R_W                             0x2
#define SSP2STAT_R_W_address                     0xF87
#define SSP2STAT_R_W_position                    0x2
#define SSP2STAT_R_W_size                        0x1
#define SSP2STAT_R_W_value_mask                  0x4
#define SSP2STAT_R_W_clear_mask                  0xFB

#define RW2                                      0x2
#define RW2_address                              0xF87
#define RW2_position                             0x2
#define RW2_size                                 0x1
#define RW2_value_mask                           0x4
#define RW2_clear_mask                           0xFB

#define SSP2STAT_R                               0x2
#define SSP2STAT_R_address                       0xF87
#define SSP2STAT_R_position                      0x2
#define SSP2STAT_R_size                          0x1
#define SSP2STAT_R_value_mask                    0x4
#define SSP2STAT_R_clear_mask                    0xFB

#define SSP2STAT_nWRITE                          0x2
#define SSP2STAT_nWRITE_address                  0xF87
#define SSP2STAT_nWRITE_position                 0x2
#define SSP2STAT_nWRITE_size                     0x1
#define SSP2STAT_nWRITE_value_mask               0x4
#define SSP2STAT_nWRITE_clear_mask               0xFB

#define SSP2STAT_nW                              0x2
#define SSP2STAT_nW_address                      0xF87
#define SSP2STAT_nW_position                     0x2
#define SSP2STAT_nW_size                         0x1
#define SSP2STAT_nW_value_mask                   0x4
#define SSP2STAT_nW_clear_mask                   0xFB

#define READ_WRITE2                              0x2
#define READ_WRITE2_address                      0xF87
#define READ_WRITE2_position                     0x2
#define READ_WRITE2_size                         0x1
#define READ_WRITE2_value_mask                   0x4
#define READ_WRITE2_clear_mask                   0xFB

#define nW2                                      0x2
#define nW2_address                              0xF87
#define nW2_position                             0x2
#define nW2_size                                 0x1
#define nW2_value_mask                           0x4
#define nW2_clear_mask                           0xFB

#define SSP2STAT_I2C_READ                        0x2
#define SSP2STAT_I2C_READ_address                0xF87
#define SSP2STAT_I2C_READ_position               0x2
#define SSP2STAT_I2C_READ_size                   0x1
#define SSP2STAT_I2C_READ_value_mask             0x4
#define SSP2STAT_I2C_READ_clear_mask             0xFB

#define I2C_READ2                                0x2
#define I2C_READ2_address                        0xF87
#define I2C_READ2_position                       0x2
#define I2C_READ2_size                           0x1
#define I2C_READ2_value_mask                     0x4
#define I2C_READ2_clear_mask                     0xFB

#define SSP2STAT_R_NOT_W                         0x2
#define SSP2STAT_R_NOT_W_address                 0xF87
#define SSP2STAT_R_NOT_W_position                0x2
#define SSP2STAT_R_NOT_W_size                    0x1
#define SSP2STAT_R_NOT_W_value_mask              0x4
#define SSP2STAT_R_NOT_W_clear_mask              0xFB

#define R_nW2                                    0x2
#define R_nW2_address                            0xF87
#define R_nW2_position                           0x2
#define R_nW2_size                               0x1
#define R_nW2_value_mask                         0x4
#define R_nW2_clear_mask                         0xFB

#define SSP2STAT_READ_WRITE                      0x2
#define SSP2STAT_READ_WRITE_address              0xF87
#define SSP2STAT_READ_WRITE_position             0x2
#define SSP2STAT_READ_WRITE_size                 0x1
#define SSP2STAT_READ_WRITE_value_mask           0x4
#define SSP2STAT_READ_WRITE_clear_mask           0xFB

#define nWRITE2                                  0x2
#define nWRITE2_address                          0xF87
#define nWRITE2_position                         0x2
#define nWRITE2_size                             0x1
#define nWRITE2_value_mask                       0x4
#define nWRITE2_clear_mask                       0xFB

#define R_W2                                     0x2
#define R_W2_address                             0xF87
#define R_W2_position                            0x2
#define R_W2_size                                0x1
#define R_W2_value_mask                          0x4
#define R_W2_clear_mask                          0xFB

#define SSP2STAT_R_nW                            0x2
#define SSP2STAT_R_nW_address                    0xF87
#define SSP2STAT_R_nW_position                   0x2
#define SSP2STAT_R_nW_size                       0x1
#define SSP2STAT_R_nW_value_mask                 0x4
#define SSP2STAT_R_nW_clear_mask                 0xFB

#define SSP2STAT_NOT_WRITE                       0x2
#define SSP2STAT_NOT_WRITE_address               0xF87
#define SSP2STAT_NOT_WRITE_position              0x2
#define SSP2STAT_NOT_WRITE_size                  0x1
#define SSP2STAT_NOT_WRITE_value_mask            0x4
#define SSP2STAT_NOT_WRITE_clear_mask            0xFB

#define SSP2STAT_S                               0x3
#define SSP2STAT_S_address                       0xF87
#define SSP2STAT_S_position                      0x3
#define SSP2STAT_S_size                          0x1
#define SSP2STAT_S_value_mask                    0x8
#define SSP2STAT_S_clear_mask                    0xF7

#define S2                                       0x3
#define S2_address                               0xF87
#define S2_position                              0x3
#define S2_size                                  0x1
#define S2_value_mask                            0x8
#define S2_clear_mask                            0xF7

#define START2                                   0x3
#define START2_address                           0xF87
#define START2_position                          0x3
#define START2_size                              0x1
#define START2_value_mask                        0x8
#define START2_clear_mask                        0xF7

#define SSP2STAT_I2C_START                       0x3
#define SSP2STAT_I2C_START_address               0xF87
#define SSP2STAT_I2C_START_position              0x3
#define SSP2STAT_I2C_START_size                  0x1
#define SSP2STAT_I2C_START_value_mask            0x8
#define SSP2STAT_I2C_START_clear_mask            0xF7

#define I2C_START2                               0x3
#define I2C_START2_address                       0xF87
#define I2C_START2_position                      0x3
#define I2C_START2_size                          0x1
#define I2C_START2_value_mask                    0x8
#define I2C_START2_clear_mask                    0xF7

#define P2                                       0x4
#define P2_address                               0xF87
#define P2_position                              0x4
#define P2_size                                  0x1
#define P2_value_mask                            0x10
#define P2_clear_mask                            0xEF

#define SSP2STAT_I2C_STOP                        0x4
#define SSP2STAT_I2C_STOP_address                0xF87
#define SSP2STAT_I2C_STOP_position               0x4
#define SSP2STAT_I2C_STOP_size                   0x1
#define SSP2STAT_I2C_STOP_value_mask             0x10
#define SSP2STAT_I2C_STOP_clear_mask             0xEF

#define STOP2                                    0x4
#define STOP2_address                            0xF87
#define STOP2_position                           0x4
#define STOP2_size                               0x1
#define STOP2_value_mask                         0x10
#define STOP2_clear_mask                         0xEF

#define SSP2STAT_P                               0x4
#define SSP2STAT_P_address                       0xF87
#define SSP2STAT_P_position                      0x4
#define SSP2STAT_P_size                          0x1
#define SSP2STAT_P_value_mask                    0x10
#define SSP2STAT_P_clear_mask                    0xEF

#define I2C_STOP2                                0x4
#define I2C_STOP2_address                        0xF87
#define I2C_STOP2_position                       0x4
#define I2C_STOP2_size                           0x1
#define I2C_STOP2_value_mask                     0x10
#define I2C_STOP2_clear_mask                     0xEF

#define I2C_DAT2                                 0x5
#define I2C_DAT2_address                         0xF87
#define I2C_DAT2_position                        0x5
#define I2C_DAT2_size                            0x1
#define I2C_DAT2_value_mask                      0x20
#define I2C_DAT2_clear_mask                      0xDF

#define SSP2STAT_D                               0x5
#define SSP2STAT_D_address                       0xF87
#define SSP2STAT_D_position                      0x5
#define SSP2STAT_D_size                          0x1
#define SSP2STAT_D_value_mask                    0x20
#define SSP2STAT_D_clear_mask                    0xDF

#define DATA_ADDRESS2                            0x5
#define DATA_ADDRESS2_address                    0xF87
#define DATA_ADDRESS2_position                   0x5
#define DATA_ADDRESS2_size                       0x1
#define DATA_ADDRESS2_value_mask                 0x20
#define DATA_ADDRESS2_clear_mask                 0xDF

#define SSP2STAT_D_NOT_A                         0x5
#define SSP2STAT_D_NOT_A_address                 0xF87
#define SSP2STAT_D_NOT_A_position                0x5
#define SSP2STAT_D_NOT_A_size                    0x1
#define SSP2STAT_D_NOT_A_value_mask              0x20
#define SSP2STAT_D_NOT_A_clear_mask              0xDF

#define SSP2STAT_I2C_DAT                         0x5
#define SSP2STAT_I2C_DAT_address                 0xF87
#define SSP2STAT_I2C_DAT_position                0x5
#define SSP2STAT_I2C_DAT_size                    0x1
#define SSP2STAT_I2C_DAT_value_mask              0x20
#define SSP2STAT_I2C_DAT_clear_mask              0xDF

#define D_A2                                     0x5
#define D_A2_address                             0xF87
#define D_A2_position                            0x5
#define D_A2_size                                0x1
#define D_A2_value_mask                          0x20
#define D_A2_clear_mask                          0xDF

#define SSP2STAT_NOT_ADDRESS                     0x5
#define SSP2STAT_NOT_ADDRESS_address             0xF87
#define SSP2STAT_NOT_ADDRESS_position            0x5
#define SSP2STAT_NOT_ADDRESS_size                0x1
#define SSP2STAT_NOT_ADDRESS_value_mask          0x20
#define SSP2STAT_NOT_ADDRESS_clear_mask          0xDF

#define SSP2STAT_D_nA                            0x5
#define SSP2STAT_D_nA_address                    0xF87
#define SSP2STAT_D_nA_position                   0x5
#define SSP2STAT_D_nA_size                       0x1
#define SSP2STAT_D_nA_value_mask                 0x20
#define SSP2STAT_D_nA_clear_mask                 0xDF

#define SSP2STAT_DATA_ADDRESS                    0x5
#define SSP2STAT_DATA_ADDRESS_address            0xF87
#define SSP2STAT_DATA_ADDRESS_position           0x5
#define SSP2STAT_DATA_ADDRESS_size               0x1
#define SSP2STAT_DATA_ADDRESS_value_mask         0x20
#define SSP2STAT_DATA_ADDRESS_clear_mask         0xDF

#define SSP2STAT_nADDRESS                        0x5
#define SSP2STAT_nADDRESS_address                0xF87
#define SSP2STAT_nADDRESS_position               0x5
#define SSP2STAT_nADDRESS_size                   0x1
#define SSP2STAT_nADDRESS_value_mask             0x20
#define SSP2STAT_nADDRESS_clear_mask             0xDF

#define nA2                                      0x5
#define nA2_address                              0xF87
#define nA2_position                             0x5
#define nA2_size                                 0x1
#define nA2_value_mask                           0x20
#define nA2_clear_mask                           0xDF

#define DA2                                      0x5
#define DA2_address                              0xF87
#define DA2_position                             0x5
#define DA2_size                                 0x1
#define DA2_value_mask                           0x20
#define DA2_clear_mask                           0xDF

#define nADDRESS2                                0x5
#define nADDRESS2_address                        0xF87
#define nADDRESS2_position                       0x5
#define nADDRESS2_size                           0x1
#define nADDRESS2_value_mask                     0x20
#define nADDRESS2_clear_mask                     0xDF

#define SSP2STAT_nA                              0x5
#define SSP2STAT_nA_address                      0xF87
#define SSP2STAT_nA_position                     0x5
#define SSP2STAT_nA_size                         0x1
#define SSP2STAT_nA_value_mask                   0x20
#define SSP2STAT_nA_clear_mask                   0xDF

#define SSP2STAT_D_A                             0x5
#define SSP2STAT_D_A_address                     0xF87
#define SSP2STAT_D_A_position                    0x5
#define SSP2STAT_D_A_size                        0x1
#define SSP2STAT_D_A_value_mask                  0x20
#define SSP2STAT_D_A_clear_mask                  0xDF

#define D_nA2                                    0x5
#define D_nA2_address                            0xF87
#define D_nA2_position                           0x5
#define D_nA2_size                               0x1
#define D_nA2_value_mask                         0x20
#define D_nA2_clear_mask                         0xDF

#define SSP2STAT_CKE                             0x6
#define SSP2STAT_CKE_address                     0xF87
#define SSP2STAT_CKE_position                    0x6
#define SSP2STAT_CKE_size                        0x1
#define SSP2STAT_CKE_value_mask                  0x40
#define SSP2STAT_CKE_clear_mask                  0xBF

#define CKE2                                     0x6
#define CKE2_address                             0xF87
#define CKE2_position                            0x6
#define CKE2_size                                0x1
#define CKE2_value_mask                          0x40
#define CKE2_clear_mask                          0xBF

#define SSP2STAT_SMP                             0x7
#define SSP2STAT_SMP_address                     0xF87
#define SSP2STAT_SMP_position                    0x7
#define SSP2STAT_SMP_size                        0x1
#define SSP2STAT_SMP_value_mask                  0x80
#define SSP2STAT_SMP_clear_mask                  0x7F

#define SMP2                                     0x7
#define SMP2_address                             0xF87
#define SMP2_position                            0x7
#define SMP2_size                                0x1
#define SMP2_value_mask                          0x80
#define SMP2_clear_mask                          0x7F


/*--------------------------------------------------------------#
| SSP2ADD                                                 0xF88 |
#---------------------------------------------------------------#
| MSK72 | MSK62 | MSK52 | MSK42 | MSK32 | MSK22 | MSK12 | MSK02 |
#---------------------------------------------------------------#
| 7     | 6     | 5     | 4     | 3     | 2     | 1     | 0     |
#--------------------------------------------------------------*/

#define SSP2ADD                                  0x0
#define SSP2ADD_address                          0xF88
#define SSP2ADD_position                         0x0
#define SSP2ADD_size                             0x8
#define SSP2ADD_value_mask                       0xFF
#define SSP2ADD_clear_mask                       0x0

#define MSK02                                    0x0
#define MSK02_address                            0xF88
#define MSK02_position                           0x0
#define MSK02_size                               0x1
#define MSK02_value_mask                         0x1
#define MSK02_clear_mask                         0xFE

#define MSK12                                    0x1
#define MSK12_address                            0xF88
#define MSK12_position                           0x1
#define MSK12_size                               0x1
#define MSK12_value_mask                         0x2
#define MSK12_clear_mask                         0xFD

#define MSK22                                    0x2
#define MSK22_address                            0xF88
#define MSK22_position                           0x2
#define MSK22_size                               0x1
#define MSK22_value_mask                         0x4
#define MSK22_clear_mask                         0xFB

#define MSK32                                    0x3
#define MSK32_address                            0xF88
#define MSK32_position                           0x3
#define MSK32_size                               0x1
#define MSK32_value_mask                         0x8
#define MSK32_clear_mask                         0xF7

#define MSK42                                    0x4
#define MSK42_address                            0xF88
#define MSK42_position                           0x4
#define MSK42_size                               0x1
#define MSK42_value_mask                         0x10
#define MSK42_clear_mask                         0xEF

#define MSK52                                    0x5
#define MSK52_address                            0xF88
#define MSK52_position                           0x5
#define MSK52_size                               0x1
#define MSK52_value_mask                         0x20
#define MSK52_clear_mask                         0xDF

#define MSK62                                    0x6
#define MSK62_address                            0xF88
#define MSK62_position                           0x6
#define MSK62_size                               0x1
#define MSK62_value_mask                         0x40
#define MSK62_clear_mask                         0xBF

#define MSK72                                    0x7
#define MSK72_address                            0xF88
#define MSK72_position                           0x7
#define MSK72_size                               0x1
#define MSK72_value_mask                         0x80
#define MSK72_clear_mask                         0x7F


/*--------------------------------------------------#
| LATA                                        0xF89 |
#---------------------------------------------------#
| - | - | LATA5 | - | LATA3 | LATA2 | LATA1 | LATA0 |
#---------------------------------------------------#
| 7 | 6 | 5     | 4 | 3     | 2     | 1     | 0     |
#--------------------------------------------------*/

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


/*-------------------------------------------------------#
| TRISA                                            0xF92 |
#--------------------------------------------------------#
| - | - | TRISA5 | - | TRISA3 | TRISA2 | TRISA1 | TRISA0 |
#--------------------------------------------------------#
| 7 | 6 | 5      | 4 | 3      | 2      | 1      | 0      |
#-------------------------------------------------------*/

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


/*---------------------------------------------------------------------#
| TRISE                                                          0xF96 |
#----------------------------------------------------------------------#
| IBF | OBF | IBOV | PSPMODE | RE3 | TRISE_RE2 | TRISE_RE1 | TRISE_RE0 |
#----------------------------------------------------------------------#
| 7   | 6   | 5    | 4       | 3   | 2         | 1         | 0         |
#---------------------------------------------------------------------*/

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

#define RE3                                      0x3
#define RE3_address                              0xF96
#define RE3_position                             0x3
#define RE3_size                                 0x1
#define RE3_value_mask                           0x8
#define RE3_clear_mask                           0xF7

#define PSPMODE                                  0x4
#define PSPMODE_address                          0xF96
#define PSPMODE_position                         0x4
#define PSPMODE_size                             0x1
#define PSPMODE_value_mask                       0x10
#define PSPMODE_clear_mask                       0xEF

#define IBOV                                     0x5
#define IBOV_address                             0xF96
#define IBOV_position                            0x5
#define IBOV_size                                0x1
#define IBOV_value_mask                          0x20
#define IBOV_clear_mask                          0xDF

#define OBF                                      0x6
#define OBF_address                              0xF96
#define OBF_position                             0x6
#define OBF_size                                 0x1
#define OBF_value_mask                           0x40
#define OBF_clear_mask                           0xBF

#define IBF                                      0x7
#define IBF_address                              0xF96
#define IBF_position                             0x7
#define IBF_size                                 0x1
#define IBF_value_mask                           0x80
#define IBF_clear_mask                           0x7F


/*----------------------------------#
| OSCTUNE                     0xF9B |
#-----------------------------------#
| - | PLLEN | - | - | - | - | - | - |
#-----------------------------------#
| 7 | 6     | 5 | 4 | 3 | 2 | 1 | 0 |
#----------------------------------*/

#define OSCTUNE                                  0x0
#define OSCTUNE_address                          0xF9B
#define OSCTUNE_position                         0x0
#define OSCTUNE_size                             0x8
#define OSCTUNE_value_mask                       0xFF
#define OSCTUNE_clear_mask                       0x0

#define PLLEN                                    0x6
#define PLLEN_address                            0xF9B
#define PLLEN_position                           0x6
#define PLLEN_size                               0x1
#define PLLEN_value_mask                         0x40
#define PLLEN_clear_mask                         0xBF


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

#define PSPIE                                    0x7
#define PSPIE_address                            0xF9D
#define PSPIE_position                           0x7
#define PSPIE_size                               0x1
#define PSPIE_value_mask                         0x80
#define PSPIE_clear_mask                         0x7F


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


/*---------------------------------------------------------------#
| IPR1                                                     0xF9F |
#----------------------------------------------------------------#
| PSPIP | ADIP | RCIP | TX1IP | SSPIP | CCP1IP | TMR2IP | TMR1IP |
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

#define PSPIP                                    0x7
#define PSPIP_address                            0xF9F
#define PSPIP_position                           0x7
#define PSPIP_size                               0x1
#define PSPIP_value_mask                         0x80
#define PSPIP_clear_mask                         0x7F


/*------------------------------------------------#
| PIE2                                      0xFA0 |
#-------------------------------------------------#
| OSCFIE | CMIE | - | - | BCL1IE | - | - | CCP2IE |
#-------------------------------------------------#
| 7      | 6    | 5 | 4 | 3      | 2 | 1 | 0      |
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


/*------------------------------------------------#
| PIR2                                      0xFA1 |
#-------------------------------------------------#
| OSCFIF | CMIF | - | - | BCL1IF | - | - | CCP2IF |
#-------------------------------------------------#
| 7      | 6    | 5 | 4 | 3      | 2 | 1 | 0      |
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


/*------------------------------------------------#
| IPR2                                      0xFA2 |
#-------------------------------------------------#
| OSCFIP | CMIP | - | - | BCL1IP | - | - | CCP2IP |
#-------------------------------------------------#
| 7      | 6    | 5 | 4 | 3      | 2 | 1 | 0      |
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


/*----------------------------------------#
| PIE3                              0xFA3 |
#-----------------------------------------#
| SSP2IE | BCL2IE | - | - | - | - | - | - |
#-----------------------------------------#
| 7      | 6      | 5 | 4 | 3 | 2 | 1 | 0 |
#----------------------------------------*/

#define PIE3                                     0x0
#define PIE3_address                             0xFA3
#define PIE3_position                            0x0
#define PIE3_size                                0x8
#define PIE3_value_mask                          0xFF
#define PIE3_clear_mask                          0x0

#define BCL2IE                                   0x6
#define BCL2IE_address                           0xFA3
#define BCL2IE_position                          0x6
#define BCL2IE_size                              0x1
#define BCL2IE_value_mask                        0x40
#define BCL2IE_clear_mask                        0xBF

#define SSP2IE                                   0x7
#define SSP2IE_address                           0xFA3
#define SSP2IE_position                          0x7
#define SSP2IE_size                              0x1
#define SSP2IE_value_mask                        0x80
#define SSP2IE_clear_mask                        0x7F


/*----------------------------------------#
| PIR3                              0xFA4 |
#-----------------------------------------#
| SSP2IF | BCL2IF | - | - | - | - | - | - |
#-----------------------------------------#
| 7      | 6      | 5 | 4 | 3 | 2 | 1 | 0 |
#----------------------------------------*/

#define PIR3                                     0x0
#define PIR3_address                             0xFA4
#define PIR3_position                            0x0
#define PIR3_size                                0x8
#define PIR3_value_mask                          0xFF
#define PIR3_clear_mask                          0x0

#define BCL2IF                                   0x6
#define BCL2IF_address                           0xFA4
#define BCL2IF_position                          0x6
#define BCL2IF_size                              0x1
#define BCL2IF_value_mask                        0x40
#define BCL2IF_clear_mask                        0xBF

#define SSP2IF                                   0x7
#define SSP2IF_address                           0xFA4
#define SSP2IF_position                          0x7
#define SSP2IF_size                              0x1
#define SSP2IF_value_mask                        0x80
#define SSP2IF_clear_mask                        0x7F


/*----------------------------------------#
| IPR3                              0xFA5 |
#-----------------------------------------#
| SSP2IP | BCL2IP | - | - | - | - | - | - |
#-----------------------------------------#
| 7      | 6      | 5 | 4 | 3 | 2 | 1 | 0 |
#----------------------------------------*/

#define IPR3                                     0x0
#define IPR3_address                             0xFA5
#define IPR3_position                            0x0
#define IPR3_size                                0x8
#define IPR3_value_mask                          0xFF
#define IPR3_clear_mask                          0x0

#define BCL2IP                                   0x6
#define BCL2IP_address                           0xFA5
#define BCL2IP_position                          0x6
#define BCL2IP_size                              0x1
#define BCL2IP_value_mask                        0x40
#define BCL2IP_clear_mask                        0xBF

#define SSP2IP                                   0x7
#define SSP2IP_address                           0xFA5
#define SSP2IP_position                          0x7
#define SSP2IP_size                              0x1
#define SSP2IP_value_mask                        0x80
#define SSP2IP_clear_mask                        0x7F


/*------------------------------------------------#
| EECON1                                    0xFA6 |
#-------------------------------------------------#
| - | - | - | FREE | WRERR | WREN | EECON1_WR | - |
#-------------------------------------------------#
| 7 | 6 | 5 | 4    | 3     | 2    | 1         | 0 |
#------------------------------------------------*/

#define EECON1                                   0x0
#define EECON1_address                           0xFA6
#define EECON1_position                          0x0
#define EECON1_size                              0x8
#define EECON1_value_mask                        0xFF
#define EECON1_clear_mask                        0x0

#define EECON1_WR                                0x1
#define EECON1_WR_address                        0xFA6
#define EECON1_WR_position                       0x1
#define EECON1_WR_size                           0x1
#define EECON1_WR_value_mask                     0x2
#define EECON1_WR_clear_mask                     0xFD

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
| RCSTA                                              0xFAB |
#----------------------------------------------------------#
| SPEN | RC8_9 | SREN | CREN1 | ADDEN | FERR | OERR | RX9D |
#----------------------------------------------------------#
| 7    | 6     | 5    | 4     | 3     | 2    | 1    | 0    |
#---------------------------------------------------------*/

#define RCSTA                                    0x0
#define RCSTA_address                            0xFAB
#define RCSTA_position                           0x0
#define RCSTA_size                               0x8
#define RCSTA_value_mask                         0xFF
#define RCSTA_clear_mask                         0x0

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

#define ADEN                                     0x3
#define ADEN_address                             0xFAB
#define ADEN_position                            0x3
#define ADEN_size                                0x1
#define ADEN_value_mask                          0x8
#define ADEN_clear_mask                          0xF7

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


/*------------------------------------------------------------------------#
| CMCON                                                             0xFB4 |
#-------------------------------------------------------------------------#
| CMCON_C2OUT | CMCON_C1OUT | C2INV | C1INV | CIS | CMEN2 | CMEN1 | CMEN0 |
#-------------------------------------------------------------------------#
| 7           | 6           | 5     | 4     | 3   | 2     | 1     | 0     |
#------------------------------------------------------------------------*/

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

#define CMCON_C1OUT                              0x6
#define CMCON_C1OUT_address                      0xFB4
#define CMCON_C1OUT_position                     0x6
#define CMCON_C1OUT_size                         0x1
#define CMCON_C1OUT_value_mask                   0x40
#define CMCON_C1OUT_clear_mask                   0xBF

#define CMCON_C2OUT                              0x7
#define CMCON_C2OUT_address                      0xFB4
#define CMCON_C2OUT_position                     0x7
#define CMCON_C2OUT_size                         0x1
#define CMCON_C2OUT_value_mask                   0x80
#define CMCON_C2OUT_clear_mask                   0x7F


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


/*----------------------------------------------------#
| BAUDCON                                       0xFB8 |
#-----------------------------------------------------#
| ABDOVF | RCIDL | - | SCKP | BRG16 | - | W4E | ABDEN |
#-----------------------------------------------------#
| 7      | 6     | 5 | 4    | 3     | 2 | 1   | 0     |
#----------------------------------------------------*/

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

#define SCKP                                     0x4
#define SCKP_address                             0xFB8
#define SCKP_position                            0x4
#define SCKP_size                                0x1
#define SCKP_value_mask                          0x10
#define SCKP_clear_mask                          0xEF

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

#define CCP2X                                    0x5
#define CCP2X_address                            0xFBA
#define CCP2X_position                           0x5
#define CCP2X_size                               0x1
#define CCP2X_value_mask                         0x20
#define CCP2X_clear_mask                         0xDF


/*----------------------------------------------------------------#
| ECCP1CON                                                  0xFBD |
#-----------------------------------------------------------------#
| P1M1 | P1M0 | CCP1X | CCP1Y | CCP1M3 | CCP1M2 | CCP1M1 | CCP1M0 |
#-----------------------------------------------------------------#
| 7    | 6    | 5     | 4     | 3      | 2      | 1      | 0      |
#----------------------------------------------------------------*/

#define ECCP1CON                                 0x0
#define ECCP1CON_address                         0xFBD
#define ECCP1CON_position                        0x0
#define ECCP1CON_size                            0x8
#define ECCP1CON_value_mask                      0xFF
#define ECCP1CON_clear_mask                      0x0

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


/*-------------------------------------------------------------------------------#
| SSPCON2                                                                  0xFC5 |
#--------------------------------------------------------------------------------#
| GCEN1 | SSPCON2_ACKSTAT | ACKDT1 | ACKEN1 | ADMSK31 | ADMSK21 | ADMSK11 | SEN1 |
#--------------------------------------------------------------------------------#
| 7     | 6               | 5      | 4      | 3       | 2       | 1       | 0    |
#-------------------------------------------------------------------------------*/

#define SSPCON2                                  0x0
#define SSPCON2_address                          0xFC5
#define SSPCON2_position                         0x0
#define SSPCON2_size                             0x8
#define SSPCON2_value_mask                       0xFF
#define SSPCON2_clear_mask                       0x0

#define SEN1                                     0x0
#define SEN1_address                             0xFC5
#define SEN1_position                            0x0
#define SEN1_size                                0x1
#define SEN1_value_mask                          0x1
#define SEN1_clear_mask                          0xFE

#define SSPCON2_SEN                              0x0
#define SSPCON2_SEN_address                      0xFC5
#define SSPCON2_SEN_position                     0x0
#define SSPCON2_SEN_size                         0x1
#define SSPCON2_SEN_value_mask                   0x1
#define SSPCON2_SEN_clear_mask                   0xFE

#define ADMSK11                                  0x1
#define ADMSK11_address                          0xFC5
#define ADMSK11_position                         0x1
#define ADMSK11_size                             0x1
#define ADMSK11_value_mask                       0x2
#define ADMSK11_clear_mask                       0xFD

#define SSPCON2_RSEN                             0x1
#define SSPCON2_RSEN_address                     0xFC5
#define SSPCON2_RSEN_position                    0x1
#define SSPCON2_RSEN_size                        0x1
#define SSPCON2_RSEN_value_mask                  0x2
#define SSPCON2_RSEN_clear_mask                  0xFD

#define RSEN1                                    0x1
#define RSEN1_address                            0xFC5
#define RSEN1_position                           0x1
#define RSEN1_size                               0x1
#define RSEN1_value_mask                         0x2
#define RSEN1_clear_mask                         0xFD

#define ADMSK1                                   0x1
#define ADMSK1_address                           0xFC5
#define ADMSK1_position                          0x1
#define ADMSK1_size                              0x1
#define ADMSK1_value_mask                        0x2
#define ADMSK1_clear_mask                        0xFD

#define SSPCON2_PEN                              0x2
#define SSPCON2_PEN_address                      0xFC5
#define SSPCON2_PEN_position                     0x2
#define SSPCON2_PEN_size                         0x1
#define SSPCON2_PEN_value_mask                   0x4
#define SSPCON2_PEN_clear_mask                   0xFB

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

#define SSPCON2_RCEN                             0x3
#define SSPCON2_RCEN_address                     0xFC5
#define SSPCON2_RCEN_position                    0x3
#define SSPCON2_RCEN_size                        0x1
#define SSPCON2_RCEN_value_mask                  0x8
#define SSPCON2_RCEN_clear_mask                  0xF7

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

#define SSPCON2_ACKEN                            0x4
#define SSPCON2_ACKEN_address                    0xFC5
#define SSPCON2_ACKEN_position                   0x4
#define SSPCON2_ACKEN_size                       0x1
#define SSPCON2_ACKEN_value_mask                 0x10
#define SSPCON2_ACKEN_clear_mask                 0xEF

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

#define SSPCON2_ACKDT                            0x5
#define SSPCON2_ACKDT_address                    0xFC5
#define SSPCON2_ACKDT_position                   0x5
#define SSPCON2_ACKDT_size                       0x1
#define SSPCON2_ACKDT_value_mask                 0x20
#define SSPCON2_ACKDT_clear_mask                 0xDF

#define ADMSK5                                   0x5
#define ADMSK5_address                           0xFC5
#define ADMSK5_position                          0x5
#define ADMSK5_size                              0x1
#define ADMSK5_value_mask                        0x20
#define ADMSK5_clear_mask                        0xDF

#define SSPCON2_ACKSTAT                          0x6
#define SSPCON2_ACKSTAT_address                  0xFC5
#define SSPCON2_ACKSTAT_position                 0x6
#define SSPCON2_ACKSTAT_size                     0x1
#define SSPCON2_ACKSTAT_value_mask               0x40
#define SSPCON2_ACKSTAT_clear_mask               0xBF

#define ACKSTAT1                                 0x6
#define ACKSTAT1_address                         0xFC5
#define ACKSTAT1_position                        0x6
#define ACKSTAT1_size                            0x1
#define ACKSTAT1_value_mask                      0x40
#define ACKSTAT1_clear_mask                      0xBF

#define GCEN1                                    0x7
#define GCEN1_address                            0xFC5
#define GCEN1_position                           0x7
#define GCEN1_size                               0x1
#define GCEN1_value_mask                         0x80
#define GCEN1_clear_mask                         0x7F

#define SSPCON2_GCEN                             0x7
#define SSPCON2_GCEN_address                     0xFC5
#define SSPCON2_GCEN_position                    0x7
#define SSPCON2_GCEN_size                        0x1
#define SSPCON2_GCEN_value_mask                  0x80
#define SSPCON2_GCEN_clear_mask                  0x7F


/*-------------------------------------------------------------------------------------------------------------#
| SSPCON1                                                                                                0xFC6 |
#--------------------------------------------------------------------------------------------------------------#
| WCOL1 | SSPCON1_SSPOV | SSPCON1_SSPEN | SSPCON1_CKP | SSPCON1_SSPM3 | SSPM21 | SSPCON1_SSPM1 | SSPCON1_SSPM0 |
#--------------------------------------------------------------------------------------------------------------#
| 7     | 6             | 5             | 4           | 3             | 2      | 1             | 0             |
#-------------------------------------------------------------------------------------------------------------*/

#define SSPCON1                                  0x0
#define SSPCON1_address                          0xFC6
#define SSPCON1_position                         0x0
#define SSPCON1_size                             0x8
#define SSPCON1_value_mask                       0xFF
#define SSPCON1_clear_mask                       0x0

#define SSPCON1_SSPM                             0x0
#define SSPCON1_SSPM_address                     0xFC6
#define SSPCON1_SSPM_position                    0x0
#define SSPCON1_SSPM_size                        0x4
#define SSPCON1_SSPM_value_mask                  0xF
#define SSPCON1_SSPM_clear_mask                  0xF0

#define SSPM01                                   0x0
#define SSPM01_address                           0xFC6
#define SSPM01_position                          0x0
#define SSPM01_size                              0x1
#define SSPM01_value_mask                        0x1
#define SSPM01_clear_mask                        0xFE

#define SSPCON1_SSPM0                            0x0
#define SSPCON1_SSPM0_address                    0xFC6
#define SSPCON1_SSPM0_position                   0x0
#define SSPCON1_SSPM0_size                       0x1
#define SSPCON1_SSPM0_value_mask                 0x1
#define SSPCON1_SSPM0_clear_mask                 0xFE

#define SSPM11                                   0x1
#define SSPM11_address                           0xFC6
#define SSPM11_position                          0x1
#define SSPM11_size                              0x1
#define SSPM11_value_mask                        0x2
#define SSPM11_clear_mask                        0xFD

#define SSPCON1_SSPM1                            0x1
#define SSPCON1_SSPM1_address                    0xFC6
#define SSPCON1_SSPM1_position                   0x1
#define SSPCON1_SSPM1_size                       0x1
#define SSPCON1_SSPM1_value_mask                 0x2
#define SSPCON1_SSPM1_clear_mask                 0xFD

#define SSPM21                                   0x2
#define SSPM21_address                           0xFC6
#define SSPM21_position                          0x2
#define SSPM21_size                              0x1
#define SSPM21_value_mask                        0x4
#define SSPM21_clear_mask                        0xFB

#define SSPCON1_SSPM2                            0x2
#define SSPCON1_SSPM2_address                    0xFC6
#define SSPCON1_SSPM2_position                   0x2
#define SSPCON1_SSPM2_size                       0x1
#define SSPCON1_SSPM2_value_mask                 0x4
#define SSPCON1_SSPM2_clear_mask                 0xFB

#define SSPM31                                   0x3
#define SSPM31_address                           0xFC6
#define SSPM31_position                          0x3
#define SSPM31_size                              0x1
#define SSPM31_value_mask                        0x8
#define SSPM31_clear_mask                        0xF7

#define SSPCON1_SSPM3                            0x3
#define SSPCON1_SSPM3_address                    0xFC6
#define SSPCON1_SSPM3_position                   0x3
#define SSPCON1_SSPM3_size                       0x1
#define SSPCON1_SSPM3_value_mask                 0x8
#define SSPCON1_SSPM3_clear_mask                 0xF7

#define SSPCON1_CKP                              0x4
#define SSPCON1_CKP_address                      0xFC6
#define SSPCON1_CKP_position                     0x4
#define SSPCON1_CKP_size                         0x1
#define SSPCON1_CKP_value_mask                   0x10
#define SSPCON1_CKP_clear_mask                   0xEF

#define CKP1                                     0x4
#define CKP1_address                             0xFC6
#define CKP1_position                            0x4
#define CKP1_size                                0x1
#define CKP1_value_mask                          0x10
#define CKP1_clear_mask                          0xEF

#define SSPCON1_SSPEN                            0x5
#define SSPCON1_SSPEN_address                    0xFC6
#define SSPCON1_SSPEN_position                   0x5
#define SSPCON1_SSPEN_size                       0x1
#define SSPCON1_SSPEN_value_mask                 0x20
#define SSPCON1_SSPEN_clear_mask                 0xDF

#define SSPEN1                                   0x5
#define SSPEN1_address                           0xFC6
#define SSPEN1_position                          0x5
#define SSPEN1_size                              0x1
#define SSPEN1_value_mask                        0x20
#define SSPEN1_clear_mask                        0xDF

#define SSPCON1_SSPOV                            0x6
#define SSPCON1_SSPOV_address                    0xFC6
#define SSPCON1_SSPOV_position                   0x6
#define SSPCON1_SSPOV_size                       0x1
#define SSPCON1_SSPOV_value_mask                 0x40
#define SSPCON1_SSPOV_clear_mask                 0xBF

#define SSPOV1                                   0x6
#define SSPOV1_address                           0xFC6
#define SSPOV1_position                          0x6
#define SSPOV1_size                              0x1
#define SSPOV1_value_mask                        0x40
#define SSPOV1_clear_mask                        0xBF

#define WCOL1                                    0x7
#define WCOL1_address                            0xFC6
#define WCOL1_position                           0x7
#define WCOL1_size                               0x1
#define WCOL1_value_mask                         0x80
#define WCOL1_clear_mask                         0x7F

#define SSPCON1_WCOL                             0x7
#define SSPCON1_WCOL_address                     0xFC6
#define SSPCON1_WCOL_position                    0x7
#define SSPCON1_WCOL_size                        0x1
#define SSPCON1_WCOL_value_mask                  0x80
#define SSPCON1_WCOL_clear_mask                  0x7F


/*--------------------------------------------------------------------------------------------#
| SSPSTAT                                                                               0xFC7 |
#---------------------------------------------------------------------------------------------#
| SSPSTAT_SMP | SSPSTAT_CKE | SSPSTAT_NOT_ADDRESS | STOP | SSPSTAT_S | SSPSTAT_nW | UA1 | BF1 |
#---------------------------------------------------------------------------------------------#
| 7           | 6           | 5                   | 4    | 3         | 2          | 1   | 0   |
#--------------------------------------------------------------------------------------------*/

#define SSPSTAT                                  0x0
#define SSPSTAT_address                          0xFC7
#define SSPSTAT_position                         0x0
#define SSPSTAT_size                             0x8
#define SSPSTAT_value_mask                       0xFF
#define SSPSTAT_clear_mask                       0x0

#define BF1                                      0x0
#define BF1_address                              0xFC7
#define BF1_position                             0x0
#define BF1_size                                 0x1
#define BF1_value_mask                           0x1
#define BF1_clear_mask                           0xFE

#define SSPSTAT_BF                               0x0
#define SSPSTAT_BF_address                       0xFC7
#define SSPSTAT_BF_position                      0x0
#define SSPSTAT_BF_size                          0x1
#define SSPSTAT_BF_value_mask                    0x1
#define SSPSTAT_BF_clear_mask                    0xFE

#define UA1                                      0x1
#define UA1_address                              0xFC7
#define UA1_position                             0x1
#define UA1_size                                 0x1
#define UA1_value_mask                           0x2
#define UA1_clear_mask                           0xFD

#define SSPSTAT_UA                               0x1
#define SSPSTAT_UA_address                       0xFC7
#define SSPSTAT_UA_position                      0x1
#define SSPSTAT_UA_size                          0x1
#define SSPSTAT_UA_value_mask                    0x2
#define SSPSTAT_UA_clear_mask                    0xFD

#define SSPSTAT_nW                               0x2
#define SSPSTAT_nW_address                       0xFC7
#define SSPSTAT_nW_position                      0x2
#define SSPSTAT_nW_size                          0x1
#define SSPSTAT_nW_value_mask                    0x4
#define SSPSTAT_nW_clear_mask                    0xFB

#define SSPSTAT_R                                0x2
#define SSPSTAT_R_address                        0xFC7
#define SSPSTAT_R_position                       0x2
#define SSPSTAT_R_size                           0x1
#define SSPSTAT_R_value_mask                     0x4
#define SSPSTAT_R_clear_mask                     0xFB

#define SSPSTAT_NOT_WRITE                        0x2
#define SSPSTAT_NOT_WRITE_address                0xFC7
#define SSPSTAT_NOT_WRITE_position               0x2
#define SSPSTAT_NOT_WRITE_size                   0x1
#define SSPSTAT_NOT_WRITE_value_mask             0x4
#define SSPSTAT_NOT_WRITE_clear_mask             0xFB

#define RW1                                      0x2
#define RW1_address                              0xFC7
#define RW1_position                             0x2
#define RW1_size                                 0x1
#define RW1_value_mask                           0x4
#define RW1_clear_mask                           0xFB

#define SSPSTAT_nWRITE                           0x2
#define SSPSTAT_nWRITE_address                   0xFC7
#define SSPSTAT_nWRITE_position                  0x2
#define SSPSTAT_nWRITE_size                      0x1
#define SSPSTAT_nWRITE_value_mask                0x4
#define SSPSTAT_nWRITE_clear_mask                0xFB

#define NOT_W                                    0x2
#define NOT_W_address                            0xFC7
#define NOT_W_position                           0x2
#define NOT_W_size                               0x1
#define NOT_W_value_mask                         0x4
#define NOT_W_clear_mask                         0xFB

#define SSPSTAT_READ_WRITE                       0x2
#define SSPSTAT_READ_WRITE_address               0xFC7
#define SSPSTAT_READ_WRITE_position              0x2
#define SSPSTAT_READ_WRITE_size                  0x1
#define SSPSTAT_READ_WRITE_value_mask            0x4
#define SSPSTAT_READ_WRITE_clear_mask            0xFB

#define SSPSTAT_I2C_READ                         0x2
#define SSPSTAT_I2C_READ_address                 0xFC7
#define SSPSTAT_I2C_READ_position                0x2
#define SSPSTAT_I2C_READ_size                    0x1
#define SSPSTAT_I2C_READ_value_mask              0x4
#define SSPSTAT_I2C_READ_clear_mask              0xFB

#define RW                                       0x2
#define RW_address                               0xFC7
#define RW_position                              0x2
#define RW_size                                  0x1
#define RW_value_mask                            0x4
#define RW_clear_mask                            0xFB

#define SSPSTAT_R_nW                             0x2
#define SSPSTAT_R_nW_address                     0xFC7
#define SSPSTAT_R_nW_position                    0x2
#define SSPSTAT_R_nW_size                        0x1
#define SSPSTAT_R_nW_value_mask                  0x4
#define SSPSTAT_R_nW_clear_mask                  0xFB

#define SSPSTAT_R_W                              0x2
#define SSPSTAT_R_W_address                      0xFC7
#define SSPSTAT_R_W_position                     0x2
#define SSPSTAT_R_W_size                         0x1
#define SSPSTAT_R_W_value_mask                   0x4
#define SSPSTAT_R_W_clear_mask                   0xFB

#define SSPSTAT_R_NOT_W                          0x2
#define SSPSTAT_R_NOT_W_address                  0xFC7
#define SSPSTAT_R_NOT_W_position                 0x2
#define SSPSTAT_R_NOT_W_size                     0x1
#define SSPSTAT_R_NOT_W_value_mask               0x4
#define SSPSTAT_R_NOT_W_clear_mask               0xFB

#define SSPSTAT_S                                0x3
#define SSPSTAT_S_address                        0xFC7
#define SSPSTAT_S_position                       0x3
#define SSPSTAT_S_size                           0x1
#define SSPSTAT_S_value_mask                     0x8
#define SSPSTAT_S_clear_mask                     0xF7

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

#define SSPSTAT_I2C_START                        0x3
#define SSPSTAT_I2C_START_address                0xFC7
#define SSPSTAT_I2C_START_position               0x3
#define SSPSTAT_I2C_START_size                   0x1
#define SSPSTAT_I2C_START_value_mask             0x8
#define SSPSTAT_I2C_START_clear_mask             0xF7

#define STOP                                     0x4
#define STOP_address                             0xFC7
#define STOP_position                            0x4
#define STOP_size                                0x1
#define STOP_value_mask                          0x10
#define STOP_clear_mask                          0xEF

#define SSPSTAT_I2C_STOP                         0x4
#define SSPSTAT_I2C_STOP_address                 0xFC7
#define SSPSTAT_I2C_STOP_position                0x4
#define SSPSTAT_I2C_STOP_size                    0x1
#define SSPSTAT_I2C_STOP_value_mask              0x10
#define SSPSTAT_I2C_STOP_clear_mask              0xEF

#define STOP1                                    0x4
#define STOP1_address                            0xFC7
#define STOP1_position                           0x4
#define STOP1_size                               0x1
#define STOP1_value_mask                         0x10
#define STOP1_clear_mask                         0xEF

#define SSPSTAT_P                                0x4
#define SSPSTAT_P_address                        0xFC7
#define SSPSTAT_P_position                       0x4
#define SSPSTAT_P_size                           0x1
#define SSPSTAT_P_value_mask                     0x10
#define SSPSTAT_P_clear_mask                     0xEF

#define SSPSTAT_NOT_ADDRESS                      0x5
#define SSPSTAT_NOT_ADDRESS_address              0xFC7
#define SSPSTAT_NOT_ADDRESS_position             0x5
#define SSPSTAT_NOT_ADDRESS_size                 0x1
#define SSPSTAT_NOT_ADDRESS_value_mask           0x20
#define SSPSTAT_NOT_ADDRESS_clear_mask           0xDF

#define SSPSTAT_nADDRESS                         0x5
#define SSPSTAT_nADDRESS_address                 0xFC7
#define SSPSTAT_nADDRESS_position                0x5
#define SSPSTAT_nADDRESS_size                    0x1
#define SSPSTAT_nADDRESS_value_mask              0x20
#define SSPSTAT_nADDRESS_clear_mask              0xDF

#define SSPSTAT_D_NOT_A                          0x5
#define SSPSTAT_D_NOT_A_address                  0xFC7
#define SSPSTAT_D_NOT_A_position                 0x5
#define SSPSTAT_D_NOT_A_size                     0x1
#define SSPSTAT_D_NOT_A_value_mask               0x20
#define SSPSTAT_D_NOT_A_clear_mask               0xDF

#define NOT_A                                    0x5
#define NOT_A_address                            0xFC7
#define NOT_A_position                           0x5
#define NOT_A_size                               0x1
#define NOT_A_value_mask                         0x20
#define NOT_A_clear_mask                         0xDF

#define SSPSTAT_D                                0x5
#define SSPSTAT_D_address                        0xFC7
#define SSPSTAT_D_position                       0x5
#define SSPSTAT_D_size                           0x1
#define SSPSTAT_D_value_mask                     0x20
#define SSPSTAT_D_clear_mask                     0xDF

#define SSPSTAT_nA                               0x5
#define SSPSTAT_nA_address                       0xFC7
#define SSPSTAT_nA_position                      0x5
#define SSPSTAT_nA_size                          0x1
#define SSPSTAT_nA_value_mask                    0x20
#define SSPSTAT_nA_clear_mask                    0xDF

#define SSPSTAT_I2C_DAT                          0x5
#define SSPSTAT_I2C_DAT_address                  0xFC7
#define SSPSTAT_I2C_DAT_position                 0x5
#define SSPSTAT_I2C_DAT_size                     0x1
#define SSPSTAT_I2C_DAT_value_mask               0x20
#define SSPSTAT_I2C_DAT_clear_mask               0xDF

#define SSPSTAT_DATA_ADDRESS                     0x5
#define SSPSTAT_DATA_ADDRESS_address             0xFC7
#define SSPSTAT_DATA_ADDRESS_position            0x5
#define SSPSTAT_DATA_ADDRESS_size                0x1
#define SSPSTAT_DATA_ADDRESS_value_mask          0x20
#define SSPSTAT_DATA_ADDRESS_clear_mask          0xDF

#define SSPSTAT_D_A                              0x5
#define SSPSTAT_D_A_address                      0xFC7
#define SSPSTAT_D_A_position                     0x5
#define SSPSTAT_D_A_size                         0x1
#define SSPSTAT_D_A_value_mask                   0x20
#define SSPSTAT_D_A_clear_mask                   0xDF

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

#define SSPSTAT_D_nA                             0x5
#define SSPSTAT_D_nA_address                     0xFC7
#define SSPSTAT_D_nA_position                    0x5
#define SSPSTAT_D_nA_size                        0x1
#define SSPSTAT_D_nA_value_mask                  0x20
#define SSPSTAT_D_nA_clear_mask                  0xDF

#define SSPSTAT_CKE                              0x6
#define SSPSTAT_CKE_address                      0xFC7
#define SSPSTAT_CKE_position                     0x6
#define SSPSTAT_CKE_size                         0x1
#define SSPSTAT_CKE_value_mask                   0x40
#define SSPSTAT_CKE_clear_mask                   0xBF

#define CKE1                                     0x6
#define CKE1_address                             0xFC7
#define CKE1_position                            0x6
#define CKE1_size                                0x1
#define CKE1_value_mask                          0x40
#define CKE1_clear_mask                          0xBF

#define SSPSTAT_SMP                              0x7
#define SSPSTAT_SMP_address                      0xFC7
#define SSPSTAT_SMP_position                     0x7
#define SSPSTAT_SMP_size                         0x1
#define SSPSTAT_SMP_value_mask                   0x80
#define SSPSTAT_SMP_clear_mask                   0x7F

#define SMP1                                     0x7
#define SMP1_address                             0xFC7
#define SMP1_position                            0x7
#define SMP1_size                                0x1
#define SMP1_value_mask                          0x80
#define SMP1_clear_mask                          0x7F


/*------------------------------------------------------------#
| SSPADD                                                0xFC8 |
#-------------------------------------------------------------#
| MSK71 | MSK61 | MSK51 | MSK4 | MSK31 | MSK21 | MSK11 | MSK0 |
#-------------------------------------------------------------#
| 7     | 6     | 5     | 4    | 3     | 2     | 1     | 0    |
#------------------------------------------------------------*/

#define SSPADD                                   0x0
#define SSPADD_address                           0xFC8
#define SSPADD_position                          0x0
#define SSPADD_size                              0x8
#define SSPADD_value_mask                        0xFF
#define SSPADD_clear_mask                        0x0

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


/*--------------------------------------------------------------------------#
| T1CON                                                               0xFCD |
#---------------------------------------------------------------------------#
| RD16 | T1RUN | T1CKPS1 | T1CKPS0 | T1OSCEN | NOT_T1SYNC | TMR1CS | TMR1ON |
#---------------------------------------------------------------------------#
| 7    | 6     | 5       | 4       | 3       | 2          | 1      | 0      |
#--------------------------------------------------------------------------*/

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

#define RD16                                     0x7
#define RD16_address                             0xFCD
#define RD16_position                            0x7
#define RD16_size                                0x1
#define RD16_value_mask                          0x80
#define RD16_clear_mask                          0x7F

#define T1RD16                                   0x7
#define T1RD16_address                           0xFCD
#define T1RD16_position                          0x7
#define T1RD16_size                              0x1
#define T1RD16_value_mask                        0x80
#define T1RD16_clear_mask                        0x7F


/*-------------------------------------------------#
| RCON                                       0xFD0 |
#--------------------------------------------------#
| IPEN | - | - | nRI | TO | NOT_PD | NOT_POR | BOR |
#--------------------------------------------------#
| 7    | 6 | 5 | 4   | 3  | 2      | 1       | 0   |
#-------------------------------------------------*/

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

#endif // _PIC18F44J10_H_
