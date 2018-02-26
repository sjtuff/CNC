INCLUDE "GLOBAL_DEFS"
'******************************************
DIM x,y,z,x0,y0,z0,i_of_center,k_of_center AS FLOAT
DIM v,vx,vy,vz AS FLOAT
DIM a,ax,ay,az AS FLOAT

DIM flag_coordinate AS INTEGER 'Absolute or relative
DIM flag_number_of_axis AS INTEGER'Reveal how many axis in a code sentence
DIM flag_pause_time AS INTEGER'0 is no time pause in current encoding line
flag_pause_time=0
DIM count_command AS INTEGER
count_command=0
DIM cutter_x,cutter_y AS FLOAT
DIM i,j,i1,i2,carriage_count AS INTEGER
DIM d_compensation AS FLOAT(100)'Store all the compensation value
DIM n AS INTEGER
DIM xc2,yc2,rc,cita,l1,l2,l3,l4,alfa,xc,yc,xb,yb AS FLOAT
DIM l0,dex,dey,k,xd,yd AS FLOAT
FOR i =0 TO 99
    d_compensation(i)=i*0.1
NEXT i
VR(21001)=1'default cutter is left
i=0
j=-1
i1=0
i2=0
carriage_count=0
DIM m AS INTEGER
'*****************************************
'Read in the TABLE asc charcteristics

REPEAT
    DIM current_position_of_asc AS INTEGER
    current_position_of_asc=i+VR(txt_start_pos)+VR(txt_last_start_position)
    m=TABLE(current_position_of_asc)
    IF m=ASC("C") THEN
        GOSUB get_number
        VR(circle_times)=VR(0)
    ENDIF
    IF m=ASC("D") THEN
        GOSUB get_number
        VR(feed_depth)=VR(0)
    ENDIF
    IF m=ASC("N") THEN
        count_command=count_command+1
        flag_number_of_axis=0
        flag_pause_time=0
        VR(21000+count_command+1)=VR(21000+count_command)
    ENDIF
    IF m=ASC("G") THEN
        GOSUB get_number
'*****Correct the mistake of G02 and G03*****
        IF VR(0)=2 THEN
            VR(0)=3
        ELSEIF VR(0)=3 THEN
            VR(0)=2
        ENDIF
'********************************************
        'Consider the pause
        IF (VR(0)=0 OR VR(0)=1 OR VR(0)=2 OR VR(0)=3) THEN
            VR(10000+count_command)=VR(0)
        ENDIF
        IF VR(0)=4 THEN
            flag_pause_time=1
        ENDIF
        IF VR(0)=90 THEN
            flag_coordinate=0'absolute coordinate program
            VR(flag_coordinate_pos)=flag_coordinate
        ENDIF
        IF VR(0)=91 THEN
            flag_coordinate=1'relative coordinate program
            VR(flag_coordinate_pos)=flag_coordinate
        ENDIF

        IF VR(0)=40 THEN
            VR(21000+count_command)=0
            VR(21000+count_command+1)=VR(21000+count_command)'without cutter
        ENDIF
        IF VR(0)=41 THEN
            VR(21000+count_command)=1
            VR(21000+count_command+1)=VR(21000+count_command)'left cutter
        ENDIF
        IF VR(0)=42 THEN
            VR(21000+count_command)=-1
            VR(21000+count_command+1)=VR(21000+count_command)'right cutter
        ENDIF
        IF VR(0)=26 THEN


        ENDIF
    ENDIF

    IF m=ASC("R") THEN
        GOSUB get_number
        VR(22000+count_command)=VR(0)
    ENDIF

    IF m=ASC("U") THEN
        GOSUB get_number
        VR(11000+count_command)=VR(0)
        flag_number_of_axis=flag_number_of_axis+1
    ENDIF
    IF m=ASC("Z") THEN
        GOSUB get_number
        VR(12000+count_command)=VR(0)
    ENDIF
    IF m=ASC("V") THEN
        GOSUB get_number
        VR(13000+count_command)=VR(0)
        flag_number_of_axis=flag_number_of_axis+2
        VR(13000+count_command) = VR(13000+count_command)+ VR(feed_depth)*VR(feed_times)
    ENDIF
    IF m=ASC("I") THEN
        GOSUB get_number
        VR(14000+count_command)=VR(0)
    ENDIF
    IF m=ASC("K") THEN
        GOSUB get_number
        IF(flag_pause_time=0) THEN
            VR(15000+count_command)=VR(0)
        ELSE
            VR(20000+count_command)=VR(0)
            count_command=count_command-1
            flag_number_of_axis=VR(9000+count_command)
        ENDIF
    ENDIF
    IF m=ASC("F") THEN
        GOSUB get_number
        VR(16000+count_command)=VR(0)
    ENDIF
    IF m=ASC("M") THEN
        GOSUB get_number
        IF VR(0)=8 THEN
            VR(18000+count_command)=VR(0)
        ENDIF
        IF VR(0)=9 THEN
            VR(17000+count_command)=VR(0)
        ENDIF
        IF VR(0)=2 OR VR(0)=30 THEN
            VR(19000+count_command)=VR(0)
        ENDIF
    ENDIF

    VR(9000+count_command)=flag_number_of_axis
    'Allow the G File to have one-line or two-line explanation
    'New line's asc is 10
    'Judge if it reach an end or reach the range,the default range is up to VR(multi_thread_num_once)
    i=i+1
    DIM bool_whether_end AS BOOLEAN
    bool_whether_end=FALSE
    IF ((count_command>=VR(multi_thread_num_once)) AND TABLE(i+VR(txt_start_pos)+VR(txt_last_start_position))=_
            ASC("N")) THEN
        bool_whether_end=TRUE
        VR(txt_last_start_position)=i+VR(txt_last_start_position)'********Record the real position of txt encoding to
        '*************************************prepare for the next time
    ELSEIF (TABLE(i+VR(txt_start_pos)+VR(txt_last_start_position))=0) THEN
        bool_whether_end=TRUE
        VR(encode_all_finished_flag_pos)=1
        VR(txt_last_start_position)=i+VR(txt_last_start_position)
        VR(txt_reach_end_pos)=1
    ENDIF

UNTIL bool_whether_end=TRUE
'****************************************************
'calculate the absolute coordinate of each axis
flag_coordinate=VR(flag_coordinate_pos)

DIM i_control AS INTEGER
DIM ii AS INTEGER'ii is the data to remember the
DIM x_abs,y_abs,z_abs AS FLOAT
'DIM run_speed,start_speed,end_speed AS FLOAT'volecity of each short line
'run_speed=100
'start_speed=100
'end_speed=100

i_control=1
REPEAT
    IF (flag_coordinate=0 AND VR(9000+i_control)=3) THEN
        x_abs=VR(11000+i_control)
        y_abs=VR(12000+i_control)
        z_abs=VR(13000+i_control)
    ENDIF
    IF (flag_coordinate=0 AND VR(9000+i_control)=2) THEN
        z_abs=VR(13000+i_control)
        x_abs=TABLE(11000+i_control-1+VR(encode_offset_pos))
    ENDIF
    IF (flag_coordinate=0 AND VR(9000+i_control)=1) THEN
        x_abs=VR(11000+i_control)
        z_abs=TABLE(13000+i_control-1+VR(encode_offset_pos))
    ENDIF

    IF (flag_coordinate=1 AND VR(9000+i_control)=3) THEN
        x_abs=TABLE(11000+i_control+VR(encode_offset_pos)-1)+VR(11000+i_control)
        y_abs=TABLE(12000+i_control+VR(encode_offset_pos)-1)+VR(12000+i_control)
        z_abs=TABLE(13000+i_control+VR(encode_offset_pos)-1)+VR(13000+i_control)
    ENDIF
    IF (flag_coordinate=1 AND VR(9000+i_control)=2) THEN
        z_abs=TABLE(13000+i_control+VR(encode_offset_pos)-1)+VR(13000+i_control)
        x_abs=TABLE(11000+i_control+VR(encode_offset_pos)-1)
    ENDIF
    IF (flag_coordinate=1 AND VR(9000+i_control)=1) THEN
        x_abs=TABLE(11000+i_control+VR(encode_offset_pos)-1)+VR(11000+i_control)
        z_abs=TABLE(13000+i_control+VR(encode_offset_pos)-1)
    ENDIF

    TABLE(11000+i_control+VR(encode_offset_pos),x_abs)
    TABLE(12000+i_control+VR(encode_offset_pos),y_abs)
    TABLE(13000+i_control+VR(encode_offset_pos),z_abs)
    i_control=i_control+1
