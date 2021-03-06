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

#ifndef _PIC16F1455_H_
#define _PIC16F1455_H_

#define INDF0                         0
#define INDF1                         1
#define PCL                           2
#define STATUS                        3
#define STATUS_C                      4
#define CARRY                         5
#define STATUS_DC                     6
#define ZERO                          7
#define STATUS_Z                      8
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
#define RA3                           38
#define RA4                           39
#define RA5                           40
#define PORTC                         41
#define RC0                           42
#define RC1                           43
#define RC2                           44
#define RC3                           45
#define RC4                           46
#define RC5                           47
#define PIR1                          48
#define TMR1IF                        49
#define TMR2IF                        50
#define SSP1IF                        51
#define TXIF                          52
#define RCIF                          53
#define ADIF                          54
#define TMR1GIF                       55
#define PIR2                          56
#define ACTIF                         57
#define USBIF                         58
#define BCL1IF                        59
#define C1IF                          60
#define C2IF                          61
#define OSFIF                         62
#define TMR0                          63
#define TMR1L                         64
#define TMR1H                         65
#define T1CON                         66
#define TMR1ON                        67
#define nT1SYNC                       68
#define T1OSCEN                       69
#define T1CKPS0                       70
#define T1CKPS                        71
#define T1CKPS1                       72
#define TMR1CS0                       73
#define TMR1CS                        74
#define TMR1CS1                       75
#define T1GCON                        76
#define T1GSS0                        77
#define T1GSS                         78
#define T1GSS1                        79
#define T1GVAL                        80
#define T1GGO_nDONE                   81
#define T1GSPM                        82
#define T1GTM                         83
#define T1GPOL                        84
#define TMR1GE                        85
#define TMR2                          86
#define PR2                           87
#define T2CON                         88
#define T2CKPS0                       89
#define T2CKPS                        90
#define T2CKPS1                       91
#define TMR2ON                        92
#define T2OUTPS0                      93
#define T2OUTPS                       94
#define T2OUTPS1                      95
#define T2OUTPS2                      96
#define T2OUTPS3                      97
#define TRISA                         98
#define TRISA4                        99
#define TRISA5                        100
#define TRISC                         101
#define TRISC0                        102
#define TRISC1                        103
#define TRISC2                        104
#define TRISC3                        105
#define TRISC4                        106
#define TRISC5                        107
#define PIE1                          108
#define TMR1IE                        109
#define TMR2IE                        110
#define SSP1IE                        111
#define TXIE                          112
#define RCIE                          113
#define ADIE                          114
#define TMR1GIE                       115
#define PIE2                          116
#define ACTIE                         117
#define USBIE                         118
#define BCL1IE                        119
#define C1IE                          120
#define C2IE                          121
#define OSFIE                         122
#define OPTION_REG                    123
#define PS                            124
#define PS0                           125
#define PS1                           126
#define PS2                           127
#define PSA                           128
#define T0SE                          129
#define TMR0SE                        130
#define T0CS                          131
#define TMR0CS                        132
#define INTEDG                        133
#define nWPUEN                        134
#define PCON                          135
#define nBOR                          136
#define nPOR                          137
#define nRI                           138
#define nRMCLR                        139
#define nRWDT                         140
#define STKUNF                        141
#define STKOVF                        142
#define WDTCON                        143
#define SWDTEN                        144
#define WDTPS                         145
#define WDTPS0                        146
#define WDTPS1                        147
#define WDTPS2                        148
#define WDTPS3                        149
#define WDTPS4                        150
#define OSCTUNE                       151
#define TUN0                          152
#define TUN                           153
#define TUN1                          154
#define TUN2                          155
#define TUN3                          156
#define TUN4                          157
#define TUN5                          158
#define TUN6                          159
#define OSCCON                        160
#define SCS0                          161
#define SCS                           162
#define SCS1                          163
#define IRCF                          164
#define IRCF0                         165
#define IRCF1                         166
#define IRCF2                         167
#define IRCF3                         168
#define SPLLMULT                      169
#define SPLLEN                        170
#define OSCSTAT                       171
#define HFIOFS                        172
#define LFIOFR                        173
#define HFIOFR                        174
#define OSTS                          175
#define PLLRDY                        176
#define SOSCR                         177
#define ADRESL                        178
#define ADRESH                        179
#define ADCON0                        180
#define ADON                          181
#define GO_nDONE                      182
#define GO                            183
#define ADGO                          184
#define CHS0                          185
#define CHS                           186
#define CHS1                          187
#define CHS2                          188
#define CHS3                          189
#define CHS4                          190
#define ADCON1                        191
#define ADPREF0                       192
#define ADPREF                        193
#define ADPREF1                       194
#define ADCS0                         195
#define ADCS                          196
#define ADCS1                         197
#define ADCS2                         198
#define ADFM                          199
#define ADCON2                        200
#define TRIGSEL                       201
#define TRIGSEL0                      202
#define TRIGSEL1                      203
#define TRIGSEL2                      204
#define LATA                          205
#define LATA4                         206
#define LATA5                         207
#define LATC                          208
#define LATC0                         209
#define LATC1                         210
#define LATC2                         211
#define LATC3                         212
#define LATC4                         213
#define LATC5                         214
#define CM1CON0                       215
#define C1SYNC                        216
#define C1HYS                         217
#define C1SP                          218
#define C1POL                         219
#define C1OE                          220
#define C1OUT                         221
#define C1ON                          222
#define CM1CON1                       223
#define C1NCH0                        224
#define C1NCH                         225
#define C1NCH1                        226
#define C1NCH2                        227
#define C1PCH                         228
#define C1PCH0                        229
#define C1PCH1                        230
#define C1INTN                        231
#define C1INTP                        232
#define CM2CON0                       233
#define C2SYNC                        234
#define C2HYS                         235
#define C2SP                          236
#define C2POL                         237
#define C2OE                          238
#define C2OUT                         239
#define C2ON                          240
#define CM2CON1                       241
#define C2NCH0                        242
#define C2NCH                         243
#define C2NCH1                        244
#define C2NCH2                        245
#define C2PCH                         246
#define C2PCH0                        247
#define C2PCH1                        248
#define C2INTN                        249
#define C2INTP                        250
#define CMOUT                         251
#define MC1OUT                        252
#define MC2OUT                        253
#define BORCON                        254
#define BORRDY                        255
#define BORFS                         256
#define SBOREN                        257
#define FVRCON                        258
#define ADFVR0                        259
#define ADFVR                         260
#define ADFVR1                        261
#define CDAFVR                        262
#define CDAFVR0                       263
#define CDAFVR1                       264
#define TSRNG                         265
#define TSEN                          266
#define FVRRDY                        267
#define FVREN                         268
#define DACCON0                       269
#define D1PSS                         270
#define D1PSS0                        271
#define D1PSS1                        272
#define DACOE2                        273
#define DACOE1                        274
#define DACEN                         275
#define DACCON1                       276
#define DACR0                         277
#define DACR                          278
#define DACR1                         279
#define DACR2                         280
#define DACR3                         281
#define DACR4                         282
#define APFCON                        283
#define P2SEL                         284
#define T1GSEL                        285
#define SSSEL                         286
#define SDOSEL                        287
#define CLKRSEL                       288
#define ANSELA                        289
#define ANSA4                         290
#define ANSC0                         291
#define ANSELC                        292
#define ANSC1                         293
#define ANSC2                         294
#define ANSC3                         295
#define PMADRL                        296
#define PMADRH                        297
#define PMDATL                        298
#define PMDATH                        299
#define PMCON1                        300
#define RD                            301
#define WR                            302
#define WREN                          303
#define WRERR                         304
#define FREE                          305
#define LWLO                          306
#define CFGS                          307
#define PMCON2                        308
#define VREGCON                       309
#define VREGPM0                       310
#define VREGPM                        311
#define VREGPM1                       312
#define RCREG                         313
#define TXREG                         314
#define SPBRGL                        315
#define SPBRGH                        316
#define RCSTA                         317
#define RX9D                          318
#define OERR                          319
#define FERR                          320
#define ADDEN                         321
#define CREN                          322
#define SREN                          323
#define RX9                           324
#define SPEN                          325
#define TXSTA                         326
#define TX9D                          327
#define TRMT                          328
#define BRGH                          329
#define SENDB                         330
#define SYNC                          331
#define TXEN                          332
#define TX9                           333
#define CSRC                          334
#define BAUDCON                       335
#define ABDEN                         336
#define WUE                           337
#define BRG16                         338
#define SCKP                          339
#define RCIDL                         340
#define ABDOVF                        341
#define WPUA                          342
#define WPUA3                         343
#define WPUA4                         344
#define WPUA5                         345
#define SSP1BUF                       346
#define SSPBUF                        347
#define SSP1ADD                       348
#define SSPADD                        349
#define SSP1MSK                       350
#define SSPMSK                        351
#define SSP1STAT                      352
#define BF                            353
#define UA                            354
#define R_nW                          355
#define S                             356
#define P                             357
#define D_nA                          358
#define CKE                           359
#define SMP                           360
#define SSP1CON1                      361
#define SSP1M0                        362
#define SSPM                          363
#define SSP1M1                        364
#define SSP1M2                        365
#define SSP1M3                        366
#define CKP                           367
#define SSPEN                         368
#define SSP1EN                        369
#define SSP1OV                        370
#define SSPOV                         371
#define WCOL                          372
#define SSP1CON2                      373
#define SEN                           374
#define RSEN                          375
#define PEN                           376
#define RCEN                          377
#define ACKEN                         378
#define ACKDT                         379
#define ACKSTAT                       380
#define GCEN                          381
#define SSP1CON3                      382
#define DHEN                          383
#define AHEN                          384
#define SBCDE                         385
#define SDAHT                         386
#define BOEN                          387
#define SCIE                          388
#define PCIE                          389
#define ACKTIM                        390
#define IOCAP                         391
#define IOCAP0                        392
#define IOCAP1                        393
#define IOCAP3                        394
#define IOCAP4                        395
#define IOCAP5                        396
#define IOCAN0                        397
#define IOCAN                         398
#define IOCAN1                        399
#define IOCAN3                        400
#define IOCAN4                        401
#define IOCAN5                        402
#define IOCAF0                        403
#define IOCAF                         404
#define IOCAF1                        405
#define IOCAF3                        406
#define IOCAF4                        407
#define IOCAF5                        408
#define CLKRCON                       409
#define CLKRDIV                       410
#define CLKRDIV0                      411
#define CLKRDIV1                      412
#define CLKRDIV2                      413
#define CLKRCD                        414
#define CLKRCD0                       415
#define CLKRCD1                       416
#define CLKRSLR                       417
#define CLKROE                        418
#define CLKREN                        419
#define ACTCON                        420
#define ACTORS                        421
#define ACTLOCK                       422
#define ACTSRC                        423
#define ACTUD                         424
#define ACTEN                         425
#define PWM1DCL                       426
#define PWM1DCL0                      427
#define PWM1DCL1                      428
#define PWM1DCH                       429
#define PWM1DCH0                      430
#define PWM1DCH1                      431
#define PWM1DCH2                      432
#define PWM1DCH3                      433
#define PWM1DCH4                      434
#define PWM1DCH5                      435
#define PWM1DCH6                      436
#define PWM1DCH7                      437
#define PWM1CON                       438
#define PWM1POL                       439
#define PWM1OUT                       440
#define PWM1OE                        441
#define PWM1EN                        442
#define PWM2DCL0                      443
#define PWM2DCL                       444
#define PWM2DCL1                      445
#define PWM2DCH0                      446
#define PWM2DCH                       447
#define PWM2DCH1                      448
#define PWM2DCH2                      449
#define PWM2DCH3                      450
#define PWM2DCH4                      451
#define PWM2DCH5                      452
#define PWM2DCH6                      453
#define PWM2DCH7                      454
#define PWM2CON                       455
#define PWM2POL                       456
#define PWM2OUT                       457
#define PWM2OE                        458
#define PWM2EN                        459
#define CWG1DBR0                      460
#define CWG1DBR                       461
#define CWG1DBR1                      462
#define CWG1DBR2                      463
#define CWG1DBR3                      464
#define CWG1DBR4                      465
#define CWG1DBR5                      466
#define CWG1DBF                       467
#define CWG1DBF0                      468
#define CWG1DBF1                      469
#define CWG1DBF2                      470
#define CWG1DBF3                      471
#define CWG1DBF4                      472
#define CWG1DBF5                      473
#define CWG1CON0                      474
#define G1CS0                         475
#define G1CS                          476
#define G1POLA                        477
#define G1POLB                        478
#define G1OEA                         479
#define G1OEB                         480
#define G1EN                          481
#define CWG1CON1                      482
#define G1IS0                         483
#define G1IS                          484
#define G1IS1                         485
#define G1ASDLA                       486
#define G1ASDLA0                      487
#define G1ASDLA1                      488
#define G1ASDLB                       489
#define G1ASDLB0                      490
#define G1ASDLB1                      491
#define CWG1CON2                      492
#define G1ASDSFLT                     493
#define G1ASDSC1                      494
#define G1ASDSC2                      495
#define G1ARSEN                       496
#define G1ASE                         497
#define UCON                          498
#define SUSPND                        499
#define RESUME                        500
#define USBEN                         501
#define PKTDIS                        502
#define SE0                           503
#define PPBRST                        504
#define USTAT                         505
#define PPBI                          506
#define DIR                           507
#define ENDP                          508
#define ENDP0                         509
#define ENDP1                         510
#define ENDP2                         511
#define ENDP3                         512
#define UIR                           513
#define URSTIF                        514
#define UERRIF                        515
#define ACTVIF                        516
#define TRNIF                         517
#define IDLEIF                        518
#define STALLIF                       519
#define SOFIF                         520
#define UCFG                          521
#define PPB                           522
#define PPB0                          523
#define PPB1                          524
#define FSEN                          525
#define UPUEN                         526
#define UTEYE                         527
#define UIE                           528
#define URSTIE                        529
#define UERRIE                        530
#define ACTVIE                        531
#define TRNIE                         532
#define IDLEIE                        533
#define STALLIE                       534
#define SOFIE                         535
#define UEIR                          536
#define PIDEF                         537
#define CRC5EF                        538
#define CRC16EF                       539
#define DFN8EF                        540
#define BTOEF                         541
#define BTSEF                         542
#define UFRMH                         543
#define FRM8                          544
#define FRM9                          545
#define FRM10                         546
#define UFRML                         547
#define FRM0                          548
#define FRM1                          549
#define FRM2                          550
#define FRM3                          551
#define FRM4                          552
#define FRM5                          553
#define FRM6                          554
#define FRM7                          555
#define UADDR                         556
#define ADDR0                         557
#define ADDR1                         558
#define ADDR2                         559
#define ADDR3                         560
#define ADDR4                         561
#define ADDR5                         562
#define ADDR6                         563
#define UEIE                          564
#define PIDEE                         565
#define CRC5EE                        566
#define CRC16EE                       567
#define DFN8EE                        568
#define BTOEE                         569
#define BTSEE                         570
#define UEP0                          571
#define UEP0_EPSTALL                  572
#define UEP0_EPINEN                   573
#define UEP0_EPOUTEN                  574
#define UEP0_EPCONDIS                 575
#define UEP0_EPHSHK                   576
#define UEP1                          577
#define UEP1_EPSTALL                  578
#define UEP1_EPINEN                   579
#define UEP1_EPOUTEN                  580
#define UEP1_EPCONDIS                 581
#define UEP1_EPHSHK                   582
#define UEP2                          583
#define UEP2_EPSTALL                  584
#define UEP2_EPINEN                   585
#define UEP2_EPOUTEN                  586
#define UEP2_EPCONDIS                 587
#define UEP2_EPHSHK                   588
#define UEP3                          589
#define UEP3_EPSTALL                  590
#define UEP3_EPINEN                   591
#define UEP3_EPOUTEN                  592
#define UEP3_EPCONDIS                 593
#define UEP3_EPHSHK                   594
#define UEP4                          595
#define UEP4_EPSTALL                  596
#define UEP4_EPINEN                   597
#define UEP4_EPOUTEN                  598
#define UEP4_EPCONDIS                 599
#define UEP4_EPHSHK                   600
#define UEP5                          601
#define UEP5_EPSTALL                  602
#define UEP5_EPINEN                   603
#define UEP5_EPOUTEN                  604
#define UEP5_EPCONDIS                 605
#define UEP5_EPHSHK                   606
#define UEP6                          607
#define UEP6_EPSTALL                  608
#define UEP6_EPINEN                   609
#define UEP6_EPOUTEN                  610
#define UEP6_EPCONDIS                 611
#define UEP6_EPHSHK                   612
#define UEP7                          613
#define UEP7_EPSTALL                  614
#define UEP7_EPINEN                   615
#define UEP7_EPOUTEN                  616
#define UEP7_EPCONDIS                 617
#define UEP7_EPHSHK                   618
#define STATUS_SHAD                   619
#define STATUS_SHAD_C                 620
#define STATUS_SHAD_DC                621
#define STATUS_SHAD_Z                 622
#define WREG_SHAD                     623
#define BSR_SHAD                      624
#define PCLATH_SHAD                   625
#define FSR0L_SHAD                    626
#define FSR0H_SHAD                    627
#define FSR1L_SHAD                    628
#define FSR1H_SHAD                    629
#define STKPTR                        630
#define TOSL                          631
#define TOSH                          632

#endif // _PIC16F1455_H_
