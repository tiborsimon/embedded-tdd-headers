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

#ifndef _PIC16F639_H_
#define _PIC16F639_H_

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
#define RAIE                          31
#define INTE                          32
#define T0IE                          33
#define PEIE                          34
#define GIE                           35
#define PIR1                          36
#define TMR1IF                        37
#define OSFIF                         38
#define C1IF                          39
#define C2IF                          40
#define CRIF                          41
#define LVDIF                         42
#define EEIF                          43
#define T1CON                         44
#define TMR1ON                        45
#define TMR1CS                        46
#define nT1SYNC                       47
#define T1OSCEN                       48
#define T1CKPS0                       49
#define T1CKPS                        50
#define T1CKPS1                       51
#define TMR1GE                        52
#define T1GINV                        53
#define WDTCON                        54
#define SWDTEN                        55
#define WDTPS                         56
#define WDTPS0                        57
#define WDTPS1                        58
#define WDTPS2                        59
#define WDTPS3                        60
#define CMCON0                        61
#define CM                            62
#define CM0                           63
#define CM1                           64
#define CM2                           65
#define CIS                           66
#define C1INV                         67
#define C2INV                         68
#define C1OUT                         69
#define C2OUT                         70
#define CMCON1                        71
#define C2SYNC                        72
#define T1GSS                         73
#define OPTION_REG                    74
#define PS                            75
#define PS0                           76
#define PS1                           77
#define PS2                           78
#define PSA                           79
#define T0SE                          80
#define T0CS                          81
#define INTEDG                        82
#define nRAPU                         83
#define TRISA                         84
#define TRISA0                        85
#define TRISA1                        86
#define TRISA2                        87
#define TRISA3                        88
#define TRISA4                        89
#define TRISA5                        90
#define TRISC                         91
#define TRISC0                        92
#define TRISC1                        93
#define TRISC2                        94
#define TRISC3                        95
#define TRISC4                        96
#define TRISC5                        97
#define PIE1                          98
#define TMR1IE                        99
#define OSFIE                         100
#define C1IE                          101
#define C2IE                          102
#define CRIE                          103
#define LVDIE                         104
#define EEIE                          105
#define PCON                          106
#define nBOD                          107
#define nBOR                          108
#define nPOR                          109
#define nWUR                          110
#define SBODEN                        111
#define SBOREN                        112
#define ULPWUE                        113
#define OSCCON                        114
#define SCS                           115
#define LTS                           116
#define HTS                           117
#define OSTS                          118
#define IOSCF                         119
#define IRCF0                         120
#define IRCF1                         121
#define IRCF2                         122
#define OSCTUNE                       123
#define TUN0                          124
#define TUN                           125
#define TUN1                          126
#define TUN2                          127
#define TUN3                          128
#define TUN4                          129
#define LVDCON                        130
#define LVDL0                         131
#define LVDL                          132
#define LVDL1                         133
#define LVDL2                         134
#define LVDEN                         135
#define IRVST                         136
#define WPUDA                         137
#define WPUDA0                        138
#define WPUDA1                        139
#define WPUDA2                        140
#define WPUDA4                        141
#define WPUDA5                        142
#define IOCA                          143
#define IOCA0                         144
#define IOCA1                         145
#define IOCA2                         146
#define IOCA3                         147
#define IOCA4                         148
#define IOCA5                         149
#define WDA                           150
#define WDA0                          151
#define WDA1                          152
#define WDA2                          153
#define WDA4                          154
#define WDA5                          155
#define VRCON                         156
#define VR0                           157
#define VR                            158
#define VR1                           159
#define VR2                           160
#define VR3                           161
#define VRR                           162
#define VREN                          163
#define EECON1                        164
#define RD                            165
#define WR                            166
#define WREN                          167
#define WRERR                         168
#define CRCON                         169
#define CRREG                         170
#define CRREG0                        171
#define CRREG1                        172
#define ENC_DEC                       173
#define ENC_nDEC                      174
#define GO_nDONE                      175
#define GO                            176
#define CRDAT0                        177
#define CRDAT1                        178
#define CRDAT2                        179
#define CRDAT3                        180

#endif // _PIC16F639_H_
