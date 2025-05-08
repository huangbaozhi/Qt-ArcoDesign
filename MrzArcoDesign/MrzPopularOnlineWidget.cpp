#pragma execution_character_set("utf-8")
#include "stdafx.h"
#include "MrzPopularOnlineWidget.h"

#include <QLabel>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QPushButton>

MrzPopularOnlineWidget::MrzPopularOnlineWidget(QWidget *parent)
	: QWidget(parent)
{
	this->setFixedSize(48, 53);
	initUi();
}

MrzPopularOnlineWidget::~MrzPopularOnlineWidget()
{}

void MrzPopularOnlineWidget::initUi()
{
	QVBoxLayout* pMainLyt = new QVBoxLayout(this);

	QPushButton* pButton = new QPushButton(this);

	QLabel* pTitleLbl = new QLabel(this);
	pTitleLbl->setText(u8"ÄÚÈÝ¹ÜÀí");
	pTitleLbl->setFixedSize(48, 17);

	pMainLyt->addWidget(pButton);
	pMainLyt->addWidget(pTitleLbl);
}
