#ifndef THREAD_OPENCV_H
#define THREAD_OPENCV_H

#include <QObject>
#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>

using namespace cv;
using namespace std;

class thread_opencv : public QObject
{
    Q_OBJECT
public:
    explicit thread_opencv(QObject *parent = 0);
    float u_position;
    float v_position;
    float d_compensation;

signals:
    void set_com(bool,float,float);

public slots:
    void image_process(Mat);
    void PosData_re(float,float,float);



};

#endif // THREAD_OPENCV_H
