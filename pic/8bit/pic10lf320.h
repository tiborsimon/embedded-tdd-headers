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

#ifndef _PIC10LF320_H_
#define _PIC10LF320_H_


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


/*--------------------------------------#
| PORTA                             0x5 |
#---------------------------------------#
| - | - | - | - | RA3 | RA2 | RA1 | RA0 |
#---------------------------------------#
| 7 | 6 | 5 | 4 | 3   | 2   | 1   | 0   |
#--------------------------------------*/

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


/*---------------------------------------------#
| TRISA                                    0x6 |
#----------------------------------------------#
| - | - | - | - | - | TRISA2 | TRISA1 | TRISA0 |
#----------------------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2      | 1      | 0      |
#---------------------------------------------*/

#define TRISA                                    0x0
#define TRISA_address                            0x006
#define TRISA_position                           0x0
#define TRISA_size                               0x8
#define TRISA_value_mask                         0xFF
#define TRISA_clear_mask                         0x0

#define TRISA0                                   0x0
#define TRISA0_address                           0x006
#define TRISA0_position                          0x0
#define TRISA0_size                              0x1
#define TRISA0_value_mask                        0x1
#define TRISA0_clear_mask                        0xFE

#define TRISA1                                   0x1
#define TRISA1_address                           0x006
#define TRISA1_position                          0x1
#define TRISA1_size                              0x1
#define TRISA1_value_mask                        0x2
#define TRISA1_clear_mask                        0xFD

#define TRISA2                                   0x2
#define TRISA2_address                           0x006
#define TRISA2_position                          0x2
#define TRISA2_size                              0x1
#define TRISA2_value_mask                        0x4
#define TRISA2_clear_mask                        0xFB


/*------------------------------------------#
| LATA                                  0x7 |
#-------------------------------------------#
| - | - | - | - | - | LATA2 | LATA1 | LATA0 |
#-------------------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2     | 1     | 0     |
#------------------------------------------*/

#define LATA                                     0x0
#define LATA_address                             0x007
#define LATA_position                            0x0
#define LATA_size                                0x8
#define LATA_value_mask                          0xFF
#define LATA_clear_mask                          0x0

#define LATA0                                    0x0
#define LATA0_address                            0x007
#define LATA0_position                           0x0
#define LATA0_size                               0x1
#define LATA0_value_mask                         0x1
#define LATA0_clear_mask                         0xFE

#define LATA1                                    0x1
#define LATA1_address                            0x007
#define LATA1_position                           0x1
#define LATA1_size                               0x1
#define LATA1_value_mask                         0x2
#define LATA1_clear_mask                         0xFD

#define LATA2                                    0x2
#define LATA2_address                            0x007
#define LATA2_position                           0x2
#define LATA2_size                               0x1
#define LATA2_value_mask                         0x4
#define LATA2_clear_mask                         0xFB


/*------------------------------------------#
| ANSELA                                0x8 |
#-------------------------------------------#
| - | - | - | - | - | ANSA2 | ANSA1 | ANSA0 |
#-------------------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2     | 1     | 0     |
#------------------------------------------*/

#define ANSELA                                   0x0
#define ANSELA_address                           0x008
#define ANSELA_position                          0x0
#define ANSELA_size                              0x8
#define ANSELA_value_mask                        0xFF
#define ANSELA_clear_mask                        0x0

#define ANSA0                                    0x0
#define ANSA0_address                            0x008
#define ANSA0_position                           0x0
#define ANSA0_size                               0x1
#define ANSA0_value_mask                         0x1
#define ANSA0_clear_mask                         0xFE

#define ANSA1                                    0x1
#define ANSA1_address                            0x008
#define ANSA1_position                           0x1
#define ANSA1_size                               0x1
#define ANSA1_value_mask                         0x2
#define ANSA1_clear_mask                         0xFD

#define ANSA2                                    0x2
#define ANSA2_address                            0x008
#define ANSA2_position                           0x2
#define ANSA2_size                               0x1
#define ANSA2_value_mask                         0x4
#define ANSA2_clear_mask                         0xFB


/*----------------------------------------------#
| WPUA                                      0x9 |
#-----------------------------------------------#
| - | - | - | - | WPUA3 | WPUA2 | WPUA1 | WPUA0 |
#-----------------------------------------------#
| 7 | 6 | 5 | 4 | 3     | 2     | 1     | 0     |
#----------------------------------------------*/

#define WPUA                                     0x0
#define WPUA_address                             0x009
#define WPUA_position                            0x0
#define WPUA_size                                0x8
#define WPUA_value_mask                          0xFF
#define WPUA_clear_mask                          0x0

#define WPUA0                                    0x0
#define WPUA0_address                            0x009
#define WPUA0_position                           0x0
#define WPUA0_size                               0x1
#define WPUA0_value_mask                         0x1
#define WPUA0_clear_mask                         0xFE

#define WPUA1                                    0x1
#define WPUA1_address                            0x009
#define WPUA1_position                           0x1
#define WPUA1_size                               0x1
#define WPUA1_value_mask                         0x2
#define WPUA1_clear_mask                         0xFD

#define WPUA2                                    0x2
#define WPUA2_address                            0x009
#define WPUA2_position                           0x2
#define WPUA2_size                               0x1
#define WPUA2_value_mask                         0x4
#define WPUA2_clear_mask                         0xFB

#define WPUA3                                    0x3
#define WPUA3_address                            0x009
#define WPUA3_position                           0x3
#define WPUA3_size                               0x1
#define WPUA3_value_mask                         0x8
#define WPUA3_clear_mask                         0xF7


/*----------------------------------#
| PCLATH                        0xA |
#-----------------------------------#
| - | - | - | - | - | - | - | PCLH0 |
#-----------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0     |
#----------------------------------*/

#define PCLATH                                   0x0
#define PCLATH_address                           0x00A
#define PCLATH_position                          0x0
#define PCLATH_size                              0x8
#define PCLATH_value_mask                        0xFF
#define PCLATH_clear_mask                        0x0

#define PCLH0                                    0x0
#define PCLH0_address                            0x00A
#define PCLH0_position                           0x0
#define PCLH0_size                               0x1
#define PCLH0_value_mask                         0x1
#define PCLH0_clear_mask                         0xFE


/*-----------------------------------------------------------#
| INTCON                                                 0xB |
#------------------------------------------------------------#
| GIE | PEIE | TMR0IE | INTE | IOCIE | TMR0IF | INTF | IOCIF |
#------------------------------------------------------------#
| 7   | 6    | 5      | 4    | 3     | 2      | 1    | 0     |
#-----------------------------------------------------------*/

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

#define TMR0IF                                   0x2
#define TMR0IF_address                           0x00B
#define TMR0IF_position                          0x2
#define TMR0IF_size                              0x1
#define TMR0IF_value_mask                        0x4
#define TMR0IF_clear_mask                        0xFB

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


/*------------------------------------------------#
| PIR1                                        0xC |
#-------------------------------------------------#
| - | ADIF | - | NCO1IF | CLC1IF | - | TMR2IF | - |
#-------------------------------------------------#
| 7 | 6    | 5 | 4      | 3      | 2 | 1      | 0 |
#------------------------------------------------*/

#define PIR1                                     0x0
#define PIR1_address                             0x00C
#define PIR1_position                            0x0
#define PIR1_size                                0x8
#define PIR1_value_mask                          0xFF
#define PIR1_clear_mask                          0x0

#define TMR2IF                                   0x1
#define TMR2IF_address                           0x00C
#define TMR2IF_position                          0x1
#define TMR2IF_size                              0x1
#define TMR2IF_value_mask                        0x2
#define TMR2IF_clear_mask                        0xFD

#define CLC1IF                                   0x3
#define CLC1IF_address                           0x00C
#define CLC1IF_position                          0x3
#define CLC1IF_size                              0x1
#define CLC1IF_value_mask                        0x8
#define CLC1IF_clear_mask                        0xF7

#define NCO1IF                                   0x4
#define NCO1IF_address                           0x00C
#define NCO1IF_position                          0x4
#define NCO1IF_size                              0x1
#define NCO1IF_value_mask                        0x10
#define NCO1IF_clear_mask                        0xEF

#define ADIF                                     0x6
#define ADIF_address                             0x00C
#define ADIF_position                            0x6
#define ADIF_size                                0x1
#define ADIF_value_mask                          0x40
#define ADIF_clear_mask                          0xBF


/*------------------------------------------------#
| PIE1                                        0xD |
#-------------------------------------------------#
| - | ADIE | - | NCO1IE | CLC1IE | - | TMR2IE | - |
#-------------------------------------------------#
| 7 | 6    | 5 | 4      | 3      | 2 | 1      | 0 |
#------------------------------------------------*/

#define PIE1                                     0x0
#define PIE1_address                             0x00D
#define PIE1_position                            0x0
#define PIE1_size                                0x8
#define PIE1_value_mask                          0xFF
#define PIE1_clear_mask                          0x0

#define TMR2IE                                   0x1
#define TMR2IE_address                           0x00D
#define TMR2IE_position                          0x1
#define TMR2IE_size                              0x1
#define TMR2IE_value_mask                        0x2
#define TMR2IE_clear_mask                        0xFD

#define CLC1IE                                   0x3
#define CLC1IE_address                           0x00D
#define CLC1IE_position                          0x3
#define CLC1IE_size                              0x1
#define CLC1IE_value_mask                        0x8
#define CLC1IE_clear_mask                        0xF7

#define NCO1IE                                   0x4
#define NCO1IE_address                           0x00D
#define NCO1IE_position                          0x4
#define NCO1IE_size                              0x1
#define NCO1IE_value_mask                        0x10
#define NCO1IE_clear_mask                        0xEF

#define ADIE                                     0x6
#define ADIE_address                             0x00D
#define ADIE_position                            0x6
#define ADIE_size                                0x1
#define ADIE_value_mask                          0x40
#define ADIE_clear_mask                          0xBF


/*------------------------------------------------------#
| OPTION_REG                                        0xE |
#-------------------------------------------------------#
| nWPUEN | INTEDG | T0CS | T0SE | PSA | PS2 | PS1 | PS0 |
#-------------------------------------------------------#
| 7      | 6      | 5    | 4    | 3   | 2   | 1   | 0   |
#------------------------------------------------------*/

#define OPTION_REG                               0x0
#define OPTION_REG_address                       0x00E
#define OPTION_REG_position                      0x0
#define OPTION_REG_size                          0x8
#define OPTION_REG_value_mask                    0xFF
#define OPTION_REG_clear_mask                    0x0

#define PS                                       0x0
#define PS_address                               0x00E
#define PS_position                              0x0
#define PS_size                                  0x3
#define PS_value_mask                            0x7
#define PS_clear_mask                            0xF8

#define PS0                                      0x0
#define PS0_address                              0x00E
#define PS0_position                             0x0
#define PS0_size                                 0x1
#define PS0_value_mask                           0x1
#define PS0_clear_mask                           0xFE

#define PS1                                      0x1
#define PS1_address                              0x00E
#define PS1_position                             0x1
#define PS1_size                                 0x1
#define PS1_value_mask                           0x2
#define PS1_clear_mask                           0xFD

#define PS2                                      0x2
#define PS2_address                              0x00E
#define PS2_position                             0x2
#define PS2_size                                 0x1
#define PS2_value_mask                           0x4
#define PS2_clear_mask                           0xFB

#define PSA                                      0x3
#define PSA_address                              0x00E
#define PSA_position                             0x3
#define PSA_size                                 0x1
#define PSA_value_mask                           0x8
#define PSA_clear_mask                           0xF7

#define T0SE                                     0x4
#define T0SE_address                             0x00E
#define T0SE_position                            0x4
#define T0SE_size                                0x1
#define T0SE_value_mask                          0x10
#define T0SE_clear_mask                          0xEF

#define T0CS                                     0x5
#define T0CS_address                             0x00E
#define T0CS_position                            0x5
#define T0CS_size                                0x1
#define T0CS_value_mask                          0x20
#define T0CS_clear_mask                          0xDF

#define INTEDG                                   0x6
#define INTEDG_address                           0x00E
#define INTEDG_position                          0x6
#define INTEDG_size                              0x1
#define INTEDG_value_mask                        0x40
#define INTEDG_clear_mask                        0xBF

#define nWPUEN                                   0x7
#define nWPUEN_address                           0x00E
#define nWPUEN_position                          0x7
#define nWPUEN_size                              0x1
#define nWPUEN_value_mask                        0x80
#define nWPUEN_clear_mask                        0x7F


/*------------------------------------#
| PCON                            0xF |
#-------------------------------------#
| - | - | - | - | - | - | nPOR | nBOR |
#-------------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1    | 0    |
#------------------------------------*/

#define PCON                                     0x0
#define PCON_address                             0x00F
#define PCON_position                            0x0
#define PCON_size                                0x8
#define PCON_value_mask                          0xFF
#define PCON_clear_mask                          0x0

#define nBOR                                     0x0
#define nBOR_address                             0x00F
#define nBOR_position                            0x0
#define nBOR_size                                0x1
#define nBOR_value_mask                          0x1
#define nBOR_clear_mask                          0xFE

#define nPOR                                     0x1
#define nPOR_address                             0x00F
#define nPOR_position                            0x1
#define nPOR_size                                0x1
#define nPOR_value_mask                          0x2
#define nPOR_clear_mask                          0xFD


/*---------------------------------------------------------#
| OSCCON                                              0x10 |
#----------------------------------------------------------#
| - | IRCF2 | IRCF1 | IRCF0 | HFIOFR | - | LFIOFR | HFIOFS |
#----------------------------------------------------------#
| 7 | 6     | 5     | 4     | 3      | 2 | 1      | 0      |
#---------------------------------------------------------*/

#define OSCCON                                   0x0
#define OSCCON_address                           0x010
#define OSCCON_position                          0x0
#define OSCCON_size                              0x8
#define OSCCON_value_mask                        0xFF
#define OSCCON_clear_mask                        0x0

#define HFIOFS                                   0x0
#define HFIOFS_address                           0x010
#define HFIOFS_position                          0x0
#define HFIOFS_size                              0x1
#define HFIOFS_value_mask                        0x1
#define HFIOFS_clear_mask                        0xFE

#define LFIOFR                                   0x1
#define LFIOFR_address                           0x010
#define LFIOFR_position                          0x1
#define LFIOFR_size                              0x1
#define LFIOFR_value_mask                        0x2
#define LFIOFR_clear_mask                        0xFD

#define HFIOFR                                   0x3
#define HFIOFR_address                           0x010
#define HFIOFR_position                          0x3
#define HFIOFR_size                              0x1
#define HFIOFR_value_mask                        0x8
#define HFIOFR_clear_mask                        0xF7

