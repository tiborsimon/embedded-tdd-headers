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

#ifndef _PIC16F688_H_
#define _PIC16F688_H_

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
#define PORTC                         19
#define RC0                           20
#define RC1                           21
#define RC2                           22
#define RC3                           23
#define RC4                           24
#define RC5                           25
#define PCLATH                        26
#define INTCON                        27
#define RAIF                          28
#define INTF                          29
#define T0IF                          30
#define TMR0IF                        31
#define RAIE                          32
#define INTE                          33
#define T0IE                          34
#define TMR0IE                        35
#define PEIE                          36
#define GIE                           37
#define PIR1                          38
#define T1IF                          39
#define TMR1IF                        40
#define TXIF                          41
#define OSFIF                         42
#define C1IF                          43
#define C2IF                          44
#define RCIF                          45
#define ADIF                          46
#define EEIF                          47
#define T1CON                         48
#define TMR1ON                        49
#define TMR1CS                        50
#define nT1SYNC                       51
#define T1OSCEN                       52
#define T1CKPS0                       53
#define T1CKPS                        54
#define T1CKPS1                       55
#define TMR1GE                        56
#define T1GINV                        57
#define BAUDCTL                       58
#define ABDEN                         59
#define WUE                           60
#define BRG16                         61
#define SCKP                          62
#define RCIDL                         63
#define ABDOVF                        64
#define SPBRGH                        65
#define TXSTA                         66
#define TX9D                          67
#define TRMT                          68
#define BRGH                          69
#define SENDB                         70
#define SYNC                          71
#define TXEN                          72
#define TX9                           73
#define CSRC                          74
#define RCSTA                         75
#define RX9D                          76
#define OERR                          77
#define FERR                          78
#define ADDEN                         79
#define CREN                          80
#define SREN                          81
#define RX9                           82
#define SPEN                          83
#define WDTCON                        84
#define SWDTEN                        85
#define WDTPS                         86
#define WDTPS0                        87
#define WDTPS1                        88
#define WDTPS2                        89
#define WDTPS3                        90
#define CMCON0                        91
#define CM                            92
#define CM0                           93
#define CM1                           94
#define CM2                           95
#define CIS                           96
#define C1INV                         97
#define C2INV                         98
#define C1OUT                         99
#define C2OUT                         100
#define CMCON1                        101
#define C2SYNC                        102
#define T1GSS                         103
#define ADCON0                        104
#define ADON                          105
#define nDONE                         106
#define GO_nDONE                      107
#define GO_DONE                       108
#define GO                            109
#define CHS                           110
#define CHS0                          111
#define CHS1                          112
#define CHS2                          113
#define VCFG                          114
#define ADFM                          115
#define OPTION_REG                    116
#define PS                            117
#define PS0                           118
#define PS1                           119
#define PS2                           120
#define PSA                           121
#define T0SE                          122
#define T0CS                          123
#define INTEDG                        124
#define nRAPU                         125
#define TRISA                         126
#define TRISA0                        127
#define TRISA1                        128
#define TRISA2                        129
#define TRISA3                        130
#define TRISA4                        131
#define TRISA5                        132
#define TRISC                         133
#define TRISC0                        134
#define TRISC1                        135
#define TRISC2                        136
#define TRISC3                        137
#define TRISC4                        138
#define TRISC5                        139
#define PIE1                          140
#define T1IE                          141
#define TMR1IE                        142
#define TXIE                          143
#define OSFIE                         144
#define C1IE                          145
#define C2IE                          146
#define RCIE                          147
#define ADIE                          148
#define EEIE                          149
#define PCON                          150
#define nBOR                          151
#define nBOD                          152
#define nPOR                          153
#define SBODEN                        154
#define ULPWUE                        155
#define OSCCON                        156
#define SCS                           157
#define LTS                           158
#define HTS                           159
#define OSTS                          160
#define IOSCF                         161
#define IRCF0                         162
#define IRCF1                         163
#define IRCF2                         164
#define OSCTUNE                       165
#define TUN0                          166
#define TUN                           167
#define TUN1                          168
#define TUN2                          169
#define TUN3                          170
#define TUN4                          171
#define ANSEL                         172
#define ANS0                          173
#define ANS1                          174
#define ANS2                          175
#define ANS3                          176
#define ANS4                          177
#define ANS5                          178
#define ANS6                          179
#define ANS7                          180
#define WPUA                          181
#define WPUA0                         182
#define WPU0                          183
#define WPUA1                         184
#define WPU1                          185
#define WPUA2                         186
#define WPU2                          187
#define WPUA4                         188
#define WPU4                          189
#define WPUA5                         190
#define WPU5                          191
#define IOCA                          192
#define IOCA0                         193
#define IOC0                          194
#define IOCA1                         195
#define IOC1                          196
#define IOCA2                         197
#define IOC2                          198
#define IOCA3                         199
#define IOC3                          200
#define IOCA4                         201
#define IOC4                          202
#define IOCA5                         203
#define IOC5                          204
#define VRCON                         205
#define VR0                           206
#define VR                            207
#define VR1                           208
#define VR2                           209
#define VR3                           210
#define VRR                           211
#define VREN                          212
#define EEDAT                         213
#define EECON1                        214
#define RD                            215
#define WR                            216
#define WREN                          217
#define WRERR                         218
#define EEPGD                         219
#define ADCON1                        220
#define ADCS                          221
#define ADCS0                         222
#define ADCS1                         223
#define ADCS2                         224

#endif // _PIC16F688_H_
