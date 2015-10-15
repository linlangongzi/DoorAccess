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
             //���崮�ڶ���ָ���������Ͳ�ѯģʽ������ʹ���¼�����EventDriven
         if(myCom->open(QIODevice::ReadWrite))//�Զ�д��ʽ�򿪴���
       // myCom->open(QIODevice::ReadOnly);
         myCom->setBaudRate(BAUD115200);//���������ã���������Ϊ9600
         myCom->setDataBits(DATA_8);//����λ���ã���������Ϊ8λ����λ
         myCom->setParity(PAR_NONE);//��żУ�����ã���������Ϊ��У��
         myCom->setStopBits(STOP_1);//ֹͣλ���ã���������Ϊ1λֹͣλ
         myCom->setFlowControl(FLOW_OFF);//�������������ã���������Ϊ������������
         myCom->setTimeout(500);
         readTimer = new QTimer(this);
         readTimer->start(1000);

             //������ʱΪ100ms

     //  connect(readTimer,SIGNAL(timeout()),this,SLOT(readMyCom()));
      // connect(myCom,SIGNAL(readyRead()),this,SLOT(readMyCom()));

    readMyCom();
   QTimer *timer = new QTimer(this);
         displayTime();
         connect(timer, SIGNAL(timeout()), this, SLOT(displayTime()));
         timer->start(1000);
    QTimer *timer = new QTimer(this);
    QDateTime time = QDateTime::currentDateTime();//��ȡϵͳ���ڵ�ʱ��
    QString str = time.toString("yyyy-MM-dd hh:mm:ss ddd"); //������ʾ��ʽ
    ui->curTimeLabel->setText(str);//�ڱ�ǩ����ʾʱ��
    */

}
void MainWindow::readMyCom(){

    QSqlQuery query;
    query.exec("SELECT * FROM student");
    QByteArray temp = myCom->readAll();

    QString card = temp.toHex().data() ;//����
    qDebug()<<card;
    QString  tempNum = QString("%1").arg(card.mid(18,8).toInt(0,16));//ѧ��
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
