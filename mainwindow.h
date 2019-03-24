#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QDir>
#include <QFileDialog>
#include <imageconverter.h>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    ImageConverter Ic;

private slots:
    void on_pushButtonOpen_clicked();

    void on_pushButtonJpg_clicked();

    void on_pushButtonW_clicked();

    void on_pushButtonH_clicked();

    void on_pushButtonPng_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
