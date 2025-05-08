#pragma execution_character_set("utf-8")
#include "stdafx.h"
#include "MrzArcoDesign.h"
#include "MrzTitleBarWidget.h"
#include "MrzLeftMenuBarWidget.h"
#include "MrzWorkBenchWidget.h"

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
    delete m_pMrzLeftMenuBarWidget;
}

void MrzArcoDesign::initUi()
{
    QVBoxLayout* pMainLyt = new QVBoxLayout(this);
    pMainLyt->setContentsMargins(0, 0, 0, 0);

    m_pMrzTitleBarWidget = new MrzTitleBarWidget(this);
    pMainLyt->addWidget(m_pMrzTitleBarWidget);
    //pMainLyt->addStretch();

    QHBoxLayout* pHLyt = new QHBoxLayout;
    pHLyt->setContentsMargins(0, 0, 0, 0);
    pMainLyt->addLayout(pHLyt);
    pMainLyt->addStretch();

    m_pMrzLeftMenuBarWidget = new MrzLeftMenuBarWidget(this);
    pHLyt->addWidget(m_pMrzLeftMenuBarWidget);

    m_pMrzWorkBenchWidget = new MrzWorkBenchWidget(this);
    pHLyt->addWidget(m_pMrzWorkBenchWidget);
    pHLyt->addStretch();

}
