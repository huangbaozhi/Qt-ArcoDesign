#pragma execution_character_set("utf-8")
#include "stdafx.h"
#include "MrzWorkBenchWidget.h"
#include "MrzWelcomSubLabel.h"

#include <QLabel>
#include <QPushButton>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QScrollArea>

QString strStyle = QString("QWidget{line-height: 20px;border-radius: 4px;background-color: rgba(255, 255, 255, 1);color: rgba(22,93,255,1);font-size: 14px;text-align: center;font-family: -regular; }");

MrzWorkBenchWidget::MrzWorkBenchWidget(QWidget *parent)
	: QWidget(parent)
{
	initUi();
}

MrzWorkBenchWidget::~MrzWorkBenchWidget()
{}

void MrzWorkBenchWidget::initUi()
{
	QWidget* pMainWgt = new QWidget(this);
	pMainWgt->setFixedSize(1240, 996);
	QVBoxLayout* pMainLyt = new QVBoxLayout(pMainWgt);
	pMainLyt->setContentsMargins(0, 0, 0, 0);

	QHBoxLayout* pTopLyt = new QHBoxLayout;
	pTopLyt->setContentsMargins(0, 0, 0, 0);

	QWidget* pWelcomeWgt = new QWidget(this);
	pWelcomeWgt->setFixedSize(904, 549);
	pWelcomeWgt->setStyleSheet(strStyle);
	QHBoxLayout* pWelcomeLyt = new QHBoxLayout(pWelcomeWgt);
	pWelcomeLyt->setContentsMargins(0, 0, 0, 0);

	// 
	QVBoxLayout* pTitleLyt = new QVBoxLayout;
	pTitleLyt->setContentsMargins(0, 0, 0, 0);

	QLabel* pWelcomeLogo = new QLabel(this);
	pWelcomeLogo->setFixedSize(273, 27);
	pWelcomeLogo->setStyleSheet("QLabel{border-image:url(:/images/window/title.png);}");

	QLabel* pDividerLbl = new QLabel(this);
	pDividerLbl->setFixedSize(864, 1);
	pDividerLbl->setStyleSheet("QLabel{background-color: rgba(255,255,255,1);border: 1px solid rgba(242,243,245,1);}");

	// 内容
	m_pMrzWelcomSubLabel = new MrzWelcomSubLabel(this);

	pTitleLyt->addSpacing(20);
	pTitleLyt->addWidget(pWelcomeLogo);
	pTitleLyt->addSpacing(20);
	pTitleLyt->addWidget(pDividerLbl);
	pTitleLyt->addSpacing(20);
	pTitleLyt->addWidget(m_pMrzWelcomSubLabel);
	pTitleLyt->addStretch();

	pWelcomeLyt->addSpacing(17);
	pWelcomeLyt->addLayout(pTitleLyt);
	pWelcomeLyt->addStretch();

	pTopLyt->addWidget(pWelcomeWgt);
	pTopLyt->addStretch();

	pMainLyt->addLayout(pTopLyt);
	pMainLyt->addStretch();

	// 
	QHBoxLayout* pScrollLyt = new QHBoxLayout(this);
	pScrollLyt->setContentsMargins(0, 0, 0, 0);
	QScrollArea* scrollArea = new QScrollArea(this);
	scrollArea->setStyleSheet("QScrollArea{border: none;}");
	scrollArea->setFixedWidth(1240);
	scrollArea->setWidget(pMainWgt);
	scrollArea->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff); // 始终显示垂直滚动条
	scrollArea->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff); // 隐藏水平滚动条

	//pScrollLyt->addStretch();
	pScrollLyt->addWidget(scrollArea);
	//pScrollLyt->addStretch();

}
