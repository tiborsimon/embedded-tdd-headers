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

#ifndef _PIC12F683_H_
#define _PIC12F683_H_

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
#define GP0                           13
#define GP1                           14
#define GP2                           15
#define GP3                           16
#define GP4                           17
#define GP5                           18
#define PCLATH                        19
#define INTCON                        20
#define GPIF                          21
#define INTF                          22
#define TMR0IF                        23
#define T0IF                          24
#define GPIE                          25
#define INTE                          26
#define T0IE                          27
#define TMR0IE                        28
#define PEIE                          29
#define GIE                           30
#define PIR1                          31
#define T1IF                          32
#define TMR1IF                        33
#define T2IF                          34
#define TMR2IF                        35
#define OSFIF                         36
#define CMIF                          37
#define CCP1IF                        38
#define ADIF                          39
#define EEIF                          40
#define T1CON                         41
#define TMR1ON                        42
#define TMR1CS                        43
#define nT1SYNC                       44
#define T1OSCEN                       45
#define T1CKPS0                       46
#define T1CKPS                        47
#define T1CKPS1                       48
#define T1GE                          49
#define TMR1GE                        50
#define T1GINV                        51
#define T2CON                         52
#define T2CKPS0                       53
#define T2CKPS                        54
#define T2CKPS1                       55
#define TMR2ON                        56
#define TOUTPS0                       57
#define TOUTPS                        58
#define TOUTPS1                       59
#define TOUTPS2                       60
#define TOUTPS3                       61
#define CCP1CON                       62
#define CCP1M0                        63
#define CCP1M                         64
#define CCP1M1                        65
#define CCP1M2                        66
#define CCP1M3                        67
#define DC1B                          68
#define DC1B0                         69
#define DC1B1                         70
#define WDTCON                        71
#define SWDTEN                        72
#define WDTPS                         73
#define WDTPS0                        74
#define WDTPS1                        75
#define WDTPS2                        76
#define WDTPS3                        77
#define CMCON0                        78
#define CM                            79
#define CM0                           80
#define CM1                           81
#define CM2                           82
#define CIS                           83
#define CINV                          84
#define COUT                          85
#define CMCON1                        86
#define CMSYNC                        87
#define T1GSS                         88
#define ADCON0                        89
#define ADON                          90
#define nDONE                         91
#define GO_nDONE                      92
#define GO_DONE                       93
#define GO                            94
#define CHS                           95
#define CHS0                          96
#define CHS1                          97
#define CHS2                          98
#define VCFG                          99
#define ADFM                          100
#define OPTION_REG                    101
#define PS                            102
#define PS0                           103
#define PS1                           104
#define PS2                           105
#define PSA                           106
#define T0SE                          107
#define T0CS                          108
#define INTEDG                        109
#define nGPPU                         110
#define TRISIO                        111
#define TRISIO0                       112
#define TRISIO1                       113
#define TRISIO2                       114
#define TRISIO3                       115
#define TRISIO4                       116
#define TRISIO5                       117
#define PIE1                          118
#define T1IE                          119
#define TMR1IE                        120
#define T2IE                          121
#define TMR2IE                        122
#define OSFIE                         123
#define CMIE                          124
#define CCP1IE                        125
#define ADIE                          126
#define EEIE                          127
#define PCON                          128
#define nBOD                          129
#define nPOR                          130
#define SBODEN                        131
#define ULPWUE                        132
#define OSCCON                        133
#define SCS                           134
#define LTS                           135
#define HTS                           136
#define OSTS                          137
#define IRCF                          138
#define IRCF0                         139
#define IRCF1                         140
#define IRCF2                         141
#define OSCTUNE                       142
#define TUN0                          143
#define TUN                           144
#define TUN1                          145
#define TUN2                          146
#define TUN3                          147
#define TUN4                          148
#define WPU                           149
#define WPU0                          150
#define WPUA0                         151
#define WPUA1                         152
#define WPU1                          153
#define WPU2                          154
#define WPUA2                         155
#define WPUA4                         156
#define WPU4                          157
#define WPUA5                         158
#define WPU5                          159
#define IOC                           160
#define IOCA0                         161
#define IOC0                          162
#define IOCA1                         163
#define IOC1                          164
#define IOCA2                         165
#define IOC2                          166
#define IOCA3                         167
#define IOC3                          168
#define IOCA4                         169
#define IOC4                          170
#define IOCA5                         171
#define IOC5                          172
#define VRCON                         173
#define VR0                           174
#define VR                            175
#define VR1                           176
#define VR2                           177
#define VR3                           178
#define VRR                           179
#define VREN                          180
#define EEDAT                         181
#define EECON1                        182
#define RD                            183
#define WR                            184
#define WREN                          185
#define WRERR                         186
#define ANSEL                         187
#define ANS0                          188
#define ANS                           189
#define ANS1                          190
#define ANS2                          191
#define ANS3                          192
#define ADCS0                         193
#define ADCS                          194
#define ADCS1                         195
#define ADCS2                         196

#endif // _PIC12F683_H_
