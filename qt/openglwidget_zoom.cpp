#include "openglwidget_zoom.h"
#include <QDebug>
#include <QPainter>

OpenGLWidget_Zoom::OpenGLWidget_Zoom(QWidget *parent) : QOpenGLWidget(parent)
{
    m_img_buffer = Q_NULLPTR;
    m_width=2448;
    m_height=2058;
    half_width=m_width/2;
    half_height=m_height/2;
    zoom_half_width=half_width;
    zoom_half_height=half_height;
    zoom_num=0;
    zoom_factor=0.5;
    max_zoom_num=8;
    pen_1.setWidth(5);   //中线粗细
    pen_1.setColor(Qt::red);  //中线颜色
    pen_2.setWidth(5);; //理论轮廓粗细
    pen_2.setColor(Qt::green);  //理论轮廓颜色
}

OpenGLWidget_Zoom::~OpenGLWidget_Zoom()
{
    if ( m_img_buffer )
    {
        delete m_img_buffer;
        m_img_buffer = Q_NULLPTR;
    }
}

bool OpenGLWidget_Zoom::checkBufferReady()
{
    if ( !m_img_buffer )
    {
        qDebug() << "m_img_buferr not ready";
        return false;
    }
    return true;
}

void OpenGLWidget_Zoom::ZoomIn()
{
    QPoint zoom_point;
    //qDebug()<<"GLWidget_x "<<GLWidget_x;
    //qDebug()<<"GLWidget_y "<<GLWidget_y;
    double mul_factor_1=1;
    double mul_factor_2=zoom_factor;
    for(int i=1;i<zoom_num;i++)//1
    {
        mul_factor_1=mul_factor_1*zoom_factor;
        //mul_factor_2=mul_factor_2*0.91;
    }

    //qDebug()<<"factor1 "<<mul_factor_1;
    //qDebug()<<"factor2 "<<mul_factor_2;
    if(zoom_num==1)
    {
        zoom_x=GLWidget_x;
        zoom_y=GLWidget_y;
        zoom_point.setX(zoom_x);
        zoom_point.setY(zoom_y);
    }
    else if(zoom_num<23)
    {
        zoom_x=zoomList.last().x();
        zoom_y=zoomList.last().y();
        zoom_x=zoom_x+(GLWidget_x-half_width)*mul_factor_1;
        zoom_y=zoom_y+(GLWidget_y-half_height)*mul_factor_1;

        if(zoom_x<0)
            zoom_x=0;
        else if(zoom_x>m_width)
            zoom_x=m_width;
        if(zoom_y<0)
            zoom_y=0;
        else if(zoom_y>m_height)
            zoom_y=m_height;

        zoom_point.setX(zoom_x);
        zoom_point.setY(zoom_y);
    }
    else if(zoom_num>=max_zoom_num)
        zoom_num=max_zoom_num;
    zoomList.append(zoom_point);
    //qDebug()<<"num_in "<<zoom_num;
    //qDebug()<<"zoom_x "<<zoom_x;
    //qDebug()<<"zoom_y "<<zoom_y;
    zoom_half_width=zoom_half_width*mul_factor_2;
    zoom_half_height=zoom_half_height*mul_factor_2;
    //qDebug()<<zoom_half_width;
    //qDebug()<<zoom_half_height;
    if(zoom_x-zoom_half_width<0)
    {
        if(zoom_y-zoom_half_height<0)
        {
            rect=QRect(0, 0, zoom_half_width*2, zoom_half_height*2);
        }
        else if(zoom_y+zoom_half_height>m_height)
        {
            rect=QRect(0, m_height-zoom_half_height*2, zoom_half_width*2, zoom_half_height*2);
        }
        else if(zoom_y-zoom_half_height>=0 && zoom_y+zoom_half_height<=m_height)
        {
            rect=QRect(0, zoom_y-zoom_half_height, zoom_half_width*2, zoom_half_height*2);
        }
    }
    else if(zoom_x+zoom_half_width>m_width)
    {
        if(zoom_y-zoom_half_height<0)
        {
            rect=QRect(m_width-zoom_half_width*2, 0, zoom_half_width*2, zoom_half_height*2);
        }
        else if(zoom_y+zoom_half_height>m_height)
        {
            rect=QRect(m_width-zoom_half_width*2, m_height-zoom_half_height*2, zoom_half_width*2, zoom_half_height*2);
        }
        else if(zoom_y-zoom_half_height>=0 && zoom_y+zoom_half_height<=m_height)
        {
            rect=QRect(m_width-zoom_half_width*2, zoom_y-zoom_half_height, zoom_half_width*2, zoom_half_height*2);
        }
    }
    else if(zoom_x-zoom_half_width>=0 && zoom_x+zoom_half_width<=m_width)
    {
        if(zoom_y-zoom_half_height<0)
        {
            rect=QRect(zoom_x-zoom_half_width, 0, zoom_half_width*2, zoom_half_height*2);
        }
        else if(zoom_y+zoom_half_height>m_height)
        {
            rect=QRect(zoom_x-zoom_half_width, m_height-zoom_half_height*2, zoom_half_width*2, zoom_half_height*2);
        }
        else if(zoom_y-zoom_half_height>=0 && zoom_y+zoom_half_height<=m_height)
        {
             rect=QRect(zoom_x-zoom_half_width, zoom_y-zoom_half_height, zoom_half_width*2, zoom_half_height*2);
        }
    }
    update();
}

