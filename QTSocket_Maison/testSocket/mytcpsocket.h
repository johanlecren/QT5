#ifndef MYTCPSOCKET_H
#define MYTCPSOCKET_H

#include <QObject>
#include <QTcpSocket>
#include <QAbstractSocket>
#include <QDebug>


class MyTcpSocket : public QObject
{
    Q_OBJECT
public:
    explicit MyTcpSocket(QObject *parent = nullptr);

    void doConnect();  //utilsé ds le main


    signals:

    public slots:
        void connected();
        void disconnected();
        void bytesWritten(qint64 bytes);
        void readyRead();

    private:
        QTcpSocket *socket;

    };


#endif // MYTCPSOCKET_H
