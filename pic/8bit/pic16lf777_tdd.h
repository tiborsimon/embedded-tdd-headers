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

#ifndef _PIC16LF777_H_
#define _PIC16LF777_H_

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
#define PCLATH                        53
#define INTCON                        54
#define RBIF                          55
#define INTF                          56
#define INT0IF                        57
#define T0IF                          58
#define TMR0IF                        59
#define RBIE                          60
#define INTE                          61
#define INT0IE                        62
#define T0IE                          63
#define TMR0IE                        64
#define PEIE                          65
#define GIE                           66
#define PIR1                          67
#define TMR1IF                        68
#define TMR2IF                        69
#define CCP1IF                        70
#define SSPIF                         71
#define TXIF                          72
#define RCIF                          73
#define ADIF                          74
#define PSPIF                         75
#define PIR2                          76
#define CCP2IF                        77
#define CCP3IF                        78
#define BCLIF                         79
#define LVDIF                         80
#define CMIF                          81
#define OSFIF                         82
#define T1CON                         83
#define TMR1ON                        84
#define TMR1CS                        85
#define T1SYNC                        86
#define nT1SYNC                       87
#define T1INSYNC                      88
#define T1OSCEN                       89
#define T1CKPS0                       90
#define T1CKPS                        91
#define T1CKPS1                       92
#define T1RUN                         93
#define T2CON                         94
#define T2CKPS0                       95
#define T2CKPS                        96
#define T2CKPS1                       97
#define TMR2ON                        98
#define TOUTPS0                       99
#define TOUTPS                        100
#define TOUTPS1                       101
#define TOUTPS2                       102
#define TOUTPS3                       103
#define SSPCON                        104
#define SSPM0                         105
#define SSPM                          106
#define SSPM1                         107
#define SSPM2                         108
#define SSPM3                         109
#define CKP                           110
#define SSPEN                         111
#define SSPOV                         112
#define WCOL                          113
#define CCP1CON                       114
#define CCP1M0                        115
#define CCP1M                         116
#define CCP1M1                        117
#define CCP1M2                        118
#define CCP1M3                        119
#define CCP1Y                         120
#define CCP1X                         121
#define RCSTA                         122
#define RCD8                          123
#define RX9D                          124
#define OERR                          125
#define FERR                          126
#define ADDEN                         127
#define CREN                          128
#define SREN                          129
#define RC8_9                         130
#define RC9                           131
#define RX9                           132
#define nRC8                          133
#define SPEN                          134
#define CCP2CON                       135
#define CCP2M                         136
#define CCP2M0                        137
#define CCP2M1                        138
#define CCP2M2                        139
#define CCP2M3                        140
#define CCP2Y                         141
#define CCP2X                         142
#define ADCON0                        143
#define ADON                          144
#define CHS3                          145
#define nDONE                         146
#define GO_nDONE                      147
#define GO_DONE                       148
#define GO                            149
#define CHS                           150
#define CHS0                          151
#define CHS1                          152
#define CHS2                          153
#define ADCS                          154
#define ADCS0                         155
#define ADCS1                         156
#define OPTION_REG                    157
#define PS                            158
#define PS0                           159
#define PS1                           160
#define PS2                           161
#define PSA                           162
#define T0SE                          163
#define T0CS                          164
#define INTEDG                        165
#define nRBPU                         166
#define TRISA                         167
#define TRISA0                        168
#define TRISA1                        169
#define TRISA2                        170
#define TRISA3                        171
#define TRISA4                        172
#define TRISA5                        173
#define TRISA6                        174
#define TRISA7                        175
#define TRISB                         176
#define TRISB0                        177
#define TRISB1                        178
#define TRISB2                        179
#define TRISB3                        180
#define TRISB4                        181
#define TRISB5                        182
#define TRISB6                        183
#define TRISB7                        184
#define TRISC                         185
#define TRISC0                        186
#define TRISC1                        187
#define TRISC2                        188
#define TRISC3                        189
#define TRISC4                        190
#define TRISC5                        191
#define TRISC6                        192
#define TRISC7                        193
#define TRISD                         194
#define TRISD0                        195
#define TRISD1                        196
#define TRISD2                        197
#define TRISD3                        198
#define TRISD4                        199
#define TRISD5                        200
#define TRISD6                        201
#define TRISD7                        202
#define TRISE                         203
#define TRISE0                        204
#define TRISE1                        205
#define TRISE2                        206
#define TRISE3                        207
#define PSPMODE                       208
#define IBOV                          209
#define OBF                           210
#define IBF                           211
#define PIE1                          212
#define TMR1IE                        213
#define TMR2IE                        214
#define CCP1IE                        215
#define SSPIE                         216
#define TXIE                          217
#define RCIE                          218
#define ADIE                          219
#define PSPIE                         220
#define PIE2                          221
#define CCP2IE                        222
#define CCP3IE                        223
#define BCLIE                         224
#define LVDIE                         225
#define CMIE                          226
#define OSFIE                         227
#define PCON                          228
#define nBOR                          229
#define nBO                           230
#define nPOR                          231
#define SBOREN                        232
#define OSCCON                        233
#define SCS0                          234
#define SCS                           235
#define SCS1                          236
#define IOFS                          237
#define OSTS                          238
#define IRCF                          239
#define IRCF0                         240
#define IRCF1                         241
#define IRCF2                         242
#define OSCTUNE                       243
#define TUN0                          244
#define TUN                           245
#define TUN1                          246
#define TUN2                          247
#define TUN3                          248
#define TUN4                          249
#define TUN5                          250
#define SSPCON2                       251
#define SEN                           252
#define RSEN                          253
#define PEN                           254
#define RCEN                          255
#define ACKEN                         256
#define ACKDT                         257
#define ACKSTAT                       258
#define GCEN                          259
#define SSPSTAT                       260
#define BF                            261
#define UA                            262
#define R_nW                          263
#define READ_WRITE                    264
#define I2C_READ                      265
#define nW                            266
#define R                             267
#define nWRITE                        268
#define R_W                           269
#define S                             270
#define I2C_START                     271
#define I2C_STOP                      272
#define P                             273
#define nA                            274
#define D_A                           275
#define D_nA                          276
#define D                             277
#define DATA_ADDRESS                  278
#define nADDRESS                      279
#define I2C_DATA                      280
#define CKE                           281
#define SMP                           282
#define CCPR3L                        283
#define CCPR3H                        284
#define CCP3CON                       285
#define CCP3M                         286
#define CCP3M0                        287
#define CCP3M1                        288
#define CCP3M2                        289
#define CCP3M3                        290
#define CCP3Y                         291
#define CCP3X                         292
#define TXSTA                         293
#define TXD8                          294
#define TX9D                          295
#define TRMT                          296
#define BRGH                          297
#define SYNC                          298
#define TXEN                          299
#define TX8_9                         300
#define TX9                           301
#define nTX8                          302
#define CSRC                          303
#define ADCON2                        304
#define ACQT0                         305
#define ACQT                          306
#define ACQT1                         307
#define ACQT2                         308
#define CMCON                         309
#define CM                            310
#define CM0                           311
#define CM1                           312
#define CM2                           313
#define CIS                           314
#define C1INV                         315
#define C2INV                         316
#define C1OUT                         317
#define C2OUT                         318
#define CVRCON                        319
#define CVR                           320
#define CVR0                          321
#define CVR1                          322
#define CVR2                          323
#define CVR3                          324
#define CVRR                          325
#define CVROE                         326
#define CVREN                         327
#define ADCON1                        328
#define PCFG0                         329
#define PCFG                          330
#define PCFG1                         331
#define PCFG2                         332
#define PCFG3                         333
#define VCFG                          334
#define VCFG0                         335
#define VCFG1                         336
#define ADCS2                         337
#define ADFM                          338
#define WDTCON                        339
#define SWDTEN                        340
#define SWDTE                         341
#define WDTPS                         342
#define WDTPS0                        343
#define WDTPS1                        344
#define WDTPS2                        345
#define WDTPS3                        346
#define LVDCON                        347
#define LVDL0                         348
#define LVDL                          349
#define LVDL1                         350
#define LVDL2                         351
#define LVDL3                         352
#define LVDEN                         353
#define IRVST                         354
#define PMCON1                        355
#define RD                            356

#endif // _PIC16LF777_H_
