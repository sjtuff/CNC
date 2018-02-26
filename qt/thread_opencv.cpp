 #include "thread_opencv.h"
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>
#include <iostream>
#include <ostream>
#include <fstream>
#include <vector>
#include <QDebug>
#include <QApplication>
#include <QDesktopWidget>
#include "qt_windows.h"
LARGE_INTEGER g_fre;
LARGE_INTEGER g_start_time;
LARGE_INTEGER g_end_time;

thread_opencv::thread_opencv(QObject *parent) : QObject(parent)
{

}

void thread_opencv::PosData_re(float u,float v,float d){
    u_position=u;
    v_position=v;
    d_compensation=d;
    qDebug()<<u_position;
    qDebug()<<v_position;
    qDebug()<<d_compensation;
}

void thread_opencv::image_process(Mat Image_origin)
{

    //图像标定结果
    float calibration_parameter=3.49;
    float amplification_factor=0.5;

    float workpiece_setting_position=2.5;
    float error_limit=0.05;

    float u_center=(u_position+0.543)*amplification_factor*1000/calibration_parameter;
    float v_center=2058-(15+workpiece_setting_position-v_position)*amplification_factor*1000/calibration_parameter;

    float r_th=d_compensation*amplification_factor*1000/calibration_parameter;
    QueryPerformanceFrequency(&g_fre);
    QueryPerformanceCounter(&g_start_time);

    //选取ROI
    Mat Image_ROI;
    if(u_center<436){
       Image_ROI=Image_origin(Rect(u_center-r_th,v_center-r_th,4*r_th,3*r_th));
    }else if(u_center>=436 && u_center<=2011){
       Image_ROI=Image_origin(Rect(u_center-2*r_th,v_center-r_th,4*r_th,3*r_th));
    }else if(u_center>2011){
       Image_ROI=Image_origin(Rect(u_center-3*r_th,v_center-r_th,4*r_th,3*r_th));
    }

    //图像滤波
    Mat Image_afterBlur;
    int Size_of_kernel=3;
    medianBlur(Image_ROI,Image_afterBlur,Size_of_kernel);

    //寻找工件区域
    Point2f seek;
    seek.x=2*r_th;
    seek.y=r_th;
    floodFill(Image_afterBlur,seek,Scalar(255,255,255),0,Scalar(5,5,5),Scalar(50,50,50));

    //边缘提取
    Mat Image_afterEdgedetect;
    Canny(Image_afterBlur,Image_afterEdgedetect,3,15,3);

    //获取边缘散点的坐标值
    vector<Point2f> Edge_Coordinates;
    int nl=Image_afterEdgedetect.rows;
    int nc=Image_afterEdgedetect.cols;
    for (int j=0;j<nl;j++){
        uchar* data=Image_afterEdgedetect.ptr<uchar>(j);
        for (int i=0;i<nc;i++){
            if (data[i]>0)
            {
                Edge_Coordinates.push_back(Point2f(i,j));
            }
        }
    }

    //去除多余部分的散点
    vector<Point2f> Workpiece_Edge_Coordinates;

    for (unsigned int i=0;i<Edge_Coordinates.size();i++){
            Workpiece_Edge_Coordinates.push_back(Point2f((Edge_Coordinates[i].x+u_center-2*r_th)*3.49/500,(2058-Edge_Coordinates[i].y-v_center+r_th)*3.49/500));
    }

//    //输出包含散点的txt文件
//    fstream result_point;
//    result_point.open("result.txt",ios_base::out);
//    for (unsigned int i=0;i<Workpiece_Edge_Coordinates.size();i++){
//        result_point << Workpiece_Edge_Coordinates[i];
//    }
//    result_point.close();

    //刀补后的轨迹相关参数
    Point2f wheel_position(u_position+0.543,15+workpiece_setting_position-v_position);

    float line1_startpoint_x=1.54;
    float circle2_startpoint_x=3.04;
    float circle3_startpoint_x=4.732-1.692*d_compensation/2;
    float circle4_startpoint_x=12.348+1.692*d_compensation/2;
    float line5_startpoint_x=14.04;
    float endpoint_x=15.54;

    Point2f circle2_center(3.04,workpiece_setting_position+2);
    float circle2_radiu=2;
    Point2f circle3_center(8.54,workpiece_setting_position-1.464);
    float circle3_radiu=4.5;
    Point2f circle4_center(14.04,workpiece_setting_position+2);
    float circle4_radiu=2;

    //根据砂轮在刀补轨迹上的位置确定砂轮刀尖圆心与实际加工点之间的连线(Ax+By+C=0),理论加工点的x坐标
    float A;
    float B;
    float C;
    float th_processed_point_x;

    if (wheel_position.x>=line1_startpoint_x && wheel_position.x<=circle2_startpoint_x){
        A=1/wheel_position.x;
        B=0;
        C=-1;
        th_processed_point_x=wheel_position.x;
    }
    else if (wheel_position.x>circle2_startpoint_x && wheel_position.x<=circle3_startpoint_x){
        A=wheel_position.y-circle2_center.y;
        B=-(wheel_position.x-circle2_center.x);
        C=wheel_position.x*circle2_center.y-wheel_position.y*circle2_center.x;
        th_processed_point_x=circle2_center.x+circle2_radiu/(circle2_radiu-d_compensation)*(wheel_position.x-circle2_center.x);
    }
    else if (wheel_position.x>circle3_startpoint_x && wheel_position.x<=circle4_startpoint_x){
        A=wheel_position.y-circle3_center.y;
        B=-(wheel_position.x-circle3_center.x);
        C=wheel_position.x*circle3_center.y-wheel_position.y*circle3_center.x;
        th_processed_point_x=circle3_center.x+circle3_radiu/(circle3_radiu+d_compensation)*(wheel_position.x-circle3_center.x);
    }
    else if (wheel_position.x>circle4_startpoint_x && wheel_position.x<=line5_startpoint_x){
        A=wheel_position.y-circle4_center.y;
        B=-(wheel_position.x-circle4_center.x);
        C=wheel_position.x*circle4_center.y-wheel_position.y*circle4_center.x;
        th_processed_point_x=circle4_center.x+circle4_radiu/(circle4_radiu-d_compensation)*(wheel_position.x-circle4_center.x);
    }
    else if (wheel_position.x>line5_startpoint_x && wheel_position.x<=endpoint_x){
        A=1/wheel_position.x;
        B=0;
        C=-1;
        th_processed_point_x=wheel_position.x;
    }

    //寻找实际加工点
    float d_min=100;
    float d;
    Point2f processed_point;
    for (unsigned int i=0;i<Workpiece_Edge_Coordinates.size();i++){
        d=abs((A*Workpiece_Edge_Coordinates[i].x+B*Workpiece_Edge_Coordinates[i].y+C)/sqrt(A*A+B*B));
        if (d<d_min){
            d_min=d;
            processed_point.x=Workpiece_Edge_Coordinates[i].x;
            processed_point.y=Workpiece_Edge_Coordinates[i].y;
        }
    }

    //计算误差和补偿值
    float actual_distance;
    float error_value;
    actual_distance=sqrt(pow((processed_point.x-wheel_position.x),2)+pow((processed_point.y-wheel_position.y),2));
    error_value=actual_distance-d_compensation;

    //判断误差是否超出阈值
    bool activate_error_compensation;

    if (error_value<=error_limit && error_value>=(-error_limit)){
        activate_error_compensation=false;
        emit set_com(activate_error_compensation,0,0);
    }else{
        activate_error_compensation=true;
        //计算补偿量
        float u_com;
        float v_com;
        float actual_r;
        if (processed_point.x>=1.54 && processed_point.x<=3.04){
            u_com=0;
            v_com=error_value;
        }else if(processed_point.x>3.04 && processed_point.x<=4.732){
            actual_r=sqrt(pow((processed_point.x-circle2_center.x),2)+pow((processed_point.y-circle2_center.y),2));
            u_com=-(processed_point.x-circle2_center.x)/actual_r*error_value;
            v_com=-(processed_point.y-circle2_center.y)/actual_r*error_value;
        }else if(processed_point.x>4.732 && processed_point.x<=12.348){
            actual_r=sqrt(pow((processed_point.x-circle3_center.x),2)+pow((processed_point.y-circle3_center.y),2));
            u_com=-(processed_point.x-circle3_center.x)/actual_r*error_value;
            v_com=-(processed_point.y-circle3_center.y)/actual_r*error_value;
        }else if(processed_point.x>12.348 && processed_point.x<=14.04){
            actual_r=sqrt(pow((processed_point.x-circle4_center.x),2)+pow((processed_point.y-circle4_center.y),2));
            u_com=-(processed_point.x-circle4_center.x)/actual_r*error_value;
            v_com=-(processed_point.y-circle4_center.y)/actual_r*error_value;
        }else if(processed_point.x>14.04 && processed_point.x<=15.54){
            u_com=0;
            v_com=error_value;
        }
        emit set_com(activate_error_compensation,u_com,v_com);

        qDebug()<<u_com;
        qDebug()<<v_com;

        QueryPerformanceCounter(&g_end_time);
        double milliseconds=((double)g_end_time.QuadPart-(double)g_start_time.QuadPart)/((double)g_fre.QuadPart);
        qDebug()<<milliseconds;
    }

}
