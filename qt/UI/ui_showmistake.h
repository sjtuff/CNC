/********************************************************************************
** Form generated from reading UI file 'showmistake.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SHOWMISTAKE_H
#define UI_SHOWMISTAKE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_ShowMistake
{
public:
    QDialogButtonBox *buttonBox;
    QListWidget *listWidget;
    QLabel *label;
    QTextBrowser *textBrowser;
    QLabel *label_2;
    QTextEdit *textEdit;
    QLabel *label_3;
    QPushButton *correct;

    void setupUi(QDialog *ShowMistake)
    {
        if (ShowMistake->objectName().isEmpty())
            ShowMistake->setObjectName(QStringLiteral("ShowMistake"));
        ShowMistake->resize(426, 305);
        buttonBox = new QDialogButtonBox(ShowMistake);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        listWidget = new QListWidget(ShowMistake);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(10, 40, 51, 221));
        label = new QLabel(ShowMistake);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(12, 20, 54, 12));
        textBrowser = new QTextBrowser(ShowMistake);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(70, 40, 91, 221));
        label_2 = new QLabel(ShowMistake);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(90, 20, 54, 12));
        textEdit = new QTextEdit(ShowMistake);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        textEdit->setGeometry(QRect(180, 50, 201, 131));
        label_3 = new QLabel(ShowMistake);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(252, 30, 54, 12));
        correct = new QPushButton(ShowMistake);
        correct->setObjectName(QStringLiteral("correct"));
        correct->setGeometry(QRect(300, 200, 75, 23));

        retranslateUi(ShowMistake);
        QObject::connect(buttonBox, SIGNAL(accepted()), ShowMistake, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ShowMistake, SLOT(reject()));

        QMetaObject::connectSlotsByName(ShowMistake);
    } // setupUi

    void retranslateUi(QDialog *ShowMistake)
    {
        ShowMistake->setWindowTitle(QApplication::translate("ShowMistake", "Dialog", nullptr));
        label->setText(QApplication::translate("ShowMistake", "\351\224\231\350\257\257\350\241\214\346\225\260", nullptr));
        label_2->setText(QApplication::translate("ShowMistake", "\351\224\231\350\257\257\347\261\273\345\236\213", nullptr));
        label_3->setText(QApplication::translate("ShowMistake", "\350\257\245\350\241\214\346\214\207\344\273\244", nullptr));
        correct->setText(QApplication::translate("ShowMistake", "\344\277\256\346\224\271", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ShowMistake: public Ui_ShowMistake {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SHOWMISTAKE_H
