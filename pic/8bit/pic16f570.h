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

#ifndef _PIC16F570_H_
#define _PIC16F570_H_


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


/*---------------------------------------------------------------------------------------------#
| STATUS                                                                                   0x3 |
#----------------------------------------------------------------------------------------------#
| STATUS_PA2 | STATUS_PA1 | STATUS_PA0 | STATUS_nTO | STATUS_nPD | ZERO | STATUS_DC | STATUS_C |
#----------------------------------------------------------------------------------------------#
| 7          | 6          | 5          | 4          | 3          | 2    | 1         | 0        |
#---------------------------------------------------------------------------------------------*/

#define STATUS                                   0x0
#define STATUS_address                           0x003
#define STATUS_position                          0x0
#define STATUS_size                              0x8
#define STATUS_value_mask                        0xFF
#define STATUS_clear_mask                        0x0

#define STATUS_C                                 0x0
#define STATUS_C_address                         0x003
#define STATUS_C_position                        0x0
#define STATUS_C_size                            0x1
#define STATUS_C_value_mask                      0x1
#define STATUS_C_clear_mask                      0xFE

#define CARRY                                    0x0
#define CARRY_address                            0x003
#define CARRY_position                           0x0
#define CARRY_size                               0x1
#define CARRY_value_mask                         0x1
#define CARRY_clear_mask                         0xFE

#define STATUS_DC                                0x1
#define STATUS_DC_address                        0x003
#define STATUS_DC_position                       0x1
#define STATUS_DC_size                           0x1
#define STATUS_DC_value_mask                     0x2
#define STATUS_DC_clear_mask                     0xFD

#define ZERO                                     0x2
#define ZERO_address                             0x003
#define ZERO_position                            0x2
#define ZERO_size                                0x1
#define ZERO_value_mask                          0x4
#define ZERO_clear_mask                          0xFB

#define STATUS_Z                                 0x2
#define STATUS_Z_address                         0x003
#define STATUS_Z_position                        0x2
#define STATUS_Z_size                            0x1
#define STATUS_Z_value_mask                      0x4
#define STATUS_Z_clear_mask                      0xFB

#define STATUS_nPD                               0x3
#define STATUS_nPD_address                       0x003
#define STATUS_nPD_position                      0x3
#define STATUS_nPD_size                          0x1
#define STATUS_nPD_value_mask                    0x8
#define STATUS_nPD_clear_mask                    0xF7

#define STATUS_nTO                               0x4
#define STATUS_nTO_address                       0x003
#define STATUS_nTO_position                      0x4
#define STATUS_nTO_size                          0x1
#define STATUS_nTO_value_mask                    0x10
#define STATUS_nTO_clear_mask                    0xEF

#define STATUS_PA0                               0x5
#define STATUS_PA0_address                       0x003
#define STATUS_PA0_position                      0x5
#define STATUS_PA0_size                          0x1
#define STATUS_PA0_value_mask                    0x20
#define STATUS_PA0_clear_mask                    0xDF

#define STATUS_PA1                               0x6
#define STATUS_PA1_address                       0x003
#define STATUS_PA1_position                      0x6
#define STATUS_PA1_size                          0x1
#define STATUS_PA1_value_mask                    0x40
#define STATUS_PA1_clear_mask                    0xBF

#define STATUS_PA2                               0x7
#define STATUS_PA2_address                       0x003
#define STATUS_PA2_position                      0x7
#define STATUS_PA2_size                          0x1
#define STATUS_PA2_value_mask                    0x80
#define STATUS_PA2_clear_mask                    0x7F


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


/*---------------------------------------------------#
| OSCCAL                                         0x5 |
#----------------------------------------------------#
| CAL6 | CAL5 | CAL4 | CAL3 | CAL2 | CAL1 | CAL0 | - |
#----------------------------------------------------#
| 7    | 6    | 5    | 4    | 3    | 2    | 1    | 0 |
#---------------------------------------------------*/

#define OSCCAL                                   0x0
#define OSCCAL_address                           0x005
#define OSCCAL_position                          0x0
#define OSCCAL_size                              0x8
#define OSCCAL_value_mask                        0xFF
#define OSCCAL_clear_mask                        0x0

#define CAL0                                     0x1
#define CAL0_address                             0x005
#define CAL0_position                            0x1
#define CAL0_size                                0x1
#define CAL0_value_mask                          0x2
#define CAL0_clear_mask                          0xFD

#define CAL                                      0x1
#define CAL_address                              0x005
#define CAL_position                             0x1
#define CAL_size                                 0x7
#define CAL_value_mask                           0xFE
#define CAL_clear_mask                           0x1

#define CAL1                                     0x2
#define CAL1_address                             0x005
#define CAL1_position                            0x2
#define CAL1_size                                0x1
#define CAL1_value_mask                          0x4
#define CAL1_clear_mask                          0xFB

#define CAL2                                     0x3
#define CAL2_address                             0x005
#define CAL2_position                            0x3
#define CAL2_size                                0x1
#define CAL2_value_mask                          0x8
#define CAL2_clear_mask                          0xF7

