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

    // ���˵���
    m_pMrzLeftMenuBarWidget = new MrzLeftMenuBarWidget(this);
    pHLyt->addWidget(m_pMrzLeftMenuBarWidget);

    // �м���
    m_pStackedWidget = new QStackedWidget(this);

    // ��ӭ����
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
    // �Ƚ�ָ���ַ�жϵ������
    if (item->text(0) == u8"����̨") 
    {
        m_pStackedWidget->setCurrentWidget(m_pMrzWorkBenchWidget);
    }
    else if (item->text(0) == QStringLiteral("����ҳ"))
    {
        //m_pStackedWidget->setCurrentWidget(m_pMrzPersonalCenterInterface);
    }
    else if (item->text(0) == QStringLiteral("��ά���ݷ���"))
    {
        //m_pStackedWidget->setCurrentWidget(m_pMrzPersonalCenterInterface);
    }
    else if (item->text(0) == QStringLiteral("��ѯ���"))
    {
        //m_pStackedWidget->setCurrentWidget(m_pMrzPersonalCenterInterface);
    }
    else if (item->text(0) == QStringLiteral("�����ʼ�"))
    {
        //m_pStackedWidget->setCurrentWidget(m_pMrzPersonalCenterInterface);
    }
    else if (item->text(0) == QStringLiteral("����ͨ"))
    {
        //m_pStackedWidget->setCurrentWidget(m_pMrzPersonalCenterInterface);
    }
    else if (item->text(0) == QStringLiteral("����Ԥ��"))
    {
        //m_pStackedWidget->setCurrentWidget(m_pMrzPersonalCenterInterface);
    }
    else if (item->text(0) == QStringLiteral("�ֲ���"))
    {
        //m_pStackedWidget->setCurrentWidget(m_pMrzPersonalCenterInterface);
    }
    else if (item->text(0) == QStringLiteral("�ֲ���2"))
    {
        //m_pStackedWidget->setCurrentWidget(m_pMrzPersonalCenterInterface);
    }
    else if (item->text(0) == QStringLiteral("�ֲ���3"))
    {
        //m_pStackedWidget->setCurrentWidget(m_pMrzPersonalCenterInterface);
    }
    else if (item->text(0) == QStringLiteral("�����")) 
    {
        //m_pStackedWidget->setCurrentWidget(m_pMrzPersonalCenterInterface);
    }
    else if (item->text(0) == QStringLiteral("��������ҳ"))
    {
        //m_pStackedWidget->setCurrentWidget(m_pMrzPersonalCenterInterface);
    }
    else if (item->text(0) == QStringLiteral("�ɹ�ҳ"))
    {
        //m_pStackedWidget->setCurrentWidget(m_pMrzPersonalCenterInterface);
    }
    else if (item->text(0) == QStringLiteral("ʧ��ҳ"))
    {
        //m_pStackedWidget->setCurrentWidget(m_pMrzPersonalCenterInterface);
    }
    else if (item->text(0) == u8"�û���Ϣ")
    {
        m_pStackedWidget->setCurrentWidget(m_pMrzPersonalCenterInterface);
    }
    else if (item->text(0) == QStringLiteral("��ȫ����"))
    {
        //m_pStackedWidget->setCurrentWidget(m_pMrzPersonalCenterInterface);
    }
    else if (item->text(0) == QStringLiteral("ʵ����֤"))
    {
        //m_pStackedWidget->setCurrentWidget(m_pMrzPersonalCenterInterface);
    }
}
