'Define some Some initialization paras
INCLUDE "GLOBAL_DEFS"
'Clear all the variables/VR/TABLE

INVERT_IN(input_loop_start,ON)
INVERT_IN(input_loop_end,ON)
INVERT_IN(input_spindle_stop,ON)
INVERT_IN(input_reciprocating_start,ON)
INVERT_IN(input_mpg,ON)
INVERT_IN(input_light_source,ON)
INVERT_IN(input_vacuum_cleaner,ON)
INVERT_IN(input_reset,ON)
INVERT_IN(input_x_positive,ON)
INVERT_IN(input_x_reverse,ON)
INVERT_IN(input_y_positive,ON)
INVERT_IN(input_y_reverse,ON)
INVERT_IN(input_u_positive,ON)
INVERT_IN(input_u_reverse,ON)
INVERT_IN(input_v_positive,ON)
INVERT_IN(input_v_reverse,ON)
INVERT_IN(input_z_positive,ON)
INVERT_IN(input_z_reverse,ON)

BASE(axis_z)
DEFPOS(0)

DIM i AS INTEGER
FOR i=0 TO 65535
    VR(i)=0
NEXT i
FOR i=0 TO 500000
    TABLE(i,0)
NEXT i

SERVO=OFF
WDOG=OFF

UNITS AXIS(axis_u) =2^23/5
UNITS AXIS(axis_v) =2^23/5
UNITS AXIS(axis_z) =2^23/10
UNITS AXIS(axis_x) =1000
UNITS AXIS(axis_y) =1000

SPEED AXIS(axis_u)=0.2
SPEED AXIS(axis_v)=0.2
SPEED AXIS(axis_z)=24
SPEED AXIS(axis_x)=1
SPEED AXIS(axis_y)=1

ACCEL AXIS(axis_u)=1
ACCEL AXIS(axis_v)=1
ACCEL AXIS(axis_z)=100
ACCEL AXIS(axis_x)=1
ACCEL AXIS(axis_y)=1

DECEL AXIS(axis_u)=1
DECEL AXIS(axis_v)=1
DECEL AXIS(axis_z)=100
DECEL AXIS(axis_x)=1
DECEL AXIS(axis_y)=1


FE_LIMIT AXIS(axis_u)=100
FE_LIMIT AXIS(axis_v)=100
FE_LIMIT AXIS(axis_z)=100
FE_LIMIT AXIS(axis_x)=100
FE_LIMIT AXIS(axis_y)=100

FE_RANGE AXIS(axis_u)=80
FE_RANGE AXIS(axis_v)=80
FE_RANGE AXIS(axis_z)=80
FE_RANGE AXIS(axis_x)=80
FE_RANGE AXIS(axis_y)=80

SERVO AXIS(axis_u)=ON
SERVO AXIS(axis_v)=ON
SERVO AXIS(axis_z)=ON
SERVO AXIS(axis_x)=ON
SERVO AXIS(axis_y)=ON

WDOG=ON

VR(151)=0.2
VR(53)=24
VR(tool_compensation_flag)=0
VR(stop_position_z)=0


RUN "MONITOR_IO",thread_monitor_io