#define CAL3                                     0x4
#define CAL3_address                             0x005
#define CAL3_position                            0x4
#define CAL3_size                                0x1
#define CAL3_value_mask                          0x10
#define CAL3_clear_mask                          0xEF

#define CAL4                                     0x5
#define CAL4_address                             0x005
#define CAL4_position                            0x5
#define CAL4_size                                0x1
#define CAL4_value_mask                          0x20
#define CAL4_clear_mask                          0xDF

#define CAL5                                     0x6
#define CAL5_address                             0x005
#define CAL5_position                            0x6
#define CAL5_size                                0x1
#define CAL5_value_mask                          0x40
#define CAL5_clear_mask                          0xBF

#define CAL6                                     0x7
#define CAL6_address                             0x005
#define CAL6_position                            0x7
#define CAL6_size                                0x1
#define CAL6_value_mask                          0x80
#define CAL6_clear_mask                          0x7F


/*----------------------------------------------#
| PORTA                                     0x6 |
#-----------------------------------------------#
| RA7 | RA6 | RA5 | RA4 | RA3 | RA2 | RA1 | RA0 |
#-----------------------------------------------#
| 7   | 6   | 5   | 4   | 3   | 2   | 1   | 0   |
#----------------------------------------------*/

#define PORTA                                    0x0
#define PORTA_address                            0x006
#define PORTA_position                           0x0
#define PORTA_size                               0x8
#define PORTA_value_mask                         0xFF
#define PORTA_clear_mask                         0x0

#define RA0                                      0x0
#define RA0_address                              0x006
#define RA0_position                             0x0
#define RA0_size                                 0x1
#define RA0_value_mask                           0x1
#define RA0_clear_mask                           0xFE

#define RA                                       0x0
#define RA_address                               0x006
#define RA_position                              0x0
#define RA_size                                  0x8
#define RA_value_mask                            0xFF
#define RA_clear_mask                            0x0

#define RA1                                      0x1
#define RA1_address                              0x006
#define RA1_position                             0x1
#define RA1_size                                 0x1
#define RA1_value_mask                           0x2
#define RA1_clear_mask                           0xFD

#define RA2                                      0x2
#define RA2_address                              0x006
#define RA2_position                             0x2
#define RA2_size                                 0x1
#define RA2_value_mask                           0x4
#define RA2_clear_mask                           0xFB

#define RA3                                      0x3
#define RA3_address                              0x006
#define RA3_position                             0x3
#define RA3_size                                 0x1
#define RA3_value_mask                           0x8
#define RA3_clear_mask                           0xF7

#define RA4                                      0x4
#define RA4_address                              0x006
#define RA4_position                             0x4
#define RA4_size                                 0x1
#define RA4_value_mask                           0x10
#define RA4_clear_mask                           0xEF

#define RA5                                      0x5
#define RA5_address                              0x006
#define RA5_position                             0x5
#define RA5_size                                 0x1
#define RA5_value_mask                           0x20
#define RA5_clear_mask                           0xDF

#define RA6                                      0x6
#define RA6_address                              0x006
#define RA6_position                             0x6
#define RA6_size                                 0x1
#define RA6_value_mask                           0x40
#define RA6_clear_mask                           0xBF

#define RA7                                      0x7
#define RA7_address                              0x006
#define RA7_position                             0x7
#define RA7_size                                 0x1
#define RA7_value_mask                           0x80
#define RA7_clear_mask                           0x7F


/*----------------------------------------------#
| PORTB                                     0x7 |
#-----------------------------------------------#
| RB7 | RB6 | RB5 | RB4 | RB3 | RB2 | RB1 | RB0 |
#-----------------------------------------------#
| 7   | 6   | 5   | 4   | 3   | 2   | 1   | 0   |
#----------------------------------------------*/

#define PORTB                                    0x0
#define PORTB_address                            0x007
#define PORTB_position                           0x0
#define PORTB_size                               0x8
#define PORTB_value_mask                         0xFF
#define PORTB_clear_mask                         0x0

#define RB0                                      0x0
#define RB0_address                              0x007
#define RB0_position                             0x0
#define RB0_size                                 0x1
#define RB0_value_mask                           0x1
#define RB0_clear_mask                           0xFE

#define RB                                       0x0
#define RB_address                               0x007
#define RB_position                              0x0
#define RB_size                                  0x8
#define RB_value_mask                            0xFF
#define RB_clear_mask                            0x0

#define RB1                                      0x1
#define RB1_address                              0x007
#define RB1_position                             0x1
#define RB1_size                                 0x1
#define RB1_value_mask                           0x2
#define RB1_clear_mask                           0xFD

#define RB2                                      0x2
#define RB2_address                              0x007
#define RB2_position                             0x2
#define RB2_size                                 0x1
#define RB2_value_mask                           0x4
#define RB2_clear_mask                           0xFB

#define RB3                                      0x3
#define RB3_address                              0x007
#define RB3_position                             0x3
#define RB3_size                                 0x1
#define RB3_value_mask                           0x8
#define RB3_clear_mask                           0xF7

#define RB4                                      0x4
#define RB4_address                              0x007
#define RB4_position                             0x4
#define RB4_size                                 0x1
#define RB4_value_mask                           0x10
#define RB4_clear_mask                           0xEF

