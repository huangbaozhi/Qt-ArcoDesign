#pragma once

#include <QWidget>

class MrzUserInformationWidget;

class MrzPersonalCenterInterface  : public QWidget
{
	Q_OBJECT

public:
	MrzPersonalCenterInterface(QWidget *parent);
	~MrzPersonalCenterInterface();

private:
	void initUi();

private:
	MrzUserInformationWidget* m_pMrzUserInformationWidget;
};
