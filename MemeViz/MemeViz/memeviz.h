#ifndef MEMEVIZ_H
#define MEMEVIZ_H

#include "ui_memeviz.h"
#include "scenememe.h"
#include "imgFilter.h"
#include "segMask.h"
#include "titleTextItem.h"
#include "load_img.h"

#include <QtWidgets/QMainWindow>
#include <qmessagebox.h>
#include <QFontDialog>
#include <QColorDialog>

#include <QtCharts>
#include <QtCharts/QChartView>
#include <QtCharts/QPieSeries>
#include <QtCharts/QPieSlice>
#include <QLineSeries>
#include <QtCharts/QBarSeries>
#include <QtCharts/QBarSet>
#include <QtCharts/QLegend>
#include <QtCharts/QBarCategoryAxis>
#include <QtCharts/QChart>

#include <qfiledialog.h>
#include <qfile.h>
#include <qtextstream.h>

#include <QNetworkAccessManager>
#include <QtNetwork>
#include <QUrl>

#include <csvparser.h>
#include <colorBrewer.h>
#include <opencv2\opencv.hpp>
#include <opencv2\core\core.hpp>

class MemeViz : public QMainWindow
{
	Q_OBJECT

public:
	MemeViz(QWidget *parent = 0);
	~MemeViz();
	
	enum ChartType { None, Pie, Line, Bar };	
	enum PieType { Rad, Area, OverLay };
	
private:
	Ui::MemeVizClass ui;
	segMask *segM;

	//View Objects
	SceneMeme* scene_meme;	
	QtCharts::QChart *chart;
	QGraphicsScene* scene_preview;
	QtCharts::QChart *chartpreview;
	
	//Background Image
	cv::Mat img;	
	cv::Mat mask;
	cv::Mat filtimg;
	imgFilter filt;
	bool loaded_img;	
	bool maskSet;
	int imgH, imgW;
	QStringList imgLinks;
	///Functions
	void imageSearch();

	//Data
	std::string t_title = "NO TITLE";
	std::vector<std::string> t_attr;
	std::vector<std::string> t_label;
	std::vector<double> t_val;
	std::vector<std::vector<int>> t_label_clr;
	bool dataLoaded;
	///Functions
	void  linearReg();
	
	//Title
	TitleTextItem * chartTitle;
	QGraphicsRectItem * titleRect;
	QFont textFont;
	
	//Chart
	ChartType chartType;
	double chartX, chartY;
	bool chartAdded = false;
	bool chartPrwAdded = false;

	//Pie Chart
	std::vector<double> angles;
	cv::Point pieCenter;
	int pieRot;
	PieType pieType;
	QList<QColor> pieColors;
	QList<QPushButton* > pieColorButtons;
	///Functions
	void drawPieChart();
	void computePieAngles();
	cv::Mat fillPie();

	//Line Chart
	QtCharts::QLineSeries *lineSeries;
	QtCharts::QLineSeries *lineGlowSeries;
	QtCharts::QCategoryAxis *xaxis;
	bool lineSpline;
	int lineThick;
	QColor lineColor;
	int lineGlowThick;
	QColor lineGlowColor;
	int xStep;
	double yMin, yMax;
	///Functions
	void drawLineChart();
	
	//Bar Chart
	QtCharts::QBarSeries *barSeries;
	QtCharts::QBarSet *barSet;
	int barThick;
	QColor barColor;
	int barGlowThick;
	QColor barGlowColor;
	bool barOverlay;
	bool barPercentage;
	int barMaskIdx;
	double barYMin, barYMax;
	std::vector<cv::Mat> barMasks;
	std::vector<bool> barMasksSet;
	///Functions
	void drawBarChart();
	void fillBarChart(int idx);

	//Window Handling
	int m_nMouseClick_X_Coordinate;
	int m_nMouseClick_Y_Coordinate;
	///Functions
	void mousePressEvent(QMouseEvent *event);
	void mouseMoveEvent(QMouseEvent *event);
	
public slots:
	void recieveMask(cv::Mat bckdrp);

private slots:
	//User Data and Image Input Controls
	void on_loadButtonImg_clicked();
	void on_loadButtonData_clicked();
	void on_listWidget_itemClicked(QListWidgetItem * item);
	void on_pushButton_save_clicked();

