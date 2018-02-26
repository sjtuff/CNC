#include "track.h"
#include "ui_track.h"
#include <QDebug>
#include <QPainter>
#include <QPixmap>
#include <QtCore/qmath.h>

track::track(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::track)
{
    pix = new QPixmap(500,500);    // 这个 piumap 对象用来接受准备绘制到空间的内容
    pix->fill(Qt::white);     // 填充这个图片的背景是白色
    ui->setupUi(this);
}



void track::freeMemery()
{


}

void track::paintEvent(QPaintEvent *)
{
    QPainter painter(this);
    painter.drawPixmap(0,0, *pix);
}

void track::trackProcessing(QPixmap *pixmap)
{    
    QPainter *p = new QPainter;
    p->begin(pixmap);
    p->setPen(Qt::black);
    p->translate(250,250);
    p->rotate(270);
    float start_u = 0;
    float start_v = 0;
    bool begin = false;

    int number_of_axis[1000] = {0};
    int number_of_G[1000] = {0};
    float simpleu[1000] = {0};       //处理前的u轴数值
    float simplev[1000] = {0};       //处理前的v轴数值
    float I_of_center[1000] = {0};       //圆心相对坐标I
    float K_of_center[1000] = {0};       //圆心相对坐标K
    float absu_of_center[1000] = {0};    //圆心绝对坐标u
    float absv_of_center[1000] = {0};    //圆心绝对坐标v
    float absu[1000] = {0};        //u轴绝对坐标,11000
    float absv[1000] = {0};        //v轴绝对坐标
    float v_of_u[1000] = {0};            //单位运动矢量u分量，针对圆时为起始点
    float v_of_v[1000] = {0};            //单位运动矢量v分量，针对圆时为起始点
    float cutter_of_u[1000] = {0};       //刀具半径矢量u分量，起点
    float cutter_of_v[1000] = {0};       //刀具半径矢量v分量，起点
    float cutter_of_u_last[1000]={0}; //刀具半径矢量u分量，终点
    float cutter_of_v_last[1000]={0}; //刀具半径矢量v分量，终点
    float v_of_uu[1000] = {0};           //单位运动矢量u分量，针对圆时为终点
    float v_of_vv[1000] = {0};           //单位运动矢量v分量，针对圆时为终点
    int way_of_cutter[1000] = {0};       //刀补后运动形式
    float finalu[1000] = {0};            //刀补后u坐标
    float finalv[1000] = {0};            //刀补后v坐标
    float finalu_of_center[1000] = {0};       //刀补后圆心绝对坐标u
    float finalv_of_center[1000] = {0};       //刀补后圆心绝对坐标v
    int flag_of_cutter[1000]={1,1};       //每行的刀补方式，VR(21000)左刀补还是右刀补还是无刀补


    int flag_coordinate;           //绝对还是相对坐标
    int flag_number_of_axis;       //多少个轴
    float number;                  //返回数值
    float GetNumber(int,QString,int);
    int sgn(float);
    float GetAngle(float,float);

    //G代码译码并存储
    size_t count_command = 0;
    for(int k=0;k<tracklist.size();k++)
    {
        QString codeline = tracklist[k];
        for(int j=0;j<codeline.size();j++)
        {
            if(codeline[j] == 'N')
            {
                count_command ++;
                flag_number_of_axis = 0;
                flag_of_cutter[count_command+1]=flag_of_cutter[count_command];
            }
            if(codeline[j] == 'G')
            {
                number = GetNumber(j,codeline,1);
                //修正圆正反的错误
                if(number==4) {count_command=count_command-1;}
                if(number == 2) {number = 3;}
                else
                {
                    if(number == 3){number = 2;}
                }
                if(number == 1 || number == 2 || number == 3 || number == 0) {number_of_G[count_command] = number;}
                if(number == 90) {flag_coordinate = 0;}//绝对坐标
                if(number == 91) {flag_coordinate = 1;}//相对坐标
                if(number == 41)
                {
                    flag_of_cutter[count_command]=1;
                    flag_of_cutter[count_command+1]=1;
                }
                if(number == 42)
                {
                    flag_of_cutter[count_command]=-1;
                    flag_of_cutter[count_command+1]=-1;
                }
                if(number==40)
                {
                    flag_of_cutter[count_command]=0;
                    flag_of_cutter[count_command+1]=0;
                }
            }
            if(codeline[j] == 'U')
            {
                number = GetNumber(j,codeline,1);
                simpleu[count_command] = number;
                flag_number_of_axis++;
            }

            if(codeline[j] == 'V')
            {
                number = GetNumber(j,codeline,1);
                simplev[count_command] = number;
                flag_number_of_axis = flag_number_of_axis + 2;
            }
            if(codeline[j] == 'I')
            {
                number = GetNumber(j,codeline,1);
                I_of_center[count_command] = number;
            }
            if(codeline[j] == 'K')
            {
                number = GetNumber(j,codeline,1);
                K_of_center[count_command] = number;
            }
            number_of_axis[count_command] = flag_number_of_axis;
        }
    }


    float u_abs=0,v_abs=0;
    float i_of_center,k_of_center;
    float u,z,v;
    for(size_t i_control=1;i_control<(count_command+1);i_control++)
    {
        if(flag_coordinate == 0)
        {
            switch (number_of_axis[i_control]) {
            case 3:
            {
                u_abs = simpleu[i_control];
                v_abs = simplev[i_control];
                break;
            }
            case 2:
            {
                v_abs = simplev[i_control];
                u_abs = simpleu[i_control - 1];
                break;
            }
            case 1:
            {
                u_abs = simpleu[i_control];
                v_abs = simplev[i_control - 1];
                break;
            }
            default:
            {
                break;
            }
            }

        }
        if(flag_coordinate == 1)
        {
            switch (number_of_axis[i_control]) {
            case 3:
            {
                u_abs = u_abs + simpleu[i_control];
                v_abs = v_abs + simplev[i_control];
                break;
            }
            case 2:
            {
                v_abs = v_abs + simplev[i_control];
                u_abs = absu[i_control - 1];
                break;
            }
            case 1:
            {
                u_abs = u_abs + simpleu[i_control];
                v_abs = absv[i_control - 1];
                break;
            }
            default:
            {
                break;
            }
            }
        }
        absu[i_control] = u_abs;
        absv[i_control] = v_abs;
    }



    //刀补计算
    float d_abs=3;
    float d = 3;//刀补半径暂取3
    u = 0;
    z = 0;
    float u1,v1,u2,v2,u0,z0,r;//用于计算位移矢量
    //矢量计算
    for(size_t i_control=1;i_control<count_command+1;i_control++)
    {
        d=d_abs*flag_of_cutter[i_control];
        switch (number_of_G[i_control]) {
        case 0:
        {
            u1 = absu[i_control-1];
            u2 = absu[i_control];
            v1 = absv[i_control-1];
            v2 = absv[i_control];
            v_of_u[i_control] = (u2 - u1)/sqrtf((u2-u1)*(u2-u1)+(v2-v1)*(v2-v1));
            v_of_v[i_control] = (v2 - v1)/sqrtf((u2-u1)*(u2-u1)+(v2-v1)*(v2-v1));
            v_of_uu[i_control]=(u2 - u1)/sqrtf((u2-u1)*(u2-u1)+(v2-v1)*(v2-v1));
            v_of_vv[i_control]=(v2 - v1)/sqrtf((u2-u1)*(u2-u1)+(v2-v1)*(v2-v1));
            break;
        }
        case 1:
        {
            u1 = absu[i_control-1];
            u2 = absu[i_control];
            v1 = absv[i_control-1];
            v2 = absv[i_control];
            v_of_u[i_control] = (u2 - u1)/sqrtf((u2-u1)*(u2-u1)+(v2-v1)*(v2-v1));
            v_of_v[i_control] = (v2 - v1)/sqrtf((u2-u1)*(u2-u1)+(v2-v1)*(v2-v1));
            v_of_uu[i_control]=(u2 - u1)/sqrtf((u2-u1)*(u2-u1)+(v2-v1)*(v2-v1));
            v_of_vv[i_control]=(v2 - v1)/sqrtf((u2-u1)*(u2-u1)+(v2-v1)*(v2-v1));
            break;
        }
        case 2:
        {
            u = absu[i_control-1];
            z = absv[i_control-1];
            u0 = absu[i_control-1]+I_of_center[i_control];
            z0 = absv[i_control-1]+K_of_center[i_control];
            r = sqrtf((z0-z)*(z0-z)+(u0-u)*(u0-u));
            if(number_of_G[i_control]==2) {r = -r;}
            v_of_u[i_control] = (z-z0)/r;
            v_of_v[i_control] = (u0-u)/r;
            absu_of_center[i_control] = u0;
            absv_of_center[i_control] = z0;
            u = absu[i_control];
            z = absv[i_control];
            v_of_uu[i_control] = (z-z0)/r;
            v_of_vv[i_control] = (u0-u)/r;
            break;
        }
        case 3:
        {
            u = absu[i_control-1];
            z = absv[i_control-1];
            u0 = absu[i_control-1]+I_of_center[i_control];
            z0 = absv[i_control-1]+K_of_center[i_control];
            r = sqrtf((z0-z)*(z0-z)+(u0-u)*(u0-u));
            if(number_of_G[i_control]==2) {r = -r;}
            v_of_u[i_control] = (z-z0)/r;
            v_of_v[i_control] = (u0-u)/r;
            absu_of_center[i_control] = u0;
            absv_of_center[i_control] = z0;
            u = absu[i_control];
            z = absv[i_control];
            v_of_uu[i_control] = (z-z0)/r;
            v_of_vv[i_control] = (u0-u)/r;
            break;
        }
        default:
        {
            break;
        }
        }
        cutter_of_u[i_control] = v_of_v[i_control]*(-d);
        cutter_of_v[i_control] = v_of_u[i_control]*d;
        cutter_of_u_last[i_control]=v_of_vv[i_control]*(-d);
        cutter_of_v_last[i_control]=v_of_uu[i_control]*d;
    }

    int ii=1;
    float cutterx;
    float cuttery;

    //中间刀补点
    for(int k=1;k<count_command;k++)
    {
        int cutterFlag=0;
        float alpha,value_of_cos,value_of_sin;
        float compensated_u,compensated_v;
        float x11,y11,x12,y12,xr1,zr1,xr2,zr2,r1,r2,delta,d1,distance_r1_r2;
        if((flag_of_cutter[k]!=0)&&(flag_of_cutter[k+1]!=0))
        {
            d=d_abs*flag_of_cutter[k];
            if((number_of_G[k]==1)&&(number_of_G[k+1]==1)) {cutterFlag=1;}
            if(((number_of_G[k]==1)&&(number_of_G[k+1]==2))||((number_of_G[k]==1)&&(number_of_G[k+1]==3))) {cutterFlag=2;}
            if(((number_of_G[k]==2)&&(number_of_G[k+1]==1))||((number_of_G[k]==3)&&(number_of_G[k+1]==1))) {cutterFlag=3;}
            if(((number_of_G[k]==2)&&(number_of_G[k+1]==3))||((number_of_G[k]==3)&&(number_of_G[k+1]==2))) {cutterFlag=4;}
            if(((number_of_G[k]==2)&&(number_of_G[k+1]==2))||((number_of_G[k]==3)&&(number_of_G[k+1]==3))) {cutterFlag=4;}

            if((cutterFlag!=3)&&(cutterFlag!=4))
            {
                value_of_cos = v_of_u[k]*v_of_u[k+1]+v_of_v[k]*v_of_v[k+1];
                value_of_sin = v_of_u[k]*v_of_v[k+1]-v_of_u[k+1]*v_of_v[k];
            }
            if((cutterFlag==3)||(cutterFlag==4))
            {
                value_of_cos = v_of_uu[k]*v_of_u[k+1]+v_of_vv[k]*v_of_v[k+1];
                value_of_sin = v_of_uu[k]*v_of_v[k+1]-v_of_u[k+1]*v_of_vv[k];
            }
            if((value_of_sin<0.001)&&(value_of_sin>-0.001)) {value_of_sin=0;}
            if((sgn(d)*value_of_sin)>=0)
            {
                cutterFlag = cutterFlag+10;
            }
            else if(((sgn(d)*value_of_sin)<0 )&& (value_of_cos>0))
            {
                cutterFlag = cutterFlag+20;
            }
            else {cutterFlag = cutterFlag+30;}
            if((number_of_G[k]==0)&&(number_of_G[k+1]!=0)) {cutterFlag=5;}
            if((number_of_G[k]!=0)&&(number_of_G[k+1]==0)) {cutterFlag=6;}
            if((number_of_G[k]==0)&&(number_of_G[k+1]==0)) {cutterFlag=10;}
        }
        if((flag_of_cutter[k]==0)&&flag_of_cutter[k+1]!=0) {cutterFlag=7;}
        if((flag_of_cutter[k]!=0)&&flag_of_cutter[k+1]==0) {cutterFlag=8;}
        if((flag_of_cutter[k]==0)&&flag_of_cutter[k+1]==0) {cutterFlag=9;}

        //分情况讨论
        switch (cutterFlag) {
        case 11:
        {
            d1=d;
            x11=v_of_u[k];
            y11=v_of_v[k];
            x12=v_of_u[k+1];
            y12=v_of_v[k+1];
            float ifZero;
            ifZero=x11*y12-x12*y11;
            if(ifZero!=0)
            {
                compensated_u=(x12-x11)*d/(x11*y12-x12*y11);
                compensated_v=(y12-y11)*d/(x11*y12-x12*y11);
                finalu[ii]=compensated_u+absu[k];
                finalv[ii]=compensated_v+absv[k];
                way_of_cutter[ii]=1;
            }
            else {
                finalu[ii]=cutter_of_u_last[k]+absu[k];
                finalv[ii]=cutter_of_v_last[k]+absv[k];
                way_of_cutter[ii]=1;
            }
            ii++;
            break;
        }

        case 12:
        {
            d1=d;
            x11=v_of_u[k];
            y11=v_of_v[k];
            x12=v_of_u[k+1];
            y12=v_of_v[k+1];
            xr2=I_of_center[k+1];
            zr2=K_of_center[k+1];
            r2=sqrtf(xr2*xr2+zr2*zr2);
            if(number_of_G[k+1]==3) {r2=-r2;}
            delta=sqrtf((r2-d)*(r2-d)-(x11*zr2-y11*xr2-d1)*(x11*zr2-y11*xr2-d1));
            compensated_u=x11*(x11*xr2+y11*zr2)-d1*y11-sgn(x11*xr2+y11*zr2)*delta*x11;
            compensated_v=y11*(x11*xr2+y11*zr2)+d1*x11-sgn(x11*xr2+y11*zr2)*delta*y11;
            finalu[ii]=compensated_u+absu[k];
            finalv[ii]=compensated_v+absv[k];
            way_of_cutter[ii]=1;
            ii++;
            break;
        }

        case 13:
        {
            d1=d;
            x11=v_of_u[k+1];
            y11=v_of_v[k+1];
            xr2=-absu[k]+absu_of_center[k];
            zr2=-absv[k]+absv_of_center[k];
            r2=sqrtf(xr2*xr2+zr2*zr2);
            if(number_of_G[k+1]==3) {r2=-r2;}
            delta=sqrtf((r2-d)*(r2-d)-(x11*zr2-y11*xr2-d1)*(x11*zr2-y11*xr2-d1));
            compensated_u=x11*(x11*xr2+y11*zr2)-d1*y11-sgn(x11*xr2+y11*zr2)*delta*x11;
            compensated_v=y11*(x11*xr2+y11*zr2)+d1*x11-sgn(x11*xr2+y11*zr2)*delta*y11;
            finalu[ii]=compensated_u+absu[k];
            finalv[ii]=compensated_v+absv[k];
            way_of_cutter[ii]=number_of_G[k];
            finalu_of_center[ii]=absu_of_center[k];
            finalv_of_center[ii]=absv_of_center[k];
            ii++;
            break;
        }

        case 14:
        {
            xr1=absu_of_center[k]-absu[k];
            zr1=absv_of_center[k]-absv[k];
            xr2=I_of_center[k+1];
            zr2=K_of_center[k+1];
            r1=sqrtf(xr1*xr1+zr1*zr1);
            r2=sqrtf(xr2*xr2+zr2*zr2);
            distance_r1_r2=sqrtf((xr1-xr2)*(xr1-xr2)+(zr1-zr2)*(zr1-zr2));
            x11=(zr2-zr1)/distance_r1_r2;
            y11=-(xr2-xr1)/distance_r1_r2;
            if(number_of_G[k]==3) {r1=-r1;}
            if(number_of_G[k+1]==3) {r2=-r2;}
            d1=-d*(r1-r2)/distance_r1_r2;
            r2=r1;
            xr2=xr1;
            zr2=zr1;
            delta=sqrtf((r2-d)*(r2-d)-(x11*zr2-y11*xr2-d1)*(x11*zr2-y11*xr2-d1));
            compensated_u=x11*(x11*xr2+y11*zr2)-d1*y11-sgn(x11*xr2+y11*zr2)*delta*x11;
            compensated_v=y11*(x11*xr2+y11*zr2)+d1*x11-sgn(x11*xr2+y11*zr2)*delta*y11;
            finalu[ii]=compensated_u+absu[k];
            finalv[ii]=compensated_v+absv[k];
            way_of_cutter[ii]=number_of_G[k];
            finalu_of_center[ii]=absu_of_center[k];
            finalv_of_center[ii]=absv_of_center[k];
            ii++;
            break;
        }

        case 21:
        {
            d1=d;
            x11=v_of_u[k];
            y11=v_of_v[k];
            x12=v_of_u[k+1];
            y12=v_of_v[k+1];
            compensated_u=(x12-x11)*d/(x11*y12-x12*y11);
            compensated_v=(y12-y11)*d/(x11*y12-x12*y11);
            finalu[ii]=compensated_u+absu[k];
            finalv[ii]=compensated_v+absv[k];
            way_of_cutter[ii]=1;
            ii++;
            break;
        }

        case 22:
        {
            d1=d;
            x11=v_of_u[k];
            y11=v_of_v[k];
            x12=v_of_u[k+1];
            y12=v_of_v[k+1];
            compensated_u=(x12-x11)*d/(x11*y12-x12*y11);
            compensated_v=(y12-y11)*d/(x11*y12-x12*y11);
            finalu[ii]=compensated_u+absu[k];
            finalv[ii]=compensated_v+absv[k];
            way_of_cutter[ii]=1;
            ii++;
            finalu[ii]=absu[k]+cutter_of_u[k+1];
            finalv[ii]=absv[k]+cutter_of_v[k+1];
            way_of_cutter[ii]=1;
            ii++;
            break;
        }

        case 23:
        {
            d1=d;
            finalu[ii]=absu[k]+v_of_vv[k]*(-d);
            finalv[ii]=absv[k]+v_of_uu[k]*d;
            way_of_cutter[ii]=number_of_G[k];
            finalu_of_center[ii]=absu_of_center[k];
            finalv_of_center[ii]=absv_of_center[k];
            ii++;
            r=sqrtf((absu[k]-absu_of_center[k])*(absu[k]-absu_of_center[k])+(absv[k]-absv_of_center[k])*(absv[k]-absv_of_center[k]));
            if(number_of_G[k]==2) {r=-r;}
            x11=v_of_uu[k];
            y11=v_of_vv[k];
            x12=v_of_u[k+1];
            y12=v_of_v[k+1];
            compensated_u=(x12-x11)*d/(x11*y12-x12*y11);
            compensated_v=(y12-y11)*d/(x11*y12-x12*y11);
            finalu[ii]=compensated_u+absu[k];
            finalv[ii]=compensated_v+absv[k];
            way_of_cutter[ii]=1;
            ii++;
            break;
        }

        case 24:
        {
            d1=d;
            finalu[ii]=absu[k]+v_of_vv[k]*(-d);
            finalv[ii]=absv[k]+v_of_uu[k]*d;
            way_of_cutter[ii]=number_of_G[k];
            finalu_of_center[ii]=absu_of_center[k];
            finalv_of_center[ii]=absv_of_center[k];
            ii++;
            x11=v_of_uu[k];
            y11=v_of_vv[k];
            x12=v_of_u[k+1];
            y12=v_of_v[k+1];
            compensated_u=(x12-x11)*d/(x11*y12-x12*y11);
            compensated_v=(y12-y11)*d/(x11*y12-x12*y11);
            finalu[ii]=compensated_u+absu[k];
            finalv[ii]=compensated_v+absv[k];
            way_of_cutter[ii]=1;
            ii++;
            finalu[ii]=absu[k]+cutter_of_u[k+1];
            finalv[ii]=absv[k]+cutter_of_v[k+1];
            way_of_cutter[ii]=1;
            finalu_of_center[ii]=absu_of_center[k];
            finalv_of_center[ii]=absv_of_center[k];
            ii++;
            break;
        }

        case 31:
        {
            d1=d;
            finalu[ii]=cutter_of_u[k]+sgn(d)*d*v_of_u[k]+absu[k];
            finalv[ii]=cutter_of_v[k]+sgn(d)*d*v_of_v[k]+absv[k];
            way_of_cutter[ii]=1;
            ii++;
            finalu[ii]=cutter_of_u[k+1]-sgn(d)*d*v_of_u[k+1]+absu[k];
            finalv[ii]=cutter_of_v[k+1]-sgn(d)*d*v_of_v[k+1]+absv[k];
            way_of_cutter[ii]=1;
            ii++;
            break;
        }

        case 32:
        {
            d1=d;
            finalu[ii]=cutter_of_u[k]+sgn(d)*d*v_of_u[k]+absu[k];
            finalv[ii]=cutter_of_v[k]+sgn(d)*d*v_of_v[k]+absv[k];
            way_of_cutter[ii]=1;
            ii++;
            finalu[ii]=cutter_of_u[k+1]-sgn(d)*d*v_of_u[k+1]+absu[k];
            finalv[ii]=cutter_of_v[k+1]-sgn(d)*d*v_of_v[k+1]+absv[k];
            way_of_cutter[ii]=1;
            ii++;
            finalu[ii]=absu[k]+cutter_of_u[k+1];
            finalv[ii]=absv[k]+cutter_of_v[k+1];
            way_of_cutter[ii]=1;
            ii++;
            break;
        }

        case 33:
        {
            d1=d;
            finalu[ii]=absu[k]+v_of_vv[k]*(-d);
            finalv[ii]=absv[k]+v_of_uu[k]*d;
            way_of_cutter[ii]=number_of_G[k];
            finalu_of_center[ii]=absu_of_center[k];
            finalv_of_center[ii]=absv_of_center[k];
            ii++;
            finalu[ii]=v_of_vv[k]*(-d)+sgn(d)*d*v_of_uu[k]+absu[k];
            finalv[ii]=v_of_uu[k]*d+sgn(d)*d*v_of_vv[k]+absv[k];
            way_of_cutter[ii]=1;
            ii++;
            finalu[ii]=cutter_of_u[k+1]-sgn(d)*d*v_of_u[k+1]+absu[k];
            finalv[ii]=cutter_of_v[k+1]-sgn(d)*d*v_of_v[k+1]+absv[k];
            way_of_cutter[ii]=1;
            ii++;
            break;
        }

        case 34:
        {
            d1=d;
            finalu[ii]=absu[k]+v_of_vv[k]*(-d);
            finalv[ii]=absv[k]+v_of_uu[k]*d;
            way_of_cutter[ii]=number_of_G[k];
            finalu_of_center[ii]=absu_of_center[k];
            finalv_of_center[ii]=absv_of_center[k];
            ii++;
            finalu[ii]=v_of_vv[k]*(-d)+sgn(d)*d*v_of_uu[k]+absu[k];
            finalv[ii]=v_of_uu[k]*d+sgn(d)*d*v_of_vv[k]+absv[k];
            way_of_cutter[ii]=1;
            ii++;
            finalu[ii]=cutter_of_u[k+1]-sgn(d)*d*v_of_u[k+1]+absu[k];
            finalv[ii]=cutter_of_v[k+1]-sgn(d)*d*v_of_v[k+1]+absv[k];
            way_of_cutter[ii]=1;
            ii++;
            finalu[ii]=absu[k]+cutter_of_u[k+1];
            finalv[ii]=absv[k]+cutter_of_v[k+1];
            way_of_cutter[ii]=1;
            ii++;
            break;
        }
        case 5:
        {
            d1=d;
            cutterx=cutter_of_u[k+1];
            cuttery=cutter_of_v[k+1];
            finalu[ii]=absu[k]-sgn(d)*d*v_of_u[k];
            finalv[ii]=absv[k]-sgn(d)*d*v_of_v[k];
            way_of_cutter[ii]=0;
            ii++;
            finalu[ii]=absu[k]+cutterx;
            finalv[ii]=absv[k]+cuttery;
            way_of_cutter[ii]=0;
            ii++;
            break;
        }
        case 6:
        {
            if(number_of_G[k]==1)
            {
                finalu[ii]=absu[k]+cutter_of_u[k];
                finalv[ii]=absv[k]+cutter_of_v[k];
                way_of_cutter[ii]=1;
                ii++;
            }
            else if((number_of_G[k]==2)||(number_of_G[k]==3))
            {
                finalu[ii]=absu[k]+v_of_vv[k]*(-d);
                finalv[ii]=absv[k]+v_of_uu[k]*(-d);
                way_of_cutter[ii]=number_of_G[k];
                finalu_of_center[ii]=absu_of_center[k];
                finalv_of_center[ii]=absv_of_center[k];
                ii++;
            }
            break;

        }
        case 7:
        {
            if(number_of_G[k+1]!=0)
            {
                if(number_of_G[k]==1)
                {
                    cutterx=cutter_of_u[k+1];
                    cuttery=cutter_of_v[k+1];
                    finalu[ii]=absu[k];
                    finalv[ii]=absv[k];
                    way_of_cutter[ii]=1;
                    ii++;
                    finalu[ii]=absu[k]+cutterx;
                    finalv[ii]=absv[k]+cuttery;
                    way_of_cutter[ii]=0;
                    ii++;
                }
                else if(number_of_G[k]==0)
                {
                    cutterx=cutter_of_u[k+1];
                    cuttery=cutter_of_v[k+1];
                    finalu[ii]=absu[k];
                    finalv[ii]=absv[k];
                    way_of_cutter[ii]=0;
                    ii++;
                    finalu[ii]=absu[k]+cutterx;
                    finalv[ii]=absv[k]+cuttery;
                    way_of_cutter[ii]=0;
                    ii++;
                }
                else if((number_of_G[k]==2)||(number_of_G[k]==3))
                {
                    cutterx=cutter_of_u[k+1];
                    cuttery=cutter_of_v[k+1];
                    finalu[ii]=absu[k];
                    finalv[ii]=absv[k];
                    way_of_cutter[ii]=number_of_G[k];
                    finalu_of_center[ii]=absu_of_center[k];
                    finalv_of_center[ii]=absv_of_center[k];
                    ii++;
                    finalu[ii]=absu[k]+cutterx;
                    finalv[ii]=absv[k]+cuttery;
                    way_of_cutter[ii]=0;
                    ii++;
                }
            }
            else
            {
                if(number_of_G[k]==1)
                {
                    finalu[ii]=absu[k];
                    finalv[ii]=absv[k];
                    way_of_cutter[ii]=1;
                    ii++;

                }
                else if(number_of_G[k]==0)
                {
                    finalu[ii]=absu[k];
                    finalv[ii]=absv[k];
                    way_of_cutter[ii]=0;
                    ii++;
                }
                else if((number_of_G[k]==2)||(number_of_G[k]==3))
                {
                    finalu[ii]=absu[k];
                    finalv[ii]=absv[k];
                    way_of_cutter[ii]=number_of_G[k];
                    finalu_of_center[ii]=absu_of_center[k];
                    finalv_of_center[ii]=absv_of_center[k];
                    ii++;
                }
            }

            break ;
        }
        case 8:

        {


            if(number_of_G[k]==1)
            {
                cutterx=cutter_of_u_last[k];
                cuttery=cutter_of_v_last[k];
                finalu[ii]=absu[k]+cutterx;
                finalv[ii]=absv[k]+cuttery;
                way_of_cutter[ii]=1;
                ii++;
                finalu[ii]=absu[k];
                finalv[ii]=absv[k];
                way_of_cutter[ii]=0;
                ii++;
            }
            else if(number_of_G[k]==0)
            {
                finalu[ii]=absu[k];
                finalv[ii]=absv[k];
                way_of_cutter[ii]=0;
                ii++;

            }
            else if((number_of_G[k]==2)||(number_of_G[k]==3))
            {
                cutterx=cutter_of_u_last[k];
                cuttery=cutter_of_v_last[k];
                finalu[ii]=absu[k]+cutterx;
                finalv[ii]=absv[k]+cuttery;
                way_of_cutter[ii]=number_of_G[k];
                finalu_of_center[ii]=absu_of_center[k];
                finalv_of_center[ii]=absv_of_center[k];
                ii++;
                finalu[ii]=absu[k];
                finalv[ii]=absv[k];
                way_of_cutter[ii]=0;
                ii++;
            }
            break;
        }

        case 9:
        {
            if(number_of_G[k]==1)
            {
                finalu[ii]=absu[k];
                finalv[ii]=absv[k];
                way_of_cutter[ii]=1;
                ii++;
            }
            else if(number_of_G[k]==0)
            {
                finalu[ii]=absu[k];
                finalv[ii]=absv[k];
                way_of_cutter[ii]=0;
                ii++;
            }
            else if((number_of_G[k]==2)||(number_of_G[k]==3))
            {
                finalu[ii]=absu[k];
                finalv[ii]=absv[k];
                way_of_cutter[ii]=number_of_G[k];
                finalu_of_center[ii]=absu_of_center[k];
                finalv_of_center[ii]=absv_of_center[k];
                ii++;
            }
            break;
        }
        case 10:
        {
            finalu[ii]=absu[k];
            finalv[ii]=absv[k];
            way_of_cutter[ii]=0;
            ii++;
            break;
        }

        default:
            break;
        }
    }

    //最后刀补点
    if(flag_of_cutter[count_command]!=0)
    {
        d=d_abs*flag_of_cutter[count_command];
        if(number_of_G[count_command]==1)
        {
            finalu[ii]=absu[count_command]+cutter_of_u[count_command];
            finalv[ii]=absv[count_command]+cutter_of_v[count_command];
            way_of_cutter[ii]=number_of_G[count_command];
        }
        else if(number_of_G[count_command]==0)
        {
            finalu[ii]=absu[count_command]-sgn(d)*d*v_of_u[count_command];
            finalv[ii]=absv[count_command]-sgn(d)*d*v_of_v[count_command];
            way_of_cutter[ii]=0;
        }
           else if((number_of_G[count_command]==2)||(number_of_G[count_command]==3))
            {
                finalu[ii]=absu[count_command]+v_of_vv[count_command]*(-d);
                finalv[ii]=absv[count_command]+v_of_uu[count_command]*d;
                way_of_cutter[ii]=number_of_G[count_command];
                finalu_of_center[ii]=absu_of_center[count_command];
                finalv_of_center[ii]=absv_of_center[count_command];
            }
    }
    else
    {
        if(number_of_G[count_command]==1)
        {
            finalu[ii]=absu[count_command];
            finalv[ii]=absv[count_command];
            way_of_cutter[ii]=number_of_G[count_command];
        }
        else if(number_of_G[count_command]==0)
        {
            finalu[ii]=absu[count_command];
            finalv[ii]=absv[count_command];
            way_of_cutter[ii]=number_of_G[count_command];
        }
        else if((number_of_G[count_command]==2)||(number_of_G[count_command]==3))
        {
            finalu[ii]=absu[count_command];
            finalv[ii]=absv[count_command];
            way_of_cutter[ii]=number_of_G[count_command];
            finalu_of_center[ii]=absu_of_center[count_command];
            finalv_of_center[ii]=absv_of_center[count_command];
        }
    }
    //刀补轨迹
    p->setPen(Qt::red);
    float begin_u;
    float begin_v;
    bool start = false;
    for(int k=1;k<ii+1;k++)
    {
        switch (way_of_cutter[k]) {
        case 0:
        {
            u=finalu[k]*3;
            v=finalv[k]*3;
            p->drawLine(QPoint(begin_v,begin_u),QPoint(v,u));
            begin_u = u;
            begin_v = v;
            break;
        }

        case 1:
        {
            u=finalu[k]*3;
            v=finalv[k]*3;
            p->drawLine(QPoint(begin_v,begin_u),QPoint(v,u));
            begin_u = u;
            begin_v = v;
            break;
        }

        case 2:
        {
            u=finalu[k]*3;
            v=finalv[k]*3;
            i_of_center = finalu_of_center[k]*3-begin_u;
            k_of_center = finalv_of_center[k]*3-begin_v;
            float centeru = i_of_center + begin_u;
            float centerv = k_of_center + begin_v;
            float R = sqrtf(i_of_center*i_of_center+k_of_center*k_of_center);

            QRectF rect(centerv-R,centeru-R,2*R,2*R);
            float reu = u - centeru;
            float rev = v - centerv;
            float beginAngle;
            float endAngle;
            float angle;
            beginAngle = GetAngle(-i_of_center,-k_of_center);
            endAngle = GetAngle(reu,rev);
            if(beginAngle < endAngle)
            {
                angle = - (beginAngle - endAngle);
            }
            else
            {
                angle =360 - (beginAngle - endAngle);

            }

            p->drawArc(rect,(beginAngle-90)*16,angle*16);
            begin_u = u;
            begin_v = v;

            break;
        }

        case 3:
        {
            u=finalu[k]*3;
            v=finalv[k]*3;
            i_of_center = finalu_of_center[k]*3-begin_u;
            k_of_center = finalv_of_center[k]*3-begin_v;
            float centeru = i_of_center + begin_u;
            float centerv = k_of_center + begin_v;
            float R = sqrtf(i_of_center*i_of_center+k_of_center*k_of_center);

            QRectF rect(centerv-R,centeru-R,2*R,2*R);
            float reu = u - centeru;
            float rev = v - centerv;
            float beginAngle;
            float endAngle;
            float angle;
            beginAngle = GetAngle(-i_of_center,-k_of_center);
            endAngle = GetAngle(reu,rev);
            if(beginAngle > endAngle)
            {
                angle =-(beginAngle - endAngle);
            }
            else
            {
                angle = - (360 - (endAngle - beginAngle));

            }

            p->drawArc(rect,(beginAngle-90)*16,angle*16);
            begin_u = u;
            begin_v = v;
            break;
        }
        default:
            break;
        }
    }
    tracklist.clear();
    p->end();
    this->update();



}

