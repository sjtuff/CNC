/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.10.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.10.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[87];
    char stringdata0[1704];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 17), // "label_Txt_Changed"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 14), // "status_Changed"
QT_MOC_LITERAL(4, 45, 17), // "errors_in_runtime"
QT_MOC_LITERAL(5, 63, 14), // "initialize_ccd"
QT_MOC_LITERAL(6, 78, 15), // "capture_picture"
QT_MOC_LITERAL(7, 94, 8), // "stop_ccd"
QT_MOC_LITERAL(8, 103, 17), // "call_Trio_connect"
QT_MOC_LITERAL(9, 121, 5), // "bool*"
QT_MOC_LITERAL(10, 127, 15), // "call_Trio_close"
QT_MOC_LITERAL(11, 143, 18), // "call_Trio_send_txt"
QT_MOC_LITERAL(12, 162, 21), // "call_Trio_run_program"
QT_MOC_LITERAL(13, 184, 27), // "call_Trio_return_axis_paras"
QT_MOC_LITERAL(14, 212, 25), // "call_Trio_run_MANUAL_MODE"
QT_MOC_LITERAL(15, 238, 18), // "call_Trio_write_VR"
QT_MOC_LITERAL(16, 257, 21), // "call_Trio_write_TABLE"
QT_MOC_LITERAL(17, 279, 20), // "call_start_time_loop"
QT_MOC_LITERAL(18, 300, 19), // "call_stop_time_loop"
QT_MOC_LITERAL(19, 320, 14), // "return_QPointF"
QT_MOC_LITERAL(20, 335, 22), // "return_processing_line"
QT_MOC_LITERAL(21, 358, 12), // "start_opencv"
QT_MOC_LITERAL(22, 371, 12), // "start_grabuv"
QT_MOC_LITERAL(23, 384, 13), // "Imgdata_trans"
QT_MOC_LITERAL(24, 398, 3), // "Mat"
QT_MOC_LITERAL(25, 402, 13), // "Posdata_trans"
QT_MOC_LITERAL(26, 416, 35), // "return_OpenGLWidget_Zoom_Coor..."
QT_MOC_LITERAL(27, 452, 21), // "current_time_text_set"
QT_MOC_LITERAL(28, 474, 14), // "errors_handled"
QT_MOC_LITERAL(29, 489, 22), // "errors_of_trio_handled"
QT_MOC_LITERAL(30, 512, 23), // "pressed_mainButtonGroup"
QT_MOC_LITERAL(31, 536, 1), // "i"
QT_MOC_LITERAL(32, 538, 22), // "pressed_subButtonGroup"
QT_MOC_LITERAL(33, 561, 23), // "pressed_sub2ButtonGroup"
QT_MOC_LITERAL(34, 585, 17), // "txtfile_new_built"
QT_MOC_LITERAL(35, 603, 14), // "txtfile_readin"
QT_MOC_LITERAL(36, 618, 12), // "txtfile_save"
QT_MOC_LITERAL(37, 631, 12), // "txtfile_undo"
QT_MOC_LITERAL(38, 644, 21), // "txtfile_grammar_check"
QT_MOC_LITERAL(39, 666, 20), // "txtfile_send_to_trio"
QT_MOC_LITERAL(40, 687, 17), // "label_Txt_Content"
QT_MOC_LITERAL(41, 705, 13), // "pB_Connection"
QT_MOC_LITERAL(42, 719, 31), // "request_Trio_parameters_request"
QT_MOC_LITERAL(43, 751, 23), // "receive_Trio_axis_paras"
QT_MOC_LITERAL(44, 775, 20), // "receive_current_time"
QT_MOC_LITERAL(45, 796, 8), // "QString*"
QT_MOC_LITERAL(46, 805, 22), // "receive_captured_image"
QT_MOC_LITERAL(47, 828, 6), // "uchar*"
QT_MOC_LITERAL(48, 835, 17), // "on_rB_CCD_toggled"
QT_MOC_LITERAL(49, 853, 7), // "checked"
QT_MOC_LITERAL(50, 861, 24), // "on_pushButton_15_clicked"
QT_MOC_LITERAL(51, 886, 45), // "on_pushButton_write_tool_comp..."
QT_MOC_LITERAL(52, 932, 26), // "on_pB_Start_offset_clicked"
QT_MOC_LITERAL(53, 959, 35), // "receive_Trio_txt_transfer_sit..."
QT_MOC_LITERAL(54, 995, 10), // "lineChoose"
QT_MOC_LITERAL(55, 1006, 3), // "num"
QT_MOC_LITERAL(56, 1010, 11), // "OrderRevise"
QT_MOC_LITERAL(57, 1022, 11), // "orderRevise"
QT_MOC_LITERAL(58, 1034, 9), // "showTrail"
QT_MOC_LITERAL(59, 1044, 27), // "on_pB_Zero_Return_X_clicked"
QT_MOC_LITERAL(60, 1072, 27), // "on_pB_Zero_Return_Y_clicked"
QT_MOC_LITERAL(61, 1100, 27), // "on_pB_Zero_Return_U_clicked"
QT_MOC_LITERAL(62, 1128, 27), // "on_pB_Zero_Return_V_clicked"
QT_MOC_LITERAL(63, 1156, 27), // "on_pB_Zero_Return_Z_clicked"
QT_MOC_LITERAL(64, 1184, 31), // "on_pB_Zero_Return_Reset_clicked"
QT_MOC_LITERAL(65, 1216, 30), // "on_pB_Zero_Return_Load_clicked"
QT_MOC_LITERAL(66, 1247, 38), // "on_pB_Coordinate_Setting_Rese..."
QT_MOC_LITERAL(67, 1286, 37), // "on_pB_Coordinate_Setting_Load..."
QT_MOC_LITERAL(68, 1324, 16), // "pTE_GCode_JumpTo"
QT_MOC_LITERAL(69, 1341, 12), // "JumptoNumber"
QT_MOC_LITERAL(70, 1354, 29), // "encode_circulation_processing"
QT_MOC_LITERAL(71, 1384, 15), // "QList<QString>&"
QT_MOC_LITERAL(72, 1400, 15), // "processing_line"
QT_MOC_LITERAL(73, 1416, 14), // "cal_ins_Xspeed"
QT_MOC_LITERAL(74, 1431, 14), // "cal_ins_Yspeed"
QT_MOC_LITERAL(75, 1446, 29), // "on_tableWidget_28_itemClicked"
QT_MOC_LITERAL(76, 1476, 17), // "QTableWidgetItem*"
QT_MOC_LITERAL(77, 1494, 4), // "item"
QT_MOC_LITERAL(78, 1499, 22), // "on_radioButton_toggled"
QT_MOC_LITERAL(79, 1522, 20), // "start_ImageDataTrans"
QT_MOC_LITERAL(80, 1543, 23), // "start_PositionDataTrans"
QT_MOC_LITERAL(81, 1567, 23), // "opencv_parameters_trans"
QT_MOC_LITERAL(82, 1591, 9), // "return_uv"
QT_MOC_LITERAL(83, 1601, 22), // "compensation_value_set"
QT_MOC_LITERAL(84, 1624, 26), // "on_pushButton_zoom_clicked"
QT_MOC_LITERAL(85, 1651, 31), // "on_pushButton_backtoCCD_clicked"
QT_MOC_LITERAL(86, 1683, 20) // "receive_Slider_Value"

    },
    "MainWindow\0label_Txt_Changed\0\0"
    "status_Changed\0errors_in_runtime\0"
    "initialize_ccd\0capture_picture\0stop_ccd\0"
    "call_Trio_connect\0bool*\0call_Trio_close\0"
    "call_Trio_send_txt\0call_Trio_run_program\0"
    "call_Trio_return_axis_paras\0"
    "call_Trio_run_MANUAL_MODE\0call_Trio_write_VR\0"
    "call_Trio_write_TABLE\0call_start_time_loop\0"
    "call_stop_time_loop\0return_QPointF\0"
    "return_processing_line\0start_opencv\0"
    "start_grabuv\0Imgdata_trans\0Mat\0"
    "Posdata_trans\0return_OpenGLWidget_Zoom_Coordinate\0"
    "current_time_text_set\0errors_handled\0"
    "errors_of_trio_handled\0pressed_mainButtonGroup\0"
    "i\0pressed_subButtonGroup\0"
    "pressed_sub2ButtonGroup\0txtfile_new_built\0"
    "txtfile_readin\0txtfile_save\0txtfile_undo\0"
    "txtfile_grammar_check\0txtfile_send_to_trio\0"
    "label_Txt_Content\0pB_Connection\0"
    "request_Trio_parameters_request\0"
    "receive_Trio_axis_paras\0receive_current_time\0"
    "QString*\0receive_captured_image\0uchar*\0"
    "on_rB_CCD_toggled\0checked\0"
    "on_pushButton_15_clicked\0"
    "on_pushButton_write_tool_compensation_clicked\0"
    "on_pB_Start_offset_clicked\0"
    "receive_Trio_txt_transfer_situation\0"
    "lineChoose\0num\0OrderRevise\0orderRevise\0"
    "showTrail\0on_pB_Zero_Return_X_clicked\0"
    "on_pB_Zero_Return_Y_clicked\0"
    "on_pB_Zero_Return_U_clicked\0"
    "on_pB_Zero_Return_V_clicked\0"
    "on_pB_Zero_Return_Z_clicked\0"
    "on_pB_Zero_Return_Reset_clicked\0"
    "on_pB_Zero_Return_Load_clicked\0"
    "on_pB_Coordinate_Setting_Reset_clicked\0"
    "on_pB_Coordinate_Setting_Load_clicked\0"
    "pTE_GCode_JumpTo\0JumptoNumber\0"
    "encode_circulation_processing\0"
    "QList<QString>&\0processing_line\0"
    "cal_ins_Xspeed\0cal_ins_Yspeed\0"
    "on_tableWidget_28_itemClicked\0"
    "QTableWidgetItem*\0item\0on_radioButton_toggled\0"
    "start_ImageDataTrans\0start_PositionDataTrans\0"
    "opencv_parameters_trans\0return_uv\0"
    "compensation_value_set\0"
    "on_pushButton_zoom_clicked\0"
    "on_pushButton_backtoCCD_clicked\0"
    "receive_Slider_Value"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
      73,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      23,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,  379,    2, 0x06 /* Public */,
       3,    1,  382,    2, 0x06 /* Public */,
       4,    1,  385,    2, 0x06 /* Public */,
       5,    0,  388,    2, 0x06 /* Public */,
       6,    0,  389,    2, 0x06 /* Public */,
       7,    0,  390,    2, 0x06 /* Public */,
       8,    1,  391,    2, 0x06 /* Public */,
      10,    0,  394,    2, 0x06 /* Public */,
      11,    3,  395,    2, 0x06 /* Public */,
      12,    2,  402,    2, 0x06 /* Public */,
      13,    1,  407,    2, 0x06 /* Public */,
      14,    1,  410,    2, 0x06 /* Public */,
      15,    2,  413,    2, 0x06 /* Public */,
      16,    2,  418,    2, 0x06 /* Public */,
      17,    0,  423,    2, 0x06 /* Public */,
      18,    0,  424,    2, 0x06 /* Public */,
      19,    1,  425,    2, 0x06 /* Public */,
      20,    1,  428,    2, 0x06 /* Public */,
      21,    0,  431,    2, 0x06 /* Public */,
      22,    0,  432,    2, 0x06 /* Public */,
      23,    1,  433,    2, 0x06 /* Public */,
      25,    3,  436,    2, 0x06 /* Public */,
      26,    2,  443,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      27,    0,  448,    2, 0x08 /* Private */,
      28,    1,  449,    2, 0x08 /* Private */,
      29,    4,  452,    2, 0x08 /* Private */,
      30,    1,  461,    2, 0x08 /* Private */,
      32,    1,  464,    2, 0x08 /* Private */,
      33,    1,  467,    2, 0x08 /* Private */,
      34,    0,  470,    2, 0x08 /* Private */,
      35,    0,  471,    2, 0x08 /* Private */,
      36,    0,  472,    2, 0x08 /* Private */,
      37,    0,  473,    2, 0x08 /* Private */,
      38,    0,  474,    2, 0x08 /* Private */,
      39,    0,  475,    2, 0x08 /* Private */,
      40,    1,  476,    2, 0x08 /* Private */,
      41,    0,  479,    2, 0x08 /* Private */,
      42,    0,  480,    2, 0x08 /* Private */,
      43,    2,  481,    2, 0x08 /* Private */,
      44,    1,  486,    2, 0x08 /* Private */,
      46,    1,  489,    2, 0x08 /* Private */,
      48,    1,  492,    2, 0x08 /* Private */,
      50,    0,  495,    2, 0x08 /* Private */,
      51,    0,  496,    2, 0x08 /* Private */,
      52,    0,  497,    2, 0x08 /* Private */,
      53,    1,  498,    2, 0x08 /* Private */,
      54,    1,  501,    2, 0x08 /* Private */,
      56,    1,  504,    2, 0x08 /* Private */,
      58,    0,  507,    2, 0x08 /* Private */,
      59,    0,  508,    2, 0x08 /* Private */,
      60,    0,  509,    2, 0x08 /* Private */,
      61,    0,  510,    2, 0x08 /* Private */,
      62,    0,  511,    2, 0x08 /* Private */,
      63,    0,  512,    2, 0x08 /* Private */,
      64,    0,  513,    2, 0x08 /* Private */,
      65,    0,  514,    2, 0x08 /* Private */,
      66,    0,  515,    2, 0x08 /* Private */,
      67,    0,  516,    2, 0x08 /* Private */,
      68,    1,  517,    2, 0x08 /* Private */,
      70,    1,  520,    2, 0x08 /* Private */,
      72,    1,  523,    2, 0x08 /* Private */,
      73,    1,  526,    2, 0x08 /* Private */,
      74,    1,  529,    2, 0x08 /* Private */,
      75,    1,  532,    2, 0x08 /* Private */,
      78,    1,  535,    2, 0x08 /* Private */,
      79,    0,  538,    2, 0x08 /* Private */,
      80,    0,  539,    2, 0x08 /* Private */,
      81,    0,  540,    2, 0x08 /* Private */,
      82,    0,  541,    2, 0x08 /* Private */,
      83,    3,  542,    2, 0x08 /* Private */,
      84,    0,  549,    2, 0x08 /* Private */,
      85,    0,  550,    2, 0x08 /* Private */,
      86,    1,  551,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9,    2,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9, QMetaType::QString, QMetaType::QString,    2,    2,    2,
    QMetaType::Void, 0x80000000 | 9, QMetaType::QString,    2,    2,
    QMetaType::Void, 0x80000000 | 9,    2,
    QMetaType::Void, 0x80000000 | 9,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Double,    2,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Double,    2,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QPointF,    2,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 24,    2,
    QMetaType::Void, QMetaType::Float, QMetaType::Float, QMetaType::Float,    2,    2,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    2,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::QString, QMetaType::QString, QMetaType::QString,    2,    2,    2,    2,
    QMetaType::Void, QMetaType::Int,   31,
    QMetaType::Void, QMetaType::Int,   31,
    QMetaType::Void, QMetaType::Int,   31,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 9, QMetaType::QVariant,    2,    2,
    QMetaType::Void, 0x80000000 | 45,    2,
    QMetaType::Void, 0x80000000 | 47,    2,
    QMetaType::Void, QMetaType::Bool,   49,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Int,   55,
    QMetaType::Void, QMetaType::QString,   57,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   69,
    QMetaType::Void, 0x80000000 | 71,    2,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Double, QMetaType::Double,    2,
    QMetaType::Double, QMetaType::Double,    2,
    QMetaType::Void, 0x80000000 | 76,   77,
    QMetaType::Void, QMetaType::Bool,   49,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool, QMetaType::Float, QMetaType::Float,    2,    2,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    2,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        MainWindow *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->label_Txt_Changed((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 1: _t->status_Changed((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->errors_in_runtime((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 3: _t->initialize_ccd(); break;
        case 4: _t->capture_picture(); break;
        case 5: _t->stop_ccd(); break;
        case 6: _t->call_Trio_connect((*reinterpret_cast< bool*(*)>(_a[1]))); break;
        case 7: _t->call_Trio_close(); break;
        case 8: _t->call_Trio_send_txt((*reinterpret_cast< bool*(*)>(_a[1])),(*reinterpret_cast< const QString(*)>(_a[2])),(*reinterpret_cast< const QString(*)>(_a[3]))); break;
        case 9: _t->call_Trio_run_program((*reinterpret_cast< bool*(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2]))); break;
        case 10: _t->call_Trio_return_axis_paras((*reinterpret_cast< bool*(*)>(_a[1]))); break;
        case 11: _t->call_Trio_run_MANUAL_MODE((*reinterpret_cast< bool*(*)>(_a[1]))); break;
        case 12: _t->call_Trio_write_VR((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 13: _t->call_Trio_write_TABLE((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2]))); break;
        case 14: _t->call_start_time_loop(); break;
        case 15: _t->call_stop_time_loop(); break;
        case 16: _t->return_QPointF((*reinterpret_cast< QPointF(*)>(_a[1]))); break;
        case 17: _t->return_processing_line((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 18: _t->start_opencv(); break;
        case 19: _t->start_grabuv(); break;
        case 20: _t->Imgdata_trans((*reinterpret_cast< Mat(*)>(_a[1]))); break;
        case 21: _t->Posdata_trans((*reinterpret_cast< float(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3]))); break;
        case 22: _t->return_OpenGLWidget_Zoom_Coordinate((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 23: _t->current_time_text_set(); break;
        case 24: _t->errors_handled((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 25: _t->errors_of_trio_handled((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< QString(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3])),(*reinterpret_cast< QString(*)>(_a[4]))); break;
        case 26: _t->pressed_mainButtonGroup((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 27: _t->pressed_subButtonGroup((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 28: _t->pressed_sub2ButtonGroup((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 29: _t->txtfile_new_built(); break;
        case 30: _t->txtfile_readin(); break;
        case 31: _t->txtfile_save(); break;
        case 32: _t->txtfile_undo(); break;
        case 33: _t->txtfile_grammar_check(); break;
        case 34: _t->txtfile_send_to_trio(); break;
        case 35: _t->label_Txt_Content((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 36: _t->pB_Connection(); break;
        case 37: _t->request_Trio_parameters_request(); break;
        case 38: _t->receive_Trio_axis_paras((*reinterpret_cast< bool*(*)>(_a[1])),(*reinterpret_cast< QVariant(*)>(_a[2]))); break;
        case 39: _t->receive_current_time((*reinterpret_cast< QString*(*)>(_a[1]))); break;
        case 40: _t->receive_captured_image((*reinterpret_cast< uchar*(*)>(_a[1]))); break;
        case 41: _t->on_rB_CCD_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 42: _t->on_pushButton_15_clicked(); break;
        case 43: _t->on_pushButton_write_tool_compensation_clicked(); break;
        case 44: _t->on_pB_Start_offset_clicked(); break;
        case 45: _t->receive_Trio_txt_transfer_situation((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 46: _t->lineChoose((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 47: _t->OrderRevise((*reinterpret_cast< QString(*)>(_a[1]))); break;
        case 48: _t->showTrail(); break;
        case 49: _t->on_pB_Zero_Return_X_clicked(); break;
        case 50: _t->on_pB_Zero_Return_Y_clicked(); break;
        case 51: _t->on_pB_Zero_Return_U_clicked(); break;
        case 52: _t->on_pB_Zero_Return_V_clicked(); break;
        case 53: _t->on_pB_Zero_Return_Z_clicked(); break;
        case 54: _t->on_pB_Zero_Return_Reset_clicked(); break;
        case 55: _t->on_pB_Zero_Return_Load_clicked(); break;
        case 56: _t->on_pB_Coordinate_Setting_Reset_clicked(); break;
        case 57: _t->on_pB_Coordinate_Setting_Load_clicked(); break;
        case 58: _t->pTE_GCode_JumpTo((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 59: _t->encode_circulation_processing((*reinterpret_cast< QList<QString>(*)>(_a[1]))); break;
        case 60: _t->processing_line((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 61: { double _r = _t->cal_ins_Xspeed((*reinterpret_cast< double(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = std::move(_r); }  break;
        case 62: { double _r = _t->cal_ins_Yspeed((*reinterpret_cast< double(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = std::move(_r); }  break;
        case 63: _t->on_tableWidget_28_itemClicked((*reinterpret_cast< QTableWidgetItem*(*)>(_a[1]))); break;
        case 64: _t->on_radioButton_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 65: _t->start_ImageDataTrans(); break;
        case 66: _t->start_PositionDataTrans(); break;
        case 67: _t->opencv_parameters_trans(); break;
        case 68: _t->return_uv(); break;
        case 69: _t->compensation_value_set((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< float(*)>(_a[2])),(*reinterpret_cast< float(*)>(_a[3]))); break;
        case 70: _t->on_pushButton_zoom_clicked(); break;
        case 71: _t->on_pushButton_backtoCCD_clicked(); break;
        case 72: _t->receive_Slider_Value((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            typedef void (MainWindow::*_t)(QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::label_Txt_Changed)) {
                *result = 0;
                return;
            }
        }
        {
            typedef void (MainWindow::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::status_Changed)) {
                *result = 1;
                return;
            }
        }
        {
            typedef void (MainWindow::*_t)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::errors_in_runtime)) {
                *result = 2;
                return;
            }
        }
        {
            typedef void (MainWindow::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::initialize_ccd)) {
                *result = 3;
                return;
            }
        }
        {
            typedef void (MainWindow::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::capture_picture)) {
                *result = 4;
                return;
            }
        }
        {
            typedef void (MainWindow::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::stop_ccd)) {
                *result = 5;
                return;
            }
        }
        {
            typedef void (MainWindow::*_t)(bool * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::call_Trio_connect)) {
                *result = 6;
                return;
            }
        }
        {
            typedef void (MainWindow::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::call_Trio_close)) {
                *result = 7;
                return;
            }
        }
        {
            typedef void (MainWindow::*_t)(bool * , const QString , const QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::call_Trio_send_txt)) {
                *result = 8;
                return;
            }
        }
        {
            typedef void (MainWindow::*_t)(bool * , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::call_Trio_run_program)) {
                *result = 9;
                return;
            }
        }
        {
            typedef void (MainWindow::*_t)(bool * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::call_Trio_return_axis_paras)) {
                *result = 10;
                return;
            }
        }
        {
            typedef void (MainWindow::*_t)(bool * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::call_Trio_run_MANUAL_MODE)) {
                *result = 11;
                return;
            }
        }
        {
            typedef void (MainWindow::*_t)(int , double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::call_Trio_write_VR)) {
                *result = 12;
                return;
            }
        }
        {
            typedef void (MainWindow::*_t)(int , double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::call_Trio_write_TABLE)) {
                *result = 13;
                return;
            }
        }
        {
            typedef void (MainWindow::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::call_start_time_loop)) {
                *result = 14;
                return;
            }
        }
        {
            typedef void (MainWindow::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::call_stop_time_loop)) {
                *result = 15;
                return;
            }
        }
        {
            typedef void (MainWindow::*_t)(QPointF );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::return_QPointF)) {
                *result = 16;
                return;
            }
        }
        {
            typedef void (MainWindow::*_t)(double );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::return_processing_line)) {
                *result = 17;
                return;
            }
        }
        {
            typedef void (MainWindow::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::start_opencv)) {
                *result = 18;
                return;
            }
        }
        {
            typedef void (MainWindow::*_t)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::start_grabuv)) {
                *result = 19;
                return;
            }
        }
        {
            typedef void (MainWindow::*_t)(Mat );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::Imgdata_trans)) {
                *result = 20;
                return;
            }
        }
        {
            typedef void (MainWindow::*_t)(float , float , float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::Posdata_trans)) {
                *result = 21;
                return;
            }
        }
        {
            typedef void (MainWindow::*_t)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&MainWindow::return_OpenGLWidget_Zoom_Coordinate)) {
                *result = 22;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_MainWindow.data,
      qt_meta_data_MainWindow,  qt_static_metacall, nullptr, nullptr}
};


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 73)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 73;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 73)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 73;
    }
    return _id;
}

