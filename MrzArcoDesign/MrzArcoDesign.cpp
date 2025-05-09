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

    //setMinimumSize(1440, 900);
    setFixedSize(1440, 900);
    //setStyleSheet("line-height: 20px;background-color: rgba(255,255,255,1);color: rgba(16,16,16,1);font-size: 14px;text-align: center;box-shadow: 0px 6px 10px 0px rgba(78,89,105,0.06);font-family: -regular;");

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
    pMainLyt->setSpacing(0);

    m_pMrzTitleBarWidget = new MrzTitleBarWidget(this);
    m_pMrzTitleBarWidget->setStyleSheet("QWidget{box-shadow: 10px 5px 5px black;}");
    pMainLyt->addWidget(m_pMrzTitleBarWidget);
    //pMainLyt->addStretch();

    QHBoxLayout* pHLyt = new QHBoxLayout;
    pHLyt->setContentsMargins(0, 0, 0, 0);
    pMainLyt->addLayout(pHLyt);
    pMainLyt->addStretch();

    // ×ó²à²Ëµ¥À¸
    m_pMrzLeftMenuBarWidget = new MrzLeftMenuBarWidget(this);
    pHLyt->addWidget(m_pMrzLeftMenuBarWidget);

    // ÖÐ¼äÀ¸
    m_pMrzWorkBenchWidget = new MrzWorkBenchWidget(this);
    pHLyt->addWidget(m_pMrzWorkBenchWidget);
    pHLyt->addStretch();

}
