#include "thread_trio.h"
#include <QTime>
#include <QCoreApplication>
#include <QDebug>
#include <QMessageBox>
#include <QVariant>
#define IP_Simulator "127.0.0.1"
#define IP_MC664 "192.168.0.250"
#include <QtCore/qmath.h>

void thread_Trio::qSleep(int ms)
{
    common::qSleep(ms);
}

bool thread_Trio::Trio_Is_Open()
{
    return connection_situation;
}

thread_Trio::thread_Trio(QObject *parent) : QObject(parent)
{
    trio=new TrioPCLib::TrioPC();

    connect(trio, SIGNAL(exception(int, QString, QString, QString)),
            this, SIGNAL(return_error_of_trio(int,QString,QString,QString)));

    connection_situation=false;
}

thread_Trio::~thread_Trio()
{
//    if (trio->IsOpen(2))
//    {
//        trio->Run("END");
//    }
    qSleep(300);

    delete trio;
}

void thread_Trio::connect_Trio(bool *ok)
{
    trio->SetHost(IP_MC664);
    if(trio->Open(2,0))
    {
        *ok=true;
        trio->Op(QVariant(32),QVariant(1));
        connection_situation=true;
    }else
    {
        *ok=false;
    }
}

void thread_Trio::close_Trio()
{
    if (trio->IsOpen(2))
    {
        trio->Close();
    }
}

void thread_Trio::send_txt_to_Trio(bool *ok, const QString source_file_path,
                                   const QString destination_file_path)
{

    if(trio->TextFileLoader(source_file_path,0,destination_file_path,2,0,0,0,0,0))
    {
        *ok=true;
        emit return_txt_transfer_situation(true);
    }else
    {
        *ok=false;
        emit return_txt_transfer_situation(false);
    }
    txt_transfer=false;
}

void thread_Trio::run_program_of_Trio(bool *ok, QString program_name)
{
    int connectiontype=trio->GetConnectionType();

    if(trio->Run(program_name))
    {
        *ok=true;
    }else
    {
        *ok=false;
    }
}

void thread_Trio::run_program_MANUAL_MODE(bool *ok)
{
    if (!trio->IsOpen(2))
    {
        return;
    }

    if(trio->Run("MANUAL_MODE",5))
    {
        *ok=true;
    }else
    {
        *ok=false;
    }
}

