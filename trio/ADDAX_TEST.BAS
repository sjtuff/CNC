INCLUDE "GLOBAL_DEFS"

SERVO AXIS(axis_u)=ON
SERVO AXIS(axis_v)=ON
WDOG=ON

BASE(7,8)
UNITS AXIS(7)=2^23/5
UNITS AXIS(8)=2^23/5
ACCEL AXIS(7)=10
ACCEL AXIS(8)=10
DECEL AXIS(7)=10
DECEL AXIS(8)=10
SPEED AXIS(7)=0.001
SPEED AXIS(8)=0.001
FE_LIMIT AXIS(7)=100
FE_LIMIT AXIS(8)=100
FE_RANGE AXIS(7)=80
FE_RANGE AXIS(8)=80
ADDAX(7) AXIS(axis_u)
ADDAX(8) AXIS(axis_v)

WHILE VR(error_compensation_start)=0
    IF VR(compensation_need)=1 THEN
        DIM distance_u AS FLOAT
        DIM distance_v AS FLOAT
        distance_u=VR(54)
        distance_v=VR(55)
        MOVE(distance_u) AXIS(7)
        MOVE(distance_v) AXIS(8)
        VR(compensation_need)=0
    ENDIF
WEND
