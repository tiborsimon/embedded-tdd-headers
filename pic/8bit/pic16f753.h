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

#ifndef _PIC16F753_H_
#define _PIC16F753_H_


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


/*------------------------------------------#
| PORTA                                 0x5 |
#-------------------------------------------#
| - | - | RA5 | RA4 | RA3 | RA2 | RA1 | RA0 |
#-------------------------------------------#
| 7 | 6 | 5   | 4   | 3   | 2   | 1   | 0   |
#------------------------------------------*/

#define PORTA                                    0x0
#define PORTA_address                            0x005
#define PORTA_position                           0x0
#define PORTA_size                               0x8
#define PORTA_value_mask                         0xFF
#define PORTA_clear_mask                         0x0

#define RA0                                      0x0
#define RA0_address                              0x005
#define RA0_position                             0x0
#define RA0_size                                 0x1
#define RA0_value_mask                           0x1
#define RA0_clear_mask                           0xFE

#define RA1                                      0x1
#define RA1_address                              0x005
#define RA1_position                             0x1
#define RA1_size                                 0x1
#define RA1_value_mask                           0x2
#define RA1_clear_mask                           0xFD

#define RA2                                      0x2
#define RA2_address                              0x005
#define RA2_position                             0x2
#define RA2_size                                 0x1
#define RA2_value_mask                           0x4
#define RA2_clear_mask                           0xFB

#define RA3                                      0x3
#define RA3_address                              0x005
#define RA3_position                             0x3
#define RA3_size                                 0x1
#define RA3_value_mask                           0x8
#define RA3_clear_mask                           0xF7

#define RA4                                      0x4
#define RA4_address                              0x005
#define RA4_position                             0x4
#define RA4_size                                 0x1
#define RA4_value_mask                           0x10
#define RA4_clear_mask                           0xEF

#define RA5                                      0x5
#define RA5_address                              0x005
#define RA5_position                             0x5
#define RA5_size                                 0x1
#define RA5_value_mask                           0x20
#define RA5_clear_mask                           0xDF


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


/*------------------------------------------------------------#
| IOCAF                                                   0x8 |
#-------------------------------------------------------------#
| - | - | IOCAF5 | IOCAF4 | IOCAF3 | IOCAF2 | IOCAF1 | IOCAF0 |
#-------------------------------------------------------------#
| 7 | 6 | 5      | 4      | 3      | 2      | 1      | 0      |
#------------------------------------------------------------*/

#define IOCAF                                    0x0
#define IOCAF_address                            0x008
#define IOCAF_position                           0x0
#define IOCAF_size                               0x8
#define IOCAF_value_mask                         0xFF
#define IOCAF_clear_mask                         0x0

#define IOCAF0                                   0x0
#define IOCAF0_address                           0x008
#define IOCAF0_position                          0x0
#define IOCAF0_size                              0x1
#define IOCAF0_value_mask                        0x1
#define IOCAF0_clear_mask                        0xFE

#define IOCAF1                                   0x1
#define IOCAF1_address                           0x008
#define IOCAF1_position                          0x1
#define IOCAF1_size                              0x1
#define IOCAF1_value_mask                        0x2
#define IOCAF1_clear_mask                        0xFD

#define IOCAF2                                   0x2
#define IOCAF2_address                           0x008
#define IOCAF2_position                          0x2
#define IOCAF2_size                              0x1
#define IOCAF2_value_mask                        0x4
#define IOCAF2_clear_mask                        0xFB

#define IOCAF3                                   0x3
#define IOCAF3_address                           0x008
#define IOCAF3_position                          0x3
#define IOCAF3_size                              0x1
#define IOCAF3_value_mask                        0x8
#define IOCAF3_clear_mask                        0xF7

#define IOCAF4                                   0x4
#define IOCAF4_address                           0x008
#define IOCAF4_position                          0x4
#define IOCAF4_size                              0x1
#define IOCAF4_value_mask                        0x10
#define IOCAF4_clear_mask                        0xEF

#define IOCAF5                                   0x5
#define IOCAF5_address                           0x008
#define IOCAF5_position                          0x5
#define IOCAF5_size                              0x1
#define IOCAF5_value_mask                        0x20
#define IOCAF5_clear_mask                        0xDF


/*------------------------------------------------------------#
| IOCCF                                                   0x9 |
#-------------------------------------------------------------#
| - | - | IOCCF5 | IOCCF4 | IOCCF3 | IOCCF2 | IOCCF1 | IOCCF0 |
#-------------------------------------------------------------#
| 7 | 6 | 5      | 4      | 3      | 2      | 1      | 0      |
#------------------------------------------------------------*/

#define IOCCF                                    0x0
#define IOCCF_address                            0x009
#define IOCCF_position                           0x0
#define IOCCF_size                               0x8
#define IOCCF_value_mask                         0xFF
#define IOCCF_clear_mask                         0x0

#define IOCCF0                                   0x0
#define IOCCF0_address                           0x009
#define IOCCF0_position                          0x0
#define IOCCF0_size                              0x1
#define IOCCF0_value_mask                        0x1
#define IOCCF0_clear_mask                        0xFE

#define IOCCF1                                   0x1
#define IOCCF1_address                           0x009
#define IOCCF1_position                          0x1
#define IOCCF1_size                              0x1
#define IOCCF1_value_mask                        0x2
#define IOCCF1_clear_mask                        0xFD

#define IOCCF2                                   0x2
#define IOCCF2_address                           0x009
#define IOCCF2_position                          0x2
#define IOCCF2_size                              0x1
#define IOCCF2_value_mask                        0x4
#define IOCCF2_clear_mask                        0xFB

#define IOCCF3                                   0x3
#define IOCCF3_address                           0x009
#define IOCCF3_position                          0x3
#define IOCCF3_size                              0x1
#define IOCCF3_value_mask                        0x8
#define IOCCF3_clear_mask                        0xF7

#define IOCCF4                                   0x4
#define IOCCF4_address                           0x009
#define IOCCF4_position                          0x4
#define IOCCF4_size                              0x1
#define IOCCF4_value_mask                        0x10
#define IOCCF4_clear_mask                        0xEF

#define IOCCF5                                   0x5
#define IOCCF5_address                           0x009
#define IOCCF5_position                          0x5
#define IOCCF5_size                              0x1
#define IOCCF5_value_mask                        0x20
#define IOCCF5_clear_mask                        0xDF


/*-------------------------------------------------------#
| INTCON                                             0xB |
#--------------------------------------------------------#
| GIE | PEIE | T0IE | INTE | IOCIE | T0IF | INTF | IOCIF |
#--------------------------------------------------------#
| 7   | 6    | 5    | 4    | 3     | 2    | 1    | 0     |
#-------------------------------------------------------*/

#define INTCON                                   0x0
#define INTCON_address                           0x00B
#define INTCON_position                          0x0
#define INTCON_size                              0x8
#define INTCON_value_mask                        0xFF
#define INTCON_clear_mask                        0x0

#define IOCIF                                    0x0
#define IOCIF_address                            0x00B
#define IOCIF_position                           0x0
#define IOCIF_size                               0x1
#define IOCIF_value_mask                         0x1
#define IOCIF_clear_mask                         0xFE

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

#define IOCIE                                    0x3
#define IOCIE_address                            0x00B
#define IOCIE_position                           0x3
#define IOCIE_size                               0x1
#define IOCIE_value_mask                         0x8
#define IOCIE_clear_mask                         0xF7

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


/*---------------------------------------------------------------#
| PIR1                                                       0xC |
#----------------------------------------------------------------#
| TMR1GIF | ADIF | - | - | HLTMR2IF | HLTMR1IF | TMR2IF | TMR1IF |
#----------------------------------------------------------------#
| 7       | 6    | 5 | 4 | 3        | 2        | 1      | 0      |
#---------------------------------------------------------------*/

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

#define HLTMR1IF                                 0x2
#define HLTMR1IF_address                         0x00C
#define HLTMR1IF_position                        0x2
#define HLTMR1IF_size                            0x1
#define HLTMR1IF_value_mask                      0x4
#define HLTMR1IF_clear_mask                      0xFB

#define HLTMR2IF                                 0x3
#define HLTMR2IF_address                         0x00C
#define HLTMR2IF_position                        0x3
#define HLTMR2IF_size                            0x1
#define HLTMR2IF_value_mask                      0x8
#define HLTMR2IF_clear_mask                      0xF7

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


/*----------------------------------------------#
| PIR2                                      0xD |
#-----------------------------------------------#
| - | - | C2IF | C1IF | - | COG1IF | - | CCP1IF |
#-----------------------------------------------#
| 7 | 6 | 5    | 4    | 3 | 2      | 1 | 0      |
#----------------------------------------------*/

#define PIR2                                     0x0
#define PIR2_address                             0x00D
#define PIR2_position                            0x0
#define PIR2_size                                0x8
#define PIR2_value_mask                          0xFF
#define PIR2_clear_mask                          0x0

#define CCP1IF                                   0x0
#define CCP1IF_address                           0x00D
#define CCP1IF_position                          0x0
#define CCP1IF_size                              0x1
#define CCP1IF_value_mask                        0x1
#define CCP1IF_clear_mask                        0xFE

#define COG1IF                                   0x2
#define COG1IF_address                           0x00D
#define COG1IF_position                          0x2
#define COG1IF_size                              0x1
#define COG1IF_value_mask                        0x4
#define COG1IF_clear_mask                        0xFB

#define C1IF                                     0x4
#define C1IF_address                             0x00D
#define C1IF_position                            0x4
#define C1IF_size                                0x1
#define C1IF_value_mask                          0x10
#define C1IF_clear_mask                          0xEF

#define C2IF                                     0x5
#define C2IF_address                             0x00D
#define C2IF_position                            0x5
#define C2IF_size                                0x1
#define C2IF_value_mask                          0x20
#define C2IF_clear_mask                          0xDF


/*-----------------------------------------------------------------#
| T1CON                                                       0x11 |
#------------------------------------------------------------------#
| TMR1CS1 | TMR1CS0 | T1CKPS1 | T1CKPS0 | - | nT1SYNC | - | TMR1ON |
#------------------------------------------------------------------#
| 7       | 6       | 5       | 4       | 3 | 2       | 1 | 0      |
#-----------------------------------------------------------------*/

#define T1CON                                    0x0
#define T1CON_address                            0x011
#define T1CON_position                           0x0
#define T1CON_size                               0x8
#define T1CON_value_mask                         0xFF
#define T1CON_clear_mask                         0x0

#define TMR1ON                                   0x0
#define TMR1ON_address                           0x011
#define TMR1ON_position                          0x0
#define TMR1ON_size                              0x1
#define TMR1ON_value_mask                        0x1
#define TMR1ON_clear_mask                        0xFE

#define nT1SYNC                                  0x2
#define nT1SYNC_address                          0x011
#define nT1SYNC_position                         0x2
#define nT1SYNC_size                             0x1
#define nT1SYNC_value_mask                       0x4
#define nT1SYNC_clear_mask                       0xFB

#define T1CKPS0                                  0x4
#define T1CKPS0_address                          0x011
#define T1CKPS0_position                         0x4
#define T1CKPS0_size                             0x1
#define T1CKPS0_value_mask                       0x10
#define T1CKPS0_clear_mask                       0xEF

#define T1CKPS                                   0x4
#define T1CKPS_address                           0x011
#define T1CKPS_position                          0x4
#define T1CKPS_size                              0x2
#define T1CKPS_value_mask                        0x30
#define T1CKPS_clear_mask                        0xCF

#define T1CKPS1                                  0x5
#define T1CKPS1_address                          0x011
#define T1CKPS1_position                         0x5
#define T1CKPS1_size                             0x1
#define T1CKPS1_value_mask                       0x20
#define T1CKPS1_clear_mask                       0xDF

#define TMR1CS0                                  0x6
#define TMR1CS0_address                          0x011
#define TMR1CS0_position                         0x6
#define TMR1CS0_size                             0x1
#define TMR1CS0_value_mask                       0x40
#define TMR1CS0_clear_mask                       0xBF

#define TMR1CS                                   0x6
#define TMR1CS_address                           0x011
#define TMR1CS_position                          0x6
#define TMR1CS_size                              0x2
#define TMR1CS_value_mask                        0xC0
#define TMR1CS_clear_mask                        0x3F

#define TMR1CS1                                  0x7
#define TMR1CS1_address                          0x011
#define TMR1CS1_position                         0x7
#define TMR1CS1_size                             0x1
#define TMR1CS1_value_mask                       0x80
#define TMR1CS1_clear_mask                       0x7F


/*--------------------------------------------------------------------------#
| T1GCON                                                               0x12 |
#---------------------------------------------------------------------------#
| TMR1GE | T1GPOL | T1GTM | T1GSPM | T1GGO_nDONE | T1GVAL | T1GSS1 | T1GSS0 |
#---------------------------------------------------------------------------#
| 7      | 6      | 5     | 4      | 3           | 2      | 1      | 0      |
#--------------------------------------------------------------------------*/

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

#define T1GSS                                    0x0
#define T1GSS_address                            0x012
#define T1GSS_position                           0x0
#define T1GSS_size                               0x2
#define T1GSS_value_mask                         0x3
#define T1GSS_clear_mask                         0xFC

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

#define T1GGO_nDONE                              0x3
#define T1GGO_nDONE_address                      0x012
#define T1GGO_nDONE_position                     0x3
#define T1GGO_nDONE_size                         0x1
#define T1GGO_nDONE_value_mask                   0x8
#define T1GGO_nDONE_clear_mask                   0xF7

#define T1GGO                                    0x3
#define T1GGO_address                            0x012
#define T1GGO_position                           0x3
#define T1GGO_size                               0x1
#define T1GGO_value_mask                         0x8
#define T1GGO_clear_mask                         0xF7

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


/*----------------------------------------------------------#
| CCP1CON                                              0x15 |
#-----------------------------------------------------------#
| - | - | DC1B1 | DC1B0 | CCP1M3 | CCP1M2 | CCP1M1 | CCP1M0 |
#-----------------------------------------------------------#
| 7 | 6 | 5     | 4     | 3      | 2      | 1      | 0      |
#----------------------------------------------------------*/

#define CCP1CON                                  0x0
#define CCP1CON_address                          0x015
#define CCP1CON_position                         0x0
#define CCP1CON_size                             0x8
#define CCP1CON_value_mask                       0xFF
#define CCP1CON_clear_mask                       0x0

#define CCP1M0                                   0x0
#define CCP1M0_address                           0x015
#define CCP1M0_position                          0x0
#define CCP1M0_size                              0x1
#define CCP1M0_value_mask                        0x1
#define CCP1M0_clear_mask                        0xFE

#define CCP1M                                    0x0
#define CCP1M_address                            0x015
#define CCP1M_position                           0x0
#define CCP1M_size                               0x4
#define CCP1M_value_mask                         0xF
#define CCP1M_clear_mask                         0xF0

#define CCP1M1                                   0x1
#define CCP1M1_address                           0x015
#define CCP1M1_position                          0x1
#define CCP1M1_size                              0x1
#define CCP1M1_value_mask                        0x2
#define CCP1M1_clear_mask                        0xFD

