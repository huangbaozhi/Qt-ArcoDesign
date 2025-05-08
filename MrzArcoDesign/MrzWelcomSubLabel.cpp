#pragma execution_character_set("utf-8")
#include "stdafx.h"
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

	QLabel* pTitleLbl = new QLabel(this);
	pTitleLbl->setText(u8"线上总内容");

	QHBoxLayout* pHLyt = new QHBoxLayout;
	pHLyt->setContentsMargins(0, 0, 0, 0);

	QLabel* pDataLbl = new QLabel(this);
	pDataLbl->setText("373.5W+");
	QLabel* pUnitLbl = new QLabel(this);
	pUnitLbl->setText(u8"个");
	pHLyt->addWidget(pDataLbl);
	pHLyt->addWidget(pUnitLbl);

	pVLyt->addWidget(pTitleLbl);
	pVLyt->addLayout(pHLyt);

	pMainLyt->addWidget(pOnlineContentLbl);
	pMainLyt->addLayout(pVLyt);
}
