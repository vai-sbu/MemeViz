#include "memeviz.h"
//QMessageBox::information(0, "info", QString("Changed"));

MemeViz::MemeViz(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	segM = new segMask(this);
	segM->setWindowFlags(Qt::FramelessWindowHint | Qt::Dialog);
	segM->hide();

	scene_meme = new SceneMeme(this);
	scene_preview = new QGraphicsScene(this);
	
	loaded_img = false;
	dataLoaded = false;
	maskSet = false;

	chart = 0;
	chartTitle = 0;
	chartType = Line;
	chartX = 10;
	chartY = 10;

	//Pie Chart Init
	pieType = Rad;
	pieRot = 180;
	ui.label_pieRad->setStyleSheet("background: rgb(240, 240, 240);");
	ui.label_pieAr->setStyleSheet("background: rgb(65, 65, 65);");

	pieColorButtons.push_back(ui.pushButton_pieColor_1);
	pieColorButtons.push_back(ui.pushButton_pieColor_2);
	pieColorButtons.push_back(ui.pushButton_pieColor_3);
	pieColorButtons.push_back(ui.pushButton_pieColor_4);
	pieColorButtons.push_back(ui.pushButton_pieColor_5);
	pieColorButtons.push_back(ui.pushButton_pieColor_6);
	pieColorButtons.push_back(ui.pushButton_pieColor_7);
	pieColorButtons.push_back(ui.pushButton_pieColor_8);
	pieColorButtons.push_back(ui.pushButton_pieColor_9);
	pieColorButtons.push_back(ui.pushButton_pieColor_10);
	pieColorButtons.push_back(ui.pushButton_pieColor_11);
	pieColorButtons.push_back(ui.pushButton_pieColor_12);
	pieColorButtons.push_back(ui.pushButton_pieColor_13);
	pieColorButtons.push_back(ui.pushButton_pieColor_14);
	pieColorButtons.push_back(ui.pushButton_pieColor_15);
	pieColorButtons.push_back(ui.pushButton_pieColor_16);
	pieColorButtons.push_back(ui.pushButton_pieColor_17);
	pieColorButtons.push_back(ui.pushButton_pieColor_18);
	pieColorButtons.push_back(ui.pushButton_pieColor_19);
	pieColorButtons.push_back(ui.pushButton_pieColor_20);

	for (int i = 0;i < pieColorButtons.size();i++)
	{
		pieColorButtons[i]->setVisible(false);
	}
	
	//Line Chart Init
	lineThick = 2;
	lineColor = QRgb(0x3675db);
	lineGlowThick = 4;
	lineGlowColor = QRgb(0x000000);
	lineGlowColor.setAlpha(150);
	xStep = 1;
	lineSpline = false;
	ui.label_lineLine->setStyleSheet("background: rgb(240, 240, 240);");
	ui.label_lineSpline->setStyleSheet("background: rgb(65, 65, 65);");

	//Bar Chart Init
	barThick = 1;
	barColor = QRgb(0x3675db);
	barGlowThick = 1;
	barGlowColor = QRgb(0x000000);
	barGlowColor.setAlpha(150);
	barOverlay = true;
	ui.label_barOverlay->setStyleSheet("background: rgb(240, 240, 240);");
	ui.label_barFill->setStyleSheet("background: rgb(65, 65, 65);");
	barPercentage = true;
	ui.label_barPercentage->setStyleSheet("background: rgb(240, 240, 240);");
	ui.label_barValue->setStyleSheet("background: rgb(65, 65, 65);");
	ui.groupBox_BarFill->setVisible(false);
	ui.groupBox_BarOverlay->setVisible(true);

	ui.graphicsView_viz_meme->setScene(scene_meme);
	ui.graphicsView_chart->setScene(scene_preview);

	ui.comboBoxPiFiltImg_2->addItem("None");
	ui.comboBoxPiFiltImg_2->addItem("Stylization");
	ui.comboBoxPiFiltImg_2->addItem("Smooth");
	ui.comboBoxPiFiltImg_2->addItem("Grayscale");	

	ui.label_pie->setVisible(false);
	ui.label_line->setVisible(true);
	ui.label_bar->setVisible(false);
	
	ui.groupBox_pie->setVisible(false);
	ui.groupBox_line->setVisible(true);
	ui.groupBox_bar->setVisible(false);
	
	ui.label_fontColor->setStyleSheet("background: rgb(0, 0, 0);");
	ui.label_fontFill->setStyleSheet("background: rgb(255, 255, 255);");
	ui.label_lineColor->setStyleSheet("background: rgb(54, 117, 219);");
	ui.label_lineGlowColor->setStyleSheet("background: rgb(0, 0, 0);");
	ui.label_lineXColor->setStyleSheet("background: rgb(240, 240, 240);");
	ui.label_lineYColor->setStyleSheet("background: rgb(240, 240, 240);");
	ui.label_barColor->setStyleSheet("background: rgb(54, 117, 219);");
	ui.label_barMaskColor->setStyleSheet("background: rgb(54, 117, 219);");
	ui.label_barGlowColor->setStyleSheet("background: rgb(0, 0, 0);");
	ui.label_barXColor->setStyleSheet("background: rgb(240, 240, 240);");
	ui.label_barYColor->setStyleSheet("background: rgb(240, 240, 240);");

	ui.graphicsView_viz_meme->setRenderHints(QPainter::HighQualityAntialiasing);
	ui.graphicsView_chart->setRenderHints(QPainter::Antialiasing);


	//Setup Thubnail list
	ui.listWidget->setMovement(QListView::Static);
	ui.listWidget->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
	ui.listWidget->setViewMode(QListView::IconMode);
	ui.listWidget->setWrapping(false);
	ui.listWidget->horizontalScrollBar()->setStyleSheet("QScrollBar:horizontal {border: none;background: rgb(104,104,104);height: 15px;margin: 0px 30px 0px 30px;} QScrollBar::handle:horizontal{background: gray; min-width: 20px;} QScrollBar::add-line:horizontal{background: none; border:none;} QScrollBar::sub-line:horizontal{background: none; border:none; } QScrollBar::add-page:horizontal, QScrollBar::sub-page:horizontal{background: none;}");

	move(30, 10);

	connect(this, SIGNAL(sendBackDrop(cv::Mat)),
		segM, SLOT(onNewImageLoaded(cv::Mat)));	
}

MemeViz::~MemeViz()
{

}

//Image Loading
cv::Mat qimage_to_mat_ref(QImage &im, int format)
{
	return cv::Mat(im.height(), im.width(), format, im.bits(), im.bytesPerLine());
}

QImage mat_to_qimage_ref(cv::Mat &mat, QImage::Format format)
{
	return QImage(mat.data, mat.cols, mat.rows, mat.step, format);
}

void MemeViz::on_loadButtonImg_clicked()
{
	//Loading file
	QString fname = QFileDialog::getOpenFileName(this, tr("Open File"), "C:/Users/Darius/Documents/MemeViz/", "Image files (*.png; *.jpg);");
	
	if (fname != NULL)
	{
		filt.setOrigBackdrop(load_img(fname.toLatin1().data()));
		img = load_img(fname.toLatin1().data());
		img.copyTo(filtimg);
		cv::Mat tmp;
		img.copyTo(tmp);

		QPixmap pix_backdrop;
		if (img.cols > ui.graphicsView_viz_meme->width() || img.rows > ui.graphicsView_viz_meme->height())
		{
			pix_backdrop = QPixmap::fromImage(mat_to_qimage_ref(tmp, QImage::Format_RGB888).rgbSwapped().scaled(ui.graphicsView_viz_meme->width(), ui.graphicsView_viz_meme->height(), Qt::KeepAspectRatio));
		}
		else
		{
			pix_backdrop = QPixmap::fromImage(mat_to_qimage_ref(tmp, QImage::Format_RGB888).rgbSwapped());
		}
		
		imgW = pix_backdrop.width();
		imgH = pix_backdrop.height();
		
		ui.spinBox_barChartWidth->setValue(imgW - imgW/3);
		ui.spinBox_lineChartWidth->setValue(imgW - imgW/3);
		ui.spinBox_barChartHeight->setValue(imgH - imgH/2);
		ui.spinBox_lineChartHeight->setValue(imgH - imgH/2);

		scene_meme->setOrigBackdrop(load_img(fname.toLatin1().data()), pix_backdrop);
		loaded_img = true;

		if (chartType == Line)
		{
			if (dataLoaded)
			{
				this->drawLineChart();			
				linearReg();
			}
		}
	}	
}

void MemeViz::imageSearch()
{
	QString val;
	ui.listWidget->clear();
	imgLinks.clear();
	//****************Make Google Image Search Request****************
	// create custom temporary event loop on stack
	QEventLoop eventLoopGoggle;

	// "quit()" the event-loop, when the network request "finished()"
	QNetworkAccessManager mgrGoogle;
	QObject::connect(&mgrGoogle, SIGNAL(finished(QNetworkReply*)), &eventLoopGoggle, SLOT(quit()));

	// the HTTP request
	QString query = QString::fromStdString(t_title);
	query.replace(" ", "+");	
	QNetworkRequest reqGoogle(QUrl(QString("https://www.googleapis.com/customsearch/v1?q=%1&cx=003390134866451521350%3Apuwyqnbwa6q&searchType=image&key=AIzaSyBXz0Crh5JnAL0FDzDXHNq7Kjjsv93Chds").arg(query)));
	QNetworkReply *replyGoogle = mgrGoogle.get(reqGoogle);
	eventLoopGoggle.exec(); // blocks stack until "finished()" has been called

	if (replyGoogle->error() == QNetworkReply::NoError) {
		//HTTP request success		
		val = QString(replyGoogle->readAll());		
		delete replyGoogle;
	}
	else {
		//HTTP request failure
		QMessageBox::information(0, "info", QString("Google Request Failed: %1").arg(replyGoogle->errorString()));
		delete replyGoogle;
	}
	
	//****************READ JSON REPLY****************
	
	//Load entire JSON Object:
	QJsonDocument resDoc = QJsonDocument::fromJson(val.toUtf8());
	QJsonObject resObj = resDoc.object();
	
	//Select results(items):
	QJsonValue itemsVal = resObj.value(QString("items"));
	QJsonArray itemsArr = itemsVal.toArray();

	//For each result:
	for (int i = 0; i < itemsArr.size(); i++)
	{
		QJsonValue val0 = itemsArr[i];
		QJsonObject obj0 = itemsArr[i].toObject();
		QJsonObject obj00 = obj0.value(QString("image")).toObject();
					
		// create custom temporary event loop on stack
		QEventLoop eventLoop;

		// "quit()" the event-loop, when the network request "finished()"
		QNetworkAccessManager mgr;
		QObject::connect(&mgr, SIGNAL(finished(QNetworkReply*)), &eventLoop, SLOT(quit()));

		// the HTTP request
		QNetworkRequest req(QUrl(obj00.value(QString("thumbnailLink")).toString()));
		req.setRawHeader("User-Agent", "Mozilla/5.0 (Windows NT 6.1) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/41.0.2228.0 Safari/537.36");
		QNetworkReply *reply = mgr.get(req);
		eventLoop.exec(); // blocks stack until "finished()" has been called

		if (reply->error() == QNetworkReply::NoError) {			
			//Store the link to the image.
			imgLinks.append(obj0.value(QString("link")).toString());
			
			//HTTP request success
			QPixmap thumbImg;
			if (thumbImg.loadFromData(reply->readAll()))
			{
				//Add the images to the thumbnail view
				QIcon ButtonIcon(thumbImg);
				ui.listWidget->setIconSize(QSize(180, 180));
				ui.listWidget->addItem(new QListWidgetItem(ButtonIcon, ""));
			}		
			delete reply;
		}
		else {
			//Store the error to the image list.
			imgLinks.append(reply->errorString());

			//HTTP request failure
			QPixmap thumbImg("D:/Memorable Visualization/IEEE TVCG/Code/MemeViz/MemeViz/404.png");
			//Add the images to the thumbnail view
			QIcon ButtonIcon(thumbImg);
			ui.listWidget->setIconSize(QSize(180, 180));
			ui.listWidget->addItem(new QListWidgetItem(ButtonIcon, "ERROR"));
			//QMessageBox::information(0, "info", QString("Failed %1").arg(reply->errorString()));
			delete reply;
		}
	}
}