#define RB5                                      0x5
#define RB5_address                              0x007
#define RB5_position                             0x5
#define RB5_size                                 0x1
#define RB5_value_mask                           0x20
#define RB5_clear_mask                           0xDF

#define RB6                                      0x6
#define RB6_address                              0x007
#define RB6_position                             0x6
#define RB6_size                                 0x1
#define RB6_value_mask                           0x40
#define RB6_clear_mask                           0xBF

#define RB7                                      0x7
#define RB7_address                              0x007
#define RB7_position                             0x7
#define RB7_size                                 0x1
#define RB7_value_mask                           0x80
#define RB7_clear_mask                           0x7F


/*----------------------------------------------#
| PORTC                                     0x8 |
#-----------------------------------------------#
| RC7 | RC6 | RC5 | RC4 | RC3 | RC2 | RC1 | RC0 |
#-----------------------------------------------#
| 7   | 6   | 5   | 4   | 3   | 2   | 1   | 0   |
#----------------------------------------------*/

#define PORTC                                    0x0
#define PORTC_address                            0x008
#define PORTC_position                           0x0
#define PORTC_size                               0x8
#define PORTC_value_mask                         0xFF
#define PORTC_clear_mask                         0x0

#define RC0                                      0x0
#define RC0_address                              0x008
#define RC0_position                             0x0
#define RC0_size                                 0x1
#define RC0_value_mask                           0x1
#define RC0_clear_mask                           0xFE

#define RC                                       0x0
#define RC_address                               0x008
#define RC_position                              0x0
#define RC_size                                  0x8
#define RC_value_mask                            0xFF
#define RC_clear_mask                            0x0

#define RC1                                      0x1
#define RC1_address                              0x008
#define RC1_position                             0x1
#define RC1_size                                 0x1
#define RC1_value_mask                           0x2
#define RC1_clear_mask                           0xFD

#define RC2                                      0x2
#define RC2_address                              0x008
#define RC2_position                             0x2
#define RC2_size                                 0x1
#define RC2_value_mask                           0x4
#define RC2_clear_mask                           0xFB

#define RC3                                      0x3
#define RC3_address                              0x008
#define RC3_position                             0x3
#define RC3_size                                 0x1
#define RC3_value_mask                           0x8
#define RC3_clear_mask                           0xF7

#define RC4                                      0x4
#define RC4_address                              0x008
#define RC4_position                             0x4
#define RC4_size                                 0x1
#define RC4_value_mask                           0x10
#define RC4_clear_mask                           0xEF

#define RC5                                      0x5
#define RC5_address                              0x008
#define RC5_position                             0x5
#define RC5_size                                 0x1
#define RC5_value_mask                           0x20
#define RC5_clear_mask                           0xDF

#define RC6                                      0x6
#define RC6_address                              0x008
#define RC6_position                             0x6
#define RC6_size                                 0x1
#define RC6_value_mask                           0x40
#define RC6_clear_mask                           0xBF

#define RC7                                      0x7
#define RC7_address                              0x008
#define RC7_position                             0x7
#define RC7_size                                 0x1
#define RC7_value_mask                           0x80
#define RC7_clear_mask                           0x7F


/*------------------------------------------------------------#
| ADCON0                                                  0x9 |
#-------------------------------------------------------------#
| ADCS1 | ADCS0 | CHS3 | CHS2 | CHS1 | CHS0 | GO_nDONE | ADON |
#-------------------------------------------------------------#
| 7     | 6     | 5    | 4    | 3    | 2    | 1        | 0    |
#------------------------------------------------------------*/

#define ADCON0                                   0x0
#define ADCON0_address                           0x009
#define ADCON0_position                          0x0
#define ADCON0_size                              0x8
#define ADCON0_value_mask                        0xFF
#define ADCON0_clear_mask                        0x0

#define ADON                                     0x0
#define ADON_address                             0x009
#define ADON_position                            0x0
#define ADON_size                                0x1
#define ADON_value_mask                          0x1
#define ADON_clear_mask                          0xFE

#define GO_nDONE                                 0x1
#define GO_nDONE_address                         0x009
#define GO_nDONE_position                        0x1
#define GO_nDONE_size                            0x1
#define GO_nDONE_value_mask                      0x2
#define GO_nDONE_clear_mask                      0xFD

#define NOT_DONE                                 0x1
#define NOT_DONE_address                         0x009
#define NOT_DONE_position                        0x1
#define NOT_DONE_size                            0x1
#define NOT_DONE_value_mask                      0x2
#define NOT_DONE_clear_mask                      0xFD

#define GO                                       0x1
#define GO_address                               0x009
#define GO_position                              0x1
#define GO_size                                  0x1
#define GO_value_mask                            0x2
#define GO_clear_mask                            0xFD

#define CHS                                      0x2
#define CHS_address                              0x009
#define CHS_position                             0x2
#define CHS_size                                 0x4
#define CHS_value_mask                           0x3C
#define CHS_clear_mask                           0xC3

