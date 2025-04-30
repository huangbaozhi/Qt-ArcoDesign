#pragma once

#include <QtWidgets/QMainWindow>
//#include "ui_MrzArcoDesign.h"

//QT_BEGIN_NAMESPACE
//namespace Ui { class MrzArcoDesignClass; };
//QT_END_NAMESPACE

class MrzTitleBarWidget;

class MrzArcoDesign : public QWidget
{
    Q_OBJECT

public:
    MrzArcoDesign(QWidget *parent = nullptr);
    ~MrzArcoDesign();

private:
    void initUi();

private:
    //Ui::MrzArcoDesignClass *ui;

    MrzTitleBarWidget* m_pMrzTitleBarWidget;
};
