#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include "klatt.h"
#include "lpc.h"
#include "world.h"
#include <QPainter>

QT_BEGIN_NAMESPACE
namespace Ui { class Widget; }
QT_END_NAMESPACE

class Widget : public QWidget
{
    Q_OBJECT

public:
    Widget(QWidget *parent = nullptr);
    ~Widget();

private slots:
    void on_exitbutton_clicked();

    void on_klattbutton_clicked();

    void on_LPCbutton_clicked();

    void on_worldbutton_clicked();

    void paintEvent(QPaintEvent *event);

private:
    Ui::Widget *ui;
private:
    Klatt *klatt=new Klatt;
    LPC *lpc=new LPC;
    WORLD *world=new WORLD;
};
#endif // WIDGET_H
