#pragma execution_character_set("utf-8")
//#include "stdafx.h"
#include "MrzWorkBenchWidget.h"
#include "MrzWelcomSubLabel.h"
#include "MrzPopularOnlineWidget.h"
#include "MrzTrendingContentWidget.h"
#include "MrzContentAnalogyWidget.h"
#include "MrzAnnouncementWidget.h"
#include "MrzHelpDocumentWidget.h"

#include <QLabel>
#include <QPushButton>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QScrollArea>
#include <QGridLayout>

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
	pMainLyt->setSpacing(0);
	QVBoxLayout* pVMainLyt = new QVBoxLayout;
	pVMainLyt->setContentsMargins(0, 0, 0, 0);

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
	QLabel* pDividerLbl_2 = new QLabel(this);
	pDividerLbl_2->setFixedSize(864, 1);
	pDividerLbl_2->setStyleSheet("QLabel{background-color: rgba(255,255,255,1);border: 1px solid rgba(242,243,245,1);}");

	// 内容
	QHBoxLayout* pWelcomSubLyt = new QHBoxLayout;
	pWelcomSubLyt->setContentsMargins(0, 0, 0, 0);
	m_pMrzWelcomSubLabel = new MrzWelcomSubLabel(this);

	QLabel* phDividerLbl = new QLabel(this);
	phDividerLbl->setFixedSize(1, 60);
	phDividerLbl->setStyleSheet("QLabel{background-color: rgba(255,255,255,1);border: 1px solid rgba(242,243,245,1);}");
	QLabel* phDividerLbl_2 = new QLabel(this);
	phDividerLbl_2->setFixedSize(1, 60);
	phDividerLbl_2->setStyleSheet("QLabel{background-color: rgba(255,255,255,1);border: 1px solid rgba(242,243,245,1);}");
	QLabel* phDividerLbl_3 = new QLabel(this);
	phDividerLbl_3->setFixedSize(1, 60);
	phDividerLbl_3->setStyleSheet("QLabel{background-color: rgba(255,255,255,1);border: 1px solid rgba(242,243,245,1);}");
	//QLabel* phDividerLbl_4 = new QLabel(this);
	//phDividerLbl_4->setFixedSize(1, 60);
	//phDividerLbl_4->setStyleSheet("QLabel{background-color: rgba(255,255,255,1);border: 1px solid rgba(242,243,245,1);}");

	m_pMrzWelcomSubLabel_2 = new MrzWelcomSubLabel(this);
	m_pMrzWelcomSubLabel_3 = new MrzWelcomSubLabel(this);
	m_pMrzWelcomSubLabel_4 = new MrzWelcomSubLabel(this);

	pWelcomSubLyt->addWidget(m_pMrzWelcomSubLabel);
	pWelcomSubLyt->addWidget(phDividerLbl);
	pWelcomSubLyt->addWidget(m_pMrzWelcomSubLabel_2);
	pWelcomSubLyt->addWidget(phDividerLbl_2);
	pWelcomSubLyt->addWidget(m_pMrzWelcomSubLabel_3);
	pWelcomSubLyt->addWidget(phDividerLbl_3);
	pWelcomSubLyt->addWidget(m_pMrzWelcomSubLabel_4);
	//pWelcomSubLyt->addWidget(phDividerLbl);

	pTitleLyt->addSpacing(20);
	pTitleLyt->addWidget(pWelcomeLogo);
	pTitleLyt->addSpacing(20);
	pTitleLyt->addWidget(pDividerLbl);
	pTitleLyt->addSpacing(20);
	pTitleLyt->addLayout(pWelcomSubLyt);
	pTitleLyt->addSpacing(20);
	pTitleLyt->addWidget(pDividerLbl_2);
	pTitleLyt->addStretch();

	pWelcomeLyt->addSpacing(17);
	pWelcomeLyt->addLayout(pTitleLyt);
	pWelcomeLyt->addStretch();
	
	QWidget* pVRightWgt = new QWidget(this);
	pVRightWgt->setFixedSize(280, 549);
	QVBoxLayout* pVRightLyt = new QVBoxLayout(pVRightWgt);
	pVRightLyt->setContentsMargins(0, 0, 0, 0);

	QWidget* pRightWgt = new QWidget(this);
	pRightWgt->setFixedSize(280, 361);
	pRightWgt->setStyleSheet(strStyle);
	QVBoxLayout* pRightLyt = new QVBoxLayout(pRightWgt);
	pRightLyt->setContentsMargins(0, 0, 0, 0);

	QHBoxLayout* pRightTitleLyt = new QHBoxLayout;
	pRightTitleLyt->setContentsMargins(0, 0, 0, 0);
	QLabel* pTitleLbl = new QLabel(this);
	pTitleLbl->setText(u8"线上热门内容");
	pTitleLbl->setStyleSheet("QLabel{line-height: 22px;color: rgb(16,16,16);font-size: 16px;text-align: left;font-family: AlibabaPuHui-bold;}");

	QPushButton* pManageBtn = new QPushButton(this);
	pManageBtn->setText(u8"管理");
	pManageBtn->setStyleSheet("QPushButton{line-height: 17px;color: rgb(22,93,255);font-size: 12px;text-align: left;font-family: AlibabaPuHui-regular;}");
	
	pRightTitleLyt->addSpacing(20);
	pRightTitleLyt->addWidget(pTitleLbl);
	pRightTitleLyt->addStretch();
	pRightTitleLyt->addWidget(pManageBtn);
	pRightTitleLyt->addSpacing(20);

	// 线上热门内容
	//QVBoxLayout* pVOlineLyt = new QVBoxLayout;
	//pVOlineLyt->setContentsMargins(0, 0, 0, 0);
	//QHBoxLayout* pOnlineLyt = new QHBoxLayout;
	//pOnlineLyt->setContentsMargins(0, 0, 0, 0);

	QGridLayout* pGridLayout = new QGridLayout;
	pGridLayout->setContentsMargins(0, 0, 0, 0);
	pGridLayout->setHorizontalSpacing(30);
	pGridLayout->setVerticalSpacing(20);

	// 内容管理
	m_pMrzPopularOnlineWidget = new MrzPopularOnlineWidget(":/images/window/Content_Management.png", this);
	m_pMrzPopularOnlineWidget_ContentStatistics = new MrzPopularOnlineWidget(":/images/window/Content_Statistics.png", this);
	m_pMrzPopularOnlineWidget_SeniorManagement = new MrzPopularOnlineWidget(":/images/window/Senior_Management.png", this);
	//pOnlineLyt->addSpacing(38);
	//pOnlineLyt->addWidget(m_pMrzPopularOnlineWidget);
	//pOnlineLyt->addSpacing(30);
	//pOnlineLyt->addWidget(m_pMrzPopularOnlineWidget_ContentStatistics);
	//pOnlineLyt->addSpacing(30);
	//pOnlineLyt->addWidget(m_pMrzPopularOnlineWidget_SeniorManagement);
	//pOnlineLyt->addSpacing(38);
	//pOnlineLyt->addStretch();
	pGridLayout->addWidget(m_pMrzPopularOnlineWidget, 0, 0);
	pGridLayout->addWidget(m_pMrzPopularOnlineWidget_ContentStatistics, 0, 1);
	pGridLayout->addWidget(m_pMrzPopularOnlineWidget_SeniorManagement, 0, 2);
	

	//QHBoxLayout* pOnlineLyt_2 = new QHBoxLayout;
	//pOnlineLyt_2->setContentsMargins(0, 0, 0, 0);
	m_pMrzPopularOnlineWidget_OnlineAdvertising = new MrzPopularOnlineWidget(":/images/window/Online_Promotion.png", this);
	m_pMrzPopularOnlineWidget_ContentDelivery = new MrzPopularOnlineWidget(":/images/window/Content_delivery.png", this);
	//pOnlineLyt_2->addSpacing(38);
	//pOnlineLyt_2->addWidget(m_pMrzPopularOnlineWidget_OnlineAdvertising);
	//pOnlineLyt_2->addSpacing(30);
	//pOnlineLyt_2->addWidget(m_pMrzPopularOnlineWidget_ContentDelivery);
	//pOnlineLyt_2->addSpacing(38);
	//pOnlineLyt_2->addStretch();
	pGridLayout->addWidget(m_pMrzPopularOnlineWidget_OnlineAdvertising, 1, 0);
	pGridLayout->addWidget(m_pMrzPopularOnlineWidget_ContentDelivery, 1, 1);
	//pGridLayout->addWidget(m_pMrzPopularOnlineWidget_SeniorManagement, 1, 2);


	//pVOlineLyt->addLayout(pOnlineLyt);
	//pVOlineLyt->addSpacing(24);
	//pVOlineLyt->addLayout(pOnlineLyt_2);

	pRightLyt->addSpacing(20);
	pRightLyt->addLayout(pRightTitleLyt);
	//pRightLyt->addLayout(pOnlineLyt);
	//pRightLyt->addLayout(pVOlineLyt);
	pRightLyt->addSpacing(20);
	pRightLyt->addLayout(pGridLayout);

	// 分隔线
	QBoxLayout* pRightDividerLblLyt = new QHBoxLayout;
	pRightDividerLblLyt->setContentsMargins(0, 0, 0, 0);
	QLabel* pDividerLbl_3 = new QLabel(this);
	pDividerLbl_3->setFixedSize(240, 1);
	pDividerLbl_3->setStyleSheet("QLabel{background-color: rgba(255,255,255,1);border: 1px solid rgba(229,232,239,1);}");
	pRightDividerLblLyt->addStretch();
	pRightDividerLblLyt->addWidget(pDividerLbl_3);
	pRightDividerLblLyt->addStretch();
	pRightLyt->addSpacing(20);
	pRightLyt->addLayout(pRightDividerLblLyt);
	pRightLyt->addSpacing(20);
	//pRightLyt->addStretch();

	QHBoxLayout* pTitleLyt_2 = new QHBoxLayout;
	pTitleLyt_2->setContentsMargins(0, 0, 0, 0);
	QLabel* pTitleLbl_2 = new QLabel(this);
	pTitleLbl_2->setText(u8"线上热门内容");
	pTitleLbl_2->setStyleSheet("QLabel{line-height: 22px;color: rgb(16,16,16);font-size: 16px;text-align: left;font-family: AlibabaPuHui-bold;}");
	//pTitleLyt_2->addStretch();
	pTitleLyt_2->addSpacing(20);
	pTitleLyt_2->addWidget(pTitleLbl_2);
	pTitleLyt_2->addStretch();
	pRightLyt->addLayout(pTitleLyt_2);
	pRightLyt->addSpacing(20);

	QGridLayout* pGridLayout_2 = new QGridLayout;
	pGridLayout_2->setContentsMargins(0, 0, 0, 0);
	pGridLayout_2->setHorizontalSpacing(30);
	//pGridLayout_2->setVerticalSpacing(20);

	m_pMrzPopularOnlineWidget_Statistics = new MrzPopularOnlineWidget(":/images/window/Statistics.png", this);
	m_pMrzPopularOnlineWidget_2 = new MrzPopularOnlineWidget(":/images/window/Content_Management.png", this);
	m_pMrzPopularOnlineWidget_SeniorManagement_2 = new MrzPopularOnlineWidget(":/images/window/Senior_Management.png", this);
	pGridLayout_2->addWidget(m_pMrzPopularOnlineWidget_Statistics, 0, 0);
	pGridLayout_2->addWidget(m_pMrzPopularOnlineWidget_2, 0, 1);
	pGridLayout_2->addWidget(m_pMrzPopularOnlineWidget_SeniorManagement_2, 0, 2);
	pRightLyt->addLayout(pGridLayout_2);
	pRightLyt->addSpacing(20);
	pRightLyt->addStretch();


	QString stylePic = QString("QLabel{border-image:url(:/images/window/picture.png);border-radius: 4px;background-position: center;background-color: rgba(255,255,255,1);}");
	QLabel* pPictureLbl = new QLabel(this);
	pPictureLbl->setFixedSize(280, 170);
	pPictureLbl->setStyleSheet(stylePic);

	pVRightLyt->addWidget(pRightWgt);
	pVRightLyt->addSpacing(16);
	pVRightLyt->addWidget(pPictureLbl);

	pTopLyt->addSpacing(20);
	pTopLyt->addWidget(pWelcomeWgt);
	pTopLyt->addSpacing(16);
	pTopLyt->addWidget(pVRightWgt);
	pTopLyt->addSpacing(20);
	pTopLyt->addStretch();

	pVMainLyt->addSpacing(20);
	pVMainLyt->addLayout(pTopLyt);
	pVMainLyt->addSpacing(20);

	// 下半部分
	// 热门内容
	//QWidget* pBottomWgt = new QWidget(this);
	QHBoxLayout* pBottomLyt = new QHBoxLayout;
	pBottomLyt->setContentsMargins(0, 0, 0, 0);
	// 线上热门内容
	m_pMrzTrendingContentWidget = new MrzTrendingContentWidget(this);
	// 内容类比占比
	m_pMrzContentAnalogyWidget = new MrzContentAnalogyWidget(this);

	// 
	QVBoxLayout* pVBottomLyt = new QVBoxLayout;
	pVBottomLyt->setContentsMargins(0, 0, 0, 0);
	pVBottomLyt->setSpacing(0);
	m_pMrzAnnouncementWidget = new MrzAnnouncementWidget(this);
	m_pMrzHelpDocumentWidget = new MrzHelpDocumentWidget(this);
	pVBottomLyt->addWidget(m_pMrzAnnouncementWidget);
	pVBottomLyt->addSpacing(16);
	pVBottomLyt->addWidget(m_pMrzHelpDocumentWidget);

	pBottomLyt->addSpacing(20);
	pBottomLyt->addWidget(m_pMrzTrendingContentWidget);
	pBottomLyt->addSpacing(16);
	pBottomLyt->addWidget(m_pMrzContentAnalogyWidget);
	pBottomLyt->addSpacing(16);
	pBottomLyt->addLayout(pVBottomLyt);
	pBottomLyt->addStretch();


	pMainLyt->addLayout(pVMainLyt);
	pMainLyt->addSpacing(16);
	pMainLyt->addLayout(pBottomLyt);
	//pMainLyt->addSpacing(16);
	//pMainLyt->addLayout(pVBottomLyt);
	pMainLyt->addSpacing(24);
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
