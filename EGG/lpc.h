#ifndef LPC_H
#define LPC_H

#include <QDialog>
#include <QtMultimedia/QSound>

namespace Ui {
class LPC;
}

class LPC : public QDialog
{
    Q_OBJECT

public:
    explicit LPC(QWidget *parent = nullptr);
    ~LPC();

private slots:
    void on_lpc_exit_clicked();

    void on_lpc_EGG_clicked();

    void on_lpc_speech_clicked();

private:
    Ui::LPC *ui;
    QString wav_name;
    QString wave_path_dir="F:/python/myproject/synthesised wav";
    QSound *sound_lpc_EGG=new QSound("F:/python/myproject/synthesised wav/bF0C11011/LPC/bF0C11011-LPC_EGG.wav");
    QSound *sound_lpc_speech=new QSound("F:/python/myproject/synthesised wav/bF0C11011/LPC/bF0C11011-LPC_speech.wav");
};

#endif // LPC_H
