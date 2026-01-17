; ------------------------------------------------------------------
; IOCS calls
; ------------------------------------------------------------------
_B_KEYINP           equ     $00
_B_KEYSNS           equ     $01
_B_SFTSNS           equ     $02
_KEY_INIT           equ     $03
_BITSNS             equ     $04
_SKEYSET            equ     $05
_LEDCTRL            equ     $06
_LEDSET             equ     $07
_KEYDLY             equ     $08
_KEYREP             equ     $09
_OPT2TVON           equ     $0a
_OPT2TVOFF          equ     $0b
_TVCTRL             equ     $0c
_LEDMOD             equ     $0d
_TGUSEMD            equ     $0e
_DEFCHR             equ     $0f
_CRTMOD             equ     $10
_CONTRAST           equ     $11
_HSVTORGB           equ     $12
_TPALET             equ     $13
_TPALET2            equ     $14
_TCOLOR             equ     $15
_FNTADR             equ     $16
_VRAMGET            equ     $17
_VRAMPUT            equ     $18
_FNTGET             equ     $19
_TEXTGET            equ     $1a
_TEXTPUT            equ     $1b
_CLIPPUT            equ     $1c
_SCROLL             equ     $1d
_B_CURON            equ     $1e
_B_CUROFF           equ     $1f
_B_PUTC             equ     $20
_B_PRINT            equ     $21
_B_COLOR            equ     $22
_B_LOCATE           equ     $23
_B_DOWN_S           equ     $24
_B_UP_S             equ     $25
_B_UP               equ     $26
_B_DOWN             equ     $27
_B_RIGHT            equ     $28
_B_LEFT             equ     $29
_B_CLR_ST           equ     $2a
_B_ERA_ST           equ     $2b
_B_INS              equ     $2c
_B_DEL              equ     $2d
_B_CONSOL           equ     $2e
_B_PUTMES           equ     $2f
_SET232C            equ     $30
_LOF232C            equ     $31
_INP232C            equ     $32
_ISNS232C           equ     $33
_OSNS232C           equ     $34
_OUT232C            equ     $35
_MS_VCS             equ     $36
_EXESC              equ     $37
_CHR_ADR            equ     $38
_SETBEEP            equ     $39
_SETPRN             equ     $3a
_JOYGET             equ     $3b
_INIT_PRN           equ     $3c
_SNSPRN             equ     $3d
_OUTLPT             equ     $3e
_OUTPRN             equ     $3f
_B_SEEK             equ     $40
_B_VERIFY           equ     $41
_B_READDI           equ     $42
_B_DSKINI           equ     $43
_B_DRVSNS           equ     $44
_B_WRITE            equ     $45
_B_READ             equ     $46
_B_RECALI           equ     $47
_B_ASSIGN           equ     $48
_B_WRITED           equ     $49
_B_READID           equ     $4a
_B_BADFMT           equ     $4b
_B_READDL           equ     $4c
_B_FORMAT           equ     $4d
_B_DRVCHK           equ     $4e
_B_EJECT            equ     $4f
_DATEBCD            equ     $50
_DATESET            equ     $51
_TIMEBCD            equ     $52
_TIMESET            equ     $53
_DATEGET            equ     $54
_DATEBIN            equ     $55
_TIMEGET            equ     $56
_TIMEBIN            equ     $57
_DATECNV            equ     $58
_TIMECNV            equ     $59
_DATEASC            equ     $5a
_TIMEASC            equ     $5b
_DAYASC             equ     $5c
_ALARMMOD           equ     $5d
_ALARMSET           equ     $5e
_ALARMGET           equ     $5f
_ADPCMOUT           equ     $60
_ADPCMINP           equ     $61
_ADPCMAOT           equ     $62
_ADPCMAIN           equ     $63
_ADPCMLOT           equ     $64
_ADPCMLIN           equ     $65
_ADPCMSNS           equ     $66
_ADPCMMOD           equ     $67
_OPMSET             equ     $68
_OPMSNS             equ     $69
_OPMINTST           equ     $6a
_TIMERDST           equ     $6b
_VDISPST            equ     $6c
_CRTCRAS            equ     $6d
_HSYNCST            equ     $6e
_PRNINTST           equ     $6f
_MS_INIT            equ     $70
_MS_CURON           equ     $71
_MS_CUROF           equ     $72
_MS_STAT            equ     $73
_MS_GETDT           equ     $74
_MS_CURGT           equ     $75
_MS_CURST           equ     $76
_MS_LIMIT           equ     $77
_MS_OFFTM           equ     $78
_MS_ONTM            equ     $79
_MS_PATST           equ     $7a
_MS_SEL             equ     $7b
_MS_SEL2            equ     $7c
_SKEY_MOD           equ     $7d
_DENSNS             equ     $7e
_ONTIME             equ     $7f
_B_INTVCS           equ     $80
_B_SUPER            equ     $81
_B_BPEEK            equ     $82
_B_WPEEK            equ     $83
_B_LPEEK            equ     $84
_B_MEMSTR           equ     $85
_B_BPOKE            equ     $86
_B_WPOKE            equ     $87
_B_LPOKE            equ     $88
_B_MEMSET           equ     $89
_DMAMOVE            equ     $8a
_DMAMOV_A           equ     $8b
_DMAMOV_L           equ     $8c
_DMAMODE            equ     $8d
_BOOTINF            equ     $8e
_ROMVER             equ     $8f
_G_CLR_ON           equ     $90
_G_SETMOD           equ     $91
_G_PRISET           equ     $92
_G_SETSCR           equ     $93
_G_PALET            equ     $94
_G_PENCOL           equ     $95
_G_SETPAGE          equ     $96
_G_DOTLOAD          equ     $97
_G_DOTWRTMSK        equ     $98
_G_DOTWRT           equ     $99
_G_BITWRT           equ     $9a
_G_BITWRTBCK        equ     $9b
_G_BITWRTENL        equ     $9c
_SFTJIS             equ     $a0
_JISSFT             equ     $a1
_AKCONV             equ     $a2
_RMACNV             equ     $a3
_DAKJOB             equ     $a4
_HANJOB             equ     $a5
_SYS_STAT           equ     $ac
_B_CONMOD           equ     $ad
_OS_CURON           equ     $ae
_OS_CUROF           equ     $af
_DRAWMODE           equ     $b0
_APAGE              equ     $b1
_VPAGE              equ     $b2
_HOME               equ     $b3
_WINDOW             equ     $b4
_WIPE               equ     $b5
_PSET               equ     $b6
_POINT              equ     $b7
_LINE               equ     $b8
_BOX                equ     $b9
_FILL               equ     $ba
_CIRCLE             equ     $bb
_PAINT              equ     $bc
_SYMBOL             equ     $bd
_GETGRM             equ     $be
_PUTGRM             equ     $bf
_SP_INIT            equ     $c0
_SP_ON              equ     $c1
_SP_OFF             equ     $c2
_SP_CGCLR           equ     $c3
_SP_DEFCG           equ     $c4
_SP_GTPCG           equ     $c5
_SP_REGST           equ     $c6
_SP_REGGT           equ     $c7
_BGSCRLST           equ     $c8
_BGSCRLGT           equ     $c9
_BGCTRLST           equ     $ca
_BGCTRLGT           equ     $cb
_BGTEXTCL           equ     $cc
_BGTEXTST           equ     $cd
_BGTEXTGT           equ     $ce
_SPALET             equ     $cf
_TXXLINE            equ     $d3
_TXYLINE            equ     $d4
_TXLINE             equ     $d5
_TXBOX              equ     $d6
_TXFILL             equ     $d7
_TXREV              equ     $d8
_TXRASCPY           equ     $df
_ABORTRST           equ     $fd
_IPLERR             equ     $fe
_ABORTJOB           equ     $ff

