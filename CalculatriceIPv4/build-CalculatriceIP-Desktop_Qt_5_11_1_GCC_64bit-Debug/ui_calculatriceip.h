/********************************************************************************
** Form generated from reading UI file 'calculatriceip.ui'
**
** Created by: Qt User Interface Compiler version 5.11.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CALCULATRICEIP_H
#define UI_CALCULATRICEIP_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CalculatriceIP
{
public:
    QWidget *centralWidget;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLineEdit *lineEdit_adresse1;
    QLineEdit *lineEdit_adresse2;
    QLineEdit *lineEdit_adresse3;
    QLineEdit *lineEdit_adresse4;
    QLineEdit *lineEdit_adr_reseau;
    QLineEdit *lineEdit_adr_ip;
    QComboBox *comboBox_suffixe;
    QComboBox *comboBox_masque;
    QComboBox *comboBox_sous_reseau_max;
    QComboBox *comboBox_max_ip;
    QPushButton *pushButtonCalculer;
    QPushButton *pushButtonQuitter;
    QLineEdit *lineEdit_adr_diffusion;
    QPushButton *pushButtonPropos;
    QMenuBar *menuBar;
    QMenu *menuCalculatrice_IPv4;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *CalculatriceIP)
    {
        if (CalculatriceIP->objectName().isEmpty())
            CalculatriceIP->setObjectName(QStringLiteral("CalculatriceIP"));
        CalculatriceIP->resize(499, 405);
        centralWidget = new QWidget(CalculatriceIP);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(40, 20, 71, 17));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(380, 10, 41, 21));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(40, 60, 54, 17));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(40, 90, 201, 17));
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(40, 120, 181, 17));
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(40, 170, 91, 17));
        label_7 = new QLabel(centralWidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(40, 210, 121, 17));
        label_8 = new QLabel(centralWidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(40, 260, 121, 17));
        lineEdit_adresse1 = new QLineEdit(centralWidget);
        lineEdit_adresse1->setObjectName(QStringLiteral("lineEdit_adresse1"));
        lineEdit_adresse1->setGeometry(QRect(130, 10, 51, 25));
        lineEdit_adresse2 = new QLineEdit(centralWidget);
        lineEdit_adresse2->setObjectName(QStringLiteral("lineEdit_adresse2"));
        lineEdit_adresse2->setGeometry(QRect(190, 10, 51, 25));
        lineEdit_adresse3 = new QLineEdit(centralWidget);
        lineEdit_adresse3->setObjectName(QStringLiteral("lineEdit_adresse3"));
        lineEdit_adresse3->setGeometry(QRect(250, 10, 51, 25));
        lineEdit_adresse4 = new QLineEdit(centralWidget);
        lineEdit_adresse4->setObjectName(QStringLiteral("lineEdit_adresse4"));
        lineEdit_adresse4->setGeometry(QRect(310, 10, 51, 25));
        lineEdit_adr_reseau = new QLineEdit(centralWidget);
        lineEdit_adr_reseau->setObjectName(QStringLiteral("lineEdit_adr_reseau"));
        lineEdit_adr_reseau->setGeometry(QRect(250, 160, 151, 25));
        lineEdit_adr_reseau->setReadOnly(true);
        lineEdit_adr_ip = new QLineEdit(centralWidget);
        lineEdit_adr_ip->setObjectName(QStringLiteral("lineEdit_adr_ip"));
        lineEdit_adr_ip->setGeometry(QRect(250, 200, 151, 25));
        lineEdit_adr_ip->setReadOnly(true);
        comboBox_suffixe = new QComboBox(centralWidget);
        comboBox_suffixe->setObjectName(QStringLiteral("comboBox_suffixe"));
        comboBox_suffixe->setGeometry(QRect(430, 10, 51, 25));
        comboBox_masque = new QComboBox(centralWidget);
        comboBox_masque->setObjectName(QStringLiteral("comboBox_masque"));
        comboBox_masque->setGeometry(QRect(250, 50, 151, 25));
        comboBox_sous_reseau_max = new QComboBox(centralWidget);
        comboBox_sous_reseau_max->setObjectName(QStringLiteral("comboBox_sous_reseau_max"));
        comboBox_sous_reseau_max->setGeometry(QRect(250, 90, 151, 25));
        comboBox_max_ip = new QComboBox(centralWidget);
        comboBox_max_ip->setObjectName(QStringLiteral("comboBox_max_ip"));
        comboBox_max_ip->setGeometry(QRect(250, 120, 151, 25));
        pushButtonCalculer = new QPushButton(centralWidget);
        pushButtonCalculer->setObjectName(QStringLiteral("pushButtonCalculer"));
        pushButtonCalculer->setGeometry(QRect(50, 310, 80, 25));
        pushButtonQuitter = new QPushButton(centralWidget);
        pushButtonQuitter->setObjectName(QStringLiteral("pushButtonQuitter"));
        pushButtonQuitter->setGeometry(QRect(250, 310, 80, 25));
        lineEdit_adr_diffusion = new QLineEdit(centralWidget);
        lineEdit_adr_diffusion->setObjectName(QStringLiteral("lineEdit_adr_diffusion"));
        lineEdit_adr_diffusion->setGeometry(QRect(250, 250, 151, 25));
        lineEdit_adr_diffusion->setReadOnly(true);
        pushButtonPropos = new QPushButton(centralWidget);
        pushButtonPropos->setObjectName(QStringLiteral("pushButtonPropos"));
        pushButtonPropos->setGeometry(QRect(150, 310, 80, 25));
        CalculatriceIP->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(CalculatriceIP);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 499, 22));
        menuCalculatrice_IPv4 = new QMenu(menuBar);
        menuCalculatrice_IPv4->setObjectName(QStringLiteral("menuCalculatrice_IPv4"));
        CalculatriceIP->setMenuBar(menuBar);
        mainToolBar = new QToolBar(CalculatriceIP);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        CalculatriceIP->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(CalculatriceIP);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        CalculatriceIP->setStatusBar(statusBar);

        menuBar->addAction(menuCalculatrice_IPv4->menuAction());

        retranslateUi(CalculatriceIP);
        QObject::connect(pushButtonQuitter, SIGNAL(clicked()), CalculatriceIP, SLOT(close()));
        QObject::connect(comboBox_masque, SIGNAL(currentIndexChanged(int)), comboBox_suffixe, SLOT(setCurrentIndex(int)));
        QObject::connect(comboBox_suffixe, SIGNAL(currentIndexChanged(int)), comboBox_masque, SLOT(setCurrentIndex(int)));
        QObject::connect(comboBox_masque, SIGNAL(currentIndexChanged(int)), comboBox_sous_reseau_max, SLOT(setCurrentIndex(int)));
        QObject::connect(comboBox_sous_reseau_max, SIGNAL(currentIndexChanged(int)), comboBox_masque, SLOT(setCurrentIndex(int)));
        QObject::connect(comboBox_sous_reseau_max, SIGNAL(currentIndexChanged(int)), comboBox_max_ip, SLOT(setCurrentIndex(int)));
        QObject::connect(comboBox_max_ip, SIGNAL(currentIndexChanged(int)), comboBox_sous_reseau_max, SLOT(setCurrentIndex(int)));
        QObject::connect(comboBox_masque, SIGNAL(currentIndexChanged(int)), comboBox_max_ip, SLOT(setCurrentIndex(int)));
        QObject::connect(comboBox_max_ip, SIGNAL(currentIndexChanged(int)), comboBox_masque, SLOT(setCurrentIndex(int)));
        QObject::connect(comboBox_sous_reseau_max, SIGNAL(currentIndexChanged(int)), comboBox_suffixe, SLOT(setCurrentIndex(int)));
        QObject::connect(comboBox_suffixe, SIGNAL(currentIndexChanged(int)), comboBox_sous_reseau_max, SLOT(setCurrentIndex(int)));
        QObject::connect(comboBox_max_ip, SIGNAL(currentIndexChanged(int)), comboBox_suffixe, SLOT(setCurrentIndex(int)));
        QObject::connect(comboBox_suffixe, SIGNAL(currentIndexChanged(int)), comboBox_max_ip, SLOT(setCurrentIndex(int)));

        QMetaObject::connectSlotsByName(CalculatriceIP);
    } // setupUi

    void retranslateUi(QMainWindow *CalculatriceIP)
    {
        CalculatriceIP->setWindowTitle(QApplication::translate("CalculatriceIP", "CalculatriceIP", nullptr));
        label->setText(QApplication::translate("CalculatriceIP", "Adresse IPv4", nullptr));
        label_2->setText(QApplication::translate("CalculatriceIP", "Suffixe", nullptr));
        label_3->setText(QApplication::translate("CalculatriceIP", "Masque", nullptr));
        label_4->setText(QApplication::translate("CalculatriceIP", "Nombre maximum de sous r\303\251seaux", nullptr));
        label_5->setText(QApplication::translate("CalculatriceIP", "Nombre maximum d'adresse IP", nullptr));
        label_6->setText(QApplication::translate("CalculatriceIP", "Adresse r\303\251seau", nullptr));
        label_7->setText(QApplication::translate("CalculatriceIP", "Adresse IP utilisables", nullptr));
        label_8->setText(QApplication::translate("CalculatriceIP", "Adresse de diffusion", nullptr));
        lineEdit_adresse1->setText(QApplication::translate("CalculatriceIP", "192", nullptr));
        lineEdit_adresse2->setText(QApplication::translate("CalculatriceIP", "168", nullptr));
        lineEdit_adresse3->setText(QApplication::translate("CalculatriceIP", "1", nullptr));
        lineEdit_adresse4->setText(QApplication::translate("CalculatriceIP", "0", nullptr));
        pushButtonCalculer->setText(QApplication::translate("CalculatriceIP", "Calculer", nullptr));
        pushButtonQuitter->setText(QApplication::translate("CalculatriceIP", "Quitter", nullptr));
        pushButtonPropos->setText(QApplication::translate("CalculatriceIP", "A propos", nullptr));
        menuCalculatrice_IPv4->setTitle(QApplication::translate("CalculatriceIP", "Calculatrice IPv4", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CalculatriceIP: public Ui_CalculatriceIP {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CALCULATRICEIP_H
