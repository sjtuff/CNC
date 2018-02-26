INCLUDE "GLOBAL_DEFS"
DIM flag_in_loop,flag_stop_loop,flag_stop_loop_count AS INTEGER
flag_in_loop=0
flag_stop_loop=0
flag_stop_loop_count=0
DIM temp_velocity,temp_z_velocity AS FLOAT
temp_velocity=0
temp_z_velocity=0


REPEAT
    'U and V axis feed rate switch
    DIM a,b,c,d,total AS INTEGER
    a=0
    b=0
    c=0
    d=0
    IF IN(input_feeding_rate_1)=ON THEN a=1
    IF IN(input_feeding_rate_2)=ON THEN b=1
    IF IN(input_feeding_rate_3)=ON THEN c=1
    IF IN(input_feeding_rate_4)=ON THEN d=1
    total=a*1+b*2+c*4+d*8
    ' IF(VR(100)<>total ) THEN
    DIM beilv AS FLOAT
    beilv=total/10
    BASE(1,2)
    SPEED=beilv*VR(current_velocity)
    ' ENDIF

    'Z axis feed rate switch
    DIM a1,b1,c1,d1,total1 AS INTEGER
    a1=0
    b1=0
    c1=0
    d1=0
    IF IN(input_reciprocating_rate_1)=ON THEN a1=1
    IF IN(input_reciprocating_rate_2)=ON THEN b1=1
    IF IN(input_reciprocating_rate_3)=ON THEN c1=1
    IF IN(input_reciprocating_rate_4)=ON THEN d1=1
    total1=a1*1+b1*2+c1*4+d1*8
    DIM beilv1 AS FLOAT
    BASE(3)
    beilv1=total1/10
    SPEED=beilv1*VR(current_z_velocity)

    'MPG switch
    DIM a2,b2,total2 AS INTEGER
    a2=0
    b2=0
    IF IN(27)=ON THEN a2=1
    IF IN(28)=ON THEN b2=1
    total2=a2*1+b2*2
    IF (total2=3) THEN
        IF (PROC_STATUS PROC(thread_manual_mode)=0) THEN
            RUN "MANUAL_MODE",thread_manual_mode
            'Power Supply LED has a shining effect
            OP(output_power_supply,OFF)
            WA(1000)
            OP(output_power_supply,ON)
        ENDIF
    ELSE
        IF (PROC_STATUS PROC(thread_manual_mode)=1) THEN
            STOP "MANUAL_MODE",thread_manual_mode
        ENDIF
    ENDIF

    IF total2=1 OR total2=2 THEN
        'Loop start button
        IF IN(input_loop_start)=OFF THEN
            flag_in_loop=0
        ELSE
            flag_in_loop=1
        ENDIF
        WA(500)
        IF flag_in_loop=0 AND VR(led_status_of_loop_start)=0 THEN
            IF PROC_STATUS PROC(thread_start_up)=0 THEN
                RUN "START_UP",thread_start_up
            ENDIF
        ENDIF

        'Loop start LED
        IF (VR(led_status_of_loop_start)=0 AND PROC_STATUS PROC(thread_mov_1)=0) OR (VR(led_status_of_loop_start)=0 _
                AND _
                PROC_STATUS PROC(thread_mov_2)=0) THEN
            OP(output_loop_start,OFF)
        ELSE
            OP(output_loop_start,ON)
        ENDIF

        'Loop stop button
        IF IN(input_loop_end)=OFF THEN
            flag_stop_loop=1
'        ELSE
'            flag_stop_loop=0
        ENDIF

        WA(500)
        IF flag_stop_loop=1 THEN

'            IF flag_stop_loop_count=1 THEN
'                OP(output_loop_end,ON)
'                temp_velocity=VR(current_velocity)
'                temp_z_velocity=VR(current_z_velocity)
'                VR(current_velocity)=0
'                VR(current_z_velocity)=0
            BASE(14)
            SPEED=5
            ADDAX(14) AXIS(axis_v)
            MOVE(5)
            STOP "START_UP"
            STOP "TXT_INSTREAM"
            STOP "THREAD_CTRL"
            STOP "THREAD_ENCODE"
            STOP "THREAD_MOV"
            BASE(axis_u,axis_v)
            CANCEL
            WAIT IDLE
            BASE(14)
            CANCEL
            WAIT IDLE
            BASE(axis_v)
            SPEED=5
            MOVEABS(0)
            WAIT IDLE
            STOP "MOV_Z_AXIS"
            BASE(axis_u)
            SPEED=5
            MOVEABS(0)
            WAIT IDLE
            flag_stop_loop=0
            VR(led_status_of_loop_start)=0
        ELSE
            OP(output_loop_end,OFF)
'                VR(current_velocity)=temp_velocity
'                VR(current_z_velocity)=temp_z_velocity
'                temp_velocity=1
'                temp_z_velocity=1
'            ENDIF
        ENDIF
    ENDIF

    IF VR(flag_ready_to_offset)=1 THEN
        RUN "AXIS_OFFSET",thread_axis_offset
        VR(flag_ready_to_offset)=0
    ENDIF

    VR(beilv_feed_rate)=beilv
    VR(beilv_z_loop)=beilv1

UNTIL FALSE


