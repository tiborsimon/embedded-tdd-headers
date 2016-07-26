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

#ifndef _PIC16F785_H_
#define _PIC16F785_H_

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
#define RAIF                          35
#define INTF                          36
#define T0IF                          37
#define TMR0IF                        38
#define RAIE                          39
#define INTE                          40
#define T0IE                          41
#define TMR0IE                        42
#define PEIE                          43
#define GIE                           44
#define PIR1                          45
#define T1IF                          46
#define TMR1IF                        47
#define T2IF                          48
#define TMR2IF                        49
#define OSFIF                         50
#define C1IF                          51
#define C2IF                          52
#define CCP1IF                        53
#define ADIF                          54
#define EEIF                          55
#define T1CON                         56
#define TMR1ON                        57
#define TMR1CS                        58
#define nT1SYNC                       59
#define T1OSCEN                       60
#define T1CKPS0                       61
#define T1CKPS                        62
#define T1CKPS1                       63
#define T1GE                          64
#define TMR1GE                        65
#define T1GINV                        66
#define T2CON                         67
#define T2CKPS0                       68
#define T2CKPS                        69
#define T2CKPS1                       70
#define TMR2ON                        71
#define TOUTPS0                       72
#define TOUTPS                        73
#define TOUTPS1                       74
#define TOUTPS2                       75
#define TOUTPS3                       76
#define CCP1CON                       77
#define CCP1M0                        78
#define CCP1M                         79
#define CCP1M1                        80
#define CCP1M2                        81
#define CCP1M3                        82
#define DCB                           83
#define DC1B0                         84
#define DC1B1                         85
#define WDTCON                        86
#define SWDTEN                        87
#define WDTPS                         88
#define WDTPS0                        89
#define WDTPS1                        90
#define WDTPS2                        91
#define WDTPS3                        92
#define ADCON0                        93
#define ADON                          94
#define nDONE                         95
#define GO_nDONE                      96
#define GO_DONE                       97
#define GO                            98
#define CHS                           99
#define CHS0                          100
#define CHS1                          101
#define CHS2                          102
#define CHS3                          103
#define VCFG                          104
#define ADFM                          105
#define OPTION_REG                    106
#define PS                            107
#define PS0                           108
#define PS1                           109
#define PS2                           110
#define PSA                           111
#define T0SE                          112
#define T0CS                          113
#define INTEDG                        114
#define nRAPU                         115
#define TRISA                         116
#define TRISA0                        117
#define TRISA1                        118
#define TRISA2                        119
#define TRISA3                        120
#define TRISA4                        121
#define TRISA5                        122
#define TRISB                         123
#define TRISB4                        124
#define TRISB5                        125
#define TRISB6                        126
#define TRISB7                        127
#define TRISC                         128
#define TRISC0                        129
#define TRISC1                        130
#define TRISC2                        131
#define TRISC3                        132
#define TRISC4                        133
#define TRISC5                        134
#define TRISC6                        135
#define TRISC7                        136
#define PIE1                          137
#define T1IE                          138
#define TMR1IE                        139
#define T2IE                          140
#define TMR2IE                        141
#define OSFIE                         142
#define C1IE                          143
#define C2IE                          144
#define CCP1IE                        145
#define ADIE                          146
#define EEIE                          147
#define PCON                          148
#define nBOR                          149
#define nBOD                          150
#define nPOR                          151
#define SBODEN                        152
#define SBOREN                        153
#define OSCCON                        154
#define SCS                           155
#define LTS                           156
#define HTS                           157
#define OSTS                          158
#define IRCF                          159
#define IRCF0                         160
#define IRCF1                         161
#define IRCF2                         162
#define OSCTUNE                       163
#define TUN0                          164
#define TUN                           165
#define TUN1                          166
#define TUN2                          167
#define TUN3                          168
#define TUN4                          169
#define ANSEL0                        170
#define ANS0                          171
#define ANS1                          172
#define ANS2                          173
#define ANS3                          174
#define ANS4                          175
#define ANS5                          176
#define ANS6                          177
#define ANS7                          178
#define ANSEL1                        179
#define ANS8                          180
#define ANS9                          181
#define ANS10                         182
#define ANS11                         183
#define WPUA                          184
#define WPUA0                         185
#define WPU0                          186
#define WPU1                          187
#define WPUA1                         188
#define WPUA2                         189
#define WPU2                          190
#define WPUA3                         191
#define WPU3                          192
#define WPUA4                         193
#define WPU4                          194
#define WPUA5                         195
#define WPU5                          196
#define IOCA                          197
#define IOCA0                         198
#define IOC0                          199
#define IOCA1                         200
#define IOC1                          201
#define IOCA2                         202
#define IOC2                          203
#define IOCA3                         204
#define IOC3                          205
#define IOCA4                         206
#define IOC4                          207
#define IOCA5                         208
#define IOC5                          209
#define REFCON                        210
#define CVROE                         211
#define VROE                          212
#define VREN                          213
#define VRBB                          214
#define BGST                          215
#define VRCON                         216
#define VR0                           217
#define VR1                           218
#define VR2                           219
#define VR3                           220
#define VRR                           221
#define C2VREN                        222
#define C1VREN                        223
#define EECON1                        224
#define RD                            225
#define WR                            226
#define WREN                          227
#define WRERR                         228
#define ADCON1                        229
#define ADCS                          230
#define ADCS0                         231
#define ADCS1                         232
#define ADCS2                         233
#define PWMCON1                       234
#define CMDLY                         235
#define CMDLY0                        236
#define CMDLY1                        237
#define CMDLY2                        238
#define CMDLY3                        239
#define CMDLY4                        240
#define COMOD0                        241
#define COMOD                         242
#define COMOD1                        243
#define OVRLP                         244
#define PWMCON0                       245
#define PH1EN                         246
#define PH2EN                         247
#define SYNC                          248
#define SYNC0                         249
#define SYNC1                         250
#define BLANK1                        251
#define BLANK2                        252
#define PASEN                         253
#define PRSEN                         254
#define PWMCLK                        255
#define PER                           256
#define PER0                          257
#define PER1                          258
#define PER2                          259
#define PER3                          260
#define PER4                          261
#define PWMP                          262
#define PWMP0                         263
#define PWMP1                         264
#define PWMASE                        265
#define PWMPH1                        266
#define PWMPH1_PH0                    267
#define PWMPH1_PH                     268
#define PWMPH1_PH1                    269
#define PWMPH1_PH2                    270
#define PWMPH1_PH3                    271
#define PWMPH1_PH4                    272
#define PWMPH1_C1EN                   273
#define PWMPH1_C2EN                   274
#define PWMPH1_POL                    275
#define PWMPH2                        276
#define PWMPH2_PH0                    277
#define PWMPH2_PH                     278
#define PWMPH2_PH1                    279
#define PWMPH2_PH2                    280
#define PWMPH2_PH3                    281
#define PWMPH2_PH4                    282
#define PWMPH2_C1EN                   283
#define PWMPH2_C2EN                   284
#define PWMPH2_POL                    285
#define CM1CON0                       286
#define C1CH                          287
#define C1CH0                         288
#define C1CH1                         289
#define C1R                           290
#define C1SP                          291
#define C1POL                         292
#define C1OE                          293
#define C1OUT                         294
#define C1ON                          295
#define CM2CON0                       296
#define C2CH0                         297
#define C2CH                          298
#define C2CH1                         299
#define C2R                           300
#define C2SP                          301
#define C2POL                         302
#define C2OE                          303
#define C2OUT                         304
#define C2ON                          305
#define CM2CON1                       306
#define C2SYNC                        307
#define T1GSS                         308
#define MC2OUT                        309
#define MC1OUT                        310
#define OPA1CON                       311
#define OPA1CON_OPAON                 312
#define OPA2CON                       313
#define OPA2CON_OPAON                 314

#endif // _PIC16F785_H_
