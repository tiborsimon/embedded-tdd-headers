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

#ifndef _PIC16F819_H_
#define _PIC16F819_H_

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
#define TMR0IF                        34
#define RBIE                          35
#define INTE                          36
#define TMR0IE                        37
#define PEIE                          38
#define GIE                           39
#define PIR1                          40
#define TMR1IF                        41
#define TMR2IF                        42
#define CCP1IF                        43
#define SSPIF                         44
#define ADIF                          45
#define PIR2                          46
#define EEIF                          47
#define T1CON                         48
#define TMR1ON                        49
#define TMR1CS                        50
#define nT1SYNC                       51
#define T1INSYNC                      52
#define T1OSCEN                       53
#define T1CKPS0                       54
#define T1CKPS                        55
#define T1CKPS1                       56
#define T2CON                         57
#define T2CKPS0                       58
#define T2CKPS                        59
#define T2CKPS1                       60
#define TMR2ON                        61
#define TOUTPS0                       62
#define TOUTPS                        63
#define TOUTPS1                       64
#define TOUTPS2                       65
#define TOUTPS3                       66
#define SSPCON                        67
#define SSPM0                         68
#define SSPM                          69
#define SSPM1                         70
#define SSPM2                         71
#define SSPM3                         72
#define CKP                           73
#define SSPEN                         74
#define SSPOV                         75
#define WCOL                          76
#define CCP1CON                       77
#define CCP1M0                        78
#define CCP1M                         79
#define CCP1M1                        80
#define CCP1M2                        81
#define CCP1M3                        82
#define CCP1Y                         83
#define CCP1X                         84
#define ADCON0                        85
#define ADON                          86
#define nDONE                         87
#define GO_nDONE                      88
#define GO_DONE                       89
#define GO                            90
#define CHS                           91
#define CHS0                          92
#define CHS1                          93
#define CHS2                          94
#define ADCS                          95
#define ADCS0                         96
#define ADCS1                         97
#define OPTION_REG                    98
#define PS                            99
#define PS0                           100
#define PS1                           101
#define PS2                           102
#define PSA                           103
#define T0SE                          104
#define T0CS                          105
#define INTEDG                        106
#define nRBPU                         107
#define TRISA                         108
#define TRISA0                        109
#define TRISA1                        110
#define TRISA2                        111
#define TRISA3                        112
#define TRISA4                        113
#define TRISA5                        114
#define TRISA6                        115
#define TRISA7                        116
#define TRISB                         117
#define TRISB0                        118
#define TRISB1                        119
#define TRISB2                        120
#define TRISB3                        121
#define TRISB4                        122
#define TRISB5                        123
#define TRISB6                        124
#define TRISB7                        125
#define PIE1                          126
#define TMR1IE                        127
#define TMR2IE                        128
#define CCP1IE                        129
#define SSPIE                         130
#define ADIE                          131
#define PIE2                          132
#define EEIE                          133
#define PCON                          134
#define nBOR                          135
#define nBO                           136
#define nPOR                          137
#define OSCCON                        138
#define IOFS                          139
#define IRCF                          140
#define IRCF0                         141
#define IRCF1                         142
#define IRCF2                         143
#define OSCTUNE                       144
#define TUN0                          145
#define TUN                           146
#define TUN1                          147
#define TUN2                          148
#define TUN3                          149
#define TUN4                          150
#define TUN5                          151
#define SSPSTAT                       152
#define BF                            153
#define UA                            154
#define R_nW                          155
#define READ_WRITE                    156
#define I2C_READ                      157
#define nW                            158
#define R                             159
#define nWRITE                        160
#define R_W                           161
#define S                             162
#define I2C_START                     163
#define I2C_STOP                      164
#define P                             165
#define nA                            166
#define D_A                           167
#define D_nA                          168
#define D                             169
#define DATA_ADDRESS                  170
#define nADDRESS                      171
#define I2C_DATA                      172
#define CKE                           173
#define SMP                           174
#define ADCON1                        175
#define PCFG0                         176
#define PCFG                          177
#define PCFG1                         178
#define PCFG2                         179
#define PCFG3                         180
#define ADCS2                         181
#define ADFM                          182
#define EECON1                        183
#define RD                            184
#define WR                            185
#define WREN                          186
#define WRERR                         187
#define FREE                          188
#define EEPGD                         189

#endif // _PIC16F819_H_
