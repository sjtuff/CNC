#include "openglwidget_ccd.h"
#include <QDebug>
#include <QPainter>

OpenGLWidget_CCD::OpenGLWidget_CCD(QWidget *parent) : QOpenGLWidget(parent)
{
    m_img_buffer = Q_NULLPTR;
    m_width=2448;
    m_height=2058;
    pen_1.setWidth(5);   //中线粗细
    pen_1.setColor(Qt::red);  //中线颜色
    pen_2.setWidth(5);; //理论轮廓粗细
    pen_2.setColor(Qt::green);  //理论轮廓颜色
    pB_ToolAiming_On=false;
    transmit_On=false;
}

OpenGLWidget_CCD::~OpenGLWidget_CCD()
{
    if ( m_img_buffer )
    {
        delete m_img_buffer;
        m_img_buffer = Q_NULLPTR;
    }
}

bool OpenGLWidget_CCD::checkBufferReady()
{
    if ( !m_img_buffer )
    {
        qDebug() << " m_img_buferr not ready";
        return false;
    }
    return true;
}

void OpenGLWidget_CCD::initializeGL()
{
    if (!checkBufferReady())
    {
        Q_ASSERT( m_width > 0 || m_height > 0 );
        m_img_buffer = new QImage (m_width,m_height,QImage::Format_Grayscale8);
    }
}

void OpenGLWidget_CCD::paintGL()
{
    if ( !( m_img_ready && checkBufferReady()) )
    {
        qDebug()<< "img was not ready";
    }
    //绘制图片
    QPainter painter(this);
    QRect widget_size(0,0,size().width(),size().height());
    QRect img_size(0,0,m_img_buffer->width(),m_img_buffer->height());
    painter.drawImage(widget_size,img.copy(),img_size);
}

void OpenGLWidget_CCD::receive_Zoom_Image(uchar *img_data)
{
    img=QImage(img_data,2448,2058,QImage::Format_Grayscale8);
    *m_img_buffer = img.copy();//setImage
    //qDebug()<<pB_ToolAiming_On;
    if(pB_ToolAiming_On)
    {
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
    }
    if(transmit_On)
    {
        emit transmit_Current_Image(img);
        transmit_On=false;
    }
    update();
}
