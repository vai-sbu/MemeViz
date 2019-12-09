/********************************************************************************
** Form generated from reading UI file 'distortionHelp.ui'
**
** Created by: Qt User Interface Compiler version 5.12.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DISTORTIONHELP_H
#define UI_DISTORTIONHELP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_distortionHelp
{
public:
    QLabel *label_left;
    QLabel *label_foot;
    QLabel *label_right;
    QLabel *label_header;
    QPushButton *pushButton_close;
    QGraphicsView *graphicsView_chartDistortion;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;

    void setupUi(QDialog *distortionHelp)
    {
        if (distortionHelp->objectName().isEmpty())
            distortionHelp->setObjectName(QString::fromUtf8("distortionHelp"));
        distortionHelp->resize(722, 517);
        distortionHelp->setStyleSheet(QString::fromUtf8("QDialog {\n"
"	background-color: rgb(20,20,23);\n"
"}"));
        distortionHelp->setModal(true);
        label_left = new QLabel(distortionHelp);
        label_left->setObjectName(QString::fromUtf8("label_left"));
        label_left->setGeometry(QRect(0, 0, 5, 515));
        QFont font;
        font.setFamily(QString::fromUtf8("Tunga"));
        font.setPointSize(15);
        font.setBold(true);
        font.setItalic(true);
        font.setWeight(75);
        label_left->setFont(font);
        label_left->setStyleSheet(QString::fromUtf8("QLabel#label_left {\n"
"	background-color: rgb(14,99, 186);\n"
"	color: white;\n"
"}"));
        label_foot = new QLabel(distortionHelp);
        label_foot->setObjectName(QString::fromUtf8("label_foot"));
        label_foot->setGeometry(QRect(0, 512, 721, 5));
        label_foot->setFont(font);
        label_foot->setStyleSheet(QString::fromUtf8("QLabel#label_foot {\n"
"	background-color: rgb(14,99, 186);\n"
"	color: white;\n"
"}"));
        label_right = new QLabel(distortionHelp);
        label_right->setObjectName(QString::fromUtf8("label_right"));
        label_right->setGeometry(QRect(716, 0, 5, 516));
        label_right->setFont(font);
        label_right->setStyleSheet(QString::fromUtf8("QLabel#label_right {\n"
"	background-color: rgb(14,99, 186);\n"
"	color: white;\n"
"}"));
        label_header = new QLabel(distortionHelp);
        label_header->setObjectName(QString::fromUtf8("label_header"));
        label_header->setGeometry(QRect(0, 0, 721, 31));
        QFont font1;
        font1.setFamily(QString::fromUtf8("MS Sans Serif"));
        font1.setPointSize(14);
        font1.setBold(true);
        font1.setItalic(true);
        font1.setWeight(75);
        label_header->setFont(font1);
        label_header->setStyleSheet(QString::fromUtf8("QLabel#label_header {\n"
"	background-color: rgb(14,99, 186);\n"
"	color: white;\n"
"}"));
        label_header->setFrameShape(QFrame::NoFrame);
        pushButton_close = new QPushButton(distortionHelp);
        pushButton_close->setObjectName(QString::fromUtf8("pushButton_close"));
        pushButton_close->setGeometry(QRect(685, 0, 36, 31));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Century Gothic"));
        font2.setPointSize(16);
        font2.setBold(true);
        font2.setWeight(75);
        pushButton_close->setFont(font2);
        pushButton_close->setMouseTracking(true);
        pushButton_close->setStyleSheet(QString::fromUtf8("QPushButton#pushButton_close {\n"
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
        graphicsView_chartDistortion = new QGraphicsView(distortionHelp);
        graphicsView_chartDistortion->setObjectName(QString::fromUtf8("graphicsView_chartDistortion"));
        graphicsView_chartDistortion->setGeometry(QRect(5, 31, 711, 481));
        graphicsView_chartDistortion->setAutoFillBackground(false);
        graphicsView_chartDistortion->setStyleSheet(QString::fromUtf8("QGraphicsView {background-color:rgb(244,244,244);}"));
        label = new QLabel(distortionHelp);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(100, 480, 131, 31));
        QFont font3;
        font3.setPointSize(12);
        label->setFont(font3);
        label_2 = new QLabel(distortionHelp);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(300, 480, 361, 31));
        label_2->setFont(font3);
        label_3 = new QLabel(distortionHelp);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(269, 482, 25, 25));
        label_3->setStyleSheet(QString::fromUtf8("QLabel#label_3 {\n"
"	background-color: rgb(85, 85, 255);\n"
"	color: white;\n"
"}"));
        label_4 = new QLabel(distortionHelp);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(68, 482, 25, 25));
        label_4->setStyleSheet(QString::fromUtf8("QLabel#label_4 {\n"
"	background-color: rgb(0, 194, 94);\n"
"	color: white;\n"
"}"));

        retranslateUi(distortionHelp);

        QMetaObject::connectSlotsByName(distortionHelp);
    } // setupUi

    void retranslateUi(QDialog *distortionHelp)
    {
        distortionHelp->setWindowTitle(QApplication::translate("distortionHelp", "Dialog", nullptr));
        label_left->setText(QString());
        label_foot->setText(QString());
        label_right->setText(QString());
        label_header->setText(QApplication::translate("distortionHelp", " Distortion Measure Details", nullptr));
        pushButton_close->setText(QApplication::translate("distortionHelp", "X", nullptr));
        label->setText(QApplication::translate("distortionHelp", "True data values", nullptr));
        label_2->setText(QApplication::translate("distortionHelp", "Data values that your infomage communicates", nullptr));
        label_3->setText(QString());
        label_4->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class distortionHelp: public Ui_distortionHelp {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DISTORTIONHELP_H
