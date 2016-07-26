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

#ifndef _PIC16F887_H_
#define _PIC16F887_H_

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
#define PORTA                         12
#define RA0                           13
#define RA1                           14
#define RA2                           15
#define RA3                           16
#define RA4                           17
#define RA5                           18
#define RA6                           19
#define RA7                           20
#define PORTB                         21
#define RB0                           22
#define RB1                           23
#define RB2                           24
#define RB3                           25
#define RB4                           26
#define RB5                           27
#define RB6                           28
#define RB7                           29
#define PORTC                         30
#define RC0                           31
#define RC1                           32
#define RC2                           33
#define RC3                           34
#define RC4                           35
#define RC5                           36
#define RC6                           37
#define RC7                           38
#define PORTD                         39
#define RD0                           40
#define RD1                           41
#define RD2                           42
#define RD3                           43
#define RD4                           44
#define RD5                           45
#define RD6                           46
#define RD7                           47
#define PORTE                         48
#define RE0                           49
#define RE1                           50
#define RE2                           51
#define RE3                           52
#define INTCON                        53
#define RBIF                          54
#define INTF                          55
#define T0IF                          56
#define TMR0IF                        57
#define RBIE                          58
#define INTE                          59
#define T0IE                          60
#define TMR0IE                        61
#define PEIE                          62
#define GIE                           63
#define PIR1                          64
#define TMR1IF                        65
#define TMR2IF                        66
#define CCP1IF                        67
#define SSPIF                         68
#define TXIF                          69
#define RCIF                          70
#define ADIF                          71
#define PIR2                          72
#define CCP2IF                        73
#define ULPWUIF                       74
#define BCLIF                         75
#define EEIF                          76
#define C1IF                          77
#define C2IF                          78
#define OSFIF                         79
#define T1CON                         80
#define TMR1ON                        81
#define TMR1CS                        82
#define T1SYNC                        83
#define T1INSYNC                      84
#define nT1SYNC                       85
#define T1OSCEN                       86
#define T1CKPS0                       87
#define T1CKPS                        88
#define T1CKPS1                       89
#define TMR1GE                        90
#define T1GINV                        91
#define T1GIV                         92
#define T2CON                         93
#define T2CKPS0                       94
#define T2CKPS                        95
#define T2CKPS1                       96
#define TMR2ON                        97
#define TOUTPS0                       98
#define TOUTPS                        99
#define TOUTPS1                       100
#define TOUTPS2                       101
#define TOUTPS3                       102
#define SSPCON                        103
#define SSPM0                         104
#define SSPM                          105
#define SSPM1                         106
#define SSPM2                         107
#define SSPM3                         108
#define CKP                           109
#define SSPEN                         110
#define SSPOV                         111
#define WCOL                          112
#define CCP1CON                       113
#define CCP1M0                        114
#define CCP1M                         115
#define CCP1M1                        116
#define CCP1M2                        117
#define CCP1M3                        118
#define CCP1Y                         119
#define DC1B                          120
#define DC1B0                         121
#define CCP1X                         122
#define DC1B1                         123
#define P1M                           124
#define P1M0                          125
#define P1M1                          126
#define RCSTA                         127
#define RCD8                          128
#define RX9D                          129
#define OERR                          130
#define FERR                          131
#define ADDEN                         132
#define CREN                          133
#define SREN                          134
#define RC8_9                         135
#define RC9                           136
#define RX9                           137
#define nRC8                          138
#define SPEN                          139
#define CCP2CON                       140
#define CCP2M                         141
#define CCP2M0                        142
#define CCP2M1                        143
#define CCP2M2                        144
#define CCP2M3                        145
#define DC2B0                         146
#define CCP2Y                         147
#define DC2B1                         148
#define CCP2X                         149
#define ADCON0                        150
#define ADON                          151
#define nDONE                         152
#define GO_nDONE                      153
#define GO_DONE                       154
#define GO                            155
#define CHS                           156
#define CHS0                          157
#define CHS1                          158
#define CHS2                          159
#define CHS3                          160
#define ADCS                          161
#define ADCS0                         162
#define ADCS1                         163
#define OPTION_REG                    164
#define PS                            165
#define PS0                           166
#define PS1                           167
#define PS2                           168
#define PSA                           169
#define T0SE                          170
#define T0CS                          171
#define INTEDG                        172
#define nRBPU                         173
#define TRISA                         174
#define TRISA0                        175
#define TRISA1                        176
#define TRISA2                        177
#define TRISA3                        178
#define TRISA4                        179
#define TRISA5                        180
#define TRISA6                        181
#define TRISA7                        182
#define TRISB                         183
#define TRISB0                        184
#define TRISB1                        185
#define TRISB2                        186
#define TRISB3                        187
#define TRISB4                        188
#define TRISB5                        189
#define TRISB6                        190
#define TRISB7                        191
#define TRISC                         192
#define TRISC0                        193
#define TRISC1                        194
#define TRISC2                        195
#define TRISC3                        196
#define TRISC4                        197
#define TRISC5                        198
#define TRISC6                        199
#define TRISC7                        200
#define TRISD                         201
#define TRISD0                        202
#define TRISD1                        203
#define TRISD2                        204
#define TRISD3                        205
#define TRISD4                        206
#define TRISD5                        207
#define TRISD6                        208
#define TRISD7                        209
#define TRISE                         210
#define TRISE0                        211
#define TRISE1                        212
#define TRISE2                        213
#define TRISE3                        214
#define PIE1                          215
#define TMR1IE                        216
#define TMR2IE                        217
#define CCP1IE                        218
#define SSPIE                         219
#define TXIE                          220
#define RCIE                          221
#define ADIE                          222
#define PIE2                          223
#define CCP2IE                        224
#define ULPWUIE                       225
#define BCLIE                         226
#define EEIE                          227
#define C1IE                          228
#define C2IE                          229
#define OSFIE                         230
#define PCON                          231
#define nBOR                          232
#define nBO                           233
#define nPOR                          234
#define SBOREN                        235
#define ULPWUE                        236
#define OSCCON                        237
#define SCS                           238
#define LTS                           239
#define HTS                           240
#define OSTS                          241
#define IRCF                          242
#define IRCF0                         243
#define IRCF1                         244
#define IRCF2                         245
#define OSCTUNE                       246
#define TUN0                          247
#define TUN                           248
#define TUN1                          249
#define TUN2                          250
#define TUN3                          251
#define TUN4                          252
#define SSPCON2                       253
#define SEN                           254
#define RSEN                          255
#define PEN                           256
#define RCEN                          257
#define ACKEN                         258
#define ACKDT                         259
#define ACKSTAT                       260
#define GCEN                          261
#define SSPMSK                        262
#define MSK0                          263
#define MSK1                          264
#define MSK2                          265
#define MSK3                          266
#define MSK4                          267
#define MSK5                          268
#define MSK6                          269
#define MSK7                          270
#define SSPSTAT                       271
#define BF                            272
#define UA                            273
#define R_nW                          274
#define READ_WRITE                    275
#define I2C_READ                      276
#define nW                            277
#define R                             278
#define nWRITE                        279
#define R_W                           280
#define S                             281
#define I2C_START                     282
#define I2C_STOP                      283
#define P                             284
#define nA                            285
#define D_A                           286
#define D_nA                          287
#define D                             288
#define DATA_ADDRESS                  289
#define nADDRESS                      290
#define I2C_DATA                      291
#define CKE                           292
#define SMP                           293
#define WPUB0                         294
#define WPUB                          295
#define WPUB1                         296
#define WPUB2                         297
#define WPUB3                         298
#define WPUB4                         299
#define WPUB5                         300
#define WPUB6                         301
#define WPUB7                         302
#define IOCB0                         303
#define IOCB                          304
#define IOCB1                         305
#define IOCB2                         306
#define IOCB3                         307
#define IOCB4                         308
#define IOCB5                         309
#define IOCB6                         310
#define IOCB7                         311
#define VRCON                         312
#define VR0                           313
#define VR                            314
#define VR1                           315
#define VR2                           316
#define VR3                           317
#define VRSS                          318
#define VRR                           319
#define VROE                          320
#define VREN                          321
#define TXSTA                         322
#define TXD8                          323
#define TX9D                          324
#define TRMT                          325
#define BRGH                          326
#define SENDB                         327
#define SYNC                          328
#define TXEN                          329
#define TX8_9                         330
#define TX9                           331
#define nTX8                          332
#define CSRC                          333
#define SPBRG                         334
#define BRG0                          335
#define BRG1                          336
#define BRG2                          337
#define BRG3                          338
#define BRG4                          339
#define BRG5                          340
#define BRG6                          341
#define BRG7                          342
#define SPBRGH                        343
#define BRG8                          344
#define BRG9                          345
#define BRG10                         346
#define BRG11                         347
#define BRG12                         348
#define BRG13                         349
#define BRG14                         350
#define BRG15                         351
#define PWM1CON                       352
#define PDC0                          353
#define PDC                           354
#define PDC1                          355
#define PDC2                          356
#define PDC3                          357
#define PDC4                          358
#define PDC5                          359
#define PDC6                          360
#define PRSEN                         361
#define PSSBD                         362
#define PSSBD0                        363
#define PSSBD1                        364
#define PSSAC                         365
#define PSSAC0                        366
#define PSSAC1                        367
#define ECCPAS0                       368
#define ECCPAS                        369
#define ECCPAS1                       370
#define ECCPAS2                       371
#define ECCPASE                       372
#define PSTRCON                       373
#define STRA                          374
#define STRB                          375
#define STRC                          376
#define STRD                          377
#define STRSYNC                       378
#define ADCON1                        379
#define VCFG0                         380
#define VCFG1                         381
#define ADFM                          382
#define WDTCON                        383
#define SWDTEN                        384
#define WDTPS                         385
#define WDTPS0                        386
#define WDTPS1                        387
#define WDTPS2                        388
#define WDTPS3                        389
#define CM1CON0                       390
#define C1CH                          391
#define C1CH0                         392
#define C1CH1                         393
#define C1R                           394
#define C1POL                         395
#define C1OE                          396
#define C1OUT                         397
#define C1ON                          398
#define CM2CON0                       399
#define C2CH0                         400
#define C2CH                          401
#define C2CH1                         402
#define C2R                           403
#define C2POL                         404
#define C2OE                          405
#define C2OUT                         406
#define C2ON                          407
#define CM2CON1                       408
#define C2SYNC                        409
#define T1GSS                         410
#define C2RSEL                        411
#define C1RSEL                        412
#define MC2OUT                        413
#define MC1OUT                        414
#define SRCON                         415
#define FVREN                         416
#define PULSR                         417
#define PULSS                         418
#define C2REN                         419
#define C1SEN                         420
#define SR0                           421
#define SR1                           422
#define BAUDCTL                       423
#define ABDEN                         424
#define WUE                           425
#define BRG16                         426
#define SCKP                          427
#define RCIDL                         428
#define ABDOVF                        429
#define ANSEL                         430
#define ANS0                          431
#define ANS1                          432
#define ANS2                          433
#define ANS3                          434
#define ANS4                          435
#define ANS5                          436
#define ANS6                          437
#define ANS7                          438
#define ANSELH                        439
#define ANS8                          440
#define ANS9                          441
#define ANS10                         442
#define ANS11                         443
#define ANS12                         444
#define ANS13                         445
#define EECON1                        446
#define RD                            447
#define WR                            448
#define WREN                          449
#define WRERR                         450
#define EEPGD                         451

#endif // _PIC16F887_H_