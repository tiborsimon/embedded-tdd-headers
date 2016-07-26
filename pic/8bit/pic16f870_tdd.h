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

#ifndef _PIC16F870_H_
#define _PIC16F870_H_

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
#define RC3                           32
#define RC4                           33
#define RC5                           34
#define RC6                           35
#define RC7                           36
#define PCLATH                        37
#define INTCON                        38
#define RBIF                          39
#define INTF                          40
#define T0IF                          41
#define TMR0IF                        42
#define RBIE                          43
#define INTE                          44
#define T0IE                          45
#define TMR0IE                        46
#define PEIE                          47
#define GIE                           48
#define PIR1                          49
#define TMR1IF                        50
#define TMR2IF                        51
#define CCP1IF                        52
#define TXIF                          53
#define RCIF                          54
#define ADIF                          55
#define PIR2                          56
#define EEIF                          57
#define T1CON                         58
#define TMR1ON                        59
#define TMR1CS                        60
#define T1SYNC                        61
#define nT1SYNC                       62
#define T1INSYNC                      63
#define T1OSCEN                       64
#define T1CKPS0                       65
#define T1CKPS                        66
#define T1CKPS1                       67
#define T2CON                         68
#define T2CKPS0                       69
#define T2CKPS                        70
#define T2CKPS1                       71
#define TMR2ON                        72
#define TOUTPS0                       73
#define TOUTPS                        74
#define TOUTPS1                       75
#define TOUTPS2                       76
#define TOUTPS3                       77
#define CCP1CON                       78
#define CCP1M0                        79
#define CCP1M                         80
#define CCP1M1                        81
#define CCP1M2                        82
#define CCP1M3                        83
#define CCP1Y                         84
#define CCP1X                         85
#define RCSTA                         86
#define RCD8                          87
#define RX9D                          88
#define OERR                          89
#define FERR                          90
#define ADDEN                         91
#define CREN                          92
#define SREN                          93
#define RC8_9                         94
#define RC9                           95
#define RX9                           96
#define nRC8                          97
#define SPEN                          98
#define ADCON0                        99
#define ADON                          100
#define nDONE                         101
#define GO_nDONE                      102
#define GO_DONE                       103
#define GO                            104
#define CHS                           105
#define CHS0                          106
#define CHS1                          107
#define CHS2                          108
#define ADCS                          109
#define ADCS0                         110
#define ADCS1                         111
#define OPTION_REG                    112
#define PS                            113
#define PS0                           114
#define PS1                           115
#define PS2                           116
#define PSA                           117
#define T0SE                          118
#define T0CS                          119
#define INTEDG                        120
#define nRBPU                         121
#define TRISA                         122
#define TRISA0                        123
#define TRISA1                        124
#define TRISA2                        125
#define TRISA3                        126
#define TRISA4                        127
#define TRISA5                        128
#define TRISB                         129
#define TRISB0                        130
#define TRISB1                        131
#define TRISB2                        132
#define TRISB3                        133
#define TRISB4                        134
#define TRISB5                        135
#define TRISB6                        136
#define TRISB7                        137
#define TRISC                         138
#define TRISC0                        139
#define TRISC1                        140
#define TRISC2                        141
#define TRISC3                        142
#define TRISC4                        143
#define TRISC5                        144
#define TRISC6                        145
#define TRISC7                        146
#define PIE1                          147
#define TMR1IE                        148
#define TMR2IE                        149
#define CCP1IE                        150
#define TXIE                          151
#define RCIE                          152
#define ADIE                          153
#define PIE2                          154
#define EEIE                          155
#define PCON                          156
#define nBOR                          157
#define nBO                           158
#define nPOR                          159
#define TXSTA                         160
#define TXD8                          161
#define TX9D                          162
#define TRMT                          163
#define BRGH                          164
#define SYNC                          165
#define TXEN                          166
#define TX8_9                         167
#define TX9                           168
#define nTX8                          169
#define CSRC                          170
#define ADCON1                        171
#define PCFG0                         172
#define PCFG                          173
#define PCFG1                         174
#define PCFG2                         175
#define PCFG3                         176
#define ADFM                          177
#define EECON1                        178
#define RD                            179
#define WR                            180
#define WREN                          181
#define WRERR                         182
#define EEPGD                         183

#endif // _PIC16F870_H_
