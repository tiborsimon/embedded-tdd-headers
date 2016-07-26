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

#ifndef _PIC12LF1552_H_
#define _PIC12LF1552_H_

#define INDF0                         0
#define INDF1                         1
#define PCL                           2
#define STATUS                        3
#define C                             4
#define CARRY                         5
#define DC                            6
#define ZERO                          7
#define Z                             8
#define nPD                           9
#define nTO                           10
#define FSR0L                         11
#define FSR0H                         12
#define FSR1L                         13
#define FSR1H                         14
#define BSR                           15
#define BSR0                          16
#define BSR1                          17
#define BSR2                          18
#define BSR3                          19
#define BSR4                          20
#define WREG                          21
#define WREG0                         22
#define PCLATH                        23
#define INTCON                        24
#define IOCIF                         25
#define INTF                          26
#define T0IF                          27
#define TMR0IF                        28
#define IOCIE                         29
#define INTE                          30
#define T0IE                          31
#define TMR0IE                        32
#define PEIE                          33
#define GIE                           34
#define PORTA                         35
#define RA0                           36
#define RA1                           37
#define RA2                           38
#define RA3                           39
#define RA4                           40
#define RA5                           41
#define PIR1                          42
#define SSP1IF                        43
#define ADIF                          44
#define PIR2                          45
#define BCL1IF                        46
#define TMR0                          47
#define TRISA                         48
#define TRISA0                        49
#define TRISA1                        50
#define TRISA2                        51
#define TRISA3                        52
#define TRISA4                        53
#define TRISA5                        54
#define PIE1                          55
#define SSP1IE                        56
#define ADIE                          57
#define PIE2                          58
#define BCL1IE                        59
#define OPTION_REG                    60
#define PS                            61
#define PS0                           62
#define PS1                           63
#define PS2                           64
#define PSA                           65
#define T0SE                          66
#define TMR0SE                        67
#define T0CS                          68
#define TMR0CS                        69
#define INTEDG                        70
#define nWPUEN                        71
#define PCON                          72
#define nBOR                          73
#define nPOR                          74
#define nRI                           75
#define nRMCLR                        76
#define nRWDT                         77
#define STKUNF                        78
#define STKOVF                        79
#define WDTCON                        80
#define SWDTEN                        81
#define WDTPS                         82
#define WDTPS0                        83
#define WDTPS1                        84
#define WDTPS2                        85
#define WDTPS3                        86
#define WDTPS4                        87
#define OSCCON                        88
#define SCS0                          89
#define SCS                           90
#define SCS1                          91
#define IRCF                          92
#define IRCF0                         93
#define IRCF1                         94
#define IRCF2                         95
#define IRCF3                         96
#define SPLLEN                        97
#define OSCSTAT                       98
#define HFIOFS                        99
#define LFIOFR                        100
#define HFIOFR                        101
#define OSTS                          102
#define PLLR                          103
#define ADRESL                        104
#define ADRESH                        105
#define ADCON0                        106
#define ADCON0_ADON                   107
#define ADCON0_GO_nDONE               108
#define GO                            109
#define ADGO                          110
#define ADCON0_CHS                    111
#define ADCON0_CHS0                   112
#define ADCON0_CHS1                   113
#define ADCON0_CHS2                   114
#define ADCON0_CHS3                   115
#define ADCON0_CHS4                   116
#define ADCON1                        117
#define ADCON1_ADPREF                 118
#define ADCON1_ADPREF0                119
#define ADCON1_ADPREF1                120
#define ADCON1_ADCS0                  121
#define ADCON1_ADCS                   122
#define ADCON1_ADCS1                  123
#define ADCON1_ADCS2                  124
#define ADCON1_ADFM                   125
#define ADCON2                        126
#define ADCON2_TRIGSEL0               127
#define ADCON2_TRIGSEL                128
#define ADCON2_TRIGSEL1               129
#define ADCON2_TRIGSEL2               130
#define LATA                          131
#define LATA0                         132
#define LATA1                         133
#define LATA2                         134
#define LATA4                         135
#define LATA5                         136
#define BORCON                        137
#define BORRDY                        138
#define BORFS                         139
#define SBOREN                        140
#define FVRCON                        141
#define ADFVR0                        142
#define ADFVR                         143
#define ADFVR1                        144
#define TSRNG                         145
#define TSEN                          146
#define FVRRDY                        147
#define FVREN                         148
#define APFCON                        149
#define SDSEL                         150
#define SS1SEL                        151
#define SSSEL                         152
#define SDO1SEL                       153
#define SDOSEL                        154
#define ANSA0                         155
#define ANSELA                        156
#define ANSA1                         157
#define ANSA2                         158
#define ANSA4                         159
#define ANSA5                         160
#define PMADRL                        161
#define PMADRH                        162
#define PMDATL                        163
#define PMDATH                        164
#define PMCON1                        165
#define RD                            166
#define WR                            167
#define WREN                          168
#define WRERR                         169
#define FREE                          170
#define LWLO                          171
#define CFGS                          172
#define PMCON2                        173
#define WPUA0                         174
#define WPUA                          175
#define WPUA1                         176
#define WPUA2                         177
#define WPUA3                         178
#define WPUA4                         179
#define WPUA5                         180
#define SSP1BUF                       181
#define SSPBUF                        182
#define SSP1ADD                       183
#define SSPADD                        184
#define SSP1MSK                       185
#define SSPMSK                        186
#define SSP1STAT                      187
#define BF                            188
#define UA                            189
#define R_nW                          190
#define S                             191
#define P                             192
#define D_nA                          193
#define CKE                           194
#define SMP                           195
#define SSP1CON1                      196
#define SSPM0                         197
#define SSPM                          198
#define SSPM1                         199
#define SSPM2                         200
#define SSPM3                         201
#define CKP                           202
#define SSPEN                         203
#define SSPOV                         204
#define WCOL                          205
#define SSP1CON2                      206
#define SEN                           207
#define RSEN                          208
#define PEN                           209
#define RCEN                          210
#define ACKEN                         211
#define ACKDT                         212
#define ACKSTAT                       213
#define GCEN                          214
#define SSP1CON3                      215
#define DHEN                          216
#define AHEN                          217
#define SBCDE                         218
#define SDAHT                         219
#define BOEN                          220
#define SCIE                          221
#define PCIE                          222
#define ACKTIM                        223
#define IOCAP                         224
#define IOCAP0                        225
#define IOCAP1                        226
#define IOCAP2                        227
#define IOCAP3                        228
#define IOCAP4                        229
#define IOCAP5                        230
#define IOCAN0                        231
#define IOCAN                         232
#define IOCAN1                        233
#define IOCAN2                        234
#define IOCAN3                        235
#define IOCAN4                        236
#define IOCAN5                        237
#define IOCAF0                        238
#define IOCAF                         239
#define IOCAF1                        240
#define IOCAF2                        241
#define IOCAF3                        242
#define IOCAF4                        243
#define IOCAF5                        244
#define STATUS_SHAD                   245
#define C_SHAD                        246
#define DC_SHAD                       247
#define Z_SHAD                        248
#define WREG_SHAD                     249
#define BSR_SHAD                      250
#define PCLATH_SHAD                   251
#define FSR0L_SHAD                    252
#define FSR0H_SHAD                    253
#define FSR1L_SHAD                    254
#define FSR1H_SHAD                    255
#define STKPTR                        256
#define TOSL                          257
#define TOSH                          258
#define AADCON0                       259
#define AADCON0_ADON                  260
#define AADCON0_GO_nDONE              261
#define AADCON0_CHS0                  262
#define AADCON0_CHS                   263
#define AADCON0_CHS1                  264
#define AADCON0_CHS2                  265
#define AADCON0_CHS3                  266
#define AADCON0_CHS4                  267
#define AADCON1                       268
#define AADCON1_ADPREF0               269
#define AADCON1_ADPREF                270
#define AADCON1_ADPREF1               271
#define AADCON1_ADCS0                 272
#define AADCON1_ADCS                  273
#define AADCON1_ADCS1                 274
#define AADCON1_ADCS2                 275
#define AADCON1_ADFM                  276
#define AADCON2                       277
#define AADCON2_TRIGSEL               278
#define AADCON2_TRIGSEL0              279
#define AADCON2_TRIGSEL1              280
#define AADCON2_TRIGSEL2              281
#define AADCON3                       282
#define ADDSEN                        283
#define ADIPEN                        284
#define ADOOEN                        285
#define ADOEN                         286
#define ADIPPOL                       287
#define ADEPPOL                       288
#define AADSTAT                       289
#define ADSTG                         290
#define ADSTG0                        291
#define ADSTG1                        292
#define ADCONV                        293
#define AADPRE                        294
#define ADPRE0                        295
#define ADPRE                         296
#define ADPRE1                        297
#define ADPRE2                        298
#define ADPRE3                        299
#define ADPRE4                        300
#define ADPRE5                        301
#define ADPRE6                        302
#define AADACQ                        303
#define ADACQ                         304
#define ADACQ0                        305
#define ADACQ1                        306
#define ADACQ2                        307
#define ADACQ3                        308
#define ADACQ4                        309
#define ADACQ5                        310
#define ADACQ6                        311
#define AADGRD                        312
#define GRDPOL                        313
#define GRDAOE                        314
#define GRDBOE                        315
#define AADCAP                        316
#define ADDCAP                        317
#define ADDCAP0                       318
#define ADDCAP1                       319
#define ADDCAP2                       320
#define AADRES0L                      321
#define ADRES0L                       322
#define AADRES0H                      323
#define ADRES0H                       324
#define AADRES1L                      325
#define ADRES1L                       326
#define AADRES1H                      327
#define ADRES1H                       328

#endif // _PIC12LF1552_H_