#define IRCF                                     0x4
#define IRCF_address                             0x010
#define IRCF_position                            0x4
#define IRCF_size                                0x3
#define IRCF_value_mask                          0x70
#define IRCF_clear_mask                          0x8F

#define IRCF0                                    0x4
#define IRCF0_address                            0x010
#define IRCF0_position                           0x4
#define IRCF0_size                               0x1
#define IRCF0_value_mask                         0x10
#define IRCF0_clear_mask                         0xEF

#define IRCF1                                    0x5
#define IRCF1_address                            0x010
#define IRCF1_position                           0x5
#define IRCF1_size                               0x1
#define IRCF1_value_mask                         0x20
#define IRCF1_clear_mask                         0xDF

#define IRCF2                                    0x6
#define IRCF2_address                            0x010
#define IRCF2_position                           0x6
#define IRCF2_size                               0x1
#define IRCF2_value_mask                         0x40
#define IRCF2_clear_mask                         0xBF


/*-----------------------------------------------------------------------#
| T2CON                                                             0x13 |
#------------------------------------------------------------------------#
| - | TOUTPS3 | TOUTPS2 | TOUTPS1 | TOUTPS0 | TMR2ON | T2CKPS1 | T2CKPS0 |
#------------------------------------------------------------------------#
| 7 | 6       | 5       | 4       | 3       | 2      | 1       | 0       |
#-----------------------------------------------------------------------*/

#define T2CON                                    0x0
#define T2CON_address                            0x013
#define T2CON_position                           0x0
#define T2CON_size                               0x8
#define T2CON_value_mask                         0xFF
#define T2CON_clear_mask                         0x0

#define T2CKPS0                                  0x0
#define T2CKPS0_address                          0x013
#define T2CKPS0_position                         0x0
#define T2CKPS0_size                             0x1
#define T2CKPS0_value_mask                       0x1
#define T2CKPS0_clear_mask                       0xFE

#define T2CKPS                                   0x0
#define T2CKPS_address                           0x013
#define T2CKPS_position                          0x0
#define T2CKPS_size                              0x2
#define T2CKPS_value_mask                        0x3
#define T2CKPS_clear_mask                        0xFC

#define T2CKPS1                                  0x1
#define T2CKPS1_address                          0x013
#define T2CKPS1_position                         0x1
#define T2CKPS1_size                             0x1
#define T2CKPS1_value_mask                       0x2
#define T2CKPS1_clear_mask                       0xFD

#define TMR2ON                                   0x2
#define TMR2ON_address                           0x013
#define TMR2ON_position                          0x2
#define TMR2ON_size                              0x1
#define TMR2ON_value_mask                        0x4
#define TMR2ON_clear_mask                        0xFB

#define TOUTPS0                                  0x3
#define TOUTPS0_address                          0x013
#define TOUTPS0_position                         0x3
#define TOUTPS0_size                             0x1
#define TOUTPS0_value_mask                       0x8
#define TOUTPS0_clear_mask                       0xF7

#define TOUTPS                                   0x3
#define TOUTPS_address                           0x013
#define TOUTPS_position                          0x3
#define TOUTPS_size                              0x4
#define TOUTPS_value_mask                        0x78
#define TOUTPS_clear_mask                        0x87

#define TOUTPS1                                  0x4
#define TOUTPS1_address                          0x013
#define TOUTPS1_position                         0x4
#define TOUTPS1_size                             0x1
#define TOUTPS1_value_mask                       0x10
#define TOUTPS1_clear_mask                       0xEF

#define TOUTPS2                                  0x5
#define TOUTPS2_address                          0x013
#define TOUTPS2_position                         0x5
#define TOUTPS2_size                             0x1
#define TOUTPS2_value_mask                       0x20
#define TOUTPS2_clear_mask                       0xDF

#define TOUTPS3                                  0x6
#define TOUTPS3_address                          0x013
#define TOUTPS3_position                         0x6
#define TOUTPS3_size                             0x1
#define TOUTPS3_value_mask                       0x40
#define TOUTPS3_clear_mask                       0xBF


/*--------------------------------------------#
| PWM1DCL                                0x14 |
#---------------------------------------------#
| PWM1DCL1 | PWM1DCL0 | - | - | - | - | - | - |
#---------------------------------------------#
| 7        | 6        | 5 | 4 | 3 | 2 | 1 | 0 |
#--------------------------------------------*/

#define PWM1DCL                                  0x6
#define PWM1DCL_address                          0x014
#define PWM1DCL_position                         0x6
#define PWM1DCL_size                             0x2
#define PWM1DCL_value_mask                       0xC0
#define PWM1DCL_clear_mask                       0x3F

#define PWM1DCL0                                 0x6
#define PWM1DCL0_address                         0x014
#define PWM1DCL0_position                        0x6
#define PWM1DCL0_size                            0x1
#define PWM1DCL0_value_mask                      0x40
#define PWM1DCL0_clear_mask                      0xBF

#define PWM1DCL1                                 0x7
#define PWM1DCL1_address                         0x014
#define PWM1DCL1_position                        0x7
#define PWM1DCL1_size                            0x1
#define PWM1DCL1_value_mask                      0x80
#define PWM1DCL1_clear_mask                      0x7F


/*--------------------------------------------------------------------------------------#
| PWM1DCH                                                                          0x15 |
#---------------------------------------------------------------------------------------#
| PWM1DCH7 | PWM1DCH6 | PWM1DCH5 | PWM1DCH4 | PWM1DCH3 | PWM1DCH2 | PWM1DCH1 | PWM1DCH0 |
#---------------------------------------------------------------------------------------#
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
#--------------------------------------------------------------------------------------*/

#define PWM1DCH                                  0x0
#define PWM1DCH_address                          0x015
#define PWM1DCH_position                         0x0
#define PWM1DCH_size                             0x8
#define PWM1DCH_value_mask                       0xFF
#define PWM1DCH_clear_mask                       0x0

#define PWM1DCH0                                 0x0
#define PWM1DCH0_address                         0x015
#define PWM1DCH0_position                        0x0
#define PWM1DCH0_size                            0x1
#define PWM1DCH0_value_mask                      0x1
#define PWM1DCH0_clear_mask                      0xFE

#define PWM1DCH1                                 0x1
#define PWM1DCH1_address                         0x015
#define PWM1DCH1_position                        0x1
#define PWM1DCH1_size                            0x1
#define PWM1DCH1_value_mask                      0x2
#define PWM1DCH1_clear_mask                      0xFD

#define PWM1DCH2                                 0x2
#define PWM1DCH2_address                         0x015
#define PWM1DCH2_position                        0x2
#define PWM1DCH2_size                            0x1
#define PWM1DCH2_value_mask                      0x4
#define PWM1DCH2_clear_mask                      0xFB

#define PWM1DCH3                                 0x3
#define PWM1DCH3_address                         0x015
#define PWM1DCH3_position                        0x3
#define PWM1DCH3_size                            0x1
#define PWM1DCH3_value_mask                      0x8
#define PWM1DCH3_clear_mask                      0xF7

#define PWM1DCH4                                 0x4
#define PWM1DCH4_address                         0x015
#define PWM1DCH4_position                        0x4
#define PWM1DCH4_size                            0x1
#define PWM1DCH4_value_mask                      0x10
#define PWM1DCH4_clear_mask                      0xEF

#define PWM1DCH5                                 0x5
#define PWM1DCH5_address                         0x015
#define PWM1DCH5_position                        0x5
#define PWM1DCH5_size                            0x1
#define PWM1DCH5_value_mask                      0x20
#define PWM1DCH5_clear_mask                      0xDF

#define PWM1DCH6                                 0x6
#define PWM1DCH6_address                         0x015
#define PWM1DCH6_position                        0x6
#define PWM1DCH6_size                            0x1
#define PWM1DCH6_value_mask                      0x40
#define PWM1DCH6_clear_mask                      0xBF

#define PWM1DCH7                                 0x7
#define PWM1DCH7_address                         0x015
#define PWM1DCH7_position                        0x7
#define PWM1DCH7_size                            0x1
#define PWM1DCH7_value_mask                      0x80
#define PWM1DCH7_clear_mask                      0x7F


/*----------------------------------------------------#
| PWM1CON                                        0x16 |
#-----------------------------------------------------#
| PWM1EN | PWM1OE | PWM1OUT | PWM1POL | - | - | - | - |
#-----------------------------------------------------#
| 7      | 6      | 5       | 4       | 3 | 2 | 1 | 0 |
#----------------------------------------------------*/

#define PWM1CON                                  0x0
#define PWM1CON_address                          0x016
#define PWM1CON_position                         0x0
#define PWM1CON_size                             0x8
#define PWM1CON_value_mask                       0xFF
#define PWM1CON_clear_mask                       0x0

#define PWM1POL                                  0x4
#define PWM1POL_address                          0x016
#define PWM1POL_position                         0x4
#define PWM1POL_size                             0x1
#define PWM1POL_value_mask                       0x10
#define PWM1POL_clear_mask                       0xEF

#define PWM1OUT                                  0x5
#define PWM1OUT_address                          0x016
#define PWM1OUT_position                         0x5
#define PWM1OUT_size                             0x1
#define PWM1OUT_value_mask                       0x20
#define PWM1OUT_clear_mask                       0xDF

#define PWM1OE                                   0x6
#define PWM1OE_address                           0x016
#define PWM1OE_position                          0x6
#define PWM1OE_size                              0x1
#define PWM1OE_value_mask                        0x40
#define PWM1OE_clear_mask                        0xBF

#define PWM1EN                                   0x7
#define PWM1EN_address                           0x016
#define PWM1EN_position                          0x7
#define PWM1EN_size                              0x1
#define PWM1EN_value_mask                        0x80
#define PWM1EN_clear_mask                        0x7F


/*--------------------------------------------#
| PWM2DCL                                0x17 |
#---------------------------------------------#
| PWM2DCL1 | PWM2DCL0 | - | - | - | - | - | - |
#---------------------------------------------#
| 7        | 6        | 5 | 4 | 3 | 2 | 1 | 0 |
#--------------------------------------------*/

#define PWM2DCL0                                 0x6
#define PWM2DCL0_address                         0x017
#define PWM2DCL0_position                        0x6
#define PWM2DCL0_size                            0x1
#define PWM2DCL0_value_mask                      0x40
#define PWM2DCL0_clear_mask                      0xBF

#define PWM2DCL                                  0x6
#define PWM2DCL_address                          0x017
#define PWM2DCL_position                         0x6
#define PWM2DCL_size                             0x2
#define PWM2DCL_value_mask                       0xC0
#define PWM2DCL_clear_mask                       0x3F

#define PWM2DCL1                                 0x7
#define PWM2DCL1_address                         0x017
#define PWM2DCL1_position                        0x7
#define PWM2DCL1_size                            0x1
#define PWM2DCL1_value_mask                      0x80
#define PWM2DCL1_clear_mask                      0x7F


/*--------------------------------------------------------------------------------------#
| PWM2DCH                                                                          0x18 |
#---------------------------------------------------------------------------------------#
| PWM2DCH7 | PWM2DCH6 | PWM2DCH5 | PWM2DCH4 | PWM2DCH3 | PWM2DCH2 | PWM2DCH1 | PWM2DCH0 |
#---------------------------------------------------------------------------------------#
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
#--------------------------------------------------------------------------------------*/

#define PWM2DCH0                                 0x0
#define PWM2DCH0_address                         0x018
#define PWM2DCH0_position                        0x0
#define PWM2DCH0_size                            0x1
#define PWM2DCH0_value_mask                      0x1
#define PWM2DCH0_clear_mask                      0xFE

#define PWM2DCH                                  0x0
#define PWM2DCH_address                          0x018
#define PWM2DCH_position                         0x0
#define PWM2DCH_size                             0x8
#define PWM2DCH_value_mask                       0xFF
#define PWM2DCH_clear_mask                       0x0

#define PWM2DCH1                                 0x1
#define PWM2DCH1_address                         0x018
#define PWM2DCH1_position                        0x1
#define PWM2DCH1_size                            0x1
#define PWM2DCH1_value_mask                      0x2
#define PWM2DCH1_clear_mask                      0xFD

#define PWM2DCH2                                 0x2
#define PWM2DCH2_address                         0x018
#define PWM2DCH2_position                        0x2
#define PWM2DCH2_size                            0x1
#define PWM2DCH2_value_mask                      0x4
#define PWM2DCH2_clear_mask                      0xFB

#define PWM2DCH3                                 0x3
#define PWM2DCH3_address                         0x018
#define PWM2DCH3_position                        0x3
#define PWM2DCH3_size                            0x1
#define PWM2DCH3_value_mask                      0x8
#define PWM2DCH3_clear_mask                      0xF7

#define PWM2DCH4                                 0x4
#define PWM2DCH4_address                         0x018
#define PWM2DCH4_position                        0x4
#define PWM2DCH4_size                            0x1
#define PWM2DCH4_value_mask                      0x10
#define PWM2DCH4_clear_mask                      0xEF

#define PWM2DCH5                                 0x5
#define PWM2DCH5_address                         0x018
#define PWM2DCH5_position                        0x5
#define PWM2DCH5_size                            0x1
#define PWM2DCH5_value_mask                      0x20
#define PWM2DCH5_clear_mask                      0xDF

#define PWM2DCH6                                 0x6
#define PWM2DCH6_address                         0x018
#define PWM2DCH6_position                        0x6
#define PWM2DCH6_size                            0x1
#define PWM2DCH6_value_mask                      0x40
#define PWM2DCH6_clear_mask                      0xBF

#define PWM2DCH7                                 0x7
#define PWM2DCH7_address                         0x018
#define PWM2DCH7_position                        0x7
#define PWM2DCH7_size                            0x1
#define PWM2DCH7_value_mask                      0x80
#define PWM2DCH7_clear_mask                      0x7F


/*----------------------------------------------------#
| PWM2CON                                        0x19 |
#-----------------------------------------------------#
| PWM2EN | PWM2OE | PWM2OUT | PWM2POL | - | - | - | - |
#-----------------------------------------------------#
| 7      | 6      | 5       | 4       | 3 | 2 | 1 | 0 |
#----------------------------------------------------*/

#define PWM2CON                                  0x0
#define PWM2CON_address                          0x019
#define PWM2CON_position                         0x0
#define PWM2CON_size                             0x8
#define PWM2CON_value_mask                       0xFF
#define PWM2CON_clear_mask                       0x0

#define PWM2POL                                  0x4
#define PWM2POL_address                          0x019
#define PWM2POL_position                         0x4
#define PWM2POL_size                             0x1
#define PWM2POL_value_mask                       0x10
#define PWM2POL_clear_mask                       0xEF

