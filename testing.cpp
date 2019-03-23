#include "testing.h"

Testing::Testing()
{

}

void Testing::test_ClassCreare ()     //тест на создание класса
{
    ImageConverter* ptr = new ImageConverter();
    QVERIFY(ptr != Q_NULLPTR);
}
