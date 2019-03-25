#include "testing.h"

Testing::Testing()
{
    obj = new ImageConverter();
}

void Testing::test_ClassCreate ()     //тест на создание класса
{
    ImageConverter* ptr = new ImageConverter();
    QVERIFY(ptr != Q_NULLPTR);
}

void Testing::test_Open ()              //тестирование открытия файла. Проверяется формат
{
    QCOMPARE(obj->Open ("1.jpg"), "jpg");
    QCOMPARE(obj->Open ("4.png"), "png");
    QCOMPARE(obj->Open ("2.jpg"), "jpg");
    QCOMPARE(obj->Open ("56757.jpg"), "");
}
void Testing::test_Save()               //тестирование сохранения файла
{
    QImage* ptr = new QImage ("1.jpg");
    QString path = QDir::currentPath();     //текущая директория
    QCOMPARE(obj->Save (ptr, path+"/tst.jpg"), "jpg");
    QCOMPARE(obj->Save (ptr, path+"/tst.png"), "png");
}

void Testing::test_SaveErr()               //тестирование сохранения файла
{
    QImage* ptr = new QImage ("132637.jpg");
    QString path = QDir::currentPath();     //текущая директория
    QCOMPARE(obj->Save (ptr, path+"/tst.jpg"), "");
}

void Testing::test_WidthScaling ()  //тестирование масштабирования по ширине
{
    QCOMPARE(obj->WidthScaling ("1.jpg"), QSize (1280, 1280));
    QCOMPARE(obj->WidthScaling ("2.jpg"), QSize (640, 640));
}

void Testing::test_HeightScaling ()     //тестирование масштабирования по высоте. Ширина становится равной высоте
{
    QCOMPARE(obj->HeightScaling ("1.jpg"), QSize (874, 874));
    QCOMPARE(obj->HeightScaling ("2.jpg"), QSize (640, 640));
}

QTEST_APPLESS_MAIN(Testing)
