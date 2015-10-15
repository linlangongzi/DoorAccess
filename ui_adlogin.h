/********************************************************************************
** Form generated from reading UI file 'adlogin.ui'
**
** Created: Wed May 15 13:44:54 2013
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADLOGIN_H
#define UI_ADLOGIN_H

#include <QtCore/QVariant>
#include <QAction>
#include <QApplication>
#include <QButtonGroup>
#include <QDialog>
#include <QHeaderView>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>

QT_BEGIN_NAMESPACE

class Ui_adLogin
{
public:
    QPushButton *loginButton;
    QLabel *label;
    QLabel *label_3;
    QLineEdit *pwdLineEdit;
    QLineEdit *userLineEdit;
    QLabel *label_2;
    QLabel *label_4;
    QPushButton *exitButton;

    void setupUi(QDialog *adLogin)
    {
        if (adLogin->objectName().isEmpty())
            adLogin->setObjectName(QString::fromUtf8("adLogin"));
        adLogin->resize(385, 292);
        loginButton = new QPushButton(adLogin);
        loginButton->setObjectName(QString::fromUtf8("loginButton"));
        loginButton->setGeometry(QRect(70, 220, 75, 23));
        label = new QLabel(adLogin);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(60, 50, 201, 51));
        QFont font;
        font.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font.setPointSize(12);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label_3 = new QLabel(adLogin);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(90, 120, 51, 20));
        pwdLineEdit = new QLineEdit(adLogin);
        pwdLineEdit->setObjectName(QString::fromUtf8("pwdLineEdit"));
        pwdLineEdit->setGeometry(QRect(150, 170, 133, 20));
        userLineEdit = new QLineEdit(adLogin);
        userLineEdit->setObjectName(QString::fromUtf8("userLineEdit"));
        userLineEdit->setGeometry(QRect(150, 120, 133, 20));
        label_2 = new QLabel(adLogin);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(160, 250, 54, 12));
        label_4 = new QLabel(adLogin);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(90, 170, 51, 20));
        exitButton = new QPushButton(adLogin);
        exitButton->setObjectName(QString::fromUtf8("exitButton"));
        exitButton->setGeometry(QRect(170, 220, 75, 23));
        exitButton->setStyleSheet(QString::fromUtf8("background-color: rgb(170, 255, 255);"));
        QWidget::setTabOrder(userLineEdit, pwdLineEdit);
        QWidget::setTabOrder(pwdLineEdit, loginButton);
        QWidget::setTabOrder(loginButton, exitButton);

        retranslateUi(adLogin);
        QObject::connect(exitButton, SIGNAL(clicked()), adLogin, SLOT(close()));

        QMetaObject::connectSlotsByName(adLogin);
    } // setupUi

    void retranslateUi(QDialog *adLogin)
    {
        adLogin->setWindowTitle(QApplication::translate("adLogin", "Dialog", 0,UNICODE));
        loginButton->setText(QApplication::translate("adLogin", "\347\231\273\345\275\225", 0, UNICODE));
        label->setText(QApplication::translate("adLogin", "         \347\256\241\347\220\206\345\221\230\347\231\273\345\275\225", 0, UNICODE));
        label_3->setText(QApplication::translate("adLogin", "\347\231\273\345\275\225\345\220\215\357\274\232", 0, UNICODE));
        label_2->setText(QString());
        label_4->setText(QApplication::translate("adLogin", "\345\257\206\347\240\201:", 0, UNICODE));
        exitButton->setText(QApplication::translate("adLogin", "\345\217\226\346\266\210", 0, UNICODE));
    } // retranslateUi

};

namespace Ui {
    class adLogin: public Ui_adLogin {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADLOGIN_H
