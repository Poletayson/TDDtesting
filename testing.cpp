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
    obj->img = new QImage ("1.jpg");
    QCOMPARE(obj->WidthScaling (), QSize (1280, 1280));
    //QCOMPARE(obj->WidthScaling ("2.jpg"), QSize (640, 640));
}

void Testing::test_HeightScaling ()     //тестирование масштабирования по высоте. Ширина становится равной высоте
{
    obj->img = new QImage ("1.jpg");
    QCOMPARE(obj->HeightScaling (), QSize (874, 874));
    //QCOMPARE(obj->HeightScaling ("2.jpg"), QSize (640, 640));
}
void Testing::test_WidthScaling2 ()  //тестирование масштабирования по ширине
{
    obj->img = new QImage ("2.jpg");
    QCOMPARE(obj->WidthScaling (), QSize (640, 640));
}

void Testing::test_HeightScaling2 ()     //тестирование масштабирования по высоте. Ширина становится равной высоте
{
    obj->img = new QImage ("2.jpg");
    QCOMPARE(obj->HeightScaling (), QSize (640, 640));
}
void Testing::test_WidthScalingErr()   //тестирование масштабирования по ширине
{
    obj->img = new QImage ("2222.jpg");
    QCOMPARE(obj->WidthScaling (), QSize (0, 0));
}

void Testing::test_HeightScalingErr()     //тестирование масштабирования по высоте. Ширина становится равной высоте
{
    obj->img = new QImage ("222.jpg");
    QCOMPARE(obj->HeightScaling (), QSize (0, 0));
}

QTEST_APPLESS_MAIN(Testing)
