#include "realtime_paint.h"
#include <QDebug>
#include <QPainter>
#include <QPixmap>

widget_painting::widget_painting(QWidget *parent) : QWidget(parent)
{
    pix = new QPixmap(500,500);    // 这个 pixmap 对象用来接受准备绘制到空间的内容
    pix->fill(Qt::white);     // 填充这个图片的背景是白色
}

void widget_painting::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    painter.drawPixmap(0,0, *pix);

    //qDebug()<<"vecsizeevent: "<<point_vec.size();
    //qDebug()<<"vecevent:"<<point_vec;
}

void widget_painting::paint_track(QPointF mpos)
{
    QPainter *painter=new QPainter;
    //translate coordinate
    painter->begin(pix);
    painter->setPen(Qt::black);
    painter->drawLine(QPoint(0,250),QPoint(500,250));
    painter->drawLine(QPoint(250,0),QPoint(250,500));

    painter->setPen(Qt::red);
    painter->translate(250,250);
    painter->rotate(270);

    point_vec.append(mpos);
    if(point_vec.size()==1) {
        path.moveTo(point_vec.first().x(),point_vec.first().y());
        //qDebug()<<"point";
    }
    if(point_vec.size()==2) {
        path.lineTo(point_vec.last().x(),point_vec.last().y());
        point_vec.removeFirst();
        //qDebug()<<"line";
    }
    painter->drawPath(path);
    painter->end();
    update();
    //painter->drawLine(point_vec.last(), point_vec.first());
}
