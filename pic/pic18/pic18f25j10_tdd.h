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

#ifndef _PIC18F25J10_H_
#define _PIC18F25J10_H_

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
#define LATA                          79
#define LATA0                         80
#define LA0                           81
#define LATA1                         82
#define LA1                           83
#define LATA2                         84
#define LA2                           85
#define LATA3                         86
#define LA3                           87
#define LATA5                         88
#define LA5                           89
#define LATB                          90
#define LB0                           91
#define LATB0                         92
#define LB1                           93
#define LATB1                         94
#define LB2                           95
#define LATB2                         96
#define LB3                           97
#define LATB3                         98
#define LB4                           99
#define LATB4                         100
#define LB5                           101
#define LATB5                         102
#define LB6                           103
#define LATB6                         104
#define LB7                           105
#define LATB7                         106
#define LATC                          107
#define LATC0                         108
#define LC0                           109
#define LATC1                         110
#define LC1                           111
#define LATC2                         112
#define LC2                           113
#define LATC3                         114
#define LC3                           115
#define LATC4                         116
#define LC4                           117
#define LATC5                         118
#define LC5                           119
#define LATC6                         120
#define LC6                           121
#define LATC7                         122
#define LC7                           123
#define TRISA                         124
#define TRISA_RA0                     125
#define TRISA0                        126
#define TRISA1                        127
#define TRISA_RA1                     128
#define TRISA2                        129
#define TRISA_RA2                     130
#define TRISA3                        131
#define TRISA_RA3                     132
#define TRISA_RA5                     133
#define TRISA5                        134
#define TRISB                         135
#define TRISB_RB0                     136
#define TRISB0                        137
#define TRISB_RB1                     138
#define TRISB1                        139
#define TRISB_RB2                     140
#define TRISB2                        141
#define TRISB_RB3                     142
#define TRISB3                        143
#define TRISB_RB4                     144
#define TRISB4                        145
#define TRISB_RB5                     146
#define TRISB5                        147
#define TRISB_RB6                     148
#define TRISB6                        149
#define TRISB_RB7                     150
#define TRISB7                        151
#define TRISC                         152
#define TRISC0                        153
#define TRISC_RC0                     154
#define TRISC1                        155
#define TRISC_RC1                     156
#define TRISC2                        157
#define TRISC_RC2                     158
#define TRISC3                        159
#define TRISC_RC3                     160
#define TRISC4                        161
#define TRISC_RC4                     162
#define TRISC5                        163
#define TRISC_RC5                     164
#define TRISC6                        165
#define TRISC_RC6                     166
#define TRISC7                        167
#define TRISC_RC7                     168
#define OSCTUNE                       169
#define PLLEN                         170
#define PIE1                          171
#define TMR1IE                        172
#define TMR2IE                        173
#define CCP1IE                        174
#define SSPIE                         175
#define SSP1IE                        176
#define TXIE                          177
#define TX1IE                         178
#define RCIE                          179
#define RC1IE                         180
#define ADIE                          181
#define PIR1                          182
#define TMR1IF                        183
#define TMR2IF                        184
#define CCP1IF                        185
#define SSPIF                         186
#define SSP1IF                        187
#define TXIF                          188
#define TX1IF                         189
#define RCIF                          190
#define RC1IF                         191
#define ADIF                          192
#define IPR1                          193
#define TMR1IP                        194
#define TMR2IP                        195
#define CCP1IP                        196
#define SSPIP                         197
#define SSP1IP                        198
#define TX1IP                         199
#define TXIP                          200
#define RC1IP                         201
#define RCIP                          202
#define ADIP                          203
#define PIE2                          204
#define CCP2IE                        205
#define BCL1IE                        206
#define BCLIE                         207
#define CMIE                          208
#define OSCFIE                        209
#define PIR2                          210
#define CCP2IF                        211
#define BCL1IF                        212
#define BCLIF                         213
#define CMIF                          214
#define OSCFIF                        215
#define IPR2                          216
#define CCP2IP                        217
#define BCLIP                         218
#define BCL1IP                        219
#define CMIP                          220
#define OSCFIP                        221
#define EECON1                        222
#define WR                            223
#define WREN                          224
#define WRERR                         225
#define FREE                          226
#define RCSTA                         227
#define RX9D                          228
#define RX9D1                         229
#define RCD8                          230
#define OERR1                         231
#define OERR                          232
#define FERR                          233
#define FERR1                         234
#define ADDEN                         235
#define ADDEN1                        236
#define ADEN                          237
#define CREN1                         238
#define CREN                          239
#define SREN                          240
#define SRENA                         241
#define SREN1                         242
#define RX9                           243
#define RC8_9                         244
#define nRC8                          245
#define NOT_RC8                       246
#define RC9                           247
#define RX91                          248
#define SPEN                          249
#define SPEN1                         250
#define TXSTA                         251
#define TXD8                          252
#define TX9D1                         253
#define TX9D                          254
#define TRMT                          255
#define TRMT1                         256
#define BRGH1                         257
#define BRGH                          258
#define SENDB1                        259
#define SENDB                         260
#define SYNC                          261
#define SYNC1                         262
#define TXEN                          263
#define TXEN1                         264
#define TX91                          265
#define TX8_9                         266
#define TX9                           267
#define NOT_TX8                       268
#define nTX8                          269
#define CSRC1                         270
#define CSRC                          271
#define CMCON                         272
#define CM                            273
#define CMEN0                         274
#define CM0                           275
#define CMEN1                         276
#define CM1                           277
#define CMEN2                         278
#define CM2                           279
#define CIS                           280
#define C1INV                         281
#define C2INV                         282
#define CMCON_C1OUT                   283
#define CMCON_C2OUT                   284
#define CVRCON                        285
#define CVR                           286
#define CVR0                          287
#define CVR1                          288
#define CVR2                          289
#define CVR3                          290
#define CVRSS                         291
#define CVRR                          292
#define CVROEN                        293
#define CVROE                         294
#define CVREN                         295
#define ECCP1AS                       296
#define PSSAC                         297
#define PSSAC0                        298
#define PSSAC1                        299
#define ECCPAS0                       300
#define ECCPAS                        301
#define ECCPAS1                       302
#define ECCPAS2                       303
#define ECCPASE                       304
#define ECCP1DEL                      305
#define PRSEN                         306
#define BAUDCON                       307
#define ABDEN                         308
#define W4E                           309
#define WUE                           310
#define BRG16                         311
#define SCKP                          312
#define RCMT                          313
#define RCIDL                         314
#define ABDOVF                        315
#define CCP2CON                       316
#define CCP2M                         317
#define CCP2M0                        318
#define CCP2M1                        319
#define CCP2M2                        320
#define CCP2M3                        321
#define DC2B0                         322
#define CCP2Y                         323
#define DC2B                          324
#define DC2B1                         325
#define CCP2X                         326
#define CCP1CON                       327
#define CCP1M0                        328
#define CCP1M                         329
#define CCP1M1                        330
#define CCP1M2                        331
#define CCP1M3                        332
#define CCP1Y                         333
#define DC1B                          334
#define DC1B0                         335
#define CCP1X                         336
#define DC1B1                         337
#define ADCON2                        338
#define ADCS0                         339
#define ADCS                          340
#define ADCS1                         341
#define ADCS2                         342
#define ACQT0                         343
#define ACQT                          344
#define ACQT1                         345
#define ACQT2                         346
#define ADFM                          347
#define ADCON1                        348
#define PCFG0                         349
#define PCFG                          350
#define PCFG1                         351
#define PCFG2                         352
#define CHSN3                         353
#define PCFG3                         354
#define VCFG                          355
#define VCFG0                         356
#define VCFG01                        357
#define VCFG11                        358
#define VCFG1                         359
#define ADCON0                        360
#define ADON                          361
#define nDONE                         362
#define GO_nDONE                      363
#define NOT_DONE                      364
#define GODONE                        365
#define GO_DONE                       366
#define DONE                          367
#define GO_NOT_DONE                   368
#define GO                            369
#define CHS0                          370
#define CHS                           371
#define CHS1                          372
#define CHS2                          373
#define CHS3                          374
#define ADCAL                         375
#define SSPCON2                       376
#define SEN1                          377
#define SEN                           378
#define ADMSK11                       379
#define RSEN1                         380
#define RSEN                          381
#define ADMSK1                        382
#define PEN                           383
#define ADMSK21                       384
#define PEN1                          385
#define ADMSK2                        386
#define ADMSK31                       387
#define RCEN                          388
#define RCEN1                         389
#define ADMSK3                        390
#define ACKEN                         391
#define ACKEN1                        392
#define ADMSK41                       393
#define ADMSK4                        394
#define ACKDT1                        395
#define ADMSK51                       396
#define ADMSK5                        397
#define ACKDT                         398
#define ACKSTAT                       399
#define ACKSTAT1                      400
#define GCEN                          401
#define GCEN1                         402
#define SSPCON1                       403
#define SSPM0                         404
#define SSPM                          405
#define SSPM01                        406
#define SSPM1                         407
#define SSPM11                        408
#define SSPM2                         409
#define SSPM21                        410
#define SSPM31                        411
#define SSPM3                         412
#define CKP                           413
#define CKP1                          414
#define SSPEN                         415
#define SSPEN1                        416
#define SSPOV1                        417
#define SSPOV                         418
#define WCOL1                         419
#define WCOL                          420
#define SSPSTAT                       421
#define BF                            422
#define BF1                           423
#define UA1                           424
#define UA                            425
#define R_NOT_W                       426
#define READ_WRITE                    427
#define RW1                           428
#define NOT_W                         429
#define R_W                           430
#define nW                            431
#define RW                            432
#define nWRITE                        433
#define R                             434
#define NOT_WRITE                     435
#define R_nW                          436
#define I2C_READ                      437
#define START                         438
#define START1                        439
#define S                             440
#define I2C_START                     441
#define STOP                          442
#define STOP1                         443
#define I2C_STOP                      444
#define P                             445
#define NOT_A                         446
#define DATA_ADDRESS                  447
#define nA                            448
#define D_A                           449
#define D_nA                          450
#define D                             451
#define DA1                           452
#define DA                            453
#define D_NOT_A                       454
#define NOT_ADDRESS                   455
#define nADDRESS                      456
#define I2C_DAT                       457
#define CKE                           458
#define CKE1                          459
#define SMP                           460
#define SMP1                          461
#define SSPADD                        462
#define MSK01                         463
#define MSK0                          464
#define MSK11                         465
#define MSK1                          466
#define MSK21                         467
#define MSK2                          468
#define MSK3                          469
#define MSK31                         470
#define MSK4                          471
#define MSK41                         472
#define MSK51                         473
#define MSK5                          474
#define MSK61                         475
#define MSK6                          476
#define MSK71                         477
#define MSK7                          478
#define T2CON                         479
#define T2CKPS0                       480
#define T2CKPS                        481
#define T2CKPS1                       482
#define TMR2ON                        483
#define T2OUTPS0                      484
#define TOUTPS0                       485
#define TOUTPS                        486
#define T2OUTPS1                      487
#define TOUTPS1                       488
#define T2OUTPS2                      489
#define TOUTPS2                       490
#define T2OUTPS3                      491
#define TOUTPS3                       492
#define PR2                           493
#define WM0                           494
#define WM1                           495
#define WAIT0                         496
#define WAIT1                         497
#define EBDIS                         498
#define T1CON                         499
#define TMR1ON                        500
#define TMR1CS                        501
#define NOT_T1SYNC                    502
#define T1SYNC                        503
#define nT1SYNC                       504
#define T1INSYNC                      505
#define T1OSCEN                       506
#define SOSCEN                        507
#define T1CKPS0                       508
#define T1CKPS                        509
#define T1CKPS1                       510
#define T1RUN                         511
#define RD16                          512
#define T1RD16                        513
#define RCON                          514
#define BOR                           515
#define NOT_BOR                       516
#define nBOR                          517
#define POR                           518
#define nPOR                          519
#define NOT_POR                       520
#define nPD                           521
#define NOT_PD                        522
#define PD                            523
#define NOT_TO                        524
#define nTO                           525
#define TO                            526
#define nRI                           527
#define NOT_RI                        528
#define RI                            529
#define IPEN                          530
#define WDTCON                        531
#define SWDTE                         532
#define SWDTEN                        533
#define OSCCON                        534
#define SCS0                          535
#define SCS                           536
#define SCS1                          537
#define OSTS                          538
#define IDLEN                         539
#define T0CON                         540
#define T0PS                          541
#define T0PS0                         542
#define T0PS1                         543
#define T0PS2                         544
#define PSA                           545
#define T0SE                          546
#define T0CS                          547
#define T08BIT                        548
#define TMR0ON                        549
#define STATUS                        550
#define C                             551
#define CARRY                         552
#define DC                            553
#define ZERO                          554
#define Z                             555
#define OV                            556
#define OVERFLOW                      557
#define N                             558
#define NEGATIVE                      559
#define INTCON3                       560
#define INT1IF                        561
#define INT1F                         562
#define INT2IF                        563
#define INT2F                         564
#define INT1E                         565
#define INT1IE                        566
#define INT2IE                        567
#define INT2E                         568
#define INT1P                         569
#define INT1IP                        570
#define INT2IP                        571
#define INT2P                         572
#define INTCON2                       573
#define RBIP                          574
#define TMR0IP                        575
#define T0IP                          576
#define INTEDG2                       577
#define INTEDG1                       578
#define INTEDG0                       579
#define RBPU                          580
#define NOT_RBPU                      581
#define nRBPU                         582
#define INTCON                        583
#define RBIF                          584
#define INT0F                         585
#define INT0IF                        586
#define T0IF                          587
#define TMR0IF                        588
#define RBIE                          589
#define INT0E                         590
#define INT0IE                        591
#define T0IE                          592
#define TMR0IE                        593
#define PEIE                          594
#define PEIE_GIEL                     595
#define GIEL                          596
#define GIE_GIEH                      597
#define GIE                           598
#define GIEH                          599
#define STKPTR0                       600
#define STKPTR                        601
#define STKPTR1                       602
#define STKPTR2                       603
#define STKPTR3                       604
#define STKPTR4                       605
#define STKUNF                        606
#define STKOVF                        607
#define STKFUL                        608

#endif // _PIC18F25J10_H_
