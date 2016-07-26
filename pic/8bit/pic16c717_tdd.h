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

#ifndef _PIC16C717_H_
#define _PIC16C717_H_

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
#define INTCON                        30
#define RBIF                          31
#define INTF                          32
#define T0IF                          33
#define TMR0IF                        34
#define RBIE                          35
#define INTE                          36
#define T0IE                          37
#define TMR0IE                        38
#define PEIE                          39
#define GIE                           40
#define PIR1                          41
#define TMR1IF                        42
#define TMR2IF                        43
#define CCP1IF                        44
#define SSPIF                         45
#define ADIF                          46
#define PIR2                          47
#define BCLIF                         48
#define LVDIF                         49
#define T1CON                         50
#define TMR1ON                        51
#define TMR1CS                        52
#define nT1SYNC                       53
#define T1INSYNC                      54
#define T1OSCEN                       55
#define T1CKPS0                       56
#define T1CKPS                        57
#define T1CKPS1                       58
#define T2CON                         59
#define T2CKPS0                       60
#define T2CKPS                        61
#define T2CKPS1                       62
#define TMR2ON                        63
#define TOUTPS0                       64
#define TOUTPS                        65
#define TOUTPS1                       66
#define TOUTPS2                       67
#define TOUTPS3                       68
#define SSPCON                        69
#define SSPM0                         70
#define SSPM                          71
#define SSPM1                         72
#define SSPM2                         73
#define SSPM3                         74
#define CKP                           75
#define SSPEN                         76
#define SSPOV                         77
#define WCOL                          78
#define CCP1CON                       79
#define CCP1M0                        80
#define CCP1M                         81
#define CCP1M1                        82
#define CCP1M2                        83
#define CCP1M3                        84
#define DC1B                          85
#define DC1B0                         86
#define DC1B1                         87
#define PWM1M                         88
#define PWM1M0                        89
#define PWM1M1                        90
#define ADCON0                        91
#define ADON                          92
#define CHS3                          93
#define nDONE                         94
#define GO_nDONE                      95
#define GO_DONE                       96
#define GO                            97
#define CHS                           98
#define CHS0                          99
#define CHS1                          100
#define CHS2                          101
#define ADCS                          102
#define ADCS0                         103
#define ADCS1                         104
#define OPTION_REG                    105
#define PS                            106
#define PS0                           107
#define PS1                           108
#define PS2                           109
#define PSA                           110
#define T0SE                          111
#define T0CS                          112
#define INTEDG                        113
#define nRBPU                         114
#define TRISA                         115
#define TRISA0                        116
#define TRISA1                        117
#define TRISA2                        118
#define TRISA3                        119
#define TRISA4                        120
#define TRISA5                        121
#define TRISA6                        122
#define TRISA7                        123
#define TRISB                         124
#define TRISB0                        125
#define TRISB1                        126
#define TRISB2                        127
#define TRISB3                        128
#define TRISB4                        129
#define TRISB5                        130
#define TRISB6                        131
#define TRISB7                        132
#define PIE1                          133
#define TMR1IE                        134
#define TMR2IE                        135
#define CCP1IE                        136
#define SSPIE                         137
#define ADIE                          138
#define PIE2                          139
#define BCLIE                         140
#define LVDIE                         141
#define PCON                          142
#define nBOR                          143
#define nBO                           144
#define nPOR                          145
#define OSCF                          146
#define SSPCON2                       147
#define SEN                           148
#define RSEN                          149
#define PEN                           150
#define RCEN                          151
#define ACKEN                         152
#define ACKDT                         153
#define ACKSTAT                       154
#define GCEN                          155
#define SSPSTAT                       156
#define BF                            157
#define UA                            158
#define R_nW                          159
#define READ_WRITE                    160
#define I2C_READ                      161
#define nW                            162
#define R                             163
#define nWRITE                        164
#define R_W                           165
#define S                             166
#define I2C_START                     167
#define I2C_STOP                      168
#define P                             169
#define nA                            170
#define D_A                           171
#define D_nA                          172
#define D                             173
#define DATA_ADDRESS                  174
#define nADDRESS                      175
#define I2C_DATA                      176
#define CKE                           177
#define SMP                           178
#define WPUB                          179
#define WPUB0                         180
#define WPUB1                         181
#define WPUB2                         182
#define WPUB3                         183
#define WPUB4                         184
#define WPUB5                         185
#define WPUB6                         186
#define WPUB7                         187
#define IOCB                          188
#define IOCB0                         189
#define IOCB1                         190
#define IOCB2                         191
#define IOCB3                         192
#define IOCB4                         193
#define IOCB5                         194
#define IOCB6                         195
#define IOCB7                         196
#define P1DEL                         197
#define REFCON                        198
#define VRLOEN                        199
#define VRHOEN                        200
#define VRLEN                         201
#define VRHEN                         202
#define LVDCON                        203
#define LV0                           204
#define LV                            205
#define LV1                           206
#define LV2                           207
#define LV3                           208
#define LVDEN                         209
#define BGST                          210
#define ANSEL                         211
#define ANS0                          212
#define ANS1                          213
#define ANS2                          214
#define ANS3                          215
#define ANS4                          216
#define ANS5                          217
#define ADCON1                        218
#define VCFG                          219
#define VCFG0                         220
#define VCFG1                         221
#define VCFG2                         222
#define ADFM                          223
#define PMCON1                        224
#define RD                            225

#endif // _PIC16C717_H_