UNTIL i_control>count_command
'****************CorePart***************
GOSUB cutter_compensation
'****************CorePart***************
'IF first_time_mov=FALSE THEN
'    RUN "THREAD_CTRL",thread_ctrl
'ENDIF
'Delete the final one(if not the end)(!!!Caution here!!!)
IF VR(encode_all_finished_flag_pos)=0 THEN
    DIM i3 AS INTEGER
    DIM i4 AS FLOAT'i4 could be not a integer
    i4=0
    'This place 50 is determined by the real situation
    FOR i3=0 TO 20
        i4=TABLE(10000+count_command+VR(encode_offset_pos)+i3*1000)
        IF VR(encode_offset_pos)=const_offset_million THEN
            TABLE(10000+const_offset_zero+i3*1000,i4)
'            PRINT #0,10000+const_offset_zero+i3*1000,"is",TABLE(10000+const_offset_zero+i3*1000)
        ELSE
            TABLE(10000+const_offset_million+i3*1000,i4)
            '           PRINT #0,10000+const_offset_million+i3*1000,"is",TABLE(10000+const_offset_million+i3*1000)
        ENDIF
    NEXT i3


    'Record the final data of last compensated point
    VR(x_of_last_thread_pos)=TABLE(31000+ii+VR(encode_offset_pos)-1)
    VR(y_of_last_thread_pos)=TABLE(32000+ii+VR(encode_offset_pos)-1)
    VR(z_of_last_thread_pos)=TABLE(33000+ii+VR(encode_offset_pos)-1)


