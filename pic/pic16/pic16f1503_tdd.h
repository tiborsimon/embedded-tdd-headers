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

#ifndef _PIC16F1503_H_
#define _PIC16F1503_H_

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
#define SSP1IF                        52
#define ADIF                          53
#define TMR1GIF                       54
#define PIR2                          55
#define NCO1IF                        56
#define BCL1IF                        57
#define C1IF                          58
#define C2IF                          59
#define PIR3                          60
#define CLC1IF                        61
#define CLC2IF                        62
#define TMR0                          63
#define TMR1L                         64
#define TMR1H                         65
#define T1CON                         66
#define TMR1ON                        67
#define nT1SYNC                       68
#define T1OSCEN                       69
#define T1CKPS0                       70
#define T1CKPS                        71
#define T1CKPS1                       72
#define TMR1CS0                       73
#define TMR1CS                        74
#define TMR1CS1                       75
#define T1GCON                        76
#define T1GSS0                        77
#define T1GSS                         78
#define T1GSS1                        79
#define T1GVAL                        80
#define T1GGO_nDONE                   81
#define T1GSPM                        82
#define T1GTM                         83
#define T1GPOL                        84
#define TMR1GE                        85
#define TMR2                          86
#define PR2                           87
#define T2CON                         88
#define T2CKPS0                       89
#define T2CKPS                        90
#define T2CKPS1                       91
#define TMR2ON                        92
#define T2OUTPS0                      93
#define T2OUTPS                       94
#define T2OUTPS1                      95
#define T2OUTPS2                      96
#define T2OUTPS3                      97
#define TRISA                         98
#define TRISA0                        99
#define TRISA1                        100
#define TRISA2                        101
#define TRISA3                        102
#define TRISA4                        103
#define TRISA5                        104
#define TRISC                         105
#define TRISC0                        106
#define TRISC1                        107
#define TRISC2                        108
#define TRISC3                        109
#define TRISC4                        110
#define TRISC5                        111
#define PIE1                          112
#define TMR1IE                        113
#define TMR2IE                        114
#define SSP1IE                        115
#define ADIE                          116
#define TMR1GIE                       117
#define PIE2                          118
#define NCO1IE                        119
#define BCL1IE                        120
#define C1IE                          121
#define C2IE                          122
#define PIE3                          123
#define CLC1IE                        124
#define CLC2IE                        125
#define OPTION_REG                    126
#define PS                            127
#define PS0                           128
#define PS1                           129
#define PS2                           130
#define PSA                           131
#define T0SE                          132
#define TMR0SE                        133
#define T0CS                          134
#define TMR0CS                        135
#define INTEDG                        136
#define nWPUEN                        137
#define PCON                          138
#define nBOR                          139
#define nPOR                          140
#define nRI                           141
#define nRMCLR                        142
#define nRWDT                         143
#define STKUNF                        144
#define STKOVF                        145
#define WDTCON                        146
#define SWDTEN                        147
#define WDTPS                         148
#define WDTPS0                        149
#define WDTPS1                        150
#define WDTPS2                        151
#define WDTPS3                        152
#define WDTPS4                        153
#define OSCCON                        154
#define SCS0                          155
#define SCS                           156
#define SCS1                          157
#define IRCF                          158
#define IRCF0                         159
#define IRCF1                         160
#define IRCF2                         161
#define IRCF3                         162
#define OSCSTAT                       163
#define HFIOFS                        164
#define LFIOFR                        165
#define HFIOFR                        166
#define ADRESL                        167
#define ADRESH                        168
#define ADCON0                        169
#define ADON                          170
#define GO_nDONE                      171
#define GO                            172
#define ADGO                          173
#define CHS0                          174
#define CHS                           175
#define CHS1                          176
#define CHS2                          177
#define CHS3                          178
#define CHS4                          179
#define ADCON1                        180
#define ADPREF                        181
#define ADPREF0                       182
#define ADPREF1                       183
#define ADCS                          184
#define ADFM                          185
#define ADCON2                        186
#define TRIGSEL                       187
#define TRIGSEL0                      188
#define TRIGSEL1                      189
#define TRIGSEL2                      190
#define TRIGSEL3                      191
#define LATA                          192
#define LATA0                         193
#define LATA1                         194
#define LATA2                         195
#define LATA4                         196
#define LATA5                         197
#define LATC                          198
#define LATC0                         199
#define LATC1                         200
#define LATC2                         201
#define LATC3                         202
#define LATC4                         203
#define LATC5                         204
#define CM1CON0                       205
#define C1SYNC                        206
#define C1HYS                         207
#define C1SP                          208
#define C1POL                         209
#define C1OE                          210
#define C1OUT                         211
#define C1ON                          212
#define CM1CON1                       213
#define C1NCH0                        214
#define C1NCH                         215
#define C1NCH1                        216
#define C1NCH2                        217
#define C1PCH                         218
#define C1PCH0                        219
#define C1PCH1                        220
#define C1INTN                        221
#define C1INTP                        222
#define CM2CON0                       223
#define C2SYNC                        224
#define C2HYS                         225
#define C2SP                          226
#define C2POL                         227
#define C2OE                          228
#define C2OUT                         229
#define C2ON                          230
#define CM2CON1                       231
#define C2NCH0                        232
#define C2NCH                         233
#define C2NCH1                        234
#define C2NCH2                        235
#define C2PCH                         236
#define C2PCH0                        237
#define C2PCH1                        238
#define C2INTN                        239
#define C2INTP                        240
#define CMOUT                         241
#define MC1OUT                        242
#define MC2OUT                        243
#define BORCON                        244
#define BORRDY                        245
#define BORFS                         246
#define SBOREN                        247
#define FVRCON                        248
#define ADFVR0                        249
#define ADFVR                         250
#define ADFVR1                        251
#define CDAFVR                        252
#define CDAFVR0                       253
#define CDAFVR1                       254
#define TSRNG                         255
#define TSEN                          256
#define FVRRDY                        257
#define FVREN                         258
#define DACCON0                       259
#define DACPSS                        260
#define DACOE2                        261
#define DACOE1                        262
#define DACEN                         263
#define DACCON1                       264
#define DACR0                         265
#define DACR                          266
#define DACR1                         267
#define DACR2                         268
#define DACR3                         269
#define DACR4                         270
#define APFCON                        271
#define NCO1SEL                       272
#define CLC1SEL                       273
#define T1GSEL                        274
#define SSSEL                         275
#define SDOSEL                        276
#define ANSA0                         277
#define ANSELA                        278
#define ANSA1                         279
#define ANSA2                         280
#define ANSA4                         281
#define ANSC0                         282
#define ANSELC                        283
#define ANSC1                         284
#define ANSC2                         285
#define ANSC3                         286
#define PMADRL                        287
#define PMADRH                        288
#define PMDATL                        289
#define PMDATH                        290
#define PMCON1                        291
#define RD                            292
#define WR                            293
#define WREN                          294
#define WRERR                         295
#define FREE                          296
#define LWLO                          297
#define CFGS                          298
#define PMCON2                        299
#define VREGCON                       300
#define VREGPM                        301
#define WPUA0                         302
#define WPUA                          303
#define WPUA1                         304
#define WPUA2                         305
#define WPUA3                         306
#define WPUA4                         307
#define WPUA5                         308
#define SSP1BUF                       309
#define SSPBUF                        310
#define SSP1ADD                       311
#define ADD                           312
#define SSP1MSK                       313
#define MSK                           314
#define SSP1STAT                      315
#define BF                            316
#define UA                            317
#define R_nW                          318
#define S                             319
#define P                             320
#define D_nA                          321
#define CKE                           322
#define SMP                           323
#define SSP1CON1                      324
#define SSPM0                         325
#define SSPM                          326
#define SSPM1                         327
#define SSPM2                         328
#define SSPM3                         329
#define CKP                           330
#define SSPEN                         331
#define SSPOV                         332
#define WCOL                          333
#define SSP1CON2                      334
#define SEN                           335
#define RSEN                          336
#define PEN                           337
#define RCEN                          338
#define ACKEN                         339
#define ACKDT                         340
#define ACKSTAT                       341
#define GCEN                          342
#define SSP1CON3                      343
#define DHEN                          344
#define AHEN                          345
#define SBCDE                         346
#define SDAHT                         347
#define BOEN                          348
#define SCIE                          349
#define PCIE                          350
#define ACKTIM                        351
#define IOCAP                         352
#define IOCAP0                        353
#define IOCAP1                        354
#define IOCAP2                        355
#define IOCAP3                        356
#define IOCAP4                        357
#define IOCAP5                        358
#define IOCAN0                        359
#define IOCAN                         360
#define IOCAN1                        361
#define IOCAN2                        362
#define IOCAN3                        363
#define IOCAN4                        364
#define IOCAN5                        365
#define IOCAF0                        366
#define IOCAF                         367
#define IOCAF1                        368
#define IOCAF2                        369
#define IOCAF3                        370
#define IOCAF4                        371
#define IOCAF5                        372
#define NCO1ACCL                      373
#define NCO1ACCL_NCO1ACC              374
#define NCO1ACC0                      375
#define NCO1ACC1                      376
#define NCO1ACC2                      377
#define NCO1ACC3                      378
#define NCO1ACC4                      379
#define NCO1ACC5                      380
#define NCO1ACC6                      381
#define NCO1ACC7                      382
#define NCO1ACCH                      383
#define NCO1ACC8                      384
#define NCO1ACCH_NCO1ACC              385
#define NCO1ACC9                      386
#define NCO1ACC10                     387
#define NCO1ACC11                     388
#define NCO1ACC12                     389
#define NCO1ACC13                     390
#define NCO1ACC14                     391
#define NCO1ACC15                     392
#define NCO1ACCU                      393
#define NCO1ACCU_NCO1ACC              394
#define NCO1ACC16                     395
#define NCO1ACC17                     396
#define NCO1ACC18                     397
#define NCO1ACC19                     398
#define NCO1INCL                      399
#define NCO1INC0                      400
#define NCO1INCL_NCO1INC              401
#define NCO1INC1                      402
#define NCO1INC2                      403
#define NCO1INC3                      404
#define NCO1INC4                      405
#define NCO1INC5                      406
#define NCO1INC6                      407
#define NCO1INC7                      408
#define NCO1INCH                      409
#define NCO1INCH_NCO1INC              410
#define NCO1INC8                      411
#define NCO1INC9                      412
#define NCO1INC10                     413
#define NCO1INC11                     414
#define NCO1INC12                     415
#define NCO1INC13                     416
#define NCO1INC14                     417
#define NCO1INC15                     418
#define NCO1CON                       419
#define N1PFM                         420
#define N1POL                         421
#define N1OUT                         422
#define N1OE                          423
#define N1EN                          424
#define NCO1CLK                       425
#define N1CKS                         426
#define N1CKS0                        427
#define N1CKS1                        428
#define N1PWS0                        429
#define N1PWS                         430
#define N1PWS1                        431
#define N1PWS2                        432
#define PWM1DCL                       433
#define PWM1DCL0                      434
#define PWM1DCL1                      435
#define PWM1DCH                       436
#define PWM1DCH0                      437
#define PWM1DCH1                      438
#define PWM1DCH2                      439
#define PWM1DCH3                      440
#define PWM1DCH4                      441
#define PWM1DCH5                      442
#define PWM1DCH6                      443
#define PWM1DCH7                      444
#define PWM1CON                       445
#define PWM1POL                       446
#define PWM1OUT                       447
#define PWM1OE                        448
#define PWM1EN                        449
#define PWM2DCL0                      450
#define PWM2DCL                       451
#define PWM2DCL1                      452
#define PWM2DCH0                      453
#define PWM2DCH                       454
#define PWM2DCH1                      455
#define PWM2DCH2                      456
#define PWM2DCH3                      457
#define PWM2DCH4                      458
#define PWM2DCH5                      459
#define PWM2DCH6                      460
#define PWM2DCH7                      461
#define PWM2CON                       462
#define PWM2POL                       463
#define PWM2OUT                       464
#define PWM2OE                        465
#define PWM2EN                        466
#define PWM3DCL0                      467
#define PWM3DCL                       468
#define PWM3DCL1                      469
#define PWM3DCH0                      470
#define PWM3DCH                       471
#define PWM3DCH1                      472
#define PWM3DCH2                      473
#define PWM3DCH3                      474
#define PWM3DCH4                      475
#define PWM3DCH5                      476
#define PWM3DCH6                      477
#define PWM3DCH7                      478
#define PWM3CON                       479
#define PWM3POL                       480
#define PWM3OUT                       481
#define PWM3OE                        482
#define PWM3EN                        483
#define PWM4DCL                       484
#define PWM4DCL0                      485
#define PWM4DCL1                      486
#define PWM4DCH0                      487
#define PWM4DCH                       488
#define PWM4DCH1                      489
#define PWM4DCH2                      490
#define PWM4DCH3                      491
#define PWM4DCH4                      492
#define PWM4DCH5                      493
#define PWM4DCH6                      494
#define PWM4DCH7                      495
#define PWM4CON                       496
#define PWM4POL                       497
#define PWM4OUT                       498
#define PWM4OE                        499
#define PWM4EN                        500
#define CWG1DBR0                      501
#define CWG1DBR                       502
#define CWG1DBR1                      503
#define CWG1DBR2                      504
#define CWG1DBR3                      505
#define CWG1DBR4                      506
#define CWG1DBR5                      507
#define CWG1DBF                       508
#define CWG1DBF0                      509
#define CWG1DBF1                      510
#define CWG1DBF2                      511
#define CWG1DBF3                      512
#define CWG1DBF4                      513
#define CWG1DBF5                      514
#define CWG1CON0                      515
#define G1CS0                         516
#define G1CS                          517
#define G1POLA                        518
#define G1POLB                        519
#define G1OEA                         520
#define G1OEB                         521
#define G1EN                          522
#define CWG1CON1                      523
#define G1IS0                         524
#define G1IS                          525
#define G1IS1                         526
#define G1IS2                         527
#define G1ASDLA                       528
#define G1ASDLA0                      529
#define G1ASDLA1                      530
#define G1ASDLB                       531
#define G1ASDLB0                      532
#define G1ASDLB1                      533
#define CWG1CON2                      534
#define G1ASDSCLC2                    535
#define G1ASDSFLT                     536
#define G1ASDSC1                      537
#define G1ASDSC2                      538
#define G1ARSEN                       539
#define G1ASE                         540
#define CLCDATA                       541
#define MCLC1OUT                      542
#define MCLC2OUT                      543
#define CLC1CON                       544
#define LC1MODE0                      545
#define LC1MODE                       546
#define CLC1CON_LCMODE0               547
#define LC1MODE1                      548
#define CLC1CON_LCMODE1               549
#define CLC1CON_LCMODE2               550
#define LC1MODE2                      551
#define LC1INTN                       552
#define CLC1CON_LCINTN                553
#define LC1INTP                       554
#define CLC1CON_LCINTP                555
#define CLC1CON_LCOUT                 556
#define LC1OUT                        557
#define LC1OE                         558
#define CLC1CON_LCOE                  559
#define LC1EN                         560
#define CLC1CON_LCEN                  561
#define CLC1POL                       562
#define LC1G1POL                      563
#define CLC1POL_G1POL                 564
#define CLC1POL_G2POL                 565
#define LC1G2POL                      566
#define LC1G3POL                      567
#define CLC1POL_G3POL                 568
#define LC1G4POL                      569
#define CLC1POL_G4POL                 570
#define CLC1POL_POL                   571
#define LC1POL                        572
#define CLC1SEL0                      573
#define LC1D1S                        574
#define CLC1SEL0_D1S0                 575
#define LC1D1S0                       576
#define CLC1SEL0_D1S1                 577
#define LC1D1S1                       578
#define CLC1SEL0_D1S2                 579
#define LC1D1S2                       580
#define LC1D2S                        581
#define LC1D2S0                       582
#define CLC1SEL0_D2S0                 583
#define LC1D2S1                       584
#define CLC1SEL0_D2S1                 585
#define LC1D2S2                       586
#define CLC1SEL0_D2S2                 587
#define CLC1SEL1                      588
#define LC1D3S0                       589
#define CLC1SEL1_D3S0                 590
#define LC1D3S                        591
#define LC1D3S1                       592
#define CLC1SEL1_D3S1                 593
#define LC1D3S2                       594
#define CLC1SEL1_D3S2                 595
#define LC1D4S                        596
#define LC1D4S0                       597
#define CLC1SEL1_D4S0                 598
#define LC1D4S1                       599
#define CLC1SEL1_D4S1                 600
#define LC1D4S2                       601
#define CLC1SEL1_D4S2                 602
#define CLC1GLS0                      603
#define CLC1GLS0_D1N                  604
#define LC1G1D1N                      605
#define CLC1GLS0_D1T                  606
#define LC1G1D1T                      607
#define LC1G1D2N                      608
#define CLC1GLS0_D2N                  609
#define LC1G1D2T                      610
#define CLC1GLS0_D2T                  611
#define CLC1GLS0_D3N                  612
#define LC1G1D3N                      613
#define CLC1GLS0_D3T                  614
#define LC1G1D3T                      615
#define CLC1GLS0_D4N                  616
#define LC1G1D4N                      617
#define CLC1GLS0_D4T                  618
#define LC1G1D4T                      619
#define CLC1GLS1                      620
#define CLC1GLS1_D1N                  621
#define LC1G2D1N                      622
#define LC1G2D1T                      623
#define CLC1GLS1_D1T                  624
#define CLC1GLS1_D2N                  625
#define LC1G2D2N                      626
#define LC1G2D2T                      627
#define CLC1GLS1_D2T                  628
#define CLC1GLS1_D3N                  629
#define LC1G2D3N                      630
#define LC1G2D3T                      631
#define CLC1GLS1_D3T                  632
#define CLC1GLS1_D4N                  633
#define LC1G2D4N                      634
#define LC1G2D4T                      635
#define CLC1GLS1_D4T                  636
#define CLC1GLS2                      637
#define CLC1GLS2_D1N                  638
#define LC1G3D1N                      639
#define LC1G3D1T                      640
#define CLC1GLS2_D1T                  641
#define LC1G3D2N                      642
#define CLC1GLS2_D2N                  643
#define LC1G3D2T                      644
#define CLC1GLS2_D2T                  645
#define CLC1GLS2_D3N                  646
#define LC1G3D3N                      647
#define LC1G3D3T                      648
#define CLC1GLS2_D3T                  649
#define LC1G3D4N                      650
#define CLC1GLS2_D4N                  651
#define LC1G3D4T                      652
#define CLC1GLS2_D4T                  653
#define CLC1GLS3                      654
#define LC1G4D1N                      655
#define CLC1GLS3_G4D1N                656
#define LC1G4D1T                      657
#define CLC1GLS3_G4D1T                658
#define CLC1GLS3_G4D2N                659
#define LC1G4D2N                      660
#define CLC1GLS3_G4D2T                661
#define LC1G4D2T                      662
#define LC1G4D3N                      663
#define CLC1GLS3_G4D3N                664
#define LC1G4D3T                      665
#define CLC1GLS3_G4D3T                666
#define CLC1GLS3_G4D4N                667
#define LC1G4D4N                      668
#define CLC1GLS3_G4D4T                669
#define LC1G4D4T                      670
#define CLC2CON                       671
#define LC2MODE0                      672
#define LC2MODE                       673
#define CLC2CON_LCMODE0               674
#define LC2MODE1                      675
#define CLC2CON_LCMODE1               676
#define LC2MODE2                      677
#define CLC2CON_LCMODE2               678
#define LC2INTN                       679
#define CLC2CON_LCINTN                680
#define LC2INTP                       681
#define CLC2CON_LCINTP                682
#define CLC2CON_LCOUT                 683
#define LC2OUT                        684
#define LC2OE                         685
#define CLC2CON_LCOE                  686
#define CLC2CON_LCEN                  687
#define LC2EN                         688
#define CLC2POL                       689
#define LC2G1POL                      690
#define CLC2POL_G1POL                 691
#define LC2G2POL                      692
#define CLC2POL_G2POL                 693
#define LC2G3POL                      694
#define CLC2POL_G3POL                 695
#define LC2G4POL                      696
#define CLC2POL_G4POL                 697
#define CLC2POL_POL                   698
#define LC2POL                        699
#define CLC2SEL0                      700
#define LC2D1S0                       701
#define CLC2SEL0_D1S0                 702
#define LC2D1S                        703
#define LC2D1S1                       704
#define CLC2SEL0_D1S1                 705
#define LC2D1S2                       706
#define CLC2SEL0_D1S2                 707
#define LC2D2S0                       708
#define LC2D2S                        709
#define CLC2SEL0_D2S0                 710
#define LC2D2S1                       711
#define CLC2SEL0_D2S1                 712
#define LC2D2S2                       713
#define CLC2SEL0_D2S2                 714
#define CLC2SEL1                      715
#define CLC2SEL1_D3S0                 716
#define LC2D3S0                       717
#define LC2D3S                        718
#define LC2D3S1                       719
#define CLC2SEL1_D3S1                 720
#define LC2D3S2                       721
#define CLC2SEL1_D3S2                 722
#define LC2D4S                        723
#define LC2D4S0                       724
#define CLC2SEL1_D4S0                 725
#define LC2D4S1                       726
#define CLC2SEL1_D4S1                 727
#define LC2D4S2                       728
#define CLC2SEL1_D4S2                 729
#define CLC2GLS0                      730
#define LC2G1D1N                      731
#define CLC2GLS0_D1N                  732
#define CLC2GLS0_D1T                  733
#define LC2G1D1T                      734
#define LC2G1D2N                      735
#define CLC2GLS0_D2N                  736
#define CLC2GLS0_D2T                  737
#define LC2G1D2T                      738
#define LC2G1D3N                      739
#define CLC2GLS0_D3N                  740
#define CLC2GLS0_D3T                  741
#define LC2G1D3T                      742
#define LC2G1D4N                      743
#define CLC2GLS0_D4N                  744
#define CLC2GLS0_D4T                  745
#define LC2G1D4T                      746
#define CLC2GLS1                      747
#define CLC2GLS1_D1N                  748
#define LC2G2D1N                      749
#define CLC2GLS1_D1T                  750
#define LC2G2D1T                      751
#define CLC2GLS1_D2N                  752
#define LC2G2D2N                      753
#define CLC2GLS1_D2T                  754
#define LC2G2D2T                      755
#define LC2G2D3N                      756
#define CLC2GLS1_D3N                  757
#define LC2G2D3T                      758
#define CLC2GLS1_D3T                  759
#define LC2G2D4N                      760
#define CLC2GLS1_D4N                  761
#define LC2G2D4T                      762
#define CLC2GLS1_D4T                  763
#define CLC2GLS2                      764
#define LC2G3D1N                      765
#define CLC2GLS2_D1N                  766
#define CLC2GLS2_D1T                  767
#define LC2G3D1T                      768
#define CLC2GLS2_D2N                  769
#define LC2G3D2N                      770
#define LC2G3D2T                      771
#define CLC2GLS2_D2T                  772
#define CLC2GLS2_D3N                  773
#define LC2G3D3N                      774
#define CLC2GLS2_D3T                  775
#define LC2G3D3T                      776
#define CLC2GLS2_D4N                  777
#define LC2G3D4N                      778
#define LC2G3D4T                      779
#define CLC2GLS2_D4T                  780
#define CLC2GLS3                      781
#define LC2G4D1N                      782
#define CLC2GLS3_G4D1N                783
#define CLC2GLS3_G4D1T                784
#define LC2G4D1T                      785
#define CLC2GLS3_G4D2N                786
#define LC2G4D2N                      787
#define LC2G4D2T                      788
#define CLC2GLS3_G4D2T                789
#define CLC2GLS3_G4D3N                790
#define LC2G4D3N                      791
#define CLC2GLS3_G4D3T                792
#define LC2G4D3T                      793
#define LC2G4D4N                      794
#define CLC2GLS3_G4D4N                795
#define CLC2GLS3_G4D4T                796
#define LC2G4D4T                      797
#define BSR_ICDSHAD                   798
#define STATUS_SHAD                   799
#define C_SHAD                        800
#define DC_SHAD                       801
#define Z_SHAD                        802
#define WREG_SHAD                     803
#define BSR_SHAD                      804
#define PCLATH_SHAD                   805
#define FSR0L_SHAD                    806
#define FSR0H_SHAD                    807
#define FSR1L_SHAD                    808
#define FSR1H_SHAD                    809
#define STKPTR                        810
#define TOSL                          811
#define TOSH                          812

#endif // _PIC16F1503_H_
