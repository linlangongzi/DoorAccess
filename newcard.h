#ifndef NEWCARD_H
#define NEWCARD_H
#include"dbconnection.h"
#include <QDialog>
#include"win_qextserialport.h"
#include"ui_newcard.h"
namespace Ui {
class newCard;
}

class newCard : public QDialog
{
    Q_OBJECT
    
public:
    explicit newCard(QWidget *parent = 0);
    ~newCard();

private:
    Ui::newCard *ui;
    dbconnect conn;
    Win_QextSerialPort *myCom;
    QTimer *readTimer;
protected:
    void closeEvent( QCloseEvent * event );
private slots:

   // void on_pushButton_clicked(); //”发送数据”按钮槽函数

    void on_userId_editingFinished();

    void on_pushButton_clicked();
    void on_pushButton_2_clicked();

    void readMyCom();  //读取串口
};

#endif // NEWCARD_H
