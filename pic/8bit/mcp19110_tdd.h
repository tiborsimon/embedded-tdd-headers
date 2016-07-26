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

#ifndef _MCP19110_H_
#define _MCP19110_H_

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
#define RB4                           44
#define RB5                           45
#define RB6                           46
#define RB7                           47
#define PIR1                          48
#define TMR1IF                        49
#define TMR2IF                        50
#define SSPIF                         51
#define BCLIF                         52
#define ADIF                          53
#define PIR2                          54
#define DCERIF                        55
#define VINIF                         56
#define OVIF                          57
#define OCIF                          58
#define UVIF                          59
#define PCON                          60
#define nPOR                          61
#define nOT                           62
#define INTCON                        63
#define IOCF                          64
#define INTF                          65
#define T0IF                          66
#define IOCE                          67
#define INTE                          68
#define T0IE                          69
#define PEIE                          70
#define GIE                           71
#define T1CON                         72
#define TMR1ON                        73
#define TMR1CS                        74
#define T1CKPS                        75
#define T1CKPS0                       76
#define T1CKPS1                       77
#define T2CON                         78
#define T2CKPS                        79
#define TMR2ON                        80
#define PR2                           81
#define PWMPHL                        82
#define PWMPHH                        83
#define PWMRL                         84
#define PWMRH                         85
#define OVCCON                        86
#define OVC0                          87
#define OVC1                          88
#define OVC2                          89
#define OVC3                          90
#define OVC4                          91
#define OVC5                          92
#define OVC6                          93
#define OVC7                          94
#define OVFCON                        95
#define OVF0                          96
#define OVF1                          97
#define OVF2                          98
#define OVF3                          99
#define OVF4                          100
#define VOUTON                        101
#define OSCTUNE                       102
#define TUN0                          103
#define TUN1                          104
#define TUN2                          105
#define TUN3                          106
#define TUN4                          107
#define ADRESL                        108
#define ADCON0                        109
#define ADON                          110
#define GO_nDONE                      111
#define CHS0                          112
#define CHS1                          113
#define CHS2                          114
#define CHS3                          115
#define CHS4                          116
#define ADCON1                        117
#define ADCS0                         118
#define ADCS1                         119
#define ADCS2                         120
#define OPTION_REG                    121
#define PS                            122
#define PS0                           123
#define PS1                           124
#define PS2                           125
#define PSA                           126
#define T0SE                          127
#define T0CS                          128
#define INTEDG                        129
#define nRAPUI                        130
#define TRISGPA                       131
#define TRISA0                        132
#define TRISA1                        133
#define TRISA2                        134
#define TRISA3                        135
#define TRISA4                        136
#define TRISA5                        137
#define TRISA6                        138
#define TRISA7                        139
#define TRISGPB                       140
#define TRISB0                        141
#define TRISB1                        142
#define TRISB2                        143
#define PIE1                          144
#define TMR1IE                        145
#define TMR2IE                        146
#define SSPIE                         147
#define BCLIE                         148
#define ADIE                          149
#define PIE2                          150
#define DCERIE                        151
#define VINIE                         152
#define OVIE                          153
#define OCIE                          154
#define UVIE                          155
#define APFCON                        156
#define CLKSEL                        157
#define VINLVL                        158
#define UVLO0                         159
#define UVLO1                         160
#define UVLO2                         161
#define UVLO3                         162
#define UVLO4                         163
#define UVLO5                         164
#define UVLOEN                        165
#define OCCON                         166
#define OOC0                          167
#define OOC1                          168
#define OOC2                          169
#define OOC3                          170
#define OOC4                          171
#define OCLEB0                        172
#define OCLEB1                        173
#define OCEN                          174
#define CSGSCON                       175
#define CSGS0                         176
#define CSGS1                         177
#define CSGS2                         178
#define CSGS3                         179
#define CSDGCON                       180
#define CSDG0                         181
#define CSDG1                         182
#define CSDG2                         183
#define CSDGEN                        184
#define VZCCON                        185
#define VZC0                          186
#define VZC1                          187
#define VZC2                          188
#define VZC3                          189
#define VZC4                          190
#define VZC5                          191
#define VZC6                          192
#define VZC7                          193
#define CMPZCON                       194
#define CMPZG0                        195
#define CMPZG1                        196
#define CMPZG2                        197
#define CMPZG3                        198
#define CMPZF0                        199
#define CMPZF1                        200
#define CMPZF2                        201
#define CMPZF3                        202
#define OUVCON                        203
#define OUV0                          204
#define OUV1                          205
#define OUV2                          206
#define OUV3                          207
#define OUV4                          208
#define OUV5                          209
#define OUV6                          210
#define OUV7                          211
#define OOVCON                        212
#define OOV0                          213
#define OOV1                          214
#define OOV2                          215
#define OOV3                          216
#define OOV4                          217
#define OOV5                          218
#define OOV6                          219
#define OOV7                          220
#define DEADCON                       221
#define LDLY0                         222
#define LDLY1                         223
#define LDLY2                         224
#define LDLY3                         225
#define HDLY0                         226
#define HDLY1                         227
#define HDLY2                         228
#define HDLY3                         229
#define SLPCRCON                      230
#define SLPS0                         231
#define SLPS1                         232
#define SLPS2                         233
#define SLPS3                         234
#define SLPG0                         235
#define SLPG1                         236
#define SLPG2                         237
#define SLPG3                         238
#define SLVGNCON                      239
#define SLVGN0                        240
#define SLVGN1                        241
#define SLVGN2                        242
#define SLVGN3                        243
#define SLVGN4                        244
#define RELEFF                        245
#define RE0                           246
#define RE1                           247
#define RE2                           248
#define RE3                           249
#define RE4                           250
#define RE5                           251
#define RE6                           252
#define MSDONE                        253
#define WPUGPA                        254
#define WPUGPA0                       255
#define WPUA0                         256
#define WPUGPA1                       257
#define WPUA1                         258
#define WPUGPA2                       259
#define WPUA2                         260
#define WPUGPA3                       261
#define WPUA3                         262
#define WPUGPA5                       263
#define WPUA5                         264
#define WPUGPB                        265
#define WPUB1                         266
#define WPUGPB1                       267
#define WPUB2                         268
#define WPUGPB2                       269
#define WPUB4                         270
#define WPUB5                         271
#define WPUB6                         272
#define WPUB7                         273
#define PE1                           274
#define OVTEE                         275
#define UVTEE                         276
#define PUEN                          277
#define PDEN                          278
#define LDLYBY                        279
#define HDLYBY                        280
#define DVRSTR                        281
#define DECON                         282
#define BUFFCON                       283
#define ASEL0                         284
#define ASEL1                         285
#define ASEL2                         286
#define ASEL3                         287
#define ASEL4                         288
#define MLTPH0                        289
#define MLTPH1                        290
#define MLTPH2                        291
#define ABECON                        292
#define PATHEN                        293
#define RECIREN                       294
#define TMPSEN                        295
#define CRTMEN                        296
#define SLCPBY                        297
#define MEASEN                        298
#define UVDCEN                        299
#define OVDCEN                        300
#define SSPADD                        301
#define ADD                           302
#define SSPBUF                        303
#define SSPCON1                       304
#define SSPM0                         305
#define SSPM1                         306
#define SSPM2                         307
#define SSPM3                         308
#define CKP                           309
#define SSPEN                         310
#define SSPOV                         311
#define WCOL                          312
#define SSPCON2                       313
#define SEN                           314
#define RSEN                          315
#define PEN                           316
#define RCEN                          317
#define ACKEN                         318
#define ACKDT                         319
#define ACKSTAT                       320
#define GCEN                          321
#define SSPCON3                       322
#define DHEN                          323
#define AHEN                          324
#define SBCDE                         325
#define SDAHT                         326
#define BOEN                          327
#define SCIE                          328
#define PCIE                          329
#define ACKTIM                        330
#define SSPMSK                        331
#define MSK                           332
#define SSPSTAT                       333
#define BF                            334
#define UA                            335
#define R_nW                          336
#define S                             337
#define P                             338
#define D_nA                          339
#define CKE                           340
#define SMP                           341
#define SSPADD2                       342
#define ADD2                          343
#define SSPMSK2                       344
#define MSK2                          345
#define IOCA                          346
#define IOCA0                         347
#define IOCA1                         348
#define IOCA2                         349
#define IOCA3                         350
#define IOCA4                         351
#define IOCA5                         352
#define IOCA6                         353
#define IOCA7                         354
#define IOCB                          355
#define IOCB0                         356
#define IOCB1                         357
#define IOCB2                         358
#define ANSELA                        359
#define ANSA0                         360
#define ANSA1                         361
#define ANSA2                         362
#define ANSA3                         363
#define ANSELB                        364
#define ANSB1                         365
#define ANSB2                         366
#define ANSB4                         367
#define ANSB5                         368
#define PMCON1                        369
#define RD                            370
#define WR                            371
#define WREN                          372
#define CALSEL                        373
#define PMCON2                        374
#define PMADRL                        375
#define PMADRL0                       376
#define PMADRL1                       377
#define PMADRL2                       378
#define PMADRL3                       379
#define PMADRL4                       380
#define PMADRL5                       381
#define PMADRL6                       382
#define PMADRL7                       383
#define PMADRH                        384
#define PMADRH0                       385
#define PMADRH1                       386
#define PMADRH2                       387
#define PMADRH3                       388
#define PMDATL                        389
#define PMDATL0                       390
#define PMDATL1                       391
#define PMDATL2                       392
#define PMDATL3                       393
#define PMDATL4                       394
#define PMDATL5                       395
#define PMDATL6                       396
#define PMDATL7                       397
#define PMDATH                        398
#define PMDATH0                       399
#define PMDATH1                       400
#define PMDATH2                       401
#define PMDATH3                       402
#define PMDATH4                       403
#define PMDATH5                       404
#define OSCCAL                        405
#define FCALT0                        406
#define FCALT1                        407
#define FCALT2                        408
#define FCALT3                        409
#define FCALT4                        410
#define FCALT5                        411
#define FCALT6                        412
#define DOVCAL                        413
#define DOVT0                         414
#define DOVT1                         415
#define DOVT2                         416
#define DOVT3                         417
#define TTACAL                        418
#define TTA0                          419
#define TTA1                          420
#define TTA2                          421
#define TTA3                          422
#define BGRCAL                        423
#define BGRT0                         424
#define BGRT1                         425
#define BGRT2                         426
#define BGRT3                         427
#define VROCAL                        428
#define VROT0                         429
#define VROT1                         430
#define VROT2                         431
#define VROT3                         432
#define ZROCAL                        433
#define ZROT0                         434
#define ZROT1                         435
#define ZROT2                         436
#define ZROT3                         437
#define ATSTCON                       438
#define DRVDIS                        439
#define BNCHEN                        440
#define LODIS                         441
#define HIDIS                         442

#endif // _MCP19110_H_
