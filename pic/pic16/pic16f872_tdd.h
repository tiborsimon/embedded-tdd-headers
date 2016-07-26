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

#ifndef _PIC16F872_H_
#define _PIC16F872_H_

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
#define ADIF                          54
#define PIR2                          55
#define BCLIF                         56
#define EEIF                          57
#define T1CON                         58
#define TMR1ON                        59
#define TMR1CS                        60
#define T1SYNC                        61
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
#define ADCON0                        96
#define ADON                          97
#define nDONE                         98
#define GO_nDONE                      99
#define GO_DONE                       100
#define GO                            101
#define CHS                           102
#define CHS0                          103
#define CHS1                          104
#define CHS2                          105
#define ADCS                          106
#define ADCS0                         107
#define ADCS1                         108
#define OPTION_REG                    109
#define PS                            110
#define PS0                           111
#define PS1                           112
#define PS2                           113
#define PSA                           114
#define T0SE                          115
#define T0CS                          116
#define INTEDG                        117
#define nRBPU                         118
#define TRISA                         119
#define TRISA0                        120
#define TRISA1                        121
#define TRISA2                        122
#define TRISA3                        123
#define TRISA4                        124
#define TRISA5                        125
#define TRISB                         126
#define TRISB0                        127
#define TRISB1                        128
#define TRISB2                        129
#define TRISB3                        130
#define TRISB4                        131
#define TRISB5                        132
#define TRISB6                        133
#define TRISB7                        134
#define TRISC                         135
#define TRISC0                        136
#define TRISC1                        137
#define TRISC2                        138
#define TRISC3                        139
#define TRISC4                        140
#define TRISC5                        141
#define TRISC6                        142
#define TRISC7                        143
#define PIE1                          144
#define TMR1IE                        145
#define TMR2IE                        146
#define CCP1IE                        147
#define SSPIE                         148
#define ADIE                          149
#define PIE2                          150
#define BCLIE                         151
#define EEIE                          152
#define PCON                          153
#define nBOR                          154
#define nBO                           155
#define nPOR                          156
#define SSPCON2                       157
#define SEN                           158
#define RSEN                          159
#define PEN                           160
#define RCEN                          161
#define ACKEN                         162
#define ACKDT                         163
#define ACKSTAT                       164
#define GCEN                          165
#define SSPSTAT                       166
#define BF                            167
#define UA                            168
#define R_nW                          169
#define READ_WRITE                    170
#define I2C_READ                      171
#define nW                            172
#define R                             173
#define nWRITE                        174
#define R_W                           175
#define S                             176
#define I2C_START                     177
#define I2C_STOP                      178
#define P                             179
#define nA                            180
#define D_A                           181
#define D_nA                          182
#define D                             183
#define DATA_ADDRESS                  184
#define nADDRESS                      185
#define I2C_DATA                      186
#define CKE                           187
#define SMP                           188
#define ADCON1                        189
#define PCFG0                         190
#define PCFG                          191
#define PCFG1                         192
#define PCFG2                         193
#define PCFG3                         194
#define ADFM                          195
#define EECON1                        196
#define RD                            197
#define WR                            198
#define WREN                          199
#define WRERR                         200
#define EEPGD                         201

#endif // _PIC16F872_H_
