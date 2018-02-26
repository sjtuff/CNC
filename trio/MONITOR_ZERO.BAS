INCLUDE "GLOBAL_DEFS"

DIM absolute_zero_u,absolute_zero_v,absolute_zero_z AS INTEGER
absolute_zero_u=1000000
absolute_zero_v=1000000
absolute_zero_z=1000000

WHILE 1
    IF ABS(absolute_zero_u-ENCODER AXIS(axis_u))<100 THEN
        OP(50,ON)
    ELSE
        OP(50,OFF)
    ENDIF
WEND