#define CCP1M2                                   0x2
#define CCP1M2_address                           0x015
#define CCP1M2_position                          0x2
#define CCP1M2_size                              0x1
#define CCP1M2_value_mask                        0x4
#define CCP1M2_clear_mask                        0xFB

#define CCP1M3                                   0x3
#define CCP1M3_address                           0x015
#define CCP1M3_position                          0x3
#define CCP1M3_size                              0x1
#define CCP1M3_value_mask                        0x8
#define CCP1M3_clear_mask                        0xF7

#define DC1B                                     0x4
#define DC1B_address                             0x015
#define DC1B_position                            0x4
#define DC1B_size                                0x2
#define DC1B_value_mask                          0x30
#define DC1B_clear_mask                          0xCF

#define DC1B0                                    0x4
#define DC1B0_address                            0x015
#define DC1B0_position                           0x4
#define DC1B0_size                               0x1
#define DC1B0_value_mask                         0x10
#define DC1B0_clear_mask                         0xEF

#define DC1B1                                    0x5
#define DC1B1_address                            0x015
#define DC1B1_position                           0x5
#define DC1B1_size                               0x1
#define DC1B1_value_mask                         0x20
#define DC1B1_clear_mask                         0xDF


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


/*------------------------------#
| ADRESH                   0x1D |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define ADRESH                                   0x0
#define ADRESH_address                           0x01D
#define ADRESH_position                          0x0
#define ADRESH_size                              0x8
#define ADRESH_value_mask                        0xFF
#define ADRESH_clear_mask                        0x0


/*-------------------------------------------------------#
| ADCON0                                            0x1E |
#--------------------------------------------------------#
| ADFM | - | CHS3 | CHS2 | CHS1 | CHS0 | GO_nDONE | ADON |
#--------------------------------------------------------#
| 7    | 6 | 5    | 4    | 3    | 2    | 1        | 0    |
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

#define CHS                                      0x2
#define CHS_address                              0x01E
#define CHS_position                             0x2
#define CHS_size                                 0x4
#define CHS_value_mask                           0x3C
#define CHS_clear_mask                           0xC3

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

#define ADFM                                     0x7
#define ADFM_address                             0x01E
#define ADFM_position                            0x7
#define ADFM_size                                0x1
#define ADFM_value_mask                          0x80
#define ADFM_clear_mask                          0x7F


/*------------------------------------------------#
| ADCON1                                     0x1F |
#-------------------------------------------------#
| - | ADCS2 | ADCS1 | ADCS0 | - | - | - | ADPREF1 |
#-------------------------------------------------#
| 7 | 6     | 5     | 4     | 3 | 2 | 1 | 0       |
#------------------------------------------------*/

#define ADCON1                                   0x0
#define ADCON1_address                           0x01F
#define ADCON1_position                          0x0
#define ADCON1_size                              0x8
#define ADCON1_value_mask                        0xFF
#define ADCON1_clear_mask                        0x0

#define ADPREF1                                  0x0
#define ADPREF1_address                          0x01F
#define ADPREF1_position                         0x0
#define ADPREF1_size                             0x1
#define ADPREF1_value_mask                       0x1
#define ADPREF1_clear_mask                       0xFE

#define ADCS0                                    0x4
#define ADCS0_address                            0x01F
#define ADCS0_position                           0x4
#define ADCS0_size                               0x1
#define ADCS0_value_mask                         0x10
#define ADCS0_clear_mask                         0xEF

#define ADCS                                     0x4
#define ADCS_address                             0x01F
#define ADCS_position                            0x4
#define ADCS_size                                0x3
#define ADCS_value_mask                          0x70
#define ADCS_clear_mask                          0x8F

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


/*-----------------------------------------------------#
| OPTION_REG                                      0x81 |
#------------------------------------------------------#
| nRAPU | INTEDG | T0CS | T0SE | PSA | PS2 | PS1 | PS0 |
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

#define nRAPU                                    0x7
#define nRAPU_address                            0x081
#define nRAPU_position                           0x7
#define nRAPU_size                               0x1
#define nRAPU_value_mask                         0x80
#define nRAPU_clear_mask                         0x7F


/*------------------------------------------------------------#
| TRISA                                                  0x85 |
#-------------------------------------------------------------#
| - | - | TRISA5 | TRISA4 | TRISA3 | TRISA2 | TRISA1 | TRISA0 |
#-------------------------------------------------------------#
| 7 | 6 | 5      | 4      | 3      | 2      | 1      | 0      |
#------------------------------------------------------------*/

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


/*------------------------------------------------------------#
| TRISC                                                  0x87 |
#-------------------------------------------------------------#
| - | - | TRISC5 | TRISC4 | TRISC3 | TRISC2 | TRISC1 | TRISC0 |
#-------------------------------------------------------------#
| 7 | 6 | 5      | 4      | 3      | 2      | 1      | 0      |
#------------------------------------------------------------*/

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


/*------------------------------------------------------------#
| IOCAP                                                  0x88 |
#-------------------------------------------------------------#
| - | - | IOCAP5 | IOCAP4 | IOCAP3 | IOCAP2 | IOCAP1 | IOCAP0 |
#-------------------------------------------------------------#
| 7 | 6 | 5      | 4      | 3      | 2      | 1      | 0      |
#------------------------------------------------------------*/

#define IOCAP                                    0x0
#define IOCAP_address                            0x088
#define IOCAP_position                           0x0
#define IOCAP_size                               0x8
#define IOCAP_value_mask                         0xFF
#define IOCAP_clear_mask                         0x0

#define IOCAP0                                   0x0
#define IOCAP0_address                           0x088
#define IOCAP0_position                          0x0
#define IOCAP0_size                              0x1
#define IOCAP0_value_mask                        0x1
#define IOCAP0_clear_mask                        0xFE

#define IOCAP1                                   0x1
#define IOCAP1_address                           0x088
#define IOCAP1_position                          0x1
#define IOCAP1_size                              0x1
#define IOCAP1_value_mask                        0x2
#define IOCAP1_clear_mask                        0xFD

#define IOCAP2                                   0x2
#define IOCAP2_address                           0x088
#define IOCAP2_position                          0x2
#define IOCAP2_size                              0x1
#define IOCAP2_value_mask                        0x4
#define IOCAP2_clear_mask                        0xFB

#define IOCAP3                                   0x3
#define IOCAP3_address                           0x088
#define IOCAP3_position                          0x3
#define IOCAP3_size                              0x1
#define IOCAP3_value_mask                        0x8
#define IOCAP3_clear_mask                        0xF7

#define IOCAP4                                   0x4
#define IOCAP4_address                           0x088
#define IOCAP4_position                          0x4
#define IOCAP4_size                              0x1
#define IOCAP4_value_mask                        0x10
#define IOCAP4_clear_mask                        0xEF

#define IOCAP5                                   0x5
#define IOCAP5_address                           0x088
#define IOCAP5_position                          0x5
#define IOCAP5_size                              0x1
#define IOCAP5_value_mask                        0x20
#define IOCAP5_clear_mask                        0xDF


/*------------------------------------------------------------#
| IOCCP                                                  0x89 |
#-------------------------------------------------------------#
| - | - | IOCCP5 | IOCCP4 | IOCCP3 | IOCCP2 | IOCCP1 | IOCCP0 |
#-------------------------------------------------------------#
| 7 | 6 | 5      | 4      | 3      | 2      | 1      | 0      |
#------------------------------------------------------------*/

#define IOCCP                                    0x0
#define IOCCP_address                            0x089
#define IOCCP_position                           0x0
#define IOCCP_size                               0x8
#define IOCCP_value_mask                         0xFF
#define IOCCP_clear_mask                         0x0

#define IOCCP0                                   0x0
#define IOCCP0_address                           0x089
#define IOCCP0_position                          0x0
#define IOCCP0_size                              0x1
#define IOCCP0_value_mask                        0x1
#define IOCCP0_clear_mask                        0xFE

#define IOCCP1                                   0x1
#define IOCCP1_address                           0x089
#define IOCCP1_position                          0x1
#define IOCCP1_size                              0x1
#define IOCCP1_value_mask                        0x2
#define IOCCP1_clear_mask                        0xFD

#define IOCCP2                                   0x2
#define IOCCP2_address                           0x089
#define IOCCP2_position                          0x2
#define IOCCP2_size                              0x1
#define IOCCP2_value_mask                        0x4
#define IOCCP2_clear_mask                        0xFB

#define IOCCP3                                   0x3
#define IOCCP3_address                           0x089
#define IOCCP3_position                          0x3
#define IOCCP3_size                              0x1
#define IOCCP3_value_mask                        0x8
#define IOCCP3_clear_mask                        0xF7

#define IOCCP4                                   0x4
#define IOCCP4_address                           0x089
#define IOCCP4_position                          0x4
#define IOCCP4_size                              0x1
#define IOCCP4_value_mask                        0x10
#define IOCCP4_clear_mask                        0xEF

#define IOCCP5                                   0x5
#define IOCCP5_address                           0x089
#define IOCCP5_position                          0x5
#define IOCCP5_size                              0x1
#define IOCCP5_value_mask                        0x20
#define IOCCP5_clear_mask                        0xDF


/*---------------------------------------------------------------#
| PIE1                                                      0x8C |
#----------------------------------------------------------------#
| TMR1GIE | ADIE | - | - | HLTMR2IE | HLTMR1IE | TMR2IE | TMR1IE |
#----------------------------------------------------------------#
| 7       | 6    | 5 | 4 | 3        | 2        | 1      | 0      |
#---------------------------------------------------------------*/

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

#define HLTMR1IE                                 0x2
#define HLTMR1IE_address                         0x08C
#define HLTMR1IE_position                        0x2
#define HLTMR1IE_size                            0x1
#define HLTMR1IE_value_mask                      0x4
#define HLTMR1IE_clear_mask                      0xFB

#define HLTMR2IE                                 0x3
#define HLTMR2IE_address                         0x08C
#define HLTMR2IE_position                        0x3
#define HLTMR2IE_size                            0x1
#define HLTMR2IE_value_mask                      0x8
#define HLTMR2IE_clear_mask                      0xF7

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


/*----------------------------------------------#
| PIE2                                     0x8D |
#-----------------------------------------------#
| - | - | C2IE | C1IE | - | COG1IE | - | CCP1IE |
#-----------------------------------------------#
| 7 | 6 | 5    | 4    | 3 | 2      | 1 | 0      |
#----------------------------------------------*/

#define PIE2                                     0x0
#define PIE2_address                             0x08D
#define PIE2_position                            0x0
#define PIE2_size                                0x8
#define PIE2_value_mask                          0xFF
#define PIE2_clear_mask                          0x0

#define CCP1IE                                   0x0
#define CCP1IE_address                           0x08D
#define CCP1IE_position                          0x0
#define CCP1IE_size                              0x1
#define CCP1IE_value_mask                        0x1
#define CCP1IE_clear_mask                        0xFE

#define COG1IE                                   0x2
#define COG1IE_address                           0x08D
#define COG1IE_position                          0x2
#define COG1IE_size                              0x1
#define COG1IE_value_mask                        0x4
#define COG1IE_clear_mask                        0xFB

#define C1IE                                     0x4
#define C1IE_address                             0x08D
#define C1IE_position                            0x4
#define C1IE_size                                0x1
#define C1IE_value_mask                          0x10
#define C1IE_clear_mask                          0xEF

#define C2IE                                     0x5
#define C2IE_address                             0x08D
#define C2IE_position                            0x5
#define C2IE_size                                0x1
#define C2IE_value_mask                          0x20
#define C2IE_clear_mask                          0xDF


/*------------------------------------------#
| OSCCON                               0x8F |
#-------------------------------------------#
| - | - | IRCF1 | IRCF0 | - | HTS | LTS | - |
#-------------------------------------------#
| 7 | 6 | 5     | 4     | 3 | 2   | 1   | 0 |
#------------------------------------------*/

#define OSCCON                                   0x0
#define OSCCON_address                           0x08F
#define OSCCON_position                          0x0
#define OSCCON_size                              0x8
#define OSCCON_value_mask                        0xFF
#define OSCCON_clear_mask                        0x0

#define LTS                                      0x1
#define LTS_address                              0x08F
#define LTS_position                             0x1
#define LTS_size                                 0x1
#define LTS_value_mask                           0x2
#define LTS_clear_mask                           0xFD

#define HTS                                      0x2
#define HTS_address                              0x08F
#define HTS_position                             0x2
#define HTS_size                                 0x1
#define HTS_value_mask                           0x4
#define HTS_clear_mask                           0xFB

#define IRCF                                     0x4
#define IRCF_address                             0x08F
#define IRCF_position                            0x4
#define IRCF_size                                0x2
#define IRCF_value_mask                          0x30
#define IRCF_clear_mask                          0xCF

#define IRCF0                                    0x4
#define IRCF0_address                            0x08F
#define IRCF0_position                           0x4
#define IRCF0_size                               0x1
#define IRCF0_value_mask                         0x10
#define IRCF0_clear_mask                         0xEF

#define IRCF1                                    0x5
#define IRCF1_address                            0x08F
#define IRCF1_position                           0x5
#define IRCF1_size                               0x1
#define IRCF1_value_mask                         0x20
#define IRCF1_clear_mask                         0xDF


/*----------------------------------------------------------------#
| FVR1CON0                                                   0x90 |
#-----------------------------------------------------------------#
| FVREN | FVRRDY | FVROE | FVRBUSS1 | FVRBUSS0 | - | - | FVRBUFEN |
#-----------------------------------------------------------------#
| 7     | 6      | 5     | 4        | 3        | 2 | 1 | 0        |
#----------------------------------------------------------------*/

#define FVR1CON0                                 0x0
#define FVR1CON0_address                         0x090
#define FVR1CON0_position                        0x0
#define FVR1CON0_size                            0x8
#define FVR1CON0_value_mask                      0xFF
#define FVR1CON0_clear_mask                      0x0

#define FVRBUFEN                                 0x0
#define FVRBUFEN_address                         0x090
#define FVRBUFEN_position                        0x0
#define FVRBUFEN_size                            0x1
#define FVRBUFEN_value_mask                      0x1
#define FVRBUFEN_clear_mask                      0xFE

#define FVRBUFSS0                                0x3
#define FVRBUFSS0_address                        0x090
#define FVRBUFSS0_position                       0x3
#define FVRBUFSS0_size                           0x2
#define FVRBUFSS0_value_mask                     0x18
#define FVRBUFSS0_clear_mask                     0xE7

#define FVRBUSS0                                 0x3
#define FVRBUSS0_address                         0x090
#define FVRBUSS0_position                        0x3
#define FVRBUSS0_size                            0x1
#define FVRBUSS0_value_mask                      0x8
#define FVRBUSS0_clear_mask                      0xF7

#define FVRBUSS1                                 0x4
#define FVRBUSS1_address                         0x090
#define FVRBUSS1_position                        0x4
#define FVRBUSS1_size                            0x1
#define FVRBUSS1_value_mask                      0x10
#define FVRBUSS1_clear_mask                      0xEF

#define FVROE                                    0x5
#define FVROE_address                            0x090
#define FVROE_position                           0x5
#define FVROE_size                               0x1
#define FVROE_value_mask                         0x20
#define FVROE_clear_mask                         0xDF

