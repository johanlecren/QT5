#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    QSqlDatabase bd;
    bd=QSqlDatabase::addDatabase("QMYSQL");
    bd.setHostName("172.18.58.7");
    bd.setUserName("snir");
    bd.setPassword("snir");
    bd.setDatabaseName("france2018");
    if(!bd.open())
    {
        qDebug() << "pb accès bdd" << bd.lastError();
    }else
    {
        qDebug() << "Accès bd ok";
        QSqlQuery requete("select departement_nom from departements;");
        if(!requete.exec())
        {
            qDebug() << "Pb execution requete" << requete.lastError();
        }
    }
}

Widget::~Widget()
{
    delete ui;
}



void Widget::on_pushButtonChercher_clicked()
{
        QSqlQuery requete;
        requete.prepare("select departement_nom from departements where departement_code = :code ;");
        QString leCode = ui->lineEditNumDep->text();
        requete.bindValue(":code", leCode);

        if(!requete.exec())
        {
            ui->textEditResultat->setText("je ne connais pas ! Renseigne-toi, et reviens me voir !");
        }

        else
        {
            ui->textEditResultat->clear();
            QString nomDepartement;
            while(requete.next())
            {
                nomDepartement=requete.value("departement_nom").toString();
                ui->textEditResultat->setText("Nom du departement: " + nomDepartement);
            }
        }
}
