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

#ifndef _PIC16F1823_H_
#define _PIC16F1823_H_

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
#define C1INP                         36
#define PORTA_CK                      37
#define AN0                           38
#define PORTA_TX                      39
#define RA0                           40
#define DACOUT                        41
#define CPS0                          42
#define PORTA_DT                      43
#define AN1                           44
#define PORTA_RX                      45
#define SRI                           46
#define RA1                           47
#define C12IN0N                       48
#define CPS1                          49
#define AN2                           50
#define PORTA_C1OUT                   51
#define FLT0                          52
#define T0CKI                         53
#define RA2                           54
#define SRQ                           55
#define CPS2                          56
#define RA3                           57
#define PORTA_nSS                     58
#define nMCLR                         59
#define CLKOUT                        60
#define AN3                           61
#define CLKR                          62
#define PORTA_SDO                     63
#define T1OSO                         64
#define RA4                           65
#define OSC2                          66
#define CPS3                          67
#define CLKIN                         68
#define T1CKI                         69
#define T1OSI                         70
#define RA5                           71
#define OSC1                          72
#define PORTC                         73
#define AN4                           74
#define SCL                           75
#define SCK                           76
#define C2INP                         77
#define RC0                           78
#define CPS4                          79
#define AN5                           80
#define C12IN1N                       81
#define RC1                           82
#define SDA                           83
#define CPS5                          84
#define SDI                           85
#define AN6                           86
#define PORTC_SDO                     87
#define P1D                           88
#define C12IN2N                       89
#define RC2                           90
#define MDCIN1                        91
#define CPS6                          92
#define AN7                           93
#define C12IN3N                       94
#define PORTC_nSS                     95
#define P1C                           96
#define MDMIN                         97
#define RC3                           98
#define CPS7                          99
#define PORTC_CK                      100
#define PORTC_C2OUT                   101
#define PORTC_MDOUT                   102
#define P1B                           103
#define SRNQ                          104
#define RC4                           105
#define PORTC_TX                      106
#define PORTC_RX                      107
#define PORTC_DT                      108
#define CCP1                          109
#define MDCIN2                        110
#define P1A                           111
#define RC5                           112
#define PIR1                          113
#define TMR1IF                        114
#define TMR2IF                        115
#define CCP1IF                        116
#define SSP1IF                        117
#define TXIF                          118
#define RCIF                          119
#define ADIF                          120
#define TMR1GIF                       121
#define PIR2                          122
#define BCL1IF                        123
#define EEIF                          124
#define C1IF                          125
#define C2IF                          126
#define OSFIF                         127
#define TMR0                          128
#define TMR1L                         129
#define TMR1H                         130
#define T1CON                         131
#define TMR1ON                        132
#define nT1SYNC                       133
#define T1OSCEN                       134
#define T1CKPS0                       135
#define T1CKPS                        136
#define T1CKPS1                       137
#define TMR1CS                        138
#define TMR1CS0                       139
#define TMR1CS1                       140
#define T1GCON                        141
#define T1GSS0                        142
#define T1GSS                         143
#define T1GSS1                        144
#define T1GVAL                        145
#define T1GGO_nDONE                   146
#define T1GGO                         147
#define T1GSPM                        148
#define T1GTM                         149
#define T1GPOL                        150
#define TMR1GE                        151
#define TMR2                          152
#define PR2                           153
#define T2CON                         154
#define T2CKPS0                       155
#define T2CKPS                        156
#define T2CKPS1                       157
#define TMR2ON                        158
#define T2OUTPS0                      159
#define T2OUTPS                       160
#define T2OUTPS1                      161
#define T2OUTPS2                      162
#define T2OUTPS3                      163
#define CPSCON0                       164
#define T0XCS                         165
#define CPSOUT                        166
#define CPSRNG                        167
#define CPSRNG0                       168
#define CPSRNG1                       169
#define CPSRM                         170
#define CPSON                         171
#define CPSCON1                       172
#define CPSCH                         173
#define CPSCH0                        174
#define CPSCH1                        175
#define CPSCH2                        176
#define CPSCH3                        177
#define TRISA                         178
#define TRISA0                        179
#define TRISA1                        180
#define TRISA2                        181
#define TRISA3                        182
#define TRISA4                        183
#define TRISA5                        184
#define TRISC                         185
#define TRISC0                        186
#define TRISC1                        187
#define TRISC2                        188
#define TRISC3                        189
#define TRISC4                        190
#define TRISC5                        191
#define PIE1                          192
#define TMR1IE                        193
#define TMR2IE                        194
#define CCP1IE                        195
#define SSP1IE                        196
#define TXIE                          197
#define RCIE                          198
#define ADIE                          199
#define TMR1GIE                       200
#define PIE2                          201
#define BCL1IE                        202
#define EEIE                          203
#define C1IE                          204
#define C2IE                          205
#define OSFIE                         206
#define OPTION_REG                    207
#define PS                            208
#define PS0                           209
#define PS1                           210
#define PS2                           211
#define PSA                           212
#define T0SE                          213
#define TMR0SE                        214
#define T0CS                          215
#define TMR0CS                        216
#define INTEDG                        217
#define nWPUEN                        218
#define PCON                          219
#define nBOR                          220
#define nPOR                          221
#define nRI                           222
#define nRMCLR                        223
#define STKUNF                        224
#define STKOVF                        225
#define WDTCON                        226
#define SWDTEN                        227
#define WDTPS                         228
#define WDTPS0                        229
#define WDTPS1                        230
#define WDTPS2                        231
#define WDTPS3                        232
#define WDTPS4                        233
#define OSCTUNE                       234
#define TUN0                          235
#define TUN                           236
#define TUN1                          237
#define TUN2                          238
#define TUN3                          239
#define TUN4                          240
#define TUN5                          241
#define OSCCON                        242
#define SCS0                          243
#define SCS                           244
#define SCS1                          245
#define IRCF                          246
#define IRCF0                         247
#define IRCF1                         248
#define IRCF2                         249
#define IRCF3                         250
#define SPLLEN                        251
#define OSCSTAT                       252
#define HFIOFS                        253
#define LFIOFR                        254
#define MFIOFR                        255
#define HFIOFL                        256
#define HFIOFR                        257
#define OSTS                          258
#define PLLR                          259
#define T1OSCR                        260
#define ADRESL                        261
#define ADRESH                        262
#define ADCON0                        263
#define ADON                          264
#define nDONE                         265
#define GO_nDONE                      266
#define GO                            267
#define ADGO                          268
#define CHS0                          269
#define CHS                           270
#define CHS1                          271
#define CHS2                          272
#define CHS3                          273
#define CHS4                          274
#define ADCON1                        275
#define ADPREF0                       276
#define ADPREF                        277
#define ADPREF1                       278
#define ADCS0                         279
#define ADCS                          280
#define ADCS1                         281
#define ADCS2                         282
#define ADFM                          283
#define LATA                          284
#define LATA0                         285
#define LATA1                         286
#define LATA2                         287
#define LATA4                         288
#define LATA5                         289
#define LATC                          290
#define LATC0                         291
#define LATC1                         292
#define LATC2                         293
#define LATC3                         294
#define LATC4                         295
#define LATC5                         296
#define CM1CON0                       297
#define C1SYNC                        298
#define C1HYS                         299
#define C1SP                          300
#define C1POL                         301
#define C1OE                          302
#define CM1CON0_C1OUT                 303
#define C1ON                          304
#define CM1CON1                       305
#define C1NCH0                        306
#define C1NCH                         307
#define C1NCH1                        308
#define C1PCH                         309
#define C1PCH0                        310
#define C1PCH1                        311
#define C1INTN                        312
#define C1INTP                        313
#define CM2CON0                       314
#define C2SYNC                        315
#define C2HYS                         316
#define C2SP                          317
#define C2POL                         318
#define C2OE                          319
#define CM2CON0_C2OUT                 320
#define C2ON                          321
#define CM2CON1                       322
#define C2NCH0                        323
#define C2NCH                         324
#define C2NCH1                        325
#define C2PCH                         326
#define C2PCH0                        327
#define C2PCH1                        328
#define C2INTN                        329
#define C2INTP                        330
#define CMOUT                         331
#define MC1OUT                        332
#define MC2OUT                        333
#define BORCON                        334
#define BORRDY                        335
#define SBOREN                        336
#define FVRCON                        337
#define ADFVR0                        338
#define ADFVR                         339
#define ADFVR1                        340
#define CDAFVR0                       341
#define CDAFVR                        342
#define CDAFVR1                       343
#define TSRNG                         344
#define TSEN                          345
#define FVRRDY                        346
#define FVREN                         347
#define DACCON0                       348
#define DACPSS                        349
#define DACPSS0                       350
#define DACPSS1                       351
#define DACOE                         352
#define DACLPS                        353
#define DACEN                         354
#define DACCON1                       355
#define DACR0                         356
#define DACR                          357
#define DACR1                         358
#define DACR2                         359
#define DACR3                         360
#define DACR4                         361
#define SRCON0                        362
#define SRPR                          363
#define SRPS                          364
#define SRNQEN                        365
#define SRQEN                         366
#define SRCLK0                        367
#define SRCLK                         368
#define SRCLK1                        369
#define SRCLK2                        370
#define SRLEN                         371
#define SRCON1                        372
#define SRRC1E                        373
#define SRRC2E                        374
#define SRRCKE                        375
#define SRRPE                         376
#define SRSC1E                        377
#define SRSC2E                        378
#define SRSCKE                        379
#define SRSPE                         380
#define APFCON                        381
#define TXCKSEL                       382
#define T1GSEL                        383
#define SSSEL                         384
#define SS1SEL                        385
#define SDO1SEL                       386
#define SDOSEL                        387
#define RXDTSEL                       388
#define ANSA0                         389
#define ANSELA                        390
#define ANSA1                         391
#define ANSA2                         392
#define ANSA4                         393
#define ANSELC                        394
#define ANSC0                         395
#define ANSC                          396
#define ANSC1                         397
#define ANSC2                         398
#define ANSC3                         399
#define EEADRL                        400
#define EEADRH                        401
#define EEDATL                        402
#define EEDATH                        403
#define EECON1                        404
#define RD                            405
#define WR                            406
#define WREN                          407
#define WRERR                         408
#define FREE                          409
#define LWLO                          410
#define CFGS                          411
#define EEPGD                         412
#define EECON2                        413
#define RCREG                         414
#define TXREG                         415
#define SP1BRGL                       416
#define SPBRGL                        417
#define SP1BRGH                       418
#define SPBRGH                        419
#define RCSTA                         420
#define RX9D                          421
#define OERR                          422
#define FERR                          423
#define ADDEN                         424
#define CREN                          425
#define SREN                          426
#define RX9                           427
#define SPEN                          428
#define TXSTA                         429
#define TX9D                          430
#define TRMT                          431
#define BRGH                          432
#define SENDB                         433
#define SYNC                          434
#define TXEN                          435
#define TX9                           436
#define CSRC                          437
#define BAUDCON                       438
#define ABDEN                         439
#define WUE                           440
#define BRG16                         441
#define SCKP                          442
#define RCIDL                         443
#define ABDOVF                        444
#define WPUA0                         445
#define WPUA                          446
#define WPUA1                         447
#define WPUA2                         448
#define WPUA3                         449
#define WPUA4                         450
#define WPUA5                         451
#define WPUC0                         452
#define WPUC                          453
#define WPUC1                         454
#define WPUC2                         455
#define WPUC3                         456
#define WPUC4                         457
#define WPUC5                         458
#define SSP1BUF                       459
#define SSPBUF                        460
#define SSP1ADD                       461
#define SSPADD                        462
#define SSP1MSK                       463
#define SSPMSK                        464
#define SSP1STAT                      465
#define BF                            466
#define UA                            467
#define R_nW                          468
#define S                             469
#define P                             470
#define D_nA                          471
#define CKE                           472
#define SMP                           473
#define SSP1CON1                      474
#define SSPM0                         475
#define SSPM                          476
#define SSPM1                         477
#define SSPM2                         478
#define SSPM3                         479
#define CKP                           480
#define SSPEN                         481
#define SSPOV                         482
#define WCOL                          483
#define SSP1CON2                      484
#define SEN                           485
#define RSEN                          486
#define PEN                           487
#define RCEN                          488
#define ACKEN                         489
#define ACKDT                         490
#define ACKSTAT                       491
#define GCEN                          492
#define SSP1CON3                      493
#define DHEN                          494
#define AHEN                          495
#define SBCDE                         496
#define SDAHT                         497
#define BOEN                          498
#define SCIE                          499
#define PCIE                          500
#define ACKTIM                        501
#define CCPR1L                        502
#define CCPR1H                        503
#define CCP1CON                       504
#define CCP1M0                        505
#define CCP1M                         506
#define CCP1M1                        507
#define CCP1M2                        508
#define CCP1M3                        509
#define DC1B                          510
#define DC1B0                         511
#define DC1B1                         512
#define P1M                           513
#define P1M0                          514
#define P1M1                          515
#define PWM1CON                       516
#define P1DC                          517
#define P1DC0                         518
#define P1DC1                         519
#define P1DC2                         520
#define P1DC3                         521
#define P1DC4                         522
#define P1DC5                         523
#define P1DC6                         524
#define P1RSEN                        525
#define PSS1BD                        526
#define PSS1BD0                       527
#define PSS1BD1                       528
#define PSS1AC                        529
#define PSS1AC0                       530
#define PSS1AC1                       531
#define CCP1AS                        532
#define CCP1AS0                       533
#define CCP1AS1                       534
#define CCP1AS2                       535
#define CCP1ASE                       536
#define PSTR1CON                      537
#define STR1A                         538
#define STR1B                         539
#define STR1C                         540
#define STR1D                         541
#define STR1SYNC                      542
#define IOCAP                         543
#define IOCAP0                        544
#define IOCAP1                        545
#define IOCAP2                        546
#define IOCAP3                        547
#define IOCAP4                        548
#define IOCAP5                        549
#define IOCAN0                        550
#define IOCAN                         551
#define IOCAN1                        552
#define IOCAN2                        553
#define IOCAN3                        554
#define IOCAN4                        555
#define IOCAN5                        556
#define IOCAF0                        557
#define IOCAF                         558
#define IOCAF1                        559
#define IOCAF2                        560
#define IOCAF3                        561
#define IOCAF4                        562
#define IOCAF5                        563
#define CLKRCON                       564
#define CLKRDIV                       565
#define CLKRDIV0                      566
#define CLKRDIV1                      567
#define CLKRDIV2                      568
#define CLKRDC                        569
#define CLKRDC0                       570
#define CLKRDC1                       571
#define CLKRSLR                       572
#define CLKROE                        573
#define CLKREN                        574
#define MDCON                         575
#define MDBIT                         576
#define MDCON_MDOUT                   577
#define MDOPOL                        578
#define MDSLR                         579
#define MDOE                          580
#define MDEN                          581
#define MDSRC                         582
#define MDMS0                         583
#define MDMS                          584
#define MDMS1                         585
#define MDMS2                         586
#define MDMS3                         587
#define MDMSODIS                      588
#define MDCARL                        589
#define MDCL0                         590
#define MDCL                          591
#define MDCL1                         592
#define MDCL2                         593
#define MDCL3                         594
#define MDCLSYNC                      595
#define MDCLPOL                       596
#define MDCLODIS                      597
#define MDCARH                        598
#define MDCH                          599
#define MDCH0                         600
#define MDCH1                         601
#define MDCH2                         602
#define MDCH3                         603
#define MDCHSYNC                      604
#define MDCHPOL                       605
#define MDCHODIS                      606
#define STATUS_SHAD                   607
#define C_SHAD                        608
#define DC_SHAD                       609
#define Z_SHAD                        610
#define WREG_SHAD                     611
#define BSR_SHAD                      612
#define PCLATH_SHAD                   613
#define FSR0L_SHAD                    614
#define FSR0H_SHAD                    615
#define FSR1L_SHAD                    616
#define FSR1H_SHAD                    617
#define STKPTR                        618
#define TOSL                          619
#define TOSH                          620

#endif // _PIC16F1823_H_
