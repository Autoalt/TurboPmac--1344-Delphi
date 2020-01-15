;Covidien ACCL 04-2-2013

; User/UI P Variables

#define X_Distance_Traveled P10
#define Y_Distance_Traveled P11
#define Motor_3_Jog_Stop_FLAG P30 ;Latch Flag for Jog Stop release 
#define P_JOG_SPEED P40
#define P_F1_TOGGLE P42
#define P_Laminator_Done P43
#define JobLoadingError P44
#define P_HOMING_ROUTINE_COMPLETE P50
#define P_MOTOR1_HOME_STATUS P51
#define P_MOTOR2_HOME_STATUS P52
#define P_MOTOR3_HOME_STATUS P53
#define P_MOTOR4_HOME_STATUS P54
#define P_HOME_Z_ONLY P55
;#define P_MOTOR5_HOME_STATUS P55
#define P_MOTOR6_HOME_STATUS P56
#define P_MOTOR7_HOME_STATUS P57
#define P_MOTOR8_HOME_STATUS P58
#define Motor_Status P59
#define Laser_Prog_Running P60

#define P_MOTOR_1_DIRECTION_CONTROL P61
#define P_MOTOR_2_DIRECTION_CONTROL P62
#define P_MOTOR_3_DIRECTION_CONTROL P63
#define P_MOTOR_4_DIRECTION_CONTROL P64

#define P_MOTOR_1_ENCODER_DIRECTION P65
#define P_MOTOR_2_ENCODER_DIRECTION P66
#define P_MOTOR_3_ENCODER_DIRECTION P67
#define P_MOTOR_4_ENCODER_DIRECTION P68



#define P_HANDHELD_SPEED_HI_X P70
#define P_HANDHELD_SPEED_HI_Y1 P71
#define P_HANDHELD_SPEED_HI_Y2 P72
#define P_HANDHELD_SPEED_LO_X P73
#define P_HANDHELD_SPEED_LO_Y1 P74
#define P_HANDHELD_SPEED_LO_Y2 P75
#define P_HANDHELD_SPEED_HI_Z P76
#define P_HANDHELD_SPEED_LO_Z P77
#define P_HANDHELD_DETECTED P80
#define P_HANDHELD_STOP_LATCH P81
#define P_HANDHELD_RUN_LATCH P82
#define P_HANDHELD_F1_LATCH P83
#define P_HANDHELD_ENTER_LATCH P84
#define P_UI_RUN_BUTTON P85
#define LASER_FLAG P86
#define P_GAP_Sensor_Latch P87
#define P_HANDHELD_INCREMENT_TEMP_X P90
#define P_HANDHELD_INCREMENT_TEMP_Y P91
#define P_HANDHELD_INCREMENT P92
#define P_LASER_SHOT_FLAG P93 ; PLC2
#DEFINE P_JOG_START P94
#define P_HANDHELD_INCREMENT_TEMP_Z P95
#define P_GAP_CALIBRATION P111

#define P_MOTOR1_HOME_OFFSET P120
#define P_MOTOR2_HOME_OFFSET P121
#define P_MOTOR3_HOME_OFFSET P122
#define P_MOTOR4_HOME_OFFSET P123
#define P_MOTOR_1_FLAG_CONTROL_ENABLE P124
#define P_MOTOR_1_FLAG_CONTROL_DISABLE P125
#define P_MOTOR_2_FLAG_CONTROL_ENABLE P126
#define P_MOTOR_2_FLAG_CONTROL_DISABLE P127
#define P_MOTOR_3_FLAG_CONTROL_ENABLE P128
#define P_MOTOR_3_FLAG_CONTROL_DISABLE P129
#define P_MOTOR_4_FLAG_CONTROL_ENABLE P130
#define P_MOTOR_4_FLAG_CONTROL_DISABLE P131
#define P_MOTOR_1_HOME_SPEED P132
#define P_MOTOR_2_HOME_SPEED P133
#define P_MOTOR_3_HOME_SPEED P134
#define P_MOTOR_4_HOME_SPEED P135
#define P_MOTOR_1_SOFT_PLIM P136
#define P_MOTOR_1_SOFT_MLIM P137
#define P_MOTOR_2_SOFT_PLIM P138
#define P_MOTOR_2_SOFT_MLIM P139
#define P_MOTOR_3_SOFT_PLIM P140
#define P_MOTOR_3_SOFT_MLIM P141
#define P_MOTOR_4_SOFT_PLIM P142
#define P_MOTOR_4_SOFT_MLIM P143

