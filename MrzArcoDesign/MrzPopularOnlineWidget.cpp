#pragma execution_character_set("utf-8")
//#include "stdafx.h"
#include "MrzPopularOnlineWidget.h"

#include <QLabel>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QPushButton>

MrzPopularOnlineWidget::MrzPopularOnlineWidget(QString style, QWidget *parent)
	: QWidget(parent)
{
	mStyle = style;
	this->setFixedSize(48, 53);
	initUi();
}

MrzPopularOnlineWidget::~MrzPopularOnlineWidget()
{}

void MrzPopularOnlineWidget::initUi()
{
	QVBoxLayout* pMainLyt = new QVBoxLayout(this);
	pMainLyt->setContentsMargins(0, 0, 0, 0);

	QHBoxLayout* pButtonLyt = new QHBoxLayout;
	pButtonLyt->setContentsMargins(0, 0, 0, 0);
	QPushButton* pButton = new QPushButton(this);
	pButton->setFixedSize(32, 32);
	QString styleBtn = QString("QPushButton{border-image:url(%1);background-position: center;background-repeat: no-repeat;}").arg(mStyle);
	pButton->setStyleSheet(styleBtn);

	pButtonLyt->addStretch();
	pButtonLyt->addWidget(pButton);
	pButtonLyt->addStretch();

	QLabel* pTitleLbl = new QLabel(this);
	pTitleLbl->setFixedSize(48, 17);
	pTitleLbl->setText(u8"ÄÚÈÝ¹ÜÀí");
	pTitleLbl->setStyleSheet("QLabel{line-height: 17px;color: rgb(16,16,16);font-size: 12px;text-align: left;font-family: AlibabaPuHui-regular;}");

	pMainLyt->addLayout(pButtonLyt);
	pMainLyt->addWidget(pTitleLbl);
}
