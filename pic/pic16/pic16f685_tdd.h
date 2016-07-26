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

#ifndef _PIC16F685_H_
#define _PIC16F685_H_

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
#define PORTB                         19
#define RB4                           20
#define RB5                           21
#define RB6                           22
#define RB7                           23
#define PORTC                         24
#define RC0                           25
#define RC1                           26
#define RC2                           27
#define RC3                           28
#define RC4                           29
#define RC5                           30
#define RC6                           31
#define RC7                           32
#define INTCON                        33
#define RABIF                         34
#define INTF                          35
#define T0IF                          36
#define RABIE                         37
#define INTE                          38
#define T0IE                          39
#define PEIE                          40
#define GIE                           41
#define PIR1                          42
#define T1IF                          43
#define TMR1IF                        44
#define T2IF                          45
#define TMR2IF                        46
#define CCP1IF                        47
#define ADIF                          48
#define PIR2                          49
#define EEIF                          50
#define C1IF                          51
#define C2IF                          52
#define OSFIF                         53
#define T1CON                         54
#define TMR1ON                        55
#define TMR1CS                        56
#define nT1SYNC                       57
#define T1OSCEN                       58
#define T1CKPS0                       59
#define T1CKPS                        60
#define T1CKPS1                       61
#define TMR1GE                        62
#define T1GINV                        63
#define T2CON                         64
#define T2CKPS0                       65
#define T2CKPS                        66
#define T2CKPS1                       67
#define TMR2ON                        68
#define TOUTPS0                       69
#define TOUTPS                        70
#define TOUTPS1                       71
#define TOUTPS2                       72
#define TOUTPS3                       73
#define CCP1CON                       74
#define CCP1M0                        75
#define CCP1M                         76
#define CCP1M1                        77
#define CCP1M2                        78
#define CCP1M3                        79
#define DC1B                          80
#define DC1B0                         81
#define DC1B1                         82
#define P1M                           83
#define P1M0                          84
#define P1M1                          85
#define PWM1CON                       86
#define PDC0                          87
#define PDC                           88
#define PDC1                          89
#define PDC2                          90
#define PDC3                          91
#define PDC4                          92
#define PDC5                          93
#define PDC6                          94
#define PRSEN                         95
#define PSSBD                         96
#define PSSBD0                        97
#define PSSBD1                        98
#define PSSAC                         99
#define PSSAC0                        100
#define PSSAC1                        101
#define ECCPAS0                       102
#define ECCPAS                        103
#define ECCPAS1                       104
#define ECCPAS2                       105
#define ECCPASE                       106
#define ADCON0                        107
#define ADON                          108
#define nDONE                         109
#define GO_nDONE                      110
#define GO_DONE                       111
#define GO                            112
#define CHS                           113
#define CHS0                          114
#define CHS1                          115
#define CHS2                          116
#define CHS3                          117
#define VCFG                          118
#define ADFM                          119
#define OPTION_REG                    120
#define PS                            121
#define PS0                           122
#define PS1                           123
#define PS2                           124
#define PSA                           125
#define T0SE                          126
#define T0CS                          127
#define INTEDG                        128
#define nRABPU                        129
#define TRISA                         130
#define TRISA0                        131
#define TRISA1                        132
#define TRISA2                        133
#define TRISA3                        134
#define TRISA4                        135
#define TRISA5                        136
#define TRISB                         137
#define TRISB4                        138
#define TRISB5                        139
#define TRISB6                        140
#define TRISB7                        141
#define TRISC                         142
#define TRISC0                        143
#define TRISC1                        144
#define TRISC2                        145
#define TRISC3                        146
#define TRISC4                        147
#define TRISC5                        148
#define TRISC6                        149
#define TRISC7                        150
#define PIE1                          151
#define T1IE                          152
#define TMR1IE                        153
#define T2IE                          154
#define TMR2IE                        155
#define CCP1IE                        156
#define ADIE                          157
#define PIE2                          158
#define EEIE                          159
#define C1IE                          160
#define C2IE                          161
#define OSFIE                         162
#define PCON                          163
#define nBOR                          164
#define nBOD                          165
#define nPOR                          166
#define SBOREN                        167
#define ULPWUE                        168
#define OSCCON                        169
#define SCS                           170
#define LTS                           171
#define HTS                           172
#define OSTS                          173
#define IRCF                          174
#define IRCF0                         175
#define IRCF1                         176
#define IRCF2                         177
#define OSCTUNE                       178
#define TUN0                          179
#define TUN                           180
#define TUN1                          181
#define TUN2                          182
#define TUN3                          183
#define TUN4                          184
#define WPUA                          185
#define WPUA0                         186
#define WPU0                          187
#define WPUA1                         188
#define WPU1                          189
#define WPUA2                         190
#define WPU2                          191
#define WPUA4                         192
#define WPU4                          193
#define WPUA5                         194
#define WPU5                          195
#define IOCA                          196
#define IOCA0                         197
#define IOC0                          198
#define IOCA1                         199
#define IOC1                          200
#define IOCA2                         201
#define IOC2                          202
#define IOCA3                         203
#define IOC3                          204
#define IOCA4                         205
#define IOC4                          206
#define IOCA5                         207
#define IOC5                          208
#define WDTCON                        209
#define SWDTEN                        210
#define WDTPS                         211
#define WDTPS0                        212
#define WDTPS1                        213
#define WDTPS2                        214
#define WDTPS3                        215
#define ADCON1                        216
#define ADCS                          217
#define ADCS0                         218
#define ADCS1                         219
#define ADCS2                         220
#define WPUB                          221
#define WPUB4                         222
#define WPUB5                         223
#define WPUB6                         224
#define WPUB7                         225
#define IOCB                          226
#define IOCB4                         227
#define IOCB5                         228
#define IOCB6                         229
#define IOCB7                         230
#define VRCON                         231
#define VR0                           232
#define VR                            233
#define VR1                           234
#define VR2                           235
#define VR3                           236
#define VP6EN                         237
#define VRR                           238
#define C2VREN                        239
#define C1VREN                        240
#define CM1CON0                       241
#define C1CH                          242
#define C1CH0                         243
#define C1CH1                         244
#define C1R                           245
#define C1POL                         246
#define C1OE                          247
#define C1OUT                         248
#define C1ON                          249
#define CM2CON0                       250
#define C2CH0                         251
#define C2CH                          252
#define C2CH1                         253
#define C2R                           254
#define C2POL                         255
#define C2OE                          256
#define C2OUT                         257
#define C2ON                          258
#define CM2CON1                       259
#define C2SYNC                        260
#define T1GSS                         261
#define MC2OUT                        262
#define MC1OUT                        263
#define ANSEL                         264
#define ANS0                          265
#define ANS1                          266
#define ANS2                          267
#define ANS3                          268
#define ANS4                          269
#define ANS5                          270
#define ANS6                          271
#define ANS7                          272
#define ANSELH                        273
#define ANS8                          274
#define ANS9                          275
#define ANS10                         276
#define ANS11                         277
#define EECON1                        278
#define RD                            279
#define WR                            280
#define WREN                          281
#define WRERR                         282
#define EEPGD                         283
#define PSTRCON                       284
#define STRA                          285
#define STRB                          286
#define STRC                          287
#define STRD                          288
#define STRSYNC                       289
#define SRCON                         290
#define PULSR                         291
#define PULSS                         292
#define C2REN                         293
#define C1SEN                         294
#define SR                            295
#define SR0                           296
#define SR1                           297

#endif // _PIC16F685_H_
