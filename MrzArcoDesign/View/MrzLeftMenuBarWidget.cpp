#pragma execution_character_set("utf-8")
//#include "stdafx.h"
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
	connectFun();
}

MrzLeftMenuBarWidget::~MrzLeftMenuBarWidget()
{}

void MrzLeftMenuBarWidget::initUi()
{
	QHBoxLayout* pMainLyt = new QHBoxLayout(this);
	pMainLyt->setContentsMargins(0, 0, 0, 0);
	pMainLyt->setSpacing(0);

	QVBoxLayout* pVLyt = new QVBoxLayout;
	pVLyt->setContentsMargins(0, 0, 0, 0);
	pMainLyt->addLayout(pVLyt);
	pMainLyt->addStretch();

	m_pTreeWidget = new QTreeWidget(this);
	m_pTreeWidget->setRootIsDecorated(true);
	m_pTreeWidget->setFrameStyle(QFrame::NoFrame);

	pVLyt->addSpacing(0);
	pVLyt->addWidget(m_pTreeWidget);
	pVLyt->addStretch();

	m_pTreeWidget->setMinimumHeight(840);
	m_pTreeWidget->setHeaderHidden(true);
	m_pTreeWidget->setIndentation(10);
	m_pTreeWidget->setStyleSheet("QTreeWidget::item{height:40px;background-color: rgba(255,255,255,1);color: rgba(16,16,16,1);font-size: 14px;text-align: center;font-family: -regular;border: 0px;}");

	QTreeWidgetItem* pDashboardItem = new QTreeWidgetItem(m_pTreeWidget, QStringList(u8"�Ǳ���"));
	QTreeWidgetItem* pDashboardChildItem = new QTreeWidgetItem(pDashboardItem, QStringList(u8"����̨"));

	QTreeWidgetItem* pDataVisualizationItem = new QTreeWidgetItem(m_pTreeWidget, QStringList(u8"���ݿ��ӻ�"));
	QTreeWidgetItem* pDataVisualizationChildItem = new QTreeWidgetItem(pDataVisualizationItem, QStringList(u8"����ҳ"));
	QTreeWidgetItem* pDataVisualizationMulChildItem = new QTreeWidgetItem(pDataVisualizationItem, QStringList(u8"��ά���ݷ���"));

	QTreeWidgetItem* pListPageItem = new QTreeWidgetItem(m_pTreeWidget, QStringList(u8"�б�ҳ"));
	QTreeWidgetItem* pListPageChildItem_inquiryform = new QTreeWidgetItem(pListPageItem, QStringList(u8"��ѯ���"));
	QTreeWidgetItem* pListPageChildItem_cardlist = new QTreeWidgetItem(pListPageItem, QStringList(u8"��Ƭ�б�"));
	QTreeWidgetItem* pListPageChildItem_cardlist_contentquality = new QTreeWidgetItem(pListPageChildItem_cardlist, QStringList(u8"�����ʼ�"));
	QTreeWidgetItem* pListPageChildItem_cardlist_contentquality_service = new QTreeWidgetItem(pListPageChildItem_cardlist, QStringList(u8"����ͨ"));
	QTreeWidgetItem* pListPageChildItem_cardlist_contentquality_rule = new QTreeWidgetItem(pListPageChildItem_cardlist, QStringList(u8"����Ԥ��"));

	QTreeWidgetItem* pFormPageItem = new QTreeWidgetItem(m_pTreeWidget, QStringList(u8"��ҳ"));
	QTreeWidgetItem* pFormPageItem_distributed = new QTreeWidgetItem(pFormPageItem, QStringList(u8"�ֲ���"));
	QTreeWidgetItem* pFormPageItem_distributed_2 = new QTreeWidgetItem(pFormPageItem_distributed, QStringList(u8"�ֲ���2"));
	QTreeWidgetItem* pFormPageItem_distributed_3 = new QTreeWidgetItem(pFormPageItem_distributed, QStringList(u8"�ֲ���3"));
	QTreeWidgetItem* pFormPageItem_group = new QTreeWidgetItem(pFormPageItem, QStringList(u8"�����"));

	QTreeWidgetItem* pDetailsPageItem = new QTreeWidgetItem(m_pTreeWidget, QStringList(u8"����ҳ"));
	QTreeWidgetItem* pDetailsPageItem_base = new QTreeWidgetItem(pDetailsPageItem, QStringList(u8"��������ҳ"));

	QTreeWidgetItem* pResultsPageItem = new QTreeWidgetItem(m_pTreeWidget, QStringList(u8"���ҳ"));
	QTreeWidgetItem* pResultsPageItem_success = new QTreeWidgetItem(pResultsPageItem, QStringList(u8"�ɹ�ҳ"));
	QTreeWidgetItem* pResultsPageItem_fail = new QTreeWidgetItem(pResultsPageItem, QStringList(u8"ʧ��ҳ"));

	//QTreeWidgetItem* pExceptionPageItem = new QTreeWidgetItem(m_pTreeWidget, QStringList(QStringLiteral("�쳣ҳ")));

	QTreeWidgetItem* pPersonalCenterItem = new QTreeWidgetItem(m_pTreeWidget, QStringList(u8"��������"));
	QTreeWidgetItem* pPersonalCenterChildItem_userInfo = new QTreeWidgetItem(pPersonalCenterItem, QStringList(u8"�û���Ϣ"));
	QTreeWidgetItem* pPersonalCenterChildItem_userset = new QTreeWidgetItem(pPersonalCenterItem, QStringList(u8"�û�����"));
	QTreeWidgetItem* pPersonalCenterChildItem_userset_securityset = new QTreeWidgetItem(pPersonalCenterChildItem_userset, QStringList(u8"��ȫ����"));
	QTreeWidgetItem* pPersonalCenterChildItem_userset_realnamecertificate = new QTreeWidgetItem(pPersonalCenterChildItem_userset, QStringList(u8"ʵ����֤"));

	pDashboardItem->setIcon(0, QIcon(":/images/menu/left_menu_dashboard.png"));
	pDataVisualizationItem->setIcon(0, QIcon(":/images/menu/left_menu_datavcisualizetion.png"));
	pListPageItem->setIcon(0, QIcon(":/images/menu/left_menu_listpage.png"));
	pFormPageItem->setIcon(0, QIcon(":/images/menu/left_menu_formpagen.png"));
	pDetailsPageItem->setIcon(0, QIcon(":/images/menu/left_menu_detailspage.png"));
	pResultsPageItem->setIcon(0, QIcon(":/images/menu/left_menu_resultspage.png"));
	//pExceptionPageItem->setIcon(0, QIcon(":/images/menu/left_menu_exceptionpage.png"));
	pPersonalCenterItem->setIcon(0, QIcon(":/images/menu/left_menu_personalcenter.png"));
}

void MrzLeftMenuBarWidget::connectFun()
{
	connect(m_pTreeWidget, &QTreeWidget::itemClicked, this, &MrzLeftMenuBarWidget::onTreeItemClicked);
}

void MrzLeftMenuBarWidget::onTreeItemClicked(QTreeWidgetItem* item, int column)
{
	emit signTreeItemClicked(item, column);
}
