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

#ifndef _PIC12LF1840T39A_H_
#define _PIC12LF1840T39A_H_

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
#define PIR1                          42
#define TMR1IF                        43
#define TMR2IF                        44
#define CCP1IF                        45
#define SSP1IF                        46
#define TXIF                          47
#define RCIF                          48
#define ADIF                          49
#define TMR1GIF                       50
#define PIR2                          51
#define BCL1IF                        52
#define EEIF                          53
#define C1IF                          54
#define OSFIF                         55
#define TMR0                          56
#define TMR1L                         57
#define TMR1H                         58
#define T1CON                         59
#define TMR1ON                        60
#define nT1SYNC                       61
#define T1OSCEN                       62
#define T1CKPS0                       63
#define T1CKPS                        64
#define T1CKPS1                       65
#define TMR1CS                        66
#define TMR1CS0                       67
#define TMR1CS1                       68
#define T1GCON                        69
#define T1GSS0                        70
#define T1GSS                         71
#define T1GSS1                        72
#define T1GVAL                        73
#define T1GGO                         74
#define T1GSPM                        75
#define T1GTM                         76
#define T1GPOL                        77
#define TMR1GE                        78
#define TMR2                          79
#define PR2                           80
#define T2CON                         81
#define T2CKPS0                       82
#define T2CKPS                        83
#define T2CKPS1                       84
#define TMR2ON                        85
#define T2OUTPS0                      86
#define T2OUTPS                       87
#define T2OUTPS1                      88
#define T2OUTPS2                      89
#define T2OUTPS3                      90
#define CPSCON0                       91
#define T0XCS                         92
#define CPSOUT                        93
#define CPSRNG                        94
#define CPSRNG0                       95
#define CPSRNG1                       96
#define CPSRM                         97
#define CPSON                         98
#define CPSCON1                       99
#define CPSCH                         100
#define CPSCH0                        101
#define CPSCH1                        102
#define TRISA                         103
#define TRISA0                        104
#define TRISA1                        105
#define TRISA2                        106
#define TRISA3                        107
#define TRISA4                        108
#define TRISA5                        109
#define PIE1                          110
#define TMR1IE                        111
#define TMR2IE                        112
#define CCP1IE                        113
#define SSP1IE                        114
#define TXIE                          115
#define RCIE                          116
#define ADIE                          117
#define TMR1GIE                       118
#define PIE2                          119
#define BCL1IE                        120
#define EEIE                          121
#define C1IE                          122
#define OSFIE                         123
#define OPTION_REG                    124
#define PS                            125
#define PS0                           126
#define PS1                           127
#define PS2                           128
#define PSA                           129
#define T0SE                          130
#define TMR0SE                        131
#define T0CS                          132
#define TMR0CS                        133
#define INTEDG                        134
#define nWPUEN                        135
#define PCON                          136
#define nBOR                          137
#define nPOR                          138
#define nRI                           139
#define nRMCLR                        140
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
#define T1OSCR                        177
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
#define LATA                          200
#define LATA0                         201
#define LATA1                         202
#define LATA2                         203
#define LATA4                         204
#define LATA5                         205
#define CM1CON0                       206
#define C1SYNC                        207
#define C1HYS                         208
#define C1SP                          209
#define C1POL                         210
#define C1OE                          211
#define C1OUT                         212
#define C1ON                          213
#define CM1CON1                       214
#define C1NCH0                        215
#define C1NCH                         216
#define C1PCH                         217
#define C1PCH0                        218
#define C1PCH1                        219
#define C1INTN                        220
#define C1INTP                        221
#define CMOUT                         222
#define MC1OUT                        223
#define BORCON                        224
#define BORRDY                        225
#define BORFS                         226
#define SBOREN                        227
#define FVRCON                        228
#define ADFVR0                        229
#define ADFVR                         230
#define ADFVR1                        231
#define CDAFVR0                       232
#define CDAFVR                        233
#define CDAFVR1                       234
#define TSRNG                         235
#define TSEN                          236
#define FVRRDY                        237
#define FVREN                         238
#define DACCON0                       239
#define DACPSS                        240
#define DACPSS0                       241
#define DACPSS1                       242
#define DACOE                         243
#define DACLPS                        244
#define DACEN                         245
#define DACCON1                       246
#define DACR0                         247
#define DACR                          248
#define DACR1                         249
#define DACR2                         250
#define DACR3                         251
#define DACR4                         252
#define SRCON0                        253
#define SRPR                          254
#define SRPS                          255
#define SRNQEN                        256
#define SRQEN                         257
#define SRCLK0                        258
#define SRCLK                         259
#define SRCLK1                        260
#define SRCLK2                        261
#define SRLEN                         262
#define SRCON1                        263
#define SRRC1E                        264
#define SRRCKE                        265
#define SRRPE                         266
#define SRSC1E                        267
#define SRSCKE                        268
#define SRSPE                         269
#define APFCON                        270
#define CCP1SEL                       271
#define P1BSEL                        272
#define TXCKSEL                       273
#define T1GSEL                        274
#define SSSEL                         275
#define SS1SEL                        276
#define SDO1SEL                       277
#define SDOSEL                        278
#define RXDTSEL                       279
#define ANSA0                         280
#define ANSELA                        281
#define ANSA1                         282
#define ANSA2                         283
#define ANSA4                         284
#define EEADRL                        285
#define EEADRH                        286
#define EEDATL                        287
#define EEDATH                        288
#define EECON1                        289
#define RD                            290
#define WR                            291
#define WREN                          292
#define WRERR                         293
#define FREE                          294
#define LWLO                          295
#define CFGS                          296
#define EEPGD                         297
#define EECON2                        298
#define RCREG                         299
#define TXREG                         300
#define SP1BRGL                       301
#define SPBRGL                        302
#define SP1BRGH                       303
#define SPBRGH                        304
#define RCSTA                         305
#define RX9D                          306
#define OERR                          307
#define FERR                          308
#define ADDEN                         309
#define CREN                          310
#define SREN                          311
#define RX9                           312
#define SPEN                          313
#define TXSTA                         314
#define TX9D                          315
#define TRMT                          316
#define BRGH                          317
#define SENDB                         318
#define SYNC                          319
#define TXEN                          320
#define TX9                           321
#define CSRC                          322
#define BAUDCON                       323
#define ABDEN                         324
#define WUE                           325
#define BRG16                         326
#define SCKP                          327
#define RCIDL                         328
#define ABDOVF                        329
#define WPUA0                         330
#define WPUA                          331
#define WPUA1                         332
#define WPUA2                         333
#define WPUA3                         334
#define WPUA4                         335
#define WPUA5                         336
#define SSP1BUF                       337
#define SSPBUF                        338
#define SSP1ADD                       339
#define SSPADD                        340
#define SSP1MSK                       341
#define SSPMSK                        342
#define SSP1STAT                      343
#define BF                            344
#define UA                            345
#define R_nW                          346
#define S                             347
#define P                             348
#define D_nA                          349
#define CKE                           350
#define SMP                           351
#define SSP1CON1                      352
#define SSPM0                         353
#define SSPM                          354
#define SSPM1                         355
#define SSPM2                         356
#define SSPM3                         357
#define CKP                           358
#define SSPEN                         359
#define SSPOV                         360
#define WCOL                          361
#define SSP1CON2                      362
#define SEN                           363
#define RSEN                          364
#define PEN                           365
#define RCEN                          366
#define ACKEN                         367
#define ACKDT                         368
#define ACKSTAT                       369
#define GCEN                          370
#define SSP1CON3                      371
#define DHEN                          372
#define AHEN                          373
#define SBCDE                         374
#define SDAHT                         375
#define BOEN                          376
#define SCIE                          377
#define PCIE                          378
#define ACKTIM                        379
#define CCPR1L                        380
#define CCPR1H                        381
#define CCP1CON                       382
#define CCP1M0                        383
#define CCP1M                         384
#define CCP1M1                        385
#define CCP1M2                        386
#define CCP1M3                        387
#define DC1B                          388
#define DC1B0                         389
#define DC1B1                         390
#define P1M                           391
#define P1M0                          392
#define P1M1                          393
#define PWM1CON                       394
#define P1DC                          395
#define P1DC0                         396
#define P1DC1                         397
#define P1DC2                         398
#define P1DC3                         399
#define P1DC4                         400
#define P1DC5                         401
#define P1DC6                         402
#define P1RSEN                        403
#define PSS1BD                        404
#define PSS1BD0                       405
#define PSS1BD1                       406
#define PSS1AC                        407
#define PSS1AC0                       408
#define PSS1AC1                       409
#define CCP1AS                        410
#define CCP1AS0                       411
#define CCP1AS1                       412
#define CCP1AS2                       413
#define CCP1ASE                       414
#define PSTR1CON                      415
#define STR1A                         416
#define STR1B                         417
#define STR1SYNC                      418
#define IOCAP                         419
#define IOCAP0                        420
#define IOCAP1                        421
#define IOCAP2                        422
#define IOCAP3                        423
#define IOCAP4                        424
#define IOCAP5                        425
#define IOCAN0                        426
#define IOCAN                         427
#define IOCAN1                        428
#define IOCAN2                        429
#define IOCAN3                        430
#define IOCAN4                        431
#define IOCAN5                        432
#define IOCAF0                        433
#define IOCAF                         434
#define IOCAF1                        435
#define IOCAF2                        436
#define IOCAF3                        437
#define IOCAF4                        438
#define IOCAF5                        439
#define CLKRCON                       440
#define CLKRDIV                       441
#define CLKRDIV0                      442
#define CLKRDIV1                      443
#define CLKRDIV2                      444
#define CLKRDC                        445
#define CLKRDC0                       446
#define CLKRDC1                       447
#define CLKRSLR                       448
#define CLKROE                        449
#define CLKREN                        450
#define MDCON                         451
#define MDBIT                         452
#define MDOUT                         453
#define MDOPOL                        454
#define MDSLR                         455
#define MDOE                          456
#define MDEN                          457
#define MDSRC                         458
#define MDMS0                         459
#define MDMS                          460
#define MDMS1                         461
#define MDMS2                         462
#define MDMS3                         463
#define MDMSODIS                      464
#define MDCARL                        465
#define MDCL0                         466
#define MDCL                          467
#define MDCL1                         468
#define MDCL2                         469
#define MDCL3                         470
#define MDCLSYNC                      471
#define MDCLPOL                       472
#define MDCLODIS                      473
#define MDCARH                        474
#define MDCH                          475
#define MDCH0                         476
#define MDCH1                         477
#define MDCH2                         478
#define MDCH3                         479
#define MDCHSYNC                      480
#define MDCHPOL                       481
#define MDCHODIS                      482
#define STATUS_SHAD                   483
#define C_SHAD                        484
#define DC_SHAD                       485
#define Z_SHAD                        486
#define WREG_SHAD                     487
#define BSR_SHAD                      488
#define PCLATH_SHAD                   489
#define FSR0L_SHAD                    490
#define FSR0H_SHAD                    491
#define FSR1L_SHAD                    492
#define FSR1H_SHAD                    493
#define STKPTR                        494
#define TOSL                          495
#define TOSH                          496

#endif // _PIC12LF1840T39A_H_
