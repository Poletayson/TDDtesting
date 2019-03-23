#include <QtTest>
#ifndef TESTING_H
#define TESTING_H


class Testing : public QObject
{
    Q_OBJECT
public:
    ImageConverter* obj;
    Testing();
private slots:
    void test_ClassCreare ();     //тест на создание класса

};

QTEST_APPLESS_MAIN(Testing)

#endif // TESTING_H
//#include "testing.moc"


