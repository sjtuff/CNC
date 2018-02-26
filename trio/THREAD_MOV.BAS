INCLUDE "GLOBAL_DEFS"
'Move part,including the code translation
DIM i_control AS INTEGER
DIM count_command AS INTEGER
DIM run_speed,start_speed,end_speed AS FLOAT'volecity of each short line
DIM x,y,z AS FLOAT
DIM i_of_center,k_of_center AS FLOAT
DIM x_abs,y_abs,z_abs AS FLOAT
DIM ii AS INTEGER
DIM time_pause AS INTEGER
DIM n AS INTEGER
'this ii is for the compensated statistics,count the num of compensated mov
i_control=1
count_command=VR(txt_range_pos)
ii=VR(encode_real_end_pos)
'resolution_encoder=2^20
'pitch_leadscrew=5
'UNITS=resolution_encoder/pitch_leadscrew

'run_speed=100
'start_speed=100
'end_speed=100
'
'FORCE_SPEED AXIS(1)=run_speed
'FORCE_SPEED AXIS(3)=run_speed
'STARTMOVE_SPEED AXIS(1)=start_speed
'STARTMOVE_SPEED AXIS(3)=start_speed
'ENDMOVE_SPEED AXIS(1)=end_speed
'ENDMOVE_SPEED AXIS(3)=end_speed

BASE(axis_u,axis_v)


'To solve the problem of CIRC
IF VR(encode_times_pos)>0 THEN
    TABLE(31000+VR(mov_offset_pos),VR(x_of_last_thread_pos))
    TABLE(32000+VR(mov_offset_pos),VR(y_of_last_thread_pos))
    TABLE(33000+VR(mov_offset_pos),VR(z_of_last_thread_pos))
ENDIF




'The COMPENSATED Trace
i_control=1'Start from the first one


REPEAT
    'G04 here
    IF TABLE(37000+i_control+VR(mov_offset_pos))<>0 THEN
        time_pause=TABLE(37000+i_control+VR(mov_offset_pos))
        VR(pro_line)=VR(pro_line)+1
        VR(move_way)=4
        GOSUB g04
    ENDIF
    IF TABLE(40000+i_control+VR(mov_offset_pos))=1 THEN
        VR(pro_line)=VR(pro_line)+1
    ENDIF
    'Handle M08 and velocity first
    IF TABLE(38000+i_control+VR(mov_offset_pos))=8 THEN
        PRINT #0,"Start M08"
        VR(enable_z_loop)=1
        IF PROC_STATUS PROC(thread_mov_z_axis)=0 THEN
            RUN "MOV_Z_AXIS",thread_mov_z_axis
        ENDIF
    ENDIF


    IF TABLE(36000+i_control+VR(mov_offset_pos))<>0 THEN
        VR(current_velocity)=TABLE(36000+i_control+VR(mov_offset_pos))
    ENDIF

    IF TABLE(30000+i_control+VR(mov_offset_pos))=0 THEN
        x=TABLE(31000+i_control+VR(mov_offset_pos))-TABLE(31000+i_control-1+VR(mov_offset_pos))
        z=TABLE(33000+i_control+VR(mov_offset_pos))-TABLE(33000+i_control-1+VR(mov_offset_pos))
        VR(move_way)=0
        VR(move_u_start)=TABLE(31000+i_control-1+VR(mov_offset_pos))
        VR(move_v_start)=TABLE(33000+i_control-1+VR(mov_offset_pos))
        VR(move_u_end)=TABLE(31000+i_control+VR(mov_offset_pos))
        VR(move_v_end)=TABLE(33000+i_control+VR(mov_offset_pos))
        GOSUB g00
    ENDIF
    IF TABLE(30000+i_control+VR(mov_offset_pos))=1 THEN
        x=TABLE(31000+i_control+VR(mov_offset_pos))-TABLE(31000+i_control-1+VR(mov_offset_pos))
        z=TABLE(33000+i_control+VR(mov_offset_pos))-TABLE(33000+i_control-1+VR(mov_offset_pos))
        VR(move_way)=1
        VR(move_u_start)=TABLE(31000+i_control-1+VR(mov_offset_pos))
        VR(move_v_start)=TABLE(33000+i_control-1+VR(mov_offset_pos))
        VR(move_u_end)=TABLE(31000+i_control+VR(mov_offset_pos))
        VR(move_v_end)=TABLE(33000+i_control+VR(mov_offset_pos))
        GOSUB g01
    ENDIF
    IF TABLE(30000+i_control+VR(mov_offset_pos))=2 THEN
        x=TABLE(31000+i_control+VR(mov_offset_pos))-TABLE(31000+i_control-1+VR(mov_offset_pos))
        z=TABLE(33000+i_control+VR(mov_offset_pos))-TABLE(33000+i_control-1+VR(mov_offset_pos))
        i_of_center=TABLE(34000+i_control+VR(mov_offset_pos))-TABLE(31000+i_control-1+VR(mov_offset_pos))
        k_of_center=TABLE(35000+i_control+VR(mov_offset_pos))-TABLE(33000+i_control-1+VR(mov_offset_pos))
        VR(move_way)=3
        VR(move_u_start)=TABLE(31000+i_control-1+VR(mov_offset_pos))
        VR(move_v_start)=TABLE(33000+i_control-1+VR(mov_offset_pos))
        VR(move_u_end)=TABLE(31000+i_control+VR(mov_offset_pos))
        VR(move_v_end)=TABLE(33000+i_control+VR(mov_offset_pos))
        VR(move_i)=i_of_center
        VR(move_k)=k_of_center
        GOSUB g02
    ENDIF
    IF TABLE(30000+i_control+VR(mov_offset_pos))=3 THEN
        x=TABLE(31000+i_control+VR(mov_offset_pos))-TABLE(31000+i_control-1+VR(mov_offset_pos))
        z=TABLE(33000+i_control+VR(mov_offset_pos))-TABLE(33000+i_control-1+VR(mov_offset_pos))
        i_of_center=TABLE(34000+i_control+VR(mov_offset_pos))-TABLE(31000+i_control-1+VR(mov_offset_pos))
        k_of_center=TABLE(35000+i_control+VR(mov_offset_pos))-TABLE(33000+i_control-1+VR(mov_offset_pos))
        VR(move_way)=2
        VR(move_u_start)=TABLE(31000+i_control-1+VR(mov_offset_pos))
        VR(move_v_start)=TABLE(33000+i_control-1+VR(mov_offset_pos))
        VR(move_u_end)=TABLE(31000+i_control+VR(mov_offset_pos))
        VR(move_v_end)=TABLE(33000+i_control+VR(mov_offset_pos))
        VR(move_i)=i_of_center
        VR(move_k)=k_of_center
        GOSUB g03
    ENDIF
    WA(10)
    WAIT IDLE AXIS(axis_u)
    WAIT IDLE AXIS(axis_v)
    IF TABLE(41000+i_control+VR(mov_offset_pos))=9 THEN
        PRINT #0,"Start M09"
        WAIT IDLE AXIS(axis_u)
        WAIT IDLE AXIS(axis_v)
        VR(enable_z_loop)=0
    ENDIF
    IF TABLE(39000+i_control+VR(mov_offset_pos))=2 THEN
        PRINT #0,"Start M02"
        VR(move_way)=5
        GOSUB m02
    ENDIF

    i_control=i_control+1