'    FOR i3=0 TO 50
'        TABLE(10000+count_command+VR(encode_offset_pos)+i3*1000,0)
'    NEXT i3
    VR(9000)=VR(9000+count_command)
    VR(10000)=VR(10000+count_command)
    VR(11000)=VR(11000+count_command)
    VR(12000)=VR(12000+count_command)
    VR(13000)=VR(13000+count_command)
    VR(14000)=VR(14000+count_command)
    VR(15000)=VR(15000+count_command)
    VR(16000)=VR(16000+count_command)
    VR(17000)=VR(17000+count_command)
    VR(18000)=VR(18000+count_command)
    VR(19000)=VR(19000+count_command)
    VR(20000)=VR(20000+count_command)
    VR(21000)=VR(21000+count_command)
    VR(21001)=VR(21000+count_command)


    FOR n=1 TO count_command
        VR(9000+n)=0
        VR(10000+n)=0
        VR(11000+n)=0
        VR(12000+n)=0
        VR(13000+n)=0
        VR(14000+n)=0
        VR(15000+n)=0
        VR(16000+n)=0
        VR(17000+n)=0
        VR(18000+n)=0
        VR(19000+n)=0
        VR(20000+n)=0
        VR(21000+n)=0
    NEXT n
    ''''''clear some VR or table up to conditions''''do it later
ENDIF

'Store the real position of t
'the compensated encoding result
VR(txt_range_pos)=count_command
VR(encode_real_end_pos)=ii
VR(encode_times_pos)=VR(encode_times_pos)+1
''Test'
'IF VR(encode_offset_pos)=const_offset_zero THEN
'    VR(encode_offset_pos)=const_offset_million
'ELSE
'    VR(encode_offset_pos)=const_offset_zero
'ENDIF
''Test'
STOP
'*********************Function Part**************************
'*********************Function Part**************************
'*********************Function Part**************************
'*********************Function Part**************************
'*********************Function Part**************************
'*********************Function Part**************************
get_number:
VR(0)=0
DIM i_get_number,flag_decimal_point,position_decimal_point,flag_negtive AS INTEGER
i_get_number=i
flag_decimal_point=0
position_decimal_point=0
flag_negtive=0
'Find if there is a negative
IF TABLE(i_get_number+1+VR(txt_start_pos)+VR(txt_last_start_position))=ASC("-") THEN
    flag_negtive=1
ENDIF
'Find if there is a decimal point
REPEAT
    DIM m_after AS INTEGER
    m_after=TABLE(i_get_number+1+VR(txt_start_pos)+VR(txt_last_start_position))
    IF m_after=ASC(".")THEN
        flag_decimal_point=1
        position_decimal_point=i_get_number+1
    ENDIF
    i_get_number=i_get_number+1
UNTIL (TABLE(i_get_number+VR(txt_start_pos)+VR(txt_last_start_position))=32 _
    OR TABLE(i_get_number+VR(txt_start_pos)+VR(txt_last_start_position))=13 _
    OR TABLE(i_get_number+VR(txt_start_pos)+VR(txt_last_start_position))=3 OR TABLE(i_get_number+VR(txt_start_pos)+VR _
    (txt_last_start_position))=0)
'32 is the ASC of Backspace,13 is the carriage return,3 is end of transmissions

'If it doesn't have
IF flag_decimal_point=0 THEN
    i2=0
    FOR i1=(i_get_number-1) TO (i+1+flag_negtive) STEP -1
        VR(0)=VR(0)+VAL(CHR(TABLE(i1+VR(txt_start_pos)+VR(txt_last_start_position))))*10^i2
        i2=i2+1
    NEXT i1
ENDIF
'If it has
IF flag_decimal_point=1 THEN
    i2=-1
    FOR i1=(position_decimal_point+1)TO(i_get_number-1) STEP 1
        VR(0)=VR(0)+VAL(CHR(TABLE(i1+VR(txt_start_pos)+VR(txt_last_start_position))))*10^i2
        i2=i2-1
    NEXT i1
    i2=0
    FOR i1=(position_decimal_point-1)TO(i+1) STEP -1
        VR(0)=VR(0)+VAL(CHR(TABLE(i1+VR(txt_start_pos)+VR(txt_last_start_position))))*10^i2
        i2=i2+1
    NEXT i1
ENDIF

VR(0)=VR(0)*(-1)^flag_negtive

RETURN
'velocity look-ahead for setting velocity
velocity_look_ahead:
'FORCE_SPEED=run_speed
'STARTMOVE_SPEED=start_speed
'ENDMOVE_SPEED=end_speed
RETURN
'***********************************************************
'Calculate the cutter compensation
cutter_compensation:
DIM d AS FLOAT 'this is the radius of cutter
DIM x1,y1,x2,y2,r AS FLOAT
GOSUB velocity_vector_calculation
RETURN

velocity_vector_calculation:
i=0
j=count_command
FOR i=1 TO j
    IF VR(22000+i)=0 THEN
        VR(22000+i)=VR(22000+i-1)
    ENDIF
    d=VR(22000+i)*VR(21000+i)
    IF VR(10000+i)=0 THEN
        GOSUB line_unit_vector
    ENDIF
    IF VR(10000+i)=1 THEN
        GOSUB line_unit_vector
    ENDIF
    IF VR(10000+i)=2 THEN
        GOSUB cir_unit_vector
    ENDIF
    IF VR(10000+i)=3 THEN
        GOSUB cir_unit_vector
    ENDIF
    GOSUB cutter_vector
    GOSUB velocity_setting
NEXT i
ii=1

'!!!Consider the interval of threads here!!!
'The first time have the offset of the first point
IF(j<>1) THEN
    IF VR(encode_times_pos)=0 THEN
        FOR i=1 TO j-1
            TABLE(40000+ii+VR(encode_offset_pos),1)
            GOSUB cutter_point_calculation
        NEXT i
    ELSE
        FOR i=0 TO j-1
            TABLE(40000+ii+VR(encode_offset_pos),1)
            GOSUB cutter_point_calculation
        NEXT i
    ENDIF
ENDIF
'IF VR(encode_times_pos)=0 THEN
'    TABLE(first_point_offset_x,TABLE(16001))
'    TABLE(first_point_offset_z,TABLE(17001))
'ENDIF

'End point
IF VR(encode_all_finished_flag_pos)=1 THEN
    d=VR(22000+j)*VR(21000+j)
    TABLE(40000+ii+VR(encode_offset_pos),1)
    IF VR(20000+j)>0 THEN
        TABLE(37000+ii+VR(encode_offset_pos),VR(20000+j))
        TABLE(30000+ii+VR(encode_offset_pos),4)
    ENDIF
    IF VR(18000+j)=8 THEN
        TABLE(38000+ii+VR(encode_offset_pos),VR(18000+j))
    ENDIF
    IF VR(21000+j)<>0 THEN
        IF VR(10000+j)=1 THEN
            TABLE(31000+ii+VR(encode_offset_pos),TABLE(11000+j+VR(encode_offset_pos))+TABLE(16000+j+VR _
                (encode_offset_pos)))
            TABLE(33000+ii+VR(encode_offset_pos),TABLE(13000+j+VR(encode_offset_pos))+TABLE(17000+j+VR _
                (encode_offset_pos)))
            TABLE(30000+ii+VR(encode_offset_pos),VR(10000+j))
        ELSEIF VR(10000+j)=0 THEN
            TABLE(31000+ii+VR(encode_offset_pos),TABLE(11000+j+VR(encode_offset_pos))-ABS(d)*TABLE(14000+j+VR _
                (encode_offset_pos)))
            TABLE(33000+ii+VR(encode_offset_pos),TABLE(13000+j+VR(encode_offset_pos))-ABS(d)*TABLE(15000+j+VR _
                (encode_offset_pos)))
            TABLE(30000+ii+VR(encode_offset_pos),0)
        ELSEIF VR(10000+j)=2 OR VR(10000+j)=3 THEN
        TABLE(31000+ii+VR(encode_offset_pos),TABLE(11000+j+VR(encode_offset_pos))+TABLE(22000+j+VR(encode_offset_pos))*_
                (-d))
        TABLE(33000+ii+VR(encode_offset_pos),TABLE(13000+j+VR(encode_offset_pos))+TABLE(21000+j+VR(encode_offset_pos))*_
                d)
            TABLE(30000+ii+VR(encode_offset_pos),VR(10000+j))
            TABLE(34000+ii+VR(encode_offset_pos),TABLE(18000+j+VR(encode_offset_pos)))
            TABLE(35000+ii+VR(encode_offset_pos),TABLE(19000+j+VR(encode_offset_pos)))
        ENDIF
    ELSE
        IF VR(10000+j)=1 THEN
            TABLE(31000+ii+VR(encode_offset_pos),TABLE(11000+j+VR(encode_offset_pos)))
            TABLE(33000+ii+VR(encode_offset_pos),TABLE(13000+j+VR(encode_offset_pos)))
            TABLE(30000+ii+VR(encode_offset_pos),VR(10000+j))
        ELSEIF VR(10000+j)=0 THEN
            TABLE(31000+ii+VR(encode_offset_pos),TABLE(11000+j+VR(encode_offset_pos)))
            TABLE(33000+ii+VR(encode_offset_pos),TABLE(13000+j+VR(encode_offset_pos)))
            TABLE(30000+ii+VR(encode_offset_pos),VR(10000+j))
        ELSEIF VR(10000+j)=2 OR VR(10000+j)=3 THEN
            TABLE(31000+ii+VR(encode_offset_pos),TABLE(11000+j+VR(encode_offset_pos)))
            TABLE(33000+ii+VR(encode_offset_pos),TABLE(13000+j+VR(encode_offset_pos)))
            TABLE(30000+ii+VR(encode_offset_pos),VR(10000+j))
            TABLE(34000+ii+VR(encode_offset_pos),TABLE(18000+j+VR(encode_offset_pos)))
            TABLE(35000+ii+VR(encode_offset_pos),TABLE(19000+j+VR(encode_offset_pos)))
        ENDIF
    ENDIF
    IF VR(17000+j)=9 THEN
        TABLE(41000+ii+VR(encode_offset_pos),VR(17000+j))
    ENDIF

    IF VR(19000+j)=2 THEN
        TABLE(39000+ii+VR(encode_offset_pos),VR(19000+j))
    ENDIF
ENDIF



RETURN
'***************************************
'calculate the unit vector of each move
line_unit_vector:
x1=TABLE(11000+i-1+VR(encode_offset_pos))
x2=TABLE(11000+i+VR(encode_offset_pos))
y1=TABLE(13000+i-1+VR(encode_offset_pos))
y2=TABLE(13000+i+VR(encode_offset_pos))
TABLE(14000+i+VR(encode_offset_pos),(x2-x1)/SQR((x2-x1)^2+(y2-y1)^2))
TABLE(15000+i+VR(encode_offset_pos),(y2-y1)/SQR((x2-x1)^2+(y2-y1)^2))
TABLE(21000+i+VR(encode_offset_pos),(x2-x1)/SQR((x2-x1)^2+(y2-y1)^2))
TABLE(22000+i+VR(encode_offset_pos),(y2-y1)/SQR((x2-x1)^2+(y2-y1)^2))

RETURN
cir_unit_vector:
x=TABLE(11000+i-1+VR(encode_offset_pos))
y=TABLE(13000+i-1+VR(encode_offset_pos))
x0=TABLE(11000+i-1+VR(encode_offset_pos))+VR(14000+i)
y0=TABLE(13000+i-1+VR(encode_offset_pos))+VR(15000+i)
r=SQR((y0-y)^2+(x0-x)^2)
IF VR(10000+i)=2 THEN r=-r
TABLE(14000+i+VR(encode_offset_pos),(y-y0)/r)
TABLE(15000+i+VR(encode_offset_pos),(x0-x)/r)
TABLE(18000+i+VR(encode_offset_pos),x0)'Remember the absolute coordinate of the cir center
TABLE(19000+i+VR(encode_offset_pos),y0)
x=TABLE(11000+i+VR(encode_offset_pos))
y=TABLE(13000+i+VR(encode_offset_pos))
TABLE(21000+i+VR(encode_offset_pos),(y-y0)/r)'Calculate the final point velocity vector of cir
TABLE(22000+i+VR(encode_offset_pos),(x0-x)/r)
RETURN
'***************************************
cutter_vector:
TABLE(16000+i+VR(encode_offset_pos),TABLE(15000+i+VR(encode_offset_pos))*(-d))
TABLE(17000+i+VR(encode_offset_pos),TABLE(14000+i+VR(encode_offset_pos))*d)
TABLE(24000+i+VR(encode_offset_pos),TABLE(22000+i+VR(encode_offset_pos))*(-d))
TABLE(25000+i+VR(encode_offset_pos),TABLE(21000+i+VR(encode_offset_pos))*d)
RETURN
'***************************************
velocity_setting:

RETURN
'***************************************
cutter_point_calculation:
DIM flag_of_cutter AS INTEGER'This is the flag to declare which kind of compensation to do
DIM alpha,value_of_cos,value_of_sin AS FLOAT'Alpha is the angel of the two velocity
DIM compensated_x,compensated_z AS FLOAT
DIM xl1,yl1,xl2,yl2,xr1,yr1,r1,xr2,yr2,r2,delta,d1,distance_r1_r2 AS FLOAT'Store the coordinate values of the point
flag_of_cutter=0
IF (VR(21000+i)<>0 AND VR(21000+i+1)<>0) THEN
    d=VR(22000+i)*VR(21000+i)
    IF (VR(10000+i)=1 AND VR(10000+i+1)=1) THEN flag_of_cutter=1
    IF (VR(10000+i)=1 AND VR(10000+i+1)=2) OR (VR(10000+i)=1 AND VR(10000+i+1)=3) THEN flag_of_cutter=2
    IF (VR(10000+i)=2 AND VR(10000+i+1)=1) OR (VR(10000+i)=3 AND VR(10000+i+1)=1) THEN flag_of_cutter=3
    IF (VR(10000+i)=2 AND VR(10000+i+1)=3) OR (VR(10000+i)=3 AND VR(10000+i+1)=2) THEN flag_of_cutter=4
    IF (VR(10000+i)=2 AND VR(10000+i+1)=2) OR (VR(10000+i)=3 AND VR(10000+i+1)=3) THEN flag_of_cutter=4
    IF flag_of_cutter<>3 AND flag_of_cutter<>4 THEN
        value_of_cos=TABLE(14000+i+VR(encode_offset_pos))*TABLE(14001+i+VR(encode_offset_pos))+TABLE(15000+i+_
            VR(encode_offset_pos))*TABLE(15001+i+VR(encode_offset_pos))'
'calculate the Alpha
        value_of_sin=TABLE(14000+i+VR(encode_offset_pos))*TABLE(15001+i+VR(encode_offset_pos))-TABLE(14001+i+_
            VR(encode_offset_pos))*TABLE(15000+i+VR(encode_offset_pos))
    ELSEIF flag_of_cutter=3 OR flag_of_cutter=4 THEN
        value_of_cos=TABLE(21000+i+VR(encode_offset_pos))*TABLE(14001+i+VR(encode_offset_pos))+TABLE(22000+i+_
            VR(encode_offset_pos))*TABLE(15001+i+VR(encode_offset_pos))
        value_of_sin=TABLE(21000+i+VR(encode_offset_pos))*TABLE(15001+i+VR(encode_offset_pos))-TABLE(14001+i+_
            VR(encode_offset_pos))*TABLE(22000+i+VR(encode_offset_pos))
    ENDIF
'Acorrding to the present article,following is the way to judge three kinds of cutter compensation
    IF value_of_sin<0.001 AND value_of_sin>-0.001 THEN
        value_of_sin=0
    ENDIF

    IF SGN(d)*value_of_sin>=0 THEN
        flag_of_cutter=flag_of_cutter+10
    ELSEIF SGN(d)*value_of_sin<0 AND value_of_cos>0 THEN
        flag_of_cutter=flag_of_cutter+20
    ELSE
        flag_of_cutter=flag_of_cutter+30
    ENDIF
    IF (VR(10000+i)=0 AND VR(10000+i+1)<>0) THEN flag_of_cutter = 5
    IF (VR(10000+i)<>0 AND VR(10000+i+1)=0) THEN flag_of_cutter = 6
    IF (VR(10000+i)=0 AND VR(10000+i+1)=0) THEN flag_of_cutter = 10
ENDIF
IF (VR(21000+i)=0 AND VR(21000+i+1)<>0) THEN flag_of_cutter=7
IF (VR(21000+i)<>0 AND VR(21000+i+1)=0) THEN flag_of_cutter=8
IF (VR(21000+i)=0 AND VR(21000+i+1)=0) THEN flag_of_cutter=9
'Part of M Code(like M08) will be handled here
IF VR(18000+i)=8 THEN
    TABLE(38000+ii+VR(encode_offset_pos),VR(18000+i))
ENDIF
'F Code was handled here
IF VR(16000+i)<>0 THEN
    TABLE(36000+ii+VR(encode_offset_pos),VR(16000+i))
ENDIF
'G04(Time Pause) was handled here
IF VR(20000+i)>0 THEN
    TABLE(37000+ii+VR(encode_offset_pos),VR(20000+i))
ENDIF



'Calculate the tool compensation
IF flag_of_cutter=11 THEN GOSUB shortening_line_to_line
IF flag_of_cutter=12 THEN GOSUB shortening_line_to_cir
IF flag_of_cutter=13 THEN GOSUB shortening_cir_to_line
IF flag_of_cutter=14 THEN GOSUB shortening_cir_to_cir
IF flag_of_cutter=21 THEN GOSUB extension_line_to_line
IF flag_of_cutter=22 THEN GOSUB extension_line_to_cir
IF flag_of_cutter=23 THEN GOSUB extension_cir_to_line
IF flag_of_cutter=24 THEN GOSUB extension_cir_to_cir
IF flag_of_cutter=31 THEN GOSUB insertion_line_to_line
IF flag_of_cutter=32 THEN GOSUB insertion_line_to_cir
IF flag_of_cutter=33 THEN GOSUB insertion_cir_to_line
IF flag_of_cutter=34 THEN GOSUB insertion_cir_to_cir
IF flag_of_cutter=5 THEN GOSUB former_g00
IF flag_of_cutter=6 THEN GOSUB after_g00
IF flag_of_cutter=7 THEN GOSUB former_g40
IF flag_of_cutter=8 THEN GOSUB after_g40
IF flag_of_cutter=9 THEN GOSUB g40_g40
IF flag_of_cutter=10 THEN GOSUB g00_g00

'Part of M Code(like M09) will be handled here
IF VR(17000+i)=9 THEN
    TABLE(41000+ii+VR(encode_offset_pos),VR(17000+i))
ENDIF

IF VR(19000+i)=2 THEN
    TABLE(39000+ii+VR(encode_offset_pos),VR(19000+i))
ENDIF

RETURN

'********************
shortening_line_to_line:

d1=d
xl1=TABLE(14000+i+VR(encode_offset_pos))
yl1=TABLE(15000+i+VR(encode_offset_pos))
xl2=TABLE(14000+i+1+VR(encode_offset_pos))
yl2=TABLE(15000+i+1+VR(encode_offset_pos))
DIM if_zero AS FLOAT
if_zero=xl1*yl2-xl2*yl1
IF(if_zero<>0) THEN
    compensated_x=(xl2-xl1)*d/(xl1*yl2-xl2*yl1)
    compensated_z=(yl2-yl1)*d/(xl1*yl2-xl2*yl1)
    TABLE(31000+ii+VR(encode_offset_pos),compensated_x+TABLE(11000+i+VR(encode_offset_pos)))
    TABLE(33000+ii+VR(encode_offset_pos),compensated_z+TABLE(13000+i+VR(encode_offset_pos)))
    TABLE(30000+ii+VR(encode_offset_pos),1)
ELSE
    TABLE(31000+ii+VR(encode_offset_pos),TABLE(24000+i+VR(encode_offset_pos))+TABLE(11000+i+VR(encode_offset_pos)))
    TABLE(33000+ii+VR(encode_offset_pos),TABLE(25000+i+VR(encode_offset_pos))+TABLE(13000+i+VR(encode_offset_pos)))
    TABLE(30000+ii+VR(encode_offset_pos),1)
ENDIF
ii=ii+1


RETURN

shortening_line_to_cir:
IF VR(22000+i)=VR(22000+i+1) THEN
    d1=d
    xl1=TABLE(14000+i+VR(encode_offset_pos))
    yl1=TABLE(15000+i+VR(encode_offset_pos))
    xl2=TABLE(14000+i+1+VR(encode_offset_pos))
    yl2=TABLE(15000+i+1+VR(encode_offset_pos))
    xr2=VR(14000+i+1)
    yr2=VR(15000+i+1)

    r2=SQR(xr2^2+yr2^2)
    IF VR(10000+i+1)=3 THEN''''???????????????why this??
        r2=-r2
    ENDIF
    delta=SQR((r2-d)^2-(xl1*yr2-yl1*xr2-d1)^2)
    compensated_x=xl1*(xl1*xr2+yl1*yr2)-d1*yl1-SGN(xl1*xr2+yl1*yr2)*delta*xl1
    compensated_z=yl1*(xl1*xr2+yl1*yr2)+d1*xl1-SGN(xl1*xr2+yl1*yr2)*delta*yl1
    TABLE(31000+ii+VR(encode_offset_pos),compensated_x+TABLE(11000+i+VR(encode_offset_pos)))
    TABLE(33000+ii+VR(encode_offset_pos),compensated_z+TABLE(13000+i+VR(encode_offset_pos)))
    TABLE(30000+ii+VR(encode_offset_pos),1)
    ii=ii+1

