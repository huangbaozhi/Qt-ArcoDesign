#include "stdafx.h"
#include "MrzArcoDesign.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MrzArcoDesign w;
    w.show();
    return a.exec();
}
