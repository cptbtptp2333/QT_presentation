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
    QString wav_name;

private slots:
    void on_lpc_exit_clicked();

    void on_lpc_EGG_clicked();

    void on_lpc_speech_clicked();

private:
    Ui::LPC *ui;
    QString wave_path_dir="F:/python/myproject/synthesised wav";
};

#endif // LPC_H
