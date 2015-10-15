#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include"administrator.h"
#include <QMainWindow>
#include <QWindow>
#include <QtDebug>
#include"dbconnection.h"
#include<win_qextserialport.h>
#include<qextserialbase.h>
#include<QTimer>
#include<adlogin.h>
#include<ui_adlogin.h>
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    void information(QString);

private slots:
    void readMyCom();
    void on_adButton_clicked();
    void displayTime();
private:
    Ui::MainWindow *ui;
    Win_QextSerialPort *myCom;
    dbconnect conn;
    QTimer *readTimer;
    administrator ad;

};

#endif // MAINWINDOW_H