#define CHS0                                     0x2
#define CHS0_address                             0x009
#define CHS0_position                            0x2
#define CHS0_size                                0x1
#define CHS0_value_mask                          0x4
#define CHS0_clear_mask                          0xFB

#define CHS1                                     0x3
#define CHS1_address                             0x009
#define CHS1_position                            0x3
#define CHS1_size                                0x1
#define CHS1_value_mask                          0x8
#define CHS1_clear_mask                          0xF7

#define CHS2                                     0x4
#define CHS2_address                             0x009
#define CHS2_position                            0x4
#define CHS2_size                                0x1
#define CHS2_value_mask                          0x10
#define CHS2_clear_mask                          0xEF

#define CHS3                                     0x5
#define CHS3_address                             0x009
#define CHS3_position                            0x5
#define CHS3_size                                0x1
#define CHS3_value_mask                          0x20
#define CHS3_clear_mask                          0xDF

#define ADCS                                     0x6
#define ADCS_address                             0x009
#define ADCS_position                            0x6
#define ADCS_size                                0x2
#define ADCS_value_mask                          0xC0
#define ADCS_clear_mask                          0x3F

#define ADCS0                                    0x6
#define ADCS0_address                            0x009
#define ADCS0_position                           0x6
#define ADCS0_size                               0x1
#define ADCS0_value_mask                         0x40
#define ADCS0_clear_mask                         0xBF

#define ADCS1                                    0x7
#define ADCS1_address                            0x009
#define ADCS1_position                           0x7
#define ADCS1_size                               0x1
#define ADCS1_value_mask                         0x80
#define ADCS1_clear_mask                         0x7F


/*----------------------------------------------------------------------#
| ADRES                                                             0xA |
#-----------------------------------------------------------------------#
| ADRES7 | ADRES6 | ADRES5 | ADRES4 | ADRES3 | ADRES2 | ADRES1 | ADRES0 |
#-----------------------------------------------------------------------#
| 7      | 6      | 5      | 4      | 3      | 2      | 1      | 0      |
#----------------------------------------------------------------------*/

#define ADRES                                    0x0
#define ADRES_address                            0x00A
#define ADRES_position                           0x0
#define ADRES_size                               0x8
#define ADRES_value_mask                         0xFF
#define ADRES_clear_mask                         0x0

#define ADRES0                                   0x0
#define ADRES0_address                           0x00A
#define ADRES0_position                          0x0
#define ADRES0_size                              0x1
#define ADRES0_value_mask                        0x1
#define ADRES0_clear_mask                        0xFE

#define ADRES1                                   0x1
#define ADRES1_address                           0x00A
#define ADRES1_position                          0x1
#define ADRES1_size                              0x1
#define ADRES1_value_mask                        0x2
#define ADRES1_clear_mask                        0xFD

#define ADRES2                                   0x2
#define ADRES2_address                           0x00A
#define ADRES2_position                          0x2
#define ADRES2_size                              0x1
#define ADRES2_value_mask                        0x4
#define ADRES2_clear_mask                        0xFB

#define ADRES3                                   0x3
#define ADRES3_address                           0x00A
#define ADRES3_position                          0x3
#define ADRES3_size                              0x1
#define ADRES3_value_mask                        0x8
#define ADRES3_clear_mask                        0xF7

#define ADRES4                                   0x4
#define ADRES4_address                           0x00A
#define ADRES4_position                          0x4
#define ADRES4_size                              0x1
#define ADRES4_value_mask                        0x10
#define ADRES4_clear_mask                        0xEF

#define ADRES5                                   0x5
#define ADRES5_address                           0x00A
#define ADRES5_position                          0x5
#define ADRES5_size                              0x1
#define ADRES5_value_mask                        0x20
#define ADRES5_clear_mask                        0xDF

#define ADRES6                                   0x6
#define ADRES6_address                           0x00A
#define ADRES6_position                          0x6
#define ADRES6_size                              0x1
#define ADRES6_value_mask                        0x40
#define ADRES6_clear_mask                        0xBF

#define ADRES7                                   0x7
#define ADRES7_address                           0x00A
#define ADRES7_position                          0x7
#define ADRES7_size                              0x1
#define ADRES7_value_mask                        0x80
#define ADRES7_clear_mask                        0x7F


/*--------------------------------------------#
| INTCON0                                 0xB |
#---------------------------------------------#
| ADIF | CWIF | T0IF | RBIF | - | - | - | GIE |
#---------------------------------------------#
| 7    | 6    | 5    | 4    | 3 | 2 | 1 | 0   |
#--------------------------------------------*/

#define INTCON0                                  0x0
#define INTCON0_address                          0x00B
#define INTCON0_position                         0x0
#define INTCON0_size                             0x8
#define INTCON0_value_mask                       0xFF
#define INTCON0_clear_mask                       0x0

#define GIE                                      0x0
#define GIE_address                              0x00B
#define GIE_position                             0x0
#define GIE_size                                 0x1
#define GIE_value_mask                           0x1
#define GIE_clear_mask                           0xFE

#define RBIF                                     0x4
#define RBIF_address                             0x00B
#define RBIF_position                            0x4
#define RBIF_size                                0x1
#define RBIF_value_mask                          0x10
#define RBIF_clear_mask                          0xEF

