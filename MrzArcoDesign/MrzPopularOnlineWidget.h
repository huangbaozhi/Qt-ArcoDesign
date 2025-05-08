#pragma once

#include <QWidget>

class MrzPopularOnlineWidget  : public QWidget
{
	Q_OBJECT

public:
	MrzPopularOnlineWidget(QWidget *parent);
	~MrzPopularOnlineWidget();

private:
	void initUi();
};
