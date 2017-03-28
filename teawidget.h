#ifndef TEAWIDGET_H
#define TEAWIDGET_H

#include <QWidget>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>

class teaWidget : public QWidget
{
    Q_OBJECT
public:
    explicit teaWidget(QWidget *parent = 0);
private:
    QLabel *teaLabel;
    QLineEdit *teaLineEdit;
    QPushButton * teaPushButton;

signals:

public slots:
    void teaSlotPushButton();

};

#endif // TEAWIDGET_H
