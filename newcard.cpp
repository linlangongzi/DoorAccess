#include "newcard.h"
#include "ui_newcard.h"

newCard::newCard(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::newCard)
{
    ui->setupUi(this);
    QSqlQuery query;

    query.exec("insert into user values('0101','王刚',1,1)");
    query.exec("insert into user values('0102','杨勇虎',1,2)");
    query.exec("insert into user values('0201','陈廷斌',2,1)");
    query.exec("insert into user values('0202','王倩',2,2)");
   query.exec("insert into department values(1,'计算机系',1)");
   query.exec("insert into department values(2,'信管系',2)");

    query.exec("select * from department order by deptno");
    while(query.next()){
      QString departmentid=query.value(0).toString();
      QString departmentname=query.value(1).toString();
      ui->comboBox->addItem(departmentname,departmentid);
    }

  //myCom = new Win_QextSerialPort("COM2",QextSerialBase::EventDriven);
   myCom = new Win_QextSerialPort("COM2",QextSerialBase::Polling);
       //定义串口对象，指定串口名和查询模式，这里使用事件驱动EventDriven
   myCom ->open(QIODevice::ReadWrite);//以读写方式打开串口
   myCom->setBaudRate(BAUD115200);//波特率设置，我们设置为9600
   myCom->setDataBits(DATA_8);//数据位设置，我们设置为8位数据位
   myCom->setParity(PAR_NONE);//奇偶校验设置，我们设置为无校验
   myCom->setStopBits(STOP_1);//停止位设置，我们设置为1位停止位
   myCom->setFlowControl(FLOW_OFF);//数据流控制设置，我们设置为无数据流控制
   myCom->setTimeout(500); //延时设置，我们设置为延时500ms,这个在Windows下好像不起作用
   connect(myCom,SIGNAL(readyRead()),this,SLOT(readMyCom()));
        //信号和槽函数关联，当串口缓冲区有数据时，进行读串口操作
  // readTimer = new QTimer(this);
  // readTimer->start(500);
  // connect(readTimer,SIGNAL(timeout()),this,SLOT(readMyCom()));
}

newCard::~newCard()
{
    ui->cardNum->clear();

    delete ui;
}
void newCard::on_pushButton_2_clicked()//quit
{
    ui->cardNum->clear();
    ui->userId->clear();
    ui->userName->clear();
    ui->textBrowser->clear();
    ui->message->clear();
    this->close();
}
void newCard::closeEvent( QCloseEvent * event) {
    ui->cardNum->clear();
    ui->userId->clear();
    ui->userName->clear();
    ui->textBrowser->clear();
    ui->message->clear();
}

void newCard::on_pushButton_clicked()
{
    QSqlQuery query,query1;
    QString cardnum, userid;
    int i;
    //QByteArray writeByte;
    QString writeByte;

    cardnum = ui->cardNum->text();
    userid = ui->userId->text();

    writeByte[0]=0x2;
    writeByte[1]=0x33;
    writeByte[2]=0x31;
    writeByte[3]=0x30;
    writeByte[4]=0x31; //设置卡的状态为1，证明是有效状态

    writeByte[5]=userid[0]; //设置用户编号
    writeByte[6]=userid[1];
    writeByte[7]=userid[2];
    writeByte[8]=userid[3];

    for(i=9;i<36;i++)
        writeByte[i]=0x41;
    writeByte[36]=0x3;

    query.prepare("insert into card(cardid,userid,password,status) values (?,?,'111',1)");
    query1.prepare("select * from card where cardid=?");
    query.bindValue(0,cardnum);
    query.bindValue(1,userid);

    query1.bindValue(0,cardnum);
    query1.exec();
    if(!query1.next()){
      QMessageBox mb("门禁管理",
                           "确定要开卡吗？",
                           QMessageBox::Question,
                           QMessageBox::Yes | QMessageBox::Default,
                           QMessageBox::No | QMessageBox::Escape,
                           QMessageBox::NoButton);
      if (mb.exec() == QMessageBox::Yes) {
         query.exec();
         myCom->write(writeByte);
         ui->message->setText("开卡成功！");
       }
   }
   else
       ui->message->setText("此卡已经存在！");
}

void newCard::on_userId_editingFinished()
{
     QSqlQuery query;
     QString userid;
     query.prepare("select username,departmentid from user"
                  "  where userid=?");
     userid = ui->userId->text();
     query.bindValue(0,userid);
     query.exec();
     if(query.next()){
       ui->userName->setText(query.value(0).toString());
       ui->comboBox->setCurrentIndex(query.value(1).toInt()-1);
     }
     else
         ui->message->setText("没有此员工，员工号有误");
}
void newCard::readMyCom() //读取串口数据并显示出来

{
    int i, cmdBuf;
    QByteArray RcvByte,cardID;
    //int cardNum;
    if(myCom->bytesAvailable() >=48 )

    {
    QByteArray RcvBuf= myCom->readAll();
    RcvByte = RcvBuf.toHex();
    cmdBuf = RcvByte[3];
    if(cmdBuf == 57)
    {  for(i=4;i<20;i++)
           cardID[i-4]=RcvByte[i];
       ui->cardNum->setText(cardID);

    }
    ui->textBrowser->insertPlainText(RcvByte);
  }
}
