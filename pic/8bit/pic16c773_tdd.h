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

#ifndef _PIC16C773_H_
#define _PIC16C773_H_

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
#define PORTB                         18
#define RB0                           19
#define RB1                           20
#define RB2                           21
#define RB3                           22
#define RB4                           23
#define RB5                           24
#define RB6                           25
#define RB7                           26
#define PORTC                         27
#define RC0                           28
#define RC1                           29
#define RC2                           30
#define RC3                           31
#define RC4                           32
#define RC5                           33
#define RC6                           34
#define RC7                           35
#define INTCON                        36
#define RBIF                          37
#define INTF                          38
#define T0IF                          39
#define RBIE                          40
#define INTE                          41
#define T0IE                          42
#define PEIE                          43
#define GIE                           44
#define PIR1                          45
#define TMR1IF                        46
#define TMR2IF                        47
#define CCP1IF                        48
#define SSPIF                         49
#define TXIF                          50
#define RCIF                          51
#define ADIF                          52
#define PIR2                          53
#define CCP2IF                        54
#define BCLIF                         55
#define LVDIF                         56
#define T1CON                         57
#define TMR1ON                        58
#define TMR1CS                        59
#define T1SYNC                        60
#define nT1SYNC                       61
#define T1INSYNC                      62
#define T1OSCEN                       63
#define T1CKPS0                       64
#define T1CKPS                        65
#define T1CKPS1                       66
#define T2CON                         67
#define T2CKPS0                       68
#define T2CKPS                        69
#define T2CKPS1                       70
#define TMR2ON                        71
#define TOUTPS0                       72
#define TOUTPS                        73
#define TOUTPS1                       74
#define TOUTPS2                       75
#define TOUTPS3                       76
#define SSPCON                        77
#define SSPM0                         78
#define SSPM                          79
#define SSPM1                         80
#define SSPM2                         81
#define SSPM3                         82
#define CKP                           83
#define SSPEN                         84
#define SSPOV                         85
#define WCOL                          86
#define CCP1CON                       87
#define CCP1M0                        88
#define CCP1M                         89
#define CCP1M1                        90
#define CCP1M2                        91
#define CCP1M3                        92
#define CCP1Y                         93
#define DC1B                          94
#define DC1B0                         95
#define CCP1X                         96
#define DC1B1                         97
#define RCSTA                         98
#define RCD8                          99
#define RX9D                          100
#define OERR                          101
#define FERR                          102
#define ADDEN                         103
#define CREN                          104
#define SREN                          105
#define RC8_9                         106
#define RC9                           107
#define RX9                           108
#define nRC8                          109
#define SPEN                          110
#define CCP2CON                       111
#define CCP2M                         112
#define CCP2M0                        113
#define CCP2M1                        114
#define CCP2M2                        115
#define CCP2M3                        116
#define CCP2Y                         117
#define DC2B                          118
#define CCP2X                         119
#define ADCON0                        120
#define ADON                          121
#define CHS3                          122
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
#define LVDIE                         179
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
#define REFCON                        227
#define VRLOEN                        228
#define VRHOEN                        229
#define VRLEN                         230
#define VRHEN                         231
#define LVDCON                        232
#define LV0                           233
#define LV                            234
#define LV1                           235
#define LV2                           236
#define LV3                           237
#define LVDEN                         238
#define BGST                          239
#define ADCON1                        240
#define PCFG0                         241
#define PCFG                          242
#define PCFG1                         243
#define PCFG2                         244
#define PCFG3                         245
#define VCFG                          246
#define VCFG0                         247
#define VCFG1                         248
#define VCFG2                         249
#define ADFM                          250

#endif // _PIC16C773_H_