#define T0IF                                     0x5
#define T0IF_address                             0x00B
#define T0IF_position                            0x5
#define T0IF_size                                0x1
#define T0IF_value_mask                          0x20
#define T0IF_clear_mask                          0xDF

#define CWIF                                     0x6
#define CWIF_address                             0x00B
#define CWIF_position                            0x6
#define CWIF_size                                0x1
#define CWIF_value_mask                          0x40
#define CWIF_clear_mask                          0xBF

#define ADIF                                     0x7
#define ADIF_address                             0x00B
#define ADIF_position                            0x7
#define ADIF_size                                0x1
#define ADIF_value_mask                          0x80
#define ADIF_clear_mask                          0x7F


/*------------------------------------------#
| EECON                                0x21 |
#-------------------------------------------#
| - | - | - | FREE | WRERR | WREN | WR | RD |
#-------------------------------------------#
| 7 | 6 | 5 | 4    | 3     | 2    | 1  | 0  |
#------------------------------------------*/

#define EECON                                    0x0
#define EECON_address                            0x021
#define EECON_position                           0x0
#define EECON_size                               0x8
#define EECON_value_mask                         0xFF
#define EECON_clear_mask                         0x0

#define RD                                       0x0
#define RD_address                               0x021
#define RD_position                              0x0
#define RD_size                                  0x1
#define RD_value_mask                            0x1
#define RD_clear_mask                            0xFE

#define WR                                       0x1
#define WR_address                               0x021
#define WR_position                              0x1
#define WR_size                                  0x1
#define WR_value_mask                            0x2
#define WR_clear_mask                            0xFD

#define WREN                                     0x2
#define WREN_address                             0x021
#define WREN_position                            0x2
#define WREN_size                                0x1
#define WREN_value_mask                          0x4
#define WREN_clear_mask                          0xFB

#define WRERR                                    0x3
#define WRERR_address                            0x021
#define WRERR_position                           0x3
#define WRERR_size                               0x1
#define WRERR_value_mask                         0x8
#define WRERR_clear_mask                         0xF7

#define FREE                                     0x4
#define FREE_address                             0x021
#define FREE_position                            0x4
#define FREE_size                                0x1
#define FREE_value_mask                          0x10
#define FREE_clear_mask                          0xEF


/*------------------------------#
| EEDATA                   0x25 |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define EEDATA                                   0x0
#define EEDATA_address                           0x025
#define EEDATA_position                          0x0
#define EEDATA_size                              0x8
#define EEDATA_value_mask                        0xFF
#define EEDATA_clear_mask                        0x0


/*------------------------------#
| EEADR                    0x26 |
#-------------------------------#
| - | - | EEADR                 |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define EEADR                                    0x0
#define EEADR_address                            0x026
#define EEADR_position                           0x0
#define EEADR_size                               0x6
#define EEADR_value_mask                         0x3F
#define EEADR_clear_mask                         0xC0


/*--------------------------------------------------------------------#
| CM1CON0                                                        0x27 |
#---------------------------------------------------------------------#
| C1OUT | nC1OUTEN | C1POL | nC1T0CS | C1ON | C1NREF | C1PREF | nC1WU |
#---------------------------------------------------------------------#
| 7     | 6        | 5     | 4       | 3    | 2      | 1      | 0     |
#--------------------------------------------------------------------*/

#define CM1CON0                                  0x0
#define CM1CON0_address                          0x027
#define CM1CON0_position                         0x0
#define CM1CON0_size                             0x8
#define CM1CON0_value_mask                       0xFF
#define CM1CON0_clear_mask                       0x0

#define nC1WU                                    0x0
#define nC1WU_address                            0x027
#define nC1WU_position                           0x0
#define nC1WU_size                               0x1
#define nC1WU_value_mask                         0x1
#define nC1WU_clear_mask                         0xFE

#define C1PREF                                   0x1
#define C1PREF_address                           0x027
#define C1PREF_position                          0x1
#define C1PREF_size                              0x1
#define C1PREF_value_mask                        0x2
#define C1PREF_clear_mask                        0xFD

#define C1NREF                                   0x2
#define C1NREF_address                           0x027
#define C1NREF_position                          0x2
#define C1NREF_size                              0x1
#define C1NREF_value_mask                        0x4
#define C1NREF_clear_mask                        0xFB

#define C1ON                                     0x3
#define C1ON_address                             0x027
#define C1ON_position                            0x3
#define C1ON_size                                0x1
#define C1ON_value_mask                          0x8
#define C1ON_clear_mask                          0xF7

#define nC1T0CS                                  0x4
#define nC1T0CS_address                          0x027
#define nC1T0CS_position                         0x4
#define nC1T0CS_size                             0x1
#define nC1T0CS_value_mask                       0x10
#define nC1T0CS_clear_mask                       0xEF

#define C1POL                                    0x5
#define C1POL_address                            0x027
#define C1POL_position                           0x5
#define C1POL_size                               0x1
#define C1POL_value_mask                         0x20
#define C1POL_clear_mask                         0xDF

