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

#ifndef _PIC18F25K20_H_
#define _PIC18F25K20_H_

#define SSPMSK                        0
#define MSK0                          1
#define MSK1                          2
#define MSK2                          3
#define MSK3                          4
#define MSK4                          5
#define MSK5                          6
#define MSK6                          7
#define MSK7                          8
#define SLRCON                        9
#define SLRA                          10
#define SLRB                          11
#define SLRC                          12
#define CM2CON1                       13
#define C2RSEL                        14
#define C1RSEL                        15
#define MC2OUT                        16
#define MC1OUT                        17
#define CM2CON0                       18
#define C2CH0                         19
#define C2CH                          20
#define C2CH1                         21
#define C2R                           22
#define C2SP                          23
#define C2POL                         24
#define C2OE                          25
#define CM2CON0_C2OUT                 26
#define C2ON                          27
#define CM1CON0                       28
#define C1CH                          29
#define C1CH0                         30
#define C1CH1                         31
#define C1R                           32
#define C1SP                          33
#define C1POL                         34
#define C1OE                          35
#define CM1CON0_C1OUT                 36
#define C1ON                          37
#define WPUB                          38
#define WPUB0                         39
#define WPUB1                         40
#define WPUB2                         41
#define WPUB3                         42
#define WPUB4                         43
#define WPUB5                         44
#define WPUB6                         45
#define WPUB7                         46
#define IOCB                          47
#define IOCB4                         48
#define IOCB5                         49
#define IOCB6                         50
#define IOCB7                         51
#define ANSEL                         52
#define ANS0                          53
#define ANS1                          54
#define ANS2                          55
#define ANS3                          56
#define ANS4                          57
#define ANSELH                        58
#define ANS8                          59
#define ANS9                          60
#define ANS10                         61
#define ANS11                         62
#define ANS12                         63
#define PORTA                         64
#define ULPWUIN                       65
#define AN0                           66
#define PORTA_RA0                     67
#define C12IN0M                       68
#define C12IN0N                       69
#define AN1                           70
#define C12IN1N                       71
#define C12IN1M                       72
#define PORTA_RA1                     73
#define AN2                           74
#define PORTA_RA2                     75
#define CVREF                         76
#define VREFN                         77
#define VREFM                         78
#define C2INP                         79
#define C1INP                         80
#define AN3                           81
#define PORTA_RA3                     82
#define VREFP                         83
#define PORTA_C1OUT                   84
#define PORTA_RA4                     85
#define T0CKI                         86
#define PORTA_C2OUT                   87
#define AN4                           88
#define PORTA_RA5                     89
#define NOT_SS                        90
#define LVDIN                         91
#define nSS                           92
#define SS                            93
#define HLVDIN                        94
#define PORTA_RA6                     95
#define PORTA_RA7                     96
#define RJPU                          97
#define PORTB                         98
#define FLT0                          99
#define INT0                          100
#define PORTB_RB0                     101
#define AN12                          102
#define C12IN3M                       103
#define C12IN3N                       104
#define INT1                          105
#define P1C                           106
#define PORTB_RB1                     107
#define AN10                          108
#define AN8                           109
#define INT2                          110
#define P1B                           111
#define PORTB_RB2                     112
#define AN9                           113
#define PORTB_CCP2                    114
#define CCP2_PA2                      115
#define C12IN2N                       116
#define C12IN2M                       117
#define PORTB_RB3                     118
#define P1D                           119
#define KBI0                          120
#define PORTB_RB4                     121
#define AN11                          122
#define PGM                           123
#define PORTB_RB5                     124
#define KBI1                          125
#define PGC                           126
#define PORTB_RB6                     127
#define KBI2                          128
#define PGD                           129
#define PORTB_RB7                     130
#define KBI3                          131
#define PORTC                         132
#define T3CKI                         133
#define T13CKI                        134
#define T1CKI                         135
#define T1OSO                         136
#define PORTC_RC0                     137
#define PORTC_CCP2                    138
#define T1OSI                         139
#define PA2                           140
#define PORTC_RC1                     141
#define CCP1                          142
#define P1A                           143
#define PA1                           144
#define PORTC_RC2                     145
#define SCL                           146
#define SCK                           147
#define PORTC_RC3                     148
#define SDA                           149
#define SDI                           150
#define PORTC_RC4                     151
#define SDO                           152
#define PORTC_RC5                     153
#define TX                            154
#define CK                            155
#define PORTC_RC6                     156
#define DT                            157
#define RX                            158
#define PORTC_RC7                     159
#define PORTE                         160
#define VPP                           161
#define RE3                           162
#define NOT_MCLR                      163
#define MCLR                          164
#define CCP9E                         165
#define nMCLR                         166
#define PC3E                          167
#define LATA                          168
#define LATA0                         169
#define LA0                           170
#define LATA1                         171
#define LA1                           172
#define LATA2                         173
#define LA2                           174
#define LATA3                         175
#define LA3                           176
#define LATA4                         177
#define LA4                           178
#define LATA5                         179
#define LA5                           180
#define LATA6                         181
#define LA6                           182
#define LATA7                         183
#define LA7                           184
#define LATB                          185
#define LB0                           186
#define LATB0                         187
#define LB1                           188
#define LATB1                         189
#define LB2                           190
#define LATB2                         191
#define LB3                           192
#define LATB3                         193
#define LB4                           194
#define LATB4                         195
#define LB5                           196
#define LATB5                         197
#define LB6                           198
#define LATB6                         199
#define LB7                           200
#define LATB7                         201
#define LATC                          202
#define LATC0                         203
#define LC0                           204
#define LATC1                         205
#define LC1                           206
#define LATC2                         207
#define LC2                           208
#define LATC3                         209
#define LC3                           210
#define LATC4                         211
#define LC4                           212
#define LATC5                         213
#define LC5                           214
#define LATC6                         215
#define LC6                           216
#define LATC7                         217
#define LC7                           218
#define TRISA                         219
#define TRISA0                        220
#define TRISA_RA0                     221
#define TRISA1                        222
#define TRISA_RA1                     223
#define TRISA2                        224
#define TRISA_RA2                     225
#define TRISA3                        226
#define TRISA_RA3                     227
#define TRISA_RA4                     228
#define TRISA4                        229
#define TRISA_RA5                     230
#define TRISA5                        231
#define TRISA_RA6                     232
#define TRISA6                        233
#define TRISA_RA7                     234
#define TRISA7                        235
#define TRISB                         236
#define TRISB_RB0                     237
#define TRISB0                        238
#define TRISB_RB1                     239
#define TRISB1                        240
#define TRISB_RB2                     241
#define TRISB2                        242
#define TRISB_RB3                     243
#define TRISB3                        244
#define TRISB_RB4                     245
#define TRISB4                        246
#define TRISB_RB5                     247
#define TRISB5                        248
#define TRISB_RB6                     249
#define TRISB6                        250
#define TRISB_RB7                     251
#define TRISB7                        252
#define TRISC                         253
#define TRISC0                        254
#define TRISC_RC0                     255
#define TRISC1                        256
#define TRISC_RC1                     257
#define TRISC2                        258
#define TRISC_RC2                     259
#define TRISC3                        260
#define TRISC_RC3                     261
#define TRISC4                        262
#define TRISC_RC4                     263
#define TRISC5                        264
#define TRISC_RC5                     265
#define TRISC6                        266
#define TRISC_RC6                     267
#define TRISC7                        268
#define TRISC_RC7                     269
#define OSCTUNE                       270
#define TUN0                          271
#define TUN                           272
#define TUN1                          273
#define TUN2                          274
#define TUN3                          275
#define TUN4                          276
#define TUN5                          277
#define PLLEN                         278
#define INTSRC                        279
#define PIE1                          280
#define TMR1IE                        281
#define TMR2IE                        282
#define CCP1IE                        283
#define SSPIE                         284
#define TXIE                          285
#define TX1IE                         286
#define RCIE                          287
#define RC1IE                         288
#define ADIE                          289
#define PIR1                          290
#define TMR1IF                        291
#define TMR2IF                        292
#define CCP1IF                        293
#define SSPIF                         294
#define TXIF                          295
#define TX1IF                         296
#define RCIF                          297
#define RC1IF                         298
#define ADIF                          299
#define IPR1                          300
#define TMR1IP                        301
#define TMR2IP                        302
#define CCP1IP                        303
#define SSPIP                         304
#define TX1IP                         305
#define TXIP                          306
#define RC1IP                         307
#define RCIP                          308
#define ADIP                          309
#define PIE2                          310
#define CCP2IE                        311
#define TMR3IE                        312
#define HLVDIE                        313
#define LVDIE                         314
#define BCLIE                         315
#define EEIE                          316
#define C2IE                          317
#define C1IE                          318
#define CMIE                          319
#define OSCFIE                        320
#define PIR2                          321
#define CCP2IF                        322
#define TMR3IF                        323
#define HLVDIF                        324
#define LVDIF                         325
#define BCLIF                         326
#define EEIF                          327
#define C2IF                          328
#define C1IF                          329
#define CMIF                          330
#define OSCFIF                        331
#define IPR2                          332
#define CCP2IP                        333
#define TMR3IP                        334
#define HLVDIP                        335
#define LVDIP                         336
#define BCLIP                         337
#define EEIP                          338
#define C2IP                          339
#define C1IP                          340
#define CMIP                          341
#define OSCFIP                        342
#define EECON1                        343
#define RD                            344
#define WR                            345
#define WREN                          346
#define WRERR                         347
#define FREE                          348
#define CFGS                          349
#define EEFS                          350
#define EEPGD                         351
#define EEADR                         352
#define EEADR0                        353
#define EEADR1                        354
#define EEADR2                        355
#define EEADR3                        356
#define EEADR4                        357
#define EEADR5                        358
#define EEADR6                        359
#define EEADR7                        360
#define RCSTA                         361
#define RCD8                          362
#define RX9D                          363
#define OERR                          364
#define FERR                          365
#define ADDEN                         366
#define ADEN                          367
#define CREN                          368
#define SRENA                         369
#define SREN                          370
#define RC9                           371
#define RC8_9                         372
#define RX9                           373
#define SPEN                          374
#define TXSTA                         375
#define TXD8                          376
#define TX9D1                         377
#define TX9D                          378
#define TRMT                          379
#define TRMT1                         380
#define BRGH1                         381
#define BRGH                          382
#define SENDB1                        383
#define SENDB                         384
#define SYNC                          385
#define SYNC1                         386
#define TXEN1                         387
#define TXEN                          388
#define TX91                          389
#define TX8_9                         390
#define TX9                           391
#define CSRC1                         392
#define CSRC                          393
#define T3CON                         394
#define TMR3ON                        395
#define TMR3CS                        396
#define nT3SYNC                       397
#define NOT_T3SYNC                    398
#define T3SYNC                        399
#define SOSCEN3                       400
#define T3CCP1                        401
#define T3CKPS                        402
#define T3CKPS0                       403
#define T3CKPS1                       404
#define T3CCP2                        405
#define T3CON_RD16                    406
#define RD163                         407
#define T3RD16                        408
#define CVRCON2                       409
#define FVRST                         410
#define FVREN                         411
#define CVRCON                        412
#define CVR                           413
#define CVR0                          414
#define CVR1                          415
#define CVR2                          416
#define CVR3                          417
#define CVRSS                         418
#define CVRR                          419
#define CVROEN                        420
#define CVROE                         421
#define CVREN                         422
#define ECCP1AS                       423
#define PSSBD                         424
#define PSSBD0                        425
#define PSSBD1                        426
#define PSSAC                         427
#define PSSAC0                        428
#define PSSAC1                        429
#define ECCPAS0                       430
#define ECCPAS                        431
#define ECCPAS1                       432
#define ECCPAS2                       433
#define ECCPASE                       434
#define PWM1CON                       435
#define PDC0                          436
#define PDC                           437
#define PDC1                          438
#define PDC2                          439
#define PDC3                          440
#define PDC4                          441
#define PDC5                          442
#define PDC6                          443
#define PRSEN                         444
#define BAUDCON                       445
#define ABDEN                         446
#define W4E                           447
#define WUE                           448
#define BRG16                         449
#define SCKP                          450
#define CKTXP                         451
#define RXCKP                         452
#define DTRXP                         453
#define RCIDL                         454
#define ABDOVF                        455
#define PSTRCON                       456
#define STRA                          457
#define STRB                          458
#define STRC                          459
#define STRD                          460
#define STRSYNC                       461
#define CCP2CON                       462
#define CCP2M                         463
#define CCP2M0                        464
#define CCP2M1                        465
#define CCP2M2                        466
#define CCP2M3                        467
#define DC2B0                         468
#define DC2B                          469
#define DC2B1                         470
#define CCP1CON                       471
#define CCP1M0                        472
#define CCP1M                         473
#define CCP1M1                        474
#define CCP1M2                        475
#define CCP1M3                        476
#define DC1B                          477
#define DC1B0                         478
#define DC1B1                         479
#define P1M                           480
#define P1M0                          481
#define P1M1                          482
#define ADCON2                        483
#define ADCS0                         484
#define ADCS                          485
#define ADCS1                         486
#define ADCS2                         487
#define ACQT0                         488
#define ACQT                          489
#define ACQT1                         490
#define ACQT2                         491
#define ADFM                          492
#define ADCON1                        493
#define VCFG                          494
#define VCFG0                         495
#define VCFG01                        496
#define VCFG11                        497
#define VCFG1                         498
#define ADCON0                        499
#define ADON                          500
#define nDONE                         501
#define GO_nDONE                      502
#define NOT_DONE                      503
#define GODONE                        504
#define GO_DONE                       505
#define DONE                          506
#define GO_NOT_DONE                   507
#define GO                            508
#define CHS0                          509
#define CHS                           510
#define CHS1                          511
#define CHS2                          512
#define CHS3                          513
#define SSPCON2                       514
#define SEN                           515
#define RSEN                          516
#define PEN                           517
#define RCEN                          518
#define ACKEN                         519
#define ACKDT                         520
#define ACKSTAT                       521
#define GCEN                          522
#define SSPCON1                       523
#define SSPM0                         524
#define SSPM                          525
#define SSPM1                         526
#define SSPM2                         527
#define SSPM3                         528
#define CKP                           529
#define SSPEN                         530
#define SSPOV                         531
#define WCOL                          532
#define SSPSTAT                       533
#define BF                            534
#define UA                            535
#define R_NOT_W                       536
#define NOT_W                         537
#define nW                            538
#define RW                            539
#define nWRITE                        540
#define R                             541
#define W                             542
#define NOT_WRITE                     543
#define R_nW                          544
#define R_W                           545
#define START                         546
#define S                             547
#define STOP                          548
#define P                             549
#define A                             550
#define NOT_A                         551
#define nA                            552
#define D_A                           553
#define D_nA                          554
#define D                             555
#define DA                            556
#define D_NOT_A                       557
#define NOT_ADDRESS                   558
#define nADDRESS                      559
#define CKE                           560
#define SMP                           561
#define T2CON                         562
#define T2CKPS0                       563
#define T2CKPS                        564
#define T2CKPS1                       565
#define TMR2ON                        566
#define T2OUTPS0                      567
#define T2OUTPS                       568
#define T2OUTPS1                      569
#define T2OUTPS2                      570
#define T2OUTPS3                      571
#define PR2                           572
#define WM0                           573
#define WM1                           574
#define WAIT0                         575
#define WAIT1                         576
#define EBDIS                         577
#define T1CON                         578
#define TMR1ON                        579
#define TMR1CS                        580
#define NOT_T1SYNC                    581
#define T1SYNC                        582
#define nT1SYNC                       583
#define T1OSCEN                       584
#define SOSCEN                        585
#define T1CKPS0                       586
#define T1CKPS                        587
#define T1CKPS1                       588
#define T1RUN                         589
#define T1CON_RD16                    590
#define T1RD16                        591
#define RCON                          592
#define BOR                           593
#define NOT_BOR                       594
#define nBOR                          595
#define POR                           596
#define nPOR                          597
#define NOT_POR                       598
#define PD                            599
#define nPD                           600
#define NOT_PD                        601
#define NOT_TO                        602
#define nTO                           603
#define TO                            604
#define nRI                           605
#define NOT_RI                        606
#define RI                            607
#define SBOREN                        608
#define IPEN                          609
#define WDTCON                        610
#define SWDTE                         611
#define SWDTEN                        612
#define HLVDCON                       613
#define HLVDL                         614
#define HLVDL0                        615
#define LVV0                          616
#define LVDL0                         617
#define HLVDL1                        618
#define LVDL1                         619
#define LVV1                          620
#define HLVDL2                        621
#define LVV2                          622
#define LVDL2                         623
#define HLVDL3                        624
#define LVV3                          625
#define LVDL3                         626
#define HLVDEN                        627
#define LVDEN                         628
#define BGST                          629
#define IRVST                         630
#define IVRST                         631
#define VDIRMAG                       632
#define OSCCON                        633
#define SCS0                          634
#define SCS                           635
#define SCS1                          636
#define IOFS                          637
#define OSTS                          638
#define IRCF                          639
#define IRCF0                         640
#define IRCF1                         641
#define IRCF2                         642
#define IDLEN                         643
#define T0CON                         644
#define T0PS                          645
#define T0PS0                         646
#define T0PS1                         647
#define T0PS2                         648
#define PSA                           649
#define T0SE                          650
#define T0CS                          651
#define T08BIT                        652
#define TMR0ON                        653
#define STATUS                        654
#define C                             655
#define CARRY                         656
#define DC                            657
#define ZERO                          658
#define Z                             659
#define OV                            660
#define OVERFLOW                      661
#define N                             662
#define NEGATIVE                      663
#define INTCON3                       664
#define INT1IF                        665
#define INT1F                         666
#define INT2IF                        667
#define INT2F                         668
#define INT1E                         669
#define INT1IE                        670
#define INT2IE                        671
#define INT2E                         672
#define INT1P                         673
#define INT1IP                        674
#define INT2IP                        675
#define INT2P                         676
#define INTCON2                       677
#define RBIP                          678
#define TMR0IP                        679
#define INTEDG2                       680
#define INTEDG1                       681
#define INTEDG0                       682
#define RBPU                          683
#define NOT_RBPU                      684
#define nRBPU                         685
#define INTCON                        686
#define RBIF                          687
#define INT0F                         688
#define INT0IF                        689
#define T0IF                          690
#define TMR0IF                        691
#define RBIE                          692
#define INT0E                         693
#define INT0IE                        694
#define T0IE                          695
#define TMR0IE                        696
#define PEIE                          697
#define PEIE_GIEL                     698
#define GIEL                          699
#define GIE_GIEH                      700
#define GIE                           701
#define GIEH                          702
#define SP0                           703
#define STKPTR                        704
#define SP1                           705
#define SP2                           706
#define SP3                           707
#define SP4                           708
#define STKUNF                        709
#define STKOVF                        710
#define STKFUL                        711

#endif // _PIC18F25K20_H_
