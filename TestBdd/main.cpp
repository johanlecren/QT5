#include <QCoreApplication>
#include <QtSql/QSqlDatabase>
#include <QDebug>
#include <QtSql/QSqlError>
#include <QtSql/QSqlQuery>
#include <QString>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

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
        }else
        {
            qDebug() << "Nombre de départements : " << requete.size();
            QString nomDepartement;
            while(requete.next())
            {
                nomDepartement = requete.value("departement_nom").toString();
                qDebug() << nomDepartement;
            }

        }
        QSqlQuery requetePrepare;
        requetePrepare.prepare("select departement_nom from departements where departement_region_id = :idr;");
        requetePrepare.bindValue(":idr",5);
        if(!requetePrepare.exec())
        {
            qDebug() << "Pb execution requete" << requete.lastError();
        }else
        {
            qDebug() << "nombre de departements dans la région :" << requetePrepare.size();
            QString nomDep;
            while(!requetePrepare.next())
            {
                nomDep = requetePrepare.value("depratement_nom").toString();
            }
        }

    }


    return a.exec();
}
