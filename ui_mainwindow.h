/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Tue May 21 12:15:36 2013
**      by: Qt User Interface Compiler version 4.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QVariant>
#include <QAction>
#include <QApplication>
#include <QButtonGroup>
#include <QHeaderView>
#include <QLabel>
#include <QLineEdit>
#include <QMainWindow>
#include <QPushButton>
#include <QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *adButton;
    QLabel *nameLabel;
    QLineEdit *numLineEdit;
    QLineEdit *nameLineEdit;
    QLabel *stuLabel;
    QLabel *timeLabel;
    QLabel *curTimeLabel;
    QLabel *label;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(477, 310);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        adButton = new QPushButton(centralWidget);
        adButton->setObjectName(QString::fromUtf8("adButton"));
        adButton->setGeometry(QRect(30, 160, 75, 21));
        nameLabel = new QLabel(centralWidget);
        nameLabel->setObjectName(QString::fromUtf8("nameLabel"));
        nameLabel->setGeometry(QRect(30, 30, 51, 31));
        QFont font;
        font.setPointSize(15);
        nameLabel->setFont(font);
        numLineEdit = new QLineEdit(centralWidget);
        numLineEdit->setObjectName(QString::fromUtf8("numLineEdit"));
        numLineEdit->setGeometry(QRect(110, 80, 141, 31));
        nameLineEdit = new QLineEdit(centralWidget);
        nameLineEdit->setObjectName(QString::fromUtf8("nameLineEdit"));
        nameLineEdit->setGeometry(QRect(110, 30, 141, 31));
        stuLabel = new QLabel(centralWidget);
        stuLabel->setObjectName(QString::fromUtf8("stuLabel"));
        stuLabel->setGeometry(QRect(30, 90, 81, 21));
        stuLabel->setFont(font);
        timeLabel = new QLabel(centralWidget);
        timeLabel->setObjectName(QString::fromUtf8("timeLabel"));
        timeLabel->setGeometry(QRect(40, 260, 54, 12));
        QFont font1;
        font1.setFamily(QString::fromUtf8("Adobe \344\273\277\345\256\213 Std R"));
        font1.setPointSize(12);
        timeLabel->setFont(font1);
        curTimeLabel = new QLabel(centralWidget);
        curTimeLabel->setObjectName(QString::fromUtf8("curTimeLabel"));
        curTimeLabel->setGeometry(QRect(90, 260, 261, 16));
        QFont font2;
        font2.setFamily(QString::fromUtf8("Adobe \346\245\267\344\275\223 Std R"));
        font2.setPointSize(12);
        curTimeLabel->setFont(font2);
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setEnabled(false);
        label->setGeometry(QRect(280, 20, 141, 121));
        label->setAutoFillBackground(false);
        label->setStyleSheet(QString::fromUtf8("image: url(:/image/039.jpg);"));
        MainWindow->setCentralWidget(centralWidget);
        QWidget::setTabOrder(nameLineEdit, numLineEdit);
        QWidget::setTabOrder(numLineEdit, adButton);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0,UNICODE));
        adButton->setText(QApplication::translate("MainWindow", "\345\270\220\345\217\267\347\256\241\347\220\206", 0,UNICODE));
        nameLabel->setText(QApplication::translate("MainWindow", "\345\247\223\345\220\215\357\274\232", 0, UNICODE));
        stuLabel->setText(QApplication::translate("MainWindow", "\345\255\246\345\217\267\357\274\232", 0, UNICODE));
        timeLabel->setText(QApplication::translate("MainWindow", "\346\227\266\351\227\264\357\274\232", 0, UNICODE));
        curTimeLabel->setText(QString());
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
