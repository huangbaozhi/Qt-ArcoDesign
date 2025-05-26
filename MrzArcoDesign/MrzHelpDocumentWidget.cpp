//#include "stdafx.h"
#include "MrzHelpDocumentWidget.h"

#include <QPushButton>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QTableWidget>

static const QString styleWgt = QString("QWidget{line-height: 20px;border-radius: 4px;background-color: rgba(255, 255, 255, 1);color: rgba(22,93,255,1);font-size: 14px;text-align: center;font-family: -regular; }");


MrzHelpDocumentWidget::MrzHelpDocumentWidget(QWidget *parent)
	: QWidget(parent)
{
	setFixedSize(280, 161);
	initUi();
}

MrzHelpDocumentWidget::~MrzHelpDocumentWidget()
{}

void MrzHelpDocumentWidget::initUi()
{
	QWidget* pMainWgt = new QWidget(this);
	pMainWgt->setFixedSize(280, 161);
	pMainWgt->setStyleSheet(styleWgt);
	QVBoxLayout* pMainLyt = new QVBoxLayout(pMainWgt);
}
