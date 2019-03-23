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

void Testing::test_WidthScaling ()  //тестирование масштабирования по ширине
{
    QCOMPARE(obj->WidthScaling ("1.jpg"), QSize (1280, 1280));
}
