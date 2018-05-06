#ifndef IFTTTTEST_H
#define IFTTTTEST_H

#include "iftttaccessmanager.h"

class IftttTest : public IftttAccessManager
{
    Q_OBJECT
public:
    explicit IftttTest(QObject *parent = nullptr);
protected:
    QString value1() override;
    QString value2() override;
    QString value3() override;
    QString webhooksKey() override;
};

#endif // IFTTTTEST_H
