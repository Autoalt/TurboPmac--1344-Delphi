; M Variable and I/O

; JI/O Port M-variables
M0->Y:$078400,0			; I/O00 Data Line; J3 Pin 1
M1->Y:$078400,1			; I/O01 Data Line; J3 Pin 2
M2->Y:$078400,2			; I/O02 Data Line; J3 Pin 3
M3->Y:$078400,3			; I/O03 Data Line; J3 Pin 4
M4->Y:$078400,4			; I/O04 Data Line; J3 Pin 5
M5->Y:$078400,5			; I/O05 Data Line; J3 Pin 6
M6->Y:$078400,6			; I/O06 Data Line; J3 Pin 7
M7->Y:$078400,7			; I/O07 Data Line; J3 Pin 8
M8->Y:$078400,8			; I/O08 Data Line; J3 Pin 9
M9->Y:$078400,9			; I/O09 Data Line; J3 Pin 10
M10->Y:$078400,10		; I/O10 Data Line; J3 Pin 11
M11->Y:$078400,11		; I/O11 Data Line; J3 Pin 12
M12->Y:$078400,12		; I/O11 Data Line; J3 Pin 12
M13->Y:$078400,13		; I/O13 Data Line; J3 Pin 14
M14->Y:$078400,14		; I/O14 Data Line; J3 Pin 15
M15->Y:$078400,15		; I/O15 Data Line; J3 Pin 16

; JTHW Thumbwheel Multiplexer Port M-variables
;M40->Y:$078402,8			; SEL0 Line; J2 Pin 4 Laser Ready is now at M47
M40->Y:$78402,15			; SEL0 Line; J2 Pin 4 Re-addressed to map to M47
M41->Y:$078402,9			; SEL1 Line; J2 Pin 6
M42->Y:$078402,10		; SEL2 Line; J2 Pin 8
M43->Y:$078402,11		; SEL3 Line; J2 Pin 10
M44->Y:$078402,12		; SEL4 Line; J2 Pin 12
M45->Y:$078402,13		; SEL5 Line; J2 Pin 14
M46->Y:$078402,14		; SEL6 Line; J2 Pin 16
M47->Y:$078402,15		; SEL7 Line; J2 Pin 18 Laser Ready
M48->Y:$078402,8,8,U		; SEL0-7 Lines treated as a byte
M49->Y:$078400,0,16,u 	; 16-bit word for M0..16
M50->Y:$078402,0			; DAT0 Line; J2 Pin 3
M51->Y:$078402,1			; DAT1 Line; J2 Pin 5
M52->Y:$078402,2			; DAT2 Line; J2 Pin 7
M53->Y:$078402,3			; DAT3 Line; J2 Pin 9
M54->Y:$078402,4			; DAT4 Line; J2 Pin 11
M55->Y:$078402,5			; DAT5 Line; J2 Pin 13
M56->Y:$078402,6			; DAT6 Line; J2 Pin 15
M57->Y:$078402,7			; DAT7 Line; J2 Pin 17
M59->Y:$078402,0,16,u 	; 16-bit word for M40..57
M62->X:$78402,8,8
M64->Y:$060450,0,16,u 
M65->Y:$060451,0,16,u

M101->X:$078001,0,24,S	; ENC1 24-bit counter position
M115->X:$078000,19		; USER1 flag input status
M120->X:$078000,16		; HMFL1 flag input status
M121->X:$078000,17		; PLIM1 flag input status
M122->X:$078000,18		; MLIM1 flag input status
M130->Y:$C0,11 ;Motor1_LimitFault
M133->X:$0000B0,13,1		; #1 Desired-velocity-zero bit
M140->Y:$0000C0,0,1		; #1 Background in-position bit
M141->Y:$C0,1 ;Motor1_FollowWarn M141
M143->Y:$C0,3 ;Motor1_AmpFault M143
M144->Y:$0000C0,13,1		; #1 Foreground in-postion bit
M145->Y:$0000C0,10,1		; #1 Home-complete bit
M160->X:$000086,0,24,S	; #1 instant cmd vel register
M162->D:$00008B			; #1 Actual position (1/[Ixx08*32] cts)

