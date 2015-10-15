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
    //判断用户名和密码是否正确
    if(ui->userLineEdit->text().trimmed()==tr("wangzhan")&&ui->pwdLineEdit->text()==tr("123"))
        accept();
    else
    {
        QMessageBox::warning(this,tr("Warning!"),tr("sor"),QMessageBox::Yes);
        ui->userLineEdit->clear();//清空用户名输入框
        ui->pwdLineEdit->clear();//清空密码输入框
        ui->userLineEdit->setFocus();//将光标转到用户名输入框
    }
}
