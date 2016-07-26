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

#ifndef _PIC16F631_H_
#define _PIC16F631_H_

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
#define RB4                           20
#define RB5                           21
#define RB6                           22
#define RB7                           23
#define PORTC                         24
#define RC0                           25
#define RC1                           26
#define RC2                           27
#define RC3                           28
#define RC4                           29
#define RC5                           30
#define RC6                           31
#define RC7                           32
#define INTCON                        33
#define RABIF                         34
#define INTF                          35
#define T0IF                          36
#define RABIE                         37
#define INTE                          38
#define T0IE                          39
#define PEIE                          40
#define GIE                           41
#define PIR1                          42
#define T1IF                          43
#define TMR1IF                        44
#define PIR2                          45
#define EEIF                          46
#define C1IF                          47
#define C2IF                          48
#define OSFIF                         49
#define T1CON                         50
#define TMR1ON                        51
#define TMR1CS                        52
#define nT1SYNC                       53
#define T1OSCEN                       54
#define T1CKPS0                       55
#define T1CKPS                        56
#define T1CKPS1                       57
#define TMR1GE                        58
#define T1GINV                        59
#define OPTION_REG                    60
#define PS                            61
#define PS0                           62
#define PS1                           63
#define PS2                           64
#define PSA                           65
#define T0SE                          66
#define T0CS                          67
#define INTEDG                        68
#define nRABPU                        69
#define TRISA                         70
#define TRISA0                        71
#define TRISA1                        72
#define TRISA2                        73
#define TRISA3                        74
#define TRISA4                        75
#define TRISA5                        76
#define TRISB                         77
#define TRISB4                        78
#define TRISB5                        79
#define TRISB6                        80
#define TRISB7                        81
#define TRISC                         82
#define TRISC0                        83
#define TRISC1                        84
#define TRISC2                        85
#define TRISC3                        86
#define TRISC4                        87
#define TRISC5                        88
#define TRISC6                        89
#define TRISC7                        90
#define PIE1                          91
#define T1IE                          92
#define TMR1IE                        93
#define PIE2                          94
#define EEIE                          95
#define C1IE                          96
#define C2IE                          97
#define OSFIE                         98
#define PCON                          99
#define BOR                           100
#define nBOR                          101
#define POR                           102
#define nPOR                          103
#define SBOREN                        104
#define ULPWUE                        105
#define OSCCON                        106
#define SCS                           107
#define LTS                           108
#define HTS                           109
#define OSTS                          110
#define IRCF                          111
#define IRCF0                         112
#define IRCF1                         113
#define IRCF2                         114
#define OSCTUNE                       115
#define TUN0                          116
#define TUN                           117
#define TUN1                          118
#define TUN2                          119
#define TUN3                          120
#define TUN4                          121
#define WPUA                          122
#define WPUA0                         123
#define WPU0                          124
#define WPUA1                         125
#define WPU1                          126
#define WPUA2                         127
#define WPU2                          128
#define WPUA4                         129
#define WPU4                          130
#define WPUA5                         131
#define WPU5                          132
#define IOCA                          133
#define IOCA0                         134
#define IOC0                          135
#define IOCA1                         136
#define IOC1                          137
#define IOCA2                         138
#define IOC2                          139
#define IOCA3                         140
#define IOC3                          141
#define IOCA4                         142
#define IOC4                          143
#define IOCA5                         144
#define IOC5                          145
#define WDTCON                        146
#define SWDTEN                        147
#define WDTPS                         148
#define WDTPS0                        149
#define WDTPS1                        150
#define WDTPS2                        151
#define WDTPS3                        152
#define WPUB                          153
#define WPUB4                         154
#define WPUB5                         155
#define WPUB6                         156
#define WPUB7                         157
#define IOCB                          158
#define IOCB4                         159
#define IOCB5                         160
#define IOCB6                         161
#define IOCB7                         162
#define VRCON                         163
#define VR0                           164
#define VR                            165
#define VR1                           166
#define VR2                           167
#define VR3                           168
#define VP6EN                         169
#define VRR                           170
#define C2VREN                        171
#define C1VREN                        172
#define CM1CON0                       173
#define C1CH                          174
#define C1CH0                         175
#define C1CH1                         176
#define C1R                           177
#define C1POL                         178
#define C1OE                          179
#define C1OUT                         180
#define C1ON                          181
#define CM2CON0                       182
#define C2CH0                         183
#define C2CH                          184
#define C2CH1                         185
#define C2R                           186
#define C2POL                         187
#define C2OE                          188
#define C2OUT                         189
#define C2ON                          190
#define CM2CON1                       191
#define C2SYNC                        192
#define T1GSS                         193
#define MC2OUT                        194
#define MC1OUT                        195
#define ANSEL                         196
#define ANS0                          197
#define ANS1                          198
#define ANS4                          199
#define ANS5                          200
#define ANS6                          201
#define ANS7                          202
#define EECON1                        203
#define RD                            204
#define WR                            205
#define WREN                          206
#define WRERR                         207
#define SRCON                         208
#define PULSR                         209
#define PULSS                         210
#define C2REN                         211
#define C1SEN                         212
#define SR                            213
#define SR0                           214
#define SR1                           215

#endif // _PIC16F631_H_
