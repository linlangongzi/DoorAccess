#include "adlogin.h"
#include "ui_adlogin.h"
#include<QMessageBox>
adLogin::adLogin(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::adLogin)
{
    ui->setupUi(this);
    ui->pwdLineEdit->setEchoMode(QLineEdit::Password);
}

adLogin::~adLogin()
{
    delete ui;
}

void adLogin::on_loginButton_clicked()
{
    //�ж��û����������Ƿ���ȷ
    if(ui->userLineEdit->text().trimmed()==tr("wangzhan")&&ui->pwdLineEdit->text()==tr("123"))
        accept();
    else
    {
        QMessageBox::warning(this,tr("Warning!"),tr("sor"),QMessageBox::Yes);
        ui->userLineEdit->clear();//����û��������
        ui->pwdLineEdit->clear();//������������
        ui->userLineEdit->setFocus();//�����ת���û��������
    }
}