#define FVRRDY                                   0x6
#define FVRRDY_address                           0x090
#define FVRRDY_position                          0x6
#define FVRRDY_size                              0x1
#define FVRRDY_value_mask                        0x40
#define FVRRDY_clear_mask                        0xBF

#define FVREN                                    0x7
#define FVREN_address                            0x090
#define FVREN_position                           0x7
#define FVREN_size                               0x1
#define FVREN_value_mask                         0x80
#define FVREN_clear_mask                         0x7F


/*------------------------------------------------------#
| DAC1CON0                                         0x91 |
#-------------------------------------------------------#
| DACEN | DACFM | DACOE | - | DACPSS1 | DACPSS0 | - | - |
#-------------------------------------------------------#
| 7     | 6     | 5     | 4 | 3       | 2       | 1 | 0 |
#------------------------------------------------------*/

#define DAC1CON0                                 0x0
#define DAC1CON0_address                         0x091
#define DAC1CON0_position                        0x0
#define DAC1CON0_size                            0x8
#define DAC1CON0_value_mask                      0xFF
#define DAC1CON0_clear_mask                      0x0

#define DACPSS                                   0x2
#define DACPSS_address                           0x091
#define DACPSS_position                          0x2
#define DACPSS_size                              0x2
#define DACPSS_value_mask                        0xC
#define DACPSS_clear_mask                        0xF3

#define DACPSS0                                  0x2
#define DACPSS0_address                          0x091
#define DACPSS0_position                         0x2
#define DACPSS0_size                             0x1
#define DACPSS0_value_mask                       0x4
#define DACPSS0_clear_mask                       0xFB

#define DACPSS1                                  0x3
#define DACPSS1_address                          0x091
#define DACPSS1_position                         0x3
#define DACPSS1_size                             0x1
#define DACPSS1_value_mask                       0x8
#define DACPSS1_clear_mask                       0xF7

#define DACOE                                    0x5
#define DACOE_address                            0x091
#define DACOE_position                           0x5
#define DACOE_size                               0x1
#define DACOE_value_mask                         0x20
#define DACOE_clear_mask                         0xDF

#define DACFM                                    0x6
#define DACFM_address                            0x091
#define DACFM_position                           0x6
#define DACFM_size                               0x1
#define DACFM_value_mask                         0x40
#define DACFM_clear_mask                         0xBF

#define DACEN                                    0x7
#define DACEN_address                            0x091
#define DACEN_position                           0x7
#define DACEN_size                               0x1
#define DACEN_value_mask                         0x80
#define DACEN_clear_mask                         0x7F


/*------------------------------#
| DAC1REFL                 0x92 |
#-------------------------------#
| DAC1REFL_DACR                 |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define DAC1REFL                                 0x0
#define DAC1REFL_address                         0x092
#define DAC1REFL_position                        0x0
#define DAC1REFL_size                            0x8
#define DAC1REFL_value_mask                      0xFF
#define DAC1REFL_clear_mask                      0x0

#define DAC1REFL_DACR                            0x0
#define DAC1REFL_DACR_address                    0x092
#define DAC1REFL_DACR_position                   0x0
#define DAC1REFL_DACR_size                       0x8
#define DAC1REFL_DACR_value_mask                 0xFF
#define DAC1REFL_DACR_clear_mask                 0x0


/*------------------------------#
| DAC1REFH                 0x93 |
#-------------------------------#
| DAC1REFH_DACR                 |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define DAC1REFH                                 0x0
#define DAC1REFH_address                         0x093
#define DAC1REFH_position                        0x0
#define DAC1REFH_size                            0x8
#define DAC1REFH_value_mask                      0xFF
#define DAC1REFH_clear_mask                      0x0

#define DAC1REFH_DACR                            0x0
#define DAC1REFH_DACR_address                    0x093
#define DAC1REFH_DACR_position                   0x0
#define DAC1REFH_DACR_size                       0x8
#define DAC1REFH_DACR_value_mask                 0xFF
#define DAC1REFH_DACR_clear_mask                 0x0


/*-------------------------------------------------------------------#
| OPA1CON                                                       0x96 |
#--------------------------------------------------------------------#
| OPAEN | - | - | OPAUGM | OPA1NCH1 | OPA1NCH0 | OPA1PCH1 | OPA1PCH0 |
#--------------------------------------------------------------------#
| 7     | 6 | 5 | 4      | 3        | 2        | 1        | 0        |
#-------------------------------------------------------------------*/

#define OPA1CON                                  0x0
#define OPA1CON_address                          0x096
#define OPA1CON_position                         0x0
#define OPA1CON_size                             0x8
#define OPA1CON_value_mask                       0xFF
#define OPA1CON_clear_mask                       0x0

#define OPA1PCH                                  0x0
#define OPA1PCH_address                          0x096
#define OPA1PCH_position                         0x0
#define OPA1PCH_size                             0x2
#define OPA1PCH_value_mask                       0x3
#define OPA1PCH_clear_mask                       0xFC

#define OPA1PCH0                                 0x0
#define OPA1PCH0_address                         0x096
#define OPA1PCH0_position                        0x0
#define OPA1PCH0_size                            0x1
#define OPA1PCH0_value_mask                      0x1
#define OPA1PCH0_clear_mask                      0xFE

#define OPA1PCH1                                 0x1
#define OPA1PCH1_address                         0x096
#define OPA1PCH1_position                        0x1
#define OPA1PCH1_size                            0x1
#define OPA1PCH1_value_mask                      0x2
#define OPA1PCH1_clear_mask                      0xFD

#define OPA1NCH0                                 0x2
#define OPA1NCH0_address                         0x096
#define OPA1NCH0_position                        0x2
#define OPA1NCH0_size                            0x1
#define OPA1NCH0_value_mask                      0x4
#define OPA1NCH0_clear_mask                      0xFB

#define OPA1NCH                                  0x2
#define OPA1NCH_address                          0x096
#define OPA1NCH_position                         0x2
#define OPA1NCH_size                             0x2
#define OPA1NCH_value_mask                       0xC
#define OPA1NCH_clear_mask                       0xF3

#define OPA1NCH1                                 0x3
#define OPA1NCH1_address                         0x096
#define OPA1NCH1_position                        0x3
#define OPA1NCH1_size                            0x1
#define OPA1NCH1_value_mask                      0x8
#define OPA1NCH1_clear_mask                      0xF7

#define OPAUGM                                   0x4
#define OPAUGM_address                           0x096
#define OPAUGM_position                          0x4
#define OPAUGM_size                              0x1
#define OPAUGM_value_mask                        0x10
#define OPAUGM_clear_mask                        0xEF

#define OPAEN                                    0x7
#define OPAEN_address                            0x096
#define OPAEN_position                           0x7
#define OPAEN_size                               0x1
#define OPAEN_value_mask                         0x80
#define OPAEN_clear_mask                         0x7F


/*------------------------------------------------------------#
| CM2CON0                                                0x9B |
#-------------------------------------------------------------#
| C2ON | C2OUT | C2OE | C2POL | C2ZLF | C2SP | C2HYS | C2SYNC |
#-------------------------------------------------------------#
| 7    | 6     | 5    | 4     | 3     | 2    | 1     | 0      |
#------------------------------------------------------------*/

#define CM2CON0                                  0x0
#define CM2CON0_address                          0x09B
#define CM2CON0_position                         0x0
#define CM2CON0_size                             0x8
#define CM2CON0_value_mask                       0xFF
#define CM2CON0_clear_mask                       0x0

#define C2SYNC                                   0x0
#define C2SYNC_address                           0x09B
#define C2SYNC_position                          0x0
#define C2SYNC_size                              0x1
#define C2SYNC_value_mask                        0x1
#define C2SYNC_clear_mask                        0xFE

#define C2HYS                                    0x1
#define C2HYS_address                            0x09B
#define C2HYS_position                           0x1
#define C2HYS_size                               0x1
#define C2HYS_value_mask                         0x2
#define C2HYS_clear_mask                         0xFD

#define C2SP                                     0x2
#define C2SP_address                             0x09B
#define C2SP_position                            0x2
#define C2SP_size                                0x1
#define C2SP_value_mask                          0x4
#define C2SP_clear_mask                          0xFB

#define C2ZLF                                    0x3
#define C2ZLF_address                            0x09B
#define C2ZLF_position                           0x3
#define C2ZLF_size                               0x1
#define C2ZLF_value_mask                         0x8
#define C2ZLF_clear_mask                         0xF7

#define C2POL                                    0x4
#define C2POL_address                            0x09B
#define C2POL_position                           0x4
#define C2POL_size                               0x1
#define C2POL_value_mask                         0x10
#define C2POL_clear_mask                         0xEF

#define C2OE                                     0x5
#define C2OE_address                             0x09B
#define C2OE_position                            0x5
#define C2OE_size                                0x1
#define C2OE_value_mask                          0x20
#define C2OE_clear_mask                          0xDF

#define C2OUT                                    0x6
#define C2OUT_address                            0x09B
#define C2OUT_position                           0x6
#define C2OUT_size                               0x1
#define C2OUT_value_mask                         0x40
#define C2OUT_clear_mask                         0xBF

#define C2ON                                     0x7
#define C2ON_address                             0x09B
#define C2ON_position                            0x7
#define C2ON_size                                0x1
#define C2ON_value_mask                          0x80
#define C2ON_clear_mask                          0x7F


/*----------------------------------------------------------------------#
| CM2CON1                                                          0x9C |
#-----------------------------------------------------------------------#
| C2INTP | C2INTN | C2PCH2 | C2PCH1 | C2PCH0 | C2NCH2 | C2NCH1 | C2NCH0 |
#-----------------------------------------------------------------------#
| 7      | 6      | 5      | 4      | 3      | 2      | 1      | 0      |
#----------------------------------------------------------------------*/

#define CM2CON1                                  0x0
#define CM2CON1_address                          0x09C
#define CM2CON1_position                         0x0
#define CM2CON1_size                             0x8
#define CM2CON1_value_mask                       0xFF
#define CM2CON1_clear_mask                       0x0

#define C2NCH0                                   0x0
#define C2NCH0_address                           0x09C
#define C2NCH0_position                          0x0
#define C2NCH0_size                              0x1
#define C2NCH0_value_mask                        0x1
#define C2NCH0_clear_mask                        0xFE

#define C2NCH                                    0x0
#define C2NCH_address                            0x09C
#define C2NCH_position                           0x0
#define C2NCH_size                               0x3
#define C2NCH_value_mask                         0x7
#define C2NCH_clear_mask                         0xF8

#define C2NCH1                                   0x1
#define C2NCH1_address                           0x09C
#define C2NCH1_position                          0x1
#define C2NCH1_size                              0x1
#define C2NCH1_value_mask                        0x2
#define C2NCH1_clear_mask                        0xFD

#define C2NCH2                                   0x2
#define C2NCH2_address                           0x09C
#define C2NCH2_position                          0x2
#define C2NCH2_size                              0x1
#define C2NCH2_value_mask                        0x4
#define C2NCH2_clear_mask                        0xFB

#define C2PCH                                    0x3
#define C2PCH_address                            0x09C
#define C2PCH_position                           0x3
#define C2PCH_size                               0x3
#define C2PCH_value_mask                         0x38
#define C2PCH_clear_mask                         0xC7

#define C2PCH0                                   0x3
#define C2PCH0_address                           0x09C
#define C2PCH0_position                          0x3
#define C2PCH0_size                              0x1
#define C2PCH0_value_mask                        0x8
#define C2PCH0_clear_mask                        0xF7

#define C2PCH1                                   0x4
#define C2PCH1_address                           0x09C
#define C2PCH1_position                          0x4
#define C2PCH1_size                              0x1
#define C2PCH1_value_mask                        0x10
#define C2PCH1_clear_mask                        0xEF

#define C2PCH2                                   0x5
#define C2PCH2_address                           0x09C
#define C2PCH2_position                          0x5
#define C2PCH2_size                              0x1
#define C2PCH2_value_mask                        0x20
#define C2PCH2_clear_mask                        0xDF

#define C2INTN                                   0x6
#define C2INTN_address                           0x09C
#define C2INTN_position                          0x6
#define C2INTN_size                              0x1
#define C2INTN_value_mask                        0x40
#define C2INTN_clear_mask                        0xBF

#define C2INTP                                   0x7
#define C2INTP_address                           0x09C
#define C2INTP_position                          0x7
#define C2INTP_size                              0x1
#define C2INTP_value_mask                        0x80
#define C2INTP_clear_mask                        0x7F


/*------------------------------------------------------------#
| CM1CON0                                                0x9D |
#-------------------------------------------------------------#
| C1ON | C1OUT | C1OE | C1POL | C1ZLF | C1SP | C1HYS | C1SYNC |
#-------------------------------------------------------------#
| 7    | 6     | 5    | 4     | 3     | 2    | 1     | 0      |
#------------------------------------------------------------*/

#define CM1CON0                                  0x0
#define CM1CON0_address                          0x09D
#define CM1CON0_position                         0x0
#define CM1CON0_size                             0x8
#define CM1CON0_value_mask                       0xFF
#define CM1CON0_clear_mask                       0x0

#define C1SYNC                                   0x0
#define C1SYNC_address                           0x09D
#define C1SYNC_position                          0x0
#define C1SYNC_size                              0x1
#define C1SYNC_value_mask                        0x1
#define C1SYNC_clear_mask                        0xFE

#define C1HYS                                    0x1
#define C1HYS_address                            0x09D
#define C1HYS_position                           0x1
#define C1HYS_size                               0x1
#define C1HYS_value_mask                         0x2
#define C1HYS_clear_mask                         0xFD

#define C1SP                                     0x2
#define C1SP_address                             0x09D
#define C1SP_position                            0x2
#define C1SP_size                                0x1
#define C1SP_value_mask                          0x4
#define C1SP_clear_mask                          0xFB

#define C1ZLF                                    0x3
#define C1ZLF_address                            0x09D
#define C1ZLF_position                           0x3
#define C1ZLF_size                               0x1
#define C1ZLF_value_mask                         0x8
#define C1ZLF_clear_mask                         0xF7

#define C1POL                                    0x4
#define C1POL_address                            0x09D
#define C1POL_position                           0x4
#define C1POL_size                               0x1
#define C1POL_value_mask                         0x10
#define C1POL_clear_mask                         0xEF

#define C1OE                                     0x5
#define C1OE_address                             0x09D
#define C1OE_position                            0x5
#define C1OE_size                                0x1
#define C1OE_value_mask                          0x20
#define C1OE_clear_mask                          0xDF

#define C1OUT                                    0x6
#define C1OUT_address                            0x09D
#define C1OUT_position                           0x6
#define C1OUT_size                               0x1
#define C1OUT_value_mask                         0x40
#define C1OUT_clear_mask                         0xBF

#define C1ON                                     0x7
#define C1ON_address                             0x09D
#define C1ON_position                            0x7
#define C1ON_size                                0x1
#define C1ON_value_mask                          0x80
#define C1ON_clear_mask                          0x7F