ELSE
    IF value_of_sin=0 THEN
        d1=d
        xl1=TABLE(14000+i+VR(encode_offset_pos))
        yl1=TABLE(15000+i+VR(encode_offset_pos))
        xl2=TABLE(14000+i+1+VR(encode_offset_pos))
        yl2=TABLE(15000+i+1+VR(encode_offset_pos))
        xr2=VR(14000+i+1)
        yr2=VR(15000+i+1)

        r2=SQR(xr2^2+yr2^2)
        IF VR(10000+i+1)=3 THEN''''???????????????why this??
            r2=-r2
        ENDIF
        delta=SQR((r2-d)^2-(xl1*yr2-yl1*xr2-d1)^2)
        compensated_x=xl1*(xl1*xr2+yl1*yr2)-d1*yl1-SGN(xl1*xr2+yl1*yr2)*delta*xl1
        compensated_z=yl1*(xl1*xr2+yl1*yr2)+d1*xl1-SGN(xl1*xr2+yl1*yr2)*delta*yl1
        TABLE(31000+ii+VR(encode_offset_pos),compensated_x+TABLE(11000+i+VR(encode_offset_pos)))
        TABLE(33000+ii+VR(encode_offset_pos),compensated_z+TABLE(13000+i+VR(encode_offset_pos)))
        TABLE(30000+ii+VR(encode_offset_pos),1)
        ii=ii+1

        xc2=TABLE(18000+i+1+VR(encode_offset_pos))
        yc2=TABLE(19000+i+1+VR(encode_offset_pos))
        rc=TABLE(18000+i+1+VR(encode_offset_pos))
        xr2=VR(14000+i+1)
        yr2=VR(15000+i+1)
        rc=SQR(xr2^2+yr2^2)
        l1=TABLE(14000+i+1+VR(encode_offset_pos))
        l2=TABLE(15000+i+1+VR(encode_offset_pos))
        l3=TABLE(21000+i+1+VR(encode_offset_pos))
        l4=TABLE(22000+i+1+VR(encode_offset_pos))
        cita=ACOS(l1*l3+l2*l4)'unit is rad
        IF cita>0.174 OR cita =0.174 THEN
            alfa=0.174
        ELSE
            alfa=cita/2
        ENDIF
        IF VR(10000+i+1)=3 THEN
            alfa=-alfa
        ENDIF
        xc=TABLE(11000+i+VR(encode_offset_pos))+TABLE(16000+i+1+VR(encode_offset_pos))
        yc=TABLE(13000+i+VR(encode_offset_pos))+TABLE(17000+i+1+VR(encode_offset_pos))
        xb=xc2+COS(alfa)*(xc-xc2)-SIN(alfa)*(yc-yc2)
        yb=yc2+SIN(alfa)*(xc-xc2)+COS(alfa)*(yc-yc2)
        TABLE(31000+ii+VR(encode_offset_pos),xb)
        TABLE(33000+ii+VR(encode_offset_pos),yb)
        TABLE(30000+ii+VR(encode_offset_pos),1)
        ii=ii+1
    ELSE
        '''''shortening equation
    ENDIF
ENDIF



RETURN

