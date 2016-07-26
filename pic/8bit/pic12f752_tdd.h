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

#ifndef _PIC12F752_H_
#define _PIC12F752_H_

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
#define RA4                           16
#define RA5                           17
#define IOCAF                         18
#define IOCAF0                        19
#define IOCAF1                        20
#define IOCAF2                        21
#define IOCAF3                        22
#define IOCAF4                        23
#define IOCAF5                        24
#define INTCON                        25
#define IOCIF                         26
#define INTF                          27
#define T0IF                          28
#define IOCIE                         29
#define INTE                          30
#define T0IE                          31
#define PEIE                          32
#define GIE                           33
#define PIR1                          34
#define TMR1IF                        35
#define TMR2IF                        36
#define HLTMR1IF                      37
#define ADIF                          38
#define TMR1GIF                       39
#define PIR2                          40
#define CCP1IF                        41
#define COG1IF                        42
#define C1IF                          43
#define C2IF                          44
#define T1CON                         45
#define TMR1ON                        46
#define nT1SYNC                       47
#define T1CKPS0                       48
#define T1CKPS                        49
#define T1CKPS1                       50
#define TMR1CS0                       51
#define TMR1CS                        52
#define TMR1CS1                       53
#define T1GCON                        54
#define T1GSS0                        55
#define T1GSS                         56
#define T1GSS1                        57
#define T1GVAL                        58
#define T1GGO_nDONE                   59
#define T1GGO                         60
#define T1GSPM                        61
#define T1GTM                         62
#define T1GPOL                        63
#define TMR1GE                        64
#define CCP1CON                       65
#define CCP1M0                        66
#define CCP1M                         67
#define CCP1M1                        68
#define CCP1M2                        69
#define CCP1M3                        70
#define DC1B                          71
#define DC1B0                         72
#define DC1B1                         73
#define ADRESL                        74
#define ADRESH                        75
#define ADCON0                        76
#define ADON                          77
#define GO_nDONE                      78
#define CHS                           79
#define CHS0                          80
#define CHS1                          81
#define CHS2                          82
#define CHS3                          83
#define VCFG                          84
#define ADFM                          85
#define ADCON1                        86
#define ADCS                          87
#define ADCS0                         88
#define ADCS1                         89
#define ADCS2                         90
#define OPTION_REG                    91
#define PS                            92
#define PS0                           93
#define PS1                           94
#define PS2                           95
#define PSA                           96
#define T0SE                          97
#define T0CS                          98
#define INTEDG                        99
#define nRAPU                         100
#define TRISA                         101
#define TRISA0                        102
#define TRISA1                        103
#define TRISA2                        104
#define TRISA3                        105
#define TRISA4                        106
#define TRISA5                        107
#define IOCAP                         108
#define IOCAP0                        109
#define IOCAP1                        110
#define IOCAP2                        111
#define IOCAP3                        112
#define IOCAP4                        113
#define IOCAP5                        114
#define PIE1                          115
#define TMR1IE                        116
#define TMR2IE                        117
#define HLTMR1IE                      118
#define ADIE                          119
#define TMR1GIE                       120
#define PIE2                          121
#define CCP1IE                        122
#define COG1IE                        123
#define C1IE                          124
#define C2IE                          125
#define OSCCON                        126
#define LTS                           127
#define HTS                           128
#define IRCF                          129
#define IRCF0                         130
#define IRCF1                         131
#define FVRCON                        132
#define FVRBUFSS                      133
#define FVRBUFEN                      134
#define FVRRDY                        135
#define FVREN                         136
#define DACCON0                       137
#define DACPSS0                       138
#define DACOE                         139
#define DACRNG                        140
#define DACEN                         141
#define DACCON1                       142
#define DACR0                         143
#define DACR                          144
#define DACR1                         145
#define DACR2                         146
#define DACR3                         147
#define DACR4                         148
#define CM2CON0                       149
#define C2SYNC                        150
#define C2HYS                         151
#define C2SP                          152
#define C2ZLF                         153
#define C2POL                         154
#define C2OE                          155
#define C2OUT                         156
#define C2ON                          157
#define CM2CON1                       158
#define C2NCH0                        159
#define C2PCH                         160
#define C2PCH0                        161
#define C2PCH1                        162
#define C2INTN                        163
#define C2INTP                        164
#define CM1CON0                       165
#define C1SYNC                        166
#define C1HYS                         167
#define C1SP                          168
#define C1ZLF                         169
#define C1POL                         170
#define C1OE                          171
#define C1OUT                         172
#define C1ON                          173
#define CM1CON1                       174
#define C1NCH0                        175
#define C1PCH                         176
#define C1PCH0                        177
#define C1PCH1                        178
#define C1INTN                        179
#define C1INTP                        180
#define CMOUT                         181
#define MCOUT1                        182
#define MCOUT2                        183
#define LATA                          184
#define LATA0                         185
#define LATA1                         186
#define LATA2                         187
#define LATA4                         188
#define LATA5                         189
#define IOCAN                         190
#define IOCAN0                        191
#define IOCAN1                        192
#define IOCAN2                        193
#define IOCAN3                        194
#define IOCAN4                        195
#define IOCAN5                        196
#define WPUA                          197
#define WPUA0                         198
#define WPUA1                         199
#define WPUA2                         200
#define WPUA3                         201
#define WPUA4                         202
#define WPUA5                         203
#define SLRCONA                       204
#define SLRA0                         205
#define SLRA2                         206
#define PCON                          207
#define nBOR                          208
#define nPOR                          209
#define TMR2                          210
#define PR2                           211
#define T2CON                         212
#define T2CKPS0                       213
#define T2CKPS                        214
#define T2CKPS1                       215
#define TMR2ON                        216
#define T2OUTPS0                      217
#define T2OUTPS                       218
#define T2OUTPS1                      219
#define T2OUTPS2                      220
#define T2OUTPS3                      221
#define HLTMR1                        222
#define HLTPR1                        223
#define HLT1CON0                      224
#define H1CKPS                        225
#define H1CKPS0                       226
#define H1CKPS1                       227
#define H1ON                          228
#define H1OUTPS                       229
#define H1OUTPS0                      230
#define H1OUTPS1                      231
#define H1OUTPS2                      232
#define H1OUTPS3                      233
#define HLT1CON1                      234
#define H1REREN                       235
#define H1FEREN                       236
#define H1ERS                         237
#define H1ERS0                        238
#define H1ERS1                        239
#define H1ERS2                        240
#define ANSELA                        241
#define ANSA0                         242
#define ANSA1                         243
#define ANSA2                         244
#define ANSA4                         245
#define ANSA5                         246
#define APFCON                        247
#define COG1O0SEL                     248
#define COG1O1SEL                     249
#define COG1FSEL                      250
#define T1GSEL                        251
#define OSCTUNE                       252
#define TUN0                          253
#define TUN                           254
#define TUN1                          255
#define TUN2                          256
#define TUN3                          257
#define TUN4                          258
#define PMCON1                        259
#define RD                            260
#define WR                            261
#define WREN                          262
#define PMCON2                        263
#define PMADRL                        264
#define PMADRH                        265
#define PMDATL                        266
#define PMDATH                        267
#define COG1PH                        268
#define G1PH                          269
#define G1PH0                         270
#define G1PH1                         271
#define G1PH2                         272
#define G1PH3                         273
#define COG1BLK                       274
#define G1BLKF                        275
#define G1BLKF0                       276
#define G1BLKF1                       277
#define G1BLKF2                       278
#define G1BLKF3                       279
#define G1BLKR0                       280
#define G1BLKR                        281
#define G1BLKR1                       282
#define G1BLKR2                       283
#define G1BLKR3                       284
#define COG1DB                        285
#define G1DBF0                        286
#define G1DBF                         287
#define G1DBF1                        288
#define G1DBF2                        289
#define G1DBF3                        290
#define G1DBR                         291
#define G1BDR0                        292
#define G1BDR1                        293
#define G1BDR2                        294
#define G1BDR3                        295
#define COG1CON0                      296
#define G1CS0                         297
#define G1CS                          298
#define G1CS1                         299
#define G1LD                          300
#define G1POL0                        301
#define G1POL1                        302
#define G1OE0                         303
#define G1OE1                         304
#define G1EN                          305
#define COG1CON1                      306
#define G1RS                          307
#define G1RS0                         308
#define G1RS1                         309
#define G1RS2                         310
#define G1FS                          311
#define G1FS0                         312
#define G1FS1                         313
#define G1FS2                         314
#define G1RSIM                        315
#define G1FSIM                        316
#define COG1ASD                       317
#define G1ASDSFLT                     318
#define G1ASDSC1                      319
#define G1ASDSC2                      320
#define G1ASDSHLT                     321
#define G1ASDL0                       322
#define G1ASDL1                       323
#define G1ARSEN                       324
#define G1ASDE                        325

#endif // _PIC12F752_H_
