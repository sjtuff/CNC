INCLUDE "GLOBAL_DEFS"
DIM axis_chosen AS INTEGER
DIM axis_mov_dis AS FLOAT

axis_chosen=VR(offset_axis)
axis_mov_dis=VR(offset_dis)

IF axis_chosen<6 AND axis_chosen>0 THEN
    MOVE(axis_mov_dis) AXIS(axis_chosen)
ENDIF

WAIT IDLE AXIS(axis_chosen)
STOP


