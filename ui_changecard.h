/********************************************************************************
** Form generated from reading UI file 'changecard.ui'
**
** Created: Tue May 14 20:41:22 2013
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CHANGECARD_H
#define UI_CHANGECARD_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QTableView>

QT_BEGIN_NAMESPACE

class Ui_changeCard
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_8;
    QPushButton *pushButton_6;
    QPushButton *pushButton_4;
    QTableView *tableView;
    QPushButton *pushButton_2;
    QLabel *label;
    QPushButton *pushButton_7;
    QPushButton *pushButton_5;
    QLineEdit *lineEdit;
    QPushButton *pushButton_3;

    void setupUi(QDialog *changeCard)
    {
        if (changeCard->objectName().isEmpty())
            changeCard->setObjectName(QString::fromUtf8("changeCard"));
        changeCard->resize(525, 334);
        pushButton = new QPushButton(changeCard);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(420, 90, 75, 23));
        pushButton_8 = new QPushButton(changeCard);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setGeometry(QRect(230, 290, 75, 23));
        pushButton_6 = new QPushButton(changeCard);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(330, 260, 81, 23));
        pushButton_4 = new QPushButton(changeCard);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(230, 260, 75, 23));
        tableView = new QTableView(changeCard);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(40, 70, 351, 181));
        pushButton_2 = new QPushButton(changeCard);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(420, 120, 75, 23));
        label = new QLabel(changeCard);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 270, 41, 16));
        QFont font;
        font.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font.setPointSize(9);
        label->setFont(font);
        pushButton_7 = new QPushButton(changeCard);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(330, 290, 81, 23));
        pushButton_5 = new QPushButton(changeCard);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(420, 150, 75, 23));
        lineEdit = new QLineEdit(changeCard);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(80, 270, 113, 20));
        pushButton_3 = new QPushButton(changeCard);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(420, 180, 75, 23));
        QWidget::setTabOrder(pushButton, pushButton_2);
        QWidget::setTabOrder(pushButton_2, pushButton_5);
        QWidget::setTabOrder(pushButton_5, pushButton_3);
        QWidget::setTabOrder(pushButton_3, pushButton_4);
        QWidget::setTabOrder(pushButton_4, pushButton_8);
        QWidget::setTabOrder(pushButton_8, pushButton_6);
        QWidget::setTabOrder(pushButton_6, pushButton_7);
        QWidget::setTabOrder(pushButton_7, lineEdit);
        QWidget::setTabOrder(lineEdit, tableView);

        retranslateUi(changeCard);

        QMetaObject::connectSlotsByName(changeCard);
    } // setupUi

    void retranslateUi(QDialog *changeCard)
    {
        changeCard->setWindowTitle(QApplication::translate("changeCard", "Dialog", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("changeCard", "\346\217\220\344\272\244\344\277\256\346\224\271", 0, QApplication::UnicodeUTF8));
        pushButton_8->setText(QApplication::translate("changeCard", "\346\230\276\347\244\272\345\205\250\350\241\250", 0, QApplication::UnicodeUTF8));
        pushButton_6->setText(QApplication::translate("changeCard", "\346\214\211id\345\215\207\345\272\217\346\216\222\345\210\227", 0, QApplication::UnicodeUTF8));
        pushButton_4->setText(QApplication::translate("changeCard", "\346\237\245\350\257\242", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("changeCard", "\346\222\244\351\224\200\344\277\256\346\224\271", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("changeCard", "\345\220\215\345\255\227\357\274\232", 0, QApplication::UnicodeUTF8));
        pushButton_7->setText(QApplication::translate("changeCard", "\346\214\211id\351\231\215\345\272\217\346\216\222\345\210\227", 0, QApplication::UnicodeUTF8));
        pushButton_5->setText(QApplication::translate("changeCard", "\346\267\273\345\212\240\347\272\252\345\275\225", 0, QApplication::UnicodeUTF8));
        pushButton_3->setText(QApplication::translate("changeCard", "\345\210\240\351\231\244\351\200\211\344\270\255\350\241\214", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class changeCard: public Ui_changeCard {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CHANGECARD_H
