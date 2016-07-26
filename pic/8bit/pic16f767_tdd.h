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

#ifndef _PIC16F767_H_
#define _PIC16F767_H_

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
#define PORTE                         39
#define RE3                           40
#define PCLATH                        41
#define INTCON                        42
#define RBIF                          43
#define INTF                          44
#define INT0IF                        45
#define T0IF                          46
#define TMR0IF                        47
#define RBIE                          48
#define INTE                          49
#define INT0IE                        50
#define T0IE                          51
#define TMR0IE                        52
#define PEIE                          53
#define GIE                           54
#define PIR1                          55
#define TMR1IF                        56
#define TMR2IF                        57
#define CCP1IF                        58
#define SSPIF                         59
#define TXIF                          60
#define RCIF                          61
#define ADIF                          62
#define PSPIF                         63
#define PIR2                          64
#define CCP2IF                        65
#define CCP3IF                        66
#define BCLIF                         67
#define LVDIF                         68
#define CMIF                          69
#define OSFIF                         70
#define T1CON                         71
#define TMR1ON                        72
#define TMR1CS                        73
#define T1SYNC                        74
#define nT1SYNC                       75
#define T1INSYNC                      76
#define T1OSCEN                       77
#define T1CKPS0                       78
#define T1CKPS                        79
#define T1CKPS1                       80
#define T1RUN                         81
#define T2CON                         82
#define T2CKPS0                       83
#define T2CKPS                        84
#define T2CKPS1                       85
#define TMR2ON                        86
#define TOUTPS0                       87
#define TOUTPS                        88
#define TOUTPS1                       89
#define TOUTPS2                       90
#define TOUTPS3                       91
#define SSPCON                        92
#define SSPM0                         93
#define SSPM                          94
#define SSPM1                         95
#define SSPM2                         96
#define SSPM3                         97
#define CKP                           98
#define SSPEN                         99
#define SSPOV                         100
#define WCOL                          101
#define CCP1CON                       102
#define CCP1M0                        103
#define CCP1M                         104
#define CCP1M1                        105
#define CCP1M2                        106
#define CCP1M3                        107
#define CCP1Y                         108
#define CCP1X                         109
#define RCSTA                         110
#define RCD8                          111
#define RX9D                          112
#define OERR                          113
#define FERR                          114
#define ADDEN                         115
#define CREN                          116
#define SREN                          117
#define RC8_9                         118
#define RC9                           119
#define RX9                           120
#define nRC8                          121
#define SPEN                          122
#define CCP2CON                       123
#define CCP2M                         124
#define CCP2M0                        125
#define CCP2M1                        126
#define CCP2M2                        127
#define CCP2M3                        128
#define CCP2Y                         129
#define CCP2X                         130
#define ADCON0                        131
#define ADON                          132
#define CHS3                          133
#define nDONE                         134
#define GO_nDONE                      135
#define GO_DONE                       136
#define GO                            137
#define CHS                           138
#define CHS0                          139
#define CHS1                          140
#define CHS2                          141
#define ADCS                          142
#define ADCS0                         143
#define ADCS1                         144
#define OPTION_REG                    145
#define PS                            146
#define PS0                           147
#define PS1                           148
#define PS2                           149
#define PSA                           150
#define T0SE                          151
#define T0CS                          152
#define INTEDG                        153
#define nRBPU                         154
#define TRISA                         155
#define TRISA0                        156
#define TRISA1                        157
#define TRISA2                        158
#define TRISA3                        159
#define TRISA4                        160
#define TRISA5                        161
#define TRISA6                        162
#define TRISA7                        163
#define TRISB                         164
#define TRISB0                        165
#define TRISB1                        166
#define TRISB2                        167
#define TRISB3                        168
#define TRISB4                        169
#define TRISB5                        170
#define TRISB6                        171
#define TRISB7                        172
#define TRISC                         173
#define TRISC0                        174
#define TRISC1                        175
#define TRISC2                        176
#define TRISC3                        177
#define TRISC4                        178
#define TRISC5                        179
#define TRISC6                        180
#define TRISC7                        181
#define PIE1                          182
#define TMR1IE                        183
#define TMR2IE                        184
#define CCP1IE                        185
#define SSPIE                         186
#define TXIE                          187
#define RCIE                          188
#define ADIE                          189
#define PSPIE                         190
#define PIE2                          191
#define CCP2IE                        192
#define CCP3IE                        193
#define BCLIE                         194
#define LVDIE                         195
#define CMIE                          196
#define OSFIE                         197
#define PCON                          198
#define nBOR                          199
#define nBO                           200
#define nPOR                          201
#define SBOREN                        202
#define OSCCON                        203
#define SCS0                          204
#define SCS                           205
#define SCS1                          206
#define IOFS                          207
#define OSTS                          208
#define IRCF                          209
#define IRCF0                         210
#define IRCF1                         211
#define IRCF2                         212
#define OSCTUNE                       213
#define TUN0                          214
#define TUN                           215
#define TUN1                          216
#define TUN2                          217
#define TUN3                          218
#define TUN4                          219
#define TUN5                          220
#define SSPCON2                       221
#define SEN                           222
#define RSEN                          223
#define PEN                           224
#define RCEN                          225
#define ACKEN                         226
#define ACKDT                         227
#define ACKSTAT                       228
#define GCEN                          229
#define SSPSTAT                       230
#define BF                            231
#define UA                            232
#define R_nW                          233
#define READ_WRITE                    234
#define I2C_READ                      235
#define nW                            236
#define R                             237
#define nWRITE                        238
#define R_W                           239
#define S                             240
#define I2C_START                     241
#define I2C_STOP                      242
#define P                             243
#define nA                            244
#define D_A                           245
#define D_nA                          246
#define D                             247
#define DATA_ADDRESS                  248
#define nADDRESS                      249
#define I2C_DATA                      250
#define CKE                           251
#define SMP                           252
#define CCPR3L                        253
#define CCPR3H                        254
#define CCP3CON                       255
#define CCP3M                         256
#define CCP3M0                        257
#define CCP3M1                        258
#define CCP3M2                        259
#define CCP3M3                        260
#define CCP3Y                         261
#define CCP3X                         262
#define TXSTA                         263
#define TXD8                          264
#define TX9D                          265
#define TRMT                          266
#define BRGH                          267
#define SYNC                          268
#define TXEN                          269
#define TX8_9                         270
#define TX9                           271
#define nTX8                          272
#define CSRC                          273
#define ADCON2                        274
#define ACQT0                         275
#define ACQT                          276
#define ACQT1                         277
#define ACQT2                         278
#define CMCON                         279
#define CM                            280
#define CM0                           281
#define CM1                           282
#define CM2                           283
#define CIS                           284
#define C1INV                         285
#define C2INV                         286
#define C1OUT                         287
#define C2OUT                         288
#define CVRCON                        289
#define CVR                           290
#define CVR0                          291
#define CVR1                          292
#define CVR2                          293
#define CVR3                          294
#define CVRR                          295
#define CVROE                         296
#define CVREN                         297
#define ADCON1                        298
#define PCFG0                         299
#define PCFG                          300
#define PCFG1                         301
#define PCFG2                         302
#define PCFG3                         303
#define VCFG                          304
#define VCFG0                         305
#define VCFG1                         306
#define ADCS2                         307
#define ADFM                          308
#define WDTCON                        309
#define SWDTEN                        310
#define SWDTE                         311
#define WDTPS                         312
#define WDTPS0                        313
#define WDTPS1                        314
#define WDTPS2                        315
#define WDTPS3                        316
#define LVDCON                        317
#define LVDL0                         318
#define LVDL                          319
#define LVDL1                         320
#define LVDL2                         321
#define LVDL3                         322
#define LVDEN                         323
#define IRVST                         324
#define PMCON1                        325
#define RD                            326

#endif // _PIC16F767_H_
