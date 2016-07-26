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

#ifndef _PIC18F1220_H_
#define _PIC18F1220_H_

#define PORTA                         0
#define AN0                           1
#define ULPWUIN                       2
#define PORTA_RA0                     3
#define AN1                           4
#define PORTA_RA1                     5
#define LVDIN                         6
#define AN2                           7
#define PORTA_RA2                     8
#define VREFM                         9
#define AN3                           10
#define PORTA_RA3                     11
#define VREFP                         12
#define PORTA_RA4                     13
#define T0CKI                         14
#define RA5                           15
#define NOT_MCLR                      16
#define MCLR                          17
#define nMCLR                         18
#define CLKOUT                        19
#define CLKO                          20
#define PORTA_RA6                     21
#define OSC2                          22
#define CLKI                          23
#define CLKIN                         24
#define PORTA_RA7                     25
#define OSC1                          26
#define RJPU                          27
#define PORTB                         28
#define AN4                           29
#define INT0                          30
#define PORTB_RB0                     31
#define AN5                           32
#define TX                            33
#define INT1                          34
#define CK                            35
#define PORTB_RB1                     36
#define INT2                          37
#define P1B                           38
#define PORTB_RB2                     39
#define CCP2_PA2                      40
#define CCP1                          41
#define P1A                           42
#define PORTB_RB3                     43
#define RX                            44
#define AN6                           45
#define DT                            46
#define KBI0                          47
#define PORTB_RB4                     48
#define PGM                           49
#define KBI1                          50
#define PORTB_RB5                     51
#define T13CKI                        52
#define PGC                           53
#define T1CKI                         54
#define P1C                           55
#define T1OSO                         56
#define KBI2                          57
#define PORTB_RB6                     58
#define PGD                           59
#define P1D                           60
#define T1OSI                         61
#define KBI3                          62
#define PORTB_RB7                     63
#define LATA                          64
#define LATA0                         65
#define LA0                           66
#define LATA1                         67
#define LA1                           68
#define LATA2                         69
#define LA2                           70
#define LATA3                         71
#define LA3                           72
#define LATA4                         73
#define LA4                           74
#define LATA6                         75
#define LA6                           76
#define LATA7                         77
#define LA7                           78
#define LATB                          79
#define LB0                           80
#define LATB0                         81
#define LB1                           82
#define LATB1                         83
#define LB2                           84
#define LATB2                         85
#define LB3                           86
#define LATB3                         87
#define LB4                           88
#define LATB4                         89
#define LB5                           90
#define LATB5                         91
#define LB6                           92
#define LATB6                         93
#define LB7                           94
#define LATB7                         95
#define TRISA                         96
#define TRISA0                        97
#define TRISA_RA0                     98
#define TRISA_RA1                     99
#define TRISA1                        100
#define TRISA_RA2                     101
#define TRISA2                        102
#define TRISA_RA3                     103
#define TRISA3                        104
#define TRISA_RA4                     105
#define TRISA4                        106
#define TRISA_RA6                     107
#define TRISA6                        108
#define TRISA_RA7                     109
#define TRISA7                        110
#define TRISB                         111
#define TRISB_RB0                     112
#define TRISB0                        113
#define TRISB_RB1                     114
#define TRISB1                        115
#define TRISB_RB2                     116
#define TRISB2                        117
#define TRISB_RB3                     118
#define TRISB3                        119
#define TRISB_RB4                     120
#define TRISB4                        121
#define TRISB_RB5                     122
#define TRISB5                        123
#define TRISB_RB6                     124
#define TRISB6                        125
#define TRISB_RB7                     126
#define TRISB7                        127
#define OSCTUNE                       128
#define TUN0                          129
#define TUN                           130
#define TUN1                          131
#define TUN2                          132
#define TUN3                          133
#define TUN4                          134
#define TUN5                          135
#define PIE1                          136
#define TMR1IE                        137
#define TMR2IE                        138
#define CCP1IE                        139
#define TXIE                          140
#define TX1IE                         141
#define RCIE                          142
#define RC1IE                         143
#define ADIE                          144
#define PIR1                          145
#define TMR1IF                        146
#define TMR2IF                        147
#define CCP1IF                        148
#define TXIF                          149
#define TX1IF                         150
#define RCIF                          151
#define RC1IF                         152
#define ADIF                          153
#define IPR1                          154
#define TMR1IP                        155
#define TMR2IP                        156
#define CCP1IP                        157
#define TX1IP                         158
#define TXIP                          159
#define RCIP                          160
#define RC1IP                         161
#define ADIP                          162
#define PIE2                          163
#define TMR3IE                        164
#define LVDIE                         165
#define EEIE                          166
#define OSCFIE                        167
#define PIR2                          168
#define TMR3IF                        169
#define LVDIF                         170
#define EEIF                          171
#define OSCFIF                        172
#define IPR2                          173
#define TMR3IP                        174
#define LVDIP                         175
#define EEIP                          176
#define OSCFIP                        177
#define EECON1                        178
#define RD                            179
#define WR                            180
#define WREN                          181
#define WRERR                         182
#define FREE                          183
#define CFGS                          184
#define EEFS                          185
#define EEPGD                         186
#define BAUDCTL                       187
#define ABDEN                         188
#define W4E                           189
#define WUE                           190
#define BRG16                         191
#define SCKP                          192
#define RCMT                          193
#define RCIDL                         194
#define RCSTA                         195
#define RCD8                          196
#define RX9D                          197
#define OERR                          198
#define FERR                          199
#define ADDEN                         200
#define ADEN                          201
#define CREN                          202
#define SRENA                         203
#define SREN                          204
#define RC9                           205
#define RC8_9                         206
#define RX9                           207
#define SPEN                          208
#define TXSTA                         209
#define TXD8                          210
#define TX9D1                         211
#define TX9D                          212
#define TRMT                          213
#define TRMT1                         214
#define BRGH1                         215
#define BRGH                          216
#define SENDB1                        217
#define SENDB                         218
#define SYNC                          219
#define SYNC1                         220
#define TXEN1                         221
#define TXEN                          222
#define TX91                          223
#define TX8_9                         224
#define TX9                           225
#define CSRC1                         226
#define CSRC                          227
#define T3CON                         228
#define TMR3ON                        229
#define TMR3CS                        230
#define nT3SYNC                       231
#define NOT_T3SYNC                    232
#define T3SYNC                        233
#define SOSCEN3                       234
#define T3CCP1                        235
#define T3CKPS                        236
#define T3CKPS0                       237
#define T3CKPS1                       238
#define T3CCP2                        239
#define T3CON_RD16                    240
#define RD163                         241
#define T3RD16                        242
#define PSSBD                         243
#define PSSBD0                        244
#define PSSBD1                        245
#define PSSAC                         246
#define PSSAC0                        247
#define PSSAC1                        248
#define ECCPAS0                       249
#define ECCPAS                        250
#define ECCPAS1                       251
#define ECCPAS2                       252
#define ECCPASE                       253
#define PWM1CON                       254
#define PDC0                          255
#define PDC                           256
#define PDC1                          257
#define PDC2                          258
#define PDC3                          259
#define PDC4                          260
#define PDC5                          261
#define PDC6                          262
#define PRSEN                         263
#define CCP1CON                       264
#define CCP1M0                        265
#define CCP1M                         266
#define CCP1M1                        267
#define CCP1M2                        268
#define CCP1M3                        269
#define CCP1Y                         270
#define DC1B                          271
#define DC1B0                         272
#define CCP1X                         273
#define DC1B1                         274
#define P1M                           275
#define P1M0                          276
#define P1M1                          277
#define ADCON2                        278
#define ADCS0                         279
#define ADCS                          280
#define ADCS1                         281
#define ADCS2                         282
#define ACQT0                         283
#define ACQT                          284
#define ACQT1                         285
#define ACQT2                         286
#define ADFM                          287
#define ADCON1                        288
#define PCFG0                         289
#define PCFG                          290
#define PCFG1                         291
#define PCFG2                         292
#define CHSN3                         293
#define PCFG3                         294
#define VCFG01                        295
#define PCFG4                         296
#define VCFG11                        297
#define PCFG5                         298
#define PCFG6                         299
#define ADCON0                        300
#define ADON                          301
#define nDONE                         302
#define GODONE                        303
#define GO_nDONE                      304
#define GO_DONE                       305
#define NOT_DONE                      306
#define DONE                          307
#define GO                            308
#define GO_NOT_DONE                   309
#define CHS                           310
#define CHS0                          311
#define CHS1                          312
#define CHS2                          313
#define VCFG                          314
#define VCFG0                         315
#define ADCAL                         316
#define VCFG1                         317
#define T2CON                         318
#define T2CKPS0                       319
#define T2CKPS                        320
#define T2CKPS1                       321
#define TMR2ON                        322
#define TOUTPS0                       323
#define TOUTPS                        324
#define TOUTPS1                       325
#define TOUTPS2                       326
#define TOUTPS3                       327
#define PR2                           328
#define WM0                           329
#define WM1                           330
#define WAIT0                         331
#define WAIT1                         332
#define EBDIS                         333
#define T1CON                         334
#define TMR1ON                        335
#define TMR1CS                        336
#define NOT_T1SYNC                    337
#define T1SYNC                        338
#define nT1SYNC                       339
#define T1OSCEN                       340
#define SOSCEN                        341
#define T1CKPS0                       342
#define T1CKPS                        343
#define T1CKPS1                       344
#define T1RUN                         345
#define T1CON_RD16                    346
#define T1RD16                        347
#define RCON                          348
#define BOR                           349
#define NOT_BOR                       350
#define nBOR                          351
#define POR                           352
#define nPOR                          353
#define NOT_POR                       354
#define nPD                           355
#define NOT_PD                        356
#define PD                            357
#define NOT_TO                        358
#define nTO                           359
#define TO                            360
#define nRI                           361
#define NOT_RI                        362
#define RI                            363
#define IPEN                          364
#define WDTCON                        365
#define SWDTE                         366
#define SWDTEN                        367
#define LVDCON                        368
#define LVDL0                         369
#define LVDL                          370
#define LVDL1                         371
#define LVDL2                         372
#define LVDL3                         373
#define LVDEN                         374
#define IRVST                         375
#define IVRST                         376
#define OSCCON                        377
#define SCS0                          378
#define SCS                           379
#define SCS1                          380
#define FLTS                          381
#define IOFS                          382
#define OSTS                          383
#define IRCF                          384
#define IRCF0                         385
#define IRCF1                         386
#define IRCF2                         387
#define IDLEN                         388
#define T0CON                         389
#define T0PS                          390
#define T0PS0                         391
#define T0PS1                         392
#define T0PS2                         393
#define PSA                           394
#define T0SE                          395
#define T0CS                          396
#define T08BIT                        397
#define T016BIT                       398
#define TMR0ON                        399
#define STATUS                        400
#define C                             401
#define CARRY                         402
#define DC                            403
#define ZERO                          404
#define Z                             405
#define OV                            406
#define OVERFLOW                      407
#define N                             408
#define NEGATIVE                      409
#define INTCON3                       410
#define INT1IF                        411
#define INT1F                         412
#define INT2IF                        413
#define INT2F                         414
#define INT1E                         415
#define INT1IE                        416
#define INT2IE                        417
#define INT2E                         418
#define INT1P                         419
#define INT1IP                        420
#define INT2IP                        421
#define INT2P                         422
#define INTCON2                       423
#define RBIP                          424
#define TMR0IP                        425
#define T0IP                          426
#define INTEDG2                       427
#define INTEDG1                       428
#define INTEDG0                       429
#define RBPU                          430
#define NOT_RBPU                      431
#define nRBPU                         432
#define INTCON                        433
#define RBIF                          434
#define INT0F                         435
#define INTF                          436
#define INT0IF                        437
#define T0IF                          438
#define TMR0IF                        439
#define RBIE                          440
#define INTE                          441
#define INT0E                         442
#define INT0IE                        443
#define T0IE                          444
#define TMR0IE                        445
#define PEIE                          446
#define PEIE_GIEL                     447
#define GIEL                          448
#define GIE_GIEH                      449
#define GIE                           450
#define GIEH                          451
#define STKPTR0                       452
#define STKPTR                        453
#define SP0                           454
#define STKPTR1                       455
#define SP1                           456
#define STKPTR2                       457
#define SP2                           458
#define SP3                           459
#define STKPTR3                       460
#define STKPTR4                       461
#define SP4                           462
#define STKUNF                        463
#define STKOVF                        464
#define STKFUL                        465

#endif // _PIC18F1220_H_