#define nC1OUTEN                                 0x6
#define nC1OUTEN_address                         0x027
#define nC1OUTEN_position                        0x6
#define nC1OUTEN_size                            0x1
#define nC1OUTEN_value_mask                      0x40
#define nC1OUTEN_clear_mask                      0xBF

#define C1OUT                                    0x7
#define C1OUT_address                            0x027
#define C1OUT_position                           0x7
#define C1OUT_size                               0x1
#define C1OUT_value_mask                         0x80
#define C1OUT_clear_mask                         0x7F


/*---------------------------------------------------------------------#
| CM2CON0                                                         0x28 |
#----------------------------------------------------------------------#
| C2OUT | nC2OUTEN | C2POL | C2PREF2 | C2ON | C2NREF | C2PREF1 | nC2WU |
#----------------------------------------------------------------------#
| 7     | 6        | 5     | 4       | 3    | 2      | 1       | 0     |
#---------------------------------------------------------------------*/

#define CM2CON0                                  0x0
#define CM2CON0_address                          0x028
#define CM2CON0_position                         0x0
#define CM2CON0_size                             0x8
#define CM2CON0_value_mask                       0xFF
#define CM2CON0_clear_mask                       0x0

#define nC2WU                                    0x0
#define nC2WU_address                            0x028
#define nC2WU_position                           0x0
#define nC2WU_size                               0x1
#define nC2WU_value_mask                         0x1
#define nC2WU_clear_mask                         0xFE

#define C2PREF1                                  0x1
#define C2PREF1_address                          0x028
#define C2PREF1_position                         0x1
#define C2PREF1_size                             0x1
#define C2PREF1_value_mask                       0x2
#define C2PREF1_clear_mask                       0xFD

#define C2NREF                                   0x2
#define C2NREF_address                           0x028
#define C2NREF_position                          0x2
#define C2NREF_size                              0x1
#define C2NREF_value_mask                        0x4
#define C2NREF_clear_mask                        0xFB

#define C2ON                                     0x3
#define C2ON_address                             0x028
#define C2ON_position                            0x3
#define C2ON_size                                0x1
#define C2ON_value_mask                          0x8
#define C2ON_clear_mask                          0xF7

#define C2PREF2                                  0x4
#define C2PREF2_address                          0x028
#define C2PREF2_position                         0x4
#define C2PREF2_size                             0x1
#define C2PREF2_value_mask                       0x10
#define C2PREF2_clear_mask                       0xEF

#define C2POL                                    0x5
#define C2POL_address                            0x028
#define C2POL_position                           0x5
#define C2POL_size                               0x1
#define C2POL_value_mask                         0x20
#define C2POL_clear_mask                         0xDF

#define nC2OUTEN                                 0x6
#define nC2OUTEN_address                         0x028
#define nC2OUTEN_position                        0x6
#define nC2OUTEN_size                            0x1
#define nC2OUTEN_value_mask                      0x40
#define nC2OUTEN_clear_mask                      0xBF

#define C2OUT                                    0x7
#define C2OUT_address                            0x028
#define C2OUT_position                           0x7
#define C2OUT_size                               0x1
#define C2OUT_value_mask                         0x80
#define C2OUT_clear_mask                         0x7F


/*---------------------------------------------------#
| VRCON                                         0x29 |
#----------------------------------------------------#
| VREN | VROE1 | VROE2 | VRR | VR3 | VR2 | VR1 | VR0 |
#----------------------------------------------------#
| 7    | 6     | 5     | 4   | 3   | 2   | 1   | 0   |
#---------------------------------------------------*/

#define VRCON                                    0x0
#define VRCON_address                            0x029
#define VRCON_position                           0x0
#define VRCON_size                               0x8
#define VRCON_value_mask                         0xFF
#define VRCON_clear_mask                         0x0

#define VR0                                      0x0
#define VR0_address                              0x029
#define VR0_position                             0x0
#define VR0_size                                 0x1
#define VR0_value_mask                           0x1
#define VR0_clear_mask                           0xFE

#define VR                                       0x0
#define VR_address                               0x029
#define VR_position                              0x0
#define VR_size                                  0x4
#define VR_value_mask                            0xF
#define VR_clear_mask                            0xF0

#define VR1                                      0x1
#define VR1_address                              0x029
#define VR1_position                             0x1
#define VR1_size                                 0x1
#define VR1_value_mask                           0x2
#define VR1_clear_mask                           0xFD

#define VR2                                      0x2
#define VR2_address                              0x029
#define VR2_position                             0x2
#define VR2_size                                 0x1
#define VR2_value_mask                           0x4
#define VR2_clear_mask                           0xFB

#define VR3                                      0x3
#define VR3_address                              0x029
#define VR3_position                             0x3
#define VR3_size                                 0x1
#define VR3_value_mask                           0x8
#define VR3_clear_mask                           0xF7

#define VRR                                      0x4
#define VRR_address                              0x029
#define VRR_position                             0x4
#define VRR_size                                 0x1
#define VRR_value_mask                           0x10
#define VRR_clear_mask                           0xEF

