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

#ifndef _PIC18F4525_H_
#define _PIC18F4525_H_

#define PORTA                         0
#define ULPWUIN                       1
#define PORTA_RA0                     2
#define PORTA_RA1                     3
#define PORTA_RA2                     4
#define PORTA_RA3                     5
#define PORTA_RA4                     6
#define T0CKI                         7
#define AN4                           8
#define PORTA_RA5                     9
#define LVDIN                         10
#define nSS                           11
#define NOT_SS                        12
#define SS                            13
#define HLVDIN                        14
#define PORTA_RA6                     15
#define PORTA_RA7                     16
#define RJPU                          17
#define PORTB                         18
#define INT0                          19
#define PORTB_RB0                     20
#define AN12                          21
#define INT1                          22
#define PORTB_RB1                     23
#define AN10                          24
#define AN8                           25
#define INT2                          26
#define PORTB_RB2                     27
#define AN9                           28
#define PORTB_CCP2                    29
#define CCP2_PA2                      30
#define PORTB_RB3                     31
#define KBI0                          32
#define PORTB_RB4                     33
#define AN11                          34
#define PGM                           35
#define PORTB_RB5                     36
#define KBI1                          37
#define PGC                           38
#define PORTB_RB6                     39
#define KBI2                          40
#define PGD                           41
#define PORTB_RB7                     42
#define KBI3                          43
#define PORTC                         44
#define T13CKI                        45
#define T1CKI                         46
#define T1OSO                         47
#define PORTC_RC0                     48
#define PORTC_CCP2                    49
#define T1OSI                         50
#define PA2                           51
#define PORTC_RC1                     52
#define CCP1                          53
#define PA1                           54
#define PORTC_RC2                     55
#define SCL                           56
#define SCK                           57
#define PORTC_RC3                     58
#define SDA                           59
#define SDI                           60
#define PORTC_RC4                     61
#define SDO                           62
#define PORTC_RC5                     63
#define TX                            64
#define CK                            65
#define PORTC_RC6                     66
#define DT                            67
#define RX                            68
#define PORTC_RC7                     69
#define PORTD                         70
#define PSP0                          71
#define PORTD_RD0                     72
#define PSP1                          73
#define PORTD_RD1                     74
#define PSP2                          75
#define PORTD_RD2                     76
#define PSP3                          77
#define PORTD_RD3                     78
#define PSP4                          79
#define PORTD_RD4                     80
#define PSP5                          81
#define P1B                           82
#define PORTD_RD5                     83
#define PSP6                          84
#define P1C                           85
#define PORTD_RD6                     86
#define SS2                           87
#define PSP7                          88
#define P1D                           89
#define PORTD_RD7                     90
#define PORTE                         91
#define NOT_RD                        92
#define nRD                           93
#define AN5                           94
#define PORTE_RD                      95
#define PD2                           96
#define RDE                           97
#define PORTE_RE0                     98
#define AN6                           99
#define WRE                           100
#define PORTE_WR                      101
#define NOT_WR                        102
#define nWR                           103
#define PORTE_RE1                     104
#define PC2                           105
#define nCS                           106
#define NOT_CS                        107
#define AN7                           108
#define CCP10                         109
#define PB2                           110
#define CS                            111
#define PORTE_RE2                     112
#define VPP                           113
#define CCP9E                         114
#define PORTE_RE3                     115
#define NOT_MCLR                      116
#define MCLR                          117
#define nMCLR                         118
#define PC3E                          119
#define LATA                          120
#define LATA0                         121
#define LA0                           122
#define LATA1                         123
#define LA1                           124
#define LATA2                         125
#define LA2                           126
#define LATA3                         127
#define LA3                           128
#define LATA4                         129
#define LA4                           130
#define LATA5                         131
#define LA5                           132
#define LATA6                         133
#define LA6                           134
#define LATA7                         135
#define LA7                           136
#define LATB                          137
#define LB0                           138
#define LATB0                         139
#define LB1                           140
#define LATB1                         141
#define LB2                           142
#define LATB2                         143
#define LB3                           144
#define LATB3                         145
#define LB4                           146
#define LATB4                         147
#define LB5                           148
#define LATB5                         149
#define LB6                           150
#define LATB6                         151
#define LB7                           152
#define LATB7                         153
#define LATC                          154
#define LATC0                         155
#define LC0                           156
#define LATC1                         157
#define LC1                           158
#define LATC2                         159
#define LC2                           160
#define LATC3                         161
#define LC3                           162
#define LATC4                         163
#define LC4                           164
#define LATC5                         165
#define LC5                           166
#define LATC6                         167
#define LC6                           168
#define LATC7                         169
#define LC7                           170
#define LATD                          171
#define LATD0                         172
#define LD0                           173
#define LATD1                         174
#define LD1                           175
#define LATD2                         176
#define LD2                           177
#define LATD3                         178
#define LD3                           179
#define LATD4                         180
#define LD4                           181
#define LATD5                         182
#define LD5                           183
#define LATD6                         184
#define LD6                           185
#define LATD7                         186
#define LD7                           187
#define LATE                          188
#define LATE0                         189
#define LE0                           190
#define LATE1                         191
#define LE1                           192
#define LATE2                         193
#define LE2                           194
#define TRISA                         195
#define TRISA0                        196
#define TRISA_RA0                     197
#define TRISA1                        198
#define TRISA_RA1                     199
#define TRISA2                        200
#define TRISA_RA2                     201
#define TRISA3                        202
#define TRISA_RA3                     203
#define TRISA_RA4                     204
#define TRISA4                        205
#define TRISA_RA5                     206
#define TRISA5                        207
#define TRISA_RA6                     208
#define TRISA6                        209
#define TRISA_RA7                     210
#define TRISA7                        211
#define TRISB                         212
#define TRISB_RB0                     213
#define TRISB0                        214
#define TRISB_RB1                     215
#define TRISB1                        216
#define TRISB_RB2                     217
#define TRISB2                        218
#define TRISB_RB3                     219
#define TRISB3                        220
#define TRISB_RB4                     221
#define TRISB4                        222
#define TRISB_RB5                     223
#define TRISB5                        224
#define TRISB_RB6                     225
#define TRISB6                        226
#define TRISB_RB7                     227
#define TRISB7                        228
#define TRISC                         229
#define TRISC0                        230
#define TRISC_RC0                     231
#define TRISC1                        232
#define TRISC_RC1                     233
#define TRISC2                        234
#define TRISC_RC2                     235
#define TRISC3                        236
#define TRISC_RC3                     237
#define TRISC4                        238
#define TRISC_RC4                     239
#define TRISC5                        240
#define TRISC_RC5                     241
#define TRISC6                        242
#define TRISC_RC6                     243
#define TRISC7                        244
#define TRISC_RC7                     245
#define TRISD                         246
#define TRISD_RD0                     247
#define TRISD0                        248
#define TRISD_RD1                     249
#define TRISD1                        250
#define TRISD_RD2                     251
#define TRISD2                        252
#define TRISD_RD3                     253
#define TRISD3                        254
#define TRISD_RD4                     255
#define TRISD4                        256
#define TRISD_RD5                     257
#define TRISD5                        258
#define TRISD_RD6                     259
#define TRISD6                        260
#define TRISD_RD7                     261
#define TRISD7                        262
#define TRISE                         263
#define TRISE_RE0                     264
#define TRISE0                        265
#define TRISE_RE1                     266
#define TRISE1                        267
#define TRISE_RE2                     268
#define TRISE2                        269
#define TRISE_RE3                     270
#define PSPMODE                       271
#define IBOV                          272
#define OBF                           273
#define IBF                           274
#define OSCTUNE                       275
#define TUN0                          276
#define TUN                           277
#define TUN1                          278
#define TUN2                          279
#define TUN3                          280
#define TUN4                          281
#define PLLEN                         282
#define INTSRC                        283
#define PIE1                          284
#define TMR1IE                        285
#define TMR2IE                        286
#define CCP1IE                        287
#define SSPIE                         288
#define TXIE                          289
#define TX1IE                         290
#define RCIE                          291
#define RC1IE                         292
#define ADIE                          293
#define PSPIE                         294
#define PIR1                          295
#define TMR1IF                        296
#define TMR2IF                        297
#define CCP1IF                        298
#define SSPIF                         299
#define TXIF                          300
#define TX1IF                         301
#define RCIF                          302
#define RC1IF                         303
#define ADIF                          304
#define PSPIF                         305
#define IPR1                          306
#define TMR1IP                        307
#define TMR2IP                        308
#define CCP1IP                        309
#define SSPIP                         310
#define TX1IP                         311
#define TXIP                          312
#define RC1IP                         313
#define RCIP                          314
#define ADIP                          315
#define PSPIP                         316
#define PIE2                          317
#define CCP2IE                        318
#define TMR3IE                        319
#define HLVDIE                        320
#define LVDIE                         321
#define BCLIE                         322
#define EEIE                          323
#define CMIE                          324
#define OSCFIE                        325
#define PIR2                          326
#define CCP2IF                        327
#define TMR3IF                        328
#define HLVDIF                        329
#define LVDIF                         330
#define BCLIF                         331
#define EEIF                          332
#define CMIF                          333
#define OSCFIF                        334
#define IPR2                          335
#define CCP2IP                        336
#define TMR3IP                        337
#define HLVDIP                        338
#define LVDIP                         339
#define BCLIP                         340
#define EEIP                          341
#define CMIP                          342
#define OSCFIP                        343
#define EECON1                        344
#define EECON1_RD                     345
#define EECON1_WR                     346
#define WREN                          347
#define WRERR                         348
#define FREE                          349
#define CFGS                          350
#define EEFS                          351
#define EEPGD                         352
#define RCSTA                         353
#define RCD8                          354
#define RX9D                          355
#define OERR                          356
#define FERR                          357
#define ADDEN                         358
#define ADEN                          359
#define CREN                          360
#define SRENA                         361
#define SREN                          362
#define RC9                           363
#define RC8_9                         364
#define RX9                           365
#define SPEN                          366
#define TXSTA                         367
#define TXD8                          368
#define TX9D1                         369
#define TX9D                          370
#define TRMT                          371
#define TRMT1                         372
#define BRGH1                         373
#define BRGH                          374
#define SENDB1                        375
#define SENDB                         376
#define SYNC                          377
#define SYNC1                         378
#define TXEN1                         379
#define TXEN                          380
#define TX91                          381
#define TX8_9                         382
#define TX9                           383
#define CSRC1                         384
#define CSRC                          385
#define T3CON                         386
#define TMR3ON                        387
#define TMR3CS                        388
#define nT3SYNC                       389
#define NOT_T3SYNC                    390
#define T3SYNC                        391
#define SOSCEN3                       392
#define T3CCP1                        393
#define T3CKPS                        394
#define T3CKPS0                       395
#define T3CKPS1                       396
#define T3CCP2                        397
#define T3CON_RD16                    398
#define RD163                         399
#define T3RD16                        400
#define CMCON                         401
#define CM                            402
#define CMEN0                         403
#define CM0                           404
#define CMEN1                         405
#define CM1                           406
#define CMEN2                         407
#define CM2                           408
#define CIS                           409
#define C1INV                         410
#define C2INV                         411
#define C1OUT                         412
#define C2OUT                         413
#define CVRCON                        414
#define CVR                           415
#define CVR0                          416
#define CVR1                          417
#define CVR2                          418
#define CVR3                          419
#define CVRSS                         420
#define CVRR                          421
#define CVROEN                        422
#define CVROE                         423
#define CVREN                         424
#define ECCP1AS                       425
#define PSSBD                         426
#define PSSBD0                        427
#define PSSBD1                        428
#define PSSAC                         429
#define PSSAC0                        430
#define PSSAC1                        431
#define ECCPAS0                       432
#define ECCPAS                        433
#define ECCPAS1                       434
#define ECCPAS2                       435
#define ECCPASE                       436
#define PWM1CON                       437
#define PDC0                          438
#define PDC                           439
#define PDC1                          440
#define PDC2                          441
#define PDC3                          442
#define PDC4                          443
#define PDC5                          444
#define PDC6                          445
#define PRSEN                         446
#define BAUDCON                       447
#define ABDEN                         448
#define W4E                           449
#define WUE                           450
#define BRG16                         451
#define TXCKP                         452
#define SCKP                          453
#define RXCKP                         454
#define RXDTP                         455
#define RCMT                          456
#define RCIDL                         457
#define ABDOVF                        458
#define CCP2CON                       459
#define CCP2M                         460
#define CCP2M0                        461
#define CCP2M1                        462
#define CCP2M2                        463
#define CCP2M3                        464
#define DC2B0                         465
#define CCP2Y                         466
#define DC2B                          467
#define DC2B1                         468
#define CCP2X                         469
#define CCP1CON                       470
#define CCP1M0                        471
#define CCP1M                         472
#define CCP1M1                        473
#define CCP1M2                        474
#define CCP1M3                        475
#define CCP1Y                         476
#define DC1B                          477
#define DC1B0                         478
#define CCP1X                         479
#define DC1B1                         480
#define P1M                           481
#define P1M0                          482
#define P1M1                          483
#define ADCON2                        484
#define ADCS0                         485
#define ADCS                          486
#define ADCS1                         487
#define ADCS2                         488
#define ACQT0                         489
#define ACQT                          490
#define ACQT1                         491
#define ACQT2                         492
#define ADFM                          493
#define ADCON1                        494
#define PCFG0                         495
#define PCFG                          496
#define PCFG1                         497
#define PCFG2                         498
#define CHSN3                         499
#define PCFG3                         500
#define VCFG                          501
#define VCFG0                         502
#define VCFG01                        503
#define VCFG11                        504
#define VCFG1                         505
#define ADCON0                        506
#define ADON                          507
#define nDONE                         508
#define GO_nDONE                      509
#define NOT_DONE                      510
#define GODONE                        511
#define GO_DONE                       512
#define DONE                          513
#define GO_NOT_DONE                   514
#define GO                            515
#define CHS                           516
#define CHS0                          517
#define CHS1                          518
#define CHS2                          519
#define CHS3                          520
#define SSPCON2                       521
#define SEN                           522
#define RSEN                          523
#define PEN                           524
#define RCEN                          525
#define ACKEN                         526
#define ACKDT                         527
#define ACKSTAT                       528
#define GCEN                          529
#define SSPCON1                       530
#define SSPM0                         531
#define SSPM                          532
#define SSPM1                         533
#define SSPM2                         534
#define SSPM3                         535
#define CKP                           536
#define SSPEN                         537
#define SSPOV                         538
#define WCOL                          539
#define SSPSTAT                       540
#define BF                            541
#define UA                            542
#define R_NOT_W                       543
#define NOT_W                         544
#define nW                            545
#define RW                            546
#define nWRITE                        547
#define R                             548
#define W                             549
#define NOT_WRITE                     550
#define R_nW                          551
#define R_W                           552
#define START                         553
#define S                             554
#define STOP                          555
#define P                             556
#define A                             557
#define NOT_A                         558
#define nA                            559
#define D_A                           560
#define D_nA                          561
#define D                             562
#define DA                            563
#define D_NOT_A                       564
#define NOT_ADDRESS                   565
#define nADDRESS                      566
#define CKE                           567
#define SMP                           568
#define T2CON                         569
#define T2CKPS0                       570
#define T2CKPS                        571
#define T2CKPS1                       572
#define TMR2ON                        573
#define T2OUTPS0                      574
#define TOUTPS0                       575
#define TOUTPS                        576
#define T2OUTPS1                      577
#define TOUTPS1                       578
#define T2OUTPS2                      579
#define TOUTPS2                       580
#define T2OUTPS3                      581
#define TOUTPS3                       582
#define PR2                           583
#define WM0                           584
#define WM1                           585
#define WAIT0                         586
#define WAIT1                         587
#define EBDIS                         588
#define T1CON                         589
#define TMR1ON                        590
#define TMR1CS                        591
#define NOT_T1SYNC                    592
#define T1SYNC                        593
#define nT1SYNC                       594
#define T1OSCEN                       595
#define SOSCEN                        596
#define T1CKPS0                       597
#define T1CKPS                        598
#define T1CKPS1                       599
#define T1RUN                         600
#define T1CON_RD16                    601
#define T1RD16                        602
#define RCON                          603
#define BOR                           604
#define NOT_BOR                       605
#define nBOR                          606
#define POR                           607
#define nPOR                          608
#define NOT_POR                       609
#define PD                            610
#define nPD                           611
#define NOT_PD                        612
#define NOT_TO                        613
#define nTO                           614
#define TO                            615
#define nRI                           616
#define NOT_RI                        617
#define RI                            618
#define SBOREN                        619
#define IPEN                          620
#define WDTCON                        621
#define SWDTE                         622
#define SWDTEN                        623
#define HLVDCON                       624
#define HLVDL                         625
#define HLVDL0                        626
#define LVV0                          627
#define LVDL0                         628
#define HLVDL1                        629
#define LVDL1                         630
#define LVV1                          631
#define HLVDL2                        632
#define LVV2                          633
#define LVDL2                         634
#define HLVDL3                        635
#define LVV3                          636
#define LVDL3                         637
#define HLVDEN                        638
#define LVDEN                         639
#define BGST                          640
#define IRVST                         641
#define IVRST                         642
#define VDIRMAG                       643
#define OSCCON                        644
#define SCS0                          645
#define SCS                           646
#define SCS1                          647
#define FLTS                          648
#define IOFS                          649
#define OSTS                          650
#define IRCF                          651
#define IRCF0                         652
#define IRCF1                         653
#define IRCF2                         654
#define IDLEN                         655
#define T0CON                         656
#define T0PS                          657
#define T0PS0                         658
#define T0PS1                         659
#define T0PS2                         660
#define PSA                           661
#define T0SE                          662
#define T0CS                          663
#define T08BIT                        664
#define T016BIT                       665
#define TMR0ON                        666
#define STATUS                        667
#define C                             668
#define CARRY                         669
#define DC                            670
#define ZERO                          671
#define Z                             672
#define OV                            673
#define OVERFLOW                      674
#define N                             675
#define NEGATIVE                      676
#define INTCON3                       677
#define INT1IF                        678
#define INT1F                         679
#define INT2IF                        680
#define INT2F                         681
#define INT1E                         682
#define INT1IE                        683
#define INT2IE                        684
#define INT2E                         685
#define INT1P                         686
#define INT1IP                        687
#define INT2IP                        688
#define INT2P                         689
#define INTCON2                       690
#define RBIP                          691
#define TMR0IP                        692
#define INTEDG2                       693
#define INTEDG1                       694
#define INTEDG0                       695
#define RBPU                          696
#define NOT_RBPU                      697
#define nRBPU                         698
#define INTCON                        699
#define RBIF                          700
#define INT0F                         701
#define INT0IF                        702
#define T0IF                          703
#define TMR0IF                        704
#define RBIE                          705
#define INT0E                         706
#define INT0IE                        707
#define T0IE                          708
#define TMR0IE                        709
#define PEIE                          710
#define PEIE_GIEL                     711
#define GIEL                          712
#define GIE_GIEH                      713
#define GIE                           714
#define GIEH                          715
#define STKPTR0                       716
#define STKPTR                        717
#define SP0                           718
#define STKPTR1                       719
#define SP1                           720
#define STKPTR2                       721
#define SP2                           722
#define SP3                           723
#define STKPTR3                       724
#define STKPTR4                       725
#define SP4                           726
#define STKUNF                        727
#define STKOVF                        728
#define STKFUL                        729

#endif // _PIC18F4525_H_
