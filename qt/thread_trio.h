#ifndef THREAD_TRIO_H
#define THREAD_TRIO_H

#include <QObject>
#include "trioactivex.h"
#include "common.h"

class thread_Trio : public QObject
{
    Q_OBJECT
private:
    TrioPCLib::TrioPC *trio;
    void qSleep(int ms);

    bool connection_situation;


public:
    explicit thread_Trio(QObject *parent = 0);
    ~thread_Trio();

    bool Trio_Is_Open();
    bool txt_transfer = false;
    bool cutter_set;

signals:
    void return_error_of_trio(int,QString,QString,QString);
    void return_axis_paras(bool*,double*);
    void return_paras(bool*,QVariant);
    void return_txt_transfer_situation(bool);

public slots:
    void connect_Trio(bool*);
    void close_Trio();
    void send_txt_to_Trio(bool*,const QString,const QString);
    void run_program_of_Trio(bool*,QString);                     //Run the G-Code File in Qt
    void run_program_MANUAL_MODE(bool*);                         //Manual Mode
    void grab_axis_paras(bool*);                                 //(Significant!!!)Return the paras of the Trio each axis
    void write_VR(int,double);                                   //Write the value in VR
    void write_TABLE(int,double);                                //Write the value in TABLE
    void close_Trio_Grabbing();
};

#endif // THREAD_TRIO_H
