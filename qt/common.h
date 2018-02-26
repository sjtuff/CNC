#ifndef COMMON_H
#define COMMON_H

#define AXIS_MPG 0
#define AXIS_U 1
#define AXIS_V 2
#define AXIS_Z 3
#define AXIS_X 4
#define AXIS_Y 5

#define XY 6
#define UV 7

#define VR_tool_compensation_flag 90
#define VR_tool_compensation_value 91
#define VR_offset_axis 210
#define VR_offset_dis 211
#define VR_flag_ready_to_offset 212
#define VR_current_velocity 151
#define VR_current_z_velocity 53
#define VR_beilv_feed_rate 220
#define VR_beilv_z_loop 221

#define VR_processing_line 36

#include <QObject>

//This struct was used to hold the paras from Trio
struct Struct_Trio_Paras
{
    double axis_units[10];
    double axis_mpos[10];
    double axis_remain[10];
    double axis_speed[10];
    double axis_mspeed[10];
    double axis_accel[10];
    double axis_decel[10];
    double axis_mtype[10];
    double axis_status[10];
    double axis_vpspeed[10];
    bool io_situation[50];
    double uv_feed_rate;
    double z_feed_rate;
    double uv_current_velocity;
    double z_current_velocity;

    double processing_line;

    //Initialize variables in struct
    Struct_Trio_Paras()
    {
        for(int i=0;i<10;i++)
        {
            axis_units[i]=0;
            axis_mpos[i]=0;
            axis_remain[i]=0;
            axis_speed[i]=0;
            axis_mspeed[i]=0;
            axis_accel[i]=0;
            axis_decel[i]=0;
            axis_mtype[i]=0;
            axis_status[i]=0;
            axis_vpspeed[i]=0;
        }

        for(int i=0;i<50;i++)
        {
            io_situation[i]=0;
        }

        uv_feed_rate=0;
        z_feed_rate=0;
        uv_current_velocity=0;
        z_current_velocity=0;

        processing_line=0;
    }
};

Q_DECLARE_METATYPE(Struct_Trio_Paras)

class common : public QObject
{
    Q_OBJECT
public:
    explicit common(QObject *parent = 0);

signals:

public slots:
    static void qSleep(const int ms);
};

#endif // COMMON_H
