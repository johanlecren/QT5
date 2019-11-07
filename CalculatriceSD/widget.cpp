#include "widget.h"
#include "ui_widget.h"
#include <QScriptEngine>
#include <QScriptValue>

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    //Touches valeurs
    connect (ui->pushButton0, &QPushButton::clicked, this, &Widget::onQPushButtonClicked);
    connect (ui->pushButton1, &QPushButton::clicked, this, &Widget::onQPushButtonClicked);
    connect (ui->pushButton2, &QPushButton::clicked, this, &Widget::onQPushButtonClicked);
    connect (ui->pushButton3, &QPushButton::clicked, this, &Widget::onQPushButtonClicked);
    connect (ui->pushButton4, &QPushButton::clicked, this, &Widget::onQPushButtonClicked);
    connect (ui->pushButton5, &QPushButton::clicked, this, &Widget::onQPushButtonClicked);
    connect (ui->pushButton6, &QPushButton::clicked, this, &Widget::onQPushButtonClicked);
    connect (ui->pushButton7, &QPushButton::clicked, this, &Widget::onQPushButtonClicked);
    connect (ui->pushButton8, &QPushButton::clicked, this, &Widget::onQPushButtonClicked);
    connect (ui->pushButton9, &QPushButton::clicked, this, &Widget::onQPushButtonClicked);
    //Touches operateurs
    connect (ui->pushButtonPlus, &QPushButton::clicked, this, &Widget::onQPushButtonClicked);
    connect (ui->pushButtonMoins, &QPushButton::clicked, this, &Widget::onQPushButtonClicked);
    connect (ui->pushButtonDiv, &QPushButton::clicked, this, &Widget::onQPushButtonClicked);
    connect (ui->pushButtonMulti, &QPushButton::clicked, this, &Widget::onQPushButtonClicked);
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_pushButtonEgal_clicked()
{
    QString expression = ui->lineEdit->text();
    QScriptEngine engine;
    QScriptValue valeur = engine.evaluate(expression);
    QString resultat = valeur.toString();
    ui->lineEdit->setText(resultat);
}

void Widget::onQPushButtonClicked()
{
    QPushButton *touche;
    touche = qobject_cast<QPushButton*>(sender());
    QString text = touche->text();
    ui->lineEdit->insert(text);
}

void Widget::on_pushButtonClear_clicked()
{
    ui->lineEdit->clear();
}