#define PWM2OUT                                  0x5
#define PWM2OUT_address                          0x019
#define PWM2OUT_position                         0x5
#define PWM2OUT_size                             0x1
#define PWM2OUT_value_mask                       0x20
#define PWM2OUT_clear_mask                       0xDF

#define PWM2OE                                   0x6
#define PWM2OE_address                           0x019
#define PWM2OE_position                          0x6
#define PWM2OE_size                              0x1
#define PWM2OE_value_mask                        0x40
#define PWM2OE_clear_mask                        0xBF

#define PWM2EN                                   0x7
#define PWM2EN_address                           0x019
#define PWM2EN_position                          0x7
#define PWM2EN_size                              0x1
#define PWM2EN_value_mask                        0x80
#define PWM2EN_clear_mask                        0x7F


/*--------------------------------------------------#
| IOCAP                                        0x1A |
#---------------------------------------------------#
| - | - | - | - | IOCAP3 | IOCAP2 | IOCAP1 | IOCAP0 |
#---------------------------------------------------#
| 7 | 6 | 5 | 4 | 3      | 2      | 1      | 0      |
#--------------------------------------------------*/

#define IOCAP                                    0x0
#define IOCAP_address                            0x01A
#define IOCAP_position                           0x0
#define IOCAP_size                               0x8
#define IOCAP_value_mask                         0xFF
#define IOCAP_clear_mask                         0x0

#define IOCAP0                                   0x0
#define IOCAP0_address                           0x01A
#define IOCAP0_position                          0x0
#define IOCAP0_size                              0x1
#define IOCAP0_value_mask                        0x1
#define IOCAP0_clear_mask                        0xFE

#define IOCAP1                                   0x1
#define IOCAP1_address                           0x01A
#define IOCAP1_position                          0x1
#define IOCAP1_size                              0x1
#define IOCAP1_value_mask                        0x2
#define IOCAP1_clear_mask                        0xFD

#define IOCAP2                                   0x2
#define IOCAP2_address                           0x01A
#define IOCAP2_position                          0x2
#define IOCAP2_size                              0x1
#define IOCAP2_value_mask                        0x4
#define IOCAP2_clear_mask                        0xFB

#define IOCAP3                                   0x3
#define IOCAP3_address                           0x01A
#define IOCAP3_position                          0x3
#define IOCAP3_size                              0x1
#define IOCAP3_value_mask                        0x8
#define IOCAP3_clear_mask                        0xF7


/*--------------------------------------------------#
| IOCAN                                        0x1B |
#---------------------------------------------------#
| - | - | - | - | IOCAN3 | IOCAN2 | IOCAN1 | IOCAN0 |
#---------------------------------------------------#
| 7 | 6 | 5 | 4 | 3      | 2      | 1      | 0      |
#--------------------------------------------------*/

#define IOCAN                                    0x0
#define IOCAN_address                            0x01B
#define IOCAN_position                           0x0
#define IOCAN_size                               0x8
#define IOCAN_value_mask                         0xFF
#define IOCAN_clear_mask                         0x0

#define IOCAN0                                   0x0
#define IOCAN0_address                           0x01B
#define IOCAN0_position                          0x0
#define IOCAN0_size                              0x1
#define IOCAN0_value_mask                        0x1
#define IOCAN0_clear_mask                        0xFE

#define IOCAN1                                   0x1
#define IOCAN1_address                           0x01B
#define IOCAN1_position                          0x1
#define IOCAN1_size                              0x1
#define IOCAN1_value_mask                        0x2
#define IOCAN1_clear_mask                        0xFD

#define IOCAN2                                   0x2
#define IOCAN2_address                           0x01B
#define IOCAN2_position                          0x2
#define IOCAN2_size                              0x1
#define IOCAN2_value_mask                        0x4
#define IOCAN2_clear_mask                        0xFB

#define IOCAN3                                   0x3
#define IOCAN3_address                           0x01B
#define IOCAN3_position                          0x3
#define IOCAN3_size                              0x1
#define IOCAN3_value_mask                        0x8
#define IOCAN3_clear_mask                        0xF7


/*--------------------------------------------------#
| IOCAF                                        0x1C |
#---------------------------------------------------#
| - | - | - | - | IOCAF3 | IOCAF2 | IOCAF1 | IOCAF0 |
#---------------------------------------------------#
| 7 | 6 | 5 | 4 | 3      | 2      | 1      | 0      |
#--------------------------------------------------*/

#define IOCAF                                    0x0
#define IOCAF_address                            0x01C
#define IOCAF_position                           0x0
#define IOCAF_size                               0x8
#define IOCAF_value_mask                         0xFF
#define IOCAF_clear_mask                         0x0

#define IOCAF0                                   0x0
#define IOCAF0_address                           0x01C
#define IOCAF0_position                          0x0
#define IOCAF0_size                              0x1
#define IOCAF0_value_mask                        0x1
#define IOCAF0_clear_mask                        0xFE

#define IOCAF1                                   0x1
#define IOCAF1_address                           0x01C
#define IOCAF1_position                          0x1
#define IOCAF1_size                              0x1
#define IOCAF1_value_mask                        0x2
#define IOCAF1_clear_mask                        0xFD

#define IOCAF2                                   0x2
#define IOCAF2_address                           0x01C
#define IOCAF2_position                          0x2
#define IOCAF2_size                              0x1
#define IOCAF2_value_mask                        0x4
#define IOCAF2_clear_mask                        0xFB

#define IOCAF3                                   0x3
#define IOCAF3_address                           0x01C
#define IOCAF3_position                          0x3
#define IOCAF3_size                              0x1
#define IOCAF3_value_mask                        0x8
#define IOCAF3_clear_mask                        0xF7


/*--------------------------------------------------------#
| FVRCON                                             0x1D |
#---------------------------------------------------------#
| FVREN | FVRRDY | TSEN | TSRNG | - | - | ADFVR1 | ADFVR0 |
#---------------------------------------------------------#
| 7     | 6      | 5    | 4     | 3 | 2 | 1      | 0      |
#--------------------------------------------------------*/

#define FVRCON                                   0x0
#define FVRCON_address                           0x01D
#define FVRCON_position                          0x0
#define FVRCON_size                              0x8
#define FVRCON_value_mask                        0xFF
#define FVRCON_clear_mask                        0x0

#define ADFVR0                                   0x0
#define ADFVR0_address                           0x01D
#define ADFVR0_position                          0x0
#define ADFVR0_size                              0x1
#define ADFVR0_value_mask                        0x1
#define ADFVR0_clear_mask                        0xFE

#define ADFVR                                    0x0
#define ADFVR_address                            0x01D
#define ADFVR_position                           0x0
#define ADFVR_size                               0x2
#define ADFVR_value_mask                         0x3
#define ADFVR_clear_mask                         0xFC

#define ADFVR1                                   0x1
#define ADFVR1_address                           0x01D
#define ADFVR1_position                          0x1
#define ADFVR1_size                              0x1
#define ADFVR1_value_mask                        0x2
#define ADFVR1_clear_mask                        0xFD

#define TSRNG                                    0x4
#define TSRNG_address                            0x01D
#define TSRNG_position                           0x4
#define TSRNG_size                               0x1
#define TSRNG_value_mask                         0x10
#define TSRNG_clear_mask                         0xEF

#define TSEN                                     0x5
#define TSEN_address                             0x01D
#define TSEN_position                            0x5
#define TSEN_size                                0x1
#define TSEN_value_mask                          0x20
#define TSEN_clear_mask                          0xDF

#define FVRRDY                                   0x6
#define FVRRDY_address                           0x01D
#define FVRRDY_position                          0x6
#define FVRRDY_size                              0x1
#define FVRRDY_value_mask                        0x40
#define FVRRDY_clear_mask                        0xBF

#define FVREN                                    0x7
#define FVREN_address                            0x01D
#define FVREN_position                           0x7
#define FVREN_size                               0x1
#define FVREN_value_mask                         0x80
#define FVREN_clear_mask                         0x7F


/*-------------------------------------------------------------#
| ADCON                                                   0x1F |
#--------------------------------------------------------------#
| ADCS2 | ADCS1 | ADCS0 | CHS2 | CHS1 | CHS0 | GO_nDONE | ADON |
#--------------------------------------------------------------#
| 7     | 6     | 5     | 4    | 3    | 2    | 1        | 0    |
#-------------------------------------------------------------*/

#define ADCON                                    0x0
#define ADCON_address                            0x01F
#define ADCON_position                           0x0
#define ADCON_size                               0x8
#define ADCON_value_mask                         0xFF
#define ADCON_clear_mask                         0x0

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
#define CHS_size                                 0x3
#define CHS_value_mask                           0x1C
#define CHS_clear_mask                           0xE3

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

#define ADCS                                     0x5
#define ADCS_address                             0x01F
#define ADCS_position                            0x5
#define ADCS_size                                0x3
#define ADCS_value_mask                          0xE0
#define ADCS_clear_mask                          0x1F

#define ADCS0                                    0x5
#define ADCS0_address                            0x01F
#define ADCS0_position                           0x5
#define ADCS0_size                               0x1
#define ADCS0_value_mask                         0x20
#define ADCS0_clear_mask                         0xDF

#define ADCS1                                    0x6
#define ADCS1_address                            0x01F
#define ADCS1_position                           0x6
#define ADCS1_size                               0x1
#define ADCS1_value_mask                         0x40
#define ADCS1_clear_mask                         0xBF

#define ADCS2                                    0x7
#define ADCS2_address                            0x01F
#define ADCS2_position                           0x7
#define ADCS2_size                               0x1
#define ADCS2_value_mask                         0x80
#define ADCS2_clear_mask                         0x7F


/*------------------------------#
| PMADRL                   0x20 |
#-------------------------------#
| PMADR                         |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define PMADRL                                   0x0
#define PMADRL_address                           0x020
#define PMADRL_position                          0x0
#define PMADRL_size                              0x8
#define PMADRL_value_mask                        0xFF
#define PMADRL_clear_mask                        0x0

#define PMADR                                    0x0
#define PMADR_address                            0x020
#define PMADR_position                           0x0
#define PMADR_size                               0x8
#define PMADR_value_mask                         0xFF
#define PMADR_clear_mask                         0x0


/*-----------------------------------#
| PMADRH                        0x21 |
#------------------------------------#
| - | - | - | - | - | - | - | PMADR8 |
#------------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0      |
#-----------------------------------*/

#define PMADRH                                   0x0
#define PMADRH_address                           0x021
#define PMADRH_position                          0x0
#define PMADRH_size                              0x8
#define PMADRH_value_mask                        0xFF
#define PMADRH_clear_mask                        0x0

#define PMADR8                                   0x0
#define PMADR8_address                           0x021
#define PMADR8_position                          0x0
#define PMADR8_size                              0x1
#define PMADR8_value_mask                        0x1
#define PMADR8_clear_mask                        0xFE


/*------------------------------#
| PMDATL                   0x22 |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define PMDATL                                   0x0
#define PMDATL_address                           0x022
#define PMDATL_position                          0x0
#define PMDATL_size                              0x8
#define PMDATL_value_mask                        0xFF
#define PMDATL_clear_mask                        0x0


/*------------------------------#
| PMDATH                   0x23 |
#-------------------------------#
| - | - | PMDATH                |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define PMDATH                                   0x0
#define PMDATH_address                           0x023
#define PMDATH_position                          0x0
#define PMDATH_size                              0x6
#define PMDATH_value_mask                        0x3F
#define PMDATH_clear_mask                        0xC0


/*------------------------------------------------#
| PMCON1                                     0x24 |
#-------------------------------------------------#
| - | CFGS | LWLO | FREE | WRERR | WREN | WR | RD |
#-------------------------------------------------#
| 7 | 6    | 5    | 4    | 3     | 2    | 1  | 0  |
#------------------------------------------------*/

#define PMCON1                                   0x0
#define PMCON1_address                           0x024
#define PMCON1_position                          0x0
#define PMCON1_size                              0x8
#define PMCON1_value_mask                        0xFF
#define PMCON1_clear_mask                        0x0

#define RD                                       0x0
#define RD_address                               0x024
#define RD_position                              0x0
#define RD_size                                  0x1
#define RD_value_mask                            0x1
#define RD_clear_mask                            0xFE

#define WR                                       0x1
#define WR_address                               0x024
#define WR_position                              0x1
#define WR_size                                  0x1
#define WR_value_mask                            0x2
#define WR_clear_mask                            0xFD

#define WREN                                     0x2
#define WREN_address                             0x024
#define WREN_position                            0x2
#define WREN_size                                0x1
#define WREN_value_mask                          0x4
#define WREN_clear_mask                          0xFB

#define WRERR                                    0x3
#define WRERR_address                            0x024
#define WRERR_position                           0x3
#define WRERR_size                               0x1
#define WRERR_value_mask                         0x8
#define WRERR_clear_mask                         0xF7

#define FREE                                     0x4
#define FREE_address                             0x024
#define FREE_position                            0x4
#define FREE_size                                0x1
#define FREE_value_mask                          0x10
#define FREE_clear_mask                          0xEF

#define LWLO                                     0x5
#define LWLO_address                             0x024
#define LWLO_position                            0x5
#define LWLO_size                                0x1
#define LWLO_value_mask                          0x20
#define LWLO_clear_mask                          0xDF

#define CFGS                                     0x6
#define CFGS_address                             0x024
#define CFGS_position                            0x6
#define CFGS_size                                0x1
#define CFGS_value_mask                          0x40
#define CFGS_clear_mask                          0xBF


/*------------------------------#
| PMCON2                   0x25 |
#-------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1 | 0 |
#------------------------------*/

#define PMCON2                                   0x0
#define PMCON2_address                           0x025
#define PMCON2_position                          0x0
#define PMCON2_size                              0x8
#define PMCON2_value_mask                        0xFF
#define PMCON2_clear_mask                        0x0


/*-----------------------------------#
| CLKRCON                       0x26 |
#------------------------------------#
| - | CLKROE | - | - | - | - | - | - |
#------------------------------------#
| 7 | 6      | 5 | 4 | 3 | 2 | 1 | 0 |
#-----------------------------------*/

#define CLKRCON                                  0x0
#define CLKRCON_address                          0x026
#define CLKRCON_position                         0x0
#define CLKRCON_size                             0x8
#define CLKRCON_value_mask                       0xFF
#define CLKRCON_clear_mask                       0x0

#define CLKROE                                   0x6
#define CLKROE_address                           0x026
#define CLKROE_position                          0x6
#define CLKROE_size                              0x1
#define CLKROE_value_mask                        0x40
#define CLKROE_clear_mask                        0xBF


