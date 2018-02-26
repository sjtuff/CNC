#ifndef OPENGLWIDGET_CCD_H
#define OPENGLWIDGET_CCD_H

#include <QOpenGLWidget>
#include <QRect>
#include <QPen>

class OpenGLWidget_CCD : public QOpenGLWidget
{
    Q_OBJECT
public:
    explicit OpenGLWidget_CCD(QWidget *parent = 0);
    ~OpenGLWidget_CCD();
    //void setImageSize(int, int);
    bool checkBufferReady();
    bool pB_ToolAiming_On;
    bool transmit_On;
    //bool transmit_CCD_Image_On;

protected:
    void initializeGL() Q_DECL_OVERRIDE;
    //void resizeGL(int, int) Q_DECL_OVERRIDE;
    void paintGL(void);

private:
    bool m_img_ready;
    QImage *m_img_buffer;
    int  m_width,m_height;
    QPen pen_1,pen_2;
    QImage img;

public slots:
    void receive_Zoom_Image(uchar*);

signals:
    void transmit_Current_Image(QImage&);
};

#endif // OPENGLWIDGET_CCD_H
