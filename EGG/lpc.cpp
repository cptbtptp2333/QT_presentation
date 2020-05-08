#include "lpc.h"
#include "ui_lpc.h"

LPC::LPC(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::LPC)
{
    ui->setupUi(this);
}

LPC::~LPC()
{
    delete ui;
}

void LPC::on_lpc_exit_clicked()
{
    close();
}

void LPC::on_lpc_EGG_clicked()
{
    wav_name=ui->lpc_comboBox->currentText();
    QString lpc_EGG_pic_path=QString("%1/%2/LPC/%2-lpc_EGG.jpg").arg(wave_path_dir).arg(wav_name);
    QSound *sound_lpc_EGG=new QSound(QString("%1/%2/LPC/%2-lpc_EGG.wav").arg(wave_path_dir).arg(wav_name));
    QPixmap pixmap_lpc_EGG;
        pixmap_lpc_EGG.load(lpc_EGG_pic_path);
        ui->lpcfigure->clear();
        ui->lpcfigure->setPixmap(pixmap_lpc_EGG);
        ui->lpcfigure->show();
    sound_lpc_EGG->play();
}

void LPC::on_lpc_speech_clicked()
{
    wav_name=ui->lpc_comboBox->currentText();
    QString lpc_speech_pic_path=QString("%1/%2/LPC/%2-lpc_speech.jpg").arg(wave_path_dir).arg(wav_name);
    QSound *sound_lpc_speech=new QSound(QString("%1/%2/LPC/%2-lpc_speech.wav").arg(wave_path_dir).arg(wav_name));
    QPixmap pixmap_lpc_speech;
        pixmap_lpc_speech.load(lpc_speech_pic_path);
        ui->lpcfigure->clear();
        ui->lpcfigure->setPixmap(pixmap_lpc_speech);
        ui->lpcfigure->show();
    sound_lpc_speech->play();
}

void LPC::on_lpc_origin_clicked()
{
    wav_name=ui->lpc_comboBox->currentText();
    QString lpc_origin_pic_path=QString("%1/%2/%2-speech.jpg").arg(origin_wave_pic_dir).arg(wav_name);
    QSound *sound_lpc_origin=new QSound(QString("%1/%2.wav").arg(origin_wave_dir).arg(wav_name));
    QPixmap pixmap_lpc_origin;
        pixmap_lpc_origin.load(lpc_origin_pic_path);
        ui->lpcfigure->clear();
        ui->lpcfigure->setPixmap(pixmap_lpc_origin);
        ui->lpcfigure->show();
    sound_lpc_origin->play();
}
