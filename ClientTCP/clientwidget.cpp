#include "clientwidget.h"
#include "ui_clientwidget.h"
#include <QDebug>

ClientWidget::ClientWidget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ClientWidget)
{
    ui->setupUi(this);

    /*Creation de la socket*/
    socketDeDialogueAvecServeur = new QTcpSocket(this);
    /*Connexion de l'evenement connect avec le slot onTcpSocket_connected*/
    connect( socketDeDialogueAvecServeur, &QTcpSocket::connected,
             this, &ClientWidget::onQTcpSocket_connected);

}

ClientWidget::~ClientWidget()
{
    delete ui;
}

void ClientWidget::on_pushButtonConnexion_clicked()
{
    qDebug() << "Bouton Connexion Cliqué";
    if(ui->pushButtonConnexion->text()=="Connexion")
    {
        socketDeDialogueAvecServeur->connectToHost("172.18.58.83",8888);
    }else
    {
        socketDeDialogueAvecServeur->disconnectFromHost();
        ui->pushButtonConnexion->setText("Connexion");
        qDebug() << "Déconnecter du serveur !";
    }

}

void ClientWidget::on_pushButtonOrdinateur_clicked()
{

}

void ClientWidget::on_pushButtonUtilisateur_clicked()
{

}

void ClientWidget::on_pushButtonArchitecture_clicked()
{

}

void ClientWidget::on_pushButtonOS_clicked()
{

}

void ClientWidget::onQTcpSocket_connected()
{
    qDebug() << "Connecté au serveur 172.18.58.83";
    ui->pushButtonConnexion->setText("Deconnexion");
}

void ClientWidget::onQTcpSocket_disconnected()
{
    qDebug() << "Déconnecté au serveur 172.18.58.83";
    ui->pushButtonConnexion->setText("Connexion");
}