/*--------------------------------------------------------------------------------------#
| NCO1ACCL                                                                         0x27 |
#---------------------------------------------------------------------------------------#
| NCO1ACC7 | NCO1ACC6 | NCO1ACC5 | NCO1ACC4 | NCO1ACC3 | NCO1ACC2 | NCO1ACC1 | NCO1ACC0 |
#---------------------------------------------------------------------------------------#
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
#--------------------------------------------------------------------------------------*/

#define NCO1ACCL                                 0x0
#define NCO1ACCL_address                         0x027
#define NCO1ACCL_position                        0x0
#define NCO1ACCL_size                            0x8
#define NCO1ACCL_value_mask                      0xFF
#define NCO1ACCL_clear_mask                      0x0

#define NCO1ACC0                                 0x0
#define NCO1ACC0_address                         0x027
#define NCO1ACC0_position                        0x0
#define NCO1ACC0_size                            0x1
#define NCO1ACC0_value_mask                      0x1
#define NCO1ACC0_clear_mask                      0xFE

#define NCO1ACC1                                 0x1
#define NCO1ACC1_address                         0x027
#define NCO1ACC1_position                        0x1
#define NCO1ACC1_size                            0x1
#define NCO1ACC1_value_mask                      0x2
#define NCO1ACC1_clear_mask                      0xFD

#define NCO1ACC2                                 0x2
#define NCO1ACC2_address                         0x027
#define NCO1ACC2_position                        0x2
#define NCO1ACC2_size                            0x1
#define NCO1ACC2_value_mask                      0x4
#define NCO1ACC2_clear_mask                      0xFB

#define NCO1ACC3                                 0x3
#define NCO1ACC3_address                         0x027
#define NCO1ACC3_position                        0x3
#define NCO1ACC3_size                            0x1
#define NCO1ACC3_value_mask                      0x8
#define NCO1ACC3_clear_mask                      0xF7

#define NCO1ACC4                                 0x4
#define NCO1ACC4_address                         0x027
#define NCO1ACC4_position                        0x4
#define NCO1ACC4_size                            0x1
#define NCO1ACC4_value_mask                      0x10
#define NCO1ACC4_clear_mask                      0xEF

#define NCO1ACC5                                 0x5
#define NCO1ACC5_address                         0x027
#define NCO1ACC5_position                        0x5
#define NCO1ACC5_size                            0x1
#define NCO1ACC5_value_mask                      0x20
#define NCO1ACC5_clear_mask                      0xDF

#define NCO1ACC6                                 0x6
#define NCO1ACC6_address                         0x027
#define NCO1ACC6_position                        0x6
#define NCO1ACC6_size                            0x1
#define NCO1ACC6_value_mask                      0x40
#define NCO1ACC6_clear_mask                      0xBF

#define NCO1ACC7                                 0x7
#define NCO1ACC7_address                         0x027
#define NCO1ACC7_position                        0x7
#define NCO1ACC7_size                            0x1
#define NCO1ACC7_value_mask                      0x80
#define NCO1ACC7_clear_mask                      0x7F


/*--------------------------------------------------------------------------------------------#
| NCO1ACCH                                                                               0x28 |
#---------------------------------------------------------------------------------------------#
| NCO1ACC15 | NCO1ACC14 | NCO1ACC13 | NCO1ACC12 | NCO1ACC11 | NCO1ACC10 | NCO1ACC9 | NCO1ACC8 |
#---------------------------------------------------------------------------------------------#
| 7         | 6         | 5         | 4         | 3         | 2         | 1        | 0        |
#--------------------------------------------------------------------------------------------*/

#define NCO1ACCH                                 0x0
#define NCO1ACCH_address                         0x028
#define NCO1ACCH_position                        0x0
#define NCO1ACCH_size                            0x8
#define NCO1ACCH_value_mask                      0xFF
#define NCO1ACCH_clear_mask                      0x0

#define NCO1ACC8                                 0x0
#define NCO1ACC8_address                         0x028
#define NCO1ACC8_position                        0x0
#define NCO1ACC8_size                            0x1
#define NCO1ACC8_value_mask                      0x1
#define NCO1ACC8_clear_mask                      0xFE

#define NCO1ACC9                                 0x1
#define NCO1ACC9_address                         0x028
#define NCO1ACC9_position                        0x1
#define NCO1ACC9_size                            0x1
#define NCO1ACC9_value_mask                      0x2
#define NCO1ACC9_clear_mask                      0xFD

#define NCO1ACC10                                0x2
#define NCO1ACC10_address                        0x028
#define NCO1ACC10_position                       0x2
#define NCO1ACC10_size                           0x1
#define NCO1ACC10_value_mask                     0x4
#define NCO1ACC10_clear_mask                     0xFB

#define NCO1ACC11                                0x3
#define NCO1ACC11_address                        0x028
#define NCO1ACC11_position                       0x3
#define NCO1ACC11_size                           0x1
#define NCO1ACC11_value_mask                     0x8
#define NCO1ACC11_clear_mask                     0xF7

#define NCO1ACC12                                0x4
#define NCO1ACC12_address                        0x028
#define NCO1ACC12_position                       0x4
#define NCO1ACC12_size                           0x1
#define NCO1ACC12_value_mask                     0x10
#define NCO1ACC12_clear_mask                     0xEF

#define NCO1ACC13                                0x5
#define NCO1ACC13_address                        0x028
#define NCO1ACC13_position                       0x5
#define NCO1ACC13_size                           0x1
#define NCO1ACC13_value_mask                     0x20
#define NCO1ACC13_clear_mask                     0xDF

#define NCO1ACC14                                0x6
#define NCO1ACC14_address                        0x028
#define NCO1ACC14_position                       0x6
#define NCO1ACC14_size                           0x1
#define NCO1ACC14_value_mask                     0x40
#define NCO1ACC14_clear_mask                     0xBF

#define NCO1ACC15                                0x7
#define NCO1ACC15_address                        0x028
#define NCO1ACC15_position                       0x7
#define NCO1ACC15_size                           0x1
#define NCO1ACC15_value_mask                     0x80
#define NCO1ACC15_clear_mask                     0x7F


/*--------------------------------------------------------------#
| NCO1ACCU                                                 0x29 |
#---------------------------------------------------------------#
| - | - | - | - | NCO1ACC19 | NCO1ACC18 | NCO1ACC17 | NCO1ACC16 |
#---------------------------------------------------------------#
| 7 | 6 | 5 | 4 | 3         | 2         | 1         | 0         |
#--------------------------------------------------------------*/

#define NCO1ACCU                                 0x0
#define NCO1ACCU_address                         0x029
#define NCO1ACCU_position                        0x0
#define NCO1ACCU_size                            0x8
#define NCO1ACCU_value_mask                      0xFF
#define NCO1ACCU_clear_mask                      0x0

#define NCO1ACC16                                0x0
#define NCO1ACC16_address                        0x029
#define NCO1ACC16_position                       0x0
#define NCO1ACC16_size                           0x1
#define NCO1ACC16_value_mask                     0x1
#define NCO1ACC16_clear_mask                     0xFE

#define NCO1ACC17                                0x1
#define NCO1ACC17_address                        0x029
#define NCO1ACC17_position                       0x1
#define NCO1ACC17_size                           0x1
#define NCO1ACC17_value_mask                     0x2
#define NCO1ACC17_clear_mask                     0xFD

#define NCO1ACC18                                0x2
#define NCO1ACC18_address                        0x029
#define NCO1ACC18_position                       0x2
#define NCO1ACC18_size                           0x1
#define NCO1ACC18_value_mask                     0x4
#define NCO1ACC18_clear_mask                     0xFB

#define NCO1ACC19                                0x3
#define NCO1ACC19_address                        0x029
#define NCO1ACC19_position                       0x3
#define NCO1ACC19_size                           0x1
#define NCO1ACC19_value_mask                     0x8
#define NCO1ACC19_clear_mask                     0xF7


/*--------------------------------------------------------------------------------------#
| NCO1INCL                                                                         0x2A |
#---------------------------------------------------------------------------------------#
| NCO1INC7 | NCO1INC6 | NCO1INC5 | NCO1INC4 | NCO1INC3 | NCO1INC2 | NCO1INC1 | NCO1INC0 |
#---------------------------------------------------------------------------------------#
| 7        | 6        | 5        | 4        | 3        | 2        | 1        | 0        |
#--------------------------------------------------------------------------------------*/

#define NCO1INCL                                 0x0
#define NCO1INCL_address                         0x02A
#define NCO1INCL_position                        0x0
#define NCO1INCL_size                            0x8
#define NCO1INCL_value_mask                      0xFF
#define NCO1INCL_clear_mask                      0x0

#define NCO1INC0                                 0x0
#define NCO1INC0_address                         0x02A
#define NCO1INC0_position                        0x0
#define NCO1INC0_size                            0x1
#define NCO1INC0_value_mask                      0x1
#define NCO1INC0_clear_mask                      0xFE

#define NCO1INC1                                 0x1
#define NCO1INC1_address                         0x02A
#define NCO1INC1_position                        0x1
#define NCO1INC1_size                            0x1
#define NCO1INC1_value_mask                      0x2
#define NCO1INC1_clear_mask                      0xFD

#define NCO1INC2                                 0x2
#define NCO1INC2_address                         0x02A
#define NCO1INC2_position                        0x2
#define NCO1INC2_size                            0x1
#define NCO1INC2_value_mask                      0x4
#define NCO1INC2_clear_mask                      0xFB

#define NCO1INC3                                 0x3
#define NCO1INC3_address                         0x02A
#define NCO1INC3_position                        0x3
#define NCO1INC3_size                            0x1
#define NCO1INC3_value_mask                      0x8
#define NCO1INC3_clear_mask                      0xF7

#define NCO1INC4                                 0x4
#define NCO1INC4_address                         0x02A
#define NCO1INC4_position                        0x4
#define NCO1INC4_size                            0x1
#define NCO1INC4_value_mask                      0x10
#define NCO1INC4_clear_mask                      0xEF

#define NCO1INC5                                 0x5
#define NCO1INC5_address                         0x02A
#define NCO1INC5_position                        0x5
#define NCO1INC5_size                            0x1
#define NCO1INC5_value_mask                      0x20
#define NCO1INC5_clear_mask                      0xDF

#define NCO1INC6                                 0x6
#define NCO1INC6_address                         0x02A
#define NCO1INC6_position                        0x6
#define NCO1INC6_size                            0x1
#define NCO1INC6_value_mask                      0x40
#define NCO1INC6_clear_mask                      0xBF

#define NCO1INC7                                 0x7
#define NCO1INC7_address                         0x02A
#define NCO1INC7_position                        0x7
#define NCO1INC7_size                            0x1
#define NCO1INC7_value_mask                      0x80
#define NCO1INC7_clear_mask                      0x7F


/*--------------------------------------------------------------------------------------------#
| NCO1INCH                                                                               0x2B |
#---------------------------------------------------------------------------------------------#
| NCO1INC15 | NCO1INC14 | NCO1INC13 | NCO1INC12 | NCO1INC11 | NCO1INC10 | NCO1INC9 | NCO1INC8 |
#---------------------------------------------------------------------------------------------#
| 7         | 6         | 5         | 4         | 3         | 2         | 1        | 0        |
#--------------------------------------------------------------------------------------------*/

#define NCO1INCH                                 0x0
#define NCO1INCH_address                         0x02B
#define NCO1INCH_position                        0x0
#define NCO1INCH_size                            0x8
#define NCO1INCH_value_mask                      0xFF
#define NCO1INCH_clear_mask                      0x0

#define NCO1INC8                                 0x0
#define NCO1INC8_address                         0x02B
#define NCO1INC8_position                        0x0
#define NCO1INC8_size                            0x1
#define NCO1INC8_value_mask                      0x1
#define NCO1INC8_clear_mask                      0xFE

#define NCO1INC9                                 0x1
#define NCO1INC9_address                         0x02B
#define NCO1INC9_position                        0x1
#define NCO1INC9_size                            0x1
#define NCO1INC9_value_mask                      0x2
#define NCO1INC9_clear_mask                      0xFD

#define NCO1INC10                                0x2
#define NCO1INC10_address                        0x02B
#define NCO1INC10_position                       0x2
#define NCO1INC10_size                           0x1
#define NCO1INC10_value_mask                     0x4
#define NCO1INC10_clear_mask                     0xFB

#define NCO1INC11                                0x3
#define NCO1INC11_address                        0x02B
#define NCO1INC11_position                       0x3
#define NCO1INC11_size                           0x1
#define NCO1INC11_value_mask                     0x8
#define NCO1INC11_clear_mask                     0xF7

#define NCO1INC12                                0x4
#define NCO1INC12_address                        0x02B
#define NCO1INC12_position                       0x4
#define NCO1INC12_size                           0x1
#define NCO1INC12_value_mask                     0x10
#define NCO1INC12_clear_mask                     0xEF

#define NCO1INC13                                0x5
#define NCO1INC13_address                        0x02B
#define NCO1INC13_position                       0x5
#define NCO1INC13_size                           0x1
#define NCO1INC13_value_mask                     0x20
#define NCO1INC13_clear_mask                     0xDF

#define NCO1INC14                                0x6
#define NCO1INC14_address                        0x02B
#define NCO1INC14_position                       0x6
#define NCO1INC14_size                           0x1
#define NCO1INC14_value_mask                     0x40
#define NCO1INC14_clear_mask                     0xBF

#define NCO1INC15                                0x7
#define NCO1INC15_address                        0x02B
#define NCO1INC15_position                       0x7
#define NCO1INC15_size                           0x1
#define NCO1INC15_value_mask                     0x80
#define NCO1INC15_clear_mask                     0x7F


/*------------------------------------------------#
| NCO1CON                                    0x2D |
#-------------------------------------------------#
| N1EN | N1OE | N1OUT | N1POL | - | - | - | N1PFM |
#-------------------------------------------------#
| 7    | 6    | 5     | 4     | 3 | 2 | 1 | 0     |
#------------------------------------------------*/

#define NCO1CON                                  0x0
#define NCO1CON_address                          0x02D
#define NCO1CON_position                         0x0
#define NCO1CON_size                             0x8
#define NCO1CON_value_mask                       0xFF
#define NCO1CON_clear_mask                       0x0

#define N1PFM                                    0x0
#define N1PFM_address                            0x02D
#define N1PFM_position                           0x0
#define N1PFM_size                               0x1
#define N1PFM_value_mask                         0x1
#define N1PFM_clear_mask                         0xFE

