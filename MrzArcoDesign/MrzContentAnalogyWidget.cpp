//#include "stdafx.h"
#include "MrzContentAnalogyWidget.h"
#include <QVBoxLayout>

QString ContentstyleWgt = QString("QWidget{line-height: 20px;border-radius: 4px;background-color: rgba(255, 255, 255, 1);color: rgba(22,93,255,1);font-size: 14px;text-align: center;font-family: -regular; }");

MrzContentAnalogyWidget::MrzContentAnalogyWidget(QWidget *parent)
	: QWidget(parent)
{
	this->setFixedSize(427, 388);
	initUi();
}

MrzContentAnalogyWidget::~MrzContentAnalogyWidget()
{}

void MrzContentAnalogyWidget::initUi()
{
	QWidget* pMainWgt = new QWidget(this);
	pMainWgt->setFixedSize(427, 388);
	pMainWgt->setStyleSheet(ContentstyleWgt);
	QVBoxLayout* pMainLyt = new QVBoxLayout(pMainWgt);

}
