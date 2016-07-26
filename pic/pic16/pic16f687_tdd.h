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

#ifndef _PIC16F687_H_
#define _PIC16F687_H_

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
#define TXIF                          46
#define RCIF                          47
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
#define SSPCON                        64
#define SSPM0                         65
#define SSPM                          66
#define SSPM1                         67
#define SSPM2                         68
#define SSPM3                         69
#define CKP                           70
#define SSPEN                         71
#define SSPOV                         72
#define WCOL                          73
#define RCSTA                         74
#define RX9D                          75
#define OERR                          76
#define FERR                          77
#define ADDEN                         78
#define CREN                          79
#define SREN                          80
#define RX9                           81
#define SPEN                          82
#define ADCON0                        83
#define ADON                          84
#define nDONE                         85
#define GO_nDONE                      86
#define GO_DONE                       87
#define GO                            88
#define CHS                           89
#define CHS0                          90
#define CHS1                          91
#define CHS2                          92
#define CHS3                          93
#define VCFG                          94
#define ADFM                          95
#define OPTION_REG                    96
#define PS                            97
#define PS0                           98
#define PS1                           99
#define PS2                           100
#define PSA                           101
#define T0SE                          102
#define T0CS                          103
#define INTEDG                        104
#define nRABPU                        105
#define TRISA                         106
#define TRISA0                        107
#define TRISA1                        108
#define TRISA2                        109
#define TRISA3                        110
#define TRISA4                        111
#define TRISA5                        112
#define TRISB                         113
#define TRISB4                        114
#define TRISB5                        115
#define TRISB6                        116
#define TRISB7                        117
#define TRISC                         118
#define TRISC0                        119
#define TRISC1                        120
#define TRISC2                        121
#define TRISC3                        122
#define TRISC4                        123
#define TRISC5                        124
#define TRISC6                        125
#define TRISC7                        126
#define PIE1                          127
#define T1IE                          128
#define TMR1IE                        129
#define SSPIE                         130
#define TXIE                          131
#define RCIE                          132
#define ADIE                          133
#define PIE2                          134
#define EEIE                          135
#define C1IE                          136
#define C2IE                          137
#define OSFIE                         138
#define PCON                          139
#define nBOR                          140
#define nPOR                          141
#define SBOREN                        142
#define ULPWUE                        143
#define OSCCON                        144
#define SCS                           145
#define LTS                           146
#define HTS                           147
#define OSTS                          148
#define IRCF                          149
#define IRCF0                         150
#define IRCF1                         151
#define IRCF2                         152
#define OSCTUNE                       153
#define TUN0                          154
#define TUN                           155
#define TUN1                          156
#define TUN2                          157
#define TUN3                          158
#define TUN4                          159
#define SSPMSK                        160
#define MSK0                          161
#define MSK1                          162
#define MSK2                          163
#define MSK3                          164
#define MSK4                          165
#define MSK5                          166
#define MSK6                          167
#define MSK7                          168
#define SSPSTAT                       169
#define BF                            170
#define UA                            171
#define R_nW                          172
#define READ_WRITE                    173
#define I2C_READ                      174
#define nW                            175
#define R                             176
#define nWRITE                        177
#define R_W                           178
#define S                             179
#define I2C_START                     180
#define I2C_STOP                      181
#define P                             182
#define nA                            183
#define D_A                           184
#define D_nA                          185
#define D                             186
#define DATA_ADDRESS                  187
#define nADDRESS                      188
#define I2C_DATA                      189
#define CKE                           190
#define SMP                           191
#define WPUA                          192
#define WPUA0                         193
#define WPU0                          194
#define WPUA1                         195
#define WPU1                          196
#define WPUA2                         197
#define WPU2                          198
#define WPUA4                         199
#define WPU4                          200
#define WPUA5                         201
#define WPU5                          202
#define IOCA                          203
#define IOCA0                         204
#define IOC0                          205
#define IOCA1                         206
#define IOC1                          207
#define IOCA2                         208
#define IOC2                          209
#define IOCA3                         210
#define IOC3                          211
#define IOCA4                         212
#define IOC4                          213
#define IOCA5                         214
#define IOC5                          215
#define WDTCON                        216
#define SWDTEN                        217
#define WDTPS                         218
#define WDTPS0                        219
#define WDTPS1                        220
#define WDTPS2                        221
#define WDTPS3                        222
#define TXSTA                         223
#define TX9D                          224
#define TRMT                          225
#define BRGH                          226
#define SENB                          227
#define SENDB                         228
#define SYNC                          229
#define TXEN                          230
#define TX9                           231
#define CSRC                          232
#define SPBRG                         233
#define BRG0                          234
#define BRG1                          235
#define BRG2                          236
#define BRG3                          237
#define BRG4                          238
#define BRG5                          239
#define BRG6                          240
#define BRG7                          241
#define SPBRGH                        242
#define BRG8                          243
#define BRG9                          244
#define BRG10                         245
#define BRG11                         246
#define BRG12                         247
#define BRG13                         248
#define BRG14                         249
#define BRG15                         250
#define BAUDCTL                       251
#define ABDEN                         252
#define WUE                           253
#define BRG16                         254
#define SCKP                          255
#define RCIDL                         256
#define ABDOVF                        257
#define ADCON1                        258
#define ADCS                          259
#define ADCS0                         260
#define ADCS1                         261
#define ADCS2                         262
#define WPUB                          263
#define WPUB4                         264
#define WPUB5                         265
#define WPUB6                         266
#define WPUB7                         267
#define IOCB                          268
#define IOCB4                         269
#define IOCB5                         270
#define IOCB6                         271
#define IOCB7                         272
#define VRCON                         273
#define VR0                           274
#define VR                            275
#define VR1                           276
#define VR2                           277
#define VR3                           278
#define VP6EN                         279
#define VRR                           280
#define C2VREN                        281
#define C1VREN                        282
#define CM1CON0                       283
#define C1CH                          284
#define C1CH0                         285
#define C1CH1                         286
#define C1R                           287
#define C1POL                         288
#define C1OE                          289
#define C1OUT                         290
#define C1ON                          291
#define CM2CON0                       292
#define C2CH0                         293
#define C2CH                          294
#define C2CH1                         295
#define C2R                           296
#define C2POL                         297
#define C2OE                          298
#define C2OUT                         299
#define C2ON                          300
#define CM2CON1                       301
#define C2SYNC                        302
#define T1GSS                         303
#define MC2OUT                        304
#define MC1OUT                        305
#define ANSEL                         306
#define ANS0                          307
#define ANS1                          308
#define ANS2                          309
#define ANS3                          310
#define ANS4                          311
#define ANS5                          312
#define ANS6                          313
#define ANS7                          314
#define ANSELH                        315
#define ANS8                          316
#define ANS9                          317
#define ANS10                         318
#define ANS11                         319
#define EECON1                        320
#define RD                            321
#define WR                            322
#define WREN                          323
#define WRERR                         324
#define SRCON                         325
#define PULSR                         326
#define PULSS                         327
#define C2REN                         328
#define C1SEN                         329
#define SR                            330
#define SR0                           331
#define SR1                           332

#endif // _PIC16F687_H_