shortening_cir_to_line:
IF VR(22000+i)=VR(22000+i+1) THEN
    d1=d
    xl1=TABLE(14000+i+1+VR(encode_offset_pos))
    yl1=TABLE(15000+i+1+VR(encode_offset_pos))

    xr2=-TABLE(11000+i+VR(encode_offset_pos))+TABLE(18000+i+VR(encode_offset_pos))
    yr2=-TABLE(13000+i+VR(encode_offset_pos))+TABLE(19000+i+VR(encode_offset_pos))

    r2=SQR(xr2^2+yr2^2)
    IF VR(10000+i)=3 THEN
        r2=-r2
    ENDIF
    delta=SQR((r2-d)^2-(xl1*yr2-yl1*xr2-d1)^2)
    compensated_x=xl1*(xl1*xr2+yl1*yr2)-d1*yl1-SGN(xl1*xr2+yl1*yr2)*delta*xl1
    compensated_z=yl1*(xl1*xr2+yl1*yr2)+d1*xl1-SGN(xl1*xr2+yl1*yr2)*delta*yl1
    TABLE(31000+ii+VR(encode_offset_pos),compensated_x+TABLE(11000+i+VR(encode_offset_pos)))
    TABLE(33000+ii+VR(encode_offset_pos),compensated_z+TABLE(13000+i+VR(encode_offset_pos)))
    TABLE(30000+ii+VR(encode_offset_pos),VR(10000+i))
    TABLE(34000+ii+VR(encode_offset_pos),TABLE(18000+i+VR(encode_offset_pos)))
    TABLE(35000+ii+VR(encode_offset_pos),TABLE(19000+i+VR(encode_offset_pos)))
    ii=ii+1

ELSE
    IF value_of_sin=0 THEN
        d1=d
        xl1=TABLE(14000+i+1+VR(encode_offset_pos))
        yl1=TABLE(15000+i+1+VR(encode_offset_pos))

        xr2=-TABLE(11000+i+VR(encode_offset_pos))+TABLE(18000+i+VR(encode_offset_pos))
        yr2=-TABLE(13000+i+VR(encode_offset_pos))+TABLE(19000+i+VR(encode_offset_pos))

        r2=SQR(xr2^2+yr2^2)
        IF VR(10000+i)=3 THEN
            r2=-r2
        ENDIF
        delta=SQR((r2-d)^2-(xl1*yr2-yl1*xr2-d1)^2)
        compensated_x=xl1*(xl1*xr2+yl1*yr2)-d1*yl1-SGN(xl1*xr2+yl1*yr2)*delta*xl1
        compensated_z=yl1*(xl1*xr2+yl1*yr2)+d1*xl1-SGN(xl1*xr2+yl1*yr2)*delta*yl1
        TABLE(31000+ii+VR(encode_offset_pos),compensated_x+TABLE(11000+i+VR(encode_offset_pos)))
        TABLE(33000+ii+VR(encode_offset_pos),compensated_z+TABLE(13000+i+VR(encode_offset_pos)))
        TABLE(30000+ii+VR(encode_offset_pos),VR(10000+i))
        TABLE(34000+ii+VR(encode_offset_pos),TABLE(18000+i+VR(encode_offset_pos)))
        TABLE(35000+ii+VR(encode_offset_pos),TABLE(19000+i+VR(encode_offset_pos)))
        ii=ii+1


        dex=TABLE(11000+i+VR(encode_offset_pos))-TABLE(11000+i+1+VR(encode_offset_pos))
        dey=TABLE(13000+i+VR(encode_offset_pos))-TABLE(13000+i+1+VR(encode_offset_pos))
        l0=SQR(dex*dex+dey*dey)
        IF l0>3 OR l0=3 THEN
            k=3/l0
        ELSE
            k=0.5
        ENDIF
        xc=TABLE(11000+i+VR(encode_offset_pos))+TABLE(16000+i+1+VR(encode_offset_pos))
        yc=TABLE(13000+i+VR(encode_offset_pos))+TABLE(17000+i+1+VR(encode_offset_pos))
        xd=TABLE(11000+i+1+VR(encode_offset_pos))+TABLE(24000+i+1+VR(encode_offset_pos))
        yd=TABLE(13000+i+1+VR(encode_offset_pos))+TABLE(25000+i+1+VR(encode_offset_pos))
        xb=k*xc+(1-k)*xd
        yb=k*yc+(1-k)*yd
        TABLE(31000+ii+VR(encode_offset_pos),xb)
        TABLE(33000+ii+VR(encode_offset_pos),yb)
        TABLE(30000+ii+VR(encode_offset_pos),1)
        ii=ii+1
    ELSE
        '''''shortening equation
    ENDIF
ENDIF

RETURN

shortening_cir_to_cir:
IF VR(22000+i)=VR(22000+i+1) THEN
xr1=TABLE(18000+i+VR(encode_offset_pos))-TABLE(11000+i+VR(encode_offset_pos))
yr1=TABLE(19000+i+VR(encode_offset_pos))-TABLE(13000+i+VR(encode_offset_pos))
xr2=VR(14000+i+1)
yr2=VR(15000+i+1)
r1=SQR(xr1^2+yr1^2)
r2=SQR(xr2^2+yr2^2)
distance_r1_r2=SQR((xr1-xr2)^2+(yr1-yr2)^2)
xl1=(yr2-yr1)/distance_r1_r2
yl1=-(xr2-xr1)/distance_r1_r2
IF VR(10000+i)=3 THEN r1=-r1
IF VR(10000+i+1)=3 THEN r2=-r2
d1=-d*(r1-r2)/distance_r1_r2'why another negative sign
r2=r1
xr2=xr1
yr2=yr1
delta=SQR((r2-d)^2-(xl1*yr2-yl1*xr2-d1)^2)
compensated_x=xl1*(xl1*xr2+yl1*yr2)-d1*yl1-SGN(xl1*xr2+yl1*yr2)*delta*xl1
compensated_z=yl1*(xl1*xr2+yl1*yr2)+d1*xl1-SGN(xl1*xr2+yl1*yr2)*delta*yl1
TABLE(31000+ii+VR(encode_offset_pos),compensated_x+TABLE(11000+i+VR(encode_offset_pos)))
TABLE(33000+ii+VR(encode_offset_pos),compensated_z+TABLE(13000+i+VR(encode_offset_pos)))
TABLE(30000+ii+VR(encode_offset_pos),VR(10000+i))
TABLE(34000+ii+VR(encode_offset_pos),TABLE(18000+i+VR(encode_offset_pos)))
TABLE(35000+ii+VR(encode_offset_pos),TABLE(19000+i+VR(encode_offset_pos)))
ii=ii+1
ELSE
    IF value_of_sin=0 THEN
        xr1=TABLE(18000+i+VR(encode_offset_pos))-TABLE(11000+i+VR(encode_offset_pos))
        yr1=TABLE(19000+i+VR(encode_offset_pos))-TABLE(13000+i+VR(encode_offset_pos))
        xr2=VR(14000+i+1)
        yr2=VR(15000+i+1)
        r1=SQR(xr1^2+yr1^2)
        r2=SQR(xr2^2+yr2^2)
        distance_r1_r2=SQR((xr1-xr2)^2+(yr1-yr2)^2)
        xl1=(yr2-yr1)/distance_r1_r2
        yl1=-(xr2-xr1)/distance_r1_r2
        IF VR(10000+i)=3 THEN r1=-r1
        IF VR(10000+i+1)=3 THEN r2=-r2
        d1=-d*(r1-r2)/distance_r1_r2'why another negative sign
        r2=r1
        xr2=xr1
        yr2=yr1
        delta=SQR((r2-d)^2-(xl1*yr2-yl1*xr2-d1)^2)
        compensated_x=xl1*(xl1*xr2+yl1*yr2)-d1*yl1-SGN(xl1*xr2+yl1*yr2)*delta*xl1
        compensated_z=yl1*(xl1*xr2+yl1*yr2)+d1*xl1-SGN(xl1*xr2+yl1*yr2)*delta*yl1
        TABLE(31000+ii+VR(encode_offset_pos),compensated_x+TABLE(11000+i+VR(encode_offset_pos)))
        TABLE(33000+ii+VR(encode_offset_pos),compensated_z+TABLE(13000+i+VR(encode_offset_pos)))
        TABLE(30000+ii+VR(encode_offset_pos),VR(10000+i))
        TABLE(34000+ii+VR(encode_offset_pos),TABLE(18000+i+VR(encode_offset_pos)))
        TABLE(35000+ii+VR(encode_offset_pos),TABLE(19000+i+VR(encode_offset_pos)))
        ii=ii+1

        xc2=TABLE(18000+i+1+VR(encode_offset_pos))
        yc2=TABLE(19000+i+1+VR(encode_offset_pos))
        rc=TABLE(18000+i+1+VR(encode_offset_pos))
        xr2=VR(14000+i+1)
        yr2=VR(15000+i+1)
        rc=SQR(xr2^2+yr2^2)
        l1=TABLE(14000+i+1+VR(encode_offset_pos))
        l2=TABLE(15000+i+1+VR(encode_offset_pos))
        l3=TABLE(21000+i+1+VR(encode_offset_pos))
        l4=TABLE(22000+i+1+VR(encode_offset_pos))
        cita=ACOS(l1*l3+l2*l4)'unit is rad
        IF cita>0.174 OR cita =0.174 THEN
            alfa=0.174
        ELSE
            alfa=cita/2
        ENDIF
        IF VR(10000+i+1)=3 THEN
            alfa=-alfa
        ENDIF
        xc=TABLE(11000+i+VR(encode_offset_pos))+TABLE(16000+i+1+VR(encode_offset_pos))
        yc=TABLE(13000+i+VR(encode_offset_pos))+TABLE(17000+i+1+VR(encode_offset_pos))
        xb=xc2+COS(alfa)*(xc-xc2)-SIN(alfa)*(yc-yc2)
        yb=yc2+SIN(alfa)*(xc-xc2)+COS(alfa)*(yc-yc2)
        TABLE(31000+ii+VR(encode_offset_pos),xb)
        TABLE(33000+ii+VR(encode_offset_pos),yb)
        TABLE(30000+ii+VR(encode_offset_pos),1)
        ii=ii+1
    ELSE
        '''''shortening equation
    ENDIF
