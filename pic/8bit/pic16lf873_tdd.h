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

#ifndef _PIC16LF873_H_
#define _PIC16LF873_H_

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
#define SSPIF                         53
#define TXIF                          54
#define RCIF                          55
#define ADIF                          56
#define PIR2                          57
#define CCP2IF                        58
#define BCLIF                         59
#define EEIF                          60
#define T1CON                         61
#define TMR1ON                        62
#define TMR1CS                        63
#define T1SYNC                        64
#define nT1SYNC                       65
#define T1INSYNC                      66
#define T1OSCEN                       67
#define T1CKPS0                       68
#define T1CKPS                        69
#define T1CKPS1                       70
#define T2CON                         71
#define T2CKPS0                       72
#define T2CKPS                        73
#define T2CKPS1                       74
#define TMR2ON                        75
#define TOUTPS0                       76
#define TOUTPS                        77
#define TOUTPS1                       78
#define TOUTPS2                       79
#define TOUTPS3                       80
#define SSPCON                        81
#define SSPM0                         82
#define SSPM                          83
#define SSPM1                         84
#define SSPM2                         85
#define SSPM3                         86
#define CKP                           87
#define SSPEN                         88
#define SSPOV                         89
#define WCOL                          90
#define CCP1CON                       91
#define CCP1M0                        92
#define CCP1M                         93
#define CCP1M1                        94
#define CCP1M2                        95
#define CCP1M3                        96
#define CCP1Y                         97
#define CCP1X                         98
#define RCSTA                         99
#define RCD8                          100
#define RX9D                          101
#define OERR                          102
#define FERR                          103
#define ADDEN                         104
#define CREN                          105
#define SREN                          106
#define RC8_9                         107
#define RC9                           108
#define RX9                           109
#define nRC8                          110
#define SPEN                          111
#define CCP2CON                       112
#define CCP2M                         113
#define CCP2M0                        114
#define CCP2M1                        115
#define CCP2M2                        116
#define CCP2M3                        117
#define CCP2Y                         118
#define CCP2X                         119
#define ADCON0                        120
#define ADON                          121
#define nDONE                         122
#define GO_nDONE                      123
#define GO_DONE                       124
#define GO                            125
#define CHS                           126
#define CHS0                          127
#define CHS1                          128
#define CHS2                          129
#define ADCS                          130
#define ADCS0                         131
#define ADCS1                         132
#define OPTION_REG                    133
#define PS                            134
#define PS0                           135
#define PS1                           136
#define PS2                           137
#define PSA                           138
#define T0SE                          139
#define T0CS                          140
#define INTEDG                        141
#define nRBPU                         142
#define TRISA                         143
#define TRISA0                        144
#define TRISA1                        145
#define TRISA2                        146
#define TRISA3                        147
#define TRISA4                        148
#define TRISA5                        149
#define TRISB                         150
#define TRISB0                        151
#define TRISB1                        152
#define TRISB2                        153
#define TRISB3                        154
#define TRISB4                        155
#define TRISB5                        156
#define TRISB6                        157
#define TRISB7                        158
#define TRISC                         159
#define TRISC0                        160
#define TRISC1                        161
#define TRISC2                        162
#define TRISC3                        163
#define TRISC4                        164
#define TRISC5                        165
#define TRISC6                        166
#define TRISC7                        167
#define PIE1                          168
#define TMR1IE                        169
#define TMR2IE                        170
#define CCP1IE                        171
#define SSPIE                         172
#define TXIE                          173
#define RCIE                          174
#define ADIE                          175
#define PIE2                          176
#define CCP2IE                        177
#define BCLIE                         178
#define EEIE                          179
#define PCON                          180
#define nBOR                          181
#define nBO                           182
#define nPOR                          183
#define SSPCON2                       184
#define SEN                           185
#define RSEN                          186
#define PEN                           187
#define RCEN                          188
#define ACKEN                         189
#define ACKDT                         190
#define ACKSTAT                       191
#define GCEN                          192
#define SSPSTAT                       193
#define BF                            194
#define UA                            195
#define R_nW                          196
#define READ_WRITE                    197
#define I2C_READ                      198
#define nW                            199
#define R                             200
#define nWRITE                        201
#define R_W                           202
#define S                             203
#define I2C_START                     204
#define I2C_STOP                      205
#define P                             206
#define nA                            207
#define D_A                           208
#define D_nA                          209
#define D                             210
#define DATA_ADDRESS                  211
#define nADDRESS                      212
#define I2C_DATA                      213
#define CKE                           214
#define SMP                           215
#define TXSTA                         216
#define TXD8                          217
#define TX9D                          218
#define TRMT                          219
#define BRGH                          220
#define SYNC                          221
#define TXEN                          222
#define TX8_9                         223
#define TX9                           224
#define nTX8                          225
#define CSRC                          226
#define ADCON1                        227
#define PCFG0                         228
#define PCFG                          229
#define PCFG1                         230
#define PCFG2                         231
#define PCFG3                         232
#define ADFM                          233
#define EECON1                        234
#define RD                            235
#define WR                            236
#define WREN                          237
#define WRERR                         238
#define EEPGD                         239

#endif // _PIC16LF873_H_
