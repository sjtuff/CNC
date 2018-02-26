INCLUDE "GLOBAL_DEFS"

ADDRESS=1
SETCOM(19200,8,1,2,1,4)
VR(mpg_ratio)=0'Store the ratio of MPG
VR(mpg_chosen_axis)=0'Store which axis to choose
VR(current_jog_ratio)=0'Store the current jog ratio
VR(current_jog_ratio_z)=0
DIM current_mpg_input AS BOOLEAN
DIM mpg_status AS BOOLEAN
current_mpg_input=FALSE
mpg_status=FALSE
DIM incremental_switch_dis_1,_
    incremental_switch_dis_10,_
    incremental_switch_dis_100,_
    incremental_switch_dis_1000,_
    incremental_switch_dis_10000,_
    incremental_switch_jog AS INTEGER
incremental_switch_dis_1=0
incremental_switch_dis_10=1
incremental_switch_dis_100=2
incremental_switch_dis_1000=3
incremental_switch_dis_10000=4
incremental_switch_jog=5
DIM jog_mov_dis AS FLOAT
DIM jog_mov_axis,output_jog_mov_num AS INTEGER
jog_mov_dis=0
jog_mov_axis=0
output_jog_mov_num=0
DIM flag_input_x_positive,_
    flag_input_x_reverse,_
    flag_input_y_positive,_
    flag_input_y_reverse,_
    flag_input_u_positive,_
    flag_input_u_reverse,_
    flag_input_v_positive,_
    flag_input_v_reverse,_
    flag_input_z_positive,_
    flag_input_z_reverse AS INTEGER
flag_input_x_positive=0
flag_input_x_reverse=0
flag_input_y_positive=0
flag_input_y_reverse=0
flag_input_u_positive=0
flag_input_u_reverse=0
flag_input_v_positive=0
flag_input_v_reverse=0
flag_input_z_positive=0
flag_input_z_reverse=0
DIM flag_mov_direction AS INTEGER'1 is positive direction,-1 is reverse
flag_mov_direction=1

BASE(0)
DEFPOS(0)
SERVO=ON
P_GAIN=1
I_GAIN=0.0
D_GAIN=0.0
OV_GAIN=0.0
VFF_GAIN=0.0
UNITS=2500*4

REP_DIST=200
FWD_IN=-1
REV_IN=-1
DATUM_IN=9

SPEED=1
ACCEL=2
DECEL=2
CREEP=0.2
JOGSPEED=0.5
FHOLD_IN=-1
FS_LIMIT=200
RS_LIMIT=-200
FE_LIMIT=2000
FE_RANGE=1000

BASE(1)
SERVO=ON
UNITS =2^23/5
ACCEL =1
DECEL =1
SPEED =1
FE_LIMIT=2000
FE_RANGE=800

BASE(2)
SERVO=ON
UNITS =2^23/5
ACCEL =1
DECEL =1
SPEED =1
FE_LIMIT=2000
FE_RANGE=800

BASE(3)
SERVO=ON
UNITS =2^23/10
ACCEL =1
DECEL =1
SPEED =1
FE_LIMIT=1000
FE_RANGE=800

BASE(4)
SERVO=ON
UNITS =1000
ACCEL =1
DECEL =1
SPEED =1
FE_LIMIT=1000
FE_RANGE=800

BASE(5)
SERVO=ON
UNITS =1000
ACCEL =1
DECEL =1
SPEED =1
FE_LIMIT=1000
FE_RANGE=800

CANCEL AXIS(6)
ADDAX(-1) AXIS(0)

BASE(6)
SERVO=ON
UNITS=UNITS AXIS(0)

SERVO AXIS(10)=ON

WDOG=ON
'********************JOG each axis*************************'

FWD_JOG AXIS(axis_x)=input_x_positive
REV_JOG AXIS(axis_x)=input_x_reverse
FWD_JOG AXIS(axis_y)=input_y_positive
REV_JOG AXIS(axis_y)=input_y_reverse
FWD_JOG AXIS(axis_u)=input_u_positive
REV_JOG AXIS(axis_u)=input_u_reverse
FWD_JOG AXIS(axis_v)=input_v_positive
REV_JOG AXIS(axis_v)=input_v_reverse
FWD_JOG AXIS(axis_z)=input_z_positive
REV_JOG AXIS(axis_z)=input_z_reverse
'********************JOG each axis*************************'


