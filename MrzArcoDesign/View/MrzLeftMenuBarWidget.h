#pragma once

#include <QWidget>
#include <QVBoxLayout>

class QPushButton;
class QTreeWidget;
class QTreeWidgetItem;

class MrzLeftMenuBarWidget : public QWidget
{
	Q_OBJECT

public:
	MrzLeftMenuBarWidget(QWidget *parent);
	~MrzLeftMenuBarWidget();

signals:
	void signTreeItemClicked(QTreeWidgetItem* item, int column);

private:
	void initUi();
	void connectFun();

	void onTreeItemClicked(QTreeWidgetItem* item, int column);

private:
	//QVBoxLayout* m_pButtonLayout;
	
	//QPushButton* m_pDashBoardBtn;	// “«±Ì≈Ã
	//QPushButton* m_pDashBoardBtn;

	QTreeWidget* m_pTreeWidget;

};