ENDIF



RETURN
'**********************
extension_line_to_line:

d1=d
xl1=TABLE(14000+i+VR(encode_offset_pos))
yl1=TABLE(15000+i+VR(encode_offset_pos))
xl2=TABLE(14000+i+1+VR(encode_offset_pos))
yl2=TABLE(15000+i+1+VR(encode_offset_pos))
compensated_x=(xl2-xl1)*d/(xl1*yl2-xl2*yl1)
compensated_z=(yl2-yl1)*d/(xl1*yl2-xl2*yl1)
TABLE(31000+ii+VR(encode_offset_pos),compensated_x+TABLE(11000+i+VR(encode_offset_pos)))
TABLE(33000+ii+VR(encode_offset_pos),compensated_z+TABLE(13000+i+VR(encode_offset_pos)))
TABLE(30000+ii+VR(encode_offset_pos),1)
ii=ii+1

RETURN

extension_line_to_cir:

d1=d
xl1=TABLE(14000+i+VR(encode_offset_pos))
yl1=TABLE(15000+i+VR(encode_offset_pos))
xl2=TABLE(14000+i+1+VR(encode_offset_pos))
yl2=TABLE(15000+i+1+VR(encode_offset_pos))
compensated_x=(xl2-xl1)*d/(xl1*yl2-xl2*yl1)
compensated_z=(yl2-yl1)*d/(xl1*yl2-xl2*yl1)
TABLE(31000+ii+VR(encode_offset_pos),compensated_x+TABLE(11000+i+VR(encode_offset_pos)))
TABLE(33000+ii+VR(encode_offset_pos),compensated_z+TABLE(13000+i+VR(encode_offset_pos)))
TABLE(30000+ii+VR(encode_offset_pos),1)
ii=ii+1
TABLE(31000+ii+VR(encode_offset_pos),TABLE(11000+i+VR(encode_offset_pos))+TABLE(16000+i+1+VR(encode_offset_pos)))
TABLE(33000+ii+VR(encode_offset_pos),TABLE(13000+i+VR(encode_offset_pos))+TABLE(17000+i+1+VR(encode_offset_pos)))
TABLE(30000+ii+VR(encode_offset_pos),1)
ii=ii+1

RETURN

extension_cir_to_line:

d1=d
TABLE(31000+ii+VR(encode_offset_pos),TABLE(11000+i+VR(encode_offset_pos))+TABLE(22000+i+VR(encode_offset_pos))*(-d))
TABLE(33000+ii+VR(encode_offset_pos),TABLE(13000+i+VR(encode_offset_pos))+TABLE(21000+i+VR(encode_offset_pos))*d)
TABLE(30000+ii+VR(encode_offset_pos),VR(10000+i))
TABLE(34000+ii+VR(encode_offset_pos),TABLE(18000+i+VR(encode_offset_pos)))
TABLE(35000+ii+VR(encode_offset_pos),TABLE(19000+i+VR(encode_offset_pos)))
ii=ii+1
r=SQR((TABLE(11000+i+VR(encode_offset_pos))-TABLE(18000+i+VR(encode_offset_pos)))^2+(TABLE(13000+i+_
    VR(encode_offset_pos))-TABLE(19000+i+VR(encode_offset_pos)))^2)
IF VR(10000+i)=2 THEN r=-r
xl1=TABLE(21000+i+VR(encode_offset_pos))
yl1=TABLE(22000+i+VR(encode_offset_pos))
xl2=TABLE(14000+i+1+VR(encode_offset_pos))
yl2=TABLE(15000+i+1+VR(encode_offset_pos))
compensated_x=(xl2-xl1)*d/(xl1*yl2-xl2*yl1)
compensated_z=(yl2-yl1)*d/(xl1*yl2-xl2*yl1)
TABLE(31000+ii+VR(encode_offset_pos),compensated_x+TABLE(11000+i+VR(encode_offset_pos)))
TABLE(33000+ii+VR(encode_offset_pos),compensated_z+TABLE(13000+i+VR(encode_offset_pos)))
TABLE(30000+ii+VR(encode_offset_pos),1)
ii=ii+1
RETURN

extension_cir_to_cir:

d1=d
TABLE(31000+ii+VR(encode_offset_pos),TABLE(11000+i+VR(encode_offset_pos))+TABLE(22000+i+VR(encode_offset_pos))*(-d))
TABLE(33000+ii+VR(encode_offset_pos),TABLE(13000+i+VR(encode_offset_pos))+TABLE(21000+i+VR(encode_offset_pos))*d)
TABLE(30000+ii+VR(encode_offset_pos),VR(10000+i))
TABLE(34000+ii+VR(encode_offset_pos),TABLE(18000+i+VR(encode_offset_pos)))
TABLE(35000+ii+VR(encode_offset_pos),TABLE(19000+i+VR(encode_offset_pos)))
ii=ii+1
xl1=TABLE(21000+i+VR(encode_offset_pos))
yl1=TABLE(22000+i+VR(encode_offset_pos))
xl2=TABLE(14000+i+1+VR(encode_offset_pos))
yl2=TABLE(15000+i+1+VR(encode_offset_pos))
compensated_x=(xl2-xl1)*d/(xl1*yl2-xl2*yl1)
compensated_z=(yl2-yl1)*d/(xl1*yl2-xl2*yl1)
TABLE(31000+ii+VR(encode_offset_pos),compensated_x+TABLE(11000+i+VR(encode_offset_pos)))
TABLE(33000+ii+VR(encode_offset_pos),compensated_z+TABLE(13000+i+VR(encode_offset_pos)))
TABLE(30000+ii+VR(encode_offset_pos),1)
ii=ii+1
TABLE(31000+ii+VR(encode_offset_pos),TABLE(11000+i+VR(encode_offset_pos))+TABLE(16000+i+1+VR(encode_offset_pos)))
TABLE(33000+ii+VR(encode_offset_pos),TABLE(13000+i+VR(encode_offset_pos))+TABLE(17000+i+1+VR(encode_offset_pos)))
TABLE(30000+ii+VR(encode_offset_pos),1)
TABLE(34000+ii+VR(encode_offset_pos),TABLE(18000+i+VR(encode_offset_pos)))
TABLE(35000+ii+VR(encode_offset_pos),TABLE(19000+i+VR(encode_offset_pos)))
ii=ii+1

RETURN
'**********************
insertion_line_to_line:

d1=d
TABLE(31000+ii+VR(encode_offset_pos),TABLE(16000+i+VR(encode_offset_pos))+ABS(d)*TABLE(14000+i+VR(encode_offset_pos))+_
    TABLE(11000+i+_
    VR(encode_offset_pos)))
TABLE(33000+ii+VR(encode_offset_pos),TABLE(17000+i+VR(encode_offset_pos))+ABS(d)*TABLE(15000+i+VR(encode_offset_pos))+_
    TABLE(13000+i+_
    VR(encode_offset_pos)))
TABLE(30000+ii+VR(encode_offset_pos),1)
ii=ii+1
TABLE(31000+ii+VR(encode_offset_pos),TABLE(16000+i+1+VR(encode_offset_pos))-ABS(d)*TABLE(14000+i+1+_
    VR(encode_offset_pos))+TABLE(11000+i+VR(encode_offset_pos)))