#define P_MOTOR1_JOG_SPEED P150
#define P_MOTOR2_JOG_SPEED P151
#define P_MOTOR3_JOG_SPEED P152
#define P_MOTOR4_JOG_SPEED P153


#define P_Motor_1_Pos_mm P200
#define P_Motor_2_Pos_mm P201
#define P_Motor_3_Pos_mm P202
#define P_Motor_4_Pos_mm P203

#define P_Motor_1_Pos_int P205
#define P_Motor_2_Pos_int P206
#define P_Motor_3_Pos_int P207
#define P_Motor_4_Pos_int P208

#define P_Motor_1_Pos_dec P210
#define P_Motor_2_Pos_dec P211
#define P_Motor_3_Pos_dec P212
#define P_Motor_4_Pos_dec P213




#define Laser_Power_Supply_Trigger P555
#define M_VecCmdVel P900		; Commanded vector velocity
#define P_Heartbeat P999
#define M_MinLevel  P1001
#define DesiredDutyCycle P1000
#define LASER_PULSING_SCALE_FACTOR P2000
#define SPC_X_Adjustment P3000
#define Motor1_Status P4500
#define Motor2_Status P4501
#define Motor3_Status P4502
#define Motor4_Status P4503
#define DPR_Outputs P4504
#define DPR_1_4_Limit_Pword P4560
#define DPR_5_8_Limit_Pword P4561


; M Variables
#define M_ENC1_CAP_POS M103
#define ENC1 M162
#define M_ENC2_CAP_POS M203
#define ENC2 M262
#define M_ENC4_CAP_POS M403
#define ENC4 M462
#define M_MOTOR1_CAP_HOME_POS M173
#define M_MOTOR2_CAP_HOME_POS M273
#define M_MOTOR4_CAP_HOME_POS M473



#define STOP_LED M0
#define RUN_LED M1
#define VAC_TABLE_ON_OFF M2
#define SPARE_OPTO_MOS_1 M3
#define F2_LED M4
#define LASER_ON_OFF_AMBER_LIGHT M5
#define AIR_ASSIST_SIDE_EDGE M6
#define TABLE_LIFT M7
#define HANDHELD_RIGHT_BUTTON M8
#define HANDHELD_LEFT_BUTTON M9
#define HANDHELD_BACK_BUTTON M10
#define HANDHELD_FORWARD_BUTTON M11
#define SAFE_DOOR M12
#define Door_Open M12
#define HANDHELD_RUN_BUTTON M13
#define HANDHELD_STOP_BUTTON M14
#define HANDHELD_HI_LOW_BUTTON M15
#define LASER_READY M47
#define LASER_OVERTEMP M41
#define LASER_ACTIVE M42
#define SMEMA_PREV_INPUT M43
#define SHUTTER_OPEN_FEEDBACK M44
#define SMEMA_NEXT_INPUT M45
#define SAFETY_OVERRIDE M46
#define SPARE_OPTO M47
#define SMEMA_PREV_OUTPUT M50
#define SMEMA_NEXT_OUTPUT M51
#define RED_RING_LIGHT M52
#define BLUE_RING_LIGHT M53
#define LASER_ON M54
#define SPARE_OPTO_MOS_2 M55
#define TENSION_RELEASE_AUTO_START M56
#define WEB_UP_DOWN_JOB_COMPLETE M57
#define 	ModbusReady		M88
#define 	ModbusDisable		M89

