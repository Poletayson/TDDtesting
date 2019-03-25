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

    Ic.Save(Ic.img, "jpg");

    QString path = QDir::currentPath();  //QDir::currentPath();      //текущая директория
    QString file_name = QFileDialog::getSaveFileName(Q_NULLPTR, "Сохранить", path, "(*.jpg)");

            //im->save(file_name);
    //file_name += ".jpg";

//    QPixmap pix_map = QPixmap::grabWidget(ui->widget);
//    QPixmap pix_map2 = pix_map.copy(1, 1, 678, 258);
//    if (!pix_map2.save(file_name)) {
//        QMessageBox::information(this, "Картинка не была сохранена",
//                                 "Проверьте правильность названия и типа");
//    }
}

void MainWindow::on_pushButtonPng_clicked()
{
    QString path = QApplication::applicationDirPath();  //QDir::currentPath();      //текущая директория
    QString file_name = QFileDialog::getSaveFileName(this, "Сохранить", path, "(*.jpg)");
}

void MainWindow::on_pushButtonW_clicked()
{

}

void MainWindow::on_pushButtonH_clicked()
{

}


