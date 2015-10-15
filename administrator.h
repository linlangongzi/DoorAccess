#ifndef ADMINISTRATOR_H
#define ADMINISTRATOR_H

#include <QDialog>

#include"newcard.h"
#include"changecard.h"
namespace Ui {
class administrator;
}

class administrator : public QDialog
{
    Q_OBJECT
    
public:
    explicit administrator(QWidget *parent = 0);
    ~administrator();
    
private slots:
    void on_newCard_clicked();

    void on_changeCard_clicked();


private:
    Ui::administrator *ui;
    newCard newCardDlg;
    changeCard changeCardDlg;

};

#endif // ADMINISTRATOR_H
