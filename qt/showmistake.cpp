#include "showmistake.h"
#include "ui_showmistake.h"
#include <QDebug>

ShowMistake::ShowMistake(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ShowMistake)
{
    ui->setupUi(this);
    mistakeLine = ui->listWidget;
    mistakeType = ui->textBrowser;
    order       = ui->textEdit;
}

ShowMistake::~ShowMistake()
{
    delete ui;
}

void ShowMistake::on_listWidget_currentTextChanged(const QString &currentText)
{
    QString str;
    str = currentText;
    int lineChoose = str.toInt()-1;
    emit sendLine(lineChoose);
}

void ShowMistake::on_correct_clicked()
{
    QString orderRevise;
    orderRevise = order->toPlainText();
    emit sendOrder(orderRevise);
}


