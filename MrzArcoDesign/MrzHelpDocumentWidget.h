#pragma once

#include <QWidget>

class MrzHelpDocumentWidget  : public QWidget
{
	Q_OBJECT

public:
	MrzHelpDocumentWidget(QWidget *parent);
	~MrzHelpDocumentWidget();

private:
	void initUi();
};
