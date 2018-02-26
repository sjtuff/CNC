#ifndef SHOWMISTAKE_H
#define SHOWMISTAKE_H

#include <QDialog>
#include <QListWidget>
#include <QTextBrowser>
#include <QTextEdit>

namespace Ui {
class ShowMistake;
}

class ShowMistake : public QDialog
{
    Q_OBJECT

public:
    explicit ShowMistake(QWidget *parent = 0);
    ~ShowMistake();
    QListWidget  *mistakeLine;
    QTextBrowser *mistakeType;
    QTextEdit    *order;


private slots:
    void on_listWidget_currentTextChanged(const QString &currentText);

    void on_correct_clicked();

signals:
    void sendLine(int);
    void sendOrder(QString);

private:
    Ui::ShowMistake *ui;
};

#endif // SHOWMISTAKE_H