_OPMDRV             equ     $f0

_M_INIT             equ     $00
_M_ALLOC            equ     $01
_M_ASSIGN           equ     $02
_M_VGET             equ     $03
_M_VSET             equ     $04
_M_TEMPO            equ     $05
_M_TRK              equ     $06
_M_FREE             equ     $07
_M_PLAY             equ     $08
_M_STAT             equ     $09
_M_STOP             equ     $0a
_M_CONT             equ     $0b
_M_ATOI             equ     $0c
_M_USE              equ     $0f
_M_CHAN             equ     $10
_M_PROG             equ     $11
_M_VOL              equ     $12
_M_PAN              equ     $13
_M_VEL              equ     $14
_M_TRNS             equ     $15
_M_ANTOFF           equ     $18
_M_DIROUT           equ     $19
_M_ENABLE           equ     $1a
_M_NTON             equ     $1b
_M_NTOFF            equ     $1c
_M_SYNC             equ     $20
_M_METER            equ     $21
_M_CLICK            equ     $22
_M_RECINT           equ     $23
_M_RECSET           equ     $24
_M_RECSTA           equ     $25
_M_RECSTP           equ     $26
_M_RECLEN           equ     $27
_M_THRU             equ     $28
_M_SNDSET           equ     $29
_M_PCMSET           equ     $2a
_M_SYSCH            equ     $2b
_M_BEND             equ     $2d
_M_FREEA            equ     $2f
_M_IFCHK            equ     $2c
_M_MOD              equ     $2e
_M_OUT              equ     $30
_M_IN               equ     $31
_M_MEAS             equ     $32
_M_YCOM             equ     $33
_M_START            equ     $34
_M_END              equ     $35
_M_MODSNS           equ     $36
_M_PCMREC           equ     $38
_M_PCMGET           equ     $39
_M_PCMLEN           equ     $3a
_M_PCMBSY           equ     $3b
_M_PCMON            equ     $3c
_M_CTRLRES          equ     $3d
_M_OPMREG           equ     $3e
_M_MDREG            equ     $3f
_M_TNMSET           equ     $40
_M_TNMGET           equ     $41
_M_PNMSET           equ     $42
_M_PNMGET           equ     $43
_M_MSTVOL           equ     $44
_M_OPMLFQ           equ     $46
_M_OPMEXC           equ     $47
_M_PGMFLT           equ     $49
_M_VOLFLT           equ     $4a
_M_PANFLT           equ     $4b
_M_VERSION          equ     $5e

