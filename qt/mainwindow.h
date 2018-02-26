#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPushButton>
#include <QStackedWidget>
#include <QButtonGroup>
#include <QPalette>
#include <QAxObject>
#include <QLabel>
#include <QDir>
#include <QThread>
#include <QTimer>
#include <QVector>
#include <QTableWidget>
#include <QSlider>
#include "trioactivex.h"
#include "thread_ccd.h"
#include "thread_opencv.h"
#include "thread_trio.h"
#include "thread_assist.h"
#include "showmistake.h"
#include "track.h"
#include "realtime_paint.h"
#include "openglwidget_ccd.h"
#include "openglwidget_zoom.h"
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
using namespace cv;


#define IMAGE_SIZE 2448*2550
#define MAG_FACTOR 5

namespace Ui {
class MainWindow;
}

enum BUTTON_GROUP_TYPE{MAIN,SUB,SUB2,ALL_SUB,ALL};

class MainWindow : public QMainWindow
{
   Q_OBJECT

public:
   explicit MainWindow(QWidget *parent = 0);
   ~MainWindow();
    //friend class label_paint;   //declare class label_paint as a friend class of MainWindow, so that class label_paint can use the private part of class MainWindow, in this case, that is Struct_Trio_Paras latest_Trio_paras

private:
   Ui::MainWindow *ui;
   QTimer *timer;
   QTimer *timer1;
   QPushButton *mainButton[6],*helpButton,*subButton[5],*sub2Button[8];
   QStackedWidget *mainStack,*editStack;
   QButtonGroup *ButtonGroup_main,*ButtonGroup_sub,*ButtonGroup_sub2;
   QPalette Palette_Unpressed,Palette_Pressed,Palette_Unconnected,Palette_Connected;
   QLabel *Label_Connection_Status;
   QLabel Label_StatusBar;
   int current_ButtonID_main,current_ButtonID_sub,current_ButtonID_sub2;
   QDir dir_of_txt;
   bool Connection_Status_of_Trio;

   void closeEvent(QCloseEvent *event);
   void qSleep(int ms);
   void button_pressed(QPushButton *button);
   void button_unpressed(QPushButton *button);
   void clear_button_text(BUTTON_GROUP_TYPE);

   //  Multi-threads stuff
   thread_CCD *ccd;
   thread_Trio *trio_MC664;
   thread_assist *Assist;
   thread_opencv *Opencv;
   QThread *THREAD_CCD,*THREAD_TRIO,*THREAD_ASSIST,*THREAD_OPENCV;

   // realtime_paint
   widget_painting *realtime_widget;

   bool photo_ok;
   Struct_Trio_Paras latest_Trio_paras;

   QString get_MTYPE_str(int);

   //showmistake&track
   ShowMistake *MistakeUi;
   QList<QString> list;
   int lineCount;
   int lineSelect;
   QString MistakeType_1(int);
   QString MistakeType_2(int);
   bool mistakeChecked = false;
   bool chooseChecked = true;

   track *TrackUi;

   bool eventFilter(QObject *obj, QEvent *event);
   //void opencv_processing();
   //cv::Mat mat;
   cv::Mat rgb;
   void opencv_findcorner();
   const int SCALE_HALF_LENGTH=5;
   const int THRESHOLD=150;

   //Zero_Return
   QVector<QString> Zero_Return_Vec;

   //Coordinate_Setting
   QVector<double> Coordinate_Setting_Vec;

   //simulate_path
   //simulate_path *sp;

   //encode circulation
   QList<QString> encodelist;

   //processing line
   double currentLine;

   //calculate instantaneous speed
   QVector<double> ins_Xspeed_vec;
   QVector<double> ins_Yspeed_vec;

   //table widget of cutter setting
   QTableWidget *cutter_para;

   float u_current_position;
   float v_current_position;
   float u;
   float v;
   Mat trans_image;
   float tool_compensation;

   double x_position_show=0;
   double y_position_show=0;
   double z_position_show=0;
   double u_position_show=0;
   double v_position_show=0;