UNTIL i_control>ii-1
'!!It is important that "g code mov length in one step"="g code encode length in one step"-1

'FINAL POINT
IF VR(encode_all_finished_flag_pos)=1 THEN
    IF TABLE(37000+ii+VR(mov_offset_pos))<>0 THEN
        time_pause=TABLE(37000+ii+VR(mov_offset_pos))
        VR(pro_line)=VR(pro_line)+1
        VR(move_way)=4
        GOSUB g04
    ENDIF
    IF TABLE(40000+i_control+VR(mov_offset_pos))=1 THEN
        VR(pro_line)=VR(pro_line)+1
    ENDIF
    IF TABLE(38000+ii+VR(mov_offset_pos))=8 THEN
        PRINT #0,"Start M08"
        VR(enable_z_loop)=1
        IF PROC_STATUS PROC(thread_mov_z_axis)=0 THEN
            RUN "MOV_Z_AXIS",thread_mov_z_axis
        ENDIF
    ENDIF

    IF TABLE(36000+i_control+VR(mov_offset_pos))<>0 THEN
        VR(current_velocity)=TABLE(36000+i_control+VR(mov_offset_pos))
    ENDIF

    IF TABLE(30000+ii+VR(mov_offset_pos))=0 THEN
        x=TABLE(31000+ii+VR(mov_offset_pos))-TABLE(31000+ii-1+VR(mov_offset_pos))
        z=TABLE(33000+ii+VR(mov_offset_pos))-TABLE(33000+ii-1+VR(mov_offset_pos))
        VR(move_way)=0
        VR(move_u_start)=TABLE(31000+ii-1+VR(mov_offset_pos))
        VR(move_v_start)=TABLE(33000+ii-1+VR(mov_offset_pos))
        VR(move_u_end)=TABLE(31000+ii+VR(mov_offset_pos))
        VR(move_v_end)=TABLE(33000+ii+VR(mov_offset_pos))
        GOSUB g00
    ENDIF
    IF TABLE(30000+ii+VR(mov_offset_pos))=1 THEN
        x=TABLE(31000+ii+VR(mov_offset_pos))-TABLE(31000+ii-1+VR(mov_offset_pos))
        z=TABLE(33000+ii+VR(mov_offset_pos))-TABLE(33000+ii-1+VR(mov_offset_pos))
        VR(move_way)=1
        VR(move_u_start)=TABLE(31000+ii-1+VR(mov_offset_pos))
        VR(move_v_start)=TABLE(33000+ii-1+VR(mov_offset_pos))
        VR(move_u_end)=TABLE(31000+ii+VR(mov_offset_pos))
        VR(move_v_end)=TABLE(33000+ii+VR(mov_offset_pos))
        GOSUB g01
    ENDIF
    IF TABLE(30000+ii+VR(mov_offset_pos))=2 THEN
        x=TABLE(31000+ii+VR(mov_offset_pos))-TABLE(31000+ii-1+VR(mov_offset_pos))
        z=TABLE(33000+ii+VR(mov_offset_pos))-TABLE(33000+ii-1+VR(mov_offset_pos))
        i_of_center=TABLE(34000+ii+VR(mov_offset_pos))-TABLE(31000+ii-1+VR(mov_offset_pos))
        k_of_center=TABLE(35000+ii+VR(mov_offset_pos))-TABLE(33000+ii-1+VR(mov_offset_pos))
        VR(move_way)=3
        VR(move_u_start)=TABLE(31000+ii-1+VR(mov_offset_pos))
        VR(move_v_start)=TABLE(33000+ii-1+VR(mov_offset_pos))
        VR(move_u_end)=TABLE(31000+ii+VR(mov_offset_pos))
        VR(move_v_end)=TABLE(33000+ii+VR(mov_offset_pos))
        VR(move_i)=i_of_center
        VR(move_k)=k_of_center
        GOSUB g02
    ENDIF
    IF TABLE(30000+ii+VR(mov_offset_pos))=3 THEN
        x=TABLE(31000+ii+VR(mov_offset_pos))-TABLE(31000+ii-1+VR(mov_offset_pos))
        z=TABLE(33000+ii+VR(mov_offset_pos))-TABLE(33000+ii-1+VR(mov_offset_pos))
        i_of_center=TABLE(34000+ii+VR(mov_offset_pos))-TABLE(31000+ii-1+VR(mov_offset_pos))
        k_of_center=TABLE(35000+ii+VR(mov_offset_pos))-TABLE(33000+ii-1+VR(mov_offset_pos))
        VR(move_way)=2
        VR(move_u_start)=TABLE(31000+ii-1+VR(mov_offset_pos))
        VR(move_v_start)=TABLE(33000+ii-1+VR(mov_offset_pos))
        VR(move_u_end)=TABLE(31000+ii+VR(mov_offset_pos))
        VR(move_v_end)=TABLE(33000+ii+VR(mov_offset_pos))
        VR(move_i)=i_of_center
        VR(move_k)=k_of_center
        GOSUB g03
    ENDIF

    IF TABLE(41000+ii+VR(mov_offset_pos))=9 THEN
        PRINT #0,"Start M09"
        WAIT IDLE AXIS(axis_u)
        WAIT IDLE AXIS(axis_v)
        VR(enable_z_loop)=0
    ENDIF
    IF TABLE(39000+ii+VR(mov_offset_pos))=2 THEN
        PRINT #0,"Start M02"
        VR(move_way)=5
        GOSUB m02
    ENDIF
    VR(circle_finished)=1
    VR(pro_line)=0