void MemeViz::on_listWidget_itemClicked(QListWidgetItem * item)
{
	if (item->text() == "ERROR")
	{		
		int index = ui.listWidget->row(item);
		QMessageBox::information(0, "info", QString("Error: %1").arg(imgLinks[index]));
	}
	else
	{
		int index = ui.listWidget->row(item);
		// create custom temporary event loop on stack
		QEventLoop eventLoop;

		// "quit()" the event-loop, when the network request "finished()"
		QNetworkAccessManager mgr;
		QObject::connect(&mgr, SIGNAL(finished(QNetworkReply*)), &eventLoop, SLOT(quit()));

		// the HTTP request
		QNetworkRequest req(QUrl(imgLinks.at(index)));
		req.setRawHeader("User-Agent", "Mozilla/5.0 (Windows NT 6.1) AppleWebKit/537.36 (KHTML, like Gecko) Chrome/41.0.2228.0 Safari/537.36");
		QNetworkReply *reply = mgr.get(req);
		eventLoop.exec(); // blocks stack until "finished()" has been called

		if (reply->error() == QNetworkReply::NoError) 
		{
			//HTTP request success
			QPixmap tmpImg;
			if (tmpImg.loadFromData(reply->readAll()))
			{
				if (tmpImg.width() > ui.graphicsView_viz_meme->width() || tmpImg.height() > ui.graphicsView_viz_meme->height())
				{
					tmpImg = tmpImg.scaled(ui.graphicsView_viz_meme->width(), ui.graphicsView_viz_meme->height(), Qt::KeepAspectRatio);
				}				
				QImage tmp;
				tmp = tmpImg.toImage().convertToFormat(QImage::Format_RGB888).rgbSwapped();				
				filt.setOrigBackdrop(qimage_to_mat_ref(tmp, CV_8UC3));				
				qimage_to_mat_ref(tmp, CV_8UC3).copyTo(img);
				img.copyTo(filtimg);

				imgW = tmpImg.width();
				imgH = tmpImg.height();

				ui.spinBox_barChartWidth->setValue(imgW - imgW / 3);
				ui.spinBox_lineChartWidth->setValue(imgW - imgW / 3);
				ui.spinBox_barChartHeight->setValue(imgH - imgH / 2);
				ui.spinBox_lineChartHeight->setValue(imgH - imgH / 2);

				scene_meme->setOrigBackdrop(img, tmpImg);
				loaded_img = true;	

				if (chartType == Line)
				{
					if (dataLoaded & loaded_img)
					{
						linearReg();
					}
				}
			}
			delete reply;			
		}
		else 
		{
			QMessageBox::information(0, "info", QString("Failed: %1").arg(reply->errorString()));
			delete reply;
		}
	}		
}

//Meme Saving
void MemeViz::on_pushButton_save_clicked()
{
	if (loaded_img && dataLoaded)
	{
		QString fileName = QFileDialog::getSaveFileName(this, "Save image", "C:/Users/Darius/Documents/MemeViz/", "PNG (*.png);;JPEG (*.JPEG)");
		if (!fileName.isNull())
		{
			QImage image(scene_meme->sceneRect().size().toSize(), QImage::Format_ARGB32);
			QPainter painter(&image);
			painter.setRenderHint(QPainter::Antialiasing);
			scene_meme->render(&painter);
			image.save(fileName);
		}
	}
}

//Data Loading
void MemeViz::on_loadButtonData_clicked()
{
	yMax = -INFINITY;
	yMin = INFINITY;
	//Get file name (CSV only)
	QString fname = QFileDialog::getOpenFileName(this, tr("Oen File"), "C:/Users/Darius/Documents/MemeViz/", "CSV files (*.csv);");
	QFileInfo info1(fname);
	if (fname == NULL)
	{
		//No file selected
		QMessageBox::information(0, "info", "A file was not selected.");
	}
	else
	{
		ui.tableWidget->clear();
		ui.tableWidget->setRowCount(0);
		//Read CSV File
		t_title = info1.baseName().toStdString();
		CsvParser *csvparser = CsvParser_new(fname.toLatin1().data(), ",", 1);
		CsvRow *header;
		CsvRow *row;

		header = CsvParser_getHeader(csvparser);
		
		if (header == NULL) {
			QMessageBox::information(0, "info", CsvParser_getErrorMessage(csvparser));
		}		

		char **headerFields = CsvParser_getFields(header);
		if (CsvParser_getNumFields(header) > 2)
		{
			QMessageBox::information(0, "info", "Invalid Data. Data must have only two attributes");
		}
		else
		{
			t_attr.resize(CsvParser_getNumFields(header));
			ui.tableWidget->setColumnCount(CsvParser_getNumFields(header));
			QStringList headerLst;
			for (int i = 0; i < CsvParser_getNumFields(header); i++)
			{
				t_attr[i] = headerFields[i];
				headerLst.append(headerFields[i]);
			}

			ui.tableWidget->setHorizontalHeaderLabels(headerLst);
			CsvParser_destroy_row(header);
			
			int row_no = 0;
			
			while ((row = CsvParser_getRow(csvparser)))
			{
				char **rowFields = CsvParser_getFields(row);
				t_val.resize(row_no + 1);
				t_label.resize(row_no + 1);
				ui.tableWidget->insertRow(row_no);
				for (int i = 0; i < CsvParser_getNumFields(row); i++)
				{
					ui.tableWidget->setRowHeight(row_no, 20);
					ui.tableWidget->setItem(row_no, i, new QTableWidgetItem(QString(rowFields[i])));
				}
				t_label[row_no] = rowFields[0];
				t_val[row_no] = atof(rowFields[1]);				

				if (yMin > t_val[row_no])
				{
					yMin = t_val[row_no];
					barYMin = t_val[row_no];
				}
				if (yMax < t_val[row_no])
				{
					yMax = t_val[row_no];
					barYMax = t_val[row_no];
				}				
				row_no++;
				CsvParser_destroy_row(row);
			}
		}
		ui.doubleSpinBox_yMax->setValue(yMax);
		ui.doubleSpinBox_yMin->setValue(yMin);
		ui.doubleSpinBox_yMaxBarFill->setValue(barYMax);
		ui.doubleSpinBox_yMinBarFill->setValue(barYMin);
		ui.doubleSpinBox_yMaxBarOverlay->setValue(barYMax);
		ui.doubleSpinBox_yMinBarOverlay->setValue(barYMin);

		dataLoaded = true;
		ui.comboBoxBrewerNames->clear();
		if (t_val.size() < 20)
		{
			for (int i = 0; i < brewerNames.size(); i++)
			{
				for (int j = 0;j < brewer[i].size();j++)
				{
					if (brewer[i][j].size() == t_val.size())
					{
						ui.comboBoxBrewerNames->addItem(brewerNames[i]);
					}
				}
			}
			for (int i = 0;i < pieColorButtons.size();i++)
			{
				pieColorButtons[i]->setVisible(false);
			}
			for (int i = 0; i < t_val.size(); i++)
			{
				pieColorButtons[i]->setVisible(true);
				pieColorButtons[i]->setText(QString::number(i + 1));
				pieColorButtons[i]->setToolTip(QString::fromStdString(t_label[i]));
			}
		}
		//Draw Initial chart if Bar or Line is selected
		if (chartType == Bar)
		{
			this->drawBarChart();
		}
		else if(chartType == Line)
		{
			this->drawLineChart();
			if (loaded_img)
			{
				linearReg();
			}			
		}
		this->imageSearch();
	}
	//Create the chart title
	if (!chartTitle)
	{
		chartTitle = new TitleTextItem(QString::fromStdString(t_title));
		chartTitle->setZValue(1000);
		chartTitle->setFlag(QGraphicsItem::ItemIsSelectable, true);
		chartTitle->setFlag(QGraphicsItem::ItemIsMovable, true);
		chartTitle->setCursor(Qt::SizeAllCursor);
		chartTitle->setTextInteractionFlags(Qt::TextEditorInteraction);		
		scene_meme->addItem(chartTitle);
		scene_meme->addItem(chartTitle->getRect());		
	}
	else
	{
		chartTitle->setPlainText(QString::fromStdString(t_title));
	}	
}

void  MemeViz::linearReg()
{
	//***************Linear Regression***************
	double xsum = 0;
	double ysum = 0;
	double x2sum = 0;
	double xysum = 0;
	int n = t_val.size();
	for (int i = 0; i<n; i++)
	{
		double x = chart->mapToPosition(QPoint(i, t_val[i]), lineSeries).x();
		double y = chart->mapToPosition(QPoint(i, t_val[i]), lineSeries).y();
		xsum = xsum + x;
		ysum = ysum + y;
		x2sum = x2sum + pow(x, 2);
		xysum = xysum + x * y;
	}
	double slope =  -(n*xysum - xsum*ysum) / (n*x2sum - xsum*xsum);

	//***************Hough Lines***************
	cv::Mat dst, color_dst;
	
	cv::Canny(img, dst, 28, 240, 3);
	cvtColor(dst, color_dst, CV_GRAY2BGR);
	
	std::vector<cv::Vec2f> lines;
	HoughLines(dst, lines, 1, CV_PI / 180, 100);
	if (lines.size() > 0)
	{
		double tmp = INFINITY;
		int idx = 0;
		for (int i = 0; i < lines.size(); i++)
		{
			double tmpSlp = cos(lines[i][1]) / sin(lines[i][1]);
			if (abs(tmpSlp - slope) < tmp)
			{
				tmp = abs(tmpSlp - slope);
				idx = i;
			}
		}

		float rho = lines[idx][0];
		float theta = lines[idx][1];
		double a = cos(theta), b = sin(theta);
		double x0 = a*rho, y0 = b*rho;
		double m = -a / b;
		double c = (y0 - m*x0);
		double xTop = -c / m;
		double yTop = 0;
		double xBot = (imgH - c) / m;
		double yBot = imgH;
		double xLeft = 0;
		double yLeft = c;
		double xRight = imgW;
		double yRight = m*imgW + c;

		std::vector<CvPoint> pts;
		if (xTop >= 0 && xTop <= imgW)
		{
			pts.push_back(cv::Point(xTop, yTop));
		}
		if (xBot >= 0 && xBot <= imgW)
		{
			pts.push_back(cv::Point(xBot, yBot));
		}
		if (yLeft >= 0 && yLeft <= imgH)
		{
			pts.push_back(cv::Point(xLeft, yLeft));
		}
		if (yRight >= 0 && yRight <= imgH)
		{
			pts.push_back(cv::Point(xRight, yRight));
		}

		double MidX = (pts[0].x + pts[1].x) / 2;
		double MidY = (pts[0].y + pts[1].y) / 2;

		//cv::line(color_dst, pts[0], pts[1], cv::Scalar(0, 255, 0), 3, 8);	
		//cv::namedWindow("Detected Lines", 1);
		//cv::imshow("Detected Lines", color_dst);

		chartX = MidX - (ui.spinBox_lineChartWidth->value() / 2);
		chartY = MidY - (ui.spinBox_lineChartHeight->value() / 2);

		chart->setPos(QPoint(chartX, chartY));
	}
	//QMessageBox::information(0, "info", QString("Failed: %1").arg(chartX));
}

