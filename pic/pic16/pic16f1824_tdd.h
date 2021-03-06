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

#ifndef _PIC16F1824_H_
#define _PIC16F1824_H_

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
#define PORTC                         42
#define RC0                           43
#define RC1                           44
#define RC2                           45
#define RC3                           46
#define RC4                           47
#define RC5                           48
#define PIR1                          49
#define TMR1IF                        50
#define TMR2IF                        51
#define CCP1IF                        52
#define SSP1IF                        53
#define TXIF                          54
#define RCIF                          55
#define ADIF                          56
#define TMR1GIF                       57
#define PIR2                          58
#define CCP2IF                        59
#define BCL1IF                        60
#define EEIF                          61
#define C1IF                          62
#define C2IF                          63
#define OSFIF                         64
#define PIR3                          65
#define TMR4IF                        66
#define TMR6IF                        67
#define CCP3IF                        68
#define CCP4IF                        69
#define TMR0                          70
#define TMR1L                         71
#define TMR1H                         72
#define T1CON                         73
#define TMR1ON                        74
#define nT1SYNC                       75
#define T1OSCEN                       76
#define T1CKPS0                       77
#define T1CKPS                        78
#define T1CKPS1                       79
#define TMR1CS                        80
#define TMR1CS0                       81
#define TMR1CS1                       82
#define T1GCON                        83
#define T1GSS0                        84
#define T1GSS                         85
#define T1GSS1                        86
#define T1GVAL                        87
#define T1GGO_nDONE                   88
#define T1GGO                         89
#define T1GSPM                        90
#define T1GTM                         91
#define T1GPOL                        92
#define TMR1GE                        93
#define TMR2                          94
#define PR2                           95
#define T2CON                         96
#define T2CKPS0                       97
#define T2CKPS                        98
#define T2CKPS1                       99
#define TMR2ON                        100
#define T2OUTPS0                      101
#define T2OUTPS                       102
#define T2OUTPS1                      103
#define T2OUTPS2                      104
#define T2OUTPS3                      105
#define CPSCON0                       106
#define T0XCS                         107
#define CPSOUT                        108
#define CPSRNG                        109
#define CPSRNG0                       110
#define CPSRNG1                       111
#define CPSRM                         112
#define CPSON                         113
#define CPSCON1                       114
#define CPSCH                         115
#define CPSCH0                        116
#define CPSCH1                        117
#define CPSCH2                        118
#define CPSCH3                        119
#define TRISA                         120
#define TRISA0                        121
#define TRISA1                        122
#define TRISA2                        123
#define TRISA3                        124
#define TRISA4                        125
#define TRISA5                        126
#define TRISC                         127
#define TRISC0                        128
#define TRISC1                        129
#define TRISC2                        130
#define TRISC3                        131
#define TRISC4                        132
#define TRISC5                        133
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
#define CCP2IE                        144
#define BCL1IE                        145
#define EEIE                          146
#define C1IE                          147
#define C2IE                          148
#define OSFIE                         149
#define PIE3                          150
#define TMR4IE                        151
#define TMR6IE                        152
#define CCP3IE                        153
#define CCP4IE                        154
#define OPTION_REG                    155
#define PS                            156
#define PS0                           157
#define PS1                           158
#define PS2                           159
#define PSA                           160
#define T0SE                          161
#define TMR0SE                        162
#define T0CS                          163
#define TMR0CS                        164
#define INTEDG                        165
#define nWPUEN                        166
#define PCON                          167
#define nBOR                          168
#define nPOR                          169
#define nRI                           170
#define nRMCLR                        171
#define STKUNF                        172
#define STKOVF                        173
#define WDTCON                        174
#define SWDTEN                        175
#define WDTPS                         176
#define WDTPS0                        177
#define WDTPS1                        178
#define WDTPS2                        179
#define WDTPS3                        180
#define WDTPS4                        181
#define OSCTUNE                       182
#define TUN0                          183
#define TUN                           184
#define TUN1                          185
#define TUN2                          186
#define TUN3                          187
#define TUN4                          188
#define TUN5                          189
#define OSCCON                        190
#define SCS0                          191
#define SCS                           192
#define SCS1                          193
#define IRCF                          194
#define IRCF0                         195
#define IRCF1                         196
#define IRCF2                         197
#define IRCF3                         198
#define SPLLEN                        199
#define OSCSTAT                       200
#define HFIOFS                        201
#define LFIOFR                        202
#define MFIOFR                        203
#define HFIOFL                        204
#define HFIOFR                        205
#define OSTS                          206
#define PLLR                          207
#define T1OSCR                        208
#define ADRESL                        209
#define ADRESH                        210
#define ADCON0                        211
#define ADON                          212
#define GO_nDONE                      213
#define GO                            214
#define ADGO                          215
#define CHS0                          216
#define CHS                           217
#define CHS1                          218
#define CHS2                          219
#define CHS3                          220
#define CHS4                          221
#define ADCON1                        222
#define ADPREF0                       223
#define ADPREF                        224
#define ADPREF1                       225
#define ADNREF                        226
#define ADCS0                         227
#define ADCS                          228
#define ADCS1                         229
#define ADCS2                         230
#define ADFM                          231
#define LATA                          232
#define LATA0                         233
#define LATA1                         234
#define LATA2                         235
#define LATA4                         236
#define LATA5                         237
#define LATC                          238
#define LATC0                         239
#define LATC1                         240
#define LATC2                         241
#define LATC3                         242
#define LATC4                         243
#define LATC5                         244
#define CM1CON0                       245
#define C1SYNC                        246
#define C1HYS                         247
#define C1SP                          248
#define C1POL                         249
#define C1OE                          250
#define C1OUT                         251
#define C1ON                          252
#define CM1CON1                       253
#define C1NCH0                        254
#define C1NCH                         255
#define C1NCH1                        256
#define C1PCH                         257
#define C1PCH0                        258
#define C1PCH1                        259
#define C1INTN                        260
#define C1INTP                        261
#define CM2CON0                       262
#define C2SYNC                        263
#define C2HYS                         264
#define C2SP                          265
#define C2POL                         266
#define C2OE                          267
#define C2OUT                         268
#define C2ON                          269
#define CM2CON1                       270
#define C2NCH0                        271
#define C2NCH                         272
#define C2NCH1                        273
#define C2PCH                         274
#define C2PCH0                        275
#define C2PCH1                        276
#define C2INTN                        277
#define C2INTP                        278
#define CMOUT                         279
#define MC1OUT                        280
#define MC2OUT                        281
#define BORCON                        282
#define BORRDY                        283
#define SBOREN                        284
#define FVRCON                        285
#define ADFVR0                        286
#define ADFVR                         287
#define ADFVR1                        288
#define CDAFVR0                       289
#define CDAFVR                        290
#define CDAFVR1                       291
#define TSRNG                         292
#define TSEN                          293
#define FVRRDY                        294
#define FVREN                         295
#define DACCON0                       296
#define DACNSS                        297
#define DACPSS                        298
#define DACPSS0                       299
#define DACPSS1                       300
#define DACOE                         301
#define DACLPS                        302
#define DACEN                         303
#define DACCON1                       304
#define DACR0                         305
#define DACR                          306
#define DACR1                         307
#define DACR2                         308
#define DACR3                         309
#define DACR4                         310
#define SRCON0                        311
#define SRPR                          312
#define SRPS                          313
#define SRNQEN                        314
#define SRQEN                         315
#define SRCLK0                        316
#define SRCLK                         317
#define SRCLK1                        318
#define SRCLK2                        319
#define SRLEN                         320
#define SRCON1                        321
#define SRRC1E                        322
#define SRRC2E                        323
#define SRRCKE                        324
#define SRRPE                         325
#define SRSC1E                        326
#define SRSC2E                        327
#define SRSCKE                        328
#define SRSPE                         329
#define APFCON0                       330
#define TXCKSEL                       331
#define T1GSEL                        332
#define SSSEL                         333
#define SS1SEL                        334
#define SDO1SEL                       335
#define SDOSEL                        336
#define RXDTSEL                       337
#define APFCON1                       338
#define CCP2SEL                       339
#define P2BSEL                        340
#define P1CSEL                        341
#define P1DSEL                        342
#define ANSA0                         343
#define ANSELA                        344
#define ANSA1                         345
#define ANSA2                         346
#define ANSA4                         347
#define ANSC0                         348
#define ANSELC                        349
#define ANSC1                         350
#define ANSC2                         351
#define ANSC3                         352
#define EEADRL                        353
#define EEADRH                        354
#define EEDATL                        355
#define EEDATH                        356
#define EECON1                        357
#define RD                            358
#define WR                            359
#define WREN                          360
#define WRERR                         361
#define FREE                          362
#define LWLO                          363
#define CFGS                          364
#define EEPGD                         365
#define EECON2                        366
#define RCREG                         367
#define TXREG                         368
#define SP1BRGL                       369
#define SPBRGL                        370
#define SP1BRGH                       371
#define SPBRGH                        372
#define RCSTA                         373
#define RX9D                          374
#define OERR                          375
#define FERR                          376
#define ADDEN                         377
#define CREN                          378
#define SREN                          379
#define RX9                           380
#define SPEN                          381
#define TXSTA                         382
#define TX9D                          383
#define TRMT                          384
#define BRGH                          385
#define SENDB                         386
#define SYNC                          387
#define TXEN                          388
#define TX9                           389
#define CSRC                          390
#define BAUDCON                       391
#define ABDEN                         392
#define WUE                           393
#define BRG16                         394
#define SCKP                          395
#define RCIDL                         396
#define ABDOVF                        397
#define WPUA0                         398
#define WPUA                          399
#define WPUA1                         400
#define WPUA2                         401
#define WPUA3                         402
#define WPUA4                         403
#define WPUA5                         404
#define WPUC                          405
#define WPUC0                         406
#define WPUC1                         407
#define WPUC2                         408
#define WPUC3                         409
#define WPUC4                         410
#define WPUC5                         411
#define SSP1BUF                       412
#define SSPBUF                        413
#define SSP1ADD                       414
#define SSPADD                        415
#define SSP1MSK                       416
#define SSPMSK                        417
#define SSP1STAT                      418
#define BF                            419
#define UA                            420
#define R_nW                          421
#define S                             422
#define P                             423
#define D_nA                          424
#define CKE                           425
#define SMP                           426
#define SSP1CON                       427
#define SSPM0                         428
#define SSPM                          429
#define SSPM1                         430
#define SSPM2                         431
#define SSPM3                         432
#define CKP                           433
#define SSPEN                         434
#define SSPOV                         435
#define WCOL                          436
#define SSP1CON2                      437
#define SEN                           438
#define RSEN                          439
#define PEN                           440
#define RCEN                          441
#define ACKEN                         442
#define ACKDT                         443
#define ACKSTAT                       444
#define GCEN                          445
#define SSP1CON3                      446
#define DHEN                          447
#define AHEN                          448
#define SBCDE                         449
#define SDAHT                         450
#define BOEN                          451
#define SCIE                          452
#define PCIE                          453
#define ACKTIM                        454
#define CCPR1L                        455
#define CCPR1H                        456
#define CCP1CON                       457
#define CCP1M0                        458
#define CCP1M                         459
#define CCP1M1                        460
#define CCP1M2                        461
#define CCP1M3                        462
#define DC1B                          463
#define DC1B0                         464
#define DC1B1                         465
#define P1M                           466
#define P1M0                          467
#define P1M1                          468
#define PWM1CON                       469
#define P1DC                          470
#define P1DC0                         471
#define P1DC1                         472
#define P1DC2                         473
#define P1DC3                         474
#define P1DC4                         475
#define P1DC5                         476
#define P1DC6                         477
#define P1RSEN                        478
#define PSS1BD                        479
#define PSS1BD0                       480
#define PSS1BD1                       481
#define PSS1AC                        482
#define PSS1AC0                       483
#define PSS1AC1                       484
#define CCP1AS                        485
#define CCP1AS0                       486
#define CCP1AS1                       487
#define CCP1AS2                       488
#define CCP1ASE                       489
#define PSTR1CON                      490
#define STR1A                         491
#define STR1B                         492
#define STR1C                         493
#define STR1D                         494
#define STR1SYNC                      495
#define CCPR2L                        496
#define CCPR2H                        497
#define CCP2CON                       498
#define CCP2M                         499
#define CCP2M0                        500
#define CCP2M1                        501
#define CCP2M2                        502
#define CCP2M3                        503
#define DC2B                          504
#define DC2B0                         505
#define DC2B1                         506
#define P2M                           507
#define P2M0                          508
#define P2M1                          509
#define PWM2CON                       510
#define P2DC                          511
#define P2DC0                         512
#define P2DC1                         513
#define P2DC2                         514
#define P2DC3                         515
#define P2DC4                         516
#define P2DC5                         517
#define P2DC6                         518
#define P2RSEN                        519
#define PSS2BD                        520
#define PSS2BD0                       521
#define PSS2BD1                       522
#define PSS2AC0                       523
#define PSS2AC                        524
#define PSS2AC1                       525
#define CCP2AS0                       526
#define CCP2AS                        527
#define CCP2AS1                       528
#define CCP2AS2                       529
#define CCP2ASE                       530
#define PSTR2CON                      531
#define STR2A                         532
#define STR2B                         533
#define STR2C                         534
#define STR2D                         535
#define STR2SYNC                      536
#define CCPTMRS0                      537
#define C1TSEL0                       538
#define C1TSEL                        539
#define C1TSEL1                       540
#define C2TSEL0                       541
#define C2TSEL                        542
#define C2TSEL1                       543
#define C3TSEL0                       544
#define C3TSEL                        545
#define C3TSEL1                       546
#define C4TSEL                        547
#define C4TSEL0                       548
#define C4TSEL1                       549
#define CCPR3L                        550
#define CCPR3H                        551
#define CCP3CON                       552
#define CCP3M                         553
#define CCP3M0                        554
#define CCP3M1                        555
#define CCP3M2                        556
#define CCP3M3                        557
#define DC3B                          558
#define DC3B0                         559
#define DC3B1                         560
#define CCPR4L                        561
#define CCPR4H                        562
#define CCP4CON                       563
#define CCP4M                         564
#define CCP4M0                        565
#define CCP4M1                        566
#define CCP4M2                        567
#define CCP4M3                        568
#define DC4B0                         569
#define DC4B                          570
#define DC4B1                         571
#define INLVLA                        572
#define INLVLA0                       573
#define INLVLA1                       574
#define INLVLA2                       575
#define INLVLA3                       576
#define INLVLA4                       577
#define INLVLA5                       578
#define INLVLC                        579
#define INLVLC0                       580
#define INLVLC1                       581
#define INLVLC2                       582
#define INLVLC3                       583
#define INLVLC4                       584
#define INLVLC5                       585
#define IOCAP                         586
#define IOCAP0                        587
#define IOCAP1                        588
#define IOCAP2                        589
#define IOCAP3                        590
#define IOCAP4                        591
#define IOCAP5                        592
#define IOCAN0                        593
#define IOCAN                         594
#define IOCAN1                        595
#define IOCAN2                        596
#define IOCAN3                        597
#define IOCAN4                        598
#define IOCAN5                        599
#define IOCAF0                        600
#define IOCAF                         601
#define IOCAF1                        602
#define IOCAF2                        603
#define IOCAF3                        604
#define IOCAF4                        605
#define IOCAF5                        606
#define CLKRCON                       607
#define CLKRDIV                       608
#define CLKRDIV0                      609
#define CLKRDIV1                      610
#define CLKRDIV2                      611
#define CLKRDC                        612
#define CLKRDC0                       613
#define CLKRDC1                       614
#define CLKRSLR                       615
#define CLKROE                        616
#define CLKREN                        617
#define MDCON                         618
#define MDBIT                         619
#define MDOUT                         620
#define MDOPOL                        621
#define MDSLR                         622
#define MDOE                          623
#define MDEN                          624
#define MDSRC                         625
#define MDMS0                         626
#define MDMS                          627
#define MDMS1                         628
#define MDMS2                         629
#define MDMS3                         630
#define MDMSODIS                      631
#define MDCARL                        632
#define MDCL0                         633
#define MDCL                          634
#define MDCL1                         635
#define MDCL2                         636
#define MDCL3                         637
#define MDCLSYNC                      638
#define MDCLPOL                       639
#define MDCLODIS                      640
#define MDCARH                        641
#define MDCH                          642
#define MDCH0                         643
#define MDCH1                         644
#define MDCH2                         645
#define MDCH3                         646
#define MDCHSYNC                      647
#define MDCHPOL                       648
#define MDCHODIS                      649
#define TMR4                          650
#define PR4                           651
#define T4CON                         652
#define T4CKPS0                       653
#define T4CKPS                        654
#define T4CKPS1                       655
#define TMR4ON                        656
#define T4OUTPS                       657
#define T4OUTPS0                      658
#define T4OUTPS1                      659
#define T4OUTPS2                      660
#define T4OUTPS3                      661
#define TMR6                          662
#define PR6                           663
#define T6CON                         664
#define T6CKPS0                       665
#define T6CKPS                        666
#define T6CKPS1                       667
#define TMR6ON                        668
#define T6OUTPS0                      669
#define T6OUTPS                       670
#define T6OUTPS1                      671
#define T6OUTPS2                      672
#define T6OUTPS3                      673
#define STATUS_SHAD                   674
#define C_SHAD                        675
#define DC_SHAD                       676
#define Z_SHAD                        677
#define WREG_SHAD                     678
#define BSR_SHAD                      679
#define PCLATH_SHAD                   680
#define FSR0L_SHAD                    681
#define FSR0H_SHAD                    682
#define FSR1L_SHAD                    683
#define FSR1H_SHAD                    684
#define STKPTR                        685
#define TOSL                          686
#define TOSH                          687

#endif // _PIC16F1824_H_
