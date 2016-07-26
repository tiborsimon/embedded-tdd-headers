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

#ifndef _MCP19114_H_
#define _MCP19114_H_

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
#define GPIO5                         27
#define RA5                           28
#define GPA5                          29
#define GPIO6                         30
#define RA6                           31
#define GPA6                          32
#define GPIO7                         33
#define RA7                           34
#define GPA7                          35
#define PORTGPB                       36
#define RB0                           37
#define GPB0                          38
#define RB1                           39
#define GPB1                          40
#define RB2                           41
#define RB4                           42
#define GPB4                          43
#define RB5                           44
#define GPB5                          45
#define RB6                           46
#define GPB6                          47
#define RB7                           48
#define GPB7                          49
#define PIR1                          50
#define TMR1IF                        51
#define TMR2IF                        52
#define CC1IF                         53
#define CC2IF                         54
#define SSPIF                         55
#define BCLIF                         56
#define ADIF                          57
#define PIR2                          58
#define UVLOIF                        59
#define OVLOIF                        60
#define DRUVIF                        61
#define OVIF                          62
#define OTIF                          63
#define CDSIF                         64
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
#define PWMPHL                        87
#define PWMPHH                        88
#define PWMRL                         89
#define PWMRH                         90
#define VREFCON                       91
#define VREF0                         92
#define VREF1                         93
#define VREF2                         94
#define VREF3                         95
#define VREF4                         96
#define VREF5                         97
#define VREF6                         98
#define VREF7                         99
#define VREF2CON                      100
#define VREF20                        101
#define VREF21                        102
#define VREF22                        103
#define VREF23                        104
#define VREF24                        105
#define VREF25                        106
#define VREF26                        107
#define VREF27                        108
#define OSCTUNE                       109
#define TUN0                          110
#define TUN1                          111
#define TUN2                          112
#define TUN3                          113
#define TUN4                          114
#define ADRESL                        115
#define ADCON0                        116
#define ADON                          117
#define GO_nDONE                      118
#define CHS0                          119
#define CHS1                          120
#define CHS2                          121
#define CHS3                          122
#define CHS4                          123
#define ADCON1                        124
#define ADCS0                         125
#define ADCS1                         126
#define ADCS2                         127
#define OPTION_REG                    128
#define PS                            129
#define PS0                           130
#define PS1                           131
#define PS2                           132
#define PSA                           133
#define T0SE                          134
#define T0CS                          135
#define INTEDG                        136
#define nRAPUI                        137
#define TRISGPA                       138
#define TRISA0                        139
#define TRISA1                        140
#define TRISA2                        141
#define TRISA3                        142
#define TRISA5                        143
#define TRISA6                        144
#define TRISA7                        145
#define TRISGPB                       146
#define TRISB0                        147
#define TRISB1                        148
#define TRISB4                        149
#define TRISB5                        150
#define TRISB6                        151
#define TRISB7                        152
#define PIE1                          153
#define TMR1IE                        154
#define TMR2IE                        155
#define CC1IE                         156
#define CC2IE                         157
#define SSPIE                         158
#define BCLIE                         159
#define ADIE                          160
#define PIE2                          161
#define UVLOIE                        162
#define OVLOIE                        163
#define DRUVIE                        164
#define OVIE                          165
#define OTIE                          166
#define CDSIE                         167
#define VINUVLO                       168
#define UVLO0                         169
#define UVLO1                         170
#define UVLO2                         171
#define UVLO3                         172
#define UVLO4                         173
#define UVLO5                         174
#define VINOVLO                       175
#define OVLO0                         176
#define OVLO1                         177
#define OVLO2                         178
#define OVLO3                         179
#define OVLO4                         180
#define OVLO5                         181
#define VINCON                        182
#define OVLOINTN                      183
#define OVLOINTP                      184
#define OVLOOUT                       185
#define OVLOEN                        186
#define UVLOINTN                      187
#define UVLOINTP                      188
#define UVLOOUT                       189
#define UVLOEN                        190
#define CC1RL                         191
#define CC1RH                         192
#define CC2RL                         193
#define CC2RH                         194
#define CCDCON                        195
#define CC1M                          196
#define CC2M                          197
#define DESATCON                      198
#define CDSINTN                       199
#define CDSINTP                       200
#define CDSOUT                        201
#define CDSOE                         202
#define CDSPOL                        203
#define CDSBLANK                      204
#define CDSWDE                        205
#define CDSMUX                        206
#define OVCON                         207
#define OVINTN                        208
#define OVINTP                        209
#define OVOUT                         210
#define OVEN                          211
#define OVREFCON                      212
#define OOV0                          213
#define OOV1                          214
#define OOV2                          215
#define OOV3                          216
#define OOV4                          217
#define OOV5                          218
#define OOV6                          219
#define OOV7                          220
#define DEADCON                       221
#define SDRVDT0                       222
#define SDRVDT1                       223
#define SDRVDT2                       224
#define SDRVDT3                       225
#define PDRVDT0                       226
#define PDRVDT1                       227
#define PDRVDT2                       228
#define PDRVDT3                       229
#define SLPCRCON                      230
#define SLPS0                         231
#define SLPS1                         232
#define SLPS2                         233
#define SLPS3                         234
#define SLPS4                         235
#define SLPS5                         236
#define SLPBY                         237
#define ICOACON                       238
#define ICOAC0                        239
#define ICOAC1                        240
#define ICOAC2                        241
#define ICOAC3                        242
#define ICLEBCON                      243
#define ICLEBC0                       244
#define ICLEBC1                       245
#define WPUGPA                        246
#define WPUGPA0                       247
#define WPUA0                         248
#define WPUGPA1                       249
#define WPUA1                         250
#define WPUGPA2                       251
#define WPUA2                         252
#define WPUGPA3                       253
#define WPUA3                         254
#define WPUGPA5                       255
#define WPUA5                         256
#define WPUGPB                        257
#define WPUB1                         258
#define WPUGPB1                       259
#define WPUB2                         260
#define WPUGPB2                       261
#define WPUB4                         262
#define WPUGPB4                       263
#define WPUB5                         264
#define WPUGPB5                       265
#define WPUB6                         266
#define WPUGPB6                       267
#define WPUB7                         268
#define WPUGPB7                       269
#define PE1                           270
#define OVTEE                         271
#define UVTEE                         272
#define PUEN                          273
#define SDRVBY                        274
#define PDRVBY                        275
#define SDRVEN                        276
#define PDRVEN                        277
#define MODECON                       278
#define RFB                           279
#define MSC0                          280
#define MSC1                          281
#define ABECON                        282
#define ANAOEN                        283
#define EADIS                         284
#define DRUVSEL                       285
#define DSEL0                         286
#define DSEL1                         287
#define DSEL2                         288
#define DIGOEN                        289
#define SSPADD                        290
#define ADD                           291
#define SSPBUF                        292
#define SSPCON1                       293
#define SSPM0                         294
#define SSPM1                         295
#define SSPM2                         296
#define SSPM3                         297
#define CKP                           298
#define SSPEN                         299
#define SSPOV                         300
#define WCOL                          301
#define SSPCON2                       302
#define SEN                           303
#define RSEN                          304
#define PEN                           305
#define RCEN                          306
#define ACKEN                         307
#define ACKDT                         308
#define ACKSTAT                       309
#define GCEN                          310
#define SSPCON3                       311
#define DHEN                          312
#define AHEN                          313
#define SBCDE                         314
#define SDAHT                         315
#define BOEN                          316
#define SCIE                          317
#define PCIE                          318
#define ACKTIM                        319
#define SSPMSK                        320
#define MSK                           321
#define SSPSTAT                       322
#define BF                            323
#define UA                            324
#define R_nW                          325
#define S                             326
#define P                             327
#define D_nA                          328
#define CKE                           329
#define SMP                           330
#define SSPADD2                       331
#define ADD2                          332
#define SSPMSK2                       333
#define MSK2                          334
#define IOCA                          335
#define IOCA0                         336
#define IOCA1                         337
#define IOCA2                         338
#define IOCA3                         339
#define IOCA5                         340
#define IOCA6                         341
#define IOCA7                         342
#define IOCB                          343
#define IOCB0                         344
#define IOCB1                         345
#define IOCB4                         346
#define IOCB5                         347
#define IOCB6                         348
#define IOCB7                         349
#define ANSELA                        350
#define ANSA0                         351
#define ANSA1                         352
#define ANSA2                         353
#define ANSA3                         354
#define ANSELB                        355
#define ANSB1                         356
#define ANSB4                         357
#define ANSB5                         358
#define ANSB6                         359
#define PMCON1                        360
#define RD                            361
#define WR                            362
#define WREN                          363
#define CALSEL                        364
#define PMCON2                        365
#define PMADRL                        366
#define PMADRL0                       367
#define PMADRL1                       368
#define PMADRL2                       369
#define PMADRL3                       370
#define PMADRL4                       371
#define PMADRL5                       372
#define PMADRL6                       373
#define PMADRL7                       374
#define PMADRH                        375
#define PMADRH0                       376
#define PMADRH1                       377
#define PMADRH2                       378
#define PMADRH3                       379
#define PMDATL                        380
#define PMDATL0                       381
#define PMDATL1                       382
#define PMDATL2                       383
#define PMDATL3                       384
#define PMDATL4                       385
#define PMDATL5                       386
#define PMDATL6                       387
#define PMDATL7                       388
#define PMDATH                        389
#define PMDATH0                       390
#define PMDATH1                       391
#define PMDATH2                       392
#define PMDATH3                       393
#define PMDATH4                       394
#define PMDATH5                       395
#define DSTCAL                        396
#define DSTCAL0                       397
#define DSTCAL1                       398
#define DSTCAL2                       399
#define DSTCAL3                       400
#define DSTCAL4                       401
#define RFBTCAL                       402
#define RFBCAL0                       403
#define RFBCAL1                       404
#define RFBCAL2                       405
#define RFBCAL3                       406
#define RFBCAL4                       407
#define RFBCAL5                       408
#define OSCCAL                        409
#define FCALT0                        410
#define FCALT1                        411
#define FCALT2                        412
#define FCALT3                        413
#define FCALT4                        414
#define FCALT5                        415
#define FCALT6                        416
#define DCSCAL                        417
#define DCSCAL0                       418
#define DCSCAL1                       419
#define DCSCAL2                       420
#define DCSCAL3                       421
#define DCSCAL4                       422
#define DCSCAL5                       423
#define DCSCAL6                       424
#define TTACAL                        425
#define TTA0                          426
#define TTA1                          427
#define TTA2                          428
#define TTA3                          429
#define BGRCAL                        430
#define BGRT0                         431
#define BGRT1                         432
#define BGRT2                         433
#define BGRT3                         434
#define VROCAL                        435
#define VROT0                         436
#define VROT1                         437
#define VROT2                         438
#define VROT3                         439
#define VROT4                         440
#define VROT5                         441
#define ATSTCON                       442
#define TMPTBY                        443
#define DRUVBY                        444
#define SWFRQOR                       445
#define DISLOCLMP                     446

#endif // _MCP19114_H_
