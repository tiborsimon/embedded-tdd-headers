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

#ifndef _PIC10LF320_H_
#define _PIC10LF320_H_

#define STATUS                        0
#define C                             1
#define CARRY                         2
#define DC                            3
#define ZERO                          4
#define Z                             5
#define nPD                           6
#define nTO                           7
#define RP0                           8
#define RP1                           9
#define IRP                           10
#define PORTA                         11
#define RA0                           12
#define RA1                           13
#define RA2                           14
#define RA3                           15
#define TRISA                         16
#define TRISA0                        17
#define TRISA1                        18
#define TRISA2                        19
#define LATA                          20
#define LATA0                         21
#define LATA1                         22
#define LATA2                         23
#define ANSELA                        24
#define ANSA0                         25
#define ANSA1                         26
#define ANSA2                         27
#define WPUA                          28
#define WPUA0                         29
#define WPUA1                         30
#define WPUA2                         31
#define WPUA3                         32
#define PCLATH                        33
#define PCLH0                         34
#define INTCON                        35
#define IOCIF                         36
#define INTF                          37
#define TMR0IF                        38
#define IOCIE                         39
#define INTE                          40
#define TMR0IE                        41
#define PEIE                          42
#define GIE                           43
#define PIR1                          44
#define TMR2IF                        45
#define CLC1IF                        46
#define NCO1IF                        47
#define ADIF                          48
#define PIE1                          49
#define TMR2IE                        50
#define CLC1IE                        51
#define NCO1IE                        52
#define ADIE                          53
#define OPTION_REG                    54
#define PS                            55
#define PS0                           56
#define PS1                           57
#define PS2                           58
#define PSA                           59
#define T0SE                          60
#define T0CS                          61
#define INTEDG                        62
#define nWPUEN                        63
#define PCON                          64
#define nBOR                          65
#define nPOR                          66
#define OSCCON                        67
#define HFIOFS                        68
#define LFIOFR                        69
#define HFIOFR                        70
#define IRCF                          71
#define IRCF0                         72
#define IRCF1                         73
#define IRCF2                         74
#define T2CON                         75
#define T2CKPS0                       76
#define T2CKPS                        77
#define T2CKPS1                       78
#define TMR2ON                        79
#define TOUTPS0                       80
#define TOUTPS                        81
#define TOUTPS1                       82
#define TOUTPS2                       83
#define TOUTPS3                       84
#define PWM1DCL                       85
#define PWM1DCL0                      86
#define PWM1DCL1                      87
#define PWM1DCH                       88
#define PWM1DCH0                      89
#define PWM1DCH1                      90
#define PWM1DCH2                      91
#define PWM1DCH3                      92
#define PWM1DCH4                      93
#define PWM1DCH5                      94
#define PWM1DCH6                      95
#define PWM1DCH7                      96
#define PWM1CON                       97
#define PWM1POL                       98
#define PWM1OUT                       99
#define PWM1OE                        100
#define PWM1EN                        101
#define PWM2DCL0                      102
#define PWM2DCL                       103
#define PWM2DCL1                      104
#define PWM2DCH0                      105
#define PWM2DCH                       106
#define PWM2DCH1                      107
#define PWM2DCH2                      108
#define PWM2DCH3                      109
#define PWM2DCH4                      110
#define PWM2DCH5                      111
#define PWM2DCH6                      112
#define PWM2DCH7                      113
#define PWM2CON                       114
#define PWM2POL                       115
#define PWM2OUT                       116
#define PWM2OE                        117
#define PWM2EN                        118
#define IOCAP                         119
#define IOCAP0                        120
#define IOCAP1                        121
#define IOCAP2                        122
#define IOCAP3                        123
#define IOCAN                         124
#define IOCAN0                        125
#define IOCAN1                        126
#define IOCAN2                        127
#define IOCAN3                        128
#define IOCAF                         129
#define IOCAF0                        130
#define IOCAF1                        131
#define IOCAF2                        132
#define IOCAF3                        133
#define FVRCON                        134
#define ADFVR0                        135
#define ADFVR                         136
#define ADFVR1                        137
#define TSRNG                         138
#define TSEN                          139
#define FVRRDY                        140
#define FVREN                         141
#define ADCON                         142
#define ADON                          143
#define GO_nDONE                      144
#define CHS0                          145
#define CHS                           146
#define CHS1                          147
#define CHS2                          148
#define ADCS                          149
#define ADCS0                         150
#define ADCS1                         151
#define ADCS2                         152
#define PMADRL                        153
#define PMADR                         154
#define PMADRH                        155
#define PMADR8                        156
#define PMDATL                        157
#define PMDATH                        158
#define PMCON1                        159
#define RD                            160
#define WR                            161
#define WREN                          162
#define WRERR                         163
#define FREE                          164
#define LWLO                          165
#define CFGS                          166
#define PMCON2                        167
#define CLKRCON                       168
#define CLKROE                        169
#define NCO1ACCL                      170
#define NCO1ACC0                      171
#define NCO1ACC1                      172
#define NCO1ACC2                      173
#define NCO1ACC3                      174
#define NCO1ACC4                      175
#define NCO1ACC5                      176
#define NCO1ACC6                      177
#define NCO1ACC7                      178
#define NCO1ACCH                      179
#define NCO1ACC8                      180
#define NCO1ACC9                      181
#define NCO1ACC10                     182
#define NCO1ACC11                     183
#define NCO1ACC12                     184
#define NCO1ACC13                     185
#define NCO1ACC14                     186
#define NCO1ACC15                     187
#define NCO1ACCU                      188
#define NCO1ACC16                     189
#define NCO1ACC17                     190
#define NCO1ACC18                     191
#define NCO1ACC19                     192
#define NCO1INCL                      193
#define NCO1INC0                      194
#define NCO1INC1                      195
#define NCO1INC2                      196
#define NCO1INC3                      197
#define NCO1INC4                      198
#define NCO1INC5                      199
#define NCO1INC6                      200
#define NCO1INC7                      201
#define NCO1INCH                      202
#define NCO1INC8                      203
#define NCO1INC9                      204
#define NCO1INC10                     205
#define NCO1INC11                     206
#define NCO1INC12                     207
#define NCO1INC13                     208
#define NCO1INC14                     209
#define NCO1INC15                     210
#define NCO1CON                       211
#define N1PFM                         212
#define N1POL                         213
#define N1OUT                         214
#define N1OE                          215
#define N1EN                          216
#define NCO1CLK                       217
#define N1CKS                         218
#define N1CKS0                        219
#define N1CKS1                        220
#define N1PWS0                        221
#define N1PWS                         222
#define N1PWS1                        223
#define N1PWS2                        224
#define WDTCON                        225
#define SWDTEN                        226
#define WDTPS                         227
#define WDTPS0                        228
#define WDTPS1                        229
#define WDTPS2                        230
#define WDTPS3                        231
#define WDTPS4                        232
#define CLC1CON                       233
#define LC1MODE                       234
#define LC1MODE0                      235
#define LCMODE0                       236
#define LCMODE1                       237
#define LC1MODE1                      238
#define LCMODE2                       239
#define LC1MODE2                      240
#define LCINTN                        241
#define LC1INTN                       242
#define LC1INTP                       243
#define LCINTP                        244
#define LCOUT                         245
#define LC1OUT                        246
#define LC1OE                         247
#define LCOE                          248
#define LC1EN                         249
#define LCEN                          250
#define CLC1SEL0                      251
#define LC1D1S                        252
#define LC1D1S0                       253
#define D1S0                          254
#define LC1D1S1                       255
#define D1S1                          256
#define LC1D1S2                       257
#define D1S2                          258
#define LC1D2S                        259
#define LC1D2S0                       260
#define D2S0                          261
#define LC1D2S1                       262
#define D2S1                          263
#define LC1D2S2                       264
#define D2S2                          265
#define CLC1SEL1                      266
#define LC1D3S0                       267
#define LC1D3S                        268
#define D3S0                          269
#define LC1D3S1                       270
#define D3S1                          271
#define LC1D3S2                       272
#define D3S2                          273
#define D4S0                          274
#define LC1D4S                        275
#define LC1D4S0                       276
#define D4S1                          277
#define LC1D4S1                       278
#define D4S2                          279
#define LC1D4S2                       280
#define CLC1POL                       281
#define LC1G1POL                      282
#define G1POL                         283
#define G2POL                         284
#define LC1G2POL                      285
#define G3POL                         286
#define LC1G3POL                      287
#define LC1G4POL                      288
#define G4POL                         289
#define POL                           290
#define LC1POL                        291
#define CLC1GLS0                      292
#define CLC1GLS0_D1N                  293
#define LC1G1D1N                      294
#define CLC1GLS0_D1T                  295
#define LC1G1D1T                      296
#define LC1G1D2N                      297
#define CLC1GLS0_D2N                  298
#define LC1G1D2T                      299
#define CLC1GLS0_D2T                  300
#define CLC1GLS0_D3N                  301
#define LC1G1D3N                      302
#define CLC1GLS0_D3T                  303
#define LC1G1D3T                      304
#define CLC1GLS0_D4N                  305
#define LC1G1D4N                      306
#define CLC1GLS0_D4T                  307
#define LC1G1D4T                      308
#define CLC1GLS1                      309
#define CLC1GLS1_D1N                  310
#define LC1G2D1N                      311
#define LC1G2D1T                      312
#define CLC1GLS1_D1T                  313
#define CLC1GLS1_D2N                  314
#define LC1G2D2N                      315
#define LC1G2D2T                      316
#define CLC1GLS1_D2T                  317
#define CLC1GLS1_D3N                  318
#define LC1G2D3N                      319
#define LC1G2D3T                      320
#define CLC1GLS1_D3T                  321
#define CLC1GLS1_D4N                  322
#define LC1G2D4N                      323
#define LC1G2D4T                      324
#define CLC1GLS1_D4T                  325
#define CLC1GLS2                      326
#define CLC1GLS2_D1N                  327
#define LC1G3D1N                      328
#define LC1G3D1T                      329
#define CLC1GLS2_D1T                  330
#define LC1G3D2N                      331
#define CLC1GLS2_D2N                  332
#define LC1G3D2T                      333
#define CLC1GLS2_D2T                  334
#define CLC1GLS2_D3N                  335
#define LC1G3D3N                      336
#define LC1G3D3T                      337
#define CLC1GLS2_D3T                  338
#define LC1G3D4N                      339
#define CLC1GLS2_D4N                  340
#define LC1G3D4T                      341
#define CLC1GLS2_D4T                  342
#define CLC1GLS3                      343
#define LC1G4D1N                      344
#define G4D1N                         345
#define LC1G4D1T                      346
#define G4D1T                         347
#define LC1G4D2N                      348
#define G4D2N                         349
#define G4D2T                         350
#define LC1G4D2T                      351
#define LC1G4D3N                      352
#define G4D3N                         353
#define G4D3T                         354
#define LC1G4D3T                      355
#define G4D4N                         356
#define LC1G4D4N                      357
#define G4D4T                         358
#define LC1G4D4T                      359
#define CWG1CON0                      360
#define G1CS0                         361
#define G1CS                          362
#define G1POLA                        363
#define G1POLB                        364
#define G1OEA                         365
#define G1OEB                         366
#define G1EN                          367
#define CWG1CON1                      368
#define G1IS0                         369
#define G1IS                          370
#define G1IS1                         371
#define G1ASDLA                       372
#define G1ASDLA0                      373
#define G1ASDLA1                      374
#define G1ASDLB                       375
#define G1ASDLB0                      376
#define G1ASDLB1                      377
#define CWG1CON2                      378
#define G1ASDSFLT                     379
#define G1ASDSCLC1                    380
#define G1ARSEN                       381
#define G1ASE                         382
#define CWG1DBR0                      383
#define CWG1DBR                       384
#define CWG1DBR1                      385
#define CWG1DBR2                      386
#define CWG1DBR3                      387
#define CWG1DBR4                      388
#define CWG1DBR5                      389
#define CWG1DBF                       390
#define CWG1DBF0                      391
#define CWG1DBF1                      392
#define CWG1DBF2                      393
#define CWG1DBF3                      394
#define CWG1DBF4                      395
#define CWG1DBF5                      396
#define VREGCON                       397
#define VREGPM0                       398
#define VREGPM                        399
#define VREGPM1                       400
#define BORCON                        401
#define BORRDY                        402
#define BORFS                         403
#define SBOREN                        404

#endif // _PIC10LF320_H_
