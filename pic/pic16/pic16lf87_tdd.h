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

#ifndef _PIC16LF87_H_
#define _PIC16LF87_H_

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
#define PIR2                          49
#define EEIF                          50
#define CMIF                          51
#define OSFIF                         52
#define T1CON                         53
#define TMR1ON                        54
#define TMR1CS                        55
#define nT1SYNC                       56
#define T1INSYNC                      57
#define T1OSCEN                       58
#define T1CKPS0                       59
#define T1CKPS                        60
#define T1CKPS1                       61
#define T1RUN                         62
#define T2CON                         63
#define T2CKPS0                       64
#define T2CKPS                        65
#define T2CKPS1                       66
#define TMR2ON                        67
#define TOUTPS0                       68
#define TOUTPS                        69
#define TOUTPS1                       70
#define TOUTPS2                       71
#define TOUTPS3                       72
#define SSPCON                        73
#define SSPM0                         74
#define SSPM                          75
#define SSPM1                         76
#define SSPM2                         77
#define SSPM3                         78
#define CKP                           79
#define SSPEN                         80
#define SSPOV                         81
#define WCOL                          82
#define CCP1CON                       83
#define CCP1M0                        84
#define CCP1M                         85
#define CCP1M1                        86
#define CCP1M2                        87
#define CCP1M3                        88
#define CCP1Y                         89
#define CCP1X                         90
#define RCSTA                         91
#define RCD8                          92
#define RX9D                          93
#define OERR                          94
#define FERR                          95
#define ADDEN                         96
#define CREN                          97
#define SREN                          98
#define RC8_9                         99
#define RC9                           100
#define RX9                           101
#define nRC8                          102
#define SPEN                          103
#define OPTION_REG                    104
#define PS                            105
#define PS0                           106
#define PS1                           107
#define PS2                           108
#define PSA                           109
#define T0SE                          110
#define T0CS                          111
#define INTEDG                        112
#define nRBPU                         113
#define TRISA                         114
#define TRISA0                        115
#define TRISA1                        116
#define TRISA2                        117
#define TRISA3                        118
#define TRISA4                        119
#define TRISA5                        120
#define TRISA6                        121
#define TRISA7                        122
#define TRISB                         123
#define TRISB0                        124
#define TRISB1                        125
#define TRISB2                        126
#define TRISB3                        127
#define TRISB4                        128
#define TRISB5                        129
#define TRISB6                        130
#define TRISB7                        131
#define PIE1                          132
#define TMR1IE                        133
#define TMR2IE                        134
#define CCP1IE                        135
#define SSPIE                         136
#define TXIE                          137
#define RCIE                          138
#define PIE2                          139
#define EEIE                          140
#define CMIE                          141
#define OSFIE                         142
#define PCON                          143
#define nBOR                          144
#define nBO                           145
#define nPOR                          146
#define OSCCON                        147
#define SCS0                          148
#define SCS                           149
#define SCS1                          150
#define IOFS                          151
#define OSTS                          152
#define IRCF                          153
#define IRCF0                         154
#define IRCF1                         155
#define IRCF2                         156
#define OSCTUNE                       157
#define TUN0                          158
#define TUN                           159
#define TUN1                          160
#define TUN2                          161
#define TUN3                          162
#define TUN4                          163
#define TUN5                          164
#define SSPSTAT                       165
#define BF                            166
#define UA                            167
#define R_nW                          168
#define READ_WRITE                    169
#define I2C_READ                      170
#define nW                            171
#define R                             172
#define nWRITE                        173
#define R_W                           174
#define S                             175
#define I2C_START                     176
#define I2C_STOP                      177
#define P                             178
#define nA                            179
#define D_A                           180
#define D_nA                          181
#define D                             182
#define DATA_ADDRESS                  183
#define nADDRESS                      184
#define I2C_DATA                      185
#define CKE                           186
#define SMP                           187
#define TXSTA                         188
#define TXD8                          189
#define TX9D                          190
#define TRMT                          191
#define BRGH                          192
#define SYNC                          193
#define TXEN                          194
#define TX8_9                         195
#define TX9                           196
#define nTX8                          197
#define CSRC                          198
#define CMCON                         199
#define CM                            200
#define CM0                           201
#define CM1                           202
#define CM2                           203
#define CIS                           204
#define C1INV                         205
#define C2INV                         206
#define C1OUT                         207
#define C2OUT                         208
#define CVRCON                        209
#define CVR                           210
#define CVR0                          211
#define CVR1                          212
#define CVR2                          213
#define CVR3                          214
#define CVRR                          215
#define CVROE                         216
#define CVREN                         217
#define WDTCON                        218
#define SWDTEN                        219
#define SWDTE                         220
#define WDTPS                         221
#define WDTPS0                        222
#define WDTPS1                        223
#define WDTPS2                        224
#define WDTPS3                        225
#define EECON1                        226
#define RD                            227
#define WR                            228
#define WREN                          229
#define WRERR                         230
#define FREE                          231
#define EEPGD                         232

#endif // _PIC16LF87_H_
