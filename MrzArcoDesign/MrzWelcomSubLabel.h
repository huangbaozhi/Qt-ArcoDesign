#pragma once

#include <QWidget>

class MrzWelcomSubLabel  : public QWidget
{
	Q_OBJECT

public:
	MrzWelcomSubLabel(QWidget *parent);
	~MrzWelcomSubLabel();

private:
	void initUi();
};