#define N1POL                                    0x4
#define N1POL_address                            0x02D
#define N1POL_position                           0x4
#define N1POL_size                               0x1
#define N1POL_value_mask                         0x10
#define N1POL_clear_mask                         0xEF

#define N1OUT                                    0x5
#define N1OUT_address                            0x02D
#define N1OUT_position                           0x5
#define N1OUT_size                               0x1
#define N1OUT_value_mask                         0x20
#define N1OUT_clear_mask                         0xDF

#define N1OE                                     0x6
#define N1OE_address                             0x02D
#define N1OE_position                            0x6
#define N1OE_size                                0x1
#define N1OE_value_mask                          0x40
#define N1OE_clear_mask                          0xBF

#define N1EN                                     0x7
#define N1EN_address                             0x02D
#define N1EN_position                            0x7
#define N1EN_size                                0x1
#define N1EN_value_mask                          0x80
#define N1EN_clear_mask                          0x7F


/*-------------------------------------------------------#
| NCO1CLK                                           0x2E |
#--------------------------------------------------------#
| N1PWS2 | N1PWS1 | N1PWS0 | - | - | - | N1CKS1 | N1CKS0 |
#--------------------------------------------------------#
| 7      | 6      | 5      | 4 | 3 | 2 | 1      | 0      |
#-------------------------------------------------------*/

#define NCO1CLK                                  0x0
#define NCO1CLK_address                          0x02E
#define NCO1CLK_position                         0x0
#define NCO1CLK_size                             0x8
#define NCO1CLK_value_mask                       0xFF
#define NCO1CLK_clear_mask                       0x0

#define N1CKS                                    0x0
#define N1CKS_address                            0x02E
#define N1CKS_position                           0x0
#define N1CKS_size                               0x4
#define N1CKS_value_mask                         0xF
#define N1CKS_clear_mask                         0xF0

#define N1CKS0                                   0x0
#define N1CKS0_address                           0x02E
#define N1CKS0_position                          0x0
#define N1CKS0_size                              0x1
#define N1CKS0_value_mask                        0x1
#define N1CKS0_clear_mask                        0xFE

#define N1CKS1                                   0x1
#define N1CKS1_address                           0x02E
#define N1CKS1_position                          0x1
#define N1CKS1_size                              0x1
#define N1CKS1_value_mask                        0x2
#define N1CKS1_clear_mask                        0xFD

#define N1PWS0                                   0x5
#define N1PWS0_address                           0x02E
#define N1PWS0_position                          0x5
#define N1PWS0_size                              0x1
#define N1PWS0_value_mask                        0x20
#define N1PWS0_clear_mask                        0xDF

#define N1PWS                                    0x5
#define N1PWS_address                            0x02E
#define N1PWS_position                           0x5
#define N1PWS_size                               0x3
#define N1PWS_value_mask                         0xE0
#define N1PWS_clear_mask                         0x1F

#define N1PWS1                                   0x6
#define N1PWS1_address                           0x02E
#define N1PWS1_position                          0x6
#define N1PWS1_size                              0x1
#define N1PWS1_value_mask                        0x40
#define N1PWS1_clear_mask                        0xBF

#define N1PWS2                                   0x7
#define N1PWS2_address                           0x02E
#define N1PWS2_position                          0x7
#define N1PWS2_size                              0x1
#define N1PWS2_value_mask                        0x80
#define N1PWS2_clear_mask                        0x7F


/*------------------------------------------------------------#
| WDTCON                                                 0x30 |
#-------------------------------------------------------------#
| - | - | WDTPS4 | WDTPS3 | WDTPS2 | WDTPS1 | WDTPS0 | SWDTEN |
#-------------------------------------------------------------#
| 7 | 6 | 5      | 4      | 3      | 2      | 1      | 0      |
#------------------------------------------------------------*/

#define WDTCON                                   0x0
#define WDTCON_address                           0x030
#define WDTCON_position                          0x0
#define WDTCON_size                              0x8
#define WDTCON_value_mask                        0xFF
#define WDTCON_clear_mask                        0x0

#define SWDTEN                                   0x0
#define SWDTEN_address                           0x030
#define SWDTEN_position                          0x0
#define SWDTEN_size                              0x1
#define SWDTEN_value_mask                        0x1
#define SWDTEN_clear_mask                        0xFE

#define WDTPS                                    0x1
#define WDTPS_address                            0x030
#define WDTPS_position                           0x1
#define WDTPS_size                               0x5
#define WDTPS_value_mask                         0x3E
#define WDTPS_clear_mask                         0xC1

#define WDTPS0                                   0x1
#define WDTPS0_address                           0x030
#define WDTPS0_position                          0x1
#define WDTPS0_size                              0x1
#define WDTPS0_value_mask                        0x2
#define WDTPS0_clear_mask                        0xFD

#define WDTPS1                                   0x2
#define WDTPS1_address                           0x030
#define WDTPS1_position                          0x2
#define WDTPS1_size                              0x1
#define WDTPS1_value_mask                        0x4
#define WDTPS1_clear_mask                        0xFB

#define WDTPS2                                   0x3
#define WDTPS2_address                           0x030
#define WDTPS2_position                          0x3
#define WDTPS2_size                              0x1
#define WDTPS2_value_mask                        0x8
#define WDTPS2_clear_mask                        0xF7

#define WDTPS3                                   0x4
#define WDTPS3_address                           0x030
#define WDTPS3_position                          0x4
#define WDTPS3_size                              0x1
#define WDTPS3_value_mask                        0x10
#define WDTPS3_clear_mask                        0xEF

#define WDTPS4                                   0x5
#define WDTPS4_address                           0x030
#define WDTPS4_position                          0x5
#define WDTPS4_size                              0x1
#define WDTPS4_value_mask                        0x20
#define WDTPS4_clear_mask                        0xDF


/*-------------------------------------------------------------------------#
| CLC1CON                                                             0x31 |
#--------------------------------------------------------------------------#
| LC1EN | LC1OE | LCOUT | LC1INTP | LCINTN | LC1MODE2 | LCMODE1 | LC1MODE0 |
#--------------------------------------------------------------------------#
| 7     | 6     | 5     | 4       | 3      | 2        | 1       | 0        |
#-------------------------------------------------------------------------*/

#define CLC1CON                                  0x0
#define CLC1CON_address                          0x031
#define CLC1CON_position                         0x0
#define CLC1CON_size                             0x8
#define CLC1CON_value_mask                       0xFF
#define CLC1CON_clear_mask                       0x0

#define LC1MODE                                  0x0
#define LC1MODE_address                          0x031
#define LC1MODE_position                         0x0
#define LC1MODE_size                             0x3
#define LC1MODE_value_mask                       0x7
#define LC1MODE_clear_mask                       0xF8

#define LC1MODE0                                 0x0
#define LC1MODE0_address                         0x031
#define LC1MODE0_position                        0x0
#define LC1MODE0_size                            0x1
#define LC1MODE0_value_mask                      0x1
#define LC1MODE0_clear_mask                      0xFE

#define LCMODE0                                  0x0
#define LCMODE0_address                          0x031
#define LCMODE0_position                         0x0
#define LCMODE0_size                             0x1
#define LCMODE0_value_mask                       0x1
#define LCMODE0_clear_mask                       0xFE

#define LCMODE1                                  0x1
#define LCMODE1_address                          0x031
#define LCMODE1_position                         0x1
#define LCMODE1_size                             0x1
#define LCMODE1_value_mask                       0x2
#define LCMODE1_clear_mask                       0xFD

#define LC1MODE1                                 0x1
#define LC1MODE1_address                         0x031
#define LC1MODE1_position                        0x1
#define LC1MODE1_size                            0x1
#define LC1MODE1_value_mask                      0x2
#define LC1MODE1_clear_mask                      0xFD

#define LCMODE2                                  0x2
#define LCMODE2_address                          0x031
#define LCMODE2_position                         0x2
#define LCMODE2_size                             0x1
#define LCMODE2_value_mask                       0x4
#define LCMODE2_clear_mask                       0xFB

#define LC1MODE2                                 0x2
#define LC1MODE2_address                         0x031
#define LC1MODE2_position                        0x2
#define LC1MODE2_size                            0x1
#define LC1MODE2_value_mask                      0x4
#define LC1MODE2_clear_mask                      0xFB

#define LCINTN                                   0x3
#define LCINTN_address                           0x031
#define LCINTN_position                          0x3
#define LCINTN_size                              0x1
#define LCINTN_value_mask                        0x8
#define LCINTN_clear_mask                        0xF7

#define LC1INTN                                  0x3
#define LC1INTN_address                          0x031
#define LC1INTN_position                         0x3
#define LC1INTN_size                             0x1
#define LC1INTN_value_mask                       0x8
#define LC1INTN_clear_mask                       0xF7

#define LC1INTP                                  0x4
#define LC1INTP_address                          0x031
#define LC1INTP_position                         0x4
#define LC1INTP_size                             0x1
#define LC1INTP_value_mask                       0x10
#define LC1INTP_clear_mask                       0xEF

#define LCINTP                                   0x4
#define LCINTP_address                           0x031
#define LCINTP_position                          0x4
#define LCINTP_size                              0x1
#define LCINTP_value_mask                        0x10
#define LCINTP_clear_mask                        0xEF

#define LCOUT                                    0x5
#define LCOUT_address                            0x031
#define LCOUT_position                           0x5
#define LCOUT_size                               0x1
#define LCOUT_value_mask                         0x20
#define LCOUT_clear_mask                         0xDF

#define LC1OUT                                   0x5
#define LC1OUT_address                           0x031
#define LC1OUT_position                          0x5
#define LC1OUT_size                              0x1
#define LC1OUT_value_mask                        0x20
#define LC1OUT_clear_mask                        0xDF

#define LC1OE                                    0x6
#define LC1OE_address                            0x031
#define LC1OE_position                           0x6
#define LC1OE_size                               0x1
#define LC1OE_value_mask                         0x40
#define LC1OE_clear_mask                         0xBF

#define LCOE                                     0x6
#define LCOE_address                             0x031
#define LCOE_position                            0x6
#define LCOE_size                                0x1
#define LCOE_value_mask                          0x40
#define LCOE_clear_mask                          0xBF

#define LC1EN                                    0x7
#define LC1EN_address                            0x031
#define LC1EN_position                           0x7
#define LC1EN_size                               0x1
#define LC1EN_value_mask                         0x80
#define LC1EN_clear_mask                         0x7F

#define LCEN                                     0x7
#define LCEN_address                             0x031
#define LCEN_position                            0x7
#define LCEN_size                                0x1
#define LCEN_value_mask                          0x80
#define LCEN_clear_mask                          0x7F


/*------------------------------------------------------------------#
| CLC1SEL0                                                     0x32 |
#-------------------------------------------------------------------#
| - | LC1D2S2 | LC1D2S1 | LC1D2S0 | - | LC1D1S2 | LC1D1S1 | LC1D1S0 |
#-------------------------------------------------------------------#
| 7 | 6       | 5       | 4       | 3 | 2       | 1       | 0       |
#------------------------------------------------------------------*/

#define CLC1SEL0                                 0x0
#define CLC1SEL0_address                         0x032
#define CLC1SEL0_position                        0x0
#define CLC1SEL0_size                            0x8
#define CLC1SEL0_value_mask                      0xFF
#define CLC1SEL0_clear_mask                      0x0

#define LC1D1S                                   0x0
#define LC1D1S_address                           0x032
#define LC1D1S_position                          0x0
#define LC1D1S_size                              0x3
#define LC1D1S_value_mask                        0x7
#define LC1D1S_clear_mask                        0xF8

#define LC1D1S0                                  0x0
#define LC1D1S0_address                          0x032
#define LC1D1S0_position                         0x0
#define LC1D1S0_size                             0x1
#define LC1D1S0_value_mask                       0x1
#define LC1D1S0_clear_mask                       0xFE

#define D1S0                                     0x0
#define D1S0_address                             0x032
#define D1S0_position                            0x0
#define D1S0_size                                0x1
#define D1S0_value_mask                          0x1
#define D1S0_clear_mask                          0xFE

#define LC1D1S1                                  0x1
#define LC1D1S1_address                          0x032
#define LC1D1S1_position                         0x1
#define LC1D1S1_size                             0x1
#define LC1D1S1_value_mask                       0x2
#define LC1D1S1_clear_mask                       0xFD

#define D1S1                                     0x1
#define D1S1_address                             0x032
#define D1S1_position                            0x1
#define D1S1_size                                0x1
#define D1S1_value_mask                          0x2
#define D1S1_clear_mask                          0xFD

#define LC1D1S2                                  0x2
#define LC1D1S2_address                          0x032
#define LC1D1S2_position                         0x2
#define LC1D1S2_size                             0x1
#define LC1D1S2_value_mask                       0x4
#define LC1D1S2_clear_mask                       0xFB

#define D1S2                                     0x2
#define D1S2_address                             0x032
#define D1S2_position                            0x2
#define D1S2_size                                0x1
#define D1S2_value_mask                          0x4
#define D1S2_clear_mask                          0xFB

#define LC1D2S                                   0x4
#define LC1D2S_address                           0x032
#define LC1D2S_position                          0x4
#define LC1D2S_size                              0x3
#define LC1D2S_value_mask                        0x70
#define LC1D2S_clear_mask                        0x8F

#define LC1D2S0                                  0x4
#define LC1D2S0_address                          0x032
#define LC1D2S0_position                         0x4
#define LC1D2S0_size                             0x1
#define LC1D2S0_value_mask                       0x10
#define LC1D2S0_clear_mask                       0xEF

#define D2S0                                     0x4
#define D2S0_address                             0x032
#define D2S0_position                            0x4
#define D2S0_size                                0x1
#define D2S0_value_mask                          0x10
#define D2S0_clear_mask                          0xEF

#define LC1D2S1                                  0x5
#define LC1D2S1_address                          0x032
#define LC1D2S1_position                         0x5
#define LC1D2S1_size                             0x1
#define LC1D2S1_value_mask                       0x20
#define LC1D2S1_clear_mask                       0xDF

#define D2S1                                     0x5
#define D2S1_address                             0x032
#define D2S1_position                            0x5
#define D2S1_size                                0x1
#define D2S1_value_mask                          0x20
#define D2S1_clear_mask                          0xDF

#define LC1D2S2                                  0x6
#define LC1D2S2_address                          0x032
#define LC1D2S2_position                         0x6
#define LC1D2S2_size                             0x1
#define LC1D2S2_value_mask                       0x40
#define LC1D2S2_clear_mask                       0xBF

#define D2S2                                     0x6
#define D2S2_address                             0x032
#define D2S2_position                            0x6
#define D2S2_size                                0x1
#define D2S2_value_mask                          0x40
#define D2S2_clear_mask                          0xBF


