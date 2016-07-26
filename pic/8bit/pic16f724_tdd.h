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

#ifndef _PIC16F724_H_
#define _PIC16F724_H_

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
#define IOCIF                         55
#define INTF                          56
#define T0IF                          57
#define TMR0IF                        58
#define IOCIE                         59
#define RBIE                          60
#define INTE                          61
#define T0IE                          62
#define TMR0IE                        63
#define PEIE                          64
#define GIE                           65
#define PIR1                          66
#define TMR1IF                        67
#define TMR2IF                        68
#define CCP1IF                        69
#define SSPIF                         70
#define TXIF                          71
#define RCIF                          72
#define ADIF                          73
#define TMR1GIF                       74
#define PIR2                          75
#define CCP2IF                        76
#define T1CON                         77
#define TMR1ON                        78
#define T1SYNC                        79
#define nT1SYNC                       80
#define T1INSYNC                      81
#define T1OSCEN                       82
#define T1CKPS0                       83
#define T1CKPS                        84
#define T1CKPS1                       85
#define TMR1CS0                       86
#define TMR1CS                        87
#define TMR1CS1                       88
#define T2CON                         89
#define T2CKPS0                       90
#define T2CKPS                        91
#define T2CKPS1                       92
#define TMR2ON                        93
#define TOUTPS0                       94
#define TOUTPS                        95
#define TOUTPS1                       96
#define TOUTPS2                       97
#define TOUTPS3                       98
#define SSPCON                        99
#define SSPM0                         100
#define SSPM                          101
#define SSPM1                         102
#define SSPM2                         103
#define SSPM3                         104
#define CKP                           105
#define SSPEN                         106
#define SSPOV                         107
#define WCOL                          108
#define CCP1CON                       109
#define CCP1M0                        110
#define CCP1M                         111
#define CCP1M1                        112
#define CCP1M2                        113
#define CCP1M3                        114
#define CCP1Y                         115
#define DC1B                          116
#define DC1B0                         117
#define CCP1X                         118
#define DC1B1                         119
#define RCSTA                         120
#define RCD8                          121
#define RX9D                          122
#define OERR                          123
#define FERR                          124
#define ADDEN                         125
#define CREN                          126
#define SREN                          127
#define RC8_9                         128
#define RC9                           129
#define RX9                           130
#define nRC8                          131
#define SPEN                          132
#define CCP2CON                       133
#define CCP2M                         134
#define CCP2M0                        135
#define CCP2M1                        136
#define CCP2M2                        137
#define CCP2M3                        138
#define DC2B0                         139
#define CCP2Y                         140
#define DC2B                          141
#define DC2B1                         142
#define CCP2X                         143
#define ADCON0                        144
#define ADON                          145
#define nDONE                         146
#define GO_nDONE                      147
#define GO_DONE                       148
#define GO                            149
#define CHS                           150
#define CHS0                          151
#define CHS1                          152
#define CHS2                          153
#define CHS3                          154
#define OPTION_REG                    155
#define PS                            156
#define PS0                           157
#define PS1                           158
#define PS2                           159
#define PSA                           160
#define T0SE                          161
#define T0CS                          162
#define INTEDG                        163
#define nRBPU                         164
#define TRISA                         165
#define TRISA0                        166
#define TRISA1                        167
#define TRISA2                        168
#define TRISA3                        169
#define TRISA4                        170
#define TRISA5                        171
#define TRISA6                        172
#define TRISA7                        173
#define TRISB                         174
#define TRISB0                        175
#define TRISB1                        176
#define TRISB2                        177
#define TRISB3                        178
#define TRISB4                        179
#define TRISB5                        180
#define TRISB6                        181
#define TRISB7                        182
#define TRISC                         183
#define TRISC0                        184
#define TRISC1                        185
#define TRISC2                        186
#define TRISC3                        187
#define TRISC4                        188
#define TRISC5                        189
#define TRISC6                        190
#define TRISC7                        191
#define TRISD                         192
#define TRISD0                        193
#define TRISD1                        194
#define TRISD2                        195
#define TRISD3                        196
#define TRISD4                        197
#define TRISD5                        198
#define TRISD6                        199
#define TRISD7                        200
#define TRISE                         201
#define TRISE0                        202
#define TRISE1                        203
#define TRISE2                        204
#define TRISE3                        205
#define PIE1                          206
#define TMR1IE                        207
#define TMR2IE                        208
#define CCP1IE                        209
#define SSPIE                         210
#define TXIE                          211
#define RCIE                          212
#define ADIE                          213
#define TMR1GIE                       214
#define PIE2                          215
#define CCP2IE                        216
#define PCON                          217
#define nBOR                          218
#define nBO                           219
#define nPOR                          220
#define T1GCON                        221
#define T1GSS0                        222
#define T1GSS                         223
#define T1GSS1                        224
#define T1GVAL                        225
#define T1GGO_nDONE                   226
#define T1GGO                         227
#define T1G_nDONE                     228
#define T1GGO_DONE                    229
#define T1GSPM                        230
#define T1GTM                         231
#define T1GPOL                        232
#define TMR1GE                        233
#define OSCCON                        234
#define ICSS                          235
#define ICSL                          236
#define IRCF                          237
#define IRCF0                         238
#define IRCF1                         239
#define OSCTUNE                       240
#define TUN0                          241
#define TUN                           242
#define TUN1                          243
#define TUN2                          244
#define TUN3                          245
#define TUN4                          246
#define TUN5                          247
#define SSPSTAT                       248
#define BF                            249
#define UA                            250
#define R_nW                          251
#define READ_WRITE                    252
#define I2C_READ                      253
#define nW                            254
#define R                             255
#define nWRITE                        256
#define R_W                           257
#define S                             258
#define I2C_START                     259
#define I2C_STOP                      260
#define P                             261
#define nA                            262
#define D_A                           263
#define D_nA                          264
#define D                             265
#define DATA_ADDRESS                  266
#define nADDRESS                      267
#define I2C_DATA                      268
#define CKE                           269
#define SMP                           270
#define WPUB0                         271
#define WPU0                          272
#define WPUB                          273
#define WPUB1                         274
#define WPU1                          275
#define WPUB2                         276
#define WPU2                          277
#define WPUB3                         278
#define WPU3                          279
#define WPUB4                         280
#define WPU4                          281
#define WPUB5                         282
#define WPU5                          283
#define WPUB6                         284
#define WPU6                          285
#define WPUB7                         286
#define WPU7                          287
#define IOCB0                         288
#define IOC0                          289
#define IOCB                          290
#define IOCB1                         291
#define IOC1                          292
#define IOC2                          293
#define IOCB2                         294
#define IOCB3                         295
#define IOC3                          296
#define IOC4                          297
#define IOCB4                         298
#define IOCB5                         299
#define IOC5                          300
#define IOCB6                         301
#define IOC6                          302
#define IOCB7                         303
#define IOC7                          304
#define TXSTA                         305
#define TXD8                          306
#define TX9D                          307
#define TRMT                          308
#define BRGH                          309
#define SYNC                          310
#define TXEN                          311
#define TX8_9                         312
#define TX9                           313
#define nTX8                          314
#define CSRC                          315
#define APFCON                        316
#define CCP2SEL                       317
#define SSSEL                         318
#define FVRCON                        319
#define ADFVR0                        320
#define ADFVR1                        321
#define FVREN                         322
#define FVRRDY                        323
#define FVRST                         324
#define ADCON1                        325
#define ADREF                         326
#define ADREF0                        327
#define ADREF1                        328
#define ADCS0                         329
#define ADCS                          330
#define ADCS1                         331
#define ADCS2                         332
#define CPSCON0                       333
#define T0XCS                         334
#define CPSOUT                        335
#define CPSRNG                        336
#define CPSRNG0                       337
#define CPSRNG1                       338
#define CPSON                         339
#define CPSCON1                       340
#define CPSCH                         341
#define CPSCH0                        342
#define CPSCH1                        343
#define CPSCH2                        344
#define CPSCH3                        345
#define ANSELA                        346
#define ANSA0                         347
#define ANSA                          348
#define ANSA1                         349
#define ANSA2                         350
#define ANSA3                         351
#define ANSA4                         352
#define ANSA5                         353
#define ANSELB                        354
#define ANSB0                         355
#define ANSB                          356
#define ANSB1                         357
#define ANSB2                         358
#define ANSB3                         359
#define ANSB4                         360
#define ANSB5                         361
#define ANSELD                        362
#define ANSD                          363
#define ANSD0                         364
#define ANSD1                         365
#define ANSD2                         366
#define ANSD3                         367
#define ANSD4                         368
#define ANSD5                         369
#define ANSD6                         370
#define ANSD7                         371
#define ANSELE                        372
#define ANSE                          373
#define ANSE0                         374
#define ANSE1                         375
#define ANSE2                         376
#define PMCON1                        377
#define RD                            378
#define PMRD                          379

#endif // _PIC16F724_H_
