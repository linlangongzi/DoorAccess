#ifndef ADLOGIN_H
#define ADLOGIN_H

#include <QDialog>

namespace Ui {
class adLogin;
}

class adLogin : public QDialog
{
    Q_OBJECT
    
public:
    explicit adLogin(QWidget *parent = 0);
    ~adLogin();
    
private slots:
    void on_loginButton_clicked();

private:
    Ui::adLogin *ui;
};

#endif // ADLOGIN_H
