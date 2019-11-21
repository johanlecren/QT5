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
    }

    QSqlQuery requete("select code, name from regions order by name;" );
        if (!requete.exec()){
            qDebug()<<"pb requete "<<requete.lastError();
        }
        QString nom;
        QString id;

        while(requete.next())
        {
            nom=requete.value("name").toString();
            id=requete.value("code").toString();
            ui->comboBoxRegions->addItem(nom,id);
        }
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_comboBoxRegions_currentIndexChanged(int index)
{
    int idRegion=ui->comboBoxRegions->itemData(index).toInt();
    ui->comboBoxDepartements->clear();
    ui->comboBoxDepartements->addItem("Choisissez un département");

    QSqlQuery requete;
    requete.prepare("select code,name from departments where region_code = :idr;" );
    requete.bindValue(":idr", idRegion);
    if (!requete.exec()){
        qDebug()<<"pb requete region"<<requete.lastError();
        ui->textEdit->append("PB REQUETE");
    }
    QString nom;
    QString id;

    while(requete.next())
    {
        nom=requete.value("name").toString();
        id=requete.value("code").toString();
        ui->comboBoxDepartements->addItem(nom,id);
    }
}

void Widget::on_comboBoxDepartements_currentIndexChanged(int index)
{
    int idDepartement=ui->comboBoxDepartements->itemData(index).toInt();
    ui->comboBoxVilles->clear();
    ui->comboBoxVilles->addItem("Choisissez une ville");

    QSqlQuery requete;
    requete.prepare("select id,name from cities where department_code = :idd;" );
    requete.bindValue(":idd", idDepartement);
    if (!requete.exec()){
        qDebug()<<"pb requete departements"<<requete.lastError();
        ui->textEdit->setText("PB REQUETE");
    }
    QString nom;
    QString id;

    while(requete.next())
    {
        nom=requete.value("name").toString();
        id=requete.value("id").toString();
        ui->comboBoxVilles->addItem(nom,id);
    }
}


