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

#ifndef _PIC12F615_H_
#define _PIC12F615_H_

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
#define T1IF                          43
#define TMR1IF                        44
#define T2IF                          45
#define TMR2IF                        46
#define C1IF                          47
#define CMIF                          48
#define CCP1IF                        49
#define ECCPIF                        50
#define ADIF                          51
#define T1CON                         52
#define TMR1ON                        53
#define TMR1CS                        54
#define nT1SYNC                       55
#define T1OSCEN                       56
#define T1CKPS0                       57
#define T1CKPS                        58
#define T1CKPS1                       59
#define TMR1GE                        60
#define T1GINV                        61
#define T2CON                         62
#define T2CKPS0                       63
#define T2CKPS                        64
#define T2CKPS1                       65
#define T2ON                          66
#define TMR2ON                        67
#define TOUTPS0                       68
#define TOUTPS                        69
#define TOUTPS1                       70
#define TOUTPS2                       71
#define TOUTPS3                       72
#define CCP1CON                       73
#define CCP1M0                        74
#define CCP1M                         75
#define CCP1M1                        76
#define CCP1M2                        77
#define CCP1M3                        78
#define DCB                           79
#define DC1B0                         80
#define DC1B1                         81
#define P1M                           82
#define PWM1CON                       83
#define PDC0                          84
#define PDC                           85
#define PDC1                          86
#define PDC2                          87
#define PDC3                          88
#define PDC4                          89
#define PDC5                          90
#define PDC6                          91
#define PRSEN                         92
#define PSSBD                         93
#define PSSBD0                        94
#define PSSBD1                        95
#define PSSAC                         96
#define PSSAC0                        97
#define PSSAC1                        98
#define ECCPAS0                       99
#define ECCPAS                        100
#define ECCPAS1                       101
#define ECCPAS2                       102
#define ECCPASE                       103
#define VRCON                         104
#define VR0                           105
#define VR                            106
#define VR1                           107
#define VR2                           108
#define VR3                           109
#define VP6EN                         110
#define FBREN                         111
#define FVREN                         112
#define VRR                           113
#define CMVREN                        114
#define C1VREN                        115
#define CMCON0                        116
#define CMCH                          117
#define C1CH                          118
#define C1CH0                         119
#define C1R                           120
#define CMR                           121
#define CMPOL                         122
#define C1POL                         123
#define CMOE                          124
#define C1OE                          125
#define COUT                          126
#define C1OUT                         127
#define CMON                          128
#define C1ON                          129
#define CMCON1                        130
#define CMSYNC                        131
#define C1SYNC                        132
#define T1GSS                         133
#define CMHYS                         134
#define C1HYS                         135
#define T1ACS                         136
#define ADCON0                        137
#define ADON                          138
#define nDONE                         139
#define GO_nDONE                      140
#define GO_DONE                       141
#define GO                            142
#define CHS                           143
#define CHS0                          144
#define CHS1                          145
#define CHS2                          146
#define VCFG                          147
#define ADFM                          148
#define OPTION_REG                    149
#define PS                            150
#define PS0                           151
#define PS1                           152
#define PS2                           153
#define PSA                           154
#define T0SE                          155
#define T0CS                          156
#define INTEDG                        157
#define nGPPU                         158
#define TRISIO                        159
#define TRISIO0                       160
#define TRISIO1                       161
#define TRISIO2                       162
#define TRISIO3                       163
#define TRISIO4                       164
#define TRISIO5                       165
#define PIE1                          166
#define T1IE                          167
#define TMR1IE                        168
#define T2IE                          169
#define TMR2IE                        170
#define C1IE                          171
#define CMIE                          172
#define CCP1IE                        173
#define ECCPIE                        174
#define ADIE                          175
#define PCON                          176
#define nBOR                          177
#define nBOD                          178
#define nPOR                          179
#define OSCTUNE                       180
#define TUN0                          181
#define TUN                           182
#define TUN1                          183
#define TUN2                          184
#define TUN3                          185
#define TUN4                          186
#define APFCON                        187
#define P1ASEL                        188
#define P1BSEL                        189
#define T1GSEL                        190
#define WPU                           191
#define WPUA0                         192
#define WPU0                          193
#define WPUA1                         194
#define WPU1                          195
#define WPUA2                         196
#define WPU2                          197
#define WPUA4                         198
#define WPU4                          199
#define WPUA5                         200
#define WPU5                          201
#define IOC                           202
#define IOCA0                         203
#define IOC0                          204
#define IOCA1                         205
#define IOC1                          206
#define IOCA2                         207
#define IOC2                          208
#define IOCA3                         209
#define IOC3                          210
#define IOCA4                         211
#define IOC4                          212
#define IOCA5                         213
#define IOC5                          214
#define ANSEL                         215
#define ANS                           216
#define AN0                           217
#define AN1                           218
#define AN2                           219
#define AN3                           220
#define ADCS0                         221
#define ADCS                          222
#define ADCS1                         223
#define ADCS2                         224

#endif // _PIC12F615_H_
