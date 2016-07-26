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

#ifndef _PIC16LF76_H_
#define _PIC16LF76_H_

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
#define T1CON                         59
#define TMR1ON                        60
#define TMR1CS                        61
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
#define SSPCON                        78
#define SSPM0                         79
#define SSPM                          80
#define SSPM1                         81
#define SSPM2                         82
#define SSPM3                         83
#define CKP                           84
#define SSPEN                         85
#define SSPOV                         86
#define WCOL                          87
#define CCP1CON                       88
#define CCP1M0                        89
#define CCP1M                         90
#define CCP1M1                        91
#define CCP1M2                        92
#define CCP1M3                        93
#define CCP1Y                         94
#define CCP1X                         95
#define RCSTA                         96
#define RCD8                          97
#define RX9D                          98
#define OERR                          99
#define FERR                          100
#define CREN                          101
#define SREN                          102
#define RC8_9                         103
#define RC9                           104
#define RX9                           105
#define nRC8                          106
#define SPEN                          107
#define CCP2CON                       108
#define CCP2M                         109
#define CCP2M0                        110
#define CCP2M1                        111
#define CCP2M2                        112
#define CCP2M3                        113
#define CCP2Y                         114
#define CCP2X                         115
#define ADRES                         116
#define ADCON0                        117
#define ADON                          118
#define nDONE                         119
#define GO_nDONE                      120
#define GO_DONE                       121
#define GO                            122
#define CHS                           123
#define CHS0                          124
#define CHS1                          125
#define CHS2                          126
#define ADCS                          127
#define ADCS0                         128
#define ADCS1                         129
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
#define PIE1                          165
#define TMR1IE                        166
#define TMR2IE                        167
#define CCP1IE                        168
#define SSPIE                         169
#define TXIE                          170
#define RCIE                          171
#define ADIE                          172
#define PIE2                          173
#define CCP2IE                        174
#define PCON                          175
#define nBOR                          176
#define nBO                           177
#define nPOR                          178
#define SSPSTAT                       179
#define BF                            180
#define UA                            181
#define R_nW                          182
#define READ_WRITE                    183
#define I2C_READ                      184
#define nW                            185
#define R                             186
#define nWRITE                        187
#define R_W                           188
#define S                             189
#define I2C_START                     190
#define I2C_STOP                      191
#define P                             192
#define nA                            193
#define D_A                           194
#define D_nA                          195
#define D                             196
#define DATA_ADDRESS                  197
#define nADDRESS                      198
#define I2C_DATA                      199
#define CKE                           200
#define SMP                           201
#define TXSTA                         202
#define TXD8                          203
#define TX9D                          204
#define TRMT                          205
#define BRGH                          206
#define SYNC                          207
#define TXEN                          208
#define TX8_9                         209
#define TX9                           210
#define nTX8                          211
#define CSRC                          212
#define ADCON1                        213
#define PCFG0                         214
#define PCFG                          215
#define PCFG1                         216
#define PCFG2                         217
#define PMCON1                        218
#define RD                            219

#endif // _PIC16LF76_H_
