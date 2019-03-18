#include <QtTest>
#ifndef TESTING_H
#define TESTING_H


class Testing : public QObject
{
    Q_OBJECT
public:
    Testing();
private slots:

};

QTEST_APPLESS_MAIN(Testing)

#endif // TESTING_H
//#include "testing.moc"


