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

#ifndef _PIC16CR63_H_
#define _PIC16CR63_H_

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
#define INTCON                        37
#define RBIF                          38
#define INTF                          39
#define T0IF                          40
#define TMR0IF                        41
#define RBIE                          42
#define INTE                          43
#define T0IE                          44
#define TMR0IE                        45
#define PEIE                          46
#define GIE                           47
#define PIR1                          48
#define TMR1IF                        49
#define TMR2IF                        50
#define CCP1IF                        51
#define SSPIF                         52
#define TXIF                          53
#define RCIF                          54
#define PIR2                          55
#define CCP2IF                        56
#define T1CON                         57
#define TMR1ON                        58
#define TMR1CS                        59
#define nT1SYNC                       60
#define T1INSYNC                      61
#define T1OSCEN                       62
#define T1CKPS0                       63
#define T1CKPS                        64
#define T1CKPS1                       65
#define T2CON                         66
#define T2CKPS0                       67
#define T2CKPS                        68
#define T2CKPS1                       69
#define TMR2ON                        70
#define TOUTPS0                       71
#define TOUTPS                        72
#define TOUTPS1                       73
#define TOUTPS2                       74
#define TOUTPS3                       75
#define SSPCON                        76
#define SSPM0                         77
#define SSPM                          78
#define SSPM1                         79
#define SSPM2                         80
#define SSPM3                         81
#define CKP                           82
#define SSPEN                         83
#define SSPOV                         84
#define WCOL                          85
#define CCP1CON                       86
#define CCP1M0                        87
#define CCP1M                         88
#define CCP1M1                        89
#define CCP1M2                        90
#define CCP1M3                        91
#define CCP1Y                         92
#define DC1B                          93
#define CCP1X                         94
#define RCSTA                         95
#define RCD8                          96
#define RX9D                          97
#define OERR                          98
#define FERR                          99
#define CREN                          100
#define SREN                          101
#define RC8_9                         102
#define RC9                           103
#define RX9                           104
#define nRC8                          105
#define SPEN                          106
#define CCP2CON                       107
#define CCP2M                         108
#define CCP2M0                        109
#define CCP2M1                        110
#define CCP2M2                        111
#define CCP2M3                        112
#define CCP2Y                         113
#define DC2B                          114
#define CCP2X                         115
#define OPTION_REG                    116
#define PS                            117
#define PS0                           118
#define PS1                           119
#define PS2                           120
#define PSA                           121
#define T0SE                          122
#define T0CS                          123
#define INTEDG                        124
#define nRBPU                         125
#define TRISA                         126
#define TRISA0                        127
#define TRISA1                        128
#define TRISA2                        129
#define TRISA3                        130
#define TRISA4                        131
#define TRISA5                        132
#define TRISB                         133
#define TRISB0                        134
#define TRISB1                        135
#define TRISB2                        136
#define TRISB3                        137
#define TRISB4                        138
#define TRISB5                        139
#define TRISB6                        140
#define TRISB7                        141
#define TRISC                         142
#define TRISC0                        143
#define TRISC1                        144
#define TRISC2                        145
#define TRISC3                        146
#define TRISC4                        147
#define TRISC5                        148
#define TRISC6                        149
#define TRISC7                        150
#define PIE1                          151
#define TMR1IE                        152
#define TMR2IE                        153
#define CCP1IE                        154
#define SSPIE                         155
#define TXIE                          156
#define RCIE                          157
#define PIE2                          158
#define CCP2IE                        159
#define PCON                          160
#define nBOR                          161
#define nBO                           162
#define nPOR                          163
#define SSPSTAT                       164
#define BF                            165
#define UA                            166
#define nW                            167
#define nWRITE                        168
#define R_nW                          169
#define READ_WRITE                    170
#define I2C_READ                      171
#define R_W                           172
#define R                             173
#define I2C_START                     174
#define S                             175
#define P                             176
#define I2C_STOP                      177
#define D_nA                          178
#define D_A                           179
#define D                             180
#define nADDRESS                      181
#define nA                            182
#define I2C_DATA                      183
#define DATA_ADDRESS                  184
#define TXSTA                         185
#define TXD8                          186
#define TX9D                          187
#define TRMT                          188
#define BRGH                          189
#define SYNC                          190
#define TXEN                          191
#define TX8_9                         192
#define TX9                           193
#define nTX8                          194
#define CSRC                          195

#endif // _PIC16CR63_H_
