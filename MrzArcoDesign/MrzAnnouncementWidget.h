#pragma once

#include <QWidget>

class MrzAnnouncementWidget  : public QWidget
{
	Q_OBJECT

public:
	MrzAnnouncementWidget(QWidget *parent);
	~MrzAnnouncementWidget();

private:
	void initUi();
};