void OpenGLWidget_Zoom::ZoomOut()
{
    double mul_factor_2=1/zoom_factor;
    if(zoom_num>0)
    {
        zoomList.removeLast();
    }
    else if(zoom_num<=0)
    {
        //qDebug()<<"!";
        zoom_num=0;
        zoom_half_width=half_width;
        zoom_half_height=half_height;
        zoom_x=GLWidget_x;
        zoom_y=GLWidget_y;
    }
    //qDebug()<<"num_out "<<zoom_num;
    if(zoom_x<0)
        zoom_x=0;
    else if(zoom_x>m_width)
        zoom_x=m_width;
    if(zoom_y<0)
        zoom_y=0;
    else if(zoom_y>m_height)
        zoom_y=m_height;
    //qDebug()<<"zoom_x "<<zoom_x;
    //qDebug()<<"zoom_y "<<zoom_y;
    zoom_half_width=zoom_half_width*mul_factor_2;
    zoom_half_height=zoom_half_height*mul_factor_2;
    if(zoom_half_width>half_width)
        zoom_half_width=half_width;
    if(zoom_half_height>half_height)
        zoom_half_height=half_height;
    //qDebug()<<zoom_half_width;
    //qDebug()<<zoom_half_height;
    if(zoom_x-zoom_half_width<0)
    {
        if(zoom_y-zoom_half_height<0)
        {
            rect=QRect(0, 0, zoom_half_width*2, zoom_half_height*2);
        }
        else if(zoom_y+zoom_half_height>m_height)
        {
            rect=QRect(0, m_height-zoom_half_height*2, zoom_half_width*2, zoom_half_height*2);
        }
        else if(zoom_y-zoom_half_height>=0 && zoom_y+zoom_half_height<=m_height)
        {
            rect=QRect(0, zoom_y-zoom_half_height, zoom_half_width*2, zoom_half_height*2);
        }
    }
    else if(zoom_x+zoom_half_width>m_width)
    {
        if(zoom_y-zoom_half_height<0)
        {
            rect=QRect(m_width-zoom_half_width*2, 0, zoom_half_width*2, zoom_half_height*2);
        }
        else if(zoom_y+zoom_half_height>m_height)
        {
            rect=QRect(m_width-zoom_half_width*2, m_height-zoom_half_height*2, zoom_half_width*2, zoom_half_height*2);
        }
        else if(zoom_y-zoom_half_height>=0 && zoom_y+zoom_half_height<=m_height)
        {
            rect=QRect(m_width-zoom_half_width*2, zoom_y-zoom_half_height, zoom_half_width*2, zoom_half_height*2);
        }
    }
    else if(zoom_x-zoom_half_width>=0 && zoom_x+zoom_half_width<=m_width)
    {
        if(zoom_y-zoom_half_height<0)
        {
            rect=QRect(zoom_x-zoom_half_width, 0, zoom_half_width*2, zoom_half_height*2);
        }
        else if(zoom_y+zoom_half_height>m_height)
        {
            rect=QRect(zoom_x-zoom_half_width, m_height-zoom_half_height*2, zoom_half_width*2, zoom_half_height*2);
        }
        else if(zoom_y-zoom_half_height>=0 && zoom_y+zoom_half_height<=m_height)
        {
             rect=QRect(zoom_x-zoom_half_width, zoom_y-zoom_half_height, zoom_half_width*2, zoom_half_height*2);
        }
    }
    update();
}

void OpenGLWidget_Zoom::initializeGL()
{
    if (!checkBufferReady())
    {
        Q_ASSERT( m_width > 0 || m_height > 0 );
        m_img_buffer = new QImage (m_width,m_height,QImage::Format_Grayscale8);
    }
}

void OpenGLWidget_Zoom::paintGL()
{
    if ( !checkBufferReady())
    {
        qDebug()<< "img was not ready";
    }
    //绘制图片
    QPainter painter(this);
    QRect widget_size(0,0,size().width(),size().height());
    QRect zoom_size(0,0,rect.width(),rect.height());
    painter.drawImage(widget_size,img.copy(rect),zoom_size);
}

void OpenGLWidget_Zoom::wheelEvent(QWheelEvent *event)
{
    if(event->delta()>0)
    {
        zoom_num+=1;
        ZoomIn();
    }
    if(event->delta()<0)
    {
        zoom_num-=1;
        ZoomOut();
    }
}

void OpenGLWidget_Zoom::receive_Current_Image(QImage& image)
{
    img=image;
    *m_img_buffer = img.copy();
    QPainter lines_painter;
    lines_painter.begin(&img);
    lines_painter.setPen(pen_1);
    lines_painter.drawLine(0,1029,2448,1029); //中线位置
    lines_painter.drawLine(1224,0,1224,2058); //中线位置
    //theoretical outline
    lines_painter.setPen(pen_2);
    lines_painter.drawLine(221,1700,436,1700);  //line(image,Point(221,1700),Point(436,1700),Scalar(0, 0, 255),2,8);
    lines_painter.drawArc(149,1126,574,574,4320,924.48);    //ellipse(image,Point(436,1413),Size(287,287),0,32.22,90,Scalar(0, 0, 255),2,8);
    lines_painter.drawArc(579,1264,1290,1290,515.52,1848.96);   //ellipse(image,Point(1224,1909),Size(645,645),0,212.22,327.78,Scalar(0, 0, 255),2,8);
    lines_painter.drawArc(1724,1126,574,574,3395.52,924.48);    //ellipse(image,Point(2011,1413),Size(287,287),0,90,147.78,Scalar(0, 0, 255),2,8);
    lines_painter.drawLine(2011,1700,2226,1700);    //line(image,Point(2011,1700),Point(2226,1700),Scalar(0, 0, 255),2,8);
    lines_painter.end();
    update();
}

void OpenGLWidget_Zoom::receive_OpenGLWidget_Zoom_Current_Coordinate(int x, int y)
{
    GLWidget_x=x*4;
    GLWidget_y=y*4;
}