#define F1_BUTTON M115
#define HMFL1_flag M120
#define PLIM1_flag M121
#define MLIM1_flag M122
#define Motor1_LimitFault M130
#define Motor1_Positive_Limit M131
#define Motor1_Neg_Limit M132
#define M_MOTOR1_DESIRED_VEL_ZERO M133
#define M_MOTOR1_BACKGROUND_IN_POSITION M140
#define Motor1_FollowWarn M141
#define M_MOTOR1_WARNING_FOLLOWING M141
#define Motor1_FollowError M142
#define Motor1_AmpFault M143
#define M_MOTOR1_FOREGROUND_IN_POSITION M144
#define M_MOTOR1_HOME_COMPLETE M145
#define M_Mtr1CmdVel M160
#define ENC1 M162
#define M_MOTOR1_VAR_JOG M172
#define F2_BUTTON M215
#define PLIM2_flag M221
#define HMFL2_flag M220
#define MLIM2_flag M222
#define Motor2_LimitFault M230
#define Motor2_Positive_Limit M231
#define Motor2_Neg_Limit M232
#define M_MOTOR2_DESIRED_VEL_ZERO M233
#define M_MOTOR2_BACKGROUND_IN_POSITION M240
#define M_MOTOR2_WARNING_FOLLOWING M241
#define Motor2_FollowWarn M241
#define Motor2_FollowError M242
#define Motor2_AmpFault M243
#define M_MOTOR2_FOREGROUND_IN_POSITION M244
#define M_MOTOR2_HOME_COMPLETE M245
#define M_Mtr2CmdVel M260
#define ENC2 M262
#define M_MOTOR2_VAR_JOG M272
#define VAC_TABLE_ON_OFF_BUTTON M315
#define HMFL3_flag M320
#define PLIM3_flag M321
#define MLIM3_flag M322
#define Motor3_LimitFault M330
#define Motor3_Positive_Limit M331

;Flexlaser 3 header.h 01-12-2013 CM

#define Motor3_Neg_Limit M332
#define M_MOTOR3_DESIRED_VEL_ZERO M333
#define M_MOTOR3_BACKGROUND_IN_POSITION M340
#define M_MOTOR3_WARNING_FOLLOWING M341
#define Motor3_FollowWarn M341
#define Motor3_FollowError M342
#define Motor3_AmpFault M343
#define M_MOTOR3_FOREGROUND_IN_POSITION M344
#define M_MOTOR3_HOME_COMPLETE M345
#define M_Mtr3CmdVel M366
#define ENC3 M362
#define M_MOTOR3_VAR_JOG M372
#define SAVE_ENTER_BUTTON M415
#define ESTOP_Button M423
#define Motor4_LimitFault M430
#define Motor4_FollowWarn M441
#define Motor4_FollowError M442
#define Motor4_AmpFault M443
#define Motor4_Positive_Limit M431
#define Motor4_Neg_Limit M432
#define HMFL4_flag M420
#define PLIM4_flag M421
#define MLIM4_flag M422
#define M_MOTOR4_DESIRED_VEL_ZERO M433
#define Motor4_AmpEnable_Bit M439
#define ENC4 M462
#define M_MOTOR4_VAR_JOG M472
#define M_MOTOR4_BACKGROUND_IN_POSITION M440
#define M_MOTOR4_WARNING_FOLLOWING M441
#define M_MOTOR4_FOREGROUND_IN_POSITION M444
#define M_MOTOR4_HOME_COMPLETE M445
#define HMFL5_flag M520
#define MLIM5_flag M522




#define PLIM5_flag M521
#define M_MOTOR5_WARNING_FOLLOWING M541
#define ENC5 M562
#define M_MOTOR5_VAR_JOG M572
#define HMFL6_flag M620
#define MLIM6_flag M622
#define PLIM6_flag M621
#define M_MOTOR6_VAR_JOG M672
#define ENC6 M662
#define M_MOTOR6_WARNING_FOLLOWING M641
#define HMFL7_flag M720
#define MLIM7_flag M722
#define PLIM7_flag M721
#define M_MOTOR7_WARNING_FOLLOWING M741
#define M_MOTOR7_VAR_JOG M772
#define ENC7 M762
#define HMFL8_flag M820
#define MLIM8_flag M822
#define PLIM8_flag M821
#define M_MOTOR8_WARNING_FOLLOWING M841
#define ENC8 M862
#define M_MOTOR8_VAR_JOG M872
#define ENC9 M962
#define Prog_Line M999 
#define PWMOutput M1000
#define Job_Complete M1029
;PLC 9 LAMINTOR MONITORING
#define OffsetX								P3001
#define OffsetY								P3002
#define OffsetT								P3003
#define LaserRadius						P3004
#define OffsetZ								P3003


