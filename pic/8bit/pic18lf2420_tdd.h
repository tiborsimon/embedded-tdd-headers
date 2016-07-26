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

#ifndef _PIC18LF2420_H_
#define _PIC18LF2420_H_

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
#define PA1                           68
#define PORTC_RC2                     69
#define SCL                           70
#define SCK                           71
#define PORTC_RC3                     72
#define SDA                           73
#define SDI                           74
#define PORTC_RC4                     75
#define SDO                           76
#define PORTC_RC5                     77
#define TX                            78
#define CK                            79
#define PORTC_RC6                     80
#define DT                            81
#define RX                            82
#define PORTC_RC7                     83
#define PORTE                         84
#define VPP                           85
#define RE3                           86
#define NOT_MCLR                      87
#define MCLR                          88
#define CCP9E                         89
#define nMCLR                         90
#define PC3E                          91
#define LATA                          92
#define LATA0                         93
#define LA0                           94
#define LATA1                         95
#define LA1                           96
#define LATA2                         97
#define LA2                           98
#define LATA3                         99
#define LA3                           100
#define LATA4                         101
#define LA4                           102
#define LATA5                         103
#define LA5                           104
#define LATA6                         105
#define LA6                           106
#define LATA7                         107
#define LA7                           108
#define LATB                          109
#define LB0                           110
#define LATB0                         111
#define LB1                           112
#define LATB1                         113
#define LB2                           114
#define LATB2                         115
#define LB3                           116
#define LATB3                         117
#define LB4                           118
#define LATB4                         119
#define LB5                           120
#define LATB5                         121
#define LB6                           122
#define LATB6                         123
#define LB7                           124
#define LATB7                         125
#define LATC                          126
#define LATC0                         127
#define LC0                           128
#define LATC1                         129
#define LC1                           130
#define LATC2                         131
#define LC2                           132
#define LATC3                         133
#define LC3                           134
#define LATC4                         135
#define LC4                           136
#define LATC5                         137
#define LC5                           138
#define LATC6                         139
#define LC6                           140
#define LATC7                         141
#define LC7                           142
#define TRISA                         143
#define TRISA0                        144
#define TRISA_RA0                     145
#define TRISA1                        146
#define TRISA_RA1                     147
#define TRISA2                        148
#define TRISA_RA2                     149
#define TRISA3                        150
#define TRISA_RA3                     151
#define TRISA_RA4                     152
#define TRISA4                        153
#define TRISA_RA5                     154
#define TRISA5                        155
#define TRISA_RA6                     156
#define TRISA6                        157
#define TRISA_RA7                     158
#define TRISA7                        159
#define TRISB                         160
#define TRISB_RB0                     161
#define TRISB0                        162
#define TRISB_RB1                     163
#define TRISB1                        164
#define TRISB_RB2                     165
#define TRISB2                        166
#define TRISB_RB3                     167
#define TRISB3                        168
#define TRISB_RB4                     169
#define TRISB4                        170
#define TRISB_RB5                     171
#define TRISB5                        172
#define TRISB_RB6                     173
#define TRISB6                        174
#define TRISB_RB7                     175
#define TRISB7                        176
#define TRISC                         177
#define TRISC0                        178
#define TRISC_RC0                     179
#define TRISC1                        180
#define TRISC_RC1                     181
#define TRISC2                        182
#define TRISC_RC2                     183
#define TRISC3                        184
#define TRISC_RC3                     185
#define TRISC4                        186
#define TRISC_RC4                     187
#define TRISC5                        188
#define TRISC_RC5                     189
#define TRISC6                        190
#define TRISC_RC6                     191
#define TRISC7                        192
#define TRISC_RC7                     193
#define OSCTUNE                       194
#define TUN0                          195
#define TUN                           196
#define TUN1                          197
#define TUN2                          198
#define TUN3                          199
#define TUN4                          200
#define PLLEN                         201
#define INTSRC                        202
#define PIE1                          203
#define TMR1IE                        204
#define TMR2IE                        205
#define CCP1IE                        206
#define SSPIE                         207
#define TXIE                          208
#define TX1IE                         209
#define RCIE                          210
#define RC1IE                         211
#define ADIE                          212
#define PIR1                          213
#define TMR1IF                        214
#define TMR2IF                        215
#define CCP1IF                        216
#define SSPIF                         217
#define TXIF                          218
#define TX1IF                         219
#define RCIF                          220
#define RC1IF                         221
#define ADIF                          222
#define IPR1                          223
#define TMR1IP                        224
#define TMR2IP                        225
#define CCP1IP                        226
#define SSPIP                         227
#define TX1IP                         228
#define TXIP                          229
#define RC1IP                         230
#define RCIP                          231
#define ADIP                          232
#define PIE2                          233
#define CCP2IE                        234
#define TMR3IE                        235
#define HLVDIE                        236
#define LVDIE                         237
#define BCLIE                         238
#define EEIE                          239
#define CMIE                          240
#define OSCFIE                        241
#define PIR2                          242
#define CCP2IF                        243
#define TMR3IF                        244
#define HLVDIF                        245
#define LVDIF                         246
#define BCLIF                         247
#define EEIF                          248
#define CMIF                          249
#define OSCFIF                        250
#define IPR2                          251
#define CCP2IP                        252
#define TMR3IP                        253
#define HLVDIP                        254
#define LVDIP                         255
#define BCLIP                         256
#define EEIP                          257
#define CMIP                          258
#define OSCFIP                        259
#define EECON1                        260
#define RD                            261
#define WR                            262
#define WREN                          263
#define WRERR                         264
#define FREE                          265
#define CFGS                          266
#define EEFS                          267
#define EEPGD                         268
#define RCSTA                         269
#define RCD8                          270
#define RX9D                          271
#define OERR                          272
#define FERR                          273
#define ADDEN                         274
#define ADEN                          275
#define CREN                          276
#define SRENA                         277
#define SREN                          278
#define RC9                           279
#define RC8_9                         280
#define RX9                           281
#define SPEN                          282
#define TXSTA                         283
#define TXD8                          284
#define TX9D1                         285
#define TX9D                          286
#define TRMT                          287
#define TRMT1                         288
#define BRGH1                         289
#define BRGH                          290
#define SENDB1                        291
#define SENDB                         292
#define SYNC                          293
#define SYNC1                         294
#define TXEN1                         295
#define TXEN                          296
#define TX91                          297
#define TX8_9                         298
#define TX9                           299
#define CSRC1                         300
#define CSRC                          301
#define T3CON                         302
#define TMR3ON                        303
#define TMR3CS                        304
#define nT3SYNC                       305
#define NOT_T3SYNC                    306
#define T3SYNC                        307
#define SOSCEN3                       308
#define T3CCP1                        309
#define T3CKPS                        310
#define T3CKPS0                       311
#define T3CKPS1                       312
#define T3CCP2                        313
#define T3CON_RD16                    314
#define RD163                         315
#define T3RD16                        316
#define CMCON                         317
#define CM                            318
#define CMEN0                         319
#define CM0                           320
#define CMEN1                         321
#define CM1                           322
#define CMEN2                         323
#define CM2                           324
#define CIS                           325
#define C1INV                         326
#define C2INV                         327
#define CMCON_C1OUT                   328
#define CMCON_C2OUT                   329
#define CVRCON                        330
#define CVR                           331
#define CVR0                          332
#define CVR1                          333
#define CVR2                          334
#define CVR3                          335
#define CVRSS                         336
#define CVRR                          337
#define CVROEN                        338
#define CVROE                         339
#define CVREN                         340
#define ECCP1AS                       341
#define PSSAC                         342
#define PSSAC0                        343
#define PSSAC1                        344
#define ECCPAS0                       345
#define ECCPAS                        346
#define ECCPAS1                       347
#define ECCPAS2                       348
#define ECCPASE                       349
#define PWM1CON                       350
#define PRSEN                         351
#define BAUDCON                       352
#define ABDEN                         353
#define W4E                           354
#define WUE                           355
#define BRG16                         356
#define TXCKP                         357
#define SCKP                          358
#define RXCKP                         359
#define RXDTP                         360
#define RCMT                          361
#define RCIDL                         362
#define ABDOVF                        363
#define CCP2CON                       364
#define CCP2M                         365
#define CCP2M0                        366
#define CCP2M1                        367
#define CCP2M2                        368
#define CCP2M3                        369
#define DC2B0                         370
#define CCP2Y                         371
#define DC2B                          372
#define DC2B1                         373
#define CCP2X                         374
#define CCP1CON                       375
#define CCP1M0                        376
#define CCP1M                         377
#define CCP1M1                        378
#define CCP1M2                        379
#define CCP1M3                        380
#define CCP1Y                         381
#define DC1B                          382
#define DC1B0                         383
#define CCP1X                         384
#define DC1B1                         385
#define ADCON2                        386
#define ADCS0                         387
#define ADCS                          388
#define ADCS1                         389
#define ADCS2                         390
#define ACQT0                         391
#define ACQT                          392
#define ACQT1                         393
#define ACQT2                         394
#define ADFM                          395
#define ADCON1                        396
#define PCFG0                         397
#define PCFG                          398
#define PCFG1                         399
#define PCFG2                         400
#define CHSN3                         401
#define PCFG3                         402
#define VCFG                          403
#define VCFG0                         404
#define VCFG01                        405
#define VCFG11                        406
#define VCFG1                         407
#define ADCON0                        408
#define ADON                          409
#define nDONE                         410
#define GO_nDONE                      411
#define NOT_DONE                      412
#define GODONE                        413
#define GO_DONE                       414
#define DONE                          415
#define GO_NOT_DONE                   416
#define GO                            417
#define CHS                           418
#define CHS0                          419
#define CHS1                          420
#define CHS2                          421
#define CHS3                          422
#define SSPCON2                       423
#define SEN                           424
#define RSEN                          425
#define ADMSK1                        426
#define PEN                           427
#define ADMSK2                        428
#define RCEN                          429
#define ADMSK3                        430
#define ACKEN                         431
#define ADMSK4                        432
#define ADMSK5                        433
#define ACKDT                         434
#define ACKSTAT                       435
#define GCEN                          436
#define SSPCON1                       437
#define SSPM0                         438
#define SSPM                          439
#define SSPM1                         440
#define SSPM2                         441
#define SSPM3                         442
#define CKP                           443
#define SSPEN                         444
#define SSPOV                         445
#define WCOL                          446
#define SSPSTAT                       447
#define BF                            448
#define UA                            449
#define R_NOT_W                       450
#define NOT_W                         451
#define nW                            452
#define RW                            453
#define nWRITE                        454
#define R                             455
#define W                             456
#define NOT_WRITE                     457
#define R_nW                          458
#define R_W                           459
#define START                         460
#define S                             461
#define STOP                          462
#define P                             463
#define A                             464
#define NOT_A                         465
#define nA                            466
#define D_A                           467
#define D_nA                          468
#define D                             469
#define DA                            470
#define D_NOT_A                       471
#define NOT_ADDRESS                   472
#define nADDRESS                      473
#define CKE                           474
#define SMP                           475
#define T2CON                         476
#define T2CKPS0                       477
#define T2CKPS                        478
#define T2CKPS1                       479
#define TMR2ON                        480
#define T2OUTPS0                      481
#define T2OUTPS                       482
#define TOUTPS0                       483
#define T2OUTPS1                      484
#define TOUTPS1                       485
#define T2OUTPS2                      486
#define TOUTPS2                       487
#define T2OUTPS3                      488
#define TOUTPS3                       489
#define PR2                           490
#define WM0                           491
#define WM1                           492
#define WAIT0                         493
#define WAIT1                         494
#define EBDIS                         495
#define T1CON                         496
#define TMR1ON                        497
#define TMR1CS                        498
#define NOT_T1SYNC                    499
#define T1SYNC                        500
#define nT1SYNC                       501
#define T1OSCEN                       502
#define SOSCEN                        503
#define T1CKPS0                       504
#define T1CKPS                        505
#define T1CKPS1                       506
#define T1RUN                         507
#define T1CON_RD16                    508
#define T1RD16                        509
#define RCON                          510
#define BOR                           511
#define NOT_BOR                       512
#define nBOR                          513
#define POR                           514
#define nPOR                          515
#define NOT_POR                       516
#define PD                            517
#define nPD                           518
#define NOT_PD                        519
#define NOT_TO                        520
#define nTO                           521
#define TO                            522
#define nRI                           523
#define NOT_RI                        524
#define RI                            525
#define SBOREN                        526
#define IPEN                          527
#define WDTCON                        528
#define SWDTE                         529
#define SWDTEN                        530
#define HLVDCON                       531
#define HLVDL                         532
#define HLVDL0                        533
#define LVV0                          534
#define LVDL0                         535
#define HLVDL1                        536
#define LVDL1                         537
#define LVV1                          538
#define HLVDL2                        539
#define LVV2                          540
#define LVDL2                         541
#define HLVDL3                        542
#define LVV3                          543
#define LVDL3                         544
#define HLVDEN                        545
#define LVDEN                         546
#define BGST                          547
#define IRVST                         548
#define IVRST                         549
#define VDIRMAG                       550
#define OSCCON                        551
#define SCS0                          552
#define SCS                           553
#define SCS1                          554
#define FLTS                          555
#define IOFS                          556
#define OSTS                          557
#define IRCF                          558
#define IRCF0                         559
#define IRCF1                         560
#define IRCF2                         561
#define IDLEN                         562
#define T0CON                         563
#define T0PS                          564
#define T0PS0                         565
#define T0PS1                         566
#define T0PS2                         567
#define PSA                           568
#define T0PS3                         569
#define T0SE                          570
#define T0CS                          571
#define T08BIT                        572
#define T016BIT                       573
#define TMR0ON                        574
#define STATUS                        575
#define C                             576
#define CARRY                         577
#define DC                            578
#define ZERO                          579
#define Z                             580
#define OV                            581
#define OVERFLOW                      582
#define N                             583
#define NEGATIVE                      584
#define INTCON3                       585
#define INT1IF                        586
#define INT1F                         587
#define INT2IF                        588
#define INT2F                         589
#define INT1E                         590
#define INT1IE                        591
#define INT2IE                        592
#define INT2E                         593
#define INT1P                         594
#define INT1IP                        595
#define INT2IP                        596
#define INT2P                         597
#define INTCON2                       598
#define RBIP                          599
#define TMR0IP                        600
#define INTEDG2                       601
#define INTEDG1                       602
#define INTEDG0                       603
#define RBPU                          604
#define NOT_RBPU                      605
#define nRBPU                         606
#define INTCON                        607
#define RBIF                          608
#define INT0F                         609
#define INT0IF                        610
#define T0IF                          611
#define TMR0IF                        612
#define RBIE                          613
#define INT0E                         614
#define INT0IE                        615
#define T0IE                          616
#define TMR0IE                        617
#define PEIE                          618
#define PEIE_GIEL                     619
#define GIEL                          620
#define GIE_GIEH                      621
#define GIE                           622
#define GIEH                          623
#define SP0                           624
#define STKPTR                        625
#define SP1                           626
#define SP2                           627
#define SP3                           628
#define SP4                           629
#define STKUNF                        630
#define STKOVF                        631
#define STKFUL                        632

#endif // _PIC18LF2420_H_
