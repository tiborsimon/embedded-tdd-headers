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

#ifndef _PIC16F1703_H_
#define _PIC16F1703_H_

#define INDF0                         0
#define INDF1                         1
#define PCL                           2
#define STATUS                        3
#define C                             4
#define CARRY                         5
#define DC                            6
#define ZERO                          7
#define Z                             8
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
#define RA2                           38
#define RA3                           39
#define RA4                           40
#define RA5                           41
#define PORTC                         42
#define RC0                           43
#define RC1                           44
#define RC2                           45
#define RC3                           46
#define RC4                           47
#define RC5                           48
#define PIR1                          49
#define TMR1IF                        50
#define TMR2IF                        51
#define CCP1IF                        52
#define CCPIF                         53
#define SSP1IF                        54
#define ADIF                          55
#define TMR1GIF                       56
#define PIR2                          57
#define CCP2IF                        58
#define BCL1IF                        59
#define PIR3                          60
#define ZCDIF                         61
#define TMR0                          62
#define TMR1L                         63
#define TMR1H                         64
#define T1CON                         65
#define TMR1ON                        66
#define nT1SYNC                       67
#define T1OSCEN                       68
#define T1CKPS0                       69
#define T1CKPS                        70
#define T1CKPS1                       71
#define TMR1CS0                       72
#define TMR1CS                        73
#define TMR1CS1                       74
#define T1GCON                        75
#define T1GSS0                        76
#define T1GSS                         77
#define T1GSS1                        78
#define T1GVAL                        79
#define T1GGO_nDONE                   80
#define T1GSPM                        81
#define T1GTM                         82
#define T1GPOL                        83
#define TMR1GE                        84
#define TMR2                          85
#define PR2                           86
#define T2CON                         87
#define T2CKPS0                       88
#define T2CKPS                        89
#define T2CKPS1                       90
#define TMR2ON                        91
#define T2OUTPS0                      92
#define T2OUTPS                       93
#define T2OUTPS1                      94
#define T2OUTPS2                      95
#define T2OUTPS3                      96
#define TRISA                         97
#define TRISA0                        98
#define TRISA1                        99
#define TRISA2                        100
#define TRISA4                        101
#define TRISA5                        102
#define TRISC                         103
#define TRISC0                        104
#define TRISC1                        105
#define TRISC2                        106
#define TRISC3                        107
#define TRISC4                        108
#define TRISC5                        109
#define PIE1                          110
#define TMR1IE                        111
#define TMR2IE                        112
#define CCP1IE                        113
#define CCPIE                         114
#define SSP1IE                        115
#define ADIE                          116
#define TMR1GIE                       117
#define PIE2                          118
#define CCP2IE                        119
#define BCL1IE                        120
#define PIE3                          121
#define ZCDIE                         122
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
#define OSCCON                        159
#define SCS0                          160
#define SCS                           161
#define SCS1                          162
#define IRCF                          163
#define IRCF0                         164
#define IRCF1                         165
#define IRCF2                         166
#define IRCF3                         167
#define SPLLEN                        168
#define OSCSTAT                       169
#define HFIOFS                        170
#define LFIOFR                        171
#define MFIOFR                        172
#define HFIOFL                        173
#define HFIOFR                        174
#define OSTS                          175
#define PLLR                          176
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
#define ADNREF                        195
#define ADCS                          196
#define ADFM                          197
#define ADCON2                        198
#define TRIGSEL                       199
#define TRIGSEL0                      200
#define TRIGSEL1                      201
#define TRIGSEL2                      202
#define TRIGSEL3                      203
#define LATA                          204
#define LATA0                         205
#define LATA1                         206
#define LATA2                         207
#define LATA4                         208
#define LATA5                         209
#define LATC                          210
#define LATC0                         211
#define LATC1                         212
#define LATC2                         213
#define LATC3                         214
#define LATC4                         215
#define LATC5                         216
#define BORCON                        217
#define BORRDY                        218
#define BORFS                         219
#define SBOREN                        220
#define FVRCON                        221
#define ADFVR0                        222
#define ADFVR                         223
#define ADFVR1                        224
#define CDAFVR                        225
#define CDAFVR0                       226
#define CDAFVR1                       227
#define TSRNG                         228
#define TSEN                          229
#define FVRRDY                        230
#define FVREN                         231
#define ZCD1CON                       232
#define ZCD1INTN                      233
#define ZCD1INTP                      234
#define ZCD1POL                       235
#define ZCD1OUT                       236
#define ZCD1EN                        237
#define ANSELA                        238
#define ANSA0                         239
#define ANSA1                         240
#define ANSA2                         241
#define ANSA4                         242
#define ANSELC                        243
#define ANSC0                         244
#define ANSC1                         245
#define ANSC2                         246
#define ANSC3                         247
#define ANSC4                         248
#define ANSC5                         249
#define PMADRL                        250
#define PMADRH                        251
#define PMDATL                        252
#define PMDATH                        253
#define PMCON1                        254
#define RD                            255
#define WR                            256
#define WREN                          257
#define WRERR                         258
#define FREE                          259
#define LWLO                          260
#define CFGS                          261
#define PMCON2                        262
#define VREGCON                       263
#define VREGPM                        264
#define WPUA                          265
#define WPUA0                         266
#define WPUA1                         267
#define WPUA2                         268
#define WPUA3                         269
#define WPUA4                         270
#define WPUA5                         271
#define WPUC                          272
#define WPUC0                         273
#define WPUC1                         274
#define WPUC2                         275
#define WPUC3                         276
#define WPUC4                         277
#define WPUC5                         278
#define SSP1BUF                       279
#define BUF                           280
#define BUF0                          281
#define SSP1BUF0                      282
#define BUF1                          283
#define SSP1BUF1                      284
#define BUF2                          285
#define SSP1BUF2                      286
#define BUF3                          287
#define SSP1BUF3                      288
#define BUF4                          289
#define SSP1BUF4                      290
#define BUF5                          291
#define SSP1BUF5                      292
#define BUF6                          293
#define SSP1BUF6                      294
#define BUF7                          295
#define SSP1BUF7                      296
#define ADD0                          297
#define ADD                           298
#define SSP1ADD0                      299
#define SSP1ADD                       300
#define ADD1                          301
#define SSP1ADD1                      302
#define ADD2                          303
#define SSP1ADD2                      304
#define ADD3                          305
#define SSP1ADD3                      306
#define ADD4                          307
#define SSP1ADD4                      308
#define ADD5                          309
#define SSP1ADD5                      310
#define ADD6                          311
#define SSP1ADD6                      312
#define ADD7                          313
#define SSP1ADD7                      314
#define SSP1MSK0                      315
#define SSP1MSK                       316
#define MSK0                          317
#define MSK                           318
#define SSP1MSK1                      319
#define MSK1                          320
#define SSP1MSK2                      321
#define MSK2                          322
#define SSP1MSK3                      323
#define MSK3                          324
#define SSP1MSK4                      325
#define MSK4                          326
#define SSP1MSK5                      327
#define MSK5                          328
#define SSP1MSK6                      329
#define MSK6                          330
#define SSP1MSK7                      331
#define MSK7                          332
#define SSP1STAT                      333
#define BF                            334
#define UA                            335
#define R_nW                          336
#define S                             337
#define P                             338
#define D_nA                          339
#define CKE                           340
#define SMP                           341
#define SSP1CON1                      342
#define SSPM0                         343
#define SSPM                          344
#define SSPM1                         345
#define SSPM2                         346
#define SSPM3                         347
#define CKP                           348
#define SSPEN                         349
#define SSPOV                         350
#define WCOL                          351
#define SSP1CON2                      352
#define SEN                           353
#define RSEN                          354
#define PEN                           355
#define RCEN                          356
#define ACKEN                         357
#define ACKDT                         358
#define ACKSTAT                       359
#define GCEN                          360
#define SSP1CON3                      361
#define DHEN                          362
#define AHEN                          363
#define SBCDE                         364
#define SDAHT                         365
#define BOEN                          366
#define SCIE                          367
#define PCIE                          368
#define ACKTIM                        369
#define ODCONA                        370
#define ODA0                          371
#define ODA1                          372
#define ODA2                          373
#define ODA4                          374
#define ODA5                          375
#define ODCONC                        376
#define ODC0                          377
#define ODC1                          378
#define ODC2                          379
#define ODC3                          380
#define ODC4                          381
#define ODC5                          382
#define CCPR1L                        383
#define CCPR1H                        384
#define CCP1CON                       385
#define CCP1M0                        386
#define CCP1M                         387
#define CCP1M1                        388
#define CCP1M2                        389
#define CCP1M3                        390
#define CCP1Y                         391
#define DC1B                          392
#define DC1B0                         393
#define CCP1X                         394
#define DC1B1                         395
#define CCPR2L                        396
#define CCPR2H                        397
#define CCP2CON                       398
#define CCP2M                         399
#define CCP2M0                        400
#define CCP2M1                        401
#define CCP2M2                        402
#define CCP2M3                        403
#define DC2B0                         404
#define CCP2Y                         405
#define DC2B                          406
#define DC2B1                         407
#define CCP2X                         408
#define SLRCONA                       409
#define SLRA0                         410
#define SLRA1                         411
#define SLRA2                         412
#define SLRA4                         413
#define SLRA5                         414
#define SLRCONC                       415
#define SLRC0                         416
#define SLRC1                         417
#define SLRC2                         418
#define SLRC3                         419
#define SLRC4                         420
#define SLRC5                         421
#define INLVLA                        422
#define INLVLA0                       423
#define INLVLA1                       424
#define INLVLA2                       425
#define INLVLA3                       426
#define INLVLA4                       427
#define INLVLA5                       428
#define INLVLC                        429
#define INLVLC0                       430
#define INLVLC1                       431
#define INLVLC2                       432
#define INLVLC3                       433
#define INLVLC4                       434
#define INLVLC5                       435
#define IOCAP                         436
#define IOCAP0                        437
#define IOCAP1                        438
#define IOCAP2                        439
#define IOCAP3                        440
#define IOCAP4                        441
#define IOCAP5                        442
#define IOCAN                         443
#define IOCAN0                        444
#define IOCAN1                        445
#define IOCAN2                        446
#define IOCAN3                        447
#define IOCAN4                        448
#define IOCAN5                        449
#define IOCAF                         450
#define IOCAF0                        451
#define IOCAF1                        452
#define IOCAF2                        453
#define IOCAF3                        454
#define IOCAF4                        455
#define IOCAF5                        456
#define IOCCP                         457
#define IOCCP0                        458
#define IOCCP1                        459
#define IOCCP2                        460
#define IOCCP3                        461
#define IOCCP4                        462
#define IOCCP5                        463
#define IOCCN                         464
#define IOCCN0                        465
#define IOCCN1                        466
#define IOCCN2                        467
#define IOCCN3                        468
#define IOCCN4                        469
#define IOCCN5                        470
#define IOCCF                         471
#define IOCCF0                        472
#define IOCCF1                        473
#define IOCCF2                        474
#define IOCCF3                        475
#define IOCCF4                        476
#define IOCCF5                        477
#define OPA1CON                       478
#define OPA1PCH                       479
#define OPA1PCH0                      480
#define OPA1PCH1                      481
#define OPA1UG                        482
#define OPA1SP                        483
#define OPA1EN                        484
#define OPA2CON                       485
#define OPA2PCH                       486
#define OPA2PCH0                      487
#define OPA2PCH1                      488
#define OPA2UG                        489
#define OPA2SP                        490
#define OPA2EN                        491
#define PPSLOCK                       492
#define PPSLOCKED                     493
#define INTPPS                        494
#define T0CKIPPS                      495
#define T1CKIPPS                      496
#define T1GPPS                        497
#define CCP1PPS                       498
#define CCP2PPS                       499
#define SSPCLKPPS                     500
#define SSPDATPPS                     501
#define SSPSSPPS                      502
#define RA0PPS                        503
#define RA1PPS                        504
#define RA2PPS                        505
#define RA4PPS                        506
#define RA5PPS                        507
#define RC0PPS                        508
#define RC1PPS                        509
#define RC2PPS                        510
#define RC3PPS                        511
#define RC4PPS                        512
#define RC5PPS                        513
#define ICDBK0H                       514
#define BKA8                          515
#define BKA9                          516
#define BKA10                         517
#define BKA11                         518
#define BKA12                         519
#define BKA13                         520
#define BKA14                         521
#define STATUS_SHAD                   522
#define C_SHAD                        523
#define DC_SHAD                       524
#define Z_SHAD                        525
#define WREG_SHAD                     526
#define BSR_SHAD                      527
#define PCLATH_SHAD                   528
#define FSR0L_SHAD                    529
#define FSR0H_SHAD                    530
#define FSR1L_SHAD                    531
#define FSR1H_SHAD                    532
#define STKPTR                        533
#define TOSL                          534
#define TOSH                          535

#endif // _PIC16F1703_H_