//Image Filtering
void MemeViz::on_comboBoxPiFiltImg_2_currentIndexChanged(const QString & text)
{
	if (loaded_img)
	{
		if (text == "None")
		{
			filt.none().copyTo(filtimg);
			scene_meme->setCurrentBackdrop(filtimg);
			QPixmap filt_backdrop = QPixmap::fromImage(mat_to_qimage_ref(filtimg.clone(), QImage::Format_RGB888).rgbSwapped());
			scene_meme->refreshBackrop(filt_backdrop);
			if (maskSet && chartType == Pie)
			{
				QPixmap pix_viz = QPixmap::fromImage(mat_to_qimage_ref(this->fillPie(), QImage::Format_RGB888).rgbSwapped());
				scene_meme->refreshBackrop(pix_viz);
			}
			if (!barOverlay && chartType == Bar)
			{
				scene_meme->setCurrentBackdrop(filtimg);
				QPixmap pix_viz = QPixmap::fromImage(mat_to_qimage_ref(scene_meme->getCurrentBackdrop(), QImage::Format_RGB888).rgbSwapped());
				scene_meme->refreshBackrop(pix_viz);
				scene_meme->removePieLabels();
				for (int i = 0; i < barMasksSet.size(); i++)
				{
					if (barMasksSet[i])
					{
						this->fillBarChart(i);
					}
				}
				QPixmap filt_backdrop = QPixmap::fromImage(mat_to_qimage_ref(scene_meme->getCurrentBackdrop(), QImage::Format_RGB888).rgbSwapped());
				scene_meme->refreshBackrop(filt_backdrop);
			}
		}
		else if (text == "Stylization")
		{
			filt.styliz().copyTo(filtimg);
			scene_meme->setCurrentBackdrop(filtimg);
			QPixmap filt_backdrop = QPixmap::fromImage(mat_to_qimage_ref(filtimg.clone(), QImage::Format_RGB888).rgbSwapped());
			scene_meme->refreshBackrop(filt_backdrop);
			if (maskSet && chartType == Pie)
			{				
				QPixmap pix_viz = QPixmap::fromImage(mat_to_qimage_ref(this->fillPie(), QImage::Format_RGB888).rgbSwapped());
				scene_meme->refreshBackrop(pix_viz);
			}
			if (!barOverlay && chartType == Bar)
			{
				scene_meme->setCurrentBackdrop(filtimg);
				QPixmap pix_viz = QPixmap::fromImage(mat_to_qimage_ref(scene_meme->getCurrentBackdrop(), QImage::Format_RGB888).rgbSwapped());
				scene_meme->refreshBackrop(pix_viz);
				scene_meme->removePieLabels();
				for (int i = 0; i < barMasksSet.size(); i++)
				{
					if (barMasksSet[i])
					{
						this->fillBarChart(i);
					}
				}
				QPixmap filt_backdrop = QPixmap::fromImage(mat_to_qimage_ref(scene_meme->getCurrentBackdrop(), QImage::Format_RGB888).rgbSwapped());
				scene_meme->refreshBackrop(filt_backdrop);
			}
		}
		else if (text == "Grayscale")
		{
			filt.grayscale().copyTo(filtimg);
			scene_meme->setCurrentBackdrop(filtimg);
			QPixmap filt_backdrop = QPixmap::fromImage(mat_to_qimage_ref(filtimg.clone(), QImage::Format_RGB888).rgbSwapped());
			scene_meme->refreshBackrop(filt_backdrop);
			if (maskSet && chartType == Pie)
			{
				QPixmap pix_viz = QPixmap::fromImage(mat_to_qimage_ref(this->fillPie(), QImage::Format_RGB888).rgbSwapped());
				scene_meme->refreshBackrop(pix_viz);
			}
			if (!barOverlay && chartType == Bar)
			{
				scene_meme->setCurrentBackdrop(filtimg);
				QPixmap pix_viz = QPixmap::fromImage(mat_to_qimage_ref(scene_meme->getCurrentBackdrop(), QImage::Format_RGB888).rgbSwapped());
				scene_meme->refreshBackrop(pix_viz);
				scene_meme->removePieLabels();
				for (int i = 0; i < barMasksSet.size(); i++)
				{
					if (barMasksSet[i])
					{
						this->fillBarChart(i);
					}
				}
				QPixmap filt_backdrop = QPixmap::fromImage(mat_to_qimage_ref(scene_meme->getCurrentBackdrop(), QImage::Format_RGB888).rgbSwapped());
				scene_meme->refreshBackrop(filt_backdrop);
			}
		}
		else if (text == "Smooth")
		{
			filt.smooth().copyTo(filtimg);
			scene_meme->setCurrentBackdrop(filtimg);
			QPixmap filt_backdrop = QPixmap::fromImage(mat_to_qimage_ref(filtimg.clone(), QImage::Format_RGB888).rgbSwapped());
			scene_meme->refreshBackrop(filt_backdrop);
			if (maskSet && chartType == Pie)
			{
				QPixmap pix_viz = QPixmap::fromImage(mat_to_qimage_ref(this->fillPie(), QImage::Format_RGB888).rgbSwapped());
				scene_meme->refreshBackrop(pix_viz);
			}
			if (!barOverlay && chartType == Bar)
			{
				scene_meme->setCurrentBackdrop(filtimg);
				QPixmap pix_viz = QPixmap::fromImage(mat_to_qimage_ref(scene_meme->getCurrentBackdrop(), QImage::Format_RGB888).rgbSwapped());
				scene_meme->refreshBackrop(pix_viz);
				scene_meme->removePieLabels();
				for (int i = 0; i < barMasksSet.size(); i++)
				{
					if (barMasksSet[i])
					{
						this->fillBarChart(i);
					}
				}
				QPixmap filt_backdrop = QPixmap::fromImage(mat_to_qimage_ref(scene_meme->getCurrentBackdrop(), QImage::Format_RGB888).rgbSwapped());
				scene_meme->refreshBackrop(filt_backdrop);
			}
		}		
	}
}

void MemeViz::on_pushButton_clear_clicked()
{
	scene_meme->clearBack();
}

//Text Editing
void MemeViz::on_pushButton_fontColor_clicked()
{
	if (chartTitle->isSelected())
	{
		QColor color = QColorDialog::getColor(chartTitle->defaultTextColor(), this, "Text Color");
		if (color.isValid())
		{
			QString style = "background: rgb(%1, %2, %3);";
			style = style.arg(color.red()).arg(color.green()).arg(color.blue());
			ui.label_fontColor->setStyleSheet(style);
			chartTitle->setDefaultTextColor(color);
		}
	}
	else if (chart->isSelected())
	{
		QColor color = QColorDialog::getColor(chart->axisX()->labelsColor(), this, "Text Color");
		if (color.isValid())
		{
			QString style = "background: rgb(%1, %2, %3);";
			style = style.arg(color.red()).arg(color.green()).arg(color.blue());
			ui.label_fontColor->setStyleSheet(style);
			chart->axisX()->setLabelsColor(color);
			chart->axisY()->setLabelsColor(color);
		}
	}
	else
	{
		QList<QGraphicsItem *> items = scene_meme->selectedItems();
		if (items.count() > 0)
		{
			QColor color = Qt::black;
			if (items[0]->type() == QGraphicsTextItem::Type)
			{
				QGraphicsTextItem* tmp = (QGraphicsTextItem*)items[0];
				color = QColorDialog::getColor(tmp->defaultTextColor(), this, "Text Color");
			}			
			for (int i = 0; i < items.count(); ++i)
			{
				if (items[i]->type() == QGraphicsTextItem::Type)
				{
					//QMessageBox::information(0, "info", QString("%1").arg(items.count()));
					QGraphicsTextItem* tmp = (QGraphicsTextItem*)items[i];
					QString style = "background: rgb(%1, %2, %3);";
					style = style.arg(color.red()).arg(color.green()).arg(color.blue());
					ui.label_fontColor->setStyleSheet(style);
					tmp->setDefaultTextColor(color);
				}
			}
		}
	}
}

void MemeViz::on_pushButton_fontFill_clicked()
{
	if (chartTitle->isSelected())
	{
		QColor color = QColorDialog::getColor(chartTitle->getFillColor(), this, "Text Color");
		if (color.isValid())
		{
			QString style = "background: rgb(%1, %2, %3);";
			style = style.arg(color.red()).arg(color.green()).arg(color.blue());
			ui.label_fontFill->setStyleSheet(style);
			color.setAlpha(ui.horizontalSlider_textFillOpac->value());
			chartTitle->setFillColor(color);
		}
	}
}

void MemeViz::on_pushButton_fontItalics_clicked()
{
	if (chartTitle->isSelected())
	{
		if (textFont.italic())
		{
			textFont.setItalic(false);
		}
		else
		{
			textFont.setItalic(true);
		}
		chartTitle->updateFont(textFont);
	}
	else if (chart->isSelected())
	{
		if (textFont.italic())
		{
			textFont.setItalic(false);
		}
		else
		{
			textFont.setItalic(true);
		}
		chart->axisX()->setLabelsFont(textFont);
		chart->axisY()->setLabelsFont(textFont);
	}
	else
	{
		if (textFont.italic())
		{
			textFont.setItalic(false);
		}
		else
		{
			textFont.setItalic(true);
		}
		QList<QGraphicsItem *> items = scene_meme->selectedItems();
		
		for (int i = 0; i<items.count(); ++i)
		{
			if (items[i]->type() == QGraphicsTextItem::Type)
			{
				//QMessageBox::information(0, "info", QString("%1").arg(items.count()));
				QGraphicsTextItem* tmp = (QGraphicsTextItem*)items[i];
				tmp->setFont(textFont);
			}
		}
	}
}

void MemeViz::on_pushButton_fontBold_clicked()
{
	if (chartTitle->isSelected())
	{
		if (textFont.bold())
		{
			textFont.setBold(false);
		}
		else
		{
			textFont.setBold(true);
		}
		chartTitle->updateFont(textFont);
	}
	else if (chart->isSelected())
	{
		if (textFont.bold())
		{
			textFont.setBold(false);
		}
		else
		{
			textFont.setBold(true);
		}
		chart->axisX()->setLabelsFont(textFont);
		chart->axisY()->setLabelsFont(textFont);
	}
	else
	{
		if (textFont.bold())
		{
			textFont.setBold(false);
		}
		else
		{
			textFont.setBold(true);
		}
		QList<QGraphicsItem *> items = scene_meme->selectedItems();
		
		for (int i = 0; i<items.count(); ++i)
		{
			if (items[i]->type() == QGraphicsTextItem::Type)
			{
				//QMessageBox::information(0, "info", QString("%1").arg(items.count()));
				QGraphicsTextItem* tmp = (QGraphicsTextItem*)items[i];
				tmp->setFont(textFont);
			}
		}
	}
}

