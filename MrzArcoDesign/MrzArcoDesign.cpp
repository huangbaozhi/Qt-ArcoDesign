#pragma execution_character_set("utf-8")
//#include "stdafx.h"
#include "MrzArcoDesign.h"
#include "MrzTitleBarWidget.h"
#include "MrzLeftMenuBarWidget.h"
#include "MrzWorkBenchWidget.h"
#include "MrzPersonalCenterInterface.h"

#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QStackedWidget>

MrzArcoDesign::MrzArcoDesign(QWidget *parent)
    : QWidget(parent)
    //, ui(new Ui::MrzArcoDesignClass())
{
    //ui->setupUi(this);

    //setMinimumSize(1440, 900);
    setFixedSize(1440, 900);
    //setStyleSheet("line-height: 20px;background-color: rgba(255,255,255,1);color: rgba(16,16,16,1);font-size: 14px;text-align: center;box-shadow: 0px 6px 10px 0px rgba(78,89,105,0.06);font-family: -regular;");

    initUi();
    connectFun();
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
    //m_pMrzTitleBarWidget->setStyleSheet("QWidget{box-shadow: 10px 5px 5px black;}");
    pMainLyt->addWidget(m_pMrzTitleBarWidget);
    //pMainLyt->addStretch();

    QHBoxLayout* pHLyt = new QHBoxLayout;
    pHLyt->setContentsMargins(0, 0, 0, 0);
    pMainLyt->addLayout(pHLyt);
    pMainLyt->addStretch();

    // 左侧菜单栏
    m_pMrzLeftMenuBarWidget = new MrzLeftMenuBarWidget(this);
    pHLyt->addWidget(m_pMrzLeftMenuBarWidget);

    // 中间栏
    m_pStackedWidget = new QStackedWidget(this);

    // 欢迎界面
    m_pMrzWorkBenchWidget = new MrzWorkBenchWidget(this);
    m_pMrzPersonalCenterInterface = new MrzPersonalCenterInterface(this);
    m_pStackedWidget->addWidget(m_pMrzWorkBenchWidget);
    m_pStackedWidget->addWidget(m_pMrzPersonalCenterInterface);
    m_pStackedWidget->setCurrentWidget(m_pMrzWorkBenchWidget);

    //pHLyt->addWidget(m_pMrzWorkBenchWidget);
    pHLyt->addWidget(m_pStackedWidget);
    pHLyt->addStretch();
}

void MrzArcoDesign::connectFun()
{
    connect(m_pMrzLeftMenuBarWidget, &MrzLeftMenuBarWidget::signTreeItemClicked, this, &MrzArcoDesign::turnPagesTreeItemClicked);
}

void MrzArcoDesign::turnPagesTreeItemClicked(QTreeWidgetItem* item, int column)
{
    // 比较指针地址判断点击的项
    if (item->text(0) == u8"工作台") 
    {
        m_pStackedWidget->setCurrentWidget(m_pMrzWorkBenchWidget);
    }
    else if (item->text(0) == QStringLiteral("分析页"))
    {
        //m_pStackedWidget->setCurrentWidget(m_pMrzPersonalCenterInterface);
    }
    else if (item->text(0) == QStringLiteral("多维数据分析"))
    {
        //m_pStackedWidget->setCurrentWidget(m_pMrzPersonalCenterInterface);
    }
    else if (item->text(0) == QStringLiteral("查询表格"))
    {
        //m_pStackedWidget->setCurrentWidget(m_pMrzPersonalCenterInterface);
    }
    else if (item->text(0) == QStringLiteral("内容质检"))
    {
        //m_pStackedWidget->setCurrentWidget(m_pMrzPersonalCenterInterface);
    }
    else if (item->text(0) == QStringLiteral("服务开通"))
    {
        //m_pStackedWidget->setCurrentWidget(m_pMrzPersonalCenterInterface);
    }
    else if (item->text(0) == QStringLiteral("规则预制"))
    {
        //m_pStackedWidget->setCurrentWidget(m_pMrzPersonalCenterInterface);
    }
    else if (item->text(0) == QStringLiteral("分布表单"))
    {
        //m_pStackedWidget->setCurrentWidget(m_pMrzPersonalCenterInterface);
    }
    else if (item->text(0) == QStringLiteral("分布表单2"))
    {
        //m_pStackedWidget->setCurrentWidget(m_pMrzPersonalCenterInterface);
    }
    else if (item->text(0) == QStringLiteral("分布表单3"))
    {
        //m_pStackedWidget->setCurrentWidget(m_pMrzPersonalCenterInterface);
    }
    else if (item->text(0) == QStringLiteral("分组表单")) 
    {
        //m_pStackedWidget->setCurrentWidget(m_pMrzPersonalCenterInterface);
    }
    else if (item->text(0) == QStringLiteral("基础详情页"))
    {
        //m_pStackedWidget->setCurrentWidget(m_pMrzPersonalCenterInterface);
    }
    else if (item->text(0) == QStringLiteral("成功页"))
    {
        //m_pStackedWidget->setCurrentWidget(m_pMrzPersonalCenterInterface);
    }
    else if (item->text(0) == QStringLiteral("失败页"))
    {
        //m_pStackedWidget->setCurrentWidget(m_pMrzPersonalCenterInterface);
    }
    else if (item->text(0) == u8"用户信息")
    {
        m_pStackedWidget->setCurrentWidget(m_pMrzPersonalCenterInterface);
    }
    else if (item->text(0) == QStringLiteral("安全设置"))
    {
        //m_pStackedWidget->setCurrentWidget(m_pMrzPersonalCenterInterface);
    }
    else if (item->text(0) == QStringLiteral("实名认证"))
    {
        //m_pStackedWidget->setCurrentWidget(m_pMrzPersonalCenterInterface);
    }
}
