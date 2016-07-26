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

#ifndef _PIC16LF721_H_
#define _PIC16LF721_H_

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
#define PORTB                         19
#define RB4                           20
#define RB5                           21
#define RB6                           22
#define RB7                           23
#define PORTC                         24
#define RC0                           25
#define RC1                           26
#define RC2                           27
#define RC3                           28
#define RC4                           29
#define RC5                           30
#define RC6                           31
#define RC7                           32
#define PCLATH                        33
#define INTCON                        34
#define RABIF                         35
#define INTF                          36
#define TMR0IF                        37
#define RABIE                         38
#define INTE                          39
#define TMR0IE                        40
#define PEIE                          41
#define GIE                           42
#define PIR1                          43
#define TMR1IF                        44
#define TMR2IF                        45
#define CCP1IF                        46
#define SSPIF                         47
#define TXIF                          48
#define RCIF                          49
#define ADIF                          50
#define TMR1GIF                       51
#define T1CON                         52
#define TMR1ON                        53
#define T1SYNC                        54
#define nT1SYNC                       55
#define T1CKPS0                       56
#define T1CKPS                        57
#define T1CKPS1                       58
#define TMR1CS0                       59
#define TMR1CS                        60
#define TMR1CS1                       61
#define T2CON                         62
#define T2CKPS0                       63
#define T2CKPS                        64
#define T2CKPS1                       65
#define TMR2ON                        66
#define TOUTPS0                       67
#define TOUTPS                        68
#define TOUTPS1                       69
#define TOUTPS2                       70
#define TOUTPS3                       71
#define SSPCON                        72
#define SSPM0                         73
#define SSPM                          74
#define SSPM1                         75
#define SSPM2                         76
#define SSPM3                         77
#define CKP                           78
#define SSPEN                         79
#define SSPOV                         80
#define WCOL                          81
#define CCP1CON                       82
#define CCP1M0                        83
#define CCP1M                         84
#define CCP1M1                        85
#define CCP1M2                        86
#define CCP1M3                        87
#define CCP1Y                         88
#define B1                            89
#define CCP1X                         90
#define DC1                           91
#define RCSTA                         92
#define RX9D                          93
#define OERR                          94
#define FERR                          95
#define ADDEN                         96
#define CREN                          97
#define SREN                          98
#define RX9                           99
#define SPEN                          100
#define ADRES                         101
#define ADCON0                        102
#define ADON                          103
#define GO_nDONE                      104
#define CHS0                          105
#define CHS                           106
#define CHS1                          107
#define CHS2                          108
#define CHS3                          109
#define OPTION_REG                    110
#define PS                            111
#define PS0                           112
#define PS1                           113
#define PS2                           114
#define PSA                           115
#define T0SE                          116
#define T0CS                          117
#define INTEDG                        118
#define nRABPU                        119
#define TRISA                         120
#define TRISA0                        121
#define TRISA1                        122
#define TRISA2                        123
#define TRISA4                        124
#define TRISA5                        125
#define TRISB                         126
#define TRISB4                        127
#define TRISB5                        128
#define TRISB6                        129
#define TRISB7                        130
#define TRISC                         131
#define TRISC0                        132
#define TRISC1                        133
#define TRISC2                        134
#define TRISC3                        135
#define TRISC4                        136
#define TRISC5                        137
#define TRISC6                        138
#define TRISC7                        139
#define PIE1                          140
#define TMR1IE                        141
#define TMR2IE                        142
#define CCP1IE                        143
#define SSPIE                         144
#define TXIE                          145
#define RCIE                          146
#define ADIE                          147
#define TMR1GIE                       148
#define PCON                          149
#define nBOR                          150
#define nPOR                          151
#define T1GCON                        152
#define T1GSS0                        153
#define T1GSS                         154
#define T1GSS1                        155
#define T1GVAL                        156
#define T1GGO_nDONE                   157
#define T1GGO_DONE                    158
#define T1GSPM                        159
#define T1GTM                         160
#define T1GPOL                        161
#define TMR1GE                        162
#define OSCCON                        163
#define ICSS                          164
#define ICSL                          165
#define IRCF                          166
#define IRCF0                         167
#define IRCF1                         168
#define OSCTUNE                       169
#define TUN0                          170
#define TUN                           171
#define TUN1                          172
#define TUN2                          173
#define TUN3                          174
#define TUN4                          175
#define TUN5                          176
#define SSPADD                        177
#define ADD0                          178
#define ADD1                          179
#define ADD2                          180
#define ADD3                          181
#define ADD4                          182
#define ADD5                          183
#define ADD6                          184
#define ADD7                          185
#define SSPMSK                        186
#define MSK0                          187
#define MSK                           188
#define MSK1                          189
#define MSK2                          190
#define MSK3                          191
#define MSK4                          192
#define MSK5                          193
#define MSK6                          194
#define MSK7                          195
#define SSPSTAT                       196
#define BF                            197
#define UA                            198
#define R_nW                          199
#define S                             200
#define P                             201
#define D_nA                          202
#define CKE                           203
#define SMP                           204
#define WPUA                          205
#define WPUA0                         206
#define WPUA1                         207
#define WPUA2                         208
#define WPUA3                         209
#define WPUA4                         210
#define WPUA5                         211
#define IOCA                          212
#define IOCA0                         213
#define IOCA1                         214
#define IOCA2                         215
#define IOCA3                         216
#define IOCA4                         217
#define IOCA5                         218
#define TXSTA                         219
#define TX9D                          220
#define TRMT                          221
#define BRGH                          222
#define SYNC                          223
#define TXEN                          224
#define TX9                           225
#define CSRC                          226
#define FVRCON                        227
#define ADFVR0                        228
#define ADFVR1                        229
#define TSRNG                         230
#define TSEN                          231
#define FVREN                         232
#define FVRRDY                        233
#define ADCON1                        234
#define ADCS0                         235
#define ADCS1                         236
#define ADCS2                         237
#define PMDATL                        238
#define PMADRL                        239
#define PMADRH                        240
#define WPUB                          241
#define WPUB4                         242
#define WPUB5                         243
#define WPUB6                         244
#define WPUB7                         245
#define IOCB                          246
#define IOCB4                         247
#define IOCB5                         248
#define IOCB6                         249
#define IOCB7                         250
#define ANSELA                        251
#define ANSA0                         252
#define ANSA1                         253
#define ANSA2                         254
#define ANSA4                         255
#define ANSA5                         256
#define ANSELB                        257
#define ANSB4                         258
#define ANSB5                         259
#define ANSELC                        260
#define ANSC0                         261
#define ANSC1                         262
#define ANSC2                         263
#define ANSC3                         264
#define ANSC6                         265
#define ANSC7                         266
#define PMCON1                        267
#define RD                            268
#define WR                            269
#define WREN                          270
#define FREE                          271
#define LWLO                          272
#define CFGS                          273

#endif // _PIC16LF721_H_
