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

#ifndef _PIC18C601_H_
#define _PIC18C601_H_

#define PORTA                         0
#define ULPWUIN                       1
#define AN0                           2
#define PORTA_RA0                     3
#define AN1                           4
#define PORTA_RA1                     5
#define AN2                           6
#define PORTA_RA2                     7
#define VREFN                         8
#define VREFM                         9
#define AN3                           10
#define PORTA_RA3                     11
#define VREFP                         12
#define PORTA_RA4                     13
#define T0CKI                         14
#define AN4                           15
#define PORTA_RA5                     16
#define LVDIN                         17
#define SS                            18
#define PORTA_RA6                     19
#define OSC2                          20
#define CLK0                          21
#define PORTB                         22
#define PORTB_RB0                     23
#define INT0                          24
#define PORTB_RB1                     25
#define INT1                          26
#define INT2                          27
#define PORTB_RB2                     28
#define CCP2_PA2                      29
#define PORTB_RB3                     30
#define PORTB_CCP2                    31
#define PORTB_RB4                     32
#define PORTB_RB5                     33
#define PORTB_RB6                     34
#define PORTB_RB7                     35
#define PORTC                         36
#define T1CKI                         37
#define T1OSO                         38
#define PORTC_RC0                     39
#define PORTC_CCP2                    40
#define T1OSI                         41
#define PA2                           42
#define PORTC_RC1                     43
#define CCP1                          44
#define PA1                           45
#define PORTC_RC2                     46
#define SCL                           47
#define SCK                           48
#define PORTC_RC3                     49
#define SDA                           50
#define SDI                           51
#define PORTC_RC4                     52
#define SDO                           53
#define PORTC_RC5                     54
#define TX                            55
#define CK                            56
#define PORTC_RC6                     57
#define DT                            58
#define RX                            59
#define PORTC_RC7                     60
#define PORTD                         61
#define AD0                           62
#define PORTD_RD0                     63
#define PORTD_RD1                     64
#define AD1                           65
#define PORTD_RD2                     66
#define AD2                           67
#define PORTD_RD3                     68
#define AD3                           69
#define AD4                           70
#define PORTD_RD4                     71
#define PORTD_RD5                     72
#define AD5                           73
#define PORTD_RD6                     74
#define AD6                           75
#define PORTD_RD7                     76
#define SS2                           77
#define AD7                           78
#define PORTE                         79
#define PD2                           80
#define AD8                           81
#define RDE                           82
#define PORTE_RE0                     83
#define AD9                           84
#define WRE                           85
#define PORTE_RE1                     86
#define PC2                           87
#define CS                            88
#define CCP10                         89
#define PB2                           90
#define PORTE_RE2                     91
#define AD10                          92
#define PORTE_RE3                     93
#define CCP9E                         94
#define AD11                          95
#define PC3E                          96
#define PB3E                          97
#define PORTE_RE4                     98
#define AD12                          99
#define CCP8E                         100
#define PORTE_RE5                     101
#define CCP7E                         102
#define AD13                          103
#define PC1E                          104
#define CCP6E                         105
#define PORTE_RE6                     106
#define AD14                          107
#define PB1E                          108
#define CCP2E                         109
#define PA2E                          110
#define PORTE_RE7                     111
#define AD15                          112
#define PORTF                         113
#define PORTF_RF0                     114
#define AN5                           115
#define PORTF_RF1                     116
#define C2OUTF                        117
#define AN6                           118
#define PORTF_RF2                     119
#define AN7                           120
#define C1OUTF                        121
#define PORTF_RF3                     122
#define PORTF_CSIO                    123
#define PORTF_RF4                     124
#define A16                           125
#define AD16                          126
#define PORTF_RF5                     127
#define CS1                           128
#define PORTF_RF6                     129
#define LB                            130
#define PORTF_RF7                     131
#define UB                            132
#define PORTG                         133
#define ALE                           134
#define PORTG_RG0                     135
#define OE                            136
#define PORTG_RG1                     137
#define C3OUTG                        138
#define PORTG_RG2                     139
#define WRL                           140
#define WRH                           141
#define PORTG_RG3                     142
#define BA0                           143
#define PORTG_RG4                     144
#define LATA                          145
#define LATA0                         146
#define LA0                           147
#define LATA1                         148
#define LA1                           149
#define LATA2                         150
#define LA2                           151
#define LATA3                         152
#define LA3                           153
#define LATA4                         154
#define LA4                           155
#define LATA5                         156
#define LA5                           157
#define LATB                          158
#define LB0                           159
#define LATB0                         160
#define LB1                           161
#define LATB1                         162
#define LB2                           163
#define LATB2                         164
#define LB3                           165
#define LATB3                         166
#define LB4                           167
#define LATB4                         168
#define LB5                           169
#define LATB5                         170
#define LB6                           171
#define LATB6                         172
#define LB7                           173
#define LATB7                         174
#define LATC                          175
#define LATC0                         176
#define LC0                           177
#define LATC1                         178
#define LC1                           179
#define LATC2                         180
#define LC2                           181
#define LATC3                         182
#define LC3                           183
#define LATC4                         184
#define LC4                           185
#define LATC5                         186
#define LC5                           187
#define LATC6                         188
#define LC6                           189
#define LATC7                         190
#define LC7                           191
#define LATD                          192
#define LATD0                         193
#define LD0                           194
#define LATD1                         195
#define LD1                           196
#define LATD2                         197
#define LD2                           198
#define LATD3                         199
#define LD3                           200
#define LATD4                         201
#define LD4                           202
#define LATD5                         203
#define LD5                           204
#define LATD6                         205
#define LD6                           206
#define LATD7                         207
#define LD7                           208
#define LATE                          209
#define LATE0                         210
#define LE0                           211
#define LATE1                         212
#define LE1                           213
#define LATE2                         214
#define LE2                           215
#define LATE3                         216
#define LE3                           217
#define LATE4                         218
#define LE4                           219
#define LATE5                         220
#define LE5                           221
#define LATE6                         222
#define LE6                           223
#define LATE7                         224
#define LE7                           225
#define LATF                          226
#define LATF0                         227
#define LF0                           228
#define LATF1                         229
#define LF1                           230
#define LF2                           231
#define LATF2                         232
#define LF3                           233
#define LATF3                         234
#define LF4                           235
#define LATF4                         236
#define LF5                           237
#define LATF5                         238
#define LF6                           239
#define LATF6                         240
#define LF7                           241
#define LATF7                         242
#define LATG                          243
#define LATG0                         244
#define LG0                           245
#define LATG1                         246
#define LG1                           247
#define LATG2                         248
#define LG2                           249
#define LATG3                         250
#define LG3                           251
#define LATG4                         252
#define LG4                           253
#define TRISA                         254
#define TRISA_RA0                     255
#define TRISA0                        256
#define TRISA_RA1                     257
#define TRISA1                        258
#define TRISA2                        259
#define TRISA_RA2                     260
#define TRISA_RA3                     261
#define TRISA3                        262
#define TRISA_RA4                     263
#define TRISA4                        264
#define TRISA_RA5                     265
#define TRISA5                        266
#define TRISA_RA6                     267
#define RA7                           268
#define TRISB                         269
#define TRISB_RB0                     270
#define TRISB0                        271
#define TRISB_RB1                     272
#define TRISB1                        273
#define TRISB_RB2                     274
#define TRISB2                        275
#define TRISB_RB3                     276
#define TRISB3                        277
#define TRISB_RB4                     278
#define TRISB4                        279
#define TRISB_RB5                     280
#define TRISB5                        281
#define TRISB_RB6                     282
#define TRISB6                        283
#define TRISB_RB7                     284
#define TRISB7                        285
#define TRISC                         286
#define TRISC0                        287
#define TRISC_RC0                     288
#define TRISC1                        289
#define TRISC_RC1                     290
#define TRISC2                        291
#define TRISC_RC2                     292
#define TRISC3                        293
#define TRISC_RC3                     294
#define TRISC4                        295
#define TRISC_RC4                     296
#define TRISC5                        297
#define TRISC_RC5                     298
#define TRISC6                        299
#define TRISC_RC6                     300
#define TRISC7                        301
#define TRISC_RC7                     302
#define TRISD                         303
#define TRISD_RD0                     304
#define TRISD0                        305
#define TRISD_RD1                     306
#define TRISD1                        307
#define TRISD_RD2                     308
#define TRISD2                        309
#define TRISD_RD3                     310
#define TRISD3                        311
#define TRISD_RD4                     312
#define TRISD4                        313
#define TRISD_RD5                     314
#define TRISD5                        315
#define TRISD_RD6                     316
#define TRISD6                        317
#define TRISD_RD7                     318
#define TRISD7                        319
#define TRISE                         320
#define TRISE_RE0                     321
#define TRISE0                        322
#define TRISE1                        323
#define TRISE_RE1                     324
#define TRISE2                        325
#define TRISE_RE2                     326
#define TRISE_RE3                     327
#define TRISE3                        328
#define TRISE_RE4                     329
#define TRISE4                        330
#define TRISE_RE5                     331
#define TRISE5                        332
#define TRISE_RE6                     333
#define TRISE6                        334
#define TRISE_RE7                     335
#define TRISE7                        336
#define TRISF                         337
#define TRISF0                        338
#define TRISF_RF0                     339
#define TRISF_RF1                     340
#define TRISF1                        341
#define TRISF_RF2                     342
#define TRISF2                        343
#define TRISF3                        344
#define TRISF_RF3                     345
#define TRISF_RF4                     346
#define TRISF4                        347
#define TRISF_RF5                     348
#define TRISF5                        349
#define TRISF_RF6                     350
#define TRISF6                        351
#define TRISF7                        352
#define TRISF_RF7                     353
#define TRISG                         354
#define TRISG0                        355
#define TRISG_RG0                     356
#define TRISG1                        357
#define TRISG_RG1                     358
#define TRISG2                        359
#define TRISG_RG2                     360
#define TRISG_RG3                     361
#define TRISG3                        362
#define TRISG4                        363
#define TRISG_RG4                     364
#define MEMCON                        365
#define WM                            366
#define WM0                           367
#define WM1                           368
#define WAIT0                         369
#define WAIT                          370
#define WAIT1                         371
#define PGRM                          372
#define EBDIS                         373
#define PIE1                          374
#define TMR1IE                        375
#define TMR2IE                        376
#define CCP1IE                        377
#define SSPIE                         378
#define TXIE                          379
#define TX1IE                         380
#define RCIE                          381
#define RC1IE                         382
#define ADIE                          383
#define PIR1                          384
#define TMR1IF                        385
#define TMR2IF                        386
#define CCP1IF                        387
#define SSPIF                         388
#define TXIF                          389
#define TX1IF                         390
#define RCIF                          391
#define RC1IF                         392
#define ADIF                          393
#define IPR1                          394
#define TMR1IP                        395
#define TMR2IP                        396
#define CCP1IP                        397
#define SSPIP                         398
#define TX1IP                         399
#define TXIP                          400
#define RC1IP                         401
#define RCIP                          402
#define ADIP                          403
#define PIE2                          404
#define CCP2IE                        405
#define TMR3IE                        406
#define LVDIE                         407
#define BCLIE                         408
#define PIR2                          409
#define CCP2IF                        410
#define TMR3IF                        411
#define LVDIF                         412
#define BCLIF                         413
#define IPR2                          414
#define CCP2IP                        415
#define TMR3IP                        416
#define LVDIP                         417
#define BCLIP                         418
#define CSELIO                        419
#define CSELIO_CSIO                   420
#define CSIO0                         421
#define CSIO1                         422
#define CSIO2                         423
#define CSIO3                         424
#define CSIO4                         425
#define CSIO5                         426
#define CSIO6                         427
#define CSIO7                         428
#define CSEL2                         429
#define CSL                           430
#define CSL0                          431
#define CSL1                          432
#define CSL2                          433
#define CSL3                          434
#define CSL4                          435
#define CSL5                          436
#define CSL6                          437
#define CSL7                          438
#define RCSTA                         439
#define RCD8                          440
#define RX9D                          441
#define OERR                          442
#define FERR                          443
#define ADDEN                         444
#define ADEN                          445
#define CREN                          446
#define SRENA                         447
#define SREN                          448
#define RC9                           449
#define RC8_9                         450
#define RX9                           451
#define SPEN                          452
#define TXSTA                         453
#define TXD8                          454
#define TX9D1                         455
#define TX9D                          456
#define TRMT                          457
#define TRMT1                         458
#define BRGH1                         459
#define BRGH                          460
#define SYNC                          461
#define SYNC1                         462
#define TXEN1                         463
#define TXEN                          464
#define TX91                          465
#define TX8_9                         466
#define TX9                           467
#define CSRC1                         468
#define CSRC                          469
#define PSPCON                        470
#define CMLK0                         471
#define CMLK                          472
#define CMLK1                         473
#define T3CON                         474
#define TMR3ON                        475
#define TMR3CS                        476
#define nT3SYNC                       477
#define NOT_T3SYNC                    478
#define T3SYNC                        479
#define T3INSYNC                      480
#define SOSCEN3                       481
#define T3CCP1                        482
#define T3CKPS                        483
#define T3CKPS0                       484
#define T3CKPS1                       485
#define T3CCP2                        486
#define T3CON_RD16                    487
#define RD163                         488
#define T3RD16                        489
#define CCP2CON                       490
#define CCP2M                         491
#define CCP2M0                        492
#define CCP2M1                        493
#define CCP2M2                        494
#define CCP2M3                        495
#define DC2B0                         496
#define CCP2Y                         497
#define DC2B                          498
#define DC2B1                         499
#define DCCPX                         500
#define CCP2X                         501
#define CCP1CON                       502
#define CCP1M0                        503
#define CCP1M                         504
#define CCP1M1                        505
#define CCP1M2                        506
#define CCP1M3                        507
#define CCP1Y                         508
#define DC1B                          509
#define DC1B0                         510
#define CCP1X                         511
#define DC1B1                         512
#define ADCON2                        513
#define ADCS                          514
#define ADCS0                         515
#define ADCS1                         516
#define ADCS2                         517
#define ADFM                          518
#define ADCON1                        519
#define PCFG0                         520
#define PCFG                          521
#define PCFG1                         522
#define PCFG2                         523
#define CHSN3                         524
#define PCFG3                         525
#define VCFG                          526
#define VCFG0                         527
#define VCFG01                        528
#define VCFG11                        529
#define VCFG1                         530
#define ADCON0                        531
#define ADON                          532
#define nDONE                         533
#define GO_nDONE                      534
#define NOT_DONE                      535
#define GODONE                        536
#define GO_DONE                       537
#define DONE                          538
#define GO_NOT_DONE                   539
#define GO                            540
#define CHS                           541
#define CHS0                          542
#define CHS1                          543
#define CHS2                          544
#define CHS3                          545
#define SSPCON2                       546
#define SEN                           547
#define RSEN                          548
#define PEN                           549
#define RCEN                          550
#define ACKEN                         551
#define ACKDT                         552
#define ACKSTAT                       553
#define GCEN                          554
#define SSPCON1                       555
#define SSPM0                         556
#define SSPM                          557
#define SSPM1                         558
#define SSPM2                         559
#define SSPM3                         560
#define CKP                           561
#define SSPEN                         562
#define SSPOV                         563
#define WCOL                          564
#define SSPSTAT                       565
#define BF                            566
#define UA                            567
#define R_NOT_W                       568
#define READ_WRITE                    569
#define NOT_W                         570
#define R_W                           571
#define RW                            572
#define R                             573
#define NOT_WRITE                     574
#define nW                            575
#define nWRITE                        576
#define R_nW                          577
#define I2C_READ                      578
#define START                         579
#define S                             580
#define I2C_START                     581
#define STOP                          582
#define I2C_STOP                      583
#define P                             584
#define NOT_A                         585
#define I2C_DATA                      586
#define nA                            587
#define D_nA                          588
#define D                             589
#define DA                            590
#define DATA_ADDRESS                  591
#define D_A                           592
#define D_NOT_A                       593
#define NOT_ADDRESS                   594
#define nADDRESS                      595
#define I2C_DAT                       596
#define CKE                           597
#define SMP                           598
#define T2CON                         599
#define T2CKPS0                       600
#define T2CKPS                        601
#define T2CKPS1                       602
#define TMR2ON                        603
#define TOUTPS0                       604
#define TOUTPS                        605
#define TOUTPS1                       606
#define TOUTPS2                       607
#define TOUTPS3                       608
#define T1CON                         609
#define TMR1ON                        610
#define TMR1CS                        611
#define NOT_T1SYNC                    612
#define T1SYNC                        613
#define nT1SYNC                       614
#define T1INSYNC                      615
#define T1OSCEN                       616
#define SOSCEN                        617
#define T1CKPS0                       618
#define T1CKPS                        619
#define T1CKPS1                       620
#define T1RD16                        621
#define T1CON_RD16                    622
#define RCON                          623
#define NOT_BOR                       624
#define nBOR                          625
#define POR                           626
#define nPOR                          627
#define NOT_POR                       628
#define nPD                           629
#define NOT_PD                        630
#define PD                            631
#define NOT_TO                        632
#define nTO                           633
#define TO                            634
#define nRI                           635
#define NOT_RI                        636
#define RI                            637
#define nIPEN                         638
#define IPEN                          639
#define NOT_IPEN                      640
#define WDTCON                        641
#define SWDTEN                        642
#define SWDTE                         643
#define SWDPS0                        644
#define WDPS0                         645
#define SWDPS                         646
#define SWDPS1                        647
#define WDPS1                         648
#define SWDPS2                        649
#define WDPS2                         650
#define LVDCON                        651
#define LVV0                          652
#define LVDL0                         653
#define LVDL                          654
#define LVV1                          655
#define LVDL1                         656
#define LVV2                          657
#define LVDL2                         658
#define LVV3                          659
#define LVDL3                         660
#define LVDEN                         661
#define IRVST                         662
#define OSCCON                        663
#define SCS0                          664
#define SCS                           665
#define SCS1                          666
#define PLLEN                         667
#define LOCK                          668
#define T0CON                         669
#define T0PS                          670
#define T0PS0                         671
#define T0PS1                         672
#define T0PS2                         673
#define PSA                           674
#define T0PS3                         675
#define T0SE                          676
#define T0CS                          677
#define T08BIT                        678
#define T016BIT                       679
#define TMR0ON                        680
#define STATUS                        681
#define C                             682
#define CARRY                         683
#define DC                            684
#define ZERO                          685
#define Z                             686
#define OV                            687
#define OVERFLOW                      688
#define N                             689
#define NEGATIVE                      690
#define INTCON3                       691
#define INT1IF                        692
#define INT1F                         693
#define INT2IF                        694
#define INT2F                         695
#define INT1E                         696
#define INT1IE                        697
#define INT2IE                        698
#define INT2E                         699
#define INT1P                         700
#define INT1IP                        701
#define INT2IP                        702
#define INT2P                         703
#define INTCON2                       704
#define RBIP                          705
#define TMR0IP                        706
#define T0IP                          707
#define INTEDG2                       708
#define INTEDG1                       709
#define INTEDG0                       710
#define RBPU                          711
#define NOT_RBPU                      712
#define nRBPU                         713
#define INTCON                        714
#define RBIF                          715
#define INT0F                         716
#define INT0IF                        717
#define T0IF                          718
#define TMR0IF                        719
#define RBIE                          720
#define INT0E                         721
#define INT0IE                        722
#define T0IE                          723
#define TMR0IE                        724
#define PEIE                          725
#define PEIE_GIEL                     726
#define GIEL                          727
#define GIE_GIEH                      728
#define GIE                           729
#define GIEH                          730
#define STKPTR0                       731
#define STKPTR                        732
#define SP0                           733
#define STKPTR1                       734
#define SP1                           735
#define STKPTR2                       736
#define SP2                           737
#define SP3                           738
#define STKPTR3                       739
#define STKPTR4                       740
#define SP4                           741
#define STKUNF                        742
#define STKOVF                        743
#define STKFUL                        744

#endif // _PIC18C601_H_
