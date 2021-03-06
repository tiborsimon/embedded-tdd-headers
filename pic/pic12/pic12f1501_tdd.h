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

#ifndef _PIC12F1501_H_
#define _PIC12F1501_H_

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
#define PIR1                          42
#define TMR1IF                        43
#define TMR2IF                        44
#define ADIF                          45
#define TMR1GIF                       46
#define PIR2                          47
#define NCO1IF                        48
#define C1IF                          49
#define PIR3                          50
#define CLC1IF                        51
#define CLC2IF                        52
#define TMR0                          53
#define TMR1L                         54
#define TMR1H                         55
#define T1CON                         56
#define TMR1ON                        57
#define nT1SYNC                       58
#define T1CKPS0                       59
#define T1CKPS                        60
#define T1CKPS1                       61
#define TMR1CS0                       62
#define TMR1CS                        63
#define TMR1CS1                       64
#define T1GCON                        65
#define T1GSS0                        66
#define T1GSS                         67
#define T1GSS1                        68
#define T1GVAL                        69
#define T1GGO_nDONE                   70
#define T1GSPM                        71
#define T1GTM                         72
#define T1GPOL                        73
#define TMR1GE                        74
#define TMR2                          75
#define PR2                           76
#define T2CON                         77
#define T2CKPS0                       78
#define T2CKPS                        79
#define T2CKPS1                       80
#define TMR2ON                        81
#define TOUTPS0                       82
#define T2OUTPS                       83
#define TOUTPS1                       84
#define TOUTPS2                       85
#define TOUTPS3                       86
#define TRISA                         87
#define TRISA0                        88
#define TRISA1                        89
#define TRISA2                        90
#define TRISA3                        91
#define TRISA4                        92
#define TRISA5                        93
#define PIE1                          94
#define TMR1IE                        95
#define TMR2IE                        96
#define ADIE                          97
#define TMR1GIE                       98
#define PIE2                          99
#define NCO1IE                        100
#define C1IE                          101
#define PIE3                          102
#define CLC1IE                        103
#define CLC2IE                        104
#define OPTION_REG                    105
#define PS                            106
#define PS0                           107
#define PS1                           108
#define PS2                           109
#define PSA                           110
#define T0SE                          111
#define TMR0SE                        112
#define T0CS                          113
#define TMR0CS                        114
#define INTEDG                        115
#define nWPUEN                        116
#define PCON                          117
#define nBOR                          118
#define nPOR                          119
#define nRI                           120
#define nRMCLR                        121
#define nRWDT                         122
#define STKUNF                        123
#define STKOVF                        124
#define WDTCON                        125
#define SWDTEN                        126
#define WDTPS                         127
#define WDTPS0                        128
#define WDTPS1                        129
#define WDTPS2                        130
#define WDTPS3                        131
#define WDTPS4                        132
#define OSCCON                        133
#define SCS0                          134
#define SCS                           135
#define SCS1                          136
#define IRCF                          137
#define IRCF0                         138
#define IRCF1                         139
#define IRCF2                         140
#define IRCF3                         141
#define OSCSTAT                       142
#define HFIOFS                        143
#define LFIOFR                        144
#define HFIOFR                        145
#define ADRESL                        146
#define ADRESH                        147
#define ADCON0                        148
#define ADON                          149
#define GO_nDONE                      150
#define GO                            151
#define ADGO                          152
#define CHS0                          153
#define CHS                           154
#define CHS1                          155
#define CHS2                          156
#define CHS3                          157
#define CHS4                          158
#define ADCON1                        159
#define ADPREF                        160
#define ADPREF0                       161
#define ADPREF1                       162
#define ADCS                          163
#define ADFM                          164
#define ADCON2                        165
#define TRIGSEL                       166
#define TRIGSEL0                      167
#define TRIGSEL1                      168
#define TRIGSEL2                      169
#define TRIGSEL3                      170
#define LATA                          171
#define LATA0                         172
#define LATA1                         173
#define LATA2                         174
#define LATA4                         175
#define LATA5                         176
#define CM1CON0                       177
#define C1SYNC                        178
#define C1HYS                         179
#define C1SP                          180
#define C1POL                         181
#define C1OE                          182
#define C1OUT                         183
#define C1ON                          184
#define CM1CON1                       185
#define C1NCH0                        186
#define C1NCH                         187
#define C1NCH1                        188
#define C1NCH2                        189
#define C1PCH                         190
#define C1PCH0                        191
#define C1PCH1                        192
#define C1INTN                        193
#define C1INTP                        194
#define CMOUT                         195
#define MC1OUT                        196
#define BORCON                        197
#define BORRDY                        198
#define BORFS                         199
#define SBOREN                        200
#define FVRCON                        201
#define ADFVR0                        202
#define ADFVR                         203
#define ADFVR1                        204
#define CDAFVR                        205
#define CDAFVR0                       206
#define CDAFVR1                       207
#define TSRNG                         208
#define TSEN                          209
#define FVRRDY                        210
#define FVREN                         211
#define DACCON0                       212
#define DACPSS                        213
#define DACOE2                        214
#define DACOE1                        215
#define DACEN                         216
#define DACCON1                       217
#define DACR0                         218
#define DACR                          219
#define DACR1                         220
#define DACR2                         221
#define DACR3                         222
#define DACR4                         223
#define APFCON                        224
#define NCO1SEL                       225
#define CLC1SEL                       226
#define T1GSEL                        227
#define CWG1ASEL                      228
#define CWG1BSEL                      229
#define ANSA0                         230
#define ANSELA                        231
#define ANSA1                         232
#define ANSA2                         233
#define ANSA4                         234
#define PMADRL                        235
#define PMADRH                        236
#define PMDATL                        237
#define PMDATH                        238
#define PMCON1                        239
#define RD                            240
#define WR                            241
#define WREN                          242
#define WRERR                         243
#define FREE                          244
#define LWLO                          245
#define CFGS                          246
#define PMCON2                        247
#define VREGCON                       248
#define VREGPM                        249
#define WPUA0                         250
#define WPUA                          251
#define WPUA1                         252
#define WPUA2                         253
#define WPUA3                         254
#define WPUA4                         255
#define WPUA5                         256
#define IOCAP                         257
#define IOCAP0                        258
#define IOCAP1                        259
#define IOCAP2                        260
#define IOCAP3                        261
#define IOCAP4                        262
#define IOCAP5                        263
#define IOCAN0                        264
#define IOCAN                         265
#define IOCAN1                        266
#define IOCAN2                        267
#define IOCAN3                        268
#define IOCAN4                        269
#define IOCAN5                        270
#define IOCAF0                        271
#define IOCAF                         272
#define IOCAF1                        273
#define IOCAF2                        274
#define IOCAF3                        275
#define IOCAF4                        276
#define IOCAF5                        277
#define NCO1ACCL                      278
#define NCO1ACC0                      279
#define NCO1ACC1                      280
#define NCO1ACC2                      281
#define NCO1ACC3                      282
#define NCO1ACC4                      283
#define NCO1ACC5                      284
#define NCO1ACC6                      285
#define NCO1ACC7                      286
#define NCO1ACCH                      287
#define NCO1ACC8                      288
#define NCO1ACC9                      289
#define NCO1ACC10                     290
#define NCO1ACC11                     291
#define NCO1ACC12                     292
#define NCO1ACC13                     293
#define NCO1ACC14                     294
#define NCO1ACC15                     295
#define NCO1ACCU                      296
#define NCO1ACC16                     297
#define NCO1ACC17                     298
#define NCO1ACC18                     299
#define NCO1ACC19                     300
#define NCO1INCL                      301
#define NCO1INC0                      302
#define NCO1INC1                      303
#define NCO1INC2                      304
#define NCO1INC3                      305
#define NCO1INC4                      306
#define NCO1INC5                      307
#define NCO1INC6                      308
#define NCO1INC7                      309
#define NCO1INCH                      310
#define NCO1INC8                      311
#define NCO1INC9                      312
#define NCO1INC10                     313
#define NCO1INC11                     314
#define NCO1INC12                     315
#define NCO1INC13                     316
#define NCO1INC14                     317
#define NCO1INC15                     318
#define NCO1CON                       319
#define N1PFM                         320
#define N1POL                         321
#define N1OUT                         322
#define N1OE                          323
#define N1EN                          324
#define NCO1CLK                       325
#define N1CKS                         326
#define N1CKS0                        327
#define N1CKS1                        328
#define N1PWS0                        329
#define N1PWS                         330
#define N1PWS1                        331
#define N1PWS2                        332
#define PWM1DCL                       333
#define PWM1DCL0                      334
#define PWM1DCL1                      335
#define PWM1DCH                       336
#define PWM1DCH0                      337
#define PWM1DCH1                      338
#define PWM1DCH2                      339
#define PWM1DCH3                      340
#define PWM1DCH4                      341
#define PWM1DCH5                      342
#define PWM1DCH6                      343
#define PWM1DCH7                      344
#define PWM1CON                       345
#define PWM1POL                       346
#define PWM1OUT                       347
#define PWM1OE                        348
#define PWM1EN                        349
#define PWM2DCL0                      350
#define PWM2DCL                       351
#define PWM2DCL1                      352
#define PWM2DCH0                      353
#define PWM2DCH                       354
#define PWM2DCH1                      355
#define PWM2DCH2                      356
#define PWM2DCH3                      357
#define PWM2DCH4                      358
#define PWM2DCH5                      359
#define PWM2DCH6                      360
#define PWM2DCH7                      361
#define PWM2CON                       362
#define PWM2POL                       363
#define PWM2OUT                       364
#define PWM2OE                        365
#define PWM2EN                        366
#define PWM3DCL0                      367
#define PWM3DCL                       368
#define PWM3DCL1                      369
#define PWM3DCH0                      370
#define PWM3DCH                       371
#define PWM3DCH1                      372
#define PWM3DCH2                      373
#define PWM3DCH3                      374
#define PWM3DCH4                      375
#define PWM3DCH5                      376
#define PWM3DCH6                      377
#define PWM3DCH7                      378
#define PWM3CON                       379
#define PWM3POL                       380
#define PWM3OUT                       381
#define PWM3OE                        382
#define PWM3EN                        383
#define PWM4DCL                       384
#define PWM4DCL0                      385
#define PWM4DCL1                      386
#define PWM4DCH0                      387
#define PWM4DCH                       388
#define PWM4DCH1                      389
#define PWM4DCH2                      390
#define PWM4DCH3                      391
#define PWM4DCH4                      392
#define PWM4DCH5                      393
#define PWM4DCH6                      394
#define PWM4DCH7                      395
#define PWM4CON                       396
#define PWM4POL                       397
#define PWM4OUT                       398
#define PWM4OE                        399
#define PWM4EN                        400
#define CWG1DBR0                      401
#define CWG1DBR                       402
#define CWG1DBR1                      403
#define CWG1DBR2                      404
#define CWG1DBR3                      405
#define CWG1DBR4                      406
#define CWG1DBR5                      407
#define CWG1DBF                       408
#define CWG1DBF0                      409
#define CWG1DBF1                      410
#define CWG1DBF2                      411
#define CWG1DBF3                      412
#define CWG1DBF4                      413
#define CWG1DBF5                      414
#define CWG1CON0                      415
#define G1CS0                         416
#define G1CS                          417
#define G1POLA                        418
#define G1POLB                        419
#define G1OEA                         420
#define G1OEB                         421
#define G1EN                          422
#define CWG1CON1                      423
#define G1IS0                         424
#define G1IS                          425
#define G1IS1                         426
#define G1IS2                         427
#define G1ASDLA                       428
#define G1ASDLA0                      429
#define G1ASDLA1                      430
#define G1ASDLB                       431
#define G1ASDLB0                      432
#define G1ASDLB1                      433
#define CWG1CON2                      434
#define G1ASDSCLC2                    435
#define G1ASDSFLT                     436
#define G1ASDSC1                      437
#define G1ARSEN                       438
#define G1ASE                         439
#define CLCDATA                       440
#define MCLC1OUT                      441
#define MCLC2OUT                      442
#define CLC1CON                       443
#define LC1MODE0                      444
#define LC1MODE                       445
#define CLC1CON_LCMODE0               446
#define LC1MODE1                      447
#define CLC1CON_LCMODE1               448
#define CLC1CON_LCMODE2               449
#define LC1MODE2                      450
#define LC1INTN                       451
#define CLC1CON_LCINTN                452
#define LC1INTP                       453
#define CLC1CON_LCINTP                454
#define CLC1CON_LCOUT                 455
#define LC1OUT                        456
#define LC1OE                         457
#define CLC1CON_LCOE                  458
#define LC1EN                         459
#define CLC1CON_LCEN                  460
#define CLC1POL                       461
#define LC1G1POL                      462
#define CLC1POL_G1POL                 463
#define CLC1POL_G2POL                 464
#define LC1G2POL                      465
#define LC1G3POL                      466
#define CLC1POL_G3POL                 467
#define LC1G4POL                      468
#define CLC1POL_G4POL                 469
#define CLC1POL_POL                   470
#define LC1POL                        471
#define CLC1SEL0                      472
#define LC1D1S                        473
#define CLC1SEL0_D1S0                 474
#define LC1D1S0                       475
#define CLC1SEL0_D1S1                 476
#define LC1D1S1                       477
#define CLC1SEL0_D1S2                 478
#define LC1D1S2                       479
#define LC1D2S                        480
#define LC1D2S0                       481
#define CLC1SEL0_D2S0                 482
#define LC1D2S1                       483
#define CLC1SEL0_D2S1                 484
#define LC1D2S2                       485
#define CLC1SEL0_D2S2                 486
#define CLC1SEL1                      487
#define LC1D3S0                       488
#define CLC1SEL1_D3S0                 489
#define LC1D3S                        490
#define LC1D3S1                       491
#define CLC1SEL1_D3S1                 492
#define LC1D3S2                       493
#define CLC1SEL1_D3S2                 494
#define LC1D4S                        495
#define LC1D4S0                       496
#define CLC1SEL1_D4S0                 497
#define LC1D4S1                       498
#define CLC1SEL1_D4S1                 499
#define LC1D4S2                       500
#define CLC1SEL1_D4S2                 501
#define CLC1GLS0                      502
#define CLC1GLS0_D1N                  503
#define LC1G1D1N                      504
#define CLC1GLS0_D1T                  505
#define LC1G1D1T                      506
#define LC1G1D2N                      507
#define CLC1GLS0_D2N                  508
#define LC1G1D2T                      509
#define CLC1GLS0_D2T                  510
#define CLC1GLS0_D3N                  511
#define LC1G1D3N                      512
#define CLC1GLS0_D3T                  513
#define LC1G1D3T                      514
#define CLC1GLS0_D4N                  515
#define LC1G1D4N                      516
#define CLC1GLS0_D4T                  517
#define LC1G1D4T                      518
#define CLC1GLS1                      519
#define CLC1GLS1_D1N                  520
#define LC1G2D1N                      521
#define LC1G2D1T                      522
#define CLC1GLS1_D1T                  523
#define CLC1GLS1_D2N                  524
#define LC1G2D2N                      525
#define LC1G2D2T                      526
#define CLC1GLS1_D2T                  527
#define CLC1GLS1_D3N                  528
#define LC1G2D3N                      529
#define LC1G2D3T                      530
#define CLC1GLS1_D3T                  531
#define CLC1GLS1_D4N                  532
#define LC1G2D4N                      533
#define LC1G2D4T                      534
#define CLC1GLS1_D4T                  535
#define CLC1GLS2                      536
#define CLC1GLS2_D1N                  537
#define LC1G3D1N                      538
#define LC1G3D1T                      539
#define CLC1GLS2_D1T                  540
#define LC1G3D2N                      541
#define CLC1GLS2_D2N                  542
#define LC1G3D2T                      543
#define CLC1GLS2_D2T                  544
#define CLC1GLS2_D3N                  545
#define LC1G3D3N                      546
#define LC1G3D3T                      547
#define CLC1GLS2_D3T                  548
#define LC1G3D4N                      549
#define CLC1GLS2_D4N                  550
#define LC1G3D4T                      551
#define CLC1GLS2_D4T                  552
#define CLC1GLS3                      553
#define LC1G4D1N                      554
#define CLC1GLS3_G4D1N                555
#define LC1G4D1T                      556
#define CLC1GLS3_G4D1T                557
#define CLC1GLS3_G4D2N                558
#define LC1G4D2N                      559
#define CLC1GLS3_G4D2T                560
#define LC1G4D2T                      561
#define LC1G4D3N                      562
#define CLC1GLS3_G4D3N                563
#define LC1G4D3T                      564
#define CLC1GLS3_G4D3T                565
#define CLC1GLS3_G4D4N                566
#define LC1G4D4N                      567
#define CLC1GLS3_G4D4T                568
#define LC1G4D4T                      569
#define CLC2CON                       570
#define LC2MODE0                      571
#define LC2MODE                       572
#define CLC2CON_LCMODE0               573
#define LC2MODE1                      574
#define CLC2CON_LCMODE1               575
#define LC2MODE2                      576
#define CLC2CON_LCMODE2               577
#define LC2INTN                       578
#define CLC2CON_LCINTN                579
#define LC2INTP                       580
#define CLC2CON_LCINTP                581
#define CLC2CON_LCOUT                 582
#define LC2OUT                        583
#define LC2OE                         584
#define CLC2CON_LCOE                  585
#define CLC2CON_LCEN                  586
#define LC2EN                         587
#define CLC2POL                       588
#define LC2G1POL                      589
#define CLC2POL_G1POL                 590
#define LC2G2POL                      591
#define CLC2POL_G2POL                 592
#define LC2G3POL                      593
#define CLC2POL_G3POL                 594
#define LC2G4POL                      595
#define CLC2POL_G4POL                 596
#define CLC2POL_POL                   597
#define LC2POL                        598
#define CLC2SEL0                      599
#define LC2D1S0                       600
#define CLC2SEL0_D1S0                 601
#define LC2D1S                        602
#define LC2D1S1                       603
#define CLC2SEL0_D1S1                 604
#define LC2D1S2                       605
#define CLC2SEL0_D1S2                 606
#define LC2D2S0                       607
#define LC2D2S                        608
#define CLC2SEL0_D2S0                 609
#define LC2D2S1                       610
#define CLC2SEL0_D2S1                 611
#define LC2D2S2                       612
#define CLC2SEL0_D2S2                 613
#define CLC2SEL1                      614
#define CLC2SEL1_D3S0                 615
#define LC2D3S0                       616
#define LC2D3S                        617
#define LC2D3S1                       618
#define CLC2SEL1_D3S1                 619
#define LC2D3S2                       620
#define CLC2SEL1_D3S2                 621
#define LC2D4S                        622
#define LC2D4S0                       623
#define CLC2SEL1_D4S0                 624
#define LC2D4S1                       625
#define CLC2SEL1_D4S1                 626
#define LC2D4S2                       627
#define CLC2SEL1_D4S2                 628
#define CLC2GLS0                      629
#define LC2G1D1N                      630
#define CLC2GLS0_D1N                  631
#define CLC2GLS0_D1T                  632
#define LC2G1D1T                      633
#define LC2G1D2N                      634
#define CLC2GLS0_D2N                  635
#define CLC2GLS0_D2T                  636
#define LC2G1D2T                      637
#define LC2G1D3N                      638
#define CLC2GLS0_D3N                  639
#define CLC2GLS0_D3T                  640
#define LC2G1D3T                      641
#define LC2G1D4N                      642
#define CLC2GLS0_D4N                  643
#define CLC2GLS0_D4T                  644
#define LC2G1D4T                      645
#define CLC2GLS1                      646
#define CLC2GLS1_D1N                  647
#define LC2G2D1N                      648
#define CLC2GLS1_D1T                  649
#define LC2G2D1T                      650
#define CLC2GLS1_D2N                  651
#define LC2G2D2N                      652
#define CLC2GLS1_D2T                  653
#define LC2G2D2T                      654
#define LC2G2D3N                      655
#define CLC2GLS1_D3N                  656
#define LC2G2D3T                      657
#define CLC2GLS1_D3T                  658
#define LC2G2D4N                      659
#define CLC2GLS1_D4N                  660
#define LC2G2D4T                      661
#define CLC2GLS1_D4T                  662
#define CLC2GLS2                      663
#define LC2G3D1N                      664
#define CLC2GLS2_D1N                  665
#define CLC2GLS2_D1T                  666
#define LC2G3D1T                      667
#define CLC2GLS2_D2N                  668
#define LC2G3D2N                      669
#define LC2G3D2T                      670
#define CLC2GLS2_D2T                  671
#define CLC2GLS2_D3N                  672
#define LC2G3D3N                      673
#define CLC2GLS2_D3T                  674
#define LC2G3D3T                      675
#define CLC2GLS2_D4N                  676
#define LC2G3D4N                      677
#define LC2G3D4T                      678
#define CLC2GLS2_D4T                  679
#define CLC2GLS3                      680
#define LC2G4D1N                      681
#define CLC2GLS3_G4D1N                682
#define CLC2GLS3_G4D1T                683
#define LC2G4D1T                      684
#define CLC2GLS3_G4D2N                685
#define LC2G4D2N                      686
#define LC2G4D2T                      687
#define CLC2GLS3_G4D2T                688
#define CLC2GLS3_G4D3N                689
#define LC2G4D3N                      690
#define CLC2GLS3_G4D3T                691
#define LC2G4D3T                      692
#define LC2G4D4N                      693
#define CLC2GLS3_G4D4N                694
#define CLC2GLS3_G4D4T                695
#define LC2G4D4T                      696
#define BSR_ICDSHAD                   697
#define STATUS_SHAD                   698
#define C_SHAD                        699
#define DC_SHAD                       700
#define Z_SHAD                        701
#define WREG_SHAD                     702
#define BSR_SHAD                      703
#define PCLATH_SHAD                   704
#define FSR0L_SHAD                    705
#define FSR0H_SHAD                    706
#define FSR1L_SHAD                    707
#define FSR1H_SHAD                    708
#define STKPTR                        709
#define TOSL                          710
#define TOSH                          711

#endif // _PIC12F1501_H_
