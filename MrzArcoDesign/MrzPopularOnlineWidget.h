#pragma once

#include <QWidget>

class MrzPopularOnlineWidget  : public QWidget
{
	Q_OBJECT

public:
	MrzPopularOnlineWidget(QString style, QWidget * parent);
	~MrzPopularOnlineWidget();

private:
	void initUi();

private:
	QString mStyle;
};
