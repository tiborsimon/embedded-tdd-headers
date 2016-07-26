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

#ifndef _PIC16F1829LIN_H_
#define _PIC16F1829LIN_H_

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
#define LINRX                         44
#define RB5                           45
#define RB6                           46
#define LINCS                         47
#define RB7                           48
#define LINTX                         49
#define PORTC                         50
#define RC0                           51
#define RC1                           52
#define RC2                           53
#define RC3                           54
#define RC4                           55
#define RC5                           56
#define RC6                           57
#define RC7                           58
#define PORTC_PWRGD                   59
#define PIR1                          60
#define TMR1IF                        61
#define TMR2IF                        62
#define CCP1IF                        63
#define SSP1IF                        64
#define TXIF                          65
#define RCIF                          66
#define ADIF                          67
#define TMR1GIF                       68
#define PIR2                          69
#define CCP2IF                        70
#define BCL1IF                        71
#define EEIF                          72
#define C1IF                          73
#define C2IF                          74
#define OSFIF                         75
#define PIR3                          76
#define TMR4IF                        77
#define TMR6IF                        78
#define CCP3IF                        79
#define CCP4IF                        80
#define PIR4                          81
#define SSP2IF                        82
#define BCL2IF                        83
#define TMR0                          84
#define TMR1L                         85
#define TMR1H                         86
#define T1CON                         87
#define TMR1ON                        88
#define nT1SYNC                       89
#define T1OSCEN                       90
#define T1CKPS0                       91
#define T1CKPS                        92
#define T1CKPS1                       93
#define TMR1CS                        94
#define TMR1CS0                       95
#define TMR1CS1                       96
#define T1GCON                        97
#define T1GSS0                        98
#define T1GSS                         99
#define T1GSS1                        100
#define T1GVAL                        101
#define T1GGO                         102
#define T1GSPM                        103
#define T1GTM                         104
#define T1GPOL                        105
#define TMR1GE                        106
#define TMR2                          107
#define PR2                           108
#define T2CON                         109
#define T2CKPS0                       110
#define T2CKPS                        111
#define T2CKPS1                       112
#define TMR2ON                        113
#define T2OUTPS0                      114
#define T2OUTPS                       115
#define T2OUTPS1                      116
#define T2OUTPS2                      117
#define T2OUTPS3                      118
#define CPSCON0                       119
#define T0XCS                         120
#define CPSOUT                        121
#define CPSRNG                        122
#define CPSRNG0                       123
#define CPSRNG1                       124
#define CPSRM                         125
#define CPSON                         126
#define CPSCON1                       127
#define CPSCH                         128
#define CPSCH0                        129
#define CPSCH1                        130
#define CPSCH2                        131
#define CPSCH3                        132
#define TRISA                         133
#define TRISA0                        134
#define TRISA1                        135
#define TRISA2                        136
#define TRISA3                        137
#define TRISA4                        138
#define TRISA5                        139
#define TRISB                         140
#define TRISB4                        141
#define TRISB5                        142
#define TRISB6                        143
#define TRISB7                        144
#define TRISC                         145
#define TRISC0                        146
#define TRISC1                        147
#define TRISC2                        148
#define TRISC3                        149
#define TRISC4                        150
#define TRISC5                        151
#define TRISC6                        152
#define TRISC7                        153
#define PIE1                          154
#define TMR1IE                        155
#define TMR2IE                        156
#define CCP1IE                        157
#define SSP1IE                        158
#define TXIE                          159
#define RCIE                          160
#define ADIE                          161
#define TMR1GIE                       162
#define PIE2                          163
#define CCP2IE                        164
#define BCL1IE                        165
#define EEIE                          166
#define C1IE                          167
#define C2IE                          168
#define OSFIE                         169
#define PIE3                          170
#define TMR4IE                        171
#define TMR6IE                        172
#define CCP3IE                        173
#define CCP4IE                        174
#define PIE4                          175
#define SSP2IE                        176
#define BCL2IE                        177
#define OPTION_REG                    178
#define PS                            179
#define PS0                           180
#define PS1                           181
#define PS2                           182
#define PSA                           183
#define T0SE                          184
#define TMR0SE                        185
#define T0CS                          186
#define TMR0CS                        187
#define INTEDG                        188
#define nWPUEN                        189
#define PCON                          190
#define nBOR                          191
#define nPOR                          192
#define nRI                           193
#define nRMCLR                        194
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
#define OSCTUNE                       205
#define TUN0                          206
#define TUN                           207
#define TUN1                          208
#define TUN2                          209
#define TUN3                          210
#define TUN4                          211
#define TUN5                          212
#define OSCCON                        213
#define SCS0                          214
#define SCS                           215
#define SCS1                          216
#define IRCF                          217
#define IRCF0                         218
#define IRCF1                         219
#define IRCF2                         220
#define IRCF3                         221
#define SPLLEN                        222
#define OSCSTAT                       223
#define HFIOFS                        224
#define LFIOFR                        225
#define MFIOFR                        226
#define HFIOFL                        227
#define HFIOFR                        228
#define OSTS                          229
#define PLLR                          230
#define T1OSCR                        231
#define ADRESL                        232
#define ADRESH                        233
#define ADCON0                        234
#define ADON                          235
#define GO_nDONE                      236
#define GO                            237
#define ADGO                          238
#define CHS0                          239
#define CHS                           240
#define CHS1                          241
#define CHS2                          242
#define CHS3                          243
#define CHS4                          244
#define ADCON1                        245
#define ADPREF0                       246
#define ADPREF                        247
#define ADPREF1                       248
#define ADNREF                        249
#define ADCS0                         250
#define ADCS                          251
#define ADCS1                         252
#define ADCS2                         253
#define ADFM                          254
#define LATA                          255
#define LATA0                         256
#define LATA1                         257
#define LATA2                         258
#define LATA4                         259
#define LATA5                         260
#define LATB                          261
#define LATB4                         262
#define LATB5                         263
#define LATB6                         264
#define LATB7                         265
#define LATC                          266
#define LATC0                         267
#define LATC1                         268
#define LATC2                         269
#define LATC3                         270
#define LATC4                         271
#define LATC5                         272
#define LATC6                         273
#define LATC7                         274
#define LATC_PWRGD                    275
#define CM1CON0                       276
#define C1SYNC                        277
#define C1HYS                         278
#define C1SP                          279
#define C1POL                         280
#define C1OE                          281
#define C1OUT                         282
#define C1ON                          283
#define CM1CON1                       284
#define C1NCH0                        285
#define C1NCH                         286
#define C1NCH1                        287
#define C1PCH                         288
#define C1PCH0                        289
#define C1PCH1                        290
#define C1INTN                        291
#define C1INTP                        292
#define CM2CON0                       293
#define C2SYNC                        294
#define C2HYS                         295
#define C2SP                          296
#define C2POL                         297
#define C2OE                          298
#define C2OUT                         299
#define C2ON                          300
#define CM2CON1                       301
#define C2NCH0                        302
#define C2NCH                         303
#define C2NCH1                        304
#define C2PCH                         305
#define C2PCH0                        306
#define C2PCH1                        307
#define C2INTN                        308
#define C2INTP                        309
#define CMOUT                         310
#define MC1OUT                        311
#define MC2OUT                        312
#define BORCON                        313
#define BORRDY                        314
#define SBOREN                        315
#define FVRCON                        316
#define ADFVR0                        317
#define ADFVR                         318
#define ADFVR1                        319
#define CDAFVR0                       320
#define CDAFVR                        321
#define CDAFVR1                       322
#define TSRNG                         323
#define TSEN                          324
#define FVRRDY                        325
#define FVREN                         326
#define DACCON0                       327
#define DACNSS                        328
#define DACPSS                        329
#define DACPSS0                       330
#define DACPSS1                       331
#define DACOE                         332
#define DACLPS                        333
#define DACEN                         334
#define DACCON1                       335
#define DACR0                         336
#define DACR                          337
#define DACR1                         338
#define DACR2                         339
#define DACR3                         340
#define DACR4                         341
#define SRCON0                        342
#define SRPR                          343
#define SRPS                          344
#define SRNQEN                        345
#define SRQEN                         346
#define SRCLK0                        347
#define SRCLK                         348
#define SRCLK1                        349
#define SRCLK2                        350
#define SRLEN                         351
#define SRCON1                        352
#define SRRC1E                        353
#define SRRC2E                        354
#define SRRCKE                        355
#define SRRPE                         356
#define SRSC1E                        357
#define SRSC2E                        358
#define SRSCKE                        359
#define SRSPE                         360
#define APFCON0                       361
#define TXCKSEL                       362
#define T1GSEL                        363
#define RXDTSEL                       364
#define APFCON1                       365
#define CCP2SEL                       366
#define P2BSEL                        367
#define P1CSEL                        368
#define P1DSEL                        369
#define SS2SEL                        370
#define SDO2SEL                       371
#define ANSA0                         372
#define ANSELA                        373
#define ANSA1                         374
#define ANSA2                         375
#define ANSA4                         376
#define ANSB4                         377
#define ANSELB                        378
#define ANSB5                         379
#define ANSB6                         380
#define ANSB7                         381
#define ANSC0                         382
#define ANSELC                        383
#define ANSC1                         384
#define ANSC2                         385
#define ANSC3                         386
#define ANSC6                         387
#define ANSC7                         388
#define EEADRL                        389
#define EEADRH                        390
#define EEDATL                        391
#define EEDATH                        392
#define EECON1                        393
#define RD                            394
#define WR                            395
#define WREN                          396
#define WRERR                         397
#define FREE                          398
#define LWLO                          399
#define CFGS                          400
#define EEPGD                         401
#define EECON2                        402
#define RCREG                         403
#define TXREG                         404
#define SPBRGL                        405
#define SPBRGH                        406
#define RCSTA                         407
#define RX9D                          408
#define OERR                          409
#define FERR                          410
#define ADDEN                         411
#define CREN                          412
#define SREN                          413
#define RX9                           414
#define SPEN                          415
#define TXSTA                         416
#define TX9D                          417
#define TRMT                          418
#define BRGH                          419
#define SENDB                         420
#define SYNC                          421
#define TXEN                          422
#define TX9                           423
#define CSRC                          424
#define BAUDCON                       425
#define ABDEN                         426
#define WUE                           427
#define BRG16                         428
#define SCKP                          429
#define RCIDL                         430
#define ABDOVF                        431
#define WPUA0                         432
#define WPUA                          433
#define WPUA1                         434
#define WPUA2                         435
#define WPUA3                         436
#define WPUA4                         437
#define WPUA5                         438
#define WPUB                          439
#define WPUB4                         440
#define WPUB5                         441
#define WPUB6                         442
#define WPUB7                         443
#define WPUC0                         444
#define WPUC                          445
#define WPUC1                         446
#define WPUC2                         447
#define WPUC3                         448
#define WPUC4                         449
#define WPUC5                         450
#define WPUC6                         451
#define WPUC7                         452
#define SSP1BUF                       453
#define SSP1BUF_SSPBUF                454
#define SSP1ADD                       455
#define SSP1ADD_SSPADD                456
#define SSP1MSK                       457
#define SSP1MSK_SSPMSK                458
#define SSP1STAT                      459
#define SSP1STAT_BF                   460
#define SSP1STAT_UA                   461
#define SSP1STAT_R_nW                 462
#define SSP1STAT_S                    463
#define SSP1STAT_P                    464
#define SSP1STAT_D_nA                 465
#define SSP1STAT_CKE                  466
#define SSP1STAT_SMP                  467
#define SSP1CON1                      468
#define SSP1CON1_SSPM                 469
#define SSP1CON1_SSPM0                470
#define SSP1CON1_SSPM1                471
#define SSP1CON1_SSPM2                472
#define SSP1CON1_SSPM3                473
#define SSP1CON1_CKP                  474
#define SSP1CON1_SSPEN                475
#define SSP1CON1_SSPOV                476
#define SSP1CON1_WCOL                 477
#define SSP1CON2                      478
#define SSP1CON2_SEN                  479
#define SSP1CON2_RSEN                 480
#define SSP1CON2_PEN                  481
#define SSP1CON2_RCEN                 482
#define SSP1CON2_ACKEN                483
#define SSP1CON2_ACKDT                484
#define SSP1CON2_ACKSTAT              485
#define SSP1CON2_GCEN                 486
#define SSP1CON3                      487
#define SSP1CON3_DHEN                 488
#define SSP1CON3_AHEN                 489
#define SSP1CON3_SBCDE                490
#define SSP1CON3_SDAHT                491
#define SSP1CON3_BOEN                 492
#define SSP1CON3_SCIE                 493
#define SSP1CON3_PCIE                 494
#define SSP1CON3_ACKTIM               495
#define SSP2BUF                       496
#define SSP2BUF_SSPBUF                497
#define SSP2ADD                       498
#define SSP2ADD_SSPADD                499
#define SSP2MSK                       500
#define SSP2MSK_SSPMSK                501
#define SSP2STAT                      502
#define SSP2STAT_BF                   503
#define SSP2STAT_UA                   504
#define SSP2STAT_R_nW                 505
#define SSP2STAT_S                    506
#define SSP2STAT_P                    507
#define SSP2STAT_D_nA                 508
#define SSP2STAT_CKE                  509
#define SSP2STAT_SMP                  510
#define SSP2CON1                      511
#define SSP2CON1_SSPM                 512
#define SSP2CON1_SSPM0                513
#define SSP2CON1_SSPM1                514
#define SSP2CON1_SSPM2                515
#define SSP2CON1_SSPM3                516
#define SSP2CON1_CKP                  517
#define SSP2CON1_SSPEN                518
#define SSP2CON1_SSPOV                519
#define SSP2CON1_WCOL                 520
#define SSP2CON2                      521
#define SSP2CON2_SEN                  522
#define SSP2CON2_RSEN                 523
#define SSP2CON2_PEN                  524
#define SSP2CON2_RCEN                 525
#define SSP2CON2_ACKEN                526
#define SSP2CON2_ACKDT                527
#define SSP2CON2_ACKSTAT              528
#define SSP2CON2_GCEN                 529
#define SSP2CON3                      530
#define SSP2CON3_DHEN                 531
#define SSP2CON3_AHEN                 532
#define SSP2CON3_SBCDE                533
#define SSP2CON3_SDAHT                534
#define SSP2CON3_BOEN                 535
#define SSP2CON3_SCIE                 536
#define SSP2CON3_PCIE                 537
#define SSP2CON3_ACKTIM               538
#define CCPR1L                        539
#define CCPR1H                        540
#define CCP1CON                       541
#define CCP1M0                        542
#define CCP1M                         543
#define CCP1M1                        544
#define CCP1M2                        545
#define CCP1M3                        546
#define DC1B                          547
#define DC1B0                         548
#define DC1B1                         549
#define P1M                           550
#define P1M0                          551
#define P1M1                          552
#define PWM1CON                       553
#define P1DC                          554
#define P1DC0                         555
#define P1DC1                         556
#define P1DC2                         557
#define P1DC3                         558
#define P1DC4                         559
#define P1DC5                         560
#define P1DC6                         561
#define P1RSEN                        562
#define PSS1BD                        563
#define PSS1BD0                       564
#define PSS1BD1                       565
#define PSS1AC                        566
#define PSS1AC0                       567
#define PSS1AC1                       568
#define CCP1AS                        569
#define CCP1AS0                       570
#define CCP1AS1                       571
#define CCP1AS2                       572
#define CCP1ASE                       573
#define PSTR1CON                      574
#define STR1A                         575
#define STR1B                         576
#define STR1C                         577
#define STR1D                         578
#define STR1SYNC                      579
#define CCPR2L                        580
#define CCPR2H                        581
#define CCP2CON                       582
#define CCP2M                         583
#define CCP2M0                        584
#define CCP2M1                        585
#define CCP2M2                        586
#define CCP2M3                        587
#define DC2B                          588
#define DC2B0                         589
#define DC2B1                         590
#define P2M                           591
#define P2M0                          592
#define P2M1                          593
#define PWM2CON                       594
#define P2DC                          595
#define P2DC0                         596
#define P2DC1                         597
#define P2DC2                         598
#define P2DC3                         599
#define P2DC4                         600
#define P2DC5                         601
#define P2DC6                         602
#define P2RSEN                        603
#define PSS2BD                        604
#define PSS2BD0                       605
#define PSS2BD1                       606
#define PSS2AC0                       607
#define PSS2AC                        608
#define PSS2AC1                       609
#define CCP2AS0                       610
#define CCP2AS                        611
#define CCP2AS1                       612
#define CCP2AS2                       613
#define CCP2ASE                       614
#define PSTR2CON                      615
#define STR2A                         616
#define STR2B                         617
#define STR2C                         618
#define STR2D                         619
#define STR2SYNC                      620
#define CCPTMRS                       621
#define C1TSEL0                       622
#define C1TSEL                        623
#define C1TSEL1                       624
#define C2TSEL0                       625
#define C2TSEL                        626
#define C2TSEL1                       627
#define C3TSEL0                       628
#define C3TSEL                        629
#define C3TSEL1                       630
#define C4TSEL                        631
#define C4TSEL0                       632
#define C4TSEL1                       633
#define CCPR3L                        634
#define CCPR3H                        635
#define CCP3CON                       636
#define CCP3M                         637
#define CCP3M0                        638
#define CCP3M1                        639
#define CCP3M2                        640
#define CCP3M3                        641
#define DC3B                          642
#define DC3B0                         643
#define DC3B1                         644
#define CCPR4L                        645
#define CCPR4H                        646
#define CCP4CON                       647
#define CCP4M                         648
#define CCP4M0                        649
#define CCP4M1                        650
#define CCP4M2                        651
#define CCP4M3                        652
#define DC4B0                         653
#define DC4B                          654
#define DC4B1                         655
#define INLVLA                        656
#define INLVLA0                       657
#define INLVLA1                       658
#define INLVLA2                       659
#define INLVLA3                       660
#define INLVLA4                       661
#define INLVLA5                       662
#define INLVLB4                       663
#define INLVLB                        664
#define INLVLB5                       665
#define INLVLB6                       666
#define INLVLB7                       667
#define INLVLC                        668
#define INLVLC0                       669
#define INLVLC1                       670
#define INLVLC2                       671
#define INLVLC3                       672
#define INLVLC4                       673
#define INLVLC5                       674
#define INLVLC6                       675
#define INLVLC7                       676
#define IOCAP                         677
#define IOCAP0                        678
#define IOCAP1                        679
#define IOCAP2                        680
#define IOCAP3                        681
#define IOCAP4                        682
#define IOCAP5                        683
#define IOCAN0                        684
#define IOCAN                         685
#define IOCAN1                        686
#define IOCAN2                        687
#define IOCAN3                        688
#define IOCAN4                        689
#define IOCAN5                        690
#define IOCAF0                        691
#define IOCAF                         692
#define IOCAF1                        693
#define IOCAF2                        694
#define IOCAF3                        695
#define IOCAF4                        696
#define IOCAF5                        697
#define IOCBP                         698
#define IOCBP4                        699
#define IOCBP5                        700
#define IOCBP6                        701
#define IOCBP7                        702
#define IOCBN4                        703
#define IOCBN                         704
#define IOCBN5                        705
#define IOCBN6                        706
#define IOCBN7                        707
#define IOCBF4                        708
#define IOCBF                         709
#define IOCBF5                        710
#define IOCBF6                        711
#define IOCBF7                        712
#define CLKRCON                       713
#define CLKRDIV                       714
#define CLKRDIV0                      715
#define CLKRDIV1                      716
#define CLKRDIV2                      717
#define CLKRDC                        718
#define CLKRDC0                       719
#define CLKRDC1                       720
#define CLKRSLR                       721
#define CLKROE                        722
#define CLKREN                        723
#define MDCON                         724
#define MDBIT                         725
#define MDOUT                         726
#define MDOPOL                        727
#define MDSLR                         728
#define MDOE                          729
#define MDEN                          730
#define MDSRC                         731
#define MDMS0                         732
#define MDMS                          733
#define MDMS1                         734
#define MDMS2                         735
#define MDMS3                         736
#define MDMSODIS                      737
#define MDCARL                        738
#define MDCL0                         739
#define MDCL                          740
#define MDCL1                         741
#define MDCL2                         742
#define MDCL3                         743
#define MDCLSYNC                      744
#define MDCLPOL                       745
#define MDCLODIS                      746
#define MDCARH                        747
#define MDCH                          748
#define MDCH0                         749
#define MDCH1                         750
#define MDCH2                         751
#define MDCH3                         752
#define MDCHSYNC                      753
#define MDCHPOL                       754
#define MDCHODIS                      755
#define TMR4                          756
#define PR4                           757
#define T4CON                         758
#define T4CKPS0                       759
#define T4CKPS                        760
#define T4CKPS1                       761
#define TMR4ON                        762
#define T4OUTPS                       763
#define T4OUTPS0                      764
#define T4OUTPS1                      765
#define T4OUTPS2                      766
#define T4OUTPS3                      767
#define TMR6                          768
#define PR6                           769
#define T6CON                         770
#define T6CKPS0                       771
#define T6CKPS                        772
#define T6CKPS1                       773
#define TMR6ON                        774
#define T6OUTPS0                      775
#define T6OUTPS                       776
#define T6OUTPS1                      777
#define T6OUTPS2                      778
#define T6OUTPS3                      779
#define STATUS_SHAD                   780
#define C_SHAD                        781
#define DC_SHAD                       782
#define Z_SHAD                        783
#define WREG_SHAD                     784
#define BSR_SHAD                      785
#define PCLATH_SHAD                   786
#define FSR0L_SHAD                    787
#define FSR0H_SHAD                    788
#define FSR1L_SHAD                    789
#define FSR1H_SHAD                    790
#define STKPTR                        791
#define TOSL                          792
#define TOSH                          793

#endif // _PIC16F1829LIN_H_
