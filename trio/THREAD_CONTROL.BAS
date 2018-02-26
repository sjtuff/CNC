INCLUDE "GLOBAL_DEFS"

RUN "THREAD_ENCODE",thread_encode_1
'WAIT UNTIL PROC_STATUS PROC(thread_encode_1)<>0
WAIT UNTIL PROC_STATUS PROC(thread_encode_1)=0
VR(encode_offset_pos)=const_offset_million

IF VR(txt_reach_end_pos)=1 THEN

ENDIF

RUN "THREAD_ENCODE",thread_encode_2
RUN "THREAD_MOV",thread_mov_1
WAIT IDLE'Wait for finishing of motion
IF VR(txt_reach_end_pos)=1 THEN
    GOTO mov_stop
ELSE
    GOTO after_first_mov
ENDIF

after_first_mov:
WAIT UNTIL PROC_STATUS PROC(thread_mov_1)=0
WAIT UNTIL PROC_STATUS PROC(thread_mov_2)=0
WAIT UNTIL PROC_STATUS PROC(thread_encode_1)=0
WAIT UNTIL PROC_STATUS PROC(thread_encode_2)=0
IF VR(mov_offset_pos)=const_offset_zero THEN
    VR(mov_offset_pos)=const_offset_million
    VR(encode_offset_pos)=const_offset_zero
    RUN "THREAD_MOV",thread_mov_2
    RUN "THREAD_ENCODE",thread_encode_1
ELSE
    VR(mov_offset_pos)=const_offset_zero
    VR(encode_offset_pos)=const_offset_million
    RUN "THREAD_MOV",thread_mov_1
    RUN "THREAD_ENCODE",thread_encode_2
ENDIF
WAIT IDLE
IF VR(txt_reach_end_pos)=1 THEN
    GOTO mov_stop
ELSE
    GOTO after_first_mov
ENDIF

mov_stop:
STOP