void MemeViz::on_fontComboBox_fontFamily_currentFontChanged()
{	
	if (chartTitle->isSelected())
	{
		textFont.setFamily(ui.fontComboBox_fontFamily->currentText());
		chartTitle->updateFont(textFont);
	}
	else if (chart->isSelected())
	{
		textFont.setFamily(ui.fontComboBox_fontFamily->currentText());
		chart->axisX()->setLabelsFont(textFont);
		chart->axisY()->setLabelsFont(textFont);
	}
	else
	{
		QList<QGraphicsItem *> items = scene_meme->selectedItems();

		for (int i = 0; i<items.count(); ++i)
		{
			if (items[i]->type() == QGraphicsTextItem::Type)
			{
				//QMessageBox::information(0, "info", QString("%1").arg(items.count()));
				QGraphicsTextItem* tmp = (QGraphicsTextItem*)items[i];
				textFont.setFamily(ui.fontComboBox_fontFamily->currentText());
				tmp->setFont(textFont);
			}
		}
	}
}

void MemeViz::on_spinBox_fontSize_valueChanged()
{
	if (chartTitle->isSelected())
	{	
		textFont.setPointSize(ui.spinBox_fontSize->value());
		chartTitle->updateFont(textFont);
	}
	else if (chart->isSelected())
	{	
		textFont.setPointSize(ui.spinBox_fontSize->value());
		chart->axisX()->setLabelsFont(textFont);
		chart->axisY()->setLabelsFont(textFont);
	}
	else
	{	
		QList<QGraphicsItem *> items = scene_meme->selectedItems();

		for (int i = 0; i<items.count(); ++i)
		{
			if (items[i]->type() == QGraphicsTextItem::Type)
			{
				//QMessageBox::information(0, "info", QString("%1").arg(items.count()));
				QGraphicsTextItem* tmp = (QGraphicsTextItem*)items[i];
				textFont.setPointSize(ui.spinBox_fontSize->value());
				tmp->setFont(textFont);
			}
		}
	}
}

void MemeViz::on_horizontalSlider_textFillOpac_valueChanged()
{
	if (chartTitle->isSelected())
	{
		QColor color = chartTitle->getFillColor();
		if (color.isValid())
		{
			QString style = "background: rgb(%1, %2, %3);";
			style = style.arg(color.red()).arg(color.green()).arg(color.blue());
			ui.label_fontFill->setStyleSheet(style);
			color.setAlpha(ui.horizontalSlider_textFillOpac->value());
			chartTitle->setFillColor(color);
		}
	}	
}
 
//Mask Creation
void MemeViz::on_pushButton_createMask_clicked()
{
	segM->show();
	segM->activateWindow();
	emit this->sendBackDrop(img);
}

void MemeViz::on_pushButton_barMask_clicked()
{
	segM->show();
	segM->activateWindow();
	emit this->sendBackDrop(img);
}

void MemeViz::recieveMask(cv::Mat msk)
{
	if (chartType == Pie)
	{
		cv::Mat bckdrp;
		msk.copyTo(bckdrp);
		msk.copyTo(mask);
		maskSet = true;
		cv::compare(bckdrp, cv::GC_PR_FGD, bckdrp, cv::CMP_EQ);
		cv::threshold(bckdrp, bckdrp, 100, 255, cv::THRESH_BINARY);
		cv::cvtColor(bckdrp, bckdrp, CV_GRAY2RGB);
		QPixmap pix_backdrop = QPixmap::fromImage(mat_to_qimage_ref(bckdrp, QImage::Format_RGB888).rgbSwapped());
		ui.labelimg->setPixmap(pix_backdrop);
		cv::compare(mask, cv::GC_PR_FGD, mask, cv::CMP_EQ);
		cv::threshold(mask, mask, 100, 255, cv::THRESH_BINARY);
		this->computePieAngles();
		QPixmap pix_viz = QPixmap::fromImage(mat_to_qimage_ref(this->fillPie(), QImage::Format_RGB888).rgbSwapped());
		scene_meme->refreshBackrop(pix_viz);
	}	
	if (chartType == Bar)
	{
		cv::Mat bckdrp;
		msk.copyTo(bckdrp);
		msk.copyTo(barMasks[barMaskIdx]);
		barMasksSet[barMaskIdx] = true;
		cv::compare(bckdrp, cv::GC_PR_FGD, bckdrp, cv::CMP_EQ);
		cv::threshold(bckdrp, bckdrp, 100, 255, cv::THRESH_BINARY);
		cv::cvtColor(bckdrp, bckdrp, CV_GRAY2RGB);
		QPixmap pix_backdrop = QPixmap::fromImage(mat_to_qimage_ref(bckdrp, QImage::Format_RGB888).rgbSwapped());
		ui.label_barMask->setPixmap(pix_backdrop);
		cv::compare(barMasks[barMaskIdx], cv::GC_PR_FGD, barMasks[barMaskIdx], cv::CMP_EQ);
		cv::threshold(barMasks[barMaskIdx], barMasks[barMaskIdx], 100, 255, cv::THRESH_BINARY);
		
		scene_meme->setCurrentBackdrop(filtimg);
		QPixmap pix_viz = QPixmap::fromImage(mat_to_qimage_ref(scene_meme->getCurrentBackdrop(), QImage::Format_RGB888).rgbSwapped());
		scene_meme->refreshBackrop(pix_viz);
		scene_meme->removePieLabels();
		for (int i = 0; i < barMasksSet.size(); i++)
		{
			if (barMasksSet[i])
			{
				this->fillBarChart(i);
			}
		}
		QPixmap filt_backdrop = QPixmap::fromImage(mat_to_qimage_ref(scene_meme->getCurrentBackdrop(), QImage::Format_RGB888).rgbSwapped());
		scene_meme->refreshBackrop(filt_backdrop);
	}
}

//Pie Chart
void MemeViz::on_pushButton_pie_clicked()
{
	if (t_val.size() < 20)
	{
		chartType = Pie;
		ui.label_pie->setVisible(true);
		ui.label_line->setVisible(false);
		ui.label_bar->setVisible(false);
		ui.groupBox_pie->setVisible(true);
		ui.groupBox_line->setVisible(false);
		ui.groupBox_bar->setVisible(false);

		if (chartAdded)
		{
			chartAdded = false;
			scene_meme->removeItem(chart);
		}
		drawPieChart();
	}
	else
	{
		QMessageBox::information(0, "Alert", QString("Too many items for a pie chart."));
	}
}

void MemeViz::on_pushButton_pieRad_clicked()
{
	ui.label_pieRad->setStyleSheet("background: rgb(240, 240, 240);");
	ui.label_pieAr->setStyleSheet("background: rgb(65, 65, 65);");
	pieType = Rad;
	if (loaded_img)
	{
		this->computePieAngles();
		QPixmap pix_viz = QPixmap::fromImage(mat_to_qimage_ref(this->fillPie(), QImage::Format_RGB888).rgbSwapped());
		scene_meme->refreshBackrop(pix_viz);
	}
}

void MemeViz::on_pushButton_pieAr_clicked()
{
	ui.label_pieAr->setStyleSheet("background: rgb(240, 240, 240);");
	ui.label_pieRad->setStyleSheet("background: rgb(65, 65, 65);");
	pieType = Area;
	if (loaded_img)
	{
		this->computePieAngles();
		QPixmap pix_viz = QPixmap::fromImage(mat_to_qimage_ref(this->fillPie(), QImage::Format_RGB888).rgbSwapped());
		scene_meme->refreshBackrop(pix_viz);
	}
}

void MemeViz::on_horizontalSlider_pieAng_valueChanged()
{
	pieRot = ui.horizontalSlider_pieAng->value();
	QPixmap pix_viz = QPixmap::fromImage(mat_to_qimage_ref(this->fillPie(), QImage::Format_RGB888).rgbSwapped());
	scene_meme->refreshBackrop(pix_viz);
}

void MemeViz::on_spinBox_pieLabelRad_valueChanged()
{
	QPixmap pix_viz = QPixmap::fromImage(mat_to_qimage_ref(this->fillPie(), QImage::Format_RGB888).rgbSwapped());
	scene_meme->refreshBackrop(pix_viz);
}

void MemeViz::on_spinBox_pieOriginOffX_valueChanged()
{
	if (loaded_img)
	{
		this->computePieAngles();
		QPixmap pix_viz = QPixmap::fromImage(mat_to_qimage_ref(this->fillPie(), QImage::Format_RGB888).rgbSwapped());
		scene_meme->refreshBackrop(pix_viz);
	}
}

void MemeViz::on_spinBox_pieOriginOffY_valueChanged()
{
	if (loaded_img)
	{
		this->computePieAngles();
		QPixmap pix_viz = QPixmap::fromImage(mat_to_qimage_ref(this->fillPie(), QImage::Format_RGB888).rgbSwapped());
		scene_meme->refreshBackrop(pix_viz);
	}
}

void MemeViz::drawPieChart()
{
	if (chartPrwAdded)
	{
		chartPrwAdded = false;
		scene_preview->removeItem(chartpreview);
		chartpreview = 0;
	}

	QtCharts::QPieSeries *series = new QtCharts::QPieSeries();

	for (int i = 0; i < t_val.size(); i++)
	{
		series->append(QString::fromStdString(t_label[i]), t_val[i]);
	}

	series->setLabelsVisible(true);
	series->setPieSize(0.6);

	chartpreview = new QtCharts::QChart();
	chartpreview->setPreferredSize(260, 180);
	chartpreview->addSeries(series);
	chartpreview->setAnimationOptions(QtCharts::QChart::SeriesAnimations);
	chartpreview->createDefaultAxes();	
	chartpreview->setMargins(QMargins(0, 0, 0, 0));
	chartpreview->legend()->hide();
	chartpreview->setBackgroundVisible(false);

	scene_preview->addItem(chartpreview);
	chartPrwAdded = true;
}

