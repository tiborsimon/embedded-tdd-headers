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

#ifndef _PIC16C745_H_
#define _PIC16C745_H_

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
#define RC6                           32
#define RC7                           33
#define INTCON                        34
#define RBIF                          35
#define INTF                          36
#define T0IF                          37
#define TMR0IF                        38
#define RBIE                          39
#define INTE                          40
#define T0IE                          41
#define TMR0IE                        42
#define PEIE                          43
#define GIE                           44
#define PIR1                          45
#define TMR1IF                        46
#define TMR2IF                        47
#define CCP1IF                        48
#define USBIF                         49
#define TXIF                          50
#define RCIF                          51
#define ADIF                          52
#define PIR2                          53
#define CCP2IF                        54
#define T1CON                         55
#define TMR1ON                        56
#define TMR1CS                        57
#define nT1SYNC                       58
#define T1INSYNC                      59
#define T1OSCEN                       60
#define T1CKPS0                       61
#define T1CKPS                        62
#define T1CKPS1                       63
#define T2CON                         64
#define T2CKPS0                       65
#define T2CKPS                        66
#define T2CKPS1                       67
#define TMR2ON                        68
#define TOUTPS0                       69
#define TOUTPS                        70
#define TOUTPS1                       71
#define TOUTPS2                       72
#define TOUTPS3                       73
#define CCPR1L                        74
#define CCPR1H                        75
#define CCP1CON                       76
#define CCP1M0                        77
#define CCP1M                         78
#define CCP1M1                        79
#define CCP1M2                        80
#define CCP1M3                        81
#define DC1B                          82
#define DC1B0                         83
#define DC1B1                         84
#define RCSTA                         85
#define RCD8                          86
#define RX9D                          87
#define OERR                          88
#define FERR                          89
#define CREN                          90
#define SREN                          91
#define RC8_9                         92
#define RC9                           93
#define RX9                           94
#define nRC8                          95
#define SPEN                          96
#define CCP2CON                       97
#define CCP2M                         98
#define CCP2M0                        99
#define CCP2M1                        100
#define CCP2M2                        101
#define CCP2M3                        102
#define DC2B0                         103
#define DC2B                          104
#define DC2B1                         105
#define ADCON0                        106
#define ADON                          107
#define nDONE                         108
#define GO_nDONE                      109
#define GO_DONE                       110
#define GO                            111
#define CHS                           112
#define CHS0                          113
#define CHS1                          114
#define CHS2                          115
#define ADCS                          116
#define ADCS0                         117
#define ADCS1                         118
#define OPTION_REG                    119
#define PS                            120
#define PS0                           121
#define PS1                           122
#define PS2                           123
#define PSA                           124
#define T0SE                          125
#define T0CS                          126
#define INTEDG                        127
#define nRBPU                         128
#define TRISA                         129
#define TRISA0                        130
#define TRISA1                        131
#define TRISA2                        132
#define TRISA3                        133
#define TRISA4                        134
#define TRISA5                        135
#define TRISB                         136
#define TRISB0                        137
#define TRISB1                        138
#define TRISB2                        139
#define TRISB3                        140
#define TRISB4                        141
#define TRISB5                        142
#define TRISB6                        143
#define TRISB7                        144
#define TRISC                         145
#define TRISC0                        146
#define TRISC1                        147
#define TRISC2                        148
#define TRISC6                        149
#define TRISC7                        150
#define PIE1                          151
#define TMR1IE                        152
#define TMR2IE                        153
#define CCP1IE                        154
#define USBIE                         155
#define TXIE                          156
#define RCIE                          157
#define ADIE                          158
#define PIE2                          159
#define CCP2IE                        160
#define PCON                          161
#define nBOR                          162
#define nBO                           163
#define nPOR                          164
#define TXSTA                         165
#define TXD8                          166
#define TX9D                          167
#define TRMT                          168
#define BRGH                          169
#define SYNC                          170
#define TXEN                          171
#define TX8_9                         172
#define TX9                           173
#define nTX8                          174
#define CSRC                          175
#define ADCON1                        176
#define PCFG0                         177
#define PCFG                          178
#define PCFG1                         179
#define PCFG2                         180
#define UIR                           181
#define UIR_USB_RST                   182
#define UIR_UERR                      183
#define UIR_ACTIVITY                  184
#define UIR_TOK_DNE                   185
#define UIR_UIDLE                     186
#define UIR_STALL                     187
#define UIE                           188
#define UIE_USB_RST                   189
#define UIE_UERR                      190
#define UIE_ACTIVITY                  191
#define UIE_TOK_DNE                   192
#define UIE_UIDLE                     193
#define UIE_STALL                     194
#define UEIR                          195
#define UEIR_PID_ERR                  196
#define UEIR_CRC5                     197
#define UEIR_CRC16                    198
#define UEIR_DFN8                     199
#define UEIR_BTO_ERR                  200
#define UEIR_WRT_ERR                  201
#define UEIR_OWN_ERR                  202
#define UEIR_BTS_ERR                  203
#define UEIE                          204
#define UEIE_PID_ERR                  205
#define UEIE_CRC5                     206
#define UEIE_CRC16                    207
#define UEIE_DFN8                     208
#define UEIE_BTO_ERR                  209
#define UEIE_WRT_ERR                  210
#define UEIE_OWN_ERR                  211
#define UEIE_BTS_ERR                  212
#define USTAT                         213
#define IN                            214
#define ENDP                          215
#define ENDP0                         216
#define ENDP1                         217
#define UCTRL                         218
#define SUSPND                        219
#define RESUME                        220
#define DEV_ATT                       221
#define PKT_DIS                       222
#define SE0                           223
#define UEP0                          224
#define UEP0_EP_STALL                 225
#define UEP0_EP_IN_EN                 226
#define UEP0_EP_OUT_EN                227
#define UEP0_EP_CTL_DIS               228
#define UEP1                          229
#define UEP1_EP_STALL                 230
#define UEP1_EP_IN_EN                 231
#define UEP1_EP_OUT_EN                232
#define UEP1_EP_CTL_DIS               233
#define UEP2                          234
#define UEP2_EP_STALL                 235
#define UEP2_EP_IN_EN                 236
#define UEP2_EP_OUT_EN                237
#define UEP2_EP_CTL_DIS               238
#define BD0OST                        239
#define BD0OST_PID0                   240
#define BD0OST_PID0_BSTALL            241
#define BD0OST_BSTALL                 242
#define BD0OST_DTS                    243
#define BD0OST_PID1                   244
#define BD0OST_PID1_DTS               245
#define BD0OST_PID2                   246
#define BD0OST_PID3                   247
#define BD0OST_DATA0_1                248
#define BD0OST_DATA01                 249
#define BD0OST_UOWN                   250
#define BD0OST_OWN                    251
#define BD0OBC                        252
#define BD0OBC_BC                     253
#define BD0IST                        254
#define BD0IST_BSTALL                 255
#define BD0IST_PID0_BSTALL            256
#define BD0IST_PID0                   257
#define BD0IST_DTS                    258
#define BD0IST_PID1_DTS               259
#define BD0IST_PID1                   260
#define BD0IST_PID2                   261
#define BD0IST_PID3                   262
#define BD0IST_DATA01                 263
#define BD0IST_DATA0_1                264
#define BD0IST_UOWN                   265
#define BD0IST_OWN                    266
#define BD0IBC                        267
#define BD0IBC_BC                     268
#define BD0IBC_BC0                    269
#define BD0IBC_BC1                    270
#define BD0IBC_BC2                    271
#define BD0IBC_BC3                    272
#define BD1OST                        273
#define BD1OST_BSTALL                 274
#define BD1OST_PID0_BSTALL            275
#define BD1OST_PID0                   276
#define BD1OST_PID1                   277
#define BD1OST_DTS                    278
#define BD1OST_PID1_DTS               279
#define BD1OST_PID2                   280
#define BD1OST_PID3                   281
#define BD1OST_DATA0_1                282
#define BD1OST_DATA01                 283
#define BD1OST_OWN                    284
#define BD1OST_UOWN                   285
#define BD1OBC                        286
#define BD1OBC_BC                     287
#define BD1OBC_BC0                    288
#define BD1OBC_BC1                    289
#define BD1OBC_BC2                    290
#define BD1OBC_BC3                    291
#define BD1IST                        292
#define BD1IST_BSTALL                 293
#define BD1IST_PID0                   294
#define BD1IST_PID0_BSTALL            295
#define BD1IST_PID1_DTS               296
#define BD1IST_DTS                    297
#define BD1IST_PID1                   298
#define BD1IST_PID2                   299
#define BD1IST_PID3                   300
#define BD1IST_DATA01                 301
#define BD1IST_DATA0_1                302
#define BD1IST_OWN                    303
#define BD1IST_UOWN                   304
#define BD1IBC                        305
#define BD1IBC_BC0                    306
#define BD1IBC_BC                     307
#define BD1IBC_BC1                    308
#define BD1IBC_BC2                    309
#define BD1IBC_BC3                    310
#define BD2OST                        311
#define BD2OST_BSTALL                 312
#define BD2OST_PID0_BSTALL            313
#define BD2OST_PID0                   314
#define BD2OST_PID1_DTS               315
#define BD2OST_PID1                   316
#define BD2OST_DTS                    317
#define BD2OST_PID2                   318
#define BD2OST_PID3                   319
#define BD2OST_DATA01                 320
#define BD2OST_DATA0_1                321
#define BD2OST_OWN                    322
#define BD2OST_UOWN                   323
#define BD2OBC                        324
#define BD2OBC_BC                     325
#define BD2OBC_BC0                    326
#define BD2OBC_BC1                    327
#define BD2OBC_BC2                    328
#define BD2OBC_BC3                    329
#define BD2IST                        330
#define BD2IST_BSTALL                 331
#define BD2IST_PID0_BSTALL            332
#define BD2IST_PID0                   333
#define BD2IST_PID1                   334
#define BD2IST_DTS                    335
#define BD2IST_PID1_DTS               336
#define BD2IST_PID2                   337
#define BD2IST_PID3                   338
#define BD2IST_DATA0_1                339
#define BD2IST_DATA01                 340
#define BD2IST_UOWN                   341
#define BD2IST_OWN                    342
#define BD2IBC                        343
#define BD2IBC_BC0                    344
#define BD2IBC_BC                     345
#define BD2IBC_BC1                    346
#define BD2IBC_BC2                    347
#define BD2IBC_BC3                    348

#endif // _PIC16C745_H_
