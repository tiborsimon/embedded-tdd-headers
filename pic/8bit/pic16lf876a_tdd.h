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

#ifndef _PIC16LF876A_H_
#define _PIC16LF876A_H_

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
#define CMIF                          61
#define T1CON                         62
#define TMR1ON                        63
#define TMR1CS                        64
#define T1SYNC                        65
#define nT1SYNC                       66
#define T1INSYNC                      67
#define T1OSCEN                       68
#define T1CKPS0                       69
#define T1CKPS                        70
#define T1CKPS1                       71
#define T2CON                         72
#define T2CKPS0                       73
#define T2CKPS                        74
#define T2CKPS1                       75
#define TMR2ON                        76
#define TOUTPS0                       77
#define TOUTPS                        78
#define TOUTPS1                       79
#define TOUTPS2                       80
#define TOUTPS3                       81
#define SSPCON                        82
#define SSPM0                         83
#define SSPM                          84
#define SSPM1                         85
#define SSPM2                         86
#define SSPM3                         87
#define CKP                           88
#define SSPEN                         89
#define SSPOV                         90
#define WCOL                          91
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
#define CCP2CON                       113
#define CCP2M                         114
#define CCP2M0                        115
#define CCP2M1                        116
#define CCP2M2                        117
#define CCP2M3                        118
#define CCP2Y                         119
#define CCP2X                         120
#define ADCON0                        121
#define ADON                          122
#define nDONE                         123
#define GO_nDONE                      124
#define GO_DONE                       125
#define GO                            126
#define CHS                           127
#define CHS0                          128
#define CHS1                          129
#define CHS2                          130
#define ADCS                          131
#define ADCS0                         132
#define ADCS1                         133
#define OPTION_REG                    134
#define PS                            135
#define PS0                           136
#define PS1                           137
#define PS2                           138
#define PSA                           139
#define T0SE                          140
#define T0CS                          141
#define INTEDG                        142
#define nRBPU                         143
#define TRISA                         144
#define TRISA0                        145
#define TRISA1                        146
#define TRISA2                        147
#define TRISA3                        148
#define TRISA4                        149
#define TRISA5                        150
#define TRISB                         151
#define TRISB0                        152
#define TRISB1                        153
#define TRISB2                        154
#define TRISB3                        155
#define TRISB4                        156
#define TRISB5                        157
#define TRISB6                        158
#define TRISB7                        159
#define TRISC                         160
#define TRISC0                        161
#define TRISC1                        162
#define TRISC2                        163
#define TRISC3                        164
#define TRISC4                        165
#define TRISC5                        166
#define TRISC6                        167
#define TRISC7                        168
#define PIE1                          169
#define TMR1IE                        170
#define TMR2IE                        171
#define CCP1IE                        172
#define SSPIE                         173
#define TXIE                          174
#define RCIE                          175
#define ADIE                          176
#define PIE2                          177
#define CCP2IE                        178
#define BCLIE                         179
#define EEIE                          180
#define CMIE                          181
#define PCON                          182
#define nBOR                          183
#define nBO                           184
#define nPOR                          185
#define SSPCON2                       186
#define SEN                           187
#define RSEN                          188
#define PEN                           189
#define RCEN                          190
#define ACKEN                         191
#define ACKDT                         192
#define ACKSTAT                       193
#define GCEN                          194
#define SSPSTAT                       195
#define BF                            196
#define UA                            197
#define R_nW                          198
#define READ_WRITE                    199
#define I2C_READ                      200
#define nW                            201
#define R                             202
#define nWRITE                        203
#define R_W                           204
#define S                             205
#define I2C_START                     206
#define I2C_STOP                      207
#define P                             208
#define nA                            209
#define D_A                           210
#define D_nA                          211
#define D                             212
#define DATA_ADDRESS                  213
#define nADDRESS                      214
#define I2C_DATA                      215
#define CKE                           216
#define SMP                           217
#define TXSTA                         218
#define TXD8                          219
#define TX9D                          220
#define TRMT                          221
#define BRGH                          222
#define SYNC                          223
#define TXEN                          224
#define TX8_9                         225
#define TX9                           226
#define nTX8                          227
#define CSRC                          228
#define CMCON                         229
#define CM                            230
#define CM0                           231
#define CM1                           232
#define CM2                           233
#define CIS                           234
#define C1INV                         235
#define C2INV                         236
#define C1OUT                         237
#define C2OUT                         238
#define CVRCON                        239
#define CVR                           240
#define CVR0                          241
#define CVR1                          242
#define CVR2                          243
#define CVR3                          244
#define CVRR                          245
#define CVROE                         246
#define CVREN                         247
#define ADCON1                        248
#define PCFG0                         249
#define PCFG                          250
#define PCFG1                         251
#define PCFG2                         252
#define PCFG3                         253
#define ADCS2                         254
#define ADFM                          255
#define EECON1                        256
#define RD                            257
#define WR                            258
#define WREN                          259
#define WRERR                         260
#define EEPGD                         261

#endif // _PIC16LF876A_H_