IOCS                macro
                    ifne    \1<$80
                        moveq   #\1,d0
                    else
                        move.l  #\1,d0
                    endc
                    trap    #TRAP_IOSCALL
                    endm

; ------------------------------------------------------------------
TRAP_USER           equ     0
TRAP_BREAKPOINT     equ     8
TRAP_RESETPOWEROFF  equ     10
TRAP_BREAKKEY       equ     11
TRAP_COPYKEY        equ     12
TRAP_CTRLC          equ     13
TRAP_ERROR          equ     14
TRAP_IOSCALL        equ     15

OPM                 macro
                    if      \1<$80
                        moveq   #\1,d1
                    else
                        move.l  #\1,d1
                    endc
                    moveq   #_OPMDRV,d0
                    trap    #TRAP_IOSCALL
                    endm

; ------------------------------------------------------------------
_SCSIDRV            equ     $f5

_S_RESET            equ     $00
_S_SELECT           equ     $01
_S_CMDOUT           equ     $03
_S_DATAIN           equ     $04
_S_DATAOUT          equ     $05
_S_STSIN            equ     $06
_S_MSGIN            equ     $07
_S_MSGOUT           equ     $08
_S_PHASE            equ     $09
_S_INQUIRY          equ     $20
_S_READ             equ     $21
_S_WRITE            equ     $22
_S_FORMAT           equ     $23
_S_TESTUNIT         equ     $24
_S_READCAP          equ     $25
_S_READEXT          equ     $26
_S_WRITEEXT         equ     $27
_S_REZEROUNIT       equ     $2b
_S_REQUEST          equ     $2c
_S_SEEK             equ     $2d
_S_STARTSTOP        equ     $2f
_S_REASSIGN         equ     $31
_S_PAMEDIUM         equ     $32

SCSI                macro
                    ifne    \1<$80
                        moveq   #\1,d1
                    else
                        move.l  #\1,d1
                    endc
                    moveq   #_SCSIDRV,d0
                    trap    #TRAP_IOSCALL
                    endm

; ------------------------------------------------------------------
_RSDRV              equ     $f1

E_SET232C           equ     $30
E_LOF232C           equ     $31
E_INP232C           equ     $32
E_ISNS232C          equ     $33
E_OSNS232C          equ     $34
E_OUT232C           equ     $35
E_BUF232C           equ     $36
E_VER232C           equ     $37
E_PINP232C          equ     $38
E_PSET232C          equ     $39

ERS                 macro
                    move.l  #\1 or (\2 shl 8),d2
                    moveq   #_RSDRV,d0
                    trap    #TRAP_IOSCALL
                    endm

; ------------------------------------------------------------------
_MUSICDRV           equ     $f3
