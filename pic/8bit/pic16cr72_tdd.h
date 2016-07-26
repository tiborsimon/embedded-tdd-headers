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

#ifndef _PIC16CR72_H_
#define _PIC16CR72_H_

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
#define INTCON                        37
#define RBIF                          38
#define INTF                          39
#define T0IF                          40
#define TMR0IF                        41
#define RBIE                          42
#define INTE                          43
#define T0IE                          44
#define TMR0IE                        45
#define PEIE                          46
#define GIE                           47
#define PIR1                          48
#define TMR1IF                        49
#define TMR2IF                        50
#define CCP1IF                        51
#define SSPIF                         52
#define ADIF                          53
#define T1CON                         54
#define TMR1ON                        55
#define TMR1CS                        56
#define nT1SYNC                       57
#define T1INSYNC                      58
#define T1OSCEN                       59
#define T1CKPS0                       60
#define T1CKPS                        61
#define T1CKPS1                       62
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
#define DC1B                          90
#define CCP1X                         91
#define ADCON0                        92
#define ADON                          93
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
#define TRISB                         122
#define TRISB0                        123
#define TRISB1                        124
#define TRISB2                        125
#define TRISB3                        126
#define TRISB4                        127
#define TRISB5                        128
#define TRISB6                        129
#define TRISB7                        130
#define TRISC                         131
#define TRISC0                        132
#define TRISC1                        133
#define TRISC2                        134
#define TRISC3                        135
#define TRISC4                        136
#define TRISC5                        137
#define TRISC6                        138
#define TRISC7                        139
#define PIE1                          140
#define TMR1IE                        141
#define TMR2IE                        142
#define CCP1IE                        143
#define SSPIE                         144
#define ADIE                          145
#define PCON                          146
#define nBOR                          147
#define nBO                           148
#define nPOR                          149
#define SSPSTAT                       150
#define BF                            151
#define UA                            152
#define nW                            153
#define nWRITE                        154
#define R_nW                          155
#define READ_WRITE                    156
#define I2C_READ                      157
#define R_W                           158
#define R                             159
#define I2C_START                     160
#define S                             161
#define P                             162
#define I2C_STOP                      163
#define D_nA                          164
#define D_A                           165
#define D                             166
#define nADDRESS                      167
#define nA                            168
#define I2C_DATA                      169
#define DATA_ADDRESS                  170
#define ADCON1                        171
#define PCFG0                         172
#define PCFG                          173
#define PCFG1                         174
#define PCFG2                         175

#endif // _PIC16CR72_H_
