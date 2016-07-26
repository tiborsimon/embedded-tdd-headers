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

#ifndef _PIC16F677_H_
#define _PIC16F677_H_

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
#define SSPIF                         45
#define ADIF                          46
#define PIR2                          47
#define EEIF                          48
#define C1IF                          49
#define C2IF                          50
#define OSFIF                         51
#define T1CON                         52
#define TMR1ON                        53
#define TMR1CS                        54
#define nT1SYNC                       55
#define T1OSCEN                       56
#define T1CKPS0                       57
#define T1CKPS                        58
#define T1CKPS1                       59
#define TMR1GE                        60
#define T1GINV                        61
#define SSPCON                        62
#define SSPM0                         63
#define SSPM                          64
#define SSPM1                         65
#define SSPM2                         66
#define SSPM3                         67
#define CKP                           68
#define SSPEN                         69
#define SSPOV                         70
#define WCOL                          71
#define ADCON0                        72
#define ADON                          73
#define nDONE                         74
#define GO_nDONE                      75
#define GO_DONE                       76
#define GO                            77
#define CHS                           78
#define CHS0                          79
#define CHS1                          80
#define CHS2                          81
#define CHS3                          82
#define VCFG                          83
#define ADFM                          84
#define OPTION_REG                    85
#define PS                            86
#define PS0                           87
#define PS1                           88
#define PS2                           89
#define PSA                           90
#define T0SE                          91
#define T0CS                          92
#define INTEDG                        93
#define nRABPU                        94
#define TRISA                         95
#define TRISA0                        96
#define TRISA1                        97
#define TRISA2                        98
#define TRISA3                        99
#define TRISA4                        100
#define TRISA5                        101
#define TRISB                         102
#define TRISB4                        103
#define TRISB5                        104
#define TRISB6                        105
#define TRISB7                        106
#define TRISC                         107
#define TRISC0                        108
#define TRISC1                        109
#define TRISC2                        110
#define TRISC3                        111
#define TRISC4                        112
#define TRISC5                        113
#define TRISC6                        114
#define TRISC7                        115
#define PIE1                          116
#define T1IE                          117
#define TMR1IE                        118
#define SSPIE                         119
#define ADIE                          120
#define PIE2                          121
#define EEIE                          122
#define C1IE                          123
#define C2IE                          124
#define OSFIE                         125
#define PCON                          126
#define BOR                           127
#define nBOR                          128
#define POR                           129
#define nPOR                          130
#define SBOREN                        131
#define ULPWUE                        132
#define OSCCON                        133
#define SCS                           134
#define LTS                           135
#define HTS                           136
#define OSTS                          137
#define IRCF                          138
#define IRCF0                         139
#define IRCF1                         140
#define IRCF2                         141
#define OSCTUNE                       142
#define TUN0                          143
#define TUN                           144
#define TUN1                          145
#define TUN2                          146
#define TUN3                          147
#define TUN4                          148
#define SSPMSK                        149
#define MSK0                          150
#define MSK1                          151
#define MSK2                          152
#define MSK3                          153
#define MSK4                          154
#define MSK5                          155
#define MSK6                          156
#define MSK7                          157
#define SSPSTAT                       158
#define BF                            159
#define UA                            160
#define R_nW                          161
#define READ_WRITE                    162
#define I2C_READ                      163
#define nW                            164
#define R                             165
#define nWRITE                        166
#define R_W                           167
#define S                             168
#define I2C_START                     169
#define I2C_STOP                      170
#define P                             171
#define nA                            172
#define D_A                           173
#define D_nA                          174
#define D                             175
#define DATA_ADDRESS                  176
#define nADDRESS                      177
#define I2C_DATA                      178
#define CKE                           179
#define SMP                           180
#define WPUA                          181
#define WPUA0                         182
#define WPU0                          183
#define WPUA1                         184
#define WPU1                          185
#define WPUA2                         186
#define WPU2                          187
#define WPUA4                         188
#define WPU4                          189
#define WPUA5                         190
#define WPU5                          191
#define IOCA                          192
#define IOCA0                         193
#define IOC0                          194
#define IOCA1                         195
#define IOC1                          196
#define IOCA2                         197
#define IOC2                          198
#define IOCA3                         199
#define IOC3                          200
#define IOCA4                         201
#define IOC4                          202
#define IOCA5                         203
#define IOC5                          204
#define WDTCON                        205
#define SWDTEN                        206
#define WDTPS                         207
#define WDTPS0                        208
#define WDTPS1                        209
#define WDTPS2                        210
#define WDTPS3                        211
#define ADCON1                        212
#define ADCS                          213
#define ADCS0                         214
#define ADCS1                         215
#define ADCS2                         216
#define WPUB                          217
#define WPUB4                         218
#define WPUB5                         219
#define WPUB6                         220
#define WPUB7                         221
#define IOCB                          222
#define IOCB4                         223
#define IOCB5                         224
#define IOCB6                         225
#define IOCB7                         226
#define VRCON                         227
#define VR0                           228
#define VR                            229
#define VR1                           230
#define VR2                           231
#define VR3                           232
#define VP6EN                         233
#define VRR                           234
#define C2VREN                        235
#define C1VREN                        236
#define CM1CON0                       237
#define C1CH                          238
#define C1CH0                         239
#define C1CH1                         240
#define C1R                           241
#define C1POL                         242
#define C1OE                          243
#define C1OUT                         244
#define C1ON                          245
#define CM2CON0                       246
#define C2CH0                         247
#define C2CH                          248
#define C2CH1                         249
#define C2R                           250
#define C2POL                         251
#define C2OE                          252
#define C2OUT                         253
#define C2ON                          254
#define CM2CON1                       255
#define C2SYNC                        256
#define T1GSS                         257
#define MC2OUT                        258
#define MC1OUT                        259
#define ANSEL                         260
#define ANS0                          261
#define ANS1                          262
#define ANS2                          263
#define ANS3                          264
#define ANS4                          265
#define ANS5                          266
#define ANS6                          267
#define ANS7                          268
#define ANSELH                        269
#define ANS8                          270
#define ANS9                          271
#define ANS10                         272
#define ANS11                         273
#define EECON1                        274
#define RD                            275
#define WR                            276
#define WREN                          277
#define WRERR                         278
#define SRCON                         279
#define PULSR                         280
#define PULSS                         281
#define C2REN                         282
#define C1SEN                         283
#define SR                            284
#define SR0                           285
#define SR1                           286

#endif // _PIC16F677_H_