float GetAngle(float reu, float rev)
{
    int qua;//1,2,3,4代表一二三四象限，5,6,7,8代表u正，z正，u负，z负轴上
    if(reu == 0)
    {
        if(rev > 0) {qua = 6;}
        else {qua = 8;}
    }
    else if (reu > 0)
    {
        if(rev == 0) {qua=5;}
        else if (rev > 0) {qua =1;}
        else if (rev < 0) {qua = 4;}
    }
    else if (reu < 0)
    {
        if(rev == 0) {qua = 7;}
        else if (rev > 0) {qua = 2;}
        else if (rev < 0) {qua = 3;}
    }

    float startAngle;
    switch (qua)
    {
    case 1:
    {
        startAngle = qAtan2(rev,reu)*180/3.1415926;
        break;
    }
    case 2:
    {
        startAngle = qAtan2(rev,reu)*180/3.1415926;
        break;
    }
    case 3:
    {
        startAngle = qAtan2(rev,reu)*180/3.1415926 + 360;
        break;
    }
    case 4:
    {
        startAngle = qAtan2(rev,reu)*180/3.1415926+360;
        break;
    }
    case 5:
    {
        startAngle = 0;
        break;
    }
    case 6:
    {
        startAngle = 90;
        break;
    }
    case 7:
    {
        startAngle = 180;
        break;
    }
    case 8:
    {
        startAngle = 270;
        break;
    }

    default:
        break;
    }
    return startAngle;

}



