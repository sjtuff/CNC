INCLUDE "GLOBAL_DEFS"
'******************************************
'Load the txt file
'
OPEN #41 AS "T0123" FOR INPUT
'OPEN #41 AS "789" FOR INPUT
'OPEN #41 AS "TRANSFER_FILE" FOR INPUT
'OPEN #41 AS "567" FOR INPUT

WA(100)

DIM i AS INTEGER
DIM k AS INTEGER
DIM temp_i AS INTEGER
i=0

WHILE KEY#41
    GET#41,k
    temp_i=VR(txt_start_pos)+i
    PRINT #0,CHR(k)
    TABLE(temp_i,k)
    i=i+1
WEND
PRINT #0,i,"TOTAL"
CLOSE #41

txt_instream_asc_num=i

'RUN "THREAD_CONTROL",thread_ctrl
RUN "THREAD_CTRL",thread_ctrl
