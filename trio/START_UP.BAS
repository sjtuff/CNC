'Define some Some initialization paras
INCLUDE "GLOBAL_DEFS"
'Clear all the variables/VR/TABLE
VR(led_status_of_loop_start)=1

DIM i AS INTEGER
DIM cirtims AS INTEGER
'FOR i=0 TO 65535
'    VR(i)=0
'NEXT i
cirtims=0
'Open loop start led
BASE(axis_u,axis_v)
VR(circle_times)=1
VR(feed_depth)=0
VR(feed_times)=0

''''''''''''need to add principle speed


VR(multi_thread_num_once)=20'Change this to change the encode numbers
REPEAT
    FOR i=0 TO 500000
        TABLE(i,0)
    NEXT i
    FOR i=0 TO VR(multi_thread_num_once)
        VR(9000+i)=0
        VR(10000+i)=0
        VR(11000+i)=0
        VR(12000+i)=0
        VR(13000+i)=0
        VR(14000+i)=0
        VR(15000+i)=0
        VR(16000+i)=0
        VR(17000+i)=0
        VR(18000+i)=0
        VR(19000+i)=0
        VR(20000+i)=0
        VR(21000+i)=0
        VR(22000+i)=0
    NEXT i
    VR(speed_of_pa)=3000
    IF VR(pc_speed_of_pa)<>0 THEN
        VR(speed_of_pa)=VR(pc_speed_of_pa)
    ENDIF
    VR(circle_finished)=0


    VR(txt_start_pos)=200000
    VR(txt_last_start_position)=0
    VR(encode_start_pos)=10000
    VR(encode_range_pos)=1000
    VR(mov_start_pos)=31000
    VR(mov_range_pos)=1000
    VR(encode_finished_flag_pos)=0
    VR(mov_finished_flag_pos)=0
    VR(flag_coordinate_pos)=0
    VR(encode_offset_pos)=0
    VR(mov_offset_pos)=0
    VR(encode_real_end_pos)=0
    VR(encode_all_finished_flag_pos)=0
    VR(txt_reach_end_pos)=0
    VR(x_of_last_thread_pos)=0
    VR(txt_range_pos)=0
    VR(encode_times_pos)=0
    VR(pro_line)=0
    VR(flag_compensation)=0
    VR(error_compensation_start)=0
    VR(54)=0
    VR(55)=0

    IF VR(tool_compensation_flag)=0 THEN
        VR(22001)=0.9
    ELSE
        VR(22001)=VR(tool_compensation_value)
    ENDIF
    VR(151)=0.2
    VR(53)=24
    ACCEL AXIS(axis_z)=VR(current_z_velocity)/0.05
    DECEL AXIS(axis_z)=VR(current_z_velocity)/0.05
'*******************Moving Parameters Setting*******************'
    DEFPOS(0,0)
    LIMIT_BUFFERED=64
    MERGE=OFF
'*******************Moving Parameters Setting*******************'

    RUN "TXT_INSTREAM",thread_txt_instream
    WHILE(VR(circle_finished)=0)
        WA(0.001)
    WEND
    VR(feed_times)=VR(feed_times)+1
    cirtims = cirtims+1
UNTIL cirtims = VR(circle_times)
VR(led_status_of_loop_start)=0
STOP
