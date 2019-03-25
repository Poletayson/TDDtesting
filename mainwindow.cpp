#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButtonOpen_clicked()    //открыть
{
    QString path = QApplication::applicationDirPath();  //QDir::currentPath();      //текущая директория

    QString fileName = QFileDialog::getOpenFileName(this, "Выберите входной файл", path);
    Ic.Open(fileName);
    if (!Ic.img->isNull())
        ui->label->setText(fileName);
    else
        ui->label->setText("error");
}

void MainWindow::on_pushButtonJpg_clicked()
{
    QString path = QDir::currentPath();  //QDir::currentPath();      //текущая директория
    QString file_name = QFileDialog::getSaveFileName(Q_NULLPTR, "Сохранить", path, "(*.jpg)");
    Ic.Save(Ic.img, file_name);
}

void MainWindow::on_pushButtonPng_clicked()
{
    QString path = QDir::currentPath();  //QDir::currentPath();      //текущая директория
    QString file_name = QFileDialog::getSaveFileName(Q_NULLPTR, "Сохранить", path, "(*.png)");
    Ic.Save(Ic.img, file_name);
}

void MainWindow::on_pushButtonW_clicked()
{
    Ic.WidthScaling();
}

void MainWindow::on_pushButtonH_clicked()
{
    Ic.HeightScaling();
}


