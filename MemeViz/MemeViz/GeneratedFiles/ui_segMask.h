/********************************************************************************
** Form generated from reading UI file 'segMask.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SEGMASK_H
#define UI_SEGMASK_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_segMask
{
public:
    QGraphicsView *graphicsView_seg;
    QPushButton *pushButton_mask;
    QPushButton *pushButton_forebox;
    QPushButton *pushButton_foreground;
    QPushButton *pushButton_background;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_left;
    QLabel *label_foot;
    QLabel *label_right;
    QLabel *label_header;
    QLabel *label_5;
    QPushButton *pushButton_refine;
    QLabel *label_6;
    QPushButton *pushButton_close;

    void setupUi(QDialog *segMask)
    {
        if (segMask->objectName().isEmpty())
            segMask->setObjectName(QStringLiteral("segMask"));
        segMask->resize(1062, 760);
        segMask->setStyleSheet(QLatin1String("QDialog {\n"
"	background-color: rgb(20,20,23);\n"
"}"));
        segMask->setModal(true);
        graphicsView_seg = new QGraphicsView(segMask);
        graphicsView_seg->setObjectName(QStringLiteral("graphicsView_seg"));
        graphicsView_seg->setGeometry(QRect(11, 99, 1041, 651));
        graphicsView_seg->viewport()->setProperty("cursor", QVariant(QCursor(Qt::ArrowCursor)));
        graphicsView_seg->setAutoFillBackground(false);
        graphicsView_seg->setStyleSheet(QStringLiteral("QGraphicsView {background-color:rgb(204,204,204);}"));
        graphicsView_seg->setFrameShape(QFrame::NoFrame);
        graphicsView_seg->setFrameShadow(QFrame::Plain);
        graphicsView_seg->setLineWidth(10);
        graphicsView_seg->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        graphicsView_seg->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::NoBrush);
        graphicsView_seg->setBackgroundBrush(brush);
        pushButton_mask = new QPushButton(segMask);
        pushButton_mask->setObjectName(QStringLiteral("pushButton_mask"));
        pushButton_mask->setGeometry(QRect(966, 43, 80, 45));
        pushButton_mask->setStyleSheet(QLatin1String("QPushButton#pushButton_mask {\n"
"	color: white;\n"
"    background-color:  rgb(104, 104, 104);\n"
"    border-style: none;\n"
"    border-width: 2px;\n"
"    border-color: rgb(104, 104, 104);\n"
"}\n"
"QPushButton#pushButton_mask:pressed {\n"
"    background-color: rgb(50, 50, 50);\n"
"    border-style: inset;\n"
"}"));
        pushButton_forebox = new QPushButton(segMask);
        pushButton_forebox->setObjectName(QStringLiteral("pushButton_forebox"));
        pushButton_forebox->setGeometry(QRect(17, 43, 80, 45));
        pushButton_forebox->setStyleSheet(QLatin1String("QPushButton#pushButton_forebox {\n"
"	color: white;\n"
"    background-color:  rgb(104, 104, 104);\n"
"    border-style: none;\n"
"    border-width: 2px;\n"
"    border-color: rgb(104, 104, 104);\n"
"}\n"
"QPushButton#pushButton_forebox:pressed {\n"
"    background-color: rgb(50, 50, 50);\n"
"    border-style: inset;\n"
"}"));
        pushButton_foreground = new QPushButton(segMask);
        pushButton_foreground->setObjectName(QStringLiteral("pushButton_foreground"));
        pushButton_foreground->setGeometry(QRect(107, 43, 80, 45));
        pushButton_foreground->setStyleSheet(QLatin1String("QPushButton#pushButton_foreground {\n"
"	color: white;\n"
"    background-color:  rgb(104, 104, 104);\n"
"    border-style: none;\n"
"    border-width: 2px;\n"
"    border-color: rgb(104, 104, 104);\n"
"}\n"
"QPushButton#pushButton_foreground:pressed {\n"
"    background-color: rgb(50, 50, 50);\n"
"    border-style: inset;\n"
"}"));
        pushButton_background = new QPushButton(segMask);
        pushButton_background->setObjectName(QStringLiteral("pushButton_background"));
        pushButton_background->setGeometry(QRect(197, 43, 80, 45));
        pushButton_background->setStyleSheet(QLatin1String("QPushButton#pushButton_background {\n"
"	color: white;\n"
"    background-color:  rgb(104, 104, 104);\n"
"    border-style: none;\n"
"    border-width: 2px;\n"
"    border-color: rgb(104, 104, 104);\n"
"}\n"
"QPushButton#pushButton_background:pressed {\n"
"    background-color: rgb(50, 50, 50);\n"
"    border-style: inset;\n"
"}"));
        label = new QLabel(segMask);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(11, 38, 361, 55));
        label->setStyleSheet(QLatin1String("QLabel{\n"
"    background-color:  rgb(65, 65, 65);\n"
"}"));
        label_2 = new QLabel(segMask);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(12, 38, 90, 55));
        label_2->setStyleSheet(QLatin1String("QLabel{\n"
"    background-color:  rgb(240, 240, 240);\n"
"}"));
        label_3 = new QLabel(segMask);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(102, 38, 90, 55));
        label_3->setStyleSheet(QLatin1String("QLabel{\n"
"    background-color:  rgb(240, 240, 240);\n"
"}"));
        label_4 = new QLabel(segMask);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(192, 38, 90, 55));
        label_4->setStyleSheet(QLatin1String("QLabel{\n"
"    background-color:  rgb(240, 240, 240);\n"
"}"));
        label_left = new QLabel(segMask);
        label_left->setObjectName(QStringLiteral("label_left"));
        label_left->setGeometry(QRect(0, 0, 5, 760));
        QFont font;
        font.setFamily(QStringLiteral("Tunga"));
        font.setPointSize(15);
        font.setBold(true);
        font.setItalic(true);
        font.setWeight(75);
        label_left->setFont(font);
        label_left->setStyleSheet(QLatin1String("QLabel#label_left {\n"
"	background-color: rgb(14,99, 186);\n"
"	color: white;\n"
"}"));
        label_foot = new QLabel(segMask);
        label_foot->setObjectName(QStringLiteral("label_foot"));
        label_foot->setGeometry(QRect(0, 755, 1062, 5));
        label_foot->setFont(font);
        label_foot->setStyleSheet(QLatin1String("QLabel#label_foot {\n"
"	background-color: rgb(14,99, 186);\n"
"	color: white;\n"
"}"));
        label_right = new QLabel(segMask);
        label_right->setObjectName(QStringLiteral("label_right"));
        label_right->setGeometry(QRect(1057, 0, 5, 760));
        label_right->setFont(font);
        label_right->setStyleSheet(QLatin1String("QLabel#label_right {\n"
"	background-color: rgb(14,99, 186);\n"
"	color: white;\n"
"}"));
        label_header = new QLabel(segMask);
        label_header->setObjectName(QStringLiteral("label_header"));
        label_header->setGeometry(QRect(0, 0, 1062, 31));
        QFont font1;
        font1.setFamily(QStringLiteral("MS Sans Serif"));
        font1.setPointSize(14);
        font1.setBold(true);
        font1.setItalic(true);
        font1.setWeight(75);
        label_header->setFont(font1);
        label_header->setStyleSheet(QLatin1String("QLabel#label_header {\n"
"	background-color: rgb(14,99, 186);\n"
"	color: white;\n"
"}"));
        label_header->setFrameShape(QFrame::NoFrame);
        label_5 = new QLabel(segMask);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(282, 38, 90, 55));
        label_5->setStyleSheet(QLatin1String("QLabel{\n"
"    background-color:  rgb(240, 240, 240);\n"
"}"));
        pushButton_refine = new QPushButton(segMask);
        pushButton_refine->setObjectName(QStringLiteral("pushButton_refine"));
        pushButton_refine->setGeometry(QRect(287, 43, 80, 45));
        pushButton_refine->setStyleSheet(QLatin1String("QPushButton#pushButton_refine {\n"
"	color: white;\n"
"    background-color:  rgb(104, 104, 104);\n"
"    border-style: none;\n"
"    border-width: 2px;\n"
"    border-color: rgb(104, 104, 104);\n"
"}\n"
"QPushButton#pushButton_refine:pressed {\n"
"    background-color: rgb(50, 50, 50);\n"
"    border-style: inset;\n"
"}"));
        label_6 = new QLabel(segMask);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(961, 38, 90, 55));
        label_6->setStyleSheet(QLatin1String("QLabel{\n"
"    background-color:  rgb(60, 170, 60);\n"
"}"));
        pushButton_close = new QPushButton(segMask);
        pushButton_close->setObjectName(QStringLiteral("pushButton_close"));
        pushButton_close->setGeometry(QRect(1026, 0, 36, 31));
        QFont font2;
        font2.setFamily(QStringLiteral("Century Gothic"));
        font2.setPointSize(16);
        font2.setBold(true);
        font2.setWeight(75);
        pushButton_close->setFont(font2);
        pushButton_close->setMouseTracking(true);
        pushButton_close->setStyleSheet(QLatin1String("QPushButton#pushButton_close {\n"
"	color: white;\n"
"    background-color:  rgb(55, 55, 55);\n"
"    border-style: none;\n"
"    border-width: 2px;\n"
"    border-color: rgb(104, 104, 104);\n"
"}\n"
"QPushButton#pushButton_close:pressed {\n"
"    background-color: rgb(220, 0, 0);\n"
"    border-style: inset;\n"
"}"));
        pushButton_close->setFlat(true);
        label_6->raise();
        label->raise();
        label_5->raise();
        label_4->raise();
        label_3->raise();
        label_2->raise();
        graphicsView_seg->raise();
        pushButton_mask->raise();
        pushButton_forebox->raise();
        pushButton_foreground->raise();
        pushButton_background->raise();
        label_left->raise();
        label_foot->raise();
        label_right->raise();
        label_header->raise();
        pushButton_refine->raise();
        pushButton_close->raise();

        retranslateUi(segMask);

        QMetaObject::connectSlotsByName(segMask);
    } // setupUi

    void retranslateUi(QDialog *segMask)
    {
        segMask->setWindowTitle(QApplication::translate("segMask", "Dialog", 0));
        pushButton_mask->setText(QApplication::translate("segMask", "Generate\n"
"Mask", 0));
        pushButton_forebox->setText(QApplication::translate("segMask", "Bounding\n"
"Box", 0));
        pushButton_foreground->setText(QApplication::translate("segMask", "Foreground\n"
"Marker", 0));
        pushButton_background->setText(QApplication::translate("segMask", "Background\n"
"Marker", 0));
        label->setText(QString());
        label_2->setText(QString());
        label_3->setText(QString());
        label_4->setText(QString());
        label_left->setText(QString());
        label_foot->setText(QString());
        label_right->setText(QString());
        label_header->setText(QApplication::translate("segMask", " MemeViz - Mask Generator", 0));
        label_5->setText(QString());
        pushButton_refine->setText(QApplication::translate("segMask", "Refine\n"
"Markers", 0));
        label_6->setText(QString());
        pushButton_close->setText(QApplication::translate("segMask", "X", 0));
    } // retranslateUi

};

namespace Ui {
    class segMask: public Ui_segMask {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SEGMASK_H
