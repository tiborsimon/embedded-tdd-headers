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

#ifndef _PIC16LF877A_H_
#define _PIC16LF877A_H_

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
#define RB0                           20
#define RB1                           21
#define RB2                           22
#define RB3                           23
#define RB4                           24
#define RB5                           25
#define RB6                           26
#define RB7                           27
#define PORTC                         28
#define RC0                           29
#define RC1                           30
#define RC2                           31
#define RC3                           32
#define RC4                           33
#define RC5                           34
#define RC6                           35
#define RC7                           36
#define PORTD                         37
#define RD0                           38
#define RD1                           39
#define RD2                           40
#define RD3                           41
#define RD4                           42
#define RD5                           43
#define RD6                           44
#define RD7                           45
#define PORTE                         46
#define RE0                           47
#define RE1                           48
#define RE2                           49
#define PCLATH                        50
#define INTCON                        51
#define RBIF                          52
#define INTF                          53
#define T0IF                          54
#define TMR0IF                        55
#define RBIE                          56
#define INTE                          57
#define T0IE                          58
#define TMR0IE                        59
#define PEIE                          60
#define GIE                           61
#define PIR1                          62
#define TMR1IF                        63
#define TMR2IF                        64
#define CCP1IF                        65
#define SSPIF                         66
#define TXIF                          67
#define RCIF                          68
#define ADIF                          69
#define PSPIF                         70
#define PIR2                          71
#define CCP2IF                        72
#define BCLIF                         73
#define EEIF                          74
#define CMIF                          75
#define T1CON                         76
#define TMR1ON                        77
#define TMR1CS                        78
#define T1SYNC                        79
#define nT1SYNC                       80
#define T1INSYNC                      81
#define T1OSCEN                       82
#define T1CKPS0                       83
#define T1CKPS                        84
#define T1CKPS1                       85
#define T2CON                         86
#define T2CKPS0                       87
#define T2CKPS                        88
#define T2CKPS1                       89
#define TMR2ON                        90
#define TOUTPS0                       91
#define TOUTPS                        92
#define TOUTPS1                       93
#define TOUTPS2                       94
#define TOUTPS3                       95
#define SSPCON                        96
#define SSPM0                         97
#define SSPM                          98
#define SSPM1                         99
#define SSPM2                         100
#define SSPM3                         101
#define CKP                           102
#define SSPEN                         103
#define SSPOV                         104
#define WCOL                          105
#define CCP1CON                       106
#define CCP1M0                        107
#define CCP1M                         108
#define CCP1M1                        109
#define CCP1M2                        110
#define CCP1M3                        111
#define CCP1Y                         112
#define CCP1X                         113
#define RCSTA                         114
#define RCD8                          115
#define RX9D                          116
#define OERR                          117
#define FERR                          118
#define ADDEN                         119
#define CREN                          120
#define SREN                          121
#define RC8_9                         122
#define RC9                           123
#define RX9                           124
#define nRC8                          125
#define SPEN                          126
#define CCP2CON                       127
#define CCP2M                         128
#define CCP2M0                        129
#define CCP2M1                        130
#define CCP2M2                        131
#define CCP2M3                        132
#define CCP2Y                         133
#define CCP2X                         134
#define ADCON0                        135
#define ADON                          136
#define nDONE                         137
#define GO_nDONE                      138
#define GO_DONE                       139
#define GO                            140
#define CHS                           141
#define CHS0                          142
#define CHS1                          143
#define CHS2                          144
#define ADCS                          145
#define ADCS0                         146
#define ADCS1                         147
#define OPTION_REG                    148
#define PS                            149
#define PS0                           150
#define PS1                           151
#define PS2                           152
#define PSA                           153
#define T0SE                          154
#define T0CS                          155
#define INTEDG                        156
#define nRBPU                         157
#define TRISA                         158
#define TRISA0                        159
#define TRISA1                        160
#define TRISA2                        161
#define TRISA3                        162
#define TRISA4                        163
#define TRISA5                        164
#define TRISB                         165
#define TRISB0                        166
#define TRISB1                        167
#define TRISB2                        168
#define TRISB3                        169
#define TRISB4                        170
#define TRISB5                        171
#define TRISB6                        172
#define TRISB7                        173
#define TRISC                         174
#define TRISC0                        175
#define TRISC1                        176
#define TRISC2                        177
#define TRISC3                        178
#define TRISC4                        179
#define TRISC5                        180
#define TRISC6                        181
#define TRISC7                        182
#define TRISD                         183
#define TRISD0                        184
#define TRISD1                        185
#define TRISD2                        186
#define TRISD3                        187
#define TRISD4                        188
#define TRISD5                        189
#define TRISD6                        190
#define TRISD7                        191
#define TRISE                         192
#define TRISE0                        193
#define TRISE1                        194
#define TRISE2                        195
#define PSPMODE                       196
#define IBOV                          197
#define OBF                           198
#define IBF                           199
#define PIE1                          200
#define TMR1IE                        201
#define TMR2IE                        202
#define CCP1IE                        203
#define SSPIE                         204
#define TXIE                          205
#define RCIE                          206
#define ADIE                          207
#define PSPIE                         208
#define PIE2                          209
#define CCP2IE                        210
#define BCLIE                         211
#define EEIE                          212
#define CMIE                          213
#define PCON                          214
#define nBOR                          215
#define nBO                           216
#define nPOR                          217
#define SSPCON2                       218
#define SEN                           219
#define RSEN                          220
#define PEN                           221
#define RCEN                          222
#define ACKEN                         223
#define ACKDT                         224
#define ACKSTAT                       225
#define GCEN                          226
#define SSPSTAT                       227
#define BF                            228
#define UA                            229
#define R_nW                          230
#define READ_WRITE                    231
#define I2C_READ                      232
#define nW                            233
#define R                             234
#define nWRITE                        235
#define R_W                           236
#define S                             237
#define I2C_START                     238
#define I2C_STOP                      239
#define P                             240
#define nA                            241
#define D_A                           242
#define D_nA                          243
#define D                             244
#define DATA_ADDRESS                  245
#define nADDRESS                      246
#define I2C_DATA                      247
#define CKE                           248
#define SMP                           249
#define TXSTA                         250
#define TXD8                          251
#define TX9D                          252
#define TRMT                          253
#define BRGH                          254
#define SYNC                          255
#define TXEN                          256
#define TX8_9                         257
#define TX9                           258
#define nTX8                          259
#define CSRC                          260
#define CMCON                         261
#define CM                            262
#define CM0                           263
#define CM1                           264
#define CM2                           265
#define CIS                           266
#define C1INV                         267
#define C2INV                         268
#define C1OUT                         269
#define C2OUT                         270
#define CVRCON                        271
#define CVR                           272
#define CVR0                          273
#define CVR1                          274
#define CVR2                          275
#define CVR3                          276
#define CVRR                          277
#define CVROE                         278
#define CVREN                         279
#define ADCON1                        280
#define PCFG0                         281
#define PCFG                          282
#define PCFG1                         283
#define PCFG2                         284
#define PCFG3                         285
#define ADCS2                         286
#define ADFM                          287
#define EECON1                        288
#define RD                            289
#define WR                            290
#define WREN                          291
#define WRERR                         292
#define EEPGD                         293

#endif // _PIC16LF877A_H_
