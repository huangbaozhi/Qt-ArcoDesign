#pragma once

#include <QWidget>

class MrzContentAnalogyWidget  : public QWidget
{
	Q_OBJECT

public:
	MrzContentAnalogyWidget(QWidget *parent);
	~MrzContentAnalogyWidget();

private:
	void initUi();
};
