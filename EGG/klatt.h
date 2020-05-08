#ifndef KLATT_H
#define KLATT_H

#include <QDialog>
#include <QtMultimedia/QSound>

namespace Ui {
class Klatt;
}

class Klatt : public QDialog
{
    Q_OBJECT

public:
    explicit Klatt(QWidget *parent = nullptr);
    ~Klatt();
    QString wav_name;

private slots:

    void on_klatt_exit_clicked();

    void on_klatt_EGG_clicked();

    void on_klatt_pulse_clicked();

    void on_klatt_origin_clicked();

private:
    Ui::Klatt *ui;
    QString wave_path_dir="F:/python/myproject/synthesised wav";
    QString origin_wave_dir="F:/EGG/test";
    QString origin_wave_pic_dir="F:/python/myproject/f0_EGG/test";
};

#endif // KLATT_H
