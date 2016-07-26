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

#ifndef _PIC18LF44J10_H_
#define _PIC18LF44J10_H_

#define PORTA                         0
#define ULPWUIN                       1
#define AN0                           2
#define PORTA_RA0                     3
#define AN1                           4
#define PORTA_RA1                     5
#define AN2                           6
#define PORTA_RA2                     7
#define CVREF                         8
#define VREFM                         9
#define AN3                           10
#define PORTA_RA3                     11
#define VREFP                         12
#define PORTA_C2OUT                   13
#define SS1                           14
#define AN4                           15
#define PORTA_RA5                     16
#define LVDIN                         17
#define nSS1                          18
#define NOT_SS1                       19
#define PORTB                         20
#define FLT0                          21
#define INT0                          22
#define PORTB_RB0                     23
#define AN12                          24
#define INT1                          25
#define PORTB_RB1                     26
#define AN10                          27
#define AN8                           28
#define INT2                          29
#define PORTB_RB2                     30
#define AN9                           31
#define PORTB_CCP2                    32
#define CCP2_PA2                      33
#define PORTB_RB3                     34
#define KBI0                          35
#define PORTB_RB4                     36
#define AN11                          37
#define T0CKI                         38
#define PORTB_RB5                     39
#define PORTB_C1OUT                   40
#define KBI1                          41
#define PGC                           42
#define PORTB_RB6                     43
#define KBI2                          44
#define PGD                           45
#define PORTB_RB7                     46
#define KBI3                          47
#define PORTC                         48
#define T1CKI                         49
#define T1OSO                         50
#define PORTC_RC0                     51
#define PORTC_CCP2                    52
#define T1OSI                         53
#define PA2                           54
#define PORTC_RC1                     55
#define CCP1                          56
#define P1A                           57
#define PA1                           58
#define PORTC_RC2                     59
#define SCK1                          60
#define SCL                           61
#define SCL1                          62
#define SCK                           63
#define PORTC_RC3                     64
#define SDI1                          65
#define SDA1                          66
#define SDA                           67
#define SDI                           68
#define PORTC_RC4                     69
#define SDO1                          70
#define SDO                           71
#define PORTC_RC5                     72
#define TX                            73
#define PORTC_RC6                     74
#define CK                            75
#define DT                            76
#define RX                            77
#define PORTC_RC7                     78
#define PORTD                         79
#define SCK2                          80
#define PSP0                          81
#define SCL2                          82
#define PORTD_RD0                     83
#define PSP1                          84
#define SDI2                          85
#define SDA2                          86
#define PORTD_RD1                     87
#define PSP2                          88
#define SDO2                          89
#define PORTD_RD2                     90
#define SS2                           91
#define PSP3                          92
#define NOT_SS2                       93
#define nSS2                          94
#define PORTD_RD3                     95
#define PSP4                          96
#define PORTD_RD4                     97
#define PSP5                          98
#define P1B                           99
#define PORTD_RD5                     100
#define PSP6                          101
#define P1C                           102
#define PORTD_RD6                     103
#define PSP7                          104
#define P1D                           105
#define PORTD_RD7                     106
#define PORTE                         107
#define NOT_RD                        108
#define nRD                           109
#define AN5                           110
#define PD2                           111
#define RD                            112
#define RDE                           113
#define PORTE_RE0                     114
#define AN6                           115
#define NOT_WR                        116
#define PORTE_WR                      117
#define WRE                           118
#define nWR                           119
#define PORTE_RE1                     120
#define PC2                           121
#define nCS                           122
#define NOT_CS                        123
#define CCP10                         124
#define PB2                           125
#define CS                            126
#define PORTE_RE2                     127
#define AN7                           128
#define SSP2CON2                      129
#define SEN2                          130
#define SSP2CON2_SEN                  131
#define ADMSK12                       132
#define SSP2CON2_RSEN                 133
#define RSEN2                         134
#define ADMSK22                       135
#define PEN2                          136
#define SSP2CON2_PEN                  137
#define ADMSK32                       138
#define SSP2CON2_RCEN                 139
#define RCEN2                         140
#define ACKEN2                        141
#define ADMSK42                       142
#define SSP2CON2_ACKEN                143
#define ACKDT2                        144
#define ADMSK52                       145
#define SSP2CON2_ACKDT                146
#define SSP2CON2_ACKSTAT              147
#define ACKSTAT2                      148
#define GCEN2                         149
#define SSP2CON2_GCEN                 150
#define SSP2CON1                      151
#define SSP2CON1_SSPM                 152
#define SSP2CON1_SSPM0                153
#define SSPM02                        154
#define SSPM12                        155
#define SSP2CON1_SSPM1                156
#define SSP2CON1_SSPM2                157
#define SSPM22                        158
#define SSPM32                        159
#define SSP2CON1_SSPM3                160
#define SSP2CON1_CKP                  161
#define CKP2                          162
#define SSPEN2                        163
#define SSP2CON1_SSPEN                164
#define SSPOV2                        165
#define SSP2CON1_SSPOV                166
#define WCOL2                         167
#define SSP2CON1_WCOL                 168
#define SSP2STAT                      169
#define SSP2STAT_BF                   170
#define BF2                           171
#define SSP2STAT_UA                   172
#define UA2                           173
#define SSP2STAT_R_W                  174
#define RW2                           175
#define SSP2STAT_R                    176
#define SSP2STAT_nWRITE               177
#define SSP2STAT_nW                   178
#define READ_WRITE2                   179
#define nW2                           180
#define SSP2STAT_I2C_READ             181
#define I2C_READ2                     182
#define SSP2STAT_R_NOT_W              183
#define R_nW2                         184
#define SSP2STAT_READ_WRITE           185
#define nWRITE2                       186
#define R_W2                          187
#define SSP2STAT_R_nW                 188
#define SSP2STAT_NOT_WRITE            189
#define SSP2STAT_S                    190
#define S2                            191
#define START2                        192
#define SSP2STAT_I2C_START            193
#define I2C_START2                    194
#define P2                            195
#define SSP2STAT_I2C_STOP             196
#define STOP2                         197
#define SSP2STAT_P                    198
#define I2C_STOP2                     199
#define I2C_DAT2                      200
#define SSP2STAT_D                    201
#define DATA_ADDRESS2                 202
#define SSP2STAT_D_NOT_A              203
#define SSP2STAT_I2C_DAT              204
#define D_A2                          205
#define SSP2STAT_NOT_ADDRESS          206
#define SSP2STAT_D_nA                 207
#define SSP2STAT_DATA_ADDRESS         208
#define SSP2STAT_nADDRESS             209
#define nA2                           210
#define DA2                           211
#define nADDRESS2                     212
#define SSP2STAT_nA                   213
#define SSP2STAT_D_A                  214
#define D_nA2                         215
#define SSP2STAT_CKE                  216
#define CKE2                          217
#define SSP2STAT_SMP                  218
#define SMP2                          219
#define SSP2ADD                       220
#define MSK02                         221
#define MSK12                         222
#define MSK22                         223
#define MSK32                         224
#define MSK42                         225
#define MSK52                         226
#define MSK62                         227
#define MSK72                         228
#define LATA                          229
#define LATA0                         230
#define LA0                           231
#define LATA1                         232
#define LA1                           233
#define LATA2                         234
#define LA2                           235
#define LATA3                         236
#define LA3                           237
#define LATA5                         238
#define LA5                           239
#define LATB                          240
#define LB0                           241
#define LATB0                         242
#define LB1                           243
#define LATB1                         244
#define LB2                           245
#define LATB2                         246
#define LB3                           247
#define LATB3                         248
#define LB4                           249
#define LATB4                         250
#define LB5                           251
#define LATB5                         252
#define LB6                           253
#define LATB6                         254
#define LB7                           255
#define LATB7                         256
#define LATC                          257
#define LATC0                         258
#define LC0                           259
#define LATC1                         260
#define LC1                           261
#define LATC2                         262
#define LC2                           263
#define LATC3                         264
#define LC3                           265
#define LATC4                         266
#define LC4                           267
#define LATC5                         268
#define LC5                           269
#define LATC6                         270
#define LC6                           271
#define LATC7                         272
#define LC7                           273
#define LATD                          274
#define LATD0                         275
#define LD0                           276
#define LATD1                         277
#define LD1                           278
#define LATD2                         279
#define LD2                           280
#define LATD3                         281
#define LD3                           282
#define LATD4                         283
#define LD4                           284
#define LATD5                         285
#define LD5                           286
#define LATD6                         287
#define LD6                           288
#define LATD7                         289
#define LD7                           290
#define LATE                          291
#define LATE0                         292
#define LE0                           293
#define LATE1                         294
#define LE1                           295
#define LATE2                         296
#define LE2                           297
#define TRISA                         298
#define TRISA_RA0                     299
#define TRISA0                        300
#define TRISA1                        301
#define TRISA_RA1                     302
#define TRISA2                        303
#define TRISA_RA2                     304
#define TRISA3                        305
#define TRISA_RA3                     306
#define TRISA_RA5                     307
#define TRISA5                        308
#define TRISB                         309
#define TRISB_RB0                     310
#define TRISB0                        311
#define TRISB_RB1                     312
#define TRISB1                        313
#define TRISB_RB2                     314
#define TRISB2                        315
#define TRISB_RB3                     316
#define TRISB3                        317
#define TRISB_RB4                     318
#define TRISB4                        319
#define TRISB_RB5                     320
#define TRISB5                        321
#define TRISB_RB6                     322
#define TRISB6                        323
#define TRISB_RB7                     324
#define TRISB7                        325
#define TRISC                         326
#define TRISC0                        327
#define TRISC_RC0                     328
#define TRISC1                        329
#define TRISC_RC1                     330
#define TRISC2                        331
#define TRISC_RC2                     332
#define TRISC3                        333
#define TRISC_RC3                     334
#define TRISC4                        335
#define TRISC_RC4                     336
#define TRISC5                        337
#define TRISC_RC5                     338
#define TRISC6                        339
#define TRISC_RC6                     340
#define TRISC7                        341
#define TRISC_RC7                     342
#define TRISD                         343
#define TRISD_RD0                     344
#define TRISD0                        345
#define TRISD_RD1                     346
#define TRISD1                        347
#define TRISD_RD2                     348
#define TRISD2                        349
#define TRISD_RD3                     350
#define TRISD3                        351
#define TRISD_RD4                     352
#define TRISD4                        353
#define TRISD_RD5                     354
#define TRISD5                        355
#define TRISD_RD6                     356
#define TRISD6                        357
#define TRISD_RD7                     358
#define TRISD7                        359
#define TRISE                         360
#define TRISE_RE0                     361
#define TRISE0                        362
#define TRISE_RE1                     363
#define TRISE1                        364
#define TRISE_RE2                     365
#define TRISE2                        366
#define RE3                           367
#define PSPMODE                       368
#define IBOV                          369
#define OBF                           370
#define IBF                           371
#define OSCTUNE                       372
#define PLLEN                         373
#define PIE1                          374
#define TMR1IE                        375
#define TMR2IE                        376
#define CCP1IE                        377
#define SSPIE                         378
#define SSP1IE                        379
#define TXIE                          380
#define TX1IE                         381
#define RCIE                          382
#define RC1IE                         383
#define ADIE                          384
#define PSPIE                         385
#define PIR1                          386
#define TMR1IF                        387
#define TMR2IF                        388
#define CCP1IF                        389
#define SSPIF                         390
#define SSP1IF                        391
#define TXIF                          392
#define TX1IF                         393
#define RCIF                          394
#define RC1IF                         395
#define ADIF                          396
#define PSPIF                         397
#define IPR1                          398
#define TMR1IP                        399
#define TMR2IP                        400
#define CCP1IP                        401
#define SSPIP                         402
#define SSP1IP                        403
#define TX1IP                         404
#define TXIP                          405
#define RC1IP                         406
#define RCIP                          407
#define ADIP                          408
#define PSPIP                         409
#define PIE2                          410
#define CCP2IE                        411
#define BCL1IE                        412
#define BCLIE                         413
#define CMIE                          414
#define OSCFIE                        415
#define PIR2                          416
#define CCP2IF                        417
#define BCL1IF                        418
#define BCLIF                         419
#define CMIF                          420
#define OSCFIF                        421
#define IPR2                          422
#define CCP2IP                        423
#define BCLIP                         424
#define BCL1IP                        425
#define CMIP                          426
#define OSCFIP                        427
#define PIE3                          428
#define BCL2IE                        429
#define SSP2IE                        430
#define PIR3                          431
#define BCL2IF                        432
#define SSP2IF                        433
#define IPR3                          434
#define BCL2IP                        435
#define SSP2IP                        436
#define EECON1                        437
#define EECON1_WR                     438
#define WREN                          439
#define WRERR                         440
#define FREE                          441
#define RCSTA                         442
#define RX9D                          443
#define RX9D1                         444
#define RCD8                          445
#define OERR1                         446
#define OERR                          447
#define FERR                          448
#define FERR1                         449
#define ADDEN                         450
#define ADDEN1                        451
#define ADEN                          452
#define CREN1                         453
#define CREN                          454
#define SREN                          455
#define SRENA                         456
#define SREN1                         457
#define RX9                           458
#define RC8_9                         459
#define nRC8                          460
#define NOT_RC8                       461
#define RC9                           462
#define RX91                          463
#define SPEN                          464
#define SPEN1                         465
#define TXSTA                         466
#define TXD8                          467
#define TX9D1                         468
#define TX9D                          469
#define TRMT                          470
#define TRMT1                         471
#define BRGH1                         472
#define BRGH                          473
#define SENDB1                        474
#define SENDB                         475
#define SYNC                          476
#define SYNC1                         477
#define TXEN                          478
#define TXEN1                         479
#define TX91                          480
#define TX8_9                         481
#define TX9                           482
#define NOT_TX8                       483
#define nTX8                          484
#define CSRC1                         485
#define CSRC                          486
#define CMCON                         487
#define CM                            488
#define CMEN0                         489
#define CM0                           490
#define CMEN1                         491
#define CM1                           492
#define CMEN2                         493
#define CM2                           494
#define CIS                           495
#define C1INV                         496
#define C2INV                         497
#define CMCON_C1OUT                   498
#define CMCON_C2OUT                   499
#define CVRCON                        500
#define CVR                           501
#define CVR0                          502
#define CVR1                          503
#define CVR2                          504
#define CVR3                          505
#define CVRSS                         506
#define CVRR                          507
#define CVROEN                        508
#define CVROE                         509
#define CVREN                         510
#define ECCP1AS                       511
#define PSSBD                         512
#define PSSBD0                        513
#define PSSBD1                        514
#define PSSAC                         515
#define PSSAC0                        516
#define PSSAC1                        517
#define ECCPAS0                       518
#define ECCPAS                        519
#define ECCPAS1                       520
#define ECCPAS2                       521
#define ECCPASE                       522
#define ECCP1DEL                      523
#define PDC0                          524
#define PDC                           525
#define PDC1                          526
#define PDC2                          527
#define PDC3                          528
#define PDC4                          529
#define PDC5                          530
#define PDC6                          531
#define PRSEN                         532
#define BAUDCON                       533
#define ABDEN                         534
#define W4E                           535
#define WUE                           536
#define BRG16                         537
#define SCKP                          538
#define RCMT                          539
#define RCIDL                         540
#define ABDOVF                        541
#define CCP2CON                       542
#define CCP2M                         543
#define CCP2M0                        544
#define CCP2M1                        545
#define CCP2M2                        546
#define CCP2M3                        547
#define DC2B0                         548
#define CCP2Y                         549
#define DC2B                          550
#define DC2B1                         551
#define CCP2X                         552
#define ECCP1CON                      553
#define CCP1M0                        554
#define CCP1M                         555
#define CCP1M1                        556
#define CCP1M2                        557
#define CCP1M3                        558
#define CCP1Y                         559
#define DC1B                          560
#define DC1B0                         561
#define CCP1X                         562
#define DC1B1                         563
#define P1M                           564
#define P1M0                          565
#define P1M1                          566
#define ADCON2                        567
#define ADCS0                         568
#define ADCS                          569
#define ADCS1                         570
#define ADCS2                         571
#define ACQT0                         572
#define ACQT                          573
#define ACQT1                         574
#define ACQT2                         575
#define ADFM                          576
#define ADCON1                        577
#define PCFG0                         578
#define PCFG                          579
#define PCFG1                         580
#define PCFG2                         581
#define CHSN3                         582
#define PCFG3                         583
#define VCFG                          584
#define VCFG0                         585
#define VCFG01                        586
#define VCFG11                        587
#define VCFG1                         588
#define ADCON0                        589
#define ADON                          590
#define nDONE                         591
#define GO_nDONE                      592
#define NOT_DONE                      593
#define GODONE                        594
#define GO_DONE                       595
#define DONE                          596
#define GO_NOT_DONE                   597
#define GO                            598
#define CHS0                          599
#define CHS                           600
#define CHS1                          601
#define CHS2                          602
#define CHS3                          603
#define ADCAL                         604
#define SSPCON2                       605
#define SEN1                          606
#define SSPCON2_SEN                   607
#define ADMSK11                       608
#define SSPCON2_RSEN                  609
#define RSEN1                         610
#define ADMSK1                        611
#define SSPCON2_PEN                   612
#define ADMSK21                       613
#define PEN1                          614
#define ADMSK2                        615
#define ADMSK31                       616
#define SSPCON2_RCEN                  617
#define RCEN1                         618
#define ADMSK3                        619
#define ACKEN1                        620
#define ADMSK41                       621
#define SSPCON2_ACKEN                 622
#define ADMSK4                        623
#define ACKDT1                        624
#define ADMSK51                       625
#define SSPCON2_ACKDT                 626
#define ADMSK5                        627
#define SSPCON2_ACKSTAT               628
#define ACKSTAT1                      629
#define GCEN1                         630
#define SSPCON2_GCEN                  631
#define SSPCON1                       632
#define SSPCON1_SSPM                  633
#define SSPM01                        634
#define SSPCON1_SSPM0                 635
#define SSPM11                        636
#define SSPCON1_SSPM1                 637
#define SSPM21                        638
#define SSPCON1_SSPM2                 639
#define SSPM31                        640
#define SSPCON1_SSPM3                 641
#define SSPCON1_CKP                   642
#define CKP1                          643
#define SSPCON1_SSPEN                 644
#define SSPEN1                        645
#define SSPCON1_SSPOV                 646
#define SSPOV1                        647
#define WCOL1                         648
#define SSPCON1_WCOL                  649
#define SSPSTAT                       650
#define BF1                           651
#define SSPSTAT_BF                    652
#define UA1                           653
#define SSPSTAT_UA                    654
#define SSPSTAT_nW                    655
#define SSPSTAT_R                     656
#define SSPSTAT_NOT_WRITE             657
#define RW1                           658
#define SSPSTAT_nWRITE                659
#define NOT_W                         660
#define SSPSTAT_READ_WRITE            661
#define SSPSTAT_I2C_READ              662
#define RW                            663
#define SSPSTAT_R_nW                  664
#define SSPSTAT_R_W                   665
#define SSPSTAT_R_NOT_W               666
#define SSPSTAT_S                     667
#define START                         668
#define START1                        669
#define SSPSTAT_I2C_START             670
#define STOP                          671
#define SSPSTAT_I2C_STOP              672
#define STOP1                         673
#define SSPSTAT_P                     674
#define SSPSTAT_NOT_ADDRESS           675
#define SSPSTAT_nADDRESS              676
#define SSPSTAT_D_NOT_A               677
#define NOT_A                         678
#define SSPSTAT_D                     679
#define SSPSTAT_nA                    680
#define SSPSTAT_I2C_DAT               681
#define SSPSTAT_DATA_ADDRESS          682
#define SSPSTAT_D_A                   683
#define DA1                           684
#define DA                            685
#define SSPSTAT_D_nA                  686
#define SSPSTAT_CKE                   687
#define CKE1                          688
#define SSPSTAT_SMP                   689
#define SMP1                          690
#define SSPADD                        691
#define MSK01                         692
#define MSK0                          693
#define MSK11                         694
#define MSK1                          695
#define MSK21                         696
#define MSK2                          697
#define MSK3                          698
#define MSK31                         699
#define MSK4                          700
#define MSK41                         701
#define MSK51                         702
#define MSK5                          703
#define MSK61                         704
#define MSK6                          705
#define MSK71                         706
#define MSK7                          707
#define T2CON                         708
#define T2CKPS0                       709
#define T2CKPS                        710
#define T2CKPS1                       711
#define TMR2ON                        712
#define T2OUTPS0                      713
#define TOUTPS0                       714
#define TOUTPS                        715
#define T2OUTPS1                      716
#define TOUTPS1                       717
#define T2OUTPS2                      718
#define TOUTPS2                       719
#define T2OUTPS3                      720
#define TOUTPS3                       721
#define PR2                           722
#define WM0                           723
#define WM1                           724
#define WAIT0                         725
#define WAIT1                         726
#define EBDIS                         727
#define T1CON                         728
#define TMR1ON                        729
#define TMR1CS                        730
#define NOT_T1SYNC                    731
#define T1SYNC                        732
#define nT1SYNC                       733
#define T1INSYNC                      734
#define T1OSCEN                       735
#define SOSCEN                        736
#define T1CKPS0                       737
#define T1CKPS                        738
#define T1CKPS1                       739
#define T1RUN                         740
#define RD16                          741
#define T1RD16                        742
#define RCON                          743
#define BOR                           744
#define NOT_BOR                       745
#define nBOR                          746
#define POR                           747
#define nPOR                          748
#define NOT_POR                       749
#define nPD                           750
#define NOT_PD                        751
#define PD                            752
#define NOT_TO                        753
#define nTO                           754
#define TO                            755
#define nRI                           756
#define NOT_RI                        757
#define RI                            758
#define IPEN                          759
#define WDTCON                        760
#define SWDTE                         761
#define SWDTEN                        762
#define OSCCON                        763
#define SCS0                          764
#define SCS                           765
#define SCS1                          766
#define OSTS                          767
#define IDLEN                         768
#define T0CON                         769
#define T0PS                          770
#define T0PS0                         771
#define T0PS1                         772
#define T0PS2                         773
#define PSA                           774
#define T0SE                          775
#define T0CS                          776
#define T08BIT                        777
#define TMR0ON                        778
#define STATUS                        779
#define C                             780
#define CARRY                         781
#define DC                            782
#define ZERO                          783
#define Z                             784
#define OV                            785
#define OVERFLOW                      786
#define N                             787
#define NEGATIVE                      788
#define INTCON3                       789
#define INT1IF                        790
#define INT1F                         791
#define INT2IF                        792
#define INT2F                         793
#define INT1E                         794
#define INT1IE                        795
#define INT2IE                        796
#define INT2E                         797
#define INT1P                         798
#define INT1IP                        799
#define INT2IP                        800
#define INT2P                         801
#define INTCON2                       802
#define RBIP                          803
#define TMR0IP                        804
#define T0IP                          805
#define INTEDG2                       806
#define INTEDG1                       807
#define INTEDG0                       808
#define RBPU                          809
#define NOT_RBPU                      810
#define nRBPU                         811
#define INTCON                        812
#define RBIF                          813
#define INT0F                         814
#define INT0IF                        815
#define T0IF                          816
#define TMR0IF                        817
#define RBIE                          818
#define INT0E                         819
#define INT0IE                        820
#define T0IE                          821
#define TMR0IE                        822
#define PEIE                          823
#define PEIE_GIEL                     824
#define GIEL                          825
#define GIE_GIEH                      826
#define GIE                           827
#define GIEH                          828
#define STKPTR0                       829
#define STKPTR                        830
#define STKPTR1                       831
#define STKPTR2                       832
#define STKPTR3                       833
#define STKPTR4                       834
#define STKUNF                        835
#define STKOVF                        836
#define STKFUL                        837

#endif // _PIC18LF44J10_H_
