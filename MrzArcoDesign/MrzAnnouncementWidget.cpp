//#include "stdafx.h"
#include "MrzAnnouncementWidget.h"

#include <QPushButton>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QTableWidget>

static const QString styleWgt = QString("QWidget{line-height: 20px;border-radius: 4px;background-color: rgba(255, 255, 255, 1);color: rgba(22,93,255,1);font-size: 14px;text-align: center;font-family: -regular; }");

MrzAnnouncementWidget::MrzAnnouncementWidget(QWidget *parent)
	: QWidget(parent)
{
	setFixedSize(280, 212);
	initUi();
}

MrzAnnouncementWidget::~MrzAnnouncementWidget()
{}

void MrzAnnouncementWidget::initUi()
{
	QWidget* pMainWgt = new QWidget(this);
	pMainWgt->setFixedSize(280, 212);
	pMainWgt->setStyleSheet(styleWgt);
	QVBoxLayout* pMainLyt = new QVBoxLayout(pMainWgt);
}
