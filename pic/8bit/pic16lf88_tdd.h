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

#ifndef _PIC16LF88_H_
#define _PIC16LF88_H_

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
#define RA6                           19
#define RA7                           20
#define PORTB                         21
#define RB0                           22
#define RB1                           23
#define RB2                           24
#define RB3                           25
#define RB4                           26
#define RB5                           27
#define RB6                           28
#define RB7                           29
#define PCLATH                        30
#define INTCON                        31
#define RBIF                          32
#define INTF                          33
#define INT0IF                        34
#define TMR0IF                        35
#define RBIE                          36
#define INTE                          37
#define INT0IE                        38
#define TMR0IE                        39
#define PEIE                          40
#define GIE                           41
#define PIR1                          42
#define TMR1IF                        43
#define TMR2IF                        44
#define CCP1IF                        45
#define SSPIF                         46
#define TXIF                          47
#define RCIF                          48
#define ADIF                          49
#define PIR2                          50
#define EEIF                          51
#define CMIF                          52
#define OSFIF                         53
#define T1CON                         54
#define TMR1ON                        55
#define TMR1CS                        56
#define nT1SYNC                       57
#define T1INSYNC                      58
#define T1OSCEN                       59
#define T1CKPS0                       60
#define T1CKPS                        61
#define T1CKPS1                       62
#define T1RUN                         63
#define T2CON                         64
#define T2CKPS0                       65
#define T2CKPS                        66
#define T2CKPS1                       67
#define TMR2ON                        68
#define TOUTPS0                       69
#define TOUTPS                        70
#define TOUTPS1                       71
#define TOUTPS2                       72
#define TOUTPS3                       73
#define SSPCON                        74
#define SSPM0                         75
#define SSPM                          76
#define SSPM1                         77
#define SSPM2                         78
#define SSPM3                         79
#define CKP                           80
#define SSPEN                         81
#define SSPOV                         82
#define WCOL                          83
#define CCP1CON                       84
#define CCP1M0                        85
#define CCP1M                         86
#define CCP1M1                        87
#define CCP1M2                        88
#define CCP1M3                        89
#define CCP1Y                         90
#define CCP1X                         91
#define RCSTA                         92
#define RCD8                          93
#define RX9D                          94
#define OERR                          95
#define FERR                          96
#define ADDEN                         97
#define CREN                          98
#define SREN                          99
#define RC8_9                         100
#define RC9                           101
#define RX9                           102
#define nRC8                          103
#define SPEN                          104
#define ADCON0                        105
#define ADON                          106
#define nDONE                         107
#define GO_nDONE                      108
#define GO_DONE                       109
#define GO                            110
#define CHS                           111
#define CHS0                          112
#define CHS1                          113
#define CHS2                          114
#define ADCS                          115
#define ADCS0                         116
#define ADCS1                         117
#define OPTION_REG                    118
#define PS                            119
#define PS0                           120
#define PS1                           121
#define PS2                           122
#define PSA                           123
#define T0SE                          124
#define T0CS                          125
#define INTEDG                        126
#define nRBPU                         127
#define TRISA                         128
#define TRISA0                        129
#define TRISA1                        130
#define TRISA2                        131
#define TRISA3                        132
#define TRISA4                        133
#define TRISA5                        134
#define TRISA6                        135
#define TRISA7                        136
#define TRISB                         137
#define TRISB0                        138
#define TRISB1                        139
#define TRISB2                        140
#define TRISB3                        141
#define TRISB4                        142
#define TRISB5                        143
#define TRISB6                        144
#define TRISB7                        145
#define PIE1                          146
#define TMR1IE                        147
#define TMR2IE                        148
#define CCP1IE                        149
#define SSPIE                         150
#define TXIE                          151
#define RCIE                          152
#define ADIE                          153
#define PIE2                          154
#define EEIE                          155
#define CMIE                          156
#define OSFIE                         157
#define PCON                          158
#define nBOR                          159
#define nBO                           160
#define nPOR                          161
#define OSCCON                        162
#define SCS0                          163
#define SCS                           164
#define SCS1                          165
#define IOFS                          166
#define OSTS                          167
#define IRCF                          168
#define IRCF0                         169
#define IRCF1                         170
#define IRCF2                         171
#define OSCTUNE                       172
#define TUN0                          173
#define TUN                           174
#define TUN1                          175
#define TUN2                          176
#define TUN3                          177
#define TUN4                          178
#define TUN5                          179
#define SSPSTAT                       180
#define BF                            181
#define UA                            182
#define R_nW                          183
#define READ_WRITE                    184
#define I2C_READ                      185
#define nW                            186
#define R                             187
#define nWRITE                        188
#define R_W                           189
#define S                             190
#define I2C_START                     191
#define I2C_STOP                      192
#define P                             193
#define nA                            194
#define D_A                           195
#define D_nA                          196
#define D                             197
#define DATA_ADDRESS                  198
#define nADDRESS                      199
#define I2C_DATA                      200
#define CKE                           201
#define SMP                           202
#define TXSTA                         203
#define TXD8                          204
#define TX9D                          205
#define TRMT                          206
#define BRGH                          207
#define SYNC                          208
#define TXEN                          209
#define TX8_9                         210
#define TX9                           211
#define nTX8                          212
#define CSRC                          213
#define ANSEL                         214
#define ANS0                          215
#define ANS1                          216
#define ANS2                          217
#define ANS3                          218
#define ANS4                          219
#define ANS5                          220
#define ANS6                          221
#define CMCON                         222
#define CM                            223
#define CM0                           224
#define CM1                           225
#define CM2                           226
#define CIS                           227
#define C1INV                         228
#define C2INV                         229
#define C1OUT                         230
#define C2OUT                         231
#define CVRCON                        232
#define CVR                           233
#define CVR0                          234
#define CVR1                          235
#define CVR2                          236
#define CVR3                          237
#define CVRR                          238
#define CVROE                         239
#define CVREN                         240
#define ADCON1                        241
#define VCFG                          242
#define VCFG0                         243
#define VCFG1                         244
#define ADCS2                         245
#define ADFM                          246
#define WDTCON                        247
#define SWDTEN                        248
#define SWDTE                         249
#define WDTPS                         250
#define WDTPS0                        251
#define WDTPS1                        252
#define WDTPS2                        253
#define WDTPS3                        254
#define EECON1                        255
#define RD                            256
#define WR                            257
#define WREN                          258
#define WRERR                         259
#define FREE                          260
#define EEPGD                         261

#endif // _PIC16LF88_H_
