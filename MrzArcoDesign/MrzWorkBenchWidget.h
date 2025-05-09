#pragma once

#include <QWidget>

class MrzWelcomSubLabel;
class MrzPopularOnlineWidget;
class MrzTrendingContentWidget;
class MrzContentAnalogyWidget;
class MrzAnnouncementWidget;
class MrzHelpDocumentWidget;

class MrzWorkBenchWidget  : public QWidget
{
	Q_OBJECT

public:
	MrzWorkBenchWidget(QWidget *parent);
	~MrzWorkBenchWidget();

private:
	void initUi();

private:
	MrzWelcomSubLabel* m_pMrzWelcomSubLabel;
	MrzWelcomSubLabel* m_pMrzWelcomSubLabel_2;
	MrzWelcomSubLabel* m_pMrzWelcomSubLabel_3;
	MrzWelcomSubLabel* m_pMrzWelcomSubLabel_4;

	MrzPopularOnlineWidget* m_pMrzPopularOnlineWidget;							// 内容管理
	MrzPopularOnlineWidget* m_pMrzPopularOnlineWidget_ContentStatistics;		// 内容统计
	MrzPopularOnlineWidget* m_pMrzPopularOnlineWidget_SeniorManagement;			// 高级管理
	MrzPopularOnlineWidget* m_pMrzPopularOnlineWidget_OnlineAdvertising;		// 线上推广
	MrzPopularOnlineWidget* m_pMrzPopularOnlineWidget_ContentDelivery;			// 内容投放

	MrzPopularOnlineWidget* m_pMrzPopularOnlineWidget_Statistics;				// 数据统计
	MrzPopularOnlineWidget* m_pMrzPopularOnlineWidget_2;						// 内容管理
	MrzPopularOnlineWidget* m_pMrzPopularOnlineWidget_SeniorManagement_2;		// 高级管理

	MrzTrendingContentWidget* m_pMrzTrendingContentWidget;						// 线上热门内容
	MrzContentAnalogyWidget* m_pMrzContentAnalogyWidget;						// 内容类比占比

	MrzAnnouncementWidget* m_pMrzAnnouncementWidget;							// 公告

	MrzHelpDocumentWidget* m_pMrzHelpDocumentWidget;							// 帮助文档
};
