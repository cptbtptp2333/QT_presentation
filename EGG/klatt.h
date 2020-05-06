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

private slots:

    void on_klatt_exit_clicked();

    void on_klatt_EGG_clicked();

    void on_klatt_pulse_clicked();

private:
    Ui::Klatt *ui;
    QString wav_name;
    QString wave_path_dir="F:/python/myproject/synthesised wav";
    QSound *sound_klatt_EGG=new QSound("F:/python/myproject/synthesised wav/bF0C11011/klatt/bF0C11011-klatt_EGG.wav");
    QSound *sound_klatt_pulse=new QSound("F:/python/myproject/synthesised wav/bF0C11011/klatt/bF0C11011-klatt_pulse.wav");
};

#endif // KLATT_H
