/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QStackedWidget>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "openglwidget_ccd.h"
#include "openglwidget_zoom.h"
#include "realtime_paint.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QGridLayout *gridLayout_2;
    QHBoxLayout *horizontalLayout_9;
    QVBoxLayout *verticalLayout_15;
    QHBoxLayout *horizontalLayout_24;
    QLabel *label_163;
    QLabel *Label_Connection_Status;
    QPushButton *pB_Connection_of_Trio;
    QRadioButton *rB_CCD;
    QStackedWidget *Stacked_Pages_Main;
    QWidget *Page_Main;
    QVBoxLayout *verticalLayout_26;
    QVBoxLayout *verticalLayout_25;
    QHBoxLayout *horizontalLayout_12;
    QLabel *Label_Img;
    QTabWidget *tabWidget_4;
    QWidget *mechanical_coordinate_4;
    QHBoxLayout *horizontalLayout_11;
    QHBoxLayout *horizontalLayout_2;
    QVBoxLayout *verticalLayout;
    QLabel *label_183;
    QLabel *label_184;
    QLabel *label_185;
    QLabel *label_186;
    QLabel *label_219;
    QVBoxLayout *verticalLayout_20;
    QLabel *Label_Mech_Cor_X;
    QLabel *Label_Mech_Cor_Y;
    QLabel *Label_Mech_Cor_U;
    QLabel *Label_Mech_Cor_V;
    QLabel *Label_Mech_Cor_Z;
    QVBoxLayout *verticalLayout_19;
    QLabel *label_15;
    QLabel *label_16;
    QLabel *label_17;
    QLabel *label_19;
    QLabel *label_20;
    QVBoxLayout *verticalLayout_2;
    QLabel *Label__Motion_Status_X;
    QLabel *Label__Motion_Status_Y;
    QLabel *Label__Motion_Status_U;
    QLabel *Label__Motion_Status_V;
    QLabel *Label__Motion_Status_Z;
    QWidget *manufacturing_coordinate_4;
    QHBoxLayout *horizontalLayout_13;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_4;
    QLabel *label_191;
    QLabel *label_188;
    QLabel *label_189;
    QLabel *label_192;
    QLabel *label_218;
    QVBoxLayout *verticalLayout_3;
    QLabel *Label_X_Speed;
    QLabel *Label_Y_Speed;
    QLabel *Label_U_Speed;
    QLabel *Label_V_Speed;
    QLabel *Label_Z_Speed;
    QVBoxLayout *verticalLayout_5;
    QLabel *Label_X_MSpeed;
    QLabel *Label_Y_MSpeed;
    QLabel *Label_U_MSpeed;
    QLabel *Label_V_MSpeed;
    QLabel *Label_Z_MSpeed;
    QVBoxLayout *verticalLayout_27;
    QLabel *label_21;
    QLabel *label_22;
    QLabel *label_23;
    QLabel *label_24;
    QLabel *label_25;
    QWidget *part_coordinate_4;
    QGridLayout *gridLayout_12;
    QGridLayout *gridLayout_11;
    QLabel *label_199;
    QLabel *label_202;
    QLabel *label_195;
    QLabel *label_196;
    QLabel *label_200;
    QLabel *label_197;
    QLabel *label_198;
    QLabel *label_201;
    QFrame *frame_5;
    QGridLayout *gridLayout_17;
    QLabel *label_176;
    QLabel *Label_date;
    QFrame *line_4;
    QLabel *label_177;
    QLabel *Label_current_velocity;
    QLabel *label_164;
    QLabel *Label_current_z_velocity;
    QLabel *label_171;
    QLabel *label_170;
    QLabel *label_172;
    QLabel *label_173;
    QLabel *label_166;
    QLabel *label_168;
    QLabel *label_175;
    QLabel *Label_current_feed_rate;
    QLabel *Label_current_loop_rate;
    QLabel *label_174;
    QWidget *vpspeed;
    QVBoxLayout *verticalLayout_29;
    QVBoxLayout *verticalLayout_28;
    QGridLayout *gridLayout;
    QLabel *label_11;
    QLabel *Label_XY_VPSPEED;
    QLabel *label_26;
    QLabel *label_13;
    QLabel *Label_UV_VPSPEED;
    QLabel *label_27;
    QWidget *widget;
    QStackedWidget *Stacked_Pages_Sub;
    QWidget *Page_Sub_Default;
    QWidget *Page_Sub_Grinder_Cha;
    QVBoxLayout *verticalLayout_6;
    QLabel *label_211;
    QTableWidget *tableWidget_25;
    QWidget *Page_Sub_Upper_Deviation;
    QVBoxLayout *verticalLayout_7;
    QLabel *label_212;
    QTableWidget *tableWidget_26;
    QWidget *Page_Sub_Lower_Deviation;
    QVBoxLayout *verticalLayout_9;
    QLabel *label_213;
    QHBoxLayout *horizontalLayout_4;
    QTableWidget *tableWidget_27;
    QVBoxLayout *verticalLayout_8;
    QComboBox *cB_offset_axis;
    QLineEdit *lineEdit_offset_dis;
    QPushButton *pB_Start_offset;
    QSpacerItem *verticalSpacer_2;
    QWidget *Page_Sub_Compensation;
    QVBoxLayout *verticalLayout_13;
    QLabel *label_217;
    QHBoxLayout *horizontalLayout_5;
    QTableWidget *tableWidget_28;
    QHBoxLayout *horizontalLayout;
    QLineEdit *lineEdit_tool_compensation;
    QPushButton *pushButton_write_tool_compensation;
    QWidget *Page_Sub_Zero_Offset;
    QGridLayout *gridLayout_3;
    QTableWidget *tableWidget_29;
    QWidget *Page_Sub_Coordinate_Setting;
    QHBoxLayout *horizontalLayout_6;
    QFormLayout *formLayout;
    QPushButton *pushButton_17;
    QPushButton *pushButton_18;
    QPushButton *pushButton_19;
    QPushButton *pushButton_20;
    QPushButton *pushButton_21;
    QLineEdit *lineEdit_Coordinate_Setting_X;
    QLineEdit *lineEdit_Coordinate_Setting_Y;
    QLineEdit *lineEdit_Coordinate_Setting_U;
    QLineEdit *lineEdit_Coordinate_Setting_V;
    QLineEdit *lineEdit_Coordinate_Setting_Z;
    QVBoxLayout *verticalLayout_14;
    QSplitter *splitter_14;
    QLabel *label;
    QComboBox *comboBox_Coodinate_Setting;
    QSplitter *splitter_15;
    QPushButton *pB_Coordinate_Setting_Reset;
    QPushButton *pB_Coordinate_Setting_Load;
    QSpacerItem *verticalSpacer_3;
    QWidget *Page_Sub_Zero_Return;
    QGridLayout *gridLayout_4;
    QSplitter *splitter_9;
    QSplitter *splitter;
    QLabel *label_6;
    QLabel *label_Zero_Return_1;
    QSplitter *splitter_6;
    QLabel *label_10;
    QLabel *label_Zero_Return_2;
    QSplitter *splitter_7;
    QLabel *label_12;
    QLabel *label_Zero_Return_3;
    QSplitter *splitter_8;
    QLabel *label_14;
    QLabel *label_Zero_Return_4;
    QSplitter *splitter_10;
    QLabel *label_18;
    QLabel *label_Zero_Return_5;
    QSplitter *splitter_5;
    QPushButton *pB_Zero_Return_Reset;
    QPushButton *pB_Zero_Return_Load;
    QLabel *label_8;
    QVBoxLayout *verticalLayout_10;
    QPushButton *pB_Zero_Return_X;
    QPushButton *pB_Zero_Return_Y;
    QPushButton *pB_Zero_Return_U;
    QPushButton *pB_Zero_Return_V;
    QPushButton *pB_Zero_Return_Z;
    QWidget *Page_Sub_Absolute_Mov;
    QHBoxLayout *horizontalLayout_7;
    QTableWidget *tableWidget;
    QGridLayout *gridLayout_5;
    QLineEdit *lineEdit_7;
    QLabel *label_2;
    QPushButton *pushButton_2;
    QPushButton *pushButton;
    QSpacerItem *verticalSpacer_4;
    QWidget *Page_Sub_Relative_Mov;
    QGridLayout *gridLayout_6;
    QTextBrowser *textBrowser;
    QLabel *label_3;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QWidget *Page_Sub_M_Order;
    QGridLayout *gridLayout_7;
    QTextBrowser *textBrowser_2;
    QLabel *label_5;
    QPushButton *pushButton_5;
    QWidget *Page_Sub_F_Order;
    QVBoxLayout *verticalLayout_11;
    QTableWidget *tableWidget_33;
    QFormLayout *formLayout_2;
    QPushButton *pushButton_24;
    QPushButton *pushButton_25;
    QLineEdit *lineEdit_8;
    QLineEdit *lineEdit_9;
    QWidget *Page_Sub_MDI;
    QGridLayout *gridLayout_8;
    QLabel *label_7;
    QLineEdit *lineEdit;
    QTextEdit *textEdit;
    QPushButton *pushButton_14;
    QWidget *Page_Sub_Simulate_Path;
    QWidget *Page_compensation;
    QRadioButton *radioButton;
    QWidget *Page_Txt;
    QVBoxLayout *verticalLayout_12;
    QSplitter *splitter_12;
    QLabel *label_Txt;
    QPushButton *pB_New_Txt;
    QPushButton *pB_ReadIn_Txt;
    QPushButton *pB_Save_Txt;
    QPushButton *pB_Undo_Txt;
    QPushButton *pB_GrammarCheck_Txt;
    QPushButton *pB_Send_Txt;
    QPlainTextEdit *pTE_GCode;
    QWidget *Page_Coordinate;
    QVBoxLayout *verticalLayout_21;
    QVBoxLayout *verticalLayout_22;
    QHBoxLayout *horizontalLayout_25;
    QLabel *label_214;
    QSpacerItem *horizontalSpacer_12;
    QTableWidget *tableWidget_30;
    QVBoxLayout *verticalLayout_23;
    QHBoxLayout *horizontalLayout_26;
    QLabel *label_215;
    QSpacerItem *horizontalSpacer_13;
    QTableWidget *tableWidget_31;
    QWidget *Page_Coordinate2;
    QGridLayout *gridLayout_15;
    QVBoxLayout *verticalLayout_24;
    QHBoxLayout *horizontalLayout_27;
    QLabel *label_216;
    QSpacerItem *horizontalSpacer_14;
    QTableWidget *tableWidget_32;
    QWidget *Page_CCD_Image;
    QGridLayout *gridLayout_16;
    QPushButton *pushButton_zoom;
    QPushButton *pushButton_15;
    QSpacerItem *verticalSpacer_5;
    OpenGLWidget_CCD *openGLWidget_CCDImage;
    QWidget *page_realtime_paint;
    QGridLayout *gridLayout_18;
    widget_painting *widget_realtime;
    QLabel *label_9;
    QSpacerItem *horizontalSpacer_3;
    QWidget *page_21;
    OpenGLWidget_Zoom *openGLWidget_zoomImage;
    QPushButton *pushButton_backtoCCD;
    QLabel *label_GLWidget_Coordinate_Name;
    QLabel *label_GLWidget_Coordinate;
    QSlider *horizontalSlider_Zoom_Factor;
    QLabel *label_Zoom_Factor_Name;
    QLabel *label_Zoom_Factor;
    QHBoxLayout *horizontalLayout_8;
    QPushButton *pB3_0;
    QPushButton *pB3_1;
    QPushButton *pB3_2;
    QPushButton *pB3_3;
    QPushButton *pB3_4;
    QPushButton *pB3_5;
    QPushButton *pB3_6;
    QPushButton *pB3_7;
    QVBoxLayout *verticalLayout_18;
    QVBoxLayout *verticalLayout_16;
    QPushButton *pB_help;
    QPushButton *pB_data;
    QPushButton *pB_manul;
    QPushButton *pB_program;
    QPushButton *pB_manufacture;
    QPushButton *pB_view;
    QPushButton *pB_setting;
    QVBoxLayout *verticalLayout_17;
    QPushButton *pB2_0;
    QPushButton *pB2_1;
    QPushButton *pB2_2;
    QPushButton *pB2_3;
    QPushButton *pB2_4;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(1138, 754);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(1);
        sizePolicy.setVerticalStretch(1);
        sizePolicy.setHeightForWidth(MainWindow->sizePolicy().hasHeightForWidth());
        MainWindow->setSizePolicy(sizePolicy);
        MainWindow->setAutoFillBackground(false);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        centralWidget->setStyleSheet(QStringLiteral(""));
        gridLayout_2 = new QGridLayout(centralWidget);
        gridLayout_2->setSpacing(6);
        gridLayout_2->setContentsMargins(11, 11, 11, 11);
        gridLayout_2->setObjectName(QStringLiteral("gridLayout_2"));
        horizontalLayout_9 = new QHBoxLayout();
        horizontalLayout_9->setSpacing(6);
        horizontalLayout_9->setObjectName(QStringLiteral("horizontalLayout_9"));
        verticalLayout_15 = new QVBoxLayout();
        verticalLayout_15->setSpacing(2);
        verticalLayout_15->setObjectName(QStringLiteral("verticalLayout_15"));
        horizontalLayout_24 = new QHBoxLayout();
        horizontalLayout_24->setSpacing(10);
        horizontalLayout_24->setObjectName(QStringLiteral("horizontalLayout_24"));
        label_163 = new QLabel(centralWidget);
        label_163->setObjectName(QStringLiteral("label_163"));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(16);
        font.setBold(true);
        font.setWeight(75);
        label_163->setFont(font);
        label_163->setAutoFillBackground(false);
        label_163->setStyleSheet(QLatin1String("background-color: rgb(0, 0, 127);\n"
"color: rgb(255, 255, 255);"));
        label_163->setFrameShadow(QFrame::Raised);
        label_163->setTextFormat(Qt::PlainText);
        label_163->setAlignment(Qt::AlignCenter);
        label_163->setOpenExternalLinks(false);

        horizontalLayout_24->addWidget(label_163);

        Label_Connection_Status = new QLabel(centralWidget);
        Label_Connection_Status->setObjectName(QStringLiteral("Label_Connection_Status"));
        Label_Connection_Status->setStyleSheet(QString::fromUtf8("font: 12pt \"\351\273\221\344\275\223\";"));
        Label_Connection_Status->setAlignment(Qt::AlignCenter);

        horizontalLayout_24->addWidget(Label_Connection_Status);

        pB_Connection_of_Trio = new QPushButton(centralWidget);
        pB_Connection_of_Trio->setObjectName(QStringLiteral("pB_Connection_of_Trio"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pB_Connection_of_Trio->sizePolicy().hasHeightForWidth());
        pB_Connection_of_Trio->setSizePolicy(sizePolicy1);
        pB_Connection_of_Trio->setStyleSheet(QString::fromUtf8("font: 12pt \"\351\273\221\344\275\223\";"));

        horizontalLayout_24->addWidget(pB_Connection_of_Trio);

        rB_CCD = new QRadioButton(centralWidget);
        rB_CCD->setObjectName(QStringLiteral("rB_CCD"));
        sizePolicy1.setHeightForWidth(rB_CCD->sizePolicy().hasHeightForWidth());
        rB_CCD->setSizePolicy(sizePolicy1);
        rB_CCD->setStyleSheet(QString::fromUtf8("font: 12pt \"\351\273\221\344\275\223\";"));

        horizontalLayout_24->addWidget(rB_CCD);

        horizontalLayout_24->setStretch(0, 8);
        horizontalLayout_24->setStretch(1, 4);
        horizontalLayout_24->setStretch(2, 4);
        horizontalLayout_24->setStretch(3, 3);

        verticalLayout_15->addLayout(horizontalLayout_24);

        Stacked_Pages_Main = new QStackedWidget(centralWidget);
        Stacked_Pages_Main->setObjectName(QStringLiteral("Stacked_Pages_Main"));
        QSizePolicy sizePolicy2(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(Stacked_Pages_Main->sizePolicy().hasHeightForWidth());
        Stacked_Pages_Main->setSizePolicy(sizePolicy2);
        Stacked_Pages_Main->setMinimumSize(QSize(840, 570));
        Stacked_Pages_Main->setMaximumSize(QSize(16777215, 10000000));
        Stacked_Pages_Main->setFrameShape(QFrame::Box);
        Page_Main = new QWidget();
        Page_Main->setObjectName(QStringLiteral("Page_Main"));
        verticalLayout_26 = new QVBoxLayout(Page_Main);
        verticalLayout_26->setSpacing(6);
        verticalLayout_26->setContentsMargins(11, 11, 11, 11);
        verticalLayout_26->setObjectName(QStringLiteral("verticalLayout_26"));
        verticalLayout_26->setContentsMargins(1, 7, 1, 7);
        verticalLayout_25 = new QVBoxLayout();
        verticalLayout_25->setSpacing(6);
        verticalLayout_25->setObjectName(QStringLiteral("verticalLayout_25"));
        horizontalLayout_12 = new QHBoxLayout();
        horizontalLayout_12->setSpacing(6);
        horizontalLayout_12->setObjectName(QStringLiteral("horizontalLayout_12"));
        Label_Img = new QLabel(Page_Main);
        Label_Img->setObjectName(QStringLiteral("Label_Img"));
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(Label_Img->sizePolicy().hasHeightForWidth());
        Label_Img->setSizePolicy(sizePolicy3);
        Label_Img->setMinimumSize(QSize(357, 300));
        Label_Img->setMaximumSize(QSize(357, 300));
        Label_Img->setSizeIncrement(QSize(0, 0));
        Label_Img->setPixmap(QPixmap(QString::fromUtf8(":/photo_of_grinder.png")));
        Label_Img->setScaledContents(true);

        horizontalLayout_12->addWidget(Label_Img);

        tabWidget_4 = new QTabWidget(Page_Main);
        tabWidget_4->setObjectName(QStringLiteral("tabWidget_4"));
        sizePolicy.setHeightForWidth(tabWidget_4->sizePolicy().hasHeightForWidth());
        tabWidget_4->setSizePolicy(sizePolicy);
        tabWidget_4->setMinimumSize(QSize(400, 290));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font1.setPointSize(14);
        font1.setBold(false);
        font1.setItalic(false);
        font1.setWeight(50);
        tabWidget_4->setFont(font1);
        tabWidget_4->setStyleSheet(QString::fromUtf8("font: 14pt \"\351\273\221\344\275\223\";"));
        tabWidget_4->setTabShape(QTabWidget::Triangular);
        mechanical_coordinate_4 = new QWidget();
        mechanical_coordinate_4->setObjectName(QStringLiteral("mechanical_coordinate_4"));
        horizontalLayout_11 = new QHBoxLayout(mechanical_coordinate_4);
        horizontalLayout_11->setSpacing(6);
        horizontalLayout_11->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_11->setObjectName(QStringLiteral("horizontalLayout_11"));
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        label_183 = new QLabel(mechanical_coordinate_4);
        label_183->setObjectName(QStringLiteral("label_183"));
        label_183->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_183);

        label_184 = new QLabel(mechanical_coordinate_4);
        label_184->setObjectName(QStringLiteral("label_184"));
        label_184->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_184);

        label_185 = new QLabel(mechanical_coordinate_4);
        label_185->setObjectName(QStringLiteral("label_185"));
        label_185->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_185);

        label_186 = new QLabel(mechanical_coordinate_4);
        label_186->setObjectName(QStringLiteral("label_186"));
        label_186->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_186);

        label_219 = new QLabel(mechanical_coordinate_4);
        label_219->setObjectName(QStringLiteral("label_219"));
        label_219->setAlignment(Qt::AlignCenter);

        verticalLayout->addWidget(label_219);


        horizontalLayout_2->addLayout(verticalLayout);

        verticalLayout_20 = new QVBoxLayout();
        verticalLayout_20->setSpacing(6);
        verticalLayout_20->setObjectName(QStringLiteral("verticalLayout_20"));
        Label_Mech_Cor_X = new QLabel(mechanical_coordinate_4);
        Label_Mech_Cor_X->setObjectName(QStringLiteral("Label_Mech_Cor_X"));
        Label_Mech_Cor_X->setStyleSheet(QString::fromUtf8("font: 16pt \"\351\273\221\344\275\223\";"));
        Label_Mech_Cor_X->setAlignment(Qt::AlignCenter);

        verticalLayout_20->addWidget(Label_Mech_Cor_X);

        Label_Mech_Cor_Y = new QLabel(mechanical_coordinate_4);
        Label_Mech_Cor_Y->setObjectName(QStringLiteral("Label_Mech_Cor_Y"));
        Label_Mech_Cor_Y->setStyleSheet(QString::fromUtf8("font: 16pt \"\351\273\221\344\275\223\";"));
        Label_Mech_Cor_Y->setAlignment(Qt::AlignCenter);

        verticalLayout_20->addWidget(Label_Mech_Cor_Y);

        Label_Mech_Cor_U = new QLabel(mechanical_coordinate_4);
        Label_Mech_Cor_U->setObjectName(QStringLiteral("Label_Mech_Cor_U"));
        Label_Mech_Cor_U->setStyleSheet(QString::fromUtf8("font: 16pt \"\351\273\221\344\275\223\";"));
        Label_Mech_Cor_U->setAlignment(Qt::AlignCenter);

        verticalLayout_20->addWidget(Label_Mech_Cor_U);

        Label_Mech_Cor_V = new QLabel(mechanical_coordinate_4);
        Label_Mech_Cor_V->setObjectName(QStringLiteral("Label_Mech_Cor_V"));
        Label_Mech_Cor_V->setStyleSheet(QString::fromUtf8("font: 16pt \"\351\273\221\344\275\223\";"));
        Label_Mech_Cor_V->setAlignment(Qt::AlignCenter);

        verticalLayout_20->addWidget(Label_Mech_Cor_V);

        Label_Mech_Cor_Z = new QLabel(mechanical_coordinate_4);
        Label_Mech_Cor_Z->setObjectName(QStringLiteral("Label_Mech_Cor_Z"));
        Label_Mech_Cor_Z->setStyleSheet(QString::fromUtf8("font: 16pt \"\351\273\221\344\275\223\";"));
        Label_Mech_Cor_Z->setAlignment(Qt::AlignCenter);

        verticalLayout_20->addWidget(Label_Mech_Cor_Z);


        horizontalLayout_2->addLayout(verticalLayout_20);

        verticalLayout_19 = new QVBoxLayout();
        verticalLayout_19->setSpacing(6);
        verticalLayout_19->setObjectName(QStringLiteral("verticalLayout_19"));
        label_15 = new QLabel(mechanical_coordinate_4);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setStyleSheet(QString::fromUtf8("font: 16pt \"\351\273\221\344\275\223\";"));

        verticalLayout_19->addWidget(label_15);

        label_16 = new QLabel(mechanical_coordinate_4);
        label_16->setObjectName(QStringLiteral("label_16"));
        label_16->setStyleSheet(QString::fromUtf8("font: 16pt \"\351\273\221\344\275\223\";"));

        verticalLayout_19->addWidget(label_16);

        label_17 = new QLabel(mechanical_coordinate_4);
        label_17->setObjectName(QStringLiteral("label_17"));
        label_17->setStyleSheet(QString::fromUtf8("font: 16pt \"\351\273\221\344\275\223\";"));

        verticalLayout_19->addWidget(label_17);

        label_19 = new QLabel(mechanical_coordinate_4);
        label_19->setObjectName(QStringLiteral("label_19"));
        label_19->setStyleSheet(QString::fromUtf8("font: 16pt \"\351\273\221\344\275\223\";"));

        verticalLayout_19->addWidget(label_19);

        label_20 = new QLabel(mechanical_coordinate_4);
        label_20->setObjectName(QStringLiteral("label_20"));
        label_20->setStyleSheet(QString::fromUtf8("font: 16pt \"\351\273\221\344\275\223\";"));

        verticalLayout_19->addWidget(label_20);


        horizontalLayout_2->addLayout(verticalLayout_19);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        Label__Motion_Status_X = new QLabel(mechanical_coordinate_4);
        Label__Motion_Status_X->setObjectName(QStringLiteral("Label__Motion_Status_X"));
        Label__Motion_Status_X->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(Label__Motion_Status_X);

        Label__Motion_Status_Y = new QLabel(mechanical_coordinate_4);
        Label__Motion_Status_Y->setObjectName(QStringLiteral("Label__Motion_Status_Y"));
        Label__Motion_Status_Y->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(Label__Motion_Status_Y);

        Label__Motion_Status_U = new QLabel(mechanical_coordinate_4);
        Label__Motion_Status_U->setObjectName(QStringLiteral("Label__Motion_Status_U"));
        Label__Motion_Status_U->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(Label__Motion_Status_U);

        Label__Motion_Status_V = new QLabel(mechanical_coordinate_4);
        Label__Motion_Status_V->setObjectName(QStringLiteral("Label__Motion_Status_V"));
        Label__Motion_Status_V->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(Label__Motion_Status_V);

        Label__Motion_Status_Z = new QLabel(mechanical_coordinate_4);
        Label__Motion_Status_Z->setObjectName(QStringLiteral("Label__Motion_Status_Z"));
        Label__Motion_Status_Z->setAlignment(Qt::AlignCenter);

        verticalLayout_2->addWidget(Label__Motion_Status_Z);


        horizontalLayout_2->addLayout(verticalLayout_2);

        horizontalLayout_2->setStretch(0, 1);
        horizontalLayout_2->setStretch(1, 2);
        horizontalLayout_2->setStretch(2, 1);
        horizontalLayout_2->setStretch(3, 2);

        horizontalLayout_11->addLayout(horizontalLayout_2);

        tabWidget_4->addTab(mechanical_coordinate_4, QString());
        manufacturing_coordinate_4 = new QWidget();
        manufacturing_coordinate_4->setObjectName(QStringLiteral("manufacturing_coordinate_4"));
        horizontalLayout_13 = new QHBoxLayout(manufacturing_coordinate_4);
        horizontalLayout_13->setSpacing(6);
        horizontalLayout_13->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_13->setObjectName(QStringLiteral("horizontalLayout_13"));
        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QStringLiteral("verticalLayout_4"));
        label_191 = new QLabel(manufacturing_coordinate_4);
        label_191->setObjectName(QStringLiteral("label_191"));
        label_191->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(label_191);

        label_188 = new QLabel(manufacturing_coordinate_4);
        label_188->setObjectName(QStringLiteral("label_188"));
        label_188->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(label_188);

        label_189 = new QLabel(manufacturing_coordinate_4);
        label_189->setObjectName(QStringLiteral("label_189"));
        label_189->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(label_189);

        label_192 = new QLabel(manufacturing_coordinate_4);
        label_192->setObjectName(QStringLiteral("label_192"));
        label_192->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(label_192);

        label_218 = new QLabel(manufacturing_coordinate_4);
        label_218->setObjectName(QStringLiteral("label_218"));
        label_218->setAlignment(Qt::AlignCenter);

        verticalLayout_4->addWidget(label_218);


        horizontalLayout_3->addLayout(verticalLayout_4);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        Label_X_Speed = new QLabel(manufacturing_coordinate_4);
        Label_X_Speed->setObjectName(QStringLiteral("Label_X_Speed"));
        Label_X_Speed->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(Label_X_Speed);

        Label_Y_Speed = new QLabel(manufacturing_coordinate_4);
        Label_Y_Speed->setObjectName(QStringLiteral("Label_Y_Speed"));
        Label_Y_Speed->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(Label_Y_Speed);

        Label_U_Speed = new QLabel(manufacturing_coordinate_4);
        Label_U_Speed->setObjectName(QStringLiteral("Label_U_Speed"));
        Label_U_Speed->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(Label_U_Speed);

        Label_V_Speed = new QLabel(manufacturing_coordinate_4);
        Label_V_Speed->setObjectName(QStringLiteral("Label_V_Speed"));
        Label_V_Speed->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(Label_V_Speed);

        Label_Z_Speed = new QLabel(manufacturing_coordinate_4);
        Label_Z_Speed->setObjectName(QStringLiteral("Label_Z_Speed"));
        Label_Z_Speed->setAlignment(Qt::AlignCenter);

        verticalLayout_3->addWidget(Label_Z_Speed);


        horizontalLayout_3->addLayout(verticalLayout_3);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QStringLiteral("verticalLayout_5"));
        Label_X_MSpeed = new QLabel(manufacturing_coordinate_4);
        Label_X_MSpeed->setObjectName(QStringLiteral("Label_X_MSpeed"));
        Label_X_MSpeed->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(Label_X_MSpeed);

        Label_Y_MSpeed = new QLabel(manufacturing_coordinate_4);
        Label_Y_MSpeed->setObjectName(QStringLiteral("Label_Y_MSpeed"));
        Label_Y_MSpeed->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(Label_Y_MSpeed);

        Label_U_MSpeed = new QLabel(manufacturing_coordinate_4);
        Label_U_MSpeed->setObjectName(QStringLiteral("Label_U_MSpeed"));
        Label_U_MSpeed->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(Label_U_MSpeed);

        Label_V_MSpeed = new QLabel(manufacturing_coordinate_4);
        Label_V_MSpeed->setObjectName(QStringLiteral("Label_V_MSpeed"));
        Label_V_MSpeed->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(Label_V_MSpeed);

        Label_Z_MSpeed = new QLabel(manufacturing_coordinate_4);
        Label_Z_MSpeed->setObjectName(QStringLiteral("Label_Z_MSpeed"));
        Label_Z_MSpeed->setAlignment(Qt::AlignCenter);

        verticalLayout_5->addWidget(Label_Z_MSpeed);


        horizontalLayout_3->addLayout(verticalLayout_5);

        verticalLayout_27 = new QVBoxLayout();
        verticalLayout_27->setSpacing(6);
        verticalLayout_27->setObjectName(QStringLiteral("verticalLayout_27"));
        label_21 = new QLabel(manufacturing_coordinate_4);
        label_21->setObjectName(QStringLiteral("label_21"));
        label_21->setStyleSheet(QString::fromUtf8("font: 16pt \"\351\273\221\344\275\223\";"));

        verticalLayout_27->addWidget(label_21);

        label_22 = new QLabel(manufacturing_coordinate_4);
        label_22->setObjectName(QStringLiteral("label_22"));
        label_22->setStyleSheet(QString::fromUtf8("font: 16pt \"\351\273\221\344\275\223\";"));

        verticalLayout_27->addWidget(label_22);

        label_23 = new QLabel(manufacturing_coordinate_4);
        label_23->setObjectName(QStringLiteral("label_23"));
        label_23->setStyleSheet(QString::fromUtf8("font: 16pt \"\351\273\221\344\275\223\";"));

        verticalLayout_27->addWidget(label_23);

        label_24 = new QLabel(manufacturing_coordinate_4);
        label_24->setObjectName(QStringLiteral("label_24"));
        label_24->setStyleSheet(QString::fromUtf8("font: 16pt \"\351\273\221\344\275\223\";"));

        verticalLayout_27->addWidget(label_24);

        label_25 = new QLabel(manufacturing_coordinate_4);
        label_25->setObjectName(QStringLiteral("label_25"));
        label_25->setStyleSheet(QString::fromUtf8("font: 16pt \"\351\273\221\344\275\223\";"));

        verticalLayout_27->addWidget(label_25);


        horizontalLayout_3->addLayout(verticalLayout_27);

        horizontalLayout_3->setStretch(0, 1);
        horizontalLayout_3->setStretch(1, 2);
        horizontalLayout_3->setStretch(2, 2);
        horizontalLayout_3->setStretch(3, 1);

        horizontalLayout_13->addLayout(horizontalLayout_3);

        tabWidget_4->addTab(manufacturing_coordinate_4, QString());
        part_coordinate_4 = new QWidget();
        part_coordinate_4->setObjectName(QStringLiteral("part_coordinate_4"));
        gridLayout_12 = new QGridLayout(part_coordinate_4);
        gridLayout_12->setSpacing(6);
        gridLayout_12->setContentsMargins(11, 11, 11, 11);
        gridLayout_12->setObjectName(QStringLiteral("gridLayout_12"));
        gridLayout_11 = new QGridLayout();
        gridLayout_11->setSpacing(6);
        gridLayout_11->setObjectName(QStringLiteral("gridLayout_11"));
        label_199 = new QLabel(part_coordinate_4);
        label_199->setObjectName(QStringLiteral("label_199"));

        gridLayout_11->addWidget(label_199, 0, 0, 1, 1);

        label_202 = new QLabel(part_coordinate_4);
        label_202->setObjectName(QStringLiteral("label_202"));

        gridLayout_11->addWidget(label_202, 1, 1, 1, 1);

        label_195 = new QLabel(part_coordinate_4);
        label_195->setObjectName(QStringLiteral("label_195"));

        gridLayout_11->addWidget(label_195, 0, 1, 1, 1);

        label_196 = new QLabel(part_coordinate_4);
        label_196->setObjectName(QStringLiteral("label_196"));

        gridLayout_11->addWidget(label_196, 1, 0, 1, 1);

        label_200 = new QLabel(part_coordinate_4);
        label_200->setObjectName(QStringLiteral("label_200"));

        gridLayout_11->addWidget(label_200, 3, 0, 1, 1);

        label_197 = new QLabel(part_coordinate_4);
        label_197->setObjectName(QStringLiteral("label_197"));

        gridLayout_11->addWidget(label_197, 2, 0, 1, 1);

        label_198 = new QLabel(part_coordinate_4);
        label_198->setObjectName(QStringLiteral("label_198"));

        gridLayout_11->addWidget(label_198, 2, 1, 1, 1);

        label_201 = new QLabel(part_coordinate_4);
        label_201->setObjectName(QStringLiteral("label_201"));

        gridLayout_11->addWidget(label_201, 3, 1, 1, 1);


        gridLayout_12->addLayout(gridLayout_11, 0, 0, 1, 1);

        frame_5 = new QFrame(part_coordinate_4);
        frame_5->setObjectName(QStringLiteral("frame_5"));
        frame_5->setMinimumSize(QSize(320, 120));
        frame_5->setStyleSheet(QStringLiteral("background-color: rgb(0, 0, 0);"));
        frame_5->setFrameShape(QFrame::Box);
        frame_5->setFrameShadow(QFrame::Sunken);
        gridLayout_17 = new QGridLayout(frame_5);
        gridLayout_17->setSpacing(6);
        gridLayout_17->setContentsMargins(11, 11, 11, 11);
        gridLayout_17->setObjectName(QStringLiteral("gridLayout_17"));
        label_176 = new QLabel(frame_5);
        label_176->setObjectName(QStringLiteral("label_176"));
        label_176->setFont(font1);
        label_176->setStyleSheet(QStringLiteral("color: rgb(0, 255, 0);"));

        gridLayout_17->addWidget(label_176, 0, 0, 1, 1);

        Label_date = new QLabel(frame_5);
        Label_date->setObjectName(QStringLiteral("Label_date"));
        Label_date->setFont(font1);
        Label_date->setStyleSheet(QStringLiteral("color: rgb(0, 255, 0);"));

        gridLayout_17->addWidget(Label_date, 0, 2, 1, 5);

        line_4 = new QFrame(frame_5);
        line_4->setObjectName(QStringLiteral("line_4"));
        QSizePolicy sizePolicy4(QSizePolicy::Minimum, QSizePolicy::Maximum);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(line_4->sizePolicy().hasHeightForWidth());
        line_4->setSizePolicy(sizePolicy4);
        line_4->setMinimumSize(QSize(340, 0));
        line_4->setMaximumSize(QSize(16777215, 3));
        line_4->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 0);"));
        line_4->setLineWidth(-2);
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);

        gridLayout_17->addWidget(line_4, 1, 0, 1, 7);

        label_177 = new QLabel(frame_5);
        label_177->setObjectName(QStringLiteral("label_177"));
        label_177->setMinimumSize(QSize(65, 0));
        label_177->setFont(font1);
        label_177->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));

        gridLayout_17->addWidget(label_177, 2, 0, 1, 1);

        Label_current_velocity = new QLabel(frame_5);
        Label_current_velocity->setObjectName(QStringLiteral("Label_current_velocity"));
        Label_current_velocity->setFont(font1);
        Label_current_velocity->setStyleSheet(QStringLiteral("color: rgb(0, 255, 0);"));

        gridLayout_17->addWidget(Label_current_velocity, 2, 1, 1, 2);

        label_164 = new QLabel(frame_5);
        label_164->setObjectName(QStringLiteral("label_164"));
        label_164->setMinimumSize(QSize(65, 0));
        label_164->setFont(font1);
        label_164->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));

        gridLayout_17->addWidget(label_164, 3, 0, 1, 1);

        Label_current_z_velocity = new QLabel(frame_5);
        Label_current_z_velocity->setObjectName(QStringLiteral("Label_current_z_velocity"));
        Label_current_z_velocity->setFont(font1);
        Label_current_z_velocity->setStyleSheet(QStringLiteral("color: rgb(0, 255, 0);"));

        gridLayout_17->addWidget(Label_current_z_velocity, 3, 1, 1, 1);

        label_171 = new QLabel(frame_5);
        label_171->setObjectName(QStringLiteral("label_171"));
        label_171->setFont(font1);
        label_171->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));

        gridLayout_17->addWidget(label_171, 4, 0, 1, 1);

        label_170 = new QLabel(frame_5);
        label_170->setObjectName(QStringLiteral("label_170"));
        label_170->setFont(font1);
        label_170->setStyleSheet(QStringLiteral("color: rgb(0, 255, 0);"));

        gridLayout_17->addWidget(label_170, 4, 1, 1, 1);

        label_172 = new QLabel(frame_5);
        label_172->setObjectName(QStringLiteral("label_172"));
        label_172->setFont(font1);
        label_172->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));

        gridLayout_17->addWidget(label_172, 4, 2, 1, 1);

        label_173 = new QLabel(frame_5);
        label_173->setObjectName(QStringLiteral("label_173"));
        label_173->setFont(font1);
        label_173->setStyleSheet(QStringLiteral("color: rgb(0, 255, 0);"));

        gridLayout_17->addWidget(label_173, 4, 3, 1, 1);

        label_166 = new QLabel(frame_5);
        label_166->setObjectName(QStringLiteral("label_166"));
        label_166->setMinimumSize(QSize(65, 0));
        label_166->setFont(font1);
        label_166->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));

        gridLayout_17->addWidget(label_166, 2, 4, 1, 1);

        label_168 = new QLabel(frame_5);
        label_168->setObjectName(QStringLiteral("label_168"));
        label_168->setMinimumSize(QSize(65, 0));
        label_168->setFont(font1);
        label_168->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));

        gridLayout_17->addWidget(label_168, 3, 4, 1, 1);

        label_175 = new QLabel(frame_5);
        label_175->setObjectName(QStringLiteral("label_175"));
        label_175->setFont(font1);
        label_175->setStyleSheet(QStringLiteral("color: rgb(255, 255, 255);"));

        gridLayout_17->addWidget(label_175, 4, 4, 1, 1);

        Label_current_feed_rate = new QLabel(frame_5);
        Label_current_feed_rate->setObjectName(QStringLiteral("Label_current_feed_rate"));
        Label_current_feed_rate->setFont(font1);
        Label_current_feed_rate->setStyleSheet(QStringLiteral("color: rgb(0, 255, 0);"));

        gridLayout_17->addWidget(Label_current_feed_rate, 2, 5, 1, 1);

        Label_current_loop_rate = new QLabel(frame_5);
        Label_current_loop_rate->setObjectName(QStringLiteral("Label_current_loop_rate"));
        Label_current_loop_rate->setFont(font1);
        Label_current_loop_rate->setStyleSheet(QStringLiteral("color: rgb(0, 255, 0);"));

        gridLayout_17->addWidget(Label_current_loop_rate, 3, 5, 1, 1);

        label_174 = new QLabel(frame_5);
        label_174->setObjectName(QStringLiteral("label_174"));
        label_174->setFont(font1);
        label_174->setStyleSheet(QStringLiteral("color: rgb(0, 255, 0);"));

        gridLayout_17->addWidget(label_174, 4, 5, 1, 1);


        gridLayout_12->addWidget(frame_5, 1, 0, 1, 1);

        tabWidget_4->addTab(part_coordinate_4, QString());
        vpspeed = new QWidget();
        vpspeed->setObjectName(QStringLiteral("vpspeed"));
        verticalLayout_29 = new QVBoxLayout(vpspeed);
        verticalLayout_29->setSpacing(6);
        verticalLayout_29->setContentsMargins(11, 11, 11, 11);
        verticalLayout_29->setObjectName(QStringLiteral("verticalLayout_29"));
        verticalLayout_28 = new QVBoxLayout();
        verticalLayout_28->setSpacing(6);
        verticalLayout_28->setObjectName(QStringLiteral("verticalLayout_28"));
        gridLayout = new QGridLayout();
        gridLayout->setSpacing(6);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        label_11 = new QLabel(vpspeed);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setStyleSheet(QString::fromUtf8("font: 16pt \"\351\273\221\344\275\223\";"));
        label_11->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_11, 0, 0, 1, 1);

        Label_XY_VPSPEED = new QLabel(vpspeed);
        Label_XY_VPSPEED->setObjectName(QStringLiteral("Label_XY_VPSPEED"));
        Label_XY_VPSPEED->setStyleSheet(QString::fromUtf8("font: 16pt \"\351\273\221\344\275\223\";"));
        Label_XY_VPSPEED->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(Label_XY_VPSPEED, 0, 1, 1, 1);

        label_26 = new QLabel(vpspeed);
        label_26->setObjectName(QStringLiteral("label_26"));
        label_26->setStyleSheet(QString::fromUtf8("font: 16pt \"\351\273\221\344\275\223\";"));

        gridLayout->addWidget(label_26, 0, 2, 1, 1);

        label_13 = new QLabel(vpspeed);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setStyleSheet(QString::fromUtf8("font: 16pt \"\351\273\221\344\275\223\";"));
        label_13->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(label_13, 1, 0, 1, 1);

        Label_UV_VPSPEED = new QLabel(vpspeed);
        Label_UV_VPSPEED->setObjectName(QStringLiteral("Label_UV_VPSPEED"));
        Label_UV_VPSPEED->setStyleSheet(QString::fromUtf8("font: 16pt \"\351\273\221\344\275\223\";"));
        Label_UV_VPSPEED->setAlignment(Qt::AlignCenter);

        gridLayout->addWidget(Label_UV_VPSPEED, 1, 1, 1, 1);

        label_27 = new QLabel(vpspeed);
        label_27->setObjectName(QStringLiteral("label_27"));
        label_27->setStyleSheet(QString::fromUtf8("font: 16pt \"\351\273\221\344\275\223\";"));

        gridLayout->addWidget(label_27, 1, 2, 1, 1);


        verticalLayout_28->addLayout(gridLayout);

        widget = new QWidget(vpspeed);
        widget->setObjectName(QStringLiteral("widget"));

        verticalLayout_28->addWidget(widget);

        verticalLayout_28->setStretch(0, 1);
        verticalLayout_28->setStretch(1, 1);

        verticalLayout_29->addLayout(verticalLayout_28);

        tabWidget_4->addTab(vpspeed, QString());

        horizontalLayout_12->addWidget(tabWidget_4);

        horizontalLayout_12->setStretch(0, 1);
        horizontalLayout_12->setStretch(1, 2);

        verticalLayout_25->addLayout(horizontalLayout_12);

        Stacked_Pages_Sub = new QStackedWidget(Page_Main);
        Stacked_Pages_Sub->setObjectName(QStringLiteral("Stacked_Pages_Sub"));
        QSizePolicy sizePolicy5(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(1);
        sizePolicy5.setHeightForWidth(Stacked_Pages_Sub->sizePolicy().hasHeightForWidth());
        Stacked_Pages_Sub->setSizePolicy(sizePolicy5);
        Stacked_Pages_Sub->setMinimumSize(QSize(0, 180));
        Stacked_Pages_Sub->setMaximumSize(QSize(16777215, 220));
        Stacked_Pages_Sub->setFrameShape(QFrame::Box);
        Page_Sub_Default = new QWidget();
        Page_Sub_Default->setObjectName(QStringLiteral("Page_Sub_Default"));
        Stacked_Pages_Sub->addWidget(Page_Sub_Default);
        Page_Sub_Grinder_Cha = new QWidget();
        Page_Sub_Grinder_Cha->setObjectName(QStringLiteral("Page_Sub_Grinder_Cha"));
        verticalLayout_6 = new QVBoxLayout(Page_Sub_Grinder_Cha);
        verticalLayout_6->setSpacing(6);
        verticalLayout_6->setContentsMargins(11, 11, 11, 11);
        verticalLayout_6->setObjectName(QStringLiteral("verticalLayout_6"));
        label_211 = new QLabel(Page_Sub_Grinder_Cha);
        label_211->setObjectName(QStringLiteral("label_211"));

        verticalLayout_6->addWidget(label_211);

        tableWidget_25 = new QTableWidget(Page_Sub_Grinder_Cha);
        if (tableWidget_25->columnCount() < 6)
            tableWidget_25->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        tableWidget_25->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        tableWidget_25->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        tableWidget_25->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        tableWidget_25->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        tableWidget_25->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        tableWidget_25->setHorizontalHeaderItem(5, __qtablewidgetitem5);
        if (tableWidget_25->rowCount() < 3)
            tableWidget_25->setRowCount(3);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        tableWidget_25->setVerticalHeaderItem(0, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        tableWidget_25->setVerticalHeaderItem(1, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        tableWidget_25->setVerticalHeaderItem(2, __qtablewidgetitem8);
        tableWidget_25->setObjectName(QStringLiteral("tableWidget_25"));

        verticalLayout_6->addWidget(tableWidget_25);

        Stacked_Pages_Sub->addWidget(Page_Sub_Grinder_Cha);
        Page_Sub_Upper_Deviation = new QWidget();
        Page_Sub_Upper_Deviation->setObjectName(QStringLiteral("Page_Sub_Upper_Deviation"));
        verticalLayout_7 = new QVBoxLayout(Page_Sub_Upper_Deviation);
        verticalLayout_7->setSpacing(6);
        verticalLayout_7->setContentsMargins(11, 11, 11, 11);
        verticalLayout_7->setObjectName(QStringLiteral("verticalLayout_7"));
        label_212 = new QLabel(Page_Sub_Upper_Deviation);
        label_212->setObjectName(QStringLiteral("label_212"));

        verticalLayout_7->addWidget(label_212);

        tableWidget_26 = new QTableWidget(Page_Sub_Upper_Deviation);
        if (tableWidget_26->columnCount() < 6)
            tableWidget_26->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        tableWidget_26->setHorizontalHeaderItem(0, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        tableWidget_26->setHorizontalHeaderItem(1, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        tableWidget_26->setHorizontalHeaderItem(2, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        tableWidget_26->setHorizontalHeaderItem(3, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        tableWidget_26->setHorizontalHeaderItem(4, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        tableWidget_26->setHorizontalHeaderItem(5, __qtablewidgetitem14);
        if (tableWidget_26->rowCount() < 4)
            tableWidget_26->setRowCount(4);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        tableWidget_26->setVerticalHeaderItem(0, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        tableWidget_26->setVerticalHeaderItem(1, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        tableWidget_26->setVerticalHeaderItem(2, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        tableWidget_26->setVerticalHeaderItem(3, __qtablewidgetitem18);
        tableWidget_26->setObjectName(QStringLiteral("tableWidget_26"));

        verticalLayout_7->addWidget(tableWidget_26);

        Stacked_Pages_Sub->addWidget(Page_Sub_Upper_Deviation);
        Page_Sub_Lower_Deviation = new QWidget();
        Page_Sub_Lower_Deviation->setObjectName(QStringLiteral("Page_Sub_Lower_Deviation"));
        verticalLayout_9 = new QVBoxLayout(Page_Sub_Lower_Deviation);
        verticalLayout_9->setSpacing(6);
        verticalLayout_9->setContentsMargins(11, 11, 11, 11);
        verticalLayout_9->setObjectName(QStringLiteral("verticalLayout_9"));
        label_213 = new QLabel(Page_Sub_Lower_Deviation);
        label_213->setObjectName(QStringLiteral("label_213"));

        verticalLayout_9->addWidget(label_213);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        tableWidget_27 = new QTableWidget(Page_Sub_Lower_Deviation);
        if (tableWidget_27->columnCount() < 6)
            tableWidget_27->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        tableWidget_27->setHorizontalHeaderItem(0, __qtablewidgetitem19);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        tableWidget_27->setHorizontalHeaderItem(1, __qtablewidgetitem20);
        QTableWidgetItem *__qtablewidgetitem21 = new QTableWidgetItem();
        tableWidget_27->setHorizontalHeaderItem(2, __qtablewidgetitem21);
        QTableWidgetItem *__qtablewidgetitem22 = new QTableWidgetItem();
        tableWidget_27->setHorizontalHeaderItem(3, __qtablewidgetitem22);
        QTableWidgetItem *__qtablewidgetitem23 = new QTableWidgetItem();
        tableWidget_27->setHorizontalHeaderItem(4, __qtablewidgetitem23);
        QTableWidgetItem *__qtablewidgetitem24 = new QTableWidgetItem();
        tableWidget_27->setHorizontalHeaderItem(5, __qtablewidgetitem24);
        if (tableWidget_27->rowCount() < 4)
            tableWidget_27->setRowCount(4);
        QTableWidgetItem *__qtablewidgetitem25 = new QTableWidgetItem();
        tableWidget_27->setVerticalHeaderItem(0, __qtablewidgetitem25);
        QTableWidgetItem *__qtablewidgetitem26 = new QTableWidgetItem();
        tableWidget_27->setVerticalHeaderItem(1, __qtablewidgetitem26);
        QTableWidgetItem *__qtablewidgetitem27 = new QTableWidgetItem();
        tableWidget_27->setVerticalHeaderItem(2, __qtablewidgetitem27);
        QTableWidgetItem *__qtablewidgetitem28 = new QTableWidgetItem();
        tableWidget_27->setVerticalHeaderItem(3, __qtablewidgetitem28);
        tableWidget_27->setObjectName(QStringLiteral("tableWidget_27"));

        horizontalLayout_4->addWidget(tableWidget_27);

        verticalLayout_8 = new QVBoxLayout();
        verticalLayout_8->setSpacing(0);
        verticalLayout_8->setObjectName(QStringLiteral("verticalLayout_8"));
        cB_offset_axis = new QComboBox(Page_Sub_Lower_Deviation);
        cB_offset_axis->addItem(QString());
        cB_offset_axis->addItem(QString());
        cB_offset_axis->addItem(QString());
        cB_offset_axis->addItem(QString());
        cB_offset_axis->addItem(QString());
        cB_offset_axis->setObjectName(QStringLiteral("cB_offset_axis"));
        cB_offset_axis->setMinimumSize(QSize(0, 40));

        verticalLayout_8->addWidget(cB_offset_axis);

        lineEdit_offset_dis = new QLineEdit(Page_Sub_Lower_Deviation);
        lineEdit_offset_dis->setObjectName(QStringLiteral("lineEdit_offset_dis"));
        lineEdit_offset_dis->setMinimumSize(QSize(0, 40));

        verticalLayout_8->addWidget(lineEdit_offset_dis);

        pB_Start_offset = new QPushButton(Page_Sub_Lower_Deviation);
        pB_Start_offset->setObjectName(QStringLiteral("pB_Start_offset"));
        pB_Start_offset->setMinimumSize(QSize(0, 50));

        verticalLayout_8->addWidget(pB_Start_offset);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_8->addItem(verticalSpacer_2);


        horizontalLayout_4->addLayout(verticalLayout_8);

        horizontalLayout_4->setStretch(0, 5);
        horizontalLayout_4->setStretch(1, 1);

        verticalLayout_9->addLayout(horizontalLayout_4);

        Stacked_Pages_Sub->addWidget(Page_Sub_Lower_Deviation);
        Page_Sub_Compensation = new QWidget();
        Page_Sub_Compensation->setObjectName(QStringLiteral("Page_Sub_Compensation"));
        verticalLayout_13 = new QVBoxLayout(Page_Sub_Compensation);
        verticalLayout_13->setSpacing(6);
        verticalLayout_13->setContentsMargins(11, 11, 11, 11);
        verticalLayout_13->setObjectName(QStringLiteral("verticalLayout_13"));
        label_217 = new QLabel(Page_Sub_Compensation);
        label_217->setObjectName(QStringLiteral("label_217"));

        verticalLayout_13->addWidget(label_217);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setSpacing(6);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        tableWidget_28 = new QTableWidget(Page_Sub_Compensation);
        tableWidget_28->setObjectName(QStringLiteral("tableWidget_28"));

        horizontalLayout_5->addWidget(tableWidget_28);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        lineEdit_tool_compensation = new QLineEdit(Page_Sub_Compensation);
        lineEdit_tool_compensation->setObjectName(QStringLiteral("lineEdit_tool_compensation"));

        horizontalLayout->addWidget(lineEdit_tool_compensation);

        pushButton_write_tool_compensation = new QPushButton(Page_Sub_Compensation);
        pushButton_write_tool_compensation->setObjectName(QStringLiteral("pushButton_write_tool_compensation"));

        horizontalLayout->addWidget(pushButton_write_tool_compensation);


        horizontalLayout_5->addLayout(horizontalLayout);


        verticalLayout_13->addLayout(horizontalLayout_5);

        Stacked_Pages_Sub->addWidget(Page_Sub_Compensation);
        Page_Sub_Zero_Offset = new QWidget();
        Page_Sub_Zero_Offset->setObjectName(QStringLiteral("Page_Sub_Zero_Offset"));
        gridLayout_3 = new QGridLayout(Page_Sub_Zero_Offset);
        gridLayout_3->setSpacing(6);
        gridLayout_3->setContentsMargins(11, 11, 11, 11);
        gridLayout_3->setObjectName(QStringLiteral("gridLayout_3"));
        tableWidget_29 = new QTableWidget(Page_Sub_Zero_Offset);
        if (tableWidget_29->columnCount() < 5)
            tableWidget_29->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem29 = new QTableWidgetItem();
        tableWidget_29->setHorizontalHeaderItem(0, __qtablewidgetitem29);
        QTableWidgetItem *__qtablewidgetitem30 = new QTableWidgetItem();
        tableWidget_29->setHorizontalHeaderItem(1, __qtablewidgetitem30);
        QTableWidgetItem *__qtablewidgetitem31 = new QTableWidgetItem();
        tableWidget_29->setHorizontalHeaderItem(2, __qtablewidgetitem31);
        QTableWidgetItem *__qtablewidgetitem32 = new QTableWidgetItem();
        tableWidget_29->setHorizontalHeaderItem(3, __qtablewidgetitem32);
        QTableWidgetItem *__qtablewidgetitem33 = new QTableWidgetItem();
        tableWidget_29->setHorizontalHeaderItem(4, __qtablewidgetitem33);
        if (tableWidget_29->rowCount() < 4)
            tableWidget_29->setRowCount(4);
        QTableWidgetItem *__qtablewidgetitem34 = new QTableWidgetItem();
        tableWidget_29->setVerticalHeaderItem(0, __qtablewidgetitem34);
        QTableWidgetItem *__qtablewidgetitem35 = new QTableWidgetItem();
        tableWidget_29->setVerticalHeaderItem(1, __qtablewidgetitem35);
        QTableWidgetItem *__qtablewidgetitem36 = new QTableWidgetItem();
        tableWidget_29->setVerticalHeaderItem(2, __qtablewidgetitem36);
        QTableWidgetItem *__qtablewidgetitem37 = new QTableWidgetItem();
        tableWidget_29->setVerticalHeaderItem(3, __qtablewidgetitem37);
        tableWidget_29->setObjectName(QStringLiteral("tableWidget_29"));

        gridLayout_3->addWidget(tableWidget_29, 0, 0, 1, 1);

        Stacked_Pages_Sub->addWidget(Page_Sub_Zero_Offset);
        Page_Sub_Coordinate_Setting = new QWidget();
        Page_Sub_Coordinate_Setting->setObjectName(QStringLiteral("Page_Sub_Coordinate_Setting"));
        horizontalLayout_6 = new QHBoxLayout(Page_Sub_Coordinate_Setting);
        horizontalLayout_6->setSpacing(6);
        horizontalLayout_6->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_6->setObjectName(QStringLiteral("horizontalLayout_6"));
        formLayout = new QFormLayout();
        formLayout->setSpacing(6);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        pushButton_17 = new QPushButton(Page_Sub_Coordinate_Setting);
        pushButton_17->setObjectName(QStringLiteral("pushButton_17"));
        pushButton_17->setMinimumSize(QSize(0, 39));

        formLayout->setWidget(0, QFormLayout::LabelRole, pushButton_17);

        pushButton_18 = new QPushButton(Page_Sub_Coordinate_Setting);
        pushButton_18->setObjectName(QStringLiteral("pushButton_18"));
        pushButton_18->setMinimumSize(QSize(0, 39));

        formLayout->setWidget(1, QFormLayout::LabelRole, pushButton_18);

        pushButton_19 = new QPushButton(Page_Sub_Coordinate_Setting);
        pushButton_19->setObjectName(QStringLiteral("pushButton_19"));
        pushButton_19->setMinimumSize(QSize(0, 39));

        formLayout->setWidget(2, QFormLayout::LabelRole, pushButton_19);

        pushButton_20 = new QPushButton(Page_Sub_Coordinate_Setting);
        pushButton_20->setObjectName(QStringLiteral("pushButton_20"));
        pushButton_20->setMinimumSize(QSize(0, 39));

        formLayout->setWidget(3, QFormLayout::LabelRole, pushButton_20);

        pushButton_21 = new QPushButton(Page_Sub_Coordinate_Setting);
        pushButton_21->setObjectName(QStringLiteral("pushButton_21"));
        pushButton_21->setMinimumSize(QSize(0, 39));

        formLayout->setWidget(4, QFormLayout::LabelRole, pushButton_21);

        lineEdit_Coordinate_Setting_X = new QLineEdit(Page_Sub_Coordinate_Setting);
        lineEdit_Coordinate_Setting_X->setObjectName(QStringLiteral("lineEdit_Coordinate_Setting_X"));
        lineEdit_Coordinate_Setting_X->setMinimumSize(QSize(0, 40));

        formLayout->setWidget(0, QFormLayout::FieldRole, lineEdit_Coordinate_Setting_X);

        lineEdit_Coordinate_Setting_Y = new QLineEdit(Page_Sub_Coordinate_Setting);
        lineEdit_Coordinate_Setting_Y->setObjectName(QStringLiteral("lineEdit_Coordinate_Setting_Y"));
        lineEdit_Coordinate_Setting_Y->setMinimumSize(QSize(0, 40));

        formLayout->setWidget(1, QFormLayout::FieldRole, lineEdit_Coordinate_Setting_Y);

        lineEdit_Coordinate_Setting_U = new QLineEdit(Page_Sub_Coordinate_Setting);
        lineEdit_Coordinate_Setting_U->setObjectName(QStringLiteral("lineEdit_Coordinate_Setting_U"));
        lineEdit_Coordinate_Setting_U->setMinimumSize(QSize(0, 40));

        formLayout->setWidget(2, QFormLayout::FieldRole, lineEdit_Coordinate_Setting_U);

        lineEdit_Coordinate_Setting_V = new QLineEdit(Page_Sub_Coordinate_Setting);
        lineEdit_Coordinate_Setting_V->setObjectName(QStringLiteral("lineEdit_Coordinate_Setting_V"));
        lineEdit_Coordinate_Setting_V->setMinimumSize(QSize(0, 40));

        formLayout->setWidget(3, QFormLayout::FieldRole, lineEdit_Coordinate_Setting_V);

        lineEdit_Coordinate_Setting_Z = new QLineEdit(Page_Sub_Coordinate_Setting);
        lineEdit_Coordinate_Setting_Z->setObjectName(QStringLiteral("lineEdit_Coordinate_Setting_Z"));
        lineEdit_Coordinate_Setting_Z->setMinimumSize(QSize(0, 40));

        formLayout->setWidget(4, QFormLayout::FieldRole, lineEdit_Coordinate_Setting_Z);


        horizontalLayout_6->addLayout(formLayout);

        verticalLayout_14 = new QVBoxLayout();
        verticalLayout_14->setSpacing(6);
        verticalLayout_14->setObjectName(QStringLiteral("verticalLayout_14"));
        splitter_14 = new QSplitter(Page_Sub_Coordinate_Setting);
        splitter_14->setObjectName(QStringLiteral("splitter_14"));
        splitter_14->setOrientation(Qt::Vertical);
        label = new QLabel(splitter_14);
        label->setObjectName(QStringLiteral("label"));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font2.setPointSize(14);
        label->setFont(font2);
        splitter_14->addWidget(label);
        comboBox_Coodinate_Setting = new QComboBox(splitter_14);
        comboBox_Coodinate_Setting->addItem(QString());
        comboBox_Coodinate_Setting->addItem(QString());
        comboBox_Coodinate_Setting->addItem(QString());
        comboBox_Coodinate_Setting->addItem(QString());
        comboBox_Coodinate_Setting->setObjectName(QStringLiteral("comboBox_Coodinate_Setting"));
        splitter_14->addWidget(comboBox_Coodinate_Setting);

        verticalLayout_14->addWidget(splitter_14);

        splitter_15 = new QSplitter(Page_Sub_Coordinate_Setting);
        splitter_15->setObjectName(QStringLiteral("splitter_15"));
        splitter_15->setOrientation(Qt::Vertical);
        pB_Coordinate_Setting_Reset = new QPushButton(splitter_15);
        pB_Coordinate_Setting_Reset->setObjectName(QStringLiteral("pB_Coordinate_Setting_Reset"));
        splitter_15->addWidget(pB_Coordinate_Setting_Reset);
        pB_Coordinate_Setting_Load = new QPushButton(splitter_15);
        pB_Coordinate_Setting_Load->setObjectName(QStringLiteral("pB_Coordinate_Setting_Load"));
        splitter_15->addWidget(pB_Coordinate_Setting_Load);

        verticalLayout_14->addWidget(splitter_15);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_14->addItem(verticalSpacer_3);


        horizontalLayout_6->addLayout(verticalLayout_14);

        Stacked_Pages_Sub->addWidget(Page_Sub_Coordinate_Setting);
        Page_Sub_Zero_Return = new QWidget();
        Page_Sub_Zero_Return->setObjectName(QStringLiteral("Page_Sub_Zero_Return"));
        gridLayout_4 = new QGridLayout(Page_Sub_Zero_Return);
        gridLayout_4->setSpacing(6);
        gridLayout_4->setContentsMargins(11, 11, 11, 11);
        gridLayout_4->setObjectName(QStringLiteral("gridLayout_4"));
        splitter_9 = new QSplitter(Page_Sub_Zero_Return);
        splitter_9->setObjectName(QStringLiteral("splitter_9"));
        splitter_9->setOrientation(Qt::Horizontal);
        splitter = new QSplitter(splitter_9);
        splitter->setObjectName(QStringLiteral("splitter"));
        splitter->setOrientation(Qt::Vertical);
        label_6 = new QLabel(splitter);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setMaximumSize(QSize(16777215, 90));
        QFont font3;
        font3.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font3.setPointSize(20);
        label_6->setFont(font3);
        label_6->setFrameShape(QFrame::Box);
        label_6->setAlignment(Qt::AlignCenter);
        splitter->addWidget(label_6);
        label_Zero_Return_1 = new QLabel(splitter);
        label_Zero_Return_1->setObjectName(QStringLiteral("label_Zero_Return_1"));
        QFont font4;
        font4.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font4.setPointSize(12);
        label_Zero_Return_1->setFont(font4);
        label_Zero_Return_1->setFrameShape(QFrame::Box);
        label_Zero_Return_1->setAlignment(Qt::AlignCenter);
        splitter->addWidget(label_Zero_Return_1);
        splitter_9->addWidget(splitter);
        splitter_6 = new QSplitter(splitter_9);
        splitter_6->setObjectName(QStringLiteral("splitter_6"));
        splitter_6->setOrientation(Qt::Vertical);
        label_10 = new QLabel(splitter_6);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setMaximumSize(QSize(16777215, 90));
        label_10->setFont(font3);
        label_10->setFrameShape(QFrame::Box);
        label_10->setAlignment(Qt::AlignCenter);
        splitter_6->addWidget(label_10);
        label_Zero_Return_2 = new QLabel(splitter_6);
        label_Zero_Return_2->setObjectName(QStringLiteral("label_Zero_Return_2"));
        label_Zero_Return_2->setFont(font4);
        label_Zero_Return_2->setFrameShape(QFrame::Box);
        label_Zero_Return_2->setAlignment(Qt::AlignCenter);
        splitter_6->addWidget(label_Zero_Return_2);
        splitter_9->addWidget(splitter_6);
        splitter_7 = new QSplitter(splitter_9);
        splitter_7->setObjectName(QStringLiteral("splitter_7"));
        splitter_7->setOrientation(Qt::Vertical);
        label_12 = new QLabel(splitter_7);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setMaximumSize(QSize(16777215, 90));
        label_12->setFont(font3);
        label_12->setFrameShape(QFrame::Box);
        label_12->setAlignment(Qt::AlignCenter);
        splitter_7->addWidget(label_12);
        label_Zero_Return_3 = new QLabel(splitter_7);
        label_Zero_Return_3->setObjectName(QStringLiteral("label_Zero_Return_3"));
        label_Zero_Return_3->setFont(font4);
        label_Zero_Return_3->setFrameShape(QFrame::Box);
        label_Zero_Return_3->setAlignment(Qt::AlignCenter);
        splitter_7->addWidget(label_Zero_Return_3);
        splitter_9->addWidget(splitter_7);
        splitter_8 = new QSplitter(splitter_9);
        splitter_8->setObjectName(QStringLiteral("splitter_8"));
        splitter_8->setOrientation(Qt::Vertical);
        label_14 = new QLabel(splitter_8);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setMaximumSize(QSize(16777215, 90));
        label_14->setFont(font3);
        label_14->setFrameShape(QFrame::Box);
        label_14->setAlignment(Qt::AlignCenter);
        splitter_8->addWidget(label_14);
        label_Zero_Return_4 = new QLabel(splitter_8);
        label_Zero_Return_4->setObjectName(QStringLiteral("label_Zero_Return_4"));
        label_Zero_Return_4->setFont(font4);
        label_Zero_Return_4->setFrameShape(QFrame::Box);
        label_Zero_Return_4->setAlignment(Qt::AlignCenter);
        splitter_8->addWidget(label_Zero_Return_4);
        splitter_9->addWidget(splitter_8);
        splitter_10 = new QSplitter(splitter_9);
        splitter_10->setObjectName(QStringLiteral("splitter_10"));
        splitter_10->setOrientation(Qt::Vertical);
        label_18 = new QLabel(splitter_10);
        label_18->setObjectName(QStringLiteral("label_18"));
        label_18->setMaximumSize(QSize(16777215, 90));
        label_18->setFont(font3);
        label_18->setFrameShape(QFrame::Box);
        label_18->setAlignment(Qt::AlignCenter);
        splitter_10->addWidget(label_18);
        label_Zero_Return_5 = new QLabel(splitter_10);
        label_Zero_Return_5->setObjectName(QStringLiteral("label_Zero_Return_5"));
        label_Zero_Return_5->setFont(font4);
        label_Zero_Return_5->setFrameShape(QFrame::Box);
        label_Zero_Return_5->setAlignment(Qt::AlignCenter);
        splitter_10->addWidget(label_Zero_Return_5);
        splitter_9->addWidget(splitter_10);

        gridLayout_4->addWidget(splitter_9, 1, 2, 1, 1);

        splitter_5 = new QSplitter(Page_Sub_Zero_Return);
        splitter_5->setObjectName(QStringLiteral("splitter_5"));
        splitter_5->setOrientation(Qt::Vertical);
        pB_Zero_Return_Reset = new QPushButton(splitter_5);
        pB_Zero_Return_Reset->setObjectName(QStringLiteral("pB_Zero_Return_Reset"));
        pB_Zero_Return_Reset->setMaximumSize(QSize(16777215, 50));
        splitter_5->addWidget(pB_Zero_Return_Reset);
        pB_Zero_Return_Load = new QPushButton(splitter_5);
        pB_Zero_Return_Load->setObjectName(QStringLiteral("pB_Zero_Return_Load"));
        pB_Zero_Return_Load->setMaximumSize(QSize(16777215, 50));
        splitter_5->addWidget(pB_Zero_Return_Load);

        gridLayout_4->addWidget(splitter_5, 1, 3, 1, 1);

        label_8 = new QLabel(Page_Sub_Zero_Return);
        label_8->setObjectName(QStringLiteral("label_8"));
        QFont font5;
        font5.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font5.setPointSize(16);
        label_8->setFont(font5);

        gridLayout_4->addWidget(label_8, 0, 2, 1, 1);

        verticalLayout_10 = new QVBoxLayout();
        verticalLayout_10->setSpacing(6);
        verticalLayout_10->setObjectName(QStringLiteral("verticalLayout_10"));
        pB_Zero_Return_X = new QPushButton(Page_Sub_Zero_Return);
        pB_Zero_Return_X->setObjectName(QStringLiteral("pB_Zero_Return_X"));
        pB_Zero_Return_X->setMinimumSize(QSize(0, 35));

        verticalLayout_10->addWidget(pB_Zero_Return_X);

        pB_Zero_Return_Y = new QPushButton(Page_Sub_Zero_Return);
        pB_Zero_Return_Y->setObjectName(QStringLiteral("pB_Zero_Return_Y"));
        pB_Zero_Return_Y->setMinimumSize(QSize(0, 35));

        verticalLayout_10->addWidget(pB_Zero_Return_Y);

        pB_Zero_Return_U = new QPushButton(Page_Sub_Zero_Return);
        pB_Zero_Return_U->setObjectName(QStringLiteral("pB_Zero_Return_U"));
        pB_Zero_Return_U->setMinimumSize(QSize(0, 35));

        verticalLayout_10->addWidget(pB_Zero_Return_U);

        pB_Zero_Return_V = new QPushButton(Page_Sub_Zero_Return);
        pB_Zero_Return_V->setObjectName(QStringLiteral("pB_Zero_Return_V"));
        pB_Zero_Return_V->setMinimumSize(QSize(0, 35));

        verticalLayout_10->addWidget(pB_Zero_Return_V);

        pB_Zero_Return_Z = new QPushButton(Page_Sub_Zero_Return);
        pB_Zero_Return_Z->setObjectName(QStringLiteral("pB_Zero_Return_Z"));
        pB_Zero_Return_Z->setMinimumSize(QSize(0, 35));

        verticalLayout_10->addWidget(pB_Zero_Return_Z);


        gridLayout_4->addLayout(verticalLayout_10, 1, 1, 1, 1);

        Stacked_Pages_Sub->addWidget(Page_Sub_Zero_Return);
        Page_Sub_Absolute_Mov = new QWidget();
        Page_Sub_Absolute_Mov->setObjectName(QStringLiteral("Page_Sub_Absolute_Mov"));
        horizontalLayout_7 = new QHBoxLayout(Page_Sub_Absolute_Mov);
        horizontalLayout_7->setSpacing(6);
        horizontalLayout_7->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_7->setObjectName(QStringLiteral("horizontalLayout_7"));
        tableWidget = new QTableWidget(Page_Sub_Absolute_Mov);
        if (tableWidget->columnCount() < 3)
            tableWidget->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem38 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(0, __qtablewidgetitem38);
        QTableWidgetItem *__qtablewidgetitem39 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(1, __qtablewidgetitem39);
        QTableWidgetItem *__qtablewidgetitem40 = new QTableWidgetItem();
        tableWidget->setHorizontalHeaderItem(2, __qtablewidgetitem40);
        if (tableWidget->rowCount() < 5)
            tableWidget->setRowCount(5);
        QTableWidgetItem *__qtablewidgetitem41 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(0, __qtablewidgetitem41);
        QTableWidgetItem *__qtablewidgetitem42 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(1, __qtablewidgetitem42);
        QTableWidgetItem *__qtablewidgetitem43 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(2, __qtablewidgetitem43);
        QTableWidgetItem *__qtablewidgetitem44 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(3, __qtablewidgetitem44);
        QTableWidgetItem *__qtablewidgetitem45 = new QTableWidgetItem();
        tableWidget->setVerticalHeaderItem(4, __qtablewidgetitem45);
        QTableWidgetItem *__qtablewidgetitem46 = new QTableWidgetItem();
        tableWidget->setItem(0, 0, __qtablewidgetitem46);
        QTableWidgetItem *__qtablewidgetitem47 = new QTableWidgetItem();
        tableWidget->setItem(0, 1, __qtablewidgetitem47);
        QTableWidgetItem *__qtablewidgetitem48 = new QTableWidgetItem();
        tableWidget->setItem(0, 2, __qtablewidgetitem48);
        QTableWidgetItem *__qtablewidgetitem49 = new QTableWidgetItem();
        tableWidget->setItem(1, 0, __qtablewidgetitem49);
        QTableWidgetItem *__qtablewidgetitem50 = new QTableWidgetItem();
        tableWidget->setItem(1, 1, __qtablewidgetitem50);
        QTableWidgetItem *__qtablewidgetitem51 = new QTableWidgetItem();
        tableWidget->setItem(1, 2, __qtablewidgetitem51);
        QTableWidgetItem *__qtablewidgetitem52 = new QTableWidgetItem();
        tableWidget->setItem(2, 0, __qtablewidgetitem52);
        QTableWidgetItem *__qtablewidgetitem53 = new QTableWidgetItem();
        tableWidget->setItem(2, 1, __qtablewidgetitem53);
        QTableWidgetItem *__qtablewidgetitem54 = new QTableWidgetItem();
        tableWidget->setItem(2, 2, __qtablewidgetitem54);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));

        horizontalLayout_7->addWidget(tableWidget);

        gridLayout_5 = new QGridLayout();
        gridLayout_5->setSpacing(6);
        gridLayout_5->setObjectName(QStringLiteral("gridLayout_5"));
        lineEdit_7 = new QLineEdit(Page_Sub_Absolute_Mov);
        lineEdit_7->setObjectName(QStringLiteral("lineEdit_7"));

        gridLayout_5->addWidget(lineEdit_7, 0, 1, 1, 2);

        label_2 = new QLabel(Page_Sub_Absolute_Mov);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setFont(font4);

        gridLayout_5->addWidget(label_2, 0, 0, 1, 1);

        pushButton_2 = new QPushButton(Page_Sub_Absolute_Mov);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setMinimumSize(QSize(0, 40));

        gridLayout_5->addWidget(pushButton_2, 1, 2, 1, 1);

        pushButton = new QPushButton(Page_Sub_Absolute_Mov);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setMinimumSize(QSize(0, 40));

        gridLayout_5->addWidget(pushButton, 1, 0, 1, 1);

        verticalSpacer_4 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_5->addItem(verticalSpacer_4, 2, 0, 1, 1);


        horizontalLayout_7->addLayout(gridLayout_5);

        Stacked_Pages_Sub->addWidget(Page_Sub_Absolute_Mov);
        Page_Sub_Relative_Mov = new QWidget();
        Page_Sub_Relative_Mov->setObjectName(QStringLiteral("Page_Sub_Relative_Mov"));
        gridLayout_6 = new QGridLayout(Page_Sub_Relative_Mov);
        gridLayout_6->setSpacing(6);
        gridLayout_6->setContentsMargins(11, 11, 11, 11);
        gridLayout_6->setObjectName(QStringLiteral("gridLayout_6"));
        textBrowser = new QTextBrowser(Page_Sub_Relative_Mov);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setMaximumSize(QSize(200, 16777215));
        QFont font6;
        font6.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        textBrowser->setFont(font6);

        gridLayout_6->addWidget(textBrowser, 0, 0, 1, 2);

        label_3 = new QLabel(Page_Sub_Relative_Mov);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setFrameShape(QFrame::Box);
        label_3->setPixmap(QPixmap(QString::fromUtf8(":/track.JPG")));
        label_3->setScaledContents(true);

        gridLayout_6->addWidget(label_3, 0, 2, 2, 1);

        pushButton_3 = new QPushButton(Page_Sub_Relative_Mov);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setMaximumSize(QSize(90, 16777215));

        gridLayout_6->addWidget(pushButton_3, 1, 0, 1, 1);

        pushButton_4 = new QPushButton(Page_Sub_Relative_Mov);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setMaximumSize(QSize(90, 16777215));

        gridLayout_6->addWidget(pushButton_4, 1, 1, 1, 1);

        Stacked_Pages_Sub->addWidget(Page_Sub_Relative_Mov);
        Page_Sub_M_Order = new QWidget();
        Page_Sub_M_Order->setObjectName(QStringLiteral("Page_Sub_M_Order"));
        gridLayout_7 = new QGridLayout(Page_Sub_M_Order);
        gridLayout_7->setSpacing(6);
        gridLayout_7->setContentsMargins(11, 11, 11, 11);
        gridLayout_7->setObjectName(QStringLiteral("gridLayout_7"));
        textBrowser_2 = new QTextBrowser(Page_Sub_M_Order);
        textBrowser_2->setObjectName(QStringLiteral("textBrowser_2"));
        textBrowser_2->setMinimumSize(QSize(150, 0));
        textBrowser_2->setMaximumSize(QSize(400, 16777215));
        textBrowser_2->setFont(font6);

        gridLayout_7->addWidget(textBrowser_2, 0, 0, 1, 1);

        label_5 = new QLabel(Page_Sub_M_Order);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setFrameShape(QFrame::Box);
        label_5->setPixmap(QPixmap(QString::fromUtf8(":/track.JPG")));
        label_5->setScaledContents(true);

        gridLayout_7->addWidget(label_5, 0, 1, 2, 1);

        pushButton_5 = new QPushButton(Page_Sub_M_Order);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setMaximumSize(QSize(400, 16777215));

        gridLayout_7->addWidget(pushButton_5, 1, 0, 1, 1);

        Stacked_Pages_Sub->addWidget(Page_Sub_M_Order);
        Page_Sub_F_Order = new QWidget();
        Page_Sub_F_Order->setObjectName(QStringLiteral("Page_Sub_F_Order"));
        verticalLayout_11 = new QVBoxLayout(Page_Sub_F_Order);
        verticalLayout_11->setSpacing(6);
        verticalLayout_11->setContentsMargins(11, 11, 11, 11);
        verticalLayout_11->setObjectName(QStringLiteral("verticalLayout_11"));
        tableWidget_33 = new QTableWidget(Page_Sub_F_Order);
        if (tableWidget_33->columnCount() < 5)
            tableWidget_33->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem55 = new QTableWidgetItem();
        tableWidget_33->setHorizontalHeaderItem(0, __qtablewidgetitem55);
        QTableWidgetItem *__qtablewidgetitem56 = new QTableWidgetItem();
        tableWidget_33->setHorizontalHeaderItem(1, __qtablewidgetitem56);
        QTableWidgetItem *__qtablewidgetitem57 = new QTableWidgetItem();
        tableWidget_33->setHorizontalHeaderItem(2, __qtablewidgetitem57);
        QTableWidgetItem *__qtablewidgetitem58 = new QTableWidgetItem();
        tableWidget_33->setHorizontalHeaderItem(3, __qtablewidgetitem58);
        QTableWidgetItem *__qtablewidgetitem59 = new QTableWidgetItem();
        tableWidget_33->setHorizontalHeaderItem(4, __qtablewidgetitem59);
        if (tableWidget_33->rowCount() < 9)
            tableWidget_33->setRowCount(9);
        QTableWidgetItem *__qtablewidgetitem60 = new QTableWidgetItem();
        tableWidget_33->setVerticalHeaderItem(0, __qtablewidgetitem60);
        QTableWidgetItem *__qtablewidgetitem61 = new QTableWidgetItem();
        tableWidget_33->setVerticalHeaderItem(1, __qtablewidgetitem61);
        QTableWidgetItem *__qtablewidgetitem62 = new QTableWidgetItem();
        tableWidget_33->setVerticalHeaderItem(2, __qtablewidgetitem62);
        QTableWidgetItem *__qtablewidgetitem63 = new QTableWidgetItem();
        tableWidget_33->setVerticalHeaderItem(3, __qtablewidgetitem63);
        QTableWidgetItem *__qtablewidgetitem64 = new QTableWidgetItem();
        tableWidget_33->setVerticalHeaderItem(4, __qtablewidgetitem64);
        QTableWidgetItem *__qtablewidgetitem65 = new QTableWidgetItem();
        tableWidget_33->setVerticalHeaderItem(5, __qtablewidgetitem65);
        QTableWidgetItem *__qtablewidgetitem66 = new QTableWidgetItem();
        tableWidget_33->setVerticalHeaderItem(6, __qtablewidgetitem66);
        QTableWidgetItem *__qtablewidgetitem67 = new QTableWidgetItem();
        tableWidget_33->setVerticalHeaderItem(7, __qtablewidgetitem67);
        QTableWidgetItem *__qtablewidgetitem68 = new QTableWidgetItem();
        tableWidget_33->setVerticalHeaderItem(8, __qtablewidgetitem68);
        QTableWidgetItem *__qtablewidgetitem69 = new QTableWidgetItem();
        tableWidget_33->setItem(0, 0, __qtablewidgetitem69);
        QTableWidgetItem *__qtablewidgetitem70 = new QTableWidgetItem();
        tableWidget_33->setItem(0, 1, __qtablewidgetitem70);
        QTableWidgetItem *__qtablewidgetitem71 = new QTableWidgetItem();
        tableWidget_33->setItem(0, 2, __qtablewidgetitem71);
        QTableWidgetItem *__qtablewidgetitem72 = new QTableWidgetItem();
        tableWidget_33->setItem(0, 3, __qtablewidgetitem72);
        QTableWidgetItem *__qtablewidgetitem73 = new QTableWidgetItem();
        tableWidget_33->setItem(0, 4, __qtablewidgetitem73);
        QTableWidgetItem *__qtablewidgetitem74 = new QTableWidgetItem();
        tableWidget_33->setItem(1, 0, __qtablewidgetitem74);
        QTableWidgetItem *__qtablewidgetitem75 = new QTableWidgetItem();
        tableWidget_33->setItem(1, 1, __qtablewidgetitem75);
        QTableWidgetItem *__qtablewidgetitem76 = new QTableWidgetItem();
        tableWidget_33->setItem(1, 2, __qtablewidgetitem76);
        QTableWidgetItem *__qtablewidgetitem77 = new QTableWidgetItem();
        tableWidget_33->setItem(1, 3, __qtablewidgetitem77);
        QTableWidgetItem *__qtablewidgetitem78 = new QTableWidgetItem();
        tableWidget_33->setItem(1, 4, __qtablewidgetitem78);
        QTableWidgetItem *__qtablewidgetitem79 = new QTableWidgetItem();
        tableWidget_33->setItem(2, 0, __qtablewidgetitem79);
        QTableWidgetItem *__qtablewidgetitem80 = new QTableWidgetItem();
        tableWidget_33->setItem(2, 1, __qtablewidgetitem80);
        QTableWidgetItem *__qtablewidgetitem81 = new QTableWidgetItem();
        tableWidget_33->setItem(2, 2, __qtablewidgetitem81);
        QTableWidgetItem *__qtablewidgetitem82 = new QTableWidgetItem();
        tableWidget_33->setItem(2, 3, __qtablewidgetitem82);
        QTableWidgetItem *__qtablewidgetitem83 = new QTableWidgetItem();
        tableWidget_33->setItem(2, 4, __qtablewidgetitem83);
        QTableWidgetItem *__qtablewidgetitem84 = new QTableWidgetItem();
        tableWidget_33->setItem(3, 0, __qtablewidgetitem84);
        QTableWidgetItem *__qtablewidgetitem85 = new QTableWidgetItem();
        tableWidget_33->setItem(3, 1, __qtablewidgetitem85);
        QTableWidgetItem *__qtablewidgetitem86 = new QTableWidgetItem();
        tableWidget_33->setItem(3, 2, __qtablewidgetitem86);
        QTableWidgetItem *__qtablewidgetitem87 = new QTableWidgetItem();
        tableWidget_33->setItem(3, 3, __qtablewidgetitem87);
        QTableWidgetItem *__qtablewidgetitem88 = new QTableWidgetItem();
        tableWidget_33->setItem(3, 4, __qtablewidgetitem88);
        tableWidget_33->setObjectName(QStringLiteral("tableWidget_33"));

        verticalLayout_11->addWidget(tableWidget_33);

        formLayout_2 = new QFormLayout();
        formLayout_2->setSpacing(6);
        formLayout_2->setObjectName(QStringLiteral("formLayout_2"));
        pushButton_24 = new QPushButton(Page_Sub_F_Order);
        pushButton_24->setObjectName(QStringLiteral("pushButton_24"));
        pushButton_24->setMinimumSize(QSize(0, 0));

        formLayout_2->setWidget(0, QFormLayout::LabelRole, pushButton_24);

        pushButton_25 = new QPushButton(Page_Sub_F_Order);
        pushButton_25->setObjectName(QStringLiteral("pushButton_25"));
        pushButton_25->setMinimumSize(QSize(0, 0));

        formLayout_2->setWidget(1, QFormLayout::LabelRole, pushButton_25);

        lineEdit_8 = new QLineEdit(Page_Sub_F_Order);
        lineEdit_8->setObjectName(QStringLiteral("lineEdit_8"));
        lineEdit_8->setMinimumSize(QSize(0, 28));

        formLayout_2->setWidget(0, QFormLayout::FieldRole, lineEdit_8);

        lineEdit_9 = new QLineEdit(Page_Sub_F_Order);
        lineEdit_9->setObjectName(QStringLiteral("lineEdit_9"));
        lineEdit_9->setMinimumSize(QSize(0, 28));

        formLayout_2->setWidget(1, QFormLayout::FieldRole, lineEdit_9);


        verticalLayout_11->addLayout(formLayout_2);

        Stacked_Pages_Sub->addWidget(Page_Sub_F_Order);
        Page_Sub_MDI = new QWidget();
        Page_Sub_MDI->setObjectName(QStringLiteral("Page_Sub_MDI"));
        gridLayout_8 = new QGridLayout(Page_Sub_MDI);
        gridLayout_8->setSpacing(6);
        gridLayout_8->setContentsMargins(11, 11, 11, 11);
        gridLayout_8->setObjectName(QStringLiteral("gridLayout_8"));
        label_7 = new QLabel(Page_Sub_MDI);
        label_7->setObjectName(QStringLiteral("label_7"));

        gridLayout_8->addWidget(label_7, 0, 0, 1, 1);

        lineEdit = new QLineEdit(Page_Sub_MDI);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));

        gridLayout_8->addWidget(lineEdit, 1, 0, 1, 1);

        textEdit = new QTextEdit(Page_Sub_MDI);
        textEdit->setObjectName(QStringLiteral("textEdit"));

        gridLayout_8->addWidget(textEdit, 2, 0, 1, 1);

        pushButton_14 = new QPushButton(Page_Sub_MDI);
        pushButton_14->setObjectName(QStringLiteral("pushButton_14"));
        pushButton_14->setMinimumSize(QSize(0, 40));

        gridLayout_8->addWidget(pushButton_14, 2, 1, 1, 1);

        Stacked_Pages_Sub->addWidget(Page_Sub_MDI);
        Page_Sub_Simulate_Path = new QWidget();
        Page_Sub_Simulate_Path->setObjectName(QStringLiteral("Page_Sub_Simulate_Path"));
        Stacked_Pages_Sub->addWidget(Page_Sub_Simulate_Path);
        Page_compensation = new QWidget();
        Page_compensation->setObjectName(QStringLiteral("Page_compensation"));
        radioButton = new QRadioButton(Page_compensation);
        radioButton->setObjectName(QStringLiteral("radioButton"));
        radioButton->setGeometry(QRect(60, 90, 115, 19));
        Stacked_Pages_Sub->addWidget(Page_compensation);

        verticalLayout_25->addWidget(Stacked_Pages_Sub);

        verticalLayout_25->setStretch(0, 300);
        verticalLayout_25->setStretch(1, 219);

        verticalLayout_26->addLayout(verticalLayout_25);

        Stacked_Pages_Main->addWidget(Page_Main);
        Page_Txt = new QWidget();
        Page_Txt->setObjectName(QStringLiteral("Page_Txt"));
        verticalLayout_12 = new QVBoxLayout(Page_Txt);
        verticalLayout_12->setSpacing(6);
        verticalLayout_12->setContentsMargins(11, 11, 11, 11);
        verticalLayout_12->setObjectName(QStringLiteral("verticalLayout_12"));
        splitter_12 = new QSplitter(Page_Txt);
        splitter_12->setObjectName(QStringLiteral("splitter_12"));
        splitter_12->setOrientation(Qt::Horizontal);
        label_Txt = new QLabel(splitter_12);
        label_Txt->setObjectName(QStringLiteral("label_Txt"));
        label_Txt->setMinimumSize(QSize(100, 0));
        QFont font7;
        font7.setPointSize(10);
        label_Txt->setFont(font7);
        label_Txt->setFrameShape(QFrame::Box);
        splitter_12->addWidget(label_Txt);
        pB_New_Txt = new QPushButton(splitter_12);
        pB_New_Txt->setObjectName(QStringLiteral("pB_New_Txt"));
        pB_New_Txt->setMinimumSize(QSize(0, 40));
        pB_New_Txt->setStyleSheet(QString::fromUtf8("font: 11pt \"\351\273\221\344\275\223\";"));
        splitter_12->addWidget(pB_New_Txt);
        pB_ReadIn_Txt = new QPushButton(splitter_12);
        pB_ReadIn_Txt->setObjectName(QStringLiteral("pB_ReadIn_Txt"));
        pB_ReadIn_Txt->setMinimumSize(QSize(0, 40));
        pB_ReadIn_Txt->setStyleSheet(QString::fromUtf8("font: 11pt \"\351\273\221\344\275\223\";"));
        splitter_12->addWidget(pB_ReadIn_Txt);
        pB_Save_Txt = new QPushButton(splitter_12);
        pB_Save_Txt->setObjectName(QStringLiteral("pB_Save_Txt"));
        pB_Save_Txt->setMinimumSize(QSize(0, 40));
        pB_Save_Txt->setStyleSheet(QString::fromUtf8("font: 11pt \"\351\273\221\344\275\223\";"));
        splitter_12->addWidget(pB_Save_Txt);
        pB_Undo_Txt = new QPushButton(splitter_12);
        pB_Undo_Txt->setObjectName(QStringLiteral("pB_Undo_Txt"));
        pB_Undo_Txt->setMinimumSize(QSize(0, 40));
        pB_Undo_Txt->setStyleSheet(QString::fromUtf8("font: 11pt \"\351\273\221\344\275\223\";"));
        splitter_12->addWidget(pB_Undo_Txt);
        pB_GrammarCheck_Txt = new QPushButton(splitter_12);
        pB_GrammarCheck_Txt->setObjectName(QStringLiteral("pB_GrammarCheck_Txt"));
        pB_GrammarCheck_Txt->setMinimumSize(QSize(0, 40));
        pB_GrammarCheck_Txt->setStyleSheet(QString::fromUtf8("font: 11pt \"\351\273\221\344\275\223\";"));
        splitter_12->addWidget(pB_GrammarCheck_Txt);
        pB_Send_Txt = new QPushButton(splitter_12);
        pB_Send_Txt->setObjectName(QStringLiteral("pB_Send_Txt"));
        pB_Send_Txt->setMinimumSize(QSize(0, 40));
        QFont font8;
        font8.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font8.setPointSize(11);
        font8.setBold(false);
        font8.setItalic(false);
        font8.setWeight(50);
        pB_Send_Txt->setFont(font8);
        pB_Send_Txt->setStyleSheet(QString::fromUtf8("font: 11pt \"\351\273\221\344\275\223\";"));
        splitter_12->addWidget(pB_Send_Txt);

        verticalLayout_12->addWidget(splitter_12);

        pTE_GCode = new QPlainTextEdit(Page_Txt);
        pTE_GCode->setObjectName(QStringLiteral("pTE_GCode"));
        pTE_GCode->setFont(font7);

        verticalLayout_12->addWidget(pTE_GCode);

        Stacked_Pages_Main->addWidget(Page_Txt);
        Page_Coordinate = new QWidget();
        Page_Coordinate->setObjectName(QStringLiteral("Page_Coordinate"));
        verticalLayout_21 = new QVBoxLayout(Page_Coordinate);
        verticalLayout_21->setSpacing(6);
        verticalLayout_21->setContentsMargins(11, 11, 11, 11);
        verticalLayout_21->setObjectName(QStringLiteral("verticalLayout_21"));
        verticalLayout_22 = new QVBoxLayout();
        verticalLayout_22->setSpacing(6);
        verticalLayout_22->setObjectName(QStringLiteral("verticalLayout_22"));
        horizontalLayout_25 = new QHBoxLayout();
        horizontalLayout_25->setSpacing(6);
        horizontalLayout_25->setObjectName(QStringLiteral("horizontalLayout_25"));
        label_214 = new QLabel(Page_Coordinate);
        label_214->setObjectName(QStringLiteral("label_214"));

        horizontalLayout_25->addWidget(label_214);

        horizontalSpacer_12 = new QSpacerItem(318, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_25->addItem(horizontalSpacer_12);


        verticalLayout_22->addLayout(horizontalLayout_25);

        tableWidget_30 = new QTableWidget(Page_Coordinate);
        if (tableWidget_30->columnCount() < 5)
            tableWidget_30->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem89 = new QTableWidgetItem();
        tableWidget_30->setHorizontalHeaderItem(0, __qtablewidgetitem89);
        QTableWidgetItem *__qtablewidgetitem90 = new QTableWidgetItem();
        tableWidget_30->setHorizontalHeaderItem(1, __qtablewidgetitem90);
        QTableWidgetItem *__qtablewidgetitem91 = new QTableWidgetItem();
        tableWidget_30->setHorizontalHeaderItem(2, __qtablewidgetitem91);
        QTableWidgetItem *__qtablewidgetitem92 = new QTableWidgetItem();
        tableWidget_30->setHorizontalHeaderItem(3, __qtablewidgetitem92);
        QTableWidgetItem *__qtablewidgetitem93 = new QTableWidgetItem();
        tableWidget_30->setHorizontalHeaderItem(4, __qtablewidgetitem93);
        tableWidget_30->setObjectName(QStringLiteral("tableWidget_30"));

        verticalLayout_22->addWidget(tableWidget_30);


        verticalLayout_21->addLayout(verticalLayout_22);

        verticalLayout_23 = new QVBoxLayout();
        verticalLayout_23->setSpacing(6);
        verticalLayout_23->setObjectName(QStringLiteral("verticalLayout_23"));
        horizontalLayout_26 = new QHBoxLayout();
        horizontalLayout_26->setSpacing(6);
        horizontalLayout_26->setObjectName(QStringLiteral("horizontalLayout_26"));
        label_215 = new QLabel(Page_Coordinate);
        label_215->setObjectName(QStringLiteral("label_215"));

        horizontalLayout_26->addWidget(label_215);

        horizontalSpacer_13 = new QSpacerItem(318, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_26->addItem(horizontalSpacer_13);


        verticalLayout_23->addLayout(horizontalLayout_26);

        tableWidget_31 = new QTableWidget(Page_Coordinate);
        if (tableWidget_31->columnCount() < 5)
            tableWidget_31->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem94 = new QTableWidgetItem();
        tableWidget_31->setHorizontalHeaderItem(0, __qtablewidgetitem94);
        QTableWidgetItem *__qtablewidgetitem95 = new QTableWidgetItem();
        tableWidget_31->setHorizontalHeaderItem(1, __qtablewidgetitem95);
        QTableWidgetItem *__qtablewidgetitem96 = new QTableWidgetItem();
        tableWidget_31->setHorizontalHeaderItem(2, __qtablewidgetitem96);
        QTableWidgetItem *__qtablewidgetitem97 = new QTableWidgetItem();
        tableWidget_31->setHorizontalHeaderItem(3, __qtablewidgetitem97);
        QTableWidgetItem *__qtablewidgetitem98 = new QTableWidgetItem();
        tableWidget_31->setHorizontalHeaderItem(4, __qtablewidgetitem98);
        tableWidget_31->setObjectName(QStringLiteral("tableWidget_31"));

        verticalLayout_23->addWidget(tableWidget_31);


        verticalLayout_21->addLayout(verticalLayout_23);

        Stacked_Pages_Main->addWidget(Page_Coordinate);
        Page_Coordinate2 = new QWidget();
        Page_Coordinate2->setObjectName(QStringLiteral("Page_Coordinate2"));
        gridLayout_15 = new QGridLayout(Page_Coordinate2);
        gridLayout_15->setSpacing(6);
        gridLayout_15->setContentsMargins(11, 11, 11, 11);
        gridLayout_15->setObjectName(QStringLiteral("gridLayout_15"));
        verticalLayout_24 = new QVBoxLayout();
        verticalLayout_24->setSpacing(6);
        verticalLayout_24->setObjectName(QStringLiteral("verticalLayout_24"));
        horizontalLayout_27 = new QHBoxLayout();
        horizontalLayout_27->setSpacing(6);
        horizontalLayout_27->setObjectName(QStringLiteral("horizontalLayout_27"));
        label_216 = new QLabel(Page_Coordinate2);
        label_216->setObjectName(QStringLiteral("label_216"));

        horizontalLayout_27->addWidget(label_216);

        horizontalSpacer_14 = new QSpacerItem(288, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_27->addItem(horizontalSpacer_14);


        verticalLayout_24->addLayout(horizontalLayout_27);

        tableWidget_32 = new QTableWidget(Page_Coordinate2);
        if (tableWidget_32->columnCount() < 4)
            tableWidget_32->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem99 = new QTableWidgetItem();
        tableWidget_32->setHorizontalHeaderItem(0, __qtablewidgetitem99);
        QTableWidgetItem *__qtablewidgetitem100 = new QTableWidgetItem();
        tableWidget_32->setHorizontalHeaderItem(1, __qtablewidgetitem100);
        QTableWidgetItem *__qtablewidgetitem101 = new QTableWidgetItem();
        tableWidget_32->setHorizontalHeaderItem(2, __qtablewidgetitem101);
        QTableWidgetItem *__qtablewidgetitem102 = new QTableWidgetItem();
        tableWidget_32->setHorizontalHeaderItem(3, __qtablewidgetitem102);
        tableWidget_32->setObjectName(QStringLiteral("tableWidget_32"));

        verticalLayout_24->addWidget(tableWidget_32);


        gridLayout_15->addLayout(verticalLayout_24, 0, 0, 1, 1);

        Stacked_Pages_Main->addWidget(Page_Coordinate2);
        Page_CCD_Image = new QWidget();
        Page_CCD_Image->setObjectName(QStringLiteral("Page_CCD_Image"));
        gridLayout_16 = new QGridLayout(Page_CCD_Image);
        gridLayout_16->setSpacing(6);
        gridLayout_16->setContentsMargins(11, 11, 11, 11);
        gridLayout_16->setObjectName(QStringLiteral("gridLayout_16"));
        pushButton_zoom = new QPushButton(Page_CCD_Image);
        pushButton_zoom->setObjectName(QStringLiteral("pushButton_zoom"));
        pushButton_zoom->setMinimumSize(QSize(0, 40));

        gridLayout_16->addWidget(pushButton_zoom, 1, 2, 1, 1);

        pushButton_15 = new QPushButton(Page_CCD_Image);
        pushButton_15->setObjectName(QStringLiteral("pushButton_15"));
        pushButton_15->setMinimumSize(QSize(0, 40));
        pushButton_15->setMaximumSize(QSize(100, 16777215));

        gridLayout_16->addWidget(pushButton_15, 2, 2, 1, 1);

        verticalSpacer_5 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_16->addItem(verticalSpacer_5, 0, 2, 1, 1);

        openGLWidget_CCDImage = new OpenGLWidget_CCD(Page_CCD_Image);
        openGLWidget_CCDImage->setObjectName(QStringLiteral("openGLWidget_CCDImage"));
        openGLWidget_CCDImage->setMinimumSize(QSize(612, 515));
        openGLWidget_CCDImage->setMaximumSize(QSize(612, 515));

        gridLayout_16->addWidget(openGLWidget_CCDImage, 0, 1, 1, 1);

        Stacked_Pages_Main->addWidget(Page_CCD_Image);
        page_realtime_paint = new QWidget();
        page_realtime_paint->setObjectName(QStringLiteral("page_realtime_paint"));
        gridLayout_18 = new QGridLayout(page_realtime_paint);
        gridLayout_18->setSpacing(6);
        gridLayout_18->setContentsMargins(11, 11, 11, 11);
        gridLayout_18->setObjectName(QStringLiteral("gridLayout_18"));
        widget_realtime = new widget_painting(page_realtime_paint);
        widget_realtime->setObjectName(QStringLiteral("widget_realtime"));
        widget_realtime->setMinimumSize(QSize(500, 500));
        widget_realtime->setMaximumSize(QSize(500, 500));

        gridLayout_18->addWidget(widget_realtime, 0, 1, 1, 1);

        label_9 = new QLabel(page_realtime_paint);
        label_9->setObjectName(QStringLiteral("label_9"));
        QFont font9;
        font9.setPointSize(12);
        label_9->setFont(font9);

        gridLayout_18->addWidget(label_9, 0, 0, 1, 1);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_18->addItem(horizontalSpacer_3, 0, 2, 1, 1);

        Stacked_Pages_Main->addWidget(page_realtime_paint);
        page_21 = new QWidget();
        page_21->setObjectName(QStringLiteral("page_21"));
        openGLWidget_zoomImage = new OpenGLWidget_Zoom(page_21);
        openGLWidget_zoomImage->setObjectName(QStringLiteral("openGLWidget_zoomImage"));
        openGLWidget_zoomImage->setGeometry(QRect(88, 11, 612, 515));
        openGLWidget_zoomImage->setMinimumSize(QSize(612, 515));
        openGLWidget_zoomImage->setMaximumSize(QSize(612, 515));
        pushButton_backtoCCD = new QPushButton(page_21);
        pushButton_backtoCCD->setObjectName(QStringLiteral("pushButton_backtoCCD"));
        pushButton_backtoCCD->setGeometry(QRect(784, 470, 100, 40));
        pushButton_backtoCCD->setMinimumSize(QSize(100, 40));
        label_GLWidget_Coordinate_Name = new QLabel(page_21);
        label_GLWidget_Coordinate_Name->setObjectName(QStringLiteral("label_GLWidget_Coordinate_Name"));
        label_GLWidget_Coordinate_Name->setGeometry(QRect(730, 130, 120, 30));
        label_GLWidget_Coordinate_Name->setFont(font7);
        label_GLWidget_Coordinate = new QLabel(page_21);
        label_GLWidget_Coordinate->setObjectName(QStringLiteral("label_GLWidget_Coordinate"));
        label_GLWidget_Coordinate->setGeometry(QRect(730, 170, 150, 30));
        label_GLWidget_Coordinate->setFont(font7);
        horizontalSlider_Zoom_Factor = new QSlider(page_21);
        horizontalSlider_Zoom_Factor->setObjectName(QStringLiteral("horizontalSlider_Zoom_Factor"));
        horizontalSlider_Zoom_Factor->setGeometry(QRect(730, 350, 160, 18));
        horizontalSlider_Zoom_Factor->setOrientation(Qt::Horizontal);
        label_Zoom_Factor_Name = new QLabel(page_21);
        label_Zoom_Factor_Name->setObjectName(QStringLiteral("label_Zoom_Factor_Name"));
        label_Zoom_Factor_Name->setGeometry(QRect(730, 300, 72, 30));
        label_Zoom_Factor_Name->setFont(font7);
        label_Zoom_Factor = new QLabel(page_21);
        label_Zoom_Factor->setObjectName(QStringLiteral("label_Zoom_Factor"));
        label_Zoom_Factor->setGeometry(QRect(810, 300, 72, 30));
        label_Zoom_Factor->setFont(font7);
        Stacked_Pages_Main->addWidget(page_21);

        verticalLayout_15->addWidget(Stacked_Pages_Main);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setSpacing(6);
        horizontalLayout_8->setObjectName(QStringLiteral("horizontalLayout_8"));
        pB3_0 = new QPushButton(centralWidget);
        pB3_0->setObjectName(QStringLiteral("pB3_0"));
        sizePolicy1.setHeightForWidth(pB3_0->sizePolicy().hasHeightForWidth());
        pB3_0->setSizePolicy(sizePolicy1);
        pB3_0->setStyleSheet(QString::fromUtf8("font: 11pt \"\351\273\221\344\275\223\";"));

        horizontalLayout_8->addWidget(pB3_0);

        pB3_1 = new QPushButton(centralWidget);
        pB3_1->setObjectName(QStringLiteral("pB3_1"));
        sizePolicy1.setHeightForWidth(pB3_1->sizePolicy().hasHeightForWidth());
        pB3_1->setSizePolicy(sizePolicy1);
        pB3_1->setStyleSheet(QString::fromUtf8("font: 11pt \"\351\273\221\344\275\223\";"));

        horizontalLayout_8->addWidget(pB3_1);

        pB3_2 = new QPushButton(centralWidget);
        pB3_2->setObjectName(QStringLiteral("pB3_2"));
        sizePolicy1.setHeightForWidth(pB3_2->sizePolicy().hasHeightForWidth());
        pB3_2->setSizePolicy(sizePolicy1);
        pB3_2->setStyleSheet(QString::fromUtf8("font: 11pt \"\351\273\221\344\275\223\";"));

        horizontalLayout_8->addWidget(pB3_2);

        pB3_3 = new QPushButton(centralWidget);
        pB3_3->setObjectName(QStringLiteral("pB3_3"));
        sizePolicy1.setHeightForWidth(pB3_3->sizePolicy().hasHeightForWidth());
        pB3_3->setSizePolicy(sizePolicy1);
        pB3_3->setStyleSheet(QString::fromUtf8("font: 11pt \"\351\273\221\344\275\223\";"));

        horizontalLayout_8->addWidget(pB3_3);

        pB3_4 = new QPushButton(centralWidget);
        pB3_4->setObjectName(QStringLiteral("pB3_4"));
        sizePolicy1.setHeightForWidth(pB3_4->sizePolicy().hasHeightForWidth());
        pB3_4->setSizePolicy(sizePolicy1);
        pB3_4->setStyleSheet(QString::fromUtf8("font: 11pt \"\351\273\221\344\275\223\";"));

        horizontalLayout_8->addWidget(pB3_4);

        pB3_5 = new QPushButton(centralWidget);
        pB3_5->setObjectName(QStringLiteral("pB3_5"));
        sizePolicy1.setHeightForWidth(pB3_5->sizePolicy().hasHeightForWidth());
        pB3_5->setSizePolicy(sizePolicy1);
        pB3_5->setStyleSheet(QString::fromUtf8("font: 11pt \"\351\273\221\344\275\223\";"));

        horizontalLayout_8->addWidget(pB3_5);

        pB3_6 = new QPushButton(centralWidget);
        pB3_6->setObjectName(QStringLiteral("pB3_6"));
        sizePolicy1.setHeightForWidth(pB3_6->sizePolicy().hasHeightForWidth());
        pB3_6->setSizePolicy(sizePolicy1);
        pB3_6->setStyleSheet(QString::fromUtf8("font: 11pt \"\351\273\221\344\275\223\";"));

        horizontalLayout_8->addWidget(pB3_6);

        pB3_7 = new QPushButton(centralWidget);
        pB3_7->setObjectName(QStringLiteral("pB3_7"));
        sizePolicy1.setHeightForWidth(pB3_7->sizePolicy().hasHeightForWidth());
        pB3_7->setSizePolicy(sizePolicy1);
        pB3_7->setStyleSheet(QString::fromUtf8("font: 11pt \"\351\273\221\344\275\223\";"));

        horizontalLayout_8->addWidget(pB3_7);


        verticalLayout_15->addLayout(horizontalLayout_8);

        verticalLayout_15->setStretch(0, 1);
        verticalLayout_15->setStretch(2, 1);

        horizontalLayout_9->addLayout(verticalLayout_15);

        verticalLayout_18 = new QVBoxLayout();
        verticalLayout_18->setSpacing(40);
        verticalLayout_18->setObjectName(QStringLiteral("verticalLayout_18"));
        verticalLayout_16 = new QVBoxLayout();
        verticalLayout_16->setSpacing(3);
        verticalLayout_16->setObjectName(QStringLiteral("verticalLayout_16"));
        pB_help = new QPushButton(centralWidget);
        pB_help->setObjectName(QStringLiteral("pB_help"));
        QSizePolicy sizePolicy6(QSizePolicy::Minimum, QSizePolicy::Expanding);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(pB_help->sizePolicy().hasHeightForWidth());
        pB_help->setSizePolicy(sizePolicy6);
        pB_help->setMinimumSize(QSize(85, 35));
        pB_help->setStyleSheet(QString::fromUtf8("font: 12pt \"\351\273\221\344\275\223\";"));

        verticalLayout_16->addWidget(pB_help);

        pB_data = new QPushButton(centralWidget);
        pB_data->setObjectName(QStringLiteral("pB_data"));
        sizePolicy6.setHeightForWidth(pB_data->sizePolicy().hasHeightForWidth());
        pB_data->setSizePolicy(sizePolicy6);
        pB_data->setMinimumSize(QSize(95, 40));
        pB_data->setStyleSheet(QString::fromUtf8("font: 12pt \"\351\273\221\344\275\223\";"));

        verticalLayout_16->addWidget(pB_data);

        pB_manul = new QPushButton(centralWidget);
        pB_manul->setObjectName(QStringLiteral("pB_manul"));
        sizePolicy6.setHeightForWidth(pB_manul->sizePolicy().hasHeightForWidth());
        pB_manul->setSizePolicy(sizePolicy6);
        pB_manul->setMinimumSize(QSize(95, 40));
        pB_manul->setStyleSheet(QString::fromUtf8("font: 12pt \"\351\273\221\344\275\223\";"));

        verticalLayout_16->addWidget(pB_manul);

        pB_program = new QPushButton(centralWidget);
        pB_program->setObjectName(QStringLiteral("pB_program"));
        sizePolicy6.setHeightForWidth(pB_program->sizePolicy().hasHeightForWidth());
        pB_program->setSizePolicy(sizePolicy6);
        pB_program->setMinimumSize(QSize(95, 40));
        pB_program->setStyleSheet(QString::fromUtf8("font: 12pt \"\351\273\221\344\275\223\";"));

        verticalLayout_16->addWidget(pB_program);

        pB_manufacture = new QPushButton(centralWidget);
        pB_manufacture->setObjectName(QStringLiteral("pB_manufacture"));
        sizePolicy6.setHeightForWidth(pB_manufacture->sizePolicy().hasHeightForWidth());
        pB_manufacture->setSizePolicy(sizePolicy6);
        pB_manufacture->setMinimumSize(QSize(95, 40));
        pB_manufacture->setStyleSheet(QString::fromUtf8("font: 12pt \"\351\273\221\344\275\223\";"));

        verticalLayout_16->addWidget(pB_manufacture);

        pB_view = new QPushButton(centralWidget);
        pB_view->setObjectName(QStringLiteral("pB_view"));
        sizePolicy6.setHeightForWidth(pB_view->sizePolicy().hasHeightForWidth());
        pB_view->setSizePolicy(sizePolicy6);
        pB_view->setMinimumSize(QSize(95, 40));
        pB_view->setStyleSheet(QString::fromUtf8("font: 12pt \"\351\273\221\344\275\223\";"));

        verticalLayout_16->addWidget(pB_view);

        pB_setting = new QPushButton(centralWidget);
        pB_setting->setObjectName(QStringLiteral("pB_setting"));
        sizePolicy6.setHeightForWidth(pB_setting->sizePolicy().hasHeightForWidth());
        pB_setting->setSizePolicy(sizePolicy6);
        pB_setting->setMinimumSize(QSize(95, 40));
        pB_setting->setStyleSheet(QString::fromUtf8("font: 12pt \"\351\273\221\344\275\223\";"));

        verticalLayout_16->addWidget(pB_setting);


        verticalLayout_18->addLayout(verticalLayout_16);

        verticalLayout_17 = new QVBoxLayout();
        verticalLayout_17->setSpacing(3);
        verticalLayout_17->setObjectName(QStringLiteral("verticalLayout_17"));
        pB2_0 = new QPushButton(centralWidget);
        pB2_0->setObjectName(QStringLiteral("pB2_0"));
        QSizePolicy sizePolicy7(QSizePolicy::Preferred, QSizePolicy::Expanding);
        sizePolicy7.setHorizontalStretch(0);
        sizePolicy7.setVerticalStretch(0);
        sizePolicy7.setHeightForWidth(pB2_0->sizePolicy().hasHeightForWidth());
        pB2_0->setSizePolicy(sizePolicy7);
        pB2_0->setMinimumSize(QSize(85, 40));
        pB2_0->setStyleSheet(QString::fromUtf8("font: 11pt \"\351\273\221\344\275\223\";"));

        verticalLayout_17->addWidget(pB2_0);

        pB2_1 = new QPushButton(centralWidget);
        pB2_1->setObjectName(QStringLiteral("pB2_1"));
        sizePolicy6.setHeightForWidth(pB2_1->sizePolicy().hasHeightForWidth());
        pB2_1->setSizePolicy(sizePolicy6);
        pB2_1->setMinimumSize(QSize(85, 40));
        pB2_1->setStyleSheet(QString::fromUtf8("font: 11pt \"\351\273\221\344\275\223\";"));

        verticalLayout_17->addWidget(pB2_1);

        pB2_2 = new QPushButton(centralWidget);
        pB2_2->setObjectName(QStringLiteral("pB2_2"));
        sizePolicy6.setHeightForWidth(pB2_2->sizePolicy().hasHeightForWidth());
        pB2_2->setSizePolicy(sizePolicy6);
        pB2_2->setMinimumSize(QSize(85, 40));
        pB2_2->setStyleSheet(QString::fromUtf8("font: 11pt \"\351\273\221\344\275\223\";"));

        verticalLayout_17->addWidget(pB2_2);

        pB2_3 = new QPushButton(centralWidget);
        pB2_3->setObjectName(QStringLiteral("pB2_3"));
        sizePolicy6.setHeightForWidth(pB2_3->sizePolicy().hasHeightForWidth());
        pB2_3->setSizePolicy(sizePolicy6);
        pB2_3->setMinimumSize(QSize(85, 40));
        pB2_3->setStyleSheet(QString::fromUtf8("font: 11pt \"\351\273\221\344\275\223\";"));

        verticalLayout_17->addWidget(pB2_3);

        pB2_4 = new QPushButton(centralWidget);
        pB2_4->setObjectName(QStringLiteral("pB2_4"));
        sizePolicy6.setHeightForWidth(pB2_4->sizePolicy().hasHeightForWidth());
        pB2_4->setSizePolicy(sizePolicy6);
        pB2_4->setMinimumSize(QSize(85, 40));
        pB2_4->setStyleSheet(QString::fromUtf8("font: 11pt \"\351\273\221\344\275\223\";"));

        verticalLayout_17->addWidget(pB2_4);


        verticalLayout_18->addLayout(verticalLayout_17);

        verticalLayout_18->setStretch(0, 7);
        verticalLayout_18->setStretch(1, 5);

        horizontalLayout_9->addLayout(verticalLayout_18);

        horizontalLayout_9->setStretch(0, 15);
        horizontalLayout_9->setStretch(1, 2);

        gridLayout_2->addLayout(horizontalLayout_9, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 1138, 25));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        Stacked_Pages_Main->setCurrentIndex(6);
        tabWidget_4->setCurrentIndex(0);
        Stacked_Pages_Sub->setCurrentIndex(9);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Profile Grinding Machine of SJTU", nullptr));
        label_163->setText(QApplication::translate("MainWindow", "\345\244\215\346\235\202\350\275\256\345\273\223\346\233\262\347\272\277\347\243\250\345\211\212\346\225\260\346\216\247\347\263\273\347\273\237", nullptr));
        Label_Connection_Status->setText(QApplication::translate("MainWindow", "  \344\270\213\344\275\215\346\234\272\346\234\252\350\277\236\346\216\245", nullptr));
        pB_Connection_of_Trio->setText(QApplication::translate("MainWindow", "\350\277\236\346\216\245\344\270\213\344\275\215\346\234\272", nullptr));
        rB_CCD->setText(QApplication::translate("MainWindow", "\346\221\204\345\203\217\345\244\264\346\211\223\345\274\200", nullptr));
        Label_Img->setText(QString());
        label_183->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:16pt; color:#000000;\">X:</span></p></body></html>", nullptr));
        label_184->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:16pt; color:#000000;\">Y:</span></p></body></html>", nullptr));
        label_185->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:16pt; color:#000000;\">U:</span></p></body></html>", nullptr));
        label_186->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:16pt; color:#000000;\">V:</span></p></body></html>", nullptr));
        label_219->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:16pt; color:#000000;\">Z:</span></p></body></html>", nullptr));
        Label_Mech_Cor_X->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:16pt;\">+0.000</span></p></body></html>", nullptr));
        Label_Mech_Cor_Y->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:16pt;\">+0.000</span></p></body></html>", nullptr));
        Label_Mech_Cor_U->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:16pt;\">+0.000</span></p></body></html>", nullptr));
        Label_Mech_Cor_V->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:16pt;\">+0.000</span></p></body></html>", nullptr));
        Label_Mech_Cor_Z->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:16pt;\">+0.000</span></p></body></html>", nullptr));
        label_15->setText(QApplication::translate("MainWindow", "mm", nullptr));
        label_16->setText(QApplication::translate("MainWindow", "mm", nullptr));
        label_17->setText(QApplication::translate("MainWindow", "mm", nullptr));
        label_19->setText(QApplication::translate("MainWindow", "mm", nullptr));
        label_20->setText(QApplication::translate("MainWindow", "mm", nullptr));
        Label__Motion_Status_X->setText(QApplication::translate("MainWindow", "<html><head/><body><p>\347\251\272\351\227\262</p></body></html>", nullptr));
        Label__Motion_Status_Y->setText(QApplication::translate("MainWindow", "<html><head/><body><p>\347\251\272\351\227\262</p></body></html>", nullptr));
        Label__Motion_Status_U->setText(QApplication::translate("MainWindow", "<html><head/><body><p>\347\251\272\351\227\262</p></body></html>", nullptr));
        Label__Motion_Status_V->setText(QApplication::translate("MainWindow", "<html><head/><body><p>\347\251\272\351\227\262</p></body></html>", nullptr));
        Label__Motion_Status_Z->setText(QApplication::translate("MainWindow", "<html><head/><body><p>\347\251\272\351\227\262</p></body></html>", nullptr));
        tabWidget_4->setTabText(tabWidget_4->indexOf(mechanical_coordinate_4), QApplication::translate("MainWindow", "\344\275\215\347\275\256", nullptr));
        label_191->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:16pt; color:#000000;\">X:</span></p></body></html>", nullptr));
        label_188->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:16pt; color:#000000;\">Y:</span></p></body></html>", nullptr));
        label_189->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:16pt; color:#000000;\">U:</span></p></body></html>", nullptr));
        label_192->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:16pt; color:#000000;\">V:</span></p></body></html>", nullptr));
        label_218->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:16pt;\">Z:</span></p></body></html>", nullptr));
        Label_X_Speed->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:16pt;\">+0.000</span></p></body></html>", nullptr));
        Label_Y_Speed->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:16pt;\">+0.000</span></p></body></html>", nullptr));
        Label_U_Speed->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:16pt;\">+0.000</span></p></body></html>", nullptr));
        Label_V_Speed->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:16pt;\">+0.000</span></p></body></html>", nullptr));
        Label_Z_Speed->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:16pt;\">+0.000</span></p></body></html>", nullptr));
        Label_X_MSpeed->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:16pt;\">+0.000</span></p></body></html>", nullptr));
        Label_Y_MSpeed->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:16pt;\">+0.000</span></p></body></html>", nullptr));
        Label_U_MSpeed->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:16pt;\">+0.000</span></p></body></html>", nullptr));
        Label_V_MSpeed->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:16pt;\">+0.000</span></p></body></html>", nullptr));
        Label_Z_MSpeed->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:16pt;\">+0.000</span></p></body></html>", nullptr));
        label_21->setText(QApplication::translate("MainWindow", "mm/s", nullptr));
        label_22->setText(QApplication::translate("MainWindow", "mm/s", nullptr));
        label_23->setText(QApplication::translate("MainWindow", "mm/s", nullptr));
        label_24->setText(QApplication::translate("MainWindow", "mm/s", nullptr));
        label_25->setText(QApplication::translate("MainWindow", "mm/s", nullptr));
        tabWidget_4->setTabText(tabWidget_4->indexOf(manufacturing_coordinate_4), QApplication::translate("MainWindow", "\351\200\237\345\272\246", nullptr));
        label_199->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:11pt; color:#000000;\">X:</span></p></body></html>", nullptr));
        label_202->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:12pt;\">+0.0000</span></p></body></html>", nullptr));
        label_195->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:12pt;\">+0.0000</span></p></body></html>", nullptr));
        label_196->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:11pt; color:#000000;\">Y:</span></p></body></html>", nullptr));
        label_200->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:11pt; color:#000000;\">V:</span></p></body></html>", nullptr));
        label_197->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:11pt; color:#000000;\">U:</span></p></body></html>", nullptr));
        label_198->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:12pt;\">+0.0000</span></p></body></html>", nullptr));
        label_201->setText(QApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-size:12pt;\">+0.0000</span></p></body></html>", nullptr));
        label_176->setText(QApplication::translate("MainWindow", " \346\227\266\351\227\264\357\274\232", nullptr));
        Label_date->setText(QApplication::translate("MainWindow", "2000.01.01", nullptr));
        label_177->setText(QApplication::translate("MainWindow", "\350\277\233\347\273\231\351\200\237\345\272\246\357\274\232", nullptr));
        Label_current_velocity->setText(QApplication::translate("MainWindow", "10", nullptr));
        label_164->setText(QApplication::translate("MainWindow", "\345\276\200\345\244\215\351\200\237\345\272\246\357\274\232", nullptr));
        Label_current_z_velocity->setText(QApplication::translate("MainWindow", "10", nullptr));
        label_171->setText(QApplication::translate("MainWindow", "\346\234\200\351\253\230\347\202\271\357\274\232", nullptr));
        label_170->setText(QApplication::translate("MainWindow", "10", nullptr));
        label_172->setText(QApplication::translate("MainWindow", "\346\234\200\344\275\216\347\202\271\357\274\232", nullptr));
        label_173->setText(QApplication::translate("MainWindow", "10", nullptr));
        label_166->setText(QApplication::translate("MainWindow", "\350\277\233\347\273\231\345\200\215\347\216\207\357\274\232", nullptr));
        label_168->setText(QApplication::translate("MainWindow", "\345\276\200\345\244\215\345\200\215\347\216\207\357\274\232", nullptr));
        label_175->setText(QApplication::translate("MainWindow", "\345\207\206\345\201\234\347\202\271\357\274\232", nullptr));
        Label_current_feed_rate->setText(QApplication::translate("MainWindow", "10", nullptr));
        Label_current_loop_rate->setText(QApplication::translate("MainWindow", "10", nullptr));
        label_174->setText(QApplication::translate("MainWindow", "10", nullptr));
        tabWidget_4->setTabText(tabWidget_4->indexOf(part_coordinate_4), QApplication::translate("MainWindow", "\345\267\245\344\273\266\345\235\220\346\240\207", nullptr));
        label_11->setText(QApplication::translate("MainWindow", "X-Y:", nullptr));
        Label_XY_VPSPEED->setText(QApplication::translate("MainWindow", "+0.000", nullptr));
        label_26->setText(QApplication::translate("MainWindow", "mm/s", nullptr));
        label_13->setText(QApplication::translate("MainWindow", "U-V:", nullptr));
        Label_UV_VPSPEED->setText(QApplication::translate("MainWindow", "+0.000", nullptr));
        label_27->setText(QApplication::translate("MainWindow", "mm/s", nullptr));
        tabWidget_4->setTabText(tabWidget_4->indexOf(vpspeed), QApplication::translate("MainWindow", "\346\217\222\350\241\245\351\200\237\345\272\246", nullptr));
        label_211->setText(QApplication::translate("MainWindow", "\351\200\232\350\277\207\350\276\223\345\205\245\344\270\211\344\270\252\345\217\202\346\225\260\346\235\245\347\241\256\345\256\232\344\270\200\344\270\252\347\240\202\350\275\256\347\232\204\345\275\242\347\212\266\343\200\202Pu Pd\345\217\257\347\277\273\351\241\265\n"
"", nullptr));
        QTableWidgetItem *___qtablewidgetitem = tableWidget_25->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainWindow", "1", nullptr));
        QTableWidgetItem *___qtablewidgetitem1 = tableWidget_25->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MainWindow", "2", nullptr));
        QTableWidgetItem *___qtablewidgetitem2 = tableWidget_25->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("MainWindow", "3", nullptr));
        QTableWidgetItem *___qtablewidgetitem3 = tableWidget_25->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("MainWindow", "4", nullptr));
        QTableWidgetItem *___qtablewidgetitem4 = tableWidget_25->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("MainWindow", "5", nullptr));
        QTableWidgetItem *___qtablewidgetitem5 = tableWidget_25->horizontalHeaderItem(5);
        ___qtablewidgetitem5->setText(QApplication::translate("MainWindow", "7", nullptr));
        QTableWidgetItem *___qtablewidgetitem6 = tableWidget_25->verticalHeaderItem(0);
        ___qtablewidgetitem6->setText(QApplication::translate("MainWindow", "\316\263", nullptr));
        QTableWidgetItem *___qtablewidgetitem7 = tableWidget_25->verticalHeaderItem(1);
        ___qtablewidgetitem7->setText(QApplication::translate("MainWindow", "\316\261 ", nullptr));
        QTableWidgetItem *___qtablewidgetitem8 = tableWidget_25->verticalHeaderItem(2);
        ___qtablewidgetitem8->setText(QApplication::translate("MainWindow", "\316\262", nullptr));
        label_212->setText(QApplication::translate("MainWindow", "\350\276\223\345\205\245\345\210\200\345\205\267\345\201\217\347\275\256\351\207\217\357\274\214ENTER\351\224\256\347\241\256\350\256\244\343\200\202Pu Pd\345\217\257\347\277\273\351\241\265\n"
"", nullptr));
        QTableWidgetItem *___qtablewidgetitem9 = tableWidget_26->horizontalHeaderItem(0);
        ___qtablewidgetitem9->setText(QApplication::translate("MainWindow", "No.", nullptr));
        QTableWidgetItem *___qtablewidgetitem10 = tableWidget_26->horizontalHeaderItem(1);
        ___qtablewidgetitem10->setText(QApplication::translate("MainWindow", "\344\270\212\345\201\217\345\267\256", nullptr));
        QTableWidgetItem *___qtablewidgetitem11 = tableWidget_26->horizontalHeaderItem(2);
        ___qtablewidgetitem11->setText(QApplication::translate("MainWindow", "No.", nullptr));
        QTableWidgetItem *___qtablewidgetitem12 = tableWidget_26->horizontalHeaderItem(3);
        ___qtablewidgetitem12->setText(QApplication::translate("MainWindow", "\344\270\212\345\201\217\345\267\256", nullptr));
        QTableWidgetItem *___qtablewidgetitem13 = tableWidget_26->horizontalHeaderItem(4);
        ___qtablewidgetitem13->setText(QApplication::translate("MainWindow", "No.", nullptr));
        QTableWidgetItem *___qtablewidgetitem14 = tableWidget_26->horizontalHeaderItem(5);
        ___qtablewidgetitem14->setText(QApplication::translate("MainWindow", "\344\270\212\345\201\217\345\267\256", nullptr));
        label_213->setText(QApplication::translate("MainWindow", "\350\276\223\345\205\245\345\210\200\345\205\267\345\201\217\347\275\256\351\207\217\357\274\214ENTER\351\224\256\347\241\256\350\256\244\343\200\202Pu Pd\345\217\257\347\277\273\351\241\265\n"
"", nullptr));
        QTableWidgetItem *___qtablewidgetitem15 = tableWidget_27->horizontalHeaderItem(0);
        ___qtablewidgetitem15->setText(QApplication::translate("MainWindow", "No.", nullptr));
        QTableWidgetItem *___qtablewidgetitem16 = tableWidget_27->horizontalHeaderItem(1);
        ___qtablewidgetitem16->setText(QApplication::translate("MainWindow", "\344\270\213\345\201\217\345\267\256", nullptr));
        QTableWidgetItem *___qtablewidgetitem17 = tableWidget_27->horizontalHeaderItem(2);
        ___qtablewidgetitem17->setText(QApplication::translate("MainWindow", "No.", nullptr));
        QTableWidgetItem *___qtablewidgetitem18 = tableWidget_27->horizontalHeaderItem(3);
        ___qtablewidgetitem18->setText(QApplication::translate("MainWindow", "\344\270\213\345\201\217\345\267\256", nullptr));
        QTableWidgetItem *___qtablewidgetitem19 = tableWidget_27->horizontalHeaderItem(4);
        ___qtablewidgetitem19->setText(QApplication::translate("MainWindow", "No.", nullptr));
        QTableWidgetItem *___qtablewidgetitem20 = tableWidget_27->horizontalHeaderItem(5);
        ___qtablewidgetitem20->setText(QApplication::translate("MainWindow", "\344\270\213\345\201\217\345\267\256", nullptr));
        cB_offset_axis->setItemText(0, QApplication::translate("MainWindow", "U", nullptr));
        cB_offset_axis->setItemText(1, QApplication::translate("MainWindow", "V", nullptr));
        cB_offset_axis->setItemText(2, QApplication::translate("MainWindow", "Z", nullptr));
        cB_offset_axis->setItemText(3, QApplication::translate("MainWindow", "X", nullptr));
        cB_offset_axis->setItemText(4, QApplication::translate("MainWindow", "Y", nullptr));

        pB_Start_offset->setText(QApplication::translate("MainWindow", "\345\274\200\345\247\213\345\201\217\347\275\256", nullptr));
        label_217->setText(QApplication::translate("MainWindow", " \351\200\211\346\213\251\345\210\200\350\241\245\345\200\274\357\274\214\346\210\226\350\200\205\350\207\252\350\241\214\350\276\223\345\205\245\357\274\214\346\234\200\345\220\216\347\202\271\345\207\273\342\200\234\345\206\231\345\205\245\342\200\235\346\214\211\351\222\256\347\241\256\350\256\244", nullptr));
        pushButton_write_tool_compensation->setText(QApplication::translate("MainWindow", "\345\206\231\345\205\245", nullptr));
        QTableWidgetItem *___qtablewidgetitem21 = tableWidget_29->horizontalHeaderItem(0);
        ___qtablewidgetitem21->setText(QApplication::translate("MainWindow", "\345\235\220\346\240\207\347\263\273", nullptr));
        QTableWidgetItem *___qtablewidgetitem22 = tableWidget_29->horizontalHeaderItem(1);
        ___qtablewidgetitem22->setText(QApplication::translate("MainWindow", "X", nullptr));
        QTableWidgetItem *___qtablewidgetitem23 = tableWidget_29->horizontalHeaderItem(2);
        ___qtablewidgetitem23->setText(QApplication::translate("MainWindow", "Y", nullptr));
        QTableWidgetItem *___qtablewidgetitem24 = tableWidget_29->horizontalHeaderItem(3);
        ___qtablewidgetitem24->setText(QApplication::translate("MainWindow", "U", nullptr));
        QTableWidgetItem *___qtablewidgetitem25 = tableWidget_29->horizontalHeaderItem(4);
        ___qtablewidgetitem25->setText(QApplication::translate("MainWindow", "V", nullptr));
        pushButton_17->setText(QApplication::translate("MainWindow", "X", nullptr));
        pushButton_18->setText(QApplication::translate("MainWindow", "Y", nullptr));
        pushButton_19->setText(QApplication::translate("MainWindow", "U", nullptr));
        pushButton_20->setText(QApplication::translate("MainWindow", "V", nullptr));
        pushButton_21->setText(QApplication::translate("MainWindow", "Z", nullptr));
        label->setText(QApplication::translate("MainWindow", "\345\235\220\346\240\207\347\263\273", nullptr));
        comboBox_Coodinate_Setting->setItemText(0, QApplication::translate("MainWindow", "G53", nullptr));
        comboBox_Coodinate_Setting->setItemText(1, QApplication::translate("MainWindow", "G54", nullptr));
        comboBox_Coodinate_Setting->setItemText(2, QApplication::translate("MainWindow", "G55", nullptr));
        comboBox_Coodinate_Setting->setItemText(3, QApplication::translate("MainWindow", "G56", nullptr));

        pB_Coordinate_Setting_Reset->setText(QApplication::translate("MainWindow", "\351\207\215\347\275\256", nullptr));
        pB_Coordinate_Setting_Load->setText(QApplication::translate("MainWindow", "\345\257\274\345\205\245", nullptr));
        label_6->setText(QApplication::translate("MainWindow", "1", nullptr));
        label_Zero_Return_1->setText(QString());
        label_10->setText(QApplication::translate("MainWindow", "2", nullptr));
        label_Zero_Return_2->setText(QString());
        label_12->setText(QApplication::translate("MainWindow", "3", nullptr));
        label_Zero_Return_3->setText(QString());
        label_14->setText(QApplication::translate("MainWindow", "4", nullptr));
        label_Zero_Return_4->setText(QString());
        label_18->setText(QApplication::translate("MainWindow", "5", nullptr));
        label_Zero_Return_5->setText(QString());
        pB_Zero_Return_Reset->setText(QApplication::translate("MainWindow", "\351\207\215\347\275\256", nullptr));
        pB_Zero_Return_Load->setText(QApplication::translate("MainWindow", "\345\257\274\345\205\245", nullptr));
        label_8->setText(QApplication::translate("MainWindow", "\345\275\223\345\211\215\351\241\272\345\272\217\357\274\232X\342\206\222Y\342\206\222U\342\206\222V\342\206\222Z", nullptr));
        pB_Zero_Return_X->setText(QApplication::translate("MainWindow", "X", nullptr));
        pB_Zero_Return_Y->setText(QApplication::translate("MainWindow", "Y", nullptr));
        pB_Zero_Return_U->setText(QApplication::translate("MainWindow", "U", nullptr));
        pB_Zero_Return_V->setText(QApplication::translate("MainWindow", "V", nullptr));
        pB_Zero_Return_Z->setText(QApplication::translate("MainWindow", "Z", nullptr));
        QTableWidgetItem *___qtablewidgetitem26 = tableWidget->horizontalHeaderItem(0);
        ___qtablewidgetitem26->setText(QApplication::translate("MainWindow", "\345\220\215\347\247\260", nullptr));
        QTableWidgetItem *___qtablewidgetitem27 = tableWidget->horizontalHeaderItem(1);
        ___qtablewidgetitem27->setText(QApplication::translate("MainWindow", "\345\244\247\345\260\217", nullptr));
        QTableWidgetItem *___qtablewidgetitem28 = tableWidget->horizontalHeaderItem(2);
        ___qtablewidgetitem28->setText(QApplication::translate("MainWindow", "\346\233\264\346\226\260\346\227\245\346\234\237", nullptr));
        QTableWidgetItem *___qtablewidgetitem29 = tableWidget->verticalHeaderItem(0);
        ___qtablewidgetitem29->setText(QApplication::translate("MainWindow", "1", nullptr));
        QTableWidgetItem *___qtablewidgetitem30 = tableWidget->verticalHeaderItem(1);
        ___qtablewidgetitem30->setText(QApplication::translate("MainWindow", "2", nullptr));
        QTableWidgetItem *___qtablewidgetitem31 = tableWidget->verticalHeaderItem(2);
        ___qtablewidgetitem31->setText(QApplication::translate("MainWindow", "3", nullptr));
        QTableWidgetItem *___qtablewidgetitem32 = tableWidget->verticalHeaderItem(3);
        ___qtablewidgetitem32->setText(QApplication::translate("MainWindow", "4", nullptr));
        QTableWidgetItem *___qtablewidgetitem33 = tableWidget->verticalHeaderItem(4);
        ___qtablewidgetitem33->setText(QApplication::translate("MainWindow", "5", nullptr));

        const bool __sortingEnabled = tableWidget->isSortingEnabled();
        tableWidget->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem34 = tableWidget->item(0, 0);
        ___qtablewidgetitem34->setText(QApplication::translate("MainWindow", "0001.NC", nullptr));
        QTableWidgetItem *___qtablewidgetitem35 = tableWidget->item(0, 1);
        ___qtablewidgetitem35->setText(QApplication::translate("MainWindow", "1KB", nullptr));
        QTableWidgetItem *___qtablewidgetitem36 = tableWidget->item(0, 2);
        ___qtablewidgetitem36->setText(QApplication::translate("MainWindow", "20170101", nullptr));
        QTableWidgetItem *___qtablewidgetitem37 = tableWidget->item(1, 0);
        ___qtablewidgetitem37->setText(QApplication::translate("MainWindow", "0002.NC", nullptr));
        QTableWidgetItem *___qtablewidgetitem38 = tableWidget->item(1, 1);
        ___qtablewidgetitem38->setText(QApplication::translate("MainWindow", "10KB", nullptr));
        QTableWidgetItem *___qtablewidgetitem39 = tableWidget->item(1, 2);
        ___qtablewidgetitem39->setText(QApplication::translate("MainWindow", "20170110", nullptr));
        QTableWidgetItem *___qtablewidgetitem40 = tableWidget->item(2, 0);
        ___qtablewidgetitem40->setText(QApplication::translate("MainWindow", "0003.NC", nullptr));
        QTableWidgetItem *___qtablewidgetitem41 = tableWidget->item(2, 1);
        ___qtablewidgetitem41->setText(QApplication::translate("MainWindow", "9KB", nullptr));
        QTableWidgetItem *___qtablewidgetitem42 = tableWidget->item(2, 2);
        ___qtablewidgetitem42->setText(QApplication::translate("MainWindow", "20170101", nullptr));
        tableWidget->setSortingEnabled(__sortingEnabled);

        lineEdit_7->setText(QApplication::translate("MainWindow", "0001.NC", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "\346\226\207\344\273\266\345\220\215", nullptr));
        pushButton_2->setText(QApplication::translate("MainWindow", "\345\217\226\346\266\210", nullptr));
        pushButton->setText(QApplication::translate("MainWindow", "\350\275\275\345\205\245", nullptr));
        textBrowser->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'\351\273\221\344\275\223'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'SimSun';\">N10 G41 G01 X40 Z30</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'SimSun';\">N20 G03 X70 Z0 I10 K-20</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'SimSun';\">N30 G01 X20 Z-30.5613</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left"
                        ":0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'SimSun';\"><br /></p></body></html>", nullptr));
        label_3->setText(QString());
        pushButton_3->setText(QApplication::translate("MainWindow", "\345\220\257\345\212\250", nullptr));
        pushButton_4->setText(QApplication::translate("MainWindow", "\346\232\202\345\201\234", nullptr));
        textBrowser_2->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'\351\273\221\344\275\223'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'SimSun';\">N10 G41 G01 X40 Z30</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'SimSun';\">N20 G03 X70 Z0 I10 K-20</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-family:'SimSun';\">N30 G01 X20 Z-30.5613</span></p>\n"
