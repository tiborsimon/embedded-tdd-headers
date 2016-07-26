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

#ifndef _PIC16F610_H_
#define _PIC16F610_H_

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
#define PORTC                         19
#define RC0                           20
#define RC1                           21
#define RC2                           22
#define RC3                           23
#define RC4                           24
#define RC5                           25
#define PCLATH                        26
#define INTCON                        27
#define RAIF                          28
#define INTF                          29
#define TMR0IF                        30
#define T0IF                          31
#define RAIE                          32
#define INTE                          33
#define TMR0IE                        34
#define T0IE                          35
#define PEIE                          36
#define GIE                           37
#define PIR1                          38
#define T1IF                          39
#define TMR1IF                        40
#define C1IF                          41
#define C2IF                          42
#define T1CON                         43
#define TMR1ON                        44
#define TMR1CS                        45
#define nT1SYNC                       46
#define T1OSCEN                       47
#define T1CKPS0                       48
#define T1CKPS                        49
#define T1CKPS1                       50
#define TMR1GE                        51
#define T1GINV                        52
#define VRCON                         53
#define VR0                           54
#define VR                            55
#define VR1                           56
#define VR2                           57
#define VR3                           58
#define VP6EN                         59
#define FVREN                         60
#define VRR                           61
#define C2VREN                        62
#define C1VREN                        63
#define CM1CON0                       64
#define C1CH                          65
#define C1CH0                         66
#define C1CH1                         67
#define C1R                           68
#define C1POL                         69
#define C1OE                          70
#define C1OUT                         71
#define C1ON                          72
#define CM2CON0                       73
#define C2CH0                         74
#define C2CH                          75
#define C2CH1                         76
#define C2R                           77
#define C2POL                         78
#define C2OE                          79
#define C2OUT                         80
#define C2ON                          81
#define CM2CON1                       82
#define C2SYNC                        83
#define T1GSS                         84
#define C2HYS                         85
#define C1HYS                         86
#define T1ACS                         87
#define MC2OUT                        88
#define MC1OUT                        89
#define OPTION_REG                    90
#define PS                            91
#define PS0                           92
#define PS1                           93
#define PS2                           94
#define PSA                           95
#define T0SE                          96
#define T0CS                          97
#define INTEDG                        98
#define nRAPU                         99
#define TRISA                         100
#define TRISA0                        101
#define TRISA1                        102
#define TRISA2                        103
#define TRISA3                        104
#define TRISA4                        105
#define TRISA5                        106
#define TRISC                         107
#define TRISC0                        108
#define TRISC1                        109
#define TRISC2                        110
#define TRISC3                        111
#define TRISC4                        112
#define TRISC5                        113
#define PIE1                          114
#define T1IE                          115
#define TMR1IE                        116
#define C1IE                          117
#define C2IE                          118
#define PCON                          119
#define nBOR                          120
#define nBOD                          121
#define nPOR                          122
#define OSCTUNE                       123
#define TUN0                          124
#define TUN                           125
#define TUN1                          126
#define TUN2                          127
#define TUN3                          128
#define TUN4                          129
#define ANSEL                         130
#define ANS0                          131
#define ANS1                          132
#define ANS4                          133
#define ANS5                          134
#define ANS6                          135
#define ANS7                          136
#define WPUA                          137
#define WPUA0                         138
#define WPU0                          139
#define WPUA1                         140
#define WPU1                          141
#define WPUA2                         142
#define WPU2                          143
#define WPUA4                         144
#define WPU4                          145
#define WPUA5                         146
#define WPU5                          147
#define IOCA                          148
#define IOCA0                         149
#define IOC0                          150
#define IOCA1                         151
#define IOC1                          152
#define IOCA2                         153
#define IOC2                          154
#define IOCA3                         155
#define IOC3                          156
#define IOCA4                         157
#define IOC4                          158
#define IOCA5                         159
#define IOC5                          160
#define SRCON0                        161
#define SRCLKEN                       162
#define PULSR                         163
#define PULSS                         164
#define C2REN                         165
#define C1SEN                         166
#define SR                            167
#define SR0                           168
#define SR1                           169
#define SRCON1                        170
#define SRCS                          171
#define SRCS0                         172
#define SRCS1                         173

#endif // _PIC16F610_H_