#define VROE2                                    0x5
#define VROE2_address                            0x029
#define VROE2_position                           0x5
#define VROE2_size                               0x1
#define VROE2_value_mask                         0x20
#define VROE2_clear_mask                         0xDF

#define VROE1                                    0x6
#define VROE1_address                            0x029
#define VROE1_position                           0x6
#define VROE1_size                               0x1
#define VROE1_value_mask                         0x40
#define VROE1_clear_mask                         0xBF

#define VREN                                     0x7
#define VREN_address                             0x029
#define VREN_position                            0x7
#define VREN_size                                0x1
#define VREN_value_mask                          0x80
#define VREN_clear_mask                          0x7F


/*------------------------------------------------------#
| ANSEL                                            0x2A |
#-------------------------------------------------------#
| ANS7 | ANS6 | ANS5 | ANS4 | ANS3 | ANS2 | ANS1 | ANS0 |
#-------------------------------------------------------#
| 7    | 6    | 5    | 4    | 3    | 2    | 1    | 0    |
#------------------------------------------------------*/

#define ANSEL                                    0x0
#define ANSEL_address                            0x02A
#define ANSEL_position                           0x0
#define ANSEL_size                               0x8
#define ANSEL_value_mask                         0xFF
#define ANSEL_clear_mask                         0x0

#define ANS0                                     0x0
#define ANS0_address                             0x02A
#define ANS0_position                            0x0
#define ANS0_size                                0x1
#define ANS0_value_mask                          0x1
#define ANS0_clear_mask                          0xFE

#define ANS1                                     0x1
#define ANS1_address                             0x02A
#define ANS1_position                            0x1
#define ANS1_size                                0x1
#define ANS1_value_mask                          0x2
#define ANS1_clear_mask                          0xFD

#define ANS2                                     0x2
#define ANS2_address                             0x02A
#define ANS2_position                            0x2
#define ANS2_size                                0x1
#define ANS2_value_mask                          0x4
#define ANS2_clear_mask                          0xFB

#define ANS3                                     0x3
#define ANS3_address                             0x02A
#define ANS3_position                            0x3
#define ANS3_size                                0x1
#define ANS3_value_mask                          0x8
#define ANS3_clear_mask                          0xF7

#define ANS4                                     0x4
#define ANS4_address                             0x02A
#define ANS4_position                            0x4
#define ANS4_size                                0x1
#define ANS4_value_mask                          0x10
#define ANS4_clear_mask                          0xEF

#define ANS5                                     0x5
#define ANS5_address                             0x02A
#define ANS5_position                            0x5
#define ANS5_size                                0x1
#define ANS5_value_mask                          0x20
#define ANS5_clear_mask                          0xDF

#define ANS6                                     0x6
#define ANS6_address                             0x02A
#define ANS6_position                            0x6
#define ANS6_size                                0x1
#define ANS6_value_mask                          0x40
#define ANS6_clear_mask                          0xBF

#define ANS7                                     0x7
#define ANS7_address                             0x02A
#define ANS7_position                            0x7
#define ANS7_size                                0x1
#define ANS7_value_mask                          0x80
#define ANS7_clear_mask                          0x7F


/*------------------------------#
| IW                       0x61 |
#-------------------------------#
| IWREG                         |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define IW                                       0x0
#define IW_address                               0x061
#define IW_position                              0x0
#define IW_size                                  0x8
#define IW_value_mask                            0xFF
#define IW_clear_mask                            0x0

#define IWREG                                    0x0
#define IWREG_address                            0x061
#define IWREG_position                           0x0
#define IWREG_size                               0x8
#define IWREG_value_mask                         0xFF
#define IWREG_clear_mask                         0x0


/*--------------------------------------------#
| INTCON1                                0x65 |
#---------------------------------------------#
| ADIE | CWIE | T0IE | RBIE | - | - | - | WUR |
#---------------------------------------------#
| 7    | 6    | 5    | 4    | 3 | 2 | 1 | 0   |
#--------------------------------------------*/

#define INTCON1                                  0x0
#define INTCON1_address                          0x065
#define INTCON1_position                         0x0
#define INTCON1_size                             0x8
#define INTCON1_value_mask                       0xFF
#define INTCON1_clear_mask                       0x0

#define WUR                                      0x0
#define WUR_address                              0x065
#define WUR_position                             0x0
#define WUR_size                                 0x1
#define WUR_value_mask                           0x1
#define WUR_clear_mask                           0xFE

#define RBIE                                     0x4
#define RBIE_address                             0x065
#define RBIE_position                            0x4
#define RBIE_size                                0x1
#define RBIE_value_mask                          0x10
#define RBIE_clear_mask                          0xEF

#define T0IE                                     0x5
#define T0IE_address                             0x065
#define T0IE_position                            0x5
#define T0IE_size                                0x1
#define T0IE_value_mask                          0x20
#define T0IE_clear_mask                          0xDF

#define CWIE                                     0x6
#define CWIE_address                             0x065
#define CWIE_position                            0x6
#define CWIE_size                                0x1
#define CWIE_value_mask                          0x40
#define CWIE_clear_mask                          0xBF

