#ifndef WIDGET_H
#define WIDGET_H

#include <QWidget>
#include <QtSql/QSqlDatabase>
#include <QDebug>
#include <QtSql/QSqlError>
#include <QtSql/QSqlQuery>
#include <QString>

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

private slots:

    void on_pushButtonChercher_clicked();

private:
    Ui::Widget *ui;
    QSqlDatabase bd;
};

#endif // WIDGET_H
