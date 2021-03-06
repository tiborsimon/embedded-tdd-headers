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

#ifndef _PIC16LF1503_H_
#define _PIC16LF1503_H_

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
#define WPUA0                         300
#define WPUA                          301
#define WPUA1                         302
#define WPUA2                         303
#define WPUA3                         304
#define WPUA4                         305
#define WPUA5                         306
#define SSP1BUF                       307
#define SSPBUF                        308
#define SSP1ADD                       309
#define ADD                           310
#define SSP1MSK                       311
#define MSK                           312
#define SSP1STAT                      313
#define BF                            314
#define UA                            315
#define R_nW                          316
#define S                             317
#define P                             318
#define D_nA                          319
#define CKE                           320
#define SMP                           321
#define SSP1CON1                      322
#define SSPM0                         323
#define SSPM                          324
#define SSPM1                         325
#define SSPM2                         326
#define SSPM3                         327
#define CKP                           328
#define SSPEN                         329
#define SSPOV                         330
#define WCOL                          331
#define SSP1CON2                      332
#define SEN                           333
#define RSEN                          334
#define PEN                           335
#define RCEN                          336
#define ACKEN                         337
#define ACKDT                         338
#define ACKSTAT                       339
#define GCEN                          340
#define SSP1CON3                      341
#define DHEN                          342
#define AHEN                          343
#define SBCDE                         344
#define SDAHT                         345
#define BOEN                          346
#define SCIE                          347
#define PCIE                          348
#define ACKTIM                        349
#define IOCAP                         350
#define IOCAP0                        351
#define IOCAP1                        352
#define IOCAP2                        353
#define IOCAP3                        354
#define IOCAP4                        355
#define IOCAP5                        356
#define IOCAN0                        357
#define IOCAN                         358
#define IOCAN1                        359
#define IOCAN2                        360
#define IOCAN3                        361
#define IOCAN4                        362
#define IOCAN5                        363
#define IOCAF0                        364
#define IOCAF                         365
#define IOCAF1                        366
#define IOCAF2                        367
#define IOCAF3                        368
#define IOCAF4                        369
#define IOCAF5                        370
#define NCO1ACCL                      371
#define NCO1ACC0                      372
#define NCO1ACC1                      373
#define NCO1ACC2                      374
#define NCO1ACC3                      375
#define NCO1ACC4                      376
#define NCO1ACC5                      377
#define NCO1ACC6                      378
#define NCO1ACC7                      379
#define NCO1ACCH                      380
#define NCO1ACC8                      381
#define NCO1ACC9                      382
#define NCO1ACC10                     383
#define NCO1ACC11                     384
#define NCO1ACC12                     385
#define NCO1ACC13                     386
#define NCO1ACC14                     387
#define NCO1ACC15                     388
#define NCO1ACCU                      389
#define NCO1ACC16                     390
#define NCO1ACC17                     391
#define NCO1ACC18                     392
#define NCO1ACC19                     393
#define NCO1INCL                      394
#define NCO1INC0                      395
#define NCO1INC1                      396
#define NCO1INC2                      397
#define NCO1INC3                      398
#define NCO1INC4                      399
#define NCO1INC5                      400
#define NCO1INC6                      401
#define NCO1INC7                      402
#define NCO1INCH                      403
#define NCO1INC8                      404
#define NCO1INC9                      405
#define NCO1INC10                     406
#define NCO1INC11                     407
#define NCO1INC12                     408
#define NCO1INC13                     409
#define NCO1INC14                     410
#define NCO1INC15                     411
#define NCO1CON                       412
#define N1PFM                         413
#define N1POL                         414
#define N1OUT                         415
#define N1OE                          416
#define N1EN                          417
#define NCO1CLK                       418
#define N1CKS                         419
#define N1CKS0                        420
#define N1CKS1                        421
#define N1PWS0                        422
#define N1PWS                         423
#define N1PWS1                        424
#define N1PWS2                        425
#define PWM1DCL                       426
#define PWM1DCL0                      427
#define PWM1DCL1                      428
#define PWM1DCH                       429
#define PWM1DCH0                      430
#define PWM1DCH1                      431
#define PWM1DCH2                      432
#define PWM1DCH3                      433
#define PWM1DCH4                      434
#define PWM1DCH5                      435
#define PWM1DCH6                      436
#define PWM1DCH7                      437
#define PWM1CON                       438
#define PWM1POL                       439
#define PWM1OUT                       440
#define PWM1OE                        441
#define PWM1EN                        442
#define PWM2DCL0                      443
#define PWM2DCL                       444
#define PWM2DCL1                      445
#define PWM2DCH0                      446
#define PWM2DCH                       447
#define PWM2DCH1                      448
#define PWM2DCH2                      449
#define PWM2DCH3                      450
#define PWM2DCH4                      451
#define PWM2DCH5                      452
#define PWM2DCH6                      453
#define PWM2DCH7                      454
#define PWM2CON                       455
#define PWM2POL                       456
#define PWM2OUT                       457
#define PWM2OE                        458
#define PWM2EN                        459
#define PWM3DCL0                      460
#define PWM3DCL                       461
#define PWM3DCL1                      462
#define PWM3DCH0                      463
#define PWM3DCH                       464
#define PWM3DCH1                      465
#define PWM3DCH2                      466
#define PWM3DCH3                      467
#define PWM3DCH4                      468
#define PWM3DCH5                      469
#define PWM3DCH6                      470
#define PWM3DCH7                      471
#define PWM3CON                       472
#define PWM3POL                       473
#define PWM3OUT                       474
#define PWM3OE                        475
#define PWM3EN                        476
#define PWM4DCL                       477
#define PWM4DCL0                      478
#define PWM4DCL1                      479
#define PWM4DCH0                      480
#define PWM4DCH                       481
#define PWM4DCH1                      482
#define PWM4DCH2                      483
#define PWM4DCH3                      484
#define PWM4DCH4                      485
#define PWM4DCH5                      486
#define PWM4DCH6                      487
#define PWM4DCH7                      488
#define PWM4CON                       489
#define PWM4POL                       490
#define PWM4OUT                       491
#define PWM4OE                        492
#define PWM4EN                        493
#define CWG1DBR0                      494
#define CWG1DBR                       495
#define CWG1DBR1                      496
#define CWG1DBR2                      497
#define CWG1DBR3                      498
#define CWG1DBR4                      499
#define CWG1DBR5                      500
#define CWG1DBF                       501
#define CWG1DBF0                      502
#define CWG1DBF1                      503
#define CWG1DBF2                      504
#define CWG1DBF3                      505
#define CWG1DBF4                      506
#define CWG1DBF5                      507
#define CWG1CON0                      508
#define G1CS0                         509
#define G1CS                          510
#define G1POLA                        511
#define G1POLB                        512
#define G1OEA                         513
#define G1OEB                         514
#define G1EN                          515
#define CWG1CON1                      516
#define G1IS0                         517
#define G1IS                          518
#define G1IS1                         519
#define G1IS2                         520
#define G1ASDLA                       521
#define G1ASDLA0                      522
#define G1ASDLA1                      523
#define G1ASDLB                       524
#define G1ASDLB0                      525
#define G1ASDLB1                      526
#define CWG1CON2                      527
#define G1ASDSCLC2                    528
#define G1ASDSFLT                     529
#define G1ASDSC1                      530
#define G1ASDSC2                      531
#define G1ARSEN                       532
#define G1ASE                         533
#define CLCDATA                       534
#define MCLC1OUT                      535
#define MCLC2OUT                      536
#define CLC1CON                       537
#define LC1MODE0                      538
#define LC1MODE                       539
#define CLC1CON_LCMODE0               540
#define LC1MODE1                      541
#define CLC1CON_LCMODE1               542
#define CLC1CON_LCMODE2               543
#define LC1MODE2                      544
#define LC1INTN                       545
#define CLC1CON_LCINTN                546
#define LC1INTP                       547
#define CLC1CON_LCINTP                548
#define CLC1CON_LCOUT                 549
#define LC1OUT                        550
#define LC1OE                         551
#define CLC1CON_LCOE                  552
#define LC1EN                         553
#define CLC1CON_LCEN                  554
#define CLC1POL                       555
#define LC1G1POL                      556
#define CLC1POL_G1POL                 557
#define CLC1POL_G2POL                 558
#define LC1G2POL                      559
#define LC1G3POL                      560
#define CLC1POL_G3POL                 561
#define LC1G4POL                      562
#define CLC1POL_G4POL                 563
#define CLC1POL_POL                   564
#define LC1POL                        565
#define CLC1SEL0                      566
#define LC1D1S                        567
#define CLC1SEL0_D1S0                 568
#define LC1D1S0                       569
#define CLC1SEL0_D1S1                 570
#define LC1D1S1                       571
#define CLC1SEL0_D1S2                 572
#define LC1D1S2                       573
#define LC1D2S                        574
#define LC1D2S0                       575
#define CLC1SEL0_D2S0                 576
#define LC1D2S1                       577
#define CLC1SEL0_D2S1                 578
#define LC1D2S2                       579
#define CLC1SEL0_D2S2                 580
#define CLC1SEL1                      581
#define LC1D3S0                       582
#define CLC1SEL1_D3S0                 583
#define LC1D3S                        584
#define LC1D3S1                       585
#define CLC1SEL1_D3S1                 586
#define LC1D3S2                       587
#define CLC1SEL1_D3S2                 588
#define LC1D4S                        589
#define LC1D4S0                       590
#define CLC1SEL1_D4S0                 591
#define LC1D4S1                       592
#define CLC1SEL1_D4S1                 593
#define LC1D4S2                       594
#define CLC1SEL1_D4S2                 595
#define CLC1GLS0                      596
#define CLC1GLS0_D1N                  597
#define LC1G1D1N                      598
#define CLC1GLS0_D1T                  599
#define LC1G1D1T                      600
#define LC1G1D2N                      601
#define CLC1GLS0_D2N                  602
#define LC1G1D2T                      603
#define CLC1GLS0_D2T                  604
#define CLC1GLS0_D3N                  605
#define LC1G1D3N                      606
#define CLC1GLS0_D3T                  607
#define LC1G1D3T                      608
#define CLC1GLS0_D4N                  609
#define LC1G1D4N                      610
#define CLC1GLS0_D4T                  611
#define LC1G1D4T                      612
#define CLC1GLS1                      613
#define CLC1GLS1_D1N                  614
#define LC1G2D1N                      615
#define LC1G2D1T                      616
#define CLC1GLS1_D1T                  617
#define CLC1GLS1_D2N                  618
#define LC1G2D2N                      619
#define LC1G2D2T                      620
#define CLC1GLS1_D2T                  621
#define CLC1GLS1_D3N                  622
#define LC1G2D3N                      623
#define LC1G2D3T                      624
#define CLC1GLS1_D3T                  625
#define CLC1GLS1_D4N                  626
#define LC1G2D4N                      627
#define LC1G2D4T                      628
#define CLC1GLS1_D4T                  629
#define CLC1GLS2                      630
#define CLC1GLS2_D1N                  631
#define LC1G3D1N                      632
#define LC1G3D1T                      633
#define CLC1GLS2_D1T                  634
#define LC1G3D2N                      635
#define CLC1GLS2_D2N                  636
#define LC1G3D2T                      637
#define CLC1GLS2_D2T                  638
#define CLC1GLS2_D3N                  639
#define LC1G3D3N                      640
#define LC1G3D3T                      641
#define CLC1GLS2_D3T                  642
#define LC1G3D4N                      643
#define CLC1GLS2_D4N                  644
#define LC1G3D4T                      645
#define CLC1GLS2_D4T                  646
#define CLC1GLS3                      647
#define LC1G4D1N                      648
#define CLC1GLS3_G4D1N                649
#define LC1G4D1T                      650
#define CLC1GLS3_G4D1T                651
#define CLC1GLS3_G4D2N                652
#define LC1G4D2N                      653
#define CLC1GLS3_G4D2T                654
#define LC1G4D2T                      655
#define LC1G4D3N                      656
#define CLC1GLS3_G4D3N                657
#define LC1G4D3T                      658
#define CLC1GLS3_G4D3T                659
#define CLC1GLS3_G4D4N                660
#define LC1G4D4N                      661
#define CLC1GLS3_G4D4T                662
#define LC1G4D4T                      663
#define CLC2CON                       664
#define LC2MODE0                      665
#define LC2MODE                       666
#define CLC2CON_LCMODE0               667
#define LC2MODE1                      668
#define CLC2CON_LCMODE1               669
#define LC2MODE2                      670
#define CLC2CON_LCMODE2               671
#define LC2INTN                       672
#define CLC2CON_LCINTN                673
#define LC2INTP                       674
#define CLC2CON_LCINTP                675
#define CLC2CON_LCOUT                 676
#define LC2OUT                        677
#define LC2OE                         678
#define CLC2CON_LCOE                  679
#define CLC2CON_LCEN                  680
#define LC2EN                         681
#define CLC2POL                       682
#define LC2G1POL                      683
#define CLC2POL_G1POL                 684
#define LC2G2POL                      685
#define CLC2POL_G2POL                 686
#define LC2G3POL                      687
#define CLC2POL_G3POL                 688
#define LC2G4POL                      689
#define CLC2POL_G4POL                 690
#define CLC2POL_POL                   691
#define LC2POL                        692
#define CLC2SEL0                      693
#define LC2D1S0                       694
#define CLC2SEL0_D1S0                 695
#define LC2D1S                        696
#define LC2D1S1                       697
#define CLC2SEL0_D1S1                 698
#define LC2D1S2                       699
#define CLC2SEL0_D1S2                 700
#define LC2D2S0                       701
#define LC2D2S                        702
#define CLC2SEL0_D2S0                 703
#define LC2D2S1                       704
#define CLC2SEL0_D2S1                 705
#define LC2D2S2                       706
#define CLC2SEL0_D2S2                 707
#define CLC2SEL1                      708
#define CLC2SEL1_D3S0                 709
#define LC2D3S0                       710
#define LC2D3S                        711
#define LC2D3S1                       712
#define CLC2SEL1_D3S1                 713
#define LC2D3S2                       714
#define CLC2SEL1_D3S2                 715
#define LC2D4S                        716
#define LC2D4S0                       717
#define CLC2SEL1_D4S0                 718
#define LC2D4S1                       719
#define CLC2SEL1_D4S1                 720
#define LC2D4S2                       721
#define CLC2SEL1_D4S2                 722
#define CLC2GLS0                      723
#define LC2G1D1N                      724
#define CLC2GLS0_D1N                  725
#define CLC2GLS0_D1T                  726
#define LC2G1D1T                      727
#define LC2G1D2N                      728
#define CLC2GLS0_D2N                  729
#define CLC2GLS0_D2T                  730
#define LC2G1D2T                      731
#define LC2G1D3N                      732
#define CLC2GLS0_D3N                  733
#define CLC2GLS0_D3T                  734
#define LC2G1D3T                      735
#define LC2G1D4N                      736
#define CLC2GLS0_D4N                  737
#define CLC2GLS0_D4T                  738
#define LC2G1D4T                      739
#define CLC2GLS1                      740
#define CLC2GLS1_D1N                  741
#define LC2G2D1N                      742
#define CLC2GLS1_D1T                  743
#define LC2G2D1T                      744
#define CLC2GLS1_D2N                  745
#define LC2G2D2N                      746
#define CLC2GLS1_D2T                  747
#define LC2G2D2T                      748
#define LC2G2D3N                      749
#define CLC2GLS1_D3N                  750
#define LC2G2D3T                      751
#define CLC2GLS1_D3T                  752
#define LC2G2D4N                      753
#define CLC2GLS1_D4N                  754
#define LC2G2D4T                      755
#define CLC2GLS1_D4T                  756
#define CLC2GLS2                      757
#define LC2G3D1N                      758
#define CLC2GLS2_D1N                  759
#define CLC2GLS2_D1T                  760
#define LC2G3D1T                      761
#define CLC2GLS2_D2N                  762
#define LC2G3D2N                      763
#define LC2G3D2T                      764
#define CLC2GLS2_D2T                  765
#define CLC2GLS2_D3N                  766
#define LC2G3D3N                      767
#define CLC2GLS2_D3T                  768
#define LC2G3D3T                      769
#define CLC2GLS2_D4N                  770
#define LC2G3D4N                      771
#define LC2G3D4T                      772
#define CLC2GLS2_D4T                  773
#define CLC2GLS3                      774
#define LC2G4D1N                      775
#define CLC2GLS3_G4D1N                776
#define CLC2GLS3_G4D1T                777
#define LC2G4D1T                      778
#define CLC2GLS3_G4D2N                779
#define LC2G4D2N                      780
#define LC2G4D2T                      781
#define CLC2GLS3_G4D2T                782
#define CLC2GLS3_G4D3N                783
#define LC2G4D3N                      784
#define CLC2GLS3_G4D3T                785
#define LC2G4D3T                      786
#define LC2G4D4N                      787
#define CLC2GLS3_G4D4N                788
#define CLC2GLS3_G4D4T                789
#define LC2G4D4T                      790
#define BSR_ICDSHAD                   791
#define STATUS_SHAD                   792
#define C_SHAD                        793
#define DC_SHAD                       794
#define Z_SHAD                        795
#define WREG_SHAD                     796
#define BSR_SHAD                      797
#define PCLATH_SHAD                   798
#define FSR0L_SHAD                    799
#define FSR0H_SHAD                    800
#define FSR1L_SHAD                    801
#define FSR1H_SHAD                    802
#define STKPTR                        803
#define TOSL                          804
#define TOSH                          805

#endif // _PIC16LF1503_H_
