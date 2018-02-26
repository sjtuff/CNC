#include "common.h"
#include <QTime>
#include <QCoreApplication>
#include "qt_windows.h"
#include <QVariant>
common::common(QObject *parent) : QObject(parent)
{
    qRegisterMetaType<QVariant>("QVariant");
}

void common::qSleep(const int ms)
{
    //        QTime timer;
    //        timer.start();
    //        while (timer.elapsed()<ms)
    //        {
    ////            QCoreApplication::processEvents();
    //            qSleep(1);
    //        }
    Sleep(ms);
}
