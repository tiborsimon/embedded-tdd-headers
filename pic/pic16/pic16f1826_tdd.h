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

#ifndef _PIC16F1826_H_
#define _PIC16F1826_H_

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
#define PIR1                          53
#define TMR1IF                        54
#define TMR2IF                        55
#define CCP1IF                        56
#define SSP1IF                        57
#define TXIF                          58
#define RCIF                          59
#define ADIF                          60
#define TMR1GIF                       61
#define PIR2                          62
#define BCL1IF                        63
#define EEIF                          64
#define C1IF                          65
#define C2IF                          66
#define OSFIF                         67
#define TMR0                          68
#define TMR1L                         69
#define TMR1H                         70
#define T1CON                         71
#define TMR1ON                        72
#define nT1SYNC                       73
#define T1OSCEN                       74
#define T1CKPS0                       75
#define T1CKPS                        76
#define T1CKPS1                       77
#define TMR1CS                        78
#define TMR1CS0                       79
#define TMR1CS1                       80
#define T1GCON                        81
#define T1GSS0                        82
#define T1GSS                         83
#define T1GSS1                        84
#define T1GVAL                        85
#define T1GGO                         86
#define T1GSPM                        87
#define T1GTM                         88
#define T1GPOL                        89
#define TMR1GE                        90
#define TMR2                          91
#define PR2                           92
#define T2CON                         93
#define T2CKPS0                       94
#define T2CKPS                        95
#define T2CKPS1                       96
#define TMR2ON                        97
#define T2OUTPS0                      98
#define T2OUTPS                       99
#define T2OUTPS1                      100
#define T2OUTPS2                      101
#define T2OUTPS3                      102
#define CPSCON0                       103
#define T0XCS                         104
#define CPSOUT                        105
#define CPSRNG                        106
#define CPSRNG0                       107
#define CPSRNG1                       108
#define CPSON                         109
#define CPSCON1                       110
#define CPSCH                         111
#define CPSCH0                        112
#define CPSCH1                        113
#define CPSCH2                        114
#define CPSCH3                        115
#define TRISA                         116
#define TRISA0                        117
#define TRISA1                        118
#define TRISA2                        119
#define TRISA3                        120
#define TRISA4                        121
#define TRISA5                        122
#define TRISA6                        123
#define TRISA7                        124
#define TRISB                         125
#define TRISB0                        126
#define TRISB1                        127
#define TRISB2                        128
#define TRISB3                        129
#define TRISB4                        130
#define TRISB5                        131
#define TRISB6                        132
#define TRISB7                        133
#define PIE1                          134
#define TMR1IE                        135
#define TMR2IE                        136
#define CCP1IE                        137
#define SSP1IE                        138
#define TXIE                          139
#define RCIE                          140
#define ADIE                          141
#define TMR1GIE                       142
#define PIE2                          143
#define BCL1IE                        144
#define EEIE                          145
#define C1IE                          146
#define C2IE                          147
#define OSFIE                         148
#define OPTION_REG                    149
#define PS                            150
#define PS0                           151
#define PS1                           152
#define PS2                           153
#define PSA                           154
#define T0SE                          155
#define TMR0SE                        156
#define T0CS                          157
#define TMR0CS                        158
#define INTEDG                        159
#define nWPUEN                        160
#define PCON                          161
#define nBOR                          162
#define nPOR                          163
#define nRI                           164
#define nRMCLR                        165
#define STKUNF                        166
#define STKOVF                        167
#define WDTCON                        168
#define SWDTEN                        169
#define WDTPS                         170
#define WDTPS0                        171
#define WDTPS1                        172
#define WDTPS2                        173
#define WDTPS3                        174
#define WDTPS4                        175
#define OSCTUNE                       176
#define TUN0                          177
#define TUN                           178
#define TUN1                          179
#define TUN2                          180
#define TUN3                          181
#define TUN4                          182
#define TUN5                          183
#define OSCCON                        184
#define SCS0                          185
#define SCS                           186
#define SCS1                          187
#define IRCF                          188
#define IRCF0                         189
#define IRCF1                         190
#define IRCF2                         191
#define IRCF3                         192
#define SPLLEN                        193
#define OSCSTAT                       194
#define HFIOFS                        195
#define LFIOFR                        196
#define MFIOFR                        197
#define HFIOFL                        198
#define HFIOFR                        199
#define OSTS                          200
#define PLLR                          201
#define T1OSCR                        202
#define ADRESL                        203
#define ADRESH                        204
#define ADCON0                        205
#define ADON                          206
#define GO_nDONE                      207
#define GO                            208
#define ADGO                          209
#define CHS0                          210
#define CHS                           211
#define CHS1                          212
#define CHS2                          213
#define CHS3                          214
#define CHS4                          215
#define ADCON1                        216
#define ADPREF0                       217
#define ADPREF                        218
#define ADPREF1                       219
#define ADNREF                        220
#define ADCS0                         221
#define ADCS                          222
#define ADCS1                         223
#define ADCS2                         224
#define ADFM                          225
#define LATA                          226
#define LATA0                         227
#define LATA1                         228
#define LATA2                         229
#define LATA3                         230
#define LATA4                         231
#define LATA6                         232
#define LATA7                         233
#define LATB                          234
#define LATB0                         235
#define LATB1                         236
#define LATB2                         237
#define LATB3                         238
#define LATB4                         239
#define LATB5                         240
#define LATB6                         241
#define LATB7                         242
#define CM1CON0                       243
#define C1SYNC                        244
#define C1HYS                         245
#define C1SP                          246
#define C1POL                         247
#define C1OE                          248
#define C1OUT                         249
#define C1ON                          250
#define CM1CON1                       251
#define C1NCH0                        252
#define C1NCH                         253
#define C1NCH1                        254
#define C1PCH                         255
#define C1PCH0                        256
#define C1PCH1                        257
#define C1INTN                        258
#define C1INTP                        259
#define CM2CON0                       260
#define C2SYNC                        261
#define C2HYS                         262
#define C2SP                          263
#define C2POL                         264
#define C2OE                          265
#define C2OUT                         266
#define C2ON                          267
#define CM2CON1                       268
#define C2NCH0                        269
#define C2NCH                         270
#define C2NCH1                        271
#define C2PCH                         272
#define C2PCH0                        273
#define C2PCH1                        274
#define C2INTN                        275
#define C2INTP                        276
#define CMOUT                         277
#define MC1OUT                        278
#define MC2OUT                        279
#define BORCON                        280
#define BORRDY                        281
#define SBOREN                        282
#define FVRCON                        283
#define ADFVR0                        284
#define ADFVR                         285
#define ADFVR1                        286
#define CDAFVR0                       287
#define CDAFVR                        288
#define CDAFVR1                       289
#define TSRNG                         290
#define TSEN                          291
#define FVRRDY                        292
#define FVREN                         293
#define DACCON0                       294
#define DACNSS                        295
#define DACPSS                        296
#define DACPSS0                       297
#define DACPSS1                       298
#define DACOE                         299
#define DACLPS                        300
#define DACEN                         301
#define DACCON1                       302
#define DACR0                         303
#define DACR                          304
#define DACR1                         305
#define DACR2                         306
#define DACR3                         307
#define DACR4                         308
#define SRCON0                        309
#define SRPR                          310
#define SRPS                          311
#define SRNQEN                        312
#define SRQEN                         313
#define SRCLK0                        314
#define SRCLK                         315
#define SRCLK1                        316
#define SRCLK2                        317
#define SRLEN                         318
#define SRCON1                        319
#define SRRC1E                        320
#define SRRC2E                        321
#define SRRCKE                        322
#define SRRPE                         323
#define SRSC1E                        324
#define SRSC2E                        325
#define SRSCKE                        326
#define SRSPE                         327
#define APFCON0                       328
#define CCP1SEL                       329
#define P1CSEL                        330
#define P1DSEL                        331
#define SS1SEL                        332
#define SDO1SEL                       333
#define RXDTSEL                       334
#define APFCON1                       335
#define TXCKSEL                       336
#define ANSA0                         337
#define ANSELA                        338
#define ANSA1                         339
#define ANSA2                         340
#define ANSA3                         341
#define ANSA4                         342
#define ANSELB                        343
#define ANSB1                         344
#define ANSB2                         345
#define ANSB3                         346
#define ANSB4                         347
#define ANSB5                         348
#define ANSB6                         349
#define ANSB7                         350
#define EEADRL                        351
#define EEADRH                        352
#define EEDATL                        353
#define EEDATH                        354
#define EECON1                        355
#define RD                            356
#define WR                            357
#define WREN                          358
#define WRERR                         359
#define FREE                          360
#define LWLO                          361
#define CFGS                          362
#define EEPGD                         363
#define EECON2                        364
#define RCREG                         365
#define TXREG                         366
#define SP1BRGL                       367
#define SPBRGL                        368
#define SP1BRGH                       369
#define SPBRGH                        370
#define RCSTA                         371
#define RX9D                          372
#define OERR                          373
#define FERR                          374
#define ADDEN                         375
#define CREN                          376
#define SREN                          377
#define RX9                           378
#define SPEN                          379
#define TXSTA                         380
#define TX9D                          381
#define TRMT                          382
#define BRGH                          383
#define SENDB                         384
#define SYNC                          385
#define TXEN                          386
#define TX9                           387
#define CSRC                          388
#define BAUDCON                       389
#define ABDEN                         390
#define WUE                           391
#define BRG16                         392
#define SCKP                          393
#define RCIDL                         394
#define ABDOVF                        395
#define WPUA                          396
#define WPUA5                         397
#define WPUB0                         398
#define WPUB                          399
#define WPUB1                         400
#define WPUB2                         401
#define WPUB3                         402
#define WPUB4                         403
#define WPUB5                         404
#define WPUB6                         405
#define WPUB7                         406
#define SSP1BUF                       407
#define SSPBUF                        408
#define SSP1ADD                       409
#define SSPADD                        410
#define SSP1MSK                       411
#define SSPMSK                        412
#define SSP1STAT                      413
#define BF                            414
#define UA                            415
#define R_nW                          416
#define S                             417
#define P                             418
#define D_nA                          419
#define CKE                           420
#define SMP                           421
#define SSP1CON1                      422
#define SSPM0                         423
#define SSPM                          424
#define SSPM1                         425
#define SSPM2                         426
#define SSPM3                         427
#define CKP                           428
#define SSPEN                         429
#define SSPOV                         430
#define WCOL                          431
#define SSP1CON2                      432
#define SEN                           433
#define RSEN                          434
#define PEN                           435
#define RCEN                          436
#define ACKEN                         437
#define ACKDT                         438
#define ACKSTAT                       439
#define GCEN                          440
#define SSP1CON3                      441
#define DHEN                          442
#define AHEN                          443
#define SBCDE                         444
#define SDAHT                         445
#define BOEN                          446
#define SCIE                          447
#define PCIE                          448
#define ACKTIM                        449
#define CCPR1L                        450
#define CCPR1H                        451
#define CCP1CON                       452
#define CCP1M0                        453
#define CCP1M                         454
#define CCP1M1                        455
#define CCP1M2                        456
#define CCP1M3                        457
#define DC1B                          458
#define DC1B0                         459
#define DC1B1                         460
#define P1M                           461
#define P1M0                          462
#define P1M1                          463
#define PWM1CON                       464
#define P1DC                          465
#define P1DC0                         466
#define P1DC1                         467
#define P1DC2                         468
#define P1DC3                         469
#define P1DC4                         470
#define P1DC5                         471
#define P1DC6                         472
#define P1RSEN                        473
#define PSS1BD                        474
#define PSS1BD0                       475
#define PSS1BD1                       476
#define PSS1AC                        477
#define PSS1AC0                       478
#define PSS1AC1                       479
#define CCP1AS                        480
#define CCP1AS0                       481
#define CCP1AS1                       482
#define CCP1AS2                       483
#define CCP1ASE                       484
#define PSTR1CON                      485
#define STR1A                         486
#define STR1B                         487
#define STR1C                         488
#define STR1D                         489
#define STR1SYNC                      490
#define IOCBP                         491
#define IOCBP0                        492
#define IOCBP1                        493
#define IOCBP2                        494
#define IOCBP3                        495
#define IOCBP4                        496
#define IOCBP5                        497
#define IOCBP6                        498
#define IOCBP7                        499
#define IOCBN0                        500
#define IOCBN                         501
#define IOCBN1                        502
#define IOCBN2                        503
#define IOCBN3                        504
#define IOCBN4                        505
#define IOCBN5                        506
#define IOCBN6                        507
#define IOCBN7                        508
#define IOCBF0                        509
#define IOCBF                         510
#define IOCBF1                        511
#define IOCBF2                        512
#define IOCBF3                        513
#define IOCBF4                        514
#define IOCBF5                        515
#define IOCBF6                        516
#define IOCBF7                        517
#define CLKRCON                       518
#define CLKRDIV                       519
#define CLKRDIV0                      520
#define CLKRDIV1                      521
#define CLKRDIV2                      522
#define CLKRDC                        523
#define CLKRDC0                       524
#define CLKRDC1                       525
#define CLKRSLR                       526
#define CLKROE                        527
#define CLKREN                        528
#define MDCON                         529
#define MDBIT                         530
#define MDOUT                         531
#define MDOPOL                        532
#define MDSLR                         533
#define MDOE                          534
#define MDEN                          535
#define MDSRC                         536
#define MDMS0                         537
#define MDMS                          538
#define MDMS1                         539
#define MDMS2                         540
#define MDMS3                         541
#define MDMSODIS                      542
#define MDCARL                        543
#define MDCL0                         544
#define MDCL                          545
#define MDCL1                         546
#define MDCL2                         547
#define MDCL3                         548
#define MDCLSYNC                      549
#define MDCLPOL                       550
#define MDCLODIS                      551
#define MDCARH                        552
#define MDCH                          553
#define MDCH0                         554
#define MDCH1                         555
#define MDCH2                         556
#define MDCH3                         557
#define MDCHSYNC                      558
#define MDCHPOL                       559
#define MDCHODIS                      560
#define STATUS_SHAD                   561
#define C_SHAD                        562
#define DC_SHAD                       563
#define Z_SHAD                        564
#define WREG_SHAD                     565
#define BSR_SHAD                      566
#define PCLATH_SHAD                   567
#define FSR0L_SHAD                    568
#define FSR0H_SHAD                    569
#define FSR1L_SHAD                    570
#define FSR1H_SHAD                    571
#define STKPTR                        572
#define TOSL                          573
#define TOSH                          574

#endif // _PIC16F1826_H_