M201->X:$078009,0,24,S	; ENC2 24-bit counter position
M220->X:$078008,16		; HMFL2 flag input status
M221->X:$078008,17		; PLIM2 flag input status
M222->X:$078008,18		; MLIM2 flag input status
M233->X:$000130,13,1		; #2 Desired-velocity-zero bit
M240->Y:$000140,0,1		; #2 Background in-position bit
M241->Y:$000140,1,1		; #2 Warning-following error bit
M244->Y:$000140,13,1		; #2 Foreground in-postion bit
M245->Y:$000140,10,1		; #2 Home-complete bit
M262->D:$00010B			; #2 Actual position (1/[Ixx08*32] cts)
M215->X:$078008,19		; USER2 flag input status
M230->Y:$140,11 ; Motor 2 Limit Fault
M241->Y:$140,1 ; Motor2_FollowWarn
M242->Y:$140,2 ;Motor2_FollowError
M243->Y:$140,3 ;Motor2_AmpFault
M260->X:$000106,0,24,S	; #2 instant cmd vel register
M261->D:$108 ;Mtr2DesPos

M315->X:$078010,19		; USER3 flag input status
M301->X:$078011,0,24,S	; ENC3 24-bit counter position
M320->X:$078010,16		; HMFL3 flag input status
M321->X:$078010,17		; PLIM3 flag input status
M322->X:$078010,18		; MLIM3 flag input status
M333->X:$0001B0,13,1		; #3 Desired-velocity-zero bit
M340->Y:$0001C0,0,1		; #3 Background in-position bit
M341->Y:$0001C0,1,1		; #3 Warning-following error bit
M344->Y:$0001C0,13,1		; #3 Foreground in-postion bit
M345->Y:$0001C0,10,1		; #3 Home-complete bit
M362->D:$00018B			; #3 Actual position (1/[Ixx08*32] cts)
M330->Y:$1C0,11 ;Motor3_LimitFault
M341->Y:$1C0,1 ;Motor3_FollowWarn
M342->Y:$1C0,2 ;Motor3_FollowError
M343->Y:$1C0,2 ;Motor3_AmpFault
M401->X:$078019,0,24,S	; ENC4 24-bit counter position
M420->X:$078018,16		; CHC4 input status
M421->X:$078018,17		; PLIM4 flag input status
M422->X:$078018,18		; MLIM4 flag input status
M433->X:$000230,13,1		; #4 Desired-velocity-zero bit
M440->Y:$000240,0,1		; #4 Background in-position bit
M441->Y:$000240,1,1		; #4 Warning-following error bit
M444->Y:$000240,13,1		; #2 Foreground in-postion bit
M445->Y:$000240,10,1		; #4 Home-complete bit
M462->D:$00020B			; #4 Actual position (1/[Ixx08*32] cts)

M415->X:$078018,19		; USER4 flag input status
M430->Y:$240,11 ;Motor4_LimitFault
M441->Y:$240,1 ;Motor4_FollowWarn
M442->Y:$240,2 ;Motor4_FollowError
M443->Y:$240,3 ;Motor4_AmpFault M443

M501->X:$078101,0,24,S	; ENC5 24-bit counter position
M520->X:$078100,16		; HMFL5 flag input status
M521->X:$078100,17		; PLIM5 flag input status
M522->X:$078100,18		; MLIM5 flag input status
M533->X:$0002B0,13,1		; #5 Desired-velocity-zero bit
M540->Y:$0002C0,0,1		; #5 Background in-position bit
M541->Y:$0002C0,1,1		; #5 Warning-following error bit
M544->Y:$0002C0,13,1		; #5 Foreground in-postion bit
M545->Y:$0002C0,10,1		; #5 Home-complete bit
M562->D:$00028B			; #5 Actual position (1/[Ixx08*32] cts)

