#ifndef IFTTTACCESSMANAGER_H
#define IFTTTACCESSMANAGER_H

#include <QObject>

class QNetworkAccessManager;
class QNetworkReply;

class IftttAccessManager : public QObject
{
    Q_OBJECT

public:
    IftttAccessManager(QObject *parent = nullptr);
    void requestPost();
signals:
    void postFinished(const QString &result);
protected:
    virtual QString value1() = 0;
    virtual QString value2() = 0;
    virtual QString value3() = 0;
    virtual QString webhooksKey() = 0;
    virtual QString eventName() = 0;
private:
    QNetworkAccessManager *m_networkManager;
    QNetworkReply *m_networkReply;
};

#endif // IFTTTACCESSMANAGER_H
