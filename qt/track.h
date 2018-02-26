#ifndef TRACK_H
#define TRACK_H

#include <QWidget>

namespace Ui {
class track;
}

class track : public QWidget
{
    Q_OBJECT

public:
    explicit track(QWidget *parent = 0);
    QList<QString> tracklist;
    ~track();
    void freeMemery();
    void trackProcessing(QPixmap *pixmap);
    void paintEvent(QPaintEvent *);
    void closeEvent(QCloseEvent *);
    QPixmap *pix;

private:
    Ui::track *ui;


};

#endif // TRACK_H
