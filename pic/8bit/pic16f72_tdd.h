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

#ifndef _PIC16F72_H_
#define _PIC16F72_H_

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
#define CCP1X                         91
#define ADRES                         92
#define ADCON0                        93
#define ADON                          94
#define nDONE                         95
#define GO_nDONE                      96
#define GO_DONE                       97
#define GO                            98
#define CHS                           99
#define CHS0                          100
#define CHS1                          101
#define CHS2                          102
#define ADCS                          103
#define ADCS0                         104
#define ADCS1                         105
#define OPTION_REG                    106
#define PS                            107
#define PS0                           108
#define PS1                           109
#define PS2                           110
#define PSA                           111
#define T0SE                          112
#define T0CS                          113
#define INTEDG                        114
#define nRBPU                         115
#define TRISA                         116
#define TRISA0                        117
#define TRISA1                        118
#define TRISA2                        119
#define TRISA3                        120
#define TRISA4                        121
#define TRISA5                        122
#define TRISB                         123
#define TRISB0                        124
#define TRISB1                        125
#define TRISB2                        126
#define TRISB3                        127
#define TRISB4                        128
#define TRISB5                        129
#define TRISB6                        130
#define TRISB7                        131
#define TRISC                         132
#define TRISC0                        133
#define TRISC1                        134
#define TRISC2                        135
#define TRISC3                        136
#define TRISC4                        137
#define TRISC5                        138
#define TRISC6                        139
#define TRISC7                        140
#define PIE1                          141
#define TMR1IE                        142
#define TMR2IE                        143
#define CCP1IE                        144
#define SSPIE                         145
#define ADIE                          146
#define PCON                          147
#define nBOR                          148
#define nBO                           149
#define nPOR                          150
#define SSPSTAT                       151
#define BF                            152
#define UA                            153
#define R_nW                          154
#define READ_WRITE                    155
#define I2C_READ                      156
#define nW                            157
#define R                             158
#define nWRITE                        159
#define R_W                           160
#define S                             161
#define I2C_START                     162
#define I2C_STOP                      163
#define P                             164
#define nA                            165
#define D_A                           166
#define D_nA                          167
#define D                             168
#define DATA_ADDRESS                  169
#define nADDRESS                      170
#define I2C_DATA                      171
#define CKE                           172
#define SMP                           173
#define ADCON1                        174
#define PCFG0                         175
#define PCFG                          176
#define PCFG1                         177
#define PCFG2                         178
#define PMCON1                        179
#define RD                            180

#endif // _PIC16F72_H_