   double x_mspeed_show=0;
   double y_mspeed_show=0;
   double z_mspeed_show=0;
   double u_mspeed_show=0;
   double v_mspeed_show=0;

   int grab_PosNum=0;
   int grab_ImgNum=0;

   bool grab_pic;
   bool grab_UVPos;

   OpenGLWidget_CCD *GL_CCD;
   bool tool_Aiming;
   OpenGLWidget_Zoom *GL_zoom;
   QSlider *zoomFactor_Slider;

private slots:
   void current_time_text_set();

   void errors_handled(int);
   void errors_of_trio_handled(int, QString, QString, QString);

   void pressed_mainButtonGroup(int i);
   void pressed_subButtonGroup(int i);
   void pressed_sub2ButtonGroup(int i);

   void txtfile_new_built();
   void txtfile_readin();
   void txtfile_save();
   void txtfile_undo();
   void txtfile_grammar_check();
   void txtfile_send_to_trio();

//   void cB_Txt_Dir_Content(QString);
//   void cB_current_index_changed(QString);
   void label_Txt_Content(QString);

   void pB_Connection();

   void request_Trio_parameters_request();

   //Receive from multi-threads
   void receive_Trio_axis_paras(bool*,QVariant);

   void receive_current_time(QString*);

   void receive_captured_image(uchar*);

   void on_rB_CCD_toggled(bool checked);

   void on_pushButton_15_clicked();

   void on_pushButton_write_tool_compensation_clicked();

   void on_pB_Start_offset_clicked();

   void receive_Trio_txt_transfer_situation(bool);

   //showmistake&track
   void lineChoose(int num);

   void OrderRevise(QString orderRevise);

   void showTrail();

   //zero_return
   void on_pB_Zero_Return_X_clicked();
   void on_pB_Zero_Return_Y_clicked();
   void on_pB_Zero_Return_U_clicked();
   void on_pB_Zero_Return_V_clicked();
   void on_pB_Zero_Return_Z_clicked();
   void on_pB_Zero_Return_Reset_clicked();
   void on_pB_Zero_Return_Load_clicked();

   //Coordinate_Setting
   void on_pB_Coordinate_Setting_Reset_clicked();
   void on_pB_Coordinate_Setting_Load_clicked();

   //Jump to
   void pTE_GCode_JumpTo(int JumptoNumber);

   //encode circulation
   void encode_circulation_processing(QList<QString> &);

   //processing line
   inline void processing_line(double);

   //calculate instantaneous speed
   inline double cal_ins_Xspeed(double);
   inline double cal_ins_Yspeed(double);


   void on_tableWidget_28_itemClicked(QTableWidgetItem *item);

   void on_radioButton_toggled(bool checked);


   //设置opencv处理的基本参数
   void start_ImageDataTrans();
   void start_PositionDataTrans();
   void opencv_parameters_trans();
   void return_uv();
   void compensation_value_set(bool,float,float);

   void on_pushButton_zoom_clicked();
   void on_pushButton_backtoCCD_clicked();


   //void receive_Origin_Coordinate(int, int);
   void receive_Slider_Value(int);

signals:
   void label_Txt_Changed(QString);
   void status_Changed(int);
   void errors_in_runtime(int);

   //for ccd thread
   void initialize_ccd();
   void capture_picture();
   void stop_ccd();

   //for trio thread
   void call_Trio_connect(bool*);
   void call_Trio_close();
   void call_Trio_send_txt(bool*,const QString,const QString);
   void call_Trio_run_program(bool*,QString);
   void call_Trio_return_axis_paras(bool*);
   void call_Trio_run_MANUAL_MODE(bool*);
   void call_Trio_write_VR(int,double);
   void call_Trio_write_TABLE(int,double);

   //for assist thread
   void call_start_time_loop();
   void call_stop_time_loop();

   //for realtime paint
   void return_QPointF(QPointF);

   //for processing line
   void return_processing_line(double);

   //for opencv thread
   void start_opencv();
   void start_grabuv();
   void Imgdata_trans(Mat);
   void Posdata_trans(float,float,float);

   void return_OpenGLWidget_Zoom_Coordinate(int, int);
};

#endif // MAINWINDOW_H
