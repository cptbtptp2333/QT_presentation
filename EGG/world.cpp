#include "world.h"
#include "ui_world.h"

WORLD::WORLD(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::WORLD)
{
    ui->setupUi(this);
    QComboBox world_comboBox;
    wav_name=world_comboBox.currentText();
    //wav_name="bF0C11011";
    //QObject::connect(ui->world_comboBox,SIGNAL(currentTextChanged(QString)),this,SLOT(world_clicked));
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
    QString world_wav_path=QString("%1/%2/WORLD/%2-world_speech.jpg").arg(wave_path_dir).arg(wav_name);
    QSound *sound_world_wav=new QSound(QString("%1/%2/WORLD/%2-world_speech~1.wav").arg(wave_path_dir).arg(wav_name));
    QPixmap pixmap_world_wav;
        pixmap_world_wav.load(world_wav_path);
        ui->worldfigure->setPixmap(pixmap_world_wav);
        ui->worldfigure->show();
    sound_world_wav->play();
}

/*
void WORLD::world_clicked()
{
    wav_name=ui->world_comboBox->currentText();
}
*/
