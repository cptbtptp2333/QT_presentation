#include "klatt.h"
#include "ui_klatt.h"
#include <QtMultimedia/QSound>

Klatt::Klatt(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Klatt)
{
    ui->setupUi(this);
}

Klatt::~Klatt()
{
    delete ui;
}

void Klatt::on_klatt_exit_clicked()
{
    close();
}

void Klatt::on_klatt_EGG_clicked()
{
    wav_name=ui->klatt_comboBox->currentText();
    QString klatt_EGG_path=QString("%1/%2/klatt/%2-klatt_EGG.jpg").arg(wave_path_dir).arg(wav_name);
    QSound *sound_klatt_EGG=new QSound(QString("%1/%2/klatt/%2-klatt_EGG.wav").arg(wave_path_dir).arg(wav_name));
    QPixmap pixmap_klatt_EGG;
        pixmap_klatt_EGG.load(klatt_EGG_path);
        pixmap_klatt_EGG.load("F:/python/myproject/synthesised wav/bF0C11011/klatt/bF0C11011-klatt_EGG_wav.jpg");
        ui->klattfigure->clear();
        ui->klattfigure->setPixmap(pixmap_klatt_EGG);
        ui->klattfigure->show();
    sound_klatt_EGG->play();
}

void Klatt::on_klatt_pulse_clicked()
{
    wav_name=ui->klatt_comboBox->currentText();
    QString klatt_pulse_path=QString("%1/%2/klatt/%2-klatt_pulse.jpg").arg(wave_path_dir).arg(wav_name);
    QSound *sound_klatt_pulse=new QSound(QString("%1/%2/klatt/%2-klatt_pulse.wav").arg(wave_path_dir).arg(wav_name));
    QPixmap pixmap_klatt_pulse;
        pixmap_klatt_pulse.load(klatt_pulse_path);
        pixmap_klatt_pulse.load("F:/python/myproject/synthesised wav/bF0C11011/klatt/bF0C11011-klatt_pulse_wav.jpg");
        ui->klattfigure->clear();
        ui->klattfigure->setPixmap(pixmap_klatt_pulse);
        ui->klattfigure->show();    
    sound_klatt_pulse->play();
}
