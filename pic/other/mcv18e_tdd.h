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

#ifndef _MCV18E_H_
#define _MCV18E_H_

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
#define DT1CK                         21
#define RB2                           22
#define RB3                           23
#define DCCP                          24
#define RB4                           25
#define RB5                           26
#define RB6                           27
#define RB7                           28
#define PCLATH                        29
#define INTCON                        30
#define RBIF                          31
#define INTF                          32
#define T0IF                          33
#define TMR0IF                        34
#define RBIE                          35
#define INTE                          36
#define T0IE                          37
#define TMR0IE                        38
#define PEIE                          39
#define GIE                           40
#define PIR1                          41
#define TMR1IF                        42
#define TMR2IF                        43
#define CCP1IF                        44
#define ADIF                          45
#define T1CON                         46
#define TMR1ON                        47
#define TMR1CS                        48
#define T1SYNC                        49
#define nT1SYNC                       50
#define T1OSCEN                       51
#define T1CKPS0                       52
#define T1CKPS                        53
#define T1CKPS1                       54
#define T2CON                         55
#define T2CKPS0                       56
#define T2CKPS                        57
#define T2CKPS1                       58
#define TMR2ON                        59
#define TOUTPS0                       60
#define TOUTPS                        61
#define TOUTPS1                       62
#define TOUTPS2                       63
#define TOUTPS3                       64
#define CCP1CON                       65
#define CCP1M0                        66
#define CCP1M                         67
#define CCP1M1                        68
#define CCP1M2                        69
#define CCP1M3                        70
#define DC1B                          71
#define DC1B0                         72
#define DC1B1                         73
#define P1M                           74
#define P1M0                          75
#define P1M1                          76
#define PWM1CON                       77
#define PDC0                          78
#define PDC                           79
#define PDC1                          80
#define PDC2                          81
#define PDC3                          82
#define PDC4                          83
#define PDC5                          84
#define PDC6                          85
#define PRSEN                         86
#define ECCPAS                        87
#define PSSBD                         88
#define PSSBD0                        89
#define PSSBD1                        90
#define PSSAC0                        91
#define PSSAC                         92
#define PSSAC1                        93
#define ECCPAS0                       94
#define ECCPAS1                       95
#define ECCPAS2                       96
#define ECCPASE                       97
#define ADRES                         98
#define ADCON0                        99
#define ADON                          100
#define nDONE                         101
#define GO_nDONE                      102
#define GO_DONE                       103
#define GO                            104
#define CHS                           105
#define CHS0                          106
#define CHS1                          107
#define CHS2                          108
#define ADCS                          109
#define ADCS0                         110
#define ADCS1                         111
#define OPTION_REG                    112
#define PS                            113
#define PS0                           114
#define PS1                           115
#define PS2                           116
#define PSA                           117
#define T0SE                          118
#define T0CS                          119
#define INTEDG                        120
#define nRBPU                         121
#define TRISA                         122
#define TRISA0                        123
#define TRISA1                        124
#define TRISA2                        125
#define TRISA3                        126
#define TRISA4                        127
#define TRISB                         128
#define TRISB0                        129
#define TT1CK                         130
#define TRISB1                        131
#define TRISB2                        132
#define TCCP                          133
#define TRISB3                        134
#define TRISB4                        135
#define TRISB5                        136
#define TRISB6                        137
#define TRISB7                        138
#define PIE1                          139
#define TMR1IE                        140
#define TMR2IE                        141
#define CCP1IE                        142
#define ADIE                          143
#define PCON                          144
#define nBOR                          145
#define nBO                           146
#define nBOD                          147
#define nPOR                          148
#define ADCON1                        149
#define PCFG0                         150
#define PCFG                          151
#define PCFG1                         152
#define PCFG2                         153

#endif // _MCV18E_H_
