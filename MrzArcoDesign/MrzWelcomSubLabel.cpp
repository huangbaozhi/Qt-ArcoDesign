#pragma execution_character_set("utf-8")
//#include "stdafx.h"
#include "MrzWelcomSubLabel.h"

#include <QLabel>
#include <QHBoxLayout>
#include <QVBoxLayout>

MrzWelcomSubLabel::MrzWelcomSubLabel(QWidget *parent)
	: QWidget(parent)
{
	this->setFixedSize(175, 60);
	initUi();
}

MrzWelcomSubLabel::~MrzWelcomSubLabel()
{}

void MrzWelcomSubLabel::initUi()
{
	QHBoxLayout* pMainLyt = new QHBoxLayout(this);
	pMainLyt->setContentsMargins(0, 0, 0, 0);

	QLabel* pOnlineContentLbl = new QLabel(this);
	pOnlineContentLbl->setFixedSize(63, 60);
	pOnlineContentLbl->setStyleSheet("QLabel{border-image:url(:/images/window/welcom_onlinecontent_1.png);}");

	QVBoxLayout* pVLyt = new QVBoxLayout;
	pVLyt->setContentsMargins(0, 0, 0, 0);

	QString style = QString("QLabel{line-height: 17px;color: rgb(16,16,16);font-size: 12px;text-align: left;font-family: AlibabaPuHui-regular;}");

	QLabel* pTitleLbl = new QLabel(this);
	pTitleLbl->setText(u8"线上总内容");
	pTitleLbl->setStyleSheet(style);

	QHBoxLayout* pHLyt = new QHBoxLayout;
	pHLyt->setContentsMargins(0, 0, 0, 0);

	QLabel* pDataLbl = new QLabel(this);
	pDataLbl->setText("373.5W+");
	pDataLbl->setStyleSheet("QLabel{line-height: 30px;color: rgb(16,16,16);font-size: 22px;text-align: left;font-family: AlibabaPuHui-medium;}");
	QLabel* pUnitLbl = new QLabel(this);
	pUnitLbl->setText(u8"个");
	pUnitLbl->setStyleSheet(style);
	pHLyt->addWidget(pDataLbl);
	pHLyt->addWidget(pUnitLbl);

	pVLyt->addWidget(pTitleLbl);
	pVLyt->addLayout(pHLyt);

	pMainLyt->addWidget(pOnlineContentLbl);
	pMainLyt->addLayout(pVLyt);
}