/*----------------------------------------------------------------------#
| CM1CON1                                                          0x9E |
#-----------------------------------------------------------------------#
| C1INTP | C1INTN | C1PCH2 | C1PCH1 | C1PCH0 | C1NCH2 | C1NCH1 | C1NCH0 |
#-----------------------------------------------------------------------#
| 7      | 6      | 5      | 4      | 3      | 2      | 1      | 0      |
#----------------------------------------------------------------------*/

#define CM1CON1                                  0x0
#define CM1CON1_address                          0x09E
#define CM1CON1_position                         0x0
#define CM1CON1_size                             0x8
#define CM1CON1_value_mask                       0xFF
#define CM1CON1_clear_mask                       0x0

#define C1NCH0                                   0x0
#define C1NCH0_address                           0x09E
#define C1NCH0_position                          0x0
#define C1NCH0_size                              0x1
#define C1NCH0_value_mask                        0x1
#define C1NCH0_clear_mask                        0xFE

#define C1NCH                                    0x0
#define C1NCH_address                            0x09E
#define C1NCH_position                           0x0
#define C1NCH_size                               0x3
#define C1NCH_value_mask                         0x7
#define C1NCH_clear_mask                         0xF8

#define C1NCH1                                   0x1
#define C1NCH1_address                           0x09E
#define C1NCH1_position                          0x1
#define C1NCH1_size                              0x1
#define C1NCH1_value_mask                        0x2
#define C1NCH1_clear_mask                        0xFD

#define C1NCH2                                   0x2
#define C1NCH2_address                           0x09E
#define C1NCH2_position                          0x2
#define C1NCH2_size                              0x1
#define C1NCH2_value_mask                        0x4
#define C1NCH2_clear_mask                        0xFB

#define C1PCH                                    0x3
#define C1PCH_address                            0x09E
#define C1PCH_position                           0x3
#define C1PCH_size                               0x3
#define C1PCH_value_mask                         0x38
#define C1PCH_clear_mask                         0xC7

#define C1PCH0                                   0x3
#define C1PCH0_address                           0x09E
#define C1PCH0_position                          0x3
#define C1PCH0_size                              0x1
#define C1PCH0_value_mask                        0x8
#define C1PCH0_clear_mask                        0xF7

#define C1PCH1                                   0x4
#define C1PCH1_address                           0x09E
#define C1PCH1_position                          0x4
#define C1PCH1_size                              0x1
#define C1PCH1_value_mask                        0x10
#define C1PCH1_clear_mask                        0xEF

#define C1PCH2                                   0x5
#define C1PCH2_address                           0x09E
#define C1PCH2_position                          0x5
#define C1PCH2_size                              0x1
#define C1PCH2_value_mask                        0x20
#define C1PCH2_clear_mask                        0xDF

#define C1INTN                                   0x6
#define C1INTN_address                           0x09E
#define C1INTN_position                          0x6
#define C1INTN_size                              0x1
#define C1INTN_value_mask                        0x40
#define C1INTN_clear_mask                        0xBF

#define C1INTP                                   0x7
#define C1INTP_address                           0x09E
#define C1INTP_position                          0x7
#define C1INTP_size                              0x1
#define C1INTP_value_mask                        0x80
#define C1INTP_clear_mask                        0x7F


/*----------------------------------------#
| CMOUT                              0x9F |
#-----------------------------------------#
| - | - | - | - | - | - | MCOUT2 | MCOUT1 |
#-----------------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1      | 0      |
#----------------------------------------*/

#define CMOUT                                    0x0
#define CMOUT_address                            0x09F
#define CMOUT_position                           0x0
#define CMOUT_size                               0x8
#define CMOUT_value_mask                         0xFF
#define CMOUT_clear_mask                         0x0

#define MCOUT1                                   0x0
#define MCOUT1_address                           0x09F
#define MCOUT1_position                          0x0
#define MCOUT1_size                              0x1
#define MCOUT1_value_mask                        0x1
#define MCOUT1_clear_mask                        0xFE

#define MCOUT2                                   0x1
#define MCOUT2_address                           0x09F
#define MCOUT2_position                          0x1
#define MCOUT2_size                              0x1
#define MCOUT2_value_mask                        0x2
#define MCOUT2_clear_mask                        0xFD


/*--------------------------------------------------#
| LATA                                        0x105 |
#---------------------------------------------------#
| - | - | LATA5 | LATA4 | - | LATA2 | LATA1 | LATA0 |
#---------------------------------------------------#
| 7 | 6 | 5     | 4     | 3 | 2     | 1     | 0     |
#--------------------------------------------------*/

#define LATA                                     0x0
#define LATA_address                             0x105
#define LATA_position                            0x0
#define LATA_size                                0x8
#define LATA_value_mask                          0xFF
#define LATA_clear_mask                          0x0

#define LATA0                                    0x0
#define LATA0_address                            0x105
#define LATA0_position                           0x0
#define LATA0_size                               0x1
#define LATA0_value_mask                         0x1
#define LATA0_clear_mask                         0xFE

#define LATA1                                    0x1
#define LATA1_address                            0x105
#define LATA1_position                           0x1
#define LATA1_size                               0x1
#define LATA1_value_mask                         0x2
#define LATA1_clear_mask                         0xFD

#define LATA2                                    0x2
#define LATA2_address                            0x105
#define LATA2_position                           0x2
#define LATA2_size                               0x1
#define LATA2_value_mask                         0x4
#define LATA2_clear_mask                         0xFB

#define LATA4                                    0x4
#define LATA4_address                            0x105
#define LATA4_position                           0x4
#define LATA4_size                               0x1
#define LATA4_value_mask                         0x10
#define LATA4_clear_mask                         0xEF

#define LATA5                                    0x5
#define LATA5_address                            0x105
#define LATA5_position                           0x5
#define LATA5_size                               0x1
#define LATA5_value_mask                         0x20
#define LATA5_clear_mask                         0xDF


/*------------------------------------------------------#
| LATC                                            0x107 |
#-------------------------------------------------------#
| - | - | LATC5 | LATC4 | LATC3 | LATC2 | LATC1 | LATC0 |
#-------------------------------------------------------#
| 7 | 6 | 5     | 4     | 3     | 2     | 1     | 0     |
#------------------------------------------------------*/

#define LATC                                     0x0
#define LATC_address                             0x107
#define LATC_position                            0x0
#define LATC_size                                0x8
#define LATC_value_mask                          0xFF
#define LATC_clear_mask                          0x0

#define LATC0                                    0x0
#define LATC0_address                            0x107
#define LATC0_position                           0x0
#define LATC0_size                               0x1
#define LATC0_value_mask                         0x1
#define LATC0_clear_mask                         0xFE

#define LATC1                                    0x1
#define LATC1_address                            0x107
#define LATC1_position                           0x1
#define LATC1_size                               0x1
#define LATC1_value_mask                         0x2
#define LATC1_clear_mask                         0xFD

#define LATC2                                    0x2
#define LATC2_address                            0x107
#define LATC2_position                           0x2
#define LATC2_size                               0x1
#define LATC2_value_mask                         0x4
#define LATC2_clear_mask                         0xFB

#define LATC3                                    0x3
#define LATC3_address                            0x107
#define LATC3_position                           0x3
#define LATC3_size                               0x1
#define LATC3_value_mask                         0x8
#define LATC3_clear_mask                         0xF7

#define LATC4                                    0x4
#define LATC4_address                            0x107
#define LATC4_position                           0x4
#define LATC4_size                               0x1
#define LATC4_value_mask                         0x10
#define LATC4_clear_mask                         0xEF

#define LATC5                                    0x5
#define LATC5_address                            0x107
#define LATC5_position                           0x5
#define LATC5_size                               0x1
#define LATC5_value_mask                         0x20
#define LATC5_clear_mask                         0xDF


/*------------------------------------------------------------#
| IOCAN                                                 0x108 |
#-------------------------------------------------------------#
| - | - | IOCAN5 | IOCAN4 | IOCAN3 | IOCAN2 | IOCAN1 | IOCAN0 |
#-------------------------------------------------------------#
| 7 | 6 | 5      | 4      | 3      | 2      | 1      | 0      |
#------------------------------------------------------------*/

#define IOCAN                                    0x0
#define IOCAN_address                            0x108
#define IOCAN_position                           0x0
#define IOCAN_size                               0x8
#define IOCAN_value_mask                         0xFF
#define IOCAN_clear_mask                         0x0

#define IOCAN0                                   0x0
#define IOCAN0_address                           0x108
#define IOCAN0_position                          0x0
#define IOCAN0_size                              0x1
#define IOCAN0_value_mask                        0x1
#define IOCAN0_clear_mask                        0xFE

#define IOCAN1                                   0x1
#define IOCAN1_address                           0x108
#define IOCAN1_position                          0x1
#define IOCAN1_size                              0x1
#define IOCAN1_value_mask                        0x2
#define IOCAN1_clear_mask                        0xFD

#define IOCAN2                                   0x2
#define IOCAN2_address                           0x108
#define IOCAN2_position                          0x2
#define IOCAN2_size                              0x1
#define IOCAN2_value_mask                        0x4
#define IOCAN2_clear_mask                        0xFB

#define IOCAN3                                   0x3
#define IOCAN3_address                           0x108
#define IOCAN3_position                          0x3
#define IOCAN3_size                              0x1
#define IOCAN3_value_mask                        0x8
#define IOCAN3_clear_mask                        0xF7

#define IOCAN4                                   0x4
#define IOCAN4_address                           0x108
#define IOCAN4_position                          0x4
#define IOCAN4_size                              0x1
#define IOCAN4_value_mask                        0x10
#define IOCAN4_clear_mask                        0xEF

#define IOCAN5                                   0x5
#define IOCAN5_address                           0x108
#define IOCAN5_position                          0x5
#define IOCAN5_size                              0x1
#define IOCAN5_value_mask                        0x20
#define IOCAN5_clear_mask                        0xDF


/*------------------------------------------------------------#
| IOCCN                                                 0x109 |
#-------------------------------------------------------------#
| - | - | IOCCN5 | IOCCN4 | IOCCN3 | IOCCN2 | IOCCN1 | IOCCN0 |
#-------------------------------------------------------------#
| 7 | 6 | 5      | 4      | 3      | 2      | 1      | 0      |
#------------------------------------------------------------*/

#define IOCCN                                    0x0
#define IOCCN_address                            0x109
#define IOCCN_position                           0x0
#define IOCCN_size                               0x8
#define IOCCN_value_mask                         0xFF
#define IOCCN_clear_mask                         0x0

#define IOCCN0                                   0x0
#define IOCCN0_address                           0x109
#define IOCCN0_position                          0x0
#define IOCCN0_size                              0x1
#define IOCCN0_value_mask                        0x1
#define IOCCN0_clear_mask                        0xFE

#define IOCCN1                                   0x1
#define IOCCN1_address                           0x109
#define IOCCN1_position                          0x1
#define IOCCN1_size                              0x1
#define IOCCN1_value_mask                        0x2
#define IOCCN1_clear_mask                        0xFD

#define IOCCN2                                   0x2
#define IOCCN2_address                           0x109
#define IOCCN2_position                          0x2
#define IOCCN2_size                              0x1
#define IOCCN2_value_mask                        0x4
#define IOCCN2_clear_mask                        0xFB

#define IOCCN3                                   0x3
#define IOCCN3_address                           0x109
#define IOCCN3_position                          0x3
#define IOCCN3_size                              0x1
#define IOCCN3_value_mask                        0x8
#define IOCCN3_clear_mask                        0xF7

#define IOCCN4                                   0x4
#define IOCCN4_address                           0x109
#define IOCCN4_position                          0x4
#define IOCCN4_size                              0x1
#define IOCCN4_value_mask                        0x10
#define IOCCN4_clear_mask                        0xEF

#define IOCCN5                                   0x5
#define IOCCN5_address                           0x109
#define IOCCN5_position                          0x5
#define IOCCN5_size                              0x1
#define IOCCN5_value_mask                        0x20
#define IOCCN5_clear_mask                        0xDF


/*------------------------------------------------------#
| WPUA                                            0x10C |
#-------------------------------------------------------#
| - | - | WPUA5 | WPUA4 | WPUA3 | WPUA2 | WPUA1 | WPUA0 |
#-------------------------------------------------------#
| 7 | 6 | 5     | 4     | 3     | 2     | 1     | 0     |
#------------------------------------------------------*/

#define WPUA                                     0x0
#define WPUA_address                             0x10C
#define WPUA_position                            0x0
#define WPUA_size                                0x8
#define WPUA_value_mask                          0xFF
#define WPUA_clear_mask                          0x0

#define WPUA0                                    0x0
#define WPUA0_address                            0x10C
#define WPUA0_position                           0x0
#define WPUA0_size                               0x1
#define WPUA0_value_mask                         0x1
#define WPUA0_clear_mask                         0xFE

#define WPUA1                                    0x1
#define WPUA1_address                            0x10C
#define WPUA1_position                           0x1
#define WPUA1_size                               0x1
#define WPUA1_value_mask                         0x2
#define WPUA1_clear_mask                         0xFD

#define WPUA2                                    0x2
#define WPUA2_address                            0x10C
#define WPUA2_position                           0x2
#define WPUA2_size                               0x1
#define WPUA2_value_mask                         0x4
#define WPUA2_clear_mask                         0xFB

#define WPUA3                                    0x3
#define WPUA3_address                            0x10C
#define WPUA3_position                           0x3
#define WPUA3_size                               0x1
#define WPUA3_value_mask                         0x8
#define WPUA3_clear_mask                         0xF7

#define WPUA4                                    0x4
#define WPUA4_address                            0x10C
#define WPUA4_position                           0x4
#define WPUA4_size                               0x1
#define WPUA4_value_mask                         0x10
#define WPUA4_clear_mask                         0xEF

#define WPUA5                                    0x5
#define WPUA5_address                            0x10C
#define WPUA5_position                           0x5
#define WPUA5_size                               0x1
#define WPUA5_value_mask                         0x20
#define WPUA5_clear_mask                         0xDF


/*------------------------------------------------------#
| WPUC                                            0x10D |
#-------------------------------------------------------#
| - | - | WPUC5 | WPUC4 | WPUC3 | WPUC2 | WPUC1 | WPUC0 |
#-------------------------------------------------------#
| 7 | 6 | 5     | 4     | 3     | 2     | 1     | 0     |
#------------------------------------------------------*/

#define WPUC                                     0x0
#define WPUC_address                             0x10D
#define WPUC_position                            0x0
#define WPUC_size                                0x8
#define WPUC_value_mask                          0xFF
#define WPUC_clear_mask                          0x0

#define WPUC0                                    0x0
#define WPUC0_address                            0x10D
#define WPUC0_position                           0x0
#define WPUC0_size                               0x1
#define WPUC0_value_mask                         0x1
#define WPUC0_clear_mask                         0xFE

#define WPUC1                                    0x1
#define WPUC1_address                            0x10D
#define WPUC1_position                           0x1
#define WPUC1_size                               0x1
#define WPUC1_value_mask                         0x2
#define WPUC1_clear_mask                         0xFD

#define WPUC2                                    0x2
#define WPUC2_address                            0x10D
#define WPUC2_position                           0x2
#define WPUC2_size                               0x1
#define WPUC2_value_mask                         0x4
#define WPUC2_clear_mask                         0xFB

