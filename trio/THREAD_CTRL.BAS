INCLUDE "GLOBAL_DEFS"

WDOG = ON
SERVO AXIS(axis_u)= ON
SERVO AXIS(axis_v)=ON
'clear VR and TABLE




RUN "THREAD_ENCODE",thread_encode_1
WAIT UNTIL PROC_STATUS PROC(thread_encode_1)=0
IF VR(txt_reach_end_pos)=1 THEN
    GOTO mov_last_one
ELSE
    VR(mov_offset_pos)=const_offset_million
    GOTO mov_encode_parallel
ENDIF

mov_encode_parallel:
WAIT UNTIL PROC_STATUS PROC(thread_mov_1)=0
WAIT UNTIL PROC_STATUS PROC(thread_mov_2)=0
WAIT UNTIL PROC_STATUS PROC(thread_encode_1)=0
WAIT UNTIL PROC_STATUS PROC(thread_encode_2)=0
IF VR(mov_offset_pos)=const_offset_zero THEN
    VR(mov_offset_pos)=const_offset_million
    VR(encode_offset_pos)=const_offset_zero
    RUN "THREAD_MOV",thread_mov_2
    PRINT #0,"The mov thread is run in status 1"
    WAIT UNTIL PROC_STATUS PROC(thread_mov_2)=0
    RUN "THREAD_ENCODE",thread_encode_1
    WAIT UNTIL PROC_STATUS PROC(thread_encode_1)=0
ELSE
    VR(mov_offset_pos)=const_offset_zero
    VR(encode_offset_pos)=const_offset_million
    RUN "THREAD_MOV",thread_mov_1
    PRINT #0,"The mov thread is run in status 2"
    WAIT UNTIL PROC_STATUS PROC(thread_mov_1)=0
    RUN "THREAD_ENCODE",thread_encode_2
    WAIT UNTIL PROC_STATUS PROC(thread_encode_2)=0
ENDIF
WAIT IDLE AXIS(axis_u)
WAIT IDLE AXIS(axis_v)
IF VR(txt_reach_end_pos)=1 THEN
    GOTO mov_last_one
ELSE
    GOTO mov_encode_parallel
ENDIF

mov_last_one:
WAIT UNTIL PROC_STATUS PROC(thread_mov_1)=0
WAIT UNTIL PROC_STATUS PROC(thread_mov_2)=0
WAIT UNTIL PROC_STATUS PROC(thread_encode_1)=0
WAIT UNTIL PROC_STATUS PROC(thread_encode_2)=0
'VR(encode_real_end_pos)=VR(encode_real_end_pos)+1
IF VR(mov_offset_pos)=const_offset_zero THEN
    IF VR(encode_times_pos)>1 THEN
        VR(mov_offset_pos)=const_offset_million
    ENDIF
    RUN "THREAD_MOV",thread_mov_2
    PRINT #0,"The mov thread is run in status 3"
ELSE
    VR(mov_offset_pos)=const_offset_zero
    RUN "THREAD_MOV",thread_mov_1
    PRINT #0,"The mov thread is run in status 4"
ENDIF
WAIT IDLE AXIS(axis_u)
WAIT IDLE AXIS(axis_v)
WAIT UNTIL PROC_STATUS PROC(thread_mov_1)=0
WAIT UNTIL PROC_STATUS PROC(thread_mov_2)=0
WAIT UNTIL PROC_STATUS PROC(thread_encode_1)=0
WAIT UNTIL PROC_STATUS PROC(thread_encode_2)=0

WAIT UNTIL PROC_STATUS PROC(thread_encode_2)=0
STOP
