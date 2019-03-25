#include <imageconverter.h>
#include <QtTest>
#include <QImage>
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
    void test_WidthScaling ();     //тестирование масштабирования по ширине
    void test_HeightScaling ();     //тестирование масштабирования по высоте. Ширина становится равной высоте
};

//QTEST_APPLESS_MAIN(Testing)

#endif // TESTING_H
//#include "testing.moc"