#define WPUC3                                    0x3
#define WPUC3_address                            0x10D
#define WPUC3_position                           0x3
#define WPUC3_size                               0x1
#define WPUC3_value_mask                         0x8
#define WPUC3_clear_mask                         0xF7

#define WPUC4                                    0x4
#define WPUC4_address                            0x10D
#define WPUC4_position                           0x4
#define WPUC4_size                               0x1
#define WPUC4_value_mask                         0x10
#define WPUC4_clear_mask                         0xEF

#define WPUC5                                    0x5
#define WPUC5_address                            0x10D
#define WPUC5_position                           0x5
#define WPUC5_size                               0x1
#define WPUC5_value_mask                         0x20
#define WPUC5_clear_mask                         0xDF


/*--------------------------------------#
| SLRCONC                         0x10E |
#---------------------------------------#
| - | - | SLRC5 | SLRC4 | - | - | - | - |
#---------------------------------------#
| 7 | 6 | 5     | 4     | 3 | 2 | 1 | 0 |
#--------------------------------------*/

#define SLRCONC                                  0x0
#define SLRCONC_address                          0x10E
#define SLRCONC_position                         0x0
#define SLRCONC_size                             0x8
#define SLRCONC_value_mask                       0xFF
#define SLRCONC_clear_mask                       0x0

#define SLRC4                                    0x4
#define SLRC4_address                            0x10E
#define SLRC4_position                           0x4
#define SLRC4_size                               0x1
#define SLRC4_value_mask                         0x10
#define SLRC4_clear_mask                         0xEF

#define SLRC5                                    0x5
#define SLRC5_address                            0x10E
#define SLRC5_position                           0x5
#define SLRC5_size                               0x1
#define SLRC5_value_mask                         0x20
#define SLRC5_clear_mask                         0xDF


/*------------------------------------#
| PCON                          0x10F |
#-------------------------------------#
| - | - | - | - | - | - | nPOR | nBOR |
#-------------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1    | 0    |
#------------------------------------*/

#define PCON                                     0x0
#define PCON_address                             0x10F
#define PCON_position                            0x0
#define PCON_size                                0x8
#define PCON_value_mask                          0xFF
#define PCON_clear_mask                          0x0

#define nBOR                                     0x0
#define nBOR_address                             0x10F
#define nBOR_position                            0x0
#define nBOR_size                                0x1
#define nBOR_value_mask                          0x1
#define nBOR_clear_mask                          0xFE

#define nPOR                                     0x1
#define nPOR_address                             0x10F
#define nPOR_position                            0x1
#define nPOR_size                                0x1
#define nPOR_value_mask                          0x2
#define nPOR_clear_mask                          0xFD


/*------------------------------#
| TMR2                    0x110 |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define TMR2                                     0x0
#define TMR2_address                             0x110
#define TMR2_position                            0x0
#define TMR2_size                                0x8
#define TMR2_value_mask                          0xFF
#define TMR2_clear_mask                          0x0


/*------------------------------#
| PR2                     0x111 |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define PR2                                      0x0
#define PR2_address                              0x111
#define PR2_position                             0x0
#define PR2_size                                 0x8
#define PR2_value_mask                           0xFF
#define PR2_clear_mask                           0x0


/*---------------------------------------------------------------------------#
| T2CON                                                                0x112 |
#----------------------------------------------------------------------------#
| - | T2OUTPS3 | T2OUTPS2 | T2OUTPS1 | T2OUTPS0 | TMR2ON | T2CKPS1 | T2CKPS0 |
#----------------------------------------------------------------------------#
| 7 | 6        | 5        | 4        | 3        | 2      | 1       | 0       |
#---------------------------------------------------------------------------*/

#define T2CON                                    0x0
#define T2CON_address                            0x112
#define T2CON_position                           0x0
#define T2CON_size                               0x8
#define T2CON_value_mask                         0xFF
#define T2CON_clear_mask                         0x0

#define T2CKPS0                                  0x0
#define T2CKPS0_address                          0x112
#define T2CKPS0_position                         0x0
#define T2CKPS0_size                             0x1
#define T2CKPS0_value_mask                       0x1
#define T2CKPS0_clear_mask                       0xFE

#define T2CKPS                                   0x0
#define T2CKPS_address                           0x112
#define T2CKPS_position                          0x0
#define T2CKPS_size                              0x2
#define T2CKPS_value_mask                        0x3
#define T2CKPS_clear_mask                        0xFC

#define T2CKPS1                                  0x1
#define T2CKPS1_address                          0x112
#define T2CKPS1_position                         0x1
#define T2CKPS1_size                             0x1
#define T2CKPS1_value_mask                       0x2
#define T2CKPS1_clear_mask                       0xFD

#define TMR2ON                                   0x2
#define TMR2ON_address                           0x112
#define TMR2ON_position                          0x2
#define TMR2ON_size                              0x1
#define TMR2ON_value_mask                        0x4
#define TMR2ON_clear_mask                        0xFB

#define T2OUTPS0                                 0x3
#define T2OUTPS0_address                         0x112
#define T2OUTPS0_position                        0x3
#define T2OUTPS0_size                            0x1
#define T2OUTPS0_value_mask                      0x8
#define T2OUTPS0_clear_mask                      0xF7

#define T2OUTPS                                  0x3
#define T2OUTPS_address                          0x112
#define T2OUTPS_position                         0x3
#define T2OUTPS_size                             0x4
#define T2OUTPS_value_mask                       0x78
#define T2OUTPS_clear_mask                       0x87

#define T2OUTPS1                                 0x4
#define T2OUTPS1_address                         0x112
#define T2OUTPS1_position                        0x4
#define T2OUTPS1_size                            0x1
#define T2OUTPS1_value_mask                      0x10
#define T2OUTPS1_clear_mask                      0xEF

#define T2OUTPS2                                 0x5
#define T2OUTPS2_address                         0x112
#define T2OUTPS2_position                        0x5
#define T2OUTPS2_size                            0x1
#define T2OUTPS2_value_mask                      0x20
#define T2OUTPS2_clear_mask                      0xDF

#define T2OUTPS3                                 0x6
#define T2OUTPS3_address                         0x112
#define T2OUTPS3_position                        0x6
#define T2OUTPS3_size                            0x1
#define T2OUTPS3_value_mask                      0x40
#define T2OUTPS3_clear_mask                      0xBF


/*------------------------------#
| HLTMR1                  0x113 |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define HLTMR1                                   0x0
#define HLTMR1_address                           0x113
#define HLTMR1_position                          0x0
#define HLTMR1_size                              0x8
#define HLTMR1_value_mask                        0xFF
#define HLTMR1_clear_mask                        0x0


/*------------------------------#
| HLTPR1                  0x114 |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define HLTPR1                                   0x0
#define HLTPR1_address                           0x114
#define HLTPR1_position                          0x0
#define HLTPR1_size                              0x8
#define HLTPR1_value_mask                        0xFF
#define HLTPR1_clear_mask                        0x0


/*-------------------------------------------------------------------------#
| HLT1CON0                                                           0x115 |
#--------------------------------------------------------------------------#
| - | H1OUTPS3 | H1OUTPS2 | H1OUTPS1 | H1OUTPS0 | H1ON | H1CKPS1 | H1CKPS0 |
#--------------------------------------------------------------------------#
| 7 | 6        | 5        | 4        | 3        | 2    | 1       | 0       |
#-------------------------------------------------------------------------*/

#define HLT1CON0                                 0x0
#define HLT1CON0_address                         0x115
#define HLT1CON0_position                        0x0
#define HLT1CON0_size                            0x8
#define HLT1CON0_value_mask                      0xFF
#define HLT1CON0_clear_mask                      0x0

#define H1CKPS                                   0x0
#define H1CKPS_address                           0x115
#define H1CKPS_position                          0x0
#define H1CKPS_size                              0x2
#define H1CKPS_value_mask                        0x3
#define H1CKPS_clear_mask                        0xFC

#define H1CKPS0                                  0x0
#define H1CKPS0_address                          0x115
#define H1CKPS0_position                         0x0
#define H1CKPS0_size                             0x1
#define H1CKPS0_value_mask                       0x1
#define H1CKPS0_clear_mask                       0xFE

#define H1CKPS1                                  0x1
#define H1CKPS1_address                          0x115
#define H1CKPS1_position                         0x1
#define H1CKPS1_size                             0x1
#define H1CKPS1_value_mask                       0x2
#define H1CKPS1_clear_mask                       0xFD

#define H1ON                                     0x2
#define H1ON_address                             0x115
#define H1ON_position                            0x2
#define H1ON_size                                0x1
#define H1ON_value_mask                          0x4
#define H1ON_clear_mask                          0xFB

#define H1OUTPS                                  0x3
#define H1OUTPS_address                          0x115
#define H1OUTPS_position                         0x3
#define H1OUTPS_size                             0x4
#define H1OUTPS_value_mask                       0x78
#define H1OUTPS_clear_mask                       0x87

#define H1OUTPS0                                 0x3
#define H1OUTPS0_address                         0x115
#define H1OUTPS0_position                        0x3
#define H1OUTPS0_size                            0x1
#define H1OUTPS0_value_mask                      0x8
#define H1OUTPS0_clear_mask                      0xF7

#define H1OUTPS1                                 0x4
#define H1OUTPS1_address                         0x115
#define H1OUTPS1_position                        0x4
#define H1OUTPS1_size                            0x1
#define H1OUTPS1_value_mask                      0x10
#define H1OUTPS1_clear_mask                      0xEF

#define H1OUTPS2                                 0x5
#define H1OUTPS2_address                         0x115
#define H1OUTPS2_position                        0x5
#define H1OUTPS2_size                            0x1
#define H1OUTPS2_value_mask                      0x20
#define H1OUTPS2_clear_mask                      0xDF

#define H1OUTPS3                                 0x6
#define H1OUTPS3_address                         0x115
#define H1OUTPS3_position                        0x6
#define H1OUTPS3_size                            0x1
#define H1OUTPS3_value_mask                      0x40
#define H1OUTPS3_clear_mask                      0xBF


/*-----------------------------------------------------------------#
| HLT1CON1                                                   0x116 |
#------------------------------------------------------------------#
| H1FES | H1RES | - | H1ERS2 | H1ERS1 | H1ERS0 | H1FEREN | H1REREN |
#------------------------------------------------------------------#
| 7     | 6     | 5 | 4      | 3      | 2      | 1       | 0       |
#-----------------------------------------------------------------*/

#define HLT1CON1                                 0x0
#define HLT1CON1_address                         0x116
#define HLT1CON1_position                        0x0
#define HLT1CON1_size                            0x8
#define HLT1CON1_value_mask                      0xFF
#define HLT1CON1_clear_mask                      0x0

#define H1REREN                                  0x0
#define H1REREN_address                          0x116
#define H1REREN_position                         0x0
#define H1REREN_size                             0x1
#define H1REREN_value_mask                       0x1
#define H1REREN_clear_mask                       0xFE

#define H1FEREN                                  0x1
#define H1FEREN_address                          0x116
#define H1FEREN_position                         0x1
#define H1FEREN_size                             0x1
#define H1FEREN_value_mask                       0x2
#define H1FEREN_clear_mask                       0xFD

#define H1ERS                                    0x2
#define H1ERS_address                            0x116
#define H1ERS_position                           0x2
#define H1ERS_size                               0x3
#define H1ERS_value_mask                         0x1C
#define H1ERS_clear_mask                         0xE3

#define H1ERS0                                   0x2
#define H1ERS0_address                           0x116
#define H1ERS0_position                          0x2
#define H1ERS0_size                              0x1
#define H1ERS0_value_mask                        0x4
#define H1ERS0_clear_mask                        0xFB

#define H1ERS1                                   0x3
#define H1ERS1_address                           0x116
#define H1ERS1_position                          0x3
#define H1ERS1_size                              0x1
#define H1ERS1_value_mask                        0x8
#define H1ERS1_clear_mask                        0xF7

#define H1ERS2                                   0x4
#define H1ERS2_address                           0x116
#define H1ERS2_position                          0x4
#define H1ERS2_size                              0x1
#define H1ERS2_value_mask                        0x10
#define H1ERS2_clear_mask                        0xEF

#define H1RES                                    0x6
#define H1RES_address                            0x116
#define H1RES_position                           0x6
#define H1RES_size                               0x1
#define H1RES_value_mask                         0x40
#define H1RES_clear_mask                         0xBF

#define H1FES                                    0x7
#define H1FES_address                            0x116
#define H1FES_position                           0x7
#define H1FES_size                               0x1
#define H1FES_value_mask                         0x80
#define H1FES_clear_mask                         0x7F


/*------------------------------#
| HLTMR2                  0x117 |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define HLTMR2                                   0x0
#define HLTMR2_address                           0x117
#define HLTMR2_position                          0x0
#define HLTMR2_size                              0x8
#define HLTMR2_value_mask                        0xFF
#define HLTMR2_clear_mask                        0x0


/*------------------------------#
| HLTPR2                  0x118 |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define HLTPR2                                   0x0
#define HLTPR2_address                           0x118
#define HLTPR2_position                          0x0
#define HLTPR2_size                              0x8
#define HLTPR2_value_mask                        0xFF
#define HLTPR2_clear_mask                        0x0


/*-------------------------------------------------------------------------#
| HLT2CON0                                                           0x119 |
#--------------------------------------------------------------------------#
| - | H2OUTPS3 | H2OUTPS2 | H2OUTPS1 | H2OUTPS0 | H2ON | H2CKPS1 | H2CKPS0 |
#--------------------------------------------------------------------------#
| 7 | 6        | 5        | 4        | 3        | 2    | 1       | 0       |
#-------------------------------------------------------------------------*/

#define HLT2CON0                                 0x0
#define HLT2CON0_address                         0x119
#define HLT2CON0_position                        0x0
#define HLT2CON0_size                            0x8
#define HLT2CON0_value_mask                      0xFF
#define HLT2CON0_clear_mask                      0x0

#define H2CKPS0                                  0x0
#define H2CKPS0_address                          0x119
#define H2CKPS0_position                         0x0
#define H2CKPS0_size                             0x1
#define H2CKPS0_value_mask                       0x1
#define H2CKPS0_clear_mask                       0xFE

#define H2CKPS                                   0x0
#define H2CKPS_address                           0x119
#define H2CKPS_position                          0x0
#define H2CKPS_size                              0x2
#define H2CKPS_value_mask                        0x3
#define H2CKPS_clear_mask                        0xFC

#define H2CKPS1                                  0x1
#define H2CKPS1_address                          0x119
#define H2CKPS1_position                         0x1
#define H2CKPS1_size                             0x1
#define H2CKPS1_value_mask                       0x2
#define H2CKPS1_clear_mask                       0xFD

#define H2ON                                     0x2
#define H2ON_address                             0x119
#define H2ON_position                            0x2
#define H2ON_size                                0x1
#define H2ON_value_mask                          0x4
#define H2ON_clear_mask                          0xFB

