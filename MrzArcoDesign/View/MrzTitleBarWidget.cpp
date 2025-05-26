//#include "stdafx.h"
#include "MrzTitleBarWidget.h"

#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QLabel>
#include <QPushButton>

MrzTitleBarWidget::MrzTitleBarWidget(QWidget *parent)
	: QWidget(parent)
{
	initUi();

	setMinimumSize(1440, 60);
	this->setStyleSheet("QWidget{background-color: rgba(255,255,255,1);}");
}

MrzTitleBarWidget::~MrzTitleBarWidget()
{}

void MrzTitleBarWidget::initUi()
{
	QHBoxLayout* pMainLyt = new QHBoxLayout(this);
	pMainLyt->setContentsMargins(0, 0, 0, 0);
	pMainLyt->setSpacing(0);

	QWidget* pTitleWgt = new QWidget;
	pMainLyt->addWidget(pTitleWgt);
	pTitleWgt->setStyleSheet("QWidget{background-color: rgba(255,255,255,1);}");

	QHBoxLayout* pTitleLyt = new QHBoxLayout(pTitleWgt);
	pTitleLyt->setContentsMargins(0, 0, 0, 0);

	QLabel* pLogoLbl = new QLabel(this);
	pLogoLbl->setFixedSize(32, 32);
	pLogoLbl->setStyleSheet("QLabel{border-image:url(:/images/title/title_logo_button.png);}");

	QLabel* pNameLbl = new QLabel(this);
	pNameLbl->setText("Arco Pro");
	pNameLbl->setStyleSheet("QLabel{line-height: 27px;color: rgb(16,16,16);font-size: 20px;font-size: 20px;font-family: AlibabaPuHui-medium;}");

	m_pSearchBtn = new QPushButton(this);
	m_pSearchBtn->setFixedSize(32, 32);
	m_pTranslateBtn = new QPushButton(this);
	m_pTranslateBtn->setFixedSize(32, 32);
	m_pVoiceBtn = new QPushButton(this);
	m_pVoiceBtn->setFixedSize(32, 32);
	m_pThemeModeBtn = new QPushButton(this);
	m_pThemeModeBtn->setFixedSize(32, 32);

	m_pSearchBtn->setStyleSheet("QPushButton{border-image:url(:/images/title/title_background_button.png);background-image:url(:/images/title/title_search_button.png);background-position: center;background-repeat: no-repeat;}");
	m_pTranslateBtn->setStyleSheet("QPushButton{border-image:url(:/images/title/title_background_button.png);background-image:url(:/images/title/title_translate_button.png);background-position: center;background-repeat: no-repeat;}");
	m_pVoiceBtn->setStyleSheet("QPushButton{border-image:url(:/images/title/title_background_button.png);background-image:url(:/images/title/title_voice_button.png);background-position: center;background-repeat: no-repeat;}");
	m_pThemeModeBtn->setStyleSheet("QPushButton{border-image:url(:/images/title/title_background_button.png);background-image:url(:/images/title/title_thememode_button.png);background-position: center;background-repeat: no-repeat;}");

	m_pAvatarLbl = new QLabel(this);
	m_pAvatarLbl->setFixedSize(32, 32);
	m_pAvatarLbl->setStyleSheet("QLabel{border-image:url(:/images/title/title_avatar_button.png);}");

	pTitleLyt->addSpacing(16);
	pTitleLyt->addWidget(pLogoLbl);
	pTitleLyt->addSpacing(10);
	pTitleLyt->addWidget(pNameLbl);
	pTitleLyt->addStretch();
	pTitleLyt->addWidget(m_pSearchBtn);
	pTitleLyt->addSpacing(16);
	pTitleLyt->addWidget(m_pTranslateBtn);
	pTitleLyt->addSpacing(16);
	pTitleLyt->addWidget(m_pVoiceBtn);
	pTitleLyt->addSpacing(16);
	pTitleLyt->addWidget(m_pThemeModeBtn);
	pTitleLyt->addSpacing(16);
	pTitleLyt->addWidget(m_pAvatarLbl);
	pTitleLyt->addSpacing(16);
}
