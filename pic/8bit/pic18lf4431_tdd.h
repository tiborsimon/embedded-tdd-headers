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

#ifndef _PIC18LF4431_H_
#define _PIC18LF4431_H_

#define DFLTCON                       0
#define FLTCK0                        1
#define FLTCK                         2
#define FLTCK1                        3
#define FLTCK2                        4
#define FLT1EN                        5
#define FLT2EN                        6
#define FLT3EN                        7
#define FLT4EN                        8
#define CAP3CON                       9
#define CAP3M                         10
#define CAP3M0                        11
#define CAP3M1                        12
#define CAP3M2                        13
#define CAP3M3                        14
#define CAP3TMR                       15
#define CAP3REN                       16
#define CAP2CON                       17
#define CAP2M0                        18
#define CAP2M                         19
#define CAP2M1                        20
#define CAP2M2                        21
#define CAP2M3                        22
#define CAP2TMR                       23
#define CAP2REN                       24
#define CAP1CON                       25
#define CAP1M                         26
#define CAP1M0                        27
#define CAP1M1                        28
#define CAP1M2                        29
#define CAP1M3                        30
#define CAP1TMR                       31
#define CAP1REN                       32
#define OVDCONS                       33
#define POUT                          34
#define POUT0                         35
#define POUT1                         36
#define POUT2                         37
#define POUT3                         38
#define POUT4                         39
#define POUT5                         40
#define POUT6                         41
#define POUT7                         42
#define OVDCOND                       43
#define POVD                          44
#define POVD0                         45
#define POVD1                         46
#define POVD2                         47
#define POVD3                         48
#define POVD4                         49
#define POVD5                         50
#define POVD6                         51
#define POVD7                         52
#define FLTCONFIG                     53
#define FLTAEN                        54
#define FLTAMOD                       55
#define FLTAS                         56
#define FLTCON                        57
#define FLTBEN                        58
#define FLTBMOD                       59
#define FLTBS                         60
#define BRFEN                         61
#define DTCON                         62
#define DTA                           63
#define DTA0                          64
#define DT0                           65
#define DTA1                          66
#define DT1                           67
#define DTA2                          68
#define DT2                           69
#define DTA3                          70
#define DT3                           71
#define DTA4                          72
#define DT4                           73
#define DTA5                          74
#define DT5                           75
#define DTAPS0                        76
#define DTPS0                         77
#define DTAPS                         78
#define DTAPS1                        79
#define DTPS1                         80
#define PWMCON1                       81
#define OSYNC                         82
#define UDIS                          83
#define SEVTDIR                       84
#define SEVOPS0                       85
#define SEVOPS                        86
#define SEVOPS1                       87
#define SEVOPS2                       88
#define SEVOPS3                       89
#define PWMCON0                       90
#define PMOD                          91
#define PMOD0                         92
#define PMOD1                         93
#define PMOD2                         94
#define PMOD3                         95
#define PWMEN                         96
#define PWMEN0                        97
#define PWMEN1                        98
#define PWMEN2                        99
#define PTCON1                        100
#define PTDIR                         101
#define PTEN                          102
#define PTCON0                        103
#define PTMOD                         104
#define PTMOD0                        105
#define PTMOD1                        106
#define PTCKPS0                       107
#define PTCKPS                        108
#define PTCKPS1                       109
#define PTOPS                         110
#define PTOPS0                        111
#define PTOPS1                        112
#define PTOPS2                        113
#define PTOPS3                        114
#define PORTA                         115
#define AN0                           116
#define ULPWUIN                       117
#define PORTA_RA0                     118
#define AN1                           119
#define PORTA_RA1                     120
#define AN2                           121
#define PORTA_RA2                     122
#define VREFM                         123
#define AN3                           124
#define PORTA_RA3                     125
#define VREFP                         126
#define PORTA_RA4                     127
#define AN4                           128
#define AN5                           129
#define PORTA_RA5                     130
#define LVDIN                         131
#define CLKO                          132
#define PORTA_RA6                     133
#define OSC2                          134
#define CLKI                          135
#define PORTA_RA7                     136
#define OSC1                          137
#define RJPU                          138
#define PORTB                         139
#define PORTB_RB0                     140
#define PORTB_RB1                     141
#define PORTB_RB2                     142
#define CCP2_PA2                      143
#define PORTB_RB3                     144
#define PORTB_RB4                     145
#define PORTB_RB5                     146
#define PORTB_RB6                     147
#define PORTB_RB7                     148
#define PORTC                         149
#define T13CKI                        150
#define T1OSO                         151
#define PORTC_RC0                     152
#define nFLTA                         153
#define NOT_FLTA                      154
#define FLTA                          155
#define CCP2                          156
#define T1OSI                         157
#define PA2                           158
#define PORTC_RC1                     159
#define nFLTB                         160
#define FLTB                          161
#define NOT_FLTB                      162
#define CCP1                          163
#define PA1                           164
#define PORTC_RC2                     165
#define INT0                          166
#define T0CKI                         167
#define T5CKI                         168
#define PORTC_RC3                     169
#define INT1                          170
#define SDA                           171
#define SDI                           172
#define PORTC_RC4                     173
#define SCL                           174
#define SCK                           175
#define INT2                          176
#define PORTC_RC5                     177
#define CK                            178
#define PORTC_RC6                     179
#define nSS                           180
#define NOT_SS                        181
#define TX                            182
#define SS                            183
#define DT                            184
#define RX                            185
#define SDO                           186
#define PORTC_RC7                     187
#define PORTD                         188
#define PORTD_RD0                     189
#define PORTD_RD1                     190
#define PORTD_RD2                     191
#define PORTD_RD3                     192
#define PORTD_RD4                     193
#define PORTD_RD5                     194
#define PORTD_RD6                     195
#define PORTD_RD7                     196
#define SS2                           197
#define PORTE                         198
#define RDE                           199
#define PD2                           200
#define PORTE_RE0                     201
#define WRE                           202
#define PC2                           203
#define PORTE_RE1                     204
#define CCP10                         205
#define PB2                           206
#define PORTE_RE2                     207
#define CS                            208
#define RE3                           209
#define NOT_MCLR                      210
#define MCLR                          211
#define CCP9E                         212
#define nMCLR                         213
#define PC3E                          214
#define LATA                          215
#define LATA0                         216
#define LA0                           217
#define LATA1                         218
#define LA1                           219
#define LATA2                         220
#define LA2                           221
#define LATA3                         222
#define LA3                           223
#define LATA4                         224
#define LA4                           225
#define LATA5                         226
#define LA5                           227
#define LATA6                         228
#define LA6                           229
#define LATA7                         230
#define LA7                           231
#define LATB                          232
#define LB0                           233
#define LATB0                         234
#define LB1                           235
#define LATB1                         236
#define LB2                           237
#define LATB2                         238
#define LB3                           239
#define LATB3                         240
#define LB4                           241
#define LATB4                         242
#define LB5                           243
#define LATB5                         244
#define LB6                           245
#define LATB6                         246
#define LB7                           247
#define LATB7                         248
#define LATC                          249
#define LATC0                         250
#define LC0                           251
#define LATC1                         252
#define LC1                           253
#define LATC2                         254
#define LC2                           255
#define LATC3                         256
#define LC3                           257
#define LATC4                         258
#define LC4                           259
#define LATC5                         260
#define LC5                           261
#define LATC6                         262
#define LC6                           263
#define LATC7                         264
#define LC7                           265
#define LATD                          266
#define LATD0                         267
#define LD0                           268
#define LATD1                         269
#define LD1                           270
#define LATD2                         271
#define LD2                           272
#define LATD3                         273
#define LD3                           274
#define LATD4                         275
#define LD4                           276
#define LATD5                         277
#define LD5                           278
#define LATD6                         279
#define LD6                           280
#define LATD7                         281
#define LD7                           282
#define LATE                          283
#define LATE0                         284
#define LE0                           285
#define LATE1                         286
#define LE1                           287
#define LATE2                         288
#define LE2                           289
#define TRISA                         290
#define TRISA0                        291
#define TRISA_RA0                     292
#define TRISA1                        293
#define TRISA_RA1                     294
#define TRISA2                        295
#define TRISA_RA2                     296
#define TRISA3                        297
#define TRISA_RA3                     298
#define TRISA_RA4                     299
#define TRISA4                        300
#define TRISA_RA5                     301
#define TRISA5                        302
#define TRISA_RA6                     303
#define TRISA6                        304
#define TRISA_RA7                     305
#define TRISA7                        306
#define TRISB                         307
#define TRISB_RB0                     308
#define TRISB0                        309
#define TRISB_RB1                     310
#define TRISB1                        311
#define TRISB_RB2                     312
#define TRISB2                        313
#define TRISB_RB3                     314
#define TRISB3                        315
#define TRISB_RB4                     316
#define TRISB4                        317
#define TRISB_RB5                     318
#define TRISB5                        319
#define TRISB_RB6                     320
#define TRISB6                        321
#define TRISB_RB7                     322
#define TRISB7                        323
#define TRISC                         324
#define TRISC0                        325
#define TRISC_RC0                     326
#define TRISC1                        327
#define TRISC_RC1                     328
#define TRISC2                        329
#define TRISC_RC2                     330
#define TRISC3                        331
#define TRISC_RC3                     332
#define TRISC4                        333
#define TRISC_RC4                     334
#define TRISC5                        335
#define TRISC_RC5                     336
#define TRISC6                        337
#define TRISC_RC6                     338
#define TRISC7                        339
#define TRISC_RC7                     340
#define TRISD                         341
#define TRISD_RD0                     342
#define TRISD0                        343
#define TRISD_RD1                     344
#define TRISD1                        345
#define TRISD_RD2                     346
#define TRISD2                        347
#define TRISD_RD3                     348
#define TRISD3                        349
#define TRISD_RD4                     350
#define TRISD4                        351
#define TRISD_RD5                     352
#define TRISD5                        353
#define TRISD_RD6                     354
#define TRISD6                        355
#define TRISD_RD7                     356
#define TRISD7                        357
#define TRISE                         358
#define TRISE_RE0                     359
#define TRISE0                        360
#define TRISE_RE1                     361
#define TRISE1                        362
#define TRISE_RE2                     363
#define TRISE2                        364
#define ADCHS                         365
#define SASEL0                        366
#define GASEL0                        367
#define SASEL                         368
#define SASEL1                        369
#define GASEL1                        370
#define SCSEL0                        371
#define GCSEL0                        372
#define SCSEL                         373
#define SCSEL1                        374
#define GCSEL1                        375
#define SBSEL                         376
#define GBSEL0                        377
#define SBSEL0                        378
#define GBSEL1                        379
#define SBSEL1                        380
#define SDSEL                         381
#define SDSEL0                        382
#define GDSEL0                        383
#define SDSEL1                        384
#define GDSEL1                        385
#define ADCON3                        386
#define SSRC0                         387
#define SSRC                          388
#define SSRC1                         389
#define SSRC2                         390
#define SSRC3                         391
#define SSRC4                         392
#define ADRS                          393
#define ADRS0                         394
#define ADRS1                         395
#define OSCTUNE                       396
#define TUN0                          397
#define TUN                           398
#define TUN1                          399
#define TUN2                          400
#define TUN3                          401
#define TUN4                          402
#define TUN5                          403
#define PIE1                          404
#define TMR1IE                        405
#define TMR2IE                        406
#define CCP1IE                        407
#define SSPIE                         408
#define TXIE                          409
#define TBIE                          410
#define TX1IE                         411
#define RCIE                          412
#define RC1IE                         413
#define ADIE                          414
#define PIR1                          415
#define TMR1IF                        416
#define TMR2IF                        417
#define CCP1IF                        418
#define SSPIF                         419
#define TXIF                          420
#define TX1IF                         421
#define TBIF                          422
#define RCIF                          423
#define RC1IF                         424
#define ADIF                          425
#define IPR1                          426
#define TMR1IP                        427
#define TMR2IP                        428
#define CCP1IP                        429
#define SSPIP                         430
#define TBIP                          431
#define TX1IP                         432
#define TXIP                          433
#define RC1IP                         434
#define RCIP                          435
#define ADIP                          436
#define PIE2                          437
#define CCP2IE                        438
#define LVDIE                         439
#define EEIE                          440
#define OSFIE                         441
#define PIR2                          442
#define CCP2IF                        443
#define LVDIF                         444
#define EEIF                          445
#define OSFIF                         446
#define IPR2                          447
#define CCP2IP                        448
#define LVDIP                         449
#define EEIP                          450
#define OSFIP                         451
#define PIE3                          452
#define TMR5IE                        453
#define RXB0IE                        454
#define IC1IE                         455
#define RXBNIE                        456
#define RXB1IE                        457
#define IC2QEIE                       458
#define TXB0IE                        459
#define IC3DRIE                       460
#define TXB1IE                        461
#define TXB2IE                        462
#define TXBNIE                        463
#define PTIE                          464
#define PIR3                          465
#define TMR5IF                        466
#define RXBNIF                        467
#define IC1IF                         468
#define IC2QEIF                       469
#define IC3DRIF                       470
#define PTIF                          471
#define TXBNIF                        472
#define IPR3                          473
#define TMR5IP                        474
#define IC1IP                         475
#define RXBNIP                        476
#define IC2QEIP                       477
#define IC3DRIP                       478
#define TXBNIP                        479
#define PTIP                          480
#define EECON1                        481
#define RD                            482
#define WR                            483
#define WREN                          484
#define WRERR                         485
#define FREE                          486
#define CFGS                          487
#define EEFS                          488
#define EEPGD                         489
#define BAUDCON                       490
#define ABDEN                         491
#define W4E                           492
#define WUE                           493
#define BRG16                         494
#define TXCKP                         495
#define SCKP                          496
#define RXCKP                         497
#define RXDTP                         498
#define RCMT                          499
#define RCIDL                         500
#define ABDOVF                        501
#define RCSTA                         502
#define RCD8                          503
#define RX9D                          504
#define OERR                          505
#define FERR                          506
#define ADDEN                         507
#define ADEN                          508
#define CREN                          509
#define SRENA                         510
#define SREN                          511
#define RC9                           512
#define RC8_9                         513
#define RX9                           514
#define SPEN                          515
#define TXSTA                         516
#define TXD8                          517
#define TX9D1                         518
#define TX9D                          519
#define TRMT                          520
#define TRMT1                         521
#define BRGH1                         522
#define BRGH                          523
#define SENDB1                        524
#define SENDB                         525
#define SYNC                          526
#define SYNC1                         527
#define TXEN1                         528
#define TXEN                          529
#define TX91                          530
#define TX8_9                         531
#define TX9                           532
#define CSRC1                         533
#define CSRC                          534
#define QEICON                        535
#define PDEC                          536
#define PDEC0                         537
#define PDEC1                         538
#define QEIM                          539
#define QEIM0                         540
#define QEIM1                         541
#define QEIM2                         542
#define DOWN                          543
#define nDOWN                         544
#define UP_nDOWN                      545
#define NOT_DOWN                      546
#define UP                            547
#define UPDOWN                        548
#define UP_NOT_DOWN                   549
#define UP_DOWN                       550
#define QERR                          551
#define VELM                          552
#define nVELM                         553
#define NOT_VELM                      554
#define T5CON                         555
#define TMR5ON                        556
#define TMR5CS                        557
#define RD165                         558
#define T5SYNC                        559
#define nT5SYNC                       560
#define NOT_T5SYNC                    561
#define SOSCEN5                       562
#define T5PS0                         563
#define T5PS                          564
#define T5PS1                         565
#define T5MOD                         566
#define nRESEN                        567
#define NOT_RESEN                     568
#define RESEN                         569
#define T5SEN                         570
#define ANSEL0                        571
#define ANS0                          572
#define ANS1                          573
#define ANS2                          574
#define ANS3                          575
#define ANS4                          576
#define ANS5                          577
#define ANS6                          578
#define ANS7                          579
#define ANSEL1                        580
#define ANS8                          581
#define CCP2CON                       582
#define CCP2M                         583
#define CCP2M0                        584
#define CCP2M1                        585
#define CCP2M2                        586
#define CCP2M3                        587
#define DC2B0                         588
#define CCP2Y                         589
#define DC2B                          590
#define DC2B1                         591
#define CCP2X                         592
#define CCP1CON                       593
#define CCP1M0                        594
#define CCP1M                         595
#define CCP1M1                        596
#define CCP1M2                        597
#define CCP1M3                        598
#define CCP1Y                         599
#define DC1B                          600
#define DC1B0                         601
#define CCP1X                         602
#define DC1B1                         603
#define ADCON2                        604
#define ADCS0                         605
#define ADCS                          606
#define ADCS1                         607
#define ADCS2                         608
#define ACQT0                         609
#define ACQT                          610
#define ACQT1                         611
#define ACQT2                         612
#define ACQT3                         613
#define ADFM                          614
#define ADCON1                        615
#define ADPNT                         616
#define ADPNT0                        617
#define ADPNT1                        618
#define FFOVFL                        619
#define BFOVFL                        620
#define CHSN3                         621
#define BFEMT                         622
#define FIFOEN                        623
#define VCFG01                        624
#define VCFG                          625
#define VCFG0                         626
#define VCFG1                         627
#define ADCON0                        628
#define ADON                          629
#define GODONE                        630
#define nDONE                         631
#define GO_nDONE                      632
#define NOT_DONE                      633
#define GO_DONE                       634
#define DONE                          635
#define GO                            636
#define GO_NOT_DONE                   637
#define ACMOD0                        638
#define ACMOD                         639
#define ACMOD1                        640
#define ACSCH                         641
#define ACONV                         642
#define SSPCON                        643
#define SSPM0                         644
#define SSPM                          645
#define SSPM1                         646
#define SSPM2                         647
#define SSPM3                         648
#define CKP                           649
#define SSPEN                         650
#define SSPOV                         651
#define WCOL                          652
#define SSPSTAT                       653
#define BF                            654
#define UA                            655
#define R_NOT_W                       656
#define READ_WRITE                    657
#define NOT_W                         658
#define nW                            659
#define RW                            660
#define nWRITE                        661
#define R                             662
#define NOT_WRITE                     663
#define R_nW                          664
#define R_W                           665
#define START                         666
#define S                             667
#define STOP                          668
#define P                             669
#define NOT_A                         670
#define nA                            671
#define D_A                           672
#define D_nA                          673
#define D                             674
#define DA                            675
#define DATA_ADDRESS                  676
#define D_NOT_A                       677
#define NOT_ADDRESS                   678
#define nADDRESS                      679
#define CKE                           680
#define SMP                           681
#define T2CON                         682
#define T2CKPS0                       683
#define T2CKPS                        684
#define T2CKPS1                       685
#define TMR2ON                        686
#define T2OUTPS0                      687
#define TOUTPS0                       688
#define TOUTPS                        689
#define T2OUTPS1                      690
#define TOUTPS1                       691
#define T2OUTPS2                      692
#define TOUTPS2                       693
#define T2OUTPS3                      694
#define TOUTPS3                       695
#define PR2                           696
#define WM0                           697
#define WM1                           698
#define WAIT0                         699
#define WAIT1                         700
#define EBDIS                         701
#define T1CON                         702
#define TMR1ON                        703
#define TMR1CS                        704
#define NOT_T1SYNC                    705
#define T1SYNC                        706
#define nT1SYNC                       707
#define T1INSYNC                      708
#define T1OSCEN                       709
#define SOSCEN                        710
#define T1CKPS0                       711
#define T1CKPS                        712
#define T1CKPS1                       713
#define T1RUN                         714
#define RD16                          715
#define T1RD16                        716
#define RCON                          717
#define BOR                           718
#define NOT_BOR                       719
#define nBOR                          720
#define POR                           721
#define nPOR                          722
#define NOT_POR                       723
#define nPD                           724
#define NOT_PD                        725
#define PD                            726
#define NOT_TO                        727
#define nTO                           728
#define TO                            729
#define nRI                           730
#define NOT_RI                        731
#define RI                            732
#define nIPEN                         733
#define IPEN                          734
#define NOT_IPEN                      735
#define WDTCON                        736
#define SWDTEN                        737
#define WDTW                          738
#define LVDCON                        739
#define LVDL0                         740
#define LVDL                          741
#define LVDL1                         742
#define LVDL2                         743
#define LVDL3                         744
#define LVDEN                         745
#define IRVST                         746
#define IVRST                         747
#define OSCCON                        748
#define SCS0                          749
#define SCS                           750
#define SCS1                          751
#define FLTS                          752
#define IOFS                          753
#define OSTS                          754
#define IRCF                          755
#define IRCF0                         756
#define IRCF1                         757
#define IRCF2                         758
#define IDLEN                         759
#define T0CON                         760
#define T0PS                          761
#define T0PS0                         762
#define T0PS1                         763
#define T0PS2                         764
#define PSA                           765
#define T0PS3                         766
#define T0SE                          767
#define T0CS                          768
#define T016BIT                       769
#define TMR0ON                        770
#define STATUS                        771
#define C                             772
#define CARRY                         773
#define DC                            774
#define ZERO                          775
#define Z                             776
#define OV                            777
#define OVERFLOW                      778
#define N                             779
#define NEGATIVE                      780
#define INTCON3                       781
#define INT1IF                        782
#define INT1F                         783
#define INT2IF                        784
#define INT2F                         785
#define INT1E                         786
#define INT1IE                        787
#define INT2IE                        788
#define INT2E                         789
#define INT1P                         790
#define INT1IP                        791
#define INT2IP                        792
#define INT2P                         793
#define INTCON2                       794
#define RBIP                          795
#define TMR0IP                        796
#define T0IP                          797
#define INTEDG2                       798
#define INTEDG1                       799
#define INTEDG0                       800
#define RBPU                          801
#define NOT_RBPU                      802
#define nRBPU                         803
#define INTCON                        804
#define RBIF                          805
#define INT0F                         806
#define INT0IF                        807
#define T0IF                          808
#define TMR0IF                        809
#define RBIE                          810
#define INT0E                         811
#define INT0IE                        812
#define T0IE                          813
#define TMR0IE                        814
#define PEIE                          815
#define PEIE_GIEL                     816
#define GIEL                          817
#define GIE_GIEH                      818
#define GIE                           819
#define GIEH                          820
#define STKPTR0                       821
#define STKPTR                        822
#define STKPTR1                       823
#define STKPTR2                       824
#define STKPTR3                       825
#define STKPTR4                       826
#define STKUNF                        827
#define STKOVF                        828
#define STKFUL                        829

#endif // _PIC18LF4431_H_
