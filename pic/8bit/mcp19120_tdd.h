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

#ifndef _MCP19120_H_
#define _MCP19120_H_

#define STATUS                        0
#define C                             1
#define CARRY                         2
#define DC                            3
#define ZERO                          4
#define Z                             5
#define nPD                           6
#define nTO                           7
#define RP0                           8
#define RP                            9
#define RP1                           10
#define IRP                           11
#define PORTGPA                       12
#define GPIO0                         13
#define RA0                           14
#define GPA0                          15
#define GPIO1                         16
#define RA1                           17
#define GPA1                          18
#define GPIO2                         19
#define RA2                           20
#define GPA2                          21
#define GPIO3                         22
#define RA3                           23
#define GPA3                          24
#define GPIO4                         25
#define RA4                           26
#define GPA4                          27
#define GPIO5                         28
#define RA5                           29
#define GPA5                          30
#define GPIO6                         31
#define RA6                           32
#define GPA6                          33
#define GPIO7                         34
#define RA7                           35
#define GPA7                          36
#define PORTGPB                       37
#define RB0                           38
#define GPB0                          39
#define RB1                           40
#define GPB1                          41
#define RB2                           42
#define GPB2                          43
#define GPB3                          44
#define RB4                           45
#define RB5                           46
#define RB6                           47
#define RB7                           48
#define PIR1                          49
#define TMR1IF                        50
#define TMR2IF                        51
#define CC1IF                         52
#define CC2IF                         53
#define SSPIF                         54
#define BCLIF                         55
#define ADIF                          56
#define TMR1GIF                       57
#define PIR2                          58
#define UVLOIF                        59
#define OVLOIF                        60
#define OVIF                          61
#define OCIF                          62
#define OTIF                          63
#define UVIF                          64
#define PCON                          65
#define nBOR                          66
#define nPOR                          67
#define INTCON                        68
#define IOCF                          69
#define INTF                          70
#define T0IF                          71
#define IOCE                          72
#define INTE                          73
#define T0IE                          74
#define PEIE                          75
#define GIE                           76
#define T1CON                         77
#define TMR1ON                        78
#define TMR1CS                        79
#define T1CKPS                        80
#define T1CKPS0                       81
#define T1CKPS1                       82
#define T2CON                         83
#define T2CKPS                        84
#define TMR2ON                        85
#define PR2                           86
#define T1GCON                        87
#define T1GSS0                        88
#define T1GSS1                        89
#define T1GVAL                        90
#define T1GO                          91
#define T1GSPM                        92
#define T1GTM                         93
#define T1GPOL                        94
#define TMR1GE                        95
#define PWMPHL                        96
#define PWMPHH                        97
#define PWMRL                         98
#define PWMRH                         99
#define ADRESL                        100
#define ADCON0                        101
#define ADON                          102
#define GO_nDONE                      103
#define CHS0                          104
#define CHS1                          105
#define CHS2                          106
#define CHS3                          107
#define CHS4                          108
#define CHS5                          109
#define ADCON1                        110
#define VCFG                          111
#define ADFM                          112
#define ADCS0                         113
#define ADCS1                         114
#define ADCS2                         115
#define OPTION_REG                    116
#define PS                            117
#define PS0                           118
#define PS1                           119
#define PS2                           120
#define PSA                           121
#define T0SE                          122
#define T0CS                          123
#define INTEDG                        124
#define nRAPUI                        125
#define TRISGPA                       126
#define TRISA0                        127
#define TRISA1                        128
#define TRISA2                        129
#define TRISA3                        130
#define TRISA4                        131
#define TRISA5                        132
#define TRISA6                        133
#define TRISA7                        134
#define TRISGPB                       135
#define TRISB0                        136
#define TRISB1                        137
#define TRISB2                        138
#define TRISB3                        139
#define PIE1                          140
#define TMR1IE                        141
#define TMR2IE                        142
#define CC1IE                         143
#define CC2IE                         144
#define SSPIE                         145
#define BCLIE                         146
#define ADIE                          147
#define TMR1GIE                       148
#define PIE2                          149
#define UVLOIE                        150
#define OVLOIE                        151
#define OVIE                          152
#define OCIE                          153
#define OTIE                          154
#define UVIE                          155
#define VINUVLO                       156
#define UVLO0                         157
#define UVLO1                         158
#define UVLO2                         159
#define UVLO3                         160
#define VINOVLO                       161
#define OVLO0                         162
#define OVLO1                         163
#define OVLO2                         164
#define OVLO3                         165
#define VINCON                        166
#define OVLOINTN                      167
#define OVLOINTP                      168
#define OVLOOUT                       169
#define OVLOEN                        170
#define UVLOINTN                      171
#define UVLOINTP                      172
#define UVLOOUT                       173
#define UVLOEN                        174
#define DAGCON                        175
#define DAG0                          176
#define DAG1                          177
#define DAG2                          178
#define VOUTL                         179
#define VOUT0                         180
#define VOUT1                         181
#define VOUT2                         182
#define VOUT3                         183
#define VOUT4                         184
#define VOUT5                         185
#define VOUT6                         186
#define VOUT7                         187
#define VOUTH                         188
#define VOUT8                         189
#define VOUT9                         190
#define OSCTUNE                       191
#define TUN0                          192
#define TUN1                          193
#define TUN2                          194
#define TUN3                          195
#define TUN4                          196
#define CMPZCON                       197
#define CMPZG0                        198
#define CMPZG1                        199
#define CMPZG2                        200
#define CMPZG3                        201
#define CMPZF0                        202
#define CMPZF1                        203
#define CMPZF2                        204
#define CMPZF3                        205
#define VOTUVLO                       206
#define OUV0                          207
#define OUV1                          208
#define OUV2                          209
#define OUV3                          210
#define VOTOVLO                       211
#define OOV0                          212
#define OOV1                          213
#define OOV2                          214
#define OOV3                          215
#define DEADCON                       216
#define LDLY0                         217
#define LDLY1                         218
#define LDLY2                         219
#define LDLY3                         220
#define HDLY0                         221
#define HDLY1                         222
#define HDLY2                         223
#define HDLY3                         224
#define RAMPCON                       225
#define RMP0                          226
#define RMP1                          227
#define RMP2                          228
#define RMP3                          229
#define RMP4                          230
#define RAMPEN                        231
#define OCCON                         232
#define OOC0                          233
#define OOC1                          234
#define OOC2                          235
#define OOC3                          236
#define OOC4                          237
#define OCLEB0                        238
#define OCLEB1                        239
#define OCEN                          240
#define CSGSCON                       241
#define CSGS0                         242
#define CSGS1                         243
#define CSGS2                         244
#define CSGS3                         245
#define CSGS4                         246
#define RELEFF                        247
#define RE0                           248
#define RE1                           249
#define RE2                           250
#define RE3                           251
#define RE4                           252
#define RE5                           253
#define RE6                           254
#define MSDONE                        255
#define WPUGPA                        256
#define WPUA0                         257
#define WPUA1                         258
#define WCS0                          259
#define WCS1                          260
#define WPUA5                         261
#define WPUGPB                        262
#define WPUB1                         263
#define WPUB2                         264
#define WPUB3                         265
#define PE1                           266
#define OVTEE                         267
#define UVTEE                         268
#define SPAN                          269
#define MEASEN                        270
#define LODIS                         271
#define HIDIS                         272
#define DECON                         273
#define MODECON                       274
#define MSC0                          275
#define MSC1                          276
#define MSC2                          277
#define EACLMP                        278
#define CNSG                          279
#define VDDEN                         280
#define VGNDEN                        281
#define CLMPSEL                       282
#define SSPADD                        283
#define ADD                           284
#define SSPBUF                        285
#define SSPCON1                       286
#define SSPM0                         287
#define SSPM1                         288
#define SSPM2                         289
#define SSPM3                         290
#define CKP                           291
#define SSPEN                         292
#define SSPOV                         293
#define WCOL                          294
#define SSPCON2                       295
#define SEN                           296
#define RSEN                          297
#define PEN                           298
#define RCEN                          299
#define ACKEN                         300
#define ACKDT                         301
#define ACKSTAT                       302
#define GCEN                          303
#define SSPCON3                       304
#define DHEN                          305
#define AHEN                          306
#define SBCDE                         307
#define SDAHT                         308
#define BOEN                          309
#define SCIE                          310
#define PCIE                          311
#define ACKTIM                        312
#define SSPMSK                        313
#define MSK                           314
#define SSPSTAT                       315
#define BF                            316
#define UA                            317
#define R_nW                          318
#define S                             319
#define P                             320
#define D_nA                          321
#define CKE                           322
#define SMP                           323
#define SSPADD2                       324
#define ADD2                          325
#define SSPMSK2                       326
#define MSK2                          327
#define VREFCAL                       328
#define VREF0                         329
#define VREF1                         330
#define VREF2                         331
#define VREF3                         332
#define VREF4                         333
#define VRFSCAL                       334
#define VRFS0                         335
#define VRFS1                         336
#define VRFS2                         337
#define VRFS3                         338
#define VRFS4                         339
#define RAMPCAL                       340
#define RAMP0                         341
#define RAMP1                         342
#define RAMP2                         343
#define RAMP3                         344
#define RAMP4                         345
#define CSRCAL                        346
#define CSR0                          347
#define CSR1                          348
#define CSR2                          349
#define CSR3                          350
#define CSR4                          351
#define OVUVCAL                       352
#define OVUV0                         353
#define OVUV1                         354
#define OVUV2                         355
#define OVUV3                         356
#define OVUV4                         357
#define DEMCAL                        358
#define DEMOV0                        359
#define DEMOV1                        360
#define DEMOV2                        361
#define DEMOV3                        362
#define DEMOV4                        363
#define HCSOVCAL                      364
#define HCSOV0                        365
#define HCSOV1                        366
#define HCSOV2                        367
#define HCSOV3                        368
#define HCSOV4                        369
#define IOCA                          370
#define IOCA0                         371
#define IOCA1                         372
#define IOCA2                         373
#define IOCA3                         374
#define IOCA4                         375
#define IOCA5                         376
#define IOCA6                         377
#define IOCA7                         378
#define IOCB                          379
#define IOCB0                         380
#define IOCB1                         381
#define IOCB2                         382
#define IOCB3                         383
#define ANSELA                        384
#define ANSA0                         385
#define ANSA1                         386
#define ANSA2                         387
#define ANSA3                         388
#define ANSELB                        389
#define ANSB1                         390
#define ANSB2                         391
#define PMCON1                        392
#define RD                            393
#define WR                            394
#define WREN                          395
#define CALSEL                        396
#define PMCON2                        397
#define PMADRL                        398
#define PMADRL0                       399
#define PMADRL1                       400
#define PMADRL2                       401
#define PMADRL3                       402
#define PMADRL4                       403
#define PMADRL5                       404
#define PMADRL6                       405
#define PMADRL7                       406
#define PMADRH                        407
#define PMADRH0                       408
#define PMADRH1                       409
#define PMADRH2                       410
#define PMADRH3                       411
#define PMDATL                        412
#define PMDATL0                       413
#define PMDATL1                       414
#define PMDATL2                       415
#define PMDATL3                       416
#define PMDATL4                       417
#define PMDATL5                       418
#define PMDATL6                       419
#define PMDATL7                       420
#define PMDATH                        421
#define PMDATH0                       422
#define PMDATH1                       423
#define PMDATH2                       424
#define PMDATH3                       425
#define PMDATH4                       426
#define PMDATH5                       427
#define TTACAL                        428
#define TTA0                          429
#define TTA1                          430
#define TTA2                          431
#define TTA3                          432
#define OSCCAL                        433
#define FCAL0                         434
#define FCAL1                         435
#define FCAL2                         436
#define FCAL3                         437
#define FCAL4                         438
#define FCAL5                         439
#define FCAL6                         440
#define BGTCAL                        441
#define BGT0                          442
#define BGT1                          443
#define BGT2                          444
#define BGT3                          445
#define BGRCAL                        446
#define BGR0                          447
#define BGR1                          448
#define BGR2                          449
#define BGR3                          450
#define BGR4                          451
#define BGR5                          452
#define AVDDCAL                       453
#define AVDD0                         454
#define AVDD1                         455
#define AVDD2                         456
#define AVDD3                         457
#define VOURCAL                       458
#define VOUR0                         459
#define VOUR1                         460
#define VOUR2                         461
#define VOUR3                         462
#define VOUR4                         463
#define DOVCAL                        464
#define DOV0                          465
#define DOV1                          466
#define DOV2                          467
#define DOV3                          468
#define DOV4                          469
#define VEAOCAL                       470
#define VEAO0                         471
#define VEAO1                         472
#define VEAO2                         473
#define VEAO3                         474
#define VEAO4                         475
#define BUFFCON                       476
#define DSEL0                         477
#define DSEL1                         478
#define DSEL2                         479
#define DSEL3                         480
#define DSEL4                         481
#define DIGOEN                        482
#define BNCHEN                        483
#define ATSTCON                       484
#define SWFRQEN                       485
#define TMPTBY                        486
#define RAWIBY                        487
#define AVDDTSEN                      488
#define EACLKEN                       489

#endif // _MCP19120_H_