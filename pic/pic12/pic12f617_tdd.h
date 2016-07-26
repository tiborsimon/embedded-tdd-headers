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

#ifndef _PIC12F617_H_
#define _PIC12F617_H_

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
#define GPIO                          12
#define GPIO0                         13
#define RA0                           14
#define GP0                           15
#define GPIO1                         16
#define RA1                           17
#define GP1                           18
#define GPIO2                         19
#define RA2                           20
#define GP2                           21
#define GPIO3                         22
#define RA3                           23
#define GP3                           24
#define GPIO4                         25
#define RA4                           26
#define GP4                           27
#define GPIO5                         28
#define RA5                           29
#define GP5                           30
#define INTCON                        31
#define GPIF                          32
#define INTF                          33
#define TMR0IF                        34
#define T0IF                          35
#define GPIE                          36
#define INTE                          37
#define T0IE                          38
#define TMR0IE                        39
#define PEIE                          40
#define GIE                           41
#define PIR1                          42
#define TMR1IF                        43
#define TMR2IF                        44
#define C1IF                          45
#define CMIF                          46
#define CCP1IF                        47
#define CCPIF                         48
#define ECCPIF                        49
#define ADIF                          50
#define T1CON                         51
#define TMR1ON                        52
#define TMR1CS                        53
#define nT1SYNC                       54
#define T1OSCEN                       55
#define T1CKPS0                       56
#define T1CKPS                        57
#define T1CKPS1                       58
#define TMR1GE                        59
#define T1GINV                        60
#define T2CON                         61
#define T2CKPS0                       62
#define T2CKPS                        63
#define T2CKPS1                       64
#define TMR2ON                        65
#define TOUTPS0                       66
#define TOUTPS                        67
#define TOUTPS1                       68
#define TOUTPS2                       69
#define TOUTPS3                       70
#define CCP1CON                       71
#define CCP1M0                        72
#define CCP1M                         73
#define CCP1M1                        74
#define CCP1M2                        75
#define CCP1M3                        76
#define DCB                           77
#define DCB0                          78
#define DCB1                          79
#define P1M                           80
#define PWM1CON                       81
#define PDC0                          82
#define PDC                           83
#define PDC1                          84
#define PDC2                          85
#define PDC3                          86
#define PDC4                          87
#define PDC5                          88
#define PDC6                          89
#define PRSEN                         90
#define PSSBD                         91
#define PSSBD0                        92
#define PSSBD1                        93
#define PSSAC                         94
#define PSSAC0                        95
#define PSSAC1                        96
#define ECCPAS0                       97
#define ECCPAS                        98
#define ECCPAS1                       99
#define ECCPAS2                       100
#define ECCPASE                       101
#define VRCON                         102
#define VR0                           103
#define VR                            104
#define VR1                           105
#define VR2                           106
#define VR3                           107
#define FVREN                         108
#define VRR                           109
#define CMVREN                        110
#define C1VREN                        111
#define CMCON0                        112
#define CMCH                          113
#define C1CH                          114
#define C1R                           115
#define CMR                           116
#define CMPOL                         117
#define C1POL                         118
#define CMOE                          119
#define C1OE                          120
#define COUT                          121
#define C1OUT                         122
#define CMON                          123
#define C1ON                          124
#define CMCON1                        125
#define CMSYNC                        126
#define C1SYNC                        127
#define T1GSS                         128
#define CMHYS                         129
#define C1HYS                         130
#define T1ACS                         131
#define ADCON0                        132
#define ADON                          133
#define GO_nDONE                      134
#define CHS                           135
#define CHS0                          136
#define CHS1                          137
#define CHS2                          138
#define VCFG                          139
#define ADFM                          140
#define OPTION_REG                    141
#define PS                            142
#define PS0                           143
#define PS1                           144
#define PS2                           145
#define PSA                           146
#define T0SE                          147
#define T0CS                          148
#define INTEDG                        149
#define nGPPU                         150
#define TRISIO                        151
#define TRISA0                        152
#define TRISIO0                       153
#define TRISA1                        154
#define TRISIO1                       155
#define TRISA2                        156
#define TRISIO2                       157
#define TRISA3                        158
#define TRISIO3                       159
#define TRISIO4                       160
#define TRISA4                        161
#define TRISIO5                       162
#define TRISA5                        163
#define PIE1                          164
#define TMR1IE                        165
#define TMR2IE                        166
#define C1IE                          167
#define CMIE                          168
#define CCPIE                         169
#define CCP1IE                        170
#define ECCPIE                        171
#define ADIE                          172
#define PCON                          173
#define nBOR                          174
#define nPOR                          175
#define OSCTUNE                       176
#define TUN0                          177
#define TUN                           178
#define TUN1                          179
#define TUN2                          180
#define TUN3                          181
#define TUN4                          182
#define APFCON                        183
#define P1ASEL                        184
#define P1BSEL                        185
#define T1GSEL                        186
#define WPU                           187
#define WPU0                          188
#define WPUA0                         189
#define WPUA1                         190
#define WPU1                          191
#define WPU2                          192
#define WPUA2                         193
#define WPUA4                         194
#define WPU4                          195
#define WPUA5                         196
#define WPU5                          197
#define IOC                           198
#define IOCA0                         199
#define IOC0                          200
#define IOCA1                         201
#define IOC1                          202
#define IOCA2                         203
#define IOC2                          204
#define IOCA3                         205
#define IOC3                          206
#define IOCA4                         207
#define IOC4                          208
#define IOCA5                         209
#define IOC5                          210
#define PMCON1                        211
#define RD                            212
#define WR                            213
#define WREN                          214
#define PMADRL                        215
#define PMADRL0                       216
#define PMADRL1                       217
#define PMADRL2                       218
#define PMADRL3                       219
#define PMADRL4                       220
#define PMADRL5                       221
#define PMADRL6                       222
#define PMADRL7                       223
#define PMADRH                        224
#define PMADRH0                       225
#define PMADRH1                       226
#define PMADRH2                       227
#define PMDATL                        228
#define PMDATL0                       229
#define PMDATL1                       230
#define PMDATL2                       231
#define PMDATL3                       232
#define PMDATL4                       233
#define PMDATL5                       234
#define PMDATL6                       235
#define PMDATL7                       236
#define PMDATH                        237
#define ANSEL                         238
#define ANS0                          239
#define ANS                           240
#define ANS1                          241
#define ANS2                          242
#define ANS3                          243
#define ADCS0                         244
#define ADCS                          245
#define ADCS1                         246
#define ADCS2                         247

#endif // _PIC12F617_H_