	//Text Controls
	void on_pushButton_fontColor_clicked();
	void on_pushButton_fontFill_clicked();
	void on_pushButton_fontItalics_clicked();
	void on_pushButton_fontBold_clicked();
	void on_fontComboBox_fontFamily_currentFontChanged();
	void on_spinBox_fontSize_valueChanged();
	void on_horizontalSlider_textFillOpac_valueChanged();
	
	//Background Controls
	void on_comboBoxPiFiltImg_2_currentIndexChanged(const QString & text);
	void on_pushButton_clear_clicked();
	
	//Pie Chart Controls
	void on_pushButton_pie_clicked();
	void on_pushButton_createMask_clicked();
	void on_pushButton_pieRad_clicked();
	void on_pushButton_pieAr_clicked();
	void on_horizontalSlider_pieAng_valueChanged();
	void on_spinBox_pieLabelRad_valueChanged();
	void on_spinBox_pieOriginOffX_valueChanged();
	void on_spinBox_pieOriginOffY_valueChanged();
	void on_comboBoxBrewerNames_currentIndexChanged(const QString & text);
	void on_pushButton_pieColor_1_clicked();
	void on_pushButton_pieColor_2_clicked();
	void on_pushButton_pieColor_3_clicked();
	void on_pushButton_pieColor_4_clicked();
	void on_pushButton_pieColor_5_clicked();
	void on_pushButton_pieColor_6_clicked();
	void on_pushButton_pieColor_7_clicked();
	void on_pushButton_pieColor_8_clicked();
	void on_pushButton_pieColor_9_clicked();
	void on_pushButton_pieColor_10_clicked();
	void on_pushButton_pieColor_11_clicked();
	void on_pushButton_pieColor_12_clicked();
	void on_pushButton_pieColor_13_clicked();
	void on_pushButton_pieColor_14_clicked();
	void on_pushButton_pieColor_15_clicked();
	void on_pushButton_pieColor_16_clicked();
	void on_pushButton_pieColor_17_clicked();
	void on_pushButton_pieColor_18_clicked();
	void on_pushButton_pieColor_19_clicked();
	void on_pushButton_pieColor_20_clicked();

	//Line Chart Controls
	void on_pushButton_line_clicked();
	void on_spinBox_lineChartHeight_valueChanged();
	void on_spinBox_lineChartWidth_valueChanged();
	void on_pushButton_lineColor_clicked();
	void on_horizontalSlider_lineThick_valueChanged();
	void on_pushButton_lineGlowColor_clicked();
	void on_horizontalSlider_lineGlowThick_valueChanged();
	void on_pushButton_lineXColor_clicked();
	void on_horizontalSlider_xTicks_valueChanged();
	void on_pushButton_lineYColor_clicked();
	void on_doubleSpinBox_yMin_valueChanged();
	void on_doubleSpinBox_yMax_valueChanged();
	void on_pushButton_lineLine_clicked();
	void on_pushButton_lineSpline_clicked();

	//Bar Chart Controls
	void on_pushButton_bar_clicked();
	void on_pushButton_barOverlay_clicked();
	void on_pushButton_barFill_clicked();
	void on_spinBox_barChartHeight_valueChanged();
	void on_spinBox_barChartWidth_valueChanged();
	void on_pushButton_barColor_clicked();
	void on_horizontalSlider_barWidth_valueChanged();
	void on_pushButton_barGlowColor_clicked();
	void on_horizontalSlider_barGlowWidth_valueChanged();
	void on_pushButton_barXColor_clicked();
	void on_pushButton_barYColor_clicked();
	void on_doubleSpinBox_yMinBarOverlay_valueChanged();
	void on_doubleSpinBox_yMaxBarOverlay_valueChanged();
	void on_pushButton_barMaskPrev_clicked();
	void on_pushButton_barMaskNext_clicked();
	void on_pushButton_barMask_clicked();

	void on_pushButton_barMaskColor_clicked();
	void on_spinBox_labelOffBar_valueChanged();
	void on_pushButton_barValue_clicked();
	void on_pushButton_barPercentage_clicked();
	
	//Window Control
	void on_pushButton_close_clicked();

signals:
	void sendBackDrop(cv::Mat bckdrp);
};
#endif // MEMEVIZ_H