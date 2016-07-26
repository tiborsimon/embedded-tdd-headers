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

#ifndef _PIC16C923_H_
#define _PIC16C923_H_

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
#define RB0                           20
#define RB1                           21
#define RB2                           22
#define RB3                           23
#define RB4                           24
#define RB5                           25
#define RB6                           26
#define RB7                           27
#define PORTC                         28
#define RC0                           29
#define RC1                           30
#define RC2                           31
#define RC3                           32
#define RC4                           33
#define RC5                           34
#define PORTD                         35
#define RD0                           36
#define RD1                           37
#define RD2                           38
#define RD3                           39
#define RD4                           40
#define RD5                           41
#define RD6                           42
#define RD7                           43
#define PORTE                         44
#define RE0                           45
#define RE1                           46
#define RE2                           47
#define RE3                           48
#define RE4                           49
#define RE5                           50
#define RE6                           51
#define RE7                           52
#define INTCON                        53
#define RBIF                          54
#define INTF                          55
#define T0IF                          56
#define TMR0IF                        57
#define RBIE                          58
#define INTE                          59
#define T0IE                          60
#define TMR0IE                        61
#define PEIE                          62
#define GIE                           63
#define PIR1                          64
#define TMR1IF                        65
#define TMR2IF                        66
#define CCP1IF                        67
#define SSPIF                         68
#define LCDIF                         69
#define T1CON                         70
#define TMR1ON                        71
#define TMR1CS                        72
#define nT1SYNC                       73
#define T1INSYNC                      74
#define T1OSCEN                       75
#define T1CKPS0                       76
#define T1CKPS                        77
#define T1CKPS1                       78
#define T2CON                         79
#define T2CKPS0                       80
#define T2CKPS                        81
#define T2CKPS1                       82
#define TMR2ON                        83
#define TOUTPS0                       84
#define TOUTPS                        85
#define TOUTPS1                       86
#define TOUTPS2                       87
#define TOUTPS3                       88
#define SSPCON                        89
#define SSPM0                         90
#define SSPM                          91
#define SSPM1                         92
#define SSPM2                         93
#define SSPM3                         94
#define CKP                           95
#define SSPEN                         96
#define SSPOV                         97
#define WCOL                          98
#define CCP1CON                       99
#define CCP1M0                        100
#define CCP1M                         101
#define CCP1M1                        102
#define CCP1M2                        103
#define CCP1M3                        104
#define CCP1Y                         105
#define DC1B                          106
#define CCP1X                         107
#define OPTION_REG                    108
#define PS                            109
#define PS0                           110
#define PS1                           111
#define PS2                           112
#define PSA                           113
#define T0SE                          114
#define T0CS                          115
#define INTEDG                        116
#define nRBPU                         117
#define TRISA                         118
#define TRISA0                        119
#define TRISA1                        120
#define TRISA2                        121
#define TRISA3                        122
#define TRISA4                        123
#define TRISA5                        124
#define TRISB                         125
#define TRISB0                        126
#define TRISB1                        127
#define TRISB2                        128
#define TRISB3                        129
#define TRISB4                        130
#define TRISB5                        131
#define TRISB6                        132
#define TRISB7                        133
#define TRISC                         134
#define TRISC0                        135
#define TRISC1                        136
#define TRISC2                        137
#define TRISC3                        138
#define TRISC4                        139
#define TRISC5                        140
#define TRISD                         141
#define TRISD0                        142
#define TRISD1                        143
#define TRISD2                        144
#define TRISD3                        145
#define TRISD4                        146
#define TRISD5                        147
#define TRISD6                        148
#define TRISD7                        149
#define TRISE                         150
#define TRISE0                        151
#define TRISE1                        152
#define TRISE2                        153
#define TRISE3                        154
#define TRISE4                        155
#define PSPMODE                       156
#define TRISE5                        157
#define IBOV                          158
#define OBF                           159
#define TRISE6                        160
#define IBF                           161
#define TRISE7                        162
#define PIE1                          163
#define TMR1IE                        164
#define TMR2IE                        165
#define CCP1IE                        166
#define SSPIE                         167
#define LCDIE                         168
#define PCON                          169
#define nPOR                          170
#define SSPSTAT                       171
#define BF                            172
#define UA                            173
#define R_nW                          174
#define READ_WRITE                    175
#define I2C_READ                      176
#define nW                            177
#define R                             178
#define nWRITE                        179
#define R_W                           180
#define S                             181
#define I2C_START                     182
#define I2C_STOP                      183
#define P                             184
#define nA                            185
#define D_A                           186
#define D_nA                          187
#define D                             188
#define DATA_ADDRESS                  189
#define nADDRESS                      190
#define I2C_DATA                      191
#define CKE                           192
#define SMP                           193
#define PORTF                         194
#define RF0                           195
#define RF1                           196
#define RF2                           197
#define RF3                           198
#define RF4                           199
#define RF5                           200
#define RF6                           201
#define RF7                           202
#define PORTG                         203
#define RG0                           204
#define RG1                           205
#define RG2                           206
#define RG3                           207
#define RG4                           208
#define RG5                           209
#define RG6                           210
#define RG7                           211
#define LCDSE                         212
#define SE0                           213
#define SE5                           214
#define SE9                           215
#define SE12                          216
#define SE16                          217
#define SE20                          218
#define SE27                          219
#define SE29                          220
#define LCDPS                         221
#define LP                            222
#define LP0                           223
#define LP1                           224
#define LP2                           225
#define LP3                           226
#define LCDCON                        227
#define LMUX0                         228
#define LMUX                          229
#define LMUX1                         230
#define CS                            231
#define CS0                           232
#define CS1                           233
#define VGEN                          234
#define SLPEN                         235
#define LCDEN                         236
#define LCDD00                        237
#define LCDD00_SEG00                  238
#define LCDD00_SEG01                  239
#define LCDD00_SEG02                  240
#define LCDD00_SEG03                  241
#define LCDD00_SEG04                  242
#define LCDD00_SEG05                  243
#define LCDD00_SEG06                  244
#define LCDD00_SEG07                  245
#define LCDD01                        246
#define LCDD01_SEG08                  247
#define LCDD01_SEG09                  248
#define LCDD01_SEG10                  249
#define LCDD01_SEG11                  250
#define LCDD01_SEG12                  251
#define LCDD01_SEG13                  252
#define LCDD01_SEG14                  253
#define LCDD01_SEG15                  254
#define LCDD02                        255
#define LCDD02_SEG16                  256
#define LCDD02_SEG17                  257
#define LCDD02_SEG18                  258
#define LCDD02_SEG19                  259
#define LCDD02_SEG20                  260
#define LCDD02_SEG21                  261
#define LCDD02_SEG22                  262
#define LCDD02_SEG23                  263
#define LCDD03                        264
#define LCDD03_SEG24                  265
#define LCDD03_SEG25                  266
#define LCDD03_SEG26                  267
#define LCDD03_SEG27                  268
#define LCDD03_SEG28                  269
#define LCDD03_SEG29                  270
#define LCDD03_SEG30                  271
#define LCDD03_SEG31                  272
#define LCDD04                        273
#define LCDD04_SEG00                  274
#define LCDD04_SEG01                  275
#define LCDD04_SEG02                  276
#define LCDD04_SEG03                  277
#define LCDD04_SEG04                  278
#define LCDD04_SEG05                  279
#define LCDD04_SEG06                  280
#define LCDD04_SEG07                  281
#define LCDD05                        282
#define LCDD05_SEG08                  283
#define LCDD05_SEG09                  284
#define LCDD05_SEG10                  285
#define LCDD05_SEG11                  286
#define LCDD05_SEG12                  287
#define LCDD05_SEG13                  288
#define LCDD05_SEG14                  289
#define LCDD05_SEG15                  290
#define LCDD06                        291
#define LCDD06_SEG16                  292
#define LCDD06_SEG17                  293
#define LCDD06_SEG18                  294
#define LCDD06_SEG19                  295
#define LCDD06_SEG20                  296
#define LCDD06_SEG21                  297
#define LCDD06_SEG22                  298
#define LCDD06_SEG23                  299
#define LCDD07                        300
#define LCDD07_SEG24                  301
#define LCDD07_SEG25                  302
#define LCDD07_SEG26                  303
#define LCDD07_SEG27                  304
#define LCDD07_SEG28                  305
#define LCDD07_SEG29                  306
#define LCDD07_SEG30                  307
#define LCDD07_SEG31                  308
#define LCDD08                        309
#define LCDD08_SEG00                  310
#define LCDD08_SEG01                  311
#define LCDD08_SEG02                  312
#define LCDD08_SEG03                  313
#define LCDD08_SEG04                  314
#define LCDD08_SEG05                  315
#define LCDD08_SEG06                  316
#define LCDD08_SEG07                  317
#define LCDD09                        318
#define LCDD09_SEG08                  319
#define LCDD09_SEG09                  320
#define LCDD09_SEG10                  321
#define LCDD09_SEG11                  322
#define LCDD09_SEG12                  323
#define LCDD09_SEG13                  324
#define LCDD09_SEG14                  325
#define LCDD09_SEG15                  326
#define LCDD10                        327
#define LCDD10_SEG16                  328
#define LCDD10_SEG17                  329
#define LCDD10_SEG18                  330
#define LCDD10_SEG19                  331
#define LCDD10_SEG20                  332
#define LCDD10_SEG21                  333
#define LCDD10_SEG22                  334
#define LCDD10_SEG23                  335
#define LCDD11                        336
#define LCDD11_SEG24                  337
#define LCDD11_SEG25                  338
#define LCDD11_SEG26                  339
#define LCDD11_SEG27                  340
#define LCDD11_SEG28                  341
#define LCDD11_SEG29                  342
#define LCDD11_SEG30                  343
#define LCDD11_SEG31                  344
#define LCDD12                        345
#define LCDD12_SEG00                  346
#define LCDD12_SEG01                  347
#define LCDD12_SEG02                  348
#define LCDD12_SEG03                  349
#define LCDD12_SEG04                  350
#define LCDD12_SEG05                  351
#define LCDD12_SEG06                  352
#define LCDD12_SEG07                  353
#define LCDD13                        354
#define LCDD13_SEG08                  355
#define LCDD13_SEG09                  356
#define LCDD13_SEG10                  357
#define LCDD13_SEG11                  358
#define LCDD13_SEG12                  359
#define LCDD13_SEG13                  360
#define LCDD13_SEG14                  361
#define LCDD13_SEG15                  362
#define LCDD14                        363
#define LCDD14_SEG16                  364
#define LCDD14_SEG17                  365
#define LCDD14_SEG18                  366
#define LCDD14_SEG19                  367
#define LCDD14_SEG20                  368
#define LCDD14_SEG21                  369
#define LCDD14_SEG22                  370
#define LCDD14_SEG23                  371
#define LCDD15                        372
#define LCDD15_SEG24                  373
#define LCDD15_SEG25                  374
#define LCDD15_SEG26                  375
#define LCDD15_SEG27                  376
#define LCDD15_SEG28                  377
#define LCDD15_SEG29                  378
#define LCDD15_SEG30                  379
#define LCDD15_SEG31                  380
#define TRISF                         381
#define TRISF0                        382
#define TRISF1                        383
#define TRISF2                        384
#define TRISF3                        385
#define TRISF4                        386
#define TRISF5                        387
#define TRISF6                        388
#define TRISF7                        389
#define TRISG                         390
#define TRISG0                        391
#define TRISG1                        392
#define TRISG2                        393
#define TRISG3                        394
#define TRISG4                        395
#define TRISG5                        396
#define TRISG6                        397
#define TRISG7                        398

#endif // _PIC16C923_H_
