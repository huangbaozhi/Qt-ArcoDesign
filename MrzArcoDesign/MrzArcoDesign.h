#pragma once

#include <QtWidgets/QMainWindow>
//#include "ui_MrzArcoDesign.h"

//QT_BEGIN_NAMESPACE
//namespace Ui { class MrzArcoDesignClass; };
//QT_END_NAMESPACE
#include <QTreeWidget>
#include <QTreeWidgetItem>

class MrzTitleBarWidget;
class MrzLeftMenuBarWidget;
class MrzWorkBenchWidget;
class QStackedWidget;
class MrzPersonalCenterInterface;

class MrzArcoDesign : public QWidget
{
    Q_OBJECT

public:
    MrzArcoDesign(QWidget *parent = nullptr);
    ~MrzArcoDesign();

private:
    void initUi();
    void connectFun();

private slots:
    void turnPagesTreeItemClicked(QTreeWidgetItem* item, int column);

private:
    //Ui::MrzArcoDesignClass *ui;

    MrzTitleBarWidget* m_pMrzTitleBarWidget;
    MrzLeftMenuBarWidget* m_pMrzLeftMenuBarWidget;

    MrzWorkBenchWidget* m_pMrzWorkBenchWidget;

    MrzPersonalCenterInterface* m_pMrzPersonalCenterInterface;

    QStackedWidget* m_pStackedWidget;
};