#define MB_CMD_PartNumber M3300			
#define MB_CMD_Word M3301
#define MB_CMD_Motor_Jog_Cont_Word M3302				
#define MB_CMD_LaserRadius M3303				
#define MB_CMD_X_Int M3304			
#define MB_CMD_X_Decimal M3305			
#define MB_CMD_Y_Int M3306			
#define MB_CMD_Y_Decimal M3307			
#define MB_CMD_Z_Int M3308			
#define MB_CMD_Z_Decimal M3309
#define MB_Motor1_Home_Offset_INT M3310
#define MB_Motor1_Home_Offset_DEC M3311
#define MB_Motor2_Home_Offset_INT M3312
#define MB_Motor2_Home_Offset_DEC M3313
#define MB_Motor3_Home_Offset_INT M3314
#define MB_Motor3_Home_Offset_DEC M3315
#define MB_Motor4_Home_Offset_INT M3316
#define MB_Motor4_Home_Offset_DEC M3317
#define MB_Motor_Jog_Step_Inc_INT M3318
#define MB_Motor_Jog_Step_Inc_DEC M3319
#define MB_Laser_Pulse_Power_INT M3320
#define MB_Laser_Pulse_Duration_INT M3321
#define MB_Program_Laser_Power_Low M3322
#define MB_Program_Laser_Power_High M3323
#define MB_Extra_Read M3324

#define MB_STATUS_Word M3325
#define MB_Error_Word M3326
#define MB_Motor1_Pos_INT M3327
#define MB_Motor1_Pos_DEC M3328
#define MB_Motor2_Pos_INT M3329
#define MB_Motor2_Pos_DEC M3330
#define MB_Motor3_Pos_INT M3331
#define MB_Motor3_Pos_DEC M3332
#define MB_Motor4_Pos_INT M3333
#define MB_Motor4_Pos_DEC M3334
				
				
#define MB_CMD_StartMark M3350				
#define MB_CMD_AbortMark M3351			
#define MB_CMD_Reset M3353				
#define MB_CMD_PLCHeartbeat M3354					
#define MB_CMD_Laser_Power_Override M3355			
#define MB_CMD_Pulse_Laser_Start M3356				

#define MB_CMD_Jog_Enable_Bit M3361	
#define MB_CMD_Jog_Speed_Hi_Low M3362	
#define MB_CMD_Jog_Plus M3363	
#define MB_CMD_Jog_Minus M3364
#define MB_CMD_Jog_Motor1_Enable M3365
#define MB_CMD_Jog_Motor2_Enable M3366
#define MB_CMD_Jog_Motor3_Enable M3367
#define MB_CMD_Jog_Motor4_Enable M3368
#define MB_CMD_Jog_Mode M3369
											
#define MB_STATUS_LaserBusy M3370					
#define MB_STATUS_LaserReady M3371				
#define MB_STATUS_ErrorFlag M3372				
#define MB_STATUS_TaskDone M3373		
#define MB_STATUS_HomeComplete M3374
#define MB_STATUS_LaserHeartbeat M3375	
 
#define MB_LaserFault M3380					
#define MB_Motor1Fault M3381				 
#define MB_Motor2Fault  M3382				 
#define MB_Motor3Fault M3383				 
#define MB_Motor4Fault  M3384				
#define MB_Motor1HomeFault M3385				
#define MB_Motor2HomeFault M3386			
#define MB_Motor3HomeFault M3387				
#define MB_Motor4HomeFault M3388		
#define MB_JobLoadingError M3389

