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

#ifndef _PIC16LF871_H_
#define _PIC16LF871_H_

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
#define PORTD                         37
#define RD0                           38
#define RD1                           39
#define RD2                           40
#define RD3                           41
#define RD4                           42
#define RD5                           43
#define RD6                           44
#define RD7                           45
#define PORTE                         46
#define RE0                           47
#define RE1                           48
#define RE2                           49
#define PCLATH                        50
#define INTCON                        51
#define RBIF                          52
#define INTF                          53
#define T0IF                          54
#define TMR0IF                        55
#define RBIE                          56
#define INTE                          57
#define T0IE                          58
#define TMR0IE                        59
#define PEIE                          60
#define GIE                           61
#define PIR1                          62
#define TMR1IF                        63
#define TMR2IF                        64
#define CCP1IF                        65
#define TXIF                          66
#define RCIF                          67
#define ADIF                          68
#define PSPIF                         69
#define PIR2                          70
#define EEIF                          71
#define T1CON                         72
#define TMR1ON                        73
#define TMR1CS                        74
#define T1SYNC                        75
#define nT1SYNC                       76
#define T1INSYNC                      77
#define T1OSCEN                       78
#define T1CKPS0                       79
#define T1CKPS                        80
#define T1CKPS1                       81
#define T2CON                         82
#define T2CKPS0                       83
#define T2CKPS                        84
#define T2CKPS1                       85
#define TMR2ON                        86
#define TOUTPS0                       87
#define TOUTPS                        88
#define TOUTPS1                       89
#define TOUTPS2                       90
#define TOUTPS3                       91
#define CCP1CON                       92
#define CCP1M0                        93
#define CCP1M                         94
#define CCP1M1                        95
#define CCP1M2                        96
#define CCP1M3                        97
#define CCP1Y                         98
#define CCP1X                         99
#define RCSTA                         100
#define RCD8                          101
#define RX9D                          102
#define OERR                          103
#define FERR                          104
#define ADDEN                         105
#define CREN                          106
#define SREN                          107
#define RC8_9                         108
#define RC9                           109
#define RX9                           110
#define nRC8                          111
#define SPEN                          112
#define ADCON0                        113
#define ADON                          114
#define nDONE                         115
#define GO_nDONE                      116
#define GO_DONE                       117
#define GO                            118
#define CHS                           119
#define CHS0                          120
#define CHS1                          121
#define CHS2                          122
#define ADCS                          123
#define ADCS0                         124
#define ADCS1                         125
#define OPTION_REG                    126
#define PS                            127
#define PS0                           128
#define PS1                           129
#define PS2                           130
#define PSA                           131
#define T0SE                          132
#define T0CS                          133
#define INTEDG                        134
#define nRBPU                         135
#define TRISA                         136
#define TRISA0                        137
#define TRISA1                        138
#define TRISA2                        139
#define TRISA3                        140
#define TRISA4                        141
#define TRISA5                        142
#define TRISB                         143
#define TRISB0                        144
#define TRISB1                        145
#define TRISB2                        146
#define TRISB3                        147
#define TRISB4                        148
#define TRISB5                        149
#define TRISB6                        150
#define TRISB7                        151
#define TRISC                         152
#define TRISC0                        153
#define TRISC1                        154
#define TRISC2                        155
#define TRISC3                        156
#define TRISC4                        157
#define TRISC5                        158
#define TRISC6                        159
#define TRISC7                        160
#define TRISD                         161
#define TRISD0                        162
#define TRISD1                        163
#define TRISD2                        164
#define TRISD3                        165
#define TRISD4                        166
#define TRISD5                        167
#define TRISD6                        168
#define TRISD7                        169
#define TRISE                         170
#define TRISE0                        171
#define TRISE1                        172
#define TRISE2                        173
#define PSPMODE                       174
#define IBOV                          175
#define OBF                           176
#define IBF                           177
#define PIE1                          178
#define TMR1IE                        179
#define TMR2IE                        180
#define CCP1IE                        181
#define TXIE                          182
#define RCIE                          183
#define ADIE                          184
#define PSPIE                         185
#define PIE2                          186
#define EEIE                          187
#define PCON                          188
#define nBOR                          189
#define nBO                           190
#define nPOR                          191
#define TXSTA                         192
#define TXD8                          193
#define TX9D                          194
#define TRMT                          195
#define BRGH                          196
#define SYNC                          197
#define TXEN                          198
#define TX8_9                         199
#define TX9                           200
#define nTX8                          201
#define CSRC                          202
#define ADCON1                        203
#define PCFG0                         204
#define PCFG                          205
#define PCFG1                         206
#define PCFG2                         207
#define PCFG3                         208
#define ADFM                          209
#define EECON1                        210
#define RD                            211
#define WR                            212
#define WREN                          213
#define WRERR                         214
#define EEPGD                         215

#endif // _PIC16LF871_H_
