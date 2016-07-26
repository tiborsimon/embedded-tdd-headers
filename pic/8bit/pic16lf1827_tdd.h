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

#ifndef _PIC16LF1827_H_
#define _PIC16LF1827_H_

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
#define CCP2IF                        63
#define BCL1IF                        64
#define EEIF                          65
#define C1IF                          66
#define C2IF                          67
#define OSFIF                         68
#define PIR3                          69
#define TMR4IF                        70
#define TMR6IF                        71
#define CCP3IF                        72
#define CCP4IF                        73
#define PIR4                          74
#define SSP2IF                        75
#define BCL2IF                        76
#define TMR0                          77
#define TMR1L                         78
#define TMR1H                         79
#define T1CON                         80
#define TMR1ON                        81
#define nT1SYNC                       82
#define T1OSCEN                       83
#define T1CKPS0                       84
#define T1CKPS                        85
#define T1CKPS1                       86
#define TMR1CS                        87
#define TMR1CS0                       88
#define TMR1CS1                       89
#define T1GCON                        90
#define T1GSS0                        91
#define T1GSS                         92
#define T1GSS1                        93
#define T1GVAL                        94
#define T1GGO                         95
#define T1GSPM                        96
#define T1GTM                         97
#define T1GPOL                        98
#define TMR1GE                        99
#define TMR2                          100
#define PR2                           101
#define T2CON                         102
#define T2CKPS0                       103
#define T2CKPS                        104
#define T2CKPS1                       105
#define TMR2ON                        106
#define T2OUTPS0                      107
#define T2OUTPS                       108
#define T2OUTPS1                      109
#define T2OUTPS2                      110
#define T2OUTPS3                      111
#define CPSCON0                       112
#define T0XCS                         113
#define CPSOUT                        114
#define CPSRNG                        115
#define CPSRNG0                       116
#define CPSRNG1                       117
#define CPSON                         118
#define CPSCON1                       119
#define CPSCH                         120
#define CPSCH0                        121
#define CPSCH1                        122
#define CPSCH2                        123
#define CPSCH3                        124
#define TRISA                         125
#define TRISA0                        126
#define TRISA1                        127
#define TRISA2                        128
#define TRISA3                        129
#define TRISA4                        130
#define TRISA5                        131
#define TRISA6                        132
#define TRISA7                        133
#define TRISB                         134
#define TRISB0                        135
#define TRISB1                        136
#define TRISB2                        137
#define TRISB3                        138
#define TRISB4                        139
#define TRISB5                        140
#define TRISB6                        141
#define TRISB7                        142
#define PIE1                          143
#define TMR1IE                        144
#define TMR2IE                        145
#define CCP1IE                        146
#define SSP1IE                        147
#define TXIE                          148
#define RCIE                          149
#define ADIE                          150
#define TMR1GIE                       151
#define PIE2                          152
#define CCP2IE                        153
#define BCL1IE                        154
#define EEIE                          155
#define C1IE                          156
#define C2IE                          157
#define OSFIE                         158
#define PIE3                          159
#define TMR4IE                        160
#define TMR6IE                        161
#define CCP3IE                        162
#define CCP4IE                        163
#define PIE4                          164
#define SSP2IE                        165
#define BCL2IE                        166
#define OPTION_REG                    167
#define PS                            168
#define PS0                           169
#define PS1                           170
#define PS2                           171
#define PSA                           172
#define T0SE                          173
#define TMR0SE                        174
#define T0CS                          175
#define TMR0CS                        176
#define INTEDG                        177
#define nWPUEN                        178
#define PCON                          179
#define nBOR                          180
#define nPOR                          181
#define nRI                           182
#define nRMCLR                        183
#define STKUNF                        184
#define STKOVF                        185
#define WDTCON                        186
#define SWDTEN                        187
#define WDTPS                         188
#define WDTPS0                        189
#define WDTPS1                        190
#define WDTPS2                        191
#define WDTPS3                        192
#define WDTPS4                        193
#define OSCTUNE                       194
#define TUN0                          195
#define TUN                           196
#define TUN1                          197
#define TUN2                          198
#define TUN3                          199
#define TUN4                          200
#define TUN5                          201
#define OSCCON                        202
#define SCS0                          203
#define SCS                           204
#define SCS1                          205
#define IRCF                          206
#define IRCF0                         207
#define IRCF1                         208
#define IRCF2                         209
#define IRCF3                         210
#define SPLLEN                        211
#define OSCSTAT                       212
#define HFIOFS                        213
#define LFIOFR                        214
#define MFIOFR                        215
#define HFIOFL                        216
#define HFIOFR                        217
#define OSTS                          218
#define PLLR                          219
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
#define ADNREF                        238
#define ADCS0                         239
#define ADCS                          240
#define ADCS1                         241
#define ADCS2                         242
#define ADFM                          243
#define LATA                          244
#define LATA0                         245
#define LATA1                         246
#define LATA2                         247
#define LATA3                         248
#define LATA4                         249
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
#define CM1CON0                       261
#define C1SYNC                        262
#define C1HYS                         263
#define C1SP                          264
#define C1POL                         265
#define C1OE                          266
#define C1OUT                         267
#define C1ON                          268
#define CM1CON1                       269
#define C1NCH0                        270
#define C1NCH                         271
#define C1NCH1                        272
#define C1PCH                         273
#define C1PCH0                        274
#define C1PCH1                        275
#define C1INTN                        276
#define C1INTP                        277
#define CM2CON0                       278
#define C2SYNC                        279
#define C2HYS                         280
#define C2SP                          281
#define C2POL                         282
#define C2OE                          283
#define C2OUT                         284
#define C2ON                          285
#define CM2CON1                       286
#define C2NCH0                        287
#define C2NCH                         288
#define C2NCH1                        289
#define C2PCH                         290
#define C2PCH0                        291
#define C2PCH1                        292
#define C2INTN                        293
#define C2INTP                        294
#define CMOUT                         295
#define MC1OUT                        296
#define MC2OUT                        297
#define BORCON                        298
#define BORRDY                        299
#define SBOREN                        300
#define FVRCON                        301
#define ADFVR0                        302
#define ADFVR                         303
#define ADFVR1                        304
#define CDAFVR0                       305
#define CDAFVR                        306
#define CDAFVR1                       307
#define TSRNG                         308
#define TSEN                          309
#define FVRRDY                        310
#define FVREN                         311
#define DACCON0                       312
#define DACNSS                        313
#define DACPSS                        314
#define DACPSS0                       315
#define DACPSS1                       316
#define DACOE                         317
#define DACLPS                        318
#define DACEN                         319
#define DACCON1                       320
#define DACR0                         321
#define DACR                          322
#define DACR1                         323
#define DACR2                         324
#define DACR3                         325
#define DACR4                         326
#define SRCON0                        327
#define SRPR                          328
#define SRPS                          329
#define SRNQEN                        330
#define SRQEN                         331
#define SRCLK0                        332
#define SRCLK                         333
#define SRCLK1                        334
#define SRCLK2                        335
#define SRLEN                         336
#define SRCON1                        337
#define SRRC1E                        338
#define SRRC2E                        339
#define SRRCKE                        340
#define SRRPE                         341
#define SRSC1E                        342
#define SRSC2E                        343
#define SRSCKE                        344
#define SRSPE                         345
#define APFCON0                       346
#define CCP1SEL                       347
#define P1CSEL                        348
#define P1DSEL                        349
#define CCP2SEL                       350
#define P2BSEL                        351
#define SS1SEL                        352
#define SDO1SEL                       353
#define RXDTSEL                       354
#define APFCON1                       355
#define TXCKSEL                       356
#define ANSA0                         357
#define ANSELA                        358
#define ANSA1                         359
#define ANSA2                         360
#define ANSA3                         361
#define ANSA4                         362
#define ANSELB                        363
#define ANSB1                         364
#define ANSB2                         365
#define ANSB3                         366
#define ANSB4                         367
#define ANSB5                         368
#define ANSB6                         369
#define ANSB7                         370
#define EEADRL                        371
#define EEADRH                        372
#define EEDATL                        373
#define EEDATH                        374
#define EECON1                        375
#define RD                            376
#define WR                            377
#define WREN                          378
#define WRERR                         379
#define FREE                          380
#define LWLO                          381
#define CFGS                          382
#define EEPGD                         383
#define EECON2                        384
#define RCREG                         385
#define TXREG                         386
#define SP1BRGL                       387
#define SPBRGL                        388
#define SP1BRGH                       389
#define SPBRGH                        390
#define RCSTA                         391
#define RX9D                          392
#define OERR                          393
#define FERR                          394
#define ADDEN                         395
#define CREN                          396
#define SREN                          397
#define RX9                           398
#define SPEN                          399
#define TXSTA                         400
#define TX9D                          401
#define TRMT                          402
#define BRGH                          403
#define SENDB                         404
#define SYNC                          405
#define TXEN                          406
#define TX9                           407
#define CSRC                          408
#define BAUDCON                       409
#define ABDEN                         410
#define WUE                           411
#define BRG16                         412
#define SCKP                          413
#define RCIDL                         414
#define ABDOVF                        415
#define WPUA                          416
#define WPUA5                         417
#define WPUB0                         418
#define WPUB                          419
#define WPUB1                         420
#define WPUB2                         421
#define WPUB3                         422
#define WPUB4                         423
#define WPUB5                         424
#define WPUB6                         425
#define WPUB7                         426
#define SSP1BUF                       427
#define SSP1BUF_SSPBUF                428
#define SSP1ADD                       429
#define SSP1ADD_SSPADD                430
#define SSP1MSK                       431
#define SSP1MSK_SSPMSK                432
#define SSP1STAT                      433
#define SSP1STAT_BF                   434
#define SSP1STAT_UA                   435
#define SSP1STAT_R_nW                 436
#define SSP1STAT_S                    437
#define SSP1STAT_P                    438
#define SSP1STAT_D_nA                 439
#define SSP1STAT_CKE                  440
#define SSP1STAT_SMP                  441
#define SSP1CON1                      442
#define SSP1CON1_SSPM                 443
#define SSP1CON1_SSPM0                444
#define SSP1CON1_SSPM1                445
#define SSP1CON1_SSPM2                446
#define SSP1CON1_SSPM3                447
#define SSP1CON1_CKP                  448
#define SSP1CON1_SSPEN                449
#define SSP1CON1_SSPOV                450
#define SSP1CON1_WCOL                 451
#define SSP1CON2                      452
#define SSP1CON2_SEN                  453
#define SSP1CON2_RSEN                 454
#define SSP1CON2_PEN                  455
#define SSP1CON2_RCEN                 456
#define SSP1CON2_ACKEN                457
#define SSP1CON2_ACKDT                458
#define SSP1CON2_ACKSTAT              459
#define SSP1CON2_GCEN                 460
#define SSP1CON3                      461
#define SSP1CON3_DHEN                 462
#define SSP1CON3_AHEN                 463
#define SSP1CON3_SBCDE                464
#define SSP1CON3_SDAHT                465
#define SSP1CON3_BOEN                 466
#define SSP1CON3_SCIE                 467
#define SSP1CON3_PCIE                 468
#define SSP1CON3_ACKTIM               469
#define SSP2BUF                       470
#define SSP2BUF_SSPBUF                471
#define SSP2ADD                       472
#define SSP2ADD_SSPADD                473
#define SSP2MSK                       474
#define SSP2MSK_SSPMSK                475
#define SSP2STAT                      476
#define SSP2STAT_BF                   477
#define SSP2STAT_UA                   478
#define SSP2STAT_R_nW                 479
#define SSP2STAT_S                    480
#define SSP2STAT_P                    481
#define SSP2STAT_D_nA                 482
#define SSP2STAT_CKE                  483
#define SSP2STAT_SMP                  484
#define SSP2CON1                      485
#define SSP2CON1_SSPM                 486
#define SSP2CON1_SSPM0                487
#define SSP2CON1_SSPM1                488
#define SSP2CON1_SSPM2                489
#define SSP2CON1_SSPM3                490
#define SSP2CON1_CKP                  491
#define SSP2CON1_SSPEN                492
#define SSP2CON1_SSPOV                493
#define SSP2CON1_WCOL                 494
#define SSP2CON2                      495
#define SSP2CON2_SEN                  496
#define SSP2CON2_RSEN                 497
#define SSP2CON2_PEN                  498
#define SSP2CON2_RCEN                 499
#define SSP2CON2_ACKEN                500
#define SSP2CON2_ACKDT                501
#define SSP2CON2_ACKSTAT              502
#define SSP2CON2_GCEN                 503
#define SSP2CON3                      504
#define SSP2CON3_DHEN                 505
#define SSP2CON3_AHEN                 506
#define SSP2CON3_SBCDE                507
#define SSP2CON3_SDAHT                508
#define SSP2CON3_BOEN                 509
#define SSP2CON3_SCIE                 510
#define SSP2CON3_PCIE                 511
#define SSP2CON3_ACKTIM               512
#define CCPR1L                        513
#define CCPR1H                        514
#define CCP1CON                       515
#define CCP1M0                        516
#define CCP1M                         517
#define CCP1M1                        518
#define CCP1M2                        519
#define CCP1M3                        520
#define DC1B                          521
#define DC1B0                         522
#define DC1B1                         523
#define P1M                           524
#define P1M0                          525
#define P1M1                          526
#define PWM1CON                       527
#define P1DC                          528
#define P1DC0                         529
#define P1DC1                         530
#define P1DC2                         531
#define P1DC3                         532
#define P1DC4                         533
#define P1DC5                         534
#define P1DC6                         535
#define P1RSEN                        536
#define PSS1BD                        537
#define PSS1BD0                       538
#define PSS1BD1                       539
#define PSS1AC                        540
#define PSS1AC0                       541
#define PSS1AC1                       542
#define CCP1AS                        543
#define CCP1AS0                       544
#define CCP1AS1                       545
#define CCP1AS2                       546
#define CCP1ASE                       547
#define PSTR1CON                      548
#define STR1A                         549
#define STR1B                         550
#define STR1C                         551
#define STR1D                         552
#define STR1SYNC                      553
#define CCPR2L                        554
#define CCPR2H                        555
#define CCP2CON                       556
#define CCP2M                         557
#define CCP2M0                        558
#define CCP2M1                        559
#define CCP2M2                        560
#define CCP2M3                        561
#define DC2B                          562
#define DC2B0                         563
#define DC2B1                         564
#define P2M                           565
#define P2M0                          566
#define P2M1                          567
#define PWM2CON                       568
#define P2DC                          569
#define P2DC0                         570
#define P2DC1                         571
#define P2DC2                         572
#define P2DC3                         573
#define P2DC4                         574
#define P2DC5                         575
#define P2DC6                         576
#define P2RSEN                        577
#define PSS2BD                        578
#define PSS2BD0                       579
#define PSS2BD1                       580
#define PSS2AC0                       581
#define PSS2AC                        582
#define PSS2AC1                       583
#define CCP2AS0                       584
#define CCP2AS                        585
#define CCP2AS1                       586
#define CCP2AS2                       587
#define CCP2ASE                       588
#define PSTR2CON                      589
#define STR2A                         590
#define STR2B                         591
#define STR2C                         592
#define STR2D                         593
#define STR2SYNC                      594
#define CCPTMRS                       595
#define C1TSEL0                       596
#define C1TSEL                        597
#define C1TSEL1                       598
#define C2TSEL0                       599
#define C2TSEL                        600
#define C2TSEL1                       601
#define C3TSEL0                       602
#define C3TSEL                        603
#define C3TSEL1                       604
#define C4TSEL                        605
#define C4TSEL0                       606
#define C4TSEL1                       607
#define CCPR3L                        608
#define CCPR3H                        609
#define CCP3CON                       610
#define CCP3M                         611
#define CCP3M0                        612
#define CCP3M1                        613
#define CCP3M2                        614
#define CCP3M3                        615
#define DC3B                          616
#define DC3B0                         617
#define DC3B1                         618
#define CCPR4L                        619
#define CCPR4H                        620
#define CCP4CON                       621
#define CCP4M                         622
#define CCP4M0                        623
#define CCP4M1                        624
#define CCP4M2                        625
#define CCP4M3                        626
#define DC4B0                         627
#define DC4B                          628
#define DC4B1                         629
#define IOCBP                         630
#define IOCBP0                        631
#define IOCBP1                        632
#define IOCBP2                        633
#define IOCBP3                        634
#define IOCBP4                        635
#define IOCBP5                        636
#define IOCBP6                        637
#define IOCBP7                        638
#define IOCBN0                        639
#define IOCBN                         640
#define IOCBN1                        641
#define IOCBN2                        642
#define IOCBN3                        643
#define IOCBN4                        644
#define IOCBN5                        645
#define IOCBN6                        646
#define IOCBN7                        647
#define IOCBF0                        648
#define IOCBF                         649
#define IOCBF1                        650
#define IOCBF2                        651
#define IOCBF3                        652
#define IOCBF4                        653
#define IOCBF5                        654
#define IOCBF6                        655
#define IOCBF7                        656
#define CLKRCON                       657
#define CLKRDIV                       658
#define CLKRDIV0                      659
#define CLKRDIV1                      660
#define CLKRDIV2                      661
#define CLKRDC                        662
#define CLKRDC0                       663
#define CLKRDC1                       664
#define CLKRSLR                       665
#define CLKROE                        666
#define CLKREN                        667
#define MDCON                         668
#define MDBIT                         669
#define MDOUT                         670
#define MDOPOL                        671
#define MDSLR                         672
#define MDOE                          673
#define MDEN                          674
#define MDSRC                         675
#define MDMS0                         676
#define MDMS                          677
#define MDMS1                         678
#define MDMS2                         679
#define MDMS3                         680
#define MDMSODIS                      681
#define MDCARL                        682
#define MDCL0                         683
#define MDCL                          684
#define MDCL1                         685
#define MDCL2                         686
#define MDCL3                         687
#define MDCLSYNC                      688
#define MDCLPOL                       689
#define MDCLODIS                      690
#define MDCARH                        691
#define MDCH                          692
#define MDCH0                         693
#define MDCH1                         694
#define MDCH2                         695
#define MDCH3                         696
#define MDCHSYNC                      697
#define MDCHPOL                       698
#define MDCHODIS                      699
#define TMR4                          700
#define PR4                           701
#define T4CON                         702
#define T4CKPS0                       703
#define T4CKPS                        704
#define T4CKPS1                       705
#define TMR4ON                        706
#define T4OUTPS                       707
#define T4OUTPS0                      708
#define T4OUTPS1                      709
#define T4OUTPS2                      710
#define T4OUTPS3                      711
#define TMR6                          712
#define PR6                           713
#define T6CON                         714
#define T6CKPS0                       715
#define T6CKPS                        716
#define T6CKPS1                       717
#define TMR6ON                        718
#define T6OUTPS0                      719
#define T6OUTPS                       720
#define T6OUTPS1                      721
#define T6OUTPS2                      722
#define T6OUTPS3                      723
#define STATUS_SHAD                   724
#define C_SHAD                        725
#define DC_SHAD                       726
#define Z_SHAD                        727
#define WREG_SHAD                     728
#define BSR_SHAD                      729
#define PCLATH_SHAD                   730
#define FSR0L_SHAD                    731
#define FSR0H_SHAD                    732
#define FSR1L_SHAD                    733
#define FSR1H_SHAD                    734
#define STKPTR                        735
#define TOSL                          736
#define TOSH                          737

#endif // _PIC16LF1827_H_
