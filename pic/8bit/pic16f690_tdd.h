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

#ifndef _PIC16F690_H_
#define _PIC16F690_H_

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
#define SSPIF                         48
#define TXIF                          49
#define RCIF                          50
#define ADIF                          51
#define PIR2                          52
#define EEIF                          53
#define C1IF                          54
#define C2IF                          55
#define OSFIF                         56
#define T1CON                         57
#define TMR1ON                        58
#define TMR1CS                        59
#define nT1SYNC                       60
#define T1OSCEN                       61
#define T1CKPS0                       62
#define T1CKPS                        63
#define T1CKPS1                       64
#define TMR1GE                        65
#define T1GINV                        66
#define T2CON                         67
#define T2CKPS0                       68
#define T2CKPS                        69
#define T2CKPS1                       70
#define TMR2ON                        71
#define TOUTPS0                       72
#define TOUTPS                        73
#define TOUTPS1                       74
#define TOUTPS2                       75
#define TOUTPS3                       76
#define SSPCON                        77
#define SSPM0                         78
#define SSPM                          79
#define SSPM1                         80
#define SSPM2                         81
#define SSPM3                         82
#define CKP                           83
#define SSPEN                         84
#define SSPOV                         85
#define WCOL                          86
#define CCP1CON                       87
#define CCP1M0                        88
#define CCP1M                         89
#define CCP1M1                        90
#define CCP1M2                        91
#define CCP1M3                        92
#define DC1B                          93
#define DC1B0                         94
#define DC1B1                         95
#define P1M                           96
#define P1M0                          97
#define P1M1                          98
#define RCSTA                         99
#define RX9D                          100
#define OERR                          101
#define FERR                          102
#define ADDEN                         103
#define CREN                          104
#define SREN                          105
#define RX9                           106
#define SPEN                          107
#define PWM1CON                       108
#define PDC0                          109
#define PDC                           110
#define PDC1                          111
#define PDC2                          112
#define PDC3                          113
#define PDC4                          114
#define PDC5                          115
#define PDC6                          116
#define PRSEN                         117
#define PSSBD                         118
#define PSSBD0                        119
#define PSSBD1                        120
#define PSSAC                         121
#define PSSAC0                        122
#define PSSAC1                        123
#define ECCPAS0                       124
#define ECCPAS                        125
#define ECCPAS1                       126
#define ECCPAS2                       127
#define ECCPASE                       128
#define ADCON0                        129
#define ADON                          130
#define nDONE                         131
#define GO_nDONE                      132
#define GO_DONE                       133
#define GO                            134
#define CHS                           135
#define CHS0                          136
#define CHS1                          137
#define CHS2                          138
#define CHS3                          139
#define VCFG                          140
#define ADFM                          141
#define OPTION_REG                    142
#define PS                            143
#define PS0                           144
#define PS1                           145
#define PS2                           146
#define PSA                           147
#define T0SE                          148
#define T0CS                          149
#define INTEDG                        150
#define nRABPU                        151
#define TRISA                         152
#define TRISA0                        153
#define TRISA1                        154
#define TRISA2                        155
#define TRISA3                        156
#define TRISA4                        157
#define TRISA5                        158
#define TRISB                         159
#define TRISB4                        160
#define TRISB5                        161
#define TRISB6                        162
#define TRISB7                        163
#define TRISC                         164
#define TRISC0                        165
#define TRISC1                        166
#define TRISC2                        167
#define TRISC3                        168
#define TRISC4                        169
#define TRISC5                        170
#define TRISC6                        171
#define TRISC7                        172
#define PIE1                          173
#define T1IE                          174
#define TMR1IE                        175
#define T2IE                          176
#define TMR2IE                        177
#define CCP1IE                        178
#define SSPIE                         179
#define TXIE                          180
#define RCIE                          181
#define ADIE                          182
#define PIE2                          183
#define EEIE                          184
#define C1IE                          185
#define C2IE                          186
#define OSFIE                         187
#define PCON                          188
#define nBOR                          189
#define nPOR                          190
#define SBOREN                        191
#define ULPWUE                        192
#define OSCCON                        193
#define SCS                           194
#define LTS                           195
#define HTS                           196
#define OSTS                          197
#define IRCF                          198
#define IRCF0                         199
#define IRCF1                         200
#define IRCF2                         201
#define OSCTUNE                       202
#define TUN0                          203
#define TUN                           204
#define TUN1                          205
#define TUN2                          206
#define TUN3                          207
#define TUN4                          208
#define SSPMSK                        209
#define MSK0                          210
#define MSK1                          211
#define MSK2                          212
#define MSK3                          213
#define MSK4                          214
#define MSK5                          215
#define MSK6                          216
#define MSK7                          217
#define SSPSTAT                       218
#define BF                            219
#define UA                            220
#define R_nW                          221
#define READ_WRITE                    222
#define I2C_READ                      223
#define nW                            224
#define R                             225
#define nWRITE                        226
#define R_W                           227
#define S                             228
#define I2C_START                     229
#define I2C_STOP                      230
#define P                             231
#define nA                            232
#define D_A                           233
#define D_nA                          234
#define D                             235
#define DATA_ADDRESS                  236
#define nADDRESS                      237
#define I2C_DATA                      238
#define CKE                           239
#define SMP                           240
#define WPUA                          241
#define WPUA0                         242
#define WPU0                          243
#define WPUA1                         244
#define WPU1                          245
#define WPUA2                         246
#define WPU2                          247
#define WPUA4                         248
#define WPU4                          249
#define WPUA5                         250
#define WPU5                          251
#define IOCA                          252
#define IOCA0                         253
#define IOC0                          254
#define IOCA1                         255
#define IOC1                          256
#define IOCA2                         257
#define IOC2                          258
#define IOCA3                         259
#define IOC3                          260
#define IOCA4                         261
#define IOC4                          262
#define IOCA5                         263
#define IOC5                          264
#define WDTCON                        265
#define SWDTEN                        266
#define WDTPS                         267
#define WDTPS0                        268
#define WDTPS1                        269
#define WDTPS2                        270
#define WDTPS3                        271
#define TXSTA                         272
#define TX9D                          273
#define TRMT                          274
#define BRGH                          275
#define SENB                          276
#define SENDB                         277
#define SYNC                          278
#define TXEN                          279
#define TX9                           280
#define CSRC                          281
#define SPBRG                         282
#define BRG0                          283
#define BRG1                          284
#define BRG2                          285
#define BRG3                          286
#define BRG4                          287
#define BRG5                          288
#define BRG6                          289
#define BRG7                          290
#define SPBRGH                        291
#define BRG8                          292
#define BRG9                          293
#define BRG10                         294
#define BRG11                         295
#define BRG12                         296
#define BRG13                         297
#define BRG14                         298
#define BRG15                         299
#define BAUDCTL                       300
#define ABDEN                         301
#define WUE                           302
#define BRG16                         303
#define SCKP                          304
#define RCIDL                         305
#define ABDOVF                        306
#define ADCON1                        307
#define ADCS                          308
#define ADCS0                         309
#define ADCS1                         310
#define ADCS2                         311
#define WPUB                          312
#define WPUB4                         313
#define WPUB5                         314
#define WPUB6                         315
#define WPUB7                         316
#define IOCB                          317
#define IOCB4                         318
#define IOCB5                         319
#define IOCB6                         320
#define IOCB7                         321
#define VRCON                         322
#define VR0                           323
#define VR                            324
#define VR1                           325
#define VR2                           326
#define VR3                           327
#define VP6EN                         328
#define VRR                           329
#define C2VREN                        330
#define C1VREN                        331
#define CM1CON0                       332
#define C1CH                          333
#define C1CH0                         334
#define C1CH1                         335
#define C1R                           336
#define C1POL                         337
#define C1OE                          338
#define C1OUT                         339
#define C1ON                          340
#define CM2CON0                       341
#define C2CH0                         342
#define C2CH                          343
#define C2CH1                         344
#define C2R                           345
#define C2POL                         346
#define C2OE                          347
#define C2OUT                         348
#define C2ON                          349
#define CM2CON1                       350
#define C2SYNC                        351
#define T1GSS                         352
#define MC2OUT                        353
#define MC1OUT                        354
#define ANSEL                         355
#define ANS0                          356
#define ANS1                          357
#define ANS2                          358
#define ANS3                          359
#define ANS4                          360
#define ANS5                          361
#define ANS6                          362
#define ANS7                          363
#define ANSELH                        364
#define ANS8                          365
#define ANS9                          366
#define ANS10                         367
#define ANS11                         368
#define EECON1                        369
#define RD                            370
#define WR                            371
#define WREN                          372
#define WRERR                         373
#define EEPGD                         374
#define PSTRCON                       375
#define STRA                          376
#define STRB                          377
#define STRC                          378
#define STRD                          379
#define STRSYNC                       380
#define SRCON                         381
#define PULSR                         382
#define PULSS                         383
#define C2REN                         384
#define C1SEN                         385
#define SR                            386
#define SR0                           387
#define SR1                           388

#endif // _PIC16F690_H_
