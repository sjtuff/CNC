#ifndef OPENGLWIDGET_ZOOM_H
#define OPENGLWIDGET_ZOOM_H

#include <QOpenGLWidget>
#include <QRect>
#include <QImage>
#include <QWheelEvent>
#include <QList>
#include <QPen>

class OpenGLWidget_Zoom : public QOpenGLWidget
{
    Q_OBJECT
public:
    explicit OpenGLWidget_Zoom(QWidget *parent = 0);
    ~OpenGLWidget_Zoom();
    //void setImageSize(int, int);
    bool checkBufferReady();
    void ZoomIn();
    void ZoomOut();
    double zoom_factor;
    int max_zoom_num;

protected:
    void initializeGL() Q_DECL_OVERRIDE;
    //void resizeGL(int, int) Q_DECL_OVERRIDE;
    void paintGL(void);
    void wheelEvent(QWheelEvent *event);

private:
    bool m_img_ready;
    QImage *m_img_buffer;
    int  m_width,m_height;
    QRect rect;
    QImage img;
    int half_width, half_height;
    int zoom_half_width, zoom_half_height;
    int GLWidget_x, GLWidget_y;
    int zoom_x, zoom_y;
    int zoom_num;
    QList<QPoint> zoomList;
    QPen pen_1,pen_2;

public slots:
    void receive_Current_Image(QImage &);
    void receive_OpenGLWidget_Zoom_Current_Coordinate(int, int);

signals:
    //void return_Origin_Coordinate(int, int);
};

#endif // OPENGLWIDGET_ZOOM_H