#define H2OUTPS0                                 0x3
#define H2OUTPS0_address                         0x119
#define H2OUTPS0_position                        0x3
#define H2OUTPS0_size                            0x1
#define H2OUTPS0_value_mask                      0x8
#define H2OUTPS0_clear_mask                      0xF7

#define H2OUTPS                                  0x3
#define H2OUTPS_address                          0x119
#define H2OUTPS_position                         0x3
#define H2OUTPS_size                             0x4
#define H2OUTPS_value_mask                       0x78
#define H2OUTPS_clear_mask                       0x87

#define H2OUTPS1                                 0x4
#define H2OUTPS1_address                         0x119
#define H2OUTPS1_position                        0x4
#define H2OUTPS1_size                            0x1
#define H2OUTPS1_value_mask                      0x10
#define H2OUTPS1_clear_mask                      0xEF

#define H2OUTPS2                                 0x5
#define H2OUTPS2_address                         0x119
#define H2OUTPS2_position                        0x5
#define H2OUTPS2_size                            0x1
#define H2OUTPS2_value_mask                      0x20
#define H2OUTPS2_clear_mask                      0xDF

#define H2OUTPS3                                 0x6
#define H2OUTPS3_address                         0x119
#define H2OUTPS3_position                        0x6
#define H2OUTPS3_size                            0x1
#define H2OUTPS3_value_mask                      0x40
#define H2OUTPS3_clear_mask                      0xBF


/*-----------------------------------------------------------------#
| HLT2CON1                                                   0x11A |
#------------------------------------------------------------------#
| H2FES | H2RES | - | H2ERS2 | H2ERS1 | H2ERS0 | H2FEREN | H2REREN |
#------------------------------------------------------------------#
| 7     | 6     | 5 | 4      | 3      | 2      | 1       | 0       |
#-----------------------------------------------------------------*/

#define HLT2CON1                                 0x0
#define HLT2CON1_address                         0x11A
#define HLT2CON1_position                        0x0
#define HLT2CON1_size                            0x8
#define HLT2CON1_value_mask                      0xFF
#define HLT2CON1_clear_mask                      0x0

#define H2REREN                                  0x0
#define H2REREN_address                          0x11A
#define H2REREN_position                         0x0
#define H2REREN_size                             0x1
#define H2REREN_value_mask                       0x1
#define H2REREN_clear_mask                       0xFE

#define H2FEREN                                  0x1
#define H2FEREN_address                          0x11A
#define H2FEREN_position                         0x1
#define H2FEREN_size                             0x1
#define H2FEREN_value_mask                       0x2
#define H2FEREN_clear_mask                       0xFD

#define H2ERS0                                   0x2
#define H2ERS0_address                           0x11A
#define H2ERS0_position                          0x2
#define H2ERS0_size                              0x1
#define H2ERS0_value_mask                        0x4
#define H2ERS0_clear_mask                        0xFB

#define H2ERS                                    0x2
#define H2ERS_address                            0x11A
#define H2ERS_position                           0x2
#define H2ERS_size                               0x3
#define H2ERS_value_mask                         0x1C
#define H2ERS_clear_mask                         0xE3

#define H2ERS1                                   0x3
#define H2ERS1_address                           0x11A
#define H2ERS1_position                          0x3
#define H2ERS1_size                              0x1
#define H2ERS1_value_mask                        0x8
#define H2ERS1_clear_mask                        0xF7

#define H2ERS2                                   0x4
#define H2ERS2_address                           0x11A
#define H2ERS2_position                          0x4
#define H2ERS2_size                              0x1
#define H2ERS2_value_mask                        0x10
#define H2ERS2_clear_mask                        0xEF

#define H2RES                                    0x6
#define H2RES_address                            0x11A
#define H2RES_position                           0x6
#define H2RES_size                               0x1
#define H2RES_value_mask                         0x40
#define H2RES_clear_mask                         0xBF

#define H2FES                                    0x7
#define H2FES_address                            0x11A
#define H2FES_position                           0x7
#define H2FES_size                               0x1
#define H2FES_value_mask                         0x80
#define H2FES_clear_mask                         0x7F


/*----------------------------------------------------------------#
| SLPC1CON0                                                 0x11E |
#-----------------------------------------------------------------#
| SC1EN | - | SC1MRPE | SC1POL | SCS1TSS1 | SCS1TSS0 | - | SC1INS |
#-----------------------------------------------------------------#
| 7     | 6 | 5       | 4      | 3        | 2        | 1 | 0      |
#----------------------------------------------------------------*/

#define SLPC1CON0                                0x0
#define SLPC1CON0_address                        0x11E
#define SLPC1CON0_position                       0x0
#define SLPC1CON0_size                           0x8
#define SLPC1CON0_value_mask                     0xFF
#define SLPC1CON0_clear_mask                     0x0

#define SC1INS                                   0x0
#define SC1INS_address                           0x11E
#define SC1INS_position                          0x0
#define SC1INS_size                              0x1
#define SC1INS_value_mask                        0x1
#define SC1INS_clear_mask                        0xFE

#define SCS1TSS0                                 0x2
#define SCS1TSS0_address                         0x11E
#define SCS1TSS0_position                        0x2
#define SCS1TSS0_size                            0x1
#define SCS1TSS0_value_mask                      0x4
#define SCS1TSS0_clear_mask                      0xFB

#define SC1TSS                                   0x2
#define SC1TSS_address                           0x11E
#define SC1TSS_position                          0x2
#define SC1TSS_size                              0x2
#define SC1TSS_value_mask                        0xC
#define SC1TSS_clear_mask                        0xF3

#define SCS1TSS1                                 0x3
#define SCS1TSS1_address                         0x11E
#define SCS1TSS1_position                        0x3
#define SCS1TSS1_size                            0x1
#define SCS1TSS1_value_mask                      0x8
#define SCS1TSS1_clear_mask                      0xF7

#define SC1POL                                   0x4
#define SC1POL_address                           0x11E
#define SC1POL_position                          0x4
#define SC1POL_size                              0x1
#define SC1POL_value_mask                        0x10
#define SC1POL_clear_mask                        0xEF

#define SC1MRPE                                  0x5
#define SC1MRPE_address                          0x11E
#define SC1MRPE_position                         0x5
#define SC1MRPE_size                             0x1
#define SC1MRPE_value_mask                       0x20
#define SC1MRPE_clear_mask                       0xDF

#define SC1EN                                    0x7
#define SC1EN_address                            0x11E
#define SC1EN_position                           0x7
#define SC1EN_size                               0x1
#define SC1EN_value_mask                         0x80
#define SC1EN_clear_mask                         0x7F


/*---------------------------------------------------------------#
| SLPC1CON1                                                0x11F |
#----------------------------------------------------------------#
| - | - | - | SC1RNG | SC1ISET3 | SC1ISET2 | SC1ISET1 | SC1ISET0 |
#----------------------------------------------------------------#
| 7 | 6 | 5 | 4      | 3        | 2        | 1        | 0        |
#---------------------------------------------------------------*/

#define SLPC1CON1                                0x0
#define SLPC1CON1_address                        0x11F
#define SLPC1CON1_position                       0x0
#define SLPC1CON1_size                           0x8
#define SLPC1CON1_value_mask                     0xFF
#define SLPC1CON1_clear_mask                     0x0

#define SC1ISET                                  0x0
#define SC1ISET_address                          0x11F
#define SC1ISET_position                         0x0
#define SC1ISET_size                             0x4
#define SC1ISET_value_mask                       0xF
#define SC1ISET_clear_mask                       0xF0

#define SC1ISET0                                 0x0
#define SC1ISET0_address                         0x11F
#define SC1ISET0_position                        0x0
#define SC1ISET0_size                            0x1
#define SC1ISET0_value_mask                      0x1
#define SC1ISET0_clear_mask                      0xFE

#define SC1ISET1                                 0x1
#define SC1ISET1_address                         0x11F
#define SC1ISET1_position                        0x1
#define SC1ISET1_size                            0x1
#define SC1ISET1_value_mask                      0x2
#define SC1ISET1_clear_mask                      0xFD

#define SC1ISET2                                 0x2
#define SC1ISET2_address                         0x11F
#define SC1ISET2_position                        0x2
#define SC1ISET2_size                            0x1
#define SC1ISET2_value_mask                      0x4
#define SC1ISET2_clear_mask                      0xFB

#define SC1ISET3                                 0x3
#define SC1ISET3_address                         0x11F
#define SC1ISET3_position                        0x3
#define SC1ISET3_size                            0x1
#define SC1ISET3_value_mask                      0x8
#define SC1ISET3_clear_mask                      0xF7

#define SC1RNG                                   0x4
#define SC1RNG_address                           0x11F
#define SC1RNG_position                          0x4
#define SC1RNG_size                              0x1
#define SC1RNG_value_mask                        0x10
#define SC1RNG_clear_mask                        0xEF


/*----------------------------------------------#
| ANSELA                                  0x185 |
#-----------------------------------------------#
| - | - | - | ANSA4 | - | ANSA2 | ANSA1 | ANSA0 |
#-----------------------------------------------#
| 7 | 6 | 5 | 4     | 3 | 2     | 1     | 0     |
#----------------------------------------------*/

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

#define ANSA4                                    0x4
#define ANSA4_address                            0x185
#define ANSA4_position                           0x4
#define ANSA4_size                               0x1
#define ANSA4_value_mask                         0x10
#define ANSA4_clear_mask                         0xEF


/*----------------------------------------------#
| ANSELC                                  0x187 |
#-----------------------------------------------#
| - | - | - | - | ANSC3 | ANSC2 | ANSC1 | ANSC0 |
#-----------------------------------------------#
| 7 | 6 | 5 | 4 | 3     | 2     | 1     | 0     |
#----------------------------------------------*/

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

#define ANSC3                                    0x3
#define ANSC3_address                            0x187
#define ANSC3_position                           0x3
#define ANSC3_size                               0x1
#define ANSC3_value_mask                         0x8
#define ANSC3_clear_mask                         0xF7


/*-----------------------------------#
| APFCON                       0x188 |
#------------------------------------#
| - | - | - | T1GSEL | - | - | - | - |
#------------------------------------#
| 7 | 6 | 5 | 4      | 3 | 2 | 1 | 0 |
#-----------------------------------*/

#define APFCON                                   0x0
#define APFCON_address                           0x188
#define APFCON_position                          0x0
#define APFCON_size                              0x8
#define APFCON_value_mask                        0xFF
#define APFCON_clear_mask                        0x0

#define T1GSEL                                   0x4
#define T1GSEL_address                           0x188
#define T1GSEL_position                          0x4
#define T1GSEL_size                              0x1
#define T1GSEL_value_mask                        0x10
#define T1GSEL_clear_mask                        0xEF


/*---------------------------------------------#
| OSCTUNE                                0x189 |
#----------------------------------------------#
| - | - | - | TUN4 | TUN3 | TUN2 | TUN1 | TUN0 |
#----------------------------------------------#
| 7 | 6 | 5 | 4    | 3    | 2    | 1    | 0    |
#---------------------------------------------*/

#define OSCTUNE                                  0x0
#define OSCTUNE_address                          0x189
#define OSCTUNE_position                         0x0
#define OSCTUNE_size                             0x8
#define OSCTUNE_value_mask                       0xFF
#define OSCTUNE_clear_mask                       0x0

#define TUN0                                     0x0
#define TUN0_address                             0x189
#define TUN0_position                            0x0
#define TUN0_size                                0x1
#define TUN0_value_mask                          0x1
#define TUN0_clear_mask                          0xFE

#define TUN                                      0x0
#define TUN_address                              0x189
#define TUN_position                             0x0
#define TUN_size                                 0x5
#define TUN_value_mask                           0x1F
#define TUN_clear_mask                           0xE0

#define TUN1                                     0x1
#define TUN1_address                             0x189
#define TUN1_position                            0x1
#define TUN1_size                                0x1
#define TUN1_value_mask                          0x2
#define TUN1_clear_mask                          0xFD

#define TUN2                                     0x2
#define TUN2_address                             0x189
#define TUN2_position                            0x2
#define TUN2_size                                0x1
#define TUN2_value_mask                          0x4
#define TUN2_clear_mask                          0xFB

#define TUN3                                     0x3
#define TUN3_address                             0x189
#define TUN3_position                            0x3
#define TUN3_size                                0x1
#define TUN3_value_mask                          0x8
#define TUN3_clear_mask                          0xF7

#define TUN4                                     0x4
#define TUN4_address                             0x189
#define TUN4_position                            0x4
#define TUN4_size                                0x1
#define TUN4_value_mask                          0x10
#define TUN4_clear_mask                          0xEF


/*-----------------------------------#
| PMCON1                       0x18C |
#------------------------------------#
| - | - | - | - | - | WREN | WR | RD |
#------------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2    | 1  | 0  |
#-----------------------------------*/

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

#define WR                                       0x1
#define WR_address                               0x18C
#define WR_position                              0x1
#define WR_size                                  0x1
#define WR_value_mask                            0x2
#define WR_clear_mask                            0xFD

#define WREN                                     0x2
#define WREN_address                             0x18C
#define WREN_position                            0x2
#define WREN_size                                0x1
#define WREN_value_mask                          0x4
#define WREN_clear_mask                          0xFB


/*------------------------------#
| PMCON2                  0x18D |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define PMCON2                                   0x0
#define PMCON2_address                           0x18D
#define PMCON2_position                          0x0
#define PMCON2_size                              0x8
#define PMCON2_value_mask                        0xFF
#define PMCON2_clear_mask                        0x0


/*------------------------------#
| PMADRL                  0x18E |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define PMADRL                                   0x0
#define PMADRL_address                           0x18E
#define PMADRL_position                          0x0
#define PMADRL_size                              0x8
#define PMADRL_value_mask                        0xFF
#define PMADRL_clear_mask                        0x0


/*-------------------------------#
| PMADRH                   0x18F |
#--------------------------------#
| - | - | - | - | - | - | PMADRH |
#--------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0  |
#-------------------------------*/

#define PMADRH                                   0x0
#define PMADRH_address                           0x18F
#define PMADRH_position                          0x0
#define PMADRH_size                              0x2
#define PMADRH_value_mask                        0x3
#define PMADRH_clear_mask                        0xFC


/*------------------------------#
| PMDATL                  0x190 |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define PMDATL                                   0x0
#define PMDATL_address                           0x190
#define PMDATL_position                          0x0
#define PMDATL_size                              0x8
#define PMDATL_value_mask                        0xFF
#define PMDATL_clear_mask                        0x0


/*------------------------------#
| PMDATH                  0x191 |
#-------------------------------#
| - | - | PMDATH                |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define PMDATH                                   0x0
#define PMDATH_address                           0x191
#define PMDATH_position                          0x0
#define PMDATH_size                              0x6
#define PMDATH_value_mask                        0x3F
#define PMDATH_clear_mask                        0xC0


/*--------------------------------------------------#
| COG1PHR                                     0x192 |
#---------------------------------------------------#
| - | - | - | - | G1PHR3 | G1PHR2 | G1PHR1 | G1PHR0 |
#---------------------------------------------------#
| 7 | 6 | 5 | 4 | 3      | 2      | 1      | 0      |
#--------------------------------------------------*/

