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

#ifndef _PIC16F684_H_
#define _PIC16F684_H_

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
#define T2IF                          41
#define TMR2IF                        42
#define OSFIF                         43
#define C1IF                          44
#define C2IF                          45
#define CCP1IF                        46
#define ECCPIF                        47
#define ADIF                          48
#define EEIF                          49
#define T1CON                         50
#define TMR1ON                        51
#define TMR1CS                        52
#define nT1SYNC                       53
#define T1OSCEN                       54
#define T1CKPS0                       55
#define T1CKPS                        56
#define T1CKPS1                       57
#define TMR1GE                        58
#define T1GINV                        59
#define T2CON                         60
#define T2CKPS0                       61
#define T2CKPS                        62
#define T2CKPS1                       63
#define TMR2ON                        64
#define TOUTPS0                       65
#define TOUTPS                        66
#define TOUTPS1                       67
#define TOUTPS2                       68
#define TOUTPS3                       69
#define CCP1CON                       70
#define CCP1M0                        71
#define CCP1M                         72
#define CCP1M1                        73
#define CCP1M2                        74
#define CCP1M3                        75
#define DCB                           76
#define DC1B0                         77
#define DC1B1                         78
#define P1M0                          79
#define PM                            80
#define P1M1                          81
#define PWM1CON                       82
#define PDC0                          83
#define PDC                           84
#define PDC1                          85
#define PDC2                          86
#define PDC3                          87
#define PDC4                          88
#define PDC5                          89
#define PDC6                          90
#define PRSEN                         91
#define PSSBD                         92
#define PSSBD0                        93
#define PSSBD1                        94
#define PSSAC                         95
#define PSSAC0                        96
#define PSSAC1                        97
#define ECCPAS0                       98
#define ECCPAS                        99
#define ECCPAS1                       100
#define ECCPAS2                       101
#define ECCPASE                       102
#define WDTCON                        103
#define SWDTEN                        104
#define WDTPS                         105
#define WDTPS0                        106
#define WDTPS1                        107
#define WDTPS2                        108
#define WDTPS3                        109
#define CMCON0                        110
#define CM                            111
#define CM0                           112
#define CM1                           113
#define CM2                           114
#define CIS                           115
#define C1INV                         116
#define C2INV                         117
#define C1OUT                         118
#define C2OUT                         119
#define CMCON1                        120
#define C2SYNC                        121
#define T1GSS                         122
#define ADCON0                        123
#define ADON                          124
#define nDONE                         125
#define GO_nDONE                      126
#define GO_DONE                       127
#define GO                            128
#define CHS                           129
#define CHS0                          130
#define CHS1                          131
#define CHS2                          132
#define VCFG                          133
#define ADFM                          134
#define OPTION_REG                    135
#define PS                            136
#define PS0                           137
#define PS1                           138
#define PS2                           139
#define PSA                           140
#define T0SE                          141
#define T0CS                          142
#define INTEDG                        143
#define nRAPU                         144
#define TRISA                         145
#define TRISA0                        146
#define TRISA1                        147
#define TRISA2                        148
#define TRISA3                        149
#define TRISA4                        150
#define TRISA5                        151
#define TRISC                         152
#define TRISC0                        153
#define TRISC1                        154
#define TRISC2                        155
#define TRISC3                        156
#define TRISC4                        157
#define TRISC5                        158
#define PIE1                          159
#define T1IE                          160
#define TMR1IE                        161
#define T2IE                          162
#define TMR2IE                        163
#define OSFIE                         164
#define C1IE                          165
#define C2IE                          166
#define CCP1IE                        167
#define ECCPIE                        168
#define ADIE                          169
#define EEIE                          170
#define PCON                          171
#define nBOD                          172
#define nBOR                          173
#define nPOR                          174
#define SBOREN                        175
#define SBODEN                        176
#define ULPWUE                        177
#define OSCCON                        178
#define SCS                           179
#define LTS                           180
#define HTS                           181
#define OSTS                          182
#define IOSCF                         183
#define IRCF0                         184
#define IRCF1                         185
#define IRCF2                         186
#define OSCTUNE                       187
#define TUN0                          188
#define TUN                           189
#define TUN1                          190
#define TUN2                          191
#define TUN3                          192
#define TUN4                          193
#define ANSEL                         194
#define ANS0                          195
#define ANS1                          196
#define ANS2                          197
#define ANS3                          198
#define ANS4                          199
#define ANS5                          200
#define ANS6                          201
#define ANS7                          202
#define WPUA                          203
#define WPUA0                         204
#define WPU0                          205
#define WPUA1                         206
#define WPU1                          207
#define WPUA2                         208
#define WPU2                          209
#define WPUA4                         210
#define WPU4                          211
#define WPUA5                         212
#define WPU5                          213
#define IOCA                          214
#define IOCA0                         215
#define IOC0                          216
#define IOCA1                         217
#define IOC1                          218
#define IOCA2                         219
#define IOC2                          220
#define IOCA3                         221
#define IOC3                          222
#define IOCA4                         223
#define IOC4                          224
#define IOCA5                         225
#define IOC5                          226
#define VRCON                         227
#define VR0                           228
#define VR                            229
#define VR1                           230
#define VR2                           231
#define VR3                           232
#define VRR                           233
#define VREN                          234
#define EEDAT                         235
#define EECON1                        236
#define RD                            237
#define WR                            238
#define WREN                          239
#define WRERR                         240
#define ADCON1                        241
#define ADCS                          242
#define ADCS0                         243
#define ADCS1                         244
#define ADCS2                         245

#endif // _PIC16F684_H_
