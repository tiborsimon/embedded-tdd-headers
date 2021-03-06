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

#ifndef _PIC16F1512_H_
#define _PIC16F1512_H_

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
#define VREGCON                       295
#define VREGPM                        296
#define RCREG                         297
#define TXREG                         298
#define SP1BRGL                       299
#define SPBRGL                        300
#define SP1BRGH                       301
#define SPBRGH                        302
#define RCSTA                         303
#define RX9D                          304
#define OERR                          305
#define FERR                          306
#define ADDEN                         307
#define CREN                          308
#define SREN                          309
#define RX9                           310
#define SPEN                          311
#define TXSTA                         312
#define TX9D                          313
#define TRMT                          314
#define BRGH                          315
#define SENDB                         316
#define SYNC                          317
#define TXEN                          318
#define TX9                           319
#define CSRC                          320
#define BAUDCON                       321
#define ABDEN                         322
#define WUE                           323
#define BRG16                         324
#define SCKP                          325
#define RCIDL                         326
#define ABDOVF                        327
#define WPUB0                         328
#define WPUB                          329
#define WPUB1                         330
#define WPUB2                         331
#define WPUB3                         332
#define WPUB4                         333
#define WPUB5                         334
#define WPUB6                         335
#define WPUB7                         336
#define WPUE                          337
#define WPUE3                         338
#define SSPBUF                        339
#define SSPADD                        340
#define SSPMSK                        341
#define SSPSTAT                       342
#define BF                            343
#define UA                            344
#define R_nW                          345
#define S                             346
#define P                             347
#define D_nA                          348
#define CKE                           349
#define SMP                           350
#define SSPCON1                       351
#define SSPM0                         352
#define SSPM                          353
#define SSPM1                         354
#define SSPM2                         355
#define SSPM3                         356
#define CKP                           357
#define SSPEN                         358
#define SSPOV                         359
#define WCOL                          360
#define SSPCON2                       361
#define SEN                           362
#define RSEN                          363
#define PEN                           364
#define RCEN                          365
#define ACKEN                         366
#define ACKDT                         367
#define ACKSTAT                       368
#define GCEN                          369
#define SSPCON3                       370
#define DHEN                          371
#define AHEN                          372
#define SBCDE                         373
#define SDAHT                         374
#define BOEN                          375
#define SCIE                          376
#define PCIE                          377
#define ACKTIM                        378
#define CCPR1L                        379
#define CCPR1H                        380
#define CCP1CON                       381
#define CCP1M0                        382
#define CCP1M                         383
#define CCP1M1                        384
#define CCP1M2                        385
#define CCP1M3                        386
#define DC1B                          387
#define DC1B0                         388
#define DC1B1                         389
#define CCPR2L                        390
#define CCPR2H                        391
#define CCP2CON                       392
#define CCP2M                         393
#define CCP2M0                        394
#define CCP2M1                        395
#define CCP2M2                        396
#define CCP2M3                        397
#define DC2B0                         398
#define DC2B                          399
#define DC2B1                         400
#define IOCBP                         401
#define IOCBP0                        402
#define IOCBP1                        403
#define IOCBP2                        404
#define IOCBP3                        405
#define IOCBP4                        406
#define IOCBP5                        407
#define IOCBP6                        408
#define IOCBP7                        409
#define IOCBN0                        410
#define IOCBN                         411
#define IOCBN1                        412
#define IOCBN2                        413
#define IOCBN3                        414
#define IOCBN4                        415
#define IOCBN5                        416
#define IOCBN6                        417
#define IOCBN7                        418
#define IOCBF0                        419
#define IOCBF                         420
#define IOCBF1                        421
#define IOCBF2                        422
#define IOCBF3                        423
#define IOCBF4                        424
#define IOCBF5                        425
#define IOCBF6                        426
#define IOCBF7                        427
#define STATUS_SHAD                   428
#define C_SHAD                        429
#define DC_SHAD                       430
#define Z_SHAD                        431
#define WREG_SHAD                     432
#define BSR_SHAD                      433
#define PCLATH_SHAD                   434
#define FSR0L_SHAD                    435
#define FSR0H_SHAD                    436
#define FSR1L_SHAD                    437
#define FSR1H_SHAD                    438
#define STKPTR                        439
#define TOSL                          440
#define TOSH                          441
#define AADCON0                       442
#define AADCON0_ADON                  443
#define AADCON0_GO_nDONE              444
#define AADCON0_CHS0                  445
#define AADCON0_CHS                   446
#define AADCON0_CHS1                  447
#define AADCON0_CHS2                  448
#define AADCON0_CHS3                  449
#define AADCON0_CHS4                  450
#define AADCON1                       451
#define AADCON1_ADPREF0               452
#define AADCON1_ADPREF                453
#define AADCON1_ADPREF1               454
#define AADCON1_ADCS0                 455
#define AADCON1_ADCS                  456
#define AADCON1_ADCS1                 457
#define AADCON1_ADCS2                 458
#define AADCON1_ADFM                  459
#define AADCON2                       460
#define TRIGSEL                       461
#define TRIGSEL0                      462
#define TRIGSEL1                      463
#define TRIGSEL2                      464
#define AADCON3                       465
#define ADDSEN                        466
#define ADIPEN                        467
#define ADOOEN                        468
#define ADOEN                         469
#define ADOLEN                        470
#define ADIPPOL                       471
#define ADEPPOL                       472
#define AADSTAT                       473
#define ADSTG0                        474
#define ADSTG                         475
#define ADSTG1                        476
#define ADCONV                        477
#define AADPRE                        478
#define ADPRE0                        479
#define ADPRE                         480
#define ADPRE1                        481
#define ADPRE2                        482
#define ADPRE3                        483
#define ADPRE4                        484
#define ADPRE5                        485
#define ADPRE6                        486
#define AADACQ                        487
#define ADACQ                         488
#define ADACQ0                        489
#define ADACQ1                        490
#define ADACQ2                        491
#define ADACQ3                        492
#define ADACQ4                        493
#define ADACQ5                        494
#define ADACQ6                        495
#define AADGRD                        496
#define GRDPOL                        497
#define GRDAOE                        498
#define GRDBOE                        499
#define AADCAP                        500
#define ADDCAP                        501
#define ADDCAP0                       502
#define ADDCAP1                       503
#define ADDCAP2                       504
#define AADRES0L                      505
#define AADRES0L_ADRES0L              506
#define AADRES0H                      507
#define AADRES0H_ADRES0H              508
#define AADRES1L                      509
#define ADRES1L                       510
#define AADRES1H                      511
#define ADRES1H                       512

#endif // _PIC16F1512_H_
