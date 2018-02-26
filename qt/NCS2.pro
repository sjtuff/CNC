#-------------------------------------------------
#Project created by QtCreator 2016-11-21T20:25:07
#开放式曲线磨削数控系统软件
#pro文件配置
#包含：所有.h与.cpp文件+TrioPCMotion经dumpcpp翻译文件
#     +MVS动态链接库+OpenCV动态链接库
#-------------------------------------------------

QT       += core gui axcontainer

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

UI_DIR=./UI
TARGET = NCS2
TEMPLATE = app
DEFINES += DEBUG

SOURCES += main.cpp\
        mainwindow.cpp \
        trioactivex.cpp \
    thread_ccd.cpp \
    thread_trio.cpp \
    common.cpp \
    thread_assist.cpp \
    thread_opencv.cpp \
    showmistake.cpp \
    track.cpp \
    realtime_paint.cpp \
    openglwidget_ccd.cpp \
    openglwidget_zoom.cpp

HEADERS  += mainwindow.h \
            trioactivex.h \
    thread_ccd.h \
    thread_trio.h \
    common.h \
    thread_assist.h \
    thread_opencv.h \
    showmistake.h \
    track.h \
    realtime_paint.h \
    openglwidget_ccd.h \
    openglwidget_zoom.h

FORMS    += mainwindow.ui \
    showmistake.ui \
    track.ui

RESOURCES += \
    res.qrc

#-------------------------------------------------
#MVS动态链接库（CCD）
win32: LIBS += -L$$PWD/'../../../../../Program Files (x86)/Mvision/Mvision SDK/Mvision SDK/lib/' -lMvCameraControl

INCLUDEPATH += $$PWD/'../../../../../Program Files (x86)/Mvision/Mvision SDK/Mvision SDK/inc'
DEPENDPATH += $$PWD/'../../../../../Program Files (x86)/Mvision/Mvision SDK/Mvision SDK/inc'

win32: LIBS += -L$$PWD/'../../../../../Program Files/GenICam_v2_4/library/CPP/lib/Win32_i86/' -lGenApi_MD_VC80_v2_4

INCLUDEPATH += $$PWD/'../../../../../Program Files/GenICam_v2_4/library/CPP/include'
DEPENDPATH += $$PWD/'../../../../../Program Files/GenICam_v2_4/library/CPP/include'
#-------------------------------------------------

#-------------------------------------------------
#OpenCV动态链接库
INCLUDEPATH += c:\opencv\build\include
INCLUDEPATH += c:\opencv\build\include\opencv\
INCLUDEPATH += c:\opencv\build\include\opencv2\

CONFIG(debug,debug|release) {
LIBS += -Lc:\opencv\build\x86\vc12\lib \
    -lopencv_core2413d \
    -lopencv_highgui2413d \
    -lopencv_imgproc2413d \
    -lopencv_features2d2413d \
    -lopencv_calib3d2413d \
    -lopencv_nonfree2413d
} else {
LIBS += -Lc:\opencv\build\x86\vc12\lib \
    -lopencv_core2413 \
    -lopencv_highgui2413 \
    -lopencv_imgproc2413 \
    -lopencv_features2d2413 \
    -lopencv_calib3d2413 \
    -lopencv_nonfree2413
}
#-------------------------------------------------

