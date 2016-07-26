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

#ifndef _PIC16LF1512_H_
#define _PIC16LF1512_H_

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
#define RA6                           42
#define RA7                           43
#define PORTB                         44
#define RB0                           45
#define RB1                           46
#define RB2                           47
#define RB3                           48
#define RB4                           49
#define RB5                           50
#define RB6                           51
#define RB7                           52
#define PORTC                         53
#define RC0                           54
#define RC1                           55
#define RC2                           56
#define RC3                           57
#define RC4                           58
#define RC5                           59
#define RC6                           60
#define RC7                           61
#define PORTE                         62
#define RE3                           63
#define PIR1                          64
#define TMR1IF                        65
#define TMR2IF                        66
#define CCP1IF                        67
#define SSPIF                         68
#define TXIF                          69
#define RCIF                          70
#define ADIF                          71
#define TMR1GIF                       72
#define PIR2                          73
#define CCP2IF                        74
#define BCLIF                         75
#define OSFIF                         76
#define TMR0                          77
#define TMR1L                         78
#define TMR1H                         79
#define T1CON                         80
#define TMR1ON                        81
#define nT1SYNC                       82
#define T1OSCEN                       83
#define T1CKPS0                       84
#define T1CKPS                        85
#define T1CKPS1                       86
#define TMR1CS0                       87
#define TMR1CS                        88
#define TMR1CS1                       89
#define T1GCON                        90
#define T1GSS0                        91
#define T1GSS                         92
#define T1GSS1                        93
#define T1GVAL                        94
#define T1GGO_nDONE                   95
#define T1GSPM                        96
#define T1GTM                         97
#define T1GPOL                        98
#define TMR1GE                        99
#define TMR2                          100
#define PR2                           101
#define T2CON                         102
#define T2CKPS0                       103
#define T2CKPS                        104
#define T2CKPS1                       105
#define TMR2ON                        106
#define T2OUTPS0                      107
#define T2OUTPS                       108
#define T2OUTPS1                      109
#define T2OUTPS2                      110
#define T2OUTPS3                      111
#define TRISA                         112
#define TRISA0                        113
#define TRISA1                        114
#define TRISA2                        115
#define TRISA3                        116
#define TRISA4                        117
#define TRISA5                        118
#define TRISA6                        119
#define TRISA7                        120
#define TRISB                         121
#define TRISB0                        122
#define TRISB1                        123
#define TRISB2                        124
#define TRISB3                        125
#define TRISB4                        126
#define TRISB5                        127
#define TRISB6                        128
#define TRISB7                        129
#define TRISC                         130
#define TRISC0                        131
#define TRISC1                        132
#define TRISC2                        133
#define TRISC3                        134
#define TRISC4                        135
#define TRISC5                        136
#define TRISC6                        137
#define TRISC7                        138
#define PIE1                          139
#define TMR1IE                        140
#define TMR2IE                        141
#define CCP1IE                        142
#define SSPIE                         143
#define TXIE                          144
#define RCIE                          145
#define ADIE                          146
#define TMR1GIE                       147
#define PIE2                          148
#define CCP2IE                        149
#define BCLIE                         150
#define OSFIE                         151
#define OPTION_REG                    152
#define PS                            153
#define PS0                           154
#define PS1                           155
#define PS2                           156
#define PSA                           157
#define T0SE                          158
#define TMR0SE                        159
#define T0CS                          160
#define TMR0CS                        161
#define INTEDG                        162
#define nWPUEN                        163
#define PCON                          164
#define nBOR                          165
#define nPOR                          166
#define nRI                           167
#define nRMCLR                        168
#define nRWDT                         169
#define STKUNF                        170
#define STKOVF                        171
#define WDTCON                        172
#define SWDTEN                        173
#define WDTPS                         174
#define WDTPS0                        175
#define WDTPS1                        176
#define WDTPS2                        177
#define WDTPS3                        178
#define WDTPS4                        179
#define OSCCON                        180
#define SCS0                          181
#define SCS                           182
#define SCS1                          183
#define IRCF                          184
#define IRCF0                         185
#define IRCF1                         186
#define IRCF2                         187
#define IRCF3                         188
#define OSCSTAT                       189
#define HFIOFS                        190
#define LFIOFR                        191
#define HFIOFR                        192
#define OSTS                          193
#define SOSCR                         194
#define T1OSCR                        195
#define ADRES0L                       196
#define ADRES0L_ADRES0L               197
#define ADRES0H                       198
#define ADRES0H_ADRES0H               199
#define ADCON0                        200
#define ADCON0_ADON                   201
#define ADCON0_GO_nDONE               202
#define GO                            203
#define ADGO                          204
#define ADCON0_CHS                    205
#define ADCON0_CHS0                   206
#define ADCON0_CHS1                   207
#define ADCON0_CHS2                   208
#define ADCON0_CHS3                   209
#define ADCON0_CHS4                   210
#define ADCON1                        211
#define ADCON1_ADPREF                 212
#define ADCON1_ADPREF0                213
#define ADCON1_ADPREF1                214
#define ADCON1_ADCS0                  215
#define ADCON1_ADCS                   216
#define ADCON1_ADCS1                  217
#define ADCON1_ADCS2                  218
#define ADCON1_ADFM                   219
#define LATA                          220
#define LATA0                         221
#define LATA1                         222
#define LATA2                         223
#define LATA3                         224
#define LATA4                         225
#define LATA5                         226
#define LATA6                         227
#define LATA7                         228
#define LATB                          229
#define LATB0                         230
#define LATB1                         231
#define LATB2                         232
#define LATB3                         233
#define LATB4                         234
#define LATB5                         235
#define LATB6                         236
#define LATB7                         237
#define LATC                          238
#define LATC0                         239
#define LATC1                         240
#define LATC2                         241
#define LATC3                         242
#define LATC4                         243
#define LATC5                         244
#define LATC6                         245
#define LATC7                         246
#define BORCON                        247
#define BORRDY                        248
#define BORFS                         249
#define SBOREN                        250
#define FVRCON                        251
#define ADFVR0                        252
#define ADFVR                         253
#define ADFVR1                        254
#define TSRNG                         255
#define TSEN                          256
#define FVRRDY                        257
#define FVREN                         258
#define APFCON                        259
#define CCP2SEL                       260
#define SSSEL                         261
#define ANSA0                         262
#define ANSELA                        263
#define ANSA1                         264
#define ANSA2                         265
#define ANSA3                         266
#define ANSA5                         267
#define ANSB0                         268
#define ANSELB                        269
#define ANSB1                         270
#define ANSB2                         271
#define ANSB3                         272
#define ANSB4                         273
#define ANSB5                         274
#define ANSELC                        275
#define ANSC2                         276
#define ANSC3                         277
#define ANSC4                         278
#define ANSC5                         279
#define ANSC6                         280
#define ANSC7                         281
#define PMADRL                        282
#define PMADRH                        283
#define PMDATL                        284
#define PMDATH                        285
#define PMCON1                        286
#define RD                            287
#define WR                            288
#define WREN                          289
#define WRERR                         290
#define FREE                          291
#define LWLO                          292
#define CFGS                          293
#define PMCON2                        294
#define RCREG                         295
#define TXREG                         296
#define SP1BRGL                       297
#define SPBRGL                        298
#define SP1BRGH                       299
#define SPBRGH                        300
#define RCSTA                         301
#define RX9D                          302
#define OERR                          303
#define FERR                          304
#define ADDEN                         305
#define CREN                          306
#define SREN                          307
#define RX9                           308
#define SPEN                          309
#define TXSTA                         310
#define TX9D                          311
#define TRMT                          312
#define BRGH                          313
#define SENDB                         314
#define SYNC                          315
#define TXEN                          316
#define TX9                           317
#define CSRC                          318
#define BAUDCON                       319
#define ABDEN                         320
#define WUE                           321
#define BRG16                         322
#define SCKP                          323
#define RCIDL                         324
#define ABDOVF                        325
#define WPUB0                         326
#define WPUB                          327
#define WPUB1                         328
#define WPUB2                         329
#define WPUB3                         330
#define WPUB4                         331
#define WPUB5                         332
#define WPUB6                         333
#define WPUB7                         334
#define WPUE                          335
#define WPUE3                         336
#define SSPBUF                        337
#define SSPADD                        338
#define SSPMSK                        339
#define SSPSTAT                       340
#define BF                            341
#define UA                            342
#define R_nW                          343
#define S                             344
#define P                             345
#define D_nA                          346
#define CKE                           347
#define SMP                           348
#define SSPCON1                       349
#define SSPM0                         350
#define SSPM                          351
#define SSPM1                         352
#define SSPM2                         353
#define SSPM3                         354
#define CKP                           355
#define SSPEN                         356
#define SSPOV                         357
#define WCOL                          358
#define SSPCON2                       359
#define SEN                           360
#define RSEN                          361
#define PEN                           362
#define RCEN                          363
#define ACKEN                         364
#define ACKDT                         365
#define ACKSTAT                       366
#define GCEN                          367
#define SSPCON3                       368
#define DHEN                          369
#define AHEN                          370
#define SBCDE                         371
#define SDAHT                         372
#define BOEN                          373
#define SCIE                          374
#define PCIE                          375
#define ACKTIM                        376
#define CCPR1L                        377
#define CCPR1H                        378
#define CCP1CON                       379
#define CCP1M0                        380
#define CCP1M                         381
#define CCP1M1                        382
#define CCP1M2                        383
#define CCP1M3                        384
#define DC1B                          385
#define DC1B0                         386
#define DC1B1                         387
#define CCPR2L                        388
#define CCPR2H                        389
#define CCP2CON                       390
#define CCP2M                         391
#define CCP2M0                        392
#define CCP2M1                        393
#define CCP2M2                        394
#define CCP2M3                        395
#define DC2B0                         396
#define DC2B                          397
#define DC2B1                         398
#define IOCBP                         399
#define IOCBP0                        400
#define IOCBP1                        401
#define IOCBP2                        402
#define IOCBP3                        403
#define IOCBP4                        404
#define IOCBP5                        405
#define IOCBP6                        406
#define IOCBP7                        407
#define IOCBN0                        408
#define IOCBN                         409
#define IOCBN1                        410
#define IOCBN2                        411
#define IOCBN3                        412
#define IOCBN4                        413
#define IOCBN5                        414
#define IOCBN6                        415
#define IOCBN7                        416
#define IOCBF0                        417
#define IOCBF                         418
#define IOCBF1                        419
#define IOCBF2                        420
#define IOCBF3                        421
#define IOCBF4                        422
#define IOCBF5                        423
#define IOCBF6                        424
#define IOCBF7                        425
#define STATUS_SHAD                   426
#define C_SHAD                        427
#define DC_SHAD                       428
#define Z_SHAD                        429
#define WREG_SHAD                     430
#define BSR_SHAD                      431
#define PCLATH_SHAD                   432
#define FSR0L_SHAD                    433
#define FSR0H_SHAD                    434
#define FSR1L_SHAD                    435
#define FSR1H_SHAD                    436
#define STKPTR                        437
#define TOSL                          438
#define TOSH                          439
#define AADCON0                       440
#define AADCON0_ADON                  441
#define AADCON0_GO_nDONE              442
#define AADCON0_CHS0                  443
#define AADCON0_CHS                   444
#define AADCON0_CHS1                  445
#define AADCON0_CHS2                  446
#define AADCON0_CHS3                  447
#define AADCON0_CHS4                  448
#define AADCON1                       449
#define AADCON1_ADPREF0               450
#define AADCON1_ADPREF                451
#define AADCON1_ADPREF1               452
#define AADCON1_ADCS0                 453
#define AADCON1_ADCS                  454
#define AADCON1_ADCS1                 455
#define AADCON1_ADCS2                 456
#define AADCON1_ADFM                  457
#define AADCON2                       458
#define TRIGSEL                       459
#define TRIGSEL0                      460
#define TRIGSEL1                      461
#define TRIGSEL2                      462
#define AADCON3                       463
#define ADDSEN                        464
#define ADIPEN                        465
#define ADOOEN                        466
#define ADOEN                         467
#define ADOLEN                        468
#define ADIPPOL                       469
#define ADEPPOL                       470
#define AADSTAT                       471
#define ADSTG0                        472
#define ADSTG                         473
#define ADSTG1                        474
#define ADCONV                        475
#define AADPRE                        476
#define ADPRE0                        477
#define ADPRE                         478
#define ADPRE1                        479
#define ADPRE2                        480
#define ADPRE3                        481
#define ADPRE4                        482
#define ADPRE5                        483
#define ADPRE6                        484
#define AADACQ                        485
#define ADACQ                         486
#define ADACQ0                        487
#define ADACQ1                        488
#define ADACQ2                        489
#define ADACQ3                        490
#define ADACQ4                        491
#define ADACQ5                        492
#define ADACQ6                        493
#define AADGRD                        494
#define GRDPOL                        495
#define GRDAOE                        496
#define GRDBOE                        497
#define AADCAP                        498
#define ADDCAP                        499
#define ADDCAP0                       500
#define ADDCAP1                       501
#define ADDCAP2                       502
#define AADRES0L                      503
#define AADRES0L_ADRES0L              504
#define AADRES0H                      505
#define AADRES0H_ADRES0H              506
#define AADRES1L                      507
#define ADRES1L                       508
#define AADRES1H                      509
#define ADRES1H                       510

#endif // _PIC16LF1512_H_
