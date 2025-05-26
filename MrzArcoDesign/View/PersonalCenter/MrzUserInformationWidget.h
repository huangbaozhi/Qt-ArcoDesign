#pragma once

#include <QWidget>

class MrzUserInformationWidget  : public QWidget
{
	Q_OBJECT

public:
	MrzUserInformationWidget(QWidget *parent);
	~MrzUserInformationWidget();

private:
	void initUi();
};
