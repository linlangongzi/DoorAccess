#include "changecard.h".h"
#include "ui_changecard.h"

changeCard::changeCard(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::changeCard)
{
    ui->setupUi(this);


//直接输出
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
//提交修改按钮
void changeCard::on_pushButton_clicked()
{
  //开始事务操作
    model->database().transaction();
    if(model->submitAll())
    {
        model->database().commit();//提交
    }
    else
    {
        model->database().rollback();//回滚
        QMessageBox::warning(this,tr("tableModel"),
                             tr("数据库错误：%1").arg(model->lastError().text()));
    }
}
//撤销修改按钮
void changeCard::on_pushButton_2_clicked()
{
    model->revertAll();
}
//查询按钮进行行筛选
void changeCard::on_pushButton_4_clicked()
{
    QString name=ui->lineEdit->text();
    //根据姓名进行筛选，一定要使用单引号
    model->setFilter(QString("name='%1'").arg(name));
    model->select();
}
//显示全表安钮
void changeCard::on_pushButton_8_clicked()
{
    model->setTable("student");
    model->select();
}
//按id升序排列
void changeCard::on_pushButton_6_clicked()
{
    //id字段，即第零列，升序排列
    model->setSort(0,Qt::AscendingOrder);
    model->select();
}
//按id降序排列按钮
void changeCard::on_pushButton_7_clicked()
{
    model->setSort(0,Qt::DescendingOrder);
    model->select();
}


//删除选中行按钮

void changeCard::on_pushButton_3_clicked()
{
    //获取选中行信息
    int curRow=ui->tableView->currentIndex().row();
    //删除该行
    model->removeRow(curRow);
    int ok=QMessageBox::warning(this,tr("删除改行"),
                                tr("are you sure"),QMessageBox::Yes,QMessageBox::No);
    if(ok==QMessageBox::No)
    {
        //如果不删除就撤销
        model->revertAll();
    }
    else
    {
        //否则提交，在数据库中删除该行
        model->submitAll();
    }
}
//添加纪录
void changeCard::on_pushButton_5_clicked()
{
    //获得表的行数
    int rowNum=model->rowCount();
    int id=10;
    //添加一行
    model->insertRow(rowNum);
    model->setData(model->index(rowNum,0),id);
    //可直接提交
//    model->submitAll();
}

