#include "stdafx.h"
#include "MrzArcoDesign.h"
#include "MrzTitleBarWidget.h"

#include <QHBoxLayout>
#include <QVBoxLayout>

MrzArcoDesign::MrzArcoDesign(QWidget *parent)
    : QWidget(parent)
    //, ui(new Ui::MrzArcoDesignClass())
{
    //ui->setupUi(this);

    setMinimumSize(1440, 900);

    initUi();
}

MrzArcoDesign::~MrzArcoDesign()
{
    //delete ui;
}

void MrzArcoDesign::initUi()
{
    QVBoxLayout* pMainLyt = new QVBoxLayout(this);
    pMainLyt->setContentsMargins(0, 0, 0, 0);

    m_pMrzTitleBarWidget = new MrzTitleBarWidget(this);
    pMainLyt->addWidget(m_pMrzTitleBarWidget);
    pMainLyt->addStretch();


}
