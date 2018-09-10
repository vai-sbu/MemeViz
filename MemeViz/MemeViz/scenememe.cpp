#include "scenememe.h"

SceneMeme::SceneMeme(QObject* parent) : QGraphicsScene(parent)
{
	pxmap_backdrop = new QGraphicsPixmapItem();
}

void SceneMeme::setOrigBackdrop(cv::Mat img, QPixmap pix_backdrop)
{
	img.copyTo(origBckdrp);
	//origBckdrp = img;	
	setCurrentBackdrop(origBckdrp);
	
	removeItem(pxmap_backdrop);
	pxmap_backdrop->setPixmap(pix_backdrop);
	addItem(pxmap_backdrop);
}

void SceneMeme::setCurrentBackdrop(cv::Mat img)
{
	img.copyTo(currBckdrp);
}

cv::Mat SceneMeme::getCurrentBackdrop()
{
	return currBckdrp.clone();
}

void SceneMeme::refreshBackrop(QPixmap pix_backdrop)
{
	pxmap_backdrop->setPixmap(pix_backdrop);
}

void SceneMeme::removePieLabels()
{
	foreach(QGraphicsItem* item, items())
	{
		if (item->zValue() == 600)
		{
			removeItem(item);
		}
	}
}

void SceneMeme::clearBack()
{
	removeItem(pxmap_backdrop);
}