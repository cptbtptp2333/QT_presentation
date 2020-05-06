#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}


void Widget::on_exitbutton_clicked()
{
    close();
}

void Widget::on_klattbutton_clicked()
{
    klatt->show();
}

void Widget::on_LPCbutton_clicked()
{
    lpc->show();
}

void Widget::on_worldbutton_clicked()
{
    world->show();
}

void Widget::paintEvent(QPaintEvent *event)
{
    QPainter painter(this);
    painter.drawPixmap(rect(),QPixmap("F:/QT/projects/EGG/background.jpg"),QRect());

}
