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

#ifndef _PIC16LF1902_H_
#define _PIC16LF1902_H_

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
#define ADIF                          66
#define TMR1GIF                       67
#define PIR2                          68
#define LCDIF                         69
#define EEIF                          70
#define TMR0                          71
#define TMR1L                         72
#define TMR1H                         73
#define T1CON                         74
#define TMR1ON                        75
#define nT1SYNC                       76
#define T1OSCEN                       77
#define T1CKPS0                       78
#define T1CKPS                        79
#define T1CKPS1                       80
#define TMR1CS                        81
#define TMR1CS0                       82
#define TMR1CS1                       83
#define T1GCON                        84
#define T1GSS0                        85
#define T1GSS                         86
#define T1GSS1                        87
#define T1GVAL                        88
#define T1GGO_nDONE                   89
#define T1GGO                         90
#define T1GSPM                        91
#define T1GTM                         92
#define T1GPOL                        93
#define TMR1GE                        94
#define TRISA                         95
#define TRISA0                        96
#define TRISA1                        97
#define TRISA2                        98
#define TRISA3                        99
#define TRISA4                        100
#define TRISA5                        101
#define TRISA6                        102
#define TRISA7                        103
#define TRISB                         104
#define TRISB0                        105
#define TRISB1                        106
#define TRISB2                        107
#define TRISB3                        108
#define TRISB4                        109
#define TRISB5                        110
#define TRISB6                        111
#define TRISB7                        112
#define TRISC                         113
#define TRISC0                        114
#define TRISC1                        115
#define TRISC2                        116
#define TRISC3                        117
#define TRISC4                        118
#define TRISC5                        119
#define TRISC6                        120
#define TRISC7                        121
#define PIE1                          122
#define TMR1IE                        123
#define ADIE                          124
#define TMR1GIE                       125
#define PIE2                          126
#define LCDIE                         127
#define EEIE                          128
#define OPTION_REG                    129
#define PS                            130
#define PS0                           131
#define PS1                           132
#define PS2                           133
#define PSA                           134
#define T0SE                          135
#define TMR0SE                        136
#define T0CS                          137
#define TMR0CS                        138
#define INTEDG                        139
#define nWPUEN                        140
#define PCON                          141
#define nBOR                          142
#define nPOR                          143
#define nRI                           144
#define nRMCLR                        145
#define nRWDT                         146
#define STKUNF                        147
#define STKOVF                        148
#define WDTCON                        149
#define SWDTEN                        150
#define WDTPS                         151
#define WDTPS0                        152
#define WDTPS1                        153
#define WDTPS2                        154
#define WDTPS3                        155
#define WDTPS4                        156
#define OSCCON                        157
#define SCS0                          158
#define SCS                           159
#define SCS1                          160
#define IRCF                          161
#define IRCF0                         162
#define IRCF1                         163
#define IRCF2                         164
#define IRCF3                         165
#define OSCSTAT                       166
#define HFIOFS                        167
#define LFIOFR                        168
#define HFIOFR                        169
#define OSTS                          170
#define T1OSCR                        171
#define ADRESL                        172
#define ADRESH                        173
#define ADCON0                        174
#define ADON                          175
#define nDONE                         176
#define GO_nDONE                      177
#define GO                            178
#define ADGO                          179
#define CHS0                          180
#define CHS                           181
#define CHS1                          182
#define CHS2                          183
#define CHS3                          184
#define CHS4                          185
#define ADCON1                        186
#define ADPREF0                       187
#define ADPREF                        188
#define ADPREF1                       189
#define ADCS0                         190
#define ADCS                          191
#define ADCS1                         192
#define ADCS2                         193
#define ADFM                          194
#define LATA                          195
#define LATA0                         196
#define LATA1                         197
#define LATA2                         198
#define LATA3                         199
#define LATA4                         200
#define LATA5                         201
#define LATA6                         202
#define LATA7                         203
#define LATB                          204
#define LATB0                         205
#define LATB1                         206
#define LATB2                         207
#define LATB3                         208
#define LATB4                         209
#define LATB5                         210
#define LATB6                         211
#define LATB7                         212
#define LATC                          213
#define LATC0                         214
#define LATC1                         215
#define LATC2                         216
#define LATC3                         217
#define LATC4                         218
#define LATC5                         219
#define LATC6                         220
#define LATC7                         221
#define BORCON                        222
#define BORRDY                        223
#define BORFS                         224
#define SBOREN                        225
#define FVRCON                        226
#define ADFVR0                        227
#define ADFVR                         228
#define ADFVR1                        229
#define CDAFVR                        230
#define TSRNG                         231
#define TSEN                          232
#define FVRRDY                        233
#define FVREN                         234
#define ANSA0                         235
#define ANSELA                        236
#define ANSA1                         237
#define ANSA2                         238
#define ANSA3                         239
#define ANSA5                         240
#define ANSB0                         241
#define ANSELB                        242
#define ANSB1                         243
#define ANSB2                         244
#define ANSB3                         245
#define ANSB4                         246
#define ANSB5                         247
#define PMADRL                        248
#define PMADRH                        249
#define PMDATL                        250
#define PMDATH                        251
#define PMCON1                        252
#define RD                            253
#define WR                            254
#define WREN                          255
#define WRERR                         256
#define FREE                          257
#define LWLO                          258
#define CFGS                          259
#define PMCON2                        260
#define WPUB0                         261
#define WPUB                          262
#define WPUB1                         263
#define WPUB2                         264
#define WPUB3                         265
#define WPUB4                         266
#define WPUB5                         267
#define WPUB6                         268
#define WPUB7                         269
#define WPUE                          270
#define WPUE3                         271
#define IOCBP                         272
#define IOCBP0                        273
#define IOCBP1                        274
#define IOCBP2                        275
#define IOCBP3                        276
#define IOCBP4                        277
#define IOCBP5                        278
#define IOCBP6                        279
#define IOCBP7                        280
#define IOCBN0                        281
#define IOCBN                         282
#define IOCBN1                        283
#define IOCBN2                        284
#define IOCBN3                        285
#define IOCBN4                        286
#define IOCBN5                        287
#define IOCBN6                        288
#define IOCBN7                        289
#define IOCBF0                        290
#define IOCBF                         291
#define IOCBF1                        292
#define IOCBF2                        293
#define IOCBF3                        294
#define IOCBF4                        295
#define IOCBF5                        296
#define IOCBF6                        297
#define IOCBF7                        298
#define LCDCON                        299
#define LMUX0                         300
#define LMUX                          301
#define LMUX1                         302
#define CS                            303
#define CS0                           304
#define CS1                           305
#define WERR                          306
#define SLPEN                         307
#define LCDEN                         308
#define LCDPS                         309
#define LP                            310
#define LP0                           311
#define LP1                           312
#define LP2                           313
#define LP3                           314
#define WA                            315
#define LCDA                          316
#define BIASMD                        317
#define WFT                           318
#define LCDREF                        319
#define VLCD1PE                       320
#define VLCD2PE                       321
#define VLCD3PE                       322
#define LCDIRI                        323
#define LCDIRE                        324
#define LCDCST0                       325
#define LCDCST                        326
#define LCDCST1                       327
#define LCDCST2                       328
#define LCDRL                         329
#define LRLAT0                        330
#define LRLAT                         331
#define LRLAT1                        332
#define LRLAT2                        333
#define LRLBP                         334
#define LRLBP0                        335
#define LRLBP1                        336
#define LRLAP0                        337
#define LRLAP                         338
#define LRLAP1                        339
#define LCDSE0                        340
#define SE0                           341
#define SE1                           342
#define SE2                           343
#define SE3                           344
#define SE4                           345
#define SE5                           346
#define SE6                           347
#define SE7                           348
#define LCDSE1                        349
#define SE8                           350
#define SE9                           351
#define SE10                          352
#define SE11                          353
#define SE12                          354
#define SE13                          355
#define SE14                          356
#define SE15                          357
#define LCDSE3                        358
#define SE24                          359
#define SE25                          360
#define SE26                          361
#define LCDDATA0                      362
#define SEG0COM0                      363
#define SEG1COM0                      364
#define SEG2COM0                      365
#define SEG3COM0                      366
#define SEG4COM0                      367
#define SEG5COM0                      368
#define SEG6COM0                      369
#define SEG7COM0                      370
#define LCDDATA1                      371
#define SEG8COM0                      372
#define SEG9COM0                      373
#define SEG10COM0                     374
#define SEG11COM0                     375
#define SEG12COM0                     376
#define SEG13COM0                     377
#define SEG14COM0                     378
#define SEG15COM0                     379
#define LCDDATA3                      380
#define SEG0COM1                      381
#define SEG1COM1                      382
#define SEG2COM1                      383
#define SEG3COM1                      384
#define SEG4COM1                      385
#define SEG5COM1                      386
#define SEG6COM1                      387
#define SEG7COM1                      388
#define LCDDATA4                      389
#define SEG8COM1                      390
#define SEG9COM1                      391
#define SEG10COM1                     392
#define SEG11COM1                     393
#define SEG12COM1                     394
#define SEG13COM1                     395
#define SEG14COM1                     396
#define SEG15COM1                     397
#define LCDDATA6                      398
#define SEG0COM2                      399
#define SEG1COM2                      400
#define SEG2COM2                      401
#define SEG3COM2                      402
#define SEG4COM2                      403
#define SEG5COM2                      404
#define SEG6COM2                      405
#define SEG7COM2                      406
#define LCDDATA7                      407
#define SEG8COM2                      408
#define SEG9COM2                      409
#define SEG10COM2                     410
#define SEG11COM2                     411
#define SEG12COM2                     412
#define SEG13COM2                     413
#define SEG14COM2                     414
#define SEG15COM2                     415
#define LCDDATA9                      416
#define SEG0COM3                      417
#define SEG1COM3                      418
#define SEG2COM3                      419
#define SEG3COM3                      420
#define SEG4COM3                      421
#define SEG5COM3                      422
#define SEG6COM3                      423
#define SEG7COM3                      424
#define LCDDATA10                     425
#define SEG8COM3                      426
#define SEG9COM3                      427
#define SEG10COM3                     428
#define SEG11COM3                     429
#define SEG12COM3                     430
#define SEG13COM3                     431
#define SEG14COM3                     432
#define SEG15COM3                     433
#define LCDDATA12                     434
#define SEG24COM0                     435
#define SEG25COM0                     436
#define SEG26COM0                     437
#define LCDDATA15                     438
#define SEG24COM1                     439
#define SEG25COM1                     440
#define SEG26COM1                     441
#define LCDDATA18                     442
#define SEG24COM2                     443
#define SEG25COM2                     444
#define SEG26COM2                     445
#define LCDDATA21                     446
#define SEG24COM3                     447
#define SEG25COM3                     448
#define SEG26COM3                     449
#define STATUS_SHAD                   450
#define C_SHAD                        451
#define DC_SHAD                       452
#define Z_SHAD                        453
#define WREG_SHAD                     454
#define BSR_SHAD                      455
#define PCLATH_SHAD                   456
#define FSR0L_SHAD                    457
#define FSR0H_SHAD                    458
#define FSR1L_SHAD                    459
#define FSR1H_SHAD                    460
#define STKPTR                        461
#define TOSL                          462
#define TOSH                          463

#endif // _PIC16LF1902_H_