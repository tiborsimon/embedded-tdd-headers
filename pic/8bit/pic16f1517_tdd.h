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

#ifndef _PIC16F1517_H_
#define _PIC16F1517_H_

#define INDF0                         0
#define INDF1                         1
#define PCL                           2
#define STATUS                        3
#define C                             4
#define CARRY                         5
#define DC                            6
#define ZERO                          7
#define Z                             8
#define nPD                           9
#define nTO                           10
#define FSR0L                         11
#define FSR0H                         12
#define FSR1L                         13
#define FSR1H                         14
#define BSR                           15
#define BSR0                          16
#define BSR1                          17
#define BSR2                          18
#define BSR3                          19
#define BSR4                          20
#define WREG                          21
#define WREG0                         22
#define PCLATH                        23
#define INTCON                        24
#define IOCIF                         25
#define INTF                          26
#define T0IF                          27
#define TMR0IF                        28
#define IOCIE                         29
#define INTE                          30
#define T0IE                          31
#define TMR0IE                        32
#define PEIE                          33
#define GIE                           34
#define PORTA                         35
#define RA0                           36
#define RA1                           37
#define RA2                           38
#define RA3                           39
#define RA4                           40
#define RA5                           41
#define RA6                           42
#define RA7                           43
#define PORTB                         44
#define RB0                           45
#define RB1                           46
#define RB2                           47
#define RB3                           48
#define RB4                           49
#define RB5                           50
#define RB6                           51
#define RB7                           52
#define PORTC                         53
#define RC0                           54
#define RC1                           55
#define RC2                           56
#define RC3                           57
#define RC4                           58
#define RC5                           59
#define RC6                           60
#define RC7                           61
#define PORTD                         62
#define RD0                           63
#define RD1                           64
#define RD2                           65
#define RD3                           66
#define RD4                           67
#define RD5                           68
#define RD6                           69
#define RD7                           70
#define PORTE                         71
#define RE0                           72
#define RE1                           73
#define RE2                           74
#define RE3                           75
#define PIR1                          76
#define TMR1IF                        77
#define TMR2IF                        78
#define CCP1IF                        79
#define SSPIF                         80
#define TXIF                          81
#define RCIF                          82
#define ADIF                          83
#define TMR1GIF                       84
#define PIR2                          85
#define CCP2IF                        86
#define BCLIF                         87
#define OSFIF                         88
#define TMR0                          89
#define TMR1L                         90
#define TMR1H                         91
#define T1CON                         92
#define TMR1ON                        93
#define nT1SYNC                       94
#define T1OSCEN                       95
#define T1CKPS0                       96
#define T1CKPS                        97
#define T1CKPS1                       98
#define TMR1CS0                       99
#define TMR1CS                        100
#define TMR1CS1                       101
#define T1GCON                        102
#define T1GSS0                        103
#define T1GSS                         104
#define T1GSS1                        105
#define T1GVAL                        106
#define T1GGO_nDONE                   107
#define T1GSPM                        108
#define T1GTM                         109
#define T1GPOL                        110
#define TMR1GE                        111
#define TMR2                          112
#define PR2                           113
#define T2CON                         114
#define T2CKPS0                       115
#define T2CKPS                        116
#define T2CKPS1                       117
#define TMR2ON                        118
#define T2OUTPS0                      119
#define T2OUTPS                       120
#define T2OUTPS1                      121
#define T2OUTPS2                      122
#define T2OUTPS3                      123
#define TRISA                         124
#define TRISA0                        125
#define TRISA1                        126
#define TRISA2                        127
#define TRISA3                        128
#define TRISA4                        129
#define TRISA5                        130
#define TRISA6                        131
#define TRISA7                        132
#define TRISB                         133
#define TRISB0                        134
#define TRISB1                        135
#define TRISB2                        136
#define TRISB3                        137
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
#define TRISD                         151
#define TRISD0                        152
#define TRISD1                        153
#define TRISD2                        154
#define TRISD3                        155
#define TRISD4                        156
#define TRISD5                        157
#define TRISD6                        158
#define TRISD7                        159
#define TRISE                         160
#define TRISE0                        161
#define TRISE1                        162
#define TRISE2                        163
#define PIE1                          164
#define TMR1IE                        165
#define TMR2IE                        166
#define CCP1IE                        167
#define SSPIE                         168
#define TXIE                          169
#define RCIE                          170
#define ADIE                          171
#define TMR1GIE                       172
#define PIE2                          173
#define CCP2IE                        174
#define BCLIE                         175
#define OSFIE                         176
#define OPTION_REG                    177
#define PS                            178
#define PS0                           179
#define PS1                           180
#define PS2                           181
#define PSA                           182
#define T0SE                          183
#define TMR0SE                        184
#define T0CS                          185
#define TMR0CS                        186
#define INTEDG                        187
#define nWPUEN                        188
#define PCON                          189
#define nBOR                          190
#define nPOR                          191
#define nRI                           192
#define nRMCLR                        193
#define nRWDT                         194
#define STKUNF                        195
#define STKOVF                        196
#define WDTCON                        197
#define SWDTEN                        198
#define WDTPS                         199
#define WDTPS0                        200
#define WDTPS1                        201
#define WDTPS2                        202
#define WDTPS3                        203
#define WDTPS4                        204
#define OSCCON                        205
#define SCS0                          206
#define SCS                           207
#define SCS1                          208
#define IRCF                          209
#define IRCF0                         210
#define IRCF1                         211
#define IRCF2                         212
#define IRCF3                         213
#define OSCSTAT                       214
#define HFIOFS                        215
#define LFIOFR                        216
#define HFIOFR                        217
#define OSTS                          218
#define SOSCR                         219
#define T1OSCR                        220
#define ADRESL                        221
#define ADRESH                        222
#define ADCON0                        223
#define ADON                          224
#define GO_nDONE                      225
#define GO                            226
#define ADGO                          227
#define CHS0                          228
#define CHS                           229
#define CHS1                          230
#define CHS2                          231
#define CHS3                          232
#define CHS4                          233
#define ADCON1                        234
#define ADPREF0                       235
#define ADPREF                        236
#define ADPREF1                       237
#define ADCS0                         238
#define ADCS                          239
#define ADCS1                         240
#define ADCS2                         241
#define ADFM                          242
#define LATA                          243
#define LATA0                         244
#define LATA1                         245
#define LATA2                         246
#define LATA3                         247
#define LATA4                         248
#define LATA5                         249
#define LATA6                         250
#define LATA7                         251
#define LATB                          252
#define LATB0                         253
#define LATB1                         254
#define LATB2                         255
#define LATB3                         256
#define LATB4                         257
#define LATB5                         258
#define LATB6                         259
#define LATB7                         260
#define LATC                          261
#define LATC0                         262
#define LATC1                         263
#define LATC2                         264
#define LATC3                         265
#define LATC4                         266
#define LATC5                         267
#define LATC6                         268
#define LATC7                         269
#define LATD0                         270
#define LATD                          271
#define LATD1                         272
#define LATD2                         273
#define LATD3                         274
#define LATD4                         275
#define LATD5                         276
#define LATD6                         277
#define LATD7                         278
#define LATE                          279
#define LATE0                         280
#define LATE1                         281
#define LATE2                         282
#define BORCON                        283
#define BORRDY                        284
#define BORFS                         285
#define SBOREN                        286
#define FVRCON                        287
#define ADFVR0                        288
#define ADFVR                         289
#define ADFVR1                        290
#define TSRNG                         291
#define TSEN                          292
#define FVRRDY                        293
#define FVREN                         294
#define APFCON                        295
#define CCP2SEL                       296
#define SSSEL                         297
#define ANSA0                         298
#define ANSELA                        299
#define ANSA1                         300
#define ANSA2                         301
#define ANSA3                         302
#define ANSA5                         303
#define ANSB0                         304
#define ANSELB                        305
#define ANSB1                         306
#define ANSB2                         307
#define ANSB3                         308
#define ANSB4                         309
#define ANSB5                         310
#define ANSELC                        311
#define ANSC0                         312
#define ANSC1                         313
#define ANSC2                         314
#define ANSC3                         315
#define ANSC4                         316
#define ANSC5                         317
#define ANSC6                         318
#define ANSC7                         319
#define ANSELD                        320
#define ANSD0                         321
#define ANSD1                         322
#define ANSD2                         323
#define ANSD3                         324
#define ANSD4                         325
#define ANSD5                         326
#define ANSD6                         327
#define ANSD7                         328
#define ANSELE                        329
#define ANSE0                         330
#define ANSE1                         331
#define ANSE2                         332
#define PMADRL                        333
#define PMADRH                        334
#define PMDATL                        335
#define PMDATH                        336
#define PMCON1                        337
#define RD                            338
#define WR                            339
#define WREN                          340
#define WRERR                         341
#define FREE                          342
#define LWLO                          343
#define CFGS                          344
#define PMCON2                        345
#define VREGCON                       346
#define VREGPM                        347
#define RCREG                         348
#define TXREG                         349
#define SP1BRGL                       350
#define SPBRGL                        351
#define SP1BRGH                       352
#define SPBRGH                        353
#define RCSTA                         354
#define RX9D                          355
#define OERR                          356
#define FERR                          357
#define ADDEN                         358
#define CREN                          359
#define SREN                          360
#define RX9                           361
#define SPEN                          362
#define TXSTA                         363
#define TX9D                          364
#define TRMT                          365
#define BRGH                          366
#define SENDB                         367
#define SYNC                          368
#define TXEN                          369
#define TX9                           370
#define CSRC                          371
#define BAUDCON                       372
#define ABDEN                         373
#define WUE                           374
#define BRG16                         375
#define SCKP                          376
#define RCIDL                         377
#define ABDOVF                        378
#define WPUB0                         379
#define WPUB                          380
#define WPUB1                         381
#define WPUB2                         382
#define WPUB3                         383
#define WPUB4                         384
#define WPUB5                         385
#define WPUB6                         386
#define WPUB7                         387
#define WPUE                          388
#define WPUE3                         389
#define SSPBUF                        390
#define SSPADD                        391
#define SSPMSK                        392
#define SSPSTAT                       393
#define BF                            394
#define UA                            395
#define R_nW                          396
#define S                             397
#define P                             398
#define D_nA                          399
#define CKE                           400
#define SMP                           401
#define SSPCON1                       402
#define SSPM0                         403
#define SSPM                          404
#define SSPM1                         405
#define SSPM2                         406
#define SSPM3                         407
#define CKP                           408
#define SSPEN                         409
#define SSPOV                         410
#define WCOL                          411
#define SSPCON2                       412
#define SEN                           413
#define RSEN                          414
#define PEN                           415
#define RCEN                          416
#define ACKEN                         417
#define ACKDT                         418
#define ACKSTAT                       419
#define GCEN                          420
#define SSPCON3                       421
#define DHEN                          422
#define AHEN                          423
#define SBCDE                         424
#define SDAHT                         425
#define BOEN                          426
#define SCIE                          427
#define PCIE                          428
#define ACKTIM                        429
#define CCPR1L                        430
#define CCPR1H                        431
#define CCP1CON                       432
#define CCP1M0                        433
#define CCP1M                         434
#define CCP1M1                        435
#define CCP1M2                        436
#define CCP1M3                        437
#define DC1B                          438
#define DC1B0                         439
#define DC1B1                         440
#define CCPR2L                        441
#define CCPR2H                        442
#define CCP2CON                       443
#define CCP2M                         444
#define CCP2M0                        445
#define CCP2M1                        446
#define CCP2M2                        447
#define CCP2M3                        448
#define DC2B0                         449
#define DC2B                          450
#define DC2B1                         451
#define IOCBP                         452
#define IOCBP0                        453
#define IOCBP1                        454
#define IOCBP2                        455
#define IOCBP3                        456
#define IOCBP4                        457
#define IOCBP5                        458
#define IOCBP6                        459
#define IOCBP7                        460
#define IOCBN0                        461
#define IOCBN                         462
#define IOCBN1                        463
#define IOCBN2                        464
#define IOCBN3                        465
#define IOCBN4                        466
#define IOCBN5                        467
#define IOCBN6                        468
#define IOCBN7                        469
#define IOCBF0                        470
#define IOCBF                         471
#define IOCBF1                        472
#define IOCBF2                        473
#define IOCBF3                        474
#define IOCBF4                        475
#define IOCBF5                        476
#define IOCBF6                        477
#define IOCBF7                        478
#define STATUS_SHAD                   479
#define C_SHAD                        480
#define DC_SHAD                       481
#define Z_SHAD                        482
#define WREG_SHAD                     483
#define BSR_SHAD                      484
#define PCLATH_SHAD                   485
#define FSR0L_SHAD                    486
#define FSR0H_SHAD                    487
#define FSR1L_SHAD                    488
#define FSR1H_SHAD                    489
#define STKPTR                        490
#define TOSL                          491
#define TOSH                          492

#endif // _PIC16F1517_H_
