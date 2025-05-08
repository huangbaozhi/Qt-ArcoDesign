#pragma once

#include <QWidget>

class MrzWelcomSubLabel;

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
};
