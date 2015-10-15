#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "dbconnection.h"
#include "administrator.h"
#include<QSqlQuery>
#include<QDateTime>
#include<QTimer>
#include<QDebug>
#include<Qstyle>
#include<QLabel>
#include<QMainWindow>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    readMyCom();
    /*  // myCom = new Win_QextSerialPort("COM2",QextSerialBase::EventDriven);
        myCom = new Win_QextSerialPort("COM4",QextSerialBase::Polling);
             //定义串口对象，指定串口名和查询模式，这里使用事件驱动EventDriven
         if(myCom->open(QIODevice::ReadWrite))//以读写方式打开串口
       // myCom->open(QIODevice::ReadOnly);
         myCom->setBaudRate(BAUD115200);//波特率设置，我们设置为9600
         myCom->setDataBits(DATA_8);//数据位设置，我们设置为8位数据位
         myCom->setParity(PAR_NONE);//奇偶校验设置，我们设置为无校验
         myCom->setStopBits(STOP_1);//停止位设置，我们设置为1位停止位
         myCom->setFlowControl(FLOW_OFF);//数据流控制设置，我们设置为无数据流控制
         myCom->setTimeout(500);
         readTimer = new QTimer(this);
         readTimer->start(1000);

             //设置延时为100ms

     //  connect(readTimer,SIGNAL(timeout()),this,SLOT(readMyCom()));
      // connect(myCom,SIGNAL(readyRead()),this,SLOT(readMyCom()));

    readMyCom();
   QTimer *timer = new QTimer(this);
         displayTime();
         connect(timer, SIGNAL(timeout()), this, SLOT(displayTime()));
         timer->start(1000);
    QTimer *timer = new QTimer(this);
    QDateTime time = QDateTime::currentDateTime();//获取系统现在的时间
    QString str = time.toString("yyyy-MM-dd hh:mm:ss ddd"); //设置显示格式
    ui->curTimeLabel->setText(str);//在标签上显示时间
    */

}
void MainWindow::readMyCom(){

    QSqlQuery query;
    query.exec("SELECT * FROM student");
    QByteArray temp = myCom->readAll();

    QString card = temp.toHex().data() ;//卡号
    qDebug()<<card;
    QString  tempNum = QString("%1").arg(card.mid(18,8).toInt(0,16));//学号
    qDebug()<<tempNum;
    while(query.next())
    {
        QString cardNum;
        QString name;
        QString num;
        num=11111800203;
        cardNum=query.value(0).toString();
        name=query.value(2).toString();
       // num=query.value(1).toString();
        QString test="11111800203";
  //     if(card.mid(10,8)==cardNum)
        if(num==test)
        {
            ui->numLineEdit->setText(tempNum);
            ui->nameLineEdit->setText(name);
          ui->label->show();
        }


    }




}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_adButton_clicked()
{
    adLogin in;
    if(in.exec()==QDialog::Accepted)
    {

        ad.show();
    }

}

void MainWindow::displayTime()
 {
     QDateTime dt;
     QTime time;
     QDate date;

     dt.setTime(time.currentTime());
     dt.setDate(date.currentDate());

     QString currentDate = dt.toString("yyyy.MM.dd  hh:mm:ss  ddd");
     ui->curTimeLabel->setText(currentDate);
 }