void MemeViz::computePieAngles()
{
	cv::Mat src2;
	int thresh = 100;
	int max_thresh = 255;
	// Convert image to gray and blur it

	cvtColor(mask, src2, CV_GRAY2RGB);

	cv::Mat threshold_output;
	std::vector<std::vector<cv::Point> > contours;
	std::vector<cv::Vec4i> hierarchy;

	// Detect edges using Threshold
	threshold(mask, threshold_output, thresh, 255, cv::THRESH_BINARY);
	// Find contours
	findContours(threshold_output, contours, hierarchy, CV_RETR_TREE, CV_CHAIN_APPROX_SIMPLE, cv::Point(0, 0));

	// Approximate contours to polygons + get bounding rects and circles
	std::vector<std::vector<cv::Point> > contours_poly(contours.size());
	std::vector<cv::Point2f>center(contours.size());
	std::vector<float>radius(contours.size());

	int b = 0;
	double ar = 0.0;
	for (int i = 0; i < contours.size(); i++)
	{
		approxPolyDP(cv::Mat(contours[i]), contours_poly[i], 3, true);
		minEnclosingCircle((cv::Mat)contours_poly[i], center[i], radius[i]);
		if (ar< contourArea(contours[i]))
		{
			ar = contourArea(contours[i]);
			b = i;
		}
	}

	// Draw biggest contour 
	cv::Mat drawing = cv::Mat::zeros(threshold_output.size(), CV_8UC3);
	src2 = cv::Mat::zeros(src2.size(), CV_8UC3);
	drawContours(src2, contours, b, cv::Scalar(255, 255, 255), -2, 8, hierarchy, 0, cv::Point());

	double total = 0;

	for (int j = 0; j<t_val.size(); j++)
	{
		total = total + t_val[j];
	}

	angles.clear();
	
	pieCenter = center[b];
	pieCenter.x = pieCenter.x + ui.spinBox_pieOriginOffX->value();
	pieCenter.y = pieCenter.y + ui.spinBox_pieOriginOffY->value();

	//Compute Angles 
	if (pieType == Area)
	{
		//Based on area
		double area = contourArea(contours[b]);
		double offset = 0.0;
		cv::Mat drawing_tmp = cv::Mat::zeros(threshold_output.size(), CV_8UC3);
		for (int j = 0; j < t_val.size(); j++)
		{
			drawing_tmp = cv::Mat::zeros(threshold_output.size(), CV_8UC3);
			drawing = cv::Mat::zeros(threshold_output.size(), CV_8UC3);
			double start = offset;
			double stop = start + 0.5;
			double area_tmp = 0.0;
			angles.push_back(offset);
			while (area_tmp < (area*t_val[j] / total))
			{
				drawing_tmp = cv::Mat::zeros(threshold_output.size(), CV_8UC3);
				drawing = cv::Mat::zeros(threshold_output.size(), CV_8UC3);
				ellipse(drawing, pieCenter, cv::Size((int)radius[b]*2, (int)radius[b]*2), 0, start, stop, cv::Scalar(255, 255, 255), -2, 8, 0);
				drawing.copyTo(drawing_tmp, src2);
				cvtColor(drawing_tmp, drawing_tmp, CV_BGR2GRAY);
				threshold(drawing_tmp, threshold_output, thresh, 255, cv::THRESH_BINARY);
				findContours(threshold_output, contours, hierarchy, CV_RETR_TREE, CV_CHAIN_APPROX_SIMPLE, cv::Point(0, 0));
				stop = stop + 0.5;
				area_tmp = contourArea(contours[0]);
			}
			offset = stop - 0.5;
		}
	}
	else if (pieType == Rad)
	{
		//Based on Angles
		double offset = 0.0;
		for (int j = 0; j<t_val.size(); j++)
		{
			angles.push_back(offset);
			offset = offset + (t_val[j] * 360 / total);
		}
	}

	cvtColor(src2, mask, CV_RGB2GRAY);
}

cv::Mat MemeViz::fillPie()
{
	cv::Mat image(filtimg.size(), CV_8UC3);
	filtimg.copyTo(image);
	angles.push_back(360);
	//draw a piechart based on the angles computed
	cv::Mat drawing(filtimg.size(), CV_8UC3, cv::Scalar(0, 0, 0));
	cv::Point pt;
	pt.x = pieCenter.x;
	pt.y = pieCenter.y;	
	cv::RNG rng(12345);
	for (int j = 0; j<t_val.size(); j++)
	{
		cv::Scalar color = cv::Scalar(pieColors[j].red(), pieColors[j].green(), pieColors[j].blue());
		double start = angles[j] + pieRot;
		double stop = angles[j + 1] + pieRot;
		ellipse(drawing, pt, cv::Size(filtimg.cols, filtimg.cols), 0, start, stop, color, -2, 8, 0);;
	}

	//Use the mask to cut out the piechart
	cv::Mat foreground(filtimg.size(), CV_8UC3, cv::Scalar(0, 0, 0));
	drawing.copyTo(foreground, mask);
		
	//Merge the chart with the image in LAB color space
	cvtColor(image, image, CV_BGR2Lab);
	cvtColor(foreground, foreground, CV_RGB2Lab);

	for (int x = 0; x < mask.rows; x++)
	{
		for (int y = 0; y < mask.cols; y++)
		{
			cv::Vec3b intensity = foreground.at<cv::Vec3b>(x, y);
			if (intensity.val[0] != 0)
			{
				image.at<cv::Vec3b>(x, y).val[1] = intensity.val[1];
				image.at<cv::Vec3b>(x, y).val[2] = intensity.val[2];
			}
		}
	}

	cvtColor(image, image, CV_Lab2BGR);

	// Labelling the chart
	scene_meme->removePieLabels();

	QGraphicsTextItem *tmp;
	double txtAng = 0;
	for (int i = 0; i < t_val.size(); i++)
	{
		tmp = new QGraphicsTextItem(QString::fromStdString(t_label[i]) + ": " + QString("%1").arg(t_val[i]) + "%");
		tmp->setZValue(600);
		txtAng = (angles[i] + pieRot + angles[i + 1] + pieRot) / 2;
		txtAng = (txtAng * PI) / 180.0;		
		int txtRad = ui.spinBox_pieLabelRad->value();;
		double x, y;
		if (txtAng >= 2 * PI)
		{
			txtAng = txtAng - floor(txtAng / PI)*PI;
		}
		if (txtAng > PI / 2 && txtAng < 3 * PI / 2)
		{
			x = pieCenter.x + txtRad * cos(txtAng) - tmp->boundingRect().width();
		}
		else
		{
			x = pieCenter.x + txtRad * cos(txtAng);
		}
		if (txtAng > 0 && txtAng < PI)
		{
			y = pieCenter.y + txtRad * sin(txtAng);
		}
		else
		{
			y = pieCenter.y + txtRad * sin(txtAng) - tmp->boundingRect().height();
		}
		tmp->setPos(QPointF(x, y));
		tmp->setFlag(QGraphicsItem::ItemIsSelectable, true);
		tmp->setFlag(QGraphicsItem::ItemIsMovable, true);
		scene_meme->addItem(tmp);
	}
	return image;
}

void MemeViz::on_comboBoxBrewerNames_currentIndexChanged(const QString & text)
{
	if(QString::compare(text, "", Qt::CaseInsensitive))
	{
		std::vector<char*>::iterator it;
		it = std::find(brewerNames.begin(), brewerNames.end(), text.toStdString());
		int pos = std::distance(brewerNames.begin(), it);
	
		for (int i = 0; i < brewer[pos].size(); i++)
		{
			if (brewer[pos][i].size() == t_val.size())
			{
				pieColors.clear();
				for (int j = 0; j < brewer[pos][i].size();j++)
				{
					QColor color = brewer[pos][i][j];
					pieColors.push_back(color);
					QString style = "border-style: none;background-color: rgb(%1, %2, %3);";
					style = style.arg(color.red()).arg(color.green()).arg(color.blue());
					pieColorButtons[j]->setStyleSheet(style);
				}
				break;
			}
		}
		if (loaded_img && maskSet)
		{
			QPixmap pix_viz = QPixmap::fromImage(mat_to_qimage_ref(this->fillPie(), QImage::Format_RGB888).rgbSwapped());
			scene_meme->refreshBackrop(pix_viz);
		}
	}
}

void MemeViz::on_pushButton_pieColor_1_clicked()
{
	QColor color = QColorDialog::getColor(pieColors[0], this, "Text Color");
	QString style = "border-style: none;background-color: rgb(%1, %2, %3);";
	style = style.arg(color.red()).arg(color.green()).arg(color.blue());
	ui.pushButton_pieColor_1->setStyleSheet(style);
	pieColors[0] = color;
	QPixmap pix_viz = QPixmap::fromImage(mat_to_qimage_ref(this->fillPie(), QImage::Format_RGB888).rgbSwapped());
	scene_meme->refreshBackrop(pix_viz);
}

void MemeViz::on_pushButton_pieColor_2_clicked()
{
	QColor color = QColorDialog::getColor(pieColors[1], this, "Text Color");
	QString style = "border-style: none;background-color: rgb(%1, %2, %3);";
	style = style.arg(color.red()).arg(color.green()).arg(color.blue());
	ui.pushButton_pieColor_2->setStyleSheet(style);
	pieColors[1] = color;
	QPixmap pix_viz = QPixmap::fromImage(mat_to_qimage_ref(this->fillPie(), QImage::Format_RGB888).rgbSwapped());
	scene_meme->refreshBackrop(pix_viz);
}

void MemeViz::on_pushButton_pieColor_3_clicked()
{
	QColor color = QColorDialog::getColor(pieColors[2], this, "Text Color");
	QString style = "border-style: none;background-color: rgb(%1, %2, %3);";
	style = style.arg(color.red()).arg(color.green()).arg(color.blue());
	ui.pushButton_pieColor_3->setStyleSheet(style);
	pieColors[2] = color;
	QPixmap pix_viz = QPixmap::fromImage(mat_to_qimage_ref(this->fillPie(), QImage::Format_RGB888).rgbSwapped());
	scene_meme->refreshBackrop(pix_viz);
}

void MemeViz::on_pushButton_pieColor_4_clicked()
{
	QColor color = QColorDialog::getColor(pieColors[3], this, "Text Color");
	QString style = "border-style: none;background-color: rgb(%1, %2, %3);";
	style = style.arg(color.red()).arg(color.green()).arg(color.blue());
	ui.pushButton_pieColor_4->setStyleSheet(style);
	pieColors[3] = color;
	QPixmap pix_viz = QPixmap::fromImage(mat_to_qimage_ref(this->fillPie(), QImage::Format_RGB888).rgbSwapped());
	scene_meme->refreshBackrop(pix_viz);
}

void MemeViz::on_pushButton_pieColor_5_clicked()
{
	QColor color = QColorDialog::getColor(pieColors[4], this, "Text Color");
	QString style = "border-style: none;background-color: rgb(%1, %2, %3);";
	style = style.arg(color.red()).arg(color.green()).arg(color.blue());
	ui.pushButton_pieColor_5->setStyleSheet(style);
	pieColors[4] = color;
	QPixmap pix_viz = QPixmap::fromImage(mat_to_qimage_ref(this->fillPie(), QImage::Format_RGB888).rgbSwapped());
	scene_meme->refreshBackrop(pix_viz);
}

void MemeViz::on_pushButton_pieColor_6_clicked()
{
	QColor color = QColorDialog::getColor(pieColors[5], this, "Text Color");
	QString style = "border-style: none;background-color: rgb(%1, %2, %3);";
	style = style.arg(color.red()).arg(color.green()).arg(color.blue());
	ui.pushButton_pieColor_6->setStyleSheet(style);
	pieColors[5] = color;
	QPixmap pix_viz = QPixmap::fromImage(mat_to_qimage_ref(this->fillPie(), QImage::Format_RGB888).rgbSwapped());
	scene_meme->refreshBackrop(pix_viz);
}

void MemeViz::on_pushButton_pieColor_7_clicked()
{
	QColor color = QColorDialog::getColor(pieColors[6], this, "Text Color");
	QString style = "border-style: none;background-color: rgb(%1, %2, %3);";
	style = style.arg(color.red()).arg(color.green()).arg(color.blue());
	ui.pushButton_pieColor_7->setStyleSheet(style);
	pieColors[6] = color;
	QPixmap pix_viz = QPixmap::fromImage(mat_to_qimage_ref(this->fillPie(), QImage::Format_RGB888).rgbSwapped());
	scene_meme->refreshBackrop(pix_viz);
}

