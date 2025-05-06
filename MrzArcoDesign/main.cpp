#include "stdafx.h"
#include "MrzArcoDesign.h"
#include <QtWidgets/QApplication>
#include <QTextCodec>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    //QTextCodec::setCodecForLocale(QTextCodec::codecForName("UTF-8"));

    MrzArcoDesign w;
    w.show();
    return a.exec();
}
