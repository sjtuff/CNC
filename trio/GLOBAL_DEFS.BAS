'VR variables
'***************************************************************************
DIM axis_x,axis_y,axis_u,axis_v,axis_z AS INTEGER
DIM temp_asc_stored,txt_start_pos,txt_range_pos AS INTEGER
DIM encode_start_pos,encode_range_pos,mov_start_pos,mov_range_pos AS INTEGER
DIM encode_real_end_pos,mov_real_end_pos AS INTEGER
DIM encode_finished_flag_pos,mov_finished_flag_pos AS INTEGER
DIM encode_all_finished_flag_pos AS INTEGER'Record whether u reach txt end
DIM txt_last_start_position AS INTEGER'In multi-thread,it could store
'**************************************all where did u stored the txt
DIM multi_thread_num_once AS INTEGER'Control the number of multi thread
'************************************encode numbers at one time
DIM encode_times_pos AS INTEGER 'Record the encode times
DIM encode_offset_pos,mov_offset_pos AS INTEGER
DIM flag_coordinate_pos AS INTEGER
DIM x_of_last_thread_pos,y_of_last_thread_pos,z_of_last_thread_pos AS INTEGER
DIM txt_reach_end_pos AS INTEGER 'A flag to define whether it reach txt end
DIM first_point_offset_x,first_point_offset_z AS INTEGER
DIM x_pos,y_pos,u_pos,v_pos,z_pos AS INTEGER
DIM enable_z_loop AS INTEGER
DIM current_velocity,current_z_velocity AS INTEGER
DIM tool_compensation_flag,tool_compensation_value AS INTEGER
'************************************Assistant lobal variables
DIM led_status_of_loop_start AS INTEGER
DIM mpg_ratio,mpg_chosen_axis AS INTEGER
DIM incremental_switch_status,current_jog_ratio AS INTEGER
DIM offset_axis,offset_dis,flag_ready_to_offset AS INTEGER
DIM beilv_feed_rate,beilv_z_loop AS INTEGER
DIM circle_times,feed_depth,feed_times,circle_finished AS INTEGER
DIM speed_of_pa,pc_speed_of_pa AS INTEGER
DIM pro_line AS INTEGER
DIM flag_compensation AS INTEGER
DIM compensation_need AS INTEGER
DIM move_way AS INTEGER
DIM move_u_start AS INTEGER
DIM move_v_start AS INTEGER
DIM move_u_end AS INTEGER
DIM move_v_end AS INTEGER
DIM move_i AS INTEGER
DIM move_k AS INTEGER
DIM error_compensation_start AS INTEGER
DIM current_jog_ratio_z AS INTEGER
DIM stop_position_z AS INTEGER
'***************************************************************************

'Not VR or TABLE
'***************************************************************************
DIM first_time_mov AS BOOLEAN'A flag to define whether it runs first time

DIM thread_manual_mode,thread_start_up AS INTEGER
DIM thread_encode_1,thread_encode_2 AS INTEGER
DIM thread_mov_1,thread_mov_2 AS INTEGER
DIM thread_ctrl,thread_txt_instream AS INTEGER
DIM thread_vec_ctrl,thread_mov_z_axis AS INTEGER
DIM thread_monitor_io AS INTEGER
DIM txt_instream_asc_num AS INTEGER
DIM thread_axis_offset AS INTEGER
DIM thread_compensation AS INTEGER
'***************************************************************************

'Constant variables
'***************************************************************************
DIM const_offset_zero AS INTEGER
DIM const_offset_million AS INTEGER
'***************************************************************************