M601->X:$078109,0,24,S	; ENC6 24-bit counter position
M620->X:$078108,16		; HMFL6 flag input status
M621->X:$078108,17		; PLIM6 flag input status
M622->X:$078108,18		; MLIM6 flag input status
M633->X:$000330,13,1		; #6 Desired-velocity-zero bit
M640->Y:$000340,0,1		; #6 Background in-position bit
M641->Y:$000340,1,1		; #6 Warning-following error bit
M644->Y:$000340,13,1		; #6 Foreground in-postion bit
M645->Y:$000340,10,1		; #6 Home-complete bit
M662->D:$00030B			; #6 Actual position (1/[Ixx08*32] cts)

M701->X:$078111,0,24,S	; ENC7 24-bit counter position
M720->X:$078110,16		; HMFL7 flag input status
M721->X:$078110,17		; PLIM7 flag input status
M722->X:$078110,18		; MLIM7 flag input status
M733->X:$0003B0,13,1		; #7 Desired-velocity-zero bit
M740->Y:$0003C0,0,1		; #7 Background in-position bit
M741->Y:$0003C0,1,1		; #7 Warning-following error bit
M744->Y:$0003C0,13,1		; #7 Foreground in-postion bit
M745->Y:$0003C0,10,1		; #7 Home-complete bit
M762->D:$00038B			; #7 Actual position (1/[Ixx08*32] cts)

M801->X:$078119,0,24,S	; ENC8 24-bit counter position
M820->X:$078118,16		; HMFL8 flag input status
M821->X:$078118,17		; PLIM8 flag input status
M822->X:$078118,18		; MLIM8 flag input status
M833->X:$000430,13,1		; #8 Desired-velocity-zero bit
M840->Y:$000440,0,1		; #8 Background in-position bit
M841->Y:$000440,1,1		; #8 Warning-following error bit
M844->Y:$000440,13,1		; #8 Foreground in-postion bit
M845->Y:$000440,10,1		; #8 Home-complete bit
M862->D:$00040B			; #8 Actual position (1/[Ixx08*32] cts)

M901->X:$078411,24,S
M962->D:$00048B			; #9 Actual position (1/[Ixx08*32] cts)

M1000->Y:$78414,8,16,S ;PWMOutput
;M3050->X:$10780,0,1 ;LAMINATOR_READY M3050
;M3061->X:$10782,0 ;LASER_INDEX_READY M3061



M3100->Y:$78406,24,S
M3101->X:$78419,24,S
M3102->Y:$7A312,8,16,S
M3103->X:$7A313,24,S
M3104->Y:$7A313,8,16,S
M3105->Y:$7A315,8,16,S
M3106->Y:$7A316,8,16,S
M3107->Y:$7A314,8,16,S
M3108->Y:$7841F,24,S
M3109->X:$7841F,24,S
M3110->X:$7841E,24,S
M3111->X:$7841D,11
M3112->X:$7841D,12
M3114->X:$7A315,14
M3115->X:$7A310,19
M3116->X:$78418,9




