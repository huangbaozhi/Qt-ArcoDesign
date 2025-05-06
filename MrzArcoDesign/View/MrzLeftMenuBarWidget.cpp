#pragma execution_character_set("utf-8")
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

	QVBoxLayout* pVLyt = new QVBoxLayout;
	pVLyt->setContentsMargins(0, 0, 0, 0);
	pMainLyt->addLayout(pVLyt);
	pMainLyt->addStretch();

	m_pTreeWidget = new QTreeWidget(this);
	pVLyt->addWidget(m_pTreeWidget);
	pVLyt->addStretch();

	m_pTreeWidget->setFixedSize(200, 360);
	m_pTreeWidget->setHeaderHidden(true);
	m_pTreeWidget->setIndentation(10);
	m_pTreeWidget->setStyleSheet("QTreeWidget::item{height:40px;}");

	QTreeWidgetItem* pDashboardItem = new QTreeWidgetItem(m_pTreeWidget, QStringList(QStringLiteral("�Ǳ���")));
	QTreeWidgetItem* pDataVisualizationItem = new QTreeWidgetItem(m_pTreeWidget, QStringList(QStringLiteral("���ݿ��ӻ�")));
	QTreeWidgetItem* pListPageItem = new QTreeWidgetItem(m_pTreeWidget, QStringList(QStringLiteral("�б�ҳ")));
	QTreeWidgetItem* pFormPageItem = new QTreeWidgetItem(m_pTreeWidget, QStringList(QStringLiteral("��ҳ")));
	QTreeWidgetItem* pDetailsPageItem = new QTreeWidgetItem(m_pTreeWidget, QStringList(QStringLiteral("����ҳ")));
	QTreeWidgetItem* pResultsPageItem = new QTreeWidgetItem(m_pTreeWidget, QStringList(QStringLiteral("���ҳ")));
	QTreeWidgetItem* pExceptionPageItem = new QTreeWidgetItem(m_pTreeWidget, QStringList(QStringLiteral("�쳣ҳ")));
	QTreeWidgetItem* pPersonalCenterItem = new QTreeWidgetItem(m_pTreeWidget, QStringList(QStringLiteral("��������")));

	pDashboardItem->setIcon(0, QIcon(":/images/menu/left_menu_dashboard.png"));
	pDataVisualizationItem->setIcon(0, QIcon(":/images/menu/left_menu_datavcisualizetion.png"));
	pListPageItem->setIcon(0, QIcon(":/images/menu/left_menu_listpage.png"));
	pFormPageItem->setIcon(0, QIcon(":/images/menu/left_menu_formpagen.png"));
	pDetailsPageItem->setIcon(0, QIcon(":/images/menu/left_menu_detailspage.png"));
	pResultsPageItem->setIcon(0, QIcon(":/images/menu/left_menu_resultspage.png"));
	pExceptionPageItem->setIcon(0, QIcon(":/images/menu/left_menu_exceptionpage.png"));
	pPersonalCenterItem->setIcon(0, QIcon(":/images/menu/left_menu_personalcenter.png"));
}
