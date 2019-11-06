#ifndef MYUDPSOCKET_H
#define MYUDPSOCKET_H

#include <QObject>
#include <QUdpSocket>

class MyUdpSocket : public QObject
{
    Q_OBJECT
public:
    explicit MyUdpSocket(QObject *parent = nullptr);

signals:

public slots:
    void HelloUDP();
    void readyRead();


private:
    QUdpSocket *socket;
};

#endif // MYUDPSOCKET_H
