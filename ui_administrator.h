/********************************************************************************
** Form generated from reading UI file 'administrator.ui'
**
** Created: Tue May 14 20:35:17 2013
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADMINISTRATOR_H
#define UI_ADMINISTRATOR_H

#include <QVariant>
#include <QAction>
#include <QApplication>
#include <QButtonGroup>
#include <QDialog>
#include <QHeaderView>
#include <QLabel>
#include <QPushButton>

QT_BEGIN_NAMESPACE

class Ui_administrator
{
public:
    QPushButton *newCard;
    QPushButton *changeCard;
    QLabel *label;
    QLabel *label_2;

    void setupUi(QDialog *administrator)
    {
        if (administrator->objectName().isEmpty())
            administrator->setObjectName(QString::fromUtf8("administrator"));
        administrator->resize(380, 347);
        newCard = new QPushButton(administrator);
        newCard->setObjectName(QString::fromUtf8("newCard"));
        newCard->setGeometry(QRect(90, 290, 75, 23));
        changeCard = new QPushButton(administrator);
        changeCard->setObjectName(QString::fromUtf8("changeCard"));
        changeCard->setGeometry(QRect(220, 290, 75, 23));
        label = new QLabel(administrator);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(40, 10, 321, 91));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\215\216\346\226\207\346\245\267\344\275\223"));
        font.setPointSize(20);
        label->setFont(font);
        label_2 = new QLabel(administrator);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(120, 90, 141, 171));
        label_2->setStyleSheet(QString::fromUtf8("image: url(:/image/1.jpg);"));

        retranslateUi(administrator);

        QMetaObject::connectSlotsByName(administrator);
    } // setupUi

    void retranslateUi(QDialog *administrator)
    {
        administrator->setWindowTitle(QApplication::translate("administrator", "Dialog", 0, UNICODE));
        newCard->setText(QApplication::translate("administrator", "\345\273\272\345\215\241", 0,UNICODE));
        changeCard->setText(QApplication::translate("administrator", "\346\224\271\345\215\241", 0, UNICODE));
        label->setText(QApplication::translate("administrator", "      \346\254\242\350\277\216\344\275\277\347\224\250\347\256\241\347\220\206\347\263\273\347\273\237", 0,UNICODE));
        label_2->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class administrator: public Ui_administrator {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADMINISTRATOR_H