;Modbus Coms
;PLC->Delta Tau(Read) Word
M3300->X:$10780,0,16 ;MB_CMD_Laser_Program_Number,N15:0
M3301->Y:$10780,0,16 ;MB_CMD_PLC_Control_Word,N15:1
M3302->X:$10781,0,16 ;MB_CMD_Motor_Jogging_Control_Word,N15:2
M3303->Y:$10781,0,16,S ;MB_CMD_Laser_Beam_Offset,N15:3
M3304->X:$10782,0,16,S ;MB_CMD_X_Int,N15:4
M3305->Y:$10782,0,16,S ;MB_CMD_X_Decimal,N15:5
M3306->X:$10783,0,16,S ;MB_CMD_Y_Int,N15:6
M3307->Y:$10783,0,16,S ;MB_CMD_Y_Decimal,N15:7
M3308->X:$10784,0,16,S ;MB_CMD_Z_Int,N15:8
M3309->Y:$10784,0,16,S ;MB_CMD_Z_Decimal,N15:9
M3310->X:$10785,0,16,S ;MB_CMD_Motor1_Home_Offset_Int,N15:10
M3311->Y:$10785,0,16,S ;MB_CMD_Motor1_Home_Offset_Dec,N15:11
M3312->X:$10786,0,16,S ;MB_CMD_Motor2_Home_Offset_Int,N15:12
M3313->Y:$10786,0,16,S ;MB_CMD_Motor2_Home_Offset_Dec,N15:13
M3314->X:$10787,0,16,S ;MB_CMD_Motor3_Home_Offset_Int,N15:14
M3315->Y:$10787,0,16,S ;MB_CMD_Motor3_Home_Offset_Dec,N15:15
M3316->X:$10788,0,16,S ;MB_CMD_Motor4_Home_Offset_Int,N15:16
M3317->Y:$10788,0,16,S ;MB_CMD_Motor4_Home_Offset_Dec,N15:17
M3318->X:$10789,0,16,S ;MB_CMD_Motor_Jog_Step_Inc_Int,N15:18
M3319->Y:$10789,0,16,S ;MB_CMD_Motor_Jog_Step_Inc_Dec,N15:19
M3320->X:$1078A,0,16,S ;MB_CMD_Laser_Pulse_Power,N15:20
M3321->Y:$1078A,0,16,S ;MB_CMD_Laser_Pulse_Duration,N15:21
M3322->X:$1078B,0,16,S ;MB_CMD_Program_Laser_Power_Low,N15:22
M3323->Y:$1078B,0,16,S ;MB_CMD_Program_Laser_Power_High,N15:23
M3324->X:$1078C,0,16,S ;MB_CMD_Extra,N15:24

;Delta Tau->PLC(Write) Word
M3325->Y:$1078C,0,16 ;MB_Laser_Status_Word,N15:25
M3326->X:$1078D,0,16 ;MB_Laser_Error_Word,N15:26
M3327->Y:$1078D,0,16,S ;MB_Motor1_Pos_Int,N15:27
M3328->X:$1078E,0,16,S ;MB_Motor1_Pos_Dec,N15:28
M3329->Y:$1078E,0,16,S ;MB_Motor2_Pos_Int,N15:29
M3330->X:$1078F,0,16,S ;MB_Motor2_Pos_Dec,N15:30
M3331->Y:$1078F,0,16,S ;MB_Motor3_Pos_Int,N15:31
M3332->X:$10790,0,16,S ;MB_Motor3_Pos_Dec,N15:32
M3333->Y:$10790,0,16,S ;MB_Motor4_Pos_Int,N15:33
M3334->X:$10791,0,16,S ;MB_Motor4_Pos_Dec,N15:34

;PLC->Delta Tau(Read) Bit
M3350->Y:$10780,0,1 ;MB_CMD_StartMark,N15:1.0
M3351->Y:$10780,1,1 ;MB_CMD_AbortMark,N15:1.1
M3353->Y:$10780,3,1	;MB_CMD_Reset,N15:3
M3354->Y:$10780,4,1	;MB_CMD_PLCHeartbeat,N15:4
M3355->Y:$10780,5,1	;MB_CMD_Laser_Power_Override,N15:5
M3356->Y:$10780,6,1	;MB_CMD_Start_Laser_Diagnostics_PLC,N15:6

M3361->X:$10781,0,1	;MB_CMD_Jog_Enable,N15:2.0
M3362->X:$10781,1,1 ;MB_CMD_Jog_Speed_Hi_Low,N15:2.1
M3363->X:$10781,2,1	;MB_CMD_Jog_Plus,N15:2.2
M3364->X:$10781,3,1	;MB_CMD_Jog_Minus,N15:2.3
M3365->X:$10781,4,1	;MB_CMD_Jog_Motor1_Enable,N15:2.4
M3366->X:$10781,5,1	;MB_CMD_Jog_Motor2_Enable,N15:2.5
M3367->X:$10781,6,1	;MB_CMD_Jog_Motor3_Enable,N15:2.6
M3368->X:$10781,7,1	;MB_CMD_Jog_Motor4_Enable,N15:2.7
M3369->X:$10781,8,1	;MB_CMD_Jog_Mode,N15:2.8

