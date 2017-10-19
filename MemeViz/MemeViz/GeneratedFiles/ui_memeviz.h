/********************************************************************************
** Form generated from reading UI file 'memeviz.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MEMEVIZ_H
#define UI_MEMEVIZ_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
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
    QPushButton *loadButtonImg;
    QGraphicsView *graphicsView_chart;
    QLabel *label_imgFilter;
    QComboBox *comboBoxPiFiltImg_2;
    QPushButton *pushButton_line;
    QPushButton *pushButton_clear;
    QPushButton *pushButton_bar;
    QPushButton *pushButton_pie;
    QFontComboBox *fontComboBox_fontFamily;
    QSpinBox *spinBox_fontSize;
    QPushButton *pushButton_fontBold;
    QPushButton *pushButton_fontItalics;
    QPushButton *pushButton_fontColor;
    QGraphicsView *graphicsView_viz_meme;
    QFrame *line;
    QLabel *label;
    QFrame *line_3;
    QLabel *label_pie;
    QLabel *label_line;
    QLabel *label_bar;
    QPushButton *pushButton_fontFill;
    QFrame *line_4;
    QGroupBox *groupBox_images;
    QListWidget *listWidget;
    QLabel *label_header;
    QLabel *label_fontColor;
    QLabel *label_fontFill;
    QPushButton *pushButton_close;
    QGroupBox *groupBox_pie;
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
    QPushButton *pushButton_pieColor_16;
    QPushButton *pushButton_pieColor_17;
    QPushButton *pushButton_pieColor_18;
    QPushButton *pushButton_pieColor_19;
    QPushButton *pushButton_pieColor_20;
    QGroupBox *groupBox_bar;
    QPushButton *pushButton_barFill;
    QLabel *label_barOverlay;
    QPushButton *pushButton_barOverlay;
    QLabel *label_barFill;
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
    QPushButton *pushButton_barPercentage;
    QLabel *label_barValue;
    QLabel *label_barPercentage;
    QPushButton *pushButton_barValue;
    QFrame *line_14;
    QGroupBox *groupBox_line;
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

    void setupUi(QMainWindow *MemeVizClass)
    {
        if (MemeVizClass->objectName().isEmpty())
            MemeVizClass->setObjectName(QStringLiteral("MemeVizClass"));
        MemeVizClass->setWindowModality(Qt::NonModal);
        MemeVizClass->resize(1285, 952);
        QIcon icon;
        icon.addFile(QStringLiteral("C:/Users/Darius/.designer/logo.png"), QSize(), QIcon::Normal, QIcon::Off);
        MemeVizClass->setWindowIcon(icon);
        MemeVizClass->setLayoutDirection(Qt::LeftToRight);
        MemeVizClass->setAutoFillBackground(false);
        MemeVizClass->setStyleSheet(QLatin1String("QMainWindow {\n"
"	background-color: rgb(45,45, 48);\n"
"}"));
        MemeVizClass->setToolButtonStyle(Qt::ToolButtonIconOnly);
        MemeVizClass->setDocumentMode(false);
        MemeVizClass->setTabShape(QTabWidget::Rounded);
        actionExit = new QAction(MemeVizClass);
        actionExit->setObjectName(QStringLiteral("actionExit"));
        actionAbout = new QAction(MemeVizClass);
        actionAbout->setObjectName(QStringLiteral("actionAbout"));
        centralWidget = new QWidget(MemeVizClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        centralWidget->setStyleSheet(QLatin1String("QWidget#centralWidget {\n"
"	background-color: rgb(45,45, 48);\n"
"}"));
        loadButtonData = new QPushButton(centralWidget);
        loadButtonData->setObjectName(QStringLiteral("loadButtonData"));
        loadButtonData->setGeometry(QRect(10, 750, 181, 31));
        loadButtonData->setStyleSheet(QLatin1String("QPushButton#loadButtonData {\n"
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
        loadButtonImg = new QPushButton(centralWidget);
        loadButtonImg->setObjectName(QStringLiteral("loadButtonImg"));
        loadButtonImg->setGeometry(QRect(1224, 749, 51, 196));
        loadButtonImg->setStyleSheet(QLatin1String("QPushButton#loadButtonImg {\n"
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
        graphicsView_chart = new QGraphicsView(centralWidget);
        graphicsView_chart->setObjectName(QStringLiteral("graphicsView_chart"));
        graphicsView_chart->setGeometry(QRect(200, 748, 291, 196));
        graphicsView_chart->setStyleSheet(QStringLiteral("QGraphicsView {background-color:rgb(204,204,204);}"));
        label_imgFilter = new QLabel(centralWidget);
        label_imgFilter->setObjectName(QStringLiteral("label_imgFilter"));
        label_imgFilter->setGeometry(QRect(722, 42, 121, 20));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        label_imgFilter->setFont(font);
        label_imgFilter->setStyleSheet(QStringLiteral("QLabel {color:white;}"));
        comboBoxPiFiltImg_2 = new QComboBox(centralWidget);
        comboBoxPiFiltImg_2->setObjectName(QStringLiteral("comboBoxPiFiltImg_2"));
        comboBoxPiFiltImg_2->setGeometry(QRect(852, 42, 181, 22));
        comboBoxPiFiltImg_2->setStyleSheet(QLatin1String("QComboBox#comboBoxPiFiltImg_2 {\n"
"	color: white;\n"
"    background-color:  rgb(104, 104, 104);\n"
"}\n"
""));
        comboBoxPiFiltImg_2->setFrame(true);
        pushButton_line = new QPushButton(centralWidget);
        pushButton_line->setObjectName(QStringLiteral("pushButton_line"));
        pushButton_line->setGeometry(QRect(1145, 51, 50, 20));
        pushButton_line->setAutoFillBackground(false);
        pushButton_line->setStyleSheet(QLatin1String("QPushButton#pushButton_line {\n"
"	color: white;\n"
"    background-color:  rgb(104, 104, 104);\n"
"    border-style: none;\n"
"    border-width: 2px;\n"
"    border-color: rgb(104, 104, 104);\n"
"}\n"
"QPushButton#pushButton_line:pressed {\n"
"    background-color: rgb(50, 50, 50);\n"
"    border-style: inset;\n"
"}"));
        pushButton_line->setFlat(true);
        pushButton_clear = new QPushButton(centralWidget);
        pushButton_clear->setObjectName(QStringLiteral("pushButton_clear"));
        pushButton_clear->setGeometry(QRect(1080, 700, 181, 23));
        pushButton_clear->setStyleSheet(QLatin1String("QPushButton#pushButton_clear {\n"
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
        pushButton_bar = new QPushButton(centralWidget);
        pushButton_bar->setObjectName(QStringLiteral("pushButton_bar"));
        pushButton_bar->setGeometry(QRect(1213, 51, 50, 20));
        pushButton_bar->setAutoFillBackground(false);
        pushButton_bar->setStyleSheet(QLatin1String("QPushButton#pushButton_bar {\n"
"	color: white;\n"
"    background-color:  rgb(104, 104, 104);\n"
"    border-style: none;\n"
"    border-width: 2px;\n"
"    border-color: rgb(104, 104, 104);\n"
"}\n"
"QPushButton#pushButton_bar:pressed {\n"
"    background-color: rgb(50, 50, 50);\n"
"    border-style: inset;\n"
"}"));
        pushButton_bar->setFlat(true);
        pushButton_pie = new QPushButton(centralWidget);
        pushButton_pie->setObjectName(QStringLiteral("pushButton_pie"));
        pushButton_pie->setGeometry(QRect(1076, 51, 50, 20));
        pushButton_pie->setMouseTracking(false);
        pushButton_pie->setAutoFillBackground(false);
        pushButton_pie->setStyleSheet(QLatin1String("QPushButton#pushButton_pie {\n"
"	color: white;\n"
"    background-color:  rgb(104, 104, 104);\n"
"    border-style: none;\n"
"    border-width: 2px;\n"
"    border-color: rgb(104, 104, 104);\n"
"}\n"
"QPushButton#pushButton_pie:pressed {\n"
"    background-color: rgb(50, 50, 50);\n"
"    border-style: inset;\n"
"}"));
        pushButton_pie->setAutoDefault(false);
        pushButton_pie->setFlat(true);
        fontComboBox_fontFamily = new QFontComboBox(centralWidget);
        fontComboBox_fontFamily->setObjectName(QStringLiteral("fontComboBox_fontFamily"));
        fontComboBox_fontFamily->setGeometry(QRect(109, 42, 121, 22));
        fontComboBox_fontFamily->setStyleSheet(QLatin1String("QFontComboBox#fontComboBox_fontFamily {\n"
"	color: white;\n"
"    background-color:  rgb(104, 104, 104);\n"
"}\n"
""));
        fontComboBox_fontFamily->setFrame(false);
        spinBox_fontSize = new QSpinBox(centralWidget);
        spinBox_fontSize->setObjectName(QStringLiteral("spinBox_fontSize"));
        spinBox_fontSize->setGeometry(QRect(243, 42, 42, 22));
        spinBox_fontSize->setAutoFillBackground(false);
        spinBox_fontSize->setStyleSheet(QLatin1String("QSpinBox#spinBox_fontSize {\n"
"	color: white;\n"
"    background-color:  rgb(104, 104, 104);\n"
"}\n"
""));
        spinBox_fontSize->setButtonSymbols(QAbstractSpinBox::UpDownArrows);
        spinBox_fontSize->setMinimum(1);
        spinBox_fontSize->setMaximum(80);
        spinBox_fontSize->setValue(8);
        pushButton_fontBold = new QPushButton(centralWidget);
        pushButton_fontBold->setObjectName(QStringLiteral("pushButton_fontBold"));
        pushButton_fontBold->setGeometry(QRect(293, 42, 51, 21));
        pushButton_fontBold->setStyleSheet(QLatin1String("QPushButton#pushButton_fontBold {\n"
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
        pushButton_fontItalics->setObjectName(QStringLiteral("pushButton_fontItalics"));
        pushButton_fontItalics->setGeometry(QRect(356, 42, 51, 21));
        pushButton_fontItalics->setStyleSheet(QLatin1String("QPushButton#pushButton_fontItalics {\n"
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
        pushButton_fontColor->setObjectName(QStringLiteral("pushButton_fontColor"));
        pushButton_fontColor->setGeometry(QRect(419, 42, 51, 21));
        pushButton_fontColor->setStyleSheet(QLatin1String("QPushButton#pushButton_fontColor {\n"
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
        graphicsView_viz_meme->setObjectName(QStringLiteral("graphicsView_viz_meme"));
        graphicsView_viz_meme->setGeometry(QRect(10, 72, 1041, 651));
        graphicsView_viz_meme->setAutoFillBackground(false);
        graphicsView_viz_meme->setStyleSheet(QStringLiteral("QGraphicsView {background-color:rgb(204,204,204);}"));
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
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(702, 37, 20, 31));
        line->setStyleSheet(QStringLiteral(""));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(69, 45, 47, 13));
        label->setFont(font);
        label->setStyleSheet(QStringLiteral("QLabel {color:white;}"));
        line_3 = new QFrame(centralWidget);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setGeometry(QRect(1039, 38, 20, 31));
        line_3->setAutoFillBackground(false);
        line_3->setStyleSheet(QStringLiteral(""));
        line_3->setFrameShadow(QFrame::Sunken);
        line_3->setLineWidth(1);
        line_3->setMidLineWidth(0);
        line_3->setFrameShape(QFrame::VLine);
        label_pie = new QLabel(centralWidget);
        label_pie->setObjectName(QStringLiteral("label_pie"));
        label_pie->setGeometry(QRect(1072, 47, 58, 28));
        label_pie->setStyleSheet(QStringLiteral("QLabel { background-color : white; }"));
        label_line = new QLabel(centralWidget);
        label_line->setObjectName(QStringLiteral("label_line"));
        label_line->setGeometry(QRect(1141, 47, 58, 28));
        label_line->setStyleSheet(QStringLiteral("QLabel { background-color : white; }"));
        label_bar = new QLabel(centralWidget);
        label_bar->setObjectName(QStringLiteral("label_bar"));
        label_bar->setGeometry(QRect(1209, 47, 58, 28));
        label_bar->setStyleSheet(QStringLiteral("QLabel { background-color : white; }"));
        pushButton_fontFill = new QPushButton(centralWidget);
        pushButton_fontFill->setObjectName(QStringLiteral("pushButton_fontFill"));
        pushButton_fontFill->setGeometry(QRect(482, 42, 51, 21));
        pushButton_fontFill->setStyleSheet(QLatin1String("QPushButton#pushButton_fontFill {\n"
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
        line_4->setObjectName(QStringLiteral("line_4"));
        line_4->setGeometry(QRect(7, 728, 1271, 16));
        line_4->setFrameShape(QFrame::HLine);
        line_4->setFrameShadow(QFrame::Sunken);
        groupBox_images = new QGroupBox(centralWidget);
        groupBox_images->setObjectName(QStringLiteral("groupBox_images"));
        groupBox_images->setGeometry(QRect(501, 743, 711, 201));
        QFont font1;
        font1.setPointSize(10);
        groupBox_images->setFont(font1);
        groupBox_images->setStyleSheet(QLatin1String("QGroupBox#groupBox_images {\n"
"	color: white;\n"
"}"));
        groupBox_images->setFlat(false);
        listWidget = new QListWidget(groupBox_images);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(10, 20, 691, 171));
        listWidget->setAutoFillBackground(true);
        listWidget->setStyleSheet(QLatin1String("QListWidget{\n"
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
        label_header = new QLabel(centralWidget);
        label_header->setObjectName(QStringLiteral("label_header"));
        label_header->setGeometry(QRect(3, 3, 1283, 28));
        QFont font2;
        font2.setFamily(QStringLiteral("MS Sans Serif"));
        font2.setPointSize(15);
        font2.setBold(true);
        font2.setItalic(true);
        font2.setWeight(75);
        label_header->setFont(font2);
        label_header->setStyleSheet(QLatin1String("QLabel#label_header {\n"
"	background-color: rgb(14,99, 156);\n"
"	color: white;\n"
"}"));
        label_fontColor = new QLabel(centralWidget);
        label_fontColor->setObjectName(QStringLiteral("label_fontColor"));
        label_fontColor->setGeometry(QRect(419, 63, 51, 6));
        label_fontFill = new QLabel(centralWidget);
        label_fontFill->setObjectName(QStringLiteral("label_fontFill"));
        label_fontFill->setGeometry(QRect(482, 63, 51, 6));
        pushButton_close = new QPushButton(centralWidget);
        pushButton_close->setObjectName(QStringLiteral("pushButton_close"));
        pushButton_close->setGeometry(QRect(1250, 0, 36, 31));
        QFont font3;
        font3.setFamily(QStringLiteral("Century Gothic"));
        font3.setPointSize(16);
        font3.setBold(true);
        font3.setWeight(75);
        pushButton_close->setFont(font3);
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
        groupBox_pie = new QGroupBox(centralWidget);
        groupBox_pie->setObjectName(QStringLiteral("groupBox_pie"));
        groupBox_pie->setGeometry(QRect(1063, 75, 211, 611));
        labelimg = new QLabel(groupBox_pie);
        labelimg->setObjectName(QStringLiteral("labelimg"));
        labelimg->setGeometry(QRect(10, 10, 191, 131));
        labelimg->setAutoFillBackground(false);
        labelimg->setStyleSheet(QStringLiteral("QLabel { background-color : rgb(204, 204, 204); color: white}"));
        labelimg->setFrameShape(QFrame::NoFrame);
        labelimg->setScaledContents(true);
        pushButton_createMask = new QPushButton(groupBox_pie);
        pushButton_createMask->setObjectName(QStringLiteral("pushButton_createMask"));
        pushButton_createMask->setGeometry(QRect(25, 150, 161, 23));
        pushButton_createMask->setStyleSheet(QLatin1String("QPushButton#pushButton_createMask {\n"
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
        pushButton_pieAr = new QPushButton(groupBox_pie);
        pushButton_pieAr->setObjectName(QStringLiteral("pushButton_pieAr"));
        pushButton_pieAr->setGeometry(QRect(108, 366, 50, 20));
        pushButton_pieAr->setAutoFillBackground(false);
        pushButton_pieAr->setStyleSheet(QLatin1String("QPushButton#pushButton_pieAr {\n"
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
        pushButton_pieRad = new QPushButton(groupBox_pie);
        pushButton_pieRad->setObjectName(QStringLiteral("pushButton_pieRad"));
        pushButton_pieRad->setGeometry(QRect(50, 366, 50, 20));
        pushButton_pieRad->setMouseTracking(false);
        pushButton_pieRad->setAutoFillBackground(false);
        pushButton_pieRad->setStyleSheet(QLatin1String("QPushButton#pushButton_pieRad {\n"
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
        label_pieRad = new QLabel(groupBox_pie);
        label_pieRad->setObjectName(QStringLiteral("label_pieRad"));
        label_pieRad->setGeometry(QRect(46, 362, 58, 28));
        label_pieRad->setStyleSheet(QStringLiteral("QLabel { background-color : white; }"));
        label_pieAr = new QLabel(groupBox_pie);
        label_pieAr->setObjectName(QStringLiteral("label_pieAr"));
        label_pieAr->setGeometry(QRect(104, 362, 58, 28));
        label_pieAr->setStyleSheet(QStringLiteral("QLabel { background-color : white; }"));
        horizontalSlider_pieAng = new QSlider(groupBox_pie);
        horizontalSlider_pieAng->setObjectName(QStringLiteral("horizontalSlider_pieAng"));
        horizontalSlider_pieAng->setGeometry(QRect(30, 224, 141, 19));
        horizontalSlider_pieAng->setStyleSheet(QLatin1String("QSlider::groove:horizontal {\n"
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
        label_9 = new QLabel(groupBox_pie);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(17, 223, 20, 20));
        label_9->setStyleSheet(QStringLiteral("QLabel {color:white;}"));
        label_9->setWordWrap(true);
        label_10 = new QLabel(groupBox_pie);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(176, 223, 21, 20));
        label_10->setStyleSheet(QStringLiteral("QLabel {color:white;}"));
        label_10->setWordWrap(true);
        label_11 = new QLabel(groupBox_pie);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(16, 200, 61, 20));
        QFont font4;
        font4.setPointSize(9);
        label_11->setFont(font4);
        label_11->setStyleSheet(QStringLiteral("QLabel {color:white;}"));
        label_11->setWordWrap(true);
        label_pieLabelRad = new QLabel(groupBox_pie);
        label_pieLabelRad->setObjectName(QStringLiteral("label_pieLabelRad"));
        label_pieLabelRad->setGeometry(QRect(43, 320, 71, 16));
        label_pieLabelRad->setStyleSheet(QStringLiteral("QLabel {color:white;}"));
        spinBox_pieLabelRad = new QSpinBox(groupBox_pie);
        spinBox_pieLabelRad->setObjectName(QStringLiteral("spinBox_pieLabelRad"));
        spinBox_pieLabelRad->setGeometry(QRect(113, 317, 51, 22));
        spinBox_pieLabelRad->setMaximum(1000);
        spinBox_pieLabelRad->setSingleStep(1);
        spinBox_pieLabelRad->setValue(25);
        comboBoxBrewerNames = new QComboBox(groupBox_pie);
        comboBoxBrewerNames->setObjectName(QStringLiteral("comboBoxBrewerNames"));
        comboBoxBrewerNames->setGeometry(QRect(48, 445, 131, 22));
        comboBoxBrewerNames->setStyleSheet(QLatin1String("QComboBox#comboBoxBrewerNames {\n"
"	color: white;\n"
"    background-color:  rgb(104, 104, 104);\n"
"}\n"
""));
        pushButton_pieColor_1 = new QPushButton(groupBox_pie);
        pushButton_pieColor_1->setObjectName(QStringLiteral("pushButton_pieColor_1"));
        pushButton_pieColor_1->setGeometry(QRect(25, 481, 30, 20));
        pushButton_pieColor_1->setStyleSheet(QLatin1String("QPushButton {\n"
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
        pushButton_pieColor_2 = new QPushButton(groupBox_pie);
        pushButton_pieColor_2->setObjectName(QStringLiteral("pushButton_pieColor_2"));
        pushButton_pieColor_2->setGeometry(QRect(60, 481, 30, 20));
        pushButton_pieColor_2->setStyleSheet(QLatin1String("QPushButton {\n"
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
        pushButton_pieColor_3 = new QPushButton(groupBox_pie);
        pushButton_pieColor_3->setObjectName(QStringLiteral("pushButton_pieColor_3"));
        pushButton_pieColor_3->setGeometry(QRect(95, 481, 30, 20));
        pushButton_pieColor_3->setStyleSheet(QLatin1String("QPushButton {\n"
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
        pushButton_pieColor_5 = new QPushButton(groupBox_pie);
        pushButton_pieColor_5->setObjectName(QStringLiteral("pushButton_pieColor_5"));
        pushButton_pieColor_5->setGeometry(QRect(165, 481, 30, 20));
        pushButton_pieColor_5->setStyleSheet(QLatin1String("QPushButton {\n"
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
        pushButton_pieColor_4 = new QPushButton(groupBox_pie);
        pushButton_pieColor_4->setObjectName(QStringLiteral("pushButton_pieColor_4"));
        pushButton_pieColor_4->setGeometry(QRect(130, 481, 30, 20));
        pushButton_pieColor_4->setStyleSheet(QLatin1String("QPushButton {\n"
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
        pushButton_pieColor_6 = new QPushButton(groupBox_pie);
        pushButton_pieColor_6->setObjectName(QStringLiteral("pushButton_pieColor_6"));
        pushButton_pieColor_6->setGeometry(QRect(25, 506, 30, 20));
        pushButton_pieColor_6->setStyleSheet(QLatin1String("QPushButton {\n"
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
        pushButton_pieColor_11 = new QPushButton(groupBox_pie);
        pushButton_pieColor_11->setObjectName(QStringLiteral("pushButton_pieColor_11"));
        pushButton_pieColor_11->setGeometry(QRect(25, 531, 30, 20));
        pushButton_pieColor_11->setStyleSheet(QLatin1String("QPushButton {\n"
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
        pushButton_pieColor_8 = new QPushButton(groupBox_pie);
        pushButton_pieColor_8->setObjectName(QStringLiteral("pushButton_pieColor_8"));
        pushButton_pieColor_8->setGeometry(QRect(95, 506, 30, 20));
        pushButton_pieColor_8->setStyleSheet(QLatin1String("QPushButton {\n"
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
        pushButton_pieColor_10 = new QPushButton(groupBox_pie);
        pushButton_pieColor_10->setObjectName(QStringLiteral("pushButton_pieColor_10"));
        pushButton_pieColor_10->setGeometry(QRect(165, 506, 30, 20));
        pushButton_pieColor_10->setStyleSheet(QLatin1String("QPushButton {\n"
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
        pushButton_pieColor_12 = new QPushButton(groupBox_pie);
        pushButton_pieColor_12->setObjectName(QStringLiteral("pushButton_pieColor_12"));
        pushButton_pieColor_12->setGeometry(QRect(60, 531, 30, 20));
        pushButton_pieColor_12->setStyleSheet(QLatin1String("QPushButton {\n"
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
        pushButton_pieColor_7 = new QPushButton(groupBox_pie);
        pushButton_pieColor_7->setObjectName(QStringLiteral("pushButton_pieColor_7"));
        pushButton_pieColor_7->setGeometry(QRect(60, 506, 30, 20));
        pushButton_pieColor_7->setStyleSheet(QLatin1String("QPushButton {\n"
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
        pushButton_pieColor_9 = new QPushButton(groupBox_pie);
        pushButton_pieColor_9->setObjectName(QStringLiteral("pushButton_pieColor_9"));
        pushButton_pieColor_9->setGeometry(QRect(130, 506, 30, 20));
        pushButton_pieColor_9->setStyleSheet(QLatin1String("QPushButton {\n"
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
        line_8 = new QFrame(groupBox_pie);
        line_8->setObjectName(QStringLiteral("line_8"));
        line_8->setGeometry(QRect(10, 400, 191, 16));
        line_8->setFrameShape(QFrame::HLine);
        line_8->setFrameShadow(QFrame::Sunken);
        label_12 = new QLabel(groupBox_pie);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(12, 410, 111, 20));
        label_12->setFont(font4);
        label_12->setStyleSheet(QStringLiteral("QLabel {color:white;}"));
        label_12->setWordWrap(true);
        line_10 = new QFrame(groupBox_pie);
        line_10->setObjectName(QStringLiteral("line_10"));
        line_10->setGeometry(QRect(10, 178, 191, 16));
        line_10->setFrameShape(QFrame::HLine);
        line_10->setFrameShadow(QFrame::Sunken);
        label_pieLabelRad_2 = new QLabel(groupBox_pie);
        label_pieLabelRad_2->setObjectName(QStringLiteral("label_pieLabelRad_2"));
        label_pieLabelRad_2->setGeometry(QRect(10, 268, 31, 31));
        label_pieLabelRad_2->setStyleSheet(QStringLiteral("QLabel {color:white;}"));
        spinBox_pieOriginOffX = new QSpinBox(groupBox_pie);
        spinBox_pieOriginOffX->setObjectName(QStringLiteral("spinBox_pieOriginOffX"));
        spinBox_pieOriginOffX->setGeometry(QRect(49, 274, 51, 22));
        spinBox_pieOriginOffX->setMinimum(-1000);
        spinBox_pieOriginOffX->setMaximum(1000);
        spinBox_pieOriginOffX->setSingleStep(1);
        spinBox_pieOriginOffX->setValue(0);
        label_pieLabelRad_3 = new QLabel(groupBox_pie);
        label_pieLabelRad_3->setObjectName(QStringLiteral("label_pieLabelRad_3"));
        label_pieLabelRad_3->setGeometry(QRect(110, 268, 31, 31));
        label_pieLabelRad_3->setStyleSheet(QStringLiteral("QLabel {color:white;}"));
        spinBox_pieOriginOffY = new QSpinBox(groupBox_pie);
        spinBox_pieOriginOffY->setObjectName(QStringLiteral("spinBox_pieOriginOffY"));
        spinBox_pieOriginOffY->setGeometry(QRect(149, 274, 51, 22));
        spinBox_pieOriginOffY->setMinimum(-1000);
        spinBox_pieOriginOffY->setMaximum(1000);
        spinBox_pieOriginOffY->setSingleStep(1);
        spinBox_pieOriginOffY->setValue(0);
        pushButton_pieColor_13 = new QPushButton(groupBox_pie);
        pushButton_pieColor_13->setObjectName(QStringLiteral("pushButton_pieColor_13"));
        pushButton_pieColor_13->setGeometry(QRect(95, 531, 30, 20));
        pushButton_pieColor_13->setStyleSheet(QLatin1String("QPushButton {\n"
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
        pushButton_pieColor_14 = new QPushButton(groupBox_pie);
        pushButton_pieColor_14->setObjectName(QStringLiteral("pushButton_pieColor_14"));
        pushButton_pieColor_14->setGeometry(QRect(130, 531, 30, 20));
        pushButton_pieColor_14->setStyleSheet(QLatin1String("QPushButton {\n"
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
        pushButton_pieColor_15 = new QPushButton(groupBox_pie);
        pushButton_pieColor_15->setObjectName(QStringLiteral("pushButton_pieColor_15"));
        pushButton_pieColor_15->setGeometry(QRect(165, 531, 30, 20));
        pushButton_pieColor_15->setStyleSheet(QLatin1String("QPushButton {\n"
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
        pushButton_pieColor_16 = new QPushButton(groupBox_pie);
        pushButton_pieColor_16->setObjectName(QStringLiteral("pushButton_pieColor_16"));
        pushButton_pieColor_16->setGeometry(QRect(25, 556, 30, 20));
        pushButton_pieColor_16->setStyleSheet(QLatin1String("QPushButton {\n"
"    background-color:  rgb(104, 104, 104);\n"
"    border-style: none;\n"
"    border-width: 2px;\n"
"    border-color: rgb(104, 104, 104);\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: rgb(50, 50, 50);\n"
"    border-style: inset;\n"
"}"));
        pushButton_pieColor_16->setFlat(true);
        pushButton_pieColor_17 = new QPushButton(groupBox_pie);
        pushButton_pieColor_17->setObjectName(QStringLiteral("pushButton_pieColor_17"));
        pushButton_pieColor_17->setGeometry(QRect(60, 556, 30, 20));
        pushButton_pieColor_17->setStyleSheet(QLatin1String("QPushButton {\n"
"    background-color:  rgb(104, 104, 104);\n"
"    border-style: none;\n"
"    border-width: 2px;\n"
"    border-color: rgb(104, 104, 104);\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: rgb(50, 50, 50);\n"
"    border-style: inset;\n"
"}"));
        pushButton_pieColor_17->setFlat(true);
        pushButton_pieColor_18 = new QPushButton(groupBox_pie);
        pushButton_pieColor_18->setObjectName(QStringLiteral("pushButton_pieColor_18"));
        pushButton_pieColor_18->setGeometry(QRect(95, 556, 30, 20));
        pushButton_pieColor_18->setStyleSheet(QLatin1String("QPushButton {\n"
"    background-color:  rgb(104, 104, 104);\n"
"    border-style: none;\n"
"    border-width: 2px;\n"
"    border-color: rgb(104, 104, 104);\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: rgb(50, 50, 50);\n"
"    border-style: inset;\n"
"}"));
        pushButton_pieColor_18->setFlat(true);
        pushButton_pieColor_19 = new QPushButton(groupBox_pie);
        pushButton_pieColor_19->setObjectName(QStringLiteral("pushButton_pieColor_19"));
        pushButton_pieColor_19->setGeometry(QRect(130, 556, 30, 20));
        pushButton_pieColor_19->setStyleSheet(QLatin1String("QPushButton {\n"
"    background-color:  rgb(104, 104, 104);\n"
"    border-style: none;\n"
"    border-width: 2px;\n"
"    border-color: rgb(104, 104, 104);\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: rgb(50, 50, 50);\n"
"    border-style: inset;\n"
"}"));
        pushButton_pieColor_19->setFlat(true);
        pushButton_pieColor_20 = new QPushButton(groupBox_pie);
        pushButton_pieColor_20->setObjectName(QStringLiteral("pushButton_pieColor_20"));
        pushButton_pieColor_20->setGeometry(QRect(165, 556, 30, 20));
        pushButton_pieColor_20->setStyleSheet(QLatin1String("QPushButton {\n"
"    background-color:  rgb(104, 104, 104);\n"
"    border-style: none;\n"
"    border-width: 2px;\n"
"    border-color: rgb(104, 104, 104);\n"
"}\n"
"QPushButton:pressed {\n"
"    background-color: rgb(50, 50, 50);\n"
"    border-style: inset;\n"
"}"));
        pushButton_pieColor_20->setFlat(true);
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
        pushButton_pieColor_16->raise();
        pushButton_pieColor_17->raise();
        pushButton_pieColor_18->raise();
        pushButton_pieColor_19->raise();
        pushButton_pieColor_20->raise();
        groupBox_bar = new QGroupBox(centralWidget);
        groupBox_bar->setObjectName(QStringLiteral("groupBox_bar"));
        groupBox_bar->setGeometry(QRect(1063, 75, 211, 611));
        pushButton_barFill = new QPushButton(groupBox_bar);
        pushButton_barFill->setObjectName(QStringLiteral("pushButton_barFill"));
        pushButton_barFill->setGeometry(QRect(114, 16, 50, 20));
        pushButton_barFill->setAutoFillBackground(false);
        pushButton_barFill->setStyleSheet(QLatin1String("QPushButton#pushButton_barFill {\n"
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
        label_barOverlay = new QLabel(groupBox_bar);
        label_barOverlay->setObjectName(QStringLiteral("label_barOverlay"));
        label_barOverlay->setGeometry(QRect(52, 12, 58, 28));
        label_barOverlay->setStyleSheet(QStringLiteral("QLabel { background-color : white; }"));
        pushButton_barOverlay = new QPushButton(groupBox_bar);
        pushButton_barOverlay->setObjectName(QStringLiteral("pushButton_barOverlay"));
        pushButton_barOverlay->setGeometry(QRect(56, 16, 50, 20));
        pushButton_barOverlay->setMouseTracking(false);
        pushButton_barOverlay->setAutoFillBackground(false);
        pushButton_barOverlay->setStyleSheet(QLatin1String("QPushButton#pushButton_barOverlay {\n"
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
        pushButton_barOverlay->setAutoDefault(false);
        pushButton_barOverlay->setFlat(true);
        label_barFill = new QLabel(groupBox_bar);
        label_barFill->setObjectName(QStringLiteral("label_barFill"));
        label_barFill->setGeometry(QRect(110, 12, 58, 28));
        label_barFill->setStyleSheet(QStringLiteral("QLabel { background-color : white; }"));
        groupBox_BarOverlay = new QGroupBox(groupBox_bar);
        groupBox_BarOverlay->setObjectName(QStringLiteral("groupBox_BarOverlay"));
        groupBox_BarOverlay->setGeometry(QRect(7, 40, 198, 561));
        groupBox_BarOverlay->setStyleSheet(QLatin1String("QGroupBox{\n"
"border:none;\n"
"} "));
        groupBox_BarOverlay->setFlat(false);
        groupBox_BarOverlay->setCheckable(false);
        spinBox_barChartWidth = new QSpinBox(groupBox_BarOverlay);
        spinBox_barChartWidth->setObjectName(QStringLiteral("spinBox_barChartWidth"));
        spinBox_barChartWidth->setGeometry(QRect(40, 40, 51, 22));
        spinBox_barChartWidth->setMaximum(1000);
        spinBox_barChartWidth->setSingleStep(5);
        spinBox_barChartWidth->setValue(400);
        label_barXColor = new QLabel(groupBox_BarOverlay);
        label_barXColor->setObjectName(QStringLiteral("label_barXColor"));
        label_barXColor->setGeometry(QRect(66, 312, 111, 6));
        label_14 = new QLabel(groupBox_BarOverlay);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(11, 131, 51, 41));
        label_14->setStyleSheet(QStringLiteral("QLabel {color:white;}"));
        label_14->setWordWrap(true);
        line_11 = new QFrame(groupBox_BarOverlay);
        line_11->setObjectName(QStringLiteral("line_11"));
        line_11->setGeometry(QRect(4, 70, 191, 16));
        line_11->setFrameShape(QFrame::HLine);
        line_11->setFrameShadow(QFrame::Sunken);
        label_barGlowColor = new QLabel(groupBox_BarOverlay);
        label_barGlowColor->setObjectName(QStringLiteral("label_barGlowColor"));
        label_barGlowColor->setGeometry(QRect(66, 201, 111, 6));
        spinBox_barChartHeight = new QSpinBox(groupBox_BarOverlay);
        spinBox_barChartHeight->setObjectName(QStringLiteral("spinBox_barChartHeight"));
        spinBox_barChartHeight->setGeometry(QRect(140, 40, 51, 22));
        spinBox_barChartHeight->setMaximum(1000);
        spinBox_barChartHeight->setSingleStep(5);
        spinBox_barChartHeight->setValue(200);
        pushButton_barColor = new QPushButton(groupBox_BarOverlay);
        pushButton_barColor->setObjectName(QStringLiteral("pushButton_barColor"));
        pushButton_barColor->setGeometry(QRect(66, 111, 111, 21));
        pushButton_barColor->setStyleSheet(QLatin1String("QPushButton#pushButton_barColor {\n"
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
        pushButton_barGlowColor->setObjectName(QStringLiteral("pushButton_barGlowColor"));
        pushButton_barGlowColor->setGeometry(QRect(66, 181, 111, 21));
        pushButton_barGlowColor->setStyleSheet(QLatin1String("QPushButton#pushButton_barGlowColor {\n"
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
        pushButton_barXColor->setObjectName(QStringLiteral("pushButton_barXColor"));
        pushButton_barXColor->setGeometry(QRect(66, 291, 111, 21));
        pushButton_barXColor->setStyleSheet(QLatin1String("QPushButton#pushButton_barXColor {\n"
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
        label_barW->setObjectName(QStringLiteral("label_barW"));
        label_barW->setGeometry(QRect(7, 45, 47, 13));
        label_barW->setStyleSheet(QStringLiteral("QLabel {color:white;}"));
        line_12 = new QFrame(groupBox_BarOverlay);
        line_12->setObjectName(QStringLiteral("line_12"));
        line_12->setGeometry(QRect(4, 249, 191, 16));
        line_12->setFrameShape(QFrame::HLine);
        line_12->setFrameShadow(QFrame::Sunken);
        pushButton_barYColor = new QPushButton(groupBox_BarOverlay);
        pushButton_barYColor->setObjectName(QStringLiteral("pushButton_barYColor"));
        pushButton_barYColor->setGeometry(QRect(66, 430, 111, 21));
        pushButton_barYColor->setStyleSheet(QLatin1String("QPushButton#pushButton_barYColor {\n"
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
        label_barH->setObjectName(QStringLiteral("label_barH"));
        label_barH->setGeometry(QRect(100, 45, 47, 13));
        label_barH->setStyleSheet(QStringLiteral("QLabel {color:white;}"));
        label_barColor = new QLabel(groupBox_BarOverlay);
        label_barColor->setObjectName(QStringLiteral("label_barColor"));
        label_barColor->setGeometry(QRect(66, 132, 111, 6));
        label_15 = new QLabel(groupBox_BarOverlay);
        label_15->setObjectName(QStringLiteral("label_15"));
        label_15->setGeometry(QRect(11, 205, 51, 41));
        label_15->setStyleSheet(QStringLiteral("QLabel {color:white;}"));
        label_15->setWordWrap(true);
        label_barYColor = new QLabel(groupBox_BarOverlay);
        label_barYColor->setObjectName(QStringLiteral("label_barYColor"));
        label_barYColor->setGeometry(QRect(66, 450, 111, 6));
        horizontalSlider_barWidth = new QSlider(groupBox_BarOverlay);
        horizontalSlider_barWidth->setObjectName(QStringLiteral("horizontalSlider_barWidth"));
        horizontalSlider_barWidth->setGeometry(QRect(66, 141, 110, 20));
        horizontalSlider_barWidth->setStyleSheet(QLatin1String("QSlider::groove:horizontal {\n"
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
        horizontalSlider_barWidth->setValue(5);
        horizontalSlider_barWidth->setOrientation(Qt::Horizontal);
        horizontalSlider_barGlowWidth = new QSlider(groupBox_BarOverlay);
        horizontalSlider_barGlowWidth->setObjectName(QStringLiteral("horizontalSlider_barGlowWidth"));
        horizontalSlider_barGlowWidth->setGeometry(QRect(66, 215, 110, 20));
        horizontalSlider_barGlowWidth->setStyleSheet(QLatin1String("QSlider::groove:horizontal {\n"
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
        doubleSpinBox_yMaxBarOverlay->setObjectName(QStringLiteral("doubleSpinBox_yMaxBarOverlay"));
        doubleSpinBox_yMaxBarOverlay->setGeometry(QRect(140, 510, 51, 22));
        doubleSpinBox_yMaxBarOverlay->setMaximum(100000);
        label_yMin_2 = new QLabel(groupBox_BarOverlay);
        label_yMin_2->setObjectName(QStringLiteral("label_yMin_2"));
        label_yMin_2->setGeometry(QRect(7, 515, 47, 13));
        label_yMin_2->setStyleSheet(QStringLiteral("QLabel {color:white;}"));
        label_yTicks_2 = new QLabel(groupBox_BarOverlay);
        label_yTicks_2->setObjectName(QStringLiteral("label_yTicks_2"));
        label_yTicks_2->setGeometry(QRect(11, 460, 41, 41));
        label_yTicks_2->setStyleSheet(QStringLiteral("QLabel {color:white;}"));
        label_yTicks_2->setWordWrap(true);
        label_yMax_2 = new QLabel(groupBox_BarOverlay);
        label_yMax_2->setObjectName(QStringLiteral("label_yMax_2"));
        label_yMax_2->setGeometry(QRect(100, 515, 47, 13));
        label_yMax_2->setStyleSheet(QStringLiteral("QLabel {color:white;}"));
        doubleSpinBox_yMinBarOverlay = new QDoubleSpinBox(groupBox_BarOverlay);
        doubleSpinBox_yMinBarOverlay->setObjectName(QStringLiteral("doubleSpinBox_yMinBarOverlay"));
        doubleSpinBox_yMinBarOverlay->setGeometry(QRect(40, 510, 51, 22));
        horizontalSlider_yTicks_2 = new QSlider(groupBox_BarOverlay);
        horizontalSlider_yTicks_2->setObjectName(QStringLiteral("horizontalSlider_yTicks_2"));
        horizontalSlider_yTicks_2->setGeometry(QRect(66, 470, 110, 20));
        horizontalSlider_yTicks_2->setStyleSheet(QLatin1String("QSlider::groove:horizontal {\n"
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
        label_xTicks_2->setObjectName(QStringLiteral("label_xTicks_2"));
        label_xTicks_2->setGeometry(QRect(11, 322, 41, 41));
        label_xTicks_2->setStyleSheet(QStringLiteral("QLabel {color:white;}"));
        label_xTicks_2->setWordWrap(true);
        label_xMin_2 = new QLabel(groupBox_BarOverlay);
        label_xMin_2->setObjectName(QStringLiteral("label_xMin_2"));
        label_xMin_2->setGeometry(QRect(7, 374, 47, 13));
        label_xMin_2->setStyleSheet(QStringLiteral("QLabel {color:white;}"));
        spinBox_xMax_2 = new QSpinBox(groupBox_BarOverlay);
        spinBox_xMax_2->setObjectName(QStringLiteral("spinBox_xMax_2"));
        spinBox_xMax_2->setGeometry(QRect(140, 369, 51, 22));
        spinBox_xMax_2->setMinimum(1);
        spinBox_xMax_2->setMaximum(1000);
        spinBox_xMax_2->setSingleStep(1);
        spinBox_xMax_2->setValue(1);
        horizontalSlider_xTicks_2 = new QSlider(groupBox_BarOverlay);
        horizontalSlider_xTicks_2->setObjectName(QStringLiteral("horizontalSlider_xTicks_2"));
        horizontalSlider_xTicks_2->setGeometry(QRect(66, 332, 110, 20));
        horizontalSlider_xTicks_2->setStyleSheet(QLatin1String("QSlider::groove:horizontal {\n"
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
        spinBox_xMin_2->setObjectName(QStringLiteral("spinBox_xMin_2"));
        spinBox_xMin_2->setGeometry(QRect(40, 369, 51, 22));
        spinBox_xMin_2->setMaximum(1000);
        spinBox_xMin_2->setSingleStep(1);
        spinBox_xMin_2->setValue(0);
        label_xMax_2 = new QLabel(groupBox_BarOverlay);
        label_xMax_2->setObjectName(QStringLiteral("label_xMax_2"));
        label_xMax_2->setGeometry(QRect(100, 374, 47, 13));
        label_xMax_2->setStyleSheet(QStringLiteral("QLabel {color:white;}"));
        line_15 = new QFrame(groupBox_BarOverlay);
        line_15->setObjectName(QStringLiteral("line_15"));
        line_15->setGeometry(QRect(2, 403, 191, 16));
        line_15->setFrameShape(QFrame::HLine);
        line_15->setFrameShadow(QFrame::Sunken);
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
        groupBox_BarFill = new QGroupBox(groupBox_bar);
        groupBox_BarFill->setObjectName(QStringLiteral("groupBox_BarFill"));
        groupBox_BarFill->setGeometry(QRect(7, 40, 198, 561));
        groupBox_BarFill->setStyleSheet(QLatin1String("QGroupBox{\n"
"border:none;\n"
"} "));
        pushButton_barMask = new QPushButton(groupBox_BarFill);
        pushButton_barMask->setObjectName(QStringLiteral("pushButton_barMask"));
        pushButton_barMask->setGeometry(QRect(3, 190, 191, 31));
        pushButton_barMask->setFont(font1);
        pushButton_barMask->setStyleSheet(QLatin1String("QPushButton#pushButton_barMask {\n"
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
        pushButton_barMaskNext->setObjectName(QStringLiteral("pushButton_barMaskNext"));
        pushButton_barMaskNext->setGeometry(QRect(170, 154, 24, 24));
        QFont font5;
        font5.setFamily(QStringLiteral("SimSun-ExtB"));
        font5.setPointSize(17);
        font5.setBold(true);
        font5.setWeight(75);
        pushButton_barMaskNext->setFont(font5);
        pushButton_barMaskNext->setStyleSheet(QLatin1String("QPushButton#pushButton_barMaskNext {\n"
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
        pushButton_barMaskPrev->setObjectName(QStringLiteral("pushButton_barMaskPrev"));
        pushButton_barMaskPrev->setGeometry(QRect(3, 154, 24, 24));
        pushButton_barMaskPrev->setFont(font5);
        pushButton_barMaskPrev->setStyleSheet(QLatin1String("QPushButton#pushButton_barMaskPrev {\n"
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
        label_barMask->setObjectName(QStringLiteral("label_barMask"));
        label_barMask->setGeometry(QRect(3, 14, 191, 131));
        label_barMask->setAutoFillBackground(false);
        label_barMask->setStyleSheet(QStringLiteral("QLabel { background-color : rgb(204, 204, 204); color: white}"));
        label_barMask->setFrameShape(QFrame::NoFrame);
        label_barMask->setScaledContents(true);
        label_barCurrLabel = new QLabel(groupBox_BarFill);
        label_barCurrLabel->setObjectName(QStringLiteral("label_barCurrLabel"));
        label_barCurrLabel->setGeometry(QRect(32, 154, 132, 24));
        label_barCurrLabel->setStyleSheet(QLatin1String("QLabel { color: white;\n"
"    background-color:  rgb(154, 154, 154); }"));
        pushButton_barMaskColor = new QPushButton(groupBox_BarFill);
        pushButton_barMaskColor->setObjectName(QStringLiteral("pushButton_barMaskColor"));
        pushButton_barMaskColor->setGeometry(QRect(44, 267, 111, 21));
        pushButton_barMaskColor->setStyleSheet(QLatin1String("QPushButton#pushButton_barMaskColor {\n"
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
        label_barMaskColor->setObjectName(QStringLiteral("label_barMaskColor"));
        label_barMaskColor->setGeometry(QRect(44, 288, 111, 6));
        label_fillBar = new QLabel(groupBox_BarFill);
        label_fillBar->setObjectName(QStringLiteral("label_fillBar"));
        label_fillBar->setGeometry(QRect(31, 320, 81, 31));
        label_fillBar->setStyleSheet(QStringLiteral("QLabel {color:white;}"));
        spinBox_labelOffBar = new QSpinBox(groupBox_BarFill);
        spinBox_labelOffBar->setObjectName(QStringLiteral("spinBox_labelOffBar"));
        spinBox_labelOffBar->setGeometry(QRect(121, 324, 51, 22));
        spinBox_labelOffBar->setMinimum(-1000);
        spinBox_labelOffBar->setMaximum(1000);
        spinBox_labelOffBar->setSingleStep(1);
        spinBox_labelOffBar->setValue(0);
        line_13 = new QFrame(groupBox_BarFill);
        line_13->setObjectName(QStringLiteral("line_13"));
        line_13->setGeometry(QRect(0, 234, 191, 16));
        line_13->setFrameShape(QFrame::HLine);
        line_13->setFrameShadow(QFrame::Sunken);
        label_yMin_3 = new QLabel(groupBox_BarFill);
        label_yMin_3->setObjectName(QStringLiteral("label_yMin_3"));
        label_yMin_3->setGeometry(QRect(7, 466, 47, 13));
        label_yMin_3->setStyleSheet(QStringLiteral("QLabel {color:white;}"));
        doubleSpinBox_yMaxBarFill = new QDoubleSpinBox(groupBox_BarFill);
        doubleSpinBox_yMaxBarFill->setObjectName(QStringLiteral("doubleSpinBox_yMaxBarFill"));
        doubleSpinBox_yMaxBarFill->setGeometry(QRect(140, 461, 51, 22));
        doubleSpinBox_yMaxBarFill->setMaximum(100000);
        doubleSpinBox_yMinBarFill = new QDoubleSpinBox(groupBox_BarFill);
        doubleSpinBox_yMinBarFill->setObjectName(QStringLiteral("doubleSpinBox_yMinBarFill"));
        doubleSpinBox_yMinBarFill->setGeometry(QRect(40, 461, 51, 22));
        label_yMax_3 = new QLabel(groupBox_BarFill);
        label_yMax_3->setObjectName(QStringLiteral("label_yMax_3"));
        label_yMax_3->setGeometry(QRect(100, 466, 47, 13));
        label_yMax_3->setStyleSheet(QStringLiteral("QLabel {color:white;}"));
        pushButton_barPercentage = new QPushButton(groupBox_BarFill);
        pushButton_barPercentage->setObjectName(QStringLiteral("pushButton_barPercentage"));
        pushButton_barPercentage->setGeometry(QRect(44, 404, 62, 20));
        pushButton_barPercentage->setMouseTracking(false);
        pushButton_barPercentage->setAutoFillBackground(false);
        pushButton_barPercentage->setStyleSheet(QLatin1String("QPushButton#pushButton_barPercentage {\n"
"	color: white;\n"
"    background-color:  rgb(104, 104, 104);\n"
"    border-style: none;\n"
"    border-width: 2px;\n"
"    border-color: rgb(104, 104, 104);\n"
"}\n"
"QPushButton#pushButton_barPercentage:pressed {\n"
"    background-color: rgb(50, 50, 50);\n"
"    border-style: inset;\n"
"}"));
        pushButton_barPercentage->setAutoDefault(false);
        pushButton_barPercentage->setFlat(true);
        label_barValue = new QLabel(groupBox_BarFill);
        label_barValue->setObjectName(QStringLiteral("label_barValue"));
        label_barValue->setGeometry(QRect(110, 400, 68, 28));
        label_barValue->setStyleSheet(QStringLiteral("QLabel { background-color : white; }"));
        label_barPercentage = new QLabel(groupBox_BarFill);
        label_barPercentage->setObjectName(QStringLiteral("label_barPercentage"));
        label_barPercentage->setGeometry(QRect(40, 400, 70, 28));
        label_barPercentage->setStyleSheet(QStringLiteral("QLabel { background-color : white; }"));
        pushButton_barValue = new QPushButton(groupBox_BarFill);
        pushButton_barValue->setObjectName(QStringLiteral("pushButton_barValue"));
        pushButton_barValue->setGeometry(QRect(114, 404, 60, 20));
        pushButton_barValue->setAutoFillBackground(false);
        pushButton_barValue->setStyleSheet(QLatin1String("QPushButton#pushButton_barValue {\n"
"	color: white;\n"
"    background-color:  rgb(104, 104, 104);\n"
"    border-style: none;\n"
"    border-width: 2px;\n"
"    border-color: rgb(104, 104, 104);\n"
"}\n"
"QPushButton#pushButton_barValue:pressed {\n"
"    background-color: rgb(50, 50, 50);\n"
"    border-style: inset;\n"
"}"));
        pushButton_barValue->setFlat(true);
        line_14 = new QFrame(groupBox_BarFill);
        line_14->setObjectName(QStringLiteral("line_14"));
        line_14->setGeometry(QRect(0, 368, 191, 16));
        line_14->setFrameShape(QFrame::HLine);
        line_14->setFrameShadow(QFrame::Sunken);
        label_barPercentage->raise();
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
        pushButton_barPercentage->raise();
        label_barValue->raise();
        pushButton_barValue->raise();
        line_14->raise();
        label_barFill->raise();
        pushButton_barFill->raise();
        label_barOverlay->raise();
        pushButton_barOverlay->raise();
        groupBox_BarOverlay->raise();
        groupBox_BarFill->raise();
        groupBox_line = new QGroupBox(centralWidget);
        groupBox_line->setObjectName(QStringLiteral("groupBox_line"));
        groupBox_line->setEnabled(true);
        groupBox_line->setGeometry(QRect(1063, 75, 211, 611));
        spinBox_lineChartWidth = new QSpinBox(groupBox_line);
        spinBox_lineChartWidth->setObjectName(QStringLiteral("spinBox_lineChartWidth"));
        spinBox_lineChartWidth->setGeometry(QRect(46, 30, 51, 22));
        spinBox_lineChartWidth->setMaximum(1000);
        spinBox_lineChartWidth->setSingleStep(5);
        spinBox_lineChartWidth->setValue(400);
        spinBox_lineChartHeight = new QSpinBox(groupBox_line);
        spinBox_lineChartHeight->setObjectName(QStringLiteral("spinBox_lineChartHeight"));
        spinBox_lineChartHeight->setGeometry(QRect(146, 30, 51, 22));
        spinBox_lineChartHeight->setMaximum(1000);
        spinBox_lineChartHeight->setSingleStep(5);
        spinBox_lineChartHeight->setValue(200);
        label_chartW = new QLabel(groupBox_line);
        label_chartW->setObjectName(QStringLiteral("label_chartW"));
        label_chartW->setGeometry(QRect(13, 35, 47, 13));
        label_chartW->setStyleSheet(QStringLiteral("QLabel {color:white;}"));
        label_chartH = new QLabel(groupBox_line);
        label_chartH->setObjectName(QStringLiteral("label_chartH"));
        label_chartH->setGeometry(QRect(106, 35, 47, 13));
        label_chartH->setStyleSheet(QStringLiteral("QLabel {color:white;}"));
        horizontalSlider_xTicks = new QSlider(groupBox_line);
        horizontalSlider_xTicks->setObjectName(QStringLiteral("horizontalSlider_xTicks"));
        horizontalSlider_xTicks->setGeometry(QRect(72, 320, 110, 20));
        horizontalSlider_xTicks->setStyleSheet(QLatin1String("QSlider::groove:horizontal {\n"
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
        label_xTicks = new QLabel(groupBox_line);
        label_xTicks->setObjectName(QStringLiteral("label_xTicks"));
        label_xTicks->setGeometry(QRect(17, 310, 41, 41));
        label_xTicks->setStyleSheet(QStringLiteral("QLabel {color:white;}"));
        label_xTicks->setWordWrap(true);
        pushButton_lineColor = new QPushButton(groupBox_line);
        pushButton_lineColor->setObjectName(QStringLiteral("pushButton_lineColor"));
        pushButton_lineColor->setGeometry(QRect(72, 101, 111, 21));
        pushButton_lineColor->setStyleSheet(QLatin1String("QPushButton#pushButton_lineColor {\n"
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
        pushButton_lineGlowColor = new QPushButton(groupBox_line);
        pushButton_lineGlowColor->setObjectName(QStringLiteral("pushButton_lineGlowColor"));
        pushButton_lineGlowColor->setGeometry(QRect(72, 171, 111, 21));
        pushButton_lineGlowColor->setStyleSheet(QLatin1String("QPushButton#pushButton_lineGlowColor {\n"
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
        pushButton_lineXColor = new QPushButton(groupBox_line);
        pushButton_lineXColor->setObjectName(QStringLiteral("pushButton_lineXColor"));
        pushButton_lineXColor->setGeometry(QRect(72, 286, 111, 21));
        pushButton_lineXColor->setStyleSheet(QLatin1String("QPushButton#pushButton_lineXColor {\n"
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
        pushButton_lineYColor = new QPushButton(groupBox_line);
        pushButton_lineYColor->setObjectName(QStringLiteral("pushButton_lineYColor"));
        pushButton_lineYColor->setGeometry(QRect(72, 435, 111, 21));
        pushButton_lineYColor->setStyleSheet(QLatin1String("QPushButton#pushButton_lineYColor {\n"
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
        label_lineThick = new QLabel(groupBox_line);
        label_lineThick->setObjectName(QStringLiteral("label_lineThick"));
        label_lineThick->setGeometry(QRect(17, 121, 51, 41));
        label_lineThick->setStyleSheet(QStringLiteral("QLabel {color:white;}"));
        label_lineThick->setWordWrap(true);
        horizontalSlider_lineThick = new QSlider(groupBox_line);
        horizontalSlider_lineThick->setObjectName(QStringLiteral("horizontalSlider_lineThick"));
        horizontalSlider_lineThick->setGeometry(QRect(72, 131, 110, 20));
        horizontalSlider_lineThick->setStyleSheet(QLatin1String("QSlider::groove:horizontal {\n"
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
        horizontalSlider_lineGlowThick = new QSlider(groupBox_line);
        horizontalSlider_lineGlowThick->setObjectName(QStringLiteral("horizontalSlider_lineGlowThick"));
        horizontalSlider_lineGlowThick->setGeometry(QRect(72, 205, 110, 20));
        horizontalSlider_lineGlowThick->setStyleSheet(QLatin1String("QSlider::groove:horizontal {\n"
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
        label_glowThick = new QLabel(groupBox_line);
        label_glowThick->setObjectName(QStringLiteral("label_glowThick"));
        label_glowThick->setGeometry(QRect(17, 195, 51, 41));
        label_glowThick->setStyleSheet(QStringLiteral("QLabel {color:white;}"));
        label_glowThick->setWordWrap(true);
        label_yTicks = new QLabel(groupBox_line);
        label_yTicks->setObjectName(QStringLiteral("label_yTicks"));
        label_yTicks->setGeometry(QRect(17, 463, 41, 41));
        label_yTicks->setStyleSheet(QStringLiteral("QLabel {color:white;}"));
        label_yTicks->setWordWrap(true);
        horizontalSlider_yTicks = new QSlider(groupBox_line);
        horizontalSlider_yTicks->setObjectName(QStringLiteral("horizontalSlider_yTicks"));
        horizontalSlider_yTicks->setGeometry(QRect(72, 473, 110, 20));
        horizontalSlider_yTicks->setStyleSheet(QLatin1String("QSlider::groove:horizontal {\n"
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
        label_xMax = new QLabel(groupBox_line);
        label_xMax->setObjectName(QStringLiteral("label_xMax"));
        label_xMax->setGeometry(QRect(106, 362, 47, 13));
        label_xMax->setStyleSheet(QStringLiteral("QLabel {color:white;}"));
        spinBox_xMax = new QSpinBox(groupBox_line);
        spinBox_xMax->setObjectName(QStringLiteral("spinBox_xMax"));
        spinBox_xMax->setGeometry(QRect(146, 357, 51, 22));
        spinBox_xMax->setMinimum(1);
        spinBox_xMax->setMaximum(1000);
        spinBox_xMax->setSingleStep(1);
        spinBox_xMax->setValue(1);
        spinBox_xMin = new QSpinBox(groupBox_line);
        spinBox_xMin->setObjectName(QStringLiteral("spinBox_xMin"));
        spinBox_xMin->setGeometry(QRect(46, 357, 51, 22));
        spinBox_xMin->setMaximum(1000);
        spinBox_xMin->setSingleStep(1);
        spinBox_xMin->setValue(0);
        label_xMin = new QLabel(groupBox_line);
        label_xMin->setObjectName(QStringLiteral("label_xMin"));
        label_xMin->setGeometry(QRect(13, 362, 47, 13));
        label_xMin->setStyleSheet(QStringLiteral("QLabel {color:white;}"));
        doubleSpinBox_yMin = new QDoubleSpinBox(groupBox_line);
        doubleSpinBox_yMin->setObjectName(QStringLiteral("doubleSpinBox_yMin"));
        doubleSpinBox_yMin->setGeometry(QRect(46, 513, 51, 22));
        label_yMin = new QLabel(groupBox_line);
        label_yMin->setObjectName(QStringLiteral("label_yMin"));
        label_yMin->setGeometry(QRect(13, 518, 47, 13));
        label_yMin->setStyleSheet(QStringLiteral("QLabel {color:white;}"));
        label_yMax = new QLabel(groupBox_line);
        label_yMax->setObjectName(QStringLiteral("label_yMax"));
        label_yMax->setGeometry(QRect(106, 518, 47, 13));
        label_yMax->setStyleSheet(QStringLiteral("QLabel {color:white;}"));
        doubleSpinBox_yMax = new QDoubleSpinBox(groupBox_line);
        doubleSpinBox_yMax->setObjectName(QStringLiteral("doubleSpinBox_yMax"));
        doubleSpinBox_yMax->setGeometry(QRect(146, 513, 51, 22));
        doubleSpinBox_yMax->setMaximum(100000);
        line_5 = new QFrame(groupBox_line);
        line_5->setObjectName(QStringLiteral("line_5"));
        line_5->setGeometry(QRect(10, 60, 191, 16));
        line_5->setFrameShape(QFrame::HLine);
        line_5->setFrameShadow(QFrame::Sunken);
        line_6 = new QFrame(groupBox_line);
        line_6->setObjectName(QStringLiteral("line_6"));
        line_6->setGeometry(QRect(10, 239, 191, 16));
        line_6->setFrameShape(QFrame::HLine);
        line_6->setFrameShadow(QFrame::Sunken);
        line_7 = new QFrame(groupBox_line);
        line_7->setObjectName(QStringLiteral("line_7"));
        line_7->setGeometry(QRect(10, 390, 191, 16));
        line_7->setFrameShape(QFrame::HLine);
        line_7->setFrameShadow(QFrame::Sunken);
        label_lineColor = new QLabel(groupBox_line);
        label_lineColor->setObjectName(QStringLiteral("label_lineColor"));
        label_lineColor->setGeometry(QRect(72, 120, 111, 6));
        label_lineGlowColor = new QLabel(groupBox_line);
        label_lineGlowColor->setObjectName(QStringLiteral("label_lineGlowColor"));
        label_lineGlowColor->setGeometry(QRect(72, 192, 111, 6));
        label_lineXColor = new QLabel(groupBox_line);
        label_lineXColor->setObjectName(QStringLiteral("label_lineXColor"));
        label_lineXColor->setGeometry(QRect(72, 307, 111, 6));
        label_lineYColor = new QLabel(groupBox_line);
        label_lineYColor->setObjectName(QStringLiteral("label_lineYColor"));
        label_lineYColor->setGeometry(QRect(72, 456, 111, 6));
        label_lineSpline = new QLabel(groupBox_line);
        label_lineSpline->setObjectName(QStringLiteral("label_lineSpline"));
        label_lineSpline->setGeometry(QRect(110, 560, 58, 28));
        label_lineSpline->setStyleSheet(QStringLiteral("QLabel { background-color : white; }"));
        label_lineLine = new QLabel(groupBox_line);
        label_lineLine->setObjectName(QStringLiteral("label_lineLine"));
        label_lineLine->setGeometry(QRect(52, 560, 58, 28));
        label_lineLine->setStyleSheet(QStringLiteral("QLabel { background-color : white; }"));
        pushButton_lineLine = new QPushButton(groupBox_line);
        pushButton_lineLine->setObjectName(QStringLiteral("pushButton_lineLine"));
        pushButton_lineLine->setGeometry(QRect(56, 564, 50, 20));
        pushButton_lineLine->setMouseTracking(false);
        pushButton_lineLine->setAutoFillBackground(false);
        pushButton_lineLine->setStyleSheet(QLatin1String("QPushButton#pushButton_lineLine {\n"
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
        pushButton_lineSpline = new QPushButton(groupBox_line);
        pushButton_lineSpline->setObjectName(QStringLiteral("pushButton_lineSpline"));
        pushButton_lineSpline->setGeometry(QRect(114, 564, 50, 20));
        pushButton_lineSpline->setAutoFillBackground(false);
        pushButton_lineSpline->setStyleSheet(QLatin1String("QPushButton#pushButton_lineSpline {\n"
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
        label_foot = new QLabel(centralWidget);
        label_foot->setObjectName(QStringLiteral("label_foot"));
        label_foot->setGeometry(QRect(0, 949, 1286, 3));
        QFont font6;
        font6.setFamily(QStringLiteral("Tunga"));
        font6.setPointSize(15);
        font6.setBold(true);
        font6.setItalic(true);
        font6.setWeight(75);
        label_foot->setFont(font6);
        label_foot->setStyleSheet(QLatin1String("QLabel#label_foot {\n"
"	background-color: rgb(14,99, 156);\n"
"	color: white;\n"
"}"));
        label_left = new QLabel(centralWidget);
        label_left->setObjectName(QStringLiteral("label_left"));
        label_left->setGeometry(QRect(0, 0, 3, 952));
        label_left->setFont(font6);
        label_left->setStyleSheet(QLatin1String("QLabel#label_left {\n"
"	background-color: rgb(14,99, 156);\n"
"	color: white;\n"
"}"));
        label_right = new QLabel(centralWidget);
        label_right->setObjectName(QStringLiteral("label_right"));
        label_right->setGeometry(QRect(1282, 0, 3, 952));
        label_right->setFont(font6);
        label_right->setStyleSheet(QLatin1String("QLabel#label_right {\n"
"	background-color: rgb(14,99, 156);\n"
"	color: white;\n"
"}"));
        label_head = new QLabel(centralWidget);
        label_head->setObjectName(QStringLiteral("label_head"));
        label_head->setGeometry(QRect(0, 0, 1286, 3));
        label_head->setFont(font6);
        label_head->setStyleSheet(QLatin1String("QLabel#label_head {\n"
"	background-color: rgb(14,99, 156);\n"
"	color: white;\n"
"}"));
        tableWidget = new QTableWidget(centralWidget);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(10, 790, 181, 154));
        tableWidget->setStyleSheet(QStringLiteral(""));
        tableWidget->verticalHeader()->setDefaultSectionSize(20);
        horizontalSlider_textFillOpac = new QSlider(centralWidget);
        horizontalSlider_textFillOpac->setObjectName(QStringLiteral("horizontalSlider_textFillOpac"));
        horizontalSlider_textFillOpac->setGeometry(QRect(614, 43, 91, 20));
        horizontalSlider_textFillOpac->setStyleSheet(QLatin1String("QSlider::groove:horizontal {\n"
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
        label_textFillOpac->setObjectName(QStringLiteral("label_textFillOpac"));
        label_textFillOpac->setGeometry(QRect(545, 32, 61, 41));
        label_textFillOpac->setStyleSheet(QStringLiteral("QLabel {color:white;}"));
        label_textFillOpac->setWordWrap(true);
        line_2 = new QFrame(centralWidget);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(51, 37, 20, 31));
        line_2->setStyleSheet(QStringLiteral(""));
        line_2->setFrameShape(QFrame::VLine);
        line_2->setFrameShadow(QFrame::Sunken);
        line_9 = new QFrame(centralWidget);
        line_9->setObjectName(QStringLiteral("line_9"));
        line_9->setGeometry(QRect(2, 37, 20, 31));
        line_9->setStyleSheet(QStringLiteral(""));
        line_9->setFrameShape(QFrame::VLine);
        line_9->setFrameShadow(QFrame::Sunken);
        pushButton_save = new QPushButton(centralWidget);
        pushButton_save->setObjectName(QStringLiteral("pushButton_save"));
        pushButton_save->setGeometry(QRect(17, 41, 39, 25));
        QFont font7;
        font7.setFamily(QStringLiteral("Nirmala UI"));
        font7.setBold(true);
        font7.setWeight(75);
        pushButton_save->setFont(font7);
        pushButton_save->setStyleSheet(QLatin1String("QPushButton#pushButton_save {\n"
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
        MemeVizClass->setCentralWidget(centralWidget);
        label_pie->raise();
        label_bar->raise();
        label_line->raise();
        loadButtonData->raise();
        loadButtonImg->raise();
        graphicsView_chart->raise();
        label_imgFilter->raise();
        comboBoxPiFiltImg_2->raise();
        pushButton_line->raise();
        pushButton_clear->raise();
        pushButton_bar->raise();
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
        pushButton_pie->raise();
        line_4->raise();
        groupBox_images->raise();
        label_header->raise();
        label_fontColor->raise();
        label_fontFill->raise();
        groupBox_pie->raise();
        groupBox_bar->raise();
        groupBox_line->raise();
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

        retranslateUi(MemeVizClass);

        pushButton_lineGlowColor->setDefault(false);


        QMetaObject::connectSlotsByName(MemeVizClass);
    } // setupUi

    void retranslateUi(QMainWindow *MemeVizClass)
    {
        MemeVizClass->setWindowTitle(QApplication::translate("MemeVizClass", "MemeViz", 0));
        actionExit->setText(QApplication::translate("MemeVizClass", "Exit", 0));
        actionAbout->setText(QApplication::translate("MemeVizClass", "About", 0));
        loadButtonData->setText(QApplication::translate("MemeVizClass", "Import Data", 0));
        loadButtonImg->setText(QApplication::translate("MemeVizClass", "Import\n"
"Image", 0));
        label_imgFilter->setText(QApplication::translate("MemeVizClass", "Background Filter:", 0));
        pushButton_line->setText(QApplication::translate("MemeVizClass", "Line", 0));
        pushButton_clear->setText(QApplication::translate("MemeVizClass", "Clear", 0));
        pushButton_bar->setText(QApplication::translate("MemeVizClass", "Bar", 0));
        pushButton_pie->setText(QApplication::translate("MemeVizClass", "Pie", 0));
        pushButton_fontBold->setText(QApplication::translate("MemeVizClass", "BOLD", 0));
        pushButton_fontItalics->setText(QApplication::translate("MemeVizClass", "ITALICS", 0));
        pushButton_fontColor->setText(QApplication::translate("MemeVizClass", "COLOR", 0));
        label->setText(QApplication::translate("MemeVizClass", "Font:", 0));
        label_pie->setText(QString());
        label_line->setText(QString());
        label_bar->setText(QString());
        pushButton_fontFill->setText(QApplication::translate("MemeVizClass", "FILL", 0));
        groupBox_images->setTitle(QApplication::translate("MemeVizClass", "Suggested Images", 0));
        label_header->setText(QApplication::translate("MemeVizClass", " MemeViz", 0));
        label_fontColor->setText(QString());
        label_fontFill->setText(QString());
        pushButton_close->setText(QApplication::translate("MemeVizClass", "X", 0));
        groupBox_pie->setTitle(QString());
        labelimg->setText(QApplication::translate("MemeVizClass", "                           Mask", 0));
        pushButton_createMask->setText(QApplication::translate("MemeVizClass", "Create Mask", 0));
        pushButton_pieAr->setText(QApplication::translate("MemeVizClass", "Area", 0));
        pushButton_pieRad->setText(QApplication::translate("MemeVizClass", "Radial", 0));
        label_pieRad->setText(QString());
        label_pieAr->setText(QString());
        label_9->setText(QApplication::translate("MemeVizClass", "0", 0));
        label_10->setText(QApplication::translate("MemeVizClass", "360", 0));
        label_11->setText(QApplication::translate("MemeVizClass", "Rotation:", 0));
        label_pieLabelRad->setText(QApplication::translate("MemeVizClass", "Label Radius", 0));
        pushButton_pieColor_1->setText(QApplication::translate("MemeVizClass", "COLOR", 0));
        pushButton_pieColor_2->setText(QApplication::translate("MemeVizClass", "COLOR", 0));
        pushButton_pieColor_3->setText(QApplication::translate("MemeVizClass", "COLOR", 0));
        pushButton_pieColor_5->setText(QApplication::translate("MemeVizClass", "COLOR", 0));
        pushButton_pieColor_4->setText(QApplication::translate("MemeVizClass", "COLOR", 0));
        pushButton_pieColor_6->setText(QApplication::translate("MemeVizClass", "COLOR", 0));
        pushButton_pieColor_11->setText(QApplication::translate("MemeVizClass", "COLOR", 0));
        pushButton_pieColor_8->setText(QApplication::translate("MemeVizClass", "COLOR", 0));
        pushButton_pieColor_10->setText(QApplication::translate("MemeVizClass", "COLOR", 0));
        pushButton_pieColor_12->setText(QApplication::translate("MemeVizClass", "COLOR", 0));
        pushButton_pieColor_7->setText(QApplication::translate("MemeVizClass", "COLOR", 0));
        pushButton_pieColor_9->setText(QApplication::translate("MemeVizClass", "COLOR", 0));
        label_12->setText(QApplication::translate("MemeVizClass", "Segment Colors", 0));
        label_pieLabelRad_2->setText(QApplication::translate("MemeVizClass", "Offset\n"
"    X", 0));
        label_pieLabelRad_3->setText(QApplication::translate("MemeVizClass", "Offset\n"
"    Y", 0));
        pushButton_pieColor_13->setText(QApplication::translate("MemeVizClass", "COLOR", 0));
        pushButton_pieColor_14->setText(QApplication::translate("MemeVizClass", "COLOR", 0));
        pushButton_pieColor_15->setText(QApplication::translate("MemeVizClass", "COLOR", 0));
        pushButton_pieColor_16->setText(QApplication::translate("MemeVizClass", "COLOR", 0));
        pushButton_pieColor_17->setText(QApplication::translate("MemeVizClass", "COLOR", 0));
        pushButton_pieColor_18->setText(QApplication::translate("MemeVizClass", "COLOR", 0));
        pushButton_pieColor_19->setText(QApplication::translate("MemeVizClass", "COLOR", 0));
        pushButton_pieColor_20->setText(QApplication::translate("MemeVizClass", "COLOR", 0));
        groupBox_bar->setTitle(QString());
        pushButton_barFill->setText(QApplication::translate("MemeVizClass", "Fill", 0));
        label_barOverlay->setText(QString());
        pushButton_barOverlay->setText(QApplication::translate("MemeVizClass", "Overlay", 0));
        label_barFill->setText(QString());
        groupBox_BarOverlay->setTitle(QString());
        label_barXColor->setText(QString());
        label_14->setText(QApplication::translate("MemeVizClass", "Bar Size", 0));
        label_barGlowColor->setText(QString());
        pushButton_barColor->setText(QApplication::translate("MemeVizClass", "Fill Color", 0));
        pushButton_barGlowColor->setText(QApplication::translate("MemeVizClass", "Glow Color", 0));
        pushButton_barXColor->setText(QApplication::translate("MemeVizClass", "X-Axis Color", 0));
        label_barW->setText(QApplication::translate("MemeVizClass", "Width", 0));
        pushButton_barYColor->setText(QApplication::translate("MemeVizClass", "Y-Axis Color", 0));
        label_barH->setText(QApplication::translate("MemeVizClass", "Height", 0));
        label_barColor->setText(QString());
        label_15->setText(QApplication::translate("MemeVizClass", "Glow Size", 0));
        label_barYColor->setText(QString());
        label_yMin_2->setText(QApplication::translate("MemeVizClass", "Y Min", 0));
        label_yTicks_2->setText(QApplication::translate("MemeVizClass", "Tick Size", 0));
        label_yMax_2->setText(QApplication::translate("MemeVizClass", "Y Max", 0));
        label_xTicks_2->setText(QApplication::translate("MemeVizClass", "Tick Size", 0));
        label_xMin_2->setText(QApplication::translate("MemeVizClass", "X Min", 0));
        label_xMax_2->setText(QApplication::translate("MemeVizClass", "X Max", 0));
        groupBox_BarFill->setTitle(QString());
        pushButton_barMask->setText(QApplication::translate("MemeVizClass", "Generate Mask", 0));
        pushButton_barMaskNext->setText(QApplication::translate("MemeVizClass", ">", 0));
        pushButton_barMaskPrev->setText(QApplication::translate("MemeVizClass", "<", 0));
        label_barMask->setText(QApplication::translate("MemeVizClass", "                           Mask", 0));
        label_barCurrLabel->setText(QString());
        pushButton_barMaskColor->setText(QApplication::translate("MemeVizClass", "Fill Color", 0));
        label_barMaskColor->setText(QString());
        label_fillBar->setText(QApplication::translate("MemeVizClass", "Labels Y Offset", 0));
        label_yMin_3->setText(QApplication::translate("MemeVizClass", "Y Min", 0));
        label_yMax_3->setText(QApplication::translate("MemeVizClass", "Y Max", 0));
        pushButton_barPercentage->setText(QApplication::translate("MemeVizClass", "Percentage", 0));
        label_barValue->setText(QString());
        label_barPercentage->setText(QString());
        pushButton_barValue->setText(QApplication::translate("MemeVizClass", "Value", 0));
        groupBox_line->setTitle(QString());
        label_chartW->setText(QApplication::translate("MemeVizClass", "Width", 0));
        label_chartH->setText(QApplication::translate("MemeVizClass", "Height", 0));
        label_xTicks->setText(QApplication::translate("MemeVizClass", "Tick Size", 0));
        pushButton_lineColor->setText(QApplication::translate("MemeVizClass", "Fill Color", 0));
        pushButton_lineGlowColor->setText(QApplication::translate("MemeVizClass", "Glow Color", 0));
        pushButton_lineXColor->setText(QApplication::translate("MemeVizClass", "X-Axis Color", 0));
        pushButton_lineYColor->setText(QApplication::translate("MemeVizClass", "Y-Axis Color", 0));
        label_lineThick->setText(QApplication::translate("MemeVizClass", "Line Size", 0));
        label_glowThick->setText(QApplication::translate("MemeVizClass", "Glow Size", 0));
        label_yTicks->setText(QApplication::translate("MemeVizClass", "Tick Size", 0));
        label_xMax->setText(QApplication::translate("MemeVizClass", "X Max", 0));
        label_xMin->setText(QApplication::translate("MemeVizClass", "X Min", 0));
        label_yMin->setText(QApplication::translate("MemeVizClass", "Y Min", 0));
        label_yMax->setText(QApplication::translate("MemeVizClass", "Y Max", 0));
        label_lineColor->setText(QString());
        label_lineGlowColor->setText(QString());
        label_lineXColor->setText(QString());
        label_lineYColor->setText(QString());
        label_lineSpline->setText(QString());
        label_lineLine->setText(QString());
        pushButton_lineLine->setText(QApplication::translate("MemeVizClass", "Line", 0));
        pushButton_lineSpline->setText(QApplication::translate("MemeVizClass", "Spline", 0));
        label_foot->setText(QString());
        label_left->setText(QString());
        label_right->setText(QString());
        label_head->setText(QString());
        label_textFillOpac->setText(QApplication::translate("MemeVizClass", "Fill Opacity", 0));
        pushButton_save->setText(QApplication::translate("MemeVizClass", "SAVE", 0));
    } // retranslateUi

};

namespace Ui {
    class MemeVizClass: public Ui_MemeVizClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MEMEVIZ_H