'Input or Output plots
'***************************************************************************
DIM input_loop_start AS INTEGER
DIM input_loop_end AS INTEGER
DIM input_spindle_stop AS INTEGER
DIM input_reciprocating_start AS INTEGER
DIM input_mpg AS INTEGER
DIM input_light_source AS INTEGER
DIM input_vacuum_cleaner AS INTEGER
DIM input_reset AS INTEGER
DIM input_x_positive AS INTEGER
DIM input_x_reverse AS INTEGER
DIM input_y_positive AS INTEGER
DIM input_y_reverse AS INTEGER
DIM input_u_positive AS INTEGER
DIM input_u_reverse AS INTEGER
DIM input_v_positive AS INTEGER
DIM input_v_reverse AS INTEGER
DIM input_z_positive AS INTEGER
DIM input_z_reverse AS INTEGER
DIM input_working_mode_1 AS INTEGER
DIM input_working_mode_2 AS INTEGER
DIM input_feeding_rate_1 AS INTEGER
DIM input_feeding_rate_2 AS INTEGER
DIM input_feeding_rate_3 AS INTEGER
DIM input_feeding_rate_4 AS INTEGER
DIM input_reciprocating_rate_1 AS INTEGER
DIM input_reciprocating_rate_2 AS INTEGER
DIM input_reciprocating_rate_3 AS INTEGER
DIM input_reciprocating_rate_4 AS INTEGER
DIM input_manual_increment_1 AS INTEGER
DIM input_manual_increment_2 AS INTEGER
DIM input_manual_increment_3 AS INTEGER
DIM input_rapid_stop AS INTEGER
'*******************************************
DIM output_power_supply AS INTEGER
DIM output_loop_start AS INTEGER
DIM output_loop_end AS INTEGER
DIM output_spindle_stop AS INTEGER
DIM output_reciprocating_start AS INTEGER
DIM output_mpg AS INTEGER
DIM output_light_source AS INTEGER
DIM output_vacuum_cleaner AS INTEGER
DIM output_reset AS INTEGER
'***************************************************************************

'***************************************************************************
'***************************************************************************
'Definition of the above variables
'***************************************************************************
'***************************************************************************
'*************Axis***************
axis_x=4
axis_y=5
axis_u=1
axis_v=2
axis_z=3

'*************VR***************
temp_asc_stored=0
txt_start_pos=1
txt_range_pos=14
txt_last_start_position=21
encode_start_pos=2
encode_range_pos=12
encode_real_end_pos=22
mov_start_pos=3
mov_range_pos=13
mov_real_end_pos=23
encode_finished_flag_pos=102
encode_all_finished_flag_pos=42
mov_finished_flag_pos=103
multi_thread_num_once=77
encode_times_pos=7

encode_offset_pos=8
mov_offset_pos=9
flag_coordinate_pos=10
first_time_mov=FALSE

first_point_offset_x=81
first_point_offset_z=82

x_pos=91
y_pos=92
u_pos=93
v_pos=94
z_pos=95

enable_z_loop=150
current_velocity=151
current_z_velocity=53

tool_compensation_flag=90
tool_compensation_value=91

led_status_of_loop_start=101
mpg_ratio=203
mpg_chosen_axis=204
current_jog_ratio=205
incremental_switch_status=206
current_jog_ratio_z=207

offset_axis=210
offset_dis=211
flag_ready_to_offset=212

beilv_feed_rate=220
beilv_z_loop=221

x_of_last_thread_pos=200
y_of_last_thread_pos=201
z_of_last_thread_pos=202
txt_reach_end_pos=50

circle_times = 30
feed_depth = 31
feed_times = 32
circle_finished = 33
speed_of_pa=34
pc_speed_of_pa=35
pro_line=36
flag_compensation=38
compensation_need=39
move_way=40
move_u_start=43
move_v_start=44
move_u_end=45
move_v_end=46
move_i=47
move_k=48

error_compensation_start=49
stop_position_z=51

'*************Thread***************
thread_manual_mode=2
thread_start_up=3
thread_encode_1=15
thread_encode_2=16
thread_mov_1=17
thread_mov_2=18
thread_txt_instream=0
thread_ctrl=13
thread_vec_ctrl=6
thread_mov_z_axis=5
thread_monitor_io=1
thread_axis_offset=4
thread_compensation=7
'*************Constant***************
const_offset_zero=0
const_offset_million=100000

'*************I/O plots**************
input_loop_start=0
input_loop_end=1
input_spindle_stop=26
input_reciprocating_start=2
input_mpg=3
input_vacuum_cleaner=4
input_reset=5
input_working_mode_1=27
input_working_mode_2=28
input_feeding_rate_1=40
input_feeding_rate_2=41
input_feeding_rate_3=42
input_feeding_rate_4=43
input_reciprocating_rate_1=44
input_reciprocating_rate_2=45
input_reciprocating_rate_3=46
input_reciprocating_rate_4=47
input_manual_increment_1=29
input_manual_increment_2=30
input_manual_increment_3=31
input_x_positive=8
input_x_reverse=9
input_y_positive=10
input_y_reverse=11
input_u_positive=12
input_u_reverse=13
input_v_positive=14
input_v_reverse=15
input_z_positive=24
input_z_reverse=25
input_rapid_stop=35 'The button of rapid stop

output_power_supply=32
output_loop_start=30
output_loop_end=31
output_spindle_stop=28
output_reciprocating_start=24
output_mpg=25
output_light_source=26
output_vacuum_cleaner=29



