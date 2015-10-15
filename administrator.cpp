#include "administrator.h"
#include "ui_administrator.h"

administrator::administrator(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::administrator)
{
    ui->setupUi(this);
}

administrator::~administrator()
{
    delete ui;
}

void administrator::on_newCard_clicked()
{
    newCardDlg.show();
}

void administrator::on_changeCard_clicked()
{
    changeCardDlg.show();
}


