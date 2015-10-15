#include "newcard.h"
#include "ui_newcard.h"

newCard::newCard(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::newCard)
{
    ui->setupUi(this);
    QSqlQuery query;

    query.exec("insert into user values('0101','����',1,1)");
    query.exec("insert into user values('0102','���»�',1,2)");
    query.exec("insert into user values('0201','��͢��',2,1)");
    query.exec("insert into user values('0202','��ٻ',2,2)");
   query.exec("insert into department values(1,'�����ϵ',1)");
   query.exec("insert into department values(2,'�Ź�ϵ',2)");

    query.exec("select * from department order by deptno");
    while(query.next()){
      QString departmentid=query.value(0).toString();
      QString departmentname=query.value(1).toString();
      ui->comboBox->addItem(departmentname,departmentid);
    }

  //myCom = new Win_QextSerialPort("COM2",QextSerialBase::EventDriven);
   myCom = new Win_QextSerialPort("COM2",QextSerialBase::Polling);
       //���崮�ڶ���ָ���������Ͳ�ѯģʽ������ʹ���¼�����EventDriven
   myCom ->open(QIODevice::ReadWrite);//�Զ�д��ʽ�򿪴���
   myCom->setBaudRate(BAUD115200);//���������ã���������Ϊ9600
   myCom->setDataBits(DATA_8);//����λ���ã���������Ϊ8λ����λ
   myCom->setParity(PAR_NONE);//��żУ�����ã���������Ϊ��У��
   myCom->setStopBits(STOP_1);//ֹͣλ���ã���������Ϊ1λֹͣλ
   myCom->setFlowControl(FLOW_OFF);//�������������ã���������Ϊ������������
   myCom->setTimeout(500); //��ʱ���ã���������Ϊ��ʱ500ms,�����Windows�º���������
   connect(myCom,SIGNAL(readyRead()),this,SLOT(readMyCom()));
        //�źźͲۺ��������������ڻ�����������ʱ�����ж����ڲ���
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
    writeByte[4]=0x31; //���ÿ���״̬Ϊ1��֤������Ч״̬

    writeByte[5]=userid[0]; //�����û����
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
      QMessageBox mb("�Ž�����",
                           "ȷ��Ҫ������",
                           QMessageBox::Question,
                           QMessageBox::Yes | QMessageBox::Default,
                           QMessageBox::No | QMessageBox::Escape,
                           QMessageBox::NoButton);
      if (mb.exec() == QMessageBox::Yes) {
         query.exec();
         myCom->write(writeByte);
         ui->message->setText("�����ɹ���");
       }
   }
   else
       ui->message->setText("�˿��Ѿ����ڣ�");
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
         ui->message->setText("û�д�Ա����Ա��������");
}
void newCard::readMyCom() //��ȡ�������ݲ���ʾ����

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
