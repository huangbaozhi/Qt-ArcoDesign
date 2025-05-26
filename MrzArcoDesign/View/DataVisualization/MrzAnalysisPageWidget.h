#pragma once

#include <QWidget>

class MrzAnalysisPageWidget  : public QWidget
{
	Q_OBJECT

public:
	MrzAnalysisPageWidget(QWidget *parent);
	~MrzAnalysisPageWidget();

private:
	void initUi();
};
