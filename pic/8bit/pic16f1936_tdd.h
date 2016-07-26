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

#ifndef _PIC16F1936_H_
#define _PIC16F1936_H_

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
#define PORTE                         62
#define RE3                           63
#define PIR1                          64
#define TMR1IF                        65
#define TMR2IF                        66
#define CCP1IF                        67
#define SSPIF                         68
#define TXIF                          69
#define RCIF                          70
#define ADIF                          71
#define TMR1GIF                       72
#define PIR2                          73
#define CCP2IF                        74
#define LCDIF                         75
#define BCLIF                         76
#define EEIF                          77
#define C1IF                          78
#define C2IF                          79
#define OSFIF                         80
#define PIR3                          81
#define TMR4IF                        82
#define TMR6IF                        83
#define CCP3IF                        84
#define CCP4IF                        85
#define CCP5IF                        86
#define TMR0                          87
#define TMR1L                         88
#define TMR1H                         89
#define T1CON                         90
#define TMR1ON                        91
#define nT1SYNC                       92
#define T1OSCEN                       93
#define T1CKPS0                       94
#define T1CKPS                        95
#define T1CKPS1                       96
#define TMR1CS                        97
#define TMR1CS0                       98
#define TMR1CS1                       99
#define T1GCON                        100
#define T1GSS0                        101
#define T1GSS                         102
#define T1GSS1                        103
#define T1GVAL                        104
#define T1GGO_nDONE                   105
#define T1GGO                         106
#define T1GSPM                        107
#define T1GTM                         108
#define T1GPOL                        109
#define TMR1GE                        110
#define TMR2                          111
#define PR2                           112
#define T2CON                         113
#define T2CKPS0                       114
#define T2CKPS                        115
#define T2CKPS1                       116
#define TMR2ON                        117
#define T2OUTPS0                      118
#define T2OUTPS                       119
#define T2OUTPS1                      120
#define T2OUTPS2                      121
#define T2OUTPS3                      122
#define CPSCON0                       123
#define T0XCS                         124
#define CPSOUT                        125
#define CPSRNG                        126
#define CPSRNG0                       127
#define CPSRNG1                       128
#define CPSON                         129
#define CPSCON1                       130
#define CPSCH                         131
#define CPSCH0                        132
#define CPSCH1                        133
#define CPSCH2                        134
#define TRISA                         135
#define TRISA0                        136
#define TRISA1                        137
#define TRISA2                        138
#define TRISA3                        139
#define TRISA4                        140
#define TRISA5                        141
#define TRISA6                        142
#define TRISA7                        143
#define TRISB                         144
#define TRISB0                        145
#define TRISB1                        146
#define TRISB2                        147
#define TRISB3                        148
#define TRISB4                        149
#define TRISB5                        150
#define TRISB6                        151
#define TRISB7                        152
#define TRISC                         153
#define TRISC0                        154
#define TRISC1                        155
#define TRISC2                        156
#define TRISC3                        157
#define TRISC4                        158
#define TRISC5                        159
#define TRISC6                        160
#define TRISC7                        161
#define TRISE                         162
#define TRISE3                        163
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
#define LCDIE                         175
#define BCLIE                         176
#define EEIE                          177
#define C1IE                          178
#define C2IE                          179
#define OSFIE                         180
#define PIE3                          181
#define TMR4IE                        182
#define TMR6IE                        183
#define CCP3IE                        184
#define CCP4IE                        185
#define CCP5IE                        186
#define OPTION_REG                    187
#define PS                            188
#define PS0                           189
#define PS1                           190
#define PS2                           191
#define PSA                           192
#define T0SE                          193
#define TMR0SE                        194
#define T0CS                          195
#define TMR0CS                        196
#define INTEDG                        197
#define nWPUEN                        198
#define PCON                          199
#define nBOR                          200
#define nPOR                          201
#define nRI                           202
#define nRMCLR                        203
#define STKUNF                        204
#define STKOVF                        205
#define WDTCON                        206
#define SWDTEN                        207
#define WDTPS                         208
#define WDTPS0                        209
#define WDTPS1                        210
#define WDTPS2                        211
#define WDTPS3                        212
#define WDTPS4                        213
#define OSCTUNE                       214
#define TUN0                          215
#define TUN                           216
#define TUN1                          217
#define TUN2                          218
#define TUN3                          219
#define TUN4                          220
#define TUN5                          221
#define OSCCON                        222
#define SCS0                          223
#define SCS                           224
#define SCS1                          225
#define IRCF                          226
#define IRCF0                         227
#define IRCF1                         228
#define IRCF2                         229
#define IRCF3                         230
#define SPLLEN                        231
#define OSCSTAT                       232
#define HFIOFS                        233
#define LFIOFR                        234
#define MFIOFR                        235
#define HFIOFL                        236
#define HFIOFR                        237
#define OSTS                          238
#define PLLR                          239
#define T1OSCR                        240
#define ADRESL                        241
#define ADRESH                        242
#define ADCON0                        243
#define ADON                          244
#define nDONE                         245
#define GO_nDONE                      246
#define GO                            247
#define ADGO                          248
#define CHS0                          249
#define CHS                           250
#define CHS1                          251
#define CHS2                          252
#define CHS3                          253
#define CHS4                          254
#define ADCON1                        255
#define ADPREF0                       256
#define ADPREF                        257
#define ADPREF1                       258
#define ADNREF                        259
#define ADCS0                         260
#define ADCS                          261
#define ADCS1                         262
#define ADCS2                         263
#define ADFM                          264
#define LATA                          265
#define LATA0                         266
#define LATA1                         267
#define LATA2                         268
#define LATA3                         269
#define LATA4                         270
#define LATA5                         271
#define LATA6                         272
#define LATA7                         273
#define LATB                          274
#define LATB0                         275
#define LATB1                         276
#define LATB2                         277
#define LATB3                         278
#define LATB4                         279
#define LATB5                         280
#define LATB6                         281
#define LATB7                         282
#define LATC                          283
#define LATC0                         284
#define LATC1                         285
#define LATC2                         286
#define LATC3                         287
#define LATC4                         288
#define LATC5                         289
#define LATC6                         290
#define LATC7                         291
#define LATE                          292
#define LATE3                         293
#define CM1CON0                       294
#define C1SYNC                        295
#define C1HYS                         296
#define C1SP                          297
#define C1POL                         298
#define C1OE                          299
#define C1OUT                         300
#define C1ON                          301
#define CM1CON1                       302
#define C1NCH0                        303
#define C1NCH                         304
#define C1NCH1                        305
#define C1PCH                         306
#define C1PCH0                        307
#define C1PCH1                        308
#define C1INTN                        309
#define C1INTP                        310
#define CM2CON0                       311
#define C2SYNC                        312
#define C2HYS                         313
#define C2SP                          314
#define C2POL                         315
#define C2OE                          316
#define C2OUT                         317
#define C2ON                          318
#define CM2CON1                       319
#define C2NCH0                        320
#define C2NCH                         321
#define C2NCH1                        322
#define C2PCH                         323
#define C2PCH0                        324
#define C2PCH1                        325
#define C2INTN                        326
#define C2INTP                        327
#define CMOUT                         328
#define MC1OUT                        329
#define MC2OUT                        330
#define BORCON                        331
#define BORRDY                        332
#define SBOREN                        333
#define FVRCON                        334
#define ADFVR0                        335
#define ADFVR                         336
#define ADFVR1                        337
#define CDAFVR0                       338
#define CDAFVR                        339
#define CDAFVR1                       340
#define TSRNG                         341
#define TSEN                          342
#define FVRRDY                        343
#define FVREN                         344
#define DACCON0                       345
#define DACNSS                        346
#define DACPSS                        347
#define DACPSS0                       348
#define DACPSS1                       349
#define DACOE                         350
#define DACLPS                        351
#define DACEN                         352
#define DACCON1                       353
#define DACR0                         354
#define DACR                          355
#define DACR1                         356
#define DACR2                         357
#define DACR3                         358
#define DACR4                         359
#define SRCON0                        360
#define SRPR                          361
#define SRPS                          362
#define SRNQEN                        363
#define SRQEN                         364
#define SRCLK0                        365
#define SRCLK                         366
#define SRCLK1                        367
#define SRCLK2                        368
#define SRLEN                         369
#define SRCON1                        370
#define SRRC1E                        371
#define SRRC2E                        372
#define SRRCKE                        373
#define SRRPE                         374
#define SRSC1E                        375
#define SRSC2E                        376
#define SRSCKE                        377
#define SRSPE                         378
#define APFCON                        379
#define CCP2SEL                       380
#define SSSEL                         381
#define C2OUTSEL                      382
#define SRNQSEL                       383
#define P2BSEL                        384
#define T1GSEL                        385
#define CCP3SEL                       386
#define ANSA0                         387
#define ANSELA                        388
#define ANSA1                         389
#define ANSA2                         390
#define ANSA3                         391
#define ANSA4                         392
#define ANSA5                         393
#define ANSB0                         394
#define ANSELB                        395
#define ANSB1                         396
#define ANSB2                         397
#define ANSB3                         398
#define ANSB4                         399
#define ANSB5                         400
#define EEADRL                        401
#define EEADRH                        402
#define EEDATL                        403
#define EEDATH                        404
#define EECON1                        405
#define RD                            406
#define WR                            407
#define WREN                          408
#define WRERR                         409
#define FREE                          410
#define LWLO                          411
#define CFGS                          412
#define EEPGD                         413
#define EECON2                        414
#define RCREG                         415
#define TXREG                         416
#define SP1BRGL                       417
#define SPBRGL                        418
#define SP1BRGH                       419
#define SPBRGH                        420
#define RCSTA                         421
#define RX9D                          422
#define OERR                          423
#define FERR                          424
#define ADDEN                         425
#define CREN                          426
#define SREN                          427
#define RX9                           428
#define SPEN                          429
#define TXSTA                         430
#define TX9D                          431
#define TRMT                          432
#define BRGH                          433
#define SENDB                         434
#define SYNC                          435
#define TXEN                          436
#define TX9                           437
#define CSRC                          438
#define BAUDCON                       439
#define ABDEN                         440
#define WUE                           441
#define BRG16                         442
#define SCKP                          443
#define RCIDL                         444
#define ABDOVF                        445
#define WPUB0                         446
#define WPUB                          447
#define WPUB1                         448
#define WPUB2                         449
#define WPUB3                         450
#define WPUB4                         451
#define WPUB5                         452
#define WPUB6                         453
#define WPUB7                         454
#define WPUE                          455
#define WPUE3                         456
#define SSPBUF                        457
#define SSPADD                        458
#define SSPMSK                        459
#define SSPSTAT                       460
#define BF                            461
#define UA                            462
#define R_nW                          463
#define S                             464
#define P                             465
#define D_nA                          466
#define CKE                           467
#define SMP                           468
#define SSPCON1                       469
#define SSPM0                         470
#define SSPM1                         471
#define SSPM2                         472
#define SSPM3                         473
#define CKP                           474
#define SSPEN                         475
#define SSPOV                         476
#define WCOL                          477
#define SSPCON2                       478
#define SEN                           479
#define RSEN                          480
#define PEN                           481
#define RCEN                          482
#define ACKEN                         483
#define ACKDT                         484
#define ACKSTAT                       485
#define GCEN                          486
#define SSPCON3                       487
#define DHEN                          488
#define AHEN                          489
#define SBCDE                         490
#define SDAHT                         491
#define BOEN                          492
#define SCIE                          493
#define PCIE                          494
#define ACKTIM                        495
#define CCPR1L                        496
#define CCPR1H                        497
#define CCP1CON                       498
#define CCP1M0                        499
#define CCP1M                         500
#define CCP1M1                        501
#define CCP1M2                        502
#define CCP1M3                        503
#define DC1B                          504
#define DC1B0                         505
#define DC1B1                         506
#define P1M                           507
#define P1M0                          508
#define P1M1                          509
#define PWM1CON                       510
#define P1DC0                         511
#define P1DC1                         512
#define P1DC2                         513
#define P1DC3                         514
#define P1DC4                         515
#define P1DC5                         516
#define P1DC6                         517
#define P1RSEN                        518
#define CCP1AS                        519
#define PSS1BD0                       520
#define PSS1BD1                       521
#define PSS1AC0                       522
#define PSS1AC1                       523
#define CCP1AS0                       524
#define CCP1AS1                       525
#define CCP1AS2                       526
#define CCP1ASE                       527
#define PSTR1CON                      528
#define STR1A                         529
#define STR1B                         530
#define STR1C                         531
#define STR1D                         532
#define STR1SYNC                      533
#define CCPR2L                        534
#define CCPR2H                        535
#define CCP2CON                       536
#define CCP2M                         537
#define CCP2M0                        538
#define CCP2M1                        539
#define CCP2M2                        540
#define CCP2M3                        541
#define DC2B                          542
#define DC2B0                         543
#define DC2B1                         544
#define P2M                           545
#define P2M0                          546
#define P2M1                          547
#define PWM2CON                       548
#define P2DC0                         549
#define P2DC1                         550
#define P2DC2                         551
#define P2DC3                         552
#define P2DC4                         553
#define P2DC5                         554
#define P2DC6                         555
#define P2RSEN                        556
#define CCP2AS                        557
#define PSS2BD0                       558
#define PSS2BD1                       559
#define PSS2AC0                       560
#define PSS2AC1                       561
#define CCP2AS0                       562
#define CCP2AS1                       563
#define CCP2AS2                       564
#define CCP2ASE                       565
#define PSTR2CON                      566
#define STR2A                         567
#define STR2B                         568
#define STR2C                         569
#define STR2D                         570
#define STR2SYNC                      571
#define CCPTMRS0                      572
#define C1TSEL0                       573
#define C1TSEL                        574
#define C1TSEL1                       575
#define C2TSEL0                       576
#define C2TSEL                        577
#define C2TSEL1                       578
#define C3TSEL0                       579
#define C3TSEL                        580
#define C3TSEL1                       581
#define C4TSEL                        582
#define C4TSEL0                       583
#define C4TSEL1                       584
#define CCPTMRS1                      585
#define C5TSEL                        586
#define C5TSEL0                       587
#define C5TSEL1                       588
#define CCPR3L                        589
#define CCPR3H                        590
#define CCP3CON                       591
#define CCP3M0                        592
#define CCP3M1                        593
#define CCP3M2                        594
#define CCP3M3                        595
#define DC3B0                         596
#define DC3B1                         597
#define P3M0                          598
#define P3M1                          599
#define PWM3CON                       600
#define P3DC0                         601
#define P3DC1                         602
#define P3DC2                         603
#define P3DC3                         604
#define P3DC4                         605
#define P3DC5                         606
#define P3DC6                         607
#define P3RSEN                        608
#define CCP3AS                        609
#define PSS3BD0                       610
#define PSS3BD1                       611
#define PSS3AC0                       612
#define PSS3AC1                       613
#define CCP3AS0                       614
#define CCP3AS1                       615
#define CCP3AS2                       616
#define CCP3ASE                       617
#define PSTR3CON                      618
#define STR3A                         619
#define STR3B                         620
#define STR3C                         621
#define STR3D                         622
#define STR3SYNC                      623
#define CCPR4L                        624
#define CCPR4H                        625
#define CCP4CON                       626
#define CCP4M0                        627
#define CCP4M1                        628
#define CCP4M2                        629
#define CCP4M3                        630
#define DC4B0                         631
#define DC4B1                         632
#define CCPR5L                        633
#define CCPR5H                        634
#define CCP5CON                       635
#define CCP5M0                        636
#define CCP5M1                        637
#define CCP5M2                        638
#define CCP5M3                        639
#define DC5B0                         640
#define DC5B1                         641
#define IOCBP                         642
#define IOCBP0                        643
#define IOCBP1                        644
#define IOCBP2                        645
#define IOCBP3                        646
#define IOCBP4                        647
#define IOCBP5                        648
#define IOCBP6                        649
#define IOCBP7                        650
#define IOCBN0                        651
#define IOCBN                         652
#define IOCBN1                        653
#define IOCBN2                        654
#define IOCBN3                        655
#define IOCBN4                        656
#define IOCBN5                        657
#define IOCBN6                        658
#define IOCBN7                        659
#define IOCBF0                        660
#define IOCBF                         661
#define IOCBF1                        662
#define IOCBF2                        663
#define IOCBF3                        664
#define IOCBF4                        665
#define IOCBF5                        666
#define IOCBF6                        667
#define IOCBF7                        668
#define TMR4                          669
#define PR4                           670
#define T4CON                         671
#define T4CKPS0                       672
#define T4CKPS                        673
#define T4CKPS1                       674
#define TMR4ON                        675
#define T4OUTPS                       676
#define T4OUTPS0                      677
#define T4OUTPS1                      678
#define T4OUTPS2                      679
#define T4OUTPS3                      680
#define TMR6                          681
#define PR6                           682
#define T6CON                         683
#define T6CKPS0                       684
#define T6CKPS                        685
#define T6CKPS1                       686
#define TMR6ON                        687
#define T6OUTPS0                      688
#define T6OUTPS                       689
#define T6OUTPS1                      690
#define T6OUTPS2                      691
#define T6OUTPS3                      692
#define LCDCON                        693
#define LMUX0                         694
#define LMUX                          695
#define LMUX1                         696
#define CS                            697
#define CS0                           698
#define CS1                           699
#define WERR                          700
#define SLPEN                         701
#define LCDEN                         702
#define LCDPS                         703
#define LP                            704
#define LP0                           705
#define LP1                           706
#define LP2                           707
#define LP3                           708
#define WA                            709
#define LCDA                          710
#define BIASMD                        711
#define WFT                           712
#define LCDREF                        713
#define VLCD1PE                       714
#define VLCD2PE                       715
#define VLCD3PE                       716
#define LCDIRI                        717
#define LCDIRS                        718
#define LCDIRE                        719
#define LCDCST0                       720
#define LCDCST                        721
#define LCDCST1                       722
#define LCDCST2                       723
#define LCDRL                         724
#define LRLAT0                        725
#define LRLAT                         726
#define LRLAT1                        727
#define LRLAT2                        728
#define LRLBP                         729
#define LRLBP0                        730
#define LRLBP1                        731
#define LRLAP0                        732
#define LRLAP                         733
#define LRLAP1                        734
#define LCDSE0                        735
#define SE0                           736
#define SE1                           737
#define SE2                           738
#define SE3                           739
#define SE4                           740
#define SE5                           741
#define SE6                           742
#define SE7                           743
#define LCDSE1                        744
#define SE8                           745
#define SE9                           746
#define SE10                          747
#define SE11                          748
#define SE12                          749
#define SE13                          750
#define SE14                          751
#define SE15                          752
#define LCDDATA0                      753
#define SEG0COM0                      754
#define SEG1COM0                      755
#define SEG2COM0                      756
#define SEG3COM0                      757
#define SEG4COM0                      758
#define SEG5COM0                      759
#define SEG6COM0                      760
#define SEG7COM0                      761
#define LCDDATA1                      762
#define SEG8COM0                      763
#define SEG9COM0                      764
#define SEG10COM0                     765
#define SEG11COM0                     766
#define SEG12COM0                     767
#define SEG13COM0                     768
#define SEG14COM0                     769
#define SEG15COM0                     770
#define LCDDATA3                      771
#define SEG0COM1                      772
#define SEG1COM1                      773
#define SEG2COM1                      774
#define SEG3COM1                      775
#define SEG4COM1                      776
#define SEG5COM1                      777
#define SEG6COM1                      778
#define SEG7COM1                      779
#define LCDDATA4                      780
#define SEG8COM1                      781
#define SEG9COM1                      782
#define SEG10COM1                     783
#define SEG11COM1                     784
#define SEG12COM1                     785
#define SEG13COM1                     786
#define SEG14COM1                     787
#define SEG15COM1                     788
#define LCDDATA6                      789
#define SEG0COM2                      790
#define SEG1COM2                      791
#define SEG2COM2                      792
#define SEG3COM2                      793
#define SEG4COM2                      794
#define SEG5COM2                      795
#define SEG6COM2                      796
#define SEG7COM2                      797
#define LCDDATA7                      798
#define SEG8COM2                      799
#define SEG9COM2                      800
#define SEG10COM2                     801
#define SEG11COM2                     802
#define SEG12COM2                     803
#define SEG13COM2                     804
#define SEG14COM2                     805
#define SEG15COM2                     806
#define LCDDATA9                      807
#define SEG0COM3                      808
#define SEG1COM3                      809
#define SEG2COM3                      810
#define SEG3COM3                      811
#define SEG4COM3                      812
#define SEG5COM3                      813
#define SEG6COM3                      814
#define SEG7COM3                      815
#define LCDDATA10                     816
#define SEG8COM3                      817
#define SEG9COM3                      818
#define SEG10COM3                     819
#define SEG11COM3                     820
#define SEG12COM3                     821
#define SEG13COM3                     822
#define SEG14COM3                     823
#define SEG15COM3                     824
#define STATUS_SHAD                   825
#define C_SHAD                        826
#define DC_SHAD                       827
#define Z_SHAD                        828
#define WREG_SHAD                     829
#define BSR_SHAD                      830
#define PCLATH_SHAD                   831
#define FSR0L_SHAD                    832
#define FSR0H_SHAD                    833
#define FSR1L_SHAD                    834
#define FSR1H_SHAD                    835
#define STKPTR                        836
#define TOSL                          837
#define TOSH                          838

#endif // _PIC16F1936_H_