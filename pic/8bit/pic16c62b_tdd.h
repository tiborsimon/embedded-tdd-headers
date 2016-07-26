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

#ifndef _PIC16C62B_H_
#define _PIC16C62B_H_

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
#define T1CON                         53
#define TMR1ON                        54
#define TMR1CS                        55
#define nT1SYNC                       56
#define T1INSYNC                      57
#define T1OSCEN                       58
#define T1CKPS0                       59
#define T1CKPS                        60
#define T1CKPS1                       61
#define T2CON                         62
#define T2CKPS0                       63
#define T2CKPS                        64
#define T2CKPS1                       65
#define TMR2ON                        66
#define TOUTPS0                       67
#define TOUTPS                        68
#define TOUTPS1                       69
#define TOUTPS2                       70
#define TOUTPS3                       71
#define SSPCON                        72
#define SSPM0                         73
#define SSPM                          74
#define SSPM1                         75
#define SSPM2                         76
#define SSPM3                         77
#define CKP                           78
#define SSPEN                         79
#define SSPOV                         80
#define WCOL                          81
#define CCP1CON                       82
#define CCP1M0                        83
#define CCP1M                         84
#define CCP1M1                        85
#define CCP1M2                        86
#define CCP1M3                        87
#define CCP1Y                         88
#define DC1B                          89
#define CCP1X                         90
#define OPTION_REG                    91
#define PS                            92
#define PS0                           93
#define PS1                           94
#define PS2                           95
#define PSA                           96
#define T0SE                          97
#define T0CS                          98
#define INTEDG                        99
#define nRBPU                         100
#define TRISA                         101
#define TRISA0                        102
#define TRISA1                        103
#define TRISA2                        104
#define TRISA3                        105
#define TRISA4                        106
#define TRISA5                        107
#define TRISB                         108
#define TRISB0                        109
#define TRISB1                        110
#define TRISB2                        111
#define TRISB3                        112
#define TRISB4                        113
#define TRISB5                        114
#define TRISB6                        115
#define TRISB7                        116
#define TRISC                         117
#define TRISC0                        118
#define TRISC1                        119
#define TRISC2                        120
#define TRISC3                        121
#define TRISC4                        122
#define TRISC5                        123
#define TRISC6                        124
#define TRISC7                        125
#define PIE1                          126
#define TMR1IE                        127
#define TMR2IE                        128
#define CCP1IE                        129
#define SSPIE                         130
#define PCON                          131
#define nBOR                          132
#define nPOR                          133
#define SSPSTAT                       134
#define BF                            135
#define UA                            136
#define R_nW                          137
#define READ_WRITE                    138
#define I2C_READ                      139
#define nW                            140
#define R                             141
#define nWRITE                        142
#define R_W                           143
#define S                             144
#define I2C_START                     145
#define I2C_STOP                      146
#define P                             147
#define nA                            148
#define D_A                           149
#define D_nA                          150
#define D                             151
#define DATA_ADDRESS                  152
#define nADDRESS                      153
#define I2C_DATA                      154
#define CKE                           155
#define SMP                           156

#endif // _PIC16C62B_H_