'********************The main part of loop*****************'
REPEAT
    'Check MPG input status
    IF IN(input_mpg)=OFF AND current_mpg_input=TRUE THEN
        IF mpg_status=FALSE THEN
            mpg_status=TRUE
        ELSE
            mpg_status=FALSE
        ENDIF
    ENDIF
    IF mpg_status=TRUE THEN
        OP(output_mpg,ON)
    ELSE
        OP(output_mpg,OFF)
    ENDIF
    IF IN(input_mpg)=OFF THEN current_mpg_input=FALSE
    IF IN(input_mpg)=ON THEN current_mpg_input=TRUE

    'Manual Pulse Generator(MPG) feed rate
    DIM temp_ratio AS FLOAT
    DIM temp_current_axis AS INTEGER

    IF (IN(32)+IN(33)+IN(34)=0) THEN
        temp_ratio=0.0001
    ELSEIF IN(32)=1 THEN
        temp_ratio=0.0001
    ELSEIF IN(33)=1 THEN
        temp_ratio=0.001
    ELSEIF IN(34)=1 THEN
        temp_ratio=0.01
    ENDIF

    IF IN(48)=1 THEN
        temp_current_axis=1
    ELSEIF IN(49)=1 THEN
        temp_current_axis=2
    ELSEIF IN(50)=1 THEN
        temp_current_axis=4
    ELSEIF IN(51) THEN
        temp_current_axis=5
    ELSE
        temp_current_axis=3
    ENDIF

    'Main Part of control
    FWD_IN AXIS(6) = FWD_IN AXIS(0)
    REV_IN AXIS(6) = REV_IN AXIS(0)
    UNITS AXIS(6) = UNITS AXIS(0)
    WAIT UNTIL UNITS AXIS(6)=UNITS AXIS(0)
    IF (MTYPE AXIS(6)<>21) OR (temp_ratio<>VR(mpg_ratio)) OR (temp_current_axis<>VR(mpg_chosen_axis))THEN
        ADDAX(-1) AXIS(1)
        ADDAX(-1) AXIS(2)
        ADDAX(-1) AXIS(3)
        ADDAX(-1) AXIS(4)
        ADDAX(-1) AXIS(5)
        ADDAX(-1) AXIS(10)

        ADDAX(6) AXIS(temp_current_axis)
        DIM line_or_servo_motor AS INTEGER
        IF temp_current_axis=1 OR temp_current_axis=2 OR temp_current_axis=3 THEN
            line_or_servo_motor=2^23/5
        ELSEIF temp_current_axis=4 OR temp_current_axis=5 THEN
            line_or_servo_motor=1000
        ELSE
            line_or_servo_motor=1000
        ENDIF
        IF mpg_status=TRUE THEN
            CONNECT(2.5*line_or_servo_motor*temp_ratio*UNITS AXIS(0)/UNITS AXIS(6),0) AXIS(6)
        ENDIF
        WA(500)
    ENDIF

    'Change Jog Speed
    DIM temp_feeding_rate AS FLOAT
    DIM temp_feeding_rate_z AS FLOAT
    temp_feeding_rate=IN(input_feeding_rate_1)*1+IN(input_feeding_rate_2)*2+_
        IN(input_feeding_rate_3)*4+IN(input_feeding_rate_4)*8
    temp_feeding_rate_z=IN(input_reciprocating_rate_1)*1+IN(input_reciprocating_rate_2)*2+_
        IN(input_reciprocating_rate_3)*4+IN(input_reciprocating_rate_4)*8
    IF temp_feeding_rate<>VR(current_jog_ratio) THEN
        JOGSPEED AXIS(axis_x)=temp_feeding_rate*0.1
        JOGSPEED AXIS(axis_y)=temp_feeding_rate*0.1
        JOGSPEED AXIS(axis_u)=temp_feeding_rate*0.1
        JOGSPEED AXIS(axis_v)=temp_feeding_rate*0.1
    ENDIF
    IF temp_feeding_rate_z<>VR(current_jog_ratio_z) THEN
        JOGSPEED AXIS(axis_z)=temp_feeding_rate_z*0.1
    ENDIF

    'Manual incremental switch
    DIM a1,b1,c1,total1 AS INTEGER
    a1=0
    b1=0
    c1=0
    IF IN(input_manual_increment_1)=ON THEN a1=1
    IF IN(input_manual_increment_2)=ON THEN b1=1
    IF IN(input_manual_increment_3)=ON THEN c1=1
    total1=a1*2^0+b1*2^1+c1*2^2
    IF VR(incremental_switch_status)=total1 AND total1=incremental_switch_jog THEN
        WA(0)
    ELSE
        IF total1=incremental_switch_jog THEN
            GOSUB jog_status
        ELSE
            'Judge which axis should move here
            IF IN(input_x_positive)=OFF AND flag_input_x_positive=1 THEN
                jog_mov_axis=axis_x
                flag_mov_direction=1
                GOSUB button_pressed
            ENDIF
            IF IN(input_x_reverse)=OFF AND flag_input_x_reverse=1 THEN
                jog_mov_axis=axis_x
                flag_mov_direction=-1
                GOSUB button_pressed
            ENDIF
            IF IN(input_y_positive)=OFF AND flag_input_y_positive=1 THEN
                jog_mov_axis=axis_y
                flag_mov_direction=1
                GOSUB button_pressed
            ENDIF
            IF IN(input_y_reverse)=OFF AND flag_input_y_reverse=1 THEN
                jog_mov_axis=axis_y
                flag_mov_direction=-1
                GOSUB button_pressed
            ENDIF
            IF IN(input_u_positive)=OFF AND flag_input_u_positive=1 THEN
                jog_mov_axis=axis_u
                flag_mov_direction=1
                GOSUB button_pressed
            ENDIF
            IF IN(input_u_reverse)=OFF AND flag_input_u_reverse=1 THEN
                jog_mov_axis=axis_u
                flag_mov_direction=-1
                GOSUB button_pressed
            ENDIF
            IF IN(input_v_positive)=OFF AND flag_input_v_positive=1 THEN
                jog_mov_axis=axis_v
                flag_mov_direction=1
                GOSUB button_pressed
            ENDIF
            IF IN(input_v_reverse)=OFF AND flag_input_v_reverse=1 THEN
                jog_mov_axis=axis_v
                flag_mov_direction=-1
                GOSUB button_pressed
            ENDIF
            IF IN(input_z_positive)=OFF AND flag_input_z_positive=1 THEN
                jog_mov_axis=axis_z
                flag_mov_direction=1
                GOSUB button_pressed
            ENDIF
            IF IN(input_z_reverse)=OFF AND flag_input_z_reverse=1 THEN
                jog_mov_axis=axis_z
                flag_mov_direction=-1
                GOSUB button_pressed
            ENDIF
        ENDIF
    ENDIF

    'Remember the positive(negative) input
    IF IN(input_x_positive)=ON THEN
        flag_input_x_positive=1
    ELSE
        flag_input_x_positive=0
    ENDIF
    IF IN(input_x_reverse)=ON THEN
        flag_input_x_reverse=1
    ELSE
        flag_input_x_reverse=0
    ENDIF
    IF IN(input_y_positive)=ON THEN
        flag_input_y_positive=1
    ELSE
        flag_input_y_positive=0
    ENDIF
    IF IN(input_y_reverse)=ON THEN
        flag_input_y_reverse=1
    ELSE
        flag_input_y_reverse=0
    ENDIF
    IF IN(input_u_positive)=ON THEN
        flag_input_u_positive=1
    ELSE
        flag_input_u_positive=0
    ENDIF
    IF IN(input_u_reverse)=ON THEN
        flag_input_u_reverse=1
    ELSE
        flag_input_u_reverse=0
    ENDIF
    IF IN(input_v_positive)=ON THEN
        flag_input_v_positive=1
    ELSE
        flag_input_v_positive=0
    ENDIF
    IF IN(input_v_reverse)=ON THEN
        flag_input_v_reverse=1
    ELSE
        flag_input_v_reverse=0
    ENDIF
    IF IN(input_z_positive)=ON THEN
        flag_input_z_positive=1
    ELSE
        flag_input_z_positive=0
    ENDIF
    IF IN(input_z_reverse)=ON THEN
        flag_input_z_reverse=1
    ELSE
        flag_input_z_reverse=0
    ENDIF


    IF IN(input_reciprocating_start)=OFF AND PROC_STATUS PROC(thread_mov_z_axis)=0 THEN
