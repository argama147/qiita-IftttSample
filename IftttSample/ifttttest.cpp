#include "ifttttest.h"

IftttTest::IftttTest(QObject *parent) : IftttAccessManager(parent)
{

}

QString IftttTest::value1()
{
    return "test1";
}

QString IftttTest::value2()
{
    return "test2";
}

QString IftttTest::value3()
{
    return "test3";
}

QString IftttTest::webhooksKey()
{
    return "Your Key";
}


QString IftttTest::eventName()
{
    return "hello";
}
