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

	MrzPopularOnlineWidget* m_pMrzPopularOnlineWidget;							// ���ݹ���
	MrzPopularOnlineWidget* m_pMrzPopularOnlineWidget_ContentStatistics;		// ����ͳ��
	MrzPopularOnlineWidget* m_pMrzPopularOnlineWidget_SeniorManagement;			// �߼�����
	MrzPopularOnlineWidget* m_pMrzPopularOnlineWidget_OnlineAdvertising;		// �����ƹ�
	MrzPopularOnlineWidget* m_pMrzPopularOnlineWidget_ContentDelivery;			// ����Ͷ��

	MrzPopularOnlineWidget* m_pMrzPopularOnlineWidget_Statistics;				// ����ͳ��
	MrzPopularOnlineWidget* m_pMrzPopularOnlineWidget_2;						// ���ݹ���
	MrzPopularOnlineWidget* m_pMrzPopularOnlineWidget_SeniorManagement_2;		// �߼�����

	MrzTrendingContentWidget* m_pMrzTrendingContentWidget;						// ������������
	MrzContentAnalogyWidget* m_pMrzContentAnalogyWidget;						// �������ռ��

	MrzAnnouncementWidget* m_pMrzAnnouncementWidget;							// ����

	MrzHelpDocumentWidget* m_pMrzHelpDocumentWidget;							// �����ĵ�
};