'        OP(output_reciprocating_start,ON)
        VR(enable_z_loop)=1
        RUN "MOV_Z_AXIS",thread_mov_z_axis
    ENDIF

    IF IN(input_spindle_stop)=OFF AND PROC_STATUS PROC(thread_mov_z_axis)<>0 THEN
'        OP(output_reciprocating_start,OFF)
        VR(enable_z_loop)=0
        STOP "MOV_Z_AXIS"
        BASE(axis_z)
        SPEED=5
        CANCEL
        WAIT IDLE
'        MOVEABS(-20)
        MOVEABS(VR(stop_position_z))
    ENDIF





    'Store the necessary arguements
    VR(mpg_ratio)=temp_ratio
    VR(mpg_chosen_axis)=temp_current_axis
    VR(current_jog_ratio)=temp_feeding_rate
    VR(current_jog_ratio_z)=temp_feeding_rate_z
    VR(incremental_switch_status)=total1

UNTIL FALSE
'********************The main part of loop*****************'
button_pressed:
GOSUB cancel_jog_status
IF total1=incremental_switch_dis_1 THEN jog_mov_dis=0.001
IF total1=incremental_switch_dis_10 THEN jog_mov_dis=0.01
IF total1=incremental_switch_dis_100 THEN jog_mov_dis=0.1
IF total1=incremental_switch_dis_1000 THEN jog_mov_dis=1
IF total1=incremental_switch_dis_10000 THEN jog_mov_dis=10
'Reverse move should be negative direction move
jog_mov_dis=jog_mov_dis*flag_mov_direction