/*---------------------------------------------------------#
| CLC1SEL1                                            0x33 |
#----------------------------------------------------------#
| - | D4S2 | D4S1 | D4S0 | - | LC1D3S2 | LC1D3S1 | LC1D3S0 |
#----------------------------------------------------------#
| 7 | 6    | 5    | 4    | 3 | 2       | 1       | 0       |
#---------------------------------------------------------*/

#define CLC1SEL1                                 0x0
#define CLC1SEL1_address                         0x033
#define CLC1SEL1_position                        0x0
#define CLC1SEL1_size                            0x8
#define CLC1SEL1_value_mask                      0xFF
#define CLC1SEL1_clear_mask                      0x0

#define LC1D3S0                                  0x0
#define LC1D3S0_address                          0x033
#define LC1D3S0_position                         0x0
#define LC1D3S0_size                             0x1
#define LC1D3S0_value_mask                       0x1
#define LC1D3S0_clear_mask                       0xFE

#define LC1D3S                                   0x0
#define LC1D3S_address                           0x033
#define LC1D3S_position                          0x0
#define LC1D3S_size                              0x3
#define LC1D3S_value_mask                        0x7
#define LC1D3S_clear_mask                        0xF8

#define D3S0                                     0x0
#define D3S0_address                             0x033
#define D3S0_position                            0x0
#define D3S0_size                                0x1
#define D3S0_value_mask                          0x1
#define D3S0_clear_mask                          0xFE

#define LC1D3S1                                  0x1
#define LC1D3S1_address                          0x033
#define LC1D3S1_position                         0x1
#define LC1D3S1_size                             0x1
#define LC1D3S1_value_mask                       0x2
#define LC1D3S1_clear_mask                       0xFD

#define D3S1                                     0x1
#define D3S1_address                             0x033
#define D3S1_position                            0x1
#define D3S1_size                                0x1
#define D3S1_value_mask                          0x2
#define D3S1_clear_mask                          0xFD

#define LC1D3S2                                  0x2
#define LC1D3S2_address                          0x033
#define LC1D3S2_position                         0x2
#define LC1D3S2_size                             0x1
#define LC1D3S2_value_mask                       0x4
#define LC1D3S2_clear_mask                       0xFB

#define D3S2                                     0x2
#define D3S2_address                             0x033
#define D3S2_position                            0x2
#define D3S2_size                                0x1
#define D3S2_value_mask                          0x4
#define D3S2_clear_mask                          0xFB

#define D4S0                                     0x4
#define D4S0_address                             0x033
#define D4S0_position                            0x4
#define D4S0_size                                0x1
#define D4S0_value_mask                          0x10
#define D4S0_clear_mask                          0xEF

#define LC1D4S                                   0x4
#define LC1D4S_address                           0x033
#define LC1D4S_position                          0x4
#define LC1D4S_size                              0x3
#define LC1D4S_value_mask                        0x70
#define LC1D4S_clear_mask                        0x8F

#define LC1D4S0                                  0x4
#define LC1D4S0_address                          0x033
#define LC1D4S0_position                         0x4
#define LC1D4S0_size                             0x1
#define LC1D4S0_value_mask                       0x10
#define LC1D4S0_clear_mask                       0xEF

#define D4S1                                     0x5
#define D4S1_address                             0x033
#define D4S1_position                            0x5
#define D4S1_size                                0x1
#define D4S1_value_mask                          0x20
#define D4S1_clear_mask                          0xDF

#define LC1D4S1                                  0x5
#define LC1D4S1_address                          0x033
#define LC1D4S1_position                         0x5
#define LC1D4S1_size                             0x1
#define LC1D4S1_value_mask                       0x20
#define LC1D4S1_clear_mask                       0xDF

#define D4S2                                     0x6
#define D4S2_address                             0x033
#define D4S2_position                            0x6
#define D4S2_size                                0x1
#define D4S2_value_mask                          0x40
#define D4S2_clear_mask                          0xBF

#define LC1D4S2                                  0x6
#define LC1D4S2_address                          0x033
#define LC1D4S2_position                         0x6
#define LC1D4S2_size                             0x1
#define LC1D4S2_value_mask                       0x40
#define LC1D4S2_clear_mask                       0xBF


/*---------------------------------------------------------#
| CLC1POL                                             0x34 |
#----------------------------------------------------------#
| POL | - | - | - | LC1G4POL | G3POL | LC1G2POL | LC1G1POL |
#----------------------------------------------------------#
| 7   | 6 | 5 | 4 | 3        | 2     | 1        | 0        |
#---------------------------------------------------------*/

#define CLC1POL                                  0x0
#define CLC1POL_address                          0x034
#define CLC1POL_position                         0x0
#define CLC1POL_size                             0x8
#define CLC1POL_value_mask                       0xFF
#define CLC1POL_clear_mask                       0x0

#define LC1G1POL                                 0x0
#define LC1G1POL_address                         0x034
#define LC1G1POL_position                        0x0
#define LC1G1POL_size                            0x1
#define LC1G1POL_value_mask                      0x1
#define LC1G1POL_clear_mask                      0xFE

#define G1POL                                    0x0
#define G1POL_address                            0x034
#define G1POL_position                           0x0
#define G1POL_size                               0x1
#define G1POL_value_mask                         0x1
#define G1POL_clear_mask                         0xFE

#define G2POL                                    0x1
#define G2POL_address                            0x034
#define G2POL_position                           0x1
#define G2POL_size                               0x1
#define G2POL_value_mask                         0x2
#define G2POL_clear_mask                         0xFD

#define LC1G2POL                                 0x1
#define LC1G2POL_address                         0x034
#define LC1G2POL_position                        0x1
#define LC1G2POL_size                            0x1
#define LC1G2POL_value_mask                      0x2
#define LC1G2POL_clear_mask                      0xFD

#define G3POL                                    0x2
#define G3POL_address                            0x034
#define G3POL_position                           0x2
#define G3POL_size                               0x1
#define G3POL_value_mask                         0x4
#define G3POL_clear_mask                         0xFB

#define LC1G3POL                                 0x2
#define LC1G3POL_address                         0x034
#define LC1G3POL_position                        0x2
#define LC1G3POL_size                            0x1
#define LC1G3POL_value_mask                      0x4
#define LC1G3POL_clear_mask                      0xFB

#define LC1G4POL                                 0x3
#define LC1G4POL_address                         0x034
#define LC1G4POL_position                        0x3
#define LC1G4POL_size                            0x1
#define LC1G4POL_value_mask                      0x8
#define LC1G4POL_clear_mask                      0xF7

#define G4POL                                    0x3
#define G4POL_address                            0x034
#define G4POL_position                           0x3
#define G4POL_size                               0x1
#define G4POL_value_mask                         0x8
#define G4POL_clear_mask                         0xF7

#define POL                                      0x7
#define POL_address                              0x034
#define POL_position                             0x7
#define POL_size                                 0x1
#define POL_value_mask                           0x80
#define POL_clear_mask                           0x7F

#define LC1POL                                   0x7
#define LC1POL_address                           0x034
#define LC1POL_position                          0x7
#define LC1POL_size                              0x1
#define LC1POL_value_mask                        0x80
#define LC1POL_clear_mask                        0x7F


/*--------------------------------------------------------------------------------------------------#
| CLC1GLS0                                                                                     0x35 |
#---------------------------------------------------------------------------------------------------#
| LC1G1D4T | CLC1GLS0_D4N | LC1G1D3T | LC1G1D3N | LC1G1D2T | CLC1GLS0_D2N | CLC1GLS0_D1T | LC1G1D1N |
#---------------------------------------------------------------------------------------------------#
| 7        | 6            | 5        | 4        | 3        | 2            | 1            | 0        |
#--------------------------------------------------------------------------------------------------*/

#define CLC1GLS0                                 0x0
#define CLC1GLS0_address                         0x035
#define CLC1GLS0_position                        0x0
#define CLC1GLS0_size                            0x8
#define CLC1GLS0_value_mask                      0xFF
#define CLC1GLS0_clear_mask                      0x0

#define CLC1GLS0_D1N                             0x0
#define CLC1GLS0_D1N_address                     0x035
#define CLC1GLS0_D1N_position                    0x0
#define CLC1GLS0_D1N_size                        0x1
#define CLC1GLS0_D1N_value_mask                  0x1
#define CLC1GLS0_D1N_clear_mask                  0xFE

#define LC1G1D1N                                 0x0
#define LC1G1D1N_address                         0x035
#define LC1G1D1N_position                        0x0
#define LC1G1D1N_size                            0x1
#define LC1G1D1N_value_mask                      0x1
#define LC1G1D1N_clear_mask                      0xFE

#define CLC1GLS0_D1T                             0x1
#define CLC1GLS0_D1T_address                     0x035
#define CLC1GLS0_D1T_position                    0x1
#define CLC1GLS0_D1T_size                        0x1
#define CLC1GLS0_D1T_value_mask                  0x2
#define CLC1GLS0_D1T_clear_mask                  0xFD

#define LC1G1D1T                                 0x1
#define LC1G1D1T_address                         0x035
#define LC1G1D1T_position                        0x1
#define LC1G1D1T_size                            0x1
#define LC1G1D1T_value_mask                      0x2
#define LC1G1D1T_clear_mask                      0xFD

#define LC1G1D2N                                 0x2
#define LC1G1D2N_address                         0x035
#define LC1G1D2N_position                        0x2
#define LC1G1D2N_size                            0x1
#define LC1G1D2N_value_mask                      0x4
#define LC1G1D2N_clear_mask                      0xFB

#define CLC1GLS0_D2N                             0x2
#define CLC1GLS0_D2N_address                     0x035
#define CLC1GLS0_D2N_position                    0x2
#define CLC1GLS0_D2N_size                        0x1
#define CLC1GLS0_D2N_value_mask                  0x4
#define CLC1GLS0_D2N_clear_mask                  0xFB

#define LC1G1D2T                                 0x3
#define LC1G1D2T_address                         0x035
#define LC1G1D2T_position                        0x3
#define LC1G1D2T_size                            0x1
#define LC1G1D2T_value_mask                      0x8
#define LC1G1D2T_clear_mask                      0xF7

#define CLC1GLS0_D2T                             0x3
#define CLC1GLS0_D2T_address                     0x035
#define CLC1GLS0_D2T_position                    0x3
#define CLC1GLS0_D2T_size                        0x1
#define CLC1GLS0_D2T_value_mask                  0x8
#define CLC1GLS0_D2T_clear_mask                  0xF7

#define CLC1GLS0_D3N                             0x4
#define CLC1GLS0_D3N_address                     0x035
#define CLC1GLS0_D3N_position                    0x4
#define CLC1GLS0_D3N_size                        0x1
#define CLC1GLS0_D3N_value_mask                  0x10
#define CLC1GLS0_D3N_clear_mask                  0xEF

#define LC1G1D3N                                 0x4
#define LC1G1D3N_address                         0x035
#define LC1G1D3N_position                        0x4
#define LC1G1D3N_size                            0x1
#define LC1G1D3N_value_mask                      0x10
#define LC1G1D3N_clear_mask                      0xEF

#define CLC1GLS0_D3T                             0x5
#define CLC1GLS0_D3T_address                     0x035
#define CLC1GLS0_D3T_position                    0x5
#define CLC1GLS0_D3T_size                        0x1
#define CLC1GLS0_D3T_value_mask                  0x20
#define CLC1GLS0_D3T_clear_mask                  0xDF

#define LC1G1D3T                                 0x5
#define LC1G1D3T_address                         0x035
#define LC1G1D3T_position                        0x5
#define LC1G1D3T_size                            0x1
#define LC1G1D3T_value_mask                      0x20
#define LC1G1D3T_clear_mask                      0xDF

#define CLC1GLS0_D4N                             0x6
#define CLC1GLS0_D4N_address                     0x035
#define CLC1GLS0_D4N_position                    0x6
#define CLC1GLS0_D4N_size                        0x1
#define CLC1GLS0_D4N_value_mask                  0x40
#define CLC1GLS0_D4N_clear_mask                  0xBF

#define LC1G1D4N                                 0x6
#define LC1G1D4N_address                         0x035
#define LC1G1D4N_position                        0x6
#define LC1G1D4N_size                            0x1
#define LC1G1D4N_value_mask                      0x40
#define LC1G1D4N_clear_mask                      0xBF

#define CLC1GLS0_D4T                             0x7
#define CLC1GLS0_D4T_address                     0x035
#define CLC1GLS0_D4T_position                    0x7
#define CLC1GLS0_D4T_size                        0x1
#define CLC1GLS0_D4T_value_mask                  0x80
#define CLC1GLS0_D4T_clear_mask                  0x7F

#define LC1G1D4T                                 0x7
#define LC1G1D4T_address                         0x035
#define LC1G1D4T_position                        0x7
#define LC1G1D4T_size                            0x1
#define LC1G1D4T_value_mask                      0x80
#define LC1G1D4T_clear_mask                      0x7F


/*------------------------------------------------------------------------------------------------------#
| CLC1GLS1                                                                                         0x36 |
#-------------------------------------------------------------------------------------------------------#
| LC1G2D4T | CLC1GLS1_D4N | LC1G2D3T | CLC1GLS1_D3N | LC1G2D2T | CLC1GLS1_D2N | LC1G2D1T | CLC1GLS1_D1N |
#-------------------------------------------------------------------------------------------------------#
| 7        | 6            | 5        | 4            | 3        | 2            | 1        | 0            |
#------------------------------------------------------------------------------------------------------*/

#define CLC1GLS1                                 0x0
#define CLC1GLS1_address                         0x036
#define CLC1GLS1_position                        0x0
#define CLC1GLS1_size                            0x8
#define CLC1GLS1_value_mask                      0xFF
#define CLC1GLS1_clear_mask                      0x0

#define CLC1GLS1_D1N                             0x0
#define CLC1GLS1_D1N_address                     0x036
#define CLC1GLS1_D1N_position                    0x0
#define CLC1GLS1_D1N_size                        0x1
#define CLC1GLS1_D1N_value_mask                  0x1
#define CLC1GLS1_D1N_clear_mask                  0xFE

#define LC1G2D1N                                 0x0
#define LC1G2D1N_address                         0x036
#define LC1G2D1N_position                        0x0
#define LC1G2D1N_size                            0x1
#define LC1G2D1N_value_mask                      0x1
#define LC1G2D1N_clear_mask                      0xFE

#define LC1G2D1T                                 0x1
#define LC1G2D1T_address                         0x036
#define LC1G2D1T_position                        0x1
#define LC1G2D1T_size                            0x1
#define LC1G2D1T_value_mask                      0x2
#define LC1G2D1T_clear_mask                      0xFD