#define ADIE                                     0x7
#define ADIE_address                             0x065
#define ADIE_position                            0x7
#define ADIE_size                                0x1
#define ADIE_value_mask                          0x80
#define ADIE_clear_mask                          0x7F


/*---------------------------------------------------------------------------------------------------------#
| ISTATUS                                                                                             0x66 |
#----------------------------------------------------------------------------------------------------------#
| ISTATUS_PA2 | ISTATUS_PA1 | ISTATUS_PA0 | ISTATUS_nTO | ISTATUS_nPD | ISTATUS_Z | ISTATUS_DC | ISTATUS_C |
#----------------------------------------------------------------------------------------------------------#
| 7           | 6           | 5           | 4           | 3           | 2         | 1          | 0         |
#---------------------------------------------------------------------------------------------------------*/

#define ISTATUS                                  0x0
#define ISTATUS_address                          0x066
#define ISTATUS_position                         0x0
#define ISTATUS_size                             0x8
#define ISTATUS_value_mask                       0xFF
#define ISTATUS_clear_mask                       0x0

#define ISTATUS_C                                0x0
#define ISTATUS_C_address                        0x066
#define ISTATUS_C_position                       0x0
#define ISTATUS_C_size                           0x1
#define ISTATUS_C_value_mask                     0x1
#define ISTATUS_C_clear_mask                     0xFE

#define ISTATUS_DC                               0x1
#define ISTATUS_DC_address                       0x066
#define ISTATUS_DC_position                      0x1
#define ISTATUS_DC_size                          0x1
#define ISTATUS_DC_value_mask                    0x2
#define ISTATUS_DC_clear_mask                    0xFD

#define ISTATUS_Z                                0x2
#define ISTATUS_Z_address                        0x066
#define ISTATUS_Z_position                       0x2
#define ISTATUS_Z_size                           0x1
#define ISTATUS_Z_value_mask                     0x4
#define ISTATUS_Z_clear_mask                     0xFB

#define ISTATUS_nPD                              0x3
#define ISTATUS_nPD_address                      0x066
#define ISTATUS_nPD_position                     0x3
#define ISTATUS_nPD_size                         0x1
#define ISTATUS_nPD_value_mask                   0x8
#define ISTATUS_nPD_clear_mask                   0xF7

#define ISTATUS_nTO                              0x4
#define ISTATUS_nTO_address                      0x066
#define ISTATUS_nTO_position                     0x4
#define ISTATUS_nTO_size                         0x1
#define ISTATUS_nTO_value_mask                   0x10
#define ISTATUS_nTO_clear_mask                   0xEF

#define ISTATUS_PA0                              0x5
#define ISTATUS_PA0_address                      0x066
#define ISTATUS_PA0_position                     0x5
#define ISTATUS_PA0_size                         0x1
#define ISTATUS_PA0_value_mask                   0x20
#define ISTATUS_PA0_clear_mask                   0xDF

#define ISTATUS_PA1                              0x6
#define ISTATUS_PA1_address                      0x066
#define ISTATUS_PA1_position                     0x6
#define ISTATUS_PA1_size                         0x1
#define ISTATUS_PA1_value_mask                   0x40
#define ISTATUS_PA1_clear_mask                   0xBF

#define ISTATUS_PA2                              0x7
#define ISTATUS_PA2_address                      0x066
#define ISTATUS_PA2_position                     0x7
#define ISTATUS_PA2_size                         0x1
#define ISTATUS_PA2_value_mask                   0x80
#define ISTATUS_PA2_clear_mask                   0x7F


/*------------------------------#
| IFSR                     0x67 |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define IFSR                                     0x0
#define IFSR_address                             0x067
#define IFSR_position                            0x0
#define IFSR_size                                0x8
#define IFSR_value_mask                          0xFF
#define IFSR_clear_mask                          0x0


/*------------------------------#
| IBSR                     0x68 |
#-------------------------------#
| - | - | - | - | - | IBSR      |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define IBSR                                     0x0
#define IBSR_address                             0x068
#define IBSR_position                            0x0
#define IBSR_size                                0x3
#define IBSR_value_mask                          0x7
#define IBSR_clear_mask                          0xF8


/*----------------------------------------#
| OPACON                             0x69 |
#-----------------------------------------#
| - | - | - | - | - | - | OPA2ON | OPA1ON |
#-----------------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1      | 0      |
#----------------------------------------*/

#define OPACON                                   0x0
#define OPACON_address                           0x069
#define OPACON_position                          0x0
#define OPACON_size                              0x8
#define OPACON_value_mask                        0xFF
#define OPACON_clear_mask                        0x0

#define OPA1ON                                   0x0
#define OPA1ON_address                           0x069
#define OPA1ON_position                          0x0
#define OPA1ON_size                              0x1
#define OPA1ON_value_mask                        0x1
#define OPA1ON_clear_mask                        0xFE

#define OPA2ON                                   0x1
#define OPA2ON_address                           0x069
#define OPA2ON_position                          0x1
#define OPA2ON_size                              0x1
#define OPA2ON_value_mask                        0x2
#define OPA2ON_clear_mask                        0xFD

#endif // _PIC16F570_H_
