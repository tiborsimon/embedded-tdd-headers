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

#ifndef _PIC16C64A_H_
#define _PIC16C64A_H_

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
#define INTCON                        50
#define RBIF                          51
#define INTF                          52
#define T0IF                          53
#define TMR0IF                        54
#define RBIE                          55
#define INTE                          56
#define T0IE                          57
#define TMR0IE                        58
#define PEIE                          59
#define GIE                           60
#define PIR1                          61
#define T1IF                          62
#define TMR1IF                        63
#define T2IF                          64
#define TMR2IF                        65
#define CCP1IF                        66
#define SSPIF                         67
#define PSPIF                         68
#define T1CON                         69
#define TMR1ON                        70
#define TMR1CS                        71
#define nT1SYNC                       72
#define T1INSYNC                      73
#define T1OSCEN                       74
#define T1CKPS0                       75
#define T1CKPS                        76
#define T1CKPS1                       77
#define T2CON                         78
#define T2CKPS0                       79
#define T2CKPS                        80
#define T2CKPS1                       81
#define TMR2ON                        82
#define TOUTPS0                       83
#define TOUTPS                        84
#define TOUTPS1                       85
#define TOUTPS2                       86
#define TOUTPS3                       87
#define SSPCON                        88
#define SSPM0                         89
#define SSPM                          90
#define SSPM1                         91
#define SSPM2                         92
#define SSPM3                         93
#define CKP                           94
#define SSPEN                         95
#define SSPOV                         96
#define WCOL                          97
#define CCP1CON                       98
#define CCP1M0                        99
#define CCP1M                         100
#define CCP1M1                        101
#define CCP1M2                        102
#define CCP1M3                        103
#define CCP1Y                         104
#define DC1B                          105
#define CCP1X                         106
#define OPTION_REG                    107
#define PS                            108
#define PS0                           109
#define PS1                           110
#define PS2                           111
#define PSA                           112
#define T0SE                          113
#define T0CS                          114
#define INTEDG                        115
#define nRBPU                         116
#define TRISA                         117
#define TRISA0                        118
#define TRISA1                        119
#define TRISA2                        120
#define TRISA3                        121
#define TRISA4                        122
#define TRISA5                        123
#define TRISB                         124
#define TRISB0                        125
#define TRISB1                        126
#define TRISB2                        127
#define TRISB3                        128
#define TRISB4                        129
#define TRISB5                        130
#define TRISB6                        131
#define TRISB7                        132
#define TRISC                         133
#define TRISC0                        134
#define TRISC1                        135
#define TRISC2                        136
#define TRISC3                        137
#define TRISC4                        138
#define TRISC5                        139
#define TRISC6                        140
#define TRISC7                        141
#define TRISD                         142
#define TRISD0                        143
#define TRISD1                        144
#define TRISD2                        145
#define TRISD3                        146
#define TRISD4                        147
#define TRISD5                        148
#define TRISD6                        149
#define TRISD7                        150
#define TRISE                         151
#define TRISE0                        152
#define TRISE1                        153
#define TRISE2                        154
#define PSPMODE                       155
#define IBOV                          156
#define OBF                           157
#define IBF                           158
#define PIE1                          159
#define TMR1IE                        160
#define TMR2IE                        161
#define CCP1IE                        162
#define SSPIE                         163
#define PSPIE                         164
#define PCON                          165
#define nBOR                          166
#define nBO                           167
#define nPOR                          168
#define SSPSTAT                       169
#define BF                            170
#define UA                            171
#define nW                            172
#define nWRITE                        173
#define R_nW                          174
#define READ_WRITE                    175
#define I2C_READ                      176
#define R_W                           177
#define R                             178
#define I2C_START                     179
#define S                             180
#define P                             181
#define I2C_STOP                      182
#define D_nA                          183
#define D_A                           184
#define D                             185
#define nADDRESS                      186
#define nA                            187
#define I2C_DATA                      188
#define DATA_ADDRESS                  189

#endif // _PIC16C64A_H_
