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

#ifndef _PIC16C67_H_
#define _PIC16C67_H_

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
#define TMR1IF                        62
#define TMR2IF                        63
#define CCP1IF                        64
#define SSPIF                         65
#define TXIF                          66
#define RCIF                          67
#define PSPIF                         68
#define PIR2                          69
#define CCP2IF                        70
#define T1CON                         71
#define TMR1ON                        72
#define TMR1CS                        73
#define nT1SYNC                       74
#define T1INSYNC                      75
#define T1OSCEN                       76
#define T1CKPS0                       77
#define T1CKPS                        78
#define T1CKPS1                       79
#define T2CON                         80
#define T2CKPS0                       81
#define T2CKPS                        82
#define T2CKPS1                       83
#define TMR2ON                        84
#define TOUTPS0                       85
#define TOUTPS                        86
#define TOUTPS1                       87
#define TOUTPS2                       88
#define TOUTPS3                       89
#define SSPCON                        90
#define SSPM0                         91
#define SSPM                          92
#define SSPM1                         93
#define SSPM2                         94
#define SSPM3                         95
#define CKP                           96
#define SSPEN                         97
#define SSPOV                         98
#define WCOL                          99
#define CCP1CON                       100
#define CCP1M0                        101
#define CCP1M                         102
#define CCP1M1                        103
#define CCP1M2                        104
#define CCP1M3                        105
#define CCP1Y                         106
#define DC1B                          107
#define CCP1X                         108
#define RCSTA                         109
#define RCD8                          110
#define RX9D                          111
#define OERR                          112
#define FERR                          113
#define CREN                          114
#define SREN                          115
#define RC8_9                         116
#define RC9                           117
#define RX9                           118
#define nRC8                          119
#define SPEN                          120
#define CCP2CON                       121
#define CCP2M                         122
#define CCP2M0                        123
#define CCP2M1                        124
#define CCP2M2                        125
#define CCP2M3                        126
#define CCP2Y                         127
#define DC2B                          128
#define CCP2X                         129
#define OPTION_REG                    130
#define PS                            131
#define PS0                           132
#define PS1                           133
#define PS2                           134
#define PSA                           135
#define T0SE                          136
#define T0CS                          137
#define INTEDG                        138
#define nRBPU                         139
#define TRISA                         140
#define TRISA0                        141
#define TRISA1                        142
#define TRISA2                        143
#define TRISA3                        144
#define TRISA4                        145
#define TRISA5                        146
#define TRISB                         147
#define TRISB0                        148
#define TRISB1                        149
#define TRISB2                        150
#define TRISB3                        151
#define TRISB4                        152
#define TRISB5                        153
#define TRISB6                        154
#define TRISB7                        155
#define TRISC                         156
#define TRISC0                        157
#define TRISC1                        158
#define TRISC2                        159
#define TRISC3                        160
#define TRISC4                        161
#define TRISC5                        162
#define TRISC6                        163
#define TRISC7                        164
#define TRISD                         165
#define TRISD0                        166
#define TRISD1                        167
#define TRISD2                        168
#define TRISD3                        169
#define TRISD4                        170
#define TRISD5                        171
#define TRISD6                        172
#define TRISD7                        173
#define TRISE                         174
#define TRISE0                        175
#define TRISE1                        176
#define TRISE2                        177
#define PSPMODE                       178
#define IBOV                          179
#define OBF                           180
#define IBF                           181
#define PIE1                          182
#define TMR1IE                        183
#define TMR2IE                        184
#define CCP1IE                        185
#define SSPIE                         186
#define TXIE                          187
#define RCIE                          188
#define PSPIE                         189
#define PIE2                          190
#define CCP2IE                        191
#define PCON                          192
#define nBOR                          193
#define nBO                           194
#define nPOR                          195
#define SSPSTAT                       196
#define BF                            197
#define UA                            198
#define R_nW                          199
#define READ_WRITE                    200
#define I2C_READ                      201
#define nW                            202
#define R                             203
#define nWRITE                        204
#define R_W                           205
#define S                             206
#define I2C_START                     207
#define I2C_STOP                      208
#define P                             209
#define nA                            210
#define D_A                           211
#define D_nA                          212
#define D                             213
#define DATA_ADDRESS                  214
#define nADDRESS                      215
#define I2C_DATA                      216
#define CKE                           217
#define SMP                           218
#define TXSTA                         219
#define TXD8                          220
#define TX9D                          221
#define TRMT                          222
#define BRGH                          223
#define SYNC                          224
#define TXEN                          225
#define TX8_9                         226
#define TX9                           227
#define nTX8                          228
#define CSRC                          229

#endif // _PIC16C67_H_
