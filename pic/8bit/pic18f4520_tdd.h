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

#ifndef _PIC18F4520_H_
#define _PIC18F4520_H_

#define PORTA                         0
#define AN0                           1
#define ULPWUIN                       2
#define PORTA_RA0                     3
#define AN1                           4
#define PORTA_RA1                     5
#define AN2                           6
#define PORTA_RA2                     7
#define CVREF                         8
#define VREFN                         9
#define AN3                           10
#define PORTA_RA3                     11
#define VREFP                         12
#define PORTA_RA4                     13
#define PORTA_C1OUT                   14
#define T0CKI                         15
#define PORTA_C2OUT                   16
#define AN4                           17
#define PORTA_RA5                     18
#define LVDIN                         19
#define nSS                           20
#define NOT_SS                        21
#define SS                            22
#define HLVDIN                        23
#define CLKO                          24
#define PORTA_RA6                     25
#define OSC2                          26
#define CLKI                          27
#define PORTA_RA7                     28
#define OSC1                          29
#define RJPU                          30
#define PORTB                         31
#define FLT0                          32
#define INT0                          33
#define PORTB_RB0                     34
#define AN12                          35
#define INT1                          36
#define PORTB_RB1                     37
#define AN10                          38
#define AN8                           39
#define INT2                          40
#define PORTB_RB2                     41
#define AN9                           42
#define PORTB_CCP2                    43
#define CCP2_PA2                      44
#define PORTB_RB3                     45
#define KBI0                          46
#define PORTB_RB4                     47
#define AN11                          48
#define PGM                           49
#define PORTB_RB5                     50
#define KBI1                          51
#define PGC                           52
#define PORTB_RB6                     53
#define KBI2                          54
#define PGD                           55
#define PORTB_RB7                     56
#define KBI3                          57
#define PORTC                         58
#define T13CKI                        59
#define T1CKI                         60
#define T1OSO                         61
#define PORTC_RC0                     62
#define PORTC_CCP2                    63
#define T1OSI                         64
#define PA2                           65
#define PORTC_RC1                     66
#define CCP1                          67
#define P1A                           68
#define PA1                           69
#define PORTC_RC2                     70
#define SCL                           71
#define SCK                           72
#define PORTC_RC3                     73
#define SDA                           74
#define SDI                           75
#define PORTC_RC4                     76
#define SDO                           77
#define PORTC_RC5                     78
#define TX                            79
#define CK                            80
#define PORTC_RC6                     81
#define DT                            82
#define RX                            83
#define PORTC_RC7                     84
#define PORTD                         85
#define PSP0                          86
#define PORTD_RD0                     87
#define PSP1                          88
#define PORTD_RD1                     89
#define PSP2                          90
#define PORTD_RD2                     91
#define PSP3                          92
#define PORTD_RD3                     93
#define PSP4                          94
#define PORTD_RD4                     95
#define PSP5                          96
#define P1B                           97
#define PORTD_RD5                     98
#define PSP6                          99
#define P1C                           100
#define PORTD_RD6                     101
#define SS2                           102
#define PSP7                          103
#define P1D                           104
#define PORTD_RD7                     105
#define PORTE                         106
#define NOT_RD                        107
#define nRD                           108
#define AN5                           109
#define PORTE_RD                      110
#define PD2                           111
#define RDE                           112
#define PORTE_RE0                     113
#define AN6                           114
#define WRE                           115
#define PORTE_WR                      116
#define NOT_WR                        117
#define nWR                           118
#define PORTE_RE1                     119
#define PC2                           120
#define nCS                           121
#define NOT_CS                        122
#define AN7                           123
#define CCP10                         124
#define PB2                           125
#define CS                            126
#define PORTE_RE2                     127
#define VPP                           128
#define CCP9E                         129
#define PORTE_RE3                     130
#define NOT_MCLR                      131
#define MCLR                          132
#define nMCLR                         133
#define PC3E                          134
#define LATA                          135
#define LATA0                         136
#define LA0                           137
#define LATA1                         138
#define LA1                           139
#define LATA2                         140
#define LA2                           141
#define LATA3                         142
#define LA3                           143
#define LATA4                         144
#define LA4                           145
#define LATA5                         146
#define LA5                           147
#define LATA6                         148
#define LA6                           149
#define LATA7                         150
#define LA7                           151
#define LATB                          152
#define LB0                           153
#define LATB0                         154
#define LB1                           155
#define LATB1                         156
#define LB2                           157
#define LATB2                         158
#define LB3                           159
#define LATB3                         160
#define LB4                           161
#define LATB4                         162
#define LB5                           163
#define LATB5                         164
#define LB6                           165
#define LATB6                         166
#define LB7                           167
#define LATB7                         168
#define LATC                          169
#define LATC0                         170
#define LC0                           171
#define LATC1                         172
#define LC1                           173
#define LATC2                         174
#define LC2                           175
#define LATC3                         176
#define LC3                           177
#define LATC4                         178
#define LC4                           179
#define LATC5                         180
#define LC5                           181
#define LATC6                         182
#define LC6                           183
#define LATC7                         184
#define LC7                           185
#define LATD                          186
#define LATD0                         187
#define LD0                           188
#define LATD1                         189
#define LD1                           190
#define LATD2                         191
#define LD2                           192
#define LATD3                         193
#define LD3                           194
#define LATD4                         195
#define LD4                           196
#define LATD5                         197
#define LD5                           198
#define LATD6                         199
#define LD6                           200
#define LATD7                         201
#define LD7                           202
#define LATE                          203
#define LATE0                         204
#define LE0                           205
#define LATE1                         206
#define LE1                           207
#define LATE2                         208
#define LE2                           209
#define TRISA                         210
#define TRISA0                        211
#define TRISA_RA0                     212
#define TRISA1                        213
#define TRISA_RA1                     214
#define TRISA2                        215
#define TRISA_RA2                     216
#define TRISA3                        217
#define TRISA_RA3                     218
#define TRISA_RA4                     219
#define TRISA4                        220
#define TRISA_RA5                     221
#define TRISA5                        222
#define TRISA_RA6                     223
#define TRISA6                        224
#define TRISA_RA7                     225
#define TRISA7                        226
#define TRISB                         227
#define TRISB_RB0                     228
#define TRISB0                        229
#define TRISB_RB1                     230
#define TRISB1                        231
#define TRISB_RB2                     232
#define TRISB2                        233
#define TRISB_RB3                     234
#define TRISB3                        235
#define TRISB_RB4                     236
#define TRISB4                        237
#define TRISB_RB5                     238
#define TRISB5                        239
#define TRISB_RB6                     240
#define TRISB6                        241
#define TRISB_RB7                     242
#define TRISB7                        243
#define TRISC                         244
#define TRISC0                        245
#define TRISC_RC0                     246
#define TRISC1                        247
#define TRISC_RC1                     248
#define TRISC2                        249
#define TRISC_RC2                     250
#define TRISC3                        251
#define TRISC_RC3                     252
#define TRISC4                        253
#define TRISC_RC4                     254
#define TRISC5                        255
#define TRISC_RC5                     256
#define TRISC6                        257
#define TRISC_RC6                     258
#define TRISC7                        259
#define TRISC_RC7                     260
#define TRISD                         261
#define TRISD_RD0                     262
#define TRISD0                        263
#define TRISD_RD1                     264
#define TRISD1                        265
#define TRISD_RD2                     266
#define TRISD2                        267
#define TRISD_RD3                     268
#define TRISD3                        269
#define TRISD_RD4                     270
#define TRISD4                        271
#define TRISD_RD5                     272
#define TRISD5                        273
#define TRISD_RD6                     274
#define TRISD6                        275
#define TRISD_RD7                     276
#define TRISD7                        277
#define TRISE                         278
#define TRISE_RE0                     279
#define TRISE0                        280
#define TRISE_RE1                     281
#define TRISE1                        282
#define TRISE_RE2                     283
#define TRISE2                        284
#define TRISE_RE3                     285
#define PSPMODE                       286
#define IBOV                          287
#define OBF                           288
#define IBF                           289
#define OSCTUNE                       290
#define TUN0                          291
#define TUN                           292
#define TUN1                          293
#define TUN2                          294
#define TUN3                          295
#define TUN4                          296
#define PLLEN                         297
#define INTSRC                        298
#define PIE1                          299
#define TMR1IE                        300
#define TMR2IE                        301
#define CCP1IE                        302
#define SSPIE                         303
#define TXIE                          304
#define TX1IE                         305
#define RCIE                          306
#define RC1IE                         307
#define ADIE                          308
#define PSPIE                         309
#define PIR1                          310
#define TMR1IF                        311
#define TMR2IF                        312
#define CCP1IF                        313
#define SSPIF                         314
#define TXIF                          315
#define TX1IF                         316
#define RCIF                          317
#define RC1IF                         318
#define ADIF                          319
#define PSPIF                         320
#define IPR1                          321
#define TMR1IP                        322
#define TMR2IP                        323
#define CCP1IP                        324
#define SSPIP                         325
#define TX1IP                         326
#define TXIP                          327
#define RC1IP                         328
#define RCIP                          329
#define ADIP                          330
#define PSPIP                         331
#define PIE2                          332
#define CCP2IE                        333
#define TMR3IE                        334
#define HLVDIE                        335
#define LVDIE                         336
#define BCLIE                         337
#define EEIE                          338
#define CMIE                          339
#define OSCFIE                        340
#define PIR2                          341
#define CCP2IF                        342
#define TMR3IF                        343
#define HLVDIF                        344
#define LVDIF                         345
#define BCLIF                         346
#define EEIF                          347
#define CMIF                          348
#define OSCFIF                        349
#define IPR2                          350
#define CCP2IP                        351
#define TMR3IP                        352
#define HLVDIP                        353
#define LVDIP                         354
#define BCLIP                         355
#define EEIP                          356
#define CMIP                          357
#define OSCFIP                        358
#define EECON1                        359
#define EECON1_RD                     360
#define EECON1_WR                     361
#define WREN                          362
#define WRERR                         363
#define FREE                          364
#define CFGS                          365
#define EEFS                          366
#define EEPGD                         367
#define RCSTA                         368
#define RCD8                          369
#define RX9D                          370
#define OERR                          371
#define FERR                          372
#define ADDEN                         373
#define ADEN                          374
#define CREN                          375
#define SRENA                         376
#define SREN                          377
#define RC9                           378
#define RC8_9                         379
#define RX9                           380
#define SPEN                          381
#define TXSTA                         382
#define TXD8                          383
#define TX9D1                         384
#define TX9D                          385
#define TRMT                          386
#define TRMT1                         387
#define BRGH1                         388
#define BRGH                          389
#define SENDB1                        390
#define SENDB                         391
#define SYNC                          392
#define SYNC1                         393
#define TXEN1                         394
#define TXEN                          395
#define TX91                          396
#define TX8_9                         397
#define TX9                           398
#define CSRC1                         399
#define CSRC                          400
#define T3CON                         401
#define TMR3ON                        402
#define TMR3CS                        403
#define nT3SYNC                       404
#define NOT_T3SYNC                    405
#define T3SYNC                        406
#define SOSCEN3                       407
#define T3CCP1                        408
#define T3CKPS                        409
#define T3CKPS0                       410
#define T3CKPS1                       411
#define T3CCP2                        412
#define T3CON_RD16                    413
#define RD163                         414
#define T3RD16                        415
#define CMCON                         416
#define CM                            417
#define CMEN0                         418
#define CM0                           419
#define CMEN1                         420
#define CM1                           421
#define CMEN2                         422
#define CM2                           423
#define CIS                           424
#define C1INV                         425
#define C2INV                         426
#define CMCON_C1OUT                   427
#define CMCON_C2OUT                   428
#define CVRCON                        429
#define CVR                           430
#define CVR0                          431
#define CVR1                          432
#define CVR2                          433
#define CVR3                          434
#define CVRSS                         435
#define CVRR                          436
#define CVROEN                        437
#define CVROE                         438
#define CVREN                         439
#define ECCP1AS                       440
#define PSSBD                         441
#define PSSBD0                        442
#define PSSBD1                        443
#define PSSAC                         444
#define PSSAC0                        445
#define PSSAC1                        446
#define ECCPAS0                       447
#define ECCPAS                        448
#define ECCPAS1                       449
#define ECCPAS2                       450
#define ECCPASE                       451
#define PWM1CON                       452
#define PDC0                          453
#define PDC                           454
#define PDC1                          455
#define PDC2                          456
#define PDC3                          457
#define PDC4                          458
#define PDC5                          459
#define PDC6                          460
#define PRSEN                         461
#define BAUDCON                       462
#define ABDEN                         463
#define W4E                           464
#define WUE                           465
#define BRG16                         466
#define TXCKP                         467
#define SCKP                          468
#define RXCKP                         469
#define RXDTP                         470
#define RCMT                          471
#define RCIDL                         472
#define ABDOVF                        473
#define CCP2CON                       474
#define CCP2M                         475
#define CCP2M0                        476
#define CCP2M1                        477
#define CCP2M2                        478
#define CCP2M3                        479
#define DC2B0                         480
#define CCP2Y                         481
#define DC2B                          482
#define DC2B1                         483
#define CCP2X                         484
#define CCP1CON                       485
#define CCP1M0                        486
#define CCP1M                         487
#define CCP1M1                        488
#define CCP1M2                        489
#define CCP1M3                        490
#define CCP1Y                         491
#define DC1B                          492
#define DC1B0                         493
#define CCP1X                         494
#define DC1B1                         495
#define P1M                           496
#define P1M0                          497
#define P1M1                          498
#define ADCON2                        499
#define ADCS0                         500
#define ADCS                          501
#define ADCS1                         502
#define ADCS2                         503
#define ACQT0                         504
#define ACQT                          505
#define ACQT1                         506
#define ACQT2                         507
#define ADFM                          508
#define ADCON1                        509
#define PCFG0                         510
#define PCFG                          511
#define PCFG1                         512
#define PCFG2                         513
#define CHSN3                         514
#define PCFG3                         515
#define VCFG                          516
#define VCFG0                         517
#define VCFG01                        518
#define VCFG11                        519
#define VCFG1                         520
#define ADCON0                        521
#define ADON                          522
#define nDONE                         523
#define GO_nDONE                      524
#define NOT_DONE                      525
#define GODONE                        526
#define GO_DONE                       527
#define DONE                          528
#define GO_NOT_DONE                   529
#define GO                            530
#define CHS                           531
#define CHS0                          532
#define CHS1                          533
#define CHS2                          534
#define CHS3                          535
#define SSPCON2                       536
#define SEN                           537
#define RSEN                          538
#define ADMSK1                        539
#define PEN                           540
#define ADMSK2                        541
#define RCEN                          542
#define ADMSK3                        543
#define ACKEN                         544
#define ADMSK4                        545
#define ADMSK5                        546
#define ACKDT                         547
#define ACKSTAT                       548
#define GCEN                          549
#define SSPCON1                       550
#define SSPM0                         551
#define SSPM                          552
#define SSPM1                         553
#define SSPM2                         554
#define SSPM3                         555
#define CKP                           556
#define SSPEN                         557
#define SSPOV                         558
#define WCOL                          559
#define SSPSTAT                       560
#define BF                            561
#define UA                            562
#define R_NOT_W                       563
#define NOT_W                         564
#define nW                            565
#define RW                            566
#define nWRITE                        567
#define R                             568
#define W                             569
#define NOT_WRITE                     570
#define R_nW                          571
#define R_W                           572
#define START                         573
#define S                             574
#define STOP                          575
#define P                             576
#define A                             577
#define NOT_A                         578
#define nA                            579
#define D_A                           580
#define D_nA                          581
#define D                             582
#define DA                            583
#define D_NOT_A                       584
#define NOT_ADDRESS                   585
#define nADDRESS                      586
#define CKE                           587
#define SMP                           588
#define T2CON                         589
#define T2CKPS0                       590
#define T2CKPS                        591
#define T2CKPS1                       592
#define TMR2ON                        593
#define T2OUTPS0                      594
#define T2OUTPS                       595
#define TOUTPS0                       596
#define T2OUTPS1                      597
#define TOUTPS1                       598
#define T2OUTPS2                      599
#define TOUTPS2                       600
#define T2OUTPS3                      601
#define TOUTPS3                       602
#define PR2                           603
#define WM0                           604
#define WM1                           605
#define WAIT0                         606
#define WAIT1                         607
#define EBDIS                         608
#define T1CON                         609
#define TMR1ON                        610
#define TMR1CS                        611
#define NOT_T1SYNC                    612
#define T1SYNC                        613
#define nT1SYNC                       614
#define T1OSCEN                       615
#define SOSCEN                        616
#define T1CKPS0                       617
#define T1CKPS                        618
#define T1CKPS1                       619
#define T1RUN                         620
#define T1CON_RD16                    621
#define T1RD16                        622
#define RCON                          623
#define BOR                           624
#define NOT_BOR                       625
#define nBOR                          626
#define POR                           627
#define nPOR                          628
#define NOT_POR                       629
#define PD                            630
#define nPD                           631
#define NOT_PD                        632
#define NOT_TO                        633
#define nTO                           634
#define TO                            635
#define nRI                           636
#define NOT_RI                        637
#define RI                            638
#define SBOREN                        639
#define IPEN                          640
#define WDTCON                        641
#define SWDTE                         642
#define SWDTEN                        643
#define HLVDCON                       644
#define HLVDL                         645
#define HLVDL0                        646
#define LVV0                          647
#define LVDL0                         648
#define HLVDL1                        649
#define LVDL1                         650
#define LVV1                          651
#define HLVDL2                        652
#define LVV2                          653
#define LVDL2                         654
#define HLVDL3                        655
#define LVV3                          656
#define LVDL3                         657
#define HLVDEN                        658
#define LVDEN                         659
#define BGST                          660
#define IRVST                         661
#define IVRST                         662
#define VDIRMAG                       663
#define OSCCON                        664
#define SCS0                          665
#define SCS                           666
#define SCS1                          667
#define FLTS                          668
#define IOFS                          669
#define OSTS                          670
#define IRCF                          671
#define IRCF0                         672
#define IRCF1                         673
#define IRCF2                         674
#define IDLEN                         675
#define T0CON                         676
#define T0PS                          677
#define T0PS0                         678
#define T0PS1                         679
#define T0PS2                         680
#define PSA                           681
#define T0PS3                         682
#define T0SE                          683
#define T0CS                          684
#define T08BIT                        685
#define T016BIT                       686
#define TMR0ON                        687
#define STATUS                        688
#define C                             689
#define CARRY                         690
#define DC                            691
#define ZERO                          692
#define Z                             693
#define OV                            694
#define OVERFLOW                      695
#define N                             696
#define NEGATIVE                      697
#define INTCON3                       698
#define INT1IF                        699
#define INT1F                         700
#define INT2IF                        701
#define INT2F                         702
#define INT1E                         703
#define INT1IE                        704
#define INT2IE                        705
#define INT2E                         706
#define INT1P                         707
#define INT1IP                        708
#define INT2IP                        709
#define INT2P                         710
#define INTCON2                       711
#define RBIP                          712
#define TMR0IP                        713
#define INTEDG2                       714
#define INTEDG1                       715
#define INTEDG0                       716
#define RBPU                          717
#define NOT_RBPU                      718
#define nRBPU                         719
#define INTCON                        720
#define RBIF                          721
#define INT0F                         722
#define INT0IF                        723
#define T0IF                          724
#define TMR0IF                        725
#define RBIE                          726
#define INT0E                         727
#define INT0IE                        728
#define T0IE                          729
#define TMR0IE                        730
#define PEIE                          731
#define PEIE_GIEL                     732
#define GIEL                          733
#define GIE_GIEH                      734
#define GIE                           735
#define GIEH                          736
#define SP0                           737
#define STKPTR                        738
#define SP1                           739
#define SP2                           740
#define SP3                           741
#define SP4                           742
#define STKUNF                        743
#define STKOVF                        744
#define STKFUL                        745

#endif // _PIC18F4520_H_