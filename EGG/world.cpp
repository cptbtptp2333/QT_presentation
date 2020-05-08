#include "world.h"
#include "ui_world.h"

WORLD::WORLD(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::WORLD)
{
    ui->setupUi(this);
}

WORLD::~WORLD()
{
    delete ui;
}

void WORLD::on_world_exit_clicked()
{
    close();
}

void WORLD::on_world_EGG_clicked()
{
    wav_name=ui->world_comboBox->currentText();
    QString world_EGG_path=QString("%1/%2/WORLD/%2-world_EGG.jpg").arg(wave_path_dir).arg(wav_name);
    QSound *sound_world_EGG=new QSound(QString("%1/%2/WORLD/%2-world_EGG~1.wav").arg(wave_path_dir).arg(wav_name));
    QPixmap pixmap_world_EGG;
        pixmap_world_EGG.load(world_EGG_path);
        ui->worldfigure->clear();
        ui->worldfigure->setPixmap(pixmap_world_EGG);
        ui->worldfigure->show();
    sound_world_EGG->play();
}

void WORLD::on_world_wav_clicked()
{
    wav_name=ui->world_comboBox->currentText();
    QString world_wav_path=QString("%1/%2/WORLD/%2-world_speech.jpg").arg(wave_path_dir).arg(wav_name);
    QSound *sound_world_wav=new QSound(QString("%1/%2/WORLD/%2-world_speech~1.wav").arg(wave_path_dir).arg(wav_name));
    QPixmap pixmap_world_wav;
        pixmap_world_wav.load(world_wav_path);
        ui->worldfigure->setPixmap(pixmap_world_wav);
        ui->worldfigure->show();
    sound_world_wav->play();
}


void WORLD::on_world_origin_clicked()
{
    wav_name=ui->world_comboBox->currentText();
        QString world_origin_pic_path=QString("%1/%2/%2-speech.jpg").arg(origin_wave_pic_dir).arg(wav_name);
        QSound *sound_world_origin=new QSound(QString("%1/%2.wav").arg(origin_wave_dir).arg(wav_name));
        QPixmap pixmap_world_origin;
            pixmap_world_origin.load(world_origin_pic_path);
            ui->worldfigure->clear();
            ui->worldfigure->setPixmap(pixmap_world_origin);
            ui->worldfigure->show();
        sound_world_origin->play();
}
