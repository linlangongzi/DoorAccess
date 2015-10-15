#include <QtGui>
#include "mainwindow.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    QTextCodec *codec = QTextCodec::codecForName("GB2312");
    QTextCodec::setCodecForLocale(codec);
    //QTextCodec::setCodecForLocale(codec);

    //QTextCodec::setCodecForCStrings(codec);

   // QTextCodec::setCodecForTr(codec);

    w.show();
    return a.exec();
}

