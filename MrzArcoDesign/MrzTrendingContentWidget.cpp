#include "stdafx.h"
#include "MrzTrendingContentWidget.h"

#include <QPushButton>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QTableWidget>

static const QString styleWgt = QString("QWidget{line-height: 20px;border-radius: 4px;background-color: rgba(255, 255, 255, 1);color: rgba(22,93,255,1);font-size: 14px;text-align: center;font-family: -regular; }");

MrzTrendingContentWidget::MrzTrendingContentWidget(QWidget *parent)
	: QWidget(parent)
{
	this->setFixedSize(462, 388);
	initUi();
}

MrzTrendingContentWidget::~MrzTrendingContentWidget()
{}

void MrzTrendingContentWidget::initUi()
{
	QWidget* pMainWgt = new QWidget(this);
	pMainWgt->setFixedSize(462, 388);
	pMainWgt->setStyleSheet(styleWgt);
	QVBoxLayout* pMainLyt = new QVBoxLayout(pMainWgt);
	pMainLyt->setContentsMargins(0, 0, 0, 0);
	pMainLyt->setSpacing(0);

	QHBoxLayout* pTitleLyt = new QHBoxLayout;
	pTitleLyt->setContentsMargins(0, 0, 0, 0);
	QLabel* pTitleLbl = new QLabel(this);
	pTitleLbl->setText(u8"线上热门内容");
	pTitleLbl->setStyleSheet("QLabel{line-height: 22px;color: rgb(16,16,16);font-size: 16px;text-align: left;font-family: AlibabaPuHui-bold;}");

	QPushButton* pCheckBtn = new QPushButton(this);
	pCheckBtn->setText(u8"查看更多");
	pTitleLyt->addSpacing(20);
	pTitleLyt->addWidget(pTitleLbl);
	pTitleLyt->addStretch();
	pTitleLyt->addWidget(pCheckBtn);
	pTitleLyt->addSpacing(20);

	// button
	QHBoxLayout* pHbuttonLyt = new QHBoxLayout;
	pHbuttonLyt->setContentsMargins(0, 0, 0, 0);
	pHbuttonLyt->addSpacing(0);
	QWidget* pButtonWgt = new QWidget(this);
	pButtonWgt->setFixedSize(156, 28);
	pButtonWgt->setStyleSheet("QWidget{line-height: 20px;border-radius: 2px;background-color: rgba(242,243,248,1);color: rgba(16,16,16,1);font-size: 14px;text-align: center;font-family: -regular;}");
	QHBoxLayout* pButtonLyt = new QHBoxLayout(pButtonWgt);
	pButtonLyt->setContentsMargins(0, 0, 0, 0);
	pButtonLyt->addSpacing(0);
	QPushButton* pTextLbl = new QPushButton(this);
	pTextLbl->setText(u8"文本");
	QPushButton* pImageTextLbl = new QPushButton(this);
	pImageTextLbl->setText(u8"图文");
	QPushButton* pVideoLbl = new QPushButton(this);
	pVideoLbl->setText(u8"视频");
	pButtonLyt->addWidget(pTextLbl);
	pButtonLyt->addWidget(pImageTextLbl);
	pButtonLyt->addWidget(pVideoLbl);
	pHbuttonLyt->addSpacing(20);
	pHbuttonLyt->addWidget(pButtonWgt);
	pHbuttonLyt->addStretch();

	QHBoxLayout* pTableLyt = new QHBoxLayout;
	pTableLyt->setContentsMargins(0, 0, 0, 0);
	pTableLyt->setSpacing(0);
	QTableWidget* pTableWidget = new QTableWidget(this);
	pTableWidget->setFixedSize(421, 292);
	pTableWidget->setStyleSheet("QTableWidget{line-height: 20px;border-radius: 2px 2px 0px 0px;background-color: rgba(242,243,248,1);color: rgba(16,16,16,1);font-size: 14px;text-align: center;font-family: -regular;}");
	pTableLyt->addSpacing(20);
	pTableLyt->addWidget(pTableWidget);
	pTableLyt->addSpacing(20);

	pMainLyt->addSpacing(16);
	pMainLyt->addLayout(pTitleLyt);
	pMainLyt->addSpacing(10);
	pMainLyt->addLayout(pHbuttonLyt);
	pMainLyt->addSpacing(10);
	pMainLyt->addLayout(pTableLyt);
	pMainLyt->addStretch();

}