TABLE(33000+ii+VR(encode_offset_pos),TABLE(17000+i+1+VR(encode_offset_pos))-ABS(d)*TABLE(15000+i+1+_
    VR(encode_offset_pos))+TABLE(13000+i+VR(encode_offset_pos)))
TABLE(30000+ii+VR(encode_offset_pos),1)
ii=ii+1

RETURN

insertion_line_to_cir:

d1=d
TABLE(31000+ii+VR(encode_offset_pos),TABLE(16000+i+VR(encode_offset_pos))+ABS(d)*TABLE(14000+i+VR(encode_offset_pos))+_
    TABLE(11000+i+_
    VR(encode_offset_pos)))
TABLE(33000+ii+VR(encode_offset_pos),TABLE(17000+i+VR(encode_offset_pos))+ABS(d)*TABLE(15000+i+VR(encode_offset_pos))+_
    TABLE(13000+i+_
    VR(encode_offset_pos)))
TABLE(30000+ii+VR(encode_offset_pos),1)
ii=ii+1
TABLE(31000+ii+VR(encode_offset_pos),TABLE(16000+i+1+VR(encode_offset_pos))-ABS(d)*TABLE(14000+i+1+_
    VR(encode_offset_pos))+TABLE(11000+i+VR(encode_offset_pos)))
TABLE(33000+ii+VR(encode_offset_pos),TABLE(17000+i+1+VR(encode_offset_pos))-ABS(d)*TABLE(15000+i+1+_
    VR(encode_offset_pos))+TABLE(13000+i+VR(encode_offset_pos)))
TABLE(30000+ii+VR(encode_offset_pos),1)
ii=ii+1
TABLE(31000+ii+VR(encode_offset_pos),TABLE(11000+i+VR(encode_offset_pos))+TABLE(16000+i+1+VR(encode_offset_pos)))
TABLE(33000+ii+VR(encode_offset_pos),TABLE(13000+i+VR(encode_offset_pos))+TABLE(17000+i+1+VR(encode_offset_pos)))
TABLE(30000+ii+VR(encode_offset_pos),1)
ii=ii+1

RETURN

insertion_cir_to_line:

d1=d
TABLE(31000+ii+VR(encode_offset_pos),TABLE(11000+i+VR(encode_offset_pos))+TABLE(22000+i+VR(encode_offset_pos))*(-d))
TABLE(33000+ii+VR(encode_offset_pos),TABLE(13000+i+VR(encode_offset_pos))+TABLE(21000+i+VR(encode_offset_pos))*d)
TABLE(30000+ii+VR(encode_offset_pos),VR(10000+i))
TABLE(34000+ii+VR(encode_offset_pos),TABLE(18000+i+VR(encode_offset_pos)))
TABLE(35000+ii+VR(encode_offset_pos),TABLE(19000+i+VR(encode_offset_pos)))
ii=ii+1
TABLE(31000+ii+VR(encode_offset_pos),TABLE(22000+i+VR(encode_offset_pos))*(-d)+ABS(d)*TABLE(21000+i+_
    VR(encode_offset_pos))+TABLE(11000+i+VR(encode_offset_pos)))
TABLE(33000+ii+VR(encode_offset_pos),TABLE(21000+i+VR(encode_offset_pos))*d+ABS(d)*TABLE(22000+i+VR(encode_offset_pos))_
    +TABLE(13000+i+_
    VR(encode_offset_pos)))
TABLE(30000+ii+VR(encode_offset_pos),1)
ii=ii+1
TABLE(31000+ii+VR(encode_offset_pos),TABLE(16000+i+1+VR(encode_offset_pos))-ABS(d)*TABLE(14000+i+1+_
    VR(encode_offset_pos))+TABLE(11000+i+VR(encode_offset_pos)))
TABLE(33000+ii+VR(encode_offset_pos),TABLE(17000+i+1+VR(encode_offset_pos))-ABS(d)*TABLE(15000+i+1+_
    VR(encode_offset_pos))+TABLE(13000+i+VR(encode_offset_pos)))
TABLE(30000+ii+VR(encode_offset_pos),1)
ii=ii+1

RETURN

insertion_cir_to_cir:

d1=d
TABLE(31000+ii+VR(encode_offset_pos),TABLE(11000+i+VR(encode_offset_pos))+TABLE(22000+i+VR(encode_offset_pos))*(-d))
TABLE(33000+ii+VR(encode_offset_pos),TABLE(13000+i+VR(encode_offset_pos))+TABLE(21000+i+VR(encode_offset_pos))*d)
TABLE(30000+ii+VR(encode_offset_pos),VR(10000+i))
TABLE(34000+ii+VR(encode_offset_pos),TABLE(18000+i+VR(encode_offset_pos)))
TABLE(35000+ii+VR(encode_offset_pos),TABLE(19000+i+VR(encode_offset_pos)))
ii=ii+1
TABLE(31000+ii+VR(encode_offset_pos),TABLE(22000+i+VR(encode_offset_pos))*(-d)+ABS(d)*TABLE(21000+i+_
    VR(encode_offset_pos))+TABLE(11000+i+VR(encode_offset_pos)))
TABLE(33000+ii+VR(encode_offset_pos),TABLE(21000+i+VR(encode_offset_pos))*d+ABS(d)*TABLE(22000+i+VR(encode_offset_pos))_
    +TABLE(13000+i+_
    VR(encode_offset_pos)))
TABLE(30000+ii+VR(encode_offset_pos),1)
ii=ii+1
TABLE(31000+ii+VR(encode_offset_pos),TABLE(16000+i+1+VR(encode_offset_pos))-ABS(d)*TABLE(14000+i+1+_
    VR(encode_offset_pos))+TABLE(11000+i+VR(encode_offset_pos)))
TABLE(33000+ii+VR(encode_offset_pos),TABLE(17000+i+1+VR(encode_offset_pos))-ABS(d)*TABLE(15000+i+1+_
    VR(encode_offset_pos))+TABLE(13000+i+VR(encode_offset_pos)))
TABLE(30000+ii+VR(encode_offset_pos),1)
ii=ii+1
TABLE(31000+ii+VR(encode_offset_pos),TABLE(11000+i+VR(encode_offset_pos))+TABLE(16000+i+1+VR(encode_offset_pos)))
TABLE(33000+ii+VR(encode_offset_pos),TABLE(13000+i+VR(encode_offset_pos))+TABLE(17000+i+1+VR(encode_offset_pos)))
TABLE(30000+ii+VR(encode_offset_pos),1)
ii=ii+1

RETURN

former_g00:

d1=d
cutter_x = TABLE(16000+i+1+VR(encode_offset_pos))
cutter_y = TABLE(17000+i+1+VR(encode_offset_pos))
TABLE(31000+ii+VR(encode_offset_pos),TABLE(11000+i+VR(encode_offset_pos))-ABS(d)*TABLE(14000+i+VR(encode_offset_pos)))
TABLE(33000+ii+VR(encode_offset_pos),TABLE(13000+i+VR(encode_offset_pos))-ABS(d)*TABLE(15000+i+VR(encode_offset_pos)))
TABLE(30000+ii+VR(encode_offset_pos),0)
ii=ii+1
TABLE(31000+ii+VR(encode_offset_pos),TABLE(11000+i+VR(encode_offset_pos))+cutter_x)
TABLE(33000+ii+VR(encode_offset_pos),TABLE(13000+i+VR(encode_offset_pos))+cutter_y)
TABLE(30000+ii+VR(encode_offset_pos),0)
ii=ii+1
RETURN

after_g00:
IF VR(10000+i)=1 THEN

    TABLE(31000+ii+VR(encode_offset_pos),TABLE(11000+i+VR(encode_offset_pos))+TABLE(16000+i+VR(encode_offset_pos)))
    TABLE(33000+ii+VR(encode_offset_pos),TABLE(13000+i+VR(encode_offset_pos))+TABLE(17000+i+VR(encode_offset_pos)))
    TABLE(30000+ii+VR(encode_offset_pos),1)
    ii=ii+1


ELSEIF VR(10000+i)=2 OR VR(10000+i)=3 THEN

    TABLE(31000+ii+VR(encode_offset_pos),TABLE(11000+i+VR(encode_offset_pos))+TABLE(22000+i+VR(encode_offset_pos))*_
        (-d))
    TABLE(33000+ii+VR(encode_offset_pos),TABLE(13000+i+VR(encode_offset_pos))+TABLE(21000+i+VR(encode_offset_pos))*_
        d)
    TABLE(30000+ii+VR(encode_offset_pos),VR(10000+i))
    TABLE(34000+ii+VR(encode_offset_pos),TABLE(18000+i+VR(encode_offset_pos)))
    TABLE(35000+ii+VR(encode_offset_pos),TABLE(19000+i+VR(encode_offset_pos)))
    ii=ii+1

ENDIF

RETURN

