#pragma once

#include <QWidget>
#include <QVBoxLayout>

class QPushButton;
class QTreeWidget;


class MrzLeftMenuBarWidget : public QWidget
{
	Q_OBJECT

public:
	MrzLeftMenuBarWidget(QWidget *parent);
	~MrzLeftMenuBarWidget();

private:
	void initUi();

private:
	//QVBoxLayout* m_pButtonLayout;
	
	//QPushButton* m_pDashBoardBtn;	// �Ǳ���
	//QPushButton* m_pDashBoardBtn;

	QTreeWidget* m_pTreeWidget;

};
