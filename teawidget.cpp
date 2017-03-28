#include "teawidget.h"
#include <QWidget>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
#include <QMessageBox>

teaWidget::teaWidget(QWidget *parent) :
    QWidget(parent)
{
    teaLabel = new QLabel(this);
    teaLabel->setText("Фамилия");
    teaLabel->setGeometry(10,0,100,30);

    teaLineEdit = new QLineEdit(this);
    teaLineEdit->selectAll();
    teaLineEdit->setGeometry(10,30,100,30);

    teaPushButton = new QPushButton(this);
    teaPushButton->setGeometry(10,60,100,30);
    teaPushButton->setText("Привет!");
    connect(teaPushButton,SIGNAL(clicked()),this,SLOT(teaSlotPushButton()));

}
void teaWidget::teaSlotPushButton(){
    QMessageBox::warning(this,"Сообщение",qPrintable(teaLineEdit->text()));
}