former_g40:
IF VR(10000+i+1)<>0 THEN
    IF VR(10000+i)=1 THEN
        cutter_x = TABLE(16000+i+1+VR(encode_offset_pos))
        cutter_y = TABLE(17000+i+1+VR(encode_offset_pos))
        TABLE(31000+ii+VR(encode_offset_pos),TABLE(11000+i+VR(encode_offset_pos)))
        TABLE(33000+ii+VR(encode_offset_pos),TABLE(13000+i+VR(encode_offset_pos)))
        TABLE(30000+ii+VR(encode_offset_pos),1)
        ii=ii+1
        TABLE(31000+ii+VR(encode_offset_pos),TABLE(11000+i+VR(encode_offset_pos))+cutter_x)
        TABLE(33000+ii+VR(encode_offset_pos),TABLE(13000+i+VR(encode_offset_pos))+cutter_y)
        TABLE(30000+ii+VR(encode_offset_pos),0)
        ii=ii+1
    ELSEIF VR(10000+i)=0 THEN
        cutter_x = TABLE(16000+i+1+VR(encode_offset_pos))
        cutter_y = TABLE(17000+i+1+VR(encode_offset_pos))
        TABLE(31000+ii+VR(encode_offset_pos),TABLE(11000+i+VR(encode_offset_pos)))
        TABLE(33000+ii+VR(encode_offset_pos),TABLE(13000+i+VR(encode_offset_pos)))
        TABLE(30000+ii+VR(encode_offset_pos),0)
        ii=ii+1
        TABLE(31000+ii+VR(encode_offset_pos),TABLE(11000+i+VR(encode_offset_pos))+cutter_x)
        TABLE(33000+ii+VR(encode_offset_pos),TABLE(13000+i+VR(encode_offset_pos))+cutter_y)
        TABLE(30000+ii+VR(encode_offset_pos),0)
        ii=ii+1
    ELSEIF VR(10000+i)=2 OR VR(10000+i)=3 THEN
        cutter_x = TABLE(16000+i+1+VR(encode_offset_pos))
        cutter_y = TABLE(17000+i+1+VR(encode_offset_pos))
        TABLE(31000+ii+VR(encode_offset_pos),TABLE(11000+i+VR(encode_offset_pos)))
        TABLE(33000+ii+VR(encode_offset_pos),TABLE(13000+i+VR(encode_offset_pos)))
        TABLE(30000+ii+VR(encode_offset_pos),VR(10000+i))
        TABLE(34000+ii+VR(encode_offset_pos),TABLE(18000+i+VR(encode_offset_pos)))
        TABLE(35000+ii+VR(encode_offset_pos),TABLE(19000+i+VR(encode_offset_pos)))
        ii=ii+1
        TABLE(31000+ii+VR(encode_offset_pos),TABLE(11000+i+VR(encode_offset_pos))+cutter_x)
        TABLE(33000+ii+VR(encode_offset_pos),TABLE(13000+i+VR(encode_offset_pos))+cutter_y)
        TABLE(30000+ii+VR(encode_offset_pos),0)
        ii=ii+1
    ENDIF
ELSE
    IF VR(10000+i)=1 THEN
        TABLE(31000+ii+VR(encode_offset_pos),TABLE(11000+i+VR(encode_offset_pos)))
        TABLE(33000+ii+VR(encode_offset_pos),TABLE(13000+i+VR(encode_offset_pos)))
        TABLE(30000+ii+VR(encode_offset_pos),1)
        ii=ii+1
    ELSEIF VR(10000+i)=0 THEN
        TABLE(31000+ii+VR(encode_offset_pos),TABLE(11000+i+VR(encode_offset_pos)))
        TABLE(33000+ii+VR(encode_offset_pos),TABLE(13000+i+VR(encode_offset_pos)))
        TABLE(30000+ii+VR(encode_offset_pos),0)
        ii=ii+1
    ELSEIF VR(10000+i)=2 OR VR(10000+i)=3 THEN
        TABLE(31000+ii+VR(encode_offset_pos),TABLE(11000+i+VR(encode_offset_pos)))
        TABLE(33000+ii+VR(encode_offset_pos),TABLE(13000+i+VR(encode_offset_pos)))
        TABLE(30000+ii+VR(encode_offset_pos),VR(10000+i))
        TABLE(34000+ii+VR(encode_offset_pos),TABLE(18000+i+VR(encode_offset_pos)))
        TABLE(35000+ii+VR(encode_offset_pos),TABLE(19000+i+VR(encode_offset_pos)))
        ii=ii+1
    ENDIF
ENDIF
RETURN

after_g40:
IF VR(10000+i)=1 THEN
    cutter_x = TABLE(24000+i+VR(encode_offset_pos))
    cutter_y = TABLE(25000+i+VR(encode_offset_pos))
    TABLE(31000+ii+VR(encode_offset_pos),TABLE(11000+i+VR(encode_offset_pos))+cutter_x)
    TABLE(33000+ii+VR(encode_offset_pos),TABLE(13000+i+VR(encode_offset_pos))+cutter_y)
    TABLE(30000+ii+VR(encode_offset_pos),1)
    ii=ii+1
    TABLE(31000+ii+VR(encode_offset_pos),TABLE(11000+i+VR(encode_offset_pos)))
    TABLE(33000+ii+VR(encode_offset_pos),TABLE(13000+i+VR(encode_offset_pos)))
    TABLE(30000+ii+VR(encode_offset_pos),0)
    ii=ii+1
ELSEIF VR(10000+i)=0 THEN
    TABLE(31000+ii+VR(encode_offset_pos),TABLE(11000+i+VR(encode_offset_pos)))
    TABLE(33000+ii+VR(encode_offset_pos),TABLE(13000+i+VR(encode_offset_pos)))
    TABLE(30000+ii+VR(encode_offset_pos),0)
    ii=ii+1

ELSEIF VR(10000+i)=2 OR VR(10000+i)=3 THEN
    cutter_x = TABLE(24000+i+VR(encode_offset_pos))
    cutter_y = TABLE(25000+i+VR(encode_offset_pos))
    TABLE(31000+ii+VR(encode_offset_pos),TABLE(11000+i+VR(encode_offset_pos))+cutter_x)
    TABLE(33000+ii+VR(encode_offset_pos),TABLE(13000+i+VR(encode_offset_pos))+cutter_y)
    TABLE(30000+ii+VR(encode_offset_pos),VR(10000+i))
    TABLE(34000+ii+VR(encode_offset_pos),TABLE(18000+i+VR(encode_offset_pos)))
    TABLE(35000+ii+VR(encode_offset_pos),TABLE(19000+i+VR(encode_offset_pos)))
    ii=ii+1
    TABLE(31000+ii+VR(encode_offset_pos),TABLE(11000+i+VR(encode_offset_pos)))
    TABLE(33000+ii+VR(encode_offset_pos),TABLE(13000+i+VR(encode_offset_pos)))
    TABLE(30000+ii+VR(encode_offset_pos),0)
    ii=ii+1
ENDIF

RETURN

g40_g40:
IF VR(10000+i)=1 THEN
    TABLE(31000+ii+VR(encode_offset_pos),TABLE(11000+i+VR(encode_offset_pos)))
    TABLE(33000+ii+VR(encode_offset_pos),TABLE(13000+i+VR(encode_offset_pos)))
    TABLE(30000+ii+VR(encode_offset_pos),1)
    ii=ii+1
ELSEIF VR(10000+i)=0 THEN
    TABLE(31000+ii+VR(encode_offset_pos),TABLE(11000+i+VR(encode_offset_pos)))
    TABLE(33000+ii+VR(encode_offset_pos),TABLE(13000+i+VR(encode_offset_pos)))
    TABLE(30000+ii+VR(encode_offset_pos),0)
    ii=ii+1
ELSEIF VR(10000+i)=2 OR VR(10000+i)=3 THEN
    TABLE(31000+ii+VR(encode_offset_pos),TABLE(11000+i+VR(encode_offset_pos)))
    TABLE(33000+ii+VR(encode_offset_pos),TABLE(13000+i+VR(encode_offset_pos)))
    TABLE(30000+ii+VR(encode_offset_pos),VR(10000+i))
    TABLE(34000+ii+VR(encode_offset_pos),TABLE(18000+i+VR(encode_offset_pos)))
    TABLE(35000+ii+VR(encode_offset_pos),TABLE(19000+i+VR(encode_offset_pos)))
    ii=ii+1
ENDIF


RETURN

g00_g00:
TABLE(31000+ii+VR(encode_offset_pos),TABLE(11000+i+VR(encode_offset_pos)))
TABLE(33000+ii+VR(encode_offset_pos),TABLE(13000+i+VR(encode_offset_pos)))
TABLE(30000+ii+VR(encode_offset_pos),0)
ii=ii+1
RETURN
