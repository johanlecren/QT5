#include "widget.h"
#include "ui_widget.h"
#include <QScriptEngine>
#include <QScriptValue>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_pushButton0_clicked()
{
    ui->lineEdit->insert("0");
}

void Widget::on_pushButton1_clicked()
{
    ui->lineEdit->insert("1");
}

void Widget::on_pushButton2_clicked()
{
    ui->lineEdit->insert("2");
}

void Widget::on_pushButton3_clicked()
{
    ui->lineEdit->insert("3");
}

void Widget::on_pushButton4_clicked()
{
    ui->lineEdit->insert("4");
}

void Widget::on_pushButton5_clicked()
{
    ui->lineEdit->insert("5");
}

void Widget::on_pushButton6_clicked()
{
    ui->lineEdit->insert("6");
}

void Widget::on_pushButton7_clicked()
{
    ui->lineEdit->insert("7");
}

void Widget::on_pushButton8_clicked()
{
    ui->lineEdit->insert("8");
}

void Widget::on_pushButton9_clicked()
{
    ui->lineEdit->insert("9");
}

void Widget::on_pushButtonDiv_clicked()
{
    ui->lineEdit->insert("/");
}

void Widget::on_pushButtonMulti_clicked()
{
    ui->lineEdit->insert("*");
}

void Widget::on_pushButtonMoins_clicked()
{
    ui->lineEdit->insert("-");
}

void Widget::on_pushButtonPlus_clicked()
{
    ui->lineEdit->insert("+");
}

void Widget::on_pushButtonClear_clicked()
{
    ui->lineEdit->clear();
}

void Widget::on_pushButtonEgal_clicked()
{
    QString expression = ui->lineEdit->text();
    QScriptEngine engine;
    QScriptValue valeur = engine.evaluate(expression);
    QString resultat = valeur.toString();
    ui->lineEdit->setText(resultat);
}
