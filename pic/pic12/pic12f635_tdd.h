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

#ifndef _PIC12F635_H_
#define _PIC12F635_H_

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
#define GPIO                          12
#define RA0                           13
#define GP0                           14
#define RA1                           15
#define GP1                           16
#define RA2                           17
#define GP2                           18
#define RA3                           19
#define GP3                           20
#define RA4                           21
#define GP4                           22
#define RA5                           23
#define GP5                           24
#define PCLATH                        25
#define INTCON                        26
#define RAIF                          27
#define INTF                          28
#define T0IF                          29
#define RAIE                          30
#define INTE                          31
#define T0IE                          32
#define PEIE                          33
#define GIE                           34
#define PIR1                          35
#define TMR1IF                        36
#define OSFIF                         37
#define C1IF                          38
#define CRIF                          39
#define LVDIF                         40
#define EEIF                          41
#define T1CON                         42
#define TMR1ON                        43
#define TMR1CS                        44
#define nT1SYNC                       45
#define T1OSCEN                       46
#define T1CKPS0                       47
#define T1CKPS                        48
#define T1CKPS1                       49
#define TMR1GE                        50
#define T1GINV                        51
#define WDTCON                        52
#define SWDTEN                        53
#define WDTPS                         54
#define WDTPS0                        55
#define WDTPS1                        56
#define WDTPS2                        57
#define WDTPS3                        58
#define CMCON0                        59
#define CM                            60
#define CM0                           61
#define CM1                           62
#define CM2                           63
#define CIS                           64
#define C1INV                         65
#define CINV                          66
#define COUT                          67
#define C1OUT                         68
#define CMCON1                        69
#define C1SYNC                        70
#define CMSYNC                        71
#define T1GSS                         72
#define OPTION_REG                    73
#define PS                            74
#define PS0                           75
#define PS1                           76
#define PS2                           77
#define PSA                           78
#define T0SE                          79
#define T0CS                          80
#define INTEDG                        81
#define nRAPU                         82
#define TRISIO                        83
#define TRISA0                        84
#define TRISIO0                       85
#define TRISA1                        86
#define TRISIO1                       87
#define TRISA2                        88
#define TRISIO2                       89
#define TRISA3                        90
#define TRISIO3                       91
#define TRISIO4                       92
#define TRISA4                        93
#define TRISIO5                       94
#define TRISA5                        95
#define PIE1                          96
#define TMR1IE                        97
#define OSFIE                         98
#define C1IE                          99
#define CRIE                          100
#define LVDIE                         101
#define EEIE                          102
#define PCON                          103
#define nBOD                          104
#define nBOR                          105
#define nPOR                          106
#define nWUR                          107
#define SBODEN                        108
#define SBOREN                        109
#define ULPWUE                        110
#define OSCCON                        111
#define SCS                           112
#define LTS                           113
#define HTS                           114
#define OSTS                          115
#define IRCF                          116
#define IRCF0                         117
#define IRCF1                         118
#define IRCF2                         119
#define OSCTUNE                       120
#define TUN0                          121
#define TUN                           122
#define TUN1                          123
#define TUN2                          124
#define TUN3                          125
#define TUN4                          126
#define LVDCON                        127
#define LVDL0                         128
#define LVDL                          129
#define LVDL1                         130
#define LVDL2                         131
#define PLVDEN                        132
#define LVDEN                         133
#define IRVST                         134
#define WPUDA                         135
#define WPUDA0                        136
#define WPUDA1                        137
#define WPUDA2                        138
#define WPUDA4                        139
#define WPUDA5                        140
#define IOCA                          141
#define IOCA0                         142
#define IOCA1                         143
#define IOCA2                         144
#define IOCA3                         145
#define IOCA4                         146
#define IOCA5                         147
#define WDA                           148
#define WDA0                          149
#define WDA1                          150
#define WDA2                          151
#define WDA4                          152
#define WDA5                          153
#define VRCON                         154
#define VR0                           155
#define VR                            156
#define VR1                           157
#define VR2                           158
#define VR3                           159
#define VRR                           160
#define VREN                          161
#define EEDAT                         162
#define EECON1                        163
#define RD                            164
#define WR                            165
#define WREN                          166
#define WRERR                         167
#define CRCON                         168
#define CRREG                         169
#define CRREG0                        170
#define CRREG1                        171
#define ENC_DEC                       172
#define ENC_nDEC                      173
#define GO_nDONE                      174
#define GO                            175
#define CRDAT0                        176
#define CRDAT1                        177
#define CRDAT2                        178
#define CRDAT3                        179

#endif // _PIC12F635_H_
