#include <QCoreApplication>
#include "myudpsocket.h"

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    MyUdpSocket client;

    client.HelloUDP();


    return a.exec();
}