void MemeViz::on_pushButton_pieColor_8_clicked()
{
	QColor color = QColorDialog::getColor(pieColors[7], this, "Text Color");
	QString style = "border-style: none;background-color: rgb(%1, %2, %3);";
	style = style.arg(color.red()).arg(color.green()).arg(color.blue());
	ui.pushButton_pieColor_8->setStyleSheet(style);
	pieColors[7] = color;
	QPixmap pix_viz = QPixmap::fromImage(mat_to_qimage_ref(this->fillPie(), QImage::Format_RGB888).rgbSwapped());
	scene_meme->refreshBackrop(pix_viz);
}

void MemeViz::on_pushButton_pieColor_9_clicked()
{
	QColor color = QColorDialog::getColor(pieColors[8], this, "Text Color");
	QString style = "border-style: none;background-color: rgb(%1, %2, %3);";
	style = style.arg(color.red()).arg(color.green()).arg(color.blue());
	ui.pushButton_pieColor_9->setStyleSheet(style);
	pieColors[8] = color;
	QPixmap pix_viz = QPixmap::fromImage(mat_to_qimage_ref(this->fillPie(), QImage::Format_RGB888).rgbSwapped());
	scene_meme->refreshBackrop(pix_viz);
}

void MemeViz::on_pushButton_pieColor_10_clicked()
{
	QColor color = QColorDialog::getColor(pieColors[9], this, "Text Color");
	QString style = "border-style: none;background-color: rgb(%1, %2, %3);";
	style = style.arg(color.red()).arg(color.green()).arg(color.blue());
	ui.pushButton_pieColor_10->setStyleSheet(style);
	pieColors[9] = color;
	QPixmap pix_viz = QPixmap::fromImage(mat_to_qimage_ref(this->fillPie(), QImage::Format_RGB888).rgbSwapped());
	scene_meme->refreshBackrop(pix_viz);
}

void MemeViz::on_pushButton_pieColor_11_clicked()
{
	QColor color = QColorDialog::getColor(pieColors[10], this, "Text Color");
	QString style = "border-style: none;background-color: rgb(%1, %2, %3);";
	style = style.arg(color.red()).arg(color.green()).arg(color.blue());
	ui.pushButton_pieColor_11->setStyleSheet(style);
	pieColors[10] = color;
	QPixmap pix_viz = QPixmap::fromImage(mat_to_qimage_ref(this->fillPie(), QImage::Format_RGB888).rgbSwapped());
	scene_meme->refreshBackrop(pix_viz);
}

void MemeViz::on_pushButton_pieColor_12_clicked()
{
	QColor color = QColorDialog::getColor(pieColors[11], this, "Text Color");
	QString style = "border-style: none;background-color: rgb(%1, %2, %3);";
	style = style.arg(color.red()).arg(color.green()).arg(color.blue());
	ui.pushButton_pieColor_12->setStyleSheet(style);
	pieColors[11] = color;
	QPixmap pix_viz = QPixmap::fromImage(mat_to_qimage_ref(this->fillPie(), QImage::Format_RGB888).rgbSwapped());
	scene_meme->refreshBackrop(pix_viz);
}

void MemeViz::on_pushButton_pieColor_13_clicked()
{
	QColor color = QColorDialog::getColor(pieColors[12], this, "Text Color");
	QString style = "border-style: none;background-color: rgb(%1, %2, %3);";
	style = style.arg(color.red()).arg(color.green()).arg(color.blue());
	ui.pushButton_pieColor_13->setStyleSheet(style);
	pieColors[12] = color;
	QPixmap pix_viz = QPixmap::fromImage(mat_to_qimage_ref(this->fillPie(), QImage::Format_RGB888).rgbSwapped());
	scene_meme->refreshBackrop(pix_viz);
}

void MemeViz::on_pushButton_pieColor_14_clicked()
{
	QColor color = QColorDialog::getColor(pieColors[13], this, "Text Color");
	QString style = "border-style: none;background-color: rgb(%1, %2, %3);";
	style = style.arg(color.red()).arg(color.green()).arg(color.blue());
	ui.pushButton_pieColor_14->setStyleSheet(style);
	pieColors[13] = color;
	QPixmap pix_viz = QPixmap::fromImage(mat_to_qimage_ref(this->fillPie(), QImage::Format_RGB888).rgbSwapped());
	scene_meme->refreshBackrop(pix_viz);
}

void MemeViz::on_pushButton_pieColor_15_clicked()
{
	QColor color = QColorDialog::getColor(pieColors[14], this, "Text Color");
	QString style = "border-style: none;background-color: rgb(%1, %2, %3);";
	style = style.arg(color.red()).arg(color.green()).arg(color.blue());
	ui.pushButton_pieColor_15->setStyleSheet(style);
	pieColors[14] = color;
	QPixmap pix_viz = QPixmap::fromImage(mat_to_qimage_ref(this->fillPie(), QImage::Format_RGB888).rgbSwapped());
	scene_meme->refreshBackrop(pix_viz);
}

void MemeViz::on_pushButton_pieColor_16_clicked()
{
	QColor color = QColorDialog::getColor(pieColors[15], this, "Text Color");
	QString style = "border-style: none;background-color: rgb(%1, %2, %3);";
	style = style.arg(color.red()).arg(color.green()).arg(color.blue());
	ui.pushButton_pieColor_16->setStyleSheet(style);
	pieColors[15] = color;
	QPixmap pix_viz = QPixmap::fromImage(mat_to_qimage_ref(this->fillPie(), QImage::Format_RGB888).rgbSwapped());
	scene_meme->refreshBackrop(pix_viz);
}

void MemeViz::on_pushButton_pieColor_17_clicked()
{
	QColor color = QColorDialog::getColor(pieColors[16], this, "Text Color");
	QString style = "border-style: none;background-color: rgb(%1, %2, %3);";
	style = style.arg(color.red()).arg(color.green()).arg(color.blue());
	ui.pushButton_pieColor_17->setStyleSheet(style);
	pieColors[16] = color;
	QPixmap pix_viz = QPixmap::fromImage(mat_to_qimage_ref(this->fillPie(), QImage::Format_RGB888).rgbSwapped());
	scene_meme->refreshBackrop(pix_viz);
}

void MemeViz::on_pushButton_pieColor_18_clicked()
{
	QColor color = QColorDialog::getColor(pieColors[17], this, "Text Color");
	QString style = "border-style: none;background-color: rgb(%1, %2, %3);";
	style = style.arg(color.red()).arg(color.green()).arg(color.blue());
	ui.pushButton_pieColor_18->setStyleSheet(style);
	pieColors[17] = color;
	QPixmap pix_viz = QPixmap::fromImage(mat_to_qimage_ref(this->fillPie(), QImage::Format_RGB888).rgbSwapped());
	scene_meme->refreshBackrop(pix_viz);
}

void MemeViz::on_pushButton_pieColor_19_clicked()
{
	QColor color = QColorDialog::getColor(pieColors[18], this, "Text Color");
	QString style = "border-style: none;background-color: rgb(%1, %2, %3);";
	style = style.arg(color.red()).arg(color.green()).arg(color.blue());
	ui.pushButton_pieColor_19->setStyleSheet(style);
	pieColors[18] = color;
	QPixmap pix_viz = QPixmap::fromImage(mat_to_qimage_ref(this->fillPie(), QImage::Format_RGB888).rgbSwapped());
	scene_meme->refreshBackrop(pix_viz);
}

void MemeViz::on_pushButton_pieColor_20_clicked()
{
	QColor color = QColorDialog::getColor(pieColors[19], this, "Text Color");
	QString style = "border-style: none;background-color: rgb(%1, %2, %3);";
	style = style.arg(color.red()).arg(color.green()).arg(color.blue());
	ui.pushButton_pieColor_20->setStyleSheet(style);
	pieColors[19] = color;
	QPixmap pix_viz = QPixmap::fromImage(mat_to_qimage_ref(this->fillPie(), QImage::Format_RGB888).rgbSwapped());
	scene_meme->refreshBackrop(pix_viz);
}

//Line Chart
void MemeViz::on_pushButton_line_clicked()
{
	chartType = Line;
	ui.label_pie->setVisible(false);
	ui.label_line->setVisible(true);
	ui.label_bar->setVisible(false);
	ui.groupBox_pie->setVisible(false);
	ui.groupBox_line->setVisible(true);
	ui.groupBox_bar->setVisible(false);
	scene_meme->removePieLabels();
	if (loaded_img)
	{
		scene_meme->setCurrentBackdrop(filtimg);
		QPixmap filt_backdrop = QPixmap::fromImage(mat_to_qimage_ref(filtimg.clone(), QImage::Format_RGB888).rgbSwapped());
		scene_meme->refreshBackrop(filt_backdrop);
	}

	if (dataLoaded)
	{
		drawLineChart();
	}	
}

void MemeViz::drawLineChart()
{
	if (chartAdded)
	{
		chartAdded = false;
		scene_meme->removeItem(chart);		
	}
	if (chartPrwAdded)
	{
		chartPrwAdded = false;
		scene_preview->removeItem(chartpreview);
		chartpreview = 0;
	}
	//QT Charts Code
	chart = new QtCharts::QChart();
	if (lineSpline)
	{
		lineSeries = new QtCharts::QSplineSeries();
		lineGlowSeries = new QtCharts::QSplineSeries();
	}
	else
	{
		lineSeries = new QtCharts::QLineSeries();
		lineGlowSeries = new QtCharts::QLineSeries();
	}
	xaxis = new QtCharts::QCategoryAxis();
	QtCharts::QLineSeries *seriesPrvw = new QtCharts::QLineSeries();
	QtCharts::QCategoryAxis *xaxisPrvw = new QtCharts::QCategoryAxis();
	
	for (int i = 0; i < t_val.size(); i++)
	{
		lineSeries->append(i,t_val[i]);
		lineGlowSeries->append(i, t_val[i]);
		seriesPrvw->append(i, t_val[i]);
	}
	for (int i = 0; i < t_val.size(); i=i+xStep)
	{
		xaxis->append(QString::fromStdString(t_label[i]), i);
		xaxisPrvw->append(QString::fromStdString(t_label[i]), i);
	}	
	
	QPen pen(lineColor);
	pen.setWidth(lineThick);
	lineSeries->setPen(pen);
	QPen penG(lineGlowColor);
	penG.setWidth(lineGlowThick);
	lineGlowSeries->setPen(penG);
	chart->addSeries(lineGlowSeries);
	chart->addSeries(lineSeries);
	chart->setPreferredSize(ui.spinBox_lineChartWidth->value(), ui.spinBox_lineChartHeight->value());
	chart->setAnimationOptions(QtCharts::QChart::NoAnimation);
	chart->createDefaultAxes();	
	xaxis->setLabelsPosition(QtCharts::QCategoryAxis::AxisLabelsPositionOnValue);
	chart->removeAxis(chart->axisX());
	chart->setAxisX(xaxis, lineSeries);
	chart->axisX()->setGridLineVisible(false);
	chart->axisY()->setGridLineVisible(false);
	chart->axisY()->setMin(ui.doubleSpinBox_yMin->value());
	chart->axisY()->setMax(ui.doubleSpinBox_yMax->value());
			
	chart->setMargins(QMargins(0, 0, 0, 0));
	chart->legend()->hide();
	chart->setBackgroundVisible(false);
	chart->setFont(textFont);	
	chart->setFlag(QGraphicsItem::ItemIsMovable, true);
	chart->setFlag(QGraphicsItem::ItemIsSelectable, true);
	chart->setZValue(999);	
	chart->setPos(QPoint(chartX, chartY));
	scene_meme->addItem(chart);
	chartAdded = true;	

	chartpreview = new QtCharts::QChart();
	chartpreview->setPreferredSize(260, 160);
	chartpreview->addSeries(seriesPrvw);
	chartpreview->setAnimationOptions(QtCharts::QChart::SeriesAnimations);
	chartpreview->createDefaultAxes();
	xaxisPrvw->setLabelsPosition(QtCharts::QCategoryAxis::AxisLabelsPositionOnValue);
	chartpreview->removeAxis(chart->axisX());
	chartpreview->setAxisX(xaxisPrvw, seriesPrvw);
	chartpreview->setMargins(QMargins(0, 0, 0, 0));
	chartpreview->legend()->hide();
	chartpreview->setBackgroundVisible(false);
	scene_preview->addItem(chartpreview);	
	chartPrwAdded = true;
}

