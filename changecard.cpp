#include "changecard.h".h"
#include "ui_changecard.h"

changeCard::changeCard(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::changeCard)
{
    ui->setupUi(this);


//ֱ�����
    model=new QSqlTableModel(this);
    model->setTable("student");
    model->select();
    model->setEditStrategy(QSqlTableModel::OnManualSubmit);
    ui->tableView->setModel(model);

}

changeCard::~changeCard()
{
    delete ui;
}
//�ύ�޸İ�ť
void changeCard::on_pushButton_clicked()
{
  //��ʼ�������
    model->database().transaction();
    if(model->submitAll())
    {
        model->database().commit();//�ύ
    }
    else
    {
        model->database().rollback();//�ع�
        QMessageBox::warning(this,tr("tableModel"),
                             tr("���ݿ����%1").arg(model->lastError().text()));
    }
}
//�����޸İ�ť
void changeCard::on_pushButton_2_clicked()
{
    model->revertAll();
}
//��ѯ��ť������ɸѡ
void changeCard::on_pushButton_4_clicked()
{
    QString name=ui->lineEdit->text();
    //������������ɸѡ��һ��Ҫʹ�õ�����
    model->setFilter(QString("name='%1'").arg(name));
    model->select();
}
//��ʾȫ��ť
void changeCard::on_pushButton_8_clicked()
{
    model->setTable("student");
    model->select();
}
//��id��������
void changeCard::on_pushButton_6_clicked()
{
    //id�ֶΣ��������У���������
    model->setSort(0,Qt::AscendingOrder);
    model->select();
}
//��id�������а�ť
void changeCard::on_pushButton_7_clicked()
{
    model->setSort(0,Qt::DescendingOrder);
    model->select();
}


//ɾ��ѡ���а�ť

void changeCard::on_pushButton_3_clicked()
{
    //��ȡѡ������Ϣ
    int curRow=ui->tableView->currentIndex().row();
    //ɾ������
    model->removeRow(curRow);
    int ok=QMessageBox::warning(this,tr("ɾ������"),
                                tr("are you sure"),QMessageBox::Yes,QMessageBox::No);
    if(ok==QMessageBox::No)
    {
        //�����ɾ���ͳ���
        model->revertAll();
    }
    else
    {
        //�����ύ�������ݿ���ɾ������
        model->submitAll();
    }
}
//��Ӽ�¼
void changeCard::on_pushButton_5_clicked()
{
    //��ñ������
    int rowNum=model->rowCount();
    int id=10;
    //���һ��
    model->insertRow(rowNum);
    model->setData(model->index(rowNum,0),id);
    //��ֱ���ύ
//    model->submitAll();
}