float GetNumber(int n, QString str, int tzpe)  //get the number after str[n]
{
    int blank;
    float numReturn;
    if(tzpe==1)     //寻找位置n（可为字母或空格等）后的数字
    {
        blank = n;
        while (str[blank+1] != ' ' && str[blank+1] != '\n')
        {
            if((blank +2) == str.size())
            {
                blank = blank+1;
                break;
            }
            blank = blank+1;
        }
        numReturn = str.mid(n+1, blank-n).toFloat();
        return numReturn;
    }
    if(tzpe==2)     //寻找位置n（可为字母或空格等）后的数字，【除去最后一位0】，checked
    {
        blank = n;
        while (str[blank+1] != ' ' && str[blank+1] != '\n')
        {
            if((blank +2) == str.size())
            {
                blank = blank+1;
                break;
            }
            else blank = blank+1;
        }
        numReturn = str.mid(n+1, blank-n-1).toFloat();  //-1
        return numReturn;
    }
}

int sgn(float d)
{
    if(d<0) return -1;
    else if (d==0) return 0;
    else return 1;
}

void track::closeEvent(QCloseEvent *event)
{
    QPixmap *p2=new QPixmap(500,500);
    p2->fill(Qt::white);
    pix=p2;
    this->update();
}

track::~track()
{
    delete ui;
}