ENDIF

FOR n=1 TO count_command
    TABLE(36000+VR(mov_offset_pos)+n,0)
    TABLE(37000+VR(mov_offset_pos)+n,0)
    TABLE(38000+VR(mov_offset_pos)+n,0)
    TABLE(39000+VR(mov_offset_pos)+n,0)
    TABLE(40000+VR(mov_offset_pos)+n,0)
    TABLE(41000+VR(mov_offset_pos)+n,0)
NEXT n

'IF VR(encode_all_finished_flag_pos)=0 THEN
'    WAIT UNTIL PROC_STATUS PROC(thread_ctrl)=0
'    RUN "THREAD_CTRL",thread_ctrl
'ENDIF
WAIT IDLE
STOP


'*********************Function Part**************************
'*********************Function Part**************************
'*********************Function Part**************************
g00:
'GOSUB velocity_look_ahead
DIM v_store AS FLOAT
v_store = VR(current_velocity)
VR(current_velocity) = 5
MOVE(x,z)
WAIT IDLE AXIS(axis_u)
WAIT IDLE AXIS(axis_v)
VR(current_velocity) = v_store
RETURN

g01:
'GOSUB velocity_look_ahead
MOVE(x,z)
RETURN

g02:
'GOSUB velocity_look_ahead
MOVECIRC(x,z,i_of_center,k_of_center,0)
RETURN

g03:
'GOSUB velocity_look_aheFad
MOVECIRC(x,z,i_of_center,k_of_center,1)
RETURN

g04:
WA(time_pause*10)
RETURN


m02:
WAIT IDLE AXIS(axis_u)
WAIT IDLE AXIS(axis_v)
WAIT IDLE AXIS(axis_z)
DIM back_pos AS FLOAT
'back_pos = 15 - VR(feed_depth)*VR(feed_times)
BASE(axis_v)
SPEED=5
MOVEABS(0)
WAIT IDLE AXIS(axis_v)
BASE(axis_u,axis_v)
VR(current_velocity)=5
MOVEABS(0,0)
WAIT IDLE AXIS(axis_u)
RETURN


