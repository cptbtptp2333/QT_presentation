#ifndef WORLD_H
#define WORLD_H

#include <QDialog>
#include <QtMultimedia/QSound>

namespace Ui {
class WORLD;
}

class WORLD : public QDialog
{
    Q_OBJECT

public:
    explicit WORLD(QWidget *parent = nullptr);
    ~WORLD();
    QString wav_name;

private slots:
    void on_world_exit_clicked();

    void on_world_EGG_clicked();

    void on_world_wav_clicked();

    void on_world_origin_clicked();

private:
    Ui::WORLD *ui;
    QString wave_path_dir="F:/python/myproject/synthesised wav";
    QString origin_wave_dir="F:/EGG/test";
    QString origin_wave_pic_dir="F:/python/myproject/f0_EGG/test";
};

#endif // WORLD_H
