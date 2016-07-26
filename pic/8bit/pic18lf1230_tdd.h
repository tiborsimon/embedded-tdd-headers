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

#ifndef _PIC18LF1230_H_
#define _PIC18LF1230_H_

#define PORTA                         0
#define AN0                           1
#define ULPWUIN                       2
#define PORTA_RA0                     3
#define INT0                          4
#define CMP0                          5
#define KBI0                          6
#define AN1                           7
#define PORTA_RA1                     8
#define INT1                          9
#define KBI1                          10
#define TX                            11
#define PORTA_RA2                     12
#define CK                            13
#define PORTA_RA3                     14
#define DT                            15
#define RX                            16
#define PORTA_RA4                     17
#define AN2                           18
#define T0CKI                         19
#define VREFP                         20
#define PORTA_RA5                     21
#define LVDIN                         22
#define NOT_MCLR                      23
#define MCLR                          24
#define nMCLR                         25
#define PORTA_T1CKI                   26
#define CLKO                          27
#define AN3                           28
#define PORTA_RA6                     29
#define OSC2                          30
#define PORTA_T1OSO                   31
#define CLKI                          32
#define PORTA_RA7                     33
#define OSC1                          34
#define RJPU                          35
#define PORTA_T1OSI                   36
#define PORTB                         37
#define PWM0                          38
#define PORTB_RB0                     39
#define PWM1                          40
#define PORTB_RB1                     41
#define INT2                          42
#define KBI2                          43
#define PORTB_T1CKI                   44
#define CMP2                          45
#define PORTB_RB2                     46
#define PORTB_T1OSO                   47
#define INT3                          48
#define CCP2_PA2                      49
#define KBI3                          50
#define CMP1                          51
#define PORTB_RB3                     52
#define PORTB_T1OSI                   53
#define PWM2                          54
#define PORTB_RB4                     55
#define PWM3                          56
#define PORTB_RB5                     57
#define PGC                           58
#define PWM4                          59
#define PORTB_RB6                     60
#define PGD                           61
#define PWM5                          62
#define PORTB_RB7                     63
#define OVDCONS                       64
#define POUT                          65
#define POUT0                         66
#define POUT1                         67
#define POUT2                         68
#define POUT3                         69
#define POUT4                         70
#define POUT5                         71
#define OVDCOND                       72
#define POVD                          73
#define POVD0                         74
#define POVD1                         75
#define POVD2                         76
#define POVD3                         77
#define POVD4                         78
#define POVD5                         79
#define DTCON                         80
#define DTA                           81
#define DT0                           82
#define DT1                           83
#define DT2                           84
#define DT3                           85
#define DT4                           86
#define DT5                           87
#define DTPS0                         88
#define DTAPS                         89
#define DTPS1                         90
#define PWMCON1                       91
#define OSYNC                         92
#define UDIS                          93
#define SEVTDIR                       94
#define SEVOPS0                       95
#define SEVOPS                        96
#define SEVOPS1                       97
#define SEVOPS2                       98
#define SEVOPS3                       99
#define PWMCON0                       100
#define PMOD                          101
#define PMOD0                         102
#define PMOD1                         103
#define PMOD2                         104
#define PWMEN                         105
#define PWMEN0                        106
#define PWMEN1                        107
#define PWMEN2                        108
#define SEVTCMPH                      109
#define SEVTCMPL                      110
#define LATA                          111
#define LATA0                         112
#define LA0                           113
#define LATA1                         114
#define LA1                           115
#define LATA2                         116
#define LA2                           117
#define LATA3                         118
#define LA3                           119
#define LATA4                         120
#define LA4                           121
#define LATA5                         122
#define LA5                           123
#define LATA6                         124
#define LA6                           125
#define LATA7                         126
#define LA7                           127
#define LATB                          128
#define LB0                           129
#define LATB0                         130
#define LB1                           131
#define LATB1                         132
#define LB2                           133
#define LATB2                         134
#define LB3                           135
#define LATB3                         136
#define LB4                           137
#define LATB4                         138
#define LB5                           139
#define LATB5                         140
#define LB6                           141
#define LATB6                         142
#define LB7                           143
#define LATB7                         144
#define FLTCONFIG                     145
#define FLTAEN                        146
#define FLTAMOD                       147
#define FLTAS                         148
#define BRFEN                         149
#define PDC2H                         150
#define PDC2L                         151
#define PDC1H                         152
#define PDC1L                         153
#define PDC0H                         154
#define PDC0L                         155
#define TRISA                         156
#define TRISA0                        157
#define TRISA_RA0                     158
#define TRISA1                        159
#define TRISA_RA1                     160
#define TRISA2                        161
#define TRISA_RA2                     162
#define TRISA3                        163
#define TRISA_RA3                     164
#define TRISA_RA4                     165
#define TRISA4                        166
#define TRISA_RA5                     167
#define TRISA5                        168
#define TRISA_RA6                     169
#define TRISA6                        170
#define TRISA_RA7                     171
#define TRISA7                        172
#define TRISB                         173
#define TRISB_RB0                     174
#define TRISB0                        175
#define TRISB_RB1                     176
#define TRISB1                        177
#define TRISB_RB2                     178
#define TRISB2                        179
#define TRISB_RB3                     180
#define TRISB3                        181
#define TRISB_RB4                     182
#define TRISB4                        183
#define TRISB_RB5                     184
#define TRISB5                        185
#define TRISB_RB6                     186
#define TRISB6                        187
#define TRISB_RB7                     188
#define TRISB7                        189
#define PTPERH                        190
#define PTPERL                        191
#define PTMRH                         192
#define PTMRL                         193
#define PTCON1                        194
#define PTDIR                         195
#define PTEN                          196
#define PTCON0                        197
#define PTMOD                         198
#define PTMOD0                        199
#define PTMOD1                        200
#define PTCKPS0                       201
#define PTCKPS                        202
#define PTCKPS1                       203
#define PTOPS                         204
#define PTOPS0                        205
#define PTOPS1                        206
#define PTOPS2                        207
#define PTOPS3                        208
#define OSCTUNE                       209
#define TUN0                          210
#define TUN                           211
#define TUN1                          212
#define TUN2                          213
#define TUN3                          214
#define TUN4                          215
#define PLLEN                         216
#define INTSRC                        217
#define PIE1                          218
#define TMR1IE                        219
#define CMP0IE                        220
#define CMP1IE                        221
#define CMP2IE                        222
#define TXIE                          223
#define TX1IE                         224
#define RCIE                          225
#define RC1IE                         226
#define ADIE                          227
#define PIR1                          228
#define TMR1IF                        229
#define CMP0IF                        230
#define CMP1IF                        231
#define CMP2IF                        232
#define TXIF                          233
#define TX1IF                         234
#define RCIF                          235
#define RC1IF                         236
#define ADIF                          237
#define IPR1                          238
#define TMR1IP                        239
#define CMP0IP                        240
#define CMP1IP                        241
#define CMP2IP                        242
#define TX1IP                         243
#define TXIP                          244
#define RCIP                          245
#define RC1IP                         246
#define ADIP                          247
#define PIE2                          248
#define LVDIE                         249
#define EEIE                          250
#define OSCFIE                        251
#define PIR2                          252
#define LVDIF                         253
#define EEIF                          254
#define OSCFIF                        255
#define IPR2                          256
#define LVDIP                         257
#define EEIP                          258
#define OSCFIP                        259
#define PIE3                          260
#define TXB2IE                        261
#define TXBNIE                        262
#define PTIE                          263
#define PIR3                          264
#define PTIF                          265
#define TXBNIF                        266
#define IPR3                          267
#define TXBNIP                        268
#define PTIP                          269
#define EECON1                        270
#define RD                            271
#define WR                            272
#define WREN                          273
#define WRERR                         274
#define FREE                          275
#define CFGS                          276
#define EEFS                          277
#define EEPGD                         278
#define RCSTA                         279
#define RCD8                          280
#define RX9D                          281
#define OERR                          282
#define FERR                          283
#define ADDEN                         284
#define ADEN                          285
#define CREN                          286
#define SRENA                         287
#define SREN                          288
#define RC9                           289
#define RC8_9                         290
#define RX9                           291
#define SPEN                          292
#define TXSTA                         293
#define TXD8                          294
#define TX9D1                         295
#define TX9D                          296
#define TRMT                          297
#define TRMT1                         298
#define BRGH1                         299
#define BRGH                          300
#define SENDB1                        301
#define SENDB                         302
#define SYNC                          303
#define SYNC1                         304
#define TXEN1                         305
#define TXEN                          306
#define TX91                          307
#define TX8_9                         308
#define TX9                           309
#define CSRC1                         310
#define CSRC                          311
#define CMCON                         312
#define CMEN0                         313
#define CMEN                          314
#define CM0                           315
#define CMEN1                         316
#define CM1                           317
#define CMEN2                         318
#define CM2                           319
#define C2INV                         320
#define C0OUT                         321
#define C1OUT                         322
#define C2OUT                         323
#define CVRCON                        324
#define CVR                           325
#define CVR0                          326
#define CVR1                          327
#define CVR2                          328
#define CVR3                          329
#define CVRSS                         330
#define CVREF                         331
#define CVRR                          332
#define CVREN                         333
#define BAUDCON                       334
#define ABDEN                         335
#define W4E                           336
#define WUE                           337
#define BRG16                         338
#define TXCKP                         339
#define SCKP                          340
#define RXCKP                         341
#define RXDTP                         342
#define RCMT                          343
#define RCIDL                         344
#define ABDOVF                        345
#define ADCON2                        346
#define ADCS0                         347
#define ADCS                          348
#define ADCS1                         349
#define ADCS2                         350
#define ACQT0                         351
#define ACQT                          352
#define ACQT1                         353
#define ACQT2                         354
#define ADFM                          355
#define ADCON1                        356
#define PCFG0                         357
#define PCFG                          358
#define PCFG1                         359
#define PCFG2                         360
#define CHSN3                         361
#define PCFG3                         362
#define VCFG                          363
#define VCFG0                         364
#define VCFG01                        365
#define ADCON0                        366
#define ADON                          367
#define nDONE                         368
#define GODONE                        369
#define GO_nDONE                      370
#define GO_DONE                       371
#define NOT_DONE                      372
#define DONE                          373
#define GO                            374
#define GO_NOT_DONE                   375
#define CHS                           376
#define CHS0                          377
#define CHS1                          378
#define ADCAL                         379
#define SEVTEN                        380
#define T1CON                         381
#define TMR1ON                        382
#define TMR1CS                        383
#define NOT_T1SYNC                    384
#define T1SYNC                        385
#define nT1SYNC                       386
#define T1OSCEN                       387
#define SOSCEN                        388
#define T1CKPS0                       389
#define T1CKPS                        390
#define T1CKPS1                       391
#define T1RUN                         392
#define RD16                          393
#define T1RD16                        394
#define RCON                          395
#define BOR                           396
#define NOT_BOR                       397
#define nBOR                          398
#define POR                           399
#define nPOR                          400
#define NOT_POR                       401
#define PD                            402
#define nPD                           403
#define NOT_PD                        404
#define NOT_TO                        405
#define nTO                           406
#define TO                            407
#define nRI                           408
#define NOT_RI                        409
#define RI                            410
#define SBOREN                        411
#define IPEN                          412
#define WDTCON                        413
#define SWDTE                         414
#define SWDTEN                        415
#define LVDCON                        416
#define LVDL0                         417
#define LVDL                          418
#define LVDL1                         419
#define LVDL2                         420
#define LVDL3                         421
#define LVDEN                         422
#define IRVST                         423
#define IVRST                         424
#define OSCCON                        425
#define SCS0                          426
#define SCS                           427
#define SCS1                          428
#define FLTS                          429
#define IOFS                          430
#define OSTS                          431
#define IRCF                          432
#define IRCF0                         433
#define IRCF1                         434
#define IRCF2                         435
#define IDLEN                         436
#define T0CON                         437
#define T0PS                          438
#define T0PS0                         439
#define T0PS1                         440
#define T0PS2                         441
#define PSA                           442
#define T0SE                          443
#define T0CS                          444
#define T08BIT                        445
#define T016BIT                       446
#define TMR0ON                        447
#define STATUS                        448
#define C                             449
#define CARRY                         450
#define DC                            451
#define ZERO                          452
#define Z                             453
#define OV                            454
#define OVERFLOW                      455
#define N                             456
#define NEGATIVE                      457
#define INTCON3                       458
#define INT1IF                        459
#define INT1F                         460
#define INT2IF                        461
#define INT2F                         462
#define INT3F                         463
#define INT3IF                        464
#define INT1E                         465
#define INT1IE                        466
#define INT2IE                        467
#define INT2E                         468
#define INT3E                         469
#define INT3IE                        470
#define INT1P                         471
#define INT1IP                        472
#define INT2IP                        473
#define INT2P                         474
#define INTCON2                       475
#define RBIP                          476
#define INT3IP                        477
#define INT3P                         478
#define TMR0IP                        479
#define INTEDG3                       480
#define INTEDG2                       481
#define INTEDG1                       482
#define INTEDG0                       483
#define RBPU                          484
#define NOT_RBPU                      485
#define nRBPU                         486
#define INTCON                        487
#define RBIF                          488
#define INT0F                         489
#define INT0IF                        490
#define T0IF                          491
#define TMR0IF                        492
#define RBIE                          493
#define INT0E                         494
#define INT0IE                        495
#define T0IE                          496
#define TMR0IE                        497
#define PEIE                          498
#define PEIE_GIEL                     499
#define GIEL                          500
#define GIE_GIEH                      501
#define GIE                           502
#define GIEH                          503
#define SP0                           504
#define STKPTR                        505
#define SP1                           506
#define SP2                           507
#define SP3                           508
#define SP4                           509
#define STKUNF                        510
#define STKOVF                        511
#define STKFUL                        512

#endif // _PIC18LF1230_H_