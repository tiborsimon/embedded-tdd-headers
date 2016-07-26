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

#ifndef _PIC16LF1455_H_
#define _PIC16LF1455_H_

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
#define RCREG                         309
#define TXREG                         310
#define SPBRGL                        311
#define SPBRGH                        312
#define RCSTA                         313
#define RX9D                          314
#define OERR                          315
#define FERR                          316
#define ADDEN                         317
#define CREN                          318
#define SREN                          319
#define RX9                           320
#define SPEN                          321
#define TXSTA                         322
#define TX9D                          323
#define TRMT                          324
#define BRGH                          325
#define SENDB                         326
#define SYNC                          327
#define TXEN                          328
#define TX9                           329
#define CSRC                          330
#define BAUDCON                       331
#define ABDEN                         332
#define WUE                           333
#define BRG16                         334
#define SCKP                          335
#define RCIDL                         336
#define ABDOVF                        337
#define WPUA                          338
#define WPUA3                         339
#define WPUA4                         340
#define WPUA5                         341
#define SSP1BUF                       342
#define SSPBUF                        343
#define SSP1ADD                       344
#define SSPADD                        345
#define SSP1MSK                       346
#define SSPMSK                        347
#define SSP1STAT                      348
#define BF                            349
#define UA                            350
#define R_nW                          351
#define S                             352
#define P                             353
#define D_nA                          354
#define CKE                           355
#define SMP                           356
#define SSP1CON1                      357
#define SSP1M0                        358
#define SSPM                          359
#define SSP1M1                        360
#define SSP1M2                        361
#define SSP1M3                        362
#define CKP                           363
#define SSPEN                         364
#define SSP1EN                        365
#define SSP1OV                        366
#define SSPOV                         367
#define WCOL                          368
#define SSP1CON2                      369
#define SEN                           370
#define RSEN                          371
#define PEN                           372
#define RCEN                          373
#define ACKEN                         374
#define ACKDT                         375
#define ACKSTAT                       376
#define GCEN                          377
#define SSP1CON3                      378
#define DHEN                          379
#define AHEN                          380
#define SBCDE                         381
#define SDAHT                         382
#define BOEN                          383
#define SCIE                          384
#define PCIE                          385
#define ACKTIM                        386
#define IOCAP                         387
#define IOCAP0                        388
#define IOCAP1                        389
#define IOCAP3                        390
#define IOCAP4                        391
#define IOCAP5                        392
#define IOCAN0                        393
#define IOCAN                         394
#define IOCAN1                        395
#define IOCAN3                        396
#define IOCAN4                        397
#define IOCAN5                        398
#define IOCAF0                        399
#define IOCAF                         400
#define IOCAF1                        401
#define IOCAF3                        402
#define IOCAF4                        403
#define IOCAF5                        404
#define CLKRCON                       405
#define CLKRDIV                       406
#define CLKRDIV0                      407
#define CLKRDIV1                      408
#define CLKRDIV2                      409
#define CLKRCD                        410
#define CLKRCD0                       411
#define CLKRCD1                       412
#define CLKRSLR                       413
#define CLKROE                        414
#define CLKREN                        415
#define ACTCON                        416
#define ACTORS                        417
#define ACTLOCK                       418
#define ACTSRC                        419
#define ACTUD                         420
#define ACTEN                         421
#define PWM1DCL                       422
#define PWM1DCL0                      423
#define PWM1DCL1                      424
#define PWM1DCH                       425
#define PWM1DCH0                      426
#define PWM1DCH1                      427
#define PWM1DCH2                      428
#define PWM1DCH3                      429
#define PWM1DCH4                      430
#define PWM1DCH5                      431
#define PWM1DCH6                      432
#define PWM1DCH7                      433
#define PWM1CON                       434
#define PWM1POL                       435
#define PWM1OUT                       436
#define PWM1OE                        437
#define PWM1EN                        438
#define PWM2DCL0                      439
#define PWM2DCL                       440
#define PWM2DCL1                      441
#define PWM2DCH0                      442
#define PWM2DCH                       443
#define PWM2DCH1                      444
#define PWM2DCH2                      445
#define PWM2DCH3                      446
#define PWM2DCH4                      447
#define PWM2DCH5                      448
#define PWM2DCH6                      449
#define PWM2DCH7                      450
#define PWM2CON                       451
#define PWM2POL                       452
#define PWM2OUT                       453
#define PWM2OE                        454
#define PWM2EN                        455
#define CWG1DBR0                      456
#define CWG1DBR                       457
#define CWG1DBR1                      458
#define CWG1DBR2                      459
#define CWG1DBR3                      460
#define CWG1DBR4                      461
#define CWG1DBR5                      462
#define CWG1DBF                       463
#define CWG1DBF0                      464
#define CWG1DBF1                      465
#define CWG1DBF2                      466
#define CWG1DBF3                      467
#define CWG1DBF4                      468
#define CWG1DBF5                      469
#define CWG1CON0                      470
#define G1CS0                         471
#define G1CS                          472
#define G1POLA                        473
#define G1POLB                        474
#define G1OEA                         475
#define G1OEB                         476
#define G1EN                          477
#define CWG1CON1                      478
#define G1IS0                         479
#define G1IS                          480
#define G1IS1                         481
#define G1ASDLA                       482
#define G1ASDLA0                      483
#define G1ASDLA1                      484
#define G1ASDLB                       485
#define G1ASDLB0                      486
#define G1ASDLB1                      487
#define CWG1CON2                      488
#define G1ASDSFLT                     489
#define G1ASDSC1                      490
#define G1ASDSC2                      491
#define G1ARSEN                       492
#define G1ASE                         493
#define UCON                          494
#define SUSPND                        495
#define RESUME                        496
#define USBEN                         497
#define PKTDIS                        498
#define SE0                           499
#define PPBRST                        500
#define USTAT                         501
#define PPBI                          502
#define DIR                           503
#define ENDP                          504
#define ENDP0                         505
#define ENDP1                         506
#define ENDP2                         507
#define ENDP3                         508
#define UIR                           509
#define URSTIF                        510
#define UERRIF                        511
#define ACTVIF                        512
#define TRNIF                         513
#define IDLEIF                        514
#define STALLIF                       515
#define SOFIF                         516
#define UCFG                          517
#define PPB                           518
#define PPB0                          519
#define PPB1                          520
#define FSEN                          521
#define UPUEN                         522
#define UTEYE                         523
#define UIE                           524
#define URSTIE                        525
#define UERRIE                        526
#define ACTVIE                        527
#define TRNIE                         528
#define IDLEIE                        529
#define STALLIE                       530
#define SOFIE                         531
#define UEIR                          532
#define PIDEF                         533
#define CRC5EF                        534
#define CRC16EF                       535
#define DFN8EF                        536
#define BTOEF                         537
#define BTSEF                         538
#define UFRMH                         539
#define FRM8                          540
#define FRM9                          541
#define FRM10                         542
#define UFRML                         543
#define FRM0                          544
#define FRM1                          545
#define FRM2                          546
#define FRM3                          547
#define FRM4                          548
#define FRM5                          549
#define FRM6                          550
#define FRM7                          551
#define UADDR                         552
#define ADDR0                         553
#define ADDR1                         554
#define ADDR2                         555
#define ADDR3                         556
#define ADDR4                         557
#define ADDR5                         558
#define ADDR6                         559
#define UEIE                          560
#define PIDEE                         561
#define CRC5EE                        562
#define CRC16EE                       563
#define DFN8EE                        564
#define BTOEE                         565
#define BTSEE                         566
#define UEP0                          567
#define UEP0_EPSTALL                  568
#define UEP0_EPINEN                   569
#define UEP0_EPOUTEN                  570
#define UEP0_EPCONDIS                 571
#define UEP0_EPHSHK                   572
#define UEP1                          573
#define UEP1_EPSTALL                  574
#define UEP1_EPINEN                   575
#define UEP1_EPOUTEN                  576
#define UEP1_EPCONDIS                 577
#define UEP1_EPHSHK                   578
#define UEP2                          579
#define UEP2_EPSTALL                  580
#define UEP2_EPINEN                   581
#define UEP2_EPOUTEN                  582
#define UEP2_EPCONDIS                 583
#define UEP2_EPHSHK                   584
#define UEP3                          585
#define UEP3_EPSTALL                  586
#define UEP3_EPINEN                   587
#define UEP3_EPOUTEN                  588
#define UEP3_EPCONDIS                 589
#define UEP3_EPHSHK                   590
#define UEP4                          591
#define UEP4_EPSTALL                  592
#define UEP4_EPINEN                   593
#define UEP4_EPOUTEN                  594
#define UEP4_EPCONDIS                 595
#define UEP4_EPHSHK                   596
#define UEP5                          597
#define UEP5_EPSTALL                  598
#define UEP5_EPINEN                   599
#define UEP5_EPOUTEN                  600
#define UEP5_EPCONDIS                 601
#define UEP5_EPHSHK                   602
#define UEP6                          603
#define UEP6_EPSTALL                  604
#define UEP6_EPINEN                   605
#define UEP6_EPOUTEN                  606
#define UEP6_EPCONDIS                 607
#define UEP6_EPHSHK                   608
#define UEP7                          609
#define UEP7_EPSTALL                  610
#define UEP7_EPINEN                   611
#define UEP7_EPOUTEN                  612
#define UEP7_EPCONDIS                 613
#define UEP7_EPHSHK                   614
#define STATUS_SHAD                   615
#define STATUS_SHAD_C                 616
#define STATUS_SHAD_DC                617
#define STATUS_SHAD_Z                 618
#define WREG_SHAD                     619
#define BSR_SHAD                      620
#define PCLATH_SHAD                   621
#define FSR0L_SHAD                    622
#define FSR0H_SHAD                    623
#define FSR1L_SHAD                    624
#define FSR1H_SHAD                    625
#define STKPTR                        626
#define TOSL                          627
#define TOSH                          628

#endif // _PIC16LF1455_H_
