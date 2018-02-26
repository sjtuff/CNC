#ifndef REALTIME_PAINT_H
#define REALTIME_PAINT_H

#include <QLabel>
#include <QVector>

class widget_painting : public QWidget
{
    Q_OBJECT

public:
    explicit widget_painting(QWidget *parent = 0);

protected:
    void paintEvent(QPaintEvent *event);

private:
    QPainterPath path;
    QVector<QPointF> point_vec;
    QPixmap *pix;

public slots:
    void paint_track(QPointF mpos);
};

#endif // REALTIME_PAINT_H