#define PLC_Laser_Control_Flag M3390
#define PLC_Jog_Control_Flag M3391
#define Final_DesiredDutyCycle M3392
#define Final_LASER_ON_DURATION M3393


	
#define mSec1 8388608/I10 While(I5112>0)EndW
#define LASER_PULSE_WRITE_ENA M3111
#define LASER_PULSE_State M3112
#define Mtr1PrevDesPos M4600 ; Open-register for storing pervious Mtr1 position
#define  Mtr1DesPos M161
#define Mtr2DesPos M261
#define Mtr2PrevDesPos M4601 ; Open-register for storing pervious Mtr2 position
#define TraveledDistance M4000
#define Mtr9DesPos M961
#define DPR_Motor1_Status M4500
#define DPR_Motor2_Status M4501
#define DPR_Motor3_Status M4502
#define DPR_Motor4_Status M4503
#define DPR_DPR_Outputs M4504
#define DPR_1_4_Limits M4560
#define DPR_5_8_Limits M4561
#define Prog_Running M5180
#define Prog_RunFault M5182
#define M_CS1_IN_POSITION M5187
#define M_CS1_WARNING_FOLLOWING M5188
#define M_CS1TimeBase M5198
#define M_OutputOn M6020		; Externally set control bit

#define M_UserRequestedVel  M6024	; User Requested Velocity
#define M_MaxVoltage  M6025		; Maximum Voltage (32000=20Vdc)
#define M_Override M6026		; 1.0 is real-time (%100)
#define M_TangentOn M6027		; Flag from path program
#define CON_MSEC			(8388608/I10)
#define CON_SEC				1000*(8388608/I10)

;Cmd Vels are in 3/[Ixx08*32] cts/msec at %100

#define I_ServoIntTime I10	; Period for servo interrupt
#define LASER_ON_DURATION Q80
; Each timer is dedicated for one plc timer = plc1 ectt
#define I_MOTOR_1_SOFT_MLIM I114
#define I_MOTOR_1_SOFT_PLIM I113
#define I_MOTOR1_JOG_SPEED I122
#define I_MOTOR_1_HOME_SPEED I123
#define I_MOTOR_1_FLAG_CONTROL I124
#define I_MOTOR_1_HOME_OFFSET I126
#define I_MOTOR_2_SOFT_MLIM I214
#define I_MOTOR_2_SOFT_PLIM I213
#define I_MOTOR2_JOG_SPEED I222
#define I_MOTOR_2_HOME_SPEED I223
#define I_MOTOR_2_FLAG_CONTROL I224
#define I_MOTOR_2_HOME_OFFSET I226
#define I_MOTOR_3_SOFT_MLIM I314
#define I_MOTOR_3_SOFT_PLIM I313
#define I_MOTOR3_JOG_SPEED I322
#define I_MOTOR_3_HOME_SPEED I323
#define I_MOTOR_3_FLAG_CONTROL I324
#define I_MOTOR_3_HOME_OFFSET I326
#define I_MOTOR_4_SOFT_MLIM I414
#define I_MOTOR_4_SOFT_PLIM I415
#define I_MOTOR4_JOG_SPEED I422
#define I_MOTOR_4_HOME_SPEED I423
#define I_MOTOR_4_FLAG_CONTROL I424
#define I_MOTOR_4_HOME_OFFSET I426

#Define Max_Feedrate I5198
#define	I_CS1_TIMER1	I5111
#define	I_CS1_TIMER2	I5112
#define	I_CS1_TIMER3  I5211
#define	I_CS1_TIMER4  I5212
#define	I_CS1_TIMER5  I5311
#define	I_CS1_TIMER6  I5312
#define	I_CS1_TIMER7  I5411
#define	I_CS1_TIMER8  I5412
#define	I_CS1_TIMER9  I5511
#define	I_CS1_TIMER10  I5512
#define	I_CS1_TIMER11  I5611
#define	I_CS1_TIMER12  I5612
#define	I_CS1_TIMER13  I5711
#define	I_CS1_TIMER14  I5712
#define	I_CS1_TIMER15  I5811
#define	I_CS1_TIMER16  I5812
#define	I_CS1_TIMER17  I5911
#define	I_CS1_TIMER18  I5912
#define	I_CS1_TIMER19  I6011
#define	I_CS1_TIMER20  I6012

