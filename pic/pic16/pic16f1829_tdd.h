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

#ifndef _PIC16F1829_H_
#define _PIC16F1829_H_

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
#define PORTB                         42
#define RB4                           43
#define RB5                           44
#define RB6                           45
#define RB7                           46
#define PORTC                         47
#define RC0                           48
#define RC1                           49
#define RC2                           50
#define RC3                           51
#define RC4                           52
#define RC5                           53
#define RC6                           54
#define RC7                           55
#define PIR1                          56
#define TMR1IF                        57
#define TMR2IF                        58
#define CCP1IF                        59
#define SSP1IF                        60
#define TXIF                          61
#define RCIF                          62
#define ADIF                          63
#define TMR1GIF                       64
#define PIR2                          65
#define CCP2IF                        66
#define BCL1IF                        67
#define EEIF                          68
#define C1IF                          69
#define C2IF                          70
#define OSFIF                         71
#define PIR3                          72
#define TMR4IF                        73
#define TMR6IF                        74
#define CCP3IF                        75
#define CCP4IF                        76
#define PIR4                          77
#define SSP2IF                        78
#define BCL2IF                        79
#define TMR0                          80
#define TMR1L                         81
#define TMR1H                         82
#define T1CON                         83
#define TMR1ON                        84
#define nT1SYNC                       85
#define T1OSCEN                       86
#define T1CKPS0                       87
#define T1CKPS                        88
#define T1CKPS1                       89
#define TMR1CS                        90
#define TMR1CS0                       91
#define TMR1CS1                       92
#define T1GCON                        93
#define T1GSS0                        94
#define T1GSS                         95
#define T1GSS1                        96
#define T1GVAL                        97
#define T1GGO                         98
#define T1GSPM                        99
#define T1GTM                         100
#define T1GPOL                        101
#define TMR1GE                        102
#define TMR2                          103
#define PR2                           104
#define T2CON                         105
#define T2CKPS0                       106
#define T2CKPS                        107
#define T2CKPS1                       108
#define TMR2ON                        109
#define T2OUTPS0                      110
#define T2OUTPS                       111
#define T2OUTPS1                      112
#define T2OUTPS2                      113
#define T2OUTPS3                      114
#define CPSCON0                       115
#define T0XCS                         116
#define CPSOUT                        117
#define CPSRNG                        118
#define CPSRNG0                       119
#define CPSRNG1                       120
#define CPSRM                         121
#define CPSON                         122
#define CPSCON1                       123
#define CPSCH                         124
#define CPSCH0                        125
#define CPSCH1                        126
#define CPSCH2                        127
#define CPSCH3                        128
#define TRISA                         129
#define TRISA0                        130
#define TRISA1                        131
#define TRISA2                        132
#define TRISA3                        133
#define TRISA4                        134
#define TRISA5                        135
#define TRISB                         136
#define TRISB4                        137
#define TRISB5                        138
#define TRISB6                        139
#define TRISB7                        140
#define TRISC                         141
#define TRISC0                        142
#define TRISC1                        143
#define TRISC2                        144
#define TRISC3                        145
#define TRISC4                        146
#define TRISC5                        147
#define TRISC6                        148
#define TRISC7                        149
#define PIE1                          150
#define TMR1IE                        151
#define TMR2IE                        152
#define CCP1IE                        153
#define SSP1IE                        154
#define TXIE                          155
#define RCIE                          156
#define ADIE                          157
#define TMR1GIE                       158
#define PIE2                          159
#define CCP2IE                        160
#define BCL1IE                        161
#define EEIE                          162
#define C1IE                          163
#define C2IE                          164
#define OSFIE                         165
#define PIE3                          166
#define TMR4IE                        167
#define TMR6IE                        168
#define CCP3IE                        169
#define CCP4IE                        170
#define PIE4                          171
#define SSP2IE                        172
#define BCL2IE                        173
#define OPTION_REG                    174
#define PS                            175
#define PS0                           176
#define PS1                           177
#define PS2                           178
#define PSA                           179
#define T0SE                          180
#define TMR0SE                        181
#define T0CS                          182
#define TMR0CS                        183
#define INTEDG                        184
#define nWPUEN                        185
#define PCON                          186
#define nBOR                          187
#define nPOR                          188
#define nRI                           189
#define nRMCLR                        190
#define STKUNF                        191
#define STKOVF                        192
#define WDTCON                        193
#define SWDTEN                        194
#define WDTPS                         195
#define WDTPS0                        196
#define WDTPS1                        197
#define WDTPS2                        198
#define WDTPS3                        199
#define WDTPS4                        200
#define OSCTUNE                       201
#define TUN0                          202
#define TUN                           203
#define TUN1                          204
#define TUN2                          205
#define TUN3                          206
#define TUN4                          207
#define TUN5                          208
#define OSCCON                        209
#define SCS0                          210
#define SCS                           211
#define SCS1                          212
#define IRCF                          213
#define IRCF0                         214
#define IRCF1                         215
#define IRCF2                         216
#define IRCF3                         217
#define SPLLEN                        218
#define OSCSTAT                       219
#define HFIOFS                        220
#define LFIOFR                        221
#define MFIOFR                        222
#define HFIOFL                        223
#define HFIOFR                        224
#define OSTS                          225
#define PLLR                          226
#define T1OSCR                        227
#define ADRESL                        228
#define ADRESH                        229
#define ADCON0                        230
#define ADON                          231
#define GO_nDONE                      232
#define GO                            233
#define ADGO                          234
#define CHS0                          235
#define CHS                           236
#define CHS1                          237
#define CHS2                          238
#define CHS3                          239
#define CHS4                          240
#define ADCON1                        241
#define ADPREF0                       242
#define ADPREF                        243
#define ADPREF1                       244
#define ADNREF                        245
#define ADCS0                         246
#define ADCS                          247
#define ADCS1                         248
#define ADCS2                         249
#define ADFM                          250
#define LATA                          251
#define LATA0                         252
#define LATA1                         253
#define LATA2                         254
#define LATA4                         255
#define LATA5                         256
#define LATB                          257
#define LATB4                         258
#define LATB5                         259
#define LATB6                         260
#define LATB7                         261
#define LATC                          262
#define LATC0                         263
#define LATC1                         264
#define LATC2                         265
#define LATC3                         266
#define LATC4                         267
#define LATC5                         268
#define LATC6                         269
#define LATC7                         270
#define CM1CON0                       271
#define C1SYNC                        272
#define C1HYS                         273
#define C1SP                          274
#define C1POL                         275
#define C1OE                          276
#define C1OUT                         277
#define C1ON                          278
#define CM1CON1                       279
#define C1NCH0                        280
#define C1NCH                         281
#define C1NCH1                        282
#define C1PCH                         283
#define C1PCH0                        284
#define C1PCH1                        285
#define C1INTN                        286
#define C1INTP                        287
#define CM2CON0                       288
#define C2SYNC                        289
#define C2HYS                         290
#define C2SP                          291
#define C2POL                         292
#define C2OE                          293
#define C2OUT                         294
#define C2ON                          295
#define CM2CON1                       296
#define C2NCH0                        297
#define C2NCH                         298
#define C2NCH1                        299
#define C2PCH                         300
#define C2PCH0                        301
#define C2PCH1                        302
#define C2INTN                        303
#define C2INTP                        304
#define CMOUT                         305
#define MC1OUT                        306
#define MC2OUT                        307
#define BORCON                        308
#define BORRDY                        309
#define SBOREN                        310
#define FVRCON                        311
#define ADFVR0                        312
#define ADFVR                         313
#define ADFVR1                        314
#define CDAFVR0                       315
#define CDAFVR                        316
#define CDAFVR1                       317
#define TSRNG                         318
#define TSEN                          319
#define FVRRDY                        320
#define FVREN                         321
#define DACCON0                       322
#define DACNSS                        323
#define DACPSS                        324
#define DACPSS0                       325
#define DACPSS1                       326
#define DACOE                         327
#define DACLPS                        328
#define DACEN                         329
#define DACCON1                       330
#define DACR0                         331
#define DACR                          332
#define DACR1                         333
#define DACR2                         334
#define DACR3                         335
#define DACR4                         336
#define SRCON0                        337
#define SRPR                          338
#define SRPS                          339
#define SRNQEN                        340
#define SRQEN                         341
#define SRCLK0                        342
#define SRCLK                         343
#define SRCLK1                        344
#define SRCLK2                        345
#define SRLEN                         346
#define SRCON1                        347
#define SRRC1E                        348
#define SRRC2E                        349
#define SRRCKE                        350
#define SRRPE                         351
#define SRSC1E                        352
#define SRSC2E                        353
#define SRSCKE                        354
#define SRSPE                         355
#define APFCON0                       356
#define TXCKSEL                       357
#define T1GSEL                        358
#define RXDTSEL                       359
#define APFCON1                       360
#define CCP2SEL                       361
#define P2BSEL                        362
#define P1CSEL                        363
#define P1DSEL                        364
#define SS2SEL                        365
#define SDO2SEL                       366
#define ANSA0                         367
#define ANSELA                        368
#define ANSA1                         369
#define ANSA2                         370
#define ANSA4                         371
#define ANSELB                        372
#define ANSB4                         373
#define ANSB5                         374
#define ANSC0                         375
#define ANSELC                        376
#define ANSC1                         377
#define ANSC2                         378
#define ANSC3                         379
#define ANSC6                         380
#define ANSC7                         381
#define EEADRL                        382
#define EEADRH                        383
#define EEDATL                        384
#define EEDATH                        385
#define EECON1                        386
#define RD                            387
#define WR                            388
#define WREN                          389
#define WRERR                         390
#define FREE                          391
#define LWLO                          392
#define CFGS                          393
#define EEPGD                         394
#define EECON2                        395
#define RCREG                         396
#define TXREG                         397
#define SPBRGL                        398
#define SPBRGH                        399
#define RCSTA                         400
#define RX9D                          401
#define OERR                          402
#define FERR                          403
#define ADDEN                         404
#define CREN                          405
#define SREN                          406
#define RX9                           407
#define SPEN                          408
#define TXSTA                         409
#define TX9D                          410
#define TRMT                          411
#define BRGH                          412
#define SENDB                         413
#define SYNC                          414
#define TXEN                          415
#define TX9                           416
#define CSRC                          417
#define BAUDCON                       418
#define ABDEN                         419
#define WUE                           420
#define BRG16                         421
#define SCKP                          422
#define RCIDL                         423
#define ABDOVF                        424
#define WPUA0                         425
#define WPUA                          426
#define WPUA1                         427
#define WPUA2                         428
#define WPUA3                         429
#define WPUA4                         430
#define WPUA5                         431
#define WPUB                          432
#define WPUB4                         433
#define WPUB5                         434
#define WPUB6                         435
#define WPUB7                         436
#define WPUC0                         437
#define WPUC                          438
#define WPUC1                         439
#define WPUC2                         440
#define WPUC3                         441
#define WPUC4                         442
#define WPUC5                         443
#define WPUC6                         444
#define WPUC7                         445
#define SSP1BUF                       446
#define SSP1BUF_SSPBUF                447
#define SSP1ADD                       448
#define SSP1ADD_SSPADD                449
#define SSP1MSK                       450
#define SSP1MSK_SSPMSK                451
#define SSP1STAT                      452
#define SSP1STAT_BF                   453
#define SSP1STAT_UA                   454
#define SSP1STAT_R_nW                 455
#define SSP1STAT_S                    456
#define SSP1STAT_P                    457
#define SSP1STAT_D_nA                 458
#define SSP1STAT_CKE                  459
#define SSP1STAT_SMP                  460
#define SSP1CON1                      461
#define SSP1CON1_SSPM                 462
#define SSP1CON1_SSPM0                463
#define SSP1CON1_SSPM1                464
#define SSP1CON1_SSPM2                465
#define SSP1CON1_SSPM3                466
#define SSP1CON1_CKP                  467
#define SSP1CON1_SSPEN                468
#define SSP1CON1_SSPOV                469
#define SSP1CON1_WCOL                 470
#define SSP1CON2                      471
#define SSP1CON2_SEN                  472
#define SSP1CON2_RSEN                 473
#define SSP1CON2_PEN                  474
#define SSP1CON2_RCEN                 475
#define SSP1CON2_ACKEN                476
#define SSP1CON2_ACKDT                477
#define SSP1CON2_ACKSTAT              478
#define SSP1CON2_GCEN                 479
#define SSP1CON3                      480
#define SSP1CON3_DHEN                 481
#define SSP1CON3_AHEN                 482
#define SSP1CON3_SBCDE                483
#define SSP1CON3_SDAHT                484
#define SSP1CON3_BOEN                 485
#define SSP1CON3_SCIE                 486
#define SSP1CON3_PCIE                 487
#define SSP1CON3_ACKTIM               488
#define SSP2BUF                       489
#define SSP2BUF_SSPBUF                490
#define SSP2ADD                       491
#define SSP2ADD_SSPADD                492
#define SSP2MSK                       493
#define SSP2MSK_SSPMSK                494
#define SSP2STAT                      495
#define SSP2STAT_BF                   496
#define SSP2STAT_UA                   497
#define SSP2STAT_R_nW                 498
#define SSP2STAT_S                    499
#define SSP2STAT_P                    500
#define SSP2STAT_D_nA                 501
#define SSP2STAT_CKE                  502
#define SSP2STAT_SMP                  503
#define SSP2CON1                      504
#define SSP2CON1_SSPM                 505
#define SSP2CON1_SSPM0                506
#define SSP2CON1_SSPM1                507
#define SSP2CON1_SSPM2                508
#define SSP2CON1_SSPM3                509
#define SSP2CON1_CKP                  510
#define SSP2CON1_SSPEN                511
#define SSP2CON1_SSPOV                512
#define SSP2CON1_WCOL                 513
#define SSP2CON2                      514
#define SSP2CON2_SEN                  515
#define SSP2CON2_RSEN                 516
#define SSP2CON2_PEN                  517
#define SSP2CON2_RCEN                 518
#define SSP2CON2_ACKEN                519
#define SSP2CON2_ACKDT                520
#define SSP2CON2_ACKSTAT              521
#define SSP2CON2_GCEN                 522
#define SSP2CON3                      523
#define SSP2CON3_DHEN                 524
#define SSP2CON3_AHEN                 525
#define SSP2CON3_SBCDE                526
#define SSP2CON3_SDAHT                527
#define SSP2CON3_BOEN                 528
#define SSP2CON3_SCIE                 529
#define SSP2CON3_PCIE                 530
#define SSP2CON3_ACKTIM               531
#define CCPR1L                        532
#define CCPR1H                        533
#define CCP1CON                       534
#define CCP1M0                        535
#define CCP1M                         536
#define CCP1M1                        537
#define CCP1M2                        538
#define CCP1M3                        539
#define DC1B                          540
#define DC1B0                         541
#define DC1B1                         542
#define P1M                           543
#define P1M0                          544
#define P1M1                          545
#define PWM1CON                       546
#define P1DC                          547
#define P1DC0                         548
#define P1DC1                         549
#define P1DC2                         550
#define P1DC3                         551
#define P1DC4                         552
#define P1DC5                         553
#define P1DC6                         554
#define P1RSEN                        555
#define PSS1BD                        556
#define PSS1BD0                       557
#define PSS1BD1                       558
#define PSS1AC                        559
#define PSS1AC0                       560
#define PSS1AC1                       561
#define CCP1AS                        562
#define CCP1AS0                       563
#define CCP1AS1                       564
#define CCP1AS2                       565
#define CCP1ASE                       566
#define PSTR1CON                      567
#define STR1A                         568
#define STR1B                         569
#define STR1C                         570
#define STR1D                         571
#define STR1SYNC                      572
#define CCPR2L                        573
#define CCPR2H                        574
#define CCP2CON                       575
#define CCP2M                         576
#define CCP2M0                        577
#define CCP2M1                        578
#define CCP2M2                        579
#define CCP2M3                        580
#define DC2B                          581
#define DC2B0                         582
#define DC2B1                         583
#define P2M                           584
#define P2M0                          585
#define P2M1                          586
#define PWM2CON                       587
#define P2DC                          588
#define P2DC0                         589
#define P2DC1                         590
#define P2DC2                         591
#define P2DC3                         592
#define P2DC4                         593
#define P2DC5                         594
#define P2DC6                         595
#define P2RSEN                        596
#define PSS2BD                        597
#define PSS2BD0                       598
#define PSS2BD1                       599
#define PSS2AC0                       600
#define PSS2AC                        601
#define PSS2AC1                       602
#define CCP2AS0                       603
#define CCP2AS                        604
#define CCP2AS1                       605
#define CCP2AS2                       606
#define CCP2ASE                       607
#define PSTR2CON                      608
#define STR2A                         609
#define STR2B                         610
#define STR2C                         611
#define STR2D                         612
#define STR2SYNC                      613
#define CCPTMRS                       614
#define C1TSEL0                       615
#define C1TSEL                        616
#define C1TSEL1                       617
#define C2TSEL0                       618
#define C2TSEL                        619
#define C2TSEL1                       620
#define C3TSEL0                       621
#define C3TSEL                        622
#define C3TSEL1                       623
#define C4TSEL                        624
#define C4TSEL0                       625
#define C4TSEL1                       626
#define CCPR3L                        627
#define CCPR3H                        628
#define CCP3CON                       629
#define CCP3M                         630
#define CCP3M0                        631
#define CCP3M1                        632
#define CCP3M2                        633
#define CCP3M3                        634
#define DC3B                          635
#define DC3B0                         636
#define DC3B1                         637
#define CCPR4L                        638
#define CCPR4H                        639
#define CCP4CON                       640
#define CCP4M                         641
#define CCP4M0                        642
#define CCP4M1                        643
#define CCP4M2                        644
#define CCP4M3                        645
#define DC4B0                         646
#define DC4B                          647
#define DC4B1                         648
#define INLVLA                        649
#define INLVLA0                       650
#define INLVLA1                       651
#define INLVLA2                       652
#define INLVLA3                       653
#define INLVLA4                       654
#define INLVLA5                       655
#define INLVLB4                       656
#define INLVLB                        657
#define INLVLB5                       658
#define INLVLB6                       659
#define INLVLB7                       660
#define INLVLC                        661
#define INLVLC0                       662
#define INLVLC1                       663
#define INLVLC2                       664
#define INLVLC3                       665
#define INLVLC4                       666
#define INLVLC5                       667
#define INLVLC6                       668
#define INLVLC7                       669
#define IOCAP                         670
#define IOCAP0                        671
#define IOCAP1                        672
#define IOCAP2                        673
#define IOCAP3                        674
#define IOCAP4                        675
#define IOCAP5                        676
#define IOCAN0                        677
#define IOCAN                         678
#define IOCAN1                        679
#define IOCAN2                        680
#define IOCAN3                        681
#define IOCAN4                        682
#define IOCAN5                        683
#define IOCAF0                        684
#define IOCAF                         685
#define IOCAF1                        686
#define IOCAF2                        687
#define IOCAF3                        688
#define IOCAF4                        689
#define IOCAF5                        690
#define IOCBP                         691
#define IOCBP4                        692
#define IOCBP5                        693
#define IOCBP6                        694
#define IOCBP7                        695
#define IOCBN4                        696
#define IOCBN                         697
#define IOCBN5                        698
#define IOCBN6                        699
#define IOCBN7                        700
#define IOCBF4                        701
#define IOCBF                         702
#define IOCBF5                        703
#define IOCBF6                        704
#define IOCBF7                        705
#define CLKRCON                       706
#define CLKRDIV                       707
#define CLKRDIV0                      708
#define CLKRDIV1                      709
#define CLKRDIV2                      710
#define CLKRDC                        711
#define CLKRDC0                       712
#define CLKRDC1                       713
#define CLKRSLR                       714
#define CLKROE                        715
#define CLKREN                        716
#define MDCON                         717
#define MDBIT                         718
#define MDOUT                         719
#define MDOPOL                        720
#define MDSLR                         721
#define MDOE                          722
#define MDEN                          723
#define MDSRC                         724
#define MDMS0                         725
#define MDMS                          726
#define MDMS1                         727
#define MDMS2                         728
#define MDMS3                         729
#define MDMSODIS                      730
#define MDCARL                        731
#define MDCL0                         732
#define MDCL                          733
#define MDCL1                         734
#define MDCL2                         735
#define MDCL3                         736
#define MDCLSYNC                      737
#define MDCLPOL                       738
#define MDCLODIS                      739
#define MDCARH                        740
#define MDCH                          741
#define MDCH0                         742
#define MDCH1                         743
#define MDCH2                         744
#define MDCH3                         745
#define MDCHSYNC                      746
#define MDCHPOL                       747
#define MDCHODIS                      748
#define TMR4                          749
#define PR4                           750
#define T4CON                         751
#define T4CKPS0                       752
#define T4CKPS                        753
#define T4CKPS1                       754
#define TMR4ON                        755
#define T4OUTPS                       756
#define T4OUTPS0                      757
#define T4OUTPS1                      758
#define T4OUTPS2                      759
#define T4OUTPS3                      760
#define TMR6                          761
#define PR6                           762
#define T6CON                         763
#define T6CKPS0                       764
#define T6CKPS                        765
#define T6CKPS1                       766
#define TMR6ON                        767
#define T6OUTPS0                      768
#define T6OUTPS                       769
#define T6OUTPS1                      770
#define T6OUTPS2                      771
#define T6OUTPS3                      772
#define STATUS_SHAD                   773
#define C_SHAD                        774
#define DC_SHAD                       775
#define Z_SHAD                        776
#define WREG_SHAD                     777
#define BSR_SHAD                      778
#define PCLATH_SHAD                   779
#define FSR0L_SHAD                    780
#define FSR0H_SHAD                    781
#define FSR1L_SHAD                    782
#define FSR1H_SHAD                    783
#define STKPTR                        784
#define TOSL                          785
#define TOSH                          786

#endif // _PIC16F1829_H_
