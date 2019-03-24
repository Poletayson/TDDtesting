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
