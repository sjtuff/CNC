INCLUDE "GLOBAL_DEFS"
BASE(axis_z)
UNITS=2^23/10
'ACCEL=10
'DECEL=10

'loop_distance is the distance when z
DIM loop_distance AS FLOAT
loop_distance=50
'RUN "ADDAX_TEST",thread_compensation
WHILE VR(enable_z_loop)=1
    MOVE(-loop_distance)
    WAIT IDLE
    MOVE(loop_distance)
    WAIT IDLE
WEND

WHILE VR(enable_z_loop)=0
    VR(error_compensation_start)=1
    STOP
WEND