// SIGNAL 0
void MainWindow::label_Txt_Changed(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void MainWindow::status_Changed(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void MainWindow::errors_in_runtime(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void MainWindow::initialize_ccd()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void MainWindow::capture_picture()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void MainWindow::stop_ccd()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void MainWindow::call_Trio_connect(bool * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void MainWindow::call_Trio_close()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void MainWindow::call_Trio_send_txt(bool * _t1, const QString _t2, const QString _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void MainWindow::call_Trio_run_program(bool * _t1, QString _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void MainWindow::call_Trio_return_axis_paras(bool * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void MainWindow::call_Trio_run_MANUAL_MODE(bool * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void MainWindow::call_Trio_write_VR(int _t1, double _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void MainWindow::call_Trio_write_TABLE(int _t1, double _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void MainWindow::call_start_time_loop()
{
    QMetaObject::activate(this, &staticMetaObject, 14, nullptr);
}

// SIGNAL 15
void MainWindow::call_stop_time_loop()
{
    QMetaObject::activate(this, &staticMetaObject, 15, nullptr);
}

// SIGNAL 16
void MainWindow::return_QPointF(QPointF _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 16, _a);
}

// SIGNAL 17
void MainWindow::return_processing_line(double _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void MainWindow::start_opencv()
{
    QMetaObject::activate(this, &staticMetaObject, 18, nullptr);
}

// SIGNAL 19
void MainWindow::start_grabuv()
{
    QMetaObject::activate(this, &staticMetaObject, 19, nullptr);
}

// SIGNAL 20
void MainWindow::Imgdata_trans(Mat _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 20, _a);
}

// SIGNAL 21
void MainWindow::Posdata_trans(float _t1, float _t2, float _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)), const_cast<void*>(reinterpret_cast<const void*>(&_t3)) };
    QMetaObject::activate(this, &staticMetaObject, 21, _a);
}

// SIGNAL 22
void MainWindow::return_OpenGLWidget_Zoom_Coordinate(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 22, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
