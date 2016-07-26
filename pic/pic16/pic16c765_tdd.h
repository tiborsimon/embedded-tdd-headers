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

#ifndef _PIC16C765_H_
#define _PIC16C765_H_

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
#define PORTD                         34
#define RD0                           35
#define RD1                           36
#define RD2                           37
#define RD3                           38
#define RD4                           39
#define RD5                           40
#define RD6                           41
#define RD7                           42
#define PORTE                         43
#define RE0                           44
#define RE1                           45
#define RE2                           46
#define INTCON                        47
#define RBIF                          48
#define INTF                          49
#define T0IF                          50
#define TMR0IF                        51
#define RBIE                          52
#define INTE                          53
#define T0IE                          54
#define TMR0IE                        55
#define PEIE                          56
#define GIE                           57
#define PIR1                          58
#define TMR1IF                        59
#define TMR2IF                        60
#define CCP1IF                        61
#define USBIF                         62
#define TXIF                          63
#define RCIF                          64
#define ADIF                          65
#define PSPIF                         66
#define PIR2                          67
#define CCP2IF                        68
#define T1CON                         69
#define TMR1ON                        70
#define TMR1CS                        71
#define nT1SYNC                       72
#define T1INSYNC                      73
#define T1OSCEN                       74
#define T1CKPS0                       75
#define T1CKPS                        76
#define T1CKPS1                       77
#define T2CON                         78
#define T2CKPS0                       79
#define T2CKPS                        80
#define T2CKPS1                       81
#define TMR2ON                        82
#define TOUTPS0                       83
#define TOUTPS                        84
#define TOUTPS1                       85
#define TOUTPS2                       86
#define TOUTPS3                       87
#define CCP1CON                       88
#define CCP1M0                        89
#define CCP1M                         90
#define CCP1M1                        91
#define CCP1M2                        92
#define CCP1M3                        93
#define DC1B                          94
#define DC1B0                         95
#define DC1B1                         96
#define RCSTA                         97
#define RCD8                          98
#define RX9D                          99
#define OERR                          100
#define FERR                          101
#define CREN                          102
#define SREN                          103
#define RC8_9                         104
#define RC9                           105
#define RX9                           106
#define nRC8                          107
#define SPEN                          108
#define CCP2CON                       109
#define CCP2M                         110
#define CCP2M0                        111
#define CCP2M1                        112
#define CCP2M2                        113
#define CCP2M3                        114
#define DC2B0                         115
#define DC2B                          116
#define DC2B1                         117
#define ADCON0                        118
#define ADON                          119
#define nDONE                         120
#define GO_nDONE                      121
#define GO_DONE                       122
#define GO                            123
#define CHS                           124
#define CHS0                          125
#define CHS1                          126
#define CHS2                          127
#define ADCS                          128
#define ADCS0                         129
#define ADCS1                         130
#define OPTION_REG                    131
#define PS                            132
#define PS0                           133
#define PS1                           134
#define PS2                           135
#define PSA                           136
#define T0SE                          137
#define T0CS                          138
#define INTEDG                        139
#define nRBPU                         140
#define TRISA                         141
#define TRISA0                        142
#define TRISA1                        143
#define TRISA2                        144
#define TRISA3                        145
#define TRISA4                        146
#define TRISA5                        147
#define TRISB                         148
#define TRISB0                        149
#define TRISB1                        150
#define TRISB2                        151
#define TRISB3                        152
#define TRISB4                        153
#define TRISB5                        154
#define TRISB6                        155
#define TRISB7                        156
#define TRISC                         157
#define TRISC0                        158
#define TRISC1                        159
#define TRISC2                        160
#define TRISC6                        161
#define TRISC7                        162
#define TRISD                         163
#define TRISD0                        164
#define TRISD1                        165
#define TRISD2                        166
#define TRISD3                        167
#define TRISD4                        168
#define TRISD5                        169
#define TRISD6                        170
#define TRISD7                        171
#define TRISE                         172
#define TRISE0                        173
#define TRISE1                        174
#define TRISE2                        175
#define PSPMODE                       176
#define IBOV                          177
#define OBF                           178
#define IBF                           179
#define PIE1                          180
#define TMR1IE                        181
#define TMR2IE                        182
#define CCP1IE                        183
#define USBIE                         184
#define TXIE                          185
#define RCIE                          186
#define ADIE                          187
#define PSPIE                         188
#define PIE2                          189
#define CCP2IE                        190
#define PCON                          191
#define nBOR                          192
#define nBO                           193
#define nPOR                          194
#define PR2                           195
#define TXSTA                         196
#define TXD8                          197
#define TX9D                          198
#define TRMT                          199
#define BRGH                          200
#define SYNC                          201
#define TXEN                          202
#define TX8_9                         203
#define TX9                           204
#define nTX8                          205
#define CSRC                          206
#define ADCON1                        207
#define PCFG0                         208
#define PCFG                          209
#define PCFG1                         210
#define PCFG2                         211
#define UIR                           212
#define UIR_USB_RST                   213
#define UIR_UERR                      214
#define UIR_ACTIVITY                  215
#define UIR_TOK_DNE                   216
#define UIR_UIDLE                     217
#define UIR_STALL                     218
#define UIE                           219
#define UIE_USB_RST                   220
#define UIE_UERR                      221
#define UIE_ACTIVITY                  222
#define UIE_TOK_DNE                   223
#define UIE_UIDLE                     224
#define UIE_STALL                     225
#define UEIR                          226
#define UEIR_PID_ERR                  227
#define UEIR_CRC5                     228
#define UEIR_CRC16                    229
#define UEIR_DFN8                     230
#define UEIR_BTO_ERR                  231
#define UEIR_WRT_ERR                  232
#define UEIR_OWN_ERR                  233
#define UEIR_BTS_ERR                  234
#define UEIE                          235
#define UEIE_PID_ERR                  236
#define UEIE_CRC5                     237
#define UEIE_CRC16                    238
#define UEIE_DFN8                     239
#define UEIE_BTO_ERR                  240
#define UEIE_WRT_ERR                  241
#define UEIE_OWN_ERR                  242
#define UEIE_BTS_ERR                  243
#define USTAT                         244
#define IN                            245
#define ENDP                          246
#define ENDP0                         247
#define ENDP1                         248
#define UCTRL                         249
#define SUSPND                        250
#define RESUME                        251
#define DEV_ATT                       252
#define PKT_DIS                       253
#define SE0                           254
#define UEP0                          255
#define UEP0_EP_STALL                 256
#define UEP0_EP_IN_EN                 257
#define UEP0_EP_OUT_EN                258
#define UEP0_EP_CTL_DIS               259
#define UEP1                          260
#define UEP1_EP_STALL                 261
#define UEP1_EP_IN_EN                 262
#define UEP1_EP_OUT_EN                263
#define UEP1_EP_CTL_DIS               264
#define UEP2                          265
#define UEP2_EP_STALL                 266
#define UEP2_EP_IN_EN                 267
#define UEP2_EP_OUT_EN                268
#define UEP2_EP_CTL_DIS               269
#define BD0OST                        270
#define BD0OST_PID0                   271
#define BD0OST_PID0_BSTALL            272
#define BD0OST_BSTALL                 273
#define BD0OST_DTS                    274
#define BD0OST_PID1                   275
#define BD0OST_PID1_DTS               276
#define BD0OST_PID2                   277
#define BD0OST_PID3                   278
#define BD0OST_DATA0_1                279
#define BD0OST_DATA01                 280
#define BD0OST_UOWN                   281
#define BD0OST_OWN                    282
#define BD0OBC                        283
#define BD0OBC_BC                     284
#define BD0OBC_BC0                    285
#define BD0OBC_BC1                    286
#define BD0OBC_BC2                    287
#define BD0OBC_BC3                    288
#define BD0IST                        289
#define BD0IST_BSTALL                 290
#define BD0IST_PID0_BSTALL            291
#define BD0IST_PID0                   292
#define BD0IST_DTS                    293
#define BD0IST_PID1_DTS               294
#define BD0IST_PID1                   295
#define BD0IST_PID2                   296
#define BD0IST_PID3                   297
#define BD0IST_DATA01                 298
#define BD0IST_DATA0_1                299
#define BD0IST_UOWN                   300
#define BD0IST_OWN                    301
#define BD0IBC                        302
#define BD0IBC_BC                     303
#define BD0IBC_BC0                    304
#define BD0IBC_BC1                    305
#define BD0IBC_BC2                    306
#define BD0IBC_BC3                    307
#define BD1OST                        308
#define BD1OST_BSTALL                 309
#define BD1OST_PID0_BSTALL            310
#define BD1OST_PID0                   311
#define BD1OST_PID1                   312
#define BD1OST_DTS                    313
#define BD1OST_PID1_DTS               314
#define BD1OST_PID2                   315
#define BD1OST_PID3                   316
#define BD1OST_DATA0_1                317
#define BD1OST_DATA01                 318
#define BD1OST_OWN                    319
#define BD1OST_UOWN                   320
#define BD1OBC                        321
#define BD1OBC_BC                     322
#define BD1OBC_BC0                    323
#define BD1OBC_BC1                    324
#define BD1OBC_BC2                    325
#define BD1OBC_BC3                    326
#define BD1IST                        327
#define BD1IST_BSTALL                 328
#define BD1IST_PID0                   329
#define BD1IST_PID0_BSTALL            330
#define BD1IST_PID1_DTS               331
#define BD1IST_DTS                    332
#define BD1IST_PID1                   333
#define BD1IST_PID2                   334
#define BD1IST_PID3                   335
#define BD1IST_DATA01                 336
#define BD1IST_DATA0_1                337
#define BD1IST_OWN                    338
#define BD1IST_UOWN                   339
#define BD1IBC                        340
#define BD1IBC_BC0                    341
#define BD1IBC_BC                     342
#define BD1IBC_BC1                    343
#define BD1IBC_BC2                    344
#define BD1IBC_BC3                    345
#define BD2OST                        346
#define BD2OST_BSTALL                 347
#define BD2OST_PID0_BSTALL            348
#define BD2OST_PID0                   349
#define BD2OST_PID1_DTS               350
#define BD2OST_PID1                   351
#define BD2OST_DTS                    352
#define BD2OST_PID2                   353
#define BD2OST_PID3                   354
#define BD2OST_DATA01                 355
#define BD2OST_DATA0_1                356
#define BD2OST_OWN                    357
#define BD2OST_UOWN                   358
#define BD2OBC                        359
#define BD2OBC_BC0                    360
#define BD2OBC_BC                     361
#define BD2OBC_BC1                    362
#define BD2OBC_BC2                    363
#define BD2OBC_BC3                    364
#define BD2IST                        365
#define BD2IST_BSTALL                 366
#define BD2IST_PID0_BSTALL            367
#define BD2IST_PID0                   368
#define BD2IST_PID1                   369
#define BD2IST_DTS                    370
#define BD2IST_PID1_DTS               371
#define BD2IST_PID2                   372
#define BD2IST_PID3                   373
#define BD2IST_DATA0_1                374
#define BD2IST_DATA01                 375
#define BD2IST_UOWN                   376
#define BD2IST_OWN                    377
#define BD2IBC                        378
#define BD2IBC_BC0                    379
#define BD2IBC_BC                     380
#define BD2IBC_BC1                    381
#define BD2IBC_BC2                    382
#define BD2IBC_BC3                    383

#endif // _PIC16C765_H_
