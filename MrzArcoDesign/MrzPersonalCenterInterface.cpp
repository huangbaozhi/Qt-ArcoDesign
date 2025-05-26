//#include "stdafx.h"
#include "MrzPersonalCenterInterface.h"
#include "MrzUserInformationWidget.h"

#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QLabel>
#include <QPushButton>
#include <QLabel>
#include <QStackedWidget>

MrzPersonalCenterInterface::MrzPersonalCenterInterface(QWidget *parent)
	: QWidget(parent)
{
	initUi();
}

MrzPersonalCenterInterface::~MrzPersonalCenterInterface()
{}

void MrzPersonalCenterInterface::initUi()
{
	QWidget* pMainWgt = new QWidget(this);
	pMainWgt->setFixedSize(1240, 996);
	QVBoxLayout* pMainLyt = new QVBoxLayout(pMainWgt);
	pMainLyt->setContentsMargins(0, 0, 0, 0);

	QStackedWidget* pStackedWidget = new QStackedWidget(this);

	m_pMrzUserInformationWidget = new MrzUserInformationWidget(this);

	pStackedWidget->addWidget(m_pMrzUserInformationWidget);
	pStackedWidget->setCurrentWidget(m_pMrzUserInformationWidget);

	pMainLyt->addWidget(pStackedWidget);
}
