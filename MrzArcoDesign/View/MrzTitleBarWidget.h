#pragma once

#include <QWidget>

class QPushButton;
class QLabel;

class MrzTitleBarWidget  : public QWidget
{
	Q_OBJECT

public:
	MrzTitleBarWidget(QWidget *parent);
	~MrzTitleBarWidget();

private:
	void initUi();

private:
	QPushButton*	m_pSearchBtn;
	QPushButton*	m_pTranslateBtn;
	QPushButton*	m_pVoiceBtn;
	QPushButton*	m_pThemeModeBtn;

	QLabel*			m_pAvatarLbl;
};