void MemeViz::on_spinBox_lineChartHeight_valueChanged()
{
	if (chartAdded)
	{
		scene_meme->removeItem(chart);
		chart->setPreferredSize(ui.spinBox_lineChartWidth->value(), ui.spinBox_lineChartHeight->value());
		scene_meme->addItem(chart);
	}
}

void MemeViz::on_spinBox_lineChartWidth_valueChanged()
{
	if (chartAdded)
	{
		scene_meme->removeItem(chart);
		chart->setPreferredSize(ui.spinBox_lineChartWidth->value(), ui.spinBox_lineChartHeight->value());
		scene_meme->addItem(chart);
	}
}

void MemeViz::on_pushButton_lineColor_clicked()
{
	lineColor = QColorDialog::getColor(lineColor, this, "Line Color");
	QString style = "background: rgb(%1, %2, %3);";
	style = style.arg(lineColor.red()).arg(lineColor.green()).arg(lineColor.blue());
	ui.label_lineColor->setStyleSheet(style);	
	QPen pen(lineColor);
	pen.setWidth(lineThick);
	lineSeries->setPen(pen);
}

void MemeViz::on_horizontalSlider_lineThick_valueChanged()
{
	lineThick = ui.horizontalSlider_lineThick->value();
	chartX = chart->pos().x();
	chartY = chart->pos().y();
	drawLineChart();
}

void MemeViz::on_pushButton_lineGlowColor_clicked()
{
	lineGlowColor = QColorDialog::getColor(lineGlowColor, this, "Line Color");
	QString style = "background: rgb(%1, %2, %3);";
	style = style.arg(lineGlowColor.red()).arg(lineGlowColor.green()).arg(lineGlowColor.blue());
	ui.label_lineGlowColor->setStyleSheet(style);
	lineGlowColor.setAlpha(150);
	QPen pen(lineGlowColor);
	pen.setWidth(lineGlowThick);
	lineGlowSeries->setPen(pen);
}

void MemeViz::on_horizontalSlider_lineGlowThick_valueChanged()
{
	lineGlowThick = ui.horizontalSlider_lineGlowThick->value();
	chartX = chart->pos().x();
	chartY = chart->pos().y();
	drawLineChart();
}

void MemeViz::on_horizontalSlider_xTicks_valueChanged()
{
	xStep = ui.horizontalSlider_xTicks->value();
	drawLineChart();
}

void MemeViz::on_doubleSpinBox_yMin_valueChanged()
{
	if (chartAdded)
	{
		chartX = chart->pos().x();
		chartY = chart->pos().y();
		drawLineChart();
	}
}

void MemeViz::on_doubleSpinBox_yMax_valueChanged()
{
	if (chartAdded)
	{
		chartX = chart->pos().x();
		chartY = chart->pos().y();
		drawLineChart();
	}
}

void MemeViz::on_pushButton_lineXColor_clicked()
{
	QColor color = QColorDialog::getColor(Qt::white, this, "Line Color");
	QString style = "background: rgb(%1, %2, %3);";
	style = style.arg(color.red()).arg(color.green()).arg(color.blue());
	ui.label_lineXColor->setStyleSheet(style);
	chart->axisX()->setLinePenColor(color);
}

void MemeViz::on_pushButton_lineYColor_clicked()
{
	QColor color = QColorDialog::getColor(Qt::white, this, "Line Color");
	QString style = "background: rgb(%1, %2, %3);";
	style = style.arg(color.red()).arg(color.green()).arg(color.blue());
	ui.label_lineYColor->setStyleSheet(style);	
	chart->axisY()->setLinePenColor(color);
}

void MemeViz::on_pushButton_lineLine_clicked()
{
	lineSpline = false;
	ui.label_lineLine->setStyleSheet("background: rgb(240, 240, 240);");
	ui.label_lineSpline->setStyleSheet("background: rgb(65, 65, 65);");
	chartX = chart->pos().x();
	chartY = chart->pos().y();
	drawLineChart();
}

void MemeViz::on_pushButton_lineSpline_clicked()
{
	lineSpline = true;
	ui.label_lineSpline->setStyleSheet("background: rgb(240, 240, 240);");
	ui.label_lineLine->setStyleSheet("background: rgb(65, 65, 65);");
	chartX = chart->pos().x();
	chartY = chart->pos().y();
	drawLineChart();
}

//bar Chart
void MemeViz::on_pushButton_bar_clicked()
{
	chartType = Bar;
	ui.label_pie->setVisible(false);
	ui.label_line->setVisible(false);
	ui.label_bar->setVisible(true);
	ui.groupBox_pie->setVisible(false);
	ui.groupBox_line->setVisible(false);
	ui.groupBox_bar->setVisible(true);
	scene_meme->removePieLabels();

	if (dataLoaded)
	{
		drawBarChart();
	}
}

void MemeViz::drawBarChart()
{
	if (chartAdded)
	{
		chartAdded = false;
		scene_meme->removeItem(chart);		
	}
	if (chartPrwAdded)
	{
		chartPrwAdded = false;
		scene_preview->removeItem(chartpreview);
		chartpreview = 0;
	}
	//QT Charts Code
	chart = new QtCharts::QChart();
	barSeries = new QtCharts::QBarSeries();
	barSet = new QtCharts::QBarSet("Bar");
	QStringList categories;
	QtCharts::QBarSet *barSetPrw = new QtCharts::QBarSet("Bar2");
	QStringList categoriesPrw;

	for (int i = 0; i < t_val.size(); i++)
	{
		categories.append(QString::fromStdString(t_label[i]));
		barSet->append(t_val[i]);
		categoriesPrw.append(QString::fromStdString(t_label[i]));
		barSetPrw->append(t_val[i]);
	}	
	
	barSet->setColor(barColor);
	barSet->setBorderColor(barGlowColor);
	barSeries->append(barSet);
	
	chart->setPreferredSize(ui.spinBox_barChartWidth->value(), ui.spinBox_barChartHeight->value());
	chart->addSeries(barSeries);
	chart->setAnimationOptions(QtCharts::QChart::NoAnimation);
	QtCharts::QBarCategoryAxis *axis = new QtCharts::QBarCategoryAxis();	
	axis->append(categories);
	axis->setGridLineVisible(false);
	chart->createDefaultAxes();
	chart->setAxisX(axis, barSeries);
	chart->axisX()->setLabelsAngle(45);
	chart->axisY()->setGridLineVisible(false);	
	chart->setMargins(QMargins(0, 0, 0, 0));
	chart->legend()->setVisible(false);	
	chart->setBackgroundVisible(false);
	chart->setFont(textFont);
	chart->setFlag(QGraphicsItem::ItemIsMovable, true);
	chart->setFlag(QGraphicsItem::ItemIsSelectable, true);
	chart->setZValue(999);	
	chart->setPos(QPoint(chartX, chartY));
	chart->axisY()->setMin(ui.doubleSpinBox_yMinBarOverlay->value());
	chart->axisY()->setMax(ui.doubleSpinBox_yMaxBarOverlay->value());
	scene_meme->addItem(chart);
	chartAdded = true;	
	
	chartpreview = new QtCharts::QChart();
	QtCharts::QBarSeries *seriesPrvw = new QtCharts::QBarSeries();
	seriesPrvw->append(barSetPrw);
	chartpreview->setPreferredSize(260, 160);
	chartpreview->addSeries(seriesPrvw);
	chartpreview->setAnimationOptions(QtCharts::QChart::SeriesAnimations);
	QtCharts::QBarCategoryAxis *axisPrw = new QtCharts::QBarCategoryAxis();
	axisPrw->append(categoriesPrw);
	axisPrw->setGridLineVisible(false);
	chartpreview->createDefaultAxes();
	chartpreview->setAxisX(axisPrw, seriesPrvw);
//	chartpreview->axisX()->setLabelsAngle(45);
	chartpreview->axisY()->setGridLineVisible(false);
	chartpreview->setMargins(QMargins(0, 0, 0, 0));
	chartpreview->legend()->setVisible(false);
	chartpreview->setBackgroundVisible(false);
	scene_preview->addItem(chartpreview);
	chartPrwAdded = true;
}

void MemeViz::on_pushButton_barOverlay_clicked()
{
	barOverlay = true;
	ui.label_barOverlay->setStyleSheet("background: rgb(240, 240, 240);");
	ui.label_barFill->setStyleSheet("background: rgb(65, 65, 65);");

	ui.groupBox_BarFill->setVisible(false);
	ui.groupBox_BarOverlay->setVisible(true);

	if (dataLoaded)
	{
		drawBarChart();
	}
}

void MemeViz::on_pushButton_barFill_clicked()
{
	if (t_val.size() < 7)
	{
		barOverlay = false;
		ui.label_barFill->setStyleSheet("background: rgb(240, 240, 240);");
		ui.label_barOverlay->setStyleSheet("background: rgb(65, 65, 65);");

		ui.groupBox_BarFill->setVisible(true);
		ui.groupBox_BarOverlay->setVisible(false);

		if (chartAdded)
		{
			chartAdded = false;
			scene_meme->removeItem(chart);
		}
		if (dataLoaded)
		{
			barMaskIdx = 0;
			ui.label_barCurrLabel->setText(QString::fromStdString(t_label[barMaskIdx]));
			if (loaded_img)
			{
				barMasks.clear();
				for (int i = 0; i < t_label.size(); i++)
				{
					barMasks.push_back(img.clone());
					barMasksSet.push_back(false);
					barMasks[i] = cv::Scalar(0, 0, 0);
					cv::cvtColor(barMasks[i], barMasks[i], CV_RGB2GRAY);
				}
			}
		}
	}
	else
	{
		QMessageBox::information(0, "Alert", QString("Too many items for a fill style bar chart."));
	}
}

void MemeViz::on_spinBox_barChartHeight_valueChanged()
{
	if (chartAdded)
	{
		scene_meme->removeItem(chart);
		chart->setPreferredSize(ui.spinBox_barChartWidth->value(), ui.spinBox_barChartHeight->value());
		scene_meme->addItem(chart);
	}
}

void MemeViz::on_spinBox_barChartWidth_valueChanged()
{
	if (chartAdded)
	{
		scene_meme->removeItem(chart);
		chart->setPreferredSize(ui.spinBox_barChartWidth->value(), ui.spinBox_barChartHeight->value());
		scene_meme->addItem(chart);
	}
}

