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

#ifndef _PIC16C782_H_
#define _PIC16C782_H_

#define STATUS                        0
#define C                             1
#define CARRY                         2
#define STATUS_DC                     3
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
#define RBIE                          34
#define INTE                          35
#define T0IE                          36
#define PEIE                          37
#define GIE                           38
#define PIR1                          39
#define TMR1IF                        40
#define C1IF                          41
#define C2IF                          42
#define ADIF                          43
#define LVDIF                         44
#define T1CON                         45
#define TMR1ON                        46
#define TMR1CS                        47
#define nT1SYNC                       48
#define T1INSYNC                      49
#define T1OSCEN                       50
#define T1CKPS0                       51
#define T1CKPS                        52
#define T1CKPS1                       53
#define TMR1GE                        54
#define ADCON0                        55
#define ADON                          56
#define CHS3                          57
#define nDONE                         58
#define GO_nDONE                      59
#define GO_DONE                       60
#define GO                            61
#define CHS                           62
#define CHS0                          63
#define CHS1                          64
#define CHS2                          65
#define ADCS                          66
#define ADCS0                         67
#define ADCS1                         68
#define OPTION_REG                    69
#define PS                            70
#define PS0                           71
#define PS1                           72
#define PS2                           73
#define PSA                           74
#define T0SE                          75
#define T0CS                          76
#define INTEDG                        77
#define nRBPU                         78
#define TRISA                         79
#define TRISA0                        80
#define TRISA1                        81
#define TRISA2                        82
#define TRISA3                        83
#define TRISA4                        84
#define TRISA5                        85
#define TRISA6                        86
#define TRISA7                        87
#define TRISB                         88
#define TRISB0                        89
#define TRISB1                        90
#define TRISB2                        91
#define TRISB3                        92
#define TRISB4                        93
#define TRISB5                        94
#define TRISB6                        95
#define TRISB7                        96
#define PIE1                          97
#define TMR1IE                        98
#define C1IE                          99
#define C2IE                          100
#define ADIE                          101
#define LVDIE                         102
#define PCON                          103
#define nBOR                          104
#define nBO                           105
#define nPOR                          106
#define OSCF                          107
#define WDTON                         108
#define WPUB                          109
#define WPUB0                         110
#define WPUB1                         111
#define WPUB2                         112
#define WPUB3                         113
#define WPUB4                         114
#define WPUB5                         115
#define WPUB6                         116
#define WPUB7                         117
#define IOCB                          118
#define IOCB0                         119
#define IOCB1                         120
#define IOCB2                         121
#define IOCB3                         122
#define IOCB4                         123
#define IOCB5                         124
#define IOCB6                         125
#define IOCB7                         126
#define REFCON                        127
#define VROE                          128
#define VREFOE                        129
#define VREFEN                        130
#define VREN                          131
#define LVDCON                        132
#define LV0                           133
#define LV                            134
#define LV1                           135
#define LV2                           136
#define LV3                           137
#define LVDEN                         138
#define BGST                          139
#define ANSEL                         140
#define ANS0                          141
#define ANS1                          142
#define ANS2                          143
#define ANS3                          144
#define ANS4                          145
#define ANS5                          146
#define ANS6                          147
#define ANS7                          148
#define ADCON1                        149
#define VCFG                          150
#define VCFG0                         151
#define VCFG1                         152
#define CALCON                        153
#define CALREF                        154
#define CALERR                        155
#define CAL                           156
#define PSMCCON0                      157
#define PSMCCON0_DC                   158
#define DC0                           159
#define DC1                           160
#define MAXDC                         161
#define MAXDC0                        162
#define MAXDC1                        163
#define MINDC0                        164
#define MINDC                         165
#define MINDC1                        166
#define SMCCL                         167
#define SMCCL0                        168
#define SMCCL1                        169
#define PSMCCON1                      170
#define SMCCS                         171
#define PWM_nPSM                      172
#define PSM                           173
#define nPSM                          174
#define PWM                           175
#define SMCOM                         176
#define SCEN                          177
#define S1BPOL                        178
#define S1APOL                        179
#define SMCON                         180
#define CM1CON0                       181
#define C1CH                          182
#define C1CH0                         183
#define C1CH1                         184
#define C1R                           185
#define C1SP                          186
#define C1POL                         187
#define C1OE                          188
#define C1OUT                         189
#define C1ON                          190
#define CM2CON0                       191
#define C2CH0                         192
#define C2CH                          193
#define C2CH1                         194
#define C2R                           195
#define C2SP                          196
#define C2POL                         197
#define C2OE                          198
#define C2OUT                         199
#define C2ON                          200
#define CM2CON1                       201
#define C2SYNC                        202
#define MC2OUT                        203
#define MC1OUT                        204
#define OPACON                        205
#define GBWP                          206
#define CMPEN                         207
#define OPAON                         208
#define DAC                           209
#define DA0                           210
#define DA1                           211
#define DA2                           212
#define DA3                           213
#define DA4                           214
#define DA5                           215
#define DA6                           216
#define DA7                           217
#define DACON0                        218
#define DARS                          219
#define DARS0                         220
#define DARS1                         221
#define DAOE                          222
#define DAON                          223
#define PMCON1                        224
#define RD                            225

#endif // _PIC16C782_H_
