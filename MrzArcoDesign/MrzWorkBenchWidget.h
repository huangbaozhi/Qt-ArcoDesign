#pragma once

#include <QWidget>

class MrzWelcomSubLabel;
class MrzPopularOnlineWidget;

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

	MrzPopularOnlineWidget* m_pMrzPopularOnlineWidget;

};