#define CLC1GLS1_D1T                             0x1
#define CLC1GLS1_D1T_address                     0x036
#define CLC1GLS1_D1T_position                    0x1
#define CLC1GLS1_D1T_size                        0x1
#define CLC1GLS1_D1T_value_mask                  0x2
#define CLC1GLS1_D1T_clear_mask                  0xFD

#define CLC1GLS1_D2N                             0x2
#define CLC1GLS1_D2N_address                     0x036
#define CLC1GLS1_D2N_position                    0x2
#define CLC1GLS1_D2N_size                        0x1
#define CLC1GLS1_D2N_value_mask                  0x4
#define CLC1GLS1_D2N_clear_mask                  0xFB

#define LC1G2D2N                                 0x2
#define LC1G2D2N_address                         0x036
#define LC1G2D2N_position                        0x2
#define LC1G2D2N_size                            0x1
#define LC1G2D2N_value_mask                      0x4
#define LC1G2D2N_clear_mask                      0xFB

#define LC1G2D2T                                 0x3
#define LC1G2D2T_address                         0x036
#define LC1G2D2T_position                        0x3
#define LC1G2D2T_size                            0x1
#define LC1G2D2T_value_mask                      0x8
#define LC1G2D2T_clear_mask                      0xF7

#define CLC1GLS1_D2T                             0x3
#define CLC1GLS1_D2T_address                     0x036
#define CLC1GLS1_D2T_position                    0x3
#define CLC1GLS1_D2T_size                        0x1
#define CLC1GLS1_D2T_value_mask                  0x8
#define CLC1GLS1_D2T_clear_mask                  0xF7

#define CLC1GLS1_D3N                             0x4
#define CLC1GLS1_D3N_address                     0x036
#define CLC1GLS1_D3N_position                    0x4
#define CLC1GLS1_D3N_size                        0x1
#define CLC1GLS1_D3N_value_mask                  0x10
#define CLC1GLS1_D3N_clear_mask                  0xEF

#define LC1G2D3N                                 0x4
#define LC1G2D3N_address                         0x036
#define LC1G2D3N_position                        0x4
#define LC1G2D3N_size                            0x1
#define LC1G2D3N_value_mask                      0x10
#define LC1G2D3N_clear_mask                      0xEF

#define LC1G2D3T                                 0x5
#define LC1G2D3T_address                         0x036
#define LC1G2D3T_position                        0x5
#define LC1G2D3T_size                            0x1
#define LC1G2D3T_value_mask                      0x20
#define LC1G2D3T_clear_mask                      0xDF

#define CLC1GLS1_D3T                             0x5
#define CLC1GLS1_D3T_address                     0x036
#define CLC1GLS1_D3T_position                    0x5
#define CLC1GLS1_D3T_size                        0x1
#define CLC1GLS1_D3T_value_mask                  0x20
#define CLC1GLS1_D3T_clear_mask                  0xDF

#define CLC1GLS1_D4N                             0x6
#define CLC1GLS1_D4N_address                     0x036
#define CLC1GLS1_D4N_position                    0x6
#define CLC1GLS1_D4N_size                        0x1
#define CLC1GLS1_D4N_value_mask                  0x40
#define CLC1GLS1_D4N_clear_mask                  0xBF

#define LC1G2D4N                                 0x6
#define LC1G2D4N_address                         0x036
#define LC1G2D4N_position                        0x6
#define LC1G2D4N_size                            0x1
#define LC1G2D4N_value_mask                      0x40
#define LC1G2D4N_clear_mask                      0xBF

#define LC1G2D4T                                 0x7
#define LC1G2D4T_address                         0x036
#define LC1G2D4T_position                        0x7
#define LC1G2D4T_size                            0x1
#define LC1G2D4T_value_mask                      0x80
#define LC1G2D4T_clear_mask                      0x7F

#define CLC1GLS1_D4T                             0x7
#define CLC1GLS1_D4T_address                     0x036
#define CLC1GLS1_D4T_position                    0x7
#define CLC1GLS1_D4T_size                        0x1
#define CLC1GLS1_D4T_value_mask                  0x80
#define CLC1GLS1_D4T_clear_mask                  0x7F


/*------------------------------------------------------------------------------------------#
| CLC1GLS2                                                                             0x37 |
#-------------------------------------------------------------------------------------------#
| LC1G3D4T | LC1G3D4N | LC1G3D3T | CLC1GLS2_D3N | LC1G3D2T | LC1G3D2N | LC1G3D1T | LC1G3D1N |
#-------------------------------------------------------------------------------------------#
| 7        | 6        | 5        | 4            | 3        | 2        | 1        | 0        |
#------------------------------------------------------------------------------------------*/

#define CLC1GLS2                                 0x0
#define CLC1GLS2_address                         0x037
#define CLC1GLS2_position                        0x0
#define CLC1GLS2_size                            0x8
#define CLC1GLS2_value_mask                      0xFF
#define CLC1GLS2_clear_mask                      0x0

#define CLC1GLS2_D1N                             0x0
#define CLC1GLS2_D1N_address                     0x037
#define CLC1GLS2_D1N_position                    0x0
#define CLC1GLS2_D1N_size                        0x1
#define CLC1GLS2_D1N_value_mask                  0x1
#define CLC1GLS2_D1N_clear_mask                  0xFE

#define LC1G3D1N                                 0x0
#define LC1G3D1N_address                         0x037
#define LC1G3D1N_position                        0x0
#define LC1G3D1N_size                            0x1
#define LC1G3D1N_value_mask                      0x1
#define LC1G3D1N_clear_mask                      0xFE

#define LC1G3D1T                                 0x1
#define LC1G3D1T_address                         0x037
#define LC1G3D1T_position                        0x1
#define LC1G3D1T_size                            0x1
#define LC1G3D1T_value_mask                      0x2
#define LC1G3D1T_clear_mask                      0xFD

#define CLC1GLS2_D1T                             0x1
#define CLC1GLS2_D1T_address                     0x037
#define CLC1GLS2_D1T_position                    0x1
#define CLC1GLS2_D1T_size                        0x1
#define CLC1GLS2_D1T_value_mask                  0x2
#define CLC1GLS2_D1T_clear_mask                  0xFD

#define LC1G3D2N                                 0x2
#define LC1G3D2N_address                         0x037
#define LC1G3D2N_position                        0x2
#define LC1G3D2N_size                            0x1
#define LC1G3D2N_value_mask                      0x4
#define LC1G3D2N_clear_mask                      0xFB

#define CLC1GLS2_D2N                             0x2
#define CLC1GLS2_D2N_address                     0x037
#define CLC1GLS2_D2N_position                    0x2
#define CLC1GLS2_D2N_size                        0x1
#define CLC1GLS2_D2N_value_mask                  0x4
#define CLC1GLS2_D2N_clear_mask                  0xFB

#define LC1G3D2T                                 0x3
#define LC1G3D2T_address                         0x037
#define LC1G3D2T_position                        0x3
#define LC1G3D2T_size                            0x1
#define LC1G3D2T_value_mask                      0x8
#define LC1G3D2T_clear_mask                      0xF7

#define CLC1GLS2_D2T                             0x3
#define CLC1GLS2_D2T_address                     0x037
#define CLC1GLS2_D2T_position                    0x3
#define CLC1GLS2_D2T_size                        0x1
#define CLC1GLS2_D2T_value_mask                  0x8
#define CLC1GLS2_D2T_clear_mask                  0xF7

#define CLC1GLS2_D3N                             0x4
#define CLC1GLS2_D3N_address                     0x037
#define CLC1GLS2_D3N_position                    0x4
#define CLC1GLS2_D3N_size                        0x1
#define CLC1GLS2_D3N_value_mask                  0x10
#define CLC1GLS2_D3N_clear_mask                  0xEF

#define LC1G3D3N                                 0x4
#define LC1G3D3N_address                         0x037
#define LC1G3D3N_position                        0x4
#define LC1G3D3N_size                            0x1
#define LC1G3D3N_value_mask                      0x10
#define LC1G3D3N_clear_mask                      0xEF

#define LC1G3D3T                                 0x5
#define LC1G3D3T_address                         0x037
#define LC1G3D3T_position                        0x5
#define LC1G3D3T_size                            0x1
#define LC1G3D3T_value_mask                      0x20
#define LC1G3D3T_clear_mask                      0xDF

#define CLC1GLS2_D3T                             0x5
#define CLC1GLS2_D3T_address                     0x037
#define CLC1GLS2_D3T_position                    0x5
#define CLC1GLS2_D3T_size                        0x1
#define CLC1GLS2_D3T_value_mask                  0x20
#define CLC1GLS2_D3T_clear_mask                  0xDF

#define LC1G3D4N                                 0x6
#define LC1G3D4N_address                         0x037
#define LC1G3D4N_position                        0x6
#define LC1G3D4N_size                            0x1
#define LC1G3D4N_value_mask                      0x40
#define LC1G3D4N_clear_mask                      0xBF

#define CLC1GLS2_D4N                             0x6
#define CLC1GLS2_D4N_address                     0x037
#define CLC1GLS2_D4N_position                    0x6
#define CLC1GLS2_D4N_size                        0x1
#define CLC1GLS2_D4N_value_mask                  0x40
#define CLC1GLS2_D4N_clear_mask                  0xBF

#define LC1G3D4T                                 0x7
#define LC1G3D4T_address                         0x037
#define LC1G3D4T_position                        0x7
#define LC1G3D4T_size                            0x1
#define LC1G3D4T_value_mask                      0x80
#define LC1G3D4T_clear_mask                      0x7F

#define CLC1GLS2_D4T                             0x7
#define CLC1GLS2_D4T_address                     0x037
#define CLC1GLS2_D4T_position                    0x7
#define CLC1GLS2_D4T_size                        0x1
#define CLC1GLS2_D4T_value_mask                  0x80
#define CLC1GLS2_D4T_clear_mask                  0x7F


/*--------------------------------------------------------------------------#
| CLC1GLS3                                                             0x38 |
#---------------------------------------------------------------------------#
| G4D4T | G4D4N | G4D3T | LC1G4D3N | G4D2T | LC1G4D2N | LC1G4D1T | LC1G4D1N |
#---------------------------------------------------------------------------#
| 7     | 6     | 5     | 4        | 3     | 2        | 1        | 0        |
#--------------------------------------------------------------------------*/

#define CLC1GLS3                                 0x0
#define CLC1GLS3_address                         0x038
#define CLC1GLS3_position                        0x0
#define CLC1GLS3_size                            0x8
#define CLC1GLS3_value_mask                      0xFF
#define CLC1GLS3_clear_mask                      0x0

#define LC1G4D1N                                 0x0
#define LC1G4D1N_address                         0x038
#define LC1G4D1N_position                        0x0
#define LC1G4D1N_size                            0x1
#define LC1G4D1N_value_mask                      0x1
#define LC1G4D1N_clear_mask                      0xFE

#define G4D1N                                    0x0
#define G4D1N_address                            0x038
#define G4D1N_position                           0x0
#define G4D1N_size                               0x1
#define G4D1N_value_mask                         0x1
#define G4D1N_clear_mask                         0xFE

#define LC1G4D1T                                 0x1
#define LC1G4D1T_address                         0x038
#define LC1G4D1T_position                        0x1
#define LC1G4D1T_size                            0x1
#define LC1G4D1T_value_mask                      0x2
#define LC1G4D1T_clear_mask                      0xFD

#define G4D1T                                    0x1
#define G4D1T_address                            0x038
#define G4D1T_position                           0x1
#define G4D1T_size                               0x1
#define G4D1T_value_mask                         0x2
#define G4D1T_clear_mask                         0xFD

#define LC1G4D2N                                 0x2
#define LC1G4D2N_address                         0x038
#define LC1G4D2N_position                        0x2
#define LC1G4D2N_size                            0x1
#define LC1G4D2N_value_mask                      0x4
#define LC1G4D2N_clear_mask                      0xFB

#define G4D2N                                    0x2
#define G4D2N_address                            0x038
#define G4D2N_position                           0x2
#define G4D2N_size                               0x1
#define G4D2N_value_mask                         0x4
#define G4D2N_clear_mask                         0xFB

#define G4D2T                                    0x3
#define G4D2T_address                            0x038
#define G4D2T_position                           0x3
#define G4D2T_size                               0x1
#define G4D2T_value_mask                         0x8
#define G4D2T_clear_mask                         0xF7

#define LC1G4D2T                                 0x3
#define LC1G4D2T_address                         0x038
#define LC1G4D2T_position                        0x3
#define LC1G4D2T_size                            0x1
#define LC1G4D2T_value_mask                      0x8
#define LC1G4D2T_clear_mask                      0xF7

#define LC1G4D3N                                 0x4
#define LC1G4D3N_address                         0x038
#define LC1G4D3N_position                        0x4
#define LC1G4D3N_size                            0x1
#define LC1G4D3N_value_mask                      0x10
#define LC1G4D3N_clear_mask                      0xEF

#define G4D3N                                    0x4
#define G4D3N_address                            0x038
#define G4D3N_position                           0x4
#define G4D3N_size                               0x1
#define G4D3N_value_mask                         0x10
#define G4D3N_clear_mask                         0xEF

#define G4D3T                                    0x5
#define G4D3T_address                            0x038
#define G4D3T_position                           0x5
#define G4D3T_size                               0x1
#define G4D3T_value_mask                         0x20
#define G4D3T_clear_mask                         0xDF

#define LC1G4D3T                                 0x5
#define LC1G4D3T_address                         0x038
#define LC1G4D3T_position                        0x5
#define LC1G4D3T_size                            0x1
#define LC1G4D3T_value_mask                      0x20
#define LC1G4D3T_clear_mask                      0xDF

#define G4D4N                                    0x6
#define G4D4N_address                            0x038
#define G4D4N_position                           0x6
#define G4D4N_size                               0x1
#define G4D4N_value_mask                         0x40
#define G4D4N_clear_mask                         0xBF

#define LC1G4D4N                                 0x6
#define LC1G4D4N_address                         0x038
#define LC1G4D4N_position                        0x6
#define LC1G4D4N_size                            0x1
#define LC1G4D4N_value_mask                      0x40
#define LC1G4D4N_clear_mask                      0xBF

#define G4D4T                                    0x7
#define G4D4T_address                            0x038
#define G4D4T_position                           0x7
#define G4D4T_size                               0x1
#define G4D4T_value_mask                         0x80
#define G4D4T_clear_mask                         0x7F

#define LC1G4D4T                                 0x7
#define LC1G4D4T_address                         0x038
#define LC1G4D4T_position                        0x7
#define LC1G4D4T_size                            0x1
#define LC1G4D4T_value_mask                      0x80
#define LC1G4D4T_clear_mask                      0x7F


