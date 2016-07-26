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

#ifndef _PIC16LF818_H_
#define _PIC16LF818_H_

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
#define TMR1L                         48
#define T1CON                         49
#define TMR1ON                        50
#define TMR1CS                        51
#define nT1SYNC                       52
#define T1INSYNC                      53
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
#define SSPCON                        68
#define SSPM0                         69
#define SSPM                          70
#define SSPM1                         71
#define SSPM2                         72
#define SSPM3                         73
#define CKP                           74
#define SSPEN                         75
#define SSPOV                         76
#define WCOL                          77
#define CCP1CON                       78
#define CCP1M0                        79
#define CCP1M                         80
#define CCP1M1                        81
#define CCP1M2                        82
#define CCP1M3                        83
#define CCP1Y                         84
#define CCP1X                         85
#define ADCON0                        86
#define ADON                          87
#define nDONE                         88
#define GO_nDONE                      89
#define GO_DONE                       90
#define GO                            91
#define CHS                           92
#define CHS0                          93
#define CHS1                          94
#define CHS2                          95
#define ADCS                          96
#define ADCS0                         97
#define ADCS1                         98
#define OPTION_REG                    99
#define PS                            100
#define PS0                           101
#define PS1                           102
#define PS2                           103
#define PSA                           104
#define T0SE                          105
#define T0CS                          106
#define INTEDG                        107
#define nRBPU                         108
#define TRISA                         109
#define TRISA0                        110
#define TRISA1                        111
#define TRISA2                        112
#define TRISA3                        113
#define TRISA4                        114
#define TRISA5                        115
#define TRISA6                        116
#define TRISA7                        117
#define TRISB                         118
#define TRISB0                        119
#define TRISB1                        120
#define TRISB2                        121
#define TRISB3                        122
#define TRISB4                        123
#define TRISB5                        124
#define TRISB6                        125
#define TRISB7                        126
#define PIE1                          127
#define TMR1IE                        128
#define TMR2IE                        129
#define CCP1IE                        130
#define SSPIE                         131
#define ADIE                          132
#define PIE2                          133
#define EEIE                          134
#define PCON                          135
#define nBOR                          136
#define nBO                           137
#define nPOR                          138
#define OSCCON                        139
#define IOFS                          140
#define IRCF                          141
#define IRCF0                         142
#define IRCF1                         143
#define IRCF2                         144
#define OSCTUNE                       145
#define TUN0                          146
#define TUN                           147
#define TUN1                          148
#define TUN2                          149
#define TUN3                          150
#define TUN4                          151
#define TUN5                          152
#define SSPSTAT                       153
#define BF                            154
#define UA                            155
#define R_nW                          156
#define READ_WRITE                    157
#define I2C_READ                      158
#define nW                            159
#define R                             160
#define nWRITE                        161
#define R_W                           162
#define S                             163
#define I2C_START                     164
#define I2C_STOP                      165
#define P                             166
#define nA                            167
#define D_A                           168
#define D_nA                          169
#define D                             170
#define DATA_ADDRESS                  171
#define nADDRESS                      172
#define I2C_DATA                      173
#define CKE                           174
#define SMP                           175
#define ADCON1                        176
#define PCFG0                         177
#define PCFG                          178
#define PCFG1                         179
#define PCFG2                         180
#define PCFG3                         181
#define ADCS2                         182
#define ADFM                          183
#define EECON1                        184
#define RD                            185
#define WR                            186
#define WREN                          187
#define WRERR                         188
#define FREE                          189
#define EEPGD                         190

#endif // _PIC16LF818_H_
