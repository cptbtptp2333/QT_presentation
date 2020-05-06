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


public slots:
    //void world_clicked();

private slots:
    void on_world_exit_clicked();

    void on_world_EGG_clicked();

    void on_world_wav_clicked();


private:
    Ui::WORLD *ui;
    //QString wav_name;
    QString wave_path_dir="F:/python/myproject/synthesised wav";
};

#endif // WORLD_H