void MemeViz::on_pushButton_barColor_clicked()
{
	barColor = QColorDialog::getColor(barColor, this, "Bar Color");
	QString style = "background: rgb(%1, %2, %3);";
	style = style.arg(barColor.red()).arg(barColor.green()).arg(barColor.blue());
	ui.label_barColor->setStyleSheet(style);	
	barSet->setColor(barColor);
}

void MemeViz::on_horizontalSlider_barWidth_valueChanged()
{
	barThick = ui.horizontalSlider_barWidth->value();
	//barSeries->setBarWidth(0.5);
}

void MemeViz::on_pushButton_barGlowColor_clicked()
{
	barGlowColor = QColorDialog::getColor(barGlowColor, this, "Line Color");
	QString style = "background: rgb(%1, %2, %3);";
	style = style.arg(barGlowColor.red()).arg(barGlowColor.green()).arg(barGlowColor.blue());
	ui.label_barGlowColor->setStyleSheet(style);	
	QPen pen(barGlowColor);
	pen.setWidth(barGlowThick);
	barSet->setPen(pen);
}

void MemeViz::on_horizontalSlider_barGlowWidth_valueChanged()
{
	barGlowThick= ui.horizontalSlider_barGlowWidth->value();
	QPen pen(barGlowColor);
	pen.setWidth(barGlowThick);
	barSet->setPen(pen);
}

void MemeViz::on_pushButton_barXColor_clicked()
{
	QColor color = QColorDialog::getColor(Qt::white, this, "Line Color");
	QString style = "background: rgb(%1, %2, %3);";
	style = style.arg(color.red()).arg(color.green()).arg(color.blue());
	ui.label_barXColor->setStyleSheet(style);
	chart->axisX()->setLinePenColor(color);
}

void MemeViz::on_pushButton_barYColor_clicked()
{
	QColor color = QColorDialog::getColor(Qt::white, this, "Line Color");
	QString style = "background: rgb(%1, %2, %3);";
	style = style.arg(color.red()).arg(color.green()).arg(color.blue());
	ui.label_barYColor->setStyleSheet(style);
	chart->axisY()->setLinePenColor(color);
}

void MemeViz::on_doubleSpinBox_yMinBarOverlay_valueChanged()
{
	if (chartAdded)
	{
		chartX = chart->pos().x();
		chartY = chart->pos().y();
		drawBarChart();
	}
}

void MemeViz::on_doubleSpinBox_yMaxBarOverlay_valueChanged()
{
	if (chartAdded)
	{
		chartX = chart->pos().x();
		chartY = chart->pos().y();
		drawBarChart();
	}
}

void MemeViz::on_pushButton_barMaskPrev_clicked()
{
	if (dataLoaded)
	{
		if (barMaskIdx > 0)
		{
			barMaskIdx = barMaskIdx - 1;
			ui.label_barCurrLabel->setText(QString::fromStdString(t_label[barMaskIdx]));
			if (loaded_img)
			{
				cv::Mat bckdrp;
				barMasks[barMaskIdx].copyTo(bckdrp);
				cv::cvtColor(bckdrp, bckdrp, CV_GRAY2RGB);
				QPixmap pix_backdrop = QPixmap::fromImage(mat_to_qimage_ref(bckdrp, QImage::Format_RGB888).rgbSwapped());
				ui.label_barMask->setPixmap(pix_backdrop);
			}
		}		
	}
}

void MemeViz::on_pushButton_barMaskNext_clicked()
{
	if (dataLoaded)
	{
		if (barMaskIdx < t_label.size()-1)
		{
			barMaskIdx = barMaskIdx + 1;
			ui.label_barCurrLabel->setText(QString::fromStdString(t_label[barMaskIdx]));
			if (loaded_img)
			{
				cv::Mat bckdrp;
				barMasks[barMaskIdx].copyTo(bckdrp);
				cv::cvtColor(bckdrp, bckdrp, CV_GRAY2RGB);
				QPixmap pix_backdrop = QPixmap::fromImage(mat_to_qimage_ref(bckdrp, QImage::Format_RGB888).rgbSwapped());
				ui.label_barMask->setPixmap(pix_backdrop);
			}
		}
	}
}

void MemeViz::fillBarChart(int idx)
{
	cv::Mat src2;
	int thresh = 100;
	int max_thresh = 255;
	// Convert image to gray and blur it

	cvtColor(barMasks[idx], src2, CV_GRAY2RGB);

	cv::Mat threshold_output;
	std::vector<std::vector<cv::Point> > contours;
	std::vector<cv::Vec4i> hierarchy;

	// Detect edges using Threshold
	threshold(barMasks[idx], threshold_output, thresh, 255, cv::THRESH_BINARY);
	// Find contours
	findContours(threshold_output, contours, hierarchy, CV_RETR_TREE, CV_CHAIN_APPROX_SIMPLE, cv::Point(0, 0));

	// Approximate contours to polygons + get bounding rects and circles
	std::vector<std::vector<cv::Point> > contours_poly(contours.size());
	std::vector<cv::Rect> boundRect(contours.size());

	int b = 0;
	double ar = 0.0;
	for (int i = 0; i < contours.size(); i++)
	{
		approxPolyDP(cv::Mat(contours[i]), contours_poly[i], 3, true);
		boundRect[i] = cv::boundingRect(cv::Mat(contours_poly[i]));		
		if (ar< contourArea(contours[i]))
		{
			ar = contourArea(contours[i]);
			b = i;
		}
	}

	// Draw biggest contour 
	
	src2 = cv::Mat::zeros(src2.size(), CV_8UC3);
	drawContours(src2, contours, b, cv::Scalar(255, 255, 255), -2, 8, hierarchy, 0, cv::Point());

	double total = 0;

	for (int j = 0; j<t_val.size(); j++)
	{
		total = total + t_val[j];
	}
	

	//Compute fill amount

	//Based on height
	double area = contourArea(contours[b]);
	double offset = 0.0;
	cv::Mat drawing_tmp = cv::Mat::zeros(threshold_output.size(), CV_8UC3);
	cv::Mat drawing = cv::Mat::zeros(threshold_output.size(), CV_8UC3);
	
	int top = boundRect[b].y +  boundRect[b].height - ( (t_val[idx] / 100) * boundRect[b].height);
	cv::Point p1(boundRect[b].x, top);
	cv::Point p2(boundRect[b].x + boundRect[b].width, boundRect[b].y + boundRect[b].height);

	rectangle(drawing, p1, p2, cv::Scalar(barColor.blue(), barColor.green(), barColor.red()), -2, 8, 0);
	drawing.copyTo(drawing_tmp, src2);

	cv::Mat image(filtimg.size(), CV_8UC3);
	scene_meme->getCurrentBackdrop().copyTo(image);


	//Merge the chart with the image in LAB color space
	cvtColor(image, image, CV_BGR2Lab);
	cvtColor(drawing_tmp, drawing_tmp, CV_BGR2Lab);

	for (int x = 0; x < drawing_tmp.rows; x++)
	{
		for (int y = 0; y < drawing_tmp.cols; y++)
		{
			cv::Vec3b intensity = drawing_tmp.at<cv::Vec3b>(x, y);
			if (intensity.val[0] != 0)
			{
				image.at<cv::Vec3b>(x, y).val[1] = intensity.val[1];
				image.at<cv::Vec3b>(x, y).val[2] = intensity.val[2];
			}
		}
	}

	cvtColor(image, image, CV_Lab2BGR);
	scene_meme->setCurrentBackdrop(image);

	QGraphicsTextItem *tmp = new QGraphicsTextItem(QString::fromStdString(t_label[idx]) + ": " + QString("%1").arg(t_val[idx]) + "%");
	tmp->setZValue(600);
	int yOff = ui.spinBox_labelOffBar->value();
	tmp->setPos(QPointF(p1.x, p1.y+yOff));
	tmp->setFlag(QGraphicsItem::ItemIsSelectable, true);
	tmp->setFlag(QGraphicsItem::ItemIsMovable, true);
	scene_meme->addItem(tmp);	
}

void MemeViz::on_pushButton_barMaskColor_clicked()
{
	barColor = QColorDialog::getColor(barColor, this, "Bar Color");
	QString style = "background: rgb(%1, %2, %3);";
	style = style.arg(barColor.red()).arg(barColor.green()).arg(barColor.blue());
	ui.label_barMaskColor->setStyleSheet(style);
	barSet->setColor(barColor);
	scene_meme->setCurrentBackdrop(filtimg);
	QPixmap pix_viz = QPixmap::fromImage(mat_to_qimage_ref(scene_meme->getCurrentBackdrop(), QImage::Format_RGB888).rgbSwapped());
	scene_meme->refreshBackrop(pix_viz);
	scene_meme->removePieLabels();
	for (int i = 0; i < barMasksSet.size(); i++)
	{
		if (barMasksSet[i])
		{
			this->fillBarChart(i);
		}
	}
	QPixmap filt_backdrop = QPixmap::fromImage(mat_to_qimage_ref(scene_meme->getCurrentBackdrop(), QImage::Format_RGB888).rgbSwapped());
	scene_meme->refreshBackrop(filt_backdrop);
}

void MemeViz::on_spinBox_labelOffBar_valueChanged()
{
	scene_meme->setCurrentBackdrop(filtimg);
	QPixmap pix_viz = QPixmap::fromImage(mat_to_qimage_ref(scene_meme->getCurrentBackdrop(), QImage::Format_RGB888).rgbSwapped());
	scene_meme->refreshBackrop(pix_viz);
	scene_meme->removePieLabels();
	for (int i = 0; i < barMasksSet.size(); i++)
	{
		if (barMasksSet[i])
		{
			this->fillBarChart(i);
		}
	}
	QPixmap filt_backdrop = QPixmap::fromImage(mat_to_qimage_ref(scene_meme->getCurrentBackdrop(), QImage::Format_RGB888).rgbSwapped());
	scene_meme->refreshBackrop(filt_backdrop);
}

void MemeViz::on_pushButton_barPercentage_clicked()
{
	barPercentage = true;
	ui.label_barPercentage->setStyleSheet("background: rgb(240, 240, 240);");
	ui.label_barValue->setStyleSheet("background: rgb(65, 65, 65);");
}

void MemeViz::on_pushButton_barValue_clicked()
{
	barPercentage = false;
	ui.label_barPercentage->setStyleSheet("background: rgb(65, 65, 65);");
	ui.label_barValue->setStyleSheet("background: rgb(240, 240, 240);");
}


//Window Handling
void MemeViz::on_pushButton_close_clicked()
{
	QApplication::quit();
}

void MemeViz::mousePressEvent(QMouseEvent *event) 
{
	segM->hide();
	m_nMouseClick_X_Coordinate = event->x();
	m_nMouseClick_Y_Coordinate = event->y();	
}

void MemeViz::mouseMoveEvent(QMouseEvent *event) 
{
/*	if (m_nMouseClick_Y_Coordinate < 30)
	{
		int moveX = event->globalX() - m_nMouseClick_X_Coordinate;
		int moveY = event->globalY() - m_nMouseClick_Y_Coordinate;
		if (moveX < 0 & moveY < 0)
		{
			move(0, 0);
		}
		else if(moveX < 0)
		{
			move(0, moveY);
		}
		else if(moveY < 0)
		{
			move(moveX, 0);
		}
		else
		{
			move(moveX, moveY);
		}
	}*/
}