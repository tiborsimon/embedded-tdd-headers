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

#ifndef _PIC18F4610_H_
#define _PIC18F4610_H_

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
#define T0CKI                         14
#define AN4                           15
#define PORTA_RA5                     16
#define LVDIN                         17
#define nSS                           18
#define NOT_SS                        19
#define SS                            20
#define HLVDIN                        21
#define CLKO                          22
#define PORTA_RA6                     23
#define OSC2                          24
#define CLKI                          25
#define PORTA_RA7                     26
#define OSC1                          27
#define RJPU                          28
#define PORTB                         29
#define INT0                          30
#define PORTB_RB0                     31
#define AN12                          32
#define INT1                          33
#define PORTB_RB1                     34
#define AN10                          35
#define AN8                           36
#define INT2                          37
#define PORTB_RB2                     38
#define AN9                           39
#define PORTB_CCP2                    40
#define CCP2_PA2                      41
#define PORTB_RB3                     42
#define KBI0                          43
#define PORTB_RB4                     44
#define AN11                          45
#define PGM                           46
#define PORTB_RB5                     47
#define KBI1                          48
#define PGC                           49
#define PORTB_RB6                     50
#define KBI2                          51
#define PGD                           52
#define PORTB_RB7                     53
#define KBI3                          54
#define PORTC                         55
#define T13CKI                        56
#define T1CKI                         57
#define T1OSO                         58
#define PORTC_RC0                     59
#define PORTC_CCP2                    60
#define T1OSI                         61
#define PA2                           62
#define PORTC_RC1                     63
#define CCP1                          64
#define PA1                           65
#define PORTC_RC2                     66
#define SCL                           67
#define SCK                           68
#define PORTC_RC3                     69
#define SDA                           70
#define SDI                           71
#define PORTC_RC4                     72
#define SDO                           73
#define PORTC_RC5                     74
#define TX                            75
#define CK                            76
#define PORTC_RC6                     77
#define DT                            78
#define RX                            79
#define PORTC_RC7                     80
#define PORTD                         81
#define PSP0                          82
#define PORTD_RD0                     83
#define PSP1                          84
#define PORTD_RD1                     85
#define PSP2                          86
#define PORTD_RD2                     87
#define PSP3                          88
#define PORTD_RD3                     89
#define PSP4                          90
#define PORTD_RD4                     91
#define PSP5                          92
#define P1B                           93
#define PORTD_RD5                     94
#define PSP6                          95
#define P1C                           96
#define PORTD_RD6                     97
#define SS2                           98
#define PSP7                          99
#define P1D                           100
#define PORTD_RD7                     101
#define PORTE                         102
#define NOT_RD                        103
#define nRD                           104
#define AN5                           105
#define PD2                           106
#define RD                            107
#define RDE                           108
#define PORTE_RE0                     109
#define AN6                           110
#define WR                            111
#define WRE                           112
#define NOT_WR                        113
#define nWR                           114
#define PORTE_RE1                     115
#define PC2                           116
#define nCS                           117
#define NOT_CS                        118
#define AN7                           119
#define CCP10                         120
#define PB2                           121
#define CS                            122
#define PORTE_RE2                     123
#define VPP                           124
#define CCP9E                         125
#define PORTE_RE3                     126
#define NOT_MCLR                      127
#define MCLR                          128
#define nMCLR                         129
#define PC3E                          130
#define LATA                          131
#define LATA0                         132
#define LA0                           133
#define LATA1                         134
#define LA1                           135
#define LATA2                         136
#define LA2                           137
#define LATA3                         138
#define LA3                           139
#define LATA4                         140
#define LA4                           141
#define LATA5                         142
#define LA5                           143
#define LATA6                         144
#define LA6                           145
#define LATA7                         146
#define LA7                           147
#define LATB                          148
#define LB0                           149
#define LATB0                         150
#define LB1                           151
#define LATB1                         152
#define LB2                           153
#define LATB2                         154
#define LB3                           155
#define LATB3                         156
#define LB4                           157
#define LATB4                         158
#define LB5                           159
#define LATB5                         160
#define LB6                           161
#define LATB6                         162
#define LB7                           163
#define LATB7                         164
#define LATC                          165
#define LATC0                         166
#define LC0                           167
#define LATC1                         168
#define LC1                           169
#define LATC2                         170
#define LC2                           171
#define LATC3                         172
#define LC3                           173
#define LATC4                         174
#define LC4                           175
#define LATC5                         176
#define LC5                           177
#define LATC6                         178
#define LC6                           179
#define LATC7                         180
#define LC7                           181
#define LATD                          182
#define LATD0                         183
#define LD0                           184
#define LATD1                         185
#define LD1                           186
#define LATD2                         187
#define LD2                           188
#define LATD3                         189
#define LD3                           190
#define LATD4                         191
#define LD4                           192
#define LATD5                         193
#define LD5                           194
#define LATD6                         195
#define LD6                           196
#define LATD7                         197
#define LD7                           198
#define LATE                          199
#define LATE0                         200
#define LE0                           201
#define LATE1                         202
#define LE1                           203
#define LATE2                         204
#define LE2                           205
#define TRISA                         206
#define TRISA0                        207
#define TRISA_RA0                     208
#define TRISA1                        209
#define TRISA_RA1                     210
#define TRISA2                        211
#define TRISA_RA2                     212
#define TRISA3                        213
#define TRISA_RA3                     214
#define TRISA_RA4                     215
#define TRISA4                        216
#define TRISA_RA5                     217
#define TRISA5                        218
#define TRISA_RA6                     219
#define TRISA6                        220
#define TRISA_RA7                     221
#define TRISA7                        222
#define TRISB                         223
#define TRISB_RB0                     224
#define TRISB0                        225
#define TRISB_RB1                     226
#define TRISB1                        227
#define TRISB_RB2                     228
#define TRISB2                        229
#define TRISB_RB3                     230
#define TRISB3                        231
#define TRISB_RB4                     232
#define TRISB4                        233
#define TRISB_RB5                     234
#define TRISB5                        235
#define TRISB_RB6                     236
#define TRISB6                        237
#define TRISB_RB7                     238
#define TRISB7                        239
#define TRISC                         240
#define TRISC0                        241
#define TRISC_RC0                     242
#define TRISC1                        243
#define TRISC_RC1                     244
#define TRISC2                        245
#define TRISC_RC2                     246
#define TRISC3                        247
#define TRISC_RC3                     248
#define TRISC4                        249
#define TRISC_RC4                     250
#define TRISC5                        251
#define TRISC_RC5                     252
#define TRISC6                        253
#define TRISC_RC6                     254
#define TRISC7                        255
#define TRISC_RC7                     256
#define TRISD                         257
#define TRISD_RD0                     258
#define TRISD0                        259
#define TRISD_RD1                     260
#define TRISD1                        261
#define TRISD_RD2                     262
#define TRISD2                        263
#define TRISD_RD3                     264
#define TRISD3                        265
#define TRISD_RD4                     266
#define TRISD4                        267
#define TRISD_RD5                     268
#define TRISD5                        269
#define TRISD_RD6                     270
#define TRISD6                        271
#define TRISD_RD7                     272
#define TRISD7                        273
#define TRISE                         274
#define TRISE_RE0                     275
#define TRISE0                        276
#define TRISE_RE1                     277
#define TRISE1                        278
#define TRISE_RE2                     279
#define TRISE2                        280
#define TRISE_RE3                     281
#define PSPMODE                       282
#define IBOV                          283
#define OBF                           284
#define IBF                           285
#define OSCTUNE                       286
#define TUN0                          287
#define TUN                           288
#define TUN1                          289
#define TUN2                          290
#define TUN3                          291
#define TUN4                          292
#define PLLEN                         293
#define INTSRC                        294
#define PIE1                          295
#define TMR1IE                        296
#define TMR2IE                        297
#define CCP1IE                        298
#define SSPIE                         299
#define TXIE                          300
#define TX1IE                         301
#define RCIE                          302
#define RC1IE                         303
#define ADIE                          304
#define PSPIE                         305
#define PIR1                          306
#define TMR1IF                        307
#define TMR2IF                        308
#define CCP1IF                        309
#define SSPIF                         310
#define TXIF                          311
#define TX1IF                         312
#define RCIF                          313
#define RC1IF                         314
#define ADIF                          315
#define PSPIF                         316
#define IPR1                          317
#define TMR1IP                        318
#define TMR2IP                        319
#define CCP1IP                        320
#define SSPIP                         321
#define TX1IP                         322
#define TXIP                          323
#define RC1IP                         324
#define RCIP                          325
#define ADIP                          326
#define PSPIP                         327
#define PIE2                          328
#define CCP2IE                        329
#define TMR3IE                        330
#define HLVDIE                        331
#define LVDIE                         332
#define BCLIE                         333
#define CMIE                          334
#define OSCFIE                        335
#define PIR2                          336
#define CCP2IF                        337
#define TMR3IF                        338
#define HLVDIF                        339
#define LVDIF                         340
#define BCLIF                         341
#define CMIF                          342
#define OSCFIF                        343
#define IPR2                          344
#define CCP2IP                        345
#define TMR3IP                        346
#define HLVDIP                        347
#define LVDIP                         348
#define BCLIP                         349
#define CMIP                          350
#define OSCFIP                        351
#define RCSTA                         352
#define RCD8                          353
#define RX9D                          354
#define OERR                          355
#define FERR                          356
#define ADDEN                         357
#define ADEN                          358
#define CREN                          359
#define SRENA                         360
#define SREN                          361
#define RC9                           362
#define RC8_9                         363
#define RX9                           364
#define SPEN                          365
#define TXSTA                         366
#define TXD8                          367
#define TX9D1                         368
#define TX9D                          369
#define TRMT                          370
#define TRMT1                         371
#define BRGH1                         372
#define BRGH                          373
#define SENDB1                        374
#define SENDB                         375
#define SYNC                          376
#define SYNC1                         377
#define TXEN1                         378
#define TXEN                          379
#define TX91                          380
#define TX8_9                         381
#define TX9                           382
#define CSRC1                         383
#define CSRC                          384
#define T3CON                         385
#define TMR3ON                        386
#define TMR3CS                        387
#define nT3SYNC                       388
#define NOT_T3SYNC                    389
#define T3SYNC                        390
#define SOSCEN3                       391
#define T3CCP1                        392
#define T3CKPS                        393
#define T3CKPS0                       394
#define T3CKPS1                       395
#define T3CCP2                        396
#define T3CON_RD16                    397
#define RD163                         398
#define T3RD16                        399
#define CMCON                         400
#define CM                            401
#define CMEN0                         402
#define CM0                           403
#define CMEN1                         404
#define CM1                           405
#define CMEN2                         406
#define CM2                           407
#define CIS                           408
#define C1INV                         409
#define C2INV                         410
#define C1OUT                         411
#define C2OUT                         412
#define CVRCON                        413
#define CVR                           414
#define CVR0                          415
#define CVR1                          416
#define CVR2                          417
#define CVR3                          418
#define CVRSS                         419
#define CVRR                          420
#define CVROEN                        421
#define CVROE                         422
#define CVREN                         423
#define ECCP1AS                       424
#define PSSBD                         425
#define PSSBD0                        426
#define PSSBD1                        427
#define PSSAC                         428
#define PSSAC0                        429
#define PSSAC1                        430
#define ECCPAS0                       431
#define ECCPAS                        432
#define ECCPAS1                       433
#define ECCPAS2                       434
#define ECCPASE                       435
#define PWM1CON                       436
#define PDC0                          437
#define PDC                           438
#define PDC1                          439
#define PDC2                          440
#define PDC3                          441
#define PDC4                          442
#define PDC5                          443
#define PDC6                          444
#define PRSEN                         445
#define BAUDCON                       446
#define ABDEN                         447
#define W4E                           448
#define WUE                           449
#define BRG16                         450
#define TXCKP                         451
#define SCKP                          452
#define RXCKP                         453
#define RXDTP                         454
#define RCMT                          455
#define RCIDL                         456
#define ABDOVF                        457
#define CCP2CON                       458
#define CCP2M                         459
#define CCP2M0                        460
#define CCP2M1                        461
#define CCP2M2                        462
#define CCP2M3                        463
#define DC2B0                         464
#define CCP2Y                         465
#define DC2B                          466
#define DC2B1                         467
#define CCP2X                         468
#define CCP1CON                       469
#define CCP1M0                        470
#define CCP1M                         471
#define CCP1M1                        472
#define CCP1M2                        473
#define CCP1M3                        474
#define CCP1Y                         475
#define DC1B                          476
#define DC1B0                         477
#define CCP1X                         478
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
#define PCFG0                         494
#define PCFG                          495
#define PCFG1                         496
#define PCFG2                         497
#define CHSN3                         498
#define PCFG3                         499
#define VCFG                          500
#define VCFG0                         501
#define VCFG01                        502
#define VCFG11                        503
#define VCFG1                         504
#define ADCON0                        505
#define ADON                          506
#define nDONE                         507
#define GO_nDONE                      508
#define NOT_DONE                      509
#define GODONE                        510
#define GO_DONE                       511
#define DONE                          512
#define GO_NOT_DONE                   513
#define GO                            514
#define CHS                           515
#define CHS0                          516
#define CHS1                          517
#define CHS2                          518
#define CHS3                          519
#define SSPCON2                       520
#define SEN                           521
#define RSEN                          522
#define PEN                           523
#define RCEN                          524
#define ACKEN                         525
#define ACKDT                         526
#define ACKSTAT                       527
#define GCEN                          528
#define SSPCON1                       529
#define SSPM0                         530
#define SSPM                          531
#define SSPM1                         532
#define SSPM2                         533
#define SSPM3                         534
#define CKP                           535
#define SSPEN                         536
#define SSPOV                         537
#define WCOL                          538
#define SSPSTAT                       539
#define BF                            540
#define UA                            541
#define R_NOT_W                       542
#define NOT_W                         543
#define nW                            544
#define RW                            545
#define nWRITE                        546
#define R                             547
#define W                             548
#define NOT_WRITE                     549
#define R_nW                          550
#define R_W                           551
#define START                         552
#define S                             553
#define STOP                          554
#define P                             555
#define A                             556
#define NOT_A                         557
#define nA                            558
#define D_A                           559
#define D_nA                          560
#define D                             561
#define DA                            562
#define D_NOT_A                       563
#define NOT_ADDRESS                   564
#define nADDRESS                      565
#define CKE                           566
#define SMP                           567
#define T2CON                         568
#define T2CKPS0                       569
#define T2CKPS                        570
#define T2CKPS1                       571
#define TMR2ON                        572
#define T2OUTPS0                      573
#define TOUTPS0                       574
#define TOUTPS                        575
#define T2OUTPS1                      576
#define TOUTPS1                       577
#define T2OUTPS2                      578
#define TOUTPS2                       579
#define T2OUTPS3                      580
#define TOUTPS3                       581
#define PR2                           582
#define WM0                           583
#define WM1                           584
#define WAIT0                         585
#define WAIT1                         586
#define EBDIS                         587
#define T1CON                         588
#define TMR1ON                        589
#define TMR1CS                        590
#define NOT_T1SYNC                    591
#define T1SYNC                        592
#define nT1SYNC                       593
#define T1OSCEN                       594
#define SOSCEN                        595
#define T1CKPS0                       596
#define T1CKPS                        597
#define T1CKPS1                       598
#define T1RUN                         599
#define T1CON_RD16                    600
#define T1RD16                        601
#define RCON                          602
#define BOR                           603
#define NOT_BOR                       604
#define nBOR                          605
#define POR                           606
#define nPOR                          607
#define NOT_POR                       608
#define PD                            609
#define nPD                           610
#define NOT_PD                        611
#define NOT_TO                        612
#define nTO                           613
#define TO                            614
#define nRI                           615
#define NOT_RI                        616
#define RI                            617
#define SBOREN                        618
#define IPEN                          619
#define WDTCON                        620
#define SWDTE                         621
#define SWDTEN                        622
#define HLVDCON                       623
#define HLVDL                         624
#define HLVDL0                        625
#define LVV0                          626
#define LVDL0                         627
#define HLVDL1                        628
#define LVDL1                         629
#define LVV1                          630
#define HLVDL2                        631
#define LVV2                          632
#define LVDL2                         633
#define HLVDL3                        634
#define LVV3                          635
#define LVDL3                         636
#define HLVDEN                        637
#define LVDEN                         638
#define BGST                          639
#define IRVST                         640
#define IVRST                         641
#define VDIRMAG                       642
#define OSCCON                        643
#define SCS0                          644
#define SCS                           645
#define SCS1                          646
#define FLTS                          647
#define IOFS                          648
#define OSTS                          649
#define IRCF                          650
#define IRCF0                         651
#define IRCF1                         652
#define IRCF2                         653
#define IDLEN                         654
#define T0CON                         655
#define T0PS                          656
#define T0PS0                         657
#define T0PS1                         658
#define T0PS2                         659
#define PSA                           660
#define T0PS3                         661
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
#define SP0                           716
#define STKPTR                        717
#define SP1                           718
#define SP2                           719
#define SP3                           720
#define SP4                           721
#define STKUNF                        722
#define STKOVF                        723
#define STKFUL                        724

#endif // _PIC18F4610_H_
