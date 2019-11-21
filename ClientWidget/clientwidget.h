#ifndef CLIENTWIDGET_H
#define CLIENTWIDGET_H

#include <QWidget>
#include <QTcpSocket>

namespace Ui {
class ClientWidget;
}

class ClientWidget : public QWidget
{
    Q_OBJECT

public:
    explicit ClientWidget(QWidget *parent = nullptr);
    ~ClientWidget();

private slots:
    void on_pushButtonConnexion_clicked();

    void on_pushButtonNomOrdi_clicked();

    void on_pushButtonNomUtilisateur_clicked();

    void on_pushButtonArchiProc_clicked();

    void on_pushButtonOSOrdi_clicked();

private:
    Ui::ClientWidget *ui;
    QTcpSocket *socketDialogueServeur;
    QString typeDeDemande;
    void onQTcpSocket_connected();
    void onQTcpSocket_disconnected();
    void onQTcpSocket_error(QAbstractSocket::SocketError socketError);
    void onQTcpSocketReadyRead();
};

#endif // CLIENTWIDGET_H