#define COG1PHR                                  0x0
#define COG1PHR_address                          0x192
#define COG1PHR_position                         0x0
#define COG1PHR_size                             0x8
#define COG1PHR_value_mask                       0xFF
#define COG1PHR_clear_mask                       0x0

#define G1PHR                                    0x0
#define G1PHR_address                            0x192
#define G1PHR_position                           0x0
#define G1PHR_size                               0x4
#define G1PHR_value_mask                         0xF
#define G1PHR_clear_mask                         0xF0

#define G1PHR0                                   0x0
#define G1PHR0_address                           0x192
#define G1PHR0_position                          0x0
#define G1PHR0_size                              0x1
#define G1PHR0_value_mask                        0x1
#define G1PHR0_clear_mask                        0xFE

#define G1PHR1                                   0x1
#define G1PHR1_address                           0x192
#define G1PHR1_position                          0x1
#define G1PHR1_size                              0x1
#define G1PHR1_value_mask                        0x2
#define G1PHR1_clear_mask                        0xFD

#define G1PHR2                                   0x2
#define G1PHR2_address                           0x192
#define G1PHR2_position                          0x2
#define G1PHR2_size                              0x1
#define G1PHR2_value_mask                        0x4
#define G1PHR2_clear_mask                        0xFB

#define G1PHR3                                   0x3
#define G1PHR3_address                           0x192
#define G1PHR3_position                          0x3
#define G1PHR3_size                              0x1
#define G1PHR3_value_mask                        0x8
#define G1PHR3_clear_mask                        0xF7


/*--------------------------------------------------#
| COG1PHF                                     0x193 |
#---------------------------------------------------#
| - | - | - | - | G1PHF3 | G1PHF2 | G1PHF1 | G1PHF0 |
#---------------------------------------------------#
| 7 | 6 | 5 | 4 | 3      | 2      | 1      | 0      |
#--------------------------------------------------*/

#define COG1PHF                                  0x0
#define COG1PHF_address                          0x193
#define COG1PHF_position                         0x0
#define COG1PHF_size                             0x8
#define COG1PHF_value_mask                       0xFF
#define COG1PHF_clear_mask                       0x0

#define G1PHF0                                   0x0
#define G1PHF0_address                           0x193
#define G1PHF0_position                          0x0
#define G1PHF0_size                              0x1
#define G1PHF0_value_mask                        0x1
#define G1PHF0_clear_mask                        0xFE

#define G1PHF                                    0x0
#define G1PHF_address                            0x193
#define G1PHF_position                           0x0
#define G1PHF_size                               0x4
#define G1PHF_value_mask                         0xF
#define G1PHF_clear_mask                         0xF0

#define G1PHF1                                   0x1
#define G1PHF1_address                           0x193
#define G1PHF1_position                          0x1
#define G1PHF1_size                              0x1
#define G1PHF1_value_mask                        0x2
#define G1PHF1_clear_mask                        0xFD

#define G1PHF2                                   0x2
#define G1PHF2_address                           0x193
#define G1PHF2_position                          0x2
#define G1PHF2_size                              0x1
#define G1PHF2_value_mask                        0x4
#define G1PHF2_clear_mask                        0xFB

#define G1PHF3                                   0x3
#define G1PHF3_address                           0x193
#define G1PHF3_position                          0x3
#define G1PHF3_size                              0x1
#define G1PHF3_value_mask                        0x8
#define G1PHF3_clear_mask                        0xF7


/*--------------------------------------------------#
| COG1BKR                                     0x194 |
#---------------------------------------------------#
| - | - | - | - | G1BKR3 | G1BKR2 | G1BKR1 | G1BKR0 |
#---------------------------------------------------#
| 7 | 6 | 5 | 4 | 3      | 2      | 1      | 0      |
#--------------------------------------------------*/

#define COG1BKR                                  0x0
#define COG1BKR_address                          0x194
#define COG1BKR_position                         0x0
#define COG1BKR_size                             0x8
#define COG1BKR_value_mask                       0xFF
#define COG1BKR_clear_mask                       0x0

#define G1BKR                                    0x0
#define G1BKR_address                            0x194
#define G1BKR_position                           0x0
#define G1BKR_size                               0x4
#define G1BKR_value_mask                         0xF
#define G1BKR_clear_mask                         0xF0

#define G1BKR0                                   0x0
#define G1BKR0_address                           0x194
#define G1BKR0_position                          0x0
#define G1BKR0_size                              0x1
#define G1BKR0_value_mask                        0x1
#define G1BKR0_clear_mask                        0xFE

#define G1BKR1                                   0x1
#define G1BKR1_address                           0x194
#define G1BKR1_position                          0x1
#define G1BKR1_size                              0x1
#define G1BKR1_value_mask                        0x2
#define G1BKR1_clear_mask                        0xFD

#define G1BKR2                                   0x2
#define G1BKR2_address                           0x194
#define G1BKR2_position                          0x2
#define G1BKR2_size                              0x1
#define G1BKR2_value_mask                        0x4
#define G1BKR2_clear_mask                        0xFB

#define G1BKR3                                   0x3
#define G1BKR3_address                           0x194
#define G1BKR3_position                          0x3
#define G1BKR3_size                              0x1
#define G1BKR3_value_mask                        0x8
#define G1BKR3_clear_mask                        0xF7


/*--------------------------------------------------#
| COG1BKF                                     0x195 |
#---------------------------------------------------#
| - | - | - | - | G1BKF3 | G1BKF2 | G1BKF1 | G1BKF0 |
#---------------------------------------------------#
| 7 | 6 | 5 | 4 | 3      | 2      | 1      | 0      |
#--------------------------------------------------*/

#define COG1BKF                                  0x0
#define COG1BKF_address                          0x195
#define COG1BKF_position                         0x0
#define COG1BKF_size                             0x8
#define COG1BKF_value_mask                       0xFF
#define COG1BKF_clear_mask                       0x0

#define G1BKF                                    0x0
#define G1BKF_address                            0x195
#define G1BKF_position                           0x0
#define G1BKF_size                               0x4
#define G1BKF_value_mask                         0xF
#define G1BKF_clear_mask                         0xF0

#define G1BKF0                                   0x0
#define G1BKF0_address                           0x195
#define G1BKF0_position                          0x0
#define G1BKF0_size                              0x1
#define G1BKF0_value_mask                        0x1
#define G1BKF0_clear_mask                        0xFE

#define G1BKF1                                   0x1
#define G1BKF1_address                           0x195
#define G1BKF1_position                          0x1
#define G1BKF1_size                              0x1
#define G1BKF1_value_mask                        0x2
#define G1BKF1_clear_mask                        0xFD

#define G1BKF2                                   0x2
#define G1BKF2_address                           0x195
#define G1BKF2_position                          0x2
#define G1BKF2_size                              0x1
#define G1BKF2_value_mask                        0x4
#define G1BKF2_clear_mask                        0xFB

#define G1BKF3                                   0x3
#define G1BKF3_address                           0x195
#define G1BKF3_position                          0x3
#define G1BKF3_size                              0x1
#define G1BKF3_value_mask                        0x8
#define G1BKF3_clear_mask                        0xF7


/*--------------------------------------------------#
| COG1DBR                                     0x196 |
#---------------------------------------------------#
| - | - | - | - | G1DBR3 | G1DBR2 | G1DBR1 | G1DBR0 |
#---------------------------------------------------#
| 7 | 6 | 5 | 4 | 3      | 2      | 1      | 0      |
#--------------------------------------------------*/

#define COG1DBR                                  0x0
#define COG1DBR_address                          0x196
#define COG1DBR_position                         0x0
#define COG1DBR_size                             0x8
#define COG1DBR_value_mask                       0xFF
#define COG1DBR_clear_mask                       0x0

#define G1DBR                                    0x0
#define G1DBR_address                            0x196
#define G1DBR_position                           0x0
#define G1DBR_size                               0x4
#define G1DBR_value_mask                         0xF
#define G1DBR_clear_mask                         0xF0

#define G1DBR0                                   0x0
#define G1DBR0_address                           0x196
#define G1DBR0_position                          0x0
#define G1DBR0_size                              0x1
#define G1DBR0_value_mask                        0x1
#define G1DBR0_clear_mask                        0xFE

#define G1DBR1                                   0x1
#define G1DBR1_address                           0x196
#define G1DBR1_position                          0x1
#define G1DBR1_size                              0x1
#define G1DBR1_value_mask                        0x2
#define G1DBR1_clear_mask                        0xFD

#define G1DBR2                                   0x2
#define G1DBR2_address                           0x196
#define G1DBR2_position                          0x2
#define G1DBR2_size                              0x1
#define G1DBR2_value_mask                        0x4
#define G1DBR2_clear_mask                        0xFB

#define G1DBR3                                   0x3
#define G1DBR3_address                           0x196
#define G1DBR3_position                          0x3
#define G1DBR3_size                              0x1
#define G1DBR3_value_mask                        0x8
#define G1DBR3_clear_mask                        0xF7


/*--------------------------------------------------#
| COG1DBF                                     0x197 |
#---------------------------------------------------#
| - | - | - | - | G1DBF3 | G1DBF2 | G1DBF1 | G1DBF0 |
#---------------------------------------------------#
| 7 | 6 | 5 | 4 | 3      | 2      | 1      | 0      |
#--------------------------------------------------*/

#define COG1DBF                                  0x0
#define COG1DBF_address                          0x197
#define COG1DBF_position                         0x0
#define COG1DBF_size                             0x8
#define COG1DBF_value_mask                       0xFF
#define COG1DBF_clear_mask                       0x0

#define G1DBF                                    0x0
#define G1DBF_address                            0x197
#define G1DBF_position                           0x0
#define G1DBF_size                               0x4
#define G1DBF_value_mask                         0xF
#define G1DBF_clear_mask                         0xF0

#define G1DBF0                                   0x0
#define G1DBF0_address                           0x197
#define G1DBF0_position                          0x0
#define G1DBF0_size                              0x1
#define G1DBF0_value_mask                        0x1
#define G1DBF0_clear_mask                        0xFE

#define G1DBF1                                   0x1
#define G1DBF1_address                           0x197
#define G1DBF1_position                          0x1
#define G1DBF1_size                              0x1
#define G1DBF1_value_mask                        0x2
#define G1DBF1_clear_mask                        0xFD

#define G1DBF2                                   0x2
#define G1DBF2_address                           0x197
#define G1DBF2_position                          0x2
#define G1DBF2_size                              0x1
#define G1DBF2_value_mask                        0x4
#define G1DBF2_clear_mask                        0xFB

#define G1DBF3                                   0x3
#define G1DBF3_address                           0x197
#define G1DBF3_position                          0x3
#define G1DBF3_size                              0x1
#define G1DBF3_value_mask                        0x8
#define G1DBF3_clear_mask                        0xF7


/*---------------------------------------------------------#
| COG1CON0                                           0x198 |
#----------------------------------------------------------#
| G1EN | G1OE1 | G1OE0 | G1POL1 | G1POL0 | G1LD | - | G1MD |
#----------------------------------------------------------#
| 7    | 6     | 5     | 4      | 3      | 2    | 1 | 0    |
#---------------------------------------------------------*/

#define COG1CON0                                 0x0
#define COG1CON0_address                         0x198
#define COG1CON0_position                        0x0
#define COG1CON0_size                            0x8
#define COG1CON0_value_mask                      0xFF
#define COG1CON0_clear_mask                      0x0

#define G1MD                                     0x0
#define G1MD_address                             0x198
#define G1MD_position                            0x0
#define G1MD_size                                0x1
#define G1MD_value_mask                          0x1
#define G1MD_clear_mask                          0xFE

#define G1LD                                     0x2
#define G1LD_address                             0x198
#define G1LD_position                            0x2
#define G1LD_size                                0x1
#define G1LD_value_mask                          0x4
#define G1LD_clear_mask                          0xFB

#define G1POL0                                   0x3
#define G1POL0_address                           0x198
#define G1POL0_position                          0x3
#define G1POL0_size                              0x1
#define G1POL0_value_mask                        0x8
#define G1POL0_clear_mask                        0xF7

#define G1POL1                                   0x4
#define G1POL1_address                           0x198
#define G1POL1_position                          0x4
#define G1POL1_size                              0x1
#define G1POL1_value_mask                        0x10
#define G1POL1_clear_mask                        0xEF

#define G1OE0                                    0x5
#define G1OE0_address                            0x198
#define G1OE0_position                           0x5
#define G1OE0_size                               0x1
#define G1OE0_value_mask                         0x20
#define G1OE0_clear_mask                         0xDF

#define G1OE1                                    0x6
#define G1OE1_address                            0x198
#define G1OE1_position                           0x6
#define G1OE1_size                               0x1
#define G1OE1_value_mask                         0x40
#define G1OE1_clear_mask                         0xBF

#define G1EN                                     0x7
#define G1EN_address                             0x198
#define G1EN_position                            0x7
#define G1EN_size                                0x1
#define G1EN_value_mask                          0x80
#define G1EN_clear_mask                          0x7F


/*--------------------------------------------------#
| COG1CON1                                    0x199 |
#---------------------------------------------------#
| G1RDBTS | G1FDBTS | - | - | - | - | G1CS1 | G1CS0 |
#---------------------------------------------------#
| 7       | 6       | 5 | 4 | 3 | 2 | 1     | 0     |
#--------------------------------------------------*/

#define COG1CON1                                 0x0
#define COG1CON1_address                         0x199
#define COG1CON1_position                        0x0
#define COG1CON1_size                            0x8
#define COG1CON1_value_mask                      0xFF
#define COG1CON1_clear_mask                      0x0

#define G1CS                                     0x0
#define G1CS_address                             0x199
#define G1CS_position                            0x0
#define G1CS_size                                0x2
#define G1CS_value_mask                          0x3
#define G1CS_clear_mask                          0xFC

#define G1CS0                                    0x0
#define G1CS0_address                            0x199
#define G1CS0_position                           0x0
#define G1CS0_size                               0x1
#define G1CS0_value_mask                         0x1
#define G1CS0_clear_mask                         0xFE

#define G1CS1                                    0x1
#define G1CS1_address                            0x199
#define G1CS1_position                           0x1
#define G1CS1_size                               0x1
#define G1CS1_value_mask                         0x2
#define G1CS1_clear_mask                         0xFD

#define G1FDBTS                                  0x6
#define G1FDBTS_address                          0x199
#define G1FDBTS_position                         0x6
#define G1FDBTS_size                             0x1
#define G1FDBTS_value_mask                       0x40
#define G1FDBTS_clear_mask                       0xBF

#define G1RDBTS                                  0x7
#define G1RDBTS_address                          0x199
#define G1RDBTS_position                         0x7
#define G1RDBTS_size                             0x1
#define G1RDBTS_value_mask                       0x80
#define G1RDBTS_clear_mask                       0x7F


/*-------------------------------------------------------------------------#
| COG1RIS                                                            0x19A |
#--------------------------------------------------------------------------#
| - | G1RIHLT2 | G1R1HLT1 | G1RIT2M | G1RIFLT | C1RICCP1 | G1RIC2 | G1RIC1 |
#--------------------------------------------------------------------------#
| 7 | 6        | 5        | 4       | 3       | 2        | 1      | 0      |
#-------------------------------------------------------------------------*/