;Delta Tau->PLC(Write) Bit
M3370->Y:$1078C,0,1	;MB_STATUS_LaserBusy,N15:25.0
M3371->Y:$1078C,1,1 ;MB_STATUS_LaserReady,N15:25.1
M3372->Y:$1078C,2,1	;MB_STATUS_ErrorFlag,N15:25.2
M3373->Y:$1078C,4,1	;MB_STATUS_TaskDone,N15:25.4
M3374->Y:$1078C,5,1	;MB_STATUS_HomingComplete,N15:25.5
M3375->Y:$1078C,6,1	;MB_STATUS_LaserHeartbeat,N15:25.6

M3380->X:$1078D,0,1 ;MB_LaserFault,N15:26.0
M3381->X:$1078D,1,1 ;MB_Motor1Fault,N15:26.1
M3382->X:$1078D,2,1 ;MB_Motor2Fault,N15:26.2
M3383->X:$1078D,3,1 ;MB_Motor3Fault,N15:26.3
M3384->X:$1078D,4,1 ;MB_Motor4Fault,N15:26.4
M3385->X:$1078D,5,1 ;MB_Motor1HomeFault,N15:26.5
M3386->X:$1078D,6,1	;MB_Motor2HomeFault,N15:26.6
M3387->X:$1078D,7,1	;MB_Motor3HomeFault,N15:26.7
M3388->X:$1078D,8,1	;MB_Motor4HomeFault,N15:26.8
M3389->X:$1078D,11,1 ;MB_JobLoadingError,N15:26.11


M4600->D:$10f7 ;Mtr1PrevDesPos
M4601->D:$10f6  ; Open-register for storing pervious Mtr2 position
M4000->Y:$10f4,0,24,S ; Open-register for storing distance per servo cycle


M4500->DP:$6045B ; Motor 1 Status DP RAM
M4501->DP:$6045C ; Motor 2 Status DP RAM
M4502->DP:$6045D ; Motor 3 Status DP RAM
M4503->DP:$6045E ; Motor 4 Status DP RAM
M4504->DP:$6045F ; DP RAM I/O
M4505->DP:$60460 ; M999 Program Line

M4560->DP:$60450 ; Motor 1-4 Limit switches
M4561->DP:$60451 ; Motor 5-8 Limit switches
M5187->Y:$00203F,17,1		; &1 In-position bit (AND of motors)
M5188->Y:$00203F,18,1		; &1 Warning-following-error bit (OR)
M5198->X:$002002,0,24,S	; &1 instant time base value


; DP RAM Collections

; Individual Bts
M66->X:$060450,0
M67->X:$060450,1
M68->X:$060450,2
M69->X:$060450,3 
M74->X:$060450,4 
M75->X:$060450,5
M76->X:$060450,6 
M77->X:$060450,7
M78->X:$060450,8
M79->X:$060450,9 
M87->X:$060450,10
M88->X:$060450,11
M89->X:$060450,12
M113->X:$060450,13
M129->X:$060450,14
M134->X:$060450,15

M136->X:$060451,0
M152->X:$060451,1
M165->X:$060451,2
M180->X:$060451,3 
M181->X:$060451,4 
M182->X:$060451,5
M183->X:$060451,6 
M184->X:$060451,7
M185->X:$060451,8
M186->X:$060451,9 
M187->X:$060451,10
M188->X:$060451,11
M189->X:$060451,12
M190->X:$060451,13
M195->X:$060451,14
M196->X:$060451,15

M197->X:$060452,0
M198->X:$060452,1
M199->X:$060452,2
M280->X:$060452,3
M281->X:$060452,4
M282->X:$060452,5
M283->X:$060452,6
M284->X:$060452,7
M285->X:$060452,8
M286->X:$060452,9
M287->X:$060452,10
M288->X:$060452,11

;DP RAM WORDS
M289->DP:$060453
M290->DP:$060454
M295->DP:$060455
M296->DP:$060456
M297->DP:$060457
M298->DP:$060458
M299->DP:$060459
M300->DP:$06045A

