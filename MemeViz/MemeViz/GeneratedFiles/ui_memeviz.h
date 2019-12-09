/********************************************************************************
** Form generated from reading UI file 'memeviz.ui'
**
** Created by: Qt User Interface Compiler version 5.12.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MEMEVIZ_H
#define UI_MEMEVIZ_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFontComboBox>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGraphicsView>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MemeVizClass
{
public:
    QAction *actionExit;
    QAction *actionAbout;
    QWidget *centralWidget;
    QPushButton *loadButtonData;
    QGraphicsView *graphicsView_chart;
    QLabel *label_imgFilter;
    QComboBox *comboBoxPiFiltImg_2;
    QPushButton *pushButton_clear;
    QFontComboBox *fontComboBox_fontFamily;
    QSpinBox *spinBox_fontSize;
    QPushButton *pushButton_fontBold;
    QPushButton *pushButton_fontItalics;
    QPushButton *pushButton_fontColor;
    QGraphicsView *graphicsView_viz_meme;
    QFrame *line;
    QLabel *label;
    QFrame *line_3;
    QPushButton *pushButton_fontFill;
    QFrame *line_4;
    QGroupBox *groupBox_images;
    QListWidget *listWidget;
    QPushButton *loadButtonImg;
    QLabel *label_header;
    QLabel *label_fontColor;
    QLabel *label_fontFill;
    QPushButton *pushButton_close;
    QGroupBox *groupBox_fill;
    QGroupBox *groupBox_BarFill;
    QPushButton *pushButton_barMask;
    QPushButton *pushButton_barMaskNext;
    QPushButton *pushButton_barMaskPrev;
    QLabel *label_barMask;
    QLabel *label_barCurrLabel;
    QPushButton *pushButton_barMaskColor;
    QLabel *label_barMaskColor;
    QLabel *label_fillBar;
    QSpinBox *spinBox_labelOffBar;
    QFrame *line_13;
    QLabel *label_yMin_3;
    QDoubleSpinBox *doubleSpinBox_yMaxBarFill;
    QDoubleSpinBox *doubleSpinBox_yMinBarFill;
    QLabel *label_yMax_3;
    QPushButton *pushButton_barArea;
    QLabel *label_barLength;
    QLabel *label_barArea;
    QPushButton *pushButton_barLength;
    QFrame *line_14;
    QLabel *label_26;
    QLabel *label_fillHori_2;
    QPushButton *pushButton_fillBarHori;
    QLabel *label_fillVerti_2;
    QPushButton *pushButton_fillBarVerti;
    QLabel *label_27;
    QLabel *label_28;
    QGroupBox *groupBox_PieFill;
    QLabel *labelimg;
    QPushButton *pushButton_createMask;
    QPushButton *pushButton_pieAr;
    QPushButton *pushButton_pieRad;
    QLabel *label_pieRad;
    QLabel *label_pieAr;
    QSlider *horizontalSlider_pieAng;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_pieLabelRad;
    QSpinBox *spinBox_pieLabelRad;
    QComboBox *comboBoxBrewerNames;
    QPushButton *pushButton_pieColor_1;
    QPushButton *pushButton_pieColor_2;
    QPushButton *pushButton_pieColor_3;
    QPushButton *pushButton_pieColor_5;
    QPushButton *pushButton_pieColor_4;
    QPushButton *pushButton_pieColor_6;
    QPushButton *pushButton_pieColor_11;
    QPushButton *pushButton_pieColor_8;
    QPushButton *pushButton_pieColor_10;
    QPushButton *pushButton_pieColor_12;
    QPushButton *pushButton_pieColor_7;
    QPushButton *pushButton_pieColor_9;
    QFrame *line_8;
    QLabel *label_12;
    QFrame *line_10;
    QLabel *label_pieLabelRad_2;
    QSpinBox *spinBox_pieOriginOffX;
    QLabel *label_pieLabelRad_3;
    QSpinBox *spinBox_pieOriginOffY;
    QPushButton *pushButton_pieColor_13;
    QPushButton *pushButton_pieColor_14;
    QPushButton *pushButton_pieColor_15;
    QLabel *label_pieArc;
    QPushButton *pushButton_pieArc;
    QLabel *label_24;
    QPushButton *pushButton_fillHori;
    QPushButton *pushButton_fillVerti;
    QLabel *label_fillVerti;
    QPushButton *pushButton_fillRad;
    QLabel *label_fillRad;
    QLabel *label_fillHori;
    QLabel *label_25;
    QPushButton *pushButton_barFill;
    QLabel *label_barFill;
    QLabel *label_pieFill;
    QPushButton *pushButton_pieFill;
    QLabel *label_foot;
    QLabel *label_left;
    QLabel *label_right;
    QLabel *label_head;
    QTableWidget *tableWidget;
    QSlider *horizontalSlider_textFillOpac;
    QLabel *label_textFillOpac;
    QFrame *line_2;
    QFrame *line_9;
    QPushButton *pushButton_save;
    QGroupBox *distortion_area;
    QLabel *label_err1;
    QLabel *label_err2;
    QLabel *label_err3;
    QPushButton *pushButton_optimizePie;
    QLabel *label_err4;
    QGroupBox *groupBox;
    QLabel *label_errorPin1;
    QLabel *label_errorBar1;
    QLabel *label_errorPin2;
    QLabel *label_errorBar2;
    QLabel *label_errorPin3;
    QLabel *label_errorBar3;
    QLabel *label_errorBar4;
    QLabel *label_errorPin4;
    QPushButton *pushButton_distortionHelp;
    QLabel *label_errVal3;
    QLabel *label_errVal1;
    QLabel *label_errVal4;
    QLabel *label_errVal2;
    QGroupBox *groupBox_overlay;
    QGroupBox *groupBox_LineOverlay;
    QSpinBox *spinBox_lineChartWidth;
    QSpinBox *spinBox_lineChartHeight;
    QLabel *label_chartW;
    QLabel *label_chartH;
    QSlider *horizontalSlider_xTicks;
    QLabel *label_xTicks;
    QPushButton *pushButton_lineColor;
    QPushButton *pushButton_lineGlowColor;
    QPushButton *pushButton_lineXColor;
    QPushButton *pushButton_lineYColor;
    QLabel *label_lineThick;
    QSlider *horizontalSlider_lineThick;
    QSlider *horizontalSlider_lineGlowThick;
    QLabel *label_glowThick;
    QLabel *label_yTicks;
    QSlider *horizontalSlider_yTicks;
    QLabel *label_xMax;
    QSpinBox *spinBox_xMax;
    QSpinBox *spinBox_xMin;
    QLabel *label_xMin;
    QDoubleSpinBox *doubleSpinBox_yMin;
    QLabel *label_yMin;
    QLabel *label_yMax;
    QDoubleSpinBox *doubleSpinBox_yMax;
    QFrame *line_5;
    QFrame *line_6;
    QFrame *line_7;
    QLabel *label_lineColor;
    QLabel *label_lineGlowColor;
    QLabel *label_lineXColor;
    QLabel *label_lineYColor;
    QLabel *label_lineSpline;
    QLabel *label_lineLine;
    QPushButton *pushButton_lineLine;
    QPushButton *pushButton_lineSpline;
    QFrame *line_16;
    QLabel *label_13;
    QLabel *label_16;
    QLabel *label_17;
    QLabel *label_18;
    QLabel *label_19;
    QGroupBox *groupBox_BarOverlay;
    QSpinBox *spinBox_barChartWidth;
    QLabel *label_barXColor;
    QLabel *label_14;
    QFrame *line_11;
    QLabel *label_barGlowColor;
    QSpinBox *spinBox_barChartHeight;
    QPushButton *pushButton_barColor;
    QPushButton *pushButton_barGlowColor;
    QPushButton *pushButton_barXColor;
    QLabel *label_barW;
    QFrame *line_12;
    QPushButton *pushButton_barYColor;
    QLabel *label_barH;
    QLabel *label_barColor;
    QLabel *label_15;
    QLabel *label_barYColor;
    QSlider *horizontalSlider_barWidth;
    QSlider *horizontalSlider_barGlowWidth;
    QDoubleSpinBox *doubleSpinBox_yMaxBarOverlay;
    QLabel *label_yMin_2;
    QLabel *label_yTicks_2;
    QLabel *label_yMax_2;
    QDoubleSpinBox *doubleSpinBox_yMinBarOverlay;
    QSlider *horizontalSlider_yTicks_2;
    QLabel *label_xTicks_2;
    QLabel *label_xMin_2;
    QSpinBox *spinBox_xMax_2;
    QSlider *horizontalSlider_xTicks_2;
    QSpinBox *spinBox_xMin_2;
    QLabel *label_xMax_2;
    QFrame *line_15;
    QLabel *label_20;
    QLabel *label_21;
    QLabel *label_22;
    QLabel *label_23;
    QPushButton *pushButton_barOverlay;
    QLabel *label_barOverlay;
    QPushButton *pushButton_lineOverlay;
    QLabel *label_lineOverlay;
    QLabel *label_FillStyle;
    QPushButton *pushButton_OverlayStyle;
    QLabel *label_OverlayStyle;
    QPushButton *pushButton_FillStyle;

    void setupUi(QMainWindow *MemeVizClass)
    {
        if (MemeVizClass->objectName().isEmpty())
            MemeVizClass->setObjectName(QString::fromUtf8("MemeVizClass"));
        MemeVizClass->setWindowModality(Qt::NonModal);
        MemeVizClass->resize(1500, 1059);
        QIcon icon;
        icon.addFile(QString::fromUtf8("../../../../../../../.designer/logo.png"), QSize(), QIcon::Normal, QIcon::Off);
        MemeVizClass->setWindowIcon(icon);
        MemeVizClass->setLayoutDirection(Qt::LeftToRight);
        MemeVizClass->setAutoFillBackground(false);
        MemeVizClass->setStyleSheet(QString::fromUtf8("QMainWindow {\n"
"	background-color: rgb(45,45, 48);\n"
"}"));
        MemeVizClass->setToolButtonStyle(Qt::ToolButtonIconOnly);
        MemeVizClass->setDocumentMode(false);
        MemeVizClass->setTabShape(QTabWidget::Rounded);
        actionExit = new QAction(MemeVizClass);
        actionExit->setObjectName(QString::fromUtf8("actionExit"));
        actionAbout = new QAction(MemeVizClass);
        actionAbout->setObjectName(QString::fromUtf8("actionAbout"));
        centralWidget = new QWidget(MemeVizClass);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        centralWidget->setStyleSheet(QString::fromUtf8("QWidget#centralWidget {\n"
"	background-color: rgb(45,45, 48);\n"
"}"));
        loadButtonData = new QPushButton(centralWidget);
        loadButtonData->setObjectName(QString::fromUtf8("loadButtonData"));
        loadButtonData->setGeometry(QRect(10, 810, 181, 31));
        QFont font;
        font.setPointSize(11);
        loadButtonData->setFont(font);
        loadButtonData->setStyleSheet(QString::fromUtf8("QPushButton#loadButtonData {\n"
"	color: white;\n"
"    background-color:  rgb(104, 104, 104);\n"
"    border-style: none;\n"
"    border-width: 2px;\n"
"    border-color: rgb(104, 104, 104);\n"
"}\n"
"QPushButton#loadButtonData:pressed {\n"
"    background-color: rgb(50, 50, 50);\n"
"    border-style: inset;\n"
"}"));
        loadButtonData->setFlat(true);
        graphicsView_chart = new QGraphicsView(centralWidget);
        graphicsView_chart->setObjectName(QString::fromUtf8("graphicsView_chart"));
        graphicsView_chart->setGeometry(QRect(200, 810, 251, 241));
        graphicsView_chart->setStyleSheet(QString::fromUtf8("QGraphicsView {background-color:rgb(204,204,204);}"));
        label_imgFilter = new QLabel(centralWidget);
        label_imgFilter->setObjectName(QString::fromUtf8("label_imgFilter"));
        label_imgFilter->setGeometry(QRect(800, 42, 151, 24));
        QFont font1;
        font1.setPointSize(11);
        font1.setBold(true);
        font1.setWeight(75);
        label_imgFilter->setFont(font1);
        label_imgFilter->setStyleSheet(QString::fromUtf8("QLabel {color:white;}"));
        comboBoxPiFiltImg_2 = new QComboBox(centralWidget);
        comboBoxPiFiltImg_2->setObjectName(QString::fromUtf8("comboBoxPiFiltImg_2"));
        comboBoxPiFiltImg_2->setGeometry(QRect(970, 42, 181, 24));
        comboBoxPiFiltImg_2->setStyleSheet(QString::fromUtf8("QComboBox#comboBoxPiFiltImg_2 {\n"
"	color: white;\n"
"    background-color:  rgb(104, 104, 104);\n"
"}\n"
""));
        comboBoxPiFiltImg_2->setFrame(true);
        pushButton_clear = new QPushButton(centralWidget);
        pushButton_clear->setObjectName(QString::fromUtf8("pushButton_clear"));
        pushButton_clear->setGeometry(QRect(1239, 772, 181, 25));
        QFont font2;
        font2.setPointSize(12);
        pushButton_clear->setFont(font2);
        pushButton_clear->setStyleSheet(QString::fromUtf8("QPushButton#pushButton_clear {\n"
"	color: white;\n"
"    background-color:  rgb(104, 104, 104);\n"
"    border-style: none;\n"
"    border-width: 2px;\n"
"    border-color: rgb(104, 104, 104);\n"
"}\n"
"QPushButton#pushButton_clear:pressed {\n"
"    background-color: rgb(50, 50, 50);\n"
"    border-style: inset;\n"
"}"));
        fontComboBox_fontFamily = new QFontComboBox(centralWidget);
        fontComboBox_fontFamily->setObjectName(QString::fromUtf8("fontComboBox_fontFamily"));
        fontComboBox_fontFamily->setGeometry(QRect(136, 42, 121, 24));
        fontComboBox_fontFamily->setFont(font);
        fontComboBox_fontFamily->setStyleSheet(QString::fromUtf8("QFontComboBox#fontComboBox_fontFamily {\n"
"	color: white;\n"
"    background-color:  rgb(104, 104, 104);\n"
"}\n"
""));
        fontComboBox_fontFamily->setFrame(false);
        spinBox_fontSize = new QSpinBox(centralWidget);
        spinBox_fontSize->setObjectName(QString::fromUtf8("spinBox_fontSize"));
        spinBox_fontSize->setGeometry(QRect(260, 42, 42, 24));
        spinBox_fontSize->setFont(font);
        spinBox_fontSize->setAutoFillBackground(false);
        spinBox_fontSize->setStyleSheet(QString::fromUtf8("QSpinBox#spinBox_fontSize {\n"
"	color: white;\n"
"    background-color:  rgb(104, 104, 104);\n"
"}\n"
""));
        spinBox_fontSize->setButtonSymbols(QAbstractSpinBox::UpDownArrows);
        spinBox_fontSize->setMinimum(1);
        spinBox_fontSize->setMaximum(80);
        spinBox_fontSize->setValue(8);
        pushButton_fontBold = new QPushButton(centralWidget);
        pushButton_fontBold->setObjectName(QString::fromUtf8("pushButton_fontBold"));
        pushButton_fontBold->setGeometry(QRect(310, 42, 63, 24));
        pushButton_fontBold->setFont(font);
        pushButton_fontBold->setStyleSheet(QString::fromUtf8("QPushButton#pushButton_fontBold {\n"
"	color: white;\n"
"    background-color:  rgb(104, 104, 104);\n"
"    border-style: none;\n"
"    border-width: 2px;\n"
"    border-color: rgb(104, 104, 104);\n"
"}\n"
"QPushButton#pushButton_fontBold:pressed {\n"
"    background-color: rgb(50, 50, 50);\n"
"    border-style: inset;\n"
"}"));
        pushButton_fontBold->setFlat(true);
        pushButton_fontItalics = new QPushButton(centralWidget);
        pushButton_fontItalics->setObjectName(QString::fromUtf8("pushButton_fontItalics"));
        pushButton_fontItalics->setGeometry(QRect(380, 42, 63, 24));
        pushButton_fontItalics->setFont(font);
        pushButton_fontItalics->setStyleSheet(QString::fromUtf8("QPushButton#pushButton_fontItalics {\n"
"	color: white;\n"
"    background-color:  rgb(104, 104, 104);\n"
"    border-style: none;\n"
"    border-width: 2px;\n"
"    border-color: rgb(104, 104, 104);\n"
"}\n"
"QPushButton#pushButton_fontItalics:pressed {\n"
"    background-color: rgb(50, 50, 50);\n"
"    border-style: inset;\n"
"}"));
        pushButton_fontItalics->setFlat(true);
        pushButton_fontColor = new QPushButton(centralWidget);
        pushButton_fontColor->setObjectName(QString::fromUtf8("pushButton_fontColor"));
        pushButton_fontColor->setGeometry(QRect(450, 42, 63, 24));
        pushButton_fontColor->setFont(font);
        pushButton_fontColor->setStyleSheet(QString::fromUtf8("QPushButton#pushButton_fontColor {\n"
"	color: white;\n"
"    background-color:  rgb(104, 104, 104);\n"
"    border-style: none;\n"
"    border-width: 2px;\n"
"    border-color: rgb(104, 104, 104);\n"
"}\n"
"QPushButton#pushButton_fontColor:pressed {\n"
"    background-color: rgb(50, 50, 50);\n"
"    border-style: inset;\n"
"}"));
        pushButton_fontColor->setFlat(true);
        graphicsView_viz_meme = new QGraphicsView(centralWidget);
        graphicsView_viz_meme->setObjectName(QString::fromUtf8("graphicsView_viz_meme"));
        graphicsView_viz_meme->setGeometry(QRect(11, 75, 1150, 719));
        graphicsView_viz_meme->setAutoFillBackground(false);
        graphicsView_viz_meme->setStyleSheet(QString::fromUtf8("QGraphicsView {background-color:rgb(204,204,204);}"));
        graphicsView_viz_meme->setFrameShape(QFrame::NoFrame);
        graphicsView_viz_meme->setFrameShadow(QFrame::Plain);
        graphicsView_viz_meme->setLineWidth(10);
        graphicsView_viz_meme->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        graphicsView_viz_meme->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        QBrush brush(QColor(0, 0, 0, 70));
        brush.setStyle(Qt::Dense7Pattern);
        graphicsView_viz_meme->setBackgroundBrush(brush);
        graphicsView_viz_meme->setAlignment(Qt::AlignCenter);
        graphicsView_viz_meme->setTransformationAnchor(QGraphicsView::NoAnchor);
        line = new QFrame(centralWidget);
        line->setObjectName(QString::fromUtf8("line"));
        line->setGeometry(QRect(780, 38, 20, 32));
        line->setStyleSheet(QString::fromUtf8(""));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(86, 42, 47, 24));
        label->setFont(font1);
        label->setStyleSheet(QString::fromUtf8("QLabel {color:white;}"));
        line_3 = new QFrame(centralWidget);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setGeometry(QRect(1150, 38, 20, 32));
        line_3->setAutoFillBackground(false);
        line_3->setStyleSheet(QString::fromUtf8(""));
        line_3->setFrameShadow(QFrame::Sunken);
        line_3->setLineWidth(1);
        line_3->setMidLineWidth(0);
        line_3->setFrameShape(QFrame::VLine);
        pushButton_fontFill = new QPushButton(centralWidget);
        pushButton_fontFill->setObjectName(QString::fromUtf8("pushButton_fontFill"));
        pushButton_fontFill->setGeometry(QRect(520, 42, 63, 24));
        pushButton_fontFill->setFont(font);
        pushButton_fontFill->setStyleSheet(QString::fromUtf8("QPushButton#pushButton_fontFill {\n"
"	color: white;\n"
"    background-color:  rgb(104, 104, 104);\n"
"    border-style: none;\n"
"    border-width: 2px;\n"
"    border-color: rgb(104, 104, 104);\n"
"}\n"
"QPushButton#pushButton_fontFill:pressed {\n"
"    background-color: rgb(50, 50, 50);\n"
"    border-style: inset;\n"
"}"));
        pushButton_fontFill->setFlat(true);
        line_4 = new QFrame(centralWidget);
        line_4->setObjectName(QString::fromUtf8("line_4"));
        line_4->setGeometry(QRect(7, 795, 1486, 16));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);
        groupBox_images = new QGroupBox(centralWidget);
        groupBox_images->setObjectName(QString::fromUtf8("groupBox_images"));
        groupBox_images->setGeometry(QRect(460, 810, 751, 241));
        groupBox_images->setFont(font);
        groupBox_images->setStyleSheet(QString::fromUtf8("QGroupBox#groupBox_images {\n"
"	color: white;\n"
"}"));
        groupBox_images->setFlat(false);
        listWidget = new QListWidget(groupBox_images);
        listWidget->setObjectName(QString::fromUtf8("listWidget"));
        listWidget->setGeometry(QRect(10, 23, 661, 201));
        listWidget->setAutoFillBackground(true);
        listWidget->setStyleSheet(QString::fromUtf8("QListWidget{\n"
"	color: rgb(45, 45, 45);\n"
"    background-color:  rgb(45, 45, 45);\n"
"}\n"
"\n"
""));
        listWidget->setFrameShape(QFrame::NoFrame);
        listWidget->setFrameShadow(QFrame::Plain);
        listWidget->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
        listWidget->setAutoScroll(true);
        listWidget->setFlow(QListView::LeftToRight);
        listWidget->setSpacing(15);
        loadButtonImg = new QPushButton(groupBox_images);
        loadButtonImg->setObjectName(QString::fromUtf8("loadButtonImg"));
        loadButtonImg->setGeometry(QRect(690, 23, 51, 201));
        loadButtonImg->setFont(font);
        loadButtonImg->setStyleSheet(QString::fromUtf8("QPushButton#loadButtonImg {\n"
"	color: white;\n"
"    background-color:  rgb(104, 104, 104);\n"
"    border-style: none;\n"
"    border-width: 2px;\n"
"    border-color: rgb(104, 104, 104);\n"
"}\n"
"QPushButton#loadButtonImg:pressed {\n"
"    background-color: rgb(50, 50, 50);\n"
"    border-style: inset;\n"
"}"));
        loadButtonImg->setFlat(true);
        label_header = new QLabel(centralWidget);
        label_header->setObjectName(QString::fromUtf8("label_header"));
        label_header->setGeometry(QRect(0, 3, 1500, 28));
        QFont font3;
        font3.setFamily(QString::fromUtf8("MS Sans Serif"));
        font3.setPointSize(17);
        font3.setBold(true);
        font3.setItalic(true);
        font3.setWeight(75);
        label_header->setFont(font3);
        label_header->setStyleSheet(QString::fromUtf8("QLabel#label_header {\n"
"	background-color: rgb(14,99, 156);\n"
"	color: white;\n"
"}"));
        label_fontColor = new QLabel(centralWidget);
        label_fontColor->setObjectName(QString::fromUtf8("label_fontColor"));
        label_fontColor->setGeometry(QRect(450, 66, 63, 6));
        label_fontFill = new QLabel(centralWidget);
        label_fontFill->setObjectName(QString::fromUtf8("label_fontFill"));
        label_fontFill->setGeometry(QRect(520, 66, 63, 6));
        pushButton_close = new QPushButton(centralWidget);
        pushButton_close->setObjectName(QString::fromUtf8("pushButton_close"));
        pushButton_close->setGeometry(QRect(1464, 0, 36, 31));
        QFont font4;
        font4.setFamily(QString::fromUtf8("Century Gothic"));
        font4.setPointSize(16);
        font4.setBold(true);
        font4.setWeight(75);
        pushButton_close->setFont(font4);
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
        groupBox_fill = new QGroupBox(centralWidget);
        groupBox_fill->setObjectName(QString::fromUtf8("groupBox_fill"));
        groupBox_fill->setGeometry(QRect(1170, 70, 300, 691));
        groupBox_fill->setFont(font);
        groupBox_BarFill = new QGroupBox(groupBox_fill);
        groupBox_BarFill->setObjectName(QString::fromUtf8("groupBox_BarFill"));
        groupBox_BarFill->setGeometry(QRect(10, 45, 300, 620));
        groupBox_BarFill->setFont(font);
        groupBox_BarFill->setStyleSheet(QString::fromUtf8("QGroupBox{\n"
"border:none;\n"
"} "));
        pushButton_barMask = new QPushButton(groupBox_BarFill);
        pushButton_barMask->setObjectName(QString::fromUtf8("pushButton_barMask"));
        pushButton_barMask->setGeometry(QRect(55, 190, 190, 31));
        pushButton_barMask->setFont(font);
        pushButton_barMask->setStyleSheet(QString::fromUtf8("QPushButton#pushButton_barMask {\n"
"	color: white;\n"
"    background-color:  rgb(104, 104, 104);\n"
"    border-style: none;\n"
"    border-width: 2px;\n"
"    border-color: rgb(104, 104, 104);\n"
"}\n"
"QPushButton#pushButton_barMask:pressed {\n"
"    background-color: rgb(50, 50, 50);\n"
"    border-style: inset;\n"
"}"));
        pushButton_barMaskNext = new QPushButton(groupBox_BarFill);
        pushButton_barMaskNext->setObjectName(QString::fromUtf8("pushButton_barMaskNext"));
        pushButton_barMaskNext->setGeometry(QRect(222, 160, 24, 24));
        QFont font5;
        font5.setFamily(QString::fromUtf8("SimSun-ExtB"));
        font5.setPointSize(11);
        font5.setBold(true);
        font5.setWeight(75);
        pushButton_barMaskNext->setFont(font5);
        pushButton_barMaskNext->setStyleSheet(QString::fromUtf8("QPushButton#pushButton_barMaskNext {\n"
"	color: white;\n"
"    background-color:  rgb(104, 104, 104);\n"
"    border-style: none;\n"
"    border-width: 2px;\n"
"    border-color: rgb(104, 104, 104);\n"
"}\n"
"QPushButton#pushButton_barMaskNext:pressed {\n"
"    background-color: rgb(50, 50, 50);\n"
"    border-style: inset;\n"
"}"));
        pushButton_barMaskPrev = new QPushButton(groupBox_BarFill);
        pushButton_barMaskPrev->setObjectName(QString::fromUtf8("pushButton_barMaskPrev"));
        pushButton_barMaskPrev->setGeometry(QRect(55, 160, 24, 24));
        pushButton_barMaskPrev->setFont(font5);
        pushButton_barMaskPrev->setStyleSheet(QString::fromUtf8("QPushButton#pushButton_barMaskPrev {\n"
"	color: white;\n"
"    background-color:  rgb(104, 104, 104);\n"
"    border-style: none;\n"
"    border-width: 2px;\n"
"    border-color: rgb(104, 104, 104);\n"
"}\n"
"QPushButton#pushButton_barMaskPrev:pressed {\n"
"    background-color: rgb(50, 50, 50);\n"
"    border-style: inset;\n"
"}"));
        label_barMask = new QLabel(groupBox_BarFill);
        label_barMask->setObjectName(QString::fromUtf8("label_barMask"));
        label_barMask->setGeometry(QRect(30, 10, 240, 140));
        label_barMask->setFont(font);
        label_barMask->setAutoFillBackground(false);
        label_barMask->setStyleSheet(QString::fromUtf8("QLabel { background-color : rgb(204, 204, 204); color: white}"));
        label_barMask->setFrameShape(QFrame::NoFrame);
        label_barMask->setScaledContents(true);
        label_barCurrLabel = new QLabel(groupBox_BarFill);
        label_barCurrLabel->setObjectName(QString::fromUtf8("label_barCurrLabel"));
        label_barCurrLabel->setGeometry(QRect(84, 160, 132, 24));
        label_barCurrLabel->setFont(font);
        label_barCurrLabel->setStyleSheet(QString::fromUtf8("QLabel { color: white;\n"
"    background-color:  rgb(154, 154, 154); }"));
        pushButton_barMaskColor = new QPushButton(groupBox_BarFill);
        pushButton_barMaskColor->setObjectName(QString::fromUtf8("pushButton_barMaskColor"));
        pushButton_barMaskColor->setGeometry(QRect(95, 570, 110, 25));
        pushButton_barMaskColor->setFont(font);
        pushButton_barMaskColor->setStyleSheet(QString::fromUtf8("QPushButton#pushButton_barMaskColor {\n"
"	color: white;\n"
"    background-color:  rgb(104, 104, 104);\n"
"    border-style: none;\n"
"    border-width: 2px;\n"
"    border-color: rgb(104, 104, 104);\n"
"}\n"
"QPushButton#pushButton_barMaskColor:pressed {\n"
"    background-color: rgb(50, 50, 50);\n"
"    border-style: inset;\n"
"}"));
        label_barMaskColor = new QLabel(groupBox_BarFill);
        label_barMaskColor->setObjectName(QString::fromUtf8("label_barMaskColor"));
        label_barMaskColor->setGeometry(QRect(95, 595, 110, 6));
        label_barMaskColor->setFont(font);
        label_fillBar = new QLabel(groupBox_BarFill);
        label_fillBar->setObjectName(QString::fromUtf8("label_fillBar"));
        label_fillBar->setGeometry(QRect(16, 487, 111, 31));
        label_fillBar->setFont(font);
        label_fillBar->setStyleSheet(QString::fromUtf8("QLabel {color:white;}"));
        spinBox_labelOffBar = new QSpinBox(groupBox_BarFill);
        spinBox_labelOffBar->setObjectName(QString::fromUtf8("spinBox_labelOffBar"));
        spinBox_labelOffBar->setGeometry(QRect(136, 494, 51, 22));
        spinBox_labelOffBar->setFont(font);
        spinBox_labelOffBar->setMinimum(-1000);
        spinBox_labelOffBar->setMaximum(1000);
        spinBox_labelOffBar->setSingleStep(1);
        spinBox_labelOffBar->setValue(0);
        line_13 = new QFrame(groupBox_BarFill);
        line_13->setObjectName(QString::fromUtf8("line_13"));
        line_13->setGeometry(QRect(1, 230, 298, 16));
        line_13->setFont(font);
        line_13->setFrameShape(QFrame::HLine);
        line_13->setFrameShadow(QFrame::Sunken);
        label_yMin_3 = new QLabel(groupBox_BarFill);
        label_yMin_3->setObjectName(QString::fromUtf8("label_yMin_3"));
        label_yMin_3->setGeometry(QRect(45, 440, 47, 13));
        label_yMin_3->setFont(font);
        label_yMin_3->setStyleSheet(QString::fromUtf8("QLabel {color:white;}"));
        doubleSpinBox_yMaxBarFill = new QDoubleSpinBox(groupBox_BarFill);
        doubleSpinBox_yMaxBarFill->setObjectName(QString::fromUtf8("doubleSpinBox_yMaxBarFill"));
        doubleSpinBox_yMaxBarFill->setGeometry(QRect(183, 437, 51, 22));
        doubleSpinBox_yMaxBarFill->setFont(font);
        doubleSpinBox_yMaxBarFill->setMaximum(100000000000.000000000000000);
        doubleSpinBox_yMinBarFill = new QDoubleSpinBox(groupBox_BarFill);
        doubleSpinBox_yMinBarFill->setObjectName(QString::fromUtf8("doubleSpinBox_yMinBarFill"));
        doubleSpinBox_yMinBarFill->setGeometry(QRect(79, 437, 51, 22));
        doubleSpinBox_yMinBarFill->setFont(font);
        label_yMax_3 = new QLabel(groupBox_BarFill);
        label_yMax_3->setObjectName(QString::fromUtf8("label_yMax_3"));
        label_yMax_3->setGeometry(QRect(145, 440, 47, 13));
        label_yMax_3->setFont(font);
        label_yMax_3->setStyleSheet(QString::fromUtf8("QLabel {color:white;}"));
        pushButton_barArea = new QPushButton(groupBox_BarFill);
        pushButton_barArea->setObjectName(QString::fromUtf8("pushButton_barArea"));
        pushButton_barArea->setGeometry(QRect(72, 353, 83, 24));
        pushButton_barArea->setFont(font);
        pushButton_barArea->setMouseTracking(false);
        pushButton_barArea->setAutoFillBackground(false);
        pushButton_barArea->setStyleSheet(QString::fromUtf8("QPushButton#pushButton_barArea {\n"
"	color: white;\n"
"    background-color:  rgb(104, 104, 104);\n"
"    border-style: none;\n"
"    border-width: 2px;\n"
"    border-color: rgb(104, 104, 104);\n"
"}\n"
"QPushButton#pushButton_barArea:pressed {\n"
"    background-color: rgb(50, 50, 50);\n"
"    border-style: inset;\n"
"}"));
        pushButton_barArea->setAutoDefault(false);
        pushButton_barArea->setFlat(true);
        label_barLength = new QLabel(groupBox_BarFill);
        label_barLength->setObjectName(QString::fromUtf8("label_barLength"));
        label_barLength->setGeometry(QRect(160, 349, 92, 32));
        label_barLength->setFont(font);
        label_barLength->setStyleSheet(QString::fromUtf8("QLabel { background-color : white; }"));
        label_barArea = new QLabel(groupBox_BarFill);
        label_barArea->setObjectName(QString::fromUtf8("label_barArea"));
        label_barArea->setGeometry(QRect(68, 349, 92, 32));
        label_barArea->setFont(font);
        label_barArea->setStyleSheet(QString::fromUtf8("QLabel { background-color : white; }"));
        pushButton_barLength = new QPushButton(groupBox_BarFill);
        pushButton_barLength->setObjectName(QString::fromUtf8("pushButton_barLength"));
        pushButton_barLength->setGeometry(QRect(164, 353, 83, 24));
        pushButton_barLength->setFont(font);
        pushButton_barLength->setAutoFillBackground(false);
        pushButton_barLength->setStyleSheet(QString::fromUtf8("QPushButton#pushButton_barLength {\n"
"	color: white;\n"
"    background-color:  rgb(104, 104, 104);\n"
"    border-style: none;\n"
"    border-width: 2px;\n"
"    border-color: rgb(104, 104, 104);\n"
"}\n"
"QPushButton#pushButton_barLength:pressed {\n"
"    background-color: rgb(50, 50, 50);\n"
"    border-style: inset;\n"
"}"));
        pushButton_barLength->setFlat(true);
        line_14 = new QFrame(groupBox_BarFill);
        line_14->setObjectName(QString::fromUtf8("line_14"));
        line_14->setGeometry(QRect(1, 540, 298, 16));
        line_14->setFont(font);
        line_14->setFrameShape(QFrame::HLine);
        line_14->setFrameShadow(QFrame::Sunken);
        label_26 = new QLabel(groupBox_BarFill);
        label_26->setObjectName(QString::fromUtf8("label_26"));
        label_26->setGeometry(QRect(16, 319, 131, 20));
        label_26->setFont(font);
        label_26->setStyleSheet(QString::fromUtf8("QLabel {color:white;}"));
        label_26->setWordWrap(true);
        label_fillHori_2 = new QLabel(groupBox_BarFill);
        label_fillHori_2->setObjectName(QString::fromUtf8("label_fillHori_2"));
        label_fillHori_2->setGeometry(QRect(83, 275, 78, 32));
        label_fillHori_2->setFont(font);
        label_fillHori_2->setStyleSheet(QString::fromUtf8("QLabel { background-color : white; }"));
        pushButton_fillBarHori = new QPushButton(groupBox_BarFill);
        pushButton_fillBarHori->setObjectName(QString::fromUtf8("pushButton_fillBarHori"));
        pushButton_fillBarHori->setGeometry(QRect(87, 279, 71, 24));
        pushButton_fillBarHori->setFont(font);
        pushButton_fillBarHori->setAutoFillBackground(false);
        pushButton_fillBarHori->setStyleSheet(QString::fromUtf8("QPushButton#pushButton_fillBarHori {\n"
"	color: white;\n"
"    background-color:  rgb(104, 104, 104);\n"
"    border-style: none;\n"
"    border-width: 2px;\n"
"    border-color: rgb(104, 104, 104);\n"
"}\n"
"QPushButton#pushButton_fillBarHori:pressed {\n"
"    background-color: rgb(50, 50, 50);\n"
"    border-style: inset;\n"
"}"));
        pushButton_fillBarHori->setFlat(true);
        label_fillVerti_2 = new QLabel(groupBox_BarFill);
        label_fillVerti_2->setObjectName(QString::fromUtf8("label_fillVerti_2"));
        label_fillVerti_2->setGeometry(QRect(160, 275, 63, 32));
        label_fillVerti_2->setFont(font);
        label_fillVerti_2->setStyleSheet(QString::fromUtf8("QLabel { background-color : rgb(72, 72, 72); }"));
        pushButton_fillBarVerti = new QPushButton(groupBox_BarFill);
        pushButton_fillBarVerti->setObjectName(QString::fromUtf8("pushButton_fillBarVerti"));
        pushButton_fillBarVerti->setGeometry(QRect(164, 279, 55, 24));
        pushButton_fillBarVerti->setFont(font);
        pushButton_fillBarVerti->setAutoFillBackground(false);
        pushButton_fillBarVerti->setStyleSheet(QString::fromUtf8("QPushButton#pushButton_fillBarVerti {\n"
"	color: white;\n"
"    background-color:  rgb(104, 104, 104);\n"
"    border-style: none;\n"
"    border-width: 2px;\n"
"    border-color: rgb(104, 104, 104);\n"
"}\n"
"QPushButton#pushButton_fillBarVerti:pressed {\n"
"    background-color: rgb(50, 50, 50);\n"
"    border-style: inset;\n"
"}"));
        pushButton_fillBarVerti->setFlat(true);
        label_27 = new QLabel(groupBox_BarFill);
        label_27->setObjectName(QString::fromUtf8("label_27"));
        label_27->setGeometry(QRect(16, 253, 131, 20));
        label_27->setFont(font);
        label_27->setStyleSheet(QString::fromUtf8("QLabel {color:white;}"));
        label_27->setWordWrap(true);
        label_28 = new QLabel(groupBox_BarFill);
        label_28->setObjectName(QString::fromUtf8("label_28"));
        label_28->setGeometry(QRect(16, 402, 131, 20));
        label_28->setFont(font);
        label_28->setStyleSheet(QString::fromUtf8("QLabel {color:white;}"));
        label_28->setWordWrap(true);
        label_barArea->raise();
        pushButton_barMask->raise();
        pushButton_barMaskNext->raise();
        pushButton_barMaskPrev->raise();
        label_barMask->raise();
        label_barCurrLabel->raise();
        pushButton_barMaskColor->raise();
        label_barMaskColor->raise();
        label_fillBar->raise();
        spinBox_labelOffBar->raise();
        line_13->raise();
        label_yMin_3->raise();
        doubleSpinBox_yMaxBarFill->raise();
        doubleSpinBox_yMinBarFill->raise();
        label_yMax_3->raise();
        pushButton_barArea->raise();
        label_barLength->raise();
        pushButton_barLength->raise();
        line_14->raise();
        label_26->raise();
        label_fillHori_2->raise();
        pushButton_fillBarHori->raise();
        label_fillVerti_2->raise();
        pushButton_fillBarVerti->raise();
        label_27->raise();
        label_28->raise();
        groupBox_PieFill = new QGroupBox(groupBox_fill);
        groupBox_PieFill->setObjectName(QString::fromUtf8("groupBox_PieFill"));
        groupBox_PieFill->setGeometry(QRect(10, 39, 300, 641));
        groupBox_PieFill->setFont(font);
        groupBox_PieFill->setStyleSheet(QString::fromUtf8("QGroupBox{\n"
"border:none;\n"
"} "));
        labelimg = new QLabel(groupBox_PieFill);
        labelimg->setObjectName(QString::fromUtf8("labelimg"));
        labelimg->setGeometry(QRect(30, 10, 240, 140));
        labelimg->setFont(font);
        labelimg->setAutoFillBackground(false);
        labelimg->setStyleSheet(QString::fromUtf8("QLabel { background-color : rgb(204, 204, 204); color: white}"));
        labelimg->setFrameShape(QFrame::NoFrame);
        labelimg->setScaledContents(true);
        pushButton_createMask = new QPushButton(groupBox_PieFill);
        pushButton_createMask->setObjectName(QString::fromUtf8("pushButton_createMask"));
        pushButton_createMask->setGeometry(QRect(70, 160, 160, 24));
        pushButton_createMask->setFont(font);
        pushButton_createMask->setStyleSheet(QString::fromUtf8("QPushButton#pushButton_createMask {\n"
"	color: white;\n"
"    background-color:  rgb(104, 104, 104);\n"
"    border-style: none;\n"
"    border-width: 2px;\n"
"    border-color: rgb(104, 104, 104);\n"
"}\n"
"QPushButton#pushButton_createMask:pressed {\n"
"    background-color: rgb(50, 50, 50);\n"
"    border-style: inset;\n"
"}"));
        pushButton_pieAr = new QPushButton(groupBox_PieFill);
        pushButton_pieAr->setObjectName(QString::fromUtf8("pushButton_pieAr"));
        pushButton_pieAr->setGeometry(QRect(137, 299, 54, 24));
        pushButton_pieAr->setFont(font);
        pushButton_pieAr->setAutoFillBackground(false);
        pushButton_pieAr->setStyleSheet(QString::fromUtf8("QPushButton#pushButton_pieAr {\n"
"	color: white;\n"
"    background-color:  rgb(104, 104, 104);\n"
"    border-style: none;\n"
"    border-width: 2px;\n"
"    border-color: rgb(104, 104, 104);\n"
"}\n"
"QPushButton#pushButton_pieAr:pressed {\n"
"    background-color: rgb(50, 50, 50);\n"
"    border-style: inset;\n"
"}"));
        pushButton_pieAr->setFlat(true);
        pushButton_pieRad = new QPushButton(groupBox_PieFill);
        pushButton_pieRad->setObjectName(QString::fromUtf8("pushButton_pieRad"));
        pushButton_pieRad->setGeometry(QRect(75, 299, 54, 24));
        pushButton_pieRad->setFont(font);
        pushButton_pieRad->setMouseTracking(false);
        pushButton_pieRad->setAutoFillBackground(false);
        pushButton_pieRad->setStyleSheet(QString::fromUtf8("QPushButton#pushButton_pieRad {\n"
"	color: white;\n"
"    background-color:  rgb(104, 104, 104);\n"
"    border-style: none;\n"
"    border-width: 2px;\n"
"    border-color: rgb(104, 104, 104);\n"
"}\n"
"QPushButton#pushButton_pieRad:pressed {\n"
"    background-color: rgb(50, 50, 50);\n"
"    border-style: inset;\n"
"}"));
        pushButton_pieRad->setAutoDefault(false);
        pushButton_pieRad->setFlat(true);
        label_pieRad = new QLabel(groupBox_PieFill);
        label_pieRad->setObjectName(QString::fromUtf8("label_pieRad"));
        label_pieRad->setGeometry(QRect(71, 295, 62, 32));
        label_pieRad->setFont(font);
        label_pieRad->setStyleSheet(QString::fromUtf8("QLabel { background-color : white; }"));
        label_pieAr = new QLabel(groupBox_PieFill);
        label_pieAr->setObjectName(QString::fromUtf8("label_pieAr"));
        label_pieAr->setGeometry(QRect(133, 295, 62, 32));
        label_pieAr->setFont(font);
        label_pieAr->setStyleSheet(QString::fromUtf8("QLabel { background-color : white; }"));
        horizontalSlider_pieAng = new QSlider(groupBox_PieFill);
        horizontalSlider_pieAng->setObjectName(QString::fromUtf8("horizontalSlider_pieAng"));
        horizontalSlider_pieAng->setGeometry(QRect(38, 369, 221, 19));
        horizontalSlider_pieAng->setFont(font);
        horizontalSlider_pieAng->setStyleSheet(QString::fromUtf8("QSlider::groove:horizontal {\n"
"	background-color: rgb(240,240,240);\n"
"	height:3px;\n"
"}\n"
"\n"
"QSlider::handle:horizontal {\n"
"	background-color: rgb(240,240,240);\n"
"    border: 1px solid #5c5c5c;\n"
"    width: 6px;\n"
"    height: 8px;\n"
"	margin: -8px 0;\n"
"    border-radius: 4px;\n"
"}"));
        horizontalSlider_pieAng->setMaximum(360);
        horizontalSlider_pieAng->setValue(180);
        horizontalSlider_pieAng->setOrientation(Qt::Horizontal);
        label_9 = new QLabel(groupBox_PieFill);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setGeometry(QRect(25, 369, 20, 20));
        label_9->setFont(font);
        label_9->setStyleSheet(QString::fromUtf8("QLabel {color:white;}"));
        label_9->setWordWrap(true);
        label_10 = new QLabel(groupBox_PieFill);
        label_10->setObjectName(QString::fromUtf8("label_10"));
        label_10->setGeometry(QRect(268, 369, 31, 20));
        label_10->setFont(font);
        label_10->setStyleSheet(QString::fromUtf8("QLabel {color:white;}"));
        label_10->setWordWrap(true);
        label_11 = new QLabel(groupBox_PieFill);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        label_11->setGeometry(QRect(16, 339, 61, 20));
        label_11->setFont(font);
        label_11->setStyleSheet(QString::fromUtf8("QLabel {color:white;}"));
        label_11->setWordWrap(true);
        label_pieLabelRad = new QLabel(groupBox_PieFill);
        label_pieLabelRad->setObjectName(QString::fromUtf8("label_pieLabelRad"));
        label_pieLabelRad->setGeometry(QRect(20, 461, 91, 16));
        label_pieLabelRad->setFont(font);
        label_pieLabelRad->setStyleSheet(QString::fromUtf8("QLabel {color:white;}"));
        spinBox_pieLabelRad = new QSpinBox(groupBox_PieFill);
        spinBox_pieLabelRad->setObjectName(QString::fromUtf8("spinBox_pieLabelRad"));
        spinBox_pieLabelRad->setGeometry(QRect(110, 459, 51, 22));
        spinBox_pieLabelRad->setFont(font);
        spinBox_pieLabelRad->setMaximum(1000);
        spinBox_pieLabelRad->setSingleStep(1);
        spinBox_pieLabelRad->setValue(25);
        comboBoxBrewerNames = new QComboBox(groupBox_PieFill);
        comboBoxBrewerNames->setObjectName(QString::fromUtf8("comboBoxBrewerNames"));
        comboBoxBrewerNames->setGeometry(QRect(86, 526, 131, 22));
        comboBoxBrewerNames->setFont(font);
        comboBoxBrewerNames->setStyleSheet(QString::fromUtf8("QComboBox#comboBoxBrewerNames {\n"
"	color: white;\n"
"    background-color:  rgb(104, 104, 104);\n"
"}\n"
""));
        pushButton_pieColor_1 = new QPushButton(groupBox_PieFill);
        pushButton_pieColor_1->setObjectName(QString::fromUtf8("pushButton_pieColor_1"));
        pushButton_pieColor_1->setGeometry(QRect(25, 560, 52, 24));
        pushButton_pieColor_1->setFont(font);
        pushButton_pieColor_1->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color:  rgb(104, 104, 104);\n"
"    border-style: none;\n"
"    border-width: 2px;\n"
"    border-color: rgb(104, 104, 104);\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: rgb(50, 50, 50);\n"
"    border-style: inset;\n"
"}"));
        pushButton_pieColor_1->setFlat(true);
        pushButton_pieColor_2 = new QPushButton(groupBox_PieFill);
        pushButton_pieColor_2->setObjectName(QString::fromUtf8("pushButton_pieColor_2"));
        pushButton_pieColor_2->setGeometry(QRect(79, 560, 52, 24));
        pushButton_pieColor_2->setFont(font);
        pushButton_pieColor_2->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color:  rgb(104, 104, 104);\n"
"    border-style: none;\n"
"    border-width: 2px;\n"
"    border-color: rgb(104, 104, 104);\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: rgb(50, 50, 50);\n"
"    border-style: inset;\n"
"}"));
        pushButton_pieColor_2->setFlat(true);
        pushButton_pieColor_3 = new QPushButton(groupBox_PieFill);
        pushButton_pieColor_3->setObjectName(QString::fromUtf8("pushButton_pieColor_3"));
        pushButton_pieColor_3->setGeometry(QRect(133, 560, 52, 24));
        pushButton_pieColor_3->setFont(font);
        pushButton_pieColor_3->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color:  rgb(104, 104, 104);\n"
"    border-style: none;\n"
"    border-width: 2px;\n"
"    border-color: rgb(104, 104, 104);\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: rgb(50, 50, 50);\n"
"    border-style: inset;\n"
"}"));
        pushButton_pieColor_3->setFlat(true);
        pushButton_pieColor_5 = new QPushButton(groupBox_PieFill);
        pushButton_pieColor_5->setObjectName(QString::fromUtf8("pushButton_pieColor_5"));
        pushButton_pieColor_5->setGeometry(QRect(241, 560, 52, 24));
        pushButton_pieColor_5->setFont(font);
        pushButton_pieColor_5->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color:  rgb(104, 104, 104);\n"
"    border-style: none;\n"
"    border-width: 2px;\n"
"    border-color: rgb(104, 104, 104);\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: rgb(50, 50, 50);\n"
"    border-style: inset;\n"
"}"));
        pushButton_pieColor_5->setFlat(true);
        pushButton_pieColor_4 = new QPushButton(groupBox_PieFill);
        pushButton_pieColor_4->setObjectName(QString::fromUtf8("pushButton_pieColor_4"));
        pushButton_pieColor_4->setGeometry(QRect(187, 560, 52, 24));
        pushButton_pieColor_4->setFont(font);
        pushButton_pieColor_4->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color:  rgb(104, 104, 104);\n"
"    border-style: none;\n"
"    border-width: 2px;\n"
"    border-color: rgb(104, 104, 104);\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: rgb(50, 50, 50);\n"
"    border-style: inset;\n"
"}"));
        pushButton_pieColor_4->setFlat(true);
        pushButton_pieColor_6 = new QPushButton(groupBox_PieFill);
        pushButton_pieColor_6->setObjectName(QString::fromUtf8("pushButton_pieColor_6"));
        pushButton_pieColor_6->setGeometry(QRect(25, 586, 52, 24));
        pushButton_pieColor_6->setFont(font);
        pushButton_pieColor_6->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color:  rgb(104, 104, 104);\n"
"    border-style: none;\n"
"    border-width: 2px;\n"
"    border-color: rgb(104, 104, 104);\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: rgb(50, 50, 50);\n"
"    border-style: inset;\n"
"}"));
        pushButton_pieColor_6->setFlat(true);
        pushButton_pieColor_11 = new QPushButton(groupBox_PieFill);
        pushButton_pieColor_11->setObjectName(QString::fromUtf8("pushButton_pieColor_11"));
        pushButton_pieColor_11->setGeometry(QRect(25, 612, 52, 24));
        pushButton_pieColor_11->setFont(font);
        pushButton_pieColor_11->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color:  rgb(104, 104, 104);\n"
"    border-style: none;\n"
"    border-width: 2px;\n"
"    border-color: rgb(104, 104, 104);\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: rgb(50, 50, 50);\n"
"    border-style: inset;\n"
"}"));
        pushButton_pieColor_11->setFlat(true);
        pushButton_pieColor_8 = new QPushButton(groupBox_PieFill);
        pushButton_pieColor_8->setObjectName(QString::fromUtf8("pushButton_pieColor_8"));
        pushButton_pieColor_8->setGeometry(QRect(133, 586, 52, 24));
        pushButton_pieColor_8->setFont(font);
        pushButton_pieColor_8->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color:  rgb(104, 104, 104);\n"
"    border-style: none;\n"
"    border-width: 2px;\n"
"    border-color: rgb(104, 104, 104);\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: rgb(50, 50, 50);\n"
"    border-style: inset;\n"
"}"));
        pushButton_pieColor_8->setFlat(true);
        pushButton_pieColor_10 = new QPushButton(groupBox_PieFill);
        pushButton_pieColor_10->setObjectName(QString::fromUtf8("pushButton_pieColor_10"));
        pushButton_pieColor_10->setGeometry(QRect(241, 586, 52, 24));
        pushButton_pieColor_10->setFont(font);
        pushButton_pieColor_10->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color:  rgb(104, 104, 104);\n"
"    border-style: none;\n"
"    border-width: 2px;\n"
"    border-color: rgb(104, 104, 104);\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: rgb(50, 50, 50);\n"
"    border-style: inset;\n"
"}"));
        pushButton_pieColor_10->setFlat(true);
        pushButton_pieColor_12 = new QPushButton(groupBox_PieFill);
        pushButton_pieColor_12->setObjectName(QString::fromUtf8("pushButton_pieColor_12"));
        pushButton_pieColor_12->setGeometry(QRect(79, 612, 52, 24));
        pushButton_pieColor_12->setFont(font);
        pushButton_pieColor_12->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color:  rgb(104, 104, 104);\n"
"    border-style: none;\n"
"    border-width: 2px;\n"
"    border-color: rgb(104, 104, 104);\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: rgb(50, 50, 50);\n"
"    border-style: inset;\n"
"}"));
        pushButton_pieColor_12->setFlat(true);
        pushButton_pieColor_7 = new QPushButton(groupBox_PieFill);
        pushButton_pieColor_7->setObjectName(QString::fromUtf8("pushButton_pieColor_7"));
        pushButton_pieColor_7->setGeometry(QRect(79, 586, 52, 24));
        pushButton_pieColor_7->setFont(font);
        pushButton_pieColor_7->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color:  rgb(104, 104, 104);\n"
"    border-style: none;\n"
"    border-width: 2px;\n"
"    border-color: rgb(104, 104, 104);\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: rgb(50, 50, 50);\n"
"    border-style: inset;\n"
"}"));
        pushButton_pieColor_7->setFlat(true);
        pushButton_pieColor_9 = new QPushButton(groupBox_PieFill);
        pushButton_pieColor_9->setObjectName(QString::fromUtf8("pushButton_pieColor_9"));
        pushButton_pieColor_9->setGeometry(QRect(187, 586, 52, 24));
        pushButton_pieColor_9->setFont(font);
        pushButton_pieColor_9->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color:  rgb(104, 104, 104);\n"
"    border-style: none;\n"
"    border-width: 2px;\n"
"    border-color: rgb(104, 104, 104);\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: rgb(50, 50, 50);\n"
"    border-style: inset;\n"
"}"));
        pushButton_pieColor_9->setFlat(true);
        line_8 = new QFrame(groupBox_PieFill);
        line_8->setObjectName(QString::fromUtf8("line_8"));
        line_8->setGeometry(QRect(1, 486, 298, 16));
        line_8->setFont(font);
        line_8->setFrameShape(QFrame::HLine);
        line_8->setFrameShadow(QFrame::Sunken);
        label_12 = new QLabel(groupBox_PieFill);
        label_12->setObjectName(QString::fromUtf8("label_12"));
        label_12->setGeometry(QRect(12, 496, 111, 20));
        label_12->setFont(font);
        label_12->setStyleSheet(QString::fromUtf8("QLabel {color:white;}"));
        label_12->setWordWrap(true);
        line_10 = new QFrame(groupBox_PieFill);
        line_10->setObjectName(QString::fromUtf8("line_10"));
        line_10->setGeometry(QRect(1, 190, 298, 16));
        line_10->setFont(font);
        line_10->setFrameShape(QFrame::HLine);
        line_10->setFrameShadow(QFrame::Sunken);
        label_pieLabelRad_2 = new QLabel(groupBox_PieFill);
        label_pieLabelRad_2->setObjectName(QString::fromUtf8("label_pieLabelRad_2"));
        label_pieLabelRad_2->setGeometry(QRect(20, 404, 91, 31));
        label_pieLabelRad_2->setFont(font);
        label_pieLabelRad_2->setStyleSheet(QString::fromUtf8("QLabel {color:white;}"));
        spinBox_pieOriginOffX = new QSpinBox(groupBox_PieFill);
        spinBox_pieOriginOffX->setObjectName(QString::fromUtf8("spinBox_pieOriginOffX"));
        spinBox_pieOriginOffX->setGeometry(QRect(85, 410, 51, 22));
        spinBox_pieOriginOffX->setFont(font);
        spinBox_pieOriginOffX->setMinimum(-1000);
        spinBox_pieOriginOffX->setMaximum(1000);
        spinBox_pieOriginOffX->setSingleStep(1);
        spinBox_pieOriginOffX->setValue(0);
        label_pieLabelRad_3 = new QLabel(groupBox_PieFill);
        label_pieLabelRad_3->setObjectName(QString::fromUtf8("label_pieLabelRad_3"));
        label_pieLabelRad_3->setGeometry(QRect(157, 404, 61, 31));
        label_pieLabelRad_3->setFont(font);
        label_pieLabelRad_3->setStyleSheet(QString::fromUtf8("QLabel {color:white;}"));
        spinBox_pieOriginOffY = new QSpinBox(groupBox_PieFill);
        spinBox_pieOriginOffY->setObjectName(QString::fromUtf8("spinBox_pieOriginOffY"));
        spinBox_pieOriginOffY->setGeometry(QRect(225, 410, 51, 22));
        spinBox_pieOriginOffY->setFont(font);
        spinBox_pieOriginOffY->setMinimum(-1000);
        spinBox_pieOriginOffY->setMaximum(1000);
        spinBox_pieOriginOffY->setSingleStep(1);
        spinBox_pieOriginOffY->setValue(0);
        pushButton_pieColor_13 = new QPushButton(groupBox_PieFill);
        pushButton_pieColor_13->setObjectName(QString::fromUtf8("pushButton_pieColor_13"));
        pushButton_pieColor_13->setGeometry(QRect(133, 612, 52, 24));
        pushButton_pieColor_13->setFont(font);
        pushButton_pieColor_13->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color:  rgb(104, 104, 104);\n"
"    border-style: none;\n"
"    border-width: 2px;\n"
"    border-color: rgb(104, 104, 104);\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: rgb(50, 50, 50);\n"
"    border-style: inset;\n"
"}"));
        pushButton_pieColor_13->setFlat(true);
        pushButton_pieColor_14 = new QPushButton(groupBox_PieFill);
        pushButton_pieColor_14->setObjectName(QString::fromUtf8("pushButton_pieColor_14"));
        pushButton_pieColor_14->setGeometry(QRect(187, 612, 52, 24));
        pushButton_pieColor_14->setFont(font);
        pushButton_pieColor_14->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color:  rgb(104, 104, 104);\n"
"    border-style: none;\n"
"    border-width: 2px;\n"
"    border-color: rgb(104, 104, 104);\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: rgb(50, 50, 50);\n"
"    border-style: inset;\n"
"}"));
        pushButton_pieColor_14->setFlat(true);
        pushButton_pieColor_15 = new QPushButton(groupBox_PieFill);
        pushButton_pieColor_15->setObjectName(QString::fromUtf8("pushButton_pieColor_15"));
        pushButton_pieColor_15->setGeometry(QRect(241, 612, 52, 24));
        pushButton_pieColor_15->setFont(font);
        pushButton_pieColor_15->setStyleSheet(QString::fromUtf8("QPushButton {\n"
"    background-color:  rgb(104, 104, 104);\n"
"    border-style: none;\n"
"    border-width: 2px;\n"
"    border-color: rgb(104, 104, 104);\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: rgb(50, 50, 50);\n"
"    border-style: inset;\n"
"}"));
        pushButton_pieColor_15->setFlat(true);
        label_pieArc = new QLabel(groupBox_PieFill);
        label_pieArc->setObjectName(QString::fromUtf8("label_pieArc"));
        label_pieArc->setGeometry(QRect(195, 295, 62, 32));
        label_pieArc->setFont(font);
        label_pieArc->setStyleSheet(QString::fromUtf8("QLabel { background-color : white; }"));
        pushButton_pieArc = new QPushButton(groupBox_PieFill);
        pushButton_pieArc->setObjectName(QString::fromUtf8("pushButton_pieArc"));
        pushButton_pieArc->setGeometry(QRect(199, 299, 54, 24));
        pushButton_pieArc->setFont(font);
        pushButton_pieArc->setAutoFillBackground(false);
        pushButton_pieArc->setStyleSheet(QString::fromUtf8("QPushButton#pushButton_pieArc {\n"
"	color: white;\n"
"    background-color:  rgb(104, 104, 104);\n"
"    border-style: none;\n"
"    border-width: 2px;\n"
"    border-color: rgb(104, 104, 104);\n"
"}\n"
"QPushButton#pushButton_pieArc:pressed {\n"
"    background-color: rgb(50, 50, 50);\n"
"    border-style: inset;\n"
"}"));
        pushButton_pieArc->setFlat(true);
        label_24 = new QLabel(groupBox_PieFill);
        label_24->setObjectName(QString::fromUtf8("label_24"));
        label_24->setGeometry(QRect(16, 205, 131, 20));
        label_24->setFont(font);
        label_24->setStyleSheet(QString::fromUtf8("QLabel {color:white;}"));
        label_24->setWordWrap(true);
        pushButton_fillHori = new QPushButton(groupBox_PieFill);
        pushButton_fillHori->setObjectName(QString::fromUtf8("pushButton_fillHori"));
        pushButton_fillHori->setGeometry(QRect(131, 234, 71, 24));
        pushButton_fillHori->setFont(font);
        pushButton_fillHori->setAutoFillBackground(false);
        pushButton_fillHori->setStyleSheet(QString::fromUtf8("QPushButton#pushButton_fillHori {\n"
"	color: white;\n"
"    background-color:  rgb(104, 104, 104);\n"
"    border-style: none;\n"
"    border-width: 2px;\n"
"    border-color: rgb(104, 104, 104);\n"
"}\n"
"QPushButton#pushButton_fillHori:pressed {\n"
"    background-color: rgb(50, 50, 50);\n"
"    border-style: inset;\n"
"}"));
        pushButton_fillHori->setFlat(true);
        pushButton_fillVerti = new QPushButton(groupBox_PieFill);
        pushButton_fillVerti->setObjectName(QString::fromUtf8("pushButton_fillVerti"));
        pushButton_fillVerti->setGeometry(QRect(208, 234, 55, 24));
        pushButton_fillVerti->setFont(font);
        pushButton_fillVerti->setAutoFillBackground(false);
        pushButton_fillVerti->setStyleSheet(QString::fromUtf8("QPushButton#pushButton_fillVerti {\n"
"	color: white;\n"
"    background-color:  rgb(104, 104, 104);\n"
"    border-style: none;\n"
"    border-width: 2px;\n"
"    border-color: rgb(104, 104, 104);\n"
"}\n"
"QPushButton#pushButton_fillVerti:pressed {\n"
"    background-color: rgb(50, 50, 50);\n"
"    border-style: inset;\n"
"}"));
        pushButton_fillVerti->setFlat(true);
        label_fillVerti = new QLabel(groupBox_PieFill);
        label_fillVerti->setObjectName(QString::fromUtf8("label_fillVerti"));
        label_fillVerti->setGeometry(QRect(204, 230, 63, 32));
        label_fillVerti->setFont(font);
        label_fillVerti->setStyleSheet(QString::fromUtf8("QLabel { background-color : white; }"));
        pushButton_fillRad = new QPushButton(groupBox_PieFill);
        pushButton_fillRad->setObjectName(QString::fromUtf8("pushButton_fillRad"));
        pushButton_fillRad->setGeometry(QRect(69, 234, 54, 24));
        pushButton_fillRad->setFont(font);
        pushButton_fillRad->setMouseTracking(false);
        pushButton_fillRad->setAutoFillBackground(false);
        pushButton_fillRad->setStyleSheet(QString::fromUtf8("QPushButton#pushButton_fillRad {\n"
"	color: white;\n"
"    background-color:  rgb(104, 104, 104);\n"
"    border-style: none;\n"
"    border-width: 2px;\n"
"    border-color: rgb(104, 104, 104);\n"
"}\n"
"QPushButton#pushButton_fillRad:pressed {\n"
"    background-color: rgb(50, 50, 50);\n"
"    border-style: inset;\n"
"}"));
        pushButton_fillRad->setAutoDefault(false);
        pushButton_fillRad->setFlat(true);
        label_fillRad = new QLabel(groupBox_PieFill);
        label_fillRad->setObjectName(QString::fromUtf8("label_fillRad"));
        label_fillRad->setGeometry(QRect(65, 230, 62, 32));
        label_fillRad->setFont(font);
        label_fillRad->setStyleSheet(QString::fromUtf8("QLabel { background-color : white; }"));
        label_fillHori = new QLabel(groupBox_PieFill);
        label_fillHori->setObjectName(QString::fromUtf8("label_fillHori"));
        label_fillHori->setGeometry(QRect(127, 230, 78, 32));
        label_fillHori->setFont(font);
        label_fillHori->setStyleSheet(QString::fromUtf8("QLabel { background-color : white; }"));
        label_25 = new QLabel(groupBox_PieFill);
        label_25->setObjectName(QString::fromUtf8("label_25"));
        label_25->setGeometry(QRect(16, 270, 131, 20));
        label_25->setFont(font);
        label_25->setStyleSheet(QString::fromUtf8("QLabel {color:white;}"));
        label_25->setWordWrap(true);
        label_fillRad->raise();
        label_fillHori->raise();
        label_fillVerti->raise();
        label_pieRad->raise();
        label_pieAr->raise();
        labelimg->raise();
        pushButton_createMask->raise();
        pushButton_pieAr->raise();
        pushButton_pieRad->raise();
        horizontalSlider_pieAng->raise();
        label_9->raise();
        label_10->raise();
        label_11->raise();
        label_pieLabelRad->raise();
        spinBox_pieLabelRad->raise();
        comboBoxBrewerNames->raise();
        pushButton_pieColor_1->raise();
        pushButton_pieColor_2->raise();
        pushButton_pieColor_3->raise();
        pushButton_pieColor_5->raise();
        pushButton_pieColor_4->raise();
        pushButton_pieColor_6->raise();
        pushButton_pieColor_11->raise();
        pushButton_pieColor_8->raise();
        pushButton_pieColor_10->raise();
        pushButton_pieColor_12->raise();
        pushButton_pieColor_7->raise();
        pushButton_pieColor_9->raise();
        line_8->raise();
        label_12->raise();
        line_10->raise();
        label_pieLabelRad_2->raise();
        spinBox_pieOriginOffX->raise();
        label_pieLabelRad_3->raise();
        spinBox_pieOriginOffY->raise();
        pushButton_pieColor_13->raise();
        pushButton_pieColor_14->raise();
        pushButton_pieColor_15->raise();
        label_pieArc->raise();
        pushButton_pieArc->raise();
        label_24->raise();
        pushButton_fillHori->raise();
        pushButton_fillVerti->raise();
        pushButton_fillRad->raise();
        label_25->raise();
        pushButton_barFill = new QPushButton(groupBox_fill);
        pushButton_barFill->setObjectName(QString::fromUtf8("pushButton_barFill"));
        pushButton_barFill->setGeometry(QRect(169, 14, 55, 24));
        QFont font6;
        font6.setPointSize(11);
        font6.setBold(false);
        font6.setWeight(50);
        pushButton_barFill->setFont(font6);
        pushButton_barFill->setAutoFillBackground(false);
        pushButton_barFill->setStyleSheet(QString::fromUtf8("QPushButton#pushButton_barFill {\n"
"	color: white;\n"
"    background-color:  rgb(104, 104, 104);\n"
"    border-style: none;\n"
"    border-width: 2px;\n"
"    border-color: rgb(104, 104, 104);\n"
"}\n"
"QPushButton#pushButton_barFill:pressed {\n"
"    background-color: rgb(50, 50, 50);\n"
"    border-style: inset;\n"
"}"));
        pushButton_barFill->setFlat(true);
        label_barFill = new QLabel(groupBox_fill);
        label_barFill->setObjectName(QString::fromUtf8("label_barFill"));
        label_barFill->setGeometry(QRect(166, 11, 61, 30));
        label_barFill->setStyleSheet(QString::fromUtf8("QLabel { background-color : white; }"));
        label_pieFill = new QLabel(groupBox_fill);
        label_pieFill->setObjectName(QString::fromUtf8("label_pieFill"));
        label_pieFill->setGeometry(QRect(108, 11, 62, 30));
        label_pieFill->setStyleSheet(QString::fromUtf8("QLabel { background-color : white; }"));
        pushButton_pieFill = new QPushButton(groupBox_fill);
        pushButton_pieFill->setObjectName(QString::fromUtf8("pushButton_pieFill"));
        pushButton_pieFill->setGeometry(QRect(111, 14, 55, 24));
        pushButton_pieFill->setFont(font6);
        pushButton_pieFill->setMouseTracking(false);
        pushButton_pieFill->setAutoFillBackground(false);
        pushButton_pieFill->setStyleSheet(QString::fromUtf8("QPushButton#pushButton_pieFill {\n"
"	color: white;\n"
"    background-color:  rgb(104, 104, 104);\n"
"    border-style: none;\n"
"    border-width: 2px;\n"
"    border-color: rgb(104, 104, 104);\n"
"}\n"
"QPushButton#pushButton_pieFill:pressed {\n"
"    background-color: rgb(50, 50, 50);\n"
"    border-style: inset;\n"
"}"));
        pushButton_pieFill->setAutoDefault(false);
        pushButton_pieFill->setFlat(true);
        label_barFill->raise();
        groupBox_BarFill->raise();
        groupBox_PieFill->raise();
        pushButton_barFill->raise();
        label_pieFill->raise();
        pushButton_pieFill->raise();
        label_foot = new QLabel(centralWidget);
        label_foot->setObjectName(QString::fromUtf8("label_foot"));
        label_foot->setGeometry(QRect(0, 1056, 1500, 3));
        QFont font7;
        font7.setFamily(QString::fromUtf8("Tunga"));
        font7.setPointSize(15);
        font7.setBold(true);
        font7.setItalic(true);
        font7.setWeight(75);
        label_foot->setFont(font7);
        label_foot->setStyleSheet(QString::fromUtf8("QLabel#label_foot {\n"
"	background-color: rgb(14,99, 156);\n"
"	color: white;\n"
"}"));
        label_left = new QLabel(centralWidget);
        label_left->setObjectName(QString::fromUtf8("label_left"));
        label_left->setGeometry(QRect(0, 0, 3, 1057));
        label_left->setFont(font7);
        label_left->setStyleSheet(QString::fromUtf8("QLabel#label_left {\n"
"	background-color: rgb(14,99, 156);\n"
"	color: white;\n"
"}"));
        label_right = new QLabel(centralWidget);
        label_right->setObjectName(QString::fromUtf8("label_right"));
        label_right->setGeometry(QRect(1497, 0, 3, 1058));
        label_right->setFont(font7);
        label_right->setStyleSheet(QString::fromUtf8("QLabel#label_right {\n"
"	background-color: rgb(14,99, 156);\n"
"	color: white;\n"
"}"));
        label_head = new QLabel(centralWidget);
        label_head->setObjectName(QString::fromUtf8("label_head"));
        label_head->setGeometry(QRect(0, 0, 1500, 3));
        label_head->setFont(font7);
        label_head->setStyleSheet(QString::fromUtf8("QLabel#label_head {\n"
"	background-color: rgb(14,99, 156);\n"
"	color: white;\n"
"}"));
        tableWidget = new QTableWidget(centralWidget);
        tableWidget->setObjectName(QString::fromUtf8("tableWidget"));
        tableWidget->setGeometry(QRect(10, 847, 181, 202));
        tableWidget->setStyleSheet(QString::fromUtf8(""));
        tableWidget->verticalHeader()->setDefaultSectionSize(21);
        horizontalSlider_textFillOpac = new QSlider(centralWidget);
        horizontalSlider_textFillOpac->setObjectName(QString::fromUtf8("horizontalSlider_textFillOpac"));
        horizontalSlider_textFillOpac->setGeometry(QRect(690, 42, 91, 24));
        horizontalSlider_textFillOpac->setStyleSheet(QString::fromUtf8("QSlider::groove:horizontal {\n"
"	background-color: rgb(240,240,240);\n"
"	height:3px;\n"
"}\n"
"\n"
"QSlider::handle:horizontal {\n"
"	background-color: rgb(240,240,240);\n"
"    border: 1px solid #5c5c5c;\n"
"    width: 6px;\n"
"    height: 8px;\n"
"	margin: -8px 0;\n"
"    border-radius: 4px;\n"
"}"));
        horizontalSlider_textFillOpac->setMinimum(0);
        horizontalSlider_textFillOpac->setMaximum(255);
        horizontalSlider_textFillOpac->setPageStep(1);
        horizontalSlider_textFillOpac->setValue(1);
        horizontalSlider_textFillOpac->setOrientation(Qt::Horizontal);
        label_textFillOpac = new QLabel(centralWidget);
        label_textFillOpac->setObjectName(QString::fromUtf8("label_textFillOpac"));
        label_textFillOpac->setGeometry(QRect(590, 42, 91, 24));
        label_textFillOpac->setFont(font1);
        label_textFillOpac->setStyleSheet(QString::fromUtf8("QLabel {color:white;}"));
        label_textFillOpac->setWordWrap(true);
        line_2 = new QFrame(centralWidget);
        line_2->setObjectName(QString::fromUtf8("line_2"));
        line_2->setGeometry(QRect(64, 38, 20, 32));
        line_2->setFont(font);
        line_2->setStyleSheet(QString::fromUtf8(""));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);
        line_9 = new QFrame(centralWidget);
        line_9->setObjectName(QString::fromUtf8("line_9"));
        line_9->setGeometry(QRect(2, 38, 20, 32));
        line_9->setStyleSheet(QString::fromUtf8(""));
        line_9->setFrameShape(QFrame::VLine);
        line_9->setFrameShadow(QFrame::Sunken);
        pushButton_save = new QPushButton(centralWidget);
        pushButton_save->setObjectName(QString::fromUtf8("pushButton_save"));
        pushButton_save->setGeometry(QRect(18, 42, 50, 24));
        QFont font8;
        font8.setFamily(QString::fromUtf8("Nirmala UI"));
        font8.setPointSize(11);
        font8.setBold(true);
        font8.setWeight(75);
        pushButton_save->setFont(font8);
        pushButton_save->setStyleSheet(QString::fromUtf8("QPushButton#pushButton_save {\n"
"	color: white;\n"
"    background-color:  rgb(60, 170, 60);\n"
"    border-style: none;\n"
"    border-width: 2px;\n"
"    border-color: rgb(60, 170, 60);\n"
"}\n"
"QPushButton#pushButton_save:pressed {\n"
"    background-color: rgb(20, 100, 20);\n"
"    border-style: inset;\n"
"}"));
        pushButton_save->setFlat(true);
        distortion_area = new QGroupBox(centralWidget);
        distortion_area->setObjectName(QString::fromUtf8("distortion_area"));
        distortion_area->setGeometry(QRect(1220, 810, 271, 241));
        QPalette palette;
        QBrush brush1(QColor(255, 255, 255, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush1);
        palette.setBrush(QPalette::Active, QPalette::Text, brush1);
        QBrush brush2(QColor(255, 255, 255, 128));
        brush2.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Active, QPalette::PlaceholderText, brush2);
#endif
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush1);
        QBrush brush3(QColor(255, 255, 255, 128));
        brush3.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Inactive, QPalette::PlaceholderText, brush3);
#endif
        QBrush brush4(QColor(120, 120, 120, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush4);
        QBrush brush5(QColor(255, 255, 255, 128));
        brush5.setStyle(Qt::NoBrush);
#if QT_VERSION >= QT_VERSION_CHECK(5, 12, 0)
        palette.setBrush(QPalette::Disabled, QPalette::PlaceholderText, brush5);
#endif
        distortion_area->setPalette(palette);
        distortion_area->setFont(font);
        distortion_area->setAutoFillBackground(false);
        label_err1 = new QLabel(distortion_area);
        label_err1->setObjectName(QString::fromUtf8("label_err1"));
        label_err1->setGeometry(QRect(1, 42, 95, 20));
        label_err1->setFont(font1);
        label_err1->setStyleSheet(QString::fromUtf8("QLabel {color:white;}"));
        label_err1->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_err1->setWordWrap(true);
        label_err2 = new QLabel(distortion_area);
        label_err2->setObjectName(QString::fromUtf8("label_err2"));
        label_err2->setGeometry(QRect(1, 79, 95, 20));
        label_err2->setFont(font1);
        label_err2->setStyleSheet(QString::fromUtf8("QLabel {color:white;}"));
        label_err2->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_err2->setWordWrap(true);
        label_err3 = new QLabel(distortion_area);
        label_err3->setObjectName(QString::fromUtf8("label_err3"));
        label_err3->setGeometry(QRect(1, 116, 95, 20));
        label_err3->setFont(font1);
        label_err3->setStyleSheet(QString::fromUtf8("QLabel {color:white;}"));
        label_err3->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_err3->setWordWrap(true);
        pushButton_optimizePie = new QPushButton(distortion_area);
        pushButton_optimizePie->setObjectName(QString::fromUtf8("pushButton_optimizePie"));
        pushButton_optimizePie->setGeometry(QRect(25, 200, 151, 30));
        pushButton_optimizePie->setFont(font2);
        pushButton_optimizePie->setStyleSheet(QString::fromUtf8("QPushButton#pushButton_optimizePie {\n"
"	color: white;\n"
"    background-color:  rgb(104, 104, 104);\n"
"    border-style: none;\n"
"    border-width: 2px;\n"
"    border-color: rgb(104, 104, 104);\n"
"}\n"
"QPushButton#pushButton_optimizePie:pressed {\n"
"    background-color: rgb(50, 50, 50);\n"
"    border-style: inset;\n"
"}"));
        label_err4 = new QLabel(distortion_area);
        label_err4->setObjectName(QString::fromUtf8("label_err4"));
        label_err4->setGeometry(QRect(1, 153, 95, 20));
        label_err4->setFont(font1);
        label_err4->setStyleSheet(QString::fromUtf8("QLabel {color:white;}"));
        label_err4->setAlignment(Qt::AlignRight|Qt::AlignTrailing|Qt::AlignVCenter);
        label_err4->setWordWrap(true);
        groupBox = new QGroupBox(distortion_area);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(100, 32, 120, 151));
        groupBox->setStyleSheet(QString::fromUtf8("QGroupBox{\n"
"border:none;\n"
"} "));
        label_errorPin1 = new QLabel(groupBox);
        label_errorPin1->setObjectName(QString::fromUtf8("label_errorPin1"));
        label_errorPin1->setGeometry(QRect(0, 10, 4, 22));
        label_errorPin1->setFont(font7);
        label_errorPin1->setStyleSheet(QString::fromUtf8("QLabel#label_errorPin1 {\n"
"	background-color: rgb(0,0,0);\n"
"	color: white;\n"
"	border-width: 1px;\n"
"    border-style: solid;\n"
"    border-color: white;\n"
"}"));
        label_errorBar1 = new QLabel(groupBox);
        label_errorBar1->setObjectName(QString::fromUtf8("label_errorBar1"));
        label_errorBar1->setGeometry(QRect(0, 18, 120, 9));
        label_errorBar1->setFont(font7);
        label_errorBar1->setStyleSheet(QString::fromUtf8("QLabel#label_errorBar1 {\n"
"	background-color: qlineargradient( x1:0 y1:0, x2:1 y2:0, stop:1 rgb(255, 85, 0), stop:0.2 rgb(223, 223, 223), stop:0 rgb(85, 255, 0) );\n"
"	color: white;\n"
"}"));
        label_errorPin2 = new QLabel(groupBox);
        label_errorPin2->setObjectName(QString::fromUtf8("label_errorPin2"));
        label_errorPin2->setGeometry(QRect(0, 47, 4, 22));
        label_errorPin2->setFont(font7);
        label_errorPin2->setStyleSheet(QString::fromUtf8("QLabel#label_errorPin2 {\n"
"	background-color: rgb(0,0,0);\n"
"	color: white;\n"
"	border-width: 1px;\n"
"    border-style: solid;\n"
"    border-color: white;\n"
"}"));
        label_errorBar2 = new QLabel(groupBox);
        label_errorBar2->setObjectName(QString::fromUtf8("label_errorBar2"));
        label_errorBar2->setGeometry(QRect(0, 55, 120, 9));
        label_errorBar2->setFont(font7);
        label_errorBar2->setStyleSheet(QString::fromUtf8("QLabel#label_errorBar2\n"
" {\n"
"	background-color: qlineargradient( x1:0 y1:0, x2:1 y2:0, stop:1 rgb(255, 85, 0), stop:0.2 rgb(223, 223, 223), stop:0 rgb(85, 255, 0) );\n"
"	color: white;\n"
"}"));
        label_errorPin3 = new QLabel(groupBox);
        label_errorPin3->setObjectName(QString::fromUtf8("label_errorPin3"));
        label_errorPin3->setGeometry(QRect(0, 84, 4, 22));
        label_errorPin3->setFont(font7);
        label_errorPin3->setStyleSheet(QString::fromUtf8("QLabel#label_errorPin3 {\n"
"	background-color: rgb(0,0,0);\n"
"	color: white;\n"
"	border-width: 1px;\n"
"    border-style: solid;\n"
"    border-color: white;\n"
"}"));
        label_errorBar3 = new QLabel(groupBox);
        label_errorBar3->setObjectName(QString::fromUtf8("label_errorBar3"));
        label_errorBar3->setGeometry(QRect(0, 92, 120, 9));
        label_errorBar3->setFont(font7);
        label_errorBar3->setStyleSheet(QString::fromUtf8("QLabel#label_errorBar3\n"
" {\n"
"	background-color: qlineargradient( x1:0 y1:0, x2:1 y2:0, stop:1 rgb(255, 85, 0), stop:0.2 rgb(223, 223, 223), stop:0 rgb(85, 255, 0) );\n"
"	color: white;\n"
"}"));
        label_errorBar4 = new QLabel(groupBox);
        label_errorBar4->setObjectName(QString::fromUtf8("label_errorBar4"));
        label_errorBar4->setGeometry(QRect(0, 129, 120, 9));
        label_errorBar4->setFont(font7);
        label_errorBar4->setStyleSheet(QString::fromUtf8("QLabel#label_errorBar4\n"
" {\n"
"	background-color: qlineargradient( x1:0 y1:0, x2:1 y2:0, stop:1 rgb(255, 85, 0), stop:0.2 rgb(223, 223, 223), stop:0 rgb(85, 255, 0) );\n"
"	color: white;\n"
"}"));
        label_errorPin4 = new QLabel(groupBox);
        label_errorPin4->setObjectName(QString::fromUtf8("label_errorPin4"));
        label_errorPin4->setGeometry(QRect(0, 121, 4, 22));
        label_errorPin4->setFont(font7);
        label_errorPin4->setStyleSheet(QString::fromUtf8("QLabel#label_errorPin4 {\n"
"	background-color: rgb(0,0,0);\n"
"	color: white;\n"
"	border-width: 1px;\n"
"    border-style: solid;\n"
"    border-color: white;\n"
"}"));
        label_errorBar3->raise();
        label_errorBar2->raise();
        label_errorBar1->raise();
        label_errorPin1->raise();
        label_errorPin2->raise();
        label_errorPin3->raise();
        label_errorBar4->raise();
        label_errorPin4->raise();
        pushButton_distortionHelp = new QPushButton(distortion_area);
        pushButton_distortionHelp->setObjectName(QString::fromUtf8("pushButton_distortionHelp"));
        pushButton_distortionHelp->setGeometry(QRect(187, 200, 71, 30));
        pushButton_distortionHelp->setFont(font2);
        pushButton_distortionHelp->setStyleSheet(QString::fromUtf8("QPushButton#pushButton_distortionHelp {\n"
"	color: white;\n"
"    background-color:  rgb(104, 104, 104);\n"
"    border-style: none;\n"
"    border-width: 2px;\n"
"    border-color: rgb(104, 104, 104);\n"
"}\n"
"QPushButton#pushButton_distortionHelp:pressed {\n"
"    background-color: rgb(50, 50, 50);\n"
"    border-style: inset;\n"
"}"));
        label_errVal3 = new QLabel(distortion_area);
        label_errVal3->setObjectName(QString::fromUtf8("label_errVal3"));
        label_errVal3->setGeometry(QRect(224, 118, 171, 20));
        label_errVal3->setFont(font6);
        label_errVal3->setStyleSheet(QString::fromUtf8("QLabel {color:white;}"));
        label_errVal3->setWordWrap(true);
        label_errVal1 = new QLabel(distortion_area);
        label_errVal1->setObjectName(QString::fromUtf8("label_errVal1"));
        label_errVal1->setGeometry(QRect(224, 44, 40, 20));
        label_errVal1->setFont(font6);
        label_errVal1->setStyleSheet(QString::fromUtf8("QLabel {color:white;}"));
        label_errVal1->setWordWrap(true);
        label_errVal4 = new QLabel(distortion_area);
        label_errVal4->setObjectName(QString::fromUtf8("label_errVal4"));
        label_errVal4->setGeometry(QRect(224, 155, 191, 20));
        label_errVal4->setFont(font6);
        label_errVal4->setStyleSheet(QString::fromUtf8("QLabel {color:white;}"));
        label_errVal4->setWordWrap(true);
        label_errVal2 = new QLabel(distortion_area);
        label_errVal2->setObjectName(QString::fromUtf8("label_errVal2"));
        label_errVal2->setGeometry(QRect(224, 81, 181, 20));
        label_errVal2->setFont(font6);
        label_errVal2->setStyleSheet(QString::fromUtf8("QLabel {color:white;}"));
        label_errVal2->setWordWrap(true);
        groupBox_overlay = new QGroupBox(centralWidget);
        groupBox_overlay->setObjectName(QString::fromUtf8("groupBox_overlay"));
        groupBox_overlay->setGeometry(QRect(1170, 70, 320, 691));
        groupBox_LineOverlay = new QGroupBox(groupBox_overlay);
        groupBox_LineOverlay->setObjectName(QString::fromUtf8("groupBox_LineOverlay"));
        groupBox_LineOverlay->setEnabled(true);
        groupBox_LineOverlay->setGeometry(QRect(10, 50, 300, 661));
        groupBox_LineOverlay->setFont(font);
        groupBox_LineOverlay->setStyleSheet(QString::fromUtf8("QGroupBox{\n"
"border:none;\n"
"} "));
        spinBox_lineChartWidth = new QSpinBox(groupBox_LineOverlay);
        spinBox_lineChartWidth->setObjectName(QString::fromUtf8("spinBox_lineChartWidth"));
        spinBox_lineChartWidth->setGeometry(QRect(83, 39, 55, 22));
        spinBox_lineChartWidth->setFont(font);
        spinBox_lineChartWidth->setMaximum(1000);
        spinBox_lineChartWidth->setSingleStep(5);
        spinBox_lineChartWidth->setValue(400);
        spinBox_lineChartHeight = new QSpinBox(groupBox_LineOverlay);
        spinBox_lineChartHeight->setObjectName(QString::fromUtf8("spinBox_lineChartHeight"));
        spinBox_lineChartHeight->setGeometry(QRect(212, 39, 55, 22));
        spinBox_lineChartHeight->setFont(font);
        spinBox_lineChartHeight->setMaximum(1000);
        spinBox_lineChartHeight->setSingleStep(5);
        spinBox_lineChartHeight->setValue(200);
        label_chartW = new QLabel(groupBox_LineOverlay);
        label_chartW->setObjectName(QString::fromUtf8("label_chartW"));
        label_chartW->setGeometry(QRect(35, 38, 47, 24));
        label_chartW->setFont(font);
        label_chartW->setStyleSheet(QString::fromUtf8("QLabel {color:white;}"));
        label_chartH = new QLabel(groupBox_LineOverlay);
        label_chartH->setObjectName(QString::fromUtf8("label_chartH"));
        label_chartH->setGeometry(QRect(161, 38, 47, 24));
        label_chartH->setFont(font);
        label_chartH->setStyleSheet(QString::fromUtf8("QLabel {color:white;}"));
        horizontalSlider_xTicks = new QSlider(groupBox_LineOverlay);
        horizontalSlider_xTicks->setObjectName(QString::fromUtf8("horizontalSlider_xTicks"));
        horizontalSlider_xTicks->setGeometry(QRect(90, 335, 200, 20));
        horizontalSlider_xTicks->setFont(font);
        horizontalSlider_xTicks->setStyleSheet(QString::fromUtf8("QSlider::groove:horizontal {\n"
"	background-color: rgb(240,240,240);\n"
"	height:3px;\n"
"}\n"
"\n"
"QSlider::handle:horizontal {\n"
"	background-color: rgb(240,240,240);\n"
"    border: 1px solid #5c5c5c;\n"
"    width: 6px;\n"
"    height: 8px;\n"
"	margin: -8px 0;\n"
"    border-radius: 4px;\n"
"}"));
        horizontalSlider_xTicks->setMinimum(1);
        horizontalSlider_xTicks->setMaximum(15);
        horizontalSlider_xTicks->setPageStep(1);
        horizontalSlider_xTicks->setValue(1);
        horizontalSlider_xTicks->setOrientation(Qt::Horizontal);
        label_xTicks = new QLabel(groupBox_LineOverlay);
        label_xTicks->setObjectName(QString::fromUtf8("label_xTicks"));
        label_xTicks->setGeometry(QRect(18, 336, 65, 20));
        label_xTicks->setFont(font);
        label_xTicks->setStyleSheet(QString::fromUtf8("QLabel {color:white;}"));
        label_xTicks->setWordWrap(true);
        pushButton_lineColor = new QPushButton(groupBox_LineOverlay);
        pushButton_lineColor->setObjectName(QString::fromUtf8("pushButton_lineColor"));
        pushButton_lineColor->setGeometry(QRect(122, 112, 111, 24));
        pushButton_lineColor->setFont(font);
        pushButton_lineColor->setStyleSheet(QString::fromUtf8("QPushButton#pushButton_lineColor {\n"
"	color: white;\n"
"    background-color:  rgb(104, 104, 104);\n"
"    border-style: none;\n"
"    border-width: 2px;\n"
"    border-color: rgb(104, 104, 104);\n"
"}\n"
"QPushButton#pushButton_lineColor:pressed {\n"
"    background-color: rgb(50, 50, 50);\n"
"    border-style: inset;\n"
"}"));
        pushButton_lineGlowColor = new QPushButton(groupBox_LineOverlay);
        pushButton_lineGlowColor->setObjectName(QString::fromUtf8("pushButton_lineGlowColor"));
        pushButton_lineGlowColor->setGeometry(QRect(122, 183, 111, 24));
        pushButton_lineGlowColor->setFont(font);
        pushButton_lineGlowColor->setStyleSheet(QString::fromUtf8("QPushButton#pushButton_lineGlowColor {\n"
"	color: white;\n"
"    background-color:  rgb(104, 104, 104);\n"
"    border-style: none;\n"
"    border-width: 2px;\n"
"    border-color: rgb(104, 104, 104);\n"
"}\n"
"QPushButton#pushButton_lineGlowColor:pressed {\n"
"    background-color: rgb(50, 50, 50);\n"
"    border-style: inset;\n"
"}"));
        pushButton_lineXColor = new QPushButton(groupBox_LineOverlay);
        pushButton_lineXColor->setObjectName(QString::fromUtf8("pushButton_lineXColor"));
        pushButton_lineXColor->setGeometry(QRect(122, 301, 111, 24));
        pushButton_lineXColor->setFont(font);
        pushButton_lineXColor->setStyleSheet(QString::fromUtf8("QPushButton#pushButton_lineXColor {\n"
"	color: white;\n"
"    background-color:  rgb(104, 104, 104);\n"
"    border-style: none;\n"
"    border-width: 2px;\n"
"    border-color: rgb(104, 104, 104);\n"
"}\n"
"QPushButton#pushButton_lineXColor:pressed {\n"
"    background-color: rgb(50, 50, 50);\n"
"    border-style: inset;\n"
"}"));
        pushButton_lineYColor = new QPushButton(groupBox_LineOverlay);
        pushButton_lineYColor->setObjectName(QString::fromUtf8("pushButton_lineYColor"));
        pushButton_lineYColor->setGeometry(QRect(122, 457, 111, 24));
        pushButton_lineYColor->setFont(font);
        pushButton_lineYColor->setStyleSheet(QString::fromUtf8("QPushButton#pushButton_lineYColor {\n"
"	color: white;\n"
"    background-color:  rgb(104, 104, 104);\n"
"    border-style: none;\n"
"    border-width: 2px;\n"
"    border-color: rgb(104, 104, 104);\n"
"}\n"
"QPushButton#pushButton_lineYColor:pressed {\n"
"    background-color: rgb(50, 50, 50);\n"
"    border-style: inset;\n"
"}"));
        label_lineThick = new QLabel(groupBox_LineOverlay);
        label_lineThick->setObjectName(QString::fromUtf8("label_lineThick"));
        label_lineThick->setGeometry(QRect(18, 135, 62, 41));
        label_lineThick->setFont(font);
        label_lineThick->setStyleSheet(QString::fromUtf8("QLabel {color:white;}"));
        label_lineThick->setWordWrap(true);
        horizontalSlider_lineThick = new QSlider(groupBox_LineOverlay);
        horizontalSlider_lineThick->setObjectName(QString::fromUtf8("horizontalSlider_lineThick"));
        horizontalSlider_lineThick->setGeometry(QRect(90, 146, 200, 20));
        horizontalSlider_lineThick->setFont(font);
        horizontalSlider_lineThick->setStyleSheet(QString::fromUtf8("QSlider::groove:horizontal {\n"
"	background-color: rgb(240,240,240);\n"
"	height:3px;\n"
"}\n"
"\n"
"QSlider::handle:horizontal {\n"
"	background-color: rgb(240,240,240);\n"
"    border: 1px solid #5c5c5c;\n"
"    width: 6px;\n"
"    height: 8px;\n"
"	margin: -8px 0;\n"
"    border-radius: 4px;\n"
"}"));
        horizontalSlider_lineThick->setMinimum(1);
        horizontalSlider_lineThick->setMaximum(50);
        horizontalSlider_lineThick->setValue(1);
        horizontalSlider_lineThick->setOrientation(Qt::Horizontal);
        horizontalSlider_lineGlowThick = new QSlider(groupBox_LineOverlay);
        horizontalSlider_lineGlowThick->setObjectName(QString::fromUtf8("horizontalSlider_lineGlowThick"));
        horizontalSlider_lineGlowThick->setGeometry(QRect(90, 220, 200, 20));
        horizontalSlider_lineGlowThick->setFont(font);
        horizontalSlider_lineGlowThick->setStyleSheet(QString::fromUtf8("QSlider::groove:horizontal {\n"
"	background-color: rgb(240,240,240);\n"
"	height:3px;\n"
"}\n"
"\n"
"QSlider::handle:horizontal {\n"
"	background-color: rgb(240,240,240);\n"
"    border: 1px solid #5c5c5c;\n"
"    width: 6px;\n"
"    height: 8px;\n"
"	margin: -8px 0;\n"
"    border-radius: 4px;\n"
"}"));
        horizontalSlider_lineGlowThick->setMinimum(1);
        horizontalSlider_lineGlowThick->setMaximum(50);
        horizontalSlider_lineGlowThick->setValue(1);
        horizontalSlider_lineGlowThick->setOrientation(Qt::Horizontal);
        label_glowThick = new QLabel(groupBox_LineOverlay);
        label_glowThick->setObjectName(QString::fromUtf8("label_glowThick"));
        label_glowThick->setGeometry(QRect(18, 208, 68, 41));
        label_glowThick->setFont(font);
        label_glowThick->setStyleSheet(QString::fromUtf8("QLabel {color:white;}"));
        label_glowThick->setWordWrap(true);
        label_yTicks = new QLabel(groupBox_LineOverlay);
        label_yTicks->setObjectName(QString::fromUtf8("label_yTicks"));
        label_yTicks->setGeometry(QRect(18, 495, 65, 20));
        label_yTicks->setFont(font);
        label_yTicks->setStyleSheet(QString::fromUtf8("QLabel {color:white;}"));
        label_yTicks->setWordWrap(true);
        horizontalSlider_yTicks = new QSlider(groupBox_LineOverlay);
        horizontalSlider_yTicks->setObjectName(QString::fromUtf8("horizontalSlider_yTicks"));
        horizontalSlider_yTicks->setGeometry(QRect(90, 495, 200, 20));
        horizontalSlider_yTicks->setFont(font);
        horizontalSlider_yTicks->setStyleSheet(QString::fromUtf8("QSlider::groove:horizontal {\n"
"	background-color: rgb(240,240,240);\n"
"	height:3px;\n"
"}\n"
"\n"
"QSlider::handle:horizontal {\n"
"	background-color: rgb(240,240,240);\n"
"    border: 1px solid #5c5c5c;\n"
"    width: 6px;\n"
"    height: 8px;\n"
"	margin: -8px 0;\n"
"    border-radius: 4px;\n"
"}"));
        horizontalSlider_yTicks->setMinimum(1);
        horizontalSlider_yTicks->setMaximum(50);
        horizontalSlider_yTicks->setValue(1);
        horizontalSlider_yTicks->setOrientation(Qt::Horizontal);
        label_xMax = new QLabel(groupBox_LineOverlay);
        label_xMax->setObjectName(QString::fromUtf8("label_xMax"));
        label_xMax->setGeometry(QRect(189, 375, 47, 20));
        label_xMax->setFont(font);
        label_xMax->setStyleSheet(QString::fromUtf8("QLabel {color:white;}"));
        spinBox_xMax = new QSpinBox(groupBox_LineOverlay);
        spinBox_xMax->setObjectName(QString::fromUtf8("spinBox_xMax"));
        spinBox_xMax->setGeometry(QRect(240, 375, 51, 22));
        spinBox_xMax->setFont(font);
        spinBox_xMax->setMinimum(1);
        spinBox_xMax->setMaximum(1000);
        spinBox_xMax->setSingleStep(1);
        spinBox_xMax->setValue(1);
        spinBox_xMin = new QSpinBox(groupBox_LineOverlay);
        spinBox_xMin->setObjectName(QString::fromUtf8("spinBox_xMin"));
        spinBox_xMin->setGeometry(QRect(127, 375, 51, 22));
        spinBox_xMin->setFont(font);
        spinBox_xMin->setMaximum(1000);
        spinBox_xMin->setSingleStep(1);
        spinBox_xMin->setValue(0);
        label_xMin = new QLabel(groupBox_LineOverlay);
        label_xMin->setObjectName(QString::fromUtf8("label_xMin"));
        label_xMin->setGeometry(QRect(83, 375, 47, 20));
        label_xMin->setFont(font);
        label_xMin->setStyleSheet(QString::fromUtf8("QLabel {color:white;}"));
        doubleSpinBox_yMin = new QDoubleSpinBox(groupBox_LineOverlay);
        doubleSpinBox_yMin->setObjectName(QString::fromUtf8("doubleSpinBox_yMin"));
        doubleSpinBox_yMin->setGeometry(QRect(127, 535, 51, 22));
        doubleSpinBox_yMin->setFont(font);
        label_yMin = new QLabel(groupBox_LineOverlay);
        label_yMin->setObjectName(QString::fromUtf8("label_yMin"));
        label_yMin->setGeometry(QRect(83, 536, 47, 20));
        label_yMin->setFont(font);
        label_yMin->setStyleSheet(QString::fromUtf8("QLabel {color:white;}"));
        label_yMax = new QLabel(groupBox_LineOverlay);
        label_yMax->setObjectName(QString::fromUtf8("label_yMax"));
        label_yMax->setGeometry(QRect(189, 536, 47, 20));
        label_yMax->setFont(font);
        label_yMax->setStyleSheet(QString::fromUtf8("QLabel {color:white;}"));
        doubleSpinBox_yMax = new QDoubleSpinBox(groupBox_LineOverlay);
        doubleSpinBox_yMax->setObjectName(QString::fromUtf8("doubleSpinBox_yMax"));
        doubleSpinBox_yMax->setGeometry(QRect(240, 535, 51, 22));
        doubleSpinBox_yMax->setFont(font);
        doubleSpinBox_yMax->setMaximum(100000.000000000000000);
        line_5 = new QFrame(groupBox_LineOverlay);
        line_5->setObjectName(QString::fromUtf8("line_5"));
        line_5->setGeometry(QRect(1, 70, 298, 16));
        line_5->setFont(font);
        line_5->setFrameShape(QFrame::HLine);
        line_5->setFrameShadow(QFrame::Sunken);
        line_6 = new QFrame(groupBox_LineOverlay);
        line_6->setObjectName(QString::fromUtf8("line_6"));
        line_6->setGeometry(QRect(1, 254, 298, 16));
        line_6->setFont(font);
        line_6->setFrameShape(QFrame::HLine);
        line_6->setFrameShadow(QFrame::Sunken);
        line_7 = new QFrame(groupBox_LineOverlay);
        line_7->setObjectName(QString::fromUtf8("line_7"));
        line_7->setGeometry(QRect(1, 412, 298, 16));
        line_7->setFont(font);
        line_7->setFrameShape(QFrame::HLine);
        line_7->setFrameShadow(QFrame::Sunken);
        label_lineColor = new QLabel(groupBox_LineOverlay);
        label_lineColor->setObjectName(QString::fromUtf8("label_lineColor"));
        label_lineColor->setGeometry(QRect(122, 136, 111, 6));
        label_lineColor->setFont(font);
        label_lineGlowColor = new QLabel(groupBox_LineOverlay);
        label_lineGlowColor->setObjectName(QString::fromUtf8("label_lineGlowColor"));
        label_lineGlowColor->setGeometry(QRect(122, 207, 111, 6));
        label_lineGlowColor->setFont(font);
        label_lineXColor = new QLabel(groupBox_LineOverlay);
        label_lineXColor->setObjectName(QString::fromUtf8("label_lineXColor"));
        label_lineXColor->setGeometry(QRect(122, 325, 111, 6));
        label_lineXColor->setFont(font);
        label_lineYColor = new QLabel(groupBox_LineOverlay);
        label_lineYColor->setObjectName(QString::fromUtf8("label_lineYColor"));
        label_lineYColor->setGeometry(QRect(122, 481, 111, 6));
        label_lineYColor->setFont(font);
        label_lineSpline = new QLabel(groupBox_LineOverlay);
        label_lineSpline->setObjectName(QString::fromUtf8("label_lineSpline"));
        label_lineSpline->setGeometry(QRect(184, 597, 60, 32));
        label_lineSpline->setFont(font);
        label_lineSpline->setStyleSheet(QString::fromUtf8("QLabel { background-color : white; }"));
        label_lineLine = new QLabel(groupBox_LineOverlay);
        label_lineLine->setObjectName(QString::fromUtf8("label_lineLine"));
        label_lineLine->setGeometry(QRect(115, 597, 72, 32));
        label_lineLine->setFont(font);
        label_lineLine->setStyleSheet(QString::fromUtf8("QLabel { background-color : white; }"));
        pushButton_lineLine = new QPushButton(groupBox_LineOverlay);
        pushButton_lineLine->setObjectName(QString::fromUtf8("pushButton_lineLine"));
        pushButton_lineLine->setGeometry(QRect(119, 601, 65, 24));
        pushButton_lineLine->setFont(font);
        pushButton_lineLine->setMouseTracking(false);
        pushButton_lineLine->setAutoFillBackground(false);
        pushButton_lineLine->setStyleSheet(QString::fromUtf8("QPushButton#pushButton_lineLine {\n"
"	color: white;\n"
"    background-color:  rgb(104, 104, 104);\n"
"    border-style: none;\n"
"    border-width: 2px;\n"
"    border-color: rgb(104, 104, 104);\n"
"}\n"
"QPushButton#pushButton_lineLine:pressed {\n"
"    background-color: rgb(50, 50, 50);\n"
"    border-style: inset;\n"
"}"));
        pushButton_lineLine->setAutoDefault(false);
        pushButton_lineLine->setFlat(true);
        pushButton_lineSpline = new QPushButton(groupBox_LineOverlay);
        pushButton_lineSpline->setObjectName(QString::fromUtf8("pushButton_lineSpline"));
        pushButton_lineSpline->setGeometry(QRect(188, 601, 52, 24));
        pushButton_lineSpline->setFont(font);
        pushButton_lineSpline->setAutoFillBackground(false);
        pushButton_lineSpline->setStyleSheet(QString::fromUtf8("QPushButton#pushButton_lineSpline {\n"
"	color: white;\n"
"    background-color:  rgb(104, 104, 104);\n"
"    border-style: none;\n"
"    border-width: 2px;\n"
"    border-color: rgb(104, 104, 104);\n"
"}\n"
"QPushButton#pushButton_lineSpline:pressed {\n"
"    background-color: rgb(50, 50, 50);\n"
"    border-style: inset;\n"
"}"));
        pushButton_lineSpline->setFlat(true);
        line_16 = new QFrame(groupBox_LineOverlay);
        line_16->setObjectName(QString::fromUtf8("line_16"));
        line_16->setGeometry(QRect(1, 567, 298, 16));
        line_16->setFont(font);
        line_16->setFrameShape(QFrame::HLine);
        line_16->setFrameShadow(QFrame::Sunken);
        label_13 = new QLabel(groupBox_LineOverlay);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        label_13->setGeometry(QRect(13, 88, 80, 20));
        label_13->setFont(font1);
        label_13->setStyleSheet(QString::fromUtf8("QLabel {color:white;}"));
        label_13->setWordWrap(true);
        label_16 = new QLabel(groupBox_LineOverlay);
        label_16->setObjectName(QString::fromUtf8("label_16"));
        label_16->setGeometry(QRect(13, 269, 122, 20));
        label_16->setFont(font1);
        label_16->setStyleSheet(QString::fromUtf8("QLabel {color:white;}"));
        label_16->setWordWrap(true);
        label_17 = new QLabel(groupBox_LineOverlay);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        label_17->setGeometry(QRect(13, 425, 122, 20));
        label_17->setFont(font1);
        label_17->setStyleSheet(QString::fromUtf8("QLabel {color:white;}"));
        label_17->setWordWrap(true);
        label_18 = new QLabel(groupBox_LineOverlay);
        label_18->setObjectName(QString::fromUtf8("label_18"));
        label_18->setGeometry(QRect(13, 581, 151, 20));
        label_18->setFont(font1);
        label_18->setStyleSheet(QString::fromUtf8("QLabel {color:white;}"));
        label_18->setWordWrap(true);
        label_19 = new QLabel(groupBox_LineOverlay);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        label_19->setGeometry(QRect(13, 7, 111, 20));
        label_19->setFont(font1);
        label_19->setStyleSheet(QString::fromUtf8("QLabel {color:white;}"));
        label_19->setWordWrap(true);
        groupBox_BarOverlay = new QGroupBox(groupBox_overlay);
        groupBox_BarOverlay->setObjectName(QString::fromUtf8("groupBox_BarOverlay"));
        groupBox_BarOverlay->setGeometry(QRect(10, 50, 300, 620));
        groupBox_BarOverlay->setFont(font);
        groupBox_BarOverlay->setStyleSheet(QString::fromUtf8("QGroupBox{\n"
"border:none;\n"
"} "));
        groupBox_BarOverlay->setFlat(false);
        groupBox_BarOverlay->setCheckable(false);
        spinBox_barChartWidth = new QSpinBox(groupBox_BarOverlay);
        spinBox_barChartWidth->setObjectName(QString::fromUtf8("spinBox_barChartWidth"));
        spinBox_barChartWidth->setGeometry(QRect(83, 39, 51, 22));
        spinBox_barChartWidth->setFont(font);
        spinBox_barChartWidth->setMaximum(1000);
        spinBox_barChartWidth->setSingleStep(5);
        spinBox_barChartWidth->setValue(400);
        label_barXColor = new QLabel(groupBox_BarOverlay);
        label_barXColor->setObjectName(QString::fromUtf8("label_barXColor"));
        label_barXColor->setGeometry(QRect(122, 325, 111, 6));
        label_barXColor->setFont(font);
        label_14 = new QLabel(groupBox_BarOverlay);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        label_14->setGeometry(QRect(22, 135, 61, 41));
        label_14->setFont(font);
        label_14->setStyleSheet(QString::fromUtf8("QLabel {color:white;}"));
        label_14->setWordWrap(true);
        line_11 = new QFrame(groupBox_BarOverlay);
        line_11->setObjectName(QString::fromUtf8("line_11"));
        line_11->setGeometry(QRect(1, 70, 298, 16));
        line_11->setFont(font);
        line_11->setFrameShape(QFrame::HLine);
        line_11->setFrameShadow(QFrame::Sunken);
        label_barGlowColor = new QLabel(groupBox_BarOverlay);
        label_barGlowColor->setObjectName(QString::fromUtf8("label_barGlowColor"));
        label_barGlowColor->setGeometry(QRect(122, 207, 111, 6));
        label_barGlowColor->setFont(font);
        spinBox_barChartHeight = new QSpinBox(groupBox_BarOverlay);
        spinBox_barChartHeight->setObjectName(QString::fromUtf8("spinBox_barChartHeight"));
        spinBox_barChartHeight->setGeometry(QRect(212, 39, 51, 22));
        spinBox_barChartHeight->setFont(font);
        spinBox_barChartHeight->setMaximum(1000);
        spinBox_barChartHeight->setSingleStep(5);
        spinBox_barChartHeight->setValue(200);
        pushButton_barColor = new QPushButton(groupBox_BarOverlay);
        pushButton_barColor->setObjectName(QString::fromUtf8("pushButton_barColor"));
        pushButton_barColor->setGeometry(QRect(122, 112, 111, 24));
        pushButton_barColor->setFont(font);
        pushButton_barColor->setStyleSheet(QString::fromUtf8("QPushButton#pushButton_barColor {\n"
"	color: white;\n"
"    background-color:  rgb(104, 104, 104);\n"
"    border-style: none;\n"
"    border-width: 2px;\n"
"    border-color: rgb(104, 104, 104);\n"
"}\n"
"QPushButton#pushButton_barColor:pressed {\n"
"    background-color: rgb(50, 50, 50);\n"
"    border-style: inset;\n"
"}"));
        pushButton_barGlowColor = new QPushButton(groupBox_BarOverlay);
        pushButton_barGlowColor->setObjectName(QString::fromUtf8("pushButton_barGlowColor"));
        pushButton_barGlowColor->setGeometry(QRect(122, 183, 111, 24));
        pushButton_barGlowColor->setFont(font);
        pushButton_barGlowColor->setStyleSheet(QString::fromUtf8("QPushButton#pushButton_barGlowColor {\n"
"	color: white;\n"
"    background-color:  rgb(104, 104, 104);\n"
"    border-style: none;\n"
"    border-width: 2px;\n"
"    border-color: rgb(104, 104, 104);\n"
"}\n"
"QPushButton#pushButton_barGlowColor:pressed {\n"
"    background-color: rgb(50, 50, 50);\n"
"    border-style: inset;\n"
"}"));
        pushButton_barXColor = new QPushButton(groupBox_BarOverlay);
        pushButton_barXColor->setObjectName(QString::fromUtf8("pushButton_barXColor"));
        pushButton_barXColor->setGeometry(QRect(122, 301, 111, 24));
        pushButton_barXColor->setFont(font);
        pushButton_barXColor->setStyleSheet(QString::fromUtf8("QPushButton#pushButton_barXColor {\n"
"	color: white;\n"
"    background-color:  rgb(104, 104, 104);\n"
"    border-style: none;\n"
"    border-width: 2px;\n"
"    border-color: rgb(104, 104, 104);\n"
"}\n"
"QPushButton#pushButton_barXColor:pressed {\n"
"    background-color: rgb(50, 50, 50);\n"
"    border-style: inset;\n"
"}"));
        label_barW = new QLabel(groupBox_BarOverlay);
        label_barW->setObjectName(QString::fromUtf8("label_barW"));
        label_barW->setGeometry(QRect(35, 38, 47, 24));
        label_barW->setFont(font);
        label_barW->setStyleSheet(QString::fromUtf8("QLabel {color:white;}"));
        line_12 = new QFrame(groupBox_BarOverlay);
        line_12->setObjectName(QString::fromUtf8("line_12"));
        line_12->setGeometry(QRect(1, 254, 298, 16));
        line_12->setFont(font);
        line_12->setFrameShape(QFrame::HLine);
        line_12->setFrameShadow(QFrame::Sunken);
        pushButton_barYColor = new QPushButton(groupBox_BarOverlay);
        pushButton_barYColor->setObjectName(QString::fromUtf8("pushButton_barYColor"));
        pushButton_barYColor->setGeometry(QRect(122, 457, 111, 24));
        pushButton_barYColor->setFont(font);
        pushButton_barYColor->setStyleSheet(QString::fromUtf8("QPushButton#pushButton_barYColor {\n"
"	color: white;\n"
"    background-color:  rgb(104, 104, 104);\n"
"    border-style: none;\n"
"    border-width: 2px;\n"
"    border-color: rgb(104, 104, 104);\n"
"}\n"
"QPushButton#pushButton_barYColor:pressed {\n"
"    background-color: rgb(50, 50, 50);\n"
"    border-style: inset;\n"
"}"));
        label_barH = new QLabel(groupBox_BarOverlay);
        label_barH->setObjectName(QString::fromUtf8("label_barH"));
        label_barH->setGeometry(QRect(161, 38, 47, 24));
        label_barH->setFont(font);
        label_barH->setStyleSheet(QString::fromUtf8("QLabel {color:white;}"));
        label_barColor = new QLabel(groupBox_BarOverlay);
        label_barColor->setObjectName(QString::fromUtf8("label_barColor"));
        label_barColor->setGeometry(QRect(122, 136, 111, 6));
        label_barColor->setFont(font);
        label_15 = new QLabel(groupBox_BarOverlay);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        label_15->setGeometry(QRect(20, 208, 81, 41));
        label_15->setFont(font);
        label_15->setStyleSheet(QString::fromUtf8("QLabel {color:white;}"));
        label_15->setWordWrap(true);
        label_barYColor = new QLabel(groupBox_BarOverlay);
        label_barYColor->setObjectName(QString::fromUtf8("label_barYColor"));
        label_barYColor->setGeometry(QRect(122, 481, 111, 6));
        label_barYColor->setFont(font);
        horizontalSlider_barWidth = new QSlider(groupBox_BarOverlay);
        horizontalSlider_barWidth->setObjectName(QString::fromUtf8("horizontalSlider_barWidth"));
        horizontalSlider_barWidth->setGeometry(QRect(90, 146, 200, 20));
        horizontalSlider_barWidth->setFont(font);
        horizontalSlider_barWidth->setStyleSheet(QString::fromUtf8("QSlider::groove:horizontal {\n"
"	background-color: rgb(240,240,240);\n"
"	height:3px;\n"
"}\n"
"\n"
"QSlider::handle:horizontal {\n"
"	background-color: rgb(240,240,240);\n"
"    border: 1px solid #5c5c5c;\n"
"    width: 6px;\n"
"    height: 8px;\n"
"	margin: -8px 0;\n"
"    border-radius: 4px;\n"
"}"));
        horizontalSlider_barWidth->setMinimum(1);
        horizontalSlider_barWidth->setMaximum(100);
        horizontalSlider_barWidth->setValue(1);
        horizontalSlider_barWidth->setOrientation(Qt::Horizontal);
        horizontalSlider_barGlowWidth = new QSlider(groupBox_BarOverlay);
        horizontalSlider_barGlowWidth->setObjectName(QString::fromUtf8("horizontalSlider_barGlowWidth"));
        horizontalSlider_barGlowWidth->setGeometry(QRect(90, 220, 200, 20));
        horizontalSlider_barGlowWidth->setFont(font);
        horizontalSlider_barGlowWidth->setStyleSheet(QString::fromUtf8("QSlider::groove:horizontal {\n"
"	background-color: rgb(240,240,240);\n"
"	height:3px;\n"
"}\n"
"\n"
"QSlider::handle:horizontal {\n"
"	background-color: rgb(240,240,240);\n"
"    border: 1px solid #5c5c5c;\n"
"    width: 6px;\n"
"    height: 8px;\n"
"	margin: -8px 0;\n"
"    border-radius: 4px;\n"
"}"));
        horizontalSlider_barGlowWidth->setMinimum(1);
        horizontalSlider_barGlowWidth->setMaximum(15);
        horizontalSlider_barGlowWidth->setValue(1);
        horizontalSlider_barGlowWidth->setSliderPosition(1);
        horizontalSlider_barGlowWidth->setOrientation(Qt::Horizontal);
        doubleSpinBox_yMaxBarOverlay = new QDoubleSpinBox(groupBox_BarOverlay);
        doubleSpinBox_yMaxBarOverlay->setObjectName(QString::fromUtf8("doubleSpinBox_yMaxBarOverlay"));
        doubleSpinBox_yMaxBarOverlay->setGeometry(QRect(240, 535, 51, 24));
        doubleSpinBox_yMaxBarOverlay->setFont(font);
        doubleSpinBox_yMaxBarOverlay->setMaximum(100000.000000000000000);
        label_yMin_2 = new QLabel(groupBox_BarOverlay);
        label_yMin_2->setObjectName(QString::fromUtf8("label_yMin_2"));
        label_yMin_2->setGeometry(QRect(83, 536, 47, 20));
        label_yMin_2->setFont(font);
        label_yMin_2->setStyleSheet(QString::fromUtf8("QLabel {color:white;}"));
        label_yTicks_2 = new QLabel(groupBox_BarOverlay);
        label_yTicks_2->setObjectName(QString::fromUtf8("label_yTicks_2"));
        label_yTicks_2->setGeometry(QRect(18, 495, 71, 20));
        label_yTicks_2->setFont(font);
        label_yTicks_2->setStyleSheet(QString::fromUtf8("QLabel {color:white;}"));
        label_yTicks_2->setWordWrap(true);
        label_yMax_2 = new QLabel(groupBox_BarOverlay);
        label_yMax_2->setObjectName(QString::fromUtf8("label_yMax_2"));
        label_yMax_2->setGeometry(QRect(189, 536, 47, 20));
        label_yMax_2->setFont(font);
        label_yMax_2->setStyleSheet(QString::fromUtf8("QLabel {color:white;}"));
        doubleSpinBox_yMinBarOverlay = new QDoubleSpinBox(groupBox_BarOverlay);
        doubleSpinBox_yMinBarOverlay->setObjectName(QString::fromUtf8("doubleSpinBox_yMinBarOverlay"));
        doubleSpinBox_yMinBarOverlay->setGeometry(QRect(127, 535, 51, 24));
        doubleSpinBox_yMinBarOverlay->setFont(font);
        horizontalSlider_yTicks_2 = new QSlider(groupBox_BarOverlay);
        horizontalSlider_yTicks_2->setObjectName(QString::fromUtf8("horizontalSlider_yTicks_2"));
        horizontalSlider_yTicks_2->setGeometry(QRect(90, 495, 200, 20));
        horizontalSlider_yTicks_2->setFont(font);
        horizontalSlider_yTicks_2->setStyleSheet(QString::fromUtf8("QSlider::groove:horizontal {\n"
"	background-color: rgb(240,240,240);\n"
"	height:3px;\n"
"}\n"
"\n"
"QSlider::handle:horizontal {\n"
"	background-color: rgb(240,240,240);\n"
"    border: 1px solid #5c5c5c;\n"
"    width: 6px;\n"
"    height: 8px;\n"
"	margin: -8px 0;\n"
"    border-radius: 4px;\n"
"}"));
        horizontalSlider_yTicks_2->setMinimum(1);
        horizontalSlider_yTicks_2->setMaximum(50);
        horizontalSlider_yTicks_2->setValue(1);
        horizontalSlider_yTicks_2->setOrientation(Qt::Horizontal);
        label_xTicks_2 = new QLabel(groupBox_BarOverlay);
        label_xTicks_2->setObjectName(QString::fromUtf8("label_xTicks_2"));
        label_xTicks_2->setGeometry(QRect(18, 336, 71, 20));
        label_xTicks_2->setFont(font);
        label_xTicks_2->setStyleSheet(QString::fromUtf8("QLabel {color:white;}"));
        label_xTicks_2->setWordWrap(true);
        label_xMin_2 = new QLabel(groupBox_BarOverlay);
        label_xMin_2->setObjectName(QString::fromUtf8("label_xMin_2"));
        label_xMin_2->setGeometry(QRect(83, 375, 47, 20));
        label_xMin_2->setFont(font);
        label_xMin_2->setStyleSheet(QString::fromUtf8("QLabel {color:white;}"));
        spinBox_xMax_2 = new QSpinBox(groupBox_BarOverlay);
        spinBox_xMax_2->setObjectName(QString::fromUtf8("spinBox_xMax_2"));
        spinBox_xMax_2->setGeometry(QRect(240, 375, 51, 24));
        spinBox_xMax_2->setFont(font);
        spinBox_xMax_2->setMinimum(1);
        spinBox_xMax_2->setMaximum(1000);
        spinBox_xMax_2->setSingleStep(1);
        spinBox_xMax_2->setValue(1);
        horizontalSlider_xTicks_2 = new QSlider(groupBox_BarOverlay);
        horizontalSlider_xTicks_2->setObjectName(QString::fromUtf8("horizontalSlider_xTicks_2"));
        horizontalSlider_xTicks_2->setGeometry(QRect(90, 335, 200, 20));
        horizontalSlider_xTicks_2->setFont(font);
        horizontalSlider_xTicks_2->setStyleSheet(QString::fromUtf8("QSlider::groove:horizontal {\n"
"	background-color: rgb(240,240,240);\n"
"	height:3px;\n"
"}\n"
"\n"
"QSlider::handle:horizontal {\n"
"	background-color: rgb(240,240,240);\n"
"    border: 1px solid #5c5c5c;\n"
"    width: 6px;\n"
"    height: 8px;\n"
"	margin: -8px 0;\n"
"    border-radius: 4px;\n"
"}"));
        horizontalSlider_xTicks_2->setMinimum(1);
        horizontalSlider_xTicks_2->setMaximum(15);
        horizontalSlider_xTicks_2->setPageStep(1);
        horizontalSlider_xTicks_2->setValue(1);
        horizontalSlider_xTicks_2->setOrientation(Qt::Horizontal);
        spinBox_xMin_2 = new QSpinBox(groupBox_BarOverlay);
        spinBox_xMin_2->setObjectName(QString::fromUtf8("spinBox_xMin_2"));
        spinBox_xMin_2->setGeometry(QRect(127, 375, 51, 24));
        spinBox_xMin_2->setFont(font);
        spinBox_xMin_2->setMaximum(1000);
        spinBox_xMin_2->setSingleStep(1);
        spinBox_xMin_2->setValue(0);
        label_xMax_2 = new QLabel(groupBox_BarOverlay);
        label_xMax_2->setObjectName(QString::fromUtf8("label_xMax_2"));
        label_xMax_2->setGeometry(QRect(189, 375, 47, 20));
        label_xMax_2->setFont(font);
        label_xMax_2->setStyleSheet(QString::fromUtf8("QLabel {color:white;}"));
        line_15 = new QFrame(groupBox_BarOverlay);
        line_15->setObjectName(QString::fromUtf8("line_15"));
        line_15->setGeometry(QRect(1, 412, 298, 16));
        line_15->setFont(font);
        line_15->setFrameShape(QFrame::HLine);
        line_15->setFrameShadow(QFrame::Sunken);
        label_20 = new QLabel(groupBox_BarOverlay);
        label_20->setObjectName(QString::fromUtf8("label_20"));
        label_20->setGeometry(QRect(13, 7, 111, 20));
        label_20->setFont(font1);
        label_20->setStyleSheet(QString::fromUtf8("QLabel {color:white;}"));
        label_20->setWordWrap(true);
        label_21 = new QLabel(groupBox_BarOverlay);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        label_21->setGeometry(QRect(13, 88, 80, 20));
        label_21->setFont(font1);
        label_21->setStyleSheet(QString::fromUtf8("QLabel {color:white;}"));
        label_21->setWordWrap(true);
        label_22 = new QLabel(groupBox_BarOverlay);
        label_22->setObjectName(QString::fromUtf8("label_22"));
        label_22->setGeometry(QRect(13, 269, 122, 20));
        label_22->setFont(font1);
        label_22->setStyleSheet(QString::fromUtf8("QLabel {color:white;}"));
        label_22->setWordWrap(true);
        label_23 = new QLabel(groupBox_BarOverlay);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        label_23->setGeometry(QRect(13, 425, 122, 20));
        label_23->setFont(font1);
        label_23->setStyleSheet(QString::fromUtf8("QLabel {color:white;}"));
        label_23->setWordWrap(true);
        label_xMax_2->raise();
        spinBox_barChartWidth->raise();
        label_barXColor->raise();
        label_14->raise();
        line_11->raise();
        label_barGlowColor->raise();
        spinBox_barChartHeight->raise();
        pushButton_barColor->raise();
        pushButton_barGlowColor->raise();
        pushButton_barXColor->raise();
        label_barW->raise();
        line_12->raise();
        pushButton_barYColor->raise();
        label_barH->raise();
        label_barColor->raise();
        label_15->raise();
        label_barYColor->raise();
        horizontalSlider_barWidth->raise();
        horizontalSlider_barGlowWidth->raise();
        doubleSpinBox_yMaxBarOverlay->raise();
        label_yMin_2->raise();
        label_yTicks_2->raise();
        label_yMax_2->raise();
        doubleSpinBox_yMinBarOverlay->raise();
        horizontalSlider_yTicks_2->raise();
        label_xTicks_2->raise();
        label_xMin_2->raise();
        spinBox_xMax_2->raise();
        horizontalSlider_xTicks_2->raise();
        spinBox_xMin_2->raise();
        line_15->raise();
        label_20->raise();
        label_21->raise();
        label_22->raise();
        label_23->raise();
        pushButton_barOverlay = new QPushButton(groupBox_overlay);
        pushButton_barOverlay->setObjectName(QString::fromUtf8("pushButton_barOverlay"));
        pushButton_barOverlay->setGeometry(QRect(164, 10, 50, 24));
        pushButton_barOverlay->setFont(font6);
        pushButton_barOverlay->setAutoFillBackground(false);
        pushButton_barOverlay->setStyleSheet(QString::fromUtf8("QPushButton#pushButton_barOverlay {\n"
"	color: white;\n"
"    background-color:  rgb(104, 104, 104);\n"
"    border-style: none;\n"
"    border-width: 2px;\n"
"    border-color: rgb(104, 104, 104);\n"
"}\n"
"QPushButton#pushButton_barOverlay:pressed {\n"
"    background-color: rgb(50, 50, 50);\n"
"    border-style: inset;\n"
"}"));
        pushButton_barOverlay->setFlat(true);
        label_barOverlay = new QLabel(groupBox_overlay);
        label_barOverlay->setObjectName(QString::fromUtf8("label_barOverlay"));
        label_barOverlay->setGeometry(QRect(161, 7, 56, 30));
        label_barOverlay->setStyleSheet(QString::fromUtf8("QLabel { background-color : white; }"));
        pushButton_lineOverlay = new QPushButton(groupBox_overlay);
        pushButton_lineOverlay->setObjectName(QString::fromUtf8("pushButton_lineOverlay"));
        pushButton_lineOverlay->setGeometry(QRect(110, 10, 50, 24));
        pushButton_lineOverlay->setFont(font6);
        pushButton_lineOverlay->setAutoFillBackground(false);
        pushButton_lineOverlay->setStyleSheet(QString::fromUtf8("QPushButton#pushButton_lineOverlay {\n"
"	color: white;\n"
"    background-color:  rgb(104, 104, 104);\n"
"    border-style: none;\n"
"    border-width: 2px;\n"
"    border-color: rgb(104, 104, 104);\n"
"}\n"
"QPushButton#pushButton_lineOverlay:pressed {\n"
"    background-color: rgb(50, 50, 50);\n"
"    border-style: inset;\n"
"}"));
        pushButton_lineOverlay->setFlat(true);
        label_lineOverlay = new QLabel(groupBox_overlay);
        label_lineOverlay->setObjectName(QString::fromUtf8("label_lineOverlay"));
        label_lineOverlay->setGeometry(QRect(107, 7, 56, 30));
        label_lineOverlay->setStyleSheet(QString::fromUtf8("QLabel { background-color : white; }"));
        label_lineOverlay->raise();
        label_barOverlay->raise();
        groupBox_LineOverlay->raise();
        groupBox_BarOverlay->raise();
        pushButton_barOverlay->raise();
        pushButton_lineOverlay->raise();
        label_FillStyle = new QLabel(centralWidget);
        label_FillStyle->setObjectName(QString::fromUtf8("label_FillStyle"));
        label_FillStyle->setGeometry(QRect(1175, 42, 68, 28));
        label_FillStyle->setFont(font);
        label_FillStyle->setStyleSheet(QString::fromUtf8("QLabel { background-color : white; }"));
        pushButton_OverlayStyle = new QPushButton(centralWidget);
        pushButton_OverlayStyle->setObjectName(QString::fromUtf8("pushButton_OverlayStyle"));
        pushButton_OverlayStyle->setGeometry(QRect(1247, 46, 71, 24));
        QFont font9;
        font9.setFamily(QString::fromUtf8("Verdana"));
        font9.setPointSize(11);
        font9.setBold(true);
        font9.setWeight(75);
        pushButton_OverlayStyle->setFont(font9);
        pushButton_OverlayStyle->setMouseTracking(false);
        pushButton_OverlayStyle->setAutoFillBackground(false);
        pushButton_OverlayStyle->setStyleSheet(QString::fromUtf8("QPushButton#pushButton_OverlayStyle {\n"
"	color: white;\n"
"    background-color:  rgb(104, 104, 104);\n"
"    border-style: none;\n"
"    border-width: 2px;\n"
"    border-color: rgb(104, 104, 104);\n"
"}\n"
"QPushButton#pushButton_OverlayStyle:pressed {\n"
"    background-color: rgb(50, 50, 50);\n"
"    border-style: inset;\n"
"}"));
        pushButton_OverlayStyle->setAutoDefault(false);
        pushButton_OverlayStyle->setFlat(true);
        label_OverlayStyle = new QLabel(centralWidget);
        label_OverlayStyle->setObjectName(QString::fromUtf8("label_OverlayStyle"));
        label_OverlayStyle->setGeometry(QRect(1243, 42, 79, 28));
        label_OverlayStyle->setFont(font);
        label_OverlayStyle->setStyleSheet(QString::fromUtf8("QLabel { background-color : white; }"));
        pushButton_FillStyle = new QPushButton(centralWidget);
        pushButton_FillStyle->setObjectName(QString::fromUtf8("pushButton_FillStyle"));
        pushButton_FillStyle->setGeometry(QRect(1179, 46, 60, 24));
        QFont font10;
        font10.setFamily(QString::fromUtf8("Verdana"));
        font10.setPointSize(12);
        font10.setBold(true);
        font10.setWeight(75);
        pushButton_FillStyle->setFont(font10);
        pushButton_FillStyle->setAutoFillBackground(false);
        pushButton_FillStyle->setStyleSheet(QString::fromUtf8("QPushButton#pushButton_FillStyle {\n"
"	color: white;\n"
"    background-color:  rgb(104, 104, 104);\n"
"    border-style: none;\n"
"    border-width: 2px;\n"
"    border-color: rgb(104, 104, 104);\n"
"}\n"
"QPushButton#pushButton_FillStyle:pressed {\n"
"    background-color: rgb(50, 50, 50);\n"
"    border-style: inset;\n"
"}"));
        pushButton_FillStyle->setFlat(true);
        MemeVizClass->setCentralWidget(centralWidget);
        label_OverlayStyle->raise();
        loadButtonData->raise();
        graphicsView_chart->raise();
        label_imgFilter->raise();
        comboBoxPiFiltImg_2->raise();
        pushButton_clear->raise();
        fontComboBox_fontFamily->raise();
        spinBox_fontSize->raise();
        pushButton_fontBold->raise();
        pushButton_fontItalics->raise();
        pushButton_fontColor->raise();
        graphicsView_viz_meme->raise();
        line->raise();
        label->raise();
        line_3->raise();
        pushButton_fontFill->raise();
        line_4->raise();
        groupBox_images->raise();
        label_header->raise();
        label_fontColor->raise();
        label_fontFill->raise();
        groupBox_fill->raise();
        label_foot->raise();
        label_left->raise();
        label_right->raise();
        label_head->raise();
        pushButton_close->raise();
        tableWidget->raise();
        horizontalSlider_textFillOpac->raise();
        label_textFillOpac->raise();
        line_2->raise();
        line_9->raise();
        pushButton_save->raise();
        distortion_area->raise();
        groupBox_overlay->raise();
        label_FillStyle->raise();
        pushButton_OverlayStyle->raise();
        pushButton_FillStyle->raise();

        retranslateUi(MemeVizClass);

        pushButton_lineGlowColor->setDefault(false);


        QMetaObject::connectSlotsByName(MemeVizClass);
    } // setupUi

    void retranslateUi(QMainWindow *MemeVizClass)
    {
        MemeVizClass->setWindowTitle(QApplication::translate("MemeVizClass", "MemeViz", nullptr));
        actionExit->setText(QApplication::translate("MemeVizClass", "Exit", nullptr));
        actionAbout->setText(QApplication::translate("MemeVizClass", "About", nullptr));
        loadButtonData->setText(QApplication::translate("MemeVizClass", "Import Data", nullptr));
        label_imgFilter->setText(QApplication::translate("MemeVizClass", "Background Filter:", nullptr));
        pushButton_clear->setText(QApplication::translate("MemeVizClass", "Clear", nullptr));
        pushButton_fontBold->setText(QApplication::translate("MemeVizClass", "BOLD", nullptr));
        pushButton_fontItalics->setText(QApplication::translate("MemeVizClass", "ITALICS", nullptr));
        pushButton_fontColor->setText(QApplication::translate("MemeVizClass", "COLOR", nullptr));
        label->setText(QApplication::translate("MemeVizClass", "Font:", nullptr));
        pushButton_fontFill->setText(QApplication::translate("MemeVizClass", "FILL", nullptr));
        groupBox_images->setTitle(QApplication::translate("MemeVizClass", "Suggested Images", nullptr));
        loadButtonImg->setText(QApplication::translate("MemeVizClass", "Import\n"
"Image", nullptr));
        label_header->setText(QApplication::translate("MemeVizClass", "  Infomage Designer", nullptr));
        label_fontColor->setText(QString());
        label_fontFill->setText(QString());
        pushButton_close->setText(QApplication::translate("MemeVizClass", "X", nullptr));
        groupBox_fill->setTitle(QString());
        groupBox_BarFill->setTitle(QString());
        pushButton_barMask->setText(QApplication::translate("MemeVizClass", "Generate Mask", nullptr));
        pushButton_barMaskNext->setText(QApplication::translate("MemeVizClass", ">", nullptr));
        pushButton_barMaskPrev->setText(QApplication::translate("MemeVizClass", "<", nullptr));
        label_barMask->setText(QApplication::translate("MemeVizClass", "                     Mask", nullptr));
        label_barCurrLabel->setText(QString());
        pushButton_barMaskColor->setText(QApplication::translate("MemeVizClass", "Fill Color", nullptr));
        label_barMaskColor->setText(QString());
        label_fillBar->setText(QApplication::translate("MemeVizClass", "Labels Y Offset:", nullptr));
        label_yMin_3->setText(QApplication::translate("MemeVizClass", "Min:", nullptr));
        label_yMax_3->setText(QApplication::translate("MemeVizClass", "Max:", nullptr));
        pushButton_barArea->setText(QApplication::translate("MemeVizClass", "Area", nullptr));
        label_barLength->setText(QString());
        label_barArea->setText(QString());
        pushButton_barLength->setText(QApplication::translate("MemeVizClass", "Length", nullptr));
        label_26->setText(QApplication::translate("MemeVizClass", "Division Type:", nullptr));
        label_fillHori_2->setText(QString());
        pushButton_fillBarHori->setText(QApplication::translate("MemeVizClass", "Horizontal", nullptr));
        label_fillVerti_2->setText(QString());
        pushButton_fillBarVerti->setText(QApplication::translate("MemeVizClass", "Vertical", nullptr));
        label_27->setText(QApplication::translate("MemeVizClass", "Fill Direction:", nullptr));
        label_28->setText(QApplication::translate("MemeVizClass", "Axis Limits:", nullptr));
        groupBox_PieFill->setTitle(QString());
        labelimg->setText(QApplication::translate("MemeVizClass", "                    Mask", nullptr));
        pushButton_createMask->setText(QApplication::translate("MemeVizClass", "Create Mask", nullptr));
        pushButton_pieAr->setText(QApplication::translate("MemeVizClass", "Area", nullptr));
        pushButton_pieRad->setText(QApplication::translate("MemeVizClass", "Angle", nullptr));
        label_pieRad->setText(QString());
        label_pieAr->setText(QString());
        label_9->setText(QApplication::translate("MemeVizClass", "0", nullptr));
        label_10->setText(QApplication::translate("MemeVizClass", "360", nullptr));
        label_11->setText(QApplication::translate("MemeVizClass", "Rotation:", nullptr));
        label_pieLabelRad->setText(QApplication::translate("MemeVizClass", "Label Offset:", nullptr));
        pushButton_pieColor_1->setText(QApplication::translate("MemeVizClass", "COLOR", nullptr));
        pushButton_pieColor_2->setText(QApplication::translate("MemeVizClass", "COLOR", nullptr));
        pushButton_pieColor_3->setText(QApplication::translate("MemeVizClass", "COLOR", nullptr));
        pushButton_pieColor_5->setText(QApplication::translate("MemeVizClass", "COLOR", nullptr));
        pushButton_pieColor_4->setText(QApplication::translate("MemeVizClass", "COLOR", nullptr));
        pushButton_pieColor_6->setText(QApplication::translate("MemeVizClass", "COLOR", nullptr));
        pushButton_pieColor_11->setText(QApplication::translate("MemeVizClass", "COLOR", nullptr));
        pushButton_pieColor_8->setText(QApplication::translate("MemeVizClass", "COLOR", nullptr));
        pushButton_pieColor_10->setText(QApplication::translate("MemeVizClass", "COLOR", nullptr));
        pushButton_pieColor_12->setText(QApplication::translate("MemeVizClass", "COLOR", nullptr));
        pushButton_pieColor_7->setText(QApplication::translate("MemeVizClass", "COLOR", nullptr));
        pushButton_pieColor_9->setText(QApplication::translate("MemeVizClass", "COLOR", nullptr));
        label_12->setText(QApplication::translate("MemeVizClass", "Element Colors:", nullptr));
        label_pieLabelRad_2->setText(QApplication::translate("MemeVizClass", "X-Offset:", nullptr));
        label_pieLabelRad_3->setText(QApplication::translate("MemeVizClass", "Y-Offset:", nullptr));
        pushButton_pieColor_13->setText(QApplication::translate("MemeVizClass", "COLOR", nullptr));
        pushButton_pieColor_14->setText(QApplication::translate("MemeVizClass", "COLOR", nullptr));
        pushButton_pieColor_15->setText(QApplication::translate("MemeVizClass", "COLOR", nullptr));
        label_pieArc->setText(QString());
        pushButton_pieArc->setText(QApplication::translate("MemeVizClass", "Arc", nullptr));
        label_24->setText(QApplication::translate("MemeVizClass", "Division Direction:", nullptr));
        pushButton_fillHori->setText(QApplication::translate("MemeVizClass", "Horizontal", nullptr));
        pushButton_fillVerti->setText(QApplication::translate("MemeVizClass", "Vertical", nullptr));
        label_fillVerti->setText(QString());
        pushButton_fillRad->setText(QApplication::translate("MemeVizClass", "Radial", nullptr));
        label_fillRad->setText(QString());
        label_fillHori->setText(QString());
        label_25->setText(QApplication::translate("MemeVizClass", "Division Type:", nullptr));
        pushButton_barFill->setText(QApplication::translate("MemeVizClass", "Multiple", nullptr));
        label_barFill->setText(QString());
        label_pieFill->setText(QString());
        pushButton_pieFill->setText(QApplication::translate("MemeVizClass", "Single", nullptr));
        label_foot->setText(QString());
        label_left->setText(QString());
        label_right->setText(QString());
        label_head->setText(QString());
        label_textFillOpac->setText(QApplication::translate("MemeVizClass", "Fill Opacity:", nullptr));
        pushButton_save->setText(QApplication::translate("MemeVizClass", "SAVE", nullptr));
        distortion_area->setTitle(QApplication::translate("MemeVizClass", "Distortion Factor", nullptr));
        label_err1->setText(QApplication::translate("MemeVizClass", "Area:", nullptr));
        label_err2->setText(QApplication::translate("MemeVizClass", "Angle:", nullptr));
        label_err3->setText(QApplication::translate("MemeVizClass", "Arc Length:", nullptr));
        pushButton_optimizePie->setText(QApplication::translate("MemeVizClass", "Optimize", nullptr));
        label_err4->setText(QApplication::translate("MemeVizClass", "Avg:", nullptr));
        groupBox->setTitle(QString());
        label_errorPin1->setText(QString());
        label_errorBar1->setText(QString());
        label_errorPin2->setText(QString());
        label_errorBar2->setText(QString());
        label_errorPin3->setText(QString());
        label_errorBar3->setText(QString());
        label_errorBar4->setText(QString());
        label_errorPin4->setText(QString());
        pushButton_distortionHelp->setText(QApplication::translate("MemeVizClass", "Details", nullptr));
        label_errVal3->setText(QApplication::translate("MemeVizClass", "0", nullptr));
        label_errVal1->setText(QApplication::translate("MemeVizClass", "0", nullptr));
        label_errVal4->setText(QApplication::translate("MemeVizClass", "0", nullptr));
        label_errVal2->setText(QApplication::translate("MemeVizClass", "0", nullptr));
        groupBox_overlay->setTitle(QString());
        groupBox_LineOverlay->setTitle(QString());
        label_chartW->setText(QApplication::translate("MemeVizClass", "Width:", nullptr));
        label_chartH->setText(QApplication::translate("MemeVizClass", "Height:", nullptr));
        label_xTicks->setText(QApplication::translate("MemeVizClass", "Tick Size:", nullptr));
        pushButton_lineColor->setText(QApplication::translate("MemeVizClass", "Fill Color", nullptr));
        pushButton_lineGlowColor->setText(QApplication::translate("MemeVizClass", "Glow Color", nullptr));
        pushButton_lineXColor->setText(QApplication::translate("MemeVizClass", "X-Axis Color", nullptr));
        pushButton_lineYColor->setText(QApplication::translate("MemeVizClass", "Y-Axis Color", nullptr));
        label_lineThick->setText(QApplication::translate("MemeVizClass", "Line Size:", nullptr));
        label_glowThick->setText(QApplication::translate("MemeVizClass", "Glow Size:", nullptr));
        label_yTicks->setText(QApplication::translate("MemeVizClass", "Tick Size:", nullptr));
        label_xMax->setText(QApplication::translate("MemeVizClass", "X Max:", nullptr));
        label_xMin->setText(QApplication::translate("MemeVizClass", "X Min:", nullptr));
        label_yMin->setText(QApplication::translate("MemeVizClass", "Y Min:", nullptr));
        label_yMax->setText(QApplication::translate("MemeVizClass", "Y Max:", nullptr));
        label_lineColor->setText(QString());
        label_lineGlowColor->setText(QString());
        label_lineXColor->setText(QString());
        label_lineYColor->setText(QString());
        label_lineSpline->setText(QString());
        label_lineLine->setText(QString());
        pushButton_lineLine->setText(QApplication::translate("MemeVizClass", "Straight", nullptr));
        pushButton_lineSpline->setText(QApplication::translate("MemeVizClass", "Curved", nullptr));
        label_13->setText(QApplication::translate("MemeVizClass", "Line Style:", nullptr));
        label_16->setText(QApplication::translate("MemeVizClass", "X-Axis Settings:", nullptr));
        label_17->setText(QApplication::translate("MemeVizClass", "Y-Axis Settings:", nullptr));
        label_18->setText(QApplication::translate("MemeVizClass", "Line Type:", nullptr));
        label_19->setText(QApplication::translate("MemeVizClass", "Dimensions:", nullptr));
        groupBox_BarOverlay->setTitle(QString());
        label_barXColor->setText(QString());
        label_14->setText(QApplication::translate("MemeVizClass", "Bar Size:", nullptr));
        label_barGlowColor->setText(QString());
        pushButton_barColor->setText(QApplication::translate("MemeVizClass", "Fill Color", nullptr));
        pushButton_barGlowColor->setText(QApplication::translate("MemeVizClass", "Glow Color", nullptr));
        pushButton_barXColor->setText(QApplication::translate("MemeVizClass", "X-Axis Color", nullptr));
        label_barW->setText(QApplication::translate("MemeVizClass", "Width:", nullptr));
        pushButton_barYColor->setText(QApplication::translate("MemeVizClass", "Y-Axis Color", nullptr));
        label_barH->setText(QApplication::translate("MemeVizClass", "Height:", nullptr));
        label_barColor->setText(QString());
        label_15->setText(QApplication::translate("MemeVizClass", "Glow Size:", nullptr));
        label_barYColor->setText(QString());
        label_yMin_2->setText(QApplication::translate("MemeVizClass", "Y Min:", nullptr));
        label_yTicks_2->setText(QApplication::translate("MemeVizClass", "Tick Size:", nullptr));
        label_yMax_2->setText(QApplication::translate("MemeVizClass", "Y Max:", nullptr));
        label_xTicks_2->setText(QApplication::translate("MemeVizClass", "Tick Size:", nullptr));
        label_xMin_2->setText(QApplication::translate("MemeVizClass", "X Min:", nullptr));
        label_xMax_2->setText(QApplication::translate("MemeVizClass", "X Max:", nullptr));
        label_20->setText(QApplication::translate("MemeVizClass", "Dimensions:", nullptr));
        label_21->setText(QApplication::translate("MemeVizClass", "Bar Style:", nullptr));
        label_22->setText(QApplication::translate("MemeVizClass", "X-Axis Settings:", nullptr));
        label_23->setText(QApplication::translate("MemeVizClass", "Y-Axis Settings:", nullptr));
        pushButton_barOverlay->setText(QApplication::translate("MemeVizClass", "Bar", nullptr));
        label_barOverlay->setText(QString());
        pushButton_lineOverlay->setText(QApplication::translate("MemeVizClass", "Line", nullptr));
        label_lineOverlay->setText(QString());
        label_FillStyle->setText(QString());
        pushButton_OverlayStyle->setText(QApplication::translate("MemeVizClass", "Overlay", nullptr));
        label_OverlayStyle->setText(QString());
        pushButton_FillStyle->setText(QApplication::translate("MemeVizClass", "Fill", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MemeVizClass: public Ui_MemeVizClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MEMEVIZ_H
