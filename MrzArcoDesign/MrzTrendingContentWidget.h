#pragma once

#include <QWidget>

class MrzTrendingContentWidget  : public QWidget
{
	Q_OBJECT

public:
	MrzTrendingContentWidget(QWidget *parent);
	~MrzTrendingContentWidget();

private:
	void initUi();
};
