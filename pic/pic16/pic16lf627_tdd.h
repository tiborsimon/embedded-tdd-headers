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

#ifndef _PIC16LF627_H_
#define _PIC16LF627_H_

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
#define PCLATH                        30
#define INTCON                        31
#define RBIF                          32
#define INTF                          33
#define T0IF                          34
#define TMR0IF                        35
#define RBIE                          36
#define INTE                          37
#define T0IE                          38
#define TMR0IE                        39
#define PEIE                          40
#define GIE                           41
#define PIR1                          42
#define TMR1IF                        43
#define TMR2IF                        44
#define CCP1IF                        45
#define TXIF                          46
#define RCIF                          47
#define CMIF                          48
#define EEIF                          49
#define T1CON                         50
#define TMR1ON                        51
#define TMR1CS                        52
#define nT1SYNC                       53
#define T1OSCEN                       54
#define T1CKPS0                       55
#define T1CKPS                        56
#define T1CKPS1                       57
#define T2CON                         58
#define T2CKPS0                       59
#define T2CKPS                        60
#define T2CKPS1                       61
#define TMR2ON                        62
#define TOUTPS0                       63
#define TOUTPS                        64
#define TOUTPS1                       65
#define TOUTPS2                       66
#define TOUTPS3                       67
#define CCP1CON                       68
#define CCP1M0                        69
#define CCP1M                         70
#define CCP1M1                        71
#define CCP1M2                        72
#define CCP1M3                        73
#define CCP1Y                         74
#define CCP1X                         75
#define RCSTA                         76
#define RX9D                          77
#define OERR                          78
#define FERR                          79
#define ADDEN                         80
#define ADEN                          81
#define CREN                          82
#define SREN                          83
#define RX9                           84
#define SPEN                          85
#define CMCON                         86
#define CM                            87
#define CM0                           88
#define CM1                           89
#define CM2                           90
#define CIS                           91
#define C1INV                         92
#define C2INV                         93
#define C1OUT                         94
#define C2OUT                         95
#define OPTION_REG                    96
#define PS                            97
#define PS0                           98
#define PS1                           99
#define PS2                           100
#define PSA                           101
#define T0SE                          102
#define T0CS                          103
#define INTEDG                        104
#define nRBPU                         105
#define TRISA                         106
#define TRISA0                        107
#define TRISA1                        108
#define TRISA2                        109
#define TRISA3                        110
#define TRISA4                        111
#define TRISA5                        112
#define TRISA6                        113
#define TRISA7                        114
#define TRISB                         115
#define TRISB0                        116
#define TRISB1                        117
#define TRISB2                        118
#define TRISB3                        119
#define TRISB4                        120
#define TRISB5                        121
#define TRISB6                        122
#define TRISB7                        123
#define PIE1                          124
#define TMR1IE                        125
#define TMR2IE                        126
#define CCP1IE                        127
#define TXIE                          128
#define RCIE                          129
#define CMIE                          130
#define EEIE                          131
#define PCON                          132
#define nBOR                          133
#define nBO                           134
#define nBOD                          135
#define nPOR                          136
#define OSCF                          137
#define TXSTA                         138
#define TX9D                          139
#define TRMT                          140
#define BRGH                          141
#define SYNC                          142
#define TXEN                          143
#define TX9                           144
#define CSRC                          145
#define EECON1                        146
#define RD                            147
#define WR                            148
#define WREN                          149
#define WRERR                         150
#define VRCON                         151
#define VR0                           152
#define VR                            153
#define VR1                           154
#define VR2                           155
#define VR3                           156
#define VRR                           157
#define VROE                          158
#define VREN                          159

#endif // _PIC16LF627_H_
