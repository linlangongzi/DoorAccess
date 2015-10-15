#ifndef CHANGECARD_H
#define CHANGECARD_H
#include<QSqlQuery>
#include<QSqlTableModel>
#include<QSqlRelationalTableModel>
#include<QTableView>
#include<QDebug>
#include<QMessageBox>
#include<QSqlError>
#include<QSqlRelationalDelegate>
#include <QDialog>

namespace Ui {
class changeCard;
}

class changeCard : public QDialog
{
    Q_OBJECT
    
public:
    explicit changeCard(QWidget *parent = 0);
    ~changeCard();
private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_7_clicked();

private:
    Ui::changeCard *ui;
    QSqlTableModel *model;

};

#endif // CHANGECARD_H
