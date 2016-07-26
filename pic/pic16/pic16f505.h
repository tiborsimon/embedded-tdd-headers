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

#ifndef _PIC16F505_H_
#define _PIC16F505_H_


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
| RBWUF | - | PA0 | nTO | nPD | ZERO | DC | C |
#---------------------------------------------#
| 7     | 6 | 5   | 4   | 3   | 2    | 1  | 0 |
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

#define PA0                                      0x5
#define PA0_address                              0x003
#define PA0_position                             0x5
#define PA0_size                                 0x1
#define PA0_value_mask                           0x20
#define PA0_clear_mask                           0xDF

#define RBWUF                                    0x7
#define RBWUF_address                            0x003
#define RBWUF_position                           0x7
#define RBWUF_size                               0x1
#define RBWUF_value_mask                         0x80
#define RBWUF_clear_mask                         0x7F


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


/*------------------------------------------#
| PORTB                                 0x6 |
#-------------------------------------------#
| - | - | RB5 | RB4 | RB3 | RB2 | RB1 | RB0 |
#-------------------------------------------#
| 7 | 6 | 5   | 4   | 3   | 2   | 1   | 0   |
#------------------------------------------*/

#define PORTB                                    0x0
#define PORTB_address                            0x006
#define PORTB_position                           0x0
#define PORTB_size                               0x8
#define PORTB_value_mask                         0xFF
#define PORTB_clear_mask                         0x0

#define RB0                                      0x0
#define RB0_address                              0x006
#define RB0_position                             0x0
#define RB0_size                                 0x1
#define RB0_value_mask                           0x1
#define RB0_clear_mask                           0xFE

#define RB1                                      0x1
#define RB1_address                              0x006
#define RB1_position                             0x1
#define RB1_size                                 0x1
#define RB1_value_mask                           0x2
#define RB1_clear_mask                           0xFD

#define RB2                                      0x2
#define RB2_address                              0x006
#define RB2_position                             0x2
#define RB2_size                                 0x1
#define RB2_value_mask                           0x4
#define RB2_clear_mask                           0xFB

#define RB3                                      0x3
#define RB3_address                              0x006
#define RB3_position                             0x3
#define RB3_size                                 0x1
#define RB3_value_mask                           0x8
#define RB3_clear_mask                           0xF7

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


/*------------------------------------------#
| PORTC                                 0x7 |
#-------------------------------------------#
| - | - | RC5 | RC4 | RC3 | RC2 | RC1 | RC0 |
#-------------------------------------------#
| 7 | 6 | 5   | 4   | 3   | 2   | 1   | 0   |
#------------------------------------------*/

#define PORTC                                    0x0
#define PORTC_address                            0x007
#define PORTC_position                           0x0
#define PORTC_size                               0x8
#define PORTC_value_mask                         0xFF
#define PORTC_clear_mask                         0x0

#define RC0                                      0x0
#define RC0_address                              0x007
#define RC0_position                             0x0
#define RC0_size                                 0x1
#define RC0_value_mask                           0x1
#define RC0_clear_mask                           0xFE

#define RC1                                      0x1
#define RC1_address                              0x007
#define RC1_position                             0x1
#define RC1_size                                 0x1
#define RC1_value_mask                           0x2
#define RC1_clear_mask                           0xFD

#define RC2                                      0x2
#define RC2_address                              0x007
#define RC2_position                             0x2
#define RC2_size                                 0x1
#define RC2_value_mask                           0x4
#define RC2_clear_mask                           0xFB

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

#define RC5                                      0x5
#define RC5_address                              0x007
#define RC5_position                             0x5
#define RC5_size                                 0x1
#define RC5_value_mask                           0x20
#define RC5_clear_mask                           0xDF

#endif // _PIC16F505_H_
