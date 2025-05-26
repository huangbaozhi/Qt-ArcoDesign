//#include "stdafx.h"
#include "MrzUserInformationWidget.h"

#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QLabel>
#include <QPushButton>

MrzUserInformationWidget::MrzUserInformationWidget(QWidget *parent)
	: QWidget(parent)
{
	initUi();
}

MrzUserInformationWidget::~MrzUserInformationWidget()
{}

void MrzUserInformationWidget::initUi()
{
	QWidget* pMainWgt = new QWidget(this);
	pMainWgt->setFixedSize(1240, 996);
	QVBoxLayout* pMainLyt = new QVBoxLayout(pMainWgt);
	pMainLyt->setContentsMargins(0, 0, 0, 0);
	pMainLyt->setSpacing(0);

	QVBoxLayout* pVMainLyt = new QVBoxLayout;
	pVMainLyt->setContentsMargins(0, 0, 0, 0);


}
