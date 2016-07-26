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

#ifndef _PIC16C62A_H_
#define _PIC16C62A_H_

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
#define T1IF                          49
#define TMR1IF                        50
#define T2IF                          51
#define TMR2IF                        52
#define CCP1IF                        53
#define SSPIF                         54
#define T1CON                         55
#define TMR1ON                        56
#define TMR1CS                        57
#define nT1SYNC                       58
#define T1INSYNC                      59
#define T1OSCEN                       60
#define T1CKPS0                       61
#define T1CKPS                        62
#define T1CKPS1                       63
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
#define DC1B                          91
#define CCP1X                         92
#define OPTION_REG                    93
#define PS                            94
#define PS0                           95
#define PS1                           96
#define PS2                           97
#define PSA                           98
#define T0SE                          99
#define T0CS                          100
#define INTEDG                        101
#define nRBPU                         102
#define TRISA                         103
#define TRISA0                        104
#define TRISA1                        105
#define TRISA2                        106
#define TRISA3                        107
#define TRISA4                        108
#define TRISA5                        109
#define TRISB                         110
#define TRISB0                        111
#define TRISB1                        112
#define TRISB2                        113
#define TRISB3                        114
#define TRISB4                        115
#define TRISB5                        116
#define TRISB6                        117
#define TRISB7                        118
#define TRISC                         119
#define TRISC0                        120
#define TRISC1                        121
#define TRISC2                        122
#define TRISC3                        123
#define TRISC4                        124
#define TRISC5                        125
#define TRISC6                        126
#define TRISC7                        127
#define PIE1                          128
#define TMR1IE                        129
#define TMR2IE                        130
#define CCP1IE                        131
#define SSPIE                         132
#define PCON                          133
#define nBOR                          134
#define nBO                           135
#define nPOR                          136
#define SSPSTAT                       137
#define BF                            138
#define UA                            139
#define nW                            140
#define nWRITE                        141
#define R_nW                          142
#define READ_WRITE                    143
#define I2C_READ                      144
#define R_W                           145
#define R                             146
#define I2C_START                     147
#define S                             148
#define P                             149
#define I2C_STOP                      150
#define D_nA                          151
#define D_A                           152
#define D                             153
#define nADDRESS                      154
#define nA                            155
#define I2C_DATA                      156
#define DATA_ADDRESS                  157

#endif // _PIC16C62A_H_
