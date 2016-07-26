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

#ifndef _PIC12F609_H_
#define _PIC12F609_H_

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
#define C1IF                          45
#define CMIF                          46
#define T1CON                         47
#define TMR1ON                        48
#define TMR1CS                        49
#define nT1SYNC                       50
#define T1OSCEN                       51
#define T1CKPS0                       52
#define T1CKPS                        53
#define T1CKPS1                       54
#define TMR1GE                        55
#define T1GINV                        56
#define VRCON                         57
#define VR0                           58
#define VR                            59
#define VR1                           60
#define VR2                           61
#define VR3                           62
#define VP6EN                         63
#define FBREN                         64
#define FVREN                         65
#define VRR                           66
#define CMVREN                        67
#define C1VREN                        68
#define CMCON0                        69
#define CMCH                          70
#define C1CH                          71
#define C1CH0                         72
#define C1R                           73
#define CMR                           74
#define CMPOL                         75
#define C1POL                         76
#define CMOE                          77
#define C1OE                          78
#define COUT                          79
#define C1OUT                         80
#define CMON                          81
#define C1ON                          82
#define CMCON1                        83
#define CMSYNC                        84
#define C1SYNC                        85
#define T1GSS                         86
#define CMHYS                         87
#define C1HYS                         88
#define T1ACS                         89
#define OPTION_REG                    90
#define PS                            91
#define PS0                           92
#define PS1                           93
#define PS2                           94
#define PSA                           95
#define T0SE                          96
#define T0CS                          97
#define INTEDG                        98
#define nGPPU                         99
#define TRISIO                        100
#define TRISA0                        101
#define TRISIO0                       102
#define TRISA1                        103
#define TRISIO1                       104
#define TRISA2                        105
#define TRISIO2                       106
#define TRISA3                        107
#define TRISIO3                       108
#define TRISIO4                       109
#define TRISA4                        110
#define TRISIO5                       111
#define TRISA5                        112
#define PIE1                          113
#define T1IE                          114
#define TMR1IE                        115
#define C1IE                          116
#define CMIE                          117
#define PCON                          118
#define nBOR                          119
#define nBOD                          120
#define nPOR                          121
#define OSCTUNE                       122
#define TUN0                          123
#define TUN                           124
#define TUN1                          125
#define TUN2                          126
#define TUN3                          127
#define TUN4                          128
#define WPU                           129
#define WPUA0                         130
#define WPU0                          131
#define WPUA1                         132
#define WPU1                          133
#define WPUA2                         134
#define WPU2                          135
#define WPUA4                         136
#define WPU4                          137
#define WPUA5                         138
#define WPU5                          139
#define IOC                           140
#define IOCA0                         141
#define IOC0                          142
#define IOCA1                         143
#define IOC1                          144
#define IOCA2                         145
#define IOC2                          146
#define IOCA3                         147
#define IOC3                          148
#define IOCA4                         149
#define IOC4                          150
#define IOCA5                         151
#define IOC5                          152
#define ANSEL                         153
#define ANS0                          154
#define ANS                           155
#define ANS1                          156
#define ANS3                          157
#define ADCS                          158

#endif // _PIC12F609_H_
