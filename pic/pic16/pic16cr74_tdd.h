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

#ifndef _PIC16CR74_H_
#define _PIC16CR74_H_

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
#define INTCON                        50
#define RBIF                          51
#define INTF                          52
#define T0IF                          53
#define TMR0IF                        54
#define RBIE                          55
#define INTE                          56
#define T0IE                          57
#define TMR0IE                        58
#define PEIE                          59
#define GIE                           60
#define PIR1                          61
#define TMR1IF                        62
#define TMR2IF                        63
#define CCP1IF                        64
#define SSPIF                         65
#define TXIF                          66
#define RCIF                          67
#define ADIF                          68
#define PSPIF                         69
#define PIR2                          70
#define CCP2IF                        71
#define T1CON                         72
#define TMR1ON                        73
#define TMR1CS                        74
#define nT1SYNC                       75
#define T1INSYNC                      76
#define T1OSCEN                       77
#define T1CKPS0                       78
#define T1CKPS                        79
#define T1CKPS1                       80
#define T2CON                         81
#define T2CKPS0                       82
#define T2CKPS                        83
#define T2CKPS1                       84
#define TMR2ON                        85
#define TOUTPS0                       86
#define TOUTPS                        87
#define TOUTPS1                       88
#define TOUTPS2                       89
#define TOUTPS3                       90
#define SSPCON                        91
#define SSPM0                         92
#define SSPM                          93
#define SSPM1                         94
#define SSPM2                         95
#define SSPM3                         96
#define CKP                           97
#define SSPEN                         98
#define SSPOV                         99
#define WCOL                          100
#define CCP1CON                       101
#define CCP1M0                        102
#define CCP1M                         103
#define CCP1M1                        104
#define CCP1M2                        105
#define CCP1M3                        106
#define CCP1Y                         107
#define DC1B                          108
#define CCP1X                         109
#define RCSTA                         110
#define RCD8                          111
#define RX9D                          112
#define OERR                          113
#define FERR                          114
#define CREN                          115
#define SREN                          116
#define RC8_9                         117
#define RC9                           118
#define RX9                           119
#define nRC8                          120
#define SPEN                          121
#define CCP2CON                       122
#define CCP2M                         123
#define CCP2M0                        124
#define CCP2M1                        125
#define CCP2M2                        126
#define CCP2M3                        127
#define CCP2Y                         128
#define DC2B                          129
#define CCP2X                         130
#define ADCON0                        131
#define ADON                          132
#define nDONE                         133
#define GO_nDONE                      134
#define GO_DONE                       135
#define GO                            136
#define CHS                           137
#define CHS0                          138
#define CHS1                          139
#define CHS2                          140
#define ADCS                          141
#define ADCS0                         142
#define ADCS1                         143
#define OPTION_REG                    144
#define PS                            145
#define PS0                           146
#define PS1                           147
#define PS2                           148
#define PSA                           149
#define T0SE                          150
#define T0CS                          151
#define INTEDG                        152
#define nRBPU                         153
#define TRISA                         154
#define TRISA0                        155
#define TRISA1                        156
#define TRISA2                        157
#define TRISA3                        158
#define TRISA4                        159
#define TRISA5                        160
#define TRISB                         161
#define TRISB0                        162
#define TRISB1                        163
#define TRISB2                        164
#define TRISB3                        165
#define TRISB4                        166
#define TRISB5                        167
#define TRISB6                        168
#define TRISB7                        169
#define TRISC                         170
#define TRISC0                        171
#define TRISC1                        172
#define TRISC2                        173
#define TRISC3                        174
#define TRISC4                        175
#define TRISC5                        176
#define TRISC6                        177
#define TRISC7                        178
#define TRISD                         179
#define TRISD0                        180
#define TRISD1                        181
#define TRISD2                        182
#define TRISD3                        183
#define TRISD4                        184
#define TRISD5                        185
#define TRISD6                        186
#define TRISD7                        187
#define TRISE                         188
#define TRISE0                        189
#define TRISE1                        190
#define TRISE2                        191
#define PSPMODE                       192
#define IBOV                          193
#define OBF                           194
#define IBF                           195
#define PIE1                          196
#define TMR1IE                        197
#define TMR2IE                        198
#define CCP1IE                        199
#define SSPIE                         200
#define TXIE                          201
#define RCIE                          202
#define ADIE                          203
#define PSPIE                         204
#define PIE2                          205
#define CCP2IE                        206
#define PCON                          207
#define nBOR                          208
#define nBO                           209
#define nPOR                          210
#define SSPSTAT                       211
#define BF                            212
#define UA                            213
#define nW                            214
#define nWRITE                        215
#define R_nW                          216
#define READ_WRITE                    217
#define I2C_READ                      218
#define R_W                           219
#define R                             220
#define I2C_START                     221
#define S                             222
#define P                             223
#define I2C_STOP                      224
#define D_nA                          225
#define D_A                           226
#define D                             227
#define nADDRESS                      228
#define nA                            229
#define I2C_DATA                      230
#define DATA_ADDRESS                  231
#define TXSTA                         232
#define TXD8                          233
#define TX9D                          234
#define TRMT                          235
#define BRGH                          236
#define SYNC                          237
#define TXEN                          238
#define TX8_9                         239
#define TX9                           240
#define nTX8                          241
#define CSRC                          242
#define ADCON1                        243
#define PCFG0                         244
#define PCFG                          245
#define PCFG1                         246
#define PCFG2                         247

#endif // _PIC16CR74_H_
