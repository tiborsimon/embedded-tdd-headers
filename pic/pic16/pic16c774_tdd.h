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

#ifndef _PIC16C774_H_
#define _PIC16C774_H_

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
#define RBIE                          54
#define INTE                          55
#define T0IE                          56
#define PEIE                          57
#define GIE                           58
#define PIR1                          59
#define TMR1IF                        60
#define TMR2IF                        61
#define CCP1IF                        62
#define SSPIF                         63
#define TXIF                          64
#define RCIF                          65
#define ADIF                          66
#define PSPIF                         67
#define PIR2                          68
#define CCP2IF                        69
#define BCLIF                         70
#define LVDIF                         71
#define T1CON                         72
#define TMR1ON                        73
#define TMR1CS                        74
#define T1SYNC                        75
#define nT1SYNC                       76
#define T1INSYNC                      77
#define T1OSCEN                       78
#define T1CKPS0                       79
#define T1CKPS                        80
#define T1CKPS1                       81
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
#define DC1B                          109
#define DC1B0                         110
#define CCP1X                         111
#define DC1B1                         112
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
#define DC2B                          133
#define CCP2X                         134
#define ADCON0                        135
#define ADON                          136
#define CHS3                          137
#define nDONE                         138
#define GO_nDONE                      139
#define GO_DONE                       140
#define GO                            141
#define CHS                           142
#define CHS0                          143
#define CHS1                          144
#define CHS2                          145
#define ADCS                          146
#define ADCS0                         147
#define ADCS1                         148
#define OPTION_REG                    149
#define PS                            150
#define PS0                           151
#define PS1                           152
#define PS2                           153
#define PSA                           154
#define T0SE                          155
#define T0CS                          156
#define INTEDG                        157
#define nRBPU                         158
#define TRISA                         159
#define TRISA0                        160
#define TRISA1                        161
#define TRISA2                        162
#define TRISA3                        163
#define TRISA4                        164
#define TRISA5                        165
#define TRISB                         166
#define TRISB0                        167
#define TRISB1                        168
#define TRISB2                        169
#define TRISB3                        170
#define TRISB4                        171
#define TRISB5                        172
#define TRISB6                        173
#define TRISB7                        174
#define TRISC                         175
#define TRISC0                        176
#define TRISC1                        177
#define TRISC2                        178
#define TRISC3                        179
#define TRISC4                        180
#define TRISC5                        181
#define TRISC6                        182
#define TRISC7                        183
#define TRISD                         184
#define TRISD0                        185
#define TRISD1                        186
#define TRISD2                        187
#define TRISD3                        188
#define TRISD4                        189
#define TRISD5                        190
#define TRISD6                        191
#define TRISD7                        192
#define TRISE                         193
#define TRISE0                        194
#define TRISE1                        195
#define TRISE2                        196
#define PSPMODE                       197
#define IBOV                          198
#define OBF                           199
#define IBF                           200
#define PIE1                          201
#define TMR1IE                        202
#define TMR2IE                        203
#define CCP1IE                        204
#define SSPIE                         205
#define TXIE                          206
#define RCIE                          207
#define ADIE                          208
#define PSPIE                         209
#define PIE2                          210
#define CCP2IE                        211
#define BCLIE                         212
#define LVDIE                         213
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
#define REFCON                        261
#define VRLOEN                        262
#define VRHOEN                        263
#define VRLEN                         264
#define VRHEN                         265
#define LVDCON                        266
#define LV0                           267
#define LV                            268
#define LV1                           269
#define LV2                           270
#define LV3                           271
#define LVDEN                         272
#define BGST                          273
#define ADCON1                        274
#define PCFG0                         275
#define PCFG                          276
#define PCFG1                         277
#define PCFG2                         278
#define PCFG3                         279
#define VCFG                          280
#define VCFG0                         281
#define VCFG1                         282
#define VCFG2                         283
#define ADFM                          284

#endif // _PIC16C774_H_
