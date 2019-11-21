#include "clientwidget.h"
#include "ui_clientwidget.h"
#include <QDebug>

ClientWidget::ClientWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ClientWidget)
{
    ui->setupUi(this);
    socketDialogueServeur = new QTcpSocket(this);
    connect(socketDialogueServeur,&QTcpSocket::connected,this,&ClientWidget::onQTcpSocket_connected);
    connect(socketDialogueServeur,&QTcpSocket::disconnected,this,&ClientWidget::onQTcpSocket_disconnected);
    connect(socketDialogueServeur,&QTcpSocket::readyRead,this,&ClientWidget::onQTcpSocketReadyRead);
}

ClientWidget::~ClientWidget()
{
    delete ui;
    delete socketDialogueServeur;
}

void ClientWidget::on_pushButtonConnexion_clicked()
{
    qDebug() << "Bouton cliqué";
    if(ui->pushButtonConnexion->text() == "Connexion"){
        QString adresseIP = ui->lineEditIP->text();
        quint16 port = static_cast<quint16>(ui->lineEditPort->text().toShort());
        socketDialogueServeur->connectToHost(adresseIP,port);
    }else if (ui->pushButtonConnexion->text() == "Déconnexion") {
        socketDialogueServeur->disconnectFromHost();
    }
}

void ClientWidget::onQTcpSocket_connected()
{
    qDebug() << "Connecté au serveur";
    ui->pushButtonConnexion->setText("Déconnexion");
    ui->textEditEtat->clear();
    ui->textEditEtat->append("Connecté au serveur ");
}

void ClientWidget::onQTcpSocket_disconnected()
{
    qDebug() << "Déonnecté au serveur";
    ui->pushButtonConnexion->setText("Connexion");
    ui->textEditEtat->clear();
    ui->textEditEtat->append("Déconnecté du serveur");
    ui->lineEditOSOrdi->clear();
    ui->lineEditNomOrdi->clear();
    ui->lineEditArchiProc->clear();
    ui->lineEditNomUtilisateur->clear();
}

void ClientWidget::onQTcpSocket_error(QAbstractSocket::SocketError socketError)
{
    ui->textEditEtat->append(socketDialogueServeur->errorString());
}

void ClientWidget::onQTcpSocketReadyRead()
{
    qDebug() << "réponse du serveur";
    QByteArray buffer;
    buffer = socketDialogueServeur->readAll();
    if(typeDeDemande == "c"){
        ui->lineEditNomOrdi->setText(buffer);
    }
    if(typeDeDemande == "o"){
        ui->lineEditOSOrdi->setText(buffer);
    }
    if(typeDeDemande == "a"){
        ui->lineEditArchiProc->setText(buffer);
    }
    if(typeDeDemande == "u"){
        ui->lineEditNomUtilisateur->setText(buffer);
    }
}

void ClientWidget::on_pushButtonNomOrdi_clicked()
{
    typeDeDemande = "c";
    socketDialogueServeur->write(typeDeDemande.toLatin1());
}

void ClientWidget::on_pushButtonNomUtilisateur_clicked()
{
    typeDeDemande = "u";
    socketDialogueServeur->write(typeDeDemande.toLatin1());
}

void ClientWidget::on_pushButtonArchiProc_clicked()
{
    typeDeDemande = "a";
    socketDialogueServeur->write(typeDeDemande.toLatin1());
}

void ClientWidget::on_pushButtonOSOrdi_clicked()
{
    typeDeDemande = "o";
    socketDialogueServeur->write(typeDeDemande.toLatin1());
}