/*-------------------------------------------------------#
| CWG1CON0                                          0x39 |
#--------------------------------------------------------#
| G1EN | G1OEB | G1OEA | G1POLB | G1POLA | - | - | G1CS0 |
#--------------------------------------------------------#
| 7    | 6     | 5     | 4      | 3      | 2 | 1 | 0     |
#-------------------------------------------------------*/

#define CWG1CON0                                 0x0
#define CWG1CON0_address                         0x039
#define CWG1CON0_position                        0x0
#define CWG1CON0_size                            0x8
#define CWG1CON0_value_mask                      0xFF
#define CWG1CON0_clear_mask                      0x0

#define G1CS0                                    0x0
#define G1CS0_address                            0x039
#define G1CS0_position                           0x0
#define G1CS0_size                               0x1
#define G1CS0_value_mask                         0x1
#define G1CS0_clear_mask                         0xFE

#define G1CS                                     0x0
#define G1CS_address                             0x039
#define G1CS_position                            0x0
#define G1CS_size                                0x2
#define G1CS_value_mask                          0x3
#define G1CS_clear_mask                          0xFC

#define G1POLA                                   0x3
#define G1POLA_address                           0x039
#define G1POLA_position                          0x3
#define G1POLA_size                              0x1
#define G1POLA_value_mask                        0x8
#define G1POLA_clear_mask                        0xF7

#define G1POLB                                   0x4
#define G1POLB_address                           0x039
#define G1POLB_position                          0x4
#define G1POLB_size                              0x1
#define G1POLB_value_mask                        0x10
#define G1POLB_clear_mask                        0xEF

#define G1OEA                                    0x5
#define G1OEA_address                            0x039
#define G1OEA_position                           0x5
#define G1OEA_size                               0x1
#define G1OEA_value_mask                         0x20
#define G1OEA_clear_mask                         0xDF

#define G1OEB                                    0x6
#define G1OEB_address                            0x039
#define G1OEB_position                           0x6
#define G1OEB_size                               0x1
#define G1OEB_value_mask                         0x40
#define G1OEB_clear_mask                         0xBF

#define G1EN                                     0x7
#define G1EN_address                             0x039
#define G1EN_position                            0x7
#define G1EN_size                                0x1
#define G1EN_value_mask                          0x80
#define G1EN_clear_mask                          0x7F


/*------------------------------------------------------------------#
| CWG1CON1                                                     0x3A |
#-------------------------------------------------------------------#
| G1ASDLB1 | G1ASDLB0 | G1ASDLA1 | G1ASDLA0 | - | - | G1IS1 | G1IS0 |
#-------------------------------------------------------------------#
| 7        | 6        | 5        | 4        | 3 | 2 | 1     | 0     |
#------------------------------------------------------------------*/

#define CWG1CON1                                 0x0
#define CWG1CON1_address                         0x03A
#define CWG1CON1_position                        0x0
#define CWG1CON1_size                            0x8
#define CWG1CON1_value_mask                      0xFF
#define CWG1CON1_clear_mask                      0x0

#define G1IS0                                    0x0
#define G1IS0_address                            0x03A
#define G1IS0_position                           0x0
#define G1IS0_size                               0x1
#define G1IS0_value_mask                         0x1
#define G1IS0_clear_mask                         0xFE

#define G1IS                                     0x0
#define G1IS_address                             0x03A
#define G1IS_position                            0x0
#define G1IS_size                                0x4
#define G1IS_value_mask                          0xF
#define G1IS_clear_mask                          0xF0

#define G1IS1                                    0x1
#define G1IS1_address                            0x03A
#define G1IS1_position                           0x1
#define G1IS1_size                               0x1
#define G1IS1_value_mask                         0x2
#define G1IS1_clear_mask                         0xFD

#define G1ASDLA                                  0x4
#define G1ASDLA_address                          0x03A
#define G1ASDLA_position                         0x4
#define G1ASDLA_size                             0x2
#define G1ASDLA_value_mask                       0x30
#define G1ASDLA_clear_mask                       0xCF

#define G1ASDLA0                                 0x4
#define G1ASDLA0_address                         0x03A
#define G1ASDLA0_position                        0x4
#define G1ASDLA0_size                            0x1
#define G1ASDLA0_value_mask                      0x10
#define G1ASDLA0_clear_mask                      0xEF

#define G1ASDLA1                                 0x5
#define G1ASDLA1_address                         0x03A
#define G1ASDLA1_position                        0x5
#define G1ASDLA1_size                            0x1
#define G1ASDLA1_value_mask                      0x20
#define G1ASDLA1_clear_mask                      0xDF

#define G1ASDLB                                  0x6
#define G1ASDLB_address                          0x03A
#define G1ASDLB_position                         0x6
#define G1ASDLB_size                             0x2
#define G1ASDLB_value_mask                       0xC0
#define G1ASDLB_clear_mask                       0x3F

#define G1ASDLB0                                 0x6
#define G1ASDLB0_address                         0x03A
#define G1ASDLB0_position                        0x6
#define G1ASDLB0_size                            0x1
#define G1ASDLB0_value_mask                      0x40
#define G1ASDLB0_clear_mask                      0xBF

#define G1ASDLB1                                 0x7
#define G1ASDLB1_address                         0x03A
#define G1ASDLB1_position                        0x7
#define G1ASDLB1_size                            0x1
#define G1ASDLB1_value_mask                      0x80
#define G1ASDLB1_clear_mask                      0x7F


/*---------------------------------------------------------#
| CWG1CON2                                            0x3B |
#----------------------------------------------------------#
| G1ASE | G1ARSEN | - | - | - | - | G1ASDSCLC1 | G1ASDSFLT |
#----------------------------------------------------------#
| 7     | 6       | 5 | 4 | 3 | 2 | 1          | 0         |
#---------------------------------------------------------*/

#define CWG1CON2                                 0x0
#define CWG1CON2_address                         0x03B
#define CWG1CON2_position                        0x0
#define CWG1CON2_size                            0x8
#define CWG1CON2_value_mask                      0xFF
#define CWG1CON2_clear_mask                      0x0

#define G1ASDSFLT                                0x0
#define G1ASDSFLT_address                        0x03B
#define G1ASDSFLT_position                       0x0
#define G1ASDSFLT_size                           0x1
#define G1ASDSFLT_value_mask                     0x1
#define G1ASDSFLT_clear_mask                     0xFE

#define G1ASDSCLC1                               0x1
#define G1ASDSCLC1_address                       0x03B
#define G1ASDSCLC1_position                      0x1
#define G1ASDSCLC1_size                          0x1
#define G1ASDSCLC1_value_mask                    0x2
#define G1ASDSCLC1_clear_mask                    0xFD

#define G1ARSEN                                  0x6
#define G1ARSEN_address                          0x03B
#define G1ARSEN_position                         0x6
#define G1ARSEN_size                             0x1
#define G1ARSEN_value_mask                       0x40
#define G1ARSEN_clear_mask                       0xBF

#define G1ASE                                    0x7
#define G1ASE_address                            0x03B
#define G1ASE_position                           0x7
#define G1ASE_size                               0x1
#define G1ASE_value_mask                         0x80
#define G1ASE_clear_mask                         0x7F


/*------------------------------------------------------------------------#
| CWG1DBR                                                            0x3C |
#-------------------------------------------------------------------------#
| - | - | CWG1DBR5 | CWG1DBR4 | CWG1DBR3 | CWG1DBR2 | CWG1DBR1 | CWG1DBR0 |
#-------------------------------------------------------------------------#
| 7 | 6 | 5        | 4        | 3        | 2        | 1        | 0        |
#------------------------------------------------------------------------*/

#define CWG1DBR0                                 0x0
#define CWG1DBR0_address                         0x03C
#define CWG1DBR0_position                        0x0
#define CWG1DBR0_size                            0x1
#define CWG1DBR0_value_mask                      0x1
#define CWG1DBR0_clear_mask                      0xFE

#define CWG1DBR                                  0x0
#define CWG1DBR_address                          0x03C
#define CWG1DBR_position                         0x0
#define CWG1DBR_size                             0x6
#define CWG1DBR_value_mask                       0x3F
#define CWG1DBR_clear_mask                       0xC0

#define CWG1DBR1                                 0x1
#define CWG1DBR1_address                         0x03C
#define CWG1DBR1_position                        0x1
#define CWG1DBR1_size                            0x1
#define CWG1DBR1_value_mask                      0x2
#define CWG1DBR1_clear_mask                      0xFD

#define CWG1DBR2                                 0x2
#define CWG1DBR2_address                         0x03C
#define CWG1DBR2_position                        0x2
#define CWG1DBR2_size                            0x1
#define CWG1DBR2_value_mask                      0x4
#define CWG1DBR2_clear_mask                      0xFB

#define CWG1DBR3                                 0x3
#define CWG1DBR3_address                         0x03C
#define CWG1DBR3_position                        0x3
#define CWG1DBR3_size                            0x1
#define CWG1DBR3_value_mask                      0x8
#define CWG1DBR3_clear_mask                      0xF7

#define CWG1DBR4                                 0x4
#define CWG1DBR4_address                         0x03C
#define CWG1DBR4_position                        0x4
#define CWG1DBR4_size                            0x1
#define CWG1DBR4_value_mask                      0x10
#define CWG1DBR4_clear_mask                      0xEF

#define CWG1DBR5                                 0x5
#define CWG1DBR5_address                         0x03C
#define CWG1DBR5_position                        0x5
#define CWG1DBR5_size                            0x1
#define CWG1DBR5_value_mask                      0x20
#define CWG1DBR5_clear_mask                      0xDF


/*------------------------------------------------------------------------#
| CWG1DBF                                                            0x3D |
#-------------------------------------------------------------------------#
| - | - | CWG1DBF5 | CWG1DBF4 | CWG1DBF3 | CWG1DBF2 | CWG1DBF1 | CWG1DBF0 |
#-------------------------------------------------------------------------#
| 7 | 6 | 5        | 4        | 3        | 2        | 1        | 0        |
#------------------------------------------------------------------------*/

#define CWG1DBF                                  0x0
#define CWG1DBF_address                          0x03D
#define CWG1DBF_position                         0x0
#define CWG1DBF_size                             0x6
#define CWG1DBF_value_mask                       0x3F
#define CWG1DBF_clear_mask                       0xC0

#define CWG1DBF0                                 0x0
#define CWG1DBF0_address                         0x03D
#define CWG1DBF0_position                        0x0
#define CWG1DBF0_size                            0x1
#define CWG1DBF0_value_mask                      0x1
#define CWG1DBF0_clear_mask                      0xFE

#define CWG1DBF1                                 0x1
#define CWG1DBF1_address                         0x03D
#define CWG1DBF1_position                        0x1
#define CWG1DBF1_size                            0x1
#define CWG1DBF1_value_mask                      0x2
#define CWG1DBF1_clear_mask                      0xFD

#define CWG1DBF2                                 0x2
#define CWG1DBF2_address                         0x03D
#define CWG1DBF2_position                        0x2
#define CWG1DBF2_size                            0x1
#define CWG1DBF2_value_mask                      0x4
#define CWG1DBF2_clear_mask                      0xFB

#define CWG1DBF3                                 0x3
#define CWG1DBF3_address                         0x03D
#define CWG1DBF3_position                        0x3
#define CWG1DBF3_size                            0x1
#define CWG1DBF3_value_mask                      0x8
#define CWG1DBF3_clear_mask                      0xF7

#define CWG1DBF4                                 0x4
#define CWG1DBF4_address                         0x03D
#define CWG1DBF4_position                        0x4
#define CWG1DBF4_size                            0x1
#define CWG1DBF4_value_mask                      0x10
#define CWG1DBF4_clear_mask                      0xEF

#define CWG1DBF5                                 0x5
#define CWG1DBF5_address                         0x03D
#define CWG1DBF5_position                        0x5
#define CWG1DBF5_size                            0x1
#define CWG1DBF5_value_mask                      0x20
#define CWG1DBF5_clear_mask                      0xDF


/*------------------------------------------#
| VREGCON                              0x3E |
#-------------------------------------------#
| - | - | - | - | - | - | VREGPM1 | VREGPM0 |
#-------------------------------------------#
| 7 | 6 | 5 | 4 | 3 | 2 | 1       | 0       |
#------------------------------------------*/

#define VREGCON                                  0x0
#define VREGCON_address                          0x03E
#define VREGCON_position                         0x0
#define VREGCON_size                             0x8
#define VREGCON_value_mask                       0xFF
#define VREGCON_clear_mask                       0x0

#define VREGPM0                                  0x0
#define VREGPM0_address                          0x03E
#define VREGPM0_position                         0x0
#define VREGPM0_size                             0x1
#define VREGPM0_value_mask                       0x1
#define VREGPM0_clear_mask                       0xFE

#define VREGPM                                   0x0
#define VREGPM_address                           0x03E
#define VREGPM_position                          0x0
#define VREGPM_size                              0x2
#define VREGPM_value_mask                        0x3
#define VREGPM_clear_mask                        0xFC

#define VREGPM1                                  0x1
#define VREGPM1_address                          0x03E
#define VREGPM1_position                         0x1
#define VREGPM1_size                             0x1
#define VREGPM1_value_mask                       0x2
#define VREGPM1_clear_mask                       0xFD


/*--------------------------------------------#
| BORCON                                 0x3F |
#---------------------------------------------#
| SBOREN | BORFS | - | - | - | - | - | BORRDY |
#---------------------------------------------#
| 7      | 6     | 5 | 4 | 3 | 2 | 1 | 0      |
#--------------------------------------------*/

#define BORCON                                   0x0
#define BORCON_address                           0x03F
#define BORCON_position                          0x0
#define BORCON_size                              0x8
#define BORCON_value_mask                        0xFF
#define BORCON_clear_mask                        0x0

#define BORRDY                                   0x0
#define BORRDY_address                           0x03F
#define BORRDY_position                          0x0
#define BORRDY_size                              0x1
#define BORRDY_value_mask                        0x1
#define BORRDY_clear_mask                        0xFE

#define BORFS                                    0x6
#define BORFS_address                            0x03F
#define BORFS_position                           0x6
#define BORFS_size                               0x1
#define BORFS_value_mask                         0x40
#define BORFS_clear_mask                         0xBF

#define SBOREN                                   0x7
#define SBOREN_address                           0x03F
#define SBOREN_position                          0x7
#define SBOREN_size                              0x1
#define SBOREN_value_mask                        0x80
#define SBOREN_clear_mask                        0x7F

#endif // _PIC10LF320_H_
