#include "stdafx.h"
#include "MrzLeftMenuBarWidget.h"

#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QLabel>
#include <QPushButton>
#include <QTreeWidget>
#include <QTreeWidgetItem>

MrzLeftMenuBarWidget::MrzLeftMenuBarWidget(QWidget *parent)
	: QWidget(parent)
{
	this->setMinimumSize(200, 840);

	initUi();
}

MrzLeftMenuBarWidget::~MrzLeftMenuBarWidget()
{}

void MrzLeftMenuBarWidget::initUi()
{
	QHBoxLayout* pMainLyt = new QHBoxLayout(this);
	pMainLyt->setContentsMargins(0, 0, 0, 0);

	m_pTreeWidget = new QTreeWidget(this);
	pMainLyt->addWidget(m_pTreeWidget);
}
