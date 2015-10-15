/********************************************************************************
** Form generated from reading UI file 'newcard.ui'
**
** Created: Tue May 14 20:41:22 2013
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_NEWCARD_H
#define UI_NEWCARD_H

#include <QtCore/QVariant>
#include <QAction>
#include <QApplication>
#include <QButtonGroup>
#include <QComboBox>
#include <QDialog>
#include <QHeaderView>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
#include <QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_newCard
{
public:
    QPushButton *pushButton;
    QLabel *label;
    QLineEdit *cardNum;
    QTextBrowser *textBrowser;
    QLabel *label_2;
    QLineEdit *userName;
    QLabel *label_4;
    QLineEdit *userId;
    QPushButton *pushButton_2;
    QComboBox *comboBox;
    QLabel *label_3;
    QLabel *message;

    void setupUi(QDialog *newCard)
    {
        if (newCard->objectName().isEmpty())
            newCard->setObjectName(QString::fromUtf8("newCard"));
        newCard->resize(540, 358);
        pushButton = new QPushButton(newCard);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(120, 280, 75, 23));
        label = new QLabel(newCard);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(70, 60, 31, 16));
        cardNum = new QLineEdit(newCard);
        cardNum->setObjectName(QString::fromUtf8("cardNum"));
        cardNum->setGeometry(QRect(140, 60, 113, 20));
        textBrowser = new QTextBrowser(newCard);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(260, 160, 221, 91));
        label_2 = new QLabel(newCard);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(70, 100, 41, 16));
        userName = new QLineEdit(newCard);
        userName->setObjectName(QString::fromUtf8("userName"));
        userName->setGeometry(QRect(140, 160, 113, 20));
        label_4 = new QLabel(newCard);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(70, 210, 54, 12));
        userId = new QLineEdit(newCard);
        userId->setObjectName(QString::fromUtf8("userId"));
        userId->setGeometry(QRect(140, 90, 113, 20));
        pushButton_2 = new QPushButton(newCard);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(330, 280, 75, 23));
        comboBox = new QComboBox(newCard);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));
        comboBox->setGeometry(QRect(140, 210, 111, 22));
        label_3 = new QLabel(newCard);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(70, 160, 54, 12));
        message = new QLabel(newCard);
        message->setObjectName(QString::fromUtf8("message"));
        message->setGeometry(QRect(280, 70, 201, 51));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        message->setFont(font);
        QWidget::setTabOrder(cardNum, userId);
        QWidget::setTabOrder(userId, userName);
        QWidget::setTabOrder(userName, comboBox);
        QWidget::setTabOrder(comboBox, pushButton);
        QWidget::setTabOrder(pushButton, pushButton_2);
        QWidget::setTabOrder(pushButton_2, textBrowser);

        retranslateUi(newCard);

        QMetaObject::connectSlotsByName(newCard);
    } // setupUi

    void retranslateUi(QDialog *newCard)
    {
        newCard->setWindowTitle(QApplication::translate("newCard", "Dialog", 0,UNICODE));
        pushButton->setText(QApplication::translate("newCard", "\345\274\200\345\215\241", 0, UNICODE));
        label->setText(QApplication::translate("newCard", "\345\215\241\345\217\267", 0, UNICODE));
        label_2->setText(QApplication::translate("newCard", "\345\221\230\345\267\245\345\217\267", 0, UNICODE));
        label_4->setText(QApplication::translate("newCard", "\346\211\200\345\261\236\351\203\250\351\227\250", 0, UNICODE));
        pushButton_2->setText(QApplication::translate("newCard", "\351\200\200\345\207\272", 0, UNICODE));
        label_3->setText(QApplication::translate("newCard", "\345\221\230\345\267\245\345\247\223\345\220\215", 0, UNICODE));
        message->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class newCard: public Ui_newCard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_NEWCARD_H