"<p style=\"-qt-paragraph-type:empty; margin-top:0px; margin-bottom:0px; margin-left"
                        ":0px; margin-right:0px; -qt-block-indent:0; text-indent:0px; font-family:'SimSun';\"><br /></p></body></html>", nullptr));
        label_5->setText(QString());
        pushButton_5->setText(QApplication::translate("MainWindow", "\345\220\257\345\212\250", nullptr));
        QTableWidgetItem *___qtablewidgetitem43 = tableWidget_33->horizontalHeaderItem(0);
        ___qtablewidgetitem43->setText(QApplication::translate("MainWindow", "X", nullptr));
        QTableWidgetItem *___qtablewidgetitem44 = tableWidget_33->horizontalHeaderItem(1);
        ___qtablewidgetitem44->setText(QApplication::translate("MainWindow", "Y", nullptr));
        QTableWidgetItem *___qtablewidgetitem45 = tableWidget_33->horizontalHeaderItem(2);
        ___qtablewidgetitem45->setText(QApplication::translate("MainWindow", "U", nullptr));
        QTableWidgetItem *___qtablewidgetitem46 = tableWidget_33->horizontalHeaderItem(3);
        ___qtablewidgetitem46->setText(QApplication::translate("MainWindow", "V", nullptr));
        QTableWidgetItem *___qtablewidgetitem47 = tableWidget_33->horizontalHeaderItem(4);
        ___qtablewidgetitem47->setText(QApplication::translate("MainWindow", "Z", nullptr));
        QTableWidgetItem *___qtablewidgetitem48 = tableWidget_33->verticalHeaderItem(0);
        ___qtablewidgetitem48->setText(QApplication::translate("MainWindow", "G54", nullptr));
        QTableWidgetItem *___qtablewidgetitem49 = tableWidget_33->verticalHeaderItem(1);
        ___qtablewidgetitem49->setText(QApplication::translate("MainWindow", "G55", nullptr));
        QTableWidgetItem *___qtablewidgetitem50 = tableWidget_33->verticalHeaderItem(2);
        ___qtablewidgetitem50->setText(QApplication::translate("MainWindow", "G56", nullptr));
        QTableWidgetItem *___qtablewidgetitem51 = tableWidget_33->verticalHeaderItem(3);
        ___qtablewidgetitem51->setText(QApplication::translate("MainWindow", "G57", nullptr));
        QTableWidgetItem *___qtablewidgetitem52 = tableWidget_33->verticalHeaderItem(4);
        ___qtablewidgetitem52->setText(QApplication::translate("MainWindow", "G58", nullptr));
        QTableWidgetItem *___qtablewidgetitem53 = tableWidget_33->verticalHeaderItem(5);
        ___qtablewidgetitem53->setText(QApplication::translate("MainWindow", "G59", nullptr));

        const bool __sortingEnabled1 = tableWidget_33->isSortingEnabled();
        tableWidget_33->setSortingEnabled(false);
        QTableWidgetItem *___qtablewidgetitem54 = tableWidget_33->item(0, 0);
        ___qtablewidgetitem54->setText(QApplication::translate("MainWindow", "+0.000", nullptr));
        QTableWidgetItem *___qtablewidgetitem55 = tableWidget_33->item(0, 1);
        ___qtablewidgetitem55->setText(QApplication::translate("MainWindow", "+0.000", nullptr));
        QTableWidgetItem *___qtablewidgetitem56 = tableWidget_33->item(0, 2);
        ___qtablewidgetitem56->setText(QApplication::translate("MainWindow", "+0.000", nullptr));
        QTableWidgetItem *___qtablewidgetitem57 = tableWidget_33->item(0, 3);
        ___qtablewidgetitem57->setText(QApplication::translate("MainWindow", "+0.000", nullptr));
        QTableWidgetItem *___qtablewidgetitem58 = tableWidget_33->item(0, 4);
        ___qtablewidgetitem58->setText(QApplication::translate("MainWindow", "+0.000", nullptr));
        QTableWidgetItem *___qtablewidgetitem59 = tableWidget_33->item(1, 0);
        ___qtablewidgetitem59->setText(QApplication::translate("MainWindow", "+0.000", nullptr));
        QTableWidgetItem *___qtablewidgetitem60 = tableWidget_33->item(1, 1);
        ___qtablewidgetitem60->setText(QApplication::translate("MainWindow", "+0.000", nullptr));
        QTableWidgetItem *___qtablewidgetitem61 = tableWidget_33->item(1, 2);
        ___qtablewidgetitem61->setText(QApplication::translate("MainWindow", "+0.000", nullptr));
        QTableWidgetItem *___qtablewidgetitem62 = tableWidget_33->item(1, 3);
        ___qtablewidgetitem62->setText(QApplication::translate("MainWindow", "+0.000", nullptr));
        QTableWidgetItem *___qtablewidgetitem63 = tableWidget_33->item(1, 4);
        ___qtablewidgetitem63->setText(QApplication::translate("MainWindow", "+0.000", nullptr));
        QTableWidgetItem *___qtablewidgetitem64 = tableWidget_33->item(2, 0);
        ___qtablewidgetitem64->setText(QApplication::translate("MainWindow", "+0.000", nullptr));
        QTableWidgetItem *___qtablewidgetitem65 = tableWidget_33->item(2, 1);
        ___qtablewidgetitem65->setText(QApplication::translate("MainWindow", "+0.000", nullptr));
        QTableWidgetItem *___qtablewidgetitem66 = tableWidget_33->item(2, 2);
        ___qtablewidgetitem66->setText(QApplication::translate("MainWindow", "+0.000", nullptr));
        QTableWidgetItem *___qtablewidgetitem67 = tableWidget_33->item(2, 3);
        ___qtablewidgetitem67->setText(QApplication::translate("MainWindow", "+0.000", nullptr));
        QTableWidgetItem *___qtablewidgetitem68 = tableWidget_33->item(2, 4);
        ___qtablewidgetitem68->setText(QApplication::translate("MainWindow", "+0.000", nullptr));
        QTableWidgetItem *___qtablewidgetitem69 = tableWidget_33->item(3, 0);
        ___qtablewidgetitem69->setText(QApplication::translate("MainWindow", "+0.000", nullptr));
        QTableWidgetItem *___qtablewidgetitem70 = tableWidget_33->item(3, 1);
        ___qtablewidgetitem70->setText(QApplication::translate("MainWindow", "+0.000", nullptr));
        QTableWidgetItem *___qtablewidgetitem71 = tableWidget_33->item(3, 2);
        ___qtablewidgetitem71->setText(QApplication::translate("MainWindow", "+0.000", nullptr));
        QTableWidgetItem *___qtablewidgetitem72 = tableWidget_33->item(3, 3);
        ___qtablewidgetitem72->setText(QApplication::translate("MainWindow", "+0.000", nullptr));
        QTableWidgetItem *___qtablewidgetitem73 = tableWidget_33->item(3, 4);
        ___qtablewidgetitem73->setText(QApplication::translate("MainWindow", "+0.000", nullptr));
        tableWidget_33->setSortingEnabled(__sortingEnabled1);

        pushButton_24->setText(QApplication::translate("MainWindow", "X", nullptr));
        pushButton_25->setText(QApplication::translate("MainWindow", "Y", nullptr));
        label_7->setText(QApplication::translate("MainWindow", "\350\276\223\345\205\245\346\203\263\350\246\201\346\211\247\350\241\214\347\232\204\344\273\243\347\240\201\357\274\214\347\202\271\345\207\273\346\211\247\350\241\214", nullptr));
        pushButton_14->setText(QApplication::translate("MainWindow", "\346\211\247\350\241\214", nullptr));
        radioButton->setText(QApplication::translate("MainWindow", "\350\241\245\345\201\277\350\277\233\350\241\214", nullptr));
        label_Txt->setText(QString());
        pB_New_Txt->setText(QApplication::translate("MainWindow", "\346\226\260\345\273\272", nullptr));
        pB_ReadIn_Txt->setText(QApplication::translate("MainWindow", "\350\257\273\345\205\245", nullptr));
        pB_Save_Txt->setText(QApplication::translate("MainWindow", "\344\277\235\345\255\230", nullptr));
        pB_Undo_Txt->setText(QApplication::translate("MainWindow", "\346\222\244\351\224\200", nullptr));
        pB_GrammarCheck_Txt->setText(QApplication::translate("MainWindow", "\350\257\255\346\263\225\346\243\200\346\237\245", nullptr));
        pB_Send_Txt->setText(QApplication::translate("MainWindow", "\344\270\213\350\275\275", nullptr));
        pTE_GCode->setPlainText(QApplication::translate("MainWindow", "N10 G41 G01 X50 Z0\n"
"N20 G01 X3.6771 Z-8.5019\n"
"N30 G03 X13.1998 Z-46.9528 I-17.1104 K-24.6421\n"
"N40 G03 X12.7442 Z-30.1882 I17.9228 K8.8755", nullptr));
        label_214->setText(QApplication::translate("MainWindow", "\346\234\272\346\242\260\345\235\220\346\240\207-\345\212\240\345\267\245\345\235\220\346\240\207-\345\267\245\344\273\266\345\235\220\346\240\207", nullptr));
        QTableWidgetItem *___qtablewidgetitem74 = tableWidget_30->horizontalHeaderItem(0);
        ___qtablewidgetitem74->setText(QApplication::translate("MainWindow", "\345\235\220\346\240\207\347\263\273", nullptr));
        QTableWidgetItem *___qtablewidgetitem75 = tableWidget_30->horizontalHeaderItem(1);
        ___qtablewidgetitem75->setText(QApplication::translate("MainWindow", "X\350\275\264", nullptr));
        QTableWidgetItem *___qtablewidgetitem76 = tableWidget_30->horizontalHeaderItem(2);
        ___qtablewidgetitem76->setText(QApplication::translate("MainWindow", "Y\350\275\264", nullptr));
        QTableWidgetItem *___qtablewidgetitem77 = tableWidget_30->horizontalHeaderItem(3);
        ___qtablewidgetitem77->setText(QApplication::translate("MainWindow", "U\350\275\264", nullptr));
        QTableWidgetItem *___qtablewidgetitem78 = tableWidget_30->horizontalHeaderItem(4);
        ___qtablewidgetitem78->setText(QApplication::translate("MainWindow", "V\350\275\264", nullptr));
        label_215->setText(QApplication::translate("MainWindow", "\346\234\272\346\242\260\345\235\220\346\240\207-\345\212\240\345\267\245\345\235\220\346\240\207-\345\267\245\344\273\266\345\235\220\346\240\207", nullptr));
        QTableWidgetItem *___qtablewidgetitem79 = tableWidget_31->horizontalHeaderItem(0);
        ___qtablewidgetitem79->setText(QApplication::translate("MainWindow", "\345\235\220\346\240\207\347\263\273", nullptr));
        QTableWidgetItem *___qtablewidgetitem80 = tableWidget_31->horizontalHeaderItem(1);
        ___qtablewidgetitem80->setText(QApplication::translate("MainWindow", "X\350\275\264", nullptr));
        QTableWidgetItem *___qtablewidgetitem81 = tableWidget_31->horizontalHeaderItem(2);
        ___qtablewidgetitem81->setText(QApplication::translate("MainWindow", "Y\350\275\264", nullptr));
        QTableWidgetItem *___qtablewidgetitem82 = tableWidget_31->horizontalHeaderItem(3);
        ___qtablewidgetitem82->setText(QApplication::translate("MainWindow", "U\350\275\264", nullptr));
        QTableWidgetItem *___qtablewidgetitem83 = tableWidget_31->horizontalHeaderItem(4);
        ___qtablewidgetitem83->setText(QApplication::translate("MainWindow", "V\350\275\264", nullptr));
        label_216->setText(QApplication::translate("MainWindow", "\346\234\272\346\242\260\345\235\220\346\240\207-\345\212\240\345\267\245\345\235\220\346\240\207-\345\267\245\344\273\266\345\235\220\346\240\207", nullptr));
        QTableWidgetItem *___qtablewidgetitem84 = tableWidget_32->horizontalHeaderItem(0);
        ___qtablewidgetitem84->setText(QApplication::translate("MainWindow", "No.", nullptr));
        QTableWidgetItem *___qtablewidgetitem85 = tableWidget_32->horizontalHeaderItem(1);
        ___qtablewidgetitem85->setText(QApplication::translate("MainWindow", "r", nullptr));
        QTableWidgetItem *___qtablewidgetitem86 = tableWidget_32->horizontalHeaderItem(2);
        ___qtablewidgetitem86->setText(QApplication::translate("MainWindow", "\316\261", nullptr));
        QTableWidgetItem *___qtablewidgetitem87 = tableWidget_32->horizontalHeaderItem(3);
        ___qtablewidgetitem87->setText(QApplication::translate("MainWindow", "\316\262", nullptr));
        pushButton_zoom->setText(QApplication::translate("MainWindow", "\346\224\276\345\244\247", nullptr));
        pushButton_15->setText(QApplication::translate("MainWindow", "\346\213\215\347\205\247", nullptr));
        label_9->setText(QApplication::translate("MainWindow", "\345\256\236\346\227\266\345\212\240\345\267\245\350\275\250\350\277\271", nullptr));
        pushButton_backtoCCD->setText(QApplication::translate("MainWindow", "\350\277\224\345\233\236", nullptr));
        label_GLWidget_Coordinate_Name->setText(QApplication::translate("MainWindow", "GLWidget\345\235\220\346\240\207", nullptr));
        label_GLWidget_Coordinate->setText(QString());
        label_Zoom_Factor_Name->setText(QApplication::translate("MainWindow", "\347\274\251\346\224\276\345\233\240\345\255\220", nullptr));
        label_Zoom_Factor->setText(QString());
        pB3_0->setText(QString());
        pB3_1->setText(QString());
        pB3_2->setText(QString());
        pB3_3->setText(QString());
        pB3_4->setText(QString());
        pB3_5->setText(QString());
        pB3_6->setText(QString());
        pB3_7->setText(QString());
        pB_help->setText(QApplication::translate("MainWindow", "\345\270\256\345\212\251", nullptr));
        pB_data->setText(QApplication::translate("MainWindow", "\350\256\276\347\275\256", nullptr));
        pB_manul->setText(QApplication::translate("MainWindow", "\346\211\213\345\212\250", nullptr));
        pB_program->setText(QApplication::translate("MainWindow", "\347\250\213\345\272\217", nullptr));
        pB_manufacture->setText(QApplication::translate("MainWindow", "\345\212\240\345\267\245", nullptr));
        pB_view->setText(QApplication::translate("MainWindow", "\346\230\276\347\244\272", nullptr));
        pB_setting->setText(QApplication::translate("MainWindow", "\345\217\202\346\225\260", nullptr));
        pB2_0->setText(QString());
        pB2_1->setText(QString());
        pB2_2->setText(QString());
        pB2_3->setText(QString());
        pB2_4->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