'OP(output_jog_mov_num,ON)
GOSUB fixed_distance_mov
'OP(output_jog_mov_num,OFF)
RETURN

fixed_distance_mov:
IF jog_mov_axis=1 THEN
    BASE(9)
    UNITS=2^23/5
    ACCEL=1
    DECEL=1
    FE_LIMIT=100
    FE_RANGE=80
    SPEED=(IN(input_feeding_rate_1)*1+IN(input_feeding_rate_2)*2+_
        IN(input_feeding_rate_3)*4+IN(input_feeding_rate_4)*8)*0.1
    ADDAX(9) AXIS(1)
    MOVE(jog_mov_dis)
    WAIT IDLE AXIS(9)
ENDIF
IF jog_mov_axis=2 THEN
    BASE(10)
    UNITS=2^23/5
    ACCEL=1
    DECEL=1
    FE_LIMIT=100
    FE_RANGE=80
    SPEED=(IN(input_feeding_rate_1)*1+IN(input_feeding_rate_2)*2+_
        IN(input_feeding_rate_3)*4+IN(input_feeding_rate_4)*8)*0.1
    ADDAX(10) AXIS(2)
    MOVE(jog_mov_dis)
    WAIT IDLE AXIS(10)
ENDIF
IF jog_mov_axis=3 THEN
    BASE(11)
    UNITS=2^23/10
    ACCEL=1
    DECEL=1
    FE_LIMIT=100
    FE_RANGE=80
    SPEED=(IN(input_reciprocating_rate_1)*1+IN(input_reciprocating_rate_2)*2+_
        IN(input_reciprocating_rate_3)*4+IN(input_reciprocating_rate_4)*8)*0.1
    ADDAX(11) AXIS(3)
    MOVE(jog_mov_dis)
    WAIT IDLE AXIS(11)
ENDIF
IF jog_mov_axis=4 THEN
    BASE(12)
    UNITS=1000
    ACCEL=1
    DECEL=1
    FE_LIMIT=100
    FE_RANGE=80
    SPEED=(IN(input_feeding_rate_1)*1+IN(input_feeding_rate_2)*2+_
        IN(input_feeding_rate_3)*4+IN(input_feeding_rate_4)*8)*0.1
    ADDAX(12) AXIS(4)
    MOVE(jog_mov_dis)
    WAIT IDLE AXIS(12)
ENDIF
IF jog_mov_axis=5 THEN
    BASE(13)
    UNITS=1000
    ACCEL=1
    DECEL=1
    FE_LIMIT=100
    FE_RANGE=80
    SPEED=(IN(input_feeding_rate_1)*1+IN(input_feeding_rate_2)*2+_
        IN(input_feeding_rate_3)*4+IN(input_feeding_rate_4)*8)*0.1
    ADDAX(13) AXIS(5)
    MOVE(jog_mov_dis)
    WAIT IDLE AXIS(13)
ENDIF
RETURN


jog_status:
FWD_JOG AXIS(axis_x)=input_x_positive
REV_JOG AXIS(axis_x)=input_x_reverse
FWD_JOG AXIS(axis_y)=input_y_positive
REV_JOG AXIS(axis_y)=input_y_reverse
FWD_JOG AXIS(axis_u)=input_u_positive
REV_JOG AXIS(axis_u)=input_u_reverse
FWD_JOG AXIS(axis_v)=input_v_positive
REV_JOG AXIS(axis_v)=input_v_reverse
FWD_JOG AXIS(axis_z)=input_z_positive
REV_JOG AXIS(axis_z)=input_z_reverse
RETURN

cancel_jog_status:
FWD_JOG AXIS(axis_x)=-1
REV_JOG AXIS(axis_x)=-1
FWD_JOG AXIS(axis_y)=-1
REV_JOG AXIS(axis_y)=-1
FWD_JOG AXIS(axis_u)=-1
REV_JOG AXIS(axis_u)=-1
FWD_JOG AXIS(axis_v)=-1
REV_JOG AXIS(axis_v)=-1
FWD_JOG AXIS(axis_z)=-1
REV_JOG AXIS(axis_z)=-1
RETURN