#define COG1RIS                                  0x0
#define COG1RIS_address                          0x19A
#define COG1RIS_position                         0x0
#define COG1RIS_size                             0x8
#define COG1RIS_value_mask                       0xFF
#define COG1RIS_clear_mask                       0x0

#define G1RIC1                                   0x0
#define G1RIC1_address                           0x19A
#define G1RIC1_position                          0x0
#define G1RIC1_size                              0x1
#define G1RIC1_value_mask                        0x1
#define G1RIC1_clear_mask                        0xFE

#define G1RIC2                                   0x1
#define G1RIC2_address                           0x19A
#define G1RIC2_position                          0x1
#define G1RIC2_size                              0x1
#define G1RIC2_value_mask                        0x2
#define G1RIC2_clear_mask                        0xFD

#define C1RICCP1                                 0x2
#define C1RICCP1_address                         0x19A
#define C1RICCP1_position                        0x2
#define C1RICCP1_size                            0x1
#define C1RICCP1_value_mask                      0x4
#define C1RICCP1_clear_mask                      0xFB

#define G1RIFLT                                  0x3
#define G1RIFLT_address                          0x19A
#define G1RIFLT_position                         0x3
#define G1RIFLT_size                             0x1
#define G1RIFLT_value_mask                       0x8
#define G1RIFLT_clear_mask                       0xF7

#define G1RIT2M                                  0x4
#define G1RIT2M_address                          0x19A
#define G1RIT2M_position                         0x4
#define G1RIT2M_size                             0x1
#define G1RIT2M_value_mask                       0x10
#define G1RIT2M_clear_mask                       0xEF

#define G1R1HLT1                                 0x5
#define G1R1HLT1_address                         0x19A
#define G1R1HLT1_position                        0x5
#define G1R1HLT1_size                            0x1
#define G1R1HLT1_value_mask                      0x20
#define G1R1HLT1_clear_mask                      0xDF

#define G1RIHLT2                                 0x6
#define G1RIHLT2_address                         0x19A
#define G1RIHLT2_position                        0x6
#define G1RIHLT2_size                            0x1
#define G1RIHLT2_value_mask                      0x40
#define G1RIHLT2_clear_mask                      0xBF


/*-------------------------------------------------------------------------#
| COG1RSIM                                                           0x19B |
#--------------------------------------------------------------------------#
| - | G1RMHLT2 | G1RMHLT1 | G1RTM2M | G1RMFLT | G1RMCCP1 | G1RMC2 | G1RMC1 |
#--------------------------------------------------------------------------#
| 7 | 6        | 5        | 4       | 3       | 2        | 1      | 0      |
#-------------------------------------------------------------------------*/

#define COG1RSIM                                 0x0
#define COG1RSIM_address                         0x19B
#define COG1RSIM_position                        0x0
#define COG1RSIM_size                            0x8
#define COG1RSIM_value_mask                      0xFF
#define COG1RSIM_clear_mask                      0x0

#define G1RMC1                                   0x0
#define G1RMC1_address                           0x19B
#define G1RMC1_position                          0x0
#define G1RMC1_size                              0x1
#define G1RMC1_value_mask                        0x1
#define G1RMC1_clear_mask                        0xFE

#define G1RMC2                                   0x1
#define G1RMC2_address                           0x19B
#define G1RMC2_position                          0x1
#define G1RMC2_size                              0x1
#define G1RMC2_value_mask                        0x2
#define G1RMC2_clear_mask                        0xFD

#define G1RMCCP1                                 0x2
#define G1RMCCP1_address                         0x19B
#define G1RMCCP1_position                        0x2
#define G1RMCCP1_size                            0x1
#define G1RMCCP1_value_mask                      0x4
#define G1RMCCP1_clear_mask                      0xFB

#define G1RMFLT                                  0x3
#define G1RMFLT_address                          0x19B
#define G1RMFLT_position                         0x3
#define G1RMFLT_size                             0x1
#define G1RMFLT_value_mask                       0x8
#define G1RMFLT_clear_mask                       0xF7

#define G1RTM2M                                  0x4
#define G1RTM2M_address                          0x19B
#define G1RTM2M_position                         0x4
#define G1RTM2M_size                             0x1
#define G1RTM2M_value_mask                       0x10
#define G1RTM2M_clear_mask                       0xEF

#define G1RMHLT1                                 0x5
#define G1RMHLT1_address                         0x19B
#define G1RMHLT1_position                        0x5
#define G1RMHLT1_size                            0x1
#define G1RMHLT1_value_mask                      0x20
#define G1RMHLT1_clear_mask                      0xDF

#define G1RMHLT2                                 0x6
#define G1RMHLT2_address                         0x19B
#define G1RMHLT2_position                        0x6
#define G1RMHLT2_size                            0x1
#define G1RMHLT2_value_mask                      0x40
#define G1RMHLT2_clear_mask                      0xBF


/*-------------------------------------------------------------------------#
| COG1FIS                                                            0x19C |
#--------------------------------------------------------------------------#
| - | G1FIHLT2 | G1FIHLT1 | G1FIT2M | G1FIFLT | G1FICCP1 | G1FIC2 | G1FIC1 |
#--------------------------------------------------------------------------#
| 7 | 6        | 5        | 4       | 3       | 2        | 1      | 0      |
#-------------------------------------------------------------------------*/

#define COG1FIS                                  0x0
#define COG1FIS_address                          0x19C
#define COG1FIS_position                         0x0
#define COG1FIS_size                             0x8
#define COG1FIS_value_mask                       0xFF
#define COG1FIS_clear_mask                       0x0

#define G1FIC1                                   0x0
#define G1FIC1_address                           0x19C
#define G1FIC1_position                          0x0
#define G1FIC1_size                              0x1
#define G1FIC1_value_mask                        0x1
#define G1FIC1_clear_mask                        0xFE

#define G1FIC2                                   0x1
#define G1FIC2_address                           0x19C
#define G1FIC2_position                          0x1
#define G1FIC2_size                              0x1
#define G1FIC2_value_mask                        0x2
#define G1FIC2_clear_mask                        0xFD

#define G1FICCP1                                 0x2
#define G1FICCP1_address                         0x19C
#define G1FICCP1_position                        0x2
#define G1FICCP1_size                            0x1
#define G1FICCP1_value_mask                      0x4
#define G1FICCP1_clear_mask                      0xFB

#define G1FIFLT                                  0x3
#define G1FIFLT_address                          0x19C
#define G1FIFLT_position                         0x3
#define G1FIFLT_size                             0x1
#define G1FIFLT_value_mask                       0x8
#define G1FIFLT_clear_mask                       0xF7

#define G1FIT2M                                  0x4
#define G1FIT2M_address                          0x19C
#define G1FIT2M_position                         0x4
#define G1FIT2M_size                             0x1
#define G1FIT2M_value_mask                       0x10
#define G1FIT2M_clear_mask                       0xEF

#define G1FIHLT1                                 0x5
#define G1FIHLT1_address                         0x19C
#define G1FIHLT1_position                        0x5
#define G1FIHLT1_size                            0x1
#define G1FIHLT1_value_mask                      0x20
#define G1FIHLT1_clear_mask                      0xDF

#define G1FIHLT2                                 0x6
#define G1FIHLT2_address                         0x19C
#define G1FIHLT2_position                        0x6
#define G1FIHLT2_size                            0x1
#define G1FIHLT2_value_mask                      0x40
#define G1FIHLT2_clear_mask                      0xBF


/*-------------------------------------------------------------------------#
| COG1FSIM                                                           0x19D |
#--------------------------------------------------------------------------#
| - | G1FMHLT2 | G1FMHLT1 | G1FMT2M | G1FMFLT | G1FMCCP1 | G1FMC2 | G1FMC1 |
#--------------------------------------------------------------------------#
| 7 | 6        | 5        | 4       | 3       | 2        | 1      | 0      |
#-------------------------------------------------------------------------*/

#define COG1FSIM                                 0x0
#define COG1FSIM_address                         0x19D
#define COG1FSIM_position                        0x0
#define COG1FSIM_size                            0x8
#define COG1FSIM_value_mask                      0xFF
#define COG1FSIM_clear_mask                      0x0

#define G1FMC1                                   0x0
#define G1FMC1_address                           0x19D
#define G1FMC1_position                          0x0
#define G1FMC1_size                              0x1
#define G1FMC1_value_mask                        0x1
#define G1FMC1_clear_mask                        0xFE

#define G1FMC2                                   0x1
#define G1FMC2_address                           0x19D
#define G1FMC2_position                          0x1
#define G1FMC2_size                              0x1
#define G1FMC2_value_mask                        0x2
#define G1FMC2_clear_mask                        0xFD

#define G1FMCCP1                                 0x2
#define G1FMCCP1_address                         0x19D
#define G1FMCCP1_position                        0x2
#define G1FMCCP1_size                            0x1
#define G1FMCCP1_value_mask                      0x4
#define G1FMCCP1_clear_mask                      0xFB

#define G1FMFLT                                  0x3
#define G1FMFLT_address                          0x19D
#define G1FMFLT_position                         0x3
#define G1FMFLT_size                             0x1
#define G1FMFLT_value_mask                       0x8
#define G1FMFLT_clear_mask                       0xF7

#define G1FMT2M                                  0x4
#define G1FMT2M_address                          0x19D
#define G1FMT2M_position                         0x4
#define G1FMT2M_size                             0x1
#define G1FMT2M_value_mask                       0x10
#define G1FMT2M_clear_mask                       0xEF

#define G1FMHLT1                                 0x5
#define G1FMHLT1_address                         0x19D
#define G1FMHLT1_position                        0x5
#define G1FMHLT1_size                            0x1
#define G1FMHLT1_value_mask                      0x20
#define G1FMHLT1_clear_mask                      0xDF

#define G1FMHLT2                                 0x6
#define G1FMHLT2_address                         0x19D
#define G1FMHLT2_position                        0x6
#define G1FMHLT2_size                            0x1
#define G1FMHLT2_value_mask                      0x40
#define G1FMHLT2_clear_mask                      0xBF


/*---------------------------------------------------------------------#
| COG1ASD0                                                       0x19E |
#----------------------------------------------------------------------#
| G1ASDE | G1ARSEN | G1ASD1L1 | G1ASD1L0 | G1ASD0L1 | G1ASD0L0 | - | - |
#----------------------------------------------------------------------#
| 7      | 6       | 5        | 4        | 3        | 2        | 1 | 0 |
#---------------------------------------------------------------------*/

#define COG1ASD0                                 0x0
#define COG1ASD0_address                         0x19E
#define COG1ASD0_position                        0x0
#define COG1ASD0_size                            0x8
#define COG1ASD0_value_mask                      0xFF
#define COG1ASD0_clear_mask                      0x0

#define G1ASD0L                                  0x2
#define G1ASD0L_address                          0x19E
#define G1ASD0L_position                         0x2
#define G1ASD0L_size                             0x2
#define G1ASD0L_value_mask                       0xC
#define G1ASD0L_clear_mask                       0xF3

#define G1ASD0L0                                 0x2
#define G1ASD0L0_address                         0x19E
#define G1ASD0L0_position                        0x2
#define G1ASD0L0_size                            0x1
#define G1ASD0L0_value_mask                      0x4
#define G1ASD0L0_clear_mask                      0xFB

#define G1ASD0L1                                 0x3
#define G1ASD0L1_address                         0x19E
#define G1ASD0L1_position                        0x3
#define G1ASD0L1_size                            0x1
#define G1ASD0L1_value_mask                      0x8
#define G1ASD0L1_clear_mask                      0xF7

#define G1ASD1L                                  0x4
#define G1ASD1L_address                          0x19E
#define G1ASD1L_position                         0x4
#define G1ASD1L_size                             0x2
#define G1ASD1L_value_mask                       0x30
#define G1ASD1L_clear_mask                       0xCF

#define G1ASD1L0                                 0x4
#define G1ASD1L0_address                         0x19E
#define G1ASD1L0_position                        0x4
#define G1ASD1L0_size                            0x1
#define G1ASD1L0_value_mask                      0x10
#define G1ASD1L0_clear_mask                      0xEF

#define G1ASD1L1                                 0x5
#define G1ASD1L1_address                         0x19E
#define G1ASD1L1_position                        0x5
#define G1ASD1L1_size                            0x1
#define G1ASD1L1_value_mask                      0x20
#define G1ASD1L1_clear_mask                      0xDF

#define G1ARSEN                                  0x6
#define G1ARSEN_address                          0x19E
#define G1ARSEN_position                         0x6
#define G1ARSEN_size                             0x1
#define G1ARSEN_value_mask                       0x40
#define G1ARSEN_clear_mask                       0xBF

#define G1ASDE                                   0x7
#define G1ASDE_address                           0x19E
#define G1ASDE_position                          0x7
#define G1ASDE_size                              0x1
#define G1ASDE_value_mask                        0x80
#define G1ASDE_clear_mask                        0x7F


/*----------------------------------------------------------------------#
| COG1ASD1                                                        0x19F |
#-----------------------------------------------------------------------#
| - | - | - | G1ASDSHLT2 | G1ASDSHLT1 | G1ASDSC2 | G1ASDSC1 | G1ASDSFLT |
#-----------------------------------------------------------------------#
| 7 | 6 | 5 | 4          | 3          | 2        | 1        | 0         |
#----------------------------------------------------------------------*/

#define COG1ASD1                                 0x0
#define COG1ASD1_address                         0x19F
#define COG1ASD1_position                        0x0
#define COG1ASD1_size                            0x8
#define COG1ASD1_value_mask                      0xFF
#define COG1ASD1_clear_mask                      0x0

#define G1ASDSFLT                                0x0
#define G1ASDSFLT_address                        0x19F
#define G1ASDSFLT_position                       0x0
#define G1ASDSFLT_size                           0x1
#define G1ASDSFLT_value_mask                     0x1
#define G1ASDSFLT_clear_mask                     0xFE

#define G1ASDSC1                                 0x1
#define G1ASDSC1_address                         0x19F
#define G1ASDSC1_position                        0x1
#define G1ASDSC1_size                            0x1
#define G1ASDSC1_value_mask                      0x2
#define G1ASDSC1_clear_mask                      0xFD

#define G1ASDSC2                                 0x2
#define G1ASDSC2_address                         0x19F
#define G1ASDSC2_position                        0x2
#define G1ASDSC2_size                            0x1
#define G1ASDSC2_value_mask                      0x4
#define G1ASDSC2_clear_mask                      0xFB

#define G1ASDSHLT1                               0x3
#define G1ASDSHLT1_address                       0x19F
#define G1ASDSHLT1_position                      0x3
#define G1ASDSHLT1_size                          0x1
#define G1ASDSHLT1_value_mask                    0x8
#define G1ASDSHLT1_clear_mask                    0xF7

#define G1ASDSHLT2                               0x4
#define G1ASDSHLT2_address                       0x19F
#define G1ASDSHLT2_position                      0x4
#define G1ASDSHLT2_size                          0x1
#define G1ASDSHLT2_value_mask                    0x10
#define G1ASDSHLT2_clear_mask                    0xEF

#endif // _PIC16F753_H_
