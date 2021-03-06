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

#ifndef _PIC18F2455_H_
#define _PIC18F2455_H_

#define UFRML                         0
#define FRML                          1
#define FRM0                          2
#define UFRML_FRM                     3
#define FRM1                          4
#define FRM2                          5
#define FRM3                          6
#define FRM4                          7
#define FRM5                          8
#define FRM6                          9
#define FRM7                          10
#define UFRMH                         11
#define FRM8                          12
#define UFRMH_FRM                     13
#define FRM9                          14
#define FRM10                         15
#define UIR                           16
#define URSTIF                        17
#define UERRIF                        18
#define ACTVIF                        19
#define TRNIF                         20
#define IDLEIF                        21
#define STALLIF                       22
#define SOFIF                         23
#define UIE                           24
#define URSTIE                        25
#define UERRIE                        26
#define ACTVIE                        27
#define TRNIE                         28
#define IDLEIE                        29
#define STALLIE                       30
#define SOFIE                         31
#define UEIR                          32
#define PIDEF                         33
#define CRC5EF                        34
#define CRC16EF                       35
#define DFN8EF                        36
#define BTOEF                         37
#define BTSEF                         38
#define UEIE                          39
#define PIDEE                         40
#define CRC5EE                        41
#define CRC16EE                       42
#define DFN8EE                        43
#define BTOEE                         44
#define BTSEE                         45
#define USTAT                         46
#define PPBI                          47
#define DIR                           48
#define ENDP                          49
#define ENDP0                         50
#define ENDP1                         51
#define ENDP2                         52
#define ENDP3                         53
#define UCON                          54
#define SUSPND                        55
#define RESUME                        56
#define USBEN                         57
#define PKTDIS                        58
#define SE0                           59
#define PPBRST                        60
#define UADDR                         61
#define ADDR                          62
#define ADDR0                         63
#define ADDR1                         64
#define ADDR2                         65
#define ADDR3                         66
#define ADDR4                         67
#define ADDR5                         68
#define ADDR6                         69
#define UCFG                          70
#define PPB                           71
#define UPP0                          72
#define PPB0                          73
#define UPP1                          74
#define PPB1                          75
#define FSEN                          76
#define UTRDIS                        77
#define UPUEN                         78
#define UOEMON                        79
#define UTEYE                         80
#define UEP0                          81
#define UEP0_EPSTALL                  82
#define EP0STALL                      83
#define EPSTALL0                      84
#define UEP0_EPINEN                   85
#define EPINEN0                       86
#define EP0INEN                       87
#define UEP0_EPOUTEN                  88
#define EP0OUTEN                      89
#define EPOUTEN0                      90
#define EPCONDIS0                     91
#define EP0CONDIS                     92
#define UEP0_EPCONDIS                 93
#define UEP0_EPHSHK                   94
#define EP0HSHK                       95
#define EPHSHK0                       96
#define UEP1                          97
#define EPSTALL1                      98
#define EP1STALL                      99
#define UEP1_EPSTALL                  100
#define EPINEN1                       101
#define EP1INEN                       102
#define UEP1_EPINEN                   103
#define EPOUTEN1                      104
#define UEP1_EPOUTEN                  105
#define EP1OUTEN                      106
#define UEP1_EPCONDIS                 107
#define EP1CONDIS                     108
#define EPCONDIS1                     109
#define EPHSHK1                       110
#define EP1HSHK                       111
#define UEP1_EPHSHK                   112
#define UEP2                          113
#define EP2STALL                      114
#define EPSTALL2                      115
#define UEP2_EPSTALL                  116
#define EP2INEN                       117
#define EPINEN2                       118
#define UEP2_EPINEN                   119
#define EP2OUTEN                      120
#define UEP2_EPOUTEN                  121
#define EPOUTEN2                      122
#define EP2CONDIS                     123
#define UEP2_EPCONDIS                 124
#define EPCONDIS2                     125
#define EP2HSHK                       126
#define EPHSHK2                       127
#define UEP2_EPHSHK                   128
#define UEP3                          129
#define UEP3_EPSTALL                  130
#define EPSTALL3                      131
#define EP3STALL                      132
#define UEP3_EPINEN                   133
#define EPINEN3                       134
#define EP3INEN                       135
#define EP3OUTEN                      136
#define EPOUTEN3                      137
#define UEP3_EPOUTEN                  138
#define UEP3_EPCONDIS                 139
#define EP3CONDIS                     140
#define EPCONDIS3                     141
#define EPHSHK3                       142
#define UEP3_EPHSHK                   143
#define EP3HSHK                       144
#define UEP4                          145
#define EP4STALL                      146
#define EPSTALL4                      147
#define UEP4_EPSTALL                  148
#define UEP4_EPINEN                   149
#define EP4INEN                       150
#define EPINEN4                       151
#define UEP4_EPOUTEN                  152
#define EPOUTEN4                      153
#define EP4OUTEN                      154
#define EPCONDIS4                     155
#define EP4CONDIS                     156
#define UEP4_EPCONDIS                 157
#define EPHSHK4                       158
#define EP4HSHK                       159
#define UEP4_EPHSHK                   160
#define UEP5                          161
#define EP5STALL                      162
#define UEP5_EPSTALL                  163
#define EPSTALL5                      164
#define EPINEN5                       165
#define UEP5_EPINEN                   166
#define EP5INEN                       167
#define EPOUTEN5                      168
#define UEP5_EPOUTEN                  169
#define EP5OUTEN                      170
#define EPCONDIS5                     171
#define EP5CONDIS                     172
#define UEP5_EPCONDIS                 173
#define UEP5_EPHSHK                   174
#define EPHSHK5                       175
#define EP5HSHK                       176
#define UEP6                          177
#define EPSTALL6                      178
#define UEP6_EPSTALL                  179
#define EP6STALL                      180
#define EP6INEN                       181
#define UEP6_EPINEN                   182
#define EPINEN6                       183
#define EP6OUTEN                      184
#define EPOUTEN6                      185
#define UEP6_EPOUTEN                  186
#define UEP6_EPCONDIS                 187
#define EP6CONDIS                     188
#define EPCONDIS6                     189
#define EPHSHK6                       190
#define UEP6_EPHSHK                   191
#define EP6HSHK                       192
#define UEP7                          193
#define UEP7_EPSTALL                  194
#define EP7STALL                      195
#define EPSTALL7                      196
#define EP7INEN                       197
#define EPINEN7                       198
#define UEP7_EPINEN                   199
#define EP7OUTEN                      200
#define UEP7_EPOUTEN                  201
#define EPOUTEN7                      202
#define UEP7_EPCONDIS                 203
#define EP7CONDIS                     204
#define EPCONDIS7                     205
#define EPHSHK7                       206
#define UEP7_EPHSHK                   207
#define EP7HSHK                       208
#define UEP8                          209
#define EPSTALL8                      210
#define UEP8_EPSTALL                  211
#define UEP8_EPINEN                   212
#define EPINEN8                       213
#define UEP8_EPOUTEN                  214
#define EPOUTEN8                      215
#define UEP8_EPCONDIS                 216
#define EPCONDIS8                     217
#define UEP8_EPHSHK                   218
#define EPHSHK8                       219
#define UEP9                          220
#define EPSTALL9                      221
#define UEP9_EPSTALL                  222
#define EPINEN9                       223
#define UEP9_EPINEN                   224
#define UEP9_EPOUTEN                  225
#define EPOUTEN9                      226
#define UEP9_EPCONDIS                 227
#define EPCONDIS9                     228
#define UEP9_EPHSHK                   229
#define EPHSHK9                       230
#define UEP10                         231
#define EPSTALL10                     232
#define UEP10_EPSTALL                 233
#define EPINEN10                      234
#define UEP10_EPINEN                  235
#define UEP10_EPOUTEN                 236
#define EPOUTEN10                     237
#define EPCONDIS10                    238
#define UEP10_EPCONDIS                239
#define UEP10_EPHSHK                  240
#define EPHSHK10                      241
#define UEP11                         242
#define UEP11_EPSTALL                 243
#define EPSTALL11                     244
#define EPINEN11                      245
#define UEP11_EPINEN                  246
#define UEP11_EPOUTEN                 247
#define EPOUTEN11                     248
#define EPCONDIS11                    249
#define UEP11_EPCONDIS                250
#define UEP11_EPHSHK                  251
#define EPHSHK11                      252
#define UEP12                         253
#define EPSTALL12                     254
#define UEP12_EPSTALL                 255
#define UEP12_EPINEN                  256
#define EPINEN12                      257
#define EPOUTEN12                     258
#define UEP12_EPOUTEN                 259
#define EPCONDIS12                    260
#define UEP12_EPCONDIS                261
#define EPHSHK12                      262
#define UEP12_EPHSHK                  263
#define UEP13                         264
#define UEP13_EPSTALL                 265
#define EPSTALL13                     266
#define EPINEN13                      267
#define UEP13_EPINEN                  268
#define UEP13_EPOUTEN                 269
#define EPOUTEN13                     270
#define EPCONDIS13                    271
#define UEP13_EPCONDIS                272
#define EPHSHK13                      273
#define UEP13_EPHSHK                  274
#define UEP14                         275
#define UEP14_EPSTALL                 276
#define EPSTALL14                     277
#define EPINEN14                      278
#define UEP14_EPINEN                  279
#define UEP14_EPOUTEN                 280
#define EPOUTEN14                     281
#define EPCONDIS14                    282
#define UEP14_EPCONDIS                283
#define UEP14_EPHSHK                  284
#define EPHSHK14                      285
#define UEP15                         286
#define UEP15_EPSTALL                 287
#define EPSTALL15                     288
#define UEP15_EPINEN                  289
#define EPINEN15                      290
#define UEP15_EPOUTEN                 291
#define EPOUTEN15                     292
#define EPCONDIS15                    293
#define UEP15_EPCONDIS                294
#define UEP15_EPHSHK                  295
#define EPHSHK15                      296
#define PORTA                         297
#define ULPWUIN                       298
#define AN0                           299
#define PORTA_RA0                     300
#define AN1                           301
#define PORTA_RA1                     302
#define AN2                           303
#define PORTA_RA2                     304
#define VREFM                         305
#define AN3                           306
#define PORTA_RA3                     307
#define VREFP                         308
#define PORTA_RA4                     309
#define T0CKI                         310
#define AN4                           311
#define PORTA_RA5                     312
#define LVDIN                         313
#define HLVDIN                        314
#define PORTA_RA6                     315
#define OSC2                          316
#define PORTB                         317
#define INT0                          318
#define PORTB_RB0                     319
#define INT1                          320
#define PORTB_RB1                     321
#define INT2                          322
#define PORTB_RB2                     323
#define CCP2_PA2                      324
#define PORTB_RB3                     325
#define PORTB_RB4                     326
#define PGM                           327
#define PORTB_RB5                     328
#define PGC                           329
#define PORTB_RB6                     330
#define PGD                           331
#define PORTB_RB7                     332
#define PORTC                         333
#define T13CKI                        334
#define T1OSO                         335
#define PORTC_RC0                     336
#define CCP2                          337
#define T1OSI                         338
#define PA2                           339
#define PORTC_RC1                     340
#define CCP1                          341
#define P1A                           342
#define PA1                           343
#define PORTC_RC2                     344
#define RC4                           345
#define RC5                           346
#define TX                            347
#define CK                            348
#define PORTC_RC6                     349
#define DT                            350
#define RX                            351
#define PORTC_RC7                     352
#define PORTE                         353
#define RE3                           354
#define PC3E                          355
#define CCP9E                         356
#define LATA                          357
#define LATA0                         358
#define LA0                           359
#define LATA1                         360
#define LA1                           361
#define LATA2                         362
#define LA2                           363
#define LATA3                         364
#define LA3                           365
#define LATA4                         366
#define LA4                           367
#define LATA5                         368
#define LA5                           369
#define LATA6                         370
#define LA6                           371
#define LATB                          372
#define LB0                           373
#define LATB0                         374
#define LB1                           375
#define LATB1                         376
#define LB2                           377
#define LATB2                         378
#define LB3                           379
#define LATB3                         380
#define LB4                           381
#define LATB4                         382
#define LB5                           383
#define LATB5                         384
#define LB6                           385
#define LATB6                         386
#define LB7                           387
#define LATB7                         388
#define LATC                          389
#define LATC0                         390
#define LC0                           391
#define LATC1                         392
#define LC1                           393
#define LATC2                         394
#define LC2                           395
#define LC6                           396
#define LATC6                         397
#define LATC7                         398
#define LC7                           399
#define TRISA                         400
#define TRISA_RA0                     401
#define TRISA0                        402
#define TRISA_RA1                     403
#define TRISA1                        404
#define TRISA2                        405
#define TRISA_RA2                     406
#define TRISA_RA3                     407
#define TRISA3                        408
#define TRISA_RA4                     409
#define TRISA4                        410
#define TRISA_RA5                     411
#define TRISA5                        412
#define TRISA_RA6                     413
#define TRISA6                        414
#define TRISB                         415
#define TRISB_RB0                     416
#define TRISB0                        417
#define TRISB_RB1                     418
#define TRISB1                        419
#define TRISB_RB2                     420
#define TRISB2                        421
#define TRISB_RB3                     422
#define TRISB3                        423
#define TRISB_RB4                     424
#define TRISB4                        425
#define TRISB_RB5                     426
#define TRISB5                        427
#define TRISB_RB6                     428
#define TRISB6                        429
#define TRISB_RB7                     430
#define TRISB7                        431
#define TRISC                         432
#define TRISC0                        433
#define TRISC_RC0                     434
#define TRISC1                        435
#define TRISC_RC1                     436
#define TRISC2                        437
#define TRISC_RC2                     438
#define TRISC6                        439
#define TRISC_RC6                     440
#define TRISC7                        441
#define TRISC_RC7                     442
#define OSCTUNE                       443
#define TUN0                          444
#define TUN                           445
#define TUN1                          446
#define TUN2                          447
#define TUN3                          448
#define TUN4                          449
#define INTSRC                        450
#define PIE1                          451
#define TMR1IE                        452
#define TMR2IE                        453
#define CCP1IE                        454
#define SSPIE                         455
#define TXIE                          456
#define TX1IE                         457
#define RCIE                          458
#define RC1IE                         459
#define ADIE                          460
#define PIR1                          461
#define TMR1IF                        462
#define TMR2IF                        463
#define CCP1IF                        464
#define SSPIF                         465
#define TXIF                          466
#define TX1IF                         467
#define RCIF                          468
#define RC1IF                         469
#define ADIF                          470
#define IPR1                          471
#define TMR1IP                        472
#define TMR2IP                        473
#define CCP1IP                        474
#define SSPIP                         475
#define TX1IP                         476
#define TXIP                          477
#define RC1IP                         478
#define RCIP                          479
#define ADIP                          480
#define PIE2                          481
#define CCP2IE                        482
#define TMR3IE                        483
#define HLVDIE                        484
#define LVDIE                         485
#define BCLIE                         486
#define EEIE                          487
#define USBIE                         488
#define CMIE                          489
#define OSCFIE                        490
#define PIR2                          491
#define CCP2IF                        492
#define TMR3IF                        493
#define HLVDIF                        494
#define LVDIF                         495
#define BCLIF                         496
#define EEIF                          497
#define USBIF                         498
#define CMIF                          499
#define OSCFIF                        500
#define IPR2                          501
#define CCP2IP                        502
#define TMR3IP                        503
#define HLVDIP                        504
#define LVDIP                         505
#define BCLIP                         506
#define EEIP                          507
#define USBIP                         508
#define CMIP                          509
#define OSCFIP                        510
#define EECON1                        511
#define RD                            512
#define WR                            513
#define WREN                          514
#define WRERR                         515
#define FREE                          516
#define CFGS                          517
#define EEFS                          518
#define EEPGD                         519
#define RCSTA                         520
#define RCD8                          521
#define RX9D                          522
#define OERR                          523
#define FERR                          524
#define ADDEN                         525
#define ADEN                          526
#define CREN                          527
#define SRENA                         528
#define SREN                          529
#define RC9                           530
#define RC8_9                         531
#define RX9                           532
#define SPEN                          533
#define TXSTA                         534
#define TXD8                          535
#define TX9D1                         536
#define TX9D                          537
#define TRMT                          538
#define TRMT1                         539
#define BRGH1                         540
#define BRGH                          541
#define SENDB1                        542
#define SENDB                         543
#define SYNC                          544
#define SYNC1                         545
#define TXEN1                         546
#define TXEN                          547
#define TX91                          548
#define TX8_9                         549
#define TX9                           550
#define CSRC1                         551
#define CSRC                          552
#define T3CON                         553
#define TMR3ON                        554
#define TMR3CS                        555
#define nT3SYNC                       556
#define T3NSYNC                       557
#define NOT_T3SYNC                    558
#define T3SYNC                        559
#define SOSCEN3                       560
#define T3CCP1                        561
#define T3CKPS                        562
#define T3CKPS0                       563
#define T3CKPS1                       564
#define T3CCP2                        565
#define T3CON_RD16                    566
#define RD163                         567
#define T3RD16                        568
#define CMCON                         569
#define CM                            570
#define CMEN0                         571
#define CM0                           572
#define CMEN1                         573
#define CM1                           574
#define CMEN2                         575
#define CM2                           576
#define CIS                           577
#define C1INV                         578
#define C2INV                         579
#define C1OUT                         580
#define C2OUT                         581
#define CVRCON                        582
#define CVR                           583
#define CVR0                          584
#define CVR1                          585
#define CVR2                          586
#define CVR3                          587
#define CVRSS                         588
#define CVREF                         589
#define CVRR                          590
#define CVROEN                        591
#define CVROE                         592
#define CVREN                         593
#define ECCP1AS                       594
#define PSSAC                         595
#define PSSAC0                        596
#define PSSAC1                        597
#define ECCPAS0                       598
#define ECCPAS                        599
#define ECCPAS1                       600
#define ECCPAS2                       601
#define ECCPASE                       602
#define ECCP1DEL                      603
#define PRSEN                         604
#define BAUDCON                       605
#define ABDEN                         606
#define W4E                           607
#define WUE                           608
#define BRG16                         609
#define TXCKP                         610
#define SCKP                          611
#define RXCKP                         612
#define RXDTP                         613
#define RCMT                          614
#define RCIDL                         615
#define ABDOVF                        616
#define CCP2CON                       617
#define CCP2M                         618
#define CCP2M0                        619
#define CCP2M1                        620
#define CCP2M2                        621
#define CCP2M3                        622
#define DC2B0                         623
#define DC2B                          624
#define DC2B1                         625
#define CCP1CON                       626
#define CCP1M0                        627
#define CCP1M                         628
#define CCP1M1                        629
#define CCP1M2                        630
#define CCP1M3                        631
#define DC1B                          632
#define DC1B0                         633
#define DC1B1                         634
#define ADCON2                        635
#define ADCS0                         636
#define ADCS                          637
#define ADCS1                         638
#define ADCS2                         639
#define ACQT0                         640
#define ACQT                          641
#define ACQT1                         642
#define ACQT2                         643
#define ADFM                          644
#define ADCON1                        645
#define PCFG0                         646
#define PCFG                          647
#define PCFG1                         648
#define PCFG2                         649
#define CHSN3                         650
#define PCFG3                         651
#define VCFG                          652
#define VCFG0                         653
#define VCFG01                        654
#define VCFG11                        655
#define VCFG1                         656
#define ADCON0                        657
#define ADON                          658
#define nDONE                         659
#define GO_nDONE                      660
#define NOT_DONE                      661
#define GODONE                        662
#define GO_DONE                       663
#define DONE                          664
#define GO_NOT_DONE                   665
#define GO                            666
#define CHS0                          667
#define CHS                           668
#define CHS1                          669
#define CHS2                          670
#define CHS3                          671
#define SSPCON2                       672
#define SEN                           673
#define RSEN                          674
#define PEN                           675
#define RCEN                          676
#define ACKEN                         677
#define ACKDT                         678
#define ACKSTAT                       679
#define GCEN                          680
#define SSPCON1                       681
#define SSPM0                         682
#define SSPM                          683
#define SSPM1                         684
#define SSPM2                         685
#define SSPM3                         686
#define CKP                           687
#define SSPEN                         688
#define SSPOV                         689
#define WCOL                          690
#define SSPSTAT                       691
#define BF                            692
#define UA                            693
#define R_NOT_W                       694
#define READ_WRITE                    695
#define NOT_W                         696
#define R_W                           697
#define nW                            698
#define RW                            699
#define nWRITE                        700
#define R                             701
#define NOT_WRITE                     702
#define R_nW                          703
#define I2C_READ                      704
#define START                         705
#define S                             706
#define I2C_START                     707
#define STOP                          708
#define I2C_STOP                      709
#define P                             710
#define NOT_A                         711
#define DATA_ADDRESS                  712
#define nA                            713
#define D_A                           714
#define D_nA                          715
#define D                             716
#define DA                            717
#define D_NOT_A                       718
#define NOT_ADDRESS                   719
#define nADDRESS                      720
#define I2C_DAT                       721
#define CKE                           722
#define SMP                           723
#define T2CON                         724
#define T2CKPS0                       725
#define T2CKPS                        726
#define T2CKPS1                       727
#define TMR2ON                        728
#define T2OUTPS0                      729
#define TOUTPS0                       730
#define TOUTPS                        731
#define T2OUTPS1                      732
#define TOUTPS1                       733
#define T2OUTPS2                      734
#define TOUTPS2                       735
#define T2OUTPS3                      736
#define TOUTPS3                       737
#define PR2                           738
#define WM0                           739
#define WM1                           740
#define WAIT0                         741
#define WAIT1                         742
#define EBDIS                         743
#define T1CON                         744
#define TMR1ON                        745
#define TMR1CS                        746
#define NOT_T1SYNC                    747
#define T1SYNC                        748
#define nT1SYNC                       749
#define T1OSCEN                       750
#define SOSCEN                        751
#define T1CKPS0                       752
#define T1CKPS                        753
#define T1CKPS1                       754
#define T1RUN                         755
#define T1CON_RD16                    756
#define T1RD16                        757
#define RCON                          758
#define BOR                           759
#define NOT_BOR                       760
#define nBOR                          761
#define POR                           762
#define nPOR                          763
#define NOT_POR                       764
#define PD                            765
#define nPD                           766
#define NOT_PD                        767
#define NOT_TO                        768
#define nTO                           769
#define TO                            770
#define nRI                           771
#define NOT_RI                        772
#define RI                            773
#define SBOREN                        774
#define nIPEN                         775
#define IPEN                          776
#define NOT_IPEN                      777
#define WDTCON                        778
#define SWDTE                         779
#define SWDTEN                        780
#define HLVDCON                       781
#define HLVDL                         782
#define HLVDL0                        783
#define LVV0                          784
#define LVDL0                         785
#define HLVDL1                        786
#define LVDL1                         787
#define LVV1                          788
#define HLVDL2                        789
#define LVV2                          790
#define LVDL2                         791
#define HLVDL3                        792
#define LVV3                          793
#define LVDL3                         794
#define HLVDEN                        795
#define LVDEN                         796
#define BGST                          797
#define IRVST                         798
#define IVRST                         799
#define VDIRMAG                       800
#define OSCCON                        801
#define SCS0                          802
#define SCS                           803
#define SCS1                          804
#define FLTS                          805
#define IOFS                          806
#define OSTS                          807
#define IRCF                          808
#define IRCF0                         809
#define IRCF1                         810
#define IRCF2                         811
#define IDLEN                         812
#define T0CON                         813
#define T0PS                          814
#define T0PS0                         815
#define T0PS1                         816
#define T0PS2                         817
#define PSA                           818
#define T0SE                          819
#define T0CS                          820
#define T08BIT                        821
#define TMR0ON                        822
#define STATUS                        823
#define C                             824
#define CARRY                         825
#define DC                            826
#define ZERO                          827
#define Z                             828
#define OV                            829
#define OVERFLOW                      830
#define N                             831
#define NEGATIVE                      832
#define INTCON3                       833
#define INT1IF                        834
#define INT1F                         835
#define INT2IF                        836
#define INT2F                         837
#define INT1E                         838
#define INT1IE                        839
#define INT2IE                        840
#define INT2E                         841
#define INT1P                         842
#define INT1IP                        843
#define INT2IP                        844
#define INT2P                         845
#define INTCON2                       846
#define RBIP                          847
#define TMR0IP                        848
#define T0IP                          849
#define INTEDG2                       850
#define INTEDG1                       851
#define INTEDG0                       852
#define RBPU                          853
#define NOT_RBPU                      854
#define nRBPU                         855
#define INTCON                        856
#define RBIF                          857
#define INT0F                         858
#define INT0IF                        859
#define T0IF                          860
#define TMR0IF                        861
#define RBIE                          862
#define INT0E                         863
#define INT0IE                        864
#define T0IE                          865
#define TMR0IE                        866
#define PEIE                          867
#define PEIE_GIEL                     868
#define GIEL                          869
#define GIE_GIEH                      870
#define GIE                           871
#define GIEH                          872
#define STKPTR0                       873
#define STKPTR                        874
#define STKPTR1                       875
#define STKPTR2                       876
#define STKPTR3                       877
#define STKPTR4                       878
#define STKUNF                        879
#define STKOVF                        880
#define STKFUL                        881

#endif // _PIC18F2455_H_
