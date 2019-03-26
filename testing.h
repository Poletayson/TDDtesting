#include <imageconverter.h>
#include <QtTest>
#include <QImage>
#include <QDir>
#include <QFileDialog>
#ifndef TESTING_H
#define TESTING_H


class Testing : public QObject
{
    Q_OBJECT
public:
    ImageConverter* obj;
    Testing();
private slots:
    void test_ClassCreate ();     //тест на создание класса
    void test_Open ();              //тестирование открытия файла. Проверяется формат
    void test_Save ();              //тестирование сохранения файла
    void test_SaveErr ();
    void test_SaveNull ();
    void test_WidthScaling ();     //тестирование масштабирования по ширине
    void test_HeightScaling ();     //тестирование масштабирования по высоте. Ширина становится равной высоте
    void test_WidthScaling2 ();
    void test_HeightScaling2 ();
    void test_WidthScalingErr ();
    void test_HeightScalingErr();
};


#endif // TESTING_H
//#include "testing.moc"