void thread_Trio::grab_axis_paras(bool* ok)
{
    if (!connection_situation||txt_transfer==true||cutter_set==true)
    {
        return;
    }
    *ok=true;

    struct Struct_Trio_Paras returned_paras;

    /*********************************The Trio Paras was here***********************************/
    trio->GetAxisVariable(QString("UNITS"),AXIS_MPG,returned_paras.axis_units[AXIS_MPG]);
    trio->GetAxisVariable(QString("UNITS"),AXIS_U,returned_paras.axis_units[AXIS_U]);
    trio->GetAxisVariable(QString("UNITS"),AXIS_V,returned_paras.axis_units[AXIS_V]);
    trio->GetAxisVariable(QString("UNITS"),AXIS_Z,returned_paras.axis_units[AXIS_Z]);
    trio->GetAxisVariable(QString("UNITS"),AXIS_X,returned_paras.axis_units[AXIS_X]);
    trio->GetAxisVariable(QString("UNITS"),AXIS_Y,returned_paras.axis_units[AXIS_Y]);

    trio->GetAxisVariable(QString("MPOS"),AXIS_MPG,returned_paras.axis_mpos[AXIS_MPG]);
    trio->GetAxisVariable(QString("MPOS"),AXIS_U,returned_paras.axis_mpos[AXIS_U]);
    trio->GetAxisVariable(QString("MPOS"),AXIS_V,returned_paras.axis_mpos[AXIS_V]);
    trio->GetAxisVariable(QString("MPOS"),AXIS_Z,returned_paras.axis_mpos[AXIS_Z]);
    trio->GetAxisVariable(QString("MPOS"),AXIS_X,returned_paras.axis_mpos[AXIS_X]);
    trio->GetAxisVariable(QString("MPOS"),AXIS_Y,returned_paras.axis_mpos[AXIS_Y]);

    trio->GetAxisVariable(QString("SPEED"),AXIS_MPG,returned_paras.axis_speed[AXIS_MPG]);
    trio->GetAxisVariable(QString("SPEED"),AXIS_U,returned_paras.axis_speed[AXIS_U]);
    trio->GetAxisVariable(QString("SPEED"),AXIS_V,returned_paras.axis_speed[AXIS_V]);
    trio->GetAxisVariable(QString("SPEED"),AXIS_Z,returned_paras.axis_speed[AXIS_Z]);
    trio->GetAxisVariable(QString("SPEED"),AXIS_X,returned_paras.axis_speed[AXIS_X]);
    trio->GetAxisVariable(QString("SPEED"),AXIS_Y,returned_paras.axis_speed[AXIS_Y]);

    trio->GetAxisVariable(QString("MSPEED"),AXIS_MPG,returned_paras.axis_mspeed[AXIS_MPG]);
    trio->GetAxisVariable(QString("MSPEED"),AXIS_U,returned_paras.axis_mspeed[AXIS_U]);
    trio->GetAxisVariable(QString("MSPEED"),AXIS_V,returned_paras.axis_mspeed[AXIS_V]);
    trio->GetAxisVariable(QString("MSPEED"),AXIS_Z,returned_paras.axis_mspeed[AXIS_Z]);
    trio->GetAxisVariable(QString("MSPEED"),AXIS_X,returned_paras.axis_mspeed[AXIS_X]);
    trio->GetAxisVariable(QString("MSPEED"),AXIS_Y,returned_paras.axis_mspeed[AXIS_Y]);

    trio->GetAxisVariable(QString("MTYPE"),AXIS_MPG,returned_paras.axis_mtype[AXIS_MPG]);
    trio->GetAxisVariable(QString("MTYPE"),AXIS_U,returned_paras.axis_mtype[AXIS_U]);
    trio->GetAxisVariable(QString("MTYPE"),AXIS_V,returned_paras.axis_mtype[AXIS_V]);
    trio->GetAxisVariable(QString("MTYPE"),AXIS_Z,returned_paras.axis_mtype[AXIS_Z]);
    trio->GetAxisVariable(QString("MTYPE"),AXIS_X,returned_paras.axis_mtype[AXIS_X]);
    trio->GetAxisVariable(QString("MTYPE"),AXIS_Y,returned_paras.axis_mtype[AXIS_Y]);

    trio->GetAxisVariable(QString("ACCEL"),AXIS_MPG,returned_paras.axis_accel[AXIS_MPG]);
    trio->GetAxisVariable(QString("ACCEL"),AXIS_U,returned_paras.axis_accel[AXIS_U]);
    trio->GetAxisVariable(QString("ACCEL"),AXIS_V,returned_paras.axis_accel[AXIS_V]);
    trio->GetAxisVariable(QString("ACCEL"),AXIS_Z,returned_paras.axis_accel[AXIS_Z]);
    trio->GetAxisVariable(QString("ACCEL"),AXIS_X,returned_paras.axis_accel[AXIS_X]);
    trio->GetAxisVariable(QString("ACCEL"),AXIS_Y,returned_paras.axis_accel[AXIS_Y]);

    trio->GetAxisVariable(QString("DECEL"),AXIS_MPG,returned_paras.axis_decel[AXIS_MPG]);
    trio->GetAxisVariable(QString("DECEL"),AXIS_U,returned_paras.axis_decel[AXIS_U]);
    trio->GetAxisVariable(QString("DECEL"),AXIS_V,returned_paras.axis_decel[AXIS_V]);
    trio->GetAxisVariable(QString("DECEL"),AXIS_Z,returned_paras.axis_decel[AXIS_Z]);
    trio->GetAxisVariable(QString("DECEL"),AXIS_X,returned_paras.axis_decel[AXIS_X]);
    trio->GetAxisVariable(QString("DECEL"),AXIS_Y,returned_paras.axis_decel[AXIS_Y]);

    trio->GetAxisVariable(QString("REMAIN"),AXIS_MPG,returned_paras.axis_remain[AXIS_MPG]);
    trio->GetAxisVariable(QString("REMAIN"),AXIS_U,returned_paras.axis_remain[AXIS_U]);
    trio->GetAxisVariable(QString("REMAIN"),AXIS_V,returned_paras.axis_remain[AXIS_V]);
    trio->GetAxisVariable(QString("REMAIN"),AXIS_Z,returned_paras.axis_remain[AXIS_Z]);
    trio->GetAxisVariable(QString("REMAIN"),AXIS_X,returned_paras.axis_remain[AXIS_X]);
    trio->GetAxisVariable(QString("REMAIN"),AXIS_Y,returned_paras.axis_remain[AXIS_Y]);

    trio->GetAxisVariable(QString("AXISSTATUS"),AXIS_MPG,returned_paras.axis_status[AXIS_MPG]);
    trio->GetAxisVariable(QString("AXISSTATUS"),AXIS_U,returned_paras.axis_status[AXIS_U]);
    trio->GetAxisVariable(QString("AXISSTATUS"),AXIS_V,returned_paras.axis_status[AXIS_V]);
    trio->GetAxisVariable(QString("AXISSTATUS"),AXIS_Z,returned_paras.axis_status[AXIS_Z]);
    trio->GetAxisVariable(QString("AXISSTATUS"),AXIS_X,returned_paras.axis_status[AXIS_X]);
    trio->GetAxisVariable(QString("AXISSTATUS"),AXIS_Y,returned_paras.axis_status[AXIS_Y]);

    trio->GetAxisVariable(QString("VP_SPEED"),AXIS_X,returned_paras.axis_vpspeed[AXIS_X]);
    trio->GetAxisVariable(QString("VP_SPEED"),AXIS_U,returned_paras.axis_vpspeed[AXIS_U]);
    trio->GetAxisVariable(QString("VP_SPEED"),AXIS_Y,returned_paras.axis_vpspeed[AXIS_Y]);
    trio->GetAxisVariable(QString("VP_SPEED"),AXIS_V,returned_paras.axis_vpspeed[AXIS_V]);
    returned_paras.axis_vpspeed[XY]=sqrt(returned_paras.axis_vpspeed[AXIS_X]*returned_paras.axis_vpspeed[AXIS_X]
                                         +returned_paras.axis_vpspeed[AXIS_Y]*returned_paras.axis_vpspeed[AXIS_Y]);
    returned_paras.axis_vpspeed[UV]=sqrt(returned_paras.axis_vpspeed[AXIS_U]*returned_paras.axis_vpspeed[AXIS_U]
                                         +returned_paras.axis_vpspeed[AXIS_V]*returned_paras.axis_vpspeed[AXIS_V]);
    trio->GetVr(VR_current_velocity,returned_paras.uv_current_velocity);
    trio->GetVr(VR_current_z_velocity,returned_paras.z_current_velocity);

    trio->GetVr(VR_beilv_feed_rate,returned_paras.uv_feed_rate);
    trio->GetVr(VR_beilv_z_loop,returned_paras.z_feed_rate);

    trio->GetVr(VR_processing_line,returned_paras.processing_line);
    /*********************************The Trio Paras was here***********************************/
    //qDebug()<<returned_paras.processing_line;
    QVariant var;
    var.setValue(returned_paras);
    if(*ok)
    {
        emit return_paras(ok,var);
    }
}

void thread_Trio::write_VR(int pos, double value)
{
    trio->SetVr(pos,value);

}

void thread_Trio::write_TABLE(int pos, double value)
{
    trio->SetTable(pos,1,value);
}

void thread_Trio::close_Trio_Grabbing()
{
    connection_situation=false;
}

