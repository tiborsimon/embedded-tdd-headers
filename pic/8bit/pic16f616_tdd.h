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

#ifndef _PIC16F616_H_
#define _PIC16F616_H_

#define STATUS                        0
#define C                             1
#define CARRY                         2
#define DC                            3
#define ZERO                          4
#define Z                             5
#define nPD                           6
#define nTO                           7
#define RP0                           8
#define RP                            9
#define RP1                           10
#define IRP                           11
#define PORTA                         12
#define RA0                           13
#define RA1                           14
#define RA2                           15
#define RA3                           16
#define RA4                           17
#define RA5                           18
#define PORTC                         19
#define RC0                           20
#define RC1                           21
#define RC2                           22
#define RC3                           23
#define RC4                           24
#define RC5                           25
#define PCLATH                        26
#define INTCON                        27
#define RAIF                          28
#define INTF                          29
#define TMR0IF                        30
#define T0IF                          31
#define RAIE                          32
#define INTE                          33
#define TMR0IE                        34
#define T0IE                          35
#define PEIE                          36
#define GIE                           37
#define PIR1                          38
#define T1IF                          39
#define TMR1IF                        40
#define T2IF                          41
#define TMR2IF                        42
#define C1IF                          43
#define C2IF                          44
#define CCP1IF                        45
#define ECCPIF                        46
#define ADIF                          47
#define T1CON                         48
#define TMR1ON                        49
#define TMR1CS                        50
#define nT1SYNC                       51
#define T1OSCEN                       52
#define T1CKPS0                       53
#define T1CKPS                        54
#define T1CKPS1                       55
#define TMR1GE                        56
#define T1GINV                        57
#define T2CON                         58
#define T2CKPS0                       59
#define T2CKPS                        60
#define T2CKPS1                       61
#define TMR2ON                        62
#define TOUTPS0                       63
#define TOUTPS                        64
#define TOUTPS1                       65
#define TOUTPS2                       66
#define TOUTPS3                       67
#define CCP1CON                       68
#define CCP1M0                        69
#define CCP1M                         70
#define CCP1M1                        71
#define CCP1M2                        72
#define CCP1M3                        73
#define DCB                           74
#define DC1B0                         75
#define DC1B1                         76
#define P1M0                          77
#define PM                            78
#define P1M1                          79
#define PWM1CON                       80
#define PDC0                          81
#define PDC                           82
#define PDC1                          83
#define PDC2                          84
#define PDC3                          85
#define PDC4                          86
#define PDC5                          87
#define PDC6                          88
#define PRSEN                         89
#define PSSBD                         90
#define PSSBD0                        91
#define PSSBD1                        92
#define PSSAC                         93
#define PSSAC0                        94
#define PSSAC1                        95
#define ECCPAS0                       96
#define ECCPAS                        97
#define ECCPAS1                       98
#define ECCPAS2                       99
#define ECCPASE                       100
#define VRCON                         101
#define VR0                           102
#define VR                            103
#define VR1                           104
#define VR2                           105
#define VR3                           106
#define VP6EN                         107
#define FVREN                         108
#define VRR                           109
#define C2VREN                        110
#define C1VREN                        111
#define CM1CON0                       112
#define C1CH                          113
#define C1CH0                         114
#define C1CH1                         115
#define C1R                           116
#define C1POL                         117
#define C1OE                          118
#define C1OUT                         119
#define C1ON                          120
#define CM2CON0                       121
#define C2CH0                         122
#define C2CH                          123
#define C2CH1                         124
#define C2R                           125
#define C2POL                         126
#define C2OE                          127
#define C2OUT                         128
#define C2ON                          129
#define CM2CON1                       130
#define C2SYNC                        131
#define T1GSS                         132
#define C2HYS                         133
#define C1HYS                         134
#define T1ACS                         135
#define MC2OUT                        136
#define MC1OUT                        137
#define ADCON0                        138
#define ADON                          139
#define nDONE                         140
#define GO_nDONE                      141
#define GO_DONE                       142
#define GO                            143
#define CHS                           144
#define CHS0                          145
#define CHS1                          146
#define CHS2                          147
#define CHS3                          148
#define VCFG                          149
#define ADFM                          150
#define OPTION_REG                    151
#define PS                            152
#define PS0                           153
#define PS1                           154
#define PS2                           155
#define PSA                           156
#define T0SE                          157
#define T0CS                          158
#define INTEDG                        159
#define nRAPU                         160
#define TRISA                         161
#define TRISA0                        162
#define TRISA1                        163
#define TRISA2                        164
#define TRISA3                        165
#define TRISA4                        166
#define TRISA5                        167
#define TRISC                         168
#define TRISC0                        169
#define TRISC1                        170
#define TRISC2                        171
#define TRISC3                        172
#define TRISC4                        173
#define TRISC5                        174
#define PIE1                          175
#define T1IE                          176
#define TMR1IE                        177
#define T2IE                          178
#define TMR2IE                        179
#define C1IE                          180
#define C2IE                          181
#define CCP1IE                        182
#define ECCPIE                        183
#define ADIE                          184
#define PCON                          185
#define nBOR                          186
#define nBOD                          187
#define nPOR                          188
#define OSCTUNE                       189
#define TUN0                          190
#define TUN                           191
#define TUN1                          192
#define TUN2                          193
#define TUN3                          194
#define TUN4                          195
#define ANSEL                         196
#define ANS0                          197
#define ANS1                          198
#define ANS2                          199
#define ANS3                          200
#define ANS4                          201
#define ANS5                          202
#define ANS6                          203
#define ANS7                          204
#define WPUA                          205
#define WPUA0                         206
#define WPU0                          207
#define WPUA1                         208
#define WPU1                          209
#define WPUA2                         210
#define WPU2                          211
#define WPUA4                         212
#define WPU4                          213
#define WPUA5                         214
#define WPU5                          215
#define IOCA                          216
#define IOCA0                         217
#define IOC0                          218
#define IOCA1                         219
#define IOC1                          220
#define IOCA2                         221
#define IOC2                          222
#define IOCA3                         223
#define IOC3                          224
#define IOCA4                         225
#define IOC4                          226
#define IOCA5                         227
#define IOC5                          228
#define SRCON0                        229
#define SRCLKEN                       230
#define PULSR                         231
#define PULSS                         232
#define C2REN                         233
#define C1SEN                         234
#define SR                            235
#define SR0                           236
#define SR1                           237
#define SRCON1                        238
#define SRCS                          239
#define SRCS0                         240
#define SRCS1                         241
#define ADCON1                        242
#define ADCS                          243
#define ADCS0                         244
#define ADCS1                         245
#define ADCS2                         246

#endif // _PIC16F616_H_
