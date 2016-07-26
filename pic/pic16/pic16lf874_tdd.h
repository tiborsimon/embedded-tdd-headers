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

#ifndef _PIC16LF874_H_
#define _PIC16LF874_H_

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
#define T1CON                         75
#define TMR1ON                        76
#define TMR1CS                        77
#define T1SYNC                        78
#define nT1SYNC                       79
#define T1INSYNC                      80
#define T1OSCEN                       81
#define T1CKPS0                       82
#define T1CKPS                        83
#define T1CKPS1                       84
#define T2CON                         85
#define T2CKPS0                       86
#define T2CKPS                        87
#define T2CKPS1                       88
#define TMR2ON                        89
#define TOUTPS0                       90
#define TOUTPS                        91
#define TOUTPS1                       92
#define TOUTPS2                       93
#define TOUTPS3                       94
#define SSPCON                        95
#define SSPM0                         96
#define SSPM                          97
#define SSPM1                         98
#define SSPM2                         99
#define SSPM3                         100
#define CKP                           101
#define SSPEN                         102
#define SSPOV                         103
#define WCOL                          104
#define CCP1CON                       105
#define CCP1M0                        106
#define CCP1M                         107
#define CCP1M1                        108
#define CCP1M2                        109
#define CCP1M3                        110
#define CCP1Y                         111
#define CCP1X                         112
#define RCSTA                         113
#define RCD8                          114
#define RX9D                          115
#define OERR                          116
#define FERR                          117
#define ADDEN                         118
#define CREN                          119
#define SREN                          120
#define RC8_9                         121
#define RC9                           122
#define RX9                           123
#define nRC8                          124
#define SPEN                          125
#define CCP2CON                       126
#define CCP2M                         127
#define CCP2M0                        128
#define CCP2M1                        129
#define CCP2M2                        130
#define CCP2M3                        131
#define CCP2Y                         132
#define CCP2X                         133
#define ADCON0                        134
#define ADON                          135
#define nDONE                         136
#define GO_nDONE                      137
#define GO_DONE                       138
#define GO                            139
#define CHS                           140
#define CHS0                          141
#define CHS1                          142
#define CHS2                          143
#define ADCS                          144
#define ADCS0                         145
#define ADCS1                         146
#define OPTION_REG                    147
#define PS                            148
#define PS0                           149
#define PS1                           150
#define PS2                           151
#define PSA                           152
#define T0SE                          153
#define T0CS                          154
#define INTEDG                        155
#define nRBPU                         156
#define TRISA                         157
#define TRISA0                        158
#define TRISA1                        159
#define TRISA2                        160
#define TRISA3                        161
#define TRISA4                        162
#define TRISA5                        163
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
#define TRISD                         182
#define TRISD0                        183
#define TRISD1                        184
#define TRISD2                        185
#define TRISD3                        186
#define TRISD4                        187
#define TRISD5                        188
#define TRISD6                        189
#define TRISD7                        190
#define TRISE                         191
#define TRISE0                        192
#define TRISE1                        193
#define TRISE2                        194
#define PSPMODE                       195
#define IBOV                          196
#define OBF                           197
#define IBF                           198
#define PIE1                          199
#define TMR1IE                        200
#define TMR2IE                        201
#define CCP1IE                        202
#define SSPIE                         203
#define TXIE                          204
#define RCIE                          205
#define ADIE                          206
#define PSPIE                         207
#define PIE2                          208
#define CCP2IE                        209
#define BCLIE                         210
#define EEIE                          211
#define PCON                          212
#define nBOR                          213
#define nBO                           214
#define nPOR                          215
#define SSPCON2                       216
#define SEN                           217
#define RSEN                          218
#define PEN                           219
#define RCEN                          220
#define ACKEN                         221
#define ACKDT                         222
#define ACKSTAT                       223
#define GCEN                          224
#define SSPSTAT                       225
#define BF                            226
#define UA                            227
#define R_nW                          228
#define READ_WRITE                    229
#define I2C_READ                      230
#define nW                            231
#define R                             232
#define nWRITE                        233
#define R_W                           234
#define S                             235
#define I2C_START                     236
#define I2C_STOP                      237
#define P                             238
#define nA                            239
#define D_A                           240
#define D_nA                          241
#define D                             242
#define DATA_ADDRESS                  243
#define nADDRESS                      244
#define I2C_DATA                      245
#define CKE                           246
#define SMP                           247
#define TXSTA                         248
#define TXD8                          249
#define TX9D                          250
#define TRMT                          251
#define BRGH                          252
#define SYNC                          253
#define TXEN                          254
#define TX8_9                         255
#define TX9                           256
#define nTX8                          257
#define CSRC                          258
#define ADCON1                        259
#define PCFG0                         260
#define PCFG                          261
#define PCFG1                         262
#define PCFG2                         263
#define PCFG3                         264
#define ADFM                          265
#define EECON1                        266
#define RD                            267
#define WR                            268
#define WREN                          269
#define WRERR                         270
#define EEPGD                         271

#endif // _PIC16LF874_H_
