#include "teawidget.h"
#include <QApplication>
#include <QTextCodec>
int main(int argc, char *argv[]){
    QTextCodec::setCodecForCStrings(QTextCodec::codecForName("UTF8"));
    QTextCodec::setCodecForLocale(QTextCodec::codecForName("UTF8"));
    QTextCodec::setCodecForTr(QTextCodec::codecForName("UTF8"));
    QApplication mApp(argc,argv);
    teaWidget teaWid;


    teaWid.move(100,200);
    teaWid.show();
    return mApp.exec();
}
